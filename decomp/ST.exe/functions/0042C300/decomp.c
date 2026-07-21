
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\to_allpl.cpp
   Diagnostic line evidence: 655 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   
   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00422E20 -> 0042C300 @ 00422EAB | 00422E20 -> 0042C300 @ 00422ED1 */

undefined4 FUN_0042c300(uint param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  DArrayTy *array;
  int iVar1;
  STGameObjC *pSVar2;
  STAllPlayersC *in_ECX;
  int *piVar3;
  int iVar4;
  uint index;
  Global_sub_0043FC50_param_1Enum GVar5;
  
  iVar1 = param_3;
  iVar4 = 0;
  if (param_2 == 0) {
    iVar4 = (char)param_1 * 0xa62 + 0x7f4f83;
    if (param_3 == 0) {
      thunk_FUN_0043fc50(CASE_1,0);
      GVar5 = CASE_2;
    }
    else {
      GVar5 = CASE_E;
    }
  }
  else {
    if (param_2 != 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0x28f);
      goto LAB_0042c3a0;
    }
    iVar4 = (char)param_1 * 0xa62 + 0x7f4fd3;
    if (param_3 == 0) {
      thunk_FUN_0043fc50(CASE_4,0);
      GVar5 = CASE_5;
    }
    else {
      GVar5 = CASE_F;
    }
  }
  thunk_FUN_0043fc50(GVar5,0);
LAB_0042c3a0:
  piVar3 = (int *)(iVar1 * 0x10 + iVar4);
  if (((*piVar3 == 0x3c) || (*piVar3 == 0x19a)) && (piVar3[1] == (int)(char)param_4)) {
    array = *(DArrayTy **)((int)piVar3 + 10);
    index = 0;
    param_2 = array->count;
    if (0 < (int)param_2) {
      do {
        DArrayGetElement(array,index,&param_1);
        if ((short)param_1 == (short)param_5) {
          pSVar2 = STAllPlayersC::GetObjPtr(in_ECX,param_4,param_5,CASE_1);
          (*pSVar2->vtable[1].vfunc_14)(0);
          param_1 = 0xffff;
          Library::DKW::TBL::FUN_006ae140(&array->flags,index,&param_1);
          *(short *)((int)piVar3 + 0xe) = *(short *)((int)piVar3 + 0xe) + -1;
          if (*(short *)((int)piVar3 + 0xe) == 0) {
            DArrayDestroy(*(DArrayTy **)((int)piVar3 + 10));
            *(undefined4 *)((int)piVar3 + 10) = 0;
            *piVar3 = 0;
          }
          return 0;
        }
        index = index + 1;
      } while ((int)index < (int)param_2);
    }
  }
  return 0xffffffff;
}

