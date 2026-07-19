
int __thiscall AiFltClassTy::AppendZone(AiFltClassTy *this,short *param_1)

{
  int iVar1;
  short sVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_ESI;
  short *psVar9;
  void *unaff_EDI;
  InternalExceptionFrame IStack_74;
  int iStack_30;
  int iStack_2c;
  uint *puStack_28;
  uint uStack_24;
  int iStack_20;
  AiFltClassTy *pAStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  uint uStack_c;
  int iStack_8;
  
  iStack_18 = 1;
  IStack_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_74;
  pAStack_1c = this;
  iVar5 = Library::MSVCRT::__setjmp3(IStack_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    g_currentExceptionFrame = IStack_74.previous;
    iVar7 = ReportDebugMessage(s_E____titans_ai_ai_flt_cpp_007d2b80,0x2df,0,iVar5,&DAT_007a4ccc,
                               s_AiFltClassTy__AppendZone_007d2c00);
    if (iVar7 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_ai_ai_flt_cpp_007d2b80,0x2e0);
      return iVar5;
    }
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  uStack_c = 0;
  puStack_28 = *(uint **)(pAStack_1c + 0x22f);
  uStack_24 = puStack_28[3];
  if (0 < (int)uStack_24) {
    sVar2 = param_1[1];
    iStack_8 = (int)sVar2;
    iVar5 = (int)*param_1;
    iStack_10 = (int)param_1[3];
    iStack_14 = (int)param_1[4];
    do {
      if (uStack_c < uStack_24) {
        psVar9 = (short *)(puStack_28[2] * uStack_c + puStack_28[7]);
      }
      else {
        psVar9 = (short *)0x0;
      }
      iVar7 = (int)*psVar9;
      iStack_30 = iStack_14 + -1 + iStack_8;
      iVar8 = (int)psVar9[1];
      iStack_20 = psVar9[3] + -1 + iVar7;
      iStack_2c = psVar9[4] + -1 + iVar8;
      if ((((iVar5 < iVar7) || (iStack_20 < iVar5)) || (iStack_8 < iVar8)) ||
         (((iStack_2c < iStack_8 || (iVar6 = iStack_10 + -1 + iVar5, iVar6 < iVar7)) ||
          ((psVar9[3] + -1 + iVar7 < iVar6 ||
           ((iStack_30 < iVar8 || (psVar9[4] + -1 + iVar8 < iStack_30)))))))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
LAB_0065f468:
        iStack_18 = 0;
        break;
      }
      iStack_20 = iStack_14 + -1 + iStack_8;
      if (((((iVar7 < iVar5) || (iVar6 = iStack_10 + -1 + iVar5, iVar6 < iVar7)) ||
           (iVar8 < iStack_8)) ||
          ((iStack_20 < iVar8 || (iVar1 = psVar9[3] + -1 + iVar7, iVar1 < iVar5)))) ||
         ((iVar6 < iVar1 ||
          ((iVar6 = psVar9[4] + -1 + iVar8, iVar6 < iStack_8 || (iStack_20 < iVar6)))))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        Library::DKW::TBL::FUN_006ae140(puStack_28,uStack_c,(undefined4 *)param_1);
        goto LAB_0065f468;
      }
      if ((int)*(short *)(pAStack_1c + 0x170) <= (int)uStack_c) {
        iVar6 = iStack_10 / 2 + iVar5;
        if ((((iVar6 < iVar7) || (psVar9[3] + iVar7 <= iVar6)) ||
            (iVar6 = iStack_14 / 2 + iStack_8, iVar6 < iVar8)) || (psVar9[4] + iVar8 <= iVar6)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) {
          iVar7 = iVar7 + (int)psVar9[3] / 2;
          if (((iVar7 < iVar5) || (iStack_10 + iVar5 <= iVar7)) ||
             ((iVar8 = iVar8 + (int)psVar9[4] / 2, iVar8 < iStack_8 ||
              (iStack_14 + iStack_8 <= iVar8)))) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_0065f3c9;
        }
        iVar7 = psVar9[3] + -1 + (int)*psVar9;
        iStack_2c = psVar9[1] + -1 + (int)psVar9[4];
        iStack_30 = iStack_10 + -1 + iVar5;
        iVar8 = iStack_14 + -1 + iStack_8;
        if (iVar5 < *psVar9) {
          *psVar9 = *param_1;
        }
        if (iStack_8 < psVar9[1]) {
          psVar9[1] = sVar2;
        }
        if (iVar7 < iStack_30) {
          psVar9[3] = ((short)iStack_30 - *psVar9) + 1;
        }
        else {
          psVar9[3] = ((short)iVar7 - *psVar9) + 1;
        }
        if (iStack_2c < iVar8) {
          psVar9[4] = ((short)iVar8 - psVar9[1]) + 1;
        }
        else {
          psVar9[4] = ((short)iStack_2c - psVar9[1]) + 1;
        }
        goto LAB_0065f468;
      }
LAB_0065f3c9:
      uStack_c = uStack_c + 1;
    } while ((int)uStack_c < (int)uStack_24);
  }
  if (iStack_18 != 0) {
    Library::DKW::TBL::FUN_006ae1c0(*(uint **)(pAStack_1c + 0x22f),(undefined4 *)param_1);
  }
  g_currentExceptionFrame = IStack_74.previous;
  return 0;
}

