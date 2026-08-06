#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::SetMode */

void __thiscall MainMenuTy::SetMode(MainMenuTy *this,char param_1,int param_2)

{
  StartServTy *pSVar1;
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
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar12;
  uint uVar13;
  UINT resourceId;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  ccFntTy *pcVar19;
  undefined4 uVar20;
  uint uVar21;
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
  iVar9 = 0xd;
  do {
    puVar8[-0x30] = 0;
    *puVar8 = 0;
    puVar10 = (undefined4 *)((int)puVar8 + -0xbb);
    puVar8 = (undefined4 *)((int)puVar8 + 0x1fb);
    iVar9 = iVar9 + -1;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
  } while (iVar9 != 0);
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar9 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Start\\main_obj.cpp",0x16a,0,iVar9,"%s"
                               ,"MainMenuTy::SetMode");
    if (iVar6 == 0) {
      RaiseInternalException(iVar9,0,"E:\\__titans\\Start\\main_obj.cpp",0x16a);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_c->field_1EE3 = param_1;
  if (param_1 == '\0') {
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar16 = -1;
    iVar15 = -1;
    iVar14 = 1;
    local_c->field_009A = 5;
    uVar13 = 0xffffffff;
    local_c->field_00BC = 0x2334;
    iVar9 = local_c->field_0174;
    cVar12 = CASE_FFFFFFFE;
    iVar11 = 0x28;
    iVar6 = 0x8c;
    puVar3 = (uint *)LoadResourceString(0x2334,g_hINSTANCE_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (g_startSystem_0081176C->field_0030,puVar3,iVar6,iVar11,cVar12,uVar13,iVar14,
                        iVar15,iVar16);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(iVar9 + 8))(puVar8,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar16 = -1;
    iVar15 = -1;
    iVar14 = 1;
    uVar13 = 0xffffffff;
    this_00->field_02B7 = 0x2335;
    iVar9 = this_00->field_036F;
    cVar12 = CASE_FFFFFFFE;
    iVar11 = 0x28;
    iVar6 = 0x8c;
    puVar3 = (uint *)LoadResourceString(0x2335,g_hINSTANCE_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (g_startSystem_0081176C->field_0030,puVar3,iVar6,iVar11,cVar12,uVar13,iVar14,
                        iVar15,iVar16);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(iVar9 + 8))(puVar8,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar16 = -1;
    iVar9 = this_00->field_056A;
    iVar15 = -1;
    iVar14 = 1;
    uVar13 = 0xffffffff;
    this_00->field_04B2 = 0x2332;
    cVar12 = CASE_FFFFFFFE;
    iVar11 = 0x28;
    iVar6 = 0x8c;
    puVar3 = (uint *)LoadResourceString(0x2332,g_hINSTANCE_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (g_startSystem_0081176C->field_0030,puVar3,iVar6,iVar11,cVar12,uVar13,iVar14,
                        iVar15,iVar16);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(iVar9 + 8))(puVar8,uVar18,uVar20);
    iVar9 = this_00->field_0765;
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar16 = -1;
    iVar15 = -1;
    iVar14 = 1;
    uVar13 = 0xffffffff;
    cVar12 = CASE_FFFFFFFE;
    this_00->field_06AD = 0x2333;
    iVar11 = 0x28;
    iVar6 = 0x8c;
    puVar3 = (uint *)LoadResourceString(0x2333,g_hINSTANCE_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (g_startSystem_0081176C->field_0030,puVar3,iVar6,iVar11,cVar12,uVar13,iVar14,
                        iVar15,iVar16);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(iVar9 + 8))(puVar8,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar16 = -1;
    iVar9 = this_00->field_0960;
    iVar15 = -1;
    iVar14 = 1;
    uVar13 = 0xffffffff;
    this_00->field_08A8 = 0x2336;
    cVar12 = CASE_FFFFFFFE;
    iVar11 = 0x28;
    iVar6 = 0x8c;
    puVar3 = (uint *)LoadResourceString(0x2336,g_hINSTANCE_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (g_startSystem_0081176C->field_0030,puVar3,iVar6,iVar11,cVar12,uVar13,iVar14,
                        iVar15,iVar16);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(iVar9 + 8))(puVar8,uVar18,uVar20);
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
    Library::DKW::DDX::FUN_006ba9e0(g_dDXContext_0080759C,0xe9,0x14,0x14c,0x18,0);
    uVar21 = 0;
    pcVar19 = g_startSystem_0081176C->field_0030;
    uVar17 = 0xffffffff;
    uVar13 = 0xfffffffe;
    puVar3 = (uint *)LoadResourceString(0x26ac,g_hINSTANCE_00807618);
    StartServTy::WrTextDDX(this_02,0,0xe9,0x14,0x14c,0x18,puVar3,uVar13,uVar17,pcVar19,uVar21);
    uVar21 = DAT_00807dd5 >> 0x10 & 0xff;
    uVar17 = DAT_00807dd5 & 0xffff;
    uVar13 = DAT_00807dd5 >> 0x18;
    pcVar4 = LoadResourceString(0x2329,g_hINSTANCE_00807618);
    wsprintfA((LPSTR)(this_00->field_1A5B + 0x3c),pcVar4,uVar13,uVar21,uVar17);
    StartServTy::WrTextDDX
              (this_00->field_1A5B + 0x3c,0,0,0x240,800,0x18,(uint *)(this_00->field_1A5B + 0x3c),
               0xfffffffe,0xffffffff,g_startSystem_0081176C->field_0034,0);
  }
  else if (param_1 == '\x01') {
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar16 = -1;
    iVar15 = -1;
    iVar14 = 1;
    local_c->field_009A = 5;
    uVar13 = 0xffffffff;
    local_c->field_00BC = 0x233c;
    iVar9 = local_c->field_0174;
    cVar12 = CASE_FFFFFFFE;
    iVar11 = 0x28;
    iVar6 = 0x8c;
    puVar3 = (uint *)LoadResourceString(0x233c,g_hINSTANCE_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (g_startSystem_0081176C->field_0030,puVar3,iVar6,iVar11,cVar12,uVar13,iVar14,
                        iVar15,iVar16);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(iVar9 + 8))(puVar8,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar16 = -1;
    iVar15 = -1;
    iVar14 = 1;
    uVar13 = 0xffffffff;
    this_00->field_02B7 = 0x233d;
    iVar9 = this_00->field_036F;
    cVar12 = CASE_FFFFFFFE;
    iVar11 = 0x28;
    iVar6 = 0x8c;
    puVar3 = (uint *)LoadResourceString(0x233d,g_hINSTANCE_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (g_startSystem_0081176C->field_0030,puVar3,iVar6,iVar11,cVar12,uVar13,iVar14,
                        iVar15,iVar16);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(iVar9 + 8))(puVar8,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar16 = -1;
    iVar9 = this_00->field_056A;
    iVar15 = -1;
    iVar14 = 1;
    uVar13 = 0xffffffff;
    this_00->field_04B2 = 0x233e;
    cVar12 = CASE_FFFFFFFE;
    iVar11 = 0x28;
    iVar6 = 0x8c;
    puVar3 = (uint *)LoadResourceString(0x233e,g_hINSTANCE_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (g_startSystem_0081176C->field_0030,puVar3,iVar6,iVar11,cVar12,uVar13,iVar14,
                        iVar15,iVar16);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(iVar9 + 8))(puVar8,uVar18,uVar20);
    iVar9 = this_00->field_0765;
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar16 = -1;
    iVar15 = -1;
    iVar14 = 1;
    uVar13 = 0xffffffff;
    cVar12 = CASE_FFFFFFFE;
    this_00->field_06AD = 0x233f;
    iVar11 = 0x28;
    iVar6 = 0x8c;
    puVar3 = (uint *)LoadResourceString(0x233f,g_hINSTANCE_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (g_startSystem_0081176C->field_0030,puVar3,iVar6,iVar11,cVar12,uVar13,iVar14,
                        iVar15,iVar16);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(iVar9 + 8))(puVar8,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar16 = -1;
    iVar9 = this_00->field_0960;
    iVar15 = -1;
    iVar14 = 1;
    uVar13 = 0xffffffff;
    this_00->field_08A8 = 0x2359;
    cVar12 = CASE_FFFFFFFE;
    iVar11 = 0x28;
    iVar6 = 0x8c;
    puVar3 = (uint *)LoadResourceString(0x2359,g_hINSTANCE_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (g_startSystem_0081176C->field_0030,puVar3,iVar6,iVar11,cVar12,uVar13,iVar14,
                        iVar15,iVar16);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(iVar9 + 8))(puVar8,uVar18,uVar20);
    bVar7 = 0;
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_009A != 0) {
      do {
        uVar13 = local_8 & 0xff;
        bVar7 = bVar7 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar7));
        *(undefined4 *)((int)&this_00->field_00C9 + uVar13 * 0x1fb) = 0x200;
        *(undefined4 *)((int)&this_00->field_00CD + uVar13 * 0x1fb) = 0;
      } while (bVar7 < this_00->field_009A);
    }
    this_00->field_00D1 = 0x6122;
    this_00->field_02CC = 0x611f;
    this_00->field_04C7 = 0x611f;
    this_00->field_06C2 = 0x611f;
    this_00->field_08BD = 0x6122;
    puVar8 = &local_24c;
    memset(puVar8, 0, 0x1fb); /* compiler bulk-zero initialization */
    puVar8 = (undefined4 *)((byte *)puVar8 + 0x1f8);
    pSVar1 = this_00->field_1A5B;
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
    if (*(MMsgTy **)(pSVar1 + 0x2e6) != nullptr) {
      MMsgTy::SetPanel(*(MMsgTy **)(pSVar1 + 0x2e6),0,(int)&local_24c,0,0);
    }
    Library::DKW::DDX::FUN_006ba9e0(g_dDXContext_0080759C,0xe9,0x14,0x14c,0x18,0);
    uVar21 = 0;
    pcVar19 = g_startSystem_0081176C->field_0030;
    uVar17 = 0xffffffff;
    uVar13 = 0xfffffffe;
    puVar3 = (uint *)LoadResourceString(0x26b0,g_hINSTANCE_00807618);
    StartServTy::WrTextDDX(this_01,0,0xe9,0x14,0x14c,0x18,puVar3,uVar13,uVar17,pcVar19,uVar21);
  }
  if (param_2 != 0) {
    PaintMainMenu(this_00);
    this_00->field_1AD3 = 1;
    this_00->field_1ADB = 0;
    this_00->field_1AD7 = this_00->field_0061;
    goto LAB_005b44f1;
  }
  FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
  Library::DKW::DDX::FUN_006ba9e0(g_dDXContext_0080759C,0xe9,0x14,0x14c,0x18,0);
  if (this_00->field_1EE3 == '\0') {
    pcVar19 = g_startSystem_0081176C->field_0030;
    resourceId = 0x26ac;
LAB_005b4465:
    uVar21 = 0;
    uVar17 = 0xffffffff;
    uVar13 = 0xfffffffe;
    puVar3 = (uint *)LoadResourceString(resourceId,g_hINSTANCE_00807618);
    StartServTy::WrTextDDX(this_03,0,0xe9,0x14,0x14c,0x18,puVar3,uVar13,uVar17,pcVar19,uVar21);
  }
  else if (this_00->field_1EE3 == '\x01') {
    pcVar19 = g_startSystem_0081176C->field_0030;
    resourceId = 0x26b0;
    goto LAB_005b4465;
  }
  uVar21 = DAT_00807dd5 >> 0x10 & 0xff;
  uVar17 = DAT_00807dd5 & 0xffff;
  uVar13 = DAT_00807dd5 >> 0x18;
  pcVar4 = LoadResourceString(0x2329,g_hINSTANCE_00807618);
  wsprintfA((LPSTR)(this_00->field_1A5B + 0x3c),pcVar4,uVar13,uVar21,uVar17);
  StartServTy::WrTextDDX
            (this_00->field_1A5B + 0x3c,0,0,0x240,800,0x18,(uint *)(this_00->field_1A5B + 0x3c),
             0xfffffffe,0xffffffff,g_startSystem_0081176C->field_0034,0);
LAB_005b44f1:
  local_8 = local_8 & 0xffffff00;
  if (this_00->field_009A != 0) {
    do {
      uVar13 = local_8 & 0xff;
      DVar5 = timeGetTime();
      *(DWORD *)((int)&this_00->field_0127 + uVar13 * 0x1fb) = DVar5;
      *(uint *)((int)&this_00->field_0123 + uVar13 * 0x1fb) = uVar13 * 0x96;
      (&this_00->field_00BB)[uVar13 * 0x1fb] = 1;
      bVar7 = (char)local_8 + 1;
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar7));
    } while (bVar7 < this_00->field_009A);
  }
  this_00->field_0065 = 3;
  thunk_FUN_005b6730(this_00,1,'\0',-1);
  g_currentExceptionFrame = local_50.previous;
  return;
}

