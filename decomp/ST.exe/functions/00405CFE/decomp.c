
uint __thiscall
thunk_FUN_0061fb70(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
                  undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_14 = param_1;
  uStack_18 = param_1;
  uStack_10 = param_2;
  uStack_c = param_3;
  uStack_8 = param_4;
  if (*(int *)((int)this + 0xb9) == 0) {
    puVar1 = FUN_006ae290((uint *)0x0,10,0x14,10);
    *(uint **)((int)this + 0xb9) = puVar1;
  }
  if (*(uint **)((int)this + 0xb9) != (uint *)0x0) {
    uVar2 = FUN_006ae1c0(*(uint **)((int)this + 0xb9),&uStack_18);
    return uVar2;
  }
  return 0xffffffff;
}

