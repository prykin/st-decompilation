#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tload.cpp
   Diagnostic line evidence: 1166 | 1282 | 1283 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00576EF0 -> 0042A290 @ 00576F31

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00576EF0 -> 0042A290 @ 00576F31 */

short * __cdecl LoadLand(cMf32 *param_1,char *text)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  short *psVar4;
  char *pcVar5;
  undefined1 *puVar6;
  AnonShape_006DBCA0_EF06575F *pAVar7;
  int *piVar8;
  int iVar9;
  short *psVar10;
  uint uVar11;
  undefined4 *puVar12;
  AnonShape_006DDD50_309FA381 *this;
  uint uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  CHAR local_f4 [128];
  InternalExceptionFrame local_74;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 *local_20;
  short *local_1c;
  int local_18;
  int *local_14;
  AnonShape_006DDD50_309FA381 *local_10;
  DArrayTy *local_c;
  uint local_8;

  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  iVar3 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0);
  if (iVar3 == 0) {
    psVar4 = Library::Ourlib::MFSTMAP::mfTMapLoad
                       ((int)param_1,text,g_cMf32_00806760,g_cMf32_00806760,&LAB_00403dff);
    local_1c = psVar4;
    if (PTR_00802a58 != (cLoadingTy *)0x0) {
      iVar3 = DAT_007f4e00;
      pcVar5 = LoadResourceString(0x2685,HINSTANCE_00807618);
      wsprintfA(local_f4,pcVar5,iVar3);
      cLoadingTy::SetState(PTR_00802a58,CASE_2,0,local_f4);
      if (PTR_00802a58 != (cLoadingTy *)0x0) {
        iVar3 = DAT_007f4e00 / 2;
        pcVar5 = LoadResourceString(0x268c,HINSTANCE_00807618);
        cLoadingTy::SetProcess(PTR_00802a58,0,pcVar5,iVar3);
        cLoadingTy::SetState(PTR_00802a58,CASE_0,0,(char *)0x0);
      }
    }
    psVar10 = psVar4 + 7;
    iVar3 = 0x100;
    puVar6 = (undefined1 *)(DAT_0080679c + 0x29);
    do {
      *(undefined1 *)((int)psVar10 + -1) = puVar6[1];
      *(undefined1 *)psVar10 = *puVar6;
      *(undefined1 *)((int)psVar10 + 1) = puVar6[-1];
      psVar10 = psVar10 + 2;
      iVar3 = iVar3 + -1;
      puVar6 = puVar6 + 4;
    } while (iVar3 != 0);
    *(undefined1 *)((int)psVar4 + 0x409) = 0xff;
    *(undefined1 *)(psVar4 + 0x205) = 0xff;
    *(undefined1 *)((int)psVar4 + 0x40b) = 0xff;
    pAVar7 = (AnonShape_006DBCA0_EF06575F *)FUN_006b04d0(0x4f2);
    if (pAVar7 == (AnonShape_006DBCA0_EF06575F *)0x0) {
      local_10 = (AnonShape_006DDD50_309FA381 *)0x0;
    }
    else {
      local_10 = (AnonShape_006DDD50_309FA381 *)FUN_006dbca0(pAVar7);
    }
    this = local_10;
    if (local_10 == (AnonShape_006DDD50_309FA381 *)0x0) {
      RaiseInternalException(-2,g_overwriteContext_007ED77C,"E:\\__titans\\tload.cpp",0x48e);
    }
    Library::MSVCRT::FUN_0072e150(0xc0000000,0x403ccccc);
    lVar15 = Library::MSVCRT::__ftol();
    iVar3 = (int)lVar15;
    local_30 = iVar3;
    FUN_006dc050((AnonShape_006DC050_D52EE3EA *)this,0,0,0,iVar3,iVar3,0,0xc0240000,0,0x40240000,0,
                 0xc0240000,0,0x40240000,0x4024000000000000,0x4023ee97865e3540,0);
    *(undefined4 *)&this->field_0x128 = 0;
    FUN_006dd790(this,140.204);
    FUN_006dd800(this,219.932);
    this->field_0124 = 5;
    FUN_006dd610(this,4,0,0x40240000,0,0x40240000);
    local_c = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,100,8,100);
    local_18 = 0;
    if (0 < *(int *)((int)psVar4 + 0x455)) {
      local_14 = (int *)((int)psVar4 + 0x459);
      do {
        puVar1 = (undefined4 *)*local_14;
        if (puVar1 != (undefined4 *)0x0) {
          local_8 = local_c->count;
          local_c->iteratorIndex = 0;
          do {
            uVar11 = local_c->iteratorIndex;
            if (uVar11 < local_8) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_c, uVar11) (runtime stride) */
              piVar8 = (int *)(local_c->elementSize * uVar11 + (int)local_c->data);
              local_c->iteratorIndex = uVar11 + 1;
            }
            else {
              piVar8 = (int *)0x0;
            }
          } while ((piVar8 != (int *)0x0) && (puVar1[10] != *piVar8));
          if (piVar8 == (int *)0x0) {
            local_8 = (uint)*(short *)(puVar1 + 1);
            local_28 = (int)*(short *)((int)puVar1 + 6);
            *(undefined2 *)(puVar1 + 1) = 0;
            *(undefined2 *)((int)puVar1 + 6) = 0;
            local_2c = (int)*(short *)(puVar1 + 2);
            *(ushort *)(puVar1 + 2) = (ushort)*(byte *)(puVar1 + 0x12);
            *puVar1 = this->field_0140;
            this->field_0140 = puVar1;
            this->field_013C = this->field_013C + 1;
            FUN_006ddbe0((AnonShape_006DDBE0_9835BAB9 *)this);
            FUN_006ddd50(this);
            uVar13 = iVar3 * iVar3;
            this->field_0140 = 0;
            this->field_013C = 0;
            *(undefined2 *)((int)puVar1 + 6) = (undefined2)local_28;
            *(undefined2 *)(puVar1 + 1) = (undefined2)local_8;
            local_24 = puVar1[10];
            *(undefined2 *)(puVar1 + 2) = (undefined2)local_2c;
            local_20 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(uVar13);
            puVar12 = (undefined4 *)this->field_000C;
            puVar14 = local_20;
            for (uVar11 = uVar13 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar14 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar14 = puVar14 + 1;
            }
            for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
              puVar12 = (undefined4 *)((int)puVar12 + 1);
              puVar14 = (undefined4 *)((int)puVar14 + 1);
            }
            puVar1[0x10] = local_20;
            Library::DKW::TBL::FUN_006ae1c0(&local_c->flags,&local_24);
            this = local_10;
            iVar3 = local_30;
          }
          else {
            puVar1[0x10] = piVar8[1];
          }
        }
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
        psVar4 = local_1c;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      } while (local_18 < *(int *)((int)local_1c + 0x455));
    }
    if (this != (AnonShape_006DDD50_309FA381 *)0x0) {
      FUN_006dbcf0((int *)this);
      Library::MSVCRT::FUN_0072e2b0((HoloTy *)this);
    }
    DArrayDestroy(local_c);
    thunk_FUN_00428e50(psVar4);
    LandInit(psVar4);
    if (PTR_00802a58 != (cLoadingTy *)0x0) {
      cLoadingTy::SetState(PTR_00802a58,CASE_2,0,(char *)0x0);
    }
    g_currentExceptionFrame = local_74.previous;
    return psVar4;
  }
  g_currentExceptionFrame = local_74.previous;
  iVar9 = ReportDebugMessage("E:\\__titans\\tload.cpp",0x502,0,iVar3,"%s",
                             "LoadLand");
  if (iVar9 == 0) {
    RaiseInternalException(iVar3,0,"E:\\__titans\\tload.cpp",0x503);
    return (short *)0x0;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

