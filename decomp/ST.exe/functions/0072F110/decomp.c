
/* Library Function - Single Match
    __makepath
   
   Library: Visual Studio 2003 Debug */

void __cdecl __makepath(char *_Path,char *_Drive,char *_Dir,char *_Filename,char *_Ext)

{
  char cVar1;
  byte *pbVar2;
  char *pcVar3;
  byte *local_8;
  
  if ((_Drive != (char *)0x0) && (*_Drive != '\0')) {
    *_Path = *_Drive;
    _Path[1] = ':';
    _Path = _Path + 2;
  }
  local_8 = (byte *)_Dir;
  pcVar3 = _Path;
  if ((_Dir != (char *)0x0) && (*_Dir != '\0')) {
    do {
      _Path = pcVar3;
      *_Path = *local_8;
      pcVar3 = _Path + 1;
      local_8 = local_8 + 1;
    } while (*local_8 != 0);
    pbVar2 = FUN_00738be0((byte *)_Dir,local_8);
    if ((*pbVar2 != 0x2f) && (*pbVar2 != 0x5c)) {
      *pcVar3 = '\\';
      pcVar3 = _Path + 2;
    }
  }
  _Path = pcVar3;
  local_8 = (byte *)_Filename;
  if (_Filename != (char *)0x0) {
    for (; *local_8 != '\0'; local_8 = local_8 + 1) {
      *_Path = *local_8;
      _Path = _Path + 1;
    }
  }
  local_8 = (byte *)_Ext;
  if (_Ext == (char *)0x0) {
    *_Path = '\0';
  }
  else {
    if ((*_Ext != '\0') && (*_Ext != '.')) {
      *_Path = '.';
      _Path = _Path + 1;
    }
    do {
      *_Path = *local_8;
      cVar1 = *_Path;
      _Path = _Path + 1;
      local_8 = local_8 + 1;
    } while (cVar1 != '\0');
  }
  return;
}

