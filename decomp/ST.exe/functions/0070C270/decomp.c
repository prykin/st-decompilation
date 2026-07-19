
/* WARNING: Removing unreachable block (ram,0x0070c30c) */
/* WARNING: Removing unreachable block (ram,0x0070c2ce) */
/* WARNING: Removing unreachable block (ram,0x0070c34b) */

undefined4 * __cdecl FUN_0070c270(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  
  iVar5 = *(int *)(param_1 + 0x20);
  if (*(short *)(param_1 + 0xe) != 8) {
    return (undefined4 *)0x0;
  }
  if (iVar5 == 0) {
    iVar5 = 0x100;
  }
  puVar2 = Library::DKW::LIB::FUN_006aac10(iVar5 * 4);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (iVar5 != 0) {
    pbVar4 = (byte *)((int)puVar2 + 2);
    pbVar6 = (byte *)(param_1 + 0x29);
    do {
      bVar1 = pbVar6[-1];
      if ((bVar1 & 7) < 4) {
        pbVar4[-2] = bVar1;
      }
      else {
        uVar3 = (uint)(bVar1 >> 3) * 8 + 8;
        if (0xff < uVar3) {
          uVar3 = 0xff;
        }
        pbVar4[-2] = (byte)uVar3;
      }
      bVar1 = *pbVar6;
      if ((bVar1 & 7) < 4) {
        pbVar4[-1] = bVar1;
      }
      else {
        uVar3 = (uint)(bVar1 >> 3) * 8 + 8;
        if (0xff < uVar3) {
          uVar3 = 0xff;
        }
        pbVar4[-1] = (byte)uVar3;
      }
      bVar1 = pbVar6[1];
      if ((bVar1 & 7) < 4) {
        *pbVar4 = bVar1;
      }
      else {
        uVar3 = (uint)(bVar1 >> 3) * 8 + 8;
        if (0xff < uVar3) {
          uVar3 = 0xff;
        }
        *pbVar4 = (byte)uVar3;
      }
      pbVar6 = pbVar6 + 4;
      pbVar4 = pbVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return puVar2;
}

