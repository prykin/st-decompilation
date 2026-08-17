#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Expl.cpp
   STExplosionC::LoadImagSpr */

undefined4 __thiscall
STExplosionC::LoadImagSpr(STExplosionC *this,undefined4 param_1,undefined4 param_2,char param_3)

{
  short sVar2;
  VisibleClassTy *pVVar3;
  STExplosionC *pSVar4;
  int iVar5;
  int iVar6;
  STT3DSprC *pSVar7;
  int iVar9;
  int iVar8;
  undefined4 uVar10;
  bool bVar11;
  InternalExceptionFrame local_68;
  undefined4 local_24;
  int local_20;
  int local_1c;
  STExplosionC *local_18;
  int local_14;
  char *local_10;
  int local_c;
  char *local_8;

  local_c = this->field_01E9;
  local_10 = (&PTR_s_expl_bm0_007ced98)[local_c];
  local_8 = (&PTR_s_expl_bt0_007ced70)[local_c];
  local_24 = 0;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_18 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  pSVar4 = local_18;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\nick\\to_Expl.cpp",0x38c,0,iVar5,"%s",
                               "STExplosionC::LoadImagSpr");
    if (iVar8 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\nick\\to_Expl.cpp",0x38e);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_3 != '\0') && (local_18->field_02AF != nullptr)) {
    local_8 = (&PTR_s_expl_bbt0_007cedc0)[local_c];
    /* ST_CALLSITE[00605243]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar6 = STT3DSprC::LoadSequence(local_18->field_02AF,0xf,PTR_00806774,local_8,CASE_1D);
    if (iVar6 != 0) {
      return 0xffff;
    }
    /* ST_CALLSITE[0060525F]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase(pSVar4->field_02AF,'\x0f',pSVar4->field_029F);
    thunk_FUN_004ac610(pSVar4->field_02AF,'\x0f');
    /* ST_CALLSITE[00605286]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow(pSVar4->field_02AF,0xf,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[00605293]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    iVar6 = STT3DSprC::sub_004ACD30(pSVar4->field_02AF,'\x0f');
    pSVar4->field_02A3 = iVar6;
    g_currentExceptionFrame = local_68.previous;
    return local_24;
  }
  if (local_18->field_02AF == nullptr) {
    pSVar7 = (STT3DSprC *)Library::MSVCRT::FUN_0072e530(0x40);
    if (pSVar7 == nullptr) {
      pSVar7 = nullptr;
    }
    else {
      /* ST_CALLSITE[006052CC]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
      pSVar7 = STT3DSprC::STT3DSprC(pSVar7);
    }
    pSVar4->field_02AF = pSVar7;
  }
  if ((&DAT_007cede8)[local_c] == '\0') {
    /* ST_CALLSITE[00605307]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
    iVar6 = STT3DSprC::Init(pSVar4->field_02AF,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,
                            0x11);
    if (iVar6 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_Expl.cpp",0x36a);
      return 0xffff;
    }
  }
  else {
    /* ST_CALLSITE[00605356]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
    iVar6 = STT3DSprC::Init(pSVar4->field_02AF,PTR_008073cc,0x78,0x56,nullptr,0xf0,0xbe,
                            0x11);
    if (iVar6 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_Expl.cpp",0x370);
      return 0xffff;
    }
    Library::Ourlib::ST3DSMAP::SprSetSplit
              (g_sT3DSMAPContext_00807598,pSVar4->field_02AF->field_0018);
  }
  /* ST_CALLSITE[006053BA]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  iVar6 = STT3DSprC::LoadSequence(pSVar4->field_02AF,0xd,PTR_00806774,local_8,CASE_1D);
  if (iVar6 == 0) {
    /* ST_CALLSITE[006053DC]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar6 = STT3DSprC::LoadSequence(pSVar4->field_02AF,0xe,PTR_00806774,local_10,CASE_1D);
    if (iVar6 != 0) {
      return 0xffff;
    }
    /* ST_CALLSITE[006053F8]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase(pSVar4->field_02AF,'\r',pSVar4->field_0296);
    /* ST_CALLSITE[0060544B]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
    STT3DSprC::sub_004AD3C0
              (pSVar4->field_02AF,(float)pSVar4->field_028A * _DAT_007904f8 * _DAT_007904f0,
               (float)pSVar4->field_028E * _DAT_007904f8 * _DAT_007904f0,
               (float)pSVar4->field_0292 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    thunk_FUN_004ac610(pSVar4->field_02AF,'\r');
    /* ST_CALLSITE[00605471]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow(pSVar4->field_02AF,0xd,g_playSystem_00802A38->field_00E4);
    pSVar4->field_0286 = 1;
    pVVar3 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 != nullptr) {
      iVar6 = pSVar4->field_0292;
      local_14 = STBiasedDiv16(iVar6, 200); /* exact signed 16-bit grid-index division */
      iVar6 = pSVar4->field_028E;
      iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
      iVar9 = pSVar4->field_028A;
      iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
      if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          /* ST_CALLSITE[0060554E]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
          (VisibleClassTy::sub_00558C00
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar6,
                      &local_1c,&local_20), local_14 < 0)) || (4 < local_14)) {
        bVar11 = true;
      }
      else {
        if (((local_1c < 0) || ((int)pVVar3->field_0030 <= local_1c)) ||
           ((g_centeredOffsets5[local_14] + local_20 < 0 ||
            (pVVar3->field_0034 <= g_centeredOffsets5[local_14] + local_20)))) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if ((bVar11) && (pVVar3->field_004C != nullptr)) {
          bVar11 = pVVar3->field_004C
                   [local_1c + (g_centeredOffsets5[local_14] + local_20) * pVVar3->field_0030] != 0;
        }
        else {
          bVar11 = true;
        }
      }
      if (!bVar11) {
        thunk_FUN_004ad430(pSVar4->field_02AF);
        pSVar4->field_0286 = 0;
      }
      g_currentExceptionFrame = local_68.previous;
      return local_24;
    }
    g_currentExceptionFrame = local_68.previous;
    return local_24;
  }
  return 0xffff;
}

