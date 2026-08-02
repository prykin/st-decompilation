#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   GameSystemC::InitSystem */

undefined4 __thiscall GameSystemC::InitSystem(GameSystemC *this)

{
  code *pcVar1;
  short *psVar2;
  GameSystemC *pGVar3;
  int iVar4;
  AnonShape_006DBCA0_EF06575F *pAVar5;
  ST3DSMAPContext *pSVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  InternalExceptionFrame local_90;
  InternalExceptionFrame local_4c;
  GameSystemC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar4 == 0) {
    DAT_00806750 = LoadLand(g_cMf32_00806754,"3D_MAP");
    pAVar5 = (AnonShape_006DBCA0_EF06575F *)FUN_006b04d0(0x4f2);
    if (pAVar5 == nullptr) {
      pSVar6 = nullptr;
    }
    else {
      pSVar6 = (ST3DSMAPContext *)FUN_006dbca0(pAVar5);
    }
    psVar2 = DAT_00806750;
    g_sT3DSMAPContext_00807598 = pSVar6;
    *(short **)&pSVar6->field_0x280 = DAT_00806750;
    iVar4 = (int)*psVar2 / 2;
    *(int *)&pSVar6->field_0x284 = iVar4;
    *(int *)&pSVar6->field_0x288 = iVar4 * iVar4;
    SystemClassTy::InitSystem((SystemClassTy *)local_8);
    ST3DSMAPContext::sub_006E8580(g_sT3DSMAPContext_00807598,(int *)g_ddxContext_008075A8);
    PTR_00806724 = (AnonShape_GLOBAL_00806724_3210464F *)
                   Library::Ourlib::MFIMG::mfImtLoad
                             (PTR_00806770,"scmask",0,0,nullptr,1);
    local_90.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_90;
    iVar4 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0);
    pGVar3 = local_8;
    if (iVar4 == 0) {
      puVar7 = Library::Ourlib::MFPLA::mfPlaPtrTy(g_cMf32_00806760,PTR_s_ANIM_PALETTE_0079b1a8,0);
      pGVar3->field_0431 = puVar7;
    }
    pGVar3->field_042C = DAT_00808784;
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar8 = ReportDebugMessage("E:\\__titans\\tsystem.cpp",0x86,0,iVar4,"%s",
                             "GameSystemC::InitSystem");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\tsystem.cpp",0x86);
  return 0xfffffffc;
}

