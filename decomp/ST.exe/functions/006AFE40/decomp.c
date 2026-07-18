
int __fastcall FUN_006afe40(int *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if ((param_1 != (int *)0x0) && (param_2 != (uint *)0x0)) {
    puVar2 = (uint *)*param_1;
    if (puVar2 == (uint *)0x0) {
      if ((*param_2 & 0x100) == 0) {
        puVar2 = FUN_006ae290((uint *)0x0,param_2[3],param_2[2],param_2[5]);
      }
      else {
        puVar2 = FUN_006ae310((uint *)0x0,param_2[3],param_2[2],param_2[5],param_2[6]);
      }
      *param_1 = (int)puVar2;
    }
    else {
      if (puVar2[2] != param_2[2]) {
        iVar3 = FUN_006a5e40(-0x32,DAT_007ed77c,0x7eda74,0x17);
        return iVar3;
      }
      if (puVar2[4] < param_2[3]) {
        do {
          iVar3 = FUN_006ae230(puVar2);
          if (iVar3 != 0) {
            FUN_006a5e40(iVar3,DAT_007ed77c,0x7eda74,0x1a);
            return iVar3;
          }
          puVar2 = (uint *)*param_1;
        } while (puVar2[4] < param_2[3]);
      }
    }
    uVar5 = param_2[2];
    uVar1 = param_2[3];
    puVar6 = (undefined4 *)param_2[7];
    puVar7 = *(undefined4 **)(*param_1 + 0x1c);
    for (uVar4 = uVar5 * uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = uVar5 * uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    *(uint *)(*param_1 + 0xc) = param_2[3];
    return 0;
  }
  iVar3 = FUN_006a5e40(-0x34,DAT_007ed77c,0x7eda74,0x22);
  return iVar3;
}

