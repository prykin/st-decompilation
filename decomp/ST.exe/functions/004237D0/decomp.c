
undefined4 __thiscall FUN_004237d0(void *this,short param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uStack_8;
  
  uVar3 = 0;
  uVar1 = *(uint *)(*(int *)((int)this + 0x29) + 0xc);
  if (uVar1 != 0) {
    uVar2 = 0;
    uStack_8 = this;
    do {
      FUN_006acc70(*(int *)((int)this + 0x29),uVar2,(undefined4 *)((int)&uStack_8 + 2));
      if (uStack_8._2_2_ == param_1) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      uVar2 = uVar3 & 0xffff;
    } while (uVar2 < uVar1);
  }
  return 0;
}

