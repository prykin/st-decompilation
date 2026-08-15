#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00638697 MOV DX,word ptr
   [EBP + 0x18]

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0063868F MOV CX,word ptr
   [EBP + 0x1c] */

int __cdecl
FUN_006383e0(int param_1,int param_2,int param_3,undefined4 param_4,ushort param_5,ushort param_6,
            undefined4 param_7,undefined4 param_8,int param_9)

{
  code *pcVar1;
  STWorldObject_GetObjectTypeId *pSVar2;
  STWorldObjectVTable *pSVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined4 *puVar14;
  int iVar15;
  STWorldObject *this;
  short sVar16;
  int iVar17;
  undefined4 **ppuVar18;
  int iVar20;
  undefined4 *local_a8;
  int *local_a4;
  int local_a0;
  int local_90;
  int local_80;
  int local_78;
  undefined4 *local_74 [9];
  int local_50;
  undefined4 local_48 [3];
  ushort local_3c;
  ushort local_3a;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  undefined4 *puVar13;

  puStack_c = &DAT_0079d1c8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_80 = 0;
  iVar17 = STBiasedDiv16(param_1, 0xc9); /* exact signed 16-bit grid-index division */
  iVar8 = STBiasedDiv16(param_2, 0xc9); /* exact signed 16-bit grid-index division */
  iVar9 = STBiasedDiv16(param_3, 200); /* exact signed 16-bit grid-index division */
  iVar15 = iVar8 - param_9;
  if (iVar15 < 0) {
    iVar15 = 0;
  }
  local_20 = iVar17 - param_9;
  if (local_20 < 0) {
    local_20 = 0;
  }
  iVar11 = local_20;
  local_78 = iVar9 - param_9;
  if (local_78 < 0) {
    local_78 = 0;
  }
  iVar8 = iVar8 + 1 + param_9;
  if (g_worldGrid.sizeY < iVar8) {
    iVar8 = (int)g_worldGrid.sizeY;
  }
  iVar17 = iVar17 + 1 + param_9;
  if (g_worldGrid.sizeX < iVar17) {
    iVar17 = (int)g_worldGrid.sizeX;
  }
  local_90 = iVar9 + 1 + param_9;
  if (5 < local_90) {
    local_90 = 5;
  }
  iVar9 = -(((iVar17 - local_20) * (iVar8 - iVar15) * 5 & 0x3fffffffU) + 3 & 0xfffffffc);
  puVar12 = &stack0xffffff4c + iVar9;
  local_1c = &stack0xffffff4c + iVar9;
  *(undefined4 *)(&stack0xffffff4c + iVar9) = 0;
  local_8 = 0xffffffff;
  local_a0 = 0;
  ExceptionList = &local_14;
  do {
    if (iVar8 <= iVar15) {
      ExceptionList = local_14;
      return local_80;
    }
    local_a4 = (int *)(&stack0xffffff4c + iVar9);
    local_50 = iVar15;
    iVar20 = iVar11;
    for (; iVar20 < iVar17; iVar20 = iVar20 + 1) {
      if (local_78 < local_90) {
        local_a8 = (undefined4 *)(&stack0xffffff4c + local_a0 * 4 + iVar9);
        iVar11 = local_78;
        do {
          sVar16 = (short)iVar20;
          if ((((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) || (sVar5 = (short)iVar15, sVar5 < 0)
              ) || (((g_worldGrid.sizeY <= sVar5 || (sVar10 = (short)iVar11, sVar10 < 0)) ||
                    (g_worldGrid.sizeZ <= sVar10)))) {
            this = nullptr;
          }
          else {
            this = STGridAt3D(g_worldGrid, sVar16, sVar5, sVar10).objects[0];
          }
          if (this != nullptr) {
            pcVar1 = this->vtable[5].slots_00_28[0];
            puVar13 = (undefined4 *)(puVar12 + -4);
            puVar12 = puVar12 + -4;
            *puVar13 = 0x6385f4;
            iVar6 = (*pcVar1)();
            iVar15 = local_50;
            if (iVar6 != 0) {
              bVar4 = false;
              if (this->value_20 == 1000) {
                pSVar2 = this->vtable->GetObjectTypeId;
                *(undefined4 *)(puVar12 + -4) = 0x63860e;
                iVar15 = (*pSVar2)(this);
                if (*(int *)(&DAT_00791d68 + iVar15 * 4) == 1) {
                  iVar15 = 0;
                  if (0 < local_a0) {
                    piVar7 = local_a4;
                    do {
                      if (*piVar7 == *(int *)&this->field_0x18) {
                        bVar4 = true;
                        break;
                      }
                      iVar15 = iVar15 + 1;
                      piVar7 = piVar7 + 1;
                    } while (iVar15 < local_a0);
                  }
                  iVar15 = local_50;
                  if (bVar4) goto LAB_006386ce;
                  *local_a8 = *(undefined4 *)&this->field_0x18;
                  local_a0 = local_a0 + 1;
                  local_a8 = local_a8 + 1;
                }
              }
              ppuVar18 = local_74;
              for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
                *ppuVar18 = nullptr;
                ppuVar18 = ppuVar18 + 1;
              }
              memset(local_48, 0, 0x1c); /* compiler bulk-zero initialization */
              local_74[2] = *(undefined4 **)&this->field_0x18;
              local_74[3] = (undefined4 *)0x4;
              local_48[2] = param_4;
              local_3c = param_6;
              local_3a = param_5;
              local_48[0] = param_8;
              local_48[1] = param_7;
              local_74[4] = (undefined4 *)0x110;
              local_74[5] = local_48;
              pSVar3 = this->vtable;
              *(undefined4 ***)(puVar12 + -4) = local_74;
              pcVar1 = pSVar3->slots_00_28[0];
              puVar14 = (undefined4 *)(puVar12 + -8);
              puVar12 = puVar12 + -8;
              *puVar14 = 0x6386c2;
              (*pcVar1)();
              local_80 = local_80 + 1;
              iVar15 = local_50;
            }
          }
LAB_006386ce:
          iVar11 = iVar11 + 1;
        } while (iVar11 < local_90);
      }
      iVar11 = local_20;
    }
    iVar15 = iVar15 + 1;
  } while( true );
}

