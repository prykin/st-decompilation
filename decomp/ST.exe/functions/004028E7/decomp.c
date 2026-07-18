
int __thiscall
thunk_FUN_0061c910(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,
                  int param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_8;
  
  iVar1 = param_7;
  iVar2 = param_2;
  uStack_8 = 0;
  if (param_1 == 1) {
    iVar3 = thunk_FUN_0061b340(this,param_3,param_4,param_5,param_6,param_7,param_8,&param_7);
    if (iVar3 != 0) {
      *(undefined4 *)((int)this + 0x9f) = *(undefined4 *)((int)this + 0x40);
      *(undefined4 *)((int)this + 0xa3) = *(undefined4 *)((int)this + 0x44);
      *(int *)((int)this + 0xa7) = param_7;
      *(undefined4 *)((int)this + 0x34) = 0;
      return 1;
    }
    *(int *)((int)this + 0x9f) = param_6;
    *(int *)((int)this + 0xa3) = iVar1;
    *(int *)((int)this + 0xa7) = param_7;
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    if (*(int **)((int)this + 0x34) != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)((int)this + 0x34) + 0xe0))
                        (*(undefined4 *)((int)this + 0x38),(int)&param_2 + 2,(int)&param_1 + 2,
                         (int)&param_8 + 2,&uStack_8);
      if (iVar2 == 0) {
        *(int *)((int)this + 0x44) = (int)param_1._2_2_;
        *(int *)((int)this + 0xa3) = (int)param_1._2_2_;
        *(int *)((int)this + 0x40) = (int)param_2._2_2_;
        *(int *)((int)this + 0x48) = param_8._2_2_ + 0x28;
        *(undefined4 *)((int)this + 0x3c) = uStack_8;
        *(int *)((int)this + 0x9f) = (int)param_2._2_2_;
        *(int *)((int)this + 0xa7) = param_8._2_2_ + 0x28;
        iVar2 = thunk_FUN_006195e0(2);
        return 6 - (uint)(iVar2 != 0);
      }
    }
    return 6;
  }
  return iVar2;
}

