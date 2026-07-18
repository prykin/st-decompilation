
undefined4 __cdecl FUN_0069fd70(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char local_cc [200];
  
  uVar3 = 0;
  if (param_1 != 0) {
    piVar1 = (int *)FUN_0072ea70(s_ResRand_dat_007d863c,&DAT_007d1d98);
    if (piVar1 != (int *)0x0) {
      iVar2 = FUN_00730050(piVar1,&DAT_007d1d88);
      if (0 < iVar2) {
        *(int *)(param_1 + 4) = param_1;
        FUN_00730b10(local_cc,200,piVar1);
        iVar2 = FUN_00730050(piVar1,&DAT_007d1d88);
        if (0 < iVar2) {
          *(int *)(param_1 + 8) = param_1;
          FUN_00730b10(local_cc,200,piVar1);
          iVar2 = FUN_00730050(piVar1,&DAT_007d1d88);
          if (0 < iVar2) {
            *(int *)(param_1 + 0x14) = param_1;
            FUN_00730b10(local_cc,200,piVar1);
            iVar2 = FUN_00730050(piVar1,&DAT_007d1d88);
            if (0 < iVar2) {
              *(int *)(param_1 + 0xc) = param_1;
              FUN_00730b10(local_cc,200,piVar1);
              iVar2 = FUN_00730050(piVar1,&DAT_007d1d88);
              if (0 < iVar2) {
                *(int *)(param_1 + 0x18) = param_1;
                FUN_00730b10(local_cc,200,piVar1);
                iVar2 = FUN_00730050(piVar1,&DAT_007d1d88);
                if (0 < iVar2) {
                  *(int *)(param_1 + 0x10) = param_1;
                  FUN_00730b10(local_cc,200,piVar1);
                  iVar2 = FUN_00730050(piVar1,&DAT_007d1d88);
                  if (0 < iVar2) {
                    *(int *)(param_1 + 0x1c) = param_1;
                    FUN_00730b10(local_cc,200,piVar1);
                    uVar3 = 1;
                  }
                }
              }
            }
          }
        }
      }
      FUN_0072ea90(piVar1);
    }
    return uVar3;
  }
  return 0;
}

