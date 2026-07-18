
int __cdecl FUN_0073e370(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  int local_424;
  DWORD local_41c;
  char local_418 [1028];
  DWORD local_14;
  ulong local_10;
  char *local_c;
  char *local_8;
  
  if ((param_1 < DAT_0085a2dc) &&
     (iVar3 = (int)param_1 >> 5,
     (*(byte *)((&DAT_0085a1a0)[iVar3] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    local_14 = 0;
    local_424 = 0;
    if (param_3 == 0) {
      local_424 = 0;
    }
    else {
      if ((*(byte *)((&DAT_0085a1a0)[iVar3] + 4 + (param_1 & 0x1f) * 8) & 0x20) != 0) {
        FUN_00742d50(param_1,0,2);
      }
      if (((int)*(char *)((&DAT_0085a1a0)[iVar3] + 4 + (param_1 & 0x1f) * 8) & 0x80U) == 0) {
        BVar2 = WriteFile(*(HANDLE *)((&DAT_0085a1a0)[iVar3] + (param_1 & 0x1f) * 8),param_2,param_3
                          ,&local_41c,(LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          local_10 = GetLastError();
        }
        else {
          local_10 = 0;
          local_14 = local_41c;
        }
      }
      else {
        local_8 = param_2;
        local_10 = 0;
        do {
          if (param_3 <= (uint)((int)local_8 - (int)param_2)) break;
          local_c = local_418;
          while (((int)local_c - (int)local_418 < 0x400 &&
                 ((uint)((int)local_8 - (int)param_2) < param_3))) {
            cVar1 = *local_8;
            local_8 = local_8 + 1;
            if (cVar1 == '\n') {
              local_424 = local_424 + 1;
              *local_c = '\r';
              local_c = local_c + 1;
            }
            *local_c = cVar1;
            local_c = local_c + 1;
          }
          BVar2 = WriteFile(*(HANDLE *)((&DAT_0085a1a0)[iVar3] + (param_1 & 0x1f) * 8),local_418,
                            (int)local_c - (int)local_418,&local_41c,(LPOVERLAPPED)0x0);
          if (BVar2 == 0) {
            local_10 = GetLastError();
            break;
          }
          local_14 = local_14 + local_41c;
        } while ((int)local_c - (int)local_418 <= (int)local_41c);
      }
      if (local_14 == 0) {
        if (local_10 == 0) {
          if (((*(byte *)((&DAT_0085a1a0)[iVar3] + 4 + (param_1 & 0x1f) * 8) & 0x40) == 0) ||
             (*param_2 != '\x1a')) {
            DAT_00857148 = 0x1c;
            DAT_0085714c = 0;
            local_424 = -1;
          }
          else {
            local_424 = 0;
          }
        }
        else {
          if (local_10 == 5) {
            DAT_00857148 = 9;
            DAT_0085714c = local_10;
          }
          else {
            __dosmaperr(local_10);
          }
          local_424 = -1;
        }
      }
      else {
        local_424 = local_14 - local_424;
      }
    }
  }
  else {
    DAT_00857148 = 9;
    DAT_0085714c = 0;
    local_424 = -1;
  }
  return local_424;
}

