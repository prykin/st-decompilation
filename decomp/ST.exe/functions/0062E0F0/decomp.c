
void __thiscall FUN_0062e0f0(void *this,int param_1)

{
  byte *groupContent;
  
  groupContent = *(byte **)((int)this + param_1 * 4 + 0x70);
  if (groupContent != (byte *)0x0) {
    FUN_006ae110(groupContent);
    *(undefined4 *)((int)this + param_1 * 4 + 0x70) = 0;
  }
  return;
}

