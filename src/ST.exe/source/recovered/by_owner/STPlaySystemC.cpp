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
  st::fn_006E6100((SystemWithNamedObjClassTy *)this,param_1,4);
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
  this->field_0041 = st::machine_word_boundary_cast<uint>(this->field_0041 + 1);
  /* ST_CALLSITE[0054EBCC]: CALL 0x004045fc; direct=004045FC STPlaySystemC::AddToRep */
  st::fn_004045FC(this,(undefined4 *)param_1,param_2);
  /* ST_CALLSITE[0054EBD1]: CALL dword ptr [0x0085bedc] */
  DVar1 = st::external_000000DA();
  this->field_007F = DVar1;
  iVar2 = st::fn_00715360(g_int_00811764,0,'1',param_1,param_2,1,*(undefined4 *)param_1);
  return iVar2;
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

  uVar1 = st::machine_word_boundary_cast<uint>(this->field_00E4 + 1);
  this->field_0028 = 1;
  this->field_00E4 = uVar1;
  if ((uVar1 - this->field_0034 == 6000) && (g_optPanel_008016DC != nullptr)) {
    st::fn_0040210D((RecoveredRecord_STPlaySystemC_00533B80 *)g_optPanel_008016DC);
    return;
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
  DWORD DVar3;
  char *pcVar1;
  byte bVar4;
  uint uVar5;
  CHAR local_10c [260];
  uint local_8;

  if (param_2 != nullptr) {
    pcVar2 = (char *)st::fn_00404863(this,*param_2,&local_8);
    if (pcVar2 == nullptr) {
      st::fn_00715360(g_int_00811764,param_1,'7',nullptr,0,0,0xffffffff);
      st::fn_00401370(this,param_1);
    }
    else {
      st::fn_00715360(g_int_00811764,param_1,'1',pcVar2,local_8,1,*(undefined4 *)pcVar2);
      if (this->field_00BB < 5) {
        DVar3 = st::fn_006E51B0((STAppC *)&DAT_00807620);
        (&this->field_00A7)[this->field_00BB] = DVar3;
        this->field_00BB = this->field_00BB + 1;
      }
      else {
        this->field_00A7 = this->field_00AB;
        this->field_00AB = this->field_00AF;
        this->field_00AF = this->field_00B3;
        this->field_00B3 = this->field_00B7;
        DVar3 = st::fn_006E51B0((STAppC *)&DAT_00807620);
        this->field_00B7 = DVar3;
        if (DAT_0080735e == '\0') {
          return;
        }
        if ((DVar3 - this->field_00A7) / 5 < 0x7d1) {
          if (g_popUp_008016D8 != nullptr) {
            uVar5 = 9;
            pcVar2 = st::fn_006B0140(17000,g_hINSTANCE_00807618);
            st::fn_004014D8(g_popUp_008016D8,pcVar2,uVar5);
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
              st::external_00000080(local_10c,st::mutable_c_string("%s %s"),pcVar1,pcVar2);
              if (g_popUp_008016D8 != nullptr) {
                st::fn_004014D8(g_popUp_008016D8,local_10c,8);
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
  undefined1 local_24 [16];
  undefined4 local_14;

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
          /* ST_CALLSITE[006E57EE]: CALL dword ptr [EAX] */
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
st::fn_006E62D0(STPlaySystemC *this,AnonShape_005EFAE0_B406B78B *param_1,int *param_2)

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
    if (*(AnonShape_005EFAE0_B406B78B **)(iVar3 + 0x18) == param_1) {
      if (param_2 != nullptr) {
        *param_2 = iVar3;
      }
      return 0;
    }
  }
  return -4;
}

