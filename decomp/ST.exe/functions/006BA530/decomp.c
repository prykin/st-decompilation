
int FUN_006ba530(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,
                int param_6,int param_7,int param_8,int param_9,byte param_10,int param_11)

{
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_48;
  undefined4 local_44 [16];
  
  iVar1 = FUN_006b9b20(param_1,param_2,(int *)0x0);
  if (iVar1 != 0) {
    return 0;
  }
  local_48 = DAT_00858df8;
  DAT_00858df8 = &local_48;
  iVar1 = __setjmp3(local_44,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    FUN_006b9b40((undefined4 *)*param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 param_10,param_11);
    DAT_00858df8 = (undefined4 *)local_48;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_48;
  FUN_006ba600((undefined4 *)*param_1);
  *param_1 = 0;
  FUN_006a5e40(iVar1,0,0x7edc48,0x231);
  return iVar1;
}

