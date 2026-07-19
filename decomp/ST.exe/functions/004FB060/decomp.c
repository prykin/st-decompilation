
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::GetMessage */

undefined4 __thiscall CPanelTy::GetMessage(CPanelTy *this,int param_1)

{
  CPanelTy *this_00;
  short sVar1;
  bool bVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  ushort *puVar7;
  undefined3 extraout_var;
  uint uVar8;
  undefined3 extraout_var_00;
  LPSTR pCVar9;
  int iVar10;
  LPSTR pCVar11;
  uint *puVar12;
  uint uVar13;
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
  undefined3 uVar14;
  byte bVar15;
  short sVar16;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined1 *puVar17;
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
  char *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  byte local_d;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_44 = this;
  uVar4 = FUN_006e51b0(this->field_0010);
  this->field_0038 = uVar4;
  local_d0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_d0;
  iVar5 = Library::MSVCRT::__setjmp3(local_d0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_44;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_d0.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x75f,0,iVar5,&DAT_007a4ccc
                                ,s_CPanelTy__GetMessage_007c22bc);
    if (iVar10 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x75f);
      return 0xffff;
    }
    pcVar28 = (code *)swi(3);
    uVar4 = (*pcVar28)();
    return uVar4;
  }
  uVar8 = *(uint *)(param_1 + 0x10);
  if (0xb174 < uVar8) {
    uVar14 = (undefined3)((uint)extraout_EDX >> 8);
    switch(uVar8) {
    case 0xb17f:
    case 0xb180:
    case 0xb181:
    case 0xb182:
    case 0xb183:
    case 0xb184:
      piVar18 = *(int **)(param_1 + 0x18);
      iVar5 = DAT_00806734;
      if (local_44->field_0138 != 0) {
        iVar5 = local_44->field_00A8;
      }
      FUN_006b4170(local_44->field_0194,0,*piVar18 - local_44->field_0050,piVar18[1] - iVar5,
                   piVar18[2],piVar18[3],(-(DAT_0080874e != '\x01') & 0x89U) + 0x3a);
      if (this_00->field_0BFC == '\0') {
        bVar15 = *(byte *)((uVar8 - 0xa56e) + (int)this_00);
        if (bVar15 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = bVar15 + 6;
        }
      }
      else {
        uVar13 = (uint)*(byte *)((uVar8 - 0xa56e) + (int)this_00);
      }
      iVar5 = DAT_00806734;
      if (this_00->field_0138 != 0) {
        iVar5 = this_00->field_00A8;
      }
      local_1c = (char *)(piVar18[1] - iVar5);
      pbVar6 = (byte *)FUN_0070b3a0(this_00->field_0B17,uVar13);
      DibPut((undefined4 *)this_00->field_0194,*piVar18 - this_00->field_0050,(int)local_1c,'\x01',
             pbVar6);
      iVar5 = DAT_00806734;
      if (this_00->field_0138 != 0) {
        iVar5 = this_00->field_00A8;
      }
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,
                       (*piVar18 - this_00->field_0050) + 0x17,piVar18[1] - iVar5,piVar18[2] + -0x17
                       ,piVar18[3]);
      uVar4 = 2;
      iVar25 = -1;
      iVar5 = piVar18[2] + -0x17;
      iVar10 = 0;
      puVar19 = (uint *)&DAT_007c2310;
      puVar12 = (uint *)FUN_006b0140(uVar8 - 0x6265,DAT_00807618);
      puVar12 = thunk_FUN_00540c40(this_00->field_01B8,puVar12,puVar19,iVar5);
      ccFntTy::WrStr(this_00->field_01B8,puVar12,iVar10,iVar25,uVar4);
      uVar8 = this_00->field_015C;
      if ((int)uVar8 < 0) break;
      uVar13 = this_00->field_00A8;
      uVar20 = this_00->field_0050;
      goto cf_common_exit_004FD606;
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
      this_00->field_012C = 0;
      if (this_00->field_0C52 == '\0') {
        thunk_FUN_004f8020(this_00,'\0',0);
      }
      pbVar6 = (byte *)((int)&local_8 + 2);
      this_00->field_012C = 1;
      local_8 = CONCAT13((char)iVar5,CONCAT12(2,(short)local_8));
      puVar21 = (undefined4 *)0x27;
      goto cf_common_exit_004FCF18;
    case 0xb19f:
    case 0xb1a0:
    case 0xb1a1:
    case 0xb1a2:
    case 0xb1a3:
    case 0xb1a4:
      piVar18 = *(int **)(param_1 + 0x18);
      uVar8 = thunk_FUN_00505070(local_44,(char)uVar8 + 0x61);
      iVar5 = DAT_00806734;
      if (this_00->field_0138 != 0) {
        iVar5 = this_00->field_00A8;
      }
      FUN_006b4170(this_00->field_0194,0,*piVar18 - this_00->field_0050,piVar18[1] - iVar5,
                   piVar18[2],piVar18[3],(-(DAT_0080874e != '\x03') & 0xfdU) + 0x3d);
      if (-1 < (int)uVar8) {
        if ((uVar8 == 0) || (*(int *)(param_1 + 0x14) == 0)) {
          iVar5 = 1;
        }
        else {
          iVar5 = 0;
        }
        iVar10 = piVar18[1];
        iVar25 = DAT_00806734;
        if (this_00->field_0138 != 0) {
          iVar25 = this_00->field_00A8;
        }
        pbVar6 = (byte *)FUN_0070b3a0(this_00->field_09D5,iVar5);
        DibPut((undefined4 *)this_00->field_0194,*piVar18 - this_00->field_0050,iVar10 - iVar25,
               '\x01',pbVar6);
      }
      uVar8 = this_00->field_015C;
      if ((int)uVar8 < 0) break;
      uVar13 = this_00->field_00A8;
      uVar20 = this_00->field_0050;
      goto cf_common_exit_004FD606;
    case 0xb1ff:
    case 0xb20d:
      iVar5 = -1;
      uVar3 = 0;
      do {
        if ((&local_44->field_0BA2)[uVar3] != '\0') {
          iVar5 = iVar5 + 1;
        }
      } while ((iVar5 != *(int *)(param_1 + 0x14)) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (uVar3 < 6) {
        SetCmdBoat(local_44,(uint)uVar3);
      }
      else {
        SetCmdBoat(local_44,0);
      }
      break;
    case 0xb200:
      uVar8 = 0xffffffff;
      uVar3 = 0;
      do {
        if ((&local_44->field_0BA2)[uVar3] != '\0') {
          uVar8 = uVar8 + 1;
        }
      } while ((uVar8 != *(ushort *)(param_1 + 0x16)) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (5 < uVar3) {
        uVar3 = 0;
      }
      puVar27 = &LAB_0040420f;
      iVar5 = 0;
      pcVar22 = thunk_FUN_00529590((&local_44->field_0BA2)[uVar3],local_44->field_0B99);
      pCVar9 = thunk_FUN_00571240(pcVar22,iVar5);
      PaintBut(this_00,3,param_1,1,pCVar9,puVar27);
      break;
    case 0xb203:
    case 0xb20f:
      iVar5 = -1;
      uVar3 = 0;
      do {
        if ((&local_44->field_0BFE)[uVar3] != '\0') {
          iVar5 = iVar5 + 1;
        }
      } while ((iVar5 != *(int *)(param_1 + 0x14)) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (uVar3 < 6) {
        SetCmdObj(local_44,(uint)uVar3);
      }
      else {
        SetCmdObj(local_44,0);
      }
      break;
    case 0xb204:
      uVar8 = 0xffffffff;
      uVar3 = 0;
      do {
        if ((&local_44->field_0BFE)[uVar3] != '\0') {
          uVar8 = uVar8 + 1;
        }
      } while ((uVar8 != *(ushort *)(param_1 + 0x16)) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (5 < uVar3) {
        uVar3 = 0;
      }
      puVar27 = &LAB_0040420f;
      iVar5 = 0;
      pcVar22 = thunk_FUN_00529590((&local_44->field_0BFE)[uVar3],local_44->field_0BF5);
      pCVar9 = thunk_FUN_00571240(pcVar22,iVar5);
      PaintBut(this_00,5,param_1,1,pCVar9,puVar27);
      break;
    case 0xb206:
      pcVar28 = thunk_FUN_0052a7b0;
      pCVar9 = thunk_FUN_00571240(s_BUT_MFFRAMES_007c2384,0);
      pCVar11 = thunk_FUN_00571240(s_BUT_MFTABS_007c2374,0);
      PaintTab(this_00,5,param_1,1,pCVar11,pCVar9,pcVar28);
      break;
    case 0xb207:
      local_44->field_09D4 = **(undefined1 **)(param_1 + 0x14);
      thunk_FUN_005097b0();
      break;
    case 0xb20b:
      pcVar28 = thunk_FUN_0052a7b0;
      pCVar9 = thunk_FUN_00571240(s_BUT_MFFRAMES_007c2384,0);
      PaintTab(this_00,5,param_1,1,s_BUT_RCTTYPESI_007c2364,pCVar9,pcVar28);
      break;
    case 0xb20e:
      uVar8 = 0xffffffff;
      uVar3 = 0;
      do {
        if ((&local_44->field_0BA2)[uVar3] != '\0') {
          uVar8 = uVar8 + 1;
        }
      } while ((uVar8 != *(ushort *)(param_1 + 0x16)) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (5 < uVar3) {
        uVar3 = 0;
      }
      puVar27 = &LAB_0040420f;
      iVar5 = 0;
      pcVar22 = thunk_FUN_00529590((&local_44->field_0BA2)[uVar3],local_44->field_0B99);
      pCVar9 = thunk_FUN_00571240(pcVar22,iVar5);
      PaintBut(this_00,3,param_1,6,pCVar9,puVar27);
      break;
    case 0xb210:
      uVar8 = 0xffffffff;
      uVar3 = 0;
      do {
        if ((&local_44->field_0BFE)[uVar3] != '\0') {
          uVar8 = uVar8 + 1;
        }
      } while ((uVar8 != *(ushort *)(param_1 + 0x16)) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (5 < uVar3) {
        uVar3 = 0;
      }
      puVar27 = &LAB_0040420f;
      iVar5 = 0;
      pcVar22 = thunk_FUN_00529590((&local_44->field_0BFE)[uVar3],local_44->field_0BF5);
      pCVar9 = thunk_FUN_00571240(pcVar22,iVar5);
      PaintBut(this_00,5,param_1,6,pCVar9,puVar27);
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
      local_44->field_012C = 0;
      if (local_44->field_0C52 == '\0') {
        thunk_FUN_004f8020(local_44,'\0',0);
      }
      this_00->field_012C = 1;
      pbVar6 = &local_2d;
      local_2d = (byte)(*(int *)(param_1 + 0x10) - 0xb211U >> 1);
      puVar21 = (undefined4 *)0x2a;
      goto cf_common_exit_004FCF18;
    case 0xb212:
    case 0xb216:
      switch(local_44->field_0BF5) {
      case 0x5f:
        pcVar22 = s_BUT_TBDN_007c22f4;
LAB_004fd533:
        pcVar28 = thunk_FUN_00529fe0;
        pCVar9 = thunk_FUN_00571240(pcVar22,0);
        PaintBut(this_00,5,param_1,1,pCVar9,pcVar28);
        break;
      case 100:
      case 0x65:
      case 0x6d:
        PaintBut(local_44,5,param_1,1,s_BUT_MINUSSI_007c2300,thunk_FUN_00529fe0);
      }
      break;
    case 0xb214:
    case 0xb218:
      switch(local_44->field_0BF5) {
      case 0x5f:
        pcVar22 = s_BUT_TBUP_007c22d8;
        goto LAB_004fd533;
      case 100:
      case 0x65:
      case 0x6d:
        PaintBut(local_44,5,param_1,1,s_BUT_PLUSSI_007c22e4,thunk_FUN_00529fe0);
      }
      break;
    case 0xb21a:
    case 0xb21c:
      if (local_44->field_0BF5 != 0x6d) break;
      local_c = (undefined1 *)CONCAT31(local_c._1_3_,1);
      piVar18 = *(int **)(param_1 + 0x18);
      switch(*(undefined4 *)(param_1 + 0x14)) {
      case 0:
        local_c = (undefined1 *)CONCAT31(local_c._1_3_,1);
        break;
      case 1:
      case 3:
        local_c = (undefined1 *)
                  CONCAT31(local_c._1_3_,(&local_44->field_0xc0f)[uVar8 - 0xb21a >> 1] != '\x03');
        break;
      case 2:
        local_c = (undefined1 *)((uint)local_c._1_3_ << 8);
      }
      iVar5 = piVar18[1];
      iVar10 = DAT_00806734;
      if (local_44->field_0138 != 0) {
        iVar10 = local_44->field_00A8;
      }
      pbVar6 = (byte *)FUN_0070b3a0(local_44->field_09D5,(uint)local_c & 0xff);
      DibPut((undefined4 *)this_00->field_0194,*piVar18 - this_00->field_0050,iVar5 - iVar10,'\x01',
             pbVar6);
      uVar8 = this_00->field_015C;
      if ((int)uVar8 < 0) break;
      uVar13 = this_00->field_00A8;
      uVar20 = this_00->field_0050;
cf_common_exit_004FD606:
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,uVar8,0xffffffff,uVar20,uVar13);
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
      local_44->field_012C = 0;
      if (local_44->field_0B64 == '\0') {
        thunk_FUN_004f8020(local_44,'\x01',0);
      }
      this_00->field_012C = 1;
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
      goto cf_common_exit_004FCF18;
    case 0xb230:
      cVar23 = local_44->field_0BCF;
      pcVar22 = s_BUT_BEHREPAIR0_007c2350;
      goto cf_common_exit_004FD1D2;
    case 0xb231:
      pcVar22 = s_BUT_BEHREPAIR20_007c233c;
      if (DAT_0080874e != '\x03') {
        pcVar22 = s_BUT_BEHREPAIR50_007c2328;
      }
      cVar23 = local_44->field_0BD0;
      goto cf_common_exit_004FD1D2;
    case 0xb232:
      pcVar22 = s_BUT_BEHREPAIR50_007c2328;
      if (DAT_0080874e != '\x03') {
        pcVar22 = s_BUT_BEHREPAIR80_007c2314;
      }
      cVar23 = local_44->field_0BD1;
cf_common_exit_004FD1D2:
      uVar8 = CONCAT31(uVar14,cVar23 == '\x03');
      pCVar9 = thunk_FUN_00571240(pcVar22,0);
      PaintBBut(this_00,3,param_1,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar9,uVar8);
      break;
    case 0xb233:
      uVar8 = CONCAT31(uVar14,local_44->field_0BD2 == '\x03');
      pCVar9 = thunk_FUN_00571240(s_BUT_BEHREPAIR80_007c2314,0);
      PaintBBut(this_00,3,param_1,6,pCVar9,uVar8);
    }
    goto cf_common_exit_004FD60B;
  }
  if (0xb16e < uVar8) {
    if (DAT_00808784 != 0) goto cf_common_exit_004FD60B;
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto cf_common_exit_004FD60B;
    local_44->field_012C = 0;
    if (local_44->field_0C52 == '\0') {
      thunk_FUN_004f8020(local_44,'\0',0);
    }
    this_00->field_012C = 1;
    pbVar6 = (byte *)((int)&local_14 + 2);
    local_14 = CONCAT13(*(char *)(param_1 + 0x10) + -0x6f,(int3)local_14) & 0xff00ffff;
    puVar21 = (undefined4 *)0x27;
    goto cf_common_exit_004FCF18;
  }
  if (uVar8 < 0xb10f) {
    if (uVar8 == 0xb10e) {
      if (DAT_00808784 == 0) {
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          puVar21 = (undefined4 *)&local_44->field_0x18;
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar21 = 0;
            puVar21 = puVar21 + 1;
          }
          local_44->field_0028 = 0xa209;
          local_44->field_0020 = 0x101;
          local_44->field_0024 = 3;
          AppClassTy::PostNextMessage
                    ((AppClassTy *)&DAT_00807620,(undefined4 *)&local_44->field_0x18);
          thunk_FUN_005252c0(0xae);
        }
      }
      goto cf_common_exit_004FD60B;
    }
    if (0xb106 < uVar8) {
      switch(uVar8) {
      case 0xb107:
        puVar27 = &LAB_00402be4;
        pCVar9 = thunk_FUN_00571240(s_BUT_MAPSMIL_007c1cc4,0);
        PaintBut(this_00,4,param_1,6,pCVar9,puVar27);
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
            puVar21 = (undefined4 *)&local_44->field_0x18;
            for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar21 = 0;
              puVar21 = puVar21 + 1;
            }
            local_44->field_0028 = 0xa206;
            local_44->field_0020 = 0x101;
            local_44->field_0024 = 3;
            AppClassTy::PostNextMessage
                      ((AppClassTy *)&DAT_00807620,(undefined4 *)&local_44->field_0x18);
            thunk_FUN_005252c0(0xae);
          }
        }
        break;
      case 0xb109:
        puVar27 = &LAB_00404a66;
        pcVar22 = s_BUT_MAPZIN_007c1ca4;
        goto cf_common_exit_004FBCF3;
      case 0xb10a:
        if (DAT_00808784 == 0) {
          if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            puVar21 = (undefined4 *)&local_44->field_0x18;
            for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar21 = 0;
              puVar21 = puVar21 + 1;
            }
            local_44->field_0028 = 0xa207;
            local_44->field_0020 = 0x101;
            local_44->field_0024 = 3;
            AppClassTy::PostNextMessage
                      ((AppClassTy *)&DAT_00807620,(undefined4 *)&local_44->field_0x18);
            thunk_FUN_005252c0(0xae);
          }
        }
        break;
      case 0xb10b:
        puVar27 = &LAB_00404a66;
        pCVar9 = thunk_FUN_00571240(s_BUT_MAPZOUT_007c1c84,0);
        PaintBut(this_00,4,param_1,6,pCVar9,puVar27);
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
            puVar21 = (undefined4 *)&local_44->field_0x18;
            for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar21 = 0;
              puVar21 = puVar21 + 1;
            }
            local_44->field_0028 = 0xa208;
            local_44->field_0020 = 0x101;
            local_44->field_0024 = 3;
            AppClassTy::PostNextMessage
                      ((AppClassTy *)&DAT_00807620,(undefined4 *)&local_44->field_0x18);
            thunk_FUN_005252c0(0xae);
          }
        }
        break;
      case 0xb10d:
        puVar27 = &LAB_00404a66;
        pCVar9 = thunk_FUN_00571240(s_BUT_MAPTLFT_007c1c64,0);
        PaintBut(this_00,4,param_1,6,pCVar9,puVar27);
      }
      goto cf_common_exit_004FD60B;
    }
    if (uVar8 == 0xb106) {
      if (*(int *)(param_1 + 0x14) == 3) {
        DAT_00807327 = DAT_00807327 | 4;
      }
      else {
        DAT_00807327 = DAT_00807327 & 0xfb;
      }
      goto LAB_004fc53f;
    }
    if (0x60 < uVar8) {
      if (uVar8 != 0x61) {
        if (uVar8 == 0xb104) {
          if (*(int *)(param_1 + 0x14) == 3) {
            DAT_00807327 = DAT_00807327 | 2;
          }
          else {
            DAT_00807327 = DAT_00807327 & 0xfd;
          }
          *(uint *)((int)DAT_00807598 + 0x418) = (uint)DAT_00807327;
          thunk_FUN_005252c0(0xae);
          goto cf_common_exit_004FD60B;
        }
        if (uVar8 != 0xb105) goto cf_common_exit_004FD60B;
        puVar27 = &LAB_00402be4;
        pcVar22 = s_BUT_MAPSCIV_007c1ce4;
        goto cf_common_exit_004FBCF3;
      }
      local_8 = -1;
      local_c = (undefined1 *)0x1;
      if (local_44->field_023F == 2) goto cf_common_exit_004FD60B;
      iVar5 = 0;
      uVar8 = (uint)*(ushort *)(param_1 + 0x18);
      local_18 = (uint)*(ushort *)(param_1 + 0x1a);
      do {
        iVar10 = (int)(short)iVar5;
        local_2c = (&local_44->field_003C)[iVar10];
        local_28 = *(int *)(&local_44->field_0x94 + iVar10 * 4);
        local_24 = (&local_44->field_0068)[iVar10];
        local_20 = (&local_44->field_00C0)[iVar10];
        if ((((int)uVar8 < local_2c) || (local_24 + local_2c <= (int)uVar8)) ||
           (((int)local_18 < local_28 || (local_20 + local_28 <= (int)local_18)))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        iVar10 = iVar5;
      } while ((!bVar2) && (iVar5 = iVar5 + 1, iVar10 = local_8, (short)iVar5 < 0xb));
      local_8 = iVar10;
      sVar1 = (short)local_8;
      iVar5 = (int)(short)local_8;
      switch(iVar5) {
      case 0:
      case 2:
      case 10:
        if ((DAT_00801684 == (int *)0x0) || (*(short *)((int)DAT_00801684 + 0x172) == 2)) {
          puVar17 = (undefined1 *)0x1;
        }
        else {
          puVar17 = (undefined1 *)0x0;
        }
        if ((DAT_00801678 != (int *)0x0) && (*(short *)((int)DAT_00801678 + 0x172) != 2)) {
          puVar17 = (undefined1 *)0x0;
        }
        if ((DAT_008016ec != (int *)0x0) && (*(short *)((int)DAT_008016ec + 0x172) != 2)) {
          puVar17 = (undefined1 *)0x0;
        }
        piVar18 = DAT_0080168c;
        if ((DAT_00802a48 != (int *)0x0) && (*(short *)((int)DAT_00802a48 + 0x172) != 2)) {
          puVar17 = (undefined1 *)0x0;
        }
        break;
      default:
        puVar17 = local_c;
        goto LAB_004fbe73;
      case 6:
      case 8:
      case 9:
        if ((DAT_008016e8 == (int *)0x0) || (*(short *)((int)DAT_008016e8 + 0x172) == 2)) {
          puVar17 = (undefined1 *)0x1;
        }
        else {
          puVar17 = (undefined1 *)0x0;
        }
        if ((DAT_0080167c != (int *)0x0) && (*(short *)((int)DAT_0080167c + 0x172) != 2)) {
          puVar17 = (undefined1 *)0x0;
        }
        if ((DAT_00801698 != (int *)0x0) && (*(short *)((int)DAT_00801698 + 0x172) != 2)) {
          puVar17 = (undefined1 *)0x0;
        }
        piVar18 = DAT_00801680;
        if ((DAT_00802a44 != (int *)0x0) && (*(short *)((int)DAT_00802a44 + 0x172) != 2)) {
          puVar17 = (undefined1 *)0x0;
        }
      }
      if ((piVar18 != (int *)0x0) && (*(short *)((int)piVar18 + 0x172) != 2)) {
        puVar17 = (undefined1 *)0x0;
      }
LAB_004fbe73:
      local_14 = uVar8;
      if (puVar17 != (undefined1 *)0x0) {
        switch(iVar5) {
        case 0:
        case 8:
          thunk_FUN_004f8020(local_44,(short)local_8 == 0,1);
          break;
        case 2:
        case 6:
          if (DAT_0080874e != '\x03') {
            local_1c = &local_44->field_0B63;
            if ((short)local_8 != 2) {
              local_1c = &local_44->field_0C51;
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
              local_2c = (&local_44->field_003C)[iVar5] + 7;
              local_24 = 0xe;
              local_20 = 0x1b;
              sVar16 = 0;
              do {
                local_28 = sVar16 * 0x1d + 6 + *(int *)(&local_44->field_0x94 + (short)local_8 * 4);
                if (((((int)uVar8 < local_2c) ||
                     ((&local_44->field_003C)[iVar5] + 0x15 <= (int)uVar8)) ||
                    ((int)local_18 < local_28)) || (local_28 + 0x1b <= (int)local_18)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  if (*local_1c == '\x01') {
                    if ((local_1c[sVar16 + 0x2a] == '\0') && (local_1c[2] == '\x01')) {
                      thunk_FUN_004f8020(local_44,(short)local_8 == 2,1);
                      SetNewDeep(this_00,sVar1 != 2,(char)sVar16);
                    }
                  }
                  else {
                    thunk_FUN_004f8020(local_44,(short)local_8 == 2,1);
                    SetNewDeep(this_00,sVar1 != 2,(char)sVar16);
                  }
                  break;
                }
                sVar16 = sVar16 + 1;
              } while (sVar16 < 5);
            }
          }
          break;
        case 3:
        case 5:
          if (DAT_0080874e == '\x03') {
            local_1c = &local_44->field_0B63;
            if ((short)local_8 != 3) {
              local_1c = &local_44->field_0C51;
            }
            bVar15 = 0xff;
            local_c = (undefined1 *)0xff;
            if (*local_1c != '\0') {
              if ((short)local_8 == 3) {
                if ((((((DAT_00801684 != (int *)0x0) && (*(short *)((int)DAT_00801684 + 0x172) != 2)
                       ) || ((DAT_00801678 != (int *)0x0 &&
                             (*(short *)((int)DAT_00801678 + 0x172) != 2)))) ||
                     ((DAT_008016ec != (int *)0x0 && (*(short *)((int)DAT_008016ec + 0x172) != 2))))
                    || ((DAT_00802a48 != (int *)0x0 && (*(short *)((int)DAT_00802a48 + 0x172) != 2))
                       )) || ((DAT_0080168c != (int *)0x0 &&
                              (*(short *)((int)DAT_0080168c + 0x172) != 2)))) break;
                iVar5 = local_44->field_00A0 + 0x40;
                if (((int)local_18 < iVar5) &&
                   (((local_44->field_00A0 + 10 < (int)local_18 &&
                     (iVar10 = (local_44->field_0048 + 0xb + iVar5) - uVar8, iVar10 < (int)local_18)
                     ) && ((int)local_18 < iVar10 + 0x21)))) {
                  bVar15 = 4 - (char)((int)(iVar5 - local_18) / 0xb);
                  local_c = (undefined1 *)(uint)bVar15;
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
                iVar5 = local_44->field_00A8 + 0xb;
                if ((iVar5 < (int)local_18) &&
                   ((((int)local_18 < local_44->field_00A8 + 0x41 &&
                     (iVar10 = (iVar5 - local_44->field_0050) + -0x87 + uVar8,
                     (int)local_18 < iVar10)) && (iVar10 + -0x21 < (int)local_18)))) {
                  uVar8 = (int)(local_18 - iVar5) / 0xb;
                  bVar15 = (byte)uVar8;
                  local_c = (undefined1 *)(uVar8 & 0xff);
                }
              }
              puVar17 = local_c;
              if (bVar15 != 0xff) {
                if (*local_1c == '\x01') {
                  if (((local_c + 0x2a)[(int)local_1c] == '\0') && (local_1c[2] == '\x01')) {
                    thunk_FUN_004f8020(local_44,(short)local_8 == 3,1);
                    SetNewDeep(this_00,sVar1 != 3,(char)puVar17);
                  }
                }
                else {
                  thunk_FUN_004f8020(local_44,(short)local_8 == 3,1);
                  SetNewDeep(this_00,sVar1 != 3,(char)local_c);
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
                iVar10 = thunk_FUN_004f19d0('\x01',(Global_sub_004F19D0_param_2Enum)iVar5,&local_2c,
                                            &local_28);
                if (iVar10 != 0) {
                  local_2c = local_2c + this_00->field_0060;
                  local_28 = local_28 + this_00->field_00B8;
                  if (((((int)uVar8 < local_2c) || (local_24 + local_2c <= (int)uVar8)) ||
                      ((int)local_18 < local_28)) || (local_20 + local_28 <= (int)local_18)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  iVar10 = iVar5;
                  if (bVar2) break;
                }
                iVar5 = iVar5 + 1;
                iVar10 = local_8;
              } while ((short)iVar5 < 6);
              local_8 = iVar10;
              if (-1 < (short)local_8) {
                STAllPlayersC::SetActivePanel(DAT_007fa174,1,(short)local_8 + 1,1);
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
                iVar10 = thunk_FUN_004f19d0('\0',(Global_sub_004F19D0_param_2Enum)iVar5,&local_2c,
                                            &local_28);
                if (iVar10 != 0) {
                  local_2c = local_2c + this_00->field_0064;
                  local_28 = local_28 + this_00->field_00BC;
                  if ((((int)uVar8 < local_2c) || (local_24 + local_2c <= (int)uVar8)) ||
                     (((int)local_18 < local_28 || (local_20 + local_28 <= (int)local_18)))) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  iVar10 = iVar5;
                  if (bVar2) break;
                }
                iVar5 = iVar5 + 1;
                iVar10 = local_8;
              } while ((short)iVar5 < 6);
              local_8 = iVar10;
              if (-1 < (short)local_8) {
                STAllPlayersC::SetActivePanel(DAT_007fa174,0,(short)local_8 + 1,1);
              }
            }
          }
        }
      }
      goto cf_common_exit_004FD60B;
    }
    if (uVar8 == 0x60) {
      local_8 = 0;
      local_1c = (char *)CONCAT22(local_1c._2_2_,*(undefined2 *)(param_1 + 0x18));
      local_40 = CONCAT22(local_40._2_2_,*(undefined2 *)(param_1 + 0x1a));
      if (local_44->field_023F == 1) {
        local_c = (undefined1 *)&local_44->field_0204;
        local_18 = 0;
        local_3c = 5;
        do {
          puVar17 = (undefined1 *)0x0;
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
              puVar17 = local_c + 0x118;
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
                  puVar17 = local_c;
                }
              }
              else if ((DAT_00802a44 != (int *)0x0) && (*(short *)((int)DAT_00802a44 + 0x172) == 2))
              {
                if (DAT_0080874e == '\x03') goto LAB_004fba8d;
                goto LAB_004fbaa0;
              }
            }
          }
          if (puVar17 != (undefined1 *)0x0) {
            piVar18 = (int *)(puVar17 + 4);
            local_14 = 10;
            do {
              if (piVar18[5] != 0) {
                uVar8 = (uint)local_1c & 0xffff;
                uVar13 = local_40 & 0xffff;
                if (((((int)uVar8 < piVar18[-1]) || (piVar18[1] + piVar18[-1] <= (int)uVar8)) ||
                    ((int)uVar13 < *piVar18)) || (piVar18[2] + *piVar18 <= (int)uVar13)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if ((bVar2) &&
                   ((piVar18[3] == 0 ||
                    (bVar2 = FUN_006b55c0(piVar18[3],piVar18[4],uVar8 - piVar18[-1],
                                          uVar13 - *piVar18), CONCAT31(extraout_var_00,bVar2) != 0))
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
      if (this_00->field_0144 != local_8) {
        if (this_00->field_0144 != 0) {
          this_00->field_0028 = 0x4202;
          *(undefined2 *)&this_00->field_0x2c = 0;
          this_00->field_002E = 2;
          this_00->field_0030 = this_00->field_0144;
          (**(code **)*DAT_00802a30)(&this_00->field_0x18);
        }
        this_00->field_0144 = local_8;
        if (local_8 != 0) {
          this_00->field_0028 = 0x4201;
          *(undefined2 *)&this_00->field_0x2c = 0;
          this_00->field_002E = 2;
          this_00->field_0030 = this_00->field_0144;
          (**(code **)*DAT_00802a30)(&this_00->field_0x18);
        }
      }
      if (this_00->field_023F == 1) {
        local_28 = this_00->field_00A4;
        local_2c = this_00->field_004C;
        local_24 = this_00->field_0078;
        local_20 = this_00->field_00D0;
        if (DAT_00808784 == 0) {
          if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            uVar8 = (uint)local_1c & 0xffff;
            uVar13 = local_40 & 0xffff;
            if (((((int)uVar8 < local_2c) || (local_24 + local_2c <= (int)uVar8)) ||
                ((int)uVar13 < local_28)) || (local_20 + local_28 <= (int)uVar13)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              iVar5 = FUN_006e68c0(DAT_00807598,(uVar8 - local_2c) + -5,
                                   (uVar13 - this_00->field_00A4) + -7,&local_34,&local_38);
              if (this_00->field_013C != 0) {
                if (iVar5 == 0) {
                  this_00->field_013C = 0;
                }
                else {
                  thunk_FUN_004ab470(local_34,local_38);
                }
              }
              if ((this_00->field_0140 != 0) && (iVar5 == 0)) {
                this_00->field_0140 = 0;
              }
              goto cf_common_exit_004FD60B;
            }
          }
        }
      }
      this_00->field_0140 = 0;
      this_00->field_013C = 0;
      goto cf_common_exit_004FD60B;
    }
    switch(uVar8) {
    case 0:
      local_44->field_0253 = local_44->field_0253 + 1;
      PaintTV(local_44);
      PaintNewDeep(this_00);
      PaintSMap(this_00);
      PlayBrief(this_00,(int)unaff_EDI);
      bVar15 = 0;
      local_c = (undefined1 *)((uint)local_c & 0xffffff00);
      uVar4 = extraout_EDX_00;
      do {
        uVar8 = (uint)local_c & 0xff;
        if ((&this_00->field_0xb4f)[uVar8] != '\0') {
          if (((bVar15 < 5) || (bVar15 == 0xd)) || (bVar15 == 0xe)) {
            switch(uVar8) {
            case 0:
              Update1Panel(this_00);
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
              Update5Panel(this_00);
              uVar4 = extraout_EDX_15;
              break;
            case 0xd:
            case 0xe:
              UpdateStackPanel(this_00,CONCAT31((int3)((uint)uVar4 >> 8),bVar15 - 0xd));
              uVar4 = extraout_EDX_16;
            }
          }
          else {
            if ((bVar15 == 5) && (DAT_008016e8 != (int *)0x0)) {
              (**(code **)(*DAT_008016e8 + 0x1c))();
              uVar4 = extraout_EDX_01;
            }
            if ((bVar15 == 6) && (DAT_0080167c != (int *)0x0)) {
              (**(code **)(*DAT_0080167c + 0x1c))();
              uVar4 = extraout_EDX_02;
            }
            if ((bVar15 == 7) && (DAT_00801684 != (int *)0x0)) {
              (**(code **)(*DAT_00801684 + 0x1c))();
              uVar4 = extraout_EDX_03;
            }
            if ((bVar15 == 8) && (DAT_00801698 != (int *)0x0)) {
              (**(code **)(*DAT_00801698 + 0x20))();
              uVar4 = extraout_EDX_04;
            }
            if ((bVar15 == 9) && (DAT_00802a44 != (int *)0x0)) {
              (**(code **)(*DAT_00802a44 + 0x20))();
              uVar4 = extraout_EDX_05;
            }
            if ((bVar15 == 10) && (DAT_00801678 != (int *)0x0)) {
              (**(code **)(*DAT_00801678 + 0x20))();
              uVar4 = extraout_EDX_06;
            }
            if ((bVar15 == 0xb) && (DAT_00801680 != (int *)0x0)) {
              (**(code **)(*DAT_00801680 + 0x1c))();
              uVar4 = extraout_EDX_07;
            }
            if ((bVar15 == 0xf) && (DAT_00802a48 != (int *)0x0)) {
              (**(code **)(*DAT_00802a48 + 0x20))();
              uVar4 = extraout_EDX_08;
            }
            if ((bVar15 == 0x10) && (DAT_0080168c != (int *)0x0)) {
              (**(code **)(*DAT_0080168c + 0x20))();
              uVar4 = extraout_EDX_09;
            }
            if ((bVar15 == 0x11) && (DAT_008016ec != (int *)0x0)) {
              (**(code **)(*DAT_008016ec + 0x20))();
              uVar4 = extraout_EDX_10;
            }
            if ((bVar15 == 0x12) && (DAT_00801690 != (void *)0x0)) {
              thunk_FUN_00515180(DAT_00801690,'\x06');
              thunk_FUN_00515180(DAT_00801690,'\x05');
              uVar4 = extraout_EDX_11;
            }
          }
          (&this_00->field_0xb4f)[uVar8] = 0;
        }
        bVar15 = bVar15 + 1;
        local_c = (undefined1 *)CONCAT31(local_c._1_3_,bVar15);
      } while (bVar15 < 0x14);
      if (this_00->field_023F == 3) {
        bVar2 = false;
        bVar15 = 0;
        piVar18 = (int *)&this_00->field_0x94;
        do {
          iVar5 = this_00->field_0120 + -0x9b + this_00->field_0128;
          if ((bVar15 == 1) || (bVar15 == 7)) {
            iVar5 = iVar5 + this_00->field_00C0;
          }
          if (iVar5 < *piVar18) {
            *piVar18 = *piVar18 + -0xf;
          }
          iVar5 = this_00->field_0120 + -0x9b + this_00->field_0128;
          if ((bVar15 == 1) || (iVar10 = iVar5, bVar15 == 7)) {
            iVar10 = iVar5 + this_00->field_00C0;
          }
          if (*piVar18 <= iVar10) {
            if ((bVar15 == 1) || (bVar15 == 7)) {
              iVar5 = iVar5 + this_00->field_00C0;
            }
            *piVar18 = iVar5;
            bVar2 = true;
          }
          bVar15 = bVar15 + 1;
          piVar18 = piVar18 + 1;
        } while (bVar15 < 0xb);
        if (bVar2) {
          thunk_FUN_004a9b60(this_00->field_011C,this_00->field_0120,this_00->field_0124,
                             this_00->field_0128 + -0x9b);
          this_00->field_023F = 5;
          if (DAT_0080731a == 0) {
            this_00->field_023F = 1;
            ShiftControls(this_00,1);
          }
          else {
            puVar17 = &this_00->field_02EC;
            puVar21 = &this_00->field_02EE;
            local_c = (undefined1 *)0x2;
            do {
              puVar26 = (undefined4 *)0x0;
              iVar10 = 0;
              iVar5 = 1;
              bVar15 = 0;
              uVar8 = 6;
              pbVar6 = (byte *)thunk_FUN_00526100((undefined1 *)0x0,0);
              puVar7 = Library::Ourlib::MFRLOAD::mfRLoad
                                 (DAT_00806794,CASE_1F,pbVar6,uVar8,bVar15,iVar5,iVar10,puVar26);
              puVar21[-3] = puVar7;
              puVar17[-2] = (char)*puVar7;
              *puVar17 = 3;
              *puVar21 = this_00->field_0038;
              puVar17 = puVar17 + 1;
              puVar21 = puVar21 + 1;
              local_c = (undefined1 *)((int)local_c + -1);
            } while (local_c != (undefined1 *)0x0);
            puVar21 = &this_00->field_0D53;
            puVar17 = &this_00->field_0D47;
            local_8 = 2;
            do {
              local_c = (undefined1 *)0x6;
              do {
                puVar26 = (undefined4 *)0x0;
                iVar10 = 0;
                iVar5 = 1;
                bVar15 = 0;
                uVar8 = 6;
                pbVar6 = (byte *)thunk_FUN_00526100((undefined1 *)0x0,0);
                puVar7 = Library::Ourlib::MFRLOAD::mfRLoad
                                   (DAT_00806794,CASE_1F,pbVar6,uVar8,bVar15,iVar5,iVar10,puVar26);
                puVar21[-0x12] = puVar7;
                puVar17[-0xc] = (char)*puVar7;
                *puVar17 = 3;
                *puVar21 = this_00->field_0038;
                puVar21 = puVar21 + 1;
                puVar17 = puVar17 + 1;
                local_c = (undefined1 *)((int)local_c + -1);
              } while (local_c != (undefined1 *)0x0);
              local_8 = local_8 + -1;
            } while (local_8 != 0);
            local_c = (undefined1 *)0x0;
            local_8 = 0;
          }
        }
        thunk_FUN_0054b6d0((int)DAT_00802a30);
        bVar15 = 0;
        puVar12 = &this_00->field_0148;
        do {
          if (-1 < (int)*puVar12) {
            Library::DKW::DDX::FUN_006b3640
                      (DAT_008075a8,*puVar12,0xffffffff,puVar12[-0x43],puVar12[-0x2d]);
          }
          bVar15 = bVar15 + 1;
          puVar12 = puVar12 + 1;
        } while (bVar15 < 0xb);
      }
      else if (this_00->field_023F == 4) {
        bVar15 = 0;
        piVar18 = (int *)&this_00->field_0x94;
        do {
          iVar5 = this_00->field_0120 + this_00->field_0128;
          if ((bVar15 == 1) || (bVar15 == 7)) {
            iVar5 = iVar5 + this_00->field_00C0;
          }
          if (*piVar18 < iVar5) {
            *piVar18 = *piVar18 + 0xf;
          }
          iVar5 = this_00->field_0120 + this_00->field_0128;
          if ((bVar15 == 1) || (iVar10 = iVar5, bVar15 == 7)) {
            iVar10 = iVar5 + this_00->field_00C0;
          }
          if (iVar10 <= *piVar18) {
            if ((bVar15 == 1) || (bVar15 == 7)) {
              iVar5 = iVar5 + this_00->field_00C0;
            }
            *piVar18 = iVar5;
            this_00->field_023F = 2;
          }
          bVar15 = bVar15 + 1;
          piVar18 = piVar18 + 1;
        } while (bVar15 < 0xb);
        thunk_FUN_0054b6d0((int)DAT_00802a30);
        bVar15 = 0;
        puVar12 = &this_00->field_0148;
        do {
          if (-1 < (int)*puVar12) {
            Library::DKW::DDX::FUN_006b3640
                      (DAT_008075a8,*puVar12,0xffffffff,puVar12[-0x43],puVar12[-0x2d]);
          }
          bVar15 = bVar15 + 1;
          puVar12 = puVar12 + 1;
        } while (bVar15 < 0xb);
      }
      if (DAT_0080c4d3 == 3) {
        if ((int)this_00->field_00F0 < (int)this_00->field_0120) {
          this_00->field_00F0 = this_00->field_00F0 + 10;
        }
        if ((int)this_00->field_0120 <= (int)this_00->field_00F0) {
          this_00->field_00F0 = this_00->field_0120;
          DAT_0080c4d3 = 1;
        }
        uVar8 = this_00->field_00F0;
        uVar13 = this_00->field_00EC;
        uVar20 = this_00->field_0174;
LAB_004fb69f:
        Library::DKW::DDX::FUN_006b3640(DAT_008075a8,uVar20,0xffffffff,uVar13,uVar8);
      }
      else if (DAT_0080c4d3 == 4) {
        if ((int)(this_00->field_0120 - this_00->field_00F8) < (int)this_00->field_00F0) {
          this_00->field_00F0 = this_00->field_00F0 + -10;
        }
        iVar5 = this_00->field_0120 - this_00->field_00F8;
        if ((int)this_00->field_00F0 <= iVar5) {
          this_00->field_00F0 = iVar5;
          DAT_0080c4d3 = 2;
        }
        uVar8 = this_00->field_00F0;
        uVar13 = this_00->field_00EC;
        uVar20 = this_00->field_0174;
        goto LAB_004fb69f;
      }
      switch(DAT_0080c4f7) {
      case 1:
        uVar8 = *(int *)&this_00->field_0x94 - this_00->field_0118;
        if (this_00->field_0110 != uVar8) {
          this_00->field_0110 = uVar8;
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,this_00->field_017C,0xffffffff,this_00->field_010C,uVar8);
          uVar8 = this_00->field_0110 - this_00->field_0108;
          if (this_00->field_0100 != uVar8) {
LAB_004fb8d0:
            this_00->field_0100 = uVar8;
            goto LAB_004fb8d7;
          }
        }
        break;
      case 2:
        uVar8 = *(uint *)&this_00->field_0x94;
        if (this_00->field_0110 != uVar8) {
          this_00->field_0110 = uVar8;
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,this_00->field_017C,0xffffffff,this_00->field_010C,uVar8);
          uVar8 = this_00->field_0110 - this_00->field_0108;
          if (this_00->field_0100 != uVar8) goto LAB_004fb8d0;
        }
        break;
      case 3:
        if (*(int *)&this_00->field_0x94 - this_00->field_0118 < (int)this_00->field_0110) {
          this_00->field_0110 = this_00->field_0110 + -10;
        }
        iVar5 = *(int *)&this_00->field_0x94 - this_00->field_0118;
        if ((int)this_00->field_0110 <= iVar5) {
          this_00->field_0110 = iVar5;
          DAT_0080c4f7 = 1;
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_017C,0xffffffff,this_00->field_010C,
                   this_00->field_0110);
        if (DAT_0080c4f7 == 2) {
          FUN_006b3af0(DAT_008075a8,this_00->field_017C);
        }
        iVar5 = this_00->field_0110 - this_00->field_0108;
        if (iVar5 < (int)this_00->field_0100) {
          this_00->field_0100 = this_00->field_0100 + -10;
        }
        if ((int)this_00->field_0100 <= iVar5) {
          this_00->field_0100 = iVar5;
        }
        uVar8 = this_00->field_0100;
        uVar13 = this_00->field_00FC;
        uVar20 = this_00->field_0178;
        goto LAB_004fb8ee;
      case 4:
        if ((int)this_00->field_0110 < *(int *)&this_00->field_0x94) {
          this_00->field_0110 = this_00->field_0110 + 10;
        }
        if (*(int *)&this_00->field_0x94 <= (int)this_00->field_0110) {
          this_00->field_0110 = *(int *)&this_00->field_0x94;
          DAT_0080c4f7 = 2;
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_017C,0xffffffff,this_00->field_010C,
                   this_00->field_0110);
        iVar5 = this_00->field_0110 - this_00->field_0108;
        if ((int)this_00->field_0100 < iVar5) {
          this_00->field_0100 = this_00->field_0100 + 10;
        }
        if (iVar5 <= (int)this_00->field_0100) {
          this_00->field_0100 = iVar5;
        }
        uVar8 = this_00->field_0100;
LAB_004fb8d7:
        uVar13 = this_00->field_00FC;
        uVar20 = this_00->field_0178;
LAB_004fb8ee:
        Library::DKW::DDX::FUN_006b3640(DAT_008075a8,uVar20,0xffffffff,uVar13,uVar8);
      }
      bVar2 = FUN_006b33f0((int)DAT_008075a8,this_00->field_0178);
      if ((CONCAT31(extraout_var,bVar2) != 0) &&
         ((uint)(this_00->field_0247 + this_00->field_0243) <= (uint)this_00->field_09A0)) {
        FUN_006b3af0(DAT_008075a8,this_00->field_0178);
      }
      break;
    case 2:
      InitCPanel(local_44);
      break;
    case 3:
      DoneCPanel(local_44);
      break;
    case 5:
      puVar12 = &local_44->field_0148;
      local_d = 0;
      do {
        if (-1 < (int)*puVar12) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,*puVar12,0xffffffff,puVar12[-0x43],puVar12[-0x2d]);
        }
        local_d = local_d + 1;
        puVar12 = puVar12 + 1;
      } while (local_d < 0xb);
    }
    goto cf_common_exit_004FD60B;
  }
  switch(uVar8) {
  case 0xb10f:
    puVar27 = &LAB_00404a66;
    pcVar22 = s_BUT_MAPTRT_007c1c44;
cf_common_exit_004FBCF3:
    pCVar9 = thunk_FUN_00571240(pcVar22,0);
    PaintBut(this_00,4,param_1,6,pCVar9,puVar27);
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
    local_44->field_012C = 0;
    if (*(int *)(param_1 + 0x10) == 0xb110) {
      if (local_44->field_0B64 == '\0') {
        cVar23 = '\x01';
LAB_004fc9c0:
        thunk_FUN_004f8020(local_44,cVar23,0);
      }
    }
    else if (local_44->field_0C52 == '\0') {
      cVar23 = '\0';
      goto LAB_004fc9c0;
    }
    this_00->field_012C = 1;
    local_2e = *(int *)(param_1 + 0x14) == 3;
    pbVar6 = &local_2e;
    puVar21 = (undefined4 *)0x29;
    goto cf_common_exit_004FCF18;
  case 0xb112:
    puVar27 = &LAB_00404a52;
    pCVar9 = thunk_FUN_00571240(s_BUT_AIASS_007c1c18,0);
    PaintBut(this_00,4,param_1,1,pCVar9,puVar27);
    break;
  case 0xb113:
    if (*(int *)(param_1 + 0x14) == 3) {
      FUN_006e6500(DAT_00807598,&local_44->field_0227);
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
    pCVar9 = thunk_FUN_00571240(s_BUT_MAPDIR_007c1c24,0);
    PaintBut(this_00,4,param_1,6,pCVar9,puVar27);
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
    pCVar9 = thunk_FUN_00571240(s_BUT_SHOWUPD_007c23a4,0);
    PaintBut(this_00,3,param_1,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar9,pcVar28);
    break;
  case 0xb119:
    if (DAT_0080168c != (int *)0x0) {
      (**(code **)(*DAT_0080168c + 0x1c))(1);
    }
    break;
  case 0xb11a:
    pcVar28 = thunk_FUN_00529f90;
    pCVar9 = thunk_FUN_00571240(s_BUT_SHOWFRM_007c2394,0);
    PaintBut(this_00,3,param_1,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar9,pcVar28);
    break;
  case 0xb12a:
    pcVar28 = thunk_FUN_00529fe0;
    UVar24 = 0x274c;
    pCVar9 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
    PaintTxtBut(this_00,3,param_1,1,pCVar9,UVar24,pcVar28);
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
    local_44->field_012C = 0;
    if (local_44->field_0C52 == '\0') {
      thunk_FUN_004f8020(local_44,'\0',0);
    }
    this_00->field_012C = 1;
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
      this_00->field_0C11 = 1;
      puVar21 = (undefined4 *)0x17;
    }
    else {
      pbVar6 = local_68;
      local_68[0] = 7;
      this_00->field_0C11 = 0;
      puVar21 = (undefined4 *)0x17;
    }
    goto cf_common_exit_004FCF18;
  case 0xb12e:
    puVar27 = &LAB_00401249;
    UVar24 = 0x3aa5;
    uVar4 = 0;
    iVar5 = 1;
    pCVar9 = thunk_FUN_00571240(s_BUT_AUTO_007c23c0,0);
    pCVar9 = FUN_006f2c00(pCVar9,iVar5,uVar4);
    PaintTxtBut(this_00,5,param_1,1,pCVar9,UVar24,puVar27);
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
    local_44->field_012C = 0;
    if (local_44->field_0C52 == '\0') {
      thunk_FUN_004f8020(local_44,'\0',0);
    }
    this_00->field_012C = 1;
    pbVar6 = &local_d;
    local_d = *(char *)(param_1 + 0x10) - 0x2f;
    puVar21 = (undefined4 *)0x9;
    goto cf_common_exit_004FCF18;
  case 0xb13f:
    pcVar28 = thunk_FUN_00529fe0;
    UVar24 = 0x274c;
    pCVar9 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
    PaintTxtBut(this_00,5,param_1,1,pCVar9,UVar24,pcVar28);
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
    local_44->field_012C = 0;
    if (local_44->field_0C52 == '\0') {
      thunk_FUN_004f8020(local_44,'\0',0);
    }
    this_00->field_012C = 1;
    pbVar6 = (byte *)((int)&local_18 + 2);
    local_18 = CONCAT13(*(char *)(param_1 + 0x10) + -0x5f,CONCAT12(1,(undefined2)local_18));
    puVar21 = (undefined4 *)0x27;
cf_common_exit_004FCF18:
    thunk_FUN_0054edf0(puVar21,(undefined4 *)pbVar6,0,0xffffffff);
    thunk_FUN_005252c0(0xae);
  }
cf_common_exit_004FD60B:
  g_currentExceptionFrame = local_d0.previous;
  uVar4 = FUN_006e5fd0();
  return uVar4;
}

