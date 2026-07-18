
void __fastcall FUN_0062f7a0(void *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    thunk_FUN_0062f6c0(param_1,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  if (((-1 < *(int *)((int)param_1 + 0x1d5)) || (-1 < *(int *)((int)param_1 + 0x1d9))) ||
     (-1 < *(int *)((int)param_1 + 0x1dd))) {
    thunk_FUN_00495ff0((short)*(int *)((int)param_1 + 0x1d5),
                       (short)*(undefined4 *)((int)param_1 + 0x1d9),
                       (short)*(undefined4 *)((int)param_1 + 0x1dd),1,(int)param_1);
    *(undefined4 *)((int)param_1 + 0x1d5) = 0xffffffff;
    *(undefined4 *)((int)param_1 + 0x1d9) = 0xffffffff;
    *(undefined4 *)((int)param_1 + 0x1dd) = 0xffffffff;
  }
  return;
}

