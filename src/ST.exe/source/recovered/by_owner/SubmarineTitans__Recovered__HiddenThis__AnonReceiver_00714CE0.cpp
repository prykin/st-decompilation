#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SubmarineTitans__Recovered__HiddenThis__AnonReceiver_00714CE0.cpp

// 00714CE0 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00714CE0::FUN_00714ce0
#line 4 "decomp/ST.exe/functions/00714CE0/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00714CE0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=5; incoming_edx_uses=0; calls=5;
   ecx_pointer_setup=4; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=1; adopt_untyped_existing_thiscall */

int __thiscall
st::fn_00714CE0
          (AnonReceiver_00714CE0 *this,uint param_1)

{
  AnonReceiver_00714CE0 *pAVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  byte *puVar6;
  InternalExceptionFrame local_4c;
  AnonReceiver_00714CE0 *local_8;

  if ((int)param_1 <= *(int *)&this->field_0x4) {
    return 0;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pAVar1 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    if (-1 < iVar2) {
      iVar2 = -1;
    }
    return iVar2;
  }
  if (*(void **)local_8 == nullptr) {
    pvVar3 = st::fn_006AAC10(param_1);
    local_8 = pAVar1;
  }
  else {
    pvVar3 = st::fn_006ACF50(*(void **)local_8,param_1);
    iVar2 = *(int *)&pAVar1->field_0x4;
    uVar4 = param_1 - iVar2;
    puVar6 = (byte *)(iVar2 + (int)pvVar3);
    memset(puVar6, 0, uVar4); /* compiler bulk-zero initialization */
  }
  g_currentExceptionFrame = local_4c.previous;
  *(void **)local_8 = pvVar3;
  *(uint *)&local_8->field_0x4 = param_1;
  return 0;
}

