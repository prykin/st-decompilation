#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STGroupBoatC.
   Evidence: this_call_owners=[STGroupBoatC]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=2; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void __thiscall
STGroupBoatC::sub_0049A500
          (STGroupBoatC *this,undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  uint uVar1;
  STGameObjC *this_00;
  uint index;
  short sVar2;
  short sVar4;
  int local_1c;
  int local_18;
  int local_14;
  byte local_10 [4];
  uint local_c;
  int local_8;
  int iVar3;
  int iVar5;

  index = 0;
  uVar1 = this->field_0029->count;
  if (this->field_0027 != 0) {
    iVar3 = 0;
    sVar2 = 0;
    iVar5 = 0;
    sVar4 = 0;
    local_8 = 0;
    local_c = 0;
    if (uVar1 != 0) {
      do {

        DArrayGetElement(this->field_0029,index,local_10);
        if (STPiece<0,2>(local_10) != 0xffff) {
          /* ST_CALLSITE[0049A550]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
          this_00 = STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,this->field_0024,STPiece<0,2>(local_10),CASE_1);
          /* ST_CALLSITE[0049A563]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
          STFishC::sub_004162B0
                    ((STFishC *)this_00,(short *)&local_14,(short *)&local_18,(short *)&local_1c);
          iVar5 = iVar5 + local_14;
          iVar3 = iVar3 + local_18;
          local_8 = local_8 + local_1c;
        }
        sVar4 = (short)iVar5;
        sVar2 = (short)iVar3;
        local_c = local_c + 1;
        index = local_c & 0xffff;
      } while (index < uVar1);
    }
    if (param_1 != nullptr) {
      *param_1 = (short)((int)sVar4 / (int)(uint)(ushort)this->field_0027);
    }
    if (param_2 != nullptr) {
      *param_2 = (short)((int)sVar2 / (int)(uint)(ushort)this->field_0027);
    }
    if (param_3 != nullptr) {
      *param_3 = (short)((short)local_8 / (int)(uint)(ushort)this->field_0027);
    }
  }
  return;
}

