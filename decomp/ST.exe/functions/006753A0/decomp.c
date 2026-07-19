
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_006753A0_param_1Enum. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_49=73;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_52=82
    */

int __cdecl FUN_006753a0(Global_sub_006753A0_param_1Enum param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)(param_1 - CASE_32 >> 8);
  switch(param_1) {
  case CASE_32:
  case CASE_33:
  case CASE_34:
  case CASE_38:
  case CASE_39:
  case CASE_3A:
  case CASE_3B:
  case CASE_4F:
  case CASE_50:
    return (uint)uVar1 << 8;
  case CASE_35:
  case CASE_37:
  case CASE_3C:
  case CASE_40:
  case CASE_41:
  case CASE_44:
  case CASE_49:
  case CASE_4E:
  case CASE_52:
    return CONCAT31(uVar1,1);
  case CASE_36:
  case CASE_3D:
  case CASE_42:
  case CASE_43:
  case CASE_4D:
    return CONCAT31(uVar1,2);
  default:
    return CONCAT31(uVar1,0x7f);
  }
}

