
int __cdecl FUN_0071b100(HKEY param_1,HKEY param_2)

{
  HKEY lpSubKey;
  LSTATUS LVar1;
  int iVar2;
  HKEY__ local_108 [65];
  
  lpSubKey = param_2;
  if ((param_2 != (HKEY)0x0) && ((char)param_2->unused != '\0')) {
    LVar1 = RegOpenKeyA(param_1,(LPCSTR)param_2,&param_2);
    if (LVar1 == 0) {
      while( true ) {
        local_108[0].unused._0_1_ = 0;
        LVar1 = RegEnumKeyA(param_2,0,(LPSTR)local_108,0x104);
        if (LVar1 != 0) break;
        iVar2 = FUN_0071b100(param_2,local_108);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      RegCloseKey(param_2);
    }
    LVar1 = RegDeleteKeyA(param_1,(LPCSTR)lpSubKey);
    return LVar1;
  }
  return 0;
}

