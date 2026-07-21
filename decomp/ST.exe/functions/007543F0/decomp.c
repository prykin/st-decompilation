
undefined4
FUN_007543f0(AnonShape_007543F0_E9DD5DAA *param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  param_1->field_000C = *(undefined4 *)(param_1->field_0008 + 0x50);
  do {
    iVar3 = *(int *)(param_1->field_000C + 0x1c);
    iVar3 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,
                         *(undefined4 *)(param_1->field_000C + 0x40 + iVar3 * 8),iVar3);
    FUN_007561d0((AnonShape_00753C80_4C8E695D *)param_1,
                 *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8));
    iVar4 = *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8);
    if (iVar4 == -1) {
      iVar4 = *(int *)(iVar3 + 4);
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x10 + iVar3);
    }
    for (; iVar4 != -1; iVar4 = *(int *)(iVar4 + 0x10 + iVar3)) {
      *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + 1;
      iVar3 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,iVar4,
                           *(int *)(param_1->field_000C + 0x1c));
      iVar4 = FUN_00753c80((AnonShape_00753C80_4C8E695D *)param_1,(int)*(short *)(iVar3 + 8));
    }
    iVar2 = param_1->field_000C;
    iVar4 = *(int *)(iVar2 + 0x1c);
    if (*(int *)(iVar2 + 0x44 + iVar4 * 8) == -1) {
      do {
        if (iVar4 == 0) {
          FUN_00750f20((AnonShape_00750F20_F8C16F98 *)param_1,0,0);
          return 0xfffffffc;
        }
        *(int *)(iVar2 + 0x1c) = iVar4 + -1;
        iVar2 = param_1->field_000C;
        iVar4 = *(int *)(iVar2 + 0x1c);
      } while (*(int *)(iVar2 + 0x44 + iVar4 * 8) == -1);
      iVar3 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,
                           *(undefined4 *)(iVar2 + 0x40 + *(int *)(iVar2 + 0x1c) * 8),
                           *(int *)(iVar2 + 0x1c));
    }
    iVar4 = param_1->field_000C;
    iVar3 = *(int *)(iVar4 + 0x44 + *(int *)(iVar4 + 0x1c) * 8) + 0x10 + iVar3;
  } while ((*(code **)(iVar4 + 0xc) != (code *)0x0) &&
          (iVar4 = (**(code **)(iVar4 + 0xc))(iVar3 + 8,*(undefined4 *)(iVar4 + 0x10)), iVar4 != 0))
  ;
  *param_3 = *(undefined4 *)(iVar3 + 4);
  if (param_2 != (undefined4 *)0x0) {
    sVar1 = *(short *)(param_1->field_000C + 0x34);
    if (sVar1 == 0) {
      uVar5 = (**(code **)(param_1->field_000C + 8))(iVar3 + 8);
    }
    else {
      uVar5 = (uint)sVar1;
    }
    puVar7 = (undefined4 *)(iVar3 + 8);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *param_2 = *puVar7;
      puVar7 = puVar7 + 1;
      param_2 = param_2 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)param_2 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
  }
  return 0;
}

