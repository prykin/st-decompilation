#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 006D10F0 returns return of Library::DKW::LIB::FUN_006aac70 @ 006D11BB | 006D10F0
   returns return of Library::DKW::LIB::FUN_006aac70 @ 006D11E2 */

int FUN_006d10f0(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  uint size;
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;

  if (0x100 < (int)param_4) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = 0;
  }
  uVar2 = param_4 * 4 + 0x28;
  iVar4 = (param_1 * param_3 + 0x1fU >> 3 & 0x1ffffffc) * param_2;
  size = uVar2;
  if (param_5 != 0) {
    size = uVar2 + iVar4;
  }
  puVar1 = Library::DKW::LIB::MemAlloc(size);
  if (puVar1 != nullptr) {
    puVar5 = puVar1;
    for (uVar2 = uVar2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar1[2] = param_2;
    puVar1[1] = param_1;
    puVar1[5] = iVar4;
    *puVar1 = 0x28;
    *(undefined2 *)(puVar1 + 3) = 1;
    STField<short>(puVar1,0xe) = (short)param_3;
    puVar1[4] = 0;
    puVar1[8] = (0xf < param_3) - 1 & param_4;
    if (param_4 == 3) {
      if (param_3 == 0x10) {
        puVar1[10] = 0xf800;
        puVar1[0xb] = 0x7e0;
        puVar1[0xc] = 0x1f;
        puVar1[4] = 3;
        return (int)puVar1;
      }
      if (param_3 == 0x20) {
        puVar1[10] = 0xff0000;
        puVar1[0xb] = 0xff00;
        puVar1[0xc] = 0xff;
        puVar1[4] = 3;
      }
    }
  }
  return (int)puVar1;
}

