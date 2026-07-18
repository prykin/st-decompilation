
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::CreateCtrls */

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
  undefined4 local_ef4 [566];
  undefined4 local_61c [17];
  undefined4 local_5d8;
  uint local_5d0 [5];
  int local_5bc;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined4 local_5a8;
  undefined4 local_4ac;
  int local_4a8;
  undefined4 local_454 [5];
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_7c;
  undefined4 local_78 [16];
  undefined4 local_38;
  undefined2 local_2e;
  undefined2 local_2c;
  SettMapTy *local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar5 = local_454;
  local_1c = this;
  for (iVar8 = 0xf6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_ef4;
  for (iVar8 = 0x223; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar6 = local_5d0;
  for (iVar8 = 0x5f; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_7c = DAT_00858df8;
  DAT_00858df8 = &local_7c;
  iVar8 = __setjmp3(local_78,0,unaff_EDI,unaff_ESI);
  this_01 = local_1c;
  if (iVar8 != 0) {
    DAT_00858df8 = (undefined4 *)local_7c;
    iVar9 = FUN_006ad4d0(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x34d,0,iVar8,&DAT_007a4ccc);
    if (iVar9 == 0) {
      FUN_006a5e40(iVar8,0,0x7cd0e8,0x34d);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_1 == '\0') {
    local_5d0[0] = (uint)(DAT_0080877e != '\0');
    local_5d0[2] = 0x15;
    local_5d0[3] = 0x14;
    local_5d0[1] = iVar8;
    local_4ac = FUN_0070aa70(DAT_00806780,s_MASK_MAP_007cd1fc,0,1);
    local_5d0[4] = FUN_0070a6f0(DAT_00806780,0x12,s_MASK_MAP_007cd1fc,1);
    this_01 = local_1c;
    local_5b0 = *(undefined4 *)(local_1c + 8);
    local_5ac = 2;
    local_5a8 = 0x654d;
    local_5bc = local_5d0[4];
    local_4a8 = local_5d0[4];
    (**(code **)(**(int **)(local_1c + 0xc) + 8))(2,(MMObjTy *)(local_1c + 0x215d),0,local_5d0,0);
    goto LAB_005c69ed;
  }
  if (*(uint *)(local_1c + 0x1c6f) != 0xffffffff) {
    FUN_006b34d0(*(uint **)(local_1c + 0x1cb3),*(uint *)(local_1c + 0x1c6f),0xfffffffe,
                 *(uint *)(local_1c + 0x1c87),*(uint *)(local_1c + 0x1c8b));
  }
  if (*(uint *)(this_01 + 0x1d00) != 0xffffffff) {
    FUN_006b34d0(*(uint **)(this_01 + 0x1d44),*(uint *)(this_01 + 0x1d00),0xfffffffe,
                 *(uint *)(this_01 + 0x1d18),*(uint *)(this_01 + 0x1d1c));
  }
  if (*(uint *)(this_01 + 0x1d91) != 0xffffffff) {
    FUN_006b34d0(*(uint **)(this_01 + 0x1dd5),*(uint *)(this_01 + 0x1d91),0xfffffffe,
                 *(uint *)(this_01 + 0x1da9),*(uint *)(this_01 + 0x1dad));
  }
  pMVar10 = (MMObjTy *)(this_01 + 0x20cc);
  iVar8 = 10;
  do {
    FUN_006b3430(DAT_008075a8,*(uint *)pMVar10);
    pMVar10 = pMVar10 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_10 = 0x41;
  local_18 = 0x69ff;
  uVar7 = local_c;
  uVar11 = local_8;
  do {
    local_14 = 0;
    while( true ) {
      MVar1 = *(MMObjTy *)(this_01 + 0x1e26);
      if (((MVar1 == (MMObjTy)0x6) || (MVar1 == (MMObjTy)0x1)) || (iVar8 = 8, MVar1 == (MMObjTy)0x2)
         ) {
        iVar8 = 6;
      }
      if (iVar8 <= local_14) break;
      switch(local_14) {
      case 0:
        uVar11 = 0x14;
        local_c = 0x116;
        uVar7 = local_c;
        local_8 = uVar11;
        break;
      case 1:
        uVar11 = 0x14;
        local_c = 300;
        uVar7 = local_c;
        local_8 = uVar11;
        break;
      case 2:
        uVar11 = 0x18;
        local_c = 0x141;
        uVar7 = local_c;
        local_8 = uVar11;
        break;
      case 3:
        uVar11 = 0x5f;
        local_c = 0x15b;
        uVar7 = local_c;
        local_8 = uVar11;
        break;
      case 4:
        local_c = 0x1bc;
        uVar7 = local_c;
        if (((MVar1 == (MMObjTy)0x6) || (MVar1 == (MMObjTy)0x1)) || (MVar1 == (MMObjTy)0x2)) {
          uVar11 = 0xed;
          local_8 = uVar11;
        }
        else {
          uVar11 = 0xad;
          local_8 = uVar11;
        }
        break;
      case 5:
        if (((MVar1 == (MMObjTy)0x6) || (MVar1 == (MMObjTy)0x1)) ||
           (local_c = 0x26b, MVar1 == (MMObjTy)0x2)) {
          local_c = 0x2ab;
        }
        uVar11 = 0x3e;
        uVar7 = local_c;
        local_8 = uVar11;
        break;
      case 6:
        uVar11 = 0x2c;
        local_c = 0x2ab;
        uVar7 = local_c;
        local_8 = uVar11;
        break;
      case 7:
        uVar11 = 0x17;
        local_c = 0x2d9;
        uVar7 = local_c;
        local_8 = uVar11;
      }
      uVar4 = MMObjTy::CreateSprBut
                        ((MMObjTy *)this_01,1,0,uVar7,local_10,uVar11,0x14,local_18 + local_14,
                         local_18 + 0x80 + local_14);
      iVar8 = local_18 + local_14;
      local_14 = local_14 + 1;
      *(undefined4 *)(this_01 + iVar8 * 4 + -0x18870) = uVar4;
    }
    local_10 = local_10 + 0x19;
    local_18 = local_18 + 8;
  } while (local_10 < 0x13b);
  local_454[4] = *(undefined4 *)(this_01 + 0x1d18);
  local_2c4 = *(undefined4 *)(this_01 + 0x1c87);
  local_440 = *(undefined4 *)(this_01 + 0x1d1c);
  local_43c = *(undefined4 *)(this_01 + 0x1d20);
  local_438 = *(undefined4 *)(this_01 + 0x1d24);
  local_2c0 = *(undefined4 *)(this_01 + 0x1c8b);
  local_3ec = *(undefined4 *)(this_01 + 8);
  local_2bc = *(undefined4 *)(this_01 + 0x1c8f);
  local_338 = 0x32;
  local_1b8 = 0x32;
  local_140 = *(undefined4 *)(this_01 + 0x1da9);
  local_2b8 = *(undefined4 *)(this_01 + 0x1c93);
  local_13c = *(undefined4 *)(this_01 + 0x1dad);
  local_a8 = 2;
  local_454[1] = 2;
  local_454[3] = 2;
  local_3e8 = 2;
  local_2d0 = 2;
  local_2c8 = 2;
  local_268 = 2;
  local_138 = *(undefined4 *)(this_01 + 0x1db1);
  local_f8 = 2;
  local_454[0] = 0;
  local_94 = 0;
  local_90 = 0;
  local_a4 = 0x6200;
  local_454[2] = 0;
  local_33c = 500;
  local_3e4 = 0x6202;
  local_2cc = 0;
  local_1bc = 500;
  local_264 = 0x6201;
  local_150 = 3;
  local_14c = 1;
  local_144 = 0;
  local_134 = 0xbe;
  local_130 = 0xe;
  local_f4 = 0x6203;
  local_26c = local_3ec;
  local_fc = local_3ec;
  local_ac = local_3ec;
  (**(code **)(**(int **)(this_01 + 0xc) + 8))(4,(MMObjTy *)(this_01 + 0x211d),0,local_454,0);
  MVar1 = *(MMObjTy *)(this_01 + 0x1e26);
  if (((MVar1 == (MMObjTy)0x6) || (MVar1 == (MMObjTy)0x7)) || (MVar1 == (MMObjTy)0xe)) {
    local_10 = 0xcb;
    pMVar10 = (MMObjTy *)(this_01 + 0x1f60);
    iVar8 = 0x68ff;
    do {
      uVar7 = MMObjTy::CreateSprBut
                        ((MMObjTy *)this_01,1,1,0x1a,local_10,0xe0,0x14,iVar8,iVar8 + 0x80);
      *(undefined4 *)pMVar10 = uVar7;
      pMVar10 = pMVar10 + 4;
      local_10 = local_10 + 0x28;
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
      puVar6 = FUN_006b54f0((uint *)0x0,10,10);
      *(uint **)(DAT_0081176c + 0x548) = puVar6;
      MVar1 = *(MMObjTy *)(this_01 + 0x1e26);
      local_5d8 = DAT_0080995c;
      puVar5 = &DAT_00809960;
      puVar12 = local_61c;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar12 = puVar12 + 1;
      }
      StartSystemTy::LoadMapData(DAT_0081176c,*(int *)(this_01 + 7999),(char)MVar1);
      DAT_0080995c = local_5d8;
      puVar5 = local_61c;
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
  FUN_006b3430(DAT_008075a8,*(uint *)(this_01 + 0x1e22));
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
    puVar5 = &local_38;
    for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    local_2c = 1;
    local_2e = 1;
    local_38._2_2_ = 1;
    MMsgTy::StatePanel(*(MMsgTy **)(iVar8 + 0x2e6),(int)&local_38);
  }
  DAT_00858df8 = (undefined4 *)local_7c;
  return;
}

