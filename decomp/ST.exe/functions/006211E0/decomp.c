#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
SndUnderAttMenegC::sub_006211E0(SndUnderAttMenegC *this,int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int soundId;
  SoundPosition local_10;

  uVar1 = g_playSystem_00802A38->field_00E4;
  if (DAT_0080874d != param_3) {
    return;
  }
  if (this->field_00FD <= uVar1) {
    /* ST_CALLSITE[00621221]: CALL 0x004047d7; direct=004047D7 SndUnderAttMenegC::sub_00621300 */
    uVar2 = sub_00621300(this,uVar1,param_1,param_2);
    if (((-1 < (int)uVar2) ||
        /* ST_CALLSITE[00621236]: CALL 0x004030d0; direct=004030D0 SndUnderAttMenegC::sub_00621430 */
        (uVar2 = sub_00621430(this,uVar1,param_1,param_2,param_3), (int)uVar2 < 0)) && (uVar2 != 2))
    {
      return;
    }
    if (DAT_0080874e == '\x01') {
      soundId = 0xaa;
    }
    else if (DAT_0080874e == '\x02') {
      soundId = 0xab;
    }
    else {
      if (DAT_0080874e != '\x03') {
        return;
      }
      soundId = 0xac;
    }
    local_10.x = -1;
    local_10.y = -1;
    local_10.unknown = 0;
    /* ST_CALLSITE[00621289]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
    SoundClassTy::PlaySound((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,soundId,&local_10,0);
    /* ST_CALLSITE[0062129A]: CALL 0x00405d62; direct=00405D62 SndUnderAttMenegC::sub_00620DA0 */
    sub_00620DA0(this,param_1,param_2,0x8e);
    this->field_00FD = uVar1 + 0xfa;
    return;
  }
  return;
}

