
void __fastcall FUN_0041c5a0(AnonShape_0041C5A0_167218F4 *param_1)

{
  undefined4 uVar1;

  if ((g_visibleClass_00802A88 != (VisibleClassTy *)0x0) && ((param_1->field_01D1 & 1) == 0)) {
    thunk_FUN_00559110(g_visibleClass_00802A88,(int)param_1->field_005B,
                       (undefined *)(int)param_1->field_005D,(int)(short)param_1->field_005F,
                       *(uint *)&param_1->field_0x24,param_1->field_0101,
                       *(int *)&param_1->field_0x18,0xffffffff);
    if (*(int *)&param_1->field_0x20 == 0x14) {
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00558C00::thunk_FUN_00559620
                ((AnonReceiver_00558C00 *)g_visibleClass_00802A88,(int)param_1->field_005B,
                 (int)param_1->field_005D,(char)param_1->field_005F,
                 *(undefined **)&param_1->field_0x24,param_1->field_0105,
                 *(undefined4 *)&param_1->field_0x18,0xffffffff);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar1 = (**(code **)(*(int *)param_1 + 0x2c))();
    switch(uVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    case 5:
    case 0x11:
    case 0x21:
      (**(code **)(*(int *)param_1 + 0x98))();
      break;
    case 0xb:
    case 0x23:
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00558C00::thunk_FUN_00559d60
                ((AnonReceiver_00558C00 *)g_visibleClass_00802A88,(int)param_1->field_005B,
                 (int)param_1->field_005D,(char)param_1->field_005F,*(uint *)&param_1->field_0x24,
                 param_1->field_010D,*(undefined4 *)&param_1->field_0x18);
      return;
    }
  }
  return;
}

