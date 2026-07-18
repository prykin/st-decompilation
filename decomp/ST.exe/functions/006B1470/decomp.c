
int FUN_006b1470(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_84;
  undefined4 local_80;
  uint local_1c;
  int local_8;
  
  iVar4 = *param_1;
  if (iVar4 == 0) {
    iVar4 = FUN_006a5e40(-0x34,DAT_007ed77c,0x7edac0,0x82);
    return iVar4;
  }
  if (*(int *)(iVar4 + 0x40) != 0) {
    if ((*(uint *)(iVar4 + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x4f0));
    }
    piVar2 = *(int **)(iVar4 + 0x44);
    puVar1 = (undefined4 *)(iVar4 + 0x44);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *puVar1 = 0;
    }
    piVar2 = *(int **)(iVar4 + 0x48);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *(undefined4 *)(iVar4 + 0x48) = 0;
    }
    piVar2 = (int *)param_1[0x73];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      param_1[0x71] = 0;
      param_1[0x72] = 0;
      param_1[0x73] = 0;
    }
    local_84 = 0x7c;
    local_80 = 0x1007;
    iVar5 = (**(code **)(**(int **)(iVar4 + 0x40) + 0x58))(*(int **)(iVar4 + 0x40),&local_84);
    if (iVar5 == 0) {
      local_1c = local_1c & 0x800;
      local_84 = 0x7c;
      local_80 = 0x1007;
      if (((*(uint *)(iVar4 + 8) & 0x10000000) != 0) || ((*(uint *)(iVar4 + 0xc) & 0x800) != 0)) {
        local_1c = 0x800;
      }
      local_1c = local_1c | 0x40;
      iVar5 = (**(code **)(**(int **)(iVar4 + 0x30) + 0x18))
                        (*(int **)(iVar4 + 0x30),&local_84,puVar1,0);
      if (iVar5 == 0) {
        if ((*(int *)(iVar4 + 0x20) == 8) && (*(int *)(iVar4 + 0x3c) != 0)) {
          (**(code **)(*(int *)*puVar1 + 0x7c))((int *)*puVar1,*(int *)(iVar4 + 0x3c));
        }
        local_8 = 0;
        while( true ) {
          iVar5 = (**(code **)(*(int *)*puVar1 + 0x14))
                            ((int *)*puVar1,0,*(undefined4 *)(iVar4 + 0x40),0,0x1000000,0);
          if (iVar5 == 0) break;
          if (iVar5 == -0x7789fe3e) {
            FUN_006cec40(iVar4);
          }
          else {
            if (((iVar5 != -0x7789ff60) && (iVar5 != -0x7789fe52)) || (local_8 != 0)) break;
            Sleep(2);
          }
          local_8 = local_8 + 1;
          if (1 < local_8) break;
        }
        if ((iVar5 == -0x7789ff60) || (iVar5 == -0x7789fe52)) {
          iVar5 = 0;
        }
        uVar3 = *(undefined4 *)(iVar4 + 0x40);
        *(undefined4 *)(iVar4 + 0x40) = *puVar1;
        *puVar1 = uVar3;
        *(undefined4 *)(iVar4 + 0x4b0) = 1;
        param_1[0x6e] = 1;
        param_1[0x6d] = 1;
      }
    }
    if ((*(uint *)(iVar4 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x4f0));
    }
    if (iVar5 != 0) {
      FUN_006a5e40(iVar5,DAT_007ed77c,0x7edac0,0xca);
      return iVar5;
    }
  }
  return 0;
}

