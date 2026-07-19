
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PaintInfo */

void __thiscall FSGSTy::PaintInfo(FSGSTy *this)

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
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pFVar2 = local_8;
  if (iVar3 == 0) {
    iVar3 = *(int *)(local_8 + 0x1ac0);
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
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0x19,0x1b,0x186,0x14
                    );
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x254f,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    FUN_006b5ee0(*(int *)(pFVar2 + 0x1ac0),0,0x18,0x2e,0x188,0x16,0xf,0xd);
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0x1e,0x2e,0x17c,0x14
                    );
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),*(uint **)(pFVar2 + 0x1b0c),0,-1,0);
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0x19,0x43,0x6e,0x14)
    ;
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x2557,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    FUN_006b5ee0(*(int *)(pFVar2 + 0x1ac0),0,0x18,0x56,0x70,0x16,0xf,0xd);
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0xa5,0x43,0x6e,0x14)
    ;
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x2558,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    FUN_006b5ee0(*(int *)(pFVar2 + 0x1ac0),0,0xa4,0x56,0x70,0x16,0xf,0xd);
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0x131,0x43,0x6e,0x14
                    );
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x2559,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    FUN_006b5ee0(*(int *)(pFVar2 + 0x1ac0),0,0x130,0x56,0x70,0x16,0xf,0xd);
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0x19,0x6b,0x186,0x14
                    );
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x255a,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    FUN_006b5ee0(*(int *)(pFVar2 + 0x1ac0),0,0x18,0x7e,0x188,0x4d,0xf,0xd);
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0x19,0xcf,0x186,0x14
                    );
    uVar9 = 0;
    iVar8 = -1;
    iVar3 = -1;
    puVar5 = (uint *)FUN_006b0140(0x259d,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0x19,0xde,0x50,0x14)
    ;
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x259f,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    FUN_006b5ee0(*(int *)(pFVar2 + 0x1ac0),0,0x18,0xf2,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0x7d,0xde,0x50,0x14)
    ;
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x25a0,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    FUN_006b5ee0(*(int *)(pFVar2 + 0x1ac0),0,0x7c,0xf2,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0xe1,0xde,0x50,0x14)
    ;
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x25a5,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    FUN_006b5ee0(*(int *)(pFVar2 + 0x1ac0),0,0xe0,0xf2,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0x145,0xde,0x50,0x14
                    );
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x25a1,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    FUN_006b5ee0(*(int *)(pFVar2 + 0x1ac0),0,0x144,0xf2,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0x19,0x106,0x50,0x14
                    );
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x25a4,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    FUN_006b5ee0(*(int *)(pFVar2 + 0x1ac0),0,0x18,0x11a,0x52,0x19,0xf,0xd);
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0x7d,0x106,0x50,0x14
                    );
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x25a3,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    FUN_006b5ee0(*(int *)(pFVar2 + 0x1ac0),0,0x7c,0x11a,0x52,0x19,0xf,0xd);
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0xe1,0x106,0xb4,0x14
                    );
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x25a2,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    FUN_006b5ee0(*(int *)(pFVar2 + 0x1ac0),0,0xe0,0x11a,0xb6,0x19,0xf,0xd);
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0x19,0x13d,0x186,
                     0x14);
    uVar9 = 0;
    iVar8 = -1;
    iVar3 = -1;
    puVar5 = (uint *)FUN_006b0140(0x259e,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0x19,0x14c,0x50,0x14
                    );
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x259f,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    FUN_006b5ee0(*(int *)(pFVar2 + 0x1ac0),0,0x18,0x160,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0x7d,0x14c,0x50,0x14
                    );
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x25a0,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    FUN_006b5ee0(*(int *)(pFVar2 + 0x1ac0),0,0x7c,0x160,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0xe1,0x14c,0x50,0x14
                    );
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x25a5,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    FUN_006b5ee0(*(int *)(pFVar2 + 0x1ac0),0,0xe0,0x160,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0x145,0x14c,0x50,
                     0x14);
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x25a1,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pFVar2 + 0x1a73),puVar5,iVar3,iVar8,uVar9);
    FUN_006b5ee0(*(int *)(pFVar2 + 0x1ac0),0,0x144,0x160,0x52,0x14,0xf,0xd);
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(pFVar2 + 0x1abc));
    FUN_006b35d0(DAT_008075a8,*(uint *)(pFVar2 + 0x1abc));
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar8 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x46c,0,iVar3,&DAT_007a4ccc,
                             s_FSGSTy__PaintInfo_007cc24c);
  if (iVar8 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x46c);
  return;
}

