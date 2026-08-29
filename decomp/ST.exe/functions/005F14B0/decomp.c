#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STManBasisC.
   Evidence: this_call_owners=[STManBasisC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall
STManBasisC::sub_005F14B0
          (STManBasisC *this,short param_1,short param_2,short param_3,byte param_4,short param_5)

{
  DArrayTy *pSVar1;
  int iVar2;
  int iVar1;
  short *psVar2;
  short local_20;
  short local_1e;
  short local_1c;
  byte local_1a;
  short local_19;
  uint local_17;
  undefined4 *local_13;
  int local_f;

  if (this->field_0038 == nullptr) {
    /* ST_CALLSITE[005F14CC]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/STManBasisC_field_0038DArray; source view only; no Ghidra override */
    pSVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x19,10);
    this->field_0038 = (STManBasisC_field_0038DArray *)pSVar1;
    if (pSVar1 == nullptr) {
      return -1;
    }
  }
  psVar2 = &local_20;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    psVar2[0] = 0;
    psVar2[1] = 0;
    psVar2 = psVar2 + 2;
  }
  *(undefined1 *)psVar2 = 0;
  local_1c = param_3;
  local_1e = param_2;
  local_20 = param_1;
  local_19 = param_5;
  local_1a = param_4;
  local_f = DAT_00811788;
  local_17 = g_playSystem_00802A38->field_00E4;

  local_13 = thunk_FUN_005f1e40((uint)param_4,(int)param_5,(short)(param_1 * 0xc9 + 100),
                                (short)(param_2 * 0xc9 + 100),(short)(param_3 * 200 + 100)
                               );
  if (local_13 == nullptr) {
    iVar1 = -1;
  }
  else {

    iVar2 = Library::DKW::TBL::DArrayAppend((DArrayTy *)this->field_0038,&local_20);
    iVar1 = iVar2 + 1;
    if (-1 < iVar1) {
      DAT_00811788 = DAT_00811788 + 1;
      return iVar1;
    }
  }
  return iVar1;
}

