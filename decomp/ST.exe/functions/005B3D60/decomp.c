#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::SetMode */

void __thiscall MainMenuTy::SetMode(MainMenuTy *this,char param_1,int param_2)

{
  SpriteClassTyVTable *pSVar1;
  MMsgTy *this_00;
  MainMenuTy_Record_00BB_01FB *pMVar3;
  MainMenuTy *this_01;
  int iVar9;
  uint *puVar4;
  short *psVar5;
  char *pcVar6;
  DWORD DVar7;
  int iVar6;
  int iVar8;
  StartServTy *this_02;
  StartServTy *this_03;
  StartServTy *this_04;
  StartServTy *pSVar9;
  byte bVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar14;
  uint uVar15;
  UINT resourceId;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 uVar19;
  ccFntTy *pcVar20;
  uint uVar21;
  uint uVar22;
  undefined4 local_24c;
  undefined4 local_162;
  undefined4 local_155;
  undefined4 local_151;
  undefined4 local_14d;
  undefined1 local_13d;
  InternalExceptionFrame local_50;
  MainMenuTy *local_c;
  uint local_8;

  piVar11 = &this->field_00BB[0].field_00B9.field_0008;
  iVar12 = 0xd;
  do {
    piVar11[-0x30] = 0;
    *piVar11 = 0;
    puVar13 = (undefined4 *)((int)piVar11 + -0xbb);
    piVar11 = (int *)((int)piVar11 + 0x1fb);
    iVar12 = iVar12 + -1;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
  } while (iVar12 != 0);
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar9 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_01 = local_c;
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
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar18 = -1;
    iVar17 = -1;
    iVar16 = 1;
    local_c->field_009A = 5;
    uVar15 = 0xffffffff;
    local_c->field_00BB[0].field_0001 = 0x2334;
    pSVar1 = local_c->field_00BB[0].field_00B9.vtable;
    cVar14 = CASE_FFFFFFFE;
    iVar8 = 0x28;
    pMVar3 = local_c->field_00BB;
    iVar12 = 0x8c;
    puVar4 = (uint *)LoadResourceString(0x2334,g_hINSTANCE_00807618);
    psVar5 = (short *)ccFntTy::CreateTypeSSpr
                                (g_startSystem_0081176C->field_0030,puVar4,iVar12,iVar8,cVar14,
                                 uVar15,iVar16,iVar17,iVar18);
    (*pSVar1->SetImagesPtr)(&pMVar3->field_00B9,psVar5,uVar19,uVar21);
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar18 = -1;
    iVar17 = -1;
    iVar16 = 1;
    uVar15 = 0xffffffff;
    this_01->field_00BB[1].field_0001 = 0x2335;
    pSVar1 = this_01->field_00BB[1].field_00B9.vtable;
    cVar14 = CASE_FFFFFFFE;
    iVar8 = 0x28;
    iVar12 = 0x8c;
    puVar4 = (uint *)LoadResourceString(0x2335,g_hINSTANCE_00807618);
    psVar5 = (short *)ccFntTy::CreateTypeSSpr
                                (g_startSystem_0081176C->field_0030,puVar4,iVar12,iVar8,cVar14,
                                 uVar15,iVar16,iVar17,iVar18);
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[1].field_00B9,psVar5,uVar19,uVar21);
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar18 = -1;
    pSVar1 = this_01->field_00BB[2].field_00B9.vtable;
    iVar17 = -1;
    iVar16 = 1;
    uVar15 = 0xffffffff;
    this_01->field_00BB[2].field_0001 = 0x2332;
    cVar14 = CASE_FFFFFFFE;
    iVar8 = 0x28;
    iVar12 = 0x8c;
    puVar4 = (uint *)LoadResourceString(0x2332,g_hINSTANCE_00807618);
    psVar5 = (short *)ccFntTy::CreateTypeSSpr
                                (g_startSystem_0081176C->field_0030,puVar4,iVar12,iVar8,cVar14,
                                 uVar15,iVar16,iVar17,iVar18);
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[2].field_00B9,psVar5,uVar19,uVar21);
    pSVar1 = this_01->field_00BB[3].field_00B9.vtable;
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar18 = -1;
    iVar17 = -1;
    iVar16 = 1;
    uVar15 = 0xffffffff;
    cVar14 = CASE_FFFFFFFE;
    this_01->field_00BB[3].field_0001 = 0x2333;
    iVar8 = 0x28;
    iVar12 = 0x8c;
    puVar4 = (uint *)LoadResourceString(0x2333,g_hINSTANCE_00807618);
    psVar5 = (short *)ccFntTy::CreateTypeSSpr
                                (g_startSystem_0081176C->field_0030,puVar4,iVar12,iVar8,cVar14,
                                 uVar15,iVar16,iVar17,iVar18);
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[3].field_00B9,psVar5,uVar19,uVar21);
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar18 = -1;
    pSVar1 = this_01->field_00BB[4].field_00B9.vtable;
    iVar17 = -1;
    iVar16 = 1;
    uVar15 = 0xffffffff;
    this_01->field_00BB[4].field_0001 = 0x2336;
    cVar14 = CASE_FFFFFFFE;
    iVar8 = 0x28;
    iVar12 = 0x8c;
    puVar4 = (uint *)LoadResourceString(0x2336,g_hINSTANCE_00807618);
    psVar5 = (short *)ccFntTy::CreateTypeSSpr
                                (g_startSystem_0081176C->field_0030,puVar4,iVar12,iVar8,cVar14,
                                 uVar15,iVar16,iVar17,iVar18);
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[4].field_00B9,psVar5,uVar19,uVar21);
    this_01->field_00BB[0].field_000E = this_01->field_0008;
    this_01->field_00BB[0].field_0012 = 2;
    this_01->field_00BB[0].field_0016 = 0x6944;
    this_01->field_00BB[1].field_000E = 0x200;
    this_01->field_00BB[1].field_0012 = 0;
    this_01->field_00BB[1].field_0016 = 0x6105;
    this_01->field_00BB[1].field_001A = 0;
    this_01->field_00BB[1].field_001E = 1;
    this_01->field_00BB[2].field_000E = 0x200;
    this_01->field_00BB[2].field_0012 = 0;
    this_01->field_00BB[2].field_0016 = 0x6103;
    this_01->field_00BB[2].field_001A = 1;
    this_01->field_00BB[3].field_0016 = 0;
    this_01->field_00BB[4].field_0012 = 1;
    this_01->field_00BB[4].field_0016 = 0x7102;
    Library::DKW::DDX::FUN_006ba9e0(g_dDXContext_0080759C,0xe9,0x14,0x14c,0x18,0);
    uVar22 = 0;
    pcVar20 = g_startSystem_0081176C->field_0030;
    uVar21 = 0xffffffff;
    uVar15 = 0xfffffffe;
    pcVar6 = LoadResourceString(0x26ac,g_hINSTANCE_00807618);
    StartServTy::WrTextDDX(this_03,0,0xe9,0x14,0x14c,0x18,pcVar6,uVar15,uVar21,pcVar20,uVar22);
    uVar22 = DAT_00807dd5 >> 0x10 & 0xff;
    uVar21 = DAT_00807dd5 & 0xffff;
    uVar15 = DAT_00807dd5 >> 0x18;
    pcVar6 = LoadResourceString(0x2329,g_hINSTANCE_00807618);
    wsprintfA((LPSTR)(this_01->field_00BB[0xc].field_01DC + 0x3c),pcVar6,uVar15,uVar22,uVar21);
    pSVar9 = this_01->field_00BB[0xc].field_01DC + 0x3c;
    StartServTy::WrTextDDX
              (pSVar9,0,0,0x240,800,0x18,(char *)pSVar9,0xfffffffe,0xffffffff,
               g_startSystem_0081176C->field_0034,0);
  }
  else if (param_1 == '\x01') {
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar18 = -1;
    iVar17 = -1;
    iVar16 = 1;
    local_c->field_009A = 5;
    uVar15 = 0xffffffff;
    local_c->field_00BB[0].field_0001 = 0x233c;
    pSVar1 = local_c->field_00BB[0].field_00B9.vtable;
    cVar14 = CASE_FFFFFFFE;
    iVar8 = 0x28;
    pMVar3 = local_c->field_00BB;
    iVar12 = 0x8c;
    puVar4 = (uint *)LoadResourceString(0x233c,g_hINSTANCE_00807618);
    psVar5 = (short *)ccFntTy::CreateTypeSSpr
                                (g_startSystem_0081176C->field_0030,puVar4,iVar12,iVar8,cVar14,
                                 uVar15,iVar16,iVar17,iVar18);
    (*pSVar1->SetImagesPtr)(&pMVar3->field_00B9,psVar5,uVar19,uVar21);
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar18 = -1;
    iVar17 = -1;
    iVar16 = 1;
    uVar15 = 0xffffffff;
    this_01->field_00BB[1].field_0001 = 0x233d;
    pSVar1 = this_01->field_00BB[1].field_00B9.vtable;
    cVar14 = CASE_FFFFFFFE;
    iVar8 = 0x28;
    iVar12 = 0x8c;
    puVar4 = (uint *)LoadResourceString(0x233d,g_hINSTANCE_00807618);
    psVar5 = (short *)ccFntTy::CreateTypeSSpr
                                (g_startSystem_0081176C->field_0030,puVar4,iVar12,iVar8,cVar14,
                                 uVar15,iVar16,iVar17,iVar18);
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[1].field_00B9,psVar5,uVar19,uVar21);
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar18 = -1;
    pSVar1 = this_01->field_00BB[2].field_00B9.vtable;
    iVar17 = -1;
    iVar16 = 1;
    uVar15 = 0xffffffff;
    this_01->field_00BB[2].field_0001 = 0x233e;
    cVar14 = CASE_FFFFFFFE;
    iVar8 = 0x28;
    iVar12 = 0x8c;
    puVar4 = (uint *)LoadResourceString(0x233e,g_hINSTANCE_00807618);
    psVar5 = (short *)ccFntTy::CreateTypeSSpr
                                (g_startSystem_0081176C->field_0030,puVar4,iVar12,iVar8,cVar14,
                                 uVar15,iVar16,iVar17,iVar18);
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[2].field_00B9,psVar5,uVar19,uVar21);
    pSVar1 = this_01->field_00BB[3].field_00B9.vtable;
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar18 = -1;
    iVar17 = -1;
    iVar16 = 1;
    uVar15 = 0xffffffff;
    cVar14 = CASE_FFFFFFFE;
    this_01->field_00BB[3].field_0001 = 0x233f;
    iVar8 = 0x28;
    iVar12 = 0x8c;
    puVar4 = (uint *)LoadResourceString(0x233f,g_hINSTANCE_00807618);
    psVar5 = (short *)ccFntTy::CreateTypeSSpr
                                (g_startSystem_0081176C->field_0030,puVar4,iVar12,iVar8,cVar14,
                                 uVar15,iVar16,iVar17,iVar18);
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[3].field_00B9,psVar5,uVar19,uVar21);
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar18 = -1;
    pSVar1 = this_01->field_00BB[4].field_00B9.vtable;
    iVar17 = -1;
    iVar16 = 1;
    uVar15 = 0xffffffff;
    this_01->field_00BB[4].field_0001 = 0x2359;
    cVar14 = CASE_FFFFFFFE;
    iVar8 = 0x28;
    iVar12 = 0x8c;
    puVar4 = (uint *)LoadResourceString(0x2359,g_hINSTANCE_00807618);
    psVar5 = (short *)ccFntTy::CreateTypeSSpr
                                (g_startSystem_0081176C->field_0030,puVar4,iVar12,iVar8,cVar14,
                                 uVar15,iVar16,iVar17,iVar18);
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[4].field_00B9,psVar5,uVar19,uVar21);
    bVar10 = 0;
    local_8 = local_8 & 0xffffff00;
    if (this_01->field_009A != 0) {
      do {
        uVar15 = local_8 & 0xff;
        bVar10 = bVar10 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar10));
        this_01->field_00BB[uVar15].field_000E = 0x200;
        this_01->field_00BB[uVar15].field_0012 = 0;
      } while (bVar10 < this_01->field_009A);
    }
    this_01->field_00BB[0].field_0016 = 0x6122;
    this_01->field_00BB[1].field_0016 = 0x611f;
    this_01->field_00BB[2].field_0016 = 0x611f;
    this_01->field_00BB[3].field_0016 = 0x611f;
    this_01->field_00BB[4].field_0016 = 0x6122;
    puVar13 = &local_24c;
    memset(puVar13, 0, 0x1fb); /* compiler bulk-zero initialization */
    puVar13 = (undefined4 *)((byte *)puVar13 + 0x1f8);
    pSVar9 = this_01->field_00BB[0xc].field_01DC;
    local_155 = this_01->field_0008;
    this_01->field_00BB[0].field_001A = 0;
    this_01->field_00BB[1].field_001A = 2;
    this_01->field_00BB[2].field_001A = 9;
    this_01->field_00BB[3].field_001A = 3;
    this_01->field_00BB[4].field_001A = 1;
    local_162 = 0x24bc;
    local_13d = 1;
    local_151 = 2;
    local_14d = 0x6943;
    this_00 = *(MMsgTy **)(pSVar9 + 0x2e6);
    if (this_00 != nullptr) {
      MMsgTy::SetPanel(this_00,0,(int)&local_24c,0,0);
    }
    Library::DKW::DDX::FUN_006ba9e0(g_dDXContext_0080759C,0xe9,0x14,0x14c,0x18,0);
    uVar22 = 0;
    pcVar20 = g_startSystem_0081176C->field_0030;
    uVar21 = 0xffffffff;
    uVar15 = 0xfffffffe;
    pcVar6 = LoadResourceString(0x26b0,g_hINSTANCE_00807618);
    StartServTy::WrTextDDX(this_02,0,0xe9,0x14,0x14c,0x18,pcVar6,uVar15,uVar21,pcVar20,uVar22);
  }
  if (param_2 != 0) {
    PaintMainMenu(this_01);
    this_01->field_1AD3 = 1;
    this_01->field_1ADB = 0;
    this_01->field_1AD7 = this_01->field_0061;
    goto LAB_005b44f1;
  }
  FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
  Library::DKW::DDX::FUN_006ba9e0(g_dDXContext_0080759C,0xe9,0x14,0x14c,0x18,0);
  if (this_01->field_1EE3 == '\0') {
    pcVar20 = g_startSystem_0081176C->field_0030;
    resourceId = 0x26ac;
LAB_005b4465:
    uVar22 = 0;
    uVar21 = 0xffffffff;
    uVar15 = 0xfffffffe;
    pcVar6 = LoadResourceString(resourceId,g_hINSTANCE_00807618);
    StartServTy::WrTextDDX(this_04,0,0xe9,0x14,0x14c,0x18,pcVar6,uVar15,uVar21,pcVar20,uVar22);
  }
  else if (this_01->field_1EE3 == '\x01') {
    pcVar20 = g_startSystem_0081176C->field_0030;
    resourceId = 0x26b0;
    goto LAB_005b4465;
  }
  uVar22 = DAT_00807dd5 >> 0x10 & 0xff;
  uVar21 = DAT_00807dd5 & 0xffff;
  uVar15 = DAT_00807dd5 >> 0x18;
  pcVar6 = LoadResourceString(0x2329,g_hINSTANCE_00807618);
  wsprintfA((LPSTR)(this_01->field_00BB[0xc].field_01DC + 0x3c),pcVar6,uVar15,uVar22,uVar21);
  pSVar9 = this_01->field_00BB[0xc].field_01DC + 0x3c;
  StartServTy::WrTextDDX
            (pSVar9,0,0,0x240,800,0x18,(char *)pSVar9,0xfffffffe,0xffffffff,
             g_startSystem_0081176C->field_0034,0);
LAB_005b44f1:
  local_8 = local_8 & 0xffffff00;
  if (this_01->field_009A != 0) {
    do {
      uVar15 = local_8 & 0xff;
      DVar7 = timeGetTime();
      this_01->field_00BB[uVar15].field_0028.field_0044 = DVar7;
      this_01->field_00BB[uVar15].field_0028.field_0040 = uVar15 * 0x96;
      this_01->field_00BB[uVar15].field_0000 = 1;
      bVar10 = (char)local_8 + 1;
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar10));
    } while (bVar10 < this_01->field_009A);
  }
  this_01->field_0065 = 3;
  thunk_FUN_005b6730(this_01,1,'\0',-1);
  g_currentExceptionFrame = local_50.previous;
  return;
}

