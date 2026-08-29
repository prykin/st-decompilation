#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\to_allpl.cpp
   Diagnostic line evidence: 655 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00422E20 -> 0042C300 @ 00422EAB | 00422E20 -> 0042C300 @ 00422ED1
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042C337 MOVSX EAX,byte ptr [EBP + 0x8] | 0042C369 MOVSX
   EAX,byte ptr [EBP + 0x8]

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=4; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=13; incoming_this_forward_calls=5;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=3;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

undefined4 __thiscall
STAllPlayersC::sub_0042C300
          (STAllPlayersC *this,char param_1,uint param_2,int param_3,char param_4,uint param_5)

{
  DArrayTy *array;
  int iVar1;
  STGameObjC *this_00;
  int *piVar2;
  int iVar3;
  uint index;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000011;
  Global_sub_0043FC50_param_1Enum GVar4;

  iVar1 = param_3;
  iVar3 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_2 == 0) {
    iVar3 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x163);
    if (param_3 == 0) {
      thunk_FUN_0043fc50(CASE_1,0);
      GVar4 = CASE_2;
    }
    else {
      GVar4 = CASE_E;
    }
  }
  else {
    if (param_2 != 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x28f);
      goto LAB_0042c3a0;
    }
    iVar3 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x1B3);
    if (param_3 == 0) {
      thunk_FUN_0043fc50(CASE_4,0);
      GVar4 = CASE_5;
    }
    else {
      GVar4 = CASE_F;
    }
  }
  thunk_FUN_0043fc50(GVar4,0);
LAB_0042c3a0:
  piVar2 = (int *)(iVar1 * 0x10 + iVar3);
  if (((*piVar2 == 0x3c) || (*piVar2 == 0x19a)) && (piVar2[1] == (int)param_4)) {
    array = STField<DArrayTy *>(piVar2,10);
    index = 0;
    auto param_2_after_write = array->count; /* compiler stack-slot lifetime split */
    if (0 < (int)param_2_after_write) {
      do {

        DArrayGetElement(array,index,&param_1);
        if (_param_1 == (ushort)param_5) {
          /* ST_CALLSITE[0042C3FF]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          this_00 = GetObjPtr(this,(char)_param_4,(ushort)param_5,CASE_1);
          /* ST_CALLSITE[0042C40A]: CALL dword ptr [EDX + 0xe8]; [STIndirectCallsiteApplier] exact slot 0xE8; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined2 */
          (*this_00->vtable[1].vfunc_14)(this_00,0);
          _param_1 = 0xffff;

          Library::DKW::TBL::DArrayPut(array,index,&param_1);
          STField<short>(piVar2,0xe) = STField<short>(piVar2,0xe) + -1;
          if (STField<short>(piVar2,0xe) == 0) {
            DArrayDestroy(STField<DArrayTy *>(piVar2,10));
            STField<undefined4>(piVar2,10) = 0;
            *piVar2 = 0;
          }
          return 0;
        }
        index = index + 1;
      } while ((int)index < (int)param_2_after_write);
    }
  }
  return 0xffffffff;
}

