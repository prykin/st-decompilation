
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall thunk_FUN_004d01f0(void *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  if (*(int *)((int)param_1 + 0x5ff) == 0) {
    puVar1 = (undefined4 *)FUN_0072e530(0x40);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_004ab810(puVar1);
    }
    *(undefined4 *)((int)param_1 + 0x5ff) = uVar2;
    iVar3 = thunk_FUN_004ad1f0(DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
    if (iVar3 != 0) {
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7bf39c,0x28b);
    }
    thunk_FUN_004ce9e0(param_1,&iStack_10,&iStack_c,&iStack_8);
    thunk_FUN_004ad3c0(*(void **)((int)param_1 + 0x5ff),
                       (float)iStack_10 * _DAT_007904f8 * _DAT_007904f0,
                       (float)iStack_c * _DAT_007904f8 * _DAT_007904f0,
                       (float)iStack_8 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    thunk_FUN_004ad5e0(*(int *)((int)param_1 + 0x5ff));
  }
  return 0;
}

