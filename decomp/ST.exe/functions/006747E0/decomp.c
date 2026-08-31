#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void FUN_006747e0(AnonShape_006747E0_C06E010E *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  cVar1 = PTR_0085755c[DAT_00811914];
  PTR_0085755c[DAT_00811914] = '\0';
  iVar3 = 0;
  iVar5 = param_2 + -1;
  if (iVar5 < 0) {
    PTR_0085755c[DAT_00811914] = cVar1;
    return;
  }
  do {
    iVar4 = iVar5 + iVar3 >> 1;
    /* ST_CALLSITE[00674822]: CALL dword ptr [0x007d2d1c] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (*(code *)PTR_thunk_FUN_00673160_007d2d1c)
                      (PTR_0085755c + DAT_0081190c,param_1[iVar4].field_0000);
    if (iVar2 < 1) {
      if (-1 < iVar2) {
        DAT_007d2d18 = param_1[iVar4].field_0004;
        PTR_0085755c[DAT_00811914] = cVar1;
        return;
      }
      iVar5 = iVar4 + -1;
    }
    else {
      iVar3 = iVar4 + 1;
    }
  } while (iVar3 <= iVar5);
  PTR_0085755c[DAT_00811914] = cVar1;
  return;
}

