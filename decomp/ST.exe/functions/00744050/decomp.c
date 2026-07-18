
int __cdecl FUN_00744050(uint param_1,char *param_2,DWORD param_3)

{
  BOOL BVar1;
  int iVar2;
  char local_20 [4];
  int local_1c;
  char *local_18;
  DWORD local_14;
  char *local_10;
  DWORD local_c;
  char *local_8;
  
  if ((param_1 < DAT_0085a2dc) &&
     (iVar2 = (int)param_1 >> 5,
     (*(byte *)((&DAT_0085a1a0)[iVar2] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    local_1c = 0;
    local_18 = param_2;
    if ((param_3 == 0) || ((*(byte *)((&DAT_0085a1a0)[iVar2] + 4 + (param_1 & 0x1f) * 8) & 2) != 0))
    {
      local_1c = 0;
    }
    else {
      if (((*(byte *)((&DAT_0085a1a0)[iVar2] + 4 + (param_1 & 0x1f) * 8) & 0x48) != 0) &&
         (*(char *)((&DAT_0085a1a0)[iVar2] + 5 + (param_1 & 0x1f) * 8) != '\n')) {
        *param_2 = *(char *)((&DAT_0085a1a0)[iVar2] + 5 + (param_1 & 0x1f) * 8);
        local_18 = param_2 + 1;
        local_1c = 1;
        param_3 = param_3 - 1;
        *(undefined1 *)((&DAT_0085a1a0)[iVar2] + 5 + (param_1 & 0x1f) * 8) = 10;
      }
      BVar1 = ReadFile(*(HANDLE *)((&DAT_0085a1a0)[iVar2] + (param_1 & 0x1f) * 8),local_18,param_3,
                       &local_14,(LPOVERLAPPED)0x0);
      if (BVar1 == 0) {
        local_c = GetLastError();
        if (local_c == 5) {
          DAT_00857148 = 9;
          local_1c = -1;
          DAT_0085714c = 5;
        }
        else if (local_c == 0x6d) {
          local_1c = 0;
        }
        else {
          __dosmaperr(local_c);
          local_1c = -1;
        }
      }
      else {
        local_1c = local_1c + local_14;
        if (((int)*(char *)((&DAT_0085a1a0)[iVar2] + 4 + (param_1 & 0x1f) * 8) & 0x80U) != 0) {
          if ((local_14 == 0) || (*param_2 != '\n')) {
            *(byte *)((&DAT_0085a1a0)[iVar2] + 4 + (param_1 & 0x1f) * 8) =
                 *(byte *)((&DAT_0085a1a0)[iVar2] + 4 + (param_1 & 0x1f) * 8) & 0xfb;
          }
          else {
            *(byte *)((&DAT_0085a1a0)[iVar2] + 4 + (param_1 & 0x1f) * 8) =
                 *(byte *)((&DAT_0085a1a0)[iVar2] + 4 + (param_1 & 0x1f) * 8) | 4;
          }
          local_10 = param_2;
          local_8 = param_2;
          while (local_8 < param_2 + local_1c) {
            if (*local_8 == '\x1a') {
              if ((*(byte *)((&DAT_0085a1a0)[iVar2] + 4 + (param_1 & 0x1f) * 8) & 0x40) == 0) {
                *(byte *)((&DAT_0085a1a0)[iVar2] + 4 + (param_1 & 0x1f) * 8) =
                     *(byte *)((&DAT_0085a1a0)[iVar2] + 4 + (param_1 & 0x1f) * 8) | 2;
              }
              break;
            }
            if (*local_8 == '\r') {
              if (local_8 < param_2 + local_1c + -1) {
                if (local_8[1] == '\n') {
                  local_8 = local_8 + 2;
                  *local_10 = '\n';
                }
                else {
                  *local_10 = *local_8;
                  local_8 = local_8 + 1;
                }
                local_10 = local_10 + 1;
              }
              else {
                local_8 = local_8 + 1;
                local_c = 0;
                BVar1 = ReadFile(*(HANDLE *)((&DAT_0085a1a0)[iVar2] + (param_1 & 0x1f) * 8),local_20
                                 ,1,&local_14,(LPOVERLAPPED)0x0);
                if (BVar1 == 0) {
                  local_c = GetLastError();
                }
                if ((local_c == 0) && (local_14 != 0)) {
                  if ((*(byte *)((&DAT_0085a1a0)[iVar2] + 4 + (param_1 & 0x1f) * 8) & 0x48) == 0) {
                    if ((local_10 == param_2) && (local_20[0] == '\n')) {
                      *local_10 = '\n';
                      local_10 = local_10 + 1;
                    }
                    else {
                      FUN_00742d50(param_1,-1,1);
                      if (local_20[0] != '\n') {
                        *local_10 = '\r';
                        local_10 = local_10 + 1;
                      }
                    }
                  }
                  else {
                    if (local_20[0] == '\n') {
                      *local_10 = '\n';
                    }
                    else {
                      *local_10 = '\r';
                      *(char *)((&DAT_0085a1a0)[iVar2] + 5 + (param_1 & 0x1f) * 8) = local_20[0];
                    }
                    local_10 = local_10 + 1;
                  }
                }
                else {
                  *local_10 = '\r';
                  local_10 = local_10 + 1;
                }
              }
            }
            else {
              *local_10 = *local_8;
              local_10 = local_10 + 1;
              local_8 = local_8 + 1;
            }
          }
          local_1c = (int)local_10 - (int)param_2;
        }
      }
    }
  }
  else {
    DAT_00857148 = 9;
    DAT_0085714c = 0;
    local_1c = -1;
  }
  return local_1c;
}

