
undefined4 FUN_006f17c0(byte param_1,char *param_2)

{
  char cVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar8;
  ushort *puVar9;
  CHAR local_154 [260];
  undefined4 *local_50;
  undefined4 local_4c [16];
  undefined4 *local_c;
  ushort *local_8;
  
  local_8 = (ushort *)0x0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar4 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = local_50;
    if (local_8 != (ushort *)0x0) {
      FUN_006ab060(&local_8);
    }
    wsprintfA(local_154,s_cMf32__RecDel_File___s__Sect__s_N_007efb40,(int)local_c + 0x231,
              s_M_ANY_007ef0a4 + (uint)param_1 * 10,param_2);
    iVar5 = FUN_006ad4d0(s_E__Ourlib_Mf32int_cpp_007efaa4,0x144,0,iVar4,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    FUN_006a5e40(iVar4,0,0x7efaa4,0x146);
    return 0;
  }
  uVar7 = 0xffffffff;
  pcVar8 = param_2;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_8 = (ushort *)FUN_006aac10(~uVar7 + 0x17);
  *(byte *)local_8 = param_1;
  iVar4 = -1;
  pcVar8 = param_2;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_8[0xb] = ~(ushort)iVar4 - 1;
  uVar2 = local_8[0xb];
  puVar9 = local_8 + 0xc;
  for (uVar7 = (uint)(int)(short)uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)puVar9 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    puVar9 = puVar9 + 2;
  }
  for (uVar7 = (int)(short)uVar2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(char *)puVar9 = *param_2;
    param_2 = param_2 + 1;
    puVar9 = (ushort *)((int)puVar9 + 1);
  }
  FUN_00751100((uint *)*local_c,local_8);
  if (local_8 != (ushort *)0x0) {
    FUN_006ab060(&local_8);
  }
  DAT_00858df8 = local_50;
  return 1;
}

