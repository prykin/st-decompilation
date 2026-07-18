
/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_008571e0 == 1) {
    __FF_MSGBANNER();
  }
  FUN_0073e020(param_1);
  (*(code *)PTR___exit_007f14cc)(0xff);
  return;
}

