
void __thiscall FUN_006ea6d0(void *this,uint param_1,int param_2,int param_3)

{
  uint *puVar1;
  byte *pbVar2;
  ushort *puVar3;
  ushort uVar4;
  uint uVar5;
  
  if ((param_1 < *(uint *)((int)this + 0x310)) &&
     (puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114), (*puVar1 & 0x8000) != 0)) {
    if ((int)puVar1[0x25] <= param_2) {
      FUN_006e91a0();
      return;
    }
    if (param_3 == 0) {
      puVar3 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
      uVar4 = *puVar3;
      if ((uVar4 & 4) != 0) {
        *puVar3 = uVar4 & 0xfffb;
        uVar5 = puVar1[0x24];
        puVar1[0x24] = uVar5 - 1;
        if ((int)(uVar5 - 1) < 0) {
          puVar1[0x24] = 0;
          return;
        }
      }
    }
    else {
      pbVar2 = (byte *)(puVar1[0x29] + 2 + param_2 * 4);
      if ((*pbVar2 & 4) == 0) {
        puVar1[0x24] = puVar1[0x24] + 1;
        *pbVar2 = *pbVar2 | 4;
        return;
      }
    }
  }
  else if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

