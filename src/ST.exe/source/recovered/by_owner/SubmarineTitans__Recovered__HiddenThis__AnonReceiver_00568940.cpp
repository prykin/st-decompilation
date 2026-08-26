#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SubmarineTitans__Recovered__HiddenThis__AnonReceiver_00568940.cpp

// 00568940 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00568940::FUN_00568940
#line 4 "decomp/ST.exe/functions/00568940/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00568940_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_B=11;CASE_C=12

   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00568940.
   Evidence: incoming_receiver_captures=1; receiver_accesses=3; incoming_edx_uses=0; calls=2;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=2; adopt_untyped_existing_thiscall

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/SubmarineTitans_Recovered_HiddenThis_AnonReceiver_00568940_sub_00568940_param_1Enum.
   Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_B=11;CASE_C=12 */

void __thiscall
st::fn_00568940
          (AnonReceiver_00568940 *this,
          SubmarineTitans_Recovered_HiddenThis_AnonReceiver_00568940_sub_00568940_param_1Enum
          param_1)

{
  AnonReceiver_00568940 *this_00;
  int iVar1;
  InternalExceptionFrame local_4c;
  AnonReceiver_00568940 *local_8;

  if (*(int *)&this->field_0xf8b != 0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (iVar1 == 0) {
      switch(param_1) {
      case CASE_1:
      case CASE_8:
        iVar1 = 2;
        do {
          st::fn_0040329C(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 4);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_2:
        iVar1 = 4;
        do {
          st::fn_0040329C(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0xb);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_3:
        iVar1 = 0xb;
        do {
          st::fn_0040329C(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x12);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_4:
        iVar1 = 0x12;
        do {
          st::fn_0040329C(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x15);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_5:
        iVar1 = 0x15;
        do {
          st::fn_0040329C(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x1a);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_6:
        iVar1 = 0x1b;
        do {
          st::fn_0040329C(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x1e);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_7:
        iVar1 = 0x1e;
        do {
          st::fn_0040329C(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x20);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_B:
        iVar1 = 0;
        do {
          st::fn_0040329C(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 2);
        *(undefined4 *)&this_00->field_0xe03 = 0xffffffff;
        *(undefined4 *)&this_00->field_0xe07 = 0xffffffff;
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_C:
        st::fn_0040329C(local_8,0x1a);
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
  }
  return;
}

