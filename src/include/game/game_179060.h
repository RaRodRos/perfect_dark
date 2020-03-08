#ifndef _IN_GAME_GAME_179060_H
#define _IN_GAME_GAME_179060_H
#include <ultra64.h>
#include "types.h"

char *mpGetCurrentPlayerName(struct menu_item *item);
u32 func0f179104(void);
s32 menuhandler001791c8(u32, u32, u32 *);
u32 func0f17960c(void);
u32 func0f179b58(void);
s32 func0f179da4(u32 operation, struct menu_item *item, s32 *value, s32 arg3, s32 arg4, s32 arg5);
s32 menudialog0017a174(u32, u32, u32 *);
s32 menuhandler0017a20c(u32, u32, u32 *);
u32 func0f17a658(void);
u32 func0f17a6ac(void);
u32 func0f17a700(void);
u32 func0f17a754(void);
u32 func0f17a7a8(void);
u32 func0f17a7fc(void);
u32 func0f17a850(void);
u32 func0f17a8a4(void);
u32 func0f17a8f8(void);
u32 func0f17a94c(void);
u32 func0f17a9a0(void);
u32 func0f17aaa0(void);
u32 func0f17ab38(void);
u32 func0f17ace8(void);
u32 func0f17ad80(void);
u32 func0f17af1c(void);
u32 func0f17af9c(void);
s32 menuhandlerMpMedal(u32, u32, u32 *);
u32 func0f17b360(void);
u32 func0f17b408(void);
s32 func0f17b4f8(u32 operation, struct menu_item *item, s32 *value, s32 arg3, s32 arg4);
u32 func0f17b8b0(void);
u32 func0f17b8f0(void);
s32 menuhandler0017b91c(u32, u32, u32 *);
s32 menuhandler0017bab4(u32, u32, u32 *);
u32 func0f17be2c(void);
s32 menuhandler0017bfc0(u32, u32, u32 *);
s32 menuhandlerMpHandicapPlayer(u32, u32, u32 *);
u32 func0f17c524(void);
s32 menuhandler0017c6a4(u32, u32, u32 *);
u32 func0f17ca40(void);
s32 menudialog0017ccfc(u32, u32, u32 *);
s32 menuhandlerMpSimulantDifficulty(u32, u32, u32 *);
u32 func0f17cfc0(void);
u32 func0f17d378(void);
s32 func0f17d4b0(u32 operation, struct menu_item *item, s32 *value, s32 numteams);
u32 func0f17da94(void);
char *func0f17dac4(u32 operation, struct menu_item *item, s32 *value);
u32 func0f17dc44(void);
s32 menuhandler0017dc84(u32, u32, u32 *);
u32 func0f17dfac(void);
s32 menuhandler0017e06c(u32, u32, u32 *);
u32 func0f17e288(void);
u32 func0f17e318(void);
s32 menudialog0017e3fc(u32, u32, u32 *);
s32 menuhandler0017e4d4(u32, u32, u32 *);
u32 func0f17eac8(void);
s32 menudialog0017eb34(u32, u32, u32 *);
u32 func0f17eed4(void);
u32 func0f17f024(void);
u32 func0f17f088(void);
u32 func0f17f100(void);
u32 func0f17f260(void);
u32 func0f17f428(void);
s32 menuhandlerPlayerTeam(u32 operation, struct menu_item *item, s32 *value);
u32 menuhandlerMpNumberOfSimulants(u32 operation, struct menu_item *item, s32 *value);
u32 menuhandlerMpSimulantsPerTeam(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandler0017f74c(u32, u32, u32 *);
u32 func0f17fa28(void);
u32 func0f17fcb0(void);
s32 menuhandlerMpSlowMotion(u32, u32, u32 *);
u32 func0f17ff8c(void);
u32 func0f17ffe4(void);
u32 func0f180078(void);
void func0f1800a8(void);
u32 scenarioHtbCallback18(void);
void scenarioCtcReset(void);
bool scenarioCtcHighlight(struct prop *prop, u32 *colour);
u32 func0f181800(void);
void scenarioCtcCallback38(s16 arg0, s32 *arg1, s32 *arg2, s32 *arg3);
void scenarioKohCallback10(void);
u32 scenarioKohCallback18(void);
u32 func0f182aac(void);
void scenarioKohCallback38(s16 arg0, s32 *arg1, s32 *arg2, s32 *arg3);
u32 func0f182ba4(void);
u32 func0f182bf4(void);
void func0f182c98(void);
void scenarioHtmReset(void);
void scenarioHtmCallback14(struct chrdata *chr);
u32 scenarioHtmCallback18(void);
Gfx *scenarioHtmRadar(Gfx *gdl);
void scenarioPacChooseVictims(void);
bool scenarioPacHighlight(struct prop *prop, u32 *colour);
void func0f1845bc(void);
u32 func0f1847b8(void);
void scenarioPacCallback10(void);
u32 scenarioPacCallback18(void);
bool scenarioPacRadar2(Gfx **gdl, struct prop *prop);
s32 menudialog00184ec0(u32, u32, u32 *);
u32 func0f184fb0(void);
u32 func0f18500c(void);
s32 menuhandler00185068(u32, u32, u32 *);
void func0f185568(void);
u32 func0f185774(void);
u32 func0f185c14(void);
u32 func0f185e20(void);
u32 func0f18620c(void);
u32 func0f186508(void);
void func0f1866b8(s32 playernum, char *message);
u32 func0f186780(void);
u32 func0f186898(void);
u32 func0f187288(void);
u32 func0f187410(void);
u32 func0f1876e4(void);
s32 menuhandlerMpDropOut(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpTeamsLabel(u32 operation, struct menu_item *item, s32 *value);
u32 func0f1790fc(void);
char *menuhandlerMpControlStyle(u32 operation, struct menu_item *item, s32 *value);
char *menuhandlerMpWeaponSlot(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpWeaponSetDropdown(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpControlCheckbox(u32 operation, struct menu_item *item, s32 *value);
char *menuhandlerMpAimControl(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpCheckboxOption(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpTeamsEnabled(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpDisplayOptionCheckbox(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpConfirmSaveChr(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpPlayerName(u32 operation, struct menu_item *item, char **value);
s32 menuhandlerMpSaveSetupOverwrite(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpSaveSetupCopy(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpCharacterBody(u32 operation, struct menu_item *item, struct numandtext *value);
s32 menuhandlerMpUsernamePassword(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpCharacterHead(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpTimeLimitSlider(u32 operation, struct menu_item *item, struct numandtext *value);
s32 menuhandlerMpScoreLimitSlider(u32 operation, struct menu_item *item, struct numandtext *value);
s32 menuhandlerMpTeamScoreLimitSlider(u32 operation, struct menu_item *item, struct numandtext *value);
s32 menuhandlerMpRestoreScoreDefaults(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpRestoreHandicapDefaults(u32 operation, struct menu_item *item, s32 *value);
bool menudialogMpReady(u32 operation, struct menu_dialog *dialog, struct menustackitem *stackitem);
bool menudialogMpSimulant(u32 operation, struct menu_dialog *dialog, struct menustackitem *stackitem);
s32 menuhandlerMpSimulantHead(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpSimulantBody(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpDeleteSimulant(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpChangeSimulantType(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpClearAllSimulants(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpAddSimulant(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpSimulantSlot(u32 operation, struct menu_item *item, s32 *value);
bool menudialogMpSimulants(u32 operation, struct menu_dialog *dialog, struct menustackitem *stackitem);
s32 menuhandlerMpTwoTeams(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpThreeTeams(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpFourTeams(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpMaximumTeams(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpHumansVsSimulants(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpHumanSimulantPairs(u32 operation, struct menu_item *item, s32 *value);
char *menuhandlerMpTeamSlot(u32 operation, struct menu_item *item, s32 *value);
bool menudialogMpSelectTune(u32 operation, struct menu_dialog *dialog, struct menustackitem *stackitem);
s32 menuhandlerMpMultipleTunes(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpTeamNameSlot(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandler0017e38c(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandler0017e9d8(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpAbortChallenge(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpStartChallenge(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandler0017ec64(u32 operation, struct menu_item *item, s32 *value);
char *menuhandlerMpLock(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpSavePlayer(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandler0017ef30(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpSaveSettings(u32 operation, struct menu_item *item, s32 *value);
bool menudialogMpGameSetup(u32 operation, struct menu_dialog *dialog, struct menustackitem *stackitem);
bool menudialogMpQuickGo(u32 operation, struct menu_dialog *dialog, struct menustackitem *stackitem);
s32 menuhandlerMpFinishedSetup(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerQuickTeamSeparator(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerMpQuickTeamOption(u32 operation, struct menu_item *item, s32 *value);

#endif
