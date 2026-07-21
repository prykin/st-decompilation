
void __fastcall FUN_00494f00(AnonShape_00494F00_45028F21 *param_1)

{
  int iVar1;

  iVar1 = param_1->field_06F7;
  if (((iVar1 == 5) || (iVar1 == 0x11)) || (iVar1 == 0x21)) {
    if (((param_1->field_0792 == 1) && (param_1->field_078A == 1)) &&
       ((param_1->field_01D1 & 1) == 0)) {
      param_1->field_078A = 0;
      if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
        thunk_FUN_0055a4c0(g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D
                           ,(char)param_1->field_005F,param_1->field_0024,param_1->field_0101,
                           param_1->field_0018);
      }
    }
    if (((param_1->field_0796 == 1) && (param_1->field_078E == 1)) &&
       ((param_1->field_01D1 & 1) == 0)) {
      param_1->field_078E = 0;
      if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
        thunk_FUN_0055a870(g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D
                           ,(char)param_1->field_005F,param_1->field_0024,param_1->field_0101,
                           param_1->field_0018);
      }
    }
  }
  return;
}

