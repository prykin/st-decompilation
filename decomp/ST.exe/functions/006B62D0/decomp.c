
int FUN_006b62d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  puVar1 = FUN_006aac10(0xd0);
  *param_1 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return -2;
  }
  *puVar1 = 10;
  iVar2 = Ordinal_2(FUN_006b6230,param_1);
  if (iVar2 == -0x7788ffa6) {
    iVar2 = -2;
  }
  else if (iVar2 == 0) {
    return 0;
  }
  FUN_006a5e40(iVar2,DAT_007ed77c,0x7edbc4,0x103);
  return iVar2;
}

