
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::ConnectProc */

void __thiscall FSGSTy::ConnectProc(FSGSTy *this,int param_1,int param_2)

{
  char cVar1;
  AnonPointee_FSGSTy_1AC0 *pAVar2;
  code *pcVar3;
  FSGSTy *pFVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 extraout_EAX;
  char *extraout_EAX_00;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  uint uVar9;
  char *pcVar10;
  void *unaff_EDI;
  char *pcVar11;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;
  
  if (((this->field_1A5F == CASE_1) && (this->field_1AC0 != (AnonPointee_FSGSTy_1AC0 *)0x0)) &&
     (-1 < (int)this->field_1ABC)) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar5 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pFVar4 = local_8;
    if (iVar5 == 0) {
      pAVar2 = local_8->field_1AC0;
      uVar9 = pAVar2->field_0014;
      if (uVar9 == 0) {
        uVar9 = ((uint)(ushort)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                pAVar2->field_0008;
      }
      puVar6 = (undefined4 *)FUN_006b4fa0((int)pAVar2);
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar6 = 0xffffffff;
        puVar6 = puVar6 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar6 = 0xff;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      ccFntTy::SetSurf(pFVar4->field_1A73,(int)pFVar4->field_1AC0,0,0,0x16,0x1b8,0xf0);
      if (param_1 < param_2) {
        iVar5 = (param_1 * 100) / param_2;
        LoadResourceString(0x2571,HINSTANCE_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,s__s_d___007cc3ec,extraout_EAX,iVar5);
      }
      else {
        LoadResourceString(0x2570,HINSTANCE_00807618);
        uVar9 = 0xffffffff;
        pcVar10 = extraout_EAX_00;
        do {
          pcVar11 = pcVar10;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pcVar10 = pcVar11 + -uVar9;
        pcVar11 = (char *)&DAT_0080f33a;
        for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
      }
      ccFntTy::WrTxt(pFVar4->field_1A73,&DAT_0080f33a,-1,-1,2,-1,-1);
      FUN_006b35d0(DAT_008075a8,pFVar4->field_1ABC);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x909,0,iVar5,&DAT_007a4ccc
                               ,s_FSGSTy__ConnectProc_007cc3d4);
    if (iVar7 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x909);
  }
  return;
}

