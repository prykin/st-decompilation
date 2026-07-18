
void __fastcall thunk_FUN_00521cf0(int param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined3 extraout_var;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char acStack_4b4 [64];
  char acStack_474 [1040];
  byte bStack_64;
  undefined4 *puStack_60;
  undefined4 auStack_5c [16];
  uint uStack_1c;
  uint uStack_18;
  int iStack_14;
  uint uStack_10;
  uint uStack_c;
  char cStack_5;
  
  if (*(int *)(*(int *)(param_1 + 0x198) + 8) < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)(*(int *)(param_1 + 0x198) + 0x14);
  }
  if (iVar4 != 0) {
    puStack_60 = DAT_00858df8;
    DAT_00858df8 = &puStack_60;
    iStack_14 = param_1;
    iVar4 = __setjmp3(auStack_5c,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      if (DAT_00808783 == '\x03') {
        uStack_10 = 1;
        if (*(int *)(*(int *)(iStack_14 + 0x198) + 8) < 1) {
          pcVar13 = (char *)0x0;
        }
        else {
          pcVar13 = (char *)**(undefined4 **)(*(int *)(iStack_14 + 0x198) + 0x14);
        }
        uVar9 = 0xffffffff;
        pcVar14 = (char *)(iStack_14 + 0x6c);
        do {
          pcVar12 = pcVar13;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar12 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar12;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pcVar13 = pcVar12 + -uVar9;
        pcVar12 = pcVar14;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar12 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar12 = pcVar12 + 1;
        }
        FUN_006b77e0(pcVar14,(byte *)pcVar14);
        FUN_006b7780(pcVar14,pcVar14);
        iVar4 = _strncmp(pcVar14,s__WAITING_007c4124,8);
        uVar9 = uStack_10;
        if ((iVar4 == 0) && (uVar9 = 0, DAT_00802a38 != 0)) {
          *(uint *)(DAT_00802a38 + 0xf0) = (uint)(*(int *)(DAT_00802a38 + 0xf0) == 0);
          uVar5 = FUN_006b0140(0x2747 - (*(int *)(DAT_00802a38 + 0xf0) != 0),DAT_00807618);
          uVar6 = FUN_006b0140(0x42c3,DAT_00807618);
          wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007c411c,uVar6,uVar5);
          if (DAT_008016d8 != (void *)0x0) {
            if (DAT_0080874d == 0xff) {
              thunk_FUN_0052d320(DAT_008016d8,(char *)&DAT_0080f33a,8);
            }
            else {
              thunk_FUN_0052d320(DAT_008016d8,(char *)&DAT_0080f33a,(uint)DAT_0080874d);
            }
          }
        }
        iVar4 = _strncmp(pcVar14,s__FIXNETERRORS_007c410c,0xd);
        if (iVar4 == 0) {
          DAT_0080735e = DAT_0080735e == '\0';
          uVar9 = 0;
          uVar5 = FUN_006b0140(0x2747 - (byte)DAT_0080735e,DAT_00807618);
          uVar6 = FUN_006b0140(0x42c5,DAT_00807618);
          wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007c411c,uVar6,uVar5);
          if (DAT_008016d8 != (void *)0x0) {
            if (DAT_0080874d == 0xff) {
              uVar10 = 8;
            }
            else {
              uVar10 = (uint)DAT_0080874d;
            }
            thunk_FUN_0052d320(DAT_008016d8,(char *)&DAT_0080f33a,uVar10);
          }
        }
        iVar4 = _strncmp(pcVar14,s__NETGUARANTEE_007c40fc,0xd);
        if (iVar4 == 0) {
          DAT_0080733c = (uint)(DAT_0080733c == 0);
          uVar9 = 0;
          if (DAT_00811764 != (undefined4 *)0x0) {
            FUN_006b6500((int)DAT_00811764,DAT_0080733c);
          }
          uVar5 = FUN_006b0140(0x2747 - (DAT_0080733c != 0),DAT_00807618);
          uVar6 = FUN_006b0140(0x42c4,DAT_00807618);
          wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007c411c,uVar6,uVar5);
          if (DAT_008016d8 != (void *)0x0) {
            if (DAT_0080874d == 0xff) {
              uVar10 = 8;
            }
            else {
              uVar10 = (uint)DAT_0080874d;
            }
            thunk_FUN_0052d320(DAT_008016d8,(char *)&DAT_0080f33a,uVar10);
          }
        }
        if (uVar9 != 0) {
          uStack_c = uStack_c & 0xffffff00;
          cStack_5 = '\0';
          iVar4 = _strncmp(pcVar14,&DAT_007c40f4,4);
          if (iVar4 == 0) {
            uStack_c = CONCAT31(uStack_c._1_3_,1);
          }
          iVar4 = _strncmp(pcVar14,s__EALL_007c40ec,5);
          if (iVar4 == 0) {
            uStack_c = CONCAT31(uStack_c._1_3_,2);
          }
          iVar7 = _strncmp(pcVar14,s__AALL_007c40e4,5);
          iVar4 = iStack_14;
          if (iVar7 == 0) {
            uStack_c = CONCAT31(uStack_c._1_3_,3);
            bVar11 = 3;
          }
          else {
            bVar11 = (byte)uStack_c;
          }
          if ((DAT_008067a0 != '\0') && (bVar11 == 0)) {
            if (*(int *)(*(int *)(iStack_14 + 0x198) + 8) < 1) {
              pcVar13 = (char *)0x0;
            }
            else {
              pcVar13 = (char *)**(undefined4 **)(*(int *)(iStack_14 + 0x198) + 0x14);
            }
            bVar3 = thunk_FUN_005717e0(pcVar13);
            if (CONCAT31(extraout_var,bVar3) != 0) {
              if (0 < *(int *)(*(int *)(iVar4 + 0x198) + 8)) {
                CFsgsConnection::SendChatMessage
                          ((CFsgsConnection *)&DAT_00802a90,
                           (char *)**(undefined4 **)(*(int *)(iVar4 + 0x198) + 0x14));
                DAT_00858df8 = puStack_60;
                return;
              }
              CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,(char *)0x0);
              DAT_00858df8 = puStack_60;
              return;
            }
          }
          pcVar13 = acStack_4b4;
          for (iVar4 = 0x114; iVar4 != 0; iVar4 = iVar4 + -1) {
            pcVar13[0] = '\0';
            pcVar13[1] = '\0';
            pcVar13[2] = '\0';
            pcVar13[3] = '\0';
            pcVar13 = pcVar13 + 4;
          }
          *pcVar13 = '\0';
          iVar4 = iStack_14;
          pcVar13 = &DAT_00807e1d;
          if (DAT_008067a0 == '\0') {
            pcVar13 = (char *)&DAT_00807ddd;
          }
          uVar9 = 0xffffffff;
          do {
            pcVar14 = pcVar13;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar14 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar14;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          pcVar13 = pcVar14 + -uVar9;
          pcVar14 = acStack_4b4;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar14 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar14 = pcVar14 + 1;
          }
          bStack_64 = DAT_0080874d;
          if ((bVar11 == 0) && (bVar2 = *(byte *)(iVar4 + 0x1a4), bVar2 != 0)) {
            uStack_c = CONCAT31(uStack_c._1_3_,bVar2);
            cStack_5 = '\x01';
            bVar11 = bVar2;
          }
          if ((bVar11 == 0) || (3 < bVar11)) {
            if (*(int *)(*(int *)(iVar4 + 0x198) + 8) < 1) {
              pcVar13 = (char *)0x0;
            }
            else {
              pcVar13 = (char *)**(undefined4 **)(*(int *)(iVar4 + 0x198) + 0x14);
            }
            uVar9 = 0xffffffff;
            do {
              pcVar14 = pcVar13;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar14 = pcVar13 + 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar14;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            bVar11 = 0;
            pcVar13 = pcVar14 + -uVar9;
            pcVar14 = acStack_474;
            for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar14 = pcVar14 + 4;
            }
            uStack_10 = uStack_10 & 0xffffff00;
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar14 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar14 = pcVar14 + 1;
            }
            if (DAT_00808aaf != 0) {
              do {
                iVar4 = (uStack_10 & 0xff) * 0x9c;
                if ((((&DAT_00808af7)[iVar4] != '\0') &&
                    ((&DAT_00808af0)[(uStack_10 & 0xff) * 0x27] != DAT_0080877f)) &&
                   ((&DAT_00808af6)[iVar4] != '\0')) {
                  FUN_00715360(DAT_00811764,(&DAT_00808af0)[(uStack_10 & 0xff) * 0x27],'3',
                               acStack_4b4,0x451,1,0xffffffff);
                }
                bVar11 = bVar11 + 1;
                uStack_10 = CONCAT31(uStack_10._1_3_,bVar11);
              } while (bVar11 < DAT_00808aaf);
            }
          }
          else {
            if (cStack_5 == '\0') {
              iVar7 = (bVar11 != 1) + 4;
            }
            else {
              iVar7 = 0;
            }
            if (*(int *)(*(int *)(iVar4 + 0x198) + 8) < 1) {
              iVar4 = 0;
            }
            else {
              iVar4 = **(int **)(*(int *)(iVar4 + 0x198) + 0x14);
            }
            if ((char *)(iVar4 + iVar7) == (char *)0x0) {
              uVar9 = 0xffffffff;
              pcVar13 = &DAT_008016a0;
              do {
                pcVar14 = pcVar13;
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                pcVar14 = pcVar13 + 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar14;
              } while (cVar1 != '\0');
              uVar9 = ~uVar9;
              pcVar13 = pcVar14 + -uVar9;
              pcVar14 = acStack_474;
              for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar14 = pcVar14 + 4;
              }
              for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *pcVar14 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar14 = pcVar14 + 1;
              }
            }
            else {
              uVar9 = 0xffffffff;
              pcVar13 = (char *)(iVar4 + iVar7);
              do {
                pcVar14 = pcVar13;
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                pcVar14 = pcVar13 + 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar14;
              } while (cVar1 != '\0');
              uVar9 = ~uVar9;
              pcVar13 = pcVar14 + -uVar9;
              pcVar14 = acStack_474;
              for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar14 = pcVar14 + 4;
              }
              for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *pcVar14 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar14 = pcVar14 + 1;
              }
              FUN_006b60b0(acStack_474,acStack_474);
            }
            bVar11 = 0;
            uStack_18 = uStack_18 & 0xffffff00;
            if (DAT_00808aaf != 0) {
              uStack_1c = uStack_c & 0xff;
              do {
                if (uStack_1c == 1) {
                  iVar4 = (&DAT_00808af0)[(uStack_18 & 0xff) * 0x27];
                  if (iVar4 != DAT_0080877f) {
                    cVar1 = (&DAT_00808af6)[(uStack_18 & 0xff) * 0x9c];
joined_r0x0052240a:
                    if (cVar1 != '\0') {
                      FUN_00715360(DAT_00811764,iVar4,'3',acStack_4b4,0x451,1,0xffffffff);
                    }
                  }
                }
                else if (uStack_1c == 2) {
                  if (DAT_0080874d < 8) {
                    iVar7 = (uStack_18 & 0xff) * 0x9c;
                    iVar4 = (&DAT_00808af0)[(uStack_18 & 0xff) * 0x27];
                    if (iVar4 != DAT_0080877f) {
                      bVar2 = (&DAT_00808af4)[iVar7];
                      uStack_10 = CONCAT31(uStack_10._1_3_,bVar2);
                      if (DAT_00808a8f == '\0') {
                        if (bVar2 == DAT_0080874d) {
LAB_005223b6:
                          iVar8 = 0;
                        }
                        else {
                          uVar10 = (uint)DAT_0080874d;
                          uVar9 = (uint)bVar2;
                          cVar1 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar10);
                          if ((cVar1 == '\0') &&
                             (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9) == '\0')) {
                            iVar8 = -2;
                          }
                          else if ((cVar1 == '\x01') &&
                                  (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9) == '\0')) {
                            iVar8 = -1;
                          }
                          else if ((cVar1 == '\0') &&
                                  (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9) == '\x01')) {
                            iVar8 = 1;
                          }
                          else {
                            if ((cVar1 != '\x01') ||
                               (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9) != '\x01'))
                            goto LAB_005223b6;
                            iVar8 = 2;
                          }
                        }
                        bVar3 = iVar8 < 0;
                      }
                      else {
                        bVar3 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                                (&DAT_008087ea)[(uint)bVar2 * 0x51];
                      }
                      if (bVar3) {
                        cVar1 = (&DAT_00808af6)[iVar7];
                        goto joined_r0x0052240a;
                      }
                    }
                  }
                }
                else if ((uStack_1c == 3) && (DAT_0080874d < 8)) {
                  iVar7 = (uStack_18 & 0xff) * 0x9c;
                  iVar4 = (&DAT_00808af0)[(uStack_18 & 0xff) * 0x27];
                  if (iVar4 != DAT_0080877f) {
                    bVar2 = (&DAT_00808af4)[iVar7];
                    uStack_c = CONCAT31(uStack_c._1_3_,bVar2);
                    if (DAT_00808a8f == '\0') {
                      if (bVar2 == DAT_0080874d) {
LAB_00522294:
                        iVar8 = 0;
                      }
                      else {
                        uVar10 = (uint)DAT_0080874d;
                        uVar9 = (uint)bVar2;
                        cVar1 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar10);
                        if ((cVar1 == '\0') &&
                           (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9) == '\0')) {
                          iVar8 = -2;
                        }
                        else if ((cVar1 == '\x01') &&
                                (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9) == '\0')) {
                          iVar8 = -1;
                        }
                        else if ((cVar1 == '\0') &&
                                (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9) == '\x01')) {
                          iVar8 = 1;
                        }
                        else {
                          if ((cVar1 != '\x01') ||
                             (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9) != '\x01'))
                          goto LAB_00522294;
                          iVar8 = 2;
                        }
                      }
                      bVar3 = iVar8 < 0;
                    }
                    else {
                      bVar3 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                              (&DAT_008087ea)[(uint)bVar2 * 0x51];
                    }
                    if (!bVar3) {
                      cVar1 = (&DAT_00808af6)[iVar7];
                      goto joined_r0x0052240a;
                    }
                  }
                }
                bVar11 = bVar11 + 1;
                uStack_18 = CONCAT31(uStack_18._1_3_,bVar11);
              } while (bVar11 < DAT_00808aaf);
            }
          }
          wsprintfA((LPSTR)&DAT_0080f33a,s__s>__s_007c40dc,acStack_4b4,acStack_474);
          if (DAT_008016d8 != (void *)0x0) {
            if (DAT_0080874d != 0xff) {
              thunk_FUN_0052d320(DAT_008016d8,(char *)&DAT_0080f33a,(uint)DAT_0080874d);
              DAT_00858df8 = puStack_60;
              return;
            }
            thunk_FUN_0052d320(DAT_008016d8,(char *)&DAT_0080f33a,8);
            DAT_00858df8 = puStack_60;
            return;
          }
        }
      }
      else if (DAT_0080874e != '\0') {
        if (0 < *(int *)(*(int *)(iStack_14 + 0x198) + 8)) {
          thunk_FUN_00522810((char *)**(undefined4 **)(*(int *)(iStack_14 + 0x198) + 0x14));
          DAT_00858df8 = puStack_60;
          return;
        }
        thunk_FUN_00522810((char *)0x0);
      }
      DAT_00858df8 = puStack_60;
      return;
    }
    DAT_00858df8 = puStack_60;
  }
  return;
}

