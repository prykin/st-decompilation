#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0075575A CMP EAX,ESI classifies dword parameter loaded at 00755757

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00755DA0 -> 00755560 @ 00755DFC; FUN_00755da0 parameter param_1
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00753D90 @ 00753DC1 -> read as EAX on
   every CFG path | 00755DA0 @ 00755DFC -> read as EAX on every CFG path */

int FUN_00755560(RecoveredRecordView_00753C80_637B4E8C *param_1,ushort *param_2,int param_3,
                undefined4 param_4)

{
  RecoveredRecordView_00753C80_637B4E8C *pRVar1;
  byte *puVar2;
  int *piVar3;
  AnonNested_AnonShape_00753C80_4C8E695D_000C_9E74E987 *pAVar4;
  uint *puVar5;
  bool bVar6;
  RecoveredRecordView_00753C80_637B4E8C *pRVar7;
  int *piVar5;
  int iVar8;
  int iVar9;
  int uVar11;
  DWORD DVar10;
  RecoveredRecord_007574C0_96B4D703 *pRVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  RecoveredRecord_007574C0_96B4D703 *pRVar18;

  pRVar7 = param_1;
  bVar6 = false;
  pAVar4 = *(AnonNested_AnonShape_00753C80_4C8E695D_000C_9E74E987 **)
            &param_1->field_0008[1].field_0x18;
  param_1->field_000C = pAVar4;
  if (pAVar4->field_0034 == 0) {
    /* ST_CALLSITE[0075558E]: CALL dword ptr [EAX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar15 = (**(code **)&pAVar4->field_0x8)(param_2);
  }
  else {
    uVar15 = (uint)(short)pAVar4->field_0034;
  }
  pRVar1 = (RecoveredRecordView_00753C80_637B4E8C *)(uVar15 + 8);
  if (param_1[1].field_0010 < (int)pRVar1) {
    /* ST_CALLSITE[007555A5]: CALL 0x006bfb50; direct=006BFB50 FUN_006bfb50; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/AnonNested_AnonShape_00753C80_4C8E695D_0008_9237F694; source view only; no Ghidra override */
    piVar5 = FUN_006bfb50((int *)param_1[1].field_0008,(uint)pRVar1);
    param_1[1].field_0008 = (AnonNested_AnonShape_00753C80_4C8E695D_0008_9237F694 *)piVar5;
    if (piVar5 == nullptr) {
      return -2;
    }
    param_1[1].field_0010 = (int)pRVar1;
  }
  *(undefined4 *)param_1[1].field_0008 = param_4;
  *(int *)&(param_1[1].field_0008)->field_0x4 = param_3;
  puVar14 = param_2;
  puVar16 = (undefined4 *)&(param_1[1].field_0008)->field_0x8;
  for (uVar13 = uVar15 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar16 = *(undefined4 *)puVar14;
    puVar14 = puVar14 + 2;
    puVar16 = puVar16 + 1;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(char *)puVar16 = (char)*puVar14;
    puVar14 = (ushort *)((int)puVar14 + 1);
    puVar16 = (undefined4 *)((int)puVar16 + 1);
  }
  puVar2 = &param_1->field_0008->field_0x8;
  *(uint *)puVar2 = *(uint *)puVar2 | 0x10;
  param_1 = pRVar1;
  while( true ) {
    iVar17 = pRVar7->field_0008->field_0034 + pRVar7->field_0010;
    pAVar4 = pRVar7->field_000C;
    if (*(int *)(&pAVar4[1].field_0xe + (int)pAVar4->field_001C * 8) < 0) {
      *(undefined4 *)(&pAVar4[1].field_0xe + (int)pAVar4->field_001C * 8) = 0;
    }
    else {
      if (pAVar4->field_0034 == 0) {
        /* ST_CALLSITE[00755623]: CALL dword ptr [EAX + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar8 = (**(code **)&pAVar4->field_0x8)
                          (*(int *)(&pAVar4[1].field_0xe + (int)pAVar4->field_001C * 8) + 0x18 +
                           iVar17);
      }
      else {
        iVar8 = (short)pAVar4->field_0034;
      }
      piVar3 = (int *)(&pRVar7->field_000C[1].field_0xe + (int)pRVar7->field_000C->field_001C * 8);
      *piVar3 = *piVar3 + iVar8 + 8;
    }
    if ((int)(&param_1->field_0x0 + STField<short>(iVar17,0x8)) <=
        *(short *)&pRVar7->field_0008->field_0x16 + -0x10) {

      uVar12 = FUN_00755830(pRVar7,(uint *)pRVar7[1].field_0008,(int)pRVar7->field_000C->field_001C);
      if (uVar12 != 0) {
        return uVar12;
      }
      if (bVar6) goto LAB_007557fa;
      goto LAB_0075580a;
    }
    bVar6 = true;
    iVar8 = *(int *)(&pRVar7->field_000C[1].field_0xe + (int)pRVar7->field_000C->field_001C * 8);

    iVar9 = FUN_00753c80(pRVar7,(STField<short>(iVar17,0x8) >> 1) + 4);
    if (iVar8 == iVar9) {
      param_1 = STPointerBoundaryCast<RecoveredRecordView_00753C80_637B4E8C *>(FUN_00757530((AnonShape_00757530_EEED7D69 *)pRVar7,0,
                             (undefined4 *)pRVar7[1].field_0008));
      if (param_1 == nullptr) {
        return -2;
      }
    }
    else {
      param_1 = STPointerBoundaryCast<RecoveredRecordView_00753C80_637B4E8C *>(FUN_00757530((AnonShape_00757530_EEED7D69 *)pRVar7,0,
                             (undefined4 *)(iVar9 + 0x10 + iVar17)));
      if (param_1 == nullptr) {
        return -2;
      }

      Library::MSVCRT::FUN_0072da70
                ((RecoveredRecord_006BFE70_3123BCE8 *)(iVar9 + 0x10 + iVar17),
                 (AnonPointee_TLOBaseTy_0607 *)((int)&param_1->field_0010 + iVar17 + iVar9),
                 ((int)STField<short>(iVar17,0x8) - (int)param_1) - iVar9);
      STField<short>(iVar17,0x8) = STField<short>(iVar17,0x8) - (short)param_1;
    }

    uVar11 = FUN_00753b40(pRVar7);
    if (uVar11 < 0) {
      return uVar11;
    }

    DVar10 = Library::DKW::FMM::FUN_006d4c50
                       ((AnonNested_00757670_0008_104EC36D *)pRVar7->field_0008,uVar11,
                        (int)((AnonNested_00757670_0008_104EC36D *)pRVar7->field_0008)->field_0016);
    if (DVar10 != 0) {
      return DVar10;
    }
    iVar17 = pRVar7->field_0008->field_0034;
    pRVar18 = (RecoveredRecord_007574C0_96B4D703 *)(pRVar7->field_0010 + iVar17);
    pRVar11 = (RecoveredRecord_007574C0_96B4D703 *)(iVar17 + uVar11);

    Library::MSVCRT::FUN_0072da70
              ((RecoveredRecord_006BFE70_3123BCE8 *)&pRVar11[1].field_0x6,
               (AnonPointee_TLOBaseTy_0607 *)(&pRVar18[1].field_0x6 + iVar9),
               pRVar18->field_0008 - iVar9);
    *(int *)pRVar11 = uVar11;
    pRVar11->field_0008 = pRVar18->field_0008 - (short)iVar9;
    *(undefined4 *)&pRVar11->field_0x4 = **(undefined4 **)&pRVar7[1].field_0x4;
    pRVar18->field_0008 = (short)iVar9;
    **(undefined4 **)&pRVar7[1].field_0x4 = *(undefined4 *)pRVar11;
    if (iVar8 < iVar9) {
      FUN_007574c0(pRVar7,pRVar18,(uint *)pRVar7[1].field_0008,iVar8);
    }
    else if (iVar9 < iVar8) {
      FUN_007574c0(pRVar7,pRVar11,(uint *)pRVar7[1].field_0008,(iVar8 - (int)param_1) - iVar9);
      *(undefined4 *)(&pRVar7->field_000C[1].field_0xa + (int)pRVar7->field_000C->field_001C * 8) =
           **(undefined4 **)&pRVar7[1].field_0x4;
      pAVar4 = pRVar7->field_000C;
      *(int *)(&pAVar4[1].field_0xe + (int)pAVar4->field_001C * 8) =
           *(int *)(&pAVar4[1].field_0xe + (int)pAVar4->field_001C * 8) - iVar9;
    }
    param_1 = STPointerBoundaryCast<RecoveredRecordView_00753C80_637B4E8C *>(FUN_00757530((AnonShape_00757530_EEED7D69 *)pRVar7,1,
                           *(undefined4 **)&pRVar7[1].field_0x4));
    if (param_1 == nullptr) {
      return -2;
    }
    pRVar7->field_000C->field_001C = (uint *)((int)pRVar7->field_000C->field_001C + -1);
    puVar5 = pRVar7->field_000C->field_001C;
    if ((int)puVar5 < 0) break;
    FUN_00753b80((RecoveredRecordView_00750F20_49A60217 *)pRVar7,
                 *(undefined4 *)(&pRVar7->field_000C[1].field_0xa + (int)puVar5 * 8),(int)puVar5);
  }

  uVar15 = FUN_00755830(pRVar7,*(uint **)&pRVar7[1].field_0x4,(int)pRVar7->field_000C->field_001C);
  if (uVar15 == 0) {
LAB_007557fa:

    uVar15 = FUN_00755970(pRVar7,param_2,0);
    if (-1 < (int)uVar15) {
LAB_0075580a:
      uVar15 = 0;
    }
  }
  return uVar15;
}

