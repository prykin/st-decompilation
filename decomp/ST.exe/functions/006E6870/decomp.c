
byte __thiscall FUN_006e6870(void *this,int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  
  bVar3 = 0;
  if (param_1 < *(int *)((int)this + 0x41c)) {
    bVar2 = *(byte *)(*(int *)((int)this + 0x420) + 3 + param_1 * 4);
    pbVar1 = (byte *)(*(int *)((int)this + 0x420) + 3 + param_1 * 4);
    bVar3 = bVar2 & 1;
    if (param_2 != 0) {
      *pbVar1 = bVar2 | 1;
      return bVar3;
    }
    *pbVar1 = bVar2 & 0xfe;
  }
  return bVar3;
}

