
void FUN_0043e420(undefined4 *param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = &g_playerRuntime[param_2].field19_0x2b;
  for (iVar1 = 0x4e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

