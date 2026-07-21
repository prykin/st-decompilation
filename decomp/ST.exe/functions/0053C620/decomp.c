
void __fastcall FUN_0053c620(AnonShape_004EF140_16642BA0 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  UINT UVar3;
  uint uVar4;
  int iVar5;
  Global_sub_00528060_param_1Enum *pGVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_14;
  int local_c;
  undefined4 *local_8;

  if (*(int *)(&param_1->field_0x27a + (uint)param_1->field_0278 * 4) != 0) {
    local_8 = (undefined4 *)&param_1->field_0x1b6;
    puVar7 = (undefined4 *)&param_1->field_0x1a1;
    local_c = 0;
    local_14 = 5;
    do {
      param_1->field_0028 = 0x21;
      FUN_006e6080(param_1,2,*puVar7,(undefined4 *)&param_1->field_0x18);
      iVar5 = param_1->field_002C;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar1 = (uint)((uint)(local_c + param_1->field_0199) <
                    *(uint *)(*(int *)(&param_1->field_0x27a + (uint)param_1->field_0278 * 4) + 0xc)
                    );
      param_1->field_002C = uVar1;
      if (uVar1 == 0) {
        if (iVar5 != 0) goto LAB_0053c75b;
LAB_0053c6ac:
        param_1->field_0028 = 5;
        uVar2 = *puVar7;
      }
      else {
        if (iVar5 != 0) goto LAB_0053c6ac;
LAB_0053c75b:
        param_1->field_0028 = 0x20;
        uVar2 = *puVar7;
      }
      FUN_006e6080(param_1,2,uVar2,(undefined4 *)&param_1->field_0x18);
      if ((param_1->field_002C != 0) &&
         (iVar5 = *(int *)(&param_1->field_0x27a + (uint)param_1->field_0278 * 4), iVar5 != 0)) {
        uVar4 = param_1->field_0199 + local_c;
        uVar1 = *(uint *)(iVar5 + 0xc);
        if ((uVar4 < uVar1) &&
           (pGVar6 = (Global_sub_00528060_param_1Enum *)
                     (*(int *)(iVar5 + 8) * uVar4 + *(int *)(iVar5 + 0x1c)),
           pGVar6 != (Global_sub_00528060_param_1Enum *)0x0)) {
          *(char *)((int)local_8 + -1) = (pGVar6[8] == ~(CASE_80|CASE_7F)) + '\x03';
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          uVar2 = thunk_FUN_005293c0(CONCAT31((int3)(uVar1 >> 8),*pGVar6));
          *local_8 = uVar2;
          UVar3 = thunk_FUN_00528060(*pGVar6,(char)((uint)*(undefined4 *)pGVar6 >> 0x10));
          local_8[1] = UVar3;
          if (pGVar6[8] == ~(CASE_80|CASE_7F)) {
            pGVar6 = pGVar6 + 0x12;
            puVar8 = local_8 + 2;
            for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar8 = *(undefined4 *)pGVar6;
              pGVar6 = pGVar6 + 4;
              puVar8 = puVar8 + 1;
            }
            *(undefined2 *)puVar8 = *(undefined2 *)pGVar6;
          }
          else {
            local_8[2] = *(undefined4 *)(pGVar6 + 10);
            local_8[3] = *(undefined4 *)(pGVar6 + 0xe);
          }
        }
      }
      local_c = local_c + 1;
      puVar7 = puVar7 + 1;
      local_8 = (undefined4 *)((int)local_8 + 0x27);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

