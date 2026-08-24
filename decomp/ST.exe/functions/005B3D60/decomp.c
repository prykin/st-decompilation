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
  char *pcVar4;
  short *psVar5;
  DWORD DVar6;
  int iVar6;
  int iVar7;
  StartServTy *this_02;
  StartServTy *this_03;
  StartServTy *this_04;
  StartServTy *pSVar8;
  byte bVar9;
  int *piVar10;
  int iVar11;
  uint *puVar12;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar13;
  uint uVar14;
  UINT resourceId;
  int iVar15;
  int iVar16;
  int iVar17;
  byte uVar18;
  ccFntTy *pcVar19;
  uint uVar20;
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

  piVar10 = &this->field_00BB[0].field_00B9.field_0008;
  iVar11 = 0xd;
  do {
    piVar10[-0x30] = 0;
    *piVar10 = 0;
    puVar12 = (undefined4 *)((int)piVar10 + -0xbb);
    piVar10 = (int *)((int)piVar10 + 0x1fb);
    iVar11 = iVar11 + -1;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
  } while (iVar11 != 0);
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
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    local_c->field_009A = 5;
    uVar14 = 0xffffffff;
    local_c->field_00BB[0].field_0001 = 0x2334;
    pSVar1 = local_c->field_00BB[0].field_00B9.vtable;
    cVar13 = CASE_FFFFFFFE;
    iVar7 = 0x28;
    pMVar3 = local_c->field_00BB;
    iVar11 = 0x8c;
    pcVar4 = LoadResourceString(0x2334,g_hINSTANCE_00807618);
    psVar5 = (short *)ccFntTy::CreateTypeSSpr
                                ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar11,iVar7,
                                 cVar13,uVar14,iVar15,iVar16,iVar17);
    /* ST_CALLSITE[005B4138]: CALL dword ptr [EBX + 0x8] */
    (*pSVar1->SetImagesPtr)(&pMVar3->field_00B9,psVar5,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    this_01->field_00BB[1].field_0001 = 0x2335;
    pSVar1 = this_01->field_00BB[1].field_00B9.vtable;
    cVar13 = CASE_FFFFFFFE;
    iVar7 = 0x28;
    iVar11 = 0x8c;
    pcVar4 = LoadResourceString(0x2335,g_hINSTANCE_00807618);
    psVar5 = (short *)ccFntTy::CreateTypeSSpr
                                ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar11,iVar7,
                                 cVar13,uVar14,iVar15,iVar16,iVar17);
    /* ST_CALLSITE[005B4188]: CALL dword ptr [EBX + 0x8] */
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[1].field_00B9,psVar5,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    pSVar1 = this_01->field_00BB[2].field_00B9.vtable;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    this_01->field_00BB[2].field_0001 = 0x2332;
    cVar13 = CASE_FFFFFFFE;
    iVar7 = 0x28;
    iVar11 = 0x8c;
    pcVar4 = LoadResourceString(0x2332,g_hINSTANCE_00807618);
    psVar5 = (short *)ccFntTy::CreateTypeSSpr
                                ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar11,iVar7,
                                 cVar13,uVar14,iVar15,iVar16,iVar17);
    /* ST_CALLSITE[005B41D8]: CALL dword ptr [EBX + 0x8] */
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[2].field_00B9,psVar5,uVar18,uVar20);
    pSVar1 = this_01->field_00BB[3].field_00B9.vtable;
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    cVar13 = CASE_FFFFFFFE;
    this_01->field_00BB[3].field_0001 = 0x2333;
    iVar7 = 0x28;
    iVar11 = 0x8c;
    pcVar4 = LoadResourceString(0x2333,g_hINSTANCE_00807618);
    psVar5 = (short *)ccFntTy::CreateTypeSSpr
                                ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar11,iVar7,
                                 cVar13,uVar14,iVar15,iVar16,iVar17);
    /* ST_CALLSITE[005B4229]: CALL dword ptr [EBX + 0x8] */
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[3].field_00B9,psVar5,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    pSVar1 = this_01->field_00BB[4].field_00B9.vtable;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    this_01->field_00BB[4].field_0001 = 0x2336;
    cVar13 = CASE_FFFFFFFE;
    iVar7 = 0x28;
    iVar11 = 0x8c;
    pcVar4 = LoadResourceString(0x2336,g_hINSTANCE_00807618);
    psVar5 = (short *)ccFntTy::CreateTypeSSpr
                                ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar11,iVar7,
                                 cVar13,uVar14,iVar15,iVar16,iVar17);
    /* ST_CALLSITE[005B4279]: CALL dword ptr [EBX + 0x8] */
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[4].field_00B9,psVar5,uVar18,uVar20);
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
    uVar21 = 0;
    pcVar19 = (ccFntTy *)g_startSystem_0081176C->field_0030;
    uVar20 = 0xffffffff;
    uVar14 = 0xfffffffe;
    pcVar4 = LoadResourceString(0x26ac,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005B4342]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    StartServTy::WrTextDDX(this_03,0,0xe9,0x14,0x14c,0x18,pcVar4,uVar14,uVar20,pcVar19,uVar21);
    uVar21 = DAT_00807dd5 >> 0x10 & 0xff;
    uVar20 = DAT_00807dd5 & 0xffff;
    uVar14 = DAT_00807dd5 >> 0x18;
    pcVar4 = LoadResourceString(0x2329,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005B4380]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)(this_01->field_00BB[0xc].field_01DC + 0x3c),pcVar4,uVar14,uVar21,uVar20);
    pSVar8 = this_01->field_00BB[0xc].field_01DC + 0x3c;
    /* ST_CALLSITE[005B43AD]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    StartServTy::WrTextDDX
              (pSVar8,0,0,0x240,800,0x18,(char *)pSVar8,0xfffffffe,0xffffffff,
               g_startSystem_0081176C->field_0034,0);
  }
  else if (param_1 == '\x01') {
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    local_c->field_009A = 5;
    uVar14 = 0xffffffff;
    local_c->field_00BB[0].field_0001 = 0x233c;
    pSVar1 = local_c->field_00BB[0].field_00B9.vtable;
    cVar13 = CASE_FFFFFFFE;
    iVar7 = 0x28;
    pMVar3 = local_c->field_00BB;
    iVar11 = 0x8c;
    pcVar4 = LoadResourceString(0x233c,g_hINSTANCE_00807618);
    psVar5 = (short *)ccFntTy::CreateTypeSSpr
                                ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar11,iVar7,
                                 cVar13,uVar14,iVar15,iVar16,iVar17);
    /* ST_CALLSITE[005B3E40]: CALL dword ptr [EBX + 0x8] */
    (*pSVar1->SetImagesPtr)(&pMVar3->field_00B9,psVar5,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    this_01->field_00BB[1].field_0001 = 0x233d;
    pSVar1 = this_01->field_00BB[1].field_00B9.vtable;
    cVar13 = CASE_FFFFFFFE;
    iVar7 = 0x28;
    iVar11 = 0x8c;
    pcVar4 = LoadResourceString(0x233d,g_hINSTANCE_00807618);
    psVar5 = (short *)ccFntTy::CreateTypeSSpr
                                ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar11,iVar7,
                                 cVar13,uVar14,iVar15,iVar16,iVar17);
    /* ST_CALLSITE[005B3E90]: CALL dword ptr [EBX + 0x8] */
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[1].field_00B9,psVar5,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    pSVar1 = this_01->field_00BB[2].field_00B9.vtable;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    this_01->field_00BB[2].field_0001 = 0x233e;
    cVar13 = CASE_FFFFFFFE;
    iVar7 = 0x28;
    iVar11 = 0x8c;
    pcVar4 = LoadResourceString(0x233e,g_hINSTANCE_00807618);
    psVar5 = (short *)ccFntTy::CreateTypeSSpr
                                ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar11,iVar7,
                                 cVar13,uVar14,iVar15,iVar16,iVar17);
    /* ST_CALLSITE[005B3EE1]: CALL dword ptr [EBX + 0x8] */
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[2].field_00B9,psVar5,uVar18,uVar20);
    pSVar1 = this_01->field_00BB[3].field_00B9.vtable;
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    cVar13 = CASE_FFFFFFFE;
    this_01->field_00BB[3].field_0001 = 0x233f;
    iVar7 = 0x28;
    iVar11 = 0x8c;
    pcVar4 = LoadResourceString(0x233f,g_hINSTANCE_00807618);
    psVar5 = (short *)ccFntTy::CreateTypeSSpr
                                ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar11,iVar7,
                                 cVar13,uVar14,iVar15,iVar16,iVar17);
    /* ST_CALLSITE[005B3F31]: CALL dword ptr [EBX + 0x8] */
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[3].field_00B9,psVar5,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    pSVar1 = this_01->field_00BB[4].field_00B9.vtable;
    iVar16 = -1;
    iVar15 = 1;
    uVar14 = 0xffffffff;
    this_01->field_00BB[4].field_0001 = 0x2359;
    cVar13 = CASE_FFFFFFFE;
    iVar7 = 0x28;
    iVar11 = 0x8c;
    pcVar4 = LoadResourceString(0x2359,g_hINSTANCE_00807618);
    psVar5 = (short *)ccFntTy::CreateTypeSSpr
                                ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar11,iVar7,
                                 cVar13,uVar14,iVar15,iVar16,iVar17);
    /* ST_CALLSITE[005B3F81]: CALL dword ptr [EBX + 0x8] */
    (*pSVar1->SetImagesPtr)(&this_01->field_00BB[4].field_00B9,psVar5,uVar18,uVar20);
    bVar9 = 0;
    local_8 = local_8 & 0xffffff00;
    if (this_01->field_009A != 0) {
      do {
        uVar14 = local_8 & 0xff;
        bVar9 = bVar9 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar9));
        this_01->field_00BB[uVar14].field_000E = 0x200;
        this_01->field_00BB[uVar14].field_0012 = 0;
      } while (bVar9 < this_01->field_009A);
    }
    this_01->field_00BB[0].field_0016 = 0x6122;
    this_01->field_00BB[1].field_0016 = 0x611f;
    this_01->field_00BB[2].field_0016 = 0x611f;
    this_01->field_00BB[3].field_0016 = 0x611f;
    this_01->field_00BB[4].field_0016 = 0x6122;
    puVar12 = &local_24c;
    memset(puVar12, 0, 0x1fb); /* compiler bulk-zero initialization */
    puVar12 = (undefined4 *)((byte *)puVar12 + 0x1f8);
    pSVar8 = this_01->field_00BB[0xc].field_01DC;
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
    this_00 = *(MMsgTy **)(pSVar8 + 0x2e6);
    if (this_00 != nullptr) {
      /* ST_CALLSITE[005B4085]: CALL 0x00401717; direct=00401717 MMsgTy::SetPanel */
      MMsgTy::SetPanel(this_00,0,(int)&local_24c,0,0);
    }
    Library::DKW::DDX::FUN_006ba9e0(g_dDXContext_0080759C,0xe9,0x14,0x14c,0x18,0);
    uVar21 = 0;
    pcVar19 = (ccFntTy *)g_startSystem_0081176C->field_0030;
    uVar20 = 0xffffffff;
    uVar14 = 0xfffffffe;
    pcVar4 = LoadResourceString(0x26b0,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005B40D6]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    StartServTy::WrTextDDX(this_02,0,0xe9,0x14,0x14c,0x18,pcVar4,uVar14,uVar20,pcVar19,uVar21);
  }
  if (param_2 != 0) {
    /* ST_CALLSITE[005B43BE]: CALL 0x004059b1; direct=004059B1 MainMenuTy::PaintMainMenu */
    PaintMainMenu(this_01);
    this_01->field_1AD3 = 1;
    this_01->field_1ADB = 0;
    this_01->field_1AD7 = this_01->field_0061;
    goto LAB_005b44f1;
  }
  FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
  Library::DKW::DDX::FUN_006ba9e0(g_dDXContext_0080759C,0xe9,0x14,0x14c,0x18,0);
  if (this_01->field_1EE3 == '\0') {
    pcVar19 = (ccFntTy *)g_startSystem_0081176C->field_0030;
    resourceId = 0x26ac;
LAB_005b4465:
    uVar21 = 0;
    uVar20 = 0xffffffff;
    uVar14 = 0xfffffffe;
    pcVar4 = LoadResourceString(resourceId,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005B447B]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    StartServTy::WrTextDDX(this_04,0,0xe9,0x14,0x14c,0x18,pcVar4,uVar14,uVar20,pcVar19,uVar21);
  }
  else if (this_01->field_1EE3 == '\x01') {
    pcVar19 = (ccFntTy *)g_startSystem_0081176C->field_0030;
    resourceId = 0x26b0;
    goto LAB_005b4465;
  }
  uVar21 = DAT_00807dd5 >> 0x10 & 0xff;
  uVar20 = DAT_00807dd5 & 0xffff;
  uVar14 = DAT_00807dd5 >> 0x18;
  pcVar4 = LoadResourceString(0x2329,g_hINSTANCE_00807618);
  /* ST_CALLSITE[005B44B9]: CALL dword ptr [0x0085bde8] */
  wsprintfA((LPSTR)(this_01->field_00BB[0xc].field_01DC + 0x3c),pcVar4,uVar14,uVar21,uVar20);
  pSVar8 = this_01->field_00BB[0xc].field_01DC + 0x3c;
  /* ST_CALLSITE[005B44E9]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
  StartServTy::WrTextDDX
            (pSVar8,0,0,0x240,800,0x18,(char *)pSVar8,0xfffffffe,0xffffffff,
             g_startSystem_0081176C->field_0034,0);
LAB_005b44f1:
  local_8 = local_8 & 0xffffff00;
  if (this_01->field_009A != 0) {
    do {
      uVar14 = local_8 & 0xff;
      /* ST_CALLSITE[005B451C]: CALL dword ptr [0x0085bedc] */
      DVar6 = timeGetTime();
      this_01->field_00BB[uVar14].field_0028.field_0044 = DVar6;
      this_01->field_00BB[uVar14].field_0028.field_0040 = uVar14 * 0x96;
      this_01->field_00BB[uVar14].field_0000 = 1;
      bVar9 = (char)local_8 + 1;
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar9));
    } while (bVar9 < this_01->field_009A);
  }
  this_01->field_0065 = 3;
  thunk_FUN_005b6730(this_01,1,'\0',-1);
  g_currentExceptionFrame = local_50.previous;
  return;
}

