#include "../../pseudocode_runtime.h"


void __thiscall FUN_00614400(void *this,AnonShape_00614400_1B90EA7E *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  STWorldObject *pSVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  bool bVar10;
  int local_10;
  byte local_c;
  undefined3 uStack_b;
  int local_8;

  STField<undefined4>(this,0x1fb) = param_1->field_002D;
  STField<undefined2>(this,0x1ff) = param_1->field_0031;
  STField<undefined2>(this,0x1e9) = param_1->field_001A;
  STField<undefined2>(this,0x1eb) = param_1->field_001C;
  STField<undefined2>(this,0x1ed) = param_1->field_001E;
  STField<undefined2>(this,0x1ef) = param_1->field_0020;
  STField<undefined2>(this,0x1f1) = param_1->field_0022;
  STField<undefined2>(this,499) = param_1->field_0024;
  STField<undefined4>(this,0x207) = param_1->field_0043;
  sVar8 = STField<short>(this,0x1e9);
  sVar8 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
  STField<short>(this,0x215) = sVar8;
  sVar8 = STField<short>(this,0x1eb);
  sVar8 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
  STField<short>(this,0x217) = sVar8;
  sVar8 = STField<short>(this,0x1ed);
  sVar8 = STBiasedDiv16(sVar8, 200); /* exact signed 16-bit grid-index division */
  STField<short>(this,0x219) = sVar8;
  sVar8 = param_1->field_0026;
  sVar4 = STField<short>(this,0x1ef);
  STField<short>(this,0x1f5) =
       (sVar8 / 0xf + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x88888889 >> 0x3f);
  sVar8 = STBiasedDiv16(sVar4, 0xc9); /* exact signed 16-bit grid-index division */
  sVar4 = STField<short>(this,0x1f1);
  STField<short>(this,0x2c5) = sVar8;
  local_8 = STBiasedDiv16(sVar4, 0xc9); /* exact signed 16-bit grid-index division */
  STField<short>(this,0x2c7) = (short)local_8;
  sVar5 = STField<short>(this,499);
  sVar9 = STBiasedDiv16(sVar5, 200); /* exact signed 16-bit grid-index division */
  STField<short>(this,0x2cf) = sVar5;
  STField<short>(this,0x2c9) = sVar9;
  STField<undefined2>(this,0x2cb) = STField<undefined2>(this,0x1ef);
  STField<short>(this,0x2cd) = sVar4;
  iVar7 = param_1->field_0043;
  STField<int>(this,0x2d1) = iVar7;
  if (((((((-1 < sVar8) && (sVar8 < g_worldGrid.sizeX)) && (-1 < (short)local_8)) &&
        (((short)local_8 < g_worldGrid.sizeY && (-1 < sVar9)))) &&
       ((sVar9 < g_worldGrid.sizeZ &&
        ((pSVar6 = STGridAt3D(g_worldGrid, sVar8, local_8, sVar9).objects[0],
         pSVar6 != nullptr && (*(int *)&pSVar6->field_0x18 == iVar7)))))) &&
      (iVar7 = (*pSVar6->vtable[5].slots_00_28[0])(), iVar7 != 0)) &&
     ((pSVar6[1].vtable < (STWorldObjectVTable *)0x8 &&
      ((g_playSystem_00802A38 == nullptr ||
       (g_bulkInitializedRecords_008087C7[(int)pSVar6[1].vtable].field_0022 < 8)))))) {
    bVar1 = *(byte *)&pSVar6[1].vtable;
    bVar2 = STField<byte>(this,0x1d9);
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar1));
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_c = CONCAT31(uStack_b,bVar2);
    if (DAT_00808a8f == '\0') {
      if (bVar1 == bVar2) {
LAB_0061478b:
        iVar7 = 0;
      }
      else {
        bVar3 = g_playerRelationMatrix[bVar1][bVar2];
        if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
          iVar7 = -2;
        }
        else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
          iVar7 = -1;
        }
        else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
          iVar7 = 1;
        }
        else {
          if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1)) goto LAB_0061478b;
          iVar7 = 2;
        }
      }
      bVar10 = iVar7 < 0;
    }
    else {
      bVar10 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
               g_bulkInitializedRecords_008087C7[bVar1].field_0023;
    }
    if ((bVar10) && (iVar7 = (*pSVar6->vtable[5].slots_00_28[2])(), iVar7 != 0)) {
      STField<undefined4>(this,0x2d1) = *(undefined4 *)&pSVar6->field_0x18;
      goto LAB_006147e6;
    }
  }
  iVar7 = STPlaySystemC::sub_006E62D0
                    (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(this,0x2d1),
                     &local_10);
  if (iVar7 == -4) {
    STField<undefined4>(this,0x2d1) = 0;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    STField<undefined4>(this,0x2d1) = *(undefined4 *)(local_10 + 0x18);
  }
LAB_006147e6:
  STField<undefined4>(this,0x1f7) = param_1->field_0028;
  iVar7 = DAT_007e6670;
  if ((param_1->field_0028 == 1) && (iVar7 = param_1->field_0033, param_1->field_0033 < 3)) {
    STField<undefined4>(this,0x21b) = 0x14;
    STField<undefined4>(this,0x20c) = 6;
    return;
  }
  STField<int>(this,0x21b) = iVar7;
  STField<undefined4>(this,0x20c) = 6;
  return;
}

