#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_00419a90(STFishC *param_1)

{
  char cVar1;
  STFishC *pSVar2;
  int iVar3;
  short local_a;
  short local_8;
  short local_6;

  if (param_1->field_00E8 == 1) {
    param_1->field_00E8 = 0;
    /* ST_CALLSITE[00419AAC]: CALL 0x00405952; direct=00405952 sub_004167A0 */
    sub_004167A0(param_1);
    return 1;
  }
  /* ST_CALLSITE[00419AC9]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
  STFishC::sub_004162B0(param_1,&local_6,&local_8,&local_a);
  cVar1 = thunk_FUN_00416330((RecoveredRecord_00416330_34920DE3 *)param_1);
  if (cVar1 == '\0') {
    cVar1 = thunk_FUN_00416350((RecoveredRecord_00416350_3493D299 *)param_1);
    if (cVar1 == '\0') {
      if ((((local_6 < 0) || (g_worldGrid.sizeX <= local_6)) || (local_8 < 0)) ||
         (((g_worldGrid.sizeY <= local_8 || (local_a < 0)) || (g_worldGrid.sizeZ <= local_a)))) {
        pSVar2 = nullptr;
      }
      else {
        pSVar2 = (STFishC *)
                 STGridAt3D(g_worldGrid, local_6, local_8, local_a).objects
                 [(byte)param_1->field_008E];
      }
      if (pSVar2 == param_1) {
        /* ST_CALLSITE[00419B64]: CALL 0x00405952; direct=00405952 sub_004167A0 */
        sub_004167A0(param_1);
        return 1;
      }
    }
  }

  iVar3 = thunk_FUN_00416400((STJellyGunC *)param_1);
  if (iVar3 == -1) {
    return 0xffffffff;
  }
  if (iVar3 == 2) {
    thunk_FUN_004168b0((RecoveredRecord_004168B0_1FFF2915 *)param_1);
  }
  return 0;
}

