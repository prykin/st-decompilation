
void __fastcall FUN_00624000(int param_1)

{
  char cVar1;
  ushort *puVar2;
  
  thunk_FUN_004ac410(0xe);
  if (*(char *)(param_1 + 0x352) != '\0') {
    thunk_FUN_004ac410(0xc);
    cVar1 = *(char *)(param_1 + 0x2ad);
    if (((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) {
      thunk_FUN_004ac410(0xc);
    }
  }
  puVar2 = FUN_00709af0(DAT_00806774,0x1d,(&PTR_s_expdeep_007d0354)[*(byte *)(param_1 + 0x2ad)],
                        0xffffffff,0,1,0,(undefined4 *)0x0);
  *(undefined4 *)(param_1 + 0x2ce) = 0;
  *(undefined4 *)(param_1 + 0x2d2) = *(undefined4 *)puVar2;
  puVar2 = FUN_00709af0(DAT_00806764,0x1d,(&PTR_DAT_007d0374)[*(byte *)(param_1 + 0x2ad)],0xffffffff
                        ,0,1,0,(undefined4 *)0x0);
  *(undefined4 *)(param_1 + 0x2db) = 0;
  *(undefined4 *)(param_1 + 0x2d7) = *(undefined4 *)puVar2;
  puVar2 = FUN_00709af0(DAT_00806774,0x1d,(&PTR_DAT_007d0364)[*(byte *)(param_1 + 0x2ad)],0xffffffff
                        ,0,1,0,(undefined4 *)0x0);
  *(undefined4 *)(param_1 + 0x2e1) = 0;
  *(undefined4 *)(param_1 + 0x2e5) = *(undefined4 *)puVar2;
  return;
}

