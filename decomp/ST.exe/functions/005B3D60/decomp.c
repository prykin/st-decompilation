
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::SetMode */

void __thiscall MainMenuTy::SetMode(MainMenuTy *this,char param_1,int param_2)

{
  MMsgTy *this_00;
  code *pcVar1;
  MainMenuTy *this_01;
  uint *puVar2;
  LPCSTR pCVar3;
  DWORD DVar4;
  int iVar5;
  StartServTy *this_02;
  StartServTy *this_03;
  StartServTy *this_04;
  StartServTy *pSVar6;
  byte bVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  int iVar10;
  void *unaff_EDI;
  undefined4 *puVar11;
  int iVar12;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar13;
  uint uVar14;
  UINT UVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  void *pvVar21;
  undefined4 uVar22;
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
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
  } while (iVar10 != 0);
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar10 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_c;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_main_obj_cpp_007cc8e8,0x16a,0,iVar10,
                               &DAT_007a4ccc,s_MainMenuTy__SetMode_007cc9e0);
    if (iVar5 == 0) {
      RaiseInternalException(iVar10,0,s_E____titans_Start_main_obj_cpp_007cc8e8,0x16a);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_c[0x14].field_0xe3 = param_1;
  if (param_1 == '\0') {
    uVar22 = 0xffffffff;
    uVar20 = 7;
    iVar18 = -1;
    iVar17 = -1;
    iVar16 = 1;
    local_c->field_0x9a = 5;
    uVar14 = 0xffffffff;
    local_c->field_00BC = 0x2334;
    iVar10 = *(int *)&local_c->field_0x174;
    cVar13 = CASE_FFFFFFFE;
    iVar12 = 0x28;
    iVar5 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x2334,DAT_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (*(ccFntTy **)(DAT_0081176c + 0x30),puVar2,iVar5,iVar12,cVar13,uVar14,iVar16,
                        iVar17,iVar18);
    (**(code **)(iVar10 + 8))(puVar8,uVar20,uVar22);
    uVar22 = 0xffffffff;
    uVar20 = 7;
    iVar18 = -1;
    iVar17 = -1;
    iVar16 = 1;
    uVar14 = 0xffffffff;
    *(undefined4 *)&this_01[1].field_0x137 = 0x2335;
    iVar10 = *(int *)&this_01[2].field_0x6f;
    cVar13 = CASE_FFFFFFFE;
    iVar12 = 0x28;
    iVar5 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x2335,DAT_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (*(ccFntTy **)(DAT_0081176c + 0x30),puVar2,iVar5,iVar12,cVar13,uVar14,iVar16,
                        iVar17,iVar18);
    (**(code **)(iVar10 + 8))(puVar8,uVar20,uVar22);
    uVar22 = 0xffffffff;
    uVar20 = 7;
    iVar18 = -1;
    iVar10 = *(int *)&this_01[3].field_0xea;
    iVar17 = -1;
    iVar16 = 1;
    uVar14 = 0xffffffff;
    *(undefined4 *)&this_01[3].field_0x32 = 0x2332;
    cVar13 = CASE_FFFFFFFE;
    iVar12 = 0x28;
    iVar5 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x2332,DAT_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (*(ccFntTy **)(DAT_0081176c + 0x30),puVar2,iVar5,iVar12,cVar13,uVar14,iVar16,
                        iVar17,iVar18);
    (**(code **)(iVar10 + 8))(puVar8,uVar20,uVar22);
    iVar10 = *(int *)&this_01[4].field_0x165;
    uVar22 = 0xffffffff;
    uVar20 = 7;
    iVar18 = -1;
    iVar17 = -1;
    iVar16 = 1;
    uVar14 = 0xffffffff;
    cVar13 = CASE_FFFFFFFE;
    *(undefined4 *)&this_01[4].field_0xad = 0x2333;
    iVar12 = 0x28;
    iVar5 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x2333,DAT_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (*(ccFntTy **)(DAT_0081176c + 0x30),puVar2,iVar5,iVar12,cVar13,uVar14,iVar16,
                        iVar17,iVar18);
    (**(code **)(iVar10 + 8))(puVar8,uVar20,uVar22);
    uVar22 = 0xffffffff;
    uVar20 = 7;
    iVar18 = -1;
    iVar10 = *(int *)&this_01[6].field_0x60;
    iVar17 = -1;
    iVar16 = 1;
    uVar14 = 0xffffffff;
    *(undefined4 *)&this_01[5].field_0x128 = 0x2336;
    cVar13 = CASE_FFFFFFFE;
    iVar12 = 0x28;
    iVar5 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x2336,DAT_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (*(ccFntTy **)(DAT_0081176c + 0x30),puVar2,iVar5,iVar12,cVar13,uVar14,iVar16,
                        iVar17,iVar18);
    (**(code **)(iVar10 + 8))(puVar8,uVar20,uVar22);
    *(undefined4 *)&this_01->field_0xc9 = *(undefined4 *)&this_01->field_0x8;
    *(undefined4 *)&this_01->field_0xcd = 2;
    *(undefined4 *)&this_01->field_0xd1 = 0x6944;
    *(undefined4 *)&this_01[1].field_0x144 = 0x200;
    *(undefined4 *)&this_01[1].field_0x148 = 0;
    *(undefined4 *)&this_01[1].field_0x14c = 0x6105;
    *(undefined4 *)&this_01[1].field_0x150 = 0;
    *(undefined4 *)&this_01[1].field_0x154 = 1;
    *(undefined4 *)&this_01[3].field_0x3f = 0x200;
    *(undefined4 *)&this_01[3].field_0x43 = 0;
    *(undefined4 *)&this_01[3].field_0x47 = 0x6103;
    *(undefined4 *)&this_01[3].field_0x4b = 1;
    *(undefined4 *)&this_01[4].field_0xc2 = 0;
    *(undefined4 *)&this_01[5].field_0x139 = 1;
    *(undefined4 *)&this_01[5].field_0x13d = 0x7102;
    Library::DKW::DDX::FUN_006ba9e0(DAT_0080759c,0xe9,0x14,0x14c,0x18,0);
    uVar20 = 0;
    pvVar21 = *(void **)(DAT_0081176c + 0x30);
    uVar19 = 0xffffffff;
    uVar14 = 0xfffffffe;
    puVar2 = (uint *)FUN_006b0140(0x26ac,DAT_00807618);
    StartServTy::WrTextDDX(this_03,0,0xe9,0x14,0x14c,0x18,puVar2,uVar14,uVar19,pvVar21,uVar20);
    uVar9 = DAT_00807dd5 >> 0x10 & 0xff;
    uVar19 = DAT_00807dd5 & 0xffff;
    uVar14 = DAT_00807dd5 >> 0x18;
    pCVar3 = (LPCSTR)FUN_006b0140(0x2329,DAT_00807618);
    wsprintfA((LPSTR)(*(int *)&this_01[0x11].field_0xdb + 0x3c),pCVar3,uVar14,uVar9,uVar19);
    pSVar6 = (StartServTy *)(*(int *)&this_01[0x11].field_0xdb + 0x3c);
    StartServTy::WrTextDDX
              (pSVar6,0,0,0x240,800,0x18,(uint *)pSVar6,0xfffffffe,0xffffffff,
               *(void **)(DAT_0081176c + 0x34),0);
  }
  else if (param_1 == '\x01') {
    uVar22 = 0xffffffff;
    uVar20 = 7;
    iVar18 = -1;
    iVar17 = -1;
    iVar16 = 1;
    local_c->field_0x9a = 5;
    uVar14 = 0xffffffff;
    local_c->field_00BC = 0x233c;
    iVar10 = *(int *)&local_c->field_0x174;
    cVar13 = CASE_FFFFFFFE;
    iVar12 = 0x28;
    iVar5 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x233c,DAT_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (*(ccFntTy **)(DAT_0081176c + 0x30),puVar2,iVar5,iVar12,cVar13,uVar14,iVar16,
                        iVar17,iVar18);
    (**(code **)(iVar10 + 8))(puVar8,uVar20,uVar22);
    uVar22 = 0xffffffff;
    uVar20 = 7;
    iVar18 = -1;
    iVar17 = -1;
    iVar16 = 1;
    uVar14 = 0xffffffff;
    *(undefined4 *)&this_01[1].field_0x137 = 0x233d;
    iVar10 = *(int *)&this_01[2].field_0x6f;
    cVar13 = CASE_FFFFFFFE;
    iVar12 = 0x28;
    iVar5 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x233d,DAT_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (*(ccFntTy **)(DAT_0081176c + 0x30),puVar2,iVar5,iVar12,cVar13,uVar14,iVar16,
                        iVar17,iVar18);
    (**(code **)(iVar10 + 8))(puVar8,uVar20,uVar22);
    uVar22 = 0xffffffff;
    uVar20 = 7;
    iVar18 = -1;
    iVar10 = *(int *)&this_01[3].field_0xea;
    iVar17 = -1;
    iVar16 = 1;
    uVar14 = 0xffffffff;
    *(undefined4 *)&this_01[3].field_0x32 = 0x233e;
    cVar13 = CASE_FFFFFFFE;
    iVar12 = 0x28;
    iVar5 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x233e,DAT_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (*(ccFntTy **)(DAT_0081176c + 0x30),puVar2,iVar5,iVar12,cVar13,uVar14,iVar16,
                        iVar17,iVar18);
    (**(code **)(iVar10 + 8))(puVar8,uVar20,uVar22);
    iVar10 = *(int *)&this_01[4].field_0x165;
    uVar22 = 0xffffffff;
    uVar20 = 7;
    iVar18 = -1;
    iVar17 = -1;
    iVar16 = 1;
    uVar14 = 0xffffffff;
    cVar13 = CASE_FFFFFFFE;
    *(undefined4 *)&this_01[4].field_0xad = 0x233f;
    iVar12 = 0x28;
    iVar5 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x233f,DAT_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (*(ccFntTy **)(DAT_0081176c + 0x30),puVar2,iVar5,iVar12,cVar13,uVar14,iVar16,
                        iVar17,iVar18);
    (**(code **)(iVar10 + 8))(puVar8,uVar20,uVar22);
    uVar22 = 0xffffffff;
    uVar20 = 7;
    iVar18 = -1;
    iVar10 = *(int *)&this_01[6].field_0x60;
    iVar17 = -1;
    iVar16 = 1;
    uVar14 = 0xffffffff;
    *(undefined4 *)&this_01[5].field_0x128 = 0x2359;
    cVar13 = CASE_FFFFFFFE;
    iVar12 = 0x28;
    iVar5 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x2359,DAT_00807618);
    puVar8 = ccFntTy::CreateTypeSSpr
                       (*(ccFntTy **)(DAT_0081176c + 0x30),puVar2,iVar5,iVar12,cVar13,uVar14,iVar16,
                        iVar17,iVar18);
    (**(code **)(iVar10 + 8))(puVar8,uVar20,uVar22);
    bVar7 = 0;
    local_8 = local_8 & 0xffffff00;
    if (this_01->field_0x9a != '\0') {
      do {
        uVar14 = local_8 & 0xff;
        bVar7 = bVar7 + 1;
        local_8 = CONCAT31(local_8._1_3_,bVar7);
        *(undefined4 *)((int)this_01 + uVar14 * 0x1fb + 0xc9) = 0x200;
        *(undefined4 *)((int)this_01 + uVar14 * 0x1fb + 0xcd) = 0;
      } while (bVar7 < (byte)this_01->field_0x9a);
    }
    *(undefined4 *)&this_01->field_0xd1 = 0x6122;
    *(undefined4 *)&this_01[1].field_0x14c = 0x611f;
    *(undefined4 *)&this_01[3].field_0x47 = 0x611f;
    *(undefined4 *)&this_01[4].field_0xc2 = 0x611f;
    *(undefined4 *)&this_01[5].field_0x13d = 0x6122;
    puVar8 = &local_24c;
    for (iVar10 = 0x7e; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    iVar10 = *(int *)&this_01[0x11].field_0xdb;
    *(undefined2 *)puVar8 = 0;
    *(undefined1 *)((int)puVar8 + 2) = 0;
    local_155 = *(undefined4 *)&this_01->field_0x8;
    *(undefined4 *)&this_01->field_0xd5 = 0;
    *(undefined4 *)&this_01[1].field_0x150 = 2;
    *(undefined4 *)&this_01[3].field_0x4b = 9;
    *(undefined4 *)&this_01[4].field_0xc6 = 3;
    *(undefined4 *)&this_01[5].field_0x141 = 1;
    local_162 = 0x24bc;
    local_13d = 1;
    local_151 = 2;
    local_14d = 0x6943;
    this_00 = *(MMsgTy **)(iVar10 + 0x2e6);
    if (this_00 != (MMsgTy *)0x0) {
      MMsgTy::SetPanel(this_00,0,(int)&local_24c,0,0);
    }
    Library::DKW::DDX::FUN_006ba9e0(DAT_0080759c,0xe9,0x14,0x14c,0x18,0);
    uVar20 = 0;
    pvVar21 = *(void **)(DAT_0081176c + 0x30);
    uVar19 = 0xffffffff;
    uVar14 = 0xfffffffe;
    puVar2 = (uint *)FUN_006b0140(0x26b0,DAT_00807618);
    StartServTy::WrTextDDX(this_02,0,0xe9,0x14,0x14c,0x18,puVar2,uVar14,uVar19,pvVar21,uVar20);
  }
  if (param_2 != 0) {
    PaintMainMenu(this_01);
    uVar20 = this_01->field_0061;
    *(undefined4 *)&this_01[0x11].field_0x153 = 1;
    *(undefined4 *)&this_01[0x11].field_0x15b = 0;
    *(undefined4 *)&this_01[0x11].field_0x157 = uVar20;
    goto LAB_005b44f1;
  }
  FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
  Library::DKW::DDX::FUN_006ba9e0(DAT_0080759c,0xe9,0x14,0x14c,0x18,0);
  if (this_01[0x14].field_0xe3 == '\0') {
    pvVar21 = *(void **)(DAT_0081176c + 0x30);
    UVar15 = 0x26ac;
LAB_005b4465:
    uVar20 = 0;
    uVar19 = 0xffffffff;
    uVar14 = 0xfffffffe;
    puVar2 = (uint *)FUN_006b0140(UVar15,DAT_00807618);
    StartServTy::WrTextDDX(this_04,0,0xe9,0x14,0x14c,0x18,puVar2,uVar14,uVar19,pvVar21,uVar20);
  }
  else if (this_01[0x14].field_0xe3 == '\x01') {
    pvVar21 = *(void **)(DAT_0081176c + 0x30);
    UVar15 = 0x26b0;
    goto LAB_005b4465;
  }
  uVar9 = DAT_00807dd5 >> 0x10 & 0xff;
  uVar19 = DAT_00807dd5 & 0xffff;
  uVar14 = DAT_00807dd5 >> 0x18;
  pCVar3 = (LPCSTR)FUN_006b0140(0x2329,DAT_00807618);
  wsprintfA((LPSTR)(*(int *)&this_01[0x11].field_0xdb + 0x3c),pCVar3,uVar14,uVar9,uVar19);
  pSVar6 = (StartServTy *)(*(int *)&this_01[0x11].field_0xdb + 0x3c);
  StartServTy::WrTextDDX
            (pSVar6,0,0,0x240,800,0x18,(uint *)pSVar6,0xfffffffe,0xffffffff,
             *(void **)(DAT_0081176c + 0x34),0);
LAB_005b44f1:
  local_8 = local_8 & 0xffffff00;
  if (this_01->field_0x9a != '\0') {
    do {
      uVar14 = local_8 & 0xff;
      DVar4 = timeGetTime();
      *(DWORD *)((int)this_01 + uVar14 * 0x1fb + 0x127) = DVar4;
      *(uint *)((int)this_01 + uVar14 * 0x1fb + 0x123) = uVar14 * 0x96;
      *(undefined1 *)((int)this_01 + uVar14 * 0x1fb + 0xbb) = 1;
      bVar7 = (char)local_8 + 1;
      local_8 = CONCAT31(local_8._1_3_,bVar7);
    } while (bVar7 < (byte)this_01->field_0x9a);
  }
  this_01->field_0x65 = 3;
  thunk_FUN_005b6730(this_01,1,'\0',-1);
  g_currentExceptionFrame = local_50.previous;
  return;
}

