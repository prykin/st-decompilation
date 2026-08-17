#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::PrepareToSave

   [STPrototypeApplier] Propagated return.
   Evidence: 005582A0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 00558A67 */

byte * __thiscall VisibleClassTy::PrepareToSave(VisibleClassTy *this,uint *param_1)

{
  VisibleClassTy *pVVar2;
  int iVar3;
  int iVar5;
  byte *puVar6;
  int iVar4;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  byte *puVar10;
  byte *puVar11;
  InternalExceptionFrame local_68;
  VisibleClassTy *local_24;
  undefined4 *local_20;
  void **local_1c;
  uint local_18;
  undefined4 *local_14;
  uint local_10;
  undefined4 *local_c;
  AnonShape_005582A0_F54946B9 *local_8;

  local_8 = nullptr;
  local_c = nullptr;
  local_10 = 0;
  local_14 = nullptr;
  local_18 = 0;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_24 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  pVVar2 = local_24;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_68.previous;
    if (local_c != nullptr) {
      FreeAndNull(&local_c);
    }
    if (local_14 != nullptr) {
      FreeAndNull(&local_14);
    }
    if (local_8 != nullptr) {
      FreeAndNull(&local_8);
    }
    iVar4 = ReportDebugMessage("E:\\__titans\\grig\\visible.cpp",0x105,0,iVar3,"%s",
                               "VisibleClassTy::PrepareToSave error");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\grig\\visible.cpp",0x106);
    return nullptr;
  }
  if (local_24->field_0114 != 0) {
    local_c = FUN_006b0020(&local_24->field_00F4->flags,(int *)&local_10);
    local_14 = FUN_006b0020(&pVVar2->field_0110->flags,(int *)&local_18);
    if (pVVar2->field_0114 != 0) {
      iVar5 = pVVar2->field_002C * pVVar2->field_0028 * 4;
      goto LAB_0055832e;
    }
  }
  iVar5 = 0;
LAB_0055832e:
  uVar9 = iVar5 + local_18 + 0x81 + local_10;
  *param_1 = uVar9;
  local_8 = Library::DKW::LIB::MemAllocClear(uVar9);
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
    puVar6 = (byte *)(&local_8[1].field_0030);
    local_20 = (undefined4 *)0x4;
    do {
      if (*local_1c != nullptr) {
        uVar8 = pVVar2->field_0028 * pVVar2->field_002C;
        puVar10 = (byte *)(*local_1c);
        puVar11 = (byte *)(puVar6);
        memmove(puVar11, puVar10, uVar8); /* compiler REP MOVS byte copy */
        uVar9 = 0;
        puVar6 = (byte *)((int)puVar6 + pVVar2->field_0028 * pVVar2->field_002C);
      }
      local_1c = local_1c + 1;
      local_20 = (undefined4 *)((int)local_20 + -1);
    } while (local_20 != nullptr);
    local_20 = nullptr;
    if (local_c != nullptr) {
      puVar10 = (byte *)(local_c);
      puVar11 = (byte *)(puVar6);
      memmove(puVar11, puVar10, local_10); /* compiler REP MOVS byte copy */
      uVar9 = 0;
      local_20 = (undefined4 *)((int)puVar6 + local_10);
      FreeAndNull(&local_c);
      puVar6 = (byte *)(local_20);
    }
    if (local_14 != nullptr) {
      puVar10 = (byte *)(local_14);
      memmove(puVar6, puVar10, local_18); /* compiler REP MOVS byte copy */
      FreeAndNull(&local_14);
    }
  }
  g_currentExceptionFrame = local_68.previous;
  return (byte *)local_8;
}

