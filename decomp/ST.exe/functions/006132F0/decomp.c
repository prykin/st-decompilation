#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_GnBom.cpp
   STGenBombC::LoadImagSpr */

undefined4 __thiscall STGenBombC::LoadImagSpr(STGenBombC *this,int param_1,int param_2)

{
  short sVar2;
  VisibleClassTy *pVVar3;
  STGenBombC *pSVar4;
  int iVar5;
  AnonShape_004AB810_8E5693D5 *pAVar5;
  STT3DSprC *this_00;
  int iVar6;
  uint uVar7;
  int iVar9;
  int iVar8;
  bool bVar10;
  char *text;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  STGenBombC *local_10;
  int local_c;
  undefined4 local_8;

  local_8 = 0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  pSVar4 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\nick\\to_GnBom.cpp",0x54b,0,iVar5,"%s",
                               "STGenBombC::LoadImagSpr()");
    if (iVar8 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\nick\\to_GnBom.cpp",0x54d);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_10->field_0252 == nullptr) {
    pAVar5 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
    if (pAVar5 == nullptr) {
      this_00 = nullptr;
    }
    else {
      this_00 = (STT3DSprC *)thunk_FUN_004ab810(pAVar5);
    }
    pSVar4->field_0252 = this_00;
    if (this_00 == nullptr) {
      return 0xffffffff;
    }
    iVar6 = STT3DSprC::Init(this_00,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (iVar6 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_GnBom.cpp",0x509);
      return 0xffff;
    }
  }
  if (param_1 == 0) {
    if (param_2 != 0) goto LAB_0061364b;
    iVar6 = STT3DSprC::LoadSequence(pSVar4->field_0252,0xd,PTR_00806774,"exptem",CASE_1D);
    if (iVar6 != 0) {
      return 0xffff;
    }
    iVar6 = STT3DSprC::LoadSequence(pSVar4->field_0252,0xf,PTR_00806764,"bulb_n5",CASE_1D);
    if (iVar6 != 0) {
      return 0xffff;
    }
    iVar6 = STT3DSprC::LoadSequence(pSVar4->field_0252,0xe,PTR_00806774,"expmask2",CASE_1D);
    if (iVar6 != 0) {
      return 0xffff;
    }
    STT3DSprC::StartShow(pSVar4->field_0252,0xe,g_playSystem_00802A38->field_00E4);
    uVar13 = 0x53;
    uVar11 = 0x5a;
    iVar6 = 1;
    pSVar4->field_0251 = 1;
    uVar7 = thunk_FUN_004ad650(pSVar4->field_0252);
    Library::Ourlib::ST3DSMAP::SprSetLevBeforeLand
              (g_sT3DSMAPContext_00807598,uVar7,iVar6,uVar11,uVar13);
    thunk_FUN_004ac700(pSVar4->field_0252,'\x0f');
    STT3DSprC::StartShow(pSVar4->field_0252,0xd,g_playSystem_00802A38->field_00E4);
    iVar6 = (int)PTR_00806724->field_002C;
    uVar12 = 0;
    uVar7 = thunk_FUN_004ad650(pSVar4->field_0252);
    Library::Ourlib::ST3DSMAP::SprSetMask(g_sT3DSMAPContext_00807598,uVar7,uVar12,iVar6);
    pSVar4->field_0250 = 1;
    STT3DSprC::sub_004ACF20(pSVar4->field_0252,PTR_008032b8,0x10);
    pSVar4->field_0237 = 0;
    STT3DSprC::SetCurFase(pSVar4->field_0252,'\r',0);
    STT3DSprC::ShowCurFase(pSVar4->field_0252,'\r');
    STT3DSprC::sub_004ACFE0(pSVar4->field_0252,'\x0e');
    STT3DSprC::sub_004AD3C0
              (pSVar4->field_0252,(float)pSVar4->field_022B * _DAT_007904f8 * _DAT_007904f0,
               (float)pSVar4->field_022F * _DAT_007904f8 * _DAT_007904f0,
               (float)pSVar4->field_0233 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  }
  else {
    iVar6 = pSVar4->field_01F7;
    if (iVar6 == 0) {
      iVar6 = STT3DSprC::LoadSequence
                        (pSVar4->field_0252,0xd,PTR_00806774,"den_bmb",CASE_1D);
      if (iVar6 != 0) {
        return 0xffff;
      }
    }
    else {
      if (iVar6 == 1) {
        text = "ionbomb";
      }
      else {
        if (iVar6 != 2) goto LAB_00613424;
        text = "den_bmb";
      }
      iVar6 = STT3DSprC::LoadSequence(pSVar4->field_0252,0xd,PTR_00806774,text,CASE_1D);
      if (iVar6 != 0) {
        return 0xffff;
      }
    }
LAB_00613424:
    STT3DSprC::SetCurFase(pSVar4->field_0252,'\r',pSVar4->field_0237);
    STT3DSprC::sub_004AD3C0
              (pSVar4->field_0252,(float)pSVar4->field_022B * _DAT_007904f8 * _DAT_007904f0,
               (float)pSVar4->field_022F * _DAT_007904f8 * _DAT_007904f0,
               (float)pSVar4->field_0233 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    STT3DSprC::StartShow(pSVar4->field_0252,0xd,g_playSystem_00802A38->field_00E4);
    pSVar4->field_0250 = 1;
  }
  local_8 = 1;
LAB_0061364b:
  pVVar3 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 == nullptr) {
    g_currentExceptionFrame = local_5c.previous;
    return local_8;
  }
  iVar6 = pSVar4->field_0233;
  sVar2 = (short)(iVar6 >> 0x1f);
  if (iVar6 < 0) {
    local_c = (short)(((short)(iVar6 / 200) + sVar2) - (short)((longlong)iVar6 * 0x51eb851f >> 0x3f)
                     ) + -1;
  }
  else {
    local_c = (int)(short)(((short)(iVar6 / 200) + sVar2) -
                          (short)((longlong)iVar6 * 0x51eb851f >> 0x3f));
  }
  iVar6 = pSVar4->field_022F;
  sVar2 = (short)(iVar6 >> 0x1f);
  if (iVar6 < 0) {
    iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar2) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar2) -
                        (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
  }
  iVar9 = pSVar4->field_022B;
  sVar2 = (short)(iVar9 >> 0x1f);
  if (iVar9 < 0) {
    iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar2) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar2) -
                        (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
  }
  if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
      (VisibleClassTy::sub_00558C00
                 (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar6,&local_14,
                  &local_18), local_c < 0)) || (4 < local_c)) {
    bVar10 = true;
  }
  else {
    if (((local_14 < 0) || ((int)pVVar3->field_0030 <= local_14)) ||
       ((g_centeredOffsets5[local_c] + local_18 < 0 ||
        (pVVar3->field_0034 <= g_centeredOffsets5[local_c] + local_18)))) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if ((bVar10) && (pVVar3->field_004C != nullptr)) {
      bVar10 = pVVar3->field_004C
               [local_14 + (g_centeredOffsets5[local_c] + local_18) * pVVar3->field_0030] != 0;
    }
    else {
      bVar10 = true;
    }
  }
  if (bVar10) {
    if (pSVar4->field_0250 == '\0') {
      thunk_FUN_004ad460(pSVar4->field_0252,0);
      pSVar4->field_0250 = 1;
      g_currentExceptionFrame = local_5c.previous;
      return local_8;
    }
  }
  else if (pSVar4->field_0250 != '\0') {
    thunk_FUN_004ad430(pSVar4->field_0252);
    pSVar4->field_0250 = 0;
  }
  g_currentExceptionFrame = local_5c.previous;
  return local_8;
}

