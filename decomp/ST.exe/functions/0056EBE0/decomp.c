#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x0056ed8b) */
/* [STMethodOwnerApplier] Structural method owner recovered as STAppC.
   Evidence: this_call_owners=[STAppC]; agreed_this_calls=1; incoming_this_accesses=16;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall STAppC::sub_0056EBE0(STAppC *this)

{
  char cVar1;
  uint *puVar2;
  DArrayTy *pDVar3;
  DArrayTy *array;
  DArrayTy *array_00;
  DArrayTy *pDVar4;
  uint uVar5;
  uint uVar8;
  char *pcVar9;
  char *pcVar11;
  char *pcVar12;
  int local_8;

  if ((DArrayTy *)this->field_4EAB != nullptr) {
    FUN_006b5570((DArrayTy *)this->field_4EAB);
  }
  if ((DArrayTy *)this->field_4EA7 != nullptr) {
    FUN_006b5570((DArrayTy *)this->field_4EA7);
  }
  if ((this->field_4EE6[3] == 0) || (uVar8 = this->field_4EE6[7], uVar8 == 0)) {
    this->field_233C = 1;
    memset(&this->field_0x2340, 0, 0x20); /* compiler bulk-zero initialization */
  }
  else {
    this->field_233C = *(uint *)(uVar8 + 0x90);
    uVar5 = 0xffffffff;
    pcVar9 = (char *)(uVar8 + 0x4c);
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = &this->field_0x2340;
    memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    puVar2 = Library::Ourlib::MFSARR::mfSarLoad(g_cMf32_0080675C,(char *)(uVar8 + 0x70),0);
    this->field_4EAB = puVar2;
  }
  puVar2 = Library::Ourlib::MFSARR::mfSarLoad(g_cMf32_0080675C,PTR_s_DESCRIPTION_0079b074,0);
  this->field_4EA7 = puVar2;
  if (puVar2 == nullptr) {
    pDVar3 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    this->field_4EA7 = &pDVar3->flags;
  }
  if (this->field_4EAB == nullptr) {
    pDVar3 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    this->field_4EAB = &pDVar3->flags;
  }
  /* ST_CALLSITE[0056ECE7]: CALL 0x00403f44; direct=00403F44 CreateOpponentList */
  pDVar3 = (DArrayTy *)CreateOpponentList(g_cMf32_0080675C,1,this->field_233C);
  /* ST_CALLSITE[0056ECFF]: CALL 0x00403f44; direct=00403F44 CreateOpponentList */
  array = (DArrayTy *)CreateOpponentList(g_cMf32_0080675C,2,this->field_233C);
  /* ST_CALLSITE[0056ED16]: CALL 0x00403f44; direct=00403F44 CreateOpponentList */
  array_00 = (DArrayTy *)CreateOpponentList(g_cMf32_0080675C,3,this->field_233C);
  pcVar9 = &this->field_11A7;
  local_8 = 8;
  do {
    uVar8 = 0xffffffff;
    pcVar11 = &CHAR_00h_008016a0;
    do {
      pcVar12 = pcVar11;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar11 = pcVar12 + -uVar8;
    pcVar12 = pcVar9 + 1;
    memmove(pcVar12, pcVar11, uVar8); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    if ((pcVar9[0x22] != -1) && (*pcVar9 == '\x01')) {
      pDVar4 = pDVar3;
      if ((pcVar9[0x21] != '\x01') && (pDVar4 = array, pcVar9[0x21] != '\x02')) {
        pDVar4 = array_00;
      }
      if ((pDVar4 == nullptr) || (pDVar4->count == 0)) {
        pcVar11 = &CHAR_00h_008016a0;
      }
      else {
        pcVar11 = (char *)((int)pDVar4->data + 0x4c);
      }
      uVar8 = 0xffffffff;
      do {
        pcVar12 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar11 = pcVar12 + -uVar8;
      pcVar12 = pcVar9 + 1;
      memmove(pcVar12, pcVar11, uVar8); /* compiler REP MOVS byte copy */
    }
    pcVar9 = pcVar9 + 0x51;
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      if (pDVar3 != nullptr) {
        DArrayDestroy(pDVar3);
      }
      if (array != nullptr) {
        DArrayDestroy(array);
      }
      if (array_00 != nullptr) {
        DArrayDestroy(array_00);
      }
      return;
    }
  } while( true );
}

