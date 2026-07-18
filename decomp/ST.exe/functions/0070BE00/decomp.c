
int * __cdecl
FUN_0070be00(byte *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7,
            uint *param_8,int param_9)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 in_stack_ffffffbc;
  
  pvVar3 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb8;
  iVar1 = __setjmp3((undefined4 *)&stack0xffffffbc,0,pvVar3,in_stack_ffffffbc);
  if (iVar1 == 0) {
    piVar2 = FUN_0070b900(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    DAT_00858df8 = pvVar3;
    return piVar2;
  }
  DAT_00858df8 = pvVar3;
  return (int *)0x0;
}

