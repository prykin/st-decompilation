
int FUN_006b88d0(undefined4 *param_1,uint param_2,uint param_3,BITMAPINFO *param_4,uint param_5,
                int param_6,BITMAPINFO *param_7,uint param_8)

{
  uint *puVar1;
  int iVar2;
  void *unaff_ESI;
  undefined4 uVar3;
  undefined4 local_48 [16];
  uint *local_8;
  
  *param_1 = 0;
  local_8 = FUN_006aac10(0x40);
  if (local_8 == (uint *)0x0) {
    return -2;
  }
  *local_8 = param_2;
  uVar3 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar3);
  puVar1 = local_8;
  if (iVar2 == 0) {
    FUN_006b85d0(local_8,param_3,param_4,param_5,param_6,param_7,param_8);
    DAT_00858df8 = (undefined1 *)uVar3;
    *(code **)(param_2 + 0x4e4) = FUN_006b8d50;
    *(code **)(param_2 + 0x4e8) = FUN_006b89b0;
    *(uint **)(param_2 + 0x4ec) = puVar1;
    *param_1 = puVar1;
    return 0;
  }
  DAT_00858df8 = (undefined1 *)uVar3;
  FUN_006b8a30((int *)local_8);
  FUN_006a5e40(iVar2,0,0x7edc18,0xaa);
  return iVar2;
}

