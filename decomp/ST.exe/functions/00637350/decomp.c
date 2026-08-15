#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 5.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00637461 MOV AX,word ptr
   [EBP + 0x1c]

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0044EE30 -> 00637350 @ 00450FD8; zero-filled partial register load at 00450FBE */

int __cdecl
FUN_00637350(int param_1,int param_2,int param_3,int param_4,uint param_5,ushort param_6,
            ushort param_7,undefined4 param_8,uint param_9)

{
  byte bVar1;
  byte bVar2;
  STWorldObject *this;
  int iVar10;
  short sVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  int iVar11;
  short sVar12;
  int iVar15;
  bool bVar16;
  int local_58 [5];
  uint *local_44;
  uint local_38 [3];
  ushort local_2c;
  ushort local_2a;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_8 = 0;
  iVar11 = STBiasedDiv16(param_1, 0xc9); /* exact signed 16-bit grid-index division */
  iVar4 = STBiasedDiv16(param_2, 0xc9); /* exact signed 16-bit grid-index division */
  local_c = STBiasedDiv16(param_3, 200); /* exact signed 16-bit grid-index division */
  uVar7 = iVar4 - param_4;
  if ((int)uVar7 < 0) {
    uVar7 = 0;
  }
  local_1c = iVar11 - param_4;
  if (local_1c < 0) {
    local_1c = 0;
  }
  local_18 = iVar4 + 1 + param_4;
  if (g_worldGrid.sizeY < local_18) {
    local_18 = (int)g_worldGrid.sizeY;
  }
  local_14 = iVar11 + 1 + param_4;
  if (g_worldGrid.sizeX < local_14) {
    local_14 = (int)g_worldGrid.sizeX;
  }
  local_10 = local_c + -1;
  if (local_10 < 0) {
    local_10 = 0;
  }
  local_c = local_c + 2;
  if (5 < local_c) {
    local_c = 5;
  }
  memset(local_38, 0, 0x1c); /* compiler bulk-zero initialization */
  local_38[2] = param_5;
  local_2a = param_6;
  local_2c = param_7;
  local_38[0] = param_9;
  local_38[1] = param_8;
  iVar11 = local_c;
  iVar4 = local_10;
  sVar9 = g_worldGrid.sizeX;
  if ((int)uVar7 < local_18) {
    do {
      iVar8 = iVar4;
      iVar15 = local_1c;
      param_9 = uVar7;
      if (local_1c < local_14) {
        do {
          iVar4 = iVar8;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          _param_6 = iVar15;
          if (iVar8 < iVar11) {
            do {
              sVar12 = (short)iVar15;
              if (((((((-1 < sVar12) && (sVar12 < sVar9)) && (sVar3 = (short)uVar7, -1 < sVar3)) &&
                    ((sVar3 < g_worldGrid.sizeY && (sVar6 = (short)iVar8, -1 < sVar6)))) &&
                   ((sVar6 < g_worldGrid.sizeZ &&
                    ((this = g_worldGrid.cells
                             [(int)sVar3 * (int)sVar9 + (int)sVar6 * (int)g_worldGrid.planeStride +
                              (int)sVar12].objects[0], this != nullptr &&
                     (iVar11 = (*this->vtable[5].slots_00_28[0])(), uVar7 = param_9, iVar11 != 0))))
                   )) && (this[1].vtable < (STWorldObjectVTable *)0x8)) &&
                 ((g_playSystem_00802A38 == nullptr ||
                  (g_bulkInitializedRecords_008087C7[(int)this[1].vtable].field_0022 < 8)))) {
                bVar1 = *(byte *)&this[1].vtable;
                param_8 = STReplaceLowByte((uint32_t)(param_8), (uint8_t)(bVar1));
                if (DAT_00808a8f == '\0') {
                  if (bVar1 == (byte)param_5) {
LAB_006375fd:
                    iVar11 = 0;
                  }
                  else {
                    uVar5 = param_5 & 0xff;
                    bVar2 = g_playerRelationMatrix[bVar1][uVar5];
                    if ((bVar2 == 0) && (g_playerRelationMatrix[uVar5][bVar1] == 0)) {
                      iVar11 = -2;
                    }
                    else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar5][bVar1] == 0)) {
                      iVar11 = -1;
                    }
                    else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar5][bVar1] == 1)) {
                      iVar11 = 1;
                    }
                    else {
                      if ((bVar2 != 1) || (g_playerRelationMatrix[uVar5][bVar1] != 1))
                      goto LAB_006375fd;
                      iVar11 = 2;
                    }
                  }
                  bVar16 = iVar11 < 0;
                }
                else {
                  bVar16 = g_bulkInitializedRecords_008087C7[param_5 & 0xff].field_0023 !=
                           g_bulkInitializedRecords_008087C7[bVar1].field_0023;
                  iVar15 = _param_6;
                }
                if ((bVar16) &&
                   (iVar11 = (*this->vtable[5].slots_00_28[2])(), uVar7 = param_9, iVar11 != 0)) {
                  thunk_FUN_00416270(this,(uint *)((int)&param_4 + 2),(int *)((int)&param_3 + 2),
                                     (short *)&stack0x0000001e);
                  iVar10 = FUN_006aced8((int)STPiece<2,2>(param_4),(int)STPiece<2,2>(param_3),param_1,param_2);
                  uVar7 = param_9;
                  if (iVar10 < 0x28b) {
                    memset(local_58, 0, 0x20); /* compiler bulk-zero initialization */
                    local_58[2] = *(int *)&this->field_0x18;
                    local_58[3] = 4;
                    local_58[4] = 0x110;
                    local_44 = local_38;
                    (*this->vtable->slots_00_28[0])(local_58);
                    local_8 = local_8 + 1;
                    uVar7 = param_9;
                    iVar15 = _param_6;
                  }
                }
              }
              iVar8 = iVar8 + 1;
              iVar11 = local_c;
              iVar4 = local_10;
              sVar9 = g_worldGrid.sizeX;
            } while (iVar8 < local_c);
          }
          iVar15 = iVar15 + 1;
          iVar8 = iVar4;
        } while (iVar15 < local_14);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < local_18);
  }
  return local_8;
}

