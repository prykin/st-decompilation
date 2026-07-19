
/* [STVTableApplier] Virtual slot 0079DE58+0x14
   
   [STVTableApplier] Virtual slot 007A18C8+0x14 */

undefined4 FUN_0074cf93(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0x90);
  if (*(int *)(iVar1 + 0x18) == 0) {
    uVar3 = 0x80004001;
  }
  else {
    piVar2 = *(int **)(iVar1 + 0x9c);
    uVar3 = (**(code **)(*piVar2 + 0x14))(piVar2,param_2);
  }
  return uVar3;
}

