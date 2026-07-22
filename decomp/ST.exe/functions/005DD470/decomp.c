#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::ChatMessage

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 005B0BA0 -> 005DD470 @ 005B0BFB | 005D1400 -> 005DD470 @ 005D1464 | 005EA680 ->
   005DD470 @ 005EA6DB */

void __thiscall StartSystemTy::ChatMessage(StartSystemTy *this,STMessage *param_1)

{
  ushort uVar1;
  STMessageId SVar2;
  AnonShape_006E6FB0_BC494FEA *pAVar3;
  dword dVar4;
  AnonShape_006B5B10_E0D06CF1 *pAVar5;
  code *pcVar6;
  SystemClassTy *this_00;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  InternalExceptionFrame local_74;
  undefined4 local_30 [4];
  undefined4 local_20;
  int local_1c;
  dword local_10;
  int local_c;
  SystemClassTy *local_8;

  puVar7 = local_30;
  local_8 = (SystemClassTy *)this;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  iVar9 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0);
  this_00 = local_8;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Start\\startsys.cpp",0x349,0,iVar9,"%s"
                               ,"StartSystemTy::ChatMessage");
    if (iVar8 == 0) {
      RaiseInternalException(iVar9,0,"E:\\__titans\\Start\\startsys.cpp",0x349);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar2 = param_1->id;
  if (SVar2 == MESS_STARTSYSTEMTY_633F) {
    if ((((*(int *)((int)&local_8[0x33].parentSystem + 2) != 0) && (DAT_0080c4fa != 0)) &&
        (-1 < (int)local_8[0x2a].app)) &&
       ((param_1 != (STMessage *)0x0 && (dVar4 = (param_1->arg2).u32, dVar4 != 0)))) {
      puVar12 = (uint *)local_8[1].systemId;
      local_10 = dVar4;
      if (puVar12[0x28] != 0) {
        FUN_00710790(puVar12);
      }
      pAVar5 = *(AnonShape_006B5B10_E0D06CF1 **)((int)&this_00[0x33].parentSystem + 2);
      local_c = *(int *)((int)puVar12 + 0x8a);
      FUN_006b4170(pAVar5,0,0,0,pAVar5->field_0004,pAVar5->field_0008,0xff);
      uVar10 = (uint)(param_1->arg0).words.high;
      iVar9 = DAT_0080c4fa;
      uVar11 = uVar10;
      if ((int)uVar10 < (int)(uVar10 + *(int *)(dVar4 + 0x1e0))) {
        do {
          if ((int)uVar11 < *(int *)(iVar9 + 8)) {
            puVar12 = *(uint **)(*(int *)(iVar9 + 0x14) + uVar11 * 4);
          }
          else {
            puVar12 = (uint *)0x0;
          }
          if (puVar12 != (uint *)0x0) {
            iVar9 = *(int *)((int)&this_00[0x33].parentSystem + 2);
            ccFntTy::SetSurf((ccFntTy *)this_00[1].systemId,iVar9,0,0,(uVar11 - uVar10) * local_c,
                             *(int *)(iVar9 + 4),local_c);
            ccFntTy::WrStr((ccFntTy *)this_00[1].systemId,puVar12,0,-1,0);
            iVar9 = DAT_0080c4fa;
          }
          uVar11 = uVar11 + 1;
          uVar10 = (uint)(param_1->arg0).words.high;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        } while ((int)uVar11 < (int)(uVar10 + *(int *)(local_10 + 0x1e0)));
      }
      FUN_006b35d0((int *)PTR_008075a8,(uint)this_00[0x2a].app);
    }
  }
  else {
    if (SVar2 == MESS_BEHPANELTY_C0A0) {
      iVar9 = *(int *)((int)&local_8[0x34].vtable + 2);
      uVar11 = *(uint *)(iVar9 + 0x14);
      if (uVar11 == 0) {
        uVar11 = ((uint)*(ushort *)(iVar9 + 0xe) * *(int *)(iVar9 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar9 + 8);
      }
      puVar7 = (undefined4 *)FUN_006b4fa0(iVar9);
      for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar7 = 0xffffffff;
        puVar7 = puVar7 + 1;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined1 *)puVar7 = 0xff;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      ccFntTy::SetSurf((ccFntTy *)this_00[1].systemId,*(int *)((int)&this_00[0x34].vtable + 2),0,0,0
                       ,0,0);
      if ((param_1->arg0).ptr != (undefined4 *)0x0) {
        ccFntTy::WrStr((ccFntTy *)this_00[1].systemId,*(uint **)(param_1->arg0).ptr,0,-1,2);
      }
      uVar1 = (param_1->arg1).words.low;
      if ((uVar1 != 0xffff) || ((param_1->arg1).words.high != 0xffff)) {
        pAVar3 = *(AnonShape_006E6FB0_BC494FEA **)((int)&this_00[0x34].vtable + 2);
        uVar11 = (uint)(param_1->arg1).words.high;
        FUN_006b5b10(pAVar3,0,(uint)uVar1,uVar11 + 2,(uint)uVar1,
                     (int)pAVar3->field_0008 + (-5 - uVar11),9,0xd);
      }
      FUN_006b35d0((int *)PTR_008075a8,this_00[0x2a].systemId);
      g_currentExceptionFrame = local_74.previous;
      return;
    }
    if ((SVar2 == MESS_FSGSTY_C0A1) && (local_8[0x2a].objectLock != (void *)0x0)) {
      local_20 = 0x21;
      SystemClassTy::SendMessage(local_8,2,(int)local_8[0x2a].objectLock,(int)local_30);
      if (local_1c == 0) {
        local_20 = 0x20;
        local_1c = 1;
        SystemClassTy::SendMessage(this_00,2,(int)this_00[0x2a].objectLock,(int)local_30);
        g_currentExceptionFrame = local_74.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_74.previous;
  return;
}

