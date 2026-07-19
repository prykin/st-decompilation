
int * __cdecl FUN_006a4160(undefined4 *param_1,uint param_2,uint param_3,char *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  
  DAT_00854a4c = 0;
  piVar2 = FUN_006a41e0(param_1,param_2,param_3,param_4,param_5,1);
  iVar1 = DAT_00854a4c;
  DAT_00854a4c = 0;
  if (iVar1 != 0) {
    RaiseInternalException(-5,DAT_007ed77c,s_E____titans_Crt__Dbgheap_c_007ec1d0,0x380);
  }
  return piVar2;
}

