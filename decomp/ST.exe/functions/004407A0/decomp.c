
void FUN_004407a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)&DAT_007f4e24 + (char)param_1 * 0xa62 + 1);
  if (((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 0xc), iVar2 != 0)) && (uVar3 = 0, 0 < iVar2)) {
    do {
      FUN_006acc70(iVar1,uVar3,&param_1);
      if (param_1 != 0) {
        thunk_FUN_004999c0((char)param_2,(short)param_3);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar2);
  }
  return;
}

