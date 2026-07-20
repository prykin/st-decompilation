
void __fastcall FUN_0041d590(AnonShape_0041D590_1DB01C7A *param_1)

{
  if ((g_visibleClass_00802A88 != (VisibleClassTy *)0x0) && ((param_1->field_01D1 & 1) == 0)) {
    VisibleClassTy::VisHoleCreate
              (g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
               (undefined *)(int)param_1->field_005F,param_1->field_0024,param_1->field_0101,0x19);
  }
  return;
}

