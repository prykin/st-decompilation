
undefined4 thunk_FUN_004d73b0(char param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (uint *)(&DAT_007f560e + param_1 * 0xa62);
  puVar3 = (undefined4 *)((int)&DAT_007f55fa + param_1 * 0xa62);
  for (iVar1 = 0x66; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar1 = 6;
  do {
    puVar2[-5] = 100;
    Library::DKW::TBL::FUN_006ae290(puVar2,10,0x14,10);
    puVar2 = puVar2 + 0x11;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

