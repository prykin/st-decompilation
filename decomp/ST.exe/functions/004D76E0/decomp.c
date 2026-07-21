
undefined4
FUN_004d76e0(char param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;

  iVar2 = (int)param_1;
  iVar3 = param_2 * 0x44;
  *(undefined4 *)(&g_playerRuntime[iVar2].field_0x7f2 + iVar3) = 0;
  while (uVar1 = *(uint *)(&g_playerRuntime[iVar2].field_0x7f2 + iVar3),
        uVar1 < *(uint *)(&g_playerRuntime[iVar2].field_0x7fa + iVar3)) {
    piVar4 = (int *)(*(int *)(&g_playerRuntime[iVar2].field_0x7f6 + iVar3) * uVar1 +
                    *(int *)(&g_playerRuntime[iVar2].field_0x80a + iVar3));
    *(uint *)(&g_playerRuntime[iVar2].field_0x7f2 + iVar3) = uVar1 + 1;
    if (piVar4 == (int *)0x0) break;
    if (*piVar4 == param_3) {
      *(int *)(&g_playerRuntime[iVar2].field_0x80e + iVar3) =
           *(int *)(&g_playerRuntime[iVar2].field_0x80e + iVar3) - piVar4[1];
      *(int *)(&g_playerRuntime[iVar2].field_0x812 + iVar3) =
           *(int *)(&g_playerRuntime[iVar2].field_0x812 + iVar3) - piVar4[2];
      *(int *)(&g_playerRuntime[iVar2].field_0x816 + iVar3) =
           *(int *)(&g_playerRuntime[iVar2].field_0x816 + iVar3) - piVar4[3];
      *(int *)(&g_playerRuntime[iVar2].field_0x81a + iVar3) =
           *(int *)(&g_playerRuntime[iVar2].field_0x81a + iVar3) - piVar4[4];
      if (*(int *)(&g_playerRuntime[iVar2].field_0x80e + iVar3) < 0) {
        *(undefined4 *)(&g_playerRuntime[iVar2].field_0x80e + iVar3) = 0;
      }
      if (*(int *)(&g_playerRuntime[iVar2].field_0x812 + iVar3) < 0) {
        *(undefined4 *)(&g_playerRuntime[iVar2].field_0x812 + iVar3) = 0;
      }
      if (*(int *)(&g_playerRuntime[iVar2].field_0x816 + iVar3) < 0) {
        *(undefined4 *)(&g_playerRuntime[iVar2].field_0x816 + iVar3) = 0;
      }
      if (*(int *)(&g_playerRuntime[iVar2].field_0x81a + iVar3) < 0) {
        *(undefined4 *)(&g_playerRuntime[iVar2].field_0x81a + iVar3) = 0;
      }
      piVar4[2] = param_5;
      piVar4[3] = param_6;
      piVar4[1] = param_4;
      piVar4[4] = param_7;
      *(int *)(&g_playerRuntime[iVar2].field_0x80e + iVar3) =
           *(int *)(&g_playerRuntime[iVar2].field_0x80e + iVar3) + param_4;
      *(int *)(&g_playerRuntime[iVar2].field_0x812 + iVar3) =
           *(int *)(&g_playerRuntime[iVar2].field_0x812 + iVar3) + piVar4[2];
      *(int *)(&g_playerRuntime[iVar2].field_0x816 + iVar3) =
           *(int *)(&g_playerRuntime[iVar2].field_0x816 + iVar3) + piVar4[3];
      *(int *)(&g_playerRuntime[iVar2].field_0x81a + iVar3) =
           *(int *)(&g_playerRuntime[iVar2].field_0x81a + iVar3) + piVar4[4];
      thunk_FUN_004d78e0(param_1);
      return 0;
    }
  }
  thunk_FUN_004d7480(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return 0;
}

