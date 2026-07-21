
undefined4 __cdecl FUN_004b31c0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  DArrayTy *array;
  int iVar4;
  uint index;
  AnonShape_004B31C0_DBC5A6CD *local_c;
  int local_8;

  piVar1 = param_1;
  iVar4 = 0;
  local_8 = 0;
  iVar2 = thunk_FUN_0044e1b0((int)param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if (PTR_007fa170 != (DArrayTy *)0x0) {
    PTR_007fa170->iteratorIndex = 0;
    iVar3 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa170,&local_c);
    iVar2 = param_2;
    while (-1 < iVar3) {
      if ((((local_c != (AnonShape_004B31C0_DBC5A6CD *)0x0) && (local_c->field_0024 == piVar1)) &&
          ((iVar2 == 0 || (local_c->field_0018 != iVar2)))) &&
         ((((local_c->field_02EC == 3 || (local_c->field_02A0 != 0)) || (local_c->field_02E0 != 0))
          || (local_c->field_02DC != 0)))) {
        local_8 = local_8 + 1;
      }
      iVar3 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa170,&local_c);
      iVar4 = local_8;
    }
    if (DAT_00808a97 <= (uint)*(ushort *)&g_playerRuntime[(int)piVar1].field_0xd + iVar4) {
      return 0;
    }
  }
  array = g_playerRuntime[(int)piVar1].objects;
  if (array != (DArrayTy *)0x0) {
    index = 0;
    if (array->count != 0) {
      do {
        DArrayGetElement(array,index,&param_1);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((param_1 != (int *)0x0) &&
            ((((iVar2 = (**(code **)(*param_1 + 0x2c))(), iVar2 == 0x32 ||
               (iVar2 = (**(code **)(*param_1 + 0x2c))(), iVar2 == 0x40)) ||
              ((iVar2 = (**(code **)(*param_1 + 0x2c))(), iVar2 == 0x49 ||
               (iVar2 = (**(code **)(*param_1 + 0x2c))(), iVar2 == 0x5c)))) &&
             (((*(int *)((int)param_1 + 0x361) == 1 && (iVar2 = param_1[0x134], iVar2 != 0)) &&
              (iVar2 != 1)))))) && (iVar2 != 2)) {
          iVar4 = iVar4 + 1;
        }
        array = g_playerRuntime[(int)piVar1].objects;
        index = index + 1;
      } while (index < array->count);
    }
    if (DAT_00808a97 <= (uint)*(ushort *)&g_playerRuntime[(int)piVar1].field_0xd + iVar4) {
      return 0;
    }
  }
  return 1;
}

