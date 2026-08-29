#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=004FAEBC MOV ECX,dword ptr [EBP + 0xc];
   first-use mask

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004FAE90 -> 0054EDF0 @ 004FAF86 | 004FAE90 -> 006E68C0 @ 004FAF38 | 005449B0 ->
   004FAE90 @ 00547BF0; unproven partial register write at 00547BE7 */

void __thiscall CPanelTy::sub_004FAE90(CPanelTy *this,uint *param_1,ushort param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_0000000a;
  uint *local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar4 = this->field_004C;
  iVar1 = this->field_00A4;
  if (this->field_023F != CASE_2) {
    uVar3 = (uint)param_1 & 0xffff;
    uVar2 = (uint)param_2;
    if (((((iVar4 <= (int)uVar3) && ((int)uVar3 < this->field_0078 + iVar4)) &&
         (iVar1 <= (int)uVar2)) && (((int)uVar2 < this->field_00D0 + iVar1 && (DAT_00808784 == 0))))
       && ((DAT_00808788 == 0 && ((DAT_0080878c == 0 && (DAT_00808790 == 0)))))) {

      iVar4 = ST3DSMAPContext::sub_006E68C0
                        (g_sT3DSMAPContext_00807598,(uVar3 - iVar4) + -5,(uVar2 - iVar1) + -7,
                         (int *)&param_1,&local_8);
      if (iVar4 != 0) {
        local_10 = local_8;
        local_14 = param_1;
        /* ST_CALLSITE[004FAF5B]: CALL 0x0040512d; direct=0040512D STAllPlayersC::GetActiveCenter */
        iVar4 = STAllPlayersC::GetActiveCenter
                          (g_allPlayers_007FA174,nullptr,nullptr,&stack0x0000000a);
        if (-1 < iVar4) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_c = (int)in_stack_0000000a;
          if (local_c < 0) {
            local_c = 2;
          }
          /* ST_CALLSITE[004FAF86]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
          STPlaySystemC::sub_0054EDF0
                    (g_playSystem_00802A38,(undefined4 *)0x14,(uint *)&local_14,0,0xffffffff);
        }
      }
    }
  }
  return;
}

