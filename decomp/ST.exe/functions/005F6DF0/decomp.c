
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005f6df0(STAllPlayersC *param_1)

{
  undefined1 *this;

  this = &param_1->field_0x1d5;
  STT3DSprC::sub_004AD3C0
            ((STT3DSprC *)this,(float)*(int *)&param_1->field_0x2c1 * _DAT_007904f8 * _DAT_007904f0,
             (float)*(int *)&param_1->field_0x2c5 * _DAT_007904f8 * _DAT_007904f0,
             (float)*(int *)&param_1->field_0x2c9 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  sub_00416240(param_1,*(undefined2 *)&param_1->field_0x2c1,*(undefined2 *)&param_1->field_0x2c5,
               *(undefined2 *)&param_1->field_0x2c9);
  thunk_FUN_004ac610(this,'\x0e');
  thunk_FUN_005fa0b0((STColl3C *)param_1);
  thunk_FUN_004ad460(this,0);
  return;
}

