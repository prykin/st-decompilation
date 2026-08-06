#include "../../pseudocode_runtime.h"


uint FUN_006c6be0(AnonShape_006C6BE0_5C8BBC13 *param_1)

{
  AnonShape_006C6BE0_5C8BBC13 *pAVar1;
  AnonShape_006C6BE0_5C8BBC13 *pAVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;

  pAVar2 = param_1;
  param_1->field_005E = 0;
  param_1->field_005F = 0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar3 = (*(code *)param_1->field_0042)(param_1,(int)&param_1 + 3,1);
  pAVar1 = param_1;
  do {
    if (uVar3 != 1) {
      if (uVar3 == 0) {
        return 0xffffffff;
      }
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      return 0xfffffffb;
    }
    STPiece<3,1>(param_1) = (char)((uint)pAVar1 >> 0x18);
    param_1 = pAVar1;
    if (STPiece<3,1>(param_1) == '!') {
      uVar3 = FUN_006c6c80((int)pAVar2);
      if (uVar3 != 0) {
        return uVar3;
      }
    }
    else {
      if (STPiece<3,1>(param_1) == ',') {
        return 0;
      }
      bVar5 = STPiece<3,1>(param_1) == ';';
      if (bVar5) {
        uVar3 = *(uint *)&pAVar2->field_0x56;
        if ((uVar3 & 2) != 0) {
          iVar4 = *(int *)&pAVar2->field_0x5a + -1;
          *(uint *)&pAVar2->field_0x56 = uVar3 | 1;
          *(int *)&pAVar2->field_0x5a = iVar4;
          if (iVar4 == 0) {
            *(uint *)&pAVar2->field_0x56 = STReplaceLowByte((uint32_t)(uVar3), (uint8_t)((char)(uVar3 | 1))) | 8;
            return 0xffffffff;
          }
          if (iVar4 < 1) {
            *(undefined4 *)&pAVar2->field_0x5a = 0;
          }
        }
        return 0xffffffff;
      }
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar3 = (*(code *)pAVar2->field_0042)(pAVar2,(int)&param_1 + 3,1);
    pAVar1 = param_1;
  } while( true );
}

