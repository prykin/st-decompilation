
undefined4 __thiscall STGroupBoatC::DistributeTargets(STGroupBoatC *this,uint *param_1)

{
  code *pcVar1;
  STGroupBoatC *this_00;
  char cVar8;
  int iVar2;
  STBoatC *pSVar3;
  undefined4 uVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  undefined4 extraout_ECX;
  int *piVar9;
  undefined4 extraout_ECX_00;
  ushort uVar10;
  undefined4 extraout_EDX;
  uint uVar11;
  uint uVar12;
  undefined4 unaff_ESI;
  short sVar13;
  void *unaff_EDI;
  uint *puVar14;
  undefined4 *puVar15;
  InternalExceptionFrame IStack_a4;
  STGroupBoatC *pSStack_60;
  uint uStack_5c;
  int iStack_58;
  uint uStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  int iStack_3f;
  short sStack_3b;
  short sStack_39;
  uint *puStack_34;
  uint *puStack_30;
  short sStack_2a;
  short sStack_28;
  short sStack_26;
  uint uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  short sStack_16;
  int iStack_14;
  byte *pbStack_10;
  uint uStack_c;
  undefined1 uStack_5;
  
  uVar11 = 0;
  pbStack_10 = (byte *)0x0;
  puStack_34 = (uint *)0x0;
  puStack_30 = (uint *)0x0;
  IStack_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_a4;
  pSStack_60 = this;
  iVar2 = Library::MSVCRT::__setjmp3(IStack_a4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pSStack_60;
  if (iVar2 != 0) {
    g_currentExceptionFrame = IStack_a4.previous;
    if (iVar2 == -0x5001fff7) {
      if (pbStack_10 != (byte *)0x0) {
        FUN_006ae110(pbStack_10);
      }
      return 0;
    }
    iVar7 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x5eb,0,iVar2,&DAT_007a4ccc,
                               s_STGroupBoatC__DistributeTargets_007abf14);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    RaiseInternalException(iVar2,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x5ec);
    return 0xffffffff;
  }
  if (*(int *)(pSStack_60 + 0x20e) == 0) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x55a);
  }
  Library::DKW::TBL::FUN_006afe40((int *)&pbStack_10,param_1);
  uStack_20 = *(undefined4 *)(DAT_00802a38 + 0xe4);
  iStack_14 = *(int *)(pbStack_10 + 0xc);
  if (0 < iStack_14) {
    do {
      iVar2 = iStack_14;
      FUN_006acc70((int)pbStack_10,uVar11,&uStack_c);
      if ((short)uStack_c == -1) {
        FUN_006b0c70((int)pbStack_10,uVar11);
        uVar11 = uVar11 - 1;
        iStack_14 = iVar2 + -1;
      }
      else {
        pSVar3 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (DAT_007fa174,CONCAT31((int3)((uint)extraout_EDX >> 8),this_00[0x24]),
                            uStack_c,1);
        if (pSVar3 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x564);
        }
        uVar4 = (**(code **)(*(int *)pSVar3 + 0x2c))();
        switch(uVar4) {
        case 7:
        case 8:
        case 0xc:
        case 0x13:
        case 0x14:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x24:
        case 0x25:
          FUN_006b0c70((int)pbStack_10,uVar11);
          uVar11 = uVar11 - 1;
          iStack_14 = iStack_14 + -1;
          STBoatC::CmdToObj(pSVar3,3,&uStack_20);
          break;
        default:
          if ((*(int *)(this_00 + 0x20a) == 1) &&
             (iVar2 = (**(code **)(*(int *)pSVar3 + 0x2c))(), iVar2 != 0x17)) {
            FUN_006b0c70((int)pbStack_10,uVar11);
            uVar11 = uVar11 - 1;
            iStack_14 = iStack_14 + -1;
            iVar2 = thunk_FUN_00490d90((int)pSVar3);
            if (iVar2 == 0) {
              STBoatC::CmdToObj(pSVar3,3,&uStack_20);
            }
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iStack_14);
  }
  iVar2 = iStack_14;
  uVar11 = 0;
  if (iStack_14 != 0) {
    iVar7 = *(int *)(this_00 + 0x20e);
    *(undefined4 *)(this_00 + 0x212) = 0;
    uVar12 = 0;
    if (*(int *)(iVar7 + 0xc) != 0) {
      do {
        FUN_006acc70(iVar7,uVar11,&uStack_1c);
        if (uStack_1c._2_2_ != -1) {
          *(int *)(this_00 + 0x212) = *(int *)(this_00 + 0x212) + 1;
        }
        iVar7 = *(int *)(this_00 + 0x20e);
        uVar12 = uVar12 + 1;
        uVar11 = uVar12 & 0xffff;
      } while (uVar11 < *(uint *)(iVar7 + 0xc));
    }
    if (*(int *)(this_00 + 0x212) == 0) {
      RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x58f)
      ;
    }
    uVar11 = 0;
    uStack_24 = 0;
    if (0 < iVar2) {
      do {
        FUN_006acc70((int)pbStack_10,uVar11,&uStack_c);
        if ((short)uStack_c != -1) {
          pSVar3 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,CONCAT31((int3)((uint)extraout_ECX >> 8),this_00[0x24]),
                              uStack_c,1);
          iVar2 = (**(code **)(*(int *)pSVar3 + 0x2c))();
          if (iVar2 == 9) {
            GetDepotForAttack(this_00,uStack_c,&uStack_5,&sStack_16,&sStack_2a,&sStack_28,&sStack_26
                             );
            if (sStack_16 == -1) {
              puVar15 = &uStack_20;
              iVar2 = 3;
              uStack_20 = *(undefined4 *)(DAT_00802a38 + 0xe4);
            }
            else {
              uStack_44 = *(undefined4 *)(this_00 + 0x20a);
              sStack_3b = sStack_16;
              puVar15 = &uStack_48;
              uStack_40 = uStack_5;
              iStack_3f = 1;
              iVar2 = 2;
              uStack_48 = *(undefined4 *)(DAT_00802a38 + 0xe4);
            }
          }
          else {
            uStack_5c = *(int *)(this_00 + 0x216) + 1;
            iStack_50 = 0;
            iStack_4c = 2;
            do {
              uVar11 = *(int *)(this_00 + 0x31) * 0x41c64e6d + 0x3039;
              *(uint *)(this_00 + 0x31) = uVar11;
              uStack_54 = (uVar11 >> 0x10) % uStack_5c;
              iVar2 = 0;
              if (0 < *(int *)(this_00 + 0x21a)) {
                piVar5 = *(int **)(this_00 + 0x21e);
                piVar9 = piVar5;
                uVar11 = uStack_54;
                do {
                  if ((*piVar9 != -1) &&
                     (uVar10 = (short)uVar11 - (short)piVar9[1], uVar11 = (uint)uVar10,
                     (short)uVar10 < 1)) {
                    if (iStack_50 < piVar5[iVar2 * 2 + 1]) {
                      iStack_50 = piVar5[(short)iVar2 * 2 + 1];
                      iStack_58 = iVar2;
                    }
                    break;
                  }
                  iVar2 = iVar2 + 1;
                  piVar9 = piVar9 + 2;
                } while (iVar2 < *(int *)(this_00 + 0x21a));
              }
              iStack_4c = iStack_4c + -1;
            } while (iStack_4c != 0);
            sVar13 = (short)iStack_58;
            FUN_006acc70(*(int *)(this_00 + 0x20e),(int)sVar13,&uStack_1c);
            uStack_48 = *(undefined4 *)(DAT_00802a38 + 0xe4);
            uStack_40 = (undefined1)uStack_1c;
            uStack_44 = *(undefined4 *)(this_00 + 0x20a);
            sStack_3b = uStack_1c._2_2_;
            cVar8 = (char)((uint)uStack_1c >> 8);
            iStack_3f = (int)cVar8;
            sStack_39 = sVar13;
            pSVar3 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (DAT_007fa174,CONCAT31(cVar8 >> 7,this_00[0x24]),uStack_c,1);
            puVar15 = &uStack_48;
            iVar2 = 2;
          }
          STBoatC::CmdToObj(pSVar3,iVar2,puVar15);
        }
        uStack_24 = uStack_24 + 1;
        uVar11 = uStack_24 & 0xffff;
      } while ((int)uVar11 < iStack_14);
    }
    if (*(int *)(this_00 + 0x20a) == 1) {
      iStack_14 = *(int *)(*(int *)(this_00 + 0x29) + 0xc);
      uVar11 = 0;
      uStack_24 = 0;
      puVar6 = puStack_34;
      if (0 < iStack_14) {
        do {
          FUN_006acc70(*(int *)(this_00 + 0x29),uVar11,&uStack_c);
          if ((short)uStack_c != -1) {
            piVar5 = (int *)STAllPlayersC::GetObjPtr
                                      (DAT_007fa174,
                                       CONCAT31((int3)((uint)extraout_ECX_00 >> 8),this_00[0x24]),
                                       uStack_c,1);
            if (piVar5 == (int *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x5c4);
            }
            uVar4 = (**(code **)(*piVar5 + 0x2c))();
            switch(uVar4) {
            case 7:
            case 8:
            case 0xc:
            case 0x13:
            case 0x14:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
            case 0x24:
            case 0x25:
              break;
            default:
              iVar2 = (**(code **)(*piVar5 + 0x2c))();
              if (iVar2 == 0x17) {
                puVar14 = puVar6;
                if (puVar6 == (uint *)0x0) {
                  puVar6 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                  puVar14 = puVar6;
                  puStack_34 = puVar6;
                }
              }
              else {
                iVar2 = thunk_FUN_00490d90((int)piVar5);
                if (iVar2 == 0) break;
                puVar14 = puStack_30;
                if (puStack_30 == (uint *)0x0) {
                  puStack_30 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                  puVar14 = puStack_30;
                }
              }
              Library::DKW::TBL::FUN_006ae1c0(puVar14,&uStack_c);
            }
          }
          uStack_24 = uStack_24 + 1;
          uVar11 = uStack_24 & 0xffff;
        } while ((int)uVar11 < iStack_14);
      }
      puVar14 = puStack_30;
      STAllPlayersC::RegisterPGPair
                (DAT_007fa174,CONCAT31((int3)((uint)iStack_14 >> 8),this_00[0x24]),puVar6,puStack_30
                );
      if (puVar6 != (uint *)0x0) {
        FUN_006ae110((byte *)puVar6);
      }
      if (puVar14 != (uint *)0x0) {
        FUN_006ae110((byte *)puVar14);
      }
    }
  }
  if (pbStack_10 != (byte *)0x0) {
    FUN_006ae110(pbStack_10);
  }
  g_currentExceptionFrame = IStack_a4.previous;
  return 0;
}

