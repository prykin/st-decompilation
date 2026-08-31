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
  int iVar4;
  int local_EAX_60;
  ushort *local_EAX_1162;
  ushort *puVar6;
  int local_EAX_2208;
  uint uVar5;
  int local_EAX_2734;
  LPSTR pCVar6;
  int iVar5;
  LPSTR text;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar8_mg2;
  uint *puVar7;
  ccFntTy *resourceString;
  uint uVar7;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar8_mg1;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar8;
  int local_EAX_9661;
  int iVar11;
  uint uVar8;
  dword dVar9;
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
  int iVar10;
  byte bVar11;
  short sVar12;
  ushort **ppuVar13;
  FrmPanelTy *pFVar14;
  short sVar15;
  byte *puVar16;
  int *piVar17;
  bool *pbVar18;
  bool local_ZF_8552;
  bool bVar14;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  ushort *puVar22;
  char *pcVar23;
  uint uVar24;
  char cVar25;
  UINT UVar26;
  int iVar27;
  code *pcVar28;
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
  uint local_18;
  uint local_14;
  bool local_d;
  int *local_c;
  uint local_8;
  local_44 = this;

  iVar4 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0038 = iVar4;
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
      piVar17 = (message->arg1).ptr;
      iVar4 = DAT_00806734;
      if (local_44->field_0138 != 0) {
        iVar4 = local_44->field_00A8;
      }
      FUN_006b4170((RecoveredSourceFamily_dibcopy *)local_44->field_0194,0,
                   *piVar17 - local_44->field_0050,piVar17[1] - iVar4,piVar17[2],piVar17[3],
                   (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a);
      if (this_00->field_0BFC == '\0') {
        bVar11 = *(byte *)((SVar1 - 0xa56e) + (int)this_00);
        if (bVar11 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = bVar11 + 6;
        }
      }
      else {
        uVar5 = (uint)*(byte *)((SVar1 - 0xa56e) + (int)this_00);
      }
      iVar4 = DAT_00806734;
      if (this_00->field_0138 != 0) {
        iVar4 = this_00->field_00A8;
      }
      local_1c = (char *)(piVar17[1] - iVar4);
      /* ST_CALLSITE[004FD2DC]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredGlobalRecordView_0081175C;/int */
      pRVar8_mg2 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_0B17,uVar5);
      /* ST_CALLSITE[004FD2F5]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,*piVar17 - this_00->field_0050,
             (int)local_1c,'\x01',pRVar8_mg2);
      iVar4 = DAT_00806734;
      if (this_00->field_0138 != 0) {
        iVar4 = this_00->field_00A8;
      }

      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,
                       (*piVar17 - this_00->field_0050) + 0x17,piVar17[1] - iVar4,piVar17[2] + -0x17
                       ,piVar17[3]);
      uVar5 = 2;
      iVar27 = -1;
      iVar4 = piVar17[2] + -0x17;
      iVar10 = 0;
      puVar19 = (uint *)&DAT_007c2310;
      /* ST_CALLSITE[004FD364]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/uint; signature=__stdcall;pointer:/uint;/WinDef.h/UINT;/WinDef.h/HINSTANCE */
      puVar7 = LoadResourceString(SVar1 - 0x6265,g_hINSTANCE_00807618);
      /* ST_CALLSITE[004FD371]: CALL 0x0040326f; direct=0040326F thunk_FUN_00540c40; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00540C40_D825DD02;pointer:/uint;pointer:/uint;/int */
      resourceString =
           thunk_FUN_00540c40((RecoveredRecord_00540C40_D825DD02 *)this_00->field_01B8,puVar7,
                              puVar19,iVar4);

      ccFntTy::WrStr(this_00->field_01B8,(char *)resourceString,iVar10,iVar27,uVar5);
      puVar22 = this_00->field_0148[5];
      if ((int)puVar22 < 0) break;
      uVar5 = this_00->field_00A8;
      uVar8 = this_00->field_0050;
      goto cf_common_exit_004FD606;
    case 0xb18f:
    case 0xb190:
    case 0xb191:
    case 0xb192:
    case 0xb193:
    case 0xb194:
      /* ST_CALLSITE[004FCE1F]: CALL 0x00403d7d; direct=00403D7D CPanelTy::sub_005050B0 */
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
        /* ST_CALLSITE[004FCE7D]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
        sub_004F8020(this_00,'\0',0);
      }
      pbVar18 = (bool *)((int)&local_8 + 2);
      this_00->field_012C = 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8 = CONCAT13((char)iVar5,CONCAT12(2,(short)local_8));
      puVar21 = (undefined4 *)0x27;
      goto cf_common_exit_004FCF18;
    case 0xb19f:
    case 0xb1a0:
    case 0xb1a1:
    case 0xb1a2:
    case 0xb1a3:
    case 0xb1a4:
      piVar17 = (message->arg1).ptr;

      uVar7 = thunk_FUN_00505070(local_44,(char)SVar1 + 0x61);
      iVar4 = DAT_00806734;
      if (this_00->field_0138 != 0) {
        iVar4 = this_00->field_00A8;
      }
      FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,
                   *piVar17 - this_00->field_0050,piVar17[1] - iVar4,piVar17[2],piVar17[3],
                   (-(DAT_0080874e != '\x03') & 0xfdU) + 0x3d);
      if (-1 < (int)uVar7) {
        if ((uVar7 == 0) || ((message->arg0).u32 == 0)) {
          iVar4 = 1;
        }
        else {
          iVar4 = 0;
        }
        iVar10 = piVar17[1];
        iVar27 = DAT_00806734;
        if (this_00->field_0138 != 0) {
          iVar27 = this_00->field_00A8;
        }
        /* ST_CALLSITE[004FD453]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredGlobalRecordView_0081175C;/int */
        pRVar8_mg1 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_09D5,iVar4);
        /* ST_CALLSITE[004FD46B]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,*piVar17 - this_00->field_0050,
               iVar10 - iVar27,'\x01',pRVar8_mg1);
      }
      puVar22 = this_00->field_0148[5];
      if ((int)puVar22 < 0) break;
      uVar5 = this_00->field_00A8;
      uVar8 = this_00->field_0050;
      goto cf_common_exit_004FD606;
    case MESS_SHARED_B1FF:
    case 0xb20d:
      dVar9 = 0xffffffff;
      uVar3 = 0;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(char *)((int)local_44->field_0B1F + uVar3 + 0x83) != '\0') {
          dVar9 = dVar9 + 1;
        }
      } while ((dVar9 != (message->arg0).u32) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (uVar3 < 6) {
        /* ST_CALLSITE[004FCD08]: CALL 0x00401190; direct=00401190 CPanelTy::SetCmdBoat */
        SetCmdBoat(local_44,(byte)uVar3);
      }
      else {
        /* ST_CALLSITE[004FCCF6]: CALL 0x00401190; direct=00401190 CPanelTy::SetCmdBoat */
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
      pcVar28 = thunk_FUN_0052a320;
      iVar4 = 0;
      pcVar23 = thunk_FUN_00529590(*(Global_sub_00529590_param_1Enum *)
                                    ((int)local_44->field_0B1F + uVar3 + 0x83),local_44->field_0B99);
      pCVar6 = thunk_FUN_00571240(pcVar23,iVar4);
      /* ST_CALLSITE[004FCFA4]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
      PaintBut(this_00,3,message,1,pCVar6,pcVar28);
      break;
    case 0xb203:
    case 0xb20f:
      dVar9 = 0xffffffff;
      uVar3 = 0;
      do {
        if ((&local_44->field_0BFE)[uVar3] != '\0') {
          dVar9 = dVar9 + 1;
        }
      } while ((dVar9 != (message->arg0).u32) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (uVar3 < 6) {
        /* ST_CALLSITE[004FCD59]: CALL 0x00403206; direct=00403206 CPanelTy::SetCmdObj */
        SetCmdObj(local_44,(byte)uVar3);
      }
      else {
        /* ST_CALLSITE[004FCD47]: CALL 0x00403206; direct=00403206 CPanelTy::SetCmdObj */
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
      pcVar28 = thunk_FUN_0052a320;
      iVar4 = 0;
      pcVar23 = thunk_FUN_00529590((&local_44->field_0BFE)[uVar3],local_44->field_0BF5);
      pCVar6 = thunk_FUN_00571240(pcVar23,iVar4);
      /* ST_CALLSITE[004FD096]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
      PaintBut(this_00,5,message,1,pCVar6,pcVar28);
      break;
    case MESS_BLDOBJPANELTY_B206:
      pcVar28 = thunk_FUN_0052a7b0;
      pCVar6 = thunk_FUN_00571240("BUT_MFFRAMES",0);
      text = thunk_FUN_00571240("BUT_MFTABS",0);
      /* ST_CALLSITE[004FD148]: CALL 0x004047dc; direct=004047DC CPanelTy::PaintTab */
      PaintTab(this_00,5,message,1,text,pCVar6,pcVar28);
      break;
    case MESS_RESEARCHPANELTY_B207:
      local_44->field_09D4 = *(undefined1 *)(message->arg0).ptr;
      thunk_FUN_005097b0();
      break;
    case MESS_TRADEPANELTY_B20B:
      pcVar28 = thunk_FUN_0052a7b0;
      /* ST_CALLSITE[004FD15E]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int */
      pcVar23 = thunk_FUN_00571240("BUT_MFFRAMES",0);
      /* ST_CALLSITE[004FD176]: CALL 0x004047dc; direct=004047DC CPanelTy::PaintTab */
      PaintTab(this_00,5,message,1,"BUT_RCTTYPESI",pcVar23,pcVar28);
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
      pcVar28 = thunk_FUN_0052a320;
      iVar4 = 0;
      pcVar23 = thunk_FUN_00529590(*(Global_sub_00529590_param_1Enum *)
                                    ((int)local_44->field_0B1F + uVar3 + 0x83),local_44->field_0B99);
      pCVar6 = thunk_FUN_00571240(pcVar23,iVar4);
      /* ST_CALLSITE[004FD01D]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
      PaintBut(this_00,3,message,6,pCVar6,pcVar28);
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
      pcVar28 = thunk_FUN_0052a320;
      iVar4 = 0;
      pcVar23 = thunk_FUN_00529590((&local_44->field_0BFE)[uVar3],local_44->field_0BF5);
      pCVar6 = thunk_FUN_00571240(pcVar23,iVar4);
      /* ST_CALLSITE[004FD10F]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
      PaintBut(this_00,5,message,6,pCVar6,pcVar28);
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
        /* ST_CALLSITE[004FCEEE]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
        sub_004F8020(local_44,'\0',0);
      }
      this_00->field_012C = 1;
      pbVar18 = &local_2d;
      local_2d = SUB41(message->id - 0xb211 >> 1,0);
      puVar21 = (undefined4 *)0x2a;
      goto cf_common_exit_004FCF18;
    case 0xb212:
    case 0xb216:
      switch(local_44->field_0BF5) {
      case CASE_5F:
        pcVar23 = "BUT_TBDN";
LAB_004fd533:
        pcVar28 = thunk_FUN_00529fe0;
        pCVar6 = thunk_FUN_00571240(pcVar23,0);
        /* ST_CALLSITE[004FD546]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
        PaintBut(this_00,5,message,1,pCVar6,pcVar28);
        break;
      case CASE_64:
      case CASE_65:
      case CASE_6D:
        /* ST_CALLSITE[004FD4D0]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
        PaintBut(local_44,5,message,1,"BUT_MINUSSI",thunk_FUN_00529fe0);
      }
      break;
    case 0xb214:
    case 0xb218:
      switch(local_44->field_0BF5) {
      case CASE_5F:
        pcVar23 = "BUT_TBUP";
        goto LAB_004fd533;
      case CASE_64:
      case CASE_65:
      case CASE_6D:
        /* ST_CALLSITE[004FD51D]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
        PaintBut(local_44,5,message,1,"BUT_PLUSSI",thunk_FUN_00529fe0);
      }
      break;
    case 0xb21a:
    case 0xb21c:
      if (local_44->field_0BF5 != CASE_6D) break;
      local_c = (int *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(1));
      piVar17 = (message->arg1).ptr;
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
      iVar4 = piVar17[1];
      iVar10 = DAT_00806734;
      if (local_44->field_0138 != 0) {
        iVar10 = local_44->field_00A8;
      }
      /* ST_CALLSITE[004FD5C8]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredGlobalRecordView_0081175C;/int */
      pRVar8 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)local_44->field_09D5,
                            (uint)local_c & 0xff);
      /* ST_CALLSITE[004FD5E0]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,*piVar17 - this_00->field_0050,
             iVar4 - iVar10,'\x01',pRVar8);
      puVar22 = this_00->field_0148[5];
      if ((int)puVar22 < 0) break;
      uVar5 = this_00->field_00A8;
      uVar8 = this_00->field_0050;
cf_common_exit_004FD606:

      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,(uint)puVar22,0xffffffff,uVar8,uVar5);
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
        /* ST_CALLSITE[004FCDB2]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
        sub_004F8020(local_44,'\x01',0);
      }
      this_00->field_012C = 1;
      pbVar18 = local_8c;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        pbVar18[0] = false;
        pbVar18[1] = false;
        pbVar18[2] = false;
        pbVar18[3] = false;
        pbVar18 = pbVar18 + 4;
      }
      *pbVar18 = false;
      pbVar18 = local_8c;
      local_6f = message->id - 0xb220;
      local_8c[0] = true;
      puVar21 = (undefined4 *)0x17;
      goto cf_common_exit_004FCF18;
    case 0xb230:
      cVar25 = local_44->field_0BCF;
      pcVar23 = "BUT_BEHREPAIR0";
      goto cf_common_exit_004FD1D2;
    case 0xb231:
      pcVar23 = "BUT_BEHREPAIR20";
      if (DAT_0080874e != '\x03') {
        pcVar23 = "BUT_BEHREPAIR50";
      }
      cVar25 = local_44->field_0BD0;
      goto cf_common_exit_004FD1D2;
    case 0xb232:
      pcVar23 = "BUT_BEHREPAIR50";
      if (DAT_0080874e != '\x03') {
        pcVar23 = "BUT_BEHREPAIR80";
      }
      cVar25 = local_44->field_0BD1;
cf_common_exit_004FD1D2:
      local_ZF_8552 = cVar25 == '\x03';
      pCVar6 = thunk_FUN_00571240(pcVar23,0);
      /* ST_CALLSITE[004FD1F5]: CALL 0x0040168b; direct=0040168B CPanelTy::PaintBBut */
      PaintBBut(this_00,3,message,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar6,local_ZF_8552);
      break;
    case 0xb233:
      bVar14 = local_44->field_0BD2 == '\x03';
      pCVar6 = thunk_FUN_00571240("BUT_BEHREPAIR80",0);
      /* ST_CALLSITE[004FD224]: CALL 0x0040168b; direct=0040168B CPanelTy::PaintBBut */
      PaintBBut(this_00,3,message,6,pCVar6,bVar14);
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
      /* ST_CALLSITE[004FCC73]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
      sub_004F8020(local_44,'\0',0);
    }
    this_00->field_012C = 1;
    pbVar18 = (bool *)((int)&local_14 + 2);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_14 = CONCAT13((char)message->id + 0x91,(int3)local_14) & 0xff00ffff;
    puVar21 = (undefined4 *)0x27;
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
          iVar4 = 0;
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
        pcVar28 = thunk_FUN_0052a3e0;
        pCVar6 = thunk_FUN_00571240("BUT_MAPSMIL",0);
        /* ST_CALLSITE[004FC700]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
        PaintBut(this_00,4,message,6,pCVar6,pcVar28);
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
            iVar4 = 0;
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
        pcVar28 = thunk_FUN_0052a390;
        pcVar23 = "BUT_MAPZIN";
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
            iVar4 = 0;
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
        pcVar28 = thunk_FUN_0052a390;
        pCVar6 = thunk_FUN_00571240("BUT_MAPZOUT",0);
        /* ST_CALLSITE[004FC73A]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
        PaintBut(this_00,4,message,6,pCVar6,pcVar28);
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
        pcVar28 = thunk_FUN_0052a390;
        pCVar6 = thunk_FUN_00571240("BUT_MAPTLFT",0);
        /* ST_CALLSITE[004FC763]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
        PaintBut(this_00,4,message,6,pCVar6,pcVar28);
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
        pcVar28 = thunk_FUN_0052a3e0;
        pcVar23 = "BUT_MAPSCIV";
        goto cf_common_exit_004FBCF3;
      }
      local_8 = -1;
      local_c = (int *)0x1;
      if (local_44->field_023F == CASE_2) goto cf_common_exit_004FD60B;
      iVar4 = 0;
      uVar5 = (uint)(message->arg1).words.low;
      local_18 = (uint)(message->arg1).words.high;
      do {
        sVar15 = (short)iVar4;
        local_2c = (&local_44->field_003C)[sVar15];
        local_28 = (&local_44->field_0094)[sVar15];
        local_24 = (&local_44->field_0068)[sVar15];
        local_20 = (&local_44->field_00C0)[sVar15];
        if ((((int)uVar5 < local_2c) || (local_24 + local_2c <= (int)uVar5)) ||
           (((int)local_18 < local_28 || (local_20 + local_28 <= (int)local_18)))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        iVar10 = iVar4;
      } while ((!bVar2) && (iVar4 = iVar4 + 1, iVar10 = local_8, (short)iVar4 < 0xb));
      local_8 = iVar10;
      sVar15 = (short)local_8;
      iVar4 = (short)local_8;
      switch(iVar4) {
      case 0:
      case 2:
      case 10:
        if ((g_bldObjPanel_00801684 == nullptr) ||
           (g_bldObjPanel_00801684->field_0172 == CASE_2)) {
          piVar17 = (int *)0x1;
        }
        else {
          piVar17 = nullptr;
        }
        if ((g_behPanel_00801678 != nullptr) && (g_behPanel_00801678->field_0172 != 2)) {
          piVar17 = nullptr;
        }
        if ((g_sAMPanel_008016EC != nullptr) && (g_sAMPanel_008016EC->field_0172 != 2)) {
          piVar17 = nullptr;
        }
        pFVar14 = g_frmPanel_0080168C;
        if ((g_upgPanel_00802A48 != nullptr) && (g_upgPanel_00802A48->field_0172 != 2)) {
          piVar17 = nullptr;
        }
        break;
      default:
        piVar17 = local_c;
        goto LAB_004fbe73;
      case 6:
      case 8:
      case 9:
        if ((g_researchPanel_008016E8 == nullptr) ||
           (g_researchPanel_008016E8->field_0172 == CASE_2)) {
          piVar17 = (int *)0x1;
        }
        else {
          piVar17 = nullptr;
        }
        if ((g_bldBoatPanel_0080167C != nullptr) &&
           (g_bldBoatPanel_0080167C->field_0172 != CASE_2)) {
          piVar17 = nullptr;
        }
        if ((g_infocPanel_00801698 != nullptr) &&
           (g_infocPanel_00801698->field_0172 != 2)) {
          piVar17 = nullptr;
        }
        pFVar14 = (FrmPanelTy *)g_bldLabPanel_00801680;
        if ((g_tradePanel_00802A44 != nullptr) &&
           (g_tradePanel_00802A44->field_0172 != 2)) {
          piVar17 = nullptr;
        }
      }
      if ((pFVar14 != nullptr) && (pFVar14->field_0172 != CASE_2)) {
        piVar17 = nullptr;
      }
LAB_004fbe73:
      local_14 = uVar5;
      if (piVar17 != nullptr) {
        switch(iVar4) {
        case 0:
        case 8:
          /* ST_CALLSITE[004FBE98]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
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
                    (g_bldObjPanel_00801684->field_0172 == CASE_2)) &&
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
                      (g_researchPanel_008016E8->field_0172 == CASE_2)) &&
                     ((g_bldBoatPanel_0080167C == nullptr ||
                      (g_bldBoatPanel_0080167C->field_0172 == CASE_2)))) &&
                    ((g_infocPanel_00801698 == nullptr ||
                     (g_infocPanel_00801698->field_0172 == 2)))) &&
                   ((g_tradePanel_00802A44 == nullptr ||
                    (g_tradePanel_00802A44->field_0172 == 2)))) &&
                  ((g_bldLabPanel_00801680 == nullptr ||
                   (g_bldLabPanel_00801680->field_0172 == CASE_2)))))))))) {
              local_2c = (&local_44->field_003C)[iVar4] + 7;
              local_24 = 0xe;
              local_20 = 0x1b;
              sVar12 = 0;
              do {
                local_28 = sVar12 * 0x1d + 6 + (&local_44->field_0094)[(short)local_8];
                if (((((int)uVar5 < local_2c) ||
                     ((&local_44->field_003C)[iVar4] + 0x15 <= (int)uVar5)) ||
                    ((int)local_18 < local_28)) || (local_28 + 0x1b <= (int)local_18)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  if (*local_1c == '\x01') {
                    if ((local_1c[sVar12 + 0x2a] == '\0') && (local_1c[2] == '\x01')) {
                      /* ST_CALLSITE[004FC0EF]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
                      sub_004F8020(local_44,(short)local_8 == 2,1);
                      /* ST_CALLSITE[004FC0FF]: CALL 0x00401ba9; direct=00401BA9 CPanelTy::SetNewDeep */
                      SetNewDeep(this_00,sVar15 != 2,(byte)sVar12);
                    }
                  }
                  else {
                    /* ST_CALLSITE[004FC118]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
                    sub_004F8020(local_44,(short)local_8 == 2,1);
                    /* ST_CALLSITE[004FC128]: CALL 0x00401ba9; direct=00401BA9 CPanelTy::SetNewDeep */
                    SetNewDeep(this_00,sVar15 != 2,(byte)sVar12);
                  }
                  break;
                }
                sVar12 = sVar12 + 1;
              } while (sVar12 < 5);
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
            bVar11 = 0xff;
            local_c = (int *)0xff;
            if (*local_1c != '\0') {
              if ((short)local_8 == 3) {
                if ((((((g_bldObjPanel_00801684 != nullptr) &&
                       (g_bldObjPanel_00801684->field_0172 != CASE_2)) ||
                      ((g_behPanel_00801678 != nullptr &&
                       (g_behPanel_00801678->field_0172 != 2)))) ||
                     ((g_sAMPanel_008016EC != nullptr &&
                      (g_sAMPanel_008016EC->field_0172 != 2)))) ||
                    ((g_upgPanel_00802A48 != nullptr &&
                     (g_upgPanel_00802A48->field_0172 != 2)))) ||
                   ((g_frmPanel_0080168C != nullptr &&
                    (g_frmPanel_0080168C->field_0172 != 2)))) break;
                iVar4 = local_44->field_00A0 + 0x40;
                if (((int)local_18 < iVar4) &&
                   (((local_44->field_00A0 + 10 < (int)local_18 &&
                     (iVar10 = (local_44->field_0048 + 0xb + iVar4) - uVar5, iVar10 < (int)local_18)
                     ) && ((int)local_18 < iVar10 + 0x21)))) {
                  bVar11 = 4 - (char)((int)(iVar4 - local_18) / 0xb);
                  local_c = (int *)(uint)bVar11;
                }
              }
              if ((short)local_8 == 5) {
                if (((((g_researchPanel_008016E8 != nullptr) &&
                      (g_researchPanel_008016E8->field_0172 != CASE_2)) ||
                     ((g_bldBoatPanel_0080167C != nullptr &&
                      (g_bldBoatPanel_0080167C->field_0172 != CASE_2)))) ||
                    ((g_infocPanel_00801698 != nullptr &&
                     (g_infocPanel_00801698->field_0172 != 2)))) ||
                   (((g_tradePanel_00802A44 != nullptr &&
                     (g_tradePanel_00802A44->field_0172 != 2)) ||
                    ((g_bldLabPanel_00801680 != nullptr &&
                     (g_bldLabPanel_00801680->field_0172 != CASE_2)))))) break;
                iVar4 = local_44->field_00A8 + 0xb;
                if ((iVar4 < (int)local_18) &&
                   ((((int)local_18 < local_44->field_00A8 + 0x41 &&
                     (iVar10 = (iVar4 - local_44->field_0050) + -0x87 + uVar5,
                     (int)local_18 < iVar10)) && (iVar10 + -0x21 < (int)local_18)))) {
                  uVar5 = (int)(local_18 - iVar4) / 0xb;
                  bVar11 = (byte)uVar5;
                  local_c = (int *)(uVar5 & 0xff);
                }
              }
              piVar17 = local_c;
              if (bVar11 != 0xff) {
                if (*local_1c == '\x01') {
                  if ((((undefined1 *)((int)local_c + 0x2a))[(int)local_1c] == '\0') &&
                     (local_1c[2] == '\x01')) {
                    /* ST_CALLSITE[004FC32C]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
                    sub_004F8020(local_44,(short)local_8 == 3,1);
                    /* ST_CALLSITE[004FC33C]: CALL 0x00401ba9; direct=00401BA9 CPanelTy::SetNewDeep */
                    SetNewDeep(this_00,sVar15 != 3,(byte)piVar17);
                  }
                }
                else {
                  /* ST_CALLSITE[004FC355]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
                  sub_004F8020(local_44,(short)local_8 == 3,1);
                  /* ST_CALLSITE[004FC368]: CALL 0x00401ba9; direct=00401BA9 CPanelTy::SetNewDeep */
                  SetNewDeep(this_00,sVar15 != 3,(byte)local_c);
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
              iVar4 = 0;
              do {

                iVar10 = thunk_FUN_004f19d0('\x01',(Global_sub_004F19D0_param_2Enum)iVar4,&local_2c,
                                            &local_28);
                if (iVar10 != 0) {
                  local_2c = local_2c + this_00->field_0060;
                  local_28 = local_28 + this_00->field_00B8;
                  if (((((int)uVar5 < local_2c) || (local_24 + local_2c <= (int)uVar5)) ||
                      ((int)local_18 < local_28)) || (local_20 + local_28 <= (int)local_18)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  iVar10 = iVar4;
                  if (bVar2) break;
                }
                iVar4 = iVar4 + 1;
                iVar10 = local_8;
              } while ((short)iVar4 < 6);
              local_8 = iVar10;
              if (-1 < (short)local_8) {
                /* ST_CALLSITE[004FC522]: CALL 0x00401875; direct=00401875 STAllPlayersC::SetActivePanel */
                STAllPlayersC::SetActivePanel(g_allPlayers_007FA174,1,(short)local_8 + 1,1);
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
              iVar4 = 0;
              do {

                iVar10 = thunk_FUN_004f19d0('\0',(Global_sub_004F19D0_param_2Enum)iVar4,&local_2c,
                                            &local_28);
                if (iVar10 != 0) {
                  local_2c = local_2c + this_00->field_0064;
                  local_28 = local_28 + this_00->field_00BC;
                  if ((((int)uVar5 < local_2c) || (local_24 + local_2c <= (int)uVar5)) ||
                     (((int)local_18 < local_28 || (local_20 + local_28 <= (int)local_18)))) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  iVar10 = iVar4;
                  if (bVar2) break;
                }
                iVar4 = iVar4 + 1;
                iVar10 = local_8;
              } while ((short)iVar4 < 6);
              local_8 = iVar10;
              if (-1 < (short)local_8) {
                /* ST_CALLSITE[004FC445]: CALL 0x00401875; direct=00401875 STAllPlayersC::SetActivePanel */
                STAllPlayersC::SetActivePanel(g_allPlayers_007FA174,0,(short)local_8 + 1,1);
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
          piVar17 = nullptr;
          switch(local_18) {
          case 0:
          case 1:
            if (((((g_bldObjPanel_00801684 != nullptr) &&
                  (g_bldObjPanel_00801684->field_0172 == CASE_2)) &&
                 (g_behPanel_00801678 != nullptr)) &&
                (((g_behPanel_00801678->field_0172 == 2 &&
                  (g_upgPanel_00802A48 != nullptr)) &&
                 ((g_upgPanel_00802A48->field_0172 == 2 &&
                  ((g_frmPanel_0080168C != nullptr &&
                   (g_frmPanel_0080168C->field_0172 == 2)))))))) &&
               ((DAT_0080874e != '\x03' ||
                ((g_sAMPanel_008016EC != nullptr && (g_sAMPanel_008016EC->field_0172 == 2)
                 ))))) {
              piVar17 = local_c + 0x46;
            }
            break;
          case 3:
          case 4:
            if (((g_researchPanel_008016E8 != nullptr) &&
                (g_researchPanel_008016E8->field_0172 == CASE_2)) &&
               ((g_bldBoatPanel_0080167C != nullptr &&
                (((g_bldBoatPanel_0080167C->field_0172 == CASE_2 &&
                  (g_infocPanel_00801698 != nullptr)) &&
                 (g_infocPanel_00801698->field_0172 == 2)))))) {
              if (DAT_0080874e == '\x03') {
LAB_004fba8d:
                if ((g_bldLabPanel_00801680 != nullptr) &&
                   (g_bldLabPanel_00801680->field_0172 == CASE_2)) {
LAB_004fbaa0:
                  piVar17 = local_c;
                }
              }
              else if ((g_tradePanel_00802A44 != nullptr) &&
                      (g_tradePanel_00802A44->field_0172 == 2)) {
                if (DAT_0080874e == '\x03') goto LAB_004fba8d;
                goto LAB_004fbaa0;
              }
            }
          }
          if (piVar17 != nullptr) {
            piVar17 = piVar17 + 1;
            local_14 = 10;
            do {
              if (piVar17[5] != 0) {
                uVar5 = (uint)local_1c & 0xffff;
                uVar8 = local_40 & 0xffff;
                if (((((int)uVar5 < piVar17[-1]) || (piVar17[1] + piVar17[-1] <= (int)uVar5)) ||
                    ((int)uVar8 < *piVar17)) || (piVar17[2] + *piVar17 <= (int)uVar8)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if ((bVar2) &&
                   ((piVar17[3] == 0 ||

                    (local_EAX_2734 =
                          FUN_006b55c0(piVar17[3],piVar17[4],uVar5 - piVar17[-1],uVar8 - *piVar17),
                    local_EAX_2734 != 0)))) {
                  local_8 = piVar17[5];
                }
              }
              piVar17 = piVar17 + 7;
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
          /* ST_CALLSITE[004FBB82]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
          g_cursorClass_00802A30->GetMessage((STMessage *)&this_00->field_0x18);
        }
        this_00->field_0144 = local_8;
        if (local_8 != 0) {
          this_00->field_0028 = 0x4201;
          *(undefined2 *)&this_00->field_0x2c = 0;
          *(undefined2 *)&this_00->field_0x2e = 2;
          this_00->field_0030 = this_00->field_0144;
          /* ST_CALLSITE[004FBBB7]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
          g_cursorClass_00802A30->GetMessage((STMessage *)&this_00->field_0x18);
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
            uVar8 = local_40 & 0xffff;
            if (((((int)uVar5 < local_2c) || (local_24 + local_2c <= (int)uVar5)) ||
                ((int)uVar8 < local_28)) || (local_20 + local_28 <= (int)uVar8)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {

              iVar4 = ST3DSMAPContext::sub_006E68C0
                                (g_sT3DSMAPContext_00807598,(uVar5 - local_2c) + -5,
                                 (uVar8 - this_00->field_00A4) + -7,(int *)&local_34,&local_38);
              if (this_00->field_013C != 0) {
                if (iVar4 == 0) {
                  this_00->field_013C = 0;
                }
                else {
                  thunk_FUN_004ab470(local_34,local_38);
                }
              }
              if ((this_00->field_0140 != 0) && (iVar4 == 0)) {
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
      /* ST_CALLSITE[004FB180]: CALL 0x00403062; direct=00403062 CPanelTy::PaintTV */
      PaintTV(local_44);
      /* ST_CALLSITE[004FB187]: CALL 0x0040326a; direct=0040326A CPanelTy::PaintNewDeep */
      PaintNewDeep(this_00);
      /* ST_CALLSITE[004FB18E]: CALL 0x00405231; direct=00405231 CPanelTy::PaintSMap */
      PaintSMap(this_00);
      /* ST_CALLSITE[004FB195]: CALL 0x00402775; direct=00402775 CPanelTy::PlayBrief */
      PlayBrief(this_00);
      bVar11 = 0;
      local_c = (int *)((uint)local_c & 0xffffff00);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      uVar24 = extraout_EDX;
      do {
        uVar5 = (uint)local_c & 0xff;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(char *)((int)this_00->field_0B1F + uVar5 + 0x30) != '\0') {
          if (((bVar11 < 5) || (bVar11 == 0xd)) || (bVar11 == 0xe)) {
            switch(uVar5) {
            case 0:
              /* ST_CALLSITE[004FB2D5]: CALL 0x0040206d; direct=0040206D CPanelTy::Update1Panel */
              Update1Panel(this_00);
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_11;
              break;
            case 1:
              thunk_FUN_00502330();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_12;
              break;
            case 3:
              thunk_FUN_005097b0();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_13;
              break;
            case 4:
              /* ST_CALLSITE[004FB2F0]: CALL 0x004025cc; direct=004025CC CPanelTy::Update5Panel */
              Update5Panel(this_00);
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_14;
              break;
            case 0xd:
            case 0xe:
              /* ST_CALLSITE[004FB2FF]: CALL 0x0040415b; direct=0040415B CPanelTy::UpdateStackPanel */
              UpdateStackPanel(this_00,STReplaceLowByte((uint32_t)(uVar24), (uint8_t)(bVar11 - 0xd)));
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_15;
            }
          }
          else {
            if ((bVar11 == 5) && (g_researchPanel_008016E8 != nullptr)) {
              /* ST_CALLSITE[004FB1E3]: CALL dword ptr [EDX + 0x1c] */
              (*STField<code *>(g_researchPanel_008016E8->field_0000,0x001C))();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_00;
            }
            if ((bVar11 == 6) && (g_bldBoatPanel_0080167C != nullptr)) {
              /* ST_CALLSITE[004FB1F7]: CALL dword ptr [EAX + 0x1c] */
              (*STField<code *>(g_bldBoatPanel_0080167C->field_0000,0x001C))();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_01;
            }
            if ((bVar11 == 7) && (g_bldObjPanel_00801684 != nullptr)) {
              /* ST_CALLSITE[004FB20B]: CALL dword ptr [EDX + 0x1c] */
              (*STField<code *>(g_bldObjPanel_00801684->field_0000,0x001C))();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_02;
            }
            if ((bVar11 == 8) && (g_infocPanel_00801698 != nullptr)) {
              /* ST_CALLSITE[004FB21F]: CALL dword ptr [EAX + 0x20] */
              g_infocPanel_00801698->Update();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_03;
            }
            if ((bVar11 == 9) && (g_tradePanel_00802A44 != nullptr)) {
              /* ST_CALLSITE[004FB233]: CALL dword ptr [EDX + 0x20] */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
              (**(code **)&g_tradePanel_00802A44->field_0000[1].field_0xc)();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_04;
            }
            if ((bVar11 == 10) && (g_behPanel_00801678 != nullptr)) {
              /* ST_CALLSITE[004FB247]: CALL dword ptr [EAX + 0x20] */
              g_behPanel_00801678->Update();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_05;
            }
            if ((bVar11 == 0xb) && (g_bldLabPanel_00801680 != nullptr)) {
              /* ST_CALLSITE[004FB25B]: CALL dword ptr [EDX + 0x1c] */
              (*STField<code *>(g_bldLabPanel_00801680->field_0000,0x001C))();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_06;
            }
            if ((bVar11 == 0xf) && (g_upgPanel_00802A48 != nullptr)) {
              /* ST_CALLSITE[004FB26F]: CALL dword ptr [EAX + 0x20] */
              g_upgPanel_00802A48->Update();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_07;
            }
            if ((bVar11 == 0x10) && (g_frmPanel_0080168C != nullptr)) {
              /* ST_CALLSITE[004FB283]: CALL dword ptr [EDX + 0x20] */
              g_frmPanel_0080168C->Update();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_08;
            }
            if ((bVar11 == 0x11) && (g_sAMPanel_008016EC != nullptr)) {
              /* ST_CALLSITE[004FB297]: CALL dword ptr [EAX + 0x20] */
              g_sAMPanel_008016EC->Update();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_09;
            }
            if ((bVar11 == 0x12) && (g_helpPanel_00801690 != nullptr)) {
              /* ST_CALLSITE[004FB2AB]: CALL 0x00402d38; direct=00402D38 HelpPanelTy::sub_00515180 */
              HelpPanelTy::sub_00515180(g_helpPanel_00801690,'\x06');
              /* ST_CALLSITE[004FB2B8]: CALL 0x00402d38; direct=00402D38 HelpPanelTy::sub_00515180 */
              HelpPanelTy::sub_00515180(g_helpPanel_00801690,'\x05');
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_10;
            }
          }
          *(undefined1 *)((int)this_00->field_0B1F + uVar5 + 0x30) = 0;
        }
        bVar11 = bVar11 + 1;
        local_c = (int *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar11));
      } while (bVar11 < 0x14);
      if (this_00->field_023F == CASE_3) {
        bVar2 = false;
        bVar11 = 0;
        piVar17 = &this_00->field_0094;
        do {
          iVar4 = this_00->field_0120 + -0x9b + this_00->field_0128;
          if ((bVar11 == 1) || (bVar11 == 7)) {
            iVar4 = iVar4 + this_00->field_00C0;
          }
          if (iVar4 < *piVar17) {
            *piVar17 = *piVar17 + -0xf;
          }
          iVar4 = this_00->field_0120 + -0x9b + this_00->field_0128;
          if ((bVar11 == 1) || (iVar10 = iVar4, bVar11 == 7)) {
            iVar10 = iVar4 + this_00->field_00C0;
          }
          if (*piVar17 <= iVar10) {
            if ((bVar11 == 1) || (bVar11 == 7)) {
              iVar4 = iVar4 + this_00->field_00C0;
            }
            *piVar17 = iVar4;
            bVar2 = true;
          }
          bVar11 = bVar11 + 1;
          piVar17 = piVar17 + 1;
        } while (bVar11 < 0xb);
        if (bVar2) {
          /* ST_CALLSITE[004FB49C]: CALL 0x00401b6d; direct=00401B6D OpticClassC::sub_004A9B60 */
          OpticClassC::sub_004A9B60
                    (g_opticClass_007FB2A0,this_00->field_011C,this_00->field_0120,
                     this_00->field_0124,this_00->field_0128 + -0x9b);
          this_00->field_023F = CASE_5;
          if (DAT_0080731a == 0) {
            this_00->field_023F = CASE_1;
            /* ST_CALLSITE[004FB586]: CALL 0x00402ed2; direct=00402ED2 CPanelTy::ShiftControls */
            ShiftControls(this_00,1);
          }
          else {
            puVar16 = &this_00->field_02EC;
            piVar17 = &this_00->field_02EE;
            local_c = (int *)0x2;
            do {
              puVar21 = nullptr;
              iVar10 = 0;
              iVar4 = 1;
              bVar11 = 0;
              uVar5 = 6;
              pcVar23 = thunk_FUN_00526100(nullptr,0);
              local_EAX_1162 =
                   Library::Ourlib::MFRLOAD::mfRLoad
                             (PTR_00806794,CASE_1F,pcVar23,uVar5,bVar11,iVar4,iVar10,puVar21);
              piVar17[-3] = (int)local_EAX_1162;
              puVar16[-2] = (char)*local_EAX_1162;
              *puVar16 = 3;
              *piVar17 = this_00->field_0038;
              puVar16 = puVar16 + 1;
              piVar17 = piVar17 + 1;
              local_c = (int *)((int)local_c + -1);
            } while (local_c != nullptr);
            piVar17 = &this_00->field_0D53;
            puVar16 = &this_00->field_0D47;
            local_8 = 2;
            do {
              local_c = (int *)0x6;
              do {
                puVar21 = nullptr;
                iVar10 = 0;
                iVar4 = 1;
                bVar11 = 0;
                uVar5 = 6;
                pcVar23 = thunk_FUN_00526100(nullptr,0);
                puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                                   (PTR_00806794,CASE_1F,pcVar23,uVar5,bVar11,iVar4,iVar10,puVar21);
                piVar17[-0x12] = (int)puVar6;
                puVar16[-0xc] = (char)*puVar6;
                *puVar16 = 3;
                *piVar17 = this_00->field_0038;
                piVar17 = piVar17 + 1;
                puVar16 = puVar16 + 1;
                local_c = (int *)((int)local_c + -1);
              } while (local_c != nullptr);
              local_8 = local_8 + -1;
            } while (local_8 != 0);
            local_c = nullptr;
            local_8 = 0;
          }
        }
        /* ST_CALLSITE[004FB591]: CALL 0x00403c5b; direct=00403C5B CursorClassTy::sub_0054B6D0 */
        CursorClassTy::sub_0054B6D0(g_cursorClass_00802A30);
        bVar11 = 0;
        ppuVar13 = this_00->field_0148;
        do {
          if (-1 < (int)*ppuVar13) {

            Library::DKW::DDX::FUN_006b3640
                      ((int *)g_ddxContext_008075A8,(uint)*ppuVar13,0xffffffff,(uint)ppuVar13[-0x43]
                       ,(uint)ppuVar13[-0x2d]);
          }
          bVar11 = bVar11 + 1;
          ppuVar13 = ppuVar13 + 1;
        } while (bVar11 < 0xb);
      }
      else if (this_00->field_023F == CASE_4) {
        bVar11 = 0;
        piVar17 = &this_00->field_0094;
        do {
          iVar4 = this_00->field_0120 + this_00->field_0128;
          if ((bVar11 == 1) || (bVar11 == 7)) {
            iVar4 = iVar4 + this_00->field_00C0;
          }
          if (*piVar17 < iVar4) {
            *piVar17 = *piVar17 + 0xf;
          }
          iVar4 = this_00->field_0120 + this_00->field_0128;
          if ((bVar11 == 1) || (iVar10 = iVar4, bVar11 == 7)) {
            iVar10 = iVar4 + this_00->field_00C0;
          }
          if (iVar10 <= *piVar17) {
            if ((bVar11 == 1) || (bVar11 == 7)) {
              iVar4 = iVar4 + this_00->field_00C0;
            }
            *piVar17 = iVar4;
            this_00->field_023F = CASE_2;
          }
          bVar11 = bVar11 + 1;
          piVar17 = piVar17 + 1;
        } while (bVar11 < 0xb);
        /* ST_CALLSITE[004FB3AF]: CALL 0x00403c5b; direct=00403C5B CursorClassTy::sub_0054B6D0 */
        CursorClassTy::sub_0054B6D0(g_cursorClass_00802A30);
        bVar11 = 0;
        ppuVar13 = this_00->field_0148;
        do {
          if (-1 < (int)*ppuVar13) {

            Library::DKW::DDX::FUN_006b3640
                      ((int *)g_ddxContext_008075A8,(uint)*ppuVar13,0xffffffff,(uint)ppuVar13[-0x43]
                       ,(uint)ppuVar13[-0x2d]);
          }
          bVar11 = bVar11 + 1;
          ppuVar13 = ppuVar13 + 1;
        } while (bVar11 < 0xb);
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
        uVar8 = this_00->field_00EC;
        uVar20 = this_00->field_0174;
LAB_004fb69f:

        Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,uVar20,0xffffffff,uVar8,uVar5);
      }
      else if (DAT_0080c4d3 == 4) {
        if ((int)(this_00->field_0120 - this_00->field_00F8) < this_00->field_00F0) {
          this_00->field_00F0 = this_00->field_00F0 + -10;
        }
        iVar4 = this_00->field_0120 - this_00->field_00F8;
        if (this_00->field_00F0 <= iVar4) {
          this_00->field_00F0 = iVar4;
          DAT_0080c4d3 = 2;
        }
        uVar5 = this_00->field_00F0;
        uVar8 = this_00->field_00EC;
        uVar20 = this_00->field_0174;
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
        iVar4 = this_00->field_0094 - this_00->field_0118;
        if (this_00->field_0110 <= iVar4) {
          this_00->field_0110 = iVar4;
          DAT_0080c4f7 = 1;
        }

        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,this_00->field_017C,0xffffffff,this_00->field_010C,
                   this_00->field_0110);
        if (DAT_0080c4f7 == 2) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,this_00->field_017C);
        }
        iVar4 = this_00->field_0110 - this_00->field_0108;
        if (iVar4 < this_00->field_0100) {
          this_00->field_0100 = this_00->field_0100 + -10;
        }
        if (this_00->field_0100 <= iVar4) {
          this_00->field_0100 = iVar4;
        }
        uVar5 = this_00->field_0100;
        uVar8 = this_00->field_00FC;
        uVar20 = this_00->field_0178;
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
        iVar4 = this_00->field_0110 - this_00->field_0108;
        if (this_00->field_0100 < iVar4) {
          this_00->field_0100 = this_00->field_0100 + 10;
        }
        if (iVar4 <= this_00->field_0100) {
          this_00->field_0100 = iVar4;
        }
        uVar5 = this_00->field_0100;
LAB_004fb8d7:
        uVar8 = this_00->field_00FC;
        uVar20 = this_00->field_0178;
LAB_004fb8ee:

        Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,uVar20,0xffffffff,uVar8,uVar5);
      }

      local_EAX_2208 = FUN_006b33f0(g_ddxContext_008075A8,this_00->field_0178);
      if ((local_EAX_2208 != 0) &&
         (this_00->field_0247 + this_00->field_0243 <= this_00->field_09A0)) {
        FUN_006b3af0((int *)g_ddxContext_008075A8,this_00->field_0178);
      }
      break;
    case MESS_ID_CREATE:
      /* ST_CALLSITE[004FB114]: CALL 0x004014a1; direct=004014A1 CPanelTy::InitCPanel */
      InitCPanel(local_44);
      break;
    case MESS_SHARED_0003:
      /* ST_CALLSITE[004FB120]: CALL 0x00404b42; direct=00404B42 CPanelTy::DoneCPanel */
      DoneCPanel(local_44);
      break;
    case MESS_SHARED_0005:
      ppuVar13 = local_44->field_0148;
      local_d = false;
      do {
        if (-1 < (int)*ppuVar13) {

          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,(uint)*ppuVar13,0xffffffff,(uint)ppuVar13[-0x43],
                     (uint)ppuVar13[-0x2d]);
        }
        local_d = (bool)(local_d + 1);
        ppuVar13 = ppuVar13 + 1;
      } while (local_d < 0xb);
    }
    goto cf_common_exit_004FD60B;
  }
  switch(SVar1) {
  case 0xb10f:
    pcVar28 = thunk_FUN_0052a390;
    pcVar23 = "BUT_MAPTRT";
cf_common_exit_004FBCF3:
    pCVar6 = thunk_FUN_00571240(pcVar23,0);
    /* ST_CALLSITE[004FBD06]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
    PaintBut(this_00,4,message,6,pCVar6,pcVar28);
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
        cVar25 = '\x01';
LAB_004fc9c0:
        /* ST_CALLSITE[004FC9C2]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
        sub_004F8020(local_44,cVar25,0);
      }
    }
    else if (local_44->field_0C52 == '\0') {
      cVar25 = '\0';
      goto LAB_004fc9c0;
    }
    this_00->field_012C = 1;
    local_2e = (message->arg0).u32 == 3;
    pbVar18 = &local_2e;
    puVar21 = (undefined4 *)0x29;
    goto cf_common_exit_004FCF18;
  case MESS_CPANELTY_B110|MESS_ID_CREATE:
    pcVar28 = thunk_FUN_0052a030;
    pCVar6 = thunk_FUN_00571240("BUT_AIASS",0);
    /* ST_CALLSITE[004FCC1A]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
    PaintBut(this_00,4,message,1,pCVar6,pcVar28);
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
    pcVar28 = thunk_FUN_0052a3e0;
    pCVar6 = thunk_FUN_00571240("BUT_MAPDIR",0);
    /* ST_CALLSITE[004FCBF1]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
    PaintBut(this_00,4,message,6,pCVar6,pcVar28);
    break;
  case 0xb117:
    if (g_upgPanel_00802A48 != nullptr) {
      /* ST_CALLSITE[004FC814]: CALL dword ptr [EDX + 0x1c] */
      (*g_upgPanel_00802A48->vtable->SetPanel)((SpecPanelTy *)g_upgPanel_00802A48,'\x01');
    }
    break;
  case MESS_CPANELTY_B110|MESS_SHARED_0008:
    pcVar28 = thunk_FUN_00529f90;
    if (DAT_0080874e != '\x03') {
      pcVar28 = thunk_FUN_00529fe0;
    }
    pCVar6 = thunk_FUN_00571240("BUT_SHOWUPD",0);
    /* ST_CALLSITE[004FCB7E]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
    PaintBut(this_00,3,message,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar6,pcVar28);
    break;
  case MESS_CPANELTY_B110|MESS_CURSORCLASSTY_0009:
    if (g_frmPanel_0080168C != nullptr) {
      /* ST_CALLSITE[004FC82E]: CALL dword ptr [EAX + 0x1c] */
      (*g_frmPanel_0080168C->vtable->SetPanel)((SpecPanelTy *)g_frmPanel_0080168C,'\x01');
    }
    break;
  case MESS_CPANELTY_B110|MESS_SYSTEMCLASSTY_000A:
    pcVar28 = thunk_FUN_00529f90;
    pCVar6 = thunk_FUN_00571240("BUT_SHOWFRM",0);
    /* ST_CALLSITE[004FCBB7]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
    PaintBut(this_00,3,message,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar6,pcVar28);
    break;
  case 0xb12a:
    pcVar28 = thunk_FUN_00529fe0;
    UVar26 = 0x274c;
    pCVar6 = thunk_FUN_00571240("BUT_SMALL",0);
    /* ST_CALLSITE[004FCB08]: CALL 0x00405ea2; direct=00405EA2 CPanelTy::PaintTxtBut */
    PaintTxtBut(this_00,3,message,1,pCVar6,UVar26,pcVar28);
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
      /* ST_CALLSITE[004FC885]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
      sub_004F8020(local_44,'\0',0);
    }
    this_00->field_012C = 1;
    pbVar18 = local_68;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar18[0] = false;
      pbVar18[1] = false;
      pbVar18[2] = false;
      pbVar18[3] = false;
      pbVar18 = pbVar18 + 4;
    }
    *pbVar18 = false;
    if ((message->arg0).u32 == 3) {
      pbVar18 = local_68;
      local_68[0] = true;
      this_00->field_0C11 = CASE_1;
      puVar21 = (undefined4 *)0x17;
    }
    else {
      pbVar18 = local_68;
      local_68[0] = true;
      this_00->field_0C11 = CASE_0;
      puVar21 = (undefined4 *)0x17;
    }
    goto cf_common_exit_004FCF18;
  case 0xb12e:
    pcVar28 = thunk_FUN_0052a2d0;
    UVar26 = 0x3aa5;
    uVar24 = 0;
    iVar4 = 1;
    /* ST_CALLSITE[004FCABE]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int */
    pcVar23 = thunk_FUN_00571240("BUT_AUTO",0);
    pCVar6 = FUN_006f2c00(pcVar23,iVar4,uVar24);
    /* ST_CALLSITE[004FCADA]: CALL 0x00405812; direct=00405812 CPanelTy::PaintTxtBut */
    PaintTxtBut(this_00,5,message,1,pCVar6,UVar26,pcVar28);
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
      /* ST_CALLSITE[004FC92D]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
      sub_004F8020(local_44,'\0',0);
    }
    this_00->field_012C = 1;
    pbVar18 = &local_d;
    local_d = (bool)((char)message->id - 0x2f);
    puVar21 = (undefined4 *)0x9;
    goto cf_common_exit_004FCF18;
  case 0xb13f:
    pcVar28 = thunk_FUN_00529fe0;
    UVar26 = 0x274c;
    pCVar6 = thunk_FUN_00571240("BUT_SMALL",0);
    /* ST_CALLSITE[004FCB36]: CALL 0x00405ea2; direct=00405EA2 CPanelTy::PaintTxtBut */
    PaintTxtBut(this_00,5,message,1,pCVar6,UVar26,pcVar28);
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
      /* ST_CALLSITE[004FCA7B]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
      sub_004F8020(local_44,'\0',0);
    }
    this_00->field_012C = 1;
    pbVar18 = (bool *)((int)&local_18 + 2);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_18 = CONCAT13((char)message->id + 0xa1,CONCAT12(1,(undefined2)local_18));
    puVar21 = (undefined4 *)0x27;
cf_common_exit_004FCF18:
    /* ST_CALLSITE[004FCF1E]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
    STPlaySystemC::sub_0054EDF0(g_playSystem_00802A38,puVar21,(uint *)pbVar18,0,0xffffffff);
    thunk_FUN_005252c0(0xae);
  }
cf_common_exit_004FD60B:
  g_currentExceptionFrame = local_d0.previous;

  local_EAX_9661 = FUN_006e5fd0(this_00,message);
  return local_EAX_9661;
}

