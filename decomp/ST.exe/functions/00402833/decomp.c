
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffec : 0x00517361 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall HelpPanelTy::TechProc(HelpPanelTy *this,uint param_1,byte param_2,char param_3)

{
  char cVar1;
  HelpPanelTy HVar2;
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
  undefined4 *puVar15;
  HINSTANCE pHVar16;
  undefined1 uVar17;
  void *pvVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  InternalExceptionFrame IStack_88;
  HelpPanelTy *pHStack_44;
  int iStack_40;
  byte *pbStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  int iStack_23;
  uint uStack_1f;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  uint uStack_c;
  int iStack_8;
  
  pvVar18 = *(void **)(this + 0x248);
  uVar21 = 4;
  uStack_c = CONCAT31(uStack_c._1_3_,1);
  iStack_8 = 0;
  pHStack_44 = this;
  pbStack_3c = (byte *)FUN_0070b3a0((int)pvVar18,4);
  IStack_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_88;
  iVar7 = Library::MSVCRT::__setjmp3(IStack_88.jumpBuffer,0,pvVar18,uVar21);
  this_00 = pHStack_44;
  if (iVar7 != 0) {
    g_currentExceptionFrame = IStack_88.previous;
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
    HVar2 = pHStack_44[0x1a1];
    if (((HVar2 == (HelpPanelTy)0x0) || (HVar2 == (HelpPanelTy)0x6)) || (HVar2 == (HelpPanelTy)0xa))
    {
      pHStack_44[0x1a2] = HVar2;
      *(undefined4 *)(pHStack_44 + 0x1ab) = *(undefined4 *)(pHStack_44 + 0x1a3);
    }
    else {
      pHStack_44[0x1a2] = (HelpPanelTy)0x0;
      *(undefined4 *)(pHStack_44 + 0x1ab) = 0;
    }
    pHStack_44[0x1a1] = (HelpPanelTy)0x5;
    *(uint *)(pHStack_44 + 0x1a3) = param_1;
    *(uint *)(pHStack_44 + 0x1a7) = (uint)param_2;
    *(undefined2 *)(pHStack_44 + 0x1af) = 0x32;
    *(undefined2 *)(pHStack_44 + 0x1b1) = 5;
    if (*(int *)(pHStack_44 + 0x178) != 0) {
      *(undefined4 *)(pHStack_44 + 0x28) = 0x4202;
      *(undefined2 *)(pHStack_44 + 0x2c) = 0;
      *(undefined2 *)(pHStack_44 + 0x2e) = 2;
      *(int *)(pHStack_44 + 0x30) = *(int *)(pHStack_44 + 0x178);
      if (DAT_00802a30 != (undefined4 *)0x0) {
        (**(code **)*DAT_00802a30)(pHStack_44 + 0x18);
      }
    }
  }
  uVar6 = 0;
  do {
    if ((&PTR_DAT_007bfc04)[uVar6][param_1] != '\0') {
      uStack_c = CONCAT31(uStack_c._1_3_,(char)uStack_c + (char)uVar6);
      break;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 3);
  uVar13 = uStack_c & 0xff;
  uVar17 = (undefined1)param_1;
  uStack_18 = uVar13;
  UVar8 = thunk_FUN_00528060(uVar17,param_2);
  DrawTitle(this_00,0x55fc,uVar13,UVar8);
  uVar13 = thunk_FUN_005276e0(uVar17,param_2);
  pbVar9 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x230),uVar13);
  thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),0x35,0x2a,'\x01',pbVar9);
  ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,0xf);
  uVar21 = 3;
  iVar19 = -1;
  iVar7 = -3;
  puVar10 = (uint *)FUN_006b0140(0x5622,DAT_00807618);
  ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar10,iVar7,iVar19,uVar21);
  ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,0x106,
                   0xf);
  if ((char)uStack_c == DAT_0080874e) {
    bVar4 = thunk_FUN_004e5910((uint)DAT_0080874d,param_1);
    if (CONCAT31(extraout_var,bVar4) != 0) {
      uStack_38 = (uint)param_2;
      uVar5 = thunk_FUN_004e6140((uint)DAT_0080874d,param_1);
      if ((int)(uint)param_2 <= CONCAT31(extraout_var_00,uVar5)) {
        uVar5 = thunk_FUN_004e6140((uint)DAT_0080874d,param_1);
        iVar7 = thunk_FUN_004e60d0((uint)DAT_0080874d,param_1);
        if (CONCAT31(extraout_var_01,uVar5) <= iVar7) {
          uVar13 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar19 = -1;
          iVar7 = 1;
          puVar10 = (uint *)FUN_006b0140(0x5d56,DAT_00807618);
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar10,iVar7,iVar19,uVar13);
          iVar7 = 2;
          goto LAB_00516f08;
        }
        bVar4 = thunk_FUN_004e5f90((uint)DAT_0080874d,param_1);
        if (CONCAT31(extraout_var_02,bVar4) == 0) {
          iVar7 = thunk_FUN_004e5cc0((uint)DAT_0080874d,param_1,uStack_38);
          if (iVar7 == 0) {
            uVar13 = (DAT_0080874e != '\x03') - 1 & 5;
            iVar19 = -1;
            iVar7 = 1;
            puVar10 = (uint *)FUN_006b0140(0x5d55,DAT_00807618);
            ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar10,iVar7,iVar19,uVar13);
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
        puVar10 = (uint *)FUN_006b0140(UVar8,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar10,iVar7,iVar19,uVar13);
        iVar7 = 3;
        goto LAB_00516f54;
      }
    }
    uVar13 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar19 = -1;
    iVar7 = 1;
    puVar10 = (uint *)FUN_006b0140(0x5d52,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar10,iVar7,iVar19,uVar13);
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
        puVar10 = (uint *)FUN_006b0140(0x5d52,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar10,iVar7,iVar19,uVar13);
        iVar7 = 1;
      }
      else {
        bVar4 = thunk_FUN_004e5f90((uint)DAT_0080874d,param_1);
        if (CONCAT31(extraout_var_04,bVar4) != 0) {
          uVar13 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar19 = -1;
          iVar7 = 1;
          puVar10 = (uint *)FUN_006b0140(0x5d54,DAT_00807618);
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar10,iVar7,iVar19,uVar13);
          iVar7 = 3;
LAB_00516eb8:
          pbVar9 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x248),iVar7);
          puVar15 = *(undefined4 **)(this_00 + 0x68);
          goto LAB_00516f6b;
        }
        uVar13 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar19 = -1;
        iVar7 = 1;
        puVar10 = (uint *)FUN_006b0140(0x5d53,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar10,iVar7,iVar19,uVar13);
        iVar7 = 3;
      }
LAB_00516f08:
      pbVar9 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x248),iVar7);
      puVar15 = *(undefined4 **)(this_00 + 0x68);
      goto LAB_00516f6b;
    }
    uVar13 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar19 = -1;
    iVar7 = 1;
    puVar10 = (uint *)FUN_006b0140(0x5d56,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar10,iVar7,iVar19,uVar13);
    iVar7 = 2;
  }
LAB_00516f54:
  pbVar9 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x248),iVar7);
  puVar15 = *(undefined4 **)(this_00 + 0x68);
LAB_00516f6b:
  thunk_FUN_00540760(puVar15,0x33,0x28,'\x06',pbVar9);
  iStack_8 = iStack_8 + 0xf;
  ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,0xf);
  uVar21 = 3;
  iVar19 = -1;
  iVar7 = -3;
  puVar10 = (uint *)FUN_006b0140(0x5623,DAT_00807618);
  ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar10,iVar7,iVar19,uVar21);
  ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,0x106,
                   0xf);
  uVar13 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar19 = -1;
  iVar7 = 1;
  pHVar16 = DAT_00807618;
  UVar8 = thunk_FUN_005293c0(param_1);
  puVar10 = (uint *)FUN_006b0140(UVar8,pHVar16);
  ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar10,iVar7,iVar19,uVar13);
  iStack_8 = iStack_8 + 0xf;
  ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,0xf);
  uVar21 = 3;
  iVar19 = -1;
  iVar7 = -3;
  puVar10 = (uint *)FUN_006b0140(0x55f7,DAT_00807618);
  ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar10,iVar7,iVar19,uVar21);
  ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e8),*(int *)(this_00 + 0x218),0,0x96,iStack_8 + -3,
                   0x106,0x14);
  uStack_38 = (uint)param_2;
  iVar7 = (uStack_38 + param_1 * 4) * 4;
  wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,*(undefined4 *)(&DAT_007e4818 + iVar7));
  ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e8),&DAT_0080f33a,1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 3);
  iStack_40 = FUN_0070b3a0(*(int *)(this_00 + 0x238),
                           (-(uint)((char)uStack_c != '\x03') & 0xfffffffe) + 4);
  if (iStack_40 != 0) {
    FUN_006b5440(*(int *)(this_00 + 0x218),0,0xb4,iStack_8,iStack_40,0,0x3a);
    uStack_34 = 0xb4;
    uStack_2c = *(undefined4 *)(iStack_40 + 4);
    iStack_30 = iStack_8;
    uStack_28 = *(undefined4 *)(iStack_40 + 8);
    iStack_23 = (-(uint)((char)uStack_c != '\x03') & 0xfffffffc) + 0xe0;
    uStack_24 = 1;
    uStack_1f = uStack_18;
    Library::DKW::TBL::FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_34);
  }
  iStack_8 = iStack_8 + 0xf;
  ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,0xf);
  uVar21 = 3;
  iVar20 = -1;
  iVar19 = -3;
  puVar10 = (uint *)FUN_006b0140(0x5624,DAT_00807618);
  ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar10,iVar19,iVar20,uVar21);
  ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,0x106,
                   0xf);
  iVar7 = (*(int *)(&DAT_007e5474 + iVar7) / 0x19) % 0xe10;
  wsprintfA((LPSTR)&DAT_0080f33a,s__02d__02d_007c3c60,iVar7 / 0x3c,iVar7 % 0x3c);
  ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,1,-1,2);
  iStack_8 = iStack_8 + 0xf;
  ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,0xf);
  uVar21 = 3;
  iVar19 = -1;
  iVar7 = -3;
  puVar10 = (uint *)FUN_006b0140(0x5625,DAT_00807618);
  ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar10,iVar7,iVar19,uVar21);
  ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,0x106,
                   0xf);
  UVar8 = 0x5d57;
  if ((&DAT_007e53bc)[param_1] != '\0') {
    if ((char)uStack_c == '\x02') {
      UVar8 = 0x5d58;
    }
    else if ((char)uStack_c == '\x01') {
      UVar8 = 0x5d59;
    }
  }
  uVar13 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar19 = -1;
  iVar7 = 1;
  puVar10 = (uint *)FUN_006b0140(UVar8,DAT_00807618);
  ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar10,iVar7,iVar19,uVar13);
  iStack_8 = iStack_8 + 0xf;
  if ((DAT_007fa174 != 0) &&
     ((thunk_FUN_004e6e10(uStack_18,param_1,&iStack_10,&iStack_14), iStack_10 != 0 ||
      (iStack_14 != 0)))) {
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,iStack_8,0x91,0xf)
    ;
    uVar21 = 3;
    iVar19 = -1;
    iVar7 = -3;
    puVar10 = (uint *)FUN_006b0140(0x5626,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar10,iVar7,iVar19,uVar21);
    if (iStack_10 != 0) {
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,0xf);
      pHVar16 = DAT_00807618;
      UVar8 = thunk_FUN_00523410(iStack_10,(char)uStack_c,0);
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
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,1,-1,
                     (DAT_0080874e != '\x03') - 1 & 5);
      iStack_8 = iStack_8 + 0xf;
      uVar13 = thunk_FUN_00526ba0(iStack_10,(char)uStack_c);
      pbVar9 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x240),uVar13);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x96,iStack_8,'\x01',pbVar9);
      pbVar9 = pbStack_3c;
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x94,iStack_8 + -2,'\x06',pbStack_3c);
      uStack_34 = 0x94;
      uStack_2c = *(undefined4 *)(pbVar9 + 4);
      iStack_30 = iStack_8 + -2;
      uStack_28 = *(undefined4 *)(pbVar9 + 8);
      iStack_23 = iStack_10;
      uStack_24 = 2;
      uStack_1f = uStack_18;
      Library::DKW::TBL::FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_34);
      iStack_8 = iStack_8 + *(int *)(pbVar9 + 8);
    }
    if (iStack_14 != 0) {
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,iStack_8,
                       0x106,0xf);
      pHVar16 = DAT_00807618;
      UVar8 = thunk_FUN_00523410(iStack_14,(char)uStack_c,0);
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
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,1,-1,
                     (DAT_0080874e != '\x03') - 1 & 5);
      iStack_8 = iStack_8 + 0xf;
      uVar13 = thunk_FUN_00526ba0(iStack_14,(char)uStack_c);
      pbVar9 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x23c),uVar13);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x96,iStack_8,'\x01',pbVar9);
      pbVar9 = pbStack_3c;
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x94,iStack_8 + -2,'\x06',pbStack_3c);
      uStack_34 = 0x94;
      uStack_2c = *(undefined4 *)(pbVar9 + 4);
      iStack_30 = iStack_8 + -2;
      uStack_28 = *(undefined4 *)(pbVar9 + 8);
      iStack_23 = iStack_14;
      uStack_24 = 3;
      uStack_1f = uStack_18;
      Library::DKW::TBL::FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&uStack_34);
      iStack_8 = iStack_8 + *(int *)(pbVar9 + 8);
    }
  }
  UVar8 = thunk_FUN_00528a30(uVar17,param_2);
  DrawDescription(this_00,&iStack_8,UVar8);
  AddLinks(this_00,&iStack_8,'\x05',param_1,uStack_38);
  g_currentExceptionFrame = IStack_88.previous;
  return;
}

