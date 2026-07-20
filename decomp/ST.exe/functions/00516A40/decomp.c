
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffec : 0x00517361 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::TechProc */

void __thiscall HelpPanelTy::TechProc(HelpPanelTy *this,uint param_1,byte param_2,char param_3)

{
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  code *pcVar3;
  HelpPanelTy *this_00;
  bool bVar4;
  undefined1 uVar5;
  ushort uVar6;
  int iVar7;
  UINT UVar8;
  byte *pbVar9;
  uint *puVar10;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  AnonPointee_HelpPanelTy_0068 *pAVar15;
  HINSTANCE pHVar16;
  Global_sub_00528A30_param_1Enum GVar17;
  void *pvVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  InternalExceptionFrame local_88;
  HelpPanelTy *local_44;
  int local_40;
  byte *local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  Global_sub_00526BA0_param_1Enum local_23;
  uint local_1f;
  uint local_18;
  Global_sub_00526BA0_param_1Enum local_14;
  Global_sub_00526BA0_param_1Enum local_10;
  uint local_c;
  uint local_8;
  
  pvVar18 = (void *)this->field_0248;
  uVar21 = 4;
  local_c = CONCAT31(local_c._1_3_,1);
  local_8 = 0;
  local_44 = this;
  local_3c = (byte *)FUN_0070b3a0((int)pvVar18,4);
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  iVar7 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0,pvVar18,uVar21);
  this_00 = local_44;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_88.previous;
    iVar19 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x55a,0,iVar7,
                                &DAT_007a4ccc,s_HelpPanelTy__TechProc_007c3c44);
    if (iVar19 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x55a);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_3 == '\0') {
    HVar2 = local_44->field_01A1;
    if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == (CASE_8|CASE_2))) {
      local_44->field_01A2 = HVar2;
      local_44->field_01AB = local_44->field_01A3;
    }
    else {
      local_44->field_01A2 = 0;
      local_44->field_01AB = 0;
    }
    local_44->field_01A1 = CASE_5;
    local_44->field_01A3 = param_1;
    local_44->field_01A7 = (uint)param_2;
    local_44->field_01AF = 0x32;
    local_44->field_01B1 = 5;
    if (local_44->field_0178 != 0) {
      local_44->field_0028 = 0x4202;
      *(undefined2 *)&local_44->field_0x2c = 0;
      local_44->field_002E = 2;
      *(undefined4 *)&local_44->field_0x30 = local_44->field_0178;
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        (*(code *)**(undefined4 **)PTR_00802a30)(&local_44->field_0x18);
      }
    }
  }
  uVar6 = 0;
  do {
    if ((&PTR_DAT_007bfc04)[uVar6][param_1] != '\0') {
      local_c = CONCAT31(local_c._1_3_,(char)local_c + (char)uVar6);
      break;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 3);
  uVar13 = local_c & 0xff;
  GVar17 = (Global_sub_00528A30_param_1Enum)param_1;
  local_18 = uVar13;
  UVar8 = thunk_FUN_00528060(GVar17,param_2);
  DrawTitle(this_00,0x55fc,uVar13,UVar8);
  uVar13 = thunk_FUN_005276e0(GVar17,param_2);
  pbVar9 = (byte *)FUN_0070b3a0(this_00->field_0230,uVar13);
  DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0068,0x35,0x2a,'\x01',pbVar9);
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar21 = 3;
  iVar19 = -1;
  iVar7 = -3;
  puVar10 = (uint *)FUN_006b0140(0x5622,HINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E0,puVar10,iVar7,iVar19,uVar21);
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
  if ((char)local_c == DAT_0080874e) {
    bVar4 = thunk_FUN_004e5910((uint)DAT_0080874d,param_1);
    if (CONCAT31(extraout_var,bVar4) != 0) {
      local_38 = (uint)param_2;
      uVar5 = thunk_FUN_004e6140((uint)DAT_0080874d,param_1);
      if ((int)(uint)param_2 <= CONCAT31(extraout_var_00,uVar5)) {
        uVar5 = thunk_FUN_004e6140((uint)DAT_0080874d,param_1);
        iVar7 = thunk_FUN_004e60d0((uint)DAT_0080874d,param_1);
        if (CONCAT31(extraout_var_01,uVar5) <= iVar7) {
          uVar13 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar19 = -1;
          iVar7 = 1;
          puVar10 = (uint *)FUN_006b0140(0x5d56,HINSTANCE_00807618);
          ccFntTy::WrStr(this_00->field_01E0,puVar10,iVar7,iVar19,uVar13);
          iVar7 = 2;
          goto LAB_00516f08;
        }
        bVar4 = thunk_FUN_004e5f90((uint)DAT_0080874d,param_1);
        if (CONCAT31(extraout_var_02,bVar4) == 0) {
          iVar7 = thunk_FUN_004e5cc0((uint)DAT_0080874d,param_1,local_38);
          if (iVar7 == 0) {
            uVar13 = (DAT_0080874e != '\x03') - 1 & 5;
            iVar19 = -1;
            iVar7 = 1;
            puVar10 = (uint *)FUN_006b0140(0x5d55,HINSTANCE_00807618);
            ccFntTy::WrStr(this_00->field_01E0,puVar10,iVar7,iVar19,uVar13);
            iVar7 = 1;
            goto LAB_00516eb8;
          }
          UVar8 = 0x5d53;
        }
        else {
          UVar8 = 0x5d54;
        }
        uVar13 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar19 = -1;
        iVar7 = 1;
        puVar10 = (uint *)FUN_006b0140(UVar8,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar10,iVar7,iVar19,uVar13);
        iVar7 = 3;
        goto LAB_00516f54;
      }
    }
    uVar13 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar19 = -1;
    iVar7 = 1;
    puVar10 = (uint *)FUN_006b0140(0x5d52,HINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01E0,puVar10,iVar7,iVar19,uVar13);
    iVar7 = 1;
  }
  else {
    uVar5 = thunk_FUN_004e6140((uint)DAT_0080874d,param_1);
    iVar7 = thunk_FUN_004e60d0((uint)DAT_0080874d,param_1);
    if (iVar7 < CONCAT31(extraout_var_03,uVar5)) {
      iVar7 = thunk_FUN_004e7f20((uint)DAT_0080874d,param_1,(uint)param_2);
      if (iVar7 == 0) {
        uVar13 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar19 = -1;
        iVar7 = 1;
        puVar10 = (uint *)FUN_006b0140(0x5d52,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar10,iVar7,iVar19,uVar13);
        iVar7 = 1;
      }
      else {
        bVar4 = thunk_FUN_004e5f90((uint)DAT_0080874d,param_1);
        if (CONCAT31(extraout_var_04,bVar4) != 0) {
          uVar13 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar19 = -1;
          iVar7 = 1;
          puVar10 = (uint *)FUN_006b0140(0x5d54,HINSTANCE_00807618);
          ccFntTy::WrStr(this_00->field_01E0,puVar10,iVar7,iVar19,uVar13);
          iVar7 = 3;
LAB_00516eb8:
          pbVar9 = (byte *)FUN_0070b3a0(this_00->field_0248,iVar7);
          pAVar15 = this_00->field_0068;
          goto LAB_00516f6b;
        }
        uVar13 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar19 = -1;
        iVar7 = 1;
        puVar10 = (uint *)FUN_006b0140(0x5d53,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01E0,puVar10,iVar7,iVar19,uVar13);
        iVar7 = 3;
      }
LAB_00516f08:
      pbVar9 = (byte *)FUN_0070b3a0(this_00->field_0248,iVar7);
      pAVar15 = this_00->field_0068;
      goto LAB_00516f6b;
    }
    uVar13 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar19 = -1;
    iVar7 = 1;
    puVar10 = (uint *)FUN_006b0140(0x5d56,HINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01E0,puVar10,iVar7,iVar19,uVar13);
    iVar7 = 2;
  }
LAB_00516f54:
  pbVar9 = (byte *)FUN_0070b3a0(this_00->field_0248,iVar7);
  pAVar15 = this_00->field_0068;
LAB_00516f6b:
  DibPut((AnonShape_006B84D0_7C7D97C6 *)pAVar15,0x33,0x28,'\x06',pbVar9);
  local_8 = local_8 + 0xf;
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar21 = 3;
  iVar19 = -1;
  iVar7 = -3;
  puVar10 = (uint *)FUN_006b0140(0x5623,HINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E0,puVar10,iVar7,iVar19,uVar21);
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
  uVar13 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar19 = -1;
  iVar7 = 1;
  pHVar16 = HINSTANCE_00807618;
  UVar8 = thunk_FUN_005293c0(param_1);
  puVar10 = (uint *)FUN_006b0140(UVar8,pHVar16);
  ccFntTy::WrStr(this_00->field_01E0,puVar10,iVar7,iVar19,uVar13);
  local_8 = local_8 + 0xf;
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar21 = 3;
  iVar19 = -1;
  iVar7 = -3;
  puVar10 = (uint *)FUN_006b0140(0x55f7,HINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E0,puVar10,iVar7,iVar19,uVar21);
  ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
  local_38 = (uint)param_2;
  iVar7 = (local_38 + param_1 * 4) * 4;
  wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,*(undefined4 *)(&DAT_007e4818 + iVar7));
  ccFntTy::WrStr(this_00->field_01E8,&DAT_0080f33a,1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 3);
  local_40 = FUN_0070b3a0(this_00->field_0238,(-(uint)((char)local_c != '\x03') & 0xfffffffe) + 4);
  if (local_40 != 0) {
    FUN_006b5440((int)this_00->field_0218,0,0xb4,local_8,local_40,0,0x3a);
    local_34 = 0xb4;
    local_2c = *(undefined4 *)(local_40 + 4);
    local_30 = local_8;
    local_28 = *(undefined4 *)(local_40 + 8);
    local_23 = (-(uint)((char)local_c != '\x03') & 0xfffffffc) + 0xe0;
    local_24 = 1;
    local_1f = local_18;
    Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_34);
  }
  local_8 = local_8 + 0xf;
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar21 = 3;
  iVar20 = -1;
  iVar19 = -3;
  puVar10 = (uint *)FUN_006b0140(0x5624,HINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E0,puVar10,iVar19,iVar20,uVar21);
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
  iVar7 = (*(int *)(&DAT_007e5474 + iVar7) / 0x19) % 0xe10;
  wsprintfA((LPSTR)&DAT_0080f33a,s__02d__02d_007c3c60,iVar7 / 0x3c,iVar7 % 0x3c);
  ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,2);
  local_8 = local_8 + 0xf;
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar21 = 3;
  iVar19 = -1;
  iVar7 = -3;
  puVar10 = (uint *)FUN_006b0140(0x5625,HINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E0,puVar10,iVar7,iVar19,uVar21);
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
  UVar8 = 0x5d57;
  if ((&DAT_007e53bc)[param_1] != '\0') {
    if ((char)local_c == '\x02') {
      UVar8 = 0x5d58;
    }
    else if ((char)local_c == '\x01') {
      UVar8 = 0x5d59;
    }
  }
  uVar13 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar19 = -1;
  iVar7 = 1;
  puVar10 = (uint *)FUN_006b0140(UVar8,HINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E0,puVar10,iVar7,iVar19,uVar13);
  local_8 = local_8 + 0xf;
  if ((g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) &&
     ((thunk_FUN_004e6e10(local_18,param_1,&local_10,&local_14), local_10 != 0 || (local_14 != 0))))
  {
    ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
    uVar21 = 3;
    iVar19 = -1;
    iVar7 = -3;
    puVar10 = (uint *)FUN_006b0140(0x5626,HINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01E0,puVar10,iVar7,iVar19,uVar21);
    if (local_10 != 0) {
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      pHVar16 = HINSTANCE_00807618;
      UVar8 = thunk_FUN_00523410(local_10,(char)local_c,0);
      pcVar11 = (char *)FUN_006b0140(UVar8,pHVar16);
      uVar13 = 0xffffffff;
      do {
        pcVar14 = pcVar11;
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        pcVar14 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar14;
      } while (cVar1 != '\0');
      uVar13 = ~uVar13;
      pcVar11 = pcVar14 + -uVar13;
      pcVar14 = (char *)&DAT_0080f33a;
      for (uVar12 = uVar13 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pcVar14 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar14 = pcVar14 + 1;
      }
      for (puVar10 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar10 != (uint *)0x0;
          puVar10 = Library::MSVCRT::FUN_0072e560(puVar10,'\n')) {
        *(undefined1 *)puVar10 = 0x20;
      }
      ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
      local_8 = local_8 + 0xf;
      uVar13 = thunk_FUN_00526ba0(local_10,(char)local_c);
      pbVar9 = (byte *)FUN_0070b3a0(this_00->field_0240,uVar13);
      DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0218,0x96,local_8,'\x01',pbVar9);
      pbVar9 = local_3c;
      DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0218,0x94,local_8 - 2,'\x06',local_3c);
      local_34 = 0x94;
      local_2c = *(undefined4 *)(pbVar9 + 4);
      local_30 = local_8 - 2;
      local_28 = *(undefined4 *)(pbVar9 + 8);
      local_23 = local_10;
      local_24 = 2;
      local_1f = local_18;
      Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_34);
      local_8 = local_8 + *(int *)(pbVar9 + 8);
    }
    if (local_14 != 0) {
      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      pHVar16 = HINSTANCE_00807618;
      UVar8 = thunk_FUN_00523410(local_14,(char)local_c,0);
      pcVar11 = (char *)FUN_006b0140(UVar8,pHVar16);
      uVar13 = 0xffffffff;
      do {
        pcVar14 = pcVar11;
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        pcVar14 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar14;
      } while (cVar1 != '\0');
      uVar13 = ~uVar13;
      pcVar11 = pcVar14 + -uVar13;
      pcVar14 = (char *)&DAT_0080f33a;
      for (uVar12 = uVar13 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pcVar14 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar14 = pcVar14 + 1;
      }
      for (puVar10 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar10 != (uint *)0x0;
          puVar10 = Library::MSVCRT::FUN_0072e560(puVar10,'\n')) {
        *(undefined1 *)puVar10 = 0x20;
      }
      ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
      local_8 = local_8 + 0xf;
      uVar13 = thunk_FUN_00526ba0(local_14,(char)local_c);
      pbVar9 = (byte *)FUN_0070b3a0(this_00->field_023C,uVar13);
      DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0218,0x96,local_8,'\x01',pbVar9);
      pbVar9 = local_3c;
      DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0218,0x94,local_8 - 2,'\x06',local_3c);
      local_34 = 0x94;
      local_2c = *(undefined4 *)(pbVar9 + 4);
      local_30 = local_8 - 2;
      local_28 = *(undefined4 *)(pbVar9 + 8);
      local_23 = local_14;
      local_24 = 3;
      local_1f = local_18;
      Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_34);
      local_8 = local_8 + *(int *)(pbVar9 + 8);
    }
  }
  UVar8 = thunk_FUN_00528a30(GVar17,param_2);
  DrawDescription(this_00,(int *)&local_8,UVar8);
  AddLinks(this_00,(int *)&local_8,'\x05',param_1,local_38);
  g_currentExceptionFrame = local_88.previous;
  return;
}

