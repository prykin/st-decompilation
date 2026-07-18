
undefined4 __thiscall thunk_FUN_00627400(void *this,undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int *this_00;
  int iVar4;
  
  sVar1 = *(short *)((int)this + 0x47);
  sVar2 = *(short *)((int)this + 0x49);
  sVar3 = *(short *)((int)this + 0x4b);
  if ((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar2 < 0)) ||
     (((DAT_007fb242 <= sVar2 || (sVar3 < 0)) ||
      ((DAT_007fb244 <= sVar3 ||
       (this_00 = *(int **)(DAT_007fb248 +
                           ((uint)*(byte *)((int)this + 0x8e) +
                           ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar2 +
                           (int)sVar1) * 2) * 4), this_00 == (int *)0x0)))))) {
    if ((((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar2 < 0)) ||
         ((DAT_007fb242 <= sVar2 || (sVar3 < 0)))) ||
        ((DAT_007fb244 <= sVar3 ||
         (*(int *)(DAT_007fb248 +
                  ((uint)*(byte *)((int)this + 0x8e) +
                  ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar2 + (int)sVar1) * 2
                  ) * 4) == 0)))) &&
       (iVar4 = DumpClassC::WritePtr(sVar1,sVar2,sVar3,(uint)*(byte *)((int)this + 0x8e),(int)this),
       iVar4 == 0)) {
      *(char *)((int)this + 0x314) = *(char *)((int)this + 0x314) + '\x01';
      return param_1;
    }
  }
  else {
    if (*(uint *)((int)this + 0x315) < *(uint *)(DAT_00802a38 + 0xe4)) {
      thunk_FUN_00627390((int)this);
      return *(undefined4 *)((int)this + 0x2ae);
    }
    if ((int)(((ulonglong)(*(uint *)((int)this + 0x315) - *(uint *)(DAT_00802a38 + 0xe4)) % 200) / 3
             ) != 0) {
      iVar4 = (**(code **)(*this_00 + 0x2c))();
      if (iVar4 == 0xe6) {
        thunk_FUN_0058f1e0(this_00,0);
      }
      else if ((0xe6 < iVar4) && (iVar4 < 0xec)) {
        thunk_FUN_0057d5f0(this_00,0);
        return param_1;
      }
    }
  }
  return param_1;
}

