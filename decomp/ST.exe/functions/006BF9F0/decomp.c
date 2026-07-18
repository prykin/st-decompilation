
undefined4
FUN_006bf9f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_54;
  undefined4 local_50 [16];
  uint local_10;
  int *local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = 0;
  local_10 = *(uint *)(*param_1 + 0xc);
  DAT_00854f30 = param_2;
  DAT_00854f74 = 0;
  DAT_00854f34 = param_3;
  DAT_00854f38 = param_4;
  DAT_00854f3c = param_5;
  iVar1 = FUN_006cfeb0(&DAT_00854f30,&DAT_00854f30,(int *)(*param_1 + 0x484));
  if (iVar1 != 0) {
    DAT_00854fe8 = 1;
    param_1[0x6d] = 1;
    param_1[0x6e] = 1;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfffffeff;
    local_54 = DAT_00858df8;
    DAT_00858df8 = &local_54;
    iVar1 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
    if (iVar1 == 0) {
      FUN_006bd740(param_1);
      iVar1 = local_8;
    }
    local_8 = iVar1;
    DAT_00858df8 = (undefined4 *)local_54;
    local_c[0x6d] = 1;
    local_c[0x6e] = 1;
    *(uint *)(*local_c + 0xc) = *(uint *)(*local_c + 0xc) | local_10 & 0x100;
    DAT_00854fe8 = 0;
    if (local_8 != 0) {
      FUN_006a5e40(local_8,DAT_007ed77c,0x7edc8c,0x811);
      return 0;
    }
  }
  return DAT_00854f74;
}

