
bool FUN_00497920(AnonShape_00497920_894F87D6 *param_1,undefined4 param_2,undefined4 param_3,
                 undefined4 param_4)

{
  int iVar1;
  STWorldObject *this;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  
  sVar5 = (short)param_2;
  if ((((-1 < sVar5) && (sVar5 < g_worldGrid.sizeX)) && (sVar4 = (short)param_3, -1 < sVar4)) &&
     (((sVar4 < g_worldGrid.sizeY && (sVar3 = (short)param_4, -1 < sVar3)) &&
      ((sVar3 < g_worldGrid.sizeZ &&
       (this = g_worldGrid.cells
               [(int)g_worldGrid.planeStride * (int)sVar3 + (int)g_worldGrid.sizeX * (int)sVar4 +
                (int)sVar5].objects[0], this != (STWorldObject *)0x0)))))) {
    if (((this[1].vtable != (STWorldObjectVTable *)param_1->field_0024) ||
        (*(short *)&this[1].field_0xc != param_1->field_0030)) ||
       (*(int *)((int)&this[7].vtable + 1) == 1)) {
      if (this[6].field_0xb == '\x01') {
        return true;
      }
      if (this[6].field_0xb == '\0') {
        return false;
      }
      if (*(short *)((int)&this[6].value_20 + 2) == 0) {
        return false;
      }
      if (*(int *)&this[4].field_0x7 == 0) {
        return false;
      }
      thunk_FUN_00416840(this,(undefined2 *)((int)&param_2 + 2),(undefined2 *)((int)&param_3 + 2),
                         (undefined2 *)((int)&param_4 + 2));
      if (((param_1->field_005B == param_2._2_2_) && (param_1->field_005D == param_3._2_2_)) &&
         (param_1->field_005F == param_4._2_2_)) {
        return false;
      }
      return *(short *)((int)&this[6].value_20 + 2) < 0x1e;
    }
    iVar2 = *(int *)&this[4].field_0x7;
    if (iVar2 == 0) {
      return true;
    }
    iVar1 = iVar2 + *(int *)&this[5].field_0x1f * 8;
    if (((*(short *)(iVar2 + *(int *)&this[5].field_0x1f * 8) == param_1->field_0047) &&
        (*(short *)(iVar1 + 2) == param_1->field_0049)) &&
       (*(short *)(iVar1 + 4) == param_1->field_004B)) {
      return false;
    }
  }
  return true;
}

