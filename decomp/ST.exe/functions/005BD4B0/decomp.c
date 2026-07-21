#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::OutTGlProc */

void __thiscall
MReportTy::OutTGlProc
          (MReportTy *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5
          ,int param_6,int param_7,int param_8)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  UINT resourceId;
  int iVar7;
  uint uVar8;
  InternalExceptionFrame local_50;
  int local_c;
  AnonShape_005BD4B0_63635D6D *local_8;

  if (param_8 != 0) {
    local_c = param_8;
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    iVar7 = local_c;
    if (iVar2 == 0) {
      iVar2 = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar4 = (undefined4 *)(*(int *)(local_c + 0x5d) + 0x28);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar3 = FUN_006b4fe0(*(int *)(local_c + 0x5d));
      local_8 = (AnonShape_005BD4B0_63635D6D *)
                FUN_006b50c0(param_6,param_7,(uint)*(ushort *)(*(int *)(iVar7 + 0x5d) + 0xe),uVar3,
                             puVar4,iVar2);
      uVar3 = local_8->field_0014;
      if (uVar3 == 0) {
        uVar3 = ((uint)local_8->field_000E * local_8->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                local_8->field_0008;
      }
      puVar4 = (undefined4 *)FUN_006b4fa0((int)local_8);
      for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar4 = 0x4c4c4c4c;
        puVar4 = puVar4 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar4 = 0x4c;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)local_8,0,2,2,local_8->field_0004 + -4,
                   local_8->field_0008 + -4,0x18,0xd);
      ccFntTy::SetSurf(*(ccFntTy **)(iVar7 + 0x83),(int)local_8,0,5,5,local_8->field_0004 + -10,0xf)
      ;
      if (*(char *)(iVar7 + 0x67) == '\0') {
        pcVar5 = LoadResourceString(0x2711,HINSTANCE_00807618);
      }
      else {
        pcVar5 = (char *)&DAT_0080c736;
      }
      pcVar6 = LoadResourceString(0x2445,HINSTANCE_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__0_s___2_s_007ccf14,pcVar6,pcVar5);
      ccFntTy::WrStr(*(ccFntTy **)(iVar7 + 0x83),&DAT_0080f33a,10,-1,0);
      ccFntTy::SetSurf(*(ccFntTy **)(iVar7 + 0x83),(int)local_8,0,5,0x19,local_8->field_0004 + -10,
                       0xf);
      if (*(char *)(iVar7 + 0x67) == '\0') {
        resourceId = 0x2711;
      }
      else {
        resourceId = 0x2339 - (DAT_0080c522 != 0);
      }
      pcVar5 = LoadResourceString(resourceId,HINSTANCE_00807618);
      pcVar6 = LoadResourceString(0x2337,HINSTANCE_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__0_s__2_s_007ccf08,pcVar6,pcVar5);
      ccFntTy::WrStr(*(ccFntTy **)(iVar7 + 0x83),&DAT_0080f33a,10,-1,0);
      Library::DKW::DDX::FUN_006c5000
                (param_1,param_4,param_5,(int)local_8,0,0,0,local_8->field_0004,local_8->field_0008,
                 iVar7 + 0xa3,0x4c);
      FreeAndNull(&local_8);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x44,0,iVar2,&DAT_007a4ccc,
                               s_MReportTy__OutTGlProc_007cceec);
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,s_E____titans_Start_rpt_obj_cpp_007ccec8,0x44);
  }
  return;
}

