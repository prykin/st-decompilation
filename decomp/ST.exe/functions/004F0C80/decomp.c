
void __fastcall FUN_004f0c80(AnonShape_004F0C80_4C5E559C *param_1)

{
  UINT UVar1;
  uint uVar2;
  int iVar3;
  Global_sub_00523410_param_1Enum *pGVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int local_14;
  undefined4 *local_c;
  int local_8;
  
  if (*(int *)(&param_1[1].field_0x2 + (uint)param_1->field_0278 * 4) != 0) {
    local_c = (undefined4 *)&param_1->field_0x1be;
    puVar6 = (undefined4 *)&param_1->field_0x1a1;
    local_8 = 0;
    local_14 = 5;
    do {
      param_1->field_0028 = 0x21;
      FUN_006e6080(param_1,2,*puVar6,(undefined4 *)&param_1->field_0x18);
      iVar3 = param_1->field_002C;
      uVar2 = (uint)((uint)(local_8 + param_1->field_0199) <
                    *(uint *)(*(int *)(&param_1[1].field_0x2 + (uint)param_1->field_0278 * 4) + 0xc)
                    );
      param_1->field_002C = uVar2;
      if (uVar2 == 0) {
        if (iVar3 != 0) goto LAB_004f0da7;
LAB_004f0d0c:
        param_1->field_0028 = 5;
        uVar8 = *puVar6;
      }
      else {
        if (iVar3 != 0) goto LAB_004f0d0c;
LAB_004f0da7:
        param_1->field_0028 = 0x20;
        uVar8 = *puVar6;
      }
      FUN_006e6080(param_1,2,uVar8,(undefined4 *)&param_1->field_0x18);
      if ((((param_1->field_002C != 0) &&
           (iVar3 = *(int *)(&param_1[1].field_0x2 + (uint)param_1->field_0278 * 4), iVar3 != 0)) &&
          (uVar2 = param_1->field_0199 + local_8, uVar2 < *(uint *)(iVar3 + 0xc))) &&
         (pGVar4 = (Global_sub_00523410_param_1Enum *)
                   (*(int *)(iVar3 + 8) * uVar2 + *(int *)(iVar3 + 0x1c)),
         pGVar4 != (Global_sub_00523410_param_1Enum *)0x0)) {
        *(char *)((int)local_c + -9) = ((char)pGVar4[2] == 0) + '\x03';
        UVar1 = thunk_FUN_00523410(*pGVar4,*(byte *)((int)pGVar4 + 9),0);
        local_c[-2] = UVar1;
        if ((char)pGVar4[2] == 0) {
          pbVar5 = (byte *)((int)pGVar4 + 0x12);
          puVar7 = local_c;
          for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *(undefined4 *)pbVar5;
            pbVar5 = pbVar5 + 4;
            puVar7 = puVar7 + 1;
          }
          *(undefined2 *)puVar7 = *(undefined2 *)pbVar5;
        }
        else {
          *local_c = *(undefined4 *)((int)pGVar4 + 10);
          local_c[1] = *(undefined4 *)((int)pGVar4 + 0xe);
        }
      }
      local_8 = local_8 + 1;
      puVar6 = puVar6 + 1;
      local_c = (undefined4 *)((int)local_c + 0x27);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

