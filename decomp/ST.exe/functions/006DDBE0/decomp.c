
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004A8920 -> 006DDBE0 @ 004A89ED */

void __fastcall FUN_006ddbe0(AnonShape_GLOBAL_00807598_0C6808FB *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  ushort *local_2c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079dfd8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((*(int *)&param_1->field_0x4 == 0) ||
      ((*(uint *)(*(int *)&param_1->field_0x4 + 0xc) & 0x1100) != 0x100)) &&
     ((*(int *)&param_1->field_0x2dc == 0 || (*(int *)&param_1->field_0x2d8 != 0)))) {
    uVar4 = *(int *)&param_1->field_0x38 - *(int *)&param_1->field_0x30;
    iVar3 = *(int *)&param_1->field_0x3c - *(int *)&param_1->field_0x34;
    ExceptionList = &local_14;
    FUN_006b01d0(*(int *)&param_1->field_0xc,*(int *)&param_1->field_0x28,
                 *(int *)&param_1->field_0x30,*(int *)&param_1->field_0x34,uVar4,iVar3,
                 (char)*(undefined4 *)&param_1->field_0x128);
    if (*(int *)&param_1->field_0x124 == 1) {
      puVar2 = (undefined4 *)
               (*(int *)&param_1->field_0x28 * *(int *)&param_1->field_0x34 +
                *(int *)&param_1->field_0x14 + *(int *)&param_1->field_0x30);
      while (iVar3 != 0) {
        puVar5 = puVar2;
        for (uVar1 = uVar4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar5 = 0x40404040;
          puVar5 = puVar5 + 1;
        }
        for (uVar1 = uVar4 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar5 = 0x40;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        puVar2 = (undefined4 *)((int)puVar2 + *(int *)&param_1->field_0x28);
        iVar3 = iVar3 + -1;
      }
    }
    else {
      local_2c = (ushort *)
                 (*(int *)&param_1->field_0x14 +
                 (*(int *)&param_1->field_0x28 * *(int *)&param_1->field_0x34 +
                 *(int *)&param_1->field_0x30) * 2);
      local_8 = 1;
      while (iVar3 != 0) {
        FUN_006ce6c0(local_2c,uVar4,30000);
        local_2c = local_2c + *(int *)&param_1->field_0x28;
        iVar3 = iVar3 + -1;
      }
    }
  }
  ExceptionList = local_14;
  return;
}

