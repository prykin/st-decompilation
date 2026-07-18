
int FUN_006db6f0(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = param_1 < 0;
  if (bVar2) {
    param_1 = -param_1;
  }
  if (0xb3 < param_1) {
    param_1 = param_1 % 0xb4;
  }
  if (param_1 < 0x5b) {
    iVar1 = *(int *)(&DAT_007ee584 + param_1 * 4);
  }
  else {
    iVar1 = -*(int *)(s_AppClassTy__DeleteObject_Error___007ee83c + param_1 * -4 + 0x18);
  }
  if (bVar2) {
    iVar1 = -iVar1;
  }
  return iVar1;
}

