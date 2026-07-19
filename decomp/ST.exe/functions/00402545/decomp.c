
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * thunk_FUN_0066acc0(char *param_1,int param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  AiFltClassTy *pAVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 uVar18;
  uint *puVar19;
  undefined3 extraout_var;
  void *this;
  char *pcVar20;
  char *pcVar21;
  uint uVar22;
  undefined4 unaff_ESI;
  AiFltClassTy **ppAVar23;
  void *unaff_EDI;
  undefined4 *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined4 uVar28;
  undefined1 *puVar29;
  undefined4 auStack_628 [78];
  undefined4 auStack_4f0 [78];
  undefined4 auStack_3b8 [78];
  undefined4 auStack_280 [8];
  InternalExceptionFrame IStack_260;
  undefined4 uStack_21c;
  undefined2 uStack_218;
  undefined4 uStack_214;
  undefined2 uStack_210;
  undefined1 uStack_1de;
  uint auStack_1d0 [2];
  char cStack_1c8;
  undefined4 *puStack_1c6;
  undefined4 auStack_19c [9];
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int *piStack_64;
  short sStack_60;
  short sStack_5e;
  short sStack_5c;
  short sStack_5a;
  short sStack_58;
  short sStack_56;
  short sStack_54;
  short sStack_52;
  AiFltClassTy *apAStack_50 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char cStack_1d;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint *puStack_14;
  undefined4 uStack_10;
  char *pcStack_c;
  AiFltClassTy *pAStack_8;
  
  puStack_14 = (uint *)0x0;
  IStack_260.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_260;
  iVar10 = Library::MSVCRT::__setjmp3(IStack_260.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar10 != 0) {
    g_currentExceptionFrame = IStack_260.previous;
    if (puStack_14 != (uint *)0x0) {
      FUN_006ab060(&puStack_14);
    }
    if (0 < iVar10) {
      iVar10 = -0x6b;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar10;
    }
    return (uint *)0x0;
  }
  Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),&DAT_008016a0,0x7f);
  piStack_64[0x21] = -1;
  cVar2 = *param_1;
  pcVar21 = param_1;
  for (iVar10 = 0; (cVar2 != '\a' && (iVar10 < param_2)); iVar10 = iVar10 + 1) {
    cVar2 = pcVar21[5];
    pcVar21 = pcVar21 + 5;
  }
  if (iVar10 != param_2) {
    RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_interp_cpp_007d2cf4,0x152);
  }
  iVar10 = (int)*(short *)(param_1 + param_2 * 5 + 1);
  if (iVar10 < 0x7f7) {
    if (iVar10 == 0x7f6) {
      pAStack_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pAStack_8 < 0xf);
      if ((param_1[0xf] != '\x06') && (param_1[0xf] != '\x03')) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      pcStack_c = (char *)0x4;
      if (4 < param_2) {
        pAStack_8 = (AiFltClassTy *)0x14;
        do {
          if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
            }
            piStack_64[0x21] = -1;
            RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          pcStack_c = pcStack_c + 1;
          pAStack_8 = pAStack_8 + 5;
        } while ((int)pcStack_c < param_2);
      }
      pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
      if ((pAStack_8 == (AiFltClassTy *)0x9) &&
         (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      puVar19 = (uint *)(param_1 + 5);
      uVar11 = (**(code **)*piStack_64)(puVar19,apAStack_50);
      iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,uVar11,puVar19);
      DAT_00811980 = 0;
      if (0 < iVar10) {
        uStack_10 = param_1 + 0x2d;
        uStack_18 = param_1 + 0x28;
        uStack_2c = (byte *)(param_1 + 0x23);
        uStack_1c = (byte *)(param_1 + 0x1e);
        uStack_24 = param_1 + 0x19;
        uStack_30 = param_1 + 0x14;
        uStack_28 = param_1 + 0xf;
        pcStack_c = param_1 + 10;
        ppAVar23 = apAStack_50;
        do {
          uVar28 = 0;
          puVar26 = &LAB_00405628;
          pcVar21 = uStack_10;
          sVar3 = (**(code **)*piStack_64)();
          sVar7 = (short)pcVar21;
          pcVar21 = uStack_18;
          sVar4 = (**(code **)*piStack_64)();
          sVar9 = (short)pcVar21;
          pbVar15 = uStack_2c;
          sVar5 = (**(code **)*piStack_64)();
          sVar8 = (short)pbVar15;
          pbVar15 = uStack_1c;
          uVar18 = (**(code **)*piStack_64)();
          uVar18 = (**(code **)*piStack_64)(uStack_24,uVar18);
          uVar18 = (**(code **)*piStack_64)(uStack_30,uVar18);
          uVar18 = (**(code **)(*piStack_64 + 8))(uStack_28,uVar18);
          sVar6 = (**(code **)*piStack_64)(pcStack_c,uVar18);
          thunk_FUN_00677be0(*(short *)ppAVar23,sVar6,pbVar15,sVar5,sVar8,sVar4,sVar9,sVar3,sVar7,
                             puVar26,uVar28);
          ppAVar23 = ppAVar23 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      goto LAB_0066df5e;
    }
    if (iVar10 < 0x7e7) {
      if (iVar10 == 0x7e6) {
        pcStack_c = (char *)0x0;
        if (0 < param_2) {
          pAStack_8 = (AiFltClassTy *)0x0;
          do {
            if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
              pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
              if (pcVar21 != (char *)0x0) {
                Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
              }
              piStack_64[0x21] = -1;
              RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
            }
            pcStack_c = (char *)((int)pcStack_c + 1);
            pAStack_8 = pAStack_8 + 5;
          } while ((int)pcStack_c < param_2);
        }
        pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
        pcStack_c = (char *)(**(code **)*piStack_64)(param_1 + 5);
        iVar10 = (**(code **)(*piStack_64 + 0x18))();
        if ((((iVar10 == 8) && ((pAStack_8 == (AiFltClassTy *)0x9 || (pcStack_c == (char *)0x9))))
            || (pAStack_8 == (AiFltClassTy *)0xff)) || (pcStack_c == (char *)0xff)) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,0,(uint *)apAStack_50);
        if (iVar10 != 1) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pAStack_8 = apAStack_50[0];
        iVar10 = thunk_FUN_00668f50(piStack_64,pcStack_c,0,(uint *)apAStack_50);
        if (iVar10 != 1) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
        if (DAT_00808a8f != '\0') {
          *puStack_14 = (uint)((&DAT_008087ea)[((uint)pAStack_8 & 0xff) * 0x51] !=
                              (&DAT_008087ea)[((uint)apAStack_50[0] & 0xff) * 0x51]);
          goto LAB_00670431;
        }
        if ((char)apAStack_50[0] == (char)pAStack_8) {
LAB_0066bdcc:
          iVar10 = 0;
        }
        else {
          uVar11 = (uint)apAStack_50[0] & 0xff;
          uVar22 = (uint)pAStack_8 & 0xff;
          cVar2 = *(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar22);
          if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar22 * 8 + uVar11) == '\0')) {
            iVar10 = -2;
          }
          else if ((cVar2 == '\x01') &&
                  (*(char *)((int)&DAT_00808a4f + uVar22 * 8 + uVar11) == '\0')) {
            iVar10 = -1;
          }
          else if ((cVar2 == '\0') &&
                  (*(char *)((int)&DAT_00808a4f + uVar22 * 8 + uVar11) == '\x01')) {
            iVar10 = 1;
          }
          else {
            if ((cVar2 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar22 * 8 + uVar11) != '\x01')
               ) goto LAB_0066bdcc;
            iVar10 = 2;
          }
        }
        *puStack_14 = (uint)(iVar10 < 0);
        goto LAB_00670431;
      }
      if (iVar10 < 0x7d7) {
        if (iVar10 == 0x7d6) {
          pcStack_c = (char *)0x0;
          if (0 < param_2) {
            uStack_10 = (char *)0x0;
            do {
              if ((uStack_10[(int)param_1] != '\x04') && (uStack_10[(int)param_1] != '\x01')) {
                pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar21 != (char *)0x0) {
                  Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
                }
                piStack_64[0x21] = -1;
                RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
              }
              pcStack_c = (char *)((int)pcStack_c + 1);
              uStack_10 = uStack_10 + 5;
            } while ((int)pcStack_c < param_2);
          }
          iVar10 = (**(code **)*piStack_64)(param_1);
          if ((DAT_0080c4c7 == 0) || (*(int *)(DAT_0080c4c7 + 8) <= iVar10)) {
            pcStack_c = (char *)0x0;
          }
          else {
            pcStack_c = *(char **)(*(int *)(DAT_0080c4c7 + 0x14) + iVar10 * 4);
          }
          if (pcStack_c == (char *)0x0) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
            }
            piStack_64[0x21] = -1;
            RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          puVar19 = (uint *)FUN_006c49b0(pcStack_c);
          if (param_3 == (int *)0x0) {
            g_currentExceptionFrame = IStack_260.previous;
            return puVar19;
          }
          *param_3 = 3;
          g_currentExceptionFrame = IStack_260.previous;
          return puVar19;
        }
        if (0x7d2 < iVar10) {
          if (iVar10 == 0x7d3) {
            pcStack_c = (char *)0x0;
            if (0 < param_2) {
              uStack_10 = (char *)0x0;
              do {
                if ((uStack_10[(int)param_1] != '\x04') && (uStack_10[(int)param_1] != '\x01')) {
                  pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (pcVar21 != (char *)0x0) {
                    Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
                  }
                  piStack_64[0x21] = -1;
                  RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
                }
                pcStack_c = (char *)((int)pcStack_c + 1);
                uStack_10 = uStack_10 + 5;
              } while ((int)pcStack_c < param_2);
            }
            iVar10 = (**(code **)*piStack_64)(param_1);
            iVar13 = (**(code **)*piStack_64)(param_1 + 5);
            puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
            if (iVar13 < iVar10) {
              uVar11 = (**(code **)(*piStack_64 + 0x10))(iVar13,iVar10);
              *puStack_14 = uVar11;
            }
            else {
              uVar11 = (**(code **)(*piStack_64 + 0x10))(iVar10,iVar13);
              *puStack_14 = uVar11;
            }
          }
          else {
            if (iVar10 != 0x7d4) {
              if (iVar10 == 0x7d5) {
                pcStack_c = (char *)0x0;
                if (0 < param_2) {
                  uStack_10 = (char *)0x0;
                  do {
                    if ((uStack_10[(int)param_1] != '\x04') && (uStack_10[(int)param_1] != '\x01'))
                    {
                      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                      if (pcVar21 != (char *)0x0) {
                        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
                      }
                      piStack_64[0x21] = -1;
                      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
                    }
                    pcStack_c = pcStack_c + 1;
                    uStack_10 = uStack_10 + 5;
                  } while ((int)pcStack_c < param_2);
                }
                pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
                if (((int)pAStack_8 < 0) || (3 < (int)pAStack_8)) {
                  pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (pcVar21 != (char *)0x0) {
                    Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
                  }
                  piStack_64[0x21] = -1;
                  RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
                }
                pAVar12 = (AiFltClassTy *)(**(code **)(*piStack_64 + 0x28))(pAStack_8);
                goto LAB_0066d630;
              }
              goto switchD_0066b69d_caseD_7d8;
            }
            pcStack_c = (char *)0x0;
            if (0 < param_2) {
              uStack_10 = (char *)0x0;
              do {
                if ((uStack_10[(int)param_1] != '\x04') && (uStack_10[(int)param_1] != '\x01')) {
                  pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (pcVar21 != (char *)0x0) {
                    Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
                  }
                  piStack_64[0x21] = -1;
                  RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
                }
                pcStack_c = (char *)((int)pcStack_c + 1);
                uStack_10 = uStack_10 + 5;
              } while ((int)pcStack_c < param_2);
            }
            pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
            if (((int)pAStack_8 < 0) || (0x20 < (int)pAStack_8)) {
              pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
              if (pcVar21 != (char *)0x0) {
                Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
              }
              piStack_64[0x21] = -1;
              RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
            }
            puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
            uVar11 = (**(code **)(*piStack_64 + 0x24))(pAStack_8);
            *puStack_14 = uVar11;
          }
          goto LAB_00670431;
        }
        if (iVar10 == 0x7d2) {
          pcStack_c = (char *)0x0;
          if (0 < param_2) {
            uStack_10 = (char *)0x0;
            do {
              if ((uStack_10[(int)param_1] != '\x04') && (uStack_10[(int)param_1] != '\x01')) {
                pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar21 != (char *)0x0) {
                  Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
                }
                piStack_64[0x21] = -1;
                RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
              }
              pcStack_c = (char *)((int)pcStack_c + 1);
              uStack_10 = uStack_10 + 5;
            } while ((int)pcStack_c < param_2);
          }
          pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
          if (((int)pAStack_8 < 0) || (0xff < (int)pAStack_8)) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
            }
            piStack_64[0x21] = -1;
            RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
          *puStack_14 = (&DAT_0080e43b)[(int)pAStack_8];
          goto LAB_00670431;
        }
        if (iVar10 < 0x7d1) {
          if (iVar10 == 2000) {
            pcStack_c = (char *)0x0;
            if (0 < param_2) {
              uStack_10 = (char *)0x0;
              do {
                if ((uStack_10[(int)param_1] != '\x04') && (uStack_10[(int)param_1] != '\x01')) {
                  pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (pcVar21 != (char *)0x0) {
                    Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
                  }
                  piStack_64[0x21] = -1;
                  RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
                }
                pcStack_c = (char *)((int)pcStack_c + 1);
                uStack_10 = uStack_10 + 5;
              } while ((int)pcStack_c < param_2);
            }
            pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
            uStack_10 = (char *)(**(code **)*piStack_64)(param_1 + 5);
            pcStack_c = (char *)0x0;
            if ((pAStack_8 == (AiFltClassTy *)0x9) &&
               (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) {
              iVar10 = (**(code **)(*piStack_64 + 0x2c))(uStack_10);
              pcStack_c = (char *)(uint)(iVar10 == 0);
              puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
              *puStack_14 = (uint)pcStack_c;
            }
            else {
              iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,0,(uint *)apAStack_50);
              if (iVar10 == 1) {
                if (DAT_007fa174 == 0) {
                  iVar10 = 0;
                }
                else {
                  iVar10 = thunk_FUN_004357f0((char)apAStack_50[0]);
                }
                if (iVar10 != 0) {
                  iVar10 = (**(code **)(*(int *)(iVar10 + 0x1c) + 0x2c))(uStack_10);
                  pcStack_c = (char *)(uint)(iVar10 == 0);
                  puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
                  *puStack_14 = (uint)pcStack_c;
                  goto LAB_00670431;
                }
                pAStack_8 = apAStack_50[0];
                pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar21 != (char *)0x0) {
                  Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
                }
                piStack_64[0x21] = (int)pAStack_8;
              }
              else {
                pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar21 != (char *)0x0) {
                  Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
                }
                piStack_64[0x21] = -1;
              }
              RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
              puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
              *puStack_14 = (uint)pcStack_c;
            }
          }
          else {
            if ((iVar10 < 800) || (0x321 < iVar10)) goto switchD_0066b69d_caseD_7d8;
            pcStack_c = (char *)0x0;
            if (0 < param_2) {
              uStack_10 = (char *)0x0;
              do {
                if ((uStack_10[(int)param_1] != '\x04') && (uStack_10[(int)param_1] != '\x01')) {
                  pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (pcVar21 != (char *)0x0) {
                    Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
                  }
                  piStack_64[0x21] = -1;
                  RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
                }
                pcStack_c = (char *)((int)pcStack_c + 1);
                uStack_10 = uStack_10 + 5;
              } while ((int)pcStack_c < param_2);
            }
            puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
            uVar11 = (**(code **)*piStack_64)(param_1);
            *puStack_14 = uVar11;
          }
          goto LAB_00670431;
        }
        if (iVar10 != 0x7d1) {
switchD_0066b69d_caseD_7d8:
          pcVar21 = thunk_FUN_00674af0(iVar10);
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x77,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          g_currentExceptionFrame = IStack_260.previous;
          return puStack_14;
        }
        pcStack_c = (char *)0x0;
        if (0 < param_2) {
          uStack_10 = (char *)0x0;
          do {
            if ((uStack_10[(int)param_1] != '\x04') && (uStack_10[(int)param_1] != '\x01')) {
              pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
              if (pcVar21 != (char *)0x0) {
                Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
              }
              piStack_64[0x21] = -1;
              RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
            }
            pcStack_c = (char *)((int)pcStack_c + 1);
            uStack_10 = uStack_10 + 5;
          } while ((int)pcStack_c < param_2);
        }
        pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
        uStack_10 = (char *)(**(code **)*piStack_64)(param_1 + 5);
        if (((int)uStack_10 < 0) || (0xff < (int)uStack_10)) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = (char *)0x0;
        if ((pAStack_8 == (AiFltClassTy *)0x9) &&
           (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) {
          pcStack_c = (char *)(**(code **)(*piStack_64 + 0x1c))(uStack_10);
          puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
          *puStack_14 = (uint)pcStack_c;
          goto LAB_00670431;
        }
        iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,0,(uint *)apAStack_50);
        if (iVar10 != 1) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          goto joined_r0x0066b1d2;
        }
        if (DAT_007fa174 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = thunk_FUN_004357f0((char)apAStack_50[0]);
        }
        if (iVar10 != 0) {
          pcStack_c = (char *)(**(code **)(*(int *)(iVar10 + 0x1c) + 0x1c))(uStack_10);
          puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
          *puStack_14 = (uint)pcStack_c;
          goto LAB_00670431;
        }
        pAStack_8 = apAStack_50[0];
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
LAB_0066b1ad:
        piStack_64[0x21] = (int)pAStack_8;
LAB_0066b1fb:
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
        *puStack_14 = (uint)pcStack_c;
      }
      else {
        switch(iVar10) {
        case 0x7d7:
          uVar11 = (**(code **)(*piStack_64 + 0x18))();
          puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
          if (uVar11 == 8) {
            uVar11 = 0xff;
          }
          *puStack_14 = uVar11;
          break;
        default:
          goto switchD_0066b69d_caseD_7d8;
        case 0x7da:
          puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
          *puStack_14 = *(uint *)(DAT_00802a38 + 0xe4) / 0x19;
          break;
        case 0x7dc:
          puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
          *puStack_14 = *(uint *)(DAT_00802a38 + 0xe4);
          break;
        case 0x7dd:
          pcStack_c = (char *)0x0;
          if (0 < param_2) {
            uStack_10 = (char *)0x0;
            do {
              if ((uStack_10[(int)param_1] != '\x04') && (uStack_10[(int)param_1] != '\x01')) {
                pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar21 != (char *)0x0) {
                  Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
                }
                piStack_64[0x21] = -1;
                RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
              }
              pcStack_c = (char *)((int)pcStack_c + 1);
              uStack_10 = uStack_10 + 5;
            } while ((int)pcStack_c < param_2);
          }
          pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
          pcStack_c = (char *)0x0;
          if ((pAStack_8 == (AiFltClassTy *)0x9) &&
             (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) {
            pcStack_c = (char *)(**(code **)(*piStack_64 + 0x14))();
            puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
            *puStack_14 = (uint)pcStack_c;
            break;
          }
          iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,0,(uint *)apAStack_50);
          if (iVar10 == 1) {
            if (DAT_007fa174 == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = thunk_FUN_004357f0((char)apAStack_50[0]);
            }
            if (iVar10 != 0) {
              pcStack_c = (char *)(**(code **)(*(int *)(iVar10 + 0x1c) + 0x14))();
              puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
              *puStack_14 = (uint)pcStack_c;
              break;
            }
            pAStack_8 = apAStack_50[0];
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
            }
            goto LAB_0066b1ad;
          }
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
joined_r0x0066b1d2:
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          goto LAB_0066b1fb;
        case 0x7de:
          pcStack_c = (char *)0x0;
          if (0 < param_2) {
            uStack_10 = (char *)0x0;
            do {
              if ((uStack_10[(int)param_1] != '\x04') && (uStack_10[(int)param_1] != '\x01')) {
                pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar21 != (char *)0x0) {
                  Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
                }
                piStack_64[0x21] = -1;
                RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
              }
              pcStack_c = (char *)((int)pcStack_c + 1);
              uStack_10 = uStack_10 + 5;
            } while ((int)pcStack_c < param_2);
          }
          pcStack_c = (char *)(**(code **)*piStack_64)(param_1);
          if (((pcStack_c == (char *)0x9) &&
              (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) ||
             (pcStack_c == (char *)0xff)) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
            }
            piStack_64[0x21] = -1;
            RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          iVar10 = thunk_FUN_00668f50(piStack_64,pcStack_c,0,(uint *)apAStack_50);
          if (iVar10 != 1) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
            }
            piStack_64[0x21] = -1;
            RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          cStack_1d = '\0';
          pAStack_8 = (AiFltClassTy *)0x0;
          if (DAT_00801688 != (void *)0x0) {
            thunk_FUN_004f91a0(DAT_00801688,(byte)apAStack_50[0]._0_1_,&cStack_1d,(int *)&pAStack_8)
            ;
          }
          puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
          *puStack_14 = ~-(uint)(cStack_1d != '\x01') & (uint)pAStack_8;
          break;
        case 0x7e4:
          puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
          if ((DAT_008087a0 == '\x03') || (DAT_008087a0 == '\b')) {
            *puStack_14 = _DAT_00807340 & 0xff;
          }
          else {
            *puStack_14 = 0;
          }
          break;
        case 0x7e5:
          pcStack_c = (char *)0x0;
          if (0 < param_2) {
            pAStack_8 = (AiFltClassTy *)0x0;
            do {
              if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
                pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar21 != (char *)0x0) {
                  Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
                }
                piStack_64[0x21] = -1;
                RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
              }
              pcStack_c = (char *)((int)pcStack_c + 1);
              pAStack_8 = pAStack_8 + 5;
            } while ((int)pcStack_c < param_2);
          }
          pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
          if (((pAStack_8 == (AiFltClassTy *)0x9) &&
              (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) ||
             (pAStack_8 == (AiFltClassTy *)0xff)) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
            }
            piStack_64[0x21] = -1;
            RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,0,(uint *)apAStack_50);
          if (iVar10 != 1) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
            }
            piStack_64[0x21] = -1;
            RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
          if (DAT_00808a8f != '\0') {
            *puStack_14 = (uint)(byte)(&DAT_008087ea)[(int)apAStack_50[0] * 0x51];
            break;
          }
          goto LAB_0066bb5e;
        }
      }
      goto LAB_00670431;
    }
    switch(iVar10) {
    case 0x7e7:
      pcStack_c = (char *)0x0;
      if (0 < param_2) {
        pAStack_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
            }
            piStack_64[0x21] = -1;
            RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          pcStack_c = (char *)((int)pcStack_c + 1);
          pAStack_8 = pAStack_8 + 5;
        } while ((int)pcStack_c < param_2);
      }
      pcStack_c = (char *)(**(code **)*piStack_64)(param_1);
      if (((pcStack_c == (char *)0x9) && (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)
          ) || (pcStack_c == (char *)0xff)) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      if (pcStack_c == (char *)0x8) {
        pcStack_c = (char *)(uint)DAT_0080874d;
      }
      pcVar21 = pcStack_c;
      if (pcStack_c == (char *)0x9) {
        pcVar21 = (char *)(**(code **)(*piStack_64 + 0x18))();
      }
      puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
      if ((pcVar21 < 8) && ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[(int)pcVar21 * 0x51] < 8)))
         ) {
        *puStack_14 = 1;
        break;
      }
LAB_0066bb5e:
      *puStack_14 = 0;
      break;
    case 0x7e8:
      pcStack_c = (char *)0x0;
      if (0 < param_2) {
        pAStack_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
            }
            piStack_64[0x21] = -1;
            RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          pcStack_c = (char *)((int)pcStack_c + 1);
          pAStack_8 = pAStack_8 + 5;
        } while ((int)pcStack_c < param_2);
      }
      uVar11 = (**(code **)*piStack_64)(param_1);
      uVar22 = 0;
      if (DAT_00808a8f == '\0') {
LAB_0066bff3:
        puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
        *puStack_14 = uVar22;
      }
      else {
        pbVar15 = &DAT_008087ea;
        do {
          if (((DAT_00802a38 == 0) || (pbVar15[-1] < 8)) && (*pbVar15 == uVar11)) {
            uVar22 = 1;
            goto LAB_0066bff3;
          }
          pbVar15 = pbVar15 + 0x51;
        } while ((int)pbVar15 < 0x808a72);
        puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
        *puStack_14 = 0;
      }
      break;
    case 0x7e9:
      puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
      *puStack_14 = (uint)(DAT_00808a8f != '\0');
      break;
    case 0x7ea:
      pcStack_c = (char *)0x0;
      if (0 < param_2) {
        pAStack_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
            }
            piStack_64[0x21] = -1;
            RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          pcStack_c = (char *)((int)pcStack_c + 1);
          pAStack_8 = pAStack_8 + 5;
        } while ((int)pcStack_c < param_2);
      }
      pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
      if (((pAStack_8 == (AiFltClassTy *)0x9) &&
          (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) ||
         (pAStack_8 == (AiFltClassTy *)0xff)) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,0,(uint *)apAStack_50);
      if (iVar10 != 1) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
      *puStack_14 = (uint)(byte)apAStack_50[0][0x809950];
      break;
    case 0x7eb:
      puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
      *puStack_14 = (uint)DAT_0080874d;
      break;
    case 0x7ec:
      pcStack_c = (char *)0x0;
      if (0 < param_2) {
        pAStack_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
            }
            piStack_64[0x21] = -1;
            RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          pcStack_c = (char *)((int)pcStack_c + 1);
          pAStack_8 = pAStack_8 + 5;
        } while ((int)pcStack_c < param_2);
      }
      pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
      if (((pAStack_8 == (AiFltClassTy *)0x9) &&
          (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) ||
         (pAStack_8 == (AiFltClassTy *)0xff)) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,0,(uint *)apAStack_50);
      if (iVar10 != 1) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
      *puStack_14 = (uint)(byte)(&DAT_008087e8)[(int)apAStack_50[0] * 0x51];
      break;
    case 0x7ed:
      puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
      *puStack_14 = (uint)(DAT_00808a94 != '\0');
      break;
    case 0x7ee:
      pcStack_c = (char *)0x0;
      if (0 < param_2) {
        pAStack_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
            }
            piStack_64[0x21] = -1;
            RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          pcStack_c = pcStack_c + 1;
          pAStack_8 = pAStack_8 + 5;
        } while ((int)pcStack_c < param_2);
      }
      pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
      if ((pAStack_8 == (AiFltClassTy *)0x9) &&
         (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      puVar19 = (uint *)(param_1 + 5);
      uVar11 = (**(code **)*piStack_64)(puVar19,apAStack_50);
      iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,uVar11,puVar19);
      DAT_00811980 = 0;
      if (0 < iVar10) {
        uStack_10 = param_1 + 0x2d;
        uStack_18 = param_1 + 0x28;
        uStack_2c = (byte *)(param_1 + 0x23);
        uStack_1c = (byte *)(param_1 + 0x1e);
        uStack_24 = param_1 + 0x19;
        uStack_30 = param_1 + 0x14;
        uStack_28 = param_1 + 0xf;
        pcStack_c = param_1 + 10;
        ppAVar23 = apAStack_50;
        do {
          puVar27 = (undefined *)0x0;
          uVar28 = 0;
          puVar26 = &LAB_00401e8d;
          pcVar21 = uStack_10;
          sVar3 = (**(code **)*piStack_64)();
          sVar9 = (short)pcVar21;
          pcVar21 = uStack_18;
          sVar4 = (**(code **)*piStack_64)();
          sVar8 = (short)pcVar21;
          pbVar15 = uStack_2c;
          sVar5 = (**(code **)*piStack_64)();
          sVar6 = (short)pbVar15;
          pbVar15 = uStack_1c;
          pbVar14 = (byte *)(**(code **)*piStack_64)();
          cVar2 = (char)pbVar15;
          pcVar21 = uStack_24;
          uVar18 = (**(code **)*piStack_64)();
          uVar18 = (**(code **)*piStack_64)(uStack_30,uVar18);
          uVar18 = (**(code **)*piStack_64)(uStack_28,uVar18);
          uVar11 = (**(code **)*piStack_64)(pcStack_c,0x3fffffff,0,uVar18);
          thunk_FUN_00676d80(*ppAVar23,uVar11,(uint)pcVar21,pbVar14,cVar2,sVar5,sVar6,sVar4,sVar8,
                             sVar3,sVar9,puVar26,uVar28,puVar27);
          ppAVar23 = ppAVar23 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      goto LAB_0066df5e;
    case 0x7ef:
      pcStack_c = (char *)0x0;
      if (0 < param_2) {
        pAStack_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
            }
            piStack_64[0x21] = -1;
            RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          pcStack_c = pcStack_c + 1;
          pAStack_8 = pAStack_8 + 5;
        } while ((int)pcStack_c < param_2);
      }
      pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
      if ((pAStack_8 == (AiFltClassTy *)0x9) &&
         (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      puVar19 = (uint *)(param_1 + 5);
      uVar11 = (**(code **)*piStack_64)(puVar19,apAStack_50);
      iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,uVar11,puVar19);
      DAT_00811980 = 0;
      if (0 < iVar10) {
        uStack_10 = param_1 + 0x2d;
        uStack_18 = param_1 + 0x28;
        uStack_2c = (byte *)(param_1 + 0x23);
        uStack_1c = (byte *)(param_1 + 0x1e);
        uStack_24 = param_1 + 0x19;
        uStack_30 = param_1 + 0x14;
        uStack_28 = param_1 + 0xf;
        pcStack_c = param_1 + 10;
        ppAVar23 = apAStack_50;
        do {
          puVar27 = (undefined *)0x0;
          uVar28 = 0;
          puVar26 = &LAB_00401e8d;
          pcVar21 = uStack_10;
          sVar3 = (**(code **)*piStack_64)();
          sVar9 = (short)pcVar21;
          pcVar21 = uStack_18;
          sVar4 = (**(code **)*piStack_64)();
          sVar8 = (short)pcVar21;
          pbVar15 = uStack_2c;
          sVar5 = (**(code **)*piStack_64)();
          sVar6 = (short)pbVar15;
          pbVar15 = uStack_1c;
          pbVar14 = (byte *)(**(code **)*piStack_64)();
          cVar2 = (char)pbVar15;
          uVar18 = (**(code **)*piStack_64)(uStack_24);
          uVar18 = (**(code **)*piStack_64)(uStack_30,uVar18);
          uVar18 = (**(code **)*piStack_64)(uStack_28,uVar18);
          uVar11 = (**(code **)*piStack_64)(pcStack_c,0,uVar18);
          thunk_FUN_00676d80(*ppAVar23,0,uVar11,pbVar14,cVar2,sVar5,sVar6,sVar4,sVar8,sVar3,sVar9,
                             puVar26,uVar28,puVar27);
          ppAVar23 = ppAVar23 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      goto LAB_0066df5e;
    case 0x7f0:
      pAStack_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pAStack_8 < 10);
      if ((param_1[10] != '\x06') && (param_1[10] != '\x03')) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      pcStack_c = (char *)0x3;
      if (3 < param_2) {
        pAStack_8 = (AiFltClassTy *)0xf;
        do {
          if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
            }
            piStack_64[0x21] = -1;
            RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          pcStack_c = pcStack_c + 1;
          pAStack_8 = pAStack_8 + 5;
        } while ((int)pcStack_c < param_2);
      }
      pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
      if ((pAStack_8 == (AiFltClassTy *)0x9) &&
         (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      puVar19 = (uint *)(param_1 + 5);
      uVar11 = (**(code **)*piStack_64)(puVar19,apAStack_50);
      iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,uVar11,puVar19);
      DAT_00811980 = 0;
      if (0 < iVar10) {
        uStack_10 = param_1 + 0x2d;
        uStack_18 = param_1 + 0x28;
        uStack_2c = (byte *)(param_1 + 0x23);
        uStack_1c = (byte *)(param_1 + 0x1e);
        uStack_24 = param_1 + 0x19;
        uStack_30 = param_1 + 0x14;
        uStack_28 = param_1 + 0xf;
        pcStack_c = param_1 + 10;
        ppAVar23 = apAStack_50;
        do {
          puVar27 = (undefined *)0x0;
          uVar28 = 0;
          puVar26 = &LAB_00401e8d;
          pcVar21 = uStack_10;
          sVar3 = (**(code **)*piStack_64)();
          sVar9 = (short)pcVar21;
          pcVar21 = uStack_18;
          sVar4 = (**(code **)*piStack_64)();
          sVar8 = (short)pcVar21;
          pbVar15 = uStack_2c;
          sVar5 = (**(code **)*piStack_64)();
          sVar6 = (short)pbVar15;
          pbVar15 = uStack_1c;
          uVar18 = (**(code **)*piStack_64)();
          cVar2 = (char)pbVar15;
          uVar18 = (**(code **)*piStack_64)(uStack_24,uVar18);
          uVar18 = (**(code **)*piStack_64)(uStack_30,uVar18);
          uVar18 = (**(code **)*piStack_64)(uStack_28,uVar18);
          pbVar15 = (byte *)(**(code **)(*piStack_64 + 8))(pcStack_c,uVar18);
          thunk_FUN_00676d80(*ppAVar23,0,0x3fffffff,pbVar15,cVar2,sVar5,sVar6,sVar4,sVar8,sVar3,
                             sVar9,puVar26,uVar28,puVar27);
          ppAVar23 = ppAVar23 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
LAB_0066df5e:
      puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
      *puStack_14 = DAT_00811980;
      break;
    case 0x7f1:
      pcStack_c = (char *)0x0;
      if (0 < param_2) {
        pAStack_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
            }
            piStack_64[0x21] = -1;
            RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          pcStack_c = pcStack_c + 1;
          pAStack_8 = pAStack_8 + 5;
        } while ((int)pcStack_c < param_2);
      }
      pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
      if ((pAStack_8 == (AiFltClassTy *)0x9) &&
         (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      puVar19 = (uint *)(param_1 + 5);
      uVar11 = (**(code **)*piStack_64)(puVar19,apAStack_50);
      pcVar21 = (char *)thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,uVar11,puVar19);
      uStack_10 = (char *)0x0;
      if (0 < (int)pcVar21) {
        pcStack_c = param_1 + 10;
        pAStack_8 = (AiFltClassTy *)apAStack_50;
        do {
          uStack_18 = pcVar21;
          puVar16 = (undefined4 *)thunk_FUN_0043e420(auStack_4f0,(char)*pAStack_8);
          pcVar21 = pcStack_c;
          puVar24 = auStack_19c;
          for (iVar10 = 0x4e; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar24 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar24 = puVar24 + 1;
          }
          uVar11 = (**(code **)*piStack_64)(pcVar21);
          iVar10 = 0;
          do {
            uVar22 = 1 << ((byte)iVar10 & 0x1f) & uVar11;
            if (uVar22 < 0x101) {
              iVar13 = iStack_74;
              if (uVar22 != 0x100) {
                switch(uVar22) {
                case 1:
                  iVar13 = iStack_f4;
                  break;
                case 2:
                  iVar13 = iStack_e4;
                  break;
                default:
                  goto switchD_0066c9e5_caseD_3;
                case 4:
                  iVar13 = iStack_d4;
                  break;
                case 8:
                  iVar13 = iStack_c4;
                  break;
                case 0x10:
                  iVar13 = iStack_b4;
                  break;
                case 0x20:
                  iVar13 = iStack_a4;
                  break;
                case 0x40:
                  iVar13 = iStack_94;
                  break;
                case 0x80:
                  iVar13 = iStack_84;
                }
              }
LAB_0066cacb:
              uStack_10 = (char *)((int)uStack_10 + iVar13);
            }
            else {
              if (0x100000 < uVar22) {
                iVar13 = iStack_124;
                if (((uVar22 != 0x200000) && (iVar13 = iStack_114, uVar22 != 0x400000)) &&
                   (iVar13 = iStack_104, uVar22 != 0x800000)) goto switchD_0066c9e5_caseD_3;
                goto LAB_0066cacb;
              }
              iVar13 = iStack_134;
              if (uVar22 == 0x100000) goto LAB_0066cacb;
              if (uVar22 < 0x40001) {
                iVar13 = iStack_174;
                if (((uVar22 == 0x40000) || (iVar13 = iStack_154, uVar22 == 0x10000)) ||
                   (iVar13 = iStack_144, uVar22 == 0x20000)) goto LAB_0066cacb;
              }
              else {
                iVar13 = iStack_164;
                if (uVar22 == 0x80000) goto LAB_0066cacb;
              }
            }
switchD_0066c9e5_caseD_3:
            iVar10 = iVar10 + 1;
          } while (iVar10 < 0x20);
          pAStack_8 = pAStack_8 + 4;
          pcVar21 = uStack_18 + -1;
          uStack_18 = pcVar21;
        } while (pcVar21 != (char *)0x0);
      }
      puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
      *puStack_14 = (uint)uStack_10;
      break;
    case 0x7f2:
      pcStack_c = (char *)0x0;
      if (0 < param_2) {
        pAStack_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
            }
            piStack_64[0x21] = -1;
            RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          pcStack_c = pcStack_c + 1;
          pAStack_8 = pAStack_8 + 5;
        } while ((int)pcStack_c < param_2);
      }
      pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
      if ((pAStack_8 == (AiFltClassTy *)0x9) &&
         (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      puVar19 = (uint *)(param_1 + 5);
      uVar11 = (**(code **)*piStack_64)(puVar19,apAStack_50);
      pcVar21 = (char *)thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,uVar11,puVar19);
      uStack_10 = (char *)0x0;
      if (0 < (int)pcVar21) {
        pcStack_c = param_1 + 10;
        pAStack_8 = (AiFltClassTy *)apAStack_50;
        do {
          uStack_18 = pcVar21;
          puVar16 = (undefined4 *)thunk_FUN_0043e420(auStack_3b8,(char)*pAStack_8);
          pcVar21 = pcStack_c;
          puVar24 = auStack_19c;
          for (iVar10 = 0x4e; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar24 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar24 = puVar24 + 1;
          }
          uVar11 = (**(code **)*piStack_64)(pcVar21);
          iVar10 = 0;
          do {
            uVar22 = 1 << ((byte)iVar10 & 0x1f) & uVar11;
            if (uVar22 < 0x101) {
              iVar13 = iStack_70;
              if (uVar22 != 0x100) {
                switch(uVar22) {
                case 1:
                  iVar13 = iStack_f0;
                  break;
                case 2:
                  iVar13 = iStack_e0;
                  break;
                default:
                  goto switchD_0066cc62_caseD_3;
                case 4:
                  iVar13 = iStack_d0;
                  break;
                case 8:
                  iVar13 = iStack_c0;
                  break;
                case 0x10:
                  iVar13 = iStack_b0;
                  break;
                case 0x20:
                  iVar13 = iStack_a0;
                  break;
                case 0x40:
                  iVar13 = iStack_90;
                  break;
                case 0x80:
                  iVar13 = iStack_80;
                }
              }
LAB_0066cd48:
              uStack_10 = (char *)((int)uStack_10 + iVar13);
            }
            else {
              if (0x100000 < uVar22) {
                iVar13 = iStack_120;
                if (((uVar22 != 0x200000) && (iVar13 = iStack_110, uVar22 != 0x400000)) &&
                   (iVar13 = iStack_100, uVar22 != 0x800000)) goto switchD_0066cc62_caseD_3;
                goto LAB_0066cd48;
              }
              iVar13 = iStack_130;
              if (uVar22 == 0x100000) goto LAB_0066cd48;
              if (uVar22 < 0x40001) {
                iVar13 = iStack_170;
                if (((uVar22 == 0x40000) || (iVar13 = iStack_150, uVar22 == 0x10000)) ||
                   (iVar13 = iStack_140, uVar22 == 0x20000)) goto LAB_0066cd48;
              }
              else {
                iVar13 = iStack_160;
                if (uVar22 == 0x80000) goto LAB_0066cd48;
              }
            }
switchD_0066cc62_caseD_3:
            iVar10 = iVar10 + 1;
          } while (iVar10 < 0x20);
          pAStack_8 = pAStack_8 + 4;
          pcVar21 = uStack_18 + -1;
          uStack_18 = pcVar21;
        } while (pcVar21 != (char *)0x0);
      }
      puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
      *puStack_14 = (uint)uStack_10;
      break;
    case 0x7f3:
      pcStack_c = (char *)0x0;
      if (0 < param_2) {
        pAStack_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
            }
            piStack_64[0x21] = -1;
            RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          pcStack_c = pcStack_c + 1;
          pAStack_8 = pAStack_8 + 5;
        } while ((int)pcStack_c < param_2);
      }
      pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
      if ((pAStack_8 == (AiFltClassTy *)0x9) &&
         (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      puVar19 = (uint *)(param_1 + 5);
      uVar11 = (**(code **)*piStack_64)(puVar19,apAStack_50);
      pcVar21 = (char *)thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,uVar11,puVar19);
      uStack_10 = (char *)0x0;
      if (0 < (int)pcVar21) {
        pcStack_c = param_1 + 10;
        pAStack_8 = (AiFltClassTy *)apAStack_50;
        do {
          uStack_18 = pcVar21;
          puVar16 = (undefined4 *)thunk_FUN_0043e420(auStack_628,(char)*pAStack_8);
          pcVar21 = pcStack_c;
          puVar24 = auStack_19c;
          for (iVar10 = 0x4e; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar24 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar24 = puVar24 + 1;
          }
          uVar11 = (**(code **)*piStack_64)(pcVar21);
          iVar10 = 0;
          do {
            uVar22 = 1 << ((byte)iVar10 & 0x1f) & uVar11;
            if (uVar22 < 0x101) {
              iVar13 = iStack_78;
              if (uVar22 != 0x100) {
                switch(uVar22) {
                case 1:
                  iVar13 = iStack_f8;
                  break;
                case 2:
                  iVar13 = iStack_e8;
                  break;
                default:
                  goto switchD_0066cedf_caseD_3;
                case 4:
                  iVar13 = iStack_d8;
                  break;
                case 8:
                  iVar13 = iStack_c8;
                  break;
                case 0x10:
                  iVar13 = iStack_b8;
                  break;
                case 0x20:
                  iVar13 = iStack_a8;
                  break;
                case 0x40:
                  iVar13 = iStack_98;
                  break;
                case 0x80:
                  iVar13 = iStack_88;
                }
              }
LAB_0066cfc8:
              uStack_10 = (char *)((int)uStack_10 + iVar13);
            }
            else {
              if (0x100000 < uVar22) {
                iVar13 = iStack_128;
                if (((uVar22 != 0x200000) && (iVar13 = iStack_118, uVar22 != 0x400000)) &&
                   (iVar13 = iStack_108, uVar22 != 0x800000)) goto switchD_0066cedf_caseD_3;
                goto LAB_0066cfc8;
              }
              iVar13 = iStack_138;
              if (uVar22 == 0x100000) goto LAB_0066cfc8;
              if (uVar22 < 0x40001) {
                iVar13 = iStack_178;
                if (((uVar22 == 0x40000) || (iVar13 = iStack_158, uVar22 == 0x10000)) ||
                   (iVar13 = iStack_148, uVar22 == 0x20000)) goto LAB_0066cfc8;
              }
              else {
                iVar13 = iStack_168;
                if (uVar22 == 0x80000) goto LAB_0066cfc8;
              }
            }
switchD_0066cedf_caseD_3:
            iVar10 = iVar10 + 1;
          } while (iVar10 < 0x20);
          pAStack_8 = pAStack_8 + 4;
          pcVar21 = uStack_18 + -1;
          uStack_18 = pcVar21;
        } while (pcVar21 != (char *)0x0);
      }
      puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
      *puStack_14 = (uint)uStack_10;
      break;
    case 0x7f4:
      pcStack_c = (char *)0x0;
      if (0 < param_2) {
        pAStack_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
            }
            piStack_64[0x21] = -1;
            RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          pcStack_c = pcStack_c + 1;
          pAStack_8 = pAStack_8 + 5;
        } while ((int)pcStack_c < param_2);
      }
      pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
      if ((pAStack_8 == (AiFltClassTy *)0x9) &&
         (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      puVar19 = (uint *)(param_1 + 5);
      uVar11 = (**(code **)*piStack_64)(puVar19,apAStack_50);
      pAVar12 = (AiFltClassTy *)thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,uVar11,puVar19);
      pcVar21 = (char *)0x0;
      if (0 < (int)pAVar12) {
        pcStack_c = param_1 + 10;
        ppAVar23 = apAStack_50;
        pAStack_8 = pAVar12;
        do {
          uVar18 = (**(code **)*piStack_64)(pcStack_c);
          iVar10 = thunk_FUN_00677700((int)*ppAVar23,uVar18);
          pcVar21 = pcVar21 + iVar10;
          ppAVar23 = ppAVar23 + 1;
          pAStack_8 = pAStack_8 + -1;
        } while (pAStack_8 != (AiFltClassTy *)0x0);
        pAStack_8 = (AiFltClassTy *)0x0;
      }
      goto LAB_00670425;
    case 0x7f5:
      pcStack_c = (char *)0x0;
      if (0 < param_2) {
        pAStack_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
            }
            piStack_64[0x21] = -1;
            RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          pcStack_c = (char *)((int)pcStack_c + 1);
          pAStack_8 = pAStack_8 + 5;
        } while ((int)pcStack_c < param_2);
      }
      puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
      uVar18 = (**(code **)*piStack_64)(param_1 + 0x1e);
      uVar18 = (**(code **)*piStack_64)(param_1 + 0x19,uVar18);
      uVar18 = (**(code **)*piStack_64)(param_1 + 0x14,uVar18);
      uVar18 = (**(code **)*piStack_64)(param_1 + 0xf,uVar18);
      pcVar21 = param_1 + 10;
      iVar10 = (**(code **)*piStack_64)(pcVar21,uVar18);
      pcVar20 = param_1 + 5;
      iVar13 = (**(code **)*piStack_64)();
      iVar17 = (**(code **)*piStack_64)();
      uVar11 = thunk_FUN_006777d0(iVar17,(int)param_1,iVar13,pcVar20,iVar10,(int)pcVar21);
      *puStack_14 = uVar11;
      break;
    default:
      goto switchD_0066b69d_caseD_7d8;
    }
    goto LAB_00670431;
  }
  sVar3 = (short)param_1;
  switch(iVar10) {
  case 0x7f7:
    pAStack_8 = (AiFltClassTy *)0x0;
    do {
      if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      pAStack_8 = pAStack_8 + 5;
    } while ((int)pAStack_8 < 0xf);
    if ((param_1[0xf] != '\x06') && (param_1[0xf] != '\x03')) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    pcStack_c = (char *)0x4;
    if (4 < param_2) {
      pAStack_8 = (AiFltClassTy *)0x14;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = pcStack_c + 1;
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
    if ((pAStack_8 == (AiFltClassTy *)0x9) &&
       (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    puVar19 = (uint *)(param_1 + 5);
    uVar11 = (**(code **)*piStack_64)(puVar19,apAStack_50);
    iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,uVar11,puVar19);
    DAT_00811980 = 0;
    if (0 < iVar10) {
      uStack_10 = param_1 + 0x2d;
      uStack_18 = param_1 + 0x28;
      uStack_2c = (byte *)(param_1 + 0x23);
      uStack_1c = (byte *)(param_1 + 0x1e);
      uStack_24 = param_1 + 0x19;
      uStack_30 = param_1 + 0x14;
      uStack_28 = param_1 + 0xf;
      pcStack_c = param_1 + 10;
      ppAVar23 = apAStack_50;
      do {
        uVar28 = 0;
        puVar26 = &LAB_004050fb;
        pcVar21 = uStack_10;
        sVar3 = (**(code **)*piStack_64)();
        sVar7 = (short)pcVar21;
        pcVar21 = uStack_18;
        sVar4 = (**(code **)*piStack_64)();
        sVar9 = (short)pcVar21;
        pbVar15 = uStack_2c;
        sVar5 = (**(code **)*piStack_64)();
        sVar8 = (short)pbVar15;
        pbVar15 = uStack_1c;
        uVar18 = (**(code **)*piStack_64)();
        uVar18 = (**(code **)*piStack_64)(uStack_24,uVar18);
        uVar18 = (**(code **)*piStack_64)(uStack_30,uVar18);
        uVar18 = (**(code **)(*piStack_64 + 8))(uStack_28,uVar18);
        sVar6 = (**(code **)*piStack_64)(pcStack_c,uVar18);
        thunk_FUN_00677be0(*(short *)ppAVar23,sVar6,pbVar15,sVar5,sVar8,sVar4,sVar9,sVar3,sVar7,
                           puVar26,uVar28);
        ppAVar23 = ppAVar23 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    goto LAB_0066df5e;
  case 0x7f8:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar21 = thunk_FUN_00674af0(iVar10);
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    pcStack_c = (char *)0x2;
    if (2 < param_2) {
      pAStack_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = (char *)((int)pcStack_c + 1);
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    DAT_00811980 = 0;
    uVar18 = (**(code **)*piStack_64)(param_1 + 0x23,&LAB_00402bcb,0);
    uVar18 = (**(code **)*piStack_64)(param_1 + 0x1e,uVar18);
    uVar18 = (**(code **)*piStack_64)(param_1 + 0x19,uVar18);
    pcVar21 = param_1 + 0x14;
    sVar6 = (**(code **)*piStack_64)();
    sVar4 = sVar3 + 0xf;
    sVar8 = (**(code **)*piStack_64)();
    sVar5 = sVar3 + 10;
    sVar9 = (**(code **)*piStack_64)();
    sVar3 = sVar3 + 5;
    pbVar15 = (byte *)(**(code **)(*piStack_64 + 8))();
    sVar7 = (**(code **)*piStack_64)(param_1);
    thunk_FUN_00677f40(sVar7,pbVar15,sVar3,sVar9,sVar5,sVar8,sVar4,sVar6,pcVar21,uVar18);
    goto LAB_0066dced;
  case 0x7f9:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar21 = thunk_FUN_00674af0(iVar10);
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    pcStack_c = (char *)0x2;
    if (2 < param_2) {
      pAStack_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = (char *)((int)pcStack_c + 1);
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    DAT_00811980 = 0;
    uVar18 = (**(code **)*piStack_64)(param_1 + 0x23,&LAB_00403d50,0);
    uVar18 = (**(code **)*piStack_64)(param_1 + 0x1e,uVar18);
    uVar18 = (**(code **)*piStack_64)(param_1 + 0x19,uVar18);
    pcVar21 = param_1 + 0x14;
    sVar5 = (**(code **)*piStack_64)();
    sVar4 = sVar3 + 0xf;
    sVar6 = (**(code **)*piStack_64)();
    sVar3 = sVar3 + 10;
    sVar8 = (**(code **)*piStack_64)();
    pcVar20 = param_1;
    cVar2 = (**(code **)*piStack_64)();
    sVar9 = (short)pcVar20;
    pbVar15 = (byte *)(**(code **)(*piStack_64 + 8))(param_1 + 5);
    thunk_FUN_006785a0(pbVar15,cVar2,sVar9,sVar8,sVar3,sVar6,sVar4,sVar5,pcVar21,uVar18);
    goto LAB_0066dced;
  case 0x7fa:
    pAStack_8 = (AiFltClassTy *)0x0;
    do {
      if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      pAStack_8 = pAStack_8 + 5;
    } while ((int)pAStack_8 < 0x14);
    if ((param_1[0x14] != '\x06') && (param_1[0x14] != '\x03')) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    pcStack_c = (char *)0x5;
    if (5 < param_2) {
      pAStack_8 = (AiFltClassTy *)0x19;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = pcStack_c + 1;
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
    if ((pAStack_8 == (AiFltClassTy *)0x9) &&
       (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    puVar19 = (uint *)(param_1 + 5);
    uVar11 = (**(code **)*piStack_64)(puVar19,apAStack_50);
    iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,uVar11,puVar19);
    DAT_00811980 = 0;
    if (0 < iVar10) {
      pAStack_8 = (AiFltClassTy *)(param_1 + 0x32);
      uStack_10 = param_1 + 0x2d;
      uStack_18 = param_1 + 0x28;
      uStack_2c = (byte *)(param_1 + 0x23);
      uStack_1c = (byte *)(param_1 + 0x1e);
      uStack_24 = param_1 + 0x19;
      uStack_30 = param_1 + 0x14;
      uStack_28 = param_1 + 0xf;
      pcStack_c = param_1 + 10;
      ppAVar23 = apAStack_50;
      do {
        uVar28 = 0;
        puVar26 = &LAB_004027a7;
        pAVar12 = pAStack_8;
        sVar3 = (**(code **)*piStack_64)();
        sVar7 = (short)pAVar12;
        pcVar21 = uStack_10;
        sVar4 = (**(code **)*piStack_64)();
        sVar9 = (short)pcVar21;
        pcVar21 = uStack_18;
        sVar5 = (**(code **)*piStack_64)();
        sVar8 = (short)pcVar21;
        pbVar15 = uStack_2c;
        cVar2 = (**(code **)*piStack_64)();
        uVar18 = (**(code **)*piStack_64)(uStack_1c);
        uVar18 = (**(code **)*piStack_64)(uStack_24,uVar18);
        uVar18 = (**(code **)(*piStack_64 + 8))(uStack_30,uVar18);
        uVar18 = (**(code **)*piStack_64)(uStack_28,uVar18);
        sVar6 = (**(code **)*piStack_64)(pcStack_c,uVar18);
        thunk_FUN_00678240((int)*ppAVar23,sVar6,cVar2,pbVar15,sVar5,sVar8,sVar4,sVar9,sVar3,sVar7,
                           puVar26,uVar28);
        ppAVar23 = ppAVar23 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    goto LAB_0066df5e;
  case 0x7fb:
    pcStack_c = (char *)0x0;
    if (0 < param_2) {
      pAStack_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = (char *)((int)pcStack_c + 1);
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    DAT_00811980 = 0;
    uVar18 = (**(code **)*piStack_64)(param_1 + 0x1e,&LAB_00401f7d,0);
    uVar18 = (**(code **)*piStack_64)(param_1 + 0x19,uVar18);
    uVar18 = (**(code **)*piStack_64)(param_1 + 0x14,uVar18);
    pcVar21 = param_1 + 0xf;
    sVar5 = (**(code **)*piStack_64)();
    sVar4 = sVar3 + 10;
    sVar6 = (**(code **)*piStack_64)();
    sVar3 = sVar3 + 5;
    sVar8 = (**(code **)*piStack_64)();
    sVar9 = (**(code **)*piStack_64)();
    thunk_FUN_00677960(sVar9,(short)param_1,sVar8,sVar3,sVar6,sVar4,sVar5,pcVar21,uVar18);
LAB_0066dced:
    puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
    *puStack_14 = DAT_00811980;
    break;
  case 0x7fc:
    pcStack_c = (char *)0x0;
    if (0 < param_2) {
      pAStack_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = (char *)((int)pcStack_c + 1);
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    pcStack_c = (char *)0xffffffff;
    pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
    uStack_10 = (char *)(**(code **)*piStack_64)(param_1 + 5);
    iVar10 = (**(code **)*piStack_64)(param_1 + 10);
    switch(pAStack_8) {
    case (AiFltClassTy *)0xdc:
      if (((int)uStack_10 < 0x32) || (0x73 < (int)uStack_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if ((0 < iVar10) && (iVar10 < 4)) {
          pcStack_c = *(char **)(&DAT_00854350 + (iVar10 + (int)uStack_10 * 3) * 4);
        }
      }
      else {
        if (((int)uStack_10 < 1) || (0x28 < (int)uStack_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          pcStack_c = *(char **)(&DAT_00854428 + (int)uStack_10 * 4);
        }
      }
      break;
    case (AiFltClassTy *)0xdd:
      if (((int)uStack_10 < 0x32) || (0x73 < (int)uStack_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if ((0 < iVar10) && (iVar10 < 4)) {
          pcStack_c = *(char **)(&DAT_007e19f4 + (iVar10 + (int)uStack_10 * 3) * 4);
        }
      }
      else {
        if (((int)uStack_10 < 1) || (0x28 < (int)uStack_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          pcStack_c = *(char **)(&DAT_007e055c + (int)uStack_10 * 4);
        }
      }
      break;
    case (AiFltClassTy *)0xde:
      if (((int)uStack_10 < 0x32) || (0x73 < (int)uStack_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if ((0 < iVar10) && (iVar10 < 4)) {
          pcStack_c = *(char **)(&DAT_007e22a0 + (iVar10 + (int)uStack_10 * 3) * 4);
        }
      }
      else {
        if (((int)uStack_10 < 1) || (0x28 < (int)uStack_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          pcStack_c = *(char **)(&DAT_007e079c + (int)uStack_10 * 4);
        }
      }
      break;
    default:
      pcStack_c = (char *)0x0;
      break;
    case (AiFltClassTy *)0xe2:
      if (((int)uStack_10 < 0x32) || (0x73 < (int)uStack_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if ((0 < iVar10) && (iVar10 < 4)) {
          pcStack_c = *(char **)(&DAT_007e2f04 + (iVar10 + (int)uStack_10 * 3) * 4);
        }
      }
      else {
        if (((int)uStack_10 < 1) || (0x28 < (int)uStack_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          pcStack_c = *(char **)(&DAT_007e09dc + (int)uStack_10 * 4);
        }
      }
    }
    if ((int)pcStack_c < 0) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
    *puStack_14 = (uint)pcStack_c;
    break;
  default:
    goto switchD_0066b69d_caseD_7d8;
  case 0x80c:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar21 = thunk_FUN_00674af0(iVar10);
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    pcStack_c = (char *)0x2;
    if (2 < param_2) {
      pAStack_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = (char *)((int)pcStack_c + 1);
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
    if ((pAStack_8 == (AiFltClassTy *)0x9) &&
       (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    uStack_10 = (char *)0x0;
    iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,0,(uint *)apAStack_50);
    if (iVar10 == 1) {
      puVar27 = (undefined *)0x0;
      uVar18 = 0;
      puVar26 = &LAB_00402ba3;
      sVar9 = -1;
      sVar8 = -1;
      sVar6 = -1;
      sVar5 = 0;
      sVar4 = 0;
      sVar3 = 0;
      cVar2 = -1;
      pbVar15 = (byte *)(**(code **)(*piStack_64 + 8))(param_1 + 5);
      iVar10 = thunk_FUN_00676d80(apAStack_50[0],0,0x3fffffff,pbVar15,cVar2,sVar3,sVar4,sVar5,sVar6,
                                  sVar8,sVar9,puVar26,uVar18,puVar27);
      if ((iVar10 == -1) && (DAT_00811984 != (int *)0x0)) {
        uStack_10 = (char *)0x1;
        iVar10 = (**(code **)*piStack_64)(param_1 + 10);
        pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1 + 0xf);
        pcStack_c = (char *)(**(code **)*piStack_64)(param_1 + 0x14);
        iVar13 = (**(code **)*piStack_64)(param_1 + 0x19);
        if ((-1 < iVar10) || ((-1 < (int)pAStack_8 || (-1 < (int)pcStack_c)))) {
          thunk_FUN_004162b0(DAT_00811984,&sStack_5a,&sStack_52,&sStack_58);
          (**(code **)(*piStack_64 + 0x20))(iVar10,(int)sStack_5a);
          (**(code **)(*piStack_64 + 0x20))(pAStack_8,(int)sStack_52);
          (**(code **)(*piStack_64 + 0x20))(pcStack_c,(int)sStack_58);
        }
        if (-1 < iVar13) {
          uVar18 = (**(code **)(*DAT_00811984 + 0x11c))();
          (**(code **)(*piStack_64 + 0x20))(iVar13,uVar18);
          puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
          *puStack_14 = (uint)uStack_10;
          break;
        }
      }
    }
    else {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
    *puStack_14 = (uint)uStack_10;
    break;
  case 0x80d:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar21 = thunk_FUN_00674af0(iVar10);
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    pcStack_c = (char *)0x2;
    if (2 < param_2) {
      pAStack_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = (char *)((int)pcStack_c + 1);
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
    if ((pAStack_8 == (AiFltClassTy *)0x9) &&
       (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    uStack_10 = (char *)0x0;
    iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,0,(uint *)apAStack_50);
    if (iVar10 == 1) {
      uVar18 = 0;
      puVar26 = &LAB_00402ca2;
      sVar9 = -1;
      sVar8 = -1;
      sVar6 = -1;
      sVar5 = 0;
      sVar4 = 0;
      sVar3 = 0;
      pbVar15 = (byte *)(**(code **)(*piStack_64 + 8))(param_1 + 5);
      iVar10 = thunk_FUN_00677be0((short)apAStack_50[0],0,pbVar15,sVar3,sVar4,sVar5,sVar6,sVar8,
                                  sVar9,puVar26,uVar18);
      if ((iVar10 == -1) && (DAT_00811984 != (int *)0x0)) {
        uStack_10 = (char *)0x1;
        iVar10 = (**(code **)*piStack_64)(param_1 + 10);
        pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1 + 0xf);
        pcStack_c = (char *)(**(code **)*piStack_64)(param_1 + 0x14);
        iVar13 = (**(code **)*piStack_64)(param_1 + 0x19);
        if ((-1 < iVar10) || ((-1 < (int)pAStack_8 || (-1 < (int)pcStack_c)))) {
          thunk_FUN_004162f0(DAT_00811984,&sStack_5c,&sStack_56,&sStack_54);
          (**(code **)(*piStack_64 + 0x20))(iVar10,(int)sStack_5c);
          (**(code **)(*piStack_64 + 0x20))(pAStack_8,(int)sStack_56);
          (**(code **)(*piStack_64 + 0x20))(pcStack_c,(int)sStack_54);
        }
        if (-1 < iVar13) {
          uVar18 = (**(code **)(*DAT_00811984 + 0x11c))();
          (**(code **)(*piStack_64 + 0x20))(iVar13,uVar18);
          puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
          *puStack_14 = (uint)uStack_10;
          break;
        }
      }
    }
    else {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
    *puStack_14 = (uint)uStack_10;
    break;
  case 0x80e:
    if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
      pcVar21 = thunk_FUN_00674af0(iVar10);
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    pcStack_c = (char *)0x1;
    if (1 < param_2) {
      pAStack_8 = (AiFltClassTy *)0x5;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = (char *)((int)pcStack_c + 1);
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    uVar18 = 0;
    puVar29 = &LAB_0040188e;
    puVar26 = (undefined *)0xffffffff;
    sVar8 = -1;
    sVar6 = -1;
    sVar5 = 0;
    uStack_10 = (char *)0x0;
    sVar4 = 0;
    sVar3 = 0;
    pcVar21 = param_1;
    pbVar15 = (byte *)(**(code **)(*piStack_64 + 8))();
    iVar10 = thunk_FUN_00677f40(0,pbVar15,(short)pcVar21,sVar3,sVar4,sVar5,sVar6,sVar8,puVar26,
                                puVar29);
    if ((iVar10 == -1) && (DAT_00811984 != (int *)0x0)) {
      uStack_10 = (char *)0x1;
      iVar10 = (**(code **)*piStack_64)(param_1 + 5,uVar18);
      pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1 + 10);
      pcStack_c = (char *)(**(code **)*piStack_64)(param_1 + 0xf);
      iVar13 = (**(code **)*piStack_64)(param_1 + 0x14);
      if ((-1 < iVar10) || ((-1 < (int)pAStack_8 || (-1 < (int)pcStack_c)))) {
        thunk_FUN_004162f0(DAT_00811984,&sStack_60,&sStack_5e,(undefined2 *)((int)&uStack_28 + 2));
        (**(code **)(*piStack_64 + 0x20))(iVar10,(int)sStack_60);
        (**(code **)(*piStack_64 + 0x20))(pAStack_8,(int)sStack_5e);
        (**(code **)(*piStack_64 + 0x20))(pcStack_c,(int)uStack_28._2_2_);
      }
      if (-1 < iVar13) {
        uVar18 = (**(code **)(*DAT_00811984 + 0x11c))();
        (**(code **)(*piStack_64 + 0x20))(iVar13,uVar18);
      }
    }
    puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
    *puStack_14 = (uint)uStack_10;
    break;
  case 0x80f:
    if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
      pcVar21 = thunk_FUN_00674af0(iVar10);
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    pcStack_c = (char *)0x1;
    if (1 < param_2) {
      pAStack_8 = (AiFltClassTy *)0x5;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = (char *)((int)pcStack_c + 1);
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    uVar18 = 0;
    puVar29 = &LAB_00404c73;
    puVar26 = (undefined *)0xffffffff;
    sVar9 = -1;
    sVar8 = -1;
    sVar6 = 0;
    sVar5 = 0;
    uStack_10 = (char *)0x0;
    sVar4 = 0;
    sVar3 = -1;
    pcVar21 = param_1;
    pbVar15 = (byte *)(**(code **)(*piStack_64 + 8))();
    iVar10 = thunk_FUN_006785a0(pbVar15,(char)pcVar21,sVar3,sVar4,sVar5,sVar6,sVar8,sVar9,puVar26,
                                puVar29);
    if ((iVar10 == -1) && (DAT_00811984 != (int *)0x0)) {
      uStack_10 = (char *)0x1;
      iVar10 = (**(code **)*piStack_64)(param_1 + 5,uVar18);
      pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1 + 10);
      pcStack_c = (char *)(**(code **)*piStack_64)(param_1 + 0xf);
      iVar13 = (**(code **)*piStack_64)(param_1 + 0x14);
      if ((-1 < iVar10) || ((-1 < (int)pAStack_8 || (-1 < (int)pcStack_c)))) {
        thunk_FUN_004162b0(DAT_00811984,(undefined2 *)((int)&uStack_30 + 2),
                           (undefined2 *)((int)&uStack_24 + 2),(undefined2 *)((int)&uStack_1c + 2));
        (**(code **)(*piStack_64 + 0x20))(iVar10,(int)uStack_30._2_2_);
        (**(code **)(*piStack_64 + 0x20))(pAStack_8,(int)uStack_24._2_2_);
        (**(code **)(*piStack_64 + 0x20))(pcStack_c,(int)uStack_1c._2_2_);
      }
      if (-1 < iVar13) {
        uVar18 = (**(code **)(*DAT_00811984 + 0x11c))();
        (**(code **)(*piStack_64 + 0x20))(iVar13,uVar18);
      }
    }
    puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
    *puStack_14 = (uint)uStack_10;
    break;
  case 0x810:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar21 = thunk_FUN_00674af0(iVar10);
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    pcStack_c = (char *)0x2;
    if (2 < param_2) {
      pAStack_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = (char *)((int)pcStack_c + 1);
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
    if ((pAStack_8 == (AiFltClassTy *)0x9) &&
       (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    uStack_1c = (byte *)0x0;
    iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,0,(uint *)apAStack_50);
    if (iVar10 == 1) {
      uVar18 = 0;
      puVar26 = &LAB_0040446c;
      sVar9 = -1;
      sVar8 = -1;
      sVar6 = -1;
      sVar5 = 0;
      sVar4 = 0;
      sVar3 = 0;
      pbVar15 = (byte *)(**(code **)(*piStack_64 + 8))(param_1 + 5);
      iVar10 = thunk_FUN_00678240((int)apAStack_50[0],0,-1,pbVar15,sVar3,sVar4,sVar5,sVar6,sVar8,
                                  sVar9,puVar26,uVar18);
      if ((iVar10 == -1) && (DAT_00811984 != (int *)0x0)) {
        uStack_1c = (byte *)0x1;
        iVar10 = (**(code **)*piStack_64)(param_1 + 10);
        pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1 + 0xf);
        pcStack_c = (char *)(**(code **)*piStack_64)(param_1 + 0x14);
        iVar13 = (**(code **)*piStack_64)(param_1 + 0x19);
        if ((-1 < iVar10) || ((-1 < (int)pAStack_8 || (-1 < (int)pcStack_c)))) {
          thunk_FUN_004162b0(DAT_00811984,(undefined2 *)((int)&uStack_2c + 2),
                             (undefined2 *)((int)&uStack_18 + 2),(undefined2 *)((int)&uStack_10 + 2)
                            );
          (**(code **)(*piStack_64 + 0x20))(iVar10,(int)uStack_2c._2_2_);
          (**(code **)(*piStack_64 + 0x20))(pAStack_8,(int)uStack_18._2_2_);
          (**(code **)(*piStack_64 + 0x20))(pcStack_c,(int)uStack_10._2_2_);
        }
        if (-1 < iVar13) {
          uVar18 = (**(code **)(*DAT_00811984 + 0x11c))();
          (**(code **)(*piStack_64 + 0x20))(iVar13,uVar18);
          puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
          *puStack_14 = (uint)uStack_1c;
          break;
        }
      }
    }
    else {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
    *puStack_14 = (uint)uStack_1c;
    break;
  case 0x816:
  case 0x817:
    pcStack_c = (char *)0x0;
    if (0 < param_2) {
      pAStack_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = (char *)((int)pcStack_c + 1);
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    pcStack_c = (char *)(**(code **)*piStack_64)(param_1);
    if ((pcStack_c == (char *)0x9) && (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    pAStack_8 = (AiFltClassTy *)0x0;
    iVar10 = thunk_FUN_00668f50(piStack_64,pcStack_c,0,(uint *)apAStack_50);
    if (iVar10 == 1) {
      if (*(short *)(param_1 + param_2 * 5 + 1) == 0x816) {
        thunk_FUN_004e6f00((int)apAStack_50[0]);
      }
      else if (*(short *)(param_1 + param_2 * 5 + 1) != 0x817) {
        puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
        *puStack_14 = (uint)pAStack_8;
        break;
      }
      pAStack_8 = (AiFltClassTy *)thunk_FUN_004e6fe0((int)apAStack_50[0]);
      puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
      *puStack_14 = (uint)pAStack_8;
    }
    else {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
      *puStack_14 = (uint)pAStack_8;
    }
    break;
  case 0x818:
    pcStack_c = (char *)0x0;
    if (0 < param_2) {
      pAStack_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = (char *)((int)pcStack_c + 1);
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
    if (((int)pAStack_8 < 0) || (0x9a < (int)pAStack_8)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
    *puStack_14 = (uint)(byte)*(AiFltClassTy *)((int)&DAT_00798fd8 + (int)pAStack_8);
    break;
  case 0x819:
  case 0x81b:
  case 0x81c:
    pcStack_c = (char *)0x0;
    if (0 < param_2) {
      pAStack_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = (char *)((int)pcStack_c + 1);
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    uStack_10 = (char *)(**(code **)*piStack_64)(param_1);
    pcStack_c = (char *)(**(code **)*piStack_64)(param_1 + 5);
    pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1 + 10);
    if (((int)pcStack_c < 0) || (0x9a < (int)pcStack_c)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    if ((uStack_10 == (char *)0x9) && (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    uStack_18 = (char *)0x0;
    iVar10 = thunk_FUN_00668f50(piStack_64,uStack_10,0,(uint *)apAStack_50);
    pAVar12 = pAStack_8;
    pcVar21 = pcStack_c;
    if (iVar10 == 1) {
      sVar3 = *(short *)(param_1 + param_2 * 5 + 1);
      if (sVar3 == 0x819) {
        iVar10 = thunk_FUN_004e60d0((int)apAStack_50[0],(int)pcStack_c);
        bVar1 = (int)pAStack_8 <= iVar10;
        puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
        *puStack_14 = (uint)bVar1;
        break;
      }
      if (sVar3 == 0x81b) {
        iVar10 = thunk_FUN_004e5990((int)apAStack_50[0],(uint)pcStack_c,(int)pAStack_8);
        puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
        *puStack_14 = (uint)(iVar10 != 0);
        break;
      }
      if (sVar3 == 0x81c) {
        iVar10 = thunk_FUN_004e5cc0((int)apAStack_50[0],(uint)pcStack_c,(int)pAStack_8);
        if ((iVar10 == 0) &&
           (iVar10 = thunk_FUN_004e7f20((int)apAStack_50[0],(int)pcVar21,(int)pAVar12), iVar10 == 0)
           ) {
          puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
          *puStack_14 = 0;
        }
        else {
          puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
          *puStack_14 = 1;
        }
        break;
      }
    }
    else {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    uVar11 = (uint)uStack_18;
    puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
    *puStack_14 = uVar11;
    break;
  case 0x81a:
    pcStack_c = (char *)0x0;
    if (0 < param_2) {
      pAStack_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = (char *)((int)pcStack_c + 1);
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
    pcStack_c = (char *)(**(code **)*piStack_64)(param_1 + 5);
    if (((int)pcStack_c < 0) || (0x9a < (int)pcStack_c)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    if ((pAStack_8 == (AiFltClassTy *)0x9) &&
       (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    uStack_10 = (char *)0x0;
    iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,0,(uint *)apAStack_50);
    if (iVar10 == 1) {
      bVar1 = thunk_FUN_004e5f90((int)apAStack_50[0],(uint)pcStack_c);
      puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
      *puStack_14 = (uint)(CONCAT31(extraout_var,bVar1) != 0);
    }
    else {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      uVar11 = (uint)uStack_10;
      puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
      *puStack_14 = uVar11;
    }
    break;
  case 0x81d:
    pcStack_c = (char *)0x0;
    if (0 < param_2) {
      pAStack_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = (char *)((int)pcStack_c + 1);
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    pcStack_c = (char *)(**(code **)*piStack_64)(param_1);
    iVar10 = (**(code **)*piStack_64)(param_1 + 5);
    pAStack_8 = (AiFltClassTy *)(iVar10 + -1);
    if (((int)pcStack_c < 0) || (0x9a < (int)pcStack_c)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    if (((int)pAStack_8 < 0) || (3 < (int)pcStack_c)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
    *puStack_14 = *(uint *)(&DAT_007e481c + (int)(pAStack_8 + (int)pcStack_c * 4) * 4);
    break;
  case 0x82a:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar21 = thunk_FUN_00674af0(iVar10);
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    pcStack_c = (char *)0x1;
    if (1 < param_2) {
      pAStack_8 = (AiFltClassTy *)0x5;
      do {
        if ((param_1[(int)pAStack_8] != '\x06') && (param_1[(int)pAStack_8] != '\x03')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = (char *)((int)pcStack_c + 1);
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
    if (((pAStack_8 == (AiFltClassTy *)0x9) &&
        (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) ||
       (pAStack_8 == (AiFltClassTy *)0xff)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,0,(uint *)apAStack_50);
    if (iVar10 != 1) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    uVar18 = (**(code **)(*piStack_64 + 8))(param_1 + 10);
    pbVar14 = (byte *)(param_1 + 5);
    pbVar15 = (byte *)(**(code **)(*piStack_64 + 8))(pbVar14,uVar18);
    iVar10 = thunk_FUN_0066ab60((char)apAStack_50[0]._0_1_,pbVar15,pbVar14);
    puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
    if (iVar10 == 0) {
      *puStack_14 = 0xffffffff;
    }
    else {
      *puStack_14 = (uint)*(ushort *)(iVar10 + 0x7d);
    }
    break;
  case 0x82b:
    pAStack_8 = (AiFltClassTy *)0x0;
    do {
      if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      pAStack_8 = pAStack_8 + 5;
    } while ((int)pAStack_8 < 0x14);
    pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
    if (((pAStack_8 == (AiFltClassTy *)0x9) &&
        (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) ||
       (pAStack_8 == (AiFltClassTy *)0xff)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,0,(uint *)apAStack_50);
    if (iVar10 != 1) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    pcStack_c = (char *)0xffffffff;
    uVar11 = (**(code **)*piStack_64)(param_1 + 5);
    this = (void *)thunk_FUN_0066ac80(apAStack_50[0],uVar11);
    pAVar12 = apAStack_50[0];
    pcVar21 = pcStack_c;
    if (this != (void *)0x0) {
      cVar2 = (char)param_1 + '\x0f';
      uVar18 = (**(code **)*piStack_64)();
      iVar10 = (**(code **)*piStack_64)(param_1 + 10,uVar18);
      pcVar21 = (char *)thunk_FUN_0065da50(this,iVar10,cVar2);
      pAVar12 = apAStack_50[0];
      pcStack_c = pcVar21;
    }
    goto joined_r0x006703e6;
  case 0x82c:
    pAStack_8 = (AiFltClassTy *)0x0;
    do {
      if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      pAStack_8 = pAStack_8 + 5;
    } while ((int)pAStack_8 < 0x14);
    pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
    if (((pAStack_8 == (AiFltClassTy *)0x9) &&
        (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) ||
       (pAStack_8 == (AiFltClassTy *)0xff)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,0,(uint *)apAStack_50);
    if (iVar10 != 1) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    pcStack_c = (char *)0xffffffff;
    uVar11 = (**(code **)*piStack_64)(param_1 + 5);
    iVar10 = thunk_FUN_0066ac80(apAStack_50[0],uVar11);
    pAVar12 = apAStack_50[0];
    pcVar21 = pcStack_c;
    if (iVar10 != 0) {
      cVar2 = (char)param_1 + '\x0f';
      uVar18 = (**(code **)*piStack_64)();
      uVar25 = (**(code **)*piStack_64)(param_1 + 10,uVar18);
      pcVar21 = (char *)thunk_FUN_0065dc00(iVar10,(int)((ulonglong)uVar25 >> 0x20),(uint)uVar25,
                                           cVar2);
      pAVar12 = apAStack_50[0];
      pcStack_c = pcVar21;
    }
    goto joined_r0x006703e6;
  case 0x82d:
    pAStack_8 = (AiFltClassTy *)0x0;
    do {
      if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      pAStack_8 = pAStack_8 + 5;
    } while ((int)pAStack_8 < 10);
    pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
    if (((pAStack_8 == (AiFltClassTy *)0x9) &&
        (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) ||
       (pAStack_8 == (AiFltClassTy *)0xff)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,0,(uint *)apAStack_50);
    if (iVar10 != 1) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    uVar11 = (**(code **)*piStack_64)(param_1 + 5);
    iVar10 = thunk_FUN_0066ac80(apAStack_50[0],uVar11);
    pcVar21 = (char *)0xffffffff;
    if (iVar10 != 0) {
      pcVar21 = *(char **)(iVar10 + 0xeb);
    }
    goto LAB_0066fbc1;
  case 0x82e:
    pAStack_8 = (AiFltClassTy *)0x0;
    do {
      if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      pAStack_8 = pAStack_8 + 5;
    } while ((int)pAStack_8 < 0x19);
    if ((param_1[0x19] != '\x06') && (param_1[0x19] != '\x03')) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    pcStack_c = (char *)0x6;
    if (6 < param_2) {
      pAStack_8 = (AiFltClassTy *)0x1e;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = (char *)((int)pcStack_c + 1);
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
    if (((pAStack_8 == (AiFltClassTy *)0x9) &&
        (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) ||
       (pAStack_8 == (AiFltClassTy *)0xff)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,0,(uint *)apAStack_50);
    if (iVar10 != 1) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    pcStack_c = (char *)0xffffffff;
    uVar11 = (**(code **)*piStack_64)(param_1 + 5);
    iVar10 = thunk_FUN_0066ac80(apAStack_50[0],uVar11);
    pAVar12 = apAStack_50[0];
    pcVar21 = pcStack_c;
    if (iVar10 != 0) {
      sVar4 = sVar3 + 0x37;
      sVar6 = (**(code **)*piStack_64)();
      sVar5 = sVar3 + 0x32;
      sVar8 = (**(code **)*piStack_64)();
      sVar3 = sVar3 + 0x2d;
      sVar9 = (**(code **)*piStack_64)();
      pbVar15 = (byte *)(param_1 + 0x28);
      cVar2 = (**(code **)*piStack_64)();
      pcVar21 = param_1 + 0x23;
      uVar18 = (**(code **)*piStack_64)();
      uVar18 = (**(code **)*piStack_64)(param_1 + 0x1e,uVar18);
      uVar18 = (**(code **)(*piStack_64 + 8))(param_1 + 0x19,uVar18);
      uVar18 = (**(code **)*piStack_64)(param_1 + 0x14,uVar18);
      uVar18 = (**(code **)*piStack_64)(param_1 + 0xf,uVar18);
      uVar25 = (**(code **)*piStack_64)(param_1 + 10,uVar18);
      pcVar21 = (char *)thunk_FUN_0065dd30(iVar10,(int)((ulonglong)uVar25 >> 0x20),(uint)uVar25,
                                           (uint)pcVar21,cVar2,pbVar15,sVar9,sVar3,sVar8,sVar5,sVar6
                                           ,sVar4);
      pAVar12 = apAStack_50[0];
      pcStack_c = pcVar21;
    }
    goto joined_r0x006703e6;
  case 0x82f:
    pAStack_8 = (AiFltClassTy *)0x0;
    do {
      if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
        }
        piStack_64[0x21] = -1;
        RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      pAStack_8 = pAStack_8 + 5;
    } while ((int)pAStack_8 < 0x23);
    if ((param_1[0x23] != '\x06') && (param_1[0x23] != '\x03')) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
    if (((pAStack_8 == (AiFltClassTy *)0x9) &&
        (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) ||
       (pAStack_8 == (AiFltClassTy *)0xff)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,0,(uint *)apAStack_50);
    if (iVar10 != 1) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    pAStack_8 = (AiFltClassTy *)0x0;
    puVar19 = (uint *)(**(code **)*piStack_64)(param_1 + 0xf,auStack_280);
    pcVar21 = param_1 + 10;
    pcVar20 = (char *)(**(code **)*piStack_64)();
    iVar10 = thunk_FUN_00668f50(piStack_64,pcVar20,(uint)pcVar21,puVar19);
    if (0 < iVar10) {
      puVar16 = auStack_280;
      do {
        uVar18 = *puVar16;
        puVar16 = puVar16 + 1;
        iVar10 = iVar10 + -1;
        pAStack_8 = (AiFltClassTy *)((uint)pAStack_8 | 1 << ((byte)uVar18 & 0x1f));
      } while (iVar10 != 0);
    }
    pcStack_c = (char *)0xffffffff;
    uVar11 = (**(code **)*piStack_64)(param_1 + 5);
    iVar10 = thunk_FUN_0066ac80(apAStack_50[0],uVar11);
    pcVar21 = pcStack_c;
    if (iVar10 != 0) {
      pbVar15 = (byte *)(param_1 + 0x23);
      cVar2 = (**(code **)(*piStack_64 + 8))();
      pcVar21 = param_1 + 0x1e;
      uVar18 = (**(code **)*piStack_64)();
      uVar18 = (**(code **)*piStack_64)(param_1 + 0x19,uVar18);
      uVar25 = (**(code **)*piStack_64)(param_1 + 0x14,uVar18);
      pcVar21 = (char *)thunk_FUN_0065e070(iVar10,(int)((ulonglong)uVar25 >> 0x20),(uint)pAStack_8,
                                           (uint)uVar25,(uint)pcVar21,cVar2,pbVar15);
      pcStack_c = pcVar21;
    }
LAB_0066fbc1:
    if ((int)pcVar21 < 0) {
      Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),&DAT_008016a0,0x7f);
      piStack_64[0x21] = (int)apAStack_50[0];
      goto LAB_0067041b;
    }
    goto LAB_00670425;
  case 0x830:
    pcStack_c = (char *)0x0;
    if (0 < param_2) {
      pAStack_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = pcStack_c + 1;
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
    if (((pAStack_8 == (AiFltClassTy *)0x9) &&
        (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) ||
       (pAStack_8 == (AiFltClassTy *)0xff)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,0,(uint *)apAStack_50);
    if (iVar10 != 1) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    uVar11 = (**(code **)*piStack_64)(param_1 + 5);
    pAStack_8 = (AiFltClassTy *)thunk_FUN_0066ac80(apAStack_50[0],uVar11);
    pAVar12 = apAStack_50[0];
    pcVar21 = (char *)0xffffffff;
    if (pAStack_8 != (AiFltClassTy *)0x0) {
      puVar16 = &uStack_21c;
      for (iVar10 = 0x12; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar16 = 0;
        puVar16 = puVar16 + 1;
      }
      *(undefined2 *)puVar16 = 0;
      uStack_21c = (**(code **)*piStack_64)(param_1 + 10);
      puVar19 = auStack_1d0;
      for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar19 = 0;
        puVar19 = puVar19 + 1;
      }
      puStack_1c6 = &uStack_21c;
      uStack_218 = 0xffff;
      uStack_214 = 0xfffffff0;
      uStack_210 = 0xffff;
      uStack_1de = 1;
      auStack_1d0[0] = 0x68;
      AiFltClassTy::GetAiMess(pAStack_8,auStack_1d0);
      pAVar12 = apAStack_50[0];
      pcVar21 = (char *)(uint)('\0' < cStack_1c8);
    }
    goto joined_r0x006703e6;
  case 0x831:
    pcStack_c = (char *)0x0;
    if (0 < param_2) {
      pAStack_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = (char *)((int)pcStack_c + 1);
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
    if (((pAStack_8 == (AiFltClassTy *)0x9) &&
        (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) ||
       (pAStack_8 == (AiFltClassTy *)0xff)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,0,(uint *)apAStack_50);
    if (iVar10 != 1) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    pcStack_c = (char *)0xffffffff;
    uVar11 = (**(code **)*piStack_64)(param_1 + 5);
    iVar10 = thunk_FUN_0066ac80(apAStack_50[0],uVar11);
    pAVar12 = apAStack_50[0];
    pcVar21 = pcStack_c;
    if (iVar10 != 0) {
      uVar18 = (**(code **)*piStack_64)(param_1 + 0x19);
      pcVar21 = param_1 + 0x14;
      uVar28 = (**(code **)*piStack_64)();
      uVar28 = (**(code **)*piStack_64)(param_1 + 0xf,uVar28);
      uVar25 = (**(code **)*piStack_64)(param_1 + 10,uVar28);
      pcVar21 = (char *)thunk_FUN_0065e450(iVar10,(int)((ulonglong)uVar25 >> 0x20),(uint)uVar25,
                                           pcVar21,uVar18);
      pAVar12 = apAStack_50[0];
      pcStack_c = pcVar21;
    }
joined_r0x006703e6:
    if ((int)pcVar21 < 0) {
      Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),&DAT_008016a0,0x7f);
      piStack_64[0x21] = (int)pAVar12;
LAB_0067041b:
      RaiseInternalException(-0xaa,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
LAB_00670425:
    puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
    *puStack_14 = (uint)pcVar21;
    break;
  case 0x848:
    pcStack_c = (char *)0x0;
    if (0 < param_2) {
      pAStack_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)pAStack_8] != '\x04') && (param_1[(int)pAStack_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
          }
          piStack_64[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        pcStack_c = pcStack_c + 1;
        pAStack_8 = pAStack_8 + 5;
      } while ((int)pcStack_c < param_2);
    }
    pAStack_8 = (AiFltClassTy *)(**(code **)*piStack_64)(param_1);
    if (((pAStack_8 == (AiFltClassTy *)0x9) &&
        (iVar10 = (**(code **)(*piStack_64 + 0x18))(), iVar10 == 8)) ||
       (pAStack_8 == (AiFltClassTy *)0xff)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    iVar10 = thunk_FUN_00668f50(piStack_64,(char *)pAStack_8,0,(uint *)apAStack_50);
    if (iVar10 != 1) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    iVar10 = 0;
    uStack_10 = (char *)(uint)DAT_00808aaf;
    pAStack_8 = (AiFltClassTy *)0x0;
    if (uStack_10 != (char *)0x0) {
      pcStack_c = &DAT_00808af5;
      do {
        if (((AiFltClassTy *)(uint)(byte)pcStack_c[-1] == apAStack_50[0]) && (*pcStack_c != '\0')) {
          pAStack_8 = (AiFltClassTy *)(&DAT_00808ab0 + iVar10 * 0x27);
          break;
        }
        iVar10 = iVar10 + 1;
        pcStack_c = pcStack_c + 0x9c;
      } while (iVar10 < (int)uStack_10);
    }
    pAVar12 = pAStack_8;
    if (pAStack_8 == (AiFltClassTy *)0x0) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        Library::MSVCRT::_strncpy((char *)(piStack_64 + 1),pcVar21,0x7f);
      }
      piStack_64[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      pAVar12 = pAStack_8;
    }
LAB_0066d630:
    puVar19 = (uint *)FUN_006c49b0((char *)pAVar12);
    if (param_3 == (int *)0x0) {
      g_currentExceptionFrame = IStack_260.previous;
      return puVar19;
    }
    *param_3 = 3;
    g_currentExceptionFrame = IStack_260.previous;
    return puVar19;
  case 0x849:
    puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
    *puStack_14 = DAT_00808a90 >> 8 & 0xff;
    break;
  case 0x84a:
    puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
    *puStack_14 = DAT_00808a90 & 0xff;
    break;
  case 0x84b:
    puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
    *puStack_14 = (uint)DAT_00808a9b;
    break;
  case 0x84c:
    puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
    *puStack_14 = DAT_00808a90 >> 0x10 & 0xff;
    break;
  case 0x84d:
    puStack_14 = Library::DKW::LIB::FUN_006aac10(4);
    *puStack_14 = DAT_00808a90 >> 0x18;
  }
LAB_00670431:
  if (param_3 == (int *)0x0) {
    g_currentExceptionFrame = IStack_260.previous;
    return puStack_14;
  }
  *param_3 = 1;
  g_currentExceptionFrame = IStack_260.previous;
  return puStack_14;
}

