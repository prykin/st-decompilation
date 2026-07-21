
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PaintInfo */

void __thiscall FSGSTy::PaintInfo(FSGSTy *this)

{
  AnonPointee_FSGSTy_1AC0 *pAVar1;
  code *pcVar2;
  FSGSTy *pFVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *extraout_EAX;
  uint *extraout_EAX_00;
  uint *extraout_EAX_01;
  uint *extraout_EAX_02;
  uint *extraout_EAX_03;
  uint *extraout_EAX_04;
  uint *extraout_EAX_05;
  uint *extraout_EAX_06;
  uint *extraout_EAX_07;
  uint *extraout_EAX_08;
  uint *extraout_EAX_09;
  uint *extraout_EAX_10;
  uint *extraout_EAX_11;
  uint *extraout_EAX_12;
  uint *extraout_EAX_13;
  uint *extraout_EAX_14;
  uint *extraout_EAX_15;
  uint *extraout_EAX_16;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pFVar3 = local_8;
  if (iVar4 == 0) {
    pAVar1 = local_8->field_1AC0;
    uVar7 = pAVar1->field_0014;
    if (uVar7 == 0) {
      uVar7 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
              pAVar1->field_0008;
    }
    puVar5 = (undefined4 *)FUN_006b4fa0((int)pAVar1);
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x1b,0x186,0x14);
    uVar9 = 2;
    iVar8 = -1;
    iVar4 = 0;
    LoadResourceString(0x254f,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,extraout_EAX,iVar4,iVar8,uVar9);
    FUN_006b5ee0((int)pFVar3->field_1AC0,0,0x18,0x2e,0x188,0x16,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x1e,0x2e,0x17c,0x14);
    ccFntTy::WrStr(pFVar3->field_1A73,(uint *)pFVar3->field_1B0C,0,-1,0);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x43,0x6e,0x14);
    uVar9 = 2;
    iVar8 = -1;
    iVar4 = 0;
    LoadResourceString(0x2557,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,extraout_EAX_00,iVar4,iVar8,uVar9);
    FUN_006b5ee0((int)pFVar3->field_1AC0,0,0x18,0x56,0x70,0x16,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0xa5,0x43,0x6e,0x14);
    uVar9 = 2;
    iVar8 = -1;
    iVar4 = 0;
    LoadResourceString(0x2558,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,extraout_EAX_01,iVar4,iVar8,uVar9);
    FUN_006b5ee0((int)pFVar3->field_1AC0,0,0xa4,0x56,0x70,0x16,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x131,0x43,0x6e,0x14);
    uVar9 = 2;
    iVar8 = -1;
    iVar4 = 0;
    LoadResourceString(0x2559,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,extraout_EAX_02,iVar4,iVar8,uVar9);
    FUN_006b5ee0((int)pFVar3->field_1AC0,0,0x130,0x56,0x70,0x16,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x6b,0x186,0x14);
    uVar9 = 2;
    iVar8 = -1;
    iVar4 = 0;
    LoadResourceString(0x255a,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,extraout_EAX_03,iVar4,iVar8,uVar9);
    FUN_006b5ee0((int)pFVar3->field_1AC0,0,0x18,0x7e,0x188,0x4d,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0xcf,0x186,0x14);
    uVar9 = 0;
    iVar8 = -1;
    iVar4 = -1;
    LoadResourceString(0x259d,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,extraout_EAX_04,iVar4,iVar8,uVar9);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0xde,0x50,0x14);
    uVar9 = 2;
    iVar8 = -1;
    iVar4 = 0;
    LoadResourceString(0x259f,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,extraout_EAX_05,iVar4,iVar8,uVar9);
    FUN_006b5ee0((int)pFVar3->field_1AC0,0,0x18,0xf2,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x7d,0xde,0x50,0x14);
    uVar9 = 2;
    iVar8 = -1;
    iVar4 = 0;
    LoadResourceString(0x25a0,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,extraout_EAX_06,iVar4,iVar8,uVar9);
    FUN_006b5ee0((int)pFVar3->field_1AC0,0,0x7c,0xf2,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0xe1,0xde,0x50,0x14);
    uVar9 = 2;
    iVar8 = -1;
    iVar4 = 0;
    LoadResourceString(0x25a5,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,extraout_EAX_07,iVar4,iVar8,uVar9);
    FUN_006b5ee0((int)pFVar3->field_1AC0,0,0xe0,0xf2,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x145,0xde,0x50,0x14);
    uVar9 = 2;
    iVar8 = -1;
    iVar4 = 0;
    LoadResourceString(0x25a1,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,extraout_EAX_08,iVar4,iVar8,uVar9);
    FUN_006b5ee0((int)pFVar3->field_1AC0,0,0x144,0xf2,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x106,0x50,0x14);
    uVar9 = 2;
    iVar8 = -1;
    iVar4 = 0;
    LoadResourceString(0x25a4,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,extraout_EAX_09,iVar4,iVar8,uVar9);
    FUN_006b5ee0((int)pFVar3->field_1AC0,0,0x18,0x11a,0x52,0x19,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x7d,0x106,0x50,0x14);
    uVar9 = 2;
    iVar8 = -1;
    iVar4 = 0;
    LoadResourceString(0x25a3,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,extraout_EAX_10,iVar4,iVar8,uVar9);
    FUN_006b5ee0((int)pFVar3->field_1AC0,0,0x7c,0x11a,0x52,0x19,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0xe1,0x106,0xb4,0x14);
    uVar9 = 2;
    iVar8 = -1;
    iVar4 = 0;
    LoadResourceString(0x25a2,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,extraout_EAX_11,iVar4,iVar8,uVar9);
    FUN_006b5ee0((int)pFVar3->field_1AC0,0,0xe0,0x11a,0xb6,0x19,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x13d,0x186,0x14);
    uVar9 = 0;
    iVar8 = -1;
    iVar4 = -1;
    LoadResourceString(0x259e,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,extraout_EAX_12,iVar4,iVar8,uVar9);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x14c,0x50,0x14);
    uVar9 = 2;
    iVar8 = -1;
    iVar4 = 0;
    LoadResourceString(0x259f,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,extraout_EAX_13,iVar4,iVar8,uVar9);
    FUN_006b5ee0((int)pFVar3->field_1AC0,0,0x18,0x160,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x7d,0x14c,0x50,0x14);
    uVar9 = 2;
    iVar8 = -1;
    iVar4 = 0;
    LoadResourceString(0x25a0,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,extraout_EAX_14,iVar4,iVar8,uVar9);
    FUN_006b5ee0((int)pFVar3->field_1AC0,0,0x7c,0x160,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0xe1,0x14c,0x50,0x14);
    uVar9 = 2;
    iVar8 = -1;
    iVar4 = 0;
    LoadResourceString(0x25a5,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,extraout_EAX_15,iVar4,iVar8,uVar9);
    FUN_006b5ee0((int)pFVar3->field_1AC0,0,0xe0,0x160,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x145,0x14c,0x50,0x14);
    uVar9 = 2;
    iVar8 = -1;
    iVar4 = 0;
    LoadResourceString(0x25a1,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,extraout_EAX_16,iVar4,iVar8,uVar9);
    FUN_006b5ee0((int)pFVar3->field_1AC0,0,0x144,0x160,0x52,0x14,0xf,0xd);
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pFVar3->field_1ABC);
    FUN_006b35d0(DAT_008075a8,pFVar3->field_1ABC);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar8 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x46c,0,iVar4,&DAT_007a4ccc,
                             s_FSGSTy__PaintInfo_007cc24c);
  if (iVar8 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x46c);
  return;
}

