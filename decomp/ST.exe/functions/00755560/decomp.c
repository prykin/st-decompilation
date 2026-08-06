#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0075575A CMP EAX,ESI classifies dword parameter loaded at 00755757 */

uint FUN_00755560(AnonShape_00755560_6DE97093 *param_1,ushort *param_2,int param_3,
                 undefined4 param_4)

{
  AnonShape_00755560_6DE97093 *pAVar1;
  uint *puVar2;
  bool bVar3;
  AnonShape_00755560_6DE97093 *pAVar4;
  int *piVar5;
  int iVar5;
  int iVar6;
  int uVar11;
  DWORD DVar7;
  int *piVar8;
  uint uVar12;
  uint uVar9;
  ushort *puVar10;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;

  pAVar4 = param_1;
  bVar3 = false;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar5 = *(int *)(param_1->field_0008 + 0x50);
  param_1->field_000C = iVar5;
  if (*(short *)(iVar5 + 0x34) == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar13 = (**(code **)(iVar5 + 8))(param_2);
  }
  else {
    uVar13 = (uint)*(short *)(iVar5 + 0x34);
  }
  pAVar1 = (AnonShape_00755560_6DE97093 *)(uVar13 + 8);
  if ((int)param_1->field_0024 < (int)pAVar1) {
    piVar5 = FUN_006bfb50((int *)param_1->field_001C,(uint)pAVar1);
    param_1->field_001C = piVar5;
    if (piVar5 == nullptr) {
      return 0xfffffffe;
    }
    param_1->field_0024 = pAVar1;
  }
  *(undefined4 *)param_1->field_001C = param_4;
  *(int *)(param_1->field_001C + 4) = param_3;
  puVar10 = param_2;
  puVar14 = (undefined4 *)(param_1->field_001C + 8);
  for (uVar9 = uVar13 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar14 = *(undefined4 *)puVar10;
    puVar10 = puVar10 + 2;
    puVar14 = puVar14 + 1;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(char *)puVar14 = (char)*puVar10;
    puVar10 = (ushort *)((int)puVar10 + 1);
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  puVar2 = (uint *)(param_1->field_0008 + 8);
  *puVar2 = *puVar2 | 0x10;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = pAVar1;
  while( true ) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar15 = *(int *)(pAVar4->field_0008 + 0x34) + *(int *)&pAVar4->field_0x10;
    iVar5 = pAVar4->field_000C;
    iVar6 = *(int *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8);
    if (iVar6 < 0) {
      *(undefined4 *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8) = 0;
    }
    else {
      if (*(short *)(iVar5 + 0x34) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar5 = (**(code **)(iVar5 + 8))(iVar6 + 0x18 + iVar15);
      }
      else {
        iVar5 = (int)*(short *)(iVar5 + 0x34);
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      piVar8 = (int *)(pAVar4->field_000C + 0x44 + *(int *)(pAVar4->field_000C + 0x1c) * 8);
      *piVar8 = *piVar8 + iVar5 + 8;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((int)(&param_1->field_0x0 + *(short *)(iVar15 + 8)) <=
        *(short *)(pAVar4->field_0008 + 0x16) + -0x10) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar12 = FUN_00755830((AnonShape_00753C80_4C8E695D *)pAVar4,(uint *)pAVar4->field_001C,
                            *(int *)(pAVar4->field_000C + 0x1c));
      if (uVar12 != 0) {
        return uVar12;
      }
      if (bVar3) goto LAB_007557fa;
      goto LAB_0075580a;
    }
    bVar3 = true;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar5 = *(int *)(pAVar4->field_000C + 0x44 + *(int *)(pAVar4->field_000C + 0x1c) * 8);
    iVar6 = FUN_00753c80((AnonShape_00753C80_4C8E695D *)pAVar4,(*(short *)(iVar15 + 8) >> 1) + 4);
    if (iVar5 == iVar6) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (AnonShape_00755560_6DE97093 *)
                FUN_00757530((AnonShape_00757530_EEED7D69 *)pAVar4,0,
                             (undefined4 *)pAVar4->field_001C);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_1 == nullptr) {
        return 0xfffffffe;
      }
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (AnonShape_00755560_6DE97093 *)
                FUN_00757530((AnonShape_00757530_EEED7D69 *)pAVar4,0,
                             (undefined4 *)(iVar6 + 0x10 + iVar15));
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_1 == nullptr) {
        return 0xfffffffe;
      }
      Library::MSVCRT::FUN_0072da70
                ((undefined4 *)(iVar6 + 0x10 + iVar15),
                 (AnonPointee_TLOBaseTy_0607 *)(&param_1->field_0x10 + iVar15 + iVar6),
                 ((int)*(short *)(iVar15 + 8) - (int)param_1) - iVar6);
      *(short *)(iVar15 + 8) = *(short *)(iVar15 + 8) - (short)param_1;
    }
    uVar11 = FUN_00753b40((AnonShape_00753C80_4C8E695D *)pAVar4);
    if (uVar11 < 0) {
      return uVar11;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    DVar7 = Library::DKW::FMM::FUN_006d4c50
                      (pAVar4->field_0008,uVar11,(int)*(short *)(pAVar4->field_0008 + 0x16));
    if (DVar7 != 0) {
      return DVar7;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar15 = *(int *)(pAVar4->field_0008 + 0x34);
    iVar16 = *(int *)&pAVar4->field_0x10 + iVar15;
    piVar8 = (int *)(iVar15 + uVar11);
    Library::MSVCRT::FUN_0072da70
              (piVar8 + 4,(AnonPointee_TLOBaseTy_0607 *)(iVar6 + 0x10 + iVar16),
               *(short *)(iVar16 + 8) - iVar6);
    *piVar8 = uVar11;
    *(short *)(piVar8 + 2) = *(short *)(iVar16 + 8) - (short)iVar6;
    piVar8[1] = **(int **)&pAVar4->field_0x18;
    *(short *)(iVar16 + 8) = (short)iVar6;
    **(int **)&pAVar4->field_0x18 = *piVar8;
    if (iVar5 < iVar6) {
      FUN_007574c0((AnonShape_00753C80_4C8E695D *)pAVar4,iVar16,(uint *)pAVar4->field_001C,iVar5);
    }
    else if (iVar6 < iVar5) {
      FUN_007574c0((AnonShape_00753C80_4C8E695D *)pAVar4,(int)piVar8,(uint *)pAVar4->field_001C,
                   (iVar5 - (int)param_1) - iVar6);
      *(undefined4 *)(pAVar4->field_000C + 0x40 + *(int *)(pAVar4->field_000C + 0x1c) * 8) =
           **(undefined4 **)&pAVar4->field_0x18;
      iVar5 = pAVar4->field_000C;
      *(int *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8) =
           *(int *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8) - iVar6;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (AnonShape_00755560_6DE97093 *)
              FUN_00757530((AnonShape_00757530_EEED7D69 *)pAVar4,1,
                           *(undefined4 **)&pAVar4->field_0x18);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == nullptr) {
      return 0xfffffffe;
    }
    *(int *)(pAVar4->field_000C + 0x1c) = *(int *)(pAVar4->field_000C + 0x1c) + -1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar5 = *(int *)(pAVar4->field_000C + 0x1c);
    if (iVar5 < 0) break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    FUN_00753b80((AnonShape_00750F20_F8C16F98 *)pAVar4,
                 *(undefined4 *)(pAVar4->field_000C + 0x40 + iVar5 * 8),iVar5);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar13 = FUN_00755830((AnonShape_00753C80_4C8E695D *)pAVar4,*(uint **)&pAVar4->field_0x18,
                        *(int *)(pAVar4->field_000C + 0x1c));
  if (uVar13 == 0) {
LAB_007557fa:
    uVar13 = FUN_00755970((AnonShape_00755970_4FB144E0 *)pAVar4,param_2,0);
    if (-1 < (int)uVar13) {
LAB_0075580a:
      uVar13 = 0;
    }
  }
  return uVar13;
}

