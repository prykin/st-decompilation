#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_BldMark.cpp
   Diagnostic line evidence: 119 | 130 | 152 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STMethodOwnerApplier] Structural method owner recovered as TLOBldMark.
   Evidence: this_call_owners=[TLOBldMark]; agreed_this_calls=1; incoming_this_accesses=38;
   incoming_edx_uses=0; incoming_stack_parameter_uses=9; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
TLOBldMark::sub_004C6440
          (TLOBldMark *this,float param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  char cVar1;
  float fVar3;
  VisibleClassTy *pVVar4;
  int iVar5;
  int uVar6_mg2;
  int uVar6_mg1;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  float local_18;
  float local_14;
  int local_10;
  int local_c;
  int local_8;

  local_28 = 0;
  local_c = 3;
  local_20 = g_centeredOffsets5 + 3;
  while( true ) {
    piVar7 = local_20;

    ST3DSMAPContext::sub_006E1C20
              (g_sT3DSMAPContext_00807598,param_1,param_2,(float)local_c * _DAT_00790504,&local_14,
               &local_18);
    if (local_14 < _DAT_0079034c) {
      lVar10 = Library::MSVCRT::__ftol();
      iVar8 = (short)lVar10 + -1;
    }
    else {
      lVar10 = Library::MSVCRT::__ftol();
      iVar8 = (short)lVar10;
    }
    local_10 = iVar8;
    if (local_18 < _DAT_0079034c) {
      lVar10 = Library::MSVCRT::__ftol();
      local_8 = (short)lVar10 + -1;
    }
    else {
      lVar10 = Library::MSVCRT::__ftol();
      local_8 = (short)lVar10;
    }
    pVVar4 = g_visibleClass_00802A88;
    if (((((-1 < iVar8) && (iVar8 < g_worldGrid.sizeX)) && (-1 < local_8)) &&
        (local_8 < g_worldGrid.sizeY)) &&
       ((((((g_visibleClass_00802A88 == nullptr || (DAT_0080874d == 0xff)) ||
           ((g_visibleClass_00802A88->field_00F8 == 0 ||
            /* ST_CALLSITE[004C6550]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
            ((VisibleClassTy::sub_00558C00
                        (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_10,
                         local_8,&local_30,&local_34), (int)piVar7 < 0x79aed0 ||
             (0x79aee3 < (int)piVar7)))))) ||
          ((local_30 < 0 ||
           (((pVVar4->field_0030 <= local_30 ||
             (iVar8 = *piVar7 + local_34, piVar7 = local_20, iVar8 < 0)) ||
            (pVVar4->field_0034 <= iVar8)))))) ||
         ((pVVar4->field_004C == nullptr ||
          (pVVar4->field_004C[local_30 + iVar8 * pVVar4->field_0030] != 0)))) &&
        (iVar8 = local_10,

        thunk_FUN_004ae0b0((short)local_10,local_8,local_c,this->field_001C,(uint)DAT_0080874d,
                           &local_2c,&local_24,&local_1c,0,this->field_0020), local_24 != 0))))
    break;
    local_20 = piVar7 + -1;
    local_c = local_c + -1;
    if ((int)local_20 < 0x79aed0) {
cf_common_exit_004C6899:
      if (((this->field_0024 != 0) || (this->field_0028 != 0)) && (local_28 == 0)) {
        /* ST_CALLSITE[004C68AF]: CALL 0x00403d0f; direct=00403D0F STT3DSprC::sub_004AD430 */
        STT3DSprC::sub_004AD430(this->field_002C);
        this->field_0024 = 0;
        this->field_0028 = 0;
      }
      return this->field_0024;
    }
  }
  local_28 = 1;
  if (local_1c == 0) {
    if (this->field_0028 == 0) {
      iVar8 = this->field_001C;
      if ((((iVar8 != 0x39) && (iVar8 != 0x4f)) && ((iVar8 != 0x4d && (iVar8 != 0x5e)))) &&
         (((((iVar8 < 0x54 || (0x5a < iVar8)) && (iVar8 != 0x61)) &&
           ((iVar8 != 0x65 && (iVar8 != 0x43)))) && (iVar8 != 0x73)))) {
        local_28 = 0;
        goto cf_common_exit_004C6899;
      }
      /* ST_CALLSITE[004C66FA]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar8 = STT3DSprC::LoadSequence
                        (this->field_002C,0,PTR_0080678c,
                         (&PTR_s_tlo_bldmark_si_007ad25c)[(byte)this->field_0010->field_112E],
                         CASE_1D);
      if (iVar8 != 0) {
        RaiseInternalException
                  (iVar8,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_BldMark.cpp",
                   0x82);
      }
      uVar9 = 0;
      cVar1 = this->field_0010->field_112E;
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        iVar8 = this->field_001C;
        if (iVar8 == 0x4f) {
          uVar9 = 1;
        }
        else if (iVar8 == 0x4d) {
          uVar9 = 2;
        }
        else if (iVar8 == 0x43) {
          uVar9 = 3;
        }
      }
      else {
        uVar9 = *(uint *)(&DAT_00790f84 + this->field_001C * 4);
      }

      thunk_FUN_004abce0(this->field_002C,0,uVar9,uVar9,'\0');
      /* ST_CALLSITE[004C676F]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase(this->field_002C,'\0',uVar9);

      uVar6_mg1 = STAppC::sub_006E51B0(this->field_0010);
      /* ST_CALLSITE[004C6781]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow(this->field_002C,0,uVar6_mg1);
      iVar8 = local_10;
    }
  }
  else if (this->field_0024 == 0) {
    /* ST_CALLSITE[004C6636]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar5 = STT3DSprC::LoadSequence
                      (this->field_002C,0,PTR_0080678c,
                       *(char **)(&DAT_007ad250 + (uint)(byte)this->field_0010->field_112E * 4),
                       CASE_1D);
    if (iVar5 != 0) {
      RaiseInternalException
                (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_BldMark.cpp",0x77);
    }

    thunk_FUN_004abce0(this->field_002C,0,*(int *)(&DAT_00790f84 + this->field_001C * 4),
                       *(int *)(&DAT_00790f84 + this->field_001C * 4),'\0');
    /* ST_CALLSITE[004C6678]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase(this->field_002C,'\0',*(uint *)(&DAT_00790f84 + this->field_001C * 4));

    uVar6_mg2 = STAppC::sub_006E51B0(this->field_0010);
    /* ST_CALLSITE[004C668A]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow(this->field_002C,0,uVar6_mg2);
  }
  thunk_FUN_004ad460(this->field_002C,0);
  if (*(int *)(&DAT_00791d68 + this->field_001C * 4) == 0) {
    fVar11 = (float)local_8 * _DAT_007904f8 + _DAT_007904f4;
    fVar3 = (float)local_10 * _DAT_007904f8 + _DAT_007904f4;
LAB_004c6848:
    /* ST_CALLSITE[004C684F]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
    STT3DSprC::sub_004AD3C0
              (this->field_002C,fVar3,fVar11,
               (float)local_c * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
  }
  else {
    if (*(int *)(&DAT_00791d68 + this->field_001C * 4) == 1) {
      fVar11 = (float)(local_8 + 1) * _DAT_007904f8;
      fVar3 = (float)(iVar8 + 1) * _DAT_007904f8;
      goto LAB_004c6848;
    }

    iVar5 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_BldMark.cpp",0x98,0,0,"%s",
                               "error");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  this->field_0030 = iVar8;
  if (param_3 != nullptr) {
    *param_3 = iVar8;
  }
  this->field_0034 = local_8;
  if (param_3 != nullptr) {
    *param_4 = local_8;
  }
  this->field_0038 = local_c;
  if (param_3 != nullptr) {
    *param_5 = local_c;
  }
  if (local_1c == 0) {
    this->field_0024 = 0;
    this->field_0028 = 1;
  }
  else {
    this->field_0024 = 1;
    this->field_0028 = 0;
  }
  goto cf_common_exit_004C6899;
}

