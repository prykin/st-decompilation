
void FUN_005097e0(char param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  LPSTR pCVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  short sVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  char *pcVar21;
  undefined4 local_b44 [68];
  undefined4 auStack_a34 [502];
  undefined4 local_25c [84];
  undefined4 local_10c;
  undefined4 local_108 [16];
  undefined4 local_c8 [4];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 *local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_28;
  undefined4 *local_24;
  void *local_20;
  char *local_1c;
  undefined4 *local_18;
  int local_14;
  uint local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_10c = DAT_00858df8;
  DAT_00858df8 = &local_10c;
  iVar3 = __setjmp3(local_108,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_10c;
    iVar8 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x53e,0,iVar3,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c2700,0x53e);
    return;
  }
  if (param_1 != '\0') {
    thunk_FUN_0054a8d0(DAT_00802a30);
  }
  if (*(uint *)((int)local_20 + 0x302) != 0) {
    FUN_006e56b0(*(void **)((int)local_20 + 0xc),*(uint *)((int)local_20 + 0x302));
  }
  *(undefined4 *)((int)local_20 + 0x302) = 0;
  if (*(uint *)((int)local_20 + 0x30c) != 0) {
    FUN_006e56b0(*(void **)((int)local_20 + 0xc),*(uint *)((int)local_20 + 0x30c));
  }
  puVar12 = (undefined4 *)((int)local_20 + 0x314);
  *(undefined4 *)((int)local_20 + 0x30c) = 0;
  local_18 = puVar12;
  if (*(uint *)((int)local_20 + 0x314) != 0) {
    FUN_006e56b0(*(void **)((int)local_20 + 0xc),*(uint *)((int)local_20 + 0x314));
  }
  *puVar12 = 0;
  if (*(uint *)((int)local_20 + 0x318) != 0) {
    FUN_006e56b0(*(void **)((int)local_20 + 0xc),*(uint *)((int)local_20 + 0x318));
  }
  *(undefined4 *)((int)local_20 + 0x318) = 0;
  if (*(uint *)((int)local_20 + 0x9d0) != 0) {
    FUN_006e56b0(*(void **)((int)local_20 + 0xc),*(uint *)((int)local_20 + 0x9d0));
  }
  *(undefined4 *)((int)local_20 + 0x9d0) = 0;
  puVar9 = (uint *)((int)local_20 + 0xa15);
  iVar3 = 6;
  do {
    if (*puVar9 != 0) {
      FUN_006e56b0(*(void **)((int)local_20 + 0xc),*puVar9);
      *puVar9 = 0;
    }
    puVar9 = puVar9 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  cVar2 = *(char *)((int)local_20 + 0xbfa);
  if (((cVar2 == '\0') || (cVar2 == '\x03')) || (cVar2 == '\x04')) {
    if (*(int *)((int)local_20 + 0x9c4) != 0) {
      *(undefined4 *)((int)local_20 + 0x28) = 0x20;
      *(undefined4 *)((int)local_20 + 0x2c) = 0;
      FUN_006e6080(local_20,2,*(int *)((int)local_20 + 0x9c4),(undefined4 *)((int)local_20 + 0x18));
    }
  }
  else {
    local_10 = local_10 & 0xffffff00;
    puVar12 = local_70;
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    local_c = (int)local_20 + 0x86a;
    local_1c = (char *)((int)local_20 + 0xbfe);
    iVar3 = -0xbff - (int)local_20;
    local_14 = iVar3;
    do {
      if (*local_1c == '\0') goto LAB_00509a02;
      iVar10 = 0xe;
      iVar8 = 0xf;
      switch(local_1c + iVar3) {
      case (char *)0x0:
        iVar10 = 0x4b;
        break;
      case (char *)0x1:
        iVar10 = 0x88;
        break;
      case (char *)0x2:
        goto switchD_00509942_caseD_2;
      case (char *)0x3:
        iVar10 = 0x88;
        goto switchD_00509942_caseD_2;
      case (char *)0x4:
        iVar10 = 0x4b;
switchD_00509942_caseD_2:
        iVar8 = 0x37;
      }
      thunk_FUN_004f17d0(local_20,0,(byte)local_10);
      if (*(char *)((int)local_20 + 0xbfc) == '\0') {
        local_8 = (undefined4 *)0x0;
      }
      else {
        local_8 = (undefined4 *)(uint)(byte)local_1c[6];
      }
      pcVar21 = (char *)0x0;
      uVar20 = 0;
      uVar19 = 1;
      iVar3 = 0;
      uVar6 = local_c;
      pcVar4 = thunk_FUN_00529590(*local_1c,*(int *)((int)local_20 + 0xbf5));
      pCVar5 = thunk_FUN_00571240(pcVar4,iVar3);
      thunk_FUN_004f2e40(local_b44 + local_28 * 0x5f,5,local_8,iVar10,iVar8,1,pCVar5,uVar19,uVar20,
                         uVar6,pcVar21);
      iVar3 = local_28 * 0x5f;
      local_28 = local_28 + 1;
      auStack_a34[iVar3] = 1;
      iVar3 = local_14;
LAB_00509a02:
      bVar7 = (char)local_10 + 1;
      local_c = local_c + 0x27;
      local_1c = local_1c + 1;
      local_10 = CONCAT31(local_10._1_3_,bVar7);
    } while (bVar7 < 6);
    local_60 = *(undefined4 *)((int)local_20 + 8);
    local_24 = local_b44;
    local_70[0] = 1;
    local_70[1] = 0xffffffff;
    local_5c = 2;
    local_58 = 0xb203;
    local_3c = 2;
    local_38 = 0xb204;
    local_40 = local_60;
    (**(code **)(**(int **)((int)local_20 + 0xc) + 8))(9,(int)local_20 + 0x302,0,local_70,0);
    thunk_FUN_004f1610(local_20,'\0');
    if (*(int *)((int)local_20 + 0x9c4) != 0) {
      *(undefined4 *)((int)local_20 + 0x28) = 0x20;
      if (*(char *)((int)local_20 + 0xbfc) == '\0') {
        uVar6 = 0;
      }
      else {
        uVar6 = (uint)*(byte *)((int)local_20 + 0xc0a);
      }
      *(uint *)((int)local_20 + 0x2c) = uVar6;
      FUN_006e6080(local_20,2,*(int *)((int)local_20 + 0x9c4),(undefined4 *)((int)local_20 + 0x18));
    }
    if (*(char *)((int)local_20 + 0xbfb) == '\x02') {
LAB_00509b60:
      uVar18 = 0;
      uVar17 = 0;
      iVar8 = 0;
      pcVar4 = (char *)0x0;
      iVar3 = 0;
      uVar19 = 0;
      sVar15 = 0;
      uVar14 = 0xb13f;
      uVar13 = 0xb12f;
      pCVar5 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
      uVar13 = thunk_FUN_004f3130(5,0,(uint)(*(char *)((int)local_20 + 0xbfc) != '\0'),0x92,0x6e,1,
                                  (int)pCVar5,uVar13,uVar14,sVar15,uVar19,iVar3,pcVar4,iVar8,uVar17,
                                  uVar18);
      *local_18 = uVar13;
      DAT_00858df8 = (undefined4 *)local_10c;
      return;
    }
    switch(*(undefined4 *)((int)local_20 + 0xbf5)) {
    case 0x32:
    case 0x40:
    case 0x44:
    case 0x49:
      if (*(int *)((int)local_20 + 0xc12) != 0) goto LAB_00509b60;
      break;
    case 0x33:
      iVar3 = 0xb12f;
      local_c = 0x4c;
      local_8 = (undefined4 *)0x2;
      puVar12 = local_18;
      do {
        if (*(int *)((int)puVar12 + 0x8fe) != 0) {
          uVar17 = 0;
          uVar14 = 0;
          iVar16 = 0;
          pcVar4 = (char *)0x0;
          iVar10 = 0;
          uVar19 = 0;
          sVar15 = 0;
          uVar13 = 0xb13f;
          iVar8 = iVar3;
          pCVar5 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
          uVar13 = thunk_FUN_004f3130(5,0,(uint)(*(char *)((int)local_20 + 0xbfc) != '\0'),0x92,
                                      local_c,1,(int)pCVar5,iVar8,uVar13,sVar15,uVar19,iVar10,pcVar4
                                      ,iVar16,uVar14,uVar17);
          *puVar12 = uVar13;
        }
        puVar12 = puVar12 + 1;
        iVar3 = iVar3 + 1;
        local_c = local_c + 0x22;
        local_8 = (undefined4 *)((int)local_8 + -1);
      } while (local_8 != (undefined4 *)0x0);
      DAT_00858df8 = (undefined4 *)local_10c;
      return;
    case 0x34:
      local_8 = (undefined4 *)0x2;
      puVar12 = local_c8;
      for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      puVar12 = local_25c;
      for (iVar3 = 0x54; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      local_14 = *(int *)((int)local_20 + 0x138);
      puVar12 = local_25c + 1;
      iVar8 = *(int *)((int)local_20 + 0x50) + 99;
      iVar3 = 0;
      do {
        iVar10 = local_14;
        puVar12[-1] = iVar3 + 1;
        *puVar12 = 0;
        puVar12[2] = iVar8;
        puVar12[4] = 0x2e;
        iVar16 = DAT_00806734;
        if (iVar10 != 0) {
          iVar16 = *(int *)((int)local_20 + 0xa8);
        }
        puVar12[3] = iVar16 + 0x22;
        puVar12[5] = 0x10;
        puVar12[0x11] = 0;
        puVar12[0x15] = 0x101;
        puVar12[10] = 0x101;
        puVar12[0x16] = 3;
        puVar12[0xb] = 3;
        puVar12[0xc] = 0x4201;
        puVar12[0x17] = 0x4202;
        *(undefined2 *)(puVar12 + 0x18) = 0;
        *(undefined2 *)(puVar12 + 0xd) = 0;
        *(undefined2 *)((int)puVar12 + 0x62) = 2;
        *(undefined2 *)((int)puVar12 + 0x36) = 2;
        if (iVar3 == 0) {
          uVar13 = 0x3aa6;
LAB_00509ddd:
          puVar12[0x19] = uVar13;
          puVar12[0xe] = uVar13;
        }
        else if (iVar3 == 1) {
          uVar13 = 0x3aa7;
          goto LAB_00509ddd;
        }
        iVar8 = iVar8 + 0x31;
        puVar12 = puVar12 + 0x1c;
        local_8 = (undefined4 *)((int)local_8 + -1);
        iVar3 = iVar3 + 1;
        if (local_8 == (undefined4 *)0x0) {
          local_80 = local_25c;
          local_7c = (uint)*(byte *)((int)local_20 + 0x9d4);
          local_b8 = *(undefined4 *)((int)local_20 + 8);
          local_c8[0] = 1;
          local_c8[1] = 1;
          local_78 = 1;
          local_74 = 1;
          local_b4 = 2;
          local_b0 = 0xb207;
          local_94 = 2;
          local_90 = 0xb206;
          local_98 = local_b8;
          (**(code **)(**(int **)((int)local_20 + 0xc) + 8))(5,(int)local_20 + 0x9d0,0,local_c8,0);
          local_c = local_c & 0xffffff00;
          local_10 = 0x3b;
          iVar3 = *(int *)(*(int *)((int)local_20 + 0x194) + 4);
          iVar8 = *(int *)(*(int *)((int)local_20 + 0x9f9) + 4);
          puVar12 = (undefined4 *)((int)local_20 + 0xa2d);
          puVar11 = puVar12;
          for (iVar10 = 0x3a; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
          }
          *(undefined2 *)puVar11 = 0;
          local_14 = (iVar3 - iVar8) / 2 + 8;
          local_8 = (undefined4 *)((int)local_20 + 0xa15);
          iVar3 = 0xb18f;
          do {
            *(undefined1 *)puVar12 = 2;
            if (DAT_0080874e == '\x01') {
              cVar2 = (*(char *)((int)local_20 + 0x9d4) != '\x01') + '\x01';
            }
            else {
              cVar2 = '\x02' - (*(char *)((int)local_20 + 0x9d4) != '\x01');
            }
            uVar13 = thunk_FUN_00525ef0(cVar2,(char)local_c);
            *(undefined4 *)((int)puVar12 + 1) = uVar13;
            uVar13 = thunk_FUN_004f3130(5,0,(uint)(*(char *)((int)local_20 + 0xbfc) != '\0'),
                                        local_14,local_10,0,0,iVar3,iVar3 + 0x10,1,0,(int)puVar12,
                                        (char *)0x0,0x11,10,0);
            puVar12 = (undefined4 *)((int)puVar12 + 0x27);
            local_10 = local_10 + 0xb;
            *local_8 = uVar13;
            bVar7 = (char)local_c + 1;
            iVar3 = iVar3 + 1;
            local_8 = local_8 + 1;
            local_c = CONCAT31(local_c._1_3_,bVar7);
          } while (bVar7 < 6);
          DAT_00858df8 = (undefined4 *)local_10c;
          return;
        }
      } while( true );
    case 0x35:
      if (*(char *)((int)local_20 + 0xc31) != '\0') {
        uVar18 = 0;
        uVar17 = 0;
        iVar8 = 0;
        pcVar4 = (char *)0x0;
        iVar3 = 0;
        uVar19 = 0;
        sVar15 = 0;
        uVar14 = 0xb13f;
        uVar13 = 0xb12f;
        pCVar5 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
        cVar2 = *(char *)((int)local_20 + 0xbfc);
LAB_00509c11:
        uVar13 = thunk_FUN_004f3130(5,0,(uint)(cVar2 != '\0'),0x92,0x6e,1,(int)pCVar5,uVar13,uVar14,
                                    sVar15,uVar19,iVar3,pcVar4,iVar8,uVar17,uVar18);
        *local_18 = uVar13;
        DAT_00858df8 = (undefined4 *)local_10c;
        return;
      }
      break;
    case 0x3c:
      if (*(char *)((int)local_20 + 0xc3c) == '\x01') {
        uVar18 = 0;
        uVar17 = 0;
        iVar8 = 0;
        pcVar4 = (char *)0x0;
        iVar3 = 0;
        uVar19 = 0;
        sVar15 = 0;
        uVar14 = 0xb13f;
        uVar13 = 0xb12f;
        pCVar5 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
        cVar2 = *(char *)((int)local_20 + 0xbfc);
        goto LAB_00509c11;
      }
      break;
    case 0x43:
    case 0x4c:
      if (*(char *)((int)local_20 + 0xbfc) == '\0') {
        iVar3 = 0;
      }
      else {
        iVar3 = (-(uint)(*(char *)((int)local_20 + 0xc11) != '\0') & 2) + 1;
      }
      uVar18 = 0;
      uVar17 = 0;
      iVar10 = 0;
      pcVar4 = (char *)0x0;
      iVar8 = 0;
      uVar19 = 0;
      sVar15 = 0;
      uVar14 = 0xb12e;
      uVar13 = 0xb12d;
      pCVar5 = thunk_FUN_00571240(s_BUT_AUTO_007c23c0,0);
      uVar13 = thunk_FUN_004f3130(5,3,iVar3,-1,0x58,1,(int)pCVar5,uVar13,uVar14,sVar15,uVar19,iVar8,
                                  pcVar4,iVar10,uVar17,uVar18);
      *(undefined4 *)((int)local_20 + 0x30c) = uVar13;
      DAT_00858df8 = (undefined4 *)local_10c;
      return;
    case 0x50:
      iVar8 = 0xb17f;
      local_c = 6;
      iVar3 = 0x3b;
      local_14 = (*(int *)(*(int *)((int)local_20 + 0x194) + 4) -
                 *(int *)(*(int *)((int)local_20 + 0x9f9) + 4)) / 2 + 8;
      local_8 = (undefined4 *)((int)local_20 + 0xa15);
      do {
        uVar13 = thunk_FUN_004f3130(5,0,(uint)(*(char *)((int)local_20 + 0xbfc) != '\0'),local_14,
                                    iVar3,0,0,iVar8 + -0x20,iVar8,2,0,0x4f20,(char *)0x0,0xaa,10,
                                    iVar8 + -0x10);
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + 0xb;
        *local_8 = uVar13;
        local_8 = local_8 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      DAT_00858df8 = (undefined4 *)local_10c;
      return;
    }
  }
  DAT_00858df8 = (undefined4 *)local_10c;
  return;
}

