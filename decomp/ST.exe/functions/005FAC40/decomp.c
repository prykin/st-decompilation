
void __thiscall
FUN_005fac40(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (*(int *)((int)this + 0x2e6) != 0) {
    if (param_1 == 0) {
      param_1 = param_4;
      param_4 = param_5;
      param_5 = param_6;
    }
    else {
      thunk_FUN_00416270(this,(undefined2 *)&param_1,&param_4,&param_5);
    }
    if (param_2 == 1) {
      *(int *)(*(int *)((int)this + 0x2e6) + 0x14) = (int)(short)param_1;
      *(int *)(*(int *)((int)this + 0x2e6) + 0x18) = (int)(short)param_4;
      *(int *)(*(int *)((int)this + 0x2e6) + 0x1c) = (short)param_5 + -0x32;
      *(undefined4 *)(*(int *)((int)this + 0x2e6) + 0x68) = PTR_00802a38->field_00E4;
      *(undefined4 *)(*(int *)((int)this + 0x2e6) + 100) = 9;
      *(undefined4 *)(*(int *)((int)this + 0x2e6) + 0x60) =
           *(undefined4 *)(*(int *)((int)this + 0x2e6) + 0x1c);
      *(undefined4 *)(*(int *)((int)this + 0x2e6) + 0x34) =
           *(undefined4 *)(*(int *)((int)this + 0x2e6) + 0x14);
      *(undefined4 *)(*(int *)((int)this + 0x2e6) + 0x38) =
           *(undefined4 *)(*(int *)((int)this + 0x2e6) + 0x18);
      if (iVar1 == 0) {
        param_3 = *(int *)(*(int *)((int)this + 0x2e6) + 0x3c);
      }
      else {
        *(int *)(*(int *)((int)this + 0x2e6) + 0x3c) = param_3;
      }
      iVar1 = *(int *)((int)this + 0x2e6);
      iVar2 = *(int *)(iVar1 + 0x1c) - param_3;
      if (iVar2 != 0) {
        *(int *)(iVar1 + 0x50) = (*(int *)(iVar1 + 100) * 100) / iVar2 + 1;
        *(undefined4 *)(*(int *)((int)this + 0x2e6) + 0x54) =
             *(undefined4 *)(*(int *)((int)this + 0x2e6) + 0x50);
      }
    }
  }
  return;
}

