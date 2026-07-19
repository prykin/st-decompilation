
void __thiscall AiPlrClassTy::Offensive(AiPlrClassTy *this,void *param_1)

{
  code *pcVar1;
  AiPlrClassTy *this_00;
  undefined2 uVar2;
  int iVar3;
  uint *puVar4;
  short *psVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint *puVar11;
  ushort *puVar12;
  uint uVar13;
  uint extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar14;
  InternalExceptionFrame IStack_80;
  undefined4 uStack_3c;
  short asStack_38 [6];
  undefined4 uStack_2c;
  uint uStack_28;
  undefined2 uStack_24;
  AiPlrClassTy *pAStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  uint *puStack_c;
  uint uStack_8;
  
  puStack_c = (uint *)0x0;
  if ((((this[0x676] != (AiPlrClassTy)0x0) && (*(int *)(this + 0x640) != 0xff)) &&
      (*(int *)(this + 0x695) != 0)) && (DAT_007fa174 != 0)) {
    IStack_80.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_80;
    pAStack_20 = this;
    iVar3 = __setjmp3(IStack_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = pAStack_20;
    if (iVar3 == 0) {
      iVar3 = *(int *)(pAStack_20 + 0x681);
      if (*(int *)(pAStack_20 + 0x689) == 0) {
        if ((iVar3 == 0) ||
           ((uint)(iVar3 * 3 + *(int *)(pAStack_20 + 0x685)) <= *(uint *)(pAStack_20 + 0x6fe))) {
          *(undefined4 *)(pAStack_20 + 0x685) = *(undefined4 *)(pAStack_20 + 0x6fe);
          puVar4 = FUN_006ae290((uint *)0x0,5,0x10,5);
          puStack_c = puVar4;
          thunk_FUN_0067a240(this_00,&LAB_00403544,puVar4);
          uVar8 = puVar4[3];
          uVar13 = 0;
          iVar3 = 0;
          bVar14 = uVar8 != 0;
          iStack_10 = 0;
          iStack_1c = 0;
          if (0 < (int)uVar8) {
            do {
              if (bVar14) {
                psVar5 = (short *)(puVar4[2] * uVar13 + puVar4[7]);
              }
              else {
                psVar5 = (short *)0x0;
              }
              if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
                iVar3 = iVar3 + psVar5[1];
                iStack_10 = iStack_10 + *(int *)(psVar5 + 2);
              }
              uVar8 = puVar4[3];
              uVar13 = uVar13 + 1;
              bVar14 = uVar13 < uVar8;
              iStack_1c = iVar3;
            } while ((int)uVar13 < (int)uVar8);
          }
          if ((((*(short *)(this_00 + 0x677) <= iStack_1c) && (0 < (int)uVar8)) && (0 < iStack_1c))
             && ((0 < iStack_10 &&
                 (iVar3 = thunk_FUN_0042a990((char)this_00[0x640]), iStack_18 = iVar3, iVar3 != 0)))
             ) {
            bVar14 = *(int *)(iVar3 + 0xc) != 0;
            iStack_14 = 0;
            uStack_8 = 0;
            if (0 < *(int *)(iVar3 + 0xc)) {
              do {
                if (bVar14) {
                  piVar6 = (int *)(*(int *)(iVar3 + 8) * uStack_8 + *(int *)(iVar3 + 0x1c));
                }
                else {
                  piVar6 = (int *)0x0;
                }
                piVar6 = (int *)*piVar6;
                if ((piVar6 != (int *)0x0) && (iVar7 = (**(code **)(*piVar6 + 0xf8))(), iVar7 != 0))
                {
                  iVar7 = (**(code **)(*piVar6 + 0x2c))();
                  uVar8 = thunk_FUN_00674fb0(iVar7);
                  if (((uVar8 & 3) != 0) || ((uVar8 & 0x630000) != 0)) {
                    iVar7 = (**(code **)(*piVar6 + 0xd4))();
                    iStack_14 = iStack_14 + iVar7;
                  }
                }
                uStack_8 = uStack_8 + 1;
                bVar14 = uStack_8 < *(uint *)(iVar3 + 0xc);
                puVar4 = puStack_c;
              } while ((int)uStack_8 < (int)*(uint *)(iVar3 + 0xc));
            }
            if (((*(short *)(this_00 + 0x679) <= iStack_1c) || (iStack_14 < 1)) ||
               ((int)*(short *)(this_00 + 0x67b) < (iStack_10 * 100) / iStack_14)) {
              uStack_8 = 0;
              *(undefined4 *)(*(int *)(this_00 + 0x6ad) + 0xc) = 0;
              bVar14 = *(int *)(iVar3 + 0xc) != 0;
              if (0 < *(int *)(iVar3 + 0xc)) {
                do {
                  if (bVar14) {
                    puVar9 = (undefined4 *)(*(int *)(iVar3 + 8) * uStack_8 + *(int *)(iVar3 + 0x1c))
                    ;
                  }
                  else {
                    puVar9 = (undefined4 *)0x0;
                  }
                  piVar6 = (int *)*puVar9;
                  if ((piVar6 != (int *)0x0) &&
                     (iVar7 = (**(code **)(*piVar6 + 0xf8))(), iVar7 != 0)) {
                    puVar9 = &uStack_3c;
                    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
                      *puVar9 = 0;
                      puVar9 = puVar9 + 1;
                    }
                    uStack_3c._0_2_ = (undefined2)uStack_8;
                    uStack_3c._2_2_ = (**(code **)(*piVar6 + 0x2c))();
                    thunk_FUN_0067bda0(asStack_38,piVar6);
                    uStack_2c = (**(code **)(*piVar6 + 0xd4))();
                    uStack_28 = thunk_FUN_00674fb0((int)uStack_3c._2_2_);
                    uVar10 = thunk_FUN_00675430(uStack_28);
                    uStack_24 = (undefined2)uVar10;
                    FUN_006ae1c0(*(uint **)(this_00 + 0x6ad),&uStack_3c);
                    iVar3 = iStack_18;
                  }
                  uStack_8 = uStack_8 + 1;
                  bVar14 = uStack_8 < *(uint *)(iVar3 + 0xc);
                  puVar4 = puStack_c;
                } while ((int)uStack_8 < (int)*(uint *)(iVar3 + 0xc));
              }
              thunk_FUN_00676c40(*(int *)(this_00 + 0x6ad),&LAB_004026fd);
              thunk_FUN_00676c40((int)puVar4,&LAB_004029b4);
              thunk_FUN_0067bfd0(this_00,(int)puVar4,*(int *)(this_00 + 0x6ad));
              *(undefined4 *)(this_00 + 0x689) = 1;
            }
          }
LAB_0067c61b:
          if (puVar4 != (uint *)0x0) {
            FUN_006ae110((byte *)puVar4);
          }
          g_currentExceptionFrame = IStack_80.previous;
          return;
        }
      }
      else {
        uVar8 = extraout_EDX;
        if ((iVar3 == 0) ||
           (uVar8 = *(int *)(pAStack_20 + 0x685) + iVar3, uVar8 <= *(uint *)(pAStack_20 + 0x6fe))) {
          *(undefined4 *)(pAStack_20 + 0x685) = *(undefined4 *)(pAStack_20 + 0x6fe);
          thunk_FUN_0067be20((int)pAStack_20,uVar8,*(int *)(pAStack_20 + 0x6ad));
          iVar3 = thunk_FUN_0067bd50(*(int *)(this_00 + 0x6ad));
          puVar11 = FUN_006ae290((uint *)0x0,5,0x10,5);
          puStack_c = puVar11;
          thunk_FUN_0067a240(this_00,&LAB_00403544,puVar11);
          iVar3 = iVar3 + puVar11[3];
          if (iVar3 == 0) {
            thunk_FUN_0067c110(this_00);
            puVar4 = puStack_c;
          }
          else {
            puVar4 = puStack_c;
            if (0 < (int)puVar11[3]) {
              if (*(int *)(*(int *)(this_00 + 0x6ad) + 0xc) < iVar3) {
                iVar3 = thunk_FUN_0042a990((char)this_00[0x640]);
                iStack_18 = iVar3;
                if (iVar3 != 0) {
                  uStack_8 = 0;
                  if (0 < *(int *)(iVar3 + 0xc)) {
                    bVar14 = *(int *)(iVar3 + 0xc) != 0;
                    do {
                      uVar8 = uStack_8;
                      if (bVar14) {
                        puVar9 = (undefined4 *)
                                 (*(int *)(iVar3 + 8) * uStack_8 + *(int *)(iVar3 + 0x1c));
                      }
                      else {
                        puVar9 = (undefined4 *)0x0;
                      }
                      piVar6 = (int *)*puVar9;
                      if (((piVar6 != (int *)0x0) &&
                          (iVar7 = (**(code **)(*piVar6 + 0xf8))(), iVar3 = iStack_18, iVar7 != 0))
                         && (puVar12 = thunk_FUN_0067bd00(*(int *)(this_00 + 0x6ad),uVar8),
                            iVar3 = iStack_18, puVar12 == (ushort *)0x0)) {
                        uVar2 = (undefined2)uStack_8;
                        puVar9 = &uStack_3c;
                        for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
                          *puVar9 = 0;
                          puVar9 = puVar9 + 1;
                        }
                        uStack_3c._0_2_ = uVar2;
                        uStack_3c._2_2_ = (**(code **)(*piVar6 + 0x2c))();
                        thunk_FUN_0067bda0(asStack_38,piVar6);
                        uStack_2c = (**(code **)(*piVar6 + 0xd4))();
                        uStack_28 = thunk_FUN_00674fb0((int)uStack_3c._2_2_);
                        uVar10 = thunk_FUN_00675430(uStack_28);
                        uStack_24 = (undefined2)uVar10;
                        FUN_006ae1c0(*(uint **)(this_00 + 0x6ad),&uStack_3c);
                        iVar3 = iStack_18;
                        uVar8 = uStack_8;
                      }
                      uStack_8 = uVar8 + 1;
                      bVar14 = uStack_8 < *(uint *)(iVar3 + 0xc);
                    } while ((int)uStack_8 < (int)*(uint *)(iVar3 + 0xc));
                  }
                }
                thunk_FUN_00676c40(*(int *)(this_00 + 0x6ad),&LAB_004026fd);
              }
              if (*(int *)(*(int *)(this_00 + 0x6ad) + 0xc) == 0) {
                thunk_FUN_0067c110(this_00);
                puVar4 = puStack_c;
              }
              else {
                thunk_FUN_0067bfd0(this_00,(int)puStack_c,*(int *)(this_00 + 0x6ad));
                puVar4 = puStack_c;
              }
            }
          }
          goto LAB_0067c61b;
        }
      }
    }
    else {
      g_currentExceptionFrame = IStack_80.previous;
      iVar7 = ReportDebugMessage(s_E____titans_ai_ai_plr_cpp_007d2e4c,0x570,0,iVar3,&DAT_007a4ccc,
                                 s_AiPlrClassTy__Offensive_007d2f2c);
      if (iVar7 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (puStack_c != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_c);
        puStack_c = (uint *)0x0;
      }
      RaiseInternalException(iVar3,0,s_E____titans_ai_ai_plr_cpp_007d2e4c,0x573);
    }
  }
  return;
}

