#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Part.Cpp
   STParticleC::InitVisibelFlight */

undefined4 __thiscall STParticleC::InitVisibelFlight(STParticleC *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  short sVar5;
  float fVar6;
  VisibleClassTy *pVVar7;
  STParticleC *pSVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined **ppuVar13;
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
  undefined **local_8;

  local_24 = (uint)this->field_0014 >> 8 & 0xff;
  ppuVar13 = (undefined **)0x0;
  local_8 = (undefined **)0x0;
  switch(local_24) {
  case 0:
  case 1:
    iVar9 = this->field_001C;
    if (iVar9 == 4) {
      ppuVar13 = &PTR_s_partdw01_007d0798;
      local_8 = &PTR_s_partdw01_007d0798;
      iVar9 = (uint)*(byte *)&this->field_0014 * 8;
      local_10 = *(int *)(&DAT_007d0af0 + iVar9) / 2;
      local_c = *(int *)(&DAT_007d0af4 + iVar9) / 2 - 0xe;
    }
    else {
      if (local_24 == 0) {
        iVar11 = (uint)*(byte *)&this->field_0014 * 8;
        iVar2 = *(int *)(&DAT_007d0a70 + iVar11);
        iVar11 = *(int *)("%" + iVar11);
      }
      else {
        iVar11 = (uint)*(byte *)&this->field_0014 * 8;
        iVar2 = *(int *)(&DAT_007d0bf0 + iVar11);
        iVar11 = *(int *)(&DAT_007d0bf4 + iVar11);
      }
      local_10 = iVar2 / 2;
      local_c = iVar11 / 2 - 0xe;
      if ((this->field_0014 & 0x100) == 0) {
        if (iVar9 == 2) {
          ppuVar13 = &PTR_s_particle0_007d0718;
          local_8 = &PTR_s_particle0_007d0718;
        }
        else {
          ppuVar13 = &PTR_s_particle01_007d0758;
          local_8 = &PTR_s_particle01_007d0758;
        }
      }
      else if (iVar9 == 2) {
        ppuVar13 = &PTR_s_part_g0_007d0800;
        local_8 = &PTR_s_part_g0_007d0800;
      }
      else {
        ppuVar13 = &PTR_s_part_w0_007d07d8;
        local_8 = &PTR_s_part_w0_007d07d8;
      }
    }
    break;
  case 2:
    ppuVar13 = &PTR_s_gr2part0_007d0828;
    local_8 = &PTR_s_gr2part0_007d0828;
    local_10 = DAT_007d09d4 / 2;
    local_c = local_10 - 0xe;
    break;
  case 4:
    ppuVar13 = &PTR_s_stoun0_007d09d8;
    local_8 = &PTR_s_stoun0_007d09d8;
    iVar9 = *(int *)(&DAT_007d0a00 + (uint)*(byte *)&this->field_0014 * 4);
    goto LAB_00629242;
  case 8:
    ppuVar13 = &PTR_s_gr1part0_007d0870;
    local_8 = &PTR_s_gr1part0_007d0870;
    local_10 = DAT_007d09d4 / 2;
    local_c = local_10 - 0xe;
    break;
  case 0x10:
    ppuVar13 = &PTR_s_partsi01_007d08c4;
    local_8 = &PTR_s_partsi01_007d08c4;
    iVar9 = (uint)*(byte *)&this->field_0014 * 8;
    local_10 = *(int *)(&DAT_007d0af0 + iVar9) / 2;
    local_c = *(int *)(&DAT_007d0af4 + iVar9) / 2 - 0xe;
    break;
  case 0x20:
    ppuVar13 = &PTR_s_part_s0_007d0924;
    local_8 = &PTR_s_part_s0_007d0924;
    iVar9 = (uint)*(byte *)&this->field_0014 * 8;
    local_10 = *(int *)(&DAT_007d0b70 + iVar9) / 2;
    local_c = *(int *)(&DAT_007d0b74 + iVar9) / 2 - 0xe;
    break;
  case 0x40:
    ppuVar13 = &PTR_s_grsi0_007d0984;
    local_8 = &PTR_s_grsi0_007d0984;
    iVar9 = DAT_007d09d4;
    goto LAB_00629242;
  case 0x80:
    ppuVar13 = &PTR_s_rubb3_007d08bc;
    local_8 = &PTR_s_rubb3_007d08bc;
    iVar9 = DAT_007d08b8;
LAB_00629242:
    local_10 = iVar9 / 2;
    local_c = local_10 - 0xe;
  }
  if (ppuVar13 == (undefined **)0x0) {
    return 0xffffffff;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_18 = CONCAT31(local_18._1_3_,*(undefined1 *)&this->field_0014);
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
  puVar10 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806774,CASE_1D,local_8[local_18 & 0xff],0xffffffff,0,1,0,
                       (undefined4 *)0x0);
  pSVar8 = local_1c;
  local_1c->field_00B6 = *(int *)puVar10;
  if (param_1 == 0) {
    return 0;
  }
  local_1c->field_00CA = puVar10;
  piVar1 = &local_1c->field_00C6;
  FUN_006e8660(PTR_00807598,piVar1,2,0,*(uint *)((int)puVar10 + 9),*(uint *)((int)puVar10 + 0xd),
               local_10,local_c,0);
  if (DAT_00807326 != '\0') {
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e9520
              ((AnonReceiver_004248D0 *)PTR_00807598,*piVar1,0,0x4049f8,(uint)pSVar8);
  }
  FUN_006e98e0(PTR_00807598,*piVar1,0,*(undefined4 *)puVar10,*(int *)((int)puVar10 + 0x21),1);
  FUN_006ea270(PTR_00807598,*piVar1,0,0);
  uVar3 = *piVar1;
  local_20 = (float)pSVar8->field_0046 * _DAT_007904f8 * _DAT_007904f0;
  pSVar8->field_006A = local_20;
  local_14 = (float)pSVar8->field_004A * _DAT_007904f8 * _DAT_007904f0;
  pSVar8->field_006E = local_14;
  fVar6 = (float)pSVar8->field_004E * _DAT_007904f8 * _DAT_007904f0;
  pSVar8->field_0072 = fVar6;
  FUN_006ea960(PTR_00807598,uVar3,local_20,local_14,fVar6 + _DAT_007904fc);
  FUN_006eaaa0(PTR_00807598,*piVar1,0);
  pSVar8->field_00C1 = 1;
  if (local_24 == 4) {
    FUN_006ea4e0(PTR_00807598,*piVar1,1,0xffffffff,0xffffffff);
    if (pSVar8->field_0018 != 0) {
      FUN_006ea460(PTR_00807598,*piVar1,pSVar8->field_0018);
    }
  }
  pVVar7 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
    iVar9 = pSVar8->field_004E;
    sVar5 = (short)(iVar9 >> 0x1f);
    if (iVar9 < 0) {
      local_14 = (float)((short)(((short)(iVar9 / 200) + sVar5) -
                                (short)((longlong)iVar9 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_14 = (float)(int)(short)(((short)(iVar9 / 200) + sVar5) -
                                    (short)((longlong)iVar9 * 0x51eb851f >> 0x3f));
    }
    iVar9 = pSVar8->field_004A;
    sVar5 = (short)(iVar9 >> 0x1f);
    if (iVar9 < 0) {
      iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar5) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar5) -
                          (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
    }
    iVar11 = pSVar8->field_0046;
    sVar5 = (short)(iVar11 >> 0x1f);
    if (iVar11 < 0) {
      iVar11 = (short)(((short)(iVar11 / 0xc9) + sVar5) -
                      (short)((longlong)iVar11 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar11 = (int)(short)(((short)(iVar11 / 0xc9) + sVar5) -
                           (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
    }
    if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
        (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar11,iVar9
                            ,&local_28,&local_2c), (int)local_14 < 0)) || (4 < (int)local_14)) {
      bVar14 = true;
    }
    else {
      if (((local_28 < 0) || (pVVar7->field_0030 <= local_28)) ||
         ((g_centeredOffsets5[(int)local_14] + local_2c < 0 ||
          (pVVar7->field_0034 <= g_centeredOffsets5[(int)local_14] + local_2c)))) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if ((bVar14) && (pVVar7->field_004C != (byte *)0x0)) {
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
        FUN_006eaaa0(PTR_00807598,pSVar8->field_00C6,0);
        pSVar8->field_00C1 = 1;
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
    }
    else if (pSVar8->field_00C1 == '\x01') {
      FUN_006eab60(PTR_00807598,pSVar8->field_00C6);
      pSVar8->field_00C1 = 0;
    }
  }
  g_currentExceptionFrame = local_70.previous;
  return 0;
}

