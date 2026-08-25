#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/HelpPanelTy.cpp

// 00510C80 HelpPanelTy::HelpPanelTy
#line 4 "decomp/ST.exe/functions/00510C80/decomp.c"
/* [STReturnSemanticsApplier] typed_pointer_return.
   Evidence: all 1 value-return path(s) forward Listing variable param_1 with evidence-backed
   structure /SubmarineTitans/Recovered/PointerShapes/AnonShape_00510C80_2C2DC38C (current recovered
   extent=592)

   [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079AC48 (store 00510CB9)
   Evidence: final_vptr=0079AC48; returns_this=true; calls_before=1; field_writes_after=38;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=medium;
   exact_factory_tail=00510C50->00403035->00510C80; allocation_size=596

   [STSwitchEnumApplier] Switch target field_0172 uses
   /SubmarineTitans/Recovered/Enums/HelpPanelTy_field_0172State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

HelpPanelTy * __thiscall st::fn_00510C80(HelpPanelTy *this)

{
  byte *pbVar1;
  int iVar2;

  st::fn_006E5FB0(this);
  this->field_005C = 0;
  this->field_0044 = 0;
  this->field_003C = 0;
  this->field_0060 = 0xffffffff;
  this->field_0064 = 3;
  this->field_0068 = nullptr;
  this->field_0172 = CASE_2;
  this->field_0178 = 0;
  this->field_017A = 0;
  this->vtable = &st_global_0079AC48;
  this->field_0040 = 500;
  this->field_0048 = 400;
  this->field_01A0 = 0;
  this->field_01A2 = 0;
  this->field_01A1 = 0;
  this->field_01A7 = 0;
  this->field_01A3 = nullptr;
  this->field_01DC = nullptr;
  this->field_01E8 = nullptr;
  this->field_01E4 = nullptr;
  this->field_01E0 = nullptr;
  this->field_0218 = nullptr;
  this->field_01EC = nullptr;
  memset(this->field_01F0, 0, 0x28); /* compiler bulk-zero initialization */
  iVar2 = 0;
  this->field_017C = 0;
  memset(this->field_0180, 0, 0x1c); /* compiler bulk-zero initialization */
  this->field_019C = 0;
  this->field_01CB = nullptr;
  this->field_01BB = nullptr;
  this->field_01B3 = nullptr;
  pbVar1 = *(byte **)PTR_structHelp_0085c11c;
  this->field_01CF = 0xffffffff;
  this->field_01C7 = pbVar1;
  this->field_01BF = 0;
  this->field_01B7 = 0;
  this->field_01D7 = nullptr;
  this->field_01DB = 0;
  this->field_024C = nullptr;
  this->field_021C = nullptr;
  this->field_0238 = nullptr;
  this->field_0248 = nullptr;
  this->field_022C = nullptr;
  this->field_0228 = nullptr;
  this->field_0234 = nullptr;
  this->field_0230 = nullptr;
  this->field_0220 = nullptr;
  this->field_0224 = nullptr;
  this->field_0244 = nullptr;
  this->field_0240 = 0;
  this->field_023C = 0;
  this->field_01D3 = nullptr;
  return this;
}

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
  byte *pbVar5;
  int iVar6;

  if (param_1 < 1) {
    return;
  }
  iVar6 = param_1;
  do {
    pbVar5 = st::pointer_boundary_cast<byte *>(this->field_01C7 + iVar6 * 0x11);
    if ((*(int *)pbVar5 == *(int *)(this->field_01C7 + param_1 * 0x11 + 4)) ||
       (*(int *)(pbVar5 + 4) == 0)) {
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
          if ((*piVar3 == *(int *)pbVar5) && (piVar3[1] == *(int *)(pbVar5 + 4))) {
            if (STField<char>(piVar3,0x12) != '\0') {
              return;
            }
            /* ST_CALLSITE[00514956]: CALL 0x00405362; direct=00405362 HelpPanelTy::ChangeTree */
            st::fn_00405362(this,piVar3,uVar4);
            return;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      /* ST_CALLSITE[0051492B]: CALL 0x00401a37; direct=00401A37 HelpPanelTy::sub_005148A0 */
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
  if (*(int *)PTR_sizeHelp_0085c118 == 0) {
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
      /* ST_CALLSITE[00514D32]: CALL 0x00404e85; direct=00404E85 HelpPanelTy::RCProc */
      st::fn_00404E85(this,(int)pvVar5,uVar4,'\0');
      break;
    case 2:
      /* ST_CALLSITE[00514D64]: CALL 0x00403747; direct=00403747 HelpPanelTy::ObjProc */
      st::fn_00403747(this,(int)pvVar5,uVar4,'\0');
      break;
    case 3:
      /* ST_CALLSITE[00514D57]: CALL 0x00403878; direct=00403878 HelpPanelTy::SubProc */
      st::fn_00403878(this,(int)pvVar5,'\0');
      break;
    case 4:
      /* ST_CALLSITE[00514D71]: CALL 0x004057e0; direct=004057E0 HelpPanelTy::ArmProc */
      st::fn_004057E0(this,(int)pvVar5,uVar4,'\0');
      break;
    case 5:
      /* ST_CALLSITE[00514D4B]: CALL 0x00402833; direct=00402833 HelpPanelTy::TechProc */
      st::fn_00402833(this,(uint)pvVar5,(byte)uVar4,'\0');
      break;
    case 6:
      /* ST_CALLSITE[00514D3E]: CALL 0x00405e61; direct=00405E61 HelpPanelTy::TTreeProc */
      st::fn_00405E61(this,(uint)pvVar5,'\0');
      break;
    case 7:
      /* ST_CALLSITE[00514D25]: CALL 0x004011fe; direct=004011FE HelpPanelTy::MObjProc */
      st::fn_004011FE(this);
      break;
    case 8:
      /* ST_CALLSITE[00514D97]: CALL 0x004020b8; direct=004020B8 HelpPanelTy::TipProc */
      st::fn_004020B8(this,pvVar5,uVar4,'\0');
      break;
    case 10:
      /* ST_CALLSITE[00514D1C]: CALL 0x00405803; direct=00405803 HelpPanelTy::IndexBut */
      st::fn_00405803(this);
      break;
    case 0xb:
      /* ST_CALLSITE[00514D7E]: CALL 0x00402cac; direct=00402CAC HelpPanelTy::SpecProc */
      st::fn_00402CAC(this,(int)pvVar5,uVar4,'\0');
      break;
    case 0xc:
      /* ST_CALLSITE[00514D8A]: CALL 0x00403bc0; direct=00403BC0 HelpPanelTy::NatProc */
      st::fn_00403BC0(this,(int)pvVar5,'\0');
    }
    /* ST_CALLSITE[00514DB1]: CALL 0x004054c5; direct=004054C5 HelpPanelTy::LinkAct */
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_004054C5(this,*(int *)(this->field_01C7 + iVar6 + 9),*(int *)(this->field_01C7 + iVar6 + 0xd));
    /* ST_CALLSITE[00514DB8]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
    st::fn_00405100(this);
    local_c = *(uint *)PTR_sizeHelp_0085c118;
    /* ST_CALLSITE[00514DCE]: CALL dword ptr [EAX + 0x18] */
    this->SetPanel('\x01');
  }
  local_c = local_c + 1;
  if (*(uint *)PTR_sizeHelp_0085c118 <= local_c) {
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
      /* ST_CALLSITE[005151E9]: CALL 0x00404e85; direct=00404E85 HelpPanelTy::RCProc */
      st::fn_00404E85(this,(int)this->field_01A3,this->field_01A7,'\x01');
      return;
    case '\x02':
      /* ST_CALLSITE[0051521D]: CALL 0x00403747; direct=00403747 HelpPanelTy::ObjProc */
      st::fn_00403747(this,(int)this->field_01A3,this->field_01A7,'\x01');
      return;
    case '\x03':
      /* ST_CALLSITE[00515204]: CALL 0x00403878; direct=00403878 HelpPanelTy::SubProc */
      st::fn_00403878(this,(int)this->field_01A3,'\x01');
      return;
    case '\x04':
      /* ST_CALLSITE[00515236]: CALL 0x004057e0; direct=004057E0 HelpPanelTy::ArmProc */
      st::fn_004057E0(this,(int)this->field_01A3,this->field_01A7,'\x01');
      return;
    case '\x05':
      /* ST_CALLSITE[005151D0]: CALL 0x00402833; direct=00402833 HelpPanelTy::TechProc */
      st::fn_00402833(this,(uint)this->field_01A3,(byte)this->field_01A7,'\x01');
      return;
    case '\x06':
      /* ST_CALLSITE[005151B7]: CALL 0x00405e61; direct=00405E61 HelpPanelTy::TTreeProc */
      st::fn_00405E61(this,(uint)this->field_01A3,'\x01');
      return;
    /* ST_CALLSITE[005151F2]: CALL 0x004027ac; direct=004027AC HelpPanelTy::PrepMissObj */
    case '\a':
      st::fn_004027AC(this);
      return;
    case '\b':
      /* ST_CALLSITE[0051527A]: CALL 0x004020b8; direct=004020B8 HelpPanelTy::TipProc */
      st::fn_004020B8(this,this->field_01A3,this->field_01A7,'\x01');
      break;
    case '\v':
      /* ST_CALLSITE[0051524F]: CALL 0x00402cac; direct=00402CAC HelpPanelTy::SpecProc */
      st::fn_00402CAC(this,(int)this->field_01A3,this->field_01A7,'\x01');
      return;
    case '\f':
      /* ST_CALLSITE[00515261]: CALL 0x00403bc0; direct=00403BC0 HelpPanelTy::NatProc */
      st::fn_00403BC0(this,(int)this->field_01A3,'\x01');
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
  uint uVar10;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar11;
  uint *puVar12;
  int iVar13;
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
      uVar11 = (uint)bVar3;
      do {
        if ((DAT_0080734e & 1 << (bVar9 & 0x1f)) != 0) {
          bVar8 = bVar8 + 1;
        }
        bVar9 = bVar9 + 1;
        uVar11 = uVar11 - 1;
        bVar4 = bVar8;
      } while (uVar11 != 0);
    }
    bVar9 = 0;
    bVar8 = this->field_0251;
    if (bVar8 != 0) {
      bVar6 = 0;
      uVar11 = (uint)bVar8;
      do {
        if ((DAT_00807352 & 1 << (bVar6 & 0x1f)) != 0) {
          bVar9 = bVar9 + 1;
        }
        bVar6 = bVar6 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      local_8 = (uint)bVar9;
    }
    bVar9 = this->field_0252;
    if (bVar9 != 0) {
      bVar6 = 0;
      uVar11 = (uint)bVar9;
      do {
        if ((DAT_00807356 & 1 << (bVar6 & 0x1f)) != 0) {
          bVar1 = bVar1 + 1;
        }
        bVar6 = bVar6 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    bVar6 = this->field_0253;
    if (bVar6 != 0) {
      bVar7 = 0;
      uVar11 = (uint)bVar6;
      do {
        if ((DAT_0080735a & 1 << (bVar7 & 0x1f)) != 0) {
          bVar2 = bVar2 + 1;
        }
        bVar7 = bVar7 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (DAT_0080874e == '\x02') {
      iVar13 = (((uint)bVar9 - (uint)bVar1) - (uint)bVar4) + -1 + (uint)bVar3;
    }
    else if (DAT_0080874e == '\x03') {
      iVar13 = (((uint)bVar6 - (uint)bVar2) - (uint)bVar4) + -1 + (uint)bVar3;
    }
    else {
      iVar13 = ((bVar8 - local_8) - (uint)bVar4) + -1 + (uint)bVar3;
    }
    if (-1 < iVar13) {
      uVar10 = st::fn_0072E6C0();
      uVar11 = uVar10 % (iVar13 + 1U);
      uVar5 = (uint)(byte)this->field_0250;
      local_8 = uVar11 & 0xff;
      if ((int)(uVar11 & 0xff) < (int)(uVar5 - bVar4)) {
        puVar12 = &DAT_0080734e;
        local_c = 0;
      }
      else {
        local_8 = (uint)(byte)((char)uVar11 + (bVar4 - this->field_0250));
        if (DAT_0080874e == '\x01') {
          puVar12 = &DAT_00807352;
          uVar5 = (uint)(byte)this->field_0251;
          local_c = 1;
        }
        else if (DAT_0080874e == '\x02') {
          puVar12 = &DAT_00807356;
          uVar5 = (uint)(byte)this->field_0252;
          local_c = 2;
        }
        else {
          puVar12 = &DAT_0080735a;
          uVar5 = (uint)(byte)this->field_0253;
          local_c = 3;
        }
      }
      bVar1 = 0;
      if (uVar5 != 0) {
        uVar11 = 0;
        do {
          if ((*puVar12 & 1 << ((byte)uVar11 & 0x1f)) == 0) {
            if ((char)local_8 == '\0') {
              /* ST_CALLSITE[0051DD04]: CALL 0x004020b8; direct=004020B8 HelpPanelTy::TipProc */
              st::fn_004020B8(this,(void *)(uint)bVar1,local_c,'\0');
              /* ST_CALLSITE[0051DD0F]: CALL dword ptr [EDX + 0x18] */
              this->SetPanel('\x01');
              return;
            }
            local_8 = (uint)(byte)((char)local_8 - 1);
          }
          bVar1 = bVar1 + 1;
          uVar11 = (uint)bVar1;
        } while (uVar11 < uVar5);
        return;
      }
    }
  }
  return;
}

