
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00636170(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)Library::MSVCRT::FUN_0072ea70(s_NumbM_dat_007d1d8c,&DAT_007d1d98);
  if (piVar1 != (int *)0x0) {
    iVar2 = Library::MSVCRT::FUN_00730050(piVar1,&DAT_007d1d88);
    if (iVar2 < 1) {
      Library::MSVCRT::FUN_0072ea90(piVar1);
      _DAT_007d1bb0 = 0xffffffff;
      return 0;
    }
    Library::MSVCRT::FUN_0072ea90(piVar1);
    _DAT_007d1bb0 = 0xffffffff;
  }
  return 0;
}

