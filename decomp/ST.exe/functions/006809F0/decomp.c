
undefined4 __cdecl FUN_006809f0(uint *param_1)

{
  void *unaff_ESI;
  undefined4 uVar1;
  undefined4 local_58 [16];
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  byte *local_8;
  
  uVar1 = DAT_00858df8;
  local_c = 0;
  local_8 = (byte *)0x0;
  DAT_00858df8 = &stack0xffffffa4;
  local_14 = __setjmp3(local_58,0,unaff_ESI,uVar1);
  if (local_14 == 0) {
    local_18 = param_1[2];
    local_10 = local_14;
    local_8 = (byte *)FUN_006c8910(param_1,(int *)&local_c);
    thunk_FUN_00680890(0x17,local_8,local_c,&local_18);
    if (local_8 != (byte *)0x0) {
      FUN_006ab060(&local_8);
    }
    DAT_00858df8 = (undefined1 *)uVar1;
    return 1;
  }
  DAT_00858df8 = (undefined1 *)uVar1;
  if (local_8 != (byte *)0x0) {
    FUN_006ab060(&local_8);
  }
  FUN_006a5e40(local_14,0,0x7d5604,0x124);
  return 0;
}

