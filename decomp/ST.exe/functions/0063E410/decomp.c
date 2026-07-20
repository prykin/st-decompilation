
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0063e410(AnonShape_0063E410_6FBC68F2 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  int local_c;
  uint local_8;
  
  if (param_1->field_0336 != 0) {
    iVar1 = *(int *)(param_1->field_0336 + 0xc);
    iVar4 = param_1->field_02C0;
    if ((iVar4 < 1) || (0x4a < iVar4)) {
      local_c = (iVar4 + 5) % 10;
      local_10 = param_1->field_02BC + local_c;
    }
    else {
      local_c = (iVar4 + -1) * param_1->field_02BC;
      local_10 = param_1->field_02BC + local_c;
    }
    local_8 = 0;
    if (0 < iVar1) {
      do {
        iVar4 = param_1->field_0336;
        if (((local_8 < *(uint *)(iVar4 + 0xc)) &&
            (iVar4 = *(int *)(iVar4 + 8) * local_8 + *(int *)(iVar4 + 0x1c), iVar4 != 0)) &&
           (uVar2 = *(uint *)(iVar4 + 0x38), -1 < (int)uVar2)) {
          if (*(int *)(iVar4 + 4) == 1) {
            if ((local_c <= (int)local_8) && ((int)local_8 < local_10)) {
              *(undefined4 *)(iVar4 + 4) = 0;
              FUN_006ea270(param_1->field_0211,uVar2,0,
                           *(uint *)(&DAT_007d1f98 + *(int *)(iVar4 + 0x20) * 4));
              FUN_006ea960(param_1->field_0211,*(uint *)(iVar4 + 0x38),
                           (float)*(int *)(iVar4 + 8) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(iVar4 + 0xc) * _DAT_007904f8 * _DAT_007904f0,
                           *(float *)(iVar4 + 0x10) + _DAT_007904fc);
              FUN_006eaaa0(param_1->field_0211,*(uint *)(iVar4 + 0x38),0);
            }
          }
          else {
            iVar3 = PTR_00802a38->field_00E4;
            if ((1 < (uint)(iVar3 - *(int *)(iVar4 + 0x30))) || (iVar3 == *(int *)(iVar4 + 0x30))) {
              *(int *)(iVar4 + 0x30) = iVar3;
              iVar3 = *(int *)(iVar4 + 0x24) + -1;
              if (*(int *)(iVar4 + 0x20) < iVar3) {
                *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 1;
              }
              else {
                *(int *)(iVar4 + 0x20) = iVar3;
              }
              FUN_006ea270(param_1->field_0211,uVar2,0,
                           *(uint *)(&DAT_007d1f98 + *(int *)(iVar4 + 0x20) * 4));
              FUN_006ea960(param_1->field_0211,*(uint *)(iVar4 + 0x38),
                           (float)*(int *)(iVar4 + 8) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(iVar4 + 0xc) * _DAT_007904f8 * _DAT_007904f0,
                           *(float *)(iVar4 + 0x10) + _DAT_007904fc);
            }
          }
        }
        local_8 = local_8 + 1;
      } while ((int)local_8 < iVar1);
    }
  }
  return;
}

