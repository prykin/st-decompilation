
int * __cdecl FUN_006a3c80(uint param_1,int param_2,uint param_3,char *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  while( true ) {
    DAT_00854a4c = 0;
    piVar1 = thunk_FUN_006a3d40(param_1,param_3,param_4,param_5);
    bVar3 = DAT_00854a4c != 0;
    DAT_00854a4c = 0;
    if (bVar3) {
      RaiseInternalException(-5,DAT_007ed77c,s_E____titans_Crt__Dbgheap_c_007ec1d0,0x12d);
    }
    if ((piVar1 != (int *)0x0) || (param_2 == 0)) break;
    iVar2 = __callnewh(param_1);
    if (iVar2 == 0) {
      return (int *)0x0;
    }
  }
  return piVar1;
}

