#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0060d940(AnonShape_0060D940_4FDF4902 *param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  AnonNested_AnonShape_0060D940_4FDF4902_0244_00248A15 *pAVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  unkbyte10 extraout_ST1;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1_00;
  longlong lVar10;
  int local_c;
  int local_8;

  fVar9 = (float10)_DAT_0079034c;
  pAVar5 = param_1->field_0244;
  if (pAVar5 == nullptr) {
    return 0;
  }
  local_8 = 0;
  fVar3 = _DAT_0079c5a4 / (float)(int)pAVar5->field_000C;
  if (0 < (int)pAVar5->field_000C) {
    do {
      fcos(fVar9 + (float10)fVar3);
      iVar1 = pAVar5->field_0010;
      uVar7 = iVar1 * local_8;
      lVar10 = Library::MSVCRT::__ftol();
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      fsin(extraout_ST1);
      iVar8 = (int)lVar10 + param_1->field_01E9;
      lVar10 = Library::MSVCRT::__ftol();
      iVar4 = (int)lVar10 + param_1->field_01ED;
      local_c = 0;
      if (0 < iVar1) {
        do {
          iVar1 = param_1->field_0234;
          if ((uVar7 < STField<uint>(iVar1,0xC)) &&
             (puVar6 = (undefined4 *)(STField<int>(iVar1,0x8) * uVar7 + STField<int>(iVar1,0x1C)),
             puVar6 != nullptr)) {
            puVar6[6] = iVar8;
            puVar6[7] = iVar4;
            uVar2 = param_1->field_01F1;
            puVar6[3] = iVar8;
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            puVar6[0xb] = (float)extraout_ST1_00;
            puVar6[8] = uVar2;
            puVar6[4] = iVar4;
            puVar6[5] = uVar2;
            puVar6[10] = 0x14;
            puVar6[9] = 0;
            *puVar6 = param_1->field_0211;
          }
          local_c = local_c + 1;
          uVar7 = uVar7 + 1;
        } while (local_c < (int)param_1->field_0244->field_0010);
      }
      pAVar5 = param_1->field_0244;
      local_8 = local_8 + 1;
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      fVar9 = extraout_ST1_00;
    } while (local_8 < (int)pAVar5->field_000C);
  }
  return 1;
}

