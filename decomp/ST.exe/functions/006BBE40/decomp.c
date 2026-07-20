
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006CEF60 -> 006BBE40 @ 006CF1D7 | 006CEF60 -> 006BBE40 @ 006CF663
   
   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006CEF60 -> 006BBE40 @ 006CF1D7 | 006CEF60 -> 006BBE40 @ 006CF663 */

void FUN_006bbe40(int *param_1,uint *param_2,int *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 local_80 [4];
  int local_70;
  uint local_5c;
  
  bVar1 = false;
  local_5c = 0;
  local_70 = 0;
  local_80[0] = 0x7c;
  while( true ) {
    iVar2 = (**(code **)(*param_1 + 100))(param_1,0,local_80,param_4 | 1,0);
    if (((iVar2 != -0x7789ff60) && (iVar2 != -0x7789fe52)) || (bVar1)) break;
    Sleep(2);
    bVar1 = true;
  }
  if (iVar2 == 0) {
    *param_2 = local_5c;
    *param_3 = local_70;
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}

