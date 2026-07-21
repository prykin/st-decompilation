
undefined4 __fastcall FUN_004ea870(TLOBaseTy *param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;
  
  if ((param_1->field_04D0 == CASE_0) &&
     (*(int *)&param_1->field_0x4ec + 0x19U <= (uint)PTR_00802a38->field_00E4)) {
    *(undefined4 *)&param_1->field_0x4ec = PTR_00802a38->field_00E4;
    local_8 = param_1;
    iVar2 = thunk_FUN_004c7860(param_1,3,0,1,1,1);
    if ((iVar2 != 0) &&
       ((bVar1 = thunk_FUN_004c7c20((int)param_1), CONCAT31(extraout_var,bVar1) != 0 &&
        (g_playerRuntime[*(int *)&param_1->field_0x24].field1705_0x7d6 != 0)))) {
      array = g_playerRuntime[*(int *)&param_1->field_0x24].objects;
      index = 0;
      if (array->count != 0) {
        while (((DArrayGetElement(array,index,&local_8), local_8 == (TLOBaseTy *)0x0 ||
                (iVar2 = (*local_8->vtable->vfunc_2C)(), iVar2 != 0x44)) ||
               (local_8->field_04D0 == CASE_0))) {
          index = index + 1;
          array = g_playerRuntime[*(int *)&param_1->field_0x24].objects;
          if (array->count <= index) {
            return 0;
          }
        }
        iVar2 = thunk_FUN_004c7860(param_1,3,0,1,1,1);
        if ((iVar2 != 0) &&
           (bVar1 = thunk_FUN_004c7c20((int)param_1), CONCAT31(extraout_var_00,bVar1) != 0)) {
          thunk_FUN_004c7cc0(param_1,3,0,1,0,0xffffffff,0,0xff,(char *)0x0);
          param_1->field_04D0 = CASE_2;
          TLOBaseTy::RotateSpr(param_1,0);
        }
        thunk_FUN_004dea40((AnonShape_004DEA40_61E7A6D4 *)local_8);
        return 0;
      }
    }
  }
  return 0;
}

