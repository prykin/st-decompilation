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
  uint local_9c [19];
  byte local_50 [16];
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_30 [4];
  uint local_20;
  undefined4 *local_1c;
  ushort local_18;
  uint local_10;
  int local_c;
  uint local_8;

  local_10 = (uint)(param_1 == '\0');
  iVar6 = *(int *)((int)this->field_0308 + local_10 * 4 + -10);
  if (iVar6 != 0) {
    local_40 = 0x5b;
    st::fn_006E5970(reinterpret_cast<SystemClassTy *>(this->field_000C),2,iVar6,(int)local_50);
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
                    (reinterpret_cast<SystemClassTy *>(this->field_000C),2,*(int *)(iVar6 + uVar4 * 4),(int)local_30);
          local_20 = 0x51;
          iVar6 = *(int *)(local_c + uVar4 * 4);
        }
        local_18 = 1;
        st::fn_006E5970(reinterpret_cast<SystemClassTy *>(this->field_000C),2,iVar6,(int)local_30);
        bVar3 = (char)local_8 + 1;
        local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(bVar3));
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
  CPanelTy_field_0B99State *pCVar4;

  if (param_2 < 6) {
    pCVar4 = &this->field_0B99;
    if (param_1 == 0) {
      pCVar4 = reinterpret_cast<CPanelTy_field_0B99State *>(&this->field_0BF5);
    }
    uVar2 = (uint)param_2;
    iVar1 = uVar2 + (uint)(param_1 == 0) * 6;
    (&this->field_0x780)[iVar1 * 0x27] = 1;

    iVar3 = st::fn_00401A78(*(Global_sub_00525390_param_1Enum *)(uVar2 + 9 + (int)pCVar4),*pCVar4
                              );
    *(int *)(&this->field_0x781 + iVar1 * 0x27) = iVar3;

    iVar3 = st::fn_0040371F(*(Global_sub_005272B0_param_1Enum *)(uVar2 + 9 + (int)pCVar4));
    *(int *)(&this->field_0x789 + iVar1 * 0x27) = iVar3;
    (&this->field_0x78d)[iVar1 * 0x27] = 3;
  }
  return;
}

// 004F1890 CPanelTy::sub_004F1890
#line 4 "decomp/ST.exe/functions/004F1890/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=7; incoming_this_accesses=0;
   incoming_edx_uses=2; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=4; owner_evidence_coverage=adequate */

void __thiscall st::fn_004F1890(CPanelTy *this,byte param_1)

{
  int iVar1;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar2;

  if (DAT_0080874e == '\x03') {
    iVar1 = (-(uint)(param_1 != 0) & 0xfffffffd) + 5;
  }
  else {
    iVar1 = (param_1 != 0) + 2;
  }
  /* ST_CALLSITE[004F18DB]: CALL 0x0070b650; direct=0070B650 FUN_0070b650; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/short;/int */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pRVar2 = st::pointer_boundary_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(st::fn_0070B650(*(short **)((int)this->field_0308 + (uint)param_1 * 4 + -0x26),
                        (uint)*(byte *)((int)this->field_0308 + (param_1 - 0x1e))));
  /* ST_CALLSITE[004F1905]: CALL 0x00403229; direct=00403229 DibPut */
  st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this->field_0148[(-(uint)(param_1 != 0) & 8) + 0xe]),iVar1,
         (DAT_0080874e == '\x03') + 6,'\x06',pRVar2);
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
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar1;

  /* ST_CALLSITE[004F1963]: CALL 0x0070b650; direct=0070B650 FUN_0070b650; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/short;/int */
  pRVar1 = st::pointer_boundary_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(st::fn_0070B650(this->field_025B,(uint)(byte)this->field_025F));
  /* ST_CALLSITE[004F1976]: CALL 0x00403229; direct=00403229 DibPut */
  st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this->field_01B4),0xb,9,'\x06',pRVar1);

  st::fn_006B3640
            (reinterpret_cast<int *>(g_ddxContext_008075A8),this->field_017C,0xffffffff,this->field_010C,
             this->field_0110);
  return;
}

// 004F1C80 CPanelTy::sub_004F1C80
#line 4 "decomp/ST.exe/functions/004F1C80/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=4; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall st::fn_004F1C80(CPanelTy *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar4;

  uVar2 = param_2;
  uVar1 = param_1;

  iVar3 = st::fn_004058F3((char)param_1,(Global_sub_004F19D0_param_2Enum)param_2,&param_1,
                             &param_2);
  if (iVar3 != 0) {
    iVar3 = (uVar2 & 0xff) + (uVar1 & 0xff) * 6;
    /* ST_CALLSITE[004F1CC7]: CALL 0x0070b650; direct=0070B650 FUN_0070b650; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/short;/int */
    pRVar4 = st::pointer_boundary_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(st::fn_0070B650((short *)(&this->field_0D0B)[iVar3],(uint)(byte)(&this->field_0D3B)[iVar3]
                         ));
    /* ST_CALLSITE[004F1CE2]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229(*(RecoveredSourceFamily_dibcopy **)((int)this + (0x6a - (uVar1 & 0xff)) * 4),param_1,
           param_2,'\x06',pRVar4);
  }
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

void __thiscall
st::fn_004F4570
          (CPanelTy *this,char param_1,RecoveredRecord_004F4570_07A3F315 *param_2,
          RecoveredRecord_004F4570_D72BA975 *param_3)

{
  uint uVar1;
  short sVar2;
  char *pcVar3;
  int local_8;

  sVar2 = -1;
  pcVar3 = &param_2[1].field_0007;
  local_8 = 6;
  do {
    if ((pcVar3[-6] != 0) &&
       ((sVar2 = sVar2 + 1, *pcVar3 != pcVar3[(int)param_3 - (int)param_2] ||
        (param_2->field_0007 != param_3->field_0007)))) {
      this->field_0028 = 0x54;
      if (param_2->field_0007 == '\0') {
        uVar1 = 0;
      }
      else {
        uVar1 = (uint)(byte)*pcVar3;
      }
      *(uint *)&this->field_0x2c = uVar1;
      this->field_0030 = (int)sVar2;
      st::fn_006E6080(this,2,*(undefined4 *)((int)this->field_0308 + (uint)(param_1 == '\0') * 4 + -10)
                   ,reinterpret_cast<undefined4 *>(&this->field_0x18));
    }
    pcVar3 = pcVar3 + 1;
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

  pcVar1 = (char *)&this->field_0B63;
  if (param_1 == '\0') {
    pcVar1 = (char *)&this->field_0C51;
  }
  if ((((*pcVar1 != '\0') && (DAT_00808784 == 0)) && (DAT_00808788 == 0)) &&
     ((DAT_0080878c == 0 && (DAT_00808790 == 0)))) {
    /* ST_CALLSITE[004F8073]: CALL 0x00401875; direct=00401875 STAllPlayersC::SetActivePanel */
    st::fn_00401875(g_allPlayers_007FA174,(uint)(param_1 == '\0'),0,param_2);
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
    /* ST_CALLSITE[004FA3C8]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
    st::fn_00401E15(this,'\0',1);
    return;
  }
  if ((this->field_0C51 != '\0') && (this->field_0C52 != '\0')) {
    /* ST_CALLSITE[004FA3E6]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
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
  if ((((param_1 == 0) || (CASE_5 < param_1)) && (param_1 != CASE_E)) && (param_1 != CASE_F)) {
    if (param_1 == CASE_6) {
      if (g_researchPanel_008016E8 != nullptr) {
        /* ST_CALLSITE[004FA8C8]: CALL dword ptr [EDX + 0x1c]; [STIndirectCallsiteApplier] exact slot 0x1C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
        (*STField<code *>(g_researchPanel_008016E8->field_0000,0x001C))();
        return;
      }
    }
    else if (param_1 == CASE_7) {
      if (g_bldBoatPanel_0080167C != nullptr) {
        /* ST_CALLSITE[004FA8E4]: CALL dword ptr [EAX + 0x1c]; [STIndirectCallsiteApplier] exact slot 0x1C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
        (*STField<code *>(g_bldBoatPanel_0080167C->field_0000,0x001C))();
        return;
      }
    }
    else if (param_1 == 8) {
      if (g_bldObjPanel_00801684 != nullptr) {
        /* ST_CALLSITE[004FA900]: CALL dword ptr [EDX + 0x1c]; [STIndirectCallsiteApplier] exact slot 0x1C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
        (*STField<code *>(g_bldObjPanel_00801684->field_0000,0x001C))();
        return;
      }
    }
    else if (param_1 == 9) {
      if (g_infocPanel_00801698 != nullptr) {
        /* ST_CALLSITE[004FA91C]: CALL dword ptr [EAX + 0x20] */
        g_infocPanel_00801698->Update();
        return;
      }
    }
    else if (param_1 == 10) {
      if (g_tradePanel_00802A44 != nullptr) {
        /* ST_CALLSITE[004FA938]: CALL dword ptr [EDX + 0x20]; [STIndirectCallsiteApplier] exact slot 0x20; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)&g_tradePanel_00802A44->field_0000[1].field_0xc)();
        return;
      }
    }
    else if (param_1 == 0xb) {
      if (g_behPanel_00801678 != nullptr) {
        /* ST_CALLSITE[004FA954]: CALL dword ptr [EAX + 0x20] */
        g_behPanel_00801678->Update();
        return;
      }
    }
    else if (param_1 == 0xc) {
      if (g_bldLabPanel_00801680 != nullptr) {
        /* ST_CALLSITE[004FA970]: CALL dword ptr [EDX + 0x1c]; [STIndirectCallsiteApplier] exact slot 0x1C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
        (*STField<code *>(g_bldLabPanel_00801680->field_0000,0x001C))();
        return;
      }
    }
    else if (param_1 == 0x10) {
      if (g_upgPanel_00802A48 != nullptr) {
        /* ST_CALLSITE[004FA98C]: CALL dword ptr [EAX + 0x20] */
        g_upgPanel_00802A48->Update();
        return;
      }
    }
    else if (param_1 == 0x11) {
      if (g_frmPanel_0080168C != nullptr) {
        /* ST_CALLSITE[004FA9A8]: CALL dword ptr [EDX + 0x20] */
        g_frmPanel_0080168C->Update();
        return;
      }
    }
    else if (param_1 == 0x12) {
      if (g_sAMPanel_008016EC != nullptr) {
        /* ST_CALLSITE[004FA9C4]: CALL dword ptr [EAX + 0x20] */
        g_sAMPanel_008016EC->Update();
        return;
      }
    }
    else if ((param_1 == 0x13) && (g_helpPanel_00801690 != nullptr)) {
      /* ST_CALLSITE[004FA9DC]: CALL 0x00402d38; direct=00402D38 HelpPanelTy::sub_00515180 */
      st::fn_00402D38(g_helpPanel_00801690,'\x06');
      /* ST_CALLSITE[004FA9E9]: CALL 0x00402d38; direct=00402D38 HelpPanelTy::sub_00515180 */
      st::fn_00402D38(g_helpPanel_00801690,'\x05');
      return;
    }
  }
  else {
    switch(param_1) {
    case CASE_1:
      /* ST_CALLSITE[004FAA17]: CALL 0x0040206d; direct=0040206D CPanelTy::Update1Panel */
      st::fn_0040206D(this);
      return;
    case CASE_2:
      st::fn_004044A3();
      return;
    case CASE_4:
      st::fn_00401889();
      return;
    case CASE_5:
      /* ST_CALLSITE[004FAA3B]: CALL 0x004025cc; direct=004025CC CPanelTy::Update5Panel */
      st::fn_004025CC(this);
      return;
    case CASE_E:
    case CASE_F:
      /* ST_CALLSITE[004FAA4A]: CALL 0x0040415b; direct=0040415B CPanelTy::UpdateStackPanel */
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
      return (uint)(g_researchPanel_008016E8->field_0172 != CASE_2);
    }
  case CASE_7:
    if (g_bldBoatPanel_0080167C != nullptr) {
      return (uint)(g_bldBoatPanel_0080167C->field_0172 != CASE_2);
    }
  case CASE_8:
    if (g_bldObjPanel_00801684 != nullptr) {
      return (uint)(g_bldObjPanel_00801684->field_0172 != CASE_2);
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
      return (uint)(g_bldLabPanel_00801680->field_0172 != CASE_2);
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
  byte *puVar1;
  int iVar2;

  iVar2 = 6;
  puVar1 = &this->field_0BA8;
  do {
    puVar1[0x5c] = 0xff;
    *puVar1 = 0xff;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  /* ST_CALLSITE[004FAD3D]: CALL 0x00405d03; direct=00405D03 CPanelTy::sub_004FA870 */
  st::fn_00405D03(this,CASE_2);
  /* ST_CALLSITE[004FAD46]: CALL 0x00405d03; direct=00405D03 CPanelTy::sub_004FA870 */
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
   004FAD60 @ 00547B96; unproven partial register write at 00547B8D

   [STSwitchEnumApplier] Switch target field_023F uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_023FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

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
                         reinterpret_cast<int *>(&param_1),reinterpret_cast<int *>(&param_2));
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
  alignas(4) byte st_stack_frame[48];

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
                         reinterpret_cast<int *>(&param_1),&local_8);
      if (iVar4 != 0) {
        local_10 = local_8;
        local_14 = param_1;
        /* ST_CALLSITE[004FAF5B]: CALL 0x0040512d; direct=0040512D STAllPlayersC::GetActiveCenter */
        iVar4 = st::fn_0040512D
                          (g_allPlayers_007FA174,nullptr,nullptr,reinterpret_cast<undefined2 *>((st_stack_frame + 42)));
        if (-1 < iVar4) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_c = (int)in_stack_0000000a;
          if (local_c < 0) {
            local_c = 2;
          }
          /* ST_CALLSITE[004FAF86]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
          st::fn_00403C33
                    (g_playSystem_00802A38,(undefined4 *)0x14,reinterpret_cast<uint *>(&local_14),0,0xffffffff);
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
  int *piVar1;
  BITMAPINFO *pBVar2;

  piVar1 = &this->field_0434;
  memset(piVar1, 0, 0x118); /* compiler bulk-zero initialization */
  if (this->field_0B9E == CASE_1) {
    if (DAT_0080874e == '\x03') {
      if (this->field_0B99 == CASE_1A) {
        *piVar1 = this->field_0048 + 0x3c;
        this->field_0438 = this->field_00A0 + 0x84;
        this->field_043C = 0x55;
        this->field_0440 = 0xe;
        this->field_044C = 0x2ef3;
      }
      this->field_0450 = this->field_0048 + 4;
      this->field_0454 = this->field_00A0 + 8;
      this->field_0458 = 100;
      this->field_045C = 0x3c;
      /* ST_CALLSITE[00501ABB]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
      pBVar2 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this->field_077C),0);
      this->field_0460 = reinterpret_cast<tagBITMAPINFO *>(pBVar2);
      this->field_0464 = this->field_0458;
      this->field_0468 = 0x4e87;
      this->field_046C = this->field_0048 + 2;
      this->field_0470 = this->field_00A0 + 6;
      this->field_0474 = 0x20;
      this->field_0478 = 0x35;
      /* ST_CALLSITE[00501B14]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
      pBVar2 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this->field_077C),2);
      this->field_047C = reinterpret_cast<tagBITMAPINFO *>(pBVar2);
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
      pBVar2 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this->field_02B2),0);
      this->field_043C = (pBVar2->bmiHeader).biWidth;
      pBVar2 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this->field_02B2),0);
      this->field_0440 = (pBVar2->bmiHeader).biHeight;
      *piVar1 = (this->field_018C->field_0004 - this->field_043C) / 2 + this->field_0048;
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

// 00501D00 CPanelTy::sub_00501D00
#line 4 "decomp/ST.exe/functions/00501D00/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=4; incoming_this_accesses=0;
   incoming_edx_uses=2; incoming_stack_parameter_uses=19; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
st::fn_00501D00
          (CPanelTy *this,RecoveredRecordView_00501D00_08D99E75 *param_1,
          RecoveredRecord_CPanelTy_00501D00 *param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  short *psVar5;
  uint *puVar6;
  int iVar7;
  short *psVar8;
  int *piVar9;
  bool bVar10;
  char local_5;

  cVar3 = '\0';
  local_5 = '\0';
  pcVar4 = (char *)&param_1->field_0x9;
  iVar7 = 6;
  do {
    if (*pcVar4 != '\0') {
      cVar3 = cVar3 + '\x01';
    }
    pcVar4 = pcVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 6;
  pcVar4 = (char *)&param_2->field_0x9;
  do {
    if (*pcVar4 != '\0') {
      local_5 = local_5 + '\x01';
    }
    pcVar4 = pcVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (cVar3 != local_5) {
    if (DAT_0080874e != '\x03') {
      /* ST_CALLSITE[00501D6C]: CALL 0x0040556f; direct=0040556F CPanelTy::SetControlBoat */
      st::fn_0040556F(this);
      return;
    }
    /* ST_CALLSITE[00501D5E]: CALL 0x0040296e; direct=0040296E CPanelTy::SetControlBoatSI */
    st::fn_0040296E(this);
    return;
  }
  iVar7 = 3;
  bVar10 = true;
  psVar5 = reinterpret_cast<short *>(&param_1->field_0x9);
  psVar8 = reinterpret_cast<short *>(&param_2->field_0x9);
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    bVar10 = *psVar5 == *psVar8;
    psVar5 = psVar5 + 1;
    psVar8 = psVar8 + 1;
  } while (bVar10);
  if (bVar10) {
    if (*(int *)param_1 != *(int *)param_2) {
      this->field_0028 = 5;
      st::fn_006E6080(this,2,this->field_02FE,reinterpret_cast<undefined4 *>(&this->field_0x18));
      bVar1 = 0;
      pcVar4 = (char *)&param_1->field_0x9;
      do {
        if (*pcVar4 != '\0') {
          /* ST_CALLSITE[00501E1E]: CALL 0x0040313e; direct=0040313E CPanelTy::sub_004F17D0 */
          st::fn_0040313E(this,1,bVar1);
        }
        bVar1 = bVar1 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar1 < 6);
      /* ST_CALLSITE[00501E34]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
      st::fn_00404BA1(this,'\x01');
      /* ST_CALLSITE[00501E3F]: CALL 0x004040fc; direct=004040FC CursorClassTy::sub_0054A8D0 */
      st::fn_004040FC(g_cursorClass_00802A30);
    }
    if (param_1->field_0x8 != param_2->field_0x8) {
      /* ST_CALLSITE[00501E56]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
      st::fn_00404BA1(this,'\x01');
    }
  }
  else {
    this->field_0028 = 5;
    st::fn_006E6080(this,2,this->field_02FE,reinterpret_cast<undefined4 *>(&this->field_0x18));
    bVar1 = 0;
    pcVar4 = (char *)&param_1->field_0x9;
    do {
      if (*pcVar4 != '\0') {
        /* ST_CALLSITE[00501DBB]: CALL 0x0040313e; direct=0040313E CPanelTy::sub_004F17D0 */
        st::fn_0040313E(this,1,bVar1);
      }
      bVar1 = bVar1 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar1 < 6);
    /* ST_CALLSITE[00501DD1]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
    st::fn_00404BA1(this,'\x01');
    /* ST_CALLSITE[00501DDC]: CALL 0x004040fc; direct=004040FC CursorClassTy::sub_0054A8D0 */
    st::fn_004040FC(g_cursorClass_00802A30);
  }
  iVar7 = 3;
  bVar10 = true;
  psVar5 = reinterpret_cast<short *>(&param_1->field_0xf);
  psVar8 = reinterpret_cast<short *>(&param_2->field_0xf);
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    bVar10 = *psVar5 == *psVar8;
    psVar5 = psVar5 + 1;
    psVar8 = psVar8 + 1;
  } while (bVar10);
  if ((!bVar10) || (param_1->field_0007 != param_2->field_0007)) {
    /* ST_CALLSITE[00501E89]: CALL 0x00404f89; direct=00404F89 CPanelTy::sub_004F4570 */
    st::fn_00404F89(this,'\x01',reinterpret_cast<RecoveredRecord_004F4570_07A3F315 *>(param_1),
                 reinterpret_cast<RecoveredRecord_004F4570_D72BA975 *>(param_2));
  }
  if (((param_1->field_0015 != param_2->field_0015) || (param_1->field_0007 != param_2->field_0007))
     && (this->field_09C0[0] != 0)) {
    this->field_0028 = 0x20;
    if (param_1->field_0007 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)(byte)param_1->field_0015;
    }
    *(uint *)&this->field_0x2c = uVar2;
    st::fn_006E6080(this,2,this->field_09C0[0],reinterpret_cast<undefined4 *>(&this->field_0x18));
  }
  piVar9 = &param_1->field_0036;
  if ((param_1->field_0036 != param_2->field_0036) || (param_1->field_0007 != param_2->field_0007))
  {
    puVar6 = this->field_0960;
    uint param_2_after_write = 0x4; /* compiler stack-slot lifetime split */
    do {
      if (*puVar6 != 0) {
        this->field_0028 = 0x20;
        if (param_1->field_0007 == '\0') {
          uVar2 = 0;
        }
        else {
          uVar2 = (uint)(byte)*piVar9;
        }
        *(uint *)&this->field_0x2c = uVar2;
        st::fn_006E6080(this,2,*puVar6,reinterpret_cast<undefined4 *>(&this->field_0x18));
      }
      puVar6 = puVar6 + 1;
      piVar9 = (int *)((int)piVar9 + 1);
      param_2_after_write = param_2_after_write - 1;
    } while (param_2_after_write != 0);
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
      /* ST_CALLSITE[005060A7]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
      pBVar1 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this->field_077C),1);
      this->field_0578 = reinterpret_cast<tagBITMAPINFO *>(pBVar1);
      this->field_057C = this->field_0570;
      this->field_0580 = 0x4e87;
      this->field_0584 = this->field_0050 + 199;
      this->field_0588 = this->field_00A8 + 6;
      this->field_058C = 0x20;
      this->field_0590 = 0x35;
      /* ST_CALLSITE[00506103]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
      pBVar1 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this->field_077C),3);
      this->field_0594 = reinterpret_cast<tagBITMAPINFO *>(pBVar1);
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
  RecoveredRecordView_006E6540_42B9D3AB *pRVar6;
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
    iVar5 = (short)lVar9;
  }
  bVar1 = param_3 < _DAT_0079034c;
  this->field_0237 = iVar5;
  if (bVar1) {
    lVar9 = st::fn_0072E288();
    iVar5 = (short)lVar9 + -1;
  }
  else {
    lVar9 = st::fn_0072E288();
    iVar5 = (short)lVar9;
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
      pRVar6 = st::fn_006E6460(g_sT3DSMAPContext_00807598,st::machine_word_boundary_cast<undefined4>(this->field_0DBF + (param_1 - 2)),1,0x97,0x96,
                            0,1);
      iVar5 = local_30[iVar8 * 2];
      this->field_0DB3 = pRVar6;
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
      st::fn_006E6540(pRVar6,local_8,fVar2,-1);
      st::fn_00405E2F((this->field_0DCC != '\0') + CASE_B8);
      return;
    }
  }
  else {

    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006E65C0
              (g_sT3DSMAPContext_00807598,this->field_0DBF[param_1],
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
      st::fn_006E6540(static_cast<RecoveredRecordView_006E6540_42B9D3AB *>(this->field_0DB3),this->field_0DD6,this->field_0DDA,-1);
      return true;
    }
  }
  else if (!bVar1) goto cf_common_exit_0052B581;
  this->field_0DC7 = 2;
  if (this->field_0DB3 != nullptr) {
    st::fn_006E6580(g_sT3DSMAPContext_00807598,static_cast<RecoveredRecord_006E6580_EB58C315 *>(this->field_0DB3));
  }
  this->field_0DB3 = nullptr;
  this->field_0DC8 = 0;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006E65C0
            (g_sT3DSMAPContext_00807598,this->field_0DBF[(byte)this->field_0DCC],
             (char)*(undefined2 *)(this->field_09C0[(byte)this->field_0DCC + 2] + 0x23),
             this->field_0DD6,this->field_0DDA,5,5,1);
  st::fn_00405E2F((this->field_0DCC != '\0') + CASE_B6);
  return false;
}
