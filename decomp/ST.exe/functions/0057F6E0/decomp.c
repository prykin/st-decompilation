#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_gold.cpp
   STDcResourcC::CreateRes

   [STSwitchEnumApplier] Switch target field_0255 uses
   /SubmarineTitans/Recovered/Enums/STDcResourcC_field_0255State. Cases:
   CASE_DC=220;CASE_DD=221;CASE_DE=222;CASE_E0=224 */

int __thiscall STDcResourcC::CreateRes(STDcResourcC *this)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STDcResourcC *this_00;
  int local_EAX_43;
  int iVar6;
  STT3DSprC *pSVar7;
  int *piVar8;
  int iVar5;
  STWorldObject *pSVar9;
  int local_EAX_1699;
  int iVar11;
  int iVar10;
  int iVar12;
  int iVar13;
  int iVar14;
  Global_mfRLoad_param_2Enum GVar15;
  InternalExceptionFrame local_5c;
  STDcResourcC *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_8 = 1;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;

  local_EAX_43 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  this_00 = local_18;
  if (local_EAX_43 != 0) {
    g_currentExceptionFrame = local_5c.previous;

    iVar10 = ReportDebugMessage("E:\\__titans\\Igor\\To_gold.cpp",0x2b3,0,local_EAX_43,
                                "%s","STDcResourcC::CreateRes");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_43,0,"E:\\__titans\\Igor\\To_gold.cpp",0x2b4);
    return 0xffff;
  }
  switch(local_18->field_0255) {
  case CASE_DC:
    local_c = -1;
    local_14 = 0;
    do {
      iVar12 = *(int *)((int)&DAT_007cb0b8 + local_14);
      local_10 = *(int *)((int)&DAT_007cb0dc + local_14);
      iVar6 = this_00->field_0245 + iVar12;
      if (((((iVar6 < g_worldGrid.sizeX) && (-1 < iVar6)) &&
           (iVar6 = this_00->field_0249 + local_10, iVar6 < g_worldGrid.sizeY)) &&
          ((-1 < iVar6 && (-1 < this_00->field_024D)))) && (this_00->field_024D < 5)) {
        if (this_00 == nullptr) {
          pSVar7 = nullptr;
        }
        else {
          pSVar7 = (STT3DSprC *)&this_00->field_01D5;
        }
        /* ST_CALLSITE[0057F977]: CALL 0x00405911; direct=00405911 STDcResourcC::Init */
        if ((3 < local_14) && (pSVar7 = STPointerBoundaryCast<STT3DSprC *>(Init(this_00)), pSVar7 == nullptr))
        goto cf_break_loop_0057FAA5;
        GVar15 = CASE_1D;
        /* ST_CALLSITE[0057F990]: CALL 0x00401744; direct=00401744 STDcResourcC::sub_0057F3A0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/int; signature=__thiscall;pointer:/int;pointer:/STDcResourcC;/int;/int */
        piVar8 = sub_0057F3A0(this_00,local_c,0);
        /* ST_CALLSITE[0057F9A1]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar6 = STT3DSprC::LoadSequence(pSVar7,0xe,PTR_00806774,(char *)piVar8,GVar15);
        if (iVar6 != 0) goto cf_break_loop_0057FAA5;
        GVar15 = CASE_1D;
        /* ST_CALLSITE[0057F9B8]: CALL 0x00401744; direct=00401744 STDcResourcC::sub_0057F3A0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/int; signature=__thiscall;pointer:/int;pointer:/STDcResourcC;/int;/int */
        piVar8 = sub_0057F3A0(this_00,local_c,1);
        /* ST_CALLSITE[0057F9C8]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar6 = STT3DSprC::LoadSequence(pSVar7,0xd,PTR_00806774,(char *)piVar8,GVar15);
        if (iVar6 != 0) goto cf_break_loop_0057FAA5;
        /* ST_CALLSITE[0057F9E6]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        STT3DSprC::StartShow(pSVar7,0xe,g_playSystem_00802A38->field_00E4);
        /* ST_CALLSITE[0057F9F3]: CALL 0x00405ca9; direct=00405CA9 STT3DSprC::sub_004ACEF0 */
        STT3DSprC::sub_004ACEF0(pSVar7,PTR_008073cc);
        /* ST_CALLSITE[0057F9FC]: CALL 0x00403afd; direct=00403AFD STT3DSprC::sub_004ACF50 */
        STT3DSprC::sub_004ACF50(pSVar7,'\r');
        /* ST_CALLSITE[0057FA12]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        STT3DSprC::StartShow(pSVar7,0xd,g_playSystem_00802A38->field_00E4);
        iVar6 = this_00->field_0249 + local_10;
        local_10 = this_00->field_0245 + iVar12;
        /* ST_CALLSITE[0057FA74]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
        STT3DSprC::sub_004AD3C0
                  (pSVar7,(float)local_10 * _DAT_007904f8 + _DAT_007904f4,
                   (float)iVar6 * _DAT_007904f8 + _DAT_007904f4,
                   (float)this_00->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
        Library::Ourlib::ST3DSMAP::SprSetLevAfter(this_00->field_0211,pSVar7->field_0018,-1);
      }
      local_14 = local_14 + 4;
      local_c = local_c + 1;
    } while (local_14 < 0x21);
    break;
  case CASE_DD:
    local_c = -1;
    local_14 = 0;
    do {
      iVar12 = *(int *)((int)&DAT_007cb0b8 + local_14);
      local_10 = *(int *)((int)&DAT_007cb0dc + local_14);
      iVar6 = this_00->field_0245 + iVar12;
      if ((((iVar6 < g_worldGrid.sizeX) && (-1 < iVar6)) &&
          (iVar6 = this_00->field_0249 + local_10, iVar6 < g_worldGrid.sizeY)) &&
         (((-1 < iVar6 && (-1 < this_00->field_024D)) && (this_00->field_024D < 5)))) {
        if (this_00 == nullptr) {
          pSVar7 = nullptr;
        }
        else {
          pSVar7 = (STT3DSprC *)&this_00->field_01D5;
        }
        /* ST_CALLSITE[0057F7C1]: CALL 0x00405911; direct=00405911 STDcResourcC::Init */
        if ((3 < local_14) && (pSVar7 = STPointerBoundaryCast<STT3DSprC *>(Init(this_00)), pSVar7 == nullptr))
        goto cf_break_loop_0057FAA5;
        GVar15 = CASE_1D;
        /* ST_CALLSITE[0057F7DA]: CALL 0x00404fd4; direct=00404FD4 STDcResourcC::sub_0057F2E0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/int; signature=__thiscall;pointer:/int;pointer:/STDcResourcC;/int;/int */
        piVar8 = sub_0057F2E0(this_00,local_c,0);
        /* ST_CALLSITE[0057F7EB]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar6 = STT3DSprC::LoadSequence(pSVar7,0xe,PTR_00806774,(char *)piVar8,GVar15);
        if (iVar6 != 0) goto cf_break_loop_0057FAA5;
        GVar15 = CASE_1D;
        /* ST_CALLSITE[0057F802]: CALL 0x00404fd4; direct=00404FD4 STDcResourcC::sub_0057F2E0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/int; signature=__thiscall;pointer:/int;pointer:/STDcResourcC;/int;/int */
        piVar8 = sub_0057F2E0(this_00,local_c,1);
        /* ST_CALLSITE[0057F812]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar6 = STT3DSprC::LoadSequence(pSVar7,0xd,PTR_00806774,(char *)piVar8,GVar15);
        if (iVar6 != 0) goto cf_break_loop_0057FAA5;
        /* ST_CALLSITE[0057F830]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        STT3DSprC::StartShow(pSVar7,0xe,g_playSystem_00802A38->field_00E4);
        /* ST_CALLSITE[0057F83D]: CALL 0x00405ca9; direct=00405CA9 STT3DSprC::sub_004ACEF0 */
        STT3DSprC::sub_004ACEF0(pSVar7,PTR_008073cc);
        /* ST_CALLSITE[0057F846]: CALL 0x00403afd; direct=00403AFD STT3DSprC::sub_004ACF50 */
        STT3DSprC::sub_004ACF50(pSVar7,'\r');
        /* ST_CALLSITE[0057F85C]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        STT3DSprC::StartShow(pSVar7,0xd,g_playSystem_00802A38->field_00E4);
        iVar6 = this_00->field_0249 + local_10;
        local_10 = this_00->field_0245 + iVar12;
        /* ST_CALLSITE[0057F8BE]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
        STT3DSprC::sub_004AD3C0
                  (pSVar7,(float)local_10 * _DAT_007904f8 + _DAT_007904f4,
                   (float)iVar6 * _DAT_007904f8 + _DAT_007904f4,
                   (float)this_00->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
        Library::Ourlib::ST3DSMAP::SprSetLevAfter(this_00->field_0211,pSVar7->field_0018,-1);
      }
      local_14 = local_14 + 4;
      local_c = local_c + 1;
    } while (local_14 < 0x21);
    break;
  case CASE_DE:
    iVar12 = -1;
    do {
      if (iVar12 == 1) {
        iVar12 = 0;
      }
      local_c = (&DAT_007cb0bc)[iVar12];
      local_10 = (&DAT_007cb0e0)[iVar12];
      iVar6 = local_c + this_00->field_0245;
      if ((((iVar6 < g_worldGrid.sizeX) && (-1 < iVar6)) &&
          ((iVar6 = this_00->field_0249 + local_10, iVar6 < g_worldGrid.sizeY &&
           ((-1 < iVar6 && (-1 < this_00->field_024D)))))) && (this_00->field_024D < 5)) {
        if (this_00 == nullptr) {
          pSVar7 = nullptr;
        }
        else {
          pSVar7 = (STT3DSprC *)&this_00->field_01D5;
        }
        /* ST_CALLSITE[0057FB49]: CALL 0x00405911; direct=00405911 STDcResourcC::Init */
        if ((iVar12 < 0) || (pSVar7 = STPointerBoundaryCast<STT3DSprC *>(Init(this_00)), pSVar7 != nullptr)) {
          GVar15 = CASE_1D;
          /* ST_CALLSITE[0057FB5F]: CALL 0x0040185c; direct=0040185C STDcResourcC::sub_0057F470; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/int; signature=__thiscall;pointer:/int;pointer:/STDcResourcC;/int;/int */
          piVar8 = sub_0057F470(this_00,iVar12,0);
          /* ST_CALLSITE[0057FB70]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
          iVar6 = STT3DSprC::LoadSequence(pSVar7,0xe,PTR_00806774,(char *)piVar8,GVar15);
          if (iVar6 == 0) {
            GVar15 = CASE_1D;
            /* ST_CALLSITE[0057FB84]: CALL 0x0040185c; direct=0040185C STDcResourcC::sub_0057F470; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/int; signature=__thiscall;pointer:/int;pointer:/STDcResourcC;/int;/int */
            piVar8 = sub_0057F470(this_00,iVar12,1);
            /* ST_CALLSITE[0057FB94]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
            iVar6 = STT3DSprC::LoadSequence(pSVar7,0xd,PTR_00806774,(char *)piVar8,GVar15);
            if (iVar6 == 0) {
              /* ST_CALLSITE[0057FBB2]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
              STT3DSprC::StartShow(pSVar7,0xe,g_playSystem_00802A38->field_00E4);
              /* ST_CALLSITE[0057FBBF]: CALL 0x00405ca9; direct=00405CA9 STT3DSprC::sub_004ACEF0 */
              STT3DSprC::sub_004ACEF0(pSVar7,PTR_008073cc);
              /* ST_CALLSITE[0057FBC8]: CALL 0x00403afd; direct=00403AFD STT3DSprC::sub_004ACF50 */
              STT3DSprC::sub_004ACF50(pSVar7,'\r');
              /* ST_CALLSITE[0057FBDE]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
              STT3DSprC::StartShow(pSVar7,0xd,g_playSystem_00802A38->field_00E4);
              local_14 = this_00->field_0245 + local_c;
              /* ST_CALLSITE[0057FC43]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
              STT3DSprC::sub_004AD3C0
                        (pSVar7,(float)local_14 * _DAT_007904f8 + _DAT_007904f4,
                         (float)(this_00->field_0249 + local_10) * _DAT_007904f8 + _DAT_007904f4,
                         (float)this_00->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
              Library::Ourlib::ST3DSMAP::SprSetLevAfter(this_00->field_0211,pSVar7->field_0018,-1);
              goto LAB_0057fc59;
            }
          }
        }
        local_8 = 0;
        break;
      }
LAB_0057fc59:
      iVar12 = iVar12 + 2;
    } while (iVar12 < 7);
    if (iVar12 != 8) {
      local_8 = 0;
    }
    goto LAB_0057fd72;
  default:
    goto switchD_0057f734_caseD_df;
  case CASE_E0:
    if (((((local_18->field_0245 < (int)g_worldGrid.sizeX) && (-1 < local_18->field_0245)) &&
         (local_18->field_0249 < (int)g_worldGrid.sizeY)) &&
        ((-1 < local_18->field_0249 && (iVar12 = local_18->field_024D, -1 < iVar12)))) &&
       ((iVar12 < 5 &&

        (iVar5 = thunk_FUN_004961b0((short)local_18->field_0245,(short)local_18->field_0249,
                                    (short)iVar12), iVar5 != 0)))) {
      sVar1 = (short)this_00->field_0245;
      sVar2 = (short)this_00->field_024D;
      sVar3 = (short)this_00->field_0249;
      if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
         (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))) {
        pSVar9 = nullptr;
      }
      else {
        pSVar9 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
      }
      if (pSVar9 == nullptr) {
        /* ST_CALLSITE[0057FD68]: CALL 0x0040345e; direct=0040345E STDcResourcC::sub_005805C0 */
        sub_005805C0(this_00);
        goto LAB_0057fd72;
      }
    }
    goto switchD_0057f734_caseD_df;
  }
LAB_0057faac:
  if (local_c != 8) {
    local_8 = 0;
  }
LAB_0057fd72:
  if (local_8 != 0) {

    local_EAX_1699 = thunk_FUN_004ab050();
    local_c = 0;
    if (0 < this_00->field_0265) {
      iVar12 = local_EAX_1699 * 2 + 1;
      local_10 = local_EAX_1699 * 8 + -0x1c;
      iVar6 = iVar12 * 4;
      do {
        iVar11 = iVar6;
        if (8 < iVar12) {
          iVar11 = local_10;
        }
        local_14 = *(int *)((int)&DAT_007cb0b8 + iVar11) + this_00->field_0245;
        /* ST_CALLSITE[0057FE2D]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
        STT3DSprC::sub_004AD3C0
                  (*(STT3DSprC **)(&this_00->field_026D->field_0000 + local_c * 4),
                   (float)local_14 * _DAT_007904f8 + _DAT_007904f4,
                   (float)(*(int *)((int)&DAT_007cb0dc + iVar11) + this_00->field_0249) *
                   _DAT_007904f8 + _DAT_007904f4,
                   (float)this_00->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
        iVar13 = iVar6 + 4;
        iVar14 = iVar12 + 1;
        iVar11 = local_10 + 4;
        if (this_00->field_0255 == CASE_DE) {
          iVar13 = iVar6 + 8;
          iVar14 = iVar12 + 2;
          iVar11 = local_10 + 8;
        }
        local_10 = iVar11;
        local_c = local_c + 1;
        iVar6 = iVar13;
        iVar12 = iVar14;
      } while (local_c < this_00->field_0265);
    }
  }
  g_currentExceptionFrame = local_5c.previous;
  return local_8;
switchD_0057f734_caseD_df:
  local_8 = 0;
  goto LAB_0057fd72;
cf_break_loop_0057FAA5:
  local_8 = 0;
  goto LAB_0057faac;
}

