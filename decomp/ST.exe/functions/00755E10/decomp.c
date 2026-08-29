#include "../../pseudocode_runtime.h"


int FUN_00755e10(RecoveredRecordView_00755E10_DA2F2616 *param_1,int param_2,undefined4 param_3)

{
  AnonNested_RecoveredRecordView_00755E10_DA2F2616_000C_7A3A6539 *pAVar1;
  uint *puVar2;
  int iVar4_mg1;
  int iVar2;
  int iVar3;
  int iVar4_mg3;
  int iVar7_mg1;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  int iVar5_mg4;
  int iVar1;
  int iVar4_mg2;
  int iVar7;
  uint uVar8;
  ushort local_8;
  iVar7 = (short)param_1->field_0008->field_0016 + -0x10;
  param_1->field_000C->field_001C = (undefined4 *)((int)param_1->field_000C->field_001C + -1);
  pAVar1 = param_1->field_000C;
  puVar2 = pAVar1->field_001C;
  iVar3 = *(int *)(&pAVar1[2].field_0x4 + (int)puVar2 * 8);
  iVar4_mg1 = (int)FUN_00753b80((RecoveredRecordView_00750F20_49A60217 *)param_1,
                                *(undefined4 *)(&pAVar1[2].field_0x0 + (int)puVar2 * 8),(int)puVar2);
  param_1->field_0008->field_0008 = param_1->field_0008->field_0008 | 0x10;

  iVar2 = FUN_00757450(param_1,iVar3);
  pAVar1 = param_1->field_000C;
  if (iVar2 < STField<short>(iVar4_mg1,0x8)) {
    if (*(short *)&pAVar1[1].field_0x14 == 0) {
      /* ST_CALLSITE[00755E92]: CALL dword ptr [EAX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar3 = (**(code **)&pAVar1->field_0x8)(iVar2 + 0x18 + iVar4_mg1);
    }
    else {
      iVar3 = (int)*(short *)&pAVar1[1].field_0x14;
    }
    if (iVar3 + 8 + param_2 < iVar7) {

      iVar3 = FUN_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,
                           (undefined4 *)(iVar2 + 0x10 + iVar4_mg1));
      if (iVar3 == 0) {
        return -2;
      }
      pAVar1 = param_1->field_000C;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar8 = *(undefined4 *)
               (*(int *)(&pAVar1[2].field_0x4 + (int)pAVar1->field_001C * 8) + 0x10 + iVar4_mg1);
      pAVar1->field_001C = (undefined4 *)((int)pAVar1->field_001C + 1);
      iVar4_mg3 = (int)FUN_00753b80((RecoveredRecordView_00750F20_49A60217 *)param_1,uVar8,
                                    (int)param_1->field_000C->field_001C);
      iVar6 = param_1->field_0010;
      iVar7_mg1 = (int)FUN_00753b80((RecoveredRecordView_00750F20_49A60217 *)param_1,param_3,
                                    (int)param_1->field_000C->field_001C);
      if ((iVar7 <= (int)STField<short>(iVar4_mg3,0x8) + (int)STField<short>(iVar7_mg1,0x8) + iVar3) &&
         ((int)STField<short>(iVar4_mg3,0x8) <= STField<short>(iVar7_mg1,0x8) + iVar3)) {
        return 0;
      }
      *STField<undefined4 *>(param_1,0x1C) = STField<undefined4>(iVar4_mg3,0x4);
      FUN_007574c0((RecoveredRecordView_00753C80_637B4E8C *)param_1,
                   (RecoveredRecord_007574C0_96B4D703 *)iVar7_mg1,(uint *)param_1->field_001C,
                   (int)STField<short>(iVar7_mg1,0x8));
      if ((int)STField<short>(iVar4_mg3,0x8) + (int)STField<short>(iVar7_mg1,0x8) < iVar7) {

        Library::MSVCRT::FUN_0072da70
                  ((RecoveredRecord_006BFE70_3123BCE8 *)
                   (STField<short>(iVar7_mg1,0x8) + 0x10 + iVar7_mg1),
                   (AnonPointee_TLOBaseTy_0607 *)(iVar4_mg3 + 0x10),(int)STField<short>(iVar4_mg3,0x8));
        STField<short>(iVar7_mg1,0x8) = STField<short>(iVar7_mg1,0x8) + STField<short>(iVar4_mg3,0x8);

        DVar4 = FUN_00757670((AnonShape_00757670_86D3B9A7 *)param_1,iVar6);
        if ((int)DVar4 < 0) {
          return DVar4;
        }
        param_1->field_000C->field_001C = (undefined4 *)((int)param_1->field_000C->field_001C + -1);
        return 1;
      }

      iVar3 = FUN_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,(undefined4 *)(iVar4_mg3 + 0x10)
                          );
      if (iVar3 == 0) {
        return -2;
      }

      Library::MSVCRT::FUN_0072da70
                ((RecoveredRecord_006BFE70_3123BCE8 *)(iVar4_mg3 + 0x10),
                 (AnonPointee_TLOBaseTy_0607 *)(iVar4_mg3 + 0x10 + iVar3),
                 STField<short>(iVar4_mg3,0x8) - iVar3);
      STField<short>(iVar4_mg3,0x8) = STField<short>(iVar4_mg3,0x8) - (short)iVar3;
      STField<undefined4>(iVar4_mg3,0x4) = *STField<undefined4 *>(param_1,0x1C);
      param_1->field_000C->field_001C = (undefined4 *)((int)param_1->field_000C->field_001C + -1);

      uVar5 = FUN_00755da0((RecoveredRecordView_00753C80_637B4E8C *)param_1,
                           (undefined4 *)param_1->field_001C);
      if (uVar5 != 0) {
        return uVar5;
      }
      return 0;
    }
  }
  else {
    if (*(short *)&pAVar1[1].field_0x14 == 0) {
      /* ST_CALLSITE[00756022]: CALL dword ptr [EAX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar6 = (**(code **)&pAVar1->field_0x8)
                        (*(int *)(&pAVar1[2].field_0x4 + (int)pAVar1->field_001C * 8) + 0x18 +
                         iVar4_mg1);
    }
    else {
      iVar6 = (int)*(short *)&pAVar1[1].field_0x14;
    }
    if ((iVar6 + 8 + param_2 < iVar7) || (param_2 == 0)) {

      iVar6 = FUN_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,
                           (undefined4 *)(iVar4_mg1 + 0x10 + iVar3));
      if (iVar6 == 0) {
        return -2;
      }
      FUN_007561d0((RecoveredRecordView_00753C80_637B4E8C *)param_1,iVar3);
      pAVar1 = param_1->field_000C;
      if (*(int *)(&pAVar1[2].field_0x4 + (int)pAVar1->field_001C * 8) == -1) {
        uVar8 = STField<undefined4>(iVar4_mg1,0x4);
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        uVar8 = *(undefined4 *)
                 (*(int *)(&pAVar1[2].field_0x4 + (int)pAVar1->field_001C * 8) + 0x10 + iVar4_mg1);
      }
      pAVar1->field_001C = (undefined4 *)((int)pAVar1->field_001C + 1);
      /* ST_CALLSITE[00756089]: CALL 0x00753b80; direct=00753B80 FUN_00753b80; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006BFE70_3123BCE8; source view only; no Ghidra override */
      iVar5_mg4 = (int)FUN_00753b80((RecoveredRecordView_00750F20_49A60217 *)param_1,uVar8,
                                    (int)param_1->field_000C->field_001C);

      iVar1 = FUN_00753c80((RecoveredRecordView_00753C80_637B4E8C *)param_1,
                           (int)STField<short>(iVar5_mg4,0x8));
      iVar4_mg2 = (int)FUN_00753b80((RecoveredRecordView_00750F20_49A60217 *)param_1,param_3,
                                    (int)param_1->field_000C->field_001C);
      if ((iVar7 <= (int)STField<short>(iVar4_mg2,0x8) + (int)STField<short>(iVar5_mg4,0x8) + iVar6) &&
         ((int)STField<short>(iVar5_mg4,0x8) <= STField<short>(iVar4_mg2,0x8) + iVar6)) {
        return 0;
      }
      *(undefined4 *)(&param_1->field_000C[2].field_0x4 + (int)param_1->field_000C->field_001C * 8)
           = 0;
      *STField<undefined4 *>(param_1,0x1C) = STField<undefined4>(iVar4_mg2,0x4);
      FUN_007574c0((RecoveredRecordView_00753C80_637B4E8C *)param_1,
                   (RecoveredRecord_007574C0_96B4D703 *)iVar4_mg2,(uint *)param_1->field_001C,0);
      if ((int)STField<short>(iVar4_mg2,0x8) + (int)STField<short>(iVar5_mg4,0x8) < iVar7) {

        Library::MSVCRT::FUN_0072da70
                  ((RecoveredRecord_006BFE70_3123BCE8 *)
                   (STField<short>(iVar5_mg4,0x8) + 0x10 + iVar5_mg4),
                   (AnonPointee_TLOBaseTy_0607 *)(iVar4_mg2 + 0x10),(int)STField<short>(iVar4_mg2,0x8));
        STField<short>(iVar5_mg4,0x8) = STField<short>(iVar5_mg4,0x8) + STField<short>(iVar4_mg2,0x8);

        DVar4 = FUN_00757670((AnonShape_00757670_86D3B9A7 *)param_1,param_1->field_0010);
        if ((int)DVar4 < 0) {
          return DVar4;
        }
        param_1->field_000C->field_001C = (undefined4 *)((int)param_1->field_000C->field_001C + -1);
        *(int *)(&param_1->field_000C[2].field_0x4 + (int)param_1->field_000C->field_001C * 8) =
             iVar3;
        return 1;
      }
      *(undefined4 *)(iVar4_mg2 + 4) = *(undefined4 *)(iVar5_mg4 + 0x10 + iVar1);

      iVar7 = FUN_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,
                           (undefined4 *)(iVar5_mg4 + 0x10 + iVar1));
      if (iVar7 == 0) {
        return -2;
      }
      local_8 = (undefined2)iVar1;
      STField<undefined2>(iVar5_mg4,0x8) = local_8;
      param_1->field_000C->field_001C = (undefined4 *)((int)param_1->field_000C->field_001C + -1);
      *(int *)(&param_1->field_000C[2].field_0x4 + (int)param_1->field_000C->field_001C * 8) = iVar3
      ;

      uVar5 = FUN_00755da0((RecoveredRecordView_00753C80_637B4E8C *)param_1,
                           (undefined4 *)param_1->field_001C);
      if (uVar5 != 0) {
        return uVar5;
      }
    }
  }
  return 0;
}

