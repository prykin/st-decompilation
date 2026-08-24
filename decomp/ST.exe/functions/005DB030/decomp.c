#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 __cdecl FUN_005db030(byte *param_1,undefined4 param_2,char param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar4;
  int iVar3;
  cMf32 *this;
  ushort *puVar5;
  uint uVar6;
  byte *pbVar8;
  byte *pbVar9;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  char *in_stack_00000010;
  int local_1e18;
  int local_1e14;
  int local_1e10;
  byte local_47c [260];
  byte local_378 [260];
  byte local_274 [260];
  byte local_170 [260];
  InternalExceptionFrame local_6c;
  undefined1 local_28 [3];
  int local_25;
  byte *local_20;
  int *local_1c;
  char *local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  local_8 = 0;
  if (param_3 != '\0') {
    return 0;
  }
  local_1c = &local_1e18;
  local_20 = local_28;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_18 = in_stack_00000010;
  local_14 = -0x70fffbfb;
  local_c = -0x70fffdfb;
  local_10 = -0x70fff7fb;
  Library::MSVCRT::FUN_0072e730(param_1,local_378,local_274,local_47c,nullptr);
  Library::MSVCRT::__makepath
            ((char *)local_170,(char *)local_378,(char *)local_274,(char *)local_47c,nullptr);
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    return local_8;
  }
  this = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,local_170,0,0,0);
  puVar5 = cMf32::RecGet(this,0,PTR_s_DESCRIPTOR_0079c1d8,(int *)&local_1c,0);
  if ((puVar5 == nullptr) ||
     ((*local_18 == '\x05' &&
      (puVar5 = cMf32::RecGet(this,0x80,PTR_s_SAVE_PLAYER_0079c1c8,(int *)&local_20,0),
      puVar5 == nullptr)))) goto cf_common_exit_005DB1E1;
  bVar2 = false;
  if ((local_1e18 == 0) || (local_1e10 != *(int *)(local_18 + 1))) goto switchD_005db168_default;
  switch(*local_18) {
  case '\x02':
    if ((local_1e14 != local_14) && (local_1e14 != local_c)) break;
    goto cf_common_exit_005DB1AB;
  case '\x03':
    iVar4 = local_c;
    goto joined_r0x005db1a9;
  case '\x04':
    iVar4 = local_10;
joined_r0x005db1a9:
    if (local_1e14 == iVar4) {
cf_common_exit_005DB1AB:
      bVar2 = true;
    }
    break;
  case '\x05':
    if (*(int *)(local_18 + 5) == local_25) goto cf_common_exit_005DB1AB;
  }
switchD_005db168_default:
  if (bVar2) {
    uVar6 = 0xffffffff;
    local_8 = 0xffffff90;
    pbVar8 = local_170;
    do {
      pbVar9 = pbVar8;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pbVar9 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar9;
    } while (bVar1 != 0);
    uVar6 = ~uVar6;
    pbVar8 = pbVar9 + -uVar6;
    pbVar9 = (byte *)&CHAR_00h_0080ed16;
    memmove(pbVar9, pbVar8, uVar6); /* compiler REP MOVS byte copy */
  }
cf_common_exit_005DB1E1:
  cMf32::delete(this);
  g_currentExceptionFrame = local_6c.previous;
  return local_8;
}

