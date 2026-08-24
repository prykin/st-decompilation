#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Part.Cpp
   STParticleC::InitVisibelDeton */

undefined4 __thiscall STParticleC::InitVisibelDeton(STParticleC *this,int param_1)

{
  uint *puVar1;
  AnonPointee_STParticleC_00EB *pAVar2;
  short sVar4;
  float fVar5;
  VisibleClassTy *pVVar6;
  STParticleC *pSVar7;
  int iVar8;
  char *text;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  uint uVar10;
  int iVar11;
  bool bVar12;
  uint *puVar13;
  InternalExceptionFrame local_60;
  float local_1c;
  STParticleC *local_18;
  int local_14;
  int local_10;
  float local_c;
  uint local_8;

  local_8 = 0;
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_18 = this;
  iVar8 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
  pSVar7 = local_18;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\nick\\to_Part.Cpp",800,0,iVar8,"%s",
                                "STParticleC::InitVisibelDeton");
    if (iVar10 == 0) {
      RaiseInternalException(iVar8,0,"E:\\__titans\\nick\\to_Part.Cpp",0x322);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  text = PTR_s_expl_sb1_007d0c44;
  if (3 < (byte)local_18->field_0014) {
    text = PTR_s_expl_sb0_007d0c40;
  }
  puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                     (PTR_00806764,CASE_1D,text,0xffffffff,0,1,0,nullptr);
  pSVar7->field_00B6 = *(int *)puVar8;
  if (param_1 != 0) {
    puVar1 = &pSVar7->field_00C6;
    if ((int)pSVar7->field_00C6 < 0) {
      ST3DSMAPContext::sub_006E8660
                (g_sT3DSMAPContext_00807598,puVar1,2,0,STField<uint>(puVar8,9),
                 STField<uint>(puVar8,0xd),0x5a,0x45,0);
    }
    else {
      Library::Ourlib::ST3DSMAP::SprSetShadow(g_sT3DSMAPContext_00807598,pSVar7->field_00C6,0,0,0);
      Library::Ourlib::ST3DSMAP::SprSetIms
                (g_sT3DSMAPContext_00807598,*puVar1,2,0,STField<uint>(puVar8,9),
                 STField<uint>(puVar8,0xd),0x5a,0x45,1);
    }
    ST3DSMAPContext::sub_006E98E0
              (g_sT3DSMAPContext_00807598,*puVar1,0,*(int *)puVar8,STField<int>(puVar8,0x21),1);
    ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,*puVar1,0,pSVar7->field_00B2);
    local_1c = (float)pSVar7->field_0046 * _DAT_007904f8 * _DAT_007904f0;
    pSVar7->field_006A = local_1c;
    local_c = (float)pSVar7->field_004A * _DAT_007904f8 * _DAT_007904f0;
    pSVar7->field_006E = local_c;
    fVar5 = (float)pSVar7->field_004E * _DAT_007904f8 * _DAT_007904f0;
    pSVar7->field_0072 = fVar5;
    Library::Ourlib::ST3DSMAP::SprMove
              (g_sT3DSMAPContext_00807598,*puVar1,local_1c,local_c,fVar5 + _DAT_007904fc);
    Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,*puVar1,0);
    pSVar7->field_00C1 = 1;
    pVVar6 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 != nullptr) {
      iVar11 = pSVar7->field_004E;
      sVar4 = (short)(iVar11 >> 0x1f);
      if (iVar11 < 0) {
        local_c = (float)((short)(((short)(iVar11 / 200) + sVar4) -
                                 (short)((longlong)iVar11 * 0x51eb851f >> 0x3f)) + -1);
      }
      else {
        local_c = (float)(int)(short)(((short)(iVar11 / 200) + sVar4) -
                                     (short)((longlong)iVar11 * 0x51eb851f >> 0x3f));
      }
      iVar11 = pSVar7->field_004A;
      iVar11 = STBiasedDiv16(iVar11, 0xc9); /* exact signed 16-bit grid-index division */
      iVar9 = pSVar7->field_0046;
      iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
      if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          /* ST_CALLSITE[00629AE8]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
          (VisibleClassTy::sub_00558C00
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar11,
                      &local_14,&local_10), (int)local_c < 0)) || (4 < (int)local_c)) {
        bVar12 = true;
      }
      else {
        if (((local_14 < 0) || ((int)pVVar6->field_0030 <= local_14)) ||
           ((local_10 + g_centeredOffsets5[(int)local_c] < 0 ||
            (pVVar6->field_0034 <= local_10 + g_centeredOffsets5[(int)local_c])))) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if ((bVar12) && (pVVar6->field_004C != nullptr)) {
          bVar12 = pVVar6->field_004C
                   [local_14 + (g_centeredOffsets5[(int)local_c] + local_10) * pVVar6->field_0030]
                   != 0;
        }
        else {
          bVar12 = true;
        }
      }
      if (bVar12) {
        if (pSVar7->field_00C1 == '\0') {
          Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,*puVar1,0);
          pSVar7->field_00C1 = 1;
        }
      }
      else if (pSVar7->field_00C1 == '\x01') {
        Library::Ourlib::ST3DSMAP::SprHide(g_sT3DSMAPContext_00807598,*puVar1);
        pSVar7->field_00C1 = 0;
      }
    }
    if ((byte)pSVar7->field_0014 < 4) {
      puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                         (PTR_00806764,CASE_1D,"expl_s1",0xffffffff,0,1,0,nullptr
                         );
      if (0xe < (int)pSVar7->field_00B2) {
        local_8 = pSVar7->field_00B2 + 3;
      }
      ST3DSMAPContext::sub_006E98E0
                (g_sT3DSMAPContext_00807598,*puVar1,1,*(int *)puVar8,STField<int>(puVar8,0x21),1);
      ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,*puVar1,1,local_8);
      puVar13 = (uint *)*puVar1;
    }
    else {
      puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                         (PTR_00806764,CASE_1D,"expl_s0",0xffffffff,0,1,0,nullptr
                         );
      if (0xe < (int)pSVar7->field_00B2) {
        local_8 = pSVar7->field_00B2 - 0xf;
      }
      ST3DSMAPContext::sub_006E98E0
                (g_sT3DSMAPContext_00807598,*puVar1,1,*(int *)puVar8,STField<int>(puVar8,0x21),1);
      ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,*puVar1,1,local_8);
      puVar13 = (uint *)*puVar1;
    }
    ST3DSMAPContext::sub_006E9D40(g_sT3DSMAPContext_00807598,puVar13,1);
    pAVar2 = pSVar7->field_00EB;
    if (pAVar2 != nullptr) {
      if (pSVar7->field_00F3 == 0) {
        Library::Ourlib::ST3DSMAP::SprSetLevBefore
                  (g_sT3DSMAPContext_00807598,*puVar1,pAVar2->field_01ED);
      }
      else {
        Library::Ourlib::ST3DSMAP::SprSetLevAfter
                  (g_sT3DSMAPContext_00807598,*puVar1,pAVar2->field_01ED);
      }
    }
    Library::Ourlib::ST3DSMAP::SprSetLevBeforeLand(g_sT3DSMAPContext_00807598,*puVar1,1,0x5a,0x53);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  return 0;
}

