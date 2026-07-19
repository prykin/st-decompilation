
int FUN_006b1470(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int extraout_EAX;
  int exceptionCode;
  undefined4 local_84;
  undefined4 local_80;
  uint local_1c;
  int local_8;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__DKW_DDX_C_ddsinit_c_007edac0,0x82);
    return extraout_EAX;
  }
  if (*(int *)(iVar2 + 0x40) != 0) {
    if ((*(uint *)(iVar2 + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x4f0));
    }
    piVar3 = *(int **)(iVar2 + 0x44);
    puVar1 = (undefined4 *)(iVar2 + 0x44);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      *puVar1 = 0;
    }
    piVar3 = *(int **)(iVar2 + 0x48);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      *(undefined4 *)(iVar2 + 0x48) = 0;
    }
    piVar3 = (int *)param_1[0x73];
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      param_1[0x71] = 0;
      param_1[0x72] = 0;
      param_1[0x73] = 0;
    }
    local_84 = 0x7c;
    local_80 = 0x1007;
    exceptionCode =
         (**(code **)(**(int **)(iVar2 + 0x40) + 0x58))(*(int **)(iVar2 + 0x40),&local_84);
    if (exceptionCode == 0) {
      local_1c = local_1c & 0x800;
      local_84 = 0x7c;
      local_80 = 0x1007;
      if (((*(uint *)(iVar2 + 8) & 0x10000000) != 0) || ((*(uint *)(iVar2 + 0xc) & 0x800) != 0)) {
        local_1c = 0x800;
      }
      local_1c = local_1c | 0x40;
      exceptionCode =
           (**(code **)(**(int **)(iVar2 + 0x30) + 0x18))
                     (*(int **)(iVar2 + 0x30),&local_84,puVar1,0);
      if (exceptionCode == 0) {
        if ((*(int *)(iVar2 + 0x20) == 8) && (*(int *)(iVar2 + 0x3c) != 0)) {
          (**(code **)(*(int *)*puVar1 + 0x7c))((int *)*puVar1,*(int *)(iVar2 + 0x3c));
        }
        local_8 = 0;
        while( true ) {
          exceptionCode =
               (**(code **)(*(int *)*puVar1 + 0x14))
                         ((int *)*puVar1,0,*(undefined4 *)(iVar2 + 0x40),0,0x1000000,0);
          if (exceptionCode == 0) break;
          if (exceptionCode == -0x7789fe3e) {
            FUN_006cec40(iVar2);
          }
          else {
            if (((exceptionCode != -0x7789ff60) && (exceptionCode != -0x7789fe52)) || (local_8 != 0)
               ) break;
            Sleep(2);
          }
          local_8 = local_8 + 1;
          if (1 < local_8) break;
        }
        if ((exceptionCode == -0x7789ff60) || (exceptionCode == -0x7789fe52)) {
          exceptionCode = 0;
        }
        uVar4 = *(undefined4 *)(iVar2 + 0x40);
        *(undefined4 *)(iVar2 + 0x40) = *puVar1;
        *puVar1 = uVar4;
        *(undefined4 *)(iVar2 + 0x4b0) = 1;
        param_1[0x6e] = 1;
        param_1[0x6d] = 1;
      }
    }
    if ((*(uint *)(iVar2 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x4f0));
    }
    if (exceptionCode != 0) {
      RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DDX_C_ddsinit_c_007edac0,0xca);
      return exceptionCode;
    }
  }
  return 0;
}

