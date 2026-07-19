
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::PaintSMap */

uint __thiscall CPanelTy::PaintSMap(CPanelTy *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  CPanelTy *pCVar4;
  int errorCode;
  uint uVar5;
  int iVar6;
  uint extraout_EAX;
  undefined *puVar7;
  char cVar8;
  undefined4 unaff_ESI;
  uint uVar9;
  char *pcVar10;
  void *unaff_EDI;
  char *pcVar11;
  LPCSTR pCVar12;
  InternalExceptionFrame local_50;
  char local_c;
  undefined3 uStack_b;
  CPanelTy *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar4 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x2fc,0,errorCode,
                               &DAT_007a4ccc,s_CPanelTy__PaintSMap_007c216c);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x2fc);
    return extraout_EAX;
  }
  if ((uint)(local_8->field_0038 - local_8->field_0998) < 100) {
    if ((*(int *)((int)DAT_00807598 + 0x442) == 0) && (*(int *)((int)DAT_00807598 + 0x446) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    if (uVar5 == 0) {
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    if (1 < DAT_0080673c) {
      g_currentExceptionFrame = local_50.previous;
      return uVar5;
    }
  }
  local_8->field_0998 = local_8->field_0038;
  thunk_FUN_0052b330((int)local_8);
  FUN_006e6fb0(DAT_00807598,pCVar4->field_0190,5,7,(uint)(pCVar4->field_023F != 2));
  uVar5 = *(uint *)(DAT_00802a38 + 0xe4) * 0x51eb851f;
  uVar9 = *(uint *)(DAT_00802a38 + 0xe4) / 0x19;
  if (300 < uVar9 - DAT_0080c4cf) {
    uVar5 = thunk_FUN_0056f930(0x807620);
    DAT_00808794 = uVar5;
    DAT_0080c4cf = uVar9;
  }
  if (uVar9 != pCVar4->field_09A0) {
    pCVar4->field_09A0 = uVar9;
    ccFntTy::SetSurf(pCVar4->field_01BC,pCVar4->field_0190,0,(DAT_0080874e == '\x03') + 7,0x10,0x28,
                     0xb);
    uVar5 = (uint)DAT_0080874d;
    if ((&DAT_008087f7)[uVar5 * 0x51] == '\0') {
      uVar9 = *(int *)(&DAT_008087f8 + uVar5 * 0x51) + pCVar4->field_09A0;
      uVar5 = uVar9 / 0xe10;
      cVar8 = (char)uVar5;
      _local_c = CONCAT31(uStack_b,cVar8);
      puVar1 = &pCVar4->field_0x1e1;
      if (cVar8 == '\0') {
        puVar7 = &DAT_007c2198;
        pCVar12 = &DAT_007c2194;
      }
      else {
        puVar7 = (undefined *)(uVar5 & 0xff);
        pCVar12 = &DAT_007c219c;
      }
      wsprintfA(puVar1,pCVar12,puVar7);
      uVar2 = (ulonglong)uVar9 % 0xe10;
      wsprintfA(puVar1,s__s_02d__02d_007c2184,puVar1,(int)(uVar2 / 0x3c),(int)(uVar2 % 0x3c));
      uVar5 = ccFntTy::WrTxt(pCVar4->field_01BC,(uint *)puVar1,0,0,(uint)(DAT_0080874e == '\x03'),-1
                             ,-1);
    }
    else {
      uVar9 = pCVar4->field_09A0 - *(int *)(&DAT_008087fc + uVar5 * 0x51);
      if (uVar9 < *(uint *)(&DAT_008087f8 + uVar5 * 0x51)) {
        uVar9 = *(uint *)(&DAT_008087f8 + uVar5 * 0x51) - uVar9;
        uVar5 = uVar9 / 0xe10;
        cVar8 = (char)uVar5;
        _local_c = CONCAT31(uStack_b,cVar8);
        if (cVar8 == '\0') {
          puVar7 = &DAT_007c2198;
          pCVar12 = &DAT_007c2194;
        }
        else {
          puVar7 = (undefined *)(uVar5 & 0xff);
          pCVar12 = &DAT_007c219c;
        }
        wsprintfA(&pCVar4->field_0x1e1,pCVar12,puVar7);
        uVar2 = (ulonglong)uVar9 % 0xe10;
        wsprintfA(&pCVar4->field_0x1e1,s__s_02d__02d_007c2184,&pCVar4->field_0x1e1,
                  (int)(uVar2 / 0x3c),(int)(uVar2 % 0x3c));
      }
      else {
        uVar5 = 0xffffffff;
        pcVar10 = &DAT_007c21a4;
        do {
          pcVar11 = pcVar10;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar11 = pcVar10 + 1;
          cVar8 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar8 != '\0');
        uVar5 = ~uVar5;
        pcVar10 = pcVar11 + -uVar5;
        pcVar11 = &pCVar4->field_0x1e1;
        for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
      }
      uVar5 = ccFntTy::WrTxt(pCVar4->field_01BC,(uint *)&pCVar4->field_0x1e1,0,0,
                             (DAT_0080874e == '\x03') + 2,-1,-1);
      if (DAT_0080c4d3 != 2) {
        ccFntTy::WrTxt(pCVar4->field_01CC,(uint *)&pCVar4->field_0x1e1,0xd,10,0,-1,-1);
        uVar5 = Library::DKW::DDX::FUN_006b3640
                          (DAT_008075a8,pCVar4->field_0174,0xffffffff,pCVar4->field_00EC,
                           pCVar4->field_00F0);
      }
    }
  }
  if ((pCVar4->field_023F != 2) && (uVar5 = pCVar4->field_0158, -1 < (int)uVar5)) {
    uVar5 = Library::DKW::DDX::FUN_006b3640
                      (DAT_008075a8,uVar5,0xffffffff,pCVar4->field_004C,pCVar4->field_00A4);
  }
  g_currentExceptionFrame = local_50.previous;
  return uVar5;
}

