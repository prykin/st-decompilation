#include "../../pseudocode_runtime.h"


void __fastcall FUN_0046d400(int *param_1,undefined4 param_2)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *in_stack_00000004;

  if (param_1[0x14a] == 4) {
    iVar1 = thunk_FUN_0048fa80((STBoatC *)param_1);
    if (iVar1 == 0) {
      /* ST_CALLSITE[0046D41E]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
      STBoatC::sub_00460360((STBoatC *)param_1);
      return;
    }
  }
  /* ST_CALLSITE[0046D42E]: CALL 0x004011d1; direct=004011D1 STBoatC::CreateGame */
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STBoatC::CreateGame((STBoatC *)param_1,in_stack_00000004);
  return;
}

