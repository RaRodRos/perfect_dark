#ifndef IN_GAME_GAME_102240_H
#define IN_GAME_GAME_102240_H
#include <ultra64.h>
#include "types.h"

u32 func0f102240(void);
char *soloMenuTextDifficulty(struct menu_item *item);
char *func0f102330(u32 operation, struct menu_item *item, s32 *value, s32 arg3);
u32 func0f103550(void);
f32 func0f1036ac(s32 arg0, s32 arg1);
bool isStageDifficultyUnlocked(s32 stageindex, s32 difficulty);
u32 func0f103e68(void);
u32 getMaxAiBuddies(void);
u32 func0f104664(void);
u32 func0f104720(void);
char *func0f105664(struct menu_item *item);
char *func0f1056a0(struct menu_item *item);
char *invMenuTextPrimaryFunction(struct menu_item *item);
char *invMenuTextSecondaryFunction(struct menu_item *item);
void func0f105948(s32 weaponnum);
char *invMenuTextWeaponName(struct menu_item *item);
char *invMenuTextWeaponManufacturer(struct menu_item *item);
char *invMenuTextWeaponDescription(struct menu_item *item);
bool soloChoosePauseDialog(void);
s32 menudialog00103368(u32, u32, u32 *);
void menudialog00103608(void);
bool menudialogCoopAntiOptions(u32 operation, struct menu_dialog *dialog, struct menustackitem *stackitem);
s32 menudialog0010559c(u32 operation, struct menu_dialog *dialog, struct menustackitem *item);
s32 menudialog00105c54(u32, u32, u32 *);
s32 menudialog001063d4(u32, u32, u32 *);
s32 soloMenuDialogPauseStatus(u32 operation, s32 arg1, s32 arg2);
char *menuhandler001024dc(u32 operation, struct menu_item *item, s32 *value);
char *menuhandler001024fc(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerAcceptMission(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerAcceptPdModeSettings(s32 operation, struct menu_item *item, bool *value);
s32 menuhandlerBuddyOptionsContinue(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerCoopDifficulty(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerAntiDifficulty(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandler0010476c(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerControlStyle(s32 operation, struct menu_item *item, u32 *value);
s32 menuhandler00106028(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandler00106178(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerAbortMission(u32 operation, struct menu_item *item, s32 *value);
char *menuhandlerCinema(u32 operation, struct menu_item *item, s32 *value);
char *menuhandlerAimControl(u32 operation, struct menu_item *item, bool *value);
s32 menuhandlerAlternativeTitle(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerAlwaysShowTarget(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerAmmoOnScreen(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerAntiPlayer(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerAntiRadar(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerAutoAim(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerChangeAgent(s32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerCoopBuddy(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerCoopFriendlyFire(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerCoopRadar(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerCutsceneSubtitles(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerHeadRoll(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerHiRes(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerInGameSubtitles(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerLangFilter(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerLookAhead(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerMusicVolume(u32 operation, struct menu_item *item, u32 *volume);
s32 menuhandlerPaintball(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerPdMode(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerPdModeSetting(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerReversePitch(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerScreenRatio(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerScreenSize(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerScreenSplit(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerSfxVolume(u32 operation, struct menu_item *item, u32 *volume);
s32 menuhandlerShowGunFunction(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerShowMissionTime(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerShowZoomRange(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerSightOnScreen(u32 operation, struct menu_item *item, bool *enable);
s32 menuhandlerSoloDifficulty(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerSoundMode(u32 operation, struct menu_item *item, bool *enable);

#endif
