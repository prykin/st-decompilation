
void __fastcall thunk_FUN_005ee670(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x124))(2000);
  if (iVar1 != 0) {
    thunk_FUN_005ec9f0(1);
    *(undefined1 *)((int)param_1 + 0x30e) = 0xff;
    *(undefined2 *)((int)param_1 + 0x30f) = 0;
    *(undefined1 *)((int)param_1 + 0x30d) = 1;
    *(undefined4 *)((int)param_1 + 0x23a) = 5;
  }
  return;
}

