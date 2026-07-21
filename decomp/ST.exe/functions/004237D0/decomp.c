
undefined4 __thiscall FUN_004237d0(void *this,short param_1)

{
  uint uVar1;
  uint index;
  uint uVar2;
  undefined4 uStack_8;
  
  uVar2 = 0;
  uVar1 = *(uint *)(*(int *)((int)this + 0x29) + 0xc);
  if (uVar1 != 0) {
    index = 0;
    uStack_8 = this;
    do {
      DArrayGetElement(*(DArrayTy **)((int)this + 0x29),index,(void *)((int)&uStack_8 + 2));
      if (uStack_8._2_2_ == param_1) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      index = uVar2 & 0xffff;
    } while (index < uVar1);
  }
  return 0;
}

