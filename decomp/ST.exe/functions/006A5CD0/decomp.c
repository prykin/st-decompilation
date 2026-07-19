
undefined4 FUN_006a5cd0(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38 [2];
  int local_30;
  int local_2c;
  int local_24;
  
  thunk_FUN_006a57a0(local_38);
  if (((local_24 == 0) && (local_30 == 0)) && (((DAT_007ec178 & 0x10) == 0 || (local_2c == 0)))) {
    return 0;
  }
  iVar2 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,&DAT_007a4ccc);
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  thunk_FUN_006a5990((undefined4 *)0x0);
  return 1;
}

