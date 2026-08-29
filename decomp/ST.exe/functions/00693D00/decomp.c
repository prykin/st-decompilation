#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00693D00 parameter used as this of cMf32::RecPut @ 00693D63

   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00693D00.
   Evidence: incoming_receiver_captures=1; receiver_accesses=4; incoming_edx_uses=0; calls=2;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[8];
   expected_stack=8; receiver_family_members=1; adopt_untyped_existing_thiscall
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00693DC0 @ 00693E07 -> read as EAX on
   every CFG path | 006A0740 @ 006A0797 -> read as EAX on every CFG path */

int __thiscall
SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00693B20::FUN_00693d00
          (RecoveredReceiver_00693B20 *this,cMf32 *param_1,undefined4 param_2)

{
  int iVar1;
  InternalExceptionFrame local_50;
  int local_c;
  RecoveredReceiver_00693B20 *local_8;

  this->field_0000 = 1;
  this->field_0004 = this->field_0004 & 0xffffff05 | 5;
  this->field_0008 = param_2;
  local_c = 1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;

  iVar1 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar1 == 0) {

    cMf32::RecPut(param_1,0,PTR_s_DESCRIPTOR_0079d770,(byte *)local_8,0x1999,nullptr,'\0',
                  nullptr);
    g_currentExceptionFrame = local_50.previous;
    return local_c;
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

