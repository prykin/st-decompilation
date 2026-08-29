#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall SndUnderAttMenegC::sub_00621780(SndUnderAttMenegC *this,uint param_1)

{
  SndUnderAttMenegC_field_010ADArray *pSVar1;
  char *text;
  int soundId;
  byte *puVar2;
  uint uVar3;
  SoundPosition local_10;

  pSVar1 = this->field_010A;
  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
  if ((param_1 < pSVar1->count) &&
     (puVar2 = &pSVar1->data->field_0000 + pSVar1->elementSize * param_1,
     puVar2 != nullptr)) {
    switch(*(undefined4 *)(puVar2 + 9)) {
    case 1:
      if (DAT_0080874e == '\x01') {
        soundId = 0x3e;
      }
      else if (DAT_0080874e == '\x02') {
        soundId = 0x3f;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        soundId = 0x40;
      }
      break;
    case 2:
      if (DAT_0080874e == '\x01') {
        soundId = 0x41;
      }
      else if (DAT_0080874e == '\x02') {
        soundId = 0x42;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        soundId = 0x43;
      }
      break;
    case 3:
      if (DAT_0080874e == '\x01') {
        soundId = 0x44;
      }
      else if (DAT_0080874e == '\x02') {
        soundId = 0x45;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        soundId = 0x46;
      }
      break;
    case 4:
      if (DAT_0080874e == '\x01') {
        soundId = 0x47;
      }
      else if (DAT_0080874e == '\x02') {
        soundId = 0x48;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        soundId = 0x49;
      }
      break;
    case 5:
      if (DAT_0080874e == '\x01') {
        soundId = 0x4a;
      }
      else if (DAT_0080874e == '\x02') {
        soundId = 0x4b;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        soundId = 0x4c;
      }
      break;
    case 6:
      if (DAT_0080874e == '\x01') {
        soundId = 0x4d;
      }
      else if (DAT_0080874e == '\x02') {
        soundId = 0x4e;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        soundId = 0x4f;
      }
      break;
    case 7:
      if (DAT_0080874e == '\x01') {
        soundId = 0x50;
      }
      else if (DAT_0080874e == '\x02') {
        soundId = 0x51;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        soundId = 0x52;
      }
      break;
    case 8:
      uVar3 = 8;
      /* ST_CALLSITE[0062191A]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/PopUpTy; source view only; no Ghidra override */
      text = LoadResourceString(0x274a,g_hINSTANCE_00807618);
      /* ST_CALLSITE[00621926]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
      PopUpTy::sub_0052D320(g_popUp_008016D8,text,uVar3);
      if (DAT_0080874e == '\x01') {
        soundId = 0xba;
      }
      else if (DAT_0080874e == '\x02') {
        soundId = 0xbb;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        soundId = 0xbc;
      }
      break;
    default:
      goto switchD_006217ba_default;
    }
    local_10.unknown = 0;
    local_10.x = -1;
    local_10.y = -1;
    /* ST_CALLSITE[00621972]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
    SoundClassTy::PlaySound((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,soundId,&local_10,0);
    *puVar2 = 1;
    *(uint *)(puVar2 + 1) = g_playSystem_00802A38->field_00E4;
    this->field_0106 = g_playSystem_00802A38->field_00E4;
  }
switchD_006217ba_default:
  return;
}

