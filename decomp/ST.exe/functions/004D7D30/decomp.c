
undefined4 FUN_004d7d30(char param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar2 = (int)param_1;
  uVar4 = 0;
  iVar3 = param_2 * 0x44;
  if (param_4 <= *(int *)(&g_playerRuntime[iVar2].field_0x7e2 + iVar3)) {
    *(undefined4 *)(&g_playerRuntime[iVar2].field_0x7f2 + iVar3) = 0;
    do {
      uVar1 = *(uint *)(&g_playerRuntime[iVar2].field_0x7f2 + iVar3);
      if (*(uint *)(&g_playerRuntime[iVar2].field_0x7fa + iVar3) <= uVar1) {
        return 0;
      }
      piVar5 = (int *)(*(int *)(&g_playerRuntime[iVar2].field_0x7f6 + iVar3) * uVar1 +
                      *(int *)(&g_playerRuntime[iVar2].field_0x80a + iVar3));
      *(uint *)(&g_playerRuntime[iVar2].field_0x7f2 + iVar3) = uVar1 + 1;
      if (piVar5 == (int *)0x0) {
        return 0;
      }
    } while (*piVar5 != param_3);
    thunk_FUN_004d8940(param_1,param_4);
    *(int *)(&g_playerRuntime[iVar2].field_0x7e2 + iVar3) =
         *(int *)(&g_playerRuntime[iVar2].field_0x7e2 + iVar3) - param_4;
    *(int *)(&g_playerRuntime[iVar2].field_0x812 + iVar3) =
         *(int *)(&g_playerRuntime[iVar2].field_0x812 + iVar3) - param_4;
    piVar5[2] = piVar5[2] - param_4;
    uVar4 = 1;
    if (*(int *)(&g_playerRuntime[iVar2].field_0x7e2 + iVar3) == 0) {
      thunk_FUN_004d78e0(param_1);
    }
  }
  return uVar4;
}

