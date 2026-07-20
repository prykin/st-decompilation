
void __fastcall FUN_0058eeb0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = SHORT_007fb240 + -1;
  iVar2 = SHORT_007fb242 + -1;
  if ((((*(int *)(param_1 + 0x27f) < 0) || (*(int *)(param_1 + 0x287) < 0)) ||
      (*(int *)(param_1 + 0x283) < 0)) ||
     (((*(int *)(param_1 + 0x28b) < 0 || (iVar1 < *(int *)(param_1 + 0x27f))) ||
      ((iVar1 < *(int *)(param_1 + 0x287) ||
       ((iVar2 < *(int *)(param_1 + 0x283) || (iVar2 < *(int *)(param_1 + 0x28b))))))))) {
    *(undefined4 *)(param_1 + 0x27f) = 0;
    *(int *)(param_1 + 0x287) = iVar1;
    *(undefined4 *)(param_1 + 0x283) = 0;
    *(int *)(param_1 + 0x28b) = iVar2;
  }
  if (*(int *)(param_1 + 0x287) <= *(int *)(param_1 + 0x27f)) {
    *(undefined4 *)(param_1 + 0x27f) = 0;
    *(int *)(param_1 + 0x287) = iVar1;
  }
  if (*(int *)(param_1 + 0x28b) <= *(int *)(param_1 + 0x283)) {
    *(undefined4 *)(param_1 + 0x283) = 0;
    *(int *)(param_1 + 0x28b) = iVar2;
  }
  if ((((iVar1 < *(int *)(param_1 + 0x26f)) || (*(int *)(param_1 + 0x26f) < 0)) ||
      (iVar2 < *(int *)(param_1 + 0x273))) || (*(int *)(param_1 + 0x273) < 0)) {
    *(int *)(param_1 + 0x26f) = iVar1 >> 1;
    *(int *)(param_1 + 0x273) = iVar2 >> 1;
  }
  if ((*(int *)(param_1 + 0x277) < 0) || (4 < *(int *)(param_1 + 0x277))) {
    *(undefined4 *)(param_1 + 0x277) = 2;
  }
  return;
}

