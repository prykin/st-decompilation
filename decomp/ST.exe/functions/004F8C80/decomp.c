
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::PaintSMap */

uint __thiscall CPanelTy::PaintSMap(CPanelTy *this)

{
  ulonglong uVar1;
  code *pcVar2;
  CPanelTy *pCVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_EAX;
  undefined *puVar7;
  char cVar8;
  undefined4 unaff_ESI;
  uint uVar9;
  CPanelTy *pCVar10;
  void *unaff_EDI;
  char *pcVar11;
  char *pcVar12;
  CPanelTy *pCVar13;
  LPCSTR pCVar14;
  InternalExceptionFrame local_50;
  char local_c;
  undefined3 uStack_b;
  CPanelTy *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar3 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x2fc,0,iVar4,&DAT_007a4ccc,
                               s_CPanelTy__PaintSMap_007c216c);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x2fc);
    return extraout_EAX;
  }
  if ((uint)(*(int *)(local_8 + 0x38) - *(int *)(local_8 + 0x998)) < 100) {
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
  *(int *)(local_8 + 0x998) = *(int *)(local_8 + 0x38);
  thunk_FUN_0052b330((int)local_8);
  FUN_006e6fb0(DAT_00807598,*(int *)(pCVar3 + 400),5,7,(uint)(*(short *)(pCVar3 + 0x23f) != 2));
  uVar5 = *(uint *)(DAT_00802a38 + 0xe4) * 0x51eb851f;
  uVar9 = *(uint *)(DAT_00802a38 + 0xe4) / 0x19;
  if (300 < uVar9 - DAT_0080c4cf) {
    uVar5 = thunk_FUN_0056f930(0x807620);
    DAT_00808794 = uVar5;
    DAT_0080c4cf = uVar9;
  }
  if (uVar9 != *(uint *)(pCVar3 + 0x9a0)) {
    *(uint *)(pCVar3 + 0x9a0) = uVar9;
    ccFntTy::SetSurf(*(ccFntTy **)(pCVar3 + 0x1bc),*(int *)(pCVar3 + 400),0,
                     (DAT_0080874e == '\x03') + 7,0x10,0x28,0xb);
    uVar5 = (uint)DAT_0080874d;
    if ((&DAT_008087f7)[uVar5 * 0x51] == '\0') {
      iVar4 = *(int *)(&DAT_008087f8 + uVar5 * 0x51);
      iVar6 = *(int *)(pCVar3 + 0x9a0);
      uVar5 = (uint)(iVar4 + iVar6) / 0xe10;
      cVar8 = (char)uVar5;
      _local_c = CONCAT31(uStack_b,cVar8);
      pCVar10 = pCVar3 + 0x1e1;
      if (cVar8 == '\0') {
        puVar7 = &DAT_007c2198;
        pCVar14 = &DAT_007c2194;
      }
      else {
        puVar7 = (undefined *)(uVar5 & 0xff);
        pCVar14 = &DAT_007c219c;
      }
      wsprintfA((LPSTR)pCVar10,pCVar14,puVar7);
      uVar1 = (ulonglong)(uint)(iVar4 + iVar6) % 0xe10;
      wsprintfA((LPSTR)pCVar10,s__s_02d__02d_007c2184,pCVar10,(int)(uVar1 / 0x3c),
                (int)(uVar1 % 0x3c));
      uVar5 = ccFntTy::WrTxt(*(ccFntTy **)(pCVar3 + 0x1bc),(uint *)pCVar10,0,0,
                             (uint)(DAT_0080874e == '\x03'),-1,-1);
    }
    else {
      if ((uint)(*(int *)(pCVar3 + 0x9a0) - *(int *)(&DAT_008087fc + uVar5 * 0x51)) <
          *(uint *)(&DAT_008087f8 + uVar5 * 0x51)) {
        uVar5 = *(uint *)(&DAT_008087f8 + uVar5 * 0x51) -
                (*(int *)(pCVar3 + 0x9a0) - *(int *)(&DAT_008087fc + uVar5 * 0x51));
        uVar9 = uVar5 / 0xe10;
        cVar8 = (char)uVar9;
        _local_c = CONCAT31(uStack_b,cVar8);
        if (cVar8 == '\0') {
          puVar7 = &DAT_007c2198;
          pCVar14 = &DAT_007c2194;
        }
        else {
          puVar7 = (undefined *)(uVar9 & 0xff);
          pCVar14 = &DAT_007c219c;
        }
        wsprintfA((LPSTR)(pCVar3 + 0x1e1),pCVar14,puVar7);
        uVar1 = (ulonglong)uVar5 % 0xe10;
        wsprintfA((LPSTR)(pCVar3 + 0x1e1),s__s_02d__02d_007c2184,pCVar3 + 0x1e1,(int)(uVar1 / 0x3c),
                  (int)(uVar1 % 0x3c));
      }
      else {
        uVar5 = 0xffffffff;
        pcVar11 = &DAT_007c21a4;
        do {
          pcVar12 = pcVar11;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar11 + 1;
          cVar8 = *pcVar11;
          pcVar11 = pcVar12;
        } while (cVar8 != '\0');
        uVar5 = ~uVar5;
        pCVar10 = (CPanelTy *)(pcVar12 + -uVar5);
        pCVar13 = pCVar3 + 0x1e1;
        for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pCVar13 = *(undefined4 *)pCVar10;
          pCVar10 = pCVar10 + 4;
          pCVar13 = pCVar13 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pCVar13 = *pCVar10;
          pCVar10 = pCVar10 + 1;
          pCVar13 = pCVar13 + 1;
        }
      }
      uVar5 = ccFntTy::WrTxt(*(ccFntTy **)(pCVar3 + 0x1bc),(uint *)(pCVar3 + 0x1e1),0,0,
                             (DAT_0080874e == '\x03') + 2,-1,-1);
      if (DAT_0080c4d3 != 2) {
        ccFntTy::WrTxt(*(ccFntTy **)(pCVar3 + 0x1cc),(uint *)(pCVar3 + 0x1e1),0xd,10,0,-1,-1);
        uVar5 = Library::DKW::DDX::FUN_006b3640
                          (DAT_008075a8,*(uint *)(pCVar3 + 0x174),0xffffffff,
                           *(uint *)(pCVar3 + 0xec),*(uint *)(pCVar3 + 0xf0));
      }
    }
  }
  if ((*(short *)(pCVar3 + 0x23f) != 2) && (uVar5 = *(uint *)(pCVar3 + 0x158), -1 < (int)uVar5)) {
    uVar5 = Library::DKW::DDX::FUN_006b3640
                      (DAT_008075a8,uVar5,0xffffffff,*(uint *)(pCVar3 + 0x4c),
                       *(uint *)(pCVar3 + 0xa4));
  }
  g_currentExceptionFrame = local_50.previous;
  return uVar5;
}

