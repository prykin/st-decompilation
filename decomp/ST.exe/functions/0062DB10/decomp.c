
void FUN_0062db10(int *param_1)

{
  int iVar1;

  if (param_1 != (int *)0x0) {
    iVar1 = STPlaySystemC::sub_006E62D0
                      (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1,(int *)&param_1)
    ;
    if (iVar1 != -4) {
      thunk_FUN_005fb170((STColl3C *)param_1);
    }
  }
  return;
}

