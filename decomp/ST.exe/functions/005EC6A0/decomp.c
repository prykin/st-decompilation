#include "../../pseudocode_runtime.h"


void __fastcall FUN_005ec6a0(AnonShape_005EC6A0_C8559927 *param_1)

{
  int iVar1_mg1;
  int iVar1;
  STMessage *pSVar2;
  STMessage local_28;
  int local_8;

  if (g_aiBossClass_008117BC != nullptr) {
    pSVar2 = &local_28;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar2->unknown_00 = 0;
      pSVar2 = (STMessage *)&pSVar2->unknown_04;
    }
    local_28.arg0.words.high = param_1->field_0032;
    local_28.arg1.words.low = param_1->field_032A;
    local_28.id = 0x5ddb;
    if ((AnonShape_005EFAE0_B406B78B *)param_1->field_0354 != nullptr) {
      iVar1_mg1 = STPlaySystemC::sub_006E62D0
                            (g_playSystem_00802A38,
                             (AnonShape_005EFAE0_B406B78B *)param_1->field_0354,&local_8);
      if (iVar1_mg1 != -4) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_28.arg1.words.high = *(word *)(local_8 + 0x32);
      }
    }
    /* ST_CALLSITE[005EC70F]: CALL dword ptr [EAX] */
    g_aiBossClass_008117BC->GetMessage(&local_28);
  }
  return;
}

