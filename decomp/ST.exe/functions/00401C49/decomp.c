
void thunk_FUN_00599e90(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    iVar2 = *(int *)(iStack_8 + 0x1ac0);
    uVar6 = *(uint *)(iVar2 + 0x14);
    if (uVar6 == 0) {
      uVar6 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
    }
    puVar3 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    FUN_00710a90(*(int *)(iStack_8 + 0x1ac0),0,0x19,0x1b,0x186,0x14);
    uVar8 = 2;
    iVar7 = -1;
    iVar2 = 0;
    puVar4 = (uint *)FUN_006b0140(0x254f,DAT_00807618);
    FUN_007119c0(puVar4,iVar2,iVar7,uVar8);
    FUN_006b5ee0(*(int *)(iStack_8 + 0x1ac0),0,0x18,0x2e,0x188,0x1b,0xf,0xd);
    FUN_00710a90(*(int *)(iStack_8 + 0x1ac0),0,0x19,0x48,0xb4,0x14);
    uVar8 = 2;
    iVar7 = -1;
    iVar2 = 0;
    puVar4 = (uint *)FUN_006b0140(0x2550,DAT_00807618);
    FUN_007119c0(puVar4,iVar2,iVar7,uVar8);
    FUN_006b5ee0(*(int *)(iStack_8 + 0x1ac0),0,0x18,0x5b,0xb6,0x16,0xf,0xd);
    FUN_00710a90(*(int *)(iStack_8 + 0x1ac0),0,0xeb,0x48,0xb4,0x14);
    uVar8 = 2;
    iVar7 = -1;
    iVar2 = 0;
    puVar4 = (uint *)FUN_006b0140(0x2554,DAT_00807618);
    FUN_007119c0(puVar4,iVar2,iVar7,uVar8);
    FUN_006b5ee0(*(int *)(iStack_8 + 0x1ac0),0,0xea,0x5b,0xb6,0x16,0xf,0xd);
    FUN_00710a90(*(int *)(iStack_8 + 0x1ac0),0,0x19,0x70,0x6e,0x14);
    uVar8 = 2;
    iVar7 = -1;
    iVar2 = 0;
    puVar4 = (uint *)FUN_006b0140(0x2557,DAT_00807618);
    FUN_007119c0(puVar4,iVar2,iVar7,uVar8);
    FUN_006b5ee0(*(int *)(iStack_8 + 0x1ac0),0,0x18,0x83,0x70,0x16,0xf,0xd);
    FUN_00710a90(*(int *)(iStack_8 + 0x1ac0),0,0xa5,0x70,0x6e,0x14);
    uVar8 = 2;
    iVar7 = -1;
    iVar2 = 0;
    puVar4 = (uint *)FUN_006b0140(0x2558,DAT_00807618);
    FUN_007119c0(puVar4,iVar2,iVar7,uVar8);
    FUN_006b5ee0(*(int *)(iStack_8 + 0x1ac0),0,0xa4,0x83,0x70,0x16,0xf,0xd);
    FUN_00710a90(*(int *)(iStack_8 + 0x1ac0),0,0x131,0x70,0x6e,0x14);
    uVar8 = 2;
    iVar7 = -1;
    iVar2 = 0;
    puVar4 = (uint *)FUN_006b0140(0x2559,DAT_00807618);
    FUN_007119c0(puVar4,iVar2,iVar7,uVar8);
    FUN_006b5ee0(*(int *)(iStack_8 + 0x1ac0),0,0x130,0x83,0x70,0x16,0xf,0xd);
    FUN_00710a90(*(int *)(iStack_8 + 0x1ac0),0,0x19,0x98,0x186,0x14);
    uVar8 = 2;
    iVar7 = -1;
    iVar2 = 0;
    puVar4 = (uint *)FUN_006b0140(0x255a,DAT_00807618);
    FUN_007119c0(puVar4,iVar2,iVar7,uVar8);
    FUN_006b5ee0(*(int *)(iStack_8 + 0x1ac0),0,0x18,0xab,0x188,0x4d,0xf,0xd);
    FUN_006b3430(DAT_008075a8,*(uint *)(iStack_8 + 0x1abc));
    FUN_006b35d0(DAT_008075a8,*(uint *)(iStack_8 + 0x1abc));
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar7 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,999,0,iVar2,&DAT_007a4ccc);
  if (iVar7 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cbf70,999);
  return;
}

