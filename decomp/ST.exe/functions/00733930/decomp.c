
int __cdecl FUN_00733930(int param_1,int param_2)

{
  int iVar1;
  BOOL BVar2;
  int local_c;
  undefined4 *local_8;
  
  if ((param_2 != 4) && (param_2 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_008571f4 == 0)) {
        BVar2 = SetConsoleCtrlHandler(ctrlevent_capture,1);
        if (BVar2 != 1) {
          DAT_0085714c = GetLastError();
          DAT_00857148 = 0x16;
          return -1;
        }
        DAT_008571f4 = 1;
      }
      switch(param_1) {
      case 2:
        local_c = DAT_008571e4;
        DAT_008571e4 = param_2;
        break;
      case 0xf:
        local_c = DAT_008571f0;
        DAT_008571f0 = param_2;
        break;
      case 0x15:
        local_c = DAT_008571e8;
        DAT_008571e8 = param_2;
        break;
      case 0x16:
        local_c = DAT_008571ec;
        DAT_008571ec = param_2;
      }
      return local_c;
    }
    if ((((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) &&
       (local_8 = siglookup(param_1), local_8 != (undefined4 *)0x0)) {
      iVar1 = local_8[2];
      do {
        if (local_8[1] != param_1) {
          return iVar1;
        }
        local_8[2] = param_2;
        local_8 = local_8 + 3;
      } while (local_8 < &DAT_007f1f70 + DAT_007f1ff0 * 3);
      return iVar1;
    }
  }
  DAT_00857148 = 0x16;
  return -1;
}

