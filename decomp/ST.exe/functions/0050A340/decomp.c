
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintCtrlObjSI */

void __thiscall CPanelTy::PaintCtrlObjSI(CPanelTy *this)

{
  char cVar1;
  CPanelTy CVar2;
  code *pcVar3;
  CPanelTy *this_00;
  byte bVar4;
  int iVar5;
  undefined3 extraout_var;
  uint uVar6;
  byte *pbVar7;
  UINT UVar8;
  char *pcVar9;
  uint *puVar10;
  ushort *puVar11;
  int iVar12;
  uint uVar13;
  CPanelTy *pCVar14;
  ccFntTy *this_01;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  undefined4 uVar15;
  void *unaff_EDI;
  CPanelTy *pCVar16;
  char *pcVar17;
  HINSTANCE pHVar18;
  undefined4 *puVar19;
  int iVar20;
  int iVar21;
  undefined4 *local_64;
  undefined4 local_60 [16];
  int local_20;
  CPanelTy *local_1c;
  uint local_18;
  CPanelTy *local_14;
  CPanelTy *local_10;
  uint local_c;
  CPanelTy *local_8;
  
  local_64 = DAT_00858df8;
  DAT_00858df8 = &local_64;
  local_1c = this;
  iVar5 = __setjmp3(local_60,0,unaff_EDI,unaff_ESI);
  this_00 = local_1c;
  if (iVar5 != 0) {
    DAT_00858df8 = local_64;
    iVar12 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x6f0,0,iVar5,&DAT_007a4ccc);
    if (iVar12 == 0) {
      FUN_006a5e40(iVar5,0,0x7c2700,0x6f0);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  switch(local_1c[0xbfa]) {
  case (CPanelTy)0x0:
  case (CPanelTy)0x3:
    thunk_FUN_00540760(*(undefined4 **)(local_1c + 0x194),0,0x46,'\x01',*(byte **)(local_1c + 0x9d9)
                      );
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0,0,'\x06',*(byte **)(this_00 + 0x9fd));
    break;
  case (CPanelTy)0x1:
    if (local_1c[0xbfb] == (CPanelTy)0x2) {
      thunk_FUN_00540760(*(undefined4 **)(local_1c + 0x194),0,0,'\x06',*(byte **)(local_1c + 0xa05))
      ;
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0,0x46,'\x01',*(byte **)(this_00 + 0x9e1)
                        );
      break;
    }
    thunk_FUN_00540760(*(undefined4 **)(local_1c + 0x194),0,0,'\x06',*(byte **)(local_1c + 0xa05));
    switch(*(undefined4 *)(this_00 + 0xbf5)) {
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
      pbVar7 = *(byte **)(this_00 + 0x9e1);
      puVar19 = *(undefined4 **)(this_00 + 0x194);
      break;
    case 0x5b:
      pbVar7 = *(byte **)(this_00 + 0x9e5);
      puVar19 = *(undefined4 **)(this_00 + 0x194);
      break;
    case 0x5e:
    case 0x6d:
      pbVar7 = *(byte **)(this_00 + 0x9dd);
      puVar19 = *(undefined4 **)(this_00 + 0x194);
      break;
    default:
      pbVar7 = *(byte **)(this_00 + 0x9d9);
      goto LAB_0050a4e4;
    case 0x62:
      pbVar7 = *(byte **)(this_00 + 0x9f5);
LAB_0050a4e4:
      puVar19 = *(undefined4 **)(this_00 + 0x194);
      break;
    case 0x67:
    case 0x68:
      pbVar7 = *(byte **)(this_00 + 0x9ed);
      puVar19 = *(undefined4 **)(this_00 + 0x194);
    }
    thunk_FUN_00540760(puVar19,0,0x46,'\x01',pbVar7);
    break;
  case (CPanelTy)0x4:
    thunk_FUN_00540760(*(undefined4 **)(local_1c + 0x194),0,0,'\x06',*(byte **)(local_1c + 0x9fd));
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0,0x46,'\x01',*(byte **)(this_00 + 0x9dd));
  }
  if (this_00[0xbfa] != (CPanelTy)0x1) {
    if (this_00[0xbfa] == (CPanelTy)0x4) {
      switch(*(undefined4 *)(this_00 + 0xbf5)) {
      case 0xdd:
      case 0xde:
      case 0xe0:
      case 0xfe:
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x2c,0x52,'\x01',
                           *(byte **)(this_00 + 0xa09));
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2d2),(uint)(byte)this_00[0xc11]);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x2e,0x54,'\x01',pbVar7);
        pbVar7 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(this_00 + 0x1b8),
                                             *(int *)(this_00 + 0x9dd),0,0x70,0x12,0x62,0xd,0);
        if (pbVar7 != (byte *)0x0) {
          if (*(int *)(this_00 + 0xbf5) == 0xfe) {
            UVar8 = thunk_FUN_00529480(this_00[0xc11]);
          }
          else {
            UVar8 = thunk_FUN_005293f0(*(int *)(this_00 + 0xbf5));
          }
          bVar4 = thunk_FUN_00529500(UVar8);
          uVar15 = CONCAT31(extraout_var,bVar4);
          iVar12 = -1;
          iVar5 = -1;
          puVar10 = (uint *)FUN_006b0140(UVar8,DAT_00807618);
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1b8),puVar10,iVar5,iVar12,uVar15);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x70,0x58,'\x01',pbVar7);
          ccFntTy::EraseSufr(*(ccFntTy **)(this_00 + 0x1b8));
        }
        pbVar7 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(this_00 + 0x1c4),
                                             *(int *)(this_00 + 0x9dd),0,0x78,0x23,0x5a,0x14,0);
        if (pbVar7 != (byte *)0x0) {
          uVar15 = 0;
          wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c2744,*(undefined4 *)(this_00 + 0xc12));
          switch(this_00[0xc11]) {
          case (CPanelTy)0x0:
            uVar15 = 4;
            break;
          case (CPanelTy)0x1:
          case (CPanelTy)0x3:
            uVar15 = 7;
            break;
          case (CPanelTy)0x2:
            uVar15 = 6;
            break;
          case (CPanelTy)0x4:
            uVar15 = 5;
          }
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1c4),&DAT_0080f33a,-1,-1,uVar15);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x78,0x69,'\x01',pbVar7);
          ccFntTy::EraseSufr(*(ccFntTy **)(this_00 + 0x1c4));
        }
        break;
      case 0xfd:
        CVar2 = this_00[0xc11];
        if ((CVar2 != (CPanelTy)0x0) && ((byte)CVar2 < 0x16)) {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2ce),(byte)CVar2 - 1);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x29,0x51,'\x01',pbVar7);
        }
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2ca),10);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x27,0x4f,'\x06',pbVar7);
        pbVar7 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(this_00 + 0x1b8),
                                             *(int *)(this_00 + 0x9dd),0,0x5d,0xb,0x73,0x19,0);
        if (pbVar7 != (byte *)0x0) {
          iVar21 = -1;
          iVar20 = -1;
          uVar15 = 5;
          iVar12 = -1;
          iVar5 = -2;
          pHVar18 = DAT_00807618;
          UVar8 = thunk_FUN_00525290(CONCAT31((int3)((uint)pbVar7 >> 8),this_00[0xc11]));
          puVar10 = (uint *)FUN_006b0140(UVar8,pHVar18);
          ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),puVar10,iVar5,iVar12,uVar15,iVar20,iVar21);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x5d,0x51,'\x01',pbVar7);
          ccFntTy::EraseSufr(*(ccFntTy **)(this_00 + 0x1b8));
        }
        pbVar7 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(this_00 + 0x1b8),
                                             *(int *)(this_00 + 0x9dd),0,0x27,0x26,0x9f,0x1c,0);
        if (pbVar7 != (byte *)0x0) {
          ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),*(uint **)(this_00 + 0xc16),-2,-1,3,-1,-1);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x27,0x6c,'\x01',pbVar7);
          ccFntTy::EraseSufr(*(ccFntTy **)(this_00 + 0x1b8));
        }
      }
    }
    goto switchD_0050a52e_caseD_df;
  }
  if (this_00[0xbfb] == (CPanelTy)0x2) {
    if (*(int *)(this_00 + 0xc12) != 0) {
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x28,0x50,'\x01',
                         *(byte **)(this_00 + 0xa11));
      uVar6 = thunk_FUN_00526ba0(*(undefined4 *)(this_00 + 0xc12),(char)this_00[0xc1a]);
      pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2c2),uVar6);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x2a,0x52,'\x01',pbVar7);
      pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b2),1);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x33,0x7b,'\x01',pbVar7);
      pCVar16 = (CPanelTy *)(((uint)(byte)this_00[0xc24] * 0x21) / 100);
      local_14 = (CPanelTy *)0x0;
      if (pCVar16 != (CPanelTy *)0x0) {
        iVar5 = 0x35;
        local_14 = pCVar16;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
          pCVar16 = pCVar16 + -1;
        } while (pCVar16 != (CPanelTy *)0x0);
      }
      if (local_14 < (CPanelTy *)0x21) {
        iVar5 = (int)local_14 * 4 + 0x35;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x5c,0x6c,0x7a,0xb
                      );
      pHVar18 = DAT_00807618;
      UVar8 = thunk_FUN_00523410(*(undefined4 *)(this_00 + 0xc12),(char)this_00[0xc1a],0);
      pcVar9 = (char *)FUN_006b0140(UVar8,pHVar18);
      uVar6 = 0xffffffff;
      do {
        pcVar17 = pcVar9;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar17 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar17;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pCVar16 = (CPanelTy *)(pcVar17 + -uVar6);
      pCVar14 = this_00 + 0x1e1;
      for (uVar13 = uVar6 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(uint *)pCVar14 = *(uint *)pCVar16;
        pCVar16 = pCVar16 + 4;
        pCVar14 = pCVar14 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pCVar14 = *pCVar16;
        pCVar16 = pCVar16 + 1;
        pCVar14 = pCVar14 + 1;
      }
      for (puVar10 = FUN_0072e560((uint *)(this_00 + 0x1e1),'\n'); puVar10 != (uint *)0x0;
          puVar10 = FUN_0072e560(puVar10,'\n')) {
        *(undefined1 *)puVar10 = 0x20;
      }
LAB_0050af64:
      ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),(uint *)(this_00 + 0x1e1),-2,-1,5,-1,-1);
      PaintCostsXYSI(this_00,*(int *)(this_00 + 0x194),*(ushort *)(this_00 + 0xc1c),
                     *(ushort *)(this_00 + 0xc20),7,4);
    }
    goto switchD_0050a9c9_caseD_5f;
  }
  iVar5 = *(int *)(this_00 + 0xbf5);
  switch(iVar5) {
  case 0x53:
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x24,0x4c,0xa4,0x2b)
    ;
    switch(this_00[0xc3c]) {
    case (CPanelTy)0x0:
      UVar8 = 0x36bb;
      goto LAB_0050b38b;
    case (CPanelTy)0x1:
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x27,0x51,'\x01',
                         *(byte **)(this_00 + 0xa0d));
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x15,0x6c,0xc3,0xb
                      );
      iVar21 = -1;
      iVar20 = -1;
      uVar15 = 5;
      iVar12 = -1;
      iVar5 = -2;
      puVar10 = (uint *)FUN_006b0140(0x36bd,DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),puVar10,iVar5,iVar12,uVar15,iVar20,iVar21);
      PaintDamageXY(this_00,*(int *)(this_00 + 0x194),0x5c,0x50,
                    CONCAT31((int3)((uint)extraout_EDX >> 8),this_00[0xc3d]),0x2714);
      pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b2),1);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x33,0x7b,'\x01',pbVar7);
      pCVar16 = (CPanelTy *)((uint)(*(int *)(this_00 + 0xc3d) * 0x21) / 100);
      local_8 = (CPanelTy *)0x0;
      if (pCVar16 != (CPanelTy *)0x0) {
        iVar5 = 0x35;
        local_8 = pCVar16;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
          pCVar16 = pCVar16 + -1;
        } while (pCVar16 != (CPanelTy *)0x0);
      }
      if (local_8 < (CPanelTy *)0x21) {
        iVar5 = (int)local_8 * 4 + 0x35;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      break;
    case (CPanelTy)0x2:
      iVar21 = -1;
      iVar20 = -1;
      uVar15 = 5;
      iVar12 = -1;
      iVar5 = -2;
      puVar10 = (uint *)FUN_006b0140(0x36bc,DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),puVar10,iVar5,iVar12,uVar15,iVar20,iVar21);
      pCVar16 = this_00 + 0x1e1;
      wsprintfA((LPSTR)pCVar16,&DAT_007c1ae4,*(undefined4 *)(this_00 + 0xc3d));
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1bc),*(int *)(this_00 + 0x194),0,0x28,0x79,0x9b,0xf
                      );
      this_01 = *(ccFntTy **)(this_00 + 0x1bc);
      uVar15 = 1;
      goto LAB_0050bd93;
    case (CPanelTy)0x3:
      UVar8 = 0x36be;
LAB_0050b38b:
      iVar21 = -1;
      iVar20 = -1;
      uVar15 = 5;
      iVar12 = -1;
      iVar5 = -2;
      puVar10 = (uint *)FUN_006b0140(UVar8,DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),puVar10,iVar5,iVar12,uVar15,iVar20,iVar21);
      break;
    case (CPanelTy)0x4:
      if (this_00[0xc31] != (CPanelTy)0x0) {
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
    if (this_00[0xc31] == (CPanelTy)0x0) {
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x24,0x4c,0xa4,
                       0x2b);
      if (*(short *)(this_00 + 0xc2f) == 0) goto LAB_0050b386;
      uVar15 = FUN_006b0140(0x273c,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__d__s_007c2864,(uint)*(ushort *)(this_00 + 0xc2f),uVar15);
      ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),&DAT_0080f33a,-2,-1,5,-1,-1);
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
    if (*(int *)(this_00 + 0xc12) != 0) {
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x28,0x50,'\x01',
                         *(byte **)(this_00 + 0xa11));
      uVar6 = thunk_FUN_00526ba0(*(undefined4 *)(this_00 + 0xc12),(char)this_00[0xc1a]);
      pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2ba),uVar6);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x2a,0x52,'\x01',pbVar7);
      pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b2),1);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x33,0x7b,'\x01',pbVar7);
      pCVar16 = (CPanelTy *)(((uint)(byte)this_00[0xc24] * 0x21) / 100);
      local_14 = (CPanelTy *)0x0;
      if (pCVar16 != (CPanelTy *)0x0) {
        iVar5 = 0x35;
        local_14 = pCVar16;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
          pCVar16 = pCVar16 + -1;
        } while (pCVar16 != (CPanelTy *)0x0);
      }
      if (local_14 < (CPanelTy *)0x21) {
        iVar5 = (int)local_14 * 4 + 0x35;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x5c,0x6c,0x7a,0xb
                      );
      pHVar18 = DAT_00807618;
      UVar8 = thunk_FUN_00523410(*(undefined4 *)(this_00 + 0xc12),(char)this_00[0xc1a],0);
      pcVar9 = (char *)FUN_006b0140(UVar8,pHVar18);
      uVar6 = 0xffffffff;
      do {
        pcVar17 = pcVar9;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar17 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar17;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pCVar16 = (CPanelTy *)(pcVar17 + -uVar6);
      pCVar14 = this_00 + 0x1e1;
      for (uVar13 = uVar6 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(uint *)pCVar14 = *(uint *)pCVar16;
        pCVar16 = pCVar16 + 4;
        pCVar14 = pCVar14 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pCVar14 = *pCVar16;
        pCVar16 = pCVar16 + 1;
        pCVar14 = pCVar14 + 1;
      }
      for (puVar10 = FUN_0072e560((uint *)(this_00 + 0x1e1),'\n'); puVar10 != (uint *)0x0;
          puVar10 = FUN_0072e560(puVar10,'\n')) {
        *(undefined1 *)puVar10 = 0x20;
      }
      goto LAB_0050af64;
    }
    if (iVar5 == 0x5c) {
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x24,0x4c,0xa4,
                       0x2b);
      goto LAB_0050b386;
    }
    if (iVar5 == 0x6e) {
      wsprintfA((LPSTR)(this_00 + 0x1e1),&DAT_007c1890,(uint)*(ushort *)(this_00 + 0xc2f));
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1c4),*(int *)(this_00 + 0x194),0,0x1c,0x58,0xb7,0xf
                      );
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1c4),(uint *)(this_00 + 0x1e1),-1,-1,5);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x16,0x69,0xc3,0xe
                      );
      UVar8 = 0x273b;
      goto LAB_0050b38b;
    }
    break;
  case 0x5d:
    PaintBioSonar(this_00);
    break;
  case 0x5e:
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x2c,0x52,'\x01',
                       *(byte **)(this_00 + 0xa09));
    pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2d2),0);
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x2e,0x54,'\x01',pbVar7);
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x73,0x50,0x5f,0xb);
    iVar21 = -1;
    iVar20 = -1;
    uVar15 = 2;
    iVar12 = -1;
    iVar5 = -2;
    puVar10 = (uint *)FUN_006b0140(0x271d,DAT_00807618);
    ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),puVar10,iVar5,iVar12,uVar15,iVar20,iVar21);
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x73,0x5d,0x5f,0x17)
    ;
    iVar21 = -1;
    iVar20 = -1;
    uVar15 = 5;
    iVar12 = -1;
    iVar5 = -2;
    puVar10 = (uint *)FUN_006b0140(0x2721,DAT_00807618);
    ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),puVar10,iVar5,iVar12,uVar15,iVar20,iVar21);
    pCVar16 = this_00 + 0x1e1;
    wsprintfA((LPSTR)pCVar16,&DAT_007c28fc,(uint)*(ushort *)(this_00 + 0xc34));
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1c4),*(int *)(this_00 + 0x194),0,0x91,0x73,0x26,0xf);
    uVar15 = 4;
    this_01 = *(ccFntTy **)(this_00 + 0x1c4);
    goto LAB_0050bd93;
  case 0x61:
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x25,0x50,0xa5,0xc);
    uVar15 = 5;
    iVar12 = -1;
    iVar5 = -1;
    puVar10 = (uint *)FUN_006b0140(0x2738,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1b8),puVar10,iVar5,iVar12,uVar15);
    pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b2),1);
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x33,0x5b,'\x01',pbVar7);
    pCVar16 = (CPanelTy *)(((uint)(byte)this_00[0xc2a] * 0x21) / 100);
    pCVar14 = (CPanelTy *)0x0;
    if (pCVar16 != (CPanelTy *)0x0) {
      iVar5 = 0x35;
      local_14 = pCVar16;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x5d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
        local_14 = local_14 + -1;
        pCVar14 = pCVar16;
      } while (local_14 != (CPanelTy *)0x0);
    }
    if (pCVar14 < (CPanelTy *)0x21) {
      iVar5 = (int)pCVar14 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x5d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    wsprintfA((LPSTR)(this_00 + 0x1e1),&DAT_007c28e0,(uint)(byte)this_00[0xc2a]);
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x15,0x68,0xc3,0xc);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1b8),(uint *)(this_00 + 0x1e1),-1,-1,5);
    pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b2),1);
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x33,0x7b,'\x01',pbVar7);
    pCVar16 = (CPanelTy *)(uint)(byte)this_00[0xc29];
    local_8 = (CPanelTy *)0x0;
    if (pCVar16 != (CPanelTy *)0x0) {
      iVar5 = 0x35;
      local_8 = pCVar16;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
        pCVar16 = pCVar16 + -1;
      } while (pCVar16 != (CPanelTy *)0x0);
    }
    if (local_8 < (CPanelTy *)0x21) {
      iVar5 = (int)local_8 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    break;
  case 0x62:
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x15,0x66,0x66,0xb);
    uVar15 = 5;
    iVar12 = -1;
    iVar5 = -1;
    puVar10 = (uint *)FUN_006b0140(0x2725,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1b8),puVar10,iVar5,iVar12,uVar15);
    pCVar16 = this_00 + 0x1e1;
    wsprintfA((LPSTR)pCVar16,&DAT_007c1890,*(undefined4 *)(this_00 + 0xc12));
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1c4),*(int *)(this_00 + 0x194),0,0x7f,0x66,0x24,0xb);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1c4),(uint *)pCVar16,-1,-1,5);
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x8e,0x4f,0x17,0xb);
    uVar15 = 5;
    iVar12 = -1;
    iVar5 = -1;
    puVar10 = (uint *)FUN_006b0140(0x2740,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1b8),puVar10,iVar5,iVar12,uVar15);
    wsprintfA((LPSTR)pCVar16,&DAT_007c1890,*(undefined4 *)(this_00 + 0xc16));
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1c4),*(int *)(this_00 + 0x194),0,0xa5,0x4f,0x24,0xb);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1c4),(uint *)pCVar16,-1,-1,4);
    pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b2),1);
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x33,0x7b,'\x01',pbVar7);
    uVar6 = *(uint *)(this_00 + 0xc16);
    if (uVar6 < *(uint *)(this_00 + 0xc12)) {
      pCVar16 = (CPanelTy *)0x21;
    }
    else if (uVar6 == 0) {
      pCVar16 = (CPanelTy *)0x0;
    }
    else {
      pCVar16 = (CPanelTy *)((*(uint *)(this_00 + 0xc12) * 0x21) / uVar6);
    }
    pCVar14 = (CPanelTy *)0x0;
    if (pCVar16 != (CPanelTy *)0x0) {
      iVar5 = 0x35;
      local_8 = pCVar16;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
        pCVar16 = pCVar16 + -1;
        pCVar14 = local_8;
      } while (pCVar16 != (CPanelTy *)0x0);
    }
    if (pCVar14 < (CPanelTy *)0x21) {
      iVar5 = (int)pCVar14 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    break;
  case 99:
    if (*(int *)(this_00 + 0xc12) == 0) {
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x24,0x4c,0xa4,
                       0x2b);
LAB_0050b386:
      UVar8 = 0x2713;
      goto LAB_0050b38b;
    }
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x28,0x50,'\x01',
                       *(byte **)(this_00 + 0xa11));
    uVar6 = thunk_FUN_00526ba0(*(undefined4 *)(this_00 + 0xc12),(char)this_00[0xc1a]);
    pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2ba),uVar6);
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x2a,0x52,'\x01',pbVar7);
    pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b2),1);
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x33,0x7b,'\x01',pbVar7);
    pCVar16 = (CPanelTy *)(((uint)(byte)this_00[0xc24] * 0x21) / 100);
    local_14 = (CPanelTy *)0x0;
    if (pCVar16 != (CPanelTy *)0x0) {
      iVar5 = 0x35;
      local_14 = pCVar16;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
        pCVar16 = pCVar16 + -1;
      } while (pCVar16 != (CPanelTy *)0x0);
    }
    if (local_14 < (CPanelTy *)0x21) {
      iVar5 = (int)local_14 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x5c,0x69,0x7a,0xb);
    pHVar18 = DAT_00807618;
    UVar8 = thunk_FUN_00523410(*(undefined4 *)(this_00 + 0xc12),(char)this_00[0xc1a],0);
    pcVar9 = (char *)FUN_006b0140(UVar8,pHVar18);
    uVar6 = 0xffffffff;
    do {
      pcVar17 = pcVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar17 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar17;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pCVar16 = (CPanelTy *)(pcVar17 + -uVar6);
    pCVar14 = this_00 + 0x1e1;
    for (uVar13 = uVar6 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(uint *)pCVar14 = *(uint *)pCVar16;
      pCVar16 = pCVar16 + 4;
      pCVar14 = pCVar14 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pCVar14 = *pCVar16;
      pCVar16 = pCVar16 + 1;
      pCVar14 = pCVar14 + 1;
    }
    for (puVar10 = FUN_0072e560((uint *)(this_00 + 0x1e1),'\n'); puVar10 != (uint *)0x0;
        puVar10 = FUN_0072e560(puVar10,'\n')) {
      *(undefined1 *)puVar10 = 0x20;
    }
    ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),(uint *)(this_00 + 0x1e1),-2,-1,5,-1,-1);
    pbVar7 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(this_00 + 0x1c4),*(int *)(this_00 + 0x9dd),0,
                                         100,0x13,0x18,0xc,0);
    if (pbVar7 != (byte *)0x0) {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,(uint)*(ushort *)(this_00 + 0xc1c));
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1c4),&DAT_0080f33a,-1,-1,7);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),100,0x59,'\x01',pbVar7);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,(uint)*(ushort *)(this_00 + 0xc20));
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1c4),&DAT_0080f33a,-1,-1,5);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0xaf,0x59,'\x01',pbVar7);
      ccFntTy::EraseSufr(*(ccFntTy **)(this_00 + 0x1c4));
    }
    puVar11 = FUN_00709af0(DAT_00806794,1,(byte *)s_BUT_RCTTYPESI04_007c28e8,0xffffffff,0,1,0,
                           (undefined4 *)0x0);
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x82,0x56,'\x01',(byte *)puVar11);
    pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0xb1b),0);
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0xa1,0x56,'\x01',pbVar7);
    break;
  case 100:
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x19,0x59,0xbb,0xb);
    uVar15 = 5;
    iVar12 = -1;
    iVar5 = -1;
    puVar10 = (uint *)FUN_006b0140(0x272d,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1b8),puVar10,iVar5,iVar12,uVar15);
    wsprintfA((LPSTR)(this_00 + 0x1e1),&DAT_007c1ae4,*(undefined4 *)(this_00 + 0xc12));
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1c4),*(int *)(this_00 + 0x194),0,0x66,0x65,0x24,0xb);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1c4),(uint *)(this_00 + 0x1e1),-1,-1,7);
    pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b2),1);
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x33,0x7b,'\x01',pbVar7);
    if (*(uint *)(this_00 + 0xc16) == 0) {
      pCVar16 = (CPanelTy *)0x0;
    }
    else {
      pCVar16 = (CPanelTy *)((uint)(*(int *)(this_00 + 0xc12) * 0x21) / *(uint *)(this_00 + 0xc16));
    }
    local_8 = (CPanelTy *)0x0;
    if (pCVar16 != (CPanelTy *)0x0) {
      iVar5 = 0x35;
      local_8 = pCVar16;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
        pCVar16 = pCVar16 + -1;
      } while (pCVar16 != (CPanelTy *)0x0);
    }
    if (local_8 < (CPanelTy *)0x21) {
      iVar5 = (int)local_8 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    break;
  case 0x67:
  case 0x68:
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x34,0x5d,0x85,0xb);
    uVar15 = 5;
    iVar12 = -1;
    iVar5 = -1;
    puVar10 = (uint *)FUN_006b0140(0x272b,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1b8),puVar10,iVar5,iVar12,uVar15);
    pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b2),1);
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x33,0x50,'\x01',pbVar7);
    uVar6 = 0;
    if (this_00[0xc11] != (CPanelTy)0x0) {
      iVar5 = 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x52,'\x01',pbVar7);
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar6 < (byte)this_00[0xc11]);
    }
    if (uVar6 < 0x21) {
      iVar5 = uVar6 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x52,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x34,0x7d,0x85,0xb);
    uVar15 = 5;
    iVar12 = -1;
    iVar5 = -1;
    puVar10 = (uint *)FUN_006b0140(0x272c,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1b8),puVar10,iVar5,iVar12,uVar15);
    pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b2),1);
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x33,0x71,'\x01',pbVar7);
    uVar6 = 0;
    if (*(int *)(this_00 + 0xc12) != 0) {
      iVar5 = 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x73,'\x01',pbVar7);
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar6 < *(uint *)(this_00 + 0xc12));
    }
    if (uVar6 < 0x21) {
      iVar5 = uVar6 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x73,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    break;
  case 0x6d:
    local_8 = this_00 + 0xc24;
    local_10 = this_00 + 0xc12;
    local_20 = -0xc24 - (int)this_00;
    iVar5 = 99;
    local_14 = (CPanelTy *)0x2c;
    do {
      pCVar16 = local_14;
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),(int)(local_14 + -2),0x55,'\x01',
                         *(byte **)(this_00 + 0xa11));
      uVar6 = thunk_FUN_00526ba0(*(undefined4 *)local_10,(char)local_8[-10]);
      pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2c2),uVar6);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),(int)pCVar16,0x57,'\x01',pbVar7);
      pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b2),4);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5 + -2,0x58,'\x01',pbVar7);
      local_c = 0;
      uVar6 = (byte)*local_8 / 10;
      if (uVar6 != 0) {
        iVar12 = 0x7e;
        local_18 = uVar6;
        local_c = uVar6;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),7);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,iVar12,'\x01',pbVar7);
          iVar12 = iVar12 + -4;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
      if (local_c < 10) {
        iVar12 = local_c * -4 + 0x7e;
        local_18 = 10 - local_c;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),8);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,iVar12,'\x01',pbVar7);
          iVar12 = iVar12 + -4;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
      local_10 = local_10 + 4;
      local_14 = local_14 + 0x65;
      local_8 = local_8 + 1;
      iVar5 = iVar5 + 0x1a;
    } while (local_8 + local_20 < (CPanelTy *)0x2);
    wsprintfA((LPSTR)&DAT_0080f33a,s__d_____d_007c28d4,(uint)(byte)this_00[0xc24],
              (uint)(byte)this_00[0xc25]);
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x194),0,0x5f,0x4d,0x2f,0xb);
    this_01 = *(ccFntTy **)(this_00 + 0x1b8);
    uVar15 = 5;
    pCVar16 = (CPanelTy *)&DAT_0080f33a;
LAB_0050bd93:
    ccFntTy::WrStr(this_01,(uint *)pCVar16,-1,-1,uVar15);
    break;
  case 0x70:
  case 0x72:
  case 0x73:
    pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b2),1);
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x33,0x7b,'\x01',pbVar7);
    pCVar16 = (CPanelTy *)(uint)(byte)this_00[0xc29];
    local_8 = (CPanelTy *)0x0;
    local_14 = pCVar16;
    if (pCVar16 != (CPanelTy *)0x0) {
      iVar5 = 0x35;
      local_8 = pCVar16;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
        pCVar16 = pCVar16 + -1;
      } while (pCVar16 != (CPanelTy *)0x0);
    }
    pCVar16 = local_14;
    if (local_8 < (CPanelTy *)0x21) {
      iVar5 = (int)local_8 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    pbVar7 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x9e1),0,
                                         0x24,6,0xa4,0x2b,0);
    if (pbVar7 != (byte *)0x0) {
      iVar21 = -1;
      iVar20 = -1;
      uVar15 = 5;
      iVar12 = -1;
      iVar5 = -1;
      puVar10 = (uint *)FUN_006b0140(0x36c4 - (pCVar16 < (CPanelTy *)0x21),DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),puVar10,iVar5,iVar12,uVar15,iVar20,iVar21);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x24,0x4c,'\x01',pbVar7);
      ccFntTy::EraseSufr(*(ccFntTy **)(this_00 + 0x1b8));
    }
  }
switchD_0050a9c9_caseD_5f:
  PaintIDSObj(this_00);
switchD_0050a52e_caseD_df:
  if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
    FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                 *(uint *)(this_00 + 0xa8));
  }
  DAT_00858df8 = local_64;
  return;
}

