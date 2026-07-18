
int __cdecl FUN_0074d678(LPWSTR param_1,LPCWSTR param_2)

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
  CodePage = GetACP();
  WideCharToMultiByte(CodePage,dwFlags,param_2,iVar1,lpMultiByteStr,cbMultiByte,lpDefaultChar,
                      lpUsedDefaultChar);
  iVar1 = wvsprintfA(local_204,local_104,&stack0x0000000c);
  MultiByteToWideChar(0,0,local_204,-1,param_1,iVar1 + 1);
  return iVar1;
}

