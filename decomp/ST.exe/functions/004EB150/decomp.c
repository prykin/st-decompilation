
undefined4 __thiscall FUN_004eb150(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  iVar3 = param_1;
  uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar4;
  if ((uVar4 >> 0x10) % 0x385 + 0x834 + g_playerRuntime[param_1].field2158_0x9c2 <=
      (uint)PTR_00802a38->field_00E4) {
    g_playerRuntime[param_1].field2158_0x9c2 = PTR_00802a38->field_00E4;
    iVar5 = thunk_FUN_004406c0((char)param_1);
    if ((char)iVar5 != '\x03') {
      if (((uint)PTR_00802a38->field_00E4 < 30000) ||
         (0 < (int)g_playerRuntime[param_1].field2159_0x9c6)) {
        if ((59999 < (uint)PTR_00802a38->field_00E4) &&
           ((int)g_playerRuntime[param_1].field2159_0x9c6 < 2)) {
          g_playerRuntime[param_1].field2159_0x9c6 = 2;
        }
        param_1 = 0;
        iVar5 = 0;
        piVar6 = &g_playerRuntime[iVar3].field2135_0x9a2;
      }
      else {
        g_playerRuntime[param_1].field2159_0x9c6 = 1;
        param_1 = 0;
        iVar5 = 0;
        piVar6 = &g_playerRuntime[iVar3].field2135_0x9a2;
      }
      while( true ) {
        do {
          piVar6[1] = *piVar6;
          piVar7 = piVar6 + 2;
          iVar1 = iVar5 + (param_1 + g_playerRuntime[iVar3].field2159_0x9c6 * 2) * 2;
          iVar2 = (&DAT_007c15c4)[iVar1 * 2];
          iVar1 = *(int *)(&DAT_007c15c0 + iVar1 * 8);
          uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar4;
          iVar5 = iVar5 + 1;
          *piVar6 = (uVar4 >> 0x10) % ((iVar2 - iVar1) + 1U) + iVar1;
          piVar6 = piVar7;
        } while (iVar5 < 2);
        param_1 = param_1 + 1;
        if (1 < param_1) break;
        iVar5 = 0;
      }
    }
  }
  return 0;
}

