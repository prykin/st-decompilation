
void __fastcall FUN_00494ae0(AnonShape_00494AE0_E545732F *param_1)

{
  int iVar1;
  
  iVar1 = param_1->field_06F7;
  if (((iVar1 != 5) && (iVar1 != 0x11)) && (iVar1 != 0x21)) {
    return;
  }
  iVar1 = thunk_FUN_004e60d0(param_1->field_0024,0x3c);
  if (((iVar1 < 1) && (iVar1 = thunk_FUN_004e60d0(param_1->field_0024,0x91), iVar1 < 1)) &&
     (iVar1 = thunk_FUN_004e60d0(param_1->field_0024,0x4c), iVar1 < 1)) {
    if (((param_1->field_0792 == 1) &&
        (((param_1->field_0792 = 0, param_1->field_045D != 0x14 || (param_1->field_05C0 != 3)) &&
         ((param_1->field_01D1 & 1) == 0)))) &&
       (param_1->field_078A = 0, g_visibleClass_00802A88 != (VisibleClassTy *)0x0)) {
      thunk_FUN_0055a4c0(g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
                         (char)param_1->field_005F,param_1->field_0024,
                         (undefined *)param_1->field_0101,param_1->field_0018);
    }
  }
  else if ((((param_1->field_0792 == 0) &&
            ((param_1->field_0792 = 1, param_1->field_045D != 0x14 || (param_1->field_05C0 != 3))))
           && ((param_1->field_01D1 & 1) == 0)) &&
          (param_1->field_078A = 1, g_visibleClass_00802A88 != (VisibleClassTy *)0x0)) {
    VisibleClassTy::SetZoneMin1
              (g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
               (char)param_1->field_005F,param_1->field_0024,param_1->field_0101,param_1->field_0018
               ,0xffffffff);
  }
  iVar1 = thunk_FUN_004e60d0(param_1->field_0024,0x9a);
  if (((0 < iVar1) || (iVar1 = thunk_FUN_004e60d0(param_1->field_0024,0x41), 0 < iVar1)) ||
     (iVar1 = thunk_FUN_004e60d0(param_1->field_0024,0x4b), 0 < iVar1)) {
    if ((param_1->field_0796 == 0) &&
       ((((param_1->field_0796 = 1, param_1->field_045D != 0x14 || (param_1->field_05C0 != 3)) &&
         ((param_1->field_01D1 & 1) == 0)) &&
        (param_1->field_078E = 1, g_visibleClass_00802A88 != (VisibleClassTy *)0x0)))) {
      VisibleClassTy::SetZoneMin2
                (g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
                 (char)param_1->field_005F,param_1->field_0024,param_1->field_0101,
                 param_1->field_0018,0xffffffff);
    }
    return;
  }
  if (param_1->field_0796 != 1) {
    return;
  }
  param_1->field_0796 = 0;
  if ((param_1->field_045D == 0x14) && (param_1->field_05C0 == 3)) {
    return;
  }
  if ((param_1->field_01D1 & 1) != 0) {
    return;
  }
  param_1->field_078E = 0;
  if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
    return;
  }
  thunk_FUN_0055a870(g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
                     (char)param_1->field_005F,param_1->field_0024,(undefined *)param_1->field_0101,
                     param_1->field_0018);
  return;
}

