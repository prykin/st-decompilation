
uint * __cdecl FUN_0072f260(int param_1,uint *param_2)

{
  byte *pbVar1;
  int iVar2;
  size_t sVar3;
  uint *puVar4;
  size_t sVar5;
  uint *local_b0;
  uint *local_ac;
  uint *local_9c;
  uint local_98 [33];
  int local_14;
  int local_10;
  int local_c;
  uint *local_8;
  
  if ((param_1 < 0) || (5 < param_1)) {
    local_8 = (uint *)0x0;
  }
  else if (param_1 == 0) {
    local_14 = 1;
    local_c = 0;
    if (param_2 == (uint *)0x0) {
      local_8 = FUN_0072f770();
    }
    else if ((((char)*param_2 == 'L') && (*(char *)((int)param_2 + 1) == 'C')) &&
            (*(char *)((int)param_2 + 2) == '_')) {
      local_9c = param_2;
      do {
        pbVar1 = FUN_0073a200((byte *)local_9c,&DAT_0079fef0);
        if (((pbVar1 == (byte *)0x0) || (sVar5 = (int)pbVar1 - (int)local_9c, sVar5 == 0)) ||
           (*pbVar1 == 0x3b)) {
          return (uint *)0x0;
        }
        local_10 = 1;
        while ((local_10 < 6 &&
               ((iVar2 = _strncmp(*(char **)(local_10 * 0xc + 0x7f1230),(char *)local_9c,sVar5),
                iVar2 != 0 ||
                (sVar3 = _strlen(*(char **)(local_10 * 0xc + 0x7f1230)), sVar5 != sVar3))))) {
          local_10 = local_10 + 1;
        }
        pbVar1 = pbVar1 + 1;
        sVar5 = FUN_0073a1c0(pbVar1,&DAT_0079feec);
        if ((sVar5 == 0) && (*pbVar1 != 0x3b)) {
          return (uint *)0x0;
        }
        if (local_10 < 6) {
          _strncpy((char *)local_98,(char *)pbVar1,sVar5);
          *(undefined1 *)((int)local_98 + sVar5) = 0;
          iVar2 = FUN_0072f5d0(local_10,local_98);
          if (iVar2 != 0) {
            local_c = local_c + 1;
          }
        }
        local_9c = (uint *)(pbVar1 + sVar5);
        if ((byte)*local_9c != 0) {
          local_9c = (uint *)((int)local_9c + 1);
        }
      } while ((byte)*local_9c != 0);
      if (local_c == 0) {
        local_ac = (uint *)0x0;
        local_8 = local_ac;
      }
      else {
        local_8 = FUN_0072f770();
      }
    }
    else {
      puVar4 = FUN_0072f870(param_2,local_98,(undefined4 *)0x0,(undefined4 *)0x0);
      local_8 = (uint *)0x0;
      if (puVar4 != (uint *)0x0) {
        local_8 = puVar4;
        for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
          if (local_10 != 0) {
            iVar2 = _strcmp((char *)local_98,(char *)(&DAT_007f1234)[local_10 * 3]);
            if (iVar2 == 0) {
              local_c = local_c + 1;
            }
            else {
              iVar2 = FUN_0072f5d0(local_10,local_98);
              if (iVar2 == 0) {
                local_14 = 0;
              }
              else {
                local_c = local_c + 1;
              }
            }
          }
        }
        if (local_14 == 0) {
          if (local_c == 0) {
            local_b0 = (uint *)0x0;
            local_8 = local_b0;
          }
          else {
            local_8 = FUN_0072f770();
          }
        }
        else {
          local_8 = FUN_0072f770();
          thunk_FUN_006a49c0(DAT_007f1234,2);
          DAT_007f1234 = (undefined4 *)0x0;
        }
      }
    }
  }
  else if (param_2 == (uint *)0x0) {
    local_8 = (&DAT_007f1234)[param_1 * 3];
  }
  else {
    local_8 = (uint *)FUN_0072f5d0(param_1,param_2);
  }
  return local_8;
}

