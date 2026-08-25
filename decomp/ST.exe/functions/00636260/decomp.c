#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00636260.
   Evidence: incoming_receiver_captures=1; receiver_accesses=16; incoming_edx_uses=0; calls=2;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[28];
   expected_stack=28; receiver_family_members=2; adopt_untyped_existing_thiscall */

undefined4 __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00636260::FUN_00636260
          (AnonReceiver_00636260 *this,uint param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  int iVar1;
  DArrayTy *array;
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar5;
  longlong lVar6;
  undefined4 local_50 [13];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  AnonReceiver_00636260 *local_8;

  *(uint *)&this->field_0xc = param_1;
  *(int *)&this->field_0x10 = param_2;
  *(int *)&this->field_0x14 = param_3;
  *(int *)&this->field_0x18 = param_4;
  *(int *)&this->field_0x1c = param_4;
  *(uint *)&this->field_0x30 = g_playSystem_00802A38->field_00E4;
  local_8 = this;
  /* ST_CALLSITE[00636299]: CALL 0x00402162; direct=00402162 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00636260::sub_00636FC0 */
  iVar1 = sub_00636FC0(this);
  *(int *)&this->field_0x28 = iVar1;
  *(int *)&this->field_0x4 = param_7;
  if (param_7 != 0) {
    if (param_7 == 1) {
      *(undefined4 *)&this->field_0x20 = 0x11;
      goto LAB_006362c5;
    }
    if (param_7 != 2) goto LAB_006362c5;
  }
  *(undefined4 *)&this->field_0x20 = 0x16;
LAB_006362c5:
  array = Library::DKW::TBL::DArrayCreate(nullptr,param_5 * param_6,0x32,10);
  *(DArrayTy **)&this->field_0x2c = array;
  if ((array != nullptr) && (0 < param_4)) {
    *(int *)this = param_5;
    *(int *)&this->field_0x8 = param_6;
    memset(local_50, 0, 0x32); /* compiler bulk-zero initialization */
    Library::DKW::TBL::DArrayPut(array,param_5 * param_6 - 1,local_50);
    auto param_1_after_write = 0; /* compiler stack-slot lifetime split */
    local_c = _DAT_0079c5a4 / (float)param_5;
    if (0 < param_5) {
      do {
        fcos((float10)(int)param_1_after_write * (float10)local_c);
        fsin((float10)(int)param_1_after_write * (float10)local_c);
        lVar6 = Library::MSVCRT::__ftol();
        local_18 = (undefined4)lVar6;
        lVar6 = Library::MSVCRT::__ftol();
        local_1c = (undefined4)lVar6;
        lVar6 = Library::MSVCRT::__ftol();
        local_10 = (undefined4)lVar6;
        lVar6 = Library::MSVCRT::__ftol();
        local_14 = (undefined4)lVar6;
        if (0 < param_6) {
          auto param_4_after_write = param_6; /* compiler stack-slot lifetime split */
          uVar5 = param_1_after_write;
          do {
            iVar2 = *(int *)&this->field_0x2c;
            if (uVar5 < STField<uint>(iVar2,0xC)) {
              piVar3 = (int *)(STField<int>(iVar2,0x8) * uVar5 + STField<int>(iVar2,0x1C));
            }
            else {
              piVar3 = nullptr;
            }
            *piVar3 = param_7;
            if (*(int *)&local_8->field_0x28 == 0) {
              piVar3[1] = -1;
            }
            else {
              uVar1 = thunk_FUN_006364b0(*(int *)&local_8->field_0x4);
              piVar3[1] = uVar1;
            }
            STField<undefined4>(piVar3,0x12) = local_14;
            STField<undefined4>(piVar3,0xe) = local_10;
            STField<undefined4>(piVar3,0x26) = local_18;
            STField<int>(piVar3,0x22) = param_6;
            STField<int>(piVar3,0x16) = param_3;
            uVar5 = uVar5 + param_5;
            param_4_after_write = param_4_after_write + -1;
            piVar3[2] = 0;
            STField<undefined1>(piVar3,0xd) = 0;
            STField<undefined4>(piVar3,0x1a) = 0;
            STField<undefined4>(piVar3,0x1e) = 0;
            STField<undefined4>(piVar3,0x2a) = local_1c;
            STField<undefined4>(piVar3,0x2e) = 0;
            this = local_8;
          } while (param_4_after_write != 0);
        }
        param_1_after_write = param_1_after_write + 1;
      } while ((int)param_1_after_write < param_5);
    }
  }
  return 0;
}

