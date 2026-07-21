#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\minimap.cpp
   Diagnostic line evidence: 22 | 47 | 58 | 66 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl CreateMiniMap(short *param_1,int *param_2,uint param_3,byte *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  AnonShape_006DBCA0_EF06575F *pAVar10;
  AnonShape_006DDD50_309FA381 *this;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  InternalExceptionFrame local_68;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  AnonShape_006DDD50_309FA381 *local_10;
  int *local_c;
  float local_8;

  *param_2 = 0;
  param_2[1] = 0;
  local_8 = 1.4142135;
  local_10 = (AnonShape_006DDD50_309FA381 *)0x0;
  local_20 = 0;
  param_2[2] = 0;
  local_14 = 0;
  param_2[3] = 0;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar9 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  if (iVar9 == 0) {
    if (PTR_00802a58 != (cLoadingTy *)0x0) {
      cLoadingTy::SetProcess(PTR_00802a58,0,s_Preparing_mini_map____007c6f28,900);
    }
    pAVar10 = (AnonShape_006DBCA0_EF06575F *)FUN_006b04d0(0x4f2);
    if (pAVar10 == (AnonShape_006DBCA0_EF06575F *)0x0) {
      this = (AnonShape_006DDD50_309FA381 *)0x0;
    }
    else {
      this = (AnonShape_006DDD50_309FA381 *)FUN_006dbca0(pAVar10);
    }
    local_10 = this;
    if (this == (AnonShape_006DDD50_309FA381 *)0x0) {
      RaiseInternalException
                (-2,g_overwriteContext_007ED77C,s_E____titans_Andrey_minimap_cpp_007c6f00,0x16);
    }
    local_18 = (int)*param_1;
    dVar1 = (double)((float)(int)param_1[1] * local_8 * _DAT_007904f4);
    local_1c = -local_18;
    uVar12 = param_3 + 1 & 0xfffffffe;
    dVar2 = (double)((float)-(int)param_1[1] * local_8 * _DAT_007904f4);
    dVar3 = (double)((float)local_18 * local_8 * _DAT_007904f4);
    dVar4 = (double)((float)(int)local_1c * local_8 * _DAT_007904f4);
    FUN_006dc050((AnonShape_006DC050_D52EE3EA *)this,DAT_0080759c,0,0,uVar12,uVar12,SUB84(dVar4,0),
                 (int)((ulonglong)dVar4 >> 0x20),SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),
                 SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0),
                 (int)((ulonglong)dVar1 >> 0x20),0x4024000000000000,0x4023ee97865e3540,0);
    *(uint *)&this->field_0x128 = (uint)*param_4;
    this->field_0124 = 2;
    bVar6 = param_4[1];
    bVar7 = param_4[2];
    bVar8 = param_4[3];
    this->field_0438 = param_4[0];
    this->field_0439 = bVar6;
    this->field_043A = bVar7;
    this->field_043B = bVar8;
    bVar6 = param_4[5];
    iVar9 = 0;
    this->field_043C = param_4[4];
    this->field_043D = bVar6;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (0 < *(int *)((int)param_1 + 0x455)) {
      piVar13 = (int *)((int)param_1 + 0x459);
      do {
        puVar11 = (undefined4 *)*piVar13;
        if ((puVar11 != (undefined4 *)0x0) && (*(short *)(puVar11 + 2) != 0)) {
          *puVar11 = this->field_0140;
          this->field_0140 = puVar11;
          this->field_013C = this->field_013C + 1;
        }
        iVar9 = iVar9 + 1;
        piVar13 = piVar13 + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      } while (iVar9 < *(int *)((int)param_1 + 0x455));
    }
    local_24 = param_3 * param_3;
    local_1c = 0;
    local_c = param_2;
    do {
      uVar12 = local_1c;
      if (PTR_00802a58 != (cLoadingTy *)0x0) {
        cLoadingTy::SetState(PTR_00802a58,CASE_1,local_14,(char *)0x0);
      }
      local_14 = local_14 + 1;
      local_18 = (int)*param_1;
      FUN_006dd610(this,uVar12 | 8,SUB84((double)((float)local_18 * _DAT_007904f4),0),
                   (int)((ulonglong)(double)((float)local_18 * _DAT_007904f4) >> 0x20),
                   SUB84((double)((float)(int)param_1[1] * _DAT_007904f4),0),
                   (int)((ulonglong)(double)((float)(int)param_1[1] * _DAT_007904f4) >> 0x20));
      FUN_006ddbe0((AnonShape_006DDBE0_9835BAB9 *)this);
      FUN_006ddd50(this);
      puVar11 = Library::DKW::LIB::FUN_006aac10(local_24);
      *local_c = (int)puVar11;
      if (puVar11 == (undefined4 *)0x0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,s_E____titans_Andrey_minimap_cpp_007c6f00,0x2f);
      }
      iVar9 = 0;
      if (0 < (int)param_3) {
        local_18 = 0;
        do {
          puVar11 = (undefined4 *)(this->field_0028 * iVar9 + this->field_000C);
          puVar15 = (undefined4 *)(*local_c + local_18);
          for (uVar12 = param_3 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar15 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar15 = puVar15 + 1;
          }
          iVar9 = iVar9 + 1;
          for (uVar12 = param_3 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined1 *)puVar15 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar15 = (undefined4 *)((int)puVar15 + 1);
          }
          local_18 = local_18 + param_3;
          uVar12 = local_1c;
        } while (iVar9 < (int)param_3);
      }
      local_1c = uVar12 + 1;
      local_c = local_c + 1;
    } while ((int)local_1c < 4);
    g_currentExceptionFrame = local_68.previous;
    iVar9 = local_20;
  }
  else {
    g_currentExceptionFrame = local_68.previous;
    local_20 = iVar9;
    iVar14 = ReportDebugMessage(s_E____titans_Andrey_minimap_cpp_007c6f00,0x3a,0,iVar9,&DAT_007a4ccc
                                ,s_CreateMiniMap_007c6ef0);
    this = local_10;
    if (iVar14 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  if (this != (AnonShape_006DDD50_309FA381 *)0x0) {
    FUN_006dbcf0((int *)this);
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)this);
  }
  if (iVar9 != 0) {
    iVar14 = 4;
    do {
      FreeAndNull((void **)param_2);
      param_2 = param_2 + 1;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    RaiseInternalException
              (iVar9,g_overwriteContext_007ED77C,s_E____titans_Andrey_minimap_cpp_007c6f00,0x42);
  }
  if (PTR_00802a58 != (cLoadingTy *)0x0) {
    cLoadingTy::SetState(PTR_00802a58,CASE_2,0,(char *)0x0);
  }
  return;
}

