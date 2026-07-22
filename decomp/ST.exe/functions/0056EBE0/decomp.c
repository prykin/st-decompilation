#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x0056ed8b) */
/* [STMethodOwnerApplier] Structural method owner recovered as STAppC.
   Evidence: this_call_owners=[STAppC]; agreed_this_calls=1; incoming_this_accesses=16;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STAppC::sub_0056EBE0(STAppC *this)

{
  char cVar1;
  uint *puVar2;
  DArrayTy *pDVar3;
  DArrayTy *array;
  DArrayTy *array_00;
  DArrayTy *pDVar4;
  uint uVar5;
  uint uVar6;
  uint uVar8;
  char *pcVar9;
  char *pcVar11;
  char *pcVar12;
  int local_8;

  if ((DArrayTy *)this->field_4EAB != (DArrayTy *)0x0) {
    FUN_006b5570((DArrayTy *)this->field_4EAB);
  }
  if ((DArrayTy *)this->field_4EA7 != (DArrayTy *)0x0) {
    FUN_006b5570((DArrayTy *)this->field_4EA7);
  }
  if ((this->field_4EE6[3] == 0) || (uVar8 = this->field_4EE6[7], uVar8 == 0)) {
    this->field_233C = 1;
    memset(&this->field_0x2340, 0, 0x20); /* compiler bulk-zero initialization */
  }
  else {
    this->field_233C = *(undefined4 *)(uVar8 + 0x90);
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
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    puVar2 = Library::Ourlib::MFSARR::mfSarLoad(g_cMf32_0080675C,(char *)(uVar8 + 0x70),0);
    this->field_4EAB = puVar2;
  }
  puVar2 = Library::Ourlib::MFSARR::mfSarLoad(g_cMf32_0080675C,PTR_s_DESCRIPTION_0079b074,0);
  this->field_4EA7 = puVar2;
  if (puVar2 == (uint *)0x0) {
    pDVar3 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    this->field_4EA7 = &pDVar3->flags;
  }
  if (this->field_4EAB == (uint *)0x0) {
    pDVar3 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    this->field_4EAB = &pDVar3->flags;
  }
  pDVar3 = (DArrayTy *)CreateOpponentList(g_cMf32_0080675C,1,this->field_233C);
  array = (DArrayTy *)CreateOpponentList(g_cMf32_0080675C,2,this->field_233C);
  array_00 = (DArrayTy *)CreateOpponentList(g_cMf32_0080675C,3,this->field_233C);
  pcVar9 = &this->field_11A7;
  local_8 = 8;
  do {
    uVar8 = 0xffffffff;
    pcVar11 = &DAT_008016a0;
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
    for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    }
    if ((pcVar9[0x22] != -1) && (*pcVar9 == '\x01')) {
      pDVar4 = pDVar3;
      if ((pcVar9[0x21] != '\x01') && (pDVar4 = array, pcVar9[0x21] != '\x02')) {
        pDVar4 = array_00;
      }
      if ((pDVar4 == (DArrayTy *)0x0) || (pDVar4->count == 0)) {
        pcVar11 = &DAT_008016a0;
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
      for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar12 = pcVar12 + 1;
      }
    }
    pcVar9 = pcVar9 + 0x51;
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      if (pDVar3 != (DArrayTy *)0x0) {
        DArrayDestroy(pDVar3);
      }
      if (array != (DArrayTy *)0x0) {
        DArrayDestroy(array);
      }
      if (array_00 != (DArrayTy *)0x0) {
        DArrayDestroy(array_00);
      }
      return;
    }
  } while( true );
}

