
undefined4
FUN_0043e9a0(char param_1,int param_2,short param_3,short param_4,short param_5,short param_6,
            short param_7,short param_8,int param_9,char param_10)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = (int)param_3;
  local_c = param_6 + -1 + local_8;
  _param_6 = (int)param_4;
  _param_4 = param_7 + -1 + _param_6;
  iVar2 = (int)param_5;
  _param_5 = param_8 + -1 + iVar2;
  param_3 = 0;
  if (local_8 < 0) {
    local_8 = 0;
  }
  iVar4 = DAT_007fb240 + -1;
  if (iVar4 < local_c) {
    local_c = iVar4;
  }
  if (_param_6 < 0) {
    _param_6 = 0;
  }
  if (DAT_007fb242 + -1 < _param_4) {
    _param_4 = DAT_007fb242 + -1;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (DAT_007fb244 + -1 < _param_5) {
    _param_5 = DAT_007fb244 + -1;
  }
  iVar4 = DAT_007fb240 * _param_6 + local_8 + (iVar2 + -1) * (int)DAT_007fb246;
  if (iVar2 <= _param_5) {
    _param_5 = _param_5 - iVar2;
    iVar2 = CONCAT22((short)((uint)iVar2 >> 0x10),DAT_007fb240);
    _param_5 = _param_5 + 1;
    iVar6 = local_c;
    iVar3 = local_8;
    param_3 = 0;
    do {
      iVar4 = iVar4 + DAT_007fb246;
      local_10 = iVar4 - (short)iVar2;
      if (_param_6 <= _param_4) {
        iVar5 = (_param_4 - _param_6) + 1;
        do {
          local_10 = local_10 + (short)iVar2;
          if (iVar3 <= iVar6) {
            iVar2 = local_10 * 8 + -8;
            iVar6 = (iVar6 - local_8) + 1;
            do {
              iVar2 = iVar2 + 8;
              piVar1 = *(int **)(iVar2 + DAT_007fb248);
              iVar3 = DAT_007fb248;
              if ((((piVar1 != (int *)0x0) && (piVar1[9] == (int)param_1)) && (piVar1 != (int *)0x0)
                  ) && ((iVar3 = (**(code **)(*piVar1 + 0x2c))(), iVar3 == param_2 &&
                        (iVar3 = (**(code **)(*piVar1 + 0xf8))(), iVar3 != 0)))) {
                if (param_9 == 0) {
LAB_0043eb0f:
                  if ((param_10 == -1) ||
                     (iVar3 = (**(code **)(*piVar1 + 0x6c))(), iVar3 == param_10)) {
                    param_3 = param_3 + 1;
                  }
                }
                else {
                  iVar3 = param_2 + -0x38;
                  switch(param_2) {
                  case 0x38:
                  case 0x39:
                  case 0x4f:
                  case 0x5e:
                    if ((param_9 == 1) &&
                       (iVar3 = (**(code **)(*piVar1 + 0x88))(local_14), 0 < iVar3))
                    goto LAB_0043eb0f;
                  }
                }
              }
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            iVar2 = CONCAT22((short)((uint)iVar3 >> 0x10),DAT_007fb240);
            iVar6 = local_c;
            iVar3 = local_8;
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      _param_5 = _param_5 + -1;
    } while (_param_5 != 0);
  }
  return CONCAT22((short)((uint)iVar2 >> 0x10),param_3);
}

