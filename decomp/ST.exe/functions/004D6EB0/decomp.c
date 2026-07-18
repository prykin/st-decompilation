
void __thiscall FUN_004d6eb0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*(int *)this + 0x2c))();
  if ((iVar1 < 0x32) || (iVar1 = (**(code **)(*(int *)this + 0x2c))(), 0x73 < iVar1)) {
    iVar1 = (**(code **)(*(int *)this + 0x2c))();
    if (iVar1 < 1) {
      return;
    }
    iVar1 = (**(code **)(*(int *)this + 0x2c))();
    if (0x28 < iVar1) {
      return;
    }
    iVar1 = (**(code **)(*(int *)this + 0x2c))();
    iVar1 = *(int *)(&DAT_007e061c + iVar1 * 4);
  }
  else {
    iVar1 = (**(code **)(*(int *)this + 0x2c))();
    iVar1 = *(int *)(&DAT_007e22f8 + iVar1 * 4);
  }
  if (iVar1 != 0) {
    iVar2 = (**(code **)(*(int *)this + 0xc4))();
    iVar2 = iVar2 + (param_1 * 100) / iVar1;
    if (100 < iVar2) {
      iVar2 = 100;
    }
    (**(code **)(*(int *)this + 200))(iVar2);
  }
  return;
}

