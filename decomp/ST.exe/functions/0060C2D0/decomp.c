
void __fastcall FUN_0060c2d0(STJellyGunC *param_1)

{
  int iVar1;
  STJellyGunC *local_8;

  local_8 = param_1;
  iVar1 = FUN_006e62d0(g_playSystem_00802A38,param_1->field_0201,(int *)&local_8);
  if ((iVar1 != -4) && (local_8 != (STJellyGunC *)0x0)) {
    param_1->field_0221 = local_8;
    return;
  }
  thunk_FUN_006099a0(param_1);
  return;
}

