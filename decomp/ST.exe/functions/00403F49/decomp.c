
undefined4 __fastcall thunk_FUN_004ddcc0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(param_1 + 0x4d0);
  iVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x4d0);
  while (-1 < iVar2) {
    if (piVar3[2] != 0) {
      iVar4 = iVar4 + (*(int *)(&DAT_007e6028 + (*piVar3 + -0x96) * 0x14) - piVar3[1]) *
                      (&DAT_007e6024)[(*piVar3 + -0x96) * 5];
    }
    piVar1 = piVar3 + 5;
    piVar3 = piVar3 + 5;
    iVar2 = *piVar1;
  }
  thunk_FUN_004d76e0(*(char *)(param_1 + 0x24),3,*(int *)(param_1 + 0x18),0,iVar4,0,0);
  return 0;
}

