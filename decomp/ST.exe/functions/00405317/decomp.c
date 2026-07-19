
void __thiscall MainMenuTy::NoneMainMenu(MainMenuTy *this,void *param_1)

{
  MainMenuTy MVar1;
  code *pcVar2;
  MainMenuTy *this_00;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  MainMenuTy *pMVar7;
  void *unaff_EDI;
  InternalExceptionFrame IStack_54;
  MainMenuTy *pMStack_10;
  MainMenuTy *pMStack_c;
  int iStack_8;
  
  iStack_8 = 1;
  pMStack_10 = this;
  DVar3 = timeGetTime();
  *(DWORD *)(this + 0x61) = DVar3;
  IStack_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_54;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pMStack_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = IStack_54.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_main_obj_cpp_007cc8e8,0xd2,0,iVar4,&DAT_007a4ccc,
                               s_MainMenuTy__NoneMainMenu_007cc980);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_main_obj_cpp_007cc8e8,0xd2);
    return;
  }
  LightPalette(pMStack_10);
  AnimationMainMenu(this_00);
  MVar1 = this_00[0x65];
  if (MVar1 == (MainMenuTy)0x1) {
    iVar4 = 0;
    if (this_00[0x9a] != (MainMenuTy)0x0) {
      pMVar7 = this_00 + 0x221;
      do {
        if ((pMVar7[-0x13f] != (MainMenuTy)0x0) &&
           (*(uint *)(pMVar7 + 0x24) <= *(uint *)(this_00 + 0x61) - *(uint *)(pMVar7 + 0x28))) {
          *(uint *)(pMVar7 + 0x28) = *(uint *)(this_00 + 0x61);
          uVar5 = *(uint *)(pMVar7 + -0x14);
          *(uint *)(pMVar7 + -0x14) = uVar5 + 1;
          if ((int)*(uint *)(pMVar7 + -0x10) <= (int)(uVar5 + 1)) {
            *(uint *)(pMVar7 + -0x14) = 0;
          }
          if (*(uint *)(pMVar7 + -0x18) != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      (*(uint **)(pMVar7 + 0x2c),*(uint *)(pMVar7 + -0x18),*(uint *)(pMVar7 + -0x14)
                       ,*(uint *)pMVar7,*(uint *)(pMVar7 + 4));
          }
        }
        iVar4 = iVar4 + 1;
        pMVar7 = pMVar7 + 0x1fb;
      } while (iVar4 < (int)(uint)(byte)this_00[0x9a]);
    }
  }
  else if (MVar1 == (MainMenuTy)0x3) {
    iVar4 = 0;
    uVar5 = (uint)(byte)this_00[0x9a];
    if (uVar5 != 0) {
      do {
        if (*(int *)(this_00 + iVar4 * 0x1fb + 0xbc) != 0) {
          if ((uint)(*(int *)(this_00 + 0x61) - *(int *)(this_00 + iVar4 * 0x1fb + 0x127)) <
              *(uint *)(this_00 + iVar4 * 0x1fb + 0x123)) {
            iVar4 = 0;
            iStack_8 = 0;
            if (uVar5 != 0) {
              pMVar7 = this_00 + 0x249;
              do {
                if (pMVar7[-0x167] != (MainMenuTy)0x0) {
                  *(undefined4 *)pMVar7 = *(undefined4 *)(this_00 + 0x61);
                }
                iVar4 = iVar4 + 1;
                pMVar7 = pMVar7 + 0x1fb;
              } while (iVar4 < (int)(uint)(byte)this_00[0x9a]);
            }
          }
          else if (*(int *)(this_00 + iVar4 * 0x1fb + 0xeb) <
                   *(int *)(this_00 + iVar4 * 0x1fb + 0xef) + -1) {
            if ((*(int *)(this_00 + iVar4 * 0x1fb + 0xeb) == 0) &&
               (*(uint *)(this_00 + iVar4 * 0x1fb + 0xe7) != 0xffffffff)) {
              Library::DKW::DDX::FUN_006b34d0
                        (*(uint **)(this_00 + iVar4 * 0x1fb + 299),
                         *(uint *)(this_00 + iVar4 * 0x1fb + 0xe7),0xfffffffe,
                         *(uint *)(this_00 + iVar4 * 0x1fb + 0xff),
                         *(uint *)(this_00 + iVar4 * 0x1fb + 0x103));
            }
            *(int *)(this_00 + iVar4 * 0x1fb + 0xeb) = *(int *)(this_00 + iVar4 * 0x1fb + 0xeb) + 1;
            if (*(uint *)(this_00 + iVar4 * 0x1fb + 0xe7) != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        (*(uint **)(this_00 + iVar4 * 0x1fb + 299),
                         *(uint *)(this_00 + iVar4 * 0x1fb + 0xe7),
                         *(uint *)(this_00 + iVar4 * 0x1fb + 0xeb),
                         *(uint *)(this_00 + iVar4 * 0x1fb + 0xff),
                         *(uint *)(this_00 + iVar4 * 0x1fb + 0x103));
            }
            iStack_8 = 0;
          }
          else if (*(int *)(this_00 + iVar4 * 0x1fb + 0x17c) <
                   *(int *)(this_00 + iVar4 * 0x1fb + 0x180) + -3) {
            if (*(int *)(this_00 + iVar4 * 0x1fb + 0x17c) == 0) {
              if (*(uint *)(this_00 + iVar4 * 0x1fb + 0x178) != 0xffffffff) {
                Library::DKW::DDX::FUN_006b34d0
                          (*(uint **)(this_00 + iVar4 * 0x1fb + 0x1bc),
                           *(uint *)(this_00 + iVar4 * 0x1fb + 0x178),0xfffffffe,
                           *(uint *)(this_00 + iVar4 * 0x1fb + 400),
                           *(uint *)(this_00 + iVar4 * 0x1fb + 0x194));
              }
              if ((this_00[iVar4 * 0x1fb + 0xe2] != (MainMenuTy)0x0) &&
                 (*(uint *)(this_00 + iVar4 * 0x1fb + 0x209) != 0xffffffff)) {
                Library::DKW::DDX::FUN_006b34d0
                          (*(uint **)(this_00 + iVar4 * 0x1fb + 0x24d),
                           *(uint *)(this_00 + iVar4 * 0x1fb + 0x209),0xfffffffe,
                           *(uint *)(this_00 + iVar4 * 0x1fb + 0x221),
                           *(uint *)(this_00 + iVar4 * 0x1fb + 0x225));
              }
            }
            *(int *)(this_00 + iVar4 * 0x1fb + 0x17c) =
                 *(int *)(this_00 + iVar4 * 0x1fb + 0x17c) + 1;
            if (*(uint *)(this_00 + iVar4 * 0x1fb + 0x178) != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        (*(uint **)(this_00 + iVar4 * 0x1fb + 0x1bc),
                         *(uint *)(this_00 + iVar4 * 0x1fb + 0x178),
                         *(uint *)(this_00 + iVar4 * 0x1fb + 0x17c),
                         *(uint *)(this_00 + iVar4 * 0x1fb + 400),
                         *(uint *)(this_00 + iVar4 * 0x1fb + 0x194));
            }
            thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
            iStack_8 = 0;
          }
        }
        iVar4 = iVar4 + 1;
        uVar5 = (uint)(byte)this_00[0x9a];
      } while (iVar4 < (int)uVar5);
    }
    if (((this_00[0x1ee3] != (MainMenuTy)0x0) && (*(int *)(DAT_0081176c + 0x2e6) != 0)) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      iStack_8 = 0;
    }
    if (iStack_8 != 0) {
      if (this_00[0x9a] != (MainMenuTy)0x0) {
        pMStack_c = this_00 + 0x66;
        pMVar7 = this_00 + 0xa3;
        iVar4 = 0x68ff;
        do {
          if (*(int *)pMStack_c == 0) {
            iVar6 = MMObjTy::CreateSprBut
                              ((MMObjTy *)this_00,1,(uint)(*(int *)(this_00 + 0x1edf) != 0),
                               *(int *)(pMVar7 + 0x5c) + *(int *)(pMVar7 + -8),
                               *(int *)(pMVar7 + 0x60) + *(int *)(pMVar7 + -4),*(undefined4 *)pMVar7
                               ,*(undefined4 *)(pMVar7 + 4),iVar4,iVar4 + 0x80);
            *(int *)pMStack_c = iVar6;
          }
          pMStack_c = pMStack_c + 4;
          iVar6 = iVar4 + -0x68fe;
          pMVar7 = pMVar7 + 0x1fb;
          iVar4 = iVar4 + 1;
        } while (iVar6 < (int)(uint)(byte)this_00[0x9a]);
      }
      this_00[0x65] = (MainMenuTy)0x1;
      if (*(int *)(this_00 + 0x1a6f) != 0) {
        FUN_006e3db0((int)(this_00 + 0x1a5f));
        *(undefined4 *)(this_00 + 0x1a6f) = 0;
        g_currentExceptionFrame = IStack_54.previous;
        return;
      }
    }
  }
  else if (MVar1 == (MainMenuTy)0x4) {
    iVar4 = 0;
    if (this_00[0x9a] != (MainMenuTy)0x0) {
      pMVar7 = this_00 + 0x178;
      do {
        if ((uint)(*(int *)(this_00 + 0x61) - *(int *)(pMVar7 + -0x51)) < *(uint *)(pMVar7 + -0x55))
        {
LAB_005b353c:
          iStack_8 = 0;
        }
        else {
          if (pMVar7[-0xbd] != (MainMenuTy)0x0) {
            if (*(uint *)pMVar7 != 0xffffffff) {
              FUN_006b3af0(*(int **)(pMVar7 + 0x44),*(uint *)pMVar7);
            }
            if ((pMVar7[-0x96] != (MainMenuTy)0x0) && (*(uint *)(pMVar7 + 0x91) != 0xffffffff)) {
              FUN_006b3af0(*(int **)(pMVar7 + 0xd5),*(uint *)(pMVar7 + 0x91));
            }
            pMVar7[-0xbd] = (MainMenuTy)0x0;
          }
          if (0 < *(int *)(pMVar7 + -0x8d)) {
            uVar5 = *(int *)(pMVar7 + -0x8d) - 1;
            *(uint *)(pMVar7 + -0x8d) = uVar5;
            if (*(uint *)(pMVar7 + -0x91) != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        (*(uint **)(pMVar7 + -0x4d),*(uint *)(pMVar7 + -0x91),uVar5,
                         *(uint *)(pMVar7 + -0x79),*(uint *)(pMVar7 + -0x75));
            }
            goto LAB_005b353c;
          }
        }
        iVar4 = iVar4 + 1;
        pMVar7 = pMVar7 + 0x1fb;
      } while (iVar4 < (int)(uint)(byte)this_00[0x9a]);
    }
    iVar4 = 0;
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x02')) {
      iStack_8 = 0;
    }
    if (iStack_8 != 0) {
      this_00[0x65] = (MainMenuTy)0x2;
      if (this_00[0x9a] != (MainMenuTy)0x0) {
        pMVar7 = this_00 + 0xe7;
        do {
          if (*(uint *)pMVar7 != 0xffffffff) {
            FUN_006b3af0(*(int **)(pMVar7 + 0x44),*(uint *)pMVar7);
          }
          iVar4 = iVar4 + 1;
          pMVar7 = pMVar7 + 0x1fb;
        } while (iVar4 < (int)(uint)(byte)this_00[0x9a]);
      }
      if (*(int *)(this_00 + (uint)(byte)this_00[0x1a5a] * 0x1fb + 0xd1) != 0) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(this_00 + (uint)(byte)this_00[0x1a5a] * 0x1fb + 0xc1));
        g_currentExceptionFrame = IStack_54.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = IStack_54.previous;
  return;
}

