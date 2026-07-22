#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00644410.
   Evidence: this_call_owners=[SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00644410];
   agreed_this_calls=1; incoming_this_accesses=11; incoming_edx_uses=0;
   incoming_stack_parameter_uses=6; direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0;
   attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00644410::sub_00645F10
          (AnonReceiver_00644410 *this,void *param_1,undefined2 param_2,undefined2 param_3,
          undefined2 param_4)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_60 [5];
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  short local_40;
  short local_3e;
  short local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_33;
  undefined2 local_2f;
  undefined1 local_c;
  undefined2 local_8;
  undefined2 local_6;

  pvVar2 = param_1;
  if (param_1 != (void *)0x0) {
    memset(local_60, 0, 0x58); /* compiler bulk-zero initialization */
    local_60[3] = 1;
    local_60[2] = 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_60[1] = *(undefined4 *)((int)param_1 + 0x24);
    local_60[0] = 0x28;
    thunk_FUN_00416270(param_1,(undefined2 *)((int)&param_1 + 2),(int *)&local_6,(int *)&local_8);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_4c = param_1._2_2_;
    local_2f = *(undefined2 *)((int)pvVar2 + 0x32);
    local_46 = param_2;
    local_48 = local_8;
    local_34 = this->field_0x25d;
    local_4a = local_6;
    local_33 = *(undefined4 *)((int)pvVar2 + 0x18);
    local_42 = param_4;
    uVar1 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
    local_44 = param_3;
    *(uint *)&this->field_0x1c = uVar1;
    local_c = 1;
    local_3a = 0;
    local_40 = (short)((ulonglong)(uVar1 >> 0x10) % 0x3d) + *(short *)&this->field_0x24b + -0x1e;
    uVar1 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this->field_0x1c = uVar1;
    local_3e = (short)((ulonglong)(uVar1 >> 0x10) % 0x3d) + *(short *)&this->field_0x24d + -0x1e;
    uVar1 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this->field_0x1c = uVar1;
    local_3c = (short)((ulonglong)(uVar1 >> 0x10) % 0x3d) + *(short *)&this->field_0x24f + -0x1e;
    local_38 = *(undefined4 *)&this->field_0x259;
    (*g_playSystem_00802A38->vtable->vfunc_08)(0x106,0,0,local_60,0);
  }
  return;
}

