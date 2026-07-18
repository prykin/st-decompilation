
uint __cdecl FUN_0067fd20(undefined4 param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  void *unaff_ESI;
  undefined4 uVar3;
  undefined4 local_48 [16];
  undefined4 local_8;
  
  uVar3 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  uVar1 = __setjmp3(local_48,0,unaff_ESI,uVar3);
  if (uVar1 == 0) {
    local_8 = param_1;
    uVar1 = FUN_006ae1c0(DAT_00848a38,&local_8);
    uVar2 = FUN_006b5aa0(DAT_00848a3c,param_2);
    if (uVar1 != uVar2) {
      FUN_006a5e40(-2,DAT_007ed77c,0x7d55d8,0x203);
    }
    DAT_00858df8 = (undefined1 *)uVar3;
    return uVar1;
  }
  DAT_00858df8 = (undefined1 *)uVar3;
  if (-1 < (int)uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

