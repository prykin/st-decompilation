
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::PaintTV */

void __thiscall CPanelTy::PaintTV(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *this_00;
  CPanelTy CVar2;
  CPanelTy CVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  ushort *puVar8;
  undefined3 extraout_var;
  short *psVar9;
  char *pcVar10;
  int iVar11;
  byte bVar12;
  CPanelTy *pCVar13;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar14;
  CPanelTy *pCVar15;
  undefined4 uVar16;
  byte bVar17;
  undefined4 *puVar18;
  InternalExceptionFrame local_74;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  CPanelTy *local_24;
  CPanelTy *local_20;
  CPanelTy *local_1c;
  CPanelTy *local_18;
  CPanelTy *local_14;
  CPanelTy *local_10;
  uint local_c;
  byte local_5;
  
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_24 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_24;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x2c9,0,iVar5,&DAT_007a4ccc
                                ,s_CPanelTy__PaintTV_007c2154);
    if (iVar11 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x2c9);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar12 = 0;
  local_c = local_c & 0xffffff00;
  do {
    uVar14 = local_c & 0xff;
    local_10 = this_00 + uVar14 + 0x2ec;
    switch(this_00[uVar14 + 0x2ec]) {
    case (CPanelTy)0x1:
      if ((DAT_0080731a != 0) &&
         (0x41 < (uint)(*(int *)(this_00 + 0x38) - *(int *)(this_00 + uVar14 * 4 + 0x2ee)))) {
        *(int *)(this_00 + uVar14 * 4 + 0x2ee) = *(int *)(this_00 + 0x38);
        CVar2 = this_00[uVar14 + 0x2ea];
        this_00[uVar14 + 0x2ea] = (CPanelTy)((char)CVar2 + 1U);
        if (**(short **)(this_00 + uVar14 * 4 + 0x2e2) <= (short)(ushort)(byte)((char)CVar2 + 1U)) {
          this_00[uVar14 + 0x2ea] = (CPanelTy)0x0;
        }
        thunk_FUN_004f1890(this_00,(byte)local_c);
        bVar12 = -((char)local_c != '\0');
        local_28 = CONCAT31(local_28._1_3_,bVar12) & 0xffffff08;
        if ((bVar12 & 8) < 0xb) {
          uVar6 = bVar12 & 8;
          uVar14 = *(uint *)(this_00 + uVar6 * 4 + 0x148);
joined_r0x004f81d1:
          if (-1 < (int)uVar14) {
            Library::DKW::DDX::FUN_006b3640
                      (DAT_008075a8,uVar14,0xffffffff,*(uint *)(this_00 + uVar6 * 4 + 0x3c),
                       *(uint *)(this_00 + uVar6 * 4 + 0x94));
          }
        }
      }
      break;
    case (CPanelTy)0x3:
      if (0x31 < (uint)(*(int *)(this_00 + 0x38) - *(int *)(this_00 + uVar14 * 4 + 0x2ee))) {
        pCVar13 = this_00 + uVar14 + 0x2ea;
        *(int *)(this_00 + uVar14 * 4 + 0x2ee) = *(int *)(this_00 + 0x38);
        if (*pCVar13 == (CPanelTy)0x0) {
          pCVar15 = this_00 + 0xb63;
          if (bVar12 != 0) {
            pCVar15 = this_00 + 0xc51;
          }
          puVar18 = (undefined4 *)0x0;
          iVar11 = 0;
          iVar5 = 1;
          bVar12 = 0;
          uVar6 = 6;
          pbVar7 = (byte *)thunk_FUN_00526100(pCVar15,0);
          puVar8 = FUN_00709af0(DAT_00806794,0x1f,pbVar7,uVar6,bVar12,iVar5,iVar11,puVar18);
          *(ushort **)(this_00 + uVar14 * 4 + 0x2e2) = puVar8;
          *local_10 = (CPanelTy)0x1;
          *pCVar13 = (CPanelTy)0x0;
          if (*(short *)(this_00 + 0x23f) == 5) {
            if ((char)local_c == '\0') {
              CVar2 = this_00[0x2ed];
            }
            else {
              CVar2 = this_00[0x2ec];
            }
            if (CVar2 != (CPanelTy)0x0) {
              *(undefined2 *)(this_00 + 0x23f) = 1;
              ShiftControls(this_00,1);
            }
          }
        }
        else {
          *pCVar13 = (CPanelTy)((char)*pCVar13 + -1);
        }
        thunk_FUN_004f1890(this_00,(byte)local_c);
        bVar12 = -((char)local_c != '\0');
        local_1c = (CPanelTy *)(CONCAT31(local_1c._1_3_,bVar12) & 0xffffff08);
        if ((bVar12 & 8) < 0xb) {
          uVar14 = bVar12 & 8;
          if (-1 < (int)*(uint *)(this_00 + uVar14 * 4 + 0x148)) {
            Library::DKW::DDX::FUN_006b3640
                      (DAT_008075a8,*(uint *)(this_00 + uVar14 * 4 + 0x148),0xffffffff,
                       *(uint *)(this_00 + uVar14 * 4 + 0x3c),*(uint *)(this_00 + uVar14 * 4 + 0x94)
                      );
          }
        }
        if (this_00[0x2ea] == (CPanelTy)0x5) {
          thunk_FUN_005252c0(0xb1);
        }
      }
      break;
    case (CPanelTy)0x4:
      if (0x31 < (uint)(*(int *)(this_00 + 0x38) - *(int *)(this_00 + uVar14 * 4 + 0x2ee))) {
        pCVar13 = this_00 + uVar14 + 0x2ea;
        *(int *)(this_00 + uVar14 * 4 + 0x2ee) = *(int *)(this_00 + 0x38);
        CVar2 = *pCVar13;
        *pCVar13 = (CPanelTy)((char)CVar2 + 1U);
        if ((CPanelTy)((char)CVar2 + 1U) == (CPanelTy)0x5) {
          thunk_FUN_005252c0(0xb2);
        }
        if (**(short **)(this_00 + uVar14 * 4 + 0x2e2) <= (short)(ushort)(byte)*pCVar13) {
          *pCVar13 = (CPanelTy)((char)*pCVar13 - 1);
          *local_10 = (CPanelTy)0x2;
          if (*(short *)(this_00 + 0x23f) == 6) {
            if ((char)local_c == '\0') {
              CVar2 = this_00[0x2ed];
            }
            else {
              CVar2 = this_00[0x2ec];
            }
            if (CVar2 != (CPanelTy)0x0) {
              *(undefined2 *)(this_00 + 0x23f) = 4;
              thunk_FUN_005252c0(0xb0);
            }
          }
        }
        thunk_FUN_004f1890(this_00,(byte)local_c);
        bVar12 = -((char)local_c != '\0');
        local_20 = (CPanelTy *)(CONCAT31(local_20._1_3_,bVar12) & 0xffffff08);
        if ((bVar12 & 8) < 0xb) {
          uVar6 = bVar12 & 8;
          uVar14 = *(uint *)(this_00 + uVar6 * 4 + 0x148);
          goto joined_r0x004f81d1;
        }
      }
      break;
    case (CPanelTy)0x5:
      if (0x41 < (uint)(*(int *)(this_00 + 0x38) - *(int *)(this_00 + uVar14 * 4 + 0x2ee))) {
        pCVar13 = this_00 + uVar14 + 0x2ea;
        *(int *)(this_00 + uVar14 * 4 + 0x2ee) = *(int *)(this_00 + 0x38);
        CVar2 = *pCVar13;
        *pCVar13 = (CPanelTy)((char)CVar2 + 1U);
        local_18 = this_00 + uVar14 * 4 + 0x2e2;
        if (**(short **)local_18 <= (short)(ushort)(byte)((char)CVar2 + 1U)) {
          puVar8 = FUN_00709af0(DAT_00806794,0x1f,*(byte **)(this_00 + uVar14 * 4 + 0x2f6),6,0,1,0,
                                (undefined4 *)0x0);
          *(ushort **)local_18 = puVar8;
          *local_10 = (CPanelTy)0x1;
          *pCVar13 = (CPanelTy)0x0;
        }
        thunk_FUN_004f1890(this_00,(byte)local_c);
        bVar12 = -((char)local_c != '\0');
        local_14 = (CPanelTy *)(CONCAT31(local_14._1_3_,bVar12) & 0xffffff08);
        if ((bVar12 & 8) < 0xb) {
          uVar6 = bVar12 & 8;
          uVar14 = *(uint *)(this_00 + uVar6 * 4 + 0x148);
          goto joined_r0x004f81d1;
        }
      }
    }
    bVar12 = (char)local_c + 1;
    local_c = CONCAT31(local_c._1_3_,bVar12);
  } while (bVar12 < 2);
  local_5 = 0;
  if (DAT_00806730 == 0x400) {
    local_5 = 2;
  }
  else if (DAT_00806730 == 0x500) {
    local_5 = 6;
  }
  local_10 = (CPanelTy *)((uint)local_10 & 0xffffff00);
  if (local_5 != 0) {
    local_18 = this_00 + 0xd3b;
    local_20 = this_00 + 0xc87;
    local_1c = this_00 + 0xd53;
    do {
      local_c = local_c & 0xffffff00;
      local_14 = local_20;
      pCVar13 = local_1c;
      pCVar15 = local_18;
      do {
        CVar2 = pCVar15[0xc];
        if (CVar2 == (CPanelTy)0x1) {
          if ((DAT_0080731a != 0) && (0x41 < (uint)(*(int *)(this_00 + 0x38) - *(int *)pCVar13))) {
            *(int *)pCVar13 = *(int *)(this_00 + 0x38);
            CVar2 = *pCVar15;
            *pCVar15 = (CPanelTy)((char)CVar2 + 1U);
            if (**(short **)(pCVar13 + -0x48) <= (short)(ushort)(byte)((char)CVar2 + 1U)) {
              *pCVar15 = (CPanelTy)0x0;
            }
            thunk_FUN_004f1c80(this_00,local_c,(uint)local_10);
            bVar12 = ((char)local_c == '\0') + 9;
            local_30 = CONCAT31(local_30._1_3_,bVar12);
            if (bVar12 < 0xb) {
              uVar6 = (uint)bVar12;
              uVar14 = *(uint *)(this_00 + uVar6 * 4 + 0x148);
              goto joined_r0x004f861b;
            }
          }
        }
        else if (CVar2 == (CPanelTy)0x3) {
          if (0x31 < (uint)(*(int *)(this_00 + 0x38) - *(int *)pCVar13)) {
            *(int *)pCVar13 = *(int *)(this_00 + 0x38);
            if (*pCVar15 == (CPanelTy)0x0) {
              puVar18 = (undefined4 *)0x0;
              iVar11 = 0;
              iVar5 = 1;
              bVar12 = 0;
              uVar14 = 6;
              pbVar7 = (byte *)thunk_FUN_004f1d20(local_14);
              puVar8 = FUN_00709af0(DAT_00806794,0x1f,pbVar7,uVar14,bVar12,iVar5,iVar11,puVar18);
              *(ushort **)(pCVar13 + -0x48) = puVar8;
              pCVar15[0xc] = (CPanelTy)0x1;
              *pCVar15 = (CPanelTy)0x0;
            }
            else {
              *pCVar15 = (CPanelTy)((char)*pCVar15 - 1);
            }
            thunk_FUN_004f1c80(this_00,local_c,(uint)local_10);
            bVar12 = ((char)local_c == '\0') + 9;
            local_2c = CONCAT31(local_2c._1_3_,bVar12);
            if (bVar12 < 0xb) {
              uVar6 = (uint)bVar12;
              uVar14 = *(uint *)(this_00 + uVar6 * 4 + 0x148);
              goto joined_r0x004f861b;
            }
          }
        }
        else if ((CVar2 == (CPanelTy)0x4) &&
                (0x31 < (uint)(*(int *)(this_00 + 0x38) - *(int *)pCVar13))) {
          *(int *)pCVar13 = *(int *)(this_00 + 0x38);
          CVar2 = *pCVar15;
          CVar3 = (CPanelTy)((char)CVar2 + 1);
          *pCVar15 = CVar3;
          if (**(short **)(pCVar13 + -0x48) <= (short)(ushort)(byte)CVar3) {
            *pCVar15 = CVar2;
            pCVar15[0xc] = (CPanelTy)0x2;
          }
          thunk_FUN_004f1c80(this_00,local_c,(uint)local_10);
          bVar12 = ((char)local_c == '\0') + 9;
          local_28 = CONCAT31(local_28._1_3_,bVar12);
          if (bVar12 < 0xb) {
            uVar6 = (uint)bVar12;
            uVar14 = *(uint *)(this_00 + uVar6 * 4 + 0x148);
joined_r0x004f861b:
            if (-1 < (int)uVar14) {
              Library::DKW::DDX::FUN_006b3640
                        (DAT_008075a8,uVar14,0xffffffff,*(uint *)(this_00 + uVar6 * 4 + 0x3c),
                         *(uint *)(this_00 + uVar6 * 4 + 0x94));
            }
          }
        }
        bVar12 = (char)local_c + 1;
        local_14 = local_14 + 0x42;
        pCVar13 = pCVar13 + 0x18;
        pCVar15 = pCVar15 + 6;
        local_c = CONCAT31(local_c._1_3_,bVar12);
      } while (bVar12 < 2);
      bVar12 = (char)local_10 + 1;
      local_18 = local_18 + 1;
      local_1c = local_1c + 4;
      local_20 = local_20 + 0xb;
      local_10 = (CPanelTy *)CONCAT31(local_10._1_3_,bVar12);
    } while (bVar12 < local_5);
  }
  bVar4 = FUN_006b33f0((int)DAT_008075a8,*(uint *)(this_00 + 0x17c));
  if (CONCAT31(extraout_var,bVar4) == 0) {
    g_currentExceptionFrame = local_74.previous;
    return;
  }
  switch(this_00[0x260]) {
  case (CPanelTy)0x1:
    if ((DAT_0080731a == 0) || ((uint)(*(int *)(this_00 + 0x38) - *(int *)(this_00 + 0x261)) < 0x42)
       ) goto switchD_004f86b0_caseD_2;
    CVar2 = this_00[0x25f];
    *(int *)(this_00 + 0x261) = *(int *)(this_00 + 0x38);
    this_00[0x25f] = (CPanelTy)((char)CVar2 + 1U);
    if ((short)(ushort)(byte)((char)CVar2 + 1U) < **(short **)(this_00 + 0x25b)) goto LAB_004f88e6;
    break;
  default:
    goto switchD_004f86b0_caseD_2;
  case (CPanelTy)0x3:
    if (0x31 < (uint)(*(int *)(this_00 + 0x38) - *(int *)(this_00 + 0x261))) {
      *(int *)(this_00 + 0x261) = *(int *)(this_00 + 0x38);
      if (this_00[0x25f] == (CPanelTy)0x0) {
        if (*(int *)(this_00 + 0x25b) != 0) {
          FUN_0070b600((int *)(this_00 + 0x25b));
        }
        iVar5 = 1;
        bVar17 = 0;
        bVar12 = 6;
        pcVar10 = (char *)thunk_FUN_005260b0(0,0,0);
        psVar9 = FUN_0070b430(DAT_00806790,pcVar10,bVar12,bVar17,iVar5);
        *(short **)(this_00 + 0x25b) = psVar9;
        this_00[0x260] = (CPanelTy)0x1;
        this_00[0x25f] = (CPanelTy)0x0;
      }
      else {
        this_00[0x25f] = (CPanelTy)((char)this_00[0x25f] + -1);
      }
      thunk_FUN_004f1950((int)this_00);
      if (this_00[0x25f] == (CPanelTy)0x5) {
        thunk_FUN_005252c0(0xb1);
      }
    }
    goto switchD_004f86b0_caseD_2;
  case (CPanelTy)0x4:
    if ((uint)(*(int *)(this_00 + 0x38) - *(int *)(this_00 + 0x261)) < 0x32)
    goto switchD_004f86b0_caseD_2;
    CVar2 = this_00[0x25f];
    *(int *)(this_00 + 0x261) = *(int *)(this_00 + 0x38);
    this_00[0x25f] = (CPanelTy)((char)CVar2 + '\x01');
    if ((CPanelTy)((char)CVar2 + '\x01') == (CPanelTy)0x5) {
      thunk_FUN_005252c0(0xb2);
    }
    if (**(short **)(this_00 + 0x25b) <= (short)(ushort)(byte)this_00[0x25f]) {
      this_00[0x260] = (CPanelTy)0x2;
      this_00[0x25f] = (CPanelTy)((char)this_00[0x25f] - 1);
    }
    goto LAB_004f88e6;
  case (CPanelTy)0x5:
    if ((uint)(*(int *)(this_00 + 0x38) - *(int *)(this_00 + 0x261)) < 0x42)
    goto switchD_004f86b0_caseD_2;
    CVar2 = this_00[0x25f];
    pCVar13 = this_00 + 0x25b;
    *(int *)(this_00 + 0x261) = *(int *)(this_00 + 0x38);
    this_00[0x25f] = (CPanelTy)((char)CVar2 + 1U);
    if ((short)(ushort)(byte)((char)CVar2 + 1U) < **(short **)pCVar13) goto LAB_004f88e6;
    if (*(short **)pCVar13 != (short *)0x0) {
      FUN_0070b600((int *)pCVar13);
    }
    uVar16 = DAT_00806790;
    if (this_00[0x285] == (CPanelTy)0x0) {
      psVar9 = FUN_0070b430(DAT_00806758,(char *)(this_00 + 0x265),6,0,0);
      *(short **)pCVar13 = psVar9;
      uVar16 = DAT_00806798;
      if (psVar9 == (short *)0x0) goto LAB_004f8860;
    }
    else {
LAB_004f8860:
      psVar9 = FUN_0070b430(uVar16,(char *)(this_00 + 0x265),6,0,0);
      *(short **)pCVar13 = psVar9;
    }
    if (*(int *)pCVar13 == 0) {
      iVar5 = 1;
      bVar17 = 0;
      bVar12 = 6;
      pcVar10 = (char *)thunk_FUN_005260b0(0,0,0);
      psVar9 = FUN_0070b430(DAT_00806790,pcVar10,bVar12,bVar17,iVar5);
      *(short **)pCVar13 = psVar9;
    }
    this_00[0x260] = (CPanelTy)0x1;
  }
  this_00[0x25f] = (CPanelTy)0x0;
LAB_004f88e6:
  thunk_FUN_004f1950((int)this_00);
switchD_004f86b0_caseD_2:
  if (((*(int *)(this_00 + 0x1d8) != 0) && ((*(byte *)(DAT_00802a38 + 0xe4) & 1) != 0)) &&
     (iVar5 = *(int *)(*(int *)(this_00 + 0x1d8) + 4), iVar5 < *(int *)(this_00 + 0x1dc) + -2)) {
    FUN_006b4170(*(int *)(this_00 + 0x1b4),0,100,5,0x226,0x55,0);
    iVar11 = FUN_007140e0(*(void **)(this_00 + 0x1d8),1,'\0');
    if (iVar11 != 0) {
      FUN_006b5440(*(int *)(this_00 + 0x1b4),0,100,5,iVar11,0,0xff);
    }
    FUN_006b35d0(DAT_008075a8,*(uint *)(this_00 + 0x17c));
    if (this_00[0x1e0] != (CPanelTy)0x0) {
      uVar14 = iVar5 + 1U & 0x80000001;
      bVar4 = uVar14 == 0;
      if ((int)uVar14 < 0) {
        bVar4 = (uVar14 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar4) {
        thunk_FUN_005252c0(0x1e);
      }
    }
  }
  g_currentExceptionFrame = local_74.previous;
  return;
}

