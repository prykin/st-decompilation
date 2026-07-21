
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00750660(undefined1 *param_1,int param_2,undefined1 *param_3,int param_4,
                 undefined1 *param_5,int param_6,int param_7,int param_8,int param_9)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;

  if ((0 < param_7) && (0 < param_8)) {
    _DAT_00857514 = param_8;
    _DAT_00857510 = param_2 - param_7;
    _DAT_00857518 = param_4 - param_7;
    DAT_00857508 = param_7;
    _DAT_0085750c = param_6 - param_7;
    do {
      do {
        uVar1 = *param_3;
        param_3 = param_3 + 1;
        uVar2 = *param_5;
        param_5 = param_5 + 1;
        *param_1 = *(undefined1 *)(param_9 + (uint)CONCAT11(uVar2,uVar1));
        iVar4 = _DAT_00857514;
        param_1 = param_1 + 1;
        iVar5 = param_7 + -1;
        bVar3 = 0 < param_7;
        param_7 = iVar5;
      } while (iVar5 != 0 && bVar3);
      param_3 = param_3 + _DAT_00857518;
      param_1 = param_1 + _DAT_00857510;
      param_5 = param_5 + _DAT_0085750c;
      _DAT_00857514 = _DAT_00857514 + -1;
      param_7 = DAT_00857508;
    } while (_DAT_00857514 != 0 && 0 < iVar4);
  }
  return;
}

