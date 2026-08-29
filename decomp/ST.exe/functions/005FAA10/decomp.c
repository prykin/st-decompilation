#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_00416270.
   Evidence: incoming_receiver_captures=1; receiver_accesses=9; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=4; single_call_corroborated_by_receiver_family */

undefined4 __thiscall
SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00416270::FUN_005faa10
          (RecoveredReceiver_00416270 *this,int param_1)

{
  AnonPointee_SubmarineTitans__Recovered__HiddenThis__RecoveredReceiver_00416270_02E6 *pAVar1;
  RecoveredReceiver_00416270 *pRVar2;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  InternalExceptionFrame local_54;
  RecoveredReceiver_00416270 *local_10;
  uint local_c;
  uint local_8;

  local_c = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pRVar2 = local_10;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    return local_c;
  }
  if (local_10->field_02E6 !=
      nullptr) {
    if (param_1 == 1) {
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         (PTR_00806774,CASE_1D,"rubb3",0xffffffff,0,1,0,nullptr);
      uVar5 = STField<uint>(puVar3,0xd);
      uVar4 = STField<uint>(puVar3,9);
      uVar7 = 8;
      uVar6 = 8;
    }
    else {
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         (PTR_00806774,CASE_1D,"bulb_tel",0xffffffff,0,1,0,
                          nullptr);
      uVar5 = STField<uint>(puVar3,0xd);
      uVar4 = STField<uint>(puVar3,9);
      uVar7 = 0x2f;
      uVar6 = 0x5a;
    }
    ST3DSMAPContext::sub_006E8660(pRVar2->field_0211,(int *)&local_8,1,0,uVar4,uVar5,uVar6,uVar7,0);
    ST3DSMAPContext::sub_006E98E0
              (pRVar2->field_0211,local_8,0,*(int *)puVar3,STField<int>(puVar3,0x21),1);
    ST3DSMAPContext::sub_006EA270(pRVar2->field_0211,local_8,0,0);
    pAVar1 = pRVar2->field_02E6;
    Library::Ourlib::ST3DSMAP::SprMove
              (pRVar2->field_0211,local_8,(float)pAVar1->field_0014 * _DAT_007904f8 * _DAT_007904f0,
               (float)pAVar1->field_0018 * _DAT_007904f8 * _DAT_007904f0,
               (float)pAVar1->field_001C * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    ST3DSMAPContext::sub_006E9EF0(pRVar2->field_0211,local_8,0,1,0,0,30000);
    Library::Ourlib::ST3DSMAP::SprShow(pRVar2->field_0211,local_8,0);
    pRVar2->field_02E6->field_0004 = local_8;
    g_currentExceptionFrame = local_54.previous;
    return 1;
  }
  g_currentExceptionFrame = local_54.previous;
  return local_c;
}

