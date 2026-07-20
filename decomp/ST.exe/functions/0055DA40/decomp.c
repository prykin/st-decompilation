
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\pal_tbl.CPP
   Diagnostic line evidence: 123 | 125 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   
   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005DB4F0 -> 0055DA40 @ 005DB6E8 */

int __cdecl LoadStartPlt(cMf32 *param_1,byte param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_48;
  
  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    DAT_008032a4 = Library::Ourlib::MFPLT::mfPltPtrTy
                             ((int)param_1,PTR_s_PLT_MMGLASS_0079af6c,param_2,1);
    DAT_008032a8 = Library::Ourlib::MFPLT::mfPltPtrTy
                             ((int)param_1,PTR_s_PLT_MMSHAD_0079af88,param_2,1);
    DAT_008032ac = Library::Ourlib::MFPLT::mfPltPtrTy
                             ((int)param_1,PTR_s_PLT_FSGSGLASS_0079af98,param_2,1);
    DAT_008032b0 = Library::Ourlib::MFPLT::mfPltPtrTy
                             ((int)param_1,PTR_s_PLT_FSGSSHAD_0079af9c,param_2,1);
    g_currentExceptionFrame = local_48.previous;
    return 0;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar3 = ReportDebugMessage(s_E____titans_pal_tbl_CPP_007c959c,0x7b,0,iVar2,&DAT_007a4ccc,
                             s_LoadStartPlt_007c95c8);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  thunk_FUN_0055db70();
  RaiseInternalException(iVar2,0,s_E____titans_pal_tbl_CPP_007c959c,0x7d);
  return iVar2;
}

