
undefined4 * __cdecl FUN_0070c390(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (*(short *)(param_1 + 0xe) != 8) {
    return (undefined4 *)0x0;
  }
  if (iVar4 == 0) {
    iVar4 = 0x100;
  }
  puVar1 = Library::DKW::LIB::FUN_006aac10(iVar4 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (iVar4 != 0) {
    puVar3 = (undefined1 *)((int)puVar1 + 2);
    puVar2 = (undefined1 *)(param_1 + 0x29);
    do {
      puVar3[-2] = puVar2[-1];
      puVar3[-1] = *puVar2;
      *puVar3 = puVar2[1];
      puVar3 = puVar3 + 4;
      iVar4 = iVar4 + -1;
      puVar2 = puVar2 + 4;
    } while (iVar4 != 0);
  }
  return puVar1;
}

