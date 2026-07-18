
undefined4 __fastcall thunk_FUN_004e8dc0(int *param_1)

{
  int iVar1;
  int *piStack_8;
  
  if ((param_1[0x13e] == 0) && (*(int *)((int)param_1 + 0x5d3) != 0)) {
    piStack_8 = param_1;
    iVar1 = FUN_006e62d0(DAT_00802a38,*(int *)((int)param_1 + 0x5d3),(int *)&piStack_8);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*piStack_8 + 0x2c))();
      if (iVar1 == 0x6c) {
        iVar1 = thunk_FUN_004e9b10(piStack_8,(int)param_1);
        if (iVar1 != 0) {
          param_1[0x13e] = *(int *)((int)param_1 + 0x5d3);
          param_1[0x13f] = 1;
          *(int **)((int)param_1 + 0x61b) = piStack_8;
        }
      }
    }
  }
  return 0;
}

