
undefined8 __fastcall FUN_00753fd0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *unaff_EBP;
  
  unaff_EBP[6] = unaff_EBP[1];
  iVar1 = 0;
  if (((*(byte *)((int)unaff_EBP + 0x3f) & 0x80) == 0) && (*unaff_EBP != 0)) {
    iVar1 = (*(code *)*unaff_EBP)();
  }
  unaff_EBP[8] = iVar1 + 1;
  return CONCAT44(param_2,iVar1);
}

