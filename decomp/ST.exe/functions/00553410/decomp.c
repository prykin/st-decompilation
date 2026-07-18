
void __cdecl
FUN_00553410(int param_1,int param_2,int param_3,int param_4,int param_5,undefined1 param_6)

{
  int iVar1;
  
  if ((((param_1 < 0) || (param_4 <= param_1)) || (param_2 < 0)) || (param_5 <= param_2)) {
    iVar1 = -1;
  }
  else {
    iVar1 = param_2 * param_4 + param_1;
  }
  *(undefined1 *)(iVar1 + param_3) = param_6;
  if (DAT_00802a50 != (code *)0x0) {
    (*DAT_00802a50)(param_1,param_2,param_3);
  }
  return;
}

