
void __fastcall FUN_004f0c80(void *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_14;
  undefined4 *local_c;
  int local_8;
  
  if (*(int *)((int)param_1 + (uint)*(byte *)((int)param_1 + 0x278) * 4 + 0x27e) != 0) {
    local_c = (undefined4 *)((int)param_1 + 0x1be);
    puVar5 = (undefined4 *)((int)param_1 + 0x1a1);
    local_8 = 0;
    local_14 = 5;
    do {
      *(undefined4 *)((int)param_1 + 0x28) = 0x21;
      FUN_006e6080(param_1,2,*puVar5,(undefined4 *)((int)param_1 + 0x18));
      iVar3 = *(int *)((int)param_1 + 0x2c);
      uVar2 = (uint)((uint)(local_8 + *(int *)((int)param_1 + 0x199)) <
                    *(uint *)(*(int *)((int)param_1 +
                                      (uint)*(byte *)((int)param_1 + 0x278) * 4 + 0x27e) + 0xc));
      *(uint *)((int)param_1 + 0x2c) = uVar2;
      if (uVar2 == 0) {
        if (iVar3 != 0) goto LAB_004f0da7;
LAB_004f0d0c:
        *(undefined4 *)((int)param_1 + 0x28) = 5;
        uVar1 = *puVar5;
      }
      else {
        if (iVar3 != 0) goto LAB_004f0d0c;
LAB_004f0da7:
        *(undefined4 *)((int)param_1 + 0x28) = 0x20;
        uVar1 = *puVar5;
      }
      FUN_006e6080(param_1,2,uVar1,(undefined4 *)((int)param_1 + 0x18));
      if ((((*(int *)((int)param_1 + 0x2c) != 0) &&
           (iVar3 = *(int *)((int)param_1 + (uint)*(byte *)((int)param_1 + 0x278) * 4 + 0x27e),
           iVar3 != 0)) &&
          (uVar2 = *(int *)((int)param_1 + 0x199) + local_8, uVar2 < *(uint *)(iVar3 + 0xc))) &&
         (puVar4 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar2 + *(int *)(iVar3 + 0x1c)),
         puVar4 != (undefined4 *)0x0)) {
        *(char *)((int)local_c + -9) = (*(char *)(puVar4 + 2) == '\0') + '\x03';
        uVar1 = thunk_FUN_00523410(*puVar4,*(char *)((int)puVar4 + 9),0);
        local_c[-2] = uVar1;
        if (*(char *)(puVar4 + 2) == '\0') {
          puVar4 = (undefined4 *)((int)puVar4 + 0x12);
          puVar6 = local_c;
          for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          *(undefined2 *)puVar6 = *(undefined2 *)puVar4;
        }
        else {
          *local_c = *(undefined4 *)((int)puVar4 + 10);
          local_c[1] = *(undefined4 *)((int)puVar4 + 0xe);
        }
      }
      local_8 = local_8 + 1;
      puVar5 = puVar5 + 1;
      local_c = (undefined4 *)((int)local_c + 0x27);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

