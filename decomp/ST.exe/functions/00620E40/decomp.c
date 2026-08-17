#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
SndUnderAttMenegC::sub_00620E40(SndUnderAttMenegC *this,int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int soundId;
  SoundPosition local_10;

  uVar1 = g_playSystem_00802A38->field_00E4;
  if (DAT_0080874d == param_3) {
    return;
  }
  if (this->field_00F1 <= uVar1) {
    /* ST_CALLSITE[00620E80]: CALL 0x00403b7a; direct=00403B7A SndUnderAttMenegC::sub_00620F60 */
    uVar2 = sub_00620F60(this,uVar1,param_1,param_2);
    if (((-1 < (int)uVar2) ||
        /* ST_CALLSITE[00620E95]: CALL 0x00404b10; direct=00404B10 SndUnderAttMenegC::sub_00621090 */
        (uVar2 = sub_00621090(this,uVar1,param_1,param_2,param_3), (int)uVar2 < 0)) && (uVar2 != 2))
    {
      return;
    }
    if (DAT_0080874e == '\x01') {
      soundId = 0x8f;
    }
    else if (DAT_0080874e == '\x02') {
      soundId = 0x90;
    }
    else {
      if (DAT_0080874e != '\x03') {
        return;
      }
      soundId = 0x91;
    }
    local_10.unknown = 0;
    local_10.x = -1;
    local_10.y = -1;
    /* ST_CALLSITE[00620EEA]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
    SoundClassTy::PlaySound((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,soundId,&local_10,0);
    /* ST_CALLSITE[00620EF8]: CALL 0x00405d62; direct=00405D62 SndUnderAttMenegC::sub_00620DA0 */
    sub_00620DA0(this,param_1,param_2,0x28);
    this->field_00F1 = uVar1 + 0xfa;
    return;
  }
  return;
}

