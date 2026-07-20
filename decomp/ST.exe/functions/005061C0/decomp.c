
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintCtrlObj */

void __thiscall CPanelTy::PaintCtrlObj(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *this_00;
  byte bVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  byte *pbVar5;
  UINT UVar6;
  char *pcVar7;
  uint *puVar8;
  byte *pbVar9;
  int iVar10;
  ushort *puVar11;
  undefined4 extraout_ECX;
  uint uVar12;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char cVar13;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  Global_sub_00529500_param_1Enum GVar14;
  void *unaff_EDI;
  undefined4 uVar15;
  char *pcVar16;
  HINSTANCE pHVar17;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  InternalExceptionFrame local_64;
  CPanelTy *local_20;
  byte *local_1c;
  uint local_18;
  undefined4 local_14;
  Global_sub_00526BA0_param_1Enum *local_10;
  ushort *local_c;
  Global_sub_00529500_param_1Enum local_8;
  
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_20 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_20;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x348,0,iVar3,
                                &DAT_007a4ccc,s_CPanelTy__PaintCtrlObj_007c2848);
    if (iVar10 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x348);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 == 0) goto switchD_00506214_caseD_2;
  switch(local_20->field_0BFA) {
  case 0:
  case 3:
  case 4:
    puVar11 = local_20->field_09D9;
    puVar18 = (undefined4 *)local_20->field_0194;
    iVar10 = 0;
    iVar3 = 0;
    goto LAB_0050633b;
  case 1:
    if (local_20->field_0BFB == '\x02') {
      puVar11 = local_20->field_09DD;
      puVar18 = (undefined4 *)local_20->field_0194;
      iVar10 = 0;
      iVar3 = 0;
      goto LAB_0050633b;
    }
    break;
  default:
    goto switchD_00506214_caseD_2;
  }
  switch(local_20->field_0BF5) {
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
    puVar11 = local_20->field_09E5;
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
    puVar11 = local_20->field_09E1;
LAB_005062d5:
    puVar18 = (undefined4 *)local_20->field_0194;
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
    puVar11 = local_20->field_09DD;
    puVar18 = (undefined4 *)local_20->field_0194;
    break;
  case 0x36:
    if (local_20->field_0BF9 == '\x01') {
      puVar11 = local_20->field_09E5;
      puVar18 = (undefined4 *)local_20->field_0194;
    }
    else {
      if (local_20->field_0BF9 != '\x02') goto switchD_00506270_caseD_53;
      puVar11 = local_20->field_09E1;
      puVar18 = (undefined4 *)local_20->field_0194;
    }
    break;
  default:
    goto switchD_00506270_caseD_53;
  }
  DibPut(puVar18,0,0,'\x01',(byte *)puVar11);
switchD_00506270_caseD_53:
  switch(this_00->field_0BF5) {
  case 0x36:
    if (this_00->field_0BF9 == '\x01') {
      puVar11 = this_00->field_09E9;
      puVar18 = (undefined4 *)this_00->field_0194;
      iVar10 = 0x35;
      iVar3 = 0xc;
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
    puVar11 = this_00->field_09E9;
    puVar18 = (undefined4 *)this_00->field_0194;
    iVar10 = 0x35;
    iVar3 = 0xc;
LAB_0050633b:
    DibPut(puVar18,iVar3,iVar10,'\x01',(byte *)puVar11);
  }
switchD_00506214_caseD_2:
  if (this_00->field_0BFA != '\x01') {
    if (this_00->field_0BFA == '\x04') {
      switch(this_00->field_0BF5) {
      case 0xdd:
      case 0xde:
      case 0xe0:
      case 0xfe:
        iVar3 = (((undefined4 *)this_00->field_0194)[1] - *(int *)(this_00->field_09ED + 2)) / 2;
        DibPut((undefined4 *)this_00->field_0194,iVar3,0x50,'\x01',(byte *)this_00->field_09ED);
        pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02D2,(uint)(byte)this_00->field_0C11);
        DibPut((undefined4 *)this_00->field_0194,iVar3 + 3,0x53,'\x01',pbVar5);
        pbVar5 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,(int)this_00->field_09ED,0,0x49,7,
                                             0x67,0xc,0);
        if (pbVar5 != (byte *)0x0) {
          if (this_00->field_0BF5 == 0xfe) {
            local_8 = thunk_FUN_00529480(this_00->field_0C11);
          }
          else {
            local_8 = thunk_FUN_005293f0(this_00->field_0BF5);
          }
          bVar2 = thunk_FUN_00529500(local_8);
          uVar15 = CONCAT31(extraout_var,bVar2);
          iVar19 = -1;
          iVar10 = -1;
          puVar8 = (uint *)FUN_006b0140(local_8,HINSTANCE_00807618);
          ccFntTy::WrStr(this_00->field_01B8,puVar8,iVar10,iVar19,uVar15);
          DibPut((undefined4 *)this_00->field_0194,iVar3 + 0x49,0x57,'\x01',pbVar5);
          ccFntTy::EraseSufr(this_00->field_01B8);
        }
        local_1c = (byte *)ccFntTy::CreateSurf(this_00->field_01C4,(int)this_00->field_09ED,0,100,
                                               0x14,0x3c,0x14,0);
        if (local_1c != (byte *)0x0) {
          uVar15 = 0;
          wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c2744,*(undefined4 *)&this_00->field_0xc12);
          switch(this_00->field_0C11) {
          case 0:
            uVar15 = 0;
            break;
          case 1:
            uVar15 = 2;
            break;
          case 2:
            uVar15 = 1;
            break;
          case 3:
            uVar15 = 7;
            break;
          case 4:
            uVar15 = 3;
          }
          ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,uVar15);
          DibPut((undefined4 *)this_00->field_0194,iVar3 + 100,100,'\x01',local_1c);
          ccFntTy::EraseSufr(this_00->field_01C4);
        }
        break;
      case 0xfd:
        iVar3 = (((undefined4 *)this_00->field_0194)[1] - *(int *)(this_00->field_0A11 + 2)) / 2;
        DibPut((undefined4 *)this_00->field_0194,iVar3,0x3f,'\x01',(byte *)this_00->field_0A11);
        bVar2 = this_00->field_0C11;
        if ((bVar2 != 0) && (bVar2 < 0x16)) {
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02CE,bVar2 - 1);
          DibPut((undefined4 *)this_00->field_0194,iVar3 + 6,0x44,'\x01',pbVar5);
        }
        pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02CA,10);
        DibPut((undefined4 *)this_00->field_0194,iVar3 + 4,0x42,'\x06',pbVar5);
        pbVar5 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,(int)this_00->field_0A11,0,0x38,4,
                                             0x7b,0x19,0);
        if (pbVar5 != (byte *)0x0) {
          iVar21 = -1;
          iVar20 = -1;
          uVar4 = 0;
          iVar19 = -1;
          iVar10 = -2;
          pHVar17 = HINSTANCE_00807618;
          UVar6 = thunk_FUN_00525290(CONCAT31((int3)((uint)extraout_ECX >> 8),this_00->field_0C11));
          puVar8 = (uint *)FUN_006b0140(UVar6,pHVar17);
          ccFntTy::WrTxt(this_00->field_01B8,puVar8,iVar10,iVar19,uVar4,iVar20,iVar21);
          DibPut((undefined4 *)this_00->field_0194,iVar3 + 0x38,0x43,'\x01',pbVar5);
          ccFntTy::EraseSufr(this_00->field_01B8);
        }
        pbVar5 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,(int)this_00->field_0A11,0,2,0x1e,
                                             0xb2,0x22,0);
        if (pbVar5 != (byte *)0x0) {
          ccFntTy::WrTxt(this_00->field_01B8,(uint *)this_00->field_0C16,-2,-1,1,-1,-1);
          DibPut((undefined4 *)this_00->field_0194,iVar3 + 2,0x5d,'\x01',pbVar5);
          ccFntTy::EraseSufr(this_00->field_01B8);
        }
      }
    }
    goto switchD_00506377_caseD_df;
  }
  if (this_00->field_0BFB == '\x02') {
    GVar14 = (((undefined4 *)this_00->field_0194)[1] - *(int *)(this_00->field_09ED + 2)) / 2;
    local_8 = GVar14;
    DibPut((undefined4 *)this_00->field_0194,GVar14,0x50,'\x01',(byte *)this_00->field_09ED);
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != 0) {
      uVar4 = thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                                 this_00->field_0C1A);
      pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02C2,uVar4);
      DibPut((undefined4 *)this_00->field_0194,GVar14 + 6,0x5d,'\x01',pbVar5);
      FUN_006b4170(this_00->field_0194,0,GVar14 + 0x36,0x5d,7,0x21,0);
      GVar14 = local_8;
      bVar2 = this_00->field_0C24;
      local_1c = (byte *)CONCAT31(local_1c._1_3_,bVar2);
      cVar13 = (char)(((uint)bVar2 * 0x21) / 100);
      local_10 = (Global_sub_00526BA0_param_1Enum *)CONCAT31(local_10._1_3_,cVar13);
      if ((bVar2 != 0) && (cVar13 == '\0')) {
        local_10 = (Global_sub_00526BA0_param_1Enum *)CONCAT31(local_10._1_3_,1);
      }
      if (bVar2 < 0x46) {
        iVar3 = (-(uint)(bVar2 < 0x14) & 5) + 5;
      }
      else {
        iVar3 = 0;
      }
      uVar4 = (uint)local_10 & 0xff;
      Library::DKW::WGR::FUN_006b55f0
                ((undefined4 *)this_00->field_0194,0,local_8 + 0x37,0x7e - uVar4,
                 (byte *)this_00->field_028A,0,iVar3,*(int *)(this_00->field_028A + 4) - uVar4,5,
                 uVar4);
      pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02CA,1);
      DibPut((undefined4 *)this_00->field_0194,GVar14 + 5,0x5c,'\x06',pbVar5);
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,GVar14 + 2,0x52,0xb2,10);
      pHVar17 = HINSTANCE_00807618;
      UVar6 = thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                                 this_00->field_0C1A,0);
      pcVar7 = (char *)FUN_006b0140(UVar6,pHVar17);
      uVar4 = 0xffffffff;
      do {
        pcVar16 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar16 = pcVar7 + 1;
        cVar13 = *pcVar7;
        pcVar7 = pcVar16;
      } while (cVar13 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar16 + -uVar4;
      pcVar16 = &this_00->field_0x1e1;
      for (uVar12 = uVar4 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar16 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar16 = pcVar16 + 1;
      }
      for (puVar8 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e1,'\n');
          puVar8 != (uint *)0x0; puVar8 = Library::MSVCRT::FUN_0072e560(puVar8,'\n')) {
        *(undefined1 *)puVar8 = 0x20;
      }
      goto cf_common_exit_00507034;
    }
    goto switchD_00506878_caseD_3b;
  }
  switch(this_00->field_0BF5) {
  case 0x32:
  case 0x40:
  case 0x49:
    GVar14 = (((undefined4 *)this_00->field_0194)[1] - *(int *)(this_00->field_09ED + 2)) / 2;
    local_8 = GVar14;
    DibPut((undefined4 *)this_00->field_0194,GVar14,0x50,'\x01',(byte *)this_00->field_09ED);
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == 0) {
LAB_0050709d:
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,GVar14 + 2,0x52,0xb2,0x2f);
LAB_005070be:
      uVar4 = 0;
      UVar6 = 0x2713;
      goto LAB_0050777e;
    }
    uVar4 = thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                               this_00->field_0C1A);
    pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02BA,uVar4);
    DibPut((undefined4 *)this_00->field_0194,GVar14 + 6,0x5d,'\x01',pbVar5);
    if (this_00->field_0C26 != 0) {
      wsprintfA(&this_00->field_0x1e1,&DAT_007c1890,(uint)(byte)this_00->field_0C26);
      ccFntTy::SetSurf(this_00->field_01C8,this_00->field_0194,0,GVar14 + 6,0x5d,0x30,0x21);
      ccFntTy::WrStr(this_00->field_01C8,(uint *)&this_00->field_0x1e1,-2,-1,0);
    }
    FUN_006b4170(this_00->field_0194,0,GVar14 + 0x36,0x5d,7,0x21,0);
    GVar14 = local_8;
    bVar2 = this_00->field_0C24;
    cVar13 = (char)(((uint)bVar2 * 0x21) / 100);
    local_1c = (byte *)CONCAT31(local_1c._1_3_,cVar13);
    if ((bVar2 != 0) && (cVar13 == '\0')) {
      local_1c = (byte *)CONCAT31(local_1c._1_3_,1);
    }
    if (bVar2 < 0x46) {
      iVar3 = (-(uint)(bVar2 < 0x14) & 5) + 5;
    }
    else {
      iVar3 = 0;
    }
    uVar4 = (uint)local_1c & 0xff;
    Library::DKW::WGR::FUN_006b55f0
              ((undefined4 *)this_00->field_0194,0,local_8 + 0x37,0x7e - uVar4,
               (byte *)this_00->field_028A,0,iVar3,*(int *)(this_00->field_028A + 4) - uVar4,5,uVar4
              );
    pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02CA,1);
    DibPut((undefined4 *)this_00->field_0194,GVar14 + 5,0x5c,'\x06',pbVar5);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,GVar14 + 2,0x52,0xb2,10);
    pHVar17 = HINSTANCE_00807618;
    UVar6 = thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                               this_00->field_0C1A,0);
    pcVar7 = (char *)FUN_006b0140(UVar6,pHVar17);
    uVar4 = 0xffffffff;
    do {
      pcVar16 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar16 = pcVar7 + 1;
      cVar13 = *pcVar7;
      pcVar7 = pcVar16;
    } while (cVar13 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar16 + -uVar4;
    pcVar16 = &this_00->field_0x1e1;
    for (uVar12 = uVar4 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar16 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar16 = pcVar16 + 1;
    }
    for (puVar8 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e1,'\n');
        puVar8 != (uint *)0x0; puVar8 = Library::MSVCRT::FUN_0072e560(puVar8,'\n')) {
      *(undefined1 *)puVar8 = 0x20;
    }
    goto cf_common_exit_00507034;
  case 0x33:
    iVar10 = (((undefined4 *)this_00->field_0194)[1] - *(int *)(this_00->field_09F9 + 2)) / 2;
    DibPut((undefined4 *)this_00->field_0194,iVar10,0x36,'\x01',(byte *)this_00->field_09F9);
    DibPut((undefined4 *)this_00->field_0194,iVar10 + 5,0x39,'\x01',(byte *)this_00->field_09FD);
    local_c = &this_00->field_0C1C;
    local_10 = (Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12;
    local_8 = 0;
    iVar3 = 0x3a;
    do {
      if (*local_10 == 0) {
        ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar10 + 2,iVar3 - 2,0xb2,0x2f);
        iVar22 = -1;
        iVar21 = -1;
        uVar4 = 0;
        iVar20 = -1;
        iVar19 = -2;
        puVar8 = (uint *)FUN_006b0140(0x2713,HINSTANCE_00807618);
        ccFntTy::WrTxt(this_00->field_01B8,puVar8,iVar19,iVar20,uVar4,iVar21,iVar22);
      }
      else {
        uVar4 = thunk_FUN_00526ba0(*local_10,(&this_00->field_0C1A)[local_8]);
        pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02BA,uVar4);
        DibPut((undefined4 *)this_00->field_0194,iVar10 + 6,iVar3,'\x01',pbVar5);
        FUN_006b4170(this_00->field_0194,0,iVar10 + 0x36,iVar3,7,0x21,0);
        bVar2 = (&this_00->field_0C24)[local_8];
        local_14 = CONCAT31(local_14._1_3_,bVar2);
        cVar13 = (char)(((uint)bVar2 * 0x21) / 100);
        local_18 = CONCAT31(local_18._1_3_,cVar13);
        if ((bVar2 != 0) && (cVar13 == '\0')) {
          local_18 = CONCAT31(local_18._1_3_,1);
        }
        if (bVar2 < 0x46) {
          local_1c = (byte *)((-(uint)(bVar2 < 0x14) & 5) + 5);
        }
        else {
          local_1c = (byte *)0x0;
        }
        uVar4 = local_18 & 0xff;
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,iVar10 + 0x37,(iVar3 - uVar4) + 0x21,
                   (byte *)this_00->field_028A,0,(int)local_1c,
                   *(int *)(this_00->field_028A + 4) - uVar4,5,uVar4);
        pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02CA,1);
        DibPut((undefined4 *)this_00->field_0194,iVar10 + 5,iVar3 + -1,'\x06',pbVar5);
        PaintDamageXY(this_00,this_00->field_0194,iVar10 + 0x41,iVar3,
                      CONCAT31((int3)((uint)extraout_ECX_00 >> 8),
                               'd' - (&this_00->field_0C24)[local_8]),0x36b1);
        PaintCostsXY(this_00,this_00->field_0194,iVar10 + 0x41,iVar3 + 0xb,*local_c,local_c[2],4,2);
      }
      iVar3 = iVar3 + 0x23;
      local_8 = local_8 + 1;
      local_c = local_c + 1;
      local_10 = local_10 + 1;
    } while (iVar3 < 0x80);
    break;
  case 0x34:
    iVar3 = ((undefined4 *)this_00->field_0194)[1];
    iVar10 = *(int *)(this_00->field_09F9 + 2);
    DibPut((undefined4 *)this_00->field_0194,0x60,0x1f,'\x01',(byte *)this_00->field_0A05);
    PaintMunition(this_00,(iVar3 - iVar10) / 2);
    break;
  case 0x35:
    iVar3 = (((undefined4 *)this_00->field_0194)[1] - *(int *)(this_00->field_09ED + 2)) / 2;
    DibPut((undefined4 *)this_00->field_0194,iVar3,0x50,'\x01',(byte *)this_00->field_09ED);
    if (this_00->field_0C31 != '\0') {
      PaintNameRes(this_00,iVar3);
      PaintPerRes(this_00,iVar3);
      break;
    }
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar3 + 2,0x52,0xb2,0x2f);
    if (this_00->field_0C2F == 0) goto LAB_005070be;
    uVar15 = FUN_006b0140(0x273c,HINSTANCE_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,s__d__s_007c2864,(uint)(ushort)this_00->field_0C2F,uVar15);
    iVar20 = -1;
    iVar19 = -1;
    uVar4 = 0;
    iVar10 = -1;
    iVar3 = -2;
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
    iVar3 = (((undefined4 *)this_00->field_0194)[1] - *(int *)(this_00->field_09F5 + 2)) / 2;
    DibPut((undefined4 *)this_00->field_0194,iVar3,0x67,'\x01',(byte *)this_00->field_09F5);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar3 + 2,0x69,0xa7,0xc);
    iVar21 = -1;
    iVar20 = -1;
    uVar4 = 0;
    iVar19 = -1;
    iVar10 = -2;
    pHVar17 = HINSTANCE_00807618;
    UVar6 = thunk_FUN_00525890(this_00->field_0BF5);
    puVar8 = (uint *)FUN_006b0140(UVar6,pHVar17);
    ccFntTy::WrTxt(this_00->field_01B8,puVar8,iVar10,iVar19,uVar4,iVar20,iVar21);
    if (this_00->field_0C29 != 0xff) {
      if (0x28 < (byte)this_00->field_0C29) {
        this_00->field_0C29 = 0x28;
      }
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_0C29 != '\0') {
        do {
          if ((this_00->field_0BF5 != 0x4d) || (iVar10 = 4, this_00->field_0C28 == '\0')) {
            iVar10 = 3;
          }
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,iVar10);
          DibPut((undefined4 *)this_00->field_0194,iVar3 + 6 + (local_8 & 0xff) * 4,0x75,'\x01',
                 pbVar5);
          bVar2 = (undefined1)local_8 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar2);
        } while (bVar2 < (byte)this_00->field_0C29);
      }
      if ((byte)(undefined1)local_8 < 0x28) {
        iVar10 = 0x28 - (local_8 & 0xff);
        iVar3 = iVar3 + 6 + (local_8 & 0xff) * 4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
          DibPut((undefined4 *)this_00->field_0194,iVar3,0x75,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    break;
  case 0x38:
  case 0x39:
  case 0x4f:
    PaintMineInf(this_00,(*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09ED + 2)) / 2
                );
    break;
  case 0x3a:
    iVar10 = (((undefined4 *)this_00->field_0194)[1] - *(int *)(this_00->field_09ED + 2)) / 2;
    DibPut((undefined4 *)this_00->field_0194,iVar10,0x50,'\x01',(byte *)this_00->field_09ED);
    iVar3 = iVar10 + 2;
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar3,0x52,0x69,0xc);
    iVar22 = -1;
    iVar21 = -1;
    uVar4 = 1;
    iVar20 = -1;
    iVar19 = -3;
    puVar8 = (uint *)FUN_006b0140(0x36b7,HINSTANCE_00807618);
    ccFntTy::WrTxt(this_00->field_01B8,puVar8,iVar19,iVar20,uVar4,iVar21,iVar22);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar3,0x5d,0x69,0xc);
    iVar22 = -1;
    iVar21 = -1;
    uVar4 = 1;
    iVar20 = -1;
    iVar19 = -3;
    puVar8 = (uint *)FUN_006b0140(0x36b8,HINSTANCE_00807618);
    ccFntTy::WrTxt(this_00->field_01B8,puVar8,iVar19,iVar20,uVar4,iVar21,iVar22);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar3,0x69,0xb2,0xc);
    iVar21 = -1;
    iVar20 = -1;
    uVar4 = 1;
    iVar19 = -1;
    iVar3 = -2;
    puVar8 = (uint *)FUN_006b0140(0x36b6,HINSTANCE_00807618);
    ccFntTy::WrTxt(this_00->field_01B8,puVar8,iVar3,iVar19,uVar4,iVar20,iVar21);
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_0C3A != '\0') {
      do {
        pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,3);
        DibPut((undefined4 *)this_00->field_0194,iVar10 + 0x70 + (local_8 & 0xff) * 4,0x54,'\x01',
               pbVar5);
        bVar2 = (undefined1)local_8 + 1;
        local_8 = CONCAT31(local_8._1_3_,bVar2);
      } while (bVar2 < (byte)this_00->field_0C3A);
    }
    if ((byte)(undefined1)local_8 < 0xf) {
      local_1c = (byte *)(0xf - (local_8 & 0xff));
      iVar3 = iVar10 + 0x70 + (local_8 & 0xff) * 4;
      do {
        pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
        DibPut((undefined4 *)this_00->field_0194,iVar3,0x54,'\x01',pbVar5);
        iVar3 = iVar3 + 4;
        local_1c = local_1c + -1;
      } while (local_1c != (byte *)0x0);
    }
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_0C3B != '\0') {
      do {
        pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,3);
        DibPut((undefined4 *)this_00->field_0194,iVar10 + 0x70 + (local_8 & 0xff) * 4,0x5f,'\x01',
               pbVar5);
        bVar2 = (undefined1)local_8 + 1;
        local_8 = CONCAT31(local_8._1_3_,bVar2);
      } while (bVar2 < (byte)this_00->field_0C3B);
    }
    if ((byte)(undefined1)local_8 < 0xf) {
      local_1c = (byte *)(0xf - (local_8 & 0xff));
      iVar3 = iVar10 + 0x70 + (local_8 & 0xff) * 4;
      do {
        pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
        DibPut((undefined4 *)this_00->field_0194,iVar3,0x5f,'\x01',pbVar5);
        iVar3 = iVar3 + 4;
        local_1c = (byte *)((int)local_1c + -1);
      } while (local_1c != (byte *)0x0);
    }
    local_8 = local_8 & 0xffffff00;
    local_1c = (byte *)(((uint)(ushort)this_00->field_0C34 * 0x28) / 400);
    if (local_1c != (byte *)0x0) {
      pbVar5 = (byte *)0x0;
      do {
        pbVar9 = (byte *)FUN_0070b3a0(this_00->field_02B6,2);
        DibPut((undefined4 *)this_00->field_0194,iVar10 + 0xb + (int)pbVar5 * 4,0x76,'\x01',pbVar9);
        bVar2 = (undefined1)local_8 + 1;
        local_8 = CONCAT31(local_8._1_3_,bVar2);
        pbVar5 = (byte *)(uint)bVar2;
      } while (pbVar5 < local_1c);
    }
    if ((byte)(undefined1)local_8 < 0x28) {
      iVar19 = 0x28 - (local_8 & 0xff);
      iVar3 = iVar10 + 0xb + (local_8 & 0xff) * 4;
      do {
        pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
        DibPut((undefined4 *)this_00->field_0194,iVar3,0x76,'\x01',pbVar5);
        iVar3 = iVar3 + 4;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    break;
  case 0x3c:
    iVar3 = (((undefined4 *)this_00->field_0194)[1] - *(int *)(this_00->field_09ED + 2)) / 2;
    DibPut((undefined4 *)this_00->field_0194,iVar3,0x50,'\x01',(byte *)this_00->field_09ED);
    switch(this_00->field_0C3C) {
    case 0:
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar3,0x50,
                       *(int *)(this_00->field_09ED + 2),*(int *)(this_00->field_09ED + 4));
      uVar4 = 1;
      UVar6 = 0x36bb;
      goto LAB_0050777e;
    case 1:
      DibPut((undefined4 *)this_00->field_0194,iVar3 + 5,0x65,'\x01',(byte *)this_00->field_0A0D);
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar3 + 2,0x52,0xb2,10);
      iVar21 = -1;
      iVar20 = -1;
      uVar4 = 0;
      iVar19 = -1;
      iVar10 = -2;
      puVar8 = (uint *)FUN_006b0140(0x36bd,HINSTANCE_00807618);
      ccFntTy::WrTxt(this_00->field_01B8,puVar8,iVar10,iVar19,uVar4,iVar20,iVar21);
      PaintDamageXY(this_00,this_00->field_0194,iVar3 + 0x39,0x65,
                    CONCAT31((int3)((uint)extraout_EDX >> 8),this_00->field_0xc3d),0x2714);
      uVar4 = (uint)(*(int *)&this_00->field_0xc3d * 0x28) / 100;
      local_18 = 0;
      if (uVar4 != 0) {
        iVar10 = iVar3 + 0xb;
        local_1c = (byte *)uVar4;
        local_18 = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,3);
          DibPut((undefined4 *)this_00->field_0194,iVar10,0x5c,'\x01',pbVar5);
          iVar10 = iVar10 + 4;
          local_1c = (byte *)((int)local_1c - 1);
        } while (local_1c != (byte *)0x0);
        local_1c = (byte *)0x0;
      }
      if (local_18 < 0x28) {
        iVar3 = iVar3 + 0xb + local_18 * 4;
        iVar10 = 0x28 - local_18;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
          DibPut((undefined4 *)this_00->field_0194,iVar3,0x5c,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      break;
    case 2:
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar3,0x54,
                       *(int *)(this_00->field_09ED + 2),0x21);
      iVar21 = -1;
      iVar20 = -1;
      uVar4 = 1;
      iVar19 = -1;
      iVar10 = -2;
      puVar8 = (uint *)FUN_006b0140(0x36bc,HINSTANCE_00807618);
      ccFntTy::WrTxt(this_00->field_01B8,puVar8,iVar10,iVar19,uVar4,iVar20,iVar21);
      wsprintfA(&this_00->field_0x1e1,&DAT_007c1ae4,*(undefined4 *)&this_00->field_0xc3d);
      ccFntTy::SetSurf(this_00->field_01BC,this_00->field_0194,0,iVar3,0x71,
                       *(int *)(this_00->field_09ED + 2),*(int *)(this_00->field_09ED + 4) + -0x21);
      ccFntTy::WrStr(this_00->field_01BC,(uint *)&this_00->field_0x1e1,-1,-1,0);
      break;
    case 3:
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar3,0x50,
                       *(int *)(this_00->field_09ED + 2),*(int *)(this_00->field_09ED + 4));
      uVar4 = 1;
      UVar6 = 0x36be;
LAB_0050777e:
      iVar20 = -1;
      iVar19 = -1;
      iVar10 = -1;
      iVar3 = -2;
      puVar8 = (uint *)FUN_006b0140(UVar6,HINSTANCE_00807618);
LAB_00507784:
      ccFntTy::WrTxt(this_00->field_01B8,puVar8,iVar3,iVar10,uVar4,iVar19,iVar20);
    }
    break;
  case 0x44:
    DibPut((undefined4 *)this_00->field_0194,
           (((undefined4 *)this_00->field_0194)[1] - *(int *)(this_00->field_0A01 + 2)) / 2,0x37,
           '\x01',(byte *)this_00->field_0A01);
    GVar14 = (((undefined4 *)this_00->field_0194)[1] - *(int *)(this_00->field_09ED + 2)) / 2;
    local_8 = GVar14;
    DibPut((undefined4 *)this_00->field_0194,GVar14,0x50,'\x01',(byte *)this_00->field_09ED);
    uVar4 = (uint)(ushort)this_00->field_0C34;
    uVar15 = FUN_006b0140(0x2725,HINSTANCE_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,s__1_s__0_d_007c286c,uVar15,uVar4);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x56,0x39,0x6d,0x15);
    ccFntTy::WrTxt(this_00->field_01B8,&DAT_0080f33a,-2,-1,0,-1,-1);
    if (*(int *)&this_00->field_0xc12 == 0) goto LAB_0050709d;
    DibPut((undefined4 *)this_00->field_0194,GVar14 + 6,0x5d,'\x01',(byte *)this_00->field_0A09);
    FUN_006b4170(this_00->field_0194,0,GVar14 + 0x36,0x5d,7,0x21,0);
    GVar14 = local_8;
    bVar2 = this_00->field_0C24;
    cVar13 = (char)(((uint)bVar2 * 0x21) / 100);
    local_1c = (byte *)CONCAT31(local_1c._1_3_,cVar13);
    if ((bVar2 != 0) && (cVar13 == '\0')) {
      local_1c = (byte *)CONCAT31(local_1c._1_3_,1);
    }
    if (bVar2 < 0x46) {
      iVar3 = (-(uint)(bVar2 < 0x14) & 5) + 5;
    }
    else {
      iVar3 = 0;
    }
    uVar4 = (uint)local_1c & 0xff;
    Library::DKW::WGR::FUN_006b55f0
              ((undefined4 *)this_00->field_0194,0,local_8 + 0x37,0x7e - uVar4,
               (byte *)this_00->field_028A,0,iVar3,*(int *)(this_00->field_028A + 4) - uVar4,5,uVar4
              );
    pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02CA,1);
    DibPut((undefined4 *)this_00->field_0194,GVar14 + 5,0x5c,'\x06',pbVar5);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,GVar14 + 2,0x52,0xb2,10);
    pcVar7 = (char *)FUN_006b0140(0x2b2c,HINSTANCE_00807618);
    uVar4 = 0xffffffff;
    do {
      pcVar16 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar16 = pcVar7 + 1;
      cVar13 = *pcVar7;
      pcVar7 = pcVar16;
    } while (cVar13 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar16 + -uVar4;
    pcVar16 = &this_00->field_0x1e1;
    for (uVar12 = uVar4 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar16 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar16 = pcVar16 + 1;
    }
    for (puVar8 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e1,'\n');
        puVar8 != (uint *)0x0; puVar8 = Library::MSVCRT::FUN_0072e560(puVar8,'\n')) {
      *(undefined1 *)puVar8 = 0x20;
    }
cf_common_exit_00507034:
    ccFntTy::WrTxt(this_00->field_01B8,(uint *)&this_00->field_0x1e1,-2,-1,0,-1,-1);
    iVar3 = local_8 + 0x41;
    PaintDamageXY(this_00,this_00->field_0194,iVar3,0x5d,
                  CONCAT31((int3)((uint)extraout_ECX_01 >> 8),this_00->field_0C24),0x2714);
    PaintCostsXY(this_00,this_00->field_0194,iVar3,0x68,this_00->field_0C1C,this_00->field_0C20,4,2)
    ;
    break;
  case 0x50:
    DibPut((undefined4 *)this_00->field_0194,
           (((undefined4 *)this_00->field_0194)[1] - *(int *)(this_00->field_09F9 + 2)) / 2,0x36,
           '\x01',(byte *)this_00->field_09F9);
  }
switchD_00506878_caseD_3b:
  PaintIDSObj(this_00);
switchD_00506377_caseD_df:
  if (-1 < (int)this_00->field_015C) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,this_00->field_00A8);
  }
  g_currentExceptionFrame = local_64.previous;
  return;
}

