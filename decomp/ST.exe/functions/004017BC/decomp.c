
int thunk_FUN_004e6f00(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iVar3 = 0;
  iStack_10 = 0;
  iStack_c = 0;
  iStack_8 = 0;
  if ((-1 < param_1) && (param_1 < 8)) {
    uVar1 = thunk_FUN_004406c0((char)param_1);
    uVar4 = 0;
    do {
      if ((&PTR_DAT_007bfc04)[(uVar1 & 0xff) - 1] + uVar4 != (undefined *)0x0) {
        iVar2 = thunk_FUN_004e60d0(param_1,iVar3);
        if ((int)(uint)*(byte *)((int)&DAT_00798fd8 + iVar3) <= iVar2) {
          iStack_c = iStack_c + 1;
        }
        iStack_8 = iStack_8 + 1;
      }
      uVar4 = uVar4 + 0x9b;
      iVar3 = iVar3 + 1;
    } while (uVar4 < 0x5dd9);
    if (iStack_8 != 0) {
      iStack_8 = (iStack_c * 100) / iStack_8;
      if (iStack_8 < 0x65) {
        return iStack_8;
      }
      iStack_10 = 100;
    }
    return iStack_10;
  }
  return 0;
}

