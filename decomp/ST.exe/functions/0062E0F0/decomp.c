
void __thiscall FUN_0062e0f0(void *this,int param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)((int)this + param_1 * 4 + 0x70);
  if (pbVar1 != (byte *)0x0) {
    FUN_006ae110(pbVar1);
    *(undefined4 *)((int)this + param_1 * 4 + 0x70) = 0;
  }
  return;
}

