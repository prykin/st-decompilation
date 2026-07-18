
void __thiscall FSGSTy::PaintGameNew(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *pFVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  FSGSTy *pFStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pFStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  pFVar2 = pFStack_8;
  if (iVar3 == 0) {
    iVar3 = *(int *)(pFStack_8 + 0x1ac0);
    uVar7 = *(uint *)(iVar3 + 0x14);
    if (uVar7 == 0) {
      uVar7 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0x19,0x48,0x186,0x14
                    );
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x256b,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    FUN_006b5ee0(*(int *)(pFVar2 + 0x1ac0),0,0x18,0x5b,0x188,0x1b,0xf,0xd);
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0x19,0x7f,0xb4,0x14)
    ;
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x2550,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    FUN_006b5ee0(*(int *)(pFVar2 + 0x1ac0),0,0x18,0x92,0xb6,0x16,0xf,0xd);
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0x19,0xb1,0xb4,0x14)
    ;
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x256d,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    FUN_006c7570(*(int *)(pFVar2 + 0x1ac0),0,0x19,0xc5,(undefined4 *)0x186,0x19,4,0xf);
    FUN_006c7570(*(int *)(pFVar2 + 0x1ac0),0,0x1b,199,(undefined4 *)0x182,0x15,4,0xf);
    FUN_006b3430(DAT_008075a8,*(uint *)(pFVar2 + 0x1abc));
    FUN_006b35d0(DAT_008075a8,*(uint *)(pFVar2 + 0x1abc));
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar8 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x418,0,iVar3,&DAT_007a4ccc);
  if (iVar8 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7cbf70,0x418);
  return;
}

