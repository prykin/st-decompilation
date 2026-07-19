
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall MTaskTy::PlayScript(MTaskTy *this)

{
  char cVar1;
  SpriteClassTy SVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  LPSTR pCVar6;
  undefined4 uVar7;
  uint *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  uint *puVar11;
  SpriteClassTy *pSVar12;
  int iVar13;
  MTaskTy *extraout_ECX;
  cMf32 *this_00;
  uint uVar14;
  MTaskTy *this_01;
  undefined4 unaff_ESI;
  undefined1 *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  int *piVar18;
  int *piVar19;
  SpriteClassTy *pSVar20;
  void *unaff_EDI;
  byte *pbVar21;
  char *pcVar22;
  MTaskTy *pMVar23;
  SpriteClassTy *pSVar24;
  uint uVar25;
  bool bVar26;
  undefined4 auStackY_1268 [256];
  int aiStackY_e68 [140];
  uint auStackY_c38 [65];
  undefined4 auStackY_b34 [4];
  int iStackY_b24;
  int iStackY_b20;
  undefined4 uStackY_b1c;
  int iStackY_b18;
  int iStackY_b14;
  int iStackY_b10;
  undefined4 uStackY_afc;
  undefined4 uStackY_af8;
  undefined4 uStackY_af4;
  undefined4 uStackY_a84;
  undefined4 uStackY_a80;
  undefined4 uStackY_a7c;
  int aiStackY_a78 [4];
  undefined4 uStackY_a68;
  int iStackY_a64;
  undefined4 uStackY_a18;
  undefined4 uStackY_a14;
  undefined4 uStackY_a10;
  undefined4 uStackY_968;
  undefined4 uStackY_964;
  undefined4 uStackY_8fc;
  int aiStackY_8f8 [4];
  int iStackY_8e8;
  int iStackY_8e4;
  undefined4 uStackY_890;
  undefined4 uStackY_77c;
  undefined4 uStackY_778;
  undefined4 uStackY_770;
  int iStackY_76c;
  int iStackY_768;
  int iStackY_764;
  int iStackY_760;
  undefined4 uStackY_75c;
  undefined4 uStackY_728;
  undefined4 uStackY_724;
  undefined4 uStackY_720;
  InternalExceptionFrame IStackY_2bc;
  InternalExceptionFrame IStackY_278;
  undefined4 auStackY_234 [4];
  undefined4 uStackY_224;
  undefined4 uStackY_220;
  undefined4 uStackY_21c;
  undefined4 uStackY_204;
  undefined4 uStackY_200;
  undefined4 uStackY_1fc;
  int *piStackY_1ec;
  int iStackY_1e8;
  SpriteClassTy aSStackY_1dc [4];
  uint auStackY_1d8 [6];
  uint uStackY_1c0;
  uint uStackY_1bc;
  undefined4 uStackY_19c;
  undefined4 uStackY_198;
  uint *puStackY_194;
  SpriteClassTy SStackY_190;
  undefined4 uStackY_18f;
  undefined4 uStackY_18b;
  undefined4 uStackY_187;
  undefined4 uStackY_183;
  undefined4 uStackY_17f;
  undefined4 uStackY_17b;
  undefined1 auStackY_177 [32];
  undefined4 uStackY_157;
  undefined4 uStackY_153;
  undefined4 uStackY_14f;
  char cStackY_14b;
  undefined4 uStackY_14a;
  int iStackY_146;
  int *piStackY_142;
  uint auStackY_13c [5];
  undefined4 uStackY_128;
  undefined4 uStackY_124;
  int iStackY_120;
  MTaskTy *pMStackY_110;
  undefined1 uStackY_10c;
  cTypingTy *pcStackY_10b;
  undefined1 uStackY_107;
  undefined4 uStackY_106;
  uint *puStackY_102;
  int iStackY_fc;
  int iStackY_f8;
  int iStackY_f4;
  int iStackY_f0;
  uint uStackY_ec;
  int iStackY_e8;
  undefined4 auStackY_e4 [2];
  undefined1 uStackY_db;
  undefined1 uStackY_da;
  undefined1 uStackY_d9;
  undefined1 uStackY_d8;
  undefined1 uStackY_d7;
  undefined4 uStackY_d6;
  undefined4 uStackY_d2;
  int iStackY_ce;
  undefined4 uStackY_ca;
  uint uStackY_c6;
  undefined4 uStackY_c2;
  undefined4 uStackY_be;
  int iStackY_94;
  undefined4 uStackY_90;
  MTaskTy *pMStackY_8c;
  int *piStackY_88;
  uint uStackY_84;
  uint *puStackY_80;
  uint uStackY_7c;
  undefined1 auStackY_78 [5];
  undefined4 uStackY_73;
  undefined1 uStackY_6f;
  undefined1 uStackY_6d;
  undefined1 uStackY_6c;
  undefined1 uStackY_6b;
  undefined4 uStackY_6a;
  char acStackY_66 [30];
  undefined2 uStackY_48;
  undefined2 uStackY_46;
  uint *in_stack_ffffffdc;
  UINT UVar27;
  HINSTANCE pHVar28;
  int iVar29;
  SpriteClassTy *pSVar30;
  SpriteClassTy *pSVar31;
  SpriteClassTy *pSVar32;
  
  FUN_0072da40();
  IStackY_278.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStackY_278;
  pMStackY_8c = extraout_ECX;
  iVar5 = __setjmp3(IStackY_278.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    g_currentExceptionFrame = IStackY_278.previous;
    iVar13 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,0x45f,0,iVar5,
                                &DAT_007a4ccc);
    if (iVar13 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Start_task_obj_cpp_007cd994,0x45f);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar25 = *(uint *)(*(int *)(pMStackY_8c + 0x74) + 0xc);
  this_01 = pMStackY_8c;
  if (*(int *)(pMStackY_8c + 0x7c) < (int)uVar25) {
    do {
      uVar14 = *(uint *)(this_01 + 0x7c);
      if (uVar14 < uVar25) {
        puVar15 = (undefined1 *)
                  (*(int *)(*(int *)(this_01 + 0x74) + 8) * uVar14 +
                  *(int *)(*(int *)(this_01 + 0x74) + 0x1c));
      }
      else {
        puVar15 = (undefined1 *)0x0;
      }
      if (((uint)(*(int *)(this_01 + 0x69) - *(int *)(this_01 + 0x61)) < *(uint *)(puVar15 + 1)) &&
         (this_01[0x6d] != (MTaskTy)0x5)) break;
      switch(*puVar15) {
      case 1:
        if ((this_01[0x6e] != (MTaskTy)0x1) || ((puVar15[0xd] != '\0' && (puVar15[0xd] != '\x01'))))
        {
          switch(puVar15[0xd]) {
          case 0:
            in_stack_ffffffdc = (uint *)0x0;
            break;
          case 1:
            in_stack_ffffffdc = (uint *)0x1;
            break;
          case 2:
            in_stack_ffffffdc = (uint *)0x2;
            break;
          case 3:
            in_stack_ffffffdc = (uint *)0x3;
            break;
          case 4:
            in_stack_ffffffdc = (uint *)0x4;
          }
          uVar25 = (uint)in_stack_ffffffdc & 0xff;
          if (*(int *)(this_01 + uVar25 * 4 + 0x291) != 0) {
            FUN_006b3af0((int *)DAT_008075a8,*(uint *)(this_01 + uVar25 * 4 + 0x2a5));
            FUN_006e56b0(*(void **)(this_01 + 0xc),*(uint *)(this_01 + uVar25 * 4 + 0x291));
            *(undefined4 *)(this_01 + uVar25 * 4 + 0x291) = 0;
          }
          FUN_006ab060((undefined4 *)(this_01 + uVar25 * 0xc + 0x653));
          if (puVar15[0xe] == '\x01') {
            uStackY_84 = *(uint *)(puVar15 + 0x1b);
            if ((int)uStackY_84 < 0x28) {
              uStackY_84 = 0x28;
            }
            iVar13 = 1;
            iVar5 = *(int *)(this_01 + 0x5d) + 0x28;
            uVar14 = FUN_006b4fe0(*(int *)(this_01 + 0x5d));
            uVar7 = FUN_006b50c0(iVar5,uStackY_84,(uint)*(ushort *)(*(int *)(this_01 + 0x5d) + 0xe),
                                 uVar14,(undefined4 *)iVar5,iVar13);
            *(undefined4 *)(this_01 + uVar25 * 0xc + 0x653) = uVar7;
            *(MTaskTy **)(this_01 + uVar25 * 0xc + 0x657) =
                 this_01 + (uint)(puVar15[10] == '\x01') * 0x100 + 0x91;
            *(undefined4 *)(this_01 + uVar25 * 0xc + 0x65b) = *(undefined4 *)(puVar15 + 9);
            uVar7 = CreateBut(this_01,1,1,*(undefined4 *)(puVar15 + 0xf),
                              *(undefined4 *)(puVar15 + 0x13),iVar5,uStackY_84,uVar25 + 0x6200,
                              uVar25 + 0x6212);
            *(undefined4 *)(this_01 + uVar25 * 4 + 0x291) = uVar7;
            uVar14 = *(uint *)(puVar15 + 0xf);
            pMVar23 = this_01 + uVar25 * 4 + 0x2a5;
            FUN_006b3640((int *)DAT_008075a8,*(uint *)(this_01 + uVar25 * 4 + 0x2a5),0xffffffff,
                         uVar14,*(uint *)(puVar15 + 0x13));
            in_stack_ffffffdc = (uint *)0x5e1e40;
            FUN_006b2800((int)DAT_008075a8,*(uint *)pMVar23,uVar14,uStackY_84);
            FUN_006b3020((int)DAT_008075a8,*(uint *)pMVar23,*(uint *)(puVar15 + 5));
            FUN_006b3430((int *)DAT_008075a8,*(uint *)pMVar23);
          }
        }
        break;
      case 2:
        if (this_01[0x6e] != (MTaskTy)0x1) {
          if (*(int *)(this_01 + 0x2b9) != 0) {
            pMVar23 = this_01 + 0x2bd;
            iVar5 = 4;
            do {
              FUN_006b3af0((int *)DAT_008075a8,*(uint *)pMVar23);
              pMVar23 = pMVar23 + 4;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            FUN_006e56b0(*(void **)(this_01 + 0xc),*(uint *)(this_01 + 0x2b9));
            *(undefined4 *)(this_01 + 0x2b9) = 0;
          }
          pMVar23 = this_01 + 0x68f;
          iVar5 = 4;
          do {
            FUN_006ab060((undefined4 *)pMVar23);
            pMVar23 = pMVar23 + 0xc;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          if (puVar15[0xd] == '\x01') {
            puVar10 = auStackY_234;
            for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
            piVar18 = aiStackY_e68;
            for (iVar5 = 0x8c; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar18 = 0;
              piVar18 = piVar18 + 1;
            }
            bVar4 = 2;
            piVar18 = (int *)(puVar15 + 0x16);
            iVar5 = 2;
            do {
              if (-1 < *piVar18) {
                bVar4 = bVar4 + 1;
              }
              piVar18 = piVar18 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            uStackY_90 = CONCAT31((int3)((uint)uStackY_90 >> 8),bVar4);
            puStackY_80 = (uint *)(uint)bVar4;
            if (puStackY_80 == (uint *)0x2) {
              if ((DAT_00807340 == '\x01') || (DAT_00807340 == '\x03')) {
                _DAT_00807340 = (uint)_DAT_00807341 << 8;
              }
            }
            else if ((puStackY_80 == (uint *)0x3) && (DAT_00807340 == '\x03')) {
              _DAT_00807340 = CONCAT31(_DAT_00807341,1);
            }
            unaff_EDI = (void *)((uint)unaff_EDI & 0xffffff);
            if (bVar4 != 0) {
              piStackY_88 = (int *)(puVar15 + 9);
              iVar5 = 0;
              piVar18 = aiStackY_e68;
              piVar19 = (int *)(puVar15 + 0x1e);
              pMVar23 = this_01 + 0x693;
              do {
                UVar27 = 0x1f52;
                if (puStackY_80 == (uint *)0x2) {
                  if (iVar5 == 0) {
                    UVar27 = 0x1f47;
                    *piVar18 = 1;
                  }
                  else if (iVar5 == 1) {
                    UVar27 = 0x1f49;
                    *piVar18 = 3;
                  }
                }
                else if (puStackY_80 == (uint *)0x3) {
                  if (iVar5 == 0) {
                    UVar27 = 0x1f47;
LAB_005e200a:
                    *piVar18 = iVar5 + 1;
                  }
                  else if (iVar5 == 1) {
                    UVar27 = 0x1f48;
                    *piVar18 = 2;
                  }
                  else {
                    if (iVar5 != 2) goto LAB_005e200a;
                    UVar27 = 0x1f49;
                    *piVar18 = 3;
                  }
                }
                else {
                  switch(iVar5) {
                  case 0:
                    UVar27 = 0x1f47;
                    *piVar18 = iVar5 + 1;
                    break;
                  case 1:
                    UVar27 = 0x1f48;
                    *piVar18 = iVar5 + 1;
                    break;
                  case 2:
                    UVar27 = 0x1f49;
                    *piVar18 = iVar5 + 1;
                    break;
                  case 3:
                  default:
                    UVar27 = 0x1f52;
                    *piVar18 = iVar5 + 1;
                  }
                }
                piVar18[1] = (uint)((char)((uint)unaff_EDI >> 0x18) == DAT_00807340);
                pHVar28 = DAT_00807618;
                piVar18[3] = piVar19[-4];
                puVar8 = (uint *)FUN_006b0140(UVar27,pHVar28);
                iVar13 = FUN_00711110(*(void **)(this_01 + 0x8d),puVar8);
                iVar29 = 1;
                piVar18[5] = iVar13 + 0x1b;
                iVar13 = *(int *)(this_01 + 0x5d);
                piVar18[4] = *piVar19;
                piVar18[6] = 0x14;
                iStackY_e8 = piVar18[5];
                puVar10 = (undefined4 *)(iVar13 + 0x28);
                uVar25 = FUN_006b4fe0(iVar13);
                iVar13 = FUN_006b50c0(iStackY_e8,0x14,
                                      (uint)*(ushort *)(*(int *)(this_01 + 0x5d) + 0xe),uVar25,
                                      puVar10,iVar29);
                *(int *)(pMVar23 + -4) = iVar13;
                piVar19 = piVar19 + 1;
                *(MTaskTy **)pMVar23 =
                     this_01 + (uint)(*(char *)(iVar29 + 10) != '\0') * 0x100 + 0x91;
                piVar18 = piVar18 + 0x1c;
                *(int *)(pMVar23 + 4) = *piStackY_88;
                bVar4 = (char)((uint)unaff_EDI >> 0x18) + 1;
                iVar5 = iVar5 + 1;
                unaff_EDI = (void *)CONCAT13(bVar4,(int3)unaff_EDI);
                pMVar23 = pMVar23 + 0xc;
              } while (bVar4 < (byte)uStackY_90);
            }
            auStackY_234[0] = 1;
            piStackY_1ec = aiStackY_e68;
            auStackY_234[1] = 1;
            uStackY_224 = *(undefined4 *)(this_01 + 8);
            uStackY_220 = 2;
            uStackY_200 = 2;
            iStackY_1e8 = (_DAT_00807340 & 0xff) + 1;
            uStackY_21c = 0x6205;
            uStackY_1fc = 0x6217;
            uStackY_204 = uStackY_224;
            (**(code **)(**(int **)(this_01 + 0xc) + 8))();
            puVar8 = (uint *)(aiStackY_e68 + 3);
            pMVar23 = this_01 + 0x2bd;
            iVar5 = 4;
            do {
              FUN_006b3640((int *)DAT_008075a8,*(uint *)pMVar23,0xffffffff,*puVar8,puVar8[1]);
              uVar25 = puVar8[3];
              in_stack_ffffffdc = (uint *)0x5e21c3;
              FUN_006b2800((int)DAT_008075a8,*(uint *)pMVar23,puVar8[2],uVar25);
              FUN_006b3020((int)DAT_008075a8,*(uint *)pMVar23,*(uint *)(uVar25 + 5));
              FUN_006b3430((int *)DAT_008075a8,*(uint *)pMVar23);
              puVar8 = puVar8 + 0x1c;
              pMVar23 = pMVar23 + 4;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        break;
      case 3:
        if (this_01[0x6e] != (MTaskTy)0x1) {
          if (*(uint *)(this_01 + 0x2cd) != 0) {
            FUN_006e56b0(*(void **)(this_01 + 0xc),*(uint *)(this_01 + 0x2cd));
            *(undefined4 *)(this_01 + 0x2cd) = 0;
            FUN_006b3af0((int *)DAT_008075a8,*(uint *)(this_01 + 0x484));
            if (*(uint *)(this_01 + 0x2d5) != 0xffffffff) {
              FUN_006b3af0(*(int **)(this_01 + 0x319),*(uint *)(this_01 + 0x2d5));
            }
            if (*(uint *)(this_01 + 0x366) != 0xffffffff) {
              FUN_006b3af0(*(int **)(this_01 + 0x3aa),*(uint *)(this_01 + 0x366));
            }
            if (*(uint *)(this_01 + 0x3f7) != 0xffffffff) {
              FUN_006b3af0(*(int **)(this_01 + 0x43b),*(uint *)(this_01 + 0x3f7));
            }
          }
          FUN_006ab060((undefined4 *)(this_01 + 0x6bf));
          if (puVar15[0xd] == '\x01') {
            puVar10 = auStackY_b34;
            for (iVar5 = 0x21e; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
            if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
              FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
            }
            puVar8 = FUN_006b54f0((uint *)0x0,10,10);
            *(uint **)(DAT_0081176c + 0x548) = puVar8;
            iVar5 = *(int *)(DAT_0080c4cb + 8);
            if (iVar5 != 0) {
              iVar13 = 0;
              if (0 < iVar5) {
                if (iVar5 < 1) {
                  pcVar9 = (char *)0x0;
                  goto LAB_005e22f4;
                }
                do {
                  pcVar9 = *(char **)(*(int *)(DAT_0080c4cb + 0x14) + iVar13 * 4);
LAB_005e22f4:
                  thunk_FUN_005411a0(*(int *)(DAT_0081176c + 0x548),pcVar9,s______s_007cdb20);
                  iVar13 = iVar13 + 1;
                } while (iVar13 < *(int *)(DAT_0080c4cb + 8));
              }
              ccFntTy::FormIndentSarr
                        (*(ccFntTy **)(this_01 + 0x8d),*(int *)(DAT_0081176c + 0x548),
                         (uint *)s________________007c21d8,(uint *)&DAT_007c21ec,
                         (*(int *)(puVar15 + 0x16) - *(int *)(this_01 + 0x2f5)) + -0x2d,0,0xffffffff
                         ,(char *)0x0,1);
              if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
                FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
              }
              puVar8 = FUN_006b54f0((uint *)0x0,10,10);
              *(uint **)(DAT_0081176c + 0x548) = puVar8;
              uStackY_ec = CONCAT31(uStackY_ec._1_3_,(this_01[0x6c7] != (MTaskTy)0x1) + -1) &
                           0xffffff02;
              FUN_006b0140(0x2347,DAT_00807618);
              wsprintfA((LPSTR)auStackY_c38,s___1d__s__007cdb14);
              FUN_006b5aa0(*(int *)(DAT_0081176c + 0x548),(char *)auStackY_c38);
              wsprintfA((LPSTR)auStackY_c38,s___1d__s_007cdb08);
              FUN_006b5aa0(*(int *)(DAT_0081176c + 0x548),(char *)auStackY_c38);
              FUN_006b5aa0(*(int *)(DAT_0081176c + 0x548),&DAT_007c3b5c);
              FUN_006b0140(0x2346,DAT_00807618);
              puVar8 = auStackY_c38;
              wsprintfA((LPSTR)puVar8,s___1d__s__007cdb14);
              FUN_006b5aa0(*(int *)(DAT_0081176c + 0x548),(char *)auStackY_c38);
              FUN_006b5aa0(*(int *)(DAT_0081176c + 0x548),&DAT_007c3b5c);
              if (puVar8 != (uint *)0x0) {
                if (puVar8[2] != 0) {
                  ccFntTy::SepColorStrInSarr(*(ccFntTy **)(this_01 + 0x8d),puVar8,puVar8);
                }
                iVar5 = 0;
                if (0 < (int)puVar8[2]) {
                  if ((int)puVar8[2] < 1) {
                    pcVar9 = (char *)0x0;
                    goto LAB_005e24c5;
                  }
                  do {
                    pcVar9 = *(char **)(puVar8[5] + iVar5 * 4);
LAB_005e24c5:
                    FUN_006b5aa0(*(int *)(DAT_0081176c + 0x548),pcVar9);
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < (int)puVar8[2]);
                }
                FUN_006b5570((byte *)puVar8);
              }
              iStackY_f0 = *(int *)(puVar15 + 0x16);
              iVar5 = *(int *)(puVar15 + 0x1a);
              iVar13 = 1;
              puVar10 = (undefined4 *)(*(int *)(this_01 + 0x5d) + 0x28);
              uVar25 = FUN_006b4fe0(*(int *)(this_01 + 0x5d));
              uVar7 = FUN_006b50c0(iStackY_f0,iVar5,
                                   (uint)*(ushort *)(*(int *)(this_01 + 0x5d) + 0xe),uVar25,puVar10,
                                   iVar13);
              *(undefined4 *)(this_01 + 0x6bf) = uVar7;
              *(MTaskTy **)(this_01 + 0x6c3) = this_01 + (uint)(puVar15[10] != '\0') * 0x100 + 0x91;
              *(undefined4 *)(this_01 + 0x6c7) = *(undefined4 *)(puVar15 + 9);
              auStackY_b34[0] = 0;
              auStackY_b34[1] = 2;
              iStackY_b14 = *(int *)(puVar15 + 0xe) + 0xf;
              auStackY_b34[2] = 1;
              iStackY_b10 = *(int *)(puVar15 + 0x12) + 0xf;
              iVar5 = *(int *)(this_01 + 0x8d);
              auStackY_b34[3] = *(undefined4 *)(*(int *)(DAT_0081176c + 0x548) + 8);
              iStackY_b24 = (*(int *)(puVar15 + 0x16) - *(int *)(this_01 + 0x2f5)) + -0x2d;
              if (*(int *)(iVar5 + 0xa0) != 0) {
                iVar13 = iVar5;
                FUN_00710790(iVar5);
              }
              iStackY_b20 = *(int *)(iVar5 + 0x8a);
              uStackY_b1c = 1;
              uStackY_af4 = 0x6332;
              uStackY_a84 = 4;
              uStackY_a80 = 0;
              aiStackY_a78[0] = 0;
              uStackY_afc = *(undefined4 *)(this_01 + 8);
              iStackY_b18 = (*(int *)(iVar13 + 0x1a) + -0x1e) / *(int *)(iVar5 + 0x8a);
              uStackY_af8 = 2;
              uStackY_a7c = 2;
              aiStackY_a78[1] = 2;
              aiStackY_a78[2] = iStackY_b24 + 0xf + iStackY_b14;
              *(int *)(this_01 + 0x37e) = aiStackY_a78[2];
              uStackY_a18 = *(undefined4 *)(this_01 + 8);
              aiStackY_a78[3] =
                   (*(int *)(iVar13 + 0x12) - *(int *)(this_01 + 0x38a)) + -0x10 +
                   *(int *)(iVar13 + 0x1a);
              *(int *)(this_01 + 0x382) = aiStackY_a78[3];
              uStackY_a68 = *(undefined4 *)(this_01 + 0x386);
              iStackY_a64 = *(int *)(this_01 + 0x38a);
              uStackY_968 = 500;
              uStackY_964 = 0x32;
              uStackY_a14 = 2;
              uStackY_a10 = 0x6334;
              uStackY_8fc = 2;
              piVar18 = aiStackY_a78;
              piVar19 = aiStackY_8f8;
              for (iVar5 = 0x5f; iVar5 != 0; iVar5 = iVar5 + -1) {
                *piVar19 = *piVar18;
                piVar18 = piVar18 + 1;
                piVar19 = piVar19 + 1;
              }
              iStackY_764 = *(int *)(this_01 + 0x417);
              aiStackY_8f8[2] = iStackY_b24 + 0xf + iStackY_b14;
              iStackY_8e4 = *(int *)(this_01 + 0x2f9);
              *(int *)(this_01 + 0x2ed) = aiStackY_8f8[2];
              aiStackY_8f8[3] = *(int *)(iVar13 + 0x12) + 0xf;
              uStackY_890 = 0x6333;
              *(int *)(this_01 + 0x2f1) = aiStackY_8f8[3];
              iStackY_8e8 = *(int *)(this_01 + 0x2f5);
              uStackY_77c = 3;
              uStackY_778 = 1;
              uStackY_770 = 0;
              iStackY_76c = (iStackY_8e8 - iStackY_764) / 2 + iStackY_b24 + 0xf + iStackY_b14;
              *(int *)(this_01 + 0x40f) = iStackY_76c;
              iStackY_768 = *(int *)(iVar13 + 0x12) + 0x1e + iStackY_8e4;
              *(int *)(this_01 + 0x413) = iStackY_768;
              uStackY_728 = *(undefined4 *)(this_01 + 8);
              iStackY_760 = ((*(int *)(iVar13 + 0x1a) - iStackY_8e4) - *(int *)(this_01 + 0x38a)) +
                            -0x3c;
              uStackY_75c = 0xe;
              uStackY_724 = 2;
              uStackY_720 = 0x6335;
              (**(code **)(**(int **)(this_01 + 0xc) + 8))();
              *(undefined4 *)(this_01 + 0x2d) = 0x20;
              *(undefined4 *)(this_01 + 0x31) = 1;
              FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x2cd),(undefined4 *)(this_01 + 0x1d)
                          );
              FUN_006b3640((int *)DAT_008075a8,*(uint *)(this_01 + 0x484),0xffffffff,
                           *(uint *)(iVar13 + 0xe),*(uint *)(iVar13 + 0x12));
              in_stack_ffffffdc = (uint *)0x5e2823;
              FUN_006b2800((int)DAT_008075a8,*(uint *)(this_01 + 0x484),*(uint *)(iVar13 + 0x16),
                           *(uint *)(iVar13 + 0x1a));
              FUN_006b3020((int)DAT_008075a8,*(uint *)(this_01 + 0x484),*(uint *)(iVar13 + 5));
              uVar25 = *(uint *)(this_01 + 0x484);
              FUN_006b3430((int *)DAT_008075a8,uVar25);
              if (*(int *)(iVar13 + 5) < 1) {
                uVar14 = 0;
              }
              else {
                uVar14 = *(int *)(iVar13 + 5) - 1;
              }
              if (*(uint *)(this_01 + 0x2d5) != 0xffffffff) {
                uVar25 = uVar14;
                FUN_006b3020(*(int *)(this_01 + 0x319),*(uint *)(this_01 + 0x2d5),uVar14);
              }
              *(uint *)(this_01 + 0x32e) = uVar14;
              if (*(int *)(uVar25 + 5) < 1) {
                uVar14 = 0;
              }
              else {
                uVar14 = *(int *)(uVar25 + 5) - 1;
              }
              if (*(uint *)(this_01 + 0x366) != 0xffffffff) {
                FUN_006b3020(*(int *)(this_01 + 0x3aa),*(uint *)(this_01 + 0x366),uVar14);
              }
              *(uint *)(this_01 + 0x3bf) = uVar14;
              if (*(int *)(uVar25 + 5) < 1) {
                uVar25 = 0;
              }
              else {
                uVar25 = *(int *)(uVar25 + 5) - 1;
              }
              if (*(uint *)(this_01 + 0x3f7) != 0xffffffff) {
                FUN_006b3020(*(int *)(this_01 + 0x43b),*(uint *)(this_01 + 0x3f7),uVar25);
              }
              *(uint *)(this_01 + 0x450) = uVar25;
              *(uint *)(this_01 + 0x3fb) = (uint)(this_01[0x6ca] == (MTaskTy)0x1);
              if (*(uint *)(this_01 + 0x2d5) != 0xffffffff) {
                in_stack_ffffffdc = *(uint **)(this_01 + 0x319);
                FUN_006b34d0(in_stack_ffffffdc,*(uint *)(this_01 + 0x2d5),0xfffffffe,
                             *(uint *)(this_01 + 0x2ed),*(uint *)(this_01 + 0x2f1));
              }
              if (*(uint *)(this_01 + 0x366) != 0xffffffff) {
                in_stack_ffffffdc = *(uint **)(this_01 + 0x3aa);
                FUN_006b34d0(in_stack_ffffffdc,*(uint *)(this_01 + 0x366),0xfffffffe,
                             *(uint *)(this_01 + 0x37e),*(uint *)(this_01 + 0x382));
              }
              if (*(uint *)(this_01 + 0x3f7) != 0xffffffff) {
                in_stack_ffffffdc = *(uint **)(this_01 + 0x43b);
                FUN_006b34d0(in_stack_ffffffdc,*(uint *)(this_01 + 0x3f7),0xfffffffe,
                             *(uint *)(this_01 + 0x40f),*(uint *)(this_01 + 0x413));
              }
              if (*(uint *)(this_01 + 0x3f7) != 0xffffffff) {
                in_stack_ffffffdc = *(uint **)(this_01 + 0x43b);
                FUN_006b3730(in_stack_ffffffdc,*(uint *)(this_01 + 0x3f7),*(uint *)(this_01 + 0x3fb)
                             ,*(uint *)(this_01 + 0x40f),*(uint *)(this_01 + 0x413));
              }
            }
          }
        }
        break;
      case 5:
        cVar1 = puVar15[0xe];
        if (cVar1 == '\0') {
          iVar5 = *(int *)(this_01 + 0x64f);
        }
        else {
          iVar5 = *(int *)(this_01 + 0x647);
        }
        uVar25 = *(uint *)(puVar15 + 0xf);
        if (uVar25 < *(uint *)(iVar5 + 0xc)) {
          if (cVar1 == '\0') {
            puVar8 = (uint *)(*(int *)(*(int *)(this_01 + 0x64f) + 8) * uVar25 +
                             *(int *)(*(int *)(this_01 + 0x64f) + 0x1c));
          }
          else {
            puVar8 = (uint *)(*(int *)(*(int *)(this_01 + 0x647) + 8) * uVar25 +
                             *(int *)(*(int *)(this_01 + 0x647) + 0x1c));
          }
        }
        else {
          puVar8 = (uint *)0x0;
        }
        if (puVar15[0xd] == '\x01') {
          if (((puVar8 == (uint *)0x0) || ((int)*puVar8 < 0)) ||
             (puVar8[8] != *(uint *)(puVar15 + 0x14))) {
            TTaskItemClose(this_01,puVar8);
            if (*(int *)(puVar15 + 0x14) < *(int *)(DAT_0080c4c7 + 8)) {
              pcVar9 = *(char **)(*(int *)(DAT_0080c4c7 + 0x14) + *(int *)(puVar15 + 0x14) * 4);
            }
            else {
              pcVar9 = (char *)0x0;
            }
            if (pcVar9 != (char *)0x0) {
              puVar8 = auStackY_13c;
              for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar8 = 0;
                puVar8 = puVar8 + 1;
              }
              *(undefined2 *)puVar8 = 0;
              if (puVar15[0xe] == '\0') {
                uStackY_7c = uStackY_7c & 0xffffff00;
                piStackY_88 = (int *)((-(uint)(puVar15[9] != '\x01') & 0xfffffffe) + 2);
                do {
                  iStackY_fc = *(int *)(puVar15 + 0x22);
                  iVar5 = *(int *)(puVar15 + 0x26);
                  iVar13 = 1;
                  puVar10 = (undefined4 *)(*(int *)(this_01 + 0x5d) + 0x28);
                  uVar25 = FUN_006b4fe0(*(int *)(this_01 + 0x5d));
                  uVar14 = FUN_006b50c0(iStackY_fc,iVar5,
                                        (uint)*(ushort *)(*(int *)(this_01 + 0x5d) + 0xe),uVar25,
                                        puVar10,iVar13);
                  auStackY_13c[(uStackY_7c & 0xff) + 1] = uVar14;
                  uVar25 = *(uint *)(uVar14 + 0x14);
                  if (uVar25 == 0) {
                    uVar25 = ((uint)*(ushort *)(uVar14 + 0xe) * *(int *)(uVar14 + 4) + 0x1f >> 3 &
                             0x1ffffffc) * *(int *)(uVar14 + 8);
                  }
                  piVar18 = (int *)0x5e2d28;
                  puVar10 = (undefined4 *)FUN_006b4fa0(uVar14);
                  for (uVar14 = uVar25 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                    *puVar10 = 0xffffffff;
                    puVar10 = puVar10 + 1;
                  }
                  for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                    *(undefined1 *)puVar10 = 0xff;
                    puVar10 = (undefined4 *)((int)puVar10 + 1);
                  }
                  piVar19 = (int *)(uint)(byte)puVar15[0x19];
                  PrepareTSurf(this_01,*piVar18,puVar15[0x19],puVar15[0xb]);
                  if (puVar15[0x19] != '\0') {
                    pMStackY_110 = this_01 + (uint)(puVar15[10] == '\x01') * 0x100 + 0x91;
                  }
                  ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x89),*piVar19,0,0,0,0,0);
                  puVar8 = FUN_006b54f0((uint *)0x0,1,1);
                  FUN_006b5aa0((int)puVar8,pcVar9);
                  puStackY_80 = ccFntTy::FormIndentSarr
                                          (*(ccFntTy **)(this_01 + 0x89),(int)puVar8,
                                           (uint *)s________________007c21d8,(uint *)&DAT_007c21ec,
                                           *(int *)(puVar15 + 0x22) + *(int *)(puVar15 + 0x2a) * -2,
                                           0,0xffffffff,(char *)0x0,1);
                  FUN_006b5570((byte *)puVar8);
                  puVar8 = puStackY_80;
                  if (puStackY_80 != (uint *)0x0) {
                    piVar18 = piStackY_88;
                    if ((char)uStackY_7c != '\0') {
                      if ((char)uStackY_7c == '\x01') {
                        piVar18 = (int *)((int)piStackY_88 + 1);
                      }
                      else {
                        piVar18 = (int *)0x4;
                      }
                    }
                    ccFntTy::WrSarr(*(ccFntTy **)(this_01 + 0x89),(int)puStackY_80,0,-1,
                                    *(int *)(puVar15 + 0x2a),*(int *)(puVar15 + 0x2e),piVar18);
                    FUN_006b5570((byte *)puVar8);
                  }
                  bVar4 = (char)uStackY_7c + 1;
                  uStackY_7c = CONCAT31(uStackY_7c._1_3_,bVar4);
                } while (bVar4 < 3);
                FUN_006b2330((uint)DAT_008075a8,auStackY_13c,*(uint *)(puVar15 + 5),0x403db4,
                             *(uint *)(puVar15 + 0x22),*(uint *)(puVar15 + 0x26),
                             *(uint *)(this_01 + 0x64f));
                uVar25 = *(uint *)(puVar15 + 0xf);
                puVar8 = *(uint **)(this_01 + 0x64f);
              }
              else {
                uStackY_106 = *(undefined4 *)(puVar15 + 9);
                iVar13 = 1;
                uStackY_107 = puVar15[0x19];
                uStackY_10c = puVar15[0x18];
                iStackY_f8 = *(int *)(puVar15 + 0x22);
                iVar5 = *(int *)(puVar15 + 0x26);
                puVar10 = (undefined4 *)(*(int *)(this_01 + 0x5d) + 0x28);
                iStackY_f4 = (-(uint)(puVar15[9] != '\x01') & 0xfffffffe) + 2;
                uVar25 = FUN_006b4fe0(*(int *)(this_01 + 0x5d));
                auStackY_13c[1] =
                     FUN_006b50c0(iStackY_f8,iVar5,(uint)*(ushort *)(*(int *)(this_01 + 0x5d) + 0xe)
                                  ,uVar25,puVar10,iVar13);
                uVar14 = 0x5e2b09;
                puVar10 = (undefined4 *)FUN_006b4fa0(auStackY_13c[1]);
                for (uVar25 = uVar14 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
                  *puVar10 = 0xffffffff;
                  puVar10 = puVar10 + 1;
                }
                for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *(undefined1 *)puVar10 = 0xff;
                  puVar10 = (undefined4 *)((int)puVar10 + 1);
                }
                if (puVar15[0x19] != '\0') {
                  pMStackY_110 = this_01 + (uint)(uStackY_106._1_1_ == '\x01') * 0x100 + 0x91;
                }
                ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x89),auStackY_13c[1],0,0,0,0,0);
                puVar8 = FUN_006b54f0((uint *)0x0,1,1);
                FUN_006b5aa0((int)puVar8,pcVar9);
                puVar11 = ccFntTy::FormIndentSarr
                                    (*(ccFntTy **)(this_01 + 0x89),(int)puVar8,
                                     (uint *)s________________007c21d8,(uint *)&DAT_007c21ec,
                                     *(int *)(puVar15 + 0x22) + *(int *)(puVar15 + 0x2a) * -2,0,
                                     0xffffffff,(char *)0x0,1);
                FUN_006b5570((byte *)puVar8);
                if (puVar11 != (uint *)0x0) {
                  puStackY_102 = (uint *)ccFntTy::_SarrToTxt(*(ccFntTy **)(this_01 + 0x89),
                                                             (char *)0x0,(int)puVar11);
                  if (puStackY_102 != (uint *)0x0) {
                    pcStackY_10b = (cTypingTy *)FUN_0072e530(0xb4);
                    if (pcStackY_10b == (cTypingTy *)0x0) {
                      pcStackY_10b = (cTypingTy *)0x0;
                    }
                    else {
                      *(undefined4 *)(pcStackY_10b + 0x58) = 0;
                      *(undefined4 *)(pcStackY_10b + 0x88) = 0;
                    }
                    uStackY_128 = *(undefined4 *)(puVar15 + 0x2a);
                    uStackY_124 = *(undefined4 *)(puVar15 + 0x2e);
                    uStackY_48 = 0x2c51;
                    uStackY_46 = 0x5e;
                    iStackY_120 = cTypingTy::TypingInit
                                            (pcStackY_10b,puStackY_102,*(void **)(this_01 + 0x89),0,
                                             0,0,*(int *)(puVar15 + 0x22) +
                                                 *(int *)(puVar15 + 0x2a) * -2,
                                             *(int *)(puVar15 + 0x26) +
                                             *(int *)(puVar15 + 0x2e) * -2,0,0,iStackY_f4,
                                             iStackY_f4 + 1,4,0xff);
                    iStackY_120 = iStackY_120 + 1;
                  }
                  FUN_006b5570((byte *)puVar11);
                }
                FUN_006b2330((uint)DAT_008075a8,auStackY_13c,*(uint *)(puVar15 + 5),0x4041b0,
                             *(uint *)(puVar15 + 0x22),*(uint *)(puVar15 + 0x26),
                             *(uint *)(this_01 + 0x647));
                uVar25 = *(uint *)(puVar15 + 0xf);
                puVar8 = *(uint **)(this_01 + 0x647);
              }
              FUN_006ae140(puVar8,uVar25,auStackY_13c);
              in_stack_ffffffdc = DAT_008075a8;
              FUN_006b3640((int *)DAT_008075a8,auStackY_13c[0],0,*(uint *)(puVar15 + 0x1a),
                           *(uint *)(puVar15 + 0x1e));
            }
          }
          else {
            if (cVar1 == '\0') {
              uVar25 = puVar8[4];
            }
            else {
              uVar25 = 0;
            }
            in_stack_ffffffdc = DAT_008075a8;
            FUN_006b3730(DAT_008075a8,*puVar8,uVar25,*(uint *)(puVar15 + 0x1a),
                         *(uint *)(puVar15 + 0x1e));
          }
        }
        else if ((puVar8 != (uint *)0x0) && (-1 < (int)*puVar8)) {
          if (this_01[0x6d] == (MTaskTy)0x5) {
            TTaskItemClose(this_01,puVar8);
          }
          else {
            if (cVar1 == '\0') {
              uVar25 = 1;
            }
            else {
              uVar25 = puVar8[7] - 2;
            }
            puVar8[4] = uVar25;
            puVar8[10] = 2;
            puVar8[9] = *(uint *)(this_01 + 0x69);
            FUN_006b35d0((int *)DAT_008075a8,*puVar8);
          }
        }
        break;
      case 6:
        if (this_01[0x6d] != (MTaskTy)0x5) {
          puVar8 = (uint *)FUN_00719d00(*(undefined4 *)(this_01 + 0x70),puVar15 + 0xd,0,0);
          if (puVar8 == (uint *)0x0) {
            in_stack_ffffffdc = (uint *)0x5e2f3a;
            puVar8 = (uint *)FUN_00719d00(DAT_00806798,puVar15 + 0xd,0,0);
            if (puVar8 == (uint *)0x0) break;
          }
          in_stack_ffffffdc = (uint *)0x5e2f24;
          thunk_FUN_0056a130(&g_sound,0,'\x03',-1,puVar8);
        }
        break;
      case 7:
        iVar5 = *(int *)(this_01 + 0x64b);
        if (*(uint *)(puVar15 + 0xe) < *(uint *)(iVar5 + 0xc)) {
          pSVar20 = (SpriteClassTy *)
                    (*(int *)(iVar5 + 8) * *(uint *)(puVar15 + 0xe) + *(int *)(iVar5 + 0x1c));
        }
        else {
          pSVar20 = (SpriteClassTy *)0x0;
        }
        if (puVar15[0xd] == '\x01') {
          FUN_00715820((undefined4 *)aSStackY_1dc);
          pSVar30 = (SpriteClassTy *)0x0;
          piStackY_142 = (int *)0x0;
          iStackY_94 = 1;
          IStackY_2bc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &IStackY_2bc;
          iVar5 = __setjmp3(IStackY_2bc.jumpBuffer,0,unaff_EDI,pSVar20);
          if (iVar5 == 0) {
            pSVar31 = pSVar30;
            if (pSVar20 != (SpriteClassTy *)0x0) {
              pSVar12 = pSVar20 + 0x65;
              if (pSVar12 != (SpriteClassTy *)0x0) {
                pSVar24 = pSVar30 + 0x12;
                do {
                  SVar2 = *pSVar12;
                  bVar26 = (byte)SVar2 < (byte)*pSVar24;
                  if (SVar2 != *pSVar24) {
LAB_005e2ffb:
                    iVar5 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
                    goto LAB_005e3000;
                  }
                  if (SVar2 == (SpriteClassTy)0x0) break;
                  SVar2 = pSVar12[1];
                  bVar26 = (byte)SVar2 < (byte)pSVar24[1];
                  if (SVar2 != pSVar24[1]) goto LAB_005e2ffb;
                  pSVar12 = pSVar12 + 2;
                  pSVar24 = pSVar24 + 2;
                } while (SVar2 != (SpriteClassTy)0x0);
                iVar5 = 0;
LAB_005e3000:
                if (iVar5 != 0) {
                  pSVar31 = (SpriteClassTy *)0x5e300e;
                  pSVar32 = pSVar20;
                  SpriteClassTy::CloseSprite(pSVar20);
                  pSVar12 = pSVar20 + 0x9a;
                  pSVar24 = pSVar20 + 0x9a;
                  pSVar20 = pSVar32;
                  if (*(int *)pSVar12 != 0) {
                    FUN_006ab060((undefined4 *)pSVar24);
                    pSVar31 = pSVar24;
                    pSVar20 = pSVar32;
                  }
                  goto LAB_005e3030;
                }
              }
              iStackY_94 = 0;
            }
LAB_005e3030:
            this_01 = pMStackY_8c;
            if (iStackY_94 == 0) {
              if (pSVar20 == (SpriteClassTy *)0x0) {
                pSVar12 = (SpriteClassTy *)0x0;
              }
              else {
                pSVar12 = pSVar20 + 4;
              }
              puVar8 = auStackY_1d8;
              pSVar30 = pSVar31;
              for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar8 = *(uint *)pSVar12;
                pSVar12 = pSVar12 + 4;
                puVar8 = puVar8 + 1;
              }
              puStackY_194 = *(uint **)(pSVar20 + 0x48);
              SStackY_190 = pSVar20[0x4c];
              uStackY_18f = *(undefined4 *)(pSVar20 + 0x4d);
              uStackY_18b = *(undefined4 *)(pSVar20 + 0x51);
              uStackY_187 = *(undefined4 *)(pSVar20 + 0x55);
              uStackY_183 = *(undefined4 *)(pSVar20 + 0x59);
              uStackY_17f = *(undefined4 *)(pSVar20 + 0x5d);
              uStackY_17b = *(undefined4 *)(pSVar20 + 0x61);
              puVar15 = auStackY_177;
              iVar5 = 0x20;
              do {
                *puVar15 = puVar15[(int)pSVar20 - (int)aSStackY_1dc];
                puVar15 = puVar15 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              uStackY_157 = *(undefined4 *)(pSVar20 + 0x85);
              uStackY_153 = *(undefined4 *)(pSVar20 + 0x89);
              uStackY_14f = *(undefined4 *)(pSVar20 + 0x8d);
            }
            else {
              SpriteClassTy::InitSprite
                        (aSStackY_1dc,(int *)DAT_008075a8,*(uint *)(pSVar30 + 5),'\x1e',
                         (undefined4 *)0x0,0,0);
              in_stack_ffffffdc = (uint *)0x1e;
              iVar5 = SpriteClassTy::SetImages
                                (aSStackY_1dc,*(undefined4 *)(this_01 + 0x70),0x1e,0,
                                 (char *)(pSVar30 + 0x12),0xffffffff,0);
              if (iVar5 != 0) {
                in_stack_ffffffdc = (uint *)0x1e;
                SpriteClassTy::SetImages
                          (aSStackY_1dc,DAT_00806798,0x1e,0,(char *)(pSVar30 + 0x12),0xffffffff,1);
              }
            }
            uStackY_1c0 = *(uint *)(pSVar30 + 0x32);
            uStackY_1bc = *(uint *)(pSVar30 + 0x36);
            SVar2 = pSVar30[0x4f];
            if (SVar2 == (SpriteClassTy)0x0) {
              cStackY_14b = '\0';
              auStackY_1d8[1] = *(uint *)(pSVar30 + 0x4a);
            }
            else if (SVar2 == (SpriteClassTy)0x1) {
              uStackY_198 = *(undefined4 *)(this_01 + 0x69);
              cStackY_14b = (pSVar30[0x4e] != (SpriteClassTy)0x0) + '\x01';
              auStackY_1d8[1] = *(uint *)(pSVar30 + 0x4a);
              uStackY_19c = *(undefined4 *)(pSVar30 + 0x46);
            }
            else if (SVar2 == (SpriteClassTy)0x2) {
              uStackY_198 = *(undefined4 *)(this_01 + 0x69);
              cStackY_14b = (pSVar30[0x4e] != (SpriteClassTy)0x0) + '\x03';
              auStackY_1d8[1] = *(uint *)(pSVar30 + 0x4a);
              uStackY_19c = *(undefined4 *)(pSVar30 + 0x46);
              uStackY_14a = 0;
              iStackY_146 = *(int *)(pSVar30 + 0x42);
              in_stack_ffffffdc = *(uint **)(pSVar30 + 0x32);
              piStackY_142 = FUN_006c81c0((int)in_stack_ffffffdc,*(int *)(pSVar30 + 0x36),
                                          *(int *)(pSVar30 + 0x3a),*(int *)(pSVar30 + 0x3e),
                                          iStackY_146);
              if (piStackY_142 == (int *)0x0) {
                cStackY_14b = (pSVar30[0x4e] != (SpriteClassTy)0x0) + '\x01';
              }
            }
            if (auStackY_1d8[0] != 0xffffffff) {
              in_stack_ffffffdc = puStackY_194;
              FUN_006b3730(puStackY_194,auStackY_1d8[0],auStackY_1d8[1],uStackY_1c0,uStackY_1bc);
            }
            FUN_006ae140(*(uint **)(this_01 + 0x64b),*(uint *)(pSVar30 + 0xe),
                         (undefined4 *)aSStackY_1dc);
            g_currentExceptionFrame = IStackY_2bc.previous;
          }
          else {
            g_currentExceptionFrame = IStackY_2bc.previous;
            SpriteClassTy::CloseSprite(aSStackY_1dc);
            this_01 = pMStackY_8c;
            if (piStackY_142 != (int *)0x0) {
              FUN_006ab060(&piStackY_142);
              this_01 = pMStackY_8c;
            }
          }
        }
        else if (pSVar20 != (SpriteClassTy *)0x0) {
          SpriteClassTy::CloseSprite(pSVar20);
          if (*(int *)(pSVar20 + 0x9a) != 0) {
            FUN_006ab060((undefined4 *)(pSVar20 + 0x9a));
          }
        }
        break;
      case 8:
        puVar10 = auStackY_e4;
        for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        uStackY_da = 0;
        uStackY_d9 = 1;
        uStackY_d8 = 1;
        uStackY_db = 1;
        auStackY_e4[0]._0_1_ = 1;
        uStackY_d7 = 2;
        uStackY_d6 = 0x26201;
        uStackY_d2 = 0x22600;
        iStackY_ce._1_3_ = 0x91;
        iStackY_ce._0_1_ = 0;
        uStackY_ca = 0x2800;
        uStackY_c6 = uStackY_c6 & 0xffffff00;
        FUN_006b11d0(*(uint **)(this_01 + 0x74),uVar14 + 1,auStackY_e4);
        uStackY_d7 = 1;
        uStackY_d6 = CONCAT31(0x2d,(undefined1)uStackY_d6);
        uStackY_d2 = 0x22600;
        iStackY_ce._0_1_ = 0;
        FUN_006b11d0(*(uint **)(this_01 + 0x74),*(int *)(this_01 + 0x7c) + 1,auStackY_e4);
        uStackY_d7 = 0;
        uStackY_d6 = CONCAT31(0x23,(undefined1)uStackY_d6);
        uStackY_d2 = 0x1f400;
        iStackY_ce = (uint)iStackY_ce._1_3_ << 8;
        FUN_006b11d0(*(uint **)(this_01 + 0x74),*(int *)(this_01 + 0x7c) + 1,auStackY_e4);
        uStackY_d9 = 0;
        uStackY_d8 = 0;
        uStackY_db = 0;
        uStackY_da = 0;
        auStackY_e4[0]._0_1_ = 2;
        uStackY_d7 = 1;
        uStackY_d6 = 0x104;
        uStackY_c6 = 0x226;
        uStackY_d2 = 0x122;
        uStackY_c2 = 0x23f;
        iStackY_ce = 0x1a4;
        uStackY_be = 0x226;
        FUN_006b11d0(*(uint **)(this_01 + 0x74),*(int *)(this_01 + 0x7c) + 1,auStackY_e4);
        uStackY_d2 = 200;
        uStackY_ca = 200;
        uStackY_d9 = 0;
        uStackY_d8 = 0;
        uStackY_db = 0;
        uStackY_da = 0;
        auStackY_e4[0]._0_1_ = 3;
        uStackY_d7 = 1;
        uStackY_d6 = 0x96;
        iStackY_ce = 500;
        FUN_006b11d0(*(uint **)(this_01 + 0x74),*(int *)(this_01 + 0x7c) + 1,auStackY_e4);
        break;
      case 9:
        pMVar23 = this_01 + 0x5d;
        if (*(int *)(this_01 + 0x5d) != 0) {
          this_00 = DAT_00806780;
          if ((this_01[0x80] != (MTaskTy)0x1) &&
             (this_00 = DAT_00806798, this_01[0x80] != (MTaskTy)0x2)) {
            this_00 = *(cMf32 **)(this_01 + 0x70);
          }
          cMf32::RecMemFree(this_00,(uint *)pMVar23);
        }
        pbVar17 = puVar15 + 0xd;
        this_01[0x80] = (MTaskTy)0x0;
        uVar25 = FUN_0070a9f0(*(undefined4 *)(this_01 + 0x70),(char *)pbVar17,0,0);
        *(uint *)pMVar23 = uVar25;
        if (uVar25 == 0) {
          uVar25 = FUN_0070a9f0(DAT_00806798,(char *)pbVar17,0,0);
          *(uint *)pMVar23 = uVar25;
          if (uVar25 == 0) {
            iVar5 = 1;
            bVar4 = 0;
            pCVar6 = FUN_006f2c00(s_TASK_BKG_007cda64,1,(uint)DAT_0080874e);
            uVar25 = FUN_0070a9f0(DAT_00806780,pCVar6,bVar4,iVar5);
            *(uint *)pMVar23 = uVar25;
            this_01[0x80] = (MTaskTy)0x1;
          }
          else {
            puVar10 = (undefined4 *)auStackY_78;
            for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
            uStackY_6d = 1;
            uStackY_6c = 1;
            uStackY_6f = 1;
            auStackY_78._1_4_ = *(undefined4 *)(puVar15 + 1);
            uStackY_73 = 0x7ffffff0;
            auStackY_78[0] = 7;
            uStackY_6b = 1;
            pbVar16 = pbVar17;
            pbVar21 = PTR_s_DEFAULT_WS_ANIMATED_0079c224;
            do {
              bVar4 = *pbVar16;
              bVar26 = bVar4 < *pbVar21;
              if (bVar4 != *pbVar21) {
LAB_005e14be:
                iVar5 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
                goto LAB_005e14c3;
              }
              if (bVar4 == 0) break;
              bVar4 = pbVar16[1];
              bVar26 = bVar4 < pbVar21[1];
              if (bVar4 != pbVar21[1]) goto LAB_005e14be;
              pbVar16 = pbVar16 + 2;
              pbVar21 = pbVar21 + 2;
            } while (bVar4 != 0);
            iVar5 = 0;
LAB_005e14c3:
            pbVar16 = PTR_s_DEFAULT_BO_ANIMATED_0079c228;
            pbVar21 = pbVar17;
            if (iVar5 == 0) {
              uVar25 = 0xffffffff;
              pcVar9 = &DAT_007cdc48;
              do {
                pcVar22 = pcVar9;
                if (uVar25 == 0) break;
                uVar25 = uVar25 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar25 = ~uVar25;
              uStackY_6a = 0xf0;
              pcVar9 = pcVar22 + -uVar25;
              pcVar22 = acStackY_66;
              for (uVar14 = uVar25 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              iVar5 = *(int *)(this_01 + 0x7c);
              for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              uStackY_46 = 0;
              FUN_006b11d0(*(uint **)(this_01 + 0x74),iVar5 + 1,(undefined4 *)auStackY_78);
              uVar25 = 0xffffffff;
              pcVar9 = s_DEF_WS_ANI2_007cdc38;
              do {
                pcVar22 = pcVar9;
                if (uVar25 == 0) break;
                uVar25 = uVar25 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar25 = ~uVar25;
              uStackY_6a = 0xf1;
              iVar5 = *(int *)(this_01 + 0x7c);
              pcVar9 = pcVar22 + -uVar25;
              pcVar22 = acStackY_66;
              for (uVar14 = uVar25 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = *(uint **)(this_01 + 0x74);
              for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              uStackY_46 = 0;
              FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)auStackY_78);
              uVar25 = 0xffffffff;
              pcVar9 = s_DEF_WS_ANI3_007cdc28;
              do {
                pcVar22 = pcVar9;
                if (uVar25 == 0) break;
                uVar25 = uVar25 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar25 = ~uVar25;
              uStackY_6a = 0xf2;
              iVar5 = *(int *)(this_01 + 0x7c);
              pcVar9 = pcVar22 + -uVar25;
              pcVar22 = acStackY_66;
              for (uVar14 = uVar25 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = *(uint **)(this_01 + 0x74);
              for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              uStackY_46 = 0x40;
              FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)auStackY_78);
              uStackY_6a = 0xf3;
              uVar25 = 0xffffffff;
              pcVar9 = &DAT_007cdc18;
              do {
                pcVar22 = pcVar9;
                if (uVar25 == 0) break;
                uVar25 = uVar25 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar25 = ~uVar25;
              iVar5 = *(int *)(this_01 + 0x7c);
              pcVar9 = pcVar22 + -uVar25;
              pcVar22 = acStackY_66;
              for (uVar14 = uVar25 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = *(uint **)(this_01 + 0x74);
              for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              uStackY_46 = 0x208;
              FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)auStackY_78);
              uVar25 = 0xffffffff;
              pcVar9 = &DAT_007cdc08;
              do {
                pcVar22 = pcVar9;
                if (uVar25 == 0) break;
                uVar25 = uVar25 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar25 = ~uVar25;
              uStackY_6a = 0xf4;
              iVar5 = *(int *)(this_01 + 0x7c);
              pcVar9 = pcVar22 + -uVar25;
              pcVar22 = acStackY_66;
              for (uVar14 = uVar25 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = *(uint **)(this_01 + 0x74);
              for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              uStackY_46 = 0x208;
              FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)auStackY_78);
              uVar25 = 0xffffffff;
              pcVar9 = &DAT_007cdbf8;
              do {
                pcVar22 = pcVar9;
                if (uVar25 == 0) break;
                uVar25 = uVar25 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar25 = ~uVar25;
              uStackY_6a = 0xf5;
              iVar5 = *(int *)(this_01 + 0x7c);
              pcVar9 = pcVar22 + -uVar25;
              pcVar22 = acStackY_66;
              for (uVar14 = uVar25 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = *(uint **)(this_01 + 0x74);
              for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              uStackY_46 = 0x2df;
              FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)auStackY_78);
              pbVar16 = PTR_s_DEFAULT_BO_ANIMATED_0079c228;
              pbVar21 = pbVar17;
            }
            do {
              bVar4 = *pbVar17;
              bVar26 = bVar4 < *pbVar16;
              if (bVar4 != *pbVar16) {
LAB_005e16bc:
                iVar5 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
                goto LAB_005e16c1;
              }
              if (bVar4 == 0) break;
              bVar4 = pbVar17[1];
              bVar26 = bVar4 < pbVar16[1];
              if (bVar4 != pbVar16[1]) goto LAB_005e16bc;
              pbVar17 = pbVar17 + 2;
              pbVar16 = pbVar16 + 2;
            } while (bVar4 != 0);
            iVar5 = 0;
LAB_005e16c1:
            pbVar17 = PTR_s_DEFAULT_SI_ANIMATED_0079c22c;
            if (iVar5 == 0) {
              uVar25 = 0xffffffff;
              pcVar9 = s_DEF_BO_ANI1_007cdbe8;
              do {
                pcVar22 = pcVar9;
                if (uVar25 == 0) break;
                uVar25 = uVar25 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar25 = ~uVar25;
              uStackY_6a = 0xf0;
              pcVar9 = pcVar22 + -uVar25;
              pcVar22 = acStackY_66;
              for (uVar14 = uVar25 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              iVar5 = *(int *)(this_01 + 0x7c);
              puVar8 = *(uint **)(this_01 + 0x74);
              for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              uStackY_46 = 0xb0;
              FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)auStackY_78);
              uVar25 = 0xffffffff;
              pcVar9 = s_DEF_BO_ANI2_007cdbd8;
              do {
                pcVar22 = pcVar9;
                if (uVar25 == 0) break;
                uVar25 = uVar25 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar25 = ~uVar25;
              uStackY_6a = 0xf1;
              iVar5 = *(int *)(this_01 + 0x7c);
              pcVar9 = pcVar22 + -uVar25;
              pcVar22 = acStackY_66;
              for (uVar14 = uVar25 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = *(uint **)(this_01 + 0x74);
              for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              uStackY_46 = 0;
              FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)auStackY_78);
              uVar25 = 0xffffffff;
              pcVar9 = s_DEF_BO_ANI3_007cdbc8;
              do {
                pcVar22 = pcVar9;
                if (uVar25 == 0) break;
                uVar25 = uVar25 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar25 = ~uVar25;
              uStackY_6a = 0xf2;
              iVar5 = *(int *)(this_01 + 0x7c);
              pcVar9 = pcVar22 + -uVar25;
              pcVar22 = acStackY_66;
              for (uVar14 = uVar25 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = *(uint **)(this_01 + 0x74);
              for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              uStackY_46 = 0xb0;
              FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)auStackY_78);
              uStackY_6a = 0xf3;
              uVar25 = 0xffffffff;
              pcVar9 = s_DEF_BO_ANI4_007cdbb8;
              do {
                pcVar22 = pcVar9;
                if (uVar25 == 0) break;
                uVar25 = uVar25 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar25 = ~uVar25;
              iVar5 = *(int *)(this_01 + 0x7c);
              pcVar9 = pcVar22 + -uVar25;
              pcVar22 = acStackY_66;
              for (uVar14 = uVar25 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = *(uint **)(this_01 + 0x74);
              for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              uStackY_46 = 0xdc;
              FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)auStackY_78);
              uVar25 = 0xffffffff;
              pcVar9 = &DAT_007cdba8;
              do {
                pcVar22 = pcVar9;
                if (uVar25 == 0) break;
                uVar25 = uVar25 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar25 = ~uVar25;
              uStackY_6a = 0xf4;
              iVar5 = *(int *)(this_01 + 0x7c);
              pcVar9 = pcVar22 + -uVar25;
              pcVar22 = acStackY_66;
              for (uVar14 = uVar25 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = *(uint **)(this_01 + 0x74);
              for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              uStackY_46 = 0x1ce;
              FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)auStackY_78);
              uVar25 = 0xffffffff;
              pcVar9 = &DAT_007cdb98;
              do {
                pcVar22 = pcVar9;
                if (uVar25 == 0) break;
                uVar25 = uVar25 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar25 = ~uVar25;
              uStackY_6a = 0xf5;
              iVar5 = *(int *)(this_01 + 0x7c);
              pcVar9 = pcVar22 + -uVar25;
              pcVar22 = acStackY_66;
              for (uVar14 = uVar25 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = *(uint **)(this_01 + 0x74);
              for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              uStackY_46 = 0x2a9;
              FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)auStackY_78);
              uVar25 = 0xffffffff;
              uStackY_6a = 0xf6;
              pcVar9 = &DAT_007cdb88;
              do {
                pcVar22 = pcVar9;
                if (uVar25 == 0) break;
                uVar25 = uVar25 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar25 = ~uVar25;
              iVar5 = *(int *)(this_01 + 0x7c);
              pcVar9 = pcVar22 + -uVar25;
              pcVar22 = acStackY_66;
              for (uVar14 = uVar25 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = *(uint **)(this_01 + 0x74);
              for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              uStackY_46 = 0x78;
              FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)auStackY_78);
              uVar25 = 0xffffffff;
              pcVar9 = s_DEF_BO_ANI8_007cdb78;
              do {
                pcVar22 = pcVar9;
                if (uVar25 == 0) break;
                uVar25 = uVar25 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar25 = ~uVar25;
              uStackY_6a = 0xf7;
              iVar5 = *(int *)(this_01 + 0x7c);
              pcVar9 = pcVar22 + -uVar25;
              pcVar22 = acStackY_66;
              for (uVar14 = uVar25 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = *(uint **)(this_01 + 0x74);
              for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              uStackY_46 = 0x78;
              FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)auStackY_78);
              pbVar17 = PTR_s_DEFAULT_SI_ANIMATED_0079c22c;
            }
            do {
              bVar4 = *pbVar21;
              bVar26 = bVar4 < *pbVar17;
              if (bVar4 != *pbVar17) {
LAB_005e1958:
                iVar5 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
                goto LAB_005e195d;
              }
              if (bVar4 == 0) break;
              bVar4 = pbVar21[1];
              bVar26 = bVar4 < pbVar17[1];
              if (bVar4 != pbVar17[1]) goto LAB_005e1958;
              pbVar21 = pbVar21 + 2;
              pbVar17 = pbVar17 + 2;
            } while (bVar4 != 0);
            iVar5 = 0;
LAB_005e195d:
            if (iVar5 == 0) {
              uVar25 = 0xffffffff;
              pcVar9 = s_DEF_SI_ANI1_007cdb68;
              do {
                pcVar22 = pcVar9;
                if (uVar25 == 0) break;
                uVar25 = uVar25 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar25 = ~uVar25;
              uStackY_6a = 0xf0;
              pcVar9 = pcVar22 + -uVar25;
              pcVar22 = acStackY_66;
              for (uVar14 = uVar25 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              iVar5 = *(int *)(this_01 + 0x7c);
              puVar8 = *(uint **)(this_01 + 0x74);
              for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              uStackY_46 = 0x8e;
              FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)auStackY_78);
              uVar25 = 0xffffffff;
              pcVar9 = s_DEF_SI_ANI2_007cdb58;
              do {
                pcVar22 = pcVar9;
                if (uVar25 == 0) break;
                uVar25 = uVar25 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar25 = ~uVar25;
              uStackY_6a = 0xf1;
              iVar5 = *(int *)(this_01 + 0x7c);
              pcVar9 = pcVar22 + -uVar25;
              pcVar22 = acStackY_66;
              for (uVar14 = uVar25 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = *(uint **)(this_01 + 0x74);
              for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              uStackY_46 = 0x103;
              FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)auStackY_78);
              uVar25 = 0xffffffff;
              pcVar9 = s_DEF_SI_ANI3_007cdb48;
              do {
                pcVar22 = pcVar9;
                if (uVar25 == 0) break;
                uVar25 = uVar25 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar25 = ~uVar25;
              uStackY_6a = 0xf2;
              iVar5 = *(int *)(this_01 + 0x7c);
              pcVar9 = pcVar22 + -uVar25;
              pcVar22 = acStackY_66;
              for (uVar14 = uVar25 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = *(uint **)(this_01 + 0x74);
              for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              uStackY_46 = 0x103;
              FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)auStackY_78);
              uStackY_6a = 0xf3;
              uVar25 = 0xffffffff;
              pcVar9 = s_DEF_SI_ANI4_007cdb38;
              do {
                pcVar22 = pcVar9;
                if (uVar25 == 0) break;
                uVar25 = uVar25 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar25 = ~uVar25;
              iVar5 = *(int *)(this_01 + 0x7c);
              pcVar9 = pcVar22 + -uVar25;
              pcVar22 = acStackY_66;
              for (uVar14 = uVar25 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = *(uint **)(this_01 + 0x74);
              for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              uStackY_46 = 0xd7;
              FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)auStackY_78);
              uVar25 = 0xffffffff;
              pcVar9 = s_DEF_SI_ANI5_007cdb28;
              do {
                pcVar22 = pcVar9;
                if (uVar25 == 0) break;
                uVar25 = uVar25 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar25 = ~uVar25;
              uStackY_6a = 0xf4;
              iVar5 = *(int *)(this_01 + 0x7c);
              pcVar9 = pcVar22 + -uVar25;
              pcVar22 = acStackY_66;
              for (uVar14 = uVar25 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = *(uint **)(this_01 + 0x74);
              for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              uStackY_46 = 0x27c;
              FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)auStackY_78);
            }
            this_01[0x80] = (MTaskTy)0x2;
          }
        }
        iVar5 = *(int *)(this_01 + 0x74);
        if (*(uint *)(this_01 + 0x7c) < *(uint *)(iVar5 + 0xc)) {
          piVar18 = (int *)(*(int *)(iVar5 + 8) * *(uint *)(this_01 + 0x7c) + *(int *)(iVar5 + 0x1c)
                           );
        }
        else {
          piVar18 = (int *)0x0;
        }
        FUN_006bc360(*(int *)(this_01 + 0x5d),auStackY_1268,piVar18);
        in_stack_ffffffdc = (uint *)0x0;
        FUN_00718780((int)auStackY_1268,0,0x100,0x1a,0x10,(undefined4 *)(this_01 + 0x91));
        FUN_00718780((int)auStackY_1268,0,0x100,0x2e,0x10,(undefined4 *)(this_01 + 0x191));
        if (*(int *)(this_01 + 0x7c) != 0) {
          thunk_FUN_0055dbf0(DAT_0080759c,1,0);
          PaintMTask(this_01);
          in_stack_ffffffdc = DAT_008075a8;
          thunk_FUN_0055ddf0(DAT_0080759c,(int *)DAT_008075a8,*(int *)(this_01 + 0x5d),10,2);
        }
        if (*(uint **)(this_01 + 0x89) != (uint *)0x0) {
          FUN_00710560(*(uint **)(this_01 + 0x89));
        }
        iVar5 = thunk_FUN_005defe0(*(int *)(this_01 + 0x5d),(undefined *)0x0,DAT_00807dd9);
        *(int *)(this_01 + 0x89) = iVar5;
        *(undefined4 *)(iVar5 + 0x58) = 1;
        *(undefined4 *)(iVar5 + 0x5c) = 0;
        if (*(uint **)(this_01 + 0x8d) != (uint *)0x0) {
          FUN_00710560(*(uint **)(this_01 + 0x8d));
        }
        uVar7 = thunk_FUN_005df290(*(int *)(this_01 + 0x5d),(undefined *)0x0,DAT_00807dd9);
        *(undefined4 *)(this_01 + 0x8d) = uVar7;
        thunk_FUN_00568bc0(&g_sound,0);
        if ((DAT_00807300._1_1_ & 8) != 0) {
          puVar8 = (uint *)FUN_00719d00(*(undefined4 *)(this_01 + 0x70),
                                        (char *)((int)piVar18 + 0x2d),0,0);
          *(uint **)(this_01 + 0x85) = puVar8;
          if (puVar8 == (uint *)0x0) {
            puVar8 = (uint *)FUN_00719d00(DAT_00806798,(char *)((int)piVar18 + 0x2d),0,0);
            *(uint **)(this_01 + 0x85) = puVar8;
            if (puVar8 == (uint *)0x0) {
              in_stack_ffffffdc = (uint *)0x5e1cab;
              thunk_FUN_0056a130(&g_sound,0x14,'\x02',0,(uint *)0x0);
              break;
            }
          }
          in_stack_ffffffdc = (uint *)0x5e1c94;
          thunk_FUN_0056a130(&g_sound,0,'\x02',0,puVar8);
        }
      }
      iVar5 = *(int *)(this_01 + 0x7c);
      *(int *)(this_01 + 0x7c) = iVar5 + 1;
      uVar25 = *(uint *)(*(int *)(this_01 + 0x74) + 0xc);
    } while (iVar5 + 1 < (int)uVar25);
  }
  if (*(int *)(this_01 + 0x7c) == *(int *)(*(int *)(this_01 + 0x74) + 0xc)) {
    if ((this_01[0x6d] == (MTaskTy)0x5) && (iVar5 = *(int *)(this_01 + 0x64b), iVar5 != 0)) {
      uVar25 = 0;
      if (*(int *)(iVar5 + 0xc) != 0) {
        if (*(int *)(iVar5 + 0xc) == 0) {
          pSVar20 = (SpriteClassTy *)0x0;
          goto LAB_005e34e0;
        }
        do {
          pSVar20 = (SpriteClassTy *)(*(int *)(iVar5 + 8) * uVar25 + *(int *)(iVar5 + 0x1c));
LAB_005e34e0:
          if ((*(int *)(pSVar20 + 4) != -1) &&
             ((pSVar20[0x91] == (SpriteClassTy)0x1 || (pSVar20[0x91] == (SpriteClassTy)0x3)))) {
            SpriteClassTy::CloseSprite(pSVar20);
            if (*(int *)(pSVar20 + 0x9a) != 0) {
              FUN_006ab060((undefined4 *)(pSVar20 + 0x9a));
            }
          }
          iVar5 = *(int *)(this_01 + 0x64b);
          uVar25 = uVar25 + 1;
        } while (uVar25 < *(uint *)(iVar5 + 0xc));
      }
    }
    this_01[0x6d] = (MTaskTy)0x1;
  }
  g_currentExceptionFrame = IStackY_278.previous;
  return;
}

