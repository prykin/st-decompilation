#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_BldMark.cpp
   Diagnostic line evidence: 72 | 73 | 76 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STMethodOwnerApplier] Structural method owner recovered as TLOBldMark.
   Evidence: this_call_owners=[TLOBldMark]; agreed_this_calls=1; incoming_this_accesses=18;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBldMark::sub_004C6210(TLOBldMark *this,int param_1,int *param_2)

{
  STT3DSprC *pSVar1;
  int iVar2;
  uint uVar3;

  this->field_0018 = 0;
  this->field_001C = param_1;
  this->field_0020 = param_2;
  /* ST_CALLSITE[004C622B]: CALL 0x0072e530; direct=0072E530 Library::MSVCRT::FUN_0072e530; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STT3DSprC; signature=__cdecl;pointer:/STT3DSprC;/uint */
  pSVar1 = Library::MSVCRT::FUN_0072e530(0x40);
  if (pSVar1 == nullptr) {
    pSVar1 = nullptr;
  }
  else {
    /* ST_CALLSITE[004C6239]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
    pSVar1 = STT3DSprC::STT3DSprC(pSVar1);
  }
  this->field_002C = pSVar1;
  if (*(int *)(&DAT_00791d68 + this->field_001C * 4) == 0) {
    /* ST_CALLSITE[004C62CC]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
    iVar2 = STT3DSprC::Init(pSVar1,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (iVar2 != 0) {
      RaiseInternalException
                (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_BldMark.cpp",0x48);
    }
  }
  else if (*(int *)(&DAT_00791d68 + this->field_001C * 4) == 1) {
    /* ST_CALLSITE[004C6275]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
    iVar2 = STT3DSprC::Init(pSVar1,PTR_008073cc,0x78,0x56,nullptr,0xf0,0xbe,0x11);
    if (iVar2 != 0) {
      RaiseInternalException
                (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_BldMark.cpp",0x49);
    }

    uVar3 = thunk_FUN_004ad650(this->field_002C);
    Library::Ourlib::ST3DSMAP::SprSetSplit(g_sT3DSMAPContext_00807598,uVar3);
  }
  thunk_FUN_004ad5e0(this->field_002C);
  /* ST_CALLSITE[004C6312]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  iVar2 = STT3DSprC::LoadSequence
                    (this->field_002C,0,PTR_0080678c,
                     *(char **)(&DAT_007ad250 + (uint)(byte)this->field_0010->field_112E * 4),
                     CASE_1D);
  if (iVar2 != 0) {
    RaiseInternalException
              (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_BldMark.cpp",0x4c);
  }

  thunk_FUN_004abce0(this->field_002C,0,*(int *)(&DAT_00790f84 + this->field_001C * 4),
                     *(int *)(&DAT_00790f84 + this->field_001C * 4),'\0');
  /* ST_CALLSITE[004C6357]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  STT3DSprC::SetCurFase(this->field_002C,'\0',*(uint *)(&DAT_00790f84 + this->field_001C * 4));

  uVar3 = STAppC::sub_006E51B0(this->field_0010);
  /* ST_CALLSITE[004C636A]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
  STT3DSprC::StartShow(this->field_002C,0,uVar3);
  /* ST_CALLSITE[004C6372]: CALL 0x00403d0f; direct=00403D0F STT3DSprC::sub_004AD430 */
  STT3DSprC::sub_004AD430(this->field_002C);
  this->field_0024 = 0;
  this->field_0028 = 0;
  return 0;
}

