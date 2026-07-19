
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::SetMode */

void __thiscall MainMenuTy::SetMode(MainMenuTy *this,char param_1,int param_2)

{
  code *pcVar1;
  uint *puVar2;
  undefined4 *puVar3;
  LPCSTR pCVar4;
  DWORD DVar5;
  int iVar6;
  StartServTy *this_00;
  StartServTy *this_01;
  StartServTy *this_02;
  MainMenuTy MVar7;
  MainMenuTy *pMVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  int iVar10;
  void *unaff_EDI;
  MainMenuTy *pMVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  UINT UVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  void *pvVar20;
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
  
  pMVar8 = this + 0x17c;
  iVar10 = 0xd;
  do {
    *(undefined4 *)(pMVar8 + -0xc0) = 0;
    *(undefined4 *)pMVar8 = 0;
    pMVar11 = pMVar8 + -0xbb;
    pMVar8 = pMVar8 + 0x1fb;
    iVar10 = iVar10 + -1;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pMVar11 = 0;
      pMVar11 = pMVar11 + 4;
    }
  } while (iVar10 != 0);
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar10 = __setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar8 = local_c;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_main_obj_cpp_007cc8e8,0x16a,0,iVar10,
                               &DAT_007a4ccc,s_MainMenuTy__SetMode_007cc9e0);
    if (iVar6 == 0) {
      RaiseInternalException(iVar10,0,s_E____titans_Start_main_obj_cpp_007cc8e8,0x16a);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_c[0x1ee3] = (MainMenuTy)param_1;
  if (param_1 == '\0') {
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar18 = -1;
    iVar17 = -1;
    iVar16 = 1;
    local_c[0x9a] = (MainMenuTy)0x5;
    uVar14 = 0xffffffff;
    *(undefined4 *)(local_c + 0xbc) = 0x2334;
    iVar10 = *(int *)(local_c + 0x174);
    uVar13 = 0xfffffffe;
    iVar12 = 0x28;
    iVar6 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x2334,DAT_00807618);
    puVar3 = ccFntTy::CreateTypeSSpr
                       (*(ccFntTy **)(DAT_0081176c + 0x30),puVar2,iVar6,iVar12,uVar13,uVar14,iVar16,
                        iVar17,iVar18);
    (**(code **)(iVar10 + 8))(puVar3,uVar19,uVar21);
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar18 = -1;
    iVar17 = -1;
    iVar16 = 1;
    uVar14 = 0xffffffff;
    *(undefined4 *)(pMVar8 + 0x2b7) = 0x2335;
    iVar10 = *(int *)(pMVar8 + 0x36f);
    uVar13 = 0xfffffffe;
    iVar12 = 0x28;
    iVar6 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x2335,DAT_00807618);
    puVar3 = ccFntTy::CreateTypeSSpr
                       (*(ccFntTy **)(DAT_0081176c + 0x30),puVar2,iVar6,iVar12,uVar13,uVar14,iVar16,
                        iVar17,iVar18);
    (**(code **)(iVar10 + 8))(puVar3,uVar19,uVar21);
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar18 = -1;
    iVar10 = *(int *)(pMVar8 + 0x56a);
    iVar17 = -1;
    iVar16 = 1;
    uVar14 = 0xffffffff;
    *(undefined4 *)(pMVar8 + 0x4b2) = 0x2332;
    uVar13 = 0xfffffffe;
    iVar12 = 0x28;
    iVar6 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x2332,DAT_00807618);
    puVar3 = ccFntTy::CreateTypeSSpr
                       (*(ccFntTy **)(DAT_0081176c + 0x30),puVar2,iVar6,iVar12,uVar13,uVar14,iVar16,
                        iVar17,iVar18);
    (**(code **)(iVar10 + 8))(puVar3,uVar19,uVar21);
    iVar10 = *(int *)(pMVar8 + 0x765);
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar18 = -1;
    iVar17 = -1;
    iVar16 = 1;
    uVar14 = 0xffffffff;
    uVar13 = 0xfffffffe;
    *(undefined4 *)(pMVar8 + 0x6ad) = 0x2333;
    iVar12 = 0x28;
    iVar6 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x2333,DAT_00807618);
    puVar3 = ccFntTy::CreateTypeSSpr
                       (*(ccFntTy **)(DAT_0081176c + 0x30),puVar2,iVar6,iVar12,uVar13,uVar14,iVar16,
                        iVar17,iVar18);
    (**(code **)(iVar10 + 8))(puVar3,uVar19,uVar21);
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar18 = -1;
    iVar10 = *(int *)(pMVar8 + 0x960);
    iVar17 = -1;
    iVar16 = 1;
    uVar14 = 0xffffffff;
    *(undefined4 *)(pMVar8 + 0x8a8) = 0x2336;
    uVar13 = 0xfffffffe;
    iVar12 = 0x28;
    iVar6 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x2336,DAT_00807618);
    puVar3 = ccFntTy::CreateTypeSSpr
                       (*(ccFntTy **)(DAT_0081176c + 0x30),puVar2,iVar6,iVar12,uVar13,uVar14,iVar16,
                        iVar17,iVar18);
    (**(code **)(iVar10 + 8))(puVar3,uVar19,uVar21);
    *(undefined4 *)(pMVar8 + 0xc9) = *(undefined4 *)(pMVar8 + 8);
    *(undefined4 *)(pMVar8 + 0xcd) = 2;
    *(undefined4 *)(pMVar8 + 0xd1) = 0x6944;
    *(undefined4 *)(pMVar8 + 0x2c4) = 0x200;
    *(undefined4 *)(pMVar8 + 0x2c8) = 0;
    *(undefined4 *)(pMVar8 + 0x2cc) = 0x6105;
    *(undefined4 *)(pMVar8 + 0x2d0) = 0;
    *(undefined4 *)(pMVar8 + 0x2d4) = 1;
    *(undefined4 *)(pMVar8 + 0x4bf) = 0x200;
    *(undefined4 *)(pMVar8 + 0x4c3) = 0;
    *(undefined4 *)(pMVar8 + 0x4c7) = 0x6103;
    *(undefined4 *)(pMVar8 + 0x4cb) = 1;
    *(undefined4 *)(pMVar8 + 0x6c2) = 0;
    *(undefined4 *)(pMVar8 + 0x8b9) = 1;
    *(undefined4 *)(pMVar8 + 0x8bd) = 0x7102;
    FUN_006ba9e0(DAT_0080759c,0xe9,0x14,0x14c,0x18,0);
    uVar19 = 0;
    pvVar20 = *(void **)(DAT_0081176c + 0x30);
    uVar14 = 0xffffffff;
    uVar13 = 0xfffffffe;
    puVar2 = (uint *)FUN_006b0140(0x26ac,DAT_00807618);
    StartServTy::WrTextDDX(this_01,0,0xe9,0x14,0x14c,0x18,puVar2,uVar13,uVar14,pvVar20,uVar19);
    uVar9 = DAT_00807dd5 >> 0x10 & 0xff;
    uVar14 = DAT_00807dd5 & 0xffff;
    uVar13 = DAT_00807dd5 >> 0x18;
    pCVar4 = (LPCSTR)FUN_006b0140(0x2329,DAT_00807618);
    wsprintfA((LPSTR)(*(int *)(pMVar8 + 0x1a5b) + 0x3c),pCVar4,uVar13,uVar9,uVar14);
    StartServTy::WrTextDDX
              ((StartServTy *)(*(int *)(pMVar8 + 0x1a5b) + 0x3c),0,0,0x240,800,0x18,
               (uint *)(*(int *)(pMVar8 + 0x1a5b) + 0x3c),0xfffffffe,0xffffffff,
               *(void **)(DAT_0081176c + 0x34),0);
  }
  else if (param_1 == '\x01') {
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar18 = -1;
    iVar17 = -1;
    iVar16 = 1;
    local_c[0x9a] = (MainMenuTy)0x5;
    uVar14 = 0xffffffff;
    *(undefined4 *)(local_c + 0xbc) = 0x233c;
    iVar10 = *(int *)(local_c + 0x174);
    uVar13 = 0xfffffffe;
    iVar12 = 0x28;
    iVar6 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x233c,DAT_00807618);
    puVar3 = ccFntTy::CreateTypeSSpr
                       (*(ccFntTy **)(DAT_0081176c + 0x30),puVar2,iVar6,iVar12,uVar13,uVar14,iVar16,
                        iVar17,iVar18);
    (**(code **)(iVar10 + 8))(puVar3,uVar19,uVar21);
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar18 = -1;
    iVar17 = -1;
    iVar16 = 1;
    uVar14 = 0xffffffff;
    *(undefined4 *)(pMVar8 + 0x2b7) = 0x233d;
    iVar10 = *(int *)(pMVar8 + 0x36f);
    uVar13 = 0xfffffffe;
    iVar12 = 0x28;
    iVar6 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x233d,DAT_00807618);
    puVar3 = ccFntTy::CreateTypeSSpr
                       (*(ccFntTy **)(DAT_0081176c + 0x30),puVar2,iVar6,iVar12,uVar13,uVar14,iVar16,
                        iVar17,iVar18);
    (**(code **)(iVar10 + 8))(puVar3,uVar19,uVar21);
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar18 = -1;
    iVar10 = *(int *)(pMVar8 + 0x56a);
    iVar17 = -1;
    iVar16 = 1;
    uVar14 = 0xffffffff;
    *(undefined4 *)(pMVar8 + 0x4b2) = 0x233e;
    uVar13 = 0xfffffffe;
    iVar12 = 0x28;
    iVar6 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x233e,DAT_00807618);
    puVar3 = ccFntTy::CreateTypeSSpr
                       (*(ccFntTy **)(DAT_0081176c + 0x30),puVar2,iVar6,iVar12,uVar13,uVar14,iVar16,
                        iVar17,iVar18);
    (**(code **)(iVar10 + 8))(puVar3,uVar19,uVar21);
    iVar10 = *(int *)(pMVar8 + 0x765);
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar18 = -1;
    iVar17 = -1;
    iVar16 = 1;
    uVar14 = 0xffffffff;
    uVar13 = 0xfffffffe;
    *(undefined4 *)(pMVar8 + 0x6ad) = 0x233f;
    iVar12 = 0x28;
    iVar6 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x233f,DAT_00807618);
    puVar3 = ccFntTy::CreateTypeSSpr
                       (*(ccFntTy **)(DAT_0081176c + 0x30),puVar2,iVar6,iVar12,uVar13,uVar14,iVar16,
                        iVar17,iVar18);
    (**(code **)(iVar10 + 8))(puVar3,uVar19,uVar21);
    uVar21 = 0xffffffff;
    uVar19 = 7;
    iVar18 = -1;
    iVar10 = *(int *)(pMVar8 + 0x960);
    iVar17 = -1;
    iVar16 = 1;
    uVar14 = 0xffffffff;
    *(undefined4 *)(pMVar8 + 0x8a8) = 0x2359;
    uVar13 = 0xfffffffe;
    iVar12 = 0x28;
    iVar6 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x2359,DAT_00807618);
    puVar3 = ccFntTy::CreateTypeSSpr
                       (*(ccFntTy **)(DAT_0081176c + 0x30),puVar2,iVar6,iVar12,uVar13,uVar14,iVar16,
                        iVar17,iVar18);
    (**(code **)(iVar10 + 8))(puVar3,uVar19,uVar21);
    MVar7 = (MainMenuTy)0x0;
    local_8 = local_8 & 0xffffff00;
    if (pMVar8[0x9a] != (MainMenuTy)0x0) {
      do {
        uVar13 = local_8 & 0xff;
        MVar7 = (MainMenuTy)((char)MVar7 + 1);
        local_8 = CONCAT31(local_8._1_3_,MVar7);
        *(undefined4 *)(pMVar8 + uVar13 * 0x1fb + 0xc9) = 0x200;
        *(undefined4 *)(pMVar8 + uVar13 * 0x1fb + 0xcd) = 0;
      } while ((byte)MVar7 < (byte)pMVar8[0x9a]);
    }
    *(undefined4 *)(pMVar8 + 0xd1) = 0x6122;
    *(undefined4 *)(pMVar8 + 0x2cc) = 0x611f;
    *(undefined4 *)(pMVar8 + 0x4c7) = 0x611f;
    *(undefined4 *)(pMVar8 + 0x6c2) = 0x611f;
    *(undefined4 *)(pMVar8 + 0x8bd) = 0x6122;
    puVar3 = &local_24c;
    for (iVar10 = 0x7e; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    iVar10 = *(int *)(pMVar8 + 0x1a5b);
    *(undefined2 *)puVar3 = 0;
    *(undefined1 *)((int)puVar3 + 2) = 0;
    local_155 = *(undefined4 *)(pMVar8 + 8);
    *(undefined4 *)(pMVar8 + 0xd5) = 0;
    *(undefined4 *)(pMVar8 + 0x2d0) = 2;
    *(undefined4 *)(pMVar8 + 0x4cb) = 9;
    *(undefined4 *)(pMVar8 + 0x6c6) = 3;
    *(undefined4 *)(pMVar8 + 0x8c1) = 1;
    local_162 = 0x24bc;
    local_13d = 1;
    local_151 = 2;
    local_14d = 0x6943;
    if (*(MMsgTy **)(iVar10 + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::SetPanel(*(MMsgTy **)(iVar10 + 0x2e6),0,(int)&local_24c,0,0);
    }
    FUN_006ba9e0(DAT_0080759c,0xe9,0x14,0x14c,0x18,0);
    uVar19 = 0;
    pvVar20 = *(void **)(DAT_0081176c + 0x30);
    uVar14 = 0xffffffff;
    uVar13 = 0xfffffffe;
    puVar2 = (uint *)FUN_006b0140(0x26b0,DAT_00807618);
    StartServTy::WrTextDDX(this_00,0,0xe9,0x14,0x14c,0x18,puVar2,uVar13,uVar14,pvVar20,uVar19);
  }
  if (param_2 != 0) {
    PaintMainMenu(pMVar8);
    *(undefined4 *)(pMVar8 + 0x1ad3) = 1;
    *(undefined4 *)(pMVar8 + 0x1adb) = 0;
    *(undefined4 *)(pMVar8 + 0x1ad7) = *(undefined4 *)(pMVar8 + 0x61);
    goto LAB_005b44f1;
  }
  FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
  FUN_006ba9e0(DAT_0080759c,0xe9,0x14,0x14c,0x18,0);
  if (pMVar8[0x1ee3] == (MainMenuTy)0x0) {
    pvVar20 = *(void **)(DAT_0081176c + 0x30);
    UVar15 = 0x26ac;
LAB_005b4465:
    uVar19 = 0;
    uVar14 = 0xffffffff;
    uVar13 = 0xfffffffe;
    puVar2 = (uint *)FUN_006b0140(UVar15,DAT_00807618);
    StartServTy::WrTextDDX(this_02,0,0xe9,0x14,0x14c,0x18,puVar2,uVar13,uVar14,pvVar20,uVar19);
  }
  else if (pMVar8[0x1ee3] == (MainMenuTy)0x1) {
    pvVar20 = *(void **)(DAT_0081176c + 0x30);
    UVar15 = 0x26b0;
    goto LAB_005b4465;
  }
  uVar9 = DAT_00807dd5 >> 0x10 & 0xff;
  uVar14 = DAT_00807dd5 & 0xffff;
  uVar13 = DAT_00807dd5 >> 0x18;
  pCVar4 = (LPCSTR)FUN_006b0140(0x2329,DAT_00807618);
  wsprintfA((LPSTR)(*(int *)(pMVar8 + 0x1a5b) + 0x3c),pCVar4,uVar13,uVar9,uVar14);
  StartServTy::WrTextDDX
            ((StartServTy *)(*(int *)(pMVar8 + 0x1a5b) + 0x3c),0,0,0x240,800,0x18,
             (uint *)(*(int *)(pMVar8 + 0x1a5b) + 0x3c),0xfffffffe,0xffffffff,
             *(void **)(DAT_0081176c + 0x34),0);
LAB_005b44f1:
  local_8 = local_8 & 0xffffff00;
  if (pMVar8[0x9a] != (MainMenuTy)0x0) {
    do {
      uVar13 = local_8 & 0xff;
      DVar5 = timeGetTime();
      *(DWORD *)(pMVar8 + uVar13 * 0x1fb + 0x127) = DVar5;
      *(uint *)(pMVar8 + uVar13 * 0x1fb + 0x123) = uVar13 * 0x96;
      pMVar8[uVar13 * 0x1fb + 0xbb] = (MainMenuTy)0x1;
      MVar7 = (MainMenuTy)((char)local_8 + 1);
      local_8 = CONCAT31(local_8._1_3_,MVar7);
    } while ((byte)MVar7 < (byte)pMVar8[0x9a]);
  }
  pMVar8[0x65] = (MainMenuTy)0x3;
  thunk_FUN_005b6730(pMVar8,1,'\0',-1);
  g_currentExceptionFrame = local_50.previous;
  return;
}

