#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00514BC0_param_1Enum. Cases:
   CASE_F2=242;CASE_F3=243;CASE_F4=244;CASE_F5=245;CASE_F6=246;CASE_F7=247;CASE_F8=248;CASE_F9=249;CASE_FA=250;CASE_FB=251

   [STMethodOwnerApplier] Structural method owner recovered as HelpPanelTy.
   Evidence: this_call_owners=[HelpPanelTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/HelpPanelTy_sub_00514BC0_param_1Enum. Cases:
   CASE_F2=242;CASE_F3=243;CASE_F4=244;CASE_F5=245;CASE_F6=246;CASE_F7=247;CASE_F8=248;CASE_F9=249;CASE_FA=250;CASE_FB=251
    */

void __thiscall
HelpPanelTy::sub_00514BC0
          (HelpPanelTy *this,HelpPanelTy_sub_00514BC0_param_1Enum param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  bool bVar7;
  uint local_c;

  bVar7 = false;
  local_c = 0;
  if (*(int *)sizeHelp_exref == 0) {
    return;
  }
LAB_00514be2:
  pbVar2 = this->field_01C7;
  iVar6 = local_c * 0x11;
  bVar1 = pbVar2[iVar6 + 8];
  switch(bVar1) {
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 1:
  case 2:
  case 3:
  case 4:
  case 0xb:
    if ((*(HelpPanelTy_sub_00514BC0_param_1Enum *)(pbVar2 + iVar6 + 9) == param_1) &&
       ((bVar1 == 3 || (*(int *)(pbVar2 + iVar6 + 0xd) == param_2)))) {
      bVar7 = true;
      goto LAB_00514d04;
    }
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    break;
  case 0xc:
    switch(param_1) {
    case CASE_F2:
    case CASE_F3:
    case CASE_F4:
    case CASE_F5:
      iVar3 = *(int *)(pbVar2 + iVar6 + 9);
      if ((((iVar3 != 0xf2) && (iVar3 != 0xf3)) && (iVar3 != 0xf4)) && (iVar3 != 0xf5))
      goto cf_common_join_00514CF6;
      bVar7 = true;
      break;
    case CASE_F6:
    case CASE_F7:
      if ((*(int *)(pbVar2 + iVar6 + 9) != 0xf6) && (*(int *)(pbVar2 + iVar6 + 9) != 0xf7))
      goto cf_common_join_00514CF6;
      bVar7 = true;
      break;
    case CASE_F8:
    case CASE_F9:
      if ((*(int *)(pbVar2 + iVar6 + 9) != 0xf8) && (*(int *)(pbVar2 + iVar6 + 9) != 0xf9))
      goto cf_common_join_00514CF6;
      bVar7 = true;
      break;
    case CASE_FA:
    case CASE_FB:
      if ((*(int *)(pbVar2 + iVar6 + 9) != 0xfa) && (*(int *)(pbVar2 + iVar6 + 9) != 0xfb))
      goto cf_common_join_00514CF6;
      bVar7 = true;
      break;
    default:
      if (*(HelpPanelTy_sub_00514BC0_param_1Enum *)(pbVar2 + iVar6 + 9) != param_1)
      goto cf_common_join_00514CF6;
      bVar7 = true;
    }
    goto LAB_00514d04;
  default:
    goto switchD_00514c13_default;
  }
cf_common_join_00514CF6:
switchD_00514c13_default:
  if (bVar7) {
LAB_00514d04:
    uVar4 = *(uint *)(pbVar2 + iVar6 + 0xd);
    pvVar5 = *(void **)(pbVar2 + iVar6 + 9);
    switch(bVar1) {
    case 1:
      RCProc(this,(int)pvVar5,uVar4,'\0');
      break;
    case 2:
      ObjProc(this,(int)pvVar5,uVar4,'\0');
      break;
    case 3:
      SubProc(this,(int)pvVar5,'\0');
      break;
    case 4:
      ArmProc(this,(int)pvVar5,uVar4,'\0');
      break;
    case 5:
      TechProc(this,(uint)pvVar5,(byte)uVar4,'\0');
      break;
    case 6:
      TTreeProc(this,(uint)pvVar5,'\0');
      break;
    case 7:
      MObjProc(this);
      break;
    case 8:
      TipProc(this,pvVar5,uVar4,'\0');
      break;
    case 10:
      IndexBut(this);
      break;
    case 0xb:
      SpecProc(this,(int)pvVar5,uVar4,'\0');
      break;
    case 0xc:
      NatProc(this,(int)pvVar5,'\0');
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    LinkAct(this,*(int *)(this->field_01C7 + iVar6 + 9),*(int *)(this->field_01C7 + iVar6 + 0xd));
    PutToSHlp(this);
    local_c = *(uint *)sizeHelp_exref;
    this->SetPanel('\x01');
  }
  local_c = local_c + 1;
  if (*(uint *)sizeHelp_exref <= local_c) {
    return;
  }
  goto LAB_00514be2;
}

