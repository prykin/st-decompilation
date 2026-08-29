#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_glsat.cpp

// 004D9000 FUN_004d9000
#line 4 "decomp/ST.exe/functions/004D9000/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_glsat.cpp
   Diagnostic line evidence: 97 | 121 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall st::fn_004D9000(RecoveredRecordView_004D9000_7F89BF8E *param_1)

{
  STT3DSprC *pSVar1;
  int iVar3;
  int iVar2;
  int uVar3;
  uint uVar4;

  if (param_1->field_05FF == 0) {
    /* ST_CALLSITE[004D9014]: CALL 0x0072e530; direct=0072E530 Library::MSVCRT::FUN_0072e530; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STT3DSprC; signature=__cdecl;pointer:/STT3DSprC;/uint */
    pSVar1 = st::pointer_boundary_cast<STT3DSprC *>(st::fn_0072E530(0x40));
    if (pSVar1 == nullptr) {
      pSVar1 = nullptr;
    }
    else {
      /* ST_CALLSITE[004D9022]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
      pSVar1 = st::fn_00401316(pSVar1);
    }
    param_1->field_05FF = st::machine_word_boundary_cast<undefined4>(pSVar1);
    /* ST_CALLSITE[004D904B]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
    iVar3 = st::fn_0040537B(pSVar1,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (iVar3 != 0) {
      st::fn_006A5E40
                (iVar3,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_glsat.cpp"),0x61);
    }
  }
  switch(param_1->field_0245) {
  case 0:
    param_1->field_0265 = param_1->field_0265 & 0xfffffffd;
    param_1->field_026D = 0;
    if (*(int *)&param_1->field_0x4d0 == 4) {
      *(undefined4 *)&param_1->field_0x4d0 = 5;
      break;
    }
    if (*(int *)&param_1->field_0x4d0 != 5) break;
  case 1:
  case 6:
    *(undefined4 *)&param_1->field_0x4d0 = 0;
    break;
  case 5:
    iVar3 = *(int *)&param_1->field_0x4d0;
    if (iVar3 == 1) {
      *(undefined4 *)&param_1->field_0x4d0 = 3;
    }
    else if (iVar3 == 3) {
      *(undefined4 *)&param_1->field_0x4d0 = 4;
    }
    else if (iVar3 == 5) {
      *(undefined4 *)&param_1->field_0x4d0 = 0;
    }
    param_1->field_0265 = param_1->field_0265 & 0xfffffffd;
    param_1->field_026D = 0;
  }
  if (*(int *)&param_1->field_0x4d0 == 4) {
    /* ST_CALLSITE[004D911A]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar3 = st::fn_00404183
                      ((STT3DSprC *)param_1->field_05FF,0xe,PTR_00806774,reinterpret_cast<char *>(PTR_DAT_00790c24),CASE_1D);
    if (iVar3 != 0) {
      st::fn_006A5E40
                (iVar3,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_glsat.cpp"),0x79);
    }
    st::fn_00402A90((STT3DSprC *)param_1->field_05FF);
    uVar4 = 10;
    /* ST_CALLSITE[004D914A]: CALL 0x004052cc; direct=004052CC thunk_FUN_004ad650; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STT3DSprC; signature=__fastcall;pointer:/STT3DSprC;pointer:/STT3DSprC */
    iVar2 = (int)st::fn_004052CC(reinterpret_cast<STT3DSprC *>(&param_1->field_0x1d5));

    uVar3 = st::fn_004052CC((STT3DSprC *)param_1->field_05FF);
    st::fn_006EA340(param_1->field_0211,uVar3,iVar2,uVar4);

    st::fn_00401EBA((void *)param_1->field_05FF,0xe,0,0,'\0');
    /* ST_CALLSITE[004D9180]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    st::fn_00401064((STT3DSprC *)param_1->field_05FF,'\x0e',0);
    /* ST_CALLSITE[004D9199]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    st::fn_00405240((STT3DSprC *)param_1->field_05FF,0xe,g_playSystem_00802A38->field_00E4);
    *(undefined4 *)&param_1->field_0x4d4 = 0;
    uVar4 = g_playSystem_00802A38->field_00E4;
    *(undefined4 *)&param_1->field_0x4dc = 1;
    *(uint *)&param_1->field_0x4d8 = uVar4;
    iVar3 = *(int *)&param_1->field_0x4d0 * 0x18;
    /* ST_CALLSITE[004D9242]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
    st::fn_004045D9
              ((STT3DSprC *)param_1->field_05FF,
               (float)(*(int *)(&DAT_00798de8 + iVar3) + 100 + (int)param_1->field_0041) *
               _DAT_007904f8 * _DAT_007904f0,
               (float)(*(int *)(&DAT_00798dec + iVar3) + 100 + (int)param_1->field_0043) *
               _DAT_007904f8 * _DAT_007904f0,
               (float)(*(int *)(&DAT_00798df0 + iVar3) + (int)param_1->field_0045) * _DAT_007904f8 *
               _DAT_007904f0 + _DAT_007904fc);
    st::fn_00402982((void *)param_1->field_05FF,1);
    /* ST_CALLSITE[004D925F]: CALL dword ptr [EDX + 0x90]; [STIndirectCallsiteApplier] exact slot 0x90; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4 */
    STStructuralVirtualCall<undefined4>(param_1, 0x90, 3, 0x41d);
    return 0;
  }
  /* ST_CALLSITE[004D9273]: CALL 0x00403d0f; direct=00403D0F STT3DSprC::sub_004AD430 */
  st::fn_00403D0F((STT3DSprC *)param_1->field_05FF);
  return 0;
}

// 004D95A0 FUN_004d95a0
#line 4 "decomp/ST.exe/functions/004D95A0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_glsat.cpp
   Diagnostic line evidence: 176 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall st::fn_004D95A0(RecoveredRecord_004D95A0_E0EC0EDA *param_1)

{
  int iVar2;
  uint uVar3;
  uVar3 = 0;
  switch(param_1->field_04D0) {
  case 0:
  case 1:
  case 4:
    uVar3 = 1;
    break;
  case 2:

    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_glsat.cpp"),0xb0,0,0,st::mutable_c_string("%s"),
                               "Please Fill this case !");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return uVar3;
}

// 004D9620 FUN_004d9620
#line 4 "decomp/ST.exe/functions/004D9620/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_glsat.cpp
   Diagnostic line evidence: 188 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall st::fn_004D9620(RecoveredRecord_004D9620_0A743BB7 *param_1)

{
  int iVar2;
  uint uVar3;
  uVar3 = 0;
  switch(param_1->field_04D0) {
  case 2:

    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_glsat.cpp"),0xbc,0,0,st::mutable_c_string("%s"),
                               "Please Fill thid case !");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    break;
  case 4:
    if (param_1->field_04D4 < DAT_00798de0) {
      return 0;
    }
  case 0:
  case 1:
    uVar3 = 1;
  }
  return uVar3;
}
