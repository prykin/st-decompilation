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
  code *pcVar4;
  STDcResourcC *this_00;
  int iVar5;
  STT3DSprC *pSVar6;
  char *pcVar7;
  STWorldObject *pSVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uint unaff_EDI;
  int iVar12;
  byte bVar13;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  this_00 = local_18;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\Igor\\To_gold.cpp",0x2b3,0,iVar5,"%s",
                                "STDcResourcC::CreateRes");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Igor\\To_gold.cpp",0x2b4);
    return 0xffff;
  }
  switch(local_18->field_0255) {
  case CASE_DC:
    local_c = -1;
    local_14 = 0;
    do {
      iVar5 = *(int *)((int)&DAT_007cb0b8 + local_14);
      local_10 = *(int *)((int)&DAT_007cb0dc + local_14);
      iVar10 = this_00->field_0245 + iVar5;
      if (((((iVar10 < g_worldGrid.sizeX) && (-1 < iVar10)) &&
           (iVar10 = this_00->field_0249 + local_10, iVar10 < g_worldGrid.sizeY)) &&
          ((-1 < iVar10 && (-1 < this_00->field_024D)))) && (this_00->field_024D < 5)) {
        if (this_00 == (STDcResourcC *)0x0) {
          pSVar6 = (STT3DSprC *)0x0;
        }
        else {
          pSVar6 = (STT3DSprC *)&this_00->field_01D5;
        }
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        if ((3 < local_14) &&
           (pSVar6 = (STT3DSprC *)Init(this_00,unaff_EDI), pSVar6 == (STT3DSprC *)0x0))
        goto cf_break_loop_0057FAA5;
        bVar13 = 0x1d;
        pcVar7 = (char *)sub_0057F3A0(this_00,local_c,0);
        iVar10 = STT3DSprC::LoadSequence(pSVar6,0xe,DAT_00806774,pcVar7,bVar13);
        if (iVar10 != 0) goto cf_break_loop_0057FAA5;
        bVar13 = 0x1d;
        pcVar7 = (char *)sub_0057F3A0(this_00,local_c,1);
        iVar10 = STT3DSprC::LoadSequence(pSVar6,0xd,DAT_00806774,pcVar7,bVar13);
        if (iVar10 != 0) goto cf_break_loop_0057FAA5;
        STT3DSprC::StartShow(pSVar6,0xe,g_playSystem_00802A38->field_00E4);
        STT3DSprC::sub_004ACEF0(pSVar6,DAT_008073cc);
        STT3DSprC::sub_004ACF50(pSVar6,'\r');
        STT3DSprC::StartShow(pSVar6,0xd,g_playSystem_00802A38->field_00E4);
        iVar10 = this_00->field_0249 + local_10;
        local_10 = this_00->field_0245 + iVar5;
        STT3DSprC::sub_004AD3C0
                  (pSVar6,(float)local_10 * _DAT_007904f8 + _DAT_007904f4,
                   (float)iVar10 * _DAT_007904f8 + _DAT_007904f4,
                   (float)this_00->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
        FUN_006ea3e0((void *)this_00->field_0211,pSVar6->field_0018,-1);
      }
      local_14 = local_14 + 4;
      local_c = local_c + 1;
    } while (local_14 < 0x21);
    break;
  case CASE_DD:
    local_c = -1;
    local_14 = 0;
    do {
      iVar5 = *(int *)((int)&DAT_007cb0b8 + local_14);
      local_10 = *(int *)((int)&DAT_007cb0dc + local_14);
      iVar10 = this_00->field_0245 + iVar5;
      if ((((iVar10 < g_worldGrid.sizeX) && (-1 < iVar10)) &&
          (iVar10 = this_00->field_0249 + local_10, iVar10 < g_worldGrid.sizeY)) &&
         (((-1 < iVar10 && (-1 < this_00->field_024D)) && (this_00->field_024D < 5)))) {
        if (this_00 == (STDcResourcC *)0x0) {
          pSVar6 = (STT3DSprC *)0x0;
        }
        else {
          pSVar6 = (STT3DSprC *)&this_00->field_01D5;
        }
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        if ((3 < local_14) &&
           (pSVar6 = (STT3DSprC *)Init(this_00,unaff_EDI), pSVar6 == (STT3DSprC *)0x0))
        goto cf_break_loop_0057FAA5;
        bVar13 = 0x1d;
        pcVar7 = (char *)sub_0057F2E0(this_00,local_c,0);
        iVar10 = STT3DSprC::LoadSequence(pSVar6,0xe,DAT_00806774,pcVar7,bVar13);
        if (iVar10 != 0) goto cf_break_loop_0057FAA5;
        bVar13 = 0x1d;
        pcVar7 = (char *)sub_0057F2E0(this_00,local_c,1);
        iVar10 = STT3DSprC::LoadSequence(pSVar6,0xd,DAT_00806774,pcVar7,bVar13);
        if (iVar10 != 0) goto cf_break_loop_0057FAA5;
        STT3DSprC::StartShow(pSVar6,0xe,g_playSystem_00802A38->field_00E4);
        STT3DSprC::sub_004ACEF0(pSVar6,DAT_008073cc);
        STT3DSprC::sub_004ACF50(pSVar6,'\r');
        STT3DSprC::StartShow(pSVar6,0xd,g_playSystem_00802A38->field_00E4);
        iVar10 = this_00->field_0249 + local_10;
        local_10 = this_00->field_0245 + iVar5;
        STT3DSprC::sub_004AD3C0
                  (pSVar6,(float)local_10 * _DAT_007904f8 + _DAT_007904f4,
                   (float)iVar10 * _DAT_007904f8 + _DAT_007904f4,
                   (float)this_00->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
        FUN_006ea3e0((void *)this_00->field_0211,pSVar6->field_0018,-1);
      }
      local_14 = local_14 + 4;
      local_c = local_c + 1;
    } while (local_14 < 0x21);
    break;
  case CASE_DE:
    iVar5 = -1;
    do {
      if (iVar5 == 1) {
        iVar5 = 0;
      }
      local_c = (&DAT_007cb0bc)[iVar5];
      local_10 = (&DAT_007cb0e0)[iVar5];
      iVar10 = local_c + this_00->field_0245;
      if ((((iVar10 < g_worldGrid.sizeX) && (-1 < iVar10)) &&
          ((iVar10 = this_00->field_0249 + local_10, iVar10 < g_worldGrid.sizeY &&
           ((-1 < iVar10 && (-1 < this_00->field_024D)))))) && (this_00->field_024D < 5)) {
        if (this_00 == (STDcResourcC *)0x0) {
          pSVar6 = (STT3DSprC *)0x0;
        }
        else {
          pSVar6 = (STT3DSprC *)&this_00->field_01D5;
        }
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        if ((iVar5 < 0) ||
           (pSVar6 = (STT3DSprC *)Init(this_00,unaff_EDI), pSVar6 != (STT3DSprC *)0x0)) {
          bVar13 = 0x1d;
          pcVar7 = (char *)sub_0057F470(this_00,iVar5,0);
          iVar10 = STT3DSprC::LoadSequence(pSVar6,0xe,DAT_00806774,pcVar7,bVar13);
          if (iVar10 == 0) {
            bVar13 = 0x1d;
            pcVar7 = (char *)sub_0057F470(this_00,iVar5,1);
            iVar10 = STT3DSprC::LoadSequence(pSVar6,0xd,DAT_00806774,pcVar7,bVar13);
            if (iVar10 == 0) {
              STT3DSprC::StartShow(pSVar6,0xe,g_playSystem_00802A38->field_00E4);
              STT3DSprC::sub_004ACEF0(pSVar6,DAT_008073cc);
              STT3DSprC::sub_004ACF50(pSVar6,'\r');
              STT3DSprC::StartShow(pSVar6,0xd,g_playSystem_00802A38->field_00E4);
              local_14 = this_00->field_0245 + local_c;
              STT3DSprC::sub_004AD3C0
                        (pSVar6,(float)local_14 * _DAT_007904f8 + _DAT_007904f4,
                         (float)(this_00->field_0249 + local_10) * _DAT_007904f8 + _DAT_007904f4,
                         (float)this_00->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc)
              ;
              FUN_006ea3e0((void *)this_00->field_0211,pSVar6->field_0018,-1);
              goto LAB_0057fc59;
            }
          }
        }
        local_8 = 0;
        break;
      }
LAB_0057fc59:
      iVar5 = iVar5 + 2;
    } while (iVar5 < 7);
    if (iVar5 != 8) {
      local_8 = 0;
    }
    goto LAB_0057fd72;
  default:
    goto switchD_0057f734_caseD_df;
  case CASE_E0:
    if ((((((int)local_18->field_0245 < (int)g_worldGrid.sizeX) && (-1 < (int)local_18->field_0245))
         && (local_18->field_0249 < (int)g_worldGrid.sizeY)) &&
        ((-1 < local_18->field_0249 && (iVar5 = local_18->field_024D, -1 < iVar5)))) &&
       ((iVar5 < 5 &&
        (iVar5 = thunk_FUN_004961b0(*(short *)&local_18->field_0245,(short)local_18->field_0249,
                                    (short)iVar5), iVar5 != 0)))) {
      sVar1 = *(short *)&this_00->field_0245;
      sVar2 = (short)this_00->field_024D;
      sVar3 = (short)this_00->field_0249;
      if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
         (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))) {
        pSVar8 = (STWorldObject *)0x0;
      }
      else {
        pSVar8 = g_worldGrid.cells
                 [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar3 +
                  (int)sVar1].objects[0];
      }
      if (pSVar8 == (STWorldObject *)0x0) {
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
    iVar5 = thunk_FUN_004ab050();
    local_c = 0;
    if (0 < this_00->field_0265) {
      iVar10 = iVar5 * 2 + 1;
      local_10 = iVar5 * 8 + -0x1c;
      iVar5 = iVar10 * 4;
      do {
        iVar9 = iVar5;
        if (8 < iVar10) {
          iVar9 = local_10;
        }
        local_14 = *(int *)((int)&DAT_007cb0b8 + iVar9) + this_00->field_0245;
        STT3DSprC::sub_004AD3C0
                  (*(STT3DSprC **)(this_00->field_026D + local_c * 4),
                   (float)local_14 * _DAT_007904f8 + _DAT_007904f4,
                   (float)(*(int *)((int)&DAT_007cb0dc + iVar9) + this_00->field_0249) *
                   _DAT_007904f8 + _DAT_007904f4,
                   (float)this_00->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
        iVar11 = iVar5 + 4;
        iVar12 = iVar10 + 1;
        iVar9 = local_10 + 4;
        if (this_00->field_0255 == CASE_DE) {
          iVar11 = iVar5 + 8;
          iVar12 = iVar10 + 2;
          iVar9 = local_10 + 8;
        }
        local_10 = iVar9;
        local_c = local_c + 1;
        iVar5 = iVar11;
        iVar10 = iVar12;
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

