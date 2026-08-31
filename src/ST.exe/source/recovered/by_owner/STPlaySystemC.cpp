#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STPlaySystemC.cpp

// 0054CB40 STPlaySystemC::STPlaySystemC
#line 4 "decomp/ST.exe/functions/0054CB40/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0054C740 -> 0054CB40 @ 0054C78B

   [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079AE38 (store 0054CB53)
   Evidence: final_vptr=0079AE38; returns_this=true; calls_before=1; field_writes_after=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; table_confidence=high */

STPlaySystemC * __thiscall st::fn_0054CB40(STPlaySystemC *this,AppClassTy *param_1)

{
  st::fn_006E6100(reinterpret_cast<SystemWithNamedObjClassTy *>(this),param_1,4);
  this->vtable = &st_global_0079AE38;
  this->field_0034 = 0;
  this->field_00E4 = 0;
  this->field_0028 = 0;
  this->field_002C = 0;
  this->field_0024 = nullptr;
  this->field_00F4 = 0;
  this->field_00F0 = 1;
  return this;
}

// 0054CF00 STPlaySystemC::vfunc_8
#line 4 "decomp/ST.exe/functions/0054CF00/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079AE38
   Entries: 004021DA
   Slots: 0x8
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=4/248; unique_owner_for_target */

int __thiscall
st::fn_0054CF00
          (STPlaySystemC *this,int param_1,undefined4 *param_2,int *param_3,undefined4 param_4,
          int param_5)

{
  int iVar1;

  iVar1 = st::fn_006E6170
                    (reinterpret_cast<SystemWithNamedObjClassTy *>(this),param_1,param_2,&param_5,param_4,param_5);
  if (param_3 != nullptr) {
    *param_3 = param_5;
  }
  if (iVar1 == 0) {
    st::fn_0040129E();
  }
  return iVar1;
}

// 0054CF70 STPlaySystemC::sub_0054CF70
#line 4 "decomp/ST.exe/functions/0054CF70/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=14, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=14; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=8; owner_evidence_coverage=adequate */

void __thiscall st::fn_0054CF70(STPlaySystemC *this,uint param_1)

{
  st::fn_00401AD7();
  st::fn_006E56B0(reinterpret_cast<StartSystemTy *>(this),param_1);
  return;
}

// 0054EBB0 STPlaySystemC::sub_0054EBB0
#line 4 "decomp/ST.exe/functions/0054EBB0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=2; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /int; no intervening CALL or EAX/AX/AL/AH definition exists; machine CFG audit: used=3,
   ignored=0, unknown=0 */

int __thiscall st::fn_0054EBB0(STPlaySystemC *this,char *param_1,uint param_2)

{
  DWORD DVar1;
  int iVar2;

  *(uint *)param_1 = this->field_0041;
  this->field_0041 = this->field_0041 + 1;
  /* ST_CALLSITE[0054EBCC]: CALL 0x004045fc; direct=004045FC STPlaySystemC::AddToRep */
  st::fn_004045FC(this,reinterpret_cast<undefined4 *>(param_1),param_2);
  /* ST_CALLSITE[0054EBD1]: CALL dword ptr [0x0085bedc] */
  DVar1 = st::external_000000DA();
  this->field_007F = DVar1;
  iVar2 = st::fn_00715360(g_int_00811764,0,'1',param_1,param_2,1,*(undefined4 *)param_1);
  return iVar2;
}

// 0054EDF0 STPlaySystemC::sub_0054EDF0
#line 4 "decomp/ST.exe/functions/0054EDF0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00503BB0 -> 0054EDF0 @ 00503E68; address of zeroed full register at 00503E53 | 0052F2B0
   -> 0054EDF0 @ 0052F54F; address of zeroed full register at 0052F51C | 0053CA80 -> 0054EDF0 @
   0053CC2B; address of zeroed full register at 0053CBFD

   [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=44; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=13; incoming_this_forward_calls=1;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=18;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

void __thiscall
st::fn_0054EDF0
          (STPlaySystemC *this,undefined4 *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  char cVar2;

  cVar2 = (char)param_1;
  if ((((*(char *)(g_bulkInitializedRecords_008087C7 + DAT_0080874d) == '\0') &&
       (DAT_0080874f == '\0')) || (cVar2 == '\x05')) && (DAT_008087a5 == 0)) {
    if (param_3 != 0) {
      /* ST_CALLSITE[0054EE42]: CALL 0x0040422d; direct=0040422D STPlaySystemC::SetCtrlCmd */
      st::fn_0040422D(this,DAT_0080874d,0,cVar2,param_2,param_4,nullptr,0);
      return;
    }
    undefined4 * param_1_after_write = nullptr; /* compiler stack-slot lifetime split */
    /* ST_CALLSITE[0054EE62]: CALL 0x00401fff; direct=00401FFF STAllPlayersC::PrepareToCmd */
    uVar1 = st::fn_00401FFF(g_allPlayers_007FA174,reinterpret_cast<undefined4 *>(&param_1_after_write),&param_3);
    if (uVar1 != 0xffffffff) {
      /* ST_CALLSITE[0054EE87]: CALL 0x0040422d; direct=0040422D STPlaySystemC::SetCtrlCmd */
      st::fn_0040422D(this,DAT_0080874d,uVar1,cVar2,param_2,param_4,param_1_after_write,param_3);
    }
    if (param_1_after_write != nullptr) {
      st::fn_006AB060(&param_1_after_write);
    }
  }
  return;
}

// 00550190 STPlaySystemC::sub_00550190
#line 4 "decomp/ST.exe/functions/00550190/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00550190(STPlaySystemC *this)

{
  uint uVar1;

  uVar1 = this->field_00E4 + 1;
  this->field_0028 = 1;
  this->field_00E4 = uVar1;
  if ((uVar1 - this->field_0034 == 6000) && (g_optPanel_008016DC != nullptr)) {
    st::fn_0040210D(reinterpret_cast<RecoveredRecord_STPlaySystemC_00533B80 *>(g_optPanel_008016DC));
    return;
  }
  return;
}

// 00550430 STPlaySystemC::sub_00550430
#line 4 "decomp/ST.exe/functions/00550430/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall st::fn_00550430(STPlaySystemC *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;

  uVar1 = 0;
  if (DAT_00808aaf != 0) {
    pcVar3 = &CHAR_00h_00808ab0;
    while (*(int *)(pcVar3 + 0x40) != param_1) {
      uVar1 = uVar1 + 1;
      pcVar3 = pcVar3 + 0x9c;
      if (DAT_00808aaf <= uVar1) {
        return;
      }
    }

    iVar2 = st::fn_006E51B0(reinterpret_cast<STAppC *>(&DAT_00807620));
    *(int *)(pcVar3 + 0x48) = iVar2;
    if (((param_2 != 0) && (DAT_00808788 != 0)) && (this->field_00F4 == param_1)) {
      this->field_00F4 = 0;
      DAT_00808788 = 0;
      this->field_00D0 = 0xa106;

      st::fn_006E3DD0
                (reinterpret_cast<AppClassTy *>(&DAT_00807620),3,0x101,
                 reinterpret_cast<RecoveredRecord_006E3DB0_0F66DDCF *>(&this->field_0xc0));
    }
  }
  return;
}

// 005504F0 STPlaySystemC::sub_005504F0
#line 4 "decomp/ST.exe/functions/005504F0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=5; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
st::fn_005504F0(STPlaySystemC *this,int param_1,UINT param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  CHAR local_10c [260];
  STPlaySystemC *local_8;

  uVar2 = 0;
  local_8 = this;
  if (DAT_00808aaf != 0) {
    pcVar3 = (char *)&DAT_00808af6;
    do {
      if (((*(int *)(pcVar3 + -6) == param_1) && (*pcVar3 != '\0')) && (param_2 != 0)) {
        pcVar1 = st::fn_006B0140(param_2,g_hINSTANCE_00807618);
        /* ST_CALLSITE[00550543]: CALL dword ptr [0x0085bde8] */
        st::external_00000080(reinterpret_cast<LPSTR>(local_10c),st::mutable_c_string("%s %s"),pcVar3 + -0x46,pcVar1);
        if (g_popUp_008016D8 != nullptr) {
          /* ST_CALLSITE[0055055F]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
          st::fn_004014D8(g_popUp_008016D8,reinterpret_cast<char *>(local_10c),8);
        }
      }
      uVar2 = uVar2 + 1;
      pcVar3 = pcVar3 + 0x9c;
    } while (uVar2 < DAT_00808aaf);
  }
  if (param_3 != 0) {
    /* ST_CALLSITE[00550587]: CALL 0x00401370; direct=00401370 STPlaySystemC::sub_005508F0 */
    st::fn_00401370(local_8,param_1);
  }
  return;
}

// 005505D0 STPlaySystemC::sub_005505D0
#line 4 "decomp/ST.exe/functions/005505D0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=2; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=9; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005505D0(STPlaySystemC *this,int param_1,int *param_2)

{
  char *pcVar2;
  int iVar3;
  PopUpTy *text;
  int uVar5_mg0;
  char *pcVar1;
  byte bVar4;
  uint uVar5;
  CHAR local_10c [260];
  uint local_8;

  if (param_2 != nullptr) {
    /* ST_CALLSITE[005505F2]: CALL 0x00404863; direct=00404863 thunk_FUN_0054eab0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__thiscall;pointer:/char;pointer:/void;/int;pointer:/undefined4 */
    pcVar2 = st::pointer_boundary_cast<char *>(st::fn_00404863(this,*param_2,&local_8));
    if (pcVar2 == nullptr) {

      st::fn_00715360(g_int_00811764,param_1,'7',nullptr,0,0,0xffffffff);
      /* ST_CALLSITE[0055079F]: CALL 0x00401370; direct=00401370 STPlaySystemC::sub_005508F0 */
      st::fn_00401370(this,param_1);
    }
    else {

      st::fn_00715360(g_int_00811764,param_1,'1',pcVar2,local_8,1,*(undefined4 *)pcVar2);
      if (this->field_00BB < 5) {

        uVar5_mg0 = st::fn_006E51B0(reinterpret_cast<STAppC *>(&DAT_00807620));
        (&this->field_00A7)[this->field_00BB] = uVar5_mg0;
        this->field_00BB = this->field_00BB + 1;
      }
      else {
        this->field_00A7 = this->field_00AB;
        this->field_00AB = this->field_00AF;
        this->field_00AF = this->field_00B3;
        this->field_00B3 = this->field_00B7;

        iVar3 = st::fn_006E51B0(reinterpret_cast<STAppC *>(&DAT_00807620));
        this->field_00B7 = iVar3;
        if (DAT_0080735e == '\0') {
          return;
        }
        if ((iVar3 - this->field_00A7) / 5 < 0x7d1) {
          if (g_popUp_008016D8 != nullptr) {
            uVar5 = 9;
            /* ST_CALLSITE[0055069B]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/PopUpTy; signature=__stdcall;pointer:/PopUpTy;/WinDef.h/UINT;/WinDef.h/HINSTANCE */
            text = st::pointer_boundary_cast<PopUpTy *>(st::fn_006B0140(17000,g_hINSTANCE_00807618));
            /* ST_CALLSITE[005506A7]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
            st::fn_004014D8(g_popUp_008016D8,reinterpret_cast<char *>(text),uVar5);
          }
          this->field_00BB = 0;
        }
      }
      if (DAT_0080735e != '\0') {
        bVar4 = 0;
        param_2 = nullptr;
        if (DAT_00808aaf != 0) {
          do {
            pcVar2 = &CHAR_00h_00808ab0 + (int)param_2 * 0x9c;
            if (((&DAT_00808af0)[(int)param_2 * 0x27] == param_1) &&
               ((&DAT_00808af6)[(int)param_2 * 0x9c] != '\0')) {
              pcVar1 = st::fn_006B0140(0x426d,g_hINSTANCE_00807618);
              /* ST_CALLSITE[0055074C]: CALL ESI */
              st::external_00000080(reinterpret_cast<LPSTR>(local_10c),st::mutable_c_string("%s %s"),pcVar1,pcVar2);
              if (g_popUp_008016D8 != nullptr) {
                /* ST_CALLSITE[00550764]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
                st::fn_004014D8(g_popUp_008016D8,reinterpret_cast<char *>(local_10c),8);
              }
            }
            bVar4 = bVar4 + 1;
            param_2 = (int *)(uint)bVar4;
          } while (bVar4 < DAT_00808aaf);
          return;
        }
      }
    }
  }
  return;
}

// 005508F0 STPlaySystemC::sub_005508F0
#line 4 "decomp/ST.exe/functions/005508F0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=3; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

void __thiscall st::fn_005508F0(STPlaySystemC *this,int param_1)

{
  HINSTANCE module;
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  char cVar7;
  uint uVar8;
  char *pcVar9;
  uint *puVar10;
  uint local_1c;
  uint local_18;
  uint local_14;
  STPlaySystemC *local_10;
  uint local_c;
  byte local_5;

  cVar7 = -1;
  uVar3 = (uint)DAT_00808aaf;
  uVar1 = 0;
  local_c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_c)), (uint8_t)(0xff));
  local_5 = 0;
  if (uVar3 != 0) {
    pcVar5 = (char *)&DAT_00808af6;
    do {
      if ((*(int *)(pcVar5 + -6) == param_1) && (*pcVar5 == '\x01')) {
        cVar7 = pcVar5[-2];
        local_c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_c)), (uint8_t)(cVar7));
        break;
      }
      uVar1 = uVar1 + 1;
      pcVar5 = pcVar5 + 0x9c;
    } while (uVar1 < uVar3);
    if (uVar3 != 0) {
      pcVar5 = (char *)&DAT_00808af6;
      uVar1 = uVar3;
      do {
        if ((pcVar5[-2] == cVar7) && (*pcVar5 == '\x01')) {
          local_5 = local_5 + 1;
        }
        pcVar5 = pcVar5 + 0x9c;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  local_10 = this;
  if (((((DAT_0080877e != '\0') && (local_5 < 2)) && (cVar7 != -1)) &&
      ((((char)DAT_008087a0 == '\x04' || ((char)DAT_008087a0 == '\a')) ||
       (((char)DAT_008087a0 == '\x13' ||
        (((char)DAT_008087a0 == '\r' || ((char)DAT_008087a0 == '\x0e')))))))) &&
     (uVar1 = local_c & 0xff, (&DAT_00809950)[uVar1] == '\0')) {
    uVar8 = 0;
    if (uVar3 != 0) {
      pcVar5 = (char *)&DAT_00808af6;
      do {
        module = g_hINSTANCE_00807618;
        if ((*(int *)(pcVar5 + -6) == param_1) && (*pcVar5 == '\x01')) {
          pcVar9 = pcVar5 + -0x46;
          *pcVar5 = '\0';
          pcVar2 = st::fn_006B0140(0x4273,module);
          /* ST_CALLSITE[005509EE]: CALL dword ptr [0x0085bde8] */
          st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s %s"),pcVar2,pcVar9);
          if (g_popUp_008016D8 != nullptr) {
            /* ST_CALLSITE[00550A08]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
            st::fn_004014D8(g_popUp_008016D8,reinterpret_cast<char *>(&DAT_0080f33a),8);
          }
        }
        uVar8 = uVar8 + 1;
        pcVar5 = pcVar5 + 0x9c;
      } while (uVar8 < DAT_00808aaf);
    }
    local_18 = (uint)g_bulkInitializedRecords_008087C7[uVar1].field_0021;
    local_1c = 8;
    local_14 = uVar1;
    /* ST_CALLSITE[00550A45]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
    st::fn_00403C33(local_10,(undefined4 *)0x5,&local_1c,1,0xffffffff);
  }
  if ((&DAT_00809950)[local_c & 0xff] == '\0') {
    uVar1 = 0;
    uVar3 = (uint)DAT_00808aaf;
    if (uVar3 != 0) {
      piVar6 = reinterpret_cast<int *>(&DAT_00808af0);
      while (*piVar6 != param_1) {
        uVar1 = uVar1 + 1;
        piVar6 = piVar6 + 0x27;
        if (uVar3 <= uVar1) {
          return;
        }
      }
      if (uVar1 != uVar3 - 1) {
        pcVar5 = reinterpret_cast<char *>((&DAT_00808b4c + uVar1 * 0x27));
        pcVar9 = &CHAR_00h_00808ab0 + uVar1 * 0x9c;
        for (uVar3 = ((uVar3 - uVar1) + -1) * 0x27 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pcVar9 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
      puVar10 = (undefined4 *)
                ((int)g_bulkInitializedRecords_008087C7 + (uint)DAT_00808aaf * 0x9c + 0x24d);
      for (iVar4 = 0x27; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      DAT_00808aaf = DAT_00808aaf - 1;
      if (g_playPanel_008016E4 != nullptr) {
        /* ST_CALLSITE[00550B06]: CALL 0x00405e07; direct=00405E07 PlayPanelTy::sub_0053A540 */
        st::fn_00405E07(g_playPanel_008016E4);
      }
    }
  }
  return;
}

// 006E57B0 STPlaySystemC::sub_006E57B0
#line 4 "decomp/ST.exe/functions/006E57B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_006E57B0(STPlaySystemC *this,int param_1)

{
  DArrayTy *pDVar1;
  void *pvVar2;
  uint uVar3;
  uint index;
  byte local_24 [16];
  uint local_14;
  pDVar1 = this->field_0010;
  if (pDVar1 != nullptr) {
    local_14 = 3;
    uVar3 = pDVar1->count;
    index = 0;
    if (uVar3 != 0) {
      do {
        if (uVar3 == 0) {
          pvVar2 = nullptr;
        }
        else {
          pvVar2 = pDVar1->data;
        }
        if ((STField<undefined4 *>(pvVar2,4))[1] == param_1) {
          /* ST_CALLSITE[006E57EE]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)*STField<undefined4 *>(pvVar2,4))(local_24);
          st::fn_006B0C70(this->field_0010,index);
        }
        else {
          index = index + 1;
        }
        pDVar1 = this->field_0010;
        uVar3 = pDVar1->count;
      } while (index < uVar3);
    }
  }
  return;
}

// 006E62D0 STPlaySystemC::sub_006E62D0
#line 4 "decomp/ST.exe/functions/006E62D0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=133; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=89;
   incoming_ecx_receiver_callers=2; attributed_named_callers=87; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004732F0 -> 006E62D0 @ 004733E4; STBoatC::LoadObj parameter param_1 | 004749C0 ->
   006E62D0 @ 00474A98; /STBoatC+0x5a2 | 004749C0 -> 006E62D0 @ 00474FD8; /STBoatC+0x5a2 | 004749C0
   -> 006E62D0 @ 004750BA; /STBoatC+0x5a2 | 005EFAE0 -> 006E62D0 @ 005EFB01; FUN_005efae0 parameter
   param_1

   [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=115, ignored=20, unknown=0 */

int __thiscall
st::fn_006E62D0
          (STPlaySystemC *this,RecoveredRecordView_005EFAE0_855D930D *param_1,int *param_2)

{
  DArrayTy *pDVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;

  this->field_0010->iteratorIndex = 0;
  while( true ) {
    pDVar1 = this->field_0010;
    uVar2 = pDVar1->iteratorIndex;
    if (pDVar1->count <= uVar2) {
      return -4;
    }
    pvVar4 = DArrayAt<void>(pDVar1, uVar2);
    pDVar1->iteratorIndex = uVar2 + 1;
    if (pvVar4 == nullptr) break;
    iVar3 = STField<int>(pvVar4,4);
    if (*(RecoveredRecordView_005EFAE0_855D930D **)(iVar3 + 0x18) == param_1) {
      if (param_2 != nullptr) {
        *param_2 = iVar3;
      }
      return 0;
    }
  }
  return -4;
}
