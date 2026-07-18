
/* Library Function - Single Match
    __whiteout
   
   Library: Visual Studio 2003 Debug */

uint __cdecl __whiteout(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  do {
    *param_1 = *param_1 + 1;
    uVar1 = __inc(param_2);
    uVar2 = FUN_00734760(uVar1);
  } while (uVar2 != 0);
  return uVar1;
}

