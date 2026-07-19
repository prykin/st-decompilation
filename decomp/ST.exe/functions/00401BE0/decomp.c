
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall AiEventClassTy::GetMessage(AiEventClassTy *this,STMessage *message)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  AiEventClassTy *this_00;
  AiFltClassTy AVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  AiEventClassTy *pAVar8;
  short *psVar9;
  undefined1 *puVar10;
  AiFltClassTy *pAVar11;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  uint ******ppppppuVar12;
  uint *******pppppppuVar13;
  uint *puVar14;
  undefined2 *puVar15;
  AiPlrClassTy *this_01;
  undefined3 extraout_var_14;
  void *pvVar16;
  undefined3 extraout_var_15;
  undefined3 extraout_var_16;
  undefined3 extraout_var_17;
  undefined3 extraout_var_18;
  undefined3 extraout_var_19;
  undefined3 extraout_var_20;
  undefined3 extraout_var_21;
  undefined3 extraout_var_22;
  undefined3 extraout_var_23;
  undefined3 extraout_var_24;
  undefined3 extraout_var_25;
  undefined3 extraout_var_26;
  undefined3 extraout_var_27;
  undefined3 extraout_var_28;
  undefined3 extraout_var_29;
  undefined3 extraout_var_30;
  undefined3 extraout_var_31;
  undefined3 extraout_var_32;
  undefined3 extraout_var_33;
  undefined3 extraout_var_34;
  undefined3 extraout_var_35;
  undefined3 extraout_var_36;
  undefined3 extraout_var_37;
  short sVar17;
  CPanelTy *pCVar18;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  short sVar19;
  undefined2 uVar23;
  undefined4 extraout_EDX;
  undefined4 uVar20;
  undefined4 extraout_EDX_00;
  uint *******extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  ushort *puVar21;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  uint uVar22;
  char *pcVar24;
  uint *******pppppppuVar25;
  int *piVar26;
  uint ******ppppppuVar27;
  uint uVar28;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar29;
  uint **ppuVar30;
  bool bVar31;
  uint uVar32;
  int iVar33;
  byte abStack_484 [256];
  byte abStack_384 [256];
  InternalExceptionFrame IStack_284;
  uint auStack_240 [2];
  undefined1 uStack_237;
  uint **ppuStack_236;
  uint *puStack_20c;
  undefined2 uStack_208;
  undefined2 uStack_206;
  undefined4 uStack_204;
  undefined2 uStack_200;
  int iStack_1fe;
  undefined2 uStack_1f6;
  undefined2 uStack_1f4;
  undefined2 uStack_1f2;
  undefined1 uStack_1f0;
  char acStack_1ef [15];
  uint uStack_1e0;
  undefined1 uStack_1ce;
  undefined4 auStack_1c0 [4];
  int iStack_1b0;
  undefined4 uStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  uint ******ppppppuStack_190;
  AiFltClassTy *pAStack_18c;
  AiEventClassTy *pAStack_188;
  uint *puStack_184;
  byte *pbStack_180;
  void *pvStack_17c;
  char *pcStack_178;
  int iStack_174;
  AiFltClassTy *pAStack_170;
  short asStack_16c [4];
  AiFltClassTy *pAStack_164;
  AiFltClassTy *pAStack_160;
  uint ******ppppppuStack_15c;
  uint *puStack_158;
  byte *pbStack_154;
  byte *pbStack_150;
  char *pcStack_14c;
  char *pcStack_148;
  AiFltClassTy *pAStack_144;
  uint uStack_140;
  int iStack_13c;
  char *pcStack_138;
  int iStack_134;
  char cStack_9c;
  uint auStack_68 [2];
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined2 uStack_4e;
  undefined1 uStack_4c;
  char cStack_4b;
  undefined4 uStack_4a;
  undefined2 uStack_3b;
  int iStack_39;
  uint ******appppppuStack_34 [8];
  uint uStack_14;
  AiFltClassTy *pAStack_10;
  AiFltClassTy *pAStack_c;
  uint ******ppppppuStack_8;
  
  pbStack_180 = (byte *)0x0;
  iStack_198 = 0;
  if ((DAT_007fa174 != (STAllPlayersC *)0x0) &&
     (pAStack_188 = this, iVar6 = thunk_FUN_0065bd70(this,(int)message,0), -1 < iVar6)) {
    iStack_194 = iVar6;
    uVar7 = (**(code **)(*(int *)this + 0x18))();
    *(undefined4 *)(this + 0x52b) = uVar7;
    if ((iVar6 != 0x456) ||
       ((*(uint *)(DAT_00802a38 + 0xe4) % 0x19 == *(uint *)(this + 0xd2) ||
        (*(uint *)(DAT_00802a38 + 0xe4) == 1)))) {
      iStack_19c = *(int *)(*(int *)(this + 0x4e2) + 8);
      IStack_284.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &IStack_284;
      iVar6 = Library::MSVCRT::__setjmp3(IStack_284.jumpBuffer,0,unaff_EDI,unaff_ESI);
      this_00 = pAStack_188;
      if (iVar6 == 0) {
        uStack_14 = 0;
        iVar6 = *(int *)(pAStack_188 + 0x4ee);
        bVar31 = *(int *)(iVar6 + 0xc) != 0;
        if (0 < *(int *)(iVar6 + 0xc)) {
          do {
            uVar28 = uStack_14;
            if (bVar31) {
              pcVar24 = (char *)(*(int *)(iVar6 + 8) * uStack_14 + *(int *)(iVar6 + 0x1c));
            }
            else {
              pcVar24 = (char *)0x0;
            }
            pcStack_178 = pcVar24;
            if (*pcVar24 == '\0') {
              if (*(int *)(pcVar24 + 5) == iStack_194) {
                if (iStack_198 == 0) {
                  thunk_FUN_0065bd70(this_00,(int)message,1);
                  iStack_198 = 1;
                }
                iVar6 = thunk_FUN_00672440((int)(this_00 + 0x4fa),(int)*(short *)(pcVar24 + 9),
                                           asStack_16c);
                uVar32 = uVar28;
                if (iVar6 < 0) {
                  iVar33 = *(int *)(this_00 + 0x84);
                  pAVar8 = this_00 + 4;
                }
                else {
                  if (cStack_9c == '\b') {
                    if (pAStack_164 != (AiFltClassTy *)0x0) {
                      *pcVar24 = '\x01';
                      pcVar24[0xb] = '\0';
                      pcVar24[0xc] = '\0';
                      pcVar24[0xd] = '\0';
                      pcVar24[0xe] = '\0';
                      iVar6 = *(int *)(pcVar24 + 0xf);
                      pAStack_170 = (AiFltClassTy *)0x0;
                      iStack_174 = 0;
                      pAVar11 = *(AiFltClassTy **)(iVar6 + 0xc);
                      if (0 < (int)pAVar11) {
                        do {
                          if (pAStack_170 < pAVar11) {
                            psVar9 = (short *)(*(int *)(iVar6 + 8) * (int)pAStack_170 +
                                              *(int *)(iVar6 + 0x1c));
                          }
                          else {
                            psVar9 = (short *)0x0;
                          }
                          iVar6 = thunk_FUN_00672440((int)(this_00 + 0x4fa),(int)*psVar9,asStack_16c
                                                    );
                          if (iVar6 < 0) {
                            thunk_FUN_0064d0e0(this_00,iVar6,this_00 + 4,uVar28,-1);
                            goto switchD_00652a7f_caseD_3;
                          }
                          if (iVar6 != 0x19) {
                            iStack_174 = 0;
                          }
                          if (0x593 < iVar6) {
                            if (0x5c8 < iVar6) {
                              if (iVar6 < 0x76d) {
                                if (iVar6 != 0x76c) {
                                  switch(iVar6) {
                                  case 0x5dc:
                                    iVar33 = thunk_FUN_00651010(asStack_16c);
                                    if (iVar33 != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        pAVar11 = (AiFltClassTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                     (uint)pAStack_160,
                                                                     (uint *)appppppuStack_34);
                                        if (0 < (int)pAVar11) {
                                          pppppppuVar25 = appppppuStack_34;
                                          pAStack_c = pAVar11;
                                          do {
                                            thunk_FUN_0064e300((int)*pppppppuVar25,
                                                               (char *)ppppppuStack_15c,
                                                               (short)puStack_158,(char)pbStack_154,
                                                               (short)pbStack_150,(char)pcStack_14c,
                                                               (uint)pcStack_148);
                                            pppppppuVar25 = pppppppuVar25 + 1;
                                            pAStack_c = pAStack_c + -1;
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5dd:
                                    bVar31 = thunk_FUN_00651120((int)asStack_16c);
                                    if (CONCAT31(extraout_var_15,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          pAStack_10 = (AiFltClassTy *)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  pAStack_10 >> 8),*pAStack_10),
                                                  (uint)ppppppuStack_15c);
                                            if (iVar33 == 0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar28,
                                                                 *(uint *)pAStack_10);
                                            }
                                            else {
                                              pvVar16 = (void *)thunk_FUN_00423300(iVar33);
                                              if (pvVar16 == (void *)0x0) {
                                                uVar32 = *(uint *)pAStack_10;
                                                uVar22 = uVar28;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                thunk_FUN_0064d0e0(this_00,-0xab,pcVar24,uVar22,
                                                                   uVar32);
                                              }
                                              else {
                                                thunk_FUN_0065d630(pvVar16,extraout_EDX_04);
                                              }
                                            }
                                            pAStack_10 = pAStack_10 + 4;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5de:
                                    bVar31 = thunk_FUN_00651160((int)asStack_16c);
                                    if (CONCAT31(extraout_var_16,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          pAStack_10 = (AiFltClassTy *)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  pAStack_10 >> 8),*pAStack_10),
                                                  (uint)ppppppuStack_15c);
                                            if (iVar33 == 0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar28,
                                                                 *(uint *)pAStack_10);
                                            }
                                            else {
                                              iVar33 = thunk_FUN_00423300(iVar33);
                                              if (iVar33 == 0) {
                                                uVar32 = *(uint *)pAStack_10;
                                                uVar22 = uVar28;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                thunk_FUN_0064d0e0(this_00,-0xab,pcVar24,uVar22,
                                                                   uVar32);
                                              }
                                              else {
                                                thunk_FUN_0065e6c0(iVar33,extraout_EDX_05);
                                              }
                                            }
                                            pAStack_10 = pAStack_10 + 4;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5df:
                                    bVar31 = thunk_FUN_00651160((int)asStack_16c);
                                    if (CONCAT31(extraout_var_17,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          pAStack_10 = (AiFltClassTy *)appppppuStack_34;
                                          ppppppuStack_8 = (uint ******)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  pAStack_10 >> 8),*pAStack_10),
                                                  (uint)ppppppuStack_15c);
                                            if (iVar33 == 0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar28,
                                                                 *(uint *)pAStack_10);
                                            }
                                            else {
                                              pvStack_17c = (void *)thunk_FUN_00423300(iVar33);
                                              if (pvStack_17c == (void *)0x0) {
                                                uVar32 = *(uint *)pAStack_10;
                                                uVar22 = uVar28;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                thunk_FUN_0064d0e0(this_00,-0xab,pcVar24,uVar22,
                                                                   uVar32);
                                              }
                                              else {
                                                pAStack_c = (AiFltClassTy *)
                                                            thunk_FUN_00676170(*(uint *)pAStack_10);
                                                if (pAStack_c != (AiFltClassTy *)0x0) {
                                                  thunk_FUN_0065d940(pvStack_17c,(int)pAStack_c,0);
                                                  FUN_006ae110((byte *)pAStack_c);
                                                }
                                              }
                                            }
                                            pAStack_10 = pAStack_10 + 4;
                                            ppppppuStack_8 = (uint ******)((int)ppppppuStack_8 + -1)
                                            ;
                                          } while (ppppppuStack_8 != (uint ******)0x0);
                                          ppppppuStack_8 = (uint ******)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5e0:
                                    bVar31 = thunk_FUN_006511a0((int)asStack_16c);
                                    if (CONCAT31(extraout_var_18,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        pAVar11 = (AiFltClassTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                     (uint)pAStack_160,
                                                                     (uint *)appppppuStack_34);
                                        if (0 < (int)pAVar11) {
                                          pppppppuVar25 = appppppuStack_34;
                                          pAStack_c = pAVar11;
                                          uVar7 = extraout_ECX_01;
                                          do {
                                            pvVar16 = (void *)thunk_FUN_0042b760(CONCAT31((int3)((
                                                  uint)uVar7 >> 8),*(undefined1 *)pppppppuVar25),
                                                  (uint)ppppppuStack_15c);
                                            if (pvVar16 == (void *)0x0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar28,
                                                                 (int)*pppppppuVar25);
                                              uVar7 = extraout_ECX_02;
                                            }
                                            else {
                                              thunk_FUN_00424530(pvVar16,(uint)puStack_158);
                                              uVar7 = extraout_ECX_03;
                                            }
                                            pppppppuVar25 = pppppppuVar25 + 1;
                                            pAStack_c = pAStack_c + -1;
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5e1:
                                    bVar31 = thunk_FUN_006511a0((int)asStack_16c);
                                    if (CONCAT31(extraout_var_19,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        pAVar11 = (AiFltClassTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                     (uint)pAStack_160,
                                                                     (uint *)appppppuStack_34);
                                        if (0 < (int)pAVar11) {
                                          pppppppuVar25 = appppppuStack_34;
                                          pAStack_c = pAVar11;
                                          uVar7 = extraout_ECX_04;
                                          do {
                                            pvVar16 = (void *)thunk_FUN_0042b760(CONCAT31((int3)((
                                                  uint)uVar7 >> 8),*(undefined1 *)pppppppuVar25),
                                                  (uint)ppppppuStack_15c);
                                            if (pvVar16 == (void *)0x0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar28,
                                                                 (int)*pppppppuVar25);
                                              uVar7 = extraout_ECX_05;
                                            }
                                            else {
                                              thunk_FUN_00424620(pvVar16,(uint)puStack_158);
                                              uVar7 = extraout_ECX_06;
                                            }
                                            pppppppuVar25 = pppppppuVar25 + 1;
                                            pAStack_c = pAStack_c + -1;
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5e2:
                                    bVar31 = thunk_FUN_006511e0((int)asStack_16c);
                                    if (CONCAT31(extraout_var_20,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          pAStack_10 = (AiFltClassTy *)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  pAStack_10 >> 8),*pAStack_10),
                                                  (uint)ppppppuStack_15c);
                                            if (iVar33 == 0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar28,
                                                                 *(uint *)pAStack_10);
                                            }
                                            else {
                                              pvStack_17c = (void *)thunk_FUN_00423300(iVar33);
                                              if (pvStack_17c == (void *)0x0) {
                                                uVar32 = *(uint *)pAStack_10;
                                                uVar22 = uVar28;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                thunk_FUN_0064d0e0(this_00,-0xab,pcVar24,uVar22,
                                                                   uVar32);
                                              }
                                              else {
                                                pvVar16 = (void *)0x0;
                                                ppppppuStack_8 = (uint ******)0x0;
                                                if (DAT_007fa174 != (STAllPlayersC *)0x0) {
                                                  pvVar16 = (void *)thunk_FUN_004357f0((char)*
                                                  pAStack_10);
                                                }
                                                if (pvVar16 != (void *)0x0) {
                                                  ppppppuStack_8 =
                                                       (uint ******)
                                                       thunk_FUN_00678ef0(pvVar16,(byte *)
                                                  puStack_158);
                                                }
                                                if ((uint *******)ppppppuStack_8 ==
                                                    (uint *******)0x0) {
                                                  thunk_FUN_0064d0e0(this_00,-4,puStack_158,uVar28,
                                                                     *(uint *)pAStack_10);
                                                }
                                                else {
                                                  thunk_FUN_0068e690(ppppppuStack_8,(int)pvStack_17c
                                                                    );
                                                }
                                              }
                                            }
                                            pAStack_10 = pAStack_10 + 4;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5e3:
                                    bVar31 = thunk_FUN_00651250((int)asStack_16c);
                                    if (CONCAT31(extraout_var_21,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          pAStack_10 = (AiFltClassTy *)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  pAStack_10 >> 8),*pAStack_10),
                                                  (uint)ppppppuStack_15c);
                                            if (iVar33 == 0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar28,
                                                                 *(uint *)pAStack_10);
                                            }
                                            else {
                                              iVar33 = thunk_FUN_00423300(iVar33);
                                              if (iVar33 == 0) {
                                                uVar32 = *(uint *)pAStack_10;
                                                uVar22 = uVar28;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                thunk_FUN_0064d0e0(this_00,-0xab,pcVar24,uVar22,
                                                                   uVar32);
                                              }
                                              else {
                                                thunk_FUN_0065d600(iVar33);
                                              }
                                            }
                                            pAStack_10 = pAStack_10 + 4;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5e4:
                                    iVar33 = thunk_FUN_00651290(asStack_16c);
                                    if (iVar33 != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          pAStack_10 = (AiFltClassTy *)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  pAStack_10 >> 8),*pAStack_10),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              uVar22 = *(uint *)pAStack_10;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_006577ae:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 uVar22);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if (((pAVar11 == (AiFltClassTy *)0x0) ||
                                                  (*(short *)(pAVar11 + 0x7b) == 1)) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                uVar22 = *(uint *)pAStack_10;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_006577ae;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5f = SUB41(pbStack_154,0);
                                              uStack_5e = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_5d = (undefined1)((uint)pbStack_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)pbStack_154 >> 0x18);
                                              uStack_59 = SUB41(pcStack_14c,0);
                                              uStack_58 = (undefined1)((uint)pcStack_14c >> 8);
                                              uStack_60 = puStack_158._0_1_;
                                              iVar33 = (int)pAStack_144 * 0x19;
                                              uStack_5b = SUB41(pbStack_150,0);
                                              uStack_5a = (undefined1)((uint)pbStack_150 >> 8);
                                              auStack_68[0] = 1;
                                              uStack_57 = SUB41(pcStack_148,0);
                                              uStack_56 = (undefined1)((uint)pcStack_148 >> 8);
                                              uStack_55 = (undefined1)((uint)pcStack_148 >> 0x10);
                                              uStack_54 = (undefined1)((uint)pcStack_148 >> 0x18);
                                              uStack_53 = (undefined1)iVar33;
                                              uStack_52 = (undefined1)((uint)iVar33 >> 8);
                                              uStack_51 = (undefined1)((uint)iVar33 >> 0x10);
                                              uStack_50 = (undefined1)((uint)iVar33 >> 0x18);
                                              iVar33 = uStack_140 * 0x19;
                                              uStack_4f = (undefined1)iVar33;
                                              uStack_4e = (undefined2)((uint)iVar33 >> 8);
                                              uStack_4c = (undefined1)((uint)iVar33 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            pAStack_10 = pAStack_10 + 4;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5e5:
                                    bVar31 = thunk_FUN_006514d0(asStack_16c);
                                    if (CONCAT31(extraout_var_22,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          pAStack_10 = (AiFltClassTy *)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  pAStack_10 >> 8),*pAStack_10),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              uVar22 = *(uint *)pAStack_10;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_00657a41:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 uVar22);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if (((pAVar11 == (AiFltClassTy *)0x0) ||
                                                  (*(short *)(pAVar11 + 0x7b) == 1)) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                uVar22 = *(uint *)pAStack_10;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_00657a41;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5f = SUB41(pbStack_154,0);
                                              uStack_5e = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_5d = (undefined1)((uint)pbStack_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)pbStack_154 >> 0x18);
                                              uStack_59 = SUB41(pcStack_14c,0);
                                              uStack_58 = (undefined1)((uint)pcStack_14c >> 8);
                                              uStack_60 = puStack_158._0_1_;
                                              iVar33 = (int)pcStack_148 * 0x19;
                                              uStack_5b = SUB41(pbStack_150,0);
                                              uStack_5a = (undefined1)((uint)pbStack_150 >> 8);
                                              auStack_68[0] = 2;
                                              uStack_57 = (undefined1)iVar33;
                                              uStack_56 = (undefined1)((uint)iVar33 >> 8);
                                              uStack_55 = (undefined1)((uint)iVar33 >> 0x10);
                                              uStack_54 = (undefined1)((uint)iVar33 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            pAStack_10 = pAStack_10 + 4;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5e6:
                                    iVar33 = thunk_FUN_006513c0(asStack_16c);
                                    if (iVar33 != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          pAStack_10 = (AiFltClassTy *)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  pAStack_10 >> 8),*pAStack_10),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              uVar22 = *(uint *)pAStack_10;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_006578fe:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 uVar22);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if (((pAVar11 == (AiFltClassTy *)0x0) ||
                                                  (*(short *)(pAVar11 + 0x7b) == 1)) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                uVar22 = *(uint *)pAStack_10;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_006578fe;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5f = SUB41(pbStack_154,0);
                                              uStack_5e = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_5d = (undefined1)((uint)pbStack_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)pbStack_154 >> 0x18);
                                              uStack_60 = puStack_158._0_1_;
                                              uStack_59 = SUB41(pcStack_14c,0);
                                              uStack_58 = (undefined1)((uint)pcStack_14c >> 8);
                                              uStack_5b = SUB41(pbStack_150,0);
                                              uStack_5a = (undefined1)((uint)pbStack_150 >> 8);
                                              uStack_53 = SUB41(pcStack_148,0);
                                              uStack_52 = (undefined1)((uint)pcStack_148 >> 8);
                                              uStack_51 = (undefined1)((uint)pcStack_148 >> 0x10);
                                              uStack_50 = (undefined1)((uint)pcStack_148 >> 0x18);
                                              iVar33 = (int)pAStack_144 * 0x19;
                                              auStack_68[0] = 3;
                                              uStack_57 = (undefined1)iVar33;
                                              uStack_56 = (undefined1)((uint)iVar33 >> 8);
                                              uStack_55 = (undefined1)((uint)iVar33 >> 0x10);
                                              uStack_54 = (undefined1)((uint)iVar33 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            pAStack_10 = pAStack_10 + 4;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5e7:
                                    iVar33 = thunk_FUN_006515b0(asStack_16c);
                                    if (iVar33 != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_00657bce:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAStack_10 = (AiFltClassTy *)
                                                           thunk_FUN_00423300(iVar33);
                                              if ((pAStack_10 == (AiFltClassTy *)0x0) ||
                                                 (*(short *)(pAStack_10 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_00657bce;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              uVar28 = (uint)puStack_158 & 0x3fffffff;
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_60 = (undefined1)uVar28;
                                              uStack_5f = (undefined1)(uVar28 >> 8);
                                              uStack_5e = (undefined1)(uVar28 >> 0x10);
                                              uStack_5d = (undefined1)(uVar28 >> 0x18);
                                              uVar28 = (uint)pbStack_154 & 0x3fffffff;
                                              uStack_54 = SUB41(pcStack_14c,0);
                                              uStack_53 = (undefined1)((uint)pcStack_14c >> 8);
                                              uStack_5c = (undefined1)uVar28;
                                              uStack_5b = (undefined1)(uVar28 >> 8);
                                              uStack_5a = (undefined1)(uVar28 >> 0x10);
                                              uStack_59 = (undefined1)(uVar28 >> 0x18);
                                              uVar28 = (uint)pbStack_150 & 0x3fffffff;
                                              uStack_4e = (undefined2)uStack_140;
                                              uStack_58 = (undefined1)uVar28;
                                              uStack_57 = (undefined1)(uVar28 >> 8);
                                              uStack_56 = (undefined1)(uVar28 >> 0x10);
                                              uStack_55 = (undefined1)(uVar28 >> 0x18);
                                              uStack_52 = SUB41(pcStack_148,0);
                                              uStack_51 = (undefined1)((uint)pcStack_148 >> 8);
                                              auStack_68[0] = 4;
                                              uStack_50 = SUB41(pAStack_144,0);
                                              uStack_4f = (undefined1)((uint)pAStack_144 >> 8);
                                              uStack_4c = (undefined1)iStack_13c;
                                              pcVar24 = pcStack_138;
                                              if (pcStack_138 == (char *)0x0) {
                                                pcVar24 = &DAT_008016a0;
                                              }
                                              Library::MSVCRT::_strncpy(&cStack_4b,pcVar24,0xe);
                                              AiFltClassTy::GetAiMess(pAStack_10,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5e8:
                                    bVar31 = thunk_FUN_00651730((int)asStack_16c);
                                    if (CONCAT31(extraout_var_23,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_00657ccf:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if ((pAVar11 == (AiFltClassTy *)0x0) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_00657ccf;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              auStack_68[0] = 5;
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5e9:
                                    iVar33 = thunk_FUN_00651770((int)asStack_16c);
                                    if (iVar33 != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_00657dd9:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if ((pAVar11 == (AiFltClassTy *)0x0) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_00657dd9;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_60 = puStack_158._0_1_;
                                              auStack_68[0] = 6;
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5ea:
                                    bVar31 = thunk_FUN_006517c0(asStack_16c);
                                    if (CONCAT31(extraout_var_24,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_00657f1c:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if (((pAVar11 == (AiFltClassTy *)0x0) ||
                                                  (*(short *)(pAVar11 + 0x7b) == 1)) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_00657f1c;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5f = SUB41(pbStack_154,0);
                                              uStack_5e = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_5d = (undefined1)((uint)pbStack_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)pbStack_154 >> 0x18);
                                              uStack_59 = SUB41(pcStack_14c,0);
                                              uStack_58 = (undefined1)((uint)pcStack_14c >> 8);
                                              uStack_60 = puStack_158._0_1_;
                                              iVar33 = (int)pcStack_148 * 0x19;
                                              uStack_5b = SUB41(pbStack_150,0);
                                              uStack_5a = (undefined1)((uint)pbStack_150 >> 8);
                                              auStack_68[0] = 7;
                                              uStack_57 = (undefined1)iVar33;
                                              uStack_56 = (undefined1)((uint)iVar33 >> 8);
                                              uStack_55 = (undefined1)((uint)iVar33 >> 0x10);
                                              uStack_54 = (undefined1)((uint)iVar33 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5eb:
                                    bVar31 = thunk_FUN_00651880((int)asStack_16c);
                                    if (CONCAT31(extraout_var_25,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_0065806e:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if (((pAVar11 == (AiFltClassTy *)0x0) ||
                                                  (*(short *)(pAVar11 + 0x7b) == 1)) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_0065806e;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_60 = SUB41(puStack_158,0);
                                              uStack_5f = (undefined1)((uint)puStack_158 >> 8);
                                              uStack_5c = SUB41(pbStack_150,0);
                                              uStack_5b = (undefined1)((uint)pbStack_150 >> 8);
                                              uStack_5e = SUB41(pbStack_154,0);
                                              uStack_5d = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_58 = SUB41(pcStack_148,0);
                                              uStack_57 = (undefined1)((uint)pcStack_148 >> 8);
                                              uStack_5a = SUB41(pcStack_14c,0);
                                              uStack_59 = (undefined1)((uint)pcStack_14c >> 8);
                                              auStack_68[0] = 8;
                                              uStack_56 = SUB41(pAStack_144,0);
                                              uStack_55 = (undefined1)((uint)pAStack_144 >> 8);
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5ec:
                                    bVar31 = thunk_FUN_006518c0((int)asStack_16c);
                                    if (CONCAT31(extraout_var_26,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_00658177:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if (((pAVar11 == (AiFltClassTy *)0x0) ||
                                                  (*(short *)(pAVar11 + 0x7b) == 1)) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_00658177;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              auStack_68[0] = 9;
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5ed:
                                    iVar33 = thunk_FUN_00651df0(asStack_16c);
                                    if (iVar33 != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_00658b70:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if (((pAVar11 == (AiFltClassTy *)0x0) ||
                                                  (*(short *)(pAVar11 + 0x7b) == 1)) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_00658b70;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5e = SUB41(pbStack_154,0);
                                              uStack_5d = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_50 = SUB41(pcStack_14c,0);
                                              uStack_4f = (undefined1)((uint)pcStack_14c >> 8);
                                              uStack_4e = (undefined2)((uint)pcStack_14c >> 0x10);
                                              uStack_60 = SUB41(puStack_158,0);
                                              uStack_5f = (undefined1)((uint)puStack_158 >> 8);
                                              iVar33 = (int)pcStack_148 * 0x19;
                                              uStack_5c = SUB41(pbStack_150,0);
                                              uStack_5b = (undefined1)((uint)pbStack_150 >> 8);
                                              auStack_68[0] = 0x34;
                                              uStack_5a = (undefined1)iVar33;
                                              uStack_59 = (undefined1)((uint)iVar33 >> 8);
                                              uStack_58 = (undefined1)((uint)iVar33 >> 0x10);
                                              uStack_57 = (undefined1)((uint)iVar33 >> 0x18);
                                              uStack_54 = (undefined1)uStack_140;
                                              uStack_53 = (undefined1)(uStack_140 >> 8);
                                              uStack_56 = SUB41(pAStack_144,0);
                                              uStack_55 = (undefined1)((uint)pAStack_144 >> 8);
                                              uStack_52 = (undefined1)iStack_13c;
                                              uStack_51 = (undefined1)((uint)iStack_13c >> 8);
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5ee:
                                    bVar31 = thunk_FUN_00651ed0(asStack_16c);
                                    if (CONCAT31(extraout_var_29,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_00658d01:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAStack_10 = (AiFltClassTy *)
                                                           thunk_FUN_00423300(iVar33);
                                              if (((pAStack_10 == (AiFltClassTy *)0x0) ||
                                                  (*(short *)(pAStack_10 + 0x7b) == 1)) ||
                                                 (*(short *)(pAStack_10 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_00658d01;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_58 = SUB41(puStack_158,0);
                                              uStack_57 = (undefined1)((uint)puStack_158 >> 8);
                                              uStack_56 = (undefined1)((uint)puStack_158 >> 0x10);
                                              uStack_55 = (undefined1)((uint)puStack_158 >> 0x18);
                                              uStack_4c = SUB41(pcStack_14c,0);
                                              cStack_4b = (char)((uint)pcStack_14c >> 8);
                                              auStack_68[0] = 0x32;
                                              uStack_50 = SUB41(pbStack_154,0);
                                              uStack_4f = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_4e = (undefined2)((uint)pbStack_154 >> 0x10);
                                              uStack_54 = SUB41(pbStack_150,0);
                                              uStack_53 = (undefined1)((uint)pbStack_150 >> 8);
                                              uStack_52 = (undefined1)((uint)pbStack_150 >> 0x10);
                                              uStack_51 = (undefined1)((uint)pbStack_150 >> 0x18);
                                              pcVar24 = pcStack_148;
                                              if (pcStack_148 == (char *)0x0) {
                                                pcVar24 = &DAT_008016a0;
                                              }
                                              Library::MSVCRT::_strncpy
                                                        ((char *)&uStack_4a,pcVar24,0xe);
                                              uStack_5b = (undefined1)(uStack_140 >> 8);
                                              uStack_5c = 0;
                                              uStack_5a = 0;
                                              uStack_59 = 0;
                                              uStack_3b = pAStack_144._0_2_;
                                              iStack_39 = iStack_13c * 0x19;
                                              uStack_60 = (undefined1)uStack_140;
                                              uStack_5f = 0;
                                              uStack_5e = 0;
                                              uStack_5d = 0;
                                              AiFltClassTy::GetAiMess(pAStack_10,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5ef:
                                    bVar31 = thunk_FUN_00652030(asStack_16c);
                                    if (CONCAT31(extraout_var_30,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_00658e8e:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if (((pAVar11 == (AiFltClassTy *)0x0) ||
                                                  (*(short *)(pAVar11 + 0x7b) == 1)) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_00658e8e;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_58 = SUB41(puStack_158,0);
                                              uStack_57 = (undefined1)((uint)puStack_158 >> 8);
                                              uStack_56 = SUB41(pbStack_154,0);
                                              uStack_55 = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_54 = SUB41(pbStack_150,0);
                                              uStack_53 = (undefined1)((uint)pbStack_150 >> 8);
                                              uStack_52 = SUB41(pcStack_14c,0);
                                              uStack_51 = (undefined1)((uint)pcStack_14c >> 8);
                                              uStack_50 = SUB41(pcStack_148,0);
                                              uStack_4f = (undefined1)((uint)pcStack_148 >> 8);
                                              uStack_4e = pAStack_144._0_2_;
                                              uStack_4c = (undefined1)uStack_140;
                                              cStack_4b = (char)(uStack_140 >> 8);
                                              uStack_5b = (undefined1)((uint)iStack_13c >> 8);
                                              uStack_5c = 0;
                                              uStack_5a = 0;
                                              uStack_59 = 0;
                                              uStack_60 = (undefined1)iStack_13c;
                                              uStack_5f = 0;
                                              uStack_5e = 0;
                                              uStack_5d = 0;
                                              uStack_4a = (int)pcStack_138 * 0x19;
                                              auStack_68[0] = 0x33;
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5f0:
                                    bVar31 = thunk_FUN_00652100(asStack_16c);
                                    if (CONCAT31(extraout_var_31,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_00658fc8:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if (((pAVar11 == (AiFltClassTy *)0x0) ||
                                                  (*(short *)(pAVar11 + 0x7b) == 1)) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_00658fc8;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5a = SUB41(pbStack_154,0);
                                              uStack_59 = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_5c = SUB41(puStack_158,0);
                                              uStack_5b = (undefined1)((uint)puStack_158 >> 8);
                                              uStack_60 = SUB41(pbStack_150,0);
                                              uStack_5f = (undefined1)((uint)pbStack_150 >> 8);
                                              uStack_5e = (undefined1)((uint)pbStack_150 >> 0x10);
                                              uStack_5d = (undefined1)((uint)pbStack_150 >> 0x18);
                                              iVar33 = (int)pcStack_14c * 0x19;
                                              auStack_68[0] = 0x35;
                                              uStack_58 = (undefined1)iVar33;
                                              uStack_57 = (undefined1)((uint)iVar33 >> 8);
                                              uStack_56 = (undefined1)((uint)iVar33 >> 0x10);
                                              uStack_55 = (undefined1)((uint)iVar33 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5f1:
                                    bVar31 = thunk_FUN_00651900(asStack_16c);
                                    if (CONCAT31(extraout_var_27,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_006582b3:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if ((pAVar11 == (AiFltClassTy *)0x0) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_006582b3;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_60 = puStack_158._0_1_;
                                              uStack_5f = SUB41(pbStack_154,0);
                                              uStack_5e = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_5d = SUB41(pbStack_150,0);
                                              uStack_5c = (undefined1)((uint)pbStack_150 >> 8);
                                              uStack_5b = SUB41(pcStack_14c,0);
                                              uStack_5a = (undefined1)((uint)pcStack_14c >> 8);
                                              uStack_59 = (undefined1)((uint)pcStack_14c >> 0x10);
                                              uStack_58 = (undefined1)((uint)pcStack_14c >> 0x18);
                                              uStack_57 = SUB41(pcStack_148,0);
                                              uStack_56 = (undefined1)((uint)pcStack_148 >> 8);
                                              uStack_55 = (undefined1)((uint)pcStack_148 >> 0x10);
                                              uStack_54 = (undefined1)((uint)pcStack_148 >> 0x18);
                                              auStack_68[0] = 10;
                                              uStack_53 = 0;
                                              uStack_52 = 0;
                                              uStack_51 = 0;
                                              uStack_50 = 0;
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5f2:
                                    iVar33 = thunk_FUN_006519e0(asStack_16c);
                                    if (iVar33 != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_00658416:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if (pAVar11 == (AiFltClassTy *)0x0) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_00658416;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5f = SUB41(pbStack_154,0);
                                              uStack_5e = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_5b = SUB41(pcStack_14c,0);
                                              uStack_5a = (undefined1)((uint)pcStack_14c >> 8);
                                              uStack_60 = puStack_158._0_1_;
                                              iVar33 = (int)pAStack_144 * 0x19;
                                              uStack_5d = SUB41(pbStack_150,0);
                                              uStack_5c = (undefined1)((uint)pbStack_150 >> 8);
                                              auStack_68[0] = 0xb;
                                              uStack_4f = SUB41(pcStack_148,0);
                                              uStack_4e = (undefined2)((uint)pcStack_148 >> 8);
                                              uStack_4c = (undefined1)((uint)pcStack_148 >> 0x18);
                                              uStack_59 = (undefined1)iVar33;
                                              uStack_58 = (undefined1)((uint)iVar33 >> 8);
                                              uStack_57 = (undefined1)((uint)iVar33 >> 0x10);
                                              uStack_56 = (undefined1)((uint)iVar33 >> 0x18);
                                              uStack_55 = (undefined1)uStack_140;
                                              uStack_54 = (undefined1)(uStack_140 >> 8);
                                              uStack_53 = (undefined1)iStack_13c;
                                              uStack_52 = (undefined1)((uint)iStack_13c >> 8);
                                              uStack_51 = SUB41(pcStack_138,0);
                                              uStack_50 = (undefined1)((uint)pcStack_138 >> 8);
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5f3:
                                    iVar33 = thunk_FUN_00651b40(asStack_16c);
                                    if (iVar33 != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_00658543:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if (((pAVar11 == (AiFltClassTy *)0x0) ||
                                                  (*(short *)(pAVar11 + 0x7b) == 1)) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_00658543;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5f = SUB41(pbStack_154,0);
                                              uStack_5e = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_5d = (undefined1)((uint)pbStack_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)pbStack_154 >> 0x18);
                                              uStack_60 = puStack_158._0_1_;
                                              auStack_68[0] = 0xc;
                                              iVar33 = (int)pbStack_150 * 0x19;
                                              uStack_5b = (undefined1)iVar33;
                                              uStack_5a = (undefined1)((uint)iVar33 >> 8);
                                              uStack_59 = (undefined1)((uint)iVar33 >> 0x10);
                                              uStack_58 = (undefined1)((uint)iVar33 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5f4:
                                    iVar33 = thunk_FUN_00651bd0(asStack_16c);
                                    if (iVar33 != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_00658670:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if (((pAVar11 == (AiFltClassTy *)0x0) ||
                                                  (*(short *)(pAVar11 + 0x7b) == 1)) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_00658670;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5f = SUB41(pbStack_154,0);
                                              uStack_5e = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_5d = (undefined1)((uint)pbStack_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)pbStack_154 >> 0x18);
                                              uStack_60 = puStack_158._0_1_;
                                              auStack_68[0] = 0xd;
                                              iVar33 = (int)pbStack_150 * 0x19;
                                              uStack_5b = (undefined1)iVar33;
                                              uStack_5a = (undefined1)((uint)iVar33 >> 8);
                                              uStack_59 = (undefined1)((uint)iVar33 >> 0x10);
                                              uStack_58 = (undefined1)((uint)iVar33 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5f5:
                                    iVar33 = thunk_FUN_00651cd0(asStack_16c);
                                    if (iVar33 != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_006587e2:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if (((pAVar11 == (AiFltClassTy *)0x0) ||
                                                  (*(short *)(pAVar11 + 0x7b) == 1)) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_006587e2;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5e = SUB41(pbStack_154,0);
                                              uStack_5d = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_50 = SUB41(pcStack_14c,0);
                                              uStack_4f = (undefined1)((uint)pcStack_14c >> 8);
                                              uStack_4e = (undefined2)((uint)pcStack_14c >> 0x10);
                                              uStack_60 = SUB41(puStack_158,0);
                                              uStack_5f = (undefined1)((uint)puStack_158 >> 8);
                                              iVar33 = (int)pcStack_148 * 0x19;
                                              uStack_5c = SUB41(pbStack_150,0);
                                              uStack_5b = (undefined1)((uint)pbStack_150 >> 8);
                                              auStack_68[0] = 0xe;
                                              uStack_5a = (undefined1)iVar33;
                                              uStack_59 = (undefined1)((uint)iVar33 >> 8);
                                              uStack_58 = (undefined1)((uint)iVar33 >> 0x10);
                                              uStack_57 = (undefined1)((uint)iVar33 >> 0x18);
                                              uStack_54 = (undefined1)uStack_140;
                                              uStack_53 = (undefined1)(uStack_140 >> 8);
                                              uStack_56 = SUB41(pAStack_144,0);
                                              uStack_55 = (undefined1)((uint)pAStack_144 >> 8);
                                              uStack_52 = (undefined1)iStack_13c;
                                              uStack_51 = (undefined1)((uint)iStack_13c >> 8);
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5f6:
                                    bVar31 = thunk_FUN_00651db0((int)asStack_16c);
                                    if (CONCAT31(extraout_var_28,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_006588eb:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if (((pAVar11 == (AiFltClassTy *)0x0) ||
                                                  (*(short *)(pAVar11 + 0x7b) == 1)) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_006588eb;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              auStack_68[0] = 0xf;
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5f7:
                                    iVar33 = thunk_FUN_00651c60(asStack_16c);
                                    if (iVar33 != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_006589fe:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if ((pAVar11 == (AiFltClassTy *)0x0) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_006589fe;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_60 = puStack_158._0_1_;
                                              auStack_68[0] = 0x10;
                                              uStack_5f = SUB41(pbStack_154,0);
                                              uStack_5e = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_5d = (undefined1)((uint)pbStack_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)pbStack_154 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5f8:
                                    bVar31 = thunk_FUN_006521c0(asStack_16c);
                                    if (CONCAT31(extraout_var_32,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_00659143:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if (((pAVar11 == (AiFltClassTy *)0x0) ||
                                                  (*(short *)(pAVar11 + 0x7b) == 1)) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_00659143;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_58 = SUB41(pbStack_154,0);
                                              uStack_57 = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_54 = SUB41(pcStack_14c,0);
                                              uStack_53 = (undefined1)((uint)pcStack_14c >> 8);
                                              uStack_5c = SUB41(puStack_158,0);
                                              uStack_5b = (undefined1)((uint)puStack_158 >> 8);
                                              uStack_5a = (undefined1)((uint)puStack_158 >> 0x10);
                                              uStack_59 = (undefined1)((uint)puStack_158 >> 0x18);
                                              uStack_50 = SUB41(pAStack_144,0);
                                              uStack_4f = (undefined1)((uint)pAStack_144 >> 8);
                                              uStack_56 = SUB41(pbStack_150,0);
                                              uStack_55 = (undefined1)((uint)pbStack_150 >> 8);
                                              uStack_60 = (undefined1)iStack_13c;
                                              uStack_5f = (undefined1)((uint)iStack_13c >> 8);
                                              uStack_5e = (undefined1)((uint)iStack_13c >> 0x10);
                                              uStack_5d = (undefined1)((uint)iStack_13c >> 0x18);
                                              uStack_52 = SUB41(pcStack_148,0);
                                              uStack_51 = (undefined1)((uint)pcStack_148 >> 8);
                                              iVar33 = (int)pcStack_138 * 0x19;
                                              uStack_4e = (undefined2)uStack_140;
                                              auStack_68[0] = 0x36;
                                              uStack_4c = (undefined1)iVar33;
                                              cStack_4b = (char)((uint)iVar33 >> 8);
                                              uStack_4a._0_2_ = (undefined2)((uint)iVar33 >> 0x10);
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5f9:
                                    bVar31 = thunk_FUN_00652460(asStack_16c);
                                    if (CONCAT31(extraout_var_34,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_006594ec:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if (((pAVar11 == (AiFltClassTy *)0x0) ||
                                                  (*(short *)(pAVar11 + 0x7b) == 1)) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_006594ec;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5a = SUB41(pbStack_154,0);
                                              uStack_59 = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_5c = SUB41(puStack_158,0);
                                              uStack_5b = (undefined1)((uint)puStack_158 >> 8);
                                              uStack_56 = SUB41(pcStack_14c,0);
                                              uStack_55 = (undefined1)((uint)pcStack_14c >> 8);
                                              uStack_58 = SUB41(pbStack_150,0);
                                              uStack_57 = (undefined1)((uint)pbStack_150 >> 8);
                                              uStack_52 = SUB41(pAStack_144,0);
                                              uStack_51 = (undefined1)((uint)pAStack_144 >> 8);
                                              uStack_54 = SUB41(pcStack_148,0);
                                              uStack_53 = (undefined1)((uint)pcStack_148 >> 8);
                                              uStack_60 = (undefined1)uStack_140;
                                              uStack_5f = (undefined1)(uStack_140 >> 8);
                                              uStack_5e = (undefined1)(uStack_140 >> 0x10);
                                              uStack_5d = (undefined1)(uStack_140 >> 0x18);
                                              iVar33 = iStack_13c * 0x19;
                                              auStack_68[0] = 0x37;
                                              uStack_50 = (undefined1)iVar33;
                                              uStack_4f = (undefined1)((uint)iVar33 >> 8);
                                              uStack_4e = (undefined2)((uint)iVar33 >> 0x10);
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5fa:
                                    bVar31 = thunk_FUN_00652540(asStack_16c);
                                    if (CONCAT31(extraout_var_35,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_00659640:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if (((pAVar11 == (AiFltClassTy *)0x0) ||
                                                  (*(short *)(pAVar11 + 0x7b) == 1)) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_00659640;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5a = SUB41(pbStack_154,0);
                                              uStack_59 = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_5c = SUB41(puStack_158,0);
                                              uStack_5b = (undefined1)((uint)puStack_158 >> 8);
                                              uStack_56 = SUB41(pcStack_14c,0);
                                              uStack_55 = (undefined1)((uint)pcStack_14c >> 8);
                                              uStack_58 = SUB41(pbStack_150,0);
                                              uStack_57 = (undefined1)((uint)pbStack_150 >> 8);
                                              uStack_60 = SUB41(pcStack_148,0);
                                              uStack_5f = (undefined1)((uint)pcStack_148 >> 8);
                                              uStack_5e = (undefined1)((uint)pcStack_148 >> 0x10);
                                              uStack_5d = (undefined1)((uint)pcStack_148 >> 0x18);
                                              iVar33 = (int)pAStack_144 * 0x19;
                                              auStack_68[0] = 0x38;
                                              uStack_54 = (undefined1)iVar33;
                                              uStack_53 = (undefined1)((uint)iVar33 >> 8);
                                              uStack_52 = (undefined1)((uint)iVar33 >> 0x10);
                                              uStack_51 = (undefined1)((uint)iVar33 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5fb:
                                    bVar31 = thunk_FUN_006525e0(asStack_16c);
                                    if (CONCAT31(extraout_var_36,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_00659785:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if (((pAVar11 == (AiFltClassTy *)0x0) ||
                                                  (*(short *)(pAVar11 + 0x7b) == 1)) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_00659785;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5a = SUB41(pbStack_154,0);
                                              uStack_59 = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_60 = SUB41(pcStack_14c,0);
                                              uStack_5f = (undefined1)((uint)pcStack_14c >> 8);
                                              uStack_5e = (undefined1)((uint)pcStack_14c >> 0x10);
                                              uStack_5d = (undefined1)((uint)pcStack_14c >> 0x18);
                                              uStack_5c = SUB41(puStack_158,0);
                                              uStack_5b = (undefined1)((uint)puStack_158 >> 8);
                                              iVar33 = (int)pcStack_148 * 0x19;
                                              uStack_58 = SUB41(pbStack_150,0);
                                              uStack_57 = (undefined1)((uint)pbStack_150 >> 8);
                                              auStack_68[0] = 0x39;
                                              uStack_56 = (undefined1)iVar33;
                                              uStack_55 = (undefined1)((uint)iVar33 >> 8);
                                              uStack_54 = (undefined1)((uint)iVar33 >> 0x10);
                                              uStack_53 = (undefined1)((uint)iVar33 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5fc:
                                    bVar31 = thunk_FUN_00652670(asStack_16c);
                                    if (CONCAT31(extraout_var_37,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_006598ca:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if (((pAVar11 == (AiFltClassTy *)0x0) ||
                                                  (*(short *)(pAVar11 + 0x7b) == 1)) ||
                                                 (*(short *)(pAVar11 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_006598ca;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5a = SUB41(pbStack_154,0);
                                              uStack_59 = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_60 = SUB41(pcStack_14c,0);
                                              uStack_5f = (undefined1)((uint)pcStack_14c >> 8);
                                              uStack_5e = (undefined1)((uint)pcStack_14c >> 0x10);
                                              uStack_5d = (undefined1)((uint)pcStack_14c >> 0x18);
                                              uStack_5c = SUB41(puStack_158,0);
                                              uStack_5b = (undefined1)((uint)puStack_158 >> 8);
                                              iVar33 = (int)pcStack_148 * 0x19;
                                              uStack_58 = SUB41(pbStack_150,0);
                                              uStack_57 = (undefined1)((uint)pbStack_150 >> 8);
                                              auStack_68[0] = 0x3a;
                                              uStack_56 = (undefined1)iVar33;
                                              uStack_55 = (undefined1)((uint)iVar33 >> 8);
                                              uStack_54 = (undefined1)((uint)iVar33 >> 0x10);
                                              uStack_53 = (undefined1)((uint)iVar33 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5fd:
                                    bVar31 = thunk_FUN_00652300(asStack_16c);
                                    if (CONCAT31(extraout_var_33,bVar31) != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_0065937a:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAStack_10 = (AiFltClassTy *)
                                                           thunk_FUN_00423300(iVar33);
                                              uVar22 = uStack_140;
                                              if ((pAStack_10 == (AiFltClassTy *)0x0) ||
                                                 (*(short *)(pAStack_10 + 0x7b) == -0x8000)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_0065937a;
                                              }
                                              ppuVar30 = &puStack_20c;
                                              for (iVar33 = 0x12; puVar14 = puStack_158, iVar33 != 0
                                                  ; iVar33 = iVar33 + -1) {
                                                *ppuVar30 = (uint *)0x0;
                                                ppuVar30 = ppuVar30 + 1;
                                              }
                                              *(undefined2 *)ppuVar30 = 0;
                                              puStack_20c = puVar14;
                                              uStack_208 = 0xffff;
                                              uStack_206 = 0x5622;
                                              uStack_204 = 0xfffffff0;
                                              uStack_200 = 0xfffe;
                                              if (-1 < (int)uVar22) {
                                                uStack_200 = (undefined2)uVar22;
                                              }
                                              iStack_1fe = (int)pcStack_138 * 0x19;
                                              uStack_1f6 = pbStack_154._0_2_;
                                              uStack_1f4 = pbStack_150._0_2_;
                                              uStack_1f2 = pcStack_14c._0_2_;
                                              if (((int)pcStack_148 < 0) ||
                                                 (pcVar24 = pcStack_148, 7 < (int)pcStack_148)) {
                                                AVar4 = pAStack_10[0x81];
                                                pcVar24 = (char *)(uint)(byte)AVar4;
                                                if (((char)AVar4 < '\0') || ('\a' < (char)AVar4)) {
                                                  pcVar24 = (char *)(uint)(byte)pAStack_10[0x24];
                                                }
                                              }
                                              uStack_1f0 = SUB41(pcVar24,0);
                                              if (pAStack_144 != (AiFltClassTy *)0x0) {
                                                Library::MSVCRT::_strncpy
                                                          (acStack_1ef,(char *)pAStack_144,0xe);
                                                uVar22 = uStack_140;
                                              }
                                              if ((((puStack_20c == (uint *)0xdd) ||
                                                   (puStack_20c == (uint *)0xde)) ||
                                                  (puStack_20c == (uint *)0xe2)) ||
                                                 (puStack_20c == (uint *)0xdc)) {
                                                bVar2 = 1;
                                              }
                                              else {
                                                bVar2 = 0;
                                              }
                                              uStack_1e0 = -(uint)bVar2 & uVar22;
                                              puVar14 = auStack_240;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              ppuStack_236 = &puStack_20c;
                                              uStack_1ce = 1;
                                              auStack_240[0] = 0x68;
                                              uStack_237 = 1;
                                              AiFltClassTy::GetAiMess(pAStack_10,auStack_240);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5fe:
                                    iVar33 = thunk_FUN_00652700(asStack_16c);
                                    if (iVar33 != 0) {
                                      iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                        iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                    (uint)pAStack_160,
                                                                    (uint *)appppppuStack_34);
                                        if (0 < iVar33) {
                                          ppppppuStack_8 = (uint ******)appppppuStack_34;
                                          pAStack_c = (AiFltClassTy *)iVar33;
                                          do {
                                            iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppuStack_8 >> 8),*(char *)ppppppuStack_8),
                                                  (uint)ppppppuStack_15c);
                                            uVar32 = uVar28;
                                            if (iVar33 == 0) {
                                              ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                              pcVar24 = &DAT_008016a0;
                                              iVar33 = -0xaa;
LAB_00659a1c:
                                              thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,
                                                                 (int)ppppppuVar12);
                                            }
                                            else {
                                              pAVar11 = (AiFltClassTy *)thunk_FUN_00423300(iVar33);
                                              if ((pAVar11 == (AiFltClassTy *)0x0) ||
                                                 (*(short *)(pAVar11 + 0x7b) != 1)) {
                                                ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                                pcVar24 = thunk_FUN_00674af0(iVar6);
                                                iVar33 = -0xab;
                                                goto LAB_00659a1c;
                                              }
                                              puVar14 = auStack_68;
                                              for (iVar33 = 0xd; iVar33 != 0; iVar33 = iVar33 + -1)
                                              {
                                                *puVar14 = 0;
                                                puVar14 = puVar14 + 1;
                                              }
                                              auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_58 = SUB41(pbStack_154,0);
                                              uStack_57 = (undefined1)((uint)pbStack_154 >> 8);
                                              uStack_54 = SUB41(pcStack_14c,0);
                                              uStack_53 = (undefined1)((uint)pcStack_14c >> 8);
                                              uStack_5c = SUB41(puStack_158,0);
                                              uStack_5b = (undefined1)((uint)puStack_158 >> 8);
                                              uStack_5a = (undefined1)((uint)puStack_158 >> 0x10);
                                              uStack_59 = (undefined1)((uint)puStack_158 >> 0x18);
                                              uStack_60 = SUB41(pAStack_144,0);
                                              uStack_5f = (undefined1)((uint)pAStack_144 >> 8);
                                              uStack_5e = (undefined1)((uint)pAStack_144 >> 0x10);
                                              uStack_5d = (undefined1)((uint)pAStack_144 >> 0x18);
                                              uStack_56 = SUB41(pbStack_150,0);
                                              uStack_55 = (undefined1)((uint)pbStack_150 >> 8);
                                              iVar33 = uStack_140 * 0x19;
                                              uStack_52 = SUB41(pcStack_148,0);
                                              uStack_51 = (undefined1)((uint)pcStack_148 >> 8);
                                              uStack_50 = (undefined1)((uint)pcStack_148 >> 0x10);
                                              uStack_4f = (undefined1)((uint)pcStack_148 >> 0x18);
                                              auStack_68[0] = 0x3b;
                                              uStack_4e = (undefined2)iVar33;
                                              uStack_4c = (undefined1)((uint)iVar33 >> 0x10);
                                              cStack_4b = (char)((uint)iVar33 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar11,auStack_68);
                                              uVar28 = uStack_14;
                                            }
                                            ppppppuStack_8 = ppppppuStack_8 + 1;
                                            pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                          } while (pAStack_c != (AiFltClassTy *)0x0);
                                          pAStack_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  default:
                                    goto switchD_00652a7f_caseD_3;
                                  }
                                  goto LAB_00652a99;
                                }
                                iVar6 = thunk_FUN_006527d0((int)asStack_16c);
                                if (iVar6 == 0) {
                                  iVar6 = -1;
                                  uVar32 = uVar28;
                                  pcVar24 = thunk_FUN_00674af0(0x76c);
                                  thunk_FUN_0064d0e0(this_00,-0x7d,pcVar24,uVar32,iVar6);
                                }
                                else {
                                  DAT_0080c51e = pAStack_164;
                                }
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                            if (iVar6 == 0x5c8) {
                              iVar6 = thunk_FUN_00650ad0((int)asStack_16c);
                              if (iVar6 == 0) {
                                iVar6 = -1;
                                uVar32 = uVar28;
                                pcVar24 = thunk_FUN_00674af0(0x5c8);
                                thunk_FUN_0064d0e0(this_00,-0x7d,pcVar24,uVar32,iVar6);
                              }
                              else {
                                iVar6 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar6 == 8) && (pAStack_164 == (AiFltClassTy *)0x9)) {
                                  iVar6 = -1;
                                  uVar32 = uVar28;
                                  pcVar24 = thunk_FUN_00674af0(0x5c8);
                                  thunk_FUN_0064d0e0(this_00,-0x7d,pcVar24,uVar32,iVar6);
                                }
                                else {
                                  pAVar11 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                               (uint)pAStack_160,
                                                               (uint *)appppppuStack_34);
                                  if (0 < (int)pAVar11) {
                                    pppppppuVar25 = appppppuStack_34;
                                    pAStack_c = pAVar11;
                                    pppppppuVar13 = (uint *******)ppppppuStack_15c;
                                    do {
                                      puVar21 = (ushort *)0xffffffff;
                                      if (((int)pppppppuVar13 < 1) || (0x28 < (int)pppppppuVar13)) {
                                        bVar31 = false;
                                      }
                                      else {
                                        bVar31 = true;
                                      }
                                      if (bVar31) {
                                        puVar21 = (ushort *)((int)pppppppuVar13 + 0x41);
                                      }
                                      if (((int)pppppppuVar13 < 0x32) || (0x73 < (int)pppppppuVar13)
                                         ) {
                                        bVar31 = false;
                                      }
                                      else {
                                        bVar31 = true;
                                      }
                                      if (bVar31) {
                                        puVar21 = (ushort *)((int)pppppppuVar13 + -0x32);
                                      }
                                      if (-1 < (int)puVar21) {
                                        thunk_FUN_004e6080((int)*pppppppuVar25,(int)puVar21,
                                                           puStack_158);
                                        pppppppuVar13 = (uint *******)ppppppuStack_15c;
                                      }
                                      pppppppuVar25 = pppppppuVar25 + 1;
                                      pAStack_c = pAStack_c + -1;
                                    } while (pAStack_c != (AiFltClassTy *)0x0);
                                  }
                                }
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                            switch(iVar6) {
                            case 0x594:
                              iVar33 = thunk_FUN_0064feb0((int)asStack_16c);
                              if (iVar33 == 0) break;
                              if (pAStack_160 != (AiFltClassTy *)0x0) {
                                thunk_FUN_00677f40(0,(byte *)pAStack_164,0,0,0,-1,-1,-1,
                                                   &LAB_004012cb,pAStack_160);
                              }
                              goto switchD_00652a7f_caseD_3;
                            case 0x595:
                              iVar33 = thunk_FUN_0064fef0(asStack_16c);
                              if (iVar33 == 0) break;
                              if (((pAStack_164 == (AiFltClassTy *)0xdd) ||
                                  (pAStack_164 == (AiFltClassTy *)0xde)) ||
                                 (pAStack_164 == (AiFltClassTy *)0xe0)) {
                                bVar31 = true;
                              }
                              else {
                                bVar31 = false;
                              }
                              if (bVar31) {
                                pAStack_18c = pAStack_160;
                                ppppppuStack_190 = ppppppuStack_15c;
                                puStack_184 = puStack_158;
                                iVar33 = thunk_FUN_004b1cf0((int)pAStack_164,(int *)&pAStack_18c,
                                                            (int *)&ppppppuStack_190,
                                                            (int *)&puStack_184);
                                if (iVar33 == 0) goto LAB_00655f4c;
                                thunk_FUN_00580450(pAStack_18c,ppppppuStack_190,puStack_184,
                                                   pAStack_164,pbStack_154);
                              }
                              goto switchD_00652a7f_caseD_3;
                            case 0x596:
                              iVar33 = thunk_FUN_0064ff70(asStack_16c);
                              if (iVar33 == 0) break;
                              DAT_008118fc = 0;
                              thunk_FUN_00677960((short)pAStack_164,(short)pAStack_160,
                                                 (short)ppppppuStack_15c,(short)puStack_158,
                                                 (short)pbStack_154,(short)pbStack_150,
                                                 (short)pcStack_14c,&LAB_004047e1,&pcStack_148);
                              goto switchD_00652a7f_caseD_3;
                            case 0x597:
                              iVar33 = thunk_FUN_00650090(asStack_16c);
                              if (iVar33 == 0) break;
                              thunk_FUN_00677960((short)ppppppuStack_15c,(short)puStack_158,
                                                 (short)pbStack_154,(short)pbStack_150,
                                                 (short)pcStack_14c,(short)pcStack_148,
                                                 (short)pAStack_144,&LAB_00405b6e,
                                                 (int)pAStack_160 << 0x10 |
                                                 (uint)pAStack_164 & 0xffff);
                              goto switchD_00652a7f_caseD_3;
                            case 0x598:
                              iVar33 = thunk_FUN_006501a0(asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = _CreateDest(this_00,(short)pAStack_164,(short)pAStack_160,
                                                     (short)ppppppuStack_15c,(short)puStack_158,
                                                     (short)pbStack_154,(char *)pbStack_150,
                                                     pcStack_14c,pcStack_148);
                                goto LAB_00655f44;
                              }
                              break;
                            case 0x599:
                              iVar33 = thunk_FUN_00650240(asStack_16c);
                              if (iVar33 == 0) break;
                              DAT_008118fc = 0;
                              thunk_FUN_006785a0((byte *)pAStack_160,(char)pAStack_164,
                                                 (short)ppppppuStack_15c,(short)puStack_158,
                                                 (short)pbStack_154,(short)pbStack_150,
                                                 (short)pcStack_14c,(short)pcStack_148,&LAB_0040191a
                                                 ,&pAStack_144);
                              goto switchD_00652a7f_caseD_3;
                            case 0x59a:
                              iVar33 = thunk_FUN_00650370((int)asStack_16c);
                              if (iVar33 == 0) break;
                              if (pAStack_160 != (AiFltClassTy *)0x0) {
                                thunk_FUN_006785a0((byte *)pAStack_164,-1,0,0,0,-1,-1,-1,
                                                   &LAB_00403e18,pAStack_160);
                              }
                              goto switchD_00652a7f_caseD_3;
                            case 0x59b:
                              iVar33 = thunk_FUN_006503b0(asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                              (uint)pAStack_160,
                                                              (uint *)appppppuStack_34);
                                  if (0 < iVar33) {
                                    ppppppuStack_8 = (uint ******)appppppuStack_34;
                                    pAStack_c = (AiFltClassTy *)iVar33;
                                    do {
                                      iVar33 = _CreateMine(this_00,*(ushort *)ppppppuStack_8,
                                                           (short)ppppppuStack_15c,(int)puStack_158,
                                                           (int)pbStack_154,pbStack_150,
                                                           (ushort)pcStack_14c,pcStack_148,
                                                           pAStack_144,uStack_140);
                                      if (iVar33 != 0) {
                                        ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                        uVar32 = uVar28;
                                        pcVar24 = thunk_FUN_00674af0(iVar6);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar24,uVar32,
                                                           (int)ppppppuVar12);
                                      }
                                      ppppppuStack_8 = ppppppuStack_8 + 1;
                                      pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                    } while (pAStack_c != (AiFltClassTy *)0x0);
                                    pAStack_c = (AiFltClassTy *)0x0;
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x59c:
                              iVar33 = thunk_FUN_00650480(asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  pAVar11 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                               (uint)pAStack_160,
                                                               (uint *)appppppuStack_34);
                                  if (0 < (int)pAVar11) {
                                    pppppppuVar25 = appppppuStack_34;
                                    pAStack_c = pAVar11;
                                    do {
                                      DAT_008118fc = 0;
                                      thunk_FUN_00678240((int)*pppppppuVar25,(short)ppppppuStack_15c
                                                         ,(char)puStack_158,pbStack_154,
                                                         (short)pbStack_150,(short)pcStack_14c,
                                                         (short)pcStack_148,(short)pAStack_144,
                                                         (short)uStack_140,(short)iStack_13c,
                                                         &LAB_004037d8,&pcStack_138);
                                      pppppppuVar25 = pppppppuVar25 + 1;
                                      pAStack_c = pAStack_c + -1;
                                    } while (pAStack_c != (AiFltClassTy *)0x0);
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x59d:
                              iVar33 = thunk_FUN_00650600(asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  pAVar11 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                               (uint)pAStack_160,
                                                               (uint *)appppppuStack_34);
                                  if (0 < (int)pAVar11) {
                                    pppppppuVar25 = appppppuStack_34;
                                    pAStack_c = pAVar11;
                                    do {
                                      DAT_008118fc = 0;
                                      thunk_FUN_00678240((int)*pppppppuVar25,(short)puStack_158,
                                                         (char)pbStack_154,pbStack_150,
                                                         (short)pcStack_14c,(short)pcStack_148,
                                                         (short)pAStack_144,(short)uStack_140,
                                                         (short)iStack_13c,(short)pcStack_138,
                                                         &LAB_004035fd,ppppppuStack_15c);
                                      pppppppuVar25 = pppppppuVar25 + 1;
                                      pAStack_c = pAStack_c + -1;
                                    } while (pAStack_c != (AiFltClassTy *)0x0);
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            default:
                              goto switchD_00652a7f_caseD_3;
                            case 0x5aa:
                              iVar33 = thunk_FUN_00650760(asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  pAVar11 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                               (uint)pAStack_160,
                                                               (uint *)appppppuStack_34);
                                  if (0 < (int)pAVar11) {
                                    pppppppuVar25 = appppppuStack_34;
                                    pAStack_c = pAVar11;
                                    do {
                                      thunk_FUN_004e76e0((int)*pppppppuVar25,
                                                         (uint *)ppppppuStack_15c,(char)puStack_158)
                                      ;
                                      pppppppuVar25 = pppppppuVar25 + 1;
                                      pAStack_c = pAStack_c + -1;
                                    } while (pAStack_c != (AiFltClassTy *)0x0);
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5ab:
                              iVar33 = thunk_FUN_00650760(asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  pAVar11 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                               (uint)pAStack_160,
                                                               (uint *)appppppuStack_34);
                                  if (0 < (int)pAVar11) {
                                    pppppppuVar25 = appppppuStack_34;
                                    pAStack_c = pAVar11;
                                    do {
                                      thunk_FUN_004e7980((uint *)*pppppppuVar25,
                                                         (int)ppppppuStack_15c,(char)puStack_158);
                                      pppppppuVar25 = pppppppuVar25 + 1;
                                      pAStack_c = pAStack_c + -1;
                                    } while (pAStack_c != (AiFltClassTy *)0x0);
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5ac:
                              iVar33 = thunk_FUN_00650820(asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                              (uint)pAStack_160,
                                                              (uint *)appppppuStack_34);
                                  if (0 < iVar33) {
                                    ppppppuStack_8 = (uint ******)appppppuStack_34;
                                    do {
                                      pAStack_c = (AiFltClassTy *)iVar33;
                                      this_01 = (AiPlrClassTy *)
                                                thunk_FUN_004357f0(*(char *)ppppppuStack_8);
                                      if (this_01 == (AiPlrClassTy *)0x0) {
                                        ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                        uVar32 = uVar28;
                                        pcVar24 = thunk_FUN_00674af0(iVar6);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar24,uVar32,
                                                           (int)ppppppuVar12);
                                      }
                                      else {
                                        AiPlrClassTy::SetTech
                                                  (this_01,(int)ppppppuStack_15c,(int)puStack_158,
                                                   (int)pbStack_154,0xff);
                                      }
                                      ppppppuStack_8 = ppppppuStack_8 + 1;
                                      iVar33 = (int)pAStack_c + -1;
                                    } while (iVar33 != 0);
                                    pAStack_c = (AiFltClassTy *)0x0;
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5ad:
                              iVar33 = thunk_FUN_006508c0(asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  pAVar11 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                               (uint)pAStack_160,
                                                               (uint *)appppppuStack_34);
                                  if (0 < (int)pAVar11) {
                                    pppppppuVar25 = appppppuStack_34;
                                    pAStack_c = pAVar11;
                                    do {
                                      thunk_FUN_004e6310((int)*pppppppuVar25,(uint)ppppppuStack_15c,
                                                         (uint)puStack_158);
                                      pppppppuVar25 = pppppppuVar25 + 1;
                                      pAStack_c = pAStack_c + -1;
                                    } while (pAStack_c != (AiFltClassTy *)0x0);
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5ae:
                              iVar33 = thunk_FUN_006509e0((int)asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  pAVar11 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                               (uint)pAStack_160,
                                                               (uint *)appppppuStack_34);
                                  if (0 < (int)pAVar11) {
                                    pppppppuVar25 = appppppuStack_34;
                                    pAStack_c = pAVar11;
                                    do {
                                      thunk_FUN_004e75f0((int)*pppppppuVar25);
                                      pppppppuVar25 = pppppppuVar25 + 1;
                                      pAStack_c = pAStack_c + -1;
                                    } while (pAStack_c != (AiFltClassTy *)0x0);
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5af:
                              iVar33 = thunk_FUN_00650a20(asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                              (uint)pAStack_160,
                                                              (uint *)appppppuStack_34);
                                  if (0 < iVar33) {
                                    ppppppuStack_8 = (uint ******)appppppuStack_34;
                                    do {
                                      pAStack_c = (AiFltClassTy *)iVar33;
                                      pvVar16 = (void *)thunk_FUN_004357f0(*(char *)ppppppuStack_8);
                                      if (pvVar16 == (void *)0x0) {
                                        ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                        uVar32 = uVar28;
                                        pcVar24 = thunk_FUN_00674af0(iVar6);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar24,uVar32,
                                                           (int)ppppppuVar12);
                                      }
                                      else {
                                        thunk_FUN_0067b210(pvVar16,(int)ppppppuStack_15c,
                                                           (int)puStack_158);
                                      }
                                      ppppppuStack_8 = ppppppuStack_8 + 1;
                                      iVar33 = (int)pAStack_c + -1;
                                    } while (iVar33 != 0);
                                    pAStack_c = (AiFltClassTy *)0x0;
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5b0:
                              iVar33 = thunk_FUN_00650a90((int)asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                              (uint)pAStack_160,
                                                              (uint *)appppppuStack_34);
                                  if (0 < iVar33) {
                                    ppppppuStack_8 = (uint ******)appppppuStack_34;
                                    do {
                                      pAStack_c = (AiFltClassTy *)iVar33;
                                      iVar33 = thunk_FUN_004357f0(*(char *)ppppppuStack_8);
                                      if (iVar33 == 0) {
                                        ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                        uVar32 = uVar28;
                                        pcVar24 = thunk_FUN_00674af0(iVar6);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar24,uVar32,
                                                           (int)ppppppuVar12);
                                      }
                                      else {
                                        thunk_FUN_0067b260(iVar33);
                                      }
                                      ppppppuStack_8 = ppppppuStack_8 + 1;
                                      iVar33 = (int)pAStack_c + -1;
                                    } while (iVar33 != 0);
                                    pAStack_c = (AiFltClassTy *)0x0;
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5b1:
                              iVar33 = thunk_FUN_006507e0((int)asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  pAVar11 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                               (uint)pAStack_160,
                                                               (uint *)appppppuStack_34);
                                  if (0 < (int)pAVar11) {
                                    pppppppuVar25 = appppppuStack_34;
                                    pAStack_c = pAVar11;
                                    do {
                                      thunk_FUN_004e7d70((int)*pppppppuVar25);
                                      pppppppuVar25 = pppppppuVar25 + 1;
                                      pAStack_c = pAStack_c + -1;
                                    } while (pAStack_c != (AiFltClassTy *)0x0);
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5b2:
                              iVar33 = thunk_FUN_006507e0((int)asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  pAVar11 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                               (uint)pAStack_160,
                                                               (uint *)appppppuStack_34);
                                  if (0 < (int)pAVar11) {
                                    pppppppuVar25 = appppppuStack_34;
                                    pAStack_c = pAVar11;
                                    do {
                                      thunk_FUN_004e7e10((uint *)*pppppppuVar25);
                                      pppppppuVar25 = pppppppuVar25 + 1;
                                      pAStack_c = pAStack_c + -1;
                                    } while (pAStack_c != (AiFltClassTy *)0x0);
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5b3:
                              iVar33 = thunk_FUN_00650940(asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  pAVar11 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                               (uint)pAStack_160,
                                                               (uint *)appppppuStack_34);
                                  if (0 < (int)pAVar11) {
                                    pppppppuVar25 = appppppuStack_34;
                                    pAStack_c = pAVar11;
                                    do {
                                      thunk_FUN_004e7390((int)*pppppppuVar25,(uint)ppppppuStack_15c,
                                                         (uint)puStack_158,(int)pbStack_154);
                                      pppppppuVar25 = pppppppuVar25 + 1;
                                      pAStack_c = pAStack_c + -1;
                                    } while (pAStack_c != (AiFltClassTy *)0x0);
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5b4:
                              iVar33 = thunk_FUN_00650b10(asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  pppppppuVar25 =
                                       (uint *******)
                                       thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                          (uint)pAStack_160,(uint *)appppppuStack_34
                                                         );
                                  if (0 < (int)pppppppuVar25) {
                                    pppppppuVar13 = appppppuStack_34;
                                    ppppppuStack_8 = (uint ******)pppppppuVar25;
                                    do {
                                      pAStack_c = (AiFltClassTy *)0xffffffff;
                                      ppppppuStack_8 = (uint ******)pppppppuVar25;
                                      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
                                        iVar6 = 0;
                                      }
                                      else {
                                        iVar6 = thunk_FUN_004357f0(*(char *)pppppppuVar13);
                                      }
                                      if (iVar6 != 0) {
                                        pAStack_c = (AiFltClassTy *)
                                                    thunk_FUN_00679120((byte *)ppppppuStack_15c,
                                                                       (int)puStack_158,
                                                                       (int)pbStack_154,
                                                                       (int)pbStack_150);
                                      }
                                      if ((int)pAStack_c < 0) {
                                        thunk_FUN_0064d0e0(this_00,-4,ppppppuStack_15c,uVar28,
                                                           (int)*pppppppuVar13);
                                      }
                                      pppppppuVar13 = pppppppuVar13 + 1;
                                      pppppppuVar25 = (uint *******)((int)ppppppuStack_8 + -1);
                                      ppppppuStack_8 = (uint ******)pppppppuVar25;
                                    } while (pppppppuVar25 != (uint *******)0x0);
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5b5:
                              iVar33 = thunk_FUN_00650f50((int)asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                              (uint)pAStack_160,
                                                              (uint *)appppppuStack_34);
                                  if (0 < iVar33) {
                                    ppppppuStack_8 = (uint ******)appppppuStack_34;
                                    do {
                                      pAStack_c = (AiFltClassTy *)iVar33;
                                      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
                                        pvVar16 = (void *)0x0;
                                      }
                                      else {
                                        pvVar16 = (void *)thunk_FUN_004357f0(*(char *)ppppppuStack_8
                                                                            );
                                      }
                                      if (pvVar16 == (void *)0x0) {
                                        ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                        uVar32 = uVar28;
                                        pcVar24 = thunk_FUN_00674af0(iVar6);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar24,uVar32,
                                                           (int)ppppppuVar12);
                                      }
                                      else {
                                        *(undefined1 *)((int)pvVar16 + 0x644) =
                                             ppppppuStack_15c._0_1_;
                                        *(uint **)((int)pvVar16 + 0x640) = puStack_158;
                                        thunk_FUN_00679600(pvVar16);
                                      }
                                      ppppppuStack_8 = ppppppuStack_8 + 1;
                                      iVar33 = (int)pAStack_c + -1;
                                    } while (iVar33 != 0);
                                    pAStack_c = (AiFltClassTy *)0x0;
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5b6:
                              bVar31 = thunk_FUN_00650f90(asStack_16c);
                              if (CONCAT31(extraout_var_14,bVar31) != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                              (uint)pAStack_160,
                                                              (uint *)appppppuStack_34);
                                  if (0 < iVar33) {
                                    ppppppuStack_8 = (uint ******)appppppuStack_34;
                                    do {
                                      pAStack_c = (AiFltClassTy *)iVar33;
                                      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
                                        pvVar16 = (void *)0x0;
                                      }
                                      else {
                                        pvVar16 = (void *)thunk_FUN_004357f0(*(char *)ppppppuStack_8
                                                                            );
                                      }
                                      if (pvVar16 == (void *)0x0) {
                                        ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                        uVar32 = uVar28;
                                        pcVar24 = thunk_FUN_00674af0(iVar6);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar24,uVar32,
                                                           (int)ppppppuVar12);
                                      }
                                      else {
                                        thunk_FUN_0065bd20(pvVar16,(char)ppppppuStack_15c,
                                                           (short)puStack_158,(short)pbStack_154,
                                                           (short)pbStack_150,pcStack_14c);
                                      }
                                      ppppppuStack_8 = ppppppuStack_8 + 1;
                                      iVar33 = (int)pAStack_c + -1;
                                    } while (iVar33 != 0);
                                    pAStack_c = (AiFltClassTy *)0x0;
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5b7:
                              iVar33 = thunk_FUN_00650bd0(asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                              (uint)pAStack_160,
                                                              (uint *)appppppuStack_34);
                                  if (0 < iVar33) {
                                    pAStack_10 = (AiFltClassTy *)appppppuStack_34;
                                    ppppppuStack_8 = (uint ******)iVar33;
                                    do {
                                      pAStack_c = (AiFltClassTy *)
                                                  thunk_FUN_00677290(*(uint *)pAStack_10,
                                                                     (uint)ppppppuStack_15c,
                                                                     (char)puStack_158,
                                                                     (short)pbStack_154,
                                                                     (short)pbStack_150,
                                                                     (short)pcStack_14c,
                                                                     (short)pcStack_148,
                                                                     (short)pAStack_144,
                                                                     (short)uStack_140,1);
                                      if (pAStack_c == (AiFltClassTy *)0x0) {
                                        uVar32 = *(uint *)pAStack_10;
                                        uVar22 = uVar28;
                                        pcVar24 = thunk_FUN_00674af0(iVar6);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar24,uVar22,uVar32);
                                      }
                                      else {
                                        thunk_FUN_00675dc0(*(uint *)pAStack_10,(int)pAStack_c);
                                        FUN_006ae110((byte *)pAStack_c);
                                      }
                                      pAStack_10 = pAStack_10 + 4;
                                      ppppppuStack_8 = (uint ******)((int)ppppppuStack_8 + -1);
                                    } while (ppppppuStack_8 != (uint ******)0x0);
                                    ppppppuStack_8 = (uint ******)0x0;
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5b8:
                              iVar33 = thunk_FUN_00650cf0(asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                              (uint)pAStack_160,
                                                              (uint *)appppppuStack_34);
                                  if (0 < iVar33) {
                                    pAStack_10 = (AiFltClassTy *)appppppuStack_34;
                                    ppppppuStack_8 = (uint ******)iVar33;
                                    do {
                                      pAStack_c = (AiFltClassTy *)
                                                  thunk_FUN_006773b0(*(uint *)pAStack_10,
                                                                     (uint)ppppppuStack_15c,
                                                                     (char)puStack_158,
                                                                     (short)pbStack_154,
                                                                     (short)pbStack_150,
                                                                     (short)pcStack_14c,
                                                                     (short)pcStack_148,
                                                                     (short)pAStack_144,
                                                                     (short)uStack_140,1);
                                      if (pAStack_c == (AiFltClassTy *)0x0) {
                                        uVar32 = *(uint *)pAStack_10;
                                        uVar22 = uVar28;
                                        pcVar24 = thunk_FUN_00674af0(iVar6);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar24,uVar22,uVar32);
                                      }
                                      else {
                                        thunk_FUN_00675dc0(*(uint *)pAStack_10,(int)pAStack_c);
                                        FUN_006ae110((byte *)pAStack_c);
                                      }
                                      pAStack_10 = pAStack_10 + 4;
                                      ppppppuStack_8 = (uint ******)((int)ppppppuStack_8 + -1);
                                    } while (ppppppuStack_8 != (uint ******)0x0);
                                    ppppppuStack_8 = (uint ******)0x0;
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5b9:
                              iVar33 = thunk_FUN_00650e10(asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                              (uint)pAStack_160,
                                                              (uint *)appppppuStack_34);
                                  if (0 < iVar33) {
                                    pAStack_10 = (AiFltClassTy *)appppppuStack_34;
                                    ppppppuStack_8 = (uint ******)iVar33;
                                    do {
                                      pAStack_c = (AiFltClassTy *)
                                                  thunk_FUN_006774c0(*(uint *)pAStack_10,
                                                                     (byte *)ppppppuStack_15c,
                                                                     (char)puStack_158,
                                                                     (short)pbStack_154,
                                                                     (short)pbStack_150,
                                                                     (short)pcStack_14c,
                                                                     (short)pcStack_148,
                                                                     (short)pAStack_144,
                                                                     (short)uStack_140,1);
                                      if (pAStack_c == (AiFltClassTy *)0x0) {
                                        uVar32 = *(uint *)pAStack_10;
                                        uVar22 = uVar28;
                                        pcVar24 = thunk_FUN_00674af0(iVar6);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar24,uVar22,uVar32);
                                      }
                                      else {
                                        thunk_FUN_00675dc0(*(uint *)pAStack_10,(int)pAStack_c);
                                        FUN_006ae110((byte *)pAStack_c);
                                      }
                                      pAStack_10 = pAStack_10 + 4;
                                      ppppppuStack_8 = (uint ******)((int)ppppppuStack_8 + -1);
                                    } while (ppppppuStack_8 != (uint ******)0x0);
                                    ppppppuStack_8 = (uint ******)0x0;
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                            }
                            goto LAB_00652a99;
                          }
                          if (iVar6 == 0x593) {
                            iVar6 = thunk_FUN_0064fd80(asStack_16c);
                            if (iVar6 == 0) {
                              iVar6 = -1;
                              uVar32 = uVar28;
                              pcVar24 = thunk_FUN_00674af0(0x593);
                              thunk_FUN_0064d0e0(this_00,-0x7d,pcVar24,uVar32,iVar6);
                            }
                            else {
                              DAT_008118fc = 0;
                              thunk_FUN_00677f40((short)pAStack_164,(byte *)pAStack_160,
                                                 (short)ppppppuStack_15c,(short)puStack_158,
                                                 (short)pbStack_154,(short)pbStack_150,
                                                 (short)pcStack_14c,(short)pcStack_148,&LAB_004022f2
                                                 ,&pAStack_144);
                            }
                            goto switchD_00652a7f_caseD_3;
                          }
                          if (iVar6 < 0x54e) {
                            if (iVar6 == 0x54d) {
                              iVar6 = thunk_FUN_0064ef10((int)asStack_16c);
                              if (iVar6 == 0) {
                                iVar6 = -1;
                                uVar32 = uVar28;
                                pcVar24 = thunk_FUN_00674af0(0x54d);
                                thunk_FUN_0064d0e0(this_00,-0x7d,pcVar24,uVar32,iVar6);
                              }
                              else {
                                iVar6 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar6 == 8) && (pAStack_164 == (AiFltClassTy *)0x9)) {
                                  iVar6 = -1;
                                  uVar32 = uVar28;
                                  pcVar24 = thunk_FUN_00674af0(0x54d);
                                  thunk_FUN_0064d0e0(this_00,-0x7d,pcVar24,uVar32,iVar6);
                                }
                                else {
                                  iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                             (uint)pAStack_160,
                                                             (uint *)appppppuStack_34);
                                  iVar33 = 0;
                                  if (0 < iVar6) {
                                    pppppppuVar25 = appppppuStack_34;
                                    do {
                                      if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d) {
                                        if (DAT_007fb2a0 != 0) {
                                          thunk_FUN_004aaf60((int)ppppppuStack_15c);
                                        }
                                        break;
                                      }
                                      iVar33 = iVar33 + 1;
                                      pppppppuVar25 = pppppppuVar25 + 1;
                                    } while (iVar33 < iVar6);
                                  }
                                }
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                            if (iVar6 < 0x51b) {
                              if (iVar6 == 0x51a) {
                                iVar6 = thunk_FUN_0064e960((int)asStack_16c);
                                if (iVar6 == 0) {
                                  iVar6 = -1;
                                  uVar32 = uVar28;
                                  pcVar24 = thunk_FUN_00674af0(0x51a);
                                  thunk_FUN_0064d0e0(this_00,-0x7d,pcVar24,uVar32,iVar6);
                                }
                                else {
                                  *(AiFltClassTy **)(this_00 + (int)pAStack_164 * 4 + 0x52f) =
                                       pAStack_160;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                              if (0x3e < iVar6) {
                                if (iVar6 < 0x517) {
                                  if (iVar6 == 0x516) {
                                    iVar6 = thunk_FUN_0064e7c0(asStack_16c);
                                    if (iVar6 == 0) {
                                      iVar6 = -1;
                                      uVar32 = uVar28;
                                      pcVar24 = thunk_FUN_00674af0(0x516);
                                      thunk_FUN_0064d0e0(this_00,-0x7d,pcVar24,uVar32,iVar6);
                                    }
                                    else {
                                      if (pAStack_164 == (AiFltClassTy *)0x9) {
                                        iVar6 = (**(code **)(*(int *)this_00 + 0x18))();
                                        if (iVar6 == 8) {
                                          pppppppuVar25 = (uint *******)ppppppuStack_15c;
                                          if ((int)ppppppuStack_15c <= (int)puStack_158) {
                                            do {
                                              puVar10 = (undefined1 *)
                                                        thunk_FUN_0064e510(this_00,(int)
                                                  pppppppuVar25);
                                              if (puVar10 != (undefined1 *)0x0) {
                                                *puVar10 = 0;
                                              }
                                              pppppppuVar25 = (uint *******)((int)pppppppuVar25 + 1)
                                              ;
                                            } while ((int)pppppppuVar25 <= (int)puStack_158);
                                          }
                                          goto switchD_00652a7f_caseD_3;
                                        }
                                      }
                                      iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                 (uint)pAStack_160,
                                                                 (uint *)appppppuStack_34);
                                      if (0 < iVar6) {
                                        ppppppuStack_8 = (uint ******)appppppuStack_34;
                                        do {
                                          pAStack_c = (AiFltClassTy *)iVar6;
                                          if (DAT_007fa174 == (STAllPlayersC *)0x0) {
                                            pAStack_10 = (AiFltClassTy *)0x0;
                                          }
                                          else {
                                            pAStack_10 = (AiFltClassTy *)
                                                         thunk_FUN_004357f0(*(char *)ppppppuStack_8)
                                            ;
                                          }
                                          pppppppuVar25 = (uint *******)ppppppuStack_15c;
                                          if ((int)ppppppuStack_15c <= (int)puStack_158) {
                                            do {
                                              if (pAStack_10 != (AiFltClassTy *)0x0) {
                                                puVar10 = (undefined1 *)
                                                          thunk_FUN_0064e510(pAStack_10 + 0x1c,
                                                                             (int)pppppppuVar25);
                                                if (puVar10 != (undefined1 *)0x0) {
                                                  *puVar10 = 0;
                                                }
                                              }
                                              pppppppuVar25 = (uint *******)((int)pppppppuVar25 + 1)
                                              ;
                                            } while ((int)pppppppuVar25 <= (int)puStack_158);
                                          }
                                          ppppppuStack_8 = ppppppuStack_8 + 1;
                                          iVar6 = (int)pAStack_c + -1;
                                        } while (iVar6 != 0);
                                        pAStack_c = (AiFltClassTy *)0x0;
                                      }
                                    }
                                  }
                                  else if (iVar6 == 0x42) {
                                    iVar6 = thunk_FUN_0064e700((int)asStack_16c);
                                    if (iVar6 == 0) {
                                      iVar6 = -1;
                                      uVar32 = uVar28;
                                      pcVar24 = thunk_FUN_00674af0(0x42);
                                      thunk_FUN_0064d0e0(this_00,-0x7d,pcVar24,uVar32,iVar6);
                                    }
                                    else {
                                      pAVar11 = pAStack_160;
                                      if (pAStack_164 == (AiFltClassTy *)0x0) goto LAB_00659a80;
                                    }
                                  }
                                  else if (iVar6 == 0x322) {
                                    iStack_174 = 1;
                                  }
                                  else if (iVar6 == 0x515) {
                                    iVar6 = thunk_FUN_0064e780(asStack_16c);
                                    if (iVar6 == 0) {
                                      iVar6 = -1;
                                      uVar32 = uVar28;
                                      pcVar24 = thunk_FUN_00674af0(0x515);
                                      thunk_FUN_0064d0e0(this_00,-0x7d,pcVar24,uVar32,iVar6);
                                    }
                                    else if (pAStack_164 == (AiFltClassTy *)0x0) {
                                      *pcStack_178 = '\0';
                                      pcStack_178[0xb] = '\0';
                                      pcStack_178[0xc] = '\0';
                                      pcStack_178[0xd] = '\0';
                                      pcStack_178[0xe] = '\0';
                                    }
                                    else {
                                      *pcStack_178 = '\x01';
                                      *(AiFltClassTy **)(pcStack_178 + 0xb) = pAStack_164;
                                    }
                                  }
                                }
                                else if (iVar6 == 0x517) {
                                  iVar6 = thunk_FUN_0064e830(asStack_16c);
                                  if (iVar6 == 0) {
                                    iVar6 = -1;
                                    uVar32 = uVar28;
                                    pcVar24 = thunk_FUN_00674af0(0x517);
                                    thunk_FUN_0064d0e0(this_00,-0x7d,pcVar24,uVar32,iVar6);
                                  }
                                  else {
                                    if (pAStack_164 == (AiFltClassTy *)0x9) {
                                      iVar6 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if (iVar6 == 8) {
                                        pppppppuVar25 = (uint *******)ppppppuStack_15c;
                                        if ((int)ppppppuStack_15c <= (int)puStack_158) {
                                          do {
                                            puVar10 = (undefined1 *)
                                                      thunk_FUN_0064e510(this_00,(int)pppppppuVar25)
                                            ;
                                            if (puVar10 != (undefined1 *)0x0) {
                                              *puVar10 = 1;
                                              *(byte **)(puVar10 + 0xb) = pbStack_154;
                                            }
                                            pppppppuVar25 = (uint *******)((int)pppppppuVar25 + 1);
                                          } while ((int)pppppppuVar25 <= (int)puStack_158);
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                               (uint)pAStack_160,
                                                               (uint *)appppppuStack_34);
                                    if (0 < iVar6) {
                                      ppppppuStack_8 = (uint ******)appppppuStack_34;
                                      pAStack_c = (AiFltClassTy *)iVar6;
                                      do {
                                        if (DAT_007fa174 == (STAllPlayersC *)0x0) {
                                          pAStack_10 = (AiFltClassTy *)0x0;
                                        }
                                        else {
                                          pAStack_10 = (AiFltClassTy *)
                                                       thunk_FUN_004357f0(*(char *)ppppppuStack_8);
                                        }
                                        pppppppuVar25 = (uint *******)ppppppuStack_15c;
                                        if ((int)ppppppuStack_15c <= (int)puStack_158) {
                                          do {
                                            if (pAStack_10 != (AiFltClassTy *)0x0) {
                                              puVar10 = (undefined1 *)
                                                        thunk_FUN_0064e510(pAStack_10 + 0x1c,
                                                                           (int)pppppppuVar25);
                                              if (puVar10 != (undefined1 *)0x0) {
                                                *puVar10 = 1;
                                                *(byte **)(puVar10 + 0xb) = pbStack_154;
                                              }
                                            }
                                            pppppppuVar25 = (uint *******)((int)pppppppuVar25 + 1);
                                          } while ((int)pppppppuVar25 <= (int)puStack_158);
                                        }
                                        ppppppuStack_8 = ppppppuStack_8 + 1;
                                        pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                      } while (pAStack_c != (AiFltClassTy *)0x0);
                                      pAStack_c = (AiFltClassTy *)0x0;
                                    }
                                  }
                                }
                                else if (iVar6 == 0x518) {
                                  iVar6 = thunk_FUN_0064e8c0((int)asStack_16c);
                                  if (iVar6 == 0) {
                                    iVar6 = -1;
                                    uVar32 = uVar28;
                                    pcVar24 = thunk_FUN_00674af0(0x518);
                                    thunk_FUN_0064d0e0(this_00,-0x7d,pcVar24,uVar32,iVar6);
                                  }
                                  else {
                                    if (pAStack_164 == (AiFltClassTy *)0x9) {
                                      iVar6 = (**(code **)(*(int *)this_00 + 0x18))();
                                      if (iVar6 == 8) {
                                        *(uint **)(this_00 + (int)ppppppuStack_15c * 4 + 0xde) =
                                             puStack_158;
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    pAVar11 = (AiFltClassTy *)
                                              thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                 (uint)pAStack_160,
                                                                 (uint *)appppppuStack_34);
                                    if (0 < (int)pAVar11) {
                                      pppppppuVar25 = appppppuStack_34;
                                      pAStack_c = pAVar11;
                                      do {
                                        pAStack_c = pAVar11;
                                        if (DAT_007fa174 == (STAllPlayersC *)0x0) {
                                          iVar6 = 0;
                                        }
                                        else {
                                          iVar6 = thunk_FUN_004357f0(*(char *)pppppppuVar25);
                                        }
                                        if (iVar6 == 0) {
                                          ppppppuVar12 = *pppppppuVar25;
                                          uVar32 = uVar28;
                                          pcVar24 = thunk_FUN_00674af0(0x518);
                                          thunk_FUN_0064d0e0(this_00,-0xab,pcVar24,uVar32,
                                                             (int)ppppppuVar12);
                                        }
                                        else {
                                          *(uint **)(iVar6 + 0xfa + (int)ppppppuStack_15c * 4) =
                                               puStack_158;
                                        }
                                        pppppppuVar25 = pppppppuVar25 + 1;
                                        pAVar11 = pAStack_c + -1;
                                        pAStack_c = pAVar11;
                                      } while (pAVar11 != (AiFltClassTy *)0x0);
                                    }
                                  }
                                }
                                else if (iVar6 == 0x519) {
                                  iVar6 = thunk_FUN_0064e910((int)asStack_16c);
                                  if (iVar6 == 0) {
                                    iVar6 = -1;
                                    uVar32 = uVar28;
                                    pcVar24 = thunk_FUN_00674af0(0x519);
                                    thunk_FUN_0064d0e0(this_00,-0x7d,pcVar24,uVar32,iVar6);
                                  }
                                  else {
                                    (&DAT_0080e43b)[(int)pAStack_164] = pAStack_160;
                                  }
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                              if (iVar6 == 0x3e) {
switchD_00652b42_switchD:
                                switch(ppppppuStack_15c) {
                                case (uint ******)0x0:
                                  iVar33 = thunk_FUN_0064ea10((int)asStack_16c);
                                  if (iVar33 == 0) goto LAB_00652a99;
                                  switch(iVar6) {
                                  case 2:
                                    *(AiFltClassTy **)(this_00 + (int)pAStack_164 * 4 + 0xde) =
                                         pAStack_160 +
                                         *(int *)(this_00 + (int)pAStack_164 * 4 + 0xde);
                                    break;
                                  case 5:
                                    *(AiFltClassTy **)(this_00 + (int)pAStack_164 * 4 + 0xde) =
                                         pAStack_160;
                                    break;
                                  case 0x17:
                                    if (pAStack_160 == (AiFltClassTy *)0x0) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar28,-1);
                                    }
                                    else {
                                      *(int *)(this_00 + (int)pAStack_164 * 4 + 0xde) =
                                           *(int *)(this_00 + (int)pAStack_164 * 4 + 0xde) /
                                           (int)pAStack_160;
                                    }
                                    break;
                                  case 0x2d:
                                    if (pAStack_160 == (AiFltClassTy *)0x0) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar28,-1);
                                    }
                                    else {
                                      *(int *)(this_00 + (int)pAStack_164 * 4 + 0xde) =
                                           *(int *)(this_00 + (int)pAStack_164 * 4 + 0xde) %
                                           (int)pAStack_160;
                                    }
                                    break;
                                  case 0x31:
                                    *(int *)(this_00 + (int)pAStack_164 * 4 + 0xde) =
                                         *(int *)(this_00 + (int)pAStack_164 * 4 + 0xde) *
                                         (int)pAStack_160;
                                    break;
                                  case 0x3e:
                                    *(int *)(this_00 + (int)pAStack_164 * 4 + 0xde) =
                                         *(int *)(this_00 + (int)pAStack_164 * 4 + 0xde) -
                                         (int)pAStack_160;
                                  }
                                  break;
                                case (uint ******)0x1:
                                  iVar33 = thunk_FUN_0064ea10((int)asStack_16c);
                                  if (iVar33 == 0) goto LAB_00652a99;
                                  switch(iVar6) {
                                  case 2:
                                    (&DAT_0080e43b)[(int)pAStack_164] =
                                         pAStack_160 + (&DAT_0080e43b)[(int)pAStack_164];
                                    break;
                                  case 5:
                                    (&DAT_0080e43b)[(int)pAStack_164] = pAStack_160;
                                    break;
                                  case 0x17:
                                    if (pAStack_160 == (AiFltClassTy *)0x0) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar28,-1);
                                    }
                                    else {
                                      (&DAT_0080e43b)[(int)pAStack_164] =
                                           (int)(&DAT_0080e43b)[(int)pAStack_164] / (int)pAStack_160
                                      ;
                                    }
                                    break;
                                  case 0x2d:
                                    if (pAStack_160 == (AiFltClassTy *)0x0) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar28,-1);
                                    }
                                    else {
                                      (&DAT_0080e43b)[(int)pAStack_164] =
                                           (int)(&DAT_0080e43b)[(int)pAStack_164] % (int)pAStack_160
                                      ;
                                    }
                                    break;
                                  case 0x31:
                                    (&DAT_0080e43b)[(int)pAStack_164] =
                                         (&DAT_0080e43b)[(int)pAStack_164] * (int)pAStack_160;
                                    break;
                                  case 0x3e:
                                    (&DAT_0080e43b)[(int)pAStack_164] =
                                         (&DAT_0080e43b)[(int)pAStack_164] - (int)pAStack_160;
                                  }
                                  break;
                                case (uint ******)0x2:
                                  iVar33 = thunk_FUN_0064ea60((int)asStack_16c);
                                  if (iVar33 == 0) goto LAB_00652a99;
                                  switch(iVar6) {
                                  case 2:
                                    *(AiFltClassTy **)(this_00 + (int)pAStack_164 * 4 + 0x52f) =
                                         pAStack_160 +
                                         *(int *)(this_00 + (int)pAStack_164 * 4 + 0x52f);
                                    break;
                                  case 5:
                                    *(AiFltClassTy **)(this_00 + (int)pAStack_164 * 4 + 0x52f) =
                                         pAStack_160;
                                    break;
                                  case 0x17:
                                    if (pAStack_160 == (AiFltClassTy *)0x0) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar28,-1);
                                    }
                                    else {
                                      *(int *)(this_00 + (int)pAStack_164 * 4 + 0x52f) =
                                           *(int *)(this_00 + (int)pAStack_164 * 4 + 0x52f) /
                                           (int)pAStack_160;
                                    }
                                    break;
                                  case 0x2d:
                                    if (pAStack_160 == (AiFltClassTy *)0x0) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar28,-1);
                                    }
                                    else {
                                      *(int *)(this_00 + (int)pAStack_164 * 4 + 0x52f) =
                                           *(int *)(this_00 + (int)pAStack_164 * 4 + 0x52f) %
                                           (int)pAStack_160;
                                    }
                                    break;
                                  case 0x31:
                                    *(int *)(this_00 + (int)pAStack_164 * 4 + 0x52f) =
                                         *(int *)(this_00 + (int)pAStack_164 * 4 + 0x52f) *
                                         (int)pAStack_160;
                                    break;
                                  case 0x3e:
                                    *(int *)(this_00 + (int)pAStack_164 * 4 + 0x52f) =
                                         *(int *)(this_00 + (int)pAStack_164 * 4 + 0x52f) -
                                         (int)pAStack_160;
                                  }
                                  break;
                                case (uint ******)0x3:
                                  iVar33 = thunk_FUN_0064eaa0((int)asStack_16c);
                                  if (iVar33 == 0) goto LAB_00652a99;
                                  if (iVar6 == 5) {
                                    Library::DKW::TBL::FUN_006b6020
                                              (*(int *)(this_00 + 0x5b3),(uint)pAStack_164,
                                               (char *)pAStack_160);
                                  }
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                              switch(iVar6) {
                              case 2:
                              case 5:
                              case 0x17:
                              case 0x2d:
                              case 0x31:
                                goto switchD_00652b42_switchD;
                              case 0x19:
                                iVar33 = thunk_FUN_0064e6c0((int)asStack_16c);
                                if (iVar33 == 0) goto LAB_00652a99;
                                if (iStack_174 != 0) {
                                  iStack_174 = 0;
                                  pAStack_170 = pAStack_164;
                                  pAVar11 = pAStack_170;
                                  goto LAB_00659a80;
                                }
                                iStack_174 = 0;
                                break;
                              case 0x21:
                                iVar33 = thunk_FUN_0064e740((int)asStack_16c);
                                pAVar11 = pAStack_164;
                                if (iVar33 == 0) goto LAB_00652a99;
                                goto LAB_00659a80;
                              case 0x23:
                                iVar33 = thunk_FUN_0064e680((int)asStack_16c);
                                if (iVar33 == 0) goto LAB_00652a99;
                                if (pAStack_164 == (AiFltClassTy *)0x0) {
                                  pAStack_170 = pAStack_160;
                                  pAVar11 = pAStack_170;
                                  goto LAB_00659a80;
                                }
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                            switch(iVar6) {
                            case 0x51b:
                              iVar33 = thunk_FUN_0064e9a0((int)asStack_16c);
                              if (iVar33 == 0) goto LAB_00652a99;
                              Library::DKW::TBL::FUN_006b6020
                                        (*(int *)(this_00 + 0x5b3),(uint)pAStack_164,
                                         (char *)pAStack_160);
                              break;
                            case 0x528:
                              bVar31 = thunk_FUN_0064eb20((int)asStack_16c);
                              if (CONCAT31(extraout_var,bVar31) != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  pAVar11 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                               (uint)pAStack_160,
                                                               (uint *)appppppuStack_34);
                                  if (0 < (int)pAVar11) {
                                    pppppppuVar25 = appppppuStack_34;
                                    pAStack_c = pAVar11;
                                    pCVar18 = DAT_00801688;
                                    do {
                                      if (pCVar18 != (CPanelTy *)0x0) {
                                        thunk_FUN_004f9120(pCVar18,*(byte *)pppppppuVar25,'\x01',
                                                           ppppppuStack_15c);
                                        pCVar18 = DAT_00801688;
                                      }
                                      pppppppuVar25 = pppppppuVar25 + 1;
                                      pAStack_c = pAStack_c + -1;
                                    } while (pAStack_c != (AiFltClassTy *)0x0);
                                  }
                                  break;
                                }
                              }
                              goto LAB_00652a99;
                            case 0x529:
                              iVar33 = thunk_FUN_0064eb60((int)asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  pAVar11 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                               (uint)pAStack_160,
                                                               (uint *)appppppuStack_34);
                                  if (0 < (int)pAVar11) {
                                    pppppppuVar25 = appppppuStack_34;
                                    pAStack_c = pAVar11;
                                    pCVar18 = DAT_00801688;
                                    do {
                                      pAStack_c = pAVar11;
                                      if (pCVar18 != (CPanelTy *)0x0) {
                                        thunk_FUN_004f9120(pCVar18,*(byte *)pppppppuVar25,'\0',0);
                                        pCVar18 = DAT_00801688;
                                      }
                                      pppppppuVar25 = pppppppuVar25 + 1;
                                      pAVar11 = pAStack_c + -1;
                                      pAStack_c = pAVar11;
                                    } while (pAVar11 != (AiFltClassTy *)0x0);
                                  }
                                  break;
                                }
                              }
                              goto LAB_00652a99;
                            case 0x52a:
                              iVar33 = thunk_FUN_0064eba0((int)asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                             (uint)pAStack_160,
                                                             (uint *)appppppuStack_34);
                                  iVar33 = 0;
                                  if (0 < iVar6) {
                                    pppppppuVar25 = appppppuStack_34;
                                    do {
                                      if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d) {
                                        if (DAT_00801688 != (CPanelTy *)0x0) {
                                          thunk_FUN_004f9260((char)ppppppuStack_15c);
                                        }
                                        break;
                                      }
                                      iVar33 = iVar33 + 1;
                                      pppppppuVar25 = pppppppuVar25 + 1;
                                    } while (iVar33 < iVar6);
                                  }
                                  break;
                                }
                              }
                              goto LAB_00652a99;
                            case 0x532:
                              bVar31 = thunk_FUN_0064ebe0((int)asStack_16c);
                              if (CONCAT31(extraout_var_00,bVar31) == 0) goto LAB_00652a99;
                              if (DAT_008016d8 != (void *)0x0) {
                                if (pAStack_164 == (AiFltClassTy *)0x9) {
                                  iVar6 = (**(code **)(*(int *)this_00 + 0x18))();
                                  if (iVar6 == 8) {
                                    thunk_FUN_0052d320(DAT_008016d8,(char *)ppppppuStack_15c,8);
                                    break;
                                  }
                                }
                                iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                           (uint)pAStack_160,
                                                           (uint *)appppppuStack_34);
                                iVar33 = 0;
                                if (0 < iVar6) {
                                  pppppppuVar25 = appppppuStack_34;
                                  do {
                                    if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d) {
                                      thunk_FUN_0052d320(DAT_008016d8,(char *)ppppppuStack_15c,8);
                                      break;
                                    }
                                    iVar33 = iVar33 + 1;
                                    pppppppuVar25 = pppppppuVar25 + 1;
                                  } while (iVar33 < iVar6);
                                }
                              }
                              break;
                            case 0x533:
                              bVar31 = thunk_FUN_0064ec30((int)asStack_16c);
                              if (CONCAT31(extraout_var_01,bVar31) == 0) goto LAB_00652a99;
                              if (pAStack_164 == (AiFltClassTy *)0x9) {
                                iVar6 = (**(code **)(*(int *)this_00 + 0x18))();
                                if (iVar6 == 8) {
                                  if (DAT_00801694 != (void *)0x0) {
                                    thunk_FUN_0051fac0(DAT_00801694,(char *)pbStack_154,2,
                                                       (char)puStack_158,
                                                       (int)ppppppuStack_15c * 1000);
                                  }
                                  break;
                                }
                              }
                              iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                         (uint)pAStack_160,(uint *)appppppuStack_34)
                              ;
                              iVar33 = 0;
                              if (0 < iVar6) {
                                pppppppuVar25 = appppppuStack_34;
                                do {
                                  if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d) {
                                    if (DAT_00801694 != (void *)0x0) {
                                      thunk_FUN_0051fac0(DAT_00801694,(char *)pbStack_154,2,
                                                         (char)puStack_158,
                                                         (int)ppppppuStack_15c * 1000);
                                    }
                                    break;
                                  }
                                  iVar33 = iVar33 + 1;
                                  pppppppuVar25 = pppppppuVar25 + 1;
                                } while (iVar33 < iVar6);
                              }
                              break;
                            case 0x534:
                              bVar31 = thunk_FUN_0064ec80((int)asStack_16c);
                              if (CONCAT31(extraout_var_02,bVar31) == 0) goto LAB_00652a99;
                              if (pAStack_164 == (AiFltClassTy *)0x9) {
                                iVar6 = (**(code **)(*(int *)this_00 + 0x18))();
                                if (iVar6 == 8) {
LAB_006536dd:
                                  if (DAT_00801688 != (CPanelTy *)0x0) {
                                    CPanelTy::OutText(DAT_00801688,(int)puStack_158,
                                                      (int)(pbStack_154 + (1 - (int)puStack_158)),
                                                      ppppppuStack_15c);
                                  }
                                  break;
                                }
                              }
                              iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                         (uint)pAStack_160,(uint *)appppppuStack_34)
                              ;
                              iVar33 = 0;
                              if (0 < iVar6) {
                                pppppppuVar25 = appppppuStack_34;
                                do {
                                  if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d)
                                  goto LAB_006536dd;
                                  iVar33 = iVar33 + 1;
                                  pppppppuVar25 = pppppppuVar25 + 1;
                                } while (iVar33 < iVar6);
                              }
                              break;
                            case 0x535:
                              bVar31 = thunk_FUN_0064ecd0((int)asStack_16c);
                              if (CONCAT31(extraout_var_03,bVar31) == 0) goto LAB_00652a99;
                              if (pAStack_164 == (AiFltClassTy *)0x9) {
                                iVar6 = (**(code **)(*(int *)this_00 + 0x18))();
                                if (iVar6 == 8) {
LAB_00653778:
                                  if (DAT_00801688 != (CPanelTy *)0x0) {
                                    CPanelTy::OutText(DAT_00801688,(char *)puStack_158,
                                                      ppppppuStack_15c);
                                  }
                                  break;
                                }
                              }
                              iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                         (uint)pAStack_160,(uint *)appppppuStack_34)
                              ;
                              iVar33 = 0;
                              if (0 < iVar6) {
                                pppppppuVar25 = appppppuStack_34;
                                do {
                                  if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d)
                                  goto LAB_00653778;
                                  iVar33 = iVar33 + 1;
                                  pppppppuVar25 = pppppppuVar25 + 1;
                                } while (iVar33 < iVar6);
                              }
                              break;
                            case 0x536:
                              bVar31 = thunk_FUN_0064ed20((int)asStack_16c);
                              if (CONCAT31(extraout_var_04,bVar31) == 0) goto LAB_00652a99;
                              if (pAStack_164 == (AiFltClassTy *)0x9) {
                                iVar6 = (**(code **)(*(int *)this_00 + 0x18))();
                                if (iVar6 == 8) {
                                  SoundClassTy::PlaySound_thunk
                                            ((SoundClassTy *)&g_sound,SOUND_MODE_12,
                                             (char *)ppppppuStack_15c,0,(SoundPosition *)0x0,0);
                                  break;
                                }
                              }
                              iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                         (uint)pAStack_160,(uint *)appppppuStack_34)
                              ;
                              iVar33 = 0;
                              if (0 < iVar6) {
                                pppppppuVar25 = appppppuStack_34;
                                do {
                                  if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d) {
                                    SoundClassTy::PlaySound_thunk
                                              ((SoundClassTy *)&g_sound,SOUND_MODE_12,
                                               (char *)ppppppuStack_15c,0,(SoundPosition *)0x0,0);
                                    break;
                                  }
                                  iVar33 = iVar33 + 1;
                                  pppppppuVar25 = pppppppuVar25 + 1;
                                } while (iVar33 < iVar6);
                              }
                              break;
                            case 0x537:
                              bVar31 = thunk_FUN_0064ed70((int)asStack_16c);
                              if (CONCAT31(extraout_var_05,bVar31) == 0) goto LAB_00652a99;
                              if (pAStack_164 == (AiFltClassTy *)0x9) {
                                iVar6 = (**(code **)(*(int *)this_00 + 0x18))();
                                if (iVar6 == 8) {
                                  if (DAT_00801688 != (CPanelTy *)0x0) {
                                    CPanelTy::PlayBriefing(DAT_00801688,(char *)ppppppuStack_15c);
                                  }
                                  break;
                                }
                              }
                              iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                         (uint)pAStack_160,(uint *)appppppuStack_34)
                              ;
                              iVar33 = 0;
                              if (0 < iVar6) {
                                pppppppuVar25 = appppppuStack_34;
                                do {
                                  if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d) {
                                    if (DAT_00801688 != (CPanelTy *)0x0) {
                                      CPanelTy::PlayBriefing(DAT_00801688,(char *)ppppppuStack_15c);
                                    }
                                    break;
                                  }
                                  iVar33 = iVar33 + 1;
                                  pppppppuVar25 = pppppppuVar25 + 1;
                                } while (iVar33 < iVar6);
                              }
                              break;
                            case 0x546:
                              iVar33 = thunk_FUN_0064edc0((int)asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                             (uint)pAStack_160,
                                                             (uint *)appppppuStack_34);
                                  iVar33 = 0;
                                  if (0 < iVar6) {
                                    pppppppuVar25 = appppppuStack_34;
                                    do {
                                      if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d) {
                                        if (DAT_00802a88 != (VisibleClassTy *)0x0) {
                                          if ((int)pcStack_14c < 0) {
                                            iVar6 = -0x10;
                                          }
                                          else {
                                            iVar6 = (int)pcStack_14c * 0x19;
                                          }
                                          VisibleClassTy::VisHoleCreate
                                                    (DAT_00802a88,(int)ppppppuStack_15c,
                                                     (int)puStack_158,pbStack_154,
                                                     (uint)appppppuStack_34[iVar33],pbStack_150,
                                                     iVar6);
                                        }
                                        break;
                                      }
                                      iVar33 = iVar33 + 1;
                                      pppppppuVar25 = pppppppuVar25 + 1;
                                    } while (iVar33 < iVar6);
                                  }
                                  break;
                                }
                              }
                              goto LAB_00652a99;
                            case 0x547:
                            case 0x548:
                              iVar33 = thunk_FUN_0064ee00((int)asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  pAStack_10 = (AiFltClassTy *)
                                               thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                  (uint)pAStack_160,
                                                                  (uint *)appppppuStack_34);
                                  iVar33 = 0;
                                  if (0 < (int)pAStack_10) {
                                    pppppppuVar25 = appppppuStack_34;
                                    do {
                                      if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d) {
                                        if (DAT_00802a88 == (VisibleClassTy *)0x0) break;
                                        if (*(int *)(DAT_00802a88 + 0x114) == 0) {
                                          *(undefined4 *)(DAT_00802a88 + 0xf8) = 0;
                                        }
                                        else {
                                          *(uint *)(DAT_00802a88 + 0xf8) = (uint)(iVar6 == 0x547);
                                          iVar33 = DAT_00807598;
                                          if ((iVar6 == 0x547) != 0) {
                                            *(undefined4 *)(DAT_00807598 + 0x466) = 1;
                                            *(undefined4 *)(iVar33 + 0x2d8) = 1;
                                            break;
                                          }
                                        }
                                        iVar6 = DAT_00807598;
                                        *(undefined4 *)(DAT_00807598 + 0x466) = 0;
                                        *(undefined4 *)(iVar6 + 0x2d8) = 1;
                                        break;
                                      }
                                      iVar33 = iVar33 + 1;
                                      pppppppuVar25 = pppppppuVar25 + 1;
                                    } while (iVar33 < (int)pAStack_10);
                                  }
                                  break;
                                }
                              }
                              goto LAB_00652a99;
                            case 0x549:
                              iVar33 = thunk_FUN_0064ee40(asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                             (uint)pAStack_160,
                                                             (uint *)appppppuStack_34);
                                  iVar33 = 0;
                                  if (0 < iVar6) {
                                    pppppppuVar25 = appppppuStack_34;
                                    do {
                                      if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d) {
                                        if (DAT_007fb2a0 != 0) {
                                          thunk_FUN_004ab530((int)pbStack_154,(int)ppppppuStack_15c,
                                                             (int)puStack_158);
                                        }
                                        break;
                                      }
                                      iVar33 = iVar33 + 1;
                                      pppppppuVar25 = pppppppuVar25 + 1;
                                    } while (iVar33 < iVar6);
                                  }
                                  break;
                                }
                              }
                              goto LAB_00652a99;
                            case 0x54a:
                              iVar33 = thunk_FUN_0064ee90((int)asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  pAStack_10 = (AiFltClassTy *)
                                               thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                  (uint)pAStack_160,
                                                                  (uint *)appppppuStack_34);
                                  iVar33 = 0;
                                  if (0 < (int)pAStack_10) {
                                    pppppppuVar25 = appppppuStack_34;
LAB_00653bb7:
                                    if (*pppppppuVar25 != (uint ******)(uint)DAT_0080874d)
                                    goto code_r0x00653bbb;
                                    if (DAT_007fb2a0 != 0) {
                                      puVar29 = auStack_1c0;
                                      for (iVar33 = 8; iVar33 != 0; iVar33 = iVar33 + -1) {
                                        *puVar29 = 0;
                                        puVar29 = puVar29 + 1;
                                      }
                                      switch(ppppppuStack_15c) {
                                      case (uint ******)0x0:
                                        iStack_1b0 = 0x104;
                                        break;
                                      case (uint ******)0x1:
                                        iStack_1b0 = 0x105;
                                        break;
                                      case (uint ******)0x2:
                                        iStack_1b0 = 0x106;
                                        break;
                                      case (uint ******)0x3:
                                        iStack_1b0 = 0x107;
                                        break;
                                      default:
                                        iVar33 = -1;
                                        uVar28 = uStack_14;
                                        pcVar24 = thunk_FUN_00674af0(iVar6);
                                        thunk_FUN_0064d0e0(this_00,-0x7d,pcVar24,uVar28,iVar33);
                                        uVar28 = uStack_14;
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                      (**(code **)(*(int *)this_00 + 0x30))(3,0x100,auStack_1c0);
                                      uVar28 = uStack_14;
                                    }
                                  }
                                  break;
                                }
                              }
                              goto LAB_00652a99;
                            case 0x54b:
                            case 0x54c:
                              iVar33 = thunk_FUN_0064eed0((int)asStack_16c);
                              if (iVar33 != 0) {
                                iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                                if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                  pAStack_10 = (AiFltClassTy *)
                                               thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                  (uint)pAStack_160,
                                                                  (uint *)appppppuStack_34);
                                  iVar33 = 0;
                                  if (0 < (int)pAStack_10) {
                                    pppppppuVar25 = appppppuStack_34;
                                    do {
                                      if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d) {
                                        if (DAT_007fb2a0 != 0) {
                                          puVar29 = auStack_1c0;
                                          for (iVar33 = 8; iVar33 != 0; iVar33 = iVar33 + -1) {
                                            *puVar29 = 0;
                                            puVar29 = puVar29 + 1;
                                          }
                                          iStack_1b0 = (iVar6 != 0x54b) + 0x100;
                                          (**(code **)(*(int *)this_00 + 0x30))(3,0x100,auStack_1c0)
                                          ;
                                          uVar28 = uStack_14;
                                        }
                                        break;
                                      }
                                      iVar33 = iVar33 + 1;
                                      pppppppuVar25 = pppppppuVar25 + 1;
                                    } while (iVar33 < (int)pAStack_10);
                                  }
                                  break;
                                }
                              }
                              goto LAB_00652a99;
                            }
                            goto switchD_00652a7f_caseD_3;
                          }
                          switch(iVar6) {
                          case 0x54e:
                            iVar33 = thunk_FUN_0064ef50((int)asStack_16c);
                            if (iVar33 != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                           (uint)pAStack_160,
                                                           (uint *)appppppuStack_34);
                                iVar33 = 0;
                                if (0 < iVar6) {
                                  pppppppuVar25 = appppppuStack_34;
                                  do {
                                    if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d) {
                                      thunk_FUN_0052af90((byte)ppppppuStack_15c,(int)puStack_158,
                                                         (int)pbStack_154);
                                      break;
                                    }
                                    iVar33 = iVar33 + 1;
                                    pppppppuVar25 = pppppppuVar25 + 1;
                                  } while (iVar33 < iVar6);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          default:
                            goto switchD_00652a7f_caseD_3;
                          case 0x55a:
                            iVar33 = thunk_FUN_0064f080((int)asStack_16c);
                            if (iVar33 != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                pAVar11 = (AiFltClassTy *)
                                          thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                             (uint)pAStack_160,
                                                             (uint *)appppppuStack_34);
                                if (0 < (int)pAVar11) {
                                  pppppppuVar25 = appppppuStack_34;
                                  pAStack_c = pAVar11;
                                  do {
                                    ppppppuVar12 = *pppppppuVar25;
                                    (&DAT_00809950)[(int)ppppppuVar12] =
                                         ((uint *******)ppppppuStack_15c != (uint *******)0x1) +
                                         '\x01';
                                    if (ppppppuVar12 == (uint ******)(uint)DAT_0080874d) {
                                      DAT_0080c522 = (uint)((uint *******)ppppppuStack_15c ==
                                                           (uint *******)0x1);
                                    }
                                    pppppppuVar25 = pppppppuVar25 + 1;
                                    pAStack_c = pAStack_c + -1;
                                  } while (pAStack_c != (AiFltClassTy *)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x55b:
                            bVar31 = thunk_FUN_0064f0c0((int)asStack_16c);
                            if (CONCAT31(extraout_var_06,bVar31) != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                           (uint)pAStack_160,
                                                           (uint *)appppppuStack_34);
                                iVar33 = 0;
                                if (0 < iVar6) {
                                  pppppppuVar25 = appppppuStack_34;
                                  do {
                                    if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d) {
                                      if ((*(char *)ppppppuStack_15c != '\0') &&
                                         ((DAT_008087a0 == '\x03' || (DAT_008087a0 == '\b')))) {
                                        Library::MSVCRT::FUN_0072e730
                                                  (&DAT_0080ef1e,(byte *)0x0,abStack_384,(byte *)0x0
                                                   ,(byte *)0x0);
                                        Library::MSVCRT::__makepath
                                                  (&DAT_0080c632,(char *)0x0,(char *)abStack_384,
                                                   (char *)ppppppuStack_15c,(char *)0x0);
                                      }
                                      break;
                                    }
                                    iVar33 = iVar33 + 1;
                                    pppppppuVar25 = pppppppuVar25 + 1;
                                  } while (iVar33 < iVar6);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x55c:
                            iVar33 = thunk_FUN_0064f110(asStack_16c);
                            if (iVar33 != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                           (uint)pAStack_160,
                                                           (uint *)appppppuStack_34);
                                iVar33 = 0;
                                if (0 < iVar6) {
                                  do {
                                    (&DAT_0080c947)[iVar33] = puStack_158;
                                    if (appppppuStack_34[iVar33] == (uint ******)(uint)DAT_0080874d)
                                    {
                                      DAT_0080e301 = ppppppuStack_15c._0_1_;
                                    }
                                    iVar33 = iVar33 + 1;
                                  } while (iVar33 < iVar6);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x55d:
                            bVar31 = thunk_FUN_0064f160((int)asStack_16c);
                            if (CONCAT31(extraout_var_07,bVar31) != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                           (uint)pAStack_160,
                                                           (uint *)appppppuStack_34);
                                iVar33 = 0;
                                if (0 < iVar6) {
                                  pppppppuVar25 = appppppuStack_34;
LAB_006540b9:
                                  if (*pppppppuVar25 != (uint ******)(uint)DAT_0080874d)
                                  goto code_r0x006540bd;
                                  DAT_0080e300 = ppppppuStack_15c._0_1_;
                                  puVar29 = &DAT_0080e303;
                                  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
                                    *puVar29 = 0;
                                    puVar29 = puVar29 + 1;
                                  }
                                  Library::MSVCRT::_strncpy
                                            ((char *)&DAT_0080e303,(char *)puStack_158,0x1f);
                                  uVar28 = uStack_14;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x55e:
                            bVar31 = thunk_FUN_0064f1b0(asStack_16c);
                            if (CONCAT31(extraout_var_08,bVar31) != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                           (uint)pAStack_160,
                                                           (uint *)appppppuStack_34);
                                iVar33 = 0;
                                if (0 < iVar6) {
                                  pppppppuVar25 = appppppuStack_34;
                                  do {
                                    if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d) {
                                      DAT_0080e302 = ppppppuStack_15c._0_1_;
                                      DAT_0080e429 = pbStack_154._0_1_;
                                      DAT_0080e428 = pcStack_14c._0_1_;
                                      DAT_0080e427 = pbStack_150._0_1_;
                                      _DAT_0080e432 = uStack_140;
                                      _DAT_0080e42a = pcStack_148;
                                      _DAT_0080e42e = pAStack_144;
                                      _DAT_0080e436 = iStack_13c;
                                      DAT_0080e43a = pcStack_138._0_1_;
                                      if (DAT_008087a0 == '\x03') {
                                        Library::MSVCRT::FUN_0072e730
                                                  (&DAT_0080ef1e,(byte *)0x0,abStack_484,(byte *)0x0
                                                   ,(byte *)0x0);
                                        Library::MSVCRT::__makepath
                                                  ((char *)&DAT_0080f33a,(char *)0x0,
                                                   (char *)abStack_484,(char *)puStack_158,
                                                   (char *)0x0);
                                        wsprintfA(&DAT_0080e323,&DAT_007c6ee4,&DAT_00807784,
                                                  &DAT_0080f33a);
                                      }
                                      else if (DAT_008087a0 == '\b') {
                                        wsprintfA(&DAT_0080e323,&DAT_007c6ee4,&DAT_00807784,
                                                  puStack_158);
                                      }
                                      break;
                                    }
                                    iVar33 = iVar33 + 1;
                                    pppppppuVar25 = pppppppuVar25 + 1;
                                  } while (iVar33 < iVar6);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x55f:
                            bVar31 = thunk_FUN_0064ef90((int)asStack_16c);
                            if (CONCAT31(extraout_var_09,bVar31) != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                           (uint)pAStack_160,
                                                           (uint *)appppppuStack_34);
                                iVar33 = 0;
                                if (0 < iVar6) {
                                  pppppppuVar25 = appppppuStack_34;
                                  do {
                                    if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d) {
                                      iVar6 = Library::DKW::TBL::FUN_006b5aa0
                                                        ((int)DAT_0080c4cb,(char *)puStack_158);
                                      if (DAT_008016dc != (OptPanelTy *)0x0) {
                                        OptPanelTy::UpdateObjectives(DAT_008016dc);
                                      }
                                      if (-1 < iVar6) {
                                        *(int *)(this_00 + (int)ppppppuStack_15c * 4 + 0xde) = iVar6
                                        ;
                                      }
                                      break;
                                    }
                                    iVar33 = iVar33 + 1;
                                    pppppppuVar25 = pppppppuVar25 + 1;
                                  } while (iVar33 < iVar6);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x560:
                            iVar33 = thunk_FUN_0064f000((int)asStack_16c);
                            if (iVar33 != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                           (uint)pAStack_160,
                                                           (uint *)appppppuStack_34);
                                iVar33 = 0;
                                if (0 < iVar6) {
                                  pppppppuVar25 = appppppuStack_34;
LAB_00654362:
                                  if (*pppppppuVar25 != (uint ******)(uint)DAT_0080874d)
                                  goto code_r0x00654366;
                                  FUN_006c87c0((int)DAT_0080c4cb,(uint)ppppppuStack_15c);
LAB_00654386:
                                  if (DAT_008016dc != (OptPanelTy *)0x0) {
                                    OptPanelTy::UpdateObjectives(DAT_008016dc);
                                  }
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x561:
                            iVar33 = thunk_FUN_0064f040((int)asStack_16c);
                            if (iVar33 != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                           (uint)pAStack_160,
                                                           (uint *)appppppuStack_34);
                                iVar33 = 0;
                                if (0 < iVar6) {
                                  pppppppuVar25 = appppppuStack_34;
                                  do {
                                    if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d) {
                                      if (DAT_0080c4cb != (uint *)0x0) {
                                        FUN_006b5570((byte *)DAT_0080c4cb);
                                      }
                                      DAT_0080c4cb = Library::DKW::TBL::FUN_006b54f0
                                                               ((uint *)0x0,10,10);
                                      goto LAB_00654386;
                                    }
                                    iVar33 = iVar33 + 1;
                                    pppppppuVar25 = pppppppuVar25 + 1;
                                  } while (iVar33 < iVar6);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x562:
                            bVar31 = thunk_FUN_0064ef90((int)asStack_16c);
                            if (CONCAT31(extraout_var_10,bVar31) != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                           (uint)pAStack_160,
                                                           (uint *)appppppuStack_34);
                                iVar33 = 0;
                                if (0 < iVar6) {
                                  pppppppuVar25 = appppppuStack_34;
                                  do {
                                    if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d) {
                                      if (DAT_0080c4c7 == (uint *)0x0) {
                                        DAT_0080c4c7 = Library::DKW::TBL::FUN_006b54f0
                                                                 ((uint *)0x0,10,10);
                                      }
                                      iVar6 = Library::DKW::TBL::FUN_006b5aa0
                                                        ((int)DAT_0080c4c7,(char *)puStack_158);
                                      if (-1 < iVar6) {
                                        *(int *)(this_00 + (int)ppppppuStack_15c * 4 + 0xde) = iVar6
                                        ;
                                      }
                                      break;
                                    }
                                    iVar33 = iVar33 + 1;
                                    pppppppuVar25 = pppppppuVar25 + 1;
                                  } while (iVar33 < iVar6);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x563:
                            iVar33 = thunk_FUN_0064f000((int)asStack_16c);
                            if (iVar33 != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                           (uint)pAStack_160,
                                                           (uint *)appppppuStack_34);
                                iVar33 = 0;
                                if (0 < iVar6) {
                                  pppppppuVar25 = appppppuStack_34;
                                  do {
                                    if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d) {
                                      if (DAT_0080c4c7 != (uint *)0x0) {
                                        FUN_006c87c0((int)DAT_0080c4c7,(uint)ppppppuStack_15c);
                                      }
                                      break;
                                    }
                                    iVar33 = iVar33 + 1;
                                    pppppppuVar25 = pppppppuVar25 + 1;
                                  } while (iVar33 < iVar6);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x564:
                            iVar33 = thunk_FUN_0064f040((int)asStack_16c);
                            if (iVar33 != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                           (uint)pAStack_160,
                                                           (uint *)appppppuStack_34);
                                iVar33 = 0;
                                if (0 < iVar6) {
                                  pppppppuVar25 = appppppuStack_34;
                                  do {
                                    if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d) {
                                      if (DAT_0080c4c7 != (uint *)0x0) {
                                        FUN_006b5570((byte *)DAT_0080c4c7);
                                      }
                                      DAT_0080c4c7 = Library::DKW::TBL::FUN_006b54f0
                                                               ((uint *)0x0,10,10);
                                      break;
                                    }
                                    iVar33 = iVar33 + 1;
                                    pppppppuVar25 = pppppppuVar25 + 1;
                                  } while (iVar33 < iVar6);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x565:
                          case 0x566:
                            iVar33 = thunk_FUN_0064f320((int)asStack_16c);
                            if (iVar33 != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if (((iVar33 != 8) ||
                                  (((uint *******)ppppppuStack_15c != (uint *******)0x9 &&
                                   (pAStack_164 != (AiFltClassTy *)0x9)))) &&
                                 ((uint *******)ppppppuStack_15c != (uint *******)0xff)) {
                                iVar33 = thunk_FUN_00668f50(this_00,(char *)ppppppuStack_15c,0,
                                                            (uint *)appppppuStack_34);
                                if (iVar33 == 1) {
                                  ppppppuStack_8 = appppppuStack_34[0];
                                  pAVar11 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                               (uint)pAStack_160,
                                                               (uint *)appppppuStack_34);
                                  pAStack_10 = pAVar11;
                                  if (0 < (int)pAVar11) {
                                    pppppppuVar25 = appppppuStack_34;
                                    uStack_1a0 = CONCAT31(uStack_1a0._1_3_,iVar6 == 0x565);
                                    pAStack_c = pAVar11;
                                    do {
                                      pAStack_c = pAVar11;
                                      thunk_FUN_0056a8d0(&DAT_00807620,
                                                         CONCAT31((int3)((uint)pAVar11 >> 8),
                                                                  *(undefined1 *)pppppppuVar25),
                                                         (byte)ppppppuStack_8,(char)uStack_1a0);
                                      pppppppuVar25 = pppppppuVar25 + 1;
                                      pAVar11 = pAStack_c + -1;
                                      pAStack_c = pAVar11;
                                    } while (pAVar11 != (AiFltClassTy *)0x0);
                                  }
                                  pvVar16 = DAT_008016e4;
                                  if ((DAT_008016e4 != (void *)0x0) &&
                                     (pAStack_10 != (AiFltClassTy *)0x0)) {
                                    ppppppuStack_8 = (uint ******)((int)DAT_008016e4 + 0x181);
                                    *(undefined4 *)((int)DAT_008016e4 + 0x28) = 5;
                                    pAStack_c = (AiFltClassTy *)0x8;
                                    do {
                                      if ((uint ******)*ppppppuStack_8 != (uint ******)0x0) {
                                        FUN_006e6080(pvVar16,2,*ppppppuStack_8,
                                                     (undefined4 *)((int)pvVar16 + 0x18));
                                      }
                                      ppppppuStack_8 = ppppppuStack_8 + 1;
                                      pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                    } while (pAStack_c != (AiFltClassTy *)0x0);
                                    pAStack_c = (AiFltClassTy *)0x0;
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                            }
                            break;
                          case 0x567:
                            iVar33 = thunk_FUN_0064f360((int)asStack_16c);
                            if (iVar33 != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                pAStack_10 = (AiFltClassTy *)
                                             thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                                (uint)pAStack_160,
                                                                (uint *)appppppuStack_34);
                                if (0 < (int)pAStack_10) {
                                  pppppppuVar25 = appppppuStack_34;
                                  pAStack_c = pAStack_10;
                                  do {
                                    thunk_FUN_0056aa00(&DAT_00807620,*(byte *)pppppppuVar25,
                                                       (char)ppppppuStack_15c);
                                    pppppppuVar25 = pppppppuVar25 + 1;
                                    pAStack_c = pAStack_c + -1;
                                  } while (pAStack_c != (AiFltClassTy *)0x0);
                                }
                                pvVar16 = DAT_008016e4;
                                if ((DAT_008016e4 != (void *)0x0) &&
                                   (pAStack_10 != (AiFltClassTy *)0x0)) {
                                  ppppppuStack_8 = (uint ******)((int)DAT_008016e4 + 0x181);
                                  *(undefined4 *)((int)DAT_008016e4 + 0x28) = 5;
                                  pAStack_c = (AiFltClassTy *)0x8;
                                  do {
                                    if ((uint ******)*ppppppuStack_8 != (uint ******)0x0) {
                                      FUN_006e6080(pvVar16,2,*ppppppuStack_8,
                                                   (undefined4 *)((int)pvVar16 + 0x18));
                                    }
                                    ppppppuStack_8 = ppppppuStack_8 + 1;
                                    pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                  } while (pAStack_c != (AiFltClassTy *)0x0);
                                  pAStack_c = (AiFltClassTy *)0x0;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x568:
                            iVar33 = thunk_FUN_0064f3b0((int)asStack_16c);
                            if (iVar33 != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                           (uint)pAStack_160,
                                                           (uint *)appppppuStack_34);
                                iVar33 = 0;
                                if (0 < iVar6) {
                                  pppppppuVar25 = appppppuStack_34;
                                  do {
                                    if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d) {
                                      DAT_00808790 = 1;
                                      break;
                                    }
                                    iVar33 = iVar33 + 1;
                                    pppppppuVar25 = pppppppuVar25 + 1;
                                  } while (iVar33 < iVar6);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x56a:
                            iVar33 = thunk_FUN_0064f3f0((int)asStack_16c);
                            if (iVar33 == 0) break;
                            thunk_FUN_0056abc0(&DAT_00807620,(char *)pAStack_164);
                            goto switchD_00652a7f_caseD_3;
                          case 0x578:
                            bVar31 = thunk_FUN_0064f430((int)asStack_16c);
                            if (CONCAT31(extraout_var_11,bVar31) != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                pAVar11 = (AiFltClassTy *)
                                          thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                             (uint)pAStack_160,
                                                             (uint *)appppppuStack_34);
                                if (0 < (int)pAVar11) {
                                  pppppppuVar25 = appppppuStack_34;
                                  pAStack_c = pAVar11;
                                  do {
                                    pppppppuVar13 = (uint *******)ppppppuStack_15c;
                                    if ((int)ppppppuStack_15c < 0) {
                                      pppppppuVar13 = (uint *******)(DAT_00808a90 >> 8 & 0xff);
                                    }
                                    thunk_FUN_004d86a0((uint)*pppppppuVar25,(int)pppppppuVar13);
                                    pppppppuVar25 = pppppppuVar25 + 1;
                                    pAStack_c = pAStack_c + -1;
                                  } while (pAStack_c != (AiFltClassTy *)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x579:
                            bVar31 = thunk_FUN_0064f470((int)asStack_16c);
                            if (CONCAT31(extraout_var_12,bVar31) != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                pAVar11 = (AiFltClassTy *)
                                          thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                             (uint)pAStack_160,
                                                             (uint *)appppppuStack_34);
                                if (0 < (int)pAVar11) {
                                  pppppppuVar25 = appppppuStack_34;
                                  pAStack_c = pAVar11;
                                  do {
                                    pppppppuVar13 = (uint *******)ppppppuStack_15c;
                                    if ((int)ppppppuStack_15c < 0) {
                                      pppppppuVar13 = (uint *******)(DAT_00808a90 >> 0x10 & 0xff);
                                    }
                                    puVar14 = puStack_158;
                                    if ((int)puStack_158 < 0) {
                                      puVar14 = (uint *)(DAT_00808a90 >> 0x18);
                                    }
                                    thunk_FUN_004e51b0((int *)*pppppppuVar25,(uint *)pppppppuVar13,
                                                       puVar14);
                                    pppppppuVar25 = pppppppuVar25 + 1;
                                    pAStack_c = pAStack_c + -1;
                                  } while (pAStack_c != (AiFltClassTy *)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x57a:
                            bVar31 = thunk_FUN_0064f4c0((int)asStack_16c);
                            if (CONCAT31(extraout_var_13,bVar31) == 0) break;
                            pAVar11 = pAStack_164;
                            if ((int)pAStack_164 < 0) {
                              pAVar11 = (AiFltClassTy *)(DAT_00808a90 & 0xff);
                            }
                            thunk_FUN_004d8760((int)pAVar11);
                            goto switchD_00652a7f_caseD_3;
                          case 0x57b:
                            iVar33 = thunk_FUN_0064f500(asStack_16c);
                            if (iVar33 != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                ppppppuStack_8 = ppppppuStack_15c;
                                if ((int)ppppppuStack_15c < 0) {
                                  ppppppuStack_8 = (uint ******)(uint)DAT_00808a9b;
                                }
                                pAVar11 = (AiFltClassTy *)
                                          thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                             (uint)pAStack_160,
                                                             (uint *)appppppuStack_34);
                                if (0 < (int)pAVar11) {
                                  pppppppuVar25 = appppppuStack_34;
                                  pAStack_c = pAVar11;
                                  do {
                                    ppppppuVar12 = *pppppppuVar25;
                                    cVar1 = (&DAT_008087e8)[(int)ppppppuVar12 * 0x51];
                                    uVar23 = (undefined2)((uint)pbStack_150 >> 0x10);
                                    if (cVar1 == '\x01') {
                                      if ((int)ppppppuStack_8 < 3) {
                                        if ((uint *******)ppppppuStack_8 == (uint *******)0x2) {
                                          __CreateObjPl(this_00,CONCAT22(uVar23,*(undefined2 *)
                                                                                 pppppppuVar25),0xc,
                                                        (int)puStack_158,(int)pbStack_154,
                                                        pbStack_150,0xfffe,0xffffffff,(char *)0x0,
                                                        100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150
                                                                                >> 0x10),
                                                                         *(undefined2 *)
                                                                          pppppppuVar25),1,
                                                        (int)puStack_158,(int)pbStack_154,
                                                        pbStack_150,0xfffe,0xffffffff,(char *)0x0,
                                                        100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150
                                                                                >> 0x10),
                                                                         *(undefined2 *)
                                                                          pppppppuVar25),1,
                                                        (int)puStack_158,(int)pbStack_154,
                                                        pbStack_150,0xfffe,0xffffffff,(char *)0x0,
                                                        100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150
                                                                                >> 0x10),
                                                                         *(undefined2 *)
                                                                          pppppppuVar25),2,
                                                        (int)puStack_158,(int)pbStack_154,
                                                        pbStack_150,0xfffe,0xffffffff,(char *)0x0,
                                                        100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150
                                                                                >> 0x10),
                                                                         *(undefined2 *)
                                                                          pppppppuVar25),3,
                                                        (int)puStack_158,(int)pbStack_154,
                                                        pbStack_150,0xfffe,0xffffffff,(char *)0x0,
                                                        100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150
                                                                                >> 0x10),
                                                                         *(undefined2 *)
                                                                          pppppppuVar25),6,
                                                        (int)puStack_158,(int)pbStack_154,
                                                        pbStack_150,0xfffe,0xffffffff,(char *)0x0,
                                                        100,1,0,0);
                                        }
                                        else if ((uint *******)ppppppuStack_8 == (uint *******)0x0)
                                        {
                                          __CreateObjPl(this_00,CONCAT22(uVar23,*(undefined2 *)
                                                                                 pppppppuVar25),0xc,
                                                        (int)puStack_158,(int)pbStack_154,
                                                        pbStack_150,0xfffe,0xffffffff,(char *)0x0,
                                                        100,1,0,0);
                                        }
                                        else {
                                          if ((uint *******)ppppppuStack_8 != (uint *******)0x1)
                                          goto LAB_00655324;
                                          __CreateObjPl(this_00,CONCAT22(uVar23,*(undefined2 *)
                                                                                 pppppppuVar25),0xc,
                                                        (int)puStack_158,(int)pbStack_154,
                                                        pbStack_150,0xfffe,0xffffffff,(char *)0x0,
                                                        100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150
                                                                                >> 0x10),
                                                                         *(undefined2 *)
                                                                          pppppppuVar25),1,
                                                        (int)puStack_158,(int)pbStack_154,
                                                        pbStack_150,0xfffe,0xffffffff,(char *)0x0,
                                                        100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150
                                                                                >> 0x10),
                                                                         *(undefined2 *)
                                                                          pppppppuVar25),1,
                                                        (int)puStack_158,(int)pbStack_154,
                                                        pbStack_150,0xfffe,0xffffffff,(char *)0x0,
                                                        100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150
                                                                                >> 0x10),
                                                                         *(undefined2 *)
                                                                          pppppppuVar25),2,
                                                        (int)puStack_158,(int)pbStack_154,
                                                        pbStack_150,0xfffe,0xffffffff,(char *)0x0,
                                                        100,1,0,0);
                                        }
                                      }
                                      else {
joined_r0x00655322:
                                        if ((uint *******)ppppppuStack_8 != (uint *******)0xff) {
LAB_00655324:
                                          uVar28 = uStack_14;
                                          pcVar24 = thunk_FUN_00674af0(iVar6);
                                          thunk_FUN_0064d0e0(this_00,-0x7d,pcVar24,uVar28,
                                                             (int)ppppppuVar12);
                                        }
                                      }
                                    }
                                    else if (cVar1 == '\x02') {
                                      if (2 < (int)ppppppuStack_8) goto joined_r0x00655322;
                                      if ((uint *******)ppppppuStack_8 == (uint *******)0x2) {
                                        __CreateObjPl(this_00,CONCAT22(uVar23,*(undefined2 *)
                                                                               pppppppuVar25),0x18,
                                                      (int)puStack_158,(int)pbStack_154,pbStack_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0xd,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0xd,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0xe,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0xf,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0x12,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                      }
                                      else if ((uint *******)ppppppuStack_8 == (uint *******)0x0) {
                                        __CreateObjPl(this_00,CONCAT22(uVar23,*(undefined2 *)
                                                                               pppppppuVar25),0x18,
                                                      (int)puStack_158,(int)pbStack_154,pbStack_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                      }
                                      else {
                                        if ((uint *******)ppppppuStack_8 != (uint *******)0x1)
                                        goto LAB_00655324;
                                        __CreateObjPl(this_00,CONCAT22(uVar23,*(undefined2 *)
                                                                               pppppppuVar25),0x18,
                                                      (int)puStack_158,(int)pbStack_154,pbStack_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0xd,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0xd,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0xe,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                      }
                                    }
                                    else if (cVar1 == '\x03') {
                                      if (2 < (int)ppppppuStack_8) goto joined_r0x00655322;
                                      if ((uint *******)ppppppuStack_8 == (uint *******)0x2) {
                                        __CreateObjPl(this_00,CONCAT22(uVar23,*(undefined2 *)
                                                                               pppppppuVar25),0x19,
                                                      (int)puStack_158,(int)pbStack_154,pbStack_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0x19,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0x19,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0x1e,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0x1e,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0x1e,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0x20,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0x22,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                      }
                                      else if ((uint *******)ppppppuStack_8 == (uint *******)0x0) {
                                        __CreateObjPl(this_00,CONCAT22(uVar23,*(undefined2 *)
                                                                               pppppppuVar25),0x19,
                                                      (int)puStack_158,(int)pbStack_154,pbStack_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0x19,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0x19,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                      }
                                      else {
                                        if ((uint *******)ppppppuStack_8 != (uint *******)0x1)
                                        goto LAB_00655324;
                                        __CreateObjPl(this_00,CONCAT22(uVar23,*(undefined2 *)
                                                                               pppppppuVar25),0x19,
                                                      (int)puStack_158,(int)pbStack_154,pbStack_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0x19,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0x19,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0x1e,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0x1e,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)pbStack_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar25)
                                                      ,0x1e,(int)puStack_158,(int)pbStack_154,
                                                      pbStack_150,0xfffe,0xffffffff,(char *)0x0,100,
                                                      1,0,0);
                                      }
                                    }
                                    pppppppuVar25 = pppppppuVar25 + 1;
                                    pAStack_c = pAStack_c + -1;
                                    uVar28 = uStack_14;
                                  } while (pAStack_c != (AiFltClassTy *)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x582:
                            iVar33 = thunk_FUN_0064f5a0((int)asStack_16c);
                            if (iVar33 != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                pAVar11 = (AiFltClassTy *)
                                          thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                             (uint)pAStack_160,
                                                             (uint *)appppppuStack_34);
                                if (0 < (int)pAVar11) {
                                  pppppppuVar25 = appppppuStack_34;
                                  pAStack_c = pAVar11;
                                  uVar7 = extraout_ECX;
                                  uVar20 = extraout_EDX;
                                  do {
                                    switch(ppppppuStack_15c) {
                                    case (uint ******)0xdc:
                                      if (puStack_158 == (uint *)0x0) {
                                        thunk_FUN_004d88b0(*(char *)pppppppuVar25,pbStack_154);
                                      }
                                      else if ((int)puStack_158 < 1) {
                                        thunk_FUN_004d8800(*(char *)pppppppuVar25,(int)pbStack_154);
                                      }
                                      else {
                                        thunk_FUN_004d87b0(*(char *)pppppppuVar25,(int)pbStack_154);
                                      }
                                      break;
                                    case (uint ******)0xdd:
                                      if (puStack_158 == (uint *)0x0) {
                                        thunk_FUN_004d89f0(*(char *)pppppppuVar25,pbStack_154);
                                      }
                                      else if ((int)puStack_158 < 1) {
                                        thunk_FUN_004d8940(*(char *)pppppppuVar25,(int)pbStack_154);
                                      }
                                      else {
                                        thunk_FUN_004d88f0(*(char *)pppppppuVar25,(int)pbStack_154);
                                      }
                                      break;
                                    case (uint ******)0xde:
                                      if (puStack_158 == (uint *)0x0) {
                                        thunk_FUN_004d8b30(*(char *)pppppppuVar25,pbStack_154);
                                      }
                                      else if ((int)puStack_158 < 1) {
                                        thunk_FUN_004d8a80(*(char *)pppppppuVar25,(int)pbStack_154);
                                      }
                                      else {
                                        thunk_FUN_004d8a30(*(char *)pppppppuVar25,(int)pbStack_154);
                                      }
                                      break;
                                    case (uint ******)0xdf:
                                      if (puStack_158 == (uint *)0x0) {
                                        thunk_FUN_004b7140(CONCAT31((int3)((uint)uVar20 >> 8),
                                                                    *(char *)pppppppuVar25),
                                                           (int)pbStack_154);
                                      }
                                      else if ((int)puStack_158 < 1) {
                                        thunk_FUN_004b70d0(CONCAT31((int3)((uint)puStack_158 >> 8),
                                                                    *(char *)pppppppuVar25),
                                                           (int)pbStack_154);
                                      }
                                      else {
                                        thunk_FUN_004b7080(CONCAT31((int3)((uint)uVar7 >> 8),
                                                                    *(char *)pppppppuVar25),
                                                           (int)pbStack_154);
                                      }
                                      break;
                                    case (uint ******)0xe2:
                                      if (puStack_158 == (uint *)0x0) {
                                        thunk_FUN_004e4440((int)*pppppppuVar25,pbStack_154);
                                      }
                                      else if ((int)puStack_158 < 1) {
                                        thunk_FUN_004e43c0((int)*pppppppuVar25,(int)pbStack_154);
                                      }
                                      else {
                                        thunk_FUN_004e4380((int)*pppppppuVar25,(int)pbStack_154);
                                      }
                                      break;
                                    case (uint ******)0xe3:
                                      if (puStack_158 == (uint *)0x0) {
                                        thunk_FUN_004e41f0((int)*pppppppuVar25,pbStack_154);
                                      }
                                      else if ((int)puStack_158 < 1) {
                                        thunk_FUN_004e4330((int)*pppppppuVar25,(int)pbStack_154);
                                      }
                                      else {
                                        thunk_FUN_004e4270((int)*pppppppuVar25,(int)pbStack_154);
                                      }
                                    }
                                    if (*pppppppuVar25 == (uint ******)(uint)DAT_0080874d) {
                                      thunk_FUN_004d8b70((char)*pppppppuVar25);
                                    }
                                    thunk_FUN_004d78e0(*(char *)pppppppuVar25);
                                    pppppppuVar25 = pppppppuVar25 + 1;
                                    pAStack_c = pAStack_c + -1;
                                    uVar7 = extraout_ECX_00;
                                    uVar20 = extraout_EDX_00;
                                  } while (pAStack_c != (AiFltClassTy *)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x583:
                            iVar33 = thunk_FUN_0064f5e0((int)asStack_16c);
                            if (iVar33 == 0) break;
                            if (pAStack_164 == (AiFltClassTy *)0x0) {
                              thunk_FUN_004d8320(pAStack_160);
                              goto switchD_00652a7f_caseD_3;
                            }
                            if ((int)pAStack_164 < 1) {
                              pAStack_c = pAStack_160;
                              iVar6 = thunk_FUN_004d82b0(0);
                              if ((int)pAStack_c < iVar6) {
                                iVar6 = thunk_FUN_004d82b0(0);
                                pAVar11 = (AiFltClassTy *)(iVar6 - (int)pAStack_c);
                                goto LAB_0065565b;
                              }
                            }
                            else {
                              pAStack_c = pAStack_160;
                              iVar6 = thunk_FUN_004d82b0(0);
                              pAVar11 = pAStack_c + iVar6;
LAB_0065565b:
                              thunk_FUN_004d8320(pAVar11);
                            }
                            thunk_FUN_004d82b0(0);
                            goto switchD_00652a7f_caseD_3;
                          case 0x584:
                            iVar33 = thunk_FUN_0064f620(asStack_16c);
                            if (iVar33 == 0) break;
                            thunk_FUN_0064e5c0((char)pAStack_164,pAStack_160,ppppppuStack_15c,
                                               puStack_158,pbStack_154);
                            goto switchD_00652a7f_caseD_3;
                          case 0x585:
                            iVar33 = thunk_FUN_0064f6e0();
                            if (iVar33 == 0) break;
                            DAT_00808794 = thunk_FUN_0056f930(0x807620);
                            goto switchD_00652a7f_caseD_3;
                          case 0x58c:
                            iVar33 = thunk_FUN_0064f700(asStack_16c);
                            if (iVar33 == 0) break;
                            piVar26 = (int *)0x0;
                            sVar19 = (short)pAStack_160;
                            sVar17 = (short)ppppppuStack_15c;
                            sVar5 = (short)puStack_158;
                            if (pbStack_154 == (byte *)0x0) {
                              if ((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
                                  ((sVar17 < 0 || ((DAT_007fb242 <= sVar17 || (sVar5 < 0)))))) ||
                                 (DAT_007fb244 <= sVar5)) {
LAB_00655871:
                                piVar26 = (int *)0x0;
                              }
                              else {
                                piVar26 = *(int **)(DAT_007fb248 +
                                                   ((int)sVar5 * (int)DAT_007fb246 +
                                                    (int)sVar17 * (int)DAT_007fb240 + (int)sVar19) *
                                                   8);
                              }
                            }
                            else if (pbStack_154 == (byte *)0x1) {
                              if (((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) || (sVar17 < 0)) ||
                                  ((DAT_007fb242 <= sVar17 || (sVar5 < 0)))) ||
                                 (DAT_007fb244 <= sVar5)) goto LAB_00655871;
                              piVar26 = *(int **)(DAT_007fb248 + 4 +
                                                 ((int)sVar5 * (int)DAT_007fb246 +
                                                  (int)sVar17 * (int)DAT_007fb240 + (int)sVar19) * 8
                                                 );
                            }
                            else if (pbStack_154 == (byte *)0x2) {
                              iVar6 = thunk_FUN_006785a0((byte *)0x0,-1,sVar19,sVar17,sVar5,1,1,1,
                                                         &LAB_00404c73,0);
                              if ((iVar6 == -1) && (DAT_00811984 != (int *)0x0)) {
                                piVar26 = DAT_00811984;
                              }
                            }
                            if ((piVar26 != (int *)0x0) && (pAStack_164 != (AiFltClassTy *)0x0)) {
                              (**(code **)(*piVar26 + 0x70))(pAStack_164);
                            }
                            goto switchD_00652a7f_caseD_3;
                          case 0x58d:
                            iVar33 = thunk_FUN_0064f780(asStack_16c);
                            if (iVar33 != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                            (uint)pAStack_160,
                                                            (uint *)appppppuStack_34);
                                if (0 < iVar33) {
                                  pAStack_10 = (AiFltClassTy *)appppppuStack_34;
                                  ppppppuStack_8 = (uint ******)iVar33;
                                  do {
                                    pAStack_c = pAStack_144;
                                    uVar32 = uVar28;
                                    if ((int)pAStack_144 < 0) {
                                      pAStack_c = (AiFltClassTy *)0xfffe;
LAB_00655972:
                                      iVar33 = __CreateObjPl(this_00,CONCAT22((short)((uint)
                                                  puStack_158 >> 0x10),*(undefined2 *)pAStack_10),
                                                  (short)ppppppuStack_15c,(int)puStack_158,
                                                  (int)pbStack_154,pbStack_150,pAStack_c,
                                                  (uint)pcStack_14c,pcStack_148,uStack_140,
                                                  iStack_13c,(int)pcStack_138,iStack_134);
                                      if (iVar33 != 0) {
LAB_006559d0:
                                        uVar22 = *(uint *)pAStack_10;
LAB_006559d6:
                                        pcVar24 = thunk_FUN_00674af0(iVar6);
                                        iVar33 = -0xab;
                                        goto LAB_006559e3;
                                      }
                                    }
                                    else {
                                      if ((int)pAStack_144 < 1) goto LAB_00655972;
                                      iVar33 = thunk_FUN_0042b760(CONCAT31((int3)((uint)pAStack_144
                                                                                 >> 8),*pAStack_10),
                                                                  (uint)pAStack_144);
                                      if (iVar33 != 0) {
                                        iVar33 = thunk_FUN_00423300(iVar33);
                                        if (iVar33 != 0) {
                                          if (((int)ppppppuStack_15c < 0x32) ||
                                             (0x73 < (int)ppppppuStack_15c)) {
                                            bVar31 = false;
                                          }
                                          else {
                                            bVar31 = true;
                                          }
                                          if (((!bVar31) || (*(short *)(iVar33 + 0x7b) == 1)) &&
                                             (*(short *)(iVar33 + 0x7b) != -0x8000))
                                          goto LAB_00655972;
                                          goto LAB_006559d0;
                                        }
                                        uVar22 = *(uint *)pAStack_10;
                                        goto LAB_006559d6;
                                      }
                                      uVar22 = *(uint *)pAStack_10;
                                      pcVar24 = &DAT_008016a0;
                                      iVar33 = -0xaa;
LAB_006559e3:
                                      thunk_FUN_0064d0e0(this_00,iVar33,pcVar24,uVar32,uVar22);
                                    }
                                    pAStack_10 = pAStack_10 + 4;
                                    ppppppuStack_8 = (uint ******)((int)ppppppuStack_8 + -1);
                                  } while (ppppppuStack_8 != (uint ******)0x0);
                                  ppppppuStack_8 = (uint ******)0x0;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x58e:
                            iVar33 = thunk_FUN_0064f900(asStack_16c);
                            if (iVar33 != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                           (uint)pAStack_160,
                                                           (uint *)appppppuStack_34);
                                if (0 < iVar6) {
                                  pAStack_10 = (AiFltClassTy *)appppppuStack_34;
                                  pAStack_c = (AiFltClassTy *)iVar6;
                                  do {
                                    ppppppuStack_8 =
                                         (uint ******)thunk_FUN_00676170(*(uint *)pAStack_10);
                                    if ((uint *******)ppppppuStack_8 != (uint *******)0x0) {
                                      ppppppuVar27 = (uint ******)0x0;
                                      ppppppuVar12 = (uint ******)ppppppuStack_8[3];
                                      pppppppuVar25 = extraout_EDX_01;
                                      if (0 < (int)ppppppuVar12) {
                                        do {
                                          if (ppppppuVar27 < ppppppuVar12) {
                                            pppppppuVar25 = (uint *******)ppppppuStack_8[7];
                                            pppppppuVar13 =
                                                 (uint *******)
                                                 ((int)ppppppuStack_8[2] * (int)ppppppuVar27 +
                                                 (int)pppppppuVar25);
                                          }
                                          else {
                                            pppppppuVar13 = (uint *******)0x0;
                                          }
                                          STAllPlayersC::DestroyObjectMsg
                                                    (DAT_007fa174,
                                                     (undefined4 *)
                                                     CONCAT31((int3)((uint)ppppppuStack_15c >> 8),
                                                              *pAStack_10),
                                                     CONCAT22((short)((uint)pppppppuVar25 >> 0x10),
                                                              *(ushort *)pppppppuVar13),1,
                                                     ppppppuStack_15c);
                                          ppppppuVar27 = (uint ******)((int)ppppppuVar27 + 1);
                                          ppppppuVar12 = (uint ******)ppppppuStack_8[3];
                                          pppppppuVar25 = (uint *******)ppppppuStack_8;
                                        } while ((int)ppppppuVar27 < (int)ppppppuVar12);
                                      }
                                      FUN_006ae110((byte *)ppppppuStack_8);
                                    }
                                    pAStack_10 = pAStack_10 + 4;
                                    pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                  } while (pAStack_c != (AiFltClassTy *)0x0);
                                  pAStack_c = (AiFltClassTy *)0x0;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x58f:
                            iVar33 = thunk_FUN_0064f950(asStack_16c);
                            if (iVar33 != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                iVar6 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                           (uint)pAStack_160,
                                                           (uint *)appppppuStack_34);
                                if (0 < iVar6) {
                                  pAStack_10 = (AiFltClassTy *)appppppuStack_34;
                                  pAStack_c = (AiFltClassTy *)iVar6;
                                  do {
                                    if (pbStack_154._0_1_ == (AiFltClassTy)0x8) {
                                      AVar4 = *pAStack_10;
                                    }
                                    else if (((char)pbStack_154._0_1_ < '\0') ||
                                            (AVar4 = pbStack_154._0_1_,
                                            '\b' < (char)pbStack_154._0_1_)) {
                                      AVar4 = (AiFltClassTy)0xff;
                                    }
                                    puVar14 = thunk_FUN_006775e0(*(uint *)pAStack_10,
                                                                 (uint)puStack_158,
                                                                 (uint)ppppppuStack_15c,pbStack_150,
                                                                 (char)AVar4,(short)pcStack_14c,
                                                                 (short)pcStack_148,
                                                                 (short)pAStack_144,
                                                                 (short)uStack_140,(short)iStack_13c
                                                                 ,(short)pcStack_138,1);
                                    if (puVar14 != (uint *)0x0) {
                                      uVar28 = 0;
                                      if (0 < (int)puVar14[3]) {
                                        bVar31 = puVar14[3] != 0;
                                        uVar7 = extraout_EDX_02;
                                        do {
                                          if (bVar31) {
                                            puVar15 = (undefined2 *)
                                                      (puVar14[2] * uVar28 + puVar14[7]);
                                          }
                                          else {
                                            puVar15 = (undefined2 *)0x0;
                                          }
                                          STAllPlayersC::DestroyObjectMsg
                                                    (DAT_007fa174,
                                                     (undefined4 *)
                                                     CONCAT31((int3)((uint)iStack_134 >> 8),
                                                              *pAStack_10),
                                                     CONCAT22((short)((uint)uVar7 >> 0x10),*puVar15)
                                                     ,1,iStack_134);
                                          uVar28 = uVar28 + 1;
                                          bVar31 = uVar28 < puVar14[3];
                                          uVar7 = extraout_EDX_03;
                                        } while ((int)uVar28 < (int)puVar14[3]);
                                      }
                                      FUN_006ae110((byte *)puVar14);
                                    }
                                    pAStack_10 = pAStack_10 + 4;
                                    pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                  } while (pAStack_c != (AiFltClassTy *)0x0);
                                  pAStack_c = (AiFltClassTy *)0x0;
                                  uVar28 = uStack_14;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x590:
                            iVar33 = thunk_FUN_0064fb00(asStack_16c);
                            if (iVar33 != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                iVar33 = thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                            (uint)pAStack_160,
                                                            (uint *)appppppuStack_34);
                                if (0 < iVar33) {
                                  ppppppuStack_8 = (uint ******)appppppuStack_34;
                                  pAStack_c = (AiFltClassTy *)iVar33;
                                  do {
                                    iVar33 = _CreateRCCont(this_00,CONCAT22((short)((uint)
                                                  puStack_158 >> 0x10),*(ushort *)ppppppuStack_8),
                                                  (short)ppppppuStack_15c,(int)puStack_158,
                                                  (int)pbStack_154,pbStack_150,pcStack_14c,
                                                  pcStack_148,(int)pAStack_144);
                                    if (iVar33 != 0) {
                                      ppppppuVar12 = (uint ******)*ppppppuStack_8;
                                      uVar32 = uVar28;
                                      pcVar24 = thunk_FUN_00674af0(iVar6);
                                      thunk_FUN_0064d0e0(this_00,-0xab,pcVar24,uVar32,
                                                         (int)ppppppuVar12);
                                    }
                                    ppppppuStack_8 = ppppppuStack_8 + 1;
                                    pAStack_c = (AiFltClassTy *)((int)pAStack_c + -1);
                                  } while (pAStack_c != (AiFltClassTy *)0x0);
                                  pAStack_c = (AiFltClassTy *)0x0;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x591:
                            iVar33 = thunk_FUN_0064fb80(asStack_16c);
                            if (iVar33 != 0) {
                              iVar33 = (**(code **)(*(int *)this_00 + 0x18))();
                              if ((iVar33 != 8) || (pAStack_164 != (AiFltClassTy *)0x9)) {
                                pAVar11 = (AiFltClassTy *)
                                          thunk_FUN_00668f50(this_00,(char *)pAStack_164,
                                                             (uint)pAStack_160,
                                                             (uint *)appppppuStack_34);
                                if (0 < (int)pAVar11) {
                                  pppppppuVar25 = appppppuStack_34;
                                  pAStack_c = pAVar11;
                                  do {
                                    DAT_008118fc = 0;
                                    thunk_FUN_00677be0(*(short *)pppppppuVar25,
                                                       (short)ppppppuStack_15c,(byte *)puStack_158,
                                                       (short)pbStack_154,(short)pbStack_150,
                                                       (short)pcStack_14c,(short)pcStack_148,
                                                       (short)pAStack_144,(short)uStack_140,
                                                       &LAB_004050a1,&iStack_13c);
                                    pppppppuVar25 = pppppppuVar25 + 1;
                                    pAStack_c = pAStack_c + -1;
                                  } while (pAStack_c != (AiFltClassTy *)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x592:
                            iVar33 = thunk_FUN_0064fce0(asStack_16c);
                            if (iVar33 == 0) break;
                            iVar33 = _CreateArt(this_00,(short)pAStack_164,(short)pAStack_160,
                                                (int)ppppppuStack_15c,(int)puStack_158,pbStack_154,
                                                (char *)pbStack_150,pcStack_14c,pcStack_148);
LAB_00655f44:
                            if (iVar33 != 0) {
LAB_00655f4c:
                              iVar33 = -1;
                              uVar32 = uVar28;
                              pcVar24 = thunk_FUN_00674af0(iVar6);
                              thunk_FUN_0064d0e0(this_00,-0xab,pcVar24,uVar32,iVar33);
                            }
                            goto switchD_00652a7f_caseD_3;
                          }
LAB_00652a99:
                          iVar33 = -1;
                          uVar32 = uVar28;
                          pcVar24 = thunk_FUN_00674af0(iVar6);
                          thunk_FUN_0064d0e0(this_00,-0x7d,pcVar24,uVar32,iVar33);
switchD_00652a7f_caseD_3:
                          pAVar11 = pAStack_170 + 1;
LAB_00659a80:
                          pAStack_170 = pAVar11;
                          iVar6 = *(int *)(pcStack_178 + 0xf);
                          pAVar11 = *(AiFltClassTy **)(iVar6 + 0xc);
                        } while ((int)pAStack_170 < (int)pAVar11);
                      }
                    }
                    goto LAB_00659aae;
                  }
                  iVar33 = -1;
                  pAVar8 = (AiEventClassTy *)thunk_FUN_00674af0(iVar6);
                  iVar6 = -0x7d;
                }
                thunk_FUN_0064d0e0(this_00,iVar6,pAVar8,uVar32,iVar33);
                *pcVar24 = '\x01';
                pcVar24[0xb] = '\0';
                pcVar24[0xc] = '\0';
                pcVar24[0xd] = '\0';
                pcVar24[0xe] = '\0';
              }
            }
            else if (*(int *)(pcVar24 + 0xb) != 0) {
              if (*(int *)(pcVar24 + 0xb) == 1) {
                *pcVar24 = '\0';
              }
              *(int *)(pcVar24 + 0xb) = *(int *)(pcVar24 + 0xb) + -1;
            }
LAB_00659aae:
            iVar6 = *(int *)(this_00 + 0x4ee);
            uStack_14 = uVar28 + 1;
            bVar31 = uStack_14 < *(uint *)(iVar6 + 0xc);
          } while ((int)uStack_14 < (int)*(uint *)(iVar6 + 0xc));
        }
        iVar3 = iStack_19c;
        iVar6 = *(int *)(this_00 + 0x4e2);
        iVar33 = *(int *)(iVar6 + 8);
        while (iVar3 < iVar33) {
          FUN_006b7830(iVar6,iVar33 - 1);
          iVar6 = *(int *)(this_00 + 0x4e2);
          iVar33 = *(int *)(iVar6 + 8);
        }
        if (iStack_194 == 0x456) {
          *(int *)(this_00 + 0xd6) = *(int *)(this_00 + 0xd6) + 1;
        }
        g_currentExceptionFrame = IStack_284.previous;
        return;
      }
      g_currentExceptionFrame = IStack_284.previous;
      if (pbStack_180 != (byte *)0x0) {
        FUN_006ae110(pbStack_180);
      }
      pbStack_180 = (byte *)0x0;
      thunk_FUN_0064d0e0(pAStack_188,iVar6,&DAT_008016a0,uStack_14,-1);
    }
  }
  return;
code_r0x00653bbb:
  iVar33 = iVar33 + 1;
  pppppppuVar25 = pppppppuVar25 + 1;
  if ((int)pAStack_10 <= iVar33) goto switchD_00652a7f_caseD_3;
  goto LAB_00653bb7;
code_r0x00654366:
  iVar33 = iVar33 + 1;
  pppppppuVar25 = pppppppuVar25 + 1;
  if (iVar6 <= iVar33) goto switchD_00652a7f_caseD_3;
  goto LAB_00654362;
code_r0x006540bd:
  iVar33 = iVar33 + 1;
  pppppppuVar25 = pppppppuVar25 + 1;
  if (iVar6 <= iVar33) goto switchD_00652a7f_caseD_3;
  goto LAB_006540b9;
}

