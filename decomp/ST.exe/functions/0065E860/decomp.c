
undefined4 __cdecl FUN_0065e860(uint param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 != 0) {
    uVar1 = thunk_FUN_00423120(param_3);
    if ((uVar1 & 0x10) == 0) {
      *(undefined4 *)(param_4 + DAT_00811900 * 0x2c) = 0x14;
      *(uint *)(param_4 + 4 + DAT_00811900 * 0x2c) = param_1 & 0xffff;
      *(int *)(param_4 + 0xc + DAT_00811900 * 0x2c) = param_3;
      *(uint *)(param_4 + 0x10 + DAT_00811900 * 0x2c) = param_2 & 0xffff;
      DAT_00811900 = DAT_00811900 + 1;
    }
  }
  return 0;
}

