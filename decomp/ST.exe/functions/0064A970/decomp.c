#include "../../pseudocode_runtime.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_erc.cpp
   Diagnostic line evidence: 129 | 130 | 138 | 142 | 159 | 160 | 161 | 173 | 192 | 205 | 223 | 248 |
   284 | 294 | 305 | 313 | 323 | 338 | 346 | 356 | 369 | 386 | 399 | 402 | 413 | 416 | 428 | 443 |
   458 | 472 | 486 | 500 | 518 | 536 | 538 | 544 | 576 | 591 (metadata/report site, not the function
   definition)
   [STSourceProvenanceApplier end] */

float * FUN_0064a970(char *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
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
  undefined4 uVar12;
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
  float10 fVar19;
  longlong lVar20;
  InternalExceptionFrame local_c0;
  undefined4 local_7c;
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
  int *local_38;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_c0.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_c0.previous;
    if (local_1c != nullptr) {
      FreeAndNull(&local_1c);
    }
    if (local_8 != nullptr) {
      FreeAndNull(&local_8);
    }
    if (0 < iVar5) {
      iVar5 = -0x6b;
    }
    if (param_3 != nullptr) {
      *param_3 = iVar5;
    }
    return nullptr;
  }
  Library::MSVCRT::_strncpy((char *)(local_38 + 1),&CHAR_00h_008016a0,0x7f);
  local_38[0x21] = -1;
  cVar3 = *param_1;
  local_ECX_128 = param_1;
  for (iVar6 = 0; (cVar3 != '\a' && (iVar6 < param_2)); iVar6 = iVar6 + 1) {
    cVar3 = local_ECX_128[5];
    local_ECX_128 = local_ECX_128 + 5;
  }
  if (iVar6 != param_2) {
    RaiseInternalException
              (-0x69,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x81);
  }
  local_10 = param_1 + param_2 * 5;
  if (*(short *)(param_1 + param_2 * 5 + 3) != param_2) {
    RaiseInternalException
              (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x82);
  }
  iVar6 = (int)*(short *)(local_10 + 1);
  if (iVar6 < 0x3e) {
    if (iVar6 == 0x3d) {
switchD_0064aa67_caseD_1:
      if (param_2 != 2) {
        RaiseInternalException
                  (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x8a);
      }
      sVar4 = *(short *)(local_10 + 1);
      if ((sVar4 == 1) && ((*param_1 == '\x06' || (*param_1 == '\x03')))) {
        if ((param_1[5] == '\x06') || (param_1[5] == '\x03')) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          pcVar8 = (char *)(**(code **)(*local_38 + 8))(param_1);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          pbVar9 = (byte *)(**(code **)(*local_38 + 8))(param_1 + 5);
          local_18 = pbVar9;
          if ((pcVar8 == nullptr) || (pbVar9 == nullptr)) {
            RaiseInternalException
                      (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x8e);
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
          local_8 = Library::DKW::LIB::MemAllocClear(~uVar14 + ~uVar15 + 2);
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
            pfVar16 = (float *)(pcVar13 + -uVar14);
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
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar6 = (**(code **)*local_38)(param_1);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar10 = (**(code **)*local_38)(param_1 + 5);
          local_8 = Library::DKW::LIB::MemAllocClear(4);
          switch(*(undefined2 *)(local_10 + 1)) {
          case 1:
            *local_8 = (float)(iVar10 + iVar6);
            break;
          default:
            iVar6 = 0xa1;
            goto cf_error_exit_0064B368;
          case 0x16:
            if (iVar10 == 0) {
              RaiseInternalException
                        (-0x67,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x9f
                        );
            }
            *local_8 = (float)(iVar6 / iVar10);
            break;
          case 0x2c:
            if (iVar10 == 0) {
              RaiseInternalException
                        (-0x67,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0xa0
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
          local_EAX_2068 = thunk_FUN_00674af0((int)sVar4);
          if (local_EAX_2068 != nullptr) {
            Library::MSVCRT::_strncpy((char *)(local_38 + 1),local_EAX_2068,0x7f);
            local_38[0x21] = -1;
            iVar6 = -0x76;
            goto cf_error_exit_0064C2A4;
          }
          goto cf_error_exit_0064B714;
        }
        int scalar_local_18 = **(code **)*local_38)(param_1; /* split integer lifetime from pointer-typed SSA storage */
        local_c = (int *)(float)scalar_local_18;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        fVar19 = (float10)(**(code **)(*local_38 + 4))(param_1 + 5);
        local_14 = (float)fVar19;
        local_8 = Library::DKW::LIB::MemAllocClear(4);
        switch((int)*(short *)(local_10 + 1)) {
        case 1:
          *local_8 = local_14 + (float)local_c;
          break;
        default:
          local_EAX_2282 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
          goto joined_r0x0064b49a;
        case 0x16:
          if (local_14 == (float)_DAT_0079d670) {
            RaiseInternalException
                      (-0x67,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0xad);
          }
          *local_8 = (float)local_c / local_14;
          break;
        case 0x30:
          *local_8 = local_14 * (float)local_c;
          break;
        case 0x3d:
          *local_8 = (float)local_c - local_14;
        }
        break;
      case '\x02':
      case '\x05':
        cVar3 = param_1[5];
        if ((cVar3 != '\x04') && (cVar3 != '\x01')) {
          if ((cVar3 != '\x05') && (cVar3 != '\x02')) {
            local_EAX_2633 = thunk_FUN_00674af0((int)sVar4);
            if (local_EAX_2633 != nullptr) {
              Library::MSVCRT::_strncpy((char *)(local_38 + 1),local_EAX_2633,0x7f);
              local_38[0x21] = -1;
              iVar6 = -0x76;
              goto cf_error_exit_0064C2A4;
            }
            goto cf_error_exit_0064B714;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          fVar19 = (float10)(**(code **)(*local_38 + 4))(param_1);
          local_c = (int *)(float)fVar19;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          fVar19 = (float10)(**(code **)(*local_38 + 4))(param_1 + 5);
          local_14 = (float)fVar19;
          local_8 = Library::DKW::LIB::MemAllocClear(4);
          iVar6 = (int)*(short *)(local_10 + 1);
          switch(iVar6) {
          case 1:
            *local_8 = local_14 + (float)local_c;
            break;
          default:
            goto switchD_0064b42d_caseD_2;
          case 0x16:
            if (local_14 == (float)_DAT_0079d670) {
              RaiseInternalException
                        (-0x67,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0xcd
                        );
            }
            *local_8 = (float)local_c / local_14;
            break;
          case 0x30:
            *local_8 = local_14 * (float)local_c;
            break;
          case 0x3d:
            *local_8 = (float)local_c - local_14;
          }
          break;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        fVar19 = (float10)(**(code **)(*local_38 + 4))(param_1);
        local_c = (int *)(float)fVar19;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        local_18 = (byte *)(**(code **)*local_38)(param_1 + 5);
        local_14 = (float)(int)local_18;
        local_8 = Library::DKW::LIB::MemAllocClear(4);
        iVar6 = (int)*(short *)(local_10 + 1);
        switch(iVar6) {
        case 1:
          *local_8 = local_14 + (float)local_c;
          break;
        default:
switchD_0064b42d_caseD_2:
          local_EAX_2282 = thunk_FUN_00674af0(iVar6);
joined_r0x0064b49a:
          if (local_EAX_2282 != nullptr) {
            Library::MSVCRT::_strncpy((char *)(local_38 + 1),local_EAX_2282,0x7f);
          }
          local_38[0x21] = -1;
          RaiseInternalException(-0x76,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          break;
        case 0x16:
          if (local_14 == (float)_DAT_0079d670) {
            RaiseInternalException
                      (-0x67,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0xc0);
          }
          *local_8 = (float)local_c / local_14;
          break;
        case 0x30:
          *local_8 = local_14 * (float)local_c;
          break;
        case 0x3d:
          *local_8 = (float)local_c - local_14;
        }
        break;
      default:
        local_EAX_3036 = thunk_FUN_00674af0((int)sVar4);
        if (local_EAX_3036 != nullptr) {
          Library::MSVCRT::_strncpy((char *)(local_38 + 1),local_EAX_3036,0x7f);
          local_38[0x21] = -1;
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
        RaiseInternalException
                  (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x131);
      }
      if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
        if ((param_1[5] == '\x04') || (param_1[5] == '\x01')) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar6 = (**(code **)*local_38)(param_1);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar10 = (**(code **)*local_38)(param_1 + 5);
          local_8 = Library::DKW::LIB::MemAllocClear(4);
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
joined_r0x0064b781:
                if (iVar10 == 0) goto cf_common_exit_0064B79F;
              }
LAB_0064b78b:
              *local_8 = 1.4013e-45;
              goto cf_common_exit_0064B36F;
            }
            if (sVar4 != 0x43) {
              iVar6 = 0x139;
              goto cf_error_exit_0064B368;
            }
            if (iVar6 == 0) goto joined_r0x0064b781;
            if (iVar10 == 0) goto LAB_0064b78b;
          }
          goto cf_common_exit_0064B79F;
        }
      }
      local_EAX_3468 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
      if (local_EAX_3468 != nullptr) {
        Library::MSVCRT::_strncpy((char *)(local_38 + 1),local_EAX_3468,0x7f);
      }
cf_error_exit_0064B714:
      local_38[0x21] = -1;
      iVar6 = -0x76;
      goto cf_error_exit_0064C2A4;
    case 8:
    case 10:
    case 0xb:
      if (param_2 != 2) {
        RaiseInternalException
                  (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x152);
      }
      if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
LAB_0064ae25:
        local_EAX_1213 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
        if (local_EAX_1213 != nullptr) {
          Library::MSVCRT::_strncpy((char *)(local_38 + 1),local_EAX_1213,0x7f);
        }
        local_38[0x21] = -1;
        iVar6 = -0x76;
        goto cf_error_exit_0064C2A4;
      }
      if ((param_1[5] != '\x04') && (param_1[5] != '\x01')) goto LAB_0064ae25;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar14 = (**(code **)*local_38)(param_1);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar15 = (**(code **)*local_38)(param_1 + 5);
      local_8 = Library::DKW::LIB::MemAllocClear(4);
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
      iVar6 = 0x15a;
cf_error_exit_0064B368:
      RaiseInternalException
                (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",iVar6);
      goto cf_common_exit_0064B36F;
    case 9:
      if (param_2 != 1) {
        RaiseInternalException
                  (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x164);
      }
      if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
        local_8 = Library::DKW::LIB::MemAllocClear(4);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar14 = (**(code **)*local_38)(param_1);
        *local_8 = (float)~uVar14;
        goto cf_common_exit_0064B36F;
      }
      break;
    case 0x13:
      if (param_2 != 3) {
        RaiseInternalException
                  (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x171);
      }
      if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar6 = (**(code **)*local_38)(param_1);
        iVar6 = 2 - (uint)(iVar6 != 0);
        pcVar8 = param_1 + iVar6 * 5;
        cVar3 = param_1[iVar6 * 5];
        if ((cVar3 == '\x04') || (cVar3 == '\x01')) {
          local_8 = Library::DKW::LIB::MemAllocClear(4);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          fVar11 = (float)(**(code **)*local_38)(pcVar8);
          *local_8 = fVar11;
          goto cf_common_exit_0064B36F;
        }
        if ((cVar3 == '\x05') || (cVar3 == '\x02')) {
          local_8 = Library::DKW::LIB::MemAllocClear(4);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          fVar19 = (float10)(**(code **)(*local_38 + 4))(pcVar8);
          *local_8 = (float)fVar19;
          goto cf_common_exit_0064B291;
        }
        if ((cVar3 == '\x06') || (cVar3 == '\x03')) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          pcVar8 = (char *)(**(code **)(*local_38 + 8))(pcVar8);
          if (pcVar8 == nullptr) {
            RaiseInternalException
                      (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x182);
          }
          uVar14 = 0xffffffff;
          pcVar13 = pcVar8;
          do {
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            cVar3 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar3 != '\0');
          local_8 = Library::DKW::LIB::MemAllocClear(~uVar14 + 1);
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
          pfVar16 = (float *)(pcVar13 + -uVar14);
          pfVar17 = local_8;
          memmove(pfVar17, pfVar16, uVar14); /* compiler REP MOVS byte copy */
          goto cf_common_exit_0064BBB1;
        }
      }
      local_EAX_1546 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
      if (local_EAX_1546 != nullptr) {
        Library::MSVCRT::_strncpy((char *)(local_38 + 1),local_EAX_1546,0x7f);
      }
      local_38[0x21] = -1;
      iVar6 = -0x76;
      goto cf_error_exit_0064C2A4;
    case 0x1e:
    case 0x27:
    case 0x28:
    case 0x2e:
    case 0x2f:
    case 0x33:
      if (param_2 != 2) {
        RaiseInternalException
                  (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0xf8);
      }
      cVar3 = *param_1;
      if ((cVar3 == '\x04') || (cVar3 == '\x01')) {
        if ((param_1[5] == '\x04') || (param_1[5] == '\x01')) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar6 = (**(code **)*local_38)(param_1);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar10 = (**(code **)*local_38)(param_1 + 5);
          local_8 = Library::DKW::LIB::MemAllocClear(4);
          switch(*(undefined2 *)(local_10 + 1)) {
          case 0x1e:
            *local_8 = (float)(uint)(iVar6 == iVar10);
            break;
          default:
            iVar6 = 0x104;
            goto cf_error_exit_0064B368;
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
        }
      }
      if ((cVar3 == '\x05') || (cVar3 == '\x02')) {
        if ((param_1[5] == '\x05') || (param_1[5] == '\x02')) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          fVar19 = (float10)(**(code **)(*local_38 + 4))(param_1);
          local_20 = (float)fVar19;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          fVar19 = (float10)(**(code **)(*local_38 + 4))(param_1 + 5);
          local_24 = (float)fVar19;
          local_8 = Library::DKW::LIB::MemAllocClear(4);
          switch(*(undefined2 *)(local_10 + 1)) {
          case 0x1e:
            if (local_20 == local_24) {
              *local_8 = 1.4013e-45;
              goto cf_common_exit_0064B36F;
            }
            break;
          default:
            iVar6 = 0x114;
            goto cf_error_exit_0064B368;
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
        if ((param_1[5] == '\x06') || (param_1[5] == '\x03')) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          pbVar9 = (byte *)(**(code **)(*local_38 + 8))(param_1);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          pbVar7 = (byte *)(**(code **)(*local_38 + 8))(param_1 + 5);
          if ((pbVar9 == nullptr) || (pbVar7 == nullptr)) {
            RaiseInternalException
                      (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x11c);
          }
          local_8 = Library::DKW::LIB::MemAllocClear(4);
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
      break;
    case 0x32:
      if (param_2 != 1) {
        RaiseInternalException
                  (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x143);
      }
      if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
        pcVar12 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
        if (pcVar12 != nullptr) {
          Library::MSVCRT::_strncpy((char *)(local_38 + 1),pcVar12,0x7f);
        }
        local_38[0x21] = -1;
        iVar6 = -0x76;
        goto cf_error_exit_0064C2A4;
      }
      local_8 = Library::DKW::LIB::MemAllocClear(4);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar6 = (**(code **)*local_38)(param_1);
      *local_8 = (float)(uint)(iVar6 == 0);
      goto cf_common_exit_0064B36F;
    }
LAB_0064b7ea:
    local_EAX_3714 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
    if (local_EAX_3714 != nullptr) {
      Library::MSVCRT::_strncpy((char *)(local_38 + 1),local_EAX_3714,0x7f);
    }
LAB_0064b80a:
    local_38[0x21] = -1;
    iVar6 = -0x76;
    goto cf_error_exit_0064C2A4;
  }
  if (iVar6 < 0x38a) {
    if (iVar6 != 0x389) {
      if (0x385 < iVar6) {
        if (iVar6 == 0x386) {
          if (param_2 != 1) {
            RaiseInternalException
                      (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",399);
          }
          if ((*param_1 == '\x06') || (*param_1 == '\x03')) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            pbVar9 = (byte *)(**(code **)(*local_38 + 8))(param_1);
            if (pbVar9 == nullptr) {
              RaiseInternalException
                        (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",
                         0x192);
            }
            local_8 = Library::DKW::LIB::MemAllocClear(4);
            fVar11 = (float)Library::MSVCRT::FUN_0072ff00(pbVar9);
            *local_8 = fVar11;
            goto cf_common_exit_0064B36F;
          }
        }
        else {
          if (iVar6 == 0x387) {
            if (param_2 != 1) {
              RaiseInternalException
                        (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",
                         0x19d);
            }
            if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
              local_EAX_4301 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
              if (local_EAX_4301 != nullptr) {
                Library::MSVCRT::_strncpy((char *)(local_38 + 1),local_EAX_4301,0x7f);
              }
              local_38[0x21] = -1;
              iVar6 = -0x78;
              goto cf_error_exit_0064C2A4;
            }
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            pbVar9 = (byte *)(**(code **)(*local_38 + 8))(param_1);
            if (pbVar9 == nullptr) {
              RaiseInternalException
                        (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",
                         0x1a0);
            }
            local_18 = nullptr;
            local_8 = Library::DKW::LIB::MemAllocClear(4);
            fVar19 = Library::MSVCRT::FUN_00730310(pbVar9,(int *)&local_18);
            *local_8 = (float)fVar19;
            goto cf_common_exit_0064B291;
          }
          if (iVar6 != 0x388) goto cf_common_exit_0064C271;
          if (param_2 != 2) {
            RaiseInternalException
                      (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x1ac);
          }
          if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
            if ((param_1[5] == '\x04') || (param_1[5] == '\x01')) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar6 = (**(code **)*local_38)(param_1);
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar10 = (**(code **)*local_38)(param_1 + 5);
              if (iVar10 < 2) {
                iVar10 = 2;
              }
              if (0x24 < iVar10) {
                iVar10 = 0x24;
              }
              local_8 = Library::DKW::LIB::MemAllocClear(0x40);
              Library::MSVCRT::__itoa(iVar6,(char *)local_8,iVar10);
              goto cf_common_exit_0064BBB1;
            }
          }
        }
        local_EAX_4136 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
        if (local_EAX_4136 != nullptr) {
          Library::MSVCRT::_strncpy((char *)(local_38 + 1),local_EAX_4136,0x7f);
        }
        local_38[0x21] = -1;
        iVar6 = -0x78;
        goto cf_error_exit_0064C2A4;
      }
      if (iVar6 == 0x385) {
        if (param_2 < 1) {
          RaiseInternalException
                    (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x206);
        }
        local_28 = nullptr;
        iVar6 = param_2;
        if (0 < param_2) {
          do {
            cVar3 = *param_1;
            local_c = nullptr;
            if (cVar3 == '\x04') {
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_0064b8f1:
              local_18 = (byte *)(**(code **)*local_38)(param_1);
              local_c = (int *)(float)(int)local_18;
LAB_0064b901:
              if ((*param_1 == '\x05') || (*param_1 == '\x02')) {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                fVar19 = (float10)(**(code **)(*local_38 + 4))(param_1);
                local_c = (int *)(float)fVar19;
              }
            }
            else {
              if (((cVar3 == '\x01') || (cVar3 == '\x05')) || (cVar3 == '\x02')) {
                if ((cVar3 == '\x04') || (cVar3 == '\x01')) goto LAB_0064b8f1;
                goto LAB_0064b901;
              }
              local_EAX_3904 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
              if (local_EAX_3904 != nullptr) {
                Library::MSVCRT::_strncpy((char *)(local_38 + 1),local_EAX_3904,0x7f);
              }
              local_38[0x21] = -1;
              RaiseInternalException
                        (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
            }
            local_28 = (char *)((float)local_c + (float)local_28);
            param_1 = param_1 + 5;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        local_8 = Library::DKW::LIB::MemAllocClear(4);
        *local_8 = (float)local_28 / (float)param_2;
        goto cf_common_exit_0064B291;
      }
      if (iVar6 == 0x41) {
        if (param_2 != 1) {
          RaiseInternalException
                    (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0xdf);
        }
        cVar3 = *param_1;
        if ((cVar3 == '\x04') || (cVar3 == '\x01')) {
          local_8 = Library::DKW::LIB::MemAllocClear(4);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar6 = (**(code **)*local_38)(param_1);
          *local_8 = (float)-iVar6;
          goto cf_common_exit_0064B36F;
        }
        if ((cVar3 == '\x05') || (cVar3 == '\x02')) {
          local_8 = Library::DKW::LIB::MemAllocClear(4);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          fVar19 = (float10)(**(code **)(*local_38 + 4))(param_1);
          *local_8 = (float)-fVar19;
          goto cf_common_exit_0064B36F;
        }
        goto LAB_0064b7ea;
      }
      if (iVar6 == 0x43) goto switchD_0064aa67_caseD_3;
      if (iVar6 == 900) {
        if (param_2 < 1) {
          RaiseInternalException
                    (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",500);
        }
        local_28 = nullptr;
        if (0 < param_2) {
          local_14 = (float)param_2;
          do {
            cVar3 = *param_1;
            local_c = nullptr;
            if (cVar3 == '\x04') {
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_0064b659:
              local_c = (int *)(**(code **)*local_38)(param_1);
LAB_0064b663:
              if ((*param_1 == '\x05') || (*param_1 == '\x02')) {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                fVar19 = (float10)(**(code **)(*local_38 + 4))(param_1);
                Library::MSVCRT::FUN_00730450
                          (SUB84((double)fVar19,0),(uint)((ulonglong)(double)fVar19 >> 0x20));
                lVar20 = Library::MSVCRT::__ftol();
                local_c = (int *)lVar20;
              }
            }
            else {
              if (((cVar3 == '\x01') || (cVar3 == '\x05')) || (cVar3 == '\x02')) {
                if ((cVar3 == '\x04') || (cVar3 == '\x01')) goto LAB_0064b659;
                goto LAB_0064b663;
              }
              local_EAX_3240 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
              if (local_EAX_3240 != nullptr) {
                Library::MSVCRT::_strncpy((char *)(local_38 + 1),local_EAX_3240,0x7f);
              }
              local_38[0x21] = -1;
              RaiseInternalException
                        (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
            }
            local_28 = local_28 + (int)local_c;
            param_1 = param_1 + 5;
            local_14 = (float)((int)local_14 + -1);
          } while (local_14 != 0.0);
        }
        local_8 = Library::DKW::LIB::MemAllocClear(4);
        *local_8 = (float)((int)local_28 / param_2);
        goto cf_common_exit_0064B36F;
      }
      goto cf_common_exit_0064C271;
    }
    if (param_2 != 2) {
      RaiseInternalException
                (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x1bb);
    }
    if ((*param_1 == '\x05') || (*param_1 == '\x02')) {
      if ((param_1[5] == '\x04') || (param_1[5] == '\x01')) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        fVar19 = (float10)(**(code **)(*local_38 + 4))(param_1);
        local_18 = (byte *)(float)fVar19;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar6 = (**(code **)*local_38)(param_1 + 5);
        if (iVar6 < 2) {
          iVar6 = 2;
        }
        if (0x40 < iVar6) {
          iVar6 = 0x40;
        }
        local_8 = Library::DKW::LIB::MemAllocClear(iVar6 + 10);
        Library::MSVCRT::FUN_007301e0
                  (SUB84((double)(float)local_18,0),
                   (int)((ulonglong)(double)(float)local_18 >> 0x20),iVar6,(char *)local_8);
        goto cf_common_exit_0064BBB1;
      }
    }
LAB_0064bd33:
    local_EAX_5067 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
    if (local_EAX_5067 != nullptr) {
      Library::MSVCRT::_strncpy((char *)(local_38 + 1),local_EAX_5067,0x7f);
    }
    local_38[0x21] = -1;
    iVar6 = -0x78;
    goto cf_error_exit_0064C2A4;
  }
  switch(iVar6) {
  case 0x38a:
    if (param_2 != 1) {
      RaiseInternalException
                (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x1ca);
    }
    if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      local_18 = (byte *)(**(code **)*local_38)(param_1);
      local_8 = Library::DKW::LIB::MemAllocClear(4);
      *local_8 = (float)(int)local_18;
      goto cf_common_exit_0064B291;
    }
    local_EAX_4782 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
    if (local_EAX_4782 != nullptr) {
      Library::MSVCRT::_strncpy((char *)(local_38 + 1),local_EAX_4782,0x7f);
    }
    local_38[0x21] = -1;
    iVar6 = -0x78;
    break;
  case 0x38b:
    if (param_2 != 1) {
      RaiseInternalException
                (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x1d8);
    }
    if ((*param_1 == '\x05') || (*param_1 == '\x02')) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      fVar19 = (float10)(**(code **)(*local_38 + 4))(param_1);
      local_18 = (byte *)(float)fVar19;
      local_8 = Library::DKW::LIB::MemAllocClear(4);
      Library::MSVCRT::FUN_0072e150
                (SUB84((double)(float)local_18,0),(uint)((ulonglong)(double)(float)local_18 >> 0x20)
                );
      lVar20 = Library::MSVCRT::__ftol();
      *local_8 = (float)lVar20;
      goto cf_common_exit_0064B36F;
    }
    local_EAX_4913 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
    if (local_EAX_4913 != nullptr) {
      Library::MSVCRT::_strncpy((char *)(local_38 + 1),local_EAX_4913,0x7f);
    }
    local_38[0x21] = -1;
    iVar6 = -0x78;
    break;
  case 0x38c:
    if (param_2 != 1) {
      RaiseInternalException
                (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x1e6);
    }
    if ((*param_1 == '\x05') || (*param_1 == '\x02')) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      fVar19 = (float10)(**(code **)(*local_38 + 4))(param_1);
      local_18 = (byte *)(float)fVar19;
      local_8 = Library::DKW::LIB::MemAllocClear(4);
      Library::MSVCRT::FUN_00730450
                (SUB84((double)(float)local_18,0),(uint)((ulonglong)(double)(float)local_18 >> 0x20)
                );
      lVar20 = Library::MSVCRT::__ftol();
      *local_8 = (float)lVar20;
      goto cf_common_exit_0064B36F;
    }
    goto LAB_0064bd33;
  case 0x38d:
    if (param_2 < 2) {
      RaiseInternalException
                (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x218);
    }
    if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
      local_EAX_5222 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
      if (local_EAX_5222 != nullptr) {
        Library::MSVCRT::_strncpy((char *)(local_38 + 1),local_EAX_5222,0x7f);
      }
      local_38[0x21] = -1;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    local_18 = (byte *)(**(code **)(*local_38 + 8))(param_1);
    if (local_18 == nullptr) {
      RaiseInternalException
                (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x21a);
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
    local_1c = Library::DKW::LIB::MemAlloc(0x200);
    if (1 < param_2) {
      local_c = (int *)(param_1 + 5);
      local_30 = param_2 + -1;
      local_2c = 4;
      local_24 = 1.12104e-44;
      pcVar8 = local_28;
      do {
        cVar3 = (char)*local_c;
        if ((cVar3 == '\x06') || (cVar3 == '\x03')) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          pcVar13 = (char *)(**(code **)(*local_38 + 8))(local_c);
          local_78 = pcVar13;
          if (pcVar13 == nullptr) {
            RaiseInternalException
                      (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x220);
          }
          if ((int)pcVar8 <= local_2c) {
            local_28 = (char *)((int)pcVar8 + 0x200);
            local_1c = Library::DKW::LIB::MemRealloc(local_1c,(uint)local_28);
          }
          puVar1 = (undefined4 *)((int)local_14 + (int)local_1c);
          local_14 = (float)((int)local_14 + 4);
          local_2c = local_2c + 4;
          local_24 = (float)((int)local_24 + 4);
          uVar14 = 0xffffffff;
          *puVar1 = pcVar13;
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
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          uVar12 = (**(code **)*local_38)(local_c);
          local_7c = uVar12;
          if ((int)pcVar8 <= local_2c) {
            pcVar8 = (char *)((int)pcVar8 + 0x200);
            local_28 = pcVar8;
            local_1c = Library::DKW::LIB::MemRealloc(local_1c,(uint)pcVar8);
          }
          puVar1 = (undefined4 *)((int)local_14 + (int)local_1c);
          local_14 = (float)((int)local_14 + 4);
          *puVar1 = uVar12;
          local_24 = (float)((int)local_24 + 4);
          local_2c = local_2c + 4;
          local_20 = (float)((int)local_20 + 0xc);
        }
        else if ((cVar3 == '\x05') || (cVar3 == '\x02')) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          fVar19 = (float10)(**(code **)(*local_38 + 4))(local_c);
          local_34 = (float)fVar19;
          if ((int)pcVar8 <= (int)local_24) {
            pcVar8 = (char *)((int)pcVar8 + 0x200);
            local_28 = pcVar8;
            local_1c = Library::DKW::LIB::MemRealloc(local_1c,(uint)pcVar8);
          }
          *(double *)((int)local_14 + (int)local_1c) = (double)local_34;
          local_14 = (float)((int)local_14 + 8);
          local_24 = (float)((int)local_24 + 8);
          local_2c = local_2c + 8;
          local_20 = (float)((int)local_20 + 0x20);
        }
        else {
          pcVar13_mg5 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
          if (pcVar13_mg5 != nullptr) {
            Library::MSVCRT::_strncpy((char *)(local_38 + 1),pcVar13_mg5,0x7f);
          }
          local_38[0x21] = -1;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (int *)((int)local_c + 5);
        local_30 = local_30 + -1;
      } while (local_30 != 0);
    }
    fVar11 = local_20;
    local_8 = Library::DKW::LIB::MemAllocClear((uint)local_20);
    Library::MSVCRT::FUN_007300e0((undefined1 *)local_8,(int)fVar11,local_18,local_1c);
    if (param_3 != nullptr) {
      *param_3 = 3;
    }
    if (local_1c == nullptr) {
      g_currentExceptionFrame = local_c0.previous;
      return local_8;
    }
    FreeAndNull(&local_1c);
    g_currentExceptionFrame = local_c0.previous;
    return local_8;
  case 0x38e:
    if (param_2 != 9) {
      RaiseInternalException
                (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x24f);
    }
    if (0 < param_2) {
      local_c = &local_74;
      do {
        if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar6 = (**(code **)*local_38)(param_1);
          *local_c = iVar6;
        }
        else {
          local_EAX_6215 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
          if (local_EAX_6215 != nullptr) {
            Library::MSVCRT::_strncpy((char *)(local_38 + 1),local_EAX_6215,0x7f);
          }
          local_38[0x21] = -1;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        param_1 = param_1 + 5;
        local_c = local_c + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    local_8 = Library::DKW::LIB::MemAllocClear(4);
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
      RaiseInternalException
                (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x240);
    }
    if (0 < param_2) {
      local_c = &local_50;
      do {
        if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar6 = (**(code **)*local_38)(param_1);
          *local_c = iVar6;
        }
        else {
          local_EAX_5998 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
          if (local_EAX_5998 != nullptr) {
            Library::MSVCRT::_strncpy((char *)(local_38 + 1),local_EAX_5998,0x7f);
          }
          local_38[0x21] = -1;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        param_1 = param_1 + 5;
        local_c = local_c + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    local_8 = Library::DKW::LIB::MemAllocClear(4);
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
    local_EAX_6402 = thunk_FUN_00674af0(iVar6);
    if (local_EAX_6402 != nullptr) {
      Library::MSVCRT::_strncpy((char *)(local_38 + 1),local_EAX_6402,0x7f);
    }
    local_38[0x21] = -1;
    iVar6 = -0x75;
  }
cf_error_exit_0064C2A4:
  RaiseInternalException(iVar6,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
  g_currentExceptionFrame = local_c0.previous;
  return local_8;
}

