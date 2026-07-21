
void FUN_006d7830(undefined1 *param_1,int param_2,undefined4 *param_3,int param_4,int param_5,
                 undefined1 param_6)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined1 *local_14;
  int local_10;
  undefined1 *local_8;

  uVar1 = param_6;
  puVar9 = param_1;
  iVar2 = (int)param_3 + (-1 - param_5);
  uVar4 = (int)param_3 + param_5 * -2;
  puVar7 = (undefined4 *)(param_1 + param_5);
  puVar10 = puVar7;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar10 = CONCAT22(CONCAT11(param_6,param_6),CONCAT11(param_6,param_6));
    puVar10 = puVar10 + 1;
  }
  for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar10 = param_6;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  iVar3 = (param_4 + -1) * param_2;
  puVar10 = (undefined4 *)(param_1 + param_5 + iVar3);
  puVar11 = puVar10;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar11 = CONCAT22(CONCAT11(param_6,param_6),CONCAT11(param_6,param_6));
    puVar11 = puVar11 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar11 = param_6;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  puVar6 = param_1 + param_2 * param_5;
  param_1 = puVar6 + -1 + (int)param_3;
  iVar8 = param_4 - param_5;
  if (param_5 < iVar8) {
    param_4 = iVar8 - param_5;
    do {
      *puVar6 = param_6;
      *param_1 = param_6;
      puVar6 = puVar6 + param_2;
      param_1 = param_1 + param_2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  param_1 = puVar9 + iVar2;
  local_8 = puVar9 + iVar2 + iVar3;
  param_4 = (int)(puVar9 + param_5 + param_2 * param_5);
  local_10 = param_5 * -2 + 3;
  puVar9 = puVar9 + param_5 + (iVar8 + -1) * param_2;
  iVar8 = 0;
  local_14 = puVar9 + (iVar2 - param_5);
  iVar3 = param_5;
  param_3 = puVar7;
  param_5 = (int)(param_4 + (iVar2 - param_5));
  _param_6 = puVar10;
  do {
    iVar2 = iVar3;
    *(undefined1 *)((int)param_3 - iVar8) = uVar1;
    param_1[iVar8] = uVar1;
    *(undefined1 *)((int)_param_6 - iVar8) = uVar1;
    local_8[iVar8] = uVar1;
    *(undefined1 *)(param_4 - iVar2) = uVar1;
    *(undefined1 *)(param_5 + iVar2) = uVar1;
    puVar9[-iVar2] = uVar1;
    local_14[iVar2] = uVar1;
    if (local_10 < 0) {
      local_10 = local_10 + 6 + iVar8 * 4;
      iVar3 = iVar2;
    }
    else {
      iVar3 = iVar2 + -1;
      local_10 = local_10 + 10 + (iVar8 - iVar2) * 4;
      param_3 = (undefined4 *)((int)param_3 + param_2);
      param_1 = param_1 + param_2;
      _param_6 = (undefined4 *)((int)_param_6 - param_2);
      local_8 = local_8 + -param_2;
    }
    iVar8 = iVar8 + 1;
    param_4 = param_4 - param_2;
    puVar9 = puVar9 + param_2;
    param_5 = param_5 - param_2;
    local_14 = local_14 + param_2;
  } while (iVar8 < iVar3);
  if ((iVar8 == iVar3) && (iVar3 != iVar2)) {
    *(undefined1 *)((int)param_3 - iVar8) = uVar1;
    param_1[iVar8] = uVar1;
    *(undefined1 *)((int)_param_6 - iVar8) = uVar1;
    local_8[iVar8] = uVar1;
  }
  return;
}

