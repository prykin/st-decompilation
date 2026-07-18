
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall thunk_FUN_00416390(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if ((*(byte *)(DAT_00802a38 + 0xe4) & 1) != 0) {
    return uVar1;
  }
  *(short *)(param_1 + 0x6e) = *(short *)(param_1 + 0x6e) + 1;
  if (*(short *)(param_1 + 0x6e) == 0x2f) {
    uVar1 = 0;
  }
  if (*(short *)(param_1 + 0x6e) == 0x30) {
    *(undefined2 *)(param_1 + 0x6e) = 0;
  }
  *(float *)(param_1 + 0x70) =
       *(float *)(&DAT_007a4d24 + *(short *)(param_1 + 0x6e) * 4) * (float)_DAT_007901c0;
  return uVar1;
}

