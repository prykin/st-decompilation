
void __thiscall
STAllPlayersC::DeleteGuardBoat(STAllPlayersC *this,uint param_1,short param_2,int param_3)

{
  code *pcVar1;
  STAllPlayersC *this_00;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  uint uVar7;
  void *unaff_EDI;
  InternalExceptionFrame IStack_68;
  byte *pbStack_24;
  byte *pbStack_20;
  byte *pbStack_1c;
  int iStack_18;
  STAllPlayersC *pSStack_14;
  undefined4 uStack_10;
  int iStack_c;
  uint uStack_8;
  
  IStack_68.previous = g_currentExceptionFrame;
  iStack_18 = *(int *)((int)&DAT_007f5816 + (char)param_1 * 0xa62);
  g_currentExceptionFrame = &IStack_68;
  pSStack_14 = this;
  iVar2 = __setjmp3(IStack_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  iVar4 = iStack_18;
  if (iVar2 != 0) {
    g_currentExceptionFrame = IStack_68.previous;
    if (iVar2 != -0x5001fff7) {
      iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x296d,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__DeleteGuardBoat_007a83b8);
      if (iVar4 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      RaiseInternalException(iVar2,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x296e);
    }
    return;
  }
  if (iStack_18 == 0) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x291d)
    ;
  }
  iStack_c = *(int *)(iVar4 + 0xc);
  if (param_3 == 1) {
    uVar5 = 0;
    if (0 < iStack_c) {
      do {
        FUN_006acc70(iVar4,uVar5,&pbStack_24);
        uVar6 = 0;
        uVar7 = *(uint *)(pbStack_20 + 0xc);
        if (0 < (int)uVar7) {
          do {
            FUN_006acc70((int)pbStack_20,uVar6,&uStack_8);
            if ((short)uStack_8 == param_2) {
              FUN_006b0c70((int)pbStack_20,uVar6);
              pvVar3 = (void *)thunk_FUN_0042b620(param_1,uStack_8,1);
              uStack_10 = *(undefined4 *)(DAT_00802a38 + 0xe4);
              thunk_FUN_0045ef00(pvVar3,0x21,&uStack_10);
              break;
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < (int)uVar7);
        }
        if (uVar6 != uVar7) {
          if (uVar7 == 1) {
            FUN_006ae110(pbStack_24);
            FUN_006ae110(pbStack_20);
            FUN_006ae110(pbStack_1c);
            FUN_006b0c70(iStack_18,uVar5);
            iStack_c = iStack_c + -1;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iStack_18;
      } while ((int)uVar5 < iStack_c);
    }
    if (iStack_c == 0) {
      DeletePGPairs(pSStack_14,(char)param_1);
      g_currentExceptionFrame = IStack_68.previous;
      return;
    }
  }
  else {
    uVar5 = 0;
    if (0 < iStack_c) {
      do {
        FUN_006acc70(iVar4,uVar5,&pbStack_24);
        uVar6 = 0;
        uVar7 = *(uint *)(pbStack_24 + 0xc);
        if (0 < (int)uVar7) {
          do {
            FUN_006acc70((int)pbStack_24,uVar6,&uStack_8);
            if ((short)uStack_8 == param_2) {
              FUN_006b0c70((int)pbStack_24,uVar6);
              break;
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < (int)uVar7);
        }
        if ((uVar6 != uVar7) && (uVar7 == 1)) {
          uVar7 = 0;
          iVar4 = *(int *)(pbStack_20 + 0xc);
          if (0 < iVar4) {
            do {
              FUN_006acc70((int)pbStack_20,uVar7,&uStack_8);
              pvVar3 = (void *)thunk_FUN_0042b620(param_1,uStack_8,1);
              if (pvVar3 == (void *)0x0) {
                iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2955,0,0,
                                           &DAT_007a4ccc,s_STAllPlayersC__DeleteGuardBoat_N_007a83e0
                                          );
                if (iVar2 != 0) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
              }
              else {
                uStack_10 = *(undefined4 *)(DAT_00802a38 + 0xe4);
                thunk_FUN_0045ef00(pvVar3,0x21,&uStack_10);
              }
              uVar7 = uVar7 + 1;
            } while ((int)uVar7 < iVar4);
          }
          FUN_006ae110(pbStack_24);
          FUN_006ae110(pbStack_20);
          FUN_006ae110(pbStack_1c);
          FUN_006b0c70(iStack_18,uVar5);
          iStack_c = iStack_c + -1;
          uVar5 = uVar5 - 1;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iStack_18;
      } while ((int)uVar5 < iStack_c);
    }
    if (iStack_c == 0) {
      DeletePGPairs(pSStack_14,(char)param_1);
      g_currentExceptionFrame = IStack_68.previous;
      return;
    }
  }
  this_00 = pSStack_14;
  OptimizeGuardBoats(pSStack_14,(char)param_1);
  DistributeGuardBoats(this_00,param_1);
  g_currentExceptionFrame = IStack_68.previous;
  return;
}

