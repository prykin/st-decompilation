
void FUN_006765b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &g_playerRuntime[DAT_0080874d].field598_0x2eb;
  puVar3 = &DAT_0080e83b;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &g_playerRuntime[DAT_0080874d].field612_0x2ff;
  puVar3 = &DAT_0080e84f;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &g_playerRuntime[DAT_0080874d].field640_0x327;
  puVar3 = &DAT_0080e863;
  for (iVar1 = 0x9b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &g_playerRuntime[DAT_0080874d].field1254_0x593;
  puVar3 = &DAT_0080eacf;
  for (iVar1 = 0x6a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &g_playerRuntime[DAT_0080874d].field1672_0x73b;
  puVar3 = &DAT_0080ec77;
  for (iVar1 = 0x26; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar2 + 2);
  return;
}

