
undefined4 FUN_0052bf00(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  ushort *puVar9;
  undefined4 uVar10;
  int iVar11;
  char cVar12;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar13;
  byte bVar14;
  LPCSTR pCVar15;
  undefined4 *local_bc;
  undefined4 local_b8 [16];
  undefined1 local_78 [16];
  undefined4 local_68;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48 [2];
  uint local_40 [2];
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  uint local_18 [2];
  void *local_10;
  uint local_c;
  char local_5;
  
  local_bc = DAT_00858df8;
  DAT_00858df8 = &local_bc;
  iVar6 = __setjmp3(local_b8,0,unaff_EDI,unaff_ESI);
  if (iVar6 == 0) {
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0:
      iVar6 = FUN_006e4d40(&DAT_00807620,*(int *)((int)local_10 + 0xc));
      if (iVar6 == 1) {
        uVar13 = *(uint *)((int)local_10 + 0x86);
        uVar2 = *(uint *)((int)local_10 + 0x8a);
        if (uVar13 != uVar2) {
          if (uVar13 < uVar2) {
            if (uVar2 - uVar13 < 0x65) {
              if (uVar2 - uVar13 < 0xb) {
                iVar6 = uVar13 + 1;
              }
              else {
                iVar6 = uVar13 + 10;
              }
            }
            else {
              iVar6 = uVar13 + 100;
            }
          }
          else if (uVar13 - uVar2 < 0x65) {
            if (uVar13 - uVar2 < 0xb) {
              iVar6 = uVar13 - 1;
            }
            else {
              iVar6 = uVar13 - 10;
            }
          }
          else {
            iVar6 = uVar13 - 100;
          }
          *(int *)((int)local_10 + 0x86) = iVar6;
          if (DAT_0080874e == '\x03') {
            uVar10 = *(undefined4 *)((int)local_10 + 0x86);
            pCVar15 = &DAT_007c28fc;
          }
          else {
            uVar10 = *(undefined4 *)((int)local_10 + 0x86);
            pCVar15 = &DAT_007c6f44;
          }
          wsprintfA((LPSTR)local_18,pCVar15,uVar10);
          iVar6 = *(int *)((int)local_10 + 0x72);
          local_c = *(uint *)(iVar6 + 0x14);
          if (local_c == 0) {
            local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc
                      ) * *(int *)(iVar6 + 8);
          }
          uVar1 = *(undefined1 *)((int)local_10 + 0x69);
          puVar7 = (undefined4 *)FUN_006b4fa0(iVar6);
          for (uVar13 = local_c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar7 = puVar7 + 1;
          }
          for (uVar13 = local_c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined1 *)puVar7 = uVar1;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          iVar6 = *(int *)((int)local_10 + 0x72);
          FUN_00710a90(iVar6,0,0,0,*(int *)(iVar6 + 4),*(int *)(iVar6 + 8));
          FUN_007119c0(local_18,-1,-1,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5);
          thunk_FUN_0052b8a0((int)local_10);
        }
        uVar13 = *(uint *)((int)local_10 + 0x8e);
        uVar2 = *(uint *)((int)local_10 + 0x92);
        if (uVar13 != uVar2) {
          if (uVar13 < uVar2) {
            if (uVar2 - uVar13 < 0x65) {
              if (uVar2 - uVar13 < 0xb) {
                iVar6 = uVar13 + 1;
              }
              else {
                iVar6 = uVar13 + 10;
              }
            }
            else {
              iVar6 = uVar13 + 100;
            }
          }
          else if (uVar13 - uVar2 < 0x65) {
            if (uVar13 - uVar2 < 0xb) {
              iVar6 = uVar13 - 1;
            }
            else {
              iVar6 = uVar13 - 10;
            }
          }
          else {
            iVar6 = uVar13 - 100;
          }
          *(int *)((int)local_10 + 0x8e) = iVar6;
          wsprintfA((LPSTR)local_40,&DAT_007c28fc,iVar6);
          iVar6 = *(int *)((int)local_10 + 0x76);
          local_c = *(uint *)(iVar6 + 0x14);
          if (local_c == 0) {
            local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc
                      ) * *(int *)(iVar6 + 8);
          }
          uVar1 = *(undefined1 *)((int)local_10 + 0x69);
          puVar7 = (undefined4 *)FUN_006b4fa0(iVar6);
          for (uVar13 = local_c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar7 = puVar7 + 1;
          }
          for (uVar13 = local_c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined1 *)puVar7 = uVar1;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          iVar6 = *(int *)((int)local_10 + 0x76);
          FUN_00710a90(iVar6,0,0,0,*(int *)(iVar6 + 4),*(int *)(iVar6 + 8));
          FUN_007119c0(local_40,-1,-1,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 4);
          thunk_FUN_0052b8f0((int)local_10);
        }
        uVar13 = *(uint *)((int)local_10 + 0x96);
        uVar2 = *(uint *)((int)local_10 + 0x9a);
        if (uVar13 != uVar2) {
          if (uVar13 < uVar2) {
            if (uVar2 - uVar13 < 0x65) {
              if (uVar2 - uVar13 < 0xb) {
                iVar6 = uVar13 + 1;
              }
              else {
                iVar6 = uVar13 + 10;
              }
            }
            else {
              iVar6 = uVar13 + 100;
            }
          }
          else if (uVar13 - uVar2 < 0x65) {
            if (uVar13 - uVar2 < 0xb) {
              iVar6 = uVar13 - 1;
            }
            else {
              iVar6 = uVar13 - 10;
            }
          }
          else {
            iVar6 = uVar13 - 100;
          }
          *(int *)((int)local_10 + 0x96) = iVar6;
          wsprintfA((LPSTR)local_48,&DAT_007c28fc,iVar6);
          iVar6 = *(int *)((int)local_10 + 0x7a);
          local_c = *(uint *)(iVar6 + 0x14);
          if (local_c == 0) {
            local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc
                      ) * *(int *)(iVar6 + 8);
          }
          uVar1 = *(undefined1 *)((int)local_10 + 0x69);
          puVar7 = (undefined4 *)FUN_006b4fa0(iVar6);
          for (uVar13 = local_c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar7 = puVar7 + 1;
          }
          for (uVar13 = local_c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined1 *)puVar7 = uVar1;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          iVar6 = *(int *)((int)local_10 + 0x7a);
          FUN_00710a90(iVar6,0,0,0,*(int *)(iVar6 + 4),*(int *)(iVar6 + 8));
          FUN_007119c0(local_48,-1,-1,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
          thunk_FUN_0052b940((int)local_10);
        }
        if ((*(char *)((int)local_10 + 0xa2) != *(char *)((int)local_10 + 0xa3)) ||
           (*(char *)((int)local_10 + 0xa4) != *(char *)((int)local_10 + 0xa5))) {
          *(char *)((int)local_10 + 0xa2) = *(char *)((int)local_10 + 0xa3);
          *(undefined1 *)((int)local_10 + 0xa4) = *(undefined1 *)((int)local_10 + 0xa5);
          thunk_FUN_0052b990((int)local_10);
        }
      }
      break;
    case 2:
      iVar6 = (DAT_0080874e != '\x03') + 0xb;
      *(int *)((int)local_10 + 0x2c) = iVar6;
      *(int *)((int)local_10 + 0x24) = iVar6;
      *(int *)((int)local_10 + 0x1c) = iVar6;
      *(uint *)((int)local_10 + 0x58) = (-(uint)(DAT_0080874e != '\x03') & 0xffffffe5) + 0x50;
      *(uint *)((int)local_10 + 0x40) = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff9) + 0x24;
      if (DAT_0080874e == '\x03') {
        iVar6 = DAT_00806730 + -0x107;
      }
      else {
        iVar6 = DAT_00806730 + -0xd5;
      }
      *(int *)((int)local_10 + 0x18) = iVar6;
      if (DAT_0080874e == '\x03') {
        iVar6 = DAT_00806730 + -0x94;
      }
      else {
        iVar6 = DAT_00806730 + -0x9e;
      }
      *(int *)((int)local_10 + 0x20) = iVar6;
      if (DAT_0080874e == '\x03') {
        iVar6 = DAT_00806730 + -0x44;
      }
      else {
        iVar6 = DAT_00806730 + -0x5d;
      }
      *(int *)((int)local_10 + 0x28) = iVar6;
      if (DAT_0080874e == '\x03') {
        iVar6 = DAT_00806730 + -0x160;
      }
      else {
        iVar6 = DAT_00806730 + -0x154;
      }
      *(int *)((int)local_10 + 0x30) = iVar6;
      *(int *)((int)local_10 + 0x38) = DAT_00806730 + -99;
      *(int *)((int)local_10 + 0x3c) = DAT_00806734 + -0x16;
      *(byte *)((int)local_10 + 0x69) = ((DAT_0080874e == '\x03') - 1U & 0xc3) + 0x3d;
      puVar7 = FUN_0070ceb0(0x19d,DAT_00806790,s_MONEY_FONT_007c211c,0);
      *(undefined4 **)((int)local_10 + 0x6a) = puVar7;
      puVar7[0x16] = 1;
      puVar7[0x17] = 0;
      puVar7 = FUN_0070ceb0(0x19d,DAT_00806790,s_TIME_FONT_007c212c,0);
      *(undefined4 **)((int)local_10 + 0x6e) = puVar7;
      puVar7[0x16] = 1;
      puVar7[0x17] = 0;
      puVar7 = (undefined4 *)0x0;
      iVar11 = 0;
      iVar6 = 1;
      bVar14 = 0;
      uVar13 = 0xffffffff;
      pbVar8 = (byte *)thunk_FUN_00571240(s_IND_PNT_007c2078,0);
      puVar9 = FUN_00709af0(DAT_00806794,0xb,pbVar8,uVar13,bVar14,iVar6,iVar11,puVar7);
      *(ushort **)((int)local_10 + 0x82) = puVar9;
      puVar7 = (undefined4 *)(DAT_0080679c + 0x28);
      iVar6 = 1;
      uVar13 = FUN_006b4fe0(DAT_0080679c);
      iVar6 = FUN_006b50c0(*(int *)((int)local_10 + 0x40),*(int *)((int)local_10 + 0x44),
                           (uint)*(ushort *)(DAT_0080679c + 0xe),uVar13,puVar7,iVar6);
      *(int *)((int)local_10 + 0x72) = iVar6;
      local_c = *(uint *)(iVar6 + 0x14);
      if (local_c == 0) {
        local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(iVar6 + 8);
      }
      uVar1 = *(undefined1 *)((int)local_10 + 0x69);
      puVar7 = (undefined4 *)FUN_006b4fa0(iVar6);
      iVar6 = 1;
      for (uVar13 = local_c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar7 = puVar7 + 1;
      }
      for (uVar13 = local_c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar7 = uVar1;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar7 = (undefined4 *)(DAT_0080679c + 0x28);
      uVar13 = FUN_006b4fe0(DAT_0080679c);
      iVar6 = FUN_006b50c0(*(int *)((int)local_10 + 0x48),*(int *)((int)local_10 + 0x4c),
                           (uint)*(ushort *)(DAT_0080679c + 0xe),uVar13,puVar7,iVar6);
      *(int *)((int)local_10 + 0x76) = iVar6;
      local_c = *(uint *)(iVar6 + 0x14);
      if (local_c == 0) {
        local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(iVar6 + 8);
      }
      uVar1 = *(undefined1 *)((int)local_10 + 0x69);
      puVar7 = (undefined4 *)FUN_006b4fa0(iVar6);
      iVar6 = 1;
      for (uVar13 = local_c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar7 = puVar7 + 1;
      }
      for (uVar13 = local_c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar7 = uVar1;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar7 = (undefined4 *)(DAT_0080679c + 0x28);
      uVar13 = FUN_006b4fe0(DAT_0080679c);
      iVar6 = FUN_006b50c0(*(int *)((int)local_10 + 0x50),*(int *)((int)local_10 + 0x54),
                           (uint)*(ushort *)(DAT_0080679c + 0xe),uVar13,puVar7,iVar6);
      *(int *)((int)local_10 + 0x7a) = iVar6;
      local_c = *(uint *)(iVar6 + 0x14);
      if (local_c == 0) {
        local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(iVar6 + 8);
      }
      uVar1 = *(undefined1 *)((int)local_10 + 0x69);
      puVar7 = (undefined4 *)FUN_006b4fa0(iVar6);
      iVar6 = 1;
      for (uVar13 = local_c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar7 = puVar7 + 1;
      }
      for (uVar13 = local_c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar7 = uVar1;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar7 = (undefined4 *)(DAT_0080679c + 0x28);
      uVar13 = FUN_006b4fe0(DAT_0080679c);
      iVar6 = FUN_006b50c0(*(int *)((int)local_10 + 0x60),*(int *)((int)local_10 + 100),
                           (uint)*(ushort *)(DAT_0080679c + 0xe),uVar13,puVar7,iVar6);
      *(int *)((int)local_10 + 0x7e) = iVar6;
      local_c = *(uint *)(iVar6 + 0x14);
      if (local_c == 0) {
        local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(iVar6 + 8);
      }
      uVar1 = *(undefined1 *)((int)local_10 + 0x69);
      puVar7 = (undefined4 *)FUN_006b4fa0(iVar6);
      for (uVar13 = local_c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar7 = puVar7 + 1;
      }
      for (uVar13 = local_c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar7 = uVar1;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar7 = local_38;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_24 = *(undefined4 *)((int)local_10 + 8);
      local_28 = 0x13;
      FUN_006e6000(local_10,3,1,local_38);
      *(undefined4 *)((int)local_10 + 0x86) = 1;
      *(undefined4 *)((int)local_10 + 0x8e) = 1;
      *(undefined4 *)((int)local_10 + 0x96) = 1;
      *(undefined1 *)((int)local_10 + 0xa3) = 0;
      if (((DAT_007fa174 != 0) && (DAT_0080874d < 8)) &&
         ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[(uint)DAT_0080874d * 0x51] < 8)))) {
        uVar5 = thunk_FUN_0044e1f0((uint)DAT_0080874d);
        thunk_FUN_0052bda0(local_10,DAT_0080874d,(uint)uVar5);
      }
      DAT_008016d4 = local_10;
      if (DAT_007fa174 != 0) {
        thunk_FUN_004d8b70(DAT_0080874d);
      }
      break;
    case 3:
      DAT_008016d4 = (void *)0x0;
      uVar10 = *(undefined4 *)((int)local_10 + 8);
      puVar7 = local_38;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_28 = 0x14;
      local_24 = uVar10;
      FUN_006e6000(local_10,3,1,local_38);
      if (*(int *)((int)local_10 + 0x72) != 0) {
        FUN_006ab060((undefined4 *)((int)local_10 + 0x72));
      }
      if (*(int *)((int)local_10 + 0x76) != 0) {
        FUN_006ab060((undefined4 *)((int)local_10 + 0x76));
      }
      if (*(int *)((int)local_10 + 0x7a) != 0) {
        FUN_006ab060((undefined4 *)((int)local_10 + 0x7a));
      }
      if (*(int *)((int)local_10 + 0x7e) != 0) {
        FUN_006ab060((undefined4 *)((int)local_10 + 0x7e));
      }
      if (*(int *)((int)local_10 + 0x82) != 0) {
        *(undefined4 *)((int)local_10 + 0x82) = 0;
      }
      if (*(uint **)((int)local_10 + 0x6a) != (uint *)0x0) {
        FUN_00710560(*(uint **)((int)local_10 + 0x6a));
        *(undefined4 *)((int)local_10 + 0x6a) = 0;
      }
      if (*(uint **)((int)local_10 + 0x6e) != (uint *)0x0) {
        FUN_00710560(*(uint **)((int)local_10 + 0x6e));
        *(undefined4 *)((int)local_10 + 0x6e) = 0;
      }
      break;
    case 5:
      thunk_FUN_0052b8a0((int)local_10);
      thunk_FUN_0052b8f0((int)local_10);
      thunk_FUN_0052b940((int)local_10);
      thunk_FUN_0052b990((int)local_10);
      thunk_FUN_0052bbe0((int)local_10);
      break;
    case 0x60:
      uVar13 = (uint)*(ushort *)(param_1 + 0x18);
      local_c = (uint)*(ushort *)(param_1 + 0x1a);
      local_5 = '\0';
      if (DAT_0080874e != '\x03') {
        if (((((int)uVar13 < *(int *)((int)local_10 + 0x18)) ||
             (*(int *)((int)local_10 + 0x40) + *(int *)((int)local_10 + 0x18) <= (int)uVar13)) ||
            ((int)local_c < *(int *)((int)local_10 + 0x1c))) ||
           (*(int *)((int)local_10 + 0x44) + *(int *)((int)local_10 + 0x1c) <= (int)local_c)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          local_5 = '\x01';
        }
      }
      if ((((int)uVar13 < *(int *)((int)local_10 + 0x20)) ||
          (*(int *)((int)local_10 + 0x48) + *(int *)((int)local_10 + 0x20) <= (int)uVar13)) ||
         (((int)local_c < *(int *)((int)local_10 + 0x24) ||
          (*(int *)((int)local_10 + 0x4c) + *(int *)((int)local_10 + 0x24) <= (int)local_c)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_5 = '\x02';
      }
      if ((((int)uVar13 < *(int *)((int)local_10 + 0x28)) ||
          (*(int *)((int)local_10 + 0x50) + *(int *)((int)local_10 + 0x28) <= (int)uVar13)) ||
         (((int)local_c < *(int *)((int)local_10 + 0x2c) ||
          (*(int *)((int)local_10 + 0x54) + *(int *)((int)local_10 + 0x2c) <= (int)local_c)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_5 = '\x03';
      }
      if (((((int)uVar13 < *(int *)((int)local_10 + 0x30)) ||
           (*(int *)((int)local_10 + 0x58) + *(int *)((int)local_10 + 0x30) <= (int)uVar13)) ||
          ((int)local_c < *(int *)((int)local_10 + 0x34))) ||
         (*(int *)((int)local_10 + 0x5c) + *(int *)((int)local_10 + 0x34) <= (int)local_c)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_5 = '\x04';
      }
      local_58 = *(int *)((int)local_10 + 0x38) + -0x1e;
      local_50 = *(int *)((int)local_10 + 0x60) + 0x23;
      local_54 = *(int *)((int)local_10 + 0x3c) + -3;
      local_4c = *(int *)((int)local_10 + 100) + 6;
      if ((((int)uVar13 < local_58) || (local_50 + local_58 <= (int)uVar13)) ||
         (((int)local_c < local_54 || (local_4c + local_54 <= (int)local_c)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      cVar12 = '\x05';
      if (!bVar4) {
        cVar12 = local_5;
      }
      if (*(char *)((int)local_10 + 0x68) != cVar12) {
        if (*(char *)((int)local_10 + 0x68) != '\0') {
          local_68 = 0x4202;
          thunk_FUN_0052b760(local_10,(int)local_78);
          (**(code **)*DAT_00802a30)(local_78);
        }
        *(char *)((int)local_10 + 0x68) = cVar12;
        if (cVar12 != '\0') {
          local_68 = 0x4201;
          thunk_FUN_0052b760(local_10,(int)local_78);
          (**(code **)*DAT_00802a30)(local_78);
        }
      }
    }
    DAT_00858df8 = local_bc;
    uVar10 = FUN_006e5fd0();
    return uVar10;
  }
  DAT_00858df8 = local_bc;
  iVar11 = FUN_006ad4d0(s_E____titans_Andrey_money_cpp_007c6f48,0x12a,0,iVar6,&DAT_007a4ccc);
  if (iVar11 != 0) {
    pcVar3 = (code *)swi(3);
    uVar10 = (*pcVar3)();
    return uVar10;
  }
  FUN_006a5e40(iVar6,0,0x7c6f48,0x12a);
  return 0xffff;
}

