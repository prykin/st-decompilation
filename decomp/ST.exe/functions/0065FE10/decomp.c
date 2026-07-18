
undefined4 __fastcall FUN_0065fe10(int param_1,undefined4 param_2,int param_3,short *param_4)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 extraout_var;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint **ppuVar7;
  uint *local_38 [5];
  uint local_24;
  undefined4 local_20;
  uint *local_1c;
  uint *local_c;
  undefined4 local_8;
  
  ppuVar7 = local_38;
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppuVar7 = (uint *)0x0;
    ppuVar7 = ppuVar7 + 1;
  }
  local_c = (uint *)0x0;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  uVar2 = thunk_FUN_0065d9c0(param_1,param_2);
  if (CONCAT22(extraout_var,uVar2) == 0) {
    return 0xffffffff;
  }
  sVar1 = *(short *)(param_1 + 0x39);
  if (param_3 == 0xdd) {
    uVar3 = (-(uint)(sVar1 != 3) & 0xffffffdb) + 0x5e;
  }
  else if (param_3 == 0xde) {
    uVar3 = -(uint)(sVar1 != 3) & 0x4f;
  }
  else if (param_3 == 0xe0) {
    uVar3 = (sVar1 != 3) - 1 & 0x61;
  }
  else {
    uVar3 = 0;
  }
  puVar4 = thunk_FUN_0065fa60(uVar3,1,param_4);
  if (puVar4 != (uint *)0x0) {
    sVar1 = *(short *)(param_1 + 0x39);
    if (sVar1 < 1) {
LAB_0065fec9:
      iVar6 = 0;
    }
    else if (sVar1 < 3) {
      iVar6 = 0x3b;
    }
    else {
      if (sVar1 != 3) goto LAB_0065fec9;
      iVar6 = 0x60;
    }
    local_c = thunk_FUN_0065fa60(iVar6,1,(short *)0x0);
    if (local_c != (uint *)0x0) {
      sVar1 = *(short *)(param_1 + 0x39);
      local_38[0] = (uint *)0x0;
      if (param_3 == 0xdd) {
        local_24 = (-(uint)(sVar1 != 3) & 0xffffffdb) + 0x5e;
      }
      else if (param_3 == 0xde) {
        local_24 = -(uint)(sVar1 != 3) & 0x4f;
      }
      else if (param_3 == 0xe0) {
        local_24 = (sVar1 != 3) - 1 & 0x61;
      }
      else {
        local_24 = 0;
      }
      local_20 = 0;
      local_38[1] = puVar4;
      local_1c = local_c;
      if (((*(short *)(param_1 + 0x7d) != -2) && (DAT_007fa174 != 0)) &&
         (piVar5 = (int *)thunk_FUN_0042b760((uint)*(byte *)(param_1 + 0x24),
                                             CONCAT22((short)((uint)local_c >> 0x10),
                                                      *(short *)(param_1 + 0x7d))),
         piVar5 != (int *)0x0)) {
        (**(code **)(*piVar5 + 8))(8,local_38);
        goto LAB_0065ff72;
      }
    }
  }
  local_8 = 0xffffffff;
LAB_0065ff72:
  if (puVar4 != (uint *)0x0) {
    FUN_006ae110((byte *)puVar4);
  }
  if (local_c != (uint *)0x0) {
    FUN_006ae110((byte *)local_c);
  }
  return local_8;
}

