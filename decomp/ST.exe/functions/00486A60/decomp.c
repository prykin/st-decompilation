
int __fastcall FUN_00486a60(int param_1)

{
  int iVar1;
  
  iVar1 = (*(int *)(param_1 + 0x716) * 100) / *(int *)(param_1 + 0x712);
  if ((0 < *(int *)(param_1 + 0x716)) && (iVar1 == 0)) {
    iVar1 = 1;
  }
  return iVar1;
}

