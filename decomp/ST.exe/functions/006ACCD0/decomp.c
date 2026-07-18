
void FUN_006accd0(undefined4 *param_1,undefined4 *param_2,int param_3,undefined *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_fc;
  undefined4 local_f8 [59];
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar6 = param_1;
  if (1 < (int)param_2) {
    puVar1 = (undefined4 *)((int)param_2 * param_3 + (int)param_1);
    param_2 = &local_fc;
    local_c = local_f8;
    param_1 = (undefined4 *)0x0;
LAB_006acd0d:
    local_8 = puVar1;
    puVar4 = puVar6;
    puVar5 = local_8;
    iVar2 = ((int)local_8 - (int)puVar4) / param_3;
    if (7 < iVar2) {
      FUN_006ce700(puVar4,(undefined4 *)((iVar2 / 2) * param_3 + (int)puVar4),param_3);
      puVar3 = puVar4;
LAB_006acd37:
      puVar3 = (undefined4 *)((int)puVar3 + param_3);
      if (puVar3 < local_8) goto code_r0x006acd43;
      goto LAB_006acd4f;
    }
    for (puVar6 = (undefined4 *)((int)local_8 - param_3); local_8 = puVar4, puVar1 = puVar4,
        puVar4 < puVar6; puVar6 = (undefined4 *)((int)puVar6 - param_3)) {
      while (puVar1 = (undefined4 *)((int)puVar1 + param_3), puVar1 <= puVar6) {
        iVar2 = (*(code *)param_4)(puVar1,local_8);
        if (0 < iVar2) {
          local_8 = puVar1;
        }
      }
      FUN_006ce700(local_8,puVar6,param_3);
    }
    if (0 < (int)param_1) {
      param_1 = (undefined4 *)((int)param_1 + -1);
      puVar1 = local_c + -2;
      param_2 = param_2 + -2;
      local_c = local_c + -2;
      puVar6 = (undefined4 *)*param_2;
      puVar1 = (undefined4 *)*puVar1;
      goto LAB_006acd0d;
    }
  }
  return;
code_r0x006acd43:
  iVar2 = (*(code *)param_4)(puVar3,puVar4);
  if (iVar2 < 1) goto LAB_006acd37;
LAB_006acd4f:
  do {
    puVar5 = (undefined4 *)((int)puVar5 - param_3);
    if (puVar5 <= puVar4) break;
    iVar2 = (*(code *)param_4)(puVar5,puVar4);
  } while (-1 < iVar2);
  if (puVar3 <= puVar5) {
    FUN_006ce700(puVar3,puVar5,param_3);
    goto LAB_006acd37;
  }
  FUN_006ce700(puVar4,puVar5,param_3);
  puVar6 = puVar4;
  puVar1 = puVar5;
  if (((undefined4 *)((int)puVar3 + param_3) < local_8) &&
     (puVar6 = puVar3, puVar1 = local_8, (undefined4 *)(param_3 + (int)puVar4) < puVar5)) {
    if ((int)puVar5 - (int)puVar4 < (int)local_8 - (int)puVar3) {
      *param_2 = puVar3;
      param_2 = param_2 + 2;
      *local_c = local_8;
      param_1 = (undefined4 *)((int)param_1 + 1);
      local_c = local_c + 2;
      puVar6 = puVar4;
      puVar1 = puVar5;
    }
    else {
      *param_2 = puVar4;
      param_2 = param_2 + 2;
      *local_c = puVar5;
      param_1 = (undefined4 *)((int)param_1 + 1);
      local_c = local_c + 2;
      puVar1 = local_8;
    }
  }
  goto LAB_006acd0d;
}

