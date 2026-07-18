
void __fastcall FUN_006dbab0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  do {
    iVar2 = 0;
    if (*param_1 != 0) {
      *(undefined4 *)(*param_1 + 0x22c) = 0;
    }
    FUN_006b9890((int *)((int)param_1 + 0x44a));
    FUN_006b9890((int *)((int)param_1 + 0x44e));
    FUN_006b9890((int *)((int)param_1 + 0x452));
    FUN_006ab060(param_1 + 0x108);
    param_1[0x10a] = 0;
    param_1[0x10b] = 0;
    param_1[0x10c] = 0;
    param_1[0x10d] = 0;
    *(undefined4 *)((int)param_1 + 0x4a2) = 0;
    *(undefined4 *)((int)param_1 + 0x4a6) = 0;
    *(undefined4 *)((int)param_1 + 0x4aa) = 0;
    *(undefined4 *)((int)param_1 + 0x4ae) = 0;
    *(undefined4 *)((int)param_1 + 0x4ba) = 0;
    *(undefined4 *)((int)param_1 + 0x43e) = 0;
    *(undefined4 *)((int)param_1 + 0x4c6) = 0;
    *(undefined4 *)((int)param_1 + 0x4ca) = 0;
    *(undefined4 *)((int)param_1 + 0x4d6) = 0;
    *(undefined4 *)((int)param_1 + 0x4da) = 0;
    FUN_006ab060(param_1 + 0xe2);
    if (param_1[199] != 0) {
      uVar1 = 0;
      if (0 < param_1[0xc4]) {
        do {
          if ((*(uint *)(iVar2 + param_1[199]) & 0x8000) != 0) {
            FUN_006e8ba0(param_1,uVar1);
          }
          FUN_006a5e90(*(undefined4 **)(iVar2 + 0xec + param_1[199]));
          uVar1 = uVar1 + 1;
          iVar2 = iVar2 + 0x114;
        } while ((int)uVar1 < param_1[0xc4]);
      }
      FUN_006ab060(param_1 + 199);
      FUN_006ab060(param_1 + 0xcc);
    }
    param_1[0xb8] = 0;
    *param_1 = 0;
    param_1[0xc4] = 0;
    param_1[0xc6] = 0;
    param_1[0xca] = 0;
    param_1[0xcb] = 0;
    param_1[0xb7] = 0;
    param_1[0xaa] = 0;
    FUN_006ab060(param_1 + 2);
    FUN_006ab060(param_1 + 4);
    FUN_006ab060(param_1 + 6);
    FUN_006ab060(param_1 + 0x56);
    FUN_006ab060(param_1 + 0x55);
    FUN_006ab060(param_1 + 7);
    FUN_006ab060(param_1 + 0xd4);
    FUN_006ab060(param_1 + 0xd5);
    FUN_006ab060(param_1 + 0xac);
    FUN_006b9890(param_1 + 0xa5);
    FUN_006e6620((int)param_1);
    param_1[5] = 0;
    param_1[1] = 0;
    param_1[0xa0] = 0;
    param_1[0xa4] = 0;
    param_1[0xa7] = 0;
    param_1[0x50] = 0;
    param_1[0xa3] = 0;
    param_1[0x4f] = 0;
    param_1[0x49] = 0;
    param_1 = (int *)param_1[0xd6];
  } while (param_1 != (int *)0x0);
  return;
}

