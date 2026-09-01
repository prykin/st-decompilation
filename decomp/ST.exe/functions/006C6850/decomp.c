#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00594B90 -> 006C6850 @ 00594C01; FSGSTy::OutChSlProc parameter param_6 | 00594EB0 ->
   006C6850 @ 00595089; address of FSGSTy::OutTRGlProc stack local local_8 at 0059506C | 005B67A0 ->
   006C6850 @ 005B680D; MMMObjTy::OutRGlProc parameter param_6 | 005B69F0 -> 006C6850 @ 005B6A5D;
   ChatGlassTy::OutChGlProc parameter param_6 | 005B9860 -> 006C6850 @ 005B9901;
   MMMObjTy::OutLstProc parameter param_6 | 005B99F0 -> 006C6850 @ 005B9A5D; MMMObjTy::OutEdProc
   parameter param_6 */

void FUN_006c6850(int param_1,int param_2,int param_3,int local_8,int param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;

  if (local_8 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = param_2 + 1 + local_8;
    local_8 = -local_8;
  }
  if (param_5 < 0) {
    param_3 = param_3 + 1 + param_5;
    param_5 = -param_5;
  }
  iVar3 = param_2 + -1 + local_8;
  iVar1 = param_3 + -1 + param_5;

  iVar2 = Library::DKW::DDX::FUN_006c53b0(param_1,param_2,param_3,iVar3 + -1,param_3,param_6);
  if (((iVar2 == 0) &&

      (iVar2 = Library::DKW::DDX::FUN_006c53b0(param_1,iVar3,param_3,iVar3,iVar1 + -1,param_6),
      iVar2 == 0)) &&

     (iVar3 = Library::DKW::DDX::FUN_006c53b0(param_1,iVar3,iVar1,param_2 + 1,iVar1,param_6),
     iVar3 == 0)) {

    Library::DKW::DDX::FUN_006c53b0(param_1,param_2,iVar1,param_2,param_3 + 1,param_6);
  }
  return;
}

