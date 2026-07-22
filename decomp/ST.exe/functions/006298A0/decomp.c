#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Part.Cpp
   STParticleC::InitVisibelDeton */

undefined4 __thiscall STParticleC::InitVisibelDeton(STParticleC *this,int param_1)

{
  int *piVar1;
  AnonPointee_STParticleC_00EB *pAVar2;
  code *pcVar3;
  short sVar4;
  float fVar5;
  VisibleClassTy *pVVar6;
  STParticleC *pSVar7;
  int iVar8;
  char *text;
  ushort *puVar9;
  int iVar10;
  undefined4 uVar11;
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
  if (3 < *(byte *)&local_18->field_0014) {
    text = PTR_s_expl_sb0_007d0c40;
  }
  puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806764,CASE_1D,text,0xffffffff,0,1,0,(undefined4 *)0x0);
  pSVar7->field_00B6 = *(int *)puVar9;
  if (param_1 != 0) {
    piVar1 = &pSVar7->field_00C6;
    if (pSVar7->field_00C6 < 0) {
      FUN_006e8660(PTR_00807598,piVar1,2,0,*(uint *)((int)puVar9 + 9),*(uint *)((int)puVar9 + 0xd),
                   0x5a,0x45,0);
    }
    else {
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e9520
                ((AnonReceiver_004248D0 *)PTR_00807598,pSVar7->field_00C6,0,0,0);
      FUN_006e9af0(PTR_00807598,*piVar1,2,0,*(uint *)((int)puVar9 + 9),*(uint *)((int)puVar9 + 0xd),
                   0x5a,0x45,1);
    }
    FUN_006e98e0(PTR_00807598,*piVar1,0,*(undefined4 *)puVar9,*(int *)((int)puVar9 + 0x21),1);
    FUN_006ea270(PTR_00807598,*piVar1,0,pSVar7->field_00B2);
    local_1c = (float)pSVar7->field_0046 * _DAT_007904f8 * _DAT_007904f0;
    pSVar7->field_006A = local_1c;
    local_c = (float)pSVar7->field_004A * _DAT_007904f8 * _DAT_007904f0;
    pSVar7->field_006E = local_c;
    fVar5 = (float)pSVar7->field_004E * _DAT_007904f8 * _DAT_007904f0;
    pSVar7->field_0072 = fVar5;
    FUN_006ea960(PTR_00807598,*piVar1,local_1c,local_c,fVar5 + _DAT_007904fc);
    FUN_006eaaa0(PTR_00807598,*piVar1,0);
    pSVar7->field_00C1 = 1;
    pVVar6 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
      iVar8 = pSVar7->field_004E;
      sVar4 = (short)(iVar8 >> 0x1f);
      if (iVar8 < 0) {
        local_c = (float)((short)(((short)(iVar8 / 200) + sVar4) -
                                 (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) + -1);
      }
      else {
        local_c = (float)(int)(short)(((short)(iVar8 / 200) + sVar4) -
                                     (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
      }
      iVar8 = pSVar7->field_004A;
      sVar4 = (short)(iVar8 >> 0x1f);
      if (iVar8 < 0) {
        iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar4) -
                       (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar4) -
                            (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
      }
      iVar10 = pSVar7->field_0046;
      sVar4 = (short)(iVar10 >> 0x1f);
      if (iVar10 < 0) {
        iVar10 = (short)(((short)(iVar10 / 0xc9) + sVar4) -
                        (short)((longlong)iVar10 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar10 = (int)(short)(((short)(iVar10 / 0xc9) + sVar4) -
                             (short)((longlong)iVar10 * 0x28c1979 >> 0x3f));
      }
      if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar10,
                              iVar8,&local_14,&local_10), (int)local_c < 0)) || (4 < (int)local_c))
      {
        bVar12 = true;
      }
      else {
        if (((local_14 < 0) || (pVVar6->field_0030 <= local_14)) ||
           ((local_10 + g_centeredOffsets5[(int)local_c] < 0 ||
            (pVVar6->field_0034 <= local_10 + g_centeredOffsets5[(int)local_c])))) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if ((bVar12) && (pVVar6->field_004C != (byte *)0x0)) {
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
          FUN_006eaaa0(PTR_00807598,*piVar1,0);
          pSVar7->field_00C1 = 1;
        }
      }
      else if (pSVar7->field_00C1 == '\x01') {
        FUN_006eab60(PTR_00807598,*piVar1);
        pSVar7->field_00C1 = 0;
      }
    }
    if (*(byte *)&pSVar7->field_0014 < 4) {
      puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806764,CASE_1D,"expl_s1",0xffffffff,0,1,0,(undefined4 *)0x0
                         );
      if (0xe < pSVar7->field_00B2) {
        local_8 = pSVar7->field_00B2 + 3;
      }
      FUN_006e98e0(PTR_00807598,*piVar1,1,*(undefined4 *)puVar9,*(int *)((int)puVar9 + 0x21),1);
      FUN_006ea270(PTR_00807598,*piVar1,1,local_8);
      puVar13 = (uint *)*piVar1;
    }
    else {
      puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806764,CASE_1D,"expl_s0",0xffffffff,0,1,0,(undefined4 *)0x0
                         );
      if (0xe < pSVar7->field_00B2) {
        local_8 = pSVar7->field_00B2 - 0xf;
      }
      FUN_006e98e0(PTR_00807598,*piVar1,1,*(undefined4 *)puVar9,*(int *)((int)puVar9 + 0x21),1);
      FUN_006ea270(PTR_00807598,*piVar1,1,local_8);
      puVar13 = (uint *)*piVar1;
    }
    FUN_006e9d40(PTR_00807598,puVar13,1);
    pAVar2 = pSVar7->field_00EB;
    if (pAVar2 != (AnonPointee_STParticleC_00EB *)0x0) {
      if (pSVar7->field_00F3 == 0) {
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006EA050::sub_006EA460
                  ((AnonReceiver_006EA050 *)PTR_00807598,*piVar1,pAVar2->field_01ED);
      }
      else {
        FUN_006ea3e0(PTR_00807598,*piVar1,pAVar2->field_01ED);
      }
    }
    FUN_006ea4e0(PTR_00807598,*piVar1,1,0x5a,0x53);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  return 0;
}

