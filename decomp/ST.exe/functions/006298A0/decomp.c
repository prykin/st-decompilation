#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Part.Cpp
   STParticleC::InitVisibelDeton */

undefined4 __thiscall STParticleC::InitVisibelDeton(STParticleC *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  short sVar3;
  float fVar4;
  VisibleClassTy *pVVar5;
  STParticleC *pSVar6;
  int iVar7;
  char *text;
  ushort *puVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  uint *puVar12;
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
  iVar7 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
  pSVar6 = local_18;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\nick\\to_Part.Cpp",800,0,iVar7,"%s",
                               "STParticleC::InitVisibelDeton");
    if (iVar9 == 0) {
      RaiseInternalException(iVar7,0,"E:\\__titans\\nick\\to_Part.Cpp",0x322);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  text = PTR_s_expl_sb1_007d0c44;
  if (3 < *(byte *)&local_18->field_0014) {
    text = PTR_s_expl_sb0_007d0c40;
  }
  puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806764,CASE_1D,text,0xffffffff,0,1,0,(undefined4 *)0x0);
  pSVar6->field_00B6 = *(int *)puVar8;
  if (param_1 != 0) {
    piVar1 = &pSVar6->field_00C6;
    if (pSVar6->field_00C6 < 0) {
      FUN_006e8660(PTR_00807598,piVar1,2,0,*(uint *)((int)puVar8 + 9),*(uint *)((int)puVar8 + 0xd),
                   0x5a,0x45,0);
    }
    else {
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e9520
                ((AnonReceiver_004248D0 *)PTR_00807598,pSVar6->field_00C6,0,0,0);
      FUN_006e9af0(PTR_00807598,*piVar1,2,0,*(uint *)((int)puVar8 + 9),*(uint *)((int)puVar8 + 0xd),
                   0x5a,0x45,1);
    }
    FUN_006e98e0(PTR_00807598,*piVar1,0,*(undefined4 *)puVar8,*(int *)((int)puVar8 + 0x21),1);
    FUN_006ea270(PTR_00807598,*piVar1,0,pSVar6->field_00B2);
    local_1c = (float)pSVar6->field_0046 * _DAT_007904f8 * _DAT_007904f0;
    pSVar6->field_006A = local_1c;
    local_c = (float)pSVar6->field_004A * _DAT_007904f8 * _DAT_007904f0;
    pSVar6->field_006E = local_c;
    fVar4 = (float)pSVar6->field_004E * _DAT_007904f8 * _DAT_007904f0;
    pSVar6->field_0072 = fVar4;
    FUN_006ea960(PTR_00807598,*piVar1,local_1c,local_c,fVar4 + _DAT_007904fc);
    FUN_006eaaa0(PTR_00807598,*piVar1,0);
    pSVar6->field_00C1 = 1;
    pVVar5 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
      iVar7 = pSVar6->field_004E;
      sVar3 = (short)(iVar7 >> 0x1f);
      if (iVar7 < 0) {
        local_c = (float)((short)(((short)(iVar7 / 200) + sVar3) -
                                 (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)) + -1);
      }
      else {
        local_c = (float)(int)(short)(((short)(iVar7 / 200) + sVar3) -
                                     (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
      }
      iVar7 = pSVar6->field_004A;
      sVar3 = (short)(iVar7 >> 0x1f);
      if (iVar7 < 0) {
        iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) -
                       (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                            (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
      }
      iVar9 = pSVar6->field_0046;
      sVar3 = (short)(iVar9 >> 0x1f);
      if (iVar9 < 0) {
        iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar3) -
                       (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar3) -
                            (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
      }
      if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,
                              iVar7,&local_14,&local_10), (int)local_c < 0)) || (4 < (int)local_c))
      {
        bVar11 = true;
      }
      else {
        if (((local_14 < 0) || (pVVar5->field_0030 <= local_14)) ||
           ((local_10 + g_centeredOffsets5[(int)local_c] < 0 ||
            (pVVar5->field_0034 <= local_10 + g_centeredOffsets5[(int)local_c])))) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if ((bVar11) && (pVVar5->field_004C != (byte *)0x0)) {
          bVar11 = pVVar5->field_004C
                   [local_14 + (g_centeredOffsets5[(int)local_c] + local_10) * pVVar5->field_0030]
                   != 0;
        }
        else {
          bVar11 = true;
        }
      }
      if (bVar11) {
        if (pSVar6->field_00C1 == '\0') {
          FUN_006eaaa0(PTR_00807598,*piVar1,0);
          pSVar6->field_00C1 = 1;
        }
      }
      else if (pSVar6->field_00C1 == '\x01') {
        FUN_006eab60(PTR_00807598,*piVar1);
        pSVar6->field_00C1 = 0;
      }
    }
    if (*(byte *)&pSVar6->field_0014 < 4) {
      puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806764,CASE_1D,"expl_s1",0xffffffff,0,1,0,(undefined4 *)0x0
                         );
      if (0xe < pSVar6->field_00B2) {
        local_8 = pSVar6->field_00B2 + 3;
      }
      FUN_006e98e0(PTR_00807598,*piVar1,1,*(undefined4 *)puVar8,*(int *)((int)puVar8 + 0x21),1);
      FUN_006ea270(PTR_00807598,*piVar1,1,local_8);
      puVar12 = (uint *)*piVar1;
    }
    else {
      puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806764,CASE_1D,"expl_s0",0xffffffff,0,1,0,(undefined4 *)0x0
                         );
      if (0xe < pSVar6->field_00B2) {
        local_8 = pSVar6->field_00B2 - 0xf;
      }
      FUN_006e98e0(PTR_00807598,*piVar1,1,*(undefined4 *)puVar8,*(int *)((int)puVar8 + 0x21),1);
      FUN_006ea270(PTR_00807598,*piVar1,1,local_8);
      puVar12 = (uint *)*piVar1;
    }
    FUN_006e9d40(PTR_00807598,puVar12,1);
    iVar7 = pSVar6->field_00EB;
    if (iVar7 != 0) {
      if (pSVar6->field_00F3 == 0) {
        FUN_006ea460(PTR_00807598,*piVar1,*(int *)(iVar7 + 0x1ed));
      }
      else {
        FUN_006ea3e0(PTR_00807598,*piVar1,*(int *)(iVar7 + 0x1ed));
      }
    }
    FUN_006ea4e0(PTR_00807598,*piVar1,1,0x5a,0x53);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  return 0;
}

