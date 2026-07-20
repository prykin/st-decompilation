
void __thiscall FUN_0062dd00(void *this,int param_1)

{
  byte *groupContent;
  
  groupContent = *(byte **)((int)this + param_1 * 4 + 0x50);
  if (groupContent != (byte *)0x0) {
    FUN_006ae110(groupContent);
    *(undefined4 *)((int)this + param_1 * 4 + 0x50) = 0;
  }
  return;
}

