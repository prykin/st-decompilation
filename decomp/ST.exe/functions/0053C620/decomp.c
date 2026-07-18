
void __fastcall FUN_0053c620(void *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_14;
  int local_c;
  undefined4 *local_8;
  
  if (*(int *)((int)param_1 + (uint)*(byte *)((int)param_1 + 0x278) * 4 + 0x27a) != 0) {
    local_8 = (undefined4 *)((int)param_1 + 0x1b6);
    puVar6 = (undefined4 *)((int)param_1 + 0x1a1);
    local_c = 0;
    local_14 = 5;
    do {
      *(undefined4 *)((int)param_1 + 0x28) = 0x21;
      FUN_006e6080(param_1,2,*puVar6,(undefined4 *)((int)param_1 + 0x18));
      iVar4 = *(int *)((int)param_1 + 0x2c);
      uVar1 = (uint)((uint)(local_c + *(int *)((int)param_1 + 0x199)) <
                    *(uint *)(*(int *)((int)param_1 +
                                      (uint)*(byte *)((int)param_1 + 0x278) * 4 + 0x27a) + 0xc));
      *(uint *)((int)param_1 + 0x2c) = uVar1;
      if (uVar1 == 0) {
        if (iVar4 != 0) goto LAB_0053c75b;
LAB_0053c6ac:
        *(undefined4 *)((int)param_1 + 0x28) = 5;
        uVar2 = *puVar6;
      }
      else {
        if (iVar4 != 0) goto LAB_0053c6ac;
LAB_0053c75b:
        *(undefined4 *)((int)param_1 + 0x28) = 0x20;
        uVar2 = *puVar6;
      }
      FUN_006e6080(param_1,2,uVar2,(undefined4 *)((int)param_1 + 0x18));
      if ((*(int *)((int)param_1 + 0x2c) != 0) &&
         (iVar4 = *(int *)((int)param_1 + (uint)*(byte *)((int)param_1 + 0x278) * 4 + 0x27a),
         iVar4 != 0)) {
        uVar3 = *(int *)((int)param_1 + 0x199) + local_c;
        uVar1 = *(uint *)(iVar4 + 0xc);
        if ((uVar3 < uVar1) &&
           (puVar5 = (undefined4 *)(*(int *)(iVar4 + 8) * uVar3 + *(int *)(iVar4 + 0x1c)),
           puVar5 != (undefined4 *)0x0)) {
          *(char *)((int)local_8 + -1) = (*(char *)(puVar5 + 2) == '\0') + '\x03';
          uVar2 = thunk_FUN_005293c0(CONCAT31((int3)(uVar1 >> 8),*(undefined1 *)puVar5));
          *local_8 = uVar2;
          uVar2 = thunk_FUN_00528060(*(undefined1 *)puVar5,(char)((uint)*puVar5 >> 0x10));
          local_8[1] = uVar2;
          if (*(char *)(puVar5 + 2) == '\0') {
            puVar5 = (undefined4 *)((int)puVar5 + 0x12);
            puVar7 = local_8 + 2;
            for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar7 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar7 = puVar7 + 1;
            }
            *(undefined2 *)puVar7 = *(undefined2 *)puVar5;
          }
          else {
            local_8[2] = *(undefined4 *)((int)puVar5 + 10);
            local_8[3] = *(undefined4 *)((int)puVar5 + 0xe);
          }
        }
      }
      local_c = local_c + 1;
      puVar6 = puVar6 + 1;
      local_8 = (undefined4 *)((int)local_8 + 0x27);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

