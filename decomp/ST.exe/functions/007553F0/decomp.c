
undefined4
FUN_007553f0(AnonShape_007553F0_ACB112C2 *param_1,int *param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar4 = *(int *)(param_1->field_0008 + 0x50);
  param_1->field_000C = iVar4;
  iVar3 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,
                       *(undefined4 *)(iVar4 + 0x40 + *(int *)(iVar4 + 0x1c) * 8),
                       *(int *)(iVar4 + 0x1c));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar4 = *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8);
  if (iVar4 == -1) {
    iVar4 = *(int *)(iVar3 + 4);
  }
  else {
    if (iVar4 == *(short *)(iVar3 + 8)) goto LAB_00755464;
    iVar4 = *(int *)(iVar4 + 0x10 + iVar3);
  }
  while (iVar4 != -1) {
    *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar3 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,iVar4,
                         *(int *)(param_1->field_000C + 0x1c));
    *(undefined4 *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) =
         0xffffffff;
    iVar4 = *(int *)(iVar3 + 4);
  }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_00755464:
  FUN_00757450((AnonShape_00755E10_BD685653 *)param_1,
               *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8));
  iVar4 = param_1->field_000C;
  iVar2 = *(int *)(iVar4 + 0x1c);
  if (*(int *)(iVar4 + 0x44 + iVar2 * 8) == (int)*(short *)(iVar3 + 8)) {
    do {
      if (iVar2 == 0) {
        FUN_00750fb0((AnonShape_00750FB0_15A3AC3E *)param_1,0,0);
        return 0xfffffffc;
      }
      *(int *)(iVar4 + 0x1c) = iVar2 + -1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar4 = *(int *)(param_1->field_000C + 0x1c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,
                           *(undefined4 *)(param_1->field_000C + 0x40 + iVar4 * 8),iVar4);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      FUN_00757450((AnonShape_00755E10_BD685653 *)param_1,
                   *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8));
      iVar4 = param_1->field_000C;
      iVar2 = *(int *)(iVar4 + 0x1c);
    } while (*(int *)(iVar4 + 0x44 + iVar2 * 8) == (int)*(short *)(iVar3 + 8));
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar4 = *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8);
  puVar7 = (undefined4 *)(iVar4 + 0x10 + iVar3);
  *param_3 = *(undefined4 *)(iVar4 + 0x14 + iVar3);
  *param_4 = *puVar7;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar1 = *(short *)(param_1->field_000C + 0x34);
  if (sVar1 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar6 = (**(code **)(param_1->field_000C + 8))(puVar7 + 2);
  }
  else {
    uVar6 = (uint)sVar1;
  }
  if (*param_2 == 1) {
    iVar4 = FUN_006bfb70(uVar6);
    *param_2 = iVar4;
    if (iVar4 == 0) {
      return 0xfffffffe;
    }
  }
  if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
    puVar7 = puVar7 + 2;
    puVar8 = (undefined4 *)*param_2;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  return 0;
}

