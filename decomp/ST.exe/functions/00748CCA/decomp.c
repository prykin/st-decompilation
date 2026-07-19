
/* [STVTableApplier] Virtual slot 0079DD34+0x48
   
   [STVTableApplier] Virtual slot 007A1148+0x48 */

undefined4 FUN_00748cca(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffdf;
  }
  else {
    *(int *)(param_1 + 0x30) = *param_2;
    *(int *)(param_1 + 0x34) = param_2[1];
    iVar1 = *param_3;
    iVar2 = *param_2;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20;
    *(int *)(param_1 + 0x38) = iVar1 - iVar2;
  }
  return 0;
}

