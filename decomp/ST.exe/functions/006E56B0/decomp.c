#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as StartSystemTy.
   Evidence: this_call_owners=[StartSystemTy]; agreed_this_calls=4; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=174, used=0,
   unknown=0), and decompilation contains no value return */

void __thiscall StartSystemTy::sub_006E56B0(StartSystemTy *this,uint param_1)

{
  AnonPointee_StartSystemTy_000C *pAVar1;
  uint uVar2;
  int iVar3;
  byte local_28 [16];
  uint local_18;
  undefined4 *local_8;

  uVar2 = param_1;
  local_8 = nullptr;

  iVar3 = sub_006E5360(this,param_1,(int *)&param_1,&local_8);
  if (iVar3 == 0) {
    local_18 = 3;
    /* ST_CALLSITE[006E56E8]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
    STStructuralVirtualCall<void>(local_8, 0x0, local_28);
  }

  iVar3 = sub_006E5360(this,uVar2,(int *)&param_1,&local_8);
  if (iVar3 == 0) {

    DArrayRemoveAt(this->field_0010,param_1);
    AppClassTy::DeleteObject(this->field_0018,uVar2);
    for (pAVar1 = this->field_000C; pAVar1 != nullptr;
        pAVar1 = (AnonPointee_StartSystemTy_000C *)pAVar1->field_0000) {
      uVar2 = pAVar1->field_0004;
      if ((param_1 <= uVar2) && (uVar2 != 0)) {
        pAVar1->field_0004 = uVar2 - 1;
      }
    }
  }
  return;
}

