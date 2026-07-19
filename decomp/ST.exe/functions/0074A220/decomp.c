
/* [STVTableApplier] Virtual slot 0079DB78+0x58
   
   [STVTableApplier] Virtual slot 007A13D0+0x58
   
   [STVTableApplier] Virtual slot 007A15E8+0x58 */

undefined4 __thiscall FUN_0074a220(int *param_1,int *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_ESI;
  
  iVar1 = (**(code **)(*param_2 + 0x14))(param_2,param_3,param_4);
  if (-1 < iVar1) {
    if (((int)param_4[1] <= (int)param_3[1]) &&
       (((int)param_4[1] < (int)param_3[1] || (*param_4 < *param_3)))) {
      return 0x80040228;
    }
    if (param_1[6] != 0) {
      uVar2 = (**(code **)(*param_1 + 0x5c))(unaff_ESI,param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}

