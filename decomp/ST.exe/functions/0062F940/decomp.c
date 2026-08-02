#include "../../pseudocode_runtime.h"


void __thiscall FUN_0062f940(void *this,uint *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  byte *puVar6;
  int iVar7;
  byte *puVar8;
  uint local_c;
  int local_8;

  local_8 = 0;
  *param_1 = 0;
  local_c = 0x3d;
  puVar1 = Library::DKW::LIB::MemAlloc(0x3d);
  if (puVar1 != nullptr) {
    *puVar1 = 0xbe;
    puVar1[1] = 0xff;
    puVar1[2] = 0;
    puVar1[3] = 2;
    iVar7 = 5;
    puVar1[5] = *(undefined4 *)((int)this + 0x1d5);
    puVar1[6] = *(undefined4 *)((int)this + 0x1d9);
    puVar1[7] = *(undefined4 *)((int)this + 0x1dd);
    piVar5 = (int *)((int)this + 0x1e5);
    puVar1[8] = *(undefined4 *)((int)this + 0x1e1);
    piVar4 = puVar1 + 9;
    piVar3 = piVar5;
    do {
      *piVar4 = *piVar3;
      if (*piVar3 != 0) {
        local_8 = local_8 + 1;
      }
      piVar4 = piVar4 + 1;
      piVar3 = piVar3 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    *(undefined1 *)(puVar1 + 0xe) = *(undefined1 *)((int)this + 0x1f9);
    *(undefined4 *)((int)puVar1 + 0x39) = *(undefined4 *)((int)this + 0x1fa);
    if (local_8 != 0) {
      local_c = local_8 * 0x3e + 0x3d;
      pvVar2 = Library::DKW::LIB::MemRealloc(puVar1,local_c);
      if (pvVar2 == nullptr) {
        return;
      }
      puVar1 = (undefined4 *)((int)pvVar2 + 0x3d);
      local_8 = 5;
      do {
        if ((undefined4 *)*piVar5 != nullptr) {
          puVar6 = (byte *)*piVar5;
          puVar8 = (byte *)(puVar1);
          memmove(puVar8, puVar6, 0x3e); /* compiler REP MOVS byte copy */
          puVar1 = (undefined4 *)((int)puVar1 + 0x3e);
        }
        piVar5 = piVar5 + 1;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    *param_1 = local_c;
  }
  return;
}

