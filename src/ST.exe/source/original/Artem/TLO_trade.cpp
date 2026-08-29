#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_trade.cpp

// 004EC050 FUN_004ec050
#line 4 "decomp/ST.exe/functions/004EC050/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_trade.cpp
   Diagnostic line evidence: 283 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=3, scalar_uses=0; sites=004EC053 dereference: MOV EAX,dword ptr [ESI +
   0x5ff] | 004EC082 dereference: MOV dword ptr [ESI + 0x5ff],EAX | 004EC0B7 dereference: MOV
   ECX,dword ptr [ESI + 0x5ff] */

undefined4 __fastcall st::fn_004EC050(RecoveredRecord_004EC050_2F5ECB40 *param_1)

{
  STT3DSprC *pSVar1;
  int exceptionCode;

  if (param_1->field_05FF == nullptr) {
    /* ST_CALLSITE[004EC05F]: CALL 0x0072e530; direct=0072E530 Library::MSVCRT::FUN_0072e530; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STT3DSprC; signature=__cdecl;pointer:/STT3DSprC;/uint */
    pSVar1 = st::pointer_boundary_cast<STT3DSprC *>(st::fn_0072E530(0x40));
    if (pSVar1 == nullptr) {
      pSVar1 = nullptr;
    }
    else {
      /* ST_CALLSITE[004EC06D]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
      pSVar1 = st::fn_00401316(pSVar1);
    }
    param_1->field_05FF = pSVar1;
    /* ST_CALLSITE[004EC097]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
    exceptionCode =
         st::fn_0040537B(pSVar1,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (exceptionCode != 0) {
      st::fn_006A5E40
                (exceptionCode,g_overwriteContext_007ED77C,
                 st::mutable_c_string("E:\\__titans\\Artem\\TLO_trade.cpp"),0x11b);
    }
    st::fn_00402A90(param_1->field_05FF);
  }
  return 0;
}

// 004EC0F0 FUN_004ec0f0
#line 4 "decomp/ST.exe/functions/004EC0F0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_trade.cpp
   Diagnostic line evidence: 294 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall st::fn_004EC0F0(RecoveredRecordView_004EC0F0_2BA6D5E3 *param_1)

{
  int iVar1;
  int uVar2;
  uint uVar3;

  /* ST_CALLSITE[004EC115]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  iVar1 = st::fn_00404183
                    ((STT3DSprC *)param_1->field_05FF,0xe,PTR_00806774,
                     *(char **)(&DAT_007cde6c + param_1->field_050C * 4),CASE_1D);
  if (iVar1 != 0) {
    st::fn_006A5E40
              (iVar1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_trade.cpp"),0x126);
  }
  uVar3 = 10;
  /* ST_CALLSITE[004EC13D]: CALL 0x004052cc; direct=004052CC thunk_FUN_004ad650; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STT3DSprC; source view only; no Ghidra override */
  iVar1 = st::fn_004052CC(reinterpret_cast<STT3DSprC *>(&param_1->field_0x1d5));

  uVar2 = st::fn_004052CC((STT3DSprC *)param_1->field_05FF);
  st::fn_006EA340(param_1->field_0211,uVar2,iVar1,uVar3);
  /* ST_CALLSITE[004EC1A8]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
  st::fn_004045D9
            ((STT3DSprC *)param_1->field_05FF,
             (float)param_1->field_04FC * _DAT_007904f8 * _DAT_007904f0,
             (float)param_1->field_0500 * _DAT_007904f8 * _DAT_007904f0,
             (float)param_1->field_0504 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);

  iVar1 = st::fn_0040581C();
  uVar3 = 0;
  switch(iVar1) {
  case 0:
    uVar3 = DAT_0079aa90;
    break;
  case 1:
    uVar3 = DAT_0079aa94;
    break;
  case 2:
    uVar3 = DAT_0079aa98;
    break;
  case 3:
    uVar3 = DAT_0079aa9c;
  }
  st::fn_00402982((void *)param_1->field_05FF,1);

  st::fn_00401EBA((void *)param_1->field_05FF,0xe,uVar3,uVar3,'\0');
  /* ST_CALLSITE[004EC209]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  st::fn_00401064((STT3DSprC *)param_1->field_05FF,'\x0e',uVar3);
  /* ST_CALLSITE[004EC223]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
  st::fn_00405240((STT3DSprC *)param_1->field_05FF,0xe,g_playSystem_00802A38->field_00E4);
  return 0;
}
