#include "../../pseudocode_runtime.h"


void FUN_005335e0(void)

{
  char cVar1;
  int iVar2;
  uint *puVar2;
  DWORD DVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  InternalExceptionFrame local_54;
  uint local_10;
  uint *local_c;
  undefined4 *local_8;
  char *pcVar7_mg2;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  if (DAT_00808783 == '\x03') {
    uVar4 = 0xffffffff;
    local_c = nullptr;
    pcVar7 = (char *)((int)local_8 + 0x1f5);
    pcVar9 = pcVar7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    local_10 = ~uVar4 + 0xd;
    puVar2 = Library::DKW::LIB::MemAllocClear(local_10);
    local_c = puVar2;
    if (puVar2 != nullptr) {
      *(undefined1 *)puVar2 = 2;
      STField<uint>(puVar2,1) = ~uVar4;
      STField<undefined4>(puVar2,5) = DAT_008087be;
      /* ST_CALLSITE[00533668]: CALL dword ptr [0x0085bedc] */
      DVar3 = timeGetTime();
      STField<DWORD>(puVar2,9) = DVar3;
      uVar4 = 0xffffffff;
      do {
        pcVar9 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar9 + -uVar4;
      pcVar9 = (char *)((int)puVar2 + 0xd);
      memmove(pcVar9, pcVar7, uVar4); /* compiler REP MOVS byte copy */
      uVar5 = 0;
      thunk_FUN_0054edf0((undefined4 *)0x32,local_c,1,local_10);
      FreeAndNull(&local_c);
    }
  }
  else {
    uVar4 = 0xffffffff;
    pcVar7 = &CHAR_00h_00807680;
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = &CHAR_00h_0080f022;
    memmove(pcVar9, pcVar7, uVar4); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    uVar4 = 0xffffffff;
    pcVar7_mg2 = PTR_s_SAVEGAME__0079acec;
    do {
      pcVar7 = pcVar7_mg2;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar7_mg2 + 1;
      cVar1 = *pcVar7_mg2;
      pcVar7_mg2 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pcVar9 = &CHAR_00h_0080f022;
    do {
      pcVar8 = pcVar9;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar8;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -uVar4;
    pcVar9 = pcVar8 + -1;
    memmove(pcVar9, pcVar7, uVar4); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    uVar4 = 0xffffffff;
    pcVar7 = &CHAR_00h_00807ddd;
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pcVar7 = &CHAR_00h_0080f022;
    do {
      pcVar8 = pcVar7;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = pcVar8 + -1;
    memmove(pcVar9, pcVar7, uVar4); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    FUN_006b8280(&CHAR_00h_0080f022,&CHAR_00h_0080f022);
    uVar4 = 0xffffffff;
    pcVar7 = PTR_DAT_0079ad00;
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pcVar7 = &CHAR_00h_0080f022;
    do {
      pcVar8 = pcVar7;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = pcVar8 + -1;
    memmove(pcVar9, pcVar7, uVar4); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    uVar4 = 0xffffffff;
    pcVar7 = (char *)((int)local_8 + 0x1f5);
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pcVar7 = &CHAR_00h_0080f022;
    do {
      pcVar8 = pcVar7;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = pcVar8 + -1;
    memmove(pcVar9, pcVar7, uVar4); /* compiler REP MOVS byte copy */
    DAT_00808794 = 1;
  }
  local_8[10] = 0xc001;
  local_8[0xd] = 0;
  /* ST_CALLSITE[005336CB]: CALL dword ptr [EAX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)*local_8)(local_8 + 6);
  g_currentExceptionFrame = local_54.previous;
  return;
}

