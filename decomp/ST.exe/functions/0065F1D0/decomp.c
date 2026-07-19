
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::AppendZone */

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
  InternalExceptionFrame local_74;
  int local_30;
  int local_2c;
  uint *local_28;
  uint local_24;
  int local_20;
  AiFltClassTy *local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_18 = 1;
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_1c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_74.previous;
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
  local_c = 0;
  local_28 = *(uint **)(local_1c + 0x22f);
  local_24 = local_28[3];
  if (0 < (int)local_24) {
    sVar2 = param_1[1];
    local_8 = (int)sVar2;
    iVar5 = (int)*param_1;
    local_10 = (int)param_1[3];
    local_14 = (int)param_1[4];
    do {
      if (local_c < local_24) {
        psVar9 = (short *)(local_28[2] * local_c + local_28[7]);
      }
      else {
        psVar9 = (short *)0x0;
      }
      iVar7 = (int)*psVar9;
      local_30 = local_14 + -1 + local_8;
      iVar8 = (int)psVar9[1];
      local_20 = psVar9[3] + -1 + iVar7;
      local_2c = psVar9[4] + -1 + iVar8;
      if ((((iVar5 < iVar7) || (local_20 < iVar5)) || (local_8 < iVar8)) ||
         (((local_2c < local_8 || (iVar6 = local_10 + -1 + iVar5, iVar6 < iVar7)) ||
          ((psVar9[3] + -1 + iVar7 < iVar6 ||
           ((local_30 < iVar8 || (psVar9[4] + -1 + iVar8 < local_30)))))))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
LAB_0065f468:
        local_18 = 0;
        break;
      }
      local_20 = local_14 + -1 + local_8;
      if (((((iVar7 < iVar5) || (iVar6 = local_10 + -1 + iVar5, iVar6 < iVar7)) || (iVar8 < local_8)
           ) || ((local_20 < iVar8 || (iVar1 = psVar9[3] + -1 + iVar7, iVar1 < iVar5)))) ||
         ((iVar6 < iVar1 ||
          ((iVar6 = psVar9[4] + -1 + iVar8, iVar6 < local_8 || (local_20 < iVar6)))))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        Library::DKW::TBL::FUN_006ae140(local_28,local_c,(undefined4 *)param_1);
        goto LAB_0065f468;
      }
      if ((int)*(short *)(local_1c + 0x170) <= (int)local_c) {
        iVar6 = local_10 / 2 + iVar5;
        if ((((iVar6 < iVar7) || (psVar9[3] + iVar7 <= iVar6)) ||
            (iVar6 = local_14 / 2 + local_8, iVar6 < iVar8)) || (psVar9[4] + iVar8 <= iVar6)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) {
          iVar7 = iVar7 + (int)psVar9[3] / 2;
          if (((iVar7 < iVar5) || (local_10 + iVar5 <= iVar7)) ||
             ((iVar8 = iVar8 + (int)psVar9[4] / 2, iVar8 < local_8 || (local_14 + local_8 <= iVar8))
             )) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_0065f3c9;
        }
        iVar7 = psVar9[3] + -1 + (int)*psVar9;
        local_2c = psVar9[1] + -1 + (int)psVar9[4];
        local_30 = local_10 + -1 + iVar5;
        iVar8 = local_14 + -1 + local_8;
        if (iVar5 < *psVar9) {
          *psVar9 = *param_1;
        }
        if (local_8 < psVar9[1]) {
          psVar9[1] = sVar2;
        }
        if (iVar7 < local_30) {
          psVar9[3] = ((short)local_30 - *psVar9) + 1;
        }
        else {
          psVar9[3] = ((short)iVar7 - *psVar9) + 1;
        }
        if (local_2c < iVar8) {
          psVar9[4] = ((short)iVar8 - psVar9[1]) + 1;
        }
        else {
          psVar9[4] = ((short)local_2c - psVar9[1]) + 1;
        }
        goto LAB_0065f468;
      }
LAB_0065f3c9:
      local_c = local_c + 1;
    } while ((int)local_c < (int)local_24);
  }
  if (local_18 != 0) {
    Library::DKW::TBL::FUN_006ae1c0(*(uint **)(local_1c + 0x22f),(undefined4 *)param_1);
  }
  g_currentExceptionFrame = local_74.previous;
  return 0;
}

