
int FUN_006b2220(int *param_1,uint *param_2,uint param_3,uint param_4,undefined4 *param_5,
                int *param_6,uint param_7,uint param_8)

{
  int iVar1;
  void *unaff_ESI;
  undefined4 uVar2;
  undefined4 local_48 [16];
  int local_8;
  
  iVar1 = FUN_006b1d50((uint)param_1,param_2,param_3,(uint)param_5,(int *)0x0,0x4000000,0xffffffff,
                       0xffffffff,0,1);
  uVar2 = DAT_00858df8;
  if ((iVar1 == 0) && (param_6 != (int *)0x0)) {
    DAT_00858df8 = &stack0xffffffb4;
    local_8 = iVar1;
    iVar1 = __setjmp3(local_48,0,unaff_ESI,uVar2);
    if (iVar1 == 0) {
      FUN_006b2930(param_1,*param_2,param_4,param_5,param_6,0x4000000,param_7,param_8);
      DAT_00858df8 = (undefined1 *)uVar2;
      return local_8;
    }
    DAT_00858df8 = (undefined1 *)uVar2;
    FUN_006b3bb0(param_1,*param_2);
    FUN_006a5e40(iVar1,0,0x7edac0,0x33e);
  }
  return iVar1;
}

