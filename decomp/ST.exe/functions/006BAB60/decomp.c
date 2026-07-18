
int FUN_006bab60(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_68 [20];
  undefined4 local_18;
  
  if (((*(uint *)(param_1 + 0xc) & 0x1100) != 0x100) && (*(int *)(param_1 + 0x40) != 0)) {
    local_68[0] = 100;
    local_18 = param_2;
    if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
    uVar2 = 0;
    while( true ) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x14))
                        (*(int **)(param_1 + 0x40),0,0,0,0x1000400,local_68);
      if (iVar1 == 0) break;
      if (iVar1 == -0x7789fe3e) {
        FUN_006cec40(param_1);
      }
      else {
        if (((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) || (uVar2 != 0)) break;
        Sleep(2);
      }
      uVar2 = uVar2 + 1;
      if (1 < uVar2) break;
    }
    if ((iVar1 == -0x7789ff60) || (iVar1 == -0x7789fe52)) {
      iVar1 = 0;
    }
    if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
    if (iVar1 != 0) {
      FUN_006a5e40(iVar1,DAT_007ed77c,0x7edc48,0x30d);
      return iVar1;
    }
  }
  return 0;
}

