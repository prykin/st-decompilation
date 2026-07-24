
/* [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_69=105;CASE_70=112;CASE_72=114

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_36=54;CASE_39=57;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_70=112;CASE_72=114

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115
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
  thunk_FUN_004ac9e0(param_1->field_05FF,g_playSystem_00802A38->field_00E4);
  return 0;
}

