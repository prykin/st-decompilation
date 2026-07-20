
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintCtrlObjSI */

void __thiscall CPanelTy::PaintCtrlObjSI(CPanelTy *this)

{
  undefined1 *puVar1;
  char cVar2;
  code *pcVar3;
  CPanelTy *this_00;
  byte bVar4;
  int iVar5;
  Global_sub_00529500_param_1Enum uID;
  undefined3 extraout_var;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  UINT UVar9;
  char *pcVar10;
  uint *puVar11;
  ushort *puVar12;
  int iVar13;
  uint uVar14;
  ccFntTy *this_01;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  undefined4 uVar15;
  void *unaff_EDI;
  char *pcVar16;
  HINSTANCE pHVar17;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  InternalExceptionFrame local_64;
  int local_20;
  CPanelTy *local_1c;
  uint local_18;
  byte *local_14;
  Global_sub_00526BA0_param_1Enum *local_10;
  uint local_c;
  byte *local_8;
  
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_1c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_1c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar13 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x6f0,0,iVar5,
                                &DAT_007a4ccc,s_CPanelTy__PaintCtrlObjSI_007c28b4);
    if (iVar13 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x6f0);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  switch(local_1c->field_0BFA) {
  case 0:
  case 3:
    DibPut((undefined4 *)local_1c->field_0194,0,0x46,'\x01',(byte *)local_1c->field_09D9);
    DibPut((undefined4 *)this_00->field_0194,0,0,'\x06',(byte *)this_00->field_09FD);
    break;
  case 1:
    if (local_1c->field_0BFB == '\x02') {
      DibPut((undefined4 *)local_1c->field_0194,0,0,'\x06',(byte *)local_1c->field_0A05);
      DibPut((undefined4 *)this_00->field_0194,0,0x46,'\x01',(byte *)this_00->field_09E1);
      break;
    }
    DibPut((undefined4 *)local_1c->field_0194,0,0,'\x06',(byte *)local_1c->field_0A05);
    switch(this_00->field_0BF5) {
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5c:
    case 0x5d:
    case 0x61:
    case 99:
    case 100:
    case 0x6e:
    case 0x70:
    case 0x72:
    case 0x73:
      puVar12 = this_00->field_09E1;
      puVar18 = (undefined4 *)this_00->field_0194;
      break;
    case 0x5b:
      puVar12 = this_00->field_09E5;
      puVar18 = (undefined4 *)this_00->field_0194;
      break;
    case 0x5e:
    case 0x6d:
      puVar12 = this_00->field_09DD;
      puVar18 = (undefined4 *)this_00->field_0194;
      break;
    default:
      puVar12 = this_00->field_09D9;
      goto LAB_0050a4e4;
    case 0x62:
      puVar12 = this_00->field_09F5;
LAB_0050a4e4:
      puVar18 = (undefined4 *)this_00->field_0194;
      break;
    case 0x67:
    case 0x68:
      puVar12 = this_00->field_09ED;
      puVar18 = (undefined4 *)this_00->field_0194;
    }
    DibPut(puVar18,0,0x46,'\x01',(byte *)puVar12);
    break;
  case 4:
    DibPut((undefined4 *)local_1c->field_0194,0,0,'\x06',(byte *)local_1c->field_09FD);
    DibPut((undefined4 *)this_00->field_0194,0,0x46,'\x01',(byte *)this_00->field_09DD);
  }
  if (this_00->field_0BFA != '\x01') {
    if (this_00->field_0BFA == '\x04') {
      switch(this_00->field_0BF5) {
      case 0xdd:
      case 0xde:
      case 0xe0:
      case 0xfe:
        DibPut((undefined4 *)this_00->field_0194,0x2c,0x52,'\x01',(byte *)this_00->field_0A09);
        pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02D2,(uint)(byte)this_00->field_0C11);
        DibPut((undefined4 *)this_00->field_0194,0x2e,0x54,'\x01',pbVar7);
        pbVar7 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,(int)this_00->field_09DD,0,0x70,
                                             0x12,0x62,0xd,0);
        if (pbVar7 != (byte *)0x0) {
          if (this_00->field_0BF5 == 0xfe) {
            uID = thunk_FUN_00529480(this_00->field_0C11);
          }
          else {
            uID = thunk_FUN_005293f0(this_00->field_0BF5);
          }
          bVar4 = thunk_FUN_00529500(uID);
          uVar15 = CONCAT31(extraout_var,bVar4);
          iVar13 = -1;
          iVar5 = -1;
          puVar11 = (uint *)FUN_006b0140(uID,HINSTANCE_00807618);
          ccFntTy::WrStr(this_00->field_01B8,puVar11,iVar5,iVar13,uVar15);
          DibPut((undefined4 *)this_00->field_0194,0x70,0x58,'\x01',pbVar7);
          ccFntTy::EraseSufr(this_00->field_01B8);
        }
        pbVar7 = (byte *)ccFntTy::CreateSurf(this_00->field_01C4,(int)this_00->field_09DD,0,0x78,
                                             0x23,0x5a,0x14,0);
        if (pbVar7 != (byte *)0x0) {
          uVar15 = 0;
          wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c2744,*(undefined4 *)&this_00->field_0xc12);
          switch(this_00->field_0C11) {
          case 0:
            uVar15 = 4;
            break;
          case 1:
          case 3:
            uVar15 = 7;
            break;
          case 2:
            uVar15 = 6;
            break;
          case 4:
            uVar15 = 5;
          }
          ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,uVar15);
          DibPut((undefined4 *)this_00->field_0194,0x78,0x69,'\x01',pbVar7);
          ccFntTy::EraseSufr(this_00->field_01C4);
        }
        break;
      case 0xfd:
        bVar4 = this_00->field_0C11;
        if ((bVar4 != 0) && (bVar4 < 0x16)) {
          pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02CE,bVar4 - 1);
          DibPut((undefined4 *)this_00->field_0194,0x29,0x51,'\x01',pbVar7);
        }
        pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02CA,10);
        DibPut((undefined4 *)this_00->field_0194,0x27,0x4f,'\x06',pbVar7);
        pbVar7 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,(int)this_00->field_09DD,0,0x5d,0xb
                                             ,0x73,0x19,0);
        if (pbVar7 != (byte *)0x0) {
          iVar20 = -1;
          iVar19 = -1;
          uVar6 = 5;
          iVar13 = -1;
          iVar5 = -2;
          pHVar17 = HINSTANCE_00807618;
          UVar9 = thunk_FUN_00525290(CONCAT31((int3)((uint)pbVar7 >> 8),this_00->field_0C11));
          puVar11 = (uint *)FUN_006b0140(UVar9,pHVar17);
          ccFntTy::WrTxt(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar19,iVar20);
          DibPut((undefined4 *)this_00->field_0194,0x5d,0x51,'\x01',pbVar7);
          ccFntTy::EraseSufr(this_00->field_01B8);
        }
        pbVar7 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,(int)this_00->field_09DD,0,0x27,
                                             0x26,0x9f,0x1c,0);
        if (pbVar7 != (byte *)0x0) {
          ccFntTy::WrTxt(this_00->field_01B8,(uint *)this_00->field_0C16,-2,-1,3,-1,-1);
          DibPut((undefined4 *)this_00->field_0194,0x27,0x6c,'\x01',pbVar7);
          ccFntTy::EraseSufr(this_00->field_01B8);
        }
      }
    }
    goto switchD_0050a52e_caseD_df;
  }
  if (this_00->field_0BFB == '\x02') {
    if (*(int *)&this_00->field_0xc12 != 0) {
      DibPut((undefined4 *)this_00->field_0194,0x28,0x50,'\x01',(byte *)this_00->field_0A11);
      uVar6 = thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                                 this_00->field_0C1A);
      pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02C2,uVar6);
      DibPut((undefined4 *)this_00->field_0194,0x2a,0x52,'\x01',pbVar7);
      pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B2,1);
      DibPut((undefined4 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
      pbVar7 = (byte *)(((uint)(byte)this_00->field_0C24 * 0x21) / 100);
      local_14 = (byte *)0x0;
      if (pbVar7 != (byte *)0x0) {
        iVar5 = 0x35;
        local_14 = pbVar7;
        do {
          pbVar8 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
          DibPut((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
          iVar5 = iVar5 + 4;
          pbVar7 = pbVar7 + -1;
        } while (pbVar7 != (byte *)0x0);
      }
      if (local_14 < (byte *)0x21) {
        iVar5 = (int)local_14 * 4 + 0x35;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
          DibPut((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x5c,0x6c,0x7a,0xb);
      pHVar17 = HINSTANCE_00807618;
      UVar9 = thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                                 this_00->field_0C1A,0);
      pcVar10 = (char *)FUN_006b0140(UVar9,pHVar17);
      uVar6 = 0xffffffff;
      do {
        pcVar16 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar16 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar16;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6;
      pcVar10 = pcVar16 + -uVar6;
      pcVar16 = &this_00->field_0x1e1;
      for (uVar14 = uVar6 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar16 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar16 = pcVar16 + 1;
      }
      for (puVar11 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e1,'\n');
          puVar11 != (uint *)0x0; puVar11 = Library::MSVCRT::FUN_0072e560(puVar11,'\n')) {
        *(undefined1 *)puVar11 = 0x20;
      }
LAB_0050af64:
      ccFntTy::WrTxt(this_00->field_01B8,(uint *)&this_00->field_0x1e1,-2,-1,5,-1,-1);
      PaintCostsXYSI(this_00,this_00->field_0194,this_00->field_0C1C,this_00->field_0C20,7,4);
    }
    goto switchD_0050a9c9_caseD_5f;
  }
  iVar5 = this_00->field_0BF5;
  switch(iVar5) {
  case 0x53:
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b);
    switch(this_00->field_0C3C) {
    case 0:
      UVar9 = 0x36bb;
      goto cf_common_exit_0050B38B;
    case 1:
      DibPut((undefined4 *)this_00->field_0194,0x27,0x51,'\x01',(byte *)this_00->field_0A0D);
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x15,0x6c,0xc3,0xb);
      iVar20 = -1;
      iVar19 = -1;
      uVar6 = 5;
      iVar13 = -1;
      iVar5 = -2;
      puVar11 = (uint *)FUN_006b0140(0x36bd,HINSTANCE_00807618);
      ccFntTy::WrTxt(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar19,iVar20);
      PaintDamageXY(this_00,this_00->field_0194,0x5c,0x50,
                    CONCAT31((int3)((uint)extraout_EDX >> 8),this_00->field_0xc3d),0x2714);
      pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B2,1);
      DibPut((undefined4 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
      pbVar7 = (byte *)((uint)(*(int *)&this_00->field_0xc3d * 0x21) / 100);
      local_8 = (byte *)0x0;
      if (pbVar7 != (byte *)0x0) {
        iVar5 = 0x35;
        local_8 = pbVar7;
        do {
          pbVar8 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
          DibPut((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
          iVar5 = iVar5 + 4;
          pbVar7 = pbVar7 + -1;
        } while (pbVar7 != (byte *)0x0);
      }
      if (local_8 < (byte *)0x21) {
        iVar5 = (int)local_8 * 4 + 0x35;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
          DibPut((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      break;
    case 2:
      iVar20 = -1;
      iVar19 = -1;
      uVar6 = 5;
      iVar13 = -1;
      iVar5 = -2;
      puVar11 = (uint *)FUN_006b0140(0x36bc,HINSTANCE_00807618);
      ccFntTy::WrTxt(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar19,iVar20);
      puVar11 = (uint *)&this_00->field_0x1e1;
      wsprintfA((LPSTR)puVar11,&DAT_007c1ae4,*(undefined4 *)&this_00->field_0xc3d);
      ccFntTy::SetSurf(this_00->field_01BC,this_00->field_0194,0,0x28,0x79,0x9b,0xf);
      this_01 = this_00->field_01BC;
      uVar15 = 1;
      goto cf_common_exit_0050BD93;
    case 3:
      UVar9 = 0x36be;
cf_common_exit_0050B38B:
      iVar20 = -1;
      iVar19 = -1;
      uVar6 = 5;
      iVar13 = -1;
      iVar5 = -2;
      puVar11 = (uint *)FUN_006b0140(UVar9,HINSTANCE_00807618);
      ccFntTy::WrTxt(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar19,iVar20);
      break;
    case 4:
      if (this_00->field_0C31 != '\0') {
        PaintNameResSI(this_00);
        PaintPerResSI(this_00);
      }
    }
    break;
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
    if (this_00->field_0C31 == '\0') {
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b);
      if (this_00->field_0C2F == 0) goto LAB_0050b386;
      uVar15 = FUN_006b0140(0x273c,HINSTANCE_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__d__s_007c2864,(uint)(ushort)this_00->field_0C2F,uVar15);
      ccFntTy::WrTxt(this_00->field_01B8,&DAT_0080f33a,-2,-1,5,-1,-1);
    }
    else {
      PaintNameResSI(this_00);
      PaintPerResSI(this_00);
    }
    break;
  case 0x5b:
    PaintArsenal(this_00);
    break;
  case 0x5c:
  case 0x6e:
    if (*(int *)&this_00->field_0xc12 != 0) {
      DibPut((undefined4 *)this_00->field_0194,0x28,0x50,'\x01',(byte *)this_00->field_0A11);
      uVar6 = thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                                 this_00->field_0C1A);
      pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02BA,uVar6);
      DibPut((undefined4 *)this_00->field_0194,0x2a,0x52,'\x01',pbVar7);
      pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B2,1);
      DibPut((undefined4 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
      pbVar7 = (byte *)(((uint)(byte)this_00->field_0C24 * 0x21) / 100);
      local_14 = (byte *)0x0;
      if (pbVar7 != (byte *)0x0) {
        iVar5 = 0x35;
        local_14 = pbVar7;
        do {
          pbVar8 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
          DibPut((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
          iVar5 = iVar5 + 4;
          pbVar7 = pbVar7 + -1;
        } while (pbVar7 != (byte *)0x0);
      }
      if (local_14 < (byte *)0x21) {
        iVar5 = (int)local_14 * 4 + 0x35;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
          DibPut((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x5c,0x6c,0x7a,0xb);
      pHVar17 = HINSTANCE_00807618;
      UVar9 = thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                                 this_00->field_0C1A,0);
      pcVar10 = (char *)FUN_006b0140(UVar9,pHVar17);
      uVar6 = 0xffffffff;
      do {
        pcVar16 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar16 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar16;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6;
      pcVar10 = pcVar16 + -uVar6;
      pcVar16 = &this_00->field_0x1e1;
      for (uVar14 = uVar6 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar16 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar16 = pcVar16 + 1;
      }
      for (puVar11 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e1,'\n');
          puVar11 != (uint *)0x0; puVar11 = Library::MSVCRT::FUN_0072e560(puVar11,'\n')) {
        *(undefined1 *)puVar11 = 0x20;
      }
      goto LAB_0050af64;
    }
    if (iVar5 == 0x5c) {
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b);
      goto LAB_0050b386;
    }
    if (iVar5 == 0x6e) {
      wsprintfA(&this_00->field_0x1e1,&DAT_007c1890,(uint)(ushort)this_00->field_0C2F);
      ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0x1c,0x58,0xb7,0xf);
      ccFntTy::WrStr(this_00->field_01C4,(uint *)&this_00->field_0x1e1,-1,-1,5);
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x16,0x69,0xc3,0xe);
      UVar9 = 0x273b;
      goto cf_common_exit_0050B38B;
    }
    break;
  case 0x5d:
    PaintBioSonar(this_00);
    break;
  case 0x5e:
    DibPut((undefined4 *)this_00->field_0194,0x2c,0x52,'\x01',(byte *)this_00->field_0A09);
    pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02D2,0);
    DibPut((undefined4 *)this_00->field_0194,0x2e,0x54,'\x01',pbVar7);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x73,0x50,0x5f,0xb);
    iVar20 = -1;
    iVar19 = -1;
    uVar6 = 2;
    iVar13 = -1;
    iVar5 = -2;
    puVar11 = (uint *)FUN_006b0140(0x271d,HINSTANCE_00807618);
    ccFntTy::WrTxt(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar19,iVar20);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x73,0x5d,0x5f,0x17);
    iVar20 = -1;
    iVar19 = -1;
    uVar6 = 5;
    iVar13 = -1;
    iVar5 = -2;
    puVar11 = (uint *)FUN_006b0140(0x2721,HINSTANCE_00807618);
    ccFntTy::WrTxt(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar19,iVar20);
    puVar11 = (uint *)&this_00->field_0x1e1;
    wsprintfA((LPSTR)puVar11,&DAT_007c28fc,(uint)(ushort)this_00->field_0C34);
    ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0x91,0x73,0x26,0xf);
    uVar15 = 4;
    this_01 = this_00->field_01C4;
    goto cf_common_exit_0050BD93;
  case 0x61:
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x25,0x50,0xa5,0xc);
    uVar15 = 5;
    iVar13 = -1;
    iVar5 = -1;
    puVar11 = (uint *)FUN_006b0140(0x2738,HINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01B8,puVar11,iVar5,iVar13,uVar15);
    pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B2,1);
    DibPut((undefined4 *)this_00->field_0194,0x33,0x5b,'\x01',pbVar7);
    pbVar7 = (byte *)(((uint)(byte)this_00->field_0C2A * 0x21) / 100);
    pbVar8 = (byte *)0x0;
    if (pbVar7 != (byte *)0x0) {
      iVar5 = 0x35;
      local_14 = pbVar7;
      do {
        pbVar8 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
        DibPut((undefined4 *)this_00->field_0194,iVar5,0x5d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
        local_14 = local_14 + -1;
        pbVar8 = pbVar7;
      } while (local_14 != (byte *)0x0);
    }
    if (pbVar8 < (byte *)0x21) {
      iVar5 = (int)pbVar8 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
        DibPut((undefined4 *)this_00->field_0194,iVar5,0x5d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    wsprintfA(&this_00->field_0x1e1,&DAT_007c28e0,(uint)(byte)this_00->field_0C2A);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x15,0x68,0xc3,0xc);
    ccFntTy::WrStr(this_00->field_01B8,(uint *)&this_00->field_0x1e1,-1,-1,5);
    pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B2,1);
    DibPut((undefined4 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
    pbVar7 = (byte *)(uint)(byte)this_00->field_0C29;
    local_8 = (byte *)0x0;
    if (pbVar7 != (byte *)0x0) {
      iVar5 = 0x35;
      local_8 = pbVar7;
      do {
        pbVar8 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
        DibPut((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
        pbVar7 = pbVar7 + -1;
      } while (pbVar7 != (byte *)0x0);
    }
    if (local_8 < (byte *)0x21) {
      iVar5 = (int)local_8 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
        DibPut((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    break;
  case 0x62:
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x15,0x66,0x66,0xb);
    uVar15 = 5;
    iVar13 = -1;
    iVar5 = -1;
    puVar11 = (uint *)FUN_006b0140(0x2725,HINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01B8,puVar11,iVar5,iVar13,uVar15);
    puVar1 = &this_00->field_0x1e1;
    wsprintfA(puVar1,&DAT_007c1890,*(undefined4 *)&this_00->field_0xc12);
    ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0x7f,0x66,0x24,0xb);
    ccFntTy::WrStr(this_00->field_01C4,(uint *)puVar1,-1,-1,5);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x8e,0x4f,0x17,0xb);
    uVar15 = 5;
    iVar13 = -1;
    iVar5 = -1;
    puVar11 = (uint *)FUN_006b0140(0x2740,HINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01B8,puVar11,iVar5,iVar13,uVar15);
    wsprintfA(puVar1,&DAT_007c1890,this_00->field_0C16);
    ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0xa5,0x4f,0x24,0xb);
    ccFntTy::WrStr(this_00->field_01C4,(uint *)puVar1,-1,-1,4);
    pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B2,1);
    DibPut((undefined4 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
    uVar6 = this_00->field_0C16;
    if (uVar6 < *(uint *)&this_00->field_0xc12) {
      pbVar7 = (byte *)0x21;
    }
    else if (uVar6 == 0) {
      pbVar7 = (byte *)0x0;
    }
    else {
      pbVar7 = (byte *)((*(uint *)&this_00->field_0xc12 * 0x21) / uVar6);
    }
    pbVar8 = (byte *)0x0;
    if (pbVar7 != (byte *)0x0) {
      iVar5 = 0x35;
      local_8 = pbVar7;
      do {
        pbVar8 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
        DibPut((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
        pbVar7 = pbVar7 + -1;
        pbVar8 = local_8;
      } while (pbVar7 != (byte *)0x0);
    }
    if (pbVar8 < (byte *)0x21) {
      iVar5 = (int)pbVar8 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
        DibPut((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    break;
  case 99:
    if (*(int *)&this_00->field_0xc12 == 0) {
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b);
LAB_0050b386:
      UVar9 = 0x2713;
      goto cf_common_exit_0050B38B;
    }
    DibPut((undefined4 *)this_00->field_0194,0x28,0x50,'\x01',(byte *)this_00->field_0A11);
    uVar6 = thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                               this_00->field_0C1A);
    pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02BA,uVar6);
    DibPut((undefined4 *)this_00->field_0194,0x2a,0x52,'\x01',pbVar7);
    pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B2,1);
    DibPut((undefined4 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
    pbVar7 = (byte *)(((uint)(byte)this_00->field_0C24 * 0x21) / 100);
    local_14 = (byte *)0x0;
    if (pbVar7 != (byte *)0x0) {
      iVar5 = 0x35;
      local_14 = pbVar7;
      do {
        pbVar8 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
        DibPut((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
        pbVar7 = pbVar7 + -1;
      } while (pbVar7 != (byte *)0x0);
    }
    if (local_14 < (byte *)0x21) {
      iVar5 = (int)local_14 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
        DibPut((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x5c,0x69,0x7a,0xb);
    pHVar17 = HINSTANCE_00807618;
    UVar9 = thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                               this_00->field_0C1A,0);
    pcVar10 = (char *)FUN_006b0140(UVar9,pHVar17);
    uVar6 = 0xffffffff;
    do {
      pcVar16 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar16 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar16;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar16 + -uVar6;
    pcVar16 = &this_00->field_0x1e1;
    for (uVar14 = uVar6 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar16 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar16 = pcVar16 + 1;
    }
    for (puVar11 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e1,'\n');
        puVar11 != (uint *)0x0; puVar11 = Library::MSVCRT::FUN_0072e560(puVar11,'\n')) {
      *(undefined1 *)puVar11 = 0x20;
    }
    ccFntTy::WrTxt(this_00->field_01B8,(uint *)&this_00->field_0x1e1,-2,-1,5,-1,-1);
    pbVar7 = (byte *)ccFntTy::CreateSurf(this_00->field_01C4,(int)this_00->field_09DD,0,100,0x13,
                                         0x18,0xc,0);
    if (pbVar7 != (byte *)0x0) {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,(uint)(ushort)this_00->field_0C1C);
      ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,7);
      DibPut((undefined4 *)this_00->field_0194,100,0x59,'\x01',pbVar7);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,(uint)(ushort)this_00->field_0C20);
      ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,5);
      DibPut((undefined4 *)this_00->field_0194,0xaf,0x59,'\x01',pbVar7);
      ccFntTy::EraseSufr(this_00->field_01C4);
    }
    puVar12 = Library::Ourlib::MFRLOAD::mfRLoad
                        (DAT_00806794,CASE_1,s_BUT_RCTTYPESI04_007c28e8,0xffffffff,0,1,0,
                         (undefined4 *)0x0);
    DibPut((undefined4 *)this_00->field_0194,0x82,0x56,'\x01',(byte *)puVar12);
    pbVar7 = (byte *)FUN_0070b3a0(this_00->field_0B1B,0);
    DibPut((undefined4 *)this_00->field_0194,0xa1,0x56,'\x01',pbVar7);
    break;
  case 100:
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x19,0x59,0xbb,0xb);
    uVar15 = 5;
    iVar13 = -1;
    iVar5 = -1;
    puVar11 = (uint *)FUN_006b0140(0x272d,HINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01B8,puVar11,iVar5,iVar13,uVar15);
    wsprintfA(&this_00->field_0x1e1,&DAT_007c1ae4,*(undefined4 *)&this_00->field_0xc12);
    ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0x66,0x65,0x24,0xb);
    ccFntTy::WrStr(this_00->field_01C4,(uint *)&this_00->field_0x1e1,-1,-1,7);
    pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B2,1);
    DibPut((undefined4 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
    if (this_00->field_0C16 == 0) {
      pbVar7 = (byte *)0x0;
    }
    else {
      pbVar7 = (byte *)((uint)(*(int *)&this_00->field_0xc12 * 0x21) / (uint)this_00->field_0C16);
    }
    local_8 = (byte *)0x0;
    if (pbVar7 != (byte *)0x0) {
      iVar5 = 0x35;
      local_8 = pbVar7;
      do {
        pbVar8 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
        DibPut((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
        pbVar7 = pbVar7 + -1;
      } while (pbVar7 != (byte *)0x0);
    }
    if (local_8 < (byte *)0x21) {
      iVar5 = (int)local_8 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
        DibPut((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    break;
  case 0x67:
  case 0x68:
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x34,0x5d,0x85,0xb);
    uVar15 = 5;
    iVar13 = -1;
    iVar5 = -1;
    puVar11 = (uint *)FUN_006b0140(0x272b,HINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01B8,puVar11,iVar5,iVar13,uVar15);
    pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B2,1);
    DibPut((undefined4 *)this_00->field_0194,0x33,0x50,'\x01',pbVar7);
    uVar6 = 0;
    if (this_00->field_0C11 != '\0') {
      iVar5 = 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
        DibPut((undefined4 *)this_00->field_0194,iVar5,0x52,'\x01',pbVar7);
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar6 < (byte)this_00->field_0C11);
    }
    if (uVar6 < 0x21) {
      iVar5 = uVar6 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
        DibPut((undefined4 *)this_00->field_0194,iVar5,0x52,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x34,0x7d,0x85,0xb);
    uVar15 = 5;
    iVar13 = -1;
    iVar5 = -1;
    puVar11 = (uint *)FUN_006b0140(0x272c,HINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01B8,puVar11,iVar5,iVar13,uVar15);
    pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B2,1);
    DibPut((undefined4 *)this_00->field_0194,0x33,0x71,'\x01',pbVar7);
    uVar6 = 0;
    if (*(int *)&this_00->field_0xc12 != 0) {
      iVar5 = 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
        DibPut((undefined4 *)this_00->field_0194,iVar5,0x73,'\x01',pbVar7);
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar6 < *(uint *)&this_00->field_0xc12);
    }
    if (uVar6 < 0x21) {
      iVar5 = uVar6 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
        DibPut((undefined4 *)this_00->field_0194,iVar5,0x73,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    break;
  case 0x6d:
    local_8 = &this_00->field_0C24;
    local_10 = (Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12;
    local_20 = -0xc24 - (int)this_00;
    iVar5 = 99;
    local_14 = (byte *)0x2c;
    do {
      pbVar7 = local_14;
      DibPut((undefined4 *)this_00->field_0194,(int)(local_14 + -2),0x55,'\x01',
             (byte *)this_00->field_0A11);
      uVar6 = thunk_FUN_00526ba0(*local_10,local_8[-10]);
      pbVar8 = (byte *)FUN_0070b3a0(this_00->field_02C2,uVar6);
      DibPut((undefined4 *)this_00->field_0194,(int)pbVar7,0x57,'\x01',pbVar8);
      pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B2,4);
      DibPut((undefined4 *)this_00->field_0194,iVar5 + -2,0x58,'\x01',pbVar7);
      local_c = 0;
      uVar6 = *local_8 / 10;
      if (uVar6 != 0) {
        iVar13 = 0x7e;
        local_18 = uVar6;
        local_c = uVar6;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B6,7);
          DibPut((undefined4 *)this_00->field_0194,iVar5,iVar13,'\x01',pbVar7);
          iVar13 = iVar13 + -4;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
      if (local_c < 10) {
        iVar13 = local_c * -4 + 0x7e;
        local_18 = 10 - local_c;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B6,8);
          DibPut((undefined4 *)this_00->field_0194,iVar5,iVar13,'\x01',pbVar7);
          iVar13 = iVar13 + -4;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + 0x65;
      local_8 = local_8 + 1;
      iVar5 = iVar5 + 0x1a;
    } while (local_8 + local_20 < (byte *)0x2);
    wsprintfA((LPSTR)&DAT_0080f33a,s__d_____d_007c28d4,(uint)(byte)this_00->field_0C24,
              (uint)(byte)this_00->field_0C25);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x5f,0x4d,0x2f,0xb);
    this_01 = this_00->field_01B8;
    uVar15 = 5;
    puVar11 = &DAT_0080f33a;
cf_common_exit_0050BD93:
    ccFntTy::WrStr(this_01,puVar11,-1,-1,uVar15);
    break;
  case 0x70:
  case 0x72:
  case 0x73:
    pbVar7 = (byte *)FUN_0070b3a0(this_00->field_02B2,1);
    DibPut((undefined4 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
    pbVar7 = (byte *)(uint)(byte)this_00->field_0C29;
    local_8 = (byte *)0x0;
    local_14 = pbVar7;
    if (pbVar7 != (byte *)0x0) {
      iVar5 = 0x35;
      local_8 = pbVar7;
      do {
        pbVar8 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
        DibPut((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
        pbVar7 = pbVar7 + -1;
      } while (pbVar7 != (byte *)0x0);
    }
    pbVar7 = local_14;
    if (local_8 < (byte *)0x21) {
      iVar5 = (int)local_8 * 4 + 0x35;
      do {
        pbVar8 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
        DibPut((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    pbVar8 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,(int)this_00->field_09E1,0,0x24,6,0xa4,
                                         0x2b,0);
    if (pbVar8 != (byte *)0x0) {
      iVar20 = -1;
      iVar19 = -1;
      uVar6 = 5;
      iVar13 = -1;
      iVar5 = -1;
      puVar11 = (uint *)FUN_006b0140(0x36c4 - (pbVar7 < (byte *)0x21),HINSTANCE_00807618);
      ccFntTy::WrTxt(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar19,iVar20);
      DibPut((undefined4 *)this_00->field_0194,0x24,0x4c,'\x01',pbVar8);
      ccFntTy::EraseSufr(this_00->field_01B8);
    }
  }
switchD_0050a9c9_caseD_5f:
  PaintIDSObj(this_00);
switchD_0050a52e_caseD_df:
  if (-1 < (int)this_00->field_015C) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,this_00->field_00A8);
  }
  g_currentExceptionFrame = local_64.previous;
  return;
}

