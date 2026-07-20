
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [ST_RECOVERY:ai_event_get_message_v1]
   Source: E:\__titans\ai\ai_event.cpp
   Handles an STMessage for AiEventClassTy. Maps the external message ID to an internal AI event
   trigger, finds matching event records, evaluates their conditions, and interprets their action
   lists. */

void __thiscall AiEventClassTy::GetMessage(AiEventClassTy *this,STMessage *message)

{
  byte bVar1;
  AnonShape_006B7830_769CA2DF *pAVar2;
  PlayPanelTy *pPVar3;
  AnonShape_GLOBAL_00807598_0C6808FB *pAVar4;
  AiEventClassTy *this_00;
  char cVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  short *psVar10;
  undefined1 *puVar11;
  DArrayTy *pDVar12;
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
  AiFltClassTy *pAVar13;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  STGroupBoatC *pSVar14;
  uint uVar15;
  dword *pdVar16;
  uint *puVar17;
  undefined2 *puVar18;
  AiPlrClassTy *this_01;
  AnonShape_00679600_B8E418A8 *pAVar19;
  undefined3 extraout_var_14;
  void *pvVar20;
  undefined3 extraout_var_15;
  STJellyGunC *pSVar21;
  undefined3 extraout_var_16;
  AnonShape_0065DA10_8B0AA883 *pAVar22;
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
  short sVar23;
  CPanelTy *pCVar24;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  short sVar25;
  DArrayTy *pDVar26;
  undefined2 uVar28;
  undefined4 extraout_EDX;
  undefined4 uVar27;
  undefined4 extraout_EDX_00;
  DArrayTy *extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  char *pcVar29;
  STFishC *pSVar30;
  uint uVar31;
  uint uVar32;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar33;
  uint **ppuVar34;
  bool bVar35;
  int iVar36;
  int iVar37;
  dword dVar38;
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
  DArrayTy *local_190;
  DArrayTy *local_18c;
  AiEventClassTy *local_188;
  uint *local_184;
  DArrayTy *local_180;
  void *local_17c;
  char *local_178;
  int local_174;
  DArrayTy *local_170;
  undefined1 local_16c [12];
  DArrayTy *local_160;
  DArrayTy *local_15c;
  uint *local_158;
  byte *local_154;
  byte *local_150;
  char *local_14c;
  char *local_148;
  DArrayTy *local_144;
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
  DArrayTy local_34;
  uint local_14;
  AiFltClassTy *local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;
  
  local_180 = (DArrayTy *)0x0;
  local_198 = 0;
  if ((g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) &&
     (local_188 = this, iVar7 = sub_0065BD70(this,message,0), -1 < iVar7)) {
    local_194 = iVar7;
    uVar8 = (**(code **)(this->field_0000 + 0x18))();
    this->field_052B = uVar8;
    if ((iVar7 != 0x456) ||
       (((uint)PTR_00802a38->field_00E4 % 0x19 == this->field_00D2 ||
        (PTR_00802a38->field_00E4 == 1)))) {
      local_19c = *(int *)(this->field_04E2 + 8);
      local_284.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_284;
      iVar7 = Library::MSVCRT::__setjmp3(local_284.jumpBuffer,0,unaff_EDI,unaff_ESI);
      this_00 = local_188;
      if (iVar7 == 0) {
        local_14 = 0;
        iVar7 = local_188->field_04EE;
        bVar35 = *(int *)(iVar7 + 0xc) != 0;
        if (0 < *(int *)(iVar7 + 0xc)) {
          do {
            uVar32 = local_14;
            if (bVar35) {
              pcVar29 = (char *)(*(int *)(iVar7 + 8) * local_14 + *(int *)(iVar7 + 0x1c));
            }
            else {
              pcVar29 = (char *)0x0;
            }
            local_178 = pcVar29;
            if (*pcVar29 == '\0') {
              if (*(int *)(pcVar29 + 5) == local_194) {
                if (local_198 == 0) {
                  sub_0065BD70(this_00,message,1);
                  local_198 = 1;
                }
                iVar7 = thunk_FUN_00672440((int)&this_00->field_04FA,(int)*(short *)(pcVar29 + 9),
                                           (short *)local_16c);
                uVar15 = uVar32;
                if (iVar7 < 0) {
                  iVar37 = this_00->field_0084;
                  pcVar9 = &this_00->field_0x4;
                }
                else {
                  if (local_9c == '\b') {
                    if ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x0) {
                      *pcVar29 = '\x01';
                      pcVar29[0xb] = '\0';
                      pcVar29[0xc] = '\0';
                      pcVar29[0xd] = '\0';
                      pcVar29[0xe] = '\0';
                      iVar7 = *(int *)(pcVar29 + 0xf);
                      local_170 = (DArrayTy *)0x0;
                      local_174 = 0;
                      pDVar12 = *(DArrayTy **)(iVar7 + 0xc);
                      if (0 < (int)pDVar12) {
                        do {
                          if (local_170 < pDVar12) {
                            psVar10 = (short *)(*(int *)(iVar7 + 8) * (int)local_170 +
                                               *(int *)(iVar7 + 0x1c));
                          }
                          else {
                            psVar10 = (short *)0x0;
                          }
                          iVar7 = thunk_FUN_00672440((int)&this_00->field_04FA,(int)*psVar10,
                                                     (short *)local_16c);
                          if (iVar7 < 0) {
                            thunk_FUN_0064d0e0(this_00,iVar7,&this_00->field_0x4,uVar32,-1);
                            goto cf_switch_join_00659A73;
                          }
                          if (iVar7 != 0x19) {
                            local_174 = 0;
                          }
                          if (0x593 < iVar7) {
                            if (0x5c8 < iVar7) {
                              if (iVar7 < 0x76d) {
                                if (iVar7 != 0x76c) {
                                  switch(iVar7) {
                                  case 0x5dc:
                                    iVar37 = thunk_FUN_00651010((short *)local_16c);
                                    if (iVar37 != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          pDVar26 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            thunk_FUN_0064e300(pDVar26->flags,(char *)local_15c,
                                                               (short)local_158,(char)local_154,
                                                               (short)local_150,(char)local_14c,
                                                               (uint)local_148);
                                            pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5dd:
                                    bVar35 = thunk_FUN_00651120((int)local_16c);
                                    if (CONCAT31(extraout_var_15,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_10 = (AiFltClassTy *)&local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_10 >> 8),*(undefined1 *)local_10),
                                                  (uint)local_15c);
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar32,
                                                                 *(int *)local_10);
                                            }
                                            else {
                                              pSVar21 = (STJellyGunC *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (pSVar21 == (STJellyGunC *)0x0) {
                                                iVar37 = *(int *)local_10;
                                                uVar15 = uVar32;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                thunk_FUN_0064d0e0(this_00,-0xab,pcVar29,uVar15,
                                                                   iVar37);
                                              }
                                              else {
                                                thunk_FUN_0065d630(pSVar21,extraout_EDX_04);
                                              }
                                            }
                                            local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5de:
                                    bVar35 = thunk_FUN_00651160((int)local_16c);
                                    if (CONCAT31(extraout_var_16,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_10 = (AiFltClassTy *)&local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_10 >> 8),*(undefined1 *)local_10),
                                                  (uint)local_15c);
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar32,
                                                                 *(int *)local_10);
                                            }
                                            else {
                                              pAVar22 = (AnonShape_0065DA10_8B0AA883 *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (pAVar22 == (AnonShape_0065DA10_8B0AA883 *)0x0) {
                                                iVar37 = *(int *)local_10;
                                                uVar15 = uVar32;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                thunk_FUN_0064d0e0(this_00,-0xab,pcVar29,uVar15,
                                                                   iVar37);
                                              }
                                              else {
                                                thunk_FUN_0065e6c0(pAVar22,extraout_EDX_05);
                                              }
                                            }
                                            local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5df:
                                    bVar35 = thunk_FUN_00651160((int)local_16c);
                                    if (CONCAT31(extraout_var_17,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_10 = (AiFltClassTy *)&local_34;
                                          local_8 = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_10 >> 8),*(undefined1 *)local_10),
                                                  (uint)local_15c);
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar32,
                                                                 *(int *)local_10);
                                            }
                                            else {
                                              local_17c = (void *)thunk_FUN_00423300((int)pSVar14);
                                              if (local_17c == (void *)0x0) {
                                                iVar37 = *(int *)local_10;
                                                uVar15 = uVar32;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                thunk_FUN_0064d0e0(this_00,-0xab,pcVar29,uVar15,
                                                                   iVar37);
                                              }
                                              else {
                                                local_c = (DArrayTy *)
                                                          _GetStaffGrpExch(*(undefined4 *)local_10);
                                                if (local_c != (DArrayTy *)0x0) {
                                                  thunk_FUN_0065d940(local_17c,(uint *)local_c,0);
                                                  FUN_006ae110((byte *)local_c);
                                                }
                                              }
                                            }
                                            local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                            local_8 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                          } while (local_8 != (DArrayTy *)0x0);
                                          local_8 = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e0:
                                    bVar35 = thunk_FUN_006511a0((int)local_16c);
                                    if (CONCAT31(extraout_var_18,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          pDVar26 = &local_34;
                                          local_c = pDVar12;
                                          uVar8 = extraout_ECX_01;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)uVar8
                                                                                        >> 8),
                                                                                  (char)pDVar26->
                                                  flags),(uint)local_15c);
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar32,
                                                                 pDVar26->flags);
                                              uVar8 = extraout_ECX_02;
                                            }
                                            else {
                                              thunk_FUN_00424530(pSVar14,(uint)local_158);
                                              uVar8 = extraout_ECX_03;
                                            }
                                            pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e1:
                                    bVar35 = thunk_FUN_006511a0((int)local_16c);
                                    if (CONCAT31(extraout_var_19,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          pDVar26 = &local_34;
                                          local_c = pDVar12;
                                          uVar8 = extraout_ECX_04;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)uVar8
                                                                                        >> 8),
                                                                                  (char)pDVar26->
                                                  flags),(uint)local_15c);
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar32,
                                                                 pDVar26->flags);
                                              uVar8 = extraout_ECX_05;
                                            }
                                            else {
                                              thunk_FUN_00424620(pSVar14,(uint)local_158);
                                              uVar8 = extraout_ECX_06;
                                            }
                                            pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e2:
                                    bVar35 = thunk_FUN_006511e0((int)local_16c);
                                    if (CONCAT31(extraout_var_20,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_10 = (AiFltClassTy *)&local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_10 >> 8),*(undefined1 *)local_10),
                                                  (uint)local_15c);
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar32,
                                                                 *(int *)local_10);
                                            }
                                            else {
                                              local_17c = (void *)thunk_FUN_00423300((int)pSVar14);
                                              if (local_17c == (void *)0x0) {
                                                iVar37 = *(int *)local_10;
                                                uVar15 = uVar32;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                thunk_FUN_0064d0e0(this_00,-0xab,pcVar29,uVar15,
                                                                   iVar37);
                                              }
                                              else {
                                                pvVar20 = (void *)0x0;
                                                local_8 = (DArrayTy *)0x0;
                                                if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)
                                                {
                                                  pvVar20 = (void *)thunk_FUN_004357f0(*(char *)
                                                  local_10);
                                                }
                                                if (pvVar20 != (void *)0x0) {
                                                  local_8 = (DArrayTy *)
                                                            thunk_FUN_00678ef0(pvVar20,(byte *)
                                                  local_158);
                                                }
                                                if (local_8 == (DArrayTy *)0x0) {
                                                  thunk_FUN_0064d0e0(this_00,-4,local_158,uVar32,
                                                                     *(int *)local_10);
                                                }
                                                else {
                                                  thunk_FUN_0068e690(local_8,(int)local_17c);
                                                }
                                              }
                                            }
                                            local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e3:
                                    bVar35 = thunk_FUN_00651250((int)local_16c);
                                    if (CONCAT31(extraout_var_21,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_10 = (AiFltClassTy *)&local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_10 >> 8),*(undefined1 *)local_10),
                                                  (uint)local_15c);
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&DAT_008016a0,uVar32,
                                                                 *(int *)local_10);
                                            }
                                            else {
                                              iVar37 = thunk_FUN_00423300((int)pSVar14);
                                              if (iVar37 == 0) {
                                                iVar37 = *(int *)local_10;
                                                uVar15 = uVar32;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                thunk_FUN_0064d0e0(this_00,-0xab,pcVar29,uVar15,
                                                                   iVar37);
                                              }
                                              else {
                                                thunk_FUN_0065d600(iVar37);
                                              }
                                            }
                                            local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e4:
                                    iVar37 = thunk_FUN_00651290((short *)local_16c);
                                    if (iVar37 != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_10 = (AiFltClassTy *)&local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_10 >> 8),*(undefined1 *)local_10),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              iVar37 = *(int *)local_10;
                                              pcVar29 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_006577ae:
                                              thunk_FUN_0064d0e0(this_00,iVar36,pcVar29,uVar15,
                                                                 iVar37);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar13 == (AiFltClassTy *)0x0) ||
                                                  (pAVar13->field_007B == 1)) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                iVar37 = *(int *)local_10;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_006577ae;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              uStack_59 = SUB41(local_14c,0);
                                              local_58 = (undefined1)((uint)local_14c >> 8);
                                              local_60 = local_158._0_1_;
                                              iVar37 = (int)local_144 * 0x19;
                                              uStack_5b = SUB41(local_150,0);
                                              uStack_5a = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 1;
                                              uStack_57 = SUB41(local_148,0);
                                              uStack_56 = (undefined1)((uint)local_148 >> 8);
                                              uStack_55 = (undefined1)((uint)local_148 >> 0x10);
                                              uStack_54 = (undefined1)((uint)local_148 >> 0x18);
                                              uStack_53 = (undefined1)iVar37;
                                              uStack_52 = (undefined1)((uint)iVar37 >> 8);
                                              uStack_51 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_50 = (undefined1)((uint)iVar37 >> 0x18);
                                              iVar37 = local_140 * 0x19;
                                              uStack_4f = (undefined1)iVar37;
                                              local_4e = (undefined2)((uint)iVar37 >> 8);
                                              uStack_4c = (undefined1)((uint)iVar37 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e5:
                                    bVar35 = thunk_FUN_006514d0((short *)local_16c);
                                    if (CONCAT31(extraout_var_22,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_10 = (AiFltClassTy *)&local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_10 >> 8),*(undefined1 *)local_10),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              iVar37 = *(int *)local_10;
                                              pcVar29 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_00657a41:
                                              thunk_FUN_0064d0e0(this_00,iVar36,pcVar29,uVar15,
                                                                 iVar37);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar13 == (AiFltClassTy *)0x0) ||
                                                  (pAVar13->field_007B == 1)) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                iVar37 = *(int *)local_10;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_00657a41;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              uStack_59 = SUB41(local_14c,0);
                                              local_58 = (undefined1)((uint)local_14c >> 8);
                                              local_60 = local_158._0_1_;
                                              iVar37 = (int)local_148 * 0x19;
                                              uStack_5b = SUB41(local_150,0);
                                              uStack_5a = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 2;
                                              uStack_57 = (undefined1)iVar37;
                                              uStack_56 = (undefined1)((uint)iVar37 >> 8);
                                              uStack_55 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_54 = (undefined1)((uint)iVar37 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e6:
                                    iVar37 = thunk_FUN_006513c0((short *)local_16c);
                                    if (iVar37 != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_10 = (AiFltClassTy *)&local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_10 >> 8),*(undefined1 *)local_10),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              iVar37 = *(int *)local_10;
                                              pcVar29 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_006578fe:
                                              thunk_FUN_0064d0e0(this_00,iVar36,pcVar29,uVar15,
                                                                 iVar37);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar13 == (AiFltClassTy *)0x0) ||
                                                  (pAVar13->field_007B == 1)) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                iVar37 = *(int *)local_10;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_006578fe;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
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
                                              iVar37 = (int)local_144 * 0x19;
                                              local_68[0] = 3;
                                              uStack_57 = (undefined1)iVar37;
                                              uStack_56 = (undefined1)((uint)iVar37 >> 8);
                                              uStack_55 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_54 = (undefined1)((uint)iVar37 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e7:
                                    iVar37 = thunk_FUN_006515b0((short *)local_16c);
                                    if (iVar37 != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_00657bce:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              local_10 = (AiFltClassTy *)
                                                         thunk_FUN_00423300((int)pSVar14);
                                              if ((local_10 == (AiFltClassTy *)0x0) ||
                                                 (local_10->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_00657bce;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              uVar32 = (uint)local_158 & 0x3fffffff;
                                              local_68[1] = PTR_00802a38->field_00E4;
                                              local_60 = (undefined1)uVar32;
                                              uStack_5f = (undefined1)(uVar32 >> 8);
                                              uStack_5e = (undefined1)(uVar32 >> 0x10);
                                              uStack_5d = (undefined1)(uVar32 >> 0x18);
                                              uVar32 = (uint)local_154 & 0x3fffffff;
                                              uStack_54 = SUB41(local_14c,0);
                                              uStack_53 = (undefined1)((uint)local_14c >> 8);
                                              uStack_5c = (undefined1)uVar32;
                                              uStack_5b = (undefined1)(uVar32 >> 8);
                                              uStack_5a = (undefined1)(uVar32 >> 0x10);
                                              uStack_59 = (undefined1)(uVar32 >> 0x18);
                                              uVar32 = (uint)local_150 & 0x3fffffff;
                                              local_4e = (undefined2)local_140;
                                              local_58 = (undefined1)uVar32;
                                              uStack_57 = (undefined1)(uVar32 >> 8);
                                              uStack_56 = (undefined1)(uVar32 >> 0x10);
                                              uStack_55 = (undefined1)(uVar32 >> 0x18);
                                              uStack_52 = SUB41(local_148,0);
                                              uStack_51 = (undefined1)((uint)local_148 >> 8);
                                              local_68[0] = 4;
                                              uStack_50 = SUB41(local_144,0);
                                              uStack_4f = (undefined1)((uint)local_144 >> 8);
                                              uStack_4c = (undefined1)local_13c;
                                              pcVar29 = local_138;
                                              if (local_138 == (char *)0x0) {
                                                pcVar29 = &DAT_008016a0;
                                              }
                                              Library::MSVCRT::_strncpy(&cStack_4b,pcVar29,0xe);
                                              AiFltClassTy::GetAiMess(local_10,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e8:
                                    bVar35 = thunk_FUN_00651730((int)local_16c);
                                    if (CONCAT31(extraout_var_23,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_00657ccf:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if ((pAVar13 == (AiFltClassTy *)0x0) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_00657ccf;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
                                              local_68[0] = 5;
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e9:
                                    iVar37 = thunk_FUN_00651770((AnonShape_00651770_8F77396F *)
                                                                local_16c);
                                    if (iVar37 != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_00657dd9:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if ((pAVar13 == (AiFltClassTy *)0x0) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_00657dd9;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
                                              local_60 = local_158._0_1_;
                                              local_68[0] = 6;
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5ea:
                                    bVar35 = thunk_FUN_006517c0((short *)local_16c);
                                    if (CONCAT31(extraout_var_24,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_00657f1c:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar13 == (AiFltClassTy *)0x0) ||
                                                  (pAVar13->field_007B == 1)) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_00657f1c;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              uStack_59 = SUB41(local_14c,0);
                                              local_58 = (undefined1)((uint)local_14c >> 8);
                                              local_60 = local_158._0_1_;
                                              iVar37 = (int)local_148 * 0x19;
                                              uStack_5b = SUB41(local_150,0);
                                              uStack_5a = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 7;
                                              uStack_57 = (undefined1)iVar37;
                                              uStack_56 = (undefined1)((uint)iVar37 >> 8);
                                              uStack_55 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_54 = (undefined1)((uint)iVar37 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5eb:
                                    bVar35 = thunk_FUN_00651880((int)local_16c);
                                    if (CONCAT31(extraout_var_25,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_0065806e:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar13 == (AiFltClassTy *)0x0) ||
                                                  (pAVar13->field_007B == 1)) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_0065806e;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
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
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5ec:
                                    bVar35 = thunk_FUN_006518c0((int)local_16c);
                                    if (CONCAT31(extraout_var_26,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_00658177:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar13 == (AiFltClassTy *)0x0) ||
                                                  (pAVar13->field_007B == 1)) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_00658177;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
                                              local_68[0] = 9;
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5ed:
                                    iVar37 = thunk_FUN_00651df0((short *)local_16c);
                                    if (iVar37 != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_00658b70:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar13 == (AiFltClassTy *)0x0) ||
                                                  (pAVar13->field_007B == 1)) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_00658b70;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
                                              uStack_5e = SUB41(local_154,0);
                                              uStack_5d = (undefined1)((uint)local_154 >> 8);
                                              uStack_50 = SUB41(local_14c,0);
                                              uStack_4f = (undefined1)((uint)local_14c >> 8);
                                              local_4e = (undefined2)((uint)local_14c >> 0x10);
                                              local_60 = SUB41(local_158,0);
                                              uStack_5f = (undefined1)((uint)local_158 >> 8);
                                              iVar37 = (int)local_148 * 0x19;
                                              uStack_5c = SUB41(local_150,0);
                                              uStack_5b = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0x34;
                                              uStack_5a = (undefined1)iVar37;
                                              uStack_59 = (undefined1)((uint)iVar37 >> 8);
                                              local_58 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_57 = (undefined1)((uint)iVar37 >> 0x18);
                                              uStack_54 = (undefined1)local_140;
                                              uStack_53 = (undefined1)(local_140 >> 8);
                                              uStack_56 = SUB41(local_144,0);
                                              uStack_55 = (undefined1)((uint)local_144 >> 8);
                                              uStack_52 = (undefined1)local_13c;
                                              uStack_51 = (undefined1)((uint)local_13c >> 8);
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5ee:
                                    bVar35 = thunk_FUN_00651ed0((short *)local_16c);
                                    if (CONCAT31(extraout_var_29,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_00658d01:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              local_10 = (AiFltClassTy *)
                                                         thunk_FUN_00423300((int)pSVar14);
                                              if (((local_10 == (AiFltClassTy *)0x0) ||
                                                  (local_10->field_007B == 1)) ||
                                                 (local_10->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_00658d01;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
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
                                              pcVar29 = local_148;
                                              if (local_148 == (char *)0x0) {
                                                pcVar29 = &DAT_008016a0;
                                              }
                                              Library::MSVCRT::_strncpy
                                                        ((char *)&local_4a,pcVar29,0xe);
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
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5ef:
                                    bVar35 = thunk_FUN_00652030((short *)local_16c);
                                    if (CONCAT31(extraout_var_30,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_00658e8e:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar13 == (AiFltClassTy *)0x0) ||
                                                  (pAVar13->field_007B == 1)) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_00658e8e;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
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
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f0:
                                    bVar35 = thunk_FUN_00652100((short *)local_16c);
                                    if (CONCAT31(extraout_var_31,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_00658fc8:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar13 == (AiFltClassTy *)0x0) ||
                                                  (pAVar13->field_007B == 1)) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_00658fc8;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
                                              uStack_5a = SUB41(local_154,0);
                                              uStack_59 = (undefined1)((uint)local_154 >> 8);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              local_60 = SUB41(local_150,0);
                                              uStack_5f = (undefined1)((uint)local_150 >> 8);
                                              uStack_5e = (undefined1)((uint)local_150 >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_150 >> 0x18);
                                              iVar37 = (int)local_14c * 0x19;
                                              local_68[0] = 0x35;
                                              local_58 = (undefined1)iVar37;
                                              uStack_57 = (undefined1)((uint)iVar37 >> 8);
                                              uStack_56 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_55 = (undefined1)((uint)iVar37 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f1:
                                    bVar35 = thunk_FUN_00651900((short *)local_16c);
                                    if (CONCAT31(extraout_var_27,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_006582b3:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if ((pAVar13 == (AiFltClassTy *)0x0) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_006582b3;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
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
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f2:
                                    iVar37 = thunk_FUN_006519e0((short *)local_16c);
                                    if (iVar37 != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_00658416:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (pAVar13 == (AiFltClassTy *)0x0) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_00658416;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5b = SUB41(local_14c,0);
                                              uStack_5a = (undefined1)((uint)local_14c >> 8);
                                              local_60 = local_158._0_1_;
                                              iVar37 = (int)local_144 * 0x19;
                                              uStack_5d = SUB41(local_150,0);
                                              uStack_5c = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0xb;
                                              uStack_4f = SUB41(local_148,0);
                                              local_4e = (undefined2)((uint)local_148 >> 8);
                                              uStack_4c = (undefined1)((uint)local_148 >> 0x18);
                                              uStack_59 = (undefined1)iVar37;
                                              local_58 = (undefined1)((uint)iVar37 >> 8);
                                              uStack_57 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_56 = (undefined1)((uint)iVar37 >> 0x18);
                                              uStack_55 = (undefined1)local_140;
                                              uStack_54 = (undefined1)(local_140 >> 8);
                                              uStack_53 = (undefined1)local_13c;
                                              uStack_52 = (undefined1)((uint)local_13c >> 8);
                                              uStack_51 = SUB41(local_138,0);
                                              uStack_50 = (undefined1)((uint)local_138 >> 8);
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f3:
                                    iVar37 = thunk_FUN_00651b40((short *)local_16c);
                                    if (iVar37 != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_00658543:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar13 == (AiFltClassTy *)0x0) ||
                                                  (pAVar13->field_007B == 1)) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_00658543;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              local_60 = local_158._0_1_;
                                              local_68[0] = 0xc;
                                              iVar37 = (int)local_150 * 0x19;
                                              uStack_5b = (undefined1)iVar37;
                                              uStack_5a = (undefined1)((uint)iVar37 >> 8);
                                              uStack_59 = (undefined1)((uint)iVar37 >> 0x10);
                                              local_58 = (undefined1)((uint)iVar37 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f4:
                                    iVar37 = thunk_FUN_00651bd0((short *)local_16c);
                                    if (iVar37 != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_00658670:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar13 == (AiFltClassTy *)0x0) ||
                                                  (pAVar13->field_007B == 1)) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_00658670;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              local_60 = local_158._0_1_;
                                              local_68[0] = 0xd;
                                              iVar37 = (int)local_150 * 0x19;
                                              uStack_5b = (undefined1)iVar37;
                                              uStack_5a = (undefined1)((uint)iVar37 >> 8);
                                              uStack_59 = (undefined1)((uint)iVar37 >> 0x10);
                                              local_58 = (undefined1)((uint)iVar37 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f5:
                                    iVar37 = thunk_FUN_00651cd0((short *)local_16c);
                                    if (iVar37 != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_006587e2:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar13 == (AiFltClassTy *)0x0) ||
                                                  (pAVar13->field_007B == 1)) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_006587e2;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
                                              uStack_5e = SUB41(local_154,0);
                                              uStack_5d = (undefined1)((uint)local_154 >> 8);
                                              uStack_50 = SUB41(local_14c,0);
                                              uStack_4f = (undefined1)((uint)local_14c >> 8);
                                              local_4e = (undefined2)((uint)local_14c >> 0x10);
                                              local_60 = SUB41(local_158,0);
                                              uStack_5f = (undefined1)((uint)local_158 >> 8);
                                              iVar37 = (int)local_148 * 0x19;
                                              uStack_5c = SUB41(local_150,0);
                                              uStack_5b = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0xe;
                                              uStack_5a = (undefined1)iVar37;
                                              uStack_59 = (undefined1)((uint)iVar37 >> 8);
                                              local_58 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_57 = (undefined1)((uint)iVar37 >> 0x18);
                                              uStack_54 = (undefined1)local_140;
                                              uStack_53 = (undefined1)(local_140 >> 8);
                                              uStack_56 = SUB41(local_144,0);
                                              uStack_55 = (undefined1)((uint)local_144 >> 8);
                                              uStack_52 = (undefined1)local_13c;
                                              uStack_51 = (undefined1)((uint)local_13c >> 8);
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f6:
                                    bVar35 = thunk_FUN_00651db0((int)local_16c);
                                    if (CONCAT31(extraout_var_28,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_006588eb:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar13 == (AiFltClassTy *)0x0) ||
                                                  (pAVar13->field_007B == 1)) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_006588eb;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
                                              local_68[0] = 0xf;
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f7:
                                    iVar37 = thunk_FUN_00651c60((short *)local_16c);
                                    if (iVar37 != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_006589fe:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if ((pAVar13 == (AiFltClassTy *)0x0) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_006589fe;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
                                              local_60 = local_158._0_1_;
                                              local_68[0] = 0x10;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f8:
                                    bVar35 = thunk_FUN_006521c0((short *)local_16c);
                                    if (CONCAT31(extraout_var_32,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_00659143:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar13 == (AiFltClassTy *)0x0) ||
                                                  (pAVar13->field_007B == 1)) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_00659143;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
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
                                              iVar37 = (int)local_138 * 0x19;
                                              local_4e = (undefined2)local_140;
                                              local_68[0] = 0x36;
                                              uStack_4c = (undefined1)iVar37;
                                              cStack_4b = (char)((uint)iVar37 >> 8);
                                              local_4a._0_2_ = (undefined2)((uint)iVar37 >> 0x10);
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f9:
                                    bVar35 = thunk_FUN_00652460((short *)local_16c);
                                    if (CONCAT31(extraout_var_34,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_006594ec:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar13 == (AiFltClassTy *)0x0) ||
                                                  (pAVar13->field_007B == 1)) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_006594ec;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
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
                                              iVar37 = local_13c * 0x19;
                                              local_68[0] = 0x37;
                                              uStack_50 = (undefined1)iVar37;
                                              uStack_4f = (undefined1)((uint)iVar37 >> 8);
                                              local_4e = (undefined2)((uint)iVar37 >> 0x10);
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5fa:
                                    bVar35 = thunk_FUN_00652540((short *)local_16c);
                                    if (CONCAT31(extraout_var_35,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_00659640:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar13 == (AiFltClassTy *)0x0) ||
                                                  (pAVar13->field_007B == 1)) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_00659640;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
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
                                              iVar37 = (int)local_144 * 0x19;
                                              local_68[0] = 0x38;
                                              uStack_54 = (undefined1)iVar37;
                                              uStack_53 = (undefined1)((uint)iVar37 >> 8);
                                              uStack_52 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_51 = (undefined1)((uint)iVar37 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5fb:
                                    bVar35 = thunk_FUN_006525e0((short *)local_16c);
                                    if (CONCAT31(extraout_var_36,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_00659785:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar13 == (AiFltClassTy *)0x0) ||
                                                  (pAVar13->field_007B == 1)) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_00659785;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
                                              uStack_5a = SUB41(local_154,0);
                                              uStack_59 = (undefined1)((uint)local_154 >> 8);
                                              local_60 = SUB41(local_14c,0);
                                              uStack_5f = (undefined1)((uint)local_14c >> 8);
                                              uStack_5e = (undefined1)((uint)local_14c >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_14c >> 0x18);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              iVar37 = (int)local_148 * 0x19;
                                              local_58 = SUB41(local_150,0);
                                              uStack_57 = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0x39;
                                              uStack_56 = (undefined1)iVar37;
                                              uStack_55 = (undefined1)((uint)iVar37 >> 8);
                                              uStack_54 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_53 = (undefined1)((uint)iVar37 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5fc:
                                    bVar35 = thunk_FUN_00652670((short *)local_16c);
                                    if (CONCAT31(extraout_var_37,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_006598ca:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar13 == (AiFltClassTy *)0x0) ||
                                                  (pAVar13->field_007B == 1)) ||
                                                 (pAVar13->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_006598ca;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
                                              uStack_5a = SUB41(local_154,0);
                                              uStack_59 = (undefined1)((uint)local_154 >> 8);
                                              local_60 = SUB41(local_14c,0);
                                              uStack_5f = (undefined1)((uint)local_14c >> 8);
                                              uStack_5e = (undefined1)((uint)local_14c >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_14c >> 0x18);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              iVar37 = (int)local_148 * 0x19;
                                              local_58 = SUB41(local_150,0);
                                              uStack_57 = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0x3a;
                                              uStack_56 = (undefined1)iVar37;
                                              uStack_55 = (undefined1)((uint)iVar37 >> 8);
                                              uStack_54 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_53 = (undefined1)((uint)iVar37 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5fd:
                                    bVar35 = thunk_FUN_00652300((short *)local_16c);
                                    if (CONCAT31(extraout_var_33,bVar35) != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_0065937a:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              local_10 = (AiFltClassTy *)
                                                         thunk_FUN_00423300((int)pSVar14);
                                              uVar31 = local_140;
                                              if ((local_10 == (AiFltClassTy *)0x0) ||
                                                 (local_10->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_0065937a;
                                              }
                                              ppuVar34 = &local_20c;
                                              for (iVar37 = 0x12; puVar17 = local_158, iVar37 != 0;
                                                  iVar37 = iVar37 + -1) {
                                                *ppuVar34 = (uint *)0x0;
                                                ppuVar34 = ppuVar34 + 1;
                                              }
                                              *(undefined2 *)ppuVar34 = 0;
                                              local_20c = puVar17;
                                              local_208 = 0xffff;
                                              local_206 = 0x5622;
                                              local_204 = 0xfffffff0;
                                              local_200 = 0xfffe;
                                              if (-1 < (int)uVar31) {
                                                local_200 = (undefined2)uVar31;
                                              }
                                              local_1fe = (int)local_138 * 0x19;
                                              local_1f6 = local_154._0_2_;
                                              local_1f4 = local_150._0_2_;
                                              local_1f2 = local_14c._0_2_;
                                              if (((int)local_148 < 0) ||
                                                 (pcVar29 = local_148, 7 < (int)local_148)) {
                                                bVar1 = local_10->field_0x81;
                                                pcVar29 = (char *)(uint)bVar1;
                                                if (((char)bVar1 < '\0') || ('\a' < (char)bVar1)) {
                                                  pcVar29 = (char *)(uint)(byte)local_10->field_0x24
                                                  ;
                                                }
                                              }
                                              local_1f0 = SUB41(pcVar29,0);
                                              if (local_144 != (DArrayTy *)0x0) {
                                                Library::MSVCRT::_strncpy
                                                          (local_1ef,(char *)local_144,0xe);
                                                uVar31 = local_140;
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
                                              local_1e0 = -(uint)bVar1 & uVar31;
                                              puVar17 = local_240;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_236 = &local_20c;
                                              local_1ce = 1;
                                              local_240[0] = 0x68;
                                              local_237 = 1;
                                              AiFltClassTy::GetAiMess(local_10,local_240);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5fe:
                                    iVar37 = thunk_FUN_00652700((short *)local_16c);
                                    if (iVar37 != 0) {
                                      iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if ((iVar37 != 8) ||
                                         ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_
                                                                     ,(uint)local_160,
                                                                     &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)
                                                  local_8 >> 8),(char)local_8->flags),
                                                  (uint)local_15c);
                                            uVar15 = uVar32;
                                            if (pSVar14 == (STGroupBoatC *)0x0) {
                                              dVar38 = local_8->flags;
                                              pcVar29 = &DAT_008016a0;
                                              iVar37 = -0xaa;
LAB_00659a1c:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar29,uVar15,
                                                                 dVar38);
                                            }
                                            else {
                                              pAVar13 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if ((pAVar13 == (AiFltClassTy *)0x0) ||
                                                 (pAVar13->field_007B != 1)) {
                                                dVar38 = local_8->flags;
                                                pcVar29 = thunk_FUN_00674af0(iVar7);
                                                iVar37 = -0xab;
                                                goto LAB_00659a1c;
                                              }
                                              puVar17 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar17 = 0;
                                                puVar17 = puVar17 + 1;
                                              }
                                              local_68[1] = PTR_00802a38->field_00E4;
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
                                              iVar37 = local_140 * 0x19;
                                              uStack_52 = SUB41(local_148,0);
                                              uStack_51 = (undefined1)((uint)local_148 >> 8);
                                              uStack_50 = (undefined1)((uint)local_148 >> 0x10);
                                              uStack_4f = (undefined1)((uint)local_148 >> 0x18);
                                              local_68[0] = 0x3b;
                                              local_4e = (undefined2)iVar37;
                                              uStack_4c = (undefined1)((uint)iVar37 >> 0x10);
                                              cStack_4b = (char)((uint)iVar37 >> 0x18);
                                              AiFltClassTy::GetAiMess(pAVar13,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != (DArrayTy *)0x0);
                                          local_c = (DArrayTy *)0x0;
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    break;
                                  default:
                                    goto cf_switch_join_00659A73;
                                  }
                                  goto cf_common_join_00652A99;
                                }
                                iVar7 = thunk_FUN_006527d0((int)local_16c);
                                if (iVar7 == 0) {
                                  iVar7 = -1;
                                  uVar15 = uVar32;
                                  pcVar29 = thunk_FUN_00674af0(0x76c);
                                  thunk_FUN_0064d0e0(this_00,-0x7d,pcVar29,uVar15,iVar7);
                                }
                                else {
                                  DAT_0080c51e = (DArrayTy *)local_16c._8_4_;
                                }
                              }
                              goto cf_switch_join_00659A73;
                            }
                            if (iVar7 == 0x5c8) {
                              iVar7 = thunk_FUN_00650ad0((int)local_16c);
                              if (iVar7 == 0) {
                                iVar7 = -1;
                                uVar15 = uVar32;
                                pcVar29 = thunk_FUN_00674af0(0x5c8);
                                thunk_FUN_0064d0e0(this_00,-0x7d,pcVar29,uVar15,iVar7);
                              }
                              else {
                                iVar7 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar7 == 8) && ((DArrayTy *)local_16c._8_4_ == (DArrayTy *)0x9)
                                   ) {
                                  iVar7 = -1;
                                  uVar15 = uVar32;
                                  pcVar29 = thunk_FUN_00674af0(0x5c8);
                                  thunk_FUN_0064d0e0(this_00,-0x7d,pcVar29,uVar15,iVar7);
                                }
                                else {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar26 = &local_34;
                                    local_c = pDVar12;
                                    pDVar12 = local_15c;
                                    do {
                                      puVar11 = (undefined1 *)0xffffffff;
                                      if (((int)pDVar12 < 1) || (0x28 < (int)pDVar12)) {
                                        bVar35 = false;
                                      }
                                      else {
                                        bVar35 = true;
                                      }
                                      if (bVar35) {
                                        puVar11 = (undefined1 *)((int)&pDVar12[2].flags + 1);
                                      }
                                      if (((int)pDVar12 < 0x32) || (0x73 < (int)pDVar12)) {
                                        bVar35 = false;
                                      }
                                      else {
                                        bVar35 = true;
                                      }
                                      if (bVar35) {
                                        puVar11 = (undefined1 *)((int)&pDVar12[-2].count + 2);
                                      }
                                      if (-1 < (int)puVar11) {
                                        thunk_FUN_004e6080(pDVar26->flags,(int)puVar11,local_158);
                                        pDVar12 = local_15c;
                                      }
                                      pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != (DArrayTy *)0x0);
                                  }
                                }
                              }
                              goto cf_switch_join_00659A73;
                            }
                            switch(iVar7) {
                            case 0x594:
                              iVar37 = thunk_FUN_0064feb0((int)local_16c);
                              if (iVar37 == 0) break;
                              if (local_160 != (DArrayTy *)0x0) {
                                _EnumArt(0,(byte *)local_16c._8_4_,0,0,0,-1,-1,-1,&LAB_004012cb,
                                         local_160);
                              }
                              goto cf_switch_join_00659A73;
                            case 0x595:
                              iVar37 = thunk_FUN_0064fef0((short *)local_16c);
                              if (iVar37 == 0) break;
                              if ((((DArrayTy *)local_16c._8_4_ == (DArrayTy *)0xdd) ||
                                  ((DArrayTy *)local_16c._8_4_ == (DArrayTy *)0xde)) ||
                                 ((DArrayTy *)local_16c._8_4_ == (DArrayTy *)0xe0)) {
                                bVar35 = true;
                              }
                              else {
                                bVar35 = false;
                              }
                              if (bVar35) {
                                local_18c = local_160;
                                local_190 = local_15c;
                                local_184 = local_158;
                                iVar37 = thunk_FUN_004b1cf0(local_16c._8_4_,(int *)&local_18c,
                                                            (int *)&local_190,(int *)&local_184);
                                if (iVar37 == 0) goto LAB_00655f4c;
                                thunk_FUN_00580450(local_18c,local_190,local_184,local_16c._8_4_,
                                                   local_154);
                              }
                              goto cf_switch_join_00659A73;
                            case 0x596:
                              iVar37 = thunk_FUN_0064ff70((short *)local_16c);
                              if (iVar37 == 0) break;
                              DAT_008118fc = 0;
                              _EnumRCField((short)local_16c._8_4_,(short)local_160,(short)local_15c,
                                           (short)local_158,(short)local_154,(short)local_150,
                                           (short)local_14c,&LAB_004047e1,&local_148);
                              goto cf_switch_join_00659A73;
                            case 0x597:
                              iVar37 = thunk_FUN_00650090((short *)local_16c);
                              if (iVar37 == 0) break;
                              _EnumRCField((short)local_15c,(short)local_158,(short)local_154,
                                           (short)local_150,(short)local_14c,(short)local_148,
                                           (short)local_144,&LAB_00405b6e,
                                           (int)local_160 << 0x10 | local_16c._8_4_ & 0xffff);
                              goto cf_switch_join_00659A73;
                            case 0x598:
                              iVar37 = thunk_FUN_006501a0((short *)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = _CreateDest(this_00,(short)local_16c._8_4_,(short)local_160
                                                     ,(short)local_15c,(short)local_158,
                                                     (short)local_154,(char *)local_150,local_14c,
                                                     local_148);
                                goto LAB_00655f44;
                              }
                              break;
                            case 0x599:
                              iVar37 = thunk_FUN_00650240((short *)local_16c);
                              if (iVar37 == 0) break;
                              DAT_008118fc = 0;
                              _EnumDest((byte *)local_160,(char)local_16c._8_4_,(short)local_15c,
                                        (short)local_158,(short)local_154,(short)local_150,
                                        (short)local_14c,(short)local_148,&LAB_0040191a,&local_144);
                              goto cf_switch_join_00659A73;
                            case 0x59a:
                              iVar37 = thunk_FUN_00650370((int)local_16c);
                              if (iVar37 == 0) break;
                              if (local_160 != (DArrayTy *)0x0) {
                                _EnumDest((byte *)local_16c._8_4_,-1,0,0,0,-1,-1,-1,&LAB_00403e18,
                                          local_160);
                              }
                              goto cf_switch_join_00659A73;
                            case 0x59b:
                              iVar37 = thunk_FUN_006503b0((short *)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    local_8 = &local_34;
                                    local_c = pDVar12;
                                    do {
                                      iVar37 = _CreateMine(this_00,(ushort)local_8->flags,
                                                           (short)local_15c,(int)local_158,
                                                           (int)local_154,local_150,
                                                           (ushort)local_14c,local_148,local_144,
                                                           local_140);
                                      if (iVar37 != 0) {
                                        dVar38 = local_8->flags;
                                        uVar15 = uVar32;
                                        pcVar29 = thunk_FUN_00674af0(iVar7);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar29,uVar15,dVar38);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != (DArrayTy *)0x0);
                                    local_c = (DArrayTy *)0x0;
                                  }
                                  goto cf_switch_join_00659A73;
                                }
                              }
                              break;
                            case 0x59c:
                              iVar37 = thunk_FUN_00650480((short *)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar26 = &local_34;
                                    local_c = pDVar12;
                                    do {
                                      DAT_008118fc = 0;
                                      _EnumMines(pDVar26->flags,(short)local_15c,(char)local_158,
                                                 local_154,(short)local_150,(short)local_14c,
                                                 (short)local_148,(short)local_144,(short)local_140,
                                                 (short)local_13c,&LAB_004037d8,&local_138);
                                      pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != (DArrayTy *)0x0);
                                  }
                                  goto cf_switch_join_00659A73;
                                }
                              }
                              break;
                            case 0x59d:
                              iVar37 = thunk_FUN_00650600((short *)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar26 = &local_34;
                                    local_c = pDVar12;
                                    do {
                                      DAT_008118fc = 0;
                                      _EnumMines(pDVar26->flags,(short)local_158,(char)local_154,
                                                 local_150,(short)local_14c,(short)local_148,
                                                 (short)local_144,(short)local_140,(short)local_13c,
                                                 (short)local_138,&LAB_004035fd,local_15c);
                                      pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != (DArrayTy *)0x0);
                                  }
                                  goto cf_switch_join_00659A73;
                                }
                              }
                              break;
                            default:
                              goto cf_switch_join_00659A73;
                            case 0x5aa:
                              iVar37 = thunk_FUN_00650760((short *)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar26 = &local_34;
                                    local_c = pDVar12;
                                    do {
                                      thunk_FUN_004e76e0(pDVar26->flags,&local_15c->flags,
                                                         (char)local_158);
                                      pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != (DArrayTy *)0x0);
                                  }
                                  goto cf_switch_join_00659A73;
                                }
                              }
                              break;
                            case 0x5ab:
                              iVar37 = thunk_FUN_00650760((short *)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar26 = &local_34;
                                    local_c = pDVar12;
                                    do {
                                      thunk_FUN_004e7980((uint *)pDVar26->flags,(int)local_15c,
                                                         (char)local_158);
                                      pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != (DArrayTy *)0x0);
                                  }
                                  goto cf_switch_join_00659A73;
                                }
                              }
                              break;
                            case 0x5ac:
                              iVar37 = thunk_FUN_00650820((short *)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    local_8 = &local_34;
                                    do {
                                      local_c = pDVar12;
                                      this_01 = (AiPlrClassTy *)
                                                thunk_FUN_004357f0((char)local_8->flags);
                                      if (this_01 == (AiPlrClassTy *)0x0) {
                                        dVar38 = local_8->flags;
                                        uVar15 = uVar32;
                                        pcVar29 = thunk_FUN_00674af0(iVar7);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar29,uVar15,dVar38);
                                      }
                                      else {
                                        AiPlrClassTy::SetTech
                                                  (this_01,(int)local_15c,(int)local_158,
                                                   (int)local_154,0xff);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      pDVar12 = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (pDVar12 != (DArrayTy *)0x0);
                                    local_c = (DArrayTy *)0x0;
                                  }
                                  goto cf_switch_join_00659A73;
                                }
                              }
                              break;
                            case 0x5ad:
                              iVar37 = thunk_FUN_006508c0((short *)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar26 = &local_34;
                                    local_c = pDVar12;
                                    do {
                                      thunk_FUN_004e6310(pDVar26->flags,(uint)local_15c,
                                                         (uint)local_158);
                                      pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != (DArrayTy *)0x0);
                                  }
                                  goto cf_switch_join_00659A73;
                                }
                              }
                              break;
                            case 0x5ae:
                              iVar37 = thunk_FUN_006509e0((int)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar26 = &local_34;
                                    local_c = pDVar12;
                                    do {
                                      thunk_FUN_004e75f0(pDVar26->flags);
                                      pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != (DArrayTy *)0x0);
                                  }
                                  goto cf_switch_join_00659A73;
                                }
                              }
                              break;
                            case 0x5af:
                              iVar37 = thunk_FUN_00650a20((short *)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    local_8 = &local_34;
                                    do {
                                      local_c = pDVar12;
                                      pvVar20 = (void *)thunk_FUN_004357f0((char)local_8->flags);
                                      if (pvVar20 == (void *)0x0) {
                                        dVar38 = local_8->flags;
                                        uVar15 = uVar32;
                                        pcVar29 = thunk_FUN_00674af0(iVar7);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar29,uVar15,dVar38);
                                      }
                                      else {
                                        thunk_FUN_0067b210(pvVar20,(int)local_15c,(int)local_158);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      pDVar12 = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (pDVar12 != (DArrayTy *)0x0);
                                    local_c = (DArrayTy *)0x0;
                                  }
                                  goto cf_switch_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b0:
                              iVar37 = thunk_FUN_00650a90((int)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    local_8 = &local_34;
                                    do {
                                      local_c = pDVar12;
                                      iVar37 = thunk_FUN_004357f0((char)local_8->flags);
                                      if (iVar37 == 0) {
                                        dVar38 = local_8->flags;
                                        uVar15 = uVar32;
                                        pcVar29 = thunk_FUN_00674af0(iVar7);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar29,uVar15,dVar38);
                                      }
                                      else {
                                        thunk_FUN_0067b260(iVar37);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      pDVar12 = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (pDVar12 != (DArrayTy *)0x0);
                                    local_c = (DArrayTy *)0x0;
                                  }
                                  goto cf_switch_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b1:
                              iVar37 = thunk_FUN_006507e0((int)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar26 = &local_34;
                                    local_c = pDVar12;
                                    do {
                                      thunk_FUN_004e7d70(pDVar26->flags);
                                      pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != (DArrayTy *)0x0);
                                  }
                                  goto cf_switch_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b2:
                              iVar37 = thunk_FUN_006507e0((int)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar26 = &local_34;
                                    local_c = pDVar12;
                                    do {
                                      thunk_FUN_004e7e10((uint *)pDVar26->flags);
                                      pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != (DArrayTy *)0x0);
                                  }
                                  goto cf_switch_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b3:
                              iVar37 = thunk_FUN_00650940((short *)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar26 = &local_34;
                                    local_c = pDVar12;
                                    do {
                                      thunk_FUN_004e7390(pDVar26->flags,(uint)local_15c,
                                                         (uint)local_158,(int)local_154);
                                      pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != (DArrayTy *)0x0);
                                  }
                                  goto cf_switch_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b4:
                              iVar37 = thunk_FUN_00650b10((short *)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar26 = &local_34;
                                    local_8 = pDVar12;
                                    do {
                                      local_c = (DArrayTy *)0xffffffff;
                                      local_8 = pDVar12;
                                      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
                                        iVar7 = 0;
                                      }
                                      else {
                                        iVar7 = thunk_FUN_004357f0((char)pDVar26->flags);
                                      }
                                      if (iVar7 != 0) {
                                        local_c = (DArrayTy *)
                                                  thunk_FUN_00679120((byte *)local_15c,
                                                                     (int)local_158,(int)local_154,
                                                                     (int)local_150);
                                      }
                                      if ((int)local_c < 0) {
                                        thunk_FUN_0064d0e0(this_00,-4,local_15c,uVar32,
                                                           pDVar26->flags);
                                      }
                                      pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                      pDVar12 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                      local_8 = pDVar12;
                                    } while (pDVar12 != (DArrayTy *)0x0);
                                  }
                                  goto cf_switch_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b5:
                              iVar37 = thunk_FUN_00650f50((int)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    local_8 = &local_34;
                                    do {
                                      local_c = pDVar12;
                                      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
                                        pAVar19 = (AnonShape_00679600_B8E418A8 *)0x0;
                                      }
                                      else {
                                        pAVar19 = (AnonShape_00679600_B8E418A8 *)
                                                  thunk_FUN_004357f0((char)local_8->flags);
                                      }
                                      if (pAVar19 == (AnonShape_00679600_B8E418A8 *)0x0) {
                                        dVar38 = local_8->flags;
                                        uVar15 = uVar32;
                                        pcVar29 = thunk_FUN_00674af0(iVar7);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar29,uVar15,dVar38);
                                      }
                                      else {
                                        pAVar19->field_0644 = (char)local_15c;
                                        pAVar19->field_0640 = local_158;
                                        thunk_FUN_00679600(pAVar19);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      pDVar12 = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (pDVar12 != (DArrayTy *)0x0);
                                    local_c = (DArrayTy *)0x0;
                                  }
                                  goto cf_switch_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b6:
                              bVar35 = thunk_FUN_00650f90((short *)local_16c);
                              if (CONCAT31(extraout_var_14,bVar35) != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    local_8 = &local_34;
                                    do {
                                      local_c = pDVar12;
                                      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
                                        pvVar20 = (void *)0x0;
                                      }
                                      else {
                                        pvVar20 = (void *)thunk_FUN_004357f0((char)local_8->flags);
                                      }
                                      if (pvVar20 == (void *)0x0) {
                                        dVar38 = local_8->flags;
                                        uVar15 = uVar32;
                                        pcVar29 = thunk_FUN_00674af0(iVar7);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar29,uVar15,dVar38);
                                      }
                                      else {
                                        thunk_FUN_0065bd20(pvVar20,(char)local_15c,(short)local_158,
                                                           (short)local_154,(short)local_150,
                                                           local_14c);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      pDVar12 = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (pDVar12 != (DArrayTy *)0x0);
                                    local_c = (DArrayTy *)0x0;
                                  }
                                  goto cf_switch_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b7:
                              iVar37 = thunk_FUN_00650bd0((short *)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    local_10 = (AiFltClassTy *)&local_34;
                                    local_8 = pDVar12;
                                    do {
                                      local_c = (DArrayTy *)
                                                thunk_FUN_00677290(*(undefined4 *)local_10,
                                                                   (uint)local_15c,(char)local_158,
                                                                   (short)local_154,(short)local_150
                                                                   ,(short)local_14c,
                                                                   (short)local_148,(short)local_144
                                                                   ,(short)local_140,1);
                                      if (local_c == (DArrayTy *)0x0) {
                                        iVar37 = *(int *)local_10;
                                        uVar15 = uVar32;
                                        pcVar29 = thunk_FUN_00674af0(iVar7);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar29,uVar15,iVar37);
                                      }
                                      else {
                                        thunk_FUN_00675dc0(*(uint *)local_10,(uint *)local_c);
                                        FUN_006ae110((byte *)local_c);
                                      }
                                      local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                      local_8 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                    } while (local_8 != (DArrayTy *)0x0);
                                    local_8 = (DArrayTy *)0x0;
                                  }
                                  goto cf_switch_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b8:
                              iVar37 = thunk_FUN_00650cf0((short *)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    local_10 = (AiFltClassTy *)&local_34;
                                    local_8 = pDVar12;
                                    do {
                                      local_c = (DArrayTy *)
                                                thunk_FUN_006773b0(*(undefined4 *)local_10,
                                                                   (uint)local_15c,(char)local_158,
                                                                   (short)local_154,(short)local_150
                                                                   ,(short)local_14c,
                                                                   (short)local_148,(short)local_144
                                                                   ,(short)local_140,1);
                                      if (local_c == (DArrayTy *)0x0) {
                                        iVar37 = *(int *)local_10;
                                        uVar15 = uVar32;
                                        pcVar29 = thunk_FUN_00674af0(iVar7);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar29,uVar15,iVar37);
                                      }
                                      else {
                                        thunk_FUN_00675dc0(*(uint *)local_10,(uint *)local_c);
                                        FUN_006ae110((byte *)local_c);
                                      }
                                      local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                      local_8 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                    } while (local_8 != (DArrayTy *)0x0);
                                    local_8 = (DArrayTy *)0x0;
                                  }
                                  goto cf_switch_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b9:
                              iVar37 = thunk_FUN_00650e10((short *)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    local_10 = (AiFltClassTy *)&local_34;
                                    local_8 = pDVar12;
                                    do {
                                      local_c = (DArrayTy *)
                                                thunk_FUN_006774c0(*(undefined4 *)local_10,
                                                                   (byte *)local_15c,(char)local_158
                                                                   ,(short)local_154,
                                                                   (short)local_150,(short)local_14c
                                                                   ,(short)local_148,
                                                                   (short)local_144,(short)local_140
                                                                   ,1);
                                      if (local_c == (DArrayTy *)0x0) {
                                        iVar37 = *(int *)local_10;
                                        uVar15 = uVar32;
                                        pcVar29 = thunk_FUN_00674af0(iVar7);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar29,uVar15,iVar37);
                                      }
                                      else {
                                        thunk_FUN_00675dc0(*(uint *)local_10,(uint *)local_c);
                                        FUN_006ae110((byte *)local_c);
                                      }
                                      local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                      local_8 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                    } while (local_8 != (DArrayTy *)0x0);
                                    local_8 = (DArrayTy *)0x0;
                                  }
                                  goto cf_switch_join_00659A73;
                                }
                              }
                            }
                            goto cf_common_join_00652A99;
                          }
                          if (iVar7 == 0x593) {
                            iVar7 = thunk_FUN_0064fd80((short *)local_16c);
                            if (iVar7 == 0) {
                              iVar7 = -1;
                              uVar15 = uVar32;
                              pcVar29 = thunk_FUN_00674af0(0x593);
                              thunk_FUN_0064d0e0(this_00,-0x7d,pcVar29,uVar15,iVar7);
                            }
                            else {
                              DAT_008118fc = 0;
                              _EnumArt((short)local_16c._8_4_,(byte *)local_160,(short)local_15c,
                                       (short)local_158,(short)local_154,(short)local_150,
                                       (short)local_14c,(short)local_148,&LAB_004022f2,&local_144);
                            }
                            goto cf_switch_join_00659A73;
                          }
                          if (iVar7 < 0x54e) {
                            if (iVar7 == 0x54d) {
                              iVar7 = thunk_FUN_0064ef10((int)local_16c);
                              if (iVar7 == 0) {
                                iVar7 = -1;
                                uVar15 = uVar32;
                                pcVar29 = thunk_FUN_00674af0(0x54d);
                                thunk_FUN_0064d0e0(this_00,-0x7d,pcVar29,uVar15,iVar7);
                              }
                              else {
                                iVar7 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar7 == 8) && ((DArrayTy *)local_16c._8_4_ == (DArrayTy *)0x9)
                                   ) {
                                  iVar7 = -1;
                                  uVar15 = uVar32;
                                  pcVar29 = thunk_FUN_00674af0(0x54d);
                                  thunk_FUN_0064d0e0(this_00,-0x7d,pcVar29,uVar15,iVar7);
                                }
                                else {
                                  iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                             (uint)local_160,&local_34.flags);
                                  iVar37 = 0;
                                  if (0 < iVar7) {
                                    pDVar12 = &local_34;
                                    do {
                                      if (pDVar12->flags == (uint)DAT_0080874d) {
                                        if (g_opticClass_007FB2A0 != (OpticClassC *)0x0) {
                                          thunk_FUN_004aaf60((int)local_15c);
                                        }
                                        break;
                                      }
                                      iVar37 = iVar37 + 1;
                                      pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                    } while (iVar37 < iVar7);
                                  }
                                }
                              }
                              goto cf_switch_join_00659A73;
                            }
                            if (iVar7 < 0x51b) {
                              if (iVar7 == 0x51a) {
                                iVar7 = thunk_FUN_0064e960((int)local_16c);
                                if (iVar7 == 0) {
                                  iVar7 = -1;
                                  uVar15 = uVar32;
                                  pcVar29 = thunk_FUN_00674af0(0x51a);
                                  thunk_FUN_0064d0e0(this_00,-0x7d,pcVar29,uVar15,iVar7);
                                }
                                else {
                                  (&this_00->field_052F)[local_16c._8_4_] = local_160;
                                }
                                goto cf_switch_join_00659A73;
                              }
                              if (0x3e < iVar7) {
                                if (iVar7 < 0x517) {
                                  if (iVar7 == 0x516) {
                                    iVar7 = thunk_FUN_0064e7c0((short *)local_16c);
                                    if (iVar7 == 0) {
                                      iVar7 = -1;
                                      uVar15 = uVar32;
                                      pcVar29 = thunk_FUN_00674af0(0x516);
                                      thunk_FUN_0064d0e0(this_00,-0x7d,pcVar29,uVar15,iVar7);
                                    }
                                    else {
                                      if ((DArrayTy *)local_16c._8_4_ == (DArrayTy *)0x9) {
                                        iVar7 = (**(code **)(this_00->field_0000 + 0x18))();
                                        if (iVar7 == 8) {
                                          pDVar12 = local_15c;
                                          if ((int)local_15c <= (int)local_158) {
                                            do {
                                              puVar11 = (undefined1 *)
                                                        thunk_FUN_0064e510(this_00,(int)pDVar12);
                                              if (puVar11 != (undefined1 *)0x0) {
                                                *puVar11 = 0;
                                              }
                                              pDVar12 = (DArrayTy *)((int)&pDVar12->flags + 1);
                                            } while ((int)pDVar12 <= (int)local_158);
                                          }
                                          goto cf_switch_join_00659A73;
                                        }
                                      }
                                      pDVar12 = (DArrayTy *)
                                                thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                                   (uint)local_160,&local_34.flags);
                                      if (0 < (int)pDVar12) {
                                        local_8 = &local_34;
                                        do {
                                          local_c = pDVar12;
                                          if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
                                            local_10 = (AiFltClassTy *)0x0;
                                          }
                                          else {
                                            local_10 = (AiFltClassTy *)
                                                       thunk_FUN_004357f0((char)local_8->flags);
                                          }
                                          pDVar12 = local_15c;
                                          if ((int)local_15c <= (int)local_158) {
                                            do {
                                              if (local_10 != (AiFltClassTy *)0x0) {
                                                puVar11 = (undefined1 *)
                                                          thunk_FUN_0064e510(&local_10->field_001C,
                                                                             (int)pDVar12);
                                                if (puVar11 != (undefined1 *)0x0) {
                                                  *puVar11 = 0;
                                                }
                                              }
                                              pDVar12 = (DArrayTy *)((int)&pDVar12->flags + 1);
                                            } while ((int)pDVar12 <= (int)local_158);
                                          }
                                          local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                          pDVar12 = (DArrayTy *)((int)&local_c[-1].data + 3);
                                        } while (pDVar12 != (DArrayTy *)0x0);
                                        local_c = (DArrayTy *)0x0;
                                      }
                                    }
                                  }
                                  else if (iVar7 == 0x42) {
                                    iVar7 = thunk_FUN_0064e700((int)local_16c);
                                    if (iVar7 == 0) {
                                      iVar7 = -1;
                                      uVar15 = uVar32;
                                      pcVar29 = thunk_FUN_00674af0(0x42);
                                      thunk_FUN_0064d0e0(this_00,-0x7d,pcVar29,uVar15,iVar7);
                                    }
                                    else {
                                      pDVar12 = local_160;
                                      if ((DArrayTy *)local_16c._8_4_ == (DArrayTy *)0x0)
                                      goto cf_continue_loop_00659A80;
                                    }
                                  }
                                  else if (iVar7 == 0x322) {
                                    local_174 = 1;
                                  }
                                  else if (iVar7 == 0x515) {
                                    iVar7 = thunk_FUN_0064e780((short *)local_16c);
                                    if (iVar7 == 0) {
                                      iVar7 = -1;
                                      uVar15 = uVar32;
                                      pcVar29 = thunk_FUN_00674af0(0x515);
                                      thunk_FUN_0064d0e0(this_00,-0x7d,pcVar29,uVar15,iVar7);
                                    }
                                    else if ((DArrayTy *)local_16c._8_4_ == (DArrayTy *)0x0) {
                                      *local_178 = '\0';
                                      local_178[0xb] = '\0';
                                      local_178[0xc] = '\0';
                                      local_178[0xd] = '\0';
                                      local_178[0xe] = '\0';
                                    }
                                    else {
                                      *local_178 = '\x01';
                                      *(undefined4 *)(local_178 + 0xb) = local_16c._8_4_;
                                    }
                                  }
                                }
                                else if (iVar7 == 0x517) {
                                  iVar7 = thunk_FUN_0064e830((short *)local_16c);
                                  if (iVar7 == 0) {
                                    iVar7 = -1;
                                    uVar15 = uVar32;
                                    pcVar29 = thunk_FUN_00674af0(0x517);
                                    thunk_FUN_0064d0e0(this_00,-0x7d,pcVar29,uVar15,iVar7);
                                  }
                                  else {
                                    if ((DArrayTy *)local_16c._8_4_ == (DArrayTy *)0x9) {
                                      iVar7 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if (iVar7 == 8) {
                                        pDVar12 = local_15c;
                                        if ((int)local_15c <= (int)local_158) {
                                          do {
                                            puVar11 = (undefined1 *)
                                                      thunk_FUN_0064e510(this_00,(int)pDVar12);
                                            if (puVar11 != (undefined1 *)0x0) {
                                              *puVar11 = 1;
                                              *(byte **)(puVar11 + 0xb) = local_154;
                                            }
                                            pDVar12 = (DArrayTy *)((int)&pDVar12->flags + 1);
                                          } while ((int)pDVar12 <= (int)local_158);
                                        }
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    pDVar12 = (DArrayTy *)
                                              thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                                 (uint)local_160,&local_34.flags);
                                    if (0 < (int)pDVar12) {
                                      local_8 = &local_34;
                                      local_c = pDVar12;
                                      do {
                                        if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
                                          local_10 = (AiFltClassTy *)0x0;
                                        }
                                        else {
                                          local_10 = (AiFltClassTy *)
                                                     thunk_FUN_004357f0((char)local_8->flags);
                                        }
                                        pDVar12 = local_15c;
                                        if ((int)local_15c <= (int)local_158) {
                                          do {
                                            if (local_10 != (AiFltClassTy *)0x0) {
                                              puVar11 = (undefined1 *)
                                                        thunk_FUN_0064e510(&local_10->field_001C,
                                                                           (int)pDVar12);
                                              if (puVar11 != (undefined1 *)0x0) {
                                                *puVar11 = 1;
                                                *(byte **)(puVar11 + 0xb) = local_154;
                                              }
                                            }
                                            pDVar12 = (DArrayTy *)((int)&pDVar12->flags + 1);
                                          } while ((int)pDVar12 <= (int)local_158);
                                        }
                                        local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                        local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                      } while (local_c != (DArrayTy *)0x0);
                                      local_c = (DArrayTy *)0x0;
                                    }
                                  }
                                }
                                else if (iVar7 == 0x518) {
                                  iVar7 = thunk_FUN_0064e8c0((int)local_16c);
                                  if (iVar7 == 0) {
                                    iVar7 = -1;
                                    uVar15 = uVar32;
                                    pcVar29 = thunk_FUN_00674af0(0x518);
                                    thunk_FUN_0064d0e0(this_00,-0x7d,pcVar29,uVar15,iVar7);
                                  }
                                  else {
                                    if ((DArrayTy *)local_16c._8_4_ == (DArrayTy *)0x9) {
                                      iVar7 = (**(code **)(this_00->field_0000 + 0x18))();
                                      if (iVar7 == 8) {
                                        *(uint **)(&this_00->field_0xde + (int)local_15c * 4) =
                                             local_158;
                                        goto cf_switch_join_00659A73;
                                      }
                                    }
                                    pDVar12 = (DArrayTy *)
                                              thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                                 (uint)local_160,&local_34.flags);
                                    if (0 < (int)pDVar12) {
                                      pDVar26 = &local_34;
                                      local_c = pDVar12;
                                      do {
                                        local_c = pDVar12;
                                        if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
                                          iVar7 = 0;
                                        }
                                        else {
                                          iVar7 = thunk_FUN_004357f0((char)pDVar26->flags);
                                        }
                                        if (iVar7 == 0) {
                                          dVar38 = pDVar26->flags;
                                          uVar15 = uVar32;
                                          pcVar29 = thunk_FUN_00674af0(0x518);
                                          thunk_FUN_0064d0e0(this_00,-0xab,pcVar29,uVar15,dVar38);
                                        }
                                        else {
                                          *(uint **)(iVar7 + 0xfa + (int)local_15c * 4) = local_158;
                                        }
                                        pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                        pDVar12 = (DArrayTy *)((int)&local_c[-1].data + 3);
                                        local_c = pDVar12;
                                      } while (pDVar12 != (DArrayTy *)0x0);
                                    }
                                  }
                                }
                                else if (iVar7 == 0x519) {
                                  iVar7 = thunk_FUN_0064e910((int)local_16c);
                                  if (iVar7 == 0) {
                                    iVar7 = -1;
                                    uVar15 = uVar32;
                                    pcVar29 = thunk_FUN_00674af0(0x519);
                                    thunk_FUN_0064d0e0(this_00,-0x7d,pcVar29,uVar15,iVar7);
                                  }
                                  else {
                                    (&DAT_0080e43b)[local_16c._8_4_] = local_160;
                                  }
                                }
                                goto cf_switch_join_00659A73;
                              }
                              if (iVar7 == 0x3e) {
switchD_00652b42_switchD:
                                switch(local_15c) {
                                case (DArrayTy *)0x0:
                                  iVar37 = thunk_FUN_0064ea10((int)local_16c);
                                  if (iVar37 == 0) goto cf_common_join_00652A99;
                                  switch(iVar7) {
                                  case 2:
                                    *(int *)(&this_00->field_0xde + local_16c._8_4_ * 4) =
                                         (int)&local_160->flags +
                                         *(int *)(&this_00->field_0xde + local_16c._8_4_ * 4);
                                    break;
                                  case 5:
                                    *(DArrayTy **)(&this_00->field_0xde + local_16c._8_4_ * 4) =
                                         local_160;
                                    break;
                                  case 0x17:
                                    if (local_160 == (DArrayTy *)0x0) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar32,-1);
                                    }
                                    else {
                                      *(int *)(&this_00->field_0xde + local_16c._8_4_ * 4) =
                                           *(int *)(&this_00->field_0xde + local_16c._8_4_ * 4) /
                                           (int)local_160;
                                    }
                                    break;
                                  case 0x2d:
                                    if (local_160 == (DArrayTy *)0x0) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar32,-1);
                                    }
                                    else {
                                      *(int *)(&this_00->field_0xde + local_16c._8_4_ * 4) =
                                           *(int *)(&this_00->field_0xde + local_16c._8_4_ * 4) %
                                           (int)local_160;
                                    }
                                    break;
                                  case 0x31:
                                    *(int *)(&this_00->field_0xde + local_16c._8_4_ * 4) =
                                         *(int *)(&this_00->field_0xde + local_16c._8_4_ * 4) *
                                         (int)local_160;
                                    break;
                                  case 0x3e:
                                    *(int *)(&this_00->field_0xde + local_16c._8_4_ * 4) =
                                         *(int *)(&this_00->field_0xde + local_16c._8_4_ * 4) -
                                         (int)local_160;
                                  }
                                  break;
                                case (DArrayTy *)0x1:
                                  iVar37 = thunk_FUN_0064ea10((int)local_16c);
                                  if (iVar37 == 0) goto cf_common_join_00652A99;
                                  switch(iVar7) {
                                  case 2:
                                    (&DAT_0080e43b)[local_16c._8_4_] =
                                         (int)&local_160->flags + (&DAT_0080e43b)[local_16c._8_4_];
                                    break;
                                  case 5:
                                    (&DAT_0080e43b)[local_16c._8_4_] = local_160;
                                    break;
                                  case 0x17:
                                    if (local_160 == (DArrayTy *)0x0) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar32,-1);
                                    }
                                    else {
                                      (&DAT_0080e43b)[local_16c._8_4_] =
                                           (int)(&DAT_0080e43b)[local_16c._8_4_] / (int)local_160;
                                    }
                                    break;
                                  case 0x2d:
                                    if (local_160 == (DArrayTy *)0x0) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar32,-1);
                                    }
                                    else {
                                      (&DAT_0080e43b)[local_16c._8_4_] =
                                           (int)(&DAT_0080e43b)[local_16c._8_4_] % (int)local_160;
                                    }
                                    break;
                                  case 0x31:
                                    (&DAT_0080e43b)[local_16c._8_4_] =
                                         (&DAT_0080e43b)[local_16c._8_4_] * (int)local_160;
                                    break;
                                  case 0x3e:
                                    (&DAT_0080e43b)[local_16c._8_4_] =
                                         (&DAT_0080e43b)[local_16c._8_4_] - (int)local_160;
                                  }
                                  break;
                                case (DArrayTy *)0x2:
                                  iVar37 = thunk_FUN_0064ea60((int)local_16c);
                                  if (iVar37 == 0) goto cf_common_join_00652A99;
                                  switch(iVar7) {
                                  case 2:
                                    (&this_00->field_052F)[local_16c._8_4_] =
                                         (int)&local_160->flags +
                                         (&this_00->field_052F)[local_16c._8_4_];
                                    break;
                                  case 5:
                                    (&this_00->field_052F)[local_16c._8_4_] = local_160;
                                    break;
                                  case 0x17:
                                    if (local_160 == (DArrayTy *)0x0) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar32,-1);
                                    }
                                    else {
                                      (&this_00->field_052F)[local_16c._8_4_] =
                                           (int)(&this_00->field_052F)[local_16c._8_4_] /
                                           (int)local_160;
                                    }
                                    break;
                                  case 0x2d:
                                    if (local_160 == (DArrayTy *)0x0) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&DAT_008016a0,uVar32,-1);
                                    }
                                    else {
                                      (&this_00->field_052F)[local_16c._8_4_] =
                                           (int)(&this_00->field_052F)[local_16c._8_4_] %
                                           (int)local_160;
                                    }
                                    break;
                                  case 0x31:
                                    (&this_00->field_052F)[local_16c._8_4_] =
                                         (&this_00->field_052F)[local_16c._8_4_] * (int)local_160;
                                    break;
                                  case 0x3e:
                                    (&this_00->field_052F)[local_16c._8_4_] =
                                         (&this_00->field_052F)[local_16c._8_4_] - (int)local_160;
                                  }
                                  break;
                                case (DArrayTy *)0x3:
                                  iVar37 = thunk_FUN_0064eaa0((int)local_16c);
                                  if (iVar37 == 0) goto cf_common_join_00652A99;
                                  if (iVar7 == 5) {
                                    Library::DKW::TBL::FUN_006b6020
                                              ((uint *)this_00->field_05B3,local_16c._8_4_,
                                               (char *)local_160);
                                  }
                                }
                                goto cf_switch_join_00659A73;
                              }
                              switch(iVar7) {
                              case 2:
                              case 5:
                              case 0x17:
                              case 0x2d:
                              case 0x31:
                                goto switchD_00652b42_switchD;
                              case 0x19:
                                iVar37 = thunk_FUN_0064e6c0((int)local_16c);
                                if (iVar37 == 0) goto cf_common_join_00652A99;
                                if (local_174 != 0) {
                                  local_174 = 0;
                                  local_170 = (DArrayTy *)local_16c._8_4_;
                                  pDVar12 = local_170;
                                  goto cf_continue_loop_00659A80;
                                }
                                local_174 = 0;
                                break;
                              case 0x21:
                                iVar37 = thunk_FUN_0064e740((int)local_16c);
                                pDVar12 = (DArrayTy *)local_16c._8_4_;
                                if (iVar37 == 0) goto cf_common_join_00652A99;
                                goto cf_continue_loop_00659A80;
                              case 0x23:
                                iVar37 = thunk_FUN_0064e680((int)local_16c);
                                if (iVar37 == 0) goto cf_common_join_00652A99;
                                if ((DArrayTy *)local_16c._8_4_ == (DArrayTy *)0x0) {
                                  local_170 = local_160;
                                  pDVar12 = local_170;
                                  goto cf_continue_loop_00659A80;
                                }
                              }
                              goto cf_switch_join_00659A73;
                            }
                            switch(iVar7) {
                            case 0x51b:
                              iVar37 = thunk_FUN_0064e9a0((int)local_16c);
                              if (iVar37 == 0) goto cf_common_join_00652A99;
                              Library::DKW::TBL::FUN_006b6020
                                        ((uint *)this_00->field_05B3,local_16c._8_4_,
                                         (char *)local_160);
                              break;
                            case 0x528:
                              bVar35 = thunk_FUN_0064eb20((int)local_16c);
                              if (CONCAT31(extraout_var,bVar35) != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar26 = &local_34;
                                    local_c = pDVar12;
                                    pCVar24 = g_cPanel_00801688;
                                    do {
                                      if (pCVar24 != (CPanelTy *)0x0) {
                                        thunk_FUN_004f9120(pCVar24,(byte)pDVar26->flags,'\x01',
                                                           local_15c);
                                        pCVar24 = g_cPanel_00801688;
                                      }
                                      pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != (DArrayTy *)0x0);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x529:
                              iVar37 = thunk_FUN_0064eb60((int)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar26 = &local_34;
                                    local_c = pDVar12;
                                    pCVar24 = g_cPanel_00801688;
                                    do {
                                      local_c = pDVar12;
                                      if (pCVar24 != (CPanelTy *)0x0) {
                                        thunk_FUN_004f9120(pCVar24,(byte)pDVar26->flags,'\0',0);
                                        pCVar24 = g_cPanel_00801688;
                                      }
                                      pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                      pDVar12 = (DArrayTy *)((int)&local_c[-1].data + 3);
                                      local_c = pDVar12;
                                    } while (pDVar12 != (DArrayTy *)0x0);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x52a:
                              iVar37 = thunk_FUN_0064eba0((int)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                             (uint)local_160,&local_34.flags);
                                  iVar37 = 0;
                                  if (0 < iVar7) {
                                    pDVar12 = &local_34;
                                    do {
                                      if (pDVar12->flags == (uint)DAT_0080874d) {
                                        if (g_cPanel_00801688 != (CPanelTy *)0x0) {
                                          thunk_FUN_004f9260((char)local_15c);
                                        }
                                        break;
                                      }
                                      iVar37 = iVar37 + 1;
                                      pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                    } while (iVar37 < iVar7);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x532:
                              bVar35 = thunk_FUN_0064ebe0((int)local_16c);
                              if (CONCAT31(extraout_var_00,bVar35) == 0)
                              goto cf_common_join_00652A99;
                              if (g_popUp_008016D8 != (PopUpTy *)0x0) {
                                if ((DArrayTy *)local_16c._8_4_ == (DArrayTy *)0x9) {
                                  iVar7 = (**(code **)(this_00->field_0000 + 0x18))();
                                  if (iVar7 == 8) {
                                    thunk_FUN_0052d320(g_popUp_008016D8,(char *)local_15c,8);
                                    break;
                                  }
                                }
                                iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                           (uint)local_160,&local_34.flags);
                                iVar37 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
                                  do {
                                    if (pDVar12->flags == (uint)DAT_0080874d) {
                                      thunk_FUN_0052d320(g_popUp_008016D8,(char *)local_15c,8);
                                      break;
                                    }
                                    iVar37 = iVar37 + 1;
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                  } while (iVar37 < iVar7);
                                }
                              }
                              break;
                            case 0x533:
                              bVar35 = thunk_FUN_0064ec30((int)local_16c);
                              if (CONCAT31(extraout_var_01,bVar35) == 0)
                              goto cf_common_join_00652A99;
                              if ((DArrayTy *)local_16c._8_4_ == (DArrayTy *)0x9) {
                                iVar7 = (**(code **)(this_00->field_0000 + 0x18))();
                                if (iVar7 == 8) {
                                  if (DAT_00801694 != (void *)0x0) {
                                    thunk_FUN_0051fac0(DAT_00801694,(char *)local_154,2,
                                                       (char)local_158,(int)local_15c * 1000);
                                  }
                                  break;
                                }
                              }
                              iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                         (uint)local_160,&local_34.flags);
                              iVar37 = 0;
                              if (0 < iVar7) {
                                pDVar12 = &local_34;
                                do {
                                  if (pDVar12->flags == (uint)DAT_0080874d) {
                                    if (DAT_00801694 != (void *)0x0) {
                                      thunk_FUN_0051fac0(DAT_00801694,(char *)local_154,2,
                                                         (char)local_158,(int)local_15c * 1000);
                                    }
                                    break;
                                  }
                                  iVar37 = iVar37 + 1;
                                  pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                } while (iVar37 < iVar7);
                              }
                              break;
                            case 0x534:
                              bVar35 = thunk_FUN_0064ec80((AnonShape_0064EC80_53C284F2 *)local_16c);
                              if (CONCAT31(extraout_var_02,bVar35) == 0)
                              goto cf_common_join_00652A99;
                              if ((DArrayTy *)local_16c._8_4_ == (DArrayTy *)0x9) {
                                iVar7 = (**(code **)(this_00->field_0000 + 0x18))();
                                if (iVar7 == 8) {
LAB_006536dd:
                                  if (g_cPanel_00801688 != (CPanelTy *)0x0) {
                                    CPanelTy::OutText(g_cPanel_00801688,(int)local_158,
                                                      (int)(local_154 + (1 - (int)local_158)),
                                                      local_15c);
                                  }
                                  break;
                                }
                              }
                              iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                         (uint)local_160,&local_34.flags);
                              iVar37 = 0;
                              if (0 < iVar7) {
                                pDVar12 = &local_34;
                                do {
                                  if (pDVar12->flags == (uint)DAT_0080874d) goto LAB_006536dd;
                                  iVar37 = iVar37 + 1;
                                  pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                } while (iVar37 < iVar7);
                              }
                              break;
                            case 0x535:
                              bVar35 = thunk_FUN_0064ecd0((int)local_16c);
                              if (CONCAT31(extraout_var_03,bVar35) == 0)
                              goto cf_common_join_00652A99;
                              if ((DArrayTy *)local_16c._8_4_ == (DArrayTy *)0x9) {
                                iVar7 = (**(code **)(this_00->field_0000 + 0x18))();
                                if (iVar7 == 8) {
LAB_00653778:
                                  if (g_cPanel_00801688 != (CPanelTy *)0x0) {
                                    CPanelTy::OutText(g_cPanel_00801688,(char *)local_158,local_15c)
                                    ;
                                  }
                                  break;
                                }
                              }
                              iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                         (uint)local_160,&local_34.flags);
                              iVar37 = 0;
                              if (0 < iVar7) {
                                pDVar12 = &local_34;
                                do {
                                  if (pDVar12->flags == (uint)DAT_0080874d) goto LAB_00653778;
                                  iVar37 = iVar37 + 1;
                                  pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                } while (iVar37 < iVar7);
                              }
                              break;
                            case 0x536:
                              bVar35 = thunk_FUN_0064ed20((int)local_16c);
                              if (CONCAT31(extraout_var_04,bVar35) == 0)
                              goto cf_common_join_00652A99;
                              if ((DArrayTy *)local_16c._8_4_ == (DArrayTy *)0x9) {
                                iVar7 = (**(code **)(this_00->field_0000 + 0x18))();
                                if (iVar7 == 8) {
                                  SoundClassTy::PlaySound_thunk
                                            ((SoundClassTy *)&g_sound,SOUND_MODE_12,
                                             (char *)local_15c,0,(SoundPosition *)0x0,0);
                                  break;
                                }
                              }
                              iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                         (uint)local_160,&local_34.flags);
                              iVar37 = 0;
                              if (0 < iVar7) {
                                pDVar12 = &local_34;
                                do {
                                  if (pDVar12->flags == (uint)DAT_0080874d) {
                                    SoundClassTy::PlaySound_thunk
                                              ((SoundClassTy *)&g_sound,SOUND_MODE_12,
                                               (char *)local_15c,0,(SoundPosition *)0x0,0);
                                    break;
                                  }
                                  iVar37 = iVar37 + 1;
                                  pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                } while (iVar37 < iVar7);
                              }
                              break;
                            case 0x537:
                              bVar35 = thunk_FUN_0064ed70((int)local_16c);
                              if (CONCAT31(extraout_var_05,bVar35) == 0)
                              goto cf_common_join_00652A99;
                              if ((DArrayTy *)local_16c._8_4_ == (DArrayTy *)0x9) {
                                iVar7 = (**(code **)(this_00->field_0000 + 0x18))();
                                if (iVar7 == 8) {
                                  if (g_cPanel_00801688 != (CPanelTy *)0x0) {
                                    CPanelTy::PlayBriefing(g_cPanel_00801688,(char *)local_15c);
                                  }
                                  break;
                                }
                              }
                              iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                         (uint)local_160,&local_34.flags);
                              iVar37 = 0;
                              if (0 < iVar7) {
                                pDVar12 = &local_34;
                                do {
                                  if (pDVar12->flags == (uint)DAT_0080874d) {
                                    if (g_cPanel_00801688 != (CPanelTy *)0x0) {
                                      CPanelTy::PlayBriefing(g_cPanel_00801688,(char *)local_15c);
                                    }
                                    break;
                                  }
                                  iVar37 = iVar37 + 1;
                                  pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                } while (iVar37 < iVar7);
                              }
                              break;
                            case 0x546:
                              iVar37 = thunk_FUN_0064edc0((int)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                             (uint)local_160,&local_34.flags);
                                  iVar37 = 0;
                                  if (0 < iVar7) {
                                    pDVar12 = &local_34;
                                    do {
                                      if (pDVar12->flags == (uint)DAT_0080874d) {
                                        if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
                                          if ((int)local_14c < 0) {
                                            iVar7 = -0x10;
                                          }
                                          else {
                                            iVar7 = (int)local_14c * 0x19;
                                          }
                                          VisibleClassTy::VisHoleCreate
                                                    (g_visibleClass_00802A88,(int)local_15c,
                                                     (int)local_158,local_154,
                                                     (&local_34.flags)[iVar37],local_150,iVar7);
                                        }
                                        break;
                                      }
                                      iVar37 = iVar37 + 1;
                                      pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                    } while (iVar37 < iVar7);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x547:
                            case 0x548:
                              iVar37 = thunk_FUN_0064ee00((int)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  local_10 = (AiFltClassTy *)
                                             thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                                (uint)local_160,&local_34.flags);
                                  iVar37 = 0;
                                  if (0 < (int)local_10) {
                                    pDVar12 = &local_34;
                                    do {
                                      if (pDVar12->flags == (uint)DAT_0080874d) {
                                        if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) break;
                                        if (g_visibleClass_00802A88->field_0114 == 0) {
                                          g_visibleClass_00802A88->field_00F8 = 0;
                                        }
                                        else {
                                          g_visibleClass_00802A88->field_00F8 =
                                               (uint)(iVar7 == 0x547);
                                          pAVar4 = PTR_00807598;
                                          if ((iVar7 == 0x547) != 0) {
                                            PTR_00807598->field_0466 = 1;
                                            *(undefined4 *)&pAVar4->field_0x2d8 = 1;
                                            break;
                                          }
                                        }
                                        pAVar4 = PTR_00807598;
                                        PTR_00807598->field_0466 = 0;
                                        *(undefined4 *)&pAVar4->field_0x2d8 = 1;
                                        break;
                                      }
                                      iVar37 = iVar37 + 1;
                                      pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                    } while (iVar37 < (int)local_10);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x549:
                              iVar37 = thunk_FUN_0064ee40((short *)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                             (uint)local_160,&local_34.flags);
                                  iVar37 = 0;
                                  if (0 < iVar7) {
                                    pDVar12 = &local_34;
                                    do {
                                      if (pDVar12->flags == (uint)DAT_0080874d) {
                                        if (g_opticClass_007FB2A0 != (OpticClassC *)0x0) {
                                          thunk_FUN_004ab530((int)local_154,(int)local_15c,
                                                             (int)local_158);
                                        }
                                        break;
                                      }
                                      iVar37 = iVar37 + 1;
                                      pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                    } while (iVar37 < iVar7);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x54a:
                              iVar37 = thunk_FUN_0064ee90((int)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  local_10 = (AiFltClassTy *)
                                             thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                                (uint)local_160,&local_34.flags);
                                  iVar37 = 0;
                                  if (0 < (int)local_10) {
                                    pDVar12 = &local_34;
LAB_00653bb7:
                                    if (pDVar12->flags != (uint)DAT_0080874d) goto code_r0x00653bbb;
                                    if (g_opticClass_007FB2A0 != (OpticClassC *)0x0) {
                                      puVar33 = local_1c0;
                                      for (iVar37 = 8; iVar37 != 0; iVar37 = iVar37 + -1) {
                                        *puVar33 = 0;
                                        puVar33 = puVar33 + 1;
                                      }
                                      switch(local_15c) {
                                      case (DArrayTy *)0x0:
                                        local_1b0 = 0x104;
                                        break;
                                      case (DArrayTy *)0x1:
                                        local_1b0 = 0x105;
                                        break;
                                      case (DArrayTy *)0x2:
                                        local_1b0 = 0x106;
                                        break;
                                      case (DArrayTy *)0x3:
                                        local_1b0 = 0x107;
                                        break;
                                      default:
                                        iVar37 = -1;
                                        uVar32 = local_14;
                                        pcVar29 = thunk_FUN_00674af0(iVar7);
                                        thunk_FUN_0064d0e0(this_00,-0x7d,pcVar29,uVar32,iVar37);
                                        uVar32 = local_14;
                                        goto cf_switch_join_00659A73;
                                      }
                                      (**(code **)(this_00->field_0000 + 0x30))(3,0x100,local_1c0);
                                      uVar32 = local_14;
                                    }
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x54b:
                            case 0x54c:
                              iVar37 = thunk_FUN_0064eed0((int)local_16c);
                              if (iVar37 != 0) {
                                iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                                if ((iVar37 != 8) ||
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)) {
                                  local_10 = (AiFltClassTy *)
                                             thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                                (uint)local_160,&local_34.flags);
                                  iVar37 = 0;
                                  if (0 < (int)local_10) {
                                    pDVar12 = &local_34;
                                    do {
                                      if (pDVar12->flags == (uint)DAT_0080874d) {
                                        if (g_opticClass_007FB2A0 != (OpticClassC *)0x0) {
                                          puVar33 = local_1c0;
                                          for (iVar37 = 8; iVar37 != 0; iVar37 = iVar37 + -1) {
                                            *puVar33 = 0;
                                            puVar33 = puVar33 + 1;
                                          }
                                          local_1b0 = (iVar7 != 0x54b) + 0x100;
                                          (**(code **)(this_00->field_0000 + 0x30))
                                                    (3,0x100,local_1c0);
                                          uVar32 = local_14;
                                        }
                                        break;
                                      }
                                      iVar37 = iVar37 + 1;
                                      pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                    } while (iVar37 < (int)local_10);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            }
                            goto cf_switch_join_00659A73;
                          }
                          switch(iVar7) {
                          case 0x54e:
                            iVar37 = thunk_FUN_0064ef50((int)local_16c);
                            if (iVar37 != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                           (uint)local_160,&local_34.flags);
                                iVar37 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
                                  do {
                                    if (pDVar12->flags == (uint)DAT_0080874d) {
                                      thunk_FUN_0052af90((byte)local_15c,(int)local_158,
                                                         (int)local_154);
                                      break;
                                    }
                                    iVar37 = iVar37 + 1;
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                  } while (iVar37 < iVar7);
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          default:
                            goto cf_switch_join_00659A73;
                          case 0x55a:
                            iVar37 = thunk_FUN_0064f080((int)local_16c);
                            if (iVar37 != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                pDVar12 = (DArrayTy *)
                                          thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                             (uint)local_160,&local_34.flags);
                                if (0 < (int)pDVar12) {
                                  pDVar26 = &local_34;
                                  local_c = pDVar12;
                                  do {
                                    uVar15 = pDVar26->flags;
                                    (&DAT_00809950)[uVar15] =
                                         (local_15c != (DArrayTy *)0x1) + '\x01';
                                    if (uVar15 == DAT_0080874d) {
                                      DAT_0080c522 = (uint)(local_15c == (DArrayTy *)0x1);
                                    }
                                    pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != (DArrayTy *)0x0);
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x55b:
                            bVar35 = thunk_FUN_0064f0c0((int)local_16c);
                            if (CONCAT31(extraout_var_06,bVar35) != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                           (uint)local_160,&local_34.flags);
                                iVar37 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
                                  do {
                                    if (pDVar12->flags == (uint)DAT_0080874d) {
                                      if (((char)local_15c->flags != '\0') &&
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
                                    iVar37 = iVar37 + 1;
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                  } while (iVar37 < iVar7);
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x55c:
                            iVar37 = thunk_FUN_0064f110((short *)local_16c);
                            if (iVar37 != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                           (uint)local_160,&local_34.flags);
                                iVar37 = 0;
                                if (0 < iVar7) {
                                  do {
                                    (&DAT_0080c947)[iVar37] = local_158;
                                    if ((&local_34.flags)[iVar37] == (uint)DAT_0080874d) {
                                      DAT_0080e301 = (char)local_15c;
                                    }
                                    iVar37 = iVar37 + 1;
                                  } while (iVar37 < iVar7);
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x55d:
                            bVar35 = thunk_FUN_0064f160((int)local_16c);
                            if (CONCAT31(extraout_var_07,bVar35) != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                           (uint)local_160,&local_34.flags);
                                iVar37 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
LAB_006540b9:
                                  if (pDVar12->flags != (uint)DAT_0080874d) goto code_r0x006540bd;
                                  DAT_0080e300 = (char)local_15c;
                                  puVar33 = &DAT_0080e303;
                                  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
                                    *puVar33 = 0;
                                    puVar33 = puVar33 + 1;
                                  }
                                  Library::MSVCRT::_strncpy
                                            ((char *)&DAT_0080e303,(char *)local_158,0x1f);
                                  uVar32 = local_14;
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x55e:
                            bVar35 = thunk_FUN_0064f1b0((short *)local_16c);
                            if (CONCAT31(extraout_var_08,bVar35) != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                           (uint)local_160,&local_34.flags);
                                iVar37 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
                                  do {
                                    if (pDVar12->flags == (uint)DAT_0080874d) {
                                      DAT_0080e302 = (char)local_15c;
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
                                    iVar37 = iVar37 + 1;
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                  } while (iVar37 < iVar7);
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x55f:
                            bVar35 = thunk_FUN_0064ef90((AnonShape_0064EF90_4909407D *)local_16c);
                            if (CONCAT31(extraout_var_09,bVar35) != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                           (uint)local_160,&local_34.flags);
                                iVar37 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
                                  do {
                                    if (pDVar12->flags == (uint)DAT_0080874d) {
                                      iVar7 = Library::DKW::TBL::FUN_006b5aa0
                                                        ((uint *)PTR_0080c4cb,(char *)local_158);
                                      if (g_optPanel_008016DC != (OptPanelTy *)0x0) {
                                        OptPanelTy::UpdateObjectives(g_optPanel_008016DC);
                                      }
                                      if (-1 < iVar7) {
                                        *(int *)(&this_00->field_0xde + (int)local_15c * 4) = iVar7;
                                      }
                                      break;
                                    }
                                    iVar37 = iVar37 + 1;
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                  } while (iVar37 < iVar7);
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x560:
                            iVar37 = thunk_FUN_0064f000((int)local_16c);
                            if (iVar37 != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                           (uint)local_160,&local_34.flags);
                                iVar37 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
LAB_00654362:
                                  if (pDVar12->flags != (uint)DAT_0080874d) goto code_r0x00654366;
                                  FUN_006c87c0((int)PTR_0080c4cb,(uint)local_15c);
LAB_00654386:
                                  if (g_optPanel_008016DC != (OptPanelTy *)0x0) {
                                    OptPanelTy::UpdateObjectives(g_optPanel_008016DC);
                                  }
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x561:
                            iVar37 = thunk_FUN_0064f040((int)local_16c);
                            if (iVar37 != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                           (uint)local_160,&local_34.flags);
                                iVar37 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
                                  do {
                                    if (pDVar12->flags == (uint)DAT_0080874d) {
                                      if (PTR_0080c4cb != (AnonShape_GLOBAL_0080C4CB_D58160AA *)0x0)
                                      {
                                        FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0080c4cb);
                                      }
                                      PTR_0080c4cb = (AnonShape_GLOBAL_0080C4CB_D58160AA *)
                                                     Library::DKW::TBL::FUN_006b54f0
                                                               ((uint *)0x0,10,10);
                                      goto LAB_00654386;
                                    }
                                    iVar37 = iVar37 + 1;
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                  } while (iVar37 < iVar7);
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x562:
                            bVar35 = thunk_FUN_0064ef90((AnonShape_0064EF90_4909407D *)local_16c);
                            if (CONCAT31(extraout_var_10,bVar35) != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                           (uint)local_160,&local_34.flags);
                                iVar37 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
                                  do {
                                    if (pDVar12->flags == (uint)DAT_0080874d) {
                                      if (PTR_0080c4c7 == (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)0x0)
                                      {
                                        PTR_0080c4c7 = (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)
                                                       Library::DKW::TBL::FUN_006b54f0
                                                                 ((uint *)0x0,10,10);
                                      }
                                      iVar7 = Library::DKW::TBL::FUN_006b5aa0
                                                        ((uint *)PTR_0080c4c7,(char *)local_158);
                                      if (-1 < iVar7) {
                                        *(int *)(&this_00->field_0xde + (int)local_15c * 4) = iVar7;
                                      }
                                      break;
                                    }
                                    iVar37 = iVar37 + 1;
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                  } while (iVar37 < iVar7);
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x563:
                            iVar37 = thunk_FUN_0064f000((int)local_16c);
                            if (iVar37 != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                           (uint)local_160,&local_34.flags);
                                iVar37 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
                                  do {
                                    if (pDVar12->flags == (uint)DAT_0080874d) {
                                      if (PTR_0080c4c7 != (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)0x0)
                                      {
                                        FUN_006c87c0((int)PTR_0080c4c7,(uint)local_15c);
                                      }
                                      break;
                                    }
                                    iVar37 = iVar37 + 1;
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                  } while (iVar37 < iVar7);
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x564:
                            iVar37 = thunk_FUN_0064f040((int)local_16c);
                            if (iVar37 != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                           (uint)local_160,&local_34.flags);
                                iVar37 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
                                  do {
                                    if (pDVar12->flags == (uint)DAT_0080874d) {
                                      if (PTR_0080c4c7 != (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)0x0)
                                      {
                                        FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0080c4c7);
                                      }
                                      PTR_0080c4c7 = (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)
                                                     Library::DKW::TBL::FUN_006b54f0
                                                               ((uint *)0x0,10,10);
                                      break;
                                    }
                                    iVar37 = iVar37 + 1;
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                  } while (iVar37 < iVar7);
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x565:
                          case 0x566:
                            iVar37 = thunk_FUN_0064f320((int)local_16c);
                            if (iVar37 != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if (((iVar37 != 8) ||
                                  ((local_15c != (DArrayTy *)0x9 &&
                                   ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9)))) &&
                                 (local_15c != (DArrayTy *)0xff)) {
                                iVar37 = thunk_FUN_00668f50(this_00,(char *)local_15c,0,
                                                            &local_34.flags);
                                if (iVar37 == 1) {
                                  local_8 = (DArrayTy *)local_34.flags;
                                  pAVar13 = (AiFltClassTy *)
                                            thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                               (uint)local_160,&local_34.flags);
                                  local_10 = pAVar13;
                                  if (0 < (int)pAVar13) {
                                    pDVar12 = &local_34;
                                    local_1a0 = CONCAT31(local_1a0._1_3_,iVar7 == 0x565);
                                    local_c = (DArrayTy *)pAVar13;
                                    do {
                                      local_c = (DArrayTy *)pAVar13;
                                      thunk_FUN_0056a8d0(&DAT_00807620,
                                                         CONCAT31((int3)((uint)pAVar13 >> 8),
                                                                  (char)pDVar12->flags),
                                                         (byte)local_8,(char)local_1a0);
                                      pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                      pAVar13 = (AiFltClassTy *)((int)&local_c[-1].data + 3);
                                      local_c = (DArrayTy *)pAVar13;
                                    } while (pAVar13 != (AiFltClassTy *)0x0);
                                  }
                                  pPVar3 = g_playPanel_008016E4;
                                  if ((g_playPanel_008016E4 != (PlayPanelTy *)0x0) &&
                                     (local_10 != (AiFltClassTy *)0x0)) {
                                    local_8 = (DArrayTy *)&g_playPanel_008016E4->field_0181;
                                    g_playPanel_008016E4->field_0028 = 5;
                                    local_c = (DArrayTy *)0x8;
                                    do {
                                      if (local_8->flags != 0) {
                                        FUN_006e6080(pPVar3,2,local_8->flags,
                                                     (undefined4 *)&pPVar3->field_0x18);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != (DArrayTy *)0x0);
                                    local_c = (DArrayTy *)0x0;
                                  }
                                  goto cf_switch_join_00659A73;
                                }
                              }
                            }
                            break;
                          case 0x567:
                            iVar37 = thunk_FUN_0064f360((int)local_16c);
                            if (iVar37 != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                local_10 = (AiFltClassTy *)
                                           thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                              (uint)local_160,&local_34.flags);
                                if (0 < (int)local_10) {
                                  pDVar12 = &local_34;
                                  local_c = (DArrayTy *)local_10;
                                  do {
                                    thunk_FUN_0056aa00(&DAT_00807620,(byte)pDVar12->flags,
                                                       (char)local_15c);
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != (DArrayTy *)0x0);
                                }
                                pPVar3 = g_playPanel_008016E4;
                                if ((g_playPanel_008016E4 != (PlayPanelTy *)0x0) &&
                                   (local_10 != (AiFltClassTy *)0x0)) {
                                  local_8 = (DArrayTy *)&g_playPanel_008016E4->field_0181;
                                  g_playPanel_008016E4->field_0028 = 5;
                                  local_c = (DArrayTy *)0x8;
                                  do {
                                    if (local_8->flags != 0) {
                                      FUN_006e6080(pPVar3,2,local_8->flags,
                                                   (undefined4 *)&pPVar3->field_0x18);
                                    }
                                    local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != (DArrayTy *)0x0);
                                  local_c = (DArrayTy *)0x0;
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x568:
                            iVar37 = thunk_FUN_0064f3b0((int)local_16c);
                            if (iVar37 != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                iVar7 = thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                           (uint)local_160,&local_34.flags);
                                iVar37 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
                                  do {
                                    if (pDVar12->flags == (uint)DAT_0080874d) {
                                      DAT_00808790 = 1;
                                      break;
                                    }
                                    iVar37 = iVar37 + 1;
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                  } while (iVar37 < iVar7);
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x56a:
                            iVar37 = thunk_FUN_0064f3f0((int)local_16c);
                            if (iVar37 == 0) break;
                            thunk_FUN_0056abc0(&DAT_00807620,(char *)local_16c._8_4_);
                            goto cf_switch_join_00659A73;
                          case 0x578:
                            bVar35 = thunk_FUN_0064f430((int)local_16c);
                            if (CONCAT31(extraout_var_11,bVar35) != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                pDVar12 = (DArrayTy *)
                                          thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                             (uint)local_160,&local_34.flags);
                                if (0 < (int)pDVar12) {
                                  pDVar26 = &local_34;
                                  local_c = pDVar12;
                                  do {
                                    pDVar12 = local_15c;
                                    if ((int)local_15c < 0) {
                                      pDVar12 = (DArrayTy *)(DAT_00808a90 >> 8 & 0xff);
                                    }
                                    thunk_FUN_004d86a0(pDVar26->flags,(int)pDVar12);
                                    pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != (DArrayTy *)0x0);
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x579:
                            bVar35 = thunk_FUN_0064f470((int)local_16c);
                            if (CONCAT31(extraout_var_12,bVar35) != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                pDVar12 = (DArrayTy *)
                                          thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                             (uint)local_160,&local_34.flags);
                                if (0 < (int)pDVar12) {
                                  pDVar26 = &local_34;
                                  local_c = pDVar12;
                                  do {
                                    pDVar12 = local_15c;
                                    if ((int)local_15c < 0) {
                                      pDVar12 = (DArrayTy *)(DAT_00808a90 >> 0x10 & 0xff);
                                    }
                                    puVar17 = local_158;
                                    if ((int)local_158 < 0) {
                                      puVar17 = (uint *)(DAT_00808a90 >> 0x18);
                                    }
                                    thunk_FUN_004e51b0((int *)pDVar26->flags,&pDVar12->flags,puVar17
                                                      );
                                    pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != (DArrayTy *)0x0);
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x57a:
                            bVar35 = thunk_FUN_0064f4c0((int)local_16c);
                            if (CONCAT31(extraout_var_13,bVar35) == 0) break;
                            pDVar12 = (DArrayTy *)local_16c._8_4_;
                            if ((int)local_16c._8_4_ < 0) {
                              pDVar12 = (DArrayTy *)(DAT_00808a90 & 0xff);
                            }
                            thunk_FUN_004d8760((int)pDVar12);
                            goto cf_switch_join_00659A73;
                          case 0x57b:
                            iVar37 = thunk_FUN_0064f500((short *)local_16c);
                            if (iVar37 != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                local_8 = local_15c;
                                if ((int)local_15c < 0) {
                                  local_8 = (DArrayTy *)(uint)DAT_00808a9b;
                                }
                                pDVar12 = (DArrayTy *)
                                          thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                             (uint)local_160,&local_34.flags);
                                if (0 < (int)pDVar12) {
                                  pDVar26 = &local_34;
                                  local_c = pDVar12;
                                  do {
                                    dVar38 = pDVar26->flags;
                                    cVar5 = (&DAT_008087e8)[dVar38 * 0x51];
                                    uVar28 = (undefined2)((uint)local_150 >> 0x10);
                                    if (cVar5 == '\x01') {
                                      if ((int)local_8 < 3) {
                                        if (local_8 == (DArrayTy *)0x2) {
                                          __CreateObjPl(this_00,CONCAT22(uVar28,(short)pDVar26->
                                                  flags),0xc,(short *)local_158,(short *)local_154,
                                                  (short *)local_150,0xfffe,0xffffffff,(char *)0x0,
                                                  100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                                0x10),
                                                                         (short)pDVar26->flags),1,
                                                        (short *)local_158,(short *)local_154,
                                                        (short *)local_150,0xfffe,0xffffffff,
                                                        (char *)0x0,100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                                0x10),
                                                                         (short)pDVar26->flags),1,
                                                        (short *)local_158,(short *)local_154,
                                                        (short *)local_150,0xfffe,0xffffffff,
                                                        (char *)0x0,100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                                0x10),
                                                                         (short)pDVar26->flags),2,
                                                        (short *)local_158,(short *)local_154,
                                                        (short *)local_150,0xfffe,0xffffffff,
                                                        (char *)0x0,100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                                0x10),
                                                                         (short)pDVar26->flags),3,
                                                        (short *)local_158,(short *)local_154,
                                                        (short *)local_150,0xfffe,0xffffffff,
                                                        (char *)0x0,100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                                0x10),
                                                                         (short)pDVar26->flags),6,
                                                        (short *)local_158,(short *)local_154,
                                                        (short *)local_150,0xfffe,0xffffffff,
                                                        (char *)0x0,100,1,0,0);
                                        }
                                        else if (local_8 == (DArrayTy *)0x0) {
                                          __CreateObjPl(this_00,CONCAT22(uVar28,(short)pDVar26->
                                                  flags),0xc,(short *)local_158,(short *)local_154,
                                                  (short *)local_150,0xfffe,0xffffffff,(char *)0x0,
                                                  100,1,0,0);
                                        }
                                        else {
                                          if (local_8 != (DArrayTy *)0x1) goto LAB_00655324;
                                          __CreateObjPl(this_00,CONCAT22(uVar28,(short)pDVar26->
                                                  flags),0xc,(short *)local_158,(short *)local_154,
                                                  (short *)local_150,0xfffe,0xffffffff,(char *)0x0,
                                                  100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                                0x10),
                                                                         (short)pDVar26->flags),1,
                                                        (short *)local_158,(short *)local_154,
                                                        (short *)local_150,0xfffe,0xffffffff,
                                                        (char *)0x0,100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                                0x10),
                                                                         (short)pDVar26->flags),1,
                                                        (short *)local_158,(short *)local_154,
                                                        (short *)local_150,0xfffe,0xffffffff,
                                                        (char *)0x0,100,1,0,0);
                                          __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                                0x10),
                                                                         (short)pDVar26->flags),2,
                                                        (short *)local_158,(short *)local_154,
                                                        (short *)local_150,0xfffe,0xffffffff,
                                                        (char *)0x0,100,1,0,0);
                                        }
                                      }
                                      else {
joined_r0x00655322:
                                        if (local_8 != (DArrayTy *)0xff) {
LAB_00655324:
                                          uVar32 = local_14;
                                          pcVar29 = thunk_FUN_00674af0(iVar7);
                                          thunk_FUN_0064d0e0(this_00,-0x7d,pcVar29,uVar32,dVar38);
                                        }
                                      }
                                    }
                                    else if (cVar5 == '\x02') {
                                      if (2 < (int)local_8) goto joined_r0x00655322;
                                      if (local_8 == (DArrayTy *)0x2) {
                                        __CreateObjPl(this_00,CONCAT22(uVar28,(short)pDVar26->flags)
                                                      ,0x18,(short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0xd,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0xd,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0xe,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0xf,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0x12,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                      }
                                      else if (local_8 == (DArrayTy *)0x0) {
                                        __CreateObjPl(this_00,CONCAT22(uVar28,(short)pDVar26->flags)
                                                      ,0x18,(short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                      }
                                      else {
                                        if (local_8 != (DArrayTy *)0x1) goto LAB_00655324;
                                        __CreateObjPl(this_00,CONCAT22(uVar28,(short)pDVar26->flags)
                                                      ,0x18,(short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0xd,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0xd,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0xe,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                      }
                                    }
                                    else if (cVar5 == '\x03') {
                                      if (2 < (int)local_8) goto joined_r0x00655322;
                                      if (local_8 == (DArrayTy *)0x2) {
                                        __CreateObjPl(this_00,CONCAT22(uVar28,(short)pDVar26->flags)
                                                      ,0x19,(short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0x19,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0x19,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0x1e,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0x1e,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0x1e,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0x20,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0x22,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                      }
                                      else if (local_8 == (DArrayTy *)0x0) {
                                        __CreateObjPl(this_00,CONCAT22(uVar28,(short)pDVar26->flags)
                                                      ,0x19,(short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0x19,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0x19,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                      }
                                      else {
                                        if (local_8 != (DArrayTy *)0x1) goto LAB_00655324;
                                        __CreateObjPl(this_00,CONCAT22(uVar28,(short)pDVar26->flags)
                                                      ,0x19,(short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0x19,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0x19,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0x1e,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0x1e,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                        __CreateObjPl(this_00,CONCAT22((short)((uint)local_150 >>
                                                                              0x10),
                                                                       (short)pDVar26->flags),0x1e,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      (char *)0x0,100,1,0,0);
                                      }
                                    }
                                    pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    uVar32 = local_14;
                                  } while (local_c != (DArrayTy *)0x0);
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x582:
                            iVar37 = thunk_FUN_0064f5a0((int)local_16c);
                            if (iVar37 != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                pDVar12 = (DArrayTy *)
                                          thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                             (uint)local_160,&local_34.flags);
                                if (0 < (int)pDVar12) {
                                  pDVar26 = &local_34;
                                  local_c = pDVar12;
                                  uVar8 = extraout_ECX;
                                  uVar27 = extraout_EDX;
                                  do {
                                    switch(local_15c) {
                                    case (DArrayTy *)0xdc:
                                      if (local_158 == (uint *)0x0) {
                                        thunk_FUN_004d88b0((char)pDVar26->flags,local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        thunk_FUN_004d8800((char)pDVar26->flags,(int)local_154);
                                      }
                                      else {
                                        thunk_FUN_004d87b0((char)pDVar26->flags,(int)local_154);
                                      }
                                      break;
                                    case (DArrayTy *)0xdd:
                                      if (local_158 == (uint *)0x0) {
                                        thunk_FUN_004d89f0((char)pDVar26->flags,local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        thunk_FUN_004d8940((char)pDVar26->flags,(int)local_154);
                                      }
                                      else {
                                        thunk_FUN_004d88f0((char)pDVar26->flags,(int)local_154);
                                      }
                                      break;
                                    case (DArrayTy *)0xde:
                                      if (local_158 == (uint *)0x0) {
                                        thunk_FUN_004d8b30((char)pDVar26->flags,local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        thunk_FUN_004d8a80((char)pDVar26->flags,(int)local_154);
                                      }
                                      else {
                                        thunk_FUN_004d8a30((char)pDVar26->flags,(int)local_154);
                                      }
                                      break;
                                    case (DArrayTy *)0xdf:
                                      if (local_158 == (uint *)0x0) {
                                        thunk_FUN_004b7140(CONCAT31((int3)((uint)uVar27 >> 8),
                                                                    (char)pDVar26->flags),
                                                           (int)local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        thunk_FUN_004b70d0(CONCAT31((int3)((uint)local_158 >> 8),
                                                                    (char)pDVar26->flags),
                                                           (int)local_154);
                                      }
                                      else {
                                        thunk_FUN_004b7080(CONCAT31((int3)((uint)uVar8 >> 8),
                                                                    (char)pDVar26->flags),
                                                           (int)local_154);
                                      }
                                      break;
                                    case (DArrayTy *)0xe2:
                                      if (local_158 == (uint *)0x0) {
                                        thunk_FUN_004e4440(pDVar26->flags,local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        thunk_FUN_004e43c0(pDVar26->flags,(int)local_154);
                                      }
                                      else {
                                        thunk_FUN_004e4380(pDVar26->flags,(int)local_154);
                                      }
                                      break;
                                    case (DArrayTy *)0xe3:
                                      if (local_158 == (uint *)0x0) {
                                        thunk_FUN_004e41f0(pDVar26->flags,local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        thunk_FUN_004e4330(pDVar26->flags,(int)local_154);
                                      }
                                      else {
                                        thunk_FUN_004e4270(pDVar26->flags,(int)local_154);
                                      }
                                    }
                                    if (pDVar26->flags == (uint)DAT_0080874d) {
                                      thunk_FUN_004d8b70((char)pDVar26->flags);
                                    }
                                    thunk_FUN_004d78e0((char)pDVar26->flags);
                                    pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    uVar8 = extraout_ECX_00;
                                    uVar27 = extraout_EDX_00;
                                  } while (local_c != (DArrayTy *)0x0);
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x583:
                            iVar37 = thunk_FUN_0064f5e0((int)local_16c);
                            if (iVar37 == 0) break;
                            if ((DArrayTy *)local_16c._8_4_ == (DArrayTy *)0x0) {
                              thunk_FUN_004d8320(local_160);
                              goto cf_switch_join_00659A73;
                            }
                            if ((int)local_16c._8_4_ < 1) {
                              local_c = local_160;
                              iVar7 = thunk_FUN_004d82b0(0);
                              if ((int)local_c < iVar7) {
                                iVar7 = thunk_FUN_004d82b0(0);
                                iVar7 = iVar7 - (int)local_c;
                                goto LAB_0065565b;
                              }
                            }
                            else {
                              local_c = local_160;
                              iVar7 = thunk_FUN_004d82b0(0);
                              iVar7 = (int)&local_c->flags + iVar7;
LAB_0065565b:
                              thunk_FUN_004d8320(iVar7);
                            }
                            thunk_FUN_004d82b0(0);
                            goto cf_switch_join_00659A73;
                          case 0x584:
                            iVar37 = thunk_FUN_0064f620((short *)local_16c);
                            if (iVar37 == 0) break;
                            thunk_FUN_0064e5c0((char)local_16c._8_4_,local_160,local_15c,local_158,
                                               local_154);
                            goto cf_switch_join_00659A73;
                          case 0x585:
                            iVar37 = thunk_FUN_0064f6e0();
                            if (iVar37 == 0) break;
                            DAT_00808794 = thunk_FUN_0056f930((AnonShape_0056F930_C6277D80 *)
                                                              &DAT_00807620);
                            goto cf_switch_join_00659A73;
                          case 0x58c:
                            iVar37 = thunk_FUN_0064f700((short *)local_16c);
                            if (iVar37 == 0) break;
                            pSVar30 = (STFishC *)0x0;
                            sVar25 = (short)local_160;
                            sVar23 = (short)local_15c;
                            sVar6 = (short)local_158;
                            if (local_154 == (byte *)0x0) {
                              if ((((sVar25 < 0) || (SHORT_007fb240 <= sVar25)) ||
                                  ((sVar23 < 0 || ((SHORT_007fb242 <= sVar23 || (sVar6 < 0)))))) ||
                                 (SHORT_007fb244 <= sVar6)) {
LAB_00655871:
                                pSVar30 = (STFishC *)0x0;
                              }
                              else {
                                pSVar30 = *(STFishC **)
                                           (DAT_007fb248 +
                                           ((int)sVar6 * (int)SHORT_007fb246 +
                                            (int)sVar23 * (int)SHORT_007fb240 + (int)sVar25) * 8);
                              }
                            }
                            else if (local_154 == (byte *)0x1) {
                              if (((((sVar25 < 0) || (SHORT_007fb240 <= sVar25)) || (sVar23 < 0)) ||
                                  ((SHORT_007fb242 <= sVar23 || (sVar6 < 0)))) ||
                                 (SHORT_007fb244 <= sVar6)) goto LAB_00655871;
                              pSVar30 = *(STFishC **)
                                         (DAT_007fb248 + 4 +
                                         ((int)sVar6 * (int)SHORT_007fb246 +
                                          (int)sVar23 * (int)SHORT_007fb240 + (int)sVar25) * 8);
                            }
                            else if (local_154 == (byte *)0x2) {
                              iVar7 = _EnumDest((byte *)0x0,-1,sVar25,sVar23,sVar6,1,1,1,
                                                &LAB_00404c73,0);
                              if ((iVar7 == -1) && (g_sTFish_00811984 != (STFishC *)0x0)) {
                                pSVar30 = g_sTFish_00811984;
                              }
                            }
                            if ((pSVar30 != (STFishC *)0x0) &&
                               ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x0)) {
                              (*pSVar30->vtable->vfunc_70)(local_16c._8_4_);
                            }
                            goto cf_switch_join_00659A73;
                          case 0x58d:
                            iVar37 = thunk_FUN_0064f780((short *)local_16c);
                            if (iVar37 != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                pDVar12 = (DArrayTy *)
                                          thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                             (uint)local_160,&local_34.flags);
                                if (0 < (int)pDVar12) {
                                  local_10 = (AiFltClassTy *)&local_34;
                                  local_8 = pDVar12;
                                  do {
                                    local_c = local_144;
                                    uVar15 = uVar32;
                                    if ((int)local_144 < 0) {
                                      local_c = (DArrayTy *)0xfffe;
LAB_00655972:
                                      iVar37 = __CreateObjPl(this_00,CONCAT22((short)((uint)
                                                  local_158 >> 0x10),*(undefined2 *)local_10),
                                                  (short)local_15c,(short *)local_158,
                                                  (short *)local_154,(short *)local_150,local_c,
                                                  (uint)local_14c,local_148,local_140,local_13c,
                                                  (int)local_138,local_134);
                                      if (iVar37 != 0) {
LAB_006559d0:
                                        iVar37 = *(int *)local_10;
LAB_006559d6:
                                        pcVar29 = thunk_FUN_00674af0(iVar7);
                                        iVar36 = -0xab;
                                        goto LAB_006559e3;
                                      }
                                    }
                                    else {
                                      if ((int)local_144 < 1) goto LAB_00655972;
                                      pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)local_144
                                                                                  >> 8),
                                                                            *(undefined1 *)local_10)
                                                                   ,(uint)local_144);
                                      if (pSVar14 != (STGroupBoatC *)0x0) {
                                        iVar37 = thunk_FUN_00423300((int)pSVar14);
                                        if (iVar37 != 0) {
                                          if (((int)local_15c < 0x32) || (0x73 < (int)local_15c)) {
                                            bVar35 = false;
                                          }
                                          else {
                                            bVar35 = true;
                                          }
                                          if (((!bVar35) || (*(short *)(iVar37 + 0x7b) == 1)) &&
                                             (*(short *)(iVar37 + 0x7b) != -0x8000))
                                          goto LAB_00655972;
                                          goto LAB_006559d0;
                                        }
                                        iVar37 = *(int *)local_10;
                                        goto LAB_006559d6;
                                      }
                                      iVar37 = *(int *)local_10;
                                      pcVar29 = &DAT_008016a0;
                                      iVar36 = -0xaa;
LAB_006559e3:
                                      thunk_FUN_0064d0e0(this_00,iVar36,pcVar29,uVar15,iVar37);
                                    }
                                    local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                    local_8 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                  } while (local_8 != (DArrayTy *)0x0);
                                  local_8 = (DArrayTy *)0x0;
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x58e:
                            iVar37 = thunk_FUN_0064f900((short *)local_16c);
                            if (iVar37 != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                pDVar12 = (DArrayTy *)
                                          thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                             (uint)local_160,&local_34.flags);
                                if (0 < (int)pDVar12) {
                                  local_10 = (AiFltClassTy *)&local_34;
                                  local_c = pDVar12;
                                  do {
                                    local_8 = (DArrayTy *)_GetStaffGrpExch(*(undefined4 *)local_10);
                                    if (local_8 != (DArrayTy *)0x0) {
                                      uVar31 = 0;
                                      uVar15 = local_8->count;
                                      pDVar12 = extraout_EDX_01;
                                      if (0 < (int)uVar15) {
                                        do {
                                          if (uVar31 < uVar15) {
                                            pDVar12 = local_8->data;
                                            pdVar16 = (dword *)((int)&pDVar12->flags +
                                                               local_8->elementSize * uVar31);
                                          }
                                          else {
                                            pdVar16 = (dword *)0x0;
                                          }
                                          STAllPlayersC::DestroyObjectMsg
                                                    (g_sTAllPlayers_007FA174,
                                                     CONCAT31((int3)((uint)local_15c >> 8),
                                                              *(undefined1 *)local_10),
                                                     CONCAT22((short)((uint)pDVar12 >> 0x10),
                                                              (short)*pdVar16),CASE_1,local_15c);
                                          uVar31 = uVar31 + 1;
                                          uVar15 = local_8->count;
                                          pDVar12 = local_8;
                                        } while ((int)uVar31 < (int)uVar15);
                                      }
                                      FUN_006ae110((byte *)local_8);
                                    }
                                    local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != (DArrayTy *)0x0);
                                  local_c = (DArrayTy *)0x0;
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x58f:
                            iVar37 = thunk_FUN_0064f950((short *)local_16c);
                            if (iVar37 != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                pDVar12 = (DArrayTy *)
                                          thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                             (uint)local_160,&local_34.flags);
                                if (0 < (int)pDVar12) {
                                  local_10 = (AiFltClassTy *)&local_34;
                                  local_c = pDVar12;
                                  do {
                                    if ((char)local_154 == '\b') {
                                      cVar5 = *(char *)local_10;
                                    }
                                    else if (((char)local_154 < '\0') ||
                                            (cVar5 = (char)local_154, '\b' < (char)local_154)) {
                                      cVar5 = -1;
                                    }
                                    puVar17 = thunk_FUN_006775e0(*(undefined4 *)local_10,
                                                                 (uint)local_158,(uint)local_15c,
                                                                 local_150,cVar5,(short)local_14c,
                                                                 (short)local_148,(short)local_144,
                                                                 (short)local_140,(short)local_13c,
                                                                 (short)local_138,1);
                                    if (puVar17 != (uint *)0x0) {
                                      uVar32 = 0;
                                      if (0 < (int)puVar17[3]) {
                                        bVar35 = puVar17[3] != 0;
                                        uVar8 = extraout_EDX_02;
                                        do {
                                          if (bVar35) {
                                            puVar18 = (undefined2 *)
                                                      (puVar17[2] * uVar32 + puVar17[7]);
                                          }
                                          else {
                                            puVar18 = (undefined2 *)0x0;
                                          }
                                          STAllPlayersC::DestroyObjectMsg
                                                    (g_sTAllPlayers_007FA174,
                                                     CONCAT31((int3)((uint)local_134 >> 8),
                                                              *(undefined1 *)local_10),
                                                     CONCAT22((short)((uint)uVar8 >> 0x10),*puVar18)
                                                     ,CASE_1,local_134);
                                          uVar32 = uVar32 + 1;
                                          bVar35 = uVar32 < puVar17[3];
                                          uVar8 = extraout_EDX_03;
                                        } while ((int)uVar32 < (int)puVar17[3]);
                                      }
                                      FUN_006ae110((byte *)puVar17);
                                    }
                                    local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != (DArrayTy *)0x0);
                                  local_c = (DArrayTy *)0x0;
                                  uVar32 = local_14;
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x590:
                            iVar37 = thunk_FUN_0064fb00((short *)local_16c);
                            if (iVar37 != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                pDVar12 = (DArrayTy *)
                                          thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                             (uint)local_160,&local_34.flags);
                                if (0 < (int)pDVar12) {
                                  local_8 = &local_34;
                                  local_c = pDVar12;
                                  do {
                                    iVar37 = _CreateRCCont(this_00,CONCAT22((short)((uint)local_158
                                                                                   >> 0x10),
                                                                            (short)local_8->flags),
                                                           (short)local_15c,(int)local_158,
                                                           (int)local_154,local_150,local_14c,
                                                           local_148,(int)local_144);
                                    if (iVar37 != 0) {
                                      dVar38 = local_8->flags;
                                      uVar15 = uVar32;
                                      pcVar29 = thunk_FUN_00674af0(iVar7);
                                      thunk_FUN_0064d0e0(this_00,-0xab,pcVar29,uVar15,dVar38);
                                    }
                                    local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != (DArrayTy *)0x0);
                                  local_c = (DArrayTy *)0x0;
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x591:
                            iVar37 = thunk_FUN_0064fb80((short *)local_16c);
                            if (iVar37 != 0) {
                              iVar37 = (**(code **)(this_00->field_0000 + 0x18))();
                              if ((iVar37 != 8) || ((DArrayTy *)local_16c._8_4_ != (DArrayTy *)0x9))
                              {
                                pDVar12 = (DArrayTy *)
                                          thunk_FUN_00668f50(this_00,(char *)local_16c._8_4_,
                                                             (uint)local_160,&local_34.flags);
                                if (0 < (int)pDVar12) {
                                  pDVar26 = &local_34;
                                  local_c = pDVar12;
                                  do {
                                    DAT_008118fc = 0;
                                    _EnumRCCont((short)pDVar26->flags,(short)local_15c,
                                                (byte *)local_158,(short)local_154,(short)local_150,
                                                (short)local_14c,(short)local_148,(short)local_144,
                                                (short)local_140,&LAB_004050a1,&local_13c);
                                    pDVar26 = (DArrayTy *)&pDVar26->iteratorIndex;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != (DArrayTy *)0x0);
                                }
                                goto cf_switch_join_00659A73;
                              }
                            }
                            break;
                          case 0x592:
                            iVar37 = thunk_FUN_0064fce0((short *)local_16c);
                            if (iVar37 == 0) break;
                            iVar37 = _CreateArt(this_00,(short)local_16c._8_4_,(short)local_160,
                                                (int)local_15c,(int)local_158,local_154,
                                                (char *)local_150,local_14c,local_148);
LAB_00655f44:
                            if (iVar37 != 0) {
LAB_00655f4c:
                              iVar37 = -1;
                              uVar15 = uVar32;
                              pcVar29 = thunk_FUN_00674af0(iVar7);
                              thunk_FUN_0064d0e0(this_00,-0xab,pcVar29,uVar15,iVar37);
                            }
                            goto cf_switch_join_00659A73;
                          }
cf_common_join_00652A99:
                          iVar37 = -1;
                          uVar15 = uVar32;
                          pcVar29 = thunk_FUN_00674af0(iVar7);
                          thunk_FUN_0064d0e0(this_00,-0x7d,pcVar29,uVar15,iVar37);
cf_switch_join_00659A73:
                          pDVar12 = (DArrayTy *)((int)&local_170->flags + 1);
cf_continue_loop_00659A80:
                          local_170 = pDVar12;
                          iVar7 = *(int *)(local_178 + 0xf);
                          pDVar12 = *(DArrayTy **)(iVar7 + 0xc);
                        } while ((int)local_170 < (int)pDVar12);
                      }
                    }
                    goto LAB_00659aae;
                  }
                  iVar37 = -1;
                  pcVar9 = thunk_FUN_00674af0(iVar7);
                  iVar7 = -0x7d;
                }
                thunk_FUN_0064d0e0(this_00,iVar7,pcVar9,uVar15,iVar37);
                *pcVar29 = '\x01';
                pcVar29[0xb] = '\0';
                pcVar29[0xc] = '\0';
                pcVar29[0xd] = '\0';
                pcVar29[0xe] = '\0';
              }
            }
            else if (*(int *)(pcVar29 + 0xb) != 0) {
              if (*(int *)(pcVar29 + 0xb) == 1) {
                *pcVar29 = '\0';
              }
              *(int *)(pcVar29 + 0xb) = *(int *)(pcVar29 + 0xb) + -1;
            }
LAB_00659aae:
            iVar7 = this_00->field_04EE;
            local_14 = uVar32 + 1;
            bVar35 = local_14 < *(uint *)(iVar7 + 0xc);
          } while ((int)local_14 < (int)*(uint *)(iVar7 + 0xc));
        }
        iVar37 = local_19c;
        pAVar2 = (AnonShape_006B7830_769CA2DF *)this_00->field_04E2;
        iVar7 = pAVar2->field_0008;
        while (iVar37 < iVar7) {
          FUN_006b7830(pAVar2,iVar7 - 1);
          pAVar2 = (AnonShape_006B7830_769CA2DF *)this_00->field_04E2;
          iVar7 = pAVar2->field_0008;
        }
        if (local_194 == 0x456) {
          this_00->field_00D6 = this_00->field_00D6 + 1;
        }
        g_currentExceptionFrame = local_284.previous;
        return;
      }
      g_currentExceptionFrame = local_284.previous;
      if (local_180 != (DArrayTy *)0x0) {
        FUN_006ae110((byte *)local_180);
      }
      local_180 = (DArrayTy *)0x0;
      thunk_FUN_0064d0e0(local_188,iVar7,&DAT_008016a0,local_14,-1);
    }
  }
  return;
code_r0x00653bbb:
  iVar37 = iVar37 + 1;
  pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
  if ((int)local_10 <= iVar37) goto cf_switch_join_00659A73;
  goto LAB_00653bb7;
code_r0x00654366:
  iVar37 = iVar37 + 1;
  pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
  if (iVar7 <= iVar37) goto cf_switch_join_00659A73;
  goto LAB_00654362;
code_r0x006540bd:
  iVar37 = iVar37 + 1;
  pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
  if (iVar7 <= iVar37) goto cf_switch_join_00659A73;
  goto LAB_006540b9;
}

