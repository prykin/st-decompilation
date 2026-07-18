
void __thiscall thunk_FUN_00620a00(void *this,int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int aiStack_10 [3];
  
  uVar1 = *(uint *)(DAT_00802a38 + 0xe4);
  if (DAT_0080874d == param_3) {
    return;
  }
  if (*(uint *)((int)this + 0xe5) <= uVar1) {
    uVar2 = thunk_FUN_00620b20(this,uVar1,param_1,param_2);
    if (((-1 < (int)uVar2) ||
        (uVar2 = thunk_FUN_00620c50(this,uVar1,param_1,param_2,param_3), (int)uVar2 < 0)) &&
       (uVar2 != 2)) {
      return;
    }
    if (DAT_0080874e == '\x01') {
      iVar3 = 0x95;
    }
    else if (DAT_0080874e == '\x02') {
      iVar3 = 0x96;
    }
    else {
      if (DAT_0080874e != '\x03') {
        return;
      }
      iVar3 = 0x97;
    }
    aiStack_10[0] = -1;
    aiStack_10[1] = 0xffffffff;
    aiStack_10[2] = 0;
    thunk_FUN_00568dd0(&DAT_00807658,6,(char *)0x0,iVar3,aiStack_10,0);
    thunk_FUN_00620da0(this,param_1,param_2,0x8e);
    *(uint *)((int)this + 0xe5) = uVar1 + 0xfa;
    return;
  }
  return;
}

