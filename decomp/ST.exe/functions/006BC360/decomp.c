#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0055DCD0 -> 006BC360 @ 0055DD30

   [STPrototypeApplier] Propagated return.
   Evidence: 006BC360 returns return of Library::DKW::LIB::FUN_006aac70 @ 006BC38D | 006BC360
   returns return of Library::DKW::LIB::FUN_006aac70 @ 006BC3D2 */

int FUN_006bc360(ushort *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  byte *puVar2;
  int iVar3;
  byte *puVar4;
  iVar1 = FUN_006b4fe0(param_1);
  if ((param_2 == nullptr) &&
     (param_2 = Library::DKW::LIB::MemAlloc(0x400), param_2 == nullptr)) {
    return 0;
  }
  memset(param_2, 0, 0x400); /* compiler bulk-zero initialization */
  if (0 < iVar1) {
    puVar4 = (undefined1 *)((int)param_2 + 2);
    puVar2 = (undefined1 *)((int)param_1 + 0x29);
    iVar3 = iVar1;
    do {
      puVar4[-2] = puVar2[1];
      puVar4[-1] = *puVar2;
      *puVar4 = puVar2[-1];
      puVar4 = puVar4 + 4;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + 4;
    } while (iVar3 != 0);
  }
  if (param_3 != nullptr) {
    *param_3 = iVar1;
  }
  return (int)param_2;
}

