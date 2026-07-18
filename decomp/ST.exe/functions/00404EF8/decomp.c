
void __thiscall
thunk_FUN_006a0da0(void *this,uint param_1,int param_2,uint param_3,int param_4,int param_5,
                  int param_6)

{
  uint uVar1;
  ushort auStack_c [4];
  
  if (param_5 == 0) {
    auStack_c[0] = 0;
    auStack_c[1] = 0;
    auStack_c[2] = 0;
    uVar1 = thunk_FUN_006a29b0(0,1,param_6,2,0);
    auStack_c[0] = (short)uVar1;
    uVar1 = thunk_FUN_006a2bf0(2,0,1,param_6,param_6);
    auStack_c[2] = (ushort)uVar1;
    thunk_FUN_006a2700(*(int **)((int)this + 8),param_1,param_2,0,param_3,param_4,auStack_c,
                       (undefined *)0x0,0);
  }
  return;
}

