#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00568010_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_8=8

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0, unknown=0),
   and decompilation contains no value return

   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_00568010.
   Evidence: incoming_receiver_captures=1; receiver_accesses=10; incoming_edx_uses=0; calls=4;
   ecx_pointer_setup=4; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=2; adopt_untyped_existing_thiscall

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/SubmarineTitans_Recovered_HiddenThis_RecoveredReceiver_00568010_sub_00568010_param_1Enum.
   Cases: CASE_1=1;CASE_2=2;CASE_4=4;CASE_8=8 */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00568010::FUN_00568010
          (RecoveredReceiver_00568010 *this,
          SubmarineTitans_Recovered_HiddenThis_RecoveredReceiver_00568010_sub_00568010_param_1Enum
          param_1)

{
  SoundClassTy *this_00;
  int iVar1;
  uint *puVar2;
  InternalExceptionFrame local_50;
  SoundClassTy *local_c;
  uint local_8;

  if (this->field_0F8B != 0) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = (SoundClassTy *)this;
    iVar1 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    this_00 = local_c;
    if (iVar1 == 0) {
      switch(param_1) {
      case CASE_1:
        iVar1 = 2;
        puVar2 = (undefined4 *)&local_c->field_0xe23;
        do {
          if ((((0x1a < iVar1) && (iVar1 < 0x1e)) || ((0x11 < iVar1 && (iVar1 < 0x15)))) &&
             (FUN_006c1f00(iVar1,&local_8,nullptr), local_8 == 1)) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_006c1ba0(iVar1);
          }
          iVar1 = iVar1 + 1;
          puVar2 = puVar2 + 3;
        } while (iVar1 < 0x20);
        g_currentExceptionFrame = local_50.previous;
        return;
      case CASE_2:
        iVar1 = 4;
        puVar2 = (undefined4 *)&local_c->field_0xe3b;
        do {
          FUN_006c1f00(iVar1,&local_8,nullptr);
          if (local_8 == 1) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_006c1ba0(iVar1);
          }
          iVar1 = iVar1 + 1;
          puVar2 = puVar2 + 3;
        } while (iVar1 < 0xb);
        g_currentExceptionFrame = local_50.previous;
        return;
      case CASE_4:
        iVar1 = 2;
        do {
          if (((((1 < iVar1) && (iVar1 < 4)) || ((0x1d < iVar1 && (iVar1 < 0x20)))) ||
              ((10 < iVar1 && (iVar1 < 0x12)))) &&
             (FUN_006c1f00(iVar1,&local_8,nullptr), local_8 == 1)) {
            *(undefined4 *)(&this_00->field_0xe0b + iVar1 * 0xc) = 0;
            *(undefined4 *)(&this_00->field_0xe0f + iVar1 * 0xc) = 0;
            *(undefined4 *)(&this_00->field_0xe13 + iVar1 * 0xc) = 0;
            FUN_006c1ba0(iVar1);
            if (iVar1 == 2) {
              /* ST_CALLSITE[0056818E]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
              SoundClassTy::PlaySound(this_00,SOUND_MODE_1,nullptr,0x4b7,nullptr,0);
            }
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x20);
        g_currentExceptionFrame = local_50.previous;
        return;
      case CASE_8:
        iVar1 = 0x15;
        puVar2 = (undefined4 *)&local_c->field_0xf07;
        do {
          FUN_006c1f00(iVar1,&local_8,nullptr);
          if (local_8 == 1) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_006c1ba0(iVar1);
          }
          iVar1 = iVar1 + 1;
          puVar2 = puVar2 + 3;
        } while (iVar1 < 0x1a);
      }
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
  }
  return;
}

