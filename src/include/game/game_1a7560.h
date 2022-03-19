#ifndef IN_GAME_GAME_1A7560_H
#define IN_GAME_GAME_1A7560_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

void func0f1a7560(void *ptr, u16 fileid, u32 arg2, void *arg3, s32 *arg4, bool arg5);
void modelPromoteTypeToPointer(struct modelfiledata *filedata);
struct modelfiledata *modeldefLoad(u16 fileid, u8 *arg1, s32 arg2, s32 *arg3);
void *modeldefLoadToNew(u16 fileid);

#endif
