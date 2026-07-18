
int __cdecl
FUN_0070bf70(byte *param_1,int param_2,int param_3,int param_4,int param_5,byte param_6,uint param_7
            )

{
  int iVar1;
  void *pvVar2;
  undefined4 in_stack_ffffffbc;
  
  pvVar2 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb8;
  iVar1 = __setjmp3((undefined4 *)&stack0xffffffbc,0,pvVar2,in_stack_ffffffbc);
  if (iVar1 == 0) {
    iVar1 = FUN_0070be80(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    DAT_00858df8 = pvVar2;
    return iVar1;
  }
  DAT_00858df8 = pvVar2;
  return 0;
}

