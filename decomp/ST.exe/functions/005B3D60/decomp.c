
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::SetMode */

void __thiscall MainMenuTy::SetMode(MainMenuTy *this,char param_1,int param_2)

{
  MMsgTy *this_00;
  code *pcVar1;
  MainMenuTy *this_01;
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
  char *text;
  uint *extraout_EAX_11;
  char *text_00;
  DWORD DVar2;
  int iVar3;
  StartServTy *this_02;
  StartServTy *this_03;
  StartServTy *this_04;
  StartServTy *pSVar4;
  byte bVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  int iVar8;
  void *unaff_EDI;
  undefined4 *puVar9;
  int iVar10;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar11;
  uint uVar12;
  UINT resourceId;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  ccFntTy *pcVar18;
  undefined4 uVar19;
  undefined4 local_24c;
  undefined4 local_162;
  undefined4 local_155;
  undefined4 local_151;
  undefined4 local_14d;
  undefined1 local_13d;
  InternalExceptionFrame local_50;
  MainMenuTy *local_c;
  uint local_8;
  
  puVar6 = &this->field_017C;
  iVar8 = 0xd;
  do {
    puVar6[-0x30] = 0;
    *puVar6 = 0;
    puVar9 = (undefined4 *)((int)puVar6 + -0xbb);
    puVar6 = (undefined4 *)((int)puVar6 + 0x1fb);
    iVar8 = iVar8 + -1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
  } while (iVar8 != 0);
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar8 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_c;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Start_main_obj_cpp_007cc8e8,0x16a,0,iVar8,&DAT_007a4ccc
                               ,s_MainMenuTy__SetMode_007cc9e0);
    if (iVar3 == 0) {
      RaiseInternalException(iVar8,0,s_E____titans_Start_main_obj_cpp_007cc8e8,0x16a);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_c->field_1EE3 = param_1;
  if (param_1 == '\0') {
    uVar19 = 0xffffffff;
    uVar17 = 7;
    iVar15 = -1;
    iVar14 = -1;
    iVar13 = 1;
    local_c->field_009A = 5;
    uVar12 = 0xffffffff;
    local_c->field_00BC = 0x2334;
    iVar8 = local_c->field_0174;
    cVar11 = CASE_FFFFFFFE;
    iVar10 = 0x28;
    iVar3 = 0x8c;
    LoadResourceString(0x2334,HINSTANCE_00807618);
    puVar6 = ccFntTy::CreateTypeSSpr
                       ((ccFntTy *)PTR_0081176c->field_0030,extraout_EAX_05,iVar3,iVar10,cVar11,
                        uVar12,iVar13,iVar14,iVar15);
    (**(code **)(iVar8 + 8))(puVar6,uVar17,uVar19);
    uVar19 = 0xffffffff;
    uVar17 = 7;
    iVar15 = -1;
    iVar14 = -1;
    iVar13 = 1;
    uVar12 = 0xffffffff;
    this_01->field_02B7 = 0x2335;
    iVar8 = this_01->field_036F;
    cVar11 = CASE_FFFFFFFE;
    iVar10 = 0x28;
    iVar3 = 0x8c;
    LoadResourceString(0x2335,HINSTANCE_00807618);
    puVar6 = ccFntTy::CreateTypeSSpr
                       ((ccFntTy *)PTR_0081176c->field_0030,extraout_EAX_06,iVar3,iVar10,cVar11,
                        uVar12,iVar13,iVar14,iVar15);
    (**(code **)(iVar8 + 8))(puVar6,uVar17,uVar19);
    uVar19 = 0xffffffff;
    uVar17 = 7;
    iVar15 = -1;
    iVar8 = this_01->field_056A;
    iVar14 = -1;
    iVar13 = 1;
    uVar12 = 0xffffffff;
    this_01->field_04B2 = 0x2332;
    cVar11 = CASE_FFFFFFFE;
    iVar10 = 0x28;
    iVar3 = 0x8c;
    LoadResourceString(0x2332,HINSTANCE_00807618);
    puVar6 = ccFntTy::CreateTypeSSpr
                       ((ccFntTy *)PTR_0081176c->field_0030,extraout_EAX_07,iVar3,iVar10,cVar11,
                        uVar12,iVar13,iVar14,iVar15);
    (**(code **)(iVar8 + 8))(puVar6,uVar17,uVar19);
    iVar8 = this_01->field_0765;
    uVar19 = 0xffffffff;
    uVar17 = 7;
    iVar15 = -1;
    iVar14 = -1;
    iVar13 = 1;
    uVar12 = 0xffffffff;
    cVar11 = CASE_FFFFFFFE;
    this_01->field_06AD = 0x2333;
    iVar10 = 0x28;
    iVar3 = 0x8c;
    LoadResourceString(0x2333,HINSTANCE_00807618);
    puVar6 = ccFntTy::CreateTypeSSpr
                       ((ccFntTy *)PTR_0081176c->field_0030,extraout_EAX_08,iVar3,iVar10,cVar11,
                        uVar12,iVar13,iVar14,iVar15);
    (**(code **)(iVar8 + 8))(puVar6,uVar17,uVar19);
    uVar19 = 0xffffffff;
    uVar17 = 7;
    iVar15 = -1;
    iVar8 = this_01->field_0960;
    iVar14 = -1;
    iVar13 = 1;
    uVar12 = 0xffffffff;
    this_01->field_08A8 = 0x2336;
    cVar11 = CASE_FFFFFFFE;
    iVar10 = 0x28;
    iVar3 = 0x8c;
    LoadResourceString(0x2336,HINSTANCE_00807618);
    puVar6 = ccFntTy::CreateTypeSSpr
                       ((ccFntTy *)PTR_0081176c->field_0030,extraout_EAX_09,iVar3,iVar10,cVar11,
                        uVar12,iVar13,iVar14,iVar15);
    (**(code **)(iVar8 + 8))(puVar6,uVar17,uVar19);
    this_01->field_00C9 = this_01->field_0008;
    this_01->field_00CD = 2;
    this_01->field_00D1 = 0x6944;
    this_01->field_02C4 = 0x200;
    this_01->field_02C8 = 0;
    this_01->field_02CC = 0x6105;
    this_01->field_02D0 = 0;
    this_01->field_02D4 = 1;
    this_01->field_04BF = 0x200;
    this_01->field_04C3 = 0;
    this_01->field_04C7 = 0x6103;
    this_01->field_04CB = 1;
    this_01->field_06C2 = 0;
    this_01->field_08B9 = 1;
    this_01->field_08BD = 0x7102;
    Library::DKW::DDX::FUN_006ba9e0(DAT_0080759c,0xe9,0x14,0x14c,0x18,0);
    uVar17 = 0;
    pcVar18 = (ccFntTy *)PTR_0081176c->field_0030;
    uVar16 = 0xffffffff;
    uVar12 = 0xfffffffe;
    LoadResourceString(0x26ac,HINSTANCE_00807618);
    StartServTy::WrTextDDX
              (this_03,0,0xe9,0x14,0x14c,0x18,extraout_EAX_10,uVar12,uVar16,pcVar18,uVar17);
    uVar7 = DAT_00807dd5 >> 0x10 & 0xff;
    uVar16 = DAT_00807dd5 & 0xffff;
    uVar12 = DAT_00807dd5 >> 0x18;
    LoadResourceString(0x2329,HINSTANCE_00807618);
    wsprintfA((LPSTR)(this_01->field_1A5B + 0x3c),text,uVar12,uVar7,uVar16);
    pSVar4 = (StartServTy *)(this_01->field_1A5B + 0x3c);
    StartServTy::WrTextDDX
              (pSVar4,0,0,0x240,800,0x18,(uint *)pSVar4,0xfffffffe,0xffffffff,
               PTR_0081176c->field_0034,0);
  }
  else if (param_1 == '\x01') {
    uVar19 = 0xffffffff;
    uVar17 = 7;
    iVar15 = -1;
    iVar14 = -1;
    iVar13 = 1;
    local_c->field_009A = 5;
    uVar12 = 0xffffffff;
    local_c->field_00BC = 0x233c;
    iVar8 = local_c->field_0174;
    cVar11 = CASE_FFFFFFFE;
    iVar10 = 0x28;
    iVar3 = 0x8c;
    LoadResourceString(0x233c,HINSTANCE_00807618);
    puVar6 = ccFntTy::CreateTypeSSpr
                       ((ccFntTy *)PTR_0081176c->field_0030,extraout_EAX,iVar3,iVar10,cVar11,uVar12,
                        iVar13,iVar14,iVar15);
    (**(code **)(iVar8 + 8))(puVar6,uVar17,uVar19);
    uVar19 = 0xffffffff;
    uVar17 = 7;
    iVar15 = -1;
    iVar14 = -1;
    iVar13 = 1;
    uVar12 = 0xffffffff;
    this_01->field_02B7 = 0x233d;
    iVar8 = this_01->field_036F;
    cVar11 = CASE_FFFFFFFE;
    iVar10 = 0x28;
    iVar3 = 0x8c;
    LoadResourceString(0x233d,HINSTANCE_00807618);
    puVar6 = ccFntTy::CreateTypeSSpr
                       ((ccFntTy *)PTR_0081176c->field_0030,extraout_EAX_00,iVar3,iVar10,cVar11,
                        uVar12,iVar13,iVar14,iVar15);
    (**(code **)(iVar8 + 8))(puVar6,uVar17,uVar19);
    uVar19 = 0xffffffff;
    uVar17 = 7;
    iVar15 = -1;
    iVar8 = this_01->field_056A;
    iVar14 = -1;
    iVar13 = 1;
    uVar12 = 0xffffffff;
    this_01->field_04B2 = 0x233e;
    cVar11 = CASE_FFFFFFFE;
    iVar10 = 0x28;
    iVar3 = 0x8c;
    LoadResourceString(0x233e,HINSTANCE_00807618);
    puVar6 = ccFntTy::CreateTypeSSpr
                       ((ccFntTy *)PTR_0081176c->field_0030,extraout_EAX_01,iVar3,iVar10,cVar11,
                        uVar12,iVar13,iVar14,iVar15);
    (**(code **)(iVar8 + 8))(puVar6,uVar17,uVar19);
    iVar8 = this_01->field_0765;
    uVar19 = 0xffffffff;
    uVar17 = 7;
    iVar15 = -1;
    iVar14 = -1;
    iVar13 = 1;
    uVar12 = 0xffffffff;
    cVar11 = CASE_FFFFFFFE;
    this_01->field_06AD = 0x233f;
    iVar10 = 0x28;
    iVar3 = 0x8c;
    LoadResourceString(0x233f,HINSTANCE_00807618);
    puVar6 = ccFntTy::CreateTypeSSpr
                       ((ccFntTy *)PTR_0081176c->field_0030,extraout_EAX_02,iVar3,iVar10,cVar11,
                        uVar12,iVar13,iVar14,iVar15);
    (**(code **)(iVar8 + 8))(puVar6,uVar17,uVar19);
    uVar19 = 0xffffffff;
    uVar17 = 7;
    iVar15 = -1;
    iVar8 = this_01->field_0960;
    iVar14 = -1;
    iVar13 = 1;
    uVar12 = 0xffffffff;
    this_01->field_08A8 = 0x2359;
    cVar11 = CASE_FFFFFFFE;
    iVar10 = 0x28;
    iVar3 = 0x8c;
    LoadResourceString(0x2359,HINSTANCE_00807618);
    puVar6 = ccFntTy::CreateTypeSSpr
                       ((ccFntTy *)PTR_0081176c->field_0030,extraout_EAX_03,iVar3,iVar10,cVar11,
                        uVar12,iVar13,iVar14,iVar15);
    (**(code **)(iVar8 + 8))(puVar6,uVar17,uVar19);
    bVar5 = 0;
    local_8 = local_8 & 0xffffff00;
    if (this_01->field_009A != '\0') {
      do {
        uVar12 = local_8 & 0xff;
        bVar5 = bVar5 + 1;
        local_8 = CONCAT31(local_8._1_3_,bVar5);
        *(undefined4 *)((int)&this_01->field_00C9 + uVar12 * 0x1fb) = 0x200;
        *(undefined4 *)((int)&this_01->field_00CD + uVar12 * 0x1fb) = 0;
      } while (bVar5 < (byte)this_01->field_009A);
    }
    this_01->field_00D1 = 0x6122;
    this_01->field_02CC = 0x611f;
    this_01->field_04C7 = 0x611f;
    this_01->field_06C2 = 0x611f;
    this_01->field_08BD = 0x6122;
    puVar6 = &local_24c;
    for (iVar8 = 0x7e; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    iVar8 = this_01->field_1A5B;
    *(undefined2 *)puVar6 = 0;
    *(undefined1 *)((int)puVar6 + 2) = 0;
    local_155 = this_01->field_0008;
    this_01->field_00D5 = 0;
    this_01->field_02D0 = 2;
    this_01->field_04CB = 9;
    this_01->field_06C6 = 3;
    this_01->field_08C1 = 1;
    local_162 = 0x24bc;
    local_13d = 1;
    local_151 = 2;
    local_14d = 0x6943;
    this_00 = *(MMsgTy **)(iVar8 + 0x2e6);
    if (this_00 != (MMsgTy *)0x0) {
      MMsgTy::SetPanel(this_00,0,(int)&local_24c,0,0);
    }
    Library::DKW::DDX::FUN_006ba9e0(DAT_0080759c,0xe9,0x14,0x14c,0x18,0);
    uVar17 = 0;
    pcVar18 = (ccFntTy *)PTR_0081176c->field_0030;
    uVar16 = 0xffffffff;
    uVar12 = 0xfffffffe;
    LoadResourceString(0x26b0,HINSTANCE_00807618);
    StartServTy::WrTextDDX
              (this_02,0,0xe9,0x14,0x14c,0x18,extraout_EAX_04,uVar12,uVar16,pcVar18,uVar17);
  }
  if (param_2 != 0) {
    PaintMainMenu(this_01);
    this_01->field_1AD3 = 1;
    this_01->field_1ADB = 0;
    this_01->field_1AD7 = this_01->field_0061;
    goto LAB_005b44f1;
  }
  FUN_006b5f80(DAT_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
  Library::DKW::DDX::FUN_006ba9e0(DAT_0080759c,0xe9,0x14,0x14c,0x18,0);
  if (this_01->field_1EE3 == '\0') {
    pcVar18 = (ccFntTy *)PTR_0081176c->field_0030;
    resourceId = 0x26ac;
LAB_005b4465:
    uVar17 = 0;
    uVar16 = 0xffffffff;
    uVar12 = 0xfffffffe;
    LoadResourceString(resourceId,HINSTANCE_00807618);
    StartServTy::WrTextDDX
              (this_04,0,0xe9,0x14,0x14c,0x18,extraout_EAX_11,uVar12,uVar16,pcVar18,uVar17);
  }
  else if (this_01->field_1EE3 == '\x01') {
    pcVar18 = (ccFntTy *)PTR_0081176c->field_0030;
    resourceId = 0x26b0;
    goto LAB_005b4465;
  }
  uVar7 = DAT_00807dd5 >> 0x10 & 0xff;
  uVar16 = DAT_00807dd5 & 0xffff;
  uVar12 = DAT_00807dd5 >> 0x18;
  LoadResourceString(0x2329,HINSTANCE_00807618);
  wsprintfA((LPSTR)(this_01->field_1A5B + 0x3c),text_00,uVar12,uVar7,uVar16);
  pSVar4 = (StartServTy *)(this_01->field_1A5B + 0x3c);
  StartServTy::WrTextDDX
            (pSVar4,0,0,0x240,800,0x18,(uint *)pSVar4,0xfffffffe,0xffffffff,PTR_0081176c->field_0034
             ,0);
LAB_005b44f1:
  local_8 = local_8 & 0xffffff00;
  if (this_01->field_009A != '\0') {
    do {
      uVar12 = local_8 & 0xff;
      DVar2 = timeGetTime();
      *(DWORD *)((int)&this_01->field_0127 + uVar12 * 0x1fb) = DVar2;
      *(uint *)((int)&this_01->field_0123 + uVar12 * 0x1fb) = uVar12 * 0x96;
      (&this_01->field_00BB)[uVar12 * 0x1fb] = 1;
      bVar5 = (char)local_8 + 1;
      local_8 = CONCAT31(local_8._1_3_,bVar5);
    } while (bVar5 < (byte)this_01->field_009A);
  }
  this_01->field_0065 = 3;
  thunk_FUN_005b6730(this_01,1,'\0',-1);
  g_currentExceptionFrame = local_50.previous;
  return;
}

