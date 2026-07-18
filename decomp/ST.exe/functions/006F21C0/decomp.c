
int FUN_006f21c0(byte param_1,char *param_2)

{
  char cVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar7;
  ushort *puVar8;
  CHAR local_158 [260];
  undefined4 *local_54;
  undefined4 local_50 [16];
  undefined4 *local_10;
  undefined4 local_c;
  ushort *local_8;
  
  local_8 = (ushort *)0x0;
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar4 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = local_54;
    if (local_8 != (ushort *)0x0) {
      FUN_006ab060(&local_8);
    }
    wsprintfA(local_158,s_cMf32__RecChk_File___s__Sect__s_N_007efbf8,(int)local_10 + 0x231,
              s_M_ANY_007ef0a4 + (uint)param_1 * 10,param_2);
    iVar5 = FUN_006ad4d0(s_E__Ourlib_Mf32int_cpp_007efaa4,0x261,0,iVar4,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    FUN_006a5e40(iVar4,0,0x7efaa4,0x263);
    return iVar4;
  }
  uVar6 = 0xffffffff;
  pcVar7 = param_2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_8 = (ushort *)FUN_006aac10(~uVar6 + 0x17);
  *(byte *)local_8 = param_1;
  iVar4 = -1;
  pcVar7 = param_2;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_8[0xb] = ~(ushort)iVar4 - 1;
  uVar2 = local_8[0xb];
  puVar8 = local_8 + 0xc;
  for (uVar6 = (uint)(int)(short)uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)puVar8 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    puVar8 = puVar8 + 2;
  }
  for (uVar6 = (int)(short)uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(char *)puVar8 = *param_2;
    param_2 = param_2 + 1;
    puVar8 = (ushort *)((int)puVar8 + 1);
  }
  iVar4 = FUN_00751b60(*(int *)*local_10,local_8,&local_c);
  if (local_8 != (ushort *)0x0) {
    FUN_006ab060(&local_8);
  }
  DAT_00858df8 = local_54;
  return iVar4;
}

