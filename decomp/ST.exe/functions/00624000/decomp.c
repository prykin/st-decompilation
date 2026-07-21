
void __fastcall FUN_00624000(AnonShape_00624000_A9481D8E *param_1)

{
  undefined1 *this;
  char cVar1;
  ushort *puVar2;

  this = &param_1->field_0x1d5;
  STT3DSprC::StopShow((STT3DSprC *)this,0xe);
  if (param_1->field_0352 != '\0') {
    STT3DSprC::StopShow((STT3DSprC *)this,0xc);
    cVar1 = param_1->field_02AD;
    if (((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) {
      STT3DSprC::StopShow((STT3DSprC *)this,0xc);
    }
  }
  puVar2 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806774,CASE_1D,(&PTR_s_expdeep_007d0354)[(byte)param_1->field_02AD],
                      0xffffffff,0,1,0,(undefined4 *)0x0);
  param_1->field_02CE = 0;
  param_1->field_02D2 = *(undefined4 *)puVar2;
  puVar2 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806764,CASE_1D,(&PTR_DAT_007d0374)[(byte)param_1->field_02AD],0xffffffff
                      ,0,1,0,(undefined4 *)0x0);
  param_1->field_02DB = 0;
  param_1->field_02D7 = *(undefined4 *)puVar2;
  puVar2 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806774,CASE_1D,(&PTR_DAT_007d0364)[(byte)param_1->field_02AD],0xffffffff
                      ,0,1,0,(undefined4 *)0x0);
  param_1->field_02E1 = 0;
  param_1->field_02E5 = *(undefined4 *)puVar2;
  return;
}

