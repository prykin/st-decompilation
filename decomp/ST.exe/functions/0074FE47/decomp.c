#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_stack_arity_expansion target=function:-1: prototype=int
   __stdcall FUN_0074fe47(AnonShape_0074FE47_5517BCCF * param_1, double param_2)
   previous_return_type=/int Evidence: every machine RET purges exactly 12 explicit stack bytes
   while the current signature describes 4; every incoming byte is read before an overlapping
   listing write; newly exposed x87 double slot(s)=[12]; inferred=[EBP+0xC=/double]; sites=0074FE4A
   FLD double ptr [EBP + 0xc] | 0074FE5B MOV ESI,dword ptr [EBP + 0x8]; ret_sites=0074FEA1 RET 0xc
    */

int FUN_0074fe47(AnonShape_0074FE47_5517BCCF *param_1,double param_2)

{
  int iVar1;
  longlong lVar2;

  lVar2 = Library::MSVCRT::__ftol();
  iVar1 = FUN_0074fea4((void *)param_1->field_0004,(uint)lVar2,(int)((ulonglong)lVar2 >> 0x20),
                       param_1->field_0024);
  if (iVar1 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*(int *)param_1->field_0004 + 0xc))(&param_1[-1].field_0x1c);
    if (-1 < iVar1) {
      param_1->field_000C = (int)lVar2;
      param_1->field_0010 = (int)((ulonglong)lVar2 >> 0x20);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*(int *)param_1->field_0004 + 8))();
    }
  }
  else {
    iVar1 = -0x7ffbfdcd;
  }
  return iVar1;
}

