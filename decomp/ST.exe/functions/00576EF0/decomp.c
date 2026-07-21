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
  AnonShape_GLOBAL_00807598_0C6808FB *pAVar6;
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
    DAT_00806750 = LoadLand(g_cMf32_00806754,s_3D_MAP_007ca1e4);
    pAVar5 = (AnonShape_006DBCA0_EF06575F *)FUN_006b04d0(0x4f2);
    if (pAVar5 == (AnonShape_006DBCA0_EF06575F *)0x0) {
      pAVar6 = (AnonShape_GLOBAL_00807598_0C6808FB *)0x0;
    }
    else {
      pAVar6 = (AnonShape_GLOBAL_00807598_0C6808FB *)FUN_006dbca0(pAVar5);
    }
    psVar2 = DAT_00806750;
    PTR_00807598 = pAVar6;
    *(short **)&pAVar6->field_0x280 = DAT_00806750;
    iVar4 = (int)*psVar2 / 2;
    *(int *)&pAVar6->field_0x284 = iVar4;
    *(int *)&pAVar6->field_0x288 = iVar4 * iVar4;
    SystemClassTy::InitSystem((SystemClassTy *)local_8);
    FUN_006e8580(PTR_00807598,DAT_008075a8);
    DAT_00806724 = Library::Ourlib::MFIMG::mfImtLoad
                             (PTR_00806770,s_scmask_007cac10,0,0,(undefined4 *)0x0,1);
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
  iVar8 = ReportDebugMessage(s_E____titans_tsystem_cpp_007cab5c,0x86,0,iVar4,&DAT_007a4ccc,
                             s_GameSystemC__InitSystem_007cabf4);
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,s_E____titans_tsystem_cpp_007cab5c,0x86);
  return 0xfffffffc;
}

