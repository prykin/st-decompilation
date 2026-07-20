
undefined4 FUN_004d7570(char param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = (int)param_1;
  iVar4 = param_2 * 0x44;
  *(undefined4 *)(&g_playerRuntime[iVar2].field_0x7f2 + iVar4) = 0;
  do {
    uVar1 = *(uint *)(&g_playerRuntime[iVar2].field_0x7f2 + iVar4);
    if (*(uint *)(&g_playerRuntime[iVar2].field_0x7fa + iVar4) <= uVar1)
    goto cf_common_exit_004D766D;
    piVar3 = (int *)(*(int *)(&g_playerRuntime[iVar2].field_0x7f6 + iVar4) * uVar1 +
                    *(int *)(&g_playerRuntime[iVar2].field_0x80a + iVar4));
    *(uint *)(&g_playerRuntime[iVar2].field_0x7f2 + iVar4) = uVar1 + 1;
    if (piVar3 == (int *)0x0) goto cf_common_exit_004D766D;
  } while (*piVar3 != param_3);
  *(int *)(&g_playerRuntime[iVar2].field_0x80e + iVar4) =
       *(int *)(&g_playerRuntime[iVar2].field_0x80e + iVar4) - piVar3[1];
  *(int *)(&g_playerRuntime[iVar2].field_0x812 + iVar4) =
       *(int *)(&g_playerRuntime[iVar2].field_0x812 + iVar4) - piVar3[2];
  *(int *)(&g_playerRuntime[iVar2].field_0x816 + iVar4) =
       *(int *)(&g_playerRuntime[iVar2].field_0x816 + iVar4) - piVar3[3];
  *(int *)(&g_playerRuntime[iVar2].field_0x81a + iVar4) =
       *(int *)(&g_playerRuntime[iVar2].field_0x81a + iVar4) - piVar3[4];
  if (*(int *)(&g_playerRuntime[iVar2].field_0x80e + iVar4) < 0) {
    *(undefined4 *)(&g_playerRuntime[iVar2].field_0x80e + iVar4) = 0;
  }
  if (*(int *)(&g_playerRuntime[iVar2].field_0x812 + iVar4) < 0) {
    *(undefined4 *)(&g_playerRuntime[iVar2].field_0x812 + iVar4) = 0;
  }
  if (*(int *)(&g_playerRuntime[iVar2].field_0x816 + iVar4) < 0) {
    *(undefined4 *)(&g_playerRuntime[iVar2].field_0x816 + iVar4) = 0;
  }
  if (*(int *)(&g_playerRuntime[iVar2].field_0x81a + iVar4) < 0) {
    *(undefined4 *)(&g_playerRuntime[iVar2].field_0x81a + iVar4) = 0;
  }
  FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)(&g_playerRuntime[iVar2].field_0x7ee + iVar4),
               *(int *)(&g_playerRuntime[iVar2].field_0x7f2 + iVar4) - 1);
cf_common_exit_004D766D:
  thunk_FUN_004d78e0(param_1);
  return 0;
}

