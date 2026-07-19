
void __thiscall PrividerTy::NonePrivider(PrividerTy *this,undefined4 *param_1)

{
  PrividerTy PVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  MMsgTy *this_00;
  code *pcVar4;
  uint uVar5;
  CursorClassTy *pCVar6;
  PrividerTy *this_01;
  short *psVar7;
  DWORD DVar8;
  int iVar9;
  int iVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  PrividerTy *pPVar11;
  char *pcVar12;
  undefined4 *puVar13;
  UINT UVar14;
  char acStack_c8 [2];
  undefined1 uStack_c6;
  InternalExceptionFrame IStack_a0;
  undefined4 auStack_5c [8];
  int iStack_3c;
  char cStack_38;
  undefined4 uStack_37;
  undefined4 uStack_33;
  char cStack_2c;
  undefined4 uStack_2b;
  undefined4 uStack_27;
  PrividerTy *pPStack_20;
  uint uStack_1c;
  short *psStack_18;
  int iStack_14;
  short *psStack_10;
  uint uStack_c;
  int iStack_8;
  
  iStack_8 = 1;
  pPStack_20 = this;
  DVar8 = timeGetTime();
  *(DWORD *)(this + 0x61) = DVar8;
  IStack_a0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_a0;
  iVar9 = Library::MSVCRT::__setjmp3(IStack_a0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = pPStack_20;
  if (iVar9 != 0) {
    g_currentExceptionFrame = IStack_a0.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Start_prov_obj_cpp_007ccd28,0x1bc,0,iVar9,
                                &DAT_007a4ccc,s_PrividerTy__NonePrivider_007cce18);
    if (iVar10 == 0) {
      RaiseInternalException(iVar9,0,s_E____titans_Start_prov_obj_cpp_007ccd28,0x1bc);
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  switch(pPStack_20[0x65]) {
  case (PrividerTy)0x1:
    if (pPStack_20[0x1a71] == (PrividerTy)0x0) {
      g_currentExceptionFrame = IStack_a0.previous;
      return;
    }
    psStack_10 = (short *)0x0;
    if (*(int *)(pPStack_20 + 0x1a6d) == 0) {
      pcVar12 = acStack_c8;
      for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
        pcVar12[0] = '\0';
        pcVar12[1] = '\0';
        pcVar12[2] = '\0';
        pcVar12[3] = '\0';
        pcVar12 = pcVar12 + 4;
      }
      pcVar12[0] = '\0';
      pcVar12[1] = '\0';
      uStack_c6 = 4;
      FUN_00715360(DAT_00811764,1,'\x1a',acStack_c8,0x26,1,0xffffffff);
    }
    iVar9 = *(int *)(this_01 + 0x1a6d);
    *(int *)(this_01 + 0x1a6d) = iVar9 + 1;
    if (iVar9 + 1 == 0xf) {
      *(undefined4 *)(this_01 + 0x1a6d) = 0;
    }
    iVar9 = FUN_00715630(DAT_00811764,-1,&uStack_1c,&iStack_3c,&psStack_10,(uint *)0x0,-1,0);
    psVar7 = psStack_10;
    pCVar6 = DAT_00802a30;
    if (iVar9 != -0x4d) {
      if (iVar9 != 0) {
        if (iVar9 != 1) {
          g_currentExceptionFrame = IStack_a0.previous;
          return;
        }
        if (uStack_1c == 0x1a) {
          uVar5 = uStack_c >> 8;
          uStack_c = uStack_c & 0xffffff00;
          if (*psStack_10 == (short)((uint)DAT_00807dd5 >> 0x10)) {
            psStack_18 = psStack_10 + 1;
            if ((char)*psStack_18 == '\x01') {
              pcVar12 = (char *)((int)psStack_10 + 0xb);
              switch(*pcVar12) {
              case '\x01':
                uStack_c = CONCAT31((int3)uVar5,1);
                iStack_14 = 0xe;
                break;
              case '\x02':
              case '\x03':
                wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,PTR_s_CUSTOM__0079c0bc);
                cStack_2c = *pcVar12;
                uStack_2b = *(undefined4 *)((int)psVar7 + 3);
                uStack_27 = 0;
                iVar9 = FUN_00725910((char *)&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,
                                     &cStack_2c,0);
                uStack_c = CONCAT31(uStack_c._1_3_,(iVar9 != -0x70) + '\x01');
                iStack_14 = (-(uint)(*pcVar12 != '\x02') & 2) + 0xd;
                break;
              case '\x05':
                wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s__007cce38,&DAT_00807680,
                          PTR_s_SAVEGAME__0079c0b8,&DAT_00807ddd);
                cStack_38 = *pcVar12;
                uStack_37 = *(undefined4 *)((int)psVar7 + 3);
                uStack_33 = *(undefined4 *)((int)psVar7 + 7);
                iVar9 = FUN_00725910((char *)&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,
                                     &cStack_38,0);
                uStack_c = CONCAT31(uStack_c._1_3_,iVar9 == -0x70);
                iStack_14 = 0x10;
              }
            }
            else if ((char)*psStack_18 != '\x03') goto LAB_005bb532;
            pCVar6 = DAT_00802a30;
            if ((char)*psStack_18 == '\x03') {
              uStack_c = CONCAT31(uStack_c._1_3_,2);
            }
            while ((uStack_c & 0xff) != 1) {
              if ((uStack_c & 0xff) == 2) {
                thunk_FUN_005b6350(this_01,0x6109,0,1);
                DAT_0080877e = 0;
                DAT_008087be = 0;
                CloseButtons(this_01,'\x01');
                this_00 = *(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6);
                goto joined_r0x005bb4e0;
              }
              if ((*(char *)((int)psVar7 + 0xd) == '\0') ||
                 (((char)*psStack_18 == '\x01' && (*(char *)((int)psVar7 + 0xb) == '\x05')))) {
                if (DAT_00802a30 != (CursorClassTy *)0x0) {
                  uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc9);
                  uVar3 = *(undefined4 *)(DAT_00802a30 + 0xc5);
                  DAT_00802a30[0x493] = (CursorClassTy)0x1;
                  *(undefined2 *)(pCVar6 + 0x494) = 0xffff;
                  CursorClassTy::SetGCType(pCVar6,0,uVar3,uVar2);
                  CursorClassTy::DrawSprite(pCVar6,*(int *)(pCVar6 + 0xc5),*(int *)(pCVar6 + 0xc9));
                  pCVar6[0xd2] = (CursorClassTy)0x0;
                  *(undefined4 *)(pCVar6 + 0x4df) = 0xffffffff;
                }
                this_01[0x1a71] = (PrividerTy)0x0;
                thunk_FUN_005dac60();
                UVar14 = 0x2523;
                goto LAB_005bb2c6;
              }
              uStack_c = CONCAT31(uStack_c._1_3_,2);
            }
            thunk_FUN_005b6350(this_01,0x6121,iStack_14,0x11);
            DAT_0080877e = 0;
            if (*(char *)((int)psVar7 + 0xb) == '\x01') {
              DAT_008087be = 0;
            }
            CloseButtons(this_01,'\x01');
            this_00 = *(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6);
joined_r0x005bb4e0:
            if (this_00 != (MMsgTy *)0x0) {
              MMsgTy::HidePanel(this_00,1,0,1);
            }
          }
          else {
            if (DAT_00802a30 != (CursorClassTy *)0x0) {
              uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc9);
              uVar3 = *(undefined4 *)(DAT_00802a30 + 0xc5);
              DAT_00802a30[0x493] = (CursorClassTy)0x1;
              *(undefined2 *)(pCVar6 + 0x494) = 0xffff;
              CursorClassTy::SetGCType(pCVar6,0,uVar3,uVar2);
              CursorClassTy::DrawSprite(pCVar6,*(int *)(pCVar6 + 0xc5),*(int *)(pCVar6 + 0xc9));
              pCVar6[0xd2] = (CursorClassTy)0x0;
              *(undefined4 *)(pCVar6 + 0x4df) = 0xffffffff;
            }
            this_01[0x1a71] = (PrividerTy)0x0;
            thunk_FUN_005dac60();
            UVar14 = 0x2526;
LAB_005bb2c6:
            MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),UVar14,'\0',
                               (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
          }
        }
LAB_005bb532:
        *(undefined4 *)(this_01 + 0x1a69) = *(undefined4 *)(this_01 + 0x61);
        if (psStack_10 != (short *)0x0) {
          FUN_006ab060(&psStack_10);
          g_currentExceptionFrame = IStack_a0.previous;
          return;
        }
        g_currentExceptionFrame = IStack_a0.previous;
        return;
      }
      if ((uint)(*(int *)(this_01 + 0x61) - *(int *)(this_01 + 0x1a69)) < 0x7531) {
        g_currentExceptionFrame = IStack_a0.previous;
        return;
      }
    }
    iVar9 = *(int *)(this_01 + 0x1a5b);
    puVar13 = auStack_5c;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    this_01[0x1a71] = (PrividerTy)0x0;
    this_01[0x1a72] = (PrividerTy)0x1;
    pCVar6 = DAT_00802a30;
    auStack_5c[4] = 0x6952;
    if (*(int *)(iVar9 + 0x2e6) != 0) {
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc9);
        uVar3 = *(undefined4 *)(DAT_00802a30 + 0xc5);
        DAT_00802a30[0x493] = (CursorClassTy)0x1;
        *(undefined2 *)(pCVar6 + 0x494) = 0xffff;
        CursorClassTy::SetGCType(pCVar6,0,uVar3,uVar2);
        CursorClassTy::DrawSprite(pCVar6,*(int *)(pCVar6 + 0xc5),*(int *)(pCVar6 + 0xc9));
        pCVar6[0xd2] = (CursorClassTy)0x0;
        *(undefined4 *)(pCVar6 + 0x4df) = 0xffffffff;
      }
      auStack_5c[2] = *(undefined4 *)(this_01 + 8);
      auStack_5c[3] = 2;
      MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),0x2525,'\0',auStack_5c,
                         (undefined4 *)0x0,(undefined4 *)0x0,0,0);
      g_currentExceptionFrame = IStack_a0.previous;
      return;
    }
    (*(code *)**(undefined4 **)this_01)(auStack_5c);
    break;
  case (PrividerTy)0x3:
    if ((*(HoloTy **)(pPStack_20 + 0x1c96) != (HoloTy *)0x0) &&
       (iVar9 = HoloTy::NextFas(*(HoloTy **)(pPStack_20 + 0x1c96)), iVar9 != 0)) {
      iStack_8 = 0;
    }
    if ((*(HoloTy **)(this_01 + 0x1c9a) != (HoloTy *)0x0) &&
       (iVar9 = HoloTy::NextFas(*(HoloTy **)(this_01 + 0x1c9a)), iVar9 != 0)) {
      iStack_8 = 0;
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      iStack_8 = 0;
    }
    if (iStack_8 != 0) {
      if (*(HoloTy **)(this_01 + 0x1c96) != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)(this_01 + 0x1c96));
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(this_01 + 0x1c96));
        *(undefined4 *)(this_01 + 0x1c96) = 0;
      }
      if (*(HoloTy **)(this_01 + 0x1c9a) != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)(this_01 + 0x1c9a));
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(this_01 + 0x1c9a));
        *(undefined4 *)(this_01 + 0x1c9a) = 0;
      }
      if (*(uint *)(this_01 + 0x1a7b) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(this_01 + 0x1abf),*(uint *)(this_01 + 0x1a7b),0xfffffffe,
                   *(uint *)(this_01 + 0x1a93),*(uint *)(this_01 + 0x1a97));
      }
      if (*(uint *)(this_01 + 0x1b0c) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(this_01 + 0x1b50),*(uint *)(this_01 + 0x1b0c),0xfffffffe,
                   *(uint *)(this_01 + 0x1b24),*(uint *)(this_01 + 0x1b28));
      }
      if (*(uint *)(this_01 + 0x1b9d) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(this_01 + 0x1be1),*(uint *)(this_01 + 0x1b9d),0xfffffffe,
                   *(uint *)(this_01 + 0x1bb5),*(uint *)(this_01 + 0x1bb9));
      }
      pPVar11 = this_01 + 0x1c2a;
      iVar9 = 0x16;
      do {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)pPVar11);
        pPVar11 = pPVar11 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (this_01[0x1a5f] == (PrividerTy)0x0) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(this_01 + 0x1c8a));
      }
      this_01[0x65] = (PrividerTy)0x1;
      CreateCtrls(this_01,'\0');
      PaintPrivider(this_01,'\0');
      g_currentExceptionFrame = IStack_a0.previous;
      return;
    }
    break;
  case (PrividerTy)0x4:
    if (*(HoloTy **)(pPStack_20 + 0x1c96) != (HoloTy *)0x0) {
      iVar9 = HoloTy::NextFas(*(HoloTy **)(pPStack_20 + 0x1c96));
      if (iVar9 == 0) {
        if (-1 < (int)*(uint *)(*(int *)(this_01 + 0x1c96) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_01 + 0x1c96) + 3));
        }
      }
      else {
        iStack_8 = 0;
      }
    }
    if (*(HoloTy **)(this_01 + 0x1c9a) != (HoloTy *)0x0) {
      iVar9 = HoloTy::NextFas(*(HoloTy **)(this_01 + 0x1c9a));
      if (iVar9 == 0) {
        if (-1 < (int)*(uint *)(*(int *)(this_01 + 0x1c9a) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_01 + 0x1c9a) + 3));
        }
      }
      else {
        iStack_8 = 0;
      }
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x02')) {
      iStack_8 = 0;
    }
    if (iStack_8 != 0) {
      PVar1 = this_01[0x1a5a];
      this_01[0x65] = (PrividerTy)0x2;
      if ((PVar1 != (PrividerTy)0xff) && (*(int *)(this_01 + (uint)(byte)PVar1 * 0x1fb + 0xd1) != 0)
         ) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(this_01 + (uint)(byte)PVar1 * 0x1fb + 0xc1));
        g_currentExceptionFrame = IStack_a0.previous;
        return;
      }
    }
    break;
  case (PrividerTy)0x5:
    if (*(HoloTy **)(pPStack_20 + 0x1c9a) != (HoloTy *)0x0) {
      iVar9 = HoloTy::NextFas(*(HoloTy **)(pPStack_20 + 0x1c9a));
      if (iVar9 == 0) {
        if ((this_01[0x1a60] == (PrividerTy)0x1) &&
           (-1 < (int)*(uint *)(*(int *)(this_01 + 0x1c9a) + 3))) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_01 + 0x1c9a) + 3));
        }
      }
      else {
        iStack_8 = 0;
      }
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x02')) {
      iStack_8 = 0;
    }
    if (iStack_8 != 0) {
      if (*(HoloTy **)(this_01 + 0x1c9a) != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)(this_01 + 0x1c9a));
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(this_01 + 0x1c9a));
        *(undefined4 *)(this_01 + 0x1c9a) = 0;
      }
      if (this_01[0x1a60] == (PrividerTy)0x0) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(this_01 + 0x1c8a));
      }
      SetMode(this_01,(char)this_01[0x1a60],'\0');
      g_currentExceptionFrame = IStack_a0.previous;
      return;
    }
  }
  g_currentExceptionFrame = IStack_a0.previous;
  return;
}

