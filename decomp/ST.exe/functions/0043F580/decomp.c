
uint * FUN_0043f580(char param_1,byte *param_2,short param_3,short param_4,short param_5,
                   short param_6,short param_7,short param_8)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  byte local_24 [16];
  int local_14;
  int local_10;
  uint *local_c;
  int local_8;
  
  local_8 = (int)param_3;
  iVar7 = (int)param_5;
  _param_3 = param_6 + -1 + local_8;
  _param_6 = (int)param_4;
  _param_4 = param_7 + -1 + _param_6;
  iVar3 = param_8 + -1 + iVar7;
  if (local_8 < 0) {
    local_8 = 0;
  }
  iVar5 = local_8;
  if (DAT_007fb240 + -1 < _param_3) {
    _param_3 = DAT_007fb240 + -1;
  }
  if (_param_6 < 0) {
    _param_6 = 0;
  }
  if (DAT_007fb242 + -1 < _param_4) {
    _param_4 = DAT_007fb242 + -1;
  }
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  if (DAT_007fb244 + -1 < iVar3) {
    iVar3 = DAT_007fb244 + -1;
  }
  local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  iVar6 = DAT_007fb240 * _param_6 + iVar5 + (iVar7 + -1) * (int)DAT_007fb246;
  if (iVar7 <= iVar3) {
    _param_8 = (iVar3 - iVar7) + 1;
    do {
      iVar6 = iVar6 + DAT_007fb246;
      local_14 = iVar6;
      if (_param_6 <= _param_4) {
        iVar3 = (_param_4 - _param_6) + 1;
        local_10 = iVar6 - DAT_007fb240;
        do {
          local_10 = local_10 + DAT_007fb240;
          if (iVar5 <= _param_3) {
            iVar7 = local_10 * 8 + -8;
            _param_7 = (_param_3 - local_8) + 1;
            do {
              iVar7 = iVar7 + 8;
              piVar2 = *(int **)(iVar7 + DAT_007fb248);
              if ((piVar2 != (int *)0x0) && (piVar2[9] == (int)param_1)) {
                (**(code **)(*piVar2 + 0x74))(local_24);
                pbVar8 = local_24;
                pbVar4 = param_2;
                do {
                  bVar1 = *pbVar4;
                  bVar9 = bVar1 < *pbVar8;
                  if (bVar1 != *pbVar8) {
LAB_0043f6e3:
                    iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                    goto LAB_0043f6e8;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar4[1];
                  bVar9 = bVar1 < pbVar8[1];
                  if (bVar1 != pbVar8[1]) goto LAB_0043f6e3;
                  pbVar4 = pbVar4 + 2;
                  pbVar8 = pbVar8 + 2;
                } while (bVar1 != 0);
                iVar5 = 0;
LAB_0043f6e8:
                if (iVar5 == 0) {
                  Library::DKW::TBL::FUN_006ae1c0(local_c,(undefined4 *)((int)piVar2 + 0x32));
                }
              }
              _param_7 = _param_7 + -1;
              iVar6 = local_14;
              iVar5 = local_8;
            } while (_param_7 != 0);
          }
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      _param_8 = _param_8 + -1;
    } while (_param_8 != 0);
  }
  if (local_c[3] == 0) {
    FUN_006ae110((byte *)local_c);
    local_c = (uint *)0x0;
  }
  return local_c;
}

