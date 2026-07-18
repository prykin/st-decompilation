
int FUN_006b1300(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *unaff_ESI;
  undefined4 uVar3;
  undefined4 local_48 [16];
  int local_8;
  
  local_8 = 0;
  puVar1 = FUN_006aac10(0x238);
  *param_1 = (int)puVar1;
  uVar3 = DAT_00858df8;
  if (puVar1 == (undefined4 *)0x0) {
    return -2;
  }
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar3);
  if (iVar2 == 0) {
    puVar1 = FUN_006aac10(0x658);
    *(undefined4 **)(*param_1 + 0x1bc) = puVar1;
    puVar1 = FUN_006aac10(0x658);
    *(undefined4 **)(*param_1 + 0x1c0) = puVar1;
    FUN_006b1680((int *)*param_1,param_2);
    DAT_00858df8 = (undefined1 *)uVar3;
    iVar2 = local_8;
  }
  else {
    DAT_00858df8 = (undefined1 *)uVar3;
    local_8 = iVar2;
    FUN_006ab060(param_1);
  }
  if (iVar2 != 0) {
    FUN_006a5e40(iVar2,DAT_007ed77c,0x7edac0,0x5c);
    return iVar2;
  }
  return 0;
}

