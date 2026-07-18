
short * __cdecl FUN_00725f50(undefined4 param_1,char *param_2,uint param_3,byte param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  undefined4 unaff_ESI;
  int iVar7;
  void *unaff_EDI;
  undefined4 local_78;
  undefined4 local_74 [16];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  ushort *local_c;
  short *local_8;
  
  iVar7 = 0;
  local_8 = (short *)0x0;
  local_c = (ushort *)0x0;
  local_78 = DAT_00858df8;
  DAT_00858df8 = &local_78;
  iVar2 = __setjmp3(local_74,0,unaff_EDI,unaff_ESI);
  local_34 = iVar2;
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar3 = 1;
    iVar7 = 0x20;
    do {
      if ((param_3 & uVar3) != 0) {
        iVar2 = iVar2 + 1;
      }
      uVar3 = uVar3 << 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    local_14 = iVar2;
    if (iVar2 < 1) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7f0c8c,0x88);
    }
    local_10 = FUN_007262b0(param_1,param_2,1);
    iVar7 = FUN_00726390(param_1,param_2,1);
    if (iVar7 < iVar2) {
      iVar2 = iVar7;
      local_14 = iVar7;
    }
    local_34 = iVar7;
    local_c = FUN_006f1ce0(8,param_2,(int *)0x0,param_5);
    if (local_c == (ushort *)0x0) {
      FUN_006a5e40(-4,DAT_007ed77c,0x7f0c8c,0x8e);
    }
    local_8 = (short *)FUN_006aac10(local_10 * iVar2 * 10 + 0x16);
    local_8[1] = (short)local_10;
    *local_8 = (short)iVar2;
    iVar4 = FUN_00726470(param_1,param_2,1);
    local_8[2] = (short)iVar4;
    iVar4 = FUN_00726550(param_1,param_2,1);
    local_1c = 1;
    local_8[3] = (short)iVar4;
    *(undefined4 *)(local_8 + 4) = param_1;
    local_20 = 0;
    if (0 < iVar7) {
      local_18 = 0;
      local_28 = 0;
      local_2c = iVar7;
      do {
        if ((param_3 & local_1c) != 0) {
          if (0 < local_10) {
            local_24 = local_10;
            local_30 = iVar7 * 0x2c;
            iVar7 = local_18;
            iVar4 = local_28;
            do {
              uVar5 = FUN_0070aa50(param_1,(char *)(iVar4 + 0xc + (int)local_c),param_4,param_5);
              *(undefined4 *)(iVar7 + 0x12 + (int)local_8) = uVar5;
              if (*(int *)(iVar7 + 0x12 + (int)local_8) == 0) {
                FUN_006a5e40(-4,DAT_007ed77c,0x7f0c8c,0x9f);
              }
              *(undefined2 *)(iVar7 + 0xc + (int)local_8) = *(undefined2 *)(iVar4 + (int)local_c);
              *(undefined2 *)(iVar7 + 0xe + (int)local_8) =
                   *(undefined2 *)(iVar4 + 4 + (int)local_c);
              *(undefined2 *)(iVar7 + 0x10 + (int)local_8) =
                   *(undefined2 *)(iVar4 + 8 + (int)local_c);
              iVar4 = iVar4 + local_30;
              iVar7 = iVar7 + iVar2 * 10;
              local_24 = local_24 + -1;
            } while (local_24 != 0);
            local_24 = 0;
            iVar2 = local_14;
            iVar7 = local_34;
          }
          local_20 = local_20 + 1;
          local_18 = local_18 + 10;
        }
        local_28 = local_28 + 0x2c;
        local_1c = local_1c << 1;
        local_2c = local_2c + -1;
      } while (local_2c != 0);
      local_2c = 0;
    }
    *local_8 = (short)local_20;
    FUN_006f20e0((uint *)&local_c);
    DAT_00858df8 = (undefined4 *)local_78;
    return local_8;
  }
  DAT_00858df8 = (undefined4 *)local_78;
  FUN_006f20e0((uint *)&local_c);
  if (local_8 != (short *)0x0) {
    if (0 < (int)local_8[1] * (int)*local_8) {
      iVar4 = 0;
      do {
        FUN_006f20e0((uint *)(iVar4 + 0x12 + (int)local_8));
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 10;
        iVar2 = local_34;
      } while (iVar7 < (int)local_8[1] * (int)*local_8);
    }
    FUN_006ab060(&local_8);
  }
  if ((param_5 != 0) || (iVar2 != -4)) {
    iVar7 = FUN_006ad4d0(s_E__Ourlib_mfspr_cpp_007f0c8c,0xb6,0,iVar2,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      psVar6 = (short *)(*pcVar1)();
      return psVar6;
    }
    FUN_006a5e40(iVar2,0,0x7f0c8c,0xb8);
  }
  return (short *)0x0;
}

