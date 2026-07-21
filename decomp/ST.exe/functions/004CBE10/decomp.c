
/* [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_69=105;CASE_70=112;CASE_72=114
    */

undefined4 __fastcall FUN_004cbe10(TLOBaseTy *param_1)

{
  switch(param_1->field_05AC) {
  case CASE_32:
  case CASE_40:
  case CASE_49:
  case CASE_5C:
    thunk_FUN_004d08c0();
    break;
  case CASE_45:
    thunk_FUN_004ead90((AnonShape_004EAD90_30D2E515 *)param_1);
    break;
  case CASE_4E:
    thunk_FUN_004d9fe0(param_1);
    break;
  case CASE_52:
  case CASE_5F:
    thunk_FUN_004ec400((AnonShape_004EC400_367D4575 *)param_1);
    break;
  case CASE_69:
    thunk_FUN_004dd070((AnonShape_004DD070_62E18556 *)param_1);
    break;
  case CASE_70:
    thunk_FUN_004d9350(param_1);
    break;
  case CASE_72:
    thunk_FUN_004ed210(param_1);
  }
  thunk_FUN_004ac9e0(param_1->field_05FF,PTR_00802a38->field_00E4);
  return 0;
}

