/*
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2001-2002 by NaN Holding BV.
 * All rights reserved.
 *
 * The Original Code is: all of this file.
 *
 * Contributor(s): none yet.
 *
 * ***** END GPL LICENSE BLOCK *****
 */
#ifndef __BKE_BLENDER_H__
#define __BKE_BLENDER_H__

/** \file BKE_blender.h
 *  \ingroup bke
 *  \since March 2001
 *  \author nzc
 *  \brief Blender util stuff
 */

#ifdef __cplusplus
extern "C" {
#endif

/* these lines are grep'd, watch out for our not-so-awesome regex
 * and keep comment above the defines.
 * Use STRINGIFY() rather than defining with quotes */
#define BLENDER_VERSION         277
#define BLENDER_SUBVERSION      0
/* Several breakages with 270, e.g. constraint deg vs rad */
#define BLENDER_MINVERSION      270
#define BLENDER_MINSUBVERSION   6

/* used by packaging tools */
/* can be left blank, otherwise a,b,c... etc with no quotes */
#define BLENDER_VERSION_CHAR   
/* alpha/beta/rc/release, docs use this */
#define BLENDER_VERSION_CYCLE   release

extern char versionstr[]; /* from blender.c */

struct MemFile;
struct bContext;
struct ReportList;
struct Scene;
struct Main;
struct ID;

int BKE_read_file(struct bContext *C, const char *filepath, struct ReportList *reports);

#define BKE_READ_FILE_FAIL              0 /* no load */
#define BKE_READ_FILE_OK                1 /* OK */
#define BKE_READ_FILE_OK_USERPREFS      2 /* OK, and with new user settings */

bool BKE_read_file_from_memory(
        struct bContext *C, const void *filebuf,
        int filelength, struct ReportList *reports, bool update_defaults);
bool BKE_read_file_from_memfile(
        struct bContext *C, struct MemFile *memfile,
        struct ReportList *reports);

int BKE_read_file_userdef(const char *filepath, struct ReportList *reports);
int BKE_write_file_userdef(const char *filepath, struct ReportList *reports);

void free_blender(void);
void initglobals(void);

/* load new userdef from file, exit blender */
void BKE_userdef_free(void);
/* handle changes in userdef */
void BKE_userdef_state(void);
	
/* set this callback when a UI is running */
void BKE_blender_callback_test_break_set(void (*func)(void));
int blender_test_break(void);

#define BKE_UNDO_STR_MAX 64

/* global undo */
extern void          BKE_undo_write(struct bContext *C, const char *name);
extern void          BKE_undo_step(struct bContext *C, int step);
extern void          BKE_undo_name(struct bContext *C, const char *name);
extern bool          BKE_undo_is_valid(const char *name);
extern void          BKE_undo_reset(void);
extern void          BKE_undo_number(struct bContext *C, int nr);
extern const char   *BKE_undo_get_name(int nr, bool *r_active);
extern bool          BKE_undo_save_file(const char *filename);
extern struct Main  *BKE_undo_get_main(struct Scene **r_scene);

/* copybuffer */
void BKE_copybuffer_begin(struct Main *bmain);
void BKE_copybuffer_tag_ID(struct ID *id);
int BKE_copybuffer_save(const char *filename, struct ReportList *reports);
int BKE_copybuffer_paste(struct bContext *C, const char *libname, const short flag, struct ReportList *reports);

#ifdef __cplusplus
}
#endif

#endif

