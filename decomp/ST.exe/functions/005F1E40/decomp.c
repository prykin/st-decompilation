
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_005f1e40(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort *puVar1;
  undefined4 *puVar2;

  puVar1 = thunk_FUN_005f1700(param_1,param_2,1,param_3,param_4,param_5,0xffffffff);
  if (puVar1 == (ushort *)0x0) {
    return (undefined4 *)0x0;
  }
  if (param_1 == 0) {
    puVar2 = FUN_006e9000(PTR_00807598,**(undefined4 **)((int)puVar1 + 0x21),0x5a,0x35,
                          (float)param_3 * _DAT_007904f8 * _DAT_007904f0,
                          (float)param_4 * _DAT_007904f8 * _DAT_007904f0,
                          (float)param_5 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc,0);
    return puVar2;
  }
  puVar2 = FUN_006e9000(PTR_00807598,**(undefined4 **)((int)puVar1 + 0x21),0x78,0x56,
                        (float)(param_3 + 100) * _DAT_007904f8 * _DAT_007904f0,
                        (float)(param_4 + 100) * _DAT_007904f8 * _DAT_007904f0,
                        (float)param_5 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc,0);
  return puVar2;
}

