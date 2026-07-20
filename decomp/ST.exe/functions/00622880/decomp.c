
void __fastcall FUN_00622880(AnonShape_00622880_C4191DB5 *param_1)

{
  byte bVar1;
  
  thunk_FUN_004ad310((STT3DSprC *)&param_1->field_0x1d5);
  bVar1 = param_1->field_02AD;
  if (bVar1 < 3) {
    if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
      thunk_FUN_00559110(g_visibleClass_00802A88,(int)param_1->field_0047,
                         (undefined *)(int)param_1->field_0049,(int)param_1->field_004B,
                         *(uint *)&param_1->field_0x24,*(int *)(&DAT_007d02b4 + (uint)bVar1 * 4),
                         *(int *)&param_1->field_0x18,0xffffffff);
    }
  }
  else if ((bVar1 == 3) && (g_visibleClass_00802A88 != (VisibleClassTy *)0x0)) {
    thunk_FUN_00559110(g_visibleClass_00802A88,(int)param_1->field_0047,
                       (undefined *)(int)param_1->field_0049,(int)param_1->field_004B,
                       *(uint *)&param_1->field_0x24,DAT_007d02c0,*(int *)&param_1->field_0x18,
                       0xffffffff);
    if ((-1 < param_1->field_005B) && ((-1 < param_1->field_005D && (-1 < param_1->field_005F)))) {
      thunk_FUN_0041d2b0((AnonShape_0041D2B0_CE8C6BD3 *)param_1);
    }
  }
  if ((byte *)param_1->field_034A != (byte *)0x0) {
    FUN_006ae110((byte *)param_1->field_034A);
    param_1->field_034A = 0;
  }
  return;
}

