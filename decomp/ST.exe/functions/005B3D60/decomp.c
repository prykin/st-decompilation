#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::SetMode */

void __thiscall MainMenuTy::SetMode(MainMenuTy *this,char param_1,int param_2)

{
  StartServTy *pSVar1;
  code *pcVar2;
  MainMenuTy *this_00;
  uint *puVar3;
  char *pcVar4;
  DWORD DVar5;
  int iVar6;
  StartServTy *this_01;
  StartServTy *this_02;
  StartServTy *this_03;
  byte bVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar13;
  uint uVar14;
  UINT resourceId;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  ccFntTy *pcVar20;
  undefined4 uVar21;
  undefined4 local_24c;
  undefined4 local_162;
  undefined4 local_155;
  undefined4 local_151;
  undefined4 local_14d;
  undefined1 local_13d;
  InternalExceptionFrame local_50;
  MainMenuTy *local_c;
  uint local_8;

  puVar8 = &this->field_017C;
  iVar10 = 0xd;
  do {
    puVar8[-0x30] = 0;
    *puVar8 = 0;
    puVar11 = (undefined4 *)((int)puVar8 + -0xbb);
    puVar8 = (undefined4 *)((int)puVar8 + 0x1fb);
    iVar10 = iVar10 + -1;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
  } while (iVar10 != 0);
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar10 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Start\\main_obj.cpp",0x16a,0,iVar10,
                               "%s","MainMenuTy::SetMode");
    if (iVar6 == 0) {
      RaiseInternalException(iVar10,0,"E:\\__titans\\Start\\main_obj.cpp",0x16a);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_c->field_1EE3 = param_1;
  if (param_1 == '\0') {
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    local_c->field_009A = 5;
    uVar14 = 0xffffffff;
    local_c->field_00BC = 0x2334;
    iVar10 = local_c->field_0174;
    cVar13 = CASE_FFFFFFFE;
    iVar12 = 0x28;
    iVar6 = 0x8c;
    puVar3 = (uint *)LoadResourceString(0x2334,HINSTANCE_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (PTR_0081176c->field_0030,puVar3,iVar6,iVar12,cVar13,uVar14,iVar15,iVar16,
                        iVar17);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(iVar10 + 8))(puVar8,uVar19,uVar21);
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    this_00->field_02B7 = 0x2335;
    iVar10 = this_00->field_036F;
    cVar13 = CASE_FFFFFFFE;
    iVar12 = 0x28;
    iVar6 = 0x8c;
    puVar3 = (uint *)LoadResourceString(0x2335,HINSTANCE_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (PTR_0081176c->field_0030,puVar3,iVar6,iVar12,cVar13,uVar14,iVar15,iVar16,
                        iVar17);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(iVar10 + 8))(puVar8,uVar19,uVar21);
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar17 = -1;
    iVar10 = this_00->field_056A;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    this_00->field_04B2 = 0x2332;
    cVar13 = CASE_FFFFFFFE;
    iVar12 = 0x28;
    iVar6 = 0x8c;
    puVar3 = (uint *)LoadResourceString(0x2332,HINSTANCE_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (PTR_0081176c->field_0030,puVar3,iVar6,iVar12,cVar13,uVar14,iVar15,iVar16,
                        iVar17);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(iVar10 + 8))(puVar8,uVar19,uVar21);
    iVar10 = this_00->field_0765;
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    cVar13 = CASE_FFFFFFFE;
    this_00->field_06AD = 0x2333;
    iVar12 = 0x28;
    iVar6 = 0x8c;
    puVar3 = (uint *)LoadResourceString(0x2333,HINSTANCE_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (PTR_0081176c->field_0030,puVar3,iVar6,iVar12,cVar13,uVar14,iVar15,iVar16,
                        iVar17);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(iVar10 + 8))(puVar8,uVar19,uVar21);
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar17 = -1;
    iVar10 = this_00->field_0960;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    this_00->field_08A8 = 0x2336;
    cVar13 = CASE_FFFFFFFE;
    iVar12 = 0x28;
    iVar6 = 0x8c;
    puVar3 = (uint *)LoadResourceString(0x2336,HINSTANCE_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (PTR_0081176c->field_0030,puVar3,iVar6,iVar12,cVar13,uVar14,iVar15,iVar16,
                        iVar17);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(iVar10 + 8))(puVar8,uVar19,uVar21);
    this_00->field_00C9 = this_00->field_0008;
    this_00->field_00CD = 2;
    this_00->field_00D1 = 0x6944;
    this_00->field_02C4 = 0x200;
    this_00->field_02C8 = 0;
    this_00->field_02CC = 0x6105;
    this_00->field_02D0 = 0;
    this_00->field_02D4 = 1;
    this_00->field_04BF = 0x200;
    this_00->field_04C3 = 0;
    this_00->field_04C7 = 0x6103;
    this_00->field_04CB = 1;
    this_00->field_06C2 = 0;
    this_00->field_08B9 = 1;
    this_00->field_08BD = 0x7102;
    Library::DKW::DDX::FUN_006ba9e0(DAT_0080759c,0xe9,0x14,0x14c,0x18,0);
    uVar19 = 0;
    pcVar20 = PTR_0081176c->field_0030;
    uVar18 = 0xffffffff;
    uVar14 = 0xfffffffe;
    puVar3 = (uint *)LoadResourceString(0x26ac,HINSTANCE_00807618);
    StartServTy::WrTextDDX(this_02,0,0xe9,0x14,0x14c,0x18,puVar3,uVar14,uVar18,pcVar20,uVar19);
    uVar9 = DAT_00807dd5 >> 0x10 & 0xff;
    uVar18 = DAT_00807dd5 & 0xffff;
    uVar14 = DAT_00807dd5 >> 0x18;
    pcVar4 = LoadResourceString(0x2329,HINSTANCE_00807618);
    wsprintfA((LPSTR)(this_00->field_1A5B + 0x3c),pcVar4,uVar14,uVar9,uVar18);
    StartServTy::WrTextDDX
              (this_00->field_1A5B + 0x3c,0,0,0x240,800,0x18,(uint *)(this_00->field_1A5B + 0x3c),
               0xfffffffe,0xffffffff,PTR_0081176c->field_0034,0);
  }
  else if (param_1 == '\x01') {
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    local_c->field_009A = 5;
    uVar14 = 0xffffffff;
    local_c->field_00BC = 0x233c;
    iVar10 = local_c->field_0174;
    cVar13 = CASE_FFFFFFFE;
    iVar12 = 0x28;
    iVar6 = 0x8c;
    puVar3 = (uint *)LoadResourceString(0x233c,HINSTANCE_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (PTR_0081176c->field_0030,puVar3,iVar6,iVar12,cVar13,uVar14,iVar15,iVar16,
                        iVar17);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(iVar10 + 8))(puVar8,uVar19,uVar21);
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    this_00->field_02B7 = 0x233d;
    iVar10 = this_00->field_036F;
    cVar13 = CASE_FFFFFFFE;
    iVar12 = 0x28;
    iVar6 = 0x8c;
    puVar3 = (uint *)LoadResourceString(0x233d,HINSTANCE_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (PTR_0081176c->field_0030,puVar3,iVar6,iVar12,cVar13,uVar14,iVar15,iVar16,
                        iVar17);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(iVar10 + 8))(puVar8,uVar19,uVar21);
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar17 = -1;
    iVar10 = this_00->field_056A;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    this_00->field_04B2 = 0x233e;
    cVar13 = CASE_FFFFFFFE;
    iVar12 = 0x28;
    iVar6 = 0x8c;
    puVar3 = (uint *)LoadResourceString(0x233e,HINSTANCE_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (PTR_0081176c->field_0030,puVar3,iVar6,iVar12,cVar13,uVar14,iVar15,iVar16,
                        iVar17);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(iVar10 + 8))(puVar8,uVar19,uVar21);
    iVar10 = this_00->field_0765;
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    cVar13 = CASE_FFFFFFFE;
    this_00->field_06AD = 0x233f;
    iVar12 = 0x28;
    iVar6 = 0x8c;
    puVar3 = (uint *)LoadResourceString(0x233f,HINSTANCE_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (PTR_0081176c->field_0030,puVar3,iVar6,iVar12,cVar13,uVar14,iVar15,iVar16,
                        iVar17);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(iVar10 + 8))(puVar8,uVar19,uVar21);
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar17 = -1;
    iVar10 = this_00->field_0960;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    this_00->field_08A8 = 0x2359;
    cVar13 = CASE_FFFFFFFE;
    iVar12 = 0x28;
    iVar6 = 0x8c;
    puVar3 = (uint *)LoadResourceString(0x2359,HINSTANCE_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (PTR_0081176c->field_0030,puVar3,iVar6,iVar12,cVar13,uVar14,iVar15,iVar16,
                        iVar17);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(iVar10 + 8))(puVar8,uVar19,uVar21);
    bVar7 = 0;
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_009A != 0) {
      do {
        uVar14 = local_8 & 0xff;
        bVar7 = bVar7 + 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8 = CONCAT31(local_8._1_3_,bVar7);
        *(undefined4 *)((int)&this_00->field_00C9 + uVar14 * 0x1fb) = 0x200;
        *(undefined4 *)((int)&this_00->field_00CD + uVar14 * 0x1fb) = 0;
      } while (bVar7 < this_00->field_009A);
    }
    this_00->field_00D1 = 0x6122;
    this_00->field_02CC = 0x611f;
    this_00->field_04C7 = 0x611f;
    this_00->field_06C2 = 0x611f;
    this_00->field_08BD = 0x6122;
    puVar8 = &local_24c;
    for (iVar10 = 0x7e; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    pSVar1 = this_00->field_1A5B;
    *(undefined2 *)puVar8 = 0;
    *(undefined1 *)((int)puVar8 + 2) = 0;
    local_155 = this_00->field_0008;
    this_00->field_00D5 = 0;
    this_00->field_02D0 = 2;
    this_00->field_04CB = 9;
    this_00->field_06C6 = 3;
    this_00->field_08C1 = 1;
    local_162 = 0x24bc;
    local_13d = 1;
    local_151 = 2;
    local_14d = 0x6943;
    if (*(MMsgTy **)(pSVar1 + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::SetPanel(*(MMsgTy **)(pSVar1 + 0x2e6),0,(int)&local_24c,0,0);
    }
    Library::DKW::DDX::FUN_006ba9e0(DAT_0080759c,0xe9,0x14,0x14c,0x18,0);
    uVar19 = 0;
    pcVar20 = PTR_0081176c->field_0030;
    uVar18 = 0xffffffff;
    uVar14 = 0xfffffffe;
    puVar3 = (uint *)LoadResourceString(0x26b0,HINSTANCE_00807618);
    StartServTy::WrTextDDX(this_01,0,0xe9,0x14,0x14c,0x18,puVar3,uVar14,uVar18,pcVar20,uVar19);
  }
  if (param_2 != 0) {
    PaintMainMenu(this_00);
    this_00->field_1AD3 = 1;
    this_00->field_1ADB = 0;
    this_00->field_1AD7 = this_00->field_0061;
    goto LAB_005b44f1;
  }
  FUN_006b5f80(DAT_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
  Library::DKW::DDX::FUN_006ba9e0(DAT_0080759c,0xe9,0x14,0x14c,0x18,0);
  if (this_00->field_1EE3 == '\0') {
    pcVar20 = PTR_0081176c->field_0030;
    resourceId = 0x26ac;
LAB_005b4465:
    uVar19 = 0;
    uVar18 = 0xffffffff;
    uVar14 = 0xfffffffe;
    puVar3 = (uint *)LoadResourceString(resourceId,HINSTANCE_00807618);
    StartServTy::WrTextDDX(this_03,0,0xe9,0x14,0x14c,0x18,puVar3,uVar14,uVar18,pcVar20,uVar19);
  }
  else if (this_00->field_1EE3 == '\x01') {
    pcVar20 = PTR_0081176c->field_0030;
    resourceId = 0x26b0;
    goto LAB_005b4465;
  }
  uVar9 = DAT_00807dd5 >> 0x10 & 0xff;
  uVar18 = DAT_00807dd5 & 0xffff;
  uVar14 = DAT_00807dd5 >> 0x18;
  pcVar4 = LoadResourceString(0x2329,HINSTANCE_00807618);
  wsprintfA((LPSTR)(this_00->field_1A5B + 0x3c),pcVar4,uVar14,uVar9,uVar18);
  StartServTy::WrTextDDX
            (this_00->field_1A5B + 0x3c,0,0,0x240,800,0x18,(uint *)(this_00->field_1A5B + 0x3c),
             0xfffffffe,0xffffffff,PTR_0081176c->field_0034,0);
LAB_005b44f1:
  local_8 = local_8 & 0xffffff00;
  if (this_00->field_009A != 0) {
    do {
      uVar14 = local_8 & 0xff;
      DVar5 = timeGetTime();
      *(DWORD *)((int)&this_00->field_0127 + uVar14 * 0x1fb) = DVar5;
      *(uint *)((int)&this_00->field_0123 + uVar14 * 0x1fb) = uVar14 * 0x96;
      (&this_00->field_00BB)[uVar14 * 0x1fb] = 1;
      bVar7 = (char)local_8 + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8 = CONCAT31(local_8._1_3_,bVar7);
    } while (bVar7 < this_00->field_009A);
  }
  this_00->field_0065 = 3;
  thunk_FUN_005b6730(this_00,1,'\0',-1);
  g_currentExceptionFrame = local_50.previous;
  return;
}

