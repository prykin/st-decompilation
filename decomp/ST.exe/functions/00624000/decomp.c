
void __fastcall FUN_00624000(int param_1)

{
  STT3DSprC *this;
  char cVar1;
  ushort *puVar2;
  
  this = (STT3DSprC *)(param_1 + 0x1d5);
  STT3DSprC::StopShow(this,0xe);
  if (*(char *)(param_1 + 0x352) != '\0') {
    STT3DSprC::StopShow(this,0xc);
    cVar1 = *(char *)(param_1 + 0x2ad);
    if (((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) {
      STT3DSprC::StopShow(this,0xc);
    }
  }
  puVar2 = mfRLoad(DAT_00806774,CASE_1D,(&PTR_s_expdeep_007d0354)[*(byte *)(param_1 + 0x2ad)],
                   0xffffffff,0,1,0,(undefined4 *)0x0);
  *(undefined4 *)(param_1 + 0x2ce) = 0;
  *(undefined4 *)(param_1 + 0x2d2) = *(undefined4 *)puVar2;
  puVar2 = mfRLoad(DAT_00806764,CASE_1D,(&PTR_DAT_007d0374)[*(byte *)(param_1 + 0x2ad)],0xffffffff,0
                   ,1,0,(undefined4 *)0x0);
  *(undefined4 *)(param_1 + 0x2db) = 0;
  *(undefined4 *)(param_1 + 0x2d7) = *(undefined4 *)puVar2;
  puVar2 = mfRLoad(DAT_00806774,CASE_1D,(&PTR_DAT_007d0364)[*(byte *)(param_1 + 0x2ad)],0xffffffff,0
                   ,1,0,(undefined4 *)0x0);
  *(undefined4 *)(param_1 + 0x2e1) = 0;
  *(undefined4 *)(param_1 + 0x2e5) = *(undefined4 *)puVar2;
  return;
}

