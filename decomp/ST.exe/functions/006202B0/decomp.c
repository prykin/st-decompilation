#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
SndUnderAttMenegC::sub_006202B0
          (SndUnderAttMenegC *this,int param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  SoundPosition local_10;

  uVar1 = g_playSystem_00802A38->field_00E4;
  if (DAT_0080874d == param_4) {
    return;
  }
  if (uVar1 < this->field_00CD) {
    return;
  }
  if (DAT_0080874e == '\x01') {
    iVar3 = 0x40;
  }
  else if (DAT_0080874e == '\x02') {
    iVar3 = 0x8f;
  }
  else {
    if (DAT_0080874e != '\x03') goto LAB_0062030e;
    iVar3 = 0x4d;
  }

  thunk_FUN_004e60d0((uint)DAT_0080874d,iVar3);
LAB_0062030e:
  /* ST_CALLSITE[0062031A]: CALL 0x00404e8f; direct=00404E8F SndUnderAttMenegC::sub_006203F0 */
  uVar2 = sub_006203F0(this,uVar1,param_1,param_2);
  if (((-1 < (int)uVar2) ||
      /* ST_CALLSITE[0062032F]: CALL 0x0040152d; direct=0040152D SndUnderAttMenegC::sub_00620520 */
      (uVar2 = sub_00620520(this,uVar1,param_1,param_2,param_4), (int)uVar2 < 0)) && (uVar2 != 2)) {
    return;
  }
  if (DAT_0080874e == '\x01') {
    iVar3 = 0x80;
  }
  else if (DAT_0080874e == '\x02') {
    iVar3 = 0x81;
  }
  else {
    if (DAT_0080874e != '\x03') {
      return;
    }
    iVar3 = 0x82;
  }
  local_10.unknown = 0;
  local_10.x = -1;
  local_10.y = -1;
  /* ST_CALLSITE[00620384]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
  SoundClassTy::PlaySound((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,iVar3,&local_10,0);
  /* ST_CALLSITE[00620392]: CALL 0x00405d62; direct=00405D62 SndUnderAttMenegC::sub_00620DA0 */
  sub_00620DA0(this,param_1,param_2,0x28);
  this->field_00C1 = uVar1 + 0xfa;
  return;
}

