
void FUN_00593b50(undefined4 *param_1)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int local_528 [4];
  int local_518;
  int local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_54;
  undefined4 local_50 [16];
  void *local_10;
  uint *local_c;
  undefined1 local_5;
  
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar3 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    iVar7 = FUN_006ad4d0(s_E____titans_Start_combo_cpp_007cbeec,99,0,iVar3,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cbeec,99);
    return;
  }
  puVar5 = (undefined4 *)((int)local_10 + 0x88);
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar3 = *(int *)((int)local_10 + 0xd4);
  *(undefined4 *)((int)local_10 + 0x9c) = 0xffffffff;
  if ((iVar3 != 0) && (iVar7 = *(int *)((int)local_10 + 0xd0), iVar7 != 0)) {
    if (iVar7 + -1 < *(int *)((int)local_10 + 200)) {
      *(undefined4 *)((int)local_10 + 200) = 0;
    }
    iVar11 = 1;
    *(int *)((int)local_10 + 0xf8) = iVar7 * *(int *)((int)local_10 + 0xcc) + 10;
    puVar5 = (undefined4 *)(iVar3 + 0x28);
    uVar4 = FUN_006b4fe0(iVar3);
    iVar3 = FUN_006b50c0(*(int *)((int)local_10 + 0xf4),*(int *)((int)local_10 + 0xf8),
                         (uint)*(ushort *)(*(int *)((int)local_10 + 0xd4) + 0xe),uVar4,puVar5,iVar11
                        );
    *(int *)((int)local_10 + 0xfc) = iVar3;
    uVar4 = *(uint *)(iVar3 + 0x14);
    if (uVar4 == 0) {
      uVar4 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    local_5 = *(undefined1 *)((int)local_10 + 0xd8);
    puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
    iVar3 = 1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = local_5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar5 = (undefined4 *)(*(int *)((int)local_10 + 0xd4) + 0x28);
    uVar4 = FUN_006b4fe0(*(int *)((int)local_10 + 0xd4));
    iVar3 = FUN_006b50c0(*(int *)((int)local_10 + 0xf4),*(int *)((int)local_10 + 0xf8),
                         (uint)*(ushort *)(*(int *)((int)local_10 + 0xd4) + 0xe),uVar4,puVar5,iVar3)
    ;
    *(int *)((int)local_10 + 0x100) = iVar3;
    uVar4 = *(uint *)(iVar3 + 0x14);
    if (uVar4 == 0) {
      uVar4 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    local_5 = *(undefined1 *)((int)local_10 + 0xe0);
    puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
    iVar3 = 1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = local_5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar5 = (undefined4 *)(*(int *)((int)local_10 + 0xd4) + 0x28);
    uVar4 = FUN_006b4fe0(*(int *)((int)local_10 + 0xd4));
    iVar3 = FUN_006b50c0(*(int *)((int)local_10 + 0xf4) + -10,*(int *)((int)local_10 + 0xcc),
                         (uint)*(ushort *)(*(int *)((int)local_10 + 0xd4) + 0xe),uVar4,puVar5,iVar3)
    ;
    *(int *)((int)local_10 + 0x104) = iVar3;
    uVar4 = *(uint *)(iVar3 + 0x14);
    if (uVar4 == 0) {
      uVar4 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    local_5 = *(undefined1 *)((int)local_10 + 0xd8);
    puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = local_5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(undefined4 *)((int)local_10 + 0xc0) = *(undefined4 *)((int)local_10 + 0x104);
    FUN_006b5ee0(*(int *)((int)local_10 + 0xfc),0,2,2,*(int *)((int)local_10 + 0xf4) + -4,
                 *(int *)((int)local_10 + 0xf8) + -4,(byte)*(undefined4 *)((int)local_10 + 0xdc),0xd
                );
    puVar1 = (uint *)((int)local_10 + 0x108);
    local_c = puVar1;
    FUN_006b2330((uint)DAT_008075a8,puVar1,2,0x401712,
                 *(int *)(*(int *)((int)local_10 + 0xfc) + 4) + 3,
                 *(int *)(*(int *)((int)local_10 + 0xfc) + 8) + 3,(int)local_10 + 0x88);
    FUN_006b3640(DAT_008075a8,*puVar1,0xffffffff,*(int *)((int)local_10 + 0xec) - 3,
                 *(uint *)((int)local_10 + 0xf0));
    puVar5 = (undefined4 *)((int)local_10 + 0x18);
    puVar8 = puVar5;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined4 *)((int)local_10 + 0x28) = 0x1a;
    FUN_006e6000(local_10,3,1,puVar5);
    puVar8 = puVar5;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined4 *)((int)local_10 + 0x28) = 0x18;
    FUN_006e6000(local_10,3,1,puVar5);
    puVar8 = puVar5;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined4 *)((int)local_10 + 0x28) = 0x13;
    *(undefined4 *)((int)local_10 + 0x2c) = *(undefined4 *)((int)local_10 + 8);
    FUN_006e6000(local_10,3,1,puVar5);
    puVar8 = puVar5;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined4 *)((int)local_10 + 0x28) = 0x65;
    FUN_006e6000(local_10,3,1,puVar5);
    puVar8 = (undefined4 *)((int)local_10 + 0x38);
    *(int *)((int)local_10 + 0x84) = *(int *)((int)local_10 + 0x2c) + 1;
    puVar9 = puVar8;
    for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined4 *)((int)local_10 + 0x4c) = *(undefined4 *)((int)local_10 + 8);
    *(undefined4 *)((int)local_10 + 0x40) = *(undefined4 *)((int)local_10 + 0x84);
    *(undefined4 *)((int)local_10 + 0x50) = 2;
    *(undefined4 *)((int)local_10 + 0x54) = 0x10003;
    *puVar8 = 10;
    *(undefined4 *)((int)local_10 + 0x3c) = 1;
    puVar9 = puVar5;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined4 *)((int)local_10 + 0x28) = 0x10;
    *(undefined4 **)((int)local_10 + 0x2c) = puVar8;
    FUN_006e6000(local_10,3,1,puVar5);
    iVar3 = *(int *)((int)local_10 + 0xf0);
    piVar10 = local_528;
    for (iVar7 = 0x135; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar10 = 0;
      piVar10 = piVar10 + 1;
    }
    local_528[2] = *(int *)((int)local_10 + 0xec) + 5;
    local_528[3] = iVar3 + 5;
    local_518 = *(int *)((int)local_10 + 0xf4) + -10;
    local_514 = *(int *)((int)local_10 + 0xf8) + -10;
    local_510 = *(undefined4 *)((int)local_10 + 0xd0);
    local_500 = *(undefined4 *)((int)local_10 + 8);
    local_528[0] = 1;
    local_50c = 0;
    local_4fc = 2;
    local_4f8 = 0xffff;
    local_49c = 2;
    local_498 = 0x10002;
    local_4dc = 2;
    local_4bc = 2;
    local_4d8 = 0x10001;
    local_4b8 = 0x10000;
    local_4e0 = local_500;
    local_4c0 = local_500;
    local_4a0 = local_500;
    (**(code **)(**(int **)((int)local_10 + 0xc) + 8))
              (7,(undefined4 *)((int)local_10 + 0x10c),0,local_528,0);
    *(undefined4 *)((int)local_10 + 0x28) = 0x22;
    *(undefined4 *)((int)local_10 + 0x2c) = *(undefined4 *)((int)local_10 + 200);
    FUN_006e6080(local_10,2,*(undefined4 *)((int)local_10 + 0x10c),puVar5);
    *(undefined4 *)((int)local_10 + 0x110) = 1;
    FUN_006b35d0(DAT_008075a8,*local_c);
    DAT_00858df8 = (undefined4 *)local_54;
    return;
  }
  thunk_FUN_005943f0(local_10);
  DAT_00858df8 = (undefined4 *)local_54;
  return;
}

