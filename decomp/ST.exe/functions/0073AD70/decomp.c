
bool FUN_0073ad70(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char local_7c [120];
  
  iVar2 = FUN_0073b320(param_1);
  iVar3 = (*DAT_00857294)(iVar2,(-(uint)(DAT_00857280 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_0085728c = 0;
    cVar1 = '\x01';
  }
  else {
    iVar3 = __strcmpi((char *)DAT_00857284,local_7c);
    if (iVar3 == 0) {
      if ((DAT_00857280 != 0) || (iVar3 = FUN_0073b0b0(iVar2,1), iVar3 != 0)) {
        DAT_0085728c = DAT_0085728c | 4;
        DAT_00857274 = iVar2;
        DAT_00857290 = iVar2;
      }
    }
    else if ((((DAT_00857280 == 0) && (DAT_0085727c != 0)) &&
             (iVar3 = FUN_00742ca0(DAT_00857284,local_7c,DAT_0085727c), iVar3 == 0)) &&
            (iVar3 = FUN_0073b0b0(iVar2,0), iVar3 != 0)) {
      DAT_0085728c = DAT_0085728c | 4;
      DAT_00857274 = iVar2;
      DAT_00857290 = iVar2;
    }
    cVar1 = '\x01' - ((DAT_0085728c & 4) != 0);
  }
  return (bool)cVar1;
}

