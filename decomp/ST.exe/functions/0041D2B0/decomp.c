
void __fastcall FUN_0041d2b0(AnonShape_0041D2B0_CE8C6BD3 *param_1)

{
  int iVar1;
  
  if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
    thunk_FUN_00559d60(g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
                       (char)param_1->field_005F,*(uint *)&param_1->field_0x24,
                       (undefined *)param_1->field_010D,*(undefined4 *)&param_1->field_0x18);
  }
  iVar1 = (**(code **)(*(int *)param_1 + 8))();
  if ((iVar1 == 1) && (*(uint *)&param_1->field_0x24 == (uint)DAT_0080874d)) {
    FUN_006e6780(PTR_00807598,
                 CONCAT22(CONCAT11(2,(char)((uint)*(undefined4 *)&param_1->field_0x18 >> 0x10)),
                          *(undefined2 *)&param_1->field_0x18));
  }
  param_1->field_010D = 0xffffffff;
  return;
}

