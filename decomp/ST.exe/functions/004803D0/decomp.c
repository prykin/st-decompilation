
int __thiscall FUN_004803d0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar2 = (undefined4 *)((int)this + 0x2cc);
    for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)((int)this + 0x2c4) = 0;
    if (*(int *)((int)this + 0x7ca) != 0) {
      return 0;
    }
    *(undefined2 *)((int)this + 0x3ba) = *(undefined2 *)((int)this + 1099);
    *(undefined2 *)((int)this + 0x3be) = *(undefined2 *)((int)this + 0x44f);
    *(undefined2 *)((int)this + 0x3bc) = *(undefined2 *)((int)this + 0x44d);
    *(undefined4 *)((int)this + 0x3c0) = *(undefined4 *)((int)this + 0x451);
    *(undefined4 *)((int)this + 0x6eb) = *(undefined4 *)((int)this + 0x451);
    *(undefined4 *)((int)this + 0x6ef) = 0;
  }
  iVar1 = *(int *)((int)this + 0x6ef);
  if (iVar1 == 0) {
    iVar1 = STBoatC::LoadObj(this,param_1);
    if (iVar1 == -1) {
      return -1;
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)this + 0x7ca) == 0) {
      return 0;
    }
    *(undefined4 *)((int)this + 0x6ef) = 1;
    *(undefined4 *)((int)this + 0x7ce) = 1;
  }
  else if (iVar1 == 1) {
    iVar1 = (**(code **)(*(int *)this + 0xd8))();
    if (iVar1 != 0) {
      return -1;
    }
    if ((uint)PTR_00802a38->field_00E4 % 0x25 == 0) {
      iVar1 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x7ca),&param_1);
      if (iVar1 == -4) {
        return 0;
      }
      if (*(int *)(param_1 + 0x716) == *(int *)(param_1 + 0x712)) {
        *(undefined2 *)((int)this + 0x3d2) = 0xffff;
        *(undefined2 *)((int)this + 0x3d0) = 0xffff;
        *(undefined2 *)((int)this + 0x3ce) = 0xffff;
        *(undefined4 *)((int)this + 0x6ef) = 2;
        iVar1 = STBoatC::UnLoadObj(this,1);
        return iVar1;
      }
    }
  }
  else if (iVar1 == 2) {
    iVar1 = STBoatC::UnLoadObj(this,2);
    return iVar1;
  }
  return 2;
}

