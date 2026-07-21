
uint __thiscall FUN_0063c170(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_c;
  short local_8;
  short local_6;
  
  iVar3 = param_1 - *(int *)((int)this + 0x28e);
  *(undefined4 *)((int)this + 0x27a) = *(undefined4 *)((int)this + 0x26e);
  iVar3 = (iVar3 + 0x40) * iVar3 * 8;
  iVar3 = (int)*(short *)((int)this + 0x251) + ((int)(iVar3 + (iVar3 >> 0x1f & 0x3fU)) >> 6);
  *(int *)((int)this + 0x26e) = iVar3;
  if (iVar3 < 0) {
    iVar1 = (short)(iVar3 / 200) + -1;
  }
  else {
    iVar1 = (int)(short)(iVar3 / 200);
  }
  if (0x18 < iVar1) {
    return 10;
  }
  uVar2 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                    ((AnonReceiver_00601500 *)((int)this + 899),*(int *)((int)this + 0x266),
                     *(int *)((int)this + 0x26a),iVar3,*(int *)((int)this + 0x272),
                     *(int *)((int)this + 0x276),*(int *)((int)this + 0x27a),
                     *(int *)((int)this + 0x235),50000,*(int *)((int)this + 0x25d),
                     *(undefined2 *)((int)this + 0x261),0xa8,0,0);
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      *(undefined4 *)((int)this + 0x266) = *(undefined4 *)((int)this + 0x3a3);
      *(undefined4 *)((int)this + 0x26a) = *(undefined4 *)((int)this + 0x3a7);
      *(undefined4 *)((int)this + 0x26e) = *(undefined4 *)((int)this + 0x3ab);
      *(undefined4 *)((int)this + 0x397) = 0;
      return 1;
    }
    if (uVar2 == 2) {
      if (*(int **)((int)this + 0x397) != (int *)0x0) {
        iVar3 = (**(code **)(**(int **)((int)this + 0x397) + 0xe0))
                          (*(undefined4 *)((int)this + 0x39b),(int)&param_1 + 2,&local_6,&local_8,
                           &local_c);
        if (iVar3 == 0) {
          *(int *)((int)this + 0x3a3) = (int)param_1._2_2_;
          *(int *)((int)this + 0x266) = (int)param_1._2_2_;
          *(int *)((int)this + 0x3a7) = (int)local_6;
          *(undefined4 *)((int)this + 0x39f) = local_c;
          *(int *)((int)this + 0x3ab) = (int)local_8;
          *(int *)((int)this + 0x26a) = (int)local_6;
          *(int *)((int)this + 0x26e) = (int)local_8;
          return 2;
        }
      }
      thunk_FUN_0063cc10(this);
    }
  }
  return uVar2;
}

