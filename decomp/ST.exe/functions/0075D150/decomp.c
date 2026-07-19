
void FUN_0075d150(int *param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int local_14;
  
  puVar3 = (undefined4 *)(**(code **)*param_1)(param_1,1,0xa0);
  *(undefined4 **)((int)param_1 + 0x1b2) = puVar3;
  *puVar3 = FUN_0075d350;
  puVar3[1] = FUN_0075d370;
  puVar3[2] = 0;
  if (*(int *)((int)param_1 + 0x11e) != 0) {
    RaiseInternalException(0x17,DAT_007ed77c,s_E__DKW_JPG_C_jdsample_c_007f2e58,0x1a4);
  }
  if ((param_1[0x11] == 0) || (bVar2 = true, *(int *)((int)param_1 + 0x12a) < 2)) {
    bVar2 = false;
  }
  local_14 = 0;
  if (0 < param_1[7]) {
    piVar4 = (int *)(param_1[0x34] + 0x24);
    puVar9 = puVar3 + 0xd;
    do {
      iVar5 = (piVar4[-7] * *piVar4) / *(int *)((int)param_1 + 0x12a);
      iVar6 = (piVar4[-6] * *piVar4) / *(int *)((int)param_1 + 0x12a);
      iVar1 = *(int *)((int)param_1 + 0x126);
      iVar7 = *(int *)((int)param_1 + 0x122);
      puVar9[0xc] = iVar6;
      if (piVar4[3] == 0) {
        *puVar9 = FUN_0075d480;
      }
      else if ((iVar5 == iVar7) && (iVar6 == iVar1)) {
        *puVar9 = FUN_0075d470;
      }
      else {
        if (iVar5 * 2 == iVar7) {
          if (iVar6 == iVar1) {
            if ((bVar2) && (2 < (uint)piVar4[1])) {
              *puVar9 = FUN_0075d680;
            }
            else {
              *puVar9 = FUN_0075d590;
            }
          }
          else {
            if ((iVar5 * 2 != iVar7) || (iVar6 * 2 != iVar1)) goto LAB_0075d2ac;
            if ((bVar2) && (2 < (uint)piVar4[1])) {
              *puVar9 = FUN_0075d740;
              puVar3[2] = 1;
            }
            else {
              *puVar9 = FUN_0075d5f0;
            }
          }
        }
        else {
LAB_0075d2ac:
          if ((iVar7 % iVar5 == 0) && (iVar1 % iVar6 == 0)) {
            *puVar9 = FUN_0075d490;
            *(char *)(local_14 + 0x8c + (int)puVar3) = (char)(iVar7 / iVar5);
            *(char *)(local_14 + 0x96 + (int)puVar3) = (char)(iVar1 / iVar6);
          }
          else {
            RaiseInternalException(0x25,DAT_007ed77c,s_E__DKW_JPG_C_jdsample_c_007f2e58,0x1d9);
          }
        }
        uVar8 = *(undefined4 *)((int)param_1 + 0x126);
        iVar1 = *param_1;
        iVar7 = FUN_00759e90(param_1[0x1a],*(int *)((int)param_1 + 0x122));
        uVar8 = (**(code **)(iVar1 + 8))(param_1,1,iVar7,uVar8);
        puVar9[-10] = uVar8;
      }
      local_14 = local_14 + 1;
      puVar9 = puVar9 + 1;
      piVar4 = piVar4 + 0x15;
    } while (local_14 < param_1[7]);
  }
  return;
}

