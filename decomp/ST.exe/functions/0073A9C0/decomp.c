
bool FUN_0073a9c0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
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
      iVar3 = (*DAT_00857294)(iVar2,(-(uint)(DAT_00857280 != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_0085728c = 0;
        return true;
      }
      iVar3 = __strcmpi((char *)DAT_00857284,local_7c);
      if (iVar3 == 0) {
        DAT_0085728c = DAT_0085728c | 0x304;
        DAT_00857274 = iVar2;
        DAT_00857290 = iVar2;
      }
      else if ((DAT_0085728c & 2) == 0) {
        if ((DAT_0085727c == 0) ||
           (iVar3 = FUN_00742ca0(DAT_00857284,local_7c,DAT_0085727c), iVar3 != 0)) {
          if (((DAT_0085728c & 1) == 0) && (iVar3 = FUN_0073b060((short)iVar2), iVar3 != 0)) {
            DAT_0085728c = DAT_0085728c | 1;
            DAT_00857290 = iVar2;
          }
        }
        else {
          DAT_0085728c = DAT_0085728c | 2;
          DAT_00857290 = iVar2;
          sVar4 = _strlen((char *)DAT_00857284);
          if (sVar4 == DAT_0085727c) {
            DAT_00857274 = iVar2;
          }
        }
      }
    }
    if ((DAT_0085728c & 0x300) != 0x300) {
      iVar3 = (*DAT_00857294)(iVar2,(-(uint)(DAT_00857280 != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_0085728c = 0;
        return true;
      }
      iVar3 = __strcmpi((char *)DAT_00857284,local_7c);
      if (iVar3 == 0) {
        uVar5 = DAT_0085728c | 0x200;
        if (DAT_00857280 == 0) {
          DAT_0085728c = uVar5;
          if ((DAT_0085727c == 0) || (sVar4 = _strlen((char *)DAT_00857284), sVar4 != DAT_0085727c))
          {
            DAT_0085728c = DAT_0085728c | 0x100;
            if (DAT_00857274 == 0) {
              DAT_00857274 = iVar2;
            }
          }
          else {
            iVar3 = FUN_0073b0b0(iVar2,1);
            if ((iVar3 != 0) && (DAT_0085728c = DAT_0085728c | 0x100, DAT_00857274 == 0)) {
              DAT_00857274 = iVar2;
            }
          }
        }
        else {
          DAT_0085728c = DAT_0085728c | 0x300;
          if (DAT_00857274 == 0) {
            DAT_00857274 = iVar2;
          }
        }
      }
      else if ((((DAT_00857280 == 0) && (DAT_0085727c != 0)) &&
               (iVar3 = FUN_00742ca0(DAT_00857284,local_7c,DAT_0085727c), iVar3 == 0)) &&
              ((iVar3 = FUN_0073b0b0(iVar2,0), iVar3 != 0 &&
               (DAT_0085728c = DAT_0085728c | 0x100, DAT_00857274 == 0)))) {
        DAT_00857274 = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_0085728c & 4) != 0);
  }
  return (bool)cVar1;
}

