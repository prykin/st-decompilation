
void FUN_005d7a50(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  void *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    FUN_007158a0(DAT_008075a8,0x2f,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)((int)local_8 + 0x1a60) + 4))
              (DAT_00806784,7,0,s_MM_SID_007cd620,0xffffffff);
    *(undefined4 *)((int)local_8 + 0x1a7c) = 0x2e;
    *(undefined4 *)((int)local_8 + 0x1a80) = 0x193;
    *(undefined4 *)((int)local_8 + 0x1a68) = 0;
    if (*(uint *)((int)local_8 + 0x1a64) != 0xffffffff) {
      FUN_006b3730(*(uint **)((int)local_8 + 0x1aa8),*(uint *)((int)local_8 + 0x1a64),
                   *(uint *)((int)local_8 + 0x1a68),*(uint *)((int)local_8 + 0x1a7c),
                   *(uint *)((int)local_8 + 0x1a80));
    }
    iVar2 = 1;
    puVar4 = (undefined4 *)(*(int *)(DAT_0081176c + 0x2c) + 0x28);
    uVar3 = FUN_006b4fe0(*(int *)(DAT_0081176c + 0x2c));
    iVar2 = FUN_006b50c0(0x15e,0xa5,(uint)*(ushort *)(*(int *)(DAT_0081176c + 0x2c) + 0xe),uVar3,
                         puVar4,iVar2);
    *(int *)((int)local_8 + 0x1cb8) = iVar2;
    uVar3 = *(uint *)(iVar2 + 0x14);
    if (uVar3 == 0) {
      uVar3 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    iVar2 = 1;
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    puVar4 = (undefined4 *)(*(int *)(DAT_0081176c + 0x2c) + 0x28);
    uVar3 = FUN_006b4fe0(*(int *)(DAT_0081176c + 0x2c));
    iVar2 = FUN_006b50c0(0x13e,0xe,(uint)*(ushort *)(*(int *)(DAT_0081176c + 0x2c) + 0xe),uVar3,
                         puVar4,iVar2);
    *(int *)((int)local_8 + 0x1cbc) = iVar2;
    uVar3 = *(uint *)(iVar2 + 0x14);
    if (uVar3 == 0) {
      uVar3 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    iVar2 = 1;
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    puVar4 = (undefined4 *)(*(int *)(DAT_0081176c + 0x2c) + 0x28);
    uVar3 = FUN_006b4fe0(*(int *)(DAT_0081176c + 0x2c));
    iVar2 = FUN_006b50c0(0x104,0x28,(uint)*(ushort *)(*(int *)(DAT_0081176c + 0x2c) + 0xe),uVar3,
                         puVar4,iVar2);
    *(int *)((int)local_8 + 0x1cc0) = iVar2;
    uVar3 = *(uint *)(iVar2 + 0x14);
    if (uVar3 == 0) {
      uVar3 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    thunk_FUN_005d9250();
    uVar3 = *(uint *)((int)local_8 + 0x1cb8);
    puVar5 = (uint *)((int)local_8 + 0x1cb4);
    FUN_006b2330((uint)DAT_008075a8,puVar5,0x2e,0x4023f6,*(uint *)(uVar3 + 4),*(uint *)(uVar3 + 8),
                 uVar3);
    FUN_006b3640(DAT_008075a8,*puVar5,0xffffffff,0xe1,0x1a9);
    FUN_006b3af0(DAT_008075a8,*puVar5);
    FUN_007158a0(DAT_008075a8,0x2d,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)((int)local_8 + 0x1b01) + 4))
              (DAT_00806784,7,0,s_SID_SLDUP_007cd614,0xffffffff);
    *(undefined4 *)((int)local_8 + 0x1b1d) = 0x22b;
    *(undefined4 *)((int)local_8 + 0x1b21) = 0x1be;
    *(undefined4 *)((int)local_8 + 0x1b09) = 0;
    if (*(uint *)((int)local_8 + 0x1b05) != 0xffffffff) {
      FUN_006b3af0(*(int **)((int)local_8 + 0x1b49),*(uint *)((int)local_8 + 0x1b05));
    }
    FUN_007158a0(DAT_008075a8,0x2d,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)((int)local_8 + 0x1b92) + 4))
              (DAT_00806784,7,0,s_SID_SLDDN_007cd608,0xffffffff);
    *(undefined4 *)((int)local_8 + 0x1bae) = 0x22b;
    *(undefined4 *)((int)local_8 + 0x1bb2) = 0x211;
    *(undefined4 *)((int)local_8 + 0x1b9a) = 0;
    if (*(uint *)((int)local_8 + 0x1b96) != 0xffffffff) {
      FUN_006b3af0(*(int **)((int)local_8 + 0x1bda),*(uint *)((int)local_8 + 0x1b96));
    }
    FUN_007158a0(DAT_008075a8,0x2d,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)((int)local_8 + 0x1c23) + 4))
              (DAT_00806784,7,0,s_SID_SLDT_007cd5fc,0xffffffff);
    *(undefined4 *)((int)local_8 + 0x1c3f) = 0x22f;
    *(undefined4 *)((int)local_8 + 0x1c43) = 0x1d3;
    *(undefined4 *)((int)local_8 + 0x1c2b) = 0;
    if (*(uint *)((int)local_8 + 0x1c27) != 0xffffffff) {
      FUN_006b3af0(*(int **)((int)local_8 + 0x1c6b),*(uint *)((int)local_8 + 0x1c27));
    }
    puVar5 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)((int)local_8 + 0x1cd0) = puVar5;
    FUN_006b6020((int)puVar5,0,&DAT_008016a0);
    iVar2 = 1;
    puVar4 = (undefined4 *)(*(int *)((int)local_8 + 0x1cb8) + 0x28);
    uVar3 = FUN_006b4fe0(*(int *)((int)local_8 + 0x1cb8));
    uVar6 = FUN_006b50c0(0x156,0xe,(uint)*(ushort *)(*(int *)((int)local_8 + 0x1cb8) + 0xe),uVar3,
                         puVar4,iVar2);
    *(undefined4 *)((int)local_8 + 0x1cc8) = uVar6;
    *(undefined1 *)((int)local_8 + 0x65) = 3;
    thunk_FUN_005b6730(local_8,1,'\0',-1);
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar7 = FUN_006ad4d0(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x49,0,iVar2,&DAT_007a4ccc);
  if (iVar7 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cd5c4,0x49);
  return;
}

