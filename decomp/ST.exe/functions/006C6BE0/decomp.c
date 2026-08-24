#include "../../pseudocode_runtime.h"


uint FUN_006c6be0(AnonShape_006C6BE0_5C8BBC13 *param_1)

{
  AnonShape_006C6BE0_5C8BBC13 *pAVar1;
  AnonShape_006C6BE0_5C8BBC13 *pAVar2;
  uint uVar4;
  uint uVar3;
  int iVar5;
  bool bVar6;

  pAVar2 = param_1;
  param_1->field_005E = 0;
  param_1->field_005F = 0;
  /* ST_CALLSITE[006C6BF8]: CALL dword ptr [ESI + 0x42] */
  uVar4 = (*STField<code *>(param_1,0x42))(param_1,(int)&param_1 + 3,1);
  pAVar1 = param_1;
  do {
    if (uVar4 != 1) {
      if (uVar4 == 0) {
        return 0xffffffff;
      }
      if ((int)uVar4 < 0) {
        return uVar4;
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
      bVar6 = STPiece<3,1>(param_1) == ';';
      if (bVar6) {
        uVar4 = *(uint *)&pAVar2->field_0x56;
        if ((uVar4 & 2) != 0) {
          iVar5 = *(int *)&pAVar2->field_0x5a + -1;
          *(uint *)&pAVar2->field_0x56 = uVar4 | 1;
          *(int *)&pAVar2->field_0x5a = iVar5;
          if (iVar5 == 0) {
            *(uint *)&pAVar2->field_0x56 = STReplaceLowByte((uint32_t)(uVar4), (uint8_t)((char)(uVar4 | 1))) | 8;
            return 0xffffffff;
          }
          if (iVar5 < 1) {
            *(undefined4 *)&pAVar2->field_0x5a = 0;
          }
        }
        return 0xffffffff;
      }
    }
    /* ST_CALLSITE[006C6C22]: CALL dword ptr [ESI + 0x42] */
    uVar4 = (*STField<code *>(pAVar2,0x42))(pAVar2,(int)&param_1 + 3,1);
    pAVar1 = param_1;
  } while( true );
}

