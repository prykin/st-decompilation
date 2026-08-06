#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=59;
   incoming_edx_uses=0; incoming_stack_parameter_uses=29; direct_non_thunk_callers=3;
   incoming_ecx_receiver_callers=1; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004A9540 -> 006DBD20 @ 004A9724; data at 00807598 | 006DC050 -> 006DBD20 @ 006DC10A;
   ST3DSMAPContext::sub_006DC050 this */

void __thiscall
ST3DSMAPContext::sub_006DBD20
          (ST3DSMAPContext *param_1,AnonPointee_ST3DSMAPContext_0004 *param_2,uint param_3,
          undefined4 param_4,int param_5,int param_6,double param_7,double param_8,double param_9,
          double param_10)

{
  void *pvVar1;
  int iVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  float10 fVar3;
  longlong lVar4;
  int local_40;
  int local_3c;
  int local_30;
  int local_2c;
  float local_20 [3];
  double local_14;
  double local_c;

  param_1->field_0004 = param_2;
  param_1->field_0020 = param_3;
  param_1->field_0024 = param_4;
  param_1->field_0028 = param_5;
  iVar2 = param_5 * param_6;
  param_1->field_002C = param_6;
  pvVar1 = Library::DKW::LIB::MemRealloc(param_1->field_0008,iVar2 + 0x18);
  param_1->field_0008 = pvVar1;
  param_1->field_000C = ((int)pvVar1 - 1U ^ param_3) & 7 ^ (int)pvVar1 + 7U;
  if (param_1->field_0124 == 1) {
    pvVar1 = Library::DKW::LIB::MemRealloc(param_1->field_0010,iVar2 + 0x10);
    param_1->field_0010 = pvVar1;
  }
  else {
    pvVar1 = Library::DKW::LIB::MemRealloc(param_1->field_0010,iVar2 * 2 + 0x10);
    param_1->field_0010 = pvVar1;
    if (((param_1->field_0144 != 0) && (iVar2 = param_1->field_0174, 0 < iVar2)) &&
       (iVar2 < param_1->field_002C)) {
      pvVar1 = Library::DKW::LIB::MemRealloc(param_1->field_001C,param_1->field_0028 * iVar2);
      param_1->field_001C = pvVar1;
    }
  }
  local_14 = param_8 - param_7;
  param_1->field_02F0 = 100;
  param_1->field_0014 = (ushort *)((int)param_1->field_0010 + 8);
  param_1->field_02F4 = 100;
  param_1->field_00F8 = local_14 / (double)param_5;
  local_c = param_10 - param_9;
  param_1->field_0100 = local_c / (double)param_6;
  param_1->field_00E8 = local_14 / (double)param_5;
  param_1->field_00F0 = local_c / (double)param_6;
  param_1->field_010C = _DAT_0079df78 / (param_1->field_011C - param_1->field_0114);
  lVar4 = Library::MSVCRT::__ftol();
  param_1->field_02E4 = (int)lVar4;
  Library::Ourlib::STREND::FUN_006dd660(param_1,0,0,param_5,param_6);
  Library::Ourlib::STREND::FUN_006dd6e0
            (param_1,STPiece<0,4>(param_7),STPiece<4,4>(param_7),STPiece<0,4>(param_8),STPiece<4,4>(param_8),STPiece<0,4>(param_9),
             STPiece<4,4>(param_9),STPiece<0,4>(param_10),STPiece<4,4>(param_10));
  sub_006DD610(param_1,(-(uint)(param_1->field_0124 != 1) & 0xfffffffc) + 4,param_1->field_0098,
               param_1->field_00A0);
  if ((param_1->field_0124 == 0) || (param_1->field_0124 == 10)) {
    local_20[0] = 0.0;
    local_20[1] = 0.0;
    local_20[2] = 0.0;
    sub_006E25D0(param_1,&local_40,local_20,0.0,0.0,0.0,1);
    sub_006E25D0(param_1,&local_30,local_20,0.0,0.0,1.0,1);
    param_1->field_0108 = local_2c - local_3c;
  }
  param_1->field_02D8 = 1;
  param_1->field_02DC = 0;
  param_1->field_0140 = nullptr;
  param_1->field_013C = 0;
  if (param_1->field_0358 != 0) {
    *(AnonPointee_ST3DSMAPContext_0280 **)(param_1->field_0358 + 0x280) = param_1->field_0280;
    param_1->field_0368 = param_1->field_00C8 / (double)param_1->field_0380;
    lVar4 = Library::MSVCRT::__ftol();
    iVar2 = (int)lVar4;
    param_1->field_0370 = iVar2;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    fVar3 = (float10)iVar2 * extraout_ST0;
    param_1->field_0360 = (double)fVar3;
    sub_006DBD20((ST3DSMAPContext *)param_1->field_0358,nullptr,0,0,
                 iVar2,iVar2,(double)(fVar3 * (float10)_DAT_0079df58),
                 (double)(fVar3 * (float10)_DAT_007901c0),(double)(fVar3 * (float10)_DAT_0079df58),
                 (double)(fVar3 * (float10)_DAT_007901c0));
    iVar2 = param_1->field_0358;
    param_1->field_038C = *(undefined4 *)(iVar2 + 0xc);
    param_1->field_0390 = *(undefined4 *)(iVar2 + 0x14);
    param_1->field_037C = *(undefined4 *)(iVar2 + 0x28);
    param_1->field_0374 = -30000;
    param_1->field_0378 = -30000;
    *(undefined4 *)(iVar2 + 0x370) = param_1->field_0370;
    *(undefined4 *)(param_1->field_0358 + 0x134) = 1;
  }
  return;
}

