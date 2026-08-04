#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\minimap.cpp
   Diagnostic line evidence: 22 | 47 | 58 | 66 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl CreateMiniMap(short *param_1,int *param_2,uint param_3,byte *param_4)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  AnonShape_006DBCA0_EF06575F *pAVar6;
  ST3DSMAPContext *this;
  void *pvVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  InternalExceptionFrame local_68;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  ST3DSMAPContext *local_10;
  int *local_c;
  float local_8;

  *param_2 = 0;
  param_2[1] = 0;
  local_8 = 1.4142135;
  local_10 = nullptr;
  local_20 = 0;
  param_2[2] = 0;
  local_14 = 0;
  param_2[3] = 0;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar5 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  if (iVar5 == 0) {
    if (g_cLoading_00802A58 != nullptr) {
      cLoadingTy::SetProcess(g_cLoading_00802A58,0,"Preparing mini-map...",900);
    }
    pAVar6 = (AnonShape_006DBCA0_EF06575F *)FUN_006b04d0(0x4f2);
    if (pAVar6 == nullptr) {
      this = nullptr;
    }
    else {
      this = (ST3DSMAPContext *)FUN_006dbca0(pAVar6);
    }
    local_10 = this;
    if (this == nullptr) {
      RaiseInternalException
                (-2,g_overwriteContext_007ED77C,"E:\\__titans\\Andrey\\minimap.cpp",0x16);
    }
    local_18 = (int)*param_1;
    local_1c = -local_18;
    uVar8 = param_3 + 1 & 0xfffffffe;
    ST3DSMAPContext::sub_006DC050
              (this,g_dDXContext_0080759C,0,0,uVar8,uVar8,
               (double)((float)(int)local_1c * local_8 * _DAT_007904f4),
               (double)((float)local_18 * local_8 * _DAT_007904f4),
               (double)((float)-(int)param_1[1] * local_8 * _DAT_007904f4),
               (double)((float)(int)param_1[1] * local_8 * _DAT_007904f4),10.0,9.965999793052674,0);
    this->field_0128 = (uint)*param_4;
    this->field_0124 = 2;
    bVar2 = param_4[1];
    bVar3 = param_4[2];
    bVar4 = param_4[3];
    this->field_0438 = param_4[0];
    this->field_0439 = bVar2;
    this->field_043A = bVar3;
    this->field_043B = bVar4;
    bVar2 = param_4[5];
    iVar5 = 0;
    this->field_043C = param_4[4];
    this->field_043D = bVar2;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (0 < *(int *)((int)param_1 + 0x455)) {
      piVar9 = (int *)((int)param_1 + 0x459);
      do {
        puVar11 = (undefined4 *)*piVar9;
        if ((puVar11 != nullptr) && (*(short *)(puVar11 + 2) != 0)) {
          *puVar11 = this->field_0140;
          this->field_0140 = puVar11;
          this->field_013C = this->field_013C + 1;
        }
        iVar5 = iVar5 + 1;
        piVar9 = piVar9 + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      } while (iVar5 < *(int *)((int)param_1 + 0x455));
    }
    local_24 = param_3 * param_3;
    local_1c = 0;
    local_c = param_2;
    do {
      uVar8 = local_1c;
      if (g_cLoading_00802A58 != nullptr) {
        cLoadingTy::SetState(g_cLoading_00802A58,CASE_1,local_14,nullptr);
      }
      local_14 = local_14 + 1;
      local_18 = (int)*param_1;
      ST3DSMAPContext::sub_006DD610
                (this,uVar8 | 8,(double)((float)local_18 * _DAT_007904f4),
                 (double)((float)(int)param_1[1] * _DAT_007904f4));
      ST3DSMAPContext::sub_006DDBE0(this);
      ST3DSMAPContext::sub_006DDD50(this);
      pvVar7 = Library::DKW::LIB::MemAllocClear(local_24);
      *local_c = (int)pvVar7;
      if (pvVar7 == nullptr) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\Andrey\\minimap.cpp",0x2f);
      }
      iVar5 = 0;
      if (0 < (int)param_3) {
        local_18 = 0;
        do {
          puVar11 = (undefined4 *)(this->field_0028 * iVar5 + this->field_000C);
          puVar12 = (undefined4 *)(*local_c + local_18);
          for (uVar8 = param_3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          iVar5 = iVar5 + 1;
          for (uVar8 = param_3 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          local_18 = local_18 + param_3;
          uVar8 = local_1c;
        } while (iVar5 < (int)param_3);
      }
      local_1c = uVar8 + 1;
      local_c = local_c + 1;
    } while ((int)local_1c < 4);
    g_currentExceptionFrame = local_68.previous;
    iVar5 = local_20;
  }
  else {
    g_currentExceptionFrame = local_68.previous;
    local_20 = iVar5;
    iVar10 = ReportDebugMessage("E:\\__titans\\Andrey\\minimap.cpp",0x3a,0,iVar5,"%s"
                                ,"CreateMiniMap");
    this = local_10;
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  if (this != nullptr) {
    ST3DSMAPContext::sub_006DBCF0(this);
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)this);
  }
  if (iVar5 != 0) {
    iVar10 = 4;
    do {
      FreeAndNull((void **)param_2);
      param_2 = param_2 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    RaiseInternalException
              (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Andrey\\minimap.cpp",0x42);
  }
  if (g_cLoading_00802A58 != nullptr) {
    cLoadingTy::SetState(g_cLoading_00802A58,CASE_2,0,nullptr);
  }
  return;
}

