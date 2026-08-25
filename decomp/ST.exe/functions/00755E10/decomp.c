#include "../../pseudocode_runtime.h"


int FUN_00755e10(AnonShape_00755E10_BD685653 *param_1,int param_2,undefined4 param_3)

{
  int iVar3;
  int iVar4;
  int iVar4_mg1;
  int iVar2;
  int iVar5;
  uint uVar6;
  int iVar4_mg3;
  int iVar7_mg1;
  DWORD DVar7;
  int iVar5_mg4;
  int iVar1;
  int iVar4_mg2;
  int iVar8;
  uint uVar9;
  undefined2 local_8;

  iVar8 = (short)param_1->field_0008->field_0016 + -0x10;
  *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + -1;
  iVar5 = param_1->field_000C;
  iVar3 = STField<int>(iVar5,0x1C);
  iVar4 = *(int *)(iVar5 + 0x44 + iVar3 * 8);
  iVar4_mg1 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,
                           *(undefined4 *)(iVar5 + 0x40 + iVar3 * 8),iVar3);
  param_1->field_0008->field_0008 = param_1->field_0008->field_0008 | 0x10;
  iVar2 = FUN_00757450(param_1,iVar4);
  iVar5 = param_1->field_000C;
  if (iVar2 < STField<short>(iVar4_mg1,0x8)) {
    if (STField<short>(iVar5,0x34) == 0) {
      /* ST_CALLSITE[00755E92]: CALL dword ptr [EAX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar5 = (**(code **)(iVar5 + 8))(iVar2 + 0x18 + iVar4_mg1);
    }
    else {
      iVar5 = (int)STField<short>(iVar5,0x34);
    }
    if (iVar5 + 8 + param_2 < iVar8) {
      uVar6 = FUN_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,
                           (undefined4 *)(iVar2 + 0x10 + iVar4_mg1));
      if (uVar6 == 0) {
        return -2;
      }
      iVar5 = param_1->field_000C;
      uVar9 = *(undefined4 *)
               (*(int *)(iVar5 + 0x44 + STField<int>(iVar5,0x1C) * 8) + 0x10 + iVar4_mg1);
      STField<int>(iVar5,0x1C) = STField<int>(iVar5,0x1C) + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar4_mg3 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,uVar9,
                               *(int *)(param_1->field_000C + 0x1c));
      iVar5 = param_1->field_0010;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar7_mg1 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,param_3,
                               *(int *)(param_1->field_000C + 0x1c));
      if ((iVar8 <= (int)((int)STField<short>(iVar4_mg3,0x8) + (int)STField<short>(iVar7_mg1,0x8) + uVar6))
         && ((int)STField<short>(iVar4_mg3,0x8) <= (int)((int)STField<short>(iVar7_mg1,0x8) + uVar6))) {
        return 0;
      }
      *STField<undefined4 *>(param_1,0x1C) = STField<undefined4>(iVar4_mg3,0x4);
      FUN_007574c0((AnonShape_00753C80_4C8E695D *)param_1,iVar7_mg1,(uint *)param_1->field_001C,
                   (int)STField<short>(iVar7_mg1,0x8));
      if ((int)STField<short>(iVar4_mg3,0x8) + (int)STField<short>(iVar7_mg1,0x8) < iVar8) {
        Library::MSVCRT::FUN_0072da70
                  ((undefined4 *)(STField<short>(iVar7_mg1,0x8) + 0x10 + iVar7_mg1),
                   (AnonPointee_TLOBaseTy_0607 *)(iVar4_mg3 + 0x10),(int)STField<short>(iVar4_mg3,0x8));
        STField<short>(iVar7_mg1,0x8) = STField<short>(iVar7_mg1,0x8) + STField<short>(iVar4_mg3,0x8);
        DVar7 = FUN_00757670((AnonShape_00757670_86D3B9A7 *)param_1,iVar5);
        if ((int)DVar7 < 0) {
          return DVar7;
        }
        *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + -1;
        return 1;
      }
      uVar6 = FUN_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,(undefined4 *)(iVar4_mg3 + 0x10)
                          );
      if (uVar6 == 0) {
        return -2;
      }
      Library::MSVCRT::FUN_0072da70
                ((undefined4 *)(iVar4_mg3 + 0x10),
                 (AnonPointee_TLOBaseTy_0607 *)(iVar4_mg3 + 0x10 + uVar6),
                 (int)STField<short>(iVar4_mg3,0x8) - uVar6);
      STField<short>(iVar4_mg3,0x8) = STField<short>(iVar4_mg3,0x8) - (short)uVar6;
      STField<undefined4>(iVar4_mg3,0x4) = *STField<undefined4 *>(param_1,0x1C);
      *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + -1;
      uVar6 = FUN_00755da0((AnonShape_00753C80_4C8E695D *)param_1,(undefined4 *)param_1->field_001C);
      if (uVar6 != 0) {
        return uVar6;
      }
      return 0;
    }
  }
  else {
    if (STField<short>(iVar5,0x34) == 0) {
      /* ST_CALLSITE[00756022]: CALL dword ptr [EAX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar5 = (**(code **)(iVar5 + 8))
                        (*(int *)(iVar5 + 0x44 + STField<int>(iVar5,0x1C) * 8) + 0x18 + iVar4_mg1);
    }
    else {
      iVar5 = (int)STField<short>(iVar5,0x34);
    }
    if ((iVar5 + 8 + param_2 < iVar8) || (param_2 == 0)) {
      uVar6 = FUN_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,
                           (undefined4 *)(iVar4_mg1 + 0x10 + iVar4));
      if (uVar6 == 0) {
        return -2;
      }
      FUN_007561d0((AnonShape_00753C80_4C8E695D *)param_1,iVar4);
      iVar5 = param_1->field_000C;
      iVar3 = *(int *)(iVar5 + 0x44 + STField<int>(iVar5,0x1C) * 8);
      if (iVar3 == -1) {
        uVar9 = STField<undefined4>(iVar4_mg1,0x4);
      }
      else {
        uVar9 = *(undefined4 *)(iVar3 + 0x10 + iVar4_mg1);
      }
      STField<int>(iVar5,0x1C) = STField<int>(iVar5,0x1C) + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar5_mg4 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,uVar9,
                               *(int *)(param_1->field_000C + 0x1c));
      iVar1 = FUN_00753c80((AnonShape_00753C80_4C8E695D *)param_1,(int)STField<short>(iVar5_mg4,0x8));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar4_mg2 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,param_3,
                               *(int *)(param_1->field_000C + 0x1c));
      if ((iVar8 <= (int)((int)STField<short>(iVar4_mg2,0x8) + (int)STField<short>(iVar5_mg4,0x8) + uVar6))
         && ((int)STField<short>(iVar5_mg4,0x8) <= (int)((int)STField<short>(iVar4_mg2,0x8) + uVar6))) {
        return 0;
      }
      *(undefined4 *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) = 0;
      *STField<undefined4 *>(param_1,0x1C) = STField<undefined4>(iVar4_mg2,0x4);
      FUN_007574c0((AnonShape_00753C80_4C8E695D *)param_1,iVar4_mg2,(uint *)param_1->field_001C,0);
      if ((int)STField<short>(iVar4_mg2,0x8) + (int)STField<short>(iVar5_mg4,0x8) < iVar8) {
        Library::MSVCRT::FUN_0072da70
                  ((undefined4 *)(STField<short>(iVar5_mg4,0x8) + 0x10 + iVar5_mg4),
                   (AnonPointee_TLOBaseTy_0607 *)(iVar4_mg2 + 0x10),(int)STField<short>(iVar4_mg2,0x8));
        STField<short>(iVar5_mg4,0x8) = STField<short>(iVar5_mg4,0x8) + STField<short>(iVar4_mg2,0x8);
        DVar7 = FUN_00757670((AnonShape_00757670_86D3B9A7 *)param_1,param_1->field_0010);
        if ((int)DVar7 < 0) {
          return DVar7;
        }
        *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + -1;
        *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) = iVar4;
        return 1;
      }
      *(undefined4 *)(iVar4_mg2 + 4) = *(undefined4 *)(iVar5_mg4 + 0x10 + iVar1);
      uVar6 = FUN_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,
                           (undefined4 *)(iVar5_mg4 + 0x10 + iVar1));
      if (uVar6 == 0) {
        return -2;
      }
      local_8 = (undefined2)iVar1;
      STField<undefined2>(iVar5_mg4,0x8) = local_8;
      *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + -1;
      *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) = iVar4;
      uVar6 = FUN_00755da0((AnonShape_00753C80_4C8E695D *)param_1,(undefined4 *)param_1->field_001C);
      if (uVar6 != 0) {
        return uVar6;
      }
    }
  }
  return 0;
}

