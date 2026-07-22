
uint FUN_00754fd0(AnonShape_00754FD0_6B521B56 *param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_1->field_0008 + 0x50);
  param_1->field_000C = iVar2;
  *(undefined4 *)(iVar2 + 0x18) = param_2;
  *(undefined2 *)(param_1->field_000C + 0x2a) = 1;
  *(undefined2 *)(param_1->field_000C + 0x2e) = param_3;
  *(undefined4 *)(param_1->field_000C + 0x14) = 1;
  *(undefined4 *)(param_1->field_000C + 0x1c) = 0;
  *(undefined4 *)(param_1->field_000C + 0x40) = 0;
  *(undefined4 *)(param_1->field_000C + 0x44) = 0xffffffff;
  Library::MSVCRT::FUN_00730c40((undefined1 *)(param_1->field_000C + 0x36),0x7f2ce8);
  iVar2 = FUN_00753b40((AnonShape_00753C80_4C8E695D *)param_1);
  *(int *)(param_1->field_000C + 0x24) = iVar2;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar3 = *(uint *)(param_1->field_000C + 0x24);
  if (0 < (int)uVar3) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar3 = Library::DKW::FMM::FUN_006d4c50
                      (param_1->field_0008,uVar3,(int)*(short *)(param_1->field_0008 + 0x16));
    if (uVar3 == 0) {
      iVar2 = param_1->field_0008;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar1 = *(int *)(param_1->field_000C + 0x24);
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | 0x10;
      puVar5 = (undefined4 *)(*(int *)(iVar2 + 0x34) + iVar1);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar4 = (uint)*(short *)(param_1->field_0008 + 0x16);
      puVar6 = puVar5;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = 0;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *puVar5 = 0xffffffff;
      puVar5[1] = 0xffffffff;
      *(undefined2 *)(puVar5 + 2) = 0;
      uVar3 = FUN_00757360((AnonShape_00757360_9C23D284 *)param_1,
                           (AnonShape_00757360_9B4621C9 *)param_1->field_000C);
    }
    else if (0 < (int)uVar3) {
      return uVar3 | 0xffff0000;
    }
  }
  return uVar3;
}

