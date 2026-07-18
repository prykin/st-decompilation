
undefined4 * __thiscall FUN_0060c020(void *this,uint *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint *local_1c;
  void *local_18;
  undefined4 *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = 0x83;
  local_18 = this;
  puVar1 = (undefined4 *)FUN_006aac70(0x83);
  *(undefined4 *)((int)this + 0x1e1) = 2;
  if (this == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)((int)this + 0x1d5);
  }
  puVar6 = puVar1;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)puVar4;
  *(undefined1 *)((int)puVar6 + 2) = *(undefined1 *)((int)puVar4 + 2);
  if (*(uint **)((int)local_18 + 0x234) != (uint *)0x0) {
    local_14 = (undefined4 *)FUN_006b0020(*(uint **)((int)local_18 + 0x234),(int *)&local_c);
    uVar3 = local_c + 0x87;
    local_8 = uVar3;
    puVar1 = (undefined4 *)FUN_006acf50(puVar1,uVar3);
    *(uint *)((int)puVar1 + uVar3 + (-4 - local_c)) = local_c;
    puVar4 = local_14;
    puVar6 = (undefined4 *)((int)puVar1 + (local_8 - local_c));
    for (uVar3 = local_c >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    for (local_c = local_c & 3; local_c != 0; local_c = local_c - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    FUN_006ab060(&local_14);
    if ((*(int *)((int)local_18 + 0x23c) != 0) && (*(int *)((int)local_18 + 0x244) != 0)) {
      local_1c = (uint *)thunk_FUN_0060d390(local_18,&local_10);
      if (local_1c != (uint *)0x0) {
        uVar3 = local_8 + 4 + local_10;
        local_8 = uVar3;
        puVar1 = (undefined4 *)FUN_006acf50(puVar1,uVar3);
        puVar7 = (uint *)((int)puVar1 + uVar3 + (-4 - local_10));
        *puVar7 = local_10;
        puVar5 = local_1c;
        for (uVar3 = local_10 >> 2; puVar7 = puVar7 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
        }
        for (local_10 = local_10 & 3; local_10 != 0; local_10 = local_10 - 1) {
          *(char *)puVar7 = (char)*puVar5;
          puVar5 = (uint *)((int)puVar5 + 1);
          puVar7 = (uint *)((int)puVar7 + 1);
        }
        FUN_006ab060(&local_1c);
      }
    }
  }
  if (param_1 != (uint *)0x0) {
    *param_1 = local_8;
  }
  return puVar1;
}

