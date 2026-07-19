
undefined4 __thiscall thunk_FUN_004e16d0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)((int)this + 0x4d8) != param_1) || (*(int *)((int)this + 0x4d0) != 0)) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x4d0) = 1;
  *(undefined4 *)((int)this + 0x4e4) = 1;
  TLOBaseTy::RotateSpr(this,1);
  *(undefined4 *)((int)this + 0x4e8) = 1;
  switch(*(undefined4 *)((int)this + 0x5ac)) {
  case 0x39:
    iVar2 = *(int *)this;
    iVar1 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
    iVar1 = (-(uint)((char)iVar1 != '\x02') & 0xffffff3a) + 0x2e8;
    break;
  default:
    goto switchD_004e172f_caseD_3a;
  case 0x3b:
    iVar2 = *(int *)this;
    iVar1 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
    iVar1 = (-(uint)((char)iVar1 != '\x02') & 0xffffff3a) + 0x2f5;
    break;
  case 0x4f:
    iVar2 = *(int *)this;
    iVar1 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
    iVar1 = (-(uint)((char)iVar1 != '\x02') & 0xffffff32) + 0x34e;
    break;
  case 0x52:
    iVar2 = *(int *)this;
    iVar1 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
    iVar1 = (-(uint)((char)iVar1 != '\x02') & 0xffffff3b) + 0x35b;
    break;
  case 0x5e:
    (**(code **)(*(int *)this + 0x90))(3,0x3a9);
    thunk_FUN_004e04a0((int)this);
    return 0;
  case 0x60:
    (**(code **)(*(int *)this + 0x90))(3,0x3b8);
    thunk_FUN_004e04a0((int)this);
    return 0;
  }
  (**(code **)(iVar2 + 0x90))(3,iVar1);
switchD_004e172f_caseD_3a:
  thunk_FUN_004e04a0((int)this);
  return 0;
}

