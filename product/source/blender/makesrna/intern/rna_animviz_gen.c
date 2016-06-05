
/* Automatically generated struct definitions for the Data API.
 * Do not edit manually, changes will be overwritten.           */

#define RNA_RUNTIME

#include <float.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

#include <stddef.h>

#include "MEM_guardedalloc.h"

#include "DNA_ID.h"
#include "DNA_scene_types.h"
#include "BLI_blenlib.h"

#include "BLI_utildefines.h"

#include "BKE_context.h"
#include "BKE_library.h"
#include "BKE_main.h"
#include "BKE_report.h"
#include "RNA_define.h"
#include "RNA_types.h"
#include "rna_internal.h"

#include "rna_prototypes_gen.h"

#include "rna_animviz.c"

/* Autogenerated Functions */


CollectionPropertyRNA rna_AnimViz_rna_properties;
PointerPropertyRNA rna_AnimViz_rna_type;
PointerPropertyRNA rna_AnimViz_onion_skin_frames;
PointerPropertyRNA rna_AnimViz_motion_path;


CollectionPropertyRNA rna_AnimVizOnionSkinning_rna_properties;
PointerPropertyRNA rna_AnimVizOnionSkinning_rna_type;
EnumPropertyRNA rna_AnimVizOnionSkinning_type;
BoolPropertyRNA rna_AnimVizOnionSkinning_show_only_selected;
IntPropertyRNA rna_AnimVizOnionSkinning_frame_step;
IntPropertyRNA rna_AnimVizOnionSkinning_frame_start;
IntPropertyRNA rna_AnimVizOnionSkinning_frame_end;
IntPropertyRNA rna_AnimVizOnionSkinning_frame_before;
IntPropertyRNA rna_AnimVizOnionSkinning_frame_after;


CollectionPropertyRNA rna_AnimVizMotionPaths_rna_properties;
PointerPropertyRNA rna_AnimVizMotionPaths_rna_type;
EnumPropertyRNA rna_AnimVizMotionPaths_type;
EnumPropertyRNA rna_AnimVizMotionPaths_bake_location;
BoolPropertyRNA rna_AnimVizMotionPaths_show_frame_numbers;
BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_highlight;
BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_numbers;
BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_action_all;
IntPropertyRNA rna_AnimVizMotionPaths_frame_step;
IntPropertyRNA rna_AnimVizMotionPaths_frame_start;
IntPropertyRNA rna_AnimVizMotionPaths_frame_end;
IntPropertyRNA rna_AnimVizMotionPaths_frame_before;
IntPropertyRNA rna_AnimVizMotionPaths_frame_after;


CollectionPropertyRNA rna_MotionPath_rna_properties;
PointerPropertyRNA rna_MotionPath_rna_type;
CollectionPropertyRNA rna_MotionPath_points;
IntPropertyRNA rna_MotionPath_frame_start;
IntPropertyRNA rna_MotionPath_frame_end;
IntPropertyRNA rna_MotionPath_length;
BoolPropertyRNA rna_MotionPath_use_bone_head;
BoolPropertyRNA rna_MotionPath_is_modified;


CollectionPropertyRNA rna_MotionPathVert_rna_properties;
PointerPropertyRNA rna_MotionPathVert_rna_type;
FloatPropertyRNA rna_MotionPathVert_co;
BoolPropertyRNA rna_MotionPathVert_select;

static PointerRNA AnimViz_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void AnimViz_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_AnimViz_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = AnimViz_rna_properties_get(iter);
}

void AnimViz_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = AnimViz_rna_properties_get(iter);
}

void AnimViz_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int AnimViz_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA AnimViz_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA AnimViz_onion_skin_frames_get(PointerRNA *ptr)
{
	return rna_AnimViz_onion_skinning_get(ptr);
}

PointerRNA AnimViz_motion_path_get(PointerRNA *ptr)
{
	return rna_AnimViz_motion_paths_get(ptr);
}

static PointerRNA AnimVizOnionSkinning_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void AnimVizOnionSkinning_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_AnimVizOnionSkinning_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = AnimVizOnionSkinning_rna_properties_get(iter);
}

void AnimVizOnionSkinning_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = AnimVizOnionSkinning_rna_properties_get(iter);
}

void AnimVizOnionSkinning_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int AnimVizOnionSkinning_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA AnimVizOnionSkinning_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int AnimVizOnionSkinning_type_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->ghost_type);
}

void AnimVizOnionSkinning_type_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	data->ghost_type = value;
}

int AnimVizOnionSkinning_show_only_selected_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (((data->ghost_flag) & 1) != 0);
}

void AnimVizOnionSkinning_show_only_selected_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	if (value) data->ghost_flag |= 1;
	else data->ghost_flag &= ~1;
}

int AnimVizOnionSkinning_frame_step_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->ghost_step);
}

void AnimVizOnionSkinning_frame_step_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	data->ghost_step = CLAMPIS(value, 1, 20);
}

int AnimVizOnionSkinning_frame_start_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->ghost_sf);
}

void AnimVizOnionSkinning_frame_start_set(PointerRNA *ptr, int value)
{
	rna_AnimViz_ghost_start_frame_set(ptr, value);
}

int AnimVizOnionSkinning_frame_end_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->ghost_ef);
}

void AnimVizOnionSkinning_frame_end_set(PointerRNA *ptr, int value)
{
	rna_AnimViz_ghost_end_frame_set(ptr, value);
}

int AnimVizOnionSkinning_frame_before_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->ghost_bc);
}

void AnimVizOnionSkinning_frame_before_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	data->ghost_bc = CLAMPIS(value, 0, 30);
}

int AnimVizOnionSkinning_frame_after_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->ghost_ac);
}

void AnimVizOnionSkinning_frame_after_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	data->ghost_ac = CLAMPIS(value, 0, 30);
}

static PointerRNA AnimVizMotionPaths_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void AnimVizMotionPaths_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_AnimVizMotionPaths_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = AnimVizMotionPaths_rna_properties_get(iter);
}

void AnimVizMotionPaths_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = AnimVizMotionPaths_rna_properties_get(iter);
}

void AnimVizMotionPaths_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int AnimVizMotionPaths_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA AnimVizMotionPaths_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int AnimVizMotionPaths_type_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->path_type);
}

void AnimVizMotionPaths_type_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	data->path_type = value;
}

int AnimVizMotionPaths_bake_location_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return ((data->path_bakeflag) & 2);
}

void AnimVizMotionPaths_bake_location_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	data->path_bakeflag &= ~2;
	data->path_bakeflag |= value;
}

int AnimVizMotionPaths_show_frame_numbers_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (((data->path_viewflag) & 1) != 0);
}

void AnimVizMotionPaths_show_frame_numbers_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	if (value) data->path_viewflag |= 1;
	else data->path_viewflag &= ~1;
}

int AnimVizMotionPaths_show_keyframe_highlight_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (((data->path_viewflag) & 2) != 0);
}

void AnimVizMotionPaths_show_keyframe_highlight_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	if (value) data->path_viewflag |= 2;
	else data->path_viewflag &= ~2;
}

int AnimVizMotionPaths_show_keyframe_numbers_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (((data->path_viewflag) & 4) != 0);
}

void AnimVizMotionPaths_show_keyframe_numbers_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	if (value) data->path_viewflag |= 4;
	else data->path_viewflag &= ~4;
}

int AnimVizMotionPaths_show_keyframe_action_all_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (((data->path_viewflag) & 8) != 0);
}

void AnimVizMotionPaths_show_keyframe_action_all_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	if (value) data->path_viewflag |= 8;
	else data->path_viewflag &= ~8;
}

int AnimVizMotionPaths_frame_step_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->path_step);
}

void AnimVizMotionPaths_frame_step_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	data->path_step = CLAMPIS(value, 1, 100);
}

int AnimVizMotionPaths_frame_start_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->path_sf);
}

void AnimVizMotionPaths_frame_start_set(PointerRNA *ptr, int value)
{
	rna_AnimViz_path_start_frame_set(ptr, value);
}

int AnimVizMotionPaths_frame_end_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->path_ef);
}

void AnimVizMotionPaths_frame_end_set(PointerRNA *ptr, int value)
{
	rna_AnimViz_path_end_frame_set(ptr, value);
}

int AnimVizMotionPaths_frame_before_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->path_bc);
}

void AnimVizMotionPaths_frame_before_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	data->path_bc = CLAMPIS(value, 1, 150000);
}

int AnimVizMotionPaths_frame_after_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->path_ac);
}

void AnimVizMotionPaths_frame_after_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	data->path_ac = CLAMPIS(value, 1, 150000);
}

static PointerRNA MotionPath_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MotionPath_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MotionPath_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MotionPath_rna_properties_get(iter);
}

void MotionPath_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MotionPath_rna_properties_get(iter);
}

void MotionPath_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MotionPath_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MotionPath_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MotionPath_points_length(PointerRNA *ptr)
{
	bMotionPath *data = (bMotionPath *)(ptr->data);
	return (data->points == NULL) ? 0 : data->length;
}

static PointerRNA MotionPath_points_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MotionPathVert, rna_iterator_array_get(iter));
}

void MotionPath_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bMotionPath *data = (bMotionPath *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MotionPath_points;

	rna_iterator_array_begin(iter, data->points, sizeof(data->points[0]), data->length, 0, NULL);

	if (iter->valid)
		iter->ptr = MotionPath_points_get(iter);
}

void MotionPath_points_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = MotionPath_points_get(iter);
}

void MotionPath_points_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MotionPath_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MotionPath_points_begin(&iter, ptr);

	if (iter.valid) {
		ArrayIterator *internal = &iter.internal.array;
		if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
			printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
			printf("Array iterator out of range: (index %d)\n", index);
#endif
		}
		else if (internal->skip) {
			while (index-- > 0 && iter.valid) {
				rna_iterator_array_next(&iter);
			}
			found = (index == -1 && iter.valid);
		}
		else {
			internal->ptr += internal->itemsize * index;
			found = 1;
		}
		if (found) *r_ptr = MotionPath_points_get(&iter);
	}

	MotionPath_points_end(&iter);

	return found;
}

int MotionPath_frame_start_get(PointerRNA *ptr)
{
	bMotionPath *data = (bMotionPath *)(ptr->data);
	return (int)(data->start_frame);
}

int MotionPath_frame_end_get(PointerRNA *ptr)
{
	bMotionPath *data = (bMotionPath *)(ptr->data);
	return (int)(data->end_frame);
}

int MotionPath_length_get(PointerRNA *ptr)
{
	bMotionPath *data = (bMotionPath *)(ptr->data);
	return (int)(data->length);
}

int MotionPath_use_bone_head_get(PointerRNA *ptr)
{
	bMotionPath *data = (bMotionPath *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

int MotionPath_is_modified_get(PointerRNA *ptr)
{
	bMotionPath *data = (bMotionPath *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void MotionPath_is_modified_set(PointerRNA *ptr, int value)
{
	bMotionPath *data = (bMotionPath *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

static PointerRNA MotionPathVert_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MotionPathVert_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MotionPathVert_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MotionPathVert_rna_properties_get(iter);
}

void MotionPathVert_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MotionPathVert_rna_properties_get(iter);
}

void MotionPathVert_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MotionPathVert_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MotionPathVert_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MotionPathVert_co_get(PointerRNA *ptr, float values[3])
{
	bMotionPathVert *data = (bMotionPathVert *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->co)[i]);
	}
}

void MotionPathVert_co_set(PointerRNA *ptr, const float values[3])
{
	bMotionPathVert *data = (bMotionPathVert *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->co)[i] = values[i];
	}
}

int MotionPathVert_select_get(PointerRNA *ptr)
{
	bMotionPathVert *data = (bMotionPathVert *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MotionPathVert_select_set(PointerRNA *ptr, int value)
{
	bMotionPathVert *data = (bMotionPathVert *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}






/* Animation Visualization */
CollectionPropertyRNA rna_AnimViz_rna_properties = {
	{(PropertyRNA *)&rna_AnimViz_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimViz_rna_properties_begin, AnimViz_rna_properties_next, AnimViz_rna_properties_end, AnimViz_rna_properties_get, NULL, NULL, AnimViz_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_AnimViz_rna_type = {
	{(PropertyRNA *)&rna_AnimViz_onion_skin_frames, (PropertyRNA *)&rna_AnimViz_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimViz_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_AnimViz_onion_skin_frames = {
	{(PropertyRNA *)&rna_AnimViz_motion_path, (PropertyRNA *)&rna_AnimViz_rna_type,
	-1, "onion_skin_frames", 8650752, "Onion Skinning",
	"Onion Skinning (ghosting) settings for visualization",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimViz_onion_skin_frames_get, NULL, NULL, NULL,&RNA_AnimVizOnionSkinning
};

PointerPropertyRNA rna_AnimViz_motion_path = {
	{NULL, (PropertyRNA *)&rna_AnimViz_onion_skin_frames,
	-1, "motion_path", 8650752, "Motion Paths",
	"Motion Path settings for visualization",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimViz_motion_path_get, NULL, NULL, NULL,&RNA_AnimVizMotionPaths
};

StructRNA RNA_AnimViz = {
	{(ContainerRNA *)&RNA_AnimVizOnionSkinning, (ContainerRNA *)&RNA_KeyingSetInfo,
	NULL,
	{(PropertyRNA *)&rna_AnimViz_rna_properties, (PropertyRNA *)&rna_AnimViz_motion_path}},
	"AnimViz", NULL, NULL, 4, "Animation Visualization",
	"Settings for the visualization of motion",
	"*", 17,
	NULL, (PropertyRNA *)&rna_AnimViz_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Onion Skinning Settings */
CollectionPropertyRNA rna_AnimVizOnionSkinning_rna_properties = {
	{(PropertyRNA *)&rna_AnimVizOnionSkinning_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimVizOnionSkinning_rna_properties_begin, AnimVizOnionSkinning_rna_properties_next, AnimVizOnionSkinning_rna_properties_end, AnimVizOnionSkinning_rna_properties_get, NULL, NULL, AnimVizOnionSkinning_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_AnimVizOnionSkinning_rna_type = {
	{(PropertyRNA *)&rna_AnimVizOnionSkinning_type, (PropertyRNA *)&rna_AnimVizOnionSkinning_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimVizOnionSkinning_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_AnimVizOnionSkinning_type_items[5] = {
	{0, "NONE", 0, "No Ghosts", "Do not show any ghosts"},
	{1, "CURRENT_FRAME", 0, "Around Current Frame", "Show ghosts from around the current frame"},
	{2, "RANGE", 0, "In Range", "Show ghosts for the specified frame range"},
	{3, "KEYS", 0, "On Keyframes", "Show ghosts on keyframes"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AnimVizOnionSkinning_type = {
	{(PropertyRNA *)&rna_AnimVizOnionSkinning_show_only_selected, (PropertyRNA *)&rna_AnimVizOnionSkinning_rna_type,
	-1, "type", 3, "Type",
	"Method used for determining what ghosts get drawn",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizOnionSkinning_type_get, AnimVizOnionSkinning_type_set, NULL, NULL, NULL, NULL, rna_AnimVizOnionSkinning_type_items, 4, 0
};

BoolPropertyRNA rna_AnimVizOnionSkinning_show_only_selected = {
	{(PropertyRNA *)&rna_AnimVizOnionSkinning_frame_step, (PropertyRNA *)&rna_AnimVizOnionSkinning_type,
	-1, "show_only_selected", 3, "On Selected Bones Only",
	"For Pose-Mode drawing, only draw ghosts for selected bones",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizOnionSkinning_show_only_selected_get, AnimVizOnionSkinning_show_only_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_AnimVizOnionSkinning_frame_step = {
	{(PropertyRNA *)&rna_AnimVizOnionSkinning_frame_start, (PropertyRNA *)&rna_AnimVizOnionSkinning_show_only_selected,
	-1, "frame_step", 8195, "Frame Step",
	"Number of frames between ghosts shown (not for \'On Keyframes\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(bAnimVizSettings, ghost_step), 1, NULL},
	AnimVizOnionSkinning_frame_step_get, AnimVizOnionSkinning_frame_step_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 20, 1, 20, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizOnionSkinning_frame_start = {
	{(PropertyRNA *)&rna_AnimVizOnionSkinning_frame_end, (PropertyRNA *)&rna_AnimVizOnionSkinning_frame_step,
	-1, "frame_start", 3, "Start Frame",
	"Starting frame of range of Ghosts to display (not for \'Around Current Frame\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizOnionSkinning_frame_start_get, AnimVizOnionSkinning_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizOnionSkinning_frame_end = {
	{(PropertyRNA *)&rna_AnimVizOnionSkinning_frame_before, (PropertyRNA *)&rna_AnimVizOnionSkinning_frame_start,
	-1, "frame_end", 3, "End Frame",
	"End frame of range of Ghosts to display (not for \'Around Current Frame\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizOnionSkinning_frame_end_get, AnimVizOnionSkinning_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizOnionSkinning_frame_before = {
	{(PropertyRNA *)&rna_AnimVizOnionSkinning_frame_after, (PropertyRNA *)&rna_AnimVizOnionSkinning_frame_end,
	-1, "frame_before", 8195, "Before Current",
	"Number of frames to show before the current frame (only for \'Around Current Frame\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(bAnimVizSettings, ghost_bc), 0, NULL},
	AnimVizOnionSkinning_frame_before_get, AnimVizOnionSkinning_frame_before_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 30, 0, 30, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizOnionSkinning_frame_after = {
	{NULL, (PropertyRNA *)&rna_AnimVizOnionSkinning_frame_before,
	-1, "frame_after", 8195, "After Current",
	"Number of frames to show after the current frame (only for \'Around Current Frame\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(bAnimVizSettings, ghost_ac), 0, NULL},
	AnimVizOnionSkinning_frame_after_get, AnimVizOnionSkinning_frame_after_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 30, 0, 30, 1, 0, NULL
};

StructRNA RNA_AnimVizOnionSkinning = {
	{(ContainerRNA *)&RNA_AnimVizMotionPaths, (ContainerRNA *)&RNA_AnimViz,
	NULL,
	{(PropertyRNA *)&rna_AnimVizOnionSkinning_rna_properties, (PropertyRNA *)&rna_AnimVizOnionSkinning_frame_after}},
	"AnimVizOnionSkinning", NULL, NULL, 4, "Onion Skinning Settings",
	"Onion Skinning settings for animation visualization",
	"*", 17,
	NULL, (PropertyRNA *)&rna_AnimVizOnionSkinning_rna_properties,
	NULL,
	&RNA_AnimViz,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Motion Path Settings */
CollectionPropertyRNA rna_AnimVizMotionPaths_rna_properties = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_rna_properties_begin, AnimVizMotionPaths_rna_properties_next, AnimVizMotionPaths_rna_properties_end, AnimVizMotionPaths_rna_properties_get, NULL, NULL, AnimVizMotionPaths_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_AnimVizMotionPaths_rna_type = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_type, (PropertyRNA *)&rna_AnimVizMotionPaths_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_AnimVizMotionPaths_type_items[3] = {
	{1, "CURRENT_FRAME", 0, "Around Frame", "Display Paths of poses within a fixed number of frames around the current frame"},
	{0, "RANGE", 0, "In Range", "Display Paths of poses within specified range"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AnimVizMotionPaths_type = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_bake_location, (PropertyRNA *)&rna_AnimVizMotionPaths_rna_type,
	-1, "type", 3, "Paths Type",
	"Type of range to show for Motion Paths",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_type_get, AnimVizMotionPaths_type_set, NULL, NULL, NULL, NULL, rna_AnimVizMotionPaths_type_items, 2, 0
};

static EnumPropertyItem rna_AnimVizMotionPaths_bake_location_items[3] = {
	{2, "HEADS", 0, "Heads", "Calculate bone paths from heads"},
	{0, "TAILS", 0, "Tails", "Calculate bone paths from tails"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AnimVizMotionPaths_bake_location = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_show_frame_numbers, (PropertyRNA *)&rna_AnimVizMotionPaths_type,
	-1, "bake_location", 3, "Bake Location",
	"When calculating Bone Paths, use Head or Tips",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_bake_location_get, AnimVizMotionPaths_bake_location_set, NULL, NULL, NULL, NULL, rna_AnimVizMotionPaths_bake_location_items, 2, 0
};

BoolPropertyRNA rna_AnimVizMotionPaths_show_frame_numbers = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_show_keyframe_highlight, (PropertyRNA *)&rna_AnimVizMotionPaths_bake_location,
	-1, "show_frame_numbers", 3, "Show Frame Numbers",
	"Show frame numbers on Motion Paths",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_show_frame_numbers_get, AnimVizMotionPaths_show_frame_numbers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_highlight = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_show_keyframe_numbers, (PropertyRNA *)&rna_AnimVizMotionPaths_show_frame_numbers,
	-1, "show_keyframe_highlight", 3, "Highlight Keyframes",
	"Emphasize position of keyframes on Motion Paths",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_show_keyframe_highlight_get, AnimVizMotionPaths_show_keyframe_highlight_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_numbers = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_show_keyframe_action_all, (PropertyRNA *)&rna_AnimVizMotionPaths_show_keyframe_highlight,
	-1, "show_keyframe_numbers", 3, "Show Keyframe Numbers",
	"Show frame numbers of Keyframes on Motion Paths",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_show_keyframe_numbers_get, AnimVizMotionPaths_show_keyframe_numbers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_action_all = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_frame_step, (PropertyRNA *)&rna_AnimVizMotionPaths_show_keyframe_numbers,
	-1, "show_keyframe_action_all", 3, "All Action Keyframes",
	"For bone motion paths, search whole Action for keyframes instead of in group with matching name only (is slower)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_show_keyframe_action_all_get, AnimVizMotionPaths_show_keyframe_action_all_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_AnimVizMotionPaths_frame_step = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_frame_start, (PropertyRNA *)&rna_AnimVizMotionPaths_show_keyframe_action_all,
	-1, "frame_step", 8195, "Frame Step",
	"Number of frames between paths shown (not for \'On Keyframes\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(bAnimVizSettings, path_step), 1, NULL},
	AnimVizMotionPaths_frame_step_get, AnimVizMotionPaths_frame_step_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 100, 1, 100, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizMotionPaths_frame_start = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_frame_end, (PropertyRNA *)&rna_AnimVizMotionPaths_frame_step,
	-1, "frame_start", 3, "Start Frame",
	"Starting frame of range of paths to display/calculate (not for \'Around Current Frame\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_frame_start_get, AnimVizMotionPaths_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizMotionPaths_frame_end = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_frame_before, (PropertyRNA *)&rna_AnimVizMotionPaths_frame_start,
	-1, "frame_end", 3, "End Frame",
	"End frame of range of paths to display/calculate (not for \'Around Current Frame\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_frame_end_get, AnimVizMotionPaths_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizMotionPaths_frame_before = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_frame_after, (PropertyRNA *)&rna_AnimVizMotionPaths_frame_end,
	-1, "frame_before", 8195, "Before Current",
	"Number of frames to show before the current frame (only for \'Around Current Frame\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(bAnimVizSettings, path_bc), 0, NULL},
	AnimVizMotionPaths_frame_before_get, AnimVizMotionPaths_frame_before_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 150000, 1, 150000, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizMotionPaths_frame_after = {
	{NULL, (PropertyRNA *)&rna_AnimVizMotionPaths_frame_before,
	-1, "frame_after", 8195, "After Current",
	"Number of frames to show after the current frame (only for \'Around Current Frame\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(bAnimVizSettings, path_ac), 0, NULL},
	AnimVizMotionPaths_frame_after_get, AnimVizMotionPaths_frame_after_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 150000, 1, 150000, 1, 0, NULL
};

StructRNA RNA_AnimVizMotionPaths = {
	{(ContainerRNA *)&RNA_MotionPath, (ContainerRNA *)&RNA_AnimVizOnionSkinning,
	NULL,
	{(PropertyRNA *)&rna_AnimVizMotionPaths_rna_properties, (PropertyRNA *)&rna_AnimVizMotionPaths_frame_after}},
	"AnimVizMotionPaths", NULL, NULL, 4, "Motion Path Settings",
	"Motion Path settings for animation visualization",
	"*", 17,
	NULL, (PropertyRNA *)&rna_AnimVizMotionPaths_rna_properties,
	NULL,
	&RNA_AnimViz,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Motion Path */
CollectionPropertyRNA rna_MotionPath_rna_properties = {
	{(PropertyRNA *)&rna_MotionPath_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPath_rna_properties_begin, MotionPath_rna_properties_next, MotionPath_rna_properties_end, MotionPath_rna_properties_get, NULL, NULL, MotionPath_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MotionPath_rna_type = {
	{(PropertyRNA *)&rna_MotionPath_points, (PropertyRNA *)&rna_MotionPath_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPath_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_MotionPath_points = {
	{(PropertyRNA *)&rna_MotionPath_frame_start, (PropertyRNA *)&rna_MotionPath_rna_type,
	-1, "points", 16384, "Motion Path Points",
	"Cached positions per frame",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPath_points_begin, MotionPath_points_next, MotionPath_points_end, MotionPath_points_get, MotionPath_points_length, MotionPath_points_lookup_int, NULL, NULL, &RNA_MotionPathVert
};

IntPropertyRNA rna_MotionPath_frame_start = {
	{(PropertyRNA *)&rna_MotionPath_frame_end, (PropertyRNA *)&rna_MotionPath_points,
	-1, "frame_start", 8194, "Start Frame",
	"Starting frame of the stored range",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bMotionPath, start_frame), 0, NULL},
	MotionPath_frame_start_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MotionPath_frame_end = {
	{(PropertyRNA *)&rna_MotionPath_length, (PropertyRNA *)&rna_MotionPath_frame_start,
	-1, "frame_end", 8194, "End Frame",
	"End frame of the stored range",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bMotionPath, end_frame), 0, NULL},
	MotionPath_frame_end_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MotionPath_length = {
	{(PropertyRNA *)&rna_MotionPath_use_bone_head, (PropertyRNA *)&rna_MotionPath_frame_end,
	-1, "length", 8194, "Length",
	"Number of frames cached",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bMotionPath, length), 0, NULL},
	MotionPath_length_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_MotionPath_use_bone_head = {
	{(PropertyRNA *)&rna_MotionPath_is_modified, (PropertyRNA *)&rna_MotionPath_length,
	-1, "use_bone_head", 2, "Use Bone Heads",
	"For PoseBone paths, use the bone head location when calculating this path",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPath_use_bone_head_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MotionPath_is_modified = {
	{NULL, (PropertyRNA *)&rna_MotionPath_use_bone_head,
	-1, "is_modified", 3, "Edit Path",
	"Path is being edited",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPath_is_modified_get, MotionPath_is_modified_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MotionPath = {
	{(ContainerRNA *)&RNA_MotionPathVert, (ContainerRNA *)&RNA_AnimVizMotionPaths,
	NULL,
	{(PropertyRNA *)&rna_MotionPath_rna_properties, (PropertyRNA *)&rna_MotionPath_is_modified}},
	"MotionPath", NULL, NULL, 4, "Motion Path",
	"Cache of the worldspace positions of an element over a frame range",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MotionPath_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Motion Path Cache Point */
CollectionPropertyRNA rna_MotionPathVert_rna_properties = {
	{(PropertyRNA *)&rna_MotionPathVert_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPathVert_rna_properties_begin, MotionPathVert_rna_properties_next, MotionPathVert_rna_properties_end, MotionPathVert_rna_properties_get, NULL, NULL, MotionPathVert_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MotionPathVert_rna_type = {
	{(PropertyRNA *)&rna_MotionPathVert_co, (PropertyRNA *)&rna_MotionPathVert_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPathVert_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MotionPathVert_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MotionPathVert_co = {
	{(PropertyRNA *)&rna_MotionPathVert_select, (PropertyRNA *)&rna_MotionPathVert_rna_type,
	-1, "co", 8195, "Coordinates",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(bMotionPathVert, co), 4, NULL},
	NULL, NULL, MotionPathVert_co_get, MotionPathVert_co_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MotionPathVert_co_default
};

BoolPropertyRNA rna_MotionPathVert_select = {
	{NULL, (PropertyRNA *)&rna_MotionPathVert_co,
	-1, "select", 3, "Select",
	"Path point is selected for editing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPathVert_select_get, MotionPathVert_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MotionPathVert = {
	{(ContainerRNA *)&RNA_Actuator, (ContainerRNA *)&RNA_MotionPath,
	NULL,
	{(PropertyRNA *)&rna_MotionPathVert_rna_properties, (PropertyRNA *)&rna_MotionPathVert_select}},
	"MotionPathVert", NULL, NULL, 4, "Motion Path Cache Point",
	"Cached location on path",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MotionPathVert_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

