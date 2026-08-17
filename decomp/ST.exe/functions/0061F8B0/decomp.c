#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=1,
   ignored=2, unknown=0

   [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=3; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
SndUnderAttMenegC::sub_0061F8B0(SndUnderAttMenegC *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  SoundPosition local_14;
  uint local_8;

  local_8 = g_playSystem_00802A38->field_00E4;
  if ((((DAT_0080874d == param_3) && (this->field_00B5 <= local_8)) &&
      (((param_1 + 1 < g_sT3DSMAPContext_00807598->field_0048 ||
        (((g_sT3DSMAPContext_00807598->field_0058 < param_1 + -1 ||
          (param_2 + 1 < g_sT3DSMAPContext_00807598->field_0044)) ||
         (g_sT3DSMAPContext_00807598->field_0054 < param_2 + -1)))) ||
       (iVar1 = FUN_006ddbd0(), iVar1 == 0)))) &&
     /* ST_CALLSITE[0061F933]: CALL 0x00402b8f; direct=00402B8F SndUnderAttMenegC::sub_0061FA40 */
     (((uVar2 = sub_0061FA40(this,local_8,param_1,param_2), (int)uVar2 < 0 &&
       /* ST_CALLSITE[0061F948]: CALL 0x00405cfe; direct=00405CFE SndUnderAttMenegC::sub_0061FB70 */
       (uVar2 = sub_0061FB70(this,local_8,param_1,param_2,param_3), -1 < (int)uVar2)) ||
      (uVar2 == 2)))) {
    if (DAT_0080874e == '\x01') {
      iVar1 = 0x3b;
    }
    else if (DAT_0080874e == '\x02') {
      iVar1 = 0x3c;
    }
    else {
      if (DAT_0080874e != '\x03') {
        return;
      }
      iVar1 = 0x3d;
    }
    local_14.unknown = 0;
    local_14.x = -1;
    local_14.y = -1;
    /* ST_CALLSITE[0061F9A1]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
    SoundClassTy::PlaySound((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,iVar1,&local_14,0);
    thunk_FUN_0052af50(1,(float)param_1 * _DAT_007904f8 + _DAT_007904f4,
                       (float)param_2 * _DAT_007904f8 + _DAT_007904f4);
    this->field_00B5 = local_8 + 0xfa;
  }
  return;
}

