
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::Download */

void __thiscall FSGSTy::Download(FSGSTy *this,undefined4 param_1,undefined4 param_2)

{
  AnonPointee_FSGSTy_1AC0 *pAVar1;
  code *pcVar2;
  FSGSTy *pFVar3;
  int errorCode;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;
  
  if (((this->field_1A5F == CASE_1) && (this->field_1AC0 != (AnonPointee_FSGSTy_1AC0 *)0x0)) &&
     (-1 < (int)this->field_1ABC)) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pFVar3 = local_8;
    if (errorCode == 0) {
      pAVar1 = local_8->field_1AC0;
      uVar9 = pAVar1->field_0014;
      if (uVar9 == 0) {
        uVar9 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                pAVar1->field_0008;
      }
      puVar4 = (undefined4 *)FUN_006b4fa0((int)pAVar1);
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar4 = 0xff;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0,0x16,0x1b8,0xf0);
      uVar5 = FUN_006b0140(0x25bb,HINSTANCE_00807618);
      uVar6 = FUN_006b0140(0x25ba,HINSTANCE_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__s__d_____d__s__007cc434,uVar6,param_1,param_2,uVar5);
      ccFntTy::WrTxt(pFVar3->field_1A73,&DAT_0080f33a,-2,-1,2,-1,-1);
      FUN_006b35d0(DAT_008075a8,pFVar3->field_1ABC);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x941,0,errorCode,
                               &DAT_007a4ccc,s_FSGSTy__Download_007cc420);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x941);
  }
  return;
}

