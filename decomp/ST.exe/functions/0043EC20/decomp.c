
uint * FUN_0043ec20(char param_1,int param_2,short param_3,short param_4,short param_5,short param_6
                   ,short param_7,short param_8,int param_9,char param_10)

{
  int *piVar1;
  uint *puVar2;
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
  _param_3 = (int)param_4;
  _param_6 = param_7 + -1 + _param_3;
  iVar5 = (int)param_5;
  iVar3 = param_8 + -1 + iVar5;
  if (local_8 < 0) {
    local_8 = 0;
  }
  if (DAT_007fb240 + -1 < local_c) {
    local_c = DAT_007fb240 + -1;
  }
  if (_param_3 < 0) {
    _param_3 = 0;
  }
  if (DAT_007fb242 + -1 < _param_6) {
    _param_6 = DAT_007fb242 + -1;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  if (DAT_007fb244 + -1 < iVar3) {
    iVar3 = DAT_007fb244 + -1;
  }
  puVar2 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  iVar4 = DAT_007fb240 * _param_3 + local_8 + (iVar5 + -1) * (int)DAT_007fb246;
  if (iVar5 <= iVar3) {
    _param_5 = (iVar3 - iVar5) + 1;
    do {
      iVar4 = iVar4 + DAT_007fb246;
      iVar3 = iVar4 - DAT_007fb240;
      local_10 = iVar4;
      if (_param_3 <= _param_6) {
        iVar5 = (_param_6 - _param_3) + 1;
        do {
          iVar3 = iVar3 + DAT_007fb240;
          if (local_8 <= local_c) {
            iVar6 = iVar3 * 8 + -8;
            _param_4 = (local_c - local_8) + 1;
            do {
              iVar6 = iVar6 + 8;
              piVar1 = *(int **)(iVar6 + DAT_007fb248);
              if ((((piVar1 != (int *)0x0) && (piVar1[9] == (int)param_1)) && (piVar1 != (int *)0x0)
                  ) && ((iVar4 = (**(code **)(*piVar1 + 0x2c))(), iVar4 == param_2 &&
                        (iVar4 = (**(code **)(*piVar1 + 0xf8))(), iVar4 != 0)))) {
                if (param_9 == 0) {
LAB_0043eda0:
                  if ((param_10 == -1) ||
                     (iVar4 = (**(code **)(*piVar1 + 0x6c))(), iVar4 == param_10)) {
                    Library::DKW::TBL::FUN_006ae1c0(puVar2,(undefined4 *)((int)piVar1 + 0x32));
                  }
                }
                else {
                  switch(param_2) {
                  case 0x38:
                  case 0x39:
                  case 0x4f:
                  case 0x5e:
                    if ((param_9 == 1) &&
                       (iVar4 = (**(code **)(*piVar1 + 0x88))(local_14), 0 < iVar4))
                    goto LAB_0043eda0;
                  }
                }
              }
              _param_4 = _param_4 + -1;
              iVar4 = local_10;
            } while (_param_4 != 0);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      _param_5 = _param_5 + -1;
    } while (_param_5 != 0);
  }
  if (puVar2[3] == 0) {
    FUN_006ae110((byte *)puVar2);
    return (uint *)0x0;
  }
  return puVar2;
}

