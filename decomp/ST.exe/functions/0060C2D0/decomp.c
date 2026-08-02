
void __fastcall FUN_0060c2d0(STJellyGunC *param_1)

{
  int iVar1;
  STJellyGunC *local_8;

  local_8 = param_1;
  iVar1 = STPlaySystemC::sub_006E62D0
                    (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1->field_0201,
                     (int *)&local_8);
  if ((iVar1 != -4) && (local_8 != nullptr)) {
    param_1->field_0221 = local_8;
    return;
  }
  thunk_FUN_006099a0(param_1);
  return;
}

