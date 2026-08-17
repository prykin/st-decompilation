#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_interp.cpp
   Diagnostic line evidence: 1342 | 1356 | 1369 | 1374 | 1388 | 1392 | 1413 | 1419 (metadata/report
   site, not the function definition)
   [STSourceProvenanceApplier end] */

float * FUN_00671f10(int param_1,int *param_2,int *param_3)

{
  short sVar1;
  undefined1 *arg_1;
  int iVar3;
  int iVar2;
  char *pcVar3;
  float fVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;
  InternalExceptionFrame local_70;
  undefined1 local_2c;
  float local_2b;
  AnonReceiver_0064A970 *local_24;
  float local_20;
  int local_1c;
  float *local_18;
  int local_14;
  int local_10;
  AnonShape_00683780_11EA4E23 *local_c;
  float *local_8;

  local_18 = nullptr;
  local_8 = nullptr;
  local_c = nullptr;
  local_10 = 0;
  local_14 = 0;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  iVar3 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    if (local_8 != nullptr) {
      FreeAndNull(&local_8);
    }
    if (local_18 != nullptr) {
      FreeAndNull(&local_18);
    }
    thunk_FUN_0064a800(&local_c);
    if (0 < iVar3) {
      iVar3 = -0x6b;
    }
    if (param_2 != nullptr) {
      *param_2 = iVar3;
    }
    return nullptr;
  }
  Library::MSVCRT::_strncpy(&local_24->field_0x4,&CHAR_00h_008016a0,0x7f);
  *(undefined4 *)&local_24->field_0x84 = 0xffffffff;
  local_c = (AnonShape_00683780_11EA4E23 *)thunk_FUN_0064a630(10);
  local_20 = 0.0;
  psVar6 = (short *)(param_1 + 1);
  do {
    while( true ) {
      if ((*(char *)((int)psVar6 + -1) == '\a') && (*psVar6 == 0x1d)) {
        if (local_c->field_0004 != 1) {
          RaiseInternalException
                    (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_interp.cpp",0x570
                    );
        }
        if (param_3 != nullptr) {
          *param_3 = (int)local_20 + 1;
        }
        arg_1 = (undefined1 *)local_c->field_0008;
        switch(*arg_1) {
        case 1:
        case 4:
          /* ST_CALLSITE[00672201]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          fVar4 = (float)local_24->slot_00(arg_1);
          local_18 = Library::DKW::LIB::MemAllocClear(4);
          *local_18 = fVar4;
          if (param_2 != nullptr) {
            *param_2 = 1;
          }
          break;
        case 2:
        case 5:
          /* ST_CALLSITE[0067222C]: CALL dword ptr [EDX + 0x4] */
          local_20 = local_24->slot_04(arg_1);
          local_18 = Library::DKW::LIB::MemAllocClear(4);
          *local_18 = local_20;
          if (param_2 != nullptr) {
            *param_2 = 2;
          }
          break;
        case 3:
        case 6:
          /* ST_CALLSITE[00672255]: CALL dword ptr [EDX + 0x8] */
          fVar4 = (float)local_24->slot_08(arg_1);
          if (fVar4 == 0.0) {
            RaiseInternalException
                      (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_interp.cpp",
                       0x585);
          }
          local_18 = Library::DKW::LIB::MemAllocClear(4);
          *local_18 = fVar4;
          if (param_2 != nullptr) {
            *param_2 = 3;
          }
          break;
        default:
          RaiseInternalException
                    (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_interp.cpp",0x58b
                    );
        }
        thunk_FUN_0064a800(&local_c);
        g_currentExceptionFrame = local_70.previous;
        return local_18;
      }
      thunk_FUN_0064a830((int *)local_c,(undefined4 *)((int)psVar6 + -1));
      if (*(char *)((int)psVar6 + -1) == '\a') break;
cf_continue_loop_006721A4:
      local_20 = (float)((int)local_20 + 1);
      psVar6 = (short *)((int)psVar6 + 5);
    }
    iVar5 = (local_c->field_0004 - (int)psVar6[1]) + -1;
    if (iVar5 < 0) {
      RaiseInternalException
                (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_interp.cpp",0x53e);
    }
    if ((local_10 == 0) && (local_14 == 0)) {
      iVar2 = thunk_FUN_006686f0((int)*psVar6);
      if ((iVar2 < 0) || (iVar2 = thunk_FUN_00668a70((int)*psVar6), iVar2 != 0)) {
        iVar2 = (int)psVar6[1];
        piVar7 = &local_1c;
        pcVar3 = thunk_FUN_0064a910(local_c,iVar5);
        local_8 = thunk_FUN_0064a970(pcVar3,iVar2,piVar7);
      }
      else {
        iVar2 = (int)psVar6[1];
        piVar7 = &local_1c;
        pcVar3 = thunk_FUN_0064a910(local_c,iVar5);
        local_8 = (float *)SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                           thunk_FUN_0066acc0(local_24,pcVar3,iVar2,piVar7);
      }
    }
    else {
      local_1c = 1;
      local_8 = Library::DKW::LIB::MemAllocClear(4);
      *local_8 = (float)(uint)(local_10 == 0);
    }
    if (local_8 == nullptr) {
      RaiseInternalException
                (local_1c,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_interp.cpp",0x56c);
      goto cf_continue_loop_006721A4;
    }
    iVar5 = thunk_FUN_0064a940(local_c,iVar5);
    if (iVar5 == 0) {
      RaiseInternalException
                (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_interp.cpp",0x54c);
    }
    if (local_1c == 1) {
      local_2c = 1;
      local_2b = *local_8;
    }
    else if (local_1c == 2) {
      local_2c = 2;
      local_2b = *local_8;
    }
    else if (local_1c == 3) {
      /* ST_CALLSITE[006720CA]: CALL dword ptr [EDX + 0xc]; [STIndirectCallsiteApplier] exact slot 0xC; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      iVar5 = local_24->slot_0C(local_8);
      if (iVar5 < 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_interp.cpp",0x559);
      }
      local_2c = 3;
      local_2b = (float)STReplaceLowWord((uint32_t)(local_2b), (uint16_t)((short)iVar5));
    }
    else {
      RaiseInternalException
                (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_interp.cpp",0x55e);
    }
    thunk_FUN_0064a830((int *)local_c,(undefined4 *)&local_2c);
    FreeAndNull(&local_8);
    sVar1 = *psVar6;
    if (((sVar1 == 800) && (local_2b == 0.0)) && (local_14 == 0)) {
      local_10 = local_10 + 1;
    }
    if ((sVar1 == 3) && (0 < local_10)) {
      local_10 = local_10 + -1;
    }
    if (((sVar1 == 0x321) && (local_2b == 1.4013e-45)) && (local_10 == 0)) {
      local_14 = local_14 + 1;
    }
    if ((sVar1 != 0x34) || (local_14 < 1)) goto cf_continue_loop_006721A4;
    local_14 = local_14 + -1;
    local_20 = (float)((int)local_20 + 1);
    psVar6 = (short *)((int)psVar6 + 5);
  } while( true );
}

