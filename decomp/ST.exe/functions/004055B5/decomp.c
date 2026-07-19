
void __thiscall SettMapTy::CreateCtrls(SettMapTy *this,char param_1)

{
  MMObjTy MVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  cMf32 *this_00;
  int iVar9;
  SettMapTy *this_01;
  undefined4 unaff_ESI;
  MMObjTy *pMVar10;
  void *unaff_EDI;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 auStack_ef4 [566];
  undefined4 auStack_61c [17];
  undefined4 uStack_5d8;
  uint auStack_5d0 [5];
  int iStack_5bc;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_4ac;
  int iStack_4a8;
  undefined4 auStack_454 [5];
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_94;
  undefined4 uStack_90;
  InternalExceptionFrame IStack_7c;
  undefined4 uStack_38;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  SettMapTy *pSStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puVar5 = auStack_454;
  pSStack_1c = this;
  for (iVar8 = 0xf6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = auStack_ef4;
  for (iVar8 = 0x223; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar6 = auStack_5d0;
  for (iVar8 = 0x5f; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  IStack_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_7c;
  iVar8 = Library::MSVCRT::__setjmp3(IStack_7c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = pSStack_1c;
  if (iVar8 != 0) {
    g_currentExceptionFrame = IStack_7c.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x34d,0,iVar8,&DAT_007a4ccc
                               ,s_SettMapTy__CreateCtrls_007cd1e0);
    if (iVar9 == 0) {
      RaiseInternalException(iVar8,0,s_E____titans_Start_sett_obj_cpp_007cd0e8,0x34d);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_1 == '\0') {
    auStack_5d0[0] = (uint)(DAT_0080877e != '\0');
    auStack_5d0[2] = 0x15;
    auStack_5d0[3] = 0x14;
    auStack_5d0[1] = iVar8;
    uStack_4ac = FUN_0070aa70(DAT_00806780,s_MASK_MAP_007cd1fc,0,1);
    auStack_5d0[4] = FUN_0070a6f0(DAT_00806780,0x12,s_MASK_MAP_007cd1fc,1);
    this_01 = pSStack_1c;
    uStack_5b0 = *(undefined4 *)(pSStack_1c + 8);
    uStack_5ac = 2;
    uStack_5a8 = 0x654d;
    iStack_5bc = auStack_5d0[4];
    iStack_4a8 = auStack_5d0[4];
    (**(code **)(**(int **)(pSStack_1c + 0xc) + 8))
              (2,(MMObjTy *)(pSStack_1c + 0x215d),0,auStack_5d0,0);
    goto LAB_005c69ed;
  }
  if (*(uint *)(pSStack_1c + 0x1c6f) != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              (*(uint **)(pSStack_1c + 0x1cb3),*(uint *)(pSStack_1c + 0x1c6f),0xfffffffe,
               *(uint *)(pSStack_1c + 0x1c87),*(uint *)(pSStack_1c + 0x1c8b));
  }
  if (*(uint *)(this_01 + 0x1d00) != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              (*(uint **)(this_01 + 0x1d44),*(uint *)(this_01 + 0x1d00),0xfffffffe,
               *(uint *)(this_01 + 0x1d18),*(uint *)(this_01 + 0x1d1c));
  }
  if (*(uint *)(this_01 + 0x1d91) != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              (*(uint **)(this_01 + 0x1dd5),*(uint *)(this_01 + 0x1d91),0xfffffffe,
               *(uint *)(this_01 + 0x1da9),*(uint *)(this_01 + 0x1dad));
  }
  pMVar10 = (MMObjTy *)(this_01 + 0x20cc);
  iVar8 = 10;
  do {
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)pMVar10);
    pMVar10 = pMVar10 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iStack_10 = 0x41;
  iStack_18 = 0x69ff;
  uVar7 = uStack_c;
  uVar11 = uStack_8;
  do {
    iStack_14 = 0;
    while( true ) {
      MVar1 = *(MMObjTy *)(this_01 + 0x1e26);
      if (((MVar1 == (MMObjTy)0x6) || (MVar1 == (MMObjTy)0x1)) || (iVar8 = 8, MVar1 == (MMObjTy)0x2)
         ) {
        iVar8 = 6;
      }
      if (iVar8 <= iStack_14) break;
      switch(iStack_14) {
      case 0:
        uVar11 = 0x14;
        uStack_c = 0x116;
        uVar7 = uStack_c;
        uStack_8 = uVar11;
        break;
      case 1:
        uVar11 = 0x14;
        uStack_c = 300;
        uVar7 = uStack_c;
        uStack_8 = uVar11;
        break;
      case 2:
        uVar11 = 0x18;
        uStack_c = 0x141;
        uVar7 = uStack_c;
        uStack_8 = uVar11;
        break;
      case 3:
        uVar11 = 0x5f;
        uStack_c = 0x15b;
        uVar7 = uStack_c;
        uStack_8 = uVar11;
        break;
      case 4:
        uStack_c = 0x1bc;
        uVar7 = uStack_c;
        if (((MVar1 == (MMObjTy)0x6) || (MVar1 == (MMObjTy)0x1)) || (MVar1 == (MMObjTy)0x2)) {
          uVar11 = 0xed;
          uStack_8 = uVar11;
        }
        else {
          uVar11 = 0xad;
          uStack_8 = uVar11;
        }
        break;
      case 5:
        if (((MVar1 == (MMObjTy)0x6) || (MVar1 == (MMObjTy)0x1)) ||
           (uStack_c = 0x26b, MVar1 == (MMObjTy)0x2)) {
          uStack_c = 0x2ab;
        }
        uVar11 = 0x3e;
        uVar7 = uStack_c;
        uStack_8 = uVar11;
        break;
      case 6:
        uVar11 = 0x2c;
        uStack_c = 0x2ab;
        uVar7 = uStack_c;
        uStack_8 = uVar11;
        break;
      case 7:
        uVar11 = 0x17;
        uStack_c = 0x2d9;
        uVar7 = uStack_c;
        uStack_8 = uVar11;
      }
      uVar4 = MMObjTy::CreateSprBut
                        ((MMObjTy *)this_01,1,0,uVar7,iStack_10,uVar11,0x14,iStack_18 + iStack_14,
                         iStack_18 + 0x80 + iStack_14);
      iVar8 = iStack_18 + iStack_14;
      iStack_14 = iStack_14 + 1;
      *(undefined4 *)(this_01 + iVar8 * 4 + -0x18870) = uVar4;
    }
    iStack_10 = iStack_10 + 0x19;
    iStack_18 = iStack_18 + 8;
  } while (iStack_10 < 0x13b);
  auStack_454[4] = *(undefined4 *)(this_01 + 0x1d18);
  uStack_2c4 = *(undefined4 *)(this_01 + 0x1c87);
  uStack_440 = *(undefined4 *)(this_01 + 0x1d1c);
  uStack_43c = *(undefined4 *)(this_01 + 0x1d20);
  uStack_438 = *(undefined4 *)(this_01 + 0x1d24);
  uStack_2c0 = *(undefined4 *)(this_01 + 0x1c8b);
  uStack_3ec = *(undefined4 *)(this_01 + 8);
  uStack_2bc = *(undefined4 *)(this_01 + 0x1c8f);
  uStack_338 = 0x32;
  uStack_1b8 = 0x32;
  uStack_140 = *(undefined4 *)(this_01 + 0x1da9);
  uStack_2b8 = *(undefined4 *)(this_01 + 0x1c93);
  uStack_13c = *(undefined4 *)(this_01 + 0x1dad);
  uStack_a8 = 2;
  auStack_454[1] = 2;
  auStack_454[3] = 2;
  uStack_3e8 = 2;
  uStack_2d0 = 2;
  uStack_2c8 = 2;
  uStack_268 = 2;
  uStack_138 = *(undefined4 *)(this_01 + 0x1db1);
  uStack_f8 = 2;
  auStack_454[0] = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_a4 = 0x6200;
  auStack_454[2] = 0;
  uStack_33c = 500;
  uStack_3e4 = 0x6202;
  uStack_2cc = 0;
  uStack_1bc = 500;
  uStack_264 = 0x6201;
  uStack_150 = 3;
  uStack_14c = 1;
  uStack_144 = 0;
  uStack_134 = 0xbe;
  uStack_130 = 0xe;
  uStack_f4 = 0x6203;
  uStack_26c = uStack_3ec;
  uStack_fc = uStack_3ec;
  uStack_ac = uStack_3ec;
  (**(code **)(**(int **)(this_01 + 0xc) + 8))(4,(MMObjTy *)(this_01 + 0x211d),0,auStack_454,0);
  MVar1 = *(MMObjTy *)(this_01 + 0x1e26);
  if (((MVar1 == (MMObjTy)0x6) || (MVar1 == (MMObjTy)0x7)) || (MVar1 == (MMObjTy)0xe)) {
    iStack_10 = 0xcb;
    pMVar10 = (MMObjTy *)(this_01 + 0x1f60);
    iVar8 = 0x68ff;
    do {
      uVar7 = MMObjTy::CreateSprBut
                        ((MMObjTy *)this_01,1,1,0x1a,iStack_10,0xe0,0x14,iVar8,iVar8 + 0x80);
      *(undefined4 *)pMVar10 = uVar7;
      pMVar10 = pMVar10 + 4;
      iStack_10 = iStack_10 + 0x28;
      iVar9 = iVar8 + -0x68fe;
      iVar8 = iVar8 + 1;
    } while (iVar9 < 6);
    if (DAT_0080877e != '\0') {
      uVar7 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x24,0x1b4,0xcc,0x1e,0x6905,0x6985);
      *(undefined4 *)(this_01 + 0x1f78) = uVar7;
      if (DAT_0080877e != '\0') goto LAB_005c665d;
    }
    *(undefined4 *)(this_01 + 0x2d) = 0x20;
    *(undefined4 *)(this_01 + 0x31) = 0;
    pMVar10 = (MMObjTy *)(this_01 + 0x1f60);
    iVar8 = 7;
    do {
      if (*(int *)pMVar10 != 0) {
        FUN_006e6080(this_01,2,*(int *)pMVar10,(undefined4 *)(this_01 + 0x1d));
      }
      pMVar10 = pMVar10 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  else {
    if (*(undefined4 **)(this_01 + 7999) != (undefined4 *)0x0) {
      cMf32::delete(this_00,*(undefined4 **)(this_01 + 7999));
    }
    puVar5 = FUN_006f0ec0(0x345,&DAT_0080ed16,0,0,0);
    *(undefined4 **)(this_01 + 7999) = puVar5;
    if (DAT_0080877e == '\0') {
      if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
        FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
      }
      puVar6 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
      *(uint **)(DAT_0081176c + 0x548) = puVar6;
      MVar1 = *(MMObjTy *)(this_01 + 0x1e26);
      uStack_5d8 = DAT_0080995c;
      puVar5 = &DAT_00809960;
      puVar12 = auStack_61c;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar12 = puVar12 + 1;
      }
      StartSystemTy::LoadMapData(DAT_0081176c,*(int *)(this_01 + 7999),(char)MVar1);
      DAT_0080995c = uStack_5d8;
      puVar5 = auStack_61c;
      puVar12 = &DAT_00809960;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar12 = puVar12 + 1;
      }
    }
    (**(code **)(*(int *)this_01 + 0x28))();
  }
LAB_005c665d:
  if (*(int *)(this_01 + 0x211d) != 0) {
    pMVar10 = (MMObjTy *)(this_01 + 0x1d);
    *(undefined4 *)(this_01 + 0x2d) = 0x20;
    *(undefined4 *)(this_01 + 0x31) = 1;
    FUN_006e6080(this_01,2,*(int *)(this_01 + 0x211d),(undefined4 *)pMVar10);
    *(undefined4 *)(this_01 + 0x2d) = 0x22;
    *(undefined4 *)(this_01 + 0x1f88) = 0;
    *(undefined4 *)(this_01 + 0x31) = 0;
    FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x211d),(undefined4 *)pMVar10);
    *(undefined4 *)(this_01 + 0x2d) = 0x28;
    if (*(uint *)(*(int *)(this_01 + 0x1f84) + 0xc) < 0xb) {
      iVar8 = 1;
    }
    else {
      iVar8 = *(uint *)(*(int *)(this_01 + 0x1f84) + 0xc) - 9;
    }
    *(int *)(this_01 + 0x31) = iVar8;
    FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x211d),(undefined4 *)pMVar10);
  }
  MVar1 = *(MMObjTy *)(this_01 + 0x1e26);
  if ((((MVar1 == (MMObjTy)0x2) || (MVar1 == (MMObjTy)0x5)) ||
      ((MVar1 == (MMObjTy)0xf || ((MVar1 == (MMObjTy)0xc || (MVar1 == (MMObjTy)0x10)))))) ||
     ((*(int *)(this_01 + 0x1e27) == 0x13 && ((DAT_00803400 == '\x14' || (DAT_00803400 == '\x15'))))
     )) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((((((MVar1 == (MMObjTy)0x6) || (MVar1 == (MMObjTy)0x1)) || (MVar1 == (MMObjTy)0x4)) ||
       ((MVar1 == (MMObjTy)0x7 || (MVar1 == (MMObjTy)0xd)))) || (MVar1 == (MMObjTy)0xe)) &&
     ((*(int *)(this_01 + 0x1e27) != 0x13 || ((DAT_00803400 != '\x14' && (DAT_00803400 != '\x15'))))
     )) {
    uVar7 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x1c4,0x14e,0x14a,0x14,0x653f,0x657f);
    *(undefined4 *)(this_01 + 0x2125) = uVar7;
  }
  uVar7 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x1c4,0x164,0x50,0x14,0x6542,0x6582);
  *(undefined4 *)(this_01 + 0x2131) = uVar7;
  uVar7 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x2be,0x164,0x50,0x14,0x6543,0x6583);
  *(undefined4 *)(this_01 + 0x2135) = uVar7;
  uVar7 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x1c4,0x17a,0x50,0x14,0x6544,0x6584);
  *(undefined4 *)(this_01 + 0x2139) = uVar7;
  uVar7 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x2be,0x17a,0x50,0x14,0x6545,0x6585);
  *(undefined4 *)(this_01 + 0x213d) = uVar7;
  uVar7 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x1c4,400,0x50,0x14,0x6546,0x6586);
  *(undefined4 *)(this_01 + 0x2141) = uVar7;
  uVar7 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x2be,400,0x50,0x14,0x6547,0x6587);
  *(undefined4 *)(this_01 + 0x2145) = uVar7;
  uVar7 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x18a,0x1a6,0x16,0x14,0x6548,0x6588);
  *(undefined4 *)(this_01 + 0x2149) = uVar7;
  uVar7 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x234,0x1a6,0x16,0x14,0x6549,0x6589);
  *(undefined4 *)(this_01 + 0x214d) = uVar7;
  uVar7 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x2f8,0x1a6,0x16,0x14,0x654a,0x658a);
  *(undefined4 *)(this_01 + 0x2151) = uVar7;
  MVar1 = *(MMObjTy *)(this_01 + 0x1e26);
  if (((MVar1 != (MMObjTy)0x6) && (MVar1 != (MMObjTy)0x1)) && (MVar1 != (MMObjTy)0x2)) {
    uVar7 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x1fe,0x1bc,0x16,0x14,0x654b,0x658b);
    *(undefined4 *)(this_01 + 0x2155) = uVar7;
    uVar7 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x2f8,0x1bc,0x16,0x14,0x654c,0x658c);
    *(undefined4 *)(this_01 + 0x2159) = uVar7;
  }
  if ((DAT_0080877e == '\0') || (bVar3)) {
    *(undefined4 *)(this_01 + 0x2d) = 0x20;
    *(undefined4 *)(this_01 + 0x31) = 0;
    pMVar10 = (MMObjTy *)(this_01 + 0x2125);
    iVar8 = 0xe;
    do {
      if (*(int *)pMVar10 != 0) {
        FUN_006e6080(this_01,2,*(int *)pMVar10,(undefined4 *)(this_01 + 0x1d));
      }
      pMVar10 = pMVar10 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(this_01 + 0x1e22));
  MVar1 = *(MMObjTy *)(this_01 + 0x1e26);
  if (((MVar1 != (MMObjTy)0x6) && (MVar1 != (MMObjTy)0x7)) && (MVar1 != (MMObjTy)0xe)) {
    *(undefined4 *)(this_01 + 0x2d) = 0x20;
    *(undefined4 *)(this_01 + 0x31) = 1;
    FUN_006e6080(this_01,2,*(undefined4 *)(DAT_0081176c + 0x389),(undefined4 *)(this_01 + 0x1d));
  }
  if (*(MMObjTy *)(this_01 + 0x21e2) != (MMObjTy)0x0) {
    StartSystemTy::CreateBinDesc(DAT_0081176c);
  }
LAB_005c69ed:
  iVar8 = *(int *)(this_01 + 0x1a5b);
  if (*(int *)(iVar8 + 0x2e6) != 0) {
    puVar5 = &uStack_38;
    for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    uStack_2c = 1;
    uStack_2e = 1;
    uStack_38._2_2_ = 1;
    MMsgTy::StatePanel(*(MMsgTy **)(iVar8 + 0x2e6),(int)&uStack_38);
  }
  g_currentExceptionFrame = IStack_7c.previous;
  return;
}

