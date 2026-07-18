
void FUN_006d1250(uint *param_1,int param_2,int param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint local_10;
  
  if (param_4 == (uint *)0x0) {
    uVar6 = 0xff0000;
    local_10 = 0xff00;
    uVar5 = 0xff;
  }
  else {
    local_10 = param_4[1];
    uVar6 = *param_4;
    uVar5 = param_4[2];
  }
  bVar4 = 0;
  for (uVar2 = uVar6; (uVar2 & 0x800000) == 0; uVar2 = uVar2 << 1) {
    bVar4 = bVar4 + 1;
  }
  bVar1 = 0;
  for (uVar2 = local_10; (uVar2 & 0x800000) == 0; uVar2 = uVar2 << 1) {
    bVar1 = bVar1 + 1;
  }
  bVar7 = 0;
  for (uVar2 = uVar5; (uVar2 & 0x800000) == 0; uVar2 = uVar2 << 1) {
    bVar7 = bVar7 + 1;
  }
  if (0 < param_3) {
    pbVar3 = (byte *)(param_2 + 2);
    do {
      param_3 = param_3 + -1;
      *param_1 = ((uint)pbVar3[-2] << 0x10) >> (bVar7 & 0x1f) & uVar5 |
                 ((uint)pbVar3[-1] << 0x10) >> (bVar1 & 0x1f) & local_10 |
                 ((uint)*pbVar3 << 0x10) >> (bVar4 & 0x1f) & uVar6;
      pbVar3 = pbVar3 + 4;
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}

