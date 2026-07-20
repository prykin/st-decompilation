
void __fastcall FUN_004ef140(void *param_1)

{
  UINT UVar1;
  uint uVar2;
  int iVar3;
  Global_sub_00523410_param_1Enum *pGVar4;
  UINT *pUVar5;
  undefined4 *puVar6;
  UINT *pUVar7;
  undefined4 uVar8;
  int local_14;
  UINT *local_c;
  int local_8;
  
  if (*(int *)((int)param_1 + (uint)*(byte *)((int)param_1 + 0x278) * 4 + 0x27a) != 0) {
    local_c = (UINT *)((int)param_1 + 0x1b6);
    puVar6 = (undefined4 *)((int)param_1 + 0x1a1);
    local_8 = 0;
    local_14 = 5;
    do {
      *(undefined4 *)((int)param_1 + 0x28) = 0x21;
      FUN_006e6080(param_1,2,*puVar6,(undefined4 *)((int)param_1 + 0x18));
      iVar3 = *(int *)((int)param_1 + 0x2c);
      uVar2 = (uint)((uint)(local_8 + *(int *)((int)param_1 + 0x199)) <
                    *(uint *)(*(int *)((int)param_1 +
                                      (uint)*(byte *)((int)param_1 + 0x278) * 4 + 0x27a) + 0xc));
      *(uint *)((int)param_1 + 0x2c) = uVar2;
      if (uVar2 == 0) {
        if (iVar3 != 0) goto LAB_004ef270;
LAB_004ef1cc:
        *(undefined4 *)((int)param_1 + 0x28) = 5;
        uVar8 = *puVar6;
      }
      else {
        if (iVar3 != 0) goto LAB_004ef1cc;
LAB_004ef270:
        *(undefined4 *)((int)param_1 + 0x28) = 0x20;
        uVar8 = *puVar6;
      }
      FUN_006e6080(param_1,2,uVar8,(undefined4 *)((int)param_1 + 0x18));
      if ((((*(int *)((int)param_1 + 0x2c) != 0) &&
           (iVar3 = *(int *)((int)param_1 + (uint)*(byte *)((int)param_1 + 0x278) * 4 + 0x27a),
           iVar3 != 0)) &&
          (uVar2 = *(int *)((int)param_1 + 0x199) + local_8, uVar2 < *(uint *)(iVar3 + 0xc))) &&
         (pGVar4 = (Global_sub_00523410_param_1Enum *)
                   (*(int *)(iVar3 + 8) * uVar2 + *(int *)(iVar3 + 0x1c)),
         pGVar4 != (Global_sub_00523410_param_1Enum *)0x0)) {
        *(char *)((int)local_c + -1) = ((char)pGVar4[2] == 0) + '\x03';
        UVar1 = thunk_FUN_00523410(*pGVar4,*(byte *)((int)pGVar4 + 9),0);
        *local_c = UVar1;
        local_c[1] = 0;
        if ((char)pGVar4[2] == 0) {
          pUVar5 = (UINT *)((int)pGVar4 + 0x12);
          pUVar7 = local_c + 2;
          for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pUVar7 = *pUVar5;
            pUVar5 = pUVar5 + 1;
            pUVar7 = pUVar7 + 1;
          }
          *(short *)pUVar7 = (short)*pUVar5;
        }
        else {
          local_c[2] = *(UINT *)((int)pGVar4 + 10);
          local_c[3] = *(UINT *)((int)pGVar4 + 0xe);
        }
      }
      local_8 = local_8 + 1;
      puVar6 = puVar6 + 1;
      local_c = (UINT *)((int)local_c + 0x27);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

