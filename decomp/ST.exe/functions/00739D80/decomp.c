
undefined4 FUN_00739d80(void)

{
  int iVar1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined4 *local_34;
  LPCSTR local_30;
  LPCWSTR local_2c;
  LPCWSTR local_28;
  uint local_24;
  undefined4 *local_20;
  BYTE *local_1c;
  _cpinfo local_18;
  
  local_30 = (LPCSTR)0x0;
  local_2c = (LPCWSTR)0x0;
  if (DAT_00857210 == 0) {
    PTR_DAT_007f1280 = &DAT_007f128a;
    PTR_DAT_007f1284 = &DAT_007f128a;
    thunk_FUN_006a49c0(DAT_00857248,2);
    thunk_FUN_006a49c0(DAT_0085724c,2);
    DAT_00857248 = (undefined4 *)0x0;
    DAT_0085724c = (undefined4 *)0x0;
    uVar3 = 0;
  }
  else {
    if ((DAT_00857220 != 0) ||
       (iVar1 = FUN_00742790(0,(uint)DAT_0085725c,0x1004,(int *)&DAT_00857220), iVar1 == 0)) {
      local_34 = (undefined4 *)thunk_FUN_006a3c10(0x202,2,"initctyp.c",0x5c);
      local_20 = (undefined4 *)thunk_FUN_006a3c10(0x202,2,"initctyp.c",0x5e);
      local_30 = (LPCSTR)thunk_FUN_006a3c10(0x101,2,"initctyp.c",0x60);
      local_2c = (LPCWSTR)thunk_FUN_006a3c10(0x202,2,"initctyp.c",0x62);
      if ((local_34 != (undefined4 *)0x0) &&
         (((local_20 != (undefined4 *)0x0 && (local_30 != (LPCSTR)0x0)) &&
          (local_2c != (LPCWSTR)0x0)))) {
        local_1c = (BYTE *)local_30;
        for (local_24 = 0; (int)local_24 < 0x100; local_24 = local_24 + 1) {
          *local_1c = (CHAR)local_24;
          local_1c = local_1c + 1;
        }
        BVar2 = GetCPInfo(DAT_00857220,&local_18);
        if ((BVar2 != 0) && (local_18.MaxCharSize < 3)) {
          DAT_007f148c = local_18.MaxCharSize & 0xffff;
          if (1 < DAT_007f148c) {
            for (local_1c = local_18.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                local_1c = local_1c + 2) {
              for (local_24 = (uint)*local_1c; (int)local_24 <= (int)(uint)local_1c[1];
                  local_24 = local_24 + 1) {
                local_30[local_24] = '\0';
              }
            }
          }
          BVar2 = FUN_0073c850(1,local_30,0x100,(LPWORD)((int)local_34 + 2),0,0,0);
          if (BVar2 != 0) {
            *(undefined2 *)local_34 = 0;
            local_28 = local_2c;
            for (local_24 = 0; (int)local_24 < 0x100; local_24 = local_24 + 1) {
              *local_28 = (WCHAR)local_24;
              local_28 = local_28 + 1;
            }
            BVar2 = FUN_00742a30(1,local_2c,0x100,(LPWORD)((int)local_20 + 2),0,0);
            if (BVar2 != 0) {
              *(undefined2 *)local_20 = 0;
              if (1 < (int)DAT_007f148c) {
                for (local_1c = local_18.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                    local_1c = local_1c + 2) {
                  for (local_24 = (uint)*local_1c; (int)local_24 <= (int)(uint)local_1c[1];
                      local_24 = local_24 + 1) {
                    *(undefined2 *)((int)local_34 + local_24 * 2 + 2) = 0x8000;
                  }
                }
              }
              PTR_DAT_007f1280 = (undefined *)((int)local_34 + 2);
              PTR_DAT_007f1284 = (undefined *)((int)local_20 + 2);
              if (DAT_00857248 != (undefined4 *)0x0) {
                thunk_FUN_006a49c0(DAT_00857248,2);
              }
              DAT_00857248 = local_34;
              if (DAT_0085724c != (undefined4 *)0x0) {
                thunk_FUN_006a49c0(DAT_0085724c,2);
              }
              DAT_0085724c = local_20;
              thunk_FUN_006a49c0((undefined4 *)local_30,2);
              thunk_FUN_006a49c0((undefined4 *)local_2c,2);
              return 0;
            }
          }
        }
      }
    }
    thunk_FUN_006a49c0(local_34,2);
    thunk_FUN_006a49c0(local_20,2);
    thunk_FUN_006a49c0((undefined4 *)local_30,2);
    thunk_FUN_006a49c0((undefined4 *)local_2c,2);
    uVar3 = 1;
  }
  return uVar3;
}

