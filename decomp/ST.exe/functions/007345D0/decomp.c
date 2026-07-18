
/* Library Function - Single Match
    __strnset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl __strnset(char *_Dest,int _Val,size_t _Count)

{
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  bVar4 = true;
  sVar1 = _Count;
  pcVar3 = _Dest;
  if (_Count != 0) {
    do {
      if (sVar1 == 0) break;
      sVar1 = sVar1 - 1;
      bVar4 = *pcVar3 == '\0';
      pcVar3 = pcVar3 + 1;
    } while (!bVar4);
    if (bVar4) {
      sVar1 = sVar1 + 1;
    }
    pcVar3 = _Dest;
    for (iVar2 = _Count - sVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pcVar3 = (char)_Val;
      pcVar3 = pcVar3 + 1;
    }
  }
  return _Dest;
}

