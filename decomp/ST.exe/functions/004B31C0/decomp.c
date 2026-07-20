
undefined4 __cdecl FUN_004b31c0(int *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  DArrayTy *pDVar5;
  int iVar6;
  uint uVar7;
  AnonShape_004B31C0_DBC5A6CD *local_c;
  int local_8;
  
  piVar1 = param_1;
  iVar6 = 0;
  local_8 = 0;
  bVar2 = thunk_FUN_0044e1b0((int)param_1);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0;
  }
  if (PTR_007fa170 != (DArrayTy *)0x0) {
    PTR_007fa170->iteratorIndex = 0;
    iVar3 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa170,&local_c);
    iVar4 = param_2;
    while (-1 < iVar3) {
      if ((((local_c != (AnonShape_004B31C0_DBC5A6CD *)0x0) && (local_c->field_0024 == piVar1)) &&
          ((iVar4 == 0 || (local_c->field_0018 != iVar4)))) &&
         ((((local_c->field_02EC == 3 || (local_c->field_02A0 != 0)) || (local_c->field_02E0 != 0))
          || (local_c->field_02DC != 0)))) {
        local_8 = local_8 + 1;
      }
      iVar3 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa170,&local_c);
      iVar6 = local_8;
    }
    if (DAT_00808a97 <= (uint)*(ushort *)&g_playerRuntime[(int)piVar1].field_0xd + iVar6) {
      return 0;
    }
  }
  pDVar5 = g_playerRuntime[(int)piVar1].objects;
  if (pDVar5 != (DArrayTy *)0x0) {
    uVar7 = 0;
    if (pDVar5->count != 0) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar5,uVar7,&param_1);
        if (((param_1 != (int *)0x0) &&
            ((((iVar4 = (**(code **)(*param_1 + 0x2c))(), iVar4 == 0x32 ||
               (iVar4 = (**(code **)(*param_1 + 0x2c))(), iVar4 == 0x40)) ||
              ((iVar4 = (**(code **)(*param_1 + 0x2c))(), iVar4 == 0x49 ||
               (iVar4 = (**(code **)(*param_1 + 0x2c))(), iVar4 == 0x5c)))) &&
             (((*(int *)((int)param_1 + 0x361) == 1 && (iVar4 = param_1[0x134], iVar4 != 0)) &&
              (iVar4 != 1)))))) && (iVar4 != 2)) {
          iVar6 = iVar6 + 1;
        }
        pDVar5 = g_playerRuntime[(int)piVar1].objects;
        uVar7 = uVar7 + 1;
      } while (uVar7 < pDVar5->count);
    }
    if (DAT_00808a97 <= (uint)*(ushort *)&g_playerRuntime[(int)piVar1].field_0xd + iVar6) {
      return 0;
    }
  }
  return 1;
}

