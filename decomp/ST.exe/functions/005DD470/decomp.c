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
  AnonShape_00710790_4CBB90D4 *pAVar5;
  AnonShape_006B5B10_E0D06CF1 *pAVar6;
  code *pcVar7;
  SystemClassTy *this_00;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *resourceString;
  InternalExceptionFrame local_74;
  undefined4 local_30 [4];
  undefined4 local_20;
  int local_1c;
  dword local_10;
  int local_c;
  SystemClassTy *local_8;

  puVar8 = local_30;
  local_8 = (SystemClassTy *)this;
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  iVar10 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0);
  this_00 = local_8;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Start\\startsys.cpp",0x349,0,iVar10,
                               "%s","StartSystemTy::ChatMessage");
    if (iVar9 == 0) {
      RaiseInternalException(iVar10,0,"E:\\__titans\\Start\\startsys.cpp",0x349);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar2 = param_1->id;
  if (SVar2 == MESS_STARTSYSTEMTY_633F) {
    if ((((*(int *)((int)&local_8[0x33].parentSystem + 2) != 0) && (DAT_0080c4fa != 0)) &&
        (-1 < (int)local_8[0x2a].app)) &&
       ((param_1 != (STMessage *)0x0 && (dVar4 = (param_1->arg2).u32, dVar4 != 0)))) {
      pAVar5 = (AnonShape_00710790_4CBB90D4 *)local_8[1].systemId;
      local_10 = dVar4;
      if (*(int *)(pAVar5 + 1) != 0) {
        FUN_00710790(pAVar5);
      }
      pAVar6 = *(AnonShape_006B5B10_E0D06CF1 **)((int)&this_00[0x33].parentSystem + 2);
      local_c = pAVar5->field_008A;
      FUN_006b4170(pAVar6,0,0,0,pAVar6->field_0004,pAVar6->field_0008,0xff);
      uVar11 = (uint)(param_1->arg0).words.high;
      iVar10 = DAT_0080c4fa;
      uVar12 = uVar11;
      if ((int)uVar11 < (int)(uVar11 + *(int *)(dVar4 + 0x1e0))) {
        do {
          if ((int)uVar12 < *(int *)(iVar10 + 8)) {
            resourceString = *(uint **)(*(int *)(iVar10 + 0x14) + uVar12 * 4);
          }
          else {
            resourceString = (uint *)0x0;
          }
          if (resourceString != (uint *)0x0) {
            iVar10 = *(int *)((int)&this_00[0x33].parentSystem + 2);
            ccFntTy::SetSurf((ccFntTy *)this_00[1].systemId,iVar10,0,0,(uVar12 - uVar11) * local_c,
                             *(int *)(iVar10 + 4),local_c);
            ccFntTy::WrStr((ccFntTy *)this_00[1].systemId,resourceString,0,-1,0);
            iVar10 = DAT_0080c4fa;
          }
          uVar12 = uVar12 + 1;
          uVar11 = (uint)(param_1->arg0).words.high;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        } while ((int)uVar12 < (int)(uVar11 + *(int *)(local_10 + 0x1e0)));
      }
      FUN_006b35d0((int *)PTR_008075a8,(uint)this_00[0x2a].app);
    }
  }
  else {
    if (SVar2 == MESS_BEHPANELTY_C0A0) {
      iVar10 = *(int *)((int)&local_8[0x34].vtable + 2);
      uVar12 = *(uint *)(iVar10 + 0x14);
      if (uVar12 == 0) {
        uVar12 = ((uint)*(ushort *)(iVar10 + 0xe) * *(int *)(iVar10 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar10 + 8);
      }
      puVar8 = (undefined4 *)FUN_006b4fa0(iVar10);
      for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      ccFntTy::SetSurf((ccFntTy *)this_00[1].systemId,*(int *)((int)&this_00[0x34].vtable + 2),0,0,0
                       ,0,0);
      if ((param_1->arg0).ptr != (undefined4 *)0x0) {
        ccFntTy::WrStr((ccFntTy *)this_00[1].systemId,*(uint **)(param_1->arg0).ptr,0,-1,2);
      }
      uVar1 = (param_1->arg1).words.low;
      if ((uVar1 != 0xffff) || ((param_1->arg1).words.high != 0xffff)) {
        pAVar3 = *(AnonShape_006E6FB0_BC494FEA **)((int)&this_00[0x34].vtable + 2);
        uVar12 = (uint)(param_1->arg1).words.high;
        FUN_006b5b10(pAVar3,0,(uint)uVar1,uVar12 + 2,(uint)uVar1,
                     (int)pAVar3->field_0008 + (-5 - uVar12),9,0xd);
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

