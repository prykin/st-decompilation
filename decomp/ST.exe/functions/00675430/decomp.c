
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00675430_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_8=8;CASE_10=16;CASE_20=32;CASE_40=64;CASE_80=128 */

Global_sub_00675430_param_1Enum __cdecl FUN_00675430(Global_sub_00675430_param_1Enum param_1)

{
  undefined2 uVar2;
  Global_sub_00675430_param_1Enum GVar1;
  
  if (param_1 < 0x101) {
    if (param_1 == 0x100) {
      return 0x32;
    }
    uVar2 = (undefined2)(param_1 - CASE_1 >> 0x10);
    GVar1 = param_1 - CASE_1;
    switch(param_1) {
    case CASE_1:
    case CASE_2:
      return CONCAT22(uVar2,0x1e);
    case CASE_4:
      return CONCAT22(uVar2,0x5f);
    case CASE_8:
      return CONCAT22(uVar2,100);
    case CASE_10:
      return CONCAT22(uVar2,0x46);
    case CASE_20:
      return CONCAT22(uVar2,0x28);
    case CASE_40:
      return CONCAT22(uVar2,0x5a);
    case CASE_80:
      return CONCAT22(uVar2,0x6e);
    }
  }
  else {
    GVar1 = param_1;
    if (param_1 < 0x100001) {
      if (param_1 == 0x100000) {
LAB_006754a8:
        return CONCAT22((short)(param_1 >> 0x10),10);
      }
      if (param_1 < 0x40001) {
        if (param_1 == 0x40000) {
          return 0x4003c;
        }
        if ((param_1 == 0x10000) || (param_1 == 0x20000)) goto LAB_006754a8;
      }
      else if (param_1 == 0x80000) {
        return 0x80050;
      }
    }
    else if (((param_1 == 0x200000) || (param_1 == 0x400000)) || (param_1 == 0x800000))
    goto LAB_006754a8;
  }
  return GVar1 & 0xffff0000;
}

