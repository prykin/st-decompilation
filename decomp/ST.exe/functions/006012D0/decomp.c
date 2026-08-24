#include "../../pseudocode_runtime.h"


undefined4 * __thiscall FUN_006012d0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *puVar7;
  int iVar8;
  byte *puVar9;
  uint *puVar10;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;

  local_10 = 0;
  local_c = Library::DKW::LIB::MemAlloc(0x3d);
  STField<undefined4>(this,0x212) = 2;
  puVar7 = (byte *)((int)this + 0x206);
  puVar9 = (byte *)(local_c);
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = *puVar7;
    puVar7 = (byte *)(puVar7 + 1);
    puVar9 = (byte *)(puVar9 + 1);
  }
  *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
  iVar4 = STField<int>(this,0x233);
  iVar3 = 0;
  local_8 = 0;
  if ((iVar4 != 0) && (iVar2 = 0, 0 < STField<int>(this,0x226))) {
    iVar8 = 0;
    do {
      if (*(int *)(iVar8 + 0x4e + iVar4) == 0) {
        *(undefined4 *)(iVar8 + 0x46 + iVar4) = 0;
      }
      iVar4 = STField<int>(this,0x233);
      iVar2 = iVar2 + 1;
      iVar1 = iVar8 + 0x46;
      iVar8 = iVar8 + 0x52;
      iVar3 = iVar3 + 0x56 + *(int *)(iVar1 + iVar4) * 6;
      local_8 = iVar3;
    } while (iVar2 < STField<int>(this,0x226));
  }
  if (STField<int>(this,0x237) != 0) {
    local_10 = STField<int>(this,0x237) * 0x1c + 4;
  }
  if (local_8 + local_10 != 0) {
    local_c = Library::DKW::LIB::MemRealloc(local_c,local_8 + 0x3d + local_10);
    iVar3 = 0;
    local_14 = 0;
    local_18 = 0;
    if (0 < STField<int>(this,0x226)) {
      do {
        iVar4 = *(int *)(STField<int>(this,0x233) + 0x46 + iVar3) * 6 + 0x56;
        *(int *)((int)local_c + local_14 + 0x3d) = iVar4;
        puVar7 = (byte *)((int)local_c + local_14 + 0x41);
        puVar9 = (byte *)(STField<int>(this,0x233) + iVar3);
        puVar10 = puVar7;
        for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar10 = *puVar9;
          puVar9 = (byte *)(puVar9 + 1);
          puVar10 = puVar10 + 1;
        }
        *(undefined2 *)puVar10 = *(undefined2 *)puVar9;
        iVar2 = STField<int>(this,0x233) + iVar3;
        puVar9 = (byte *)(*(undefined4 **)(iVar2 + 0x4e));
        if (puVar9 != nullptr) {
          uVar5 = *(int *)(iVar2 + 0x46) * 6;
          puVar7 = (byte *)((int)puVar7 + 0x52);
          memmove(puVar7, puVar9, uVar5); /* compiler REP MOVS byte copy */
        }
        local_14 = local_14 + iVar4;
        local_18 = local_18 + 1;
        iVar3 = iVar3 + 0x52;
      } while (local_18 < STField<int>(this,0x226));
    }
    if (local_10 != 0) {
      *(int *)(local_8 + 0x3d + (int)local_c) = local_10;
      puVar7 = (byte *)(local_8 + 0x41 + (int)local_c);
      puVar9 = (byte *)(STField<undefined4 *>(this,0x23b));
      puVar10 = puVar7;
      for (iVar3 = (STField<int>(this,0x237) * 3 & 0x1fffffffU) << 1; iVar3 != 0;
          iVar3 = iVar3 + -1) {
        *puVar10 = *puVar9;
        puVar9 = (byte *)(puVar9 + 1);
        puVar10 = puVar10 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (byte *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      iVar3 = STField<int>(this,0x237);
      puVar9 = (byte *)(STField<undefined4 *>(this,0x23f));
      puVar7 = (byte *)(puVar7 + iVar3 * 6);
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar9;
        puVar9 = (byte *)(puVar9 + 1);
        puVar7 = (byte *)(puVar7 + 1);
      }
    }
  }
  *param_1 = local_8 + 0x3d + local_10;
  return local_c;
}

