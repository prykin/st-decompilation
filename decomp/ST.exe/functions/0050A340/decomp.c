
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
  Global_sub_00529500_param_1Enum GVar6;
  undefined3 extraout_var;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  UINT UVar10;
  char *pcVar11;
  uint *puVar12;
  ushort *puVar13;
  int iVar14;
  uint uVar15;
  ccFntTy *this_01;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  undefined4 uVar16;
  void *unaff_EDI;
  char *pcVar17;
  HINSTANCE pHVar18;
  undefined4 *puVar19;
  int iVar20;
  int iVar21;
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
    iVar14 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x6f0,0,iVar5,
                                &DAT_007a4ccc,s_CPanelTy__PaintCtrlObjSI_007c28b4);
    if (iVar14 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x6f0);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  switch(local_1c->field_0xbfa) {
  case 0:
  case 3:
    thunk_FUN_00540760((undefined4 *)local_1c->field_0194,0,0x46,'\x01',
                       *(byte **)&local_1c->field_0x9d9);
    thunk_FUN_00540760((undefined4 *)this_00->field_0194,0,0,'\x06',*(byte **)&this_00->field_0x9fd)
    ;
    break;
  case 1:
    if (local_1c->field_0xbfb == '\x02') {
      thunk_FUN_00540760((undefined4 *)local_1c->field_0194,0,0,'\x06',
                         *(byte **)&local_1c->field_0xa05);
      thunk_FUN_00540760((undefined4 *)this_00->field_0194,0,0x46,'\x01',
                         *(byte **)&this_00->field_0x9e1);
      break;
    }
    thunk_FUN_00540760((undefined4 *)local_1c->field_0194,0,0,'\x06',
                       *(byte **)&local_1c->field_0xa05);
    switch(*(undefined4 *)&this_00->field_0xbf5) {
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
      pbVar8 = *(byte **)&this_00->field_0x9e1;
      puVar19 = (undefined4 *)this_00->field_0194;
      break;
    case 0x5b:
      pbVar8 = *(byte **)&this_00->field_0x9e5;
      puVar19 = (undefined4 *)this_00->field_0194;
      break;
    case 0x5e:
    case 0x6d:
      pbVar8 = *(byte **)&this_00->field_0x9dd;
      puVar19 = (undefined4 *)this_00->field_0194;
      break;
    default:
      pbVar8 = *(byte **)&this_00->field_0x9d9;
      goto LAB_0050a4e4;
    case 0x62:
      pbVar8 = *(byte **)&this_00->field_0x9f5;
LAB_0050a4e4:
      puVar19 = (undefined4 *)this_00->field_0194;
      break;
    case 0x67:
    case 0x68:
      pbVar8 = *(byte **)&this_00->field_0x9ed;
      puVar19 = (undefined4 *)this_00->field_0194;
    }
    thunk_FUN_00540760(puVar19,0,0x46,'\x01',pbVar8);
    break;
  case 4:
    thunk_FUN_00540760((undefined4 *)local_1c->field_0194,0,0,'\x06',
                       *(byte **)&local_1c->field_0x9fd);
    thunk_FUN_00540760((undefined4 *)this_00->field_0194,0,0x46,'\x01',
                       *(byte **)&this_00->field_0x9dd);
  }
  if (this_00->field_0xbfa != '\x01') {
    if (this_00->field_0xbfa == '\x04') {
      switch(*(undefined4 *)&this_00->field_0xbf5) {
      case 0xdd:
      case 0xde:
      case 0xe0:
      case 0xfe:
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x2c,0x52,'\x01',
                           *(byte **)&this_00->field_0xa09);
        pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2d2,(uint)(byte)this_00->field_0xc11
                                     );
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x2e,0x54,'\x01',pbVar8);
        pbVar8 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)&this_00->field_0x1b8,
                                             *(int *)&this_00->field_0x9dd,0,0x70,0x12,0x62,0xd,0);
        if (pbVar8 != (byte *)0x0) {
          if (*(Global_sub_005293F0_param_1Enum *)&this_00->field_0xbf5 == 0xfe) {
            GVar6 = thunk_FUN_00529480(this_00->field_0xc11);
          }
          else {
            GVar6 = thunk_FUN_005293f0(*(Global_sub_005293F0_param_1Enum *)&this_00->field_0xbf5);
          }
          bVar4 = thunk_FUN_00529500(GVar6);
          uVar16 = CONCAT31(extraout_var,bVar4);
          iVar14 = -1;
          iVar5 = -1;
          puVar12 = (uint *)FUN_006b0140(GVar6,DAT_00807618);
          ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1b8,puVar12,iVar5,iVar14,uVar16);
          thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x70,0x58,'\x01',pbVar8);
          ccFntTy::EraseSufr(*(ccFntTy **)&this_00->field_0x1b8);
        }
        pbVar8 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)&this_00->field_0x1c4,
                                             *(int *)&this_00->field_0x9dd,0,0x78,0x23,0x5a,0x14,0);
        if (pbVar8 != (byte *)0x0) {
          uVar16 = 0;
          wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c2744,*(undefined4 *)&this_00->field_0xc12);
          switch(this_00->field_0xc11) {
          case 0:
            uVar16 = 4;
            break;
          case 1:
          case 3:
            uVar16 = 7;
            break;
          case 2:
            uVar16 = 6;
            break;
          case 4:
            uVar16 = 5;
          }
          ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1c4,&DAT_0080f33a,-1,-1,uVar16);
          thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x78,0x69,'\x01',pbVar8);
          ccFntTy::EraseSufr(*(ccFntTy **)&this_00->field_0x1c4);
        }
        break;
      case 0xfd:
        bVar4 = this_00->field_0xc11;
        if ((bVar4 != 0) && (bVar4 < 0x16)) {
          pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2ce,bVar4 - 1);
          thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x29,0x51,'\x01',pbVar8);
        }
        pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2ca,10);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x27,0x4f,'\x06',pbVar8);
        pbVar8 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)&this_00->field_0x1b8,
                                             *(int *)&this_00->field_0x9dd,0,0x5d,0xb,0x73,0x19,0);
        if (pbVar8 != (byte *)0x0) {
          iVar21 = -1;
          iVar20 = -1;
          uVar16 = 5;
          iVar14 = -1;
          iVar5 = -2;
          pHVar18 = DAT_00807618;
          UVar10 = thunk_FUN_00525290(CONCAT31((int3)((uint)pbVar8 >> 8),this_00->field_0xc11));
          puVar12 = (uint *)FUN_006b0140(UVar10,pHVar18);
          ccFntTy::WrTxt(*(ccFntTy **)&this_00->field_0x1b8,puVar12,iVar5,iVar14,uVar16,iVar20,
                         iVar21);
          thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x5d,0x51,'\x01',pbVar8);
          ccFntTy::EraseSufr(*(ccFntTy **)&this_00->field_0x1b8);
        }
        pbVar8 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)&this_00->field_0x1b8,
                                             *(int *)&this_00->field_0x9dd,0,0x27,0x26,0x9f,0x1c,0);
        if (pbVar8 != (byte *)0x0) {
          ccFntTy::WrTxt(*(ccFntTy **)&this_00->field_0x1b8,*(uint **)&this_00->field_0xc16,-2,-1,3,
                         -1,-1);
          thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x27,0x6c,'\x01',pbVar8);
          ccFntTy::EraseSufr(*(ccFntTy **)&this_00->field_0x1b8);
        }
      }
    }
    goto switchD_0050a52e_caseD_df;
  }
  if (this_00->field_0xbfb == '\x02') {
    if (*(int *)&this_00->field_0xc12 != 0) {
      thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x28,0x50,'\x01',
                         *(byte **)&this_00->field_0xa11);
      uVar7 = thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                                 this_00->field_0xc1a);
      pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2c2,uVar7);
      thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x2a,0x52,'\x01',pbVar8);
      pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b2,1);
      thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar8);
      pbVar8 = (byte *)(((uint)(byte)this_00->field_0xc24 * 0x21) / 100);
      local_14 = (byte *)0x0;
      if (pbVar8 != (byte *)0x0) {
        iVar5 = 0x35;
        local_14 = pbVar8;
        do {
          pbVar9 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,1);
          thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar9);
          iVar5 = iVar5 + 4;
          pbVar8 = pbVar8 + -1;
        } while (pbVar8 != (byte *)0x0);
      }
      if (local_14 < (byte *)0x21) {
        iVar5 = (int)local_14 * 4 + 0x35;
        do {
          pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,0);
          thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0194,0,0x5c,0x6c,0x7a,0xb);
      pHVar18 = DAT_00807618;
      UVar10 = thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                                  this_00->field_0xc1a,0);
      pcVar11 = (char *)FUN_006b0140(UVar10,pHVar18);
      uVar7 = 0xffffffff;
      do {
        pcVar17 = pcVar11;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar17 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar17;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      pcVar11 = pcVar17 + -uVar7;
      pcVar17 = &this_00->field_0x1e1;
      for (uVar15 = uVar7 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar17 = pcVar17 + 1;
      }
      for (puVar12 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e1,'\n');
          puVar12 != (uint *)0x0; puVar12 = Library::MSVCRT::FUN_0072e560(puVar12,'\n')) {
        *(undefined1 *)puVar12 = 0x20;
      }
LAB_0050af64:
      ccFntTy::WrTxt(*(ccFntTy **)&this_00->field_0x1b8,(uint *)&this_00->field_0x1e1,-2,-1,5,-1,-1)
      ;
      PaintCostsXYSI(this_00,this_00->field_0194,*(ushort *)&this_00->field_0xc1c,
                     *(ushort *)&this_00->field_0xc20,7,4);
    }
    goto switchD_0050a9c9_caseD_5f;
  }
  iVar5 = *(int *)&this_00->field_0xbf5;
  switch(iVar5) {
  case 0x53:
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b);
    switch(this_00->field_0xc3c) {
    case 0:
      UVar10 = 0x36bb;
      goto cf_common_exit_0050B38B;
    case 1:
      thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x27,0x51,'\x01',
                         *(byte **)&this_00->field_0xa0d);
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0194,0,0x15,0x6c,0xc3,0xb);
      iVar21 = -1;
      iVar20 = -1;
      uVar16 = 5;
      iVar14 = -1;
      iVar5 = -2;
      puVar12 = (uint *)FUN_006b0140(0x36bd,DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)&this_00->field_0x1b8,puVar12,iVar5,iVar14,uVar16,iVar20,iVar21);
      PaintDamageXY(this_00,this_00->field_0194,0x5c,0x50,
                    CONCAT31((int3)((uint)extraout_EDX >> 8),this_00->field_0xc3d),0x2714);
      pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b2,1);
      thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar8);
      pbVar8 = (byte *)((uint)(*(int *)&this_00->field_0xc3d * 0x21) / 100);
      local_8 = (byte *)0x0;
      if (pbVar8 != (byte *)0x0) {
        iVar5 = 0x35;
        local_8 = pbVar8;
        do {
          pbVar9 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,1);
          thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar9);
          iVar5 = iVar5 + 4;
          pbVar8 = pbVar8 + -1;
        } while (pbVar8 != (byte *)0x0);
      }
      if (local_8 < (byte *)0x21) {
        iVar5 = (int)local_8 * 4 + 0x35;
        do {
          pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,0);
          thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      break;
    case 2:
      iVar21 = -1;
      iVar20 = -1;
      uVar16 = 5;
      iVar14 = -1;
      iVar5 = -2;
      puVar12 = (uint *)FUN_006b0140(0x36bc,DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)&this_00->field_0x1b8,puVar12,iVar5,iVar14,uVar16,iVar20,iVar21);
      puVar12 = (uint *)&this_00->field_0x1e1;
      wsprintfA((LPSTR)puVar12,&DAT_007c1ae4,*(undefined4 *)&this_00->field_0xc3d);
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1bc,this_00->field_0194,0,0x28,0x79,0x9b,0xf);
      this_01 = *(ccFntTy **)&this_00->field_0x1bc;
      uVar16 = 1;
      goto cf_common_exit_0050BD93;
    case 3:
      UVar10 = 0x36be;
cf_common_exit_0050B38B:
      iVar21 = -1;
      iVar20 = -1;
      uVar16 = 5;
      iVar14 = -1;
      iVar5 = -2;
      puVar12 = (uint *)FUN_006b0140(UVar10,DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)&this_00->field_0x1b8,puVar12,iVar5,iVar14,uVar16,iVar20,iVar21);
      break;
    case 4:
      if (this_00->field_0xc31 != '\0') {
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
    if (this_00->field_0xc31 == '\0') {
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b)
      ;
      if (*(short *)&this_00->field_0xc2f == 0) goto LAB_0050b386;
      uVar16 = FUN_006b0140(0x273c,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__d__s_007c2864,(uint)*(ushort *)&this_00->field_0xc2f,uVar16)
      ;
      ccFntTy::WrTxt(*(ccFntTy **)&this_00->field_0x1b8,&DAT_0080f33a,-2,-1,5,-1,-1);
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
      thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x28,0x50,'\x01',
                         *(byte **)&this_00->field_0xa11);
      uVar7 = thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                                 this_00->field_0xc1a);
      pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2ba,uVar7);
      thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x2a,0x52,'\x01',pbVar8);
      pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b2,1);
      thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar8);
      pbVar8 = (byte *)(((uint)(byte)this_00->field_0xc24 * 0x21) / 100);
      local_14 = (byte *)0x0;
      if (pbVar8 != (byte *)0x0) {
        iVar5 = 0x35;
        local_14 = pbVar8;
        do {
          pbVar9 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,1);
          thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar9);
          iVar5 = iVar5 + 4;
          pbVar8 = pbVar8 + -1;
        } while (pbVar8 != (byte *)0x0);
      }
      if (local_14 < (byte *)0x21) {
        iVar5 = (int)local_14 * 4 + 0x35;
        do {
          pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,0);
          thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0194,0,0x5c,0x6c,0x7a,0xb);
      pHVar18 = DAT_00807618;
      UVar10 = thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                                  this_00->field_0xc1a,0);
      pcVar11 = (char *)FUN_006b0140(UVar10,pHVar18);
      uVar7 = 0xffffffff;
      do {
        pcVar17 = pcVar11;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar17 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar17;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      pcVar11 = pcVar17 + -uVar7;
      pcVar17 = &this_00->field_0x1e1;
      for (uVar15 = uVar7 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar17 = pcVar17 + 1;
      }
      for (puVar12 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e1,'\n');
          puVar12 != (uint *)0x0; puVar12 = Library::MSVCRT::FUN_0072e560(puVar12,'\n')) {
        *(undefined1 *)puVar12 = 0x20;
      }
      goto LAB_0050af64;
    }
    if (iVar5 == 0x5c) {
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b)
      ;
      goto LAB_0050b386;
    }
    if (iVar5 == 0x6e) {
      wsprintfA(&this_00->field_0x1e1,&DAT_007c1890,(uint)*(ushort *)&this_00->field_0xc2f);
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1c4,this_00->field_0194,0,0x1c,0x58,0xb7,0xf);
      ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1c4,(uint *)&this_00->field_0x1e1,-1,-1,5);
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0194,0,0x16,0x69,0xc3,0xe);
      UVar10 = 0x273b;
      goto cf_common_exit_0050B38B;
    }
    break;
  case 0x5d:
    PaintBioSonar(this_00);
    break;
  case 0x5e:
    thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x2c,0x52,'\x01',
                       *(byte **)&this_00->field_0xa09);
    pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2d2,0);
    thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x2e,0x54,'\x01',pbVar8);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0194,0,0x73,0x50,0x5f,0xb);
    iVar21 = -1;
    iVar20 = -1;
    uVar16 = 2;
    iVar14 = -1;
    iVar5 = -2;
    puVar12 = (uint *)FUN_006b0140(0x271d,DAT_00807618);
    ccFntTy::WrTxt(*(ccFntTy **)&this_00->field_0x1b8,puVar12,iVar5,iVar14,uVar16,iVar20,iVar21);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0194,0,0x73,0x5d,0x5f,0x17);
    iVar21 = -1;
    iVar20 = -1;
    uVar16 = 5;
    iVar14 = -1;
    iVar5 = -2;
    puVar12 = (uint *)FUN_006b0140(0x2721,DAT_00807618);
    ccFntTy::WrTxt(*(ccFntTy **)&this_00->field_0x1b8,puVar12,iVar5,iVar14,uVar16,iVar20,iVar21);
    puVar12 = (uint *)&this_00->field_0x1e1;
    wsprintfA((LPSTR)puVar12,&DAT_007c28fc,(uint)*(ushort *)&this_00->field_0xc34);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1c4,this_00->field_0194,0,0x91,0x73,0x26,0xf);
    uVar16 = 4;
    this_01 = *(ccFntTy **)&this_00->field_0x1c4;
    goto cf_common_exit_0050BD93;
  case 0x61:
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0194,0,0x25,0x50,0xa5,0xc);
    uVar16 = 5;
    iVar14 = -1;
    iVar5 = -1;
    puVar12 = (uint *)FUN_006b0140(0x2738,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1b8,puVar12,iVar5,iVar14,uVar16);
    pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b2,1);
    thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x33,0x5b,'\x01',pbVar8);
    pbVar8 = (byte *)(((uint)(byte)this_00->field_0xc2a * 0x21) / 100);
    pbVar9 = (byte *)0x0;
    if (pbVar8 != (byte *)0x0) {
      iVar5 = 0x35;
      local_14 = pbVar8;
      do {
        pbVar9 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,1);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x5d,'\x01',pbVar9);
        iVar5 = iVar5 + 4;
        local_14 = local_14 + -1;
        pbVar9 = pbVar8;
      } while (local_14 != (byte *)0x0);
    }
    if (pbVar9 < (byte *)0x21) {
      iVar5 = (int)pbVar9 * 4 + 0x35;
      do {
        pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,0);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x5d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    wsprintfA(&this_00->field_0x1e1,&DAT_007c28e0,(uint)(byte)this_00->field_0xc2a);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0194,0,0x15,0x68,0xc3,0xc);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1b8,(uint *)&this_00->field_0x1e1,-1,-1,5);
    pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b2,1);
    thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar8);
    pbVar8 = (byte *)(uint)(byte)this_00->field_0xc29;
    local_8 = (byte *)0x0;
    if (pbVar8 != (byte *)0x0) {
      iVar5 = 0x35;
      local_8 = pbVar8;
      do {
        pbVar9 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,1);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar9);
        iVar5 = iVar5 + 4;
        pbVar8 = pbVar8 + -1;
      } while (pbVar8 != (byte *)0x0);
    }
    if (local_8 < (byte *)0x21) {
      iVar5 = (int)local_8 * 4 + 0x35;
      do {
        pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,0);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    break;
  case 0x62:
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0194,0,0x15,0x66,0x66,0xb);
    uVar16 = 5;
    iVar14 = -1;
    iVar5 = -1;
    puVar12 = (uint *)FUN_006b0140(0x2725,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1b8,puVar12,iVar5,iVar14,uVar16);
    puVar1 = &this_00->field_0x1e1;
    wsprintfA(puVar1,&DAT_007c1890,*(undefined4 *)&this_00->field_0xc12);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1c4,this_00->field_0194,0,0x7f,0x66,0x24,0xb);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1c4,(uint *)puVar1,-1,-1,5);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0194,0,0x8e,0x4f,0x17,0xb);
    uVar16 = 5;
    iVar14 = -1;
    iVar5 = -1;
    puVar12 = (uint *)FUN_006b0140(0x2740,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1b8,puVar12,iVar5,iVar14,uVar16);
    wsprintfA(puVar1,&DAT_007c1890,*(undefined4 *)&this_00->field_0xc16);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1c4,this_00->field_0194,0,0xa5,0x4f,0x24,0xb);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1c4,(uint *)puVar1,-1,-1,4);
    pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b2,1);
    thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar8);
    uVar7 = *(uint *)&this_00->field_0xc16;
    if (uVar7 < *(uint *)&this_00->field_0xc12) {
      pbVar8 = (byte *)0x21;
    }
    else if (uVar7 == 0) {
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar8 = (byte *)((*(uint *)&this_00->field_0xc12 * 0x21) / uVar7);
    }
    pbVar9 = (byte *)0x0;
    if (pbVar8 != (byte *)0x0) {
      iVar5 = 0x35;
      local_8 = pbVar8;
      do {
        pbVar9 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,1);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar9);
        iVar5 = iVar5 + 4;
        pbVar8 = pbVar8 + -1;
        pbVar9 = local_8;
      } while (pbVar8 != (byte *)0x0);
    }
    if (pbVar9 < (byte *)0x21) {
      iVar5 = (int)pbVar9 * 4 + 0x35;
      do {
        pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,0);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    break;
  case 99:
    if (*(int *)&this_00->field_0xc12 == 0) {
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b)
      ;
LAB_0050b386:
      UVar10 = 0x2713;
      goto cf_common_exit_0050B38B;
    }
    thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x28,0x50,'\x01',
                       *(byte **)&this_00->field_0xa11);
    uVar7 = thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                               this_00->field_0xc1a);
    pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2ba,uVar7);
    thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x2a,0x52,'\x01',pbVar8);
    pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b2,1);
    thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar8);
    pbVar8 = (byte *)(((uint)(byte)this_00->field_0xc24 * 0x21) / 100);
    local_14 = (byte *)0x0;
    if (pbVar8 != (byte *)0x0) {
      iVar5 = 0x35;
      local_14 = pbVar8;
      do {
        pbVar9 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,1);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar9);
        iVar5 = iVar5 + 4;
        pbVar8 = pbVar8 + -1;
      } while (pbVar8 != (byte *)0x0);
    }
    if (local_14 < (byte *)0x21) {
      iVar5 = (int)local_14 * 4 + 0x35;
      do {
        pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,0);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0194,0,0x5c,0x69,0x7a,0xb);
    pHVar18 = DAT_00807618;
    UVar10 = thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                                this_00->field_0xc1a,0);
    pcVar11 = (char *)FUN_006b0140(UVar10,pHVar18);
    uVar7 = 0xffffffff;
    do {
      pcVar17 = pcVar11;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar17 = pcVar11 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar17;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7;
    pcVar11 = pcVar17 + -uVar7;
    pcVar17 = &this_00->field_0x1e1;
    for (uVar15 = uVar7 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar17 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar17 = pcVar17 + 1;
    }
    for (puVar12 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e1,'\n');
        puVar12 != (uint *)0x0; puVar12 = Library::MSVCRT::FUN_0072e560(puVar12,'\n')) {
      *(undefined1 *)puVar12 = 0x20;
    }
    ccFntTy::WrTxt(*(ccFntTy **)&this_00->field_0x1b8,(uint *)&this_00->field_0x1e1,-2,-1,5,-1,-1);
    pbVar8 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)&this_00->field_0x1c4,
                                         *(int *)&this_00->field_0x9dd,0,100,0x13,0x18,0xc,0);
    if (pbVar8 != (byte *)0x0) {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,(uint)*(ushort *)&this_00->field_0xc1c);
      ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1c4,&DAT_0080f33a,-1,-1,7);
      thunk_FUN_00540760((undefined4 *)this_00->field_0194,100,0x59,'\x01',pbVar8);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,(uint)*(ushort *)&this_00->field_0xc20);
      ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1c4,&DAT_0080f33a,-1,-1,5);
      thunk_FUN_00540760((undefined4 *)this_00->field_0194,0xaf,0x59,'\x01',pbVar8);
      ccFntTy::EraseSufr(*(ccFntTy **)&this_00->field_0x1c4);
    }
    puVar13 = FUN_00709af0(DAT_00806794,CASE_1,(byte *)s_BUT_RCTTYPESI04_007c28e8,0xffffffff,0,1,0,
                           (undefined4 *)0x0);
    thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x82,0x56,'\x01',(byte *)puVar13);
    pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0xb1b,0);
    thunk_FUN_00540760((undefined4 *)this_00->field_0194,0xa1,0x56,'\x01',pbVar8);
    break;
  case 100:
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0194,0,0x19,0x59,0xbb,0xb);
    uVar16 = 5;
    iVar14 = -1;
    iVar5 = -1;
    puVar12 = (uint *)FUN_006b0140(0x272d,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1b8,puVar12,iVar5,iVar14,uVar16);
    wsprintfA(&this_00->field_0x1e1,&DAT_007c1ae4,*(undefined4 *)&this_00->field_0xc12);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1c4,this_00->field_0194,0,0x66,0x65,0x24,0xb);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1c4,(uint *)&this_00->field_0x1e1,-1,-1,7);
    pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b2,1);
    thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar8);
    if (*(uint *)&this_00->field_0xc16 == 0) {
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar8 = (byte *)((uint)(*(int *)&this_00->field_0xc12 * 0x21) /
                       *(uint *)&this_00->field_0xc16);
    }
    local_8 = (byte *)0x0;
    if (pbVar8 != (byte *)0x0) {
      iVar5 = 0x35;
      local_8 = pbVar8;
      do {
        pbVar9 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,1);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar9);
        iVar5 = iVar5 + 4;
        pbVar8 = pbVar8 + -1;
      } while (pbVar8 != (byte *)0x0);
    }
    if (local_8 < (byte *)0x21) {
      iVar5 = (int)local_8 * 4 + 0x35;
      do {
        pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,0);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    break;
  case 0x67:
  case 0x68:
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0194,0,0x34,0x5d,0x85,0xb);
    uVar16 = 5;
    iVar14 = -1;
    iVar5 = -1;
    puVar12 = (uint *)FUN_006b0140(0x272b,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1b8,puVar12,iVar5,iVar14,uVar16);
    pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b2,1);
    thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x33,0x50,'\x01',pbVar8);
    uVar7 = 0;
    if (this_00->field_0xc11 != '\0') {
      iVar5 = 0x35;
      do {
        pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,1);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x52,'\x01',pbVar8);
        uVar7 = uVar7 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar7 < (byte)this_00->field_0xc11);
    }
    if (uVar7 < 0x21) {
      iVar5 = uVar7 * 4 + 0x35;
      do {
        pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,0);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x52,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0194,0,0x34,0x7d,0x85,0xb);
    uVar16 = 5;
    iVar14 = -1;
    iVar5 = -1;
    puVar12 = (uint *)FUN_006b0140(0x272c,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1b8,puVar12,iVar5,iVar14,uVar16);
    pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b2,1);
    thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x33,0x71,'\x01',pbVar8);
    uVar7 = 0;
    if (*(int *)&this_00->field_0xc12 != 0) {
      iVar5 = 0x35;
      do {
        pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,1);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x73,'\x01',pbVar8);
        uVar7 = uVar7 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar7 < *(uint *)&this_00->field_0xc12);
    }
    if (uVar7 < 0x21) {
      iVar5 = uVar7 * 4 + 0x35;
      do {
        pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,0);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x73,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    break;
  case 0x6d:
    local_8 = &this_00->field_0xc24;
    local_10 = (Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12;
    local_20 = -0xc24 - (int)this_00;
    iVar5 = 99;
    local_14 = (byte *)0x2c;
    do {
      pbVar8 = local_14;
      thunk_FUN_00540760((undefined4 *)this_00->field_0194,(int)(local_14 + -2),0x55,'\x01',
                         *(byte **)&this_00->field_0xa11);
      uVar7 = thunk_FUN_00526ba0(*local_10,local_8[-10]);
      pbVar9 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2c2,uVar7);
      thunk_FUN_00540760((undefined4 *)this_00->field_0194,(int)pbVar8,0x57,'\x01',pbVar9);
      pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b2,4);
      thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5 + -2,0x58,'\x01',pbVar8);
      local_c = 0;
      uVar7 = *local_8 / 10;
      if (uVar7 != 0) {
        iVar14 = 0x7e;
        local_18 = uVar7;
        local_c = uVar7;
        do {
          pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,7);
          thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,iVar14,'\x01',pbVar8);
          iVar14 = iVar14 + -4;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
      if (local_c < 10) {
        iVar14 = local_c * -4 + 0x7e;
        local_18 = 10 - local_c;
        do {
          pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,8);
          thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,iVar14,'\x01',pbVar8);
          iVar14 = iVar14 + -4;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + 0x65;
      local_8 = local_8 + 1;
      iVar5 = iVar5 + 0x1a;
    } while (local_8 + local_20 < (byte *)0x2);
    wsprintfA((LPSTR)&DAT_0080f33a,s__d_____d_007c28d4,(uint)(byte)this_00->field_0xc24,
              (uint)(byte)this_00->field_0xc25);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0194,0,0x5f,0x4d,0x2f,0xb);
    this_01 = *(ccFntTy **)&this_00->field_0x1b8;
    uVar16 = 5;
    puVar12 = &DAT_0080f33a;
cf_common_exit_0050BD93:
    ccFntTy::WrStr(this_01,puVar12,-1,-1,uVar16);
    break;
  case 0x70:
  case 0x72:
  case 0x73:
    pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b2,1);
    thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar8);
    pbVar8 = (byte *)(uint)(byte)this_00->field_0xc29;
    local_8 = (byte *)0x0;
    local_14 = pbVar8;
    if (pbVar8 != (byte *)0x0) {
      iVar5 = 0x35;
      local_8 = pbVar8;
      do {
        pbVar9 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,1);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar9);
        iVar5 = iVar5 + 4;
        pbVar8 = pbVar8 + -1;
      } while (pbVar8 != (byte *)0x0);
    }
    pbVar8 = local_14;
    if (local_8 < (byte *)0x21) {
      iVar5 = (int)local_8 * 4 + 0x35;
      do {
        pbVar9 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,0);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar9);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    pbVar9 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)&this_00->field_0x1b8,
                                         *(int *)&this_00->field_0x9e1,0,0x24,6,0xa4,0x2b,0);
    if (pbVar9 != (byte *)0x0) {
      iVar21 = -1;
      iVar20 = -1;
      uVar16 = 5;
      iVar14 = -1;
      iVar5 = -1;
      puVar12 = (uint *)FUN_006b0140(0x36c4 - (pbVar8 < (byte *)0x21),DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)&this_00->field_0x1b8,puVar12,iVar5,iVar14,uVar16,iVar20,iVar21);
      thunk_FUN_00540760((undefined4 *)this_00->field_0194,0x24,0x4c,'\x01',pbVar9);
      ccFntTy::EraseSufr(*(ccFntTy **)&this_00->field_0x1b8);
    }
  }
switchD_0050a9c9_caseD_5f:
  PaintIDSObj(this_00);
switchD_0050a52e_caseD_df:
  if (-1 < (int)*(uint *)&this_00->field_0x15c) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)&this_00->field_0x15c,0xffffffff,*(uint *)&this_00->field_0x50,
               *(uint *)&this_00->field_0xa8);
  }
  g_currentExceptionFrame = local_64.previous;
  return;
}

