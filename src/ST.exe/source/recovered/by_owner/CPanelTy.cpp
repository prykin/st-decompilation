#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/CPanelTy.cpp

// 004F1610 CPanelTy::sub_004F1610
#line 4 "decomp/ST.exe/functions/004F1610/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=8; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=6; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=11, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004F1610(CPanelTy *this,char param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar6;
  undefined4 local_9c [19];
  undefined1 local_50 [16];
  undefined4 local_40;
  int local_3c;
  uint local_38;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 *local_1c;
  undefined2 local_18;
  uint local_10;
  int local_c;
  uint local_8;

  local_10 = (uint)(param_1 == '\0');
  iVar6 = *(int *)((int)this->field_0308 + local_10 * 4 + -10);
  if (iVar6 != 0) {
    local_40 = 0x5b;
    st::fn_006E5970((SystemClassTy *)this->field_000C,2,iVar6,(int)local_50);
    local_c = local_3c;
    local_8 = local_8 & 0xffffff00;
    if (local_38 != 0) {
      do {
        uVar4 = local_8;
        iVar6 = local_c;
        memset(local_30, 0, 0x20); /* compiler bulk-zero initialization */
        iVar2 = 0;
        if (param_1 == '\0') {
          cVar1 = this->field_0BFD;
        }
        else {
          cVar1 = this->field_0BA1;
        }
        if (cVar1 == '\0') {
          local_20 = 0x50;
          iVar6 = *(int *)(iVar6 + (uVar4 & 0xff) * 4);
        }
        else {
          uVar4 = uVar4 & 0xff;
          memset(local_9c, 0, 0x4c); /* compiler bulk-zero initialization */
          local_9c[0] = 8;
          local_20 = 0x5a;
          local_9c[1] = *(undefined4 *)
                         (&DAT_00807e66 +
                         *(int *)(&this->field_0x789 + (uVar4 + local_10 * 6) * 0x27) * 4);
          local_1c = local_9c;
          st::fn_006E5970
                    ((SystemClassTy *)this->field_000C,2,*(int *)(iVar6 + uVar4 * 4),(int)local_30);
          local_20 = 0x51;
          iVar6 = *(int *)(local_c + uVar4 * 4);
        }
        local_18 = 1;
        st::fn_006E5970((SystemClassTy *)this->field_000C,2,iVar6,(int)local_30);
        bVar3 = (char)local_8 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
      } while (bVar3 < local_38);
    }
  }
  return;
}

// 004F17D0 CPanelTy::sub_004F17D0
#line 4 "decomp/ST.exe/functions/004F17D0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=6; incoming_this_accesses=1;
   incoming_edx_uses=2; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=6; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=10, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004F17D0(CPanelTy *this,int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  CPanelTy_field_0B99State *pCVar5;

  if (param_2 < 6) {
    pCVar5 = &this->field_0B99;
    if (param_1 == 0) {
      pCVar5 = &this->field_0BF5;
    }
    uVar2 = (uint)param_2;
    iVar1 = uVar2 + (uint)(param_1 == 0) * 6;
    (&this->field_0x780)[iVar1 * 0x27] = 1;
    iVar3 = st::fn_00401A78(*(Global_sub_00525390_param_1Enum *)(uVar2 + 9 + (int)pCVar5),*pCVar5
                              );
    *(int *)(&this->field_0x781 + iVar1 * 0x27) = iVar3;
    uVar4 = st::fn_0040371F(*(Global_sub_005272B0_param_1Enum *)(uVar2 + 9 + (int)pCVar5));
    *(undefined4 *)(&this->field_0x789 + iVar1 * 0x27) = uVar4;
    (&this->field_0x78d)[iVar1 * 0x27] = 3;
  }
  return;
}

// 004F1950 CPanelTy::sub_004F1950
#line 4 "decomp/ST.exe/functions/004F1950/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=3; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_004F1950(CPanelTy *this)

{
  byte *pbVar1;

  pbVar1 = st::fn_0070B650(this->field_025B,(uint)(byte)this->field_025F);
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)this->field_01B4,0xb,9,'\x06',pbVar1);
  st::fn_006B3640
            ((int *)g_ddxContext_008075A8,this->field_017C,0xffffffff,this->field_010C,
             this->field_0110);
  return;
}

// 004F4570 CPanelTy::sub_004F4570
#line 4 "decomp/ST.exe/functions/004F4570/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004F4570(CPanelTy *this,char param_1,int param_2,int param_3)

{
  uint uVar1;
  short sVar2;
  byte *pbVar3;
  int local_8;

  sVar2 = -1;
  pbVar3 = (byte *)(param_2 + 0xf);
  local_8 = 6;
  do {
    if ((pbVar3[-6] != 0) &&
       ((sVar2 = sVar2 + 1, *pbVar3 != pbVar3[param_3 - param_2] ||
        (*(char *)(param_2 + 7) != *(char *)(param_3 + 7))))) {
      this->field_0028 = 0x54;
      if (*(char *)(param_2 + 7) == '\0') {
        uVar1 = 0;
      }
      else {
        uVar1 = (uint)*pbVar3;
      }
      *(uint *)&this->field_0x2c = uVar1;
      this->field_0030 = (int)sVar2;
      st::fn_006E6080(this,2,*(undefined4 *)((int)this->field_0308 + (uint)(param_1 == '\0') * 4 + -10)
                   ,(undefined4 *)&this->field_0x18);
    }
    pbVar3 = pbVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

// 004F8020 CPanelTy::sub_004F8020
#line 4 "decomp/ST.exe/functions/004F8020/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=15; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

void __thiscall st::fn_004F8020(CPanelTy *this,char param_1,int param_2)

{
  char *pcVar1;

  pcVar1 = &this->field_0B63;
  if (param_1 == '\0') {
    pcVar1 = &this->field_0C51;
  }
  if ((((*pcVar1 != '\0') && (DAT_00808784 == 0)) && (DAT_00808788 == 0)) &&
     ((DAT_0080878c == 0 && (DAT_00808790 == 0)))) {
    st::fn_00401875(g_allPlayers_007FA174,(uint *)(uint)(param_1 == '\0'),0,param_2);
  }
  return;
}

// 004F9120 CPanelTy::sub_004F9120
#line 4 "decomp/ST.exe/functions/004F9120/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004F9120(CPanelTy *this,byte param_1,char param_2,undefined4 param_3)

{
  uint uVar1;

  if (param_1 < 8) {
    uVar1 = (uint)param_1;
    g_bulkInitializedRecords_008087C7[uVar1].field_0030 = param_2;
    *(undefined4 *)&g_bulkInitializedRecords_008087C7[uVar1].field_0x31 = param_3;
    *(uint *)&g_bulkInitializedRecords_008087C7[uVar1].field_0x35 = this->field_09A0;
    if ((param_1 == DAT_0080874d) && (param_2 == '\0')) {
      DAT_0080c4d3 = 4;
    }
  }
  return;
}

// 004FA3B0 CPanelTy::sub_004FA3B0
#line 4 "decomp/ST.exe/functions/004FA3B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_004FA3B0(CPanelTy *this)

{
  if ((this->field_0B63 != '\0') && (this->field_0B64 != '\0')) {
    st::fn_00401E15(this,'\0',1);
    return;
  }
  if ((this->field_0C51 != '\0') && (this->field_0C52 != '\0')) {
    st::fn_00401E15(this,'\x01',1);
  }
  return;
}

// 004FA870 CPanelTy::sub_004FA870
#line 4 "decomp/ST.exe/functions/004FA870/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004FA870_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5;CASE_E=14;CASE_F=15

   [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=18; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_sub_004FA870_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_E=14;CASE_F=15 */

void __thiscall st::fn_004FA870(CPanelTy *this,CPanelTy_sub_004FA870_param_1Enum param_1)

{
  if (this->field_012C != 0) {
    *(undefined1 *)((int)this->field_0B1F + param_1 + 0x2f) = 1;
    return;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((((param_1 == 0) || (CASE_5 < param_1)) && (param_1 != CASE_E)) && (param_1 != CASE_F)) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == CASE_6) {
      if (g_researchPanel_008016E8 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)g_researchPanel_008016E8->field_0000->field_001C)();
        return;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_1 == CASE_7) {
      if (g_bldBoatPanel_0080167C != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)g_bldBoatPanel_0080167C->field_0000->field_001C)();
        return;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_1 == 8) {
      if (g_bldObjPanel_00801684 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)g_bldObjPanel_00801684->field_0000->field_001C)();
        return;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_1 == 9) {
      if (g_infocPanel_00801698 != nullptr) {
        g_infocPanel_00801698->Update();
        return;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_1 == 10) {
      if (g_tradePanel_00802A44 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)&g_tradePanel_00802A44->field_0000[1].field_0xc)();
        return;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_1 == 0xb) {
      if (g_behPanel_00801678 != nullptr) {
        g_behPanel_00801678->Update();
        return;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_1 == 0xc) {
      if (g_bldLabPanel_00801680 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)g_bldLabPanel_00801680->field_0000->field_001C)();
        return;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_1 == 0x10) {
      if (g_upgPanel_00802A48 != nullptr) {
        g_upgPanel_00802A48->Update();
        return;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_1 == 0x11) {
      if (g_frmPanel_0080168C != nullptr) {
        g_frmPanel_0080168C->Update();
        return;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_1 == 0x12) {
      if (g_sAMPanel_008016EC != nullptr) {
        g_sAMPanel_008016EC->Update();
        return;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if ((param_1 == 0x13) && (g_helpPanel_00801690 != nullptr)) {
      st::fn_00402D38(g_helpPanel_00801690,'\x06');
      st::fn_00402D38(g_helpPanel_00801690,'\x05');
      return;
    }
  }
  else {
    switch(param_1) {
    case CASE_1:
      st::fn_0040206D(this);
      return;
    case CASE_2:
      st::fn_004044A3();
      return;
    case CASE_4:
      st::fn_00401889();
      return;
    case CASE_5:
      st::fn_004025CC(this);
      return;
    case CASE_E:
    case CASE_F:
      st::fn_0040415B(this,(uint)(byte)(param_1 - CASE_E));
    }
  }
  return;
}

// 004FAB10 CPanelTy::sub_004FAB10
#line 4 "decomp/ST.exe/functions/004FAB10/decomp.c"
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

int __thiscall st::fn_004FAB10(CPanelTy *this,CPanelTy_sub_004FAB10_param_1Enum param_1)

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
    if (g_researchPanel_008016E8 != nullptr) {
      return (uint)(g_researchPanel_008016E8->field_0172 != 2);
    }
  case CASE_7:
    if (g_bldBoatPanel_0080167C != nullptr) {
      return (uint)(g_bldBoatPanel_0080167C->field_0172 != 2);
    }
  case CASE_8:
    if (g_bldObjPanel_00801684 != nullptr) {
      return (uint)(g_bldObjPanel_00801684->field_0172 != 2);
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
    if (g_bldLabPanel_00801680 != nullptr) {
      return (uint)(g_bldLabPanel_00801680->field_0172 != 2);
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

// 004FAD20 CPanelTy::sub_004FAD20
#line 4 "decomp/ST.exe/functions/004FAD20/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall st::fn_004FAD20(CPanelTy *this)

{
  undefined1 *puVar1;
  int iVar2;

  iVar2 = 6;
  puVar1 = &this->field_0BA8;
  do {
    puVar1[0x5c] = 0xff;
    *puVar1 = 0xff;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  st::fn_00405D03(this,CASE_2);
  st::fn_00405D03(this,CASE_4);
  return;
}

// 004FAD60 CPanelTy::sub_004FAD60
#line 4 "decomp/ST.exe/functions/004FAD60/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004FAD60 -> 004AB530 @ 004FAE21 | 004FAD60 -> 006E68C0 @ 004FADF7 | 005449B0 ->
   004FAD60 @ 00547B96; unproven partial register write at 00547B8D */

void __thiscall st::fn_004FAD60(CPanelTy *this,uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  iVar3 = this->field_004C;
  iVar1 = this->field_00A4;
  if (this->field_023F != CASE_2) {
    uVar2 = (uint)param_1 & 0xffff;
    uVar4 = param_2 & 0xffff;
    if (((((iVar3 <= (int)uVar2) && ((int)uVar2 < this->field_0078 + iVar3)) &&
         (iVar1 <= (int)uVar4)) && (((int)uVar4 < this->field_00D0 + iVar1 && (DAT_00808784 == 0))))
       && ((DAT_00808788 == 0 && ((DAT_0080878c == 0 && (DAT_00808790 == 0)))))) {
      iVar3 = st::fn_006E68C0
                        (g_sT3DSMAPContext_00807598,(uVar2 - iVar3) + -5,(uVar4 - iVar1) + -7,
                         (int *)&param_1,(int *)&param_2);
      if (iVar3 != 0) {
        this->field_013C = 1;
        st::fn_00401519((uint)DAT_00807349,param_1,param_2);
      }
    }
  }
  return;
}

// 004FAE90 CPanelTy::sub_004FAE90
#line 4 "decomp/ST.exe/functions/004FAE90/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=004FAEBC MOV ECX,dword ptr [EBP + 0xc];
   first-use mask

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004FAE90 -> 0054EDF0 @ 004FAF86 | 004FAE90 -> 006E68C0 @ 004FAF38 | 005449B0 ->
   004FAE90 @ 00547BF0; unproven partial register write at 00547BE7 */

void __thiscall st::fn_004FAE90(CPanelTy *this,uint *param_1,ushort param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_0000000a;
  uint *local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar4 = this->field_004C;
  iVar1 = this->field_00A4;
  if (this->field_023F != CASE_2) {
    uVar3 = (uint)param_1 & 0xffff;
    uVar2 = (uint)param_2;
    if (((((iVar4 <= (int)uVar3) && ((int)uVar3 < this->field_0078 + iVar4)) &&
         (iVar1 <= (int)uVar2)) && (((int)uVar2 < this->field_00D0 + iVar1 && (DAT_00808784 == 0))))
       && ((DAT_00808788 == 0 && ((DAT_0080878c == 0 && (DAT_00808790 == 0)))))) {
      iVar4 = st::fn_006E68C0
                        (g_sT3DSMAPContext_00807598,(uVar3 - iVar4) + -5,(uVar2 - iVar1) + -7,
                         (int *)&param_1,&local_8);
      if (iVar4 != 0) {
        local_10 = local_8;
        local_14 = param_1;
        iVar4 = st::fn_0040512D
                          (g_allPlayers_007FA174,nullptr,nullptr,&stack0x0000000a);
        if (-1 < iVar4) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_c = (int)in_stack_0000000a;
          if (local_c < 0) {
            local_c = 2;
          }
          st::fn_00403C33((undefined4 *)0x14,(uint *)&local_14,0,0xffffffff);
        }
      }
    }
  }
  return;
}

// 004FAFF0 CPanelTy::sub_004FAFF0
#line 4 "decomp/ST.exe/functions/004FAFF0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_004FAFF0(CPanelTy *this)

{
  if ((((DAT_00808784 == 0) && (DAT_00808788 == 0)) && (DAT_0080878c == 0)) &&
     (((DAT_00808790 == 0 && (-1 < this->field_0237)) && (-1 < this->field_023B)))) {
    st::fn_00401519((uint)DAT_00807349,(uint *)this->field_0237,this->field_023B);
  }
  return;
}

// 00501A10 CPanelTy::sub_00501A10
#line 4 "decomp/ST.exe/functions/00501A10/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=2; incoming_this_accesses=31;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_0B99 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B99State. Cases:
   CASE_8=8;CASE_14=20;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37

   [STSwitchEnumApplier] Switch target field_0B99 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B99State. Cases:
   CASE_8=8;CASE_9=9;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189
    */

void __thiscall st::fn_00501A10(CPanelTy *this)

{
  undefined4 *puVar1;
  BITMAPINFO *pBVar2;

  puVar1 = &this->field_0434;
  memset(puVar1, 0, 0x118); /* compiler bulk-zero initialization */
  if (this->field_0B9E == CASE_1) {
    if (DAT_0080874e == '\x03') {
      if (this->field_0B99 == CASE_1A) {
        *puVar1 = this->field_0048 + 0x3c;
        this->field_0438 = this->field_00A0 + 0x84;
        this->field_043C = 0x55;
        this->field_0440 = 0xe;
        this->field_044C = 0x2ef3;
      }
      this->field_0450 = this->field_0048 + 4;
      this->field_0454 = this->field_00A0 + 8;
      this->field_0458 = 100;
      this->field_045C = 0x3c;
      pBVar2 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_077C,0);
      this->field_0460 = pBVar2;
      this->field_0464 = this->field_0458;
      this->field_0468 = 0x4e87;
      this->field_046C = this->field_0048 + 2;
      this->field_0470 = this->field_00A0 + 6;
      this->field_0474 = 0x20;
      this->field_0478 = 0x35;
      pBVar2 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_077C,2);
      this->field_047C = pBVar2;
      this->field_0484 = 0x2ef0;
      this->field_0480 = this->field_0474;
      return;
    }
    switch(this->field_0B99) {
    case CASE_8:
    case CASE_14:
    case CASE_16:
    case CASE_17:
    case CASE_25:
      pBVar2 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_02B2,0);
      this->field_043C = (pBVar2->bmiHeader).biWidth;
      pBVar2 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_02B2,0);
      this->field_0440 = (pBVar2->bmiHeader).biHeight;
      *puVar1 = (this->field_018C->field_0004 - this->field_043C) / 2 + this->field_0048;
      this->field_0438 = this->field_00A0 + 0x50;
    }
    switch(this->field_0B99) {
    case CASE_8:
    case CASE_14:
      this->field_044C = 0x2ef3;
      break;
    case CASE_16:
    case CASE_17:
      this->field_044C = 0x2ef0;
    }
    this->field_0450 = this->field_0044;
    this->field_0454 = this->field_009C;
    this->field_0458 = this->field_0070;
    this->field_045C = this->field_00C8;
    this->field_0468 = 0x4e87;
  }
  return;
}

// 005050B0 CPanelTy::sub_005050B0
#line 4 "decomp/ST.exe/functions/005050B0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_005050B0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5

   [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=5; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_sub_005050B0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5 */

int __thiscall st::fn_005050B0(CPanelTy *this,CPanelTy_sub_005050B0_param_1Enum param_1)

{
  char cVar1;
  bool bVar2;

  if (DAT_0080874e == '\x01') {
    bVar2 = this->field_09D4 != '\x01';
  }
  else {
    cVar1 = this->field_09D4;
    bVar2 = cVar1 == '\x01';
    if (DAT_0080874e == '\x03') {
      if ((param_1 == CASE_3) && (cVar1 == '\x01')) {
        return -1;
      }
      return (-(uint)(cVar1 != '\x01') & 0xfffffffc) + 4 + (uint)param_1;
    }
  }
  if (bVar2) {
    switch(param_1) {
    case CASE_0:
      goto switchD_005050fb_caseD_0;
    case CASE_1:
      return 3;
    case CASE_2:
      return 9;
    case CASE_3:
      return 7;
    case CASE_4:
      return 4;
    case CASE_5:
      return 8;
    default:
switchD_005050fb_default:
      return -1;
    }
  }
  switch(param_1) {
  case CASE_0:
switchD_005050fb_caseD_0:
    return 0;
  case CASE_1:
    return 1;
  case CASE_2:
    return 2;
  case CASE_3:
    return 5;
  case CASE_4:
    return 6;
  default:
    goto switchD_005050fb_default;
  }
}

// 00506040 CPanelTy::sub_00506040
#line 4 "decomp/ST.exe/functions/00506040/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=3; incoming_this_accesses=23;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

void __thiscall st::fn_00506040(CPanelTy *this)

{
  BITMAPINFO *pBVar1;

  memset(&this->field_0x54c, 0, 0x118); /* compiler bulk-zero initialization */
  if (this->field_0BFA == CASE_1) {
    if (DAT_0080874e == '\x03') {
      this->field_0568 = this->field_0050 + 0x81;
      this->field_056C = this->field_00A8 + 8;
      this->field_0570 = 100;
      this->field_0574 = 0x3c;
      pBVar1 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_077C,1);
      this->field_0578 = pBVar1;
      this->field_057C = this->field_0570;
      this->field_0580 = 0x4e87;
      this->field_0584 = this->field_0050 + 199;
      this->field_0588 = this->field_00A8 + 6;
      this->field_058C = 0x20;
      this->field_0590 = 0x35;
      pBVar1 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_077C,3);
      this->field_0594 = pBVar1;
      this->field_0598 = this->field_058C;
      this->field_059C = 0x2ef0;
      return;
    }
    this->field_0568 = this->field_0054;
    this->field_056C = this->field_00AC;
    this->field_0570 = this->field_0080;
    this->field_0574 = this->field_00D8;
    this->field_0580 = 0x4e87;
  }
  return;
}

// 0052AFE0 CPanelTy::sub_0052AFE0
#line 4 "decomp/ST.exe/functions/0052AFE0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=1; incoming_this_accesses=17;
   incoming_edx_uses=0; incoming_stack_parameter_uses=18; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_0052AFE0(CPanelTy *this,byte param_1,float param_2,float param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  int local_30 [8];
  float local_10;
  float local_c;
  float local_8;

  local_30[5] = 2;
  local_30[6] = 2;
  iVar8 = 0;
  local_30[0] = 1;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 1;
  local_30[4] = 1;
  local_30[7] = 1;
  if (param_2 < _DAT_0079034c) {
    lVar9 = st::fn_0072E288();
    iVar5 = (short)lVar9 + -1;
  }
  else {
    lVar9 = st::fn_0072E288();
    iVar5 = (int)(short)lVar9;
  }
  bVar1 = param_3 < _DAT_0079034c;
  this->field_0237 = iVar5;
  if (bVar1) {
    lVar9 = st::fn_0072E288();
    iVar5 = (short)lVar9 + -1;
  }
  else {
    lVar9 = st::fn_0072E288();
    iVar5 = (int)(short)lVar9;
  }
  this->field_023B = iVar5;
  if (this->field_0DB3 == nullptr) {
    iVar5 = 0;
    piVar7 = local_30;
    local_c = (float)(int)*PTR_00806750 * _DAT_007904f8;
    local_10 = (float)(int)PTR_00806750[1] * _DAT_007904f8;
    fVar2 = _DAT_0079034c;
    do {
      fVar3 = param_3 - (float)piVar7[1] * (float)(int)PTR_00806750[1] * _DAT_007904f8 *
                        _DAT_00790784;
      fVar4 = param_2 - (float)*piVar7 * (float)(int)*PTR_00806750 * _DAT_007904f8 * _DAT_00790784;
      local_8 = fVar4 * fVar4 + fVar3 * fVar3;
      if (fVar2 < local_8) {
        iVar8 = iVar5;
        fVar2 = local_8;
      }
      iVar5 = iVar5 + 1;
      piVar7 = piVar7 + 2;
    } while (iVar5 < 4);
    if (fVar2 != _DAT_0079034c) {
      puVar6 = st::fn_006E6460(g_sT3DSMAPContext_00807598,this->field_0DBF + (param_1 - 2),1,0x97,0x96,
                            0,1);
      iVar5 = local_30[iVar8 * 2];
      this->field_0DB3 = puVar6;
      this->field_0DCC = param_1;
      this->field_0DC7 = 1;
      this->field_0DC8 = 0;
      this->field_0DCD = 0;
      local_8 = (float)iVar5 * local_c * (float)_DAT_007901c0;
      iVar8 = local_30[iVar8 * 2 + 1];
      this->field_0DD6 = local_8;
      this->field_0DCE = param_2;
      fVar2 = (float)iVar8 * local_10 * (float)_DAT_007901c0;
      this->field_0DDA = fVar2;
      fVar3 = (float)_DAT_0079acd8;
      this->field_0DD2 = param_3;
      fVar3 = (param_2 - local_8) * fVar3 * (float)_DAT_0079acc8;
      this->field_0DDE = fVar3;
      this->field_0DE6 = fVar3 * _DAT_0079acc0;
      fVar3 = (param_3 - fVar2) * _DAT_0079acbc;
      this->field_0DE2 = fVar3;
      this->field_0DEA = fVar3 * _DAT_0079acb8;
      st::fn_006E6540((int)puVar6,local_8,fVar2,-1);
      st::fn_00405E2F((this->field_0DCC != '\0') + CASE_B8);
      return;
    }
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006E65C0(g_sT3DSMAPContext_00807598,this->field_0DBF[param_1],
                 (char)*(undefined2 *)(this->field_09C0[param_1 + 2] + 0x23),param_2,param_3,5,5,1);
    st::fn_00405E2F((param_1 != 0) + CASE_B6);
  }
  return;
}

// 0052B330 CPanelTy::sub_0052B330
#line 4 "decomp/ST.exe/functions/0052B330/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] boolean_return_domain.
   Evidence: all explicit return values are constants in {0,1}: [0, 0, 0, 0, 1, 0]

   [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

bool __thiscall st::fn_0052B330(CPanelTy *this)

{
  bool bVar1;

  bVar1 = true;
  if (this->field_0DC7 != '\x01') {
    if (this->field_0DC7 != '\x02') {
      return false;
    }
    if (0x13 < this->field_0DC8) {
      return false;
    }
    this->field_0DC8 = this->field_0DC8 + 1;
    return false;
  }
  this->field_0DC8 = this->field_0DC8 + 1;
  if (((this->field_0DCD == '\0') || (this->field_0DCD == '\x01')) &&
     (this->field_0DD6 != this->field_0DCE)) {
    bVar1 = false;
    this->field_0DD6 = this->field_0DD6 + this->field_0DDE;
    if (this->field_0DE6 != _DAT_0079034c) {
      this->field_0DDE = this->field_0DE6 + this->field_0DDE;
    }
    if (this->field_0DDE <= _DAT_0079034c) {
      if (this->field_0DD6 < this->field_0DCE) {
        this->field_0DD6 = this->field_0DCE;
        goto LAB_0052b416;
      }
    }
    else if (this->field_0DCE < this->field_0DD6) {
      this->field_0DD6 = this->field_0DCE;
LAB_0052b416:
      this->field_0DCD = 2;
      bVar1 = true;
    }
  }
  if (((this->field_0DCD == '\0') || (this->field_0DCD == '\x02')) &&
     (this->field_0DDA != this->field_0DD2)) {
    this->field_0DDA = this->field_0DDA + this->field_0DE2;
    if (this->field_0DEA != _DAT_0079034c) {
      this->field_0DE2 = this->field_0DEA + this->field_0DE2;
    }
    if (this->field_0DE2 <= _DAT_0079034c) {
      if (this->field_0DD2 <= this->field_0DDA) goto cf_common_exit_0052B581;
      this->field_0DDA = this->field_0DD2;
    }
    else {
      if (this->field_0DDA <= this->field_0DD2) goto cf_common_exit_0052B581;
      this->field_0DDA = this->field_0DD2;
    }
    this->field_0DCD = 1;
    if (this->field_0DD6 != this->field_0DCE) {
cf_common_exit_0052B581:
      if (this->field_0DB3 == nullptr) {
        return false;
      }
      st::fn_006E6540((int)this->field_0DB3,this->field_0DD6,this->field_0DDA,-1);
      return true;
    }
  }
  else if (!bVar1) goto cf_common_exit_0052B581;
  this->field_0DC7 = 2;
  if (this->field_0DB3 != nullptr) {
    st::fn_006E6580(g_sT3DSMAPContext_00807598,this->field_0DB3);
  }
  this->field_0DB3 = nullptr;
  this->field_0DC8 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006E65C0(g_sT3DSMAPContext_00807598,this->field_0DBF[(byte)this->field_0DCC],
               (char)*(undefined2 *)(this->field_09C0[(byte)this->field_0DCC + 2] + 0x23),
               this->field_0DD6,this->field_0DDA,5,5,1);
  st::fn_00405E2F((this->field_0DCC != '\0') + CASE_B6);
  return false;
}

