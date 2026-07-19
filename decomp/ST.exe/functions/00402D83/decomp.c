
void __thiscall CPanelTy::SetControlObj(CPanelTy *this,char param_1)

{
  CPanelTy CVar1;
  code *pcVar2;
  CPanelTy *this_00;
  char cVar3;
  int iVar4;
  char *pcVar5;
  LPSTR pCVar6;
  undefined4 *puVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  CPanelTy *pCVar11;
  int iVar12;
  CPanelTy *pCVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  short sVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  char *pcVar22;
  undefined4 auStack_b44 [68];
  undefined4 auStack_a34 [502];
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
  CPanelTy *pCStack_18;
  int iStack_14;
  uint uStack_10;
  CPanelTy *pCStack_c;
  CPanelTy *pCStack_8;
  
  IStack_10c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_10c;
  pCStack_20 = this;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_10c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = IStack_10c.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x53e,0,iVar4,
                                &DAT_007a4ccc,s_CPanelTy__SetControlObj_007c2898);
    if (iVar10 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x53e);
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
  pCVar11 = this_00 + 0x314;
  *(undefined4 *)(this_00 + 0x30c) = 0;
  pCStack_18 = pCVar11;
  if (*(uint *)(this_00 + 0x314) != 0) {
    FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0x314));
  }
  *(undefined4 *)pCVar11 = 0;
  if (*(uint *)(this_00 + 0x318) != 0) {
    FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0x318));
  }
  *(undefined4 *)(this_00 + 0x318) = 0;
  if (*(uint *)(this_00 + 0x9d0) != 0) {
    FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0x9d0));
  }
  *(undefined4 *)(this_00 + 0x9d0) = 0;
  pCVar11 = this_00 + 0xa15;
  iVar4 = 6;
  do {
    if (*(uint *)pCVar11 != 0) {
      FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)pCVar11);
      *(uint *)pCVar11 = 0;
    }
    pCVar11 = pCVar11 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  CVar1 = this_00[0xbfa];
  if (((CVar1 == (CPanelTy)0x0) || (CVar1 == (CPanelTy)0x3)) || (CVar1 == (CPanelTy)0x4)) {
    if (*(int *)(this_00 + 0x9c4) != 0) {
      *(undefined4 *)(this_00 + 0x28) = 0x20;
      *(undefined4 *)(this_00 + 0x2c) = 0;
      FUN_006e6080(this_00,2,*(int *)(this_00 + 0x9c4),(undefined4 *)(this_00 + 0x18));
    }
  }
  else {
    uStack_10 = uStack_10 & 0xffffff00;
    puVar7 = auStack_70;
    for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    pCStack_c = this_00 + 0x86a;
    pCStack_1c = this_00 + 0xbfe;
    iVar4 = -0xbff - (int)this_00;
    iStack_14 = iVar4;
    do {
      if (*pCStack_1c == (CPanelTy)0x0) goto LAB_00509a02;
      iVar12 = 0xe;
      iVar10 = 0xf;
      switch(pCStack_1c + iVar4) {
      case (CPanelTy *)0x0:
        iVar12 = 0x4b;
        break;
      case (CPanelTy *)0x1:
        iVar12 = 0x88;
        break;
      case (CPanelTy *)0x2:
        goto switchD_00509942_caseD_2;
      case (CPanelTy *)0x3:
        iVar12 = 0x88;
        goto switchD_00509942_caseD_2;
      case (CPanelTy *)0x4:
        iVar12 = 0x4b;
switchD_00509942_caseD_2:
        iVar10 = 0x37;
      }
      thunk_FUN_004f17d0(this_00,0,(byte)uStack_10);
      if (this_00[0xbfc] == (CPanelTy)0x0) {
        pCStack_8 = (CPanelTy *)0x0;
      }
      else {
        pCStack_8 = (CPanelTy *)(uint)(byte)pCStack_1c[6];
      }
      pcVar22 = (char *)0x0;
      uVar21 = 0;
      uVar20 = 1;
      iVar4 = 0;
      pCVar11 = pCStack_c;
      pcVar5 = thunk_FUN_00529590(*pCStack_1c,*(int *)(this_00 + 0xbf5));
      pCVar6 = thunk_FUN_00571240(pcVar5,iVar4);
      SetButStruct(this_00,auStack_b44 + iStack_28 * 0x5f,5,pCStack_8,iVar12,iVar10,1,pCVar6,uVar20,
                   uVar21,pCVar11,pcVar22);
      iVar4 = iStack_28 * 0x5f;
      iStack_28 = iStack_28 + 1;
      auStack_a34[iVar4] = 1;
      iVar4 = iStack_14;
LAB_00509a02:
      bVar9 = (char)uStack_10 + 1;
      pCStack_c = pCStack_c + 0x27;
      pCStack_1c = pCStack_1c + 1;
      uStack_10 = CONCAT31(uStack_10._1_3_,bVar9);
    } while (bVar9 < 6);
    uStack_60 = *(undefined4 *)(this_00 + 8);
    puStack_24 = auStack_b44;
    auStack_70[0] = 1;
    auStack_70[1] = 0xffffffff;
    uStack_5c = 2;
    uStack_58 = 0xb203;
    uStack_3c = 2;
    uStack_38 = 0xb204;
    uStack_40 = uStack_60;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(9,this_00 + 0x302,0,auStack_70,0);
    thunk_FUN_004f1610(this_00,'\0');
    if (*(int *)(this_00 + 0x9c4) != 0) {
      *(undefined4 *)(this_00 + 0x28) = 0x20;
      if (this_00[0xbfc] == (CPanelTy)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)(byte)this_00[0xc0a];
      }
      *(uint *)(this_00 + 0x2c) = uVar8;
      FUN_006e6080(this_00,2,*(int *)(this_00 + 0x9c4),(undefined4 *)(this_00 + 0x18));
    }
    if (this_00[0xbfb] == (CPanelTy)0x2) {
LAB_00509b60:
      uVar19 = 0;
      uVar18 = 0;
      iVar10 = 0;
      pcVar5 = (char *)0x0;
      iVar4 = 0;
      uVar20 = 0;
      sVar16 = 0;
      uVar15 = 0xb13f;
      uVar14 = 0xb12f;
      pCVar6 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
      uVar14 = CreateBut(this_00,5,0,(uint)(this_00[0xbfc] != (CPanelTy)0x0),0x92,0x6e,1,(int)pCVar6
                         ,uVar14,uVar15,sVar16,uVar20,iVar4,pcVar5,iVar10,uVar18,uVar19);
      *(undefined4 *)pCStack_18 = uVar14;
      g_currentExceptionFrame = IStack_10c.previous;
      return;
    }
    switch(*(undefined4 *)(this_00 + 0xbf5)) {
    case 0x32:
    case 0x40:
    case 0x44:
    case 0x49:
      if (*(int *)(this_00 + 0xc12) != 0) goto LAB_00509b60;
      break;
    case 0x33:
      iVar4 = 0xb12f;
      pCStack_c = (CPanelTy *)0x4c;
      pCStack_8 = (CPanelTy *)0x2;
      pCVar11 = pCStack_18;
      do {
        if (*(int *)(pCVar11 + 0x8fe) != 0) {
          uVar18 = 0;
          uVar15 = 0;
          iVar17 = 0;
          pcVar5 = (char *)0x0;
          iVar12 = 0;
          uVar20 = 0;
          sVar16 = 0;
          uVar14 = 0xb13f;
          iVar10 = iVar4;
          pCVar6 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
          uVar14 = CreateBut(this_00,5,0,(uint)(this_00[0xbfc] != (CPanelTy)0x0),0x92,(int)pCStack_c
                             ,1,(int)pCVar6,iVar10,uVar14,sVar16,uVar20,iVar12,pcVar5,iVar17,uVar15,
                             uVar18);
          *(undefined4 *)pCVar11 = uVar14;
        }
        pCVar11 = pCVar11 + 4;
        iVar4 = iVar4 + 1;
        pCStack_c = (CPanelTy *)((int)pCStack_c + 0x22);
        pCStack_8 = (CPanelTy *)((int)pCStack_8 + -1);
      } while (pCStack_8 != (CPanelTy *)0x0);
      g_currentExceptionFrame = IStack_10c.previous;
      return;
    case 0x34:
      pCStack_8 = (CPanelTy *)0x2;
      puVar7 = auStack_c8;
      for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      puVar7 = auStack_25c;
      for (iVar4 = 0x54; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      iStack_14 = *(int *)(this_00 + 0x138);
      puVar7 = auStack_25c + 1;
      iVar10 = *(int *)(this_00 + 0x50) + 99;
      iVar4 = 0;
      do {
        iVar12 = iStack_14;
        puVar7[-1] = iVar4 + 1;
        *puVar7 = 0;
        puVar7[2] = iVar10;
        puVar7[4] = 0x2e;
        iVar17 = DAT_00806734;
        if (iVar12 != 0) {
          iVar17 = *(int *)(this_00 + 0xa8);
        }
        puVar7[3] = iVar17 + 0x22;
        puVar7[5] = 0x10;
        puVar7[0x11] = 0;
        puVar7[0x15] = 0x101;
        puVar7[10] = 0x101;
        puVar7[0x16] = 3;
        puVar7[0xb] = 3;
        puVar7[0xc] = 0x4201;
        puVar7[0x17] = 0x4202;
        *(undefined2 *)(puVar7 + 0x18) = 0;
        *(undefined2 *)(puVar7 + 0xd) = 0;
        *(undefined2 *)((int)puVar7 + 0x62) = 2;
        *(undefined2 *)((int)puVar7 + 0x36) = 2;
        if (iVar4 == 0) {
          uVar14 = 0x3aa6;
LAB_00509ddd:
          puVar7[0x19] = uVar14;
          puVar7[0xe] = uVar14;
        }
        else if (iVar4 == 1) {
          uVar14 = 0x3aa7;
          goto LAB_00509ddd;
        }
        iVar10 = iVar10 + 0x31;
        puVar7 = puVar7 + 0x1c;
        pCStack_8 = (CPanelTy *)((int)pCStack_8 + -1);
        iVar4 = iVar4 + 1;
        if (pCStack_8 == (CPanelTy *)0x0) {
          puStack_80 = auStack_25c;
          uStack_7c = (uint)(byte)this_00[0x9d4];
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
          pCStack_c = (CPanelTy *)((uint)pCStack_c & 0xffffff00);
          uStack_10 = 0x3b;
          iVar4 = *(int *)(*(int *)(this_00 + 0x194) + 4);
          iVar10 = *(int *)(*(int *)(this_00 + 0x9f9) + 4);
          pCVar11 = this_00 + 0xa2d;
          pCVar13 = pCVar11;
          for (iVar12 = 0x3a; iVar12 != 0; iVar12 = iVar12 + -1) {
            *(undefined4 *)pCVar13 = 0;
            pCVar13 = pCVar13 + 4;
          }
          *(undefined2 *)pCVar13 = 0;
          iStack_14 = (iVar4 - iVar10) / 2 + 8;
          pCStack_8 = this_00 + 0xa15;
          iVar4 = 0xb18f;
          do {
            *pCVar11 = (CPanelTy)0x2;
            if (DAT_0080874e == '\x01') {
              cVar3 = (this_00[0x9d4] != (CPanelTy)0x1) + '\x01';
            }
            else {
              cVar3 = '\x02' - (this_00[0x9d4] != (CPanelTy)0x1);
            }
            uVar14 = thunk_FUN_00525ef0(cVar3,(char)pCStack_c);
            *(undefined4 *)(pCVar11 + 1) = uVar14;
            uVar14 = CreateBut(this_00,5,0,(uint)(this_00[0xbfc] != (CPanelTy)0x0),iStack_14,
                               uStack_10,0,0,iVar4,iVar4 + 0x10,1,0,(int)pCVar11,(char *)0x0,0x11,10
                               ,0);
            pCVar11 = pCVar11 + 0x27;
            uStack_10 = uStack_10 + 0xb;
            *(undefined4 *)pCStack_8 = uVar14;
            bVar9 = (char)pCStack_c + 1;
            iVar4 = iVar4 + 1;
            pCStack_8 = pCStack_8 + 4;
            pCStack_c = (CPanelTy *)CONCAT31(pCStack_c._1_3_,bVar9);
          } while (bVar9 < 6);
          g_currentExceptionFrame = IStack_10c.previous;
          return;
        }
      } while( true );
    case 0x35:
      if (this_00[0xc31] != (CPanelTy)0x0) {
        uVar19 = 0;
        uVar18 = 0;
        iVar10 = 0;
        pcVar5 = (char *)0x0;
        iVar4 = 0;
        uVar20 = 0;
        sVar16 = 0;
        uVar15 = 0xb13f;
        uVar14 = 0xb12f;
        pCVar6 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
        CVar1 = this_00[0xbfc];
LAB_00509c11:
        uVar14 = CreateBut(this_00,5,0,(uint)(CVar1 != (CPanelTy)0x0),0x92,0x6e,1,(int)pCVar6,uVar14
                           ,uVar15,sVar16,uVar20,iVar4,pcVar5,iVar10,uVar18,uVar19);
        *(undefined4 *)pCStack_18 = uVar14;
        g_currentExceptionFrame = IStack_10c.previous;
        return;
      }
      break;
    case 0x3c:
      if (this_00[0xc3c] == (CPanelTy)0x1) {
        uVar19 = 0;
        uVar18 = 0;
        iVar10 = 0;
        pcVar5 = (char *)0x0;
        iVar4 = 0;
        uVar20 = 0;
        sVar16 = 0;
        uVar15 = 0xb13f;
        uVar14 = 0xb12f;
        pCVar6 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
        CVar1 = this_00[0xbfc];
        goto LAB_00509c11;
      }
      break;
    case 0x43:
    case 0x4c:
      if (this_00[0xbfc] == (CPanelTy)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (-(uint)(this_00[0xc11] != (CPanelTy)0x0) & 2) + 1;
      }
      uVar19 = 0;
      uVar18 = 0;
      iVar12 = 0;
      pcVar5 = (char *)0x0;
      iVar10 = 0;
      uVar20 = 0;
      sVar16 = 0;
      uVar15 = 0xb12e;
      uVar14 = 0xb12d;
      pCVar6 = thunk_FUN_00571240(s_BUT_AUTO_007c23c0,0);
      uVar14 = CreateBut(this_00,5,3,iVar4,-1,0x58,1,(int)pCVar6,uVar14,uVar15,sVar16,uVar20,iVar10,
                         pcVar5,iVar12,uVar18,uVar19);
      *(undefined4 *)(this_00 + 0x30c) = uVar14;
      g_currentExceptionFrame = IStack_10c.previous;
      return;
    case 0x50:
      iVar10 = 0xb17f;
      pCStack_c = (CPanelTy *)0x6;
      iVar4 = 0x3b;
      iStack_14 = (*(int *)(*(int *)(this_00 + 0x194) + 4) - *(int *)(*(int *)(this_00 + 0x9f9) + 4)
                  ) / 2 + 8;
      pCStack_8 = this_00 + 0xa15;
      do {
        uVar14 = CreateBut(this_00,5,0,(uint)(this_00[0xbfc] != (CPanelTy)0x0),iStack_14,iVar4,0,0,
                           iVar10 + -0x20,iVar10,2,0,0x4f20,(char *)0x0,0xaa,10,iVar10 + -0x10);
        iVar10 = iVar10 + 1;
        iVar4 = iVar4 + 0xb;
        *(undefined4 *)pCStack_8 = uVar14;
        pCStack_8 = pCStack_8 + 4;
        pCStack_c = (CPanelTy *)((int)pCStack_c + -1);
      } while (pCStack_c != (CPanelTy *)0x0);
      g_currentExceptionFrame = IStack_10c.previous;
      return;
    }
  }
  g_currentExceptionFrame = IStack_10c.previous;
  return;
}

