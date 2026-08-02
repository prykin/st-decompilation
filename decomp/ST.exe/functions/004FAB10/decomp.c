
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004FAB10_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18
   [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (23), none consume AL/AX, and every RET path defines full EAX; sites=0041AF40 @ 0041B08E
   -> TEST TEST EAX,EAX | 0041AF40 @ 0041B134 -> TEST TEST EAX,EAX | 0041AF40 @ 0041B191 -> TEST
   TEST EAX,EAX | 0041AF40 @ 0041B3E4 -> TEST TEST EAX,EAX | 0041AF40 @ 0041B459 -> TEST TEST
   EAX,EAX | 0041AF40 @ 0041B4C6 -> TEST TEST EAX,EAX | 0041AF40 @ 0041B533 -> TEST TEST EAX,EAX |
   0041AF40 @ 0041B593 -> TEST TEST EAX,EAX | 0041AF40 @ 0041B5F0 -> TEST TEST EAX,EAX | 0041AF40 @
   0041B65D -> TEST TEST EAX,EAX | 0041AF40 @ 0041B712 -> TEST TEST EAX,EAX | 0041AF40 @ 0041B76F ->
   TEST TEST EAX,EAX | 0041AF40 @ 0041B7CF -> TEST TEST EAX,EAX | 0041AF40 @ 0041B82C -> TEST TEST
   EAX,EAX | 0041AF40 @ 0041B88C -> TEST TEST EAX,EAX | 0041AF40 @ 0041B997 -> TEST TEST EAX,EAX |
   0041AF40 @ 0041BB7C -> TEST TEST EAX,EAX | 0041AF40 @ 0041BBDA -> TEST TEST EAX,EAX | 0041AF40 @
   0041BC45 -> TEST TEST EAX,EAX | 0041AF40 @ 0041BCF3 -> TEST TEST EAX,EAX | 0041AF40 @ 0041BD58 ->
   TEST TEST EAX,EAX | 0041AF40 @ 0041BDC3 -> TEST TEST EAX,EAX | 0041AF40 @ 0041BE1F -> TEST TEST
   EAX,EAX

   [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=23; incoming_this_accesses=1;
   incoming_edx_uses=2; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_sub_004FAB10_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18
    */

int __thiscall CPanelTy::sub_004FAB10(CPanelTy *this,CPanelTy_sub_004FAB10_param_1Enum param_1)

{
  switch(param_1) {
  case CASE_1:
  case CASE_2:
  case CASE_3:
  case CASE_4:
  case CASE_5:
  case CASE_E:
  case CASE_F:
    return (uint)(this->field_023F == CASE_1);
  case CASE_6:
    if (g_prodPanel_008016E8 != nullptr) {
      return (uint)(g_prodPanel_008016E8->field_0172 != 2);
    }
  case CASE_7:
    if (g_prodPanel_0080167C != nullptr) {
      return (uint)(g_prodPanel_0080167C->field_0172 != 2);
    }
  case CASE_8:
    if (g_prodPanel_00801684 != nullptr) {
      return (uint)(g_prodPanel_00801684->field_0172 != 2);
    }
  case CASE_9:
    if (g_infocPanel_00801698 != nullptr) {
      return (uint)(g_infocPanel_00801698->field_0172 != 2);
    }
  case CASE_A:
    if (g_tradePanel_00802A44 != nullptr) {
      return (uint)(g_tradePanel_00802A44->field_0172 != 2);
    }
  case CASE_B:
    if (g_behPanel_00801678 != nullptr) {
      return (uint)(g_behPanel_00801678->field_0172 != 2);
    }
  case CASE_C:
    if (g_prodPanel_00801680 != nullptr) {
      return (uint)(g_prodPanel_00801680->field_0172 != 2);
    }
  case CASE_10:
    if (g_upgPanel_00802A48 != nullptr) {
      return (uint)(g_upgPanel_00802A48->field_0172 != 2);
    }
    break;
  default:
    return 0;
  case CASE_11:
    break;
  case CASE_12:
    goto switchD_004fab25_caseD_12;
  }
  if (g_frmPanel_0080168C != nullptr) {
    return (uint)(g_frmPanel_0080168C->field_0172 != 2);
  }
switchD_004fab25_caseD_12:
  if (g_sAMPanel_008016EC == nullptr) {
    return 0;
  }
  return (uint)(g_sAMPanel_008016EC->field_0172 != 2);
}

