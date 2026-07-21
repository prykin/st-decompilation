
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0043EC20_param_2Enum. Cases:
   CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94 */

uint * FUN_0043ec20(char param_1,Global_sub_0043EC20_param_2Enum param_2,short param_3,short param_4
                   ,short param_5,short param_6,short param_7,short param_8,int param_9,
                   char param_10)

{
  int *piVar1;
  DArrayTy *array;
  Global_sub_0043EC20_param_2Enum GVar2;
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
  if (g_worldGrid.sizeX + -1 < local_c) {
    local_c = g_worldGrid.sizeX + -1;
  }
  if (_param_3 < 0) {
    _param_3 = 0;
  }
  if (g_worldGrid.sizeY + -1 < _param_6) {
    _param_6 = g_worldGrid.sizeY + -1;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  if (g_worldGrid.sizeZ + -1 < iVar3) {
    iVar3 = g_worldGrid.sizeZ + -1;
  }
  array = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  iVar4 = g_worldGrid.sizeX * _param_3 + local_8 + (iVar5 + -1) * (int)g_worldGrid.planeStride;
  if (iVar5 <= iVar3) {
    _param_5 = (iVar3 - iVar5) + 1;
    do {
      iVar4 = iVar4 + g_worldGrid.planeStride;
      iVar3 = iVar4 - g_worldGrid.sizeX;
      local_10 = iVar4;
      if (_param_3 <= _param_6) {
        iVar5 = (_param_6 - _param_3) + 1;
        do {
          iVar3 = iVar3 + g_worldGrid.sizeX;
          if (local_8 <= local_c) {
            _param_4 = (local_c - local_8) + 1;
            iVar6 = iVar3 * 8 + -8;
            do {
              piVar1 = *(int **)((int)g_worldGrid.cells[1].objects + iVar6);
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              if ((((piVar1 != (int *)0x0) && (piVar1[9] == (int)param_1)) && (piVar1 != (int *)0x0)
                  ) && ((GVar2 = (**(code **)(*piVar1 + 0x2c))(), GVar2 == param_2 &&
                        (iVar4 = (**(code **)(*piVar1 + 0xf8))(), iVar4 != 0)))) {
                if (param_9 == 0) {
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_0043eda0:
                  if ((param_10 == -1) ||
                     (iVar4 = (**(code **)(*piVar1 + 0x6c))(), iVar4 == param_10)) {
                    Library::DKW::TBL::FUN_006ae1c0
                              ((uint *)array,(undefined4 *)((int)piVar1 + 0x32));
                  }
                }
                else {
                  switch(param_2) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  case CASE_38:
                  case CASE_39:
                  case CASE_4F:
                  case CASE_5E:
                    if ((param_9 == 1) &&
                       (iVar4 = (**(code **)(*piVar1 + 0x88))(local_14), 0 < iVar4))
                    goto LAB_0043eda0;
                  }
                }
              }
              _param_4 = _param_4 + -1;
              iVar4 = local_10;
              iVar6 = iVar6 + 8;
            } while (_param_4 != 0);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      _param_5 = _param_5 + -1;
    } while (_param_5 != 0);
  }
  if (array->count == 0) {
    DArrayDestroy(array);
    return (uint *)0x0;
  }
  return &array->flags;
}

