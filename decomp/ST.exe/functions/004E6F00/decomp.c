
int FUN_004e6f00(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_10;
  int local_c;
  int local_8;
  
  iVar3 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if ((-1 < param_1) && (param_1 < 8)) {
    uVar1 = thunk_FUN_004406c0((char)param_1);
    uVar4 = 0;
    do {
      if ((&PTR_DAT_007bfc04)[(uVar1 & 0xff) - 1] + uVar4 != (undefined *)0x0) {
        iVar2 = thunk_FUN_004e60d0(param_1,iVar3);
        if ((int)(uint)*(byte *)((int)&DAT_00798fd8 + iVar3) <= iVar2) {
          local_c = local_c + 1;
        }
        local_8 = local_8 + 1;
      }
      uVar4 = uVar4 + 0x9b;
      iVar3 = iVar3 + 1;
    } while (uVar4 < 0x5dd9);
    if (local_8 != 0) {
      local_8 = (local_c * 100) / local_8;
      if (local_8 < 0x65) {
        return local_8;
      }
      local_10 = 100;
    }
    return local_10;
  }
  return 0;
}

