
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
  undefined4 uVar5;
  UINT UVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  int local_c;
  int local_8;
  
  if (param_8 != 0) {
    local_c = param_8;
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    iVar8 = local_c;
    if (iVar2 == 0) {
      iVar2 = 1;
      puVar4 = (undefined4 *)(*(int *)(local_c + 0x5d) + 0x28);
      uVar3 = FUN_006b4fe0(*(int *)(local_c + 0x5d));
      local_8 = FUN_006b50c0(param_6,param_7,(uint)*(ushort *)(*(int *)(iVar8 + 0x5d) + 0xe),uVar3,
                             puVar4,iVar2);
      uVar3 = *(uint *)(local_8 + 0x14);
      if (uVar3 == 0) {
        uVar3 = ((uint)*(ushort *)(local_8 + 0xe) * *(int *)(local_8 + 4) + 0x1f >> 3 & 0x1ffffffc)
                * *(int *)(local_8 + 8);
      }
      puVar4 = (undefined4 *)FUN_006b4fa0(local_8);
      for (uVar9 = uVar3 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar4 = 0x4c4c4c4c;
        puVar4 = puVar4 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar4 = 0x4c;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      FUN_006b5ee0(local_8,0,2,2,*(int *)(local_8 + 4) + -4,*(int *)(local_8 + 8) + -4,0x18,0xd);
      ccFntTy::SetSurf(*(ccFntTy **)(iVar8 + 0x83),local_8,0,5,5,*(int *)(local_8 + 4) + -10,0xf);
      if (*(char *)(iVar8 + 0x67) == '\0') {
        puVar4 = (undefined4 *)FUN_006b0140(0x2711,DAT_00807618);
      }
      else {
        puVar4 = &DAT_0080c736;
      }
      uVar5 = FUN_006b0140(0x2445,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__0_s___2_s_007ccf14,uVar5,puVar4);
      ccFntTy::WrStr(*(ccFntTy **)(iVar8 + 0x83),&DAT_0080f33a,10,-1,0);
      ccFntTy::SetSurf(*(ccFntTy **)(iVar8 + 0x83),local_8,0,5,0x19,*(int *)(local_8 + 4) + -10,0xf)
      ;
      if (*(char *)(iVar8 + 0x67) == '\0') {
        UVar6 = 0x2711;
      }
      else {
        UVar6 = 0x2339 - (DAT_0080c522 != 0);
      }
      uVar5 = FUN_006b0140(UVar6,DAT_00807618);
      uVar7 = FUN_006b0140(0x2337,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__0_s__2_s_007ccf08,uVar7,uVar5);
      ccFntTy::WrStr(*(ccFntTy **)(iVar8 + 0x83),&DAT_0080f33a,10,-1,0);
      Library::DKW::DDX::FUN_006c5000
                (param_1,param_4,param_5,local_8,0,0,0,*(uint *)(local_8 + 4),*(int *)(local_8 + 8),
                 iVar8 + 0xa3,0x4c);
      FUN_006ab060(&local_8);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x44,0,iVar2,&DAT_007a4ccc,
                               s_MReportTy__OutTGlProc_007cceec);
    if (iVar8 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Start_rpt_obj_cpp_007ccec8,0x44);
  }
  return;
}

