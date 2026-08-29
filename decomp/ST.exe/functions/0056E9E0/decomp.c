#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STAppC.
   Evidence: this_call_owners=[STAppC]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (5), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00533D10 @ 00534940 -> killed on
   every CFG path | 0056ADC0 @ 0056BC2E -> read as EAX on every CFG path | 0056FA60 @ 0056FE13 ->
   read as EAX on every CFG path | 00593040 @ 005934B8 -> read as EAX on every CFG path | 005B0BA0 @
   005B19CC -> read as EAX on every CFG path | 005C1A90 @ 005C1CD3 -> read as EAX on every CFG path
    */

int __thiscall STAppC::sub_0056E9E0(STAppC *this,int param_1)

{
  byte bVar1;
  STAppC *pSVar2;
  int iVar3;
  cMf32 *pcVar3;
  uint *puVar4;
  DArrayTy *pDVar5;
  ushort *puVar6;
  uint uVar8;
  byte *pbVar10;
  byte *pbVar12;
  byte *pbVar13;
  byte local_160 [260];
  InternalExceptionFrame local_5c;
  STAppC *local_18;
  char *local_14;
  int local_10;
  char *local_c;
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
  local_c = &local_18->field_76F6;

  pcVar3 = STPointerBoundaryCast<cMf32 *>(Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)local_c,0,0,0));
  local_8 = pcVar3;
  if ((DArrayTy *)pSVar2->field_4EA7 != nullptr) {
    FUN_006b5570((DArrayTy *)pSVar2->field_4EA7);
  }
  puVar4 = Library::Ourlib::MFSARR::mfSarLoad(pcVar3,PTR_s_DESCRIPTION_0079b074,0);
  pSVar2->field_4EA7 = puVar4;
  if (puVar4 == nullptr) {
    /* ST_CALLSITE[0056EA86]: CALL 0x006b54f0; direct=006B54F0 Library::DKW::TBL::SArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
    pDVar5 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    pSVar2->field_4EA7 = &pDVar5->flags;
  }
  if ((DArrayTy *)pSVar2->field_4EAB != nullptr) {
    FUN_006b5570((DArrayTy *)pSVar2->field_4EAB);
  }
  puVar4 = Library::Ourlib::MFSARR::mfSarLoad(pcVar3,PTR_s_OBJECTIVES_0079b078,0);
  pSVar2->field_4EAB = puVar4;
  if (puVar4 == nullptr) {
    /* ST_CALLSITE[0056EAC2]: CALL 0x006b54f0; direct=006B54F0 Library::DKW::TBL::SArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
    pDVar5 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    pSVar2->field_4EAB = &pDVar5->flags;
  }
  pbVar13 = &pSVar2->field_4DA3;
  memset((void *)pbVar13, 0, 0x104); /* compiler bulk-zero initialization */
  local_14 = (char *)pbVar13;
  puVar6 = cMf32::RecGet(local_8,0xc,PTR_s_TITLE_MISSION_0079b070,(int *)&local_14,0);
  if ((puVar6 == nullptr) || (*pbVar13 == '\0')) {
    Library::MSVCRT::FUN_0072e730((byte *)local_c,nullptr,nullptr,local_160,nullptr);
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
    memmove(pbVar13, pbVar10, uVar8); /* compiler REP MOVS byte copy */
  }
  cMf32::delete(local_8);
  g_currentExceptionFrame = local_5c.previous;
  return local_10;
}

