#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0061FE80 -> 00620DA0 @ 0061FFAF | 006202B0 -> 00620DA0 @ 00620392 | 00620A00 ->
   00620DA0 @ 00620ABA | 00620E40 -> 00620DA0 @ 00620EF8 | 006211E0 -> 00620DA0 @ 0062129A

   [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=5; incoming_this_accesses=3;
   incoming_edx_uses=2; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=5; owner_evidence_coverage=adequate */

undefined4 __thiscall
SndUnderAttMenegC::sub_00620DA0
          (SndUnderAttMenegC *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;

  iVar1 = 0;
  pcVar2 = &this->field_0020;
  do {
    if (*pcVar2 == '\0') {
      (&this->field_0020)[iVar1 * 0x1d] = 1;
      *(int *)((int)&this->field_0021 + iVar1 * 0x1d) = param_1;
      *(undefined4 *)((int)&this->field_0025 + iVar1 * 0x1d) = param_2;
      *(undefined4 *)((int)&this->field_0029 + iVar1 * 0x1d) = param_3;
      *(int *)((int)&this->field_002D + iVar1 * 0x1d) = this->field_001C * 10;
      *(uint *)((int)&this->field_0039 + iVar1 * 0x1d) = g_playSystem_00802A38->field_00E4;
      *(undefined4 *)((int)&this->field_0031 + iVar1 * 0x1d) = 0xf;
      *(float *)((int)&this->field_0035 + iVar1 * 0x1d) =
           (float)_DAT_0079cee0 / ((float)this->field_001C * (float)_DAT_0079cef0);
      return 1;
    }
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 0x1d;
  } while (iVar1 < 5);
  return 0;
}

