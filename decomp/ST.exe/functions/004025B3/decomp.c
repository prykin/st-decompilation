
void __fastcall thunk_FUN_0056ef50(int param_1)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  uint uStack_8;
  
  if (*(char *)(param_1 + 0x1195) != '\0') {
    bVar2 = 0;
    uStack_8 = 0;
    do {
      iVar3 = param_1 + uStack_8 * 0x51;
      if ((*(char *)(iVar3 + 0x11c9) == *(char *)(param_1 + 0x112d)) &&
         (*(char *)(iVar3 + 0x11a7) == '\0')) {
        *(undefined1 *)(param_1 + 0x112e) = *(undefined1 *)(uStack_8 * 0x51 + 0x11c8 + param_1);
        return;
      }
      bVar2 = bVar2 + 1;
      uStack_8 = (uint)bVar2;
    } while (bVar2 < 8);
  }
  *(undefined1 *)(param_1 + 0x112d) = 0xff;
  *(undefined1 *)(param_1 + 0x112e) = 0;
  pcVar1 = (char *)(param_1 + 0x11c9);
  iVar3 = 8;
  do {
    if (((*pcVar1 != -1) && (pcVar1[-1] != '\0')) && (pcVar1[-0x22] == '\0')) {
      *(char *)(param_1 + 0x112d) = *pcVar1;
      *(char *)(param_1 + 0x112e) = pcVar1[-1];
      *(undefined1 *)(param_1 + 0x112f) = 0;
    }
    pcVar1 = pcVar1 + 0x51;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  thunk_FUN_0056ee90(param_1);
  return;
}

