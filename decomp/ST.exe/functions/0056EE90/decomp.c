
void __fastcall FUN_0056ee90(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 local_8;
  
  if (*(char *)(param_1 + 0x112d) == -1) {
    bVar2 = 0;
    *(undefined1 *)(param_1 + 0x112d) = 0;
    *(undefined1 *)(param_1 + 0x112e) = 1;
    local_8 = 0;
    while( true ) {
      iVar1 = param_1 + local_8 * 0x51;
      if ((*(char *)(iVar1 + 0x11c9) != -1) && (*(char *)(iVar1 + 0x11c8) != '\0')) break;
      bVar2 = bVar2 + 1;
      local_8 = (uint)bVar2;
      if (7 < bVar2) {
        return;
      }
    }
    iVar1 = param_1 + local_8 * 0x51;
    *(undefined1 *)(param_1 + 0x112d) = *(undefined1 *)(iVar1 + 0x11c9);
    *(undefined1 *)(param_1 + 0x112e) = *(undefined1 *)(iVar1 + 0x11c8);
    *(undefined1 *)(param_1 + 0x112f) = 1;
  }
  return;
}

