#include "../../pseudocode_runtime.h"


/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970.
   Evidence: incoming_receiver_captures=1; receiver_accesses=14; incoming_edx_uses=0; calls=2;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=5

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00672440 -> 0064A910 @ 006724CA */

int __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::FUN_00672440
          (AnonReceiver_0064A970 *this,AnonShape_00683780_11EA4E23 *param_1,int param_2,
          short *param_3)

{
  AnonReceiver_0064A970 *this_00;
  int iVar2;
  char *arg_1;
  undefined4 uVar1;
  int iVar3;
  short *psVar4;
  InternalExceptionFrame local_64;
  int local_20;
  AnonReceiver_0064A970 *local_1c;
  int local_18;
  int local_14;
  int local_10;
  float *local_c;
  int local_8;

  local_8 = param_2;
  local_18 = -1;
  local_10 = 0;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_1c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  this_00 = local_1c;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_64.previous;
    if (0 < iVar2) {
      iVar2 = -0x6b;
    }
    return iVar2;
  }
  Library::MSVCRT::_strncpy(&local_1c->field_0x4,&CHAR_00h_008016a0,0x7f);
  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
  if (param_3 != nullptr) {
    psVar4 = param_3;
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      psVar4[0] = 0;
      psVar4[1] = 0;
      psVar4 = psVar4 + 2;
    }
    *psVar4 = 0;
  }
  do {
    while( true ) {
      if (local_10 != 0) {
        g_currentExceptionFrame = local_64.previous;
        return local_18;
      }
      arg_1 = thunk_FUN_0064a910(param_1,local_8);
      if (arg_1 != nullptr) break;
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-4,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    switch(*arg_1) {
    case '\b':
      if (param_3 != nullptr) {
        if (0x31 < *param_3) {
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x66,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 8;
        /* ST_CALLSITE[0067253F]: CALL dword ptr [EDX] */
        uVar1 = this_00->slot_00(arg_1);
        *(undefined4 *)(param_3 + *param_3 * 2 + 4) = uVar1;
        *param_3 = *param_3 + 1;
        param_3[2] = param_3[2] + 1;
      }
      local_8 = local_8 + 1;
      break;
    case '\t':
      if (param_3 != nullptr) {
        if (0x31 < *param_3) {
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x66,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 9;
        /* ST_CALLSITE[00672590]: CALL dword ptr [EDX + 0x4] */
        *(float *)(param_3 + *param_3 * 2 + 4) = this_00->slot_04(arg_1);
        *param_3 = *param_3 + 1;
        param_3[3] = param_3[3] + 1;
      }
      local_8 = local_8 + 1;
      break;
    case '\n':
      if (param_3 != nullptr) {
        if (0x31 < *param_3) {
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x66,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 10;
        /* ST_CALLSITE[006725E2]: CALL dword ptr [EAX + 0x8] */
        uVar1 = this_00->slot_08(arg_1);
        *(undefined4 *)(param_3 + *param_3 * 2 + 4) = uVar1;
        if (*(int *)(param_3 + *param_3 * 2 + 4) == 0) {
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x6b,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        *param_3 = *param_3 + 1;
        param_3[1] = param_3[1] + 1;
      }
      local_8 = local_8 + 1;
      break;
    case '\v':
      local_18 = (int)*(short *)(arg_1 + 1);
      local_10 = 1;
      break;
    default:
      local_c = thunk_FUN_00671f10((int)arg_1,&local_14,&local_20);
      if (local_c == nullptr) {
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
LAB_0067276f:
        RaiseInternalException(local_14,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      else if (local_14 == 1) {
        if (param_3 != nullptr) {
          if (0x31 < *param_3) {
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x66,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 8;
          *(float *)(param_3 + *param_3 * 2 + 4) = *local_c;
          *param_3 = *param_3 + 1;
          param_3[2] = param_3[2] + 1;
        }
      }
      else if (local_14 == 2) {
        if (param_3 != nullptr) {
          if (0x31 < *param_3) {
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x66,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 9;
          *(float *)(param_3 + *param_3 * 2 + 4) = *local_c;
          *param_3 = *param_3 + 1;
          param_3[3] = param_3[3] + 1;
        }
      }
      else {
        if (local_14 != 3) {
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          goto LAB_0067276f;
        }
        if (param_3 != nullptr) {
          if (0x31 < *param_3) {
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x66,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 10;
          *(float *)(param_3 + *param_3 * 2 + 4) = *local_c;
          *param_3 = *param_3 + 1;
          param_3[1] = param_3[1] + 1;
        }
      }
      if (local_c != nullptr) {
        FreeAndNull(&local_c);
      }
      local_8 = local_8 + local_20;
    }
  } while( true );
}

