#include "../../pseudocode_runtime.h"


int __thiscall FUN_006010a0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  byte *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *puVar9;
  undefined4 *puVar10;
  int local_10;
  int local_c;
  int local_8;

  puVar9 = (byte *)(param_1);
  puVar4 = (byte *)((int)this + 0x206);
  for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = *puVar9;
    puVar9 = (byte *)(puVar9 + 1);
    puVar4 = (byte *)(puVar4 + 1);
  }
  *(undefined1 *)puVar4 = *(undefined1 *)puVar9;
  local_8 = 0;
  if (((STField<int>(this,0x233) != 0) && (iVar5 = thunk_FUN_005fd850(this), -1 < iVar5)) &&
     (local_10 = 0, 0 < STField<int>(this,0x226))) {
    local_c = 0;
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar5 = *(int *)((int)param_1 + local_8 + 0x3d);
      puVar9 = (byte *)((int)param_1 + local_8 + 0x41);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar1 = *(undefined4 *)(local_c + 0x42 + STField<int>(this,0x233));
      puVar4 = (byte *)(puVar9);
      puVar10 = (undefined4 *)(local_c + STField<int>(this,0x233));
      for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar4;
        puVar4 = (byte *)(puVar4 + 1);
        puVar10 = puVar10 + 1;
      }
      *(undefined2 *)puVar10 = *(undefined2 *)puVar4;
      *(undefined4 *)(local_c + 0x42 + STField<int>(this,0x233)) = uVar1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = *(int *)(local_c + 0x39 + STField<int>(this,0x233));
      iVar6 = local_c + STField<int>(this,0x233);
      if ((iVar2 == 3) || (iVar2 == 4)) {
        *(undefined4 *)(iVar6 + 0x4e) = 0;
        *(undefined4 *)(local_c + 0x46 + STField<int>(this,0x233)) = 0;
        *(undefined4 *)(local_c + 0x39 + STField<int>(this,0x233)) = 5;
        *(undefined4 *)(local_c + 0x42 + STField<int>(this,0x233)) = 0;
      }
      else {
        iVar6 = *(int *)(iVar6 + 0x46);
        if (iVar6 != 0) {
          pvVar3 = Library::DKW::LIB::MemAlloc(iVar6 * 6);
          *(void **)(local_c + 0x4e + STField<int>(this,0x233)) = pvVar3;
          iVar6 = STField<int>(this,0x233) + local_c;
          uVar7 = *(int *)(iVar6 + 0x46) * 6;
          puVar9 = (byte *)((int)puVar9 + 0x52);
          puVar4 = (byte *)(*(undefined4 **)(iVar6 + 0x4e));
          memmove(puVar4, puVar9, uVar7); /* compiler REP MOVS byte copy */
        }
      }
      local_8 = local_8 + iVar5;
      local_10 = local_10 + 1;
      local_c = local_c + 0x52;
    } while (local_10 < STField<int>(this,0x226));
  }
  if (STField<int>(this,0x237) == 0) {
    return local_8 + 0x41;
  }
  uVar8 = STField<int>(this,0x237) * 0x18;
  puVar4 = (byte *)(Library::DKW::LIB::MemAlloc(uVar8));
  STField<undefined4 *>(this,0x23b) = puVar4;
  puVar9 = (byte *)(local_8 + 0x41 + (int)param_1);
  for (iVar5 = (STField<int>(this,0x237) * 3 & 0x1fffffffU) << 1; iVar5 != 0; iVar5 = iVar5 + -1)
  {
    *puVar4 = *puVar9;
    puVar9 = (byte *)(puVar9 + 1);
    puVar4 = (byte *)(puVar4 + 1);
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar9;
    puVar9 = (byte *)((int)puVar9 + 1);
    puVar4 = (byte *)((int)puVar4 + 1);
  }
  uVar7 = STField<int>(this,0x237) * 4;
  pvVar3 = Library::DKW::LIB::MemAlloc(uVar7);
  STField<void *>(this,0x23f) = pvVar3;
  return local_8 + 0x41 + uVar8 + uVar7;
}

