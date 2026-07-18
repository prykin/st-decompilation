
uint FUN_00751050(uint *param_1,ushort *param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  void *unaff_ESI;
  undefined4 uVar3;
  undefined4 local_48 [16];
  uint local_8;
  
  uVar1 = FUN_00753df0(param_1[1],1,param_3,param_4);
  uVar3 = DAT_00858df8;
  if ((uVar1 != 0xffffffff) && (param_2 != (ushort *)0x0)) {
    DAT_00858df8 = &stack0xffffffb4;
    local_8 = uVar1;
    iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar3);
    uVar1 = local_8;
    if (iVar2 != 0) {
      DAT_00858df8 = (undefined1 *)uVar3;
      FUN_00753ce0(param_1[1],local_8);
      FUN_006a5e40(iVar2,0,0x7f2ae8,0x14);
      return 0xffffffff;
    }
    FUN_00753d90(*param_1,param_2,local_8);
    DAT_00858df8 = (undefined1 *)uVar3;
  }
  return uVar1;
}

