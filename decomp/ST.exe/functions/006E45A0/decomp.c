#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 006E45A0 returns return of FUN_006e4540 @ 006E45B1 */

int __thiscall FUN_006e45a0(void *this,int param_1)

{
  int iVar1;

  iVar1 = Library::Ourlib::SAPP::FUN_006e4540(STField<DArrayTy *>(this,0x10),param_1);
  return iVar1;
}

