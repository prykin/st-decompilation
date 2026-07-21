
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_interp.cpp
   Diagnostic line evidence: 338 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   
   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970.
   Evidence: incoming_receiver_captures=1; receiver_accesses=37; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=5; single_call_corroborated_by_receiver_family */

uint * __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::FUN_0066acc0
          (AnonReceiver_0064A970 *this,char *param_1,int param_2,int *param_3)

{
  byte bVar1;
  AnonReceiver_0064A970 *this_00;
  bool bVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  AiPlrClassTy *pAVar13;
  AiFltClassTy *pAVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined4 *puVar18;
  Global_sub_00677700_param_2Enum GVar19;
  Global_sub_006777D0_param_1Enum GVar20;
  undefined4 uVar21;
  uint *puVar22;
  undefined3 extraout_var;
  AnonReceiver_0065DA50 *this_01;
  char *pcVar23;
  AnonShape_0065E360_B94C37CB *pAVar24;
  char *pcVar25;
  uint uVar26;
  undefined4 unaff_ESI;
  AiFltClassTy **ppAVar27;
  void *unaff_EDI;
  undefined4 *puVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined4 uVar32;
  undefined1 *puVar33;
  undefined4 local_628 [78];
  undefined4 local_4f0 [78];
  undefined4 local_3b8 [78];
  undefined4 local_280 [8];
  InternalExceptionFrame local_260;
  undefined4 local_21c;
  undefined2 local_218;
  undefined4 local_214;
  undefined2 local_210;
  undefined1 local_1de;
  uint local_1d0 [2];
  char local_1c8;
  undefined4 *local_1c6;
  undefined4 local_19c [9];
  int local_178;
  int local_174;
  int local_170;
  int local_168;
  int local_164;
  int local_160;
  int local_158;
  int local_154;
  int local_150;
  int local_148;
  int local_144;
  int local_140;
  int local_138;
  int local_134;
  int local_130;
  int local_128;
  int local_124;
  int local_120;
  int local_118;
  int local_114;
  int local_110;
  int local_108;
  int local_104;
  int local_100;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_98;
  int local_94;
  int local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_78;
  int local_74;
  int local_70;
  AnonReceiver_0064A970 *local_64;
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  AiFltClassTy *local_50 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_1d;
  undefined4 local_1c;
  undefined4 local_18;
  uint *local_14;
  undefined4 local_10;
  char *local_c;
  AiFltClassTy *local_8;
  
  local_14 = (uint *)0x0;
  local_260.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_260;
  local_64 = this;
  iVar11 = Library::MSVCRT::__setjmp3(local_260.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_64;
  if (iVar11 != 0) {
    g_currentExceptionFrame = local_260.previous;
    if (local_14 != (uint *)0x0) {
      FreeAndNull(&local_14);
    }
    if (0 < iVar11) {
      iVar11 = -0x6b;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar11;
    }
    return (uint *)0x0;
  }
  Library::MSVCRT::_strncpy(&local_64->field_0x4,&DAT_008016a0,0x7f);
  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
  cVar3 = *param_1;
  pcVar25 = param_1;
  for (iVar11 = 0; (cVar3 != '\a' && (iVar11 < param_2)); iVar11 = iVar11 + 1) {
    cVar3 = pcVar25[5];
    pcVar25 = pcVar25 + 5;
  }
  if (iVar11 != param_2) {
    RaiseInternalException
              (-0x6b,g_overwriteContext_007ED77C,s_E____titans_ai_ai_interp_cpp_007d2cf4,0x152);
  }
  iVar11 = (int)*(short *)(param_1 + param_2 * 5 + 1);
  if (iVar11 < 0x7f7) {
    if (iVar11 == 0x7f6) {
      local_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_8 < 0xf);
      if ((param_1[0xf] != '\x06') && (param_1[0xf] != '\x03')) {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      local_c = (char *)0x4;
      if (4 < param_2) {
        local_8 = (AiFltClassTy *)0x14;
        do {
          if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
             (param_1[(int)&local_8->field_0x0] != '\x01')) {
            pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar25 != (char *)0x0) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8))
      {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      puVar22 = (uint *)(param_1 + 5);
      uVar12 = (*this_00->vtable->slot_00)(puVar22,local_50);
      iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,uVar12,puVar22);
      DAT_00811980 = 0;
      if (0 < iVar11) {
        local_10 = param_1 + 0x2d;
        local_18 = param_1 + 0x28;
        local_2c = (byte *)(param_1 + 0x23);
        local_1c = (byte *)(param_1 + 0x1e);
        local_24 = param_1 + 0x19;
        local_30 = param_1 + 0x14;
        local_28 = param_1 + 0xf;
        local_c = param_1 + 10;
        ppAVar27 = local_50;
        do {
          uVar32 = 0;
          puVar30 = &LAB_00405628;
          pcVar25 = local_10;
          sVar4 = (*this_00->vtable->slot_00)();
          sVar8 = (short)pcVar25;
          pcVar25 = local_18;
          sVar5 = (*this_00->vtable->slot_00)();
          sVar10 = (short)pcVar25;
          pbVar17 = local_2c;
          sVar6 = (*this_00->vtable->slot_00)();
          sVar9 = (short)pbVar17;
          pbVar17 = local_1c;
          uVar21 = (*this_00->vtable->slot_00)();
          uVar21 = (*this_00->vtable->slot_00)(local_24,uVar21);
          uVar21 = (*this_00->vtable->slot_00)(local_30,uVar21);
          uVar21 = (*this_00->vtable->slot_08)(local_28,uVar21);
          sVar7 = (*this_00->vtable->slot_00)(local_c,uVar21);
          _EnumRCCont(*(short *)ppAVar27,sVar7,pbVar17,sVar6,sVar9,sVar5,sVar10,sVar4,sVar8,puVar30,
                      uVar32);
          ppAVar27 = ppAVar27 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      goto cf_common_exit_0066DF5E;
    }
    if (iVar11 < 0x7e7) {
      if (iVar11 == 0x7e6) {
        local_c = (char *)0x0;
        if (0 < param_2) {
          local_8 = (AiFltClassTy *)0x0;
          do {
            if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
               (param_1[(int)&local_8->field_0x0] != '\x01')) {
              pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
              if (pcVar25 != (char *)0x0) {
                Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
              }
              *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
              RaiseInternalException
                        (-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
            }
            local_c = (char *)((int)local_c + 1);
            local_8 = (AiFltClassTy *)&local_8->field_0x5;
          } while ((int)local_c < param_2);
        }
        local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
        local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 5);
        iVar11 = (*this_00->vtable->slot_18)();
        if ((((iVar11 == 8) && ((local_8 == (AiFltClassTy *)0x9 || (local_c == (char *)0x9)))) ||
            (local_8 == (AiFltClassTy *)0xff)) || (local_c == (char *)0xff)) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,0,(uint *)local_50);
        if (iVar11 != 1) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_8 = local_50[0];
        iVar11 = thunk_FUN_00668f50(this_00,local_c,0,(uint *)local_50);
        if (iVar11 != 1) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_14 = Library::DKW::LIB::FUN_006aac10(4);
        if (DAT_00808a8f != '\0') {
          *local_14 = (uint)((&DAT_008087ea)[((uint)local_8 & 0xff) * 0x51] !=
                            (&DAT_008087ea)[((uint)local_50[0] & 0xff) * 0x51]);
          goto cf_common_exit_00670431;
        }
        if ((char)local_50[0] == (char)local_8) {
LAB_0066bdcc:
          iVar11 = 0;
        }
        else {
          uVar12 = (uint)local_50[0] & 0xff;
          uVar26 = (uint)local_8 & 0xff;
          bVar1 = g_playerRelationMatrix[uVar12][uVar26];
          if ((bVar1 == 0) && (g_playerRelationMatrix[uVar26][uVar12] == 0)) {
            iVar11 = -2;
          }
          else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar26][uVar12] == 0)) {
            iVar11 = -1;
          }
          else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar26][uVar12] == 1)) {
            iVar11 = 1;
          }
          else {
            if ((bVar1 != 1) || (g_playerRelationMatrix[uVar26][uVar12] != 1)) goto LAB_0066bdcc;
            iVar11 = 2;
          }
        }
        *local_14 = (uint)(iVar11 < 0);
        goto cf_common_exit_00670431;
      }
      if (iVar11 < 0x7d7) {
        if (iVar11 == 0x7d6) {
          local_c = (char *)0x0;
          if (0 < param_2) {
            local_10 = (char *)0x0;
            do {
              if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar25 != (char *)0x0) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                RaiseInternalException
                          (-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_10 = local_10 + 5;
            } while ((int)local_c < param_2);
          }
          iVar11 = (*this_00->vtable->slot_00)(param_1);
          if ((PTR_0080c4c7 == (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)0x0) ||
             ((int)PTR_0080c4c7->field_0008 <= iVar11)) {
            local_c = (char *)0x0;
          }
          else {
            local_c = *(char **)(PTR_0080c4c7->field_0014 + iVar11 * 4);
          }
          if (local_c == (char *)0x0) {
            pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar25 != (char *)0x0) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          puVar22 = (uint *)FUN_006c49b0(local_c);
          if (param_3 == (int *)0x0) {
            g_currentExceptionFrame = local_260.previous;
            return puVar22;
          }
          *param_3 = 3;
          g_currentExceptionFrame = local_260.previous;
          return puVar22;
        }
        if (0x7d2 < iVar11) {
          if (iVar11 == 0x7d3) {
            local_c = (char *)0x0;
            if (0 < param_2) {
              local_10 = (char *)0x0;
              do {
                if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                  pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (pcVar25 != (char *)0x0) {
                    Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  RaiseInternalException
                            (-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
                }
                local_c = (char *)((int)local_c + 1);
                local_10 = local_10 + 5;
              } while ((int)local_c < param_2);
            }
            iVar11 = (*this_00->vtable->slot_00)(param_1);
            iVar15 = (*this_00->vtable->slot_00)(param_1 + 5);
            local_14 = Library::DKW::LIB::FUN_006aac10(4);
            if (iVar15 < iVar11) {
              uVar12 = (*this_00->vtable->slot_10)(iVar15,iVar11);
              *local_14 = uVar12;
            }
            else {
              uVar12 = (*this_00->vtable->slot_10)(iVar11,iVar15);
              *local_14 = uVar12;
            }
          }
          else {
            if (iVar11 != 0x7d4) {
              if (iVar11 == 0x7d5) {
                local_c = (char *)0x0;
                if (0 < param_2) {
                  local_10 = (char *)0x0;
                  do {
                    if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                      if (pcVar25 != (char *)0x0) {
                        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
                      }
                      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                      RaiseInternalException
                                (-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
                    }
                    local_c = local_c + 1;
                    local_10 = local_10 + 5;
                  } while ((int)local_c < param_2);
                }
                local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
                if (((int)local_8 < 0) || (3 < (int)local_8)) {
                  pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (pcVar25 != (char *)0x0) {
                    Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  RaiseInternalException
                            (-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
                }
                pAVar14 = (AiFltClassTy *)(*this_00->vtable->slot_28)(local_8);
                goto LAB_0066d630;
              }
              goto cf_common_exit_00670456;
            }
            local_c = (char *)0x0;
            if (0 < param_2) {
              local_10 = (char *)0x0;
              do {
                if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                  pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (pcVar25 != (char *)0x0) {
                    Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  RaiseInternalException
                            (-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
                }
                local_c = (char *)((int)local_c + 1);
                local_10 = local_10 + 5;
              } while ((int)local_c < param_2);
            }
            local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
            if (((int)local_8 < 0) || (0x20 < (int)local_8)) {
              pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
              if (pcVar25 != (char *)0x0) {
                Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
              }
              *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
              RaiseInternalException
                        (-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
            }
            local_14 = Library::DKW::LIB::FUN_006aac10(4);
            uVar12 = (*this_00->vtable->slot_24)(local_8);
            *local_14 = uVar12;
          }
          goto cf_common_exit_00670431;
        }
        if (iVar11 == 0x7d2) {
          local_c = (char *)0x0;
          if (0 < param_2) {
            local_10 = (char *)0x0;
            do {
              if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar25 != (char *)0x0) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                RaiseInternalException
                          (-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_10 = local_10 + 5;
            } while ((int)local_c < param_2);
          }
          local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
          if (((int)local_8 < 0) || (0xff < (int)local_8)) {
            pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar25 != (char *)0x0) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          local_14 = Library::DKW::LIB::FUN_006aac10(4);
          *local_14 = (&DAT_0080e43b)[(int)local_8];
          goto cf_common_exit_00670431;
        }
        if (iVar11 < 0x7d1) {
          if (iVar11 == 2000) {
            local_c = (char *)0x0;
            if (0 < param_2) {
              local_10 = (char *)0x0;
              do {
                if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                  pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (pcVar25 != (char *)0x0) {
                    Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  RaiseInternalException
                            (-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
                }
                local_c = (char *)((int)local_c + 1);
                local_10 = local_10 + 5;
              } while ((int)local_c < param_2);
            }
            local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
            local_10 = (char *)(*this_00->vtable->slot_00)(param_1 + 5);
            local_c = (char *)0x0;
            if ((local_8 == (AiFltClassTy *)0x9) &&
               (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8)) {
              iVar11 = (*this_00->vtable->slot_2C)(local_10);
              local_c = (char *)(uint)(iVar11 == 0);
              local_14 = Library::DKW::LIB::FUN_006aac10(4);
              *local_14 = (uint)local_c;
            }
            else {
              iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,0,(uint *)local_50);
              if (iVar11 == 1) {
                if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
                  pAVar13 = (AiPlrClassTy *)0x0;
                }
                else {
                  pAVar13 = thunk_FUN_004357f0((char)local_50[0]);
                }
                if (pAVar13 != (AiPlrClassTy *)0x0) {
                  iVar11 = (**(code **)(*(int *)&pAVar13->field_0x1c + 0x2c))(local_10);
                  local_c = (char *)(uint)(iVar11 == 0);
                  local_14 = Library::DKW::LIB::FUN_006aac10(4);
                  *local_14 = (uint)local_c;
                  goto cf_common_exit_00670431;
                }
                local_8 = local_50[0];
                pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar25 != (char *)0x0) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
                }
                *(AiFltClassTy **)&this_00->field_0x84 = local_8;
              }
              else {
                pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar25 != (char *)0x0) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
              }
              RaiseInternalException
                        (-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
              local_14 = Library::DKW::LIB::FUN_006aac10(4);
              *local_14 = (uint)local_c;
            }
          }
          else {
            if ((iVar11 < 800) || (0x321 < iVar11)) goto cf_common_exit_00670456;
            local_c = (char *)0x0;
            if (0 < param_2) {
              local_10 = (char *)0x0;
              do {
                if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                  pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (pcVar25 != (char *)0x0) {
                    Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  RaiseInternalException
                            (-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
                }
                local_c = (char *)((int)local_c + 1);
                local_10 = local_10 + 5;
              } while ((int)local_c < param_2);
            }
            local_14 = Library::DKW::LIB::FUN_006aac10(4);
            uVar12 = (*this_00->vtable->slot_00)(param_1);
            *local_14 = uVar12;
          }
          goto cf_common_exit_00670431;
        }
        if (iVar11 != 0x7d1) {
cf_common_exit_00670456:
          pcVar25 = thunk_FUN_00674af0(iVar11);
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x77,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          g_currentExceptionFrame = local_260.previous;
          return local_14;
        }
        local_c = (char *)0x0;
        if (0 < param_2) {
          local_10 = (char *)0x0;
          do {
            if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
              pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
              if (pcVar25 != (char *)0x0) {
                Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
              }
              *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
              RaiseInternalException
                        (-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
            }
            local_c = (char *)((int)local_c + 1);
            local_10 = local_10 + 5;
          } while ((int)local_c < param_2);
        }
        local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
        local_10 = (char *)(*this_00->vtable->slot_00)(param_1 + 5);
        if (((int)local_10 < 0) || (0xff < (int)local_10)) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = (char *)0x0;
        if ((local_8 == (AiFltClassTy *)0x9) &&
           (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8)) {
          local_c = (char *)(*this_00->vtable->slot_1C)(local_10);
          local_14 = Library::DKW::LIB::FUN_006aac10(4);
          *local_14 = (uint)local_c;
          goto cf_common_exit_00670431;
        }
        iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,0,(uint *)local_50);
        if (iVar11 != 1) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          goto joined_r0x0066b1d2;
        }
        if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
          pAVar13 = (AiPlrClassTy *)0x0;
        }
        else {
          pAVar13 = thunk_FUN_004357f0((char)local_50[0]);
        }
        if (pAVar13 != (AiPlrClassTy *)0x0) {
          local_c = (char *)(**(code **)(*(int *)&pAVar13->field_0x1c + 0x1c))(local_10);
          local_14 = Library::DKW::LIB::FUN_006aac10(4);
          *local_14 = (uint)local_c;
          goto cf_common_exit_00670431;
        }
        local_8 = local_50[0];
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
LAB_0066b1ad:
        *(AiFltClassTy **)&this_00->field_0x84 = local_8;
LAB_0066b1fb:
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        local_14 = Library::DKW::LIB::FUN_006aac10(4);
        *local_14 = (uint)local_c;
      }
      else {
        switch(iVar11) {
        case 0x7d7:
          uVar12 = (*this_00->vtable->slot_18)();
          local_14 = Library::DKW::LIB::FUN_006aac10(4);
          if (uVar12 == 8) {
            uVar12 = 0xff;
          }
          *local_14 = uVar12;
          break;
        default:
          goto cf_common_exit_00670456;
        case 0x7da:
          local_14 = Library::DKW::LIB::FUN_006aac10(4);
          *local_14 = (uint)PTR_00802a38->field_00E4 / 0x19;
          break;
        case 0x7dc:
          local_14 = Library::DKW::LIB::FUN_006aac10(4);
          *local_14 = PTR_00802a38->field_00E4;
          break;
        case 0x7dd:
          local_c = (char *)0x0;
          if (0 < param_2) {
            local_10 = (char *)0x0;
            do {
              if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar25 != (char *)0x0) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                RaiseInternalException
                          (-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_10 = local_10 + 5;
            } while ((int)local_c < param_2);
          }
          local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
          local_c = (char *)0x0;
          if ((local_8 == (AiFltClassTy *)0x9) &&
             (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8)) {
            local_c = (char *)(*this_00->vtable->slot_14)();
            local_14 = Library::DKW::LIB::FUN_006aac10(4);
            *local_14 = (uint)local_c;
            break;
          }
          iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,0,(uint *)local_50);
          if (iVar11 == 1) {
            if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
              pAVar13 = (AiPlrClassTy *)0x0;
            }
            else {
              pAVar13 = thunk_FUN_004357f0((char)local_50[0]);
            }
            if (pAVar13 != (AiPlrClassTy *)0x0) {
              local_c = (char *)(**(code **)(*(int *)&pAVar13->field_0x1c + 0x14))();
              local_14 = Library::DKW::LIB::FUN_006aac10(4);
              *local_14 = (uint)local_c;
              break;
            }
            local_8 = local_50[0];
            pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar25 != (char *)0x0) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
            }
            goto LAB_0066b1ad;
          }
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
joined_r0x0066b1d2:
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          goto LAB_0066b1fb;
        case 0x7de:
          local_c = (char *)0x0;
          if (0 < param_2) {
            local_10 = (char *)0x0;
            do {
              if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar25 != (char *)0x0) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                RaiseInternalException
                          (-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_10 = local_10 + 5;
            } while ((int)local_c < param_2);
          }
          local_c = (char *)(*this_00->vtable->slot_00)(param_1);
          if (((local_c == (char *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8)) ||
             (local_c == (char *)0xff)) {
            pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar25 != (char *)0x0) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          iVar11 = thunk_FUN_00668f50(this_00,local_c,0,(uint *)local_50);
          if (iVar11 != 1) {
            pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar25 != (char *)0x0) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          local_1d = '\0';
          local_8 = (AiFltClassTy *)0x0;
          if (g_cPanel_00801688 != (CPanelTy *)0x0) {
            thunk_FUN_004f91a0(g_cPanel_00801688,(byte)local_50[0],&local_1d,(int *)&local_8);
          }
          local_14 = Library::DKW::LIB::FUN_006aac10(4);
          *local_14 = ~-(uint)(local_1d != '\x01') & (uint)local_8;
          break;
        case 0x7e4:
          local_14 = Library::DKW::LIB::FUN_006aac10(4);
          if ((DAT_008087a0 == '\x03') || (DAT_008087a0 == '\b')) {
            *local_14 = _DAT_00807340 & 0xff;
          }
          else {
            *local_14 = 0;
          }
          break;
        case 0x7e5:
          local_c = (char *)0x0;
          if (0 < param_2) {
            local_8 = (AiFltClassTy *)0x0;
            do {
              if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
                 (param_1[(int)&local_8->field_0x0] != '\x01')) {
                pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar25 != (char *)0x0) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                RaiseInternalException
                          (-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_8 = (AiFltClassTy *)&local_8->field_0x5;
            } while ((int)local_c < param_2);
          }
          local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
          if (((local_8 == (AiFltClassTy *)0x9) &&
              (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8)) ||
             (local_8 == (AiFltClassTy *)0xff)) {
            pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar25 != (char *)0x0) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,0,(uint *)local_50);
          if (iVar11 != 1) {
            pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar25 != (char *)0x0) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          local_14 = Library::DKW::LIB::FUN_006aac10(4);
          if (DAT_00808a8f != '\0') {
            *local_14 = (uint)(byte)(&DAT_008087ea)[(int)local_50[0] * 0x51];
            break;
          }
          goto LAB_0066bb5e;
        }
      }
      goto cf_common_exit_00670431;
    }
    switch(iVar11) {
    case 0x7e7:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
             (param_1[(int)&local_8->field_0x0] != '\x01')) {
            pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar25 != (char *)0x0) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_c = (char *)(*this_00->vtable->slot_00)(param_1);
      if (((local_c == (char *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8)) ||
         (local_c == (char *)0xff)) {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      if (local_c == (char *)0x8) {
        local_c = (char *)(uint)DAT_0080874d;
      }
      pcVar25 = local_c;
      if (local_c == (char *)0x9) {
        pcVar25 = (char *)(*this_00->vtable->slot_18)();
      }
      local_14 = Library::DKW::LIB::FUN_006aac10(4);
      if ((pcVar25 < 8) &&
         ((PTR_00802a38 == (STPlaySystemC *)0x0 || ((byte)(&DAT_008087e9)[(int)pcVar25 * 0x51] < 8))
         )) {
        *local_14 = 1;
        break;
      }
LAB_0066bb5e:
      *local_14 = 0;
      break;
    case 0x7e8:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
             (param_1[(int)&local_8->field_0x0] != '\x01')) {
            pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar25 != (char *)0x0) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      uVar12 = (*this_00->vtable->slot_00)(param_1);
      uVar26 = 0;
      if (DAT_00808a8f == '\0') {
LAB_0066bff3:
        local_14 = Library::DKW::LIB::FUN_006aac10(4);
        *local_14 = uVar26;
      }
      else {
        pbVar17 = &DAT_008087ea;
        do {
          if (((PTR_00802a38 == (STPlaySystemC *)0x0) || (pbVar17[-1] < 8)) && (*pbVar17 == uVar12))
          {
            uVar26 = 1;
            goto LAB_0066bff3;
          }
          pbVar17 = pbVar17 + 0x51;
        } while ((int)pbVar17 < 0x808a72);
        local_14 = Library::DKW::LIB::FUN_006aac10(4);
        *local_14 = 0;
      }
      break;
    case 0x7e9:
      local_14 = Library::DKW::LIB::FUN_006aac10(4);
      *local_14 = (uint)(DAT_00808a8f != '\0');
      break;
    case 0x7ea:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
             (param_1[(int)&local_8->field_0x0] != '\x01')) {
            pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar25 != (char *)0x0) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if (((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8)
          ) || (local_8 == (AiFltClassTy *)0xff)) {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,0,(uint *)local_50);
      if (iVar11 != 1) {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      local_14 = Library::DKW::LIB::FUN_006aac10(4);
      *local_14 = (uint)(byte)local_50[0][0x32cd].field_0x268;
      break;
    case 0x7eb:
      local_14 = Library::DKW::LIB::FUN_006aac10(4);
      *local_14 = (uint)DAT_0080874d;
      break;
    case 0x7ec:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
             (param_1[(int)&local_8->field_0x0] != '\x01')) {
            pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar25 != (char *)0x0) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if (((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8)
          ) || (local_8 == (AiFltClassTy *)0xff)) {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,0,(uint *)local_50);
      if (iVar11 != 1) {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      local_14 = Library::DKW::LIB::FUN_006aac10(4);
      *local_14 = (uint)(byte)(&DAT_008087e8)[(int)local_50[0] * 0x51];
      break;
    case 0x7ed:
      local_14 = Library::DKW::LIB::FUN_006aac10(4);
      *local_14 = (uint)(DAT_00808a94 != '\0');
      break;
    case 0x7ee:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
             (param_1[(int)&local_8->field_0x0] != '\x01')) {
            pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar25 != (char *)0x0) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8))
      {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      puVar22 = (uint *)(param_1 + 5);
      uVar12 = (*this_00->vtable->slot_00)(puVar22,local_50);
      iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,uVar12,puVar22);
      DAT_00811980 = 0;
      if (0 < iVar11) {
        local_10 = param_1 + 0x2d;
        local_18 = param_1 + 0x28;
        local_2c = (byte *)(param_1 + 0x23);
        local_1c = (byte *)(param_1 + 0x1e);
        local_24 = param_1 + 0x19;
        local_30 = param_1 + 0x14;
        local_28 = param_1 + 0xf;
        local_c = param_1 + 10;
        ppAVar27 = local_50;
        do {
          puVar31 = (undefined *)0x0;
          puVar22 = (uint *)0x0;
          puVar30 = &LAB_00401e8d;
          pcVar25 = local_10;
          sVar4 = (*this_00->vtable->slot_00)();
          sVar10 = (short)pcVar25;
          pcVar25 = local_18;
          sVar5 = (*this_00->vtable->slot_00)();
          sVar9 = (short)pcVar25;
          pbVar17 = local_2c;
          sVar6 = (*this_00->vtable->slot_00)();
          sVar7 = (short)pbVar17;
          pbVar17 = local_1c;
          pbVar16 = (byte *)(*this_00->vtable->slot_00)();
          cVar3 = (char)pbVar17;
          pcVar25 = local_24;
          uVar21 = (*this_00->vtable->slot_00)();
          uVar21 = (*this_00->vtable->slot_00)(local_30,uVar21);
          uVar21 = (*this_00->vtable->slot_00)(local_28,uVar21);
          uVar12 = (*this_00->vtable->slot_00)(local_c,0x3fffffff,0,uVar21);
          _EnumPlObj(*ppAVar27,uVar12,(uint)pcVar25,pbVar16,cVar3,sVar6,sVar7,sVar5,sVar9,sVar4,
                     sVar10,puVar30,puVar22,puVar31);
          ppAVar27 = ppAVar27 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      goto cf_common_exit_0066DF5E;
    case 0x7ef:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
             (param_1[(int)&local_8->field_0x0] != '\x01')) {
            pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar25 != (char *)0x0) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8))
      {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      puVar22 = (uint *)(param_1 + 5);
      uVar12 = (*this_00->vtable->slot_00)(puVar22,local_50);
      iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,uVar12,puVar22);
      DAT_00811980 = 0;
      if (0 < iVar11) {
        local_10 = param_1 + 0x2d;
        local_18 = param_1 + 0x28;
        local_2c = (byte *)(param_1 + 0x23);
        local_1c = (byte *)(param_1 + 0x1e);
        local_24 = param_1 + 0x19;
        local_30 = param_1 + 0x14;
        local_28 = param_1 + 0xf;
        local_c = param_1 + 10;
        ppAVar27 = local_50;
        do {
          puVar31 = (undefined *)0x0;
          puVar22 = (uint *)0x0;
          puVar30 = &LAB_00401e8d;
          pcVar25 = local_10;
          sVar4 = (*this_00->vtable->slot_00)();
          sVar10 = (short)pcVar25;
          pcVar25 = local_18;
          sVar5 = (*this_00->vtable->slot_00)();
          sVar9 = (short)pcVar25;
          pbVar17 = local_2c;
          sVar6 = (*this_00->vtable->slot_00)();
          sVar7 = (short)pbVar17;
          pbVar17 = local_1c;
          pbVar16 = (byte *)(*this_00->vtable->slot_00)();
          cVar3 = (char)pbVar17;
          uVar21 = (*this_00->vtable->slot_00)(local_24);
          uVar21 = (*this_00->vtable->slot_00)(local_30,uVar21);
          uVar21 = (*this_00->vtable->slot_00)(local_28,uVar21);
          uVar12 = (*this_00->vtable->slot_00)(local_c,0,uVar21);
          _EnumPlObj(*ppAVar27,0,uVar12,pbVar16,cVar3,sVar6,sVar7,sVar5,sVar9,sVar4,sVar10,puVar30,
                     puVar22,puVar31);
          ppAVar27 = ppAVar27 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      goto cf_common_exit_0066DF5E;
    case 0x7f0:
      local_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_8 < 10);
      if ((param_1[10] != '\x06') && (param_1[10] != '\x03')) {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      local_c = (char *)0x3;
      if (3 < param_2) {
        local_8 = (AiFltClassTy *)0xf;
        do {
          if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
             (param_1[(int)&local_8->field_0x0] != '\x01')) {
            pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar25 != (char *)0x0) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8))
      {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      puVar22 = (uint *)(param_1 + 5);
      uVar12 = (*this_00->vtable->slot_00)(puVar22,local_50);
      iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,uVar12,puVar22);
      DAT_00811980 = 0;
      if (0 < iVar11) {
        local_10 = param_1 + 0x2d;
        local_18 = param_1 + 0x28;
        local_2c = (byte *)(param_1 + 0x23);
        local_1c = (byte *)(param_1 + 0x1e);
        local_24 = param_1 + 0x19;
        local_30 = param_1 + 0x14;
        local_28 = param_1 + 0xf;
        local_c = param_1 + 10;
        ppAVar27 = local_50;
        do {
          puVar31 = (undefined *)0x0;
          puVar22 = (uint *)0x0;
          puVar30 = &LAB_00401e8d;
          pcVar25 = local_10;
          sVar4 = (*this_00->vtable->slot_00)();
          sVar10 = (short)pcVar25;
          pcVar25 = local_18;
          sVar5 = (*this_00->vtable->slot_00)();
          sVar9 = (short)pcVar25;
          pbVar17 = local_2c;
          sVar6 = (*this_00->vtable->slot_00)();
          sVar7 = (short)pbVar17;
          pbVar17 = local_1c;
          uVar21 = (*this_00->vtable->slot_00)();
          cVar3 = (char)pbVar17;
          uVar21 = (*this_00->vtable->slot_00)(local_24,uVar21);
          uVar21 = (*this_00->vtable->slot_00)(local_30,uVar21);
          uVar21 = (*this_00->vtable->slot_00)(local_28,uVar21);
          pbVar17 = (byte *)(*this_00->vtable->slot_08)(local_c,uVar21);
          _EnumPlObj(*ppAVar27,0,0x3fffffff,pbVar17,cVar3,sVar6,sVar7,sVar5,sVar9,sVar4,sVar10,
                     puVar30,puVar22,puVar31);
          ppAVar27 = ppAVar27 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
cf_common_exit_0066DF5E:
      local_14 = Library::DKW::LIB::FUN_006aac10(4);
      *local_14 = DAT_00811980;
      break;
    case 0x7f1:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
             (param_1[(int)&local_8->field_0x0] != '\x01')) {
            pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar25 != (char *)0x0) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8))
      {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      puVar22 = (uint *)(param_1 + 5);
      uVar12 = (*this_00->vtable->slot_00)(puVar22,local_50);
      pcVar25 = (char *)thunk_FUN_00668f50(this_00,(char *)local_8,uVar12,puVar22);
      local_10 = (char *)0x0;
      if (0 < (int)pcVar25) {
        local_c = param_1 + 10;
        local_8 = (AiFltClassTy *)local_50;
        do {
          local_18 = pcVar25;
          puVar18 = (undefined4 *)thunk_FUN_0043e420(local_4f0,*(char *)local_8);
          pcVar25 = local_c;
          puVar28 = local_19c;
          for (iVar11 = 0x4e; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar28 = *puVar18;
            puVar18 = puVar18 + 1;
            puVar28 = puVar28 + 1;
          }
          uVar12 = (*this_00->vtable->slot_00)(pcVar25);
          iVar11 = 0;
          do {
            uVar26 = 1 << ((byte)iVar11 & 0x1f) & uVar12;
            if (uVar26 < 0x101) {
              iVar15 = local_74;
              if (uVar26 != 0x100) {
                switch(uVar26) {
                case 1:
                  iVar15 = local_f4;
                  break;
                case 2:
                  iVar15 = local_e4;
                  break;
                default:
                  goto cf_continue_loop_0066CACD;
                case 4:
                  iVar15 = local_d4;
                  break;
                case 8:
                  iVar15 = local_c4;
                  break;
                case 0x10:
                  iVar15 = local_b4;
                  break;
                case 0x20:
                  iVar15 = local_a4;
                  break;
                case 0x40:
                  iVar15 = local_94;
                  break;
                case 0x80:
                  iVar15 = local_84;
                }
              }
cf_common_join_0066CACB:
              local_10 = (char *)((int)local_10 + iVar15);
            }
            else {
              if (0x100000 < uVar26) {
                iVar15 = local_124;
                if (((uVar26 != 0x200000) && (iVar15 = local_114, uVar26 != 0x400000)) &&
                   (iVar15 = local_104, uVar26 != 0x800000)) goto cf_continue_loop_0066CACD;
                goto cf_common_join_0066CACB;
              }
              iVar15 = local_134;
              if (uVar26 == 0x100000) goto cf_common_join_0066CACB;
              if (uVar26 < 0x40001) {
                iVar15 = local_174;
                if (((uVar26 == 0x40000) || (iVar15 = local_154, uVar26 == 0x10000)) ||
                   (iVar15 = local_144, uVar26 == 0x20000)) goto cf_common_join_0066CACB;
              }
              else {
                iVar15 = local_164;
                if (uVar26 == 0x80000) goto cf_common_join_0066CACB;
              }
            }
cf_continue_loop_0066CACD:
            iVar11 = iVar11 + 1;
          } while (iVar11 < 0x20);
          local_8 = (AiFltClassTy *)&local_8->field_0x4;
          pcVar25 = local_18 + -1;
          local_18 = pcVar25;
        } while (pcVar25 != (char *)0x0);
      }
      local_14 = Library::DKW::LIB::FUN_006aac10(4);
      *local_14 = (uint)local_10;
      break;
    case 0x7f2:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
             (param_1[(int)&local_8->field_0x0] != '\x01')) {
            pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar25 != (char *)0x0) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8))
      {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      puVar22 = (uint *)(param_1 + 5);
      uVar12 = (*this_00->vtable->slot_00)(puVar22,local_50);
      pcVar25 = (char *)thunk_FUN_00668f50(this_00,(char *)local_8,uVar12,puVar22);
      local_10 = (char *)0x0;
      if (0 < (int)pcVar25) {
        local_c = param_1 + 10;
        local_8 = (AiFltClassTy *)local_50;
        do {
          local_18 = pcVar25;
          puVar18 = (undefined4 *)thunk_FUN_0043e420(local_3b8,*(char *)local_8);
          pcVar25 = local_c;
          puVar28 = local_19c;
          for (iVar11 = 0x4e; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar28 = *puVar18;
            puVar18 = puVar18 + 1;
            puVar28 = puVar28 + 1;
          }
          uVar12 = (*this_00->vtable->slot_00)(pcVar25);
          iVar11 = 0;
          do {
            uVar26 = 1 << ((byte)iVar11 & 0x1f) & uVar12;
            if (uVar26 < 0x101) {
              iVar15 = local_70;
              if (uVar26 != 0x100) {
                switch(uVar26) {
                case 1:
                  iVar15 = local_f0;
                  break;
                case 2:
                  iVar15 = local_e0;
                  break;
                default:
                  goto cf_continue_loop_0066CD4A;
                case 4:
                  iVar15 = local_d0;
                  break;
                case 8:
                  iVar15 = local_c0;
                  break;
                case 0x10:
                  iVar15 = local_b0;
                  break;
                case 0x20:
                  iVar15 = local_a0;
                  break;
                case 0x40:
                  iVar15 = local_90;
                  break;
                case 0x80:
                  iVar15 = local_80;
                }
              }
cf_common_join_0066CD48:
              local_10 = (char *)((int)local_10 + iVar15);
            }
            else {
              if (0x100000 < uVar26) {
                iVar15 = local_120;
                if (((uVar26 != 0x200000) && (iVar15 = local_110, uVar26 != 0x400000)) &&
                   (iVar15 = local_100, uVar26 != 0x800000)) goto cf_continue_loop_0066CD4A;
                goto cf_common_join_0066CD48;
              }
              iVar15 = local_130;
              if (uVar26 == 0x100000) goto cf_common_join_0066CD48;
              if (uVar26 < 0x40001) {
                iVar15 = local_170;
                if (((uVar26 == 0x40000) || (iVar15 = local_150, uVar26 == 0x10000)) ||
                   (iVar15 = local_140, uVar26 == 0x20000)) goto cf_common_join_0066CD48;
              }
              else {
                iVar15 = local_160;
                if (uVar26 == 0x80000) goto cf_common_join_0066CD48;
              }
            }
cf_continue_loop_0066CD4A:
            iVar11 = iVar11 + 1;
          } while (iVar11 < 0x20);
          local_8 = (AiFltClassTy *)&local_8->field_0x4;
          pcVar25 = local_18 + -1;
          local_18 = pcVar25;
        } while (pcVar25 != (char *)0x0);
      }
      local_14 = Library::DKW::LIB::FUN_006aac10(4);
      *local_14 = (uint)local_10;
      break;
    case 0x7f3:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
             (param_1[(int)&local_8->field_0x0] != '\x01')) {
            pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar25 != (char *)0x0) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8))
      {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      puVar22 = (uint *)(param_1 + 5);
      uVar12 = (*this_00->vtable->slot_00)(puVar22,local_50);
      pcVar25 = (char *)thunk_FUN_00668f50(this_00,(char *)local_8,uVar12,puVar22);
      local_10 = (char *)0x0;
      if (0 < (int)pcVar25) {
        local_c = param_1 + 10;
        local_8 = (AiFltClassTy *)local_50;
        do {
          local_18 = pcVar25;
          puVar18 = (undefined4 *)thunk_FUN_0043e420(local_628,*(char *)local_8);
          pcVar25 = local_c;
          puVar28 = local_19c;
          for (iVar11 = 0x4e; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar28 = *puVar18;
            puVar18 = puVar18 + 1;
            puVar28 = puVar28 + 1;
          }
          uVar12 = (*this_00->vtable->slot_00)(pcVar25);
          iVar11 = 0;
          do {
            uVar26 = 1 << ((byte)iVar11 & 0x1f) & uVar12;
            if (uVar26 < 0x101) {
              iVar15 = local_78;
              if (uVar26 != 0x100) {
                switch(uVar26) {
                case 1:
                  iVar15 = local_f8;
                  break;
                case 2:
                  iVar15 = local_e8;
                  break;
                default:
                  goto cf_continue_loop_0066CFCA;
                case 4:
                  iVar15 = local_d8;
                  break;
                case 8:
                  iVar15 = local_c8;
                  break;
                case 0x10:
                  iVar15 = local_b8;
                  break;
                case 0x20:
                  iVar15 = local_a8;
                  break;
                case 0x40:
                  iVar15 = local_98;
                  break;
                case 0x80:
                  iVar15 = local_88;
                }
              }
cf_common_join_0066CFC8:
              local_10 = (char *)((int)local_10 + iVar15);
            }
            else {
              if (0x100000 < uVar26) {
                iVar15 = local_128;
                if (((uVar26 != 0x200000) && (iVar15 = local_118, uVar26 != 0x400000)) &&
                   (iVar15 = local_108, uVar26 != 0x800000)) goto cf_continue_loop_0066CFCA;
                goto cf_common_join_0066CFC8;
              }
              iVar15 = local_138;
              if (uVar26 == 0x100000) goto cf_common_join_0066CFC8;
              if (uVar26 < 0x40001) {
                iVar15 = local_178;
                if (((uVar26 == 0x40000) || (iVar15 = local_158, uVar26 == 0x10000)) ||
                   (iVar15 = local_148, uVar26 == 0x20000)) goto cf_common_join_0066CFC8;
              }
              else {
                iVar15 = local_168;
                if (uVar26 == 0x80000) goto cf_common_join_0066CFC8;
              }
            }
cf_continue_loop_0066CFCA:
            iVar11 = iVar11 + 1;
          } while (iVar11 < 0x20);
          local_8 = (AiFltClassTy *)&local_8->field_0x4;
          pcVar25 = local_18 + -1;
          local_18 = pcVar25;
        } while (pcVar25 != (char *)0x0);
      }
      local_14 = Library::DKW::LIB::FUN_006aac10(4);
      *local_14 = (uint)local_10;
      break;
    case 0x7f4:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
             (param_1[(int)&local_8->field_0x0] != '\x01')) {
            pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar25 != (char *)0x0) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8))
      {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      puVar22 = (uint *)(param_1 + 5);
      uVar12 = (*this_00->vtable->slot_00)(puVar22,local_50);
      pAVar14 = (AiFltClassTy *)thunk_FUN_00668f50(this_00,(char *)local_8,uVar12,puVar22);
      pcVar25 = (char *)0x0;
      if (0 < (int)pAVar14) {
        local_c = param_1 + 10;
        ppAVar27 = local_50;
        local_8 = pAVar14;
        do {
          GVar19 = (*this_00->vtable->slot_00)(local_c);
          iVar11 = thunk_FUN_00677700((int)*ppAVar27,GVar19);
          pcVar25 = pcVar25 + iVar11;
          ppAVar27 = ppAVar27 + 1;
          local_8 = (AiFltClassTy *)((int)&local_8[-1].field_0284 + 3);
        } while (local_8 != (AiFltClassTy *)0x0);
        local_8 = (AiFltClassTy *)0x0;
      }
      goto cf_common_exit_00670425;
    case 0x7f5:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (AiFltClassTy *)0x0;
        do {
          if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
             (param_1[(int)&local_8->field_0x0] != '\x01')) {
            pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar25 != (char *)0x0) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_14 = Library::DKW::LIB::FUN_006aac10(4);
      uVar21 = (*this_00->vtable->slot_00)(param_1 + 0x1e);
      uVar21 = (*this_00->vtable->slot_00)(param_1 + 0x19,uVar21);
      uVar21 = (*this_00->vtable->slot_00)(param_1 + 0x14,uVar21);
      uVar21 = (*this_00->vtable->slot_00)(param_1 + 0xf,uVar21);
      pcVar25 = param_1 + 10;
      iVar11 = (*this_00->vtable->slot_00)(pcVar25,uVar21);
      pcVar23 = param_1 + 5;
      iVar15 = (*this_00->vtable->slot_00)();
      GVar20 = (*this_00->vtable->slot_00)();
      uVar12 = thunk_FUN_006777d0(GVar20,(int)param_1,iVar15,pcVar23,iVar11,(int)pcVar25);
      *local_14 = uVar12;
      break;
    default:
      goto cf_common_exit_00670456;
    }
    goto cf_common_exit_00670431;
  }
  sVar4 = (short)param_1;
  switch(iVar11) {
  case 0x7f7:
    local_8 = (AiFltClassTy *)0x0;
    do {
      if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
         (param_1[(int)&local_8->field_0x0] != '\x01')) {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0xf);
    if ((param_1[0xf] != '\x06') && (param_1[0xf] != '\x03')) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_c = (char *)0x4;
    if (4 < param_2) {
      local_8 = (AiFltClassTy *)0x14;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = local_c + 1;
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    puVar22 = (uint *)(param_1 + 5);
    uVar12 = (*this_00->vtable->slot_00)(puVar22,local_50);
    iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,uVar12,puVar22);
    DAT_00811980 = 0;
    if (0 < iVar11) {
      local_10 = param_1 + 0x2d;
      local_18 = param_1 + 0x28;
      local_2c = (byte *)(param_1 + 0x23);
      local_1c = (byte *)(param_1 + 0x1e);
      local_24 = param_1 + 0x19;
      local_30 = param_1 + 0x14;
      local_28 = param_1 + 0xf;
      local_c = param_1 + 10;
      ppAVar27 = local_50;
      do {
        uVar32 = 0;
        puVar30 = &LAB_004050fb;
        pcVar25 = local_10;
        sVar4 = (*this_00->vtable->slot_00)();
        sVar8 = (short)pcVar25;
        pcVar25 = local_18;
        sVar5 = (*this_00->vtable->slot_00)();
        sVar10 = (short)pcVar25;
        pbVar17 = local_2c;
        sVar6 = (*this_00->vtable->slot_00)();
        sVar9 = (short)pbVar17;
        pbVar17 = local_1c;
        uVar21 = (*this_00->vtable->slot_00)();
        uVar21 = (*this_00->vtable->slot_00)(local_24,uVar21);
        uVar21 = (*this_00->vtable->slot_00)(local_30,uVar21);
        uVar21 = (*this_00->vtable->slot_08)(local_28,uVar21);
        sVar7 = (*this_00->vtable->slot_00)(local_c,uVar21);
        _EnumRCCont(*(short *)ppAVar27,sVar7,pbVar17,sVar6,sVar9,sVar5,sVar10,sVar4,sVar8,puVar30,
                    uVar32);
        ppAVar27 = ppAVar27 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    goto cf_common_exit_0066DF5E;
  case 0x7f8:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar25 = thunk_FUN_00674af0(iVar11);
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    DAT_00811980 = 0;
    uVar21 = (*this_00->vtable->slot_00)(param_1 + 0x23,&LAB_00402bcb,0);
    uVar21 = (*this_00->vtable->slot_00)(param_1 + 0x1e,uVar21);
    uVar21 = (*this_00->vtable->slot_00)(param_1 + 0x19,uVar21);
    pcVar25 = param_1 + 0x14;
    sVar7 = (*this_00->vtable->slot_00)();
    sVar5 = sVar4 + 0xf;
    sVar9 = (*this_00->vtable->slot_00)();
    sVar6 = sVar4 + 10;
    sVar10 = (*this_00->vtable->slot_00)();
    sVar4 = sVar4 + 5;
    pbVar17 = (byte *)(*this_00->vtable->slot_08)();
    sVar8 = (*this_00->vtable->slot_00)(param_1);
    _EnumArt(sVar8,pbVar17,sVar4,sVar10,sVar6,sVar9,sVar5,sVar7,pcVar25,uVar21);
    goto cf_common_exit_0066DCED;
  case 0x7f9:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar25 = thunk_FUN_00674af0(iVar11);
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    DAT_00811980 = 0;
    uVar21 = (*this_00->vtable->slot_00)(param_1 + 0x23,&LAB_00403d50,0);
    uVar21 = (*this_00->vtable->slot_00)(param_1 + 0x1e,uVar21);
    uVar21 = (*this_00->vtable->slot_00)(param_1 + 0x19,uVar21);
    pcVar25 = param_1 + 0x14;
    sVar6 = (*this_00->vtable->slot_00)();
    sVar5 = sVar4 + 0xf;
    sVar7 = (*this_00->vtable->slot_00)();
    sVar4 = sVar4 + 10;
    sVar9 = (*this_00->vtable->slot_00)();
    pcVar23 = param_1;
    cVar3 = (*this_00->vtable->slot_00)();
    sVar10 = (short)pcVar23;
    pbVar17 = (byte *)(*this_00->vtable->slot_08)(param_1 + 5);
    _EnumDest(pbVar17,cVar3,sVar10,sVar9,sVar4,sVar7,sVar5,sVar6,pcVar25,uVar21);
    goto cf_common_exit_0066DCED;
  case 0x7fa:
    local_8 = (AiFltClassTy *)0x0;
    do {
      if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
         (param_1[(int)&local_8->field_0x0] != '\x01')) {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0x14);
    if ((param_1[0x14] != '\x06') && (param_1[0x14] != '\x03')) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_c = (char *)0x5;
    if (5 < param_2) {
      local_8 = (AiFltClassTy *)0x19;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = local_c + 1;
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    puVar22 = (uint *)(param_1 + 5);
    uVar12 = (*this_00->vtable->slot_00)(puVar22,local_50);
    iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,uVar12,puVar22);
    DAT_00811980 = 0;
    if (0 < iVar11) {
      local_8 = (AiFltClassTy *)(param_1 + 0x32);
      local_10 = param_1 + 0x2d;
      local_18 = param_1 + 0x28;
      local_2c = (byte *)(param_1 + 0x23);
      local_1c = (byte *)(param_1 + 0x1e);
      local_24 = param_1 + 0x19;
      local_30 = param_1 + 0x14;
      local_28 = param_1 + 0xf;
      local_c = param_1 + 10;
      ppAVar27 = local_50;
      do {
        uVar32 = 0;
        puVar30 = &LAB_004027a7;
        pAVar14 = local_8;
        sVar4 = (*this_00->vtable->slot_00)();
        sVar8 = (short)pAVar14;
        pcVar25 = local_10;
        sVar5 = (*this_00->vtable->slot_00)();
        sVar10 = (short)pcVar25;
        pcVar25 = local_18;
        sVar6 = (*this_00->vtable->slot_00)();
        sVar9 = (short)pcVar25;
        pbVar17 = local_2c;
        cVar3 = (*this_00->vtable->slot_00)();
        uVar21 = (*this_00->vtable->slot_00)(local_1c);
        uVar21 = (*this_00->vtable->slot_00)(local_24,uVar21);
        uVar21 = (*this_00->vtable->slot_08)(local_30,uVar21);
        uVar21 = (*this_00->vtable->slot_00)(local_28,uVar21);
        sVar7 = (*this_00->vtable->slot_00)(local_c,uVar21);
        _EnumMines((int)*ppAVar27,sVar7,cVar3,pbVar17,sVar6,sVar9,sVar5,sVar10,sVar4,sVar8,puVar30,
                   uVar32);
        ppAVar27 = ppAVar27 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    goto cf_common_exit_0066DF5E;
  case 0x7fb:
    local_c = (char *)0x0;
    if (0 < param_2) {
      local_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    DAT_00811980 = 0;
    uVar21 = (*this_00->vtable->slot_00)(param_1 + 0x1e,&LAB_00401f7d,0);
    uVar21 = (*this_00->vtable->slot_00)(param_1 + 0x19,uVar21);
    uVar21 = (*this_00->vtable->slot_00)(param_1 + 0x14,uVar21);
    pcVar25 = param_1 + 0xf;
    sVar6 = (*this_00->vtable->slot_00)();
    sVar5 = sVar4 + 10;
    sVar7 = (*this_00->vtable->slot_00)();
    sVar4 = sVar4 + 5;
    sVar9 = (*this_00->vtable->slot_00)();
    sVar10 = (*this_00->vtable->slot_00)();
    _EnumRCField(sVar10,(short)param_1,sVar9,sVar4,sVar7,sVar5,sVar6,pcVar25,uVar21);
cf_common_exit_0066DCED:
    local_14 = Library::DKW::LIB::FUN_006aac10(4);
    *local_14 = DAT_00811980;
    break;
  case 0x7fc:
    local_c = (char *)0x0;
    if (0 < param_2) {
      local_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_c = (char *)0xffffffff;
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    local_10 = (char *)(*this_00->vtable->slot_00)(param_1 + 5);
    iVar11 = (*this_00->vtable->slot_00)(param_1 + 10);
    switch(local_8) {
    case (AiFltClassTy *)0xdc:
      if (((int)local_10 < 0x32) || (0x73 < (int)local_10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if ((0 < iVar11) && (iVar11 < 4)) {
          local_c = *(char **)(&DAT_00854350 + (iVar11 + (int)local_10 * 3) * 4);
        }
      }
      else {
        if (((int)local_10 < 1) || (0x28 < (int)local_10)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_c = *(char **)(&DAT_00854428 + (int)local_10 * 4);
        }
      }
      break;
    case (AiFltClassTy *)0xdd:
      if (((int)local_10 < 0x32) || (0x73 < (int)local_10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if ((0 < iVar11) && (iVar11 < 4)) {
          local_c = *(char **)(&DAT_007e19f4 + (iVar11 + (int)local_10 * 3) * 4);
        }
      }
      else {
        if (((int)local_10 < 1) || (0x28 < (int)local_10)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_c = *(char **)(&DAT_007e055c + (int)local_10 * 4);
        }
      }
      break;
    case (AiFltClassTy *)0xde:
      if (((int)local_10 < 0x32) || (0x73 < (int)local_10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if ((0 < iVar11) && (iVar11 < 4)) {
          local_c = *(char **)(&DAT_007e22a0 + (iVar11 + (int)local_10 * 3) * 4);
        }
      }
      else {
        if (((int)local_10 < 1) || (0x28 < (int)local_10)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_c = *(char **)(&DAT_007e079c + (int)local_10 * 4);
        }
      }
      break;
    default:
      local_c = (char *)0x0;
      break;
    case (AiFltClassTy *)0xe2:
      if (((int)local_10 < 0x32) || (0x73 < (int)local_10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if ((0 < iVar11) && (iVar11 < 4)) {
          local_c = *(char **)(&DAT_007e2f04 + (iVar11 + (int)local_10 * 3) * 4);
        }
      }
      else {
        if (((int)local_10 < 1) || (0x28 < (int)local_10)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_c = *(char **)(&DAT_007e09dc + (int)local_10 * 4);
        }
      }
    }
    if ((int)local_c < 0) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_14 = Library::DKW::LIB::FUN_006aac10(4);
    *local_14 = (uint)local_c;
    break;
  default:
    goto cf_common_exit_00670456;
  case 0x80c:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar25 = thunk_FUN_00674af0(iVar11);
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_10 = (char *)0x0;
    iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar11 == 1) {
      puVar31 = (undefined *)0x0;
      puVar22 = (uint *)0x0;
      puVar30 = &LAB_00402ba3;
      sVar10 = -1;
      sVar9 = -1;
      sVar7 = -1;
      sVar6 = 0;
      sVar5 = 0;
      sVar4 = 0;
      cVar3 = -1;
      pbVar17 = (byte *)(*this_00->vtable->slot_08)(param_1 + 5);
      iVar11 = _EnumPlObj(local_50[0],0,0x3fffffff,pbVar17,cVar3,sVar4,sVar5,sVar6,sVar7,sVar9,
                          sVar10,puVar30,puVar22,puVar31);
      if ((iVar11 == -1) && (g_sTFish_00811984 != (STFishC *)0x0)) {
        local_10 = (char *)0x1;
        iVar11 = (*this_00->vtable->slot_00)(param_1 + 10);
        local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 0xf);
        local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 0x14);
        iVar15 = (*this_00->vtable->slot_00)(param_1 + 0x19);
        if ((-1 < iVar11) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
          STFishC::sub_004162B0(g_sTFish_00811984,&local_5a,&local_52,&local_58);
          (*this_00->vtable->slot_20)(iVar11,(int)local_5a);
          (*this_00->vtable->slot_20)(local_8,(int)local_52);
          (*this_00->vtable->slot_20)(local_c,(int)local_58);
        }
        if (-1 < iVar15) {
          uVar21 = (*g_sTFish_00811984->vtable->vfunc_11C)();
          (*this_00->vtable->slot_20)(iVar15,uVar21);
          local_14 = Library::DKW::LIB::FUN_006aac10(4);
          *local_14 = (uint)local_10;
          break;
        }
      }
    }
    else {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_14 = Library::DKW::LIB::FUN_006aac10(4);
    *local_14 = (uint)local_10;
    break;
  case 0x80d:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar25 = thunk_FUN_00674af0(iVar11);
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_10 = (char *)0x0;
    iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar11 == 1) {
      uVar21 = 0;
      puVar30 = &LAB_00402ca2;
      sVar10 = -1;
      sVar9 = -1;
      sVar7 = -1;
      sVar6 = 0;
      sVar5 = 0;
      sVar4 = 0;
      pbVar17 = (byte *)(*this_00->vtable->slot_08)(param_1 + 5);
      iVar11 = _EnumRCCont((short)local_50[0],0,pbVar17,sVar4,sVar5,sVar6,sVar7,sVar9,sVar10,puVar30
                           ,uVar21);
      if ((iVar11 == -1) && (g_sTFish_00811984 != (STFishC *)0x0)) {
        local_10 = (char *)0x1;
        iVar11 = (*this_00->vtable->slot_00)(param_1 + 10);
        local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 0xf);
        local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 0x14);
        iVar15 = (*this_00->vtable->slot_00)(param_1 + 0x19);
        if ((-1 < iVar11) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
          thunk_FUN_004162f0(g_sTFish_00811984,&local_5c,&local_56,&local_54);
          (*this_00->vtable->slot_20)(iVar11,(int)local_5c);
          (*this_00->vtable->slot_20)(local_8,(int)local_56);
          (*this_00->vtable->slot_20)(local_c,(int)local_54);
        }
        if (-1 < iVar15) {
          uVar21 = (*g_sTFish_00811984->vtable->vfunc_11C)();
          (*this_00->vtable->slot_20)(iVar15,uVar21);
          local_14 = Library::DKW::LIB::FUN_006aac10(4);
          *local_14 = (uint)local_10;
          break;
        }
      }
    }
    else {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_14 = Library::DKW::LIB::FUN_006aac10(4);
    *local_14 = (uint)local_10;
    break;
  case 0x80e:
    if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
      pcVar25 = thunk_FUN_00674af0(iVar11);
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_c = (char *)0x1;
    if (1 < param_2) {
      local_8 = (AiFltClassTy *)0x5;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    uVar21 = 0;
    puVar33 = &LAB_0040188e;
    puVar30 = (undefined *)0xffffffff;
    sVar9 = -1;
    sVar7 = -1;
    sVar6 = 0;
    local_10 = (char *)0x0;
    sVar5 = 0;
    sVar4 = 0;
    pcVar25 = param_1;
    pbVar17 = (byte *)(*this_00->vtable->slot_08)();
    iVar11 = _EnumArt(0,pbVar17,(short)pcVar25,sVar4,sVar5,sVar6,sVar7,sVar9,puVar30,puVar33);
    if ((iVar11 == -1) && (g_sTFish_00811984 != (STFishC *)0x0)) {
      local_10 = (char *)0x1;
      iVar11 = (*this_00->vtable->slot_00)(param_1 + 5,uVar21);
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 10);
      local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 0xf);
      iVar15 = (*this_00->vtable->slot_00)(param_1 + 0x14);
      if ((-1 < iVar11) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
        thunk_FUN_004162f0(g_sTFish_00811984,&local_60,&local_5e,(undefined2 *)((int)&local_28 + 2))
        ;
        (*this_00->vtable->slot_20)(iVar11,(int)local_60);
        (*this_00->vtable->slot_20)(local_8,(int)local_5e);
        (*this_00->vtable->slot_20)(local_c,(int)local_28._2_2_);
      }
      if (-1 < iVar15) {
        uVar21 = (*g_sTFish_00811984->vtable->vfunc_11C)();
        (*this_00->vtable->slot_20)(iVar15,uVar21);
      }
    }
    local_14 = Library::DKW::LIB::FUN_006aac10(4);
    *local_14 = (uint)local_10;
    break;
  case 0x80f:
    if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
      pcVar25 = thunk_FUN_00674af0(iVar11);
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_c = (char *)0x1;
    if (1 < param_2) {
      local_8 = (AiFltClassTy *)0x5;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    uVar21 = 0;
    puVar33 = &LAB_00404c73;
    puVar30 = (undefined *)0xffffffff;
    sVar10 = -1;
    sVar9 = -1;
    sVar7 = 0;
    sVar6 = 0;
    local_10 = (char *)0x0;
    sVar5 = 0;
    sVar4 = -1;
    pcVar25 = param_1;
    pbVar17 = (byte *)(*this_00->vtable->slot_08)();
    iVar11 = _EnumDest(pbVar17,(char)pcVar25,sVar4,sVar5,sVar6,sVar7,sVar9,sVar10,puVar30,puVar33);
    if ((iVar11 == -1) && (g_sTFish_00811984 != (STFishC *)0x0)) {
      local_10 = (char *)0x1;
      iVar11 = (*this_00->vtable->slot_00)(param_1 + 5,uVar21);
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 10);
      local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 0xf);
      iVar15 = (*this_00->vtable->slot_00)(param_1 + 0x14);
      if ((-1 < iVar11) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
        STFishC::sub_004162B0
                  (g_sTFish_00811984,(undefined2 *)((int)&local_30 + 2),
                   (undefined2 *)((int)&local_24 + 2),(undefined2 *)((int)&local_1c + 2));
        (*this_00->vtable->slot_20)(iVar11,(int)local_30._2_2_);
        (*this_00->vtable->slot_20)(local_8,(int)local_24._2_2_);
        (*this_00->vtable->slot_20)(local_c,(int)local_1c._2_2_);
      }
      if (-1 < iVar15) {
        uVar21 = (*g_sTFish_00811984->vtable->vfunc_11C)();
        (*this_00->vtable->slot_20)(iVar15,uVar21);
      }
    }
    local_14 = Library::DKW::LIB::FUN_006aac10(4);
    *local_14 = (uint)local_10;
    break;
  case 0x810:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar25 = thunk_FUN_00674af0(iVar11);
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_1c = (byte *)0x0;
    iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar11 == 1) {
      uVar21 = 0;
      puVar30 = &LAB_0040446c;
      sVar10 = -1;
      sVar9 = -1;
      sVar7 = -1;
      sVar6 = 0;
      sVar5 = 0;
      sVar4 = 0;
      pbVar17 = (byte *)(*this_00->vtable->slot_08)(param_1 + 5);
      iVar11 = _EnumMines((int)local_50[0],0,-1,pbVar17,sVar4,sVar5,sVar6,sVar7,sVar9,sVar10,puVar30
                          ,uVar21);
      if ((iVar11 == -1) && (g_sTFish_00811984 != (STFishC *)0x0)) {
        local_1c = (byte *)0x1;
        iVar11 = (*this_00->vtable->slot_00)(param_1 + 10);
        local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 0xf);
        local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 0x14);
        iVar15 = (*this_00->vtable->slot_00)(param_1 + 0x19);
        if ((-1 < iVar11) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
          STFishC::sub_004162B0
                    (g_sTFish_00811984,(undefined2 *)((int)&local_2c + 2),
                     (undefined2 *)((int)&local_18 + 2),(undefined2 *)((int)&local_10 + 2));
          (*this_00->vtable->slot_20)(iVar11,(int)local_2c._2_2_);
          (*this_00->vtable->slot_20)(local_8,(int)local_18._2_2_);
          (*this_00->vtable->slot_20)(local_c,(int)local_10._2_2_);
        }
        if (-1 < iVar15) {
          uVar21 = (*g_sTFish_00811984->vtable->vfunc_11C)();
          (*this_00->vtable->slot_20)(iVar15,uVar21);
          local_14 = Library::DKW::LIB::FUN_006aac10(4);
          *local_14 = (uint)local_1c;
          break;
        }
      }
    }
    else {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_14 = Library::DKW::LIB::FUN_006aac10(4);
    *local_14 = (uint)local_1c;
    break;
  case 0x816:
  case 0x817:
    local_c = (char *)0x0;
    if (0 < param_2) {
      local_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_c = (char *)(*this_00->vtable->slot_00)(param_1);
    if ((local_c == (char *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_8 = (AiFltClassTy *)0x0;
    iVar11 = thunk_FUN_00668f50(this_00,local_c,0,(uint *)local_50);
    if (iVar11 == 1) {
      if (*(short *)(param_1 + param_2 * 5 + 1) == 0x816) {
        thunk_FUN_004e6f00((int)local_50[0]);
      }
      else if (*(short *)(param_1 + param_2 * 5 + 1) != 0x817) {
        local_14 = Library::DKW::LIB::FUN_006aac10(4);
        *local_14 = (uint)local_8;
        break;
      }
      local_8 = (AiFltClassTy *)thunk_FUN_004e6fe0((int)local_50[0]);
      local_14 = Library::DKW::LIB::FUN_006aac10(4);
      *local_14 = (uint)local_8;
    }
    else {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      local_14 = Library::DKW::LIB::FUN_006aac10(4);
      *local_14 = (uint)local_8;
    }
    break;
  case 0x818:
    local_c = (char *)0x0;
    if (0 < param_2) {
      local_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((int)local_8 < 0) || (0x9a < (int)local_8)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_14 = Library::DKW::LIB::FUN_006aac10(4);
    *local_14 = (uint)*(byte *)((int)&local_8[0x3006].field_00A7 + 1);
    break;
  case 0x819:
  case 0x81b:
  case 0x81c:
    local_c = (char *)0x0;
    if (0 < param_2) {
      local_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_10 = (char *)(*this_00->vtable->slot_00)(param_1);
    local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 5);
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 10);
    if (((int)local_c < 0) || (0x9a < (int)local_c)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    if ((local_10 == (char *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_18 = (char *)0x0;
    iVar11 = thunk_FUN_00668f50(this_00,local_10,0,(uint *)local_50);
    pAVar14 = local_8;
    pcVar25 = local_c;
    if (iVar11 == 1) {
      sVar4 = *(short *)(param_1 + param_2 * 5 + 1);
      if (sVar4 == 0x819) {
        iVar11 = thunk_FUN_004e60d0((int)local_50[0],(int)local_c);
        bVar2 = (int)local_8 <= iVar11;
        local_14 = Library::DKW::LIB::FUN_006aac10(4);
        *local_14 = (uint)bVar2;
        break;
      }
      if (sVar4 == 0x81b) {
        iVar11 = thunk_FUN_004e5990((int)local_50[0],(uint)local_c,(int)local_8);
        local_14 = Library::DKW::LIB::FUN_006aac10(4);
        *local_14 = (uint)(iVar11 != 0);
        break;
      }
      if (sVar4 == 0x81c) {
        iVar11 = thunk_FUN_004e5cc0((int)local_50[0],(uint)local_c,(int)local_8);
        if ((iVar11 == 0) &&
           (iVar11 = thunk_FUN_004e7f20((int)local_50[0],(int)pcVar25,(int)pAVar14), iVar11 == 0)) {
          local_14 = Library::DKW::LIB::FUN_006aac10(4);
          *local_14 = 0;
        }
        else {
          local_14 = Library::DKW::LIB::FUN_006aac10(4);
          *local_14 = 1;
        }
        break;
      }
    }
    else {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    uVar12 = (uint)local_18;
    local_14 = Library::DKW::LIB::FUN_006aac10(4);
    *local_14 = uVar12;
    break;
  case 0x81a:
    local_c = (char *)0x0;
    if (0 < param_2) {
      local_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 5);
    if (((int)local_c < 0) || (0x9a < (int)local_c)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_10 = (char *)0x0;
    iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar11 == 1) {
      bVar2 = thunk_FUN_004e5f90((int)local_50[0],(uint)local_c);
      local_14 = Library::DKW::LIB::FUN_006aac10(4);
      *local_14 = (uint)(CONCAT31(extraout_var,bVar2) != 0);
    }
    else {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      uVar12 = (uint)local_10;
      local_14 = Library::DKW::LIB::FUN_006aac10(4);
      *local_14 = uVar12;
    }
    break;
  case 0x81d:
    local_c = (char *)0x0;
    if (0 < param_2) {
      local_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_c = (char *)(*this_00->vtable->slot_00)(param_1);
    iVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    local_8 = (AiFltClassTy *)(iVar11 + -1);
    if (((int)local_c < 0) || (0x9a < (int)local_c)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    if (((int)local_8 < 0) || (3 < (int)local_c)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_14 = Library::DKW::LIB::FUN_006aac10(4);
    *local_14 = *(uint *)(&DAT_007e481c + (int)(&local_8->field_0x0 + (int)local_c * 4) * 4);
    break;
  case 0x82a:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar25 = thunk_FUN_00674af0(iVar11);
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_c = (char *)0x1;
    if (1 < param_2) {
      local_8 = (AiFltClassTy *)0x5;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x06') &&
           (param_1[(int)&local_8->field_0x0] != '\x03')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar11 != 1) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    uVar21 = (*this_00->vtable->slot_08)(param_1 + 10);
    pbVar16 = (byte *)(param_1 + 5);
    pbVar17 = (byte *)(*this_00->vtable->slot_08)(pbVar16,uVar21);
    iVar11 = thunk_FUN_0066ab60((byte)local_50[0],pbVar17,pbVar16);
    local_14 = Library::DKW::LIB::FUN_006aac10(4);
    if (iVar11 == 0) {
      *local_14 = 0xffffffff;
    }
    else {
      *local_14 = (uint)*(ushort *)(iVar11 + 0x7d);
    }
    break;
  case 0x82b:
    local_8 = (AiFltClassTy *)0x0;
    do {
      if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
         (param_1[(int)&local_8->field_0x0] != '\x01')) {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0x14);
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar11 != 1) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_c = (char *)0xffffffff;
    uVar12 = (*this_00->vtable->slot_00)(param_1 + 5);
    this_01 = (AnonReceiver_0065DA50 *)thunk_FUN_0066ac80(local_50[0],uVar12);
    pAVar14 = local_50[0];
    pcVar25 = local_c;
    if (this_01 != (AnonReceiver_0065DA50 *)0x0) {
      cVar3 = (char)param_1 + '\x0f';
      uVar21 = (*this_00->vtable->slot_00)();
      iVar11 = (*this_00->vtable->slot_00)(param_1 + 10,uVar21);
      pcVar25 = (char *)AnonReceiver_0065DA50::thunk_FUN_0065da50(this_01,iVar11,cVar3);
      pAVar14 = local_50[0];
      local_c = pcVar25;
    }
    goto joined_r0x006703e6;
  case 0x82c:
    local_8 = (AiFltClassTy *)0x0;
    do {
      if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
         (param_1[(int)&local_8->field_0x0] != '\x01')) {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0x14);
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar11 != 1) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_c = (char *)0xffffffff;
    uVar12 = (*this_00->vtable->slot_00)(param_1 + 5);
    iVar11 = thunk_FUN_0066ac80(local_50[0],uVar12);
    pAVar14 = local_50[0];
    pcVar25 = local_c;
    if (iVar11 != 0) {
      cVar3 = (char)param_1 + '\x0f';
      uVar21 = (*this_00->vtable->slot_00)();
      uVar29 = (*this_00->vtable->slot_00)(param_1 + 10,uVar21);
      pcVar25 = (char *)thunk_FUN_0065dc00(iVar11,(int)((ulonglong)uVar29 >> 0x20),(uint)uVar29,
                                           cVar3);
      pAVar14 = local_50[0];
      local_c = pcVar25;
    }
    goto joined_r0x006703e6;
  case 0x82d:
    local_8 = (AiFltClassTy *)0x0;
    do {
      if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
         (param_1[(int)&local_8->field_0x0] != '\x01')) {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 10);
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar11 != 1) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    uVar12 = (*this_00->vtable->slot_00)(param_1 + 5);
    iVar11 = thunk_FUN_0066ac80(local_50[0],uVar12);
    pcVar25 = (char *)0xffffffff;
    if (iVar11 != 0) {
      pcVar25 = *(char **)(iVar11 + 0xeb);
    }
    goto LAB_0066fbc1;
  case 0x82e:
    local_8 = (AiFltClassTy *)0x0;
    do {
      if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
         (param_1[(int)&local_8->field_0x0] != '\x01')) {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0x19);
    if ((param_1[0x19] != '\x06') && (param_1[0x19] != '\x03')) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_c = (char *)0x6;
    if (6 < param_2) {
      local_8 = (AiFltClassTy *)0x1e;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar11 != 1) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_c = (char *)0xffffffff;
    uVar12 = (*this_00->vtable->slot_00)(param_1 + 5);
    iVar11 = thunk_FUN_0066ac80(local_50[0],uVar12);
    pAVar14 = local_50[0];
    pcVar25 = local_c;
    if (iVar11 != 0) {
      sVar5 = sVar4 + 0x37;
      sVar7 = (*this_00->vtable->slot_00)();
      sVar6 = sVar4 + 0x32;
      sVar9 = (*this_00->vtable->slot_00)();
      sVar4 = sVar4 + 0x2d;
      sVar10 = (*this_00->vtable->slot_00)();
      pbVar17 = (byte *)(param_1 + 0x28);
      cVar3 = (*this_00->vtable->slot_00)();
      pcVar25 = param_1 + 0x23;
      uVar21 = (*this_00->vtable->slot_00)();
      uVar21 = (*this_00->vtable->slot_00)(param_1 + 0x1e,uVar21);
      uVar21 = (*this_00->vtable->slot_08)(param_1 + 0x19,uVar21);
      uVar21 = (*this_00->vtable->slot_00)(param_1 + 0x14,uVar21);
      uVar21 = (*this_00->vtable->slot_00)(param_1 + 0xf,uVar21);
      uVar29 = (*this_00->vtable->slot_00)(param_1 + 10,uVar21);
      pcVar25 = (char *)thunk_FUN_0065dd30(iVar11,(int)((ulonglong)uVar29 >> 0x20),(uint)uVar29,
                                           (uint)pcVar25,cVar3,pbVar17,sVar10,sVar4,sVar9,sVar6,
                                           sVar7,sVar5);
      pAVar14 = local_50[0];
      local_c = pcVar25;
    }
    goto joined_r0x006703e6;
  case 0x82f:
    local_8 = (AiFltClassTy *)0x0;
    do {
      if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
         (param_1[(int)&local_8->field_0x0] != '\x01')) {
        pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar25 != (char *)0x0) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0x23);
    if ((param_1[0x23] != '\x06') && (param_1[0x23] != '\x03')) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar11 != 1) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_8 = (AiFltClassTy *)0x0;
    puVar22 = (uint *)(*this_00->vtable->slot_00)(param_1 + 0xf,local_280);
    pcVar25 = param_1 + 10;
    pcVar23 = (char *)(*this_00->vtable->slot_00)();
    iVar11 = thunk_FUN_00668f50(this_00,pcVar23,(uint)pcVar25,puVar22);
    if (0 < iVar11) {
      puVar18 = local_280;
      do {
        uVar21 = *puVar18;
        puVar18 = puVar18 + 1;
        iVar11 = iVar11 + -1;
        local_8 = (AiFltClassTy *)((uint)local_8 | 1 << ((byte)uVar21 & 0x1f));
      } while (iVar11 != 0);
    }
    local_c = (char *)0xffffffff;
    uVar12 = (*this_00->vtable->slot_00)(param_1 + 5);
    iVar11 = thunk_FUN_0066ac80(local_50[0],uVar12);
    pcVar25 = local_c;
    if (iVar11 != 0) {
      pbVar17 = (byte *)(param_1 + 0x23);
      cVar3 = (*this_00->vtable->slot_08)();
      pcVar25 = param_1 + 0x1e;
      uVar21 = (*this_00->vtable->slot_00)();
      uVar21 = (*this_00->vtable->slot_00)(param_1 + 0x19,uVar21);
      uVar29 = (*this_00->vtable->slot_00)(param_1 + 0x14,uVar21);
      pcVar25 = (char *)thunk_FUN_0065e070(iVar11,(int)((ulonglong)uVar29 >> 0x20),(uint)local_8,
                                           (uint)uVar29,(uint)pcVar25,cVar3,pbVar17);
      local_c = pcVar25;
    }
LAB_0066fbc1:
    if ((int)pcVar25 < 0) {
      Library::MSVCRT::_strncpy(&this_00->field_0x4,&DAT_008016a0,0x7f);
      *(AiFltClassTy **)&this_00->field_0x84 = local_50[0];
      goto LAB_0067041b;
    }
    goto cf_common_exit_00670425;
  case 0x830:
    local_c = (char *)0x0;
    if (0 < param_2) {
      local_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = local_c + 1;
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar11 != 1) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    uVar12 = (*this_00->vtable->slot_00)(param_1 + 5);
    local_8 = (AiFltClassTy *)thunk_FUN_0066ac80(local_50[0],uVar12);
    pAVar14 = local_50[0];
    pcVar25 = (char *)0xffffffff;
    if (local_8 != (AiFltClassTy *)0x0) {
      puVar18 = &local_21c;
      for (iVar11 = 0x12; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar18 = 0;
        puVar18 = puVar18 + 1;
      }
      *(undefined2 *)puVar18 = 0;
      local_21c = (*this_00->vtable->slot_00)(param_1 + 10);
      puVar22 = local_1d0;
      for (iVar11 = 0xd; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar22 = 0;
        puVar22 = puVar22 + 1;
      }
      local_1c6 = &local_21c;
      local_218 = 0xffff;
      local_214 = 0xfffffff0;
      local_210 = 0xffff;
      local_1de = 1;
      local_1d0[0] = 0x68;
      AiFltClassTy::GetAiMess(local_8,local_1d0);
      pAVar14 = local_50[0];
      pcVar25 = (char *)(uint)('\0' < local_1c8);
    }
    goto joined_r0x006703e6;
  case 0x831:
    local_c = (char *)0x0;
    if (0 < param_2) {
      local_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar11 != 1) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    local_c = (char *)0xffffffff;
    uVar12 = (*this_00->vtable->slot_00)(param_1 + 5);
    pAVar24 = (AnonShape_0065E360_B94C37CB *)thunk_FUN_0066ac80(local_50[0],uVar12);
    pAVar14 = local_50[0];
    pcVar25 = local_c;
    if (pAVar24 != (AnonShape_0065E360_B94C37CB *)0x0) {
      uVar21 = (*this_00->vtable->slot_00)(param_1 + 0x19);
      pcVar25 = param_1 + 0x14;
      uVar32 = (*this_00->vtable->slot_00)();
      uVar32 = (*this_00->vtable->slot_00)(param_1 + 0xf,uVar32);
      uVar29 = (*this_00->vtable->slot_00)(param_1 + 10,uVar32);
      pcVar25 = (char *)thunk_FUN_0065e450(pAVar24,(int)((ulonglong)uVar29 >> 0x20),
                                           (Global_sub_0065E450_param_3Enum)uVar29,pcVar25,uVar21);
      pAVar14 = local_50[0];
      local_c = pcVar25;
    }
joined_r0x006703e6:
    if ((int)pcVar25 < 0) {
      Library::MSVCRT::_strncpy(&this_00->field_0x4,&DAT_008016a0,0x7f);
      *(AiFltClassTy **)&this_00->field_0x84 = pAVar14;
LAB_0067041b:
      RaiseInternalException(-0xaa,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
cf_common_exit_00670425:
    local_14 = Library::DKW::LIB::FUN_006aac10(4);
    *local_14 = (uint)pcVar25;
    break;
  case 0x848:
    local_c = (char *)0x0;
    if (0 < param_2) {
      local_8 = (AiFltClassTy *)0x0;
      do {
        if ((param_1[(int)&local_8->field_0x0] != '\x04') &&
           (param_1[(int)&local_8->field_0x0] != '\x01')) {
          pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar25 != (char *)0x0) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        local_c = local_c + 1;
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar11 = (*this_00->vtable->slot_18)(), iVar11 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    iVar11 = thunk_FUN_00668f50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar11 != 1) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    iVar11 = 0;
    local_10 = (char *)(uint)DAT_00808aaf;
    local_8 = (AiFltClassTy *)0x0;
    if (local_10 != (char *)0x0) {
      local_c = &DAT_00808af5;
      do {
        if (((AiFltClassTy *)(uint)(byte)local_c[-1] == local_50[0]) && (*local_c != '\0')) {
          local_8 = (AiFltClassTy *)(&DAT_00808ab0 + iVar11 * 0x27);
          break;
        }
        iVar11 = iVar11 + 1;
        local_c = local_c + 0x9c;
      } while (iVar11 < (int)local_10);
    }
    pAVar14 = local_8;
    if (local_8 == (AiFltClassTy *)0x0) {
      pcVar25 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar25 != (char *)0x0) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar25,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      pAVar14 = local_8;
    }
LAB_0066d630:
    puVar22 = (uint *)FUN_006c49b0((char *)pAVar14);
    if (param_3 == (int *)0x0) {
      g_currentExceptionFrame = local_260.previous;
      return puVar22;
    }
    *param_3 = 3;
    g_currentExceptionFrame = local_260.previous;
    return puVar22;
  case 0x849:
    local_14 = Library::DKW::LIB::FUN_006aac10(4);
    *local_14 = DAT_00808a90 >> 8 & 0xff;
    break;
  case 0x84a:
    local_14 = Library::DKW::LIB::FUN_006aac10(4);
    *local_14 = DAT_00808a90 & 0xff;
    break;
  case 0x84b:
    local_14 = Library::DKW::LIB::FUN_006aac10(4);
    *local_14 = (uint)DAT_00808a9b;
    break;
  case 0x84c:
    local_14 = Library::DKW::LIB::FUN_006aac10(4);
    *local_14 = DAT_00808a90 >> 0x10 & 0xff;
    break;
  case 0x84d:
    local_14 = Library::DKW::LIB::FUN_006aac10(4);
    *local_14 = DAT_00808a90 >> 0x18;
  }
cf_common_exit_00670431:
  if (param_3 == (int *)0x0) {
    g_currentExceptionFrame = local_260.previous;
    return local_14;
  }
  *param_3 = 1;
  g_currentExceptionFrame = local_260.previous;
  return local_14;
}

