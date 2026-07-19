
void __thiscall CPanelTy::Update4PanelSI(CPanelTy *this)

{
  CPanelTy CVar1;
  code *pcVar2;
  CPanelTy *this_00;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  ccFntTy *this_01;
  char cVar12;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  CPanelTy *pCVar13;
  CPanelTy *pCVar14;
  void *unaff_EDI;
  int *piVar15;
  short *psVar16;
  undefined4 *puVar17;
  bool bVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  undefined4 auStack_140 [4];
  undefined4 uStack_130;
  undefined4 auStack_120 [4];
  undefined4 uStack_110;
  undefined4 auStack_100 [4];
  undefined4 uStack_f0;
  undefined4 auStack_e0 [4];
  undefined4 uStack_d0;
  InternalExceptionFrame IStack_c0;
  CPanelTy *pCStack_7c;
  int iStack_78;
  CPanelTy CStack_74;
  CPanelTy CStack_73;
  CPanelTy CStack_72;
  CPanelTy CStack_71;
  CPanelTy CStack_70;
  short asStack_6f [6];
  CPanelTy CStack_63;
  short asStack_62 [3];
  CPanelTy CStack_5c;
  int iStack_5b;
  int iStack_57;
  ushort uStack_51;
  ushort uStack_4d;
  CPanelTy aCStack_49 [5];
  CPanelTy CStack_44;
  CPanelTy CStack_43;
  short sStack_3e;
  CPanelTy CStack_3c;
  CPanelTy CStack_3a;
  CPanelTy CStack_31;
  int iStack_20;
  int *piStack_1c;
  uint uStack_18;
  uint uStack_14;
  CPanelTy *pCStack_10;
  uint uStack_c;
  uint uStack_8;
  
  IStack_c0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_c0;
  pCStack_7c = this;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_c0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pCStack_7c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = IStack_c0.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x8ae,0,iVar4,
                                &DAT_007a4ccc,s_CPanelTy__Update4PanelSI_007c2900);
    if (iVar10 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x8ae);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pCVar14 = pCStack_7c + 0xbf5;
  pCVar13 = pCVar14;
  piVar15 = &iStack_78;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar15 = *(int *)pCVar13;
    pCVar13 = pCVar13 + 4;
    piVar15 = piVar15 + 1;
  }
  pCVar13 = pCVar14;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(int *)pCVar13 = 0;
    pCVar13 = pCVar13 + 4;
  }
  STAllPlayersC::GetPanelInfo(DAT_007fa174,4,(int *)pCVar14);
  CVar1 = this_00[0xbfa];
  if ((CStack_73 != CVar1) || (CStack_72 != this_00[0xbfb])) {
LAB_0050e007:
    PaintCtrlObjSI(this_00);
    SetControlObjSI(this_00,'\x01');
    thunk_FUN_00506040((int)this_00);
    g_currentExceptionFrame = IStack_c0.previous;
    return;
  }
  if ((this_00[0xbfb] == (CPanelTy)0x2) && (CVar1 == (CPanelTy)0x1)) {
    cVar11 = '\0';
    cVar12 = '\0';
    uVar5 = 0;
    do {
      if (this_00[uVar5 + 0xbfe] != (CPanelTy)0x0) {
        cVar12 = cVar12 + '\x01';
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 6);
    uVar5 = 0;
    do {
      if (*(char *)((int)asStack_6f + uVar5) != '\0') {
        cVar11 = cVar11 + '\x01';
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 6);
    if (cVar12 == cVar11) {
      iVar4 = 3;
      bVar18 = true;
      pCVar14 = this_00 + 0xbfe;
      psVar16 = asStack_6f;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar18 = *(short *)pCVar14 == *psVar16;
        pCVar14 = pCVar14 + 2;
        psVar16 = psVar16 + 1;
      } while (bVar18);
      if (bVar18) {
        if (this_00[0xbfd] != CStack_70) {
          thunk_FUN_004f1610(this_00,'\0');
        }
      }
      else {
        *(undefined4 *)(this_00 + 0x28) = 5;
        FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x302),(undefined4 *)(this_00 + 0x18));
        uStack_c = uStack_c & 0xffffff00;
        pCVar14 = this_00 + 0xbfe;
        do {
          if (*pCVar14 != (CPanelTy)0x0) {
            thunk_FUN_004f17d0(this_00,0,(byte)uStack_c);
          }
          bVar3 = (char)uStack_c + 1;
          pCVar14 = pCVar14 + 1;
          uStack_c = CONCAT31(uStack_c._1_3_,bVar3);
        } while (bVar3 < 6);
        thunk_FUN_004f1610(this_00,'\0');
        thunk_FUN_0054a8d0(DAT_00802a30);
      }
      iVar4 = 3;
      bVar18 = true;
      pCVar14 = this_00 + 0xc04;
      psVar16 = asStack_6f + 3;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar18 = *(short *)pCVar14 == *psVar16;
        pCVar14 = pCVar14 + 2;
        psVar16 = psVar16 + 1;
      } while (bVar18);
      if ((!bVar18) || (this_00[0xbfc] != CStack_71)) {
        thunk_FUN_004f4570(this_00,'\0',(int)(this_00 + 0xbf5),(int)&iStack_78);
      }
    }
    else {
      SetControlObjSI(this_00,'\x01');
    }
    if (((this_00[0xc0a] != CStack_63) || (this_00[0xbfc] != CStack_71)) &&
       (*(int *)(this_00 + 0x9c4) != 0)) {
      *(undefined4 *)(this_00 + 0x28) = 0x20;
      if (this_00[0xbfc] == (CPanelTy)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (uint)(byte)this_00[0xc0a];
      }
      *(uint *)(this_00 + 0x2c) = uVar5;
      FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x9c4),(undefined4 *)(this_00 + 0x18));
    }
    if (*(int *)(this_00 + 0xc12) == iStack_5b) {
      if (this_00[0xc24] != aCStack_49[0]) {
        uVar5 = ((uint)(byte)this_00[0xc24] * 0x21) / 100;
        uStack_8 = 0;
        if (uVar5 != 0) {
          iVar4 = 0x35;
          uStack_8 = uVar5;
          do {
            pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
            thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x7d,'\x01',pbVar6);
            iVar4 = iVar4 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        if (uStack_8 < 0x21) {
          iVar4 = uStack_8 * 4 + 0x35;
          do {
            pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
            thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x7d,'\x01',pbVar6);
            iVar4 = iVar4 + 4;
          } while (iVar4 < 0xb9);
        }
        Library::DKW::WGR::FUN_006b55f0
                  (*(undefined4 **)(this_00 + 0x194),0,0x5c,0x50,*(int *)(this_00 + 0x9e1),0,0x5c,10
                   ,0x3c,0x1e);
        PaintCostsXYSI(this_00,*(int *)(this_00 + 0x194),*(ushort *)(this_00 + 0xc1c),
                       *(ushort *)(this_00 + 0xc20),7,4);
        if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                     *(uint *)(this_00 + 0xa8));
        }
      }
    }
    else {
      PaintCtrlObjSI(this_00);
      SetControlObjSI(this_00,'\0');
      thunk_FUN_00506040((int)this_00);
    }
    if (*(int *)(this_00 + 0xc4d) == iStack_20) {
      g_currentExceptionFrame = IStack_c0.previous;
      return;
    }
    PaintIDSObj(this_00);
    g_currentExceptionFrame = IStack_c0.previous;
    return;
  }
  if (CVar1 != (CPanelTy)0x1) {
    if (CVar1 != (CPanelTy)0x4) {
      g_currentExceptionFrame = IStack_c0.previous;
      return;
    }
    if (iStack_78 == *(int *)(this_00 + 0xbf5)) {
      switch(*(int *)(this_00 + 0xbf5)) {
      case 0xdd:
      case 0xde:
      case 0xe0:
      case 0xfd:
      case 0xfe:
        goto switchD_0050c9ae_caseD_dd;
      default:
        g_currentExceptionFrame = IStack_c0.previous;
        return;
      }
    }
    goto LAB_0050e007;
  }
  if ((iStack_78 != *(int *)(this_00 + 0xbf5)) || (CStack_74 != this_00[0xbf9])) goto LAB_0050e007;
  cVar11 = '\0';
  cVar12 = '\0';
  uVar5 = 0;
  do {
    if (this_00[uVar5 + 0xbfe] != (CPanelTy)0x0) {
      cVar12 = cVar12 + '\x01';
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 6);
  uVar5 = 0;
  do {
    if (*(char *)((int)asStack_6f + uVar5) != '\0') {
      cVar11 = cVar11 + '\x01';
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 6);
  if (cVar12 == cVar11) {
    iVar4 = 3;
    bVar18 = true;
    pCVar14 = this_00 + 0xbfe;
    psVar16 = asStack_6f;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar18 = *(short *)pCVar14 == *psVar16;
      pCVar14 = pCVar14 + 2;
      psVar16 = psVar16 + 1;
    } while (bVar18);
    if (bVar18) {
      if (this_00[0xbfd] != CStack_70) {
        thunk_FUN_004f1610(this_00,'\0');
      }
    }
    else {
      *(undefined4 *)(this_00 + 0x28) = 5;
      FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x302),(undefined4 *)(this_00 + 0x18));
      uStack_c = uStack_c & 0xffffff00;
      pCVar14 = this_00 + 0xbfe;
      do {
        if (*pCVar14 != (CPanelTy)0x0) {
          thunk_FUN_004f17d0(this_00,0,(byte)uStack_c);
        }
        bVar3 = (char)uStack_c + 1;
        pCVar14 = pCVar14 + 1;
        uStack_c = CONCAT31(uStack_c._1_3_,bVar3);
      } while (bVar3 < 6);
      thunk_FUN_004f1610(this_00,'\0');
      thunk_FUN_0054a8d0(DAT_00802a30);
    }
    iVar4 = 3;
    bVar18 = true;
    pCVar14 = this_00 + 0xc04;
    psVar16 = asStack_6f + 3;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar18 = *(short *)pCVar14 == *psVar16;
      pCVar14 = pCVar14 + 2;
      psVar16 = psVar16 + 1;
    } while (bVar18);
    if ((!bVar18) || (this_00[0xbfc] != CStack_71)) {
      thunk_FUN_004f4570(this_00,'\0',(int)(this_00 + 0xbf5),(int)&iStack_78);
    }
  }
  else {
    SetControlObjSI(this_00,'\x01');
  }
  if (((this_00[0xc0a] != CStack_63) || (this_00[0xbfc] != CStack_71)) &&
     (*(int *)(this_00 + 0x9c4) != 0)) {
    *(undefined4 *)(this_00 + 0x28) = 0x20;
    if (this_00[0xbfc] == (CPanelTy)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (uint)(byte)this_00[0xc0a];
    }
    *(uint *)(this_00 + 0x2c) = uVar5;
    FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x9c4),(undefined4 *)(this_00 + 0x18));
  }
  iVar4 = 3;
  bVar18 = true;
  pCVar14 = this_00 + 0xc0b;
  psVar16 = asStack_62;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar18 = *(short *)pCVar14 == *psVar16;
    pCVar14 = pCVar14 + 2;
    psVar16 = psVar16 + 1;
  } while (bVar18);
  if ((!bVar18) || (this_00[0xbfc] != CStack_71)) {
    uVar5 = 0;
    pCVar14 = this_00 + 0xb1f;
    do {
      if (*(int *)pCVar14 != 0) {
        *(undefined4 *)(this_00 + 0x28) = 0x20;
        if (this_00[0xbfc] == (CPanelTy)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (uint)(byte)this_00[uVar5 + 0xc0b];
        }
        *(uint *)(this_00 + 0x2c) = uVar7;
        FUN_006e6080(this_00,2,*(int *)pCVar14,(undefined4 *)(this_00 + 0x18));
      }
      uVar5 = uVar5 + 1;
      pCVar14 = pCVar14 + 4;
    } while (uVar5 < 6);
  }
  switch(*(undefined4 *)(this_00 + 0xbf5)) {
  case 0x53:
    CVar1 = this_00[0xc3c];
    if (CStack_31 == CVar1) {
      if (CVar1 == (CPanelTy)0x1) {
        Library::DKW::WGR::FUN_006b55f0
                  (*(undefined4 **)(this_00 + 0x194),0,0x5c,0x50,*(int *)(this_00 + 0x9e1),0,0x5c,10
                   ,0x32,0x19);
        PaintDamageXY(this_00,*(int *)(this_00 + 0x194),0x5c,0x50,
                      CONCAT31((int3)((uint)extraout_EDX >> 8),this_00[0xc3d]),0x2714);
        uVar5 = (uint)(*(int *)(this_00 + 0xc3d) * 0x21) / 100;
        uStack_8 = 0;
        if (uVar5 != 0) {
          iVar4 = 0x35;
          uStack_8 = uVar5;
          do {
            pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
            thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x7d,'\x01',pbVar6);
            iVar4 = iVar4 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        if (uStack_8 < 0x21) {
          iVar4 = uStack_8 * 4 + 0x35;
          do {
            pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
            thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x7d,'\x01',pbVar6);
            iVar4 = iVar4 + 4;
          } while (iVar4 < 0xb9);
        }
      }
      else if (CVar1 == (CPanelTy)0x2) {
        Library::DKW::WGR::FUN_006b55f0
                  (*(undefined4 **)(this_00 + 0x194),0,0x28,0x79,*(int *)(this_00 + 0x9e1),0,0x28,
                   0x33,0x9b,0xf);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,*(undefined4 *)(this_00 + 0xc3d));
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1bc),*(int *)(this_00 + 0x194),0,0x28,0x79,0x9b,
                         0xf);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1bc),&DAT_0080f33a,-1,-1,1);
      }
      else if (CVar1 == (CPanelTy)0x4) {
        if (this_00[0xc31] == CStack_3c) {
          if (this_00[0xc33] != CStack_3a) {
            Library::DKW::WGR::FUN_006b55f0
                      (*(undefined4 **)(this_00 + 0x194),0,0x5c,0x50,*(int *)(this_00 + 0x9e1),0,
                       0x5c,10,0x32,0x19);
            PaintPerResSI(this_00);
          }
        }
        else {
          PaintCtrlObjSI(this_00);
          SetControlObjSI(this_00,'\x01');
          thunk_FUN_00506040((int)this_00);
        }
      }
      if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                   *(uint *)(this_00 + 0xa8));
      }
      break;
    }
    goto LAB_0050ce3f;
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
    if (this_00[0xc31] == CStack_3c) {
      if (this_00[0xc31] == (CPanelTy)0x0) {
        if (*(short *)(this_00 + 0xc2f) != sStack_3e) {
          PaintCtrlObj(this_00,1);
          iVar4 = *(int *)(this_00 + 0x302);
          if (iVar4 != 0) {
            puVar17 = auStack_120;
            for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar17 = 0;
              puVar17 = puVar17 + 1;
            }
            uStack_110 = 5;
            FUN_006e6080(this_00,2,iVar4,auStack_120);
          }
        }
      }
      else if (this_00[0xc33] != CStack_3a) {
        Library::DKW::WGR::FUN_006b55f0
                  (*(undefined4 **)(this_00 + 0x194),0,0x5c,0x50,*(int *)(this_00 + 0x9e1),0,0x5c,10
                   ,0x32,0x19);
        PaintPerResSI(this_00);
        if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                     *(uint *)(this_00 + 0xa8));
        }
      }
      break;
    }
LAB_0050ce3f:
    PaintCtrlObjSI(this_00);
    SetControlObjSI(this_00,'\x01');
    thunk_FUN_00506040((int)this_00);
    break;
  case 0x5b:
    PaintArsenal(this_00);
    uVar5 = 0;
    do {
      if (*(int *)(this_00 + uVar5 * 4 + 0xa15) != 0) {
        if (uVar5 == 3) {
          if (this_00[0x9d4] == (CPanelTy)0x1) {
            this_00[0xaa2] = (CPanelTy)0x0;
            *(undefined4 *)(this_00 + 0x28) = 0x20;
            *(undefined4 *)(this_00 + 0x2c) = 0;
            uVar19 = *(undefined4 *)(this_00 + 0xa21);
          }
          else {
            this_00[0xaa2] = (CPanelTy)0x2;
            uVar19 = thunk_FUN_00525ef0((char)this_00[0x9d4] + '\x02',3);
            *(undefined4 *)(this_00 + 0xaa3) = uVar19;
            if (this_00[0xbfc] == CStack_71) {
              *(undefined4 *)(this_00 + 0x28) = 5;
              uVar19 = *(undefined4 *)(this_00 + 0xa21);
            }
            else {
              *(undefined4 *)(this_00 + 0x28) = 0x20;
              *(uint *)(this_00 + 0x2c) = (uint)(this_00[0xbfc] != (CPanelTy)0x0);
              uVar19 = *(undefined4 *)(this_00 + 0xa21);
            }
          }
        }
        else {
          uVar19 = thunk_FUN_00525ef0((char)this_00[0x9d4] + '\x02',(char)uVar5);
          *(undefined4 *)(this_00 + uVar5 * 0x27 + 0xa2e) = uVar19;
          if (this_00[0xbfc] == CStack_71) {
            *(undefined4 *)(this_00 + 0x28) = 5;
            uVar19 = *(undefined4 *)(this_00 + uVar5 * 4 + 0xa15);
          }
          else {
            *(undefined4 *)(this_00 + 0x28) = 0x20;
            *(uint *)(this_00 + 0x2c) = (uint)(this_00[0xbfc] != (CPanelTy)0x0);
            uVar19 = *(undefined4 *)(this_00 + uVar5 * 4 + 0xa15);
          }
        }
        FUN_006e6080(this_00,2,uVar19,(undefined4 *)(this_00 + 0x18));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 4);
    if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                 *(uint *)(this_00 + 0xa8));
    }
    break;
  case 0x5c:
    if (*(int *)(this_00 + 0xc12) == iStack_5b) {
      if (this_00[0xc24] != aCStack_49[0]) {
        uVar5 = ((uint)(byte)this_00[0xc24] * 0x21) / 100;
        uStack_8 = 0;
        if (uVar5 != 0) {
          iVar4 = 0x35;
          uStack_8 = uVar5;
          do {
            pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
            thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x7d,'\x01',pbVar6);
            iVar4 = iVar4 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        if (uStack_8 < 0x21) {
          iVar4 = uStack_8 * 4 + 0x35;
          do {
            pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
            thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x7d,'\x01',pbVar6);
            iVar4 = iVar4 + 4;
          } while (iVar4 < 0xb9);
        }
        Library::DKW::WGR::FUN_006b55f0
                  (*(undefined4 **)(this_00 + 0x194),0,0x5c,0x50,*(int *)(this_00 + 0x9e1),0,0x5c,10
                   ,0x3c,0x1e);
        PaintCostsXYSI(this_00,*(int *)(this_00 + 0x194),*(ushort *)(this_00 + 0xc1c),
                       *(ushort *)(this_00 + 0xc20),7,4);
        if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                     *(uint *)(this_00 + 0xa8));
        }
      }
    }
    else {
      PaintCtrlObjSI(this_00);
      SetControlObjSI(this_00,'\0');
      thunk_FUN_00506040((int)this_00);
    }
    break;
  case 0x5d:
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0,0x46,'\x01',*(byte **)(this_00 + 0x9e1));
    PaintBioSonar(this_00);
    break;
  case 0x5e:
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c28fc,(uint)*(ushort *)(this_00 + 0xc34));
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1c4),*(int *)(this_00 + 0x194),0,0x91,0x73,0x26,0xf);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1c4),&DAT_0080f33a,-1,-1,4);
    if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                 *(uint *)(this_00 + 0xa8));
    }
    break;
  case 0x61:
    if (this_00[0xc2a] != CStack_43) {
      uVar5 = ((uint)(byte)this_00[0xc2a] * 0x21) / 100;
      uStack_8 = 0;
      if (uVar5 != 0) {
        iVar4 = 0x35;
        uStack_8 = uVar5;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x5d,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (uStack_8 < 0x21) {
        iVar4 = uStack_8 * 4 + 0x35;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x5d,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
        } while (iVar4 < 0xb9);
      }
      pbVar6 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x9e1),
                                           0,0x15,0x22,0xc3,0xc,0);
      if (pbVar6 != (byte *)0x0) {
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c28e0,(uint)(byte)this_00[0xc2a]);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1b8),&DAT_0080f33a,-1,-1,5);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x15,0x68,'\x01',pbVar6);
        ccFntTy::EraseSufr(*(ccFntTy **)(this_00 + 0x1b8));
      }
      if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                   *(uint *)(this_00 + 0xa8));
      }
    }
    if (this_00[0xc29] != CStack_44) {
      uVar5 = (uint)(byte)this_00[0xc29];
      uStack_8 = 0;
      if (uVar5 != 0) {
        iVar4 = 0x35;
        uStack_8 = uVar5;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x7d,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (uStack_8 < 0x21) {
        iVar4 = uStack_8 * 4 + 0x35;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x7d,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
        } while (iVar4 < 0xb9);
      }
      if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                   *(uint *)(this_00 + 0xa8));
      }
    }
    break;
  case 0x62:
    if ((*(int *)(this_00 + 0xc12) != iStack_5b) || (*(int *)(this_00 + 0xc16) != iStack_57)) {
      pbVar6 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(this_00 + 0x1c4),*(int *)(this_00 + 0x9f5),
                                           0,0x7f,0x20,0x24,0xb,0);
      if (pbVar6 != (byte *)0x0) {
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,*(undefined4 *)(this_00 + 0xc12));
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1c4),&DAT_0080f33a,-1,-1,5);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x7f,0x66,'\x01',pbVar6);
        ccFntTy::EraseSufr(*(ccFntTy **)(this_00 + 0x1c4));
      }
      pbVar6 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(this_00 + 0x1c4),*(int *)(this_00 + 0x9f5),
                                           0,0xa5,9,0x24,0xb,0);
      if (pbVar6 != (byte *)0x0) {
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,*(undefined4 *)(this_00 + 0xc16));
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1c4),&DAT_0080f33a,-1,-1,4);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0xa5,0x4f,'\x01',pbVar6);
        ccFntTy::EraseSufr(*(ccFntTy **)(this_00 + 0x1c4));
      }
      uVar5 = *(uint *)(this_00 + 0xc16);
      if (uVar5 < *(uint *)(this_00 + 0xc12)) {
        uVar5 = 0x21;
      }
      else if (uVar5 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(uint *)(this_00 + 0xc12) * 0x21) / uVar5;
      }
      uStack_8 = 0;
      if (uVar5 != 0) {
        iVar4 = 0x35;
        uStack_8 = uVar5;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x7d,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (uStack_8 < 0x21) {
        iVar4 = uStack_8 * 4 + 0x35;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x7d,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
        } while (iVar4 < 0xb9);
      }
      if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                   *(uint *)(this_00 + 0xa8));
      }
    }
    break;
  case 99:
    if (*(int *)(this_00 + 0xc12) != iStack_5b) {
      PaintCtrlObjSI(this_00);
      iVar4 = *(int *)(this_00 + 0x302);
      if (iVar4 != 0) {
        puVar17 = auStack_e0;
        for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar17 = 0;
          puVar17 = puVar17 + 1;
        }
        uStack_d0 = 5;
        FUN_006e6080(this_00,2,iVar4,auStack_e0);
      }
      break;
    }
    if (this_00[0xc24] != aCStack_49[0]) {
      uVar5 = ((uint)(byte)this_00[0xc24] * 0x21) / 100;
      uStack_8 = 0;
      if (uVar5 != 0) {
        iVar4 = 0x35;
        uStack_8 = uVar5;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x7d,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (uStack_8 < 0x21) {
        iVar4 = uStack_8 * 4 + 0x35;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x7d,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
        } while (iVar4 < 0xb9);
      }
      if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                   *(uint *)(this_00 + 0xa8));
      }
    }
    if (((*(ushort *)(this_00 + 0xc1c) == uStack_51) && (*(ushort *)(this_00 + 0xc20) == uStack_4d))
       || (pbVar6 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(this_00 + 0x1c4),
                                                *(int *)(this_00 + 0x9dd),0,100,0x13,0x18,0xc,0),
          pbVar6 == (byte *)0x0)) break;
    if (*(ushort *)(this_00 + 0xc1c) != uStack_51) {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,(uint)*(ushort *)(this_00 + 0xc1c));
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1c4),&DAT_0080f33a,-1,-1,7);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),100,0x59,'\x01',pbVar6);
      if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                   *(uint *)(this_00 + 0xa8));
      }
    }
    if (*(ushort *)(this_00 + 0xc20) != uStack_4d) {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,(uint)*(ushort *)(this_00 + 0xc20));
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1c4),&DAT_0080f33a,-1,-1,5);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0xaf,0x59,'\x01',pbVar6);
      if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                   *(uint *)(this_00 + 0xa8));
      }
    }
    this_01 = *(ccFntTy **)(this_00 + 0x1c4);
    goto LAB_0050dfdc;
  case 100:
    if ((*(int *)(this_00 + 0xc12) != iStack_5b) || (*(int *)(this_00 + 0xc16) != iStack_57)) {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,*(int *)(this_00 + 0xc12));
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1c4),*(int *)(this_00 + 0x194),0,0x66,0x65,0x24,0xb
                      );
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1c4),&DAT_0080f33a,-1,-1,7);
      if (*(uint *)(this_00 + 0xc16) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (uint)(*(int *)(this_00 + 0xc12) * 0x21) / *(uint *)(this_00 + 0xc16);
      }
      uStack_8 = 0;
      if (uVar5 != 0) {
        iVar4 = 0x35;
        uStack_8 = uVar5;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x7d,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (uStack_8 < 0x21) {
        iVar4 = uStack_8 * 4 + 0x35;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x7d,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
        } while (iVar4 < 0xb9);
      }
      if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                   *(uint *)(this_00 + 0xa8));
      }
    }
    break;
  case 0x67:
  case 0x68:
    if (this_00[0xc11] != CStack_5c) {
      uVar5 = 0;
      if (this_00[0xc11] != (CPanelTy)0x0) {
        iVar4 = 0x35;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x52,'\x01',pbVar6);
          uVar5 = uVar5 + 1;
          iVar4 = iVar4 + 4;
        } while (uVar5 < (byte)this_00[0xc11]);
      }
      if (uVar5 < 0x21) {
        iVar4 = uVar5 * 4 + 0x35;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x52,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
        } while (iVar4 < 0xb9);
      }
      if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                   *(uint *)(this_00 + 0xa8));
      }
    }
    if (*(int *)(this_00 + 0xc12) != iStack_5b) {
      uVar5 = 0;
      if (*(int *)(this_00 + 0xc12) != 0) {
        iVar4 = 0x35;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x73,'\x01',pbVar6);
          uVar5 = uVar5 + 1;
          iVar4 = iVar4 + 4;
        } while (uVar5 < *(uint *)(this_00 + 0xc12));
      }
      if (uVar5 < 0x21) {
        iVar4 = uVar5 * 4 + 0x35;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x73,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
        } while (iVar4 < 0xb9);
      }
      if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                   *(uint *)(this_00 + 0xa8));
      }
    }
    break;
  case 0x6d:
    uStack_8 = 0;
    uStack_c = 99;
    uStack_14 = 0x2c;
    piStack_1c = &iStack_5b;
    pCStack_10 = this_00 + 0xc12;
    do {
      uVar7 = uStack_8;
      uVar5 = uStack_14;
      if (*piStack_1c != *(int *)pCStack_10) {
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),uStack_14 - 2,0x55,'\x01',
                           *(byte **)(this_00 + 0xa11));
        uVar9 = thunk_FUN_00526ba0(*(int *)pCStack_10,(char)this_00[uVar7 + 0xc1a]);
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2c2),uVar9);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),uVar5,0x57,'\x01',pbVar6);
        if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                     *(uint *)(this_00 + 0xa8));
        }
      }
      if (aCStack_49[uVar7] != this_00[uVar7 + 0xc24]) {
        uStack_18 = 0;
        uVar5 = (byte)this_00[uVar7 + 0xc24] / 10;
        if (uVar5 != 0) {
          iVar4 = 0x7e;
          uStack_18 = uVar5;
          do {
            pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),7);
            thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),uStack_c,iVar4,'\x01',pbVar6);
            iVar4 = iVar4 + -4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        if (uStack_18 < 10) {
          iVar4 = uStack_18 * -4 + 0x7e;
          iVar10 = 10 - uStack_18;
          do {
            pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),8);
            thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),uStack_c,iVar4,'\x01',pbVar6);
            iVar4 = iVar4 + -4;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                     *(uint *)(this_00 + 0xa8));
        }
      }
      pCStack_10 = pCStack_10 + 4;
      piStack_1c = piStack_1c + 1;
      uStack_14 = uStack_14 + 0x65;
      uStack_8 = uStack_8 + 1;
      uStack_c = uStack_c + 0x1a;
    } while ((int)uStack_14 < 0xf6);
    wsprintfA((LPSTR)&DAT_0080f33a,s__d_____d_007c28d4,(uint)(byte)this_00[0xc24],
              (uint)(byte)this_00[0xc25]);
    pbVar6 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x9dd),0,
                                         0x5f,7,0x2f,0xb,0);
    if (pbVar6 == (byte *)0x0) break;
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1b8),&DAT_0080f33a,-1,-1,5);
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x5f,0x4d,'\x01',pbVar6);
    this_01 = *(ccFntTy **)(this_00 + 0x1b8);
LAB_0050dfdc:
    ccFntTy::EraseSufr(this_01);
    break;
  case 0x6e:
    if (*(int *)(this_00 + 0xc12) == iStack_5b) {
      if (*(int *)(this_00 + 0xc12) == 0) {
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,(uint)*(ushort *)(this_00 + 0xc2f));
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1c4),*(int *)(this_00 + 0x194),0,0x1c,0x58,0xb7,
                         0xf);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1c4),&DAT_0080f33a,-1,-1,5);
      }
      else if (this_00[0xc24] != aCStack_49[0]) {
        uVar5 = ((uint)(byte)this_00[0xc24] * 0x21) / 100;
        uStack_8 = 0;
        if (uVar5 != 0) {
          iVar4 = 0x35;
          uStack_8 = uVar5;
          do {
            pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
            thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x7d,'\x01',pbVar6);
            iVar4 = iVar4 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        if (uStack_8 < 0x21) {
          iVar4 = uStack_8 * 4 + 0x35;
          do {
            pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
            thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x7d,'\x01',pbVar6);
            iVar4 = iVar4 + 4;
          } while (iVar4 < 0xb9);
        }
        if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                     *(uint *)(this_00 + 0xa8));
        }
      }
    }
    else {
      PaintCtrlObjSI(this_00);
      iVar4 = *(int *)(this_00 + 0x302);
      if (iVar4 != 0) {
        puVar17 = auStack_100;
        for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar17 = 0;
          puVar17 = puVar17 + 1;
        }
        uStack_f0 = 5;
        FUN_006e6080(this_00,2,iVar4,auStack_100);
      }
    }
    break;
  case 0x70:
  case 0x72:
  case 0x73:
    if (this_00[0xc29] != CStack_44) {
      uVar5 = (uint)(byte)this_00[0xc29];
      uStack_8 = 0;
      uStack_14 = uVar5;
      if (uVar5 != 0) {
        iVar4 = 0x35;
        uStack_8 = uVar5;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x7d,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (uStack_8 < 0x21) {
        iVar4 = uStack_8 * 4 + 0x35;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar4,0x7d,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
        } while (iVar4 < 0xb9);
      }
      pbVar6 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x9e1),
                                           0,0x24,6,0xa4,0x2b,0);
      if (pbVar6 != (byte *)0x0) {
        iVar21 = -1;
        iVar20 = -1;
        uVar19 = 5;
        iVar10 = -1;
        iVar4 = -1;
        puVar8 = (uint *)FUN_006b0140(0x36c4 - (uStack_14 < 0x21),DAT_00807618);
        ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),puVar8,iVar4,iVar10,uVar19,iVar20,iVar21);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x24,0x4c,'\x01',pbVar6);
        ccFntTy::EraseSufr(*(ccFntTy **)(this_00 + 0x1b8));
      }
      if (-1 < (int)*(uint *)(this_00 + 0x15c)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x15c),0xffffffff,*(uint *)(this_00 + 0x50),
                   *(uint *)(this_00 + 0xa8));
      }
    }
  }
  if (*(int *)(this_00 + 0xc4d) == iStack_20) {
    g_currentExceptionFrame = IStack_c0.previous;
    return;
  }
  PaintIDSObj(this_00);
  g_currentExceptionFrame = IStack_c0.previous;
  return;
switchD_0050c9ae_caseD_dd:
  PaintCtrlObjSI(this_00);
  iVar4 = *(int *)(this_00 + 0x302);
  if (iVar4 == 0) {
    g_currentExceptionFrame = IStack_c0.previous;
    return;
  }
  puVar17 = auStack_140;
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar17 = 0;
    puVar17 = puVar17 + 1;
  }
  uStack_130 = 5;
  FUN_006e6080(this_00,2,iVar4,auStack_140);
  g_currentExceptionFrame = IStack_c0.previous;
  return;
}

