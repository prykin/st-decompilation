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
  int iVar3;
  int iVar2;
  int uVar3;
  uint *puVar4;
  char *pcVar5;
  char *pcVar6;
  UINT resourceId;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  InternalExceptionFrame local_50;
  int local_c;
  RecoveredRecord_MReportTy_005BD4B0 *local_8;

  if (param_8 != 0) {
    local_c = param_8;
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    iVar3 = local_c;
    if (iVar2 == 0) {
      iVar10 = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar9 = *(ushort **)(local_c + 0x5d) + 0x14;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar3 = FUN_006b4fe0(*(ushort **)(local_c + 0x5d));
      local_8 = (RecoveredRecord_MReportTy_005BD4B0 *)
                FUN_006b50c0(param_6,param_7,(uint)*(ushort *)(STField<int>(iVar3,0x5D) + 0xe),uVar3,
                             (undefined4 *)puVar9,iVar10);
      uVar8 = local_8->field_0014;
      if (uVar8 == 0) {
        uVar8 = ((uint)local_8->field_000E * local_8->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                local_8->field_0008;
      }
      puVar4 = (undefined4 *)FUN_006b4fa0((int *)local_8);
      for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar4 = 0x4c4c4c4c;
        puVar4 = puVar4 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar4 = 0x4c;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)local_8,0,2,2,local_8->field_0004 + -4,
                   local_8->field_0008 + -4,0x18,0xd);
      ccFntTy::SetSurf(*(ccFntTy **)(iVar3 + 0x83),(int)local_8,0,5,5,local_8->field_0004 + -10,0xf);
      if (((char *)iVar3)[0x67] == '\0') {
        pcVar5 = LoadResourceString(0x2711,g_hINSTANCE_00807618);
      }
      else {
        pcVar5 = (char *)&DAT_0080c736;
      }
      pcVar6 = LoadResourceString(0x2445,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005BD5D9]: CALL EDI */
      wsprintfA((LPSTR)&DAT_0080f33a,"&0%s: &2%s",pcVar6,pcVar5);
      ccFntTy::WrStr(*(ccFntTy **)(iVar3 + 0x83),(char *)&DAT_0080f33a,10,-1,0);
      ccFntTy::SetSurf(*(ccFntTy **)(iVar3 + 0x83),(int)local_8,0,5,0x19,local_8->field_0004 + -10,
                       0xf);
      if (((char *)iVar3)[0x67] == '\0') {
        resourceId = 0x2711;
      }
      else {
        resourceId = 0x2339 - (DAT_0080c522 != 0);
      }
      pcVar5 = LoadResourceString(resourceId,g_hINSTANCE_00807618);
      pcVar6 = LoadResourceString(0x2337,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005BD657]: CALL EDI */
      wsprintfA((LPSTR)&DAT_0080f33a,"&0%s &2%s",pcVar6,pcVar5);
      ccFntTy::WrStr(*(ccFntTy **)(iVar3 + 0x83),(char *)&DAT_0080f33a,10,-1,0);
      Library::DKW::DDX::FUN_006c5000
                (param_1,param_4,param_5,(int)local_8,0,0,0,local_8->field_0004,local_8->field_0008,
                 iVar3 + 0xa3,0x4c);
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

