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
  AnonShape_005751F0_0FFC949A *pAVar4;
  char *pcVar5;
  undefined1 *puVar6;
  AnonShape_006DBCA0_EF06575F *pAVar7;
  int *piVar8;
  int iVar9;
  short *psVar10;
  undefined1 *puVar11;
  uint uVar12;
  byte *puVar13;
  ST3DSMAPContext *this;
  uint uVar14;
  byte *puVar15;
  longlong lVar16;
  CHAR local_f4 [128];
  InternalExceptionFrame local_74;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 *local_20;
  AnonShape_005751F0_0FFC949A *local_1c;
  int local_18;
  AnonShape_005751F0_0FFC949A *local_14;
  ST3DSMAPContext *local_10;
  DArrayTy *local_c;
  uint local_8;

  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  iVar3 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0);
  if (iVar3 == 0) {
    pAVar4 = (AnonShape_005751F0_0FFC949A *)
             Library::Ourlib::MFSTMAP::mfTMapLoad
                       ((int)param_1,text,g_cMf32_00806760,g_cMf32_00806760,thunk_FUN_00428a10);
    local_1c = pAVar4;
    if (g_cLoading_00802A58 != nullptr) {
      iVar3 = DAT_007f4e00;
      pcVar5 = LoadResourceString(0x2685,g_module_00807618);
      wsprintfA(local_f4,pcVar5,iVar3);
      cLoadingTy::SetState(g_cLoading_00802A58,CASE_2,0,local_f4);
      if (g_cLoading_00802A58 != nullptr) {
        iVar3 = DAT_007f4e00 / 2;
        pcVar5 = LoadResourceString(0x268c,g_module_00807618);
        cLoadingTy::SetProcess(g_cLoading_00802A58,0,pcVar5,iVar3);
        cLoadingTy::SetState(g_cLoading_00802A58,CASE_0,0,nullptr);
      }
    }
    puVar11 = &pAVar4->field_0xe;
    iVar3 = 0x100;
    puVar6 = (undefined1 *)(DAT_0080679c + 0x29);
    do {
      puVar11[-1] = puVar6[1];
      *puVar11 = *puVar6;
      puVar11[1] = puVar6[-1];
      puVar11 = puVar11 + 4;
      iVar3 = iVar3 + -1;
      puVar6 = puVar6 + 4;
    } while (iVar3 != 0);
    pAVar4->field_0x409 = 0xff;
    pAVar4->field_0x40a = 0xff;
    pAVar4->field_0x40b = 0xff;
    pAVar7 = (AnonShape_006DBCA0_EF06575F *)FUN_006b04d0(0x4f2);
    if (pAVar7 == nullptr) {
      local_10 = nullptr;
    }
    else {
      local_10 = (ST3DSMAPContext *)FUN_006dbca0(pAVar7);
    }
    this = local_10;
    if (local_10 == nullptr) {
      RaiseInternalException(-2,g_overwriteContext_007ED77C,"E:\\__titans\\tload.cpp",0x48e);
    }
    Library::MSVCRT::FUN_0072e150(0xc0000000,0x403ccccc);
    lVar16 = Library::MSVCRT::__ftol();
    iVar3 = (int)lVar16;
    local_30 = iVar3;
    ST3DSMAPContext::sub_006DC050
              (this,0,0,0,iVar3,iVar3,-10.0,10.0,-10.0,10.0,10.0,9.965999793052674,0);
    this->field_0128 = 0;
    ST3DSMAPContext::sub_006DD790(this,140.204);
    ST3DSMAPContext::sub_006DD800(this,219.932);
    this->field_0124 = 5;
    ST3DSMAPContext::sub_006DD610(this,4,10.0,10.0);
    local_c = Library::DKW::TBL::DArrayCreate(nullptr,100,8,100);
    local_18 = 0;
    if (0 < pAVar4->field_0455) {
      local_14 = pAVar4 + 1;
      do {
        puVar1 = *(undefined4 **)local_14;
        if (puVar1 != nullptr) {
          local_8 = local_c->count;
          local_c->iteratorIndex = 0;
          do {
            uVar12 = local_c->iteratorIndex;
            if (uVar12 < local_8) {
              piVar8 = DArrayAt<int>(local_c, uVar12);
              local_c->iteratorIndex = uVar12 + 1;
            }
            else {
              piVar8 = nullptr;
            }
          } while ((piVar8 != nullptr) && (puVar1[10] != *piVar8));
          if (piVar8 == nullptr) {
            local_8 = (uint)*(short *)(puVar1 + 1);
            local_28 = (int)*(short *)((int)puVar1 + 6);
            *(undefined2 *)(puVar1 + 1) = 0;
            *(undefined2 *)((int)puVar1 + 6) = 0;
            local_2c = (int)*(short *)(puVar1 + 2);
            *(ushort *)(puVar1 + 2) = (ushort)*(byte *)(puVar1 + 0x12);
            *puVar1 = this->field_0140;
            this->field_0140 = puVar1;
            this->field_013C = this->field_013C + 1;
            ST3DSMAPContext::sub_006DDBE0(this);
            ST3DSMAPContext::sub_006DDD50(this);
            uVar14 = iVar3 * iVar3;
            this->field_0140 = nullptr;
            this->field_013C = 0;
            *(undefined2 *)((int)puVar1 + 6) = (undefined2)local_28;
            *(undefined2 *)(puVar1 + 1) = (undefined2)local_8;
            local_24 = puVar1[10];
            *(undefined2 *)(puVar1 + 2) = (undefined2)local_2c;
            local_20 = Library::DKW::LIB::MemAlloc(uVar14);
            puVar13 = (byte *)this->field_000C;
            puVar15 = (byte *)(local_20);
            memmove(puVar15, puVar13, uVar14); /* compiler REP MOVS byte copy */
            puVar1[0x10] = local_20;
            Library::DKW::TBL::DArrayAppend(local_c,&local_24);
            this = local_10;
            iVar3 = local_30;
          }
          else {
            puVar1[0x10] = piVar8[1];
          }
        }
        local_18 = local_18 + 1;
        local_14 = (AnonShape_005751F0_0FFC949A *)&local_14->field_0004;
        pAVar4 = local_1c;
      } while (local_18 < local_1c->field_0455);
    }
    if (this != nullptr) {
      ST3DSMAPContext::sub_006DBCF0(this);
      Library::MSVCRT::FUN_0072e2b0((HoloTy *)this);
    }
    DArrayDestroy(local_c);
    thunk_FUN_00428e50((short *)pAVar4);
    LandInit(pAVar4);
    if (g_cLoading_00802A58 != nullptr) {
      cLoadingTy::SetState(g_cLoading_00802A58,CASE_2,0,nullptr);
    }
    g_currentExceptionFrame = local_74.previous;
    return (short *)pAVar4;
  }
  g_currentExceptionFrame = local_74.previous;
  iVar9 = ReportDebugMessage("E:\\__titans\\tload.cpp",0x502,0,iVar3,"%s",
                             "LoadLand");
  if (iVar9 == 0) {
    RaiseInternalException(iVar3,0,"E:\\__titans\\tload.cpp",0x503);
    return nullptr;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

