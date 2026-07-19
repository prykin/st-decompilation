
undefined4 __thiscall
STAllPlayersC::_DeleteGuardBoat(STAllPlayersC *this,uint param_1,short param_2,int param_3)

{
  code *pcVar1;
  int exceptionCode;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  uint uVar7;
  void *unaff_EDI;
  InternalExceptionFrame IStack_6c;
  byte *pbStack_28;
  byte *pbStack_24;
  byte *pbStack_20;
  STAllPlayersC *pSStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  uint uStack_c;
  int iStack_8;
  
  uStack_18 = 0xffffffff;
  IStack_6c.previous = g_currentExceptionFrame;
  iStack_10 = *(int *)((int)&DAT_007f5816 + (char)param_1 * 0xa62);
  g_currentExceptionFrame = &IStack_6c;
  pSStack_1c = this;
  exceptionCode = __setjmp3(IStack_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  iVar3 = iStack_10;
  if (exceptionCode != 0) {
    g_currentExceptionFrame = IStack_6c.previous;
    if (exceptionCode != -0x5001fff7) {
      iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2906,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC___DeleteGuardBoat_007a8390);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      RaiseInternalException(exceptionCode,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2907);
    }
    return uStack_18;
  }
  if (iStack_10 == 0) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x28ba)
    ;
  }
  iStack_8 = *(int *)(iVar3 + 0xc);
  if (param_3 == 1) {
    uVar5 = 0;
    if (0 < iStack_8) {
      do {
        FUN_006acc70(iVar3,uVar5,&pbStack_28);
        uVar6 = 0;
        uVar7 = *(uint *)(pbStack_24 + 0xc);
        if (0 < (int)uVar7) {
          do {
            FUN_006acc70((int)pbStack_24,uVar6,&uStack_c);
            if ((short)uStack_c == param_2) {
              FUN_006b0c70((int)pbStack_24,uVar6);
              pvVar2 = (void *)thunk_FUN_0042b620(param_1,uStack_c,1);
              uStack_14 = *(undefined4 *)(DAT_00802a38 + 0xe4);
              thunk_FUN_0045ef00(pvVar2,0x21,&uStack_14);
              break;
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < (int)uVar7);
        }
        if (uVar6 != uVar7) {
          if (uVar7 == 1) {
            FUN_006ae110(pbStack_28);
            FUN_006ae110(pbStack_24);
            FUN_006ae110(pbStack_20);
            FUN_006b0c70(iStack_10,uVar5);
            iStack_8 = iStack_8 + -1;
          }
          uStack_18 = 0;
          break;
        }
        uVar5 = uVar5 + 1;
        iVar3 = iStack_10;
      } while ((int)uVar5 < iStack_8);
    }
  }
  else {
    uVar5 = 0;
    if (0 < iStack_8) {
      do {
        FUN_006acc70(iVar3,uVar5,&pbStack_28);
        uVar6 = 0;
        uVar7 = *(uint *)(pbStack_28 + 0xc);
        if (0 < (int)uVar7) {
          do {
            FUN_006acc70((int)pbStack_28,uVar6,&uStack_c);
            if ((short)uStack_c == param_2) {
              FUN_006b0c70((int)pbStack_28,uVar6);
              break;
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < (int)uVar7);
        }
        if (uVar6 != uVar7) {
          if (uVar7 == 1) {
            uVar7 = 0;
            iVar3 = *(int *)(pbStack_24 + 0xc);
            if (0 < iVar3) {
              do {
                FUN_006acc70((int)pbStack_24,uVar7,&uStack_c);
                pvVar2 = (void *)thunk_FUN_0042b620(param_1,uStack_c,1);
                uStack_14 = *(undefined4 *)(DAT_00802a38 + 0xe4);
                thunk_FUN_0045ef00(pvVar2,0x21,&uStack_14);
                uVar7 = uVar7 + 1;
              } while ((int)uVar7 < iVar3);
            }
            FUN_006ae110(pbStack_28);
            FUN_006ae110(pbStack_24);
            FUN_006ae110(pbStack_20);
            FUN_006b0c70(iStack_10,uVar5);
            iStack_8 = iStack_8 + -1;
            uVar5 = uVar5 - 1;
          }
          uStack_18 = 0;
        }
        uVar5 = uVar5 + 1;
        iVar3 = iStack_10;
      } while ((int)uVar5 < iStack_8);
    }
  }
  if (iStack_8 == 0) {
    DeletePGPairs(pSStack_1c,(char)param_1);
  }
  g_currentExceptionFrame = IStack_6c.previous;
  return uStack_18;
}

