#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0075575A CMP EAX,ESI classifies dword parameter loaded at 00755757

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00755DA0 -> 00755560 @ 00755DFC; FUN_00755da0 parameter param_1 */

uint FUN_00755560(AnonShape_00753C80_4C8E695D *param_1,ushort *param_2,int param_3,
                 undefined4 param_4)

{
  AnonShape_00753C80_4C8E695D *pAVar1;
  byte *puVar2;
  AnonNested_AnonShape_00753C80_4C8E695D_000C_9E74E987 *pAVar3;
  uint *puVar4;
  bool bVar5;
  AnonShape_00753C80_4C8E695D *pAVar6;
  int *piVar5;
  int iVar7;
  int iVar8;
  int uVar11;
  DWORD DVar9;
  int *piVar10;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;

  pAVar6 = param_1;
  bVar5 = false;
  pAVar3 = *(AnonNested_AnonShape_00753C80_4C8E695D_000C_9E74E987 **)
            &param_1->field_0008[1].field_0x18;
  param_1->field_000C = pAVar3;
  if (pAVar3->field_0034 == 0) {
    /* ST_CALLSITE[0075558E]: CALL dword ptr [EAX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar15 = (**(code **)&pAVar3->field_0x8)(param_2);
  }
  else {
    uVar15 = (uint)(short)pAVar3->field_0034;
  }
  pAVar1 = (AnonShape_00753C80_4C8E695D *)(uVar15 + 8);
  if (param_1[1].field_0010 < (int)pAVar1) {
    piVar5 = FUN_006bfb50((int *)param_1[1].field_0008,(uint)pAVar1);
    param_1[1].field_0008 = (AnonNested_AnonShape_00753C80_4C8E695D_0008_9237F694 *)piVar5;
    if (piVar5 == nullptr) {
      return 0xfffffffe;
    }
    param_1[1].field_0010 = (int)pAVar1;
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
  param_1 = pAVar1;
  while( true ) {
    iVar17 = pAVar6->field_0008->field_0034 + pAVar6->field_0010;
    pAVar3 = pAVar6->field_000C;
    if (*(int *)(&pAVar3[1].field_0xe + (int)pAVar3->field_001C * 8) < 0) {
      *(undefined4 *)(&pAVar3[1].field_0xe + (int)pAVar3->field_001C * 8) = 0;
    }
    else {
      if (pAVar3->field_0034 == 0) {
        /* ST_CALLSITE[00755623]: CALL dword ptr [EAX + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar7 = (**(code **)&pAVar3->field_0x8)
                          (*(int *)(&pAVar3[1].field_0xe + (int)pAVar3->field_001C * 8) + 0x18 +
                           iVar17);
      }
      else {
        iVar7 = (short)pAVar3->field_0034;
      }
      piVar10 = (int *)(&pAVar6->field_000C[1].field_0xe + (int)pAVar6->field_000C->field_001C * 8);
      *piVar10 = *piVar10 + iVar7 + 8;
    }
    if ((int)(&param_1->field_0x0 + STField<short>(iVar17,0x8)) <=
        *(short *)&pAVar6->field_0008->field_0x16 + -0x10) {
      uVar12 = FUN_00755830(pAVar6,(uint *)pAVar6[1].field_0008,(int)pAVar6->field_000C->field_001C);
      if (uVar12 != 0) {
        return uVar12;
      }
      if (bVar5) goto LAB_007557fa;
      goto LAB_0075580a;
    }
    bVar5 = true;
    iVar7 = *(int *)(&pAVar6->field_000C[1].field_0xe + (int)pAVar6->field_000C->field_001C * 8);
    iVar8 = FUN_00753c80(pAVar6,(STField<short>(iVar17,0x8) >> 1) + 4);
    if (iVar7 == iVar8) {
      param_1 = (AnonShape_00753C80_4C8E695D *)
                FUN_00757530((AnonShape_00757530_EEED7D69 *)pAVar6,0,
                             (undefined4 *)pAVar6[1].field_0008);
      if (param_1 == nullptr) {
        return 0xfffffffe;
      }
    }
    else {
      param_1 = (AnonShape_00753C80_4C8E695D *)
                FUN_00757530((AnonShape_00757530_EEED7D69 *)pAVar6,0,
                             (undefined4 *)(iVar8 + 0x10 + iVar17));
      if (param_1 == nullptr) {
        return 0xfffffffe;
      }
      Library::MSVCRT::FUN_0072da70
                ((undefined4 *)(iVar8 + 0x10 + iVar17),
                 (AnonPointee_TLOBaseTy_0607 *)((int)&param_1->field_0010 + iVar17 + iVar8),
                 ((int)STField<short>(iVar17,0x8) - (int)param_1) - iVar8);
      STField<short>(iVar17,0x8) = STField<short>(iVar17,0x8) - (short)param_1;
    }
    uVar11 = FUN_00753b40(pAVar6);
    if (uVar11 < 0) {
      return uVar11;
    }
    DVar9 = Library::DKW::FMM::FUN_006d4c50
                      ((AnonNested_00757670_0008_104EC36D *)pAVar6->field_0008,uVar11,
                       (int)((AnonNested_00757670_0008_104EC36D *)pAVar6->field_0008)->field_0016);
    if (DVar9 != 0) {
      return DVar9;
    }
    iVar17 = pAVar6->field_0008->field_0034;
    iVar18 = pAVar6->field_0010 + iVar17;
    piVar10 = (int *)(iVar17 + uVar11);
    Library::MSVCRT::FUN_0072da70
              (piVar10 + 4,(AnonPointee_TLOBaseTy_0607 *)(iVar8 + 0x10 + iVar18),
               STField<short>(iVar18,0x8) - iVar8);
    *piVar10 = uVar11;
    *(short *)(piVar10 + 2) = STField<short>(iVar18,0x8) - (short)iVar8;
    piVar10[1] = **(int **)&pAVar6[1].field_0x4;
    STField<short>(iVar18,0x8) = (short)iVar8;
    **(int **)&pAVar6[1].field_0x4 = *piVar10;
    if (iVar7 < iVar8) {
      FUN_007574c0(pAVar6,iVar18,(uint *)pAVar6[1].field_0008,iVar7);
    }
    else if (iVar8 < iVar7) {
      FUN_007574c0(pAVar6,(int)piVar10,(uint *)pAVar6[1].field_0008,(iVar7 - (int)param_1) - iVar8);
      *(undefined4 *)(&pAVar6->field_000C[1].field_0xa + (int)pAVar6->field_000C->field_001C * 8) =
           **(undefined4 **)&pAVar6[1].field_0x4;
      pAVar3 = pAVar6->field_000C;
      *(int *)(&pAVar3[1].field_0xe + (int)pAVar3->field_001C * 8) =
           *(int *)(&pAVar3[1].field_0xe + (int)pAVar3->field_001C * 8) - iVar8;
    }
    param_1 = (AnonShape_00753C80_4C8E695D *)
              FUN_00757530((AnonShape_00757530_EEED7D69 *)pAVar6,1,
                           *(undefined4 **)&pAVar6[1].field_0x4);
    if (param_1 == nullptr) {
      return 0xfffffffe;
    }
    pAVar6->field_000C->field_001C = (uint *)((int)pAVar6->field_000C->field_001C + -1);
    puVar4 = pAVar6->field_000C->field_001C;
    if ((int)puVar4 < 0) break;
    FUN_00753b80((AnonShape_00750F20_F8C16F98 *)pAVar6,
                 *(undefined4 *)(&pAVar6->field_000C[1].field_0xa + (int)puVar4 * 8),(int)puVar4);
  }
  uVar15 = FUN_00755830(pAVar6,*(uint **)&pAVar6[1].field_0x4,(int)pAVar6->field_000C->field_001C);
  if (uVar15 == 0) {
LAB_007557fa:
    uVar15 = FUN_00755970(pAVar6,param_2,0);
    if (-1 < (int)uVar15) {
LAB_0075580a:
      uVar15 = 0;
    }
  }
  return uVar15;
}

