
int FUN_006b69b0(undefined4 *param_1,int *param_2,uint param_3,undefined4 param_4,undefined4 param_5
                )

{
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_48;
  undefined4 local_44 [16];
  
  local_48 = DAT_00858df8;
  DAT_00858df8 = &local_48;
  iVar1 = __setjmp3(local_44,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    FUN_006b6350(param_1,&DAT_0079ec98,param_2);
    FUN_006b6750((undefined4 *)*param_1,param_3,param_4,param_5);
    DAT_00858df8 = (undefined4 *)local_48;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_48;
  FUN_006b7740((int *)*param_1);
  *param_1 = 0;
  FUN_006a5e40(iVar1,0,0x7edbc4,0x250);
  return iVar1;
}

