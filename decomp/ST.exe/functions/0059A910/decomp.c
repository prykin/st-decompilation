#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PaintInfo */

void __thiscall FSGSTy::PaintInfo(FSGSTy *this)

{
  ushort *puVar1;
  code *pcVar2;
  FSGSTy *pFVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pFVar3 = local_8;
  if (iVar4 == 0) {
    puVar1 = local_8->field_1AC0;
    uVar8 = *(uint *)(puVar1 + 10);
    if (uVar8 == 0) {
      uVar8 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar1 + 4);
    }
    puVar5 = (undefined4 *)FUN_006b4fa0((int)puVar1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x1b,0x186,0x14);
    uVar10 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)LoadResourceString(0x254f,g_module_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pFVar3->field_1AC0,0,0x18,0x2e,0x188,0x16,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x1e,0x2e,0x17c,0x14);
    ccFntTy::WrStr(pFVar3->field_1A73,(uint *)pFVar3->field_1B0C,0,-1,0);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x43,0x6e,0x14);
    uVar10 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)LoadResourceString(0x2557,g_module_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pFVar3->field_1AC0,0,0x18,0x56,0x70,0x16,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0xa5,0x43,0x6e,0x14);
    uVar10 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)LoadResourceString(0x2558,g_module_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pFVar3->field_1AC0,0,0xa4,0x56,0x70,0x16,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x131,0x43,0x6e,0x14);
    uVar10 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)LoadResourceString(0x2559,g_module_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pFVar3->field_1AC0,0,0x130,0x56,0x70,0x16,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x6b,0x186,0x14);
    uVar10 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)LoadResourceString(0x255a,g_module_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pFVar3->field_1AC0,0,0x18,0x7e,0x188,0x4d,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0xcf,0x186,0x14);
    uVar10 = 0;
    iVar9 = -1;
    iVar4 = -1;
    puVar6 = (uint *)LoadResourceString(0x259d,g_module_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0xde,0x50,0x14);
    uVar10 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)LoadResourceString(0x259f,g_module_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pFVar3->field_1AC0,0,0x18,0xf2,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x7d,0xde,0x50,0x14);
    uVar10 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)LoadResourceString(0x25a0,g_module_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pFVar3->field_1AC0,0,0x7c,0xf2,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0xe1,0xde,0x50,0x14);
    uVar10 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)LoadResourceString(0x25a5,g_module_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pFVar3->field_1AC0,0,0xe0,0xf2,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x145,0xde,0x50,0x14);
    uVar10 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)LoadResourceString(0x25a1,g_module_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pFVar3->field_1AC0,0,0x144,0xf2,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x106,0x50,0x14);
    uVar10 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)LoadResourceString(0x25a4,g_module_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pFVar3->field_1AC0,0,0x18,0x11a,0x52,0x19,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x7d,0x106,0x50,0x14);
    uVar10 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)LoadResourceString(0x25a3,g_module_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pFVar3->field_1AC0,0,0x7c,0x11a,0x52,0x19,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0xe1,0x106,0xb4,0x14);
    uVar10 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)LoadResourceString(0x25a2,g_module_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pFVar3->field_1AC0,0,0xe0,0x11a,0xb6,0x19,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x13d,0x186,0x14);
    uVar10 = 0;
    iVar9 = -1;
    iVar4 = -1;
    puVar6 = (uint *)LoadResourceString(0x259e,g_module_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x14c,0x50,0x14);
    uVar10 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)LoadResourceString(0x259f,g_module_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pFVar3->field_1AC0,0,0x18,0x160,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x7d,0x14c,0x50,0x14);
    uVar10 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)LoadResourceString(0x25a0,g_module_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pFVar3->field_1AC0,0,0x7c,0x160,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0xe1,0x14c,0x50,0x14);
    uVar10 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)LoadResourceString(0x25a5,g_module_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pFVar3->field_1AC0,0,0xe0,0x160,0x52,0x14,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x145,0x14c,0x50,0x14);
    uVar10 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)LoadResourceString(0x25a1,g_module_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pFVar3->field_1AC0,0,0x144,0x160,0x52,0x14,0xf,0xd);
    Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,pFVar3->field_1ABC);
    FUN_006b35d0((int *)PTR_008075a8,pFVar3->field_1ABC);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x46c,0,iVar4,"%s",
                             "FSGSTy::PaintInfo");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x46c);
  return;
}

