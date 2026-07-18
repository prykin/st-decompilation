
undefined4 __fastcall FUN_004c3020(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  *(undefined4 *)(param_1 + 0x219) = *(undefined4 *)(&DAT_007942fc + *(int *)(param_1 + 0x235) * 4);
  *(undefined4 *)(param_1 + 0x25d) = 1;
  *(undefined4 *)(param_1 + 0x261) = *(undefined4 *)(&DAT_00792778 + *(int *)(param_1 + 0x235) * 4);
  *(uint *)(param_1 + 0x265) = (uint)(*(int *)(&DAT_00792880 + *(int *)(param_1 + 0x235) * 8) != 0);
  *(uint *)(param_1 + 0x269) = (uint)((&DAT_00792ca0)[*(int *)(param_1 + 0x235) * 6] == 0x9a);
  *(uint *)(param_1 + 0x279) = ((&DAT_00792ca0)[*(int *)(param_1 + 0x235) * 6] != 0xb0) - 1 & 4;
  *(uint *)(param_1 + 0x27d) =
       (-(uint)((&DAT_00792ca0)[*(int *)(param_1 + 0x235) * 6] != 0xb0) & 0x10) + 8;
  *(uint *)(param_1 + 0x281) = (-(uint)(*(int *)(param_1 + 0x5ac) != 0x66) & 0xfffffffd) + 6;
  *(undefined4 *)(param_1 + 0x26d) = 0;
  iVar2 = *(int *)(param_1 + 0x235);
  if ((*(int *)(&DAT_00792778 + iVar2 * 4) == 0) || (*(int *)(&DAT_00792880 + iVar2 * 8) == 0)) {
    uVar4 = *(uint *)(DAT_00802a38 + 0xe4);
  }
  else {
    iVar2 = thunk_FUN_004e8230(*(int *)(param_1 + 0x24),iVar2,0);
    uVar4 = *(int *)(param_1 + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)(param_1 + 0x1c) = uVar4;
    uVar4 = (uVar4 >> 0x10) % (iVar2 + 1U);
  }
  *(uint *)(param_1 + 0x271) = uVar4;
  *(undefined4 *)(param_1 + 0x285) = 0;
  iVar2 = *(int *)(&DAT_00792040 + *(int *)(param_1 + 0x235) * 4);
  uVar4 = *(int *)(param_1 + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)(param_1 + 0x1c) = uVar4;
  iVar1 = *(int *)(DAT_00802a38 + 0xe4);
  *(undefined4 *)(param_1 + 0x28d) = 0;
  *(undefined4 *)(param_1 + 0x291) = 0;
  *(uint *)(param_1 + 0x289) = (uVar4 >> 0x10) % (iVar2 * 10 + 1U) + iVar1;
  uVar3 = *(undefined4 *)(DAT_00802a38 + 0xe4);
  *(undefined4 *)(param_1 + 0x2b1) = 0;
  *(undefined4 *)(param_1 + 0x295) = uVar3;
  *(undefined4 *)(param_1 + 0x2b5) = 0;
  uVar4 = *(int *)(param_1 + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)(param_1 + 0x1c) = uVar4;
  *(uint *)(param_1 + 0x2b9) = (uVar4 >> 0x10) % 0x4c + 0x19;
  if (((*(int *)(param_1 + 0x255) == 0) && (*(int *)(param_1 + 0x5ac) != 0x6a)) &&
     (*(int *)(param_1 + 0x5ac) != 0x68)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined4 *)(param_1 + 0x299) = uVar3;
  iVar2 = *(int *)(param_1 + 0x235) * 8;
  *(undefined4 *)(param_1 + 0x2a1) = *(undefined4 *)(&DAT_00791800 + iVar2);
  if (*(int *)(&DAT_00793e28 + iVar2) != 0) {
    *(undefined4 *)(param_1 + 0x2c5) = *(undefined4 *)(&DAT_00794038 + iVar2);
  }
  if (*(int *)(param_1 + 0x5ac) == 0x47) {
    *(undefined4 *)(param_1 + 0x25d) = 2;
    iVar2 = *(int *)(param_1 + 0x235);
    *(undefined4 *)(param_1 + 0x2e1) = *(undefined4 *)(&DAT_00792778 + iVar2 * 4);
    *(uint *)(param_1 + 0x2e5) = (uint)(*(int *)(&DAT_00792884 + iVar2 * 8) != 0);
    *(undefined4 *)(param_1 + 0x2e9) = 1;
    *(undefined4 *)(param_1 + 0x2f5) = 0;
    *(undefined4 *)(param_1 + 0x2f9) = 6;
    *(undefined4 *)(param_1 + 0x2fd) = 0x18;
    *(undefined4 *)(param_1 + 0x301) = 3;
    *(undefined4 *)(param_1 + 0x2ed) = 0;
    iVar2 = thunk_FUN_004e8230(*(int *)(param_1 + 0x24),iVar2,1);
    uVar4 = *(int *)(param_1 + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)(param_1 + 0x1c) = uVar4;
    *(undefined4 *)(param_1 + 0x305) = 0;
    *(uint *)(param_1 + 0x2f1) = (uVar4 >> 0x10) % (iVar2 + 1U);
    iVar2 = *(int *)(&DAT_00792040 + *(int *)(param_1 + 0x235) * 4);
    uVar4 = *(int *)(param_1 + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)(param_1 + 0x1c) = uVar4;
    iVar1 = *(int *)(DAT_00802a38 + 0xe4);
    *(undefined4 *)(param_1 + 0x30d) = 0;
    *(undefined4 *)(param_1 + 0x311) = 0;
    *(uint *)(param_1 + 0x309) = (uVar4 >> 0x10) % (iVar2 * 10 + 1U) + iVar1;
    uVar3 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    *(undefined4 *)(param_1 + 0x331) = 0;
    *(undefined4 *)(param_1 + 0x315) = uVar3;
    *(undefined4 *)(param_1 + 0x335) = 0;
    uVar4 = *(int *)(param_1 + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)(param_1 + 0x1c) = uVar4;
    *(undefined4 *)(param_1 + 0x341) = 0;
    iVar2 = *(int *)(param_1 + 0x235) * 8;
    *(uint *)(param_1 + 0x339) = (uVar4 >> 0x10) % 0x4c + 0x19;
    if (*(int *)(&DAT_00793e2c + iVar2) != 0) {
      *(undefined4 *)(param_1 + 0x345) = *(undefined4 *)(&DAT_0079403c + iVar2);
    }
  }
  return 0;
}

