#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0062F940 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 0062EB26 */

byte * __thiscall FUN_0062f940(void *this,uint *param_1)

{
  byte *allocation;
  int *piVar1;
  byte *pbVar2;
  int *piVar3;
  byte *puVar4;
  int iVar5;
  byte *pbVar6;
  uint local_c;
  int local_8;

  local_8 = 0;
  *param_1 = 0;
  local_c = 0x3d;
  allocation = Library::DKW::LIB::MemAlloc(0x3d);
  if (allocation != nullptr) {
    allocation[0] = 0xbe;
    allocation[1] = 0;
    allocation[2] = 0;
    allocation[3] = 0;
    allocation[4] = 0xff;
    allocation[5] = 0;
    allocation[6] = 0;
    allocation[7] = 0;
    allocation[8] = 0;
    allocation[9] = 0;
    allocation[10] = 0;
    allocation[0xb] = 0;
    allocation[0xc] = 2;
    allocation[0xd] = 0;
    allocation[0xe] = 0;
    allocation[0xf] = 0;
    iVar5 = 5;
    *(undefined4 *)(allocation + 0x14) = STField<undefined4>(this,0x1d5);
    *(undefined4 *)(allocation + 0x18) = STField<undefined4>(this,0x1d9);
    *(undefined4 *)(allocation + 0x1c) = STField<undefined4>(this,0x1dd);
    piVar3 = (int *)((int)this + 0x1e5);
    *(undefined4 *)(allocation + 0x20) = STField<undefined4>(this,0x1e1);
    pbVar2 = allocation + 0x24;
    piVar1 = piVar3;
    do {
      *(int *)pbVar2 = *piVar1;
      if (*piVar1 != 0) {
        local_8 = local_8 + 1;
      }
      pbVar2 = pbVar2 + 4;
      piVar1 = piVar1 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    allocation[0x38] = STField<byte>(this,0x1f9);
    *(undefined4 *)(allocation + 0x39) = STField<undefined4>(this,0x1fa);
    if (local_8 != 0) {
      local_c = local_8 * 0x3e + 0x3d;
      allocation = Library::DKW::LIB::MemRealloc(allocation,local_c);
      if (allocation == nullptr) {
        return nullptr;
      }
      pbVar2 = allocation + 0x3d;
      local_8 = 5;
      do {
        if ((undefined4 *)*piVar3 != nullptr) {
          puVar4 = (byte *)*piVar3;
          pbVar6 = pbVar2;
          memmove(pbVar6, puVar4, 0x3e); /* compiler REP MOVS byte copy */
          pbVar2 = pbVar2 + 0x3e;
        }
        piVar3 = piVar3 + 1;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    *param_1 = local_c;
  }
  return allocation;
}

