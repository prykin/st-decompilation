
undefined4 __thiscall STGroupBoatC::DistributeTargets(STGroupBoatC *this,uint *param_1)

{
  code *pcVar1;
  STGroupBoatC *this_00;
  char cVar7;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 extraout_ECX;
  int *piVar8;
  undefined4 extraout_ECX_00;
  ushort uVar9;
  undefined4 extraout_EDX;
  uint uVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  short sVar12;
  void *unaff_EDI;
  uint *puVar13;
  undefined4 *puVar14;
  undefined4 uStack_a4;
  undefined4 auStack_a0 [16];
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
  
  uVar10 = 0;
  pbStack_10 = (byte *)0x0;
  puStack_34 = (uint *)0x0;
  puStack_30 = (uint *)0x0;
  uStack_a4 = DAT_00858df8;
  DAT_00858df8 = &uStack_a4;
  pSStack_60 = this;
  iVar2 = __setjmp3(auStack_a0,0,unaff_EDI,unaff_ESI);
  this_00 = pSStack_60;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_a4;
    if (iVar2 == -0x5001fff7) {
      if (pbStack_10 != (byte *)0x0) {
        FUN_006ae110(pbStack_10);
      }
      return 0;
    }
    iVar6 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x5eb,0,iVar2,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    FUN_006a5e40(iVar2,0,0x7abe3c,0x5ec);
    return 0xffffffff;
  }
  if (*(int *)(pSStack_60 + 0x20e) == 0) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x55a);
  }
  FUN_006afe40((int *)&pbStack_10,param_1);
  uStack_20 = *(undefined4 *)(DAT_00802a38 + 0xe4);
  iStack_14 = *(int *)(pbStack_10 + 0xc);
  if (0 < iStack_14) {
    do {
      iVar2 = iStack_14;
      FUN_006acc70((int)pbStack_10,uVar10,&uStack_c);
      if ((short)uStack_c == -1) {
        FUN_006b0c70((int)pbStack_10,uVar10);
        uVar10 = uVar10 - 1;
        iStack_14 = iVar2 + -1;
      }
      else {
        piVar3 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),this_00[0x24]),
                                           uStack_c,1);
        if (piVar3 == (int *)0x0) {
          FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x564);
        }
        uVar4 = (**(code **)(*piVar3 + 0x2c))();
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
          FUN_006b0c70((int)pbStack_10,uVar10);
          uVar10 = uVar10 - 1;
          iStack_14 = iStack_14 + -1;
          thunk_FUN_0045ef00(piVar3,3,&uStack_20);
          break;
        default:
          if ((*(int *)(this_00 + 0x20a) == 1) &&
             (iVar2 = (**(code **)(*piVar3 + 0x2c))(), iVar2 != 0x17)) {
            FUN_006b0c70((int)pbStack_10,uVar10);
            uVar10 = uVar10 - 1;
            iStack_14 = iStack_14 + -1;
            iVar2 = thunk_FUN_00490d90((int)piVar3);
            if (iVar2 == 0) {
              thunk_FUN_0045ef00(piVar3,3,&uStack_20);
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < iStack_14);
  }
  iVar2 = iStack_14;
  uVar10 = 0;
  if (iStack_14 != 0) {
    iVar6 = *(int *)(this_00 + 0x20e);
    *(undefined4 *)(this_00 + 0x212) = 0;
    uVar11 = 0;
    if (*(int *)(iVar6 + 0xc) != 0) {
      do {
        FUN_006acc70(iVar6,uVar10,&uStack_1c);
        if (uStack_1c._2_2_ != -1) {
          *(int *)(this_00 + 0x212) = *(int *)(this_00 + 0x212) + 1;
        }
        iVar6 = *(int *)(this_00 + 0x20e);
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < *(uint *)(iVar6 + 0xc));
    }
    if (*(int *)(this_00 + 0x212) == 0) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x58f);
    }
    uVar10 = 0;
    uStack_24 = 0;
    if (0 < iVar2) {
      do {
        FUN_006acc70((int)pbStack_10,uVar10,&uStack_c);
        if ((short)uStack_c != -1) {
          piVar3 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),this_00[0x24])
                                             ,uStack_c,1);
          iVar2 = (**(code **)(*piVar3 + 0x2c))();
          if (iVar2 == 9) {
            GetDepotForAttack(this_00,uStack_c,&uStack_5,&sStack_16,&sStack_2a,&sStack_28,&sStack_26
                             );
            if (sStack_16 == -1) {
              puVar14 = &uStack_20;
              iVar2 = 3;
              uStack_20 = *(undefined4 *)(DAT_00802a38 + 0xe4);
            }
            else {
              uStack_44 = *(undefined4 *)(this_00 + 0x20a);
              sStack_3b = sStack_16;
              puVar14 = &uStack_48;
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
              uVar10 = *(int *)(this_00 + 0x31) * 0x41c64e6d + 0x3039;
              *(uint *)(this_00 + 0x31) = uVar10;
              uStack_54 = (uVar10 >> 0x10) % uStack_5c;
              iVar2 = 0;
              if (0 < *(int *)(this_00 + 0x21a)) {
                piVar3 = *(int **)(this_00 + 0x21e);
                piVar8 = piVar3;
                uVar10 = uStack_54;
                do {
                  if ((*piVar8 != -1) &&
                     (uVar9 = (short)uVar10 - (short)piVar8[1], uVar10 = (uint)uVar9,
                     (short)uVar9 < 1)) {
                    if (iStack_50 < piVar3[iVar2 * 2 + 1]) {
                      iStack_50 = piVar3[(short)iVar2 * 2 + 1];
                      iStack_58 = iVar2;
                    }
                    break;
                  }
                  iVar2 = iVar2 + 1;
                  piVar8 = piVar8 + 2;
                } while (iVar2 < *(int *)(this_00 + 0x21a));
              }
              iStack_4c = iStack_4c + -1;
            } while (iStack_4c != 0);
            sVar12 = (short)iStack_58;
            FUN_006acc70(*(int *)(this_00 + 0x20e),(int)sVar12,&uStack_1c);
            uStack_48 = *(undefined4 *)(DAT_00802a38 + 0xe4);
            uStack_40 = (undefined1)uStack_1c;
            uStack_44 = *(undefined4 *)(this_00 + 0x20a);
            sStack_3b = uStack_1c._2_2_;
            cVar7 = (char)((uint)uStack_1c >> 8);
            iStack_3f = (int)cVar7;
            sStack_39 = sVar12;
            piVar3 = (int *)thunk_FUN_0042b620(CONCAT31(cVar7 >> 7,this_00[0x24]),uStack_c,1);
            puVar14 = &uStack_48;
            iVar2 = 2;
          }
          thunk_FUN_0045ef00(piVar3,iVar2,puVar14);
        }
        uStack_24 = uStack_24 + 1;
        uVar10 = uStack_24 & 0xffff;
      } while ((int)uVar10 < iStack_14);
    }
    if (*(int *)(this_00 + 0x20a) == 1) {
      iStack_14 = *(int *)(*(int *)(this_00 + 0x29) + 0xc);
      uVar10 = 0;
      uStack_24 = 0;
      puVar5 = puStack_34;
      if (0 < iStack_14) {
        do {
          FUN_006acc70(*(int *)(this_00 + 0x29),uVar10,&uStack_c);
          if ((short)uStack_c != -1) {
            piVar3 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),
                                                        this_00[0x24]),uStack_c,1);
            if (piVar3 == (int *)0x0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x5c4);
            }
            uVar4 = (**(code **)(*piVar3 + 0x2c))();
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
              iVar2 = (**(code **)(*piVar3 + 0x2c))();
              if (iVar2 == 0x17) {
                puVar13 = puVar5;
                if (puVar5 == (uint *)0x0) {
                  puVar5 = FUN_006ae290((uint *)0x0,1,2,1);
                  puVar13 = puVar5;
                  puStack_34 = puVar5;
                }
              }
              else {
                iVar2 = thunk_FUN_00490d90((int)piVar3);
                if (iVar2 == 0) break;
                puVar13 = puStack_30;
                if (puStack_30 == (uint *)0x0) {
                  puStack_30 = FUN_006ae290((uint *)0x0,1,2,1);
                  puVar13 = puStack_30;
                }
              }
              FUN_006ae1c0(puVar13,&uStack_c);
            }
          }
          uStack_24 = uStack_24 + 1;
          uVar10 = uStack_24 & 0xffff;
        } while ((int)uVar10 < iStack_14);
      }
      puVar13 = puStack_30;
      STAllPlayersC::RegisterPGPair
                (DAT_007fa174,CONCAT31((int3)((uint)iStack_14 >> 8),this_00[0x24]),puVar5,puStack_30
                );
      if (puVar5 != (uint *)0x0) {
        FUN_006ae110((byte *)puVar5);
      }
      if (puVar13 != (uint *)0x0) {
        FUN_006ae110((byte *)puVar13);
      }
    }
  }
  if (pbStack_10 != (byte *)0x0) {
    FUN_006ae110(pbStack_10);
  }
  DAT_00858df8 = (undefined4 *)uStack_a4;
  return 0;
}

