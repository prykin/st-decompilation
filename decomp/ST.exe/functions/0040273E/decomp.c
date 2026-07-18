
undefined4 __cdecl
thunk_FUN_00646110(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  *param_3 = 0;
  iVar1 = param_1 + -0x96;
  *param_4 = 0;
  *param_5 = 0;
  if ((-1 < iVar1) && (iVar1 < 0x2d)) {
    uVar2 = 1;
    *param_3 = *(undefined4 *)(&DAT_007e6468 + (param_2 + iVar1 * 5) * 4);
    if (param_1 == 0x99) {
      *param_4 = DAT_007e66c0;
      *param_5 = 7;
      return uVar2;
    }
    if (param_1 == 0xb7) {
      *param_4 = DAT_007e6724;
      *param_5 = 5;
      return uVar2;
    }
    if (param_1 == 0xaa) {
      *param_4 = DAT_007e65f8;
      *param_5 = 0x19;
    }
  }
  return uVar2;
}

