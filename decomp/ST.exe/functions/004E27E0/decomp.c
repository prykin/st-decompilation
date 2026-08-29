#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004e27e0(TLOBaseTy *param_1)

{
  int iVar1_mg0;
  int iVar1;
  int iVar2;
  TLOBaseTy_field_04D0State *pTVar3;
  STGameObjC *local_8;

  local_8 = (STGameObjC *)param_1;
  if (g_playSystem_00802A38->field_00E4 % 0x4b == 0) {
    pTVar3 = &param_1->field_04D0;
    iVar2 = 2;
    do {
      if (((RecoveredRecordView_005EFAE0_855D930D *)*pTVar3 !=
           nullptr) &&

         ((iVar1_mg0 = STPlaySystemC::sub_006E62D0
                                 (g_playSystem_00802A38,
                                  (RecoveredRecordView_005EFAE0_855D930D *)*pTVar3,(int *)&local_8),
          /* ST_CALLSITE[004E2829]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
          iVar1_mg0 != 0 || (iVar1 = STGameObjC::sub_0045FF10(local_8), iVar1 != 4)))) {
        *pTVar3 = CASE_0;
      }
      pTVar3 = pTVar3 + 10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((((param_1->field_04E0[0x10] != 0) &&

       (iVar2 = thunk_FUN_004ac910(&param_1->field_01D5,'\f'),
       iVar2 == param_1->field_01F5->field_01C4)) && (param_1->field_04D0 == CASE_0)) &&
     (param_1->field_04E0[6] == 0)) {
    param_1->field_04E0[0x10] = 0;
    /* ST_CALLSITE[004E2888]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
    TLOBaseTy::RotateSpr(param_1,0);
  }
  return 0;
}

