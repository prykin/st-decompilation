#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::Update4PanelWB

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254
    */

void __thiscall CPanelTy::Update4PanelWB(CPanelTy *this)

{
  CPanelTy_field_0BF5State *pCVar1;
  CPanelTy_field_0BFAState CVar2;
  CPanelTy_field_0C3CState CVar3;
  byte *pbVar4;
  RecoveredSourceFamily_dibcopy *pRVar5;
  CPanelTy *this_00;
  byte bVar7;
  int iVar8;
  uint uVar9;
  BITMAPINFO *pBVar10;
  char *pcVar17;
  Global_sub_00525EF0_param_1Enum GVar8;
  undefined4 uVar11;
  ushort *puVar12;
  int iVar15;
  char cVar13;
  int iVar14;
  char cVar15;
  int iVar16;
  CPanelTy_field_0BF5State *pCVar17;
  char *pcVar18;
  short *psVar19;
  CPanelTy_field_0C11State *pCVar20;
  uint *puVar21;
  CPanelTy_field_0BF5State *pCVar22;
  short *psVar23;
  CPanelTy_field_0C11State *pCVar25;
  bool bVar26;
  uint uVar27;
  undefined4 local_104 [4];
  undefined4 local_f4;
  undefined4 local_e4 [4];
  undefined4 local_d4;
  InternalExceptionFrame local_c4;
  CPanelTy *local_80;
  CPanelTy_field_0BF5State local_7c;
  char local_78;
  CPanelTy_field_0BFAState local_77;
  char local_76;
  char local_75;
  char local_74;
  short local_73 [6];
  char local_67;
  CPanelTy_field_0C11State local_60;
  int local_5f;
  uint local_5b;
  byte local_4d [2];
  char local_4b;
  byte local_48;
  short local_42;
  char local_40;
  char local_3e;
  ushort local_3d;
  char local_37;
  char local_36;
  CPanelTy_field_0C3CState local_35;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  ushort *local_18;
  uint local_14;
  byte *local_10;
  uint local_c;
  byte *local_8;

  local_c4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c4;
  local_80 = this;
  iVar8 = Library::MSVCRT::__setjmp3(local_c4.jumpBuffer,0);
  this_00 = local_80;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_c4.previous;
    iVar15 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0x497,0,iVar8,
                                "%s","CPanelTy::Update4PanelWB");
    if (iVar15 == 0) {
      RaiseInternalException(iVar8,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x497);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  pCVar1 = &local_80->field_0BF5;
  pCVar17 = pCVar1;
  pCVar22 = &local_7c;
  memmove(pCVar22, pCVar17, 0x5c); /* compiler REP MOVS byte copy */
  iVar14 = 0;
  pCVar17 = pCVar1;
  for (iVar14 = 0x17; iVar14 != 0; iVar14 = iVar14 + -1) {
    *pCVar17 = CASE_0;
    pCVar17 = pCVar17 + 1;
  }
  /* ST_CALLSITE[00507FC8]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
  STAllPlayersC::GetPanelInfo(g_allPlayers_007FA174,4,(AnonShape_0043BEB0_1C00EC12 *)pCVar1);
  CVar2 = this_00->field_0BFA;
  if ((local_77 != CVar2) || (local_76 != this_00->field_0BFB)) {
cf_common_exit_005091B9:
    /* ST_CALLSITE[005091BD]: CALL 0x004046bf; direct=004046BF CPanelTy::PaintCtrlObj */
    PaintCtrlObj(this_00,1);
    /* ST_CALLSITE[005091C6]: CALL 0x00402d83; direct=00402D83 CPanelTy::SetControlObj */
    SetControlObj(this_00,'\x01');
    /* ST_CALLSITE[005091CD]: CALL 0x00405ba0; direct=00405BA0 CPanelTy::sub_00506040 */
    sub_00506040(this_00);
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  if ((this_00->field_0BFB == '\x02') && (CVar2 == CASE_1)) {
    cVar13 = '\0';
    cVar15 = '\0';
    iVar14 = 0;
    do {
      if ((&this_00->field_0BFE)[iVar14] != '\0') {
        cVar15 = cVar15 + '\x01';
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < 6);
    iVar14 = 0;
    do {
      if (*(char *)((int)local_73 + iVar14) != '\0') {
        cVar13 = cVar13 + '\x01';
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < 6);
    if (cVar15 == cVar13) {
      iVar14 = 3;
      bVar26 = true;
      psVar19 = (short *)&this_00->field_0BFE;
      psVar23 = local_73;
      do {
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        bVar26 = *psVar19 == *psVar23;
        psVar19 = psVar19 + 1;
        psVar23 = psVar23 + 1;
      } while (bVar26);
      if (bVar26) {
        if (this_00->field_0BFD != local_74) {
          /* ST_CALLSITE[005080BB]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
          sub_004F1610(this_00,'\0');
        }
      }
      else {
        this_00->field_0028 = 5;
        FUN_006e6080(this_00,2,this_00->field_0302,(undefined4 *)&this_00->field_0x18);
        local_8 = (byte *)((uint)local_8 & 0xffffff00);
        pcVar18 = &this_00->field_0BFE;
        do {
          if (*pcVar18 != '\0') {
            /* ST_CALLSITE[00508082]: CALL 0x0040313e; direct=0040313E CPanelTy::sub_004F17D0 */
            sub_004F17D0(this_00,0,(byte)local_8);
          }
          bVar7 = (byte)local_8 + 1;
          pcVar18 = pcVar18 + 1;
          local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar7));
        } while (bVar7 < 6);
        /* ST_CALLSITE[00508098]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
        sub_004F1610(this_00,'\0');
        /* ST_CALLSITE[005080A3]: CALL 0x004040fc; direct=004040FC CursorClassTy::sub_0054A8D0 */
        CursorClassTy::sub_0054A8D0(g_cursorClass_00802A30);
      }
      iVar14 = 3;
      bVar26 = true;
      psVar19 = (short *)&this_00->field_0C04;
      psVar23 = local_73 + 3;
      do {
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        bVar26 = *psVar19 == *psVar23;
        psVar19 = psVar19 + 1;
        psVar23 = psVar23 + 1;
      } while (bVar26);
      if ((!bVar26) || (this_00->field_0BFC != local_75)) {
        /* ST_CALLSITE[005080F1]: CALL 0x00404f89; direct=00404F89 CPanelTy::sub_004F4570 */
        sub_004F4570(this_00,'\0',(int)&this_00->field_0BF5,(int)&local_7c);
      }
    }
    else {
      /* ST_CALLSITE[00508031]: CALL 0x00402d83; direct=00402D83 CPanelTy::SetControlObj */
      SetControlObj(this_00,'\x01');
    }
    if (((this_00->field_0C0A != local_67) || (this_00->field_0BFC != local_75)) &&
       (this_00->field_09C0[1] != 0)) {
      this_00->field_0028 = 0x20;
      if (this_00->field_0BFC == '\0') {
        uVar9 = 0;
      }
      else {
        uVar9 = (uint)(byte)this_00->field_0C0A;
      }
      *(uint *)&this_00->field_0x2c = uVar9;
      FUN_006e6080(this_00,2,this_00->field_09C0[1],(undefined4 *)&this_00->field_0x18);
    }
    if (*(int *)&this_00->field_0xc12 == local_5f) {
      iVar14 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
               *(int *)(this_00->field_09D9[5] + 4)) / 2;
      if (this_00->field_0C24 != local_4d[0]) {
        FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar14 + 0x36,0x5d,7,
                     0x21,0);
        bVar7 = this_00->field_0C24;
        local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar7));
        cVar13 = (char)(((uint)bVar7 * 0x21) / 100);
        local_10 = (byte *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(cVar13));
        if ((bVar7 != 0) && (cVar13 == '\0')) {
          local_10 = (byte *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(1));
        }
        if (bVar7 < 0x46) {
          iVar16 = (-(uint)(bVar7 < 0x14) & 5) + 5;
        }
        else {
          iVar16 = 0;
        }
        uVar9 = (uint)local_10 & 0xff;
        Library::DKW::WGR::FUN_006b55f0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar14 + 0x37,0x7e - uVar9
                   ,(byte *)this_00->field_028A,0,iVar16,*(int *)(this_00->field_028A + 4) - uVar9,5
                   ,uVar9);
        Library::DKW::WGR::FUN_006b55f0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar14 + 0x3f,0x5c,
                   (byte *)this_00->field_09D9[5],0,0x3f,0xc,0x75,0x11);
        Library::DKW::WGR::FUN_006b55f0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar14 + 0x3f,0x6c,
                   (byte *)this_00->field_09D9[5],0,0x3f,0x1c,0x44,0x13);
        /* ST_CALLSITE[00508295]: CALL 0x00404c7d; direct=00404C7D CPanelTy::PaintDamageXY */
        PaintDamageXY(this_00,this_00->field_0194,iVar14 + 0x41,0x5d,this_00->field_0C24,0x2714);
        /* ST_CALLSITE[005082BA]: CALL 0x00405a8d; direct=00405A8D CPanelTy::PaintCostsXY */
        PaintCostsXY(this_00,this_00->field_0194,iVar14 + 0x41,0x68,this_00->field_0C1C,
                     this_00->field_0C20,4,2);
        if (-1 < (int)this_00->field_0148[5]) {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                     this_00->field_0050,this_00->field_00A8);
        }
      }
    }
    else {
      /* ST_CALLSITE[0050815F]: CALL 0x004046bf; direct=004046BF CPanelTy::PaintCtrlObj */
      PaintCtrlObj(this_00,1);
      /* ST_CALLSITE[00508168]: CALL 0x00402d83; direct=00402D83 CPanelTy::SetControlObj */
      SetControlObj(this_00,'\0');
      /* ST_CALLSITE[0050816F]: CALL 0x00405ba0; direct=00405BA0 CPanelTy::sub_00506040 */
      sub_00506040(this_00);
    }
    if (this_00->field_0C4D == local_24) {
      g_currentExceptionFrame = local_c4.previous;
      return;
    }
    /* ST_CALLSITE[005082F5]: CALL 0x004019b5; direct=004019B5 CPanelTy::PaintIDSObj */
    PaintIDSObj(this_00);
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  if (CVar2 != CASE_1) {
    if (CVar2 != CASE_4) {
      g_currentExceptionFrame = local_c4.previous;
      return;
    }
    if (local_7c == this_00->field_0BF5) {
      switch(this_00->field_0BF5) {
      case CASE_DD:
      case CASE_DE:
      case CASE_E0:
      case CASE_FD:
      case CASE_FE:
        goto switchD_00508349_caseD_dd;
      default:
        g_currentExceptionFrame = local_c4.previous;
        return;
      }
    }
    goto cf_common_exit_005091B9;
  }
  if ((local_7c != this_00->field_0BF5) || (local_78 != this_00->field_0BF9))
  goto cf_common_exit_005091B9;
  cVar13 = '\0';
  cVar15 = '\0';
  iVar14 = 0;
  do {
    if ((&this_00->field_0BFE)[iVar14] != '\0') {
      cVar15 = cVar15 + '\x01';
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 < 6);
  iVar14 = 0;
  do {
    if (*(char *)((int)local_73 + iVar14) != '\0') {
      cVar13 = cVar13 + '\x01';
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 < 6);
  if (cVar15 == cVar13) {
    iVar14 = 3;
    bVar26 = true;
    psVar19 = (short *)&this_00->field_0BFE;
    psVar23 = local_73;
    do {
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      bVar26 = *psVar19 == *psVar23;
      psVar19 = psVar19 + 1;
      psVar23 = psVar23 + 1;
    } while (bVar26);
    if (bVar26) {
      if (this_00->field_0BFD != local_74) {
        /* ST_CALLSITE[00508481]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
        sub_004F1610(this_00,'\0');
      }
    }
    else {
      this_00->field_0028 = 5;
      FUN_006e6080(this_00,2,this_00->field_0302,(undefined4 *)&this_00->field_0x18);
      local_8 = (byte *)((uint)local_8 & 0xffffff00);
      pcVar18 = &this_00->field_0BFE;
      do {
        if (*pcVar18 != '\0') {
          /* ST_CALLSITE[00508448]: CALL 0x0040313e; direct=0040313E CPanelTy::sub_004F17D0 */
          sub_004F17D0(this_00,0,(byte)local_8);
        }
        bVar7 = (byte)local_8 + 1;
        pcVar18 = pcVar18 + 1;
        local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar7));
      } while (bVar7 < 6);
      /* ST_CALLSITE[0050845E]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
      sub_004F1610(this_00,'\0');
      /* ST_CALLSITE[00508469]: CALL 0x004040fc; direct=004040FC CursorClassTy::sub_0054A8D0 */
      CursorClassTy::sub_0054A8D0(g_cursorClass_00802A30);
    }
    iVar14 = 3;
    bVar26 = true;
    psVar19 = (short *)&this_00->field_0C04;
    psVar23 = local_73 + 3;
    do {
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      bVar26 = *psVar19 == *psVar23;
      psVar19 = psVar19 + 1;
      psVar23 = psVar23 + 1;
    } while (bVar26);
    if ((!bVar26) || (this_00->field_0BFC != local_75)) {
      /* ST_CALLSITE[005084B7]: CALL 0x00404f89; direct=00404F89 CPanelTy::sub_004F4570 */
      sub_004F4570(this_00,'\0',(int)&this_00->field_0BF5,(int)&local_7c);
    }
  }
  else {
    /* ST_CALLSITE[005083F7]: CALL 0x00402d83; direct=00402D83 CPanelTy::SetControlObj */
    SetControlObj(this_00,'\x01');
  }
  if (((this_00->field_0C0A != local_67) || (this_00->field_0BFC != local_75)) &&
     (this_00->field_09C0[1] != 0)) {
    this_00->field_0028 = 0x20;
    if (this_00->field_0BFC == '\0') {
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)(byte)this_00->field_0C0A;
    }
    *(uint *)&this_00->field_0x2c = uVar9;
    FUN_006e6080(this_00,2,this_00->field_09C0[1],(undefined4 *)&this_00->field_0x18);
  }
  if (((this_00->field_0BF5 == CASE_43) || (this_00->field_0BF5 == CASE_4C)) &&
     ((this_00->field_0C11 != local_60 || (this_00->field_0BFC != local_75)))) {
    this_00->field_0028 = 0x20;
    if (this_00->field_0BFC == '\0') {
      iVar14 = 0;
    }
    else {
      iVar14 = (-(uint)(this_00->field_0C11 != CASE_0) & 2) + 1;
    }
    *(int *)&this_00->field_0x2c = iVar14;
    FUN_006e6080(this_00,2,this_00->field_0308[1],(undefined4 *)&this_00->field_0x18);
  }
  switch(this_00->field_0BF5) {
  case CASE_32:
  case CASE_40:
  case CASE_44:
  case CASE_49:
    if ((*(int *)&this_00->field_0xc12 == local_5f) && (this_00->field_0C26 == local_4b)) {
      iVar14 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
               *(int *)(this_00->field_09D9[5] + 4)) / 2;
      if (this_00->field_0C24 != local_4d[0]) {
        FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar14 + 0x36,0x5d,7,
                     0x21,0);
        bVar7 = this_00->field_0C24;
        cVar13 = (char)(((uint)bVar7 * 0x21) / 100);
        local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(cVar13));
        if ((bVar7 != 0) && (cVar13 == '\0')) {
          local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(1));
        }
        if (bVar7 < 0x46) {
          iVar16 = (-(uint)(bVar7 < 0x14) & 5) + 5;
        }
        else {
          iVar16 = 0;
        }
        uVar9 = local_c & 0xff;
        Library::DKW::WGR::FUN_006b55f0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar14 + 0x37,0x7e - uVar9
                   ,(byte *)this_00->field_028A,0,iVar16,*(int *)(this_00->field_028A + 4) - uVar9,5
                   ,uVar9);
        Library::DKW::WGR::FUN_006b55f0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar14 + 0x3f,0x5c,
                   (byte *)this_00->field_09D9[5],0,0x3f,0xc,0x75,0x11);
        Library::DKW::WGR::FUN_006b55f0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar14 + 0x3f,0x6c,
                   (byte *)this_00->field_09D9[5],0,0x3f,0x1c,0x44,0x13);
        /* ST_CALLSITE[005089B4]: CALL 0x00404c7d; direct=00404C7D CPanelTy::PaintDamageXY */
        PaintDamageXY(this_00,this_00->field_0194,iVar14 + 0x41,0x5d,this_00->field_0C24,0x2714);
        /* ST_CALLSITE[005089D9]: CALL 0x00405a8d; direct=00405A8D CPanelTy::PaintCostsXY */
        PaintCostsXY(this_00,this_00->field_0194,iVar14 + 0x41,0x68,this_00->field_0C1C,
                     this_00->field_0C20,4,2);
        if (-1 < (int)this_00->field_0148[5]) {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                     this_00->field_0050,this_00->field_00A8);
        }
      }
      if ((this_00->field_0BF5 != CASE_44) || (this_00->field_0C34 == local_3d))
      goto cf_common_exit_00509192;
      /* ST_CALLSITE[00508A3F]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
             (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[10] + 4)) / 2,0x37,'\x01',
             (byte *)this_00->field_09D9[10]);
      uVar9 = (uint)(ushort)this_00->field_0C34;
      pcVar17 = LoadResourceString(0x2725,g_hINSTANCE_00807618);
      /* ST_CALLSITE[00508A6C]: CALL dword ptr [0x0085bde8] */
      wsprintfA((LPSTR)&DAT_0080f33a,"&1%s &0%d",pcVar17,uVar9);
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x56,0x39,0x6d,0x15);
      ccFntTy::WrTxt(this_00->field_01B8,(char *)&DAT_0080f33a,-2,-1,0,-1,-1);
      puVar12 = this_00->field_0148[5];
      if ((int)puVar12 < 0) goto cf_common_exit_00509192;
      uVar9 = this_00->field_00A8;
      uVar27 = this_00->field_0050;
      goto cf_common_exit_0050918D;
    }
    iVar14 = 0;
    goto LAB_00508b35;
  case CASE_33:
    if ((*(int *)&this_00->field_0xc12 == local_5f) && (this_00->field_0C16 == local_5b)) {
      iVar14 = 0x3a;
      local_c = 2;
      local_18 = &this_00->field_0C1C;
      local_10 = local_4d;
      local_8 = &this_00->field_0C24;
      iVar16 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[5] + 4)) / 2;
      do {
        if (*local_8 != *local_10) {
          FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar16 + 0x36,iVar14,7
                       ,0x21,0);
          bVar7 = *local_8;
          local_1c = STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar7));
          cVar13 = (char)(((uint)bVar7 * 0x21) / 100);
          local_20 = STReplaceLowByte((uint32_t)(local_20), (uint8_t)(cVar13));
          if ((bVar7 != 0) && (cVar13 == '\0')) {
            local_20 = STReplaceLowByte((uint32_t)(local_20), (uint8_t)(1));
          }
          if (bVar7 < 0x46) {
            local_14 = (-(uint)(bVar7 < 0x14) & 5) + 5;
          }
          else {
            local_14 = 0;
          }
          uVar9 = local_20 & 0xff;
          Library::DKW::WGR::FUN_006b55f0
                    ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar16 + 0x37,
                     (iVar14 - uVar9) + 0x21,(byte *)this_00->field_028A,0,local_14,
                     *(int *)(this_00->field_028A + 4) - uVar9,5,uVar9);
          Library::DKW::WGR::FUN_006b55f0
                    ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar16 + 0x3f,
                     iVar14 + -1,(byte *)this_00->field_09D9[5],0,0x3f,0xc,0x75,0x11);
          Library::DKW::WGR::FUN_006b55f0
                    ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar16 + 0x3f,
                     iVar14 + 0xf,(byte *)this_00->field_09D9[5],0,0x3f,0x1c,0x44,0x13);
          /* ST_CALLSITE[005087FB]: CALL 0x00404c7d; direct=00404C7D CPanelTy::PaintDamageXY */
          PaintDamageXY(this_00,this_00->field_0194,iVar16 + 0x41,iVar14,100 - *local_8,0x36b1);
          /* ST_CALLSITE[00508821]: CALL 0x00405a8d; direct=00405A8D CPanelTy::PaintCostsXY */
          PaintCostsXY(this_00,this_00->field_0194,iVar16 + 0x41,iVar14 + 0xb,*local_18,local_18[2],
                       4,2);
          if (-1 < (int)this_00->field_0148[5]) {
            Library::DKW::DDX::FUN_006b3640
                      ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                       this_00->field_0050,this_00->field_00A8);
          }
        }
        local_18 = local_18 + 1;
        local_10 = local_10 + 1;
        local_8 = local_8 + 1;
        iVar14 = iVar14 + 0x23;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_c = 0;
      goto cf_common_exit_00509192;
    }
    break;
  case CASE_34:
    /* ST_CALLSITE[00508E7F]: CALL 0x00403526; direct=00403526 CPanelTy::PaintMunition */
    PaintMunition(this_00,(*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[8] + 4))
                          / 2);
    local_10 = &this_00->field_0xa2e;
    iVar14 = 0;
    puVar21 = this_00->field_0A15;
    do {
      if (*puVar21 != 0) {
        if (DAT_0080874e == '\x01') {
          GVar8 = (this_00->field_09D4 != '\x01') + CASE_1;
        }
        else {
          GVar8 = CASE_2 - (this_00->field_09D4 != '\x01');
        }
        uVar11 = thunk_FUN_00525ef0(GVar8,(Global_sub_00525EF0_param_2Enum)iVar14);
        *(undefined4 *)local_10 = uVar11;
        if (this_00->field_0BFC == local_75) {
          this_00->field_0028 = 5;
          uVar9 = *puVar21;
        }
        else {
          this_00->field_0028 = 0x20;
          *(uint *)&this_00->field_0x2c = (uint)(this_00->field_0BFC != '\0');
          uVar9 = *puVar21;
        }
        FUN_006e6080(this_00,2,uVar9,(undefined4 *)&this_00->field_0x18);
      }
      iVar14 = iVar14 + 1;
      local_10 = local_10 + 0x27;
      puVar21 = puVar21 + 1;
    } while (iVar14 < 6);
    puVar12 = this_00->field_0148[5];
    if ((int)puVar12 < 0) goto cf_common_exit_00509192;
    uVar9 = this_00->field_00A8;
    uVar27 = this_00->field_0050;
    goto cf_common_exit_0050918D;
  case CASE_35:
    iVar14 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
    if (this_00->field_0C31 == local_40) {
      if (this_00->field_0C31 == '\0') {
        if (this_00->field_0C2F != local_42) {
          /* ST_CALLSITE[00508BAF]: CALL 0x004046bf; direct=004046BF CPanelTy::PaintCtrlObj */
          PaintCtrlObj(this_00,1);
          iVar14 = this_00->field_0302;
          if (iVar14 != 0) {
            memset(local_e4, 0, 0x20); /* compiler bulk-zero initialization */
            local_d4 = 5;
            FUN_006e6080(this_00,2,iVar14,local_e4);
          }
        }
        goto cf_common_exit_00509192;
      }
      if (this_00->field_0C33 == local_3e) goto cf_common_exit_00509192;
      Library::DKW::WGR::FUN_006b55f0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar14 + 0x39,0x65,
                 (byte *)this_00->field_09D9[5],0,0x39,0x15,0x4c,0x1b);
      /* ST_CALLSITE[00508B82]: CALL 0x00405862; direct=00405862 CPanelTy::PaintPerRes */
      PaintPerRes(this_00,iVar14);
      puVar12 = this_00->field_0148[5];
      goto joined_r0x00508b00;
    }
    break;
  case CASE_36:
  case CASE_37:
  case CASE_43:
  case CASE_45:
  case CASE_48:
  case CASE_4C:
  case CASE_4D:
  case CASE_4E:
  case CASE_6F:
    if (this_00->field_0C29 == local_48) goto cf_common_exit_00509192;
    iVar14 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[7] + 4)) / 2;
    if (this_00->field_0C29 == 0xff) {
      this_00->field_0C29 = 0;
    }
    if (0x28 < this_00->field_0C29) {
      this_00->field_0C29 = 0x28;
    }
    local_8 = (byte *)((uint)STPiece<1,3>(local_8) << 8);
    if (this_00->field_0C29 != 0) {
      do {
        pBVar10 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
        /* ST_CALLSITE[00508611]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
               iVar14 + 6 + ((uint)local_8 & 0xff) * 4,0x75,'\x01',(byte *)pBVar10);
        bVar7 = (byte)local_8 + 1;
        local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar7));
      } while (bVar7 < this_00->field_0C29);
    }
    if ((byte)local_8 < 0x28) {
      iVar16 = 0x28 - ((uint)local_8 & 0xff);
      iVar14 = iVar14 + 6 + ((uint)local_8 & 0xff) * 4;
      do {
        pBVar10 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[0050865F]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x75,'\x01',
               (byte *)pBVar10);
        iVar14 = iVar14 + 4;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    puVar12 = this_00->field_0148[5];
    goto joined_r0x00508b00;
  case CASE_38:
  case CASE_39:
  case CASE_4F:
    /* ST_CALLSITE[00508AF3]: CALL 0x00403e4f; direct=00403E4F CPanelTy::PaintMineInf */
    PaintMineInf(this_00,(*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[5] + 4))
                         / 2);
    puVar12 = this_00->field_0148[5];
joined_r0x00508b00:
    if (-1 < (int)puVar12) {
LAB_00509179:
      uVar9 = this_00->field_00A8;
      uVar27 = this_00->field_0050;
cf_common_exit_0050918D:
      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,(uint)puVar12,0xffffffff,uVar27,uVar9);
    }
    goto cf_common_exit_00509192;
  case CASE_3A:
    iVar14 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[5] + 4)) / 2;
    if (this_00->field_0C3A != local_37) {
      local_8 = (byte *)((uint)STPiece<1,3>(local_8) << 8);
      if (this_00->field_0C3A != '\0') {
        do {
          pBVar10 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
          /* ST_CALLSITE[00508C4D]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
                 iVar14 + 0x70 + ((uint)local_8 & 0xff) * 4,0x54,'\x01',(byte *)pBVar10);
          bVar7 = (byte)local_8 + 1;
          local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar7));
        } while (bVar7 < (byte)this_00->field_0C3A);
      }
      if ((byte)local_8 < 0xf) {
        local_c = 0xf - ((uint)local_8 & 0xff);
        iVar16 = iVar14 + 0x70 + ((uint)local_8 & 0xff) * 4;
        do {
          pBVar10 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[00508C9E]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar16,0x54,'\x01',
                 (byte *)pBVar10);
          iVar16 = iVar16 + 4;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if (-1 < (int)this_00->field_0148[5]) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                   this_00->field_0050,this_00->field_00A8);
      }
    }
    if (this_00->field_0C3B != local_36) {
      local_8 = (byte *)((uint)local_8 & 0xffffff00);
      if (this_00->field_0C3B != '\0') {
        do {
          pBVar10 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
          /* ST_CALLSITE[00508D16]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
                 iVar14 + 0x70 + ((uint)local_8 & 0xff) * 4,0x5f,'\x01',(byte *)pBVar10);
          bVar7 = (byte)local_8 + 1;
          local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar7));
        } while (bVar7 < (byte)this_00->field_0C3B);
      }
      if ((byte)local_8 < 0xf) {
        local_c = 0xf - ((uint)local_8 & 0xff);
        iVar16 = iVar14 + 0x70 + ((uint)local_8 & 0xff) * 4;
        do {
          pBVar10 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[00508D67]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar16,0x5f,'\x01',
                 (byte *)pBVar10);
          iVar16 = iVar16 + 4;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if (-1 < (int)this_00->field_0148[5]) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
                   this_00->field_0050,this_00->field_00A8);
      }
    }
    if (this_00->field_0C34 == local_3d) goto cf_common_exit_00509192;
    local_8 = (byte *)((uint)local_8 & 0xffffff00);
    local_c = ((uint)(ushort)this_00->field_0C34 * 0x28) / 400;
    if (local_c != 0) {
      uVar9 = 0;
      do {
        pBVar10 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,2);
        /* ST_CALLSITE[00508DEE]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14 + 0xb + uVar9 * 4,0x76,
               '\x01',(byte *)pBVar10);
        bVar7 = (byte)local_8 + 1;
        local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar7));
        uVar9 = (uint)bVar7;
      } while (uVar9 < local_c);
    }
    if ((byte)local_8 < 0x28) {
      iVar14 = iVar14 + 0xb + ((uint)local_8 & 0xff) * 4;
      iVar16 = 0x28 - ((uint)local_8 & 0xff);
      do {
        pBVar10 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[00508E42]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x76,'\x01',
               (byte *)pBVar10);
        iVar14 = iVar14 + 4;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    puVar12 = this_00->field_0148[5];
    goto joined_r0x00509177;
  default:
    goto cf_common_exit_00509192;
  case CASE_3C:
    CVar3 = this_00->field_0C3C;
    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(CVar3));
    if (local_35 != CVar3) {
      /* ST_CALLSITE[00508FDE]: CALL 0x004046bf; direct=004046BF CPanelTy::PaintCtrlObj */
      PaintCtrlObj(this_00,1);
      /* ST_CALLSITE[00508FE7]: CALL 0x00402d83; direct=00402D83 CPanelTy::SetControlObj */
      SetControlObj(this_00,'\x01');
      /* ST_CALLSITE[00508FEE]: CALL 0x00405ba0; direct=00405BA0 CPanelTy::sub_00506040 */
      sub_00506040(this_00);
      goto cf_common_exit_00509192;
    }
    pbVar4 = (byte *)this_00->field_09D9[5];
    pRVar5 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
    iVar14 = (pRVar5->field_0004 - *(int *)(pbVar4 + 4)) / 2;
    if (CVar3 == CASE_1) {
      Library::DKW::WGR::FUN_006b55f0(pRVar5,0,iVar14 + 0x39,0x65,pbVar4,0,0x39,0x15,0x4c,0x1b);
      /* ST_CALLSITE[005090D7]: CALL 0x00404c7d; direct=00404C7D CPanelTy::PaintDamageXY */
      PaintDamageXY(this_00,this_00->field_0194,iVar14 + 0x39,0x65,*(byte *)&this_00->field_0C3D,
                    0x2714);
      local_14 = 0;
      uVar9 = (uint)(this_00->field_0C3D * 0x28) / 100;
      if (uVar9 != 0) {
        iVar16 = iVar14 + 0xb;
        local_14 = uVar9;
        local_c = uVar9;
        do {
          pBVar10 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
          /* ST_CALLSITE[0050911F]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar16,0x5c,'\x01',
                 (byte *)pBVar10);
          iVar16 = iVar16 + 4;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if (local_14 < 0x28) {
        iVar14 = iVar14 + 0xb + local_14 * 4;
        iVar16 = 0x28 - local_14;
        do {
          pBVar10 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[00509161]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar14,0x5c,'\x01',
                 (byte *)pBVar10);
          iVar14 = iVar14 + 4;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
    }
    else if (CVar3 == CASE_2) {
      Library::DKW::WGR::FUN_006b55f0
                (pRVar5,0,iVar14,0x71,pbVar4,0,0,0x21,*(int *)(pbVar4 + 4),
                 *(int *)(pbVar4 + 8) + -0x21);
      /* ST_CALLSITE[00509057]: CALL dword ptr [0x0085bde8] */
      wsprintfA((LPSTR)&DAT_0080f33a,"%4d",this_00->field_0C3D);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      ccFntTy::SetSurf(this_00->field_01BC,this_00->field_0194,0,iVar14,0x71,
                       *(int *)(this_00->field_09D9[5] + 4),
                       *(int *)(this_00->field_09D9[5] + 8) + -0x21);
      ccFntTy::WrStr(this_00->field_01BC,(char *)&DAT_0080f33a,-1,-1,0);
    }
    puVar12 = this_00->field_0148[5];
joined_r0x00509177:
    if ((int)puVar12 < 0) goto cf_common_exit_00509192;
    goto LAB_00509179;
  case CASE_50:
    iVar14 = 3;
    bVar26 = true;
    pCVar20 = &this_00->field_0C11;
    pCVar25 = &local_60;
    do {
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      bVar26 = *(undefined2 *)pCVar20 == *(undefined2 *)pCVar25;
      pCVar20 = pCVar20 + 2;
      pCVar25 = pCVar25 + 2;
    } while (bVar26);
    if (!bVar26) {
      puVar21 = this_00->field_0A15;
      iVar14 = 6;
      do {
        if (*puVar21 != 0) {
          if (this_00->field_0BFC == local_75) {
            this_00->field_0028 = 5;
            uVar9 = *puVar21;
          }
          else {
            this_00->field_0028 = 0x20;
            *(uint *)&this_00->field_0x2c = (uint)(this_00->field_0BFC != '\0');
            uVar9 = *puVar21;
          }
          FUN_006e6080(this_00,2,uVar9,(undefined4 *)&this_00->field_0x18);
        }
        puVar21 = puVar21 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    goto cf_common_exit_00509192;
  }
  iVar14 = 1;
LAB_00508b35:
  /* ST_CALLSITE[00508B37]: CALL 0x004046bf; direct=004046BF CPanelTy::PaintCtrlObj */
  PaintCtrlObj(this_00,iVar14);
  /* ST_CALLSITE[00508B40]: CALL 0x00402d83; direct=00402D83 CPanelTy::SetControlObj */
  SetControlObj(this_00,'\0');
  /* ST_CALLSITE[00508B47]: CALL 0x00405ba0; direct=00405BA0 CPanelTy::sub_00506040 */
  sub_00506040(this_00);
cf_common_exit_00509192:
  if (this_00->field_0C4D == local_24) {
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  /* ST_CALLSITE[005091A1]: CALL 0x004019b5; direct=004019B5 CPanelTy::PaintIDSObj */
  PaintIDSObj(this_00);
  g_currentExceptionFrame = local_c4.previous;
  return;
switchD_00508349_caseD_dd:
  /* ST_CALLSITE[00508354]: CALL 0x004046bf; direct=004046BF CPanelTy::PaintCtrlObj */
  PaintCtrlObj(this_00,1);
  iVar14 = this_00->field_0302;
  if (iVar14 == 0) {
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  memset(local_104, 0, 0x20); /* compiler bulk-zero initialization */
  local_f4 = 5;
  FUN_006e6080(this_00,2,iVar14,local_104);
  g_currentExceptionFrame = local_c4.previous;
  return;
}

