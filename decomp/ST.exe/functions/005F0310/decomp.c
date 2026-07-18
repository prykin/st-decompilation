
void __fastcall FUN_005f0310(void *param_1)

{
  if (((*(int *)((int)param_1 + 0x321) == 0x15) && ((*(byte *)((int)param_1 + 0x31c) & 1) != 0)) &&
     (*(char *)((int)param_1 + 0x24f) == '\0')) {
    thunk_FUN_005ecfe0(param_1,(uint)*(byte *)((int)param_1 + 0x325),-1,-1,-1,0);
    *(undefined1 *)((int)param_1 + 800) = 0;
  }
  return;
}

