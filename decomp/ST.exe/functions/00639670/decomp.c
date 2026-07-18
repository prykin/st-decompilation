
uint __thiscall FUN_00639670(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_10;
  undefined4 local_c;
  short local_6;
  
  iVar4 = param_1 - *(int *)((int)this + 0x2a3);
  if (iVar4 == 0) {
    return 0;
  }
  param_1 = ((iVar4 * 500) / 0x1e + (iVar4 * iVar4 * 1000) / 900) / 10;
  *(undefined4 *)((int)this + 0x286) = *(undefined4 *)((int)this + 0x27a);
  *(undefined4 *)((int)this + 0x28e) = *(undefined4 *)((int)this + 0x282);
  *(undefined4 *)((int)this + 0x28a) = *(undefined4 *)((int)this + 0x27e);
  local_c = (*(int *)((int)this + 0x25f) * param_1) / *(int *)((int)this + 0x267) +
            (int)*(short *)((int)this + 0x245);
  *(int *)((int)this + 0x27a) = local_c;
  iVar3 = (int)*(short *)((int)this + 0x247) +
          (*(int *)((int)this + 0x263) * param_1) / *(int *)((int)this + 0x267);
  *(int *)((int)this + 0x27e) = iVar3;
  iVar1 = (int)*(short *)((int)this + 0x249) -
          ((*(int *)((int)this + 0x26b) * iVar4 * 10) / 0x1e - (iVar4 * iVar4 * 300) / 900) / 10;
  iVar4 = *(int *)((int)this + 0x286);
  *(int *)((int)this + 0x282) = iVar1;
  uVar2 = thunk_FUN_00601500((void *)((int)this + 0x2ab),local_c,iVar3,iVar1,iVar4,iVar4,iVar4,
                             *(int *)((int)this + 0x255),0x35c,*(int *)((int)this + 0x25b),
                             *(undefined2 *)((int)this + 0x259),0x10c,0,0);
  if ((int)uVar2 < 1) {
    return 0;
  }
  if (uVar2 == 1) {
    *(undefined4 *)((int)this + 0x27e) = *(undefined4 *)((int)this + 0x2cf);
    *(undefined4 *)((int)this + 0x27a) = *(undefined4 *)((int)this + 0x2cb);
    *(undefined4 *)((int)this + 0x282) = *(undefined4 *)((int)this + 0x2d3);
    *(undefined4 *)((int)this + 0x2bf) = 0;
    return 1;
  }
  if (uVar2 != 5) {
    if (uVar2 != 2) {
      return uVar2;
    }
    if ((*(int **)((int)this + 0x2bf) != (int *)0x0) &&
       (iVar4 = (**(code **)(**(int **)((int)this + 0x2bf) + 0xe0))
                          (*(undefined4 *)((int)this + 0x2c3),(int)&param_1 + 2,&local_6,
                           (int)&local_c + 2,&local_10), iVar4 != 0)) {
      *(int *)((int)this + 0x2cf) = (int)local_6;
      *(int *)((int)this + 0x27e) = (int)local_6;
      *(int *)((int)this + 0x2cb) = (int)param_1._2_2_;
      *(int *)((int)this + 0x27a) = (int)param_1._2_2_;
      *(int *)((int)this + 0x2d3) = (int)local_c._2_2_;
      *(int *)((int)this + 0x282) = (int)local_c._2_2_;
      *(undefined4 *)((int)this + 0x2c7) = local_10;
      return 2;
    }
  }
  thunk_FUN_00639630(this);
  return uVar2;
}

