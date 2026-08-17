#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
SndUnderAttMenegC::sub_00620670(SndUnderAttMenegC *this,int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int soundId;
  SoundPosition local_10;

  uVar1 = g_playSystem_00802A38->field_00E4;
  if (DAT_0080874d != param_3) {
    return;
  }
  if (this->field_00D9 <= uVar1) {
    /* ST_CALLSITE[006206B1]: CALL 0x00403af8; direct=00403AF8 SndUnderAttMenegC::sub_00620780 */
    uVar2 = sub_00620780(this,uVar1,param_1,param_2);
    if (((-1 < (int)uVar2) ||
        /* ST_CALLSITE[006206C6]: CALL 0x004052d1; direct=004052D1 SndUnderAttMenegC::sub_006208B0 */
        (uVar2 = sub_006208B0(this,uVar1,param_1,param_2,param_3), (int)uVar2 < 0)) && (uVar2 != 2))
    {
      return;
    }
    if (DAT_0080874e == '\x01') {
      soundId = 0x83;
    }
    else if (DAT_0080874e == '\x02') {
      soundId = 0x84;
    }
    else {
      if (DAT_0080874e != '\x03') {
        return;
      }
      soundId = 0x85;
    }
    local_10.unknown = 0;
    local_10.x = -1;
    local_10.y = -1;
    /* ST_CALLSITE[0062071B]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
    SoundClassTy::PlaySound((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,soundId,&local_10,0);
    this->field_00C1 = uVar1 + 0xfa;
    return;
  }
  return;
}

