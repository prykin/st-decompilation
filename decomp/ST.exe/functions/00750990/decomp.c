
int FUN_00750990(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  byte *pbVar8;
  void *unaff_EDI;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  byte local_55c [256];
  byte local_45c [256];
  byte local_35c [256];
  char local_25c [260];
  byte local_158 [260];
  InternalExceptionFrame local_54;
  undefined4 *local_10;
  undefined4 *local_c;
  byte local_8 [4];
  
  FUN_006b77e0((char *)param_1,param_1);
  FUN_0072e730(param_1,local_8,local_55c,local_45c,local_35c);
  iVar4 = __strcmpi((char *)local_35c,&DAT_007c7078);
  if ((iVar4 == 0) || (iVar4 = __strcmpi((char *)local_35c,&DAT_007c7080), iVar4 == 0)) {
    __makepath((char *)local_158,(char *)local_8,(char *)local_55c,(char *)local_45c,&DAT_007c7078);
  }
  else {
    uVar6 = 0xffffffff;
    do {
      pbVar8 = param_1;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pbVar8 = param_1 + 1;
      bVar1 = *param_1;
      param_1 = pbVar8;
    } while (bVar1 != 0);
    uVar6 = ~uVar6;
    pbVar8 = pbVar8 + -uVar6;
    pbVar11 = local_158;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_007c7078;
    do {
      pcVar10 = pcVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar9 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar4 = -1;
    pbVar8 = local_158;
    do {
      pbVar11 = pbVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pbVar11 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar1 != 0);
    pbVar8 = (byte *)(pcVar10 + -uVar6);
    pbVar11 = pbVar11 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
  }
  local_10 = (undefined4 *)FUN_00753ae0((LPCSTR)local_158,param_2);
  if (local_10 == (undefined4 *)0x0) {
    return -10;
  }
  local_c = (undefined4 *)0x0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar4 = __setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    FUN_007532a0(local_10);
    if (local_c != (undefined4 *)0x0) {
      FUN_007532a0(local_c);
    }
    FID_conflict__remove(local_25c);
    RaiseInternalException(iVar4,0,s_E__DKW_DB_C_btcompac_c_007f2acc,0xbb);
    return iVar4;
  }
  __makepath(local_25c,(char *)local_8,(char *)local_55c,(char *)local_45c,&DAT_007f2ae4);
  puVar3 = local_10;
  puVar5 = FUN_007537c0(local_25c,param_2,*(undefined2 *)(local_10[3] + 0x2e));
  local_c = puVar5;
  FUN_00750ba0((int)puVar5,(int)puVar3);
  FUN_007532a0(puVar3);
  FUN_007532a0(puVar5);
  FID_conflict__remove((char *)local_158);
  FUN_00761960(local_25c,(LPCSTR)local_158);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

