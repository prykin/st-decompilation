#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::SetControlObj

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254
    */

void __thiscall CPanelTy::SetControlObj(CPanelTy *this,char param_1)

{
  CPanelTy_field_0BFAState CVar1;
  char cVar2;
  uint uVar3;
  CPanelTy *this_00;
  Global_sub_00525EF0_param_1Enum GVar5;
  int iVar5;
  char *pcVar5_mg0;
  LPSTR pCVar6;
  int uVar6_mg5;
  int uVar6_mg9;
  int uVar6_mg6;
  int uVar6_mg8;
  uint *puVar7;
  int uVar6_mg7;
  int uVar6_mg4;
  int iVar12;
  uint uVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  short sVar18;
  RecoveredRecord_004F3130_3F0D2FD9 *pRVar19;
  ushort uVar20;
  ushort uVar21;
  byte *puVar22;
  uint uVar23;
  char *pcVar24;
  uint uVar25;
  RecoveredRecordView_004F2E40_41FE7B1E local_b44 [7];
  uint local_25c [84];
  InternalExceptionFrame local_10c;
  uint local_c8 [4];
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_98;
  uint local_94;
  uint local_90;
  undefined4 *local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70 [4];
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_28;
  RecoveredRecordView_004F2E40_41FE7B1E *local_24;
  CPanelTy *local_20;
  Global_sub_00529590_param_1Enum *local_1c;
  uint *local_18;
  int local_14;
  uint local_10;
  byte *local_c;
  uint *local_8;

  local_10c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_10c;
  local_20 = this;

  iVar5 = Library::MSVCRT::__setjmp3(local_10c.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_10c.previous;

    iVar12 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0x53e,0,iVar5,
                                "%s","CPanelTy::SetControlObj");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x53e);
    return;
  }
  if (param_1 != '\0') {
    /* ST_CALLSITE[0050982F]: CALL 0x004040fc; direct=004040FC CursorClassTy::sub_0054A8D0 */
    CursorClassTy::sub_0054A8D0(g_cursorClass_00802A30);
  }
  this_00 = local_20;
  if (local_20->field_0302 != 0) {
    StartSystemTy::sub_006E56B0(local_20->field_000C,local_20->field_0302);
  }
  uVar3 = this_00->field_0308[1];
  this_00->field_0302 = 0;
  if (uVar3 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,uVar3);
  }
  puVar15 = this_00->field_0310 + 1;
  this_00->field_0308[1] = 0;
  local_18 = puVar15;
  if (this_00->field_0310[1] != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0310[1]);
  }
  *puVar15 = 0;
  if (this_00->field_0310[2] != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0310[2]);
  }
  uVar3 = this_00->field_09D0;
  this_00->field_0310[2] = 0;
  if (uVar3 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,uVar3);
  }
  this_00->field_09D0 = 0;
  puVar15 = this_00->field_0A15;
  iVar11 = 6;
  do {
    if (*puVar15 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar15);
      *puVar15 = 0;
    }
    puVar15 = puVar15 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  CVar1 = this_00->field_0BFA;
  if (((CVar1 == CASE_0) || (CVar1 == CASE_3)) || (CVar1 == CASE_4)) {
    uVar3 = this_00->field_09C0[1];
    if (uVar3 != 0) {
      this_00->field_0028 = 0x20;
      *(undefined4 *)&this_00->field_0x2c = 0;
      FUN_006e6080(this_00,2,uVar3,(undefined4 *)&this_00->field_0x18);
    }
  }
  else {
    local_10 = local_10 & 0xffffff00;
    memset(local_70, 0, 0x50); /* compiler bulk-zero initialization */
    local_c = &this_00->field_0x86a;
    local_1c = &this_00->field_0BFE;
    iVar11 = -0xbff - (int)this_00;
    local_14 = iVar11;
    do {
      if (*local_1c == 0) goto LAB_00509a02;
      iVar14 = 0xe;
      iVar13 = 0xf;
      switch(static_cast<uint32_t>(STRawWord(local_1c + iVar11))) {
      case 0:
        iVar14 = 0x4b;
        break;
      case 0x1:
        iVar14 = 0x88;
        break;
      case 0x2:
        goto switchD_00509942_caseD_2;
      case 0x3:
        iVar14 = 0x88;
        goto switchD_00509942_caseD_2;
      case 0x4:
        iVar14 = 0x4b;
switchD_00509942_caseD_2:
        iVar13 = 0x37;
      }
      /* ST_CALLSITE[00509970]: CALL 0x0040313e; direct=0040313E CPanelTy::sub_004F17D0 */
      sub_004F17D0(this_00,0,(byte)local_10);
      if (this_00->field_0BFC == '\0') {
        local_8 = nullptr;
      }
      else {
        local_8 = (uint *)(uint)local_1c[6];
      }
      pcVar24 = nullptr;
      uVar21 = 0;
      uVar20 = 1;
      iVar11 = 0;
      puVar22 = local_c;
      pcVar5_mg0 = thunk_FUN_00529590(*local_1c,this_00->field_0BF5);
      pCVar6 = thunk_FUN_00571240(pcVar5_mg0,iVar11);
      /* ST_CALLSITE[005099DD]: CALL 0x004041ba; direct=004041BA CPanelTy::SetButStruct */
      SetButStruct(this_00,(RecoveredRecordView_004F2E40_41FE7B1E *)
                           ((int)local_b44 + local_28 * 0x17c),5,local_8,iVar14,iVar13,1,pCVar6,
                   uVar20,uVar21,puVar22,pcVar24);
      iVar11 = local_28 * 0x17c;
      local_28 = local_28 + 1;
      *(undefined4 *)((int)local_b44 + iVar11 + 0x110) = 1;
      iVar11 = local_14;
LAB_00509a02:
      bVar9 = (char)local_10 + 1;
      local_c = local_c + 0x27;
      local_1c = local_1c + 1;
      local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar9));
    } while (bVar9 < 6);
    local_60 = this_00->field_0008;
    local_24 = local_b44;
    local_70[0] = 1;
    local_70[1] = 0xffffffff;
    local_5c = 2;
    local_58 = 0xb203;
    local_3c = 2;
    local_38 = 0xb204;
    local_40 = local_60;
    /* ST_CALLSITE[00509A6F]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,9,&this_00->field_0302,nullptr,local_70,0);
    /* ST_CALLSITE[00509A76]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
    sub_004F1610(this_00,'\0');
    uVar3 = this_00->field_09C0[1];
    if (uVar3 != 0) {
      this_00->field_0028 = 0x20;
      if (this_00->field_0BFC == '\0') {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)(byte)this_00->field_0C0A;
      }
      *(uint *)&this_00->field_0x2c = uVar8;
      FUN_006e6080(this_00,2,uVar3,(undefined4 *)&this_00->field_0x18);
    }
    if (this_00->field_0BFB == '\x02') {
LAB_00509b60:
      uVar25 = 0;
      uVar23 = 0;
      iVar11 = 0;
      pcVar24 = nullptr;
      pRVar19 = nullptr;
      uVar20 = 0;
      sVar18 = 0;
      uVar17 = 0xb13f;
      uVar16 = 0xb12f;
      pCVar6 = thunk_FUN_00571240("BUT_SMALL",0);
      /* ST_CALLSITE[00509BA5]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
      uVar6_mg9 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x92,0x6e,1,pCVar6,
                            uVar16,uVar17,sVar18,uVar20,pRVar19,pcVar24,iVar11,uVar23,uVar25);
      *local_18 = uVar6_mg9;
      g_currentExceptionFrame = local_10c.previous;
      return;
    }
    switch(this_00->field_0BF5) {
    case CASE_32:
    case CASE_40:
    case CASE_44:
    case CASE_49:
      if (*(int *)&this_00->field_0xc12 != 0) goto LAB_00509b60;
      break;
    case CASE_33:
      iVar11 = 0xb12f;
      local_c = (undefined1 *)0x4c;
      local_8 = (uint *)0x2;
      puVar15 = local_18;
      do {
        if (STField<int>(puVar15,0x8fe) != 0) {
          uVar23 = 0;
          uVar17 = 0;
          iVar14 = 0;
          pcVar24 = nullptr;
          pRVar19 = nullptr;
          uVar20 = 0;
          sVar18 = 0;
          uVar16 = 0xb13f;
          iVar13 = iVar11;
          pCVar6 = thunk_FUN_00571240("BUT_SMALL",0);
          /* ST_CALLSITE[00509CE7]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
          uVar6_mg8 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x92,(int)local_c,1,
                                pCVar6,iVar13,uVar16,sVar18,uVar20,pRVar19,pcVar24,iVar14,uVar17,
                                uVar23);
          *puVar15 = uVar6_mg8;
        }
        puVar15 = puVar15 + 1;
        iVar11 = iVar11 + 1;
        local_c = (undefined1 *)((int)local_c + 0x22);
        local_8 = (uint *)((int)local_8 + -1);
      } while (local_8 != nullptr);
      g_currentExceptionFrame = local_10c.previous;
      return;
    case CASE_34:
      local_8 = (uint *)0x2;
      memset(local_c8, 0, 0x58); /* compiler bulk-zero initialization */
      iVar11 = 0;
      memset(local_25c, 0, 0x150); /* compiler bulk-zero initialization */
      local_14 = this_00->field_0138;
      puVar7 = local_25c + 1;
      iVar13 = this_00->field_0050 + 99;
      iVar11 = 0;
      do {
        iVar14 = local_14;
        puVar7[-1] = iVar11 + 1;
        *puVar7 = 0;
        puVar7[2] = iVar13;
        puVar7[4] = 0x2e;
        iVar10 = DAT_00806734;
        if (iVar14 != 0) {
          iVar10 = this_00->field_00A8;
        }
        puVar7[3] = iVar10 + 0x22;
        puVar7[5] = 0x10;
        puVar7[0x11] = 0;
        puVar7[0x15] = 0x101;
        puVar7[10] = 0x101;
        puVar7[0x16] = 3;
        puVar7[0xb] = 3;
        puVar7[0xc] = 0x4201;
        puVar7[0x17] = 0x4202;
        *(undefined2 *)(puVar7 + 0x18) = 0;
        *(undefined2 *)(puVar7 + 0xd) = 0;
        STField<undefined2>(puVar7,0x62) = 2;
        STField<undefined2>(puVar7,0x36) = 2;
        if (iVar11 == 0) {
          uVar16 = 0x3aa6;
LAB_00509ddd:
          puVar7[0x19] = uVar16;
          puVar7[0xe] = uVar16;
        }
        else if (iVar11 == 1) {
          uVar16 = 0x3aa7;
          goto LAB_00509ddd;
        }
        iVar13 = iVar13 + 0x31;
        puVar7 = puVar7 + 0x1c;
        local_8 = (uint *)((int)local_8 + -1);
        iVar11 = iVar11 + 1;
        if (local_8 == nullptr) {
          local_80 = local_25c;
          local_7c = (uint)(byte)this_00->field_09D4;
          local_b8 = this_00->field_0008;
          local_c8[0] = 1;
          local_c8[1] = 1;
          local_78 = 1;
          local_74 = 1;
          local_b4 = 2;
          local_b0 = 0xb207;
          local_94 = 2;
          local_90 = 0xb206;
          local_98 = local_b8;
          /* ST_CALLSITE[00509E70]: CALL dword ptr [EDX + 0x8] */
          (*this_00->field_000C->vtable->CreateObject)
                    ((SystemClassTy *)this_00->field_000C,5,&this_00->field_09D0,nullptr,local_c8
                     ,0);
          local_c = (undefined1 *)((uint)local_c & 0xffffff00);
          local_10 = 0x3b;
          iVar11 = *(int *)(this_00->field_0194 + 4);
          iVar13 = *(int *)(this_00->field_09D9[8] + 4);
          pRVar19 = (RecoveredRecord_004F3130_3F0D2FD9 *)&this_00->field_0xa2d;
          memset((void *)pRVar19, 0, 0xea); /* compiler bulk-zero initialization */
          local_14 = (iVar11 - iVar13) / 2 + 8;
          local_8 = this_00->field_0A15;
          iVar11 = 0xb18f;
          do {
            *(undefined1 *)pRVar19 = 2;
            if (DAT_0080874e == '\x01') {
              GVar5 = (this_00->field_09D4 != '\x01') + CASE_1;
            }
            else {
              GVar5 = CASE_2 - (this_00->field_09D4 != '\x01');
            }

            iVar13 = thunk_FUN_00525ef0(GVar5,(Global_sub_00525EF0_param_2Enum)local_c);
            *(int *)&pRVar19->field_0x1 = iVar13;
            /* ST_CALLSITE[00509F30]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
            uVar6_mg7 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),local_14,local_10,
                                  0,nullptr,iVar11,iVar11 + 0x10,1,0,pRVar19,nullptr,0x11,10
                                  ,0);
            pRVar19 = pRVar19 + 3;
            local_10 = local_10 + 0xb;
            *local_8 = uVar6_mg7;
            bVar9 = (char)local_c + 1;
            iVar11 = iVar11 + 1;
            local_8 = local_8 + 1;
            local_c = (undefined1 *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar9));
          } while (bVar9 < 6);
          g_currentExceptionFrame = local_10c.previous;
          return;
        }
      } while( true );
    case CASE_35:
      if (this_00->field_0C31 != '\0') {
        uVar25 = 0;
        uVar23 = 0;
        iVar11 = 0;
        pcVar24 = nullptr;
        pRVar19 = nullptr;
        uVar20 = 0;
        sVar18 = 0;
        uVar17 = 0xb13f;
        uVar16 = 0xb12f;
        pCVar6 = thunk_FUN_00571240("BUT_SMALL",0);
        cVar2 = this_00->field_0BFC;
LAB_00509c11:
        /* ST_CALLSITE[00509C17]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
        uVar6_mg6 = CreateBut(this_00,5,0,(uint)(cVar2 != '\0'),0x92,0x6e,1,pCVar6,uVar16,uVar17,
                              sVar18,uVar20,pRVar19,pcVar24,iVar11,uVar23,uVar25);
        *local_18 = uVar6_mg6;
        g_currentExceptionFrame = local_10c.previous;
        return;
      }
      break;
    case CASE_3C:
      if (this_00->field_0C3C == CASE_1) {
        uVar25 = 0;
        uVar23 = 0;
        iVar11 = 0;
        pcVar24 = nullptr;
        pRVar19 = nullptr;
        uVar20 = 0;
        sVar18 = 0;
        uVar17 = 0xb13f;
        uVar16 = 0xb12f;
        pCVar6 = thunk_FUN_00571240("BUT_SMALL",0);
        cVar2 = this_00->field_0BFC;
        goto LAB_00509c11;
      }
      break;
    case CASE_43:
    case CASE_4C:
      if (this_00->field_0BFC == '\0') {
        iVar11 = 0;
      }
      else {
        iVar11 = (-(uint)(this_00->field_0C11 != CASE_0) & 2) + 1;
      }
      uVar25 = 0;
      uVar23 = 0;
      iVar13 = 0;
      pcVar24 = nullptr;
      pRVar19 = nullptr;
      uVar20 = 0;
      sVar18 = 0;
      uVar17 = 0xb12e;
      uVar16 = 0xb12d;
      pCVar6 = thunk_FUN_00571240("BUT_AUTO",0);
      /* ST_CALLSITE[00509B32]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
      uVar6_mg5 = CreateBut(this_00,5,3,iVar11,-1,0x58,1,pCVar6,uVar16,uVar17,sVar18,uVar20,pRVar19,
                            pcVar24,iVar13,uVar23,uVar25);
      this_00->field_0308[1] = uVar6_mg5;
      g_currentExceptionFrame = local_10c.previous;
      return;
    case CASE_50:
      iVar13 = 0xb17f;
      local_c = (undefined1 *)0x6;
      iVar11 = 0x3b;
      local_14 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[8] + 4)) / 2 + 8;
      local_8 = this_00->field_0A15;
      do {
        /* ST_CALLSITE[00509FE3]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
        uVar6_mg4 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),local_14,iVar11,0,
                              nullptr,iVar13 + -0x20,iVar13,2,0,
                              (RecoveredRecord_004F3130_3F0D2FD9 *)0x4f20,nullptr,0xaa,10,
                              iVar13 + -0x10);
        iVar13 = iVar13 + 1;
        iVar11 = iVar11 + 0xb;
        *local_8 = uVar6_mg4;
        local_8 = local_8 + 1;
        local_c = (undefined1 *)((int)local_c + -1);
      } while (local_c != nullptr);
      g_currentExceptionFrame = local_10c.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_10c.previous;
  return;
}

