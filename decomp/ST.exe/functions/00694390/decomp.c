
void __thiscall FUN_00694390(void *this,int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;

  puVar1 = (undefined1 *)thunk_FUN_00693e60(this,param_1);
  if (puVar1 != (undefined1 *)0x0) {
    if (param_2 != -1) {
      puVar1[0x21] = (char)param_2;
    }
    if (param_3 != -1) {
      *puVar1 = (char)param_3;
    }
  }
  return;
}

