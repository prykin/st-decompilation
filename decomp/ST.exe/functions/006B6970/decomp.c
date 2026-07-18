
void FUN_006b6970(undefined4 *param_1)

{
  int iVar1;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  
  iVar1 = FUN_006b66a0(param_1,unaff_ESI,unaff_EBP,unaff_retaddr,(char *)param_1);
  if (iVar1 == 0) {
    FUN_006b68c0(param_1);
    (**(code **)(*(int *)*param_1 + 0x18))((int *)*param_1,param_1 + 0xe,0,0,0,0,0);
  }
  return;
}

