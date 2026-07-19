
int FUN_006b1680(int *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  uint local_18;
  
  iVar3 = param_2;
  piVar2 = param_1;
  if ((*(uint *)(param_2 + 8) & 0x4000000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x4f0));
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    iVar4 = *param_1;
    if (iVar4 != 0) {
      if ((*(uint *)(iVar4 + 8) & 0x4000000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x4f0));
      }
      piVar5 = *(int **)(*param_1 + 0x44);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
        *(undefined4 *)(*param_1 + 0x44) = 0;
      }
      piVar5 = *(int **)(*param_1 + 0x48);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
        *(undefined4 *)(*param_1 + 0x48) = 0;
      }
      if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
      }
    }
    piVar5 = (int *)param_1[0x73];
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
      param_1[0x71] = 0;
      param_1[0x72] = 0;
      param_1[0x73] = 0;
    }
    local_80 = 0x7c;
    local_7c = 0x1007;
    iVar4 = (**(code **)(**(int **)(param_2 + 0x40) + 0x58))(*(int **)(param_2 + 0x40),&local_80);
    if (iVar4 == 0) {
      param_1[4] = local_78;
      *param_1 = param_2;
      param_1[2] = 0;
      param_1[1] = 0;
      param_1[3] = local_74;
      param_1[0x7a] = 0x7fffffff;
      local_18 = local_18 & 0x800;
      local_80 = 0x7c;
      local_7c = 0x1007;
      if (((*(uint *)(param_2 + 8) & 0x10000000) != 0) || ((*(uint *)(param_2 + 0xc) & 0x800) != 0))
      {
        local_18 = 0x800;
      }
      local_18 = CONCAT31((int3)(local_18 >> 8),0x40);
      iVar4 = (**(code **)(**(int **)(param_2 + 0x30) + 0x18))
                        (*(int **)(param_2 + 0x30),&local_80,(undefined4 *)(param_2 + 0x44),0);
      if (iVar4 == 0) {
        if ((*(int *)(param_2 + 0x20) == 8) && (*(int *)(param_2 + 0x3c) != 0)) {
          piVar5 = *(int **)(param_2 + 0x44);
          (**(code **)(*piVar5 + 0x7c))(piVar5,*(int *)(param_2 + 0x3c));
        }
        param_1 = (int *)0x0;
        while (iVar4 = (**(code **)(**(int **)(param_2 + 0x44) + 0x14))
                                 (*(int **)(param_2 + 0x44),0,*(undefined4 *)(param_2 + 0x40),0,
                                  0x1000000,0), iVar4 != 0) {
          if (iVar4 == -0x7789fe3e) {
            FUN_006cec40(param_2);
          }
          else {
            if (((iVar4 != -0x7789ff60) && (iVar4 != -0x7789fe52)) || (param_1 != (int *)0x0))
            break;
            Sleep(2);
          }
          param_1 = (int *)((int)param_1 + 1);
          if (1 < (int)param_1) break;
        }
        if ((iVar4 == -0x7789ff60) || (param_2 = iVar4, iVar4 == -0x7789fe52)) {
          param_2 = 0;
        }
        uVar1 = *(undefined4 *)(iVar3 + 0x40);
        *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(iVar3 + 0x44);
        *(undefined4 *)(iVar3 + 0x44) = uVar1;
        *(undefined4 *)(iVar3 + 0x4b0) = 1;
        piVar5 = piVar2 + 5;
        for (iVar4 = 0x2c; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar5 = 0;
          piVar5 = piVar5 + 1;
        }
        piVar2[0x31] = 0;
        piVar5 = piVar2 + 0x32;
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar5 = -1;
          piVar5 = piVar5 + 1;
        }
        piVar5 = piVar2 + 0x47;
        for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar5 = 0;
          piVar5 = piVar5 + 1;
        }
        piVar5 = piVar2 + 0x5d;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar5 = 0;
          piVar5 = piVar5 + 1;
        }
        piVar5 = piVar2 + 8;
        iVar4 = 0xb;
        do {
          piVar5[-1] = local_74;
          *piVar5 = local_78;
          piVar5 = piVar5 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        piVar5 = piVar2 + 0x3c;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar5 = 1;
          piVar5 = piVar5 + 1;
        }
        piVar2[0x6e] = 1;
        piVar2[0x6d] = 1;
        piVar2[0x78] = 0x7fffffff;
        piVar2[0x7a] = 0x7fffffff;
        iVar4 = param_2;
      }
    }
    if ((*(uint *)(iVar3 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x4f0));
    }
    if (iVar4 != 0) {
      RaiseInternalException(iVar4,DAT_007ed77c,s_E__DKW_DDX_C_ddsinit_c_007edac0,0x14a);
      return iVar4;
    }
  }
  return 0;
}

