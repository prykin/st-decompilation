#include "../../pseudocode_runtime.h"


int __thiscall FUN_006010a0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar5;
  void *pvVar3;
  byte *puVar4;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *puVar10;
  undefined4 *puVar11;
  int local_10;
  int local_c;
  int local_8;

  puVar10 = (byte *)(param_1);
  puVar4 = (byte *)((int)this + 0x206);
  for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = *puVar10;
    puVar10 = (byte *)(puVar10 + 1);
    puVar4 = (byte *)(puVar4 + 1);
  }
  *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
  local_8 = 0;
  if (((STField<int>(this,0x233) != 0) && (iVar5 = thunk_FUN_005fd850(this), -1 < iVar5)) &&
     (local_10 = 0, 0 < STField<int>(this,0x226))) {
    local_c = 0;
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar6 = *(int *)((int)param_1 + local_8 + 0x3d);
      puVar10 = (byte *)((int)param_1 + local_8 + 0x41);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar1 = *(undefined4 *)(local_c + 0x42 + STField<int>(this,0x233));
      puVar4 = (byte *)(puVar10);
      puVar11 = (undefined4 *)(local_c + STField<int>(this,0x233));
      for (iVar7 = 0x14; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *puVar4;
        puVar4 = (byte *)(puVar4 + 1);
        puVar11 = puVar11 + 1;
      }
      *(undefined2 *)puVar11 = *(undefined2 *)puVar4;
      *(undefined4 *)(local_c + 0x42 + STField<int>(this,0x233)) = uVar1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = *(int *)(local_c + 0x39 + STField<int>(this,0x233));
      iVar7 = local_c + STField<int>(this,0x233);
      if ((iVar2 == 3) || (iVar2 == 4)) {
        *(undefined4 *)(iVar7 + 0x4e) = 0;
        *(undefined4 *)(local_c + 0x46 + STField<int>(this,0x233)) = 0;
        *(undefined4 *)(local_c + 0x39 + STField<int>(this,0x233)) = 5;
        *(undefined4 *)(local_c + 0x42 + STField<int>(this,0x233)) = 0;
      }
      else {
        iVar7 = *(int *)(iVar7 + 0x46);
        if (iVar7 != 0) {
          pvVar3 = Library::DKW::LIB::MemAlloc(iVar7 * 6);
          *(void **)(local_c + 0x4e + STField<int>(this,0x233)) = pvVar3;
          iVar7 = STField<int>(this,0x233) + local_c;
          uVar8 = *(int *)(iVar7 + 0x46) * 6;
          puVar10 = (byte *)((int)puVar10 + 0x52);
          puVar4 = (byte *)(*(undefined4 **)(iVar7 + 0x4e));
          memmove(puVar4, puVar10, uVar8); /* compiler REP MOVS byte copy */
        }
      }
      local_8 = local_8 + iVar6;
      local_10 = local_10 + 1;
      local_c = local_c + 0x52;
    } while (local_10 < STField<int>(this,0x226));
  }
  if (STField<int>(this,0x237) == 0) {
    return local_8 + 0x41;
  }
  uVar9 = STField<int>(this,0x237) * 0x18;
  puVar4 = (byte *)(Library::DKW::LIB::MemAlloc(uVar9));
  STField<undefined4 *>(this,0x23b) = puVar4;
  puVar10 = (byte *)(local_8 + 0x41 + (int)param_1);
  for (iVar6 = (STField<int>(this,0x237) * 3 & 0x1fffffffU) << 1; iVar6 != 0; iVar6 = iVar6 + -1)
  {
    *puVar4 = *puVar10;
    puVar10 = (byte *)(puVar10 + 1);
    puVar4 = (byte *)(puVar4 + 1);
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
    puVar10 = (byte *)((int)puVar10 + 1);
    puVar4 = (byte *)((int)puVar4 + 1);
  }
  uVar8 = STField<int>(this,0x237) * 4;
  pvVar3 = Library::DKW::LIB::MemAlloc(uVar8);
  STField<void *>(this,0x23f) = pvVar3;
  return local_8 + 0x41 + uVar9 + uVar8;
}

