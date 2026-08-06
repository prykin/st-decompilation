#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/HelpPanelTy.cpp

// 005148A0 HelpPanelTy::sub_005148A0
#line 4 "decomp/ST.exe/functions/005148A0/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_005148A0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=2; incoming_edx_uses=0; calls=2;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=1; adopt_untyped_existing_thiscall

   [STMethodOwnerApplier] Structural method owner recovered as HelpPanelTy.
   Evidence: this_call_owners=[HelpPanelTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_005148A0(HelpPanelTy *this,int param_1)

{
  AnonPointee_HelpPanelTy_01B3 *pAVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;

  if (param_1 < 1) {
    return;
  }
  iVar6 = param_1;
  do {
    piVar5 = (int *)(this->field_01C7 + iVar6 * 0x11);
    if ((*piVar5 == *(int *)(param_1 * 0x11 + 4 + this->field_01C7)) || (piVar5[1] == 0)) {
      pAVar1 = this->field_01B3;
      uVar4 = 0;
      uVar2 = *(uint *)&pAVar1->field_0xc;
      if (uVar2 != 0) {
        if (uVar2 == 0) {
          piVar3 = nullptr;
          goto LAB_0051490d;
        }
        do {
          piVar3 = (int *)(pAVar1->field_0008 * uVar4 + pAVar1->field_001C);
LAB_0051490d:
          if ((*piVar3 == *piVar5) && (piVar3[1] == piVar5[1])) {
            if (STField<char>(piVar3,0x12) != '\0') {
              return;
            }
            st::fn_00405362(this,piVar3,uVar4);
            return;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      st::fn_00401A37(this,iVar6);
      iVar6 = param_1;
    }
    iVar6 = iVar6 + -1;
    if (iVar6 < 1) {
      return;
    }
  } while( true );
}

// 00514BC0 HelpPanelTy::sub_00514BC0
#line 4 "decomp/ST.exe/functions/00514BC0/decomp.c"
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
st::fn_00514BC0
          (HelpPanelTy *this,HelpPanelTy_sub_00514BC0_param_1Enum param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  uint local_c;

  bVar5 = false;
  local_c = 0;
  if (*(int *)sizeHelp_exref == 0) {
    return;
  }
LAB_00514be2:
  iVar6 = local_c * 0x11 + this->field_01C7;
  cVar1 = *(char *)(iVar6 + 8);
  switch(cVar1) {
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\v':
    if ((*(HelpPanelTy_sub_00514BC0_param_1Enum *)(iVar6 + 9) == param_1) &&
       ((cVar1 == '\x03' || (*(int *)(iVar6 + 0xd) == param_2)))) {
      bVar5 = true;
      goto LAB_00514d04;
    }
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
    break;
  case '\f':
    switch(param_1) {
    case CASE_F2:
    case CASE_F3:
    case CASE_F4:
    case CASE_F5:
      iVar2 = *(int *)(iVar6 + 9);
      if ((((iVar2 != 0xf2) && (iVar2 != 0xf3)) && (iVar2 != 0xf4)) && (iVar2 != 0xf5))
      goto cf_common_join_00514CF6;
      bVar5 = true;
      break;
    case CASE_F6:
    case CASE_F7:
      if ((*(int *)(iVar6 + 9) != 0xf6) && (*(int *)(iVar6 + 9) != 0xf7))
      goto cf_common_join_00514CF6;
      bVar5 = true;
      break;
    case CASE_F8:
    case CASE_F9:
      if ((*(int *)(iVar6 + 9) != 0xf8) && (*(int *)(iVar6 + 9) != 0xf9))
      goto cf_common_join_00514CF6;
      bVar5 = true;
      break;
    case CASE_FA:
    case CASE_FB:
      if ((*(int *)(iVar6 + 9) != 0xfa) && (*(int *)(iVar6 + 9) != 0xfb))
      goto cf_common_join_00514CF6;
      bVar5 = true;
      break;
    default:
      if (*(HelpPanelTy_sub_00514BC0_param_1Enum *)(iVar6 + 9) != param_1)
      goto cf_common_join_00514CF6;
      bVar5 = true;
    }
    goto LAB_00514d04;
  default:
    goto switchD_00514c13_default;
  }
cf_common_join_00514CF6:
switchD_00514c13_default:
  if (bVar5) {
LAB_00514d04:
    uVar3 = *(uint *)(iVar6 + 0xd);
    pvVar4 = *(void **)(iVar6 + 9);
    switch(cVar1) {
    case '\x01':
      st::fn_00404E85(this,(int)pvVar4,uVar3,'\0');
      break;
    case '\x02':
      st::fn_00403747(this,(int)pvVar4,uVar3,'\0');
      break;
    case '\x03':
      st::fn_00403878(this,(int)pvVar4,'\0');
      break;
    case '\x04':
      st::fn_004057E0(this,(int)pvVar4,uVar3,'\0');
      break;
    case '\x05':
      st::fn_00402833(this,(uint)pvVar4,(byte)uVar3,'\0');
      break;
    case '\x06':
      st::fn_00405E61(this,(uint)pvVar4,'\0');
      break;
    case '\a':
      st::fn_004011FE(this);
      break;
    case '\b':
      st::fn_004020B8(this,pvVar4,uVar3,'\0');
      break;
    case '\n':
      st::fn_00405803(this);
      break;
    case '\v':
      st::fn_00402CAC(this,(int)pvVar4,uVar3,'\0');
      break;
    case '\f':
      st::fn_00403BC0(this,(int)pvVar4,'\0');
    }
    iVar6 = this->field_01C7 + local_c * 0x11;
    st::fn_004054C5(this,*(int *)(iVar6 + 9),*(int *)(iVar6 + 0xd));
    st::fn_00405100(this);
    local_c = *(uint *)sizeHelp_exref;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this->vtable + 0x18))(1);
  }
  local_c = local_c + 1;
  if (*(uint *)sizeHelp_exref <= local_c) {
    return;
  }
  goto LAB_00514be2;
}

// 00515180 HelpPanelTy::sub_00515180
#line 4 "decomp/ST.exe/functions/00515180/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as HelpPanelTy.
   Evidence: this_call_owners=[HelpPanelTy]; agreed_this_calls=5; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

void __thiscall st::fn_00515180(HelpPanelTy *this,char param_1)

{
  if ((this->field_01A1 == param_1) || (param_1 == '\a')) {
    switch(param_1) {
    case '\x01':
      st::fn_00404E85(this,this->field_01A3,this->field_01A7,'\x01');
      return;
    case '\x02':
      st::fn_00403747(this,this->field_01A3,this->field_01A7,'\x01');
      return;
    case '\x03':
      st::fn_00403878(this,this->field_01A3,'\x01');
      return;
    case '\x04':
      st::fn_004057E0(this,this->field_01A3,this->field_01A7,'\x01');
      return;
    case '\x05':
      st::fn_00402833(this,this->field_01A3,*(byte *)&this->field_01A7,'\x01');
      return;
    case '\x06':
      st::fn_00405E61(this,this->field_01A3,'\x01');
      return;
    case '\a':
      st::fn_004027AC(this);
      return;
    case '\b':
      st::fn_004020B8(this,(void *)this->field_01A3,this->field_01A7,'\x01');
      break;
    case '\v':
      st::fn_00402CAC(this,this->field_01A3,this->field_01A7,'\x01');
      return;
    case '\f':
      st::fn_00403BC0(this,this->field_01A3,'\x01');
      return;
    }
  }
  return;
}

// 0051DA70 HelpPanelTy::sub_0051DA70
#line 4 "decomp/ST.exe/functions/0051DA70/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as HelpPanelTy.
   Evidence: this_call_owners=[HelpPanelTy]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_0051DA70(HelpPanelTy *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  int local_c;
  uint local_8;

  if ((((DAT_0080734d != '\0') &&
       (*(char *)(g_bulkInitializedRecords_008087C7 + DAT_0080874d) == '\0')) &&
      (DAT_0080874f == '\0')) && (DAT_00808783 != '\x03')) {
    bVar3 = this->field_0250;
    bVar8 = 0;
    bVar2 = 0;
    bVar1 = 0;
    local_8 = 0;
    bVar4 = 0;
    if (bVar3 != 0) {
      bVar9 = 0;
      uVar10 = (uint)bVar3;
      do {
        if ((DAT_0080734e & 1 << (bVar9 & 0x1f)) != 0) {
          bVar8 = bVar8 + 1;
        }
        bVar9 = bVar9 + 1;
        uVar10 = uVar10 - 1;
        bVar4 = bVar8;
      } while (uVar10 != 0);
    }
    bVar9 = 0;
    bVar8 = this->field_0251;
    if (bVar8 != 0) {
      bVar6 = 0;
      uVar10 = (uint)bVar8;
      do {
        if ((DAT_00807352 & 1 << (bVar6 & 0x1f)) != 0) {
          bVar9 = bVar9 + 1;
        }
        bVar6 = bVar6 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      local_8 = (uint)bVar9;
    }
    bVar9 = this->field_0252;
    if (bVar9 != 0) {
      bVar6 = 0;
      uVar10 = (uint)bVar9;
      do {
        if ((DAT_00807356 & 1 << (bVar6 & 0x1f)) != 0) {
          bVar1 = bVar1 + 1;
        }
        bVar6 = bVar6 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    bVar6 = this->field_0253;
    if (bVar6 != 0) {
      bVar7 = 0;
      uVar10 = (uint)bVar6;
      do {
        if ((DAT_0080735a & 1 << (bVar7 & 0x1f)) != 0) {
          bVar2 = bVar2 + 1;
        }
        bVar7 = bVar7 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (DAT_0080874e == '\x02') {
      iVar12 = (((uint)bVar9 - (uint)bVar1) - (uint)bVar4) + -1 + (uint)bVar3;
    }
    else if (DAT_0080874e == '\x03') {
      iVar12 = (((uint)bVar6 - (uint)bVar2) - (uint)bVar4) + -1 + (uint)bVar3;
    }
    else {
      iVar12 = ((bVar8 - local_8) - (uint)bVar4) + -1 + (uint)bVar3;
    }
    if (-1 < iVar12) {
      uVar10 = st::fn_0072E6C0();
      uVar10 = uVar10 % (iVar12 + 1U);
      uVar5 = (uint)(byte)this->field_0250;
      local_8 = uVar10 & 0xff;
      if ((int)(uVar10 & 0xff) < (int)(uVar5 - bVar4)) {
        puVar11 = &DAT_0080734e;
        local_c = 0;
      }
      else {
        local_8 = (uint)(byte)((char)uVar10 + (bVar4 - this->field_0250));
        if (DAT_0080874e == '\x01') {
          puVar11 = &DAT_00807352;
          uVar5 = (uint)(byte)this->field_0251;
          local_c = 1;
        }
        else if (DAT_0080874e == '\x02') {
          puVar11 = &DAT_00807356;
          uVar5 = (uint)(byte)this->field_0252;
          local_c = 2;
        }
        else {
          puVar11 = &DAT_0080735a;
          uVar5 = (uint)(byte)this->field_0253;
          local_c = 3;
        }
      }
      bVar1 = 0;
      if (uVar5 != 0) {
        uVar10 = 0;
        do {
          if ((*puVar11 & 1 << ((byte)uVar10 & 0x1f)) == 0) {
            if ((char)local_8 == '\0') {
              st::fn_004020B8(this,(void *)(uint)bVar1,local_c,'\0');
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(this->vtable + 0x18))(1);
              return;
            }
            local_8 = (uint)(byte)((char)local_8 - 1);
          }
          bVar1 = bVar1 + 1;
          uVar10 = (uint)bVar1;
        } while (uVar10 < uVar5);
        return;
      }
    }
  }
  return;
}

