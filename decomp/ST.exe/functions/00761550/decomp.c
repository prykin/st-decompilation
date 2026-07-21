
void FUN_00761550(int *param_1,int param_2,int param_3,int *param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int local_4c [16];
  int local_c;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8 = *(int *)((int)param_1 + 0x132) + 0x80;
  piVar4 = (int *)(param_3 + 0x60);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar6 = (int *)(*(int *)(param_2 + 0x50) + 0x60);
  param_2 = 8;
  piVar7 = local_4c;
  do {
    if (((param_2 != 6) && (param_2 != 4)) && (param_2 != 2)) {
      if (((piVar4[0x20] == 0 && piVar4[0x10] == 0) && piVar4[-0x10] == 0) && *piVar4 == 0) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar2 = *(int *)((param_3 - (int)local_4c) + (int)piVar7) * piVar6[-0x18] * 4;
        *piVar7 = iVar2;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar2 = *(int *)((param_3 - (int)local_4c) + (int)piVar7) * piVar6[-0x18] * 0x8000;
        local_c = piVar6[0x10] * piVar4[0x10] * 0x1b37;
        iVar5 = local_c + piVar6[0x20] * piVar4[0x20] * -0x1712 +
                piVar6[-0x10] * piVar4[-0x10] * 0x73fc + *piVar6 * *piVar4 * -0x28ba;
        *piVar7 = iVar5 + 0x1000 + iVar2 >> 0xd;
        iVar2 = (iVar2 - iVar5) + 0x1000 >> 0xd;
      }
      piVar7[8] = iVar2;
    }
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
    param_2 = param_2 + -1;
  } while (0 < param_2);
  piVar4 = local_4c;
  param_1 = param_4;
  param_3 = 2;
  do {
    puVar3 = (undefined1 *)(param_5 + *param_1);
    if (((piVar4[1] == 0 && piVar4[3] == 0) && piVar4[5] == 0) && piVar4[7] == 0) {
      uVar1 = *(undefined1 *)((*piVar4 + 0x10 >> 5 & 0x3ffU) + local_8);
      *puVar3 = uVar1;
      puVar3[1] = uVar1;
    }
    else {
      iVar5 = *piVar4;
      iVar2 = piVar4[5] * 0x1b37 + piVar4[3] * -0x28ba + piVar4[7] * -0x1712 + piVar4[1] * 0x73fc;
      *puVar3 = *(undefined1 *)((iVar2 + 0x80000 + iVar5 * 0x8000 >> 0x14 & 0x3ffU) + local_8);
      puVar3[1] = *(undefined1 *)(((iVar5 * 0x8000 - iVar2) + 0x80000 >> 0x14 & 0x3ffU) + local_8);
    }
    piVar4 = piVar4 + 8;
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}

