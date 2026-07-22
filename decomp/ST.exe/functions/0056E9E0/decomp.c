#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STAppC.
   Evidence: this_call_owners=[STAppC]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STAppC::sub_0056E9E0(STAppC *this,int param_1)

{
  byte bVar1;
  STAppC *pSVar2;
  int iVar3;
  cMf32 *pcVar4;
  uint *puVar5;
  DArrayTy *pDVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar12;
  byte *pbVar13;
  byte local_160 [260];
  InternalExceptionFrame local_5c;
  STAppC *local_18;
  char *local_14;
  undefined4 local_10;
  byte *local_c;
  cMf32 *local_8;

  local_10 = 1;
  if (param_1 != 0) {
    this->field_1163 = 1;
    this->field_7D0E = 1;
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  pSVar2 = local_18;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  }
  local_c = &local_18->field_0x76f6;
  pcVar4 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,local_c,0,0,0);
  local_8 = pcVar4;
  if ((DArrayTy *)pSVar2->field_4EA7 != (DArrayTy *)0x0) {
    FUN_006b5570((DArrayTy *)pSVar2->field_4EA7);
  }
  puVar5 = Library::Ourlib::MFSARR::mfSarLoad(pcVar4,PTR_s_DESCRIPTION_0079b074,0);
  pSVar2->field_4EA7 = puVar5;
  if (puVar5 == (uint *)0x0) {
    pDVar6 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    pSVar2->field_4EA7 = &pDVar6->flags;
  }
  if ((DArrayTy *)pSVar2->field_4EAB != (DArrayTy *)0x0) {
    FUN_006b5570((DArrayTy *)pSVar2->field_4EAB);
  }
  puVar5 = Library::Ourlib::MFSARR::mfSarLoad(pcVar4,PTR_s_OBJECTIVES_0079b078,0);
  pSVar2->field_4EAB = puVar5;
  if (puVar5 == (uint *)0x0) {
    pDVar6 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    pSVar2->field_4EAB = &pDVar6->flags;
  }
  pbVar13 = &pSVar2->field_4DA3;
  memset((void *)pbVar13, 0, 0x104); /* compiler bulk-zero initialization */
  local_14 = (char *)pbVar13;
  puVar7 = cMf32::RecGet(local_8,0xc,PTR_s_TITLE_MISSION_0079b070,(int *)&local_14,0);
  if ((puVar7 == (ushort *)0x0) || (*pbVar13 == '\0')) {
    Library::MSVCRT::FUN_0072e730(local_c,(byte *)0x0,(byte *)0x0,local_160,(byte *)0x0);
    uVar8 = 0xffffffff;
    pbVar10 = local_160;
    do {
      pbVar12 = pbVar10;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pbVar12 = pbVar10 + 1;
      bVar1 = *pbVar10;
      pbVar10 = pbVar12;
    } while (bVar1 != 0);
    uVar8 = ~uVar8;
    pbVar10 = pbVar12 + -uVar8;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pbVar13 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar13 = pbVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar13 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar13 = pbVar13 + 1;
    }
  }
  cMf32::delete(local_8,local_8);
  g_currentExceptionFrame = local_5c.previous;
  return local_10;
}

