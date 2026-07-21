
undefined4 __fastcall FUN_0048fa80(int param_1)

{
  int iVar1;
  int *piVar2;

  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x2cc);
  while ((iVar1 == 2 || (*piVar2 != 1))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    if (0x16 < iVar1) {
      return 1;
    }
  }
  return 0;
}

