
/* [STVTableApplier] Virtual slot 0079DB78+0x10
   
   [STVTableApplier] Virtual slot 0079DDEC+0x10
   
   [STVTableApplier] Virtual slot 007A13D0+0x10
   
   [STVTableApplier] Virtual slot 007A15E8+0x10 */

int __thiscall FUN_00747212(int param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 == (int *)0x0) {
    iVar4 = -0x7ffbfded;
  }
  else {
    iVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,param_2);
    if (-1 < iVar4) {
      uVar3 = *(uint *)(param_1 + 0x20);
      uVar1 = *param_2;
      *param_2 = *param_2 - uVar3;
      param_2[1] = (param_2[1] - *(int *)(param_1 + 0x24)) - (uint)(uVar1 < uVar3);
      iVar4 = 0;
    }
  }
  return iVar4;
}

