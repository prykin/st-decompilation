#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __thiscall FUN_0060d390(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  uint auStack_70 [2];
  int local_58;
  undefined4 *local_3c;
  int *local_38;
  int local_34;
  uint local_30;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  puStack_c = &DAT_0079cd78;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_30 = 0;
  local_3c = nullptr;
  if ((STField<int>(this,0x240) == 0) && (STField<int>(this,0x244) != 0)) {
    iVar4 = STField<int>(this,0x23c);
    auStack_70[1] = 0x60d3f2;
    piVar9 = (int *)(&stack0xffffff98 + iVar4 * -4);
    puVar3 = (uint *)(&stack0xffffff98 + iVar4 * -4);
    local_8 = 0xffffffff;
    uVar8 = iVar4 * 0x44;
    auStack_70[1 - iVar4] = 0x60d413;
    ExceptionList = &local_14;

    uVar1 = thunk_FUN_0062ca00();
    iVar12 = 0;
    local_30 = uVar8;
    if (0 < STField<int>(this,0x23c)) {
      iVar7 = 0;
      do {
        *puVar3 = 0;
        if (*(int *)(iVar7 + 0x40 + STField<int>(this,0x244)) != 0) {
          uVar8 = uVar8 + uVar1;
          *puVar3 = uVar1;
          local_30 = uVar8;
        }
        iVar2 = STField<int>(this,0x244) + iVar7;
        if (STField<int>(iVar2,0x8) != 0) {
          *puVar3 = *puVar3 + STField<int>(iVar2,0x4) * 4;
          uVar8 = uVar8 + *(int *)(iVar7 + 4 + STField<int>(this,0x244)) * 4;
          local_30 = uVar8;
        }
        if (*puVar3 != 0) {
          *puVar3 = *puVar3 + 4;
          uVar8 = uVar8 + 4;
          local_30 = uVar8;
        }
        iVar12 = iVar12 + 1;
        iVar7 = iVar7 + 0x44;
        puVar3 = puVar3 + 1;
      } while (iVar12 < STField<int>(this,0x23c));
    }
    if (uVar8 != 0) {
      auStack_70[1 - iVar4] = local_30;
      auStack_70[-iVar4] = 0x60d49c;

      local_3c = Library::DKW::LIB::MemAlloc(auStack_70[1 - iVar4]);
      if (local_3c != nullptr) {
        puVar11 = STField<undefined4 *>(this,0x244);
        puVar13 = local_3c;
        for (uVar8 = STField<int>(this,0x23c) * 0x11 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1)
        {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        piVar6 = local_3c + STField<int>(this,0x23c) * 0x11;
        local_34 = 0;
        if (0 < STField<int>(this,0x23c)) {
          local_58 = 0;
          local_38 = piVar6;
          do {
            if (*piVar9 != 0) {
              *piVar6 = *piVar9;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              piVar10 = *(int **)(local_58 + 0x40 + STField<int>(this,0x244));
              piVar5 = piVar6;
              if (piVar10 != nullptr) {
                piVar5 = piVar6 + 1;
                memmove(piVar5, piVar10, uVar1); /* compiler REP MOVS byte copy */
                uVar8 = 0;
                iVar4 = STField<int>(this,0x244) + local_58;
                puVar11 = *(undefined4 **)(iVar4 + 8);
                piVar5 = local_38;
                if (puVar11 != nullptr) {
                  puVar13 = (undefined4 *)((int)(piVar6 + 1) + uVar1);
                  for (uVar8 = STField<uint>(iVar4,0x4) & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *puVar13 = *puVar11;
                    puVar11 = puVar11 + 1;
                    puVar13 = puVar13 + 1;
                  }
                  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
                    puVar11 = (undefined4 *)((int)puVar11 + 1);
                    puVar13 = (undefined4 *)((int)puVar13 + 1);
                  }
                }
              }
              piVar6 = (int *)((int)piVar5 + *piVar9);
              local_38 = piVar6;
            }
            local_34 = local_34 + 1;
            local_58 = local_58 + 0x44;
            piVar9 = piVar9 + 1;
          } while (local_34 < STField<int>(this,0x23c));
        }
      }
    }
  }
  *param_1 = -(uint)(local_3c != nullptr) & local_30;
  ExceptionList = local_14;
  return;
}

