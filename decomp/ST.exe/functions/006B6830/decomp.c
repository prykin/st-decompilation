
int FUN_006b6830(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *puVar3;
  undefined4 in_stack_ffffffd4;
  char *in_stack_ffffffd8;
  
  iVar2 = FUN_006b66a0(param_1,unaff_ESI,unaff_EBX,in_stack_ffffffd4,in_stack_ffffffd8);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*(int *)*param_1 + 0x18))((int *)*param_1,param_1 + 0xe,0,0,0,0,0x100);
    if (iVar2 == 0) {
      piVar1 = (int *)*param_1;
      puVar3 = (undefined4 *)&stack0xffffffd4;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      (**(code **)(*piVar1 + 0x4c))(piVar1,param_1[0xe],&stack0xffffffd4,0);
      return 0;
    }
  }
  return iVar2;
}

