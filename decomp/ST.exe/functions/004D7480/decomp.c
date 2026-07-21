
undefined4
FUN_004d7480(char param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_18 = param_3;
  local_8 = param_7;
  iVar1 = (int)param_1;
  local_c = param_6;
  local_10 = param_5;
  local_14 = param_4;
  iVar2 = param_2 * 0x44;
  Library::DKW::TBL::FUN_006ae1c0((uint *)(&g_playerRuntime[iVar1].field_0x7ee + iVar2),&local_18);
  *(int *)(&g_playerRuntime[iVar1].field_0x80e + iVar2) =
       *(int *)(&g_playerRuntime[iVar1].field_0x80e + iVar2) + param_4;
  *(int *)(&g_playerRuntime[iVar1].field_0x812 + iVar2) =
       *(int *)(&g_playerRuntime[iVar1].field_0x812 + iVar2) + param_5;
  *(int *)(&g_playerRuntime[iVar1].field_0x816 + iVar2) =
       *(int *)(&g_playerRuntime[iVar1].field_0x816 + iVar2) + param_6;
  *(int *)(&g_playerRuntime[iVar1].field_0x81a + iVar2) =
       *(int *)(&g_playerRuntime[iVar1].field_0x81a + iVar2) + param_7;
  thunk_FUN_004d78e0(param_1);
  return 0;
}

