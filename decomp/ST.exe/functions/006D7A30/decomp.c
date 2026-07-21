
void FUN_006d7a30(int param_1,int param_2,uint param_3,uint param_4,int param_5,undefined1 param_6)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_18;
  int local_14;
  int local_10;
  int local_c;

  uVar2 = param_6;
  uVar3 = param_3 + param_5 * -2;
  puVar8 = (undefined4 *)(param_2 * param_5 + param_1);
  if (param_5 < (int)(param_4 - param_5)) {
    local_18 = (param_4 - param_5) - param_5;
    do {
      puVar9 = puVar8;
      for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = CONCAT22(CONCAT11(param_6,param_6),CONCAT11(param_6,param_6));
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = param_3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = param_6;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      puVar8 = (undefined4 *)((int)puVar8 + param_2);
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  iVar1 = param_1 + param_5;
  param_3 = 0;
  iVar6 = param_5 * param_5;
  param_1 = (param_4 - 1) * param_2 + param_1 + param_5;
  iVar7 = (1 - param_5) * iVar6 + ((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2);
  iVar4 = iVar6 * 2 * param_5;
  local_14 = param_5;
  local_c = 0;
  param_4 = uVar3;
  param_5 = iVar1;
  local_10 = iVar4;
  if (0 < iVar4) {
    do {
      if (0 < iVar7) {
        puVar8 = (undefined4 *)(param_5 - param_3);
        for (uVar5 = param_4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = CONCAT22(CONCAT11(param_6,param_6),CONCAT11(param_6,param_6));
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = param_4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = param_6;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        puVar8 = (undefined4 *)(param_1 - param_3);
        for (uVar5 = param_4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = CONCAT22(CONCAT11(param_6,param_6),CONCAT11(param_6,param_6));
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = param_4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = param_6;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        param_5 = param_5 + param_2;
        param_1 = param_1 - param_2;
        local_14 = local_14 + -1;
        iVar4 = local_10 + iVar6 * -2;
        iVar7 = iVar7 - iVar4;
        local_10 = iVar4;
      }
      local_c = local_c + iVar6 * 2;
      param_3 = param_3 + 1;
      iVar7 = iVar7 + local_c + iVar6;
      param_4 = param_4 + 2;
    } while (local_c < iVar4);
  }
  iVar7 = iVar7 - (iVar4 + local_c) / 2;
  if (-1 < local_14) {
    param_4 = local_14 + 1;
    _param_6 = uVar3 + param_3 * 2;
    do {
      puVar8 = (undefined4 *)(param_5 - param_3);
      for (uVar3 = _param_6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar8 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
        puVar8 = puVar8 + 1;
      }
      for (uVar3 = _param_6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar8 = uVar2;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar8 = (undefined4 *)(param_1 - param_3);
      for (uVar3 = _param_6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar8 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
        puVar8 = puVar8 + 1;
      }
      for (uVar3 = _param_6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar8 = uVar2;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      if (iVar7 < 0) {
        param_3 = param_3 + 1;
        _param_6 = _param_6 + 2;
        local_c = local_c + iVar6 * 2;
        iVar7 = iVar7 + local_c;
      }
      param_5 = param_5 + param_2;
      param_1 = param_1 - param_2;
      local_10 = local_10 + iVar6 * -2;
      iVar7 = iVar7 + (iVar6 - local_10);
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return;
}

