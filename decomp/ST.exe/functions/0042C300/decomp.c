
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\to_allpl.cpp
   Diagnostic line evidence: 655 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00422E20 -> 0042C300 @ 00422EAB | 00422E20 -> 0042C300 @ 00422ED1
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042C337 MOVSX EAX,byte ptr [EBP + 0x8] | 0042C369 MOVSX
   EAX,byte ptr [EBP + 0x8] */

undefined4 FUN_0042c300(char param_1,uint param_2,int param_3,char param_4,uint param_5)

{
  DArrayTy *array;
  int iVar1;
  STGameObjC *this;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
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
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    iVar3 = param_1 * 0xa62 + 0x7f4f83;
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
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    iVar3 = param_1 * 0xa62 + 0x7f4fd3;
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
    array = *(DArrayTy **)((int)piVar2 + 10);
    index = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = array->count;
    if (0 < (int)param_2) {
      do {
        DArrayGetElement(array,index,&param_1);
        if (_param_1 == (ushort)param_5) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          this = STAllPlayersC::GetObjPtr(in_ECX,(char)_param_4,(ushort)param_5,CASE_1);
          this->vfunc_E8(0);
          _param_1 = 0xffff;
          Library::DKW::TBL::DArrayPut(array,index,&param_1);
          *(short *)((int)piVar2 + 0xe) = *(short *)((int)piVar2 + 0xe) + -1;
          if (*(short *)((int)piVar2 + 0xe) == 0) {
            DArrayDestroy(*(DArrayTy **)((int)piVar2 + 10));
            *(undefined4 *)((int)piVar2 + 10) = 0;
            *piVar2 = 0;
          }
          return 0;
        }
        index = index + 1;
      } while ((int)index < (int)param_2);
    }
  }
  return 0xffffffff;
}

