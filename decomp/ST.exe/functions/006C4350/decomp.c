
int FUN_006c4350(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                int param_6)

{
  int iVar1;
  
  if (((param_6 != 0) && ((param_5 & 0x4800) == 0)) && ((*(byte *)(param_1 + 0xc) & 8) == 0)) {
    param_5 = param_5 | 0x800;
  }
  iVar1 = FUN_006bb6c0(param_1,param_2,param_3,param_4,-1,param_5);
  if (iVar1 != 0) {
    FUN_006a5e40(iVar1,DAT_007ed77c,0x7edef4,0x10);
    return iVar1;
  }
  return 0;
}

