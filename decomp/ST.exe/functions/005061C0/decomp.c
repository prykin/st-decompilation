
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintCtrlObj */

void __thiscall CPanelTy::PaintCtrlObj(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *this_00;
  byte bVar2;
  CPanelTy CVar3;
  int iVar4;
  undefined3 extraout_var;
  uint uVar5;
  byte *pbVar6;
  char *pcVar7;
  uint *puVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 extraout_ECX;
  uint uVar11;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char cVar12;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  UINT UVar13;
  CPanelTy *pCVar14;
  void *unaff_EDI;
  undefined4 uVar15;
  char *pcVar16;
  CPanelTy *pCVar17;
  HINSTANCE pHVar18;
  undefined4 *puVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  InternalExceptionFrame local_64;
  CPanelTy *local_20;
  byte *local_1c;
  uint local_18;
  undefined4 local_14;
  CPanelTy *local_10;
  CPanelTy *local_c;
  UINT local_8;
  
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_20 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_20;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x348,0,iVar4,
                                &DAT_007a4ccc,s_CPanelTy__PaintCtrlObj_007c2848);
    if (iVar10 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x348);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 == 0) goto switchD_00506214_caseD_2;
  switch(local_20[0xbfa]) {
  case (CPanelTy)0x0:
  case (CPanelTy)0x3:
  case (CPanelTy)0x4:
    pbVar6 = *(byte **)(local_20 + 0x9d9);
    puVar19 = *(undefined4 **)(local_20 + 0x194);
    iVar10 = 0;
    iVar4 = 0;
    goto LAB_0050633b;
  case (CPanelTy)0x1:
    if (local_20[0xbfb] == (CPanelTy)0x2) {
      pbVar6 = *(byte **)(local_20 + 0x9dd);
      puVar19 = *(undefined4 **)(local_20 + 0x194);
      iVar10 = 0;
      iVar4 = 0;
      goto LAB_0050633b;
    }
    break;
  default:
    goto switchD_00506214_caseD_2;
  }
  switch(*(undefined4 *)(local_20 + 0xbf5)) {
  case 0x32:
  case 0x3c:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x46:
  case 0x47:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4e:
  case 0x51:
  case 0x52:
    pbVar6 = *(byte **)(local_20 + 0x9e5);
    goto LAB_005062d5;
  case 0x33:
  case 0x35:
  case 0x37:
  case 0x3a:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x4c:
    pbVar6 = *(byte **)(local_20 + 0x9e1);
LAB_005062d5:
    puVar19 = *(undefined4 **)(local_20 + 0x194);
    break;
  case 0x34:
  case 0x38:
  case 0x39:
  case 0x3b:
  case 0x3d:
  case 0x41:
  case 0x48:
  case 0x4d:
  case 0x4f:
  case 0x50:
  case 0x6f:
    pbVar6 = *(byte **)(local_20 + 0x9dd);
    puVar19 = *(undefined4 **)(local_20 + 0x194);
    break;
  case 0x36:
    if (local_20[0xbf9] == (CPanelTy)0x1) {
      pbVar6 = *(byte **)(local_20 + 0x9e5);
      puVar19 = *(undefined4 **)(local_20 + 0x194);
    }
    else {
      if (local_20[0xbf9] != (CPanelTy)0x2) goto switchD_00506270_caseD_53;
      pbVar6 = *(byte **)(local_20 + 0x9e1);
      puVar19 = *(undefined4 **)(local_20 + 0x194);
    }
    break;
  default:
    goto switchD_00506270_caseD_53;
  }
  thunk_FUN_00540760(puVar19,0,0,'\x01',pbVar6);
switchD_00506270_caseD_53:
  switch(*(undefined4 *)(this_00 + 0xbf5)) {
  case 0x36:
    if (this_00[0xbf9] == (CPanelTy)0x1) {
      pbVar6 = *(byte **)(this_00 + 0x9e9);
      puVar19 = *(undefined4 **)(this_00 + 0x194);
      iVar10 = 0x35;
      iVar4 = 0xc;
      goto LAB_0050633b;
    }
    break;
  case 0x3e:
  case 0x3f:
  case 0x42:
  case 0x46:
  case 0x47:
  case 0x4a:
  case 0x4b:
  case 0x51:
    pbVar6 = *(byte **)(this_00 + 0x9e9);
    puVar19 = *(undefined4 **)(this_00 + 0x194);
    iVar10 = 0x35;
    iVar4 = 0xc;
LAB_0050633b:
    thunk_FUN_00540760(puVar19,iVar4,iVar10,'\x01',pbVar6);
  }
switchD_00506214_caseD_2:
  if (this_00[0xbfa] != (CPanelTy)0x1) {
    if (this_00[0xbfa] == (CPanelTy)0x4) {
      switch(*(undefined4 *)(this_00 + 0xbf5)) {
      case 0xdd:
      case 0xde:
      case 0xe0:
      case 0xfe:
        iVar4 = ((*(undefined4 **)(this_00 + 0x194))[1] - *(int *)(*(byte **)(this_00 + 0x9ed) + 4))
                / 2;
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x50,'\x01',
                           *(byte **)(this_00 + 0x9ed));
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2d2),(uint)(byte)this_00[0xc11]);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4 + 3,0x53,'\x01',pbVar6);
        pbVar6 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(this_00 + 0x1b8),
                                             *(int *)(this_00 + 0x9ed),0,0x49,7,0x67,0xc,0);
        if (pbVar6 != (byte *)0x0) {
          if (*(int *)(this_00 + 0xbf5) == 0xfe) {
            local_8 = thunk_FUN_00529480(this_00[0xc11]);
          }
          else {
            local_8 = thunk_FUN_005293f0(*(int *)(this_00 + 0xbf5));
          }
          bVar2 = thunk_FUN_00529500(local_8);
          uVar15 = CONCAT31(extraout_var,bVar2);
          iVar20 = -1;
          iVar10 = -1;
          puVar8 = (uint *)FUN_006b0140(local_8,DAT_00807618);
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1b8),puVar8,iVar10,iVar20,uVar15);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4 + 0x49,0x57,'\x01',pbVar6);
          ccFntTy::EraseSufr(*(ccFntTy **)(this_00 + 0x1b8));
        }
        local_1c = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(this_00 + 0x1c4),
                                               *(int *)(this_00 + 0x9ed),0,100,0x14,0x3c,0x14,0);
        if (local_1c != (byte *)0x0) {
          uVar15 = 0;
          wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c2744,*(undefined4 *)(this_00 + 0xc12));
          switch(this_00[0xc11]) {
          case (CPanelTy)0x0:
            uVar15 = 0;
            break;
          case (CPanelTy)0x1:
            uVar15 = 2;
            break;
          case (CPanelTy)0x2:
            uVar15 = 1;
            break;
          case (CPanelTy)0x3:
            uVar15 = 7;
            break;
          case (CPanelTy)0x4:
            uVar15 = 3;
          }
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1c4),&DAT_0080f33a,-1,-1,uVar15);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4 + 100,100,'\x01',local_1c);
          ccFntTy::EraseSufr(*(ccFntTy **)(this_00 + 0x1c4));
        }
        break;
      case 0xfd:
        iVar4 = ((*(undefined4 **)(this_00 + 0x194))[1] - *(int *)(*(byte **)(this_00 + 0xa11) + 4))
                / 2;
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x3f,'\x01',
                           *(byte **)(this_00 + 0xa11));
        CVar3 = this_00[0xc11];
        if ((CVar3 != (CPanelTy)0x0) && ((byte)CVar3 < 0x16)) {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2ce),(byte)CVar3 - 1);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4 + 6,0x44,'\x01',pbVar6);
        }
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2ca),10);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4 + 4,0x42,'\x06',pbVar6);
        pbVar6 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(this_00 + 0x1b8),
                                             *(int *)(this_00 + 0xa11),0,0x38,4,0x7b,0x19,0);
        if (pbVar6 != (byte *)0x0) {
          iVar22 = -1;
          iVar21 = -1;
          uVar15 = 0;
          iVar20 = -1;
          iVar10 = -2;
          pHVar18 = DAT_00807618;
          UVar13 = thunk_FUN_00525290(CONCAT31((int3)((uint)extraout_ECX >> 8),this_00[0xc11]));
          puVar8 = (uint *)FUN_006b0140(UVar13,pHVar18);
          ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),puVar8,iVar10,iVar20,uVar15,iVar21,iVar22);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4 + 0x38,0x43,'\x01',pbVar6);
          ccFntTy::EraseSufr(*(ccFntTy **)(this_00 + 0x1b8));
        }
        pbVar6 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(this_00 + 0x1b8),
                                             *(int *)(this_00 + 0xa11),0,2,0x1e,0xb2,0x22,0);
        if (pbVar6 != (byte *)0x0) {
          ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),*(uint **)(this_00 + 0xc16),-2,-1,1,-1,-1);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4 + 2,0x5d,'\x01',pbVar6);
          ccFntTy::EraseSufr(*(ccFntTy **)(this_00 + 0x1b8));
        }
      }
    }
    goto switchD_00506377_caseD_df;
  }
  if (this_00[0xbfb] == (CPanelTy)0x2) {
    UVar13 = ((*(undefined4 **)(this_00 + 0x194))[1] - *(int *)(*(byte **)(this_00 + 0x9ed) + 4)) /
             2;
    local_8 = UVar13;
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),UVar13,0x50,'\x01',
                       *(byte **)(this_00 + 0x9ed));
    if (*(int *)(this_00 + 0xc12) != 0) {
      uVar5 = thunk_FUN_00526ba0(*(int *)(this_00 + 0xc12),(char)this_00[0xc1a]);
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2c2),uVar5);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),UVar13 + 6,0x5d,'\x01',pbVar6);
      FUN_006b4170(*(int *)(this_00 + 0x194),0,UVar13 + 0x36,0x5d,7,0x21,0);
      UVar13 = local_8;
      CVar3 = this_00[0xc24];
      local_1c = (byte *)CONCAT31(local_1c._1_3_,CVar3);
      cVar12 = (char)(((uint)(byte)CVar3 * 0x21) / 100);
      local_10 = (CPanelTy *)CONCAT31(local_10._1_3_,cVar12);
      if ((CVar3 != (CPanelTy)0x0) && (cVar12 == '\0')) {
        local_10 = (CPanelTy *)CONCAT31(local_10._1_3_,1);
      }
      if ((byte)CVar3 < 0x46) {
        iVar4 = (-(uint)((byte)CVar3 < 0x14) & 5) + 5;
      }
      else {
        iVar4 = 0;
      }
      uVar5 = (uint)local_10 & 0xff;
      Library::DKW::WGR::FUN_006b55f0
                (*(undefined4 **)(this_00 + 0x194),0,local_8 + 0x37,0x7e - uVar5,
                 *(int *)(this_00 + 0x28a),0,iVar4,*(int *)(*(int *)(this_00 + 0x28a) + 8) - uVar5,5
                 ,uVar5);
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2ca),1);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),UVar13 + 5,0x5c,'\x06',pbVar6);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,UVar13 + 2,0x52,
                       0xb2,10);
      pHVar18 = DAT_00807618;
      UVar13 = thunk_FUN_00523410(*(undefined4 *)(this_00 + 0xc12),(char)this_00[0xc1a],0);
      pcVar7 = (char *)FUN_006b0140(UVar13,pHVar18);
      uVar5 = 0xffffffff;
      do {
        pcVar16 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar16 = pcVar7 + 1;
        cVar12 = *pcVar7;
        pcVar7 = pcVar16;
      } while (cVar12 != '\0');
      uVar5 = ~uVar5;
      pCVar14 = (CPanelTy *)(pcVar16 + -uVar5);
      pCVar17 = this_00 + 0x1e1;
      for (uVar11 = uVar5 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(uint *)pCVar17 = *(uint *)pCVar14;
        pCVar14 = pCVar14 + 4;
        pCVar17 = pCVar17 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pCVar17 = *pCVar14;
        pCVar14 = pCVar14 + 1;
        pCVar17 = pCVar17 + 1;
      }
      for (puVar8 = Library::MSVCRT::FUN_0072e560((uint *)(this_00 + 0x1e1),'\n');
          puVar8 != (uint *)0x0; puVar8 = Library::MSVCRT::FUN_0072e560(puVar8,'\n')) {
        *(undefined1 *)puVar8 = 0x20;
      }
      goto LAB_00507034;
    }
    goto switchD_00506878_caseD_3b;
  }
  switch(*(undefined4 *)(this_00 + 0xbf5)) {
  case 0x32:
  case 0x40:
  case 0x49:
    UVar13 = ((*(undefined4 **)(this_00 + 0x194))[1] - *(int *)(*(byte **)(this_00 + 0x9ed) + 4)) /
             2;
    local_8 = UVar13;
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),UVar13,0x50,'\x01',
                       *(byte **)(this_00 + 0x9ed));
    if (*(int *)(this_00 + 0xc12) == 0) {
LAB_0050709d:
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,UVar13 + 2,0x52,
                       0xb2,0x2f);
LAB_005070be:
      uVar15 = 0;
      UVar13 = 0x2713;
      goto LAB_0050777e;
    }
    uVar5 = thunk_FUN_00526ba0(*(int *)(this_00 + 0xc12),(char)this_00[0xc1a]);
    pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2ba),uVar5);
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),UVar13 + 6,0x5d,'\x01',pbVar6);
    if (this_00[0xc26] != (CPanelTy)0x0) {
      wsprintfA((LPSTR)(this_00 + 0x1e1),&DAT_007c1890,(uint)(byte)this_00[0xc26]);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1c8),*(int *)(this_00 + 0x194),0,UVar13 + 6,0x5d,
                       0x30,0x21);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1c8),(uint *)(this_00 + 0x1e1),-2,-1,0);
    }
    FUN_006b4170(*(int *)(this_00 + 0x194),0,UVar13 + 0x36,0x5d,7,0x21,0);
    UVar13 = local_8;
    CVar3 = this_00[0xc24];
    cVar12 = (char)(((uint)(byte)CVar3 * 0x21) / 100);
    local_1c = (byte *)CONCAT31(local_1c._1_3_,cVar12);
    if ((CVar3 != (CPanelTy)0x0) && (cVar12 == '\0')) {
      local_1c = (byte *)CONCAT31(local_1c._1_3_,1);
    }
    if ((byte)CVar3 < 0x46) {
      iVar4 = (-(uint)((byte)CVar3 < 0x14) & 5) + 5;
    }
    else {
      iVar4 = 0;
    }
    uVar5 = (uint)local_1c & 0xff;
    Library::DKW::WGR::FUN_006b55f0
              (*(undefined4 **)(this_00 + 0x194),0,local_8 + 0x37,0x7e - uVar5,
               *(int *)(this_00 + 0x28a),0,iVar4,*(int *)(*(int *)(this_00 + 0x28a) + 8) - uVar5,5,
               uVar5);
    pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2ca),1);
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),UVar13 + 5,0x5c,'\x06',pbVar6);
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,UVar13 + 2,0x52,0xb2
                     ,10);
    pHVar18 = DAT_00807618;
    UVar13 = thunk_FUN_00523410(*(undefined4 *)(this_00 + 0xc12),(char)this_00[0xc1a],0);
    pcVar7 = (char *)FUN_006b0140(UVar13,pHVar18);
    uVar5 = 0xffffffff;
    do {
      pcVar16 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar16 = pcVar7 + 1;
      cVar12 = *pcVar7;
      pcVar7 = pcVar16;
    } while (cVar12 != '\0');
    uVar5 = ~uVar5;
    pCVar14 = (CPanelTy *)(pcVar16 + -uVar5);
    pCVar17 = this_00 + 0x1e1;
    for (uVar11 = uVar5 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(uint *)pCVar17 = *(uint *)pCVar14;
      pCVar14 = pCVar14 + 4;
      pCVar17 = pCVar17 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pCVar17 = *pCVar14;
      pCVar14 = pCVar14 + 1;
      pCVar17 = pCVar17 + 1;
    }
    for (puVar8 = Library::MSVCRT::FUN_0072e560((uint *)(this_00 + 0x1e1),'\n');
        puVar8 != (uint *)0x0; puVar8 = Library::MSVCRT::FUN_0072e560(puVar8,'\n')) {
      *(undefined1 *)puVar8 = 0x20;
    }
    goto LAB_00507034;
  case 0x33:
    iVar10 = ((*(undefined4 **)(this_00 + 0x194))[1] - *(int *)(*(byte **)(this_00 + 0x9f9) + 4)) /
             2;
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar10,0x36,'\x01',
                       *(byte **)(this_00 + 0x9f9));
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar10 + 5,0x39,'\x01',
                       *(byte **)(this_00 + 0x9fd));
    local_c = this_00 + 0xc1c;
    local_10 = this_00 + 0xc12;
    local_8 = 0;
    iVar4 = 0x3a;
    do {
      if (*(int *)local_10 == 0) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,iVar10 + 2,
                         iVar4 + -2,0xb2,0x2f);
        iVar23 = -1;
        iVar22 = -1;
        uVar15 = 0;
        iVar21 = -1;
        iVar20 = -2;
        puVar8 = (uint *)FUN_006b0140(0x2713,DAT_00807618);
        ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),puVar8,iVar20,iVar21,uVar15,iVar22,iVar23);
      }
      else {
        uVar5 = thunk_FUN_00526ba0(*(int *)local_10,(char)this_00[local_8 + 0xc1a]);
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2ba),uVar5);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar10 + 6,iVar4,'\x01',pbVar6);
        FUN_006b4170(*(int *)(this_00 + 0x194),0,iVar10 + 0x36,iVar4,7,0x21,0);
        CVar3 = this_00[local_8 + 0xc24];
        local_14 = CONCAT31(local_14._1_3_,CVar3);
        cVar12 = (char)(((uint)(byte)CVar3 * 0x21) / 100);
        local_18 = CONCAT31(local_18._1_3_,cVar12);
        if ((CVar3 != (CPanelTy)0x0) && (cVar12 == '\0')) {
          local_18 = CONCAT31(local_18._1_3_,1);
        }
        if ((byte)CVar3 < 0x46) {
          local_1c = (byte *)((-(uint)((byte)CVar3 < 0x14) & 5) + 5);
        }
        else {
          local_1c = (byte *)0x0;
        }
        uVar5 = local_18 & 0xff;
        Library::DKW::WGR::FUN_006b55f0
                  (*(undefined4 **)(this_00 + 0x194),0,iVar10 + 0x37,(iVar4 - uVar5) + 0x21,
                   *(int *)(this_00 + 0x28a),0,(int)local_1c,
                   *(int *)(*(int *)(this_00 + 0x28a) + 8) - uVar5,5,uVar5);
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2ca),1);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar10 + 5,iVar4 + -1,'\x06',pbVar6);
        PaintDamageXY(this_00,*(int *)(this_00 + 0x194),iVar10 + 0x41,iVar4,
                      CONCAT31((int3)((uint)extraout_ECX_00 >> 8),
                               'd' - (char)this_00[local_8 + 0xc24]),0x36b1);
        PaintCostsXY(this_00,*(int *)(this_00 + 0x194),iVar10 + 0x41,iVar4 + 0xb,*(ushort *)local_c,
                     *(ushort *)(local_c + 4),4,2);
      }
      iVar4 = iVar4 + 0x23;
      local_8 = local_8 + 1;
      local_c = local_c + 2;
      local_10 = local_10 + 4;
    } while (iVar4 < 0x80);
    break;
  case 0x34:
    iVar4 = (*(undefined4 **)(this_00 + 0x194))[1];
    iVar10 = *(int *)(*(int *)(this_00 + 0x9f9) + 4);
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x60,0x1f,'\x01',
                       *(byte **)(this_00 + 0xa05));
    PaintMunition(this_00,(iVar4 - iVar10) / 2);
    break;
  case 0x35:
    iVar4 = ((*(undefined4 **)(this_00 + 0x194))[1] - *(int *)(*(byte **)(this_00 + 0x9ed) + 4)) / 2
    ;
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x50,'\x01',
                       *(byte **)(this_00 + 0x9ed));
    if (this_00[0xc31] != (CPanelTy)0x0) {
      PaintNameRes(this_00,iVar4);
      PaintPerRes(this_00,iVar4);
      break;
    }
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,iVar4 + 2,0x52,0xb2,
                     0x2f);
    if (*(short *)(this_00 + 0xc2f) == 0) goto LAB_005070be;
    uVar15 = FUN_006b0140(0x273c,DAT_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,s__d__s_007c2864,(uint)*(ushort *)(this_00 + 0xc2f),uVar15);
    iVar21 = -1;
    iVar20 = -1;
    uVar15 = 0;
    iVar10 = -1;
    iVar4 = -2;
    puVar8 = &DAT_0080f33a;
    goto LAB_00507784;
  case 0x36:
  case 0x37:
  case 0x43:
  case 0x45:
  case 0x48:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x6f:
    iVar4 = ((*(undefined4 **)(this_00 + 0x194))[1] - *(int *)(*(byte **)(this_00 + 0x9f5) + 4)) / 2
    ;
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x67,'\x01',
                       *(byte **)(this_00 + 0x9f5));
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,iVar4 + 2,0x69,0xa7,
                     0xc);
    iVar22 = -1;
    iVar21 = -1;
    uVar15 = 0;
    iVar20 = -1;
    iVar10 = -2;
    pHVar18 = DAT_00807618;
    UVar13 = thunk_FUN_00525890(*(undefined4 *)(this_00 + 0xbf5));
    puVar8 = (uint *)FUN_006b0140(UVar13,pHVar18);
    ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),puVar8,iVar10,iVar20,uVar15,iVar21,iVar22);
    if (this_00[0xc29] != (CPanelTy)0xff) {
      if (0x28 < (byte)this_00[0xc29]) {
        this_00[0xc29] = (CPanelTy)0x28;
      }
      local_8 = local_8 & 0xffffff00;
      if (this_00[0xc29] != (CPanelTy)0x0) {
        do {
          if ((*(int *)(this_00 + 0xbf5) != 0x4d) || (iVar10 = 4, this_00[0xc28] == (CPanelTy)0x0))
          {
            iVar10 = 3;
          }
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),iVar10);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4 + 6 + (local_8 & 0xff) * 4,0x75
                             ,'\x01',pbVar6);
          CVar3 = (CPanelTy)((byte)local_8 + 1);
          local_8 = CONCAT31(local_8._1_3_,CVar3);
        } while ((byte)CVar3 < (byte)this_00[0xc29]);
      }
      if ((byte)local_8 < 0x28) {
        iVar10 = 0x28 - (local_8 & 0xff);
        iVar4 = iVar4 + 6 + (local_8 & 0xff) * 4;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x75,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    break;
  case 0x38:
  case 0x39:
  case 0x4f:
    PaintMineInf(this_00,(*(int *)(*(int *)(this_00 + 0x194) + 4) -
                         *(int *)(*(int *)(this_00 + 0x9ed) + 4)) / 2);
    break;
  case 0x3a:
    iVar10 = ((*(undefined4 **)(this_00 + 0x194))[1] - *(int *)(*(byte **)(this_00 + 0x9ed) + 4)) /
             2;
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar10,0x50,'\x01',
                       *(byte **)(this_00 + 0x9ed));
    iVar4 = iVar10 + 2;
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,iVar4,0x52,0x69,0xc)
    ;
    iVar23 = -1;
    iVar22 = -1;
    uVar15 = 1;
    iVar21 = -1;
    iVar20 = -3;
    puVar8 = (uint *)FUN_006b0140(0x36b7,DAT_00807618);
    ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),puVar8,iVar20,iVar21,uVar15,iVar22,iVar23);
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,iVar4,0x5d,0x69,0xc)
    ;
    iVar23 = -1;
    iVar22 = -1;
    uVar15 = 1;
    iVar21 = -1;
    iVar20 = -3;
    puVar8 = (uint *)FUN_006b0140(0x36b8,DAT_00807618);
    ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),puVar8,iVar20,iVar21,uVar15,iVar22,iVar23);
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,iVar4,0x69,0xb2,0xc)
    ;
    iVar22 = -1;
    iVar21 = -1;
    uVar15 = 1;
    iVar20 = -1;
    iVar4 = -2;
    puVar8 = (uint *)FUN_006b0140(0x36b6,DAT_00807618);
    ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),puVar8,iVar4,iVar20,uVar15,iVar21,iVar22);
    local_8 = local_8 & 0xffffff00;
    if (this_00[0xc3a] != (CPanelTy)0x0) {
      do {
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),3);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar10 + 0x70 + (local_8 & 0xff) * 4,
                           0x54,'\x01',pbVar6);
        CVar3 = (CPanelTy)((byte)local_8 + 1);
        local_8 = CONCAT31(local_8._1_3_,CVar3);
      } while ((byte)CVar3 < (byte)this_00[0xc3a]);
    }
    if ((byte)local_8 < 0xf) {
      local_1c = (byte *)(0xf - (local_8 & 0xff));
      iVar4 = iVar10 + 0x70 + (local_8 & 0xff) * 4;
      do {
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x54,'\x01',pbVar6);
        iVar4 = iVar4 + 4;
        local_1c = local_1c + -1;
      } while (local_1c != (byte *)0x0);
    }
    local_8 = local_8 & 0xffffff00;
    if (this_00[0xc3b] != (CPanelTy)0x0) {
      do {
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),3);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar10 + 0x70 + (local_8 & 0xff) * 4,
                           0x5f,'\x01',pbVar6);
        CVar3 = (CPanelTy)((byte)local_8 + 1);
        local_8 = CONCAT31(local_8._1_3_,CVar3);
      } while ((byte)CVar3 < (byte)this_00[0xc3b]);
    }
    if ((byte)local_8 < 0xf) {
      local_1c = (byte *)(0xf - (local_8 & 0xff));
      iVar4 = iVar10 + 0x70 + (local_8 & 0xff) * 4;
      do {
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x5f,'\x01',pbVar6);
        iVar4 = iVar4 + 4;
        local_1c = (byte *)((int)local_1c + -1);
      } while (local_1c != (byte *)0x0);
    }
    local_8 = local_8 & 0xffffff00;
    local_1c = (byte *)(((uint)*(ushort *)(this_00 + 0xc34) * 0x28) / 400);
    if (local_1c != (byte *)0x0) {
      pbVar6 = (byte *)0x0;
      do {
        pbVar9 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),2);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar10 + 0xb + (int)pbVar6 * 4,0x76,
                           '\x01',pbVar9);
        bVar2 = (byte)local_8 + 1;
        local_8 = CONCAT31(local_8._1_3_,bVar2);
        pbVar6 = (byte *)(uint)bVar2;
      } while (pbVar6 < local_1c);
    }
    if ((byte)local_8 < 0x28) {
      iVar20 = 0x28 - (local_8 & 0xff);
      iVar4 = iVar10 + 0xb + (local_8 & 0xff) * 4;
      do {
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x76,'\x01',pbVar6);
        iVar4 = iVar4 + 4;
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
    }
    break;
  case 0x3c:
    iVar4 = ((*(undefined4 **)(this_00 + 0x194))[1] - *(int *)(*(byte **)(this_00 + 0x9ed) + 4)) / 2
    ;
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x50,'\x01',
                       *(byte **)(this_00 + 0x9ed));
    switch(this_00[0xc3c]) {
    case (CPanelTy)0x0:
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,iVar4,0x50,
                       *(int *)(*(int *)(this_00 + 0x9ed) + 4),
                       *(int *)(*(int *)(this_00 + 0x9ed) + 8));
      uVar15 = 1;
      UVar13 = 0x36bb;
      goto LAB_0050777e;
    case (CPanelTy)0x1:
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4 + 5,0x65,'\x01',
                         *(byte **)(this_00 + 0xa0d));
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,iVar4 + 2,0x52,
                       0xb2,10);
      iVar22 = -1;
      iVar21 = -1;
      uVar15 = 0;
      iVar20 = -1;
      iVar10 = -2;
      puVar8 = (uint *)FUN_006b0140(0x36bd,DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),puVar8,iVar10,iVar20,uVar15,iVar21,iVar22);
      PaintDamageXY(this_00,*(int *)(this_00 + 0x194),iVar4 + 0x39,0x65,
                    CONCAT31((int3)((uint)extraout_EDX >> 8),this_00[0xc3d]),0x2714);
      uVar5 = (uint)(*(int *)(this_00 + 0xc3d) * 0x28) / 100;
      local_18 = 0;
      if (uVar5 != 0) {
        iVar10 = iVar4 + 0xb;
        local_1c = (byte *)uVar5;
        local_18 = uVar5;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),3);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar10,0x5c,'\x01',pbVar6);
          iVar10 = iVar10 + 4;
          local_1c = (byte *)((int)local_1c - 1);
        } while (local_1c != (byte *)0x0);
        local_1c = (byte *)0x0;
      }
      if (local_18 < 0x28) {
        iVar4 = iVar4 + 0xb + local_18 * 4;
        iVar10 = 0x28 - local_18;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x5c,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      break;
    case (CPanelTy)0x2:
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,iVar4,0x54,
                       *(int *)(*(int *)(this_00 + 0x9ed) + 4),0x21);
      iVar22 = -1;
      iVar21 = -1;
      uVar15 = 1;
      iVar20 = -1;
      iVar10 = -2;
      puVar8 = (uint *)FUN_006b0140(0x36bc,DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),puVar8,iVar10,iVar20,uVar15,iVar21,iVar22);
      wsprintfA((LPSTR)(this_00 + 0x1e1),&DAT_007c1ae4,*(undefined4 *)(this_00 + 0xc3d));
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1bc),*(int *)(this_00 + 0x194),0,iVar4,0x71,
                       *(int *)(*(int *)(this_00 + 0x9ed) + 4),
                       *(int *)(*(int *)(this_00 + 0x9ed) + 8) + -0x21);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1bc),(uint *)(this_00 + 0x1e1),-1,-1,0);
      break;
    case (CPanelTy)0x3:
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,iVar4,0x50,
                       *(int *)(*(int *)(this_00 + 0x9ed) + 4),
                       *(int *)(*(int *)(this_00 + 0x9ed) + 8));
      uVar15 = 1;
      UVar13 = 0x36be;
LAB_0050777e:
      iVar21 = -1;
      iVar20 = -1;
      iVar10 = -1;
      iVar4 = -2;
      puVar8 = (uint *)FUN_006b0140(UVar13,DAT_00807618);
LAB_00507784:
      ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),puVar8,iVar4,iVar10,uVar15,iVar20,iVar21);
    }
    break;
  case 0x44:
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),
                       ((*(undefined4 **)(this_00 + 0x194))[1] -
                       *(int *)(*(byte **)(this_00 + 0xa01) + 4)) / 2,0x37,'\x01',
                       *(byte **)(this_00 + 0xa01));
    UVar13 = ((*(undefined4 **)(this_00 + 0x194))[1] - *(int *)(*(byte **)(this_00 + 0x9ed) + 4)) /
             2;
    local_8 = UVar13;
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),UVar13,0x50,'\x01',
                       *(byte **)(this_00 + 0x9ed));
    uVar5 = (uint)*(ushort *)(this_00 + 0xc34);
    uVar15 = FUN_006b0140(0x2725,DAT_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,s__1_s__0_d_007c286c,uVar15,uVar5);
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x56,0x39,0x6d,0x15)
    ;
    ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),&DAT_0080f33a,-2,-1,0,-1,-1);
    if (*(int *)(this_00 + 0xc12) == 0) goto LAB_0050709d;
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),UVar13 + 6,0x5d,'\x01',
                       *(byte **)(this_00 + 0xa09));
    FUN_006b4170(*(int *)(this_00 + 0x194),0,UVar13 + 0x36,0x5d,7,0x21,0);
    UVar13 = local_8;
    CVar3 = this_00[0xc24];
    cVar12 = (char)(((uint)(byte)CVar3 * 0x21) / 100);
    local_1c = (byte *)CONCAT31(local_1c._1_3_,cVar12);
    if ((CVar3 != (CPanelTy)0x0) && (cVar12 == '\0')) {
      local_1c = (byte *)CONCAT31(local_1c._1_3_,1);
    }
    if ((byte)CVar3 < 0x46) {
      iVar4 = (-(uint)((byte)CVar3 < 0x14) & 5) + 5;
    }
    else {
      iVar4 = 0;
    }
    uVar5 = (uint)local_1c & 0xff;
    Library::DKW::WGR::FUN_006b55f0
              (*(undefined4 **)(this_00 + 0x194),0,local_8 + 0x37,0x7e - uVar5,
               *(int *)(this_00 + 0x28a),0,iVar4,*(int *)(*(int *)(this_00 + 0x28a) + 8) - uVar5,5,
               uVar5);
    pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2ca),1);
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),UVar13 + 5,0x5c,'\x06',pbVar6);
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,UVar13 + 2,0x52,0xb2
                     ,10);
    pcVar7 = (char *)FUN_006b0140(0x2b2c,DAT_00807618);
    uVar5 = 0xffffffff;
    do {
      pcVar16 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar16 = pcVar7 + 1;
      cVar12 = *pcVar7;
      pcVar7 = pcVar16;
    } while (cVar12 != '\0');
    uVar5 = ~uVar5;
    pCVar14 = (CPanelTy *)(pcVar16 + -uVar5);
    pCVar17 = this_00 + 0x1e1;
    for (uVar11 = uVar5 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(uint *)pCVar17 = *(uint *)pCVar14;
      pCVar14 = pCVar14 + 4;
      pCVar17 = pCVar17 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pCVar17 = *pCVar14;
      pCVar14 = pCVar14 + 1;
      pCVar17 = pCVar17 + 1;
    }
    for (puVar8 = Library::MSVCRT::FUN_0072e560((uint *)(this_00 + 0x1e1),'\n');
        puVar8 != (uint *)0x0; puVar8 = Library::MSVCRT::FUN_0072e560(puVar8,'\n')) {
      *(undefined1 *)puVar8 = 0x20;
    }
LAB_00507034:
    ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),(uint *)(this_00 + 0x1e1),-2,-1,0,-1,-1);
    iVar4 = local_8 + 0x41;
    PaintDamageXY(this_00,*(int *)(this_00 + 0x194),iVar4,0x5d,
                  CONCAT31((int3)((uint)extraout_ECX_01 >> 8),this_00[0xc24]),0x2714);
    PaintCostsXY(this_00,*(int *)(this_00 + 0x194),iVar4,0x68,*(ushort *)(this_00 + 0xc1c),
                 *(ushort *)(this_00 + 0xc20),4,2);
    break;
  case 0x50:
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),
                       ((*(undefined4 **)(this_00 + 0x194))[1] -
                       *(int *)(*(byte **)(this_00 + 0x9f9) + 4)) / 2,0x36,'\x01',
                       *(byte **)(this_00 + 0x9f9));
  }
switchD_00506878_caseD_3b:
  PaintIDSObj(this_00);
switchD_00506377_caseD_df:
  if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
               *(uint *)(this_00 + 0xa8));
  }
  g_currentExceptionFrame = local_64.previous;
  return;
}

