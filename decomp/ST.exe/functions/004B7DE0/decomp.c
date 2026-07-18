
bool __fastcall FUN_004b7de0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x134];
  if (iVar1 == 2) {
    param_1[0x134] = 3;
    thunk_FUN_004cabb0(0);
    (**(code **)(*param_1 + 0x90))(3,0x3cc);
  }
  return iVar1 == 2;
}

