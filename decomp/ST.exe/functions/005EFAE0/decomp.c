
undefined4 __thiscall FUN_005efae0(void *this,AnonShape_005EFAE0_B406B78B *param_1)

{
  int iVar1;

  if ((*(char *)((int)this + 0x24f) == '\0') &&
     (iVar1 = FUN_006e62d0(g_playSystem_00802A38,(int)param_1,(int *)&param_1), iVar1 != -4)) {
    *(undefined4 *)((int)this + 0x2a7) = param_1->field_0018;
    *(undefined2 *)((int)this + 0x2ab) = param_1->field_0032;
    *(undefined4 *)((int)this + 0x2a3) = param_1->field_0024;
    *(undefined1 *)((int)this + 0x24f) = 1;
    if (*(char *)((int)this + 800) == '\0') {
      return 1;
    }
    *(undefined1 *)((int)this + 800) = 0;
    return 1;
  }
  return 0;
}

