#ifndef IN_GAME_LANG_H
#define IN_GAME_LANG_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

extern u8 *g_LangBuffer;

void langInit(void);
void langReset(s32 stagenum);
void langTick(void);

u32 langGetLangBankIndexFromStagenum(s32 stagenum);
struct jpncharpixels *langGetJpnCharPixels(s32 codepoint);
s32 langGetFileNumOffset(void);
s32 langGetFileId(s32 bank);
void langLoad(s32 bank);
void langLoadToAddr(s32 bank, u8 *dst, s32 size);
void langClearBank(s32 bank);
char *langGet(s32 textid);
void langReload(void);
void langSetEuropean(u32 arg0);
void langSetJpnEnabled(bool enable);

#endif
