
int __fastcall FUN_004be380(int param_1)

{
  uint uVar1;
  
  uVar1 = thunk_FUN_004406c0(*(char *)(param_1 + 0x23d));
  return (*(int *)(param_1 + 0x241) * 100) /
         *(int *)(&DAT_007e417c + (((uVar1 & 0xff) - 1) + *(int *)(param_1 + 0x235) * 3) * 4);
}

