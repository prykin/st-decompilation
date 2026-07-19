
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [ST_RECOVERY:ai_event_get_message_v1]
   Source: E:\__titans\ai\ai_event.cpp
   Handles an STMessage for AiEventClassTy. Maps the external message ID to an internal AI event
   trigger, finds matching event records, evaluates their conditions, and interprets their action
   lists. */

void __thiscall AiEventClassTy::GetMessage(AiEventClassTy *this,STMessage *message)

{
  byte bVar1;
  int iVar2;
  AiEventClassTy *this_00;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  short *psVar8;
  undefined1 *puVar9;
  AiFltClassTy *pAVar10;
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
  uint ******ppppppuVar11;
  uint *******pppppppuVar12;
  uint *puVar13;
  undefined2 *puVar14;
  AiPlrClassTy *this_01;
  undefined3 extraout_var_14;
  void *pvVar15;
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
  short sVar16;
  CPanelTy *pCVar17;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  short sVar18;
  undefined2 uVar22;
  undefined4 extraout_EDX;
  undefined4 uVar19;
  undefined4 extraout_EDX_00;
  uint *******extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  ushort *puVar20;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  uint uVar21;
  char *pcVar23;
  uint *******pppppppuVar24;
  int *piVar25;
  uint ******ppppppuVar26;
  uint uVar27;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar28;
  uint **ppuVar29;
  bool bVar30;
  uint uVar31;
  int iVar32;
  byte local_484 [256];
  byte local_384 [256];
  InternalExceptionFrame local_284;
  uint local_240 [2];
  undefined1 local_237;
  uint **local_236;
  uint *local_20c;
  undefined2 local_208;
  undefined2 local_206;
  undefined4 local_204;
  undefined2 local_200;
  int local_1fe;
  undefined2 local_1f6;
  undefined2 local_1f4;
  undefined2 local_1f2;
  undefined1 local_1f0;
  char local_1ef [15];
  uint local_1e0;
  undefined1 local_1ce;
  undefined4 local_1c0 [4];
  int local_1b0;
  undefined4 local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  uint ******local_190;
  AiFltClassTy *local_18c;
  AiEventClassTy *local_188;
  uint *local_184;
  byte *local_180;
  void *local_17c;
  char *local_178;
  int local_174;
  AiFltClassTy *local_170;
  short local_16c [4];
  AiFltClassTy *local_164;
  AiFltClassTy *local_160;
  uint ******local_15c;
  uint *local_158;
  byte *local_154;
  byte *local_150;
  char *local_14c;
  char *local_148;
  AiFltClassTy *local_144;
  uint local_140;
  int local_13c;
  char *local_138;
  int local_134;
  char local_9c;
  uint local_68 [2];
  undefined1 local_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 local_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined2 local_4e;
  undefined1 uStack_4c;
  char cStack_4b;
  undefined4 local_4a;
  undefined2 local_3b;
  int local_39;
  uint ******local_34 [8];
  uint local_14;
  AiFltClassTy *local_10;
  AiFltClassTy *local_c;
  uint ******local_8;
  
  local_180 = (byte *)0x0;
  local_198 = 0;
  if ((DAT_007fa174 != (STAllPlayersC *)0x0) &&
     (local_188 = this, iVar5 = thunk_FUN_0065bd70(this,(int)message,0), -1 < iVar5)) {
    local_194 = iVar5;
    uVar6 = (**(code **)(this->field_0000 + 0x18))();
    this->field_052B = uVar6;
    if ((iVar5 != 0x456) ||
       ((*(uint *)(DAT_00802a38 + 0xe4) % 0x19 == this->field_00D2 ||
        (*(uint *)(DAT_00802a38 + 0xe4) == 1)))) {
      local_19c = *(int *)(this->field_04E2 + 8);
      local_284.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_284;
      iVar5 = Library::MSVCRT::__setjmp3(local_284.jumpBuffer,0,unaff_EDI,unaff_ESI);
      this_00 = local_188;
      if (iVar5 == 0) {
        local_14 = 0;
        iVar5 = *(int *)&local_188->field_0x4ee;
        bVar30 = *(int *)(iVar5 + 0xc) != 0;
        if (0 < *(int *)(iVar5 + 0xc)) {
          do {
            uVar27 = local_14;
            if (bVar30) {
              pcVar23 = (char *)(*(int *)(iVar5 + 8) * local_14 + *(int *)(iVar5 + 0x1c));
            }
            else {
              pcVar23 = (char *)0x0;
            }
            local_178 = pcVar23;
            if (*pcVar23 == '\0') {
              if (*(int *)(pcVar23 + 5) == local_194) {
                if (local_198 == 0) {
                  thunk_FUN_0065bd70(this_00,(int)message,1);
                  local_198 = 1;
                }
                iVar5 = thunk_FUN_00672440((int)&this_00->field_0x4fa,(int)*(short *)(pcVar23 + 9),
                                           local_16c);
                uVar31 = uVar27;
                if (iVar5 < 0) {
                  iVar32 = *(int *)&this_00->field_0x84;
                  pcVar7 = &this_00->field_0x4;
                }
                else {
                  if (local_9c == '\b') {
                    if (local_164 != (AiFltClassTy *)0x0) {
                      *pcVar23 = '\x01';
                      pcVar23[0xb] = '\0';
                      pcVar23[0xc] = '\0';
                      pcVar23[0xd] = '\0';
                      pcVar23[0xe] = '\0';
                      iVar5 = *(int *)(pcVar23 + 0xf);
                      local_170 = (AiFltClassTy *)0x0;
                      local_174 = 0;
                      pAVar10 = *(AiFltClassTy **)(iVar5 + 0xc);
                      if (0 < (int)pAVar10) {
                        do {
                          if (local_170 < pAVar10) {
                            psVar8 = (short *)(*(int *)(iVar5 + 8) * (int)local_170 +
                                              *(int *)(iVar5 + 0x1c));
                          }
                          else {
                            psVar8 = (short *)0x0;
                          }
                          iVar5 = thunk_FUN_00672440((int)&this_00->field_0x4fa,(int)*psVar8,
                                                     local_16c);
                          if (iVar5 < 0) {
                            thunk_FUN_0064d0e0(this_00,iVar5,&this_00->field_0x4,uVar27,-1);
                            goto switchD_00652a7f_caseD_3;
                          }
                          if (iVar5 != 0x19) {
                            local_174 = 0;
                          }
                          if (0x593 < iVar5) {
                            if (0x5c8 < iVar5) {
                              if (iVar5 < 0x76d) {
                                if (iVar5 != 0x76c) {
                                  switch(iVar5) {
                                  case 0x5dc:
                                    iVar32 = thunk_FUN_00651010(local_16c);
                                    if (iVar32 != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        pAVar10 = (AiFltClassTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                     (uint)local_160,
                                                                     (uint *)local_34);
                                        if (0 < (int)pAVar10) {
                                          pppppppuVar24 = local_34;
                                          local_c = pAVar10;
                                          do {
                                            thunk_FUN_0064e300((int)*pppppppuVar24,(char *)local_15c
                                                               ,(short)local_158,(char)local_154,
                                                               (short)local_150,(char)local_14c,
                                                               (uint)local_148);
                                            pppppppuVar24 = pppppppuVar24 + 1;
                                            local_c = (AiFltClassTy *)
                                                      ((int)&local_c[-1].field_0284 + 3);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5dd:
                                    bVar30 = thunk_FUN_00651120((int)local_16c);
                                    if (CONCAT31(extraout_var_15,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_10 = (AiFltClassTy *)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_10 >> 8),*(undefined1 *)local_10),
                                                  (uint)local_15c);
                                            if (iVar32 == 0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar27,
                                                                 (int)*(uint *******)local_10);
                                            }
                                            else {
                                              pvVar15 = (void *)thunk_FUN_00423300(iVar32);
                                              if (pvVar15 == (void *)0x0) {
                                                ppppppuVar11 = *(uint *******)local_10;
                                                uVar31 = uVar27;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                thunk_FUN_0064d0e0(this_00,-0xab,pcVar23,uVar31,
                                                                   (int)ppppppuVar11);
                                              }
                                              else {
                                                thunk_FUN_0065d630(pvVar15,extraout_EDX_04);
                                              }
                                            }
                                            local_10 = (AiFltClassTy *)((int)local_10 + 4);
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5de:
                                    bVar30 = thunk_FUN_00651160((int)local_16c);
                                    if (CONCAT31(extraout_var_16,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_10 = (AiFltClassTy *)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_10 >> 8),*(undefined1 *)local_10),
                                                  (uint)local_15c);
                                            if (iVar32 == 0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar27,
                                                                 (int)*(uint *******)local_10);
                                            }
                                            else {
                                              iVar32 = thunk_FUN_00423300(iVar32);
                                              if (iVar32 == 0) {
                                                ppppppuVar11 = *(uint *******)local_10;
                                                uVar31 = uVar27;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                thunk_FUN_0064d0e0(this_00,-0xab,pcVar23,uVar31,
                                                                   (int)ppppppuVar11);
                                              }
                                              else {
                                                thunk_FUN_0065e6c0(iVar32,extraout_EDX_05);
                                              }
                                            }
                                            local_10 = (AiFltClassTy *)((int)local_10 + 4);
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5df:
                                    bVar30 = thunk_FUN_00651160((int)local_16c);
                                    if (CONCAT31(extraout_var_17,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_10 = (AiFltClassTy *)local_34;
                                          local_8 = (uint ******)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_10 >> 8),*(undefined1 *)local_10),
                                                  (uint)local_15c);
                                            if (iVar32 == 0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar27,
                                                                 (int)*(uint *******)local_10);
                                            }
                                            else {
                                              local_17c = (void *)thunk_FUN_00423300(iVar32);
                                              if (local_17c == (void *)0x0) {
                                                ppppppuVar11 = *(uint *******)local_10;
                                                uVar31 = uVar27;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                thunk_FUN_0064d0e0(this_00,-0xab,pcVar23,uVar31,
                                                                   (int)ppppppuVar11);
                                              }
                                              else {
                                                local_c = (AiFltClassTy *)
                                                          thunk_FUN_00676170(*(uint *******)local_10
                                                                            );
                                                if (local_c != (AiFltClassTy *)0x0) {
                                                  thunk_FUN_0065d940(local_17c,(int)local_c,0);
                                                  FUN_006ae110((byte *)local_c);
                                                }
                                              }
                                            }
                                            local_10 = (AiFltClassTy *)((int)local_10 + 4);
                                            local_8 = (uint ******)((int)local_8 + -1);
                                          } while (local_8 != (uint ******)0x0);
                                          local_8 = (uint ******)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5e0:
                                    bVar30 = thunk_FUN_006511a0((int)local_16c);
                                    if (CONCAT31(extraout_var_18,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        pAVar10 = (AiFltClassTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                     (uint)local_160,
                                                                     (uint *)local_34);
                                        if (0 < (int)pAVar10) {
                                          pppppppuVar24 = local_34;
                                          local_c = pAVar10;
                                          uVar6 = extraout_ECX_01;
                                          do {
                                            pvVar15 = (void *)thunk_FUN_0042b760(CONCAT31((int3)((
                                                  uint)uVar6 >> 8),*(undefined1 *)pppppppuVar24),
                                                  (uint)local_15c);
                                            if (pvVar15 == (void *)0x0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar27,
                                                                 (int)*pppppppuVar24);
                                              uVar6 = extraout_ECX_02;
                                            }
                                            else {
                                              thunk_FUN_00424530(pvVar15,(uint)local_158);
                                              uVar6 = extraout_ECX_03;
                                            }
                                            pppppppuVar24 = pppppppuVar24 + 1;
                                            local_c = (AiFltClassTy *)
                                                      ((int)&local_c[-1].field_0284 + 3);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5e1:
                                    bVar30 = thunk_FUN_006511a0((int)local_16c);
                                    if (CONCAT31(extraout_var_19,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        pAVar10 = (AiFltClassTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                     (uint)local_160,
                                                                     (uint *)local_34);
                                        if (0 < (int)pAVar10) {
                                          pppppppuVar24 = local_34;
                                          local_c = pAVar10;
                                          uVar6 = extraout_ECX_04;
                                          do {
                                            pvVar15 = (void *)thunk_FUN_0042b760(CONCAT31((int3)((
                                                  uint)uVar6 >> 8),*(undefined1 *)pppppppuVar24),
                                                  (uint)local_15c);
                                            if (pvVar15 == (void *)0x0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar27,
                                                                 (int)*pppppppuVar24);
                                              uVar6 = extraout_ECX_05;
                                            }
                                            else {
                                              thunk_FUN_00424620(pvVar15,(uint)local_158);
                                              uVar6 = extraout_ECX_06;
                                            }
                                            pppppppuVar24 = pppppppuVar24 + 1;
                                            local_c = (AiFltClassTy *)
                                                      ((int)&local_c[-1].field_0284 + 3);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5e2:
                                    bVar30 = thunk_FUN_006511e0((int)local_16c);
                                    if (CONCAT31(extraout_var_20,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_10 = (AiFltClassTy *)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_10 >> 8),*(char *)local_10),(uint)local_15c)
                                            ;
                                            if (iVar32 == 0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar27,
                                                                 (int)*(uint *******)local_10);
                                            }
                                            else {
                                              local_17c = (void *)thunk_FUN_00423300(iVar32);
                                              if (local_17c == (void *)0x0) {
                                                ppppppuVar11 = *(uint *******)local_10;
                                                uVar31 = uVar27;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                thunk_FUN_0064d0e0(this_00,-0xab,pcVar23,uVar31,
                                                                   (int)ppppppuVar11);
                                              }
                                              else {
                                                pvVar15 = (void *)0x0;
                                                local_8 = (uint ******)0x0;
                                                if (DAT_007fa174 != (STAllPlayersC *)0x0) {
                                                  pvVar15 = (void *)thunk_FUN_004357f0(*(char *)
                                                  local_10);
                                                }
                                                if (pvVar15 != (void *)0x0) {
                                                  local_8 = (uint ******)
                                                            thunk_FUN_00678ef0(pvVar15,(byte *)
                                                  local_158);
                                                }
                                                if ((uint *******)local_8 == (uint *******)0x0) {
                                                  thunk_FUN_0064d0e0(this_00,-4,local_158,uVar27,
                                                                     (int)*(uint *******)local_10);
                                                }
                                                else {
                                                  thunk_FUN_0068e690(local_8,(int)local_17c);
                                                }
                                              }
                                            }
                                            local_10 = (AiFltClassTy *)((int)local_10 + 4);
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5e3:
                                    bVar30 = thunk_FUN_00651250((int)local_16c);
                                    if (CONCAT31(extraout_var_21,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_10 = (AiFltClassTy *)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_10 >> 8),*(undefined1 *)local_10),
                                                  (uint)local_15c);
                                            if (iVar32 == 0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar27,
                                                                 (int)*(uint *******)local_10);
                                            }
                                            else {
                                              iVar32 = thunk_FUN_00423300(iVar32);
                                              if (iVar32 == 0) {
                                                ppppppuVar11 = *(uint *******)local_10;
                                                uVar31 = uVar27;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                thunk_FUN_0064d0e0(this_00,-0xab,pcVar23,uVar31,
                                                                   (int)ppppppuVar11);
                                              }
                                              else {
                                                thunk_FUN_0065d600(iVar32);
                                              }
                                            }
                                            local_10 = (AiFltClassTy *)((int)local_10 + 4);
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5e4:
                                    iVar32 = thunk_FUN_00651290(local_16c);
                                    if (iVar32 != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_10 = (AiFltClassTy *)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_10 >> 8),*(undefined1 *)local_10),
                                                  (uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = *(uint *******)local_10;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_006577ae:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if (((pAVar10 == (AiFltClassTy *)0x0) ||
                                                  (pAVar10->field_007B == 1)) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = *(uint *******)local_10;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_006577ae;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              uStack_59 = SUB41(local_14c,0);
                                              local_58 = (undefined1)((uint)local_14c >> 8);
                                              local_60 = local_158._0_1_;
                                              iVar32 = (int)local_144 * 0x19;
                                              uStack_5b = SUB41(local_150,0);
                                              uStack_5a = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 1;
                                              uStack_57 = SUB41(local_148,0);
                                              uStack_56 = (undefined1)((uint)local_148 >> 8);
                                              uStack_55 = (undefined1)((uint)local_148 >> 0x10);
                                              uStack_54 = (undefined1)((uint)local_148 >> 0x18);
                                              uStack_53 = (undefined1)iVar32;
                                              uStack_52 = (undefined1)((uint)iVar32 >> 8);
                                              uStack_51 = (undefined1)((uint)iVar32 >> 0x10);
                                              uStack_50 = (undefined1)((uint)iVar32 >> 0x18);
                                              iVar32 = local_140 * 0x19;
                                              uStack_4f = (undefined1)iVar32;
                                              local_4e = (undefined2)((uint)iVar32 >> 8);
                                              uStack_4c = (undefined1)((uint)iVar32 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_10 = (AiFltClassTy *)((int)local_10 + 4);
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5e5:
                                    bVar30 = thunk_FUN_006514d0(local_16c);
                                    if (CONCAT31(extraout_var_22,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_10 = (AiFltClassTy *)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_10 >> 8),*(undefined1 *)local_10),
                                                  (uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = *(uint *******)local_10;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_00657a41:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if (((pAVar10 == (AiFltClassTy *)0x0) ||
                                                  (pAVar10->field_007B == 1)) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = *(uint *******)local_10;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_00657a41;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              uStack_59 = SUB41(local_14c,0);
                                              local_58 = (undefined1)((uint)local_14c >> 8);
                                              local_60 = local_158._0_1_;
                                              iVar32 = (int)local_148 * 0x19;
                                              uStack_5b = SUB41(local_150,0);
                                              uStack_5a = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 2;
                                              uStack_57 = (undefined1)iVar32;
                                              uStack_56 = (undefined1)((uint)iVar32 >> 8);
                                              uStack_55 = (undefined1)((uint)iVar32 >> 0x10);
                                              uStack_54 = (undefined1)((uint)iVar32 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_10 = (AiFltClassTy *)((int)local_10 + 4);
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5e6:
                                    iVar32 = thunk_FUN_006513c0(local_16c);
                                    if (iVar32 != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_10 = (AiFltClassTy *)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_10 >> 8),*(undefined1 *)local_10),
                                                  (uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = *(uint *******)local_10;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_006578fe:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if (((pAVar10 == (AiFltClassTy *)0x0) ||
                                                  (pAVar10->field_007B == 1)) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = *(uint *******)local_10;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_006578fe;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              local_60 = local_158._0_1_;
                                              uStack_59 = SUB41(local_14c,0);
                                              local_58 = (undefined1)((uint)local_14c >> 8);
                                              uStack_5b = SUB41(local_150,0);
                                              uStack_5a = (undefined1)((uint)local_150 >> 8);
                                              uStack_53 = SUB41(local_148,0);
                                              uStack_52 = (undefined1)((uint)local_148 >> 8);
                                              uStack_51 = (undefined1)((uint)local_148 >> 0x10);
                                              uStack_50 = (undefined1)((uint)local_148 >> 0x18);
                                              iVar32 = (int)local_144 * 0x19;
                                              local_68[0] = 3;
                                              uStack_57 = (undefined1)iVar32;
                                              uStack_56 = (undefined1)((uint)iVar32 >> 8);
                                              uStack_55 = (undefined1)((uint)iVar32 >> 0x10);
                                              uStack_54 = (undefined1)((uint)iVar32 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_10 = (AiFltClassTy *)((int)local_10 + 4);
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5e7:
                                    iVar32 = thunk_FUN_006515b0(local_16c);
                                    if (iVar32 != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_00657bce:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              local_10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if ((local_10 == (AiFltClassTy *)0x0) ||
                                                 (local_10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_00657bce;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              uVar27 = (uint)local_158 & 0x3fffffff;
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              local_60 = (undefined1)uVar27;
                                              uStack_5f = (undefined1)(uVar27 >> 8);
                                              uStack_5e = (undefined1)(uVar27 >> 0x10);
                                              uStack_5d = (undefined1)(uVar27 >> 0x18);
                                              uVar27 = (uint)local_154 & 0x3fffffff;
                                              uStack_54 = SUB41(local_14c,0);
                                              uStack_53 = (undefined1)((uint)local_14c >> 8);
                                              uStack_5c = (undefined1)uVar27;
                                              uStack_5b = (undefined1)(uVar27 >> 8);
                                              uStack_5a = (undefined1)(uVar27 >> 0x10);
                                              uStack_59 = (undefined1)(uVar27 >> 0x18);
                                              uVar27 = (uint)local_150 & 0x3fffffff;
                                              local_4e = (undefined2)local_140;
                                              local_58 = (undefined1)uVar27;
                                              uStack_57 = (undefined1)(uVar27 >> 8);
                                              uStack_56 = (undefined1)(uVar27 >> 0x10);
                                              uStack_55 = (undefined1)(uVar27 >> 0x18);
                                              uStack_52 = SUB41(local_148,0);
                                              uStack_51 = (undefined1)((uint)local_148 >> 8);
                                              local_68[0] = 4;
                                              uStack_50 = SUB41(local_144,0);
                                              uStack_4f = (undefined1)((uint)local_144 >> 8);
                                              uStack_4c = (undefined1)local_13c;
                                              pcVar23 = local_138;
                                              if (local_138 == (char *)0x0) {
                                                pcVar23 = &DAT_008016a0;
                                              }
                                              Library::MSVCRT::_strncpy(&cStack_4b,pcVar23,0xe);
                                              AiFltClassTy::GetAiMess(local_10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5e8:
                                    bVar30 = thunk_FUN_00651730((int)local_16c);
                                    if (CONCAT31(extraout_var_23,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_00657ccf:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if ((pAVar10 == (AiFltClassTy *)0x0) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_00657ccf;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              local_68[0] = 5;
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5e9:
                                    iVar32 = thunk_FUN_00651770((int)local_16c);
                                    if (iVar32 != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_00657dd9:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if ((pAVar10 == (AiFltClassTy *)0x0) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_00657dd9;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              local_60 = local_158._0_1_;
                                              local_68[0] = 6;
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5ea:
                                    bVar30 = thunk_FUN_006517c0(local_16c);
                                    if (CONCAT31(extraout_var_24,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_00657f1c:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if (((pAVar10 == (AiFltClassTy *)0x0) ||
                                                  (pAVar10->field_007B == 1)) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_00657f1c;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              uStack_59 = SUB41(local_14c,0);
                                              local_58 = (undefined1)((uint)local_14c >> 8);
                                              local_60 = local_158._0_1_;
                                              iVar32 = (int)local_148 * 0x19;
                                              uStack_5b = SUB41(local_150,0);
                                              uStack_5a = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 7;
                                              uStack_57 = (undefined1)iVar32;
                                              uStack_56 = (undefined1)((uint)iVar32 >> 8);
                                              uStack_55 = (undefined1)((uint)iVar32 >> 0x10);
                                              uStack_54 = (undefined1)((uint)iVar32 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5eb:
                                    bVar30 = thunk_FUN_00651880((int)local_16c);
                                    if (CONCAT31(extraout_var_25,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_0065806e:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if (((pAVar10 == (AiFltClassTy *)0x0) ||
                                                  (pAVar10->field_007B == 1)) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_0065806e;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              local_60 = SUB41(local_158,0);
                                              uStack_5f = (undefined1)((uint)local_158 >> 8);
                                              uStack_5c = SUB41(local_150,0);
                                              uStack_5b = (undefined1)((uint)local_150 >> 8);
                                              uStack_5e = SUB41(local_154,0);
                                              uStack_5d = (undefined1)((uint)local_154 >> 8);
                                              local_58 = SUB41(local_148,0);
                                              uStack_57 = (undefined1)((uint)local_148 >> 8);
                                              uStack_5a = SUB41(local_14c,0);
                                              uStack_59 = (undefined1)((uint)local_14c >> 8);
                                              local_68[0] = 8;
                                              uStack_56 = SUB41(local_144,0);
                                              uStack_55 = (undefined1)((uint)local_144 >> 8);
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5ec:
                                    bVar30 = thunk_FUN_006518c0((int)local_16c);
                                    if (CONCAT31(extraout_var_26,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_00658177:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if (((pAVar10 == (AiFltClassTy *)0x0) ||
                                                  (pAVar10->field_007B == 1)) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_00658177;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              local_68[0] = 9;
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5ed:
                                    iVar32 = thunk_FUN_00651df0(local_16c);
                                    if (iVar32 != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_00658b70:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if (((pAVar10 == (AiFltClassTy *)0x0) ||
                                                  (pAVar10->field_007B == 1)) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_00658b70;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5e = SUB41(local_154,0);
                                              uStack_5d = (undefined1)((uint)local_154 >> 8);
                                              uStack_50 = SUB41(local_14c,0);
                                              uStack_4f = (undefined1)((uint)local_14c >> 8);
                                              local_4e = (undefined2)((uint)local_14c >> 0x10);
                                              local_60 = SUB41(local_158,0);
                                              uStack_5f = (undefined1)((uint)local_158 >> 8);
                                              iVar32 = (int)local_148 * 0x19;
                                              uStack_5c = SUB41(local_150,0);
                                              uStack_5b = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0x34;
                                              uStack_5a = (undefined1)iVar32;
                                              uStack_59 = (undefined1)((uint)iVar32 >> 8);
                                              local_58 = (undefined1)((uint)iVar32 >> 0x10);
                                              uStack_57 = (undefined1)((uint)iVar32 >> 0x18);
                                              uStack_54 = (undefined1)local_140;
                                              uStack_53 = (undefined1)(local_140 >> 8);
                                              uStack_56 = SUB41(local_144,0);
                                              uStack_55 = (undefined1)((uint)local_144 >> 8);
                                              uStack_52 = (undefined1)local_13c;
                                              uStack_51 = (undefined1)((uint)local_13c >> 8);
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5ee:
                                    bVar30 = thunk_FUN_00651ed0(local_16c);
                                    if (CONCAT31(extraout_var_29,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_00658d01:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              local_10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if (((local_10 == (AiFltClassTy *)0x0) ||
                                                  (local_10->field_007B == 1)) ||
                                                 (local_10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_00658d01;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              local_58 = SUB41(local_158,0);
                                              uStack_57 = (undefined1)((uint)local_158 >> 8);
                                              uStack_56 = (undefined1)((uint)local_158 >> 0x10);
                                              uStack_55 = (undefined1)((uint)local_158 >> 0x18);
                                              uStack_4c = SUB41(local_14c,0);
                                              cStack_4b = (char)((uint)local_14c >> 8);
                                              local_68[0] = 0x32;
                                              uStack_50 = SUB41(local_154,0);
                                              uStack_4f = (undefined1)((uint)local_154 >> 8);
                                              local_4e = (undefined2)((uint)local_154 >> 0x10);
                                              uStack_54 = SUB41(local_150,0);
                                              uStack_53 = (undefined1)((uint)local_150 >> 8);
                                              uStack_52 = (undefined1)((uint)local_150 >> 0x10);
                                              uStack_51 = (undefined1)((uint)local_150 >> 0x18);
                                              pcVar23 = local_148;
                                              if (local_148 == (char *)0x0) {
                                                pcVar23 = &DAT_008016a0;
                                              }
                                              Library::MSVCRT::_strncpy
                                                        ((char *)&local_4a,pcVar23,0xe);
                                              uStack_5b = (undefined1)(local_140 >> 8);
                                              uStack_5c = 0;
                                              uStack_5a = 0;
                                              uStack_59 = 0;
                                              local_3b = local_144._0_2_;
                                              local_39 = local_13c * 0x19;
                                              local_60 = (undefined1)local_140;
                                              uStack_5f = 0;
                                              uStack_5e = 0;
                                              uStack_5d = 0;
                                              AiFltClassTy::GetAiMess(local_10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5ef:
                                    bVar30 = thunk_FUN_00652030(local_16c);
                                    if (CONCAT31(extraout_var_30,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_00658e8e:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if (((pAVar10 == (AiFltClassTy *)0x0) ||
                                                  (pAVar10->field_007B == 1)) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_00658e8e;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              local_58 = SUB41(local_158,0);
                                              uStack_57 = (undefined1)((uint)local_158 >> 8);
                                              uStack_56 = SUB41(local_154,0);
                                              uStack_55 = (undefined1)((uint)local_154 >> 8);
                                              uStack_54 = SUB41(local_150,0);
                                              uStack_53 = (undefined1)((uint)local_150 >> 8);
                                              uStack_52 = SUB41(local_14c,0);
                                              uStack_51 = (undefined1)((uint)local_14c >> 8);
                                              uStack_50 = SUB41(local_148,0);
                                              uStack_4f = (undefined1)((uint)local_148 >> 8);
                                              local_4e = local_144._0_2_;
                                              uStack_4c = (undefined1)local_140;
                                              cStack_4b = (char)(local_140 >> 8);
                                              uStack_5b = (undefined1)((uint)local_13c >> 8);
                                              uStack_5c = 0;
                                              uStack_5a = 0;
                                              uStack_59 = 0;
                                              local_60 = (undefined1)local_13c;
                                              uStack_5f = 0;
                                              uStack_5e = 0;
                                              uStack_5d = 0;
                                              local_4a = (int)local_138 * 0x19;
                                              local_68[0] = 0x33;
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5f0:
                                    bVar30 = thunk_FUN_00652100(local_16c);
                                    if (CONCAT31(extraout_var_31,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_00658fc8:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if (((pAVar10 == (AiFltClassTy *)0x0) ||
                                                  (pAVar10->field_007B == 1)) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_00658fc8;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5a = SUB41(local_154,0);
                                              uStack_59 = (undefined1)((uint)local_154 >> 8);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              local_60 = SUB41(local_150,0);
                                              uStack_5f = (undefined1)((uint)local_150 >> 8);
                                              uStack_5e = (undefined1)((uint)local_150 >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_150 >> 0x18);
                                              iVar32 = (int)local_14c * 0x19;
                                              local_68[0] = 0x35;
                                              local_58 = (undefined1)iVar32;
                                              uStack_57 = (undefined1)((uint)iVar32 >> 8);
                                              uStack_56 = (undefined1)((uint)iVar32 >> 0x10);
                                              uStack_55 = (undefined1)((uint)iVar32 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5f1:
                                    bVar30 = thunk_FUN_00651900(local_16c);
                                    if (CONCAT31(extraout_var_27,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_006582b3:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if ((pAVar10 == (AiFltClassTy *)0x0) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_006582b3;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              local_60 = local_158._0_1_;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = SUB41(local_150,0);
                                              uStack_5c = (undefined1)((uint)local_150 >> 8);
                                              uStack_5b = SUB41(local_14c,0);
                                              uStack_5a = (undefined1)((uint)local_14c >> 8);
                                              uStack_59 = (undefined1)((uint)local_14c >> 0x10);
                                              local_58 = (undefined1)((uint)local_14c >> 0x18);
                                              uStack_57 = SUB41(local_148,0);
                                              uStack_56 = (undefined1)((uint)local_148 >> 8);
                                              uStack_55 = (undefined1)((uint)local_148 >> 0x10);
                                              uStack_54 = (undefined1)((uint)local_148 >> 0x18);
                                              local_68[0] = 10;
                                              uStack_53 = 0;
                                              uStack_52 = 0;
                                              uStack_51 = 0;
                                              uStack_50 = 0;
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5f2:
                                    iVar32 = thunk_FUN_006519e0(local_16c);
                                    if (iVar32 != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_00658416:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if (pAVar10 == (AiFltClassTy *)0x0) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_00658416;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5b = SUB41(local_14c,0);
                                              uStack_5a = (undefined1)((uint)local_14c >> 8);
                                              local_60 = local_158._0_1_;
                                              iVar32 = (int)local_144 * 0x19;
                                              uStack_5d = SUB41(local_150,0);
                                              uStack_5c = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0xb;
                                              uStack_4f = SUB41(local_148,0);
                                              local_4e = (undefined2)((uint)local_148 >> 8);
                                              uStack_4c = (undefined1)((uint)local_148 >> 0x18);
                                              uStack_59 = (undefined1)iVar32;
                                              local_58 = (undefined1)((uint)iVar32 >> 8);
                                              uStack_57 = (undefined1)((uint)iVar32 >> 0x10);
                                              uStack_56 = (undefined1)((uint)iVar32 >> 0x18);
                                              uStack_55 = (undefined1)local_140;
                                              uStack_54 = (undefined1)(local_140 >> 8);
                                              uStack_53 = (undefined1)local_13c;
                                              uStack_52 = (undefined1)((uint)local_13c >> 8);
                                              uStack_51 = SUB41(local_138,0);
                                              uStack_50 = (undefined1)((uint)local_138 >> 8);
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5f3:
                                    iVar32 = thunk_FUN_00651b40(local_16c);
                                    if (iVar32 != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_00658543:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if (((pAVar10 == (AiFltClassTy *)0x0) ||
                                                  (pAVar10->field_007B == 1)) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_00658543;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              local_60 = local_158._0_1_;
                                              local_68[0] = 0xc;
                                              iVar32 = (int)local_150 * 0x19;
                                              uStack_5b = (undefined1)iVar32;
                                              uStack_5a = (undefined1)((uint)iVar32 >> 8);
                                              uStack_59 = (undefined1)((uint)iVar32 >> 0x10);
                                              local_58 = (undefined1)((uint)iVar32 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5f4:
                                    iVar32 = thunk_FUN_00651bd0(local_16c);
                                    if (iVar32 != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_00658670:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if (((pAVar10 == (AiFltClassTy *)0x0) ||
                                                  (pAVar10->field_007B == 1)) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_00658670;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              local_60 = local_158._0_1_;
                                              local_68[0] = 0xd;
                                              iVar32 = (int)local_150 * 0x19;
                                              uStack_5b = (undefined1)iVar32;
                                              uStack_5a = (undefined1)((uint)iVar32 >> 8);
                                              uStack_59 = (undefined1)((uint)iVar32 >> 0x10);
                                              local_58 = (undefined1)((uint)iVar32 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5f5:
                                    iVar32 = thunk_FUN_00651cd0(local_16c);
                                    if (iVar32 != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_006587e2:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if (((pAVar10 == (AiFltClassTy *)0x0) ||
                                                  (pAVar10->field_007B == 1)) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_006587e2;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5e = SUB41(local_154,0);
                                              uStack_5d = (undefined1)((uint)local_154 >> 8);
                                              uStack_50 = SUB41(local_14c,0);
                                              uStack_4f = (undefined1)((uint)local_14c >> 8);
                                              local_4e = (undefined2)((uint)local_14c >> 0x10);
                                              local_60 = SUB41(local_158,0);
                                              uStack_5f = (undefined1)((uint)local_158 >> 8);
                                              iVar32 = (int)local_148 * 0x19;
                                              uStack_5c = SUB41(local_150,0);
                                              uStack_5b = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0xe;
                                              uStack_5a = (undefined1)iVar32;
                                              uStack_59 = (undefined1)((uint)iVar32 >> 8);
                                              local_58 = (undefined1)((uint)iVar32 >> 0x10);
                                              uStack_57 = (undefined1)((uint)iVar32 >> 0x18);
                                              uStack_54 = (undefined1)local_140;
                                              uStack_53 = (undefined1)(local_140 >> 8);
                                              uStack_56 = SUB41(local_144,0);
                                              uStack_55 = (undefined1)((uint)local_144 >> 8);
                                              uStack_52 = (undefined1)local_13c;
                                              uStack_51 = (undefined1)((uint)local_13c >> 8);
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5f6:
                                    bVar30 = thunk_FUN_00651db0((int)local_16c);
                                    if (CONCAT31(extraout_var_28,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_006588eb:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if (((pAVar10 == (AiFltClassTy *)0x0) ||
                                                  (pAVar10->field_007B == 1)) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_006588eb;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              local_68[0] = 0xf;
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5f7:
                                    iVar32 = thunk_FUN_00651c60(local_16c);
                                    if (iVar32 != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_006589fe:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if ((pAVar10 == (AiFltClassTy *)0x0) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_006589fe;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              local_60 = local_158._0_1_;
                                              local_68[0] = 0x10;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5f8:
                                    bVar30 = thunk_FUN_006521c0(local_16c);
                                    if (CONCAT31(extraout_var_32,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_00659143:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if (((pAVar10 == (AiFltClassTy *)0x0) ||
                                                  (pAVar10->field_007B == 1)) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_00659143;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              local_58 = SUB41(local_154,0);
                                              uStack_57 = (undefined1)((uint)local_154 >> 8);
                                              uStack_54 = SUB41(local_14c,0);
                                              uStack_53 = (undefined1)((uint)local_14c >> 8);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              uStack_5a = (undefined1)((uint)local_158 >> 0x10);
                                              uStack_59 = (undefined1)((uint)local_158 >> 0x18);
                                              uStack_50 = SUB41(local_144,0);
                                              uStack_4f = (undefined1)((uint)local_144 >> 8);
                                              uStack_56 = SUB41(local_150,0);
                                              uStack_55 = (undefined1)((uint)local_150 >> 8);
                                              local_60 = (undefined1)local_13c;
                                              uStack_5f = (undefined1)((uint)local_13c >> 8);
                                              uStack_5e = (undefined1)((uint)local_13c >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_13c >> 0x18);
                                              uStack_52 = SUB41(local_148,0);
                                              uStack_51 = (undefined1)((uint)local_148 >> 8);
                                              iVar32 = (int)local_138 * 0x19;
                                              local_4e = (undefined2)local_140;
                                              local_68[0] = 0x36;
                                              uStack_4c = (undefined1)iVar32;
                                              cStack_4b = (char)((uint)iVar32 >> 8);
                                              local_4a._0_2_ = (undefined2)((uint)iVar32 >> 0x10);
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5f9:
                                    bVar30 = thunk_FUN_00652460(local_16c);
                                    if (CONCAT31(extraout_var_34,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_006594ec:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if (((pAVar10 == (AiFltClassTy *)0x0) ||
                                                  (pAVar10->field_007B == 1)) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_006594ec;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5a = SUB41(local_154,0);
                                              uStack_59 = (undefined1)((uint)local_154 >> 8);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              uStack_56 = SUB41(local_14c,0);
                                              uStack_55 = (undefined1)((uint)local_14c >> 8);
                                              local_58 = SUB41(local_150,0);
                                              uStack_57 = (undefined1)((uint)local_150 >> 8);
                                              uStack_52 = SUB41(local_144,0);
                                              uStack_51 = (undefined1)((uint)local_144 >> 8);
                                              uStack_54 = SUB41(local_148,0);
                                              uStack_53 = (undefined1)((uint)local_148 >> 8);
                                              local_60 = (undefined1)local_140;
                                              uStack_5f = (undefined1)(local_140 >> 8);
                                              uStack_5e = (undefined1)(local_140 >> 0x10);
                                              uStack_5d = (undefined1)(local_140 >> 0x18);
                                              iVar32 = local_13c * 0x19;
                                              local_68[0] = 0x37;
                                              uStack_50 = (undefined1)iVar32;
                                              uStack_4f = (undefined1)((uint)iVar32 >> 8);
                                              local_4e = (undefined2)((uint)iVar32 >> 0x10);
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5fa:
                                    bVar30 = thunk_FUN_00652540(local_16c);
                                    if (CONCAT31(extraout_var_35,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_00659640:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if (((pAVar10 == (AiFltClassTy *)0x0) ||
                                                  (pAVar10->field_007B == 1)) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_00659640;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5a = SUB41(local_154,0);
                                              uStack_59 = (undefined1)((uint)local_154 >> 8);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              uStack_56 = SUB41(local_14c,0);
                                              uStack_55 = (undefined1)((uint)local_14c >> 8);
                                              local_58 = SUB41(local_150,0);
                                              uStack_57 = (undefined1)((uint)local_150 >> 8);
                                              local_60 = SUB41(local_148,0);
                                              uStack_5f = (undefined1)((uint)local_148 >> 8);
                                              uStack_5e = (undefined1)((uint)local_148 >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_148 >> 0x18);
                                              iVar32 = (int)local_144 * 0x19;
                                              local_68[0] = 0x38;
                                              uStack_54 = (undefined1)iVar32;
                                              uStack_53 = (undefined1)((uint)iVar32 >> 8);
                                              uStack_52 = (undefined1)((uint)iVar32 >> 0x10);
                                              uStack_51 = (undefined1)((uint)iVar32 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5fb:
                                    bVar30 = thunk_FUN_006525e0(local_16c);
                                    if (CONCAT31(extraout_var_36,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_00659785:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if (((pAVar10 == (AiFltClassTy *)0x0) ||
                                                  (pAVar10->field_007B == 1)) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_00659785;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5a = SUB41(local_154,0);
                                              uStack_59 = (undefined1)((uint)local_154 >> 8);
                                              local_60 = SUB41(local_14c,0);
                                              uStack_5f = (undefined1)((uint)local_14c >> 8);
                                              uStack_5e = (undefined1)((uint)local_14c >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_14c >> 0x18);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              iVar32 = (int)local_148 * 0x19;
                                              local_58 = SUB41(local_150,0);
                                              uStack_57 = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0x39;
                                              uStack_56 = (undefined1)iVar32;
                                              uStack_55 = (undefined1)((uint)iVar32 >> 8);
                                              uStack_54 = (undefined1)((uint)iVar32 >> 0x10);
                                              uStack_53 = (undefined1)((uint)iVar32 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5fc:
                                    bVar30 = thunk_FUN_00652670(local_16c);
                                    if (CONCAT31(extraout_var_37,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_006598ca:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if (((pAVar10 == (AiFltClassTy *)0x0) ||
                                                  (pAVar10->field_007B == 1)) ||
                                                 (pAVar10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_006598ca;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              uStack_5a = SUB41(local_154,0);
                                              uStack_59 = (undefined1)((uint)local_154 >> 8);
                                              local_60 = SUB41(local_14c,0);
                                              uStack_5f = (undefined1)((uint)local_14c >> 8);
                                              uStack_5e = (undefined1)((uint)local_14c >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_14c >> 0x18);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              iVar32 = (int)local_148 * 0x19;
                                              local_58 = SUB41(local_150,0);
                                              uStack_57 = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0x3a;
                                              uStack_56 = (undefined1)iVar32;
                                              uStack_55 = (undefined1)((uint)iVar32 >> 8);
                                              uStack_54 = (undefined1)((uint)iVar32 >> 0x10);
                                              uStack_53 = (undefined1)((uint)iVar32 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5fd:
                                    bVar30 = thunk_FUN_00652300(local_16c);
                                    if (CONCAT31(extraout_var_33,bVar30) != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_0065937a:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              local_10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              uVar21 = local_140;
                                              if ((local_10 == (AiFltClassTy *)0x0) ||
                                                 (local_10->field_007B == -0x8000)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_0065937a;
                                              }
                                              ppuVar29 = &local_20c;
                                              for (iVar32 = 0x12; puVar13 = local_158, iVar32 != 0;
                                                  iVar32 = iVar32 + -1) {
                                                *ppuVar29 = (uint *)0x0;
                                                ppuVar29 = ppuVar29 + 1;
                                              }
                                              *(undefined2 *)ppuVar29 = 0;
                                              local_20c = puVar13;
                                              local_208 = 0xffff;
                                              local_206 = 0x5622;
                                              local_204 = 0xfffffff0;
                                              local_200 = 0xfffe;
                                              if (-1 < (int)uVar21) {
                                                local_200 = (undefined2)uVar21;
                                              }
                                              local_1fe = (int)local_138 * 0x19;
                                              local_1f6 = local_154._0_2_;
                                              local_1f4 = local_150._0_2_;
                                              local_1f2 = local_14c._0_2_;
                                              if (((int)local_148 < 0) ||
                                                 (pcVar23 = local_148, 7 < (int)local_148)) {
                                                bVar1 = local_10->field_0x81;
                                                pcVar23 = (char *)(uint)bVar1;
                                                if (((char)bVar1 < '\0') || ('\a' < (char)bVar1)) {
                                                  pcVar23 = (char *)(uint)(byte)local_10->field_0x24
                                                  ;
                                                }
                                              }
                                              local_1f0 = SUB41(pcVar23,0);
                                              if (local_144 != (AiFltClassTy *)0x0) {
                                                Library::MSVCRT::_strncpy
                                                          (local_1ef,(char *)local_144,0xe);
                                                uVar21 = local_140;
                                              }
                                              if ((((local_20c == (uint *)0xdd) ||
                                                   (local_20c == (uint *)0xde)) ||
                                                  (local_20c == (uint *)0xe2)) ||
                                                 (local_20c == (uint *)0xdc)) {
                                                bVar1 = 1;
                                              }
                                              else {
                                                bVar1 = 0;
                                              }
                                              local_1e0 = -(uint)bVar1 & uVar21;
                                              puVar13 = local_240;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_236 = &local_20c;
                                              local_1ce = 1;
                                              local_240[0] = 0x68;
                                              local_237 = 1;
                                              AiFltClassTy::GetAiMess(local_10,local_240);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    break;
                                  case 0x5fe:
                                    iVar32 = thunk_FUN_00652700(local_16c);
                                    if (iVar32 != 0) {
                                      iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                        iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                    (uint)local_160,(uint *)local_34
                                                                   );
                                        if (0 < iVar32) {
                                          local_8 = (uint ******)local_34;
                                          local_c = (AiFltClassTy *)iVar32;
                                          do {
                                            iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),*(char *)local_8),(uint)local_15c);
                                            uVar31 = uVar27;
                                            if (iVar32 == 0) {
                                              ppppppuVar11 = (uint ******)*local_8;
                                              pcVar23 = &DAT_008016a0;
                                              iVar32 = -0xaa;
LAB_00659a1c:
                                              thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                                 (int)ppppppuVar11);
                                            }
                                            else {
                                              pAVar10 = (AiFltClassTy *)thunk_FUN_00423300(iVar32);
                                              if ((pAVar10 == (AiFltClassTy *)0x0) ||
                                                 (pAVar10->field_007B != 1)) {
                                                ppppppuVar11 = (uint ******)*local_8;
                                                pcVar23 = thunk_FUN_00674af0(iVar5);
                                                iVar32 = -0xab;
                                                goto LAB_00659a1c;
                                              }
                                              puVar13 = local_68;
                                              for (iVar32 = 0xd; iVar32 != 0; iVar32 = iVar32 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = *(undefined4 *)(DAT_00802a38 + 0xe4);
                                              local_58 = SUB41(local_154,0);
                                              uStack_57 = (undefined1)((uint)local_154 >> 8);
                                              uStack_54 = SUB41(local_14c,0);
                                              uStack_53 = (undefined1)((uint)local_14c >> 8);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              uStack_5a = (undefined1)((uint)local_158 >> 0x10);
                                              uStack_59 = (undefined1)((uint)local_158 >> 0x18);
                                              local_60 = SUB41(local_144,0);
                                              uStack_5f = (undefined1)((uint)local_144 >> 8);
                                              uStack_5e = (undefined1)((uint)local_144 >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_144 >> 0x18);
                                              uStack_56 = SUB41(local_150,0);
                                              uStack_55 = (undefined1)((uint)local_150 >> 8);
                                              iVar32 = local_140 * 0x19;
                                              uStack_52 = SUB41(local_148,0);
                                              uStack_51 = (undefined1)((uint)local_148 >> 8);
                                              uStack_50 = (undefined1)((uint)local_148 >> 0x10);
                                              uStack_4f = (undefined1)((uint)local_148 >> 0x18);
                                              local_68[0] = 0x3b;
                                              local_4e = (undefined2)iVar32;
                                              uStack_4c = (undefined1)((uint)iVar32 >> 0x10);
                                              cStack_4b = (char)((uint)iVar32 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar10,local_68);
                                              uVar27 = local_14;
                                            }
                                            local_8 = local_8 + 1;
                                            local_c = (AiFltClassTy *)((int)local_c + -1);
                                          } while (local_c != (AiFltClassTy *)0x0);
                                          local_c = (AiFltClassTy *)0x0;
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
                                iVar5 = thunk_FUN_006527d0((int)local_16c);
                                if (iVar5 == 0) {
                                  iVar5 = -1;
                                  uVar31 = uVar27;
                                  pcVar23 = thunk_FUN_00674af0(0x76c);
                                  thunk_FUN_0064d0e0(this_00,-0x7d,pcVar23,uVar31,iVar5);
                                }
                                else {
                                  DAT_0080c51e = local_164;
                                }
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                            if (iVar5 == 0x5c8) {
                              iVar5 = thunk_FUN_00650ad0((int)local_16c);
                              if (iVar5 == 0) {
                                iVar5 = -1;
                                uVar31 = uVar27;
                                pcVar23 = thunk_FUN_00674af0(0x5c8);
                                thunk_FUN_0064d0e0(this_00,-0x7d,pcVar23,uVar31,iVar5);
                              }
                              else {
                                iVar5 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar5 == 8) && (local_164 == (AiFltClassTy *)0x9)) {
                                  iVar5 = -1;
                                  uVar31 = uVar27;
                                  pcVar23 = thunk_FUN_00674af0(0x5c8);
                                  thunk_FUN_0064d0e0(this_00,-0x7d,pcVar23,uVar31,iVar5);
                                }
                                else {
                                  pAVar10 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_164,
                                                               (uint)local_160,(uint *)local_34);
                                  if (0 < (int)pAVar10) {
                                    pppppppuVar24 = local_34;
                                    local_c = pAVar10;
                                    pppppppuVar12 = (uint *******)local_15c;
                                    do {
                                      puVar20 = (ushort *)0xffffffff;
                                      if (((int)pppppppuVar12 < 1) || (0x28 < (int)pppppppuVar12)) {
                                        bVar30 = false;
                                      }
                                      else {
                                        bVar30 = true;
                                      }
                                      if (bVar30) {
                                        puVar20 = (ushort *)((int)pppppppuVar12 + 0x41);
                                      }
                                      if (((int)pppppppuVar12 < 0x32) || (0x73 < (int)pppppppuVar12)
                                         ) {
                                        bVar30 = false;
                                      }
                                      else {
                                        bVar30 = true;
                                      }
                                      if (bVar30) {
                                        puVar20 = (ushort *)((int)pppppppuVar12 + -0x32);
                                      }
                                      if (-1 < (int)puVar20) {
                                        thunk_FUN_004e6080((int)*pppppppuVar24,(int)puVar20,
                                                           local_158);
                                        pppppppuVar12 = (uint *******)local_15c;
                                      }
                                      pppppppuVar24 = pppppppuVar24 + 1;
                                      local_c = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3);
                                    } while (local_c != (AiFltClassTy *)0x0);
                                  }
                                }
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                            switch(iVar5) {
                            case 0x594:
                              iVar32 = thunk_FUN_0064feb0((int)local_16c);
                              if (iVar32 == 0) break;
                              if (local_160 != (AiFltClassTy *)0x0) {
                                thunk_FUN_00677f40(0,(byte *)local_164,0,0,0,-1,-1,-1,&LAB_004012cb,
                                                   local_160);
                              }
                              goto switchD_00652a7f_caseD_3;
                            case 0x595:
                              iVar32 = thunk_FUN_0064fef0(local_16c);
                              if (iVar32 == 0) break;
                              if (((local_164 == (AiFltClassTy *)0xdd) ||
                                  (local_164 == (AiFltClassTy *)0xde)) ||
                                 (local_164 == (AiFltClassTy *)0xe0)) {
                                bVar30 = true;
                              }
                              else {
                                bVar30 = false;
                              }
                              if (bVar30) {
                                local_18c = local_160;
                                local_190 = local_15c;
                                local_184 = local_158;
                                iVar32 = thunk_FUN_004b1cf0((int)local_164,(int *)&local_18c,
                                                            (int *)&local_190,(int *)&local_184);
                                if (iVar32 == 0) goto LAB_00655f4c;
                                thunk_FUN_00580450(local_18c,local_190,local_184,local_164,local_154
                                                  );
                              }
                              goto switchD_00652a7f_caseD_3;
                            case 0x596:
                              iVar32 = thunk_FUN_0064ff70(local_16c);
                              if (iVar32 == 0) break;
                              DAT_008118fc = 0;
                              thunk_FUN_00677960((short)local_164,(short)local_160,(short)local_15c,
                                                 (short)local_158,(short)local_154,(short)local_150,
                                                 (short)local_14c,&LAB_004047e1,&local_148);
                              goto switchD_00652a7f_caseD_3;
                            case 0x597:
                              iVar32 = thunk_FUN_00650090(local_16c);
                              if (iVar32 == 0) break;
                              thunk_FUN_00677960((short)local_15c,(short)local_158,(short)local_154,
                                                 (short)local_150,(short)local_14c,(short)local_148,
                                                 (short)local_144,&LAB_00405b6e,
                                                 (int)local_160 << 0x10 | (uint)local_164 & 0xffff);
                              goto switchD_00652a7f_caseD_3;
                            case 0x598:
                              iVar32 = thunk_FUN_006501a0(local_16c);
                              if (iVar32 != 0) {
                                iVar32 = _CreateDest(this_00,(short)local_164,(short)local_160,
                                                     (short)local_15c,(short)local_158,
                                                     (short)local_154,(char *)local_150,local_14c,
                                                     local_148);
                                goto LAB_00655f44;
                              }
                              break;
                            case 0x599:
                              iVar32 = thunk_FUN_00650240(local_16c);
                              if (iVar32 == 0) break;
                              DAT_008118fc = 0;
                              thunk_FUN_006785a0((byte *)local_160,(char)local_164,(short)local_15c,
                                                 (short)local_158,(short)local_154,(short)local_150,
                                                 (short)local_14c,(short)local_148,&LAB_0040191a,
                                                 &local_144);
                              goto switchD_00652a7f_caseD_3;
                            case 0x59a:
                              iVar32 = thunk_FUN_00650370((int)local_16c);
                              if (iVar32 == 0) break;
                              if (local_160 != (AiFltClassTy *)0x0) {
                                thunk_FUN_006785a0((byte *)local_164,-1,0,0,0,-1,-1,-1,&LAB_00403e18
                                                   ,local_160);
                              }
                              goto switchD_00652a7f_caseD_3;
                            case 0x59b:
                              iVar32 = thunk_FUN_006503b0(local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                              (uint)local_160,(uint *)local_34);
                                  if (0 < iVar32) {
                                    local_8 = (uint ******)local_34;
                                    local_c = (AiFltClassTy *)iVar32;
                                    do {
                                      iVar32 = _CreateMine(this_00,*(ushort *)local_8,
                                                           (short)local_15c,(int)local_158,
                                                           (int)local_154,local_150,
                                                           (ushort)local_14c,local_148,local_144,
                                                           local_140);
                                      if (iVar32 != 0) {
                                        ppppppuVar11 = (uint ******)*local_8;
                                        uVar31 = uVar27;
                                        pcVar23 = thunk_FUN_00674af0(iVar5);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar23,uVar31,
                                                           (int)ppppppuVar11);
                                      }
                                      local_8 = local_8 + 1;
                                      local_c = (AiFltClassTy *)((int)local_c + -1);
                                    } while (local_c != (AiFltClassTy *)0x0);
                                    local_c = (AiFltClassTy *)0x0;
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x59c:
                              iVar32 = thunk_FUN_00650480(local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  pAVar10 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_164,
                                                               (uint)local_160,(uint *)local_34);
                                  if (0 < (int)pAVar10) {
                                    pppppppuVar24 = local_34;
                                    local_c = pAVar10;
                                    do {
                                      DAT_008118fc = 0;
                                      thunk_FUN_00678240((int)*pppppppuVar24,(short)local_15c,
                                                         (char)local_158,local_154,(short)local_150,
                                                         (short)local_14c,(short)local_148,
                                                         (short)local_144,(short)local_140,
                                                         (short)local_13c,&LAB_004037d8,&local_138);
                                      pppppppuVar24 = pppppppuVar24 + 1;
                                      local_c = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3);
                                    } while (local_c != (AiFltClassTy *)0x0);
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x59d:
                              iVar32 = thunk_FUN_00650600(local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  pAVar10 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_164,
                                                               (uint)local_160,(uint *)local_34);
                                  if (0 < (int)pAVar10) {
                                    pppppppuVar24 = local_34;
                                    local_c = pAVar10;
                                    do {
                                      DAT_008118fc = 0;
                                      thunk_FUN_00678240((int)*pppppppuVar24,(short)local_158,
                                                         (char)local_154,local_150,(short)local_14c,
                                                         (short)local_148,(short)local_144,
                                                         (short)local_140,(short)local_13c,
                                                         (short)local_138,&LAB_004035fd,local_15c);
                                      pppppppuVar24 = pppppppuVar24 + 1;
                                      local_c = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3);
                                    } while (local_c != (AiFltClassTy *)0x0);
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            default:
                              goto switchD_00652a7f_caseD_3;
                            case 0x5aa:
                              iVar32 = thunk_FUN_00650760(local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  pAVar10 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_164,
                                                               (uint)local_160,(uint *)local_34);
                                  if (0 < (int)pAVar10) {
                                    pppppppuVar24 = local_34;
                                    local_c = pAVar10;
                                    do {
                                      thunk_FUN_004e76e0((int)*pppppppuVar24,(uint *)local_15c,
                                                         (char)local_158);
                                      pppppppuVar24 = pppppppuVar24 + 1;
                                      local_c = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3);
                                    } while (local_c != (AiFltClassTy *)0x0);
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5ab:
                              iVar32 = thunk_FUN_00650760(local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  pAVar10 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_164,
                                                               (uint)local_160,(uint *)local_34);
                                  if (0 < (int)pAVar10) {
                                    pppppppuVar24 = local_34;
                                    local_c = pAVar10;
                                    do {
                                      thunk_FUN_004e7980((uint *)*pppppppuVar24,(int)local_15c,
                                                         (char)local_158);
                                      pppppppuVar24 = pppppppuVar24 + 1;
                                      local_c = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3);
                                    } while (local_c != (AiFltClassTy *)0x0);
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5ac:
                              iVar32 = thunk_FUN_00650820(local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                              (uint)local_160,(uint *)local_34);
                                  if (0 < iVar32) {
                                    local_8 = (uint ******)local_34;
                                    do {
                                      local_c = (AiFltClassTy *)iVar32;
                                      this_01 = (AiPlrClassTy *)thunk_FUN_004357f0(*(char *)local_8)
                                      ;
                                      if (this_01 == (AiPlrClassTy *)0x0) {
                                        ppppppuVar11 = (uint ******)*local_8;
                                        uVar31 = uVar27;
                                        pcVar23 = thunk_FUN_00674af0(iVar5);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar23,uVar31,
                                                           (int)ppppppuVar11);
                                      }
                                      else {
                                        AiPlrClassTy::SetTech
                                                  (this_01,(int)local_15c,(int)local_158,
                                                   (int)local_154,0xff);
                                      }
                                      local_8 = local_8 + 1;
                                      iVar32 = (int)local_c + -1;
                                    } while (iVar32 != 0);
                                    local_c = (AiFltClassTy *)0x0;
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5ad:
                              iVar32 = thunk_FUN_006508c0(local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  pAVar10 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_164,
                                                               (uint)local_160,(uint *)local_34);
                                  if (0 < (int)pAVar10) {
                                    pppppppuVar24 = local_34;
                                    local_c = pAVar10;
                                    do {
                                      thunk_FUN_004e6310((int)*pppppppuVar24,(uint)local_15c,
                                                         (uint)local_158);
                                      pppppppuVar24 = pppppppuVar24 + 1;
                                      local_c = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3);
                                    } while (local_c != (AiFltClassTy *)0x0);
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5ae:
                              iVar32 = thunk_FUN_006509e0((int)local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  pAVar10 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_164,
                                                               (uint)local_160,(uint *)local_34);
                                  if (0 < (int)pAVar10) {
                                    pppppppuVar24 = local_34;
                                    local_c = pAVar10;
                                    do {
                                      thunk_FUN_004e75f0((int)*pppppppuVar24);
                                      pppppppuVar24 = pppppppuVar24 + 1;
                                      local_c = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3);
                                    } while (local_c != (AiFltClassTy *)0x0);
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5af:
                              iVar32 = thunk_FUN_00650a20(local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                              (uint)local_160,(uint *)local_34);
                                  if (0 < iVar32) {
                                    local_8 = (uint ******)local_34;
                                    do {
                                      local_c = (AiFltClassTy *)iVar32;
                                      pvVar15 = (void *)thunk_FUN_004357f0(*(char *)local_8);
                                      if (pvVar15 == (void *)0x0) {
                                        ppppppuVar11 = (uint ******)*local_8;
                                        uVar31 = uVar27;
                                        pcVar23 = thunk_FUN_00674af0(iVar5);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar23,uVar31,
                                                           (int)ppppppuVar11);
                                      }
                                      else {
                                        thunk_FUN_0067b210(pvVar15,(int)local_15c,(int)local_158);
                                      }
                                      local_8 = local_8 + 1;
                                      iVar32 = (int)local_c + -1;
                                    } while (iVar32 != 0);
                                    local_c = (AiFltClassTy *)0x0;
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5b0:
                              iVar32 = thunk_FUN_00650a90((int)local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                              (uint)local_160,(uint *)local_34);
                                  if (0 < iVar32) {
                                    local_8 = (uint ******)local_34;
                                    do {
                                      local_c = (AiFltClassTy *)iVar32;
                                      iVar32 = thunk_FUN_004357f0(*(char *)local_8);
                                      if (iVar32 == 0) {
                                        ppppppuVar11 = (uint ******)*local_8;
                                        uVar31 = uVar27;
                                        pcVar23 = thunk_FUN_00674af0(iVar5);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar23,uVar31,
                                                           (int)ppppppuVar11);
                                      }
                                      else {
                                        thunk_FUN_0067b260(iVar32);
                                      }
                                      local_8 = local_8 + 1;
                                      iVar32 = (int)local_c + -1;
                                    } while (iVar32 != 0);
                                    local_c = (AiFltClassTy *)0x0;
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5b1:
                              iVar32 = thunk_FUN_006507e0((int)local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  pAVar10 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_164,
                                                               (uint)local_160,(uint *)local_34);
                                  if (0 < (int)pAVar10) {
                                    pppppppuVar24 = local_34;
                                    local_c = pAVar10;
                                    do {
                                      thunk_FUN_004e7d70((int)*pppppppuVar24);
                                      pppppppuVar24 = pppppppuVar24 + 1;
                                      local_c = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3);
                                    } while (local_c != (AiFltClassTy *)0x0);
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5b2:
                              iVar32 = thunk_FUN_006507e0((int)local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  pAVar10 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_164,
                                                               (uint)local_160,(uint *)local_34);
                                  if (0 < (int)pAVar10) {
                                    pppppppuVar24 = local_34;
                                    local_c = pAVar10;
                                    do {
                                      thunk_FUN_004e7e10((uint *)*pppppppuVar24);
                                      pppppppuVar24 = pppppppuVar24 + 1;
                                      local_c = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3);
                                    } while (local_c != (AiFltClassTy *)0x0);
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5b3:
                              iVar32 = thunk_FUN_00650940(local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  pAVar10 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_164,
                                                               (uint)local_160,(uint *)local_34);
                                  if (0 < (int)pAVar10) {
                                    pppppppuVar24 = local_34;
                                    local_c = pAVar10;
                                    do {
                                      thunk_FUN_004e7390((int)*pppppppuVar24,(uint)local_15c,
                                                         (uint)local_158,(int)local_154);
                                      pppppppuVar24 = pppppppuVar24 + 1;
                                      local_c = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3);
                                    } while (local_c != (AiFltClassTy *)0x0);
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5b4:
                              iVar32 = thunk_FUN_00650b10(local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  pppppppuVar24 =
                                       (uint *******)
                                       thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160,
                                                          (uint *)local_34);
                                  if (0 < (int)pppppppuVar24) {
                                    pppppppuVar12 = local_34;
                                    local_8 = (uint ******)pppppppuVar24;
                                    do {
                                      local_c = (AiFltClassTy *)0xffffffff;
                                      local_8 = (uint ******)pppppppuVar24;
                                      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
                                        iVar5 = 0;
                                      }
                                      else {
                                        iVar5 = thunk_FUN_004357f0(*(char *)pppppppuVar12);
                                      }
                                      if (iVar5 != 0) {
                                        local_c = (AiFltClassTy *)
                                                  thunk_FUN_00679120((byte *)local_15c,
                                                                     (int)local_158,(int)local_154,
                                                                     (int)local_150);
                                      }
                                      if ((int)local_c < 0) {
                                        thunk_FUN_0064d0e0(this_00,-4,local_15c,uVar27,
                                                           (int)*pppppppuVar12);
                                      }
                                      pppppppuVar12 = pppppppuVar12 + 1;
                                      pppppppuVar24 = (uint *******)((int)local_8 + -1);
                                      local_8 = (uint ******)pppppppuVar24;
                                    } while (pppppppuVar24 != (uint *******)0x0);
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5b5:
                              iVar32 = thunk_FUN_00650f50((int)local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                              (uint)local_160,(uint *)local_34);
                                  if (0 < iVar32) {
                                    local_8 = (uint ******)local_34;
                                    do {
                                      local_c = (AiFltClassTy *)iVar32;
                                      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
                                        pvVar15 = (void *)0x0;
                                      }
                                      else {
                                        pvVar15 = (void *)thunk_FUN_004357f0(*(char *)local_8);
                                      }
                                      if (pvVar15 == (void *)0x0) {
                                        ppppppuVar11 = (uint ******)*local_8;
                                        uVar31 = uVar27;
                                        pcVar23 = thunk_FUN_00674af0(iVar5);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar23,uVar31,
                                                           (int)ppppppuVar11);
                                      }
                                      else {
                                        *(undefined1 *)((int)pvVar15 + 0x644) = local_15c._0_1_;
                                        *(uint **)((int)pvVar15 + 0x640) = local_158;
                                        thunk_FUN_00679600(pvVar15);
                                      }
                                      local_8 = local_8 + 1;
                                      iVar32 = (int)local_c + -1;
                                    } while (iVar32 != 0);
                                    local_c = (AiFltClassTy *)0x0;
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5b6:
                              bVar30 = thunk_FUN_00650f90(local_16c);
                              if (CONCAT31(extraout_var_14,bVar30) != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                              (uint)local_160,(uint *)local_34);
                                  if (0 < iVar32) {
                                    local_8 = (uint ******)local_34;
                                    do {
                                      local_c = (AiFltClassTy *)iVar32;
                                      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
                                        pvVar15 = (void *)0x0;
                                      }
                                      else {
                                        pvVar15 = (void *)thunk_FUN_004357f0(*(char *)local_8);
                                      }
                                      if (pvVar15 == (void *)0x0) {
                                        ppppppuVar11 = (uint ******)*local_8;
                                        uVar31 = uVar27;
                                        pcVar23 = thunk_FUN_00674af0(iVar5);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar23,uVar31,
                                                           (int)ppppppuVar11);
                                      }
                                      else {
                                        thunk_FUN_0065bd20(pvVar15,(char)local_15c,(short)local_158,
                                                           (short)local_154,(short)local_150,
                                                           local_14c);
                                      }
                                      local_8 = local_8 + 1;
                                      iVar32 = (int)local_c + -1;
                                    } while (iVar32 != 0);
                                    local_c = (AiFltClassTy *)0x0;
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5b7:
                              iVar32 = thunk_FUN_00650bd0(local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                              (uint)local_160,(uint *)local_34);
                                  if (0 < iVar32) {
                                    local_10 = (AiFltClassTy *)local_34;
                                    local_8 = (uint ******)iVar32;
                                    do {
                                      local_c = (AiFltClassTy *)
                                                thunk_FUN_00677290(*(uint *******)local_10,
                                                                   (uint)local_15c,(char)local_158,
                                                                   (short)local_154,(short)local_150
                                                                   ,(short)local_14c,
                                                                   (short)local_148,(short)local_144
                                                                   ,(short)local_140,1);
                                      if (local_c == (AiFltClassTy *)0x0) {
                                        ppppppuVar11 = *(uint *******)local_10;
                                        uVar31 = uVar27;
                                        pcVar23 = thunk_FUN_00674af0(iVar5);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar23,uVar31,
                                                           (int)ppppppuVar11);
                                      }
                                      else {
                                        thunk_FUN_00675dc0((uint)*(uint *******)local_10,
                                                           (int)local_c);
                                        FUN_006ae110((byte *)local_c);
                                      }
                                      local_10 = (AiFltClassTy *)((int)local_10 + 4);
                                      local_8 = (uint ******)((int)local_8 + -1);
                                    } while (local_8 != (uint ******)0x0);
                                    local_8 = (uint ******)0x0;
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5b8:
                              iVar32 = thunk_FUN_00650cf0(local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                              (uint)local_160,(uint *)local_34);
                                  if (0 < iVar32) {
                                    local_10 = (AiFltClassTy *)local_34;
                                    local_8 = (uint ******)iVar32;
                                    do {
                                      local_c = (AiFltClassTy *)
                                                thunk_FUN_006773b0(*(uint *******)local_10,
                                                                   (uint)local_15c,(char)local_158,
                                                                   (short)local_154,(short)local_150
                                                                   ,(short)local_14c,
                                                                   (short)local_148,(short)local_144
                                                                   ,(short)local_140,1);
                                      if (local_c == (AiFltClassTy *)0x0) {
                                        ppppppuVar11 = *(uint *******)local_10;
                                        uVar31 = uVar27;
                                        pcVar23 = thunk_FUN_00674af0(iVar5);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar23,uVar31,
                                                           (int)ppppppuVar11);
                                      }
                                      else {
                                        thunk_FUN_00675dc0((uint)*(uint *******)local_10,
                                                           (int)local_c);
                                        FUN_006ae110((byte *)local_c);
                                      }
                                      local_10 = (AiFltClassTy *)((int)local_10 + 4);
                                      local_8 = (uint ******)((int)local_8 + -1);
                                    } while (local_8 != (uint ******)0x0);
                                    local_8 = (uint ******)0x0;
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                              break;
                            case 0x5b9:
                              iVar32 = thunk_FUN_00650e10(local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                              (uint)local_160,(uint *)local_34);
                                  if (0 < iVar32) {
                                    local_10 = (AiFltClassTy *)local_34;
                                    local_8 = (uint ******)iVar32;
                                    do {
                                      local_c = (AiFltClassTy *)
                                                thunk_FUN_006774c0(*(uint *******)local_10,
                                                                   (byte *)local_15c,(char)local_158
                                                                   ,(short)local_154,
                                                                   (short)local_150,(short)local_14c
                                                                   ,(short)local_148,
                                                                   (short)local_144,(short)local_140
                                                                   ,1);
                                      if (local_c == (AiFltClassTy *)0x0) {
                                        ppppppuVar11 = *(uint *******)local_10;
                                        uVar31 = uVar27;
                                        pcVar23 = thunk_FUN_00674af0(iVar5);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar23,uVar31,
                                                           (int)ppppppuVar11);
                                      }
                                      else {
                                        thunk_FUN_00675dc0((uint)*(uint *******)local_10,
                                                           (int)local_c);
                                        FUN_006ae110((byte *)local_c);
                                      }
                                      local_10 = (AiFltClassTy *)((int)local_10 + 4);
                                      local_8 = (uint ******)((int)local_8 + -1);
                                    } while (local_8 != (uint ******)0x0);
                                    local_8 = (uint ******)0x0;
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                            }
                            goto LAB_00652a99;
                          }
                          if (iVar5 == 0x593) {
                            iVar5 = thunk_FUN_0064fd80(local_16c);
                            if (iVar5 == 0) {
                              iVar5 = -1;
                              uVar31 = uVar27;
                              pcVar23 = thunk_FUN_00674af0(0x593);
                              thunk_FUN_0064d0e0(this_00,-0x7d,pcVar23,uVar31,iVar5);
                            }
                            else {
                              DAT_008118fc = 0;
                              thunk_FUN_00677f40((short)local_164,(byte *)local_160,(short)local_15c
                                                 ,(short)local_158,(short)local_154,(short)local_150
                                                 ,(short)local_14c,(short)local_148,&LAB_004022f2,
                                                 &local_144);
                            }
                            goto switchD_00652a7f_caseD_3;
                          }
                          if (iVar5 < 0x54e) {
                            if (iVar5 == 0x54d) {
                              iVar5 = thunk_FUN_0064ef10((int)local_16c);
                              if (iVar5 == 0) {
                                iVar5 = -1;
                                uVar31 = uVar27;
                                pcVar23 = thunk_FUN_00674af0(0x54d);
                                thunk_FUN_0064d0e0(this_00,-0x7d,pcVar23,uVar31,iVar5);
                              }
                              else {
                                iVar5 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar5 == 8) && (local_164 == (AiFltClassTy *)0x9)) {
                                  iVar5 = -1;
                                  uVar31 = uVar27;
                                  pcVar23 = thunk_FUN_00674af0(0x54d);
                                  thunk_FUN_0064d0e0(this_00,-0x7d,pcVar23,uVar31,iVar5);
                                }
                                else {
                                  iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                             (uint)local_160,(uint *)local_34);
                                  iVar32 = 0;
                                  if (0 < iVar5) {
                                    pppppppuVar24 = local_34;
                                    do {
                                      if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d) {
                                        if (DAT_007fb2a0 != 0) {
                                          thunk_FUN_004aaf60((int)local_15c);
                                        }
                                        break;
                                      }
                                      iVar32 = iVar32 + 1;
                                      pppppppuVar24 = pppppppuVar24 + 1;
                                    } while (iVar32 < iVar5);
                                  }
                                }
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                            if (iVar5 < 0x51b) {
                              if (iVar5 == 0x51a) {
                                iVar5 = thunk_FUN_0064e960((int)local_16c);
                                if (iVar5 == 0) {
                                  iVar5 = -1;
                                  uVar31 = uVar27;
                                  pcVar23 = thunk_FUN_00674af0(0x51a);
                                  thunk_FUN_0064d0e0(this_00,-0x7d,pcVar23,uVar31,iVar5);
                                }
                                else {
                                  (&this_00[1].field_0000)[(int)local_164] = local_160;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                              if (0x3e < iVar5) {
                                if (iVar5 < 0x517) {
                                  if (iVar5 == 0x516) {
                                    iVar5 = thunk_FUN_0064e7c0(local_16c);
                                    if (iVar5 == 0) {
                                      iVar5 = -1;
                                      uVar31 = uVar27;
                                      pcVar23 = thunk_FUN_00674af0(0x516);
                                      thunk_FUN_0064d0e0(this_00,-0x7d,pcVar23,uVar31,iVar5);
                                    }
                                    else {
                                      if (local_164 == (AiFltClassTy *)0x9) {
                                        iVar5 = (**(code **)(this_00->field_0000 + 0x18))();
                                        if (iVar5 == 8) {
                                          pppppppuVar24 = (uint *******)local_15c;
                                          if ((int)local_15c <= (int)local_158) {
                                            do {
                                              puVar9 = (undefined1 *)
                                                       thunk_FUN_0064e510(this_00,(int)pppppppuVar24
                                                                         );
                                              if (puVar9 != (undefined1 *)0x0) {
                                                *puVar9 = 0;
                                              }
                                              pppppppuVar24 = (uint *******)((int)pppppppuVar24 + 1)
                                              ;
                                            } while ((int)pppppppuVar24 <= (int)local_158);
                                          }
                                          goto switchD_00652a7f_caseD_3;
                                        }
                                      }
                                      iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                 (uint)local_160,(uint *)local_34);
                                      if (0 < iVar5) {
                                        local_8 = (uint ******)local_34;
                                        do {
                                          local_c = (AiFltClassTy *)iVar5;
                                          if (DAT_007fa174 == (STAllPlayersC *)0x0) {
                                            local_10 = (AiFltClassTy *)0x0;
                                          }
                                          else {
                                            local_10 = (AiFltClassTy *)
                                                       thunk_FUN_004357f0(*(char *)local_8);
                                          }
                                          pppppppuVar24 = (uint *******)local_15c;
                                          if ((int)local_15c <= (int)local_158) {
                                            do {
                                              if (local_10 != (AiFltClassTy *)0x0) {
                                                puVar9 = (undefined1 *)
                                                         thunk_FUN_0064e510(&local_10->field_0x1c,
                                                                            (int)pppppppuVar24);
                                                if (puVar9 != (undefined1 *)0x0) {
                                                  *puVar9 = 0;
                                                }
                                              }
                                              pppppppuVar24 = (uint *******)((int)pppppppuVar24 + 1)
                                              ;
                                            } while ((int)pppppppuVar24 <= (int)local_158);
                                          }
                                          local_8 = local_8 + 1;
                                          iVar5 = (int)local_c + -1;
                                        } while (iVar5 != 0);
                                        local_c = (AiFltClassTy *)0x0;
                                      }
                                    }
                                  }
                                  else if (iVar5 == 0x42) {
                                    iVar5 = thunk_FUN_0064e700((int)local_16c);
                                    if (iVar5 == 0) {
                                      iVar5 = -1;
                                      uVar31 = uVar27;
                                      pcVar23 = thunk_FUN_00674af0(0x42);
                                      thunk_FUN_0064d0e0(this_00,-0x7d,pcVar23,uVar31,iVar5);
                                    }
                                    else {
                                      pAVar10 = local_160;
                                      if (local_164 == (AiFltClassTy *)0x0) goto LAB_00659a80;
                                    }
                                  }
                                  else if (iVar5 == 0x322) {
                                    local_174 = 1;
                                  }
                                  else if (iVar5 == 0x515) {
                                    iVar5 = thunk_FUN_0064e780(local_16c);
                                    if (iVar5 == 0) {
                                      iVar5 = -1;
                                      uVar31 = uVar27;
                                      pcVar23 = thunk_FUN_00674af0(0x515);
                                      thunk_FUN_0064d0e0(this_00,-0x7d,pcVar23,uVar31,iVar5);
                                    }
                                    else if (local_164 == (AiFltClassTy *)0x0) {
                                      *local_178 = '\0';
                                      local_178[0xb] = '\0';
                                      local_178[0xc] = '\0';
                                      local_178[0xd] = '\0';
                                      local_178[0xe] = '\0';
                                    }
                                    else {
                                      *local_178 = '\x01';
                                      *(AiFltClassTy **)(local_178 + 0xb) = local_164;
                                    }
                                  }
                                }
                                else if (iVar5 == 0x517) {
                                  iVar5 = thunk_FUN_0064e830(local_16c);
                                  if (iVar5 == 0) {
                                    iVar5 = -1;
                                    uVar31 = uVar27;
                                    pcVar23 = thunk_FUN_00674af0(0x517);
                                    thunk_FUN_0064d0e0(this_00,-0x7d,pcVar23,uVar31,iVar5);
                                  }
                                  else {
                                    if (local_164 == (AiFltClassTy *)0x9) {
                                      iVar5 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if (iVar5 == 8) {
                                        pppppppuVar24 = (uint *******)local_15c;
                                        if ((int)local_15c <= (int)local_158) {
                                          do {
                                            puVar9 = (undefined1 *)
                                                     thunk_FUN_0064e510(this_00,(int)pppppppuVar24);
                                            if (puVar9 != (undefined1 *)0x0) {
                                              *puVar9 = 1;
                                              *(byte **)(puVar9 + 0xb) = local_154;
                                            }
                                            pppppppuVar24 = (uint *******)((int)pppppppuVar24 + 1);
                                          } while ((int)pppppppuVar24 <= (int)local_158);
                                        }
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                               (uint)local_160,(uint *)local_34);
                                    if (0 < iVar5) {
                                      local_8 = (uint ******)local_34;
                                      local_c = (AiFltClassTy *)iVar5;
                                      do {
                                        if (DAT_007fa174 == (STAllPlayersC *)0x0) {
                                          local_10 = (AiFltClassTy *)0x0;
                                        }
                                        else {
                                          local_10 = (AiFltClassTy *)
                                                     thunk_FUN_004357f0(*(char *)local_8);
                                        }
                                        pppppppuVar24 = (uint *******)local_15c;
                                        if ((int)local_15c <= (int)local_158) {
                                          do {
                                            if (local_10 != (AiFltClassTy *)0x0) {
                                              puVar9 = (undefined1 *)
                                                       thunk_FUN_0064e510(&local_10->field_0x1c,
                                                                          (int)pppppppuVar24);
                                              if (puVar9 != (undefined1 *)0x0) {
                                                *puVar9 = 1;
                                                *(byte **)(puVar9 + 0xb) = local_154;
                                              }
                                            }
                                            pppppppuVar24 = (uint *******)((int)pppppppuVar24 + 1);
                                          } while ((int)pppppppuVar24 <= (int)local_158);
                                        }
                                        local_8 = local_8 + 1;
                                        local_c = (AiFltClassTy *)((int)local_c + -1);
                                      } while (local_c != (AiFltClassTy *)0x0);
                                      local_c = (AiFltClassTy *)0x0;
                                    }
                                  }
                                }
                                else if (iVar5 == 0x518) {
                                  iVar5 = thunk_FUN_0064e8c0((int)local_16c);
                                  if (iVar5 == 0) {
                                    iVar5 = -1;
                                    uVar31 = uVar27;
                                    pcVar23 = thunk_FUN_00674af0(0x518);
                                    thunk_FUN_0064d0e0(this_00,-0x7d,pcVar23,uVar31,iVar5);
                                  }
                                  else {
                                    if (local_164 == (AiFltClassTy *)0x9) {
                                      iVar5 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if (iVar5 == 8) {
                                        *(uint **)(&this_00->field_0xde + (int)local_15c * 4) =
                                             local_158;
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                    }
                                    pAVar10 = (AiFltClassTy *)
                                              thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                 (uint)local_160,(uint *)local_34);
                                    if (0 < (int)pAVar10) {
                                      pppppppuVar24 = local_34;
                                      local_c = pAVar10;
                                      do {
                                        local_c = pAVar10;
                                        if (DAT_007fa174 == (STAllPlayersC *)0x0) {
                                          iVar5 = 0;
                                        }
                                        else {
                                          iVar5 = thunk_FUN_004357f0(*(char *)pppppppuVar24);
                                        }
                                        if (iVar5 == 0) {
                                          ppppppuVar11 = *pppppppuVar24;
                                          uVar31 = uVar27;
                                          pcVar23 = thunk_FUN_00674af0(0x518);
                                          thunk_FUN_0064d0e0(this_00,-0xab,pcVar23,uVar31,
                                                             (int)ppppppuVar11);
                                        }
                                        else {
                                          *(uint **)(iVar5 + 0xfa + (int)local_15c * 4) = local_158;
                                        }
                                        pppppppuVar24 = pppppppuVar24 + 1;
                                        pAVar10 = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3)
                                        ;
                                        local_c = pAVar10;
                                      } while (pAVar10 != (AiFltClassTy *)0x0);
                                    }
                                  }
                                }
                                else if (iVar5 == 0x519) {
                                  iVar5 = thunk_FUN_0064e910((int)local_16c);
                                  if (iVar5 == 0) {
                                    iVar5 = -1;
                                    uVar31 = uVar27;
                                    pcVar23 = thunk_FUN_00674af0(0x519);
                                    thunk_FUN_0064d0e0(this_00,-0x7d,pcVar23,uVar31,iVar5);
                                  }
                                  else {
                                    (&DAT_0080e43b)[(int)local_164] = local_160;
                                  }
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                              if (iVar5 == 0x3e) {
switchD_00652b42_switchD:
                                switch(local_15c) {
                                case (uint ******)0x0:
                                  iVar32 = thunk_FUN_0064ea10((int)local_16c);
                                  if (iVar32 == 0) goto LAB_00652a99;
                                  switch(iVar5) {
                                  case 2:
                                    *(char **)(&this_00->field_0xde + (int)local_164 * 4) =
                                         (char *)((int)&local_160->field_0x0 +
                                                 *(int *)(&this_00->field_0xde + (int)local_164 * 4)
                                                 );
                                    break;
                                  case 5:
                                    *(AiFltClassTy **)(&this_00->field_0xde + (int)local_164 * 4) =
                                         local_160;
                                    break;
                                  case 0x17:
                                    if (local_160 == (AiFltClassTy *)0x0) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar27,-1);
                                    }
                                    else {
                                      *(int *)(&this_00->field_0xde + (int)local_164 * 4) =
                                           *(int *)(&this_00->field_0xde + (int)local_164 * 4) /
                                           (int)local_160;
                                    }
                                    break;
                                  case 0x2d:
                                    if (local_160 == (AiFltClassTy *)0x0) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar27,-1);
                                    }
                                    else {
                                      *(int *)(&this_00->field_0xde + (int)local_164 * 4) =
                                           *(int *)(&this_00->field_0xde + (int)local_164 * 4) %
                                           (int)local_160;
                                    }
                                    break;
                                  case 0x31:
                                    *(int *)(&this_00->field_0xde + (int)local_164 * 4) =
                                         *(int *)(&this_00->field_0xde + (int)local_164 * 4) *
                                         (int)local_160;
                                    break;
                                  case 0x3e:
                                    *(int *)(&this_00->field_0xde + (int)local_164 * 4) =
                                         *(int *)(&this_00->field_0xde + (int)local_164 * 4) -
                                         (int)local_160;
                                  }
                                  break;
                                case (uint ******)0x1:
                                  iVar32 = thunk_FUN_0064ea10((int)local_16c);
                                  if (iVar32 == 0) goto LAB_00652a99;
                                  switch(iVar5) {
                                  case 2:
                                    (&DAT_0080e43b)[(int)local_164] =
                                         (char *)((int)&local_160->field_0x0 +
                                                 (&DAT_0080e43b)[(int)local_164]);
                                    break;
                                  case 5:
                                    (&DAT_0080e43b)[(int)local_164] = local_160;
                                    break;
                                  case 0x17:
                                    if (local_160 == (AiFltClassTy *)0x0) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar27,-1);
                                    }
                                    else {
                                      (&DAT_0080e43b)[(int)local_164] =
                                           (int)(&DAT_0080e43b)[(int)local_164] / (int)local_160;
                                    }
                                    break;
                                  case 0x2d:
                                    if (local_160 == (AiFltClassTy *)0x0) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar27,-1);
                                    }
                                    else {
                                      (&DAT_0080e43b)[(int)local_164] =
                                           (int)(&DAT_0080e43b)[(int)local_164] % (int)local_160;
                                    }
                                    break;
                                  case 0x31:
                                    (&DAT_0080e43b)[(int)local_164] =
                                         (&DAT_0080e43b)[(int)local_164] * (int)local_160;
                                    break;
                                  case 0x3e:
                                    (&DAT_0080e43b)[(int)local_164] =
                                         (&DAT_0080e43b)[(int)local_164] - (int)local_160;
                                  }
                                  break;
                                case (uint ******)0x2:
                                  iVar32 = thunk_FUN_0064ea60((int)local_16c);
                                  if (iVar32 == 0) goto LAB_00652a99;
                                  switch(iVar5) {
                                  case 2:
                                    (&this_00[1].field_0000)[(int)local_164] =
                                         (char *)((int)&local_160->field_0x0 +
                                                 (&this_00[1].field_0000)[(int)local_164]);
                                    break;
                                  case 5:
                                    (&this_00[1].field_0000)[(int)local_164] = local_160;
                                    break;
                                  case 0x17:
                                    if (local_160 == (AiFltClassTy *)0x0) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar27,-1);
                                    }
                                    else {
                                      (&this_00[1].field_0000)[(int)local_164] =
                                           (int)(&this_00[1].field_0000)[(int)local_164] /
                                           (int)local_160;
                                    }
                                    break;
                                  case 0x2d:
                                    if (local_160 == (AiFltClassTy *)0x0) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar27,-1);
                                    }
                                    else {
                                      (&this_00[1].field_0000)[(int)local_164] =
                                           (int)(&this_00[1].field_0000)[(int)local_164] %
                                           (int)local_160;
                                    }
                                    break;
                                  case 0x31:
                                    (&this_00[1].field_0000)[(int)local_164] =
                                         (&this_00[1].field_0000)[(int)local_164] * (int)local_160;
                                    break;
                                  case 0x3e:
                                    (&this_00[1].field_0000)[(int)local_164] =
                                         (&this_00[1].field_0000)[(int)local_164] - (int)local_160;
                                  }
                                  break;
                                case (uint ******)0x3:
                                  iVar32 = thunk_FUN_0064eaa0((int)local_16c);
                                  if (iVar32 == 0) goto LAB_00652a99;
                                  if (iVar5 == 5) {
                                    Library::DKW::TBL::FUN_006b6020
                                              (*(int *)&this_00[1].field_0x84,(uint)local_164,
                                               (char *)local_160);
                                  }
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                              switch(iVar5) {
                              case 2:
                              case 5:
                              case 0x17:
                              case 0x2d:
                              case 0x31:
                                goto switchD_00652b42_switchD;
                              case 0x19:
                                iVar32 = thunk_FUN_0064e6c0((int)local_16c);
                                if (iVar32 == 0) goto LAB_00652a99;
                                if (local_174 != 0) {
                                  local_174 = 0;
                                  local_170 = local_164;
                                  pAVar10 = local_170;
                                  goto LAB_00659a80;
                                }
                                local_174 = 0;
                                break;
                              case 0x21:
                                iVar32 = thunk_FUN_0064e740((int)local_16c);
                                pAVar10 = local_164;
                                if (iVar32 == 0) goto LAB_00652a99;
                                goto LAB_00659a80;
                              case 0x23:
                                iVar32 = thunk_FUN_0064e680((int)local_16c);
                                if (iVar32 == 0) goto LAB_00652a99;
                                if (local_164 == (AiFltClassTy *)0x0) {
                                  local_170 = local_160;
                                  pAVar10 = local_170;
                                  goto LAB_00659a80;
                                }
                              }
                              goto switchD_00652a7f_caseD_3;
                            }
                            switch(iVar5) {
                            case 0x51b:
                              iVar32 = thunk_FUN_0064e9a0((int)local_16c);
                              if (iVar32 == 0) goto LAB_00652a99;
                              Library::DKW::TBL::FUN_006b6020
                                        (*(int *)&this_00[1].field_0x84,(uint)local_164,
                                         (char *)local_160);
                              break;
                            case 0x528:
                              bVar30 = thunk_FUN_0064eb20((int)local_16c);
                              if (CONCAT31(extraout_var,bVar30) != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  pAVar10 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_164,
                                                               (uint)local_160,(uint *)local_34);
                                  if (0 < (int)pAVar10) {
                                    pppppppuVar24 = local_34;
                                    local_c = pAVar10;
                                    pCVar17 = DAT_00801688;
                                    do {
                                      if (pCVar17 != (CPanelTy *)0x0) {
                                        thunk_FUN_004f9120(pCVar17,*(byte *)pppppppuVar24,'\x01',
                                                           local_15c);
                                        pCVar17 = DAT_00801688;
                                      }
                                      pppppppuVar24 = pppppppuVar24 + 1;
                                      local_c = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3);
                                    } while (local_c != (AiFltClassTy *)0x0);
                                  }
                                  break;
                                }
                              }
                              goto LAB_00652a99;
                            case 0x529:
                              iVar32 = thunk_FUN_0064eb60((int)local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  pAVar10 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_164,
                                                               (uint)local_160,(uint *)local_34);
                                  if (0 < (int)pAVar10) {
                                    pppppppuVar24 = local_34;
                                    local_c = pAVar10;
                                    pCVar17 = DAT_00801688;
                                    do {
                                      local_c = pAVar10;
                                      if (pCVar17 != (CPanelTy *)0x0) {
                                        thunk_FUN_004f9120(pCVar17,*(byte *)pppppppuVar24,'\0',0);
                                        pCVar17 = DAT_00801688;
                                      }
                                      pppppppuVar24 = pppppppuVar24 + 1;
                                      pAVar10 = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3);
                                      local_c = pAVar10;
                                    } while (pAVar10 != (AiFltClassTy *)0x0);
                                  }
                                  break;
                                }
                              }
                              goto LAB_00652a99;
                            case 0x52a:
                              iVar32 = thunk_FUN_0064eba0((int)local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                             (uint)local_160,(uint *)local_34);
                                  iVar32 = 0;
                                  if (0 < iVar5) {
                                    pppppppuVar24 = local_34;
                                    do {
                                      if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d) {
                                        if (DAT_00801688 != (CPanelTy *)0x0) {
                                          thunk_FUN_004f9260((char)local_15c);
                                        }
                                        break;
                                      }
                                      iVar32 = iVar32 + 1;
                                      pppppppuVar24 = pppppppuVar24 + 1;
                                    } while (iVar32 < iVar5);
                                  }
                                  break;
                                }
                              }
                              goto LAB_00652a99;
                            case 0x532:
                              bVar30 = thunk_FUN_0064ebe0((int)local_16c);
                              if (CONCAT31(extraout_var_00,bVar30) == 0) goto LAB_00652a99;
                              if (DAT_008016d8 != (void *)0x0) {
                                if (local_164 == (AiFltClassTy *)0x9) {
                                  iVar5 = (**(code **)(this_00->field_0000 + 0x18))();
                                  if (iVar5 == 8) {
                                    thunk_FUN_0052d320(DAT_008016d8,(char *)local_15c,8);
                                    break;
                                  }
                                }
                                iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160
                                                           ,(uint *)local_34);
                                iVar32 = 0;
                                if (0 < iVar5) {
                                  pppppppuVar24 = local_34;
                                  do {
                                    if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d) {
                                      thunk_FUN_0052d320(DAT_008016d8,(char *)local_15c,8);
                                      break;
                                    }
                                    iVar32 = iVar32 + 1;
                                    pppppppuVar24 = pppppppuVar24 + 1;
                                  } while (iVar32 < iVar5);
                                }
                              }
                              break;
                            case 0x533:
                              bVar30 = thunk_FUN_0064ec30((int)local_16c);
                              if (CONCAT31(extraout_var_01,bVar30) == 0) goto LAB_00652a99;
                              if (local_164 == (AiFltClassTy *)0x9) {
                                iVar5 = (**(code **)(this_00->field_0000 + 0x18))();
                                if (iVar5 == 8) {
                                  if (DAT_00801694 != (void *)0x0) {
                                    thunk_FUN_0051fac0(DAT_00801694,(char *)local_154,2,
                                                       (char)local_158,(int)local_15c * 1000);
                                  }
                                  break;
                                }
                              }
                              iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160,
                                                         (uint *)local_34);
                              iVar32 = 0;
                              if (0 < iVar5) {
                                pppppppuVar24 = local_34;
                                do {
                                  if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d) {
                                    if (DAT_00801694 != (void *)0x0) {
                                      thunk_FUN_0051fac0(DAT_00801694,(char *)local_154,2,
                                                         (char)local_158,(int)local_15c * 1000);
                                    }
                                    break;
                                  }
                                  iVar32 = iVar32 + 1;
                                  pppppppuVar24 = pppppppuVar24 + 1;
                                } while (iVar32 < iVar5);
                              }
                              break;
                            case 0x534:
                              bVar30 = thunk_FUN_0064ec80((int)local_16c);
                              if (CONCAT31(extraout_var_02,bVar30) == 0) goto LAB_00652a99;
                              if (local_164 == (AiFltClassTy *)0x9) {
                                iVar5 = (**(code **)(this_00->field_0000 + 0x18))();
                                if (iVar5 == 8) {
LAB_006536dd:
                                  if (DAT_00801688 != (CPanelTy *)0x0) {
                                    CPanelTy::OutText(DAT_00801688,(int)local_158,
                                                      (int)(local_154 + (1 - (int)local_158)),
                                                      local_15c);
                                  }
                                  break;
                                }
                              }
                              iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160,
                                                         (uint *)local_34);
                              iVar32 = 0;
                              if (0 < iVar5) {
                                pppppppuVar24 = local_34;
                                do {
                                  if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d)
                                  goto LAB_006536dd;
                                  iVar32 = iVar32 + 1;
                                  pppppppuVar24 = pppppppuVar24 + 1;
                                } while (iVar32 < iVar5);
                              }
                              break;
                            case 0x535:
                              bVar30 = thunk_FUN_0064ecd0((int)local_16c);
                              if (CONCAT31(extraout_var_03,bVar30) == 0) goto LAB_00652a99;
                              if (local_164 == (AiFltClassTy *)0x9) {
                                iVar5 = (**(code **)(this_00->field_0000 + 0x18))();
                                if (iVar5 == 8) {
LAB_00653778:
                                  if (DAT_00801688 != (CPanelTy *)0x0) {
                                    CPanelTy::OutText(DAT_00801688,(char *)local_158,local_15c);
                                  }
                                  break;
                                }
                              }
                              iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160,
                                                         (uint *)local_34);
                              iVar32 = 0;
                              if (0 < iVar5) {
                                pppppppuVar24 = local_34;
                                do {
                                  if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d)
                                  goto LAB_00653778;
                                  iVar32 = iVar32 + 1;
                                  pppppppuVar24 = pppppppuVar24 + 1;
                                } while (iVar32 < iVar5);
                              }
                              break;
                            case 0x536:
                              bVar30 = thunk_FUN_0064ed20((int)local_16c);
                              if (CONCAT31(extraout_var_04,bVar30) == 0) goto LAB_00652a99;
                              if (local_164 == (AiFltClassTy *)0x9) {
                                iVar5 = (**(code **)(this_00->field_0000 + 0x18))();
                                if (iVar5 == 8) {
                                  SoundClassTy::PlaySound_thunk
                                            ((SoundClassTy *)&g_sound,SOUND_MODE_12,
                                             (char *)local_15c,0,(SoundPosition *)0x0,0);
                                  break;
                                }
                              }
                              iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160,
                                                         (uint *)local_34);
                              iVar32 = 0;
                              if (0 < iVar5) {
                                pppppppuVar24 = local_34;
                                do {
                                  if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d) {
                                    SoundClassTy::PlaySound_thunk
                                              ((SoundClassTy *)&g_sound,SOUND_MODE_12,
                                               (char *)local_15c,0,(SoundPosition *)0x0,0);
                                    break;
                                  }
                                  iVar32 = iVar32 + 1;
                                  pppppppuVar24 = pppppppuVar24 + 1;
                                } while (iVar32 < iVar5);
                              }
                              break;
                            case 0x537:
                              bVar30 = thunk_FUN_0064ed70((int)local_16c);
                              if (CONCAT31(extraout_var_05,bVar30) == 0) goto LAB_00652a99;
                              if (local_164 == (AiFltClassTy *)0x9) {
                                iVar5 = (**(code **)(this_00->field_0000 + 0x18))();
                                if (iVar5 == 8) {
                                  if (DAT_00801688 != (CPanelTy *)0x0) {
                                    CPanelTy::PlayBriefing(DAT_00801688,(char *)local_15c);
                                  }
                                  break;
                                }
                              }
                              iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160,
                                                         (uint *)local_34);
                              iVar32 = 0;
                              if (0 < iVar5) {
                                pppppppuVar24 = local_34;
                                do {
                                  if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d) {
                                    if (DAT_00801688 != (CPanelTy *)0x0) {
                                      CPanelTy::PlayBriefing(DAT_00801688,(char *)local_15c);
                                    }
                                    break;
                                  }
                                  iVar32 = iVar32 + 1;
                                  pppppppuVar24 = pppppppuVar24 + 1;
                                } while (iVar32 < iVar5);
                              }
                              break;
                            case 0x546:
                              iVar32 = thunk_FUN_0064edc0((int)local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                             (uint)local_160,(uint *)local_34);
                                  iVar32 = 0;
                                  if (0 < iVar5) {
                                    pppppppuVar24 = local_34;
                                    do {
                                      if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d) {
                                        if (DAT_00802a88 != (VisibleClassTy *)0x0) {
                                          if ((int)local_14c < 0) {
                                            iVar5 = -0x10;
                                          }
                                          else {
                                            iVar5 = (int)local_14c * 0x19;
                                          }
                                          VisibleClassTy::VisHoleCreate
                                                    (DAT_00802a88,(int)local_15c,(int)local_158,
                                                     local_154,(uint)local_34[iVar32],local_150,
                                                     iVar5);
                                        }
                                        break;
                                      }
                                      iVar32 = iVar32 + 1;
                                      pppppppuVar24 = pppppppuVar24 + 1;
                                    } while (iVar32 < iVar5);
                                  }
                                  break;
                                }
                              }
                              goto LAB_00652a99;
                            case 0x547:
                            case 0x548:
                              iVar32 = thunk_FUN_0064ee00((int)local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  local_10 = (AiFltClassTy *)
                                             thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                (uint)local_160,(uint *)local_34);
                                  iVar32 = 0;
                                  if (0 < (int)local_10) {
                                    pppppppuVar24 = local_34;
                                    do {
                                      if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d) {
                                        if (DAT_00802a88 == (VisibleClassTy *)0x0) break;
                                        if (*(int *)(DAT_00802a88 + 0x114) == 0) {
                                          *(undefined4 *)(DAT_00802a88 + 0xf8) = 0;
                                        }
                                        else {
                                          *(uint *)(DAT_00802a88 + 0xf8) = (uint)(iVar5 == 0x547);
                                          iVar32 = DAT_00807598;
                                          if ((iVar5 == 0x547) != 0) {
                                            *(undefined4 *)(DAT_00807598 + 0x466) = 1;
                                            *(undefined4 *)(iVar32 + 0x2d8) = 1;
                                            break;
                                          }
                                        }
                                        iVar5 = DAT_00807598;
                                        *(undefined4 *)(DAT_00807598 + 0x466) = 0;
                                        *(undefined4 *)(iVar5 + 0x2d8) = 1;
                                        break;
                                      }
                                      iVar32 = iVar32 + 1;
                                      pppppppuVar24 = pppppppuVar24 + 1;
                                    } while (iVar32 < (int)local_10);
                                  }
                                  break;
                                }
                              }
                              goto LAB_00652a99;
                            case 0x549:
                              iVar32 = thunk_FUN_0064ee40(local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                             (uint)local_160,(uint *)local_34);
                                  iVar32 = 0;
                                  if (0 < iVar5) {
                                    pppppppuVar24 = local_34;
                                    do {
                                      if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d) {
                                        if (DAT_007fb2a0 != 0) {
                                          thunk_FUN_004ab530((int)local_154,(int)local_15c,
                                                             (int)local_158);
                                        }
                                        break;
                                      }
                                      iVar32 = iVar32 + 1;
                                      pppppppuVar24 = pppppppuVar24 + 1;
                                    } while (iVar32 < iVar5);
                                  }
                                  break;
                                }
                              }
                              goto LAB_00652a99;
                            case 0x54a:
                              iVar32 = thunk_FUN_0064ee90((int)local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  local_10 = (AiFltClassTy *)
                                             thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                (uint)local_160,(uint *)local_34);
                                  iVar32 = 0;
                                  if (0 < (int)local_10) {
                                    pppppppuVar24 = local_34;
LAB_00653bb7:
                                    if (*pppppppuVar24 != (uint ******)(uint)DAT_0080874d)
                                    goto code_r0x00653bbb;
                                    if (DAT_007fb2a0 != 0) {
                                      puVar28 = local_1c0;
                                      for (iVar32 = 8; iVar32 != 0; iVar32 = iVar32 + -1) {
                                        *puVar28 = 0;
                                        puVar28 = puVar28 + 1;
                                      }
                                      switch(local_15c) {
                                      case (uint ******)0x0:
                                        local_1b0 = 0x104;
                                        break;
                                      case (uint ******)0x1:
                                        local_1b0 = 0x105;
                                        break;
                                      case (uint ******)0x2:
                                        local_1b0 = 0x106;
                                        break;
                                      case (uint ******)0x3:
                                        local_1b0 = 0x107;
                                        break;
                                      default:
                                        iVar32 = -1;
                                        uVar27 = local_14;
                                        pcVar23 = thunk_FUN_00674af0(iVar5);
                                        thunk_FUN_0064d0e0(this_00,-0x7d,pcVar23,uVar27,iVar32);
                                        uVar27 = local_14;
                                        goto switchD_00652a7f_caseD_3;
                                      }
                                      (**(code **)(this_00->field_0000 + 0x30))(3,0x100,local_1c0);
                                      uVar27 = local_14;
                                    }
                                  }
                                  break;
                                }
                              }
                              goto LAB_00652a99;
                            case 0x54b:
                            case 0x54c:
                              iVar32 = thunk_FUN_0064eed0((int)local_16c);
                              if (iVar32 != 0) {
                                iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                  local_10 = (AiFltClassTy *)
                                             thunk_FUN_00668f50(this_00,(char *)local_164,
                                                                (uint)local_160,(uint *)local_34);
                                  iVar32 = 0;
                                  if (0 < (int)local_10) {
                                    pppppppuVar24 = local_34;
                                    do {
                                      if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d) {
                                        if (DAT_007fb2a0 != 0) {
                                          puVar28 = local_1c0;
                                          for (iVar32 = 8; iVar32 != 0; iVar32 = iVar32 + -1) {
                                            *puVar28 = 0;
                                            puVar28 = puVar28 + 1;
                                          }
                                          local_1b0 = (iVar5 != 0x54b) + 0x100;
                                          (**(code **)(this_00->field_0000 + 0x30))
                                                    (3,0x100,local_1c0);
                                          uVar27 = local_14;
                                        }
                                        break;
                                      }
                                      iVar32 = iVar32 + 1;
                                      pppppppuVar24 = pppppppuVar24 + 1;
                                    } while (iVar32 < (int)local_10);
                                  }
                                  break;
                                }
                              }
                              goto LAB_00652a99;
                            }
                            goto switchD_00652a7f_caseD_3;
                          }
                          switch(iVar5) {
                          case 0x54e:
                            iVar32 = thunk_FUN_0064ef50((int)local_16c);
                            if (iVar32 != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160
                                                           ,(uint *)local_34);
                                iVar32 = 0;
                                if (0 < iVar5) {
                                  pppppppuVar24 = local_34;
                                  do {
                                    if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d) {
                                      thunk_FUN_0052af90((byte)local_15c,(int)local_158,
                                                         (int)local_154);
                                      break;
                                    }
                                    iVar32 = iVar32 + 1;
                                    pppppppuVar24 = pppppppuVar24 + 1;
                                  } while (iVar32 < iVar5);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          default:
                            goto switchD_00652a7f_caseD_3;
                          case 0x55a:
                            iVar32 = thunk_FUN_0064f080((int)local_16c);
                            if (iVar32 != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                pAVar10 = (AiFltClassTy *)
                                          thunk_FUN_00668f50(this_00,(char *)local_164,
                                                             (uint)local_160,(uint *)local_34);
                                if (0 < (int)pAVar10) {
                                  pppppppuVar24 = local_34;
                                  local_c = pAVar10;
                                  do {
                                    ppppppuVar11 = *pppppppuVar24;
                                    (&DAT_00809950)[(int)ppppppuVar11] =
                                         ((uint *******)local_15c != (uint *******)0x1) + '\x01';
                                    if (ppppppuVar11 == (uint ******)(uint)DAT_0080874d) {
                                      DAT_0080c522 = (uint)((uint *******)local_15c ==
                                                           (uint *******)0x1);
                                    }
                                    pppppppuVar24 = pppppppuVar24 + 1;
                                    local_c = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3);
                                  } while (local_c != (AiFltClassTy *)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x55b:
                            bVar30 = thunk_FUN_0064f0c0((int)local_16c);
                            if (CONCAT31(extraout_var_06,bVar30) != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160
                                                           ,(uint *)local_34);
                                iVar32 = 0;
                                if (0 < iVar5) {
                                  pppppppuVar24 = local_34;
                                  do {
                                    if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d) {
                                      if ((*(char *)local_15c != '\0') &&
                                         ((DAT_008087a0 == '\x03' || (DAT_008087a0 == '\b')))) {
                                        Library::MSVCRT::FUN_0072e730
                                                  (&DAT_0080ef1e,(byte *)0x0,local_384,(byte *)0x0,
                                                   (byte *)0x0);
                                        Library::MSVCRT::__makepath
                                                  (&DAT_0080c632,(char *)0x0,(char *)local_384,
                                                   (char *)local_15c,(char *)0x0);
                                      }
                                      break;
                                    }
                                    iVar32 = iVar32 + 1;
                                    pppppppuVar24 = pppppppuVar24 + 1;
                                  } while (iVar32 < iVar5);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x55c:
                            iVar32 = thunk_FUN_0064f110(local_16c);
                            if (iVar32 != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160
                                                           ,(uint *)local_34);
                                iVar32 = 0;
                                if (0 < iVar5) {
                                  do {
                                    (&DAT_0080c947)[iVar32] = local_158;
                                    if (local_34[iVar32] == (uint ******)(uint)DAT_0080874d) {
                                      DAT_0080e301 = local_15c._0_1_;
                                    }
                                    iVar32 = iVar32 + 1;
                                  } while (iVar32 < iVar5);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x55d:
                            bVar30 = thunk_FUN_0064f160((int)local_16c);
                            if (CONCAT31(extraout_var_07,bVar30) != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160
                                                           ,(uint *)local_34);
                                iVar32 = 0;
                                if (0 < iVar5) {
                                  pppppppuVar24 = local_34;
LAB_006540b9:
                                  if (*pppppppuVar24 != (uint ******)(uint)DAT_0080874d)
                                  goto code_r0x006540bd;
                                  DAT_0080e300 = local_15c._0_1_;
                                  puVar28 = &DAT_0080e303;
                                  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
                                    *puVar28 = 0;
                                    puVar28 = puVar28 + 1;
                                  }
                                  Library::MSVCRT::_strncpy
                                            ((char *)&DAT_0080e303,(char *)local_158,0x1f);
                                  uVar27 = local_14;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x55e:
                            bVar30 = thunk_FUN_0064f1b0(local_16c);
                            if (CONCAT31(extraout_var_08,bVar30) != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160
                                                           ,(uint *)local_34);
                                iVar32 = 0;
                                if (0 < iVar5) {
                                  pppppppuVar24 = local_34;
                                  do {
                                    if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d) {
                                      DAT_0080e302 = local_15c._0_1_;
                                      DAT_0080e429 = (char)local_154;
                                      DAT_0080e428 = local_14c._0_1_;
                                      DAT_0080e427 = local_150._0_1_;
                                      _DAT_0080e432 = local_140;
                                      _DAT_0080e42a = local_148;
                                      _DAT_0080e42e = local_144;
                                      _DAT_0080e436 = local_13c;
                                      DAT_0080e43a = local_138._0_1_;
                                      if (DAT_008087a0 == '\x03') {
                                        Library::MSVCRT::FUN_0072e730
                                                  (&DAT_0080ef1e,(byte *)0x0,local_484,(byte *)0x0,
                                                   (byte *)0x0);
                                        Library::MSVCRT::__makepath
                                                  ((char *)&DAT_0080f33a,(char *)0x0,
                                                   (char *)local_484,(char *)local_158,(char *)0x0);
                                        wsprintfA(&DAT_0080e323,&DAT_007c6ee4,&DAT_00807784,
                                                  &DAT_0080f33a);
                                      }
                                      else if (DAT_008087a0 == '\b') {
                                        wsprintfA(&DAT_0080e323,&DAT_007c6ee4,&DAT_00807784,
                                                  local_158);
                                      }
                                      break;
                                    }
                                    iVar32 = iVar32 + 1;
                                    pppppppuVar24 = pppppppuVar24 + 1;
                                  } while (iVar32 < iVar5);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x55f:
                            bVar30 = thunk_FUN_0064ef90((int)local_16c);
                            if (CONCAT31(extraout_var_09,bVar30) != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160
                                                           ,(uint *)local_34);
                                iVar32 = 0;
                                if (0 < iVar5) {
                                  pppppppuVar24 = local_34;
                                  do {
                                    if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d) {
                                      iVar5 = Library::DKW::TBL::FUN_006b5aa0
                                                        ((int)DAT_0080c4cb,(char *)local_158);
                                      if (DAT_008016dc != (OptPanelTy *)0x0) {
                                        OptPanelTy::UpdateObjectives(DAT_008016dc);
                                      }
                                      if (-1 < iVar5) {
                                        *(int *)(&this_00->field_0xde + (int)local_15c * 4) = iVar5;
                                      }
                                      break;
                                    }
                                    iVar32 = iVar32 + 1;
                                    pppppppuVar24 = pppppppuVar24 + 1;
                                  } while (iVar32 < iVar5);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x560:
                            iVar32 = thunk_FUN_0064f000((int)local_16c);
                            if (iVar32 != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160
                                                           ,(uint *)local_34);
                                iVar32 = 0;
                                if (0 < iVar5) {
                                  pppppppuVar24 = local_34;
LAB_00654362:
                                  if (*pppppppuVar24 != (uint ******)(uint)DAT_0080874d)
                                  goto code_r0x00654366;
                                  FUN_006c87c0((int)DAT_0080c4cb,(uint)local_15c);
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
                            iVar32 = thunk_FUN_0064f040((int)local_16c);
                            if (iVar32 != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160
                                                           ,(uint *)local_34);
                                iVar32 = 0;
                                if (0 < iVar5) {
                                  pppppppuVar24 = local_34;
                                  do {
                                    if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d) {
                                      if (DAT_0080c4cb != (uint *)0x0) {
                                        FUN_006b5570((byte *)DAT_0080c4cb);
                                      }
                                      DAT_0080c4cb = Library::DKW::TBL::FUN_006b54f0
                                                               ((uint *)0x0,10,10);
                                      goto LAB_00654386;
                                    }
                                    iVar32 = iVar32 + 1;
                                    pppppppuVar24 = pppppppuVar24 + 1;
                                  } while (iVar32 < iVar5);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x562:
                            bVar30 = thunk_FUN_0064ef90((int)local_16c);
                            if (CONCAT31(extraout_var_10,bVar30) != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160
                                                           ,(uint *)local_34);
                                iVar32 = 0;
                                if (0 < iVar5) {
                                  pppppppuVar24 = local_34;
                                  do {
                                    if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d) {
                                      if (DAT_0080c4c7 == (uint *)0x0) {
                                        DAT_0080c4c7 = Library::DKW::TBL::FUN_006b54f0
                                                                 ((uint *)0x0,10,10);
                                      }
                                      iVar5 = Library::DKW::TBL::FUN_006b5aa0
                                                        ((int)DAT_0080c4c7,(char *)local_158);
                                      if (-1 < iVar5) {
                                        *(int *)(&this_00->field_0xde + (int)local_15c * 4) = iVar5;
                                      }
                                      break;
                                    }
                                    iVar32 = iVar32 + 1;
                                    pppppppuVar24 = pppppppuVar24 + 1;
                                  } while (iVar32 < iVar5);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x563:
                            iVar32 = thunk_FUN_0064f000((int)local_16c);
                            if (iVar32 != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160
                                                           ,(uint *)local_34);
                                iVar32 = 0;
                                if (0 < iVar5) {
                                  pppppppuVar24 = local_34;
                                  do {
                                    if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d) {
                                      if (DAT_0080c4c7 != (uint *)0x0) {
                                        FUN_006c87c0((int)DAT_0080c4c7,(uint)local_15c);
                                      }
                                      break;
                                    }
                                    iVar32 = iVar32 + 1;
                                    pppppppuVar24 = pppppppuVar24 + 1;
                                  } while (iVar32 < iVar5);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x564:
                            iVar32 = thunk_FUN_0064f040((int)local_16c);
                            if (iVar32 != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160
                                                           ,(uint *)local_34);
                                iVar32 = 0;
                                if (0 < iVar5) {
                                  pppppppuVar24 = local_34;
                                  do {
                                    if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d) {
                                      if (DAT_0080c4c7 != (uint *)0x0) {
                                        FUN_006b5570((byte *)DAT_0080c4c7);
                                      }
                                      DAT_0080c4c7 = Library::DKW::TBL::FUN_006b54f0
                                                               ((uint *)0x0,10,10);
                                      break;
                                    }
                                    iVar32 = iVar32 + 1;
                                    pppppppuVar24 = pppppppuVar24 + 1;
                                  } while (iVar32 < iVar5);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x565:
                          case 0x566:
                            iVar32 = thunk_FUN_0064f320((int)local_16c);
                            if (iVar32 != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if (((iVar32 != 8) ||
                                  (((uint *******)local_15c != (uint *******)0x9 &&
                                   (local_164 != (AiFltClassTy *)0x9)))) &&
                                 ((uint *******)local_15c != (uint *******)0xff)) {
                                iVar32 = thunk_FUN_00668f50(this_00,(char *)local_15c,0,
                                                            (uint *)local_34);
                                if (iVar32 == 1) {
                                  local_8 = local_34[0];
                                  pAVar10 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_164,
                                                               (uint)local_160,(uint *)local_34);
                                  local_10 = pAVar10;
                                  if (0 < (int)pAVar10) {
                                    pppppppuVar24 = local_34;
                                    local_1a0 = CONCAT31(local_1a0._1_3_,iVar5 == 0x565);
                                    local_c = pAVar10;
                                    do {
                                      local_c = pAVar10;
                                      thunk_FUN_0056a8d0(&DAT_00807620,
                                                         CONCAT31((int3)((uint)pAVar10 >> 8),
                                                                  *(undefined1 *)pppppppuVar24),
                                                         (byte)local_8,(char)local_1a0);
                                      pppppppuVar24 = pppppppuVar24 + 1;
                                      pAVar10 = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3);
                                      local_c = pAVar10;
                                    } while (pAVar10 != (AiFltClassTy *)0x0);
                                  }
                                  pvVar15 = DAT_008016e4;
                                  if ((DAT_008016e4 != (void *)0x0) &&
                                     (local_10 != (AiFltClassTy *)0x0)) {
                                    local_8 = (uint ******)((int)DAT_008016e4 + 0x181);
                                    *(undefined4 *)((int)DAT_008016e4 + 0x28) = 5;
                                    local_c = (AiFltClassTy *)0x8;
                                    do {
                                      if ((uint ******)*local_8 != (uint ******)0x0) {
                                        FUN_006e6080(pvVar15,2,*local_8,
                                                     (undefined4 *)((int)pvVar15 + 0x18));
                                      }
                                      local_8 = local_8 + 1;
                                      local_c = (AiFltClassTy *)((int)local_c + -1);
                                    } while (local_c != (AiFltClassTy *)0x0);
                                    local_c = (AiFltClassTy *)0x0;
                                  }
                                  goto switchD_00652a7f_caseD_3;
                                }
                              }
                            }
                            break;
                          case 0x567:
                            iVar32 = thunk_FUN_0064f360((int)local_16c);
                            if (iVar32 != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                local_10 = (AiFltClassTy *)
                                           thunk_FUN_00668f50(this_00,(char *)local_164,
                                                              (uint)local_160,(uint *)local_34);
                                if (0 < (int)local_10) {
                                  pppppppuVar24 = local_34;
                                  local_c = local_10;
                                  do {
                                    thunk_FUN_0056aa00(&DAT_00807620,*(byte *)pppppppuVar24,
                                                       (char)local_15c);
                                    pppppppuVar24 = pppppppuVar24 + 1;
                                    local_c = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3);
                                  } while (local_c != (AiFltClassTy *)0x0);
                                }
                                pvVar15 = DAT_008016e4;
                                if ((DAT_008016e4 != (void *)0x0) &&
                                   (local_10 != (AiFltClassTy *)0x0)) {
                                  local_8 = (uint ******)((int)DAT_008016e4 + 0x181);
                                  *(undefined4 *)((int)DAT_008016e4 + 0x28) = 5;
                                  local_c = (AiFltClassTy *)0x8;
                                  do {
                                    if ((uint ******)*local_8 != (uint ******)0x0) {
                                      FUN_006e6080(pvVar15,2,*local_8,
                                                   (undefined4 *)((int)pvVar15 + 0x18));
                                    }
                                    local_8 = local_8 + 1;
                                    local_c = (AiFltClassTy *)((int)local_c + -1);
                                  } while (local_c != (AiFltClassTy *)0x0);
                                  local_c = (AiFltClassTy *)0x0;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x568:
                            iVar32 = thunk_FUN_0064f3b0((int)local_16c);
                            if (iVar32 != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160
                                                           ,(uint *)local_34);
                                iVar32 = 0;
                                if (0 < iVar5) {
                                  pppppppuVar24 = local_34;
                                  do {
                                    if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d) {
                                      DAT_00808790 = 1;
                                      break;
                                    }
                                    iVar32 = iVar32 + 1;
                                    pppppppuVar24 = pppppppuVar24 + 1;
                                  } while (iVar32 < iVar5);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x56a:
                            iVar32 = thunk_FUN_0064f3f0((int)local_16c);
                            if (iVar32 == 0) break;
                            thunk_FUN_0056abc0(&DAT_00807620,(char *)local_164);
                            goto switchD_00652a7f_caseD_3;
                          case 0x578:
                            bVar30 = thunk_FUN_0064f430((int)local_16c);
                            if (CONCAT31(extraout_var_11,bVar30) != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                pAVar10 = (AiFltClassTy *)
                                          thunk_FUN_00668f50(this_00,(char *)local_164,
                                                             (uint)local_160,(uint *)local_34);
                                if (0 < (int)pAVar10) {
                                  pppppppuVar24 = local_34;
                                  local_c = pAVar10;
                                  do {
                                    pppppppuVar12 = (uint *******)local_15c;
                                    if ((int)local_15c < 0) {
                                      pppppppuVar12 = (uint *******)(DAT_00808a90 >> 8 & 0xff);
                                    }
                                    thunk_FUN_004d86a0((uint)*pppppppuVar24,(int)pppppppuVar12);
                                    pppppppuVar24 = pppppppuVar24 + 1;
                                    local_c = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3);
                                  } while (local_c != (AiFltClassTy *)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x579:
                            bVar30 = thunk_FUN_0064f470((int)local_16c);
                            if (CONCAT31(extraout_var_12,bVar30) != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                pAVar10 = (AiFltClassTy *)
                                          thunk_FUN_00668f50(this_00,(char *)local_164,
                                                             (uint)local_160,(uint *)local_34);
                                if (0 < (int)pAVar10) {
                                  pppppppuVar24 = local_34;
                                  local_c = pAVar10;
                                  do {
                                    pppppppuVar12 = (uint *******)local_15c;
                                    if ((int)local_15c < 0) {
                                      pppppppuVar12 = (uint *******)(DAT_00808a90 >> 0x10 & 0xff);
                                    }
                                    puVar13 = local_158;
                                    if ((int)local_158 < 0) {
                                      puVar13 = (uint *)(DAT_00808a90 >> 0x18);
                                    }
                                    thunk_FUN_004e51b0((int *)*pppppppuVar24,(uint *)pppppppuVar12,
                                                       puVar13);
                                    pppppppuVar24 = pppppppuVar24 + 1;
                                    local_c = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3);
                                  } while (local_c != (AiFltClassTy *)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x57a:
                            bVar30 = thunk_FUN_0064f4c0((int)local_16c);
                            if (CONCAT31(extraout_var_13,bVar30) == 0) break;
                            pAVar10 = local_164;
                            if ((int)local_164 < 0) {
                              pAVar10 = (AiFltClassTy *)(DAT_00808a90 & 0xff);
                            }
                            thunk_FUN_004d8760((int)pAVar10);
                            goto switchD_00652a7f_caseD_3;
                          case 0x57b:
                            iVar32 = thunk_FUN_0064f500(local_16c);
                            if (iVar32 != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                local_8 = local_15c;
                                if ((int)local_15c < 0) {
                                  local_8 = (uint ******)(uint)DAT_00808a9b;
                                }
                                pAVar10 = (AiFltClassTy *)
                                          thunk_FUN_00668f50(this_00,(char *)local_164,
                                                             (uint)local_160,(uint *)local_34);
                                if (0 < (int)pAVar10) {
                                  pppppppuVar24 = local_34;
                                  local_c = pAVar10;
                                  do {
                                    ppppppuVar11 = *pppppppuVar24;
                                    cVar3 = (&DAT_008087e8)[(int)ppppppuVar11 * 0x51];
                                    uVar22 = (undefined2)((uint)local_150 >> 0x10);
                                    if (cVar3 == '\x01') {
                                      if ((int)local_8 < 3) {
                                        if ((uint *******)local_8 == (uint *******)0x2) {
                                          __CreateObjPl(this_00,CONCAT22(uVar22,*(undefined2 *)
                                                                                 pppppppuVar24),0xc,
                                                        (int)local_158,(int)local_154,local_150,
                                                        0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                                0x10),
                                                                         *(undefined2 *)
                                                                          pppppppuVar24),1,
                                                        (int)local_158,(int)local_154,local_150,
                                                        0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                                0x10),
                                                                         *(undefined2 *)
                                                                          pppppppuVar24),1,
                                                        (int)local_158,(int)local_154,local_150,
                                                        0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                                0x10),
                                                                         *(undefined2 *)
                                                                          pppppppuVar24),2,
                                                        (int)local_158,(int)local_154,local_150,
                                                        0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                                0x10),
                                                                         *(undefined2 *)
                                                                          pppppppuVar24),3,
                                                        (int)local_158,(int)local_154,local_150,
                                                        0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                                0x10),
                                                                         *(undefined2 *)
                                                                          pppppppuVar24),6,
                                                        (int)local_158,(int)local_154,local_150,
                                                        0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        }
                                        else if ((uint *******)local_8 == (uint *******)0x0) {
                                          __CreateObjPl(this_00,CONCAT22(uVar22,*(undefined2 *)
                                                                                 pppppppuVar24),0xc,
                                                        (int)local_158,(int)local_154,local_150,
                                                        0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        }
                                        else {
                                          if ((uint *******)local_8 != (uint *******)0x1)
                                          goto LAB_00655324;
                                          __CreateObjPl(this_00,CONCAT22(uVar22,*(undefined2 *)
                                                                                 pppppppuVar24),0xc,
                                                        (int)local_158,(int)local_154,local_150,
                                                        0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                                0x10),
                                                                         *(undefined2 *)
                                                                          pppppppuVar24),1,
                                                        (int)local_158,(int)local_154,local_150,
                                                        0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                                0x10),
                                                                         *(undefined2 *)
                                                                          pppppppuVar24),1,
                                                        (int)local_158,(int)local_154,local_150,
                                                        0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                                0x10),
                                                                         *(undefined2 *)
                                                                          pppppppuVar24),2,
                                                        (int)local_158,(int)local_154,local_150,
                                                        0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        }
                                      }
                                      else {
joined_r0x00655322:
                                        if ((uint *******)local_8 != (uint *******)0xff) {
LAB_00655324:
                                          uVar27 = local_14;
                                          pcVar23 = thunk_FUN_00674af0(iVar5);
                                          thunk_FUN_0064d0e0(this_00,-0x7d,pcVar23,uVar27,
                                                             (int)ppppppuVar11);
                                        }
                                      }
                                    }
                                    else if (cVar3 == '\x02') {
                                      if (2 < (int)local_8) goto joined_r0x00655322;
                                      if ((uint *******)local_8 == (uint *******)0x2) {
                                        __CreateObjPl(this_00,CONCAT22(uVar22,*(undefined2 *)
                                                                               pppppppuVar24),0x18,
                                                      (int)local_158,(int)local_154,local_150,0xfffe
                                                      ,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0xd,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0xd,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0xe,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0xf,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0x12,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                      }
                                      else if ((uint *******)local_8 == (uint *******)0x0) {
                                        __CreateObjPl(this_00,CONCAT22(uVar22,*(undefined2 *)
                                                                               pppppppuVar24),0x18,
                                                      (int)local_158,(int)local_154,local_150,0xfffe
                                                      ,0xffffffff,(char *)0x0,100,1,0,0);
                                      }
                                      else {
                                        if ((uint *******)local_8 != (uint *******)0x1)
                                        goto LAB_00655324;
                                        __CreateObjPl(this_00,CONCAT22(uVar22,*(undefined2 *)
                                                                               pppppppuVar24),0x18,
                                                      (int)local_158,(int)local_154,local_150,0xfffe
                                                      ,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0xd,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0xd,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0xe,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                      }
                                    }
                                    else if (cVar3 == '\x03') {
                                      if (2 < (int)local_8) goto joined_r0x00655322;
                                      if ((uint *******)local_8 == (uint *******)0x2) {
                                        __CreateObjPl(this_00,CONCAT22(uVar22,*(undefined2 *)
                                                                               pppppppuVar24),0x19,
                                                      (int)local_158,(int)local_154,local_150,0xfffe
                                                      ,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0x19,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0x19,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0x1e,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0x1e,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0x1e,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0x20,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0x22,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                      }
                                      else if ((uint *******)local_8 == (uint *******)0x0) {
                                        __CreateObjPl(this_00,CONCAT22(uVar22,*(undefined2 *)
                                                                               pppppppuVar24),0x19,
                                                      (int)local_158,(int)local_154,local_150,0xfffe
                                                      ,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0x19,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0x19,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                      }
                                      else {
                                        if ((uint *******)local_8 != (uint *******)0x1)
                                        goto LAB_00655324;
                                        __CreateObjPl(this_00,CONCAT22(uVar22,*(undefined2 *)
                                                                               pppppppuVar24),0x19,
                                                      (int)local_158,(int)local_154,local_150,0xfffe
                                                      ,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0x19,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0x19,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0x1e,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0x1e,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       *(undefined2 *)pppppppuVar24)
                                                      ,0x1e,(int)local_158,(int)local_154,local_150,
                                                      0xfffe,0xffffffff,(char *)0x0,100,1,0,0);
                                      }
                                    }
                                    pppppppuVar24 = pppppppuVar24 + 1;
                                    local_c = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3);
                                    uVar27 = local_14;
                                  } while (local_c != (AiFltClassTy *)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x582:
                            iVar32 = thunk_FUN_0064f5a0((int)local_16c);
                            if (iVar32 != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                pAVar10 = (AiFltClassTy *)
                                          thunk_FUN_00668f50(this_00,(char *)local_164,
                                                             (uint)local_160,(uint *)local_34);
                                if (0 < (int)pAVar10) {
                                  pppppppuVar24 = local_34;
                                  local_c = pAVar10;
                                  uVar6 = extraout_ECX;
                                  uVar19 = extraout_EDX;
                                  do {
                                    switch(local_15c) {
                                    case (uint ******)0xdc:
                                      if (local_158 == (uint *)0x0) {
                                        thunk_FUN_004d88b0(*(char *)pppppppuVar24,local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        thunk_FUN_004d8800(*(char *)pppppppuVar24,(int)local_154);
                                      }
                                      else {
                                        thunk_FUN_004d87b0(*(char *)pppppppuVar24,(int)local_154);
                                      }
                                      break;
                                    case (uint ******)0xdd:
                                      if (local_158 == (uint *)0x0) {
                                        thunk_FUN_004d89f0(*(char *)pppppppuVar24,local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        thunk_FUN_004d8940(*(char *)pppppppuVar24,(int)local_154);
                                      }
                                      else {
                                        thunk_FUN_004d88f0(*(char *)pppppppuVar24,(int)local_154);
                                      }
                                      break;
                                    case (uint ******)0xde:
                                      if (local_158 == (uint *)0x0) {
                                        thunk_FUN_004d8b30(*(char *)pppppppuVar24,local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        thunk_FUN_004d8a80(*(char *)pppppppuVar24,(int)local_154);
                                      }
                                      else {
                                        thunk_FUN_004d8a30(*(char *)pppppppuVar24,(int)local_154);
                                      }
                                      break;
                                    case (uint ******)0xdf:
                                      if (local_158 == (uint *)0x0) {
                                        thunk_FUN_004b7140(CONCAT31((int3)((uint)uVar19 >> 8),
                                                                    *(char *)pppppppuVar24),
                                                           (int)local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        thunk_FUN_004b70d0(CONCAT31((int3)((uint)local_158 >> 8),
                                                                    *(char *)pppppppuVar24),
                                                           (int)local_154);
                                      }
                                      else {
                                        thunk_FUN_004b7080(CONCAT31((int3)((uint)uVar6 >> 8),
                                                                    *(char *)pppppppuVar24),
                                                           (int)local_154);
                                      }
                                      break;
                                    case (uint ******)0xe2:
                                      if (local_158 == (uint *)0x0) {
                                        thunk_FUN_004e4440((int)*pppppppuVar24,local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        thunk_FUN_004e43c0((int)*pppppppuVar24,(int)local_154);
                                      }
                                      else {
                                        thunk_FUN_004e4380((int)*pppppppuVar24,(int)local_154);
                                      }
                                      break;
                                    case (uint ******)0xe3:
                                      if (local_158 == (uint *)0x0) {
                                        thunk_FUN_004e41f0((int)*pppppppuVar24,local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        thunk_FUN_004e4330((int)*pppppppuVar24,(int)local_154);
                                      }
                                      else {
                                        thunk_FUN_004e4270((int)*pppppppuVar24,(int)local_154);
                                      }
                                    }
                                    if (*pppppppuVar24 == (uint ******)(uint)DAT_0080874d) {
                                      thunk_FUN_004d8b70((char)*pppppppuVar24);
                                    }
                                    thunk_FUN_004d78e0(*(char *)pppppppuVar24);
                                    pppppppuVar24 = pppppppuVar24 + 1;
                                    local_c = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3);
                                    uVar6 = extraout_ECX_00;
                                    uVar19 = extraout_EDX_00;
                                  } while (local_c != (AiFltClassTy *)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x583:
                            iVar32 = thunk_FUN_0064f5e0((int)local_16c);
                            if (iVar32 == 0) break;
                            if (local_164 == (AiFltClassTy *)0x0) {
                              thunk_FUN_004d8320(local_160);
                              goto switchD_00652a7f_caseD_3;
                            }
                            if ((int)local_164 < 1) {
                              local_c = local_160;
                              iVar5 = thunk_FUN_004d82b0(0);
                              if ((int)local_c < iVar5) {
                                iVar5 = thunk_FUN_004d82b0(0);
                                pcVar23 = (char *)(iVar5 - (int)local_c);
                                goto LAB_0065565b;
                              }
                            }
                            else {
                              local_c = local_160;
                              iVar5 = thunk_FUN_004d82b0(0);
                              pcVar23 = (char *)((int)&local_c->field_0x0 + iVar5);
LAB_0065565b:
                              thunk_FUN_004d8320(pcVar23);
                            }
                            thunk_FUN_004d82b0(0);
                            goto switchD_00652a7f_caseD_3;
                          case 0x584:
                            iVar32 = thunk_FUN_0064f620(local_16c);
                            if (iVar32 == 0) break;
                            thunk_FUN_0064e5c0((char)local_164,local_160,local_15c,local_158,
                                               local_154);
                            goto switchD_00652a7f_caseD_3;
                          case 0x585:
                            iVar32 = thunk_FUN_0064f6e0();
                            if (iVar32 == 0) break;
                            DAT_00808794 = thunk_FUN_0056f930(0x807620);
                            goto switchD_00652a7f_caseD_3;
                          case 0x58c:
                            iVar32 = thunk_FUN_0064f700(local_16c);
                            if (iVar32 == 0) break;
                            piVar25 = (int *)0x0;
                            sVar18 = (short)local_160;
                            sVar16 = (short)local_15c;
                            sVar4 = (short)local_158;
                            if (local_154 == (byte *)0x0) {
                              if ((((sVar18 < 0) || (DAT_007fb240 <= sVar18)) ||
                                  ((sVar16 < 0 || ((DAT_007fb242 <= sVar16 || (sVar4 < 0)))))) ||
                                 (DAT_007fb244 <= sVar4)) {
LAB_00655871:
                                piVar25 = (int *)0x0;
                              }
                              else {
                                piVar25 = *(int **)(DAT_007fb248 +
                                                   ((int)sVar4 * (int)DAT_007fb246 +
                                                    (int)sVar16 * (int)DAT_007fb240 + (int)sVar18) *
                                                   8);
                              }
                            }
                            else if (local_154 == (byte *)0x1) {
                              if (((((sVar18 < 0) || (DAT_007fb240 <= sVar18)) || (sVar16 < 0)) ||
                                  ((DAT_007fb242 <= sVar16 || (sVar4 < 0)))) ||
                                 (DAT_007fb244 <= sVar4)) goto LAB_00655871;
                              piVar25 = *(int **)(DAT_007fb248 + 4 +
                                                 ((int)sVar4 * (int)DAT_007fb246 +
                                                  (int)sVar16 * (int)DAT_007fb240 + (int)sVar18) * 8
                                                 );
                            }
                            else if (local_154 == (byte *)0x2) {
                              iVar5 = thunk_FUN_006785a0((byte *)0x0,-1,sVar18,sVar16,sVar4,1,1,1,
                                                         &LAB_00404c73,0);
                              if ((iVar5 == -1) && (DAT_00811984 != (int *)0x0)) {
                                piVar25 = DAT_00811984;
                              }
                            }
                            if ((piVar25 != (int *)0x0) && (local_164 != (AiFltClassTy *)0x0)) {
                              (**(code **)(*piVar25 + 0x70))(local_164);
                            }
                            goto switchD_00652a7f_caseD_3;
                          case 0x58d:
                            iVar32 = thunk_FUN_0064f780(local_16c);
                            if (iVar32 != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                            (uint)local_160,(uint *)local_34);
                                if (0 < iVar32) {
                                  local_10 = (AiFltClassTy *)local_34;
                                  local_8 = (uint ******)iVar32;
                                  do {
                                    local_c = local_144;
                                    uVar31 = uVar27;
                                    if ((int)local_144 < 0) {
                                      local_c = (AiFltClassTy *)0xfffe;
LAB_00655972:
                                      iVar32 = __CreateObjPl(this_00,CONCAT22((short)((uint)
                                                  local_158 >> 0x10),*(undefined2 *)local_10),
                                                  (short)local_15c,(int)local_158,(int)local_154,
                                                  local_150,local_c,(uint)local_14c,local_148,
                                                  local_140,local_13c,(int)local_138,local_134);
                                      if (iVar32 != 0) {
LAB_006559d0:
                                        ppppppuVar11 = *(uint *******)local_10;
LAB_006559d6:
                                        pcVar23 = thunk_FUN_00674af0(iVar5);
                                        iVar32 = -0xab;
                                        goto LAB_006559e3;
                                      }
                                    }
                                    else {
                                      if ((int)local_144 < 1) goto LAB_00655972;
                                      iVar32 = thunk_FUN_0042b760(CONCAT31((int3)((uint)local_144 >>
                                                                                 8),*(undefined1 *)
                                                                                     local_10),
                                                                  (uint)local_144);
                                      if (iVar32 != 0) {
                                        iVar32 = thunk_FUN_00423300(iVar32);
                                        if (iVar32 != 0) {
                                          if (((int)local_15c < 0x32) || (0x73 < (int)local_15c)) {
                                            bVar30 = false;
                                          }
                                          else {
                                            bVar30 = true;
                                          }
                                          if (((!bVar30) || (*(short *)(iVar32 + 0x7b) == 1)) &&
                                             (*(short *)(iVar32 + 0x7b) != -0x8000))
                                          goto LAB_00655972;
                                          goto LAB_006559d0;
                                        }
                                        ppppppuVar11 = *(uint *******)local_10;
                                        goto LAB_006559d6;
                                      }
                                      ppppppuVar11 = *(uint *******)local_10;
                                      pcVar23 = &DAT_008016a0;
                                      iVar32 = -0xaa;
LAB_006559e3:
                                      thunk_FUN_0064d0e0(this_00,iVar32,pcVar23,uVar31,
                                                         (int)ppppppuVar11);
                                    }
                                    local_10 = (AiFltClassTy *)((int)local_10 + 4);
                                    local_8 = (uint ******)((int)local_8 + -1);
                                  } while (local_8 != (uint ******)0x0);
                                  local_8 = (uint ******)0x0;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x58e:
                            iVar32 = thunk_FUN_0064f900(local_16c);
                            if (iVar32 != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160
                                                           ,(uint *)local_34);
                                if (0 < iVar5) {
                                  local_10 = (AiFltClassTy *)local_34;
                                  local_c = (AiFltClassTy *)iVar5;
                                  do {
                                    local_8 = (uint ******)
                                              thunk_FUN_00676170(*(uint *******)local_10);
                                    if ((uint *******)local_8 != (uint *******)0x0) {
                                      ppppppuVar26 = (uint ******)0x0;
                                      ppppppuVar11 = (uint ******)local_8[3];
                                      pppppppuVar24 = extraout_EDX_01;
                                      if (0 < (int)ppppppuVar11) {
                                        do {
                                          if (ppppppuVar26 < ppppppuVar11) {
                                            pppppppuVar24 = (uint *******)local_8[7];
                                            pppppppuVar12 =
                                                 (uint *******)
                                                 ((int)local_8[2] * (int)ppppppuVar26 +
                                                 (int)pppppppuVar24);
                                          }
                                          else {
                                            pppppppuVar12 = (uint *******)0x0;
                                          }
                                          STAllPlayersC::DestroyObjectMsg
                                                    (DAT_007fa174,
                                                     (undefined4 *)
                                                     CONCAT31((int3)((uint)local_15c >> 8),
                                                              *(undefined1 *)local_10),
                                                     CONCAT22((short)((uint)pppppppuVar24 >> 0x10),
                                                              *(ushort *)pppppppuVar12),CASE_1,
                                                     local_15c);
                                          ppppppuVar26 = (uint ******)((int)ppppppuVar26 + 1);
                                          ppppppuVar11 = (uint ******)local_8[3];
                                          pppppppuVar24 = (uint *******)local_8;
                                        } while ((int)ppppppuVar26 < (int)ppppppuVar11);
                                      }
                                      FUN_006ae110((byte *)local_8);
                                    }
                                    local_10 = (AiFltClassTy *)((int)local_10 + 4);
                                    local_c = (AiFltClassTy *)((int)local_c + -1);
                                  } while (local_c != (AiFltClassTy *)0x0);
                                  local_c = (AiFltClassTy *)0x0;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x58f:
                            iVar32 = thunk_FUN_0064f950(local_16c);
                            if (iVar32 != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                iVar5 = thunk_FUN_00668f50(this_00,(char *)local_164,(uint)local_160
                                                           ,(uint *)local_34);
                                if (0 < iVar5) {
                                  local_10 = (AiFltClassTy *)local_34;
                                  local_c = (AiFltClassTy *)iVar5;
                                  do {
                                    if ((char)local_154 == '\b') {
                                      cVar3 = *(char *)local_10;
                                    }
                                    else if (((char)local_154 < '\0') ||
                                            (cVar3 = (char)local_154, '\b' < (char)local_154)) {
                                      cVar3 = -1;
                                    }
                                    puVar13 = thunk_FUN_006775e0(*(uint *******)local_10,
                                                                 (uint)local_158,(uint)local_15c,
                                                                 local_150,cVar3,(short)local_14c,
                                                                 (short)local_148,(short)local_144,
                                                                 (short)local_140,(short)local_13c,
                                                                 (short)local_138,1);
                                    if (puVar13 != (uint *)0x0) {
                                      uVar27 = 0;
                                      if (0 < (int)puVar13[3]) {
                                        bVar30 = puVar13[3] != 0;
                                        uVar6 = extraout_EDX_02;
                                        do {
                                          if (bVar30) {
                                            puVar14 = (undefined2 *)
                                                      (puVar13[2] * uVar27 + puVar13[7]);
                                          }
                                          else {
                                            puVar14 = (undefined2 *)0x0;
                                          }
                                          STAllPlayersC::DestroyObjectMsg
                                                    (DAT_007fa174,
                                                     (undefined4 *)
                                                     CONCAT31((int3)((uint)local_134 >> 8),
                                                              *(char *)local_10),
                                                     CONCAT22((short)((uint)uVar6 >> 0x10),*puVar14)
                                                     ,CASE_1,local_134);
                                          uVar27 = uVar27 + 1;
                                          bVar30 = uVar27 < puVar13[3];
                                          uVar6 = extraout_EDX_03;
                                        } while ((int)uVar27 < (int)puVar13[3]);
                                      }
                                      FUN_006ae110((byte *)puVar13);
                                    }
                                    local_10 = (AiFltClassTy *)((int)local_10 + 4);
                                    local_c = (AiFltClassTy *)((int)local_c + -1);
                                  } while (local_c != (AiFltClassTy *)0x0);
                                  local_c = (AiFltClassTy *)0x0;
                                  uVar27 = local_14;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x590:
                            iVar32 = thunk_FUN_0064fb00(local_16c);
                            if (iVar32 != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                iVar32 = thunk_FUN_00668f50(this_00,(char *)local_164,
                                                            (uint)local_160,(uint *)local_34);
                                if (0 < iVar32) {
                                  local_8 = (uint ******)local_34;
                                  local_c = (AiFltClassTy *)iVar32;
                                  do {
                                    iVar32 = _CreateRCCont(this_00,CONCAT22((short)((uint)local_158
                                                                                   >> 0x10),
                                                                            *(ushort *)local_8),
                                                           (short)local_15c,(int)local_158,
                                                           (int)local_154,local_150,local_14c,
                                                           local_148,(int)local_144);
                                    if (iVar32 != 0) {
                                      ppppppuVar11 = (uint ******)*local_8;
                                      uVar31 = uVar27;
                                      pcVar23 = thunk_FUN_00674af0(iVar5);
                                      thunk_FUN_0064d0e0(this_00,-0xab,pcVar23,uVar31,
                                                         (int)ppppppuVar11);
                                    }
                                    local_8 = local_8 + 1;
                                    local_c = (AiFltClassTy *)((int)local_c + -1);
                                  } while (local_c != (AiFltClassTy *)0x0);
                                  local_c = (AiFltClassTy *)0x0;
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x591:
                            iVar32 = thunk_FUN_0064fb80(local_16c);
                            if (iVar32 != 0) {
                              iVar32 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar32 != 8) || (local_164 != (AiFltClassTy *)0x9)) {
                                pAVar10 = (AiFltClassTy *)
                                          thunk_FUN_00668f50(this_00,(char *)local_164,
                                                             (uint)local_160,(uint *)local_34);
                                if (0 < (int)pAVar10) {
                                  pppppppuVar24 = local_34;
                                  local_c = pAVar10;
                                  do {
                                    DAT_008118fc = 0;
                                    thunk_FUN_00677be0(*(short *)pppppppuVar24,(short)local_15c,
                                                       (byte *)local_158,(short)local_154,
                                                       (short)local_150,(short)local_14c,
                                                       (short)local_148,(short)local_144,
                                                       (short)local_140,&LAB_004050a1,&local_13c);
                                    pppppppuVar24 = pppppppuVar24 + 1;
                                    local_c = (AiFltClassTy *)((int)&local_c[-1].field_0284 + 3);
                                  } while (local_c != (AiFltClassTy *)0x0);
                                }
                                goto switchD_00652a7f_caseD_3;
                              }
                            }
                            break;
                          case 0x592:
                            iVar32 = thunk_FUN_0064fce0(local_16c);
                            if (iVar32 == 0) break;
                            iVar32 = _CreateArt(this_00,(short)local_164,(short)local_160,
                                                (int)local_15c,(int)local_158,local_154,
                                                (char *)local_150,local_14c,local_148);
LAB_00655f44:
                            if (iVar32 != 0) {
LAB_00655f4c:
                              iVar32 = -1;
                              uVar31 = uVar27;
                              pcVar23 = thunk_FUN_00674af0(iVar5);
                              thunk_FUN_0064d0e0(this_00,-0xab,pcVar23,uVar31,iVar32);
                            }
                            goto switchD_00652a7f_caseD_3;
                          }
LAB_00652a99:
                          iVar32 = -1;
                          uVar31 = uVar27;
                          pcVar23 = thunk_FUN_00674af0(iVar5);
                          thunk_FUN_0064d0e0(this_00,-0x7d,pcVar23,uVar31,iVar32);
switchD_00652a7f_caseD_3:
                          pAVar10 = (AiFltClassTy *)&local_170->field_0x1;
LAB_00659a80:
                          local_170 = pAVar10;
                          iVar5 = *(int *)(local_178 + 0xf);
                          pAVar10 = *(AiFltClassTy **)(iVar5 + 0xc);
                        } while ((int)local_170 < (int)pAVar10);
                      }
                    }
                    goto LAB_00659aae;
                  }
                  iVar32 = -1;
                  pcVar7 = thunk_FUN_00674af0(iVar5);
                  iVar5 = -0x7d;
                }
                thunk_FUN_0064d0e0(this_00,iVar5,pcVar7,uVar31,iVar32);
                *pcVar23 = '\x01';
                pcVar23[0xb] = '\0';
                pcVar23[0xc] = '\0';
                pcVar23[0xd] = '\0';
                pcVar23[0xe] = '\0';
              }
            }
            else if (*(int *)(pcVar23 + 0xb) != 0) {
              if (*(int *)(pcVar23 + 0xb) == 1) {
                *pcVar23 = '\0';
              }
              *(int *)(pcVar23 + 0xb) = *(int *)(pcVar23 + 0xb) + -1;
            }
LAB_00659aae:
            iVar5 = *(int *)&this_00->field_0x4ee;
            local_14 = uVar27 + 1;
            bVar30 = local_14 < *(uint *)(iVar5 + 0xc);
          } while ((int)local_14 < (int)*(uint *)(iVar5 + 0xc));
        }
        iVar2 = local_19c;
        iVar5 = this_00->field_04E2;
        iVar32 = *(int *)(iVar5 + 8);
        while (iVar2 < iVar32) {
          FUN_006b7830(iVar5,iVar32 - 1);
          iVar5 = this_00->field_04E2;
          iVar32 = *(int *)(iVar5 + 8);
        }
        if (local_194 == 0x456) {
          *(int *)&this_00->field_0xd6 = *(int *)&this_00->field_0xd6 + 1;
        }
        g_currentExceptionFrame = local_284.previous;
        return;
      }
      g_currentExceptionFrame = local_284.previous;
      if (local_180 != (byte *)0x0) {
        FUN_006ae110(local_180);
      }
      local_180 = (byte *)0x0;
      thunk_FUN_0064d0e0(local_188,iVar5,&DAT_008016a0,local_14,-1);
    }
  }
  return;
code_r0x00653bbb:
  iVar32 = iVar32 + 1;
  pppppppuVar24 = pppppppuVar24 + 1;
  if ((int)local_10 <= iVar32) goto switchD_00652a7f_caseD_3;
  goto LAB_00653bb7;
code_r0x00654366:
  iVar32 = iVar32 + 1;
  pppppppuVar24 = pppppppuVar24 + 1;
  if (iVar5 <= iVar32) goto switchD_00652a7f_caseD_3;
  goto LAB_00654362;
code_r0x006540bd:
  iVar32 = iVar32 + 1;
  pppppppuVar24 = pppppppuVar24 + 1;
  if (iVar5 <= iVar32) goto switchD_00652a7f_caseD_3;
  goto LAB_006540b9;
}

