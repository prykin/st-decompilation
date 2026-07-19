
undefined4 __thiscall thunk_FUN_00615fd0(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_c;
  short sStack_6;
  
  iVar2 = 0;
  uStack_c = 0;
  *(undefined4 *)((int)this + 0x248) = 0xffffffff;
  if (param_1 != 1) {
    if (param_1 < 2) {
      return param_2;
    }
    if (3 < param_1) {
      return param_2;
    }
    if ((*(int **)((int)this + 0x2ff) != (int *)0x0) &&
       (iVar1 = (**(code **)(**(int **)((int)this + 0x2ff) + 0xe0))
                          (*(undefined4 *)((int)this + 0x303),(int)&param_2 + 2,(int)&param_1 + 2,
                           &sStack_6,&uStack_c), iVar1 == 0)) {
      if (*(int *)((int)this + 0x1f7) == 2) {
        if (*(int *)((int)this + 0x2fb) == *(int *)((int)this + 0x207)) {
          thunk_FUN_00601d10((int)*(short *)((int)this + 0x201),*(undefined4 *)((int)this + 0x21b),
                             *(int *)((int)this + 0x2ff),(short)*(undefined4 *)((int)this + 0x1fb),
                             *(undefined2 *)((int)this + 0x1ff),0xb0,0x12a);
          iVar2 = 1;
        }
        else {
          thunk_FUN_00601d10((int)*(short *)((int)this + 0x201),*(undefined4 *)((int)this + 0x21b),
                             *(int *)((int)this + 0x2ff),(short)*(undefined4 *)((int)this + 0x1fb),
                             *(undefined2 *)((int)this + 0x1ff),0xb0,0x110);
        }
      }
      *(int *)((int)this + 0x30f) = (int)param_1._2_2_;
      *(int *)((int)this + 0x22f) = (int)param_1._2_2_;
      *(int *)((int)this + 0x30b) = (int)param_2._2_2_;
      *(int *)((int)this + 0x313) = (int)sStack_6;
      *(undefined4 *)((int)this + 0x307) = uStack_c;
      *(int *)((int)this + 0x22b) = (int)param_2._2_2_;
      *(int *)((int)this + 0x233) = (int)sStack_6;
      iVar2 = STGenBombC::LoadImagSpr(this,0,iVar2);
      if (iVar2 != 0) {
        if (*(int *)((int)this + 0x1f7) == 0) {
          thunk_FUN_00617560(this,0x478);
          return 7;
        }
        if (*(int *)((int)this + 0x1f7) != 1) {
          return 7;
        }
        thunk_FUN_00617560(this,0x48c);
        return 7;
      }
    }
    goto LAB_006161d7;
  }
  *(undefined4 *)((int)this + 0x22f) = *(undefined4 *)((int)this + 0x30f);
  *(undefined4 *)((int)this + 0x22b) = *(undefined4 *)((int)this + 0x30b);
  *(undefined4 *)((int)this + 0x233) = *(undefined4 *)((int)this + 0x313);
  *(undefined4 *)((int)this + 0x2ff) = 0;
  if (*(int *)((int)this + 0x1f7) == 0) {
    iVar2 = 0x478;
LAB_006161a8:
    thunk_FUN_00617560(this,iVar2);
  }
  else if (*(int *)((int)this + 0x1f7) == 1) {
    iVar2 = 0x48c;
    goto LAB_006161a8;
  }
  iVar2 = STGenBombC::LoadImagSpr(this,0,0);
  if (iVar2 != 0) {
    *(undefined4 *)((int)this + 0x307) = uStack_c;
    return 7;
  }
LAB_006161d7:
  thunk_FUN_0060ec00(this);
  return 9;
}

