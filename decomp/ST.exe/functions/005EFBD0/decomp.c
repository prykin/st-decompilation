
void __thiscall
FUN_005efbd0(void *this,int param_1,short param_2,short param_3,short param_4,short param_5)

{
  int iVar1;

  if (*(int *)((int)this + 0x2a7) == param_1) {
    iVar1 = thunk_FUN_005ecfe0(this,(int)param_4,(int)param_2,(int)param_3,(int)param_4,(int)param_5
                              );
    if (iVar1 == 0) {
      thunk_FUN_005ef6c0(this,1);
    }
  }
  return;
}

