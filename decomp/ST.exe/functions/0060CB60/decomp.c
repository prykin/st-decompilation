
undefined4 __thiscall FUN_0060cb60(void *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_006aac70(param_1 * 0x44);
  *(undefined4 **)((int)this + 0x244) = puVar1;
  *puVar1 = 0;
  if (*(int *)((int)this + 0x244) != 0) {
    *(int *)((int)this + 0x23c) = param_1;
    *(undefined4 *)((int)this + 0x238) = 10;
    return 1;
  }
  *(undefined4 *)((int)this + 0x238) = 10;
  return 0;
}

