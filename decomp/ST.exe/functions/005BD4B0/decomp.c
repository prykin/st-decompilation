#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::OutTGlProc

   [STTypeFamilyApplier] CONTEXTUAL_GENERATED_RECORD.
   Evidence: one script-owned pointer shape is used only by functions with one unique class-owner
   context; promote its stable machine layout to a generated owner-qualified record name

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 005BD4B0 -> 006C5000 @ 005BD699 | 005BE5B0 -> 005BD4B0 @ 005BE645; data at 0080759C */

void __thiscall
MReportTy::OutTGlProc
          (MReportTy *this,DDXContext *param_1,undefined4 param_2,undefined4 param_3,int param_4,
          int param_5,int param_6,int param_7,int param_8)

{
  code *pcVar1;
  int iVar2;
  int uVar3;
  undefined4 *puVar3;
  char *pcVar4;
  char *pcVar5;
  UINT resourceId;
  int iVar6;
  uint uVar7;
  uint uVar8;
  InternalExceptionFrame local_50;
  int local_c;
  RecoveredRecord_MReportTy_005BD4B0 *local_8;

  if (param_8 != 0) {
    local_c = param_8;
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    iVar6 = local_c;
    if (iVar2 == 0) {
      iVar2 = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar3 = (undefined4 *)(*(int *)(local_c + 0x5d) + 0x28);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar3 = FUN_006b4fe0(*(int *)(local_c + 0x5d));
      local_8 = (RecoveredRecord_MReportTy_005BD4B0 *)
                FUN_006b50c0(param_6,param_7,(uint)*(ushort *)(*(int *)(iVar6 + 0x5d) + 0xe),uVar3,
                             puVar3,iVar2);
      uVar8 = local_8->field_0014;
      if (uVar8 == 0) {
        uVar8 = ((uint)local_8->field_000E * local_8->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                local_8->field_0008;
      }
      puVar3 = (undefined4 *)FUN_006b4fa0((int *)local_8);
      for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar3 = 0x4c4c4c4c;
        puVar3 = puVar3 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar3 = 0x4c;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)local_8,0,2,2,local_8->field_0004 + -4,
                   local_8->field_0008 + -4,0x18,0xd);
      ccFntTy::SetSurf(*(ccFntTy **)(iVar6 + 0x83),(int)local_8,0,5,5,local_8->field_0004 + -10,0xf);
      if (*(char *)(iVar6 + 0x67) == '\0') {
        pcVar4 = LoadResourceString(0x2711,g_module_00807618);
      }
      else {
        pcVar4 = (char *)&DAT_0080c736;
      }
      pcVar5 = LoadResourceString(0x2445,g_module_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,"&0%s: &2%s",pcVar5,pcVar4);
      ccFntTy::WrStr(*(ccFntTy **)(iVar6 + 0x83),&DAT_0080f33a,10,-1,0);
      ccFntTy::SetSurf(*(ccFntTy **)(iVar6 + 0x83),(int)local_8,0,5,0x19,local_8->field_0004 + -10,
                       0xf);
      if (*(char *)(iVar6 + 0x67) == '\0') {
        resourceId = 0x2711;
      }
      else {
        resourceId = 0x2339 - (DAT_0080c522 != 0);
      }
      pcVar4 = LoadResourceString(resourceId,g_module_00807618);
      pcVar5 = LoadResourceString(0x2337,g_module_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,"&0%s &2%s",pcVar5,pcVar4);
      ccFntTy::WrStr(*(ccFntTy **)(iVar6 + 0x83),&DAT_0080f33a,10,-1,0);
      Library::DKW::DDX::FUN_006c5000
                (param_1,param_4,param_5,(int)local_8,0,0,0,local_8->field_0004,local_8->field_0008,
                 iVar6 + 0xa3,0x4c);
      FreeAndNull(&local_8);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0x44,0,iVar2,"%s",
                               "MReportTy::OutTGlProc");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\rpt_obj.cpp",0x44);
  }
  return;
}

