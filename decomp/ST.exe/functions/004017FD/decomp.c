
void __thiscall STAllPlayersC::OptimizeGuardBoats(STAllPlayersC *this,char param_1)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *unaff_EDI;
  InternalExceptionFrame IStack_90;
  byte *pbStack_4c;
  byte *pbStack_48;
  byte *pbStack_44;
  uint *puStack_40;
  int iStack_3c;
  uint *puStack_38;
  int iStack_30;
  int iStack_2c;
  short sStack_28;
  uint *puStack_26;
  undefined4 uStack_22;
  int iStack_1c;
  uint uStack_18;
  short sStack_12;
  uint uStack_10;
  uint uStack_c;
  short sStack_6;
  
  iStack_1c = *(int *)((int)&DAT_007f5816 + param_1 * 0xa62);
  puStack_40 = *(uint **)((int)&DAT_007f581a + param_1 * 0xa62);
  if (iStack_1c != 0) {
    IStack_90.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_90;
    iVar2 = Library::MSVCRT::__setjmp3(IStack_90.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar2 == 0) {
      uStack_18 = *(uint *)(iStack_1c + 0xc);
      iVar2 = iStack_1c;
      if (1 < uStack_18) {
        iVar5 = uStack_18 - 1;
        uStack_c = 0;
        if (0 < iVar5) {
          do {
            FUN_006acc70(iVar2,uStack_c,&iStack_3c);
            uStack_10 = uStack_c + 1;
            if ((int)uStack_10 <= iVar5) {
              do {
                iStack_30 = iVar5;
                FUN_006acc70(iVar2,uStack_10,&pbStack_4c);
                uVar7 = *(uint *)(iStack_3c + 0xc);
                if (uVar7 == *(uint *)(pbStack_4c + 0xc)) {
                  uVar4 = 0;
                  iStack_2c = 1;
                  if (0 < (int)uVar7) {
                    do {
                      FUN_006acc70(iStack_3c,uVar4,(undefined4 *)&sStack_6);
                      uVar6 = 0;
                      do {
                        FUN_006acc70((int)pbStack_4c,uVar6,(undefined4 *)&sStack_12);
                        if (sStack_6 == sStack_12) break;
                        uVar6 = uVar6 + 1;
                      } while ((int)uVar6 < (int)uVar7);
                      if (uVar6 == uVar7) {
                        iStack_2c = 0;
                        break;
                      }
                      uVar4 = uVar4 + 1;
                    } while ((int)uVar4 < (int)uVar7);
                  }
                  if (iStack_2c == 1) {
                    uVar7 = 0;
                    if (0 < *(int *)(pbStack_48 + 0xc)) {
                      do {
                        FUN_006acc70((int)pbStack_48,uVar7,(undefined4 *)&sStack_12);
                        Library::DKW::TBL::FUN_006ae1c0(puStack_38,(undefined4 *)&sStack_12);
                        uVar7 = uVar7 + 1;
                      } while ((int)uVar7 < *(int *)(pbStack_48 + 0xc));
                    }
                    FUN_006ae110(pbStack_4c);
                    FUN_006ae110(pbStack_48);
                    if (pbStack_44 != (byte *)0x0) {
                      FUN_006ae110(pbStack_44);
                    }
                    FUN_006b0c70(iStack_1c,uStack_10);
                    uStack_18 = uStack_18 - 1;
                    iStack_30 = iStack_30 + -1;
                    uStack_10 = uStack_10 - 1;
                  }
                }
                uStack_10 = uStack_10 + 1;
                iVar2 = iStack_1c;
                iVar5 = iStack_30;
              } while ((int)uStack_10 <= iStack_30);
            }
            uStack_c = uStack_c + 1;
            iVar5 = uStack_18 - 1;
          } while ((int)uStack_c < iVar5);
        }
      }
      puVar3 = puStack_40;
      if (puStack_40 != (uint *)0x0) {
        iVar5 = *(int *)((int)puStack_40 + 0xc);
        uStack_c = 0;
        if (0 < iVar5) {
          do {
            FUN_006acc70((int)puVar3,uStack_c,(undefined4 *)&sStack_28);
            if (puStack_26 != (uint *)0x0) {
              FUN_006ae110((byte *)puStack_26);
            }
            uStack_c = uStack_c + 1;
          } while ((int)uStack_c < iVar5);
        }
        FUN_006ae110((byte *)puVar3);
        puStack_40 = (uint *)0x0;
      }
      FUN_006acc70(iVar2,0,&iStack_3c);
      uVar7 = *(uint *)(iStack_3c + 0xc);
      puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uVar7,10,1);
      *(uint **)((int)&DAT_007f581a + param_1 * 0xa62) = puVar3;
      uStack_10 = 0;
      uStack_c = 0;
      puStack_40 = puVar3;
      if (0 < (int)uVar7) {
        do {
          FUN_006acc70(iStack_3c,uStack_c,(undefined4 *)&sStack_6);
          sStack_28 = sStack_6;
          puStack_26 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
          uStack_22 = 0;
          Library::DKW::TBL::FUN_006ae1c0(puStack_26,&uStack_10);
          Library::DKW::TBL::FUN_006ae1c0(puVar3,(undefined4 *)&sStack_28);
          uStack_c = uStack_c + 1;
        } while ((int)uStack_c < (int)uVar7);
      }
      if ((1 < uStack_18) && (uStack_c = 1, 1 < (int)uStack_18)) {
        do {
          FUN_006acc70(iVar2,uStack_c,&iStack_3c);
          iStack_2c = *(int *)(iStack_3c + 0xc);
          uStack_10 = 0;
          if (0 < iStack_2c) {
            do {
              FUN_006acc70(iStack_3c,uStack_10,(undefined4 *)&sStack_6);
              uVar7 = puVar3[3];
              uVar4 = 0;
              if (0 < (int)uVar7) {
                do {
                  FUN_006acc70((int)puVar3,uVar4,(undefined4 *)&sStack_28);
                  if (sStack_28 == sStack_6) {
                    Library::DKW::TBL::FUN_006ae1c0(puStack_26,&uStack_c);
                    break;
                  }
                  uVar4 = uVar4 + 1;
                } while ((int)uVar4 < (int)uVar7);
              }
              if (uVar4 == uVar7) {
                sStack_28 = sStack_6;
                puStack_26 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
                uStack_22 = 0;
                Library::DKW::TBL::FUN_006ae1c0(puStack_26,&uStack_c);
                Library::DKW::TBL::FUN_006ae1c0(puVar3,(undefined4 *)&sStack_28);
              }
              uStack_10 = uStack_10 + 1;
            } while ((int)uStack_10 < iStack_2c);
          }
          uStack_c = uStack_c + 1;
          iVar2 = iStack_1c;
        } while ((int)uStack_c < (int)uStack_18);
      }
      g_currentExceptionFrame = IStack_90.previous;
      return;
    }
    g_currentExceptionFrame = IStack_90.previous;
    if (iVar2 != -0x5001fff7) {
      iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2a25,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__OptimizeGuardBoat_007a8430);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      RaiseInternalException(iVar2,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2a26);
    }
  }
  return;
}

