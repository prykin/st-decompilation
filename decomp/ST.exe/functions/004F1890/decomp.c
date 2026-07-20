
void __thiscall FUN_004f1890(void *this,byte param_1)

{
  int iVar1;
  byte *pbVar2;
  
  if (DAT_0080874e == '\x03') {
    iVar1 = (-(uint)(param_1 != 0) & 0xfffffffd) + 5;
  }
  else {
    iVar1 = (param_1 != 0) + 2;
  }
  pbVar2 = FUN_0070b650(*(short **)((int)this + (uint)param_1 * 4 + 0x2e2),
                        (uint)*(byte *)(param_1 + 0x2ea + (int)this));
  DibPut(*(AnonShape_006B84D0_7C7D97C6 **)((int)this + (-(uint)(param_1 != 0) & 8) * 4 + 0x180),
         iVar1,(DAT_0080874e == '\x03') + 6,'\x06',pbVar2);
  return;
}

