
undefined4 __fastcall FUN_0074a1c9(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)param_1[0x2b];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x2b] = 0;
  }
  if (*(int *)(param_1[0x1e] + 0x18) == 0) {
    uVar2 = 1;
  }
  else if (param_1[5] == 0) {
    FUN_0074a81d(param_1,0);
    (**(code **)(*param_1 + 100))();
    (**(code **)(*param_1 + 0x70))();
    param_1[0x18] = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x80040224;
  }
  return uVar2;
}

