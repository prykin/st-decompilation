#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as
   SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00644410.
   Evidence: this_call_owners=[SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00644410];
   agreed_this_calls=1; incoming_this_accesses=11; incoming_edx_uses=0;
   incoming_stack_parameter_uses=6; direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0;
   attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00645F71 MOV CX,word ptr
   [EBP + 0xc]

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00645FA1 MOV DX,word ptr
   [EBP + 0x10]

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00644410 -> 00645F10 @ 00644D63; MOVSX at 00644D4B establishes signed source width 2 */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00644410::sub_00645F10
          (RecoveredReceiver_00644410 *this,RecoveredRecord_00645F10_DD339E8F *param_1,
          ushort param_2,ushort param_3,short param_4)

{
  uint uVar1;
  RecoveredRecord_00645F10_DD339E8F *pRVar2;
  uint local_60 [5];
  ushort local_4c;
  short local_4a;
  short local_48;
  ushort local_46;
  ushort local_44;
  short local_42;
  short local_40;
  short local_3e;
  short local_3c;
  ushort local_3a;
  uint local_38;
  byte local_34;
  uint local_33;
  ushort local_2f;
  byte local_c;
  short local_8;
  short local_6;

  pRVar2 = param_1;
  if (param_1 != nullptr) {
    memset(local_60, 0, 0x58); /* compiler bulk-zero initialization */
    local_60[3] = 1;
    local_60[2] = 1;
    local_60[1] = param_1->field_0024;
    local_60[0] = 0x28;
    thunk_FUN_00416270(param_1,(uint *)((int)&param_1 + 2),&local_6,&local_8);
    local_4c = STPiece<2,2>(param_1);
    local_2f = *(undefined2 *)&pRVar2[1].field_0xa;
    local_46 = param_2;
    local_48 = local_8;
    local_34 = this->field_025D;
    local_4a = local_6;
    local_33 = *(undefined4 *)&pRVar2->field_0x18;
    local_42 = param_4;
    uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
    local_44 = param_3;
    this->field_001C = uVar1;
    local_c = 1;
    local_3a = 0;
    local_40 = (short)((ulonglong)(uVar1 >> 0x10) % 0x3d) + this->field_024B + -0x1e;
    uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar1;
    local_3e = (short)((ulonglong)(uVar1 >> 0x10) % 0x3d) + this->field_024D + -0x1e;
    uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar1;
    local_3c = (short)((ulonglong)(uVar1 >> 0x10) % 0x3d) + this->field_024F + -0x1e;
    local_38 = this->field_0259;
    /* ST_CALLSITE[00646048]: CALL dword ptr [EAX + 0x8] */
    g_playSystem_00802A38->vfunc_8(0x106,nullptr,nullptr,(short)local_60,0);
  }
  return;
}

