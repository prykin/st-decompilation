
int * __cdecl FUN_007316d0(int *param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint local_18;
  uint local_14;
  int *local_c;
  
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)FUN_00730da0(param_2);
  }
  else if (param_2 == 0) {
    FUN_007318a0(param_1);
    piVar1 = (int *)0x0;
  }
  else {
    do {
      local_c = (int *)0x0;
      if (param_2 < 0xffffffe1) {
        puVar2 = (uint *)FUN_00731ae0((int)param_1);
        if (puVar2 == (uint *)0x0) {
          if (param_2 == 0) {
            param_2 = 1;
          }
          param_2 = param_2 + 0xf & 0xfffffff0;
          local_c = HeapReAlloc(DAT_0085a5c4,0,param_1,param_2);
        }
        else {
          if (param_2 <= DAT_007f14c8) {
            iVar3 = FUN_007329b0(puVar2,(int)param_1,param_2);
            if (iVar3 == 0) {
              local_c = FUN_00732170(param_2);
              if (local_c != (int *)0x0) {
                local_14 = param_1[-1] - 1;
                if (param_2 <= local_14) {
                  local_14 = param_2;
                }
                FUN_0073a330(local_c,param_1,local_14);
                FUN_00731ba0(puVar2,(int)param_1);
              }
            }
            else {
              local_c = param_1;
            }
          }
          if (local_c == (int *)0x0) {
            if (param_2 == 0) {
              param_2 = 1;
            }
            param_2 = param_2 + 0xf & 0xfffffff0;
            local_c = HeapAlloc(DAT_0085a5c4,0,param_2);
            if (local_c != (int *)0x0) {
              local_18 = param_2;
              if (param_1[-1] - 1U < param_2) {
                local_18 = param_1[-1] - 1U;
              }
              FUN_0073a330(local_c,param_1,local_18);
              FUN_00731ba0(puVar2,(int)param_1);
            }
          }
        }
      }
      if (local_c != (int *)0x0) {
        return local_c;
      }
      if (DAT_008571cc == 0) {
        return (int *)0x0;
      }
      iVar3 = __callnewh(param_2);
    } while (iVar3 != 0);
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

