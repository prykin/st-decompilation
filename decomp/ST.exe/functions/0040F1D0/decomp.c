
int __cdecl FUN_0040f1d0(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;

  uVar1 = param_1[1] >> 0x1f;
  uVar2 = param_2[1] >> 0x1f;
  return (((int)((param_2[1] ^ uVar2) - uVar2) / 2 - (int)((param_1[1] ^ uVar1) - uVar1) / 2) -
         *param_1) + *param_2;
}

