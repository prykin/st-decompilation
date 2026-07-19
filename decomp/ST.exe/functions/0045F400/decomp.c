
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::CheckPBoxCmd
   
   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_CheckPBoxCmd_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23
    */

uint __thiscall STBoatC::CheckPBoxCmd(STBoatC *this,STBoatC_CheckPBoxCmd_param_1Enum param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  switch(param_1) {
  case CASE_1:
    return (uint)(this->field_02CC == 1);
  case CASE_2:
    return (uint)(this->field_02D0 == 1);
  case CASE_3:
    return (uint)(this->field_02D4 == 1);
  case CASE_4:
    return (uint)(this->field_02D8 == 1);
  case CASE_5:
    return (uint)(this->field_02DC == 1);
  case CASE_6:
    return (uint)(this->field_02E0 == 1);
  case CASE_7:
    return (uint)(this->field_02E4 == 1);
  case CASE_8:
    return (uint)(this->field_02E8 == 1);
  case CASE_9:
    return (uint)(this->field_02EC == 1);
  case CASE_A:
    return (uint)(this->field_02F0 == 1);
  case CASE_B:
    return (uint)(this->field_02F4 == 1);
  case CASE_C:
    return (uint)(this->field_02F8 == 1);
  case CASE_D:
    return (uint)(this->field_02FC == 1);
  case CASE_E:
    return (uint)(this->field_0300 == 1);
  case CASE_F:
    return (uint)(this->field_0304 == 1);
  case CASE_10:
    return (uint)(this->field_0308 == 1);
  case CASE_11:
    return (uint)(this->field_030C == 1);
  case CASE_12:
    return (uint)(this->field_0310 == 1);
  case CASE_14:
    return (uint)(this->field_0314 == 1);
  case CASE_15:
    return (uint)(this->field_0318 == 1);
  case CASE_16:
    return (uint)(this->field_031C == 1);
  case CASE_17:
    return (uint)(this->field_0320 == 1);
  }
  iVar2 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x13e4,0,0,&DAT_007a4ccc,
                             s_STBoatC__CheckPBoxCmd_unknown_ty_007aa0a8);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0;
}

