
/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2003 Debug */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_0085721c == 0) {
    PTR_PTR_007f2640 = (undefined *)&PTR_DAT_007f2648;
    ___free_lc_time(DAT_00857234);
    thunk_FUN_006a49c0(DAT_00857234,2);
    DAT_00857234 = (int *)0x0;
    iVar2 = 0;
  }
  else {
    piVar1 = thunk_FUN_006a40c0(1,0xac,2,"inittime.c",0x48);
    if (piVar1 == (int *)0x0) {
      iVar2 = 1;
    }
    else {
      uVar3 = FUN_00738d50(piVar1);
      if (uVar3 == 0) {
        PTR_PTR_007f2640 = (undefined *)piVar1;
        ___free_lc_time(DAT_00857234);
        thunk_FUN_006a49c0(DAT_00857234,2);
        iVar2 = 0;
        DAT_00857234 = piVar1;
      }
      else {
        ___free_lc_time(piVar1);
        thunk_FUN_006a49c0(piVar1,2);
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}

