#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004046BA|004FB060; family_names=CPanelTy::GetMessage; ret4=2;
   direct_offsets={10:10,14:12,18:11,1c:6}

   [STSwitchEnumApplier] Switch target field_023F uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_023FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254
    */

int __thiscall CPanelTy::GetMessage(CPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  bool bVar2;
  CPanelTy *this_00;
  ushort uVar3;
  DWORD DVar4;
  int local_EAX_60;
  ushort *local_EAX_1162;
  ushort *puVar6;
  int local_EAX_2208;
  uint uVar5;
  int local_EAX_2734;
  int iVar6;
  LPSTR pCVar7;
  int iVar5;
  LPSTR text;
  uint *puVar8;
  uint uVar7;
  BITMAPINFO *pBVar9;
  int local_EAX_9661;
  int iVar11;
  uint uVar10;
  dword dVar11;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_02;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_03;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_04;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_05;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_06;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_07;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_08;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_09;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_10;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_11;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_12;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_13;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_14;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_15;
  int iVar12;
  byte bVar13;
  short sVar14;
  ushort **ppuVar15;
  FrmPanelTy *pFVar16;
  short sVar17;
  undefined1 *puVar18;
  int *piVar19;
  bool *pbVar20;
  bool local_ZF_8552;
  bool bVar14;
  uint *puVar21;
  uint uVar22;
  undefined4 *puVar23;
  ushort *puVar24;
  char *pcVar25;
  undefined4 uVar26;
  char cVar27;
  UINT UVar28;
  int iVar29;
  undefined4 *puVar30;
  code *pcVar31;
  InternalExceptionFrame local_d0;
  bool local_8c [29];
  int local_6f;
  bool local_68 [36];
  CPanelTy *local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint *local_34;
  bool local_2e;
  bool local_2d;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  bool local_d;
  int *local_c;
  undefined4 local_8;

  local_44 = this;
  DVar4 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0038 = DVar4;
  local_d0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_d0;
  local_EAX_60 = Library::MSVCRT::__setjmp3(local_d0.jumpBuffer,0);
  this_00 = local_44;
  if (local_EAX_60 != 0) {
    g_currentExceptionFrame = local_d0.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel.cpp",0x75f,0,local_EAX_60,
                                "%s","CPanelTy::GetMessage");
    if (iVar11 == 0) {
      RaiseInternalException(local_EAX_60,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x75f);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar1 = message->id;
  if (MESS_CPANELTY_B174 < SVar1) {
    switch(SVar1) {
    case 0xb17f:
    case 0xb180:
    case 0xb181:
    case 0xb182:
    case 0xb183:
    case 0xb184:
      piVar19 = (message->arg1).ptr;
      iVar6 = DAT_00806734;
      if (local_44->field_0138 != 0) {
        iVar6 = local_44->field_00A8;
      }
      FUN_006b4170((RecoveredSourceFamily_dibcopy *)local_44->field_0194,0,
                   *piVar19 - local_44->field_0050,piVar19[1] - iVar6,piVar19[2],piVar19[3],
                   (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a);
      if (this_00->field_0BFC == '\0') {
        bVar13 = *(byte *)((SVar1 - 0xa56e) + (int)this_00);
        if (bVar13 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = bVar13 + 6;
        }
      }
      else {
        uVar5 = (uint)*(byte *)((SVar1 - 0xa56e) + (int)this_00);
      }
      iVar6 = DAT_00806734;
      if (this_00->field_0138 != 0) {
        iVar6 = this_00->field_00A8;
      }
      local_1c = (char *)(piVar19[1] - iVar6);
      pBVar9 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0B17,uVar5);
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,*piVar19 - this_00->field_0050,
             (int)local_1c,'\x01',(byte *)pBVar9);
      iVar6 = DAT_00806734;
      if (this_00->field_0138 != 0) {
        iVar6 = this_00->field_00A8;
      }
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,
                       (*piVar19 - this_00->field_0050) + 0x17,piVar19[1] - iVar6,piVar19[2] + -0x17
                       ,piVar19[3]);
      uVar5 = 2;
      iVar29 = -1;
      iVar6 = piVar19[2] + -0x17;
      iVar12 = 0;
      puVar21 = (uint *)&DAT_007c2310;
      puVar8 = (uint *)LoadResourceString(SVar1 - 0x6265,g_hINSTANCE_00807618);
      pcVar25 = (char *)thunk_FUN_00540c40(this_00->field_01B8,puVar8,puVar21,iVar6);
      ccFntTy::WrStr(this_00->field_01B8,pcVar25,iVar12,iVar29,uVar5);
      puVar24 = this_00->field_0148[5];
      if ((int)puVar24 < 0) break;
      uVar5 = this_00->field_00A8;
      uVar10 = this_00->field_0050;
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
      pbVar20 = (bool *)((int)&local_8 + 2);
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
      piVar19 = (message->arg1).ptr;
      uVar7 = thunk_FUN_00505070(local_44,(char)SVar1 + 0x61);
      iVar6 = DAT_00806734;
      if (this_00->field_0138 != 0) {
        iVar6 = this_00->field_00A8;
      }
      FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,
                   *piVar19 - this_00->field_0050,piVar19[1] - iVar6,piVar19[2],piVar19[3],
                   (-(DAT_0080874e != '\x03') & 0xfdU) + 0x3d);
      if (-1 < (int)uVar7) {
        if ((uVar7 == 0) || ((message->arg0).u32 == 0)) {
          iVar6 = 1;
        }
        else {
          iVar6 = 0;
        }
        iVar12 = piVar19[1];
        iVar29 = DAT_00806734;
        if (this_00->field_0138 != 0) {
          iVar29 = this_00->field_00A8;
        }
        pBVar9 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_09D5,iVar6);
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,*piVar19 - this_00->field_0050,
               iVar12 - iVar29,'\x01',(byte *)pBVar9);
      }
      puVar24 = this_00->field_0148[5];
      if ((int)puVar24 < 0) break;
      uVar5 = this_00->field_00A8;
      uVar10 = this_00->field_0050;
      goto cf_common_exit_004FD606;
    case MESS_SHARED_B1FF:
    case 0xb20d:
      dVar11 = 0xffffffff;
      uVar3 = 0;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(char *)((int)local_44->field_0B1F + uVar3 + 0x83) != '\0') {
          dVar11 = dVar11 + 1;
        }
      } while ((dVar11 != (message->arg0).u32) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (uVar3 < 6) {
        SetCmdBoat(local_44,(byte)uVar3);
      }
      else {
        SetCmdBoat(local_44,0);
      }
      break;
    case MESS_BEHPANELTY_B200:
      uVar5 = 0xffffffff;
      uVar3 = 0;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(char *)((int)local_44->field_0B1F + uVar3 + 0x83) != '\0') {
          uVar5 = uVar5 + 1;
        }
      } while ((uVar5 != (message->arg0).words.high) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (5 < uVar3) {
        uVar3 = 0;
      }
      pcVar31 = thunk_FUN_0052a320;
      iVar6 = 0;
      pcVar25 = thunk_FUN_00529590(*(Global_sub_00529590_param_1Enum *)
                                    ((int)local_44->field_0B1F + uVar3 + 0x83),local_44->field_0B99);
      pCVar7 = thunk_FUN_00571240(pcVar25,iVar6);
      PaintBut(this_00,3,message,1,pCVar7,pcVar31);
      break;
    case 0xb203:
    case 0xb20f:
      dVar11 = 0xffffffff;
      uVar3 = 0;
      do {
        if ((&local_44->field_0BFE)[uVar3] != '\0') {
          dVar11 = dVar11 + 1;
        }
      } while ((dVar11 != (message->arg0).u32) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (uVar3 < 6) {
        SetCmdObj(local_44,(byte)uVar3);
      }
      else {
        SetCmdObj(local_44,0);
      }
      break;
    case 0xb204:
      uVar5 = 0xffffffff;
      uVar3 = 0;
      do {
        if ((&local_44->field_0BFE)[uVar3] != '\0') {
          uVar5 = uVar5 + 1;
        }
      } while ((uVar5 != (message->arg0).words.high) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (5 < uVar3) {
        uVar3 = 0;
      }
      pcVar31 = thunk_FUN_0052a320;
      iVar6 = 0;
      pcVar25 = thunk_FUN_00529590((&local_44->field_0BFE)[uVar3],local_44->field_0BF5);
      pCVar7 = thunk_FUN_00571240(pcVar25,iVar6);
      PaintBut(this_00,5,message,1,pCVar7,pcVar31);
      break;
    case MESS_BLDOBJPANELTY_B206:
      pcVar31 = thunk_FUN_0052a7b0;
      pCVar7 = thunk_FUN_00571240("BUT_MFFRAMES",0);
      text = thunk_FUN_00571240("BUT_MFTABS",0);
      PaintTab(this_00,5,message,1,text,pCVar7,pcVar31);
      break;
    case MESS_RESEARCHPANELTY_B207:
      local_44->field_09D4 = *(undefined1 *)(message->arg0).ptr;
      thunk_FUN_005097b0();
      break;
    case MESS_TRADEPANELTY_B20B:
      pcVar31 = thunk_FUN_0052a7b0;
      pCVar7 = thunk_FUN_00571240("BUT_MFFRAMES",0);
      PaintTab(this_00,5,message,1,"BUT_RCTTYPESI",pCVar7,pcVar31);
      break;
    case MESS_BEHPANELTY_B20E:
      uVar5 = 0xffffffff;
      uVar3 = 0;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(char *)((int)local_44->field_0B1F + uVar3 + 0x83) != '\0') {
          uVar5 = uVar5 + 1;
        }
      } while ((uVar5 != (message->arg0).words.high) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (5 < uVar3) {
        uVar3 = 0;
      }
      pcVar31 = thunk_FUN_0052a320;
      iVar6 = 0;
      pcVar25 = thunk_FUN_00529590(*(Global_sub_00529590_param_1Enum *)
                                    ((int)local_44->field_0B1F + uVar3 + 0x83),local_44->field_0B99);
      pCVar7 = thunk_FUN_00571240(pcVar25,iVar6);
      PaintBut(this_00,3,message,6,pCVar7,pcVar31);
      break;
    case 0xb210:
      uVar5 = 0xffffffff;
      uVar3 = 0;
      do {
        if ((&local_44->field_0BFE)[uVar3] != '\0') {
          uVar5 = uVar5 + 1;
        }
      } while ((uVar5 != (message->arg0).words.high) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (5 < uVar3) {
        uVar3 = 0;
      }
      pcVar31 = thunk_FUN_0052a320;
      iVar6 = 0;
      pcVar25 = thunk_FUN_00529590((&local_44->field_0BFE)[uVar3],local_44->field_0BF5);
      pCVar7 = thunk_FUN_00571240(pcVar25,iVar6);
      PaintBut(this_00,5,message,6,pCVar7,pcVar31);
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
      pbVar20 = &local_2d;
      local_2d = SUB41(message->id - 0xb211 >> 1,0);
      puVar23 = (undefined4 *)0x2a;
      goto cf_common_exit_004FCF18;
    case 0xb212:
    case 0xb216:
      switch(local_44->field_0BF5) {
      case CASE_5F:
        pcVar25 = "BUT_TBDN";
LAB_004fd533:
        pcVar31 = thunk_FUN_00529fe0;
        pCVar7 = thunk_FUN_00571240(pcVar25,0);
        PaintBut(this_00,5,message,1,pCVar7,pcVar31);
        break;
      case CASE_64:
      case CASE_65:
      case CASE_6D:
        PaintBut(local_44,5,message,1,"BUT_MINUSSI",thunk_FUN_00529fe0);
      }
      break;
    case 0xb214:
    case 0xb218:
      switch(local_44->field_0BF5) {
      case CASE_5F:
        pcVar25 = "BUT_TBUP";
        goto LAB_004fd533;
      case CASE_64:
      case CASE_65:
      case CASE_6D:
        PaintBut(local_44,5,message,1,"BUT_PLUSSI",thunk_FUN_00529fe0);
      }
      break;
    case 0xb21a:
    case 0xb21c:
      if (local_44->field_0BF5 != CASE_6D) break;
      local_c = (int *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(1));
      piVar19 = (message->arg1).ptr;
      switch((message->arg0).u32) {
      case 0:
        local_c = (int *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(1));
        break;
      case 1:
      case 3:
        local_c = (int *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)((&local_44->field_0xc0f)[SVar1 - 0xb21a >> 1] != '\x03'));
        break;
      case 2:
        local_c = (int *)((uint)STPiece<1,3>(local_c) << 8);
      }
      iVar6 = piVar19[1];
      iVar12 = DAT_00806734;
      if (local_44->field_0138 != 0) {
        iVar12 = local_44->field_00A8;
      }
      pBVar9 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_44->field_09D5,
                            (uint)local_c & 0xff);
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,*piVar19 - this_00->field_0050,
             iVar6 - iVar12,'\x01',(byte *)pBVar9);
      puVar24 = this_00->field_0148[5];
      if ((int)puVar24 < 0) break;
      uVar5 = this_00->field_00A8;
      uVar10 = this_00->field_0050;
cf_common_exit_004FD606:
      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,(uint)puVar24,0xffffffff,uVar10,uVar5);
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
      pbVar20 = local_8c;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        pbVar20[0] = false;
        pbVar20[1] = false;
        pbVar20[2] = false;
        pbVar20[3] = false;
        pbVar20 = pbVar20 + 4;
      }
      *pbVar20 = false;
      pbVar20 = local_8c;
      local_6f = message->id - 0xb220;
      local_8c[0] = true;
      puVar23 = (undefined4 *)0x17;
      goto cf_common_exit_004FCF18;
    case 0xb230:
      cVar27 = local_44->field_0BCF;
      pcVar25 = "BUT_BEHREPAIR0";
      goto cf_common_exit_004FD1D2;
    case 0xb231:
      pcVar25 = "BUT_BEHREPAIR20";
      if (DAT_0080874e != '\x03') {
        pcVar25 = "BUT_BEHREPAIR50";
      }
      cVar27 = local_44->field_0BD0;
      goto cf_common_exit_004FD1D2;
    case 0xb232:
      pcVar25 = "BUT_BEHREPAIR50";
      if (DAT_0080874e != '\x03') {
        pcVar25 = "BUT_BEHREPAIR80";
      }
      cVar27 = local_44->field_0BD1;
cf_common_exit_004FD1D2:
      local_ZF_8552 = cVar27 == '\x03';
      pCVar7 = thunk_FUN_00571240(pcVar25,0);
      PaintBBut(this_00,3,message,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar7,local_ZF_8552);
      break;
    case 0xb233:
      bVar14 = local_44->field_0BD2 == '\x03';
      pCVar7 = thunk_FUN_00571240("BUT_BEHREPAIR80",0);
      PaintBBut(this_00,3,message,6,pCVar7,bVar14);
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
    pbVar20 = (bool *)((int)&local_14 + 2);
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
          iVar6 = 0;
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
        pcVar31 = thunk_FUN_0052a3e0;
        pCVar7 = thunk_FUN_00571240("BUT_MAPSMIL",0);
        PaintBut(this_00,4,message,6,pCVar7,pcVar31);
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
            iVar6 = 0;
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
        pcVar31 = thunk_FUN_0052a390;
        pcVar25 = "BUT_MAPZIN";
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
            iVar6 = 0;
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
        pcVar31 = thunk_FUN_0052a390;
        pCVar7 = thunk_FUN_00571240("BUT_MAPZOUT",0);
        PaintBut(this_00,4,message,6,pCVar7,pcVar31);
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
        pcVar31 = thunk_FUN_0052a390;
        pCVar7 = thunk_FUN_00571240("BUT_MAPTLFT",0);
        PaintBut(this_00,4,message,6,pCVar7,pcVar31);
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
          g_sT3DSMAPContext_00807598->field_0418 = (uint)DAT_00807327;
          thunk_FUN_005252c0(0xae);
          goto cf_common_exit_004FD60B;
        }
        if (SVar1 != MESS_CPANELTY_B105) goto cf_common_exit_004FD60B;
        pcVar31 = thunk_FUN_0052a3e0;
        pcVar25 = "BUT_MAPSCIV";
        goto cf_common_exit_004FBCF3;
      }
      local_8 = -1;
      local_c = (int *)0x1;
      if (local_44->field_023F == CASE_2) goto cf_common_exit_004FD60B;
      iVar6 = 0;
      uVar5 = (uint)(message->arg1).words.low;
      local_18 = (uint)(message->arg1).words.high;
      do {
        sVar17 = (short)iVar6;
        local_2c = (&local_44->field_003C)[sVar17];
        local_28 = (&local_44->field_0094)[sVar17];
        local_24 = (&local_44->field_0068)[sVar17];
        local_20 = (&local_44->field_00C0)[sVar17];
        if ((((int)uVar5 < local_2c) || (local_24 + local_2c <= (int)uVar5)) ||
           (((int)local_18 < local_28 || (local_20 + local_28 <= (int)local_18)))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        iVar12 = iVar6;
      } while ((!bVar2) && (iVar6 = iVar6 + 1, iVar12 = local_8, (short)iVar6 < 0xb));
      local_8 = iVar12;
      sVar17 = (short)local_8;
      iVar6 = (int)(short)local_8;
      switch(iVar6) {
      case 0:
      case 2:
      case 10:
        if ((g_bldObjPanel_00801684 == nullptr) ||
           (g_bldObjPanel_00801684->field_0172 == 2)) {
          piVar19 = (int *)0x1;
        }
        else {
          piVar19 = nullptr;
        }
        if ((g_behPanel_00801678 != nullptr) && (g_behPanel_00801678->field_0172 != 2)) {
          piVar19 = nullptr;
        }
        if ((g_sAMPanel_008016EC != nullptr) && (g_sAMPanel_008016EC->field_0172 != 2)) {
          piVar19 = nullptr;
        }
        pFVar16 = g_frmPanel_0080168C;
        if ((g_upgPanel_00802A48 != nullptr) && (g_upgPanel_00802A48->field_0172 != 2)) {
          piVar19 = nullptr;
        }
        break;
      default:
        piVar19 = local_c;
        goto LAB_004fbe73;
      case 6:
      case 8:
      case 9:
        if ((g_researchPanel_008016E8 == nullptr) ||
           (g_researchPanel_008016E8->field_0172 == 2)) {
          piVar19 = (int *)0x1;
        }
        else {
          piVar19 = nullptr;
        }
        if ((g_bldBoatPanel_0080167C != nullptr) &&
           (g_bldBoatPanel_0080167C->field_0172 != 2)) {
          piVar19 = nullptr;
        }
        if ((g_infocPanel_00801698 != nullptr) &&
           (g_infocPanel_00801698->field_0172 != 2)) {
          piVar19 = nullptr;
        }
        pFVar16 = (FrmPanelTy *)g_bldLabPanel_00801680;
        if ((g_tradePanel_00802A44 != nullptr) &&
           (g_tradePanel_00802A44->field_0172 != 2)) {
          piVar19 = nullptr;
        }
      }
      if ((pFVar16 != nullptr) && (pFVar16->field_0172 != 2)) {
        piVar19 = nullptr;
      }
LAB_004fbe73:
      local_14 = uVar5;
      if (piVar19 != nullptr) {
        switch(iVar6) {
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
                 ((((g_bldObjPanel_00801684 == nullptr ||
                    (g_bldObjPanel_00801684->field_0172 == 2)) &&
                   ((g_behPanel_00801678 == nullptr ||
                    (g_behPanel_00801678->field_0172 == 2)))) &&
                  ((((g_sAMPanel_008016EC == nullptr ||
                     (g_sAMPanel_008016EC->field_0172 == 2)) &&
                    ((g_upgPanel_00802A48 == nullptr ||
                     (g_upgPanel_00802A48->field_0172 == 2)))) &&
                   ((g_frmPanel_0080168C == nullptr ||
                    (g_frmPanel_0080168C->field_0172 == 2)))))))) &&
                (((short)local_8 != 6 ||
                 ((((((g_researchPanel_008016E8 == nullptr ||
                      (g_researchPanel_008016E8->field_0172 == 2)) &&
                     ((g_bldBoatPanel_0080167C == nullptr ||
                      (g_bldBoatPanel_0080167C->field_0172 == 2)))) &&
                    ((g_infocPanel_00801698 == nullptr ||
                     (g_infocPanel_00801698->field_0172 == 2)))) &&
                   ((g_tradePanel_00802A44 == nullptr ||
                    (g_tradePanel_00802A44->field_0172 == 2)))) &&
                  ((g_bldLabPanel_00801680 == nullptr ||
                   (g_bldLabPanel_00801680->field_0172 == 2)))))))))) {
              local_2c = (&local_44->field_003C)[iVar6] + 7;
              local_24 = 0xe;
              local_20 = 0x1b;
              sVar14 = 0;
              do {
                local_28 = sVar14 * 0x1d + 6 + (&local_44->field_0094)[(short)local_8];
                if (((((int)uVar5 < local_2c) ||
                     ((&local_44->field_003C)[iVar6] + 0x15 <= (int)uVar5)) ||
                    ((int)local_18 < local_28)) || (local_28 + 0x1b <= (int)local_18)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  if (*local_1c == '\x01') {
                    if ((local_1c[sVar14 + 0x2a] == '\0') && (local_1c[2] == '\x01')) {
                      sub_004F8020(local_44,(short)local_8 == 2,1);
                      SetNewDeep(this_00,sVar17 != 2,(byte)sVar14);
                    }
                  }
                  else {
                    sub_004F8020(local_44,(short)local_8 == 2,1);
                    SetNewDeep(this_00,sVar17 != 2,(byte)sVar14);
                  }
                  break;
                }
                sVar14 = sVar14 + 1;
              } while (sVar14 < 5);
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
            bVar13 = 0xff;
            local_c = (int *)0xff;
            if (*local_1c != '\0') {
              if ((short)local_8 == 3) {
                if ((((((g_bldObjPanel_00801684 != nullptr) &&
                       (g_bldObjPanel_00801684->field_0172 != 2)) ||
                      ((g_behPanel_00801678 != nullptr &&
                       (g_behPanel_00801678->field_0172 != 2)))) ||
                     ((g_sAMPanel_008016EC != nullptr &&
                      (g_sAMPanel_008016EC->field_0172 != 2)))) ||
                    ((g_upgPanel_00802A48 != nullptr &&
                     (g_upgPanel_00802A48->field_0172 != 2)))) ||
                   ((g_frmPanel_0080168C != nullptr &&
                    (g_frmPanel_0080168C->field_0172 != 2)))) break;
                iVar6 = local_44->field_00A0 + 0x40;
                if (((int)local_18 < iVar6) &&
                   (((local_44->field_00A0 + 10 < (int)local_18 &&
                     (iVar12 = (local_44->field_0048 + 0xb + iVar6) - uVar5, iVar12 < (int)local_18)
                     ) && ((int)local_18 < iVar12 + 0x21)))) {
                  bVar13 = 4 - (char)((int)(iVar6 - local_18) / 0xb);
                  local_c = (int *)(uint)bVar13;
                }
              }
              if ((short)local_8 == 5) {
                if (((((g_researchPanel_008016E8 != nullptr) &&
                      (g_researchPanel_008016E8->field_0172 != 2)) ||
                     ((g_bldBoatPanel_0080167C != nullptr &&
                      (g_bldBoatPanel_0080167C->field_0172 != 2)))) ||
                    ((g_infocPanel_00801698 != nullptr &&
                     (g_infocPanel_00801698->field_0172 != 2)))) ||
                   (((g_tradePanel_00802A44 != nullptr &&
                     (g_tradePanel_00802A44->field_0172 != 2)) ||
                    ((g_bldLabPanel_00801680 != nullptr &&
                     (g_bldLabPanel_00801680->field_0172 != 2)))))) break;
                iVar6 = local_44->field_00A8 + 0xb;
                if ((iVar6 < (int)local_18) &&
                   ((((int)local_18 < local_44->field_00A8 + 0x41 &&
                     (iVar12 = (iVar6 - local_44->field_0050) + -0x87 + uVar5,
                     (int)local_18 < iVar12)) && (iVar12 + -0x21 < (int)local_18)))) {
                  uVar5 = (int)(local_18 - iVar6) / 0xb;
                  bVar13 = (byte)uVar5;
                  local_c = (int *)(uVar5 & 0xff);
                }
              }
              piVar19 = local_c;
              if (bVar13 != 0xff) {
                if (*local_1c == '\x01') {
                  if ((((undefined1 *)((int)local_c + 0x2a))[(int)local_1c] == '\0') &&
                     (local_1c[2] == '\x01')) {
                    sub_004F8020(local_44,(short)local_8 == 3,1);
                    SetNewDeep(this_00,sVar17 != 3,(byte)piVar19);
                  }
                }
                else {
                  sub_004F8020(local_44,(short)local_8 == 3,1);
                  SetNewDeep(this_00,sVar17 != 3,(byte)local_c);
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
              iVar6 = 0;
              do {
                iVar12 = thunk_FUN_004f19d0('\x01',(Global_sub_004F19D0_param_2Enum)iVar6,&local_2c,
                                            &local_28);
                if (iVar12 != 0) {
                  local_2c = local_2c + this_00->field_0060;
                  local_28 = local_28 + this_00->field_00B8;
                  if (((((int)uVar5 < local_2c) || (local_24 + local_2c <= (int)uVar5)) ||
                      ((int)local_18 < local_28)) || (local_20 + local_28 <= (int)local_18)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  iVar12 = iVar6;
                  if (bVar2) break;
                }
                iVar6 = iVar6 + 1;
                iVar12 = local_8;
              } while ((short)iVar6 < 6);
              local_8 = iVar12;
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
              iVar6 = 0;
              do {
                iVar12 = thunk_FUN_004f19d0('\0',(Global_sub_004F19D0_param_2Enum)iVar6,&local_2c,
                                            &local_28);
                if (iVar12 != 0) {
                  local_2c = local_2c + this_00->field_0064;
                  local_28 = local_28 + this_00->field_00BC;
                  if ((((int)uVar5 < local_2c) || (local_24 + local_2c <= (int)uVar5)) ||
                     (((int)local_18 < local_28 || (local_20 + local_28 <= (int)local_18)))) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  iVar12 = iVar6;
                  if (bVar2) break;
                }
                iVar6 = iVar6 + 1;
                iVar12 = local_8;
              } while ((short)iVar6 < 6);
              local_8 = iVar12;
              if (-1 < (short)local_8) {
                STAllPlayersC::SetActivePanel
                          (g_allPlayers_007FA174,nullptr,(short)local_8 + 1,1);
              }
            }
          }
        }
      }
      goto cf_common_exit_004FD60B;
    }
    if (SVar1 == MESS_SHARED_0060) {
      local_8 = 0;
      local_1c = (char *)STReplaceLowWord((uint32_t)(local_1c), (uint16_t)((message->arg1).words.low));
      local_40 = STReplaceLowWord((uint32_t)(local_40), (uint16_t)((message->arg1).words.high));
      if (local_44->field_023F == CASE_1) {
        local_c = &local_44->field_0204;
        local_18 = 0;
        local_3c = 5;
        do {
          piVar19 = nullptr;
          switch(local_18) {
          case 0:
          case 1:
            if (((((g_bldObjPanel_00801684 != nullptr) &&
                  (g_bldObjPanel_00801684->field_0172 == 2)) &&
                 (g_behPanel_00801678 != nullptr)) &&
                (((g_behPanel_00801678->field_0172 == 2 &&
                  (g_upgPanel_00802A48 != nullptr)) &&
                 ((g_upgPanel_00802A48->field_0172 == 2 &&
                  ((g_frmPanel_0080168C != nullptr &&
                   (g_frmPanel_0080168C->field_0172 == 2)))))))) &&
               ((DAT_0080874e != '\x03' ||
                ((g_sAMPanel_008016EC != nullptr && (g_sAMPanel_008016EC->field_0172 == 2)
                 ))))) {
              piVar19 = local_c + 0x46;
            }
            break;
          case 3:
          case 4:
            if (((g_researchPanel_008016E8 != nullptr) &&
                (g_researchPanel_008016E8->field_0172 == 2)) &&
               ((g_bldBoatPanel_0080167C != nullptr &&
                (((g_bldBoatPanel_0080167C->field_0172 == 2 &&
                  (g_infocPanel_00801698 != nullptr)) &&
                 (g_infocPanel_00801698->field_0172 == 2)))))) {
              if (DAT_0080874e == '\x03') {
LAB_004fba8d:
                if ((g_bldLabPanel_00801680 != nullptr) &&
                   (g_bldLabPanel_00801680->field_0172 == 2)) {
LAB_004fbaa0:
                  piVar19 = local_c;
                }
              }
              else if ((g_tradePanel_00802A44 != nullptr) &&
                      (g_tradePanel_00802A44->field_0172 == 2)) {
                if (DAT_0080874e == '\x03') goto LAB_004fba8d;
                goto LAB_004fbaa0;
              }
            }
          }
          if (piVar19 != nullptr) {
            piVar19 = piVar19 + 1;
            local_14 = 10;
            do {
              if (piVar19[5] != 0) {
                uVar5 = (uint)local_1c & 0xffff;
                uVar10 = local_40 & 0xffff;
                if (((((int)uVar5 < piVar19[-1]) || (piVar19[1] + piVar19[-1] <= (int)uVar5)) ||
                    ((int)uVar10 < *piVar19)) || (piVar19[2] + *piVar19 <= (int)uVar10)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if ((bVar2) &&
                   ((piVar19[3] == 0 ||
                    (local_EAX_2734 =
                          FUN_006b55c0(piVar19[3],piVar19[4],uVar5 - piVar19[-1],uVar10 - *piVar19),
                    local_EAX_2734 != 0)))) {
                  local_8 = piVar19[5];
                }
              }
              piVar19 = piVar19 + 7;
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
            uVar5 = (uint)local_1c & 0xffff;
            uVar10 = local_40 & 0xffff;
            if (((((int)uVar5 < local_2c) || (local_24 + local_2c <= (int)uVar5)) ||
                ((int)uVar10 < local_28)) || (local_20 + local_28 <= (int)uVar10)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              iVar6 = ST3DSMAPContext::sub_006E68C0
                                (g_sT3DSMAPContext_00807598,(uVar5 - local_2c) + -5,
                                 (uVar10 - this_00->field_00A4) + -7,(int *)&local_34,&local_38);
              if (this_00->field_013C != 0) {
                if (iVar6 == 0) {
                  this_00->field_013C = 0;
                }
                else {
                  thunk_FUN_004ab470(local_34,local_38);
                }
              }
              if ((this_00->field_0140 != 0) && (iVar6 == 0)) {
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
      PlayBrief(this_00);
      bVar13 = 0;
      local_c = (int *)((uint)local_c & 0xffffff00);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      uVar26 = extraout_EDX;
      do {
        uVar5 = (uint)local_c & 0xff;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(char *)((int)this_00->field_0B1F + uVar5 + 0x30) != '\0') {
          if (((bVar13 < 5) || (bVar13 == 0xd)) || (bVar13 == 0xe)) {
            switch(uVar5) {
            case 0:
              Update1Panel(this_00);
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar26 = extraout_EDX_11;
              break;
            case 1:
              thunk_FUN_00502330();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar26 = extraout_EDX_12;
              break;
            case 3:
              thunk_FUN_005097b0();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar26 = extraout_EDX_13;
              break;
            case 4:
              Update5Panel(this_00);
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar26 = extraout_EDX_14;
              break;
            case 0xd:
            case 0xe:
              UpdateStackPanel(this_00,STReplaceLowByte((uint32_t)(uVar26), (uint8_t)(bVar13 - 0xd)));
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar26 = extraout_EDX_15;
            }
          }
          else {
            if ((bVar13 == 5) && (g_researchPanel_008016E8 != nullptr)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)g_researchPanel_008016E8->field_0000->field_001C)();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar26 = extraout_EDX_00;
            }
            if ((bVar13 == 6) && (g_bldBoatPanel_0080167C != nullptr)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)g_bldBoatPanel_0080167C->field_0000->field_001C)();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar26 = extraout_EDX_01;
            }
            if ((bVar13 == 7) && (g_bldObjPanel_00801684 != nullptr)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)g_bldObjPanel_00801684->field_0000->field_001C)();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar26 = extraout_EDX_02;
            }
            if ((bVar13 == 8) && (g_infocPanel_00801698 != nullptr)) {
              g_infocPanel_00801698->Update();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar26 = extraout_EDX_03;
            }
            if ((bVar13 == 9) && (g_tradePanel_00802A44 != nullptr)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)&g_tradePanel_00802A44->field_0000[1].field_0xc)();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar26 = extraout_EDX_04;
            }
            if ((bVar13 == 10) && (g_behPanel_00801678 != nullptr)) {
              g_behPanel_00801678->Update();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar26 = extraout_EDX_05;
            }
            if ((bVar13 == 0xb) && (g_bldLabPanel_00801680 != nullptr)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)g_bldLabPanel_00801680->field_0000->field_001C)();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar26 = extraout_EDX_06;
            }
            if ((bVar13 == 0xf) && (g_upgPanel_00802A48 != nullptr)) {
              g_upgPanel_00802A48->Update();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar26 = extraout_EDX_07;
            }
            if ((bVar13 == 0x10) && (g_frmPanel_0080168C != nullptr)) {
              g_frmPanel_0080168C->Update();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar26 = extraout_EDX_08;
            }
            if ((bVar13 == 0x11) && (g_sAMPanel_008016EC != nullptr)) {
              g_sAMPanel_008016EC->Update();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar26 = extraout_EDX_09;
            }
            if ((bVar13 == 0x12) && (g_helpPanel_00801690 != nullptr)) {
              HelpPanelTy::sub_00515180(g_helpPanel_00801690,'\x06');
              HelpPanelTy::sub_00515180(g_helpPanel_00801690,'\x05');
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar26 = extraout_EDX_10;
            }
          }
          *(undefined1 *)((int)this_00->field_0B1F + uVar5 + 0x30) = 0;
        }
        bVar13 = bVar13 + 1;
        local_c = (int *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar13));
      } while (bVar13 < 0x14);
      if (this_00->field_023F == CASE_3) {
        bVar2 = false;
        bVar13 = 0;
        piVar19 = &this_00->field_0094;
        do {
          iVar6 = this_00->field_0120 + -0x9b + this_00->field_0128;
          if ((bVar13 == 1) || (bVar13 == 7)) {
            iVar6 = iVar6 + this_00->field_00C0;
          }
          if (iVar6 < *piVar19) {
            *piVar19 = *piVar19 + -0xf;
          }
          iVar6 = this_00->field_0120 + -0x9b + this_00->field_0128;
          if ((bVar13 == 1) || (iVar12 = iVar6, bVar13 == 7)) {
            iVar12 = iVar6 + this_00->field_00C0;
          }
          if (*piVar19 <= iVar12) {
            if ((bVar13 == 1) || (bVar13 == 7)) {
              iVar6 = iVar6 + this_00->field_00C0;
            }
            *piVar19 = iVar6;
            bVar2 = true;
          }
          bVar13 = bVar13 + 1;
          piVar19 = piVar19 + 1;
        } while (bVar13 < 0xb);
        if (bVar2) {
          thunk_FUN_004a9b60(this_00->field_011C,this_00->field_0120,this_00->field_0124,
                             this_00->field_0128 + -0x9b);
          this_00->field_023F = CASE_5;
          if (DAT_0080731a == 0) {
            this_00->field_023F = CASE_1;
            ShiftControls(this_00,1);
          }
          else {
            puVar18 = &this_00->field_02EC;
            puVar23 = &this_00->field_02EE;
            local_c = (int *)0x2;
            do {
              puVar30 = nullptr;
              iVar12 = 0;
              iVar6 = 1;
              bVar13 = 0;
              uVar5 = 6;
              pcVar25 = thunk_FUN_00526100(nullptr,0);
              local_EAX_1162 =
                   Library::Ourlib::MFRLOAD::mfRLoad
                             (PTR_00806794,CASE_1F,pcVar25,uVar5,bVar13,iVar6,iVar12,puVar30);
              puVar23[-3] = local_EAX_1162;
              puVar18[-2] = (char)*local_EAX_1162;
              *puVar18 = 3;
              *puVar23 = this_00->field_0038;
              puVar18 = puVar18 + 1;
              puVar23 = puVar23 + 1;
              local_c = (int *)((int)local_c + -1);
            } while (local_c != nullptr);
            puVar23 = &this_00->field_0D53;
            puVar18 = &this_00->field_0D47;
            local_8 = 2;
            do {
              local_c = (int *)0x6;
              do {
                puVar30 = nullptr;
                iVar12 = 0;
                iVar6 = 1;
                bVar13 = 0;
                uVar5 = 6;
                pcVar25 = thunk_FUN_00526100(nullptr,0);
                puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                                   (PTR_00806794,CASE_1F,pcVar25,uVar5,bVar13,iVar6,iVar12,puVar30);
                puVar23[-0x12] = puVar6;
                puVar18[-0xc] = (char)*puVar6;
                *puVar18 = 3;
                *puVar23 = this_00->field_0038;
                puVar23 = puVar23 + 1;
                puVar18 = puVar18 + 1;
                local_c = (int *)((int)local_c + -1);
              } while (local_c != nullptr);
              local_8 = local_8 + -1;
            } while (local_8 != 0);
            local_c = nullptr;
            local_8 = 0;
          }
        }
        CursorClassTy::sub_0054B6D0(g_cursorClass_00802A30);
        bVar13 = 0;
        ppuVar15 = this_00->field_0148;
        do {
          if (-1 < (int)*ppuVar15) {
            Library::DKW::DDX::FUN_006b3640
                      ((int *)g_ddxContext_008075A8,(uint)*ppuVar15,0xffffffff,(uint)ppuVar15[-0x43]
                       ,(uint)ppuVar15[-0x2d]);
          }
          bVar13 = bVar13 + 1;
          ppuVar15 = ppuVar15 + 1;
        } while (bVar13 < 0xb);
      }
      else if (this_00->field_023F == CASE_4) {
        bVar13 = 0;
        piVar19 = &this_00->field_0094;
        do {
          iVar6 = this_00->field_0120 + this_00->field_0128;
          if ((bVar13 == 1) || (bVar13 == 7)) {
            iVar6 = iVar6 + this_00->field_00C0;
          }
          if (*piVar19 < iVar6) {
            *piVar19 = *piVar19 + 0xf;
          }
          iVar6 = this_00->field_0120 + this_00->field_0128;
          if ((bVar13 == 1) || (iVar12 = iVar6, bVar13 == 7)) {
            iVar12 = iVar6 + this_00->field_00C0;
          }
          if (iVar12 <= *piVar19) {
            if ((bVar13 == 1) || (bVar13 == 7)) {
              iVar6 = iVar6 + this_00->field_00C0;
            }
            *piVar19 = iVar6;
            this_00->field_023F = CASE_2;
          }
          bVar13 = bVar13 + 1;
          piVar19 = piVar19 + 1;
        } while (bVar13 < 0xb);
        CursorClassTy::sub_0054B6D0(g_cursorClass_00802A30);
        bVar13 = 0;
        ppuVar15 = this_00->field_0148;
        do {
          if (-1 < (int)*ppuVar15) {
            Library::DKW::DDX::FUN_006b3640
                      ((int *)g_ddxContext_008075A8,(uint)*ppuVar15,0xffffffff,(uint)ppuVar15[-0x43]
                       ,(uint)ppuVar15[-0x2d]);
          }
          bVar13 = bVar13 + 1;
          ppuVar15 = ppuVar15 + 1;
        } while (bVar13 < 0xb);
      }
      if (DAT_0080c4d3 == 3) {
        if (this_00->field_00F0 < this_00->field_0120) {
          this_00->field_00F0 = this_00->field_00F0 + 10;
        }
        if (this_00->field_0120 <= this_00->field_00F0) {
          this_00->field_00F0 = this_00->field_0120;
          DAT_0080c4d3 = 1;
        }
        uVar5 = this_00->field_00F0;
        uVar10 = this_00->field_00EC;
        uVar22 = this_00->field_0174;
LAB_004fb69f:
        Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,uVar22,0xffffffff,uVar10,uVar5);
      }
      else if (DAT_0080c4d3 == 4) {
        if ((int)(this_00->field_0120 - this_00->field_00F8) < this_00->field_00F0) {
          this_00->field_00F0 = this_00->field_00F0 + -10;
        }
        iVar6 = this_00->field_0120 - this_00->field_00F8;
        if (this_00->field_00F0 <= iVar6) {
          this_00->field_00F0 = iVar6;
          DAT_0080c4d3 = 2;
        }
        uVar5 = this_00->field_00F0;
        uVar10 = this_00->field_00EC;
        uVar22 = this_00->field_0174;
        goto LAB_004fb69f;
      }
      switch(DAT_0080c4f7) {
      case 1:
        uVar5 = this_00->field_0094 - this_00->field_0118;
        if (this_00->field_0110 != uVar5) {
          this_00->field_0110 = uVar5;
          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,this_00->field_017C,0xffffffff,this_00->field_010C
                     ,uVar5);
          uVar5 = this_00->field_0110 - this_00->field_0108;
          if (this_00->field_0100 != uVar5) {
LAB_004fb8d0:
            this_00->field_0100 = uVar5;
            goto LAB_004fb8d7;
          }
        }
        break;
      case 2:
        uVar5 = this_00->field_0094;
        if (this_00->field_0110 != uVar5) {
          this_00->field_0110 = uVar5;
          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,this_00->field_017C,0xffffffff,this_00->field_010C
                     ,uVar5);
          uVar5 = this_00->field_0110 - this_00->field_0108;
          if (this_00->field_0100 != uVar5) goto LAB_004fb8d0;
        }
        break;
      case 3:
        if ((int)(this_00->field_0094 - this_00->field_0118) < this_00->field_0110) {
          this_00->field_0110 = this_00->field_0110 + -10;
        }
        iVar6 = this_00->field_0094 - this_00->field_0118;
        if (this_00->field_0110 <= iVar6) {
          this_00->field_0110 = iVar6;
          DAT_0080c4f7 = 1;
        }
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,this_00->field_017C,0xffffffff,this_00->field_010C,
                   this_00->field_0110);
        if (DAT_0080c4f7 == 2) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,this_00->field_017C);
        }
        iVar6 = this_00->field_0110 - this_00->field_0108;
        if (iVar6 < this_00->field_0100) {
          this_00->field_0100 = this_00->field_0100 + -10;
        }
        if (this_00->field_0100 <= iVar6) {
          this_00->field_0100 = iVar6;
        }
        uVar5 = this_00->field_0100;
        uVar10 = this_00->field_00FC;
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
                  ((int *)g_ddxContext_008075A8,this_00->field_017C,0xffffffff,this_00->field_010C,
                   this_00->field_0110);
        iVar6 = this_00->field_0110 - this_00->field_0108;
        if (this_00->field_0100 < iVar6) {
          this_00->field_0100 = this_00->field_0100 + 10;
        }
        if (iVar6 <= this_00->field_0100) {
          this_00->field_0100 = iVar6;
        }
        uVar5 = this_00->field_0100;
LAB_004fb8d7:
        uVar10 = this_00->field_00FC;
        uVar22 = this_00->field_0178;
LAB_004fb8ee:
        Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,uVar22,0xffffffff,uVar10,uVar5);
      }
      local_EAX_2208 = FUN_006b33f0(g_ddxContext_008075A8,this_00->field_0178);
      if ((local_EAX_2208 != 0) &&
         (this_00->field_0247 + this_00->field_0243 <= this_00->field_09A0)) {
        FUN_006b3af0((int *)g_ddxContext_008075A8,this_00->field_0178);
      }
      break;
    case MESS_ID_CREATE:
      InitCPanel(local_44);
      break;
    case MESS_SHARED_0003:
      DoneCPanel(local_44);
      break;
    case MESS_SHARED_0005:
      ppuVar15 = local_44->field_0148;
      local_d = false;
      do {
        if (-1 < (int)*ppuVar15) {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,(uint)*ppuVar15,0xffffffff,(uint)ppuVar15[-0x43],
                     (uint)ppuVar15[-0x2d]);
        }
        local_d = (bool)(local_d + 1);
        ppuVar15 = ppuVar15 + 1;
      } while (local_d < 0xb);
    }
    goto cf_common_exit_004FD60B;
  }
  switch(SVar1) {
  case 0xb10f:
    pcVar31 = thunk_FUN_0052a390;
    pcVar25 = "BUT_MAPTRT";
cf_common_exit_004FBCF3:
    pCVar7 = thunk_FUN_00571240(pcVar25,0);
    PaintBut(this_00,4,message,6,pCVar7,pcVar31);
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
        cVar27 = '\x01';
LAB_004fc9c0:
        sub_004F8020(local_44,cVar27,0);
      }
    }
    else if (local_44->field_0C52 == '\0') {
      cVar27 = '\0';
      goto LAB_004fc9c0;
    }
    this_00->field_012C = 1;
    local_2e = (message->arg0).u32 == 3;
    pbVar20 = &local_2e;
    puVar23 = (undefined4 *)0x29;
    goto cf_common_exit_004FCF18;
  case MESS_CPANELTY_B110|MESS_ID_CREATE:
    pcVar31 = thunk_FUN_0052a030;
    pCVar7 = thunk_FUN_00571240("BUT_AIASS",0);
    PaintBut(this_00,4,message,1,pCVar7,pcVar31);
    break;
  case MESS_CPANELTY_B110|MESS_SHARED_0003:
    if ((message->arg0).u32 == 3) {
      ST3DSMAPContext::sub_006E6500(g_sT3DSMAPContext_00807598,local_44->field_0227);
      DAT_00807327 = DAT_00807327 | 8;
    }
    else {
      ST3DSMAPContext::sub_006E6500(g_sT3DSMAPContext_00807598,nullptr);
      DAT_00807327 = DAT_00807327 & 0xf7;
    }
LAB_004fc53f:
    g_sT3DSMAPContext_00807598->field_0418 = (uint)DAT_00807327;
    thunk_FUN_005252c0(0xae);
    break;
  case 0xb114:
    pcVar31 = thunk_FUN_0052a3e0;
    pCVar7 = thunk_FUN_00571240("BUT_MAPDIR",0);
    PaintBut(this_00,4,message,6,pCVar7,pcVar31);
    break;
  case 0xb117:
    if (g_upgPanel_00802A48 != nullptr) {
      (*g_upgPanel_00802A48->vtable->SetPanel)((SpecPanelTy *)g_upgPanel_00802A48,'\x01');
    }
    break;
  case MESS_CPANELTY_B110|MESS_SHARED_0008:
    pcVar31 = thunk_FUN_00529f90;
    if (DAT_0080874e != '\x03') {
      pcVar31 = thunk_FUN_00529fe0;
    }
    pCVar7 = thunk_FUN_00571240("BUT_SHOWUPD",0);
    PaintBut(this_00,3,message,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar7,pcVar31);
    break;
  case MESS_CPANELTY_B110|MESS_CURSORCLASSTY_0009:
    if (g_frmPanel_0080168C != nullptr) {
      (*g_frmPanel_0080168C->vtable->SetPanel)((SpecPanelTy *)g_frmPanel_0080168C,'\x01');
    }
    break;
  case MESS_CPANELTY_B110|MESS_SYSTEMCLASSTY_000A:
    pcVar31 = thunk_FUN_00529f90;
    pCVar7 = thunk_FUN_00571240("BUT_SHOWFRM",0);
    PaintBut(this_00,3,message,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar7,pcVar31);
    break;
  case 0xb12a:
    pcVar31 = thunk_FUN_00529fe0;
    UVar28 = 0x274c;
    pCVar7 = thunk_FUN_00571240("BUT_SMALL",0);
    PaintTxtBut(this_00,3,message,1,pCVar7,UVar28,pcVar31);
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
    pbVar20 = local_68;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      pbVar20[0] = false;
      pbVar20[1] = false;
      pbVar20[2] = false;
      pbVar20[3] = false;
      pbVar20 = pbVar20 + 4;
    }
    *pbVar20 = false;
    if ((message->arg0).u32 == 3) {
      pbVar20 = local_68;
      local_68[0] = true;
      this_00->field_0C11 = CASE_1;
      puVar23 = (undefined4 *)0x17;
    }
    else {
      pbVar20 = local_68;
      local_68[0] = true;
      this_00->field_0C11 = CASE_0;
      puVar23 = (undefined4 *)0x17;
    }
    goto cf_common_exit_004FCF18;
  case 0xb12e:
    pcVar31 = thunk_FUN_0052a2d0;
    UVar28 = 0x3aa5;
    uVar26 = 0;
    iVar6 = 1;
    pCVar7 = thunk_FUN_00571240("BUT_AUTO",0);
    pCVar7 = FUN_006f2c00(pCVar7,iVar6,uVar26);
    PaintTxtBut(this_00,5,message,1,pCVar7,UVar28,pcVar31);
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
    pbVar20 = &local_d;
    local_d = (bool)((char)message->id - 0x2f);
    puVar23 = (undefined4 *)0x9;
    goto cf_common_exit_004FCF18;
  case 0xb13f:
    pcVar31 = thunk_FUN_00529fe0;
    UVar28 = 0x274c;
    pCVar7 = thunk_FUN_00571240("BUT_SMALL",0);
    PaintTxtBut(this_00,5,message,1,pCVar7,UVar28,pcVar31);
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
    pbVar20 = (bool *)((int)&local_18 + 2);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_18 = CONCAT13((char)message->id + 0xa1,CONCAT12(1,(undefined2)local_18));
    puVar23 = (undefined4 *)0x27;
cf_common_exit_004FCF18:
    thunk_FUN_0054edf0(puVar23,(uint *)pbVar20,0,0xffffffff);
    thunk_FUN_005252c0(0xae);
  }
cf_common_exit_004FD60B:
  g_currentExceptionFrame = local_d0.previous;
  local_EAX_9661 = FUN_006e5fd0(this_00,message);
  return local_EAX_9661;
}

