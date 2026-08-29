#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_00636260.
   Evidence: incoming_receiver_captures=1; receiver_accesses=16; incoming_edx_uses=0; calls=2;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[28];
   expected_stack=28; receiver_family_members=2; adopt_untyped_existing_thiscall */

undefined4 __thiscall
SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00636260::FUN_00636260
          (RecoveredReceiver_00636260 *this,uint param_1,int param_2,int param_3,int param_4,
          int param_5,int param_6,int param_7)

{
  int iVar1;
  DArrayTy *pDVar1;
  int iVar2;
  int *piVar3;
  uint uVar5;
  longlong lVar6;
  uint local_50 [13];
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  float local_c;
  RecoveredReceiver_00636260 *local_8;

  this->field_000C = param_1;
  this->field_0010 = param_2;
  this->field_0014 = param_3;
  this->field_0018 = param_4;
  this->field_001C = param_4;
  this->field_0030 = g_playSystem_00802A38->field_00E4;
  local_8 = this;
  /* ST_CALLSITE[00636299]: CALL 0x00402162; direct=00402162 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00636260::sub_00636FC0 */
  iVar1 = sub_00636FC0(this);
  this->field_0028 = iVar1;
  this->field_0004 = param_7;
  if (param_7 != 0) {
    if (param_7 == 1) {
      this->field_0020 = 0x11;
      goto LAB_006362c5;
    }
    if (param_7 != 2) goto LAB_006362c5;
  }
  this->field_0020 = 0x16;
LAB_006362c5:
  pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,param_5 * param_6,0x32,10);
  this->field_002C = pDVar1;
  if ((pDVar1 != nullptr) && (0 < param_4)) {
    this->field_0000 = param_5;
    this->field_0008 = param_6;
    memset(local_50, 0, 0x32); /* compiler bulk-zero initialization */

    Library::DKW::TBL::DArrayPut(pDVar1,param_5 * param_6 - 1,local_50);
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
            pDVar1 = this->field_002C;
            if (uVar5 < pDVar1->count) {
              piVar3 = DArrayAt<int>(pDVar1, uVar5);
            }
            else {
              piVar3 = nullptr;
            }
            *piVar3 = param_7;
            if (local_8->field_0028 == 0) {
              piVar3[1] = -1;
            }
            else {

              iVar2 = thunk_FUN_006364b0(local_8->field_0004);
              piVar3[1] = iVar2;
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

