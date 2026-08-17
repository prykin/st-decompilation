#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::TraksCreate */

uint __thiscall
TraksClassTy::TraksCreate
          (TraksClassTy *this,short param_1,short param_2,uint param_3,int param_4,int param_5,
          int param_6,short param_7,short param_8,short param_9,short param_10,short param_11,
          short param_12,int param_13,short param_14,byte param_15)

{
  VisibleClassTy *pVVar2;
  int iVar4;
  int iVar7;
  char *text;
  ushort *puVar5;
  uint uVar10;
  int iVar3;
  short sVar6;
  int *piVar7;
  int iVar8;
  short *psVar9;
  bool bVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  undefined4 *puVar14;
  InternalExceptionFrame local_a8;
  uint local_64;
  TraksClassTy *local_60;
  int local_5c;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  int local_42;
  short local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  uint local_34;
  uint local_30;
  short local_2c;
  short local_2a;
  short local_28;
  uint local_26;
  ushort local_22;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;

  local_c = 0xffffffff;
  local_1c = 1;
  if (((param_15 & 1) == 0) && (DAT_0080731e == 0)) {
    return 0;
  }
  if (this->field_0024 == nullptr) {
    return 0;
  }
  local_10 = STBiasedDiv16(param_4, 0xc9); /* exact signed 16-bit grid-index division */
  local_18 = STBiasedDiv16(param_5, 0xc9); /* exact signed 16-bit grid-index division */
  iVar8 = STBiasedDiv16(param_6, 200); /* exact signed 16-bit grid-index division */
  local_60 = this;
  local_14 = iVar8;
  if ((param_15 & 2) != 0) goto LAB_0055693a;
  sVar6 = (short)local_18;
  if (g_sT3DSMAPContext_00807598 != nullptr) {
    if (((((int)(short)local_10 < g_sT3DSMAPContext_00807598->field_0048) ||
         (g_sT3DSMAPContext_00807598->field_0058 < (int)(short)local_10)) ||
        ((int)sVar6 < g_sT3DSMAPContext_00807598->field_0044)) ||
       (g_sT3DSMAPContext_00807598->field_0054 < (int)sVar6)) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_006ddbd0();
    }
    if (iVar4 == 0) {
      return 0;
    }
  }
  pVVar2 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 == nullptr) goto LAB_0055693a;
  iVar8 = (int)(short)iVar8;
  if ((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) {
LAB_00556926:
    bVar10 = true;
  }
  else {
    /* ST_CALLSITE[005568B6]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
    VisibleClassTy::sub_00558C00
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,(int)(short)local_10,
               (int)sVar6,&local_5c,&local_8);
    if ((iVar8 < 0) || (4 < iVar8)) goto LAB_00556926;
    if (((local_5c < 0) || ((int)pVVar2->field_0030 <= local_5c)) ||
       ((g_centeredOffsets5[iVar8] + local_8 < 0 ||
        (pVVar2->field_0034 <= g_centeredOffsets5[iVar8] + local_8)))) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if ((bVar10) && (pVVar2->field_004C != nullptr)) {
      bVar10 = pVVar2->field_004C
               [local_5c + (g_centeredOffsets5[iVar8] + local_8) * pVVar2->field_0030] != 0;
    }
    else {
      bVar10 = true;
    }
  }
  if (!bVar10) {
    return 0;
  }
LAB_0055693a:
  local_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a8;
  iVar7 = Library::MSVCRT::__setjmp3(local_a8.jumpBuffer,0);
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_a8.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\grig\\traks.cpp",0x1bc,0,iVar7,"%s",
                               "TraksClassTy::TraksCreate error ");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar7,0,"E:\\__titans\\grig\\traks.cpp",0x1bd);
    return 0xffffffff;
  }
  psVar9 = &local_58;
  for (iVar8 = 0xf; iVar8 != 0; iVar8 = iVar8 + -1) {
    psVar9[0] = 0;
    psVar9[1] = 0;
    psVar9 = psVar9 + 2;
  }
  local_4c = param_9;
  local_4a = param_10;
  local_48 = param_11;
  local_46 = param_12;
  local_44 = param_2;
  local_42 = param_13;
  local_3e = param_14;
  local_3c = (short)local_10;
  local_3a = (undefined2)local_18;
  local_58 = param_1;
  local_38 = (undefined2)local_14;
  local_56 = (short)param_4;
  local_54 = (short)param_5;
  local_52 = (short)param_6;
  local_50 = param_7;
  local_4e = param_8;
  local_36 = 0xffff;
  local_30 = g_playSystem_00802A38->field_00E4;
  if (((((param_7 == 0) && (param_8 == 0)) && (param_9 == 0)) &&
      ((param_10 == 0 && (param_11 == 0)))) && (param_12 == 0)) {
    local_1c = 0;
  }
  iVar8 = local_1c;
  piVar7 = PTR_00806764;
  if (*(int *)(&DAT_007c900c + param_1 * 0x18) != 1) {
    piVar7 = PTR_00806774;
  }
  puVar14 = nullptr;
  iVar13 = 0;
  iVar4 = 1;
  bVar12 = 0;
  uVar11 = 0xffffffff;
  local_2c = local_56;
  local_2a = local_54;
  local_28 = local_52;
  text = thunk_FUN_00555840((int)param_1);
  puVar5 = Library::Ourlib::MFRLOAD::mfRLoad(piVar7,CASE_1D,text,uVar11,bVar12,iVar4,iVar13,puVar14);
  local_22 = *puVar5;
  iVar4 = local_58 * 0x18;
  ST3DSMAPContext::sub_006E8660
            (g_sT3DSMAPContext_00807598,(int *)&local_c,1,0,*(uint *)(&DAT_007c9000 + iVar4),
             *(uint *)(&DAT_007c9004 + iVar4),*(uint *)(&DAT_007c8ff8 + iVar4),
             *(uint *)(&DAT_007c8ffc + iVar4),0);
  local_26 = local_c;
  ST3DSMAPContext::sub_006E98E0
            (g_sT3DSMAPContext_00807598,local_c,0,(int)(short)local_22,STField<int>(puVar5,0x21),
             1);
  if (iVar8 == 0) {
    Library::Ourlib::ST3DSMAP::SprSetSeqAnim
              (g_sT3DSMAPContext_00807598,local_26,(int)local_44,0xffffffff,0);
  }
  ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,local_26,0,param_3);
  if (-1 < local_42) {
    if (local_3e == -1) {
      Library::Ourlib::ST3DSMAP::SprSetLevAfter(g_sT3DSMAPContext_00807598,local_26,local_42);
    }
    else if (local_3e == 1) {
      Library::Ourlib::ST3DSMAP::SprSetLevBefore(g_sT3DSMAPContext_00807598,local_26,local_42);
    }
  }
  Library::Ourlib::ST3DSMAP::SprSetLevBeforeLand
            (g_sT3DSMAPContext_00807598,local_26,1,*(int *)(&DAT_007c9000 + local_58 * 0x18) / 2,
             *(int *)(&DAT_007c9004 + local_58 * 0x18) / 2);
  local_8 = (int)local_56;
  Library::Ourlib::ST3DSMAP::SprMove
            (g_sT3DSMAPContext_00807598,local_26,(float)local_8 * _DAT_007904f8 * _DAT_007904f0,
             (float)(int)local_54 * _DAT_007904f8 * _DAT_007904f0,
             (float)(int)local_52 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,local_26,0);
  local_36 = (undefined2)param_3;
  local_34 = local_60->field_0020;
  if (iVar8 != 0) {
    /* ST_CALLSITE[00556BFE]: CALL 0x00402d79; direct=00402D79 TraksClassTy::sub_00555D90 */
    uVar10 = sub_00555D90(local_60,(undefined4 *)&local_58);
    g_currentExceptionFrame = local_a8.previous;
    return uVar10;
  }
  g_currentExceptionFrame = local_a8.previous;
  return local_64;
}

