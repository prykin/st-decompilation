
uint * FUN_0072f770(void)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int local_8;
  
  bVar1 = true;
  if (DAT_007f1234 == (uint *)0x0) {
    DAT_007f1234 = (uint *)thunk_FUN_006a3c10(0x351,2,"setlocal.c",0x167);
  }
  *(undefined1 *)DAT_007f1234 = 0;
  for (local_8 = 1; __strcats(DAT_007f1234,3), local_8 < 5; local_8 = local_8 + 1) {
    FUN_0073a250(DAT_007f1234,(uint *)&DAT_0079feec);
    iVar2 = _strcmp((char *)(&DAT_007f1234)[local_8 * 3],(char *)(&DAT_007f1234)[(local_8 + 1) * 3])
    ;
    if (iVar2 != 0) {
      bVar1 = false;
    }
  }
  puVar3 = DAT_007f1234;
  if (bVar1) {
    thunk_FUN_006a49c0(DAT_007f1234,2);
    DAT_007f1234 = (uint *)0x0;
    puVar3 = (uint *)PTR_DAT_007f124c;
  }
  return puVar3;
}

