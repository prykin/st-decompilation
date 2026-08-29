#include "../../pseudocode_runtime.h"


void __cdecl FUN_00728170(AnonShape_00728170_E57D1DF1 *param_1,AnonShape_00728170_7560EBA7 *param_2)

{
  byte uVar1;
  uint uVar2;
  uint uVar3;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_ECX;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  byte *puVar9;
  uint local_c;

  if ((((int)DAT_008570dc < (int)param_2->field_0024) &&
      ((int)param_1->field_0024 < (int)DAT_0085705c)) &&
     ((int)param_1->field_0024 >> 0x10 < (int)param_2->field_0024 >> 0x10)) {
    local_c = param_1->field_001C;
    iVar4 = param_2->field_001C - local_c;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar4 = (int)(CONCAT44(iVar4 >> 0x10,iVar4 * 0x10000) /
                 (longlong)
                 (int)((param_2->field_0024 & 0xffff0000) - (param_1->field_0024 & 0xffff0000)));
    uVar3 = param_2->field_0024 & 0xffff0000;
    if ((int)DAT_0085705c <= (int)uVar3) {
      uVar3 = DAT_0085705c;
    }
    uVar7 = param_1->field_0024 & 0xffff0000;
    if ((int)uVar7 < (int)DAT_008570dc) {

      uVar2 = FUN_006db5f0(iVar4,DAT_008570dc - uVar7);
      local_c = local_c + uVar2;
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      uVar3 = extraout_ECX;
      uVar7 = DAT_008570dc;
    }
    uVar1 = DAT_008570f8;
    if (uVar3 - uVar7 != 0 && (int)uVar7 <= (int)uVar3) {
      iVar8 = (uVar7 >> 0x10) + DAT_00857090 * DAT_00857098;
      puVar6 = (uint *)(iVar8 * 2 + DAT_0085707c);
      uVar7 = uVar3 - uVar7 >> 0x10;
      puVar9 = (undefined1 *)(iVar8 + DAT_0085708c);
      for (uVar3 = uVar7; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar9 = uVar1;
        puVar9 = puVar9 + 1;
      }
      uVar3 = uVar7;
      if (((uint)puVar6 & 2) != 0) {
        *(short *)puVar6 = (short)(local_c >> 0x10);
        puVar6 = (uint *)((int)puVar6 + 2);
        local_c = local_c + iVar4;
        uVar3 = uVar7 - 1;
        if (uVar3 == 0 || uVar7 == 0) {
          return;
        }
      }
      while (1 < (int)uVar3) {
        uVar5 = local_c + iVar4;
        uVar7 = local_c >> 0x10;
        local_c = uVar5 + iVar4;
        *puVar6 = uVar7 | uVar5 & 0xffff0000;
        puVar6 = puVar6 + 1;
        uVar3 = uVar3 - 2;
      }
      if ((uVar3 - 2 & 1) != 0) {
        *(short *)puVar6 = (short)(local_c >> 0x10);
      }
    }
  }
  return;
}

