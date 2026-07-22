
void __fastcall FUN_0041cf50(AnonShape_0041CF50_01071190 *param_1)

{
  int iVar1;

  if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005594A0::thunk_FUN_00559620
              ((AnonReceiver_005594A0 *)g_visibleClass_00802A88,(int)param_1->field_005B,
               (int)param_1->field_005D,(char)param_1->field_005F,
               *(undefined **)&param_1->field_0x24,param_1->field_0105,
               *(undefined4 *)&param_1->field_0x18,0xffffffff);
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*(int *)param_1 + 8))();
  if ((iVar1 == 1) && (*(uint *)&param_1->field_0x24 == (uint)DAT_0080874d)) {
    FUN_006e6780(PTR_00807598,
                 (*(uint *)&param_1->field_0x18 >> 0x10 & 0xff) << 0x10 |
                 (uint)*(ushort *)&param_1->field_0x18);
  }
  param_1->field_0105 = 0xffffffff;
  return;
}

