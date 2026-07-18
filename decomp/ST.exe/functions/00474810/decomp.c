
int __thiscall FUN_00474810(void *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    thunk_FUN_00492420(this);
  }
  iVar2 = *(int *)((int)this + 0x596);
  if (iVar2 == 0) {
    iVar2 = thunk_FUN_00460360(this);
    return iVar2;
  }
  if (iVar2 == 1) {
    iVar2 = (**(code **)(*(int *)this + 0xd8))();
    return -(uint)(iVar2 != 0);
  }
  if (iVar2 == 2) {
    FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x58e),(int *)&param_1);
    if ((param_1 != (int *)0x0) && (param_1[6] == *(int *)((int)this + 0x58e))) {
      (**(code **)(*param_1 + 0xac))(*(undefined4 *)((int)this + 0x18));
      iVar2 = (**(code **)(*(int *)this + 0xd8))();
      return -(uint)(iVar2 != 0);
    }
    iVar2 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2f2d,0,0,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    return -1;
  }
  if (iVar2 != 3) {
    return 2;
  }
  iVar2 = *(int *)((int)this + 0x59a);
  if (((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 2)) {
    if ((iVar2 != 3) && (iVar2 != 4)) {
      iVar2 = thunk_FUN_004732f0(this,2);
      return iVar2;
    }
    *(undefined4 *)((int)this + 0x59a) = 5;
    iVar2 = (**(code **)(*(int *)this + 0xd8))();
    return (-(uint)(iVar2 != 0) & 0xfffffffd) + 2;
  }
  FUN_006ea2f0(*(void **)((int)this + 0x211),*(uint *)((int)this + 0x1ed));
  iVar2 = (**(code **)(*(int *)this + 0xd8))();
  return -(uint)(iVar2 != 0);
}

