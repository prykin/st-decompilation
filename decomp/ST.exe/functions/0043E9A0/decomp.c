
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0043E9A0_param_2Enum. Cases:
   CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94 */

undefined4
FUN_0043e9a0(char param_1,Global_sub_0043E9A0_param_2Enum param_2,short param_3,short param_4,
            short param_5,short param_6,short param_7,short param_8,int param_9,char param_10)

{
  int *piVar1;
  int iVar2;
  STWorldCell *pSVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
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
  iVar4 = SHORT_007fb240 + -1;
  if (iVar4 < local_c) {
    local_c = iVar4;
  }
  if (_param_6 < 0) {
    _param_6 = 0;
  }
  if (SHORT_007fb242 + -1 < _param_4) {
    _param_4 = SHORT_007fb242 + -1;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (SHORT_007fb244 + -1 < _param_5) {
    _param_5 = SHORT_007fb244 + -1;
  }
  iVar4 = SHORT_007fb240 * _param_6 + local_8 + (iVar2 + -1) * (int)SHORT_007fb246;
  if (iVar2 <= _param_5) {
    _param_5 = _param_5 - iVar2;
    iVar2 = CONCAT22((short)((uint)iVar2 >> 0x10),SHORT_007fb240);
    _param_5 = _param_5 + 1;
    iVar6 = local_c;
    iVar7 = local_8;
    param_3 = 0;
    do {
      iVar4 = iVar4 + SHORT_007fb246;
      local_10 = iVar4 - (short)iVar2;
      if (_param_6 <= _param_4) {
        iVar5 = (_param_4 - _param_6) + 1;
        do {
          local_10 = local_10 + (short)iVar2;
          if (iVar7 <= iVar6) {
            iVar6 = (iVar6 - local_8) + 1;
            iVar2 = local_10 * 8 + -8;
            do {
              piVar1 = *(int **)((int)g_worldCells[1].objects + iVar2);
              pSVar3 = g_worldCells;
              if ((((piVar1 != (int *)0x0) && (piVar1[9] == (int)param_1)) && (piVar1 != (int *)0x0)
                  ) && ((pSVar3 = (STWorldCell *)(**(code **)(*piVar1 + 0x2c))(),
                        pSVar3 == (STWorldCell *)param_2 &&
                        (pSVar3 = (STWorldCell *)(**(code **)(*piVar1 + 0xf8))(),
                        pSVar3 != (STWorldCell *)0x0)))) {
                if (param_9 == 0) {
LAB_0043eb0f:
                  if ((param_10 == -1) ||
                     (pSVar3 = (STWorldCell *)(**(code **)(*piVar1 + 0x6c))(),
                     pSVar3 == (STWorldCell *)(int)param_10)) {
                    param_3 = param_3 + 1;
                  }
                }
                else {
                  pSVar3 = (STWorldCell *)(param_2 - CASE_38);
                  switch(param_2) {
                  case CASE_38:
                  case CASE_39:
                  case CASE_4F:
                  case CASE_5E:
                    if ((param_9 == 1) &&
                       (pSVar3 = (STWorldCell *)(**(code **)(*piVar1 + 0x88))(local_14),
                       0 < (int)pSVar3)) goto LAB_0043eb0f;
                  }
                }
              }
              iVar6 = iVar6 + -1;
              iVar2 = iVar2 + 8;
            } while (iVar6 != 0);
            iVar2 = CONCAT22((short)((uint)pSVar3 >> 0x10),SHORT_007fb240);
            iVar6 = local_c;
            iVar7 = local_8;
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      _param_5 = _param_5 + -1;
    } while (_param_5 != 0);
  }
  return CONCAT22((short)((uint)iVar2 >> 0x10),param_3);
}

