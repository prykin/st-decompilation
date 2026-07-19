
bool __fastcall FUN_004b7d90(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x134];
  if (iVar1 == 0) {
    param_1[0x134] = 1;
    TLOBaseTy::RotateSpr((TLOBaseTy *)param_1,0);
    (**(code **)(*param_1 + 0x90))(3,0x3cb);
  }
  return iVar1 == 0;
}

