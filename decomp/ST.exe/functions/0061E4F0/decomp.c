
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0061e4f0(AnonShape_0061E4F0_131B61D9 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int local_8;

  iVar5 = 0;
  if (0 < param_1->field_0093) {
    do {
      local_8 = 1;
      if (1 < *(int *)(param_1->field_009B + iVar5 * 4)) {
        iVar6 = 0x14;
        do {
          uVar3 = param_1->field_00AC * 0x41c64e6d + 0x3039;
          param_1->field_00AC = uVar3;
          if (((uVar3 >> 0x10) % 5 == 0) &&
             ((iVar5 != 0 || ((iVar6 != 0 && (local_8 != *(int *)param_1->field_009B + -1)))))) {
            uVar3 = param_1->field_00AC * 0x41c64e6d + 0x3039;
            param_1->field_00AC = uVar3;
            pfVar4 = (float *)(*(int *)(param_1->field_009F + iVar5 * 4) + iVar6);
            *pfVar4 = ((float)((uVar3 >> 0x10) % 0xb) * _DAT_0079070c - _DAT_00790784) /
                      (param_1->field_0047 + param_1->field_0047) + *pfVar4;
            uVar3 = param_1->field_00AC * 0x41c64e6d + 0x3039;
            param_1->field_00AC = uVar3;
            pfVar4 = (float *)(*(int *)(param_1->field_009F + iVar5 * 4) + 4 + iVar6);
            *pfVar4 = ((float)((uVar3 >> 0x10) % 0xb) * _DAT_0079070c - _DAT_00790784) /
                      (param_1->field_0047 + param_1->field_0047) + *pfVar4;
            uVar3 = param_1->field_00AC * 0x41c64e6d + 0x3039;
            param_1->field_00AC = uVar3;
            pfVar4 = (float *)(*(int *)(param_1->field_009F + iVar5 * 4) + 8 + iVar6);
            *pfVar4 = ((float)((uVar3 >> 0x10) % 0xb) * _DAT_0079070c - _DAT_00790784) /
                      (param_1->field_0047 + param_1->field_0047) + *pfVar4;
            iVar1 = *(int *)(param_1->field_009F + iVar5 * 4);
            iVar2 = *(int *)(iVar1 + 0x10 + iVar6);
            if (iVar2 != 0) {
              **(undefined4 **)(param_1->field_009F + iVar2 * 4) = *(undefined4 *)(iVar1 + iVar6);
              *(undefined4 *)(*(int *)(param_1->field_009F + iVar2 * 4) + 4) =
                   *(undefined4 *)(*(int *)(param_1->field_009F + iVar5 * 4) + 4 + iVar6);
              *(undefined4 *)(*(int *)(param_1->field_009F + iVar2 * 4) + 8) =
                   *(undefined4 *)(*(int *)(param_1->field_009F + iVar5 * 4) + 8 + iVar6);
            }
          }
          local_8 = local_8 + 1;
          iVar6 = iVar6 + 0x14;
        } while (local_8 < *(int *)(param_1->field_009B + iVar5 * 4));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1->field_0093);
  }
  return;
}

