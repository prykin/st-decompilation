
undefined4 FUN_004e51b0(int *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int *piVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  undefined **local_1c;
  int local_18;
  uint *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  if (((int)param_1 < 0) || (7 < (int)param_1)) {
    return 0;
  }
  if ((int)param_3 < (int)param_2) {
    param_3 = param_2;
  }
  iVar8 = (int)param_1 * 0xa62;
  local_c = (byte)(&DAT_007f4e20)[iVar8] - 1;
  *(undefined4 *)((int)&DAT_007f510b + iVar8) = 0;
  *(undefined4 *)((int)&DAT_007f510f + iVar8) = 0;
  *(undefined4 *)(&DAT_007f5113 + iVar8) = 0;
  *(undefined4 *)(&DAT_007f5117 + iVar8) = 0;
  *(undefined4 *)(&DAT_007f511b + iVar8) = 0;
  *(undefined4 *)((int)&DAT_007f511f + iVar8) = 0;
  *(undefined4 *)((int)&DAT_007f5123 + iVar8) = 0;
  *(undefined4 *)(&DAT_007f5127 + iVar8) = 0;
  *(undefined4 *)(&DAT_007f512b + iVar8) = 0;
  *(undefined4 *)(&DAT_007f512f + iVar8) = 0;
  puVar9 = (undefined4 *)((int)&DAT_007f5147 + iVar8);
  for (iVar6 = 0x9b; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  puVar9 = &DAT_00798fd8;
  puVar13 = (undefined4 *)((int)&DAT_007f555b + iVar8);
  for (iVar6 = 0x26; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar13 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined2 *)puVar13 = *(undefined2 *)puVar9;
  iVar6 = local_c * 0x10;
  *(undefined1 *)((int)puVar13 + 2) = *(undefined1 *)((int)puVar9 + 2);
  local_30 = (&DAT_00800f30)[local_c * 4] | *(uint *)(&DAT_00800fb0 + iVar6);
  local_2c = (&DAT_00800f34)[local_c * 4] | *(uint *)(&DAT_00800fb4 + iVar6);
  local_28 = (&DAT_00800f38)[local_c * 4] | *(uint *)(&DAT_00800fb8 + iVar6);
  local_24 = (&DAT_00800f3c)[local_c * 4] | *(uint *)(&DAT_00800fbc + iVar6);
  local_8 = 1;
  local_1c = &PTR_DAT_007bfc04 + local_c;
  do {
    if ((*local_1c)[local_8] != '\0') {
      local_18 = (int)&DAT_007f510b + iVar8;
      pbVar4 = (byte *)(local_18 + ((int)(local_8 ^ 7) >> 3));
      *pbVar4 = *pbVar4 | '\x01' << ((local_8 ^ 7) & 7);
    }
    local_8 = local_8 + 1;
  } while ((int)local_8 < 0x9b);
  if (0 < (int)param_2) {
    local_14 = param_2;
    param_2 = (uint *)(&DAT_00799074 + local_c * 0x1c2);
    do {
      iVar6 = 0;
      puVar10 = param_2;
      do {
        uVar3 = *puVar10;
        if (uVar3 == 0) break;
        if (*(int *)((int)&DAT_007f5147 + uVar3 * 4 + iVar8) < (int)(uint)(byte)puVar10[1]) {
          *(uint *)((int)&DAT_007f5147 + uVar3 * 4 + iVar8) = (uint)(byte)puVar10[1];
        }
        iVar6 = iVar6 + 1;
        puVar10 = (uint *)((int)puVar10 + 5);
      } while (iVar6 < 0x1e);
      param_2 = (uint *)((int)param_2 + 0x96);
      local_14 = (uint *)((int)local_14 + -1);
    } while (local_14 != (uint *)0x0);
  }
  iVar6 = (int)param_3 + 1;
  if (iVar6 < 3) {
    local_14 = (uint *)(&DAT_00799074 + (iVar6 + local_c * 3) * 0x96);
    local_18 = 3 - iVar6;
    do {
      local_8 = 0;
      puVar10 = local_14;
      do {
        uVar3 = *puVar10;
        if (uVar3 == 0) break;
        if (*(char *)((int)&DAT_00798fd8 + uVar3) == '\x01') {
          pbVar4 = (byte *)((int)&DAT_007f510b + ((int)(uVar3 ^ 7) >> 3) + iVar8);
          *pbVar4 = *pbVar4 & ~('\x01' << ((uVar3 ^ 7) & 7));
          local_20 = (int)&DAT_007f511f + iVar8;
          pbVar4 = (byte *)(local_20 + ((int)(uVar3 ^ 7) >> 3));
          *pbVar4 = *pbVar4 & ~('\x01' << ((uVar3 ^ 7) & 7));
        }
        else {
          iVar6 = (byte)puVar10[1] - 1;
          if ((-1 < iVar6) && (iVar6 < (int)(uint)*(byte *)((int)&DAT_007f555b + uVar3 + iVar8))) {
            *(byte *)((int)&DAT_007f555b + uVar3 + iVar8) = (byte)puVar10[1] - 1;
          }
        }
        local_8 = local_8 + 1;
        puVar10 = (uint *)((int)puVar10 + 5);
      } while ((int)local_8 < 0x1e);
      local_14 = (uint *)((int)local_14 + 0x96);
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  param_3 = (uint *)0x1;
LAB_004e5403:
  if (((*local_1c)[(int)param_3] != '\0') &&
     ((*(byte *)((int)&DAT_007f510b + ((int)((uint)param_3 ^ 7) >> 3) + iVar8) >>
       (((uint)param_3 ^ 7) & 7) & 1) != 0)) {
    iVar6 = *(int *)((int)&DAT_007f5147 + (int)param_3 * 4 + iVar8);
    if (iVar6 < (int)(uint)*(byte *)((int)&DAT_007f555b + iVar8 + (int)param_3)) {
      iVar7 = 0;
      piVar5 = (int *)(&PTR_DAT_007c0dc8)[local_c];
      puVar10 = (uint *)*piVar5;
      piVar11 = piVar5;
      while (puVar10 != (uint *)0x0) {
        if ((puVar10 == param_3) && ((uint)*(byte *)(piVar11 + 1) == iVar6 + 1U)) {
          iVar6 = 0;
          if (*(int *)(iVar7 * 0x19 + 5 + (int)piVar5) == 0) goto LAB_004e54d9;
          piVar5 = (int *)(iVar7 * 0x19 + 5 + (int)piVar5);
          goto LAB_004e54b9;
        }
        piVar1 = (int *)((int)piVar11 + 0x19);
        piVar11 = (int *)((int)piVar11 + 0x19);
        iVar7 = iVar7 + 1;
        puVar10 = (uint *)*piVar1;
      }
    }
    else {
      pbVar4 = (byte *)((int)&DAT_007f511f + ((int)((uint)param_3 ^ 7) >> 3) + iVar8);
      *pbVar4 = *pbVar4 & ~('\x01' << (((uint)param_3 ^ 7) & 7));
    }
  }
  goto cf_continue_loop_004E5505;
  while( true ) {
    if (*(int *)((int)&DAT_007f5147 + *piVar5 * 4 + iVar8) < (int)(uint)*(byte *)(piVar5 + 1)) {
      pbVar4 = (byte *)((int)&DAT_007f511f + ((int)((uint)param_3 ^ 7) >> 3) + iVar8);
      *pbVar4 = *pbVar4 & ~('\x01' << (((uint)param_3 ^ 7) & 7));
      goto cf_continue_loop_004E5505;
    }
    piVar11 = (int *)((int)piVar5 + 5);
    piVar5 = (int *)((int)piVar5 + 5);
    iVar6 = iVar6 + 1;
    if (*piVar11 == 0) break;
LAB_004e54b9:
    if (3 < iVar6) break;
  }
LAB_004e54d9:
  pbVar4 = (byte *)((int)&DAT_007f511f + ((int)((uint)param_3 ^ 7) >> 3) + iVar8);
  *pbVar4 = *pbVar4 | '\x01' << (((uint)param_3 ^ 7) & 7);
cf_continue_loop_004E5505:
  param_3 = (uint *)((int)param_3 + 1);
  if (0x9a < (int)param_3) {
    param_3 = (uint *)(&DAT_007f54bb + iVar8);
    param_2 = (uint *)0x1;
    puVar12 = &DAT_007c0dd4;
    local_10 = iVar8;
    do {
      iVar6 = FUN_006b0fd0((int)&local_30);
      if (iVar6 != 0) {
        iVar6 = 1;
        *param_3 = 1;
        cVar2 = puVar12[1];
        while( true ) {
          if ((cVar2 == '\0') || (2 < iVar6)) goto LAB_004e5598;
          local_20 = (int)&DAT_007f510b + iVar8;
          local_1c = (undefined **)(uint)(byte)puVar12[iVar6];
          if ((*(byte *)(local_20 + ((int)((uint)local_1c ^ 7) >> 3)) >> (((uint)local_1c ^ 7) & 7)
              & 1) == 0) break;
          cVar2 = puVar12[iVar6 + 1];
          iVar6 = iVar6 + 1;
        }
        *param_3 = 0;
      }
LAB_004e5598:
      puVar12 = puVar12 + 3;
      param_2 = (uint *)((int)param_2 + 1);
      param_3 = param_3 + 1;
    } while ((int)puVar12 < 0x7c0e4c);
    param_2 = (uint *)((int)&DAT_007f53b3 + iVar8);
    param_3 = (uint *)0x32;
    do {
      iVar8 = FUN_006b0fd0((int)&local_30);
      iVar6 = local_10;
      if (iVar8 != 0) {
        *param_2 = 1;
        iVar8 = 1;
        cVar2 = (&DAT_007c0e4d)[(local_c * 0x42 + -0x32 + (int)param_3) * 3];
        while( true ) {
          if ((cVar2 == '\0') || (2 < iVar8)) goto LAB_004e5655;
          iVar7 = (local_c * 0x42 + -0x32 + (int)param_3) * 3;
          local_1c = (undefined **)(uint)(byte)(&DAT_007c0e4c)[iVar8 + iVar7];
          local_20 = (int)&DAT_007f510b + local_10;
          if ((*(byte *)(local_20 + ((int)((uint)local_1c ^ 7) >> 3)) >> (((uint)local_1c ^ 7) & 7)
              & 1) == 0) break;
          cVar2 = (&DAT_007c0e4d)[iVar8 + iVar7];
          iVar8 = iVar8 + 1;
        }
        *param_2 = 0;
      }
LAB_004e5655:
      param_3 = (uint *)((int)param_3 + 1);
      param_2 = param_2 + 1;
      if (0x73 < (int)param_3) {
        if (*(int *)(&DAT_007f57ee + local_10) != 0) {
          *(undefined4 *)(*(int *)(&DAT_007f57ee + local_10) + 4) = 0;
          iVar8 = FUN_006b1190(*(int *)(&DAT_007f57ee + local_10),&param_1);
          while (-1 < iVar8) {
            thunk_FUN_004dd880((int)param_1);
            iVar8 = FUN_006b1190(*(int *)(&DAT_007f57ee + iVar6),&param_1);
          }
        }
        if (*(int *)((int)&DAT_007f4e29 + iVar6) != 0) {
          *(undefined4 *)(*(int *)((int)&DAT_007f4e29 + iVar6) + 4) = 0;
          iVar8 = FUN_006b1190(*(int *)((int)&DAT_007f4e29 + iVar6),&param_1);
          while (-1 < iVar8) {
            if (param_1 != (int *)0x0) {
              iVar8 = (**(code **)(*param_1 + 0x2c))();
              if ((iVar8 == 0x36) || (iVar8 = (**(code **)(*param_1 + 0x2c))(), iVar8 == 0x5d)) {
                thunk_FUN_004e4d60(param_1);
              }
              if (param_1 != (int *)0x0) {
                iVar8 = (**(code **)(*param_1 + 0x2c))();
                if ((iVar8 == 0x5d) || (iVar8 = (**(code **)(*param_1 + 0x2c))(), iVar8 == 0x3d)) {
                  thunk_FUN_004e4f30(param_1);
                }
                if ((param_1 != (int *)0x0) &&
                   (((iVar8 = (**(code **)(*param_1 + 0x2c))(), iVar8 == 5 ||
                     (iVar8 = (**(code **)(*param_1 + 0x2c))(), iVar8 == 0x21)) ||
                    (iVar8 = (**(code **)(*param_1 + 0x2c))(), iVar8 == 0x11)))) {
                  thunk_FUN_00494ae0((int)param_1);
                }
              }
            }
            iVar8 = FUN_006b1190(*(int *)((int)&DAT_007f4e29 + iVar6),&param_1);
          }
        }
        return 0;
      }
    } while( true );
  }
  goto LAB_004e5403;
}

