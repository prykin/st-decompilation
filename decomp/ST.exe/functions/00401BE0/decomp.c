
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __thiscall thunk_FUN_00652810(void *this,int param_1)

{
  byte bVar1;
  int iVar2;
  int *this_00;
  char cVar3;
  short sVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  short *psVar9;
  undefined1 *puVar10;
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
  uint ***********pppppppppppuVar11;
  undefined2 *puVar12;
  undefined3 extraout_var_14;
  void *pvVar13;
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
  short sVar14;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  short sVar15;
  uint ************ppppppppppppuVar16;
  undefined2 uVar21;
  undefined4 extraout_EDX;
  undefined4 uVar17;
  undefined4 extraout_EDX_00;
  uint ***********extraout_EDX_01;
  uint ***********pppppppppppuVar18;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  ushort *puVar19;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  uint uVar20;
  char *pcVar22;
  uint ************ppppppppppppuVar23;
  uint ***********pppppppppppuVar24;
  uint uVar25;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar26;
  uint **ppuVar27;
  bool bVar28;
  uint uVar29;
  int iVar30;
  byte abStack_484 [256];
  byte abStack_384 [256];
  uint **ppuStack_284;
  undefined4 auStack_280 [16];
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
  uint *puStack_194;
  uint ************ppppppppppppuStack_190;
  uint ************ppppppppppppuStack_18c;
  int *piStack_188;
  uint *puStack_184;
  byte *pbStack_180;
  void *pvStack_17c;
  char *pcStack_178;
  int iStack_174;
  uint ************ppppppppppppuStack_170;
  short asStack_16c [4];
  uint ************ppppppppppppuStack_164;
  uint ************ppppppppppppuStack_160;
  uint ************ppppppppppppuStack_15c;
  uint *puStack_158;
  byte *pbStack_154;
  byte *pbStack_150;
  char *pcStack_14c;
  char *pcStack_148;
  uint ************ppppppppppppuStack_144;
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
  uint ************appppppppppppuStack_34 [8];
  uint uStack_14;
  uint ************ppppppppppppuStack_10;
  uint ************ppppppppppppuStack_c;
  uint ************ppppppppppppuStack_8;
  
  pbStack_180 = (byte *)0x0;
  iStack_198 = 0;
  puVar5 = (uint *)0x0;
  if ((DAT_007fa174 != 0) &&
     (piStack_188 = this, puVar5 = (uint *)thunk_FUN_0065bd70(this,param_1,0), -1 < (int)puVar5)) {
    puStack_194 = puVar5;
    uVar6 = (**(code **)(*(int *)this + 0x18))();
    *(undefined4 *)((int)this + 0x52b) = uVar6;
    if (puVar5 == (uint *)0x456) {
      uVar25 = *(uint *)(DAT_00802a38 + 0xe4);
      if ((uVar25 % 0x19 != *(uint *)((int)this + 0xd2)) && (uVar25 != 1)) {
        return (uint *)(uVar25 / 0x19);
      }
    }
    iStack_19c = *(int *)(*(int *)((int)this + 0x4e2) + 8);
    ppuStack_284 = DAT_00858df8;
    DAT_00858df8 = (uint **)&ppuStack_284;
    iVar7 = __setjmp3(auStack_280,0,unaff_EDI,unaff_ESI);
    this_00 = piStack_188;
    if (iVar7 == 0) {
      uStack_14 = 0;
      iVar7 = *(int *)((int)piStack_188 + 0x4ee);
      bVar28 = *(int *)(iVar7 + 0xc) != 0;
      if (0 < *(int *)(iVar7 + 0xc)) {
        do {
          uVar25 = uStack_14;
          if (bVar28) {
            pcVar22 = (char *)(*(int *)(iVar7 + 8) * uStack_14 + *(int *)(iVar7 + 0x1c));
          }
          else {
            pcVar22 = (char *)0x0;
          }
          pcStack_178 = pcVar22;
          if (*pcVar22 == '\0') {
            if (*(uint **)(pcVar22 + 5) == puStack_194) {
              if (iStack_198 == 0) {
                thunk_FUN_0065bd70(this_00,param_1,1);
                iStack_198 = 1;
              }
              iVar7 = thunk_FUN_00672440((int)this_00 + 0x4fa,(int)*(short *)(pcVar22 + 9),
                                         asStack_16c);
              uVar29 = uVar25;
              if (iVar7 < 0) {
                iVar30 = this_00[0x21];
                piVar8 = this_00 + 1;
              }
              else {
                if (cStack_9c == '\b') {
                  if (ppppppppppppuStack_164 != (uint ************)0x0) {
                    *pcVar22 = '\x01';
                    pcVar22[0xb] = '\0';
                    pcVar22[0xc] = '\0';
                    pcVar22[0xd] = '\0';
                    pcVar22[0xe] = '\0';
                    iVar7 = *(int *)(pcVar22 + 0xf);
                    ppppppppppppuStack_170 = (uint ************)0x0;
                    iStack_174 = 0;
                    ppppppppppppuVar23 = *(uint *************)(iVar7 + 0xc);
                    if (0 < (int)ppppppppppppuVar23) {
                      do {
                        if (ppppppppppppuStack_170 < ppppppppppppuVar23) {
                          psVar9 = (short *)(*(int *)(iVar7 + 8) * (int)ppppppppppppuStack_170 +
                                            *(int *)(iVar7 + 0x1c));
                        }
                        else {
                          psVar9 = (short *)0x0;
                        }
                        iVar7 = thunk_FUN_00672440((int)this_00 + 0x4fa,(int)*psVar9,asStack_16c);
                        if (iVar7 < 0) {
                          thunk_FUN_0064d0e0(this_00,iVar7,this_00 + 1,uVar25,-1);
                          goto switchD_00652a7f_caseD_3;
                        }
                        if (iVar7 != 0x19) {
                          iStack_174 = 0;
                        }
                        if (0x593 < iVar7) {
                          if (0x5c8 < iVar7) {
                            if (iVar7 < 0x76d) {
                              if (iVar7 != 0x76c) {
                                switch(iVar7) {
                                case 0x5dc:
                                  iVar30 = thunk_FUN_00651010(asStack_16c);
                                  if (iVar30 != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      ppppppppppppuVar23 =
                                           (uint ************)
                                           thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164
                                                              ,(uint)ppppppppppppuStack_160,
                                                              (uint *)appppppppppppuStack_34);
                                      if (0 < (int)ppppppppppppuVar23) {
                                        ppppppppppppuVar16 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = ppppppppppppuVar23;
                                        do {
                                          thunk_FUN_0064e300((int)*ppppppppppppuVar16,
                                                             (char *)ppppppppppppuStack_15c,
                                                             (short)puStack_158,(char)pbStack_154,
                                                             (short)pbStack_150,(char)pcStack_14c,
                                                             (uint)pcStack_148);
                                          ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5dd:
                                  bVar28 = thunk_FUN_00651120((int)asStack_16c);
                                  if (CONCAT31(extraout_var_15,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_10 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_10 >> 8),
                                                  *(char *)ppppppppppppuStack_10),
                                                  (uint)ppppppppppppuStack_15c);
                                          if (iVar30 == 0) {
                                            thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar25,
                                                               (int)*ppppppppppppuStack_10);
                                          }
                                          else {
                                            pvVar13 = (void *)thunk_FUN_00423300(iVar30);
                                            if (pvVar13 == (void *)0x0) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_10;
                                              uVar29 = uVar25;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              thunk_FUN_0064d0e0(this_00,-0xab,pcVar22,uVar29,
                                                                 (int)pppppppppppuVar11);
                                            }
                                            else {
                                              thunk_FUN_0065d630(pvVar13,extraout_EDX_04);
                                            }
                                          }
                                          ppppppppppppuStack_10 = ppppppppppppuStack_10 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5de:
                                  bVar28 = thunk_FUN_00651160((int)asStack_16c);
                                  if (CONCAT31(extraout_var_16,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_10 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_10 >> 8),
                                                  *(char *)ppppppppppppuStack_10),
                                                  (uint)ppppppppppppuStack_15c);
                                          if (iVar30 == 0) {
                                            thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar25,
                                                               (int)*ppppppppppppuStack_10);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (iVar30 == 0) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_10;
                                              uVar29 = uVar25;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              thunk_FUN_0064d0e0(this_00,-0xab,pcVar22,uVar29,
                                                                 (int)pppppppppppuVar11);
                                            }
                                            else {
                                              thunk_FUN_0065e6c0(iVar30,extraout_EDX_05);
                                            }
                                          }
                                          ppppppppppppuStack_10 = ppppppppppppuStack_10 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5df:
                                  bVar28 = thunk_FUN_00651160((int)asStack_16c);
                                  if (CONCAT31(extraout_var_17,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_10 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_8 = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_10 >> 8),
                                                  *(char *)ppppppppppppuStack_10),
                                                  (uint)ppppppppppppuStack_15c);
                                          if (iVar30 == 0) {
                                            thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar25,
                                                               (int)*ppppppppppppuStack_10);
                                          }
                                          else {
                                            pvStack_17c = (void *)thunk_FUN_00423300(iVar30);
                                            if (pvStack_17c == (void *)0x0) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_10;
                                              uVar29 = uVar25;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              thunk_FUN_0064d0e0(this_00,-0xab,pcVar22,uVar29,
                                                                 (int)pppppppppppuVar11);
                                            }
                                            else {
                                              ppppppppppppuStack_c =
                                                   (uint ************)
                                                   thunk_FUN_00676170(*ppppppppppppuStack_10);
                                              if (ppppppppppppuStack_c != (uint ************)0x0) {
                                                thunk_FUN_0065d940(pvStack_17c,
                                                                   (int)ppppppppppppuStack_c,0);
                                                FUN_006ae110((byte *)ppppppppppppuStack_c);
                                              }
                                            }
                                          }
                                          ppppppppppppuStack_10 = ppppppppppppuStack_10 + 1;
                                          ppppppppppppuStack_8 =
                                               (uint ************)((int)ppppppppppppuStack_8 + -1);
                                        } while (ppppppppppppuStack_8 != (uint ************)0x0);
                                        ppppppppppppuStack_8 = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5e0:
                                  bVar28 = thunk_FUN_006511a0((int)asStack_16c);
                                  if (CONCAT31(extraout_var_18,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      ppppppppppppuVar23 =
                                           (uint ************)
                                           thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164
                                                              ,(uint)ppppppppppppuStack_160,
                                                              (uint *)appppppppppppuStack_34);
                                      if (0 < (int)ppppppppppppuVar23) {
                                        ppppppppppppuVar16 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = ppppppppppppuVar23;
                                        uVar6 = extraout_ECX_01;
                                        do {
                                          pvVar13 = (void *)thunk_FUN_0042b760(CONCAT31((int3)((uint
                                                  )uVar6 >> 8),*(undefined1 *)ppppppppppppuVar16),
                                                  (uint)ppppppppppppuStack_15c);
                                          if (pvVar13 == (void *)0x0) {
                                            thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar25,
                                                               (int)*ppppppppppppuVar16);
                                            uVar6 = extraout_ECX_02;
                                          }
                                          else {
                                            thunk_FUN_00424530(pvVar13,(uint)puStack_158);
                                            uVar6 = extraout_ECX_03;
                                          }
                                          ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5e1:
                                  bVar28 = thunk_FUN_006511a0((int)asStack_16c);
                                  if (CONCAT31(extraout_var_19,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      ppppppppppppuVar23 =
                                           (uint ************)
                                           thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164
                                                              ,(uint)ppppppppppppuStack_160,
                                                              (uint *)appppppppppppuStack_34);
                                      if (0 < (int)ppppppppppppuVar23) {
                                        ppppppppppppuVar16 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = ppppppppppppuVar23;
                                        uVar6 = extraout_ECX_04;
                                        do {
                                          pvVar13 = (void *)thunk_FUN_0042b760(CONCAT31((int3)((uint
                                                  )uVar6 >> 8),*(undefined1 *)ppppppppppppuVar16),
                                                  (uint)ppppppppppppuStack_15c);
                                          if (pvVar13 == (void *)0x0) {
                                            thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar25,
                                                               (int)*ppppppppppppuVar16);
                                            uVar6 = extraout_ECX_05;
                                          }
                                          else {
                                            thunk_FUN_00424620(pvVar13,(uint)puStack_158);
                                            uVar6 = extraout_ECX_06;
                                          }
                                          ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5e2:
                                  bVar28 = thunk_FUN_006511e0((int)asStack_16c);
                                  if (CONCAT31(extraout_var_20,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_10 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_10 >> 8),
                                                  *(char *)ppppppppppppuStack_10),
                                                  (uint)ppppppppppppuStack_15c);
                                          if (iVar30 == 0) {
                                            thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar25,
                                                               (int)*ppppppppppppuStack_10);
                                          }
                                          else {
                                            pvStack_17c = (void *)thunk_FUN_00423300(iVar30);
                                            if (pvStack_17c == (void *)0x0) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_10;
                                              uVar29 = uVar25;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              thunk_FUN_0064d0e0(this_00,-0xab,pcVar22,uVar29,
                                                                 (int)pppppppppppuVar11);
                                            }
                                            else {
                                              pvVar13 = (void *)0x0;
                                              ppppppppppppuStack_8 = (uint ************)0x0;
                                              if (DAT_007fa174 != 0) {
                                                pvVar13 = (void *)thunk_FUN_004357f0(*(char *)
                                                  ppppppppppppuStack_10);
                                              }
                                              if (pvVar13 != (void *)0x0) {
                                                ppppppppppppuStack_8 =
                                                     (uint ************)
                                                     thunk_FUN_00678ef0(pvVar13,(byte *)puStack_158)
                                                ;
                                              }
                                              if (ppppppppppppuStack_8 == (uint ************)0x0) {
                                                thunk_FUN_0064d0e0(this_00,-4,puStack_158,uVar25,
                                                                   (int)*ppppppppppppuStack_10);
                                              }
                                              else {
                                                thunk_FUN_0068e690(ppppppppppppuStack_8,
                                                                   (int)pvStack_17c);
                                              }
                                            }
                                          }
                                          ppppppppppppuStack_10 = ppppppppppppuStack_10 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5e3:
                                  bVar28 = thunk_FUN_00651250((int)asStack_16c);
                                  if (CONCAT31(extraout_var_21,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_10 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_10 >> 8),
                                                  *(char *)ppppppppppppuStack_10),
                                                  (uint)ppppppppppppuStack_15c);
                                          if (iVar30 == 0) {
                                            thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar25,
                                                               (int)*ppppppppppppuStack_10);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (iVar30 == 0) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_10;
                                              uVar29 = uVar25;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              thunk_FUN_0064d0e0(this_00,-0xab,pcVar22,uVar29,
                                                                 (int)pppppppppppuVar11);
                                            }
                                            else {
                                              thunk_FUN_0065d600(iVar30);
                                            }
                                          }
                                          ppppppppppppuStack_10 = ppppppppppppuStack_10 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5e4:
                                  iVar30 = thunk_FUN_00651290(asStack_16c);
                                  if (iVar30 != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_10 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_10 >> 8),
                                                  *(char *)ppppppppppppuStack_10),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_10;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_006577ae:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (((iVar30 == 0) || (*(short *)(iVar30 + 0x7b) == 1))
                                               || (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_10;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_006577ae;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
                                            }
                                            auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                            uStack_5f = SUB41(pbStack_154,0);
                                            uStack_5e = (undefined1)((uint)pbStack_154 >> 8);
                                            uStack_5d = (undefined1)((uint)pbStack_154 >> 0x10);
                                            uStack_5c = (undefined1)((uint)pbStack_154 >> 0x18);
                                            uStack_59 = SUB41(pcStack_14c,0);
                                            uStack_58 = (undefined1)((uint)pcStack_14c >> 8);
                                            uStack_60 = puStack_158._0_1_;
                                            iVar30 = (int)ppppppppppppuStack_144 * 0x19;
                                            uStack_5b = SUB41(pbStack_150,0);
                                            uStack_5a = (undefined1)((uint)pbStack_150 >> 8);
                                            auStack_68[0] = 1;
                                            uStack_57 = SUB41(pcStack_148,0);
                                            uStack_56 = (undefined1)((uint)pcStack_148 >> 8);
                                            uStack_55 = (undefined1)((uint)pcStack_148 >> 0x10);
                                            uStack_54 = (undefined1)((uint)pcStack_148 >> 0x18);
                                            uStack_53 = (undefined1)iVar30;
                                            uStack_52 = (undefined1)((uint)iVar30 >> 8);
                                            uStack_51 = (undefined1)((uint)iVar30 >> 0x10);
                                            uStack_50 = (undefined1)((uint)iVar30 >> 0x18);
                                            iVar30 = uStack_140 * 0x19;
                                            uStack_4f = (undefined1)iVar30;
                                            uStack_4e = (undefined2)((uint)iVar30 >> 8);
                                            uStack_4c = (undefined1)((uint)iVar30 >> 0x18);
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_10 = ppppppppppppuStack_10 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5e5:
                                  bVar28 = thunk_FUN_006514d0(asStack_16c);
                                  if (CONCAT31(extraout_var_22,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_10 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_10 >> 8),
                                                  *(char *)ppppppppppppuStack_10),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_10;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_00657a41:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (((iVar30 == 0) || (*(short *)(iVar30 + 0x7b) == 1))
                                               || (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_10;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_00657a41;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
                                            }
                                            auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                            uStack_5f = SUB41(pbStack_154,0);
                                            uStack_5e = (undefined1)((uint)pbStack_154 >> 8);
                                            uStack_5d = (undefined1)((uint)pbStack_154 >> 0x10);
                                            uStack_5c = (undefined1)((uint)pbStack_154 >> 0x18);
                                            uStack_59 = SUB41(pcStack_14c,0);
                                            uStack_58 = (undefined1)((uint)pcStack_14c >> 8);
                                            uStack_60 = puStack_158._0_1_;
                                            iVar30 = (int)pcStack_148 * 0x19;
                                            uStack_5b = SUB41(pbStack_150,0);
                                            uStack_5a = (undefined1)((uint)pbStack_150 >> 8);
                                            auStack_68[0] = 2;
                                            uStack_57 = (undefined1)iVar30;
                                            uStack_56 = (undefined1)((uint)iVar30 >> 8);
                                            uStack_55 = (undefined1)((uint)iVar30 >> 0x10);
                                            uStack_54 = (undefined1)((uint)iVar30 >> 0x18);
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_10 = ppppppppppppuStack_10 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5e6:
                                  iVar30 = thunk_FUN_006513c0(asStack_16c);
                                  if (iVar30 != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_10 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_10 >> 8),
                                                  *(char *)ppppppppppppuStack_10),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_10;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_006578fe:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (((iVar30 == 0) || (*(short *)(iVar30 + 0x7b) == 1))
                                               || (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_10;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_006578fe;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
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
                                            iVar30 = (int)ppppppppppppuStack_144 * 0x19;
                                            auStack_68[0] = 3;
                                            uStack_57 = (undefined1)iVar30;
                                            uStack_56 = (undefined1)((uint)iVar30 >> 8);
                                            uStack_55 = (undefined1)((uint)iVar30 >> 0x10);
                                            uStack_54 = (undefined1)((uint)iVar30 >> 0x18);
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_10 = ppppppppppppuStack_10 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5e7:
                                  iVar30 = thunk_FUN_006515b0(asStack_16c);
                                  if (iVar30 != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_00657bce:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            ppppppppppppuStack_10 =
                                                 (uint ************)thunk_FUN_00423300(iVar30);
                                            if ((ppppppppppppuStack_10 == (uint ************)0x0) ||
                                               (*(short *)((int)ppppppppppppuStack_10 + 0x7b) ==
                                                -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_00657bce;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
                                            }
                                            uVar25 = (uint)puStack_158 & 0x3fffffff;
                                            auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                            uStack_60 = (undefined1)uVar25;
                                            uStack_5f = (undefined1)(uVar25 >> 8);
                                            uStack_5e = (undefined1)(uVar25 >> 0x10);
                                            uStack_5d = (undefined1)(uVar25 >> 0x18);
                                            uVar25 = (uint)pbStack_154 & 0x3fffffff;
                                            uStack_54 = SUB41(pcStack_14c,0);
                                            uStack_53 = (undefined1)((uint)pcStack_14c >> 8);
                                            uStack_5c = (undefined1)uVar25;
                                            uStack_5b = (undefined1)(uVar25 >> 8);
                                            uStack_5a = (undefined1)(uVar25 >> 0x10);
                                            uStack_59 = (undefined1)(uVar25 >> 0x18);
                                            uVar25 = (uint)pbStack_150 & 0x3fffffff;
                                            uStack_4e = (undefined2)uStack_140;
                                            uStack_58 = (undefined1)uVar25;
                                            uStack_57 = (undefined1)(uVar25 >> 8);
                                            uStack_56 = (undefined1)(uVar25 >> 0x10);
                                            uStack_55 = (undefined1)(uVar25 >> 0x18);
                                            uStack_52 = SUB41(pcStack_148,0);
                                            uStack_51 = (undefined1)((uint)pcStack_148 >> 8);
                                            auStack_68[0] = 4;
                                            uStack_50 = SUB41(ppppppppppppuStack_144,0);
                                            uStack_4f = (undefined1)
                                                        ((uint)ppppppppppppuStack_144 >> 8);
                                            uStack_4c = (undefined1)iStack_13c;
                                            pcVar22 = pcStack_138;
                                            if (pcStack_138 == (char *)0x0) {
                                              pcVar22 = &DAT_008016a0;
                                            }
                                            _strncpy(&cStack_4b,pcVar22,0xe);
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5e8:
                                  bVar28 = thunk_FUN_00651730((int)asStack_16c);
                                  if (CONCAT31(extraout_var_23,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_00657ccf:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if ((iVar30 == 0) ||
                                               (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_00657ccf;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
                                            }
                                            auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                            auStack_68[0] = 5;
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5e9:
                                  iVar30 = thunk_FUN_00651770((int)asStack_16c);
                                  if (iVar30 != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_00657dd9:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if ((iVar30 == 0) ||
                                               (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_00657dd9;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
                                            }
                                            auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                            uStack_60 = puStack_158._0_1_;
                                            auStack_68[0] = 6;
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5ea:
                                  bVar28 = thunk_FUN_006517c0(asStack_16c);
                                  if (CONCAT31(extraout_var_24,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_00657f1c:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (((iVar30 == 0) || (*(short *)(iVar30 + 0x7b) == 1))
                                               || (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_00657f1c;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
                                            }
                                            auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                            uStack_5f = SUB41(pbStack_154,0);
                                            uStack_5e = (undefined1)((uint)pbStack_154 >> 8);
                                            uStack_5d = (undefined1)((uint)pbStack_154 >> 0x10);
                                            uStack_5c = (undefined1)((uint)pbStack_154 >> 0x18);
                                            uStack_59 = SUB41(pcStack_14c,0);
                                            uStack_58 = (undefined1)((uint)pcStack_14c >> 8);
                                            uStack_60 = puStack_158._0_1_;
                                            iVar30 = (int)pcStack_148 * 0x19;
                                            uStack_5b = SUB41(pbStack_150,0);
                                            uStack_5a = (undefined1)((uint)pbStack_150 >> 8);
                                            auStack_68[0] = 7;
                                            uStack_57 = (undefined1)iVar30;
                                            uStack_56 = (undefined1)((uint)iVar30 >> 8);
                                            uStack_55 = (undefined1)((uint)iVar30 >> 0x10);
                                            uStack_54 = (undefined1)((uint)iVar30 >> 0x18);
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5eb:
                                  bVar28 = thunk_FUN_00651880((int)asStack_16c);
                                  if (CONCAT31(extraout_var_25,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_0065806e:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (((iVar30 == 0) || (*(short *)(iVar30 + 0x7b) == 1))
                                               || (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_0065806e;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
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
                                            uStack_56 = SUB41(ppppppppppppuStack_144,0);
                                            uStack_55 = (undefined1)
                                                        ((uint)ppppppppppppuStack_144 >> 8);
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5ec:
                                  bVar28 = thunk_FUN_006518c0((int)asStack_16c);
                                  if (CONCAT31(extraout_var_26,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_00658177:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (((iVar30 == 0) || (*(short *)(iVar30 + 0x7b) == 1))
                                               || (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_00658177;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
                                            }
                                            auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                            auStack_68[0] = 9;
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5ed:
                                  iVar30 = thunk_FUN_00651df0(asStack_16c);
                                  if (iVar30 != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_00658b70:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (((iVar30 == 0) || (*(short *)(iVar30 + 0x7b) == 1))
                                               || (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_00658b70;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
                                            }
                                            auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                            uStack_5e = SUB41(pbStack_154,0);
                                            uStack_5d = (undefined1)((uint)pbStack_154 >> 8);
                                            uStack_50 = SUB41(pcStack_14c,0);
                                            uStack_4f = (undefined1)((uint)pcStack_14c >> 8);
                                            uStack_4e = (undefined2)((uint)pcStack_14c >> 0x10);
                                            uStack_60 = SUB41(puStack_158,0);
                                            uStack_5f = (undefined1)((uint)puStack_158 >> 8);
                                            iVar30 = (int)pcStack_148 * 0x19;
                                            uStack_5c = SUB41(pbStack_150,0);
                                            uStack_5b = (undefined1)((uint)pbStack_150 >> 8);
                                            auStack_68[0] = 0x34;
                                            uStack_5a = (undefined1)iVar30;
                                            uStack_59 = (undefined1)((uint)iVar30 >> 8);
                                            uStack_58 = (undefined1)((uint)iVar30 >> 0x10);
                                            uStack_57 = (undefined1)((uint)iVar30 >> 0x18);
                                            uStack_54 = (undefined1)uStack_140;
                                            uStack_53 = (undefined1)(uStack_140 >> 8);
                                            uStack_56 = SUB41(ppppppppppppuStack_144,0);
                                            uStack_55 = (undefined1)
                                                        ((uint)ppppppppppppuStack_144 >> 8);
                                            uStack_52 = (undefined1)iStack_13c;
                                            uStack_51 = (undefined1)((uint)iStack_13c >> 8);
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5ee:
                                  bVar28 = thunk_FUN_00651ed0(asStack_16c);
                                  if (CONCAT31(extraout_var_29,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_00658d01:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            ppppppppppppuStack_10 =
                                                 (uint ************)thunk_FUN_00423300(iVar30);
                                            if (((ppppppppppppuStack_10 == (uint ************)0x0)
                                                || (*(short *)((int)ppppppppppppuStack_10 + 0x7b) ==
                                                    1)) ||
                                               (*(short *)((int)ppppppppppppuStack_10 + 0x7b) ==
                                                -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_00658d01;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
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
                                            pcVar22 = pcStack_148;
                                            if (pcStack_148 == (char *)0x0) {
                                              pcVar22 = &DAT_008016a0;
                                            }
                                            _strncpy((char *)&uStack_4a,pcVar22,0xe);
                                            uStack_5b = (undefined1)(uStack_140 >> 8);
                                            uStack_5c = 0;
                                            uStack_5a = 0;
                                            uStack_59 = 0;
                                            uStack_3b = ppppppppppppuStack_144._0_2_;
                                            iStack_39 = iStack_13c * 0x19;
                                            uStack_60 = (undefined1)uStack_140;
                                            uStack_5f = 0;
                                            uStack_5e = 0;
                                            uStack_5d = 0;
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5ef:
                                  bVar28 = thunk_FUN_00652030(asStack_16c);
                                  if (CONCAT31(extraout_var_30,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_00658e8e:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (((iVar30 == 0) || (*(short *)(iVar30 + 0x7b) == 1))
                                               || (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_00658e8e;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
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
                                            uStack_4e = ppppppppppppuStack_144._0_2_;
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
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5f0:
                                  bVar28 = thunk_FUN_00652100(asStack_16c);
                                  if (CONCAT31(extraout_var_31,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_00658fc8:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (((iVar30 == 0) || (*(short *)(iVar30 + 0x7b) == 1))
                                               || (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_00658fc8;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
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
                                            iVar30 = (int)pcStack_14c * 0x19;
                                            auStack_68[0] = 0x35;
                                            uStack_58 = (undefined1)iVar30;
                                            uStack_57 = (undefined1)((uint)iVar30 >> 8);
                                            uStack_56 = (undefined1)((uint)iVar30 >> 0x10);
                                            uStack_55 = (undefined1)((uint)iVar30 >> 0x18);
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5f1:
                                  bVar28 = thunk_FUN_00651900(asStack_16c);
                                  if (CONCAT31(extraout_var_27,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_006582b3:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if ((iVar30 == 0) ||
                                               (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_006582b3;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
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
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5f2:
                                  iVar30 = thunk_FUN_006519e0(asStack_16c);
                                  if (iVar30 != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_00658416:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (iVar30 == 0) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_00658416;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
                                            }
                                            auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                            uStack_5f = SUB41(pbStack_154,0);
                                            uStack_5e = (undefined1)((uint)pbStack_154 >> 8);
                                            uStack_5b = SUB41(pcStack_14c,0);
                                            uStack_5a = (undefined1)((uint)pcStack_14c >> 8);
                                            uStack_60 = puStack_158._0_1_;
                                            iVar30 = (int)ppppppppppppuStack_144 * 0x19;
                                            uStack_5d = SUB41(pbStack_150,0);
                                            uStack_5c = (undefined1)((uint)pbStack_150 >> 8);
                                            auStack_68[0] = 0xb;
                                            uStack_4f = SUB41(pcStack_148,0);
                                            uStack_4e = (undefined2)((uint)pcStack_148 >> 8);
                                            uStack_4c = (undefined1)((uint)pcStack_148 >> 0x18);
                                            uStack_59 = (undefined1)iVar30;
                                            uStack_58 = (undefined1)((uint)iVar30 >> 8);
                                            uStack_57 = (undefined1)((uint)iVar30 >> 0x10);
                                            uStack_56 = (undefined1)((uint)iVar30 >> 0x18);
                                            uStack_55 = (undefined1)uStack_140;
                                            uStack_54 = (undefined1)(uStack_140 >> 8);
                                            uStack_53 = (undefined1)iStack_13c;
                                            uStack_52 = (undefined1)((uint)iStack_13c >> 8);
                                            uStack_51 = SUB41(pcStack_138,0);
                                            uStack_50 = (undefined1)((uint)pcStack_138 >> 8);
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5f3:
                                  iVar30 = thunk_FUN_00651b40(asStack_16c);
                                  if (iVar30 != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_00658543:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (((iVar30 == 0) || (*(short *)(iVar30 + 0x7b) == 1))
                                               || (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_00658543;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
                                            }
                                            auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                            uStack_5f = SUB41(pbStack_154,0);
                                            uStack_5e = (undefined1)((uint)pbStack_154 >> 8);
                                            uStack_5d = (undefined1)((uint)pbStack_154 >> 0x10);
                                            uStack_5c = (undefined1)((uint)pbStack_154 >> 0x18);
                                            uStack_60 = puStack_158._0_1_;
                                            auStack_68[0] = 0xc;
                                            iVar30 = (int)pbStack_150 * 0x19;
                                            uStack_5b = (undefined1)iVar30;
                                            uStack_5a = (undefined1)((uint)iVar30 >> 8);
                                            uStack_59 = (undefined1)((uint)iVar30 >> 0x10);
                                            uStack_58 = (undefined1)((uint)iVar30 >> 0x18);
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5f4:
                                  iVar30 = thunk_FUN_00651bd0(asStack_16c);
                                  if (iVar30 != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_00658670:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (((iVar30 == 0) || (*(short *)(iVar30 + 0x7b) == 1))
                                               || (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_00658670;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
                                            }
                                            auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                            uStack_5f = SUB41(pbStack_154,0);
                                            uStack_5e = (undefined1)((uint)pbStack_154 >> 8);
                                            uStack_5d = (undefined1)((uint)pbStack_154 >> 0x10);
                                            uStack_5c = (undefined1)((uint)pbStack_154 >> 0x18);
                                            uStack_60 = puStack_158._0_1_;
                                            auStack_68[0] = 0xd;
                                            iVar30 = (int)pbStack_150 * 0x19;
                                            uStack_5b = (undefined1)iVar30;
                                            uStack_5a = (undefined1)((uint)iVar30 >> 8);
                                            uStack_59 = (undefined1)((uint)iVar30 >> 0x10);
                                            uStack_58 = (undefined1)((uint)iVar30 >> 0x18);
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5f5:
                                  iVar30 = thunk_FUN_00651cd0(asStack_16c);
                                  if (iVar30 != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_006587e2:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (((iVar30 == 0) || (*(short *)(iVar30 + 0x7b) == 1))
                                               || (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_006587e2;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
                                            }
                                            auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                            uStack_5e = SUB41(pbStack_154,0);
                                            uStack_5d = (undefined1)((uint)pbStack_154 >> 8);
                                            uStack_50 = SUB41(pcStack_14c,0);
                                            uStack_4f = (undefined1)((uint)pcStack_14c >> 8);
                                            uStack_4e = (undefined2)((uint)pcStack_14c >> 0x10);
                                            uStack_60 = SUB41(puStack_158,0);
                                            uStack_5f = (undefined1)((uint)puStack_158 >> 8);
                                            iVar30 = (int)pcStack_148 * 0x19;
                                            uStack_5c = SUB41(pbStack_150,0);
                                            uStack_5b = (undefined1)((uint)pbStack_150 >> 8);
                                            auStack_68[0] = 0xe;
                                            uStack_5a = (undefined1)iVar30;
                                            uStack_59 = (undefined1)((uint)iVar30 >> 8);
                                            uStack_58 = (undefined1)((uint)iVar30 >> 0x10);
                                            uStack_57 = (undefined1)((uint)iVar30 >> 0x18);
                                            uStack_54 = (undefined1)uStack_140;
                                            uStack_53 = (undefined1)(uStack_140 >> 8);
                                            uStack_56 = SUB41(ppppppppppppuStack_144,0);
                                            uStack_55 = (undefined1)
                                                        ((uint)ppppppppppppuStack_144 >> 8);
                                            uStack_52 = (undefined1)iStack_13c;
                                            uStack_51 = (undefined1)((uint)iStack_13c >> 8);
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5f6:
                                  bVar28 = thunk_FUN_00651db0((int)asStack_16c);
                                  if (CONCAT31(extraout_var_28,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_006588eb:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (((iVar30 == 0) || (*(short *)(iVar30 + 0x7b) == 1))
                                               || (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_006588eb;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
                                            }
                                            auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                            auStack_68[0] = 0xf;
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5f7:
                                  iVar30 = thunk_FUN_00651c60(asStack_16c);
                                  if (iVar30 != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_006589fe:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if ((iVar30 == 0) ||
                                               (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_006589fe;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
                                            }
                                            auStack_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                            uStack_60 = puStack_158._0_1_;
                                            auStack_68[0] = 0x10;
                                            uStack_5f = SUB41(pbStack_154,0);
                                            uStack_5e = (undefined1)((uint)pbStack_154 >> 8);
                                            uStack_5d = (undefined1)((uint)pbStack_154 >> 0x10);
                                            uStack_5c = (undefined1)((uint)pbStack_154 >> 0x18);
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5f8:
                                  bVar28 = thunk_FUN_006521c0(asStack_16c);
                                  if (CONCAT31(extraout_var_32,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_00659143:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (((iVar30 == 0) || (*(short *)(iVar30 + 0x7b) == 1))
                                               || (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_00659143;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
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
                                            uStack_50 = SUB41(ppppppppppppuStack_144,0);
                                            uStack_4f = (undefined1)
                                                        ((uint)ppppppppppppuStack_144 >> 8);
                                            uStack_56 = SUB41(pbStack_150,0);
                                            uStack_55 = (undefined1)((uint)pbStack_150 >> 8);
                                            uStack_60 = (undefined1)iStack_13c;
                                            uStack_5f = (undefined1)((uint)iStack_13c >> 8);
                                            uStack_5e = (undefined1)((uint)iStack_13c >> 0x10);
                                            uStack_5d = (undefined1)((uint)iStack_13c >> 0x18);
                                            uStack_52 = SUB41(pcStack_148,0);
                                            uStack_51 = (undefined1)((uint)pcStack_148 >> 8);
                                            iVar30 = (int)pcStack_138 * 0x19;
                                            uStack_4e = (undefined2)uStack_140;
                                            auStack_68[0] = 0x36;
                                            uStack_4c = (undefined1)iVar30;
                                            cStack_4b = (char)((uint)iVar30 >> 8);
                                            uStack_4a._0_2_ = (undefined2)((uint)iVar30 >> 0x10);
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5f9:
                                  bVar28 = thunk_FUN_00652460(asStack_16c);
                                  if (CONCAT31(extraout_var_34,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_006594ec:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (((iVar30 == 0) || (*(short *)(iVar30 + 0x7b) == 1))
                                               || (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_006594ec;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
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
                                            uStack_52 = SUB41(ppppppppppppuStack_144,0);
                                            uStack_51 = (undefined1)
                                                        ((uint)ppppppppppppuStack_144 >> 8);
                                            uStack_54 = SUB41(pcStack_148,0);
                                            uStack_53 = (undefined1)((uint)pcStack_148 >> 8);
                                            uStack_60 = (undefined1)uStack_140;
                                            uStack_5f = (undefined1)(uStack_140 >> 8);
                                            uStack_5e = (undefined1)(uStack_140 >> 0x10);
                                            uStack_5d = (undefined1)(uStack_140 >> 0x18);
                                            iVar30 = iStack_13c * 0x19;
                                            auStack_68[0] = 0x37;
                                            uStack_50 = (undefined1)iVar30;
                                            uStack_4f = (undefined1)((uint)iVar30 >> 8);
                                            uStack_4e = (undefined2)((uint)iVar30 >> 0x10);
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5fa:
                                  bVar28 = thunk_FUN_00652540(asStack_16c);
                                  if (CONCAT31(extraout_var_35,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_00659640:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (((iVar30 == 0) || (*(short *)(iVar30 + 0x7b) == 1))
                                               || (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_00659640;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
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
                                            iVar30 = (int)ppppppppppppuStack_144 * 0x19;
                                            auStack_68[0] = 0x38;
                                            uStack_54 = (undefined1)iVar30;
                                            uStack_53 = (undefined1)((uint)iVar30 >> 8);
                                            uStack_52 = (undefined1)((uint)iVar30 >> 0x10);
                                            uStack_51 = (undefined1)((uint)iVar30 >> 0x18);
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5fb:
                                  bVar28 = thunk_FUN_006525e0(asStack_16c);
                                  if (CONCAT31(extraout_var_36,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_00659785:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (((iVar30 == 0) || (*(short *)(iVar30 + 0x7b) == 1))
                                               || (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_00659785;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
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
                                            iVar30 = (int)pcStack_148 * 0x19;
                                            uStack_58 = SUB41(pbStack_150,0);
                                            uStack_57 = (undefined1)((uint)pbStack_150 >> 8);
                                            auStack_68[0] = 0x39;
                                            uStack_56 = (undefined1)iVar30;
                                            uStack_55 = (undefined1)((uint)iVar30 >> 8);
                                            uStack_54 = (undefined1)((uint)iVar30 >> 0x10);
                                            uStack_53 = (undefined1)((uint)iVar30 >> 0x18);
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5fc:
                                  bVar28 = thunk_FUN_00652670(asStack_16c);
                                  if (CONCAT31(extraout_var_37,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_006598ca:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if (((iVar30 == 0) || (*(short *)(iVar30 + 0x7b) == 1))
                                               || (*(short *)(iVar30 + 0x7b) == -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_006598ca;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
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
                                            iVar30 = (int)pcStack_148 * 0x19;
                                            uStack_58 = SUB41(pbStack_150,0);
                                            uStack_57 = (undefined1)((uint)pbStack_150 >> 8);
                                            auStack_68[0] = 0x3a;
                                            uStack_56 = (undefined1)iVar30;
                                            uStack_55 = (undefined1)((uint)iVar30 >> 8);
                                            uStack_54 = (undefined1)((uint)iVar30 >> 0x10);
                                            uStack_53 = (undefined1)((uint)iVar30 >> 0x18);
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5fd:
                                  bVar28 = thunk_FUN_00652300(asStack_16c);
                                  if (CONCAT31(extraout_var_33,bVar28) != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_0065937a:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            ppppppppppppuStack_10 =
                                                 (uint ************)thunk_FUN_00423300(iVar30);
                                            uVar20 = uStack_140;
                                            if ((ppppppppppppuStack_10 == (uint ************)0x0) ||
                                               (*(short *)((int)ppppppppppppuStack_10 + 0x7b) ==
                                                -0x8000)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_0065937a;
                                            }
                                            ppuVar27 = &puStack_20c;
                                            for (iVar30 = 0x12; puVar5 = puStack_158, iVar30 != 0;
                                                iVar30 = iVar30 + -1) {
                                              *ppuVar27 = (uint *)0x0;
                                              ppuVar27 = ppuVar27 + 1;
                                            }
                                            *(undefined2 *)ppuVar27 = 0;
                                            puStack_20c = puVar5;
                                            uStack_208 = 0xffff;
                                            uStack_206 = 0x5622;
                                            uStack_204 = 0xfffffff0;
                                            uStack_200 = 0xfffe;
                                            if (-1 < (int)uVar20) {
                                              uStack_200 = (undefined2)uVar20;
                                            }
                                            iStack_1fe = (int)pcStack_138 * 0x19;
                                            uStack_1f6 = pbStack_154._0_2_;
                                            uStack_1f4 = pbStack_150._0_2_;
                                            uStack_1f2 = pcStack_14c._0_2_;
                                            if (((int)pcStack_148 < 0) ||
                                               (pcVar22 = pcStack_148, 7 < (int)pcStack_148)) {
                                              bVar1 = *(byte *)((int)ppppppppppppuStack_10 + 0x81);
                                              pcVar22 = (char *)(uint)bVar1;
                                              if (((char)bVar1 < '\0') || ('\a' < (char)bVar1)) {
                                                pcVar22 = (char *)(uint)*(byte *)(
                                                  ppppppppppppuStack_10 + 9);
                                              }
                                            }
                                            uStack_1f0 = SUB41(pcVar22,0);
                                            if (ppppppppppppuStack_144 != (uint ************)0x0) {
                                              _strncpy(acStack_1ef,(char *)ppppppppppppuStack_144,
                                                       0xe);
                                              uVar20 = uStack_140;
                                            }
                                            if ((((puStack_20c == (uint *)0xdd) ||
                                                 (puStack_20c == (uint *)0xde)) ||
                                                (puStack_20c == (uint *)0xe2)) ||
                                               (puStack_20c == (uint *)0xdc)) {
                                              bVar1 = 1;
                                            }
                                            else {
                                              bVar1 = 0;
                                            }
                                            uStack_1e0 = -(uint)bVar1 & uVar20;
                                            puVar5 = auStack_240;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
                                            }
                                            ppuStack_236 = &puStack_20c;
                                            uStack_1ce = 1;
                                            auStack_240[0] = 0x68;
                                            uStack_237 = 1;
                                            thunk_FUN_00662240(auStack_240);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  break;
                                case 0x5fe:
                                  iVar30 = thunk_FUN_00652700(asStack_16c);
                                  if (iVar30 != 0) {
                                    iVar30 = (**(code **)(*this_00 + 0x18))();
                                    if ((iVar30 != 8) ||
                                       (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                      iVar30 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                      if (0 < iVar30) {
                                        ppppppppppppuStack_8 =
                                             (uint ************)appppppppppppuStack_34;
                                        ppppppppppppuStack_c = (uint ************)iVar30;
                                        do {
                                          iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_8 >> 8),
                                                  *(char *)ppppppppppppuStack_8),
                                                  (uint)ppppppppppppuStack_15c);
                                          uVar29 = uVar25;
                                          if (iVar30 == 0) {
                                            pppppppppppuVar11 = *ppppppppppppuStack_8;
                                            pcVar22 = &DAT_008016a0;
                                            iVar30 = -0xaa;
LAB_00659a1c:
                                            thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                               (int)pppppppppppuVar11);
                                          }
                                          else {
                                            iVar30 = thunk_FUN_00423300(iVar30);
                                            if ((iVar30 == 0) || (*(short *)(iVar30 + 0x7b) != 1)) {
                                              pppppppppppuVar11 = *ppppppppppppuStack_8;
                                              pcVar22 = thunk_FUN_00674af0(iVar7);
                                              iVar30 = -0xab;
                                              goto LAB_00659a1c;
                                            }
                                            puVar5 = auStack_68;
                                            for (iVar30 = 0xd; iVar30 != 0; iVar30 = iVar30 + -1) {
                                              *puVar5 = 0;
                                              puVar5 = puVar5 + 1;
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
                                            uStack_60 = SUB41(ppppppppppppuStack_144,0);
                                            uStack_5f = (undefined1)
                                                        ((uint)ppppppppppppuStack_144 >> 8);
                                            uStack_5e = (undefined1)
                                                        ((uint)ppppppppppppuStack_144 >> 0x10);
                                            uStack_5d = (undefined1)
                                                        ((uint)ppppppppppppuStack_144 >> 0x18);
                                            uStack_56 = SUB41(pbStack_150,0);
                                            uStack_55 = (undefined1)((uint)pbStack_150 >> 8);
                                            iVar30 = uStack_140 * 0x19;
                                            uStack_52 = SUB41(pcStack_148,0);
                                            uStack_51 = (undefined1)((uint)pcStack_148 >> 8);
                                            uStack_50 = (undefined1)((uint)pcStack_148 >> 0x10);
                                            uStack_4f = (undefined1)((uint)pcStack_148 >> 0x18);
                                            auStack_68[0] = 0x3b;
                                            uStack_4e = (undefined2)iVar30;
                                            uStack_4c = (undefined1)((uint)iVar30 >> 0x10);
                                            cStack_4b = (char)((uint)iVar30 >> 0x18);
                                            thunk_FUN_00662240(auStack_68);
                                            uVar25 = uStack_14;
                                          }
                                          ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                          ppppppppppppuStack_c =
                                               (uint ************)((int)ppppppppppppuStack_c + -1);
                                        } while (ppppppppppppuStack_c != (uint ************)0x0);
                                        ppppppppppppuStack_c = (uint ************)0x0;
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
                              iVar7 = thunk_FUN_006527d0((int)asStack_16c);
                              if (iVar7 == 0) {
                                iVar7 = -1;
                                uVar29 = uVar25;
                                pcVar22 = thunk_FUN_00674af0(0x76c);
                                thunk_FUN_0064d0e0(this_00,-0x7d,pcVar22,uVar29,iVar7);
                              }
                              else {
                                DAT_0080c51e = (uint *******)ppppppppppppuStack_164;
                              }
                            }
                            goto switchD_00652a7f_caseD_3;
                          }
                          if (iVar7 == 0x5c8) {
                            iVar7 = thunk_FUN_00650ad0((int)asStack_16c);
                            if (iVar7 == 0) {
                              iVar7 = -1;
                              uVar29 = uVar25;
                              pcVar22 = thunk_FUN_00674af0(0x5c8);
                              thunk_FUN_0064d0e0(this_00,-0x7d,pcVar22,uVar29,iVar7);
                            }
                            else {
                              iVar7 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar7 == 8) && (ppppppppppppuStack_164 == (uint ************)0x9)
                                 ) {
                                iVar7 = -1;
                                uVar29 = uVar25;
                                pcVar22 = thunk_FUN_00674af0(0x5c8);
                                thunk_FUN_0064d0e0(this_00,-0x7d,pcVar22,uVar29,iVar7);
                              }
                              else {
                                ppppppppppppuVar23 =
                                     (uint ************)
                                     thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                        (uint)ppppppppppppuStack_160,
                                                        (uint *)appppppppppppuStack_34);
                                if (0 < (int)ppppppppppppuVar23) {
                                  ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                  ppppppppppppuStack_c = ppppppppppppuVar23;
                                  ppppppppppppuVar23 = ppppppppppppuStack_15c;
                                  do {
                                    puVar19 = (ushort *)0xffffffff;
                                    if (((int)ppppppppppppuVar23 < 1) ||
                                       (0x28 < (int)ppppppppppppuVar23)) {
                                      bVar28 = false;
                                    }
                                    else {
                                      bVar28 = true;
                                    }
                                    if (bVar28) {
                                      puVar19 = (ushort *)((int)ppppppppppppuVar23 + 0x41);
                                    }
                                    if (((int)ppppppppppppuVar23 < 0x32) ||
                                       (0x73 < (int)ppppppppppppuVar23)) {
                                      bVar28 = false;
                                    }
                                    else {
                                      bVar28 = true;
                                    }
                                    if (bVar28) {
                                      puVar19 = (ushort *)((int)ppppppppppppuVar23 + -0x32);
                                    }
                                    if (-1 < (int)puVar19) {
                                      thunk_FUN_004e6080((int)*ppppppppppppuVar16,(int)puVar19,
                                                         puStack_158);
                                      ppppppppppppuVar23 = ppppppppppppuStack_15c;
                                    }
                                    ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                    ppppppppppppuStack_c =
                                         (uint ************)((int)ppppppppppppuStack_c + -1);
                                  } while (ppppppppppppuStack_c != (uint ************)0x0);
                                }
                              }
                            }
                            goto switchD_00652a7f_caseD_3;
                          }
                          switch(iVar7) {
                          case 0x594:
                            iVar30 = thunk_FUN_0064feb0((int)asStack_16c);
                            if (iVar30 == 0) break;
                            if (ppppppppppppuStack_160 != (uint ************)0x0) {
                              thunk_FUN_00677f40(0,(byte *)ppppppppppppuStack_164,0,0,0,-1,-1,-1,
                                                 &LAB_004012cb,ppppppppppppuStack_160);
                            }
                            goto switchD_00652a7f_caseD_3;
                          case 0x595:
                            iVar30 = thunk_FUN_0064fef0(asStack_16c);
                            if (iVar30 == 0) break;
                            if (((ppppppppppppuStack_164 == (uint ************)0xdd) ||
                                (ppppppppppppuStack_164 == (uint ************)0xde)) ||
                               (ppppppppppppuStack_164 == (uint ************)0xe0)) {
                              bVar28 = true;
                            }
                            else {
                              bVar28 = false;
                            }
                            if (bVar28) {
                              ppppppppppppuStack_18c = ppppppppppppuStack_160;
                              ppppppppppppuStack_190 = ppppppppppppuStack_15c;
                              puStack_184 = puStack_158;
                              iVar30 = thunk_FUN_004b1cf0((int)ppppppppppppuStack_164,
                                                          (int *)&ppppppppppppuStack_18c,
                                                          (int *)&ppppppppppppuStack_190,
                                                          (int *)&puStack_184);
                              if (iVar30 == 0) goto LAB_00655f4c;
                              thunk_FUN_00580450(ppppppppppppuStack_18c,ppppppppppppuStack_190,
                                                 puStack_184,ppppppppppppuStack_164,pbStack_154);
                            }
                            goto switchD_00652a7f_caseD_3;
                          case 0x596:
                            iVar30 = thunk_FUN_0064ff70(asStack_16c);
                            if (iVar30 == 0) break;
                            DAT_008118fc = 0;
                            thunk_FUN_00677960((short)ppppppppppppuStack_164,
                                               (short)ppppppppppppuStack_160,
                                               (short)ppppppppppppuStack_15c,(short)puStack_158,
                                               (short)pbStack_154,(short)pbStack_150,
                                               (short)pcStack_14c,&LAB_004047e1,&pcStack_148);
                            goto switchD_00652a7f_caseD_3;
                          case 0x597:
                            iVar30 = thunk_FUN_00650090(asStack_16c);
                            if (iVar30 == 0) break;
                            thunk_FUN_00677960((short)ppppppppppppuStack_15c,(short)puStack_158,
                                               (short)pbStack_154,(short)pbStack_150,
                                               (short)pcStack_14c,(short)pcStack_148,
                                               (short)ppppppppppppuStack_144,&LAB_00405b6e,
                                               (int)ppppppppppppuStack_160 << 0x10 |
                                               (uint)ppppppppppppuStack_164 & 0xffff);
                            goto switchD_00652a7f_caseD_3;
                          case 0x598:
                            iVar30 = thunk_FUN_006501a0(asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = thunk_FUN_0064dda0((short)ppppppppppppuStack_164,
                                                          (short)ppppppppppppuStack_160,
                                                          (short)ppppppppppppuStack_15c,
                                                          (short)puStack_158,(short)pbStack_154,
                                                          (char *)pbStack_150,pcStack_14c,
                                                          pcStack_148);
                              goto LAB_00655f44;
                            }
                            break;
                          case 0x599:
                            iVar30 = thunk_FUN_00650240(asStack_16c);
                            if (iVar30 == 0) break;
                            DAT_008118fc = 0;
                            thunk_FUN_006785a0((byte *)ppppppppppppuStack_160,
                                               (char)ppppppppppppuStack_164,
                                               (short)ppppppppppppuStack_15c,(short)puStack_158,
                                               (short)pbStack_154,(short)pbStack_150,
                                               (short)pcStack_14c,(short)pcStack_148,&LAB_0040191a,
                                               &ppppppppppppuStack_144);
                            goto switchD_00652a7f_caseD_3;
                          case 0x59a:
                            iVar30 = thunk_FUN_00650370((int)asStack_16c);
                            if (iVar30 == 0) break;
                            if (ppppppppppppuStack_160 != (uint ************)0x0) {
                              thunk_FUN_006785a0((byte *)ppppppppppppuStack_164,-1,0,0,0,-1,-1,-1,
                                                 &LAB_00403e18,ppppppppppppuStack_160);
                            }
                            goto switchD_00652a7f_caseD_3;
                          case 0x59b:
                            iVar30 = thunk_FUN_006503b0(asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                iVar30 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                            (uint)ppppppppppppuStack_160,
                                                            (uint *)appppppppppppuStack_34);
                                if (0 < iVar30) {
                                  ppppppppppppuStack_8 = (uint ************)appppppppppppuStack_34;
                                  ppppppppppppuStack_c = (uint ************)iVar30;
                                  do {
                                    iVar30 = thunk_FUN_0064dfa0(*(ushort *)ppppppppppppuStack_8,
                                                                (short)ppppppppppppuStack_15c,
                                                                (int)puStack_158,(int)pbStack_154,
                                                                pbStack_150,(ushort)pcStack_14c,
                                                                pcStack_148,ppppppppppppuStack_144,
                                                                uStack_140);
                                    if (iVar30 != 0) {
                                      pppppppppppuVar11 = *ppppppppppppuStack_8;
                                      uVar29 = uVar25;
                                      pcVar22 = thunk_FUN_00674af0(iVar7);
                                      thunk_FUN_0064d0e0(this_00,-0xab,pcVar22,uVar29,
                                                         (int)pppppppppppuVar11);
                                    }
                                    ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                    ppppppppppppuStack_c =
                                         (uint ************)((int)ppppppppppppuStack_c + -1);
                                  } while (ppppppppppppuStack_c != (uint ************)0x0);
                                  ppppppppppppuStack_c = (uint ************)0x0;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x59c:
                            iVar30 = thunk_FUN_00650480(asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                ppppppppppppuVar23 =
                                     (uint ************)
                                     thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                        (uint)ppppppppppppuStack_160,
                                                        (uint *)appppppppppppuStack_34);
                                if (0 < (int)ppppppppppppuVar23) {
                                  ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                  ppppppppppppuStack_c = ppppppppppppuVar23;
                                  do {
                                    DAT_008118fc = 0;
                                    thunk_FUN_00678240((int)*ppppppppppppuVar16,
                                                       (short)ppppppppppppuStack_15c,
                                                       (char)puStack_158,pbStack_154,
                                                       (short)pbStack_150,(short)pcStack_14c,
                                                       (short)pcStack_148,
                                                       (short)ppppppppppppuStack_144,
                                                       (short)uStack_140,(short)iStack_13c,
                                                       &LAB_004037d8,&pcStack_138);
                                    ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                    ppppppppppppuStack_c =
                                         (uint ************)((int)ppppppppppppuStack_c + -1);
                                  } while (ppppppppppppuStack_c != (uint ************)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x59d:
                            iVar30 = thunk_FUN_00650600(asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                ppppppppppppuVar23 =
                                     (uint ************)
                                     thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                        (uint)ppppppppppppuStack_160,
                                                        (uint *)appppppppppppuStack_34);
                                if (0 < (int)ppppppppppppuVar23) {
                                  ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                  ppppppppppppuStack_c = ppppppppppppuVar23;
                                  do {
                                    DAT_008118fc = 0;
                                    thunk_FUN_00678240((int)*ppppppppppppuVar16,(short)puStack_158,
                                                       (char)pbStack_154,pbStack_150,
                                                       (short)pcStack_14c,(short)pcStack_148,
                                                       (short)ppppppppppppuStack_144,
                                                       (short)uStack_140,(short)iStack_13c,
                                                       (short)pcStack_138,&LAB_004035fd,
                                                       ppppppppppppuStack_15c);
                                    ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                    ppppppppppppuStack_c =
                                         (uint ************)((int)ppppppppppppuStack_c + -1);
                                  } while (ppppppppppppuStack_c != (uint ************)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          default:
                            goto switchD_00652a7f_caseD_3;
                          case 0x5aa:
                            iVar30 = thunk_FUN_00650760(asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                ppppppppppppuVar23 =
                                     (uint ************)
                                     thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                        (uint)ppppppppppppuStack_160,
                                                        (uint *)appppppppppppuStack_34);
                                if (0 < (int)ppppppppppppuVar23) {
                                  ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                  ppppppppppppuStack_c = ppppppppppppuVar23;
                                  do {
                                    thunk_FUN_004e76e0((int)*ppppppppppppuVar16,
                                                       (uint *)ppppppppppppuStack_15c,
                                                       (char)puStack_158);
                                    ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                    ppppppppppppuStack_c =
                                         (uint ************)((int)ppppppppppppuStack_c + -1);
                                  } while (ppppppppppppuStack_c != (uint ************)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x5ab:
                            iVar30 = thunk_FUN_00650760(asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                ppppppppppppuVar23 =
                                     (uint ************)
                                     thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                        (uint)ppppppppppppuStack_160,
                                                        (uint *)appppppppppppuStack_34);
                                if (0 < (int)ppppppppppppuVar23) {
                                  ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                  ppppppppppppuStack_c = ppppppppppppuVar23;
                                  do {
                                    thunk_FUN_004e7980((uint *)*ppppppppppppuVar16,
                                                       (int)ppppppppppppuStack_15c,(char)puStack_158
                                                      );
                                    ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                    ppppppppppppuStack_c =
                                         (uint ************)((int)ppppppppppppuStack_c + -1);
                                  } while (ppppppppppppuStack_c != (uint ************)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x5ac:
                            iVar30 = thunk_FUN_00650820(asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                iVar30 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                            (uint)ppppppppppppuStack_160,
                                                            (uint *)appppppppppppuStack_34);
                                if (0 < iVar30) {
                                  ppppppppppppuStack_8 = (uint ************)appppppppppppuStack_34;
                                  do {
                                    ppppppppppppuStack_c = (uint ************)iVar30;
                                    pvVar13 = (void *)thunk_FUN_004357f0(*(char *)
                                                  ppppppppppppuStack_8);
                                    if (pvVar13 == (void *)0x0) {
                                      pppppppppppuVar11 = *ppppppppppppuStack_8;
                                      uVar29 = uVar25;
                                      pcVar22 = thunk_FUN_00674af0(iVar7);
                                      thunk_FUN_0064d0e0(this_00,-0xab,pcVar22,uVar29,
                                                         (int)pppppppppppuVar11);
                                    }
                                    else {
                                      thunk_FUN_0067b3c0(pvVar13,(int)ppppppppppppuStack_15c,
                                                         (int)puStack_158,(int)pbStack_154,0xff);
                                    }
                                    ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                    iVar30 = (int)ppppppppppppuStack_c + -1;
                                  } while (iVar30 != 0);
                                  ppppppppppppuStack_c = (uint ************)0x0;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x5ad:
                            iVar30 = thunk_FUN_006508c0(asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                ppppppppppppuVar23 =
                                     (uint ************)
                                     thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                        (uint)ppppppppppppuStack_160,
                                                        (uint *)appppppppppppuStack_34);
                                if (0 < (int)ppppppppppppuVar23) {
                                  ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                  ppppppppppppuStack_c = ppppppppppppuVar23;
                                  do {
                                    thunk_FUN_004e6310((int)*ppppppppppppuVar16,
                                                       (uint)ppppppppppppuStack_15c,
                                                       (uint)puStack_158);
                                    ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                    ppppppppppppuStack_c =
                                         (uint ************)((int)ppppppppppppuStack_c + -1);
                                  } while (ppppppppppppuStack_c != (uint ************)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x5ae:
                            iVar30 = thunk_FUN_006509e0((int)asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                ppppppppppppuVar23 =
                                     (uint ************)
                                     thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                        (uint)ppppppppppppuStack_160,
                                                        (uint *)appppppppppppuStack_34);
                                if (0 < (int)ppppppppppppuVar23) {
                                  ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                  ppppppppppppuStack_c = ppppppppppppuVar23;
                                  do {
                                    thunk_FUN_004e75f0((int)*ppppppppppppuVar16);
                                    ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                    ppppppppppppuStack_c =
                                         (uint ************)((int)ppppppppppppuStack_c + -1);
                                  } while (ppppppppppppuStack_c != (uint ************)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x5af:
                            iVar30 = thunk_FUN_00650a20(asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                iVar30 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                            (uint)ppppppppppppuStack_160,
                                                            (uint *)appppppppppppuStack_34);
                                if (0 < iVar30) {
                                  ppppppppppppuStack_8 = (uint ************)appppppppppppuStack_34;
                                  do {
                                    ppppppppppppuStack_c = (uint ************)iVar30;
                                    pvVar13 = (void *)thunk_FUN_004357f0(*(char *)
                                                  ppppppppppppuStack_8);
                                    if (pvVar13 == (void *)0x0) {
                                      pppppppppppuVar11 = *ppppppppppppuStack_8;
                                      uVar29 = uVar25;
                                      pcVar22 = thunk_FUN_00674af0(iVar7);
                                      thunk_FUN_0064d0e0(this_00,-0xab,pcVar22,uVar29,
                                                         (int)pppppppppppuVar11);
                                    }
                                    else {
                                      thunk_FUN_0067b210(pvVar13,(int)ppppppppppppuStack_15c,
                                                         (int)puStack_158);
                                    }
                                    ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                    iVar30 = (int)ppppppppppppuStack_c + -1;
                                  } while (iVar30 != 0);
                                  ppppppppppppuStack_c = (uint ************)0x0;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x5b0:
                            iVar30 = thunk_FUN_00650a90((int)asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                iVar30 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                            (uint)ppppppppppppuStack_160,
                                                            (uint *)appppppppppppuStack_34);
                                if (0 < iVar30) {
                                  ppppppppppppuStack_8 = (uint ************)appppppppppppuStack_34;
                                  do {
                                    ppppppppppppuStack_c = (uint ************)iVar30;
                                    iVar30 = thunk_FUN_004357f0(*(char *)ppppppppppppuStack_8);
                                    if (iVar30 == 0) {
                                      pppppppppppuVar11 = *ppppppppppppuStack_8;
                                      uVar29 = uVar25;
                                      pcVar22 = thunk_FUN_00674af0(iVar7);
                                      thunk_FUN_0064d0e0(this_00,-0xab,pcVar22,uVar29,
                                                         (int)pppppppppppuVar11);
                                    }
                                    else {
                                      thunk_FUN_0067b260(iVar30);
                                    }
                                    ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                    iVar30 = (int)ppppppppppppuStack_c + -1;
                                  } while (iVar30 != 0);
                                  ppppppppppppuStack_c = (uint ************)0x0;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x5b1:
                            iVar30 = thunk_FUN_006507e0((int)asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                ppppppppppppuVar23 =
                                     (uint ************)
                                     thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                        (uint)ppppppppppppuStack_160,
                                                        (uint *)appppppppppppuStack_34);
                                if (0 < (int)ppppppppppppuVar23) {
                                  ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                  ppppppppppppuStack_c = ppppppppppppuVar23;
                                  do {
                                    thunk_FUN_004e7d70((int)*ppppppppppppuVar16);
                                    ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                    ppppppppppppuStack_c =
                                         (uint ************)((int)ppppppppppppuStack_c + -1);
                                  } while (ppppppppppppuStack_c != (uint ************)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x5b2:
                            iVar30 = thunk_FUN_006507e0((int)asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                ppppppppppppuVar23 =
                                     (uint ************)
                                     thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                        (uint)ppppppppppppuStack_160,
                                                        (uint *)appppppppppppuStack_34);
                                if (0 < (int)ppppppppppppuVar23) {
                                  ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                  ppppppppppppuStack_c = ppppppppppppuVar23;
                                  do {
                                    thunk_FUN_004e7e10((uint *)*ppppppppppppuVar16);
                                    ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                    ppppppppppppuStack_c =
                                         (uint ************)((int)ppppppppppppuStack_c + -1);
                                  } while (ppppppppppppuStack_c != (uint ************)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x5b3:
                            iVar30 = thunk_FUN_00650940(asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                ppppppppppppuVar23 =
                                     (uint ************)
                                     thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                        (uint)ppppppppppppuStack_160,
                                                        (uint *)appppppppppppuStack_34);
                                if (0 < (int)ppppppppppppuVar23) {
                                  ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                  ppppppppppppuStack_c = ppppppppppppuVar23;
                                  do {
                                    thunk_FUN_004e7390((int)*ppppppppppppuVar16,
                                                       (uint)ppppppppppppuStack_15c,
                                                       (uint)puStack_158,(int)pbStack_154);
                                    ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                    ppppppppppppuStack_c =
                                         (uint ************)((int)ppppppppppppuStack_c + -1);
                                  } while (ppppppppppppuStack_c != (uint ************)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x5b4:
                            iVar30 = thunk_FUN_00650b10(asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                ppppppppppppuVar23 =
                                     (uint ************)
                                     thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                        (uint)ppppppppppppuStack_160,
                                                        (uint *)appppppppppppuStack_34);
                                if (0 < (int)ppppppppppppuVar23) {
                                  ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                  ppppppppppppuStack_8 = ppppppppppppuVar23;
                                  do {
                                    ppppppppppppuStack_c = (uint ************)0xffffffff;
                                    ppppppppppppuStack_8 = ppppppppppppuVar23;
                                    if (DAT_007fa174 == 0) {
                                      iVar7 = 0;
                                    }
                                    else {
                                      iVar7 = thunk_FUN_004357f0(*(char *)ppppppppppppuVar16);
                                    }
                                    if (iVar7 != 0) {
                                      ppppppppppppuStack_c =
                                           (uint ************)
                                           thunk_FUN_00679120((byte *)ppppppppppppuStack_15c,
                                                              (int)puStack_158,(int)pbStack_154,
                                                              (int)pbStack_150);
                                    }
                                    if ((int)ppppppppppppuStack_c < 0) {
                                      thunk_FUN_0064d0e0(this_00,-4,ppppppppppppuStack_15c,uVar25,
                                                         (int)*ppppppppppppuVar16);
                                    }
                                    ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                    ppppppppppppuVar23 =
                                         (uint ************)((int)ppppppppppppuStack_8 + -1);
                                    ppppppppppppuStack_8 = ppppppppppppuVar23;
                                  } while (ppppppppppppuVar23 != (uint ************)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x5b5:
                            iVar30 = thunk_FUN_00650f50((int)asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                iVar30 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                            (uint)ppppppppppppuStack_160,
                                                            (uint *)appppppppppppuStack_34);
                                if (0 < iVar30) {
                                  ppppppppppppuStack_8 = (uint ************)appppppppppppuStack_34;
                                  do {
                                    ppppppppppppuStack_c = (uint ************)iVar30;
                                    if (DAT_007fa174 == 0) {
                                      pvVar13 = (void *)0x0;
                                    }
                                    else {
                                      pvVar13 = (void *)thunk_FUN_004357f0(*(char *)
                                                  ppppppppppppuStack_8);
                                    }
                                    if (pvVar13 == (void *)0x0) {
                                      pppppppppppuVar11 = *ppppppppppppuStack_8;
                                      uVar29 = uVar25;
                                      pcVar22 = thunk_FUN_00674af0(iVar7);
                                      thunk_FUN_0064d0e0(this_00,-0xab,pcVar22,uVar29,
                                                         (int)pppppppppppuVar11);
                                    }
                                    else {
                                      *(undefined1 *)((int)pvVar13 + 0x644) =
                                           ppppppppppppuStack_15c._0_1_;
                                      *(uint **)((int)pvVar13 + 0x640) = puStack_158;
                                      thunk_FUN_00679600(pvVar13);
                                    }
                                    ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                    iVar30 = (int)ppppppppppppuStack_c + -1;
                                  } while (iVar30 != 0);
                                  ppppppppppppuStack_c = (uint ************)0x0;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x5b6:
                            bVar28 = thunk_FUN_00650f90(asStack_16c);
                            if (CONCAT31(extraout_var_14,bVar28) != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                iVar30 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                            (uint)ppppppppppppuStack_160,
                                                            (uint *)appppppppppppuStack_34);
                                if (0 < iVar30) {
                                  ppppppppppppuStack_8 = (uint ************)appppppppppppuStack_34;
                                  do {
                                    ppppppppppppuStack_c = (uint ************)iVar30;
                                    if (DAT_007fa174 == 0) {
                                      pvVar13 = (void *)0x0;
                                    }
                                    else {
                                      pvVar13 = (void *)thunk_FUN_004357f0(*(char *)
                                                  ppppppppppppuStack_8);
                                    }
                                    if (pvVar13 == (void *)0x0) {
                                      pppppppppppuVar11 = *ppppppppppppuStack_8;
                                      uVar29 = uVar25;
                                      pcVar22 = thunk_FUN_00674af0(iVar7);
                                      thunk_FUN_0064d0e0(this_00,-0xab,pcVar22,uVar29,
                                                         (int)pppppppppppuVar11);
                                    }
                                    else {
                                      thunk_FUN_0065bd20(pvVar13,(char)ppppppppppppuStack_15c,
                                                         (short)puStack_158,(short)pbStack_154,
                                                         (short)pbStack_150,pcStack_14c);
                                    }
                                    ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                    iVar30 = (int)ppppppppppppuStack_c + -1;
                                  } while (iVar30 != 0);
                                  ppppppppppppuStack_c = (uint ************)0x0;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x5b7:
                            iVar30 = thunk_FUN_00650bd0(asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                iVar30 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                            (uint)ppppppppppppuStack_160,
                                                            (uint *)appppppppppppuStack_34);
                                if (0 < iVar30) {
                                  ppppppppppppuStack_10 = (uint ************)appppppppppppuStack_34;
                                  ppppppppppppuStack_8 = (uint ************)iVar30;
                                  do {
                                    ppppppppppppuStack_c =
                                         (uint ************)
                                         thunk_FUN_00677290(*ppppppppppppuStack_10,
                                                            (uint)ppppppppppppuStack_15c,
                                                            (char)puStack_158,(short)pbStack_154,
                                                            (short)pbStack_150,(short)pcStack_14c,
                                                            (short)pcStack_148,
                                                            (short)ppppppppppppuStack_144,
                                                            (short)uStack_140,1);
                                    if (ppppppppppppuStack_c == (uint ************)0x0) {
                                      pppppppppppuVar11 = *ppppppppppppuStack_10;
                                      uVar29 = uVar25;
                                      pcVar22 = thunk_FUN_00674af0(iVar7);
                                      thunk_FUN_0064d0e0(this_00,-0xab,pcVar22,uVar29,
                                                         (int)pppppppppppuVar11);
                                    }
                                    else {
                                      thunk_FUN_00675dc0((uint)*ppppppppppppuStack_10,
                                                         (int)ppppppppppppuStack_c);
                                      FUN_006ae110((byte *)ppppppppppppuStack_c);
                                    }
                                    ppppppppppppuStack_10 = ppppppppppppuStack_10 + 1;
                                    ppppppppppppuStack_8 =
                                         (uint ************)((int)ppppppppppppuStack_8 + -1);
                                  } while (ppppppppppppuStack_8 != (uint ************)0x0);
                                  ppppppppppppuStack_8 = (uint ************)0x0;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x5b8:
                            iVar30 = thunk_FUN_00650cf0(asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                iVar30 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                            (uint)ppppppppppppuStack_160,
                                                            (uint *)appppppppppppuStack_34);
                                if (0 < iVar30) {
                                  ppppppppppppuStack_10 = (uint ************)appppppppppppuStack_34;
                                  ppppppppppppuStack_8 = (uint ************)iVar30;
                                  do {
                                    ppppppppppppuStack_c =
                                         (uint ************)
                                         thunk_FUN_006773b0(*ppppppppppppuStack_10,
                                                            (uint)ppppppppppppuStack_15c,
                                                            (char)puStack_158,(short)pbStack_154,
                                                            (short)pbStack_150,(short)pcStack_14c,
                                                            (short)pcStack_148,
                                                            (short)ppppppppppppuStack_144,
                                                            (short)uStack_140,1);
                                    if (ppppppppppppuStack_c == (uint ************)0x0) {
                                      pppppppppppuVar11 = *ppppppppppppuStack_10;
                                      uVar29 = uVar25;
                                      pcVar22 = thunk_FUN_00674af0(iVar7);
                                      thunk_FUN_0064d0e0(this_00,-0xab,pcVar22,uVar29,
                                                         (int)pppppppppppuVar11);
                                    }
                                    else {
                                      thunk_FUN_00675dc0((uint)*ppppppppppppuStack_10,
                                                         (int)ppppppppppppuStack_c);
                                      FUN_006ae110((byte *)ppppppppppppuStack_c);
                                    }
                                    ppppppppppppuStack_10 = ppppppppppppuStack_10 + 1;
                                    ppppppppppppuStack_8 =
                                         (uint ************)((int)ppppppppppppuStack_8 + -1);
                                  } while (ppppppppppppuStack_8 != (uint ************)0x0);
                                  ppppppppppppuStack_8 = (uint ************)0x0;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x5b9:
                            iVar30 = thunk_FUN_00650e10(asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                iVar30 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                            (uint)ppppppppppppuStack_160,
                                                            (uint *)appppppppppppuStack_34);
                                if (0 < iVar30) {
                                  ppppppppppppuStack_10 = (uint ************)appppppppppppuStack_34;
                                  ppppppppppppuStack_8 = (uint ************)iVar30;
                                  do {
                                    ppppppppppppuStack_c =
                                         (uint ************)
                                         thunk_FUN_006774c0(*ppppppppppppuStack_10,
                                                            (byte *)ppppppppppppuStack_15c,
                                                            (char)puStack_158,(short)pbStack_154,
                                                            (short)pbStack_150,(short)pcStack_14c,
                                                            (short)pcStack_148,
                                                            (short)ppppppppppppuStack_144,
                                                            (short)uStack_140,1);
                                    if (ppppppppppppuStack_c == (uint ************)0x0) {
                                      pppppppppppuVar11 = *ppppppppppppuStack_10;
                                      uVar29 = uVar25;
                                      pcVar22 = thunk_FUN_00674af0(iVar7);
                                      thunk_FUN_0064d0e0(this_00,-0xab,pcVar22,uVar29,
                                                         (int)pppppppppppuVar11);
                                    }
                                    else {
                                      thunk_FUN_00675dc0((uint)*ppppppppppppuStack_10,
                                                         (int)ppppppppppppuStack_c);
                                      FUN_006ae110((byte *)ppppppppppppuStack_c);
                                    }
                                    ppppppppppppuStack_10 = ppppppppppppuStack_10 + 1;
                                    ppppppppppppuStack_8 =
                                         (uint ************)((int)ppppppppppppuStack_8 + -1);
                                  } while (ppppppppppppuStack_8 != (uint ************)0x0);
                                  ppppppppppppuStack_8 = (uint ************)0x0;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                          }
                          goto LAB_00652a99;
                        }
                        if (iVar7 == 0x593) {
                          iVar7 = thunk_FUN_0064fd80(asStack_16c);
                          if (iVar7 == 0) {
                            iVar7 = -1;
                            uVar29 = uVar25;
                            pcVar22 = thunk_FUN_00674af0(0x593);
                            thunk_FUN_0064d0e0(this_00,-0x7d,pcVar22,uVar29,iVar7);
                          }
                          else {
                            DAT_008118fc = 0;
                            thunk_FUN_00677f40((short)ppppppppppppuStack_164,
                                               (byte *)ppppppppppppuStack_160,
                                               (short)ppppppppppppuStack_15c,(short)puStack_158,
                                               (short)pbStack_154,(short)pbStack_150,
                                               (short)pcStack_14c,(short)pcStack_148,&LAB_004022f2,
                                               &ppppppppppppuStack_144);
                          }
                          goto switchD_00652a7f_caseD_3;
                        }
                        if (iVar7 < 0x54e) {
                          if (iVar7 == 0x54d) {
                            iVar7 = thunk_FUN_0064ef10((int)asStack_16c);
                            if (iVar7 == 0) {
                              iVar7 = -1;
                              uVar29 = uVar25;
                              pcVar22 = thunk_FUN_00674af0(0x54d);
                              thunk_FUN_0064d0e0(this_00,-0x7d,pcVar22,uVar29,iVar7);
                            }
                            else {
                              iVar7 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar7 == 8) && (ppppppppppppuStack_164 == (uint ************)0x9)
                                 ) {
                                iVar7 = -1;
                                uVar29 = uVar25;
                                pcVar22 = thunk_FUN_00674af0(0x54d);
                                thunk_FUN_0064d0e0(this_00,-0x7d,pcVar22,uVar29,iVar7);
                              }
                              else {
                                iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                           (uint)ppppppppppppuStack_160,
                                                           (uint *)appppppppppppuStack_34);
                                iVar30 = 0;
                                if (0 < iVar7) {
                                  ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                                  do {
                                    if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d)
                                    {
                                      if (DAT_007fb2a0 != 0) {
                                        thunk_FUN_004aaf60((int)ppppppppppppuStack_15c);
                                      }
                                      break;
                                    }
                                    iVar30 = iVar30 + 1;
                                    ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                                  } while (iVar30 < iVar7);
                                }
                              }
                            }
                            goto switchD_00652a7f_caseD_3;
                          }
                          if (iVar7 < 0x51b) {
                            if (iVar7 == 0x51a) {
                              iVar7 = thunk_FUN_0064e960((int)asStack_16c);
                              if (iVar7 == 0) {
                                iVar7 = -1;
                                uVar29 = uVar25;
                                pcVar22 = thunk_FUN_00674af0(0x51a);
                                thunk_FUN_0064d0e0(this_00,-0x7d,pcVar22,uVar29,iVar7);
                              }
                              else {
                                *(uint *************)
                                 ((int)this_00 + (int)ppppppppppppuStack_164 * 4 + 0x52f) =
                                     ppppppppppppuStack_160;
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                            if (0x3e < iVar7) {
                              if (iVar7 < 0x517) {
                                if (iVar7 == 0x516) {
                                  iVar7 = thunk_FUN_0064e7c0(asStack_16c);
                                  if (iVar7 == 0) {
                                    iVar7 = -1;
                                    uVar29 = uVar25;
                                    pcVar22 = thunk_FUN_00674af0(0x516);
                                    thunk_FUN_0064d0e0(this_00,-0x7d,pcVar22,uVar29,iVar7);
                                  }
                                  else {
                                    if (ppppppppppppuStack_164 == (uint ************)0x9) {
                                      iVar7 = (**(code **)(*this_00 + 0x18))();
                                      if (iVar7 == 8) {
                                        ppppppppppppuVar23 = ppppppppppppuStack_15c;
                                        if ((int)ppppppppppppuStack_15c <= (int)puStack_158) {
                                          do {
                                            puVar10 = (undefined1 *)
                                                      thunk_FUN_0064e510(this_00,(int)
                                                  ppppppppppppuVar23);
                                            if (puVar10 != (undefined1 *)0x0) {
                                              *puVar10 = 0;
                                            }
                                            ppppppppppppuVar23 =
                                                 (uint ************)((int)ppppppppppppuVar23 + 1);
                                          } while ((int)ppppppppppppuVar23 <= (int)puStack_158);
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    iVar7 = thunk_FUN_00668f50(this_00,(char *)
                                                  ppppppppppppuStack_164,
                                                  (uint)ppppppppppppuStack_160,
                                                  (uint *)appppppppppppuStack_34);
                                    if (0 < iVar7) {
                                      ppppppppppppuStack_8 =
                                           (uint ************)appppppppppppuStack_34;
                                      do {
                                        ppppppppppppuStack_c = (uint ************)iVar7;
                                        if (DAT_007fa174 == 0) {
                                          ppppppppppppuStack_10 = (uint ************)0x0;
                                        }
                                        else {
                                          ppppppppppppuStack_10 =
                                               (uint ************)
                                               thunk_FUN_004357f0(*(char *)ppppppppppppuStack_8);
                                        }
                                        ppppppppppppuVar23 = ppppppppppppuStack_15c;
                                        if ((int)ppppppppppppuStack_15c <= (int)puStack_158) {
                                          do {
                                            if (ppppppppppppuStack_10 != (uint ************)0x0) {
                                              puVar10 = (undefined1 *)
                                                        thunk_FUN_0064e510(ppppppppppppuStack_10 + 7
                                                                           ,(int)ppppppppppppuVar23)
                                              ;
                                              if (puVar10 != (undefined1 *)0x0) {
                                                *puVar10 = 0;
                                              }
                                            }
                                            ppppppppppppuVar23 =
                                                 (uint ************)((int)ppppppppppppuVar23 + 1);
                                          } while ((int)ppppppppppppuVar23 <= (int)puStack_158);
                                        }
                                        ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                        iVar7 = (int)ppppppppppppuStack_c + -1;
                                      } while (iVar7 != 0);
                                      ppppppppppppuStack_c = (uint ************)0x0;
                                    }
                                  }
                                }
                                else if (iVar7 == 0x42) {
                                  iVar7 = thunk_FUN_0064e700((int)asStack_16c);
                                  if (iVar7 == 0) {
                                    iVar7 = -1;
                                    uVar29 = uVar25;
                                    pcVar22 = thunk_FUN_00674af0(0x42);
                                    thunk_FUN_0064d0e0(this_00,-0x7d,pcVar22,uVar29,iVar7);
                                  }
                                  else {
                                    ppppppppppppuVar23 = ppppppppppppuStack_160;
                                    if (ppppppppppppuStack_164 == (uint ************)0x0)
                                    goto LAB_00659a80;
                                  }
                                }
                                else if (iVar7 == 0x322) {
                                  iStack_174 = 1;
                                }
                                else if (iVar7 == 0x515) {
                                  iVar7 = thunk_FUN_0064e780(asStack_16c);
                                  if (iVar7 == 0) {
                                    iVar7 = -1;
                                    uVar29 = uVar25;
                                    pcVar22 = thunk_FUN_00674af0(0x515);
                                    thunk_FUN_0064d0e0(this_00,-0x7d,pcVar22,uVar29,iVar7);
                                  }
                                  else if (ppppppppppppuStack_164 == (uint ************)0x0) {
                                    *pcStack_178 = '\0';
                                    pcStack_178[0xb] = '\0';
                                    pcStack_178[0xc] = '\0';
                                    pcStack_178[0xd] = '\0';
                                    pcStack_178[0xe] = '\0';
                                  }
                                  else {
                                    *pcStack_178 = '\x01';
                                    *(uint *************)(pcStack_178 + 0xb) =
                                         ppppppppppppuStack_164;
                                  }
                                }
                              }
                              else if (iVar7 == 0x517) {
                                iVar7 = thunk_FUN_0064e830(asStack_16c);
                                if (iVar7 == 0) {
                                  iVar7 = -1;
                                  uVar29 = uVar25;
                                  pcVar22 = thunk_FUN_00674af0(0x517);
                                  thunk_FUN_0064d0e0(this_00,-0x7d,pcVar22,uVar29,iVar7);
                                }
                                else {
                                  if (ppppppppppppuStack_164 == (uint ************)0x9) {
                                    iVar7 = (**(code **)(*this_00 + 0x18))();
                                    if (iVar7 == 8) {
                                      ppppppppppppuVar23 = ppppppppppppuStack_15c;
                                      if ((int)ppppppppppppuStack_15c <= (int)puStack_158) {
                                        do {
                                          puVar10 = (undefined1 *)
                                                    thunk_FUN_0064e510(this_00,(int)
                                                  ppppppppppppuVar23);
                                          if (puVar10 != (undefined1 *)0x0) {
                                            *puVar10 = 1;
                                            *(byte **)(puVar10 + 0xb) = pbStack_154;
                                          }
                                          ppppppppppppuVar23 =
                                               (uint ************)((int)ppppppppppppuVar23 + 1);
                                        } while ((int)ppppppppppppuVar23 <= (int)puStack_158);
                                      }
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                             (uint)ppppppppppppuStack_160,
                                                             (uint *)appppppppppppuStack_34);
                                  if (0 < iVar7) {
                                    ppppppppppppuStack_8 = (uint ************)appppppppppppuStack_34
                                    ;
                                    ppppppppppppuStack_c = (uint ************)iVar7;
                                    do {
                                      if (DAT_007fa174 == 0) {
                                        ppppppppppppuStack_10 = (uint ************)0x0;
                                      }
                                      else {
                                        ppppppppppppuStack_10 =
                                             (uint ************)
                                             thunk_FUN_004357f0(*(char *)ppppppppppppuStack_8);
                                      }
                                      ppppppppppppuVar23 = ppppppppppppuStack_15c;
                                      if ((int)ppppppppppppuStack_15c <= (int)puStack_158) {
                                        do {
                                          if (ppppppppppppuStack_10 != (uint ************)0x0) {
                                            puVar10 = (undefined1 *)
                                                      thunk_FUN_0064e510(ppppppppppppuStack_10 + 7,
                                                                         (int)ppppppppppppuVar23);
                                            if (puVar10 != (undefined1 *)0x0) {
                                              *puVar10 = 1;
                                              *(byte **)(puVar10 + 0xb) = pbStack_154;
                                            }
                                          }
                                          ppppppppppppuVar23 =
                                               (uint ************)((int)ppppppppppppuVar23 + 1);
                                        } while ((int)ppppppppppppuVar23 <= (int)puStack_158);
                                      }
                                      ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                      ppppppppppppuStack_c =
                                           (uint ************)((int)ppppppppppppuStack_c + -1);
                                    } while (ppppppppppppuStack_c != (uint ************)0x0);
                                    ppppppppppppuStack_c = (uint ************)0x0;
                                  }
                                }
                              }
                              else if (iVar7 == 0x518) {
                                iVar7 = thunk_FUN_0064e8c0((int)asStack_16c);
                                if (iVar7 == 0) {
                                  iVar7 = -1;
                                  uVar29 = uVar25;
                                  pcVar22 = thunk_FUN_00674af0(0x518);
                                  thunk_FUN_0064d0e0(this_00,-0x7d,pcVar22,uVar29,iVar7);
                                }
                                else {
                                  if (ppppppppppppuStack_164 == (uint ************)0x9) {
                                    iVar7 = (**(code **)(*this_00 + 0x18))();
                                    if (iVar7 == 8) {
                                      *(uint **)((int)this_00 +
                                                (int)ppppppppppppuStack_15c * 4 + 0xde) =
                                           puStack_158;
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                  }
                                  ppppppppppppuVar23 =
                                       (uint ************)
                                       thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                          (uint)ppppppppppppuStack_160,
                                                          (uint *)appppppppppppuStack_34);
                                  if (0 < (int)ppppppppppppuVar23) {
                                    ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                    ppppppppppppuStack_c = ppppppppppppuVar23;
                                    do {
                                      ppppppppppppuStack_c = ppppppppppppuVar23;
                                      if (DAT_007fa174 == 0) {
                                        iVar7 = 0;
                                      }
                                      else {
                                        iVar7 = thunk_FUN_004357f0(*(char *)ppppppppppppuVar16);
                                      }
                                      if (iVar7 == 0) {
                                        pppppppppppuVar11 = *ppppppppppppuVar16;
                                        uVar29 = uVar25;
                                        pcVar22 = thunk_FUN_00674af0(0x518);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar22,uVar29,
                                                           (int)pppppppppppuVar11);
                                      }
                                      else {
                                        *(uint **)(iVar7 + 0xfa + (int)ppppppppppppuStack_15c * 4) =
                                             puStack_158;
                                      }
                                      ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                      ppppppppppppuVar23 =
                                           (uint ************)((int)ppppppppppppuStack_c + -1);
                                      ppppppppppppuStack_c = ppppppppppppuVar23;
                                    } while (ppppppppppppuVar23 != (uint ************)0x0);
                                  }
                                }
                              }
                              else if (iVar7 == 0x519) {
                                iVar7 = thunk_FUN_0064e910((int)asStack_16c);
                                if (iVar7 == 0) {
                                  iVar7 = -1;
                                  uVar29 = uVar25;
                                  pcVar22 = thunk_FUN_00674af0(0x519);
                                  thunk_FUN_0064d0e0(this_00,-0x7d,pcVar22,uVar29,iVar7);
                                }
                                else {
                                  (&DAT_0080e43b)[(int)ppppppppppppuStack_164] =
                                       ppppppppppppuStack_160;
                                }
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                            if (iVar7 == 0x3e) {
switchD_00652b42_switchD:
                              switch(ppppppppppppuStack_15c) {
                              case (uint ************)0x0:
                                iVar30 = thunk_FUN_0064ea10((int)asStack_16c);
                                if (iVar30 == 0) goto LAB_00652a99;
                                switch(iVar7) {
                                case 2:
                                  piVar8 = (int *)((int)this_00 +
                                                  (int)ppppppppppppuStack_164 * 4 + 0xde);
                                  *piVar8 = (int)(*piVar8 + (int)ppppppppppppuStack_160);
                                  break;
                                case 5:
                                  *(uint *************)
                                   ((int)this_00 + (int)ppppppppppppuStack_164 * 4 + 0xde) =
                                       ppppppppppppuStack_160;
                                  break;
                                case 0x17:
                                  if (ppppppppppppuStack_160 == (uint ************)0x0) {
                                    thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar25,-1);
                                  }
                                  else {
                                    *(int *)((int)this_00 + (int)ppppppppppppuStack_164 * 4 + 0xde)
                                         = *(int *)((int)this_00 +
                                                   (int)ppppppppppppuStack_164 * 4 + 0xde) /
                                           (int)ppppppppppppuStack_160;
                                  }
                                  break;
                                case 0x2d:
                                  if (ppppppppppppuStack_160 == (uint ************)0x0) {
                                    thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar25,-1);
                                  }
                                  else {
                                    *(int *)((int)this_00 + (int)ppppppppppppuStack_164 * 4 + 0xde)
                                         = *(int *)((int)this_00 +
                                                   (int)ppppppppppppuStack_164 * 4 + 0xde) %
                                           (int)ppppppppppppuStack_160;
                                  }
                                  break;
                                case 0x31:
                                  *(int *)((int)this_00 + (int)ppppppppppppuStack_164 * 4 + 0xde) =
                                       *(int *)((int)this_00 +
                                               (int)ppppppppppppuStack_164 * 4 + 0xde) *
                                       (int)ppppppppppppuStack_160;
                                  break;
                                case 0x3e:
                                  piVar8 = (int *)((int)this_00 +
                                                  (int)ppppppppppppuStack_164 * 4 + 0xde);
                                  *piVar8 = *piVar8 - (int)ppppppppppppuStack_160;
                                }
                                break;
                              case (uint ************)0x1:
                                iVar30 = thunk_FUN_0064ea10((int)asStack_16c);
                                if (iVar30 == 0) goto LAB_00652a99;
                                switch(iVar7) {
                                case 2:
                                  (&DAT_0080e43b)[(int)ppppppppppppuStack_164] =
                                       (char *)((&DAT_0080e43b)[(int)ppppppppppppuStack_164] +
                                               (int)ppppppppppppuStack_160);
                                  break;
                                case 5:
                                  (&DAT_0080e43b)[(int)ppppppppppppuStack_164] =
                                       ppppppppppppuStack_160;
                                  break;
                                case 0x17:
                                  if (ppppppppppppuStack_160 == (uint ************)0x0) {
                                    thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar25,-1);
                                  }
                                  else {
                                    (&DAT_0080e43b)[(int)ppppppppppppuStack_164] =
                                         (int)(&DAT_0080e43b)[(int)ppppppppppppuStack_164] /
                                         (int)ppppppppppppuStack_160;
                                  }
                                  break;
                                case 0x2d:
                                  if (ppppppppppppuStack_160 == (uint ************)0x0) {
                                    thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar25,-1);
                                  }
                                  else {
                                    (&DAT_0080e43b)[(int)ppppppppppppuStack_164] =
                                         (int)(&DAT_0080e43b)[(int)ppppppppppppuStack_164] %
                                         (int)ppppppppppppuStack_160;
                                  }
                                  break;
                                case 0x31:
                                  (&DAT_0080e43b)[(int)ppppppppppppuStack_164] =
                                       (&DAT_0080e43b)[(int)ppppppppppppuStack_164] *
                                       (int)ppppppppppppuStack_160;
                                  break;
                                case 0x3e:
                                  (&DAT_0080e43b)[(int)ppppppppppppuStack_164] =
                                       (&DAT_0080e43b)[(int)ppppppppppppuStack_164] -
                                       (int)ppppppppppppuStack_160;
                                }
                                break;
                              case (uint ************)0x2:
                                iVar30 = thunk_FUN_0064ea60((int)asStack_16c);
                                if (iVar30 == 0) goto LAB_00652a99;
                                switch(iVar7) {
                                case 2:
                                  piVar8 = (int *)((int)this_00 +
                                                  (int)ppppppppppppuStack_164 * 4 + 0x52f);
                                  *piVar8 = (int)(*piVar8 + (int)ppppppppppppuStack_160);
                                  break;
                                case 5:
                                  *(uint *************)
                                   ((int)this_00 + (int)ppppppppppppuStack_164 * 4 + 0x52f) =
                                       ppppppppppppuStack_160;
                                  break;
                                case 0x17:
                                  if (ppppppppppppuStack_160 == (uint ************)0x0) {
                                    thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar25,-1);
                                  }
                                  else {
                                    *(int *)((int)this_00 + (int)ppppppppppppuStack_164 * 4 + 0x52f)
                                         = *(int *)((int)this_00 +
                                                   (int)ppppppppppppuStack_164 * 4 + 0x52f) /
                                           (int)ppppppppppppuStack_160;
                                  }
                                  break;
                                case 0x2d:
                                  if (ppppppppppppuStack_160 == (uint ************)0x0) {
                                    thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar25,-1);
                                  }
                                  else {
                                    *(int *)((int)this_00 + (int)ppppppppppppuStack_164 * 4 + 0x52f)
                                         = *(int *)((int)this_00 +
                                                   (int)ppppppppppppuStack_164 * 4 + 0x52f) %
                                           (int)ppppppppppppuStack_160;
                                  }
                                  break;
                                case 0x31:
                                  *(int *)((int)this_00 + (int)ppppppppppppuStack_164 * 4 + 0x52f) =
                                       *(int *)((int)this_00 +
                                               (int)ppppppppppppuStack_164 * 4 + 0x52f) *
                                       (int)ppppppppppppuStack_160;
                                  break;
                                case 0x3e:
                                  piVar8 = (int *)((int)this_00 +
                                                  (int)ppppppppppppuStack_164 * 4 + 0x52f);
                                  *piVar8 = *piVar8 - (int)ppppppppppppuStack_160;
                                }
                                break;
                              case (uint ************)0x3:
                                iVar30 = thunk_FUN_0064eaa0((int)asStack_16c);
                                if (iVar30 == 0) goto LAB_00652a99;
                                if (iVar7 == 5) {
                                  FUN_006b6020(*(int *)((int)this_00 + 0x5b3),
                                               (uint)ppppppppppppuStack_164,
                                               (char *)ppppppppppppuStack_160);
                                }
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                            switch(iVar7) {
                            case 2:
                            case 5:
                            case 0x17:
                            case 0x2d:
                            case 0x31:
                              goto switchD_00652b42_switchD;
                            case 0x19:
                              iVar30 = thunk_FUN_0064e6c0((int)asStack_16c);
                              if (iVar30 == 0) goto LAB_00652a99;
                              if (iStack_174 != 0) {
                                iStack_174 = 0;
                                ppppppppppppuStack_170 = ppppppppppppuStack_164;
                                ppppppppppppuVar23 = ppppppppppppuStack_170;
                                goto LAB_00659a80;
                              }
                              iStack_174 = 0;
                              break;
                            case 0x21:
                              iVar30 = thunk_FUN_0064e740((int)asStack_16c);
                              ppppppppppppuVar23 = ppppppppppppuStack_164;
                              if (iVar30 == 0) goto LAB_00652a99;
                              goto LAB_00659a80;
                            case 0x23:
                              iVar30 = thunk_FUN_0064e680((int)asStack_16c);
                              if (iVar30 == 0) goto LAB_00652a99;
                              if (ppppppppppppuStack_164 == (uint ************)0x0) {
                                ppppppppppppuStack_170 = ppppppppppppuStack_160;
                                ppppppppppppuVar23 = ppppppppppppuStack_170;
                                goto LAB_00659a80;
                              }
                            }
                            goto switchD_00652a7f_caseD_3;
                          }
                          switch(iVar7) {
                          case 0x51b:
                            iVar30 = thunk_FUN_0064e9a0((int)asStack_16c);
                            if (iVar30 == 0) goto LAB_00652a99;
                            FUN_006b6020(*(int *)((int)this_00 + 0x5b3),(uint)ppppppppppppuStack_164
                                         ,(char *)ppppppppppppuStack_160);
                            break;
                          case 0x528:
                            bVar28 = thunk_FUN_0064eb20((int)asStack_16c);
                            if (CONCAT31(extraout_var,bVar28) != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                ppppppppppppuVar23 =
                                     (uint ************)
                                     thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                        (uint)ppppppppppppuStack_160,
                                                        (uint *)appppppppppppuStack_34);
                                if (0 < (int)ppppppppppppuVar23) {
                                  ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                  ppppppppppppuStack_c = ppppppppppppuVar23;
                                  pvVar13 = DAT_00801688;
                                  do {
                                    if (pvVar13 != (void *)0x0) {
                                      thunk_FUN_004f9120(pvVar13,*(byte *)ppppppppppppuVar16,'\x01',
                                                         ppppppppppppuStack_15c);
                                      pvVar13 = DAT_00801688;
                                    }
                                    ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                    ppppppppppppuStack_c =
                                         (uint ************)((int)ppppppppppppuStack_c + -1);
                                  } while (ppppppppppppuStack_c != (uint ************)0x0);
                                }
                                break;
                              }
                            }
                            goto LAB_00652a99;
                          case 0x529:
                            iVar30 = thunk_FUN_0064eb60((int)asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                ppppppppppppuVar23 =
                                     (uint ************)
                                     thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                        (uint)ppppppppppppuStack_160,
                                                        (uint *)appppppppppppuStack_34);
                                if (0 < (int)ppppppppppppuVar23) {
                                  ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                  ppppppppppppuStack_c = ppppppppppppuVar23;
                                  pvVar13 = DAT_00801688;
                                  do {
                                    ppppppppppppuStack_c = ppppppppppppuVar23;
                                    if (pvVar13 != (void *)0x0) {
                                      thunk_FUN_004f9120(pvVar13,*(byte *)ppppppppppppuVar16,'\0',0)
                                      ;
                                      pvVar13 = DAT_00801688;
                                    }
                                    ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                    ppppppppppppuVar23 =
                                         (uint ************)((int)ppppppppppppuStack_c + -1);
                                    ppppppppppppuStack_c = ppppppppppppuVar23;
                                  } while (ppppppppppppuVar23 != (uint ************)0x0);
                                }
                                break;
                              }
                            }
                            goto LAB_00652a99;
                          case 0x52a:
                            iVar30 = thunk_FUN_0064eba0((int)asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                           (uint)ppppppppppppuStack_160,
                                                           (uint *)appppppppppppuStack_34);
                                iVar30 = 0;
                                if (0 < iVar7) {
                                  ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                                  do {
                                    if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d)
                                    {
                                      if (DAT_00801688 != (void *)0x0) {
                                        thunk_FUN_004f9260((char)ppppppppppppuStack_15c);
                                      }
                                      break;
                                    }
                                    iVar30 = iVar30 + 1;
                                    ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                                  } while (iVar30 < iVar7);
                                }
                                break;
                              }
                            }
                            goto LAB_00652a99;
                          case 0x532:
                            bVar28 = thunk_FUN_0064ebe0((int)asStack_16c);
                            if (CONCAT31(extraout_var_00,bVar28) == 0) goto LAB_00652a99;
                            if (DAT_008016d8 != (void *)0x0) {
                              if (ppppppppppppuStack_164 == (uint ************)0x9) {
                                iVar7 = (**(code **)(*this_00 + 0x18))();
                                if (iVar7 == 8) {
                                  thunk_FUN_0052d320(DAT_008016d8,(char *)ppppppppppppuStack_15c,8);
                                  break;
                                }
                              }
                              iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                         (uint)ppppppppppppuStack_160,
                                                         (uint *)appppppppppppuStack_34);
                              iVar30 = 0;
                              if (0 < iVar7) {
                                ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                                do {
                                  if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d) {
                                    thunk_FUN_0052d320(DAT_008016d8,(char *)ppppppppppppuStack_15c,8
                                                      );
                                    break;
                                  }
                                  iVar30 = iVar30 + 1;
                                  ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                                } while (iVar30 < iVar7);
                              }
                            }
                            break;
                          case 0x533:
                            bVar28 = thunk_FUN_0064ec30((int)asStack_16c);
                            if (CONCAT31(extraout_var_01,bVar28) == 0) goto LAB_00652a99;
                            if (ppppppppppppuStack_164 == (uint ************)0x9) {
                              iVar7 = (**(code **)(*this_00 + 0x18))();
                              if (iVar7 == 8) {
                                if (DAT_00801694 != (void *)0x0) {
                                  thunk_FUN_0051fac0(DAT_00801694,(char *)pbStack_154,2,
                                                     (char)puStack_158,
                                                     (int)ppppppppppppuStack_15c * 1000);
                                }
                                break;
                              }
                            }
                            iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                       (uint)ppppppppppppuStack_160,
                                                       (uint *)appppppppppppuStack_34);
                            iVar30 = 0;
                            if (0 < iVar7) {
                              ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                              do {
                                if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d) {
                                  if (DAT_00801694 != (void *)0x0) {
                                    thunk_FUN_0051fac0(DAT_00801694,(char *)pbStack_154,2,
                                                       (char)puStack_158,
                                                       (int)ppppppppppppuStack_15c * 1000);
                                  }
                                  break;
                                }
                                iVar30 = iVar30 + 1;
                                ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                              } while (iVar30 < iVar7);
                            }
                            break;
                          case 0x534:
                            bVar28 = thunk_FUN_0064ec80((int)asStack_16c);
                            if (CONCAT31(extraout_var_02,bVar28) == 0) goto LAB_00652a99;
                            if (ppppppppppppuStack_164 == (uint ************)0x9) {
                              iVar7 = (**(code **)(*this_00 + 0x18))();
                              if (iVar7 == 8) {
LAB_006536dd:
                                if (DAT_00801688 != (void *)0x0) {
                                  thunk_FUN_004f9480((int)puStack_158,
                                                     (int)(pbStack_154 + (1 - (int)puStack_158)),
                                                     ppppppppppppuStack_15c);
                                }
                                break;
                              }
                            }
                            iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                       (uint)ppppppppppppuStack_160,
                                                       (uint *)appppppppppppuStack_34);
                            iVar30 = 0;
                            if (0 < iVar7) {
                              ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                              do {
                                if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d)
                                goto LAB_006536dd;
                                iVar30 = iVar30 + 1;
                                ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                              } while (iVar30 < iVar7);
                            }
                            break;
                          case 0x535:
                            bVar28 = thunk_FUN_0064ecd0((int)asStack_16c);
                            if (CONCAT31(extraout_var_03,bVar28) == 0) goto LAB_00652a99;
                            if (ppppppppppppuStack_164 == (uint ************)0x9) {
                              iVar7 = (**(code **)(*this_00 + 0x18))();
                              if (iVar7 == 8) {
LAB_00653778:
                                if (DAT_00801688 != (void *)0x0) {
                                  thunk_FUN_004f95b0((char *)puStack_158,ppppppppppppuStack_15c);
                                }
                                break;
                              }
                            }
                            iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                       (uint)ppppppppppppuStack_160,
                                                       (uint *)appppppppppppuStack_34);
                            iVar30 = 0;
                            if (0 < iVar7) {
                              ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                              do {
                                if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d)
                                goto LAB_00653778;
                                iVar30 = iVar30 + 1;
                                ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                              } while (iVar30 < iVar7);
                            }
                            break;
                          case 0x536:
                            bVar28 = thunk_FUN_0064ed20((int)asStack_16c);
                            if (CONCAT31(extraout_var_04,bVar28) == 0) goto LAB_00652a99;
                            if (ppppppppppppuStack_164 == (uint ************)0x9) {
                              iVar7 = (**(code **)(*this_00 + 0x18))();
                              if (iVar7 == 8) {
                                thunk_FUN_00568dd0(&DAT_00807658,0xc,(char *)ppppppppppppuStack_15c,
                                                   0,(int *)0x0,0);
                                break;
                              }
                            }
                            iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                       (uint)ppppppppppppuStack_160,
                                                       (uint *)appppppppppppuStack_34);
                            iVar30 = 0;
                            if (0 < iVar7) {
                              ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                              do {
                                if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d) {
                                  thunk_FUN_00568dd0(&DAT_00807658,0xc,
                                                     (char *)ppppppppppppuStack_15c,0,(int *)0x0,0);
                                  break;
                                }
                                iVar30 = iVar30 + 1;
                                ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                              } while (iVar30 < iVar7);
                            }
                            break;
                          case 0x537:
                            bVar28 = thunk_FUN_0064ed70((int)asStack_16c);
                            if (CONCAT31(extraout_var_05,bVar28) == 0) goto LAB_00652a99;
                            if (ppppppppppppuStack_164 == (uint ************)0x9) {
                              iVar7 = (**(code **)(*this_00 + 0x18))();
                              if (iVar7 == 8) {
                                if (DAT_00801688 != (void *)0x0) {
                                  thunk_FUN_004f9cd0((char *)ppppppppppppuStack_15c);
                                }
                                break;
                              }
                            }
                            iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                       (uint)ppppppppppppuStack_160,
                                                       (uint *)appppppppppppuStack_34);
                            iVar30 = 0;
                            if (0 < iVar7) {
                              ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                              do {
                                if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d) {
                                  if (DAT_00801688 != (void *)0x0) {
                                    thunk_FUN_004f9cd0((char *)ppppppppppppuStack_15c);
                                  }
                                  break;
                                }
                                iVar30 = iVar30 + 1;
                                ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                              } while (iVar30 < iVar7);
                            }
                            break;
                          case 0x546:
                            iVar30 = thunk_FUN_0064edc0((int)asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                           (uint)ppppppppppppuStack_160,
                                                           (uint *)appppppppppppuStack_34);
                                iVar30 = 0;
                                if (0 < iVar7) {
                                  ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                                  do {
                                    if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d)
                                    {
                                      if (DAT_00802a88 != (void *)0x0) {
                                        if ((int)pcStack_14c < 0) {
                                          iVar7 = -0x10;
                                        }
                                        else {
                                          iVar7 = (int)pcStack_14c * 0x19;
                                        }
                                        thunk_FUN_0055a9d0(DAT_00802a88,(int)ppppppppppppuStack_15c,
                                                           (int)puStack_158,pbStack_154,
                                                           (uint)appppppppppppuStack_34[iVar30],
                                                           pbStack_150,iVar7);
                                      }
                                      break;
                                    }
                                    iVar30 = iVar30 + 1;
                                    ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                                  } while (iVar30 < iVar7);
                                }
                                break;
                              }
                            }
                            goto LAB_00652a99;
                          case 0x547:
                          case 0x548:
                            iVar30 = thunk_FUN_0064ee00((int)asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                ppppppppppppuStack_10 =
                                     (uint ************)
                                     thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                        (uint)ppppppppppppuStack_160,
                                                        (uint *)appppppppppppuStack_34);
                                iVar30 = 0;
                                if (0 < (int)ppppppppppppuStack_10) {
                                  ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                                  do {
                                    if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d)
                                    {
                                      if (DAT_00802a88 == (void *)0x0) break;
                                      if (*(int *)((int)DAT_00802a88 + 0x114) == 0) {
                                        *(undefined4 *)((int)DAT_00802a88 + 0xf8) = 0;
                                      }
                                      else {
                                        *(uint *)((int)DAT_00802a88 + 0xf8) = (uint)(iVar7 == 0x547)
                                        ;
                                        iVar30 = DAT_00807598;
                                        if ((iVar7 == 0x547) != 0) {
                                          *(undefined4 *)(DAT_00807598 + 0x466) = 1;
                                          *(undefined4 *)(iVar30 + 0x2d8) = 1;
                                          break;
                                        }
                                      }
                                      iVar7 = DAT_00807598;
                                      *(undefined4 *)(DAT_00807598 + 0x466) = 0;
                                      *(undefined4 *)(iVar7 + 0x2d8) = 1;
                                      break;
                                    }
                                    iVar30 = iVar30 + 1;
                                    ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                                  } while (iVar30 < (int)ppppppppppppuStack_10);
                                }
                                break;
                              }
                            }
                            goto LAB_00652a99;
                          case 0x549:
                            iVar30 = thunk_FUN_0064ee40(asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                           (uint)ppppppppppppuStack_160,
                                                           (uint *)appppppppppppuStack_34);
                                iVar30 = 0;
                                if (0 < iVar7) {
                                  ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                                  do {
                                    if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d)
                                    {
                                      if (DAT_007fb2a0 != 0) {
                                        thunk_FUN_004ab530((int)pbStack_154,
                                                           (int)ppppppppppppuStack_15c,
                                                           (int)puStack_158);
                                      }
                                      break;
                                    }
                                    iVar30 = iVar30 + 1;
                                    ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                                  } while (iVar30 < iVar7);
                                }
                                break;
                              }
                            }
                            goto LAB_00652a99;
                          case 0x54a:
                            iVar30 = thunk_FUN_0064ee90((int)asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                ppppppppppppuStack_10 =
                                     (uint ************)
                                     thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                        (uint)ppppppppppppuStack_160,
                                                        (uint *)appppppppppppuStack_34);
                                iVar30 = 0;
                                if (0 < (int)ppppppppppppuStack_10) {
                                  ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
LAB_00653bb7:
                                  if (*ppppppppppppuVar23 != (uint ***********)(uint)DAT_0080874d)
                                  goto code_r0x00653bbb;
                                  if (DAT_007fb2a0 != 0) {
                                    puVar26 = auStack_1c0;
                                    for (iVar30 = 8; iVar30 != 0; iVar30 = iVar30 + -1) {
                                      *puVar26 = 0;
                                      puVar26 = puVar26 + 1;
                                    }
                                    switch(ppppppppppppuStack_15c) {
                                    case (uint ************)0x0:
                                      iStack_1b0 = 0x104;
                                      break;
                                    case (uint ************)0x1:
                                      iStack_1b0 = 0x105;
                                      break;
                                    case (uint ************)0x2:
                                      iStack_1b0 = 0x106;
                                      break;
                                    case (uint ************)0x3:
                                      iStack_1b0 = 0x107;
                                      break;
                                    default:
                                      iVar30 = -1;
                                      uVar25 = uStack_14;
                                      pcVar22 = thunk_FUN_00674af0(iVar7);
                                      thunk_FUN_0064d0e0(this_00,-0x7d,pcVar22,uVar25,iVar30);
                                      uVar25 = uStack_14;
                                      goto switchD_00652a7f_caseD_3;
                                    }
                                    (**(code **)(*this_00 + 0x30))(3,0x100,auStack_1c0);
                                    uVar25 = uStack_14;
                                  }
                                }
                                break;
                              }
                            }
                            goto LAB_00652a99;
                          case 0x54b:
                          case 0x54c:
                            iVar30 = thunk_FUN_0064eed0((int)asStack_16c);
                            if (iVar30 != 0) {
                              iVar30 = (**(code **)(*this_00 + 0x18))();
                              if ((iVar30 != 8) ||
                                 (ppppppppppppuStack_164 != (uint ************)0x9)) {
                                ppppppppppppuStack_10 =
                                     (uint ************)
                                     thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                        (uint)ppppppppppppuStack_160,
                                                        (uint *)appppppppppppuStack_34);
                                iVar30 = 0;
                                if (0 < (int)ppppppppppppuStack_10) {
                                  ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                                  do {
                                    if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d)
                                    {
                                      if (DAT_007fb2a0 != 0) {
                                        puVar26 = auStack_1c0;
                                        for (iVar30 = 8; iVar30 != 0; iVar30 = iVar30 + -1) {
                                          *puVar26 = 0;
                                          puVar26 = puVar26 + 1;
                                        }
                                        iStack_1b0 = (iVar7 != 0x54b) + 0x100;
                                        (**(code **)(*this_00 + 0x30))(3,0x100,auStack_1c0);
                                        uVar25 = uStack_14;
                                      }
                                      break;
                                    }
                                    iVar30 = iVar30 + 1;
                                    ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                                  } while (iVar30 < (int)ppppppppppppuStack_10);
                                }
                                break;
                              }
                            }
                            goto LAB_00652a99;
                          }
                          goto switchD_00652a7f_caseD_3;
                        }
                        switch(iVar7) {
                        case 0x54e:
                          iVar30 = thunk_FUN_0064ef50((int)asStack_16c);
                          if (iVar30 != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                         (uint)ppppppppppppuStack_160,
                                                         (uint *)appppppppppppuStack_34);
                              iVar30 = 0;
                              if (0 < iVar7) {
                                ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                                do {
                                  if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d) {
                                    thunk_FUN_0052af90((byte)ppppppppppppuStack_15c,(int)puStack_158
                                                       ,(int)pbStack_154);
                                    break;
                                  }
                                  iVar30 = iVar30 + 1;
                                  ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                                } while (iVar30 < iVar7);
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        default:
                          goto switchD_00652a7f_caseD_3;
                        case 0x55a:
                          iVar30 = thunk_FUN_0064f080((int)asStack_16c);
                          if (iVar30 != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              ppppppppppppuVar23 =
                                   (uint ************)
                                   thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                      (uint)ppppppppppppuStack_160,
                                                      (uint *)appppppppppppuStack_34);
                              if (0 < (int)ppppppppppppuVar23) {
                                ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                ppppppppppppuStack_c = ppppppppppppuVar23;
                                do {
                                  pppppppppppuVar11 = *ppppppppppppuVar16;
                                  (&DAT_00809950)[(int)pppppppppppuVar11] =
                                       (ppppppppppppuStack_15c != (uint ************)0x1) + '\x01';
                                  if (pppppppppppuVar11 == (uint ***********)(uint)DAT_0080874d) {
                                    DAT_0080c522 = (uint)(ppppppppppppuStack_15c ==
                                                         (uint ************)0x1);
                                  }
                                  ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                  ppppppppppppuStack_c =
                                       (uint ************)((int)ppppppppppppuStack_c + -1);
                                } while (ppppppppppppuStack_c != (uint ************)0x0);
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x55b:
                          bVar28 = thunk_FUN_0064f0c0((int)asStack_16c);
                          if (CONCAT31(extraout_var_06,bVar28) != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                         (uint)ppppppppppppuStack_160,
                                                         (uint *)appppppppppppuStack_34);
                              iVar30 = 0;
                              if (0 < iVar7) {
                                ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                                do {
                                  if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d) {
                                    if ((*(char *)ppppppppppppuStack_15c != '\0') &&
                                       ((DAT_008087a0 == '\x03' || (DAT_008087a0 == '\b')))) {
                                      FUN_0072e730(&DAT_0080ef1e,(byte *)0x0,abStack_384,(byte *)0x0
                                                   ,(byte *)0x0);
                                      __makepath(&DAT_0080c632,(char *)0x0,(char *)abStack_384,
                                                 (char *)ppppppppppppuStack_15c,(char *)0x0);
                                    }
                                    break;
                                  }
                                  iVar30 = iVar30 + 1;
                                  ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                                } while (iVar30 < iVar7);
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x55c:
                          iVar30 = thunk_FUN_0064f110(asStack_16c);
                          if (iVar30 != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                         (uint)ppppppppppppuStack_160,
                                                         (uint *)appppppppppppuStack_34);
                              iVar30 = 0;
                              if (0 < iVar7) {
                                do {
                                  (&DAT_0080c947)[iVar30] = puStack_158;
                                  if (appppppppppppuStack_34[iVar30] ==
                                      (uint ************)(uint)DAT_0080874d) {
                                    DAT_0080e301 = ppppppppppppuStack_15c._0_1_;
                                  }
                                  iVar30 = iVar30 + 1;
                                } while (iVar30 < iVar7);
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x55d:
                          bVar28 = thunk_FUN_0064f160((int)asStack_16c);
                          if (CONCAT31(extraout_var_07,bVar28) != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                         (uint)ppppppppppppuStack_160,
                                                         (uint *)appppppppppppuStack_34);
                              iVar30 = 0;
                              if (0 < iVar7) {
                                ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
LAB_006540b9:
                                if (*ppppppppppppuVar23 != (uint ***********)(uint)DAT_0080874d)
                                goto code_r0x006540bd;
                                DAT_0080e300 = ppppppppppppuStack_15c._0_1_;
                                puVar26 = &DAT_0080e303;
                                for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
                                  *puVar26 = 0;
                                  puVar26 = puVar26 + 1;
                                }
                                _strncpy((char *)&DAT_0080e303,(char *)puStack_158,0x1f);
                                uVar25 = uStack_14;
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x55e:
                          bVar28 = thunk_FUN_0064f1b0(asStack_16c);
                          if (CONCAT31(extraout_var_08,bVar28) != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                         (uint)ppppppppppppuStack_160,
                                                         (uint *)appppppppppppuStack_34);
                              iVar30 = 0;
                              if (0 < iVar7) {
                                ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                                do {
                                  if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d) {
                                    DAT_0080e302 = ppppppppppppuStack_15c._0_1_;
                                    DAT_0080e429 = (char)pbStack_154;
                                    DAT_0080e428 = pcStack_14c._0_1_;
                                    DAT_0080e427 = pbStack_150._0_1_;
                                    _DAT_0080e432 = uStack_140;
                                    _DAT_0080e42a = pcStack_148;
                                    _DAT_0080e42e = ppppppppppppuStack_144;
                                    _DAT_0080e436 = iStack_13c;
                                    DAT_0080e43a = pcStack_138._0_1_;
                                    if (DAT_008087a0 == '\x03') {
                                      FUN_0072e730(&DAT_0080ef1e,(byte *)0x0,abStack_484,(byte *)0x0
                                                   ,(byte *)0x0);
                                      __makepath((char *)&DAT_0080f33a,(char *)0x0,
                                                 (char *)abStack_484,(char *)puStack_158,(char *)0x0
                                                );
                                      wsprintfA(&DAT_0080e323,&DAT_007c6ee4,&DAT_00807784,
                                                &DAT_0080f33a);
                                    }
                                    else if (DAT_008087a0 == '\b') {
                                      wsprintfA(&DAT_0080e323,&DAT_007c6ee4,&DAT_00807784,
                                                puStack_158);
                                    }
                                    break;
                                  }
                                  iVar30 = iVar30 + 1;
                                  ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                                } while (iVar30 < iVar7);
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x55f:
                          bVar28 = thunk_FUN_0064ef90((int)asStack_16c);
                          if (CONCAT31(extraout_var_09,bVar28) != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                         (uint)ppppppppppppuStack_160,
                                                         (uint *)appppppppppppuStack_34);
                              iVar30 = 0;
                              if (0 < iVar7) {
                                ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                                do {
                                  if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d) {
                                    iVar7 = FUN_006b5aa0((int)DAT_0080c4cb,(char *)puStack_158);
                                    if (DAT_008016dc != 0) {
                                      thunk_FUN_005380e0();
                                    }
                                    if (-1 < iVar7) {
                                      *(int *)((int)this_00 + (int)ppppppppppppuStack_15c * 4 + 0xde
                                              ) = iVar7;
                                    }
                                    break;
                                  }
                                  iVar30 = iVar30 + 1;
                                  ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                                } while (iVar30 < iVar7);
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x560:
                          iVar30 = thunk_FUN_0064f000((int)asStack_16c);
                          if (iVar30 != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                         (uint)ppppppppppppuStack_160,
                                                         (uint *)appppppppppppuStack_34);
                              iVar30 = 0;
                              if (0 < iVar7) {
                                ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
LAB_00654362:
                                if (*ppppppppppppuVar23 != (uint ***********)(uint)DAT_0080874d)
                                goto code_r0x00654366;
                                FUN_006c87c0((int)DAT_0080c4cb,(uint)ppppppppppppuStack_15c);
LAB_00654386:
                                if (DAT_008016dc != 0) {
                                  thunk_FUN_005380e0();
                                }
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x561:
                          iVar30 = thunk_FUN_0064f040((int)asStack_16c);
                          if (iVar30 != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                         (uint)ppppppppppppuStack_160,
                                                         (uint *)appppppppppppuStack_34);
                              iVar30 = 0;
                              if (0 < iVar7) {
                                ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                                do {
                                  if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d) {
                                    if (DAT_0080c4cb != (uint *)0x0) {
                                      FUN_006b5570((byte *)DAT_0080c4cb);
                                    }
                                    DAT_0080c4cb = FUN_006b54f0((uint *)0x0,10,10);
                                    goto LAB_00654386;
                                  }
                                  iVar30 = iVar30 + 1;
                                  ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                                } while (iVar30 < iVar7);
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x562:
                          bVar28 = thunk_FUN_0064ef90((int)asStack_16c);
                          if (CONCAT31(extraout_var_10,bVar28) != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                         (uint)ppppppppppppuStack_160,
                                                         (uint *)appppppppppppuStack_34);
                              iVar30 = 0;
                              if (0 < iVar7) {
                                ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                                do {
                                  if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d) {
                                    if (DAT_0080c4c7 == (uint *)0x0) {
                                      DAT_0080c4c7 = FUN_006b54f0((uint *)0x0,10,10);
                                    }
                                    iVar7 = FUN_006b5aa0((int)DAT_0080c4c7,(char *)puStack_158);
                                    if (-1 < iVar7) {
                                      *(int *)((int)this_00 + (int)ppppppppppppuStack_15c * 4 + 0xde
                                              ) = iVar7;
                                    }
                                    break;
                                  }
                                  iVar30 = iVar30 + 1;
                                  ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                                } while (iVar30 < iVar7);
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x563:
                          iVar30 = thunk_FUN_0064f000((int)asStack_16c);
                          if (iVar30 != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                         (uint)ppppppppppppuStack_160,
                                                         (uint *)appppppppppppuStack_34);
                              iVar30 = 0;
                              if (0 < iVar7) {
                                ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                                do {
                                  if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d) {
                                    if (DAT_0080c4c7 != (uint *)0x0) {
                                      FUN_006c87c0((int)DAT_0080c4c7,(uint)ppppppppppppuStack_15c);
                                    }
                                    break;
                                  }
                                  iVar30 = iVar30 + 1;
                                  ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                                } while (iVar30 < iVar7);
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x564:
                          iVar30 = thunk_FUN_0064f040((int)asStack_16c);
                          if (iVar30 != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                         (uint)ppppppppppppuStack_160,
                                                         (uint *)appppppppppppuStack_34);
                              iVar30 = 0;
                              if (0 < iVar7) {
                                ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                                do {
                                  if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d) {
                                    if (DAT_0080c4c7 != (uint *)0x0) {
                                      FUN_006b5570((byte *)DAT_0080c4c7);
                                    }
                                    DAT_0080c4c7 = FUN_006b54f0((uint *)0x0,10,10);
                                    break;
                                  }
                                  iVar30 = iVar30 + 1;
                                  ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                                } while (iVar30 < iVar7);
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x565:
                        case 0x566:
                          iVar30 = thunk_FUN_0064f320((int)asStack_16c);
                          if (iVar30 != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if (((iVar30 != 8) ||
                                ((ppppppppppppuStack_15c != (uint ************)0x9 &&
                                 (ppppppppppppuStack_164 != (uint ************)0x9)))) &&
                               (ppppppppppppuStack_15c != (uint ************)0xff)) {
                              iVar30 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_15c,0,
                                                          (uint *)appppppppppppuStack_34);
                              if (iVar30 == 1) {
                                ppppppppppppuStack_8 = appppppppppppuStack_34[0];
                                ppppppppppppuVar23 =
                                     (uint ************)
                                     thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                        (uint)ppppppppppppuStack_160,
                                                        (uint *)appppppppppppuStack_34);
                                ppppppppppppuStack_10 = ppppppppppppuVar23;
                                if (0 < (int)ppppppppppppuVar23) {
                                  ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                  uStack_1a0 = CONCAT31(uStack_1a0._1_3_,iVar7 == 0x565);
                                  ppppppppppppuStack_c = ppppppppppppuVar23;
                                  do {
                                    ppppppppppppuStack_c = ppppppppppppuVar23;
                                    thunk_FUN_0056a8d0(&DAT_00807620,
                                                       CONCAT31((int3)((uint)ppppppppppppuVar23 >> 8
                                                                      ),*(undefined1 *)
                                                                         ppppppppppppuVar16),
                                                       (byte)ppppppppppppuStack_8,(char)uStack_1a0);
                                    ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                    ppppppppppppuVar23 =
                                         (uint ************)((int)ppppppppppppuStack_c + -1);
                                    ppppppppppppuStack_c = ppppppppppppuVar23;
                                  } while (ppppppppppppuVar23 != (uint ************)0x0);
                                }
                                pvVar13 = DAT_008016e4;
                                if ((DAT_008016e4 != (void *)0x0) &&
                                   (ppppppppppppuStack_10 != (uint ************)0x0)) {
                                  ppppppppppppuStack_8 =
                                       (uint ************)((int)DAT_008016e4 + 0x181);
                                  *(undefined4 *)((int)DAT_008016e4 + 0x28) = 5;
                                  ppppppppppppuStack_c = (uint ************)0x8;
                                  do {
                                    if (*ppppppppppppuStack_8 != (uint ***********)0x0) {
                                      FUN_006e6080(pvVar13,2,*ppppppppppppuStack_8,
                                                   (undefined4 *)((int)pvVar13 + 0x18));
                                    }
                                    ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                    ppppppppppppuStack_c =
                                         (uint ************)((int)ppppppppppppuStack_c + -1);
                                  } while (ppppppppppppuStack_c != (uint ************)0x0);
                                  ppppppppppppuStack_c = (uint ************)0x0;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                          }
                          break;
                        case 0x567:
                          iVar30 = thunk_FUN_0064f360((int)asStack_16c);
                          if (iVar30 != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              ppppppppppppuStack_10 =
                                   (uint ************)
                                   thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                      (uint)ppppppppppppuStack_160,
                                                      (uint *)appppppppppppuStack_34);
                              if (0 < (int)ppppppppppppuStack_10) {
                                ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                                ppppppppppppuStack_c = ppppppppppppuStack_10;
                                do {
                                  thunk_FUN_0056aa00(&DAT_00807620,*(byte *)ppppppppppppuVar23,
                                                     (char)ppppppppppppuStack_15c);
                                  ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                                  ppppppppppppuStack_c =
                                       (uint ************)((int)ppppppppppppuStack_c + -1);
                                } while (ppppppppppppuStack_c != (uint ************)0x0);
                              }
                              pvVar13 = DAT_008016e4;
                              if ((DAT_008016e4 != (void *)0x0) &&
                                 (ppppppppppppuStack_10 != (uint ************)0x0)) {
                                ppppppppppppuStack_8 =
                                     (uint ************)((int)DAT_008016e4 + 0x181);
                                *(undefined4 *)((int)DAT_008016e4 + 0x28) = 5;
                                ppppppppppppuStack_c = (uint ************)0x8;
                                do {
                                  if (*ppppppppppppuStack_8 != (uint ***********)0x0) {
                                    FUN_006e6080(pvVar13,2,*ppppppppppppuStack_8,
                                                 (undefined4 *)((int)pvVar13 + 0x18));
                                  }
                                  ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                  ppppppppppppuStack_c =
                                       (uint ************)((int)ppppppppppppuStack_c + -1);
                                } while (ppppppppppppuStack_c != (uint ************)0x0);
                                ppppppppppppuStack_c = (uint ************)0x0;
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x568:
                          iVar30 = thunk_FUN_0064f3b0((int)asStack_16c);
                          if (iVar30 != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                         (uint)ppppppppppppuStack_160,
                                                         (uint *)appppppppppppuStack_34);
                              iVar30 = 0;
                              if (0 < iVar7) {
                                ppppppppppppuVar23 = (uint ************)appppppppppppuStack_34;
                                do {
                                  if (*ppppppppppppuVar23 == (uint ***********)(uint)DAT_0080874d) {
                                    DAT_00808790 = 1;
                                    break;
                                  }
                                  iVar30 = iVar30 + 1;
                                  ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
                                } while (iVar30 < iVar7);
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x56a:
                          iVar30 = thunk_FUN_0064f3f0((int)asStack_16c);
                          if (iVar30 == 0) break;
                          thunk_FUN_0056abc0(&DAT_00807620,(char *)ppppppppppppuStack_164);
                          goto switchD_00652a7f_caseD_3;
                        case 0x578:
                          bVar28 = thunk_FUN_0064f430((int)asStack_16c);
                          if (CONCAT31(extraout_var_11,bVar28) != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              ppppppppppppuVar23 =
                                   (uint ************)
                                   thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                      (uint)ppppppppppppuStack_160,
                                                      (uint *)appppppppppppuStack_34);
                              if (0 < (int)ppppppppppppuVar23) {
                                ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                ppppppppppppuStack_c = ppppppppppppuVar23;
                                do {
                                  ppppppppppppuVar23 = ppppppppppppuStack_15c;
                                  if ((int)ppppppppppppuStack_15c < 0) {
                                    ppppppppppppuVar23 =
                                         (uint ************)(DAT_00808a90 >> 8 & 0xff);
                                  }
                                  thunk_FUN_004d86a0((uint)*ppppppppppppuVar16,
                                                     (int)ppppppppppppuVar23);
                                  ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                  ppppppppppppuStack_c =
                                       (uint ************)((int)ppppppppppppuStack_c + -1);
                                } while (ppppppppppppuStack_c != (uint ************)0x0);
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x579:
                          bVar28 = thunk_FUN_0064f470((int)asStack_16c);
                          if (CONCAT31(extraout_var_12,bVar28) != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              ppppppppppppuVar23 =
                                   (uint ************)
                                   thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                      (uint)ppppppppppppuStack_160,
                                                      (uint *)appppppppppppuStack_34);
                              if (0 < (int)ppppppppppppuVar23) {
                                ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                ppppppppppppuStack_c = ppppppppppppuVar23;
                                do {
                                  ppppppppppppuVar23 = ppppppppppppuStack_15c;
                                  if ((int)ppppppppppppuStack_15c < 0) {
                                    ppppppppppppuVar23 =
                                         (uint ************)(DAT_00808a90 >> 0x10 & 0xff);
                                  }
                                  puVar5 = puStack_158;
                                  if ((int)puStack_158 < 0) {
                                    puVar5 = (uint *)(DAT_00808a90 >> 0x18);
                                  }
                                  thunk_FUN_004e51b0((int *)*ppppppppppppuVar16,
                                                     (uint *)ppppppppppppuVar23,puVar5);
                                  ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                  ppppppppppppuStack_c =
                                       (uint ************)((int)ppppppppppppuStack_c + -1);
                                } while (ppppppppppppuStack_c != (uint ************)0x0);
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x57a:
                          bVar28 = thunk_FUN_0064f4c0((int)asStack_16c);
                          if (CONCAT31(extraout_var_13,bVar28) == 0) break;
                          ppppppppppppuVar23 = ppppppppppppuStack_164;
                          if ((int)ppppppppppppuStack_164 < 0) {
                            ppppppppppppuVar23 = (uint ************)(DAT_00808a90 & 0xff);
                          }
                          thunk_FUN_004d8760((int)ppppppppppppuVar23);
                          goto switchD_00652a7f_caseD_3;
                        case 0x57b:
                          iVar30 = thunk_FUN_0064f500(asStack_16c);
                          if (iVar30 != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              ppppppppppppuStack_8 = ppppppppppppuStack_15c;
                              if ((int)ppppppppppppuStack_15c < 0) {
                                ppppppppppppuStack_8 = (uint ************)(uint)DAT_00808a9b;
                              }
                              ppppppppppppuVar23 =
                                   (uint ************)
                                   thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                      (uint)ppppppppppppuStack_160,
                                                      (uint *)appppppppppppuStack_34);
                              if (0 < (int)ppppppppppppuVar23) {
                                ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                ppppppppppppuStack_c = ppppppppppppuVar23;
                                do {
                                  pppppppppppuVar11 = *ppppppppppppuVar16;
                                  cVar3 = (&DAT_008087e8)[(int)pppppppppppuVar11 * 0x51];
                                  uVar21 = (undefined2)((uint)pbStack_150 >> 0x10);
                                  if (cVar3 == '\x01') {
                                    if ((int)ppppppppppppuStack_8 < 3) {
                                      if (ppppppppppppuStack_8 == (uint ************)0x2) {
                                        thunk_FUN_0064d270(CONCAT22(uVar21,*(undefined2 *)
                                                                            ppppppppppppuVar16),0xc,
                                                           (int)puStack_158,(int)pbStack_154,
                                                           pbStack_150,0xfffe,0xffffffff,(char *)0x0
                                                           ,100,1,0,0);
                                        thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >>
                                                                           0x10),
                                                                    *(undefined2 *)
                                                                     ppppppppppppuVar16),1,
                                                           (int)puStack_158,(int)pbStack_154,
                                                           pbStack_150,0xfffe,0xffffffff,(char *)0x0
                                                           ,100,1,0,0);
                                        thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >>
                                                                           0x10),
                                                                    *(undefined2 *)
                                                                     ppppppppppppuVar16),1,
                                                           (int)puStack_158,(int)pbStack_154,
                                                           pbStack_150,0xfffe,0xffffffff,(char *)0x0
                                                           ,100,1,0,0);
                                        thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >>
                                                                           0x10),
                                                                    *(undefined2 *)
                                                                     ppppppppppppuVar16),2,
                                                           (int)puStack_158,(int)pbStack_154,
                                                           pbStack_150,0xfffe,0xffffffff,(char *)0x0
                                                           ,100,1,0,0);
                                        thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >>
                                                                           0x10),
                                                                    *(undefined2 *)
                                                                     ppppppppppppuVar16),3,
                                                           (int)puStack_158,(int)pbStack_154,
                                                           pbStack_150,0xfffe,0xffffffff,(char *)0x0
                                                           ,100,1,0,0);
                                        thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >>
                                                                           0x10),
                                                                    *(undefined2 *)
                                                                     ppppppppppppuVar16),6,
                                                           (int)puStack_158,(int)pbStack_154,
                                                           pbStack_150,0xfffe,0xffffffff,(char *)0x0
                                                           ,100,1,0,0);
                                      }
                                      else if (ppppppppppppuStack_8 == (uint ************)0x0) {
                                        thunk_FUN_0064d270(CONCAT22(uVar21,*(undefined2 *)
                                                                            ppppppppppppuVar16),0xc,
                                                           (int)puStack_158,(int)pbStack_154,
                                                           pbStack_150,0xfffe,0xffffffff,(char *)0x0
                                                           ,100,1,0,0);
                                      }
                                      else {
                                        if (ppppppppppppuStack_8 != (uint ************)0x1)
                                        goto LAB_00655324;
                                        thunk_FUN_0064d270(CONCAT22(uVar21,*(undefined2 *)
                                                                            ppppppppppppuVar16),0xc,
                                                           (int)puStack_158,(int)pbStack_154,
                                                           pbStack_150,0xfffe,0xffffffff,(char *)0x0
                                                           ,100,1,0,0);
                                        thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >>
                                                                           0x10),
                                                                    *(undefined2 *)
                                                                     ppppppppppppuVar16),1,
                                                           (int)puStack_158,(int)pbStack_154,
                                                           pbStack_150,0xfffe,0xffffffff,(char *)0x0
                                                           ,100,1,0,0);
                                        thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >>
                                                                           0x10),
                                                                    *(undefined2 *)
                                                                     ppppppppppppuVar16),1,
                                                           (int)puStack_158,(int)pbStack_154,
                                                           pbStack_150,0xfffe,0xffffffff,(char *)0x0
                                                           ,100,1,0,0);
                                        thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >>
                                                                           0x10),
                                                                    *(undefined2 *)
                                                                     ppppppppppppuVar16),2,
                                                           (int)puStack_158,(int)pbStack_154,
                                                           pbStack_150,0xfffe,0xffffffff,(char *)0x0
                                                           ,100,1,0,0);
                                      }
                                    }
                                    else {
joined_r0x00655322:
                                      if (ppppppppppppuStack_8 != (uint ************)0xff) {
LAB_00655324:
                                        uVar25 = uStack_14;
                                        pcVar22 = thunk_FUN_00674af0(iVar7);
                                        thunk_FUN_0064d0e0(this_00,-0x7d,pcVar22,uVar25,
                                                           (int)pppppppppppuVar11);
                                      }
                                    }
                                  }
                                  else if (cVar3 == '\x02') {
                                    if (2 < (int)ppppppppppppuStack_8) goto joined_r0x00655322;
                                    if (ppppppppppppuStack_8 == (uint ************)0x2) {
                                      thunk_FUN_0064d270(CONCAT22(uVar21,*(undefined2 *)
                                                                          ppppppppppppuVar16),0x18,
                                                         (int)puStack_158,(int)pbStack_154,
                                                         pbStack_150,0xfffe,0xffffffff,(char *)0x0,
                                                         100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0xd,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0xd,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0xe,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0xf,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0x12,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                    }
                                    else if (ppppppppppppuStack_8 == (uint ************)0x0) {
                                      thunk_FUN_0064d270(CONCAT22(uVar21,*(undefined2 *)
                                                                          ppppppppppppuVar16),0x18,
                                                         (int)puStack_158,(int)pbStack_154,
                                                         pbStack_150,0xfffe,0xffffffff,(char *)0x0,
                                                         100,1,0,0);
                                    }
                                    else {
                                      if (ppppppppppppuStack_8 != (uint ************)0x1)
                                      goto LAB_00655324;
                                      thunk_FUN_0064d270(CONCAT22(uVar21,*(undefined2 *)
                                                                          ppppppppppppuVar16),0x18,
                                                         (int)puStack_158,(int)pbStack_154,
                                                         pbStack_150,0xfffe,0xffffffff,(char *)0x0,
                                                         100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0xd,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0xd,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0xe,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                    }
                                  }
                                  else if (cVar3 == '\x03') {
                                    if (2 < (int)ppppppppppppuStack_8) goto joined_r0x00655322;
                                    if (ppppppppppppuStack_8 == (uint ************)0x2) {
                                      thunk_FUN_0064d270(CONCAT22(uVar21,*(undefined2 *)
                                                                          ppppppppppppuVar16),0x19,
                                                         (int)puStack_158,(int)pbStack_154,
                                                         pbStack_150,0xfffe,0xffffffff,(char *)0x0,
                                                         100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0x19,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0x19,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0x1e,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0x1e,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0x1e,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0x20,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0x22,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                    }
                                    else if (ppppppppppppuStack_8 == (uint ************)0x0) {
                                      thunk_FUN_0064d270(CONCAT22(uVar21,*(undefined2 *)
                                                                          ppppppppppppuVar16),0x19,
                                                         (int)puStack_158,(int)pbStack_154,
                                                         pbStack_150,0xfffe,0xffffffff,(char *)0x0,
                                                         100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0x19,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0x19,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                    }
                                    else {
                                      if (ppppppppppppuStack_8 != (uint ************)0x1)
                                      goto LAB_00655324;
                                      thunk_FUN_0064d270(CONCAT22(uVar21,*(undefined2 *)
                                                                          ppppppppppppuVar16),0x19,
                                                         (int)puStack_158,(int)pbStack_154,
                                                         pbStack_150,0xfffe,0xffffffff,(char *)0x0,
                                                         100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0x19,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0x19,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0x1e,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0x1e,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                      thunk_FUN_0064d270(CONCAT22((short)((uint)pbStack_150 >> 0x10)
                                                                  ,*(undefined2 *)ppppppppppppuVar16
                                                                 ),0x1e,(int)puStack_158,
                                                         (int)pbStack_154,pbStack_150,0xfffe,
                                                         0xffffffff,(char *)0x0,100,1,0,0);
                                    }
                                  }
                                  ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                  ppppppppppppuStack_c =
                                       (uint ************)((int)ppppppppppppuStack_c + -1);
                                  uVar25 = uStack_14;
                                } while (ppppppppppppuStack_c != (uint ************)0x0);
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x582:
                          iVar30 = thunk_FUN_0064f5a0((int)asStack_16c);
                          if (iVar30 != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              ppppppppppppuVar23 =
                                   (uint ************)
                                   thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                      (uint)ppppppppppppuStack_160,
                                                      (uint *)appppppppppppuStack_34);
                              if (0 < (int)ppppppppppppuVar23) {
                                ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                ppppppppppppuStack_c = ppppppppppppuVar23;
                                uVar6 = extraout_ECX;
                                uVar17 = extraout_EDX;
                                do {
                                  switch(ppppppppppppuStack_15c) {
                                  case (uint ************)0xdc:
                                    if (puStack_158 == (uint *)0x0) {
                                      thunk_FUN_004d88b0(*(char *)ppppppppppppuVar16,pbStack_154);
                                    }
                                    else if ((int)puStack_158 < 1) {
                                      thunk_FUN_004d8800(*(char *)ppppppppppppuVar16,
                                                         (int)pbStack_154);
                                    }
                                    else {
                                      thunk_FUN_004d87b0(*(char *)ppppppppppppuVar16,
                                                         (int)pbStack_154);
                                    }
                                    break;
                                  case (uint ************)0xdd:
                                    if (puStack_158 == (uint *)0x0) {
                                      thunk_FUN_004d89f0(*(char *)ppppppppppppuVar16,pbStack_154);
                                    }
                                    else if ((int)puStack_158 < 1) {
                                      thunk_FUN_004d8940(*(char *)ppppppppppppuVar16,
                                                         (int)pbStack_154);
                                    }
                                    else {
                                      thunk_FUN_004d88f0(*(char *)ppppppppppppuVar16,
                                                         (int)pbStack_154);
                                    }
                                    break;
                                  case (uint ************)0xde:
                                    if (puStack_158 == (uint *)0x0) {
                                      thunk_FUN_004d8b30(*(char *)ppppppppppppuVar16,pbStack_154);
                                    }
                                    else if ((int)puStack_158 < 1) {
                                      thunk_FUN_004d8a80(*(char *)ppppppppppppuVar16,
                                                         (int)pbStack_154);
                                    }
                                    else {
                                      thunk_FUN_004d8a30(*(char *)ppppppppppppuVar16,
                                                         (int)pbStack_154);
                                    }
                                    break;
                                  case (uint ************)0xdf:
                                    if (puStack_158 == (uint *)0x0) {
                                      thunk_FUN_004b7140(CONCAT31((int3)((uint)uVar17 >> 8),
                                                                  *(char *)ppppppppppppuVar16),
                                                         (int)pbStack_154);
                                    }
                                    else if ((int)puStack_158 < 1) {
                                      thunk_FUN_004b70d0(CONCAT31((int3)((uint)puStack_158 >> 8),
                                                                  *(char *)ppppppppppppuVar16),
                                                         (int)pbStack_154);
                                    }
                                    else {
                                      thunk_FUN_004b7080(CONCAT31((int3)((uint)uVar6 >> 8),
                                                                  *(char *)ppppppppppppuVar16),
                                                         (int)pbStack_154);
                                    }
                                    break;
                                  case (uint ************)0xe2:
                                    if (puStack_158 == (uint *)0x0) {
                                      thunk_FUN_004e4440((int)*ppppppppppppuVar16,pbStack_154);
                                    }
                                    else if ((int)puStack_158 < 1) {
                                      thunk_FUN_004e43c0((int)*ppppppppppppuVar16,(int)pbStack_154);
                                    }
                                    else {
                                      thunk_FUN_004e4380((int)*ppppppppppppuVar16,(int)pbStack_154);
                                    }
                                    break;
                                  case (uint ************)0xe3:
                                    if (puStack_158 == (uint *)0x0) {
                                      thunk_FUN_004e41f0((int)*ppppppppppppuVar16,pbStack_154);
                                    }
                                    else if ((int)puStack_158 < 1) {
                                      thunk_FUN_004e4330((int)*ppppppppppppuVar16,(int)pbStack_154);
                                    }
                                    else {
                                      thunk_FUN_004e4270((int)*ppppppppppppuVar16,(int)pbStack_154);
                                    }
                                  }
                                  if (*ppppppppppppuVar16 == (uint ***********)(uint)DAT_0080874d) {
                                    thunk_FUN_004d8b70((char)*ppppppppppppuVar16);
                                  }
                                  thunk_FUN_004d78e0(*(char *)ppppppppppppuVar16);
                                  ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                  ppppppppppppuStack_c =
                                       (uint ************)((int)ppppppppppppuStack_c + -1);
                                  uVar6 = extraout_ECX_00;
                                  uVar17 = extraout_EDX_00;
                                } while (ppppppppppppuStack_c != (uint ************)0x0);
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x583:
                          iVar30 = thunk_FUN_0064f5e0((int)asStack_16c);
                          if (iVar30 == 0) break;
                          if (ppppppppppppuStack_164 == (uint ************)0x0) {
                            thunk_FUN_004d8320(ppppppppppppuStack_160);
                            goto switchD_00652a7f_caseD_3;
                          }
                          if ((int)ppppppppppppuStack_164 < 1) {
                            ppppppppppppuStack_c = ppppppppppppuStack_160;
                            iVar7 = thunk_FUN_004d82b0(0);
                            if ((int)ppppppppppppuStack_c < iVar7) {
                              iVar7 = thunk_FUN_004d82b0(0);
                              pcVar22 = (char *)(iVar7 - (int)ppppppppppppuStack_c);
                              goto LAB_0065565b;
                            }
                          }
                          else {
                            ppppppppppppuStack_c = ppppppppppppuStack_160;
                            iVar7 = thunk_FUN_004d82b0(0);
                            pcVar22 = (char *)(iVar7 + (int)ppppppppppppuStack_c);
LAB_0065565b:
                            thunk_FUN_004d8320(pcVar22);
                          }
                          thunk_FUN_004d82b0(0);
                          goto switchD_00652a7f_caseD_3;
                        case 0x584:
                          iVar30 = thunk_FUN_0064f620(asStack_16c);
                          if (iVar30 == 0) break;
                          thunk_FUN_0064e5c0((char)ppppppppppppuStack_164,ppppppppppppuStack_160,
                                             ppppppppppppuStack_15c,puStack_158,pbStack_154);
                          goto switchD_00652a7f_caseD_3;
                        case 0x585:
                          iVar30 = thunk_FUN_0064f6e0();
                          if (iVar30 == 0) break;
                          DAT_00808794 = thunk_FUN_0056f930(0x807620);
                          goto switchD_00652a7f_caseD_3;
                        case 0x58c:
                          iVar30 = thunk_FUN_0064f700(asStack_16c);
                          if (iVar30 == 0) break;
                          piVar8 = (int *)0x0;
                          sVar15 = (short)ppppppppppppuStack_160;
                          sVar14 = (short)ppppppppppppuStack_15c;
                          sVar4 = (short)puStack_158;
                          if (pbStack_154 == (byte *)0x0) {
                            if ((((sVar15 < 0) || (DAT_007fb240 <= sVar15)) ||
                                ((sVar14 < 0 || ((DAT_007fb242 <= sVar14 || (sVar4 < 0)))))) ||
                               (DAT_007fb244 <= sVar4)) {
LAB_00655871:
                              piVar8 = (int *)0x0;
                            }
                            else {
                              piVar8 = *(int **)(DAT_007fb248 +
                                                ((int)sVar4 * (int)DAT_007fb246 +
                                                 (int)sVar14 * (int)DAT_007fb240 + (int)sVar15) * 8)
                              ;
                            }
                          }
                          else if (pbStack_154 == (byte *)0x1) {
                            if (((((sVar15 < 0) || (DAT_007fb240 <= sVar15)) || (sVar14 < 0)) ||
                                ((DAT_007fb242 <= sVar14 || (sVar4 < 0)))) ||
                               (DAT_007fb244 <= sVar4)) goto LAB_00655871;
                            piVar8 = *(int **)(DAT_007fb248 + 4 +
                                              ((int)sVar4 * (int)DAT_007fb246 +
                                               (int)sVar14 * (int)DAT_007fb240 + (int)sVar15) * 8);
                          }
                          else if (pbStack_154 == (byte *)0x2) {
                            iVar7 = thunk_FUN_006785a0((byte *)0x0,-1,sVar15,sVar14,sVar4,1,1,1,
                                                       &LAB_00404c73,0);
                            if ((iVar7 == -1) && (DAT_00811984 != (int *)0x0)) {
                              piVar8 = DAT_00811984;
                            }
                          }
                          if ((piVar8 != (int *)0x0) &&
                             (ppppppppppppuStack_164 != (uint ************)0x0)) {
                            (**(code **)(*piVar8 + 0x70))(ppppppppppppuStack_164);
                          }
                          goto switchD_00652a7f_caseD_3;
                        case 0x58d:
                          iVar30 = thunk_FUN_0064f780(asStack_16c);
                          if (iVar30 != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              iVar30 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                          (uint)ppppppppppppuStack_160,
                                                          (uint *)appppppppppppuStack_34);
                              if (0 < iVar30) {
                                ppppppppppppuStack_10 = (uint ************)appppppppppppuStack_34;
                                ppppppppppppuStack_8 = (uint ************)iVar30;
                                do {
                                  ppppppppppppuStack_c = ppppppppppppuStack_144;
                                  uVar29 = uVar25;
                                  if ((int)ppppppppppppuStack_144 < 0) {
                                    ppppppppppppuStack_c = (uint ************)0xfffe;
LAB_00655972:
                                    iVar30 = thunk_FUN_0064d270(CONCAT22((short)((uint)puStack_158
                                                                                >> 0x10),
                                                                         *(undefined2 *)
                                                                          ppppppppppppuStack_10),
                                                                (short)ppppppppppppuStack_15c,
                                                                (int)puStack_158,(int)pbStack_154,
                                                                pbStack_150,ppppppppppppuStack_c,
                                                                (uint)pcStack_14c,pcStack_148,
                                                                uStack_140,iStack_13c,
                                                                (int)pcStack_138,iStack_134);
                                    if (iVar30 != 0) {
LAB_006559d0:
                                      pppppppppppuVar11 = *ppppppppppppuStack_10;
LAB_006559d6:
                                      pcVar22 = thunk_FUN_00674af0(iVar7);
                                      iVar30 = -0xab;
                                      goto LAB_006559e3;
                                    }
                                  }
                                  else {
                                    if ((int)ppppppppppppuStack_144 < 1) goto LAB_00655972;
                                    iVar30 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_144 >> 8),
                                                  *(char *)ppppppppppppuStack_10),
                                                  (uint)ppppppppppppuStack_144);
                                    if (iVar30 != 0) {
                                      iVar30 = thunk_FUN_00423300(iVar30);
                                      if (iVar30 != 0) {
                                        if (((int)ppppppppppppuStack_15c < 0x32) ||
                                           (0x73 < (int)ppppppppppppuStack_15c)) {
                                          bVar28 = false;
                                        }
                                        else {
                                          bVar28 = true;
                                        }
                                        if (((!bVar28) || (*(short *)(iVar30 + 0x7b) == 1)) &&
                                           (*(short *)(iVar30 + 0x7b) != -0x8000))
                                        goto LAB_00655972;
                                        goto LAB_006559d0;
                                      }
                                      pppppppppppuVar11 = *ppppppppppppuStack_10;
                                      goto LAB_006559d6;
                                    }
                                    pppppppppppuVar11 = *ppppppppppppuStack_10;
                                    pcVar22 = &DAT_008016a0;
                                    iVar30 = -0xaa;
LAB_006559e3:
                                    thunk_FUN_0064d0e0(this_00,iVar30,pcVar22,uVar29,
                                                       (int)pppppppppppuVar11);
                                  }
                                  ppppppppppppuStack_10 = ppppppppppppuStack_10 + 1;
                                  ppppppppppppuStack_8 =
                                       (uint ************)((int)ppppppppppppuStack_8 + -1);
                                } while (ppppppppppppuStack_8 != (uint ************)0x0);
                                ppppppppppppuStack_8 = (uint ************)0x0;
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x58e:
                          iVar30 = thunk_FUN_0064f900(asStack_16c);
                          if (iVar30 != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                         (uint)ppppppppppppuStack_160,
                                                         (uint *)appppppppppppuStack_34);
                              if (0 < iVar7) {
                                ppppppppppppuStack_10 = (uint ************)appppppppppppuStack_34;
                                ppppppppppppuStack_c = (uint ************)iVar7;
                                do {
                                  ppppppppppppuStack_8 =
                                       (uint ************)thunk_FUN_00676170(*ppppppppppppuStack_10)
                                  ;
                                  if (ppppppppppppuStack_8 != (uint ************)0x0) {
                                    pppppppppppuVar24 = (uint ***********)0x0;
                                    pppppppppppuVar11 = ppppppppppppuStack_8[3];
                                    pppppppppppuVar18 = extraout_EDX_01;
                                    if (0 < (int)pppppppppppuVar11) {
                                      do {
                                        if (pppppppppppuVar24 < pppppppppppuVar11) {
                                          pppppppppppuVar18 = ppppppppppppuStack_8[7];
                                          pppppppppppuVar11 =
                                               (uint ***********)
                                               ((int)ppppppppppppuStack_8[2] *
                                                (int)pppppppppppuVar24 + (int)pppppppppppuVar18);
                                        }
                                        else {
                                          pppppppppppuVar11 = (uint ***********)0x0;
                                        }
                                        thunk_FUN_00449b60((undefined4 *)
                                                           CONCAT31((int3)((uint)
                                                  ppppppppppppuStack_15c >> 8),
                                                  *(char *)ppppppppppppuStack_10),
                                                  CONCAT22((short)((uint)pppppppppppuVar18 >> 0x10),
                                                           *(ushort *)pppppppppppuVar11),1,
                                                  ppppppppppppuStack_15c);
                                        pppppppppppuVar24 =
                                             (uint ***********)((int)pppppppppppuVar24 + 1);
                                        pppppppppppuVar11 = ppppppppppppuStack_8[3];
                                        pppppppppppuVar18 = (uint ***********)ppppppppppppuStack_8;
                                      } while ((int)pppppppppppuVar24 < (int)pppppppppppuVar11);
                                    }
                                    FUN_006ae110((byte *)ppppppppppppuStack_8);
                                  }
                                  ppppppppppppuStack_10 = ppppppppppppuStack_10 + 1;
                                  ppppppppppppuStack_c =
                                       (uint ************)((int)ppppppppppppuStack_c + -1);
                                } while (ppppppppppppuStack_c != (uint ************)0x0);
                                ppppppppppppuStack_c = (uint ************)0x0;
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x58f:
                          iVar30 = thunk_FUN_0064f950(asStack_16c);
                          if (iVar30 != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              iVar7 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                         (uint)ppppppppppppuStack_160,
                                                         (uint *)appppppppppppuStack_34);
                              if (0 < iVar7) {
                                ppppppppppppuStack_10 = (uint ************)appppppppppppuStack_34;
                                ppppppppppppuStack_c = (uint ************)iVar7;
                                do {
                                  if ((char)pbStack_154 == '\b') {
                                    cVar3 = *(char *)ppppppppppppuStack_10;
                                  }
                                  else if (((char)pbStack_154 < '\0') ||
                                          (cVar3 = (char)pbStack_154, '\b' < (char)pbStack_154)) {
                                    cVar3 = -1;
                                  }
                                  puVar5 = thunk_FUN_006775e0(*ppppppppppppuStack_10,
                                                              (uint)puStack_158,
                                                              (uint)ppppppppppppuStack_15c,
                                                              pbStack_150,cVar3,(short)pcStack_14c,
                                                              (short)pcStack_148,
                                                              (short)ppppppppppppuStack_144,
                                                              (short)uStack_140,(short)iStack_13c,
                                                              (short)pcStack_138,1);
                                  if (puVar5 != (uint *)0x0) {
                                    uVar25 = 0;
                                    if (0 < (int)puVar5[3]) {
                                      bVar28 = puVar5[3] != 0;
                                      uVar6 = extraout_EDX_02;
                                      do {
                                        if (bVar28) {
                                          puVar12 = (undefined2 *)(puVar5[2] * uVar25 + puVar5[7]);
                                        }
                                        else {
                                          puVar12 = (undefined2 *)0x0;
                                        }
                                        thunk_FUN_00449b60((undefined4 *)
                                                           CONCAT31((int3)((uint)iStack_134 >> 8),
                                                                    *(char *)ppppppppppppuStack_10),
                                                           CONCAT22((short)((uint)uVar6 >> 0x10),
                                                                    *puVar12),1,iStack_134);
                                        uVar25 = uVar25 + 1;
                                        bVar28 = uVar25 < puVar5[3];
                                        uVar6 = extraout_EDX_03;
                                      } while ((int)uVar25 < (int)puVar5[3]);
                                    }
                                    FUN_006ae110((byte *)puVar5);
                                  }
                                  ppppppppppppuStack_10 = ppppppppppppuStack_10 + 1;
                                  ppppppppppppuStack_c =
                                       (uint ************)((int)ppppppppppppuStack_c + -1);
                                } while (ppppppppppppuStack_c != (uint ************)0x0);
                                ppppppppppppuStack_c = (uint ************)0x0;
                                uVar25 = uStack_14;
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x590:
                          iVar30 = thunk_FUN_0064fb00(asStack_16c);
                          if (iVar30 != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              iVar30 = thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                          (uint)ppppppppppppuStack_160,
                                                          (uint *)appppppppppppuStack_34);
                              if (0 < iVar30) {
                                ppppppppppppuStack_8 = (uint ************)appppppppppppuStack_34;
                                ppppppppppppuStack_c = (uint ************)iVar30;
                                do {
                                  iVar30 = thunk_FUN_0064d890(CONCAT22((short)((uint)puStack_158 >>
                                                                              0x10),
                                                                       *(ushort *)
                                                                        ppppppppppppuStack_8),
                                                              (short)ppppppppppppuStack_15c,
                                                              (int)puStack_158,(int)pbStack_154,
                                                              pbStack_150,pcStack_14c,pcStack_148,
                                                              (int)ppppppppppppuStack_144);
                                  if (iVar30 != 0) {
                                    pppppppppppuVar11 = *ppppppppppppuStack_8;
                                    uVar29 = uVar25;
                                    pcVar22 = thunk_FUN_00674af0(iVar7);
                                    thunk_FUN_0064d0e0(this_00,-0xab,pcVar22,uVar29,
                                                       (int)pppppppppppuVar11);
                                  }
                                  ppppppppppppuStack_8 = ppppppppppppuStack_8 + 1;
                                  ppppppppppppuStack_c =
                                       (uint ************)((int)ppppppppppppuStack_c + -1);
                                } while (ppppppppppppuStack_c != (uint ************)0x0);
                                ppppppppppppuStack_c = (uint ************)0x0;
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x591:
                          iVar30 = thunk_FUN_0064fb80(asStack_16c);
                          if (iVar30 != 0) {
                            iVar30 = (**(code **)(*this_00 + 0x18))();
                            if ((iVar30 != 8) || (ppppppppppppuStack_164 != (uint ************)0x9))
                            {
                              ppppppppppppuVar23 =
                                   (uint ************)
                                   thunk_FUN_00668f50(this_00,(char *)ppppppppppppuStack_164,
                                                      (uint)ppppppppppppuStack_160,
                                                      (uint *)appppppppppppuStack_34);
                              if (0 < (int)ppppppppppppuVar23) {
                                ppppppppppppuVar16 = (uint ************)appppppppppppuStack_34;
                                ppppppppppppuStack_c = ppppppppppppuVar23;
                                do {
                                  DAT_008118fc = 0;
                                  thunk_FUN_00677be0(*(short *)ppppppppppppuVar16,
                                                     (short)ppppppppppppuStack_15c,
                                                     (byte *)puStack_158,(short)pbStack_154,
                                                     (short)pbStack_150,(short)pcStack_14c,
                                                     (short)pcStack_148,
                                                     (short)ppppppppppppuStack_144,(short)uStack_140
                                                     ,&LAB_004050a1,&iStack_13c);
                                  ppppppppppppuVar16 = ppppppppppppuVar16 + 1;
                                  ppppppppppppuStack_c =
                                       (uint ************)((int)ppppppppppppuStack_c + -1);
                                } while (ppppppppppppuStack_c != (uint ************)0x0);
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                          }
                          break;
                        case 0x592:
                          iVar30 = thunk_FUN_0064fce0(asStack_16c);
                          if (iVar30 == 0) break;
                          iVar30 = thunk_FUN_0064db00((short)ppppppppppppuStack_164,
                                                      (short)ppppppppppppuStack_160,
                                                      (int)ppppppppppppuStack_15c,(int)puStack_158,
                                                      pbStack_154,(char *)pbStack_150,pcStack_14c,
                                                      pcStack_148);
LAB_00655f44:
                          if (iVar30 != 0) {
LAB_00655f4c:
                            iVar30 = -1;
                            uVar29 = uVar25;
                            pcVar22 = thunk_FUN_00674af0(iVar7);
                            thunk_FUN_0064d0e0(this_00,-0xab,pcVar22,uVar29,iVar30);
                          }
                          goto switchD_00652a7f_caseD_3;
                        }
LAB_00652a99:
                        iVar30 = -1;
                        uVar29 = uVar25;
                        pcVar22 = thunk_FUN_00674af0(iVar7);
                        thunk_FUN_0064d0e0(this_00,-0x7d,pcVar22,uVar29,iVar30);
switchD_00652a7f_caseD_3:
                        ppppppppppppuVar23 = (uint ************)((int)ppppppppppppuStack_170 + 1);
LAB_00659a80:
                        ppppppppppppuStack_170 = ppppppppppppuVar23;
                        iVar7 = *(int *)(pcStack_178 + 0xf);
                        ppppppppppppuVar23 = *(uint *************)(iVar7 + 0xc);
                      } while ((int)ppppppppppppuStack_170 < (int)ppppppppppppuVar23);
                    }
                  }
                  goto LAB_00659aae;
                }
                iVar30 = -1;
                piVar8 = (int *)thunk_FUN_00674af0(iVar7);
                iVar7 = -0x7d;
              }
              thunk_FUN_0064d0e0(this_00,iVar7,piVar8,uVar29,iVar30);
              *pcVar22 = '\x01';
              pcVar22[0xb] = '\0';
              pcVar22[0xc] = '\0';
              pcVar22[0xd] = '\0';
              pcVar22[0xe] = '\0';
            }
          }
          else if (*(int *)(pcVar22 + 0xb) != 0) {
            if (*(int *)(pcVar22 + 0xb) == 1) {
              *pcVar22 = '\0';
            }
            *(int *)(pcVar22 + 0xb) = *(int *)(pcVar22 + 0xb) + -1;
          }
LAB_00659aae:
          iVar7 = *(int *)((int)this_00 + 0x4ee);
          uStack_14 = uVar25 + 1;
          bVar28 = uStack_14 < *(uint *)(iVar7 + 0xc);
        } while ((int)uStack_14 < (int)*(uint *)(iVar7 + 0xc));
      }
      iVar2 = iStack_19c;
      iVar7 = *(int *)((int)this_00 + 0x4e2);
      iVar30 = *(int *)(iVar7 + 8);
      while (iVar2 < iVar30) {
        FUN_006b7830(iVar7,iVar30 - 1);
        iVar7 = *(int *)((int)this_00 + 0x4e2);
        iVar30 = *(int *)(iVar7 + 8);
      }
      if (puStack_194 == (uint *)0x456) {
        *(int *)((int)this_00 + 0xd6) = *(int *)((int)this_00 + 0xd6) + 1;
      }
      DAT_00858df8 = ppuStack_284;
      return (uint *)ppuStack_284;
    }
    DAT_00858df8 = ppuStack_284;
    if (pbStack_180 != (byte *)0x0) {
      FUN_006ae110(pbStack_180);
    }
    pbStack_180 = (byte *)0x0;
    puVar5 = (uint *)thunk_FUN_0064d0e0(piStack_188,iVar7,&DAT_008016a0,uStack_14,-1);
  }
  return puVar5;
code_r0x00653bbb:
  iVar30 = iVar30 + 1;
  ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
  if ((int)ppppppppppppuStack_10 <= iVar30) goto switchD_00652a7f_caseD_3;
  goto LAB_00653bb7;
code_r0x00654366:
  iVar30 = iVar30 + 1;
  ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
  if (iVar7 <= iVar30) goto switchD_00652a7f_caseD_3;
  goto LAB_00654362;
code_r0x006540bd:
  iVar30 = iVar30 + 1;
  ppppppppppppuVar23 = ppppppppppppuVar23 + 1;
  if (iVar7 <= iVar30) goto switchD_00652a7f_caseD_3;
  goto LAB_006540b9;
}

