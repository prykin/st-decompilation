
bool FUN_0073aee0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char local_7c [120];
  
  iVar2 = FUN_0073b320(param_1);
  iVar3 = (*DAT_00857294)(iVar2,(-(uint)(DAT_00857278 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_0085728c = 0;
    cVar1 = '\x01';
  }
  else {
    iVar3 = __strcmpi(DAT_00857288,local_7c);
    if (iVar3 == 0) {
      iVar3 = FUN_0073b060((short)iVar2);
      if (iVar3 != 0) {
        DAT_0085728c = DAT_0085728c | 4;
        DAT_00857274 = iVar2;
        DAT_00857290 = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_0085728c & 4) != 0);
  }
  return (bool)cVar1;
}

