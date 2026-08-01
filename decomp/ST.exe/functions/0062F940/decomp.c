#include "../../pseudocode_runtime.h"


void __thiscall FUN_0062f940(void *this,uint *param_1)

{
  AnonPointee_TLOBaseTy_0607 *allocation;
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  byte *puVar6;
  int iVar7;
  byte *puVar8;
  uint local_c;
  int local_8;

  local_8 = 0;
  *param_1 = 0;
  local_c = 0x3d;
  allocation = Library::DKW::LIB::MemAlloc(0x3d);
  if (allocation != (AnonPointee_TLOBaseTy_0607 *)0x0) {
    allocation->field_0000 = 0xbe;
    allocation->field_0004 = 0xff;
    allocation->field_0008 = 0;
    allocation->field_000C = 2;
    iVar7 = 5;
    allocation->field_0014 = *(undefined4 *)((int)this + 0x1d5);
    allocation[1].field_0000 = *(undefined4 *)((int)this + 0x1d9);
    allocation[1].field_0004 = *(undefined4 *)((int)this + 0x1dd);
    piVar5 = (int *)((int)this + 0x1e5);
    allocation[1].field_0008 = *(undefined4 *)((int)this + 0x1e1);
    piVar3 = &allocation[1].field_000C;
    piVar2 = piVar5;
    do {
      *piVar3 = *piVar2;
      if (*piVar2 != 0) {
        local_8 = local_8 + 1;
      }
      piVar3 = piVar3 + 1;
      piVar2 = piVar2 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    *(undefined1 *)&allocation[2].field_0008 = *(undefined1 *)((int)this + 0x1f9);
    *(undefined4 *)((int)&allocation[2].field_0008 + 1) = *(undefined4 *)((int)this + 0x1fa);
    if (local_8 != 0) {
      local_c = local_8 * 0x3e + 0x3d;
      pvVar1 = Library::DKW::LIB::MemRealloc(allocation,local_c);
      if (pvVar1 == (void *)0x0) {
        return;
      }
      puVar4 = (undefined4 *)((int)pvVar1 + 0x3d);
      local_8 = 5;
      do {
        if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
          puVar6 = (byte *)*piVar5;
          puVar8 = (byte *)(puVar4);
          memmove(puVar8, puVar6, 0x3e); /* compiler REP MOVS byte copy */
          puVar4 = (undefined4 *)((int)puVar4 + 0x3e);
        }
        piVar5 = piVar5 + 1;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    *param_1 = local_c;
  }
  return;
}

