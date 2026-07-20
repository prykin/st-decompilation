
int FUN_00755bc0(AnonShape_00755BC0_D59C64DD *param_1,int param_2)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  *(uint *)(param_1->field_0008 + 8) = *(uint *)(param_1->field_0008 + 8) | 0x10;
  if (param_2 != -1) {
    uVar2 = *(undefined4 *)(param_1->field_000C + 0x1c);
    do {
      *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + 1;
      iVar4 = FUN_00753b80((AnonShape_00753B80_E259A731 *)param_1,param_2,
                           *(int *)(param_1->field_000C + 0x1c));
      *(undefined4 *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) =
           0xffffffff;
      param_2 = *(int *)(iVar4 + 4);
    } while (param_2 != -1);
    *(undefined4 *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) = 0;
    uVar5 = FUN_00757530((int)param_1,1,(undefined4 *)(iVar4 + 0x10));
    if (uVar5 == 0) {
      return -2;
    }
    uVar3 = *(undefined4 *)(param_1->field_000C + 0x1c);
    *(undefined4 *)(param_1->field_000C + 0x1c) = uVar2;
    iVar4 = FUN_00755da0((uint)param_1,param_1->field_001C);
    if (iVar4 != 0) {
      return iVar4;
    }
    *(undefined4 *)(param_1->field_000C + 0x1c) = uVar3;
  }
  while( true ) {
    iVar4 = *(int *)(param_1->field_000C + 0x1c);
    iVar6 = FUN_00753b80((AnonShape_00753B80_E259A731 *)param_1,
                         *(undefined4 *)(param_1->field_000C + 0x40 + iVar4 * 8),iVar4);
    FUN_00755d40((int)param_1,iVar6,
                 *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8));
    iVar4 = *(int *)(param_1->field_000C + 0x1c);
    if ((iVar4 == 0) && (*(short *)(iVar6 + 8) == 0)) {
      iVar4 = param_1->field_000C;
      puVar9 = (undefined4 *)(*(int *)(iVar4 + 0x24) + *(int *)(param_1->field_0008 + 0x34));
      if (puVar9[1] != -1) {
        *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
        puVar7 = (undefined4 *)
                 FUN_00753b80((AnonShape_00753B80_E259A731 *)param_1,puVar9[1],
                              *(int *)(param_1->field_000C + 0x1c));
        uVar8 = (uint)*(short *)(param_1->field_0008 + 0x16);
        for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        psVar1 = (short *)(param_1->field_000C + 0x2a);
        *psVar1 = *psVar1 + -1;
        iVar4 = FUN_00757670((int)param_1,param_1->field_0010);
        if (iVar4 != 0) {
          return iVar4;
        }
        *(undefined4 *)(param_1->field_000C + 0x14) = 1;
      }
      return 0;
    }
    if (*(short *)(param_1->field_0008 + 0x16) + -0x10 >> 1 <= (int)*(short *)(iVar6 + 8)) {
      return 0;
    }
    if (iVar4 < 1) break;
    iVar4 = FUN_00755e10((AnonShape_00755E10_BD685653 *)param_1,(int)*(short *)(iVar6 + 8),
                         *(undefined4 *)(param_1->field_000C + 0x40 + iVar4 * 8));
    if (iVar4 < 0) {
      return iVar4;
    }
    if (iVar4 < 1) {
      return 0;
    }
  }
  return 0;
}

