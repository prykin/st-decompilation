
int __thiscall TLOBaseTy::fireProc(TLOBaseTy *this)

{
  code *pcVar1;
  TLOBaseTy *this_00;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 unaff_ESI;
  TLOBaseTy *pTVar7;
  void *unaff_EDI;
  bool bVar8;
  InternalExceptionFrame IStack_5c;
  TLOBaseTy *pTStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int *piStack_8;
  
  IStack_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_5c;
  pTStack_18 = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pTStack_18;
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_5c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Artem_TLO_bfire_cpp_007ac910,0xb2,0,iVar3,&DAT_007a4ccc
                               ,s_TLOBaseTy__fireProc_error_007ac938);
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Artem_TLO_bfire_cpp_007ac910,0xb3);
      return iVar3;
    }
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if (0 < *(int *)(pTStack_18 + 0x25d)) {
    pTVar7 = pTStack_18 + 0x285;
    piStack_8 = (int *)0x0;
    do {
      if (*(uint *)(pTVar7 + -0x20) != 0) {
        if (*(int *)(this_00 + 0x255) != 0) {
          if ((*(uint *)(pTVar7 + -0x10) != 0) &&
             (*(int *)(&DAT_00792040 + *(int *)(this_00 + 0x235) * 4) + *(uint *)pTVar7 <=
              *(uint *)((int)DAT_00802a38 + 0xe4))) {
            *(uint *)pTVar7 = *(uint *)((int)DAT_00802a38 + 0xe4);
            uVar4 = *(uint *)((int)DAT_00802a38 + 0xe4);
            bVar8 = uVar4 < *(uint *)(pTVar7 + 4) +
                            *(int *)(&DAT_00792040 + *(int *)(this_00 + 0x235) * 4) * 10;
            if (!bVar8) {
              *(uint *)(pTVar7 + 4) = uVar4;
              fireFindCheckTarget(this_00,(int)piStack_8,0);
            }
            if (*(uint *)(pTVar7 + 8) != 0) {
              *(uint *)(pTVar7 + 0x30) = *(uint *)((int)DAT_00802a38 + 0xe4);
              *(uint *)(pTVar7 + 0x34) = 100;
              if ((bVar8) || (*(uint *)(pTVar7 + 0xc) == 0)) {
                *(uint *)(pTVar7 + 0xc) = 0;
                FUN_006e62d0(DAT_00802a38,*(uint *)(pTVar7 + 8),(int *)(pTVar7 + 0xc));
              }
              uVar4 = *(uint *)(pTVar7 + 0xc);
              if (uVar4 != 0) {
                if (&stack0x00000000 != (undefined1 *)0x14) {
                  uStack_14 = CONCAT22(uStack_14._2_2_,*(undefined2 *)(this_00 + 0x41));
                }
                if (&stack0x00000000 != (undefined1 *)0x10) {
                  uStack_10 = CONCAT22(uStack_10._2_2_,*(undefined2 *)(this_00 + 0x43));
                }
                if (&stack0x00000000 != &DAT_0000000c) {
                  uStack_c = CONCAT22(uStack_c._2_2_,*(undefined2 *)(this_00 + 0x45));
                }
                sVar2 = (**(code **)(*(int *)this_00 + 0x10))
                                  (CONCAT22((short)(uVar4 >> 0x10),*(undefined2 *)(uVar4 + 0x41)),
                                   *(undefined2 *)(uVar4 + 0x43),*(undefined2 *)(uVar4 + 0x45),
                                   uStack_14,uStack_10,uStack_c);
                iVar3 = (sVar2 + 0xb4) % 0x168;
                if (*(uint *)(pTVar7 + -8) == 8) {
                  iVar3 = (iVar3 / 0x2d) * 0x2d;
                }
                thunk_FUN_004c34a0(this_00,iVar3);
              }
            }
          }
          if (((*(int *)(this_00 + 0x255) != 0) && (*(uint *)(pTVar7 + -0x10) != 0)) &&
             (*(uint *)(pTVar7 + 8) == 0)) {
            if (*(uint *)(pTVar7 + 0x2c) == 0) {
              if (*(uint *)(pTVar7 + 0x34) + *(uint *)(pTVar7 + 0x30) <=
                  *(uint *)((int)DAT_00802a38 + 0xe4)) {
                *(uint *)(pTVar7 + 0x30) = *(uint *)((int)DAT_00802a38 + 0xe4);
                *(uint *)(pTVar7 + 0x2c) = 1;
                do {
                  uVar4 = *(int *)(this_00 + 0x1c) * 0x41c64e6d + 0x3039;
                  *(uint *)(this_00 + 0x1c) = uVar4;
                  uVar4 = ((uVar4 >> 0x10) % 0x18) * 0xf;
                  *(uint *)(pTVar7 + 0x38) = uVar4;
                } while (uVar4 == *(uint *)(this_00 + 0x259));
                if (*(int *)(&DAT_00795afc + *(int *)(this_00 + 0x235) * 4) != 0) {
                  (**(code **)(*(int *)this_00 + 0x90))
                            (3,*(int *)(&DAT_00795afc + *(int *)(this_00 + 0x235) * 4));
                }
              }
            }
            else {
              uVar4 = thunk_FUN_004c34a0(this_00,*(uint *)(pTVar7 + 0x38));
              *(uint *)(pTVar7 + 0x2c) = uVar4;
              if (uVar4 == 0) {
                *(uint *)(pTVar7 + 0x30) = *(uint *)((int)DAT_00802a38 + 0xe4);
                uVar4 = *(int *)(this_00 + 0x1c) * 0x41c64e6d + 0x3039;
                *(uint *)(this_00 + 0x1c) = uVar4;
                *(uint *)(pTVar7 + 0x34) = (uVar4 >> 0x10) % 0x4c + 0x19;
              }
            }
          }
        }
        uVar4 = *(uint *)((int)DAT_00802a38 + 0xe4);
        iVar3 = thunk_FUN_004e8230(*(int *)(this_00 + 0x24),*(int *)(this_00 + 0x235),(int)piStack_8
                                  );
        piVar6 = piStack_8;
        if (iVar3 + *(uint *)(pTVar7 + -0x14) <= uVar4) {
          *(uint *)(pTVar7 + -0x14) = uVar4;
          iVar3 = (int)piStack_8 + *(int *)(this_00 + 0x235) * 2;
          if (((*(int *)(&DAT_00793e28 + iVar3 * 4) == 0) ||
              (*(int *)(&DAT_007932d0 + iVar3 * 0x16) <= (int)*(uint *)(pTVar7 + 0x40))) ||
             ((*(uint *)(pTVar7 + 0x40) != 0 && (0 < (int)piStack_8)))) {
            fireFindCheckTarget(this_00,(int)piStack_8,1);
            if (((*(int *)(&DAT_00792a90 + ((int)piVar6 + *(int *)(this_00 + 0x235) * 2) * 4) == 2)
                || ((*(int *)(&DAT_00792a90 + ((int)piVar6 + *(int *)(this_00 + 0x235) * 2) * 4) ==
                     3 && (iVar3 = thunk_FUN_004c56b0(this_00,piVar6), iVar3 != 0)))) ||
               (*(uint *)(pTVar7 + 8) != 0)) {
              *(uint *)(pTVar7 + 0x30) = *(uint *)((int)DAT_00802a38 + 0xe4);
              *(uint *)(pTVar7 + 0x34) = 100;
              if (*(uint *)(pTVar7 + 8) != 0) {
                if (*(uint *)(pTVar7 + 0xc) == 0) {
                  FUN_006e62d0(DAT_00802a38,*(uint *)(pTVar7 + 8),(int *)(pTVar7 + 0xc));
                }
                *(int *)(pTVar7 + 0x20) = (int)*(short *)(*(uint *)(pTVar7 + 0xc) + 0x41);
                *(int *)(pTVar7 + 0x24) = (int)*(short *)(*(uint *)(pTVar7 + 0xc) + 0x43);
                *(int *)(pTVar7 + 0x28) = (int)*(short *)(*(uint *)(pTVar7 + 0xc) + 0x45);
              }
              *(uint *)(pTVar7 + 0x18) = 0;
              if (*(int *)(&DAT_007915f0 + ((int)piVar6 + *(int *)(this_00 + 0x235) * 2) * 4) == 0)
              {
                thunk_FUN_004c4550(this_00,piVar6);
              }
              else {
                SetState(this_00,5,1);
              }
            }
          }
          iVar3 = (int)piVar6 + *(int *)(this_00 + 0x235) * 2;
          if (*(int *)(&DAT_00793e28 + iVar3 * 4) == 1) {
            piVar6 = piStack_8;
            if ((int)*(uint *)(pTVar7 + 0x40) < *(int *)(&DAT_00794038 + iVar3 * 4)) {
              iVar3 = thunk_FUN_004de410(*(void **)(this_00 + 0x24),(&DAT_00792ca0)[iVar3 * 3],
                                         *(int *)(&DAT_00794038 + iVar3 * 4) -
                                         *(uint *)(pTVar7 + 0x40));
              *(uint *)(pTVar7 + 0x40) = *(uint *)(pTVar7 + 0x40) + iVar3;
              piVar6 = piStack_8;
              goto LAB_004c3985;
            }
          }
          if (*(int *)(&DAT_00793e28 + iVar3 * 4) == 2) {
            if ((int)*(uint *)(pTVar7 + 0x40) < *(int *)(&DAT_00794038 + iVar3 * 4)) {
              iVar3 = thunk_FUN_004dfb90(*(uint *)(this_00 + 0x24),
                                         *(int *)(&DAT_00794038 + iVar3 * 4) -
                                         *(uint *)(pTVar7 + 0x40),
                                         *(int *)(&DAT_00793ff0 +
                                                 (&DAT_00792ca0)[*(int *)(this_00 + 0x235) * 6] * 4)
                                        );
              *(uint *)(pTVar7 + 0x40) = *(uint *)(pTVar7 + 0x40) + iVar3;
            }
          }
        }
LAB_004c3985:
        iVar3 = ((int)piVar6 + *(int *)(this_00 + 0x235) * 2) * 4;
        if (((*(int *)(&DAT_00793e28 + iVar3) == 2) &&
            ((int)*(uint *)(pTVar7 + 0x40) < *(int *)(&DAT_00794038 + iVar3))) &&
           (iVar3 = thunk_FUN_004e8230(*(int *)(this_00 + 0x24),*(int *)(this_00 + 0x235),
                                       (int)piVar6),
           *(uint *)(pTVar7 + 0x44) + iVar3 * 10 <= *(uint *)((int)DAT_00802a38 + 0xe4))) {
          *(uint *)(pTVar7 + 0x40) = *(uint *)(pTVar7 + 0x40) + 1;
          *(uint *)(pTVar7 + 0x44) = *(uint *)((int)DAT_00802a38 + 0xe4);
        }
      }
      piStack_8 = (int *)((int)piStack_8 + 1);
      pTVar7 = pTVar7 + 0x80;
    } while ((int)piStack_8 < *(int *)(this_00 + 0x25d));
  }
  g_currentExceptionFrame = IStack_5c.previous;
  return 0;
}

