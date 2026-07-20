
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PaintLogLogin */

void __thiscall FSGSTy::PaintLogLogin(FSGSTy *this)

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
    iVar3 = local_8->field_1AC0;
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
    ccFntTy::SetSurf(pFVar2->field_1A73,pFVar2->field_1AC0,0,0x19,0x48,0x186,0x14);
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x254f,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar2->field_1A73,puVar5,iVar3,iVar8,uVar9);
    FUN_006b5ee0(pFVar2->field_1AC0,0,0x18,0x5b,0x188,0x1b,0xf,0xd);
    ccFntTy::SetSurf(pFVar2->field_1A73,pFVar2->field_1AC0,0,0x19,0x7f,0xb4,0x14);
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x2550,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar2->field_1A73,puVar5,iVar3,iVar8,uVar9);
    FUN_006b5ee0(pFVar2->field_1AC0,0,0x18,0x92,0xb6,0x16,0xf,0xd);
    ccFntTy::SetSurf(pFVar2->field_1A73,pFVar2->field_1AC0,0,0x104,0x93,0x96,0x14);
    uVar9 = 2;
    iVar8 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x2551,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar2->field_1A73,puVar5,iVar3,iVar8,uVar9);
    FUN_006c7570(pFVar2->field_1AC0,0,0xe6,0x93,(undefined4 *)0x16,0x14,2,0xf);
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pFVar2->field_1ABC);
    FUN_006b35d0(DAT_008075a8,pFVar2->field_1ABC);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar8 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x3c0,0,iVar3,&DAT_007a4ccc,
                             s_FSGSTy__PaintLogLogin_007cc1e4);
  if (iVar8 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x3c0);
  return;
}

