
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005F5F20 -> 005FA0B0 @ 005F6290 */

void __fastcall FUN_005fa0b0(STColl3C *param_1)

{
  STColl3CVTable_at_1D5 **this;
  uint uVar1;

  this = &param_1->vtable_at_1d5;
  uVar1 = ((0x18 - (int)*(short *)&param_1->field_0x6c / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) %
          0x18;
  STT3DSprC::SetCurFase((STT3DSprC *)this,'\x0e',uVar1);
  STT3DSprC::SetCurFase((STT3DSprC *)this,'\f',uVar1);
  STT3DSprC::SetCurShad
            ((STT3DSprC *)this,'\x0e',(0x18 - (int)*(short *)&param_1->field_0x6c / 0xf) % 0x18);
  STT3DSprC::ShowCurFase((STT3DSprC *)this,'\x0e');
  return;
}

