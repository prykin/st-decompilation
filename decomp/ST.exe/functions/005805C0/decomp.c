
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005805c0(AnonShape_005805C0_8BDDDE2B *param_1)

{
  undefined1 *this;
  char *text;
  int iVar1;
  byte bVar2;

  bVar2 = 0x1d;
  this = &param_1->field_0x1d5;
  text = thunk_FUN_0057f530(param_1,param_1->field_025D);
  iVar1 = STT3DSprC::LoadSequence((STT3DSprC *)this,0xe,DAT_00806764,text,bVar2);
  if (iVar1 == 0) {
    iVar1 = STT3DSprC::LoadSequence((STT3DSprC *)this,0xd,DAT_00806764,PTR_s_termsd_007cb0b4,0x1d);
    if (iVar1 == 0) {
      STT3DSprC::StartShow((STT3DSprC *)this,0xe,PTR_00802a38->field_00E4);
      thunk_FUN_004ad3c0(this,(float)param_1->field_0245 * _DAT_007904f8 + _DAT_007904f4,
                         (float)param_1->field_0249 * _DAT_007904f8 + _DAT_007904f4,
                         (float)param_1->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc)
      ;
      FUN_006ea3e0(param_1->field_0211,param_1->field_01ED,-1);
      thunk_FUN_004acf50(this,'\r');
      STT3DSprC::StartShow((STT3DSprC *)this,0xd,PTR_00802a38->field_00E4);
      return 1;
    }
  }
  return 0xffffffff;
}

