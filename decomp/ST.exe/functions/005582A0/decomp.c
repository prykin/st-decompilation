#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::PrepareToSave

   [STPrototypeApplier] Propagated return.
   Evidence: 005582A0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 00558A67 */

byte * __thiscall VisibleClassTy::PrepareToSave(VisibleClassTy *this,uint *param_1)

{
  code *pcVar1;
  VisibleClassTy *pVVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *puVar9;
  byte *puVar10;
  InternalExceptionFrame local_68;
  VisibleClassTy *local_24;
  undefined4 *local_20;
  uint *local_1c;
  uint local_18;
  undefined4 *local_14;
  uint local_10;
  undefined4 *local_c;
  AnonShape_005582A0_F54946B9 *local_8;

  local_8 = (AnonShape_005582A0_F54946B9 *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_24 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  pVVar2 = local_24;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_68.previous;
    if (local_c != (undefined4 *)0x0) {
      FreeAndNull(&local_c);
    }
    if (local_14 != (undefined4 *)0x0) {
      FreeAndNull(&local_14);
    }
    if (local_8 != (AnonShape_005582A0_F54946B9 *)0x0) {
      FreeAndNull(&local_8);
    }
    iVar5 = ReportDebugMessage("E:\\__titans\\grig\\visible.cpp",0x105,0,iVar3,"%s",
                               "VisibleClassTy::PrepareToSave error");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\grig\\visible.cpp",0x106);
    return (byte *)0x0;
  }
  if (local_24->field_0114 != 0) {
    local_c = (undefined4 *)FUN_006b0020(&local_24->field_00F4->flags,(int *)&local_10);
    local_14 = (undefined4 *)FUN_006b0020(&pVVar2->field_0110->flags,(int *)&local_18);
    if (pVVar2->field_0114 != 0) {
      iVar3 = pVVar2->field_002C * pVVar2->field_0028 * 4;
      goto LAB_0055832e;
    }
  }
  iVar3 = 0;
LAB_0055832e:
  uVar8 = iVar3 + local_18 + 0x81 + local_10;
  *param_1 = uVar8;
  local_8 = (AnonShape_005582A0_F54946B9 *)Library::DKW::LIB::FUN_006aac10(uVar8);
  *(undefined4 *)local_8 = 0x50;
  *(undefined4 *)&local_8->field_0x4 = 0xff;
  *(undefined4 *)&local_8->field_0x8 = 2;
  *(undefined4 *)&local_8->field_0x14 = 1;
  local_8->field_0018 = pVVar2->field_0020;
  local_8->field_001C = pVVar2->field_0024;
  local_8->field_0020 = pVVar2->field_0028;
  local_8->field_0024 = pVVar2->field_002C;
  local_8->field_0028 = pVVar2->field_0030;
  local_8->field_002C = pVVar2->field_0034;
  local_8->field_0030 = pVVar2->field_001C;
  local_8->field_0040 = pVVar2->field_0114;
  local_8->field_0044 = pVVar2->field_00F8;
  local_8->field_0034 = (uint)DAT_0080874d;
  local_8->field_0038 = local_10;
  local_8->field_003C = local_18;
  local_8->field_0048 = *(undefined4 *)pVVar2->field_00FC;
  local_8->field_004C = *(undefined4 *)(pVVar2->field_00FC + 4);
  if (pVVar2->field_0114 != 0) {
    local_1c = pVVar2->field_003C;
    puVar4 = (byte *)(&local_8[1].field_0030);
    local_20 = (undefined4 *)0x4;
    do {
      if ((undefined4 *)*local_1c != (undefined4 *)0x0) {
        uVar7 = pVVar2->field_0028 * pVVar2->field_002C;
        puVar9 = (byte *)*local_1c;
        puVar10 = (byte *)(puVar4);
        memmove(puVar10, puVar9, uVar7); /* compiler REP MOVS byte copy */
        uVar8 = 0;
        puVar4 = (byte *)((int)puVar4 + pVVar2->field_0028 * pVVar2->field_002C);
      }
      local_1c = local_1c + 1;
      local_20 = (undefined4 *)((int)local_20 + -1);
    } while (local_20 != (undefined4 *)0x0);
    local_20 = (undefined4 *)0x0;
    if (local_c != (undefined4 *)0x0) {
      puVar9 = (byte *)(local_c);
      puVar10 = (byte *)(puVar4);
      memmove(puVar10, puVar9, local_10); /* compiler REP MOVS byte copy */
      uVar8 = 0;
      local_20 = (undefined4 *)((int)puVar4 + local_10);
      FreeAndNull(&local_c);
      puVar4 = (byte *)(local_20);
    }
    if (local_14 != (undefined4 *)0x0) {
      puVar9 = (byte *)(local_14);
      memmove(puVar4, puVar9, local_18); /* compiler REP MOVS byte copy */
      FreeAndNull(&local_14);
    }
  }
  g_currentExceptionFrame = local_68.previous;
  return (byte *)local_8;
}

