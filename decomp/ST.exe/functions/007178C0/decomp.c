
void __thiscall FUN_007178c0(void *this,int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;

  if (param_1 == *(int *)((int)this + 0x4ba)) {
    uVar2 = *(int *)((int)this + 0x4b2) * param_3 + param_2 ^ 7;
    pbVar1 = (byte *)(*(int *)((int)this + 0x46e) + ((int)uVar2 >> 3));
    *pbVar1 = *pbVar1 | '\x01' << (uVar2 & 7);
    *(undefined4 *)((int)this + 0x46a) = 1;
  }
  return;
}

