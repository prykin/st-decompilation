
/* Library Function - Single Match
    _shortsort
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

void __cdecl shortsort(undefined1 *param_1,undefined1 *param_2,int param_3,undefined *param_4)

{
  int iVar1;
  undefined1 *local_c;
  undefined1 *local_8;
  
  for (; param_1 < param_2; param_2 = param_2 + -param_3) {
    local_c = param_1;
    local_8 = param_1;
    while (local_8 = local_8 + param_3, local_8 <= param_2) {
      iVar1 = (*(code *)param_4)(local_8,local_c);
      if (0 < iVar1) {
        local_c = local_8;
      }
    }
    swap(local_c,param_2,param_3);
  }
  return;
}

