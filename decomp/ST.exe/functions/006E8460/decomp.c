
void __cdecl FUN_006e8460(int param_1,int param_2,uint param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  iVar1 = DAT_00856d84;
  lVar6 = __ftol();
  param_1 = (int)lVar6;
  lVar6 = __ftol();
  iVar4 = (int)lVar6;
  if ((int)lVar6 < (int)(param_3 - 1)) {
    iVar4 = param_3 - 1;
  }
  if ((int)(DAT_00856da0 - param_3) <= iVar4) {
    iVar4 = (DAT_00856da0 - param_3) + -1;
  }
  if (iVar1 < iVar4) {
    iVar3 = (iVar1 - DAT_00856da0) + iVar4;
    if (param_1 <= iVar3 + 1) {
      param_1 = iVar3 + 2;
    }
    if ((DAT_00856da0 - iVar4) + iVar1 <= (int)(param_1 + param_3)) {
      param_1 = ((DAT_00856da0 - iVar4) - param_3) + -1 + iVar1;
    }
  }
  else {
    if (param_1 < iVar1 - iVar4) {
      param_1 = iVar1 - iVar4;
    }
    if (iVar1 + iVar4 <= (int)(param_1 + -1 + param_3)) {
      param_1 = (iVar1 - param_3) + iVar4;
    }
  }
  param_2 = 0;
  if (0 < (int)param_3) {
    do {
      puVar5 = (undefined4 *)((DAT_00856d88 - (param_2 + iVar4) * DAT_00856d8c) + param_1);
      for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = CONCAT22(CONCAT11(param_4,param_4),CONCAT11(param_4,param_4));
        puVar5 = puVar5 + 1;
      }
      for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = param_4;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      param_2 = param_2 + 1;
    } while (param_2 < (int)param_3);
  }
  return;
}

