
uint __thiscall FUN_0068e300(void *this,byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;

  iVar2 = *(int *)((int)this + 0xa5);
  uVar3 = *(uint *)(iVar2 + 0xc);
  do {
    do {
      uVar3 = uVar3 - 1;
      if ((int)uVar3 < 0) {
        return 0xffffffff;
      }
      if (uVar3 < *(uint *)(iVar2 + 0xc)) {
        iVar4 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c);
      }
      else {
        iVar4 = 0;
      }
      iVar4 = *(int *)(iVar4 + 4);
    } while (iVar4 == 0);
    pbVar5 = (byte *)(iVar4 + 0x3b);
    pbVar7 = param_1;
    do {
      bVar1 = *pbVar5;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_0068e363:
        iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_0068e368;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_0068e363;
      pbVar5 = pbVar5 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_0068e368:
    if (iVar6 == 0) {
      return (uint)*(ushort *)(iVar4 + 0x7d);
    }
  } while( true );
}

