#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0074D678 -> EXTERNAL:0000000F @ 0074D6D2 */

int __cdecl FUN_0074d678(LPWSTR lpWideCharStr,LPCWSTR param_2)

{
  UINT CodePage;
  DWORD dwFlags;
  int iVar1;
  CHAR *lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  CHAR local_204 [256];
  CHAR local_104 [256];

  lpMultiByteStr = local_104;
  lpUsedDefaultChar = (LPBOOL)0x0;
  lpDefaultChar = (LPCSTR)0x0;
  cbMultiByte = 0x100;
  iVar1 = -1;
  dwFlags = 0;
  /* ST_CALLSITE[0074D699]: CALL dword ptr [0x0085bc00] */
  CodePage = GetACP();
  /* ST_CALLSITE[0074D6A0]: CALL dword ptr [0x0085bc28] */
  WideCharToMultiByte(CodePage,dwFlags,param_2,iVar1,lpMultiByteStr,cbMultiByte,lpDefaultChar,
                      lpUsedDefaultChar);
  /* ST_CALLSITE[0074D6B8]: CALL dword ptr [0x0085bddc] */
  iVar1 = wvsprintfA(local_204,local_104,&stack0x0000000c);
  /* ST_CALLSITE[0074D6D2]: CALL dword ptr [0x0085bb68] */
  MultiByteToWideChar(0,0,local_204,-1,lpWideCharStr,iVar1 + 1);
  return iVar1;
}

