
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::GetMessage */

undefined4 __thiscall CPanelTy::GetMessage(CPanelTy *this,int param_1)

{
  CPanelTy CVar1;
  short sVar2;
  bool bVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  CPanelTy *pCVar8;
  undefined3 extraout_var;
  uint uVar9;
  undefined3 extraout_var_00;
  LPSTR pCVar10;
  int iVar11;
  LPSTR pCVar12;
  uint *puVar13;
  uint uVar14;
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
  undefined3 uVar15;
  byte bVar16;
  short sVar17;
  CPanelTy *pCVar18;
  CPanelTy *pCVar19;
  int *piVar20;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  CPanelTy *pCVar21;
  uint *puVar22;
  uint uVar23;
  undefined4 *puVar24;
  char *pcVar25;
  char cVar26;
  UINT UVar27;
  int iVar28;
  undefined *puVar29;
  code *pcVar30;
  InternalExceptionFrame local_d0;
  byte local_8c [29];
  int local_6f;
  byte local_68 [36];
  CPanelTy *local_44;
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
  CPanelTy *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  byte local_d;
  CPanelTy *local_c;
  undefined4 local_8;
  
  local_44 = this;
  uVar5 = FUN_006e51b0(*(int *)(this + 0x10));
  *(undefined4 *)(this + 0x38) = uVar5;
  local_d0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_d0;
  iVar6 = __setjmp3(local_d0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar18 = local_44;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_d0.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x75f,0,iVar6,&DAT_007a4ccc
                                ,s_CPanelTy__GetMessage_007c22bc);
    if (iVar11 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x75f);
      return 0xffff;
    }
    pcVar30 = (code *)swi(3);
    uVar5 = (*pcVar30)();
    return uVar5;
  }
  uVar9 = *(uint *)(param_1 + 0x10);
  if (0xb174 < uVar9) {
    uVar15 = (undefined3)((uint)extraout_EDX >> 8);
    switch(uVar9) {
    case 0xb17f:
    case 0xb180:
    case 0xb181:
    case 0xb182:
    case 0xb183:
    case 0xb184:
      piVar20 = *(int **)(param_1 + 0x18);
      iVar6 = DAT_00806734;
      if (*(int *)(local_44 + 0x138) != 0) {
        iVar6 = *(int *)(local_44 + 0xa8);
      }
      FUN_006b4170(*(int *)(local_44 + 0x194),0,*piVar20 - *(int *)(local_44 + 0x50),
                   piVar20[1] - iVar6,piVar20[2],piVar20[3],
                   (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a);
      if (pCVar18[0xbfc] == (CPanelTy)0x0) {
        if (pCVar18[uVar9 - 0xa56e] == (CPanelTy)0x0) {
          uVar14 = 0;
        }
        else {
          uVar14 = (byte)pCVar18[uVar9 - 0xa56e] + 6;
        }
      }
      else {
        uVar14 = (uint)(byte)pCVar18[uVar9 - 0xa56e];
      }
      iVar6 = DAT_00806734;
      if (*(int *)(pCVar18 + 0x138) != 0) {
        iVar6 = *(int *)(pCVar18 + 0xa8);
      }
      local_1c = (CPanelTy *)(piVar20[1] - iVar6);
      pbVar7 = (byte *)FUN_0070b3a0(*(int *)(pCVar18 + 0xb17),uVar14);
      thunk_FUN_00540760(*(undefined4 **)(pCVar18 + 0x194),*piVar20 - *(int *)(pCVar18 + 0x50),
                         (int)local_1c,'\x01',pbVar7);
      iVar6 = DAT_00806734;
      if (*(int *)(pCVar18 + 0x138) != 0) {
        iVar6 = *(int *)(pCVar18 + 0xa8);
      }
      ccFntTy::SetSurf(*(ccFntTy **)(pCVar18 + 0x1b8),*(int *)(pCVar18 + 0x194),0,
                       (*piVar20 - *(int *)(pCVar18 + 0x50)) + 0x17,piVar20[1] - iVar6,
                       piVar20[2] + -0x17,piVar20[3]);
      uVar5 = 2;
      iVar28 = -1;
      iVar6 = piVar20[2] + -0x17;
      iVar11 = 0;
      puVar22 = (uint *)&DAT_007c2310;
      puVar13 = (uint *)FUN_006b0140(uVar9 - 0x6265,DAT_00807618);
      puVar13 = thunk_FUN_00540c40(*(void **)(pCVar18 + 0x1b8),puVar13,puVar22,iVar6);
      ccFntTy::WrStr(*(ccFntTy **)(pCVar18 + 0x1b8),puVar13,iVar11,iVar28,uVar5);
      uVar9 = *(uint *)(pCVar18 + 0x15c);
      if ((int)uVar9 < 0) break;
      uVar14 = *(uint *)(pCVar18 + 0xa8);
      uVar23 = *(uint *)(pCVar18 + 0x50);
      goto LAB_004fd606;
    case 0xb18f:
    case 0xb190:
    case 0xb191:
    case 0xb192:
    case 0xb193:
    case 0xb194:
      iVar6 = thunk_FUN_005050b0(local_44,*(char *)(param_1 + 0x10) + 0x71);
      if (DAT_00808784 != 0) break;
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) || (iVar6 < 0)) break;
      *(undefined4 *)(pCVar18 + 300) = 0;
      if (pCVar18[0xc52] == (CPanelTy)0x0) {
        thunk_FUN_004f8020(pCVar18,'\0',0);
      }
      pbVar7 = (byte *)((int)&local_8 + 2);
      *(undefined4 *)(pCVar18 + 300) = 1;
      local_8 = CONCAT13((char)iVar6,CONCAT12(2,(short)local_8));
      puVar24 = (undefined4 *)0x27;
      goto LAB_004fcf18;
    case 0xb19f:
    case 0xb1a0:
    case 0xb1a1:
    case 0xb1a2:
    case 0xb1a3:
    case 0xb1a4:
      piVar20 = *(int **)(param_1 + 0x18);
      uVar9 = thunk_FUN_00505070(local_44,(char)uVar9 + 0x61);
      iVar6 = DAT_00806734;
      if (*(int *)(pCVar18 + 0x138) != 0) {
        iVar6 = *(int *)(pCVar18 + 0xa8);
      }
      FUN_006b4170(*(int *)(pCVar18 + 0x194),0,*piVar20 - *(int *)(pCVar18 + 0x50),
                   piVar20[1] - iVar6,piVar20[2],piVar20[3],
                   (-(DAT_0080874e != '\x03') & 0xfdU) + 0x3d);
      if (-1 < (int)uVar9) {
        if ((uVar9 == 0) || (*(int *)(param_1 + 0x14) == 0)) {
          iVar6 = 1;
        }
        else {
          iVar6 = 0;
        }
        iVar11 = piVar20[1];
        iVar28 = DAT_00806734;
        if (*(int *)(pCVar18 + 0x138) != 0) {
          iVar28 = *(int *)(pCVar18 + 0xa8);
        }
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(pCVar18 + 0x9d5),iVar6);
        thunk_FUN_00540760(*(undefined4 **)(pCVar18 + 0x194),*piVar20 - *(int *)(pCVar18 + 0x50),
                           iVar11 - iVar28,'\x01',pbVar7);
      }
      uVar9 = *(uint *)(pCVar18 + 0x15c);
      if ((int)uVar9 < 0) break;
      uVar14 = *(uint *)(pCVar18 + 0xa8);
      uVar23 = *(uint *)(pCVar18 + 0x50);
      goto LAB_004fd606;
    case 0xb1ff:
    case 0xb20d:
      iVar6 = -1;
      uVar4 = 0;
      do {
        if (local_44[uVar4 + 0xba2] != (CPanelTy)0x0) {
          iVar6 = iVar6 + 1;
        }
      } while ((iVar6 != *(int *)(param_1 + 0x14)) && (uVar4 = uVar4 + 1, uVar4 < 6));
      if (uVar4 < 6) {
        SetCmdBoat(local_44,(uint)uVar4);
      }
      else {
        SetCmdBoat(local_44,0);
      }
      break;
    case 0xb200:
      uVar9 = 0xffffffff;
      uVar4 = 0;
      do {
        if (local_44[uVar4 + 0xba2] != (CPanelTy)0x0) {
          uVar9 = uVar9 + 1;
        }
      } while ((uVar9 != *(ushort *)(param_1 + 0x16)) && (uVar4 = uVar4 + 1, uVar4 < 6));
      if (5 < uVar4) {
        uVar4 = 0;
      }
      puVar29 = &LAB_0040420f;
      iVar6 = 0;
      pcVar25 = thunk_FUN_00529590(local_44[uVar4 + 0xba2],*(int *)(local_44 + 0xb99));
      pCVar10 = thunk_FUN_00571240(pcVar25,iVar6);
      PaintBut(pCVar18,3,param_1,1,pCVar10,puVar29);
      break;
    case 0xb203:
    case 0xb20f:
      iVar6 = -1;
      uVar4 = 0;
      do {
        if (local_44[uVar4 + 0xbfe] != (CPanelTy)0x0) {
          iVar6 = iVar6 + 1;
        }
      } while ((iVar6 != *(int *)(param_1 + 0x14)) && (uVar4 = uVar4 + 1, uVar4 < 6));
      if (uVar4 < 6) {
        SetCmdObj(local_44,(uint)uVar4);
      }
      else {
        SetCmdObj(local_44,0);
      }
      break;
    case 0xb204:
      uVar9 = 0xffffffff;
      uVar4 = 0;
      do {
        if (local_44[uVar4 + 0xbfe] != (CPanelTy)0x0) {
          uVar9 = uVar9 + 1;
        }
      } while ((uVar9 != *(ushort *)(param_1 + 0x16)) && (uVar4 = uVar4 + 1, uVar4 < 6));
      if (5 < uVar4) {
        uVar4 = 0;
      }
      puVar29 = &LAB_0040420f;
      iVar6 = 0;
      pcVar25 = thunk_FUN_00529590(local_44[uVar4 + 0xbfe],*(int *)(local_44 + 0xbf5));
      pCVar10 = thunk_FUN_00571240(pcVar25,iVar6);
      PaintBut(pCVar18,5,param_1,1,pCVar10,puVar29);
      break;
    case 0xb206:
      pcVar30 = thunk_FUN_0052a7b0;
      pCVar10 = thunk_FUN_00571240(s_BUT_MFFRAMES_007c2384,0);
      pCVar12 = thunk_FUN_00571240(s_BUT_MFTABS_007c2374,0);
      PaintTab(pCVar18,5,param_1,1,pCVar12,pCVar10,pcVar30);
      break;
    case 0xb207:
      local_44[0x9d4] = **(CPanelTy **)(param_1 + 0x14);
      thunk_FUN_005097b0();
      break;
    case 0xb20b:
      pcVar30 = thunk_FUN_0052a7b0;
      pCVar10 = thunk_FUN_00571240(s_BUT_MFFRAMES_007c2384,0);
      PaintTab(pCVar18,5,param_1,1,s_BUT_RCTTYPESI_007c2364,pCVar10,pcVar30);
      break;
    case 0xb20e:
      uVar9 = 0xffffffff;
      uVar4 = 0;
      do {
        if (local_44[uVar4 + 0xba2] != (CPanelTy)0x0) {
          uVar9 = uVar9 + 1;
        }
      } while ((uVar9 != *(ushort *)(param_1 + 0x16)) && (uVar4 = uVar4 + 1, uVar4 < 6));
      if (5 < uVar4) {
        uVar4 = 0;
      }
      puVar29 = &LAB_0040420f;
      iVar6 = 0;
      pcVar25 = thunk_FUN_00529590(local_44[uVar4 + 0xba2],*(int *)(local_44 + 0xb99));
      pCVar10 = thunk_FUN_00571240(pcVar25,iVar6);
      PaintBut(pCVar18,3,param_1,6,pCVar10,puVar29);
      break;
    case 0xb210:
      uVar9 = 0xffffffff;
      uVar4 = 0;
      do {
        if (local_44[uVar4 + 0xbfe] != (CPanelTy)0x0) {
          uVar9 = uVar9 + 1;
        }
      } while ((uVar9 != *(ushort *)(param_1 + 0x16)) && (uVar4 = uVar4 + 1, uVar4 < 6));
      if (5 < uVar4) {
        uVar4 = 0;
      }
      puVar29 = &LAB_0040420f;
      iVar6 = 0;
      pcVar25 = thunk_FUN_00529590(local_44[uVar4 + 0xbfe],*(int *)(local_44 + 0xbf5));
      pCVar10 = thunk_FUN_00571240(pcVar25,iVar6);
      PaintBut(pCVar18,5,param_1,6,pCVar10,puVar29);
      break;
    case 0xb211:
    case 0xb213:
    case 0xb215:
    case 0xb217:
    case 0xb219:
    case 0xb21b:
      if (DAT_00808784 != 0) break;
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) break;
      *(undefined4 *)(local_44 + 300) = 0;
      if (local_44[0xc52] == (CPanelTy)0x0) {
        thunk_FUN_004f8020(local_44,'\0',0);
      }
      *(undefined4 *)(pCVar18 + 300) = 1;
      pbVar7 = &local_2d;
      local_2d = (byte)(*(int *)(param_1 + 0x10) - 0xb211U >> 1);
      puVar24 = (undefined4 *)0x2a;
      goto LAB_004fcf18;
    case 0xb212:
    case 0xb216:
      switch(*(undefined4 *)(local_44 + 0xbf5)) {
      case 0x5f:
        pcVar25 = s_BUT_TBDN_007c22f4;
LAB_004fd533:
        pcVar30 = thunk_FUN_00529fe0;
        pCVar10 = thunk_FUN_00571240(pcVar25,0);
        PaintBut(pCVar18,5,param_1,1,pCVar10,pcVar30);
        break;
      case 100:
      case 0x65:
      case 0x6d:
        PaintBut(local_44,5,param_1,1,s_BUT_MINUSSI_007c2300,thunk_FUN_00529fe0);
      }
      break;
    case 0xb214:
    case 0xb218:
      switch(*(undefined4 *)(local_44 + 0xbf5)) {
      case 0x5f:
        pcVar25 = s_BUT_TBUP_007c22d8;
        goto LAB_004fd533;
      case 100:
      case 0x65:
      case 0x6d:
        PaintBut(local_44,5,param_1,1,s_BUT_PLUSSI_007c22e4,thunk_FUN_00529fe0);
      }
      break;
    case 0xb21a:
    case 0xb21c:
      if (*(int *)(local_44 + 0xbf5) != 0x6d) break;
      local_c = (CPanelTy *)CONCAT31(local_c._1_3_,1);
      piVar20 = *(int **)(param_1 + 0x18);
      switch(*(undefined4 *)(param_1 + 0x14)) {
      case 0:
        local_c = (CPanelTy *)CONCAT31(local_c._1_3_,1);
        break;
      case 1:
      case 3:
        local_c = (CPanelTy *)
                  CONCAT31(local_c._1_3_,local_44[(uVar9 - 0xb21a >> 1) + 0xc0f] != (CPanelTy)0x3);
        break;
      case 2:
        local_c = (CPanelTy *)((uint)local_c._1_3_ << 8);
      }
      iVar6 = piVar20[1];
      iVar11 = DAT_00806734;
      if (*(int *)(local_44 + 0x138) != 0) {
        iVar11 = *(int *)(local_44 + 0xa8);
      }
      pbVar7 = (byte *)FUN_0070b3a0(*(int *)(local_44 + 0x9d5),(uint)local_c & 0xff);
      thunk_FUN_00540760(*(undefined4 **)(pCVar18 + 0x194),*piVar20 - *(int *)(pCVar18 + 0x50),
                         iVar6 - iVar11,'\x01',pbVar7);
      uVar9 = *(uint *)(pCVar18 + 0x15c);
      if ((int)uVar9 < 0) break;
      uVar14 = *(uint *)(pCVar18 + 0xa8);
      uVar23 = *(uint *)(pCVar18 + 0x50);
LAB_004fd606:
      FUN_006b3640(DAT_008075a8,uVar9,0xffffffff,uVar23,uVar14);
      break;
    case 0xb220:
    case 0xb221:
    case 0xb222:
    case 0xb223:
      if (DAT_00808784 != 0) break;
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) break;
      *(undefined4 *)(local_44 + 300) = 0;
      if (local_44[0xb64] == (CPanelTy)0x0) {
        thunk_FUN_004f8020(local_44,'\x01',0);
      }
      *(undefined4 *)(pCVar18 + 300) = 1;
      pbVar7 = local_8c;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        pbVar7[0] = 0;
        pbVar7[1] = 0;
        pbVar7[2] = 0;
        pbVar7[3] = 0;
        pbVar7 = pbVar7 + 4;
      }
      *pbVar7 = 0;
      pbVar7 = local_8c;
      local_6f = *(int *)(param_1 + 0x10) + -0xb220;
      local_8c[0] = 0x11;
      puVar24 = (undefined4 *)0x17;
      goto LAB_004fcf18;
    case 0xb230:
      CVar1 = local_44[0xbcf];
      pcVar25 = s_BUT_BEHREPAIR0_007c2350;
      goto LAB_004fd1d2;
    case 0xb231:
      pcVar25 = s_BUT_BEHREPAIR20_007c233c;
      if (DAT_0080874e != '\x03') {
        pcVar25 = s_BUT_BEHREPAIR50_007c2328;
      }
      CVar1 = local_44[0xbd0];
      goto LAB_004fd1d2;
    case 0xb232:
      pcVar25 = s_BUT_BEHREPAIR50_007c2328;
      if (DAT_0080874e != '\x03') {
        pcVar25 = s_BUT_BEHREPAIR80_007c2314;
      }
      CVar1 = local_44[0xbd1];
LAB_004fd1d2:
      uVar9 = CONCAT31(uVar15,CVar1 == (CPanelTy)0x3);
      pCVar10 = thunk_FUN_00571240(pcVar25,0);
      PaintBBut(pCVar18,3,param_1,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar10,uVar9);
      break;
    case 0xb233:
      uVar9 = CONCAT31(uVar15,local_44[0xbd2] == (CPanelTy)0x3);
      pCVar10 = thunk_FUN_00571240(s_BUT_BEHREPAIR80_007c2314,0);
      PaintBBut(pCVar18,3,param_1,6,pCVar10,uVar9);
    }
    goto switchD_004fb10b_caseD_1;
  }
  if (0xb16e < uVar9) {
    if (DAT_00808784 != 0) goto switchD_004fb10b_caseD_1;
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto switchD_004fb10b_caseD_1;
    *(undefined4 *)(local_44 + 300) = 0;
    if (local_44[0xc52] == (CPanelTy)0x0) {
      thunk_FUN_004f8020(local_44,'\0',0);
    }
    *(undefined4 *)(pCVar18 + 300) = 1;
    pbVar7 = (byte *)((int)&local_14 + 2);
    local_14 = CONCAT13(*(char *)(param_1 + 0x10) + -0x6f,(int3)local_14) & 0xff00ffff;
    puVar24 = (undefined4 *)0x27;
    goto LAB_004fcf18;
  }
  if (uVar9 < 0xb10f) {
    if (uVar9 == 0xb10e) {
      if (DAT_00808784 == 0) {
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          pCVar18 = local_44 + 0x18;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(undefined4 *)pCVar18 = 0;
            pCVar18 = pCVar18 + 4;
          }
          *(undefined4 *)(local_44 + 0x28) = 0xa209;
          *(undefined4 *)(local_44 + 0x20) = 0x101;
          *(undefined4 *)(local_44 + 0x24) = 3;
          FUN_006e3b50((undefined4 *)(local_44 + 0x18));
          thunk_FUN_005252c0(0xae);
        }
      }
      goto switchD_004fb10b_caseD_1;
    }
    if (0xb106 < uVar9) {
      switch(uVar9) {
      case 0xb107:
        puVar29 = &LAB_00402be4;
        pCVar10 = thunk_FUN_00571240(s_BUT_MAPSMIL_007c1cc4,0);
        PaintBut(pCVar18,4,param_1,6,pCVar10,puVar29);
        break;
      case 0xb108:
        if (DAT_00808784 == 0) {
          if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) {
            pCVar18 = local_44 + 0x18;
            for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(undefined4 *)pCVar18 = 0;
              pCVar18 = pCVar18 + 4;
            }
            *(undefined4 *)(local_44 + 0x28) = 0xa206;
            *(undefined4 *)(local_44 + 0x20) = 0x101;
            *(undefined4 *)(local_44 + 0x24) = 3;
            FUN_006e3b50((undefined4 *)(local_44 + 0x18));
            thunk_FUN_005252c0(0xae);
          }
        }
        break;
      case 0xb109:
        puVar29 = &LAB_00404a66;
        pcVar25 = s_BUT_MAPZIN_007c1ca4;
        goto LAB_004fbcf3;
      case 0xb10a:
        if (DAT_00808784 == 0) {
          if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) {
            pCVar18 = local_44 + 0x18;
            for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(undefined4 *)pCVar18 = 0;
              pCVar18 = pCVar18 + 4;
            }
            *(undefined4 *)(local_44 + 0x28) = 0xa207;
            *(undefined4 *)(local_44 + 0x20) = 0x101;
            *(undefined4 *)(local_44 + 0x24) = 3;
            FUN_006e3b50((undefined4 *)(local_44 + 0x18));
            thunk_FUN_005252c0(0xae);
          }
        }
        break;
      case 0xb10b:
        puVar29 = &LAB_00404a66;
        pCVar10 = thunk_FUN_00571240(s_BUT_MAPZOUT_007c1c84,0);
        PaintBut(pCVar18,4,param_1,6,pCVar10,puVar29);
        break;
      case 0xb10c:
        if (DAT_00808784 == 0) {
          if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) {
            pCVar18 = local_44 + 0x18;
            for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(undefined4 *)pCVar18 = 0;
              pCVar18 = pCVar18 + 4;
            }
            *(undefined4 *)(local_44 + 0x28) = 0xa208;
            *(undefined4 *)(local_44 + 0x20) = 0x101;
            *(undefined4 *)(local_44 + 0x24) = 3;
            FUN_006e3b50((undefined4 *)(local_44 + 0x18));
            thunk_FUN_005252c0(0xae);
          }
        }
        break;
      case 0xb10d:
        puVar29 = &LAB_00404a66;
        pCVar10 = thunk_FUN_00571240(s_BUT_MAPTLFT_007c1c64,0);
        PaintBut(pCVar18,4,param_1,6,pCVar10,puVar29);
      }
      goto switchD_004fb10b_caseD_1;
    }
    if (uVar9 == 0xb106) {
      if (*(int *)(param_1 + 0x14) == 3) {
        DAT_00807327 = DAT_00807327 | 4;
      }
      else {
        DAT_00807327 = DAT_00807327 & 0xfb;
      }
      goto LAB_004fc53f;
    }
    if (0x60 < uVar9) {
      if (uVar9 != 0x61) {
        if (uVar9 == 0xb104) {
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
        if (uVar9 != 0xb105) goto switchD_004fb10b_caseD_1;
        puVar29 = &LAB_00402be4;
        pcVar25 = s_BUT_MAPSCIV_007c1ce4;
        goto LAB_004fbcf3;
      }
      local_8 = -1;
      local_c = (CPanelTy *)0x1;
      if (*(short *)(local_44 + 0x23f) == 2) goto switchD_004fb10b_caseD_1;
      iVar6 = 0;
      uVar9 = (uint)*(ushort *)(param_1 + 0x18);
      local_18 = (uint)*(ushort *)(param_1 + 0x1a);
      do {
        iVar11 = (int)(short)iVar6;
        local_2c = *(int *)(local_44 + iVar11 * 4 + 0x3c);
        local_28 = *(int *)(local_44 + iVar11 * 4 + 0x94);
        local_24 = *(int *)(local_44 + iVar11 * 4 + 0x68);
        local_20 = *(int *)(local_44 + iVar11 * 4 + 0xc0);
        if ((((int)uVar9 < local_2c) || (local_24 + local_2c <= (int)uVar9)) ||
           (((int)local_18 < local_28 || (local_20 + local_28 <= (int)local_18)))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        iVar11 = iVar6;
      } while ((!bVar3) && (iVar6 = iVar6 + 1, iVar11 = local_8, (short)iVar6 < 0xb));
      local_8 = iVar11;
      sVar2 = (short)local_8;
      iVar6 = (int)(short)local_8;
      switch(iVar6) {
      case 0:
      case 2:
      case 10:
        if ((DAT_00801684 == (int *)0x0) || (*(short *)((int)DAT_00801684 + 0x172) == 2)) {
          pCVar21 = (CPanelTy *)0x1;
        }
        else {
          pCVar21 = (CPanelTy *)0x0;
        }
        if ((DAT_00801678 != (int *)0x0) && (*(short *)((int)DAT_00801678 + 0x172) != 2)) {
          pCVar21 = (CPanelTy *)0x0;
        }
        if ((DAT_008016ec != (int *)0x0) && (*(short *)((int)DAT_008016ec + 0x172) != 2)) {
          pCVar21 = (CPanelTy *)0x0;
        }
        piVar20 = DAT_0080168c;
        if ((DAT_00802a48 != (int *)0x0) && (*(short *)((int)DAT_00802a48 + 0x172) != 2)) {
          pCVar21 = (CPanelTy *)0x0;
        }
        break;
      default:
        pCVar21 = local_c;
        goto LAB_004fbe73;
      case 6:
      case 8:
      case 9:
        if ((DAT_008016e8 == (int *)0x0) || (*(short *)((int)DAT_008016e8 + 0x172) == 2)) {
          pCVar21 = (CPanelTy *)0x1;
        }
        else {
          pCVar21 = (CPanelTy *)0x0;
        }
        if ((DAT_0080167c != (int *)0x0) && (*(short *)((int)DAT_0080167c + 0x172) != 2)) {
          pCVar21 = (CPanelTy *)0x0;
        }
        if ((DAT_00801698 != (int *)0x0) && (*(short *)((int)DAT_00801698 + 0x172) != 2)) {
          pCVar21 = (CPanelTy *)0x0;
        }
        piVar20 = DAT_00801680;
        if ((DAT_00802a44 != (int *)0x0) && (*(short *)((int)DAT_00802a44 + 0x172) != 2)) {
          pCVar21 = (CPanelTy *)0x0;
        }
      }
      if ((piVar20 != (int *)0x0) && (*(short *)((int)piVar20 + 0x172) != 2)) {
        pCVar21 = (CPanelTy *)0x0;
      }
LAB_004fbe73:
      local_14 = uVar9;
      if (pCVar21 != (CPanelTy *)0x0) {
        switch(iVar6) {
        case 0:
        case 8:
          thunk_FUN_004f8020(local_44,(short)local_8 == 0,1);
          break;
        case 2:
        case 6:
          if (DAT_0080874e != '\x03') {
            local_1c = local_44 + 0xb63;
            if ((short)local_8 != 2) {
              local_1c = local_44 + 0xc51;
            }
            if ((*local_1c != (CPanelTy)0x0) &&
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
              local_2c = *(int *)(local_44 + iVar6 * 4 + 0x3c) + 7;
              local_24 = 0xe;
              local_20 = 0x1b;
              sVar17 = 0;
              do {
                local_28 = sVar17 * 0x1d + 6 + *(int *)(local_44 + (short)local_8 * 4 + 0x94);
                if (((((int)uVar9 < local_2c) ||
                     (*(int *)(local_44 + iVar6 * 4 + 0x3c) + 0x15 <= (int)uVar9)) ||
                    ((int)local_18 < local_28)) || (local_28 + 0x1b <= (int)local_18)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  if (*local_1c == (CPanelTy)0x1) {
                    if ((local_1c[sVar17 + 0x2a] == (CPanelTy)0x0) && (local_1c[2] == (CPanelTy)0x1)
                       ) {
                      thunk_FUN_004f8020(local_44,(short)local_8 == 2,1);
                      SetNewDeep(pCVar18,sVar2 != 2,(char)sVar17);
                    }
                  }
                  else {
                    thunk_FUN_004f8020(local_44,(short)local_8 == 2,1);
                    SetNewDeep(pCVar18,sVar2 != 2,(char)sVar17);
                  }
                  break;
                }
                sVar17 = sVar17 + 1;
              } while (sVar17 < 5);
            }
          }
          break;
        case 3:
        case 5:
          if (DAT_0080874e == '\x03') {
            local_1c = local_44 + 0xb63;
            if ((short)local_8 != 3) {
              local_1c = local_44 + 0xc51;
            }
            bVar16 = 0xff;
            local_c = (CPanelTy *)0xff;
            if (*local_1c != (CPanelTy)0x0) {
              if ((short)local_8 == 3) {
                if ((((((DAT_00801684 != (int *)0x0) && (*(short *)((int)DAT_00801684 + 0x172) != 2)
                       ) || ((DAT_00801678 != (int *)0x0 &&
                             (*(short *)((int)DAT_00801678 + 0x172) != 2)))) ||
                     ((DAT_008016ec != (int *)0x0 && (*(short *)((int)DAT_008016ec + 0x172) != 2))))
                    || ((DAT_00802a48 != (int *)0x0 && (*(short *)((int)DAT_00802a48 + 0x172) != 2))
                       )) || ((DAT_0080168c != (int *)0x0 &&
                              (*(short *)((int)DAT_0080168c + 0x172) != 2)))) break;
                iVar6 = *(int *)(local_44 + 0xa0) + 0x40;
                if (((int)local_18 < iVar6) &&
                   (((*(int *)(local_44 + 0xa0) + 10 < (int)local_18 &&
                     (iVar11 = (*(int *)(local_44 + 0x48) + 0xb + iVar6) - uVar9,
                     iVar11 < (int)local_18)) && ((int)local_18 < iVar11 + 0x21)))) {
                  bVar16 = 4 - (char)((int)(iVar6 - local_18) / 0xb);
                  local_c = (CPanelTy *)(uint)bVar16;
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
                iVar6 = *(int *)(local_44 + 0xa8) + 0xb;
                if ((iVar6 < (int)local_18) &&
                   ((((int)local_18 < *(int *)(local_44 + 0xa8) + 0x41 &&
                     (iVar11 = (iVar6 - *(int *)(local_44 + 0x50)) + -0x87 + uVar9,
                     (int)local_18 < iVar11)) && (iVar11 + -0x21 < (int)local_18)))) {
                  uVar9 = (int)(local_18 - iVar6) / 0xb;
                  bVar16 = (byte)uVar9;
                  local_c = (CPanelTy *)(uVar9 & 0xff);
                }
              }
              pCVar21 = local_c;
              if (bVar16 != 0xff) {
                if (*local_1c == (CPanelTy)0x1) {
                  if (((local_c + 0x2a)[(int)local_1c] == (CPanelTy)0x0) &&
                     (local_1c[2] == (CPanelTy)0x1)) {
                    thunk_FUN_004f8020(local_44,(short)local_8 == 3,1);
                    SetNewDeep(pCVar18,sVar2 != 3,(char)pCVar21);
                  }
                }
                else {
                  thunk_FUN_004f8020(local_44,(short)local_8 == 3,1);
                  SetNewDeep(pCVar18,sVar2 != 3,(char)local_c);
                }
              }
            }
          }
          break;
        case 9:
          if (DAT_00808784 == 0) {
            if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) {
              local_24 = 0x4c;
              local_20 = 0x38;
              local_8 = -1;
              iVar6 = 0;
              do {
                iVar11 = thunk_FUN_004f19d0('\x01',(byte)iVar6,&local_2c,&local_28);
                if (iVar11 != 0) {
                  local_2c = local_2c + *(int *)(pCVar18 + 0x60);
                  local_28 = local_28 + *(int *)(pCVar18 + 0xb8);
                  if (((((int)uVar9 < local_2c) || (local_24 + local_2c <= (int)uVar9)) ||
                      ((int)local_18 < local_28)) || (local_20 + local_28 <= (int)local_18)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  iVar11 = iVar6;
                  if (bVar3) break;
                }
                iVar6 = iVar6 + 1;
                iVar11 = local_8;
              } while ((short)iVar6 < 6);
              local_8 = iVar11;
              if (-1 < (short)local_8) {
                STAllPlayersC::SetActivePanel(DAT_007fa174,1,(short)local_8 + 1,1);
              }
            }
          }
          break;
        case 10:
          if (DAT_00808784 == 0) {
            if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) {
              local_24 = 0x4c;
              local_20 = 0x38;
              local_8 = -1;
              iVar6 = 0;
              do {
                iVar11 = thunk_FUN_004f19d0('\0',(byte)iVar6,&local_2c,&local_28);
                if (iVar11 != 0) {
                  local_2c = local_2c + *(int *)(pCVar18 + 100);
                  local_28 = local_28 + *(int *)(pCVar18 + 0xbc);
                  if ((((int)uVar9 < local_2c) || (local_24 + local_2c <= (int)uVar9)) ||
                     (((int)local_18 < local_28 || (local_20 + local_28 <= (int)local_18)))) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  iVar11 = iVar6;
                  if (bVar3) break;
                }
                iVar6 = iVar6 + 1;
                iVar11 = local_8;
              } while ((short)iVar6 < 6);
              local_8 = iVar11;
              if (-1 < (short)local_8) {
                STAllPlayersC::SetActivePanel(DAT_007fa174,0,(short)local_8 + 1,1);
              }
            }
          }
        }
      }
      goto switchD_004fb10b_caseD_1;
    }
    if (uVar9 == 0x60) {
      local_8 = 0;
      local_1c = (CPanelTy *)CONCAT22(local_1c._2_2_,*(undefined2 *)(param_1 + 0x18));
      local_40 = CONCAT22(local_40._2_2_,*(undefined2 *)(param_1 + 0x1a));
      if (*(short *)(local_44 + 0x23f) == 1) {
        local_c = local_44 + 0x204;
        local_18 = 0;
        local_3c = 5;
        do {
          pCVar21 = (CPanelTy *)0x0;
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
              pCVar21 = local_c + 0x118;
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
                  pCVar21 = local_c;
                }
              }
              else if ((DAT_00802a44 != (int *)0x0) && (*(short *)((int)DAT_00802a44 + 0x172) == 2))
              {
                if (DAT_0080874e == '\x03') goto LAB_004fba8d;
                goto LAB_004fbaa0;
              }
            }
          }
          if (pCVar21 != (CPanelTy *)0x0) {
            pCVar21 = pCVar21 + 4;
            local_14 = 10;
            do {
              if (*(int *)(pCVar21 + 0x14) != 0) {
                uVar9 = (uint)local_1c & 0xffff;
                uVar14 = local_40 & 0xffff;
                if (((((int)uVar9 < *(int *)(pCVar21 + -4)) ||
                     (*(int *)(pCVar21 + 4) + *(int *)(pCVar21 + -4) <= (int)uVar9)) ||
                    ((int)uVar14 < *(int *)pCVar21)) ||
                   (*(int *)(pCVar21 + 8) + *(int *)pCVar21 <= (int)uVar14)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if ((bVar3) &&
                   ((*(int *)(pCVar21 + 0xc) == 0 ||
                    (bVar3 = FUN_006b55c0(*(int *)(pCVar21 + 0xc),*(int *)(pCVar21 + 0x10),
                                          uVar9 - *(int *)(pCVar21 + -4),uVar14 - *(int *)pCVar21),
                    CONCAT31(extraout_var_00,bVar3) != 0)))) {
                  local_8 = *(int *)(pCVar21 + 0x14);
                }
              }
              pCVar21 = pCVar21 + 0x1c;
              local_14 = local_14 + -1;
            } while (local_14 != 0);
            local_14 = 0;
          }
          local_18 = local_18 + 1;
          local_c = local_c + 0x118;
          local_3c = local_3c + -1;
        } while (local_3c != 0);
      }
      if (*(int *)(pCVar18 + 0x144) != local_8) {
        if (*(int *)(pCVar18 + 0x144) != 0) {
          *(undefined4 *)(pCVar18 + 0x28) = 0x4202;
          *(undefined2 *)(pCVar18 + 0x2c) = 0;
          *(undefined2 *)(pCVar18 + 0x2e) = 2;
          *(undefined4 *)(pCVar18 + 0x30) = *(undefined4 *)(pCVar18 + 0x144);
          (**(code **)*DAT_00802a30)(pCVar18 + 0x18);
        }
        *(int *)(pCVar18 + 0x144) = local_8;
        if (local_8 != 0) {
          *(undefined4 *)(pCVar18 + 0x28) = 0x4201;
          *(undefined2 *)(pCVar18 + 0x2c) = 0;
          *(undefined2 *)(pCVar18 + 0x2e) = 2;
          *(undefined4 *)(pCVar18 + 0x30) = *(undefined4 *)(pCVar18 + 0x144);
          (**(code **)*DAT_00802a30)(pCVar18 + 0x18);
        }
      }
      if (*(short *)(pCVar18 + 0x23f) == 1) {
        local_28 = *(int *)(pCVar18 + 0xa4);
        local_2c = *(int *)(pCVar18 + 0x4c);
        local_24 = *(int *)(pCVar18 + 0x78);
        local_20 = *(int *)(pCVar18 + 0xd0);
        if (DAT_00808784 == 0) {
          if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) {
            uVar9 = (uint)local_1c & 0xffff;
            uVar14 = local_40 & 0xffff;
            if (((((int)uVar9 < local_2c) || (local_24 + local_2c <= (int)uVar9)) ||
                ((int)uVar14 < local_28)) || (local_20 + local_28 <= (int)uVar14)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              iVar6 = FUN_006e68c0(DAT_00807598,(uVar9 - local_2c) + -5,
                                   (uVar14 - *(int *)(pCVar18 + 0xa4)) + -7,&local_34,&local_38);
              if (*(int *)(pCVar18 + 0x13c) != 0) {
                if (iVar6 == 0) {
                  *(undefined4 *)(pCVar18 + 0x13c) = 0;
                }
                else {
                  thunk_FUN_004ab470(local_34,local_38);
                }
              }
              if ((*(int *)(pCVar18 + 0x140) != 0) && (iVar6 == 0)) {
                *(undefined4 *)(pCVar18 + 0x140) = 0;
              }
              goto switchD_004fb10b_caseD_1;
            }
          }
        }
      }
      *(undefined4 *)(pCVar18 + 0x140) = 0;
      *(undefined4 *)(pCVar18 + 0x13c) = 0;
      goto switchD_004fb10b_caseD_1;
    }
    switch(uVar9) {
    case 0:
      *(int *)(local_44 + 0x253) = *(int *)(local_44 + 0x253) + 1;
      PaintTV(local_44);
      PaintNewDeep(pCVar18);
      PaintSMap(pCVar18);
      PlayBrief(pCVar18,(int)unaff_EDI);
      bVar16 = 0;
      local_c = (CPanelTy *)((uint)local_c & 0xffffff00);
      uVar5 = extraout_EDX_00;
      do {
        uVar9 = (uint)local_c & 0xff;
        if (pCVar18[uVar9 + 0xb4f] != (CPanelTy)0x0) {
          if (((bVar16 < 5) || (bVar16 == 0xd)) || (bVar16 == 0xe)) {
            switch(uVar9) {
            case 0:
              Update1Panel(pCVar18);
              uVar5 = extraout_EDX_12;
              break;
            case 1:
              thunk_FUN_00502330();
              uVar5 = extraout_EDX_13;
              break;
            case 3:
              thunk_FUN_005097b0();
              uVar5 = extraout_EDX_14;
              break;
            case 4:
              Update5Panel(pCVar18);
              uVar5 = extraout_EDX_15;
              break;
            case 0xd:
            case 0xe:
              UpdateStackPanel(pCVar18,CONCAT31((int3)((uint)uVar5 >> 8),bVar16 - 0xd));
              uVar5 = extraout_EDX_16;
            }
          }
          else {
            if ((bVar16 == 5) && (DAT_008016e8 != (int *)0x0)) {
              (**(code **)(*DAT_008016e8 + 0x1c))();
              uVar5 = extraout_EDX_01;
            }
            if ((bVar16 == 6) && (DAT_0080167c != (int *)0x0)) {
              (**(code **)(*DAT_0080167c + 0x1c))();
              uVar5 = extraout_EDX_02;
            }
            if ((bVar16 == 7) && (DAT_00801684 != (int *)0x0)) {
              (**(code **)(*DAT_00801684 + 0x1c))();
              uVar5 = extraout_EDX_03;
            }
            if ((bVar16 == 8) && (DAT_00801698 != (int *)0x0)) {
              (**(code **)(*DAT_00801698 + 0x20))();
              uVar5 = extraout_EDX_04;
            }
            if ((bVar16 == 9) && (DAT_00802a44 != (int *)0x0)) {
              (**(code **)(*DAT_00802a44 + 0x20))();
              uVar5 = extraout_EDX_05;
            }
            if ((bVar16 == 10) && (DAT_00801678 != (int *)0x0)) {
              (**(code **)(*DAT_00801678 + 0x20))();
              uVar5 = extraout_EDX_06;
            }
            if ((bVar16 == 0xb) && (DAT_00801680 != (int *)0x0)) {
              (**(code **)(*DAT_00801680 + 0x1c))();
              uVar5 = extraout_EDX_07;
            }
            if ((bVar16 == 0xf) && (DAT_00802a48 != (int *)0x0)) {
              (**(code **)(*DAT_00802a48 + 0x20))();
              uVar5 = extraout_EDX_08;
            }
            if ((bVar16 == 0x10) && (DAT_0080168c != (int *)0x0)) {
              (**(code **)(*DAT_0080168c + 0x20))();
              uVar5 = extraout_EDX_09;
            }
            if ((bVar16 == 0x11) && (DAT_008016ec != (int *)0x0)) {
              (**(code **)(*DAT_008016ec + 0x20))();
              uVar5 = extraout_EDX_10;
            }
            if ((bVar16 == 0x12) && (DAT_00801690 != (void *)0x0)) {
              thunk_FUN_00515180(DAT_00801690,'\x06');
              thunk_FUN_00515180(DAT_00801690,'\x05');
              uVar5 = extraout_EDX_11;
            }
          }
          pCVar18[uVar9 + 0xb4f] = (CPanelTy)0x0;
        }
        bVar16 = bVar16 + 1;
        local_c = (CPanelTy *)CONCAT31(local_c._1_3_,bVar16);
      } while (bVar16 < 0x14);
      if (*(short *)(pCVar18 + 0x23f) == 3) {
        bVar3 = false;
        bVar16 = 0;
        pCVar21 = pCVar18 + 0x94;
        do {
          iVar6 = *(int *)(pCVar18 + 0x120) + -0x9b + *(int *)(pCVar18 + 0x128);
          if ((bVar16 == 1) || (bVar16 == 7)) {
            iVar6 = iVar6 + *(int *)(pCVar18 + 0xc0);
          }
          if (iVar6 < *(int *)pCVar21) {
            *(int *)pCVar21 = *(int *)pCVar21 + -0xf;
          }
          iVar6 = *(int *)(pCVar18 + 0x120) + -0x9b + *(int *)(pCVar18 + 0x128);
          if ((bVar16 == 1) || (iVar11 = iVar6, bVar16 == 7)) {
            iVar11 = iVar6 + *(int *)(pCVar18 + 0xc0);
          }
          if (*(int *)pCVar21 <= iVar11) {
            if ((bVar16 == 1) || (bVar16 == 7)) {
              iVar6 = iVar6 + *(int *)(pCVar18 + 0xc0);
            }
            *(int *)pCVar21 = iVar6;
            bVar3 = true;
          }
          bVar16 = bVar16 + 1;
          pCVar21 = pCVar21 + 4;
        } while (bVar16 < 0xb);
        if (bVar3) {
          thunk_FUN_004a9b60(*(int *)(pCVar18 + 0x11c),*(int *)(pCVar18 + 0x120),
                             *(int *)(pCVar18 + 0x124),*(int *)(pCVar18 + 0x128) + -0x9b);
          *(undefined2 *)(pCVar18 + 0x23f) = 5;
          if (DAT_0080731a == 0) {
            *(undefined2 *)(pCVar18 + 0x23f) = 1;
            ShiftControls(pCVar18,1);
          }
          else {
            pCVar21 = pCVar18 + 0x2ec;
            pCVar19 = pCVar18 + 0x2ee;
            local_c = (CPanelTy *)0x2;
            do {
              puVar24 = (undefined4 *)0x0;
              iVar11 = 0;
              iVar6 = 1;
              bVar16 = 0;
              uVar9 = 6;
              pbVar7 = (byte *)thunk_FUN_00526100((undefined1 *)0x0,0);
              pCVar8 = (CPanelTy *)
                       FUN_00709af0(DAT_00806794,0x1f,pbVar7,uVar9,bVar16,iVar6,iVar11,puVar24);
              *(CPanelTy **)(pCVar19 + -0xc) = pCVar8;
              pCVar21[-2] = *pCVar8;
              *pCVar21 = (CPanelTy)0x3;
              *(undefined4 *)pCVar19 = *(undefined4 *)(pCVar18 + 0x38);
              pCVar21 = pCVar21 + 1;
              pCVar19 = pCVar19 + 4;
              local_c = (CPanelTy *)((int)local_c + -1);
            } while (local_c != (CPanelTy *)0x0);
            pCVar21 = pCVar18 + 0xd53;
            pCVar19 = pCVar18 + 0xd47;
            local_8 = 2;
            do {
              local_c = (CPanelTy *)0x6;
              do {
                puVar24 = (undefined4 *)0x0;
                iVar11 = 0;
                iVar6 = 1;
                bVar16 = 0;
                uVar9 = 6;
                pbVar7 = (byte *)thunk_FUN_00526100((undefined1 *)0x0,0);
                pCVar8 = (CPanelTy *)
                         FUN_00709af0(DAT_00806794,0x1f,pbVar7,uVar9,bVar16,iVar6,iVar11,puVar24);
                *(CPanelTy **)(pCVar21 + -0x48) = pCVar8;
                pCVar19[-0xc] = *pCVar8;
                *pCVar19 = (CPanelTy)0x3;
                *(undefined4 *)pCVar21 = *(undefined4 *)(pCVar18 + 0x38);
                pCVar21 = pCVar21 + 4;
                pCVar19 = pCVar19 + 1;
                local_c = (CPanelTy *)((int)local_c + -1);
              } while (local_c != (CPanelTy *)0x0);
              local_8 = local_8 + -1;
            } while (local_8 != 0);
            local_c = (CPanelTy *)0x0;
            local_8 = 0;
          }
        }
        thunk_FUN_0054b6d0((int)DAT_00802a30);
        bVar16 = 0;
        pCVar21 = pCVar18 + 0x148;
        do {
          if (-1 < (int)*(uint *)pCVar21) {
            FUN_006b3640(DAT_008075a8,*(uint *)pCVar21,0xffffffff,*(uint *)(pCVar21 + -0x10c),
                         *(uint *)(pCVar21 + -0xb4));
          }
          bVar16 = bVar16 + 1;
          pCVar21 = pCVar21 + 4;
        } while (bVar16 < 0xb);
      }
      else if (*(short *)(pCVar18 + 0x23f) == 4) {
        bVar16 = 0;
        pCVar21 = pCVar18 + 0x94;
        do {
          iVar6 = *(int *)(pCVar18 + 0x120) + *(int *)(pCVar18 + 0x128);
          if ((bVar16 == 1) || (bVar16 == 7)) {
            iVar6 = iVar6 + *(int *)(pCVar18 + 0xc0);
          }
          if (*(int *)pCVar21 < iVar6) {
            *(int *)pCVar21 = *(int *)pCVar21 + 0xf;
          }
          iVar6 = *(int *)(pCVar18 + 0x120) + *(int *)(pCVar18 + 0x128);
          if ((bVar16 == 1) || (iVar11 = iVar6, bVar16 == 7)) {
            iVar11 = iVar6 + *(int *)(pCVar18 + 0xc0);
          }
          if (iVar11 <= *(int *)pCVar21) {
            if ((bVar16 == 1) || (bVar16 == 7)) {
              iVar6 = iVar6 + *(int *)(pCVar18 + 0xc0);
            }
            *(int *)pCVar21 = iVar6;
            *(undefined2 *)(pCVar18 + 0x23f) = 2;
          }
          bVar16 = bVar16 + 1;
          pCVar21 = pCVar21 + 4;
        } while (bVar16 < 0xb);
        thunk_FUN_0054b6d0((int)DAT_00802a30);
        bVar16 = 0;
        pCVar21 = pCVar18 + 0x148;
        do {
          if (-1 < (int)*(uint *)pCVar21) {
            FUN_006b3640(DAT_008075a8,*(uint *)pCVar21,0xffffffff,*(uint *)(pCVar21 + -0x10c),
                         *(uint *)(pCVar21 + -0xb4));
          }
          bVar16 = bVar16 + 1;
          pCVar21 = pCVar21 + 4;
        } while (bVar16 < 0xb);
      }
      if (DAT_0080c4d3 == 3) {
        if (*(int *)(pCVar18 + 0xf0) < *(int *)(pCVar18 + 0x120)) {
          *(int *)(pCVar18 + 0xf0) = *(int *)(pCVar18 + 0xf0) + 10;
        }
        if (*(int *)(pCVar18 + 0x120) <= *(int *)(pCVar18 + 0xf0)) {
          *(int *)(pCVar18 + 0xf0) = *(int *)(pCVar18 + 0x120);
          DAT_0080c4d3 = 1;
        }
        uVar9 = *(uint *)(pCVar18 + 0xf0);
        uVar14 = *(uint *)(pCVar18 + 0xec);
        uVar23 = *(uint *)(pCVar18 + 0x174);
LAB_004fb69f:
        FUN_006b3640(DAT_008075a8,uVar23,0xffffffff,uVar14,uVar9);
      }
      else if (DAT_0080c4d3 == 4) {
        if (*(int *)(pCVar18 + 0x120) - *(int *)(pCVar18 + 0xf8) < *(int *)(pCVar18 + 0xf0)) {
          *(int *)(pCVar18 + 0xf0) = *(int *)(pCVar18 + 0xf0) + -10;
        }
        if (*(int *)(pCVar18 + 0xf0) <= *(int *)(pCVar18 + 0x120) - *(int *)(pCVar18 + 0xf8)) {
          *(int *)(pCVar18 + 0xf0) = *(int *)(pCVar18 + 0x120) - *(int *)(pCVar18 + 0xf8);
          DAT_0080c4d3 = 2;
        }
        uVar9 = *(uint *)(pCVar18 + 0xf0);
        uVar14 = *(uint *)(pCVar18 + 0xec);
        uVar23 = *(uint *)(pCVar18 + 0x174);
        goto LAB_004fb69f;
      }
      switch(DAT_0080c4f7) {
      case 1:
        uVar9 = *(int *)(pCVar18 + 0x94) - *(int *)(pCVar18 + 0x118);
        if (*(uint *)(pCVar18 + 0x110) != uVar9) {
          *(uint *)(pCVar18 + 0x110) = uVar9;
          FUN_006b3640(DAT_008075a8,*(uint *)(pCVar18 + 0x17c),0xffffffff,*(uint *)(pCVar18 + 0x10c)
                       ,uVar9);
          uVar9 = *(int *)(pCVar18 + 0x110) - *(int *)(pCVar18 + 0x108);
          if (*(uint *)(pCVar18 + 0x100) != uVar9) {
LAB_004fb8d0:
            *(uint *)(pCVar18 + 0x100) = uVar9;
            goto LAB_004fb8d7;
          }
        }
        break;
      case 2:
        uVar9 = *(uint *)(pCVar18 + 0x94);
        if (*(uint *)(pCVar18 + 0x110) != uVar9) {
          *(uint *)(pCVar18 + 0x110) = uVar9;
          FUN_006b3640(DAT_008075a8,*(uint *)(pCVar18 + 0x17c),0xffffffff,*(uint *)(pCVar18 + 0x10c)
                       ,uVar9);
          uVar9 = *(int *)(pCVar18 + 0x110) - *(int *)(pCVar18 + 0x108);
          if (*(uint *)(pCVar18 + 0x100) != uVar9) goto LAB_004fb8d0;
        }
        break;
      case 3:
        if (*(int *)(pCVar18 + 0x94) - *(int *)(pCVar18 + 0x118) < *(int *)(pCVar18 + 0x110)) {
          *(int *)(pCVar18 + 0x110) = *(int *)(pCVar18 + 0x110) + -10;
        }
        if (*(int *)(pCVar18 + 0x110) <= *(int *)(pCVar18 + 0x94) - *(int *)(pCVar18 + 0x118)) {
          *(int *)(pCVar18 + 0x110) = *(int *)(pCVar18 + 0x94) - *(int *)(pCVar18 + 0x118);
          DAT_0080c4f7 = 1;
        }
        FUN_006b3640(DAT_008075a8,*(uint *)(pCVar18 + 0x17c),0xffffffff,*(uint *)(pCVar18 + 0x10c),
                     *(uint *)(pCVar18 + 0x110));
        if (DAT_0080c4f7 == 2) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(pCVar18 + 0x17c));
        }
        iVar6 = *(int *)(pCVar18 + 0x110) - *(int *)(pCVar18 + 0x108);
        if (iVar6 < *(int *)(pCVar18 + 0x100)) {
          *(int *)(pCVar18 + 0x100) = *(int *)(pCVar18 + 0x100) + -10;
        }
        if (*(int *)(pCVar18 + 0x100) <= iVar6) {
          *(int *)(pCVar18 + 0x100) = iVar6;
        }
        uVar9 = *(uint *)(pCVar18 + 0x100);
        uVar14 = *(uint *)(pCVar18 + 0xfc);
        uVar23 = *(uint *)(pCVar18 + 0x178);
        goto LAB_004fb8ee;
      case 4:
        if (*(int *)(pCVar18 + 0x110) < *(int *)(pCVar18 + 0x94)) {
          *(int *)(pCVar18 + 0x110) = *(int *)(pCVar18 + 0x110) + 10;
        }
        if (*(int *)(pCVar18 + 0x94) <= *(int *)(pCVar18 + 0x110)) {
          *(int *)(pCVar18 + 0x110) = *(int *)(pCVar18 + 0x94);
          DAT_0080c4f7 = 2;
        }
        FUN_006b3640(DAT_008075a8,*(uint *)(pCVar18 + 0x17c),0xffffffff,*(uint *)(pCVar18 + 0x10c),
                     *(uint *)(pCVar18 + 0x110));
        iVar6 = *(int *)(pCVar18 + 0x110) - *(int *)(pCVar18 + 0x108);
        if (*(int *)(pCVar18 + 0x100) < iVar6) {
          *(int *)(pCVar18 + 0x100) = *(int *)(pCVar18 + 0x100) + 10;
        }
        if (iVar6 <= *(int *)(pCVar18 + 0x100)) {
          *(int *)(pCVar18 + 0x100) = iVar6;
        }
        uVar9 = *(uint *)(pCVar18 + 0x100);
LAB_004fb8d7:
        uVar14 = *(uint *)(pCVar18 + 0xfc);
        uVar23 = *(uint *)(pCVar18 + 0x178);
LAB_004fb8ee:
        FUN_006b3640(DAT_008075a8,uVar23,0xffffffff,uVar14,uVar9);
      }
      bVar3 = FUN_006b33f0((int)DAT_008075a8,*(uint *)(pCVar18 + 0x178));
      if ((CONCAT31(extraout_var,bVar3) != 0) &&
         ((uint)(*(int *)(pCVar18 + 0x247) + *(int *)(pCVar18 + 0x243)) <=
          *(uint *)(pCVar18 + 0x9a0))) {
        FUN_006b3af0(DAT_008075a8,*(uint *)(pCVar18 + 0x178));
      }
      break;
    case 2:
      InitCPanel(local_44);
      break;
    case 3:
      DoneCPanel(local_44);
      break;
    case 5:
      pCVar18 = local_44 + 0x148;
      local_d = 0;
      do {
        if (-1 < (int)*(uint *)pCVar18) {
          FUN_006b3640(DAT_008075a8,*(uint *)pCVar18,0xffffffff,*(uint *)(pCVar18 + -0x10c),
                       *(uint *)(pCVar18 + -0xb4));
        }
        local_d = local_d + 1;
        pCVar18 = pCVar18 + 4;
      } while (local_d < 0xb);
    }
    goto switchD_004fb10b_caseD_1;
  }
  switch(uVar9) {
  case 0xb10f:
    puVar29 = &LAB_00404a66;
    pcVar25 = s_BUT_MAPTRT_007c1c44;
LAB_004fbcf3:
    pCVar10 = thunk_FUN_00571240(pcVar25,0);
    PaintBut(pCVar18,4,param_1,6,pCVar10,puVar29);
    break;
  case 0xb110:
  case 0xb111:
    if (DAT_00808784 != 0) break;
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) break;
    *(undefined4 *)(local_44 + 300) = 0;
    if (*(int *)(param_1 + 0x10) == 0xb110) {
      if (local_44[0xb64] == (CPanelTy)0x0) {
        cVar26 = '\x01';
LAB_004fc9c0:
        thunk_FUN_004f8020(local_44,cVar26,0);
      }
    }
    else if (local_44[0xc52] == (CPanelTy)0x0) {
      cVar26 = '\0';
      goto LAB_004fc9c0;
    }
    *(undefined4 *)(pCVar18 + 300) = 1;
    local_2e = *(int *)(param_1 + 0x14) == 3;
    pbVar7 = &local_2e;
    puVar24 = (undefined4 *)0x29;
    goto LAB_004fcf18;
  case 0xb112:
    puVar29 = &LAB_00404a52;
    pCVar10 = thunk_FUN_00571240(s_BUT_AIASS_007c1c18,0);
    PaintBut(pCVar18,4,param_1,1,pCVar10,puVar29);
    break;
  case 0xb113:
    if (*(int *)(param_1 + 0x14) == 3) {
      FUN_006e6500(DAT_00807598,(undefined4 *)(local_44 + 0x227));
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
    puVar29 = &LAB_00402be4;
    pCVar10 = thunk_FUN_00571240(s_BUT_MAPDIR_007c1c24,0);
    PaintBut(pCVar18,4,param_1,6,pCVar10,puVar29);
    break;
  case 0xb117:
    if (DAT_00802a48 != (int *)0x0) {
      (**(code **)(*DAT_00802a48 + 0x1c))(1);
    }
    break;
  case 0xb118:
    pcVar30 = thunk_FUN_00529f90;
    if (DAT_0080874e != '\x03') {
      pcVar30 = thunk_FUN_00529fe0;
    }
    pCVar10 = thunk_FUN_00571240(s_BUT_SHOWUPD_007c23a4,0);
    PaintBut(pCVar18,3,param_1,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar10,pcVar30);
    break;
  case 0xb119:
    if (DAT_0080168c != (int *)0x0) {
      (**(code **)(*DAT_0080168c + 0x1c))(1);
    }
    break;
  case 0xb11a:
    pcVar30 = thunk_FUN_00529f90;
    pCVar10 = thunk_FUN_00571240(s_BUT_SHOWFRM_007c2394,0);
    PaintBut(pCVar18,3,param_1,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar10,pcVar30);
    break;
  case 0xb12a:
    pcVar30 = thunk_FUN_00529fe0;
    UVar27 = 0x274c;
    pCVar10 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
    PaintTxtBut(pCVar18,3,param_1,1,pCVar10,UVar27,pcVar30);
    break;
  case 0xb12d:
    if (DAT_00808784 != 0) break;
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) break;
    *(undefined4 *)(local_44 + 300) = 0;
    if (local_44[0xc52] == (CPanelTy)0x0) {
      thunk_FUN_004f8020(local_44,'\0',0);
    }
    *(undefined4 *)(pCVar18 + 300) = 1;
    pbVar7 = local_68;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      pbVar7[0] = 0;
      pbVar7[1] = 0;
      pbVar7[2] = 0;
      pbVar7[3] = 0;
      pbVar7 = pbVar7 + 4;
    }
    *pbVar7 = 0;
    if (*(int *)(param_1 + 0x14) == 3) {
      pbVar7 = local_68;
      local_68[0] = 6;
      pCVar18[0xc11] = (CPanelTy)0x1;
      puVar24 = (undefined4 *)0x17;
    }
    else {
      pbVar7 = local_68;
      local_68[0] = 7;
      pCVar18[0xc11] = (CPanelTy)0x0;
      puVar24 = (undefined4 *)0x17;
    }
    goto LAB_004fcf18;
  case 0xb12e:
    puVar29 = &LAB_00401249;
    UVar27 = 0x3aa5;
    uVar5 = 0;
    iVar6 = 1;
    pCVar10 = thunk_FUN_00571240(s_BUT_AUTO_007c23c0,0);
    pCVar10 = FUN_006f2c00(pCVar10,iVar6,uVar5);
    PaintTxtBut(pCVar18,5,param_1,1,pCVar10,UVar27,puVar29);
    break;
  case 0xb12f:
  case 0xb130:
    if (DAT_00808784 != 0) break;
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) break;
    *(undefined4 *)(local_44 + 300) = 0;
    if (local_44[0xc52] == (CPanelTy)0x0) {
      thunk_FUN_004f8020(local_44,'\0',0);
    }
    *(undefined4 *)(pCVar18 + 300) = 1;
    pbVar7 = &local_d;
    local_d = *(char *)(param_1 + 0x10) - 0x2f;
    puVar24 = (undefined4 *)0x9;
    goto LAB_004fcf18;
  case 0xb13f:
    pcVar30 = thunk_FUN_00529fe0;
    UVar27 = 0x274c;
    pCVar10 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
    PaintTxtBut(pCVar18,5,param_1,1,pCVar10,UVar27,pcVar30);
    break;
  case 0xb15f:
  case 0xb160:
  case 0xb161:
  case 0xb162:
  case 0xb163:
  case 0xb164:
    if (DAT_00808784 != 0) break;
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) break;
    *(undefined4 *)(local_44 + 300) = 0;
    if (local_44[0xc52] == (CPanelTy)0x0) {
      thunk_FUN_004f8020(local_44,'\0',0);
    }
    *(undefined4 *)(pCVar18 + 300) = 1;
    pbVar7 = (byte *)((int)&local_18 + 2);
    local_18 = CONCAT13(*(char *)(param_1 + 0x10) + -0x5f,CONCAT12(1,(undefined2)local_18));
    puVar24 = (undefined4 *)0x27;
LAB_004fcf18:
    thunk_FUN_0054edf0(puVar24,(undefined4 *)pbVar7,0,0xffffffff);
    thunk_FUN_005252c0(0xae);
  }
switchD_004fb10b_caseD_1:
  g_currentExceptionFrame = local_d0.previous;
  uVar5 = FUN_006e5fd0();
  return uVar5;
}

