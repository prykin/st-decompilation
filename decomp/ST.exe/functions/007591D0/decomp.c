
void FUN_007591d0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *param_1 = 0;
  uVar1 = FUN_00760390();
  puVar2 = (undefined4 *)FUN_007602e0(param_1,0x50);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_007603a0();
    RaiseInternalException(0x35,DAT_007ed77c,s_E__DKW_JPG_C_jmemmgr_c_007f2dc8,0x427);
  }
  *puVar2 = FUN_00759290;
  puVar2[1] = FUN_007593e0;
  puVar2[2] = FUN_00759480;
  puVar2[3] = FUN_00759530;
  puVar2[4] = FUN_007595f0;
  puVar2[5] = FUN_00759660;
  puVar2[6] = FUN_007596d0;
  puVar2[7] = FUN_00759860;
  puVar2[8] = FUN_00759a80;
  puVar2[9] = FUN_00759ca0;
  puVar2[10] = FUN_00759d90;
  puVar2[0xb] = uVar1;
  puVar3 = puVar2 + 0xf;
  iVar4 = 2;
  do {
    puVar3[-2] = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + -1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0x50;
  *param_1 = puVar2;
  return;
}

