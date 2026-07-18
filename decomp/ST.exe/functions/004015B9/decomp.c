
void thunk_FUN_00581060(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_24 [4];
  undefined4 uStack_14;
  
  if (DAT_008117bc != (undefined4 *)0x0) {
    puVar2 = auStack_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    uStack_14 = 0x5de2;
    (**(code **)*DAT_008117bc)(auStack_24);
  }
  return;
}

