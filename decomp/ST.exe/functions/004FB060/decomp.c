#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004046BA|004FB060; family_names=CPanelTy::GetMessage; ret4=2;
   direct_offsets={10:10,14:12,18:11,1c:6} */

int __thiscall CPanelTy::GetMessage(CPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  bool bVar2;
  CPanelTy *this_00;
  ushort uVar3;
  DWORD DVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  LPSTR pCVar8;
  LPSTR text;
  uint *puVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  dword dVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_06;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_07;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_15;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_16;
  undefined3 uVar14;
  byte bVar15;
  short sVar16;
  FrmPanelTy *pFVar17;
  short sVar18;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  undefined1 *puVar19;
  int *piVar20;
  uint *puVar21;
  uint uVar22;
  undefined4 *puVar23;
  char *pcVar24;
  undefined4 uVar25;
  char cVar26;
  UINT UVar27;
  int iVar28;
  undefined4 *puVar29;
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
  char *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  byte local_d;
  int *local_c;
  undefined4 local_8;

  local_44 = this;
  DVar4 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0038 = DVar4;
  local_d0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_d0;
  iVar5 = Library::MSVCRT::__setjmp3(local_d0.jumpBuffer,0);
  this_00 = local_44;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_d0.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel.cpp",0x75f,0,iVar5,"%s"
                                ,"CPanelTy::GetMessage");
    if (iVar11 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x75f);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar1 = message->id;
  if (MESS_CPANELTY_B174 < SVar1) {
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar14 = (undefined3)((uint)extraout_EDX >> 8);
    switch(SVar1) {
    case 0xb17f:
    case 0xb180:
    case 0xb181:
    case 0xb182:
    case 0xb183:
    case 0xb184:
      piVar20 = (message->arg1).ptr;
      iVar5 = DAT_00806734;
      if (local_44->field_0138 != 0) {
        iVar5 = local_44->field_00A8;
      }
      FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)local_44->field_0194,0,
                   *piVar20 - local_44->field_0050,piVar20[1] - iVar5,piVar20[2],piVar20[3],
                   (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a);
      if (this_00->field_0BFC == '\0') {
        bVar15 = *(byte *)((SVar1 - 0xa56e) + (int)this_00);
        if (bVar15 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = bVar15 + 6;
        }
      }
      else {
        uVar7 = (uint)*(byte *)((SVar1 - 0xa56e) + (int)this_00);
      }
      iVar5 = DAT_00806734;
      if (this_00->field_0138 != 0) {
        iVar5 = this_00->field_00A8;
      }
      local_1c = (char *)(piVar20[1] - iVar5);
      pbVar10 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0B17,uVar7
                                    );
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,*piVar20 - this_00->field_0050,
             (int)local_1c,'\x01',pbVar10);
      iVar5 = DAT_00806734;
      if (this_00->field_0138 != 0) {
        iVar5 = this_00->field_00A8;
      }
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,
                       (*piVar20 - this_00->field_0050) + 0x17,piVar20[1] - iVar5,piVar20[2] + -0x17
                       ,piVar20[3]);
      uVar25 = 2;
      iVar28 = -1;
      iVar5 = piVar20[2] + -0x17;
      iVar11 = 0;
      puVar21 = (uint *)&DAT_007c2310;
      puVar9 = (uint *)LoadResourceString(SVar1 - 0x6265,g_module_00807618);
      puVar9 = thunk_FUN_00540c40(this_00->field_01B8,puVar9,puVar21,iVar5);
      ccFntTy::WrStr(this_00->field_01B8,puVar9,iVar11,iVar28,uVar25);
      uVar7 = this_00->field_015C;
      if ((int)uVar7 < 0) break;
      uVar12 = this_00->field_00A8;
      uVar22 = this_00->field_0050;
      goto cf_common_exit_004FD606;
    case 0xb18f:
    case 0xb190:
    case 0xb191:
    case 0xb192:
    case 0xb193:
    case 0xb194:
      iVar5 = sub_005050B0(local_44,(char)message->id + 0x71);
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
        sub_004F8020(this_00,'\0',0);
      }
      pbVar10 = (byte *)((int)&local_8 + 2);
      this_00->field_012C = 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8 = CONCAT13((char)iVar5,CONCAT12(2,(short)local_8));
      puVar23 = (undefined4 *)0x27;
      goto cf_common_exit_004FCF18;
    case 0xb19f:
    case 0xb1a0:
    case 0xb1a1:
    case 0xb1a2:
    case 0xb1a3:
    case 0xb1a4:
      piVar20 = (message->arg1).ptr;
      uVar7 = thunk_FUN_00505070(local_44,(char)SVar1 + 0x61);
      iVar5 = DAT_00806734;
      if (this_00->field_0138 != 0) {
        iVar5 = this_00->field_00A8;
      }
      FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0,
                   *piVar20 - this_00->field_0050,piVar20[1] - iVar5,piVar20[2],piVar20[3],
                   (-(DAT_0080874e != '\x03') & 0xfdU) + 0x3d);
      if (-1 < (int)uVar7) {
        if ((uVar7 == 0) || ((message->arg0).u32 == 0)) {
          iVar5 = 1;
        }
        else {
          iVar5 = 0;
        }
        iVar11 = piVar20[1];
        iVar28 = DAT_00806734;
        if (this_00->field_0138 != 0) {
          iVar28 = this_00->field_00A8;
        }
        pbVar10 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_09D5,
                                       iVar5);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,*piVar20 - this_00->field_0050,
               iVar11 - iVar28,'\x01',pbVar10);
      }
      uVar7 = this_00->field_015C;
      if ((int)uVar7 < 0) break;
      uVar12 = this_00->field_00A8;
      uVar22 = this_00->field_0050;
      goto cf_common_exit_004FD606;
    case MESS_SHARED_B1FF:
    case 0xb20d:
      dVar13 = 0xffffffff;
      uVar3 = 0;
      do {
        if ((&local_44->field_0BA2)[uVar3] != '\0') {
          dVar13 = dVar13 + 1;
        }
      } while ((dVar13 != (message->arg0).u32) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (uVar3 < 6) {
        SetCmdBoat(local_44,(uint)uVar3);
      }
      else {
        SetCmdBoat(local_44,0);
      }
      break;
    case MESS_BEHPANELTY_B200:
      uVar7 = 0xffffffff;
      uVar3 = 0;
      do {
        if ((&local_44->field_0BA2)[uVar3] != '\0') {
          uVar7 = uVar7 + 1;
        }
      } while ((uVar7 != (message->arg0).words.high) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (5 < uVar3) {
        uVar3 = 0;
      }
      pcVar30 = thunk_FUN_0052a320;
      iVar5 = 0;
      pcVar24 = thunk_FUN_00529590((&local_44->field_0BA2)[uVar3],local_44->field_0B99);
      pCVar8 = thunk_FUN_00571240(pcVar24,iVar5);
      PaintBut(this_00,3,message,1,pCVar8,pcVar30);
      break;
    case 0xb203:
    case 0xb20f:
      dVar13 = 0xffffffff;
      uVar3 = 0;
      do {
        if ((&local_44->field_0BFE)[uVar3] != '\0') {
          dVar13 = dVar13 + 1;
        }
      } while ((dVar13 != (message->arg0).u32) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (uVar3 < 6) {
        SetCmdObj(local_44,(uint)uVar3);
      }
      else {
        SetCmdObj(local_44,0);
      }
      break;
    case 0xb204:
      uVar7 = 0xffffffff;
      uVar3 = 0;
      do {
        if ((&local_44->field_0BFE)[uVar3] != '\0') {
          uVar7 = uVar7 + 1;
        }
      } while ((uVar7 != (message->arg0).words.high) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (5 < uVar3) {
        uVar3 = 0;
      }
      pcVar30 = thunk_FUN_0052a320;
      iVar5 = 0;
      pcVar24 = thunk_FUN_00529590((&local_44->field_0BFE)[uVar3],local_44->field_0BF5);
      pCVar8 = thunk_FUN_00571240(pcVar24,iVar5);
      PaintBut(this_00,5,message,1,pCVar8,pcVar30);
      break;
    case MESS_BLDOBJPANELTY_B206:
      pcVar30 = thunk_FUN_0052a7b0;
      pCVar8 = thunk_FUN_00571240("BUT_MFFRAMES",0);
      text = thunk_FUN_00571240("BUT_MFTABS",0);
      PaintTab(this_00,5,message,1,text,pCVar8,pcVar30);
      break;
    case MESS_RESEARCHPANELTY_B207:
      local_44->field_09D4 = *(undefined1 *)(message->arg0).ptr;
      thunk_FUN_005097b0();
      break;
    case MESS_TRADEPANELTY_B20B:
      pcVar30 = thunk_FUN_0052a7b0;
      pCVar8 = thunk_FUN_00571240("BUT_MFFRAMES",0);
      PaintTab(this_00,5,message,1,"BUT_RCTTYPESI",pCVar8,pcVar30);
      break;
    case MESS_BEHPANELTY_B20E:
      uVar7 = 0xffffffff;
      uVar3 = 0;
      do {
        if ((&local_44->field_0BA2)[uVar3] != '\0') {
          uVar7 = uVar7 + 1;
        }
      } while ((uVar7 != (message->arg0).words.high) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (5 < uVar3) {
        uVar3 = 0;
      }
      pcVar30 = thunk_FUN_0052a320;
      iVar5 = 0;
      pcVar24 = thunk_FUN_00529590((&local_44->field_0BA2)[uVar3],local_44->field_0B99);
      pCVar8 = thunk_FUN_00571240(pcVar24,iVar5);
      PaintBut(this_00,3,message,6,pCVar8,pcVar30);
      break;
    case 0xb210:
      uVar7 = 0xffffffff;
      uVar3 = 0;
      do {
        if ((&local_44->field_0BFE)[uVar3] != '\0') {
          uVar7 = uVar7 + 1;
        }
      } while ((uVar7 != (message->arg0).words.high) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (5 < uVar3) {
        uVar3 = 0;
      }
      pcVar30 = thunk_FUN_0052a320;
      iVar5 = 0;
      pcVar24 = thunk_FUN_00529590((&local_44->field_0BFE)[uVar3],local_44->field_0BF5);
      pCVar8 = thunk_FUN_00571240(pcVar24,iVar5);
      PaintBut(this_00,5,message,6,pCVar8,pcVar30);
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
        sub_004F8020(local_44,'\0',0);
      }
      this_00->field_012C = 1;
      pbVar10 = &local_2d;
      local_2d = (byte)(message->id - 0xb211 >> 1);
      puVar23 = (undefined4 *)0x2a;
      goto cf_common_exit_004FCF18;
    case 0xb212:
    case 0xb216:
      switch(local_44->field_0BF5) {
      case CASE_5E|CASE_1:
        pcVar24 = "BUT_TBDN";
LAB_004fd533:
        pcVar30 = thunk_FUN_00529fe0;
        pCVar8 = thunk_FUN_00571240(pcVar24,0);
        PaintBut(this_00,5,message,1,pCVar8,pcVar30);
        break;
      case CASE_64:
      case CASE_64|CASE_1:
      case CASE_6D:
        PaintBut(local_44,5,message,1,"BUT_MINUSSI",thunk_FUN_00529fe0);
      }
      break;
    case 0xb214:
    case 0xb218:
      switch(local_44->field_0BF5) {
      case CASE_5E|CASE_1:
        pcVar24 = "BUT_TBUP";
        goto LAB_004fd533;
      case CASE_64:
      case CASE_64|CASE_1:
      case CASE_6D:
        PaintBut(local_44,5,message,1,"BUT_PLUSSI",thunk_FUN_00529fe0);
      }
      break;
    case 0xb21a:
    case 0xb21c:
      if (local_44->field_0BF5 != CASE_6D) break;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_c = (int *)CONCAT31(local_c._1_3_,1);
      piVar20 = (message->arg1).ptr;
      switch((message->arg0).u32) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      case 0:
        local_c = (int *)CONCAT31(local_c._1_3_,1);
        break;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      case 1:
      case 3:
        local_c = (int *)CONCAT31(local_c._1_3_,
                                  (&local_44->field_0xc0f)[SVar1 - 0xb21a >> 1] != '\x03');
        break;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      case 2:
        local_c = (int *)((uint)local_c._1_3_ << 8);
      }
      iVar5 = piVar20[1];
      iVar11 = DAT_00806734;
      if (local_44->field_0138 != 0) {
        iVar11 = local_44->field_00A8;
      }
      pbVar10 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_44->field_09D5,
                                     (uint)local_c & 0xff);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,*piVar20 - this_00->field_0050,
             iVar5 - iVar11,'\x01',pbVar10);
      uVar7 = this_00->field_015C;
      if ((int)uVar7 < 0) break;
      uVar12 = this_00->field_00A8;
      uVar22 = this_00->field_0050;
cf_common_exit_004FD606:
      Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,uVar7,0xffffffff,uVar22,uVar12);
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
        sub_004F8020(local_44,'\x01',0);
      }
      this_00->field_012C = 1;
      pbVar10 = local_8c;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        pbVar10[0] = 0;
        pbVar10[1] = 0;
        pbVar10[2] = 0;
        pbVar10[3] = 0;
        pbVar10 = pbVar10 + 4;
      }
      *pbVar10 = 0;
      pbVar10 = local_8c;
      local_6f = message->id - 0xb220;
      local_8c[0] = 0x11;
      puVar23 = (undefined4 *)0x17;
      goto cf_common_exit_004FCF18;
    case 0xb230:
      cVar26 = local_44->field_0BCF;
      pcVar24 = "BUT_BEHREPAIR0";
      goto cf_common_exit_004FD1D2;
    case 0xb231:
      pcVar24 = "BUT_BEHREPAIR20";
      if (DAT_0080874e != '\x03') {
        pcVar24 = "BUT_BEHREPAIR50";
      }
      cVar26 = local_44->field_0BD0;
      goto cf_common_exit_004FD1D2;
    case 0xb232:
      pcVar24 = "BUT_BEHREPAIR50";
      if (DAT_0080874e != '\x03') {
        pcVar24 = "BUT_BEHREPAIR80";
      }
      cVar26 = local_44->field_0BD1;
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
cf_common_exit_004FD1D2:
      uVar7 = CONCAT31(uVar14,cVar26 == '\x03');
      pCVar8 = thunk_FUN_00571240(pcVar24,0);
      PaintBBut(this_00,3,message,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar8,uVar7);
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0xb233:
      uVar7 = CONCAT31(uVar14,local_44->field_0BD2 == '\x03');
      pCVar8 = thunk_FUN_00571240("BUT_BEHREPAIR80",0);
      PaintBBut(this_00,3,message,6,pCVar8,uVar7);
    }
    goto cf_common_exit_004FD60B;
  }
  if (0xb16e < SVar1) {
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
      sub_004F8020(local_44,'\0',0);
    }
    this_00->field_012C = 1;
    pbVar10 = (byte *)((int)&local_14 + 2);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_14 = CONCAT13((char)message->id + 0x91,(int3)local_14) & 0xff00ffff;
    puVar23 = (undefined4 *)0x27;
    goto cf_common_exit_004FCF18;
  }
  if (SVar1 < 0xb10f) {
    if (SVar1 == MESS_CPANELTY_B10E) {
      if (DAT_00808784 == 0) {
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          memset(&local_44->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
          iVar5 = 0;
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
    if (MESS_CPANELTY_B106 < SVar1) {
      switch(SVar1) {
      case 0xb107:
        pcVar30 = thunk_FUN_0052a3e0;
        pCVar8 = thunk_FUN_00571240("BUT_MAPSMIL",0);
        PaintBut(this_00,4,message,6,pCVar8,pcVar30);
        break;
      case MESS_FRMPANELTY_B108:
        if (DAT_00808784 == 0) {
          if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            memset(&local_44->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
            iVar5 = 0;
            local_44->field_0028 = 0xa206;
            local_44->field_0020 = 0x101;
            local_44->field_0024 = 3;
            AppClassTy::PostNextMessage
                      ((AppClassTy *)&DAT_00807620,(undefined4 *)&local_44->field_0x18);
            thunk_FUN_005252c0(0xae);
          }
        }
        break;
      case MESS_FRMPANELTY_B109:
        pcVar30 = thunk_FUN_0052a390;
        pcVar24 = "BUT_MAPZIN";
        goto cf_common_exit_004FBCF3;
      case MESS_FRMPANELTY_B10A:
        if (DAT_00808784 == 0) {
          if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            memset(&local_44->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
            iVar5 = 0;
            local_44->field_0028 = 0xa207;
            local_44->field_0020 = 0x101;
            local_44->field_0024 = 3;
            AppClassTy::PostNextMessage
                      ((AppClassTy *)&DAT_00807620,(undefined4 *)&local_44->field_0x18);
            thunk_FUN_005252c0(0xae);
          }
        }
        break;
      case MESS_FRMPANELTY_B10B:
        pcVar30 = thunk_FUN_0052a390;
        pCVar8 = thunk_FUN_00571240("BUT_MAPZOUT",0);
        PaintBut(this_00,4,message,6,pCVar8,pcVar30);
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
            memset(&local_44->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
            local_44->field_0028 = 0xa208;
            local_44->field_0020 = 0x101;
            local_44->field_0024 = 3;
            AppClassTy::PostNextMessage
                      ((AppClassTy *)&DAT_00807620,(undefined4 *)&local_44->field_0x18);
            thunk_FUN_005252c0(0xae);
          }
        }
        break;
      case MESS_CPANELTY_B10D:
        pcVar30 = thunk_FUN_0052a390;
        pCVar8 = thunk_FUN_00571240("BUT_MAPTLFT",0);
        PaintBut(this_00,4,message,6,pCVar8,pcVar30);
      }
      goto cf_common_exit_004FD60B;
    }
    if (SVar1 == MESS_CPANELTY_B106) {
      if ((message->arg0).u32 == 3) {
        DAT_00807327 = DAT_00807327 | 4;
      }
      else {
        DAT_00807327 = DAT_00807327 & 0xfb;
      }
      goto LAB_004fc53f;
    }
    if (MESS_SHARED_0060 < SVar1) {
      if (SVar1 != MESS_SHARED_0061) {
        if (SVar1 == MESS_CPANELTY_B104) {
          if ((message->arg0).u32 == 3) {
            DAT_00807327 = DAT_00807327 | 2;
          }
          else {
            DAT_00807327 = DAT_00807327 & 0xfd;
          }
          PTR_00807598->field_0418 = (uint)DAT_00807327;
          thunk_FUN_005252c0(0xae);
          goto cf_common_exit_004FD60B;
        }
        if (SVar1 != MESS_CPANELTY_B105) goto cf_common_exit_004FD60B;
        pcVar30 = thunk_FUN_0052a3e0;
        pcVar24 = "BUT_MAPSCIV";
        goto cf_common_exit_004FBCF3;
      }
      local_8 = -1;
      local_c = (int *)0x1;
      if (local_44->field_023F == CASE_2) goto cf_common_exit_004FD60B;
      iVar5 = 0;
      uVar7 = (uint)(message->arg1).words.low;
      local_18 = (uint)(message->arg1).words.high;
      do {
        sVar18 = (short)iVar5;
        local_2c = (&local_44->field_003C)[sVar18];
        local_28 = (&local_44->field_0094)[sVar18];
        local_24 = (&local_44->field_0068)[sVar18];
        local_20 = (&local_44->field_00C0)[sVar18];
        if ((((int)uVar7 < local_2c) || (local_24 + local_2c <= (int)uVar7)) ||
           (((int)local_18 < local_28 || (local_20 + local_28 <= (int)local_18)))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        iVar11 = iVar5;
      } while ((!bVar2) && (iVar5 = iVar5 + 1, iVar11 = local_8, (short)iVar5 < 0xb));
      local_8 = iVar11;
      sVar18 = (short)local_8;
      iVar5 = (int)(short)local_8;
      switch(iVar5) {
      case 0:
      case 2:
      case 10:
        if ((g_prodPanel_00801684 == (ProdPanelTy *)0x0) || (g_prodPanel_00801684->field_0172 == 2))
        {
          piVar20 = (int *)0x1;
        }
        else {
          piVar20 = (int *)0x0;
        }
        if ((g_behPanel_00801678 != (BehPanelTy *)0x0) && (g_behPanel_00801678->field_0172 != 2)) {
          piVar20 = (int *)0x0;
        }
        if ((g_sAMPanel_008016EC != (SAMPanelTy *)0x0) && (g_sAMPanel_008016EC->field_0172 != 2)) {
          piVar20 = (int *)0x0;
        }
        pFVar17 = g_frmPanel_0080168C;
        if ((g_upgPanel_00802A48 != (UpgPanelTy *)0x0) && (g_upgPanel_00802A48->field_0172 != 2)) {
          piVar20 = (int *)0x0;
        }
        break;
      default:
        piVar20 = local_c;
        goto LAB_004fbe73;
      case 6:
      case 8:
      case 9:
        if ((g_prodPanel_008016E8 == (ProdPanelTy *)0x0) || (g_prodPanel_008016E8->field_0172 == 2))
        {
          piVar20 = (int *)0x1;
        }
        else {
          piVar20 = (int *)0x0;
        }
        if ((g_prodPanel_0080167C != (ProdPanelTy *)0x0) && (g_prodPanel_0080167C->field_0172 != 2))
        {
          piVar20 = (int *)0x0;
        }
        if ((g_infocPanel_00801698 != (InfocPanelTy *)0x0) &&
           (g_infocPanel_00801698->field_0172 != 2)) {
          piVar20 = (int *)0x0;
        }
        pFVar17 = (FrmPanelTy *)g_prodPanel_00801680;
        if ((g_tradePanel_00802A44 != (TradePanelTy *)0x0) &&
           (g_tradePanel_00802A44->field_0172 != 2)) {
          piVar20 = (int *)0x0;
        }
      }
      if ((pFVar17 != (FrmPanelTy *)0x0) && (pFVar17->field_0172 != 2)) {
        piVar20 = (int *)0x0;
      }
LAB_004fbe73:
      local_14 = uVar7;
      if (piVar20 != (int *)0x0) {
        switch(iVar5) {
        case 0:
        case 8:
          sub_004F8020(local_44,(short)local_8 == 0,1);
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
                 ((((g_prodPanel_00801684 == (ProdPanelTy *)0x0 ||
                    (g_prodPanel_00801684->field_0172 == 2)) &&
                   ((g_behPanel_00801678 == (BehPanelTy *)0x0 ||
                    (g_behPanel_00801678->field_0172 == 2)))) &&
                  ((((g_sAMPanel_008016EC == (SAMPanelTy *)0x0 ||
                     (g_sAMPanel_008016EC->field_0172 == 2)) &&
                    ((g_upgPanel_00802A48 == (UpgPanelTy *)0x0 ||
                     (g_upgPanel_00802A48->field_0172 == 2)))) &&
                   ((g_frmPanel_0080168C == (FrmPanelTy *)0x0 ||
                    (g_frmPanel_0080168C->field_0172 == 2)))))))) &&
                (((short)local_8 != 6 ||
                 ((((((g_prodPanel_008016E8 == (ProdPanelTy *)0x0 ||
                      (g_prodPanel_008016E8->field_0172 == 2)) &&
                     ((g_prodPanel_0080167C == (ProdPanelTy *)0x0 ||
                      (g_prodPanel_0080167C->field_0172 == 2)))) &&
                    ((g_infocPanel_00801698 == (InfocPanelTy *)0x0 ||
                     (g_infocPanel_00801698->field_0172 == 2)))) &&
                   ((g_tradePanel_00802A44 == (TradePanelTy *)0x0 ||
                    (g_tradePanel_00802A44->field_0172 == 2)))) &&
                  ((g_prodPanel_00801680 == (ProdPanelTy *)0x0 ||
                   (g_prodPanel_00801680->field_0172 == 2)))))))))) {
              local_2c = (&local_44->field_003C)[iVar5] + 7;
              local_24 = 0xe;
              local_20 = 0x1b;
              sVar16 = 0;
              do {
                local_28 = sVar16 * 0x1d + 6 + (&local_44->field_0094)[(short)local_8];
                if (((((int)uVar7 < local_2c) ||
                     ((&local_44->field_003C)[iVar5] + 0x15 <= (int)uVar7)) ||
                    ((int)local_18 < local_28)) || (local_28 + 0x1b <= (int)local_18)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  if (*local_1c == '\x01') {
                    if ((local_1c[sVar16 + 0x2a] == '\0') && (local_1c[2] == '\x01')) {
                      sub_004F8020(local_44,(short)local_8 == 2,1);
                      SetNewDeep(this_00,sVar18 != 2,(char)sVar16);
                    }
                  }
                  else {
                    sub_004F8020(local_44,(short)local_8 == 2,1);
                    SetNewDeep(this_00,sVar18 != 2,(char)sVar16);
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
            local_c = (int *)0xff;
            if (*local_1c != '\0') {
              if ((short)local_8 == 3) {
                if ((((((g_prodPanel_00801684 != (ProdPanelTy *)0x0) &&
                       (g_prodPanel_00801684->field_0172 != 2)) ||
                      ((g_behPanel_00801678 != (BehPanelTy *)0x0 &&
                       (g_behPanel_00801678->field_0172 != 2)))) ||
                     ((g_sAMPanel_008016EC != (SAMPanelTy *)0x0 &&
                      (g_sAMPanel_008016EC->field_0172 != 2)))) ||
                    ((g_upgPanel_00802A48 != (UpgPanelTy *)0x0 &&
                     (g_upgPanel_00802A48->field_0172 != 2)))) ||
                   ((g_frmPanel_0080168C != (FrmPanelTy *)0x0 &&
                    (g_frmPanel_0080168C->field_0172 != 2)))) break;
                iVar5 = local_44->field_00A0 + 0x40;
                if (((int)local_18 < iVar5) &&
                   (((local_44->field_00A0 + 10 < (int)local_18 &&
                     (iVar11 = (local_44->field_0048 + 0xb + iVar5) - uVar7, iVar11 < (int)local_18)
                     ) && ((int)local_18 < iVar11 + 0x21)))) {
                  bVar15 = 4 - (char)((int)(iVar5 - local_18) / 0xb);
                  local_c = (int *)(uint)bVar15;
                }
              }
              if ((short)local_8 == 5) {
                if (((((g_prodPanel_008016E8 != (ProdPanelTy *)0x0) &&
                      (g_prodPanel_008016E8->field_0172 != 2)) ||
                     ((g_prodPanel_0080167C != (ProdPanelTy *)0x0 &&
                      (g_prodPanel_0080167C->field_0172 != 2)))) ||
                    ((g_infocPanel_00801698 != (InfocPanelTy *)0x0 &&
                     (g_infocPanel_00801698->field_0172 != 2)))) ||
                   (((g_tradePanel_00802A44 != (TradePanelTy *)0x0 &&
                     (g_tradePanel_00802A44->field_0172 != 2)) ||
                    ((g_prodPanel_00801680 != (ProdPanelTy *)0x0 &&
                     (g_prodPanel_00801680->field_0172 != 2)))))) break;
                iVar5 = local_44->field_00A8 + 0xb;
                if ((iVar5 < (int)local_18) &&
                   ((((int)local_18 < local_44->field_00A8 + 0x41 &&
                     (iVar11 = (iVar5 - local_44->field_0050) + -0x87 + uVar7,
                     (int)local_18 < iVar11)) && (iVar11 + -0x21 < (int)local_18)))) {
                  uVar7 = (int)(local_18 - iVar5) / 0xb;
                  bVar15 = (byte)uVar7;
                  local_c = (int *)(uVar7 & 0xff);
                }
              }
              piVar20 = local_c;
              if (bVar15 != 0xff) {
                if (*local_1c == '\x01') {
                  if ((((undefined1 *)((int)local_c + 0x2a))[(int)local_1c] == '\0') &&
                     (local_1c[2] == '\x01')) {
                    sub_004F8020(local_44,(short)local_8 == 3,1);
                    SetNewDeep(this_00,sVar18 != 3,(char)piVar20);
                  }
                }
                else {
                  sub_004F8020(local_44,(short)local_8 == 3,1);
                  SetNewDeep(this_00,sVar18 != 3,(char)local_c);
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
                iVar11 = thunk_FUN_004f19d0('\x01',(Global_sub_004F19D0_param_2Enum)iVar5,&local_2c,
                                            &local_28);
                if (iVar11 != 0) {
                  local_2c = local_2c + this_00->field_0060;
                  local_28 = local_28 + this_00->field_00B8;
                  if (((((int)uVar7 < local_2c) || (local_24 + local_2c <= (int)uVar7)) ||
                      ((int)local_18 < local_28)) || (local_20 + local_28 <= (int)local_18)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  iVar11 = iVar5;
                  if (bVar2) break;
                }
                iVar5 = iVar5 + 1;
                iVar11 = local_8;
              } while ((short)iVar5 < 6);
              local_8 = iVar11;
              if (-1 < (short)local_8) {
                STAllPlayersC::SetActivePanel
                          (g_allPlayers_007FA174,(uint *)0x1,(short)local_8 + 1,1);
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
                iVar11 = thunk_FUN_004f19d0('\0',(Global_sub_004F19D0_param_2Enum)iVar5,&local_2c,
                                            &local_28);
                if (iVar11 != 0) {
                  local_2c = local_2c + this_00->field_0064;
                  local_28 = local_28 + this_00->field_00BC;
                  if ((((int)uVar7 < local_2c) || (local_24 + local_2c <= (int)uVar7)) ||
                     (((int)local_18 < local_28 || (local_20 + local_28 <= (int)local_18)))) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  iVar11 = iVar5;
                  if (bVar2) break;
                }
                iVar5 = iVar5 + 1;
                iVar11 = local_8;
              } while ((short)iVar5 < 6);
              local_8 = iVar11;
              if (-1 < (short)local_8) {
                STAllPlayersC::SetActivePanel
                          (g_allPlayers_007FA174,(uint *)0x0,(short)local_8 + 1,1);
              }
            }
          }
        }
      }
      goto cf_common_exit_004FD60B;
    }
    if (SVar1 == MESS_SHARED_0060) {
      local_8 = 0;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_1c = (char *)CONCAT22(local_1c._2_2_,(message->arg1).words.low);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_40 = CONCAT22(local_40._2_2_,(message->arg1).words.high);
      if (local_44->field_023F == CASE_1) {
        local_c = &local_44->field_0204;
        local_18 = 0;
        local_3c = 5;
        do {
          piVar20 = (int *)0x0;
          switch(local_18) {
          case 0:
          case 1:
            if (((((g_prodPanel_00801684 != (ProdPanelTy *)0x0) &&
                  (g_prodPanel_00801684->field_0172 == 2)) &&
                 (g_behPanel_00801678 != (BehPanelTy *)0x0)) &&
                (((g_behPanel_00801678->field_0172 == 2 &&
                  (g_upgPanel_00802A48 != (UpgPanelTy *)0x0)) &&
                 ((g_upgPanel_00802A48->field_0172 == 2 &&
                  ((g_frmPanel_0080168C != (FrmPanelTy *)0x0 &&
                   (g_frmPanel_0080168C->field_0172 == 2)))))))) &&
               ((DAT_0080874e != '\x03' ||
                ((g_sAMPanel_008016EC != (SAMPanelTy *)0x0 && (g_sAMPanel_008016EC->field_0172 == 2)
                 ))))) {
              piVar20 = local_c + 0x46;
            }
            break;
          case 3:
          case 4:
            if (((g_prodPanel_008016E8 != (ProdPanelTy *)0x0) &&
                (g_prodPanel_008016E8->field_0172 == 2)) &&
               ((g_prodPanel_0080167C != (ProdPanelTy *)0x0 &&
                (((g_prodPanel_0080167C->field_0172 == 2 &&
                  (g_infocPanel_00801698 != (InfocPanelTy *)0x0)) &&
                 (g_infocPanel_00801698->field_0172 == 2)))))) {
              if (DAT_0080874e == '\x03') {
LAB_004fba8d:
                if ((g_prodPanel_00801680 != (ProdPanelTy *)0x0) &&
                   (g_prodPanel_00801680->field_0172 == 2)) {
LAB_004fbaa0:
                  piVar20 = local_c;
                }
              }
              else if ((g_tradePanel_00802A44 != (TradePanelTy *)0x0) &&
                      (g_tradePanel_00802A44->field_0172 == 2)) {
                if (DAT_0080874e == '\x03') goto LAB_004fba8d;
                goto LAB_004fbaa0;
              }
            }
          }
          if (piVar20 != (int *)0x0) {
            piVar20 = piVar20 + 1;
            local_14 = 10;
            do {
              if (piVar20[5] != 0) {
                uVar7 = (uint)local_1c & 0xffff;
                uVar12 = local_40 & 0xffff;
                if (((((int)uVar7 < piVar20[-1]) || (piVar20[1] + piVar20[-1] <= (int)uVar7)) ||
                    ((int)uVar12 < *piVar20)) || (piVar20[2] + *piVar20 <= (int)uVar12)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if ((bVar2) &&
                   ((piVar20[3] == 0 ||
                    (iVar5 = FUN_006b55c0(piVar20[3],piVar20[4],uVar7 - piVar20[-1],
                                          uVar12 - *piVar20), iVar5 != 0)))) {
                  local_8 = piVar20[5];
                }
              }
              piVar20 = piVar20 + 7;
              local_14 = local_14 + -1;
            } while (local_14 != 0);
            local_14 = 0;
          }
          local_18 = local_18 + 1;
          local_c = local_c + 0x46;
          local_3c = local_3c + -1;
        } while (local_3c != 0);
      }
      if (this_00->field_0144 != local_8) {
        if (this_00->field_0144 != 0) {
          this_00->field_0028 = 0x4202;
          *(undefined2 *)&this_00->field_0x2c = 0;
          *(undefined2 *)&this_00->field_0x2e = 2;
          this_00->field_0030 = this_00->field_0144;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)g_cursorClass_00802A30->field_0000)(&this_00->field_0x18);
        }
        this_00->field_0144 = local_8;
        if (local_8 != 0) {
          this_00->field_0028 = 0x4201;
          *(undefined2 *)&this_00->field_0x2c = 0;
          *(undefined2 *)&this_00->field_0x2e = 2;
          this_00->field_0030 = this_00->field_0144;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)g_cursorClass_00802A30->field_0000)(&this_00->field_0x18);
        }
      }
      if (this_00->field_023F == CASE_1) {
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
            uVar7 = (uint)local_1c & 0xffff;
            uVar12 = local_40 & 0xffff;
            if (((((int)uVar7 < local_2c) || (local_24 + local_2c <= (int)uVar7)) ||
                ((int)uVar12 < local_28)) || (local_20 + local_28 <= (int)uVar12)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              iVar5 = FUN_006e68c0(PTR_00807598,(uVar7 - local_2c) + -5,
                                   (uVar12 - this_00->field_00A4) + -7,&local_34,&local_38);
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
    switch(SVar1) {
    case MESS_ID_NONE:
      local_44->field_0253 = local_44->field_0253 + 1;
      PaintTV(local_44);
      PaintNewDeep(this_00);
      PaintSMap(this_00);
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      PlayBrief(this_00,unaff_EDI);
      bVar15 = 0;
      local_c = (int *)((uint)local_c & 0xffffff00);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar25 = extraout_EDX_00;
      do {
        uVar7 = (uint)local_c & 0xff;
        if ((&this_00->field_0xb4f)[uVar7] != '\0') {
          if (((bVar15 < 5) || (bVar15 == 0xd)) || (bVar15 == 0xe)) {
            switch(uVar7) {
            case 0:
              Update1Panel(this_00);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar25 = extraout_EDX_12;
              break;
            case 1:
              thunk_FUN_00502330();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar25 = extraout_EDX_13;
              break;
            case 3:
              thunk_FUN_005097b0();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar25 = extraout_EDX_14;
              break;
            case 4:
              Update5Panel(this_00);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar25 = extraout_EDX_15;
              break;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            case 0xd:
            case 0xe:
              UpdateStackPanel(this_00,CONCAT31((int3)((uint)uVar25 >> 8),bVar15 - 0xd));
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar25 = extraout_EDX_16;
            }
          }
          else {
            if ((bVar15 == 5) && (g_prodPanel_008016E8 != (ProdPanelTy *)0x0)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)g_prodPanel_008016E8->field_0000->field_001C)();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar25 = extraout_EDX_01;
            }
            if ((bVar15 == 6) && (g_prodPanel_0080167C != (ProdPanelTy *)0x0)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)g_prodPanel_0080167C->field_0000->field_001C)();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar25 = extraout_EDX_02;
            }
            if ((bVar15 == 7) && (g_prodPanel_00801684 != (ProdPanelTy *)0x0)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)g_prodPanel_00801684->field_0000->field_001C)();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar25 = extraout_EDX_03;
            }
            if ((bVar15 == 8) && (g_infocPanel_00801698 != (InfocPanelTy *)0x0)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)g_infocPanel_00801698->field_0000->field_0020)();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar25 = extraout_EDX_04;
            }
            if ((bVar15 == 9) && (g_tradePanel_00802A44 != (TradePanelTy *)0x0)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)&g_tradePanel_00802A44->field_0000[1].field_0xc)();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar25 = extraout_EDX_05;
            }
            if ((bVar15 == 10) && (g_behPanel_00801678 != (BehPanelTy *)0x0)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)g_behPanel_00801678->field_0000[2].field_0008)();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar25 = extraout_EDX_06;
            }
            if ((bVar15 == 0xb) && (g_prodPanel_00801680 != (ProdPanelTy *)0x0)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)g_prodPanel_00801680->field_0000->field_001C)();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar25 = extraout_EDX_07;
            }
            if ((bVar15 == 0xf) && (g_upgPanel_00802A48 != (UpgPanelTy *)0x0)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)g_upgPanel_00802A48->field_0000->field_0020)();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar25 = extraout_EDX_08;
            }
            if ((bVar15 == 0x10) && (g_frmPanel_0080168C != (FrmPanelTy *)0x0)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(g_frmPanel_0080168C->field_0000 + 1))();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar25 = extraout_EDX_09;
            }
            if ((bVar15 == 0x11) && (g_sAMPanel_008016EC != (SAMPanelTy *)0x0)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)&g_sAMPanel_008016EC->field_0000[1].field_0xc)();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar25 = extraout_EDX_10;
            }
            if ((bVar15 == 0x12) && (g_helpPanel_00801690 != (HelpPanelTy *)0x0)) {
              thunk_FUN_00515180(g_helpPanel_00801690,'\x06');
              thunk_FUN_00515180(g_helpPanel_00801690,'\x05');
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar25 = extraout_EDX_11;
            }
          }
          (&this_00->field_0xb4f)[uVar7] = 0;
        }
        bVar15 = bVar15 + 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_c = (int *)CONCAT31(local_c._1_3_,bVar15);
      } while (bVar15 < 0x14);
      if (this_00->field_023F == CASE_3) {
        bVar2 = false;
        bVar15 = 0;
        piVar20 = &this_00->field_0094;
        do {
          iVar5 = this_00->field_0120 + -0x9b + this_00->field_0128;
          if ((bVar15 == 1) || (bVar15 == 7)) {
            iVar5 = iVar5 + this_00->field_00C0;
          }
          if (iVar5 < *piVar20) {
            *piVar20 = *piVar20 + -0xf;
          }
          iVar5 = this_00->field_0120 + -0x9b + this_00->field_0128;
          if ((bVar15 == 1) || (iVar11 = iVar5, bVar15 == 7)) {
            iVar11 = iVar5 + this_00->field_00C0;
          }
          if (*piVar20 <= iVar11) {
            if ((bVar15 == 1) || (bVar15 == 7)) {
              iVar5 = iVar5 + this_00->field_00C0;
            }
            *piVar20 = iVar5;
            bVar2 = true;
          }
          bVar15 = bVar15 + 1;
          piVar20 = piVar20 + 1;
        } while (bVar15 < 0xb);
        if (bVar2) {
          thunk_FUN_004a9b60(this_00->field_011C,this_00->field_0120,this_00->field_0124,
                             this_00->field_0128 + -0x9b);
          this_00->field_023F = CASE_4|CASE_1;
          if (DAT_0080731a == 0) {
            this_00->field_023F = CASE_1;
            ShiftControls(this_00,1);
          }
          else {
            puVar19 = &this_00->field_02EC;
            puVar23 = &this_00->field_02EE;
            local_c = (int *)0x2;
            do {
              puVar29 = (undefined4 *)0x0;
              iVar11 = 0;
              iVar5 = 1;
              bVar15 = 0;
              uVar7 = 6;
              pcVar24 = thunk_FUN_00526100((undefined1 *)0x0,0);
              puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                                 (DAT_00806794,CASE_1F,pcVar24,uVar7,bVar15,iVar5,iVar11,puVar29);
              puVar23[-3] = puVar6;
              puVar19[-2] = (char)*puVar6;
              *puVar19 = 3;
              *puVar23 = this_00->field_0038;
              puVar19 = puVar19 + 1;
              puVar23 = puVar23 + 1;
              local_c = (int *)((int)local_c + -1);
            } while (local_c != (int *)0x0);
            puVar23 = &this_00->field_0D53;
            puVar19 = &this_00->field_0D47;
            local_8 = 2;
            do {
              local_c = (int *)0x6;
              do {
                puVar29 = (undefined4 *)0x0;
                iVar11 = 0;
                iVar5 = 1;
                bVar15 = 0;
                uVar7 = 6;
                pcVar24 = thunk_FUN_00526100((undefined1 *)0x0,0);
                puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                                   (DAT_00806794,CASE_1F,pcVar24,uVar7,bVar15,iVar5,iVar11,puVar29);
                puVar23[-0x12] = puVar6;
                puVar19[-0xc] = (char)*puVar6;
                *puVar19 = 3;
                *puVar23 = this_00->field_0038;
                puVar23 = puVar23 + 1;
                puVar19 = puVar19 + 1;
                local_c = (int *)((int)local_c + -1);
              } while (local_c != (int *)0x0);
              local_8 = local_8 + -1;
            } while (local_8 != 0);
            local_c = (int *)0x0;
            local_8 = 0;
          }
        }
        thunk_FUN_0054b6d0(g_cursorClass_00802A30);
        bVar15 = 0;
        piVar20 = &this_00->field_0148;
        do {
          if (-1 < *piVar20) {
            Library::DKW::DDX::FUN_006b3640
                      ((int *)PTR_008075a8,*piVar20,0xffffffff,piVar20[-0x43],piVar20[-0x2d]);
          }
          bVar15 = bVar15 + 1;
          piVar20 = piVar20 + 1;
        } while (bVar15 < 0xb);
      }
      else if (this_00->field_023F == CASE_4) {
        bVar15 = 0;
        piVar20 = &this_00->field_0094;
        do {
          iVar5 = this_00->field_0120 + this_00->field_0128;
          if ((bVar15 == 1) || (bVar15 == 7)) {
            iVar5 = iVar5 + this_00->field_00C0;
          }
          if (*piVar20 < iVar5) {
            *piVar20 = *piVar20 + 0xf;
          }
          iVar5 = this_00->field_0120 + this_00->field_0128;
          if ((bVar15 == 1) || (iVar11 = iVar5, bVar15 == 7)) {
            iVar11 = iVar5 + this_00->field_00C0;
          }
          if (iVar11 <= *piVar20) {
            if ((bVar15 == 1) || (bVar15 == 7)) {
              iVar5 = iVar5 + this_00->field_00C0;
            }
            *piVar20 = iVar5;
            this_00->field_023F = CASE_2;
          }
          bVar15 = bVar15 + 1;
          piVar20 = piVar20 + 1;
        } while (bVar15 < 0xb);
        thunk_FUN_0054b6d0(g_cursorClass_00802A30);
        bVar15 = 0;
        piVar20 = &this_00->field_0148;
        do {
          if (-1 < *piVar20) {
            Library::DKW::DDX::FUN_006b3640
                      ((int *)PTR_008075a8,*piVar20,0xffffffff,piVar20[-0x43],piVar20[-0x2d]);
          }
          bVar15 = bVar15 + 1;
          piVar20 = piVar20 + 1;
        } while (bVar15 < 0xb);
      }
      if (DAT_0080c4d3 == 3) {
        if (this_00->field_00F0 < this_00->field_0120) {
          this_00->field_00F0 = this_00->field_00F0 + 10;
        }
        if (this_00->field_0120 <= this_00->field_00F0) {
          this_00->field_00F0 = this_00->field_0120;
          DAT_0080c4d3 = 1;
        }
        uVar7 = this_00->field_00F0;
        uVar12 = this_00->field_00EC;
        uVar22 = this_00->field_0174;
LAB_004fb69f:
        Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,uVar22,0xffffffff,uVar12,uVar7);
      }
      else if (DAT_0080c4d3 == 4) {
        if (this_00->field_0120 - this_00->field_00F8 < this_00->field_00F0) {
          this_00->field_00F0 = this_00->field_00F0 + -10;
        }
        iVar5 = this_00->field_0120 - this_00->field_00F8;
        if (this_00->field_00F0 <= iVar5) {
          this_00->field_00F0 = iVar5;
          DAT_0080c4d3 = 2;
        }
        uVar7 = this_00->field_00F0;
        uVar12 = this_00->field_00EC;
        uVar22 = this_00->field_0174;
        goto LAB_004fb69f;
      }
      switch(DAT_0080c4f7) {
      case 1:
        uVar7 = this_00->field_0094 - this_00->field_0118;
        if (this_00->field_0110 != uVar7) {
          this_00->field_0110 = uVar7;
          Library::DKW::DDX::FUN_006b3640
                    ((int *)PTR_008075a8,this_00->field_017C,0xffffffff,this_00->field_010C,uVar7);
          uVar7 = this_00->field_0110 - this_00->field_0108;
          if (this_00->field_0100 != uVar7) {
LAB_004fb8d0:
            this_00->field_0100 = uVar7;
            goto LAB_004fb8d7;
          }
        }
        break;
      case 2:
        uVar7 = this_00->field_0094;
        if (this_00->field_0110 != uVar7) {
          this_00->field_0110 = uVar7;
          Library::DKW::DDX::FUN_006b3640
                    ((int *)PTR_008075a8,this_00->field_017C,0xffffffff,this_00->field_010C,uVar7);
          uVar7 = this_00->field_0110 - this_00->field_0108;
          if (this_00->field_0100 != uVar7) goto LAB_004fb8d0;
        }
        break;
      case 3:
        if (this_00->field_0094 - this_00->field_0118 < this_00->field_0110) {
          this_00->field_0110 = this_00->field_0110 + -10;
        }
        iVar5 = this_00->field_0094 - this_00->field_0118;
        if (this_00->field_0110 <= iVar5) {
          this_00->field_0110 = iVar5;
          DAT_0080c4f7 = 1;
        }
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,this_00->field_017C,0xffffffff,this_00->field_010C,
                   this_00->field_0110);
        if (DAT_0080c4f7 == 2) {
          FUN_006b3af0((int *)PTR_008075a8,this_00->field_017C);
        }
        iVar5 = this_00->field_0110 - this_00->field_0108;
        if (iVar5 < this_00->field_0100) {
          this_00->field_0100 = this_00->field_0100 + -10;
        }
        if (this_00->field_0100 <= iVar5) {
          this_00->field_0100 = iVar5;
        }
        uVar7 = this_00->field_0100;
        uVar12 = this_00->field_00FC;
        uVar22 = this_00->field_0178;
        goto LAB_004fb8ee;
      case 4:
        if (this_00->field_0110 < this_00->field_0094) {
          this_00->field_0110 = this_00->field_0110 + 10;
        }
        if (this_00->field_0094 <= this_00->field_0110) {
          this_00->field_0110 = this_00->field_0094;
          DAT_0080c4f7 = 2;
        }
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,this_00->field_017C,0xffffffff,this_00->field_010C,
                   this_00->field_0110);
        iVar5 = this_00->field_0110 - this_00->field_0108;
        if (this_00->field_0100 < iVar5) {
          this_00->field_0100 = this_00->field_0100 + 10;
        }
        if (iVar5 <= this_00->field_0100) {
          this_00->field_0100 = iVar5;
        }
        uVar7 = this_00->field_0100;
LAB_004fb8d7:
        uVar12 = this_00->field_00FC;
        uVar22 = this_00->field_0178;
LAB_004fb8ee:
        Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,uVar22,0xffffffff,uVar12,uVar7);
      }
      iVar5 = FUN_006b33f0(PTR_008075a8,this_00->field_0178);
      if ((iVar5 != 0) && (this_00->field_0247 + this_00->field_0243 <= this_00->field_09A0)) {
        FUN_006b3af0((int *)PTR_008075a8,this_00->field_0178);
      }
      break;
    case MESS_ID_CREATE:
      InitCPanel(local_44);
      break;
    case MESS_SHARED_0003:
      DoneCPanel(local_44);
      break;
    case MESS_SHARED_0005:
      piVar20 = &local_44->field_0148;
      local_d = 0;
      do {
        if (-1 < *piVar20) {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)PTR_008075a8,*piVar20,0xffffffff,piVar20[-0x43],piVar20[-0x2d]);
        }
        local_d = local_d + 1;
        piVar20 = piVar20 + 1;
      } while (local_d < 0xb);
    }
    goto cf_common_exit_004FD60B;
  }
  switch(SVar1) {
  case 0xb10f:
    pcVar30 = thunk_FUN_0052a390;
    pcVar24 = "BUT_MAPTRT";
cf_common_exit_004FBCF3:
    pCVar8 = thunk_FUN_00571240(pcVar24,0);
    PaintBut(this_00,4,message,6,pCVar8,pcVar30);
    break;
  case MESS_CPANELTY_B110:
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
    if (message->id == MESS_CPANELTY_B110) {
      if (local_44->field_0B64 == '\0') {
        cVar26 = '\x01';
LAB_004fc9c0:
        sub_004F8020(local_44,cVar26,0);
      }
    }
    else if (local_44->field_0C52 == '\0') {
      cVar26 = '\0';
      goto LAB_004fc9c0;
    }
    this_00->field_012C = 1;
    local_2e = (message->arg0).u32 == 3;
    pbVar10 = &local_2e;
    puVar23 = (undefined4 *)0x29;
    goto cf_common_exit_004FCF18;
  case MESS_CPANELTY_B110|MESS_ID_CREATE:
    pcVar30 = thunk_FUN_0052a030;
    pCVar8 = thunk_FUN_00571240("BUT_AIASS",0);
    PaintBut(this_00,4,message,1,pCVar8,pcVar30);
    break;
  case MESS_CPANELTY_B110|MESS_SHARED_0003:
    if ((message->arg0).u32 == 3) {
      FUN_006e6500(PTR_00807598,&local_44->field_0227);
      DAT_00807327 = DAT_00807327 | 8;
    }
    else {
      FUN_006e6500(PTR_00807598,(undefined4 *)0x0);
      DAT_00807327 = DAT_00807327 & 0xf7;
    }
LAB_004fc53f:
    PTR_00807598->field_0418 = (uint)DAT_00807327;
    thunk_FUN_005252c0(0xae);
    break;
  case 0xb114:
    pcVar30 = thunk_FUN_0052a3e0;
    pCVar8 = thunk_FUN_00571240("BUT_MAPDIR",0);
    PaintBut(this_00,4,message,6,pCVar8,pcVar30);
    break;
  case 0xb117:
    if (g_upgPanel_00802A48 != (UpgPanelTy *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)g_upgPanel_00802A48->field_0000->field_001C)(1);
    }
    break;
  case MESS_CPANELTY_B110|MESS_SHARED_0008:
    pcVar30 = thunk_FUN_00529f90;
    if (DAT_0080874e != '\x03') {
      pcVar30 = thunk_FUN_00529fe0;
    }
    pCVar8 = thunk_FUN_00571240("BUT_SHOWUPD",0);
    PaintBut(this_00,3,message,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar8,pcVar30);
    break;
  case MESS_CPANELTY_B110|MESS_CURSORCLASSTY_0009:
    if (g_frmPanel_0080168C != (FrmPanelTy *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)g_frmPanel_0080168C->field_0000->field_001C)(1);
    }
    break;
  case MESS_CPANELTY_B110|MESS_SYSTEMCLASSTY_000A:
    pcVar30 = thunk_FUN_00529f90;
    pCVar8 = thunk_FUN_00571240("BUT_SHOWFRM",0);
    PaintBut(this_00,3,message,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar8,pcVar30);
    break;
  case 0xb12a:
    pcVar30 = thunk_FUN_00529fe0;
    UVar27 = 0x274c;
    pCVar8 = thunk_FUN_00571240("BUT_SMALL",0);
    PaintTxtBut(this_00,3,message,1,pCVar8,UVar27,pcVar30);
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
      sub_004F8020(local_44,'\0',0);
    }
    this_00->field_012C = 1;
    pbVar10 = local_68;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      pbVar10[0] = 0;
      pbVar10[1] = 0;
      pbVar10[2] = 0;
      pbVar10[3] = 0;
      pbVar10 = pbVar10 + 4;
    }
    *pbVar10 = 0;
    if ((message->arg0).u32 == 3) {
      pbVar10 = local_68;
      local_68[0] = 6;
      this_00->field_0C11 = 1;
      puVar23 = (undefined4 *)0x17;
    }
    else {
      pbVar10 = local_68;
      local_68[0] = 7;
      this_00->field_0C11 = 0;
      puVar23 = (undefined4 *)0x17;
    }
    goto cf_common_exit_004FCF18;
  case 0xb12e:
    pcVar30 = thunk_FUN_0052a2d0;
    UVar27 = 0x3aa5;
    uVar25 = 0;
    iVar5 = 1;
    pCVar8 = thunk_FUN_00571240("BUT_AUTO",0);
    pCVar8 = FUN_006f2c00(pCVar8,iVar5,uVar25);
    PaintTxtBut(this_00,5,message,1,pCVar8,UVar27,pcVar30);
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
      sub_004F8020(local_44,'\0',0);
    }
    this_00->field_012C = 1;
    pbVar10 = &local_d;
    local_d = (char)message->id - 0x2f;
    puVar23 = (undefined4 *)0x9;
    goto cf_common_exit_004FCF18;
  case 0xb13f:
    pcVar30 = thunk_FUN_00529fe0;
    UVar27 = 0x274c;
    pCVar8 = thunk_FUN_00571240("BUT_SMALL",0);
    PaintTxtBut(this_00,5,message,1,pCVar8,UVar27,pcVar30);
    break;
  case 0xb15f:
  case 0xb160:
  case 0xb161:
  case 0xb162:
  case 0xb163:
  case MESS_CPANELTY_B164:
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
      sub_004F8020(local_44,'\0',0);
    }
    this_00->field_012C = 1;
    pbVar10 = (byte *)((int)&local_18 + 2);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_18 = CONCAT13((char)message->id + 0xa1,CONCAT12(1,(undefined2)local_18));
    puVar23 = (undefined4 *)0x27;
cf_common_exit_004FCF18:
    thunk_FUN_0054edf0(puVar23,(undefined4 *)pbVar10,0,0xffffffff);
    thunk_FUN_005252c0(0xae);
  }
cf_common_exit_004FD60B:
  g_currentExceptionFrame = local_d0.previous;
  iVar5 = FUN_006e5fd0(this_00,message);
  return iVar5;
}

