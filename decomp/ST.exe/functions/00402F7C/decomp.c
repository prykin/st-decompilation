
int thunk_FUN_004e6fe0(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  uint uVar5;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  uVar5 = 0;
  iStack_10 = 0;
  iStack_c = 0;
  iStack_8 = 0;
  if ((-1 < param_1) && (param_1 < 8)) {
    uVar2 = thunk_FUN_004406c0((char)param_1);
    uVar4 = 0;
    do {
      if ((&PTR_DAT_007bfc04)[(uVar2 & 0xff) - 1] + uVar4 != (undefined *)0x0) {
        iVar3 = thunk_FUN_004e60d0(param_1,uVar5);
        if ((int)(uint)*(byte *)((int)&DAT_007f555b + param_1 * 0xa62 + uVar5) <= iVar3) {
          iStack_c = iStack_c + 1;
        }
        bVar1 = thunk_FUN_004e5910(param_1,uVar5);
        if (CONCAT31(extraout_var,bVar1) != 0) {
          iStack_8 = iStack_8 + 1;
        }
      }
      uVar4 = uVar4 + 0x9b;
      uVar5 = uVar5 + 1;
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

