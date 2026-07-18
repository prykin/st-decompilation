
/* Library Function - Single Match
    _getSystemCP
   
   Library: Visual Studio 2003 Debug */

UINT __cdecl getSystemCP(UINT param_1)

{
  DAT_00857228 = 0;
  if (param_1 == 0xfffffffe) {
    DAT_00857228 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    DAT_00857228 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    DAT_00857228 = 1;
    param_1 = DAT_00857220;
  }
  return param_1;
}

