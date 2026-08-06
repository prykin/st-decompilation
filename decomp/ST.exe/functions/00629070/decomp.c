#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Part.Cpp
   STParticleC::InitVisibelFlight */

undefined4 __thiscall STParticleC::InitVisibelFlight(STParticleC *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  short sVar5;
  float fVar6;
  VisibleClassTy *pVVar7;
  STParticleC *pSVar8;
  int iVar9;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar11;
  int iVar12;
  char **ppcVar13;
  bool bVar14;
  InternalExceptionFrame local_70;
  int local_2c;
  int local_28;
  uint local_24;
  float local_20;
  STParticleC *local_1c;
  uint local_18;
  float local_14;
  uint local_10;
  uint local_c;
  char **local_8;

  local_24 = (uint)this->field_0014 >> 8 & 0xff;
  ppcVar13 = nullptr;
  local_8 = nullptr;
  switch(local_24) {
  case 0:
  case 1:
    iVar12 = this->field_001C;
    if (iVar12 == 4) {
      ppcVar13 = &PTR_s_partdw01_007d0798;
      local_8 = &PTR_s_partdw01_007d0798;
      iVar12 = (uint)*(byte *)&this->field_0014 * 8;
      local_10 = *(int *)(&DAT_007d0af0 + iVar12) / 2;
      local_c = *(int *)(&DAT_007d0af4 + iVar12) / 2 - 0xe;
    }
    else {
      if (local_24 == 0) {
        iVar10 = (uint)*(byte *)&this->field_0014 * 8;
        iVar2 = *(int *)(&DAT_007d0a70 + iVar10);
        iVar10 = *(int *)("%" + iVar10);
      }
      else {
        iVar10 = (uint)*(byte *)&this->field_0014 * 8;
        iVar2 = *(int *)(&DAT_007d0bf0 + iVar10);
        iVar10 = *(int *)(&DAT_007d0bf4 + iVar10);
      }
      local_10 = iVar2 / 2;
      local_c = iVar10 / 2 - 0xe;
      if ((this->field_0014 & 0x100) == 0) {
        if (iVar12 == 2) {
          ppcVar13 = &PTR_s_particle0_007d0718;
          local_8 = &PTR_s_particle0_007d0718;
        }
        else {
          ppcVar13 = &PTR_s_particle01_007d0758;
          local_8 = &PTR_s_particle01_007d0758;
        }
      }
      else if (iVar12 == 2) {
        ppcVar13 = &PTR_s_part_g0_007d0800;
        local_8 = &PTR_s_part_g0_007d0800;
      }
      else {
        ppcVar13 = &PTR_s_part_w0_007d07d8;
        local_8 = &PTR_s_part_w0_007d07d8;
      }
    }
    break;
  case 2:
    ppcVar13 = &PTR_s_gr2part0_007d0828;
    local_8 = &PTR_s_gr2part0_007d0828;
    local_10 = DAT_007d09d4 / 2;
    local_c = local_10 - 0xe;
    break;
  case 4:
    ppcVar13 = &PTR_s_stoun0_007d09d8;
    local_8 = &PTR_s_stoun0_007d09d8;
    iVar12 = *(int *)(&DAT_007d0a00 + (uint)*(byte *)&this->field_0014 * 4);
    goto LAB_00629242;
  case 8:
    ppcVar13 = &PTR_s_gr1part0_007d0870;
    local_8 = &PTR_s_gr1part0_007d0870;
    local_10 = DAT_007d09d4 / 2;
    local_c = local_10 - 0xe;
    break;
  case 0x10:
    ppcVar13 = &PTR_s_partsi01_007d08c4;
    local_8 = &PTR_s_partsi01_007d08c4;
    iVar12 = (uint)*(byte *)&this->field_0014 * 8;
    local_10 = *(int *)(&DAT_007d0af0 + iVar12) / 2;
    local_c = *(int *)(&DAT_007d0af4 + iVar12) / 2 - 0xe;
    break;
  case 0x20:
    ppcVar13 = &PTR_s_part_s0_007d0924;
    local_8 = &PTR_s_part_s0_007d0924;
    iVar12 = (uint)*(byte *)&this->field_0014 * 8;
    local_10 = *(int *)(&DAT_007d0b70 + iVar12) / 2;
    local_c = *(int *)(&DAT_007d0b74 + iVar12) / 2 - 0xe;
    break;
  case 0x40:
    ppcVar13 = &PTR_s_grsi0_007d0984;
    local_8 = &PTR_s_grsi0_007d0984;
    iVar12 = DAT_007d09d4;
    goto LAB_00629242;
  case 0x80:
    ppcVar13 = &PTR_s_rubb3_007d08bc;
    local_8 = &PTR_s_rubb3_007d08bc;
    iVar12 = DAT_007d08b8;
LAB_00629242:
    local_10 = iVar12 / 2;
    local_c = local_10 - 0xe;
  }
  if (ppcVar13 == nullptr) {
    return 0xffffffff;
  }
  local_18 = STReplaceLowByte((uint32_t)(local_18), (uint8_t)(*(undefined1 *)&this->field_0014));
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_1c = this;
  iVar9 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\nick\\to_Part.Cpp",0x2ac,0,iVar9,"%s",
                                "STParticleC::InitVisibelFlight");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar9,0,"E:\\__titans\\nick\\to_Part.Cpp",0x2ae);
    return 0xffff;
  }
  puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                     (PTR_00806774,CASE_1D,local_8[local_18 & 0xff],0xffffffff,0,1,0,
                      nullptr);
  pSVar8 = local_1c;
  local_1c->field_00B6 = *(int *)puVar9;
  if (param_1 == 0) {
    return 0;
  }
  local_1c->field_00CA = puVar9;
  puVar1 = &local_1c->field_00C6;
  ST3DSMAPContext::sub_006E8660
            (g_sT3DSMAPContext_00807598,puVar1,2,0,STField<uint>(puVar9,9),
             STField<uint>(puVar9,0xd),local_10,local_c,0);
  if (DAT_00807326 != '\0') {
    Library::Ourlib::ST3DSMAP::SprSetShadow
              (g_sT3DSMAPContext_00807598,*puVar1,0,0x4049f8,(uint)pSVar8);
  }
  ST3DSMAPContext::sub_006E98E0
            (g_sT3DSMAPContext_00807598,*puVar1,0,*(int *)puVar9,STField<int>(puVar9,0x21),1);
  ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,*puVar1,0,0);
  uVar3 = *puVar1;
  local_20 = (float)pSVar8->field_0046 * _DAT_007904f8 * _DAT_007904f0;
  pSVar8->field_006A = local_20;
  local_14 = (float)pSVar8->field_004A * _DAT_007904f8 * _DAT_007904f0;
  pSVar8->field_006E = local_14;
  fVar6 = (float)pSVar8->field_004E * _DAT_007904f8 * _DAT_007904f0;
  pSVar8->field_0072 = fVar6;
  Library::Ourlib::ST3DSMAP::SprMove
            (g_sT3DSMAPContext_00807598,uVar3,local_20,local_14,fVar6 + _DAT_007904fc);
  Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,*puVar1,0);
  pSVar8->field_00C1 = 1;
  if (local_24 == 4) {
    Library::Ourlib::ST3DSMAP::SprSetLevBeforeLand
              (g_sT3DSMAPContext_00807598,*puVar1,1,0xffffffff,0xffffffff);
    if (pSVar8->field_0018 != 0) {
      Library::Ourlib::ST3DSMAP::SprSetLevBefore
                (g_sT3DSMAPContext_00807598,*puVar1,pSVar8->field_0018);
    }
  }
  pVVar7 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 != nullptr) {
    iVar12 = pSVar8->field_004E;
    sVar5 = (short)(iVar12 >> 0x1f);
    if (iVar12 < 0) {
      local_14 = (float)((short)(((short)(iVar12 / 200) + sVar5) -
                                (short)((longlong)iVar12 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_14 = (float)(int)(short)(((short)(iVar12 / 200) + sVar5) -
                                    (short)((longlong)iVar12 * 0x51eb851f >> 0x3f));
    }
    iVar12 = pSVar8->field_004A;
    sVar5 = (short)(iVar12 >> 0x1f);
    if (iVar12 < 0) {
      iVar12 = (short)(((short)(iVar12 / 0xc9) + sVar5) -
                      (short)((longlong)iVar12 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar12 = (int)(short)(((short)(iVar12 / 0xc9) + sVar5) -
                           (short)((longlong)iVar12 * 0x28c1979 >> 0x3f));
    }
    iVar10 = pSVar8->field_0046;
    sVar5 = (short)(iVar10 >> 0x1f);
    if (iVar10 < 0) {
      iVar10 = (short)(((short)(iVar10 / 0xc9) + sVar5) -
                      (short)((longlong)iVar10 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar10 = (int)(short)(((short)(iVar10 / 0xc9) + sVar5) -
                           (short)((longlong)iVar10 * 0x28c1979 >> 0x3f));
    }
    if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
        (VisibleClassTy::sub_00558C00
                   (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar10,iVar12,
                    &local_28,&local_2c), (int)local_14 < 0)) || (4 < (int)local_14)) {
      bVar14 = true;
    }
    else {
      if (((local_28 < 0) || ((int)pVVar7->field_0030 <= local_28)) ||
         ((g_centeredOffsets5[(int)local_14] + local_2c < 0 ||
          (pVVar7->field_0034 <= g_centeredOffsets5[(int)local_14] + local_2c)))) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if ((bVar14) && (pVVar7->field_004C != nullptr)) {
        bVar14 = pVVar7->field_004C
                 [local_28 + (g_centeredOffsets5[(int)local_14] + local_2c) * pVVar7->field_0030] !=
                 0;
      }
      else {
        bVar14 = true;
      }
    }
    if (bVar14) {
      if (pSVar8->field_00C1 == '\0') {
        Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,pSVar8->field_00C6,0);
        pSVar8->field_00C1 = 1;
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
    }
    else if (pSVar8->field_00C1 == '\x01') {
      Library::Ourlib::ST3DSMAP::SprHide(g_sT3DSMAPContext_00807598,pSVar8->field_00C6);
      pSVar8->field_00C1 = 0;
    }
  }
  g_currentExceptionFrame = local_70.previous;
  return 0;
}

