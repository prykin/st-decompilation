
undefined4 FUN_00751e70(LPCSTR param_1,uint param_2,int param_3,uint *param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_54;
  undefined4 local_50 [16];
  undefined4 local_10;
  undefined4 *local_c;
  int local_8;
  
  local_8 = 0;
  local_c = FUN_006d4380((undefined4 *)0x0,param_1,0);
  if (local_c == (undefined4 *)0x0) {
    return 0;
  }
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar2 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  puVar1 = local_c;
  if (iVar2 == 0) {
    local_10 = FUN_00751c40(local_c[0xd],param_2,param_3,param_4,param_5);
    iVar2 = local_8;
  }
  local_8 = iVar2;
  iVar2 = local_8;
  DAT_00858df8 = (undefined4 *)local_54;
  FUN_006d46a0(puVar1,0);
  if (iVar2 == 0) {
    return local_10;
  }
  FUN_006a5e40(iVar2,DAT_007ed77c,0x7f2b48,0x16);
  return 0;
}

