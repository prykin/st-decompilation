
void FUN_005c6030(char param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_ESI;
  int *piVar9;
  void *unaff_EDI;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 local_ef4 [566];
  undefined4 local_61c [17];
  undefined4 local_5d8;
  uint local_5d0 [5];
  int local_5bc;
  int local_5b0;
  undefined4 local_5ac;
  undefined4 local_5a8;
  undefined4 local_4ac;
  int local_4a8;
  int local_454 [5];
  int local_440;
  int local_43c;
  int local_438;
  int local_3ec;
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
  int local_26c;
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
  int local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_7c;
  undefined4 local_78 [16];
  undefined4 local_38;
  undefined2 local_2e;
  undefined2 local_2c;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar9 = local_454;
  for (iVar7 = 0xf6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  puVar4 = local_ef4;
  for (iVar7 = 0x223; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar5 = local_5d0;
  for (iVar7 = 0x5f; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_7c = DAT_00858df8;
  DAT_00858df8 = &local_7c;
  iVar7 = __setjmp3(local_78,0,unaff_EDI,unaff_ESI);
  if (iVar7 != 0) {
    DAT_00858df8 = (undefined4 *)local_7c;
    iVar8 = FUN_006ad4d0(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x34d,0,iVar7,&DAT_007a4ccc);
    if (iVar8 == 0) {
      FUN_006a5e40(iVar7,0,0x7cd0e8,0x34d);
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
    local_5d0[1] = iVar7;
    local_4ac = FUN_0070aa70(DAT_00806780,s_MASK_MAP_007cd1fc,0,1);
    local_5d0[4] = FUN_0070a6f0(DAT_00806780,0x12,s_MASK_MAP_007cd1fc,1);
    local_5b0 = local_1c[2];
    local_5ac = 2;
    local_5a8 = 0x654d;
    local_5bc = local_5d0[4];
    local_4a8 = local_5d0[4];
    (**(code **)(*(int *)local_1c[3] + 8))(2,(int)local_1c + 0x215d,0,local_5d0,0);
    goto LAB_005c69ed;
  }
  if (*(uint *)((int)local_1c + 0x1c6f) != 0xffffffff) {
    FUN_006b34d0(*(uint **)((int)local_1c + 0x1cb3),*(uint *)((int)local_1c + 0x1c6f),0xfffffffe,
                 *(uint *)((int)local_1c + 0x1c87),*(uint *)((int)local_1c + 0x1c8b));
  }
  if (local_1c[0x740] != 0xffffffff) {
    FUN_006b34d0((uint *)local_1c[0x751],local_1c[0x740],0xfffffffe,local_1c[0x746],local_1c[0x747])
    ;
  }
  if (*(uint *)((int)local_1c + 0x1d91) != 0xffffffff) {
    FUN_006b34d0(*(uint **)((int)local_1c + 0x1dd5),*(uint *)((int)local_1c + 0x1d91),0xfffffffe,
                 *(uint *)((int)local_1c + 0x1da9),*(uint *)((int)local_1c + 0x1dad));
  }
  puVar5 = (uint *)(local_1c + 0x833);
  iVar7 = 10;
  do {
    FUN_006b3430(DAT_008075a8,*puVar5);
    puVar5 = puVar5 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_10 = 0x41;
  local_18 = 0x69ff;
  uVar6 = local_c;
  uVar10 = local_8;
  do {
    local_14 = 0;
    while( true ) {
      cVar1 = *(char *)((int)local_1c + 0x1e26);
      if (((cVar1 == '\x06') || (cVar1 == '\x01')) || (iVar7 = 8, cVar1 == '\x02')) {
        iVar7 = 6;
      }
      if (iVar7 <= local_14) break;
      switch(local_14) {
      case 0:
        uVar10 = 0x14;
        local_c = 0x116;
        uVar6 = local_c;
        local_8 = uVar10;
        break;
      case 1:
        uVar10 = 0x14;
        local_c = 300;
        uVar6 = local_c;
        local_8 = uVar10;
        break;
      case 2:
        uVar10 = 0x18;
        local_c = 0x141;
        uVar6 = local_c;
        local_8 = uVar10;
        break;
      case 3:
        uVar10 = 0x5f;
        local_c = 0x15b;
        uVar6 = local_c;
        local_8 = uVar10;
        break;
      case 4:
        local_c = 0x1bc;
        uVar6 = local_c;
        if (((cVar1 == '\x06') || (cVar1 == '\x01')) || (cVar1 == '\x02')) {
          uVar10 = 0xed;
          local_8 = uVar10;
        }
        else {
          uVar10 = 0xad;
          local_8 = uVar10;
        }
        break;
      case 5:
        if (((cVar1 == '\x06') || (cVar1 == '\x01')) || (local_c = 0x26b, cVar1 == '\x02')) {
          local_c = 0x2ab;
        }
        uVar10 = 0x3e;
        uVar6 = local_c;
        local_8 = uVar10;
        break;
      case 6:
        uVar10 = 0x2c;
        local_c = 0x2ab;
        uVar6 = local_c;
        local_8 = uVar10;
        break;
      case 7:
        uVar10 = 0x17;
        local_c = 0x2d9;
        uVar6 = local_c;
        local_8 = uVar10;
      }
      iVar7 = thunk_FUN_005b5510(1,0,uVar6,local_10,uVar10,0x14,local_18 + local_14,
                                 local_18 + 0x80 + local_14);
      iVar8 = local_18 + local_14;
      local_14 = local_14 + 1;
      local_1c[iVar8 + -0x621c] = iVar7;
    }
    local_10 = local_10 + 0x19;
    local_18 = local_18 + 8;
  } while (local_10 < 0x13b);
  local_454[4] = local_1c[0x746];
  local_2c4 = *(undefined4 *)((int)local_1c + 0x1c87);
  local_440 = local_1c[0x747];
  local_43c = local_1c[0x748];
  local_438 = local_1c[0x749];
  local_2c0 = *(undefined4 *)((int)local_1c + 0x1c8b);
  local_3ec = local_1c[2];
  local_2bc = *(undefined4 *)((int)local_1c + 0x1c8f);
  local_338 = 0x32;
  local_1b8 = 0x32;
  local_140 = *(undefined4 *)((int)local_1c + 0x1da9);
  local_2b8 = *(undefined4 *)((int)local_1c + 0x1c93);
  local_13c = *(undefined4 *)((int)local_1c + 0x1dad);
  local_a8 = 2;
  local_454[1] = 2;
  local_454[3] = 2;
  local_3e8 = 2;
  local_2d0 = 2;
  local_2c8 = 2;
  local_268 = 2;
  local_138 = *(undefined4 *)((int)local_1c + 0x1db1);
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
  (**(code **)(*(int *)local_1c[3] + 8))(4,(int)local_1c + 0x211d,0,local_454,0);
  cVar1 = *(char *)((int)local_1c + 0x1e26);
  if (((cVar1 == '\x06') || (cVar1 == '\a')) || (cVar1 == '\x0e')) {
    local_10 = 0xcb;
    piVar9 = local_1c + 0x7d8;
    iVar7 = 0x68ff;
    do {
      iVar8 = thunk_FUN_005b5510(1,1,0x1a,local_10,0xe0,0x14,iVar7,iVar7 + 0x80);
      *piVar9 = iVar8;
      piVar9 = piVar9 + 1;
      local_10 = local_10 + 0x28;
      iVar8 = iVar7 + -0x68fe;
      iVar7 = iVar7 + 1;
    } while (iVar8 < 6);
    if (DAT_0080877e != '\0') {
      iVar7 = thunk_FUN_005b5510(1,1,0x24,0x1b4,0xcc,0x1e,0x6905,0x6985);
      local_1c[0x7de] = iVar7;
      if (DAT_0080877e != '\0') goto LAB_005c665d;
    }
    *(undefined4 *)((int)local_1c + 0x2d) = 0x20;
    *(undefined4 *)((int)local_1c + 0x31) = 0;
    piVar9 = local_1c + 0x7d8;
    iVar7 = 7;
    do {
      if (*piVar9 != 0) {
        FUN_006e6080(local_1c,2,*piVar9,(undefined4 *)((int)local_1c + 0x1d));
      }
      piVar9 = piVar9 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  else {
    if (*(undefined4 **)((int)local_1c + 7999) != (undefined4 *)0x0) {
      FUN_006f1170(*(undefined4 **)((int)local_1c + 7999));
    }
    puVar4 = FUN_006f0ec0(0x345,&DAT_0080ed16,0,0,0);
    *(undefined4 **)((int)local_1c + 7999) = puVar4;
    if (DAT_0080877e == '\0') {
      if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
        FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
      }
      puVar5 = FUN_006b54f0((uint *)0x0,10,10);
      *(uint **)(DAT_0081176c + 0x548) = puVar5;
      cVar1 = *(char *)((int)local_1c + 0x1e26);
      local_5d8 = DAT_0080995c;
      puVar4 = &DAT_00809960;
      puVar11 = local_61c;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar11 = puVar11 + 1;
      }
      thunk_FUN_005dc050(*(int *)((int)local_1c + 7999),cVar1);
      DAT_0080995c = local_5d8;
      puVar4 = local_61c;
      puVar11 = &DAT_00809960;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar11 = puVar11 + 1;
      }
    }
    (**(code **)(*local_1c + 0x28))();
  }
LAB_005c665d:
  if (*(int *)((int)local_1c + 0x211d) != 0) {
    puVar4 = (undefined4 *)((int)local_1c + 0x1d);
    *(undefined4 *)((int)local_1c + 0x2d) = 0x20;
    *(undefined4 *)((int)local_1c + 0x31) = 1;
    FUN_006e6080(local_1c,2,*(int *)((int)local_1c + 0x211d),puVar4);
    *(undefined4 *)((int)local_1c + 0x2d) = 0x22;
    local_1c[0x7e2] = 0;
    *(undefined4 *)((int)local_1c + 0x31) = 0;
    FUN_006e6080(local_1c,2,*(undefined4 *)((int)local_1c + 0x211d),puVar4);
    *(undefined4 *)((int)local_1c + 0x2d) = 0x28;
    if (*(uint *)(local_1c[0x7e1] + 0xc) < 0xb) {
      iVar7 = 1;
    }
    else {
      iVar7 = *(uint *)(local_1c[0x7e1] + 0xc) - 9;
    }
    *(int *)((int)local_1c + 0x31) = iVar7;
    FUN_006e6080(local_1c,2,*(undefined4 *)((int)local_1c + 0x211d),puVar4);
  }
  cVar1 = *(char *)((int)local_1c + 0x1e26);
  if ((((cVar1 == '\x02') || (cVar1 == '\x05')) ||
      ((cVar1 == '\x0f' || ((cVar1 == '\f' || (cVar1 == '\x10')))))) ||
     ((*(int *)((int)local_1c + 0x1e27) == 0x13 &&
      ((DAT_00803400 == '\x14' || (DAT_00803400 == '\x15')))))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((((((cVar1 == '\x06') || (cVar1 == '\x01')) || (cVar1 == '\x04')) ||
       ((cVar1 == '\a' || (cVar1 == '\r')))) || (cVar1 == '\x0e')) &&
     ((*(int *)((int)local_1c + 0x1e27) != 0x13 ||
      ((DAT_00803400 != '\x14' && (DAT_00803400 != '\x15')))))) {
    uVar6 = thunk_FUN_005b5510(1,1,0x1c4,0x14e,0x14a,0x14,0x653f,0x657f);
    *(undefined4 *)((int)local_1c + 0x2125) = uVar6;
  }
  uVar6 = thunk_FUN_005b5510(1,1,0x1c4,0x164,0x50,0x14,0x6542,0x6582);
  *(undefined4 *)((int)local_1c + 0x2131) = uVar6;
  uVar6 = thunk_FUN_005b5510(1,1,0x2be,0x164,0x50,0x14,0x6543,0x6583);
  *(undefined4 *)((int)local_1c + 0x2135) = uVar6;
  uVar6 = thunk_FUN_005b5510(1,1,0x1c4,0x17a,0x50,0x14,0x6544,0x6584);
  *(undefined4 *)((int)local_1c + 0x2139) = uVar6;
  uVar6 = thunk_FUN_005b5510(1,1,0x2be,0x17a,0x50,0x14,0x6545,0x6585);
  *(undefined4 *)((int)local_1c + 0x213d) = uVar6;
  uVar6 = thunk_FUN_005b5510(1,1,0x1c4,400,0x50,0x14,0x6546,0x6586);
  *(undefined4 *)((int)local_1c + 0x2141) = uVar6;
  uVar6 = thunk_FUN_005b5510(1,1,0x2be,400,0x50,0x14,0x6547,0x6587);
  *(undefined4 *)((int)local_1c + 0x2145) = uVar6;
  uVar6 = thunk_FUN_005b5510(1,1,0x18a,0x1a6,0x16,0x14,0x6548,0x6588);
  *(undefined4 *)((int)local_1c + 0x2149) = uVar6;
  uVar6 = thunk_FUN_005b5510(1,1,0x234,0x1a6,0x16,0x14,0x6549,0x6589);
  *(undefined4 *)((int)local_1c + 0x214d) = uVar6;
  uVar6 = thunk_FUN_005b5510(1,1,0x2f8,0x1a6,0x16,0x14,0x654a,0x658a);
  *(undefined4 *)((int)local_1c + 0x2151) = uVar6;
  cVar1 = *(char *)((int)local_1c + 0x1e26);
  if (((cVar1 != '\x06') && (cVar1 != '\x01')) && (cVar1 != '\x02')) {
    uVar6 = thunk_FUN_005b5510(1,1,0x1fe,0x1bc,0x16,0x14,0x654b,0x658b);
    *(undefined4 *)((int)local_1c + 0x2155) = uVar6;
    uVar6 = thunk_FUN_005b5510(1,1,0x2f8,0x1bc,0x16,0x14,0x654c,0x658c);
    *(undefined4 *)((int)local_1c + 0x2159) = uVar6;
  }
  if ((DAT_0080877e == '\0') || (bVar3)) {
    *(undefined4 *)((int)local_1c + 0x2d) = 0x20;
    *(undefined4 *)((int)local_1c + 0x31) = 0;
    piVar9 = (int *)((int)local_1c + 0x2125);
    iVar7 = 0xe;
    do {
      if (*piVar9 != 0) {
        FUN_006e6080(local_1c,2,*piVar9,(undefined4 *)((int)local_1c + 0x1d));
      }
      piVar9 = piVar9 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_006b3430(DAT_008075a8,*(uint *)((int)local_1c + 0x1e22));
  cVar1 = *(char *)((int)local_1c + 0x1e26);
  if (((cVar1 != '\x06') && (cVar1 != '\a')) && (cVar1 != '\x0e')) {
    *(undefined4 *)((int)local_1c + 0x2d) = 0x20;
    *(undefined4 *)((int)local_1c + 0x31) = 1;
    FUN_006e6080(local_1c,2,*(undefined4 *)(DAT_0081176c + 0x389),
                 (undefined4 *)((int)local_1c + 0x1d));
  }
  if (*(char *)((int)local_1c + 0x21e2) != '\0') {
    thunk_FUN_005ddc70();
  }
LAB_005c69ed:
  iVar7 = *(int *)((int)local_1c + 0x1a5b);
  if (*(int *)(iVar7 + 0x2e6) != 0) {
    puVar4 = &local_38;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    local_2c = 1;
    local_2e = 1;
    local_38._2_2_ = 1;
    thunk_FUN_005b9010(*(void **)(iVar7 + 0x2e6),(int)&local_38);
  }
  DAT_00858df8 = (undefined4 *)local_7c;
  return;
}

