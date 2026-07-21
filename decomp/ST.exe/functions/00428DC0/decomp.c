
void __cdecl
FUN_00428dc0(uint *param_1,int param_2,int param_3,int param_4,undefined4 param_5,byte param_6)

{
  byte *pbVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;

  uVar5 = (uint)(param_2 * param_3) >> 2;
  do {
    while( true ) {
      uVar6 = *param_1;
      param_1 = param_1 + 1;
      if (uVar6 != 0xffffffff) break;
      uVar6 = uVar5 - 1;
      bVar2 = (int)uVar5 < 1;
      uVar5 = uVar6;
      if (uVar6 == 0 || bVar2) {
        return;
      }
    }
    bVar4 = (byte)(uVar6 >> 8);
    if ((char)uVar6 != -1) {
      pbVar1 = (byte *)(param_4 + (uVar6 & 0xff));
      *pbVar1 = *pbVar1 | param_6;
    }
    bVar3 = (byte)(uVar6 >> 0x10);
    if (bVar4 != 0xff) {
      pbVar1 = (byte *)(param_4 + (uint)bVar4);
      *pbVar1 = *pbVar1 | param_6;
    }
    if (bVar3 != 0xff) {
      pbVar1 = (byte *)(param_4 + (uint)bVar3);
      *pbVar1 = *pbVar1 | param_6;
    }
    bVar4 = (byte)(uVar6 >> 0x18);
    if (bVar4 != 0xff) {
      pbVar1 = (byte *)(param_4 + (uint)bVar4);
      *pbVar1 = *pbVar1 | param_6;
    }
    uVar6 = uVar5 - 1;
    bVar2 = 0 < (int)uVar5;
    uVar5 = uVar6;
  } while (uVar6 != 0 && bVar2);
  return;
}

