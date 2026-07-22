
void __fastcall FUN_005ccc30(AnonShape_005CCC30_E8B603E2 *param_1)

{
  int iVar1;

  iVar1 = *(int *)&param_1[0x9b].field_0x14;
  param_1->field_002D = 0x20;
  if (iVar1 != 0) {
    param_1->field_0031 = 1;
    FUN_006e6080(param_1,2,iVar1,(undefined4 *)&param_1->field_0x1d);
  }
  if (g_startSystem_0081176C->field_0550 != 0) {
    param_1->field_0031 = 1;
    FUN_006e6080(param_1,2,g_startSystem_0081176C->field_0550,(undefined4 *)&param_1->field_0x1d);
  }
  if (g_startSystem_0081176C->field_054C != 0) {
    param_1->field_002D = 0x29;
    param_1->field_0031 = 9;
    FUN_006e6080(param_1,2,g_startSystem_0081176C->field_054C,(undefined4 *)&param_1->field_0x1d);
  }
  thunk_FUN_005c5ca0((AnonShape_005C5CA0_A6776207 *)param_1);
  return;
}

