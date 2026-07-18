
undefined4 __thiscall FUN_004fb060(void *this,int param_1)

{
  void *this_00;
  short sVar1;
  bool bVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  ushort *puVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  LPSTR pCVar8;
  int iVar9;
  LPSTR pCVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 extraout_EDX_09;
  undefined4 extraout_EDX_10;
  undefined4 extraout_EDX_11;
  undefined4 extraout_EDX_12;
  undefined4 extraout_EDX_13;
  undefined4 extraout_EDX_14;
  undefined4 extraout_EDX_15;
  undefined4 extraout_EDX_16;
  undefined3 uVar13;
  byte bVar14;
  short sVar15;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined1 *puVar16;
  uint uVar17;
  int *piVar18;
  uint *puVar19;
  uint uVar20;
  undefined4 *puVar21;
  char *pcVar22;
  char cVar23;
  UINT UVar24;
  int iVar25;
  undefined4 *puVar26;
  undefined *puVar27;
  code *pcVar28;
  undefined4 local_d0;
  undefined4 local_cc [16];
  byte local_8c [29];
  int local_6f;
  byte local_68 [36];
  void *local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  byte local_2e;
  byte local_2d;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  byte local_d;
  uint local_c;
  undefined4 local_8;
  
  local_44 = this;
  uVar4 = FUN_006e51b0(*(int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x38) = uVar4;
  local_d0 = DAT_00858df8;
  DAT_00858df8 = &local_d0;
  iVar5 = __setjmp3(local_cc,0,unaff_EDI,unaff_ESI);
  this_00 = local_44;
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)local_d0;
    iVar9 = FUN_006ad4d0(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x75f,0,iVar5,&DAT_007a4ccc);
    if (iVar9 == 0) {
      FUN_006a5e40(iVar5,0,0x7c1bd8,0x75f);
      return 0xffff;
    }
    pcVar28 = (code *)swi(3);
    uVar4 = (*pcVar28)();
    return uVar4;
  }
  uVar17 = *(uint *)(param_1 + 0x10);
  if (0xb174 < uVar17) {
    uVar13 = (undefined3)((uint)extraout_EDX >> 8);
    switch(uVar17) {
    case 0xb17f:
    case 0xb180:
    case 0xb181:
    case 0xb182:
    case 0xb183:
    case 0xb184:
      piVar18 = *(int **)(param_1 + 0x18);
      iVar5 = DAT_00806734;
      if (*(int *)((int)local_44 + 0x138) != 0) {
        iVar5 = *(int *)((int)local_44 + 0xa8);
      }
      FUN_006b4170(*(int *)((int)local_44 + 0x194),0,*piVar18 - *(int *)((int)local_44 + 0x50),
                   piVar18[1] - iVar5,piVar18[2],piVar18[3],
                   (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a);
      if (*(char *)((int)this_00 + 0xbfc) == '\0') {
        bVar14 = *(byte *)((uVar17 - 0xa56e) + (int)this_00);
        if (bVar14 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = bVar14 + 6;
        }
      }
      else {
        uVar12 = (uint)*(byte *)((uVar17 - 0xa56e) + (int)this_00);
      }
      iVar5 = DAT_00806734;
      if (*(int *)((int)this_00 + 0x138) != 0) {
        iVar5 = *(int *)((int)this_00 + 0xa8);
      }
      local_1c = (char *)(piVar18[1] - iVar5);
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)this_00 + 0xb17),uVar12);
      thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x194),
                         *piVar18 - *(int *)((int)this_00 + 0x50),(int)local_1c,'\x01',pbVar6);
      iVar5 = DAT_00806734;
      if (*(int *)((int)this_00 + 0x138) != 0) {
        iVar5 = *(int *)((int)this_00 + 0xa8);
      }
      FUN_00710a90(*(int *)((int)this_00 + 0x194),0,
                   (*piVar18 - *(int *)((int)this_00 + 0x50)) + 0x17,piVar18[1] - iVar5,
                   piVar18[2] + -0x17,piVar18[3]);
      uVar4 = 2;
      iVar25 = -1;
      iVar5 = piVar18[2] + -0x17;
      iVar9 = 0;
      puVar19 = (uint *)&DAT_007c2310;
      puVar11 = (uint *)FUN_006b0140(uVar17 - 0x6265,DAT_00807618);
      puVar11 = thunk_FUN_00540c40(*(void **)((int)this_00 + 0x1b8),puVar11,puVar19,iVar5);
      FUN_007119c0(puVar11,iVar9,iVar25,uVar4);
      uVar17 = *(uint *)((int)this_00 + 0x15c);
      if ((int)uVar17 < 0) break;
      uVar12 = *(uint *)((int)this_00 + 0xa8);
      uVar20 = *(uint *)((int)this_00 + 0x50);
      goto LAB_004fd606;
    case 0xb18f:
    case 0xb190:
    case 0xb191:
    case 0xb192:
    case 0xb193:
    case 0xb194:
      iVar5 = thunk_FUN_005050b0(local_44,*(char *)(param_1 + 0x10) + 0x71);
      if (DAT_00808784 != 0) break;
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) || (iVar5 < 0)) break;
      *(undefined4 *)((int)this_00 + 300) = 0;
      if (*(char *)((int)this_00 + 0xc52) == '\0') {
        thunk_FUN_004f8020(this_00,'\0',0);
      }
      pbVar6 = (byte *)((int)&local_8 + 2);
      *(undefined4 *)((int)this_00 + 300) = 1;
      local_8 = CONCAT13((char)iVar5,CONCAT12(2,(short)local_8));
      puVar21 = (undefined4 *)0x27;
      goto LAB_004fcf18;
    case 0xb19f:
    case 0xb1a0:
    case 0xb1a1:
    case 0xb1a2:
    case 0xb1a3:
    case 0xb1a4:
      piVar18 = *(int **)(param_1 + 0x18);
      uVar17 = thunk_FUN_00505070(local_44,(char)uVar17 + 0x61);
      iVar5 = DAT_00806734;
      if (*(int *)((int)this_00 + 0x138) != 0) {
        iVar5 = *(int *)((int)this_00 + 0xa8);
      }
      FUN_006b4170(*(int *)((int)this_00 + 0x194),0,*piVar18 - *(int *)((int)this_00 + 0x50),
                   piVar18[1] - iVar5,piVar18[2],piVar18[3],
                   (-(DAT_0080874e != '\x03') & 0xfdU) + 0x3d);
      if (-1 < (int)uVar17) {
        if ((uVar17 == 0) || (*(int *)(param_1 + 0x14) == 0)) {
          iVar5 = 1;
        }
        else {
          iVar5 = 0;
        }
        iVar9 = piVar18[1];
        iVar25 = DAT_00806734;
        if (*(int *)((int)this_00 + 0x138) != 0) {
          iVar25 = *(int *)((int)this_00 + 0xa8);
        }
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)this_00 + 0x9d5),iVar5);
        thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x194),
                           *piVar18 - *(int *)((int)this_00 + 0x50),iVar9 - iVar25,'\x01',pbVar6);
      }
      uVar17 = *(uint *)((int)this_00 + 0x15c);
      if ((int)uVar17 < 0) break;
      uVar12 = *(uint *)((int)this_00 + 0xa8);
      uVar20 = *(uint *)((int)this_00 + 0x50);
      goto LAB_004fd606;
    case 0xb1ff:
    case 0xb20d:
      iVar5 = -1;
      uVar3 = 0;
      do {
        if (*(char *)(uVar3 + 0xba2 + (int)local_44) != '\0') {
          iVar5 = iVar5 + 1;
        }
      } while ((iVar5 != *(int *)(param_1 + 0x14)) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (uVar3 < 6) {
        thunk_FUN_00503bb0((uint)uVar3);
      }
      else {
        thunk_FUN_00503bb0(0);
      }
      break;
    case 0xb200:
      uVar17 = 0xffffffff;
      uVar3 = 0;
      do {
        if (*(char *)(uVar3 + 0xba2 + (int)local_44) != '\0') {
          uVar17 = uVar17 + 1;
        }
      } while ((uVar17 != *(ushort *)(param_1 + 0x16)) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (5 < uVar3) {
        uVar3 = 0;
      }
      puVar27 = &LAB_0040420f;
      iVar5 = 0;
      pcVar22 = thunk_FUN_00529590(*(undefined1 *)(uVar3 + 0xba2 + (int)local_44),
                                   *(int *)((int)local_44 + 0xb99));
      pCVar8 = thunk_FUN_00571240(pcVar22,iVar5);
      thunk_FUN_004f3540(3,param_1,1,pCVar8,puVar27);
      break;
    case 0xb203:
    case 0xb20f:
      iVar5 = -1;
      uVar3 = 0;
      do {
        if (*(char *)(uVar3 + 0xbfe + (int)local_44) != '\0') {
          iVar5 = iVar5 + 1;
        }
      } while ((iVar5 != *(int *)(param_1 + 0x14)) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (uVar3 < 6) {
        thunk_FUN_0050f430((uint)uVar3);
      }
      else {
        thunk_FUN_0050f430(0);
      }
      break;
    case 0xb204:
      uVar17 = 0xffffffff;
      uVar3 = 0;
      do {
        if (*(char *)(uVar3 + 0xbfe + (int)local_44) != '\0') {
          uVar17 = uVar17 + 1;
        }
      } while ((uVar17 != *(ushort *)(param_1 + 0x16)) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (5 < uVar3) {
        uVar3 = 0;
      }
      puVar27 = &LAB_0040420f;
      iVar5 = 0;
      pcVar22 = thunk_FUN_00529590(*(undefined1 *)(uVar3 + 0xbfe + (int)local_44),
                                   *(int *)((int)local_44 + 0xbf5));
      pCVar8 = thunk_FUN_00571240(pcVar22,iVar5);
      thunk_FUN_004f3540(5,param_1,1,pCVar8,puVar27);
      break;
    case 0xb206:
      pcVar28 = thunk_FUN_0052a7b0;
      pCVar8 = thunk_FUN_00571240(s_BUT_MFFRAMES_007c2384,0);
      pCVar10 = thunk_FUN_00571240(s_BUT_MFTABS_007c2374,0);
      thunk_FUN_004f42a0(this_00,5,param_1,1,pCVar10,pCVar8,pcVar28);
      break;
    case 0xb207:
      *(undefined1 *)((int)local_44 + 0x9d4) = **(undefined1 **)(param_1 + 0x14);
      thunk_FUN_005097b0();
      break;
    case 0xb20b:
      pcVar28 = thunk_FUN_0052a7b0;
      pCVar8 = thunk_FUN_00571240(s_BUT_MFFRAMES_007c2384,0);
      thunk_FUN_004f42a0(this_00,5,param_1,1,s_BUT_RCTTYPESI_007c2364,pCVar8,pcVar28);
      break;
    case 0xb20e:
      uVar17 = 0xffffffff;
      uVar3 = 0;
      do {
        if (*(char *)(uVar3 + 0xba2 + (int)local_44) != '\0') {
          uVar17 = uVar17 + 1;
        }
      } while ((uVar17 != *(ushort *)(param_1 + 0x16)) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (5 < uVar3) {
        uVar3 = 0;
      }
      puVar27 = &LAB_0040420f;
      iVar5 = 0;
      pcVar22 = thunk_FUN_00529590(*(undefined1 *)(uVar3 + 0xba2 + (int)local_44),
                                   *(int *)((int)local_44 + 0xb99));
      pCVar8 = thunk_FUN_00571240(pcVar22,iVar5);
      thunk_FUN_004f3540(3,param_1,6,pCVar8,puVar27);
      break;
    case 0xb210:
      uVar17 = 0xffffffff;
      uVar3 = 0;
      do {
        if (*(char *)(uVar3 + 0xbfe + (int)local_44) != '\0') {
          uVar17 = uVar17 + 1;
        }
      } while ((uVar17 != *(ushort *)(param_1 + 0x16)) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (5 < uVar3) {
        uVar3 = 0;
      }
      puVar27 = &LAB_0040420f;
      iVar5 = 0;
      pcVar22 = thunk_FUN_00529590(*(undefined1 *)(uVar3 + 0xbfe + (int)local_44),
                                   *(int *)((int)local_44 + 0xbf5));
      pCVar8 = thunk_FUN_00571240(pcVar22,iVar5);
      thunk_FUN_004f3540(5,param_1,6,pCVar8,puVar27);
      break;
    case 0xb211:
    case 0xb213:
    case 0xb215:
    case 0xb217:
    case 0xb219:
    case 0xb21b:
      if (DAT_00808784 != 0) break;
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) break;
      *(undefined4 *)((int)local_44 + 300) = 0;
      if (*(char *)((int)local_44 + 0xc52) == '\0') {
        thunk_FUN_004f8020(local_44,'\0',0);
      }
      *(undefined4 *)((int)this_00 + 300) = 1;
      pbVar6 = &local_2d;
      local_2d = (byte)(*(int *)(param_1 + 0x10) - 0xb211U >> 1);
      puVar21 = (undefined4 *)0x2a;
      goto LAB_004fcf18;
    case 0xb212:
    case 0xb216:
      switch(*(undefined4 *)((int)local_44 + 0xbf5)) {
      case 0x5f:
        pcVar22 = s_BUT_TBDN_007c22f4;
LAB_004fd533:
        pcVar28 = thunk_FUN_00529fe0;
        pCVar8 = thunk_FUN_00571240(pcVar22,0);
        thunk_FUN_004f3540(5,param_1,1,pCVar8,pcVar28);
        break;
      case 100:
      case 0x65:
      case 0x6d:
        thunk_FUN_004f3540(5,param_1,1,s_BUT_MINUSSI_007c2300,thunk_FUN_00529fe0);
      }
      break;
    case 0xb214:
    case 0xb218:
      switch(*(undefined4 *)((int)local_44 + 0xbf5)) {
      case 0x5f:
        pcVar22 = s_BUT_TBUP_007c22d8;
        goto LAB_004fd533;
      case 100:
      case 0x65:
      case 0x6d:
        thunk_FUN_004f3540(5,param_1,1,s_BUT_PLUSSI_007c22e4,thunk_FUN_00529fe0);
      }
      break;
    case 0xb21a:
    case 0xb21c:
      if (*(int *)((int)local_44 + 0xbf5) != 0x6d) break;
      local_c = CONCAT31(local_c._1_3_,1);
      piVar18 = *(int **)(param_1 + 0x18);
      switch(*(undefined4 *)(param_1 + 0x14)) {
      case 0:
        local_c = CONCAT31(local_c._1_3_,1);
        break;
      case 1:
      case 3:
        local_c = CONCAT31(local_c._1_3_,
                           *(char *)((uVar17 - 0xb21a >> 1) + 0xc0f + (int)local_44) != '\x03');
        break;
      case 2:
        local_c = (uint)local_c._1_3_ << 8;
      }
      iVar5 = piVar18[1];
      iVar9 = DAT_00806734;
      if (*(int *)((int)local_44 + 0x138) != 0) {
        iVar9 = *(int *)((int)local_44 + 0xa8);
      }
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)local_44 + 0x9d5),local_c & 0xff);
      thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x194),
                         *piVar18 - *(int *)((int)this_00 + 0x50),iVar5 - iVar9,'\x01',pbVar6);
      uVar17 = *(uint *)((int)this_00 + 0x15c);
      if ((int)uVar17 < 0) break;
      uVar12 = *(uint *)((int)this_00 + 0xa8);
      uVar20 = *(uint *)((int)this_00 + 0x50);
LAB_004fd606:
      FUN_006b3640(DAT_008075a8,uVar17,0xffffffff,uVar20,uVar12);
      break;
    case 0xb220:
    case 0xb221:
    case 0xb222:
    case 0xb223:
      if (DAT_00808784 != 0) break;
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) break;
      *(undefined4 *)((int)local_44 + 300) = 0;
      if (*(char *)((int)local_44 + 0xb64) == '\0') {
        thunk_FUN_004f8020(local_44,'\x01',0);
      }
      *(undefined4 *)((int)this_00 + 300) = 1;
      pbVar6 = local_8c;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        pbVar6[0] = 0;
        pbVar6[1] = 0;
        pbVar6[2] = 0;
        pbVar6[3] = 0;
        pbVar6 = pbVar6 + 4;
      }
      *pbVar6 = 0;
      pbVar6 = local_8c;
      local_6f = *(int *)(param_1 + 0x10) + -0xb220;
      local_8c[0] = 0x11;
      puVar21 = (undefined4 *)0x17;
      goto LAB_004fcf18;
    case 0xb230:
      cVar23 = *(char *)((int)local_44 + 0xbcf);
      pcVar22 = s_BUT_BEHREPAIR0_007c2350;
      goto LAB_004fd1d2;
    case 0xb231:
      pcVar22 = s_BUT_BEHREPAIR20_007c233c;
      if (DAT_0080874e != '\x03') {
        pcVar22 = s_BUT_BEHREPAIR50_007c2328;
      }
      cVar23 = *(char *)((int)local_44 + 0xbd0);
      goto LAB_004fd1d2;
    case 0xb232:
      pcVar22 = s_BUT_BEHREPAIR50_007c2328;
      if (DAT_0080874e != '\x03') {
        pcVar22 = s_BUT_BEHREPAIR80_007c2314;
      }
      cVar23 = *(char *)((int)local_44 + 0xbd1);
LAB_004fd1d2:
      uVar17 = CONCAT31(uVar13,cVar23 == '\x03');
      pCVar8 = thunk_FUN_00571240(pcVar22,0);
      thunk_FUN_004f37c0(3,param_1,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar8,uVar17);
      break;
    case 0xb233:
      uVar17 = CONCAT31(uVar13,*(char *)((int)local_44 + 0xbd2) == '\x03');
      pCVar8 = thunk_FUN_00571240(s_BUT_BEHREPAIR80_007c2314,0);
      thunk_FUN_004f37c0(3,param_1,6,pCVar8,uVar17);
    }
    goto switchD_004fb10b_caseD_1;
  }
  if (0xb16e < uVar17) {
    if (DAT_00808784 != 0) goto switchD_004fb10b_caseD_1;
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto switchD_004fb10b_caseD_1;
    *(undefined4 *)((int)local_44 + 300) = 0;
    if (*(char *)((int)local_44 + 0xc52) == '\0') {
      thunk_FUN_004f8020(local_44,'\0',0);
    }
    *(undefined4 *)((int)this_00 + 300) = 1;
    pbVar6 = (byte *)((int)&local_14 + 2);
    local_14 = CONCAT13(*(char *)(param_1 + 0x10) + -0x6f,(int3)local_14) & 0xff00ffff;
    puVar21 = (undefined4 *)0x27;
    goto LAB_004fcf18;
  }
  if (uVar17 < 0xb10f) {
    if (uVar17 == 0xb10e) {
      if (DAT_00808784 == 0) {
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          puVar21 = (undefined4 *)((int)local_44 + 0x18);
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar21 = 0;
            puVar21 = puVar21 + 1;
          }
          *(undefined4 *)((int)local_44 + 0x28) = 0xa209;
          *(undefined4 *)((int)local_44 + 0x20) = 0x101;
          *(undefined4 *)((int)local_44 + 0x24) = 3;
          FUN_006e3b50((undefined4 *)((int)local_44 + 0x18));
          thunk_FUN_005252c0(0xae);
        }
      }
      goto switchD_004fb10b_caseD_1;
    }
    if (0xb106 < uVar17) {
      switch(uVar17) {
      case 0xb107:
        puVar27 = &LAB_00402be4;
        pCVar8 = thunk_FUN_00571240(s_BUT_MAPSMIL_007c1cc4,0);
        thunk_FUN_004f3540(4,param_1,6,pCVar8,puVar27);
        break;
      case 0xb108:
        if (DAT_00808784 == 0) {
          if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            puVar21 = (undefined4 *)((int)local_44 + 0x18);
            for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar21 = 0;
              puVar21 = puVar21 + 1;
            }
            *(undefined4 *)((int)local_44 + 0x28) = 0xa206;
            *(undefined4 *)((int)local_44 + 0x20) = 0x101;
            *(undefined4 *)((int)local_44 + 0x24) = 3;
            FUN_006e3b50((undefined4 *)((int)local_44 + 0x18));
            thunk_FUN_005252c0(0xae);
          }
        }
        break;
      case 0xb109:
        puVar27 = &LAB_00404a66;
        pcVar22 = s_BUT_MAPZIN_007c1ca4;
        goto LAB_004fbcf3;
      case 0xb10a:
        if (DAT_00808784 == 0) {
          if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            puVar21 = (undefined4 *)((int)local_44 + 0x18);
            for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar21 = 0;
              puVar21 = puVar21 + 1;
            }
            *(undefined4 *)((int)local_44 + 0x28) = 0xa207;
            *(undefined4 *)((int)local_44 + 0x20) = 0x101;
            *(undefined4 *)((int)local_44 + 0x24) = 3;
            FUN_006e3b50((undefined4 *)((int)local_44 + 0x18));
            thunk_FUN_005252c0(0xae);
          }
        }
        break;
      case 0xb10b:
        puVar27 = &LAB_00404a66;
        pCVar8 = thunk_FUN_00571240(s_BUT_MAPZOUT_007c1c84,0);
        thunk_FUN_004f3540(4,param_1,6,pCVar8,puVar27);
        break;
      case 0xb10c:
        if (DAT_00808784 == 0) {
          if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            puVar21 = (undefined4 *)((int)local_44 + 0x18);
            for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar21 = 0;
              puVar21 = puVar21 + 1;
            }
            *(undefined4 *)((int)local_44 + 0x28) = 0xa208;
            *(undefined4 *)((int)local_44 + 0x20) = 0x101;
            *(undefined4 *)((int)local_44 + 0x24) = 3;
            FUN_006e3b50((undefined4 *)((int)local_44 + 0x18));
            thunk_FUN_005252c0(0xae);
          }
        }
        break;
      case 0xb10d:
        puVar27 = &LAB_00404a66;
        pCVar8 = thunk_FUN_00571240(s_BUT_MAPTLFT_007c1c64,0);
        thunk_FUN_004f3540(4,param_1,6,pCVar8,puVar27);
      }
      goto switchD_004fb10b_caseD_1;
    }
    if (uVar17 == 0xb106) {
      if (*(int *)(param_1 + 0x14) == 3) {
        DAT_00807327 = DAT_00807327 | 4;
      }
      else {
        DAT_00807327 = DAT_00807327 & 0xfb;
      }
      goto LAB_004fc53f;
    }
    if (0x60 < uVar17) {
      if (uVar17 != 0x61) {
        if (uVar17 == 0xb104) {
          if (*(int *)(param_1 + 0x14) == 3) {
            DAT_00807327 = DAT_00807327 | 2;
          }
          else {
            DAT_00807327 = DAT_00807327 & 0xfd;
          }
          *(uint *)((int)DAT_00807598 + 0x418) = (uint)DAT_00807327;
          thunk_FUN_005252c0(0xae);
          goto switchD_004fb10b_caseD_1;
        }
        if (uVar17 != 0xb105) goto switchD_004fb10b_caseD_1;
        puVar27 = &LAB_00402be4;
        pcVar22 = s_BUT_MAPSCIV_007c1ce4;
        goto LAB_004fbcf3;
      }
      local_8 = -1;
      local_c = 1;
      if (*(short *)((int)local_44 + 0x23f) == 2) goto switchD_004fb10b_caseD_1;
      iVar5 = 0;
      uVar17 = (uint)*(ushort *)(param_1 + 0x18);
      local_18 = (uint)*(ushort *)(param_1 + 0x1a);
      do {
        iVar9 = (int)(short)iVar5;
        local_2c = *(int *)((int)local_44 + iVar9 * 4 + 0x3c);
        local_28 = *(int *)((int)local_44 + iVar9 * 4 + 0x94);
        local_24 = *(int *)((int)local_44 + iVar9 * 4 + 0x68);
        local_20 = *(int *)((int)local_44 + iVar9 * 4 + 0xc0);
        if ((((int)uVar17 < local_2c) || (local_24 + local_2c <= (int)uVar17)) ||
           (((int)local_18 < local_28 || (local_20 + local_28 <= (int)local_18)))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        iVar9 = iVar5;
      } while ((!bVar2) && (iVar5 = iVar5 + 1, iVar9 = local_8, (short)iVar5 < 0xb));
      local_8 = iVar9;
      sVar1 = (short)local_8;
      iVar5 = (int)(short)local_8;
      switch(iVar5) {
      case 0:
      case 2:
      case 10:
        if ((DAT_00801684 == (int *)0x0) || (*(short *)((int)DAT_00801684 + 0x172) == 2)) {
          uVar12 = 1;
        }
        else {
          uVar12 = 0;
        }
        if ((DAT_00801678 != (int *)0x0) && (*(short *)((int)DAT_00801678 + 0x172) != 2)) {
          uVar12 = 0;
        }
        if ((DAT_008016ec != (int *)0x0) && (*(short *)((int)DAT_008016ec + 0x172) != 2)) {
          uVar12 = 0;
        }
        piVar18 = DAT_0080168c;
        if ((DAT_00802a48 != (int *)0x0) && (*(short *)((int)DAT_00802a48 + 0x172) != 2)) {
          uVar12 = 0;
        }
        break;
      default:
        uVar12 = local_c;
        goto LAB_004fbe73;
      case 6:
      case 8:
      case 9:
        if ((DAT_008016e8 == (int *)0x0) || (*(short *)((int)DAT_008016e8 + 0x172) == 2)) {
          uVar12 = 1;
        }
        else {
          uVar12 = 0;
        }
        if ((DAT_0080167c != (int *)0x0) && (*(short *)((int)DAT_0080167c + 0x172) != 2)) {
          uVar12 = 0;
        }
        if ((DAT_00801698 != (int *)0x0) && (*(short *)((int)DAT_00801698 + 0x172) != 2)) {
          uVar12 = 0;
        }
        piVar18 = DAT_00801680;
        if ((DAT_00802a44 != (int *)0x0) && (*(short *)((int)DAT_00802a44 + 0x172) != 2)) {
          uVar12 = 0;
        }
      }
      if ((piVar18 != (int *)0x0) && (*(short *)((int)piVar18 + 0x172) != 2)) {
        uVar12 = 0;
      }
LAB_004fbe73:
      local_14 = uVar17;
      if (uVar12 != 0) {
        switch(iVar5) {
        case 0:
        case 8:
          thunk_FUN_004f8020(local_44,(short)local_8 == 0,1);
          break;
        case 2:
        case 6:
          if (DAT_0080874e != '\x03') {
            local_1c = (char *)((int)local_44 + 0xb63);
            if ((short)local_8 != 2) {
              local_1c = (char *)((int)local_44 + 0xc51);
            }
            if ((*local_1c != '\0') &&
               ((((short)local_8 != 2 ||
                 ((((DAT_00801684 == (int *)0x0 || (*(short *)((int)DAT_00801684 + 0x172) == 2)) &&
                   ((DAT_00801678 == (int *)0x0 || (*(short *)((int)DAT_00801678 + 0x172) == 2))))
                  && ((((DAT_008016ec == (int *)0x0 || (*(short *)((int)DAT_008016ec + 0x172) == 2))
                       && ((DAT_00802a48 == (int *)0x0 ||
                           (*(short *)((int)DAT_00802a48 + 0x172) == 2)))) &&
                      ((DAT_0080168c == (int *)0x0 || (*(short *)((int)DAT_0080168c + 0x172) == 2)))
                      ))))) &&
                (((short)local_8 != 6 ||
                 ((((((DAT_008016e8 == (int *)0x0 || (*(short *)((int)DAT_008016e8 + 0x172) == 2))
                     && ((DAT_0080167c == (int *)0x0 || (*(short *)((int)DAT_0080167c + 0x172) == 2)
                         ))) &&
                    ((DAT_00801698 == (int *)0x0 || (*(short *)((int)DAT_00801698 + 0x172) == 2))))
                   && ((DAT_00802a44 == (int *)0x0 || (*(short *)((int)DAT_00802a44 + 0x172) == 2)))
                   ) && ((DAT_00801680 == (int *)0x0 || (*(short *)((int)DAT_00801680 + 0x172) == 2)
                         ))))))))) {
              iVar5 = *(int *)((int)local_44 + iVar5 * 4 + 0x3c);
              local_2c = iVar5 + 7;
              local_24 = 0xe;
              local_20 = 0x1b;
              sVar15 = 0;
              do {
                local_28 = sVar15 * 0x1d + 6 + *(int *)((int)local_44 + (short)local_8 * 4 + 0x94);
                if (((((int)uVar17 < local_2c) || (iVar5 + 0x15 <= (int)uVar17)) ||
                    ((int)local_18 < local_28)) || (local_28 + 0x1b <= (int)local_18)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  if (*local_1c == '\x01') {
                    if ((local_1c[sVar15 + 0x2a] == '\0') && (local_1c[2] == '\x01')) {
                      thunk_FUN_004f8020(local_44,(short)local_8 == 2,1);
                      thunk_FUN_005007a0(this_00,sVar1 != 2,(char)sVar15);
                    }
                  }
                  else {
                    thunk_FUN_004f8020(local_44,(short)local_8 == 2,1);
                    thunk_FUN_005007a0(this_00,sVar1 != 2,(char)sVar15);
                  }
                  break;
                }
                sVar15 = sVar15 + 1;
              } while (sVar15 < 5);
            }
          }
          break;
        case 3:
        case 5:
          if (DAT_0080874e == '\x03') {
            local_1c = (char *)((int)local_44 + 0xb63);
            if ((short)local_8 != 3) {
              local_1c = (char *)((int)local_44 + 0xc51);
            }
            bVar14 = 0xff;
            local_c = 0xff;
            if (*local_1c != '\0') {
              if ((short)local_8 == 3) {
                if ((((((DAT_00801684 != (int *)0x0) && (*(short *)((int)DAT_00801684 + 0x172) != 2)
                       ) || ((DAT_00801678 != (int *)0x0 &&
                             (*(short *)((int)DAT_00801678 + 0x172) != 2)))) ||
                     ((DAT_008016ec != (int *)0x0 && (*(short *)((int)DAT_008016ec + 0x172) != 2))))
                    || ((DAT_00802a48 != (int *)0x0 && (*(short *)((int)DAT_00802a48 + 0x172) != 2))
                       )) || ((DAT_0080168c != (int *)0x0 &&
                              (*(short *)((int)DAT_0080168c + 0x172) != 2)))) break;
                iVar5 = *(int *)((int)local_44 + 0xa0) + 0x40;
                if (((int)local_18 < iVar5) &&
                   (((*(int *)((int)local_44 + 0xa0) + 10 < (int)local_18 &&
                     (iVar9 = (*(int *)((int)local_44 + 0x48) + 0xb + iVar5) - uVar17,
                     iVar9 < (int)local_18)) && ((int)local_18 < iVar9 + 0x21)))) {
                  bVar14 = 4 - (char)((int)(iVar5 - local_18) / 0xb);
                  local_c = (uint)bVar14;
                }
              }
              if ((short)local_8 == 5) {
                if (((((DAT_008016e8 != (int *)0x0) && (*(short *)((int)DAT_008016e8 + 0x172) != 2))
                     || ((DAT_0080167c != (int *)0x0 && (*(short *)((int)DAT_0080167c + 0x172) != 2)
                         ))) ||
                    ((DAT_00801698 != (int *)0x0 && (*(short *)((int)DAT_00801698 + 0x172) != 2))))
                   || (((DAT_00802a44 != (int *)0x0 && (*(short *)((int)DAT_00802a44 + 0x172) != 2))
                       || ((DAT_00801680 != (int *)0x0 &&
                           (*(short *)((int)DAT_00801680 + 0x172) != 2)))))) break;
                iVar5 = *(int *)((int)local_44 + 0xa8) + 0xb;
                if ((iVar5 < (int)local_18) &&
                   ((((int)local_18 < *(int *)((int)local_44 + 0xa8) + 0x41 &&
                     (iVar9 = (iVar5 - *(int *)((int)local_44 + 0x50)) + -0x87 + uVar17,
                     (int)local_18 < iVar9)) && (iVar9 + -0x21 < (int)local_18)))) {
                  local_c = (int)(local_18 - iVar5) / 0xb;
                  bVar14 = (byte)local_c;
                  local_c = local_c & 0xff;
                }
              }
              uVar17 = local_c;
              if (bVar14 != 0xff) {
                if (*local_1c == '\x01') {
                  if ((local_1c[local_c + 0x2a] == '\0') && (local_1c[2] == '\x01')) {
                    thunk_FUN_004f8020(local_44,(short)local_8 == 3,1);
                    thunk_FUN_005007a0(this_00,sVar1 != 3,(char)uVar17);
                  }
                }
                else {
                  thunk_FUN_004f8020(local_44,(short)local_8 == 3,1);
                  thunk_FUN_005007a0(this_00,sVar1 != 3,(char)local_c);
                }
              }
            }
          }
          break;
        case 9:
          if (DAT_00808784 == 0) {
            if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) {
              local_24 = 0x4c;
              local_20 = 0x38;
              local_8 = -1;
              iVar5 = 0;
              do {
                iVar9 = thunk_FUN_004f19d0('\x01',(byte)iVar5,&local_2c,&local_28);
                if (iVar9 != 0) {
                  local_2c = local_2c + *(int *)((int)this_00 + 0x60);
                  local_28 = local_28 + *(int *)((int)this_00 + 0xb8);
                  if (((((int)uVar17 < local_2c) || (local_24 + local_2c <= (int)uVar17)) ||
                      ((int)local_18 < local_28)) || (local_20 + local_28 <= (int)local_18)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  iVar9 = iVar5;
                  if (bVar2) break;
                }
                iVar5 = iVar5 + 1;
                iVar9 = local_8;
              } while ((short)iVar5 < 6);
              local_8 = iVar9;
              if (-1 < (short)local_8) {
                thunk_FUN_0043ae40(1,(short)local_8 + 1,1);
              }
            }
          }
          break;
        case 10:
          if (DAT_00808784 == 0) {
            if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) {
              local_24 = 0x4c;
              local_20 = 0x38;
              local_8 = -1;
              iVar5 = 0;
              do {
                iVar9 = thunk_FUN_004f19d0('\0',(byte)iVar5,&local_2c,&local_28);
                if (iVar9 != 0) {
                  local_2c = local_2c + *(int *)((int)this_00 + 100);
                  local_28 = local_28 + *(int *)((int)this_00 + 0xbc);
                  if ((((int)uVar17 < local_2c) || (local_24 + local_2c <= (int)uVar17)) ||
                     (((int)local_18 < local_28 || (local_20 + local_28 <= (int)local_18)))) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  iVar9 = iVar5;
                  if (bVar2) break;
                }
                iVar5 = iVar5 + 1;
                iVar9 = local_8;
              } while ((short)iVar5 < 6);
              local_8 = iVar9;
              if (-1 < (short)local_8) {
                thunk_FUN_0043ae40(0,(short)local_8 + 1,1);
              }
            }
          }
        }
      }
      goto switchD_004fb10b_caseD_1;
    }
    if (uVar17 == 0x60) {
      local_8 = 0;
      local_1c = (char *)CONCAT22(local_1c._2_2_,*(undefined2 *)(param_1 + 0x18));
      local_40 = CONCAT22(local_40._2_2_,*(undefined2 *)(param_1 + 0x1a));
      if (*(short *)((int)local_44 + 0x23f) == 1) {
        local_c = (int)local_44 + 0x204;
        local_18 = 0;
        local_3c = 5;
        do {
          uVar17 = 0;
          switch(local_18) {
          case 0:
          case 1:
            if (((((DAT_00801684 != (int *)0x0) && (*(short *)((int)DAT_00801684 + 0x172) == 2)) &&
                 (DAT_00801678 != (int *)0x0)) &&
                (((*(short *)((int)DAT_00801678 + 0x172) == 2 && (DAT_00802a48 != (int *)0x0)) &&
                 ((*(short *)((int)DAT_00802a48 + 0x172) == 2 &&
                  ((DAT_0080168c != (int *)0x0 && (*(short *)((int)DAT_0080168c + 0x172) == 2)))))))
                ) && ((DAT_0080874e != '\x03' ||
                      ((DAT_008016ec != (int *)0x0 && (*(short *)((int)DAT_008016ec + 0x172) == 2)))
                      ))) {
              uVar17 = local_c + 0x118;
            }
            break;
          case 3:
          case 4:
            if (((DAT_008016e8 != (int *)0x0) && (*(short *)((int)DAT_008016e8 + 0x172) == 2)) &&
               ((DAT_0080167c != (int *)0x0 &&
                (((*(short *)((int)DAT_0080167c + 0x172) == 2 && (DAT_00801698 != (int *)0x0)) &&
                 (*(short *)((int)DAT_00801698 + 0x172) == 2)))))) {
              if (DAT_0080874e == '\x03') {
LAB_004fba8d:
                if ((DAT_00801680 != (int *)0x0) && (*(short *)((int)DAT_00801680 + 0x172) == 2)) {
LAB_004fbaa0:
                  uVar17 = local_c;
                }
              }
              else if ((DAT_00802a44 != (int *)0x0) && (*(short *)((int)DAT_00802a44 + 0x172) == 2))
              {
                if (DAT_0080874e == '\x03') goto LAB_004fba8d;
                goto LAB_004fbaa0;
              }
            }
          }
          if (uVar17 != 0) {
            piVar18 = (int *)(uVar17 + 4);
            local_14 = 10;
            do {
              if (piVar18[5] != 0) {
                uVar17 = (uint)local_1c & 0xffff;
                uVar12 = local_40 & 0xffff;
                if (((((int)uVar17 < piVar18[-1]) || (piVar18[1] + piVar18[-1] <= (int)uVar17)) ||
                    ((int)uVar12 < *piVar18)) || (piVar18[2] + *piVar18 <= (int)uVar12)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if ((bVar2) &&
                   ((piVar18[3] == 0 ||
                    (bVar2 = FUN_006b55c0(piVar18[3],piVar18[4],uVar17 - piVar18[-1],
                                          uVar12 - *piVar18), CONCAT31(extraout_var_00,bVar2) != 0))
                   )) {
                  local_8 = piVar18[5];
                }
              }
              piVar18 = piVar18 + 7;
              local_14 = local_14 + -1;
            } while (local_14 != 0);
            local_14 = 0;
          }
          local_18 = local_18 + 1;
          local_c = local_c + 0x118;
          local_3c = local_3c + -1;
        } while (local_3c != 0);
      }
      if (*(int *)((int)this_00 + 0x144) != local_8) {
        if (*(int *)((int)this_00 + 0x144) != 0) {
          *(undefined4 *)((int)this_00 + 0x28) = 0x4202;
          *(undefined2 *)((int)this_00 + 0x2c) = 0;
          *(undefined2 *)((int)this_00 + 0x2e) = 2;
          *(undefined4 *)((int)this_00 + 0x30) = *(undefined4 *)((int)this_00 + 0x144);
          (**(code **)*DAT_00802a30)((int)this_00 + 0x18);
        }
        *(int *)((int)this_00 + 0x144) = local_8;
        if (local_8 != 0) {
          *(undefined4 *)((int)this_00 + 0x28) = 0x4201;
          *(undefined2 *)((int)this_00 + 0x2c) = 0;
          *(undefined2 *)((int)this_00 + 0x2e) = 2;
          *(undefined4 *)((int)this_00 + 0x30) = *(undefined4 *)((int)this_00 + 0x144);
          (**(code **)*DAT_00802a30)((int)this_00 + 0x18);
        }
      }
      if (*(short *)((int)this_00 + 0x23f) == 1) {
        local_28 = *(int *)((int)this_00 + 0xa4);
        local_2c = *(int *)((int)this_00 + 0x4c);
        local_24 = *(int *)((int)this_00 + 0x78);
        local_20 = *(int *)((int)this_00 + 0xd0);
        if (DAT_00808784 == 0) {
          if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            uVar17 = (uint)local_1c & 0xffff;
            uVar12 = local_40 & 0xffff;
            if (((((int)uVar17 < local_2c) || (local_24 + local_2c <= (int)uVar17)) ||
                ((int)uVar12 < local_28)) || (local_20 + local_28 <= (int)uVar12)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              iVar5 = FUN_006e68c0(DAT_00807598,(uVar17 - local_2c) + -5,
                                   (uVar12 - *(int *)((int)this_00 + 0xa4)) + -7,&local_34,&local_38
                                  );
              if (*(int *)((int)this_00 + 0x13c) != 0) {
                if (iVar5 == 0) {
                  *(undefined4 *)((int)this_00 + 0x13c) = 0;
                }
                else {
                  thunk_FUN_004ab470(local_34,local_38);
                }
              }
              if ((*(int *)((int)this_00 + 0x140) != 0) && (iVar5 == 0)) {
                *(undefined4 *)((int)this_00 + 0x140) = 0;
              }
              goto switchD_004fb10b_caseD_1;
            }
          }
        }
      }
      *(undefined4 *)((int)this_00 + 0x140) = 0;
      *(undefined4 *)((int)this_00 + 0x13c) = 0;
      goto switchD_004fb10b_caseD_1;
    }
    switch(uVar17) {
    case 0:
      *(int *)((int)local_44 + 0x253) = *(int *)((int)local_44 + 0x253) + 1;
      thunk_FUN_004f80a0();
      thunk_FUN_00500bd0();
      thunk_FUN_004f8c80();
      thunk_FUN_004f96a0((int)this_00);
      bVar14 = 0;
      local_c = local_c & 0xffffff00;
      uVar4 = extraout_EDX_00;
      do {
        uVar17 = local_c & 0xff;
        if (*(char *)(uVar17 + 0xb4f + (int)this_00) != '\0') {
          if (((bVar14 < 5) || (bVar14 == 0xd)) || (bVar14 == 0xe)) {
            switch(uVar17) {
            case 0:
              thunk_FUN_004ff380();
              uVar4 = extraout_EDX_12;
              break;
            case 1:
              thunk_FUN_00502330();
              uVar4 = extraout_EDX_13;
              break;
            case 3:
              thunk_FUN_005097b0();
              uVar4 = extraout_EDX_14;
              break;
            case 4:
              thunk_FUN_004ffe90();
              uVar4 = extraout_EDX_15;
              break;
            case 0xd:
            case 0xe:
              thunk_FUN_00504210(CONCAT31((int3)((uint)uVar4 >> 8),bVar14 - 0xd));
              uVar4 = extraout_EDX_16;
            }
          }
          else {
            if ((bVar14 == 5) && (DAT_008016e8 != (int *)0x0)) {
              (**(code **)(*DAT_008016e8 + 0x1c))();
              uVar4 = extraout_EDX_01;
            }
            if ((bVar14 == 6) && (DAT_0080167c != (int *)0x0)) {
              (**(code **)(*DAT_0080167c + 0x1c))();
              uVar4 = extraout_EDX_02;
            }
            if ((bVar14 == 7) && (DAT_00801684 != (int *)0x0)) {
              (**(code **)(*DAT_00801684 + 0x1c))();
              uVar4 = extraout_EDX_03;
            }
            if ((bVar14 == 8) && (DAT_00801698 != (int *)0x0)) {
              (**(code **)(*DAT_00801698 + 0x20))();
              uVar4 = extraout_EDX_04;
            }
            if ((bVar14 == 9) && (DAT_00802a44 != (int *)0x0)) {
              (**(code **)(*DAT_00802a44 + 0x20))();
              uVar4 = extraout_EDX_05;
            }
            if ((bVar14 == 10) && (DAT_00801678 != (int *)0x0)) {
              (**(code **)(*DAT_00801678 + 0x20))();
              uVar4 = extraout_EDX_06;
            }
            if ((bVar14 == 0xb) && (DAT_00801680 != (int *)0x0)) {
              (**(code **)(*DAT_00801680 + 0x1c))();
              uVar4 = extraout_EDX_07;
            }
            if ((bVar14 == 0xf) && (DAT_00802a48 != (int *)0x0)) {
              (**(code **)(*DAT_00802a48 + 0x20))();
              uVar4 = extraout_EDX_08;
            }
            if ((bVar14 == 0x10) && (DAT_0080168c != (int *)0x0)) {
              (**(code **)(*DAT_0080168c + 0x20))();
              uVar4 = extraout_EDX_09;
            }
            if ((bVar14 == 0x11) && (DAT_008016ec != (int *)0x0)) {
              (**(code **)(*DAT_008016ec + 0x20))();
              uVar4 = extraout_EDX_10;
            }
            if ((bVar14 == 0x12) && (DAT_00801690 != (void *)0x0)) {
              thunk_FUN_00515180(DAT_00801690,'\x06');
              thunk_FUN_00515180(DAT_00801690,'\x05');
              uVar4 = extraout_EDX_11;
            }
          }
          *(undefined1 *)(uVar17 + 0xb4f + (int)this_00) = 0;
        }
        bVar14 = bVar14 + 1;
        local_c = CONCAT31(local_c._1_3_,bVar14);
      } while (bVar14 < 0x14);
      if (*(short *)((int)this_00 + 0x23f) == 3) {
        bVar2 = false;
        bVar14 = 0;
        piVar18 = (int *)((int)this_00 + 0x94);
        do {
          iVar5 = *(int *)((int)this_00 + 0x120) + -0x9b + *(int *)((int)this_00 + 0x128);
          if ((bVar14 == 1) || (bVar14 == 7)) {
            iVar5 = iVar5 + *(int *)((int)this_00 + 0xc0);
          }
          if (iVar5 < *piVar18) {
            *piVar18 = *piVar18 + -0xf;
          }
          iVar5 = *(int *)((int)this_00 + 0x120) + -0x9b + *(int *)((int)this_00 + 0x128);
          if ((bVar14 == 1) || (iVar9 = iVar5, bVar14 == 7)) {
            iVar9 = iVar5 + *(int *)((int)this_00 + 0xc0);
          }
          if (*piVar18 <= iVar9) {
            if ((bVar14 == 1) || (bVar14 == 7)) {
              iVar5 = iVar5 + *(int *)((int)this_00 + 0xc0);
            }
            *piVar18 = iVar5;
            bVar2 = true;
          }
          bVar14 = bVar14 + 1;
          piVar18 = piVar18 + 1;
        } while (bVar14 < 0xb);
        if (bVar2) {
          thunk_FUN_004a9b60(*(int *)((int)this_00 + 0x11c),*(int *)((int)this_00 + 0x120),
                             *(int *)((int)this_00 + 0x124),*(int *)((int)this_00 + 0x128) + -0x9b);
          *(undefined2 *)((int)this_00 + 0x23f) = 5;
          if (DAT_0080731a == 0) {
            *(undefined2 *)((int)this_00 + 0x23f) = 1;
            thunk_FUN_004fa400(this_00,1);
          }
          else {
            puVar16 = (undefined1 *)((int)this_00 + 0x2ec);
            puVar21 = (undefined4 *)((int)this_00 + 0x2ee);
            local_c = 2;
            do {
              puVar26 = (undefined4 *)0x0;
              iVar9 = 0;
              iVar5 = 1;
              bVar14 = 0;
              uVar17 = 6;
              pbVar6 = (byte *)thunk_FUN_00526100((undefined1 *)0x0,0);
              puVar7 = FUN_00709af0(DAT_00806794,0x1f,pbVar6,uVar17,bVar14,iVar5,iVar9,puVar26);
              puVar21[-3] = puVar7;
              puVar16[-2] = (char)*puVar7;
              *puVar16 = 3;
              *puVar21 = *(undefined4 *)((int)this_00 + 0x38);
              puVar16 = puVar16 + 1;
              puVar21 = puVar21 + 1;
              local_c = local_c + -1;
            } while (local_c != 0);
            puVar21 = (undefined4 *)((int)this_00 + 0xd53);
            puVar16 = (undefined1 *)((int)this_00 + 0xd47);
            local_8 = 2;
            do {
              local_c = 6;
              do {
                puVar26 = (undefined4 *)0x0;
                iVar9 = 0;
                iVar5 = 1;
                bVar14 = 0;
                uVar17 = 6;
                pbVar6 = (byte *)thunk_FUN_00526100((undefined1 *)0x0,0);
                puVar7 = FUN_00709af0(DAT_00806794,0x1f,pbVar6,uVar17,bVar14,iVar5,iVar9,puVar26);
                puVar21[-0x12] = puVar7;
                puVar16[-0xc] = (char)*puVar7;
                *puVar16 = 3;
                *puVar21 = *(undefined4 *)((int)this_00 + 0x38);
                puVar21 = puVar21 + 1;
                puVar16 = puVar16 + 1;
                local_c = local_c + -1;
              } while (local_c != 0);
              local_8 = local_8 + -1;
            } while (local_8 != 0);
            local_c = 0;
            local_8 = 0;
          }
        }
        thunk_FUN_0054b6d0((int)DAT_00802a30);
        bVar14 = 0;
        puVar11 = (uint *)((int)this_00 + 0x148);
        do {
          if (-1 < (int)*puVar11) {
            FUN_006b3640(DAT_008075a8,*puVar11,0xffffffff,puVar11[-0x43],puVar11[-0x2d]);
          }
          bVar14 = bVar14 + 1;
          puVar11 = puVar11 + 1;
        } while (bVar14 < 0xb);
      }
      else if (*(short *)((int)this_00 + 0x23f) == 4) {
        bVar14 = 0;
        piVar18 = (int *)((int)this_00 + 0x94);
        do {
          iVar5 = *(int *)((int)this_00 + 0x120) + *(int *)((int)this_00 + 0x128);
          if ((bVar14 == 1) || (bVar14 == 7)) {
            iVar5 = iVar5 + *(int *)((int)this_00 + 0xc0);
          }
          if (*piVar18 < iVar5) {
            *piVar18 = *piVar18 + 0xf;
          }
          iVar5 = *(int *)((int)this_00 + 0x120) + *(int *)((int)this_00 + 0x128);
          if ((bVar14 == 1) || (iVar9 = iVar5, bVar14 == 7)) {
            iVar9 = iVar5 + *(int *)((int)this_00 + 0xc0);
          }
          if (iVar9 <= *piVar18) {
            if ((bVar14 == 1) || (bVar14 == 7)) {
              iVar5 = iVar5 + *(int *)((int)this_00 + 0xc0);
            }
            *piVar18 = iVar5;
            *(undefined2 *)((int)this_00 + 0x23f) = 2;
          }
          bVar14 = bVar14 + 1;
          piVar18 = piVar18 + 1;
        } while (bVar14 < 0xb);
        thunk_FUN_0054b6d0((int)DAT_00802a30);
        bVar14 = 0;
        puVar11 = (uint *)((int)this_00 + 0x148);
        do {
          if (-1 < (int)*puVar11) {
            FUN_006b3640(DAT_008075a8,*puVar11,0xffffffff,puVar11[-0x43],puVar11[-0x2d]);
          }
          bVar14 = bVar14 + 1;
          puVar11 = puVar11 + 1;
        } while (bVar14 < 0xb);
      }
      if (DAT_0080c4d3 == 3) {
        if (*(int *)((int)this_00 + 0xf0) < *(int *)((int)this_00 + 0x120)) {
          *(int *)((int)this_00 + 0xf0) = *(int *)((int)this_00 + 0xf0) + 10;
        }
        if (*(int *)((int)this_00 + 0x120) <= *(int *)((int)this_00 + 0xf0)) {
          *(int *)((int)this_00 + 0xf0) = *(int *)((int)this_00 + 0x120);
          DAT_0080c4d3 = 1;
        }
        uVar17 = *(uint *)((int)this_00 + 0xf0);
        uVar12 = *(uint *)((int)this_00 + 0xec);
        uVar20 = *(uint *)((int)this_00 + 0x174);
LAB_004fb69f:
        FUN_006b3640(DAT_008075a8,uVar20,0xffffffff,uVar12,uVar17);
      }
      else if (DAT_0080c4d3 == 4) {
        if (*(int *)((int)this_00 + 0x120) - *(int *)((int)this_00 + 0xf8) <
            *(int *)((int)this_00 + 0xf0)) {
          *(int *)((int)this_00 + 0xf0) = *(int *)((int)this_00 + 0xf0) + -10;
        }
        iVar5 = *(int *)((int)this_00 + 0x120) - *(int *)((int)this_00 + 0xf8);
        if (*(int *)((int)this_00 + 0xf0) <= iVar5) {
          *(int *)((int)this_00 + 0xf0) = iVar5;
          DAT_0080c4d3 = 2;
        }
        uVar17 = *(uint *)((int)this_00 + 0xf0);
        uVar12 = *(uint *)((int)this_00 + 0xec);
        uVar20 = *(uint *)((int)this_00 + 0x174);
        goto LAB_004fb69f;
      }
      switch(DAT_0080c4f7) {
      case 1:
        uVar17 = *(int *)((int)this_00 + 0x94) - *(int *)((int)this_00 + 0x118);
        if (*(uint *)((int)this_00 + 0x110) != uVar17) {
          *(uint *)((int)this_00 + 0x110) = uVar17;
          FUN_006b3640(DAT_008075a8,*(uint *)((int)this_00 + 0x17c),0xffffffff,
                       *(uint *)((int)this_00 + 0x10c),uVar17);
          uVar17 = *(int *)((int)this_00 + 0x110) - *(int *)((int)this_00 + 0x108);
          if (*(uint *)((int)this_00 + 0x100) != uVar17) {
LAB_004fb8d0:
            *(uint *)((int)this_00 + 0x100) = uVar17;
            goto LAB_004fb8d7;
          }
        }
        break;
      case 2:
        uVar17 = *(uint *)((int)this_00 + 0x94);
        if (*(uint *)((int)this_00 + 0x110) != uVar17) {
          *(uint *)((int)this_00 + 0x110) = uVar17;
          FUN_006b3640(DAT_008075a8,*(uint *)((int)this_00 + 0x17c),0xffffffff,
                       *(uint *)((int)this_00 + 0x10c),uVar17);
          uVar17 = *(int *)((int)this_00 + 0x110) - *(int *)((int)this_00 + 0x108);
          if (*(uint *)((int)this_00 + 0x100) != uVar17) goto LAB_004fb8d0;
        }
        break;
      case 3:
        if (*(int *)((int)this_00 + 0x94) - *(int *)((int)this_00 + 0x118) <
            *(int *)((int)this_00 + 0x110)) {
          *(int *)((int)this_00 + 0x110) = *(int *)((int)this_00 + 0x110) + -10;
        }
        iVar5 = *(int *)((int)this_00 + 0x94) - *(int *)((int)this_00 + 0x118);
        if (*(int *)((int)this_00 + 0x110) <= iVar5) {
          *(int *)((int)this_00 + 0x110) = iVar5;
          DAT_0080c4f7 = 1;
        }
        FUN_006b3640(DAT_008075a8,*(uint *)((int)this_00 + 0x17c),0xffffffff,
                     *(uint *)((int)this_00 + 0x10c),*(uint *)((int)this_00 + 0x110));
        if (DAT_0080c4f7 == 2) {
          FUN_006b3af0(DAT_008075a8,*(uint *)((int)this_00 + 0x17c));
        }
        iVar5 = *(int *)((int)this_00 + 0x110) - *(int *)((int)this_00 + 0x108);
        if (iVar5 < *(int *)((int)this_00 + 0x100)) {
          *(int *)((int)this_00 + 0x100) = *(int *)((int)this_00 + 0x100) + -10;
        }
        if (*(int *)((int)this_00 + 0x100) <= iVar5) {
          *(int *)((int)this_00 + 0x100) = iVar5;
        }
        uVar17 = *(uint *)((int)this_00 + 0x100);
        uVar12 = *(uint *)((int)this_00 + 0xfc);
        uVar20 = *(uint *)((int)this_00 + 0x178);
        goto LAB_004fb8ee;
      case 4:
        if (*(int *)((int)this_00 + 0x110) < *(int *)((int)this_00 + 0x94)) {
          *(int *)((int)this_00 + 0x110) = *(int *)((int)this_00 + 0x110) + 10;
        }
        if (*(int *)((int)this_00 + 0x94) <= *(int *)((int)this_00 + 0x110)) {
          *(int *)((int)this_00 + 0x110) = *(int *)((int)this_00 + 0x94);
          DAT_0080c4f7 = 2;
        }
        FUN_006b3640(DAT_008075a8,*(uint *)((int)this_00 + 0x17c),0xffffffff,
                     *(uint *)((int)this_00 + 0x10c),*(uint *)((int)this_00 + 0x110));
        iVar5 = *(int *)((int)this_00 + 0x110) - *(int *)((int)this_00 + 0x108);
        if (*(int *)((int)this_00 + 0x100) < iVar5) {
          *(int *)((int)this_00 + 0x100) = *(int *)((int)this_00 + 0x100) + 10;
        }
        if (iVar5 <= *(int *)((int)this_00 + 0x100)) {
          *(int *)((int)this_00 + 0x100) = iVar5;
        }
        uVar17 = *(uint *)((int)this_00 + 0x100);
LAB_004fb8d7:
        uVar12 = *(uint *)((int)this_00 + 0xfc);
        uVar20 = *(uint *)((int)this_00 + 0x178);
LAB_004fb8ee:
        FUN_006b3640(DAT_008075a8,uVar20,0xffffffff,uVar12,uVar17);
      }
      bVar2 = FUN_006b33f0((int)DAT_008075a8,*(uint *)((int)this_00 + 0x178));
      if ((CONCAT31(extraout_var,bVar2) != 0) &&
         ((uint)(*(int *)((int)this_00 + 0x247) + *(int *)((int)this_00 + 0x243)) <=
          *(uint *)((int)this_00 + 0x9a0))) {
        FUN_006b3af0(DAT_008075a8,*(uint *)((int)this_00 + 0x178));
      }
      break;
    case 2:
      thunk_FUN_004f5690();
      break;
    case 3:
      thunk_FUN_004f7800();
      break;
    case 5:
      puVar11 = (uint *)((int)local_44 + 0x148);
      local_d = 0;
      do {
        if (-1 < (int)*puVar11) {
          FUN_006b3640(DAT_008075a8,*puVar11,0xffffffff,puVar11[-0x43],puVar11[-0x2d]);
        }
        local_d = local_d + 1;
        puVar11 = puVar11 + 1;
      } while (local_d < 0xb);
    }
    goto switchD_004fb10b_caseD_1;
  }
  switch(uVar17) {
  case 0xb10f:
    puVar27 = &LAB_00404a66;
    pcVar22 = s_BUT_MAPTRT_007c1c44;
LAB_004fbcf3:
    pCVar8 = thunk_FUN_00571240(pcVar22,0);
    thunk_FUN_004f3540(4,param_1,6,pCVar8,puVar27);
    break;
  case 0xb110:
  case 0xb111:
    if (DAT_00808784 != 0) break;
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) break;
    *(undefined4 *)((int)local_44 + 300) = 0;
    if (*(int *)(param_1 + 0x10) == 0xb110) {
      if (*(char *)((int)local_44 + 0xb64) == '\0') {
        cVar23 = '\x01';
LAB_004fc9c0:
        thunk_FUN_004f8020(local_44,cVar23,0);
      }
    }
    else if (*(char *)((int)local_44 + 0xc52) == '\0') {
      cVar23 = '\0';
      goto LAB_004fc9c0;
    }
    *(undefined4 *)((int)this_00 + 300) = 1;
    local_2e = *(int *)(param_1 + 0x14) == 3;
    pbVar6 = &local_2e;
    puVar21 = (undefined4 *)0x29;
    goto LAB_004fcf18;
  case 0xb112:
    puVar27 = &LAB_00404a52;
    pCVar8 = thunk_FUN_00571240(s_BUT_AIASS_007c1c18,0);
    thunk_FUN_004f3540(4,param_1,1,pCVar8,puVar27);
    break;
  case 0xb113:
    if (*(int *)(param_1 + 0x14) == 3) {
      FUN_006e6500(DAT_00807598,(undefined4 *)((int)local_44 + 0x227));
      DAT_00807327 = DAT_00807327 | 8;
    }
    else {
      FUN_006e6500(DAT_00807598,(undefined4 *)0x0);
      DAT_00807327 = DAT_00807327 & 0xf7;
    }
LAB_004fc53f:
    *(uint *)((int)DAT_00807598 + 0x418) = (uint)DAT_00807327;
    thunk_FUN_005252c0(0xae);
    break;
  case 0xb114:
    puVar27 = &LAB_00402be4;
    pCVar8 = thunk_FUN_00571240(s_BUT_MAPDIR_007c1c24,0);
    thunk_FUN_004f3540(4,param_1,6,pCVar8,puVar27);
    break;
  case 0xb117:
    if (DAT_00802a48 != (int *)0x0) {
      (**(code **)(*DAT_00802a48 + 0x1c))(1);
    }
    break;
  case 0xb118:
    pcVar28 = thunk_FUN_00529f90;
    if (DAT_0080874e != '\x03') {
      pcVar28 = thunk_FUN_00529fe0;
    }
    pCVar8 = thunk_FUN_00571240(s_BUT_SHOWUPD_007c23a4,0);
    thunk_FUN_004f3540(3,param_1,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar8,pcVar28);
    break;
  case 0xb119:
    if (DAT_0080168c != (int *)0x0) {
      (**(code **)(*DAT_0080168c + 0x1c))(1);
    }
    break;
  case 0xb11a:
    pcVar28 = thunk_FUN_00529f90;
    pCVar8 = thunk_FUN_00571240(s_BUT_SHOWFRM_007c2394,0);
    thunk_FUN_004f3540(3,param_1,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar8,pcVar28);
    break;
  case 0xb12a:
    pcVar28 = thunk_FUN_00529fe0;
    UVar24 = 0x274c;
    pCVar8 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
    thunk_FUN_004f3cf0(this_00,3,param_1,1,pCVar8,UVar24,pcVar28);
    break;
  case 0xb12d:
    if (DAT_00808784 != 0) break;
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) break;
    *(undefined4 *)((int)local_44 + 300) = 0;
    if (*(char *)((int)local_44 + 0xc52) == '\0') {
      thunk_FUN_004f8020(local_44,'\0',0);
    }
    *(undefined4 *)((int)this_00 + 300) = 1;
    pbVar6 = local_68;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      pbVar6[0] = 0;
      pbVar6[1] = 0;
      pbVar6[2] = 0;
      pbVar6[3] = 0;
      pbVar6 = pbVar6 + 4;
    }
    *pbVar6 = 0;
    if (*(int *)(param_1 + 0x14) == 3) {
      pbVar6 = local_68;
      local_68[0] = 6;
      *(undefined1 *)((int)this_00 + 0xc11) = 1;
      puVar21 = (undefined4 *)0x17;
    }
    else {
      pbVar6 = local_68;
      local_68[0] = 7;
      *(undefined1 *)((int)this_00 + 0xc11) = 0;
      puVar21 = (undefined4 *)0x17;
    }
    goto LAB_004fcf18;
  case 0xb12e:
    puVar27 = &LAB_00401249;
    UVar24 = 0x3aa5;
    uVar4 = 0;
    iVar5 = 1;
    pCVar8 = thunk_FUN_00571240(s_BUT_AUTO_007c23c0,0);
    pCVar8 = FUN_006f2c00(pCVar8,iVar5,uVar4);
    thunk_FUN_004f3a30(this_00,5,param_1,1,pCVar8,UVar24,puVar27);
    break;
  case 0xb12f:
  case 0xb130:
    if (DAT_00808784 != 0) break;
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) break;
    *(undefined4 *)((int)local_44 + 300) = 0;
    if (*(char *)((int)local_44 + 0xc52) == '\0') {
      thunk_FUN_004f8020(local_44,'\0',0);
    }
    *(undefined4 *)((int)this_00 + 300) = 1;
    pbVar6 = &local_d;
    local_d = *(char *)(param_1 + 0x10) - 0x2f;
    puVar21 = (undefined4 *)0x9;
    goto LAB_004fcf18;
  case 0xb13f:
    pcVar28 = thunk_FUN_00529fe0;
    UVar24 = 0x274c;
    pCVar8 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
    thunk_FUN_004f3cf0(this_00,5,param_1,1,pCVar8,UVar24,pcVar28);
    break;
  case 0xb15f:
  case 0xb160:
  case 0xb161:
  case 0xb162:
  case 0xb163:
  case 0xb164:
    if (DAT_00808784 != 0) break;
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) break;
    *(undefined4 *)((int)local_44 + 300) = 0;
    if (*(char *)((int)local_44 + 0xc52) == '\0') {
      thunk_FUN_004f8020(local_44,'\0',0);
    }
    *(undefined4 *)((int)this_00 + 300) = 1;
    pbVar6 = (byte *)((int)&local_18 + 2);
    local_18 = CONCAT13(*(char *)(param_1 + 0x10) + -0x5f,CONCAT12(1,(undefined2)local_18));
    puVar21 = (undefined4 *)0x27;
LAB_004fcf18:
    thunk_FUN_0054edf0(puVar21,(undefined4 *)pbVar6,0,0xffffffff);
    thunk_FUN_005252c0(0xae);
  }
switchD_004fb10b_caseD_1:
  DAT_00858df8 = (undefined4 *)local_d0;
  uVar4 = FUN_006e5fd0();
  return uVar4;
}

