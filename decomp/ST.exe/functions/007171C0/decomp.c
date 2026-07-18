
short * __cdecl FUN_007171c0(int param_1,char *param_2,byte param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_5c;
  undefined4 local_58 [16];
  short local_18;
  short local_16;
  short local_e;
  ushort *local_c;
  short *local_8;
  
  local_8 = (short *)0x0;
  local_c = (ushort *)0x0;
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  iVar2 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_1 == 0) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7f0504,0x12f);
    }
    local_c = FUN_006f1ce0(0x1d,param_2,(int *)0x0,param_4);
    if (local_c == (ushort *)0x0) {
      FUN_006a5e40(-4,DAT_007ed77c,0x7f0504,0x131);
    }
    puVar3 = FUN_006f2310(6,(char *)local_c,(undefined4 *)&local_18,param_4);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_006a5e40(-4,DAT_007ed77c,0x7f0504,0x133);
    }
    local_8 = (short *)FUN_006aac10(local_e * 4 + 0xe);
    *(int *)(local_8 + 1) = param_1;
    *local_8 = local_e;
    local_8[3] = local_18;
    local_8[4] = local_16;
    uVar4 = FUN_0070aa50(param_1,(char *)local_c,param_3,1);
    *(undefined4 *)(local_8 + 5) = uVar4;
    iVar2 = 1;
    piVar7 = *(int **)(local_8 + 5);
    if (1 < *local_8) {
      do {
        *(int *)(local_8 + iVar2 * 2 + 5) = *piVar7 + (int)piVar7;
        piVar7 = *(int **)(local_8 + iVar2 * 2 + 5);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *local_8);
    }
    DAT_00858df8 = (undefined4 *)local_5c;
    cMf32::RecMemFree((cMf32 *)param_1,(uint *)&local_c);
    return local_8;
  }
  DAT_00858df8 = (undefined4 *)local_5c;
  cMf32::RecMemFree((cMf32 *)param_1,(uint *)&local_c);
  FUN_00726bd0((int *)&local_8);
  if ((param_4 != 0) || (iVar2 != -4)) {
    iVar5 = FUN_006ad4d0(s_E__Ourlib_mftspr_cpp_007f0504,0x149,0,iVar2,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      psVar6 = (short *)(*pcVar1)();
      return psVar6;
    }
    FUN_006a5e40(iVar2,0,0x7f0504,0x14b);
  }
  return (short *)0x0;
}

