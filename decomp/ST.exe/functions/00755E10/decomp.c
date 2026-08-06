#include "../../pseudocode_runtime.h"


int FUN_00755e10(AnonShape_00755E10_BD685653 *param_1,int param_2,undefined4 param_3)

{
  int iVar3;
  int iVar4;
  int iVar2;
  int iVar5;
  uint uVar6;
  int iVar7;
  DWORD DVar8;
  int iVar1;
  int iVar9;
  undefined4 uVar10;
  undefined2 local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar9 = *(short *)(param_1->field_0008 + 0x16) + -0x10;
  *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + -1;
  iVar5 = param_1->field_000C;
  iVar4 = *(int *)(iVar5 + 0x1c);
  iVar7 = *(int *)(iVar5 + 0x44 + iVar4 * 8);
  iVar4 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,
                       *(undefined4 *)(iVar5 + 0x40 + iVar4 * 8),iVar4);
  *(uint *)(param_1->field_0008 + 8) = *(uint *)(param_1->field_0008 + 8) | 0x10;
  iVar2 = FUN_00757450(param_1,iVar7);
  iVar5 = param_1->field_000C;
  if (iVar2 < *(short *)(iVar4 + 8)) {
    if (*(short *)(iVar5 + 0x34) == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar5 = (**(code **)(iVar5 + 8))(iVar2 + 0x18 + iVar4);
    }
    else {
      iVar5 = (int)*(short *)(iVar5 + 0x34);
    }
    if (iVar5 + 8 + param_2 < iVar9) {
      uVar6 = FUN_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,
                           (undefined4 *)(iVar2 + 0x10 + iVar4));
      if (uVar6 == 0) {
        return -2;
      }
      iVar5 = param_1->field_000C;
      uVar10 = *(undefined4 *)(*(int *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8) + 0x10 + iVar4);
      *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar4 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,uVar10,
                           *(int *)(param_1->field_000C + 0x1c));
      iVar5 = param_1->field_0010;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar7 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,param_3,
                           *(int *)(param_1->field_000C + 0x1c));
      if ((iVar9 <= (int)((int)*(short *)(iVar4 + 8) + (int)*(short *)(iVar7 + 8) + uVar6)) &&
         ((int)*(short *)(iVar4 + 8) <= (int)((int)*(short *)(iVar7 + 8) + uVar6))) {
        return 0;
      }
      *(undefined4 *)param_1->field_001C = *(undefined4 *)(iVar4 + 4);
      FUN_007574c0((AnonShape_00753C80_4C8E695D *)param_1,iVar7,(uint *)param_1->field_001C,
                   (int)*(short *)(iVar7 + 8));
      if ((int)*(short *)(iVar4 + 8) + (int)*(short *)(iVar7 + 8) < iVar9) {
        Library::MSVCRT::FUN_0072da70
                  ((undefined4 *)(*(short *)(iVar7 + 8) + 0x10 + iVar7),
                   (AnonPointee_TLOBaseTy_0607 *)(iVar4 + 0x10),(int)*(short *)(iVar4 + 8));
        *(short *)(iVar7 + 8) = *(short *)(iVar7 + 8) + *(short *)(iVar4 + 8);
        DVar8 = FUN_00757670((AnonShape_00757670_86D3B9A7 *)param_1,iVar5);
        if ((int)DVar8 < 0) {
          return DVar8;
        }
        *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + -1;
        return 1;
      }
      uVar6 = FUN_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,(undefined4 *)(iVar4 + 0x10));
      if (uVar6 == 0) {
        return -2;
      }
      Library::MSVCRT::FUN_0072da70
                ((undefined4 *)(iVar4 + 0x10),(AnonPointee_TLOBaseTy_0607 *)(iVar4 + 0x10 + uVar6),
                 (int)*(short *)(iVar4 + 8) - uVar6);
      *(short *)(iVar4 + 8) = *(short *)(iVar4 + 8) - (short)uVar6;
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)param_1->field_001C;
      *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + -1;
      uVar6 = FUN_00755da0((uint)param_1,(undefined4 *)param_1->field_001C);
      if (uVar6 != 0) {
        return uVar6;
      }
      return 0;
    }
  }
  else {
    if (*(short *)(iVar5 + 0x34) == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar5 = (**(code **)(iVar5 + 8))
                        (*(int *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8) + 0x18 + iVar4);
    }
    else {
      iVar5 = (int)*(short *)(iVar5 + 0x34);
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((iVar5 + 8 + param_2 < iVar9) || (param_2 == 0)) {
      uVar6 = FUN_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,
                           (undefined4 *)(iVar4 + 0x10 + iVar7));
      if (uVar6 == 0) {
        return -2;
      }
      FUN_007561d0((AnonShape_00753C80_4C8E695D *)param_1,iVar7);
      iVar5 = param_1->field_000C;
      iVar3 = *(int *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8);
      if (iVar3 == -1) {
        uVar10 = *(undefined4 *)(iVar4 + 4);
      }
      else {
        uVar10 = *(undefined4 *)(iVar3 + 0x10 + iVar4);
      }
      *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar5 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,uVar10,
                           *(int *)(param_1->field_000C + 0x1c));
      iVar1 = FUN_00753c80((AnonShape_00753C80_4C8E695D *)param_1,(int)*(short *)(iVar5 + 8));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar4 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,param_3,
                           *(int *)(param_1->field_000C + 0x1c));
      if ((iVar9 <= (int)((int)*(short *)(iVar4 + 8) + (int)*(short *)(iVar5 + 8) + uVar6)) &&
         ((int)*(short *)(iVar5 + 8) <= (int)((int)*(short *)(iVar4 + 8) + uVar6))) {
        return 0;
      }
      *(undefined4 *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) = 0;
      *(undefined4 *)param_1->field_001C = *(undefined4 *)(iVar4 + 4);
      FUN_007574c0((AnonShape_00753C80_4C8E695D *)param_1,iVar4,(uint *)param_1->field_001C,0);
      if ((int)*(short *)(iVar4 + 8) + (int)*(short *)(iVar5 + 8) < iVar9) {
        Library::MSVCRT::FUN_0072da70
                  ((undefined4 *)(*(short *)(iVar5 + 8) + 0x10 + iVar5),
                   (AnonPointee_TLOBaseTy_0607 *)(iVar4 + 0x10),(int)*(short *)(iVar4 + 8));
        *(short *)(iVar5 + 8) = *(short *)(iVar5 + 8) + *(short *)(iVar4 + 8);
        DVar8 = FUN_00757670((AnonShape_00757670_86D3B9A7 *)param_1,param_1->field_0010);
        if ((int)DVar8 < 0) {
          return DVar8;
        }
        *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + -1;
        *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) = iVar7;
        return 1;
      }
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar5 + 0x10 + iVar1);
      uVar6 = FUN_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,
                           (undefined4 *)(iVar5 + 0x10 + iVar1));
      if (uVar6 == 0) {
        return -2;
      }
      local_8 = (undefined2)iVar1;
      *(undefined2 *)(iVar5 + 8) = local_8;
      *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + -1;
      *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) = iVar7;
      uVar6 = FUN_00755da0((uint)param_1,(undefined4 *)param_1->field_001C);
      if (uVar6 != 0) {
        return uVar6;
      }
    }
  }
  return 0;
}

