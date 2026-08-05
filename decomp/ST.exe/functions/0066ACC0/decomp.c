#include "../../pseudocode_runtime.h"


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
  bool bVar2;
  AnonReceiver_0064A970 *this_00;
  char cVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  AiPlrClassTy *pAVar14;
  AiFltClassTy *pAVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *puVar19;
  Global_sub_00677700_param_2Enum GVar20;
  Global_sub_006777D0_param_1Enum GVar21;
  int uVar12;
  undefined4 uVar22;
  uint *puVar23;
  AnonReceiver_0065DA50 *this_01;
  AiFltClassTy *pAVar24;
  char *pcVar25;
  AnonShape_0065E360_B94C37CB *pAVar26;
  char *pcVar27;
  uint uVar28;
  AiFltClassTy **ppAVar29;
  byte *puVar30;
  undefined8 uVar31;
  code *pcVar32;
  undefined *puVar33;
  undefined4 uVar34;
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

  local_14 = nullptr;
  local_260.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_260;
  local_64 = this;
  iVar12 = Library::MSVCRT::__setjmp3(local_260.jumpBuffer,0);
  this_00 = local_64;
  if (iVar12 != 0) {
    g_currentExceptionFrame = local_260.previous;
    if (local_14 != nullptr) {
      FreeAndNull(&local_14);
    }
    if (0 < iVar12) {
      iVar12 = -0x6b;
    }
    if (param_3 != nullptr) {
      *param_3 = iVar12;
    }
    return nullptr;
  }
  Library::MSVCRT::_strncpy(&local_64->field_0x4,&DAT_008016a0,0x7f);
  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
  cVar3 = *param_1;
  pcVar27 = param_1;
  for (iVar12 = 0; (cVar3 != '\a' && (iVar12 < param_2)); iVar12 = iVar12 + 1) {
    cVar3 = pcVar27[5];
    pcVar27 = pcVar27 + 5;
  }
  if (iVar12 != param_2) {
    RaiseInternalException
              (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_interp.cpp",0x152);
  }
  iVar12 = (int)*(short *)(param_1 + param_2 * 5 + 1);
  if (iVar12 < 0x7f7) {
    if (iVar12 == 0x7f6) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_8 < 0xf);
      if ((param_1[0xf] != '\x06') && (param_1[0xf] != '\x03')) {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_c = (char *)0x4;
      if (4 < param_2) {
        local_8 = (AiFltClassTy *)0x14;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar27 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8))
      {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      puVar23 = (uint *)(param_1 + 5);
      uVar13 = (*this_00->vtable->slot_00)(puVar23,local_50);
      iVar12 = sub_00668F50(this_00,(char *)local_8,uVar13,puVar23);
      DAT_00811980 = 0;
      if (0 < iVar12) {
        local_10 = param_1 + 0x2d;
        local_18 = param_1 + 0x28;
        local_2c = (byte *)(param_1 + 0x23);
        local_1c = (byte *)(param_1 + 0x1e);
        local_24 = param_1 + 0x19;
        local_30 = param_1 + 0x14;
        local_28 = param_1 + 0xf;
        local_c = param_1 + 10;
        ppAVar29 = local_50;
        do {
          uVar34 = 0;
          pcVar32 = thunk_FUN_00677ed0;
          pcVar27 = local_10;
          sVar4 = (*this_00->vtable->slot_00)();
          sVar8 = (short)pcVar27;
          pcVar27 = local_18;
          sVar5 = (*this_00->vtable->slot_00)();
          sVar10 = (short)pcVar27;
          pbVar18 = local_2c;
          sVar6 = (*this_00->vtable->slot_00)();
          sVar9 = (short)pbVar18;
          pbVar18 = local_1c;
          uVar22 = (*this_00->vtable->slot_00)();
          uVar22 = (*this_00->vtable->slot_00)(local_24,uVar22);
          uVar22 = (*this_00->vtable->slot_00)(local_30,uVar22);
          uVar22 = (*this_00->vtable->slot_08)(local_28,uVar22);
          sVar7 = (*this_00->vtable->slot_00)(local_c,uVar22);
          _EnumRCCont(*(short *)ppAVar29,sVar7,pbVar18,sVar6,sVar9,sVar5,sVar10,sVar4,sVar8,pcVar32,
                      uVar34);
          ppAVar29 = ppAVar29 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      goto cf_common_exit_0066DF5E;
    }
    if (iVar12 < 0x7e7) {
      if (iVar12 == 0x7e6) {
        local_c = nullptr;
        if (0 < param_2) {
          local_8 = nullptr;
          do {
            if ((param_1[(int)&local_8->vtable] != '\x04') &&
               (param_1[(int)&local_8->vtable] != '\x01')) {
              pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
              if (pcVar27 != nullptr) {
                Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
              }
              *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
              RaiseInternalException
                        (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
            }
            local_c = (char *)((int)local_c + 1);
            local_8 = (AiFltClassTy *)&local_8->field_0x5;
          } while ((int)local_c < param_2);
        }
        local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
        local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 5);
        iVar12 = (*this_00->vtable->slot_18)();
        if ((((iVar12 == 8) && ((local_8 == (AiFltClassTy *)0x9 || (local_c == (char *)0x9)))) ||
            (local_8 == (AiFltClassTy *)0xff)) || (local_c == (char *)0xff)) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        iVar12 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
        if (iVar12 != 1) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_8 = local_50[0];
        iVar12 = sub_00668F50(this_00,local_c,0,(uint *)local_50);
        if (iVar12 != 1) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_14 = Library::DKW::LIB::MemAllocClear(4);
        if (DAT_00808a8f != '\0') {
          *local_14 = (uint)(g_bulkInitializedRecords_008087C7[(uint)local_8 & 0xff].field_0023 !=
                            g_bulkInitializedRecords_008087C7[(uint)local_50[0] & 0xff].field_0023);
          goto cf_common_exit_00670431;
        }
        if ((char)local_50[0] == (char)local_8) {
LAB_0066bdcc:
          iVar12 = 0;
        }
        else {
          uVar13 = (uint)local_50[0] & 0xff;
          uVar28 = (uint)local_8 & 0xff;
          bVar1 = g_playerRelationMatrix[uVar13][uVar28];
          if ((bVar1 == 0) && (g_playerRelationMatrix[uVar28][uVar13] == 0)) {
            iVar12 = -2;
          }
          else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar28][uVar13] == 0)) {
            iVar12 = -1;
          }
          else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar28][uVar13] == 1)) {
            iVar12 = 1;
          }
          else {
            if ((bVar1 != 1) || (g_playerRelationMatrix[uVar28][uVar13] != 1)) goto LAB_0066bdcc;
            iVar12 = 2;
          }
        }
        *local_14 = (uint)(iVar12 < 0);
        goto cf_common_exit_00670431;
      }
      if (iVar12 < 0x7d7) {
        if (iVar12 == 0x7d6) {
          local_c = nullptr;
          if (0 < param_2) {
            local_10 = nullptr;
            do {
              if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar27 != nullptr) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                RaiseInternalException
                          (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_10 = local_10 + 5;
            } while ((int)local_c < param_2);
          }
          iVar12 = (*this_00->vtable->slot_00)(param_1);
          if ((g_dArray_0080C4C7 == nullptr) ||
             ((int)g_dArray_0080C4C7->elementSize <= iVar12)) {
            local_c = nullptr;
          }
          else {
            local_c = *(char **)(g_dArray_0080C4C7->growCapacity + iVar12 * 4);
          }
          if (local_c == nullptr) {
            pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar27 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          puVar23 = (uint *)FUN_006c49b0(local_c);
          if (param_3 == nullptr) {
            g_currentExceptionFrame = local_260.previous;
            return puVar23;
          }
          *param_3 = 3;
          g_currentExceptionFrame = local_260.previous;
          return puVar23;
        }
        if (0x7d2 < iVar12) {
          if (iVar12 == 0x7d3) {
            local_c = nullptr;
            if (0 < param_2) {
              local_10 = nullptr;
              do {
                if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                  pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (pcVar27 != nullptr) {
                    Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  RaiseInternalException
                            (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
                }
                local_c = (char *)((int)local_c + 1);
                local_10 = local_10 + 5;
              } while ((int)local_c < param_2);
            }
            iVar12 = (*this_00->vtable->slot_00)(param_1);
            iVar16 = (*this_00->vtable->slot_00)(param_1 + 5);
            local_14 = Library::DKW::LIB::MemAllocClear(4);
            if (iVar16 < iVar12) {
              uVar13 = (*this_00->vtable->slot_10)(iVar16,iVar12);
              *local_14 = uVar13;
            }
            else {
              uVar13 = (*this_00->vtable->slot_10)(iVar12,iVar16);
              *local_14 = uVar13;
            }
          }
          else {
            if (iVar12 != 0x7d4) {
              if (iVar12 == 0x7d5) {
                local_c = nullptr;
                if (0 < param_2) {
                  local_10 = nullptr;
                  do {
                    if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                      if (pcVar27 != nullptr) {
                        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
                      }
                      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                      RaiseInternalException
                                (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
                    }
                    local_c = local_c + 1;
                    local_10 = local_10 + 5;
                  } while ((int)local_c < param_2);
                }
                local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
                if (((int)local_8 < 0) || (3 < (int)local_8)) {
                  pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (pcVar27 != nullptr) {
                    Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  RaiseInternalException
                            (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
                }
                pAVar15 = (AiFltClassTy *)(*this_00->vtable->slot_28)(local_8);
                goto LAB_0066d630;
              }
              goto cf_common_exit_00670456;
            }
            local_c = nullptr;
            if (0 < param_2) {
              local_10 = nullptr;
              do {
                if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                  pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (pcVar27 != nullptr) {
                    Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  RaiseInternalException
                            (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
                }
                local_c = (char *)((int)local_c + 1);
                local_10 = local_10 + 5;
              } while ((int)local_c < param_2);
            }
            local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
            if (((int)local_8 < 0) || (0x20 < (int)local_8)) {
              pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
              if (pcVar27 != nullptr) {
                Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
              }
              *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
              RaiseInternalException
                        (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
            }
            local_14 = Library::DKW::LIB::MemAllocClear(4);
            uVar13 = (*this_00->vtable->slot_24)(local_8);
            *local_14 = uVar13;
          }
          goto cf_common_exit_00670431;
        }
        if (iVar12 == 0x7d2) {
          local_c = nullptr;
          if (0 < param_2) {
            local_10 = nullptr;
            do {
              if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar27 != nullptr) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                RaiseInternalException
                          (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_10 = local_10 + 5;
            } while ((int)local_c < param_2);
          }
          local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
          if (((int)local_8 < 0) || (0xff < (int)local_8)) {
            pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar27 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = (&DAT_0080e43b)[(int)local_8];
          goto cf_common_exit_00670431;
        }
        if (iVar12 < 0x7d1) {
          if (iVar12 == 2000) {
            local_c = nullptr;
            if (0 < param_2) {
              local_10 = nullptr;
              do {
                if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                  pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (pcVar27 != nullptr) {
                    Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  RaiseInternalException
                            (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
                }
                local_c = (char *)((int)local_c + 1);
                local_10 = local_10 + 5;
              } while ((int)local_c < param_2);
            }
            local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
            local_10 = (char *)(*this_00->vtable->slot_00)(param_1 + 5);
            local_c = nullptr;
            if ((local_8 == (AiFltClassTy *)0x9) &&
               (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8)) {
              iVar12 = (*this_00->vtable->slot_2C)(local_10);
              local_c = (char *)(uint)(iVar12 == 0);
              local_14 = Library::DKW::LIB::MemAllocClear(4);
              *local_14 = (uint)local_c;
            }
            else {
              iVar12 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
              if (iVar12 == 1) {
                if (g_allPlayers_007FA174 == nullptr) {
                  pAVar14 = nullptr;
                }
                else {
                  pAVar14 = thunk_FUN_004357f0((char)local_50[0]);
                }
                if (pAVar14 != nullptr) {
                  iVar12 = (*pAVar14->vtable_at_1c->vfunc_2C)
                                     ((AiPlrClassTy *)&pAVar14->vtable_at_1c,(short)local_10);
                  local_c = (char *)(uint)(iVar12 == 0);
                  local_14 = Library::DKW::LIB::MemAllocClear(4);
                  *local_14 = (uint)local_c;
                  goto cf_common_exit_00670431;
                }
                local_8 = local_50[0];
                pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar27 != nullptr) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
                }
                *(AiFltClassTy **)&this_00->field_0x84 = local_8;
              }
              else {
                pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar27 != nullptr) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
              }
              RaiseInternalException
                        (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
              local_14 = Library::DKW::LIB::MemAllocClear(4);
              *local_14 = (uint)local_c;
            }
          }
          else {
            if ((iVar12 < 800) || (0x321 < iVar12)) goto cf_common_exit_00670456;
            local_c = nullptr;
            if (0 < param_2) {
              local_10 = nullptr;
              do {
                if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                  pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (pcVar27 != nullptr) {
                    Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  RaiseInternalException
                            (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
                }
                local_c = (char *)((int)local_c + 1);
                local_10 = local_10 + 5;
              } while ((int)local_c < param_2);
            }
            local_14 = Library::DKW::LIB::MemAllocClear(4);
            uVar13 = (*this_00->vtable->slot_00)(param_1);
            *local_14 = uVar13;
          }
          goto cf_common_exit_00670431;
        }
        if (iVar12 != 0x7d1) {
cf_common_exit_00670456:
          pcVar27 = thunk_FUN_00674af0(iVar12);
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x77,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          g_currentExceptionFrame = local_260.previous;
          return local_14;
        }
        local_c = nullptr;
        if (0 < param_2) {
          local_10 = nullptr;
          do {
            if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
              pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
              if (pcVar27 != nullptr) {
                Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
              }
              *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
              RaiseInternalException
                        (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
            }
            local_c = (char *)((int)local_c + 1);
            local_10 = local_10 + 5;
          } while ((int)local_c < param_2);
        }
        local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
        local_10 = (char *)(*this_00->vtable->slot_00)(param_1 + 5);
        if (((int)local_10 < 0) || (0xff < (int)local_10)) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = nullptr;
        if ((local_8 == (AiFltClassTy *)0x9) &&
           (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8)) {
          local_c = (char *)(*this_00->vtable->slot_1C)(local_10);
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = (uint)local_c;
          goto cf_common_exit_00670431;
        }
        iVar12 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
        if (iVar12 != 1) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          goto joined_r0x0066b1d2;
        }
        if (g_allPlayers_007FA174 == nullptr) {
          pAVar14 = nullptr;
        }
        else {
          pAVar14 = thunk_FUN_004357f0((char)local_50[0]);
        }
        if (pAVar14 != nullptr) {
          local_c = (char *)(*pAVar14->vtable_at_1c->vfunc_1C)
                                      ((AiPlrClassTy *)&pAVar14->vtable_at_1c,(short)local_10);
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = (uint)local_c;
          goto cf_common_exit_00670431;
        }
        local_8 = local_50[0];
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
LAB_0066b1ad:
        *(AiFltClassTy **)&this_00->field_0x84 = local_8;
LAB_0066b1fb:
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        local_14 = Library::DKW::LIB::MemAllocClear(4);
        *local_14 = (uint)local_c;
      }
      else {
        switch(iVar12) {
        case 0x7d7:
          uVar13 = (*this_00->vtable->slot_18)();
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          if (uVar13 == 8) {
            uVar13 = 0xff;
          }
          *local_14 = uVar13;
          break;
        default:
          goto cf_common_exit_00670456;
        case 0x7da:
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = g_playSystem_00802A38->field_00E4 / 0x19;
          break;
        case 0x7dc:
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = g_playSystem_00802A38->field_00E4;
          break;
        case 0x7dd:
          local_c = nullptr;
          if (0 < param_2) {
            local_10 = nullptr;
            do {
              if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar27 != nullptr) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                RaiseInternalException
                          (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_10 = local_10 + 5;
            } while ((int)local_c < param_2);
          }
          local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
          local_c = nullptr;
          if ((local_8 == (AiFltClassTy *)0x9) &&
             (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8)) {
            local_c = (char *)(*this_00->vtable->slot_14)();
            local_14 = Library::DKW::LIB::MemAllocClear(4);
            *local_14 = (uint)local_c;
            break;
          }
          iVar12 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
          if (iVar12 == 1) {
            if (g_allPlayers_007FA174 == nullptr) {
              pAVar14 = nullptr;
            }
            else {
              pAVar14 = thunk_FUN_004357f0((char)local_50[0]);
            }
            if (pAVar14 != nullptr) {
              local_c = (char *)(*pAVar14->vtable_at_1c->vfunc_14)
                                          ((AiPlrClassTy *)&pAVar14->vtable_at_1c);
              local_14 = Library::DKW::LIB::MemAllocClear(4);
              *local_14 = (uint)local_c;
              break;
            }
            local_8 = local_50[0];
            pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar27 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
            }
            goto LAB_0066b1ad;
          }
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
joined_r0x0066b1d2:
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          goto LAB_0066b1fb;
        case 0x7de:
          local_c = nullptr;
          if (0 < param_2) {
            local_10 = nullptr;
            do {
              if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar27 != nullptr) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                RaiseInternalException
                          (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_10 = local_10 + 5;
            } while ((int)local_c < param_2);
          }
          local_c = (char *)(*this_00->vtable->slot_00)(param_1);
          if (((local_c == (char *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8)) ||
             (local_c == (char *)0xff)) {
            pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar27 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          iVar12 = sub_00668F50(this_00,local_c,0,(uint *)local_50);
          if (iVar12 != 1) {
            pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar27 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_1d = '\0';
          local_8 = nullptr;
          if (g_cPanel_00801688 != nullptr) {
            thunk_FUN_004f91a0(g_cPanel_00801688,(byte)local_50[0],&local_1d,(int *)&local_8);
          }
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = ~-(uint)(local_1d != '\x01') & (uint)local_8;
          break;
        case 0x7e4:
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          if ((DAT_008087a0 == '\x03') || (DAT_008087a0 == '\b')) {
            *local_14 = _DAT_00807340 & 0xff;
          }
          else {
            *local_14 = 0;
          }
          break;
        case 0x7e5:
          local_c = nullptr;
          if (0 < param_2) {
            local_8 = nullptr;
            do {
              if ((param_1[(int)&local_8->vtable] != '\x04') &&
                 (param_1[(int)&local_8->vtable] != '\x01')) {
                pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar27 != nullptr) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                RaiseInternalException
                          (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_8 = (AiFltClassTy *)&local_8->field_0x5;
            } while ((int)local_c < param_2);
          }
          local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
          if (((local_8 == (AiFltClassTy *)0x9) &&
              (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8)) ||
             (local_8 == (AiFltClassTy *)0xff)) {
            pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar27 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          iVar12 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
          if (iVar12 != 1) {
            pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar27 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          if (DAT_00808a8f != '\0') {
            *local_14 = (uint)g_bulkInitializedRecords_008087C7[(int)local_50[0]].field_0023;
            break;
          }
          goto LAB_0066bb5e;
        }
      }
      goto cf_common_exit_00670431;
    }
    switch(iVar12) {
    case 0x7e7:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar27 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_c = (char *)(*this_00->vtable->slot_00)(param_1);
      if (((local_c == (char *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8)) ||
         (local_c == (char *)0xff)) {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      if (local_c == (char *)0x8) {
        local_c = (char *)(uint)DAT_0080874d;
      }
      pcVar27 = local_c;
      if (local_c == (char *)0x9) {
        pcVar27 = (char *)(*this_00->vtable->slot_18)();
      }
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      if ((pcVar27 < 8) &&
         ((g_playSystem_00802A38 == nullptr ||
          (g_bulkInitializedRecords_008087C7[(int)pcVar27].field_0022 < 8)))) {
        *local_14 = 1;
        break;
      }
LAB_0066bb5e:
      *local_14 = 0;
      break;
    case 0x7e8:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar27 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      uVar13 = (*this_00->vtable->slot_00)(param_1);
      uVar28 = 0;
      if (DAT_00808a8f == '\0') {
LAB_0066bff3:
        local_14 = Library::DKW::LIB::MemAllocClear(4);
        *local_14 = uVar28;
      }
      else {
        pbVar18 = &g_bulkInitializedRecords_008087C7[0].field_0023;
        do {
          if (((g_playSystem_00802A38 == nullptr) || (pbVar18[-1] < 8)) &&
             (*pbVar18 == uVar13)) {
            uVar28 = 1;
            goto LAB_0066bff3;
          }
          pbVar18 = pbVar18 + 0x51;
        } while ((int)pbVar18 < 0x808a72);
        local_14 = Library::DKW::LIB::MemAllocClear(4);
        *local_14 = 0;
      }
      break;
    case 0x7e9:
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)(DAT_00808a8f != '\0');
      break;
    case 0x7ea:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar27 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if (((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8)
          ) || (local_8 == (AiFltClassTy *)0xff)) {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      iVar12 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
      if (iVar12 != 1) {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)(byte)local_50[0][0x32cd].field_0x268;
      break;
    case 0x7eb:
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)DAT_0080874d;
      break;
    case 0x7ec:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar27 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if (((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8)
          ) || (local_8 == (AiFltClassTy *)0xff)) {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      iVar12 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
      if (iVar12 != 1) {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)g_bulkInitializedRecords_008087C7[(int)local_50[0]].field_0021;
      break;
    case 0x7ed:
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)(DAT_00808a94 != '\0');
      break;
    case 0x7ee:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar27 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8))
      {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      puVar23 = (uint *)(param_1 + 5);
      uVar13 = (*this_00->vtable->slot_00)(puVar23,local_50);
      iVar12 = sub_00668F50(this_00,(char *)local_8,uVar13,puVar23);
      DAT_00811980 = 0;
      if (0 < iVar12) {
        local_10 = param_1 + 0x2d;
        local_18 = param_1 + 0x28;
        local_2c = (byte *)(param_1 + 0x23);
        local_1c = (byte *)(param_1 + 0x1e);
        local_24 = param_1 + 0x19;
        local_30 = param_1 + 0x14;
        local_28 = param_1 + 0xf;
        local_c = param_1 + 10;
        ppAVar29 = local_50;
        do {
          puVar33 = nullptr;
          puVar23 = nullptr;
          pcVar32 = thunk_FUN_006771e0;
          pcVar27 = local_10;
          sVar4 = (*this_00->vtable->slot_00)();
          sVar10 = (short)pcVar27;
          pcVar27 = local_18;
          sVar5 = (*this_00->vtable->slot_00)();
          sVar9 = (short)pcVar27;
          pbVar18 = local_2c;
          sVar6 = (*this_00->vtable->slot_00)();
          sVar7 = (short)pbVar18;
          pbVar18 = local_1c;
          pbVar17 = (byte *)(*this_00->vtable->slot_00)();
          cVar3 = (char)pbVar18;
          pcVar27 = local_24;
          uVar22 = (*this_00->vtable->slot_00)();
          uVar22 = (*this_00->vtable->slot_00)(local_30,uVar22);
          uVar22 = (*this_00->vtable->slot_00)(local_28,uVar22);
          uVar13 = (*this_00->vtable->slot_00)(local_c,0x3fffffff,0,uVar22);
          _EnumPlObj(*ppAVar29,uVar13,(uint)pcVar27,pbVar17,cVar3,sVar6,sVar7,sVar5,sVar9,sVar4,
                     sVar10,pcVar32,puVar23,puVar33);
          ppAVar29 = ppAVar29 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      goto cf_common_exit_0066DF5E;
    case 0x7ef:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar27 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8))
      {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      puVar23 = (uint *)(param_1 + 5);
      uVar13 = (*this_00->vtable->slot_00)(puVar23,local_50);
      iVar12 = sub_00668F50(this_00,(char *)local_8,uVar13,puVar23);
      DAT_00811980 = 0;
      if (0 < iVar12) {
        local_10 = param_1 + 0x2d;
        local_18 = param_1 + 0x28;
        local_2c = (byte *)(param_1 + 0x23);
        local_1c = (byte *)(param_1 + 0x1e);
        local_24 = param_1 + 0x19;
        local_30 = param_1 + 0x14;
        local_28 = param_1 + 0xf;
        local_c = param_1 + 10;
        ppAVar29 = local_50;
        do {
          puVar33 = nullptr;
          puVar23 = nullptr;
          pcVar32 = thunk_FUN_006771e0;
          pcVar27 = local_10;
          sVar4 = (*this_00->vtable->slot_00)();
          sVar10 = (short)pcVar27;
          pcVar27 = local_18;
          sVar5 = (*this_00->vtable->slot_00)();
          sVar9 = (short)pcVar27;
          pbVar18 = local_2c;
          sVar6 = (*this_00->vtable->slot_00)();
          sVar7 = (short)pbVar18;
          pbVar18 = local_1c;
          pbVar17 = (byte *)(*this_00->vtable->slot_00)();
          cVar3 = (char)pbVar18;
          uVar22 = (*this_00->vtable->slot_00)(local_24);
          uVar22 = (*this_00->vtable->slot_00)(local_30,uVar22);
          uVar22 = (*this_00->vtable->slot_00)(local_28,uVar22);
          uVar13 = (*this_00->vtable->slot_00)(local_c,0,uVar22);
          _EnumPlObj(*ppAVar29,0,uVar13,pbVar17,cVar3,sVar6,sVar7,sVar5,sVar9,sVar4,sVar10,pcVar32,
                     puVar23,puVar33);
          ppAVar29 = ppAVar29 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      goto cf_common_exit_0066DF5E;
    case 0x7f0:
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_8 < 10);
      if ((param_1[10] != '\x06') && (param_1[10] != '\x03')) {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_c = (char *)0x3;
      if (3 < param_2) {
        local_8 = (AiFltClassTy *)0xf;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar27 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8))
      {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      puVar23 = (uint *)(param_1 + 5);
      uVar13 = (*this_00->vtable->slot_00)(puVar23,local_50);
      iVar12 = sub_00668F50(this_00,(char *)local_8,uVar13,puVar23);
      DAT_00811980 = 0;
      if (0 < iVar12) {
        local_10 = param_1 + 0x2d;
        local_18 = param_1 + 0x28;
        local_2c = (byte *)(param_1 + 0x23);
        local_1c = (byte *)(param_1 + 0x1e);
        local_24 = param_1 + 0x19;
        local_30 = param_1 + 0x14;
        local_28 = param_1 + 0xf;
        local_c = param_1 + 10;
        ppAVar29 = local_50;
        do {
          puVar33 = nullptr;
          puVar23 = nullptr;
          pcVar32 = thunk_FUN_006771e0;
          pcVar27 = local_10;
          sVar4 = (*this_00->vtable->slot_00)();
          sVar10 = (short)pcVar27;
          pcVar27 = local_18;
          sVar5 = (*this_00->vtable->slot_00)();
          sVar9 = (short)pcVar27;
          pbVar18 = local_2c;
          sVar6 = (*this_00->vtable->slot_00)();
          sVar7 = (short)pbVar18;
          pbVar18 = local_1c;
          uVar22 = (*this_00->vtable->slot_00)();
          cVar3 = (char)pbVar18;
          uVar22 = (*this_00->vtable->slot_00)(local_24,uVar22);
          uVar22 = (*this_00->vtable->slot_00)(local_30,uVar22);
          uVar22 = (*this_00->vtable->slot_00)(local_28,uVar22);
          pbVar18 = (byte *)(*this_00->vtable->slot_08)(local_c,uVar22);
          _EnumPlObj(*ppAVar29,0,0x3fffffff,pbVar18,cVar3,sVar6,sVar7,sVar5,sVar9,sVar4,sVar10,
                     pcVar32,puVar23,puVar33);
          ppAVar29 = ppAVar29 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
cf_common_exit_0066DF5E:
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = DAT_00811980;
      break;
    case 0x7f1:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar27 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8))
      {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      puVar23 = (uint *)(param_1 + 5);
      uVar13 = (*this_00->vtable->slot_00)(puVar23,local_50);
      pcVar27 = (char *)sub_00668F50(this_00,(char *)local_8,uVar13,puVar23);
      local_10 = nullptr;
      if (0 < (int)pcVar27) {
        local_c = param_1 + 10;
        local_8 = (AiFltClassTy *)local_50;
        do {
          local_18 = pcVar27;
          puVar19 = (byte *)thunk_FUN_0043e420(local_4f0,*(char *)&local_8->vtable);
          pcVar27 = local_c;
          puVar30 = (byte *)(local_19c);
          memmove(puVar30, puVar19, 0x138); /* compiler REP MOVS byte copy */
          uVar13 = (*this_00->vtable->slot_00)(pcVar27);
          iVar12 = 0;
          do {
            uVar28 = 1 << ((byte)iVar12 & 0x1f) & uVar13;
            if (uVar28 < 0x101) {
              iVar16 = local_74;
              if (uVar28 != 0x100) {
                switch(uVar28) {
                case 1:
                  iVar16 = local_f4;
                  break;
                case 2:
                  iVar16 = local_e4;
                  break;
                default:
                  goto cf_continue_loop_0066CACD;
                case 4:
                  iVar16 = local_d4;
                  break;
                case 8:
                  iVar16 = local_c4;
                  break;
                case 0x10:
                  iVar16 = local_b4;
                  break;
                case 0x20:
                  iVar16 = local_a4;
                  break;
                case 0x40:
                  iVar16 = local_94;
                  break;
                case 0x80:
                  iVar16 = local_84;
                }
              }
cf_common_join_0066CACB:
              local_10 = (char *)((int)local_10 + iVar16);
            }
            else {
              if (0x100000 < uVar28) {
                iVar16 = local_124;
                if (((uVar28 != 0x200000) && (iVar16 = local_114, uVar28 != 0x400000)) &&
                   (iVar16 = local_104, uVar28 != 0x800000)) goto cf_continue_loop_0066CACD;
                goto cf_common_join_0066CACB;
              }
              iVar16 = local_134;
              if (uVar28 == 0x100000) goto cf_common_join_0066CACB;
              if (uVar28 < 0x40001) {
                iVar16 = local_174;
                if (((uVar28 == 0x40000) || (iVar16 = local_154, uVar28 == 0x10000)) ||
                   (iVar16 = local_144, uVar28 == 0x20000)) goto cf_common_join_0066CACB;
              }
              else {
                iVar16 = local_164;
                if (uVar28 == 0x80000) goto cf_common_join_0066CACB;
              }
            }
cf_continue_loop_0066CACD:
            iVar12 = iVar12 + 1;
          } while (iVar12 < 0x20);
          local_8 = (AiFltClassTy *)&local_8->field_0x4;
          pcVar27 = local_18 + -1;
          local_18 = pcVar27;
        } while (pcVar27 != nullptr);
      }
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)local_10;
      break;
    case 0x7f2:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar27 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8))
      {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      puVar23 = (uint *)(param_1 + 5);
      uVar13 = (*this_00->vtable->slot_00)(puVar23,local_50);
      pcVar27 = (char *)sub_00668F50(this_00,(char *)local_8,uVar13,puVar23);
      local_10 = nullptr;
      if (0 < (int)pcVar27) {
        local_c = param_1 + 10;
        local_8 = (AiFltClassTy *)local_50;
        do {
          local_18 = pcVar27;
          puVar19 = (byte *)thunk_FUN_0043e420(local_3b8,*(char *)&local_8->vtable);
          pcVar27 = local_c;
          puVar30 = (byte *)(local_19c);
          memmove(puVar30, puVar19, 0x138); /* compiler REP MOVS byte copy */
          uVar13 = (*this_00->vtable->slot_00)(pcVar27);
          iVar12 = 0;
          do {
            uVar28 = 1 << ((byte)iVar12 & 0x1f) & uVar13;
            if (uVar28 < 0x101) {
              iVar16 = local_70;
              if (uVar28 != 0x100) {
                switch(uVar28) {
                case 1:
                  iVar16 = local_f0;
                  break;
                case 2:
                  iVar16 = local_e0;
                  break;
                default:
                  goto cf_continue_loop_0066CD4A;
                case 4:
                  iVar16 = local_d0;
                  break;
                case 8:
                  iVar16 = local_c0;
                  break;
                case 0x10:
                  iVar16 = local_b0;
                  break;
                case 0x20:
                  iVar16 = local_a0;
                  break;
                case 0x40:
                  iVar16 = local_90;
                  break;
                case 0x80:
                  iVar16 = local_80;
                }
              }
cf_common_join_0066CD48:
              local_10 = (char *)((int)local_10 + iVar16);
            }
            else {
              if (0x100000 < uVar28) {
                iVar16 = local_120;
                if (((uVar28 != 0x200000) && (iVar16 = local_110, uVar28 != 0x400000)) &&
                   (iVar16 = local_100, uVar28 != 0x800000)) goto cf_continue_loop_0066CD4A;
                goto cf_common_join_0066CD48;
              }
              iVar16 = local_130;
              if (uVar28 == 0x100000) goto cf_common_join_0066CD48;
              if (uVar28 < 0x40001) {
                iVar16 = local_170;
                if (((uVar28 == 0x40000) || (iVar16 = local_150, uVar28 == 0x10000)) ||
                   (iVar16 = local_140, uVar28 == 0x20000)) goto cf_common_join_0066CD48;
              }
              else {
                iVar16 = local_160;
                if (uVar28 == 0x80000) goto cf_common_join_0066CD48;
              }
            }
cf_continue_loop_0066CD4A:
            iVar12 = iVar12 + 1;
          } while (iVar12 < 0x20);
          local_8 = (AiFltClassTy *)&local_8->field_0x4;
          pcVar27 = local_18 + -1;
          local_18 = pcVar27;
        } while (pcVar27 != nullptr);
      }
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)local_10;
      break;
    case 0x7f3:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar27 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8))
      {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      puVar23 = (uint *)(param_1 + 5);
      uVar13 = (*this_00->vtable->slot_00)(puVar23,local_50);
      pcVar27 = (char *)sub_00668F50(this_00,(char *)local_8,uVar13,puVar23);
      local_10 = nullptr;
      if (0 < (int)pcVar27) {
        local_c = param_1 + 10;
        local_8 = (AiFltClassTy *)local_50;
        do {
          local_18 = pcVar27;
          puVar19 = (byte *)thunk_FUN_0043e420(local_628,*(char *)&local_8->vtable);
          pcVar27 = local_c;
          puVar30 = (byte *)(local_19c);
          memmove(puVar30, puVar19, 0x138); /* compiler REP MOVS byte copy */
          uVar13 = (*this_00->vtable->slot_00)(pcVar27);
          iVar12 = 0;
          do {
            uVar28 = 1 << ((byte)iVar12 & 0x1f) & uVar13;
            if (uVar28 < 0x101) {
              iVar16 = local_78;
              if (uVar28 != 0x100) {
                switch(uVar28) {
                case 1:
                  iVar16 = local_f8;
                  break;
                case 2:
                  iVar16 = local_e8;
                  break;
                default:
                  goto cf_continue_loop_0066CFCA;
                case 4:
                  iVar16 = local_d8;
                  break;
                case 8:
                  iVar16 = local_c8;
                  break;
                case 0x10:
                  iVar16 = local_b8;
                  break;
                case 0x20:
                  iVar16 = local_a8;
                  break;
                case 0x40:
                  iVar16 = local_98;
                  break;
                case 0x80:
                  iVar16 = local_88;
                }
              }
cf_common_join_0066CFC8:
              local_10 = (char *)((int)local_10 + iVar16);
            }
            else {
              if (0x100000 < uVar28) {
                iVar16 = local_128;
                if (((uVar28 != 0x200000) && (iVar16 = local_118, uVar28 != 0x400000)) &&
                   (iVar16 = local_108, uVar28 != 0x800000)) goto cf_continue_loop_0066CFCA;
                goto cf_common_join_0066CFC8;
              }
              iVar16 = local_138;
              if (uVar28 == 0x100000) goto cf_common_join_0066CFC8;
              if (uVar28 < 0x40001) {
                iVar16 = local_178;
                if (((uVar28 == 0x40000) || (iVar16 = local_158, uVar28 == 0x10000)) ||
                   (iVar16 = local_148, uVar28 == 0x20000)) goto cf_common_join_0066CFC8;
              }
              else {
                iVar16 = local_168;
                if (uVar28 == 0x80000) goto cf_common_join_0066CFC8;
              }
            }
cf_continue_loop_0066CFCA:
            iVar12 = iVar12 + 1;
          } while (iVar12 < 0x20);
          local_8 = (AiFltClassTy *)&local_8->field_0x4;
          pcVar27 = local_18 + -1;
          local_18 = pcVar27;
        } while (pcVar27 != nullptr);
      }
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)local_10;
      break;
    case 0x7f4:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar27 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8))
      {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      puVar23 = (uint *)(param_1 + 5);
      uVar13 = (*this_00->vtable->slot_00)(puVar23,local_50);
      pAVar15 = (AiFltClassTy *)sub_00668F50(this_00,(char *)local_8,uVar13,puVar23);
      pcVar27 = nullptr;
      if (0 < (int)pAVar15) {
        local_c = param_1 + 10;
        ppAVar29 = local_50;
        local_8 = pAVar15;
        do {
          GVar20 = (*this_00->vtable->slot_00)(local_c);
          iVar12 = thunk_FUN_00677700((int)*ppAVar29,GVar20);
          pcVar27 = pcVar27 + iVar12;
          ppAVar29 = ppAVar29 + 1;
          local_8 = (AiFltClassTy *)((int)&local_8[-1].field_0284 + 3);
        } while (local_8 != nullptr);
        local_8 = nullptr;
      }
      goto cf_common_exit_00670425;
    case 0x7f5:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar27 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      uVar22 = (*this_00->vtable->slot_00)(param_1 + 0x1e);
      uVar22 = (*this_00->vtable->slot_00)(param_1 + 0x19,uVar22);
      uVar22 = (*this_00->vtable->slot_00)(param_1 + 0x14,uVar22);
      uVar22 = (*this_00->vtable->slot_00)(param_1 + 0xf,uVar22);
      pcVar27 = param_1 + 10;
      iVar12 = (*this_00->vtable->slot_00)(pcVar27,uVar22);
      pcVar25 = param_1 + 5;
      iVar16 = (*this_00->vtable->slot_00)();
      GVar21 = (*this_00->vtable->slot_00)();
      uVar12 = thunk_FUN_006777d0(GVar21,(int)param_1,iVar16,pcVar25,iVar12,(int)pcVar27);
      *local_14 = uVar12;
      break;
    default:
      goto cf_common_exit_00670456;
    }
    goto cf_common_exit_00670431;
  }
  sVar4 = (short)param_1;
  switch(iVar12) {
  case 0x7f7:
    local_8 = nullptr;
    do {
      if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01'))
      {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0xf);
    if ((param_1[0xf] != '\x06') && (param_1[0xf] != '\x03')) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x4;
    if (4 < param_2) {
      local_8 = (AiFltClassTy *)0x14;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = local_c + 1;
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    puVar23 = (uint *)(param_1 + 5);
    uVar13 = (*this_00->vtable->slot_00)(puVar23,local_50);
    iVar12 = sub_00668F50(this_00,(char *)local_8,uVar13,puVar23);
    DAT_00811980 = 0;
    if (0 < iVar12) {
      local_10 = param_1 + 0x2d;
      local_18 = param_1 + 0x28;
      local_2c = (byte *)(param_1 + 0x23);
      local_1c = (byte *)(param_1 + 0x1e);
      local_24 = param_1 + 0x19;
      local_30 = param_1 + 0x14;
      local_28 = param_1 + 0xf;
      local_c = param_1 + 10;
      ppAVar29 = local_50;
      do {
        uVar34 = 0;
        pcVar32 = thunk_FUN_00677ef0;
        pcVar27 = local_10;
        sVar4 = (*this_00->vtable->slot_00)();
        sVar8 = (short)pcVar27;
        pcVar27 = local_18;
        sVar5 = (*this_00->vtable->slot_00)();
        sVar10 = (short)pcVar27;
        pbVar18 = local_2c;
        sVar6 = (*this_00->vtable->slot_00)();
        sVar9 = (short)pbVar18;
        pbVar18 = local_1c;
        uVar22 = (*this_00->vtable->slot_00)();
        uVar22 = (*this_00->vtable->slot_00)(local_24,uVar22);
        uVar22 = (*this_00->vtable->slot_00)(local_30,uVar22);
        uVar22 = (*this_00->vtable->slot_08)(local_28,uVar22);
        sVar7 = (*this_00->vtable->slot_00)(local_c,uVar22);
        _EnumRCCont(*(short *)ppAVar29,sVar7,pbVar18,sVar6,sVar9,sVar5,sVar10,sVar4,sVar8,pcVar32,
                    uVar34);
        ppAVar29 = ppAVar29 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    goto cf_common_exit_0066DF5E;
  case 0x7f8:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar27 = thunk_FUN_00674af0(iVar12);
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    DAT_00811980 = 0;
    uVar22 = (*this_00->vtable->slot_00)(param_1 + 0x23,thunk_FUN_00678200,0);
    uVar22 = (*this_00->vtable->slot_00)(param_1 + 0x1e,uVar22);
    uVar22 = (*this_00->vtable->slot_00)(param_1 + 0x19,uVar22);
    pcVar27 = param_1 + 0x14;
    sVar7 = (*this_00->vtable->slot_00)();
    sVar5 = sVar4 + 0xf;
    sVar9 = (*this_00->vtable->slot_00)();
    sVar6 = sVar4 + 10;
    sVar10 = (*this_00->vtable->slot_00)();
    sVar4 = sVar4 + 5;
    pbVar18 = (byte *)(*this_00->vtable->slot_08)();
    sVar8 = (*this_00->vtable->slot_00)(param_1);
    _EnumArt(sVar8,pbVar18,sVar4,sVar10,sVar6,sVar9,sVar5,sVar7,pcVar27,uVar22);
    goto cf_common_exit_0066DCED;
  case 0x7f9:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar27 = thunk_FUN_00674af0(iVar12);
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    DAT_00811980 = 0;
    uVar22 = (*this_00->vtable->slot_00)(param_1 + 0x23,thunk_FUN_00678870,0);
    uVar22 = (*this_00->vtable->slot_00)(param_1 + 0x1e,uVar22);
    uVar22 = (*this_00->vtable->slot_00)(param_1 + 0x19,uVar22);
    pcVar27 = param_1 + 0x14;
    sVar6 = (*this_00->vtable->slot_00)();
    sVar5 = sVar4 + 0xf;
    sVar7 = (*this_00->vtable->slot_00)();
    sVar4 = sVar4 + 10;
    sVar9 = (*this_00->vtable->slot_00)();
    pcVar25 = param_1;
    cVar3 = (*this_00->vtable->slot_00)();
    sVar10 = (short)pcVar25;
    pbVar18 = (byte *)(*this_00->vtable->slot_08)(param_1 + 5);
    _EnumDest(pbVar18,cVar3,sVar10,sVar9,sVar4,sVar7,sVar5,sVar6,pcVar27,uVar22);
    goto cf_common_exit_0066DCED;
  case 0x7fa:
    local_8 = nullptr;
    do {
      if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01'))
      {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0x14);
    if ((param_1[0x14] != '\x06') && (param_1[0x14] != '\x03')) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x5;
    if (5 < param_2) {
      local_8 = (AiFltClassTy *)0x19;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = local_c + 1;
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    puVar23 = (uint *)(param_1 + 5);
    uVar13 = (*this_00->vtable->slot_00)(puVar23,local_50);
    iVar12 = sub_00668F50(this_00,(char *)local_8,uVar13,puVar23);
    DAT_00811980 = 0;
    if (0 < iVar12) {
      local_8 = (AiFltClassTy *)(param_1 + 0x32);
      local_10 = param_1 + 0x2d;
      local_18 = param_1 + 0x28;
      local_2c = (byte *)(param_1 + 0x23);
      local_1c = (byte *)(param_1 + 0x1e);
      local_24 = param_1 + 0x19;
      local_30 = param_1 + 0x14;
      local_28 = param_1 + 0xf;
      local_c = param_1 + 10;
      ppAVar29 = local_50;
      do {
        uVar34 = 0;
        pcVar32 = thunk_FUN_00678560;
        pAVar15 = local_8;
        sVar4 = (*this_00->vtable->slot_00)();
        sVar8 = (short)pAVar15;
        pcVar27 = local_10;
        sVar5 = (*this_00->vtable->slot_00)();
        sVar10 = (short)pcVar27;
        pcVar27 = local_18;
        sVar6 = (*this_00->vtable->slot_00)();
        sVar9 = (short)pcVar27;
        pbVar18 = local_2c;
        cVar3 = (*this_00->vtable->slot_00)();
        uVar22 = (*this_00->vtable->slot_00)(local_1c);
        uVar22 = (*this_00->vtable->slot_00)(local_24,uVar22);
        uVar22 = (*this_00->vtable->slot_08)(local_30,uVar22);
        uVar22 = (*this_00->vtable->slot_00)(local_28,uVar22);
        sVar7 = (*this_00->vtable->slot_00)(local_c,uVar22);
        _EnumMines((int)*ppAVar29,sVar7,cVar3,pbVar18,sVar6,sVar9,sVar5,sVar10,sVar4,sVar8,pcVar32,
                   uVar34);
        ppAVar29 = ppAVar29 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    goto cf_common_exit_0066DF5E;
  case 0x7fb:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    DAT_00811980 = 0;
    uVar22 = (*this_00->vtable->slot_00)(param_1 + 0x1e,thunk_FUN_00677bc0,0);
    uVar22 = (*this_00->vtable->slot_00)(param_1 + 0x19,uVar22);
    uVar22 = (*this_00->vtable->slot_00)(param_1 + 0x14,uVar22);
    pcVar27 = param_1 + 0xf;
    sVar6 = (*this_00->vtable->slot_00)();
    sVar5 = sVar4 + 10;
    sVar7 = (*this_00->vtable->slot_00)();
    sVar4 = sVar4 + 5;
    sVar9 = (*this_00->vtable->slot_00)();
    sVar10 = (*this_00->vtable->slot_00)();
    _EnumRCField(sVar10,(short)param_1,sVar9,sVar4,sVar7,sVar5,sVar6,pcVar27,uVar22);
cf_common_exit_0066DCED:
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = DAT_00811980;
    break;
  case 0x7fc:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_c = (char *)0xffffffff;
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    local_10 = (char *)(*this_00->vtable->slot_00)(param_1 + 5);
    iVar12 = (*this_00->vtable->slot_00)(param_1 + 10);
    switch(local_8) {
    case (AiFltClassTy *)0xdc:
      if (((int)local_10 < 0x32) || (0x73 < (int)local_10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if ((0 < iVar12) && (iVar12 < 4)) {
          local_c = *(char **)(&DAT_00854350 + (iVar12 + (int)local_10 * 3) * 4);
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
        if ((0 < iVar12) && (iVar12 < 4)) {
          local_c = *(char **)(&DAT_007e19f4 + (iVar12 + (int)local_10 * 3) * 4);
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
        if ((0 < iVar12) && (iVar12 < 4)) {
          local_c = *(char **)(&DAT_007e22a0 + (iVar12 + (int)local_10 * 3) * 4);
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
      local_c = nullptr;
      break;
    case (AiFltClassTy *)0xe2:
      if (((int)local_10 < 0x32) || (0x73 < (int)local_10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if ((0 < iVar12) && (iVar12 < 4)) {
          local_c = *(char **)(&DAT_007e2f04 + (iVar12 + (int)local_10 * 3) * 4);
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
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = (uint)local_c;
    break;
  default:
    goto cf_common_exit_00670456;
  case 0x80c:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar27 = thunk_FUN_00674af0(iVar12);
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_10 = nullptr;
    iVar12 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar12 == 1) {
      puVar33 = nullptr;
      puVar23 = nullptr;
      pcVar32 = thunk_FUN_00677200;
      sVar10 = -1;
      sVar9 = -1;
      sVar7 = -1;
      sVar6 = 0;
      sVar5 = 0;
      sVar4 = 0;
      cVar3 = -1;
      pbVar18 = (byte *)(*this_00->vtable->slot_08)(param_1 + 5);
      iVar12 = _EnumPlObj(local_50[0],0,0x3fffffff,pbVar18,cVar3,sVar4,sVar5,sVar6,sVar7,sVar9,
                          sVar10,pcVar32,puVar23,puVar33);
      if ((iVar12 == -1) && (g_fish_00811984 != nullptr)) {
        local_10 = (char *)0x1;
        iVar12 = (*this_00->vtable->slot_00)(param_1 + 10);
        local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 0xf);
        local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 0x14);
        iVar16 = (*this_00->vtable->slot_00)(param_1 + 0x19);
        if ((-1 < iVar12) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
          STFishC::sub_004162B0(g_fish_00811984,&local_5a,&local_52,&local_58);
          (*this_00->vtable->slot_20)(iVar12,(int)local_5a);
          (*this_00->vtable->slot_20)(local_8,(int)local_52);
          (*this_00->vtable->slot_20)(local_c,(int)local_58);
        }
        if (-1 < iVar16) {
          uVar22 = (*g_fish_00811984->vtable->vfunc_11C)();
          (*this_00->vtable->slot_20)(iVar16,uVar22);
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = (uint)local_10;
          break;
        }
      }
    }
    else {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = (uint)local_10;
    break;
  case 0x80d:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar27 = thunk_FUN_00674af0(iVar12);
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_10 = nullptr;
    iVar12 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar12 == 1) {
      uVar22 = 0;
      pcVar32 = thunk_FUN_00677f20;
      sVar10 = -1;
      sVar9 = -1;
      sVar7 = -1;
      sVar6 = 0;
      sVar5 = 0;
      sVar4 = 0;
      pbVar18 = (byte *)(*this_00->vtable->slot_08)(param_1 + 5);
      iVar12 = _EnumRCCont((short)local_50[0],0,pbVar18,sVar4,sVar5,sVar6,sVar7,sVar9,sVar10,pcVar32
                           ,uVar22);
      if ((iVar12 == -1) && (g_fish_00811984 != nullptr)) {
        local_10 = (char *)0x1;
        iVar12 = (*this_00->vtable->slot_00)(param_1 + 10);
        local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 0xf);
        local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 0x14);
        iVar16 = (*this_00->vtable->slot_00)(param_1 + 0x19);
        if ((-1 < iVar12) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
          STFishC::sub_004162F0(g_fish_00811984,&local_5c,&local_56,&local_54);
          (*this_00->vtable->slot_20)(iVar12,(int)local_5c);
          (*this_00->vtable->slot_20)(local_8,(int)local_56);
          (*this_00->vtable->slot_20)(local_c,(int)local_54);
        }
        if (-1 < iVar16) {
          uVar22 = (*g_fish_00811984->vtable->vfunc_11C)();
          (*this_00->vtable->slot_20)(iVar16,uVar22);
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = (uint)local_10;
          break;
        }
      }
    }
    else {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = (uint)local_10;
    break;
  case 0x80e:
    if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
      pcVar27 = thunk_FUN_00674af0(iVar12);
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x1;
    if (1 < param_2) {
      local_8 = (AiFltClassTy *)0x5;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    uVar22 = 0;
    pcVar32 = thunk_FUN_00678220;
    puVar33 = (undefined *)0xffffffff;
    sVar9 = -1;
    sVar7 = -1;
    sVar6 = 0;
    local_10 = nullptr;
    sVar5 = 0;
    sVar4 = 0;
    pcVar27 = param_1;
    pbVar18 = (byte *)(*this_00->vtable->slot_08)();
    iVar12 = _EnumArt(0,pbVar18,(short)pcVar27,sVar4,sVar5,sVar6,sVar7,sVar9,puVar33,pcVar32);
    if ((iVar12 == -1) && (g_fish_00811984 != nullptr)) {
      local_10 = (char *)0x1;
      iVar12 = (*this_00->vtable->slot_00)(param_1 + 5,uVar22);
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 10);
      local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 0xf);
      iVar16 = (*this_00->vtable->slot_00)(param_1 + 0x14);
      if ((-1 < iVar12) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
        STFishC::sub_004162F0
                  (g_fish_00811984,&local_60,&local_5e,(undefined2 *)((int)&local_28 + 2));
        (*this_00->vtable->slot_20)(iVar12,(int)local_60);
        (*this_00->vtable->slot_20)(local_8,(int)local_5e);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        (*this_00->vtable->slot_20)(local_c,(int)local_28._2_2_);
      }
      if (-1 < iVar16) {
        uVar22 = (*g_fish_00811984->vtable->vfunc_11C)();
        (*this_00->vtable->slot_20)(iVar16,uVar22);
      }
    }
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = (uint)local_10;
    break;
  case 0x80f:
    if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
      pcVar27 = thunk_FUN_00674af0(iVar12);
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x1;
    if (1 < param_2) {
      local_8 = (AiFltClassTy *)0x5;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    uVar22 = 0;
    pcVar32 = thunk_FUN_00678890;
    puVar33 = (undefined *)0xffffffff;
    sVar10 = -1;
    sVar9 = -1;
    sVar7 = 0;
    sVar6 = 0;
    local_10 = nullptr;
    sVar5 = 0;
    sVar4 = -1;
    pcVar27 = param_1;
    pbVar18 = (byte *)(*this_00->vtable->slot_08)();
    iVar12 = _EnumDest(pbVar18,(char)pcVar27,sVar4,sVar5,sVar6,sVar7,sVar9,sVar10,puVar33,pcVar32);
    if ((iVar12 == -1) && (g_fish_00811984 != nullptr)) {
      local_10 = (char *)0x1;
      iVar12 = (*this_00->vtable->slot_00)(param_1 + 5,uVar22);
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 10);
      local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 0xf);
      iVar16 = (*this_00->vtable->slot_00)(param_1 + 0x14);
      if ((-1 < iVar12) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
        STFishC::sub_004162B0
                  (g_fish_00811984,(short *)((int)&local_30 + 2),(undefined2 *)((int)&local_24 + 2),
                   (undefined2 *)((int)&local_1c + 2));
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        (*this_00->vtable->slot_20)(iVar12,(int)local_30._2_2_);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        (*this_00->vtable->slot_20)(local_8,(int)local_24._2_2_);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        (*this_00->vtable->slot_20)(local_c,(int)local_1c._2_2_);
      }
      if (-1 < iVar16) {
        uVar22 = (*g_fish_00811984->vtable->vfunc_11C)();
        (*this_00->vtable->slot_20)(iVar16,uVar22);
      }
    }
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = (uint)local_10;
    break;
  case 0x810:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar27 = thunk_FUN_00674af0(iVar12);
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_1c = nullptr;
    iVar12 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar12 == 1) {
      uVar22 = 0;
      pcVar32 = thunk_FUN_00678580;
      sVar10 = -1;
      sVar9 = -1;
      sVar7 = -1;
      sVar6 = 0;
      sVar5 = 0;
      sVar4 = 0;
      pbVar18 = (byte *)(*this_00->vtable->slot_08)(param_1 + 5);
      iVar12 = _EnumMines((int)local_50[0],0,-1,pbVar18,sVar4,sVar5,sVar6,sVar7,sVar9,sVar10,pcVar32
                          ,uVar22);
      if ((iVar12 == -1) && (g_fish_00811984 != nullptr)) {
        local_1c = (byte *)0x1;
        iVar12 = (*this_00->vtable->slot_00)(param_1 + 10);
        local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 0xf);
        local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 0x14);
        iVar16 = (*this_00->vtable->slot_00)(param_1 + 0x19);
        if ((-1 < iVar12) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
          STFishC::sub_004162B0
                    (g_fish_00811984,(short *)((int)&local_2c + 2),
                     (undefined2 *)((int)&local_18 + 2),(undefined2 *)((int)&local_10 + 2));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          (*this_00->vtable->slot_20)(iVar12,(int)local_2c._2_2_);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          (*this_00->vtable->slot_20)(local_8,(int)local_18._2_2_);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          (*this_00->vtable->slot_20)(local_c,(int)local_10._2_2_);
        }
        if (-1 < iVar16) {
          uVar22 = (*g_fish_00811984->vtable->vfunc_11C)();
          (*this_00->vtable->slot_20)(iVar16,uVar22);
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = (uint)local_1c;
          break;
        }
      }
    }
    else {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = (uint)local_1c;
    break;
  case 0x816:
  case 0x817:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_c = (char *)(*this_00->vtable->slot_00)(param_1);
    if ((local_c == (char *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_8 = nullptr;
    iVar12 = sub_00668F50(this_00,local_c,0,(uint *)local_50);
    if (iVar12 == 1) {
      if (*(short *)(param_1 + param_2 * 5 + 1) == 0x816) {
        thunk_FUN_004e6f00((int)local_50[0]);
      }
      else if (*(short *)(param_1 + param_2 * 5 + 1) != 0x817) {
        local_14 = Library::DKW::LIB::MemAllocClear(4);
        *local_14 = (uint)local_8;
        break;
      }
      local_8 = (AiFltClassTy *)thunk_FUN_004e6fe0((int)local_50[0]);
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)local_8;
    }
    else {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)local_8;
    }
    break;
  case 0x818:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((int)local_8 < 0) || (0x9a < (int)local_8)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = (uint)*(byte *)((int)&local_8[0x3006].field_00A7 + 1);
    break;
  case 0x819:
  case 0x81b:
  case 0x81c:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_10 = (char *)(*this_00->vtable->slot_00)(param_1);
    local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 5);
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 10);
    if (((int)local_c < 0) || (0x9a < (int)local_c)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    if ((local_10 == (char *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_18 = nullptr;
    iVar12 = sub_00668F50(this_00,local_10,0,(uint *)local_50);
    pAVar15 = local_8;
    pcVar27 = local_c;
    if (iVar12 == 1) {
      sVar4 = *(short *)(param_1 + param_2 * 5 + 1);
      if (sVar4 == 0x819) {
        iVar12 = thunk_FUN_004e60d0((int)local_50[0],(int)local_c);
        bVar2 = (int)local_8 <= iVar12;
        local_14 = Library::DKW::LIB::MemAllocClear(4);
        *local_14 = (uint)bVar2;
        break;
      }
      if (sVar4 == 0x81b) {
        iVar12 = thunk_FUN_004e5990((int)local_50[0],(uint)local_c,(int)local_8);
        local_14 = Library::DKW::LIB::MemAllocClear(4);
        *local_14 = (uint)(iVar12 != 0);
        break;
      }
      if (sVar4 == 0x81c) {
        iVar12 = thunk_FUN_004e5cc0((int)local_50[0],(uint)local_c,(int)local_8);
        if ((iVar12 == 0) &&
           (iVar12 = thunk_FUN_004e7f20((int)local_50[0],(int)pcVar27,(int)pAVar15), iVar12 == 0)) {
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = 0;
        }
        else {
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = 1;
        }
        break;
      }
    }
    else {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    uVar13 = (uint)local_18;
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = uVar13;
    break;
  case 0x81a:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 5);
    if (((int)local_c < 0) || (0x9a < (int)local_c)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_10 = nullptr;
    iVar12 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar12 == 1) {
      iVar12 = thunk_FUN_004e5f90((int)local_50[0],(uint)local_c);
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)(iVar12 != 0);
    }
    else {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      uVar13 = (uint)local_10;
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = uVar13;
    }
    break;
  case 0x81d:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_c = (char *)(*this_00->vtable->slot_00)(param_1);
    iVar12 = (*this_00->vtable->slot_00)(param_1 + 5);
    local_8 = (AiFltClassTy *)(iVar12 + -1);
    if (((int)local_c < 0) || (0x9a < (int)local_c)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    if (((int)local_8 < 0) || (3 < (int)local_c)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = *(uint *)(&DAT_007e481c + (int)(&local_8->vtable + (int)local_c) * 4);
    break;
  case 0x82a:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar27 = thunk_FUN_00674af0(iVar12);
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x1;
    if (1 < param_2) {
      local_8 = (AiFltClassTy *)0x5;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x06') && (param_1[(int)&local_8->vtable] != '\x03')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    iVar12 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar12 != 1) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    uVar22 = (*this_00->vtable->slot_08)(param_1 + 10);
    pbVar17 = (byte *)(param_1 + 5);
    pbVar18 = (byte *)(*this_00->vtable->slot_08)(pbVar17,uVar22);
    iVar12 = thunk_FUN_0066ab60((byte)local_50[0],pbVar18,pbVar17);
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    if (iVar12 == 0) {
      *local_14 = 0xffffffff;
    }
    else {
      *local_14 = (uint)*(ushort *)(iVar12 + 0x7d);
    }
    break;
  case 0x82b:
    local_8 = nullptr;
    do {
      if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01'))
      {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0x14);
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    iVar12 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar12 != 1) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0xffffffff;
    uVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    this_01 = (AnonReceiver_0065DA50 *)thunk_FUN_0066ac80((char)local_50[0],uVar11);
    pAVar15 = local_50[0];
    pcVar27 = local_c;
    if (this_01 != nullptr) {
      cVar3 = (char)param_1 + '\x0f';
      uVar22 = (*this_00->vtable->slot_00)();
      iVar12 = (*this_00->vtable->slot_00)(param_1 + 10,uVar22);
      pcVar27 = (char *)AnonReceiver_0065DA50::thunk_FUN_0065da50(this_01,iVar12,cVar3);
      pAVar15 = local_50[0];
      local_c = pcVar27;
    }
    goto joined_r0x006703e6;
  case 0x82c:
    local_8 = nullptr;
    do {
      if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01'))
      {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0x14);
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    iVar12 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar12 != 1) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0xffffffff;
    uVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    pAVar24 = (AiFltClassTy *)thunk_FUN_0066ac80((char)local_50[0],uVar11);
    pAVar15 = local_50[0];
    pcVar27 = local_c;
    if (pAVar24 != nullptr) {
      cVar3 = (char)param_1 + '\x0f';
      uVar22 = (*this_00->vtable->slot_00)();
      uVar31 = (*this_00->vtable->slot_00)(param_1 + 10,uVar22);
      pcVar27 = (char *)thunk_FUN_0065dc00(pAVar24,(int)((ulonglong)uVar31 >> 0x20),(uint)uVar31,
                                           cVar3);
      pAVar15 = local_50[0];
      local_c = pcVar27;
    }
    goto joined_r0x006703e6;
  case 0x82d:
    local_8 = nullptr;
    do {
      if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01'))
      {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 10);
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    iVar12 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar12 != 1) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    uVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    iVar12 = thunk_FUN_0066ac80((char)local_50[0],uVar11);
    pcVar27 = (char *)0xffffffff;
    if (iVar12 != 0) {
      pcVar27 = *(char **)(iVar12 + 0xeb);
    }
    goto LAB_0066fbc1;
  case 0x82e:
    local_8 = nullptr;
    do {
      if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01'))
      {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0x19);
    if ((param_1[0x19] != '\x06') && (param_1[0x19] != '\x03')) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x6;
    if (6 < param_2) {
      local_8 = (AiFltClassTy *)0x1e;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    iVar12 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar12 != 1) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0xffffffff;
    uVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    pAVar24 = (AiFltClassTy *)thunk_FUN_0066ac80((char)local_50[0],uVar11);
    pAVar15 = local_50[0];
    pcVar27 = local_c;
    if (pAVar24 != nullptr) {
      sVar5 = sVar4 + 0x37;
      sVar7 = (*this_00->vtable->slot_00)();
      sVar6 = sVar4 + 0x32;
      sVar9 = (*this_00->vtable->slot_00)();
      sVar4 = sVar4 + 0x2d;
      sVar10 = (*this_00->vtable->slot_00)();
      pbVar18 = (byte *)(param_1 + 0x28);
      cVar3 = (*this_00->vtable->slot_00)();
      pcVar27 = param_1 + 0x23;
      uVar22 = (*this_00->vtable->slot_00)();
      uVar22 = (*this_00->vtable->slot_00)(param_1 + 0x1e,uVar22);
      uVar22 = (*this_00->vtable->slot_08)(param_1 + 0x19,uVar22);
      uVar22 = (*this_00->vtable->slot_00)(param_1 + 0x14,uVar22);
      uVar22 = (*this_00->vtable->slot_00)(param_1 + 0xf,uVar22);
      uVar31 = (*this_00->vtable->slot_00)(param_1 + 10,uVar22);
      pcVar27 = (char *)thunk_FUN_0065dd30(pAVar24,(int)((ulonglong)uVar31 >> 0x20),(uint)uVar31,
                                           (uint)pcVar27,cVar3,pbVar18,sVar10,sVar4,sVar9,sVar6,
                                           sVar7,sVar5);
      pAVar15 = local_50[0];
      local_c = pcVar27;
    }
    goto joined_r0x006703e6;
  case 0x82f:
    local_8 = nullptr;
    do {
      if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01'))
      {
        pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar27 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0x23);
    if ((param_1[0x23] != '\x06') && (param_1[0x23] != '\x03')) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    iVar12 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar12 != 1) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_8 = nullptr;
    puVar23 = (uint *)(*this_00->vtable->slot_00)(param_1 + 0xf,local_280);
    pcVar27 = param_1 + 10;
    pcVar25 = (char *)(*this_00->vtable->slot_00)();
    iVar12 = sub_00668F50(this_00,pcVar25,(uint)pcVar27,puVar23);
    if (0 < iVar12) {
      puVar19 = (byte *)(local_280);
      do {
        uVar22 = *puVar19;
        puVar19 = (byte *)(puVar19 + 1);
        iVar12 = iVar12 + -1;
        local_8 = (AiFltClassTy *)((uint)local_8 | 1 << ((byte)uVar22 & 0x1f));
      } while (iVar12 != 0);
    }
    local_c = (char *)0xffffffff;
    uVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    iVar12 = thunk_FUN_0066ac80((char)local_50[0],uVar11);
    pcVar27 = local_c;
    if (iVar12 != 0) {
      pbVar18 = (byte *)(param_1 + 0x23);
      cVar3 = (*this_00->vtable->slot_08)();
      pcVar27 = param_1 + 0x1e;
      uVar22 = (*this_00->vtable->slot_00)();
      uVar22 = (*this_00->vtable->slot_00)(param_1 + 0x19,uVar22);
      uVar31 = (*this_00->vtable->slot_00)(param_1 + 0x14,uVar22);
      pcVar27 = (char *)thunk_FUN_0065e070(iVar12,(int)((ulonglong)uVar31 >> 0x20),(uint)local_8,
                                           (uint)uVar31,(uint)pcVar27,cVar3,pbVar18);
      local_c = pcVar27;
    }
LAB_0066fbc1:
    if ((int)pcVar27 < 0) {
      Library::MSVCRT::_strncpy(&this_00->field_0x4,&DAT_008016a0,0x7f);
      *(AiFltClassTy **)&this_00->field_0x84 = local_50[0];
      goto LAB_0067041b;
    }
    goto cf_common_exit_00670425;
  case 0x830:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = local_c + 1;
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    iVar12 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar12 != 1) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    uVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    local_8 = (AiFltClassTy *)thunk_FUN_0066ac80((char)local_50[0],uVar11);
    pAVar15 = local_50[0];
    pcVar27 = (char *)0xffffffff;
    if (local_8 != nullptr) {
      memset(&local_21c, 0, 0x4a); /* compiler bulk-zero initialization */
      iVar12 = 0;
      local_21c = (*this_00->vtable->slot_00)(param_1 + 10);
      memset(local_1d0, 0, 0x34); /* compiler bulk-zero initialization */
      iVar12 = 0;
      local_1c6 = &local_21c;
      local_218 = 0xffff;
      local_214 = 0xfffffff0;
      local_210 = 0xffff;
      local_1de = 1;
      local_1d0[0] = 0x68;
      AiFltClassTy::GetAiMess(local_8,local_1d0);
      pAVar15 = local_50[0];
      pcVar27 = (char *)(uint)('\0' < local_1c8);
    }
    goto joined_r0x006703e6;
  case 0x831:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    iVar12 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar12 != 1) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0xffffffff;
    uVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    pAVar26 = (AnonShape_0065E360_B94C37CB *)thunk_FUN_0066ac80((char)local_50[0],uVar11);
    pAVar15 = local_50[0];
    pcVar27 = local_c;
    if (pAVar26 != nullptr) {
      iVar12 = (*this_00->vtable->slot_00)(param_1 + 0x19);
      pcVar27 = param_1 + 0x14;
      uVar22 = (*this_00->vtable->slot_00)();
      uVar22 = (*this_00->vtable->slot_00)(param_1 + 0xf,uVar22);
      uVar31 = (*this_00->vtable->slot_00)(param_1 + 10,uVar22);
      pcVar27 = (char *)thunk_FUN_0065e450(pAVar26,(int)((ulonglong)uVar31 >> 0x20),
                                           (Global_sub_0065E450_param_3Enum)uVar31,(int)pcVar27,
                                           iVar12);
      pAVar15 = local_50[0];
      local_c = pcVar27;
    }
joined_r0x006703e6:
    if ((int)pcVar27 < 0) {
      Library::MSVCRT::_strncpy(&this_00->field_0x4,&DAT_008016a0,0x7f);
      *(AiFltClassTy **)&this_00->field_0x84 = pAVar15;
LAB_0067041b:
      RaiseInternalException(-0xaa,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
cf_common_exit_00670425:
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = (uint)pcVar27;
    break;
  case 0x848:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = local_c + 1;
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar12 = (*this_00->vtable->slot_18)(), iVar12 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    iVar12 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (iVar12 != 1) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    iVar12 = 0;
    local_10 = (char *)(uint)DAT_00808aaf;
    local_8 = nullptr;
    if (local_10 != nullptr) {
      local_c = &DAT_00808af5;
      do {
        if (((AiFltClassTy *)(uint)(byte)local_c[-1] == local_50[0]) && (*local_c != '\0')) {
          local_8 = (AiFltClassTy *)(&DAT_00808ab0 + iVar12 * 0x27);
          break;
        }
        iVar12 = iVar12 + 1;
        local_c = local_c + 0x9c;
      } while (iVar12 < (int)local_10);
    }
    pAVar15 = local_8;
    if (local_8 == nullptr) {
      pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar27 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      pAVar15 = local_8;
    }
LAB_0066d630:
    puVar23 = (uint *)FUN_006c49b0((char *)pAVar15);
    if (param_3 == nullptr) {
      g_currentExceptionFrame = local_260.previous;
      return puVar23;
    }
    *param_3 = 3;
    g_currentExceptionFrame = local_260.previous;
    return puVar23;
  case 0x849:
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = DAT_00808a90 >> 8 & 0xff;
    break;
  case 0x84a:
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = DAT_00808a90 & 0xff;
    break;
  case 0x84b:
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = (uint)DAT_00808a9b;
    break;
  case 0x84c:
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = DAT_00808a90 >> 0x10 & 0xff;
    break;
  case 0x84d:
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = DAT_00808a90 >> 0x18;
  }
cf_common_exit_00670431:
  if (param_3 == nullptr) {
    g_currentExceptionFrame = local_260.previous;
    return local_14;
  }
  *param_3 = 1;
  g_currentExceptionFrame = local_260.previous;
  return local_14;
}

