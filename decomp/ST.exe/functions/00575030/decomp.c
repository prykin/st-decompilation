#include "../../pseudocode_runtime.h"


void __cdecl FUN_00575030(RecoveredRecord_00575030_3480E3A1 *param_1,int param_2,int param_3)

{
  AnonNested_RecoveredRecord_00575030_3480E3A1_0451_D5C45A4B *pAVar1;
  uint uVar2;
  RecoveredRecord_00575030_3480E3A1 *pRVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  pRVar3 = param_1;
  iVar4 = (int)param_1->field_0002 * (int)*(short *)param_1;
  iVar5 = *(short *)param_1 * param_3;
  iVar4 = STSignedDiv4(iVar4);
  auto param_3_after_write = 6; /* compiler stack-slot lifetime split */
  param_1 = (RecoveredRecord_00575030_3480E3A1 *)
            (&param_1[1].field_0x4 + (iVar4 * 5 + param_2 + iVar5 / 2) * 4);
  do {
    iVar5 = *(int *)param_1;
    if ((iVar5 != 0) && (STField<int>(iVar5,0xC) != 0)) {
      pRVar3->field_0451->field_0004 = 0;
      do {
        pAVar1 = pRVar3->field_0451;
        uVar2 = pAVar1->field_0004;
        if ((uint)pAVar1->field_000C <= uVar2) goto LAB_005750c2;
        iVar6 = *(int *)&pAVar1->field_0x8 * uVar2 + pAVar1[1].field_000C;
        pAVar1->field_0004 = uVar2 + 1;
        if (iVar6 == 0) goto LAB_005750c2;
      } while (STField<int>(iVar5,0xC) != STField<int>(iVar6,0x8));
      if (iVar6 == 0) {
LAB_005750c2:
        FreeAndNull((int *)(iVar5 + 0xc));
      }
    }
    param_1 = (RecoveredRecord_00575030_3480E3A1 *)((int)param_1 + iVar4 * -4);
    param_3_after_write = param_3_after_write + -1;
    if (param_3_after_write == 0) {
      return;
    }
  } while( true );
}

