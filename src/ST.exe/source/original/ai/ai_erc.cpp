#include "st/generated.hpp"
// Generated translation unit: source/original/ai/ai_erc.cpp

// 0064A630 FUN_0064a630
#line 4 "decomp/ST.exe/functions/0064A630/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_erc.cpp
   Diagnostic line evidence: 23 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int * __cdecl st::fn_0064A630(int param_1)

{
  int exceptionCode;
  InternalExceptionFrame local_4c;
  int *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;

  exceptionCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (exceptionCode == 0) {
    /* ST_CALLSITE[0064A665]: CALL 0x006aac10; direct=006AAC10 Library::DKW::LIB::MemAllocClear; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
    local_8 = static_cast<int *>(st::fn_006AAC10(0x10));

    st::fn_00405295(local_8,param_1);
    g_currentExceptionFrame = local_4c.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_0040193D(reinterpret_cast<undefined4 *>(&local_8));
  st::fn_006A5E40(exceptionCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x17);
  return nullptr;
}

// 0064A6F0 FUN_0064a6f0
#line 4 "decomp/ST.exe/functions/0064A6F0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_erc.cpp
   Diagnostic line evidence: 37 | 42 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl st::fn_0064A6F0(int *param_1,int param_2)

{
  int exceptionCode;
  void *pvVar1;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  exceptionCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (exceptionCode == 0) {
    if (param_1 == nullptr) {
      st::fn_006A5E40
                (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x25);
    }
    st::fn_00402FA4(reinterpret_cast<undefined4 *>(param_1));
    if (param_2 < 1) {
      param_2 = 10;
    }
    *param_1 = param_2;
    pvVar1 = st::fn_006AAC10(param_2 * 5);
    param_1[2] = (int)pvVar1;
    g_currentExceptionFrame = local_48.previous;
    return 0;
  }
  g_currentExceptionFrame = local_48.previous;
  st::fn_006A5E40(exceptionCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x2a);
  return exceptionCode;
}

// 0064A830 FUN_0064a830
#line 4 "decomp/ST.exe/functions/0064A830/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_erc.cpp
   Diagnostic line evidence: 86 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl st::fn_0064A830(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint *puVar4;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar1 = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (iVar1 == 0) {
    if (*param_1 <= param_1[1]) {
      iVar2 = *param_1 + 10;
      *param_1 = iVar2;
      pvVar3 = st::fn_006ACF50((void *)param_1[2],iVar2 * 5);
      param_1[2] = (int)pvVar3;
    }
    puVar4 = (undefined4 *)(param_1[1] * 5 + param_1[2]);
    *puVar4 = *param_2;
    ((undefined1 *)puVar4)[1] = ((undefined1 *)param_2)[1];
    iVar2 = param_1[1];
    param_1[1] = iVar2 + 1;
    g_currentExceptionFrame = local_48.previous;
    return iVar2;
  }
  g_currentExceptionFrame = local_48.previous;
  st::fn_006A5E40(iVar1,0,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x56);
  if (iVar1 < 0) {
    return iVar1;
  }
  return -1;
}

// 0064A970 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::FUN_0064a970
#line 4 "decomp/ST.exe/functions/0064A970/decomp.c"
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_erc.cpp
   Diagnostic line evidence: 129 | 130 | 138 | 142 | 159 | 160 | 161 | 173 | 192 | 205 | 223 | 248 |
   284 | 294 | 305 | 313 | 323 | 338 | 346 | 356 | 369 | 386 | 399 | 402 | 413 | 416 | 428 | 443 |
   458 | 472 | 486 | 500 | 518 | 536 | 538 | 544 | 576 | 591 (metadata/report site, not the function
   definition)
   [STSourceProvenanceApplier end]

   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_0064A970.
   Evidence: incoming_receiver_captures=1; receiver_accesses=3; incoming_edx_uses=0; calls=2;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=4 */

float * __thiscall
st::fn_0064A970
          (RecoveredReceiver_0064A970 *this,char *param_1,int param_2,int *param_3)

{
  float float_local_28_1;
  float float_local_18_2;
  float float_local_18_3;
  float float_local_18_4;
  float float_local_c_5;
  float float_local_c_6;
  float float_local_c_7;
  float float_local_c_8;
  uint *puVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  RecoveredReceiver_0064A970 *this_00;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar12;
  char *local_EAX_1213;
  char *local_EAX_1546;
  char *pcVar8;
  byte *pbVar9;
  char *local_EAX_2068;
  char *local_EAX_2282;
  char *local_EAX_2633;
  char *local_EAX_3036;
  char *local_EAX_3240;
  char *local_EAX_3468;
  int iVar10;
  char *local_EAX_3714;
  char *local_EAX_3904;
  char *local_EAX_4136;
  char *local_EAX_4301;
  float fVar11;
  char *local_EAX_4782;
  char *local_EAX_4913;
  char *local_EAX_5067;
  char *local_EAX_5222;
  char *pcVar13_mg5;
  uint uVar12;
  char *pcVar13;
  char *local_EAX_5998;
  char *local_EAX_6215;
  char *local_EAX_6402;
  char *local_ECX_128;
  uint uVar14;
  uint uVar15;
  float *pfVar16;
  float *pfVar17;
  bool bVar18;
  float10 fVar19_mg9;
  float10 fVar19;
  longlong lVar20;
  InternalExceptionFrame local_c0;
  uint local_7c;
  char *local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  RecoveredReceiver_0064A970 *local_38;
  float local_34;
  int local_30;
  int local_2c;
  char *local_28;
  float local_24;
  float local_20;
  undefined4 *local_1c;
  byte *local_18;
  float local_14;
  char *local_10;
  int *local_c;
  float *local_8;

  local_8 = nullptr;
  local_1c = nullptr;
  local_c0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c0;
  local_38 = this;

  iVar5 = st::fn_0072D7F0(local_c0.jumpBuffer,0);
  this_00 = local_38;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_c0.previous;
    if (local_1c != nullptr) {
      st::fn_006AB060(&local_1c);
    }
    if (local_8 != nullptr) {
      st::fn_006AB060(&local_8);
    }
    if (0 < iVar5) {
      iVar5 = -0x6b;
    }
    if (param_3 != nullptr) {
      *param_3 = iVar5;
    }
    return nullptr;
  }
  st::fn_0072E340(&local_38->field_0004,&CHAR_00h_008016a0,0x7f);
  this_00->field_0084 = 0xffffffff;
  cVar3 = *param_1;
  local_ECX_128 = param_1;
  for (iVar6 = 0; (cVar3 != '\a' && (iVar6 < param_2)); iVar6 = iVar6 + 1) {
    cVar3 = local_ECX_128[5];
    local_ECX_128 = local_ECX_128 + 5;
  }
  if (iVar6 != param_2) {
    st::fn_006A5E40
              (-0x69,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x81);
  }
  local_10 = param_1 + param_2 * 5;
  if (*(short *)(param_1 + param_2 * 5 + 3) != param_2) {
    st::fn_006A5E40
              (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x82);
  }
  iVar6 = (int)*(short *)(local_10 + 1);
  if (iVar6 < 0x3e) {
    if (iVar6 == 0x3d) {
switchD_0064aa67_caseD_1:
      if (param_2 != 2) {
        st::fn_006A5E40
                  (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x8a);
      }
      sVar4 = *(short *)(local_10 + 1);
      if ((sVar4 == 1) && ((*param_1 == '\x06' || (*param_1 == '\x03')))) {
        if ((param_1[5] == '\x06') || (param_1[5] == '\x03')) {
          /* ST_CALLSITE[0064B09B]: CALL dword ptr [EDX + 0x8] */
          pcVar8 = (char *)this_00->slot_08();
          /* ST_CALLSITE[0064B0A5]: CALL dword ptr [EAX + 0x8] */
          pbVar9 = (byte *)this_00->slot_08(param_1 + 5);
          local_18 = pbVar9;
          if ((pcVar8 == nullptr) || (pbVar9 == nullptr)) {
            st::fn_006A5E40
                      (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x8e);
          }
          uVar14 = 0xffffffff;
          pbVar7 = pbVar9;
          do {
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            bVar2 = *pbVar7;
            pbVar7 = pbVar7 + 1;
          } while (bVar2 != 0);
          uVar15 = 0xffffffff;
          pcVar13 = pcVar8;
          do {
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            cVar3 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar3 != '\0');

          local_8 = static_cast<float *>(st::fn_006AAC10(~uVar14 + ~uVar15 + 2));
          if ((local_8 != nullptr) && (pcVar8 != nullptr)) {
            uVar14 = 0xffffffff;
            do {
              pcVar13 = pcVar8;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar13 = pcVar8 + 1;
              cVar3 = *pcVar8;
              pcVar8 = pcVar13;
            } while (cVar3 != '\0');
            uVar14 = ~uVar14;
            pfVar16 = reinterpret_cast<float *>((pcVar13 + -uVar14));
            pfVar17 = local_8;
            for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *pfVar17 = *pfVar16;
              pfVar16 = pfVar16 + 1;
              pfVar17 = pfVar17 + 1;
            }
            for (uVar14 = uVar14 & 3; pbVar9 = local_18, uVar14 != 0; uVar14 = uVar14 - 1) {
              *(undefined1 *)pfVar17 = *(undefined1 *)pfVar16;
              pfVar16 = (float *)((int)pfVar16 + 1);
              pfVar17 = (float *)((int)pfVar17 + 1);
            }
          }
          uVar14 = 0xffffffff;
          do {
            pbVar7 = pbVar9;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pbVar7 = pbVar9 + 1;
            bVar2 = *pbVar9;
            pbVar9 = pbVar7;
          } while (bVar2 != 0);
          uVar14 = ~uVar14;
          iVar6 = -1;
          pfVar16 = local_8;
          do {
            pfVar17 = pfVar16;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pfVar17 = (float *)((int)pfVar16 + 1);
            cVar3 = *(char *)pfVar16;
            pfVar16 = pfVar17;
          } while (cVar3 != '\0');
          pbVar9 = pbVar7 + -uVar14;
          pbVar7 = (byte *)((int)pfVar17 + -1);
          memmove(pbVar7, pbVar9, uVar14); /* compiler REP MOVS byte copy */
cf_common_exit_0064BBB1:
          if (param_3 == nullptr) {
            g_currentExceptionFrame = local_c0.previous;
            return local_8;
          }
          *param_3 = 3;
          g_currentExceptionFrame = local_c0.previous;
          return local_8;
        }
      }
      switch(*param_1) {
      case '\x01':
      case '\x04':
        cVar3 = param_1[5];
        if ((cVar3 == '\x04') || (cVar3 == '\x01')) {
          /* ST_CALLSITE[0064B2BE]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          iVar6 = this_00->vfunc_0(st::machine_word_boundary_cast<undefined4>(param_1));
          /* ST_CALLSITE[0064B2C7]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          iVar10 = this_00->vfunc_0(st::machine_word_boundary_cast<undefined4>(param_1 + 5));

          local_8 = static_cast<float *>(st::fn_006AAC10(4));
          switch(*(undefined2 *)(local_10 + 1)) {
          case 1:
            *local_8 = (float)(iVar10 + iVar6);
            break;
          default:
            param_1 = (char *)0xa1;
cf_error_exit_0064B35D:
            pcVar8 = st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp");
            iVar6 = g_overwriteContext_007ED77C;
            goto cf_error_exit_0064B368;
          case 0x16:
            if (iVar10 == 0) {
              st::fn_006A5E40
                        (-0x67,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x9f
                        );
            }
            *local_8 = (float)(iVar6 / iVar10);
            break;
          case 0x2c:
            if (iVar10 == 0) {
              st::fn_006A5E40
                        (-0x67,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0xa0
                        );
            }
            *local_8 = (float)(iVar6 % iVar10);
            break;
          case 0x30:
            *local_8 = (float)(iVar10 * iVar6);
            break;
          case 0x3d:
            *local_8 = (float)(iVar6 - iVar10);
          }
          goto cf_common_exit_0064B36F;
        }
        if ((cVar3 != '\x05') && (cVar3 != '\x02')) {
          local_EAX_2068 = st::fn_004057DB((int)sVar4);
          if (local_EAX_2068 != nullptr) {
            st::fn_0072E340(&this_00->field_0004,local_EAX_2068,0x7f);
            this_00->field_0084 = 0xffffffff;
            iVar6 = -0x76;
            goto cf_error_exit_0064C2A4;
          }
          goto cf_error_exit_0064B714;
        }
        /* ST_CALLSITE[0064B1C4]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
        local_18 = (byte *)this_00->vfunc_0(st::machine_word_boundary_cast<undefined4>(param_1));
        float_local_c_5 = (float)(int)local_18; /* split floating lifetime from pointer-typed SSA storage */
        /* ST_CALLSITE[0064B1D4]: CALL dword ptr [EDX + 0x4] */
        local_14 = this_00->slot_04(st::machine_word_boundary_cast<undefined4>(param_1 + 5));

        local_8 = static_cast<float *>(st::fn_006AAC10(4));
        switch((int)*(short *)(local_10 + 1)) {
        case 1:
          *local_8 = local_14 + float_local_c_5;
          break;
        default:
          local_EAX_2282 = st::fn_004057DB((int)*(short *)(local_10 + 1));
          goto joined_r0x0064b49a;
        case 0x16:
          if (local_14 == (float)_DAT_0079d670) {
            st::fn_006A5E40
                      (-0x67,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0xad);
          }
          *local_8 = st::storage_bit_cast<float>(local_c) / local_14;
          break;
        case 0x30:
          *local_8 = local_14 * st::storage_bit_cast<float>(local_c);
          break;
        case 0x3d:
          *local_8 = st::storage_bit_cast<float>(local_c) - local_14;
        }
        break;
      case '\x02':
      case '\x05':
        cVar3 = param_1[5];
        if ((cVar3 != '\x04') && (cVar3 != '\x01')) {
          if ((cVar3 != '\x05') && (cVar3 != '\x02')) {
            local_EAX_2633 = st::fn_004057DB((int)sVar4);
            if (local_EAX_2633 != nullptr) {
              st::fn_0072E340(&this_00->field_0004,local_EAX_2633,0x7f);
              this_00->field_0084 = 0xffffffff;
              iVar6 = -0x76;
              goto cf_error_exit_0064C2A4;
            }
            goto cf_error_exit_0064B714;
          }
          /* ST_CALLSITE[0064B3F9]: CALL dword ptr [EAX + 0x4] */
          float_local_c_6 = this_00->slot_04(st::machine_word_boundary_cast<undefined4>(param_1)); /* split floating lifetime from pointer-typed SSA storage */
          /* ST_CALLSITE[0064B404]: CALL dword ptr [EDX + 0x4] */
          local_14 = this_00->slot_04(st::machine_word_boundary_cast<undefined4>(param_1 + 5));

          local_8 = static_cast<float *>(st::fn_006AAC10(4));
          iVar6 = (int)*(short *)(local_10 + 1);
          switch(iVar6) {
          case 1:
            *local_8 = local_14 + float_local_c_6;
            break;
          default:
            goto switchD_0064b42d_caseD_2;
          case 0x16:
            if (local_14 == (float)_DAT_0079d670) {
              st::fn_006A5E40
                        (-0x67,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0xcd
                        );
            }
            *local_8 = st::storage_bit_cast<float>(local_c) / local_14;
            break;
          case 0x30:
            *local_8 = local_14 * st::storage_bit_cast<float>(local_c);
            break;
          case 0x3d:
            *local_8 = st::storage_bit_cast<float>(local_c) - local_14;
          }
          break;
        }
        /* ST_CALLSITE[0064B4AA]: CALL dword ptr [EDX + 0x4] */
        float_local_c_7 = this_00->slot_04(st::machine_word_boundary_cast<undefined4>(param_1)); /* split floating lifetime from pointer-typed SSA storage */
        /* ST_CALLSITE[0064B4B5]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
        local_18 = (byte *)this_00->vfunc_0(st::machine_word_boundary_cast<undefined4>(param_1 + 5));
        local_14 = (float)(int)local_18;

        local_8 = static_cast<float *>(st::fn_006AAC10(4));
        iVar6 = (int)*(short *)(local_10 + 1);
        switch(iVar6) {
        case 1:
          *local_8 = local_14 + float_local_c_7;
          break;
        default:
switchD_0064b42d_caseD_2:
          local_EAX_2282 = st::fn_004057DB(iVar6);
joined_r0x0064b49a:
          if (local_EAX_2282 != nullptr) {
            st::fn_0072E340(&this_00->field_0004,local_EAX_2282,0x7f);
          }
          this_00->field_0084 = 0xffffffff;
          st::fn_006A5E40(-0x76,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          break;
        case 0x16:
          if (local_14 == (float)_DAT_0079d670) {
            st::fn_006A5E40
                      (-0x67,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0xc0);
          }
          *local_8 = st::storage_bit_cast<float>(local_c) / local_14;
          break;
        case 0x30:
          *local_8 = local_14 * st::storage_bit_cast<float>(local_c);
          break;
        case 0x3d:
          *local_8 = st::storage_bit_cast<float>(local_c) - local_14;
        }
        break;
      default:
        local_EAX_3036 = st::fn_004057DB((int)sVar4);
        if (local_EAX_3036 != nullptr) {
          st::fn_0072E340(&this_00->field_0004,local_EAX_3036,0x7f);
          this_00->field_0084 = 0xffffffff;
          iVar6 = -0x76;
          goto cf_error_exit_0064C2A4;
        }
        goto LAB_0064b80a;
      }
cf_common_exit_0064B291:
      if (param_3 == nullptr) {
        g_currentExceptionFrame = local_c0.previous;
        return local_8;
      }
      *param_3 = 2;
      g_currentExceptionFrame = local_c0.previous;
      return local_8;
    }
    switch(iVar6) {
    case 1:
    case 0x16:
    case 0x2c:
    case 0x30:
      goto switchD_0064aa67_caseD_1;
    default:
      goto cf_common_exit_0064C271;
    case 3:
    case 0x34:
switchD_0064aa67_caseD_3:
      if (param_2 != 2) {
        st::fn_006A5E40
                  (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x131);
      }
      if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
        if ((param_1[5] == '\x04') || (param_1[5] == '\x01')) {
          /* ST_CALLSITE[0064B738]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          iVar6 = this_00->vfunc_0(st::machine_word_boundary_cast<undefined4>(param_1));
          /* ST_CALLSITE[0064B741]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          iVar10 = this_00->vfunc_0(st::machine_word_boundary_cast<undefined4>(param_1 + 5));

          local_8 = static_cast<float *>(st::fn_006AAC10(4));
          sVar4 = *(short *)(local_10 + 1);
          if (sVar4 == 3) {
            if ((iVar6 != 0) && (iVar10 != 0)) {
              *local_8 = 1.4013e-45;
              goto cf_common_exit_0064B36F;
            }
          }
          else {
            if (sVar4 == 0x34) {
              if (iVar6 == 0) {
joined_r0x0064b79d:
                if (iVar10 == 0) goto cf_common_exit_0064B79F;
              }
LAB_0064b78b:
              *local_8 = 1.4013e-45;
              goto cf_common_exit_0064B36F;
            }
            if (sVar4 != 0x43) {
              param_1 = (char *)0x139;
              pcVar8 = st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp");
              iVar6 = g_overwriteContext_007ED77C;
              goto cf_error_exit_0064B368;
            }
            if (iVar6 == 0) goto joined_r0x0064b79d;
            if (iVar10 == 0) goto LAB_0064b78b;
          }
          goto cf_common_exit_0064B79F;
        }
      }
      local_EAX_3468 = st::fn_004057DB((int)*(short *)(local_10 + 1));
      if (local_EAX_3468 != nullptr) {
        st::fn_0072E340(&this_00->field_0004,local_EAX_3468,0x7f);
      }
cf_error_exit_0064B714:
      this_00->field_0084 = 0xffffffff;
      iVar6 = -0x76;
      goto cf_error_exit_0064C2A4;
    case 8:
    case 10:
    case 0xb:
      if (param_2 != 2) {
        st::fn_006A5E40
                  (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x152);
      }
      if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
LAB_0064ae25:
        local_EAX_1213 = st::fn_004057DB((int)*(short *)(local_10 + 1));
        if (local_EAX_1213 != nullptr) {
          st::fn_0072E340(&this_00->field_0004,local_EAX_1213,0x7f);
        }
        this_00->field_0084 = 0xffffffff;
        iVar6 = -0x76;
        goto cf_error_exit_0064C2A4;
      }
      if ((param_1[5] != '\x04') && (param_1[5] != '\x01')) goto LAB_0064ae25;
      /* ST_CALLSITE[0064AE69]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar14 = this_00->vfunc_0(st::machine_word_boundary_cast<undefined4>(param_1));
      /* ST_CALLSITE[0064AE72]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar15 = this_00->vfunc_0(st::machine_word_boundary_cast<undefined4>(param_1 + 5));

      local_8 = static_cast<float *>(st::fn_006AAC10(4));
      sVar4 = *(short *)(local_10 + 1);
      if (sVar4 == 8) {
        *local_8 = (float)(uVar15 & uVar14);
        goto cf_common_exit_0064B36F;
      }
      if (sVar4 == 10) {
        *local_8 = (float)(uVar15 | uVar14);
        goto cf_common_exit_0064B36F;
      }
      if (sVar4 == 0xb) {
        *local_8 = (float)(uVar15 ^ uVar14);
        goto cf_common_exit_0064B36F;
      }
      pcVar8 = st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp");
      param_1 = (char *)0x15a;
      iVar6 = g_overwriteContext_007ED77C;
cf_error_exit_0064B368:
      st::fn_006A5E40(-0x6b,iVar6,pcVar8,st::machine_word_boundary_cast<int>(param_1));
      goto cf_common_exit_0064B36F;
    case 9:
      if (param_2 != 1) {
        st::fn_006A5E40
                  (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x164);
      }
      if ((*param_1 == '\x04') || (*param_1 == '\x01')) {

        local_8 = static_cast<float *>(st::fn_006AAC10(4));
        /* ST_CALLSITE[0064AEFE]: CALL dword ptr [EDX] */
        uVar14 = this_00->slot_00();
        *local_8 = (float)~uVar14;
        goto cf_common_exit_0064B36F;
      }
cf_common_exit_0064B7EA:
      local_EAX_3714 = st::fn_004057DB((int)*(short *)(local_10 + 1));
      if (local_EAX_3714 != nullptr) {
        st::fn_0072E340(&this_00->field_0004,local_EAX_3714,0x7f);
      }
      break;
    case 0x13:
      if (param_2 != 3) {
        st::fn_006A5E40
                  (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x171);
      }
      if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
        /* ST_CALLSITE[0064AF38]: CALL dword ptr [EAX] */
        iVar6 = this_00->slot_00();
        iVar6 = 2 - (uint)(iVar6 != 0);
        pcVar8 = param_1 + iVar6 * 5;
        cVar3 = param_1[iVar6 * 5];
        if ((cVar3 == '\x04') || (cVar3 == '\x01')) {

          local_8 = static_cast<float *>(st::fn_006AAC10(4));
          /* ST_CALLSITE[0064B03C]: CALL dword ptr [EDX] */
          fVar11 = (float)this_00->vfunc_0(st::machine_word_boundary_cast<undefined4>(pcVar8));
          *local_8 = fVar11;
          goto cf_common_exit_0064B36F;
        }
        if ((cVar3 == '\x05') || (cVar3 == '\x02')) {

          local_8 = static_cast<float *>(st::fn_006AAC10(4));
          /* ST_CALLSITE[0064B020]: CALL dword ptr [EDX + 0x4] */
          *local_8 = this_00->slot_04(st::machine_word_boundary_cast<undefined4>(pcVar8));
          goto cf_common_exit_0064B291;
        }
        if ((cVar3 == '\x06') || (cVar3 == '\x03')) {
          /* ST_CALLSITE[0064AFB6]: CALL dword ptr [EDX + 0x8] */
          pcVar8 = (char *)this_00->slot_08(pcVar8);
          if (pcVar8 == nullptr) {
            st::fn_006A5E40
                      (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x182);
          }
          uVar14 = 0xffffffff;
          pcVar13 = pcVar8;
          do {
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            cVar3 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar3 != '\0');

          local_8 = static_cast<float *>(st::fn_006AAC10(~uVar14 + 1));
          uVar14 = 0xffffffff;
          do {
            pcVar13 = pcVar8;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar13 = pcVar8 + 1;
            cVar3 = *pcVar8;
            pcVar8 = pcVar13;
          } while (cVar3 != '\0');
          uVar14 = ~uVar14;
          pfVar16 = reinterpret_cast<float *>((pcVar13 + -uVar14));
          pfVar17 = local_8;
          memmove(pfVar17, pfVar16, uVar14); /* compiler REP MOVS byte copy */
          goto cf_common_exit_0064BBB1;
        }
      }
      local_EAX_1546 = st::fn_004057DB((int)*(short *)(local_10 + 1));
      if (local_EAX_1546 != nullptr) {
        st::fn_0072E340(&this_00->field_0004,local_EAX_1546,0x7f);
      }
      this_00->field_0084 = 0xffffffff;
      iVar6 = -0x76;
      goto cf_error_exit_0064C2A4;
    case 0x1e:
    case 0x27:
    case 0x28:
    case 0x2e:
    case 0x2f:
    case 0x33:
      if (param_2 != 2) {
        st::fn_006A5E40
                  (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0xf8);
      }
      cVar3 = *param_1;
      if ((cVar3 != '\x04') && (cVar3 != '\x01')) {
LAB_0064aaac:
        if ((cVar3 == '\x05') || (cVar3 == '\x02')) {
          if ((param_1[5] == '\x05') || (param_1[5] == '\x02')) {
            /* ST_CALLSITE[0064ABE6]: CALL dword ptr [EDX + 0x4] */
            local_20 = this_00->slot_04(st::machine_word_boundary_cast<undefined4>(param_1));
            /* ST_CALLSITE[0064ABF1]: CALL dword ptr [EAX + 0x4] */
            local_24 = this_00->slot_04(st::machine_word_boundary_cast<undefined4>(param_1 + 5));

            local_8 = static_cast<float *>(st::fn_006AAC10(4));
            switch(*(undefined2 *)(local_10 + 1)) {
            case 0x1e:
              if (local_20 == local_24) {
                *local_8 = 1.4013e-45;
                goto cf_common_exit_0064B36F;
              }
              break;
            default:
              param_1 = (char *)0x114;
              goto cf_error_exit_0064B35D;
            case 0x27:
              if (local_20 < local_24) {
                *local_8 = 1.4013e-45;
                goto cf_common_exit_0064B36F;
              }
              break;
            case 0x28:
              if (local_20 <= local_24) {
                *local_8 = 1.4013e-45;
                goto cf_common_exit_0064B36F;
              }
              break;
            case 0x2e:
              if (local_24 < local_20) {
                *local_8 = 1.4013e-45;
                goto cf_common_exit_0064B36F;
              }
              break;
            case 0x2f:
              if (local_24 <= local_20) {
                *local_8 = 1.4013e-45;
                goto cf_common_exit_0064B36F;
              }
              break;
            case 0x33:
              if (local_20 != local_24) {
                *local_8 = 1.4013e-45;
                goto cf_common_exit_0064B36F;
              }
            }
            *local_8 = 0.0;
            goto cf_common_exit_0064B36F;
          }
        }
        if ((cVar3 == '\x06') || (cVar3 == '\x03')) {
          pcVar8 = param_1 + 5;
          if ((param_1[5] == '\x06') || (param_1[5] == '\x03')) {
            /* ST_CALLSITE[0064AAEF]: CALL dword ptr [EDX + 0x8] */
            pbVar9 = (byte *)this_00->slot_08();
            /* ST_CALLSITE[0064AAF9]: CALL dword ptr [EAX + 0x8] */
            pbVar7 = (byte *)this_00->slot_08();
            if ((pbVar9 == nullptr) || (pbVar7 == nullptr)) {
              st::fn_006A5E40
                        (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),
                         0x11c);
            }

            local_8 = static_cast<float *>(st::fn_006AAC10(4));
            do {
              bVar2 = *pbVar9;
              bVar18 = bVar2 < *pbVar7;
              if (bVar2 != *pbVar7) {
LAB_0064ab54:
                iVar6 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
                goto LAB_0064ab59;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar9[1];
              bVar18 = bVar2 < pbVar7[1];
              if (bVar2 != pbVar7[1]) goto LAB_0064ab54;
              pbVar9 = pbVar9 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar2 != 0);
            iVar6 = 0;
LAB_0064ab59:
            switch(*(undefined2 *)(local_10 + 1)) {
            case 0x1e:
              *local_8 = (float)(uint)(iVar6 == 0);
              break;
            default:
              iVar6 = 0x126;
              goto cf_error_exit_0064B368;
            case 0x27:
              *local_8 = (float)(uint)(iVar6 < 0);
              break;
            case 0x28:
              *local_8 = (float)(uint)(iVar6 < 1);
              break;
            case 0x2e:
              *local_8 = (float)(uint)(0 < iVar6);
              break;
            case 0x2f:
              *local_8 = (float)(uint)(-1 < iVar6);
              break;
            case 0x33:
              *local_8 = (float)(uint)(iVar6 != 0);
            }
            goto cf_common_exit_0064B36F;
          }
        }
        goto cf_common_exit_0064B7EA;
      }
      if ((param_1[5] != '\x04') && (param_1[5] != '\x01')) goto LAB_0064aaac;
      /* ST_CALLSITE[0064ACD7]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      iVar6 = this_00->vfunc_0(st::machine_word_boundary_cast<undefined4>(param_1));
      /* ST_CALLSITE[0064ACE0]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      iVar10 = this_00->vfunc_0(st::machine_word_boundary_cast<undefined4>(param_1 + 5));

      local_8 = static_cast<float *>(st::fn_006AAC10(4));
      switch(*(undefined2 *)(local_10 + 1)) {
      case 0x1e:
        *local_8 = (float)(uint)(iVar6 == iVar10);
        break;
      default:
        param_1 = (char *)0x104;
        goto cf_error_exit_0064B35D;
      case 0x27:
        *local_8 = (float)(uint)(iVar6 < iVar10);
        break;
      case 0x28:
        *local_8 = (float)(uint)(iVar6 <= iVar10);
        break;
      case 0x2e:
        *local_8 = (float)(uint)(iVar10 < iVar6);
        break;
      case 0x2f:
        *local_8 = (float)(uint)(iVar10 <= iVar6);
        break;
      case 0x33:
        *local_8 = (float)(uint)(iVar6 != iVar10);
      }
      goto cf_common_exit_0064B36F;
    case 0x32:
      if (param_2 != 1) {
        st::fn_006A5E40
                  (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x143);
      }
      if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
        pcVar12 = st::fn_004057DB((int)*(short *)(local_10 + 1));
        if (pcVar12 != nullptr) {
          st::fn_0072E340(&this_00->field_0004,pcVar12,0x7f);
        }
        this_00->field_0084 = 0xffffffff;
        iVar6 = -0x76;
        goto cf_error_exit_0064C2A4;
      }

      local_8 = static_cast<float *>(st::fn_006AAC10(4));
      /* ST_CALLSITE[0064ADDF]: CALL dword ptr [EDX] */
      iVar6 = this_00->slot_00();
      *local_8 = (float)(uint)(iVar6 == 0);
      goto cf_common_exit_0064B36F;
    }
LAB_0064b80a:
    this_00->field_0084 = 0xffffffff;
    iVar6 = -0x76;
    goto cf_error_exit_0064C2A4;
  }
  if (iVar6 < 0x38a) {
    if (iVar6 != 0x389) {
      if (0x385 < iVar6) {
        if (iVar6 == 0x386) {
          if (param_2 != 1) {
            st::fn_006A5E40
                      (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),399);
          }
          if ((*param_1 == '\x06') || (*param_1 == '\x03')) {
            /* ST_CALLSITE[0064BAF0]: CALL dword ptr [EDX + 0x8] */
            pbVar9 = (byte *)this_00->slot_08();
            if (pbVar9 == nullptr) {
              st::fn_006A5E40
                        (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),
                         0x192);
            }

            local_8 = static_cast<float *>(st::fn_006AAC10(4));
            fVar11 = (float)st::fn_0072FF00(pbVar9);
            *local_8 = fVar11;
            goto cf_common_exit_0064B36F;
          }
        }
        else {
          if (iVar6 == 0x387) {
            if (param_2 != 1) {
              st::fn_006A5E40
                        (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),
                         0x19d);
            }
            if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
              local_EAX_4301 = st::fn_004057DB((int)*(short *)(local_10 + 1));
              if (local_EAX_4301 != nullptr) {
                st::fn_0072E340(&this_00->field_0004,local_EAX_4301,0x7f);
              }
              this_00->field_0084 = 0xffffffff;
              iVar6 = -0x78;
              goto cf_error_exit_0064C2A4;
            }
            /* ST_CALLSITE[0064BA79]: CALL dword ptr [EDX + 0x8] */
            pbVar9 = (byte *)this_00->slot_08();
            if (pbVar9 == nullptr) {
              st::fn_006A5E40
                        (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),
                         0x1a0);
            }
            local_18 = nullptr;

            local_8 = static_cast<float *>(st::fn_006AAC10(4));
            fVar19 = st::fn_00730310(pbVar9,reinterpret_cast<int *>(&local_18));
            *local_8 = (float)fVar19;
            goto cf_common_exit_0064B291;
          }
          if (iVar6 != 0x388) goto cf_common_exit_0064C271;
          if (param_2 != 2) {
            st::fn_006A5E40
                      (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x1ac);
          }
          if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
            if ((param_1[5] == '\x04') || (param_1[5] == '\x01')) {
              /* ST_CALLSITE[0064B9D3]: CALL dword ptr [EDX] */
              iVar6 = this_00->slot_00();
              /* ST_CALLSITE[0064B9DC]: CALL dword ptr [EAX] */
              iVar10 = this_00->vfunc_0(st::machine_word_boundary_cast<undefined4>(param_1 + 5));
              if (iVar10 < 2) {
                iVar10 = 2;
              }
              if (0x24 < iVar10) {
                iVar10 = 0x24;
              }
              /* ST_CALLSITE[0064B9F6]: CALL 0x006aac10; direct=006AAC10 Library::DKW::LIB::MemAllocClear; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/char; source view only; no Ghidra override */
              local_8 = static_cast<float *>(st::fn_006AAC10(0x40));
              st::fn_0072DE60(iVar6,reinterpret_cast<char *>(local_8),iVar10);
              goto cf_common_exit_0064BBB1;
            }
          }
        }
        local_EAX_4136 = st::fn_004057DB((int)*(short *)(local_10 + 1));
        if (local_EAX_4136 != nullptr) {
          st::fn_0072E340(&this_00->field_0004,local_EAX_4136,0x7f);
        }
        this_00->field_0084 = 0xffffffff;
        iVar6 = -0x78;
        goto cf_error_exit_0064C2A4;
      }
      if (iVar6 == 0x385) {
        if (param_2 < 1) {
          st::fn_006A5E40
                    (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x206);
        }
        local_28 = nullptr;
        iVar6 = param_2;
        if (0 < param_2) {
          do {
            cVar3 = *param_1;
            local_c = nullptr;
            if (cVar3 == '\x04') {
LAB_0064b8f1:
              /* ST_CALLSITE[0064B8F6]: CALL dword ptr [EAX] */
              local_18 = (byte *)this_00->slot_00();
              float_local_c_8 = (float)(int)local_18; /* split floating lifetime from pointer-typed SSA storage */
LAB_0064b901:
              if ((*param_1 == '\x05') || (*param_1 == '\x02')) {
                /* ST_CALLSITE[0064B910]: CALL dword ptr [EDX + 0x4] */
                float_local_c_8 = this_00->slot_04(st::machine_word_boundary_cast<undefined4>(param_1)); /* split floating lifetime from pointer-typed SSA storage */
              }
            }
            else {
              if (((cVar3 == '\x01') || (cVar3 == '\x05')) || (cVar3 == '\x02')) {
                if ((cVar3 == '\x04') || (cVar3 == '\x01')) goto LAB_0064b8f1;
                goto LAB_0064b901;
              }
              local_EAX_3904 = st::fn_004057DB((int)*(short *)(local_10 + 1));
              if (local_EAX_3904 != nullptr) {
                st::fn_0072E340(&this_00->field_0004,local_EAX_3904,0x7f);
              }
              this_00->field_0084 = 0xffffffff;
              st::fn_006A5E40
                        (-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
            }
            float_local_28_1 = (st::storage_bit_cast<float>(local_c) + st::storage_bit_cast<float>(local_28)); /* split floating lifetime from pointer-typed SSA storage */
            param_1 = param_1 + 5;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }

        local_8 = static_cast<float *>(st::fn_006AAC10(4));
        *local_8 = float_local_28_1 / (float)param_2;
        goto cf_common_exit_0064B291;
      }
      if (iVar6 == 0x41) {
        if (param_2 != 1) {
          st::fn_006A5E40
                    (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0xdf);
        }
        cVar3 = *param_1;
        if ((cVar3 == '\x04') || (cVar3 == '\x01')) {

          local_8 = static_cast<float *>(st::fn_006AAC10(4));
          /* ST_CALLSITE[0064B855]: CALL dword ptr [EDX] */
          iVar6 = this_00->slot_00();
          *local_8 = (float)-iVar6;
          goto cf_common_exit_0064B36F;
        }
        if ((cVar3 == '\x05') || (cVar3 == '\x02')) {

          local_8 = static_cast<float *>(st::fn_006AAC10(4));
          /* ST_CALLSITE[0064B837]: CALL dword ptr [EDX + 0x4] */
          this_00->slot_04(st::machine_word_boundary_cast<undefined4>(param_1));
          *local_8 = (float)-fVar19_mg9;
          goto cf_common_exit_0064B36F;
        }
        goto cf_common_exit_0064B7EA;
      }
      if (iVar6 == 0x43) goto switchD_0064aa67_caseD_3;
      if (iVar6 == 900) {
        if (param_2 < 1) {
          st::fn_006A5E40
                    (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),500);
        }
        local_28 = nullptr;
        if (0 < param_2) {
          local_14 = (float)param_2;
          do {
            cVar3 = *param_1;
            local_c = nullptr;
            if (cVar3 == '\x04') {
LAB_0064b659:
              /* ST_CALLSITE[0064B65E]: CALL dword ptr [EDX] */
              local_c = (int *)this_00->slot_00();
LAB_0064b663:
              if ((*param_1 == '\x05') || (*param_1 == '\x02')) {
                /* ST_CALLSITE[0064B672]: CALL dword ptr [EAX + 0x4] */
                float x87_result_0064B672 = this_00->slot_04(st::machine_word_boundary_cast<undefined4>(param_1));
                st::fn_00730450
                          (SUB84((double)x87_result_0064B672,0),
                           (uint)((ulonglong)(double)x87_result_0064B672 >> 0x20));
                lVar20 = st::fn_0072E288();
                local_c = (int *)lVar20;
              }
            }
            else {
              if (((cVar3 == '\x01') || (cVar3 == '\x05')) || (cVar3 == '\x02')) {
                if ((cVar3 == '\x04') || (cVar3 == '\x01')) goto LAB_0064b659;
                goto LAB_0064b663;
              }
              local_EAX_3240 = st::fn_004057DB((int)*(short *)(local_10 + 1));
              if (local_EAX_3240 != nullptr) {
                st::fn_0072E340(&this_00->field_0004,local_EAX_3240,0x7f);
              }
              this_00->field_0084 = 0xffffffff;
              st::fn_006A5E40
                        (-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
            }
            local_28 = local_28 + (int)local_c;
            param_1 = param_1 + 5;
            local_14 = (float)((int)local_14 + -1);
          } while (local_14 != 0.0);
        }

        local_8 = static_cast<float *>(st::fn_006AAC10(4));
        *local_8 = (float)((int)local_28 / param_2);
        goto cf_common_exit_0064B36F;
      }
      goto cf_common_exit_0064C271;
    }
    if (param_2 != 2) {
      st::fn_006A5E40
                (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x1bb);
    }
    if (((*param_1 == '\x05') || (*param_1 == '\x02')) &&
       ((param_1[5] == '\x04' || (param_1[5] == '\x01')))) {
      /* ST_CALLSITE[0064BB6F]: CALL dword ptr [EAX + 0x4] */
      float_local_18_2 = this_00->slot_04(st::machine_word_boundary_cast<undefined4>(param_1)); /* split floating lifetime from pointer-typed SSA storage */
      /* ST_CALLSITE[0064BB7A]: CALL dword ptr [EDX] */
      iVar6 = this_00->slot_00();
      if (iVar6 < 2) {
        iVar6 = 2;
      }
      if (0x40 < iVar6) {
        iVar6 = 0x40;
      }

      local_8 = static_cast<float *>(st::fn_006AAC10(iVar6 + 10));
      st::fn_007301E0
                (SUB84((double)float_local_18_2,0),(int)((ulonglong)(double)float_local_18_2 >> 0x20),
                 iVar6,reinterpret_cast<char *>(local_8));
      goto cf_common_exit_0064BBB1;
    }
LAB_0064bd33:
    local_EAX_5067 = st::fn_004057DB((int)*(short *)(local_10 + 1));
    if (local_EAX_5067 != nullptr) {
      st::fn_0072E340(&this_00->field_0004,local_EAX_5067,0x7f);
    }
    this_00->field_0084 = 0xffffffff;
    iVar6 = -0x78;
    goto cf_error_exit_0064C2A4;
  }
  switch(iVar6) {
  case 0x38a:
    if (param_2 != 1) {
      st::fn_006A5E40
                (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x1ca);
    }
    if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
      /* ST_CALLSITE[0064BC5A]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      local_18 = (byte *)this_00->vfunc_0(st::machine_word_boundary_cast<undefined4>(param_1));

      local_8 = static_cast<float *>(st::fn_006AAC10(4));
      *local_8 = (float)(int)local_18;
      goto cf_common_exit_0064B291;
    }
    local_EAX_4782 = st::fn_004057DB((int)*(short *)(local_10 + 1));
    if (local_EAX_4782 != nullptr) {
      st::fn_0072E340(&this_00->field_0004,local_EAX_4782,0x7f);
    }
    this_00->field_0084 = 0xffffffff;
    iVar6 = -0x78;
    break;
  case 0x38b:
    if (param_2 != 1) {
      st::fn_006A5E40
                (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x1d8);
    }
    if ((*param_1 == '\x05') || (*param_1 == '\x02')) {
      /* ST_CALLSITE[0064BCDC]: CALL dword ptr [EDX + 0x4] */
      float_local_18_3 = this_00->slot_04(st::machine_word_boundary_cast<undefined4>(param_1)); /* split floating lifetime from pointer-typed SSA storage */

      local_8 = static_cast<float *>(st::fn_006AAC10(4));
      st::fn_0072E150
                (SUB84((double)float_local_18_3,0),(uint)((ulonglong)(double)float_local_18_3 >> 0x20)
                );
      lVar20 = st::fn_0072E288();
      *local_8 = (float)lVar20;
      goto cf_common_exit_0064B36F;
    }
    local_EAX_4913 = st::fn_004057DB((int)*(short *)(local_10 + 1));
    if (local_EAX_4913 != nullptr) {
      st::fn_0072E340(&this_00->field_0004,local_EAX_4913,0x7f);
    }
    this_00->field_0084 = 0xffffffff;
    iVar6 = -0x78;
    break;
  case 0x38c:
    if (param_2 != 1) {
      st::fn_006A5E40
                (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x1e6);
    }
    if ((*param_1 == '\x05') || (*param_1 == '\x02')) {
      /* ST_CALLSITE[0064BD77]: CALL dword ptr [EAX + 0x4] */
      float_local_18_4 = this_00->slot_04(st::machine_word_boundary_cast<undefined4>(param_1)); /* split floating lifetime from pointer-typed SSA storage */

      local_8 = static_cast<float *>(st::fn_006AAC10(4));
      st::fn_00730450
                (SUB84((double)float_local_18_4,0),(uint)((ulonglong)(double)float_local_18_4 >> 0x20)
                );
      lVar20 = st::fn_0072E288();
      *local_8 = (float)lVar20;
      goto cf_common_exit_0064B36F;
    }
    goto LAB_0064bd33;
  case 0x38d:
    if (param_2 < 2) {
      st::fn_006A5E40
                (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x218);
    }
    if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
      local_EAX_5222 = st::fn_004057DB((int)*(short *)(local_10 + 1));
      if (local_EAX_5222 != nullptr) {
        st::fn_0072E340(&this_00->field_0004,local_EAX_5222,0x7f);
      }
      this_00->field_0084 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    /* ST_CALLSITE[0064BE12]: CALL dword ptr [EAX + 0x8] */
    local_18 = (byte *)this_00->slot_08();
    if (local_18 == nullptr) {
      st::fn_006A5E40
                (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x21a);
    }
    uVar14 = 0xffffffff;
    pbVar9 = local_18;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      bVar2 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar2 != 0);
    local_20 = (float)(~uVar14 + 1);
    local_14 = 0.0;
    local_28 = (char *)0x200;

    local_1c = (undefined4 *)st::fn_006AAC70(0x200);
    if (1 < param_2) {
      local_c = reinterpret_cast<int *>((param_1 + 5));
      local_30 = param_2 + -1;
      local_2c = 4;
      local_24 = 1.12104e-44;
      pcVar8 = local_28;
      do {
        cVar3 = (char)*local_c;
        if ((cVar3 == '\x06') || (cVar3 == '\x03')) {
          /* ST_CALLSITE[0064BFBF]: CALL dword ptr [EAX + 0x8] */
          pcVar13 = (char *)this_00->slot_08();
          local_78 = pcVar13;
          if (pcVar13 == nullptr) {
            st::fn_006A5E40
                      (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x220);
          }
          if ((int)pcVar8 <= local_2c) {
            local_28 = (char *)((int)pcVar8 + 0x200);

            local_1c = (undefined4 *)st::fn_006ACF50(local_1c,st::machine_word_boundary_cast<uint>(local_28));
          }
          puVar1 = (undefined4 *)((int)local_14 + (int)local_1c);
          local_14 = (float)((int)local_14 + 4);
          local_2c = local_2c + 4;
          local_24 = (float)((int)local_24 + 4);
          uVar14 = 0xffffffff;
          *puVar1 = st::machine_word_boundary_cast<uint>(pcVar13);
          do {
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            cVar3 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar3 != '\0');
          local_20 = (float)((int)local_20 + ~uVar14 + 1);
          pcVar8 = local_28;
        }
        else if ((cVar3 == '\x04') || (cVar3 == '\x01')) {
          /* ST_CALLSITE[0064BF60]: CALL dword ptr [EAX] */
          uVar12 = this_00->slot_00();
          local_7c = uVar12;
          if ((int)pcVar8 <= local_2c) {
            pcVar8 = (char *)((int)pcVar8 + 0x200);
            local_28 = pcVar8;

            local_1c = (undefined4 *)st::fn_006ACF50(local_1c,st::machine_word_boundary_cast<uint>(pcVar8));
          }
          puVar1 = (undefined4 *)((int)local_14 + (int)local_1c);
          local_14 = (float)((int)local_14 + 4);
          *puVar1 = uVar12;
          local_24 = (float)((int)local_24 + 4);
          local_2c = local_2c + 4;
          local_20 = (float)((int)local_20 + 0xc);
        }
        else if ((cVar3 == '\x05') || (cVar3 == '\x02')) {
          /* ST_CALLSITE[0064BF06]: CALL dword ptr [EAX + 0x4] */
          local_34 = this_00->slot_04(st::machine_word_boundary_cast<undefined4>(local_c));
          if ((int)pcVar8 <= (int)local_24) {
            pcVar8 = (char *)((int)pcVar8 + 0x200);
            local_28 = pcVar8;

            local_1c = (undefined4 *)st::fn_006ACF50(local_1c,st::machine_word_boundary_cast<uint>(pcVar8));
          }
          *(double *)((int)local_14 + (int)local_1c) = (double)local_34;
          local_14 = (float)((int)local_14 + 8);
          local_24 = (float)((int)local_24 + 8);
          local_2c = local_2c + 8;
          local_20 = (float)((int)local_20 + 0x20);
        }
        else {
          pcVar13_mg5 = st::fn_004057DB((int)*(short *)(local_10 + 1));
          if (pcVar13_mg5 != nullptr) {
            st::fn_0072E340(&this_00->field_0004,pcVar13_mg5,0x7f);
          }
          this_00->field_0084 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = (int *)((int)local_c + 5);
        local_30 = local_30 + -1;
      } while (local_30 != 0);
    }
    fVar11 = local_20;
    /* ST_CALLSITE[0064C054]: CALL 0x006aac10; direct=006AAC10 Library::DKW::LIB::MemAllocClear; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/undefined1; source view only; no Ghidra override */
    local_8 = static_cast<float *>(st::fn_006AAC10(st::storage_bit_cast<uint>(local_20)));

    st::fn_007300E0(reinterpret_cast<undefined1 *>(local_8),st::storage_bit_cast<int>(fVar11),local_18,local_1c);
    if (param_3 != nullptr) {
      *param_3 = 3;
    }
    if (local_1c == nullptr) {
      g_currentExceptionFrame = local_c0.previous;
      return local_8;
    }
    st::fn_006AB060(&local_1c);
    g_currentExceptionFrame = local_c0.previous;
    return local_8;
  case 0x38e:
    if (param_2 != 9) {
      st::fn_006A5E40
                (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x24f);
    }
    if (0 < param_2) {
      local_c = &local_74;
      do {
        if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
          /* ST_CALLSITE[0064C1F4]: CALL dword ptr [EDX] */
          iVar6 = this_00->slot_00();
          *local_c = iVar6;
        }
        else {
          local_EAX_6215 = st::fn_004057DB((int)*(short *)(local_10 + 1));
          if (local_EAX_6215 != nullptr) {
            st::fn_0072E340(&this_00->field_0004,local_EAX_6215,0x7f);
          }
          this_00->field_0084 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        param_1 = param_1 + 5;
        local_c = local_c + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }

    local_8 = static_cast<float *>(st::fn_006AAC10(4));
    if (((local_68 <= local_74) && (local_74 < local_5c + local_68)) &&
       ((local_64 <= local_70 &&
        (((local_70 < local_58 + local_64 && (local_60 <= local_6c)) &&
         (local_6c < local_54 + local_60)))))) {
      *local_8 = 1.4013e-45;
      goto cf_common_exit_0064B36F;
    }
    goto cf_common_exit_0064B79F;
  case 0x38f:
    if (param_2 != 6) {
      st::fn_006A5E40
                (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_erc.cpp"),0x240);
    }
    if (0 < param_2) {
      local_c = &local_50;
      do {
        if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
          /* ST_CALLSITE[0064C11C]: CALL dword ptr [EDX] */
          iVar6 = this_00->slot_00();
          *local_c = iVar6;
        }
        else {
          local_EAX_5998 = st::fn_004057DB((int)*(short *)(local_10 + 1));
          if (local_EAX_5998 != nullptr) {
            st::fn_0072E340(&this_00->field_0004,local_EAX_5998,0x7f);
          }
          this_00->field_0084 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        param_1 = param_1 + 5;
        local_c = local_c + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }

    local_8 = static_cast<float *>(st::fn_006AAC10(4));
    if ((((local_48 <= local_50) && (local_50 < local_40 + local_48)) && (local_44 <= local_4c)) &&
       (local_4c < local_3c + local_44)) {
      *local_8 = 1.4013e-45;
      goto cf_common_exit_0064B36F;
    }
cf_common_exit_0064B79F:
    *local_8 = 0.0;
cf_common_exit_0064B36F:
    if (param_3 == nullptr) {
      g_currentExceptionFrame = local_c0.previous;
      return local_8;
    }
    *param_3 = 1;
    g_currentExceptionFrame = local_c0.previous;
    return local_8;
  default:
cf_common_exit_0064C271:
    local_EAX_6402 = st::fn_004057DB(iVar6);
    if (local_EAX_6402 != nullptr) {
      st::fn_0072E340(&this_00->field_0004,local_EAX_6402,0x7f);
    }
    this_00->field_0084 = 0xffffffff;
    iVar6 = -0x75;
  }
cf_error_exit_0064C2A4:
  st::fn_006A5E40(iVar6,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
  g_currentExceptionFrame = local_c0.previous;
  return local_8;
}
