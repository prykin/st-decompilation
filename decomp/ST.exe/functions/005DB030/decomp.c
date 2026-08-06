#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_005db030(byte *param_1,undefined4 param_2,char param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  cMf32 *this;
  ushort *puVar4;
  uint uVar5;
  byte *pbVar7;
  byte *pbVar8;
  int local_1e18;
  int local_1e14;
  int local_1e10;
  byte local_47c [260];
  byte local_378 [260];
  byte local_274 [260];
  byte local_170 [260];
  InternalExceptionFrame *local_6c;
  int local_68 [9];
  int iStackY_44;
  undefined1 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;

  Library::MSVCRT::FUN_0072da40();
  uVar12 = 0;
  if (param_3 != '\0') {
    return 0;
  }
  Library::MSVCRT::FUN_0072e730(param_1,local_378,local_274,local_47c,(byte *)0x8f000405);
  Library::MSVCRT::__makepath
            ((char *)local_170,(char *)local_378,(char *)local_274,(char *)local_47c,nullptr);
  local_6c = g_currentExceptionFrame;
  iStackY_44 = 0x5db0d9;
  g_currentExceptionFrame = (InternalExceptionFrame *)&local_6c;
  iVar3 = Library::MSVCRT::__setjmp3(local_68,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c;
    return 0;
  }
  uVar9 = 0;
  this = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,local_170,0,0,0);
  piVar11 = (int *)&stack0xffffffe4;
  iVar3 = 0;
  uVar10 = 0x5db113;
  puVar4 = cMf32::RecGet(this,0,PTR_s_DESCRIPTOR_0079c1d8,piVar11,0);
  if (puVar4 == nullptr) goto cf_common_exit_005DB1E1;
  if ((char)*piVar11 == '\x05') {
    iVar3 = 0;
    uVar10 = 0x5db13b;
    puVar4 = cMf32::RecGet(this,0x80,PTR_s_SAVE_PLAYER_0079c1c8,(int *)&stack0xffffffe0,0);
    if (puVar4 == nullptr) goto cf_common_exit_005DB1E1;
  }
  bVar2 = false;
  if ((local_1e18 != 0) && (local_1e10 == STField<int>(piVar11,1))) {
    switch((char)*piVar11) {
    case '\x02':
      if (local_1e14 != iVar3) goto joined_r0x005db18e;
cf_common_exit_005DB1AB:
      bVar2 = true;
      break;
    case '\x03':
joined_r0x005db18e:
      if (local_1e14 == -0x70fffdfb) goto cf_common_exit_005DB1AB;
      break;
    case '\x04':
      if (local_1e14 == -0x70fff7fb) goto cf_common_exit_005DB1AB;
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case '\x05':
      if (STField<int>(piVar11,5) == CONCAT31((int3)uVar10,uVar9)) goto cf_common_exit_005DB1AB;
    }
  }
  if (bVar2) {
    uVar5 = 0xffffffff;
    uVar12 = 0xffffff90;
    pbVar7 = local_170;
    do {
      pbVar8 = pbVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pbVar8 = pbVar7 + 1;
      bVar1 = *pbVar7;
      pbVar7 = pbVar8;
    } while (bVar1 != 0);
    uVar5 = ~uVar5;
    pbVar7 = pbVar8 + -uVar5;
    pbVar8 = &DAT_0080ed16;
    memmove(pbVar8, pbVar7, uVar5); /* compiler REP MOVS byte copy */
  }
cf_common_exit_005DB1E1:
  cMf32::delete(this);
  g_currentExceptionFrame = local_6c;
  return uVar12;
}

