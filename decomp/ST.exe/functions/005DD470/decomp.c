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
  ushort *puVar3;
  dword dVar4;
  ccFntTy *pcVar5;
  AnonShape_006B5B10_E0D06CF1 *pAVar6;
  code *pcVar7;
  StartSystemTy *this_00;
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
  StartSystemTy *local_8;

  puVar8 = local_30;
  local_8 = this;
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
    if ((((local_8->field_067E != (ushort *)0x0) && (DAT_0080c4fa != 0)) &&
        (-1 < local_8->field_0558)) &&
       ((param_1 != (STMessage *)0x0 && (dVar4 = (param_1->arg2).u32, dVar4 != 0)))) {
      pcVar5 = local_8->field_0034;
      local_10 = dVar4;
      if (pcVar5->field_00A0 != 0) {
        FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar5);
      }
      pAVar6 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_067E;
      local_c = *(int *)&pcVar5->field_0x8a;
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
            ccFntTy::SetSurf(this_00->field_0034,(int)this_00->field_067E,0,0,
                             (uVar12 - uVar11) * local_c,*(int *)(this_00->field_067E + 2),local_c);
            ccFntTy::WrStr(this_00->field_0034,resourceString,0,-1,0);
            iVar10 = DAT_0080c4fa;
          }
          uVar12 = uVar12 + 1;
          uVar11 = (uint)(param_1->arg0).words.high;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        } while ((int)uVar12 < (int)(uVar11 + *(int *)(local_10 + 0x1e0)));
      }
      FUN_006b35d0((int *)PTR_008075a8,this_00->field_0558);
    }
  }
  else {
    if (SVar2 == MESS_BEHPANELTY_C0A0) {
      puVar3 = local_8->field_0682;
      uVar12 = *(uint *)(puVar3 + 10);
      if (uVar12 == 0) {
        uVar12 = ((uint)puVar3[7] * *(int *)(puVar3 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar3 + 4);
      }
      puVar8 = (undefined4 *)FUN_006b4fa0((int)puVar3);
      for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      ccFntTy::SetSurf(this_00->field_0034,(int)this_00->field_0682,0,0,0,0,0);
      if ((param_1->arg0).ptr != (undefined4 *)0x0) {
        ccFntTy::WrStr(this_00->field_0034,*(uint **)(param_1->arg0).ptr,0,-1,2);
      }
      uVar1 = (param_1->arg1).words.low;
      if ((uVar1 != 0xffff) || ((param_1->arg1).words.high != 0xffff)) {
        uVar12 = (uint)(param_1->arg1).words.high;
        FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_0682,0,(uint)uVar1,uVar12 + 2,
                     (uint)uVar1,
                     (int)((AnonShape_006E6FB0_BC494FEA *)this_00->field_0682)->field_0008 +
                     (-5 - uVar12),9,0xd);
      }
      FUN_006b35d0((int *)PTR_008075a8,this_00->field_0554);
      g_currentExceptionFrame = local_74.previous;
      return;
    }
    if ((SVar2 == MESS_FSGSTY_C0A1) && (local_8->field_054C != 0)) {
      local_20 = 0x21;
      SystemClassTy::SendMessage((SystemClassTy *)local_8,2,local_8->field_054C,(int)local_30);
      if (local_1c == 0) {
        local_20 = 0x20;
        local_1c = 1;
        SystemClassTy::SendMessage((SystemClassTy *)this_00,2,this_00->field_054C,(int)local_30);
        g_currentExceptionFrame = local_74.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_74.previous;
  return;
}

