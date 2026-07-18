
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall thunk_FUN_005805c0(void *param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = 0x1d;
  pbVar1 = thunk_FUN_0057f530(param_1,*(int *)((int)param_1 + 0x25d));
  iVar2 = thunk_FUN_004ab880(0xe,DAT_00806764,pbVar1,bVar3);
  if (iVar2 == 0) {
    iVar2 = thunk_FUN_004ab880(0xd,DAT_00806764,PTR_s_termsd_007cb0b4,0x1d);
    if (iVar2 == 0) {
      thunk_FUN_004ac1a0(0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_004ad3c0((void *)((int)param_1 + 0x1d5),
                         (float)*(int *)((int)param_1 + 0x245) * _DAT_007904f8 + _DAT_007904f4,
                         (float)*(int *)((int)param_1 + 0x249) * _DAT_007904f8 + _DAT_007904f4,
                         (float)*(int *)((int)param_1 + 0x24d) * _DAT_00790504 + _DAT_00790500 +
                         _DAT_007904fc);
      FUN_006ea3e0(*(void **)((int)param_1 + 0x211),*(uint *)((int)param_1 + 0x1ed),-1);
      thunk_FUN_004acf50((void *)((int)param_1 + 0x1d5),'\r');
      thunk_FUN_004ac1a0(0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
      return 1;
    }
  }
  return 0xffffffff;
}

