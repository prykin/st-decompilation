
undefined4 __thiscall FUN_004eb010(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_8;
  
  iVar5 = 0;
  local_8 = 0;
  iVar6 = param_1 * 0xa62;
  g_playerRuntime[param_1].field2159_0x9c6 = 0;
  local_10 = 0;
  while( true ) {
    do {
      iVar2 = thunk_FUN_004406c0((char)param_1);
      if ((char)iVar2 == '\x03') {
        iVar2 = local_10 + iVar5 * 2;
        uVar1 = (&DAT_007c1620)[iVar2];
        *(undefined4 *)(iVar6 + 0x7f57c6 + iVar2 * 8) = uVar1;
        *(undefined4 *)(iVar6 + 0x7f57c2 + iVar2 * 8) = uVar1;
      }
      else {
        iVar5 = local_10 + iVar5 * 2;
        iVar4 = iVar5 * 8;
        iVar5 = (&DAT_007c15c4)[iVar5 * 2];
        iVar2 = *(int *)(&DAT_007c15c0 +
                        (local_10 + (local_8 + g_playerRuntime[param_1].field2159_0x9c6 * 2) * 2) *
                        8);
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        iVar2 = iVar2 + (uVar3 >> 0x10) % ((iVar5 - iVar2) + 1U);
        *(int *)(iVar4 + 0x7f57c6 + iVar6) = iVar2;
        *(int *)(iVar4 + 0x7f57c2 + iVar6) = iVar2;
        iVar5 = local_8;
      }
      local_10 = local_10 + 1;
    } while (local_10 < 2);
    iVar5 = iVar5 + 1;
    if (1 < iVar5) break;
    local_10 = 0;
    local_8 = iVar5;
  }
  g_playerRuntime[param_1].field2158_0x9c2 = PTR_00802a38->field_00E4;
  return 0;
}

