#include "../../pseudocode_runtime.h"


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffec : 0x00517361 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::TechProc */

void __thiscall HelpPanelTy::TechProc(HelpPanelTy *this,uint param_1,byte param_2,char param_3)

{
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  HelpPanelTy *this_00;
  BITMAPINFO *pBVar4;
  undefined1 uVar5;
  ushort uVar6;
  int local_EAX_70;
  UINT UVar7;
  uint uVar12;
  BITMAPINFO *pBVar7_mg0;
  char *pcVar8_mg0;
  int local_EAX_506;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  int local_EAX_624;
  int local_EAX_687;
  char *pcVar8_mg7;
  char *pcVar8_mg6;
  char *pcVar8_mg5;
  char *pcVar8_mg8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_01;
  char *pcVar8_mg4;
  int iVar6;
  char *pcVar8_mg3;
  BITMAPINFO *pBVar7_mg1;
  char *pcVar8_mg2;
  char *pcVar8_mg1;
  char *pcVar8_mg9;
  char *pcVar8_mgA;
  char *pcVar8_mgB;
  char *pcVar8_mgC;
  char *pcVar8_mgD;
  char *pcVar8_mgE;
  char *pcVar8_mgF;
  char *pcVar8_mg10;
  uint *puVar8;
  uint local_EAX_2640;
  BITMAPINFO *pBVar7_mg3;
  char *pcVar8_mg12;
  uint local_EAX_2991;
  BITMAPINFO *pBVar7_mg5;
  int iVar15;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  AnonPointee_HelpPanelTy_0068 *pAVar13;
  HINSTANCE pHVar14;
  int iVar16;
  Global_sub_00528A30_param_1Enum GVar17;
  int iVar18;
  int iVar19;
  InternalExceptionFrame local_88;
  HelpPanelTy *local_44;
  BITMAPINFO *local_40;
  BITMAPINFO *local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  LONG local_2c;
  LONG local_28;
  undefined1 local_24;
  Global_sub_00526BA0_param_1Enum local_23;
  uint local_1f;
  uint local_18;
  Global_sub_00526BA0_param_1Enum local_14;
  Global_sub_00526BA0_param_1Enum local_10;
  uint local_c;
  uint local_8;

  local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(1));
  local_8 = 0;
  local_44 = this;
  local_3c = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0248,4);
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_EAX_70 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0);
  this_00 = local_44;
  if (local_EAX_70 != 0) {
    g_currentExceptionFrame = local_88.previous;
    iVar15 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x55a,0,local_EAX_70,
                                "%s","HelpPanelTy::TechProc");
    if (iVar15 == 0) {
      RaiseInternalException(local_EAX_70,0,"E:\\__titans\\Andrey\\helppan.cpp",0x55a);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_3 == '\0') {
    HVar2 = local_44->field_01A1;
    if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == CASE_A)) {
      local_44->field_01A2 = HVar2;
      local_44->field_01AB = local_44->field_01A3;
    }
    else {
      local_44->field_01A2 = 0;
      local_44->field_01AB = 0;
    }
    STPiece<0,2>(iVar16) = local_44->field_0178;
    STPiece<2,2>(iVar16) = local_44->field_017A;
    local_44->field_01A1 = CASE_5;
    local_44->field_01A3 = (void *)param_1;
    local_44->field_01A7 = (uint)param_2;
    local_44->field_01AF = 0x32;
    local_44->field_01B1 = 5;
    if (iVar16 != 0) {
      local_44->field_0028 = 0x4202;
      *(undefined2 *)&local_44->field_0x2c = 0;
      *(undefined2 *)&local_44->field_0x2e = 2;
      local_44->field_0030 = (undefined2)iVar16;
      local_44->field_0032 = STPiece<2,2>(iVar16);
      if (g_cursorClass_00802A30 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)g_cursorClass_00802A30->field_0000)(&local_44->field_0x18);
      }
    }
  }
  uVar6 = 0;
  do {
    if ((&PTR_DAT_007bfc04)[uVar6][param_1] != '\0') {
      local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + (char)uVar6));
      break;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 3);
  uVar10 = local_c & 0xff;
  GVar17 = (Global_sub_00528A30_param_1Enum)param_1;
  local_18 = uVar10;
  UVar7 = thunk_FUN_00528060(GVar17,param_2);
  DrawTitle(this_00,0x55fc,uVar10,UVar7);
  uVar12 = thunk_FUN_005276e0(GVar17,param_2);
  pBVar7_mg0 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0230,uVar12);
  DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0x35,0x2a,'\x01',(byte *)pBVar7_mg0);
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar10 = 3;
  iVar18 = -1;
  iVar16 = -3;
  pcVar8_mg0 = LoadResourceString(0x5622,g_hINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E0,pcVar8_mg0,iVar16,iVar18,uVar10);
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
  if ((char)local_c == DAT_0080874e) {
    local_EAX_506 = thunk_FUN_004e5910((uint)DAT_0080874d,param_1);
    if (local_EAX_506 != 0) {
      local_38 = (uint)param_2;
      uVar5 = thunk_FUN_004e6140((uint)DAT_0080874d,param_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if ((int)(uint)param_2 <= CONCAT31(extraout_var,uVar5)) {
        uVar5 = thunk_FUN_004e6140((uint)DAT_0080874d,param_1);
        iVar16 = thunk_FUN_004e60d0((uint)DAT_0080874d,param_1);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (CONCAT31(extraout_var_00,uVar5) <= iVar16) {
          uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar18 = -1;
          iVar16 = 1;
          pcVar8_mg5 = LoadResourceString(0x5d56,g_hINSTANCE_00807618);
          ccFntTy::WrStr(this_00->field_01E0,pcVar8_mg5,iVar16,iVar18,uVar10);
          iVar16 = 2;
          goto LAB_00516f08;
        }
        local_EAX_624 = thunk_FUN_004e5f90((uint)DAT_0080874d,param_1);
        if (local_EAX_624 == 0) {
          local_EAX_687 = thunk_FUN_004e5cc0((uint)DAT_0080874d,param_1,local_38);
          if (local_EAX_687 == 0) {
            uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
            iVar18 = -1;
            iVar16 = 1;
            pcVar8_mg6 = LoadResourceString(0x5d55,g_hINSTANCE_00807618);
            ccFntTy::WrStr(this_00->field_01E0,pcVar8_mg6,iVar16,iVar18,uVar10);
            iVar16 = 1;
            goto LAB_00516eb8;
          }
          UVar7 = 0x5d53;
        }
        else {
          UVar7 = 0x5d54;
        }
        uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar18 = -1;
        iVar16 = 1;
        pcVar8_mg7 = LoadResourceString(UVar7,g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,pcVar8_mg7,iVar16,iVar18,uVar10);
        iVar16 = 3;
        goto LAB_00516f54;
      }
    }
    uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar18 = -1;
    iVar16 = 1;
    pcVar8_mg8 = LoadResourceString(0x5d52,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01E0,pcVar8_mg8,iVar16,iVar18,uVar10);
    iVar16 = 1;
  }
  else {
    uVar5 = thunk_FUN_004e6140((uint)DAT_0080874d,param_1);
    iVar16 = thunk_FUN_004e60d0((uint)DAT_0080874d,param_1);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (iVar16 < CONCAT31(extraout_var_01,uVar5)) {
      iVar16 = thunk_FUN_004e7f20((uint)DAT_0080874d,param_1,(uint)param_2);
      if (iVar16 == 0) {
        uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar18 = -1;
        iVar16 = 1;
        pcVar8_mg4 = LoadResourceString(0x5d52,g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,pcVar8_mg4,iVar16,iVar18,uVar10);
        iVar16 = 1;
      }
      else {
        iVar6 = thunk_FUN_004e5f90((uint)DAT_0080874d,param_1);
        if (iVar6 != 0) {
          uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar18 = -1;
          iVar16 = 1;
          pcVar8_mg3 = LoadResourceString(0x5d54,g_hINSTANCE_00807618);
          ccFntTy::WrStr(this_00->field_01E0,pcVar8_mg3,iVar16,iVar18,uVar10);
          iVar16 = 3;
LAB_00516eb8:
          pBVar7_mg1 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0248,iVar16
                                   );
          pAVar13 = this_00->field_0068;
          goto LAB_00516f6b;
        }
        uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar18 = -1;
        iVar16 = 1;
        pcVar8_mg2 = LoadResourceString(0x5d53,g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,pcVar8_mg2,iVar16,iVar18,uVar10);
        iVar16 = 3;
      }
LAB_00516f08:
      pBVar7_mg1 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0248,iVar16);
      pAVar13 = this_00->field_0068;
      goto LAB_00516f6b;
    }
    uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar18 = -1;
    iVar16 = 1;
    pcVar8_mg1 = LoadResourceString(0x5d56,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01E0,pcVar8_mg1,iVar16,iVar18,uVar10);
    iVar16 = 2;
  }
LAB_00516f54:
  pBVar7_mg1 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0248,iVar16);
  pAVar13 = this_00->field_0068;
LAB_00516f6b:
  DibPut((RecoveredSourceFamily_dibcopy *)pAVar13,0x33,0x28,'\x06',(byte *)pBVar7_mg1);
  local_8 = local_8 + 0xf;
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar10 = 3;
  iVar18 = -1;
  iVar16 = -3;
  pcVar8_mg9 = LoadResourceString(0x5623,g_hINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E0,pcVar8_mg9,iVar16,iVar18,uVar10);
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
  uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar18 = -1;
  iVar16 = 1;
  pHVar14 = g_hINSTANCE_00807618;
  UVar7 = thunk_FUN_005293c0(GVar17);
  pcVar8_mgA = LoadResourceString(UVar7,pHVar14);
  ccFntTy::WrStr(this_00->field_01E0,pcVar8_mgA,iVar16,iVar18,uVar10);
  local_8 = local_8 + 0xf;
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar10 = 3;
  iVar18 = -1;
  iVar16 = -3;
  pcVar8_mgB = LoadResourceString(0x55f7,g_hINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E0,pcVar8_mgB,iVar16,iVar18,uVar10);
  ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
  local_38 = (uint)param_2;
  iVar16 = (local_38 + param_1 * 4) * 4;
  wsprintfA((LPSTR)&DAT_0080f33a,"%4d",*(undefined4 *)(&DAT_007e4818 + iVar16));
  ccFntTy::WrStr(this_00->field_01E8,(char *)&DAT_0080f33a,1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 3);
  local_40 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,
                          (-(uint)((char)local_c != '\x03') & 0xfffffffe) + 4);
  if (local_40 != nullptr) {
    FUN_006b5440((ushort *)this_00->field_0218,0,0xb4,local_8,local_40,0,0x3a);
    local_34 = 0xb4;
    local_2c = (local_40->bmiHeader).biWidth;
    local_30 = local_8;
    local_28 = (local_40->bmiHeader).biHeight;
    local_23 = (-(uint)((char)local_c != '\x03') & 0xfffffffc) + 0xe0;
    local_24 = 1;
    local_1f = local_18;
    Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_34);
  }
  local_8 = local_8 + 0xf;
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar10 = 3;
  iVar19 = -1;
  iVar18 = -3;
  pcVar8_mgC = LoadResourceString(0x5624,g_hINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E0,pcVar8_mgC,iVar18,iVar19,uVar10);
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
  iVar16 = (*(int *)(&DAT_007e5474 + iVar16) / 0x19) % 0xe10;
  wsprintfA((LPSTR)&DAT_0080f33a,"%02d:%02d",iVar16 / 0x3c,iVar16 % 0x3c);
  ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,2);
  local_8 = local_8 + 0xf;
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar10 = 3;
  iVar18 = -1;
  iVar16 = -3;
  pcVar8_mgD = LoadResourceString(0x5625,g_hINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E0,pcVar8_mgD,iVar16,iVar18,uVar10);
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
  UVar7 = 0x5d57;
  if ((&DAT_007e53bc)[param_1] != '\0') {
    if ((char)local_c == '\x02') {
      UVar7 = 0x5d58;
    }
    else if ((char)local_c == '\x01') {
      UVar7 = 0x5d59;
    }
  }
  uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar18 = -1;
  iVar16 = 1;
  pcVar8_mgE = LoadResourceString(UVar7,g_hINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E0,pcVar8_mgE,iVar16,iVar18,uVar10);
  local_8 = local_8 + 0xf;
  if ((g_allPlayers_007FA174 != nullptr) &&
     ((thunk_FUN_004e6e10(local_18,param_1,&local_10,&local_14), local_10 != 0 || (local_14 != 0))))
  {
    ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
    uVar10 = 3;
    iVar18 = -1;
    iVar16 = -3;
    pcVar8_mgF = LoadResourceString(0x5626,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01E0,pcVar8_mgF,iVar16,iVar18,uVar10);
    if (local_10 != 0) {
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      pHVar14 = g_hINSTANCE_00807618;
      UVar7 = thunk_FUN_00523410(local_10,(char)local_c,0);
      pcVar8_mg10 = LoadResourceString(UVar7,pHVar14);
      uVar10 = 0xffffffff;
      do {
        pcVar11 = pcVar8_mg10;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar11 = pcVar8_mg10 + 1;
        cVar1 = *pcVar8_mg10;
        pcVar8_mg10 = pcVar11;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar11 = pcVar11 + -uVar10;
      pcVar12 = (char *)&DAT_0080f33a;
      memmove(pcVar12, pcVar11, uVar10); /* compiler REP MOVS byte copy */
      uVar9 = 0;
      for (puVar8 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar8 != nullptr;
          puVar8 = Library::MSVCRT::FUN_0072e560(puVar8,'\n')) {
        *(undefined1 *)puVar8 = 0x20;
      }
      ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5
                    );
      local_8 = local_8 + 0xf;
      local_EAX_2640 = thunk_FUN_00526ba0(local_10,(char)local_c);
      pBVar7_mg3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0240,
                                local_EAX_2640);
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',
             (byte *)pBVar7_mg3);
      pBVar4 = local_3c;
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x94,local_8 - 2,'\x06',
             (byte *)local_3c);
      local_34 = 0x94;
      local_2c = (pBVar4->bmiHeader).biWidth;
      local_30 = local_8 - 2;
      local_28 = (pBVar4->bmiHeader).biHeight;
      local_23 = local_10;
      local_24 = 2;
      local_1f = local_18;
      Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_34);
      local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
    }
    if (local_14 != 0) {
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      pHVar14 = g_hINSTANCE_00807618;
      UVar7 = thunk_FUN_00523410(local_14,(char)local_c,0);
      pcVar8_mg12 = LoadResourceString(UVar7,pHVar14);
      uVar10 = 0xffffffff;
      do {
        pcVar11 = pcVar8_mg12;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar11 = pcVar8_mg12 + 1;
        cVar1 = *pcVar8_mg12;
        pcVar8_mg12 = pcVar11;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar11 = pcVar11 + -uVar10;
      pcVar12 = (char *)&DAT_0080f33a;
      memmove(pcVar12, pcVar11, uVar10); /* compiler REP MOVS byte copy */
      for (puVar8 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar8 != nullptr;
          puVar8 = Library::MSVCRT::FUN_0072e560(puVar8,'\n')) {
        *(undefined1 *)puVar8 = 0x20;
      }
      ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5
                    );
      local_8 = local_8 + 0xf;
      local_EAX_2991 = thunk_FUN_00526ba0(local_14,(char)local_c);
      pBVar7_mg5 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_023C,
                                local_EAX_2991);
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',
             (byte *)pBVar7_mg5);
      pBVar4 = local_3c;
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x94,local_8 - 2,'\x06',
             (byte *)local_3c);
      local_34 = 0x94;
      local_2c = (pBVar4->bmiHeader).biWidth;
      local_30 = local_8 - 2;
      local_28 = (pBVar4->bmiHeader).biHeight;
      local_23 = local_14;
      local_24 = 3;
      local_1f = local_18;
      Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_34);
      local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
    }
  }
  UVar7 = thunk_FUN_00528a30(GVar17,param_2);
  DrawDescription(this_00,(int *)&local_8,UVar7);
  AddLinks(this_00,(int *)&local_8,'\x05',param_1,local_38);
  g_currentExceptionFrame = local_88.previous;
  return;
}

