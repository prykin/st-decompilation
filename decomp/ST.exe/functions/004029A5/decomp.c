
void __thiscall ChooseMapTy::NoneChooseMap(ChooseMapTy *this,undefined4 *param_1)

{
  ChooseMapTy CVar1;
  code *pcVar2;
  ChooseMapTy *this_00;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  ChooseMapTy *pCVar6;
  int *piVar7;
  InternalExceptionFrame IStack_b0;
  int aiStack_6c [8];
  uint uStack_4c;
  undefined2 uStack_48;
  undefined1 uStack_46;
  undefined4 uStack_45;
  uint uStack_41;
  undefined1 uStack_3d;
  undefined1 uStack_3b;
  undefined4 uStack_2a;
  undefined4 uStack_26;
  ChooseMapTy *pCStack_20;
  int iStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_8 = 1;
  pCStack_20 = this;
  DVar3 = timeGetTime();
  *(DWORD *)(this + 0x61) = DVar3;
  IStack_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_b0;
  iVar4 = __setjmp3(IStack_b0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pCStack_20;
  if (iVar4 != 0) {
    g_currentExceptionFrame = IStack_b0.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_load_obj_cpp_007cc728,0x24e,0,iVar4,&DAT_007a4ccc
                               ,s_ChooseMapTy__NoneChooseMap_007cc7f0);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_load_obj_cpp_007cc728,0x24e);
    return;
  }
  if (((pCStack_20[0x65] == (ChooseMapTy)0x1) && (*(HANDLE *)(pCStack_20 + 0x1c8f) != (HANDLE)0x0))
     && (DVar3 = WaitForSingleObject(*(HANDLE *)(pCStack_20 + 0x1c8f),0), DVar3 == 0)) {
    FindNextChangeNotification(*(HANDLE *)(this_00 + 0x1c8f));
    PrepFiles(this_00,*(uint *)(this_00 + 0x1c93));
    *(undefined4 *)(this_00 + 0x2d) = 5;
    if (*(int *)(this_00 + 0x1a6c) != 0) {
      FUN_006e6080(this_00,2,*(int *)(this_00 + 0x1a6c),(undefined4 *)(this_00 + 0x1d));
    }
    if (*(int *)(DAT_0081176c + 0x389) != 0) {
      FUN_006e6080(this_00,2,*(int *)(DAT_0081176c + 0x389),(undefined4 *)(this_00 + 0x1d));
    }
  }
  if ((*(int *)(this_00 + 0x1a64) != 0) &&
     (0xf9 < (uint)(*(int *)(this_00 + 0x61) - *(int *)(this_00 + 0x1a68)))) {
    ShowDescription(this_00,*(uint *)(this_00 + 0x1c93));
    *(undefined4 *)(this_00 + 0x1a64) = 0;
  }
  CVar1 = this_00[0x65];
  if (CVar1 == (ChooseMapTy)0x1) {
    if (DAT_0080877e != '\0') {
      switch(this_00[0x1a5f]) {
      case (ChooseMapTy)0x4:
      case (ChooseMapTy)0x5:
      case (ChooseMapTy)0xc:
      case (ChooseMapTy)0x13:
        iStack_c = 0;
        FUN_006b7510(DAT_00811764,-1,&iStack_14,-1,0);
        if (DAT_008067a0 != '\0') {
          CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
        }
        iStack_10 = 0;
        if (0 < iStack_14) {
          do {
            iVar4 = FUN_00715630(DAT_00811764,-1,&uStack_18,&iStack_1c,&iStack_c,&uStack_4c,-1,0);
            if (iVar4 == -0x4d) {
              piVar7 = aiStack_6c;
              for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar7 = 0;
                piVar7 = piVar7 + 1;
              }
              aiStack_6c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
              if (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x2e6) == 0) {
                (*(code *)**(undefined4 **)this_00)(aiStack_6c);
              }
              else {
                aiStack_6c[2] = *(int *)(this_00 + 8);
                aiStack_6c[3] = 2;
                MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),0x2522,'\0',
                                   aiStack_6c,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
              }
            }
            else if (iVar4 == 1) {
              if (uStack_18 == 0x1a) {
                if (*(char *)(iStack_c + 2) == '\x04') {
                  uStack_46 = 3;
                  uStack_48 = (undefined2)((uint)DAT_00807dd5 >> 0x10);
                  uStack_45 = DAT_008087be;
                  uStack_41 = (this_00[0x1a5f] != (ChooseMapTy)0xc) - 1 & DAT_00808750;
                  uStack_3b = DAT_00807361;
                  switch(this_00[0x1a5f]) {
                  case (ChooseMapTy)0x4:
switchD_005adb01_caseD_4:
                    uStack_3d = 2;
                    break;
                  case (ChooseMapTy)0x5:
switchD_005adb01_caseD_5:
                    uStack_3d = 3;
                    break;
                  default:
                    uStack_3d = 0xff;
                    break;
                  case (ChooseMapTy)0xc:
switchD_005adb01_caseD_c:
                    uStack_3d = 5;
                    break;
                  case (ChooseMapTy)0x13:
                    switch(DAT_00803400) {
                    case 4:
                      goto switchD_005adb01_caseD_4;
                    case 5:
                      goto switchD_005adb01_caseD_5;
                    case 0xc:
                      goto switchD_005adb01_caseD_c;
                    case 0x14:
                    case 0x15:
                      uStack_3d = 4;
                    }
                  }
                  uStack_26 = *(undefined4 *)(iStack_c + 0x22);
                  uStack_2a = *(undefined4 *)(iStack_c + 0x1e);
                  FUN_00715360(DAT_00811764,iStack_1c,'\x1a',(char *)&uStack_48,0x26,1,0xffffffff);
                }
              }
              else if (uStack_18 == 0x1b) {
                StartSystemTy::AddToChat(*(StartSystemTy **)(this_00 + 0x1a5b),iStack_c);
              }
              if (iStack_c != 0) {
                FUN_006ab060(&iStack_c);
              }
            }
            iStack_10 = iStack_10 + 1;
          } while (iStack_10 < iStack_14);
        }
      }
    }
  }
  else if (CVar1 == (ChooseMapTy)0x3) {
    if ((this_00[0x20b5] != (ChooseMapTy)0x0) &&
       (*(int *)(DAT_0081176c + 0x300) < *(int *)(DAT_0081176c + 0x304) + -1)) {
      *(int *)(DAT_0081176c + 0x300) = *(int *)(DAT_0081176c + 0x300) + 1;
      if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
        FUN_006b3730(*(uint **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc),
                     *(uint *)(DAT_0081176c + 0x300),*(uint *)(DAT_0081176c + 0x314),
                     *(uint *)(DAT_0081176c + 0x318));
      }
      iStack_8 = 0;
    }
    if (((this_00[0x20b3] != (ChooseMapTy)0x0) && (*(HoloTy **)(this_00 + 0x20b8) != (HoloTy *)0x0))
       && (iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x20b8)), iVar4 != 0)) {
      iStack_8 = 0;
    }
    if (((this_00[0x20b4] != (ChooseMapTy)0x0) && (*(HoloTy **)(this_00 + 0x20bc) != (HoloTy *)0x0))
       && (iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x20bc)), iVar4 != 0)) {
      iStack_8 = 0;
    }
    if (((this_00[0x20b7] != (ChooseMapTy)0x0) && (*(HoloTy **)(this_00 + 0x20c0) != (HoloTy *)0x0))
       && (iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x20c0)), iVar4 != 0)) {
      iStack_8 = 0;
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      iStack_8 = 0;
    }
    if (iStack_8 != 0) {
      if ((this_00[0x20b3] != (ChooseMapTy)0x0) && (*(HoloTy **)(this_00 + 0x20b8) != (HoloTy *)0x0)
         ) {
        HoloTy::Done(*(HoloTy **)(this_00 + 0x20b8));
        FUN_0072e2b0(*(undefined4 **)(this_00 + 0x20b8));
        *(undefined4 *)(this_00 + 0x20b8) = 0;
      }
      if ((this_00[0x20b4] != (ChooseMapTy)0x0) && (*(HoloTy **)(this_00 + 0x20bc) != (HoloTy *)0x0)
         ) {
        HoloTy::Done(*(HoloTy **)(this_00 + 0x20bc));
        FUN_0072e2b0(*(undefined4 **)(this_00 + 0x20bc));
        *(undefined4 *)(this_00 + 0x20bc) = 0;
      }
      if ((this_00[0x20b7] != (ChooseMapTy)0x0) && (*(HoloTy **)(this_00 + 0x20c0) != (HoloTy *)0x0)
         ) {
        HoloTy::Done(*(HoloTy **)(this_00 + 0x20c0));
        FUN_0072e2b0(*(undefined4 **)(this_00 + 0x20c0));
        *(undefined4 *)(this_00 + 0x20c0) = 0;
      }
      this_00[0x65] = (ChooseMapTy)0x1;
      if (this_00[0x20b5] != (ChooseMapTy)0x0) {
        FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x2ec));
        if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
          FUN_006b3af0(*(int **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc));
        }
      }
      CreateCtrls(this_00,'\x01');
      if (*(uint *)(this_00 + 0x1a74) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(this_00 + 0x1ab8),*(uint *)(this_00 + 0x1a74),0xfffffffe,
                     *(uint *)(this_00 + 0x1a8c),*(uint *)(this_00 + 0x1a90));
      }
      if (*(uint *)(this_00 + 0x1b05) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(this_00 + 0x1b49),*(uint *)(this_00 + 0x1b05),0xfffffffe,
                     *(uint *)(this_00 + 0x1b1d),*(uint *)(this_00 + 0x1b21));
      }
      if (*(uint *)(this_00 + 0x1b96) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(this_00 + 0x1bda),*(uint *)(this_00 + 0x1b96),0xfffffffe,
                     *(uint *)(this_00 + 0x1bae),*(uint *)(this_00 + 0x1bb2));
      }
      pCVar6 = this_00 + 0x1c23;
      iVar4 = 0x16;
      do {
        FUN_006b3430(DAT_008075a8,*(uint *)pCVar6);
        pCVar6 = pCVar6 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (*(uint *)(DAT_0081176c + 0x391) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(DAT_0081176c + 0x3d5),*(uint *)(DAT_0081176c + 0x391),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x3a9),*(uint *)(DAT_0081176c + 0x3ad));
      }
      if (*(uint *)(DAT_0081176c + 0x422) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(DAT_0081176c + 0x466),*(uint *)(DAT_0081176c + 0x422),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x43a),*(uint *)(DAT_0081176c + 0x43e));
      }
      if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x4cb),*(uint *)(DAT_0081176c + 0x4cf));
      }
      FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
      CVar1 = this_00[0x1a5f];
      if ((((CVar1 == (ChooseMapTy)0xc) || (CVar1 == (ChooseMapTy)0x4)) ||
          (CVar1 == (ChooseMapTy)0x5)) || (CVar1 == (ChooseMapTy)0x13)) {
        if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
          FUN_006b34d0(*(uint **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560),0xfffffffe,
                       *(uint *)(DAT_0081176c + 0x578),*(uint *)(DAT_0081176c + 0x57c));
        }
        if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
          FUN_006b34d0(*(uint **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1),0xfffffffe,
                       *(uint *)(DAT_0081176c + 0x609),*(uint *)(DAT_0081176c + 0x60d));
        }
        FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
        FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
      }
      PaintChooseMap(this_00,'\0');
      g_currentExceptionFrame = IStack_b0.previous;
      return;
    }
  }
  else if (CVar1 == (ChooseMapTy)0x4) {
    if ((this_00[0x20b5] != (ChooseMapTy)0x0) && (0 < *(int *)(DAT_0081176c + 0x300))) {
      *(int *)(DAT_0081176c + 0x300) = *(int *)(DAT_0081176c + 0x300) + -1;
      if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
        FUN_006b3730(*(uint **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc),
                     *(uint *)(DAT_0081176c + 0x300),*(uint *)(DAT_0081176c + 0x314),
                     *(uint *)(DAT_0081176c + 0x318));
      }
      iStack_8 = 0;
    }
    if ((this_00[0x20b3] != (ChooseMapTy)0x0) && (*(HoloTy **)(this_00 + 0x20b8) != (HoloTy *)0x0))
    {
      iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x20b8));
      if (iVar4 == 0) {
        if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x20b8) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x20b8) + 3));
        }
      }
      else {
        iStack_8 = 0;
      }
    }
    if ((this_00[0x20b4] != (ChooseMapTy)0x0) && (*(HoloTy **)(this_00 + 0x20bc) != (HoloTy *)0x0))
    {
      iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x20bc));
      if (iVar4 == 0) {
        if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x20bc) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x20bc) + 3));
        }
      }
      else {
        iStack_8 = 0;
      }
    }
    if ((this_00[0x20b7] != (ChooseMapTy)0x0) && (*(HoloTy **)(this_00 + 0x20c0) != (HoloTy *)0x0))
    {
      iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x20c0));
      if (iVar4 == 0) {
        if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x20c0) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x20c0) + 3));
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
      CVar1 = this_00[0x1a5a];
      this_00[0x65] = (ChooseMapTy)0x2;
      if ((CVar1 != (ChooseMapTy)0xff) &&
         (*(int *)(this_00 + (uint)(byte)CVar1 * 0x1fb + 0xd1) != 0)) {
        FUN_006e3b50((undefined4 *)(this_00 + (uint)(byte)CVar1 * 0x1fb + 0xc1));
        g_currentExceptionFrame = IStack_b0.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = IStack_b0.previous;
  return;
}

