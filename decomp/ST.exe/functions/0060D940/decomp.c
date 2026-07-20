
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0060d940(AnonShape_0060D940_4FDF4902 *param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  unkbyte10 extraout_ST1;
  float10 extraout_ST1_00;
  longlong lVar9;
  int local_c;
  int local_8;
  
  fVar8 = (float10)_DAT_0079034c;
  iVar4 = param_1->field_0244;
  if (iVar4 == 0) {
    return 0;
  }
  local_8 = 0;
  fVar2 = _DAT_0079c5a4 / (float)*(int *)(iVar4 + 0xc);
  if (0 < *(int *)(iVar4 + 0xc)) {
    do {
      fcos(fVar8 + (float10)fVar2);
      iVar4 = *(int *)(iVar4 + 0x10);
      uVar6 = iVar4 * local_8;
      lVar9 = Library::MSVCRT::__ftol();
      fsin(extraout_ST1);
      iVar7 = (int)lVar9 + param_1->field_01E9;
      lVar9 = Library::MSVCRT::__ftol();
      iVar3 = (int)lVar9 + param_1->field_01ED;
      local_c = 0;
      if (0 < iVar4) {
        do {
          iVar4 = param_1->field_0234;
          if ((uVar6 < *(uint *)(iVar4 + 0xc)) &&
             (puVar5 = (undefined4 *)(*(int *)(iVar4 + 8) * uVar6 + *(int *)(iVar4 + 0x1c)),
             puVar5 != (undefined4 *)0x0)) {
            puVar5[6] = iVar7;
            puVar5[7] = iVar3;
            uVar1 = param_1->field_01F1;
            puVar5[3] = iVar7;
            puVar5[0xb] = (float)extraout_ST1_00;
            puVar5[8] = uVar1;
            puVar5[4] = iVar3;
            puVar5[5] = uVar1;
            puVar5[10] = 0x14;
            puVar5[9] = 0;
            *puVar5 = param_1->field_0211;
          }
          local_c = local_c + 1;
          uVar6 = uVar6 + 1;
        } while (local_c < *(int *)(param_1->field_0244 + 0x10));
      }
      iVar4 = param_1->field_0244;
      local_8 = local_8 + 1;
      fVar8 = extraout_ST1_00;
    } while (local_8 < *(int *)(iVar4 + 0xc));
  }
  return 1;
}

