
void __thiscall FUN_004da340(void *this,byte *param_1)

{
  param_1[1] = 0xff;
  param_1[2] = 0xff;
  param_1[3] = 0xff;
  param_1[4] = 0xff;
  param_1[5] = 0xff;
  param_1[6] = 0xff;
  param_1[7] = 0xff;
  param_1[8] = 0xff;
  *param_1 = 0;
  if ((*(int *)((int)this + 0x5ac) == 0x3c) || (*(int *)((int)this + 0x5ac) == 0x53)) {
    thunk_FUN_004da390(g_allPlayers_007FA174,*(uint *)((int)this + 0x24),param_1,1);
  }
  return;
}

