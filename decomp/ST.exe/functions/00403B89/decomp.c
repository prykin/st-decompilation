
void __cdecl thunk_FUN_0064a5b0(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if ((DAT_008118f8 != (HANDLE)0x0) && (DAT_0080734a != '\0')) {
    uVar2 = 0xffffffff;
    pcVar3 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    WriteFile(DAT_008118f8,param_1,~uVar2 - 1,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    uVar2 = 0xffffffff;
    pcVar3 = &DAT_007d2a00;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    WriteFile(DAT_008118f8,&DAT_007d2a00,~uVar2 - 1,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  }
  return;
}

