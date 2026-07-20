
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 006D4930 -> EXTERNAL:0000004F @ 006D496E
   
   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 006D4930 -> EXTERNAL:0000004F @ 006D496E */

DWORD FUN_006d4930(int param_1,LPDWORD lpNumberOfBytesRead,undefined4 *param_3,
                  DWORD nNumberOfBytesToRead)

{
  DWORD DVar1;
  BOOL BVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = param_3;
  if ((*(uint *)(param_1 + 8) & 0x100000) == 0) {
    if (*(int *)(param_1 + 0x34) == 0) {
      return 0xffffffaf;
    }
    if ((int)lpNumberOfBytesRead + nNumberOfBytesToRead <= *(uint *)(param_1 + 0x38)) {
      if (param_3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x34) + (int)lpNumberOfBytesRead);
        for (uVar3 = nNumberOfBytesToRead >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *param_3 = *puVar4;
          puVar4 = puVar4 + 1;
          param_3 = param_3 + 1;
        }
        for (uVar3 = nNumberOfBytesToRead & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)param_3 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          param_3 = (undefined4 *)((int)param_3 + 1);
        }
      }
      return 0;
    }
  }
  else {
    if (param_3 == (undefined4 *)0x0) {
      return 0;
    }
    DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 0xc),(LONG)lpNumberOfBytesRead,(PLONG)0x0,0);
    if ((DVar1 == 0xffffffff) ||
       (BVar2 = ReadFile(*(HANDLE *)(param_1 + 0xc),puVar4,nNumberOfBytesToRead,
                         (LPDWORD)&lpNumberOfBytesRead,(LPOVERLAPPED)0x0), BVar2 == 0)) {
      DVar1 = GetLastError();
      if (DVar1 != 0) {
        return DVar1;
      }
      return 0xffffff03;
    }
    if (lpNumberOfBytesRead == (LPDWORD)nNumberOfBytesToRead) {
      return 0;
    }
  }
  return 0xfffffff2;
}

