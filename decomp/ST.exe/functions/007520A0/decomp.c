
undefined4 * FUN_007520a0(LPCSTR param_1,int param_2,int param_3,int param_4,int param_5)

{
  short *psVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_58;
  undefined4 local_54 [16];
  short *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_10 = (undefined4 *)0x0;
  puVar2 = FUN_006d4380((undefined4 *)0x0,param_1,0);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  psVar1 = (short *)puVar2[0xd];
  local_8 = 0;
  local_c = puVar2;
  if (*psVar1 == 0x4d42) {
    local_14 = psVar1 + 7;
    if (*(int *)(psVar1 + 7) == 0x28) {
      iVar3 = FUN_006b4fe0((int)local_14);
      if (iVar3 < 0x101) {
        local_58 = DAT_00858df8;
        DAT_00858df8 = &local_58;
        iVar3 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
        if (iVar3 == 0) {
          local_10 = FUN_006b55f0((undefined4 *)0x0,0,0,0,(int)local_14,0,param_2,param_3,param_4,
                                  param_5);
          DAT_00858df8 = (undefined4 *)local_58;
          puVar2 = local_c;
        }
        else {
          DAT_00858df8 = (undefined4 *)local_58;
          puVar2 = local_c;
          local_8 = iVar3;
        }
        goto LAB_00752172;
      }
    }
  }
  local_8 = -5;
LAB_00752172:
  iVar3 = local_8;
  FUN_006d46a0(puVar2,0);
  if (iVar3 != 0) {
    FUN_006a5e40(iVar3,DAT_007ed77c,0x7f2b90,0x32);
    return (undefined4 *)0x0;
  }
  return local_10;
}

