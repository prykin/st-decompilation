
void __thiscall FUN_00627050(void *this,char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x2ae) == 4) {
    *param_1 = '\x04';
  }
  else {
    *param_1 = ((*(uint *)((int)this + 0x262) != (uint)DAT_0080874d) - 1U & 0xfe) + 3;
  }
  param_1[1] = '\x01';
  uVar1 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 2) = uVar1;
  iVar2 = GetPlayerRaceId(*(char *)((int)this + 0x24));
  param_1[6] = (char)iVar2;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)((int)this + 0x18);
  return;
}

