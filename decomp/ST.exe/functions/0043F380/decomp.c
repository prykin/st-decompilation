
undefined4
FUN_0043f380(char param_1,byte *param_2,short param_3,short param_4,short param_5,short param_6,
            short param_7,short param_8)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  STWorldCell *pSVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  byte local_20 [16];
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = (int)param_3;
  local_c = param_6 + -1 + local_8;
  _param_3 = (int)param_4;
  _param_4 = param_7 + -1 + _param_3;
  iVar3 = (int)param_5;
  _param_5 = param_8 + -1 + iVar3;
  param_6 = 0;
  if (local_8 < 0) {
    local_8 = 0;
  }
  iVar6 = g_worldGrid.sizeX + -1;
  if (iVar6 < local_c) {
    local_c = iVar6;
  }
  if (_param_3 < 0) {
    _param_3 = 0;
  }
  if (g_worldGrid.sizeY + -1 < _param_4) {
    _param_4 = g_worldGrid.sizeY + -1;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (g_worldGrid.sizeZ + -1 < _param_5) {
    _param_5 = g_worldGrid.sizeZ + -1;
  }
  iVar6 = g_worldGrid.sizeX * _param_3 + local_8 + (iVar3 + -1) * (int)g_worldGrid.planeStride;
  if (iVar3 <= _param_5) {
    _param_5 = _param_5 - iVar3;
    iVar3 = CONCAT22((short)((uint)iVar3 >> 0x10),g_worldGrid.sizeX);
    _param_5 = _param_5 + 1;
    iVar8 = local_c;
    iVar10 = local_8;
    param_6 = 0;
    do {
      iVar6 = iVar6 + g_worldGrid.planeStride;
      local_10 = iVar6 - (short)iVar3;
      if (_param_3 <= _param_4) {
        iVar7 = (_param_4 - _param_3) + 1;
        do {
          local_10 = local_10 + (short)iVar3;
          if (iVar10 <= iVar8) {
            iVar8 = (iVar8 - local_8) + 1;
            iVar3 = local_10 * 8 + -8;
            do {
              piVar2 = *(int **)((int)g_worldGrid.cells[1].objects + iVar3);
              pSVar5 = g_worldGrid.cells;
              if ((piVar2 != (int *)0x0) && (piVar2[9] == (int)param_1)) {
                (**(code **)(*piVar2 + 0x74))(local_20);
                pbVar9 = local_20;
                pbVar4 = param_2;
                do {
                  bVar1 = *pbVar4;
                  bVar11 = bVar1 < *pbVar9;
                  if (bVar1 != *pbVar9) {
LAB_0043f4c8:
                    pSVar5 = (STWorldCell *)((1 - (uint)bVar11) - (uint)(bVar11 != 0));
                    goto LAB_0043f4cd;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar4[1];
                  bVar11 = bVar1 < pbVar9[1];
                  if (bVar1 != pbVar9[1]) goto LAB_0043f4c8;
                  pbVar4 = pbVar4 + 2;
                  pbVar9 = pbVar9 + 2;
                } while (bVar1 != 0);
                pSVar5 = (STWorldCell *)0x0;
LAB_0043f4cd:
                if (pSVar5 == (STWorldCell *)0x0) {
                  param_6 = param_6 + 1;
                }
              }
              iVar8 = iVar8 + -1;
              iVar3 = iVar3 + 8;
            } while (iVar8 != 0);
            iVar3 = CONCAT22((short)((uint)pSVar5 >> 0x10),g_worldGrid.sizeX);
            iVar8 = local_c;
            iVar10 = local_8;
          }
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      _param_5 = _param_5 + -1;
    } while (_param_5 != 0);
  }
  return CONCAT22((short)((uint)iVar3 >> 0x10),param_6);
}

