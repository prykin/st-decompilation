
/* Library Function - Single Match
    _xcptlookup
   
   Library: Visual Studio 2003 Debug */

int * __cdecl xcptlookup(int param_1)

{
  int *local_8;
  
  local_8 = &DAT_007f1f70;
  do {
    if (*local_8 == param_1) break;
    local_8 = local_8 + 3;
  } while (local_8 < &DAT_007f1f70 + DAT_007f1ff0 * 3);
  if ((&DAT_007f1f70 + DAT_007f1ff0 * 3 <= local_8) || (*local_8 != param_1)) {
    local_8 = (int *)0x0;
  }
  return local_8;
}

