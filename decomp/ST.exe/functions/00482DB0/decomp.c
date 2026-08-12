#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00462180 @ 00462366
   -> CMP CMP EAX,EBX

   [STTypeFamilyApplier] CONTEXTUAL_GENERATED_RECORD.
   Evidence: one script-owned pointer shape is used only by functions with one unique class-owner
   context; promote its stable machine layout to a generated owner-qualified record name */

int __fastcall FUN_00482db0(int *param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  RecoveredRecord_STBoatC_00482DB0 *this;
  short sVar3;
  STWorldObject *pSVar4;
  int iVar12;
  uint uVar6;
  uint uVar5;
  undefined4 *puVar7;
  short sVar8;
  short sVar9;
  undefined2 uVar11;
  uint uVar10;
  short sVar12;
  int iVar13;
  undefined4 local_3c [2];
  undefined4 local_34 [2];
  undefined4 local_2c;
  undefined2 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  uint local_18;
  STFishC *local_14;
  ushort *local_10;
  short local_c [2];
  RecoveredRecord_STBoatC_00482DB0 *local_8;

  if (((char)param_1[0x10] != '\0') || (STField<char>(param_1,0x4d) != '\0')) {
    return 1;
  }
  sVar1 = STField<short>(param_1,0x47);
  sVar3 = STField<short>(param_1,0x4b);
  sVar8 = STField<short>(param_1,0x49);
  uVar11 = (undefined2)((uint)param_2 >> 0x10);
  if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar8 < 0)) ||
      ((g_worldGrid.sizeY <= sVar8 || (sVar3 < 0)))) || (g_worldGrid.sizeZ <= sVar3)) {
    pSVar4 = nullptr;
  }
  else {
    iVar13 = (int)g_worldGrid.planeStride * (int)sVar3 + (int)g_worldGrid.sizeX * (int)sVar8 +
             (int)sVar1;
    uVar11 = (undefined2)((uint)STField<byte>(param_1,0x8e) + iVar13 * 2 >> 0x10);
    pSVar4 = g_worldGrid.cells[iVar13].objects[STField<byte>(param_1,0x8e)];
  }
  if (pSVar4 != (STWorldObject *)param_1) {
    return 1;
  }
  sVar1 = (short)param_1[0x201];
  sVar3 = STField<short>(param_1,0x802);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_14 = (STFishC *)CONCAT22(uVar11,sVar3);
  if (param_1[0x1ff] == 3) {
    sVar8 = (short)param_1[0x200];
    if ((((-1 < sVar8) && (sVar8 < g_worldGrid.sizeX)) &&
        ((-1 < sVar3 && ((sVar3 < g_worldGrid.sizeY && (-1 < sVar1)))))) &&
       (sVar1 < g_worldGrid.sizeZ)) {
      local_8 = (RecoveredRecord_STBoatC_00482DB0 *)
                STGridAt3D(g_worldGrid, sVar8, sVar3, sVar1).objects[1];
LAB_00482f52:
      if ((local_8 != nullptr) &&
         (*(int *)&local_8->field_0x18 == param_1[0x1fd])) goto LAB_00482fa9;
    }
  }
  else {
    sVar8 = (short)param_1[0x200];
    if (((-1 < sVar8) && (sVar8 < g_worldGrid.sizeX)) &&
       ((-1 < sVar3 &&
        (((sVar3 < g_worldGrid.sizeY && (-1 < sVar1)) && (sVar1 < g_worldGrid.sizeZ)))))) {
      local_8 = (RecoveredRecord_STBoatC_00482DB0 *)
                STGridAt3D(g_worldGrid, sVar8, sVar3, sVar1).objects[0];
      goto LAB_00482f52;
    }
  }
  iVar13 = STPlaySystemC::sub_006E62D0
                     (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1[0x1fd],
                      (int *)&local_14);
  if (iVar13 == -4) {
    return 4;
  }
  STFishC::sub_004162F0
            (local_14,(short *)(param_1 + 0x200),(short *)((int)param_1 + 0x802),
             (short *)(param_1 + 0x201));
  local_8 = (RecoveredRecord_STBoatC_00482DB0 *)local_14;
LAB_00482fa9:
  this = local_8;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar13 = (**(code **)(*(int *)local_8 + 0xf8))();
  if (iVar13 == 0) {
    return 4;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  if ((*(int *)&this->field_0x20 == 0x1ae) &&
     (iVar13 = (**(code **)(*(int *)this + 0xf4))(param_1[9]), iVar13 == 0)) {
    return 4;
  }
  thunk_FUN_00416270(this,&local_18,&local_1c,local_c);
  iVar12 = FUN_006acf0d((int)STField<short>(param_1,0x41),(int)STField<short>(param_1,0x43),
                        (int)STField<short>(param_1,0x45),(int)(short)local_18,
                        (int)(short)local_1c,(int)local_c[0]);
  if ((short)param_1[0x205] < iVar12) {
    return 5;
  }
  uVar6 = (int)local_c[0] - (int)STField<short>(param_1,0x45);
  uVar10 = (int)uVar6 >> 0x1f;
  if ((int)(((uVar6 ^ uVar10) - uVar10) * 10) / iVar12 < 4) {
    uVar5 = thunk_FUN_004836c0((AnonShape_004836C0_617DC527 *)param_1);
    if ((short)uVar5 != (short)param_1[0x1b]) {
      return 9;
    }
    iVar13 = STField<int>(param_1,0x7de);
    if (((iVar13 != 0) || (0 < STField<int>(param_1,0x7a2))) &&
       ((iVar13 != 1 || (0x27 < STField<int>(param_1,0x72a))))) {
      if ((iVar13 == 0) && (STField<int>(param_1,0x7aa) < STField<int>(param_1,0x7a6))) {
        return 3;
      }
      local_20 = 0;
      if (STField<char>(param_1,0x2b2) != '\0') {
        local_10 = (ushort *)(param_1 + 0xaa);
        do {
          puVar7 = thunk_FUN_0041dc40(local_34,(short)*(undefined4 *)(local_10 + -1),local_10[1],
                                      (short)param_1[0x1b]);
          uVar2 = *puVar7;
          STPiece<2,2>(local_2c) = (short)((uint)uVar2 >> 0x10);
          sVar12 = STField<short>(param_1,0x43) - STPiece<2,2>(local_2c);
          local_24 = STReplaceLowWord((uint32_t)(puVar7), (uint16_t)(*(short *)(puVar7 + 1) + STField<short>(param_1,0x45)));
          local_2c = (uint)*local_10 << 0x10;
          sVar1 = STField<short>(param_1,0x41);
          puVar7 = thunk_FUN_0041dc40(local_3c,0,0,(short)param_1[0x1b]);
          local_2c = *puVar7;
          local_28 = *(undefined2 *)(puVar7 + 1);
          sVar3 = (short)local_2c + local_8->field_0041;
          local_18 = STReplaceLowWord((uint32_t)(puVar7), (uint16_t)(sVar3));
          sVar9 = (short)((uint)local_2c >> 0x10);
          sVar8 = local_8->field_0043 - sVar9;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_1c = CONCAT22(sVar9,sVar8);
          local_c[0] = local_8->field_0045;
          iVar13 = STSprGameObjC::CheckRay
                             ((STSprGameObjC *)param_1,(short)uVar2 + sVar1,sVar12,(short)local_24,
                              sVar3,sVar8,local_8->field_0045,
                              STField<STSprGameObjC_CheckRay_param_7Enum>(param_1,0x79a),
                              (int *)&local_14,0);
          if (iVar13 == 0) {
            return -(uint)((STFishC *)local_8 != local_14) & 8;
          }
          local_20 = local_20 + 1;
          local_10 = local_10 + 3;
        } while (local_20 < (int)(uint)STField<byte>(param_1,0x2b2));
      }
      return 0;
    }
    return 2;
  }
  return (local_c[0] <= STField<short>(param_1,0x45)) + 6;
}

