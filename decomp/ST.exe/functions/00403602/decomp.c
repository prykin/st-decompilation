
void __thiscall CPanelTy::SetControlObjSI(CPanelTy *this,char param_1)

{
  code *pcVar1;
  CPanelTy *this_00;
  int iVar2;
  char *pcVar3;
  LPSTR pCVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  CPanelTy CVar8;
  uint uVar9;
  byte bVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  CPanelTy *pCVar11;
  int iVar12;
  bool bVar13;
  undefined4 uVar14;
  short sVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  char *pcVar21;
  undefined4 auStack_84c [68];
  undefined4 auStack_73c [5];
  undefined4 auStack_728 [307];
  undefined4 auStack_25c [84];
  InternalExceptionFrame IStack_10c;
  undefined4 auStack_c8 [4];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 *puStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 auStack_70 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_28;
  undefined4 *puStack_24;
  CPanelTy *pCStack_20;
  CPanelTy *pCStack_1c;
  uint uStack_18;
  CPanelTy *pCStack_14;
  CPanelTy *pCStack_10;
  uint uStack_c;
  CPanelTy *pCStack_8;
  
  IStack_10c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_10c;
  pCStack_20 = this;
  iVar2 = __setjmp3(IStack_10c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = IStack_10c.previous;
    iVar12 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x94e,0,iVar2,
                                &DAT_007a4ccc,s_CPanelTy__SetControlObjSI_007c2920);
    if (iVar12 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x94e);
    return;
  }
  if (param_1 != '\0') {
    thunk_FUN_0054a8d0(DAT_00802a30);
  }
  this_00 = pCStack_20;
  if (*(uint *)(pCStack_20 + 0x302) != 0) {
    FUN_006e56b0(*(void **)(pCStack_20 + 0xc),*(uint *)(pCStack_20 + 0x302));
  }
  *(undefined4 *)(this_00 + 0x302) = 0;
  if (*(uint *)(this_00 + 0x30c) != 0) {
    FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0x30c));
  }
  *(undefined4 *)(this_00 + 0x30c) = 0;
  if (*(uint *)(this_00 + 0x314) != 0) {
    FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0x314));
  }
  *(undefined4 *)(this_00 + 0x314) = 0;
  if (*(uint *)(this_00 + 0x318) != 0) {
    FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0x318));
  }
  *(undefined4 *)(this_00 + 0x318) = 0;
  if (*(uint *)(this_00 + 0x9d0) != 0) {
    FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0x9d0));
  }
  *(undefined4 *)(this_00 + 0x9d0) = 0;
  pCVar11 = this_00 + 0xa15;
  iVar2 = 6;
  do {
    if (*(uint *)pCVar11 != 0) {
      FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)pCVar11);
      *(uint *)pCVar11 = 0;
    }
    pCVar11 = pCVar11 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pCVar11 = this_00 + 0xb1f;
  iVar2 = 6;
  do {
    if (*(uint *)pCVar11 != 0) {
      FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)pCVar11);
      *(uint *)pCVar11 = 0;
    }
    pCVar11 = pCVar11 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(uint *)(this_00 + 0xb37) != 0) {
    FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0xb37));
  }
  CVar8 = this_00[0xbfa];
  *(undefined4 *)(this_00 + 0xb37) = 0;
  if (((CVar8 == (CPanelTy)0x0) || (CVar8 == (CPanelTy)0x3)) || (CVar8 == (CPanelTy)0x4)) {
    if (*(int *)(this_00 + 0x9c4) != 0) {
      *(undefined4 *)(this_00 + 0x2c) = 0;
      *(undefined4 *)(this_00 + 0x28) = 0x20;
      FUN_006e6080(this_00,2,*(int *)(this_00 + 0x9c4),(undefined4 *)(this_00 + 0x18));
      g_currentExceptionFrame = IStack_10c.previous;
      return;
    }
    g_currentExceptionFrame = IStack_10c.previous;
    return;
  }
  uStack_18 = uStack_18 & 0xffffff00;
  puVar6 = auStack_70;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  pCStack_1c = this_00 + 0x86a;
  pCStack_8 = this_00 + 0xbfe;
  pCVar11 = (CPanelTy *)(-0xbfe - (int)this_00);
  pCStack_10 = pCVar11;
  do {
    if (*pCStack_8 != (CPanelTy)0x0) {
      pCStack_14 = pCStack_8 + (int)pCVar11;
      iVar12 = 0xc;
      iVar2 = 0xd;
      if (pCStack_14 == (CPanelTy *)0x1) {
        iVar12 = 0x49;
      }
      else if (pCStack_14 == (CPanelTy *)0x2) {
        iVar12 = 0xc;
        iVar2 = 0x27;
      }
      else if (pCStack_14 == (CPanelTy *)0x3) {
        iVar12 = 0x49;
        iVar2 = 0x27;
      }
      thunk_FUN_004f17d0(this_00,0,(byte)uStack_18);
      if (this_00[0xbfc] == (CPanelTy)0x0) {
        uStack_c = 0;
      }
      else {
        uStack_c = (uint)(byte)pCStack_8[6];
      }
      pcVar21 = (char *)0x0;
      uVar20 = 0;
      uVar19 = 1;
      iVar18 = 0;
      pCVar11 = pCStack_1c;
      pcVar3 = thunk_FUN_00529590(*pCStack_8,*(int *)(this_00 + 0xbf5));
      pCVar4 = thunk_FUN_00571240(pcVar3,iVar18);
      SetButStruct(this_00,auStack_84c + iStack_28 * 0x5f,5,uStack_c,iVar12,iVar2,6,pCVar4,uVar19,
                   uVar20,pCVar11,pcVar21);
      pCVar11 = pCStack_14;
      iVar12 = iStack_28;
      iVar2 = *(int *)(this_00 + 0x2de);
      auStack_73c[iStack_28 * 0x5f] = 1;
      uVar5 = FUN_0070b3a0(iVar2,(int)pCVar11);
      pCVar11 = pCStack_10;
      auStack_728[iVar12 * 0x5f] = uVar5;
      auStack_728[iVar12 * 0x5f + 1] = 0x3c;
      iStack_28 = iStack_28 + 1;
    }
    bVar10 = (char)uStack_18 + 1;
    pCStack_1c = pCStack_1c + 0x27;
    pCStack_8 = pCStack_8 + 1;
    uStack_18 = CONCAT31(uStack_18._1_3_,bVar10);
  } while (bVar10 < 4);
  uStack_60 = *(undefined4 *)(this_00 + 8);
  puStack_24 = auStack_84c;
  auStack_70[0] = 1;
  auStack_70[1] = 0xffffffff;
  uStack_5c = 2;
  uStack_58 = 0xb20f;
  uStack_3c = 2;
  uStack_38 = 0xb210;
  uStack_40 = uStack_60;
  (**(code **)(**(int **)(this_00 + 0xc) + 8))(9,this_00 + 0x302,0,auStack_70,0);
  thunk_FUN_004f1610(this_00,'\0');
  if (*(int *)(this_00 + 0x9c4) != 0) {
    *(undefined4 *)(this_00 + 0x28) = 0x20;
    if (this_00[0xbfc] == (CPanelTy)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)(byte)this_00[0xc0a];
    }
    *(uint *)(this_00 + 0x2c) = uVar9;
    FUN_006e6080(this_00,2,*(int *)(this_00 + 0x9c4),(undefined4 *)(this_00 + 0x18));
  }
  if (this_00[0xbfb] == (CPanelTy)0x2) {
LAB_0050eb47:
    uVar17 = 0;
    uVar16 = 0;
    iVar12 = 0;
    pcVar3 = (char *)0x0;
    iVar2 = 0;
    uVar19 = 0;
    sVar15 = 0;
    uVar14 = 0xb13f;
    uVar5 = 0xb12f;
    pCVar4 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
    uVar9 = (uint)(this_00[0xbfc] != (CPanelTy)0x0);
  }
  else {
    switch(*(undefined4 *)(this_00 + 0xbf5)) {
    case 0x53:
      if (this_00[0xc3c] != (CPanelTy)0x1) {
        g_currentExceptionFrame = IStack_10c.previous;
        return;
      }
      uVar17 = 0;
      uVar16 = 0;
      iVar12 = 0;
      pcVar3 = (char *)0x0;
      iVar2 = 0;
      uVar19 = 0;
      sVar15 = 0;
      uVar14 = 0xb13f;
      uVar5 = 0xb12f;
      pCVar4 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
      uVar9 = (uint)(this_00[0xbfc] != (CPanelTy)0x0);
      break;
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
      if (this_00[0xc31] == (CPanelTy)0x0) {
        g_currentExceptionFrame = IStack_10c.previous;
        return;
      }
      goto LAB_0050eb47;
    case 0x5b:
      uStack_c = 2;
      puVar6 = auStack_c8;
      for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      puVar6 = auStack_25c;
      for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      pCStack_10 = (CPanelTy *)(*(int *)(this_00 + 0x50) + 0x23);
      iVar12 = 0;
      pCStack_14 = *(CPanelTy **)(this_00 + 0x138);
      puVar6 = auStack_25c + 1;
      iVar2 = 0;
      do {
        pCVar11 = pCStack_10;
        puVar6[-1] = iVar2 + 1;
        *puVar6 = 0;
        puVar6[2] = pCVar11;
        bVar13 = pCStack_14 != (CPanelTy *)0x0;
        puVar6[4] = 0x1d;
        iVar18 = DAT_00806734;
        if (bVar13) {
          iVar18 = *(int *)(this_00 + 0xa8);
        }
        puVar6[3] = iVar18 + 0x59 + iVar12;
        puVar6[5] = 0x11;
        puVar6[0x11] = 0;
        puVar6[0x15] = 0x101;
        puVar6[10] = 0x101;
        puVar6[0x16] = 3;
        puVar6[0xb] = 3;
        puVar6[0xc] = 0x4201;
        puVar6[0x17] = 0x4202;
        *(undefined2 *)(puVar6 + 0x18) = 0;
        *(undefined2 *)(puVar6 + 0xd) = 0;
        *(undefined2 *)((int)puVar6 + 0x62) = 2;
        *(undefined2 *)((int)puVar6 + 0x36) = 2;
        if (iVar2 == 0) {
          uVar5 = 0x3aa9;
LAB_0050edc5:
          puVar6[0x19] = uVar5;
          puVar6[0xe] = uVar5;
        }
        else if (iVar2 == 1) {
          uVar5 = 0x3aaa;
          goto LAB_0050edc5;
        }
        iVar12 = iVar12 + 0x12;
        puVar6 = puVar6 + 0x1c;
        uStack_c = uStack_c + -1;
        iVar2 = iVar2 + 1;
        if (uStack_c == 0) {
          uStack_7c = (uint)(byte)this_00[0x9d4];
          puStack_80 = auStack_25c;
          uStack_b8 = *(undefined4 *)(this_00 + 8);
          auStack_c8[0] = 1;
          auStack_c8[1] = 1;
          uStack_78 = 1;
          uStack_74 = 1;
          uStack_b4 = 2;
          uStack_b0 = 0xb207;
          uStack_94 = 2;
          uStack_90 = 0xb206;
          uStack_98 = uStack_b8;
          (**(code **)(**(int **)(this_00 + 0xc) + 8))(5,this_00 + 0x9d0,0,auStack_c8,0);
          pCStack_8 = (CPanelTy *)((uint)pCStack_8 & 0xffffff00);
          pCVar11 = this_00 + 0xa2d;
          for (iVar2 = 0x3a; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(undefined4 *)pCVar11 = 0;
            pCVar11 = pCVar11 + 4;
          }
          *(undefined2 *)pCVar11 = 0;
          do {
            if ((this_00[0x9d4] == (CPanelTy)0x1) && ((char)pCStack_8 == '\x03')) {
              CVar8 = (CPanelTy)0x0;
            }
            else {
              CVar8 = (CPanelTy)0x2;
            }
            uVar9 = (uint)pCStack_8 & 0xff;
            pCStack_10 = this_00 + uVar9 * 0x27;
            pCVar11 = pCStack_10 + 0xa2d;
            *pCVar11 = CVar8;
            uVar5 = thunk_FUN_00525ef0((char)this_00[0x9d4] + '\x02',(char)pCStack_8);
            *(undefined4 *)(pCStack_10 + 0xa2e) = uVar5;
            if ((this_00[0x9d4] == (CPanelTy)0x1) && ((char)pCStack_8 == '\x03')) {
              uVar7 = 0;
            }
            else {
              uVar7 = (uint)(this_00[0xbfc] != (CPanelTy)0x0);
            }
            uVar5 = CreateBut(this_00,5,0,uVar7,0xba,uVar9 * 0xb + 0x55,0,0,uVar9 + 0xb18f,
                              uVar9 + 0xb19f,1,0,(int)pCVar11,(char *)0x0,0x11,10,0);
            *(undefined4 *)(this_00 + uVar9 * 4 + 0xa15) = uVar5;
            bVar10 = (char)pCStack_8 + 1;
            pCStack_8 = (CPanelTy *)CONCAT31(pCStack_8._1_3_,bVar10);
          } while (bVar10 < 4);
          g_currentExceptionFrame = IStack_10c.previous;
          return;
        }
      } while( true );
    case 0x5c:
      if (*(int *)(this_00 + 0xc12) == 0) {
        g_currentExceptionFrame = IStack_10c.previous;
        return;
      }
      uVar17 = 0;
      uVar16 = 0;
      iVar12 = 0;
      pcVar3 = (char *)0x0;
      iVar2 = 0;
      uVar19 = 0;
      sVar15 = 0;
      uVar14 = 0xb13f;
      uVar5 = 0xb12f;
      pCVar4 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
      uVar9 = (uint)(this_00[0xbfc] != (CPanelTy)0x0);
      break;
    default:
      g_currentExceptionFrame = IStack_10c.previous;
      return;
    case 0x67:
    case 0x68:
      if (this_00[0xbfc] == (CPanelTy)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (uint)(byte)this_00[0xc0b];
      }
      uVar5 = CreateBut(this_00,5,0,uVar9,0x1a,0x5d,1,0x7c2300,0xb211,0xb212,0,0,0,(char *)0x0,0,0,0
                       );
      *(undefined4 *)(this_00 + 0xb1f) = uVar5;
      if (this_00[0xbfc] == (CPanelTy)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (uint)(byte)this_00[0xc0c];
      }
      uVar5 = CreateBut(this_00,5,0,uVar9,0xba,0x5d,1,0x7c22e4,0xb213,0xb214,0,0,0,(char *)0x0,0,0,0
                       );
      *(undefined4 *)(this_00 + 0xb23) = uVar5;
      g_currentExceptionFrame = IStack_10c.previous;
      return;
    case 0x6d:
      uVar5 = CreateBut(this_00,5,0,(uint)(this_00[0xbfc] != (CPanelTy)0x0),0x2a,0x7b,1,0x7c2300,
                        0xb211,0xb212,0,0,0,(char *)0x0,0,0,0);
      *(undefined4 *)(this_00 + 0xb1f) = uVar5;
      uVar5 = CreateBut(this_00,5,0,(uint)(this_00[0xbfc] != (CPanelTy)0x0),0x45,0x7b,1,0x7c22e4,
                        0xb213,0xb214,0,0,0,(char *)0x0,0,0,0);
      *(undefined4 *)(this_00 + 0xb23) = uVar5;
      uVar5 = CreateBut(this_00,5,0,(uint)(this_00[0xbfc] != (CPanelTy)0x0),0x8f,0x7b,1,0x7c2300,
                        0xb215,0xb216,0,0,0,(char *)0x0,0,0,0);
      *(undefined4 *)(this_00 + 0xb27) = uVar5;
      uVar5 = CreateBut(this_00,5,0,(uint)(this_00[0xbfc] != (CPanelTy)0x0),0xaa,0x7b,1,0x7c22e4,
                        0xb217,0xb218,0,0,0,(char *)0x0,0,0,0);
      *(undefined4 *)(this_00 + 0xb2b) = uVar5;
      uVar5 = CreateBut(this_00,5,0,(uint)(this_00[0xbfc] != (CPanelTy)0x0),0x17,100,0,0,0xb219,
                        0xb21a,0,0,0,(char *)0x0,0x11,10,0);
      *(undefined4 *)(this_00 + 0xb2f) = uVar5;
      uVar5 = CreateBut(this_00,5,0,(uint)(this_00[0xbfc] != (CPanelTy)0x0),0xc5,100,0,0,0xb21b,
                        0xb21c,0,0,0,(char *)0x0,0x11,10,0);
      *(undefined4 *)(this_00 + 0xb33) = uVar5;
      g_currentExceptionFrame = IStack_10c.previous;
      return;
    }
  }
  uVar5 = CreateBut(this_00,5,0,uVar9,0x9a,0x59,1,(int)pCVar4,uVar5,uVar14,sVar15,uVar19,iVar2,
                    pcVar3,iVar12,uVar16,uVar17);
  *(undefined4 *)(this_00 + 0x314) = uVar5;
  g_currentExceptionFrame = IStack_10c.previous;
  return;
}

