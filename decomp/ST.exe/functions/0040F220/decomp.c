
int __cdecl FUN_0040f220(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (int)*(uint *)(param_2 + 0x10) >> 0x1f;
  uVar2 = (int)*(uint *)(param_1 + 0x10) >> 0x1f;
  return ((int)((*(uint *)(param_2 + 0x10) ^ uVar1) - uVar1) / 2 +
         (*(int *)(param_2 + 0xc) - *(int *)(param_1 + 0xc))) -
         (int)((*(uint *)(param_1 + 0x10) ^ uVar2) - uVar2) / 2;
}

