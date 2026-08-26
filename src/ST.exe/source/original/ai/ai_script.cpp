#include "st/generated.hpp"
// Generated translation unit: source/original/ai/ai_script.cpp

// 006802A0 FUN_006802a0
#line 4 "decomp/ST.exe/functions/006802A0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 116 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006802A0 -> 006A5E40 @ 006802E7 | 006823E0 -> 006802A0 @ 006825E2

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006826A0 -> 006802A0 @ 006826B9 | 006826A0 -> 006802A0 @ 006826D6 | 006826A0 ->
   006802A0 @ 006826F4 | 00682720 -> 006802A0 @ 00682739 | 00682720 -> 006802A0 @ 00682756 |
   00682720 -> 006802A0 @ 00682774 | 00683C70 -> 006802A0 @ 00684F1A */

void __cdecl st::fn_006802A0(int exceptionCode,char *resourceString)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;
  char *pcVar4_mg0;

  if (resourceString != nullptr) {
    uVar2 = 0xffffffff;
    do {
      pcVar4_mg0 = resourceString;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar4_mg0 = resourceString + 1;
      cVar1 = *resourceString;
      resourceString = pcVar4_mg0;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar4_mg0 + -uVar2;
    pcVar5 = (char *)&DAT_008488b4;
    memmove(pcVar5, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  }
  st::fn_006A5E40
            (exceptionCode,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x74);
  return;
}

// 00680890 FUN_00680890
#line 4 "decomp/ST.exe/functions/00680890/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 255 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00680890 -> 006F13F0 @ 006808EB | 006809B0 -> 00680890 @ 006809CF; address of zeroed
   full register at 006809B9 | 006809F0 -> 00680890 @ 00680A54; address of
   /SubmarineTitans/Recovered/DArrayTy+0x8 (elementSize) */

undefined4 __cdecl st::fn_00680890(byte param_1,byte *param_2,uint param_3,undefined4 *elementSize)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  char *text;
  char *pcVar5;
  uint *puVar6;
  uint uVar7;
  CHAR local_408 [1024];
  uint local_8;
  uint uVar4;

  local_8 = 0;
  pcVar3 = (char *)st::fn_00402879(param_1);
  if (*pcVar3 == '\0') {
    st::fn_006A5E40
              (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0xff);
  }
  puVar6 = &local_8;
  cVar1 = st::fn_0040240A();
  st::fn_006F13F0(st::pointer_boundary_cast<cMf32 *>(DAT_008489d0),param_1,pcVar3,param_2,param_3,elementSize,cVar1,puVar6);
  DAT_00848a0c = DAT_00848a0c + local_8;
  DAT_00848a10 = DAT_00848a10 + 1;
  uVar7 = local_8;
  bVar2 = st::fn_0040240A();
  uVar4 = (uint)bVar2;
  pcVar5 = "M_ANY " + (uint)param_1 * 10;
  text = st::fn_006B0140(0x1b5a,g_hINSTANCE_00807618);
  /* ST_CALLSITE[00680945]: CALL dword ptr [0x0085bde8] */
  st::external_00000080(local_408,text,pcVar5,pcVar3,param_3,uVar4,uVar7);
  st::fn_00402F45(local_408);
  return 1;
}

// 006809F0 FUN_006809f0
#line 4 "decomp/ST.exe/functions/006809F0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 292 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __cdecl st::fn_006809F0(uint *param_1)

{
  InternalExceptionFrame local_5c;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  byte *local_8;

  local_c = 0;
  local_8 = nullptr;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  if (local_14 == 0) {
    local_18 = param_1[2];
    local_10 = local_14;
    local_8 = (byte *)st::fn_006C8910(param_1,(int *)&local_c);
    st::fn_00403346(0x17,local_8,local_c,&local_18);
    if (local_8 != nullptr) {
      st::fn_006AB060(&local_8);
    }
    g_currentExceptionFrame = local_5c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_5c.previous;
  if (local_8 != nullptr) {
    st::fn_006AB060(&local_8);
  }
  st::fn_006A5E40(local_14,0,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x124);
  return 0;
}

// 006823E0 FUN_006823e0
#line 4 "decomp/ST.exe/functions/006823E0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 378 | 386 | 394 | 396 | 405 | 412 (metadata/report site, not the
   function definition)
   [STSourceProvenanceApplier end] */

void __cdecl st::fn_006823E0(int param_1,float *param_2)

{
  char cVar1;
  char *pcVar2;
  float *pfVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  float *pfVar8;
  undefined1 local_10;
  float local_f;
  short *local_8;

  pfVar8 = param_2;
  if (g_anonShape_00683780_11EA4E23_00848A14 != nullptr) {
    st::fn_0040308F((short)param_1,(short)param_2);
    iVar7 = (g_anonShape_00683780_11EA4E23_00848A14->field_0004 - (int)pfVar8) + -1;
    pcVar2 = st::fn_00403779(g_anonShape_00683780_11EA4E23_00848A14,iVar7);
    if (pcVar2 == nullptr) {
      st::fn_006A5E40
                (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x19c);
    }
    else {
      cVar1 = *pcVar2;
      pcVar6 = pcVar2;
      for (pfVar3 = nullptr; (cVar1 != '\a' && ((int)pfVar3 < (int)pfVar8));
          pfVar3 = (float *)((int)pfVar3 + 1)) {
        cVar1 = pcVar6[5];
        pcVar6 = pcVar6 + 5;
      }
      if (pfVar3 == pfVar8) {
        local_8 = (short *)(pcVar2 + (int)pfVar8 * 5 + 1);
        iVar4 = st::fn_004038AF((int)*(short *)(pcVar2 + (int)pfVar8 * 5 + 1));
        if ((iVar4 < 0) || (iVar4 = st::fn_004016B3((int)*local_8), iVar4 != 0)) {
          int param_1_after_write = 0; /* compiler stack-slot lifetime split */
          param_2 = st::fn_00401604((AnonReceiver_0064A970 *)&DAT_00847820,pcVar2,(int)pfVar8,
                                       &param_1_after_write);
          if (param_2 == nullptr) {
            st::fn_00405411(param_1_after_write,(char *)&DAT_00847824);
            return;
          }
          if (param_1_after_write == 1) {
            iVar7 = st::fn_00405D17(g_anonShape_00683780_11EA4E23_00848A14,iVar7);
            if (iVar7 == 0) {
              st::fn_006A5E40
                        (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                         0x17a);
            }
            local_10 = 1;
            local_f = *param_2;
          }
          else if (param_1_after_write == 2) {
            iVar7 = st::fn_00405D17(g_anonShape_00683780_11EA4E23_00848A14,iVar7);
            if (iVar7 == 0) {
              st::fn_006A5E40
                        (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                         0x182);
            }
            local_10 = 2;
            local_f = *param_2;
          }
          else {
            if (param_1_after_write != 3) {
              st::fn_006AB060(&param_2);
              st::fn_006A5E40
                        (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                         0x195);
              st::fn_006AB060(&param_2);
              return;
            }
            iVar7 = st::fn_00405D17(g_anonShape_00683780_11EA4E23_00848A14,iVar7);
            if (iVar7 == 0) {
              st::fn_006A5E40
                        (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                         0x18a);
            }
            pfVar8 = param_2;
            pbVar5 = st::fn_00401677();
            iVar7 = st::fn_00405E98(pbVar5,(char *)pfVar8);
            if (iVar7 < 0) {
              st::fn_006A5E40
                        (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                         0x18c);
            }
            local_10 = 3;
            local_f = (float)STReplaceLowWord((uint32_t)(local_f), (uint16_t)((short)iVar7));
          }
          st::fn_00401014((undefined4 *)&local_10);
          st::fn_006AB060(&param_2);
          return;
        }
      }
    }
  }
  return;
}

// 006827A0 FUN_006827a0
#line 1 "decomp/ST.exe/functions/006827A0/decomp.c"

/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 437 | 438 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void st::fn_006827A0(void)

{
  int exceptionCode;

  do {
    exceptionCode = st::fn_00401D7F();
    if (exceptionCode < 0) {
      st::fn_006A5E40
                (exceptionCode,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                 0x1b5);
    }
    if (DAT_007d2d18 == 0x1c) {
      st::fn_006A5E40
                (-0x6f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x1b6);
    }
  } while (DAT_007d2d18 == 0x1d);
  return;
}

// 00682850 FUN_00682850
#line 4 "decomp/ST.exe/functions/00682850/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 464 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void st::fn_00682850(void)

{
  float *pfVar1;
  Global_sub_00668AA0_param_1Enum GVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  char *pcVar6;
  char local_8c [128];
  undefined4 local_c [2];

  GVar2 = DAT_007d2d18;
  pcVar6 = local_8c;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  st::fn_0072E340(local_8c,PTR_00857528,0x7f);
  pfVar3 = (float *)st::fn_004038AF(GVar2);
  pfVar5 = nullptr;
  st::fn_00402469();
  st::fn_004052BD(0x29);
  while (DAT_007d2d18 != 0x39) {
    st::fn_00404E26();
    pfVar5 = (float *)((int)pfVar5 + CASE_1);
    if (DAT_007d2d18 == 0x10) {
      st::fn_00402469();
    }
    else if (DAT_007d2d18 != 0x39) {
      st::fn_006A5E40
                (-0x71,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x1d0);
    }
  }
  pfVar1 = pfVar5;
  if (((int)pfVar3 < (int)pfVar5) && (iVar4 = st::fn_0040132A(GVar2), iVar4 == 0)) {
    st::fn_00405411(-0x79,local_8c);
  }
  for (; (int)pfVar5 < (int)pfVar3; pfVar5 = (float *)((int)pfVar5 + CASE_1)) {
    iVar4 = st::fn_00401A2D(GVar2,(Global_sub_00668AA0_param_2Enum)pfVar5,(undefined1 *)local_c);
    if (iVar4 == 0) {
      st::fn_00405411(-0x7a,local_8c);
    }
    else {
      st::fn_00401014(local_c);
    }
    pfVar1 = pfVar3;
  }
  st::fn_00405C6D(GVar2,pfVar1);
  st::fn_00402469();
  return;
}

// 00682D70 FUN_00682d70
#line 4 "decomp/ST.exe/functions/00682D70/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 594 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void st::fn_00682D70(void)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  undefined1 local_c;
  undefined2 local_b;

  pcVar3 = PTR_00857548;
  pbVar1 = st::fn_00401677();
  iVar2 = st::fn_00405E98(pbVar1,pcVar3);
  if (iVar2 < 0) {
    st::fn_006A5E40
              (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x252);
  }
  local_c = 3;
  local_b = (undefined2)iVar2;
  st::fn_00401014((undefined4 *)&local_c);
  st::fn_00402469();
  return;
}

// 006836C0 FUN_006836c0
#line 4 "decomp/ST.exe/functions/006836C0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 906 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl st::fn_006836C0(DArrayTy *param_1,byte *param_2)

{
  byte bVar1;
  dword dVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;

  if ((param_1 == nullptr) || (param_2 == nullptr)) {
    st::fn_006A5E40
              (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x38a);
  }
  dVar2 = param_1->elementSize;
  iVar6 = 0;
  if (0 < (int)dVar2) {
    do {
      pbVar5 = param_2;
      if (iVar6 < (int)dVar2) {
        pbVar3 = *(byte **)(param_1->growCapacity + iVar6 * 4);
      }
      else {
        pbVar3 = nullptr;
      }
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00683729:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0068372e;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00683729;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0068372e:
      if (iVar4 == 0) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)dVar2);
  }
  iVar6 = st::fn_006B5AA0(param_1,(char *)param_2);
  return iVar6;
}

// 00683780 FUN_00683780
#line 4 "decomp/ST.exe/functions/00683780/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 926 | 933 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl st::fn_00683780(int *param_1,AnonShape_00683780_11EA4E23 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char local_c;
  short sStack_b;
  undefined1 uStack_9;
  undefined1 uStack_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (((param_3 == 0) || (param_1 == nullptr)) || (param_2 == nullptr)
     ) {
    st::fn_006A5E40
              (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x39e);
  }
  iVar7 = 0;
  iVar1 = param_1[1];
  if (0 < param_2->field_0004) {
    iVar6 = 0;
    do {
      puVar3 = (undefined4 *)(param_2->field_0008 + iVar6);
      uVar2 = *puVar3;
      local_c = (char)uVar2;
      sStack_b = (short)((uint)uVar2 >> 8);
      uStack_9 = (undefined1)((uint)uVar2 >> 0x18);
      uStack_8 = ((undefined1 *)puVar3)[1];
      if ((local_c == '\x06') || (local_c == '\x03')) {
        pbVar4 = (byte *)st::fn_0040353A((int)sStack_b);
        if (pbVar4 == nullptr) {
          st::fn_006A5E40
                    (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x3a5
                    );
        }
        else {
          iVar5 = st::fn_00403599((DArrayTy *)param_3,pbVar4);
          sStack_b = (short)iVar5;
        }
      }
      st::fn_00402149(param_1,(undefined4 *)&local_c);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 5;
    } while (iVar7 < param_2->field_0004);
  }
  local_c = '\a';
  sStack_b = 0x1d;
  uStack_9 = 0;
  uStack_8 = 0;
  st::fn_00402149(param_1,(undefined4 *)&local_c);
  return iVar1;
}

// 006838B0 FUN_006838b0
#line 4 "decomp/ST.exe/functions/006838B0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 958 | 980 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl st::fn_006838B0(int *param_1,char param_2,byte *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_c;
  undefined2 uStack_b;
  undefined1 uStack_9;
  undefined1 local_8;

  local_c = 0;
  uStack_b = 0;
  uStack_9 = 0;
  local_8 = 0;
  if (((param_4 == 0) || (param_1 == nullptr)) || (param_3 == nullptr)) {
    st::fn_006A5E40
              (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x3be);
  }
  iVar1 = param_1[1];
  if (param_2 == '\x01') {
    local_c = 10;
    iVar3 = st::fn_00403599((DArrayTy *)param_4,param_3);
    uStack_b = (undefined2)iVar3;
    st::fn_00402149(param_1,(undefined4 *)&local_c);
    return iVar1;
  }
  if (param_2 == '\x02') {
    uVar2 = *(undefined4 *)param_3;
    local_c = 8;
    uStack_b = (undefined2)uVar2;
    uStack_9 = (undefined1)((uint)uVar2 >> 0x10);
    local_8 = (undefined1)((uint)uVar2 >> 0x18);
    st::fn_00402149(param_1,(undefined4 *)&local_c);
    return iVar1;
  }
  if (param_2 != '\x03') {
    st::fn_006A5E40
              (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x3d4);
    return iVar1;
  }
  uVar2 = *(undefined4 *)param_3;
  local_c = 9;
  uStack_b = (undefined2)uVar2;
  uStack_9 = (undefined1)((uint)uVar2 >> 0x10);
  local_8 = (undefined1)((uint)uVar2 >> 0x18);
  st::fn_00402149(param_1,(undefined4 *)&local_c);
  return iVar1;
}

// 006839D0 FUN_006839d0
#line 4 "decomp/ST.exe/functions/006839D0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 997 | 1014 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00683B73 MOV DX,word ptr
   [EBP + 0x10] */

int __cdecl st::fn_006839D0(int param_1,int *param_2,ushort param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  AnonShape_00683780_11EA4E23 *pAVar4;
  int iVar5;
  int iVar6;
  undefined1 local_18;
  ushort local_17;
  undefined2 local_15;
  int local_10;
  int local_c;
  int local_8;

  iVar3 = param_4;
  iVar5 = 0;
  local_8 = 0;
  local_c = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (((param_4 == 0) || (param_2 == nullptr)) || (param_1 == 0)) {
    st::fn_006A5E40
              (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x3e5);
  }
  iVar2 = param_2[1];
  auto param_4_after_write = 0; /* compiler stack-slot lifetime split */
  if (0 < (int)(&DAT_00813bc4)[DAT_008488b0 * 0xac5]) {
    do {
      cVar1 = (&DAT_00813bc8)[param_4_after_write + DAT_008488b0 * 0x2b14];
      switch(cVar1) {
      case '\x01':
        st::fn_00403EE5(param_2,cVar1,(byte *)(&PTR_00811aec)[DAT_008488b0 * 0xac5 + local_c],
                           iVar3);
        local_c = local_c + 1;
        break;
      case '\x02':
        st::fn_00403EE5(param_2,cVar1,(byte *)(&DAT_00811c80 + DAT_008488b0 * 0xac5 + iVar5),
                           iVar3);
        iVar5 = iVar5 + 1;
        break;
      case '\x03':
        st::fn_00403EE5(param_2,cVar1,(byte *)&DAT_00812c24 + (DAT_008488b0 * 0xac5 + local_8) * 4,iVar3);
        local_8 = local_8 + 1;
        break;
      case '\x04':
        iVar6 = iVar3;
        pAVar4 = st::fn_00404273((&DAT_00811c80)[DAT_008488b0 * 0xac5 + iVar5]);
        st::fn_004033AF(param_2,pAVar4,iVar6);
        iVar5 = iVar5 + 1;
        break;
      default:
        st::fn_006A5E40
                  (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x3f6);
      }
      param_4_after_write = param_4_after_write + 1;
    } while (param_4_after_write < (int)(&DAT_00813bc4)[DAT_008488b0 * 0xac5]);
  }
  local_17 = param_3;
  local_18 = 0xb;
  local_15 = *(undefined2 *)(&DAT_00813bc4 + DAT_008488b0 * 0xac5);
  st::fn_00402149(param_2,(undefined4 *)&local_18);
  local_10 = iVar2;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006AE1C0(*(DArrayTy **)(param_1 + 0xf),&local_10);
  return iVar2;
}

// 00683C70 FUN_00683c70
#line 4 "decomp/ST.exe/functions/00683C70/decomp.c"
/* WARNING: Unable to use type for symbol pcVar7 */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 1082 | 1127 | 1128 | 1129 | 1130 | 1131 | 1132 | 1133 | 1137 | 1138 |
   1143 | 1162 | 1172 | 1183 | 1211 | 1215 | 1219 | 1223 | 1228 | 1441 | 1442 | 1466 | 1500 | 1501 |
   1516 | 1517 | 1532 | 1533 | 1543 | 1548 | 1549 | 1562 | 1575 | 1585 | 1624 | 1644 | 1688 | 1690 |
   1710 | 1711 | 1765 | 1770 | 1788 | 1795 | 1806 | 1811 | 1838 | 1843 | 1868 | 1873 | 1893 | 1908 |
   1914 | 1916 | 1933 | 1949 | 1955 | 1969 | 1977 | 1985 | 2000 | 2012 | 2023 | 2033 | 2046 | 2056 |
   2066 | 2072 | 2077 | 2079 | 2091 | 2106 | 2111 | 2113 | 2125 | 2139 | 2144 | 2159 | 2165 | 2166 |
   2167 | 2168 | 2169 | 2170 | 2171 | 2172 | 2174 | 2175 | 2176 | 2178 | 2179 | 2180 | 2181 | 2182 |
   2183 | 2185 | 2186 | 2187 | 2188 | 2189 | 2190 | 2191 | 2192 | 2193 | 2195 | 2196 | 2197 | 2198 |
   2199 | 2200 | 2201 | 2202 | 2203 | 2204 | 2205 | 2206 | 2207 | 2208 | 2209 | 2210 | 2211 | 2212 |
   2214 | 2215 | 2216 | 2217 | 2219 | 2220 | 2221 | 2222 | 2223 | 2224 | 2225 | 2226 | 2227 | 2228 |
   2229 | 2230 | 2231 | 2232 | 2233 | 2234 | 2235 | 2236 | 2237 | 2238 | 2239 | 2241 | 2242 | 2243 |
   2244 | 2245 | 2246 | 2247 | 2248 | 2249 | 2250 | 2251 | 2253 | 2254 | 2255 | 2256 | 2257 | 2258 |
   2260 | 2261 | 2262 | 2263 | 2264 | 2265 | 2266 | 2267 | 2268 | 2269 | 2270 | 2271 | 2272 | 2273 |
   2274 | 2275 | 2276 | 2277 | 2278 | 2279 | 2280 | 2281 | 2282 | 2283 | 2284 | 2285 | 2286 | 2287 |
   2288 | 2289 | 2290 | 2291 | 2292 | 2293 | 2294 | 2296 | 2301 | 2310 | 2339 | 2343 | 2360 | 2361 |
   2362 | 2376 | 2380 | 2387 | 2394 | 2401 | 2404 | 2405 | 2409 | 2414 | 2423 | 2424 | 2471 | 2472 |
   2504 | 2512 | 2513 | 2525 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00683C70 -> EXTERNAL:0000001F @ 00683F3F */

uint * st::fn_00683C70(LPCSTR lpFileName,AnonShape_00683C70_22193481 *param_2,undefined4 *param_3,
                   int *param_4,undefined *param_5)

{
  AnonShape_00683780_11EA4E23 *pAVar1;
  char cVar2;
  int local_EAX_119;
  int iVar2;
  uint uVar8;
  uint local_EAX_619;
  uint local_EAX_667;
  byte *pbVar3_mg0;
  int local_EAX_907;
  int local_EAX_1897;
  uint uVar3;
  int local_EAX_2430;
  char *local_EAX_2603;
  int local_EAX_2631;
  int local_EAX_2872;
  char *local_EAX_3095;
  int local_EAX_3220;
  int local_EAX_3364;
  char *local_EAX_3521;
  int local_EAX_3581;
  char *local_EAX_4770;
  int local_EAX_5008;
  int local_EAX_5150;
  AnonShape_00683780_11EA4E23 *local_EAX_5366;
  int local_EAX_5419;
  int local_EAX_5537;
  int local_EAX_6442;
  int local_EAX_7282;
  int local_EAX_8657;
  int local_EAX_8927;
  AnonShape_00683780_11EA4E23 *pAVar4;
  int local_EAX_8961;
  int local_EAX_14040;
  int local_EAX_14857;
  char *pcVar4;
  char *local_EAX_23799;
  int local_EAX_24967;
  char *local_EAX_25115;
  int iVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  char *local_EAX_25691;
  uint *puVar5;
  char *local_EAX_26162;
  char *local_EAX_26713;
  int local_EAX_27312;
  int local_EAX_27736;
  uint uVar6;
  uint uVar7;
  void *this;
  void *this_00;
  void *this_01;
  int iVar8;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  void *extraout_ECX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  void *extraout_ECX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  void *extraout_ECX_01;
  int iVar9;
  void *this_02;
  void *this_03;
  int iVar11;
  int iVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  ushort uVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_04;
  byte *pbVar15;
  void *pvVar16;
  AllocationRecord_0065CD10 *pAVar17;
  undefined4 **ppuVar18;
  LPCSTR pCVar19;
  byte *pbVar20;
  char *pcVar21;
  int *piVar22;
  float10 fVar23;
  ushort uVar24;
  byte bVar25;
  uint *puVar26;
  byte local_8ec [256];
  byte local_7ec [256];
  char local_6ec [260];
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  undefined4 local_5dc;
  char local_5d8 [260];
  undefined4 local_4d4;
  byte local_4cc [260];
  byte local_3c8 [256];
  char local_2c8 [260];
  undefined1 local_1c4;
  undefined1 local_1c3;
  undefined1 local_1c2;
  undefined4 local_1c1;
  undefined4 local_1bd;
  undefined4 local_1b9;
  undefined4 local_1b5;
  undefined1 local_1b1;
  InternalExceptionFrame local_1b0;
  InternalExceptionFrame local_16c;
  undefined4 local_128 [3];
  undefined2 local_11c;
  undefined2 local_11a;
  undefined2 local_118;
  undefined2 local_116;
  undefined1 local_114;
  char local_113 [23];
  undefined4 *local_fc;
  int local_f8;
  char *local_f4;
  undefined4 *local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  AllocationRecord_0065CD10 *local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  uint local_d8;
  undefined4 local_d4;
  int local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  byte *local_a8;
  byte local_a4 [4];
  uint local_a0;
  undefined2 local_9c;
  undefined4 uStack_9a;
  undefined2 uStack_96;
  uint local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  undefined1 local_84;
  undefined2 local_83;
  undefined2 local_81;
  undefined1 local_7c;
  undefined2 local_7b;
  undefined2 local_79;
  undefined1 local_74;
  undefined2 local_73;
  undefined2 local_71;
  undefined1 local_6c;
  undefined2 local_6b;
  undefined2 local_69;
  undefined1 local_64;
  undefined2 local_63;
  undefined2 local_61;
  undefined1 local_5c;
  undefined2 local_5b;
  undefined2 local_59;
  undefined1 local_54;
  undefined2 local_53;
  undefined2 local_51;
  undefined1 local_4c;
  undefined2 local_4b;
  undefined2 local_49;
  undefined1 local_44;
  undefined2 local_43;
  undefined2 local_41;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  AllocationRecord_006684E0 *local_2c;
  AllocationRecord_0067D3B0 *local_28;
  byte *local_24;
  AllocationRecord_00648620 *local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  AllocationRecord_0065CD10 *local_c;
  char local_5;
  char *pcVar7;
  byte *pbVar14;
  char *temp_3fb77f837b;
  char *temp_3f53535d7a;
  char *temp_3f861e3394;
  char *temp_3f4976a46d;

  local_30 = 1;
  local_28 = nullptr;
  local_2c = nullptr;
  local_24 = nullptr;
  local_20 = nullptr;
  local_c = nullptr;
  uVar6 = 0xffffffff;
  pcVar4 = &CHAR_00h_008016a0;
  do {
    pcVar21 = pcVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar21 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar21;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar4 = pcVar21 + -uVar6;
  pcVar21 = (char *)&DAT_008488b4;
  memmove(pcVar21, pcVar4, uVar6); /* compiler REP MOVS byte copy */
  uVar7 = 0;
  local_1b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_1b0;
  local_EAX_119 = st::fn_0072D7F0(local_1b0.jumpBuffer,0);
  if (local_EAX_119 == 0) {
    if (lpFileName == (LPCSTR)0x0) {
      st::fn_006A5E40
                (-6,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x43a);
    }
    st::fn_00404426(lpFileName,
                       (AnonShape_GLOBAL_0081194C_4D1525E6 *)&PTR_thunk_FUN_00680270_007d3fa8);
    g_currentExceptionFrame = &local_16c;
    local_16c.previous = local_1b0.previous;
    iVar2 = st::fn_0072D7F0(local_16c.jumpBuffer,0);
    if (iVar2 == 0) {
      st::fn_00402702(this,1);
      st::fn_00404944(this_00,0);
      st::fn_00402D8D(1);
      st::fn_00405CD1(this_01,1);
      st::fn_00403148((undefined4 *)&DAT_007d3f78);
      DAT_008489d0 = 0;
      g_allocationRecord_00648620_008489B4 = nullptr;
      g_allocationRecord_0067D3B0_008489B8 = nullptr;
      g_allocationRecord_0065CD10_008489BC = nullptr;
      DAT_008489c0 = 0;
      g_allocationRecord_006684E0_008489C4 = nullptr;
      DAT_008489c8 = 0;
      PTR_008489cc = nullptr;
      g_array_008489D4 = nullptr;
      g_dArray_008489D8 = nullptr;
      g_dArray_008489DC = nullptr;
      st::fn_00404CC3();
      st::fn_00405182();
      DAT_007d3fa4 = 1;
      memset(&DAT_00811a90, 0, 0x2b14); /* compiler bulk-zero initialization */
      DAT_008488b0 = 0;
      DAT_00811a90 = 0;
      DAT_00811a98 = 0;
      st::fn_0040493F();
      if (param_2 == nullptr) {
        st::fn_006A5E40
                  (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x467);
      }
      iVar8 = st::fn_00402F40(st::mutable_c_string("_main_path"),(char *)param_2,nullptr);
      if (iVar8 == 0) {
        st::fn_006A5E40
                  (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x468);
      }
      iVar8 = st::fn_00402F40(st::mutable_c_string("_inc_path"),(char *)&param_2->field_0x104,nullptr);
      if (iVar8 == 0) {
        st::fn_006A5E40
                  (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x469);
      }
      iVar8 = st::fn_00402F40(st::mutable_c_string("_maps_path"),(char *)&param_2->field_0x208,nullptr);
      if (iVar8 == 0) {
        st::fn_006A5E40
                  (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x46a);
      }
      uVar8 = st::fn_00404B1F(st::mutable_c_string("_env_var0"),param_2->field_030C);
      if ((int)uVar8 < 0) {
        st::fn_006A5E40
                  (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x46b);
      }
      local_EAX_619 = st::fn_00404B1F(st::mutable_c_string("_env_var1"),param_2->field_0310);
      if ((int)local_EAX_619 < 0) {
        st::fn_006A5E40
                  (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x46c);
      }
      local_EAX_667 = st::fn_00404B1F(st::mutable_c_string("_env_var2"),param_2->field_0314);
      if ((int)local_EAX_667 < 0) {
        st::fn_006A5E40
                  (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x46d);
      }
      /* ST_CALLSITE[00683F3F]: CALL dword ptr [0x0085bba8] */
      st::external_0000001F(lpFileName,0x104,(LPSTR)local_4cc,nullptr);
      st::fn_0072E730(local_4cc,local_a4,local_7ec,local_8ec,local_3c8);
      st::fn_0072F110
                ((char *)local_4cc,(char *)local_a4,(char *)local_7ec,nullptr,nullptr);
      iVar8 = st::fn_00402F40(st::mutable_c_string("_curr_path"),(char *)local_4cc,nullptr);
      if (iVar8 == 0) {
        st::fn_006A5E40
                  (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x471);
      }
      pbVar15 = local_4cc;
      puVar26 = nullptr;
      pbVar3_mg0 = st::fn_00401AA5(DAT_00848a24);
      iVar8 = st::fn_00402F40((char *)pbVar3_mg0,(char *)pbVar15,puVar26);
      if (iVar8 == 0) {
        st::fn_006A5E40
                  (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x472);
      }
switchD_006841b6_default:
      if (local_30 != 0) {
        local_EAX_907 = st::fn_00401D7F();
        if (local_EAX_907 < 0) {
          st::fn_006A5E40
                    (local_EAX_907,g_overwriteContext_007ED77C,
                     st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x477);
        }
      }
      if (param_5 != nullptr) {
        ppuVar18 = &local_fc;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *ppuVar18 = nullptr;
          ppuVar18 = ppuVar18 + 1;
        }
        local_f8 = DAT_00857554;
        st::fn_0072E730(PTR_0085753c,nullptr,nullptr,nullptr,local_3c8);
        if (local_3c8[0] == 0) {
          if (lpFileName != (LPCSTR)0x0) {
            uVar6 = 0xffffffff;
            pCVar19 = lpFileName;
            do {
              pcVar4 = pCVar19;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar4 = pCVar19 + 1;
              cVar2 = *pCVar19;
              pCVar19 = pcVar4;
            } while (cVar2 != '\0');
            uVar6 = ~uVar6;
            pbVar15 = (byte *)(pcVar4 + -uVar6);
            pbVar20 = (byte *)&DAT_0084790c;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pbVar20 = *(undefined4 *)pbVar15;
              pbVar15 = pbVar15 + 4;
              pbVar20 = pbVar20 + 4;
            }
            goto LAB_006840bc;
          }
        }
        else if (PTR_0085753c != nullptr) {
          uVar6 = 0xffffffff;
          pbVar14 = PTR_0085753c;
          do {
            pbVar15 = pbVar14;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pbVar15 = pbVar14 + 1;
            bVar25 = *pbVar14;
            pbVar14 = pbVar15;
          } while (bVar25 != 0);
          uVar6 = ~uVar6;
          pbVar15 = pbVar15 + -uVar6;
          pbVar20 = (byte *)&DAT_0084790c;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pbVar20 = *(undefined4 *)pbVar15;
            pbVar15 = pbVar15 + 4;
            pbVar20 = pbVar20 + 4;
          }
LAB_006840bc:
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pbVar20 = *pbVar15;
            pbVar15 = pbVar15 + 1;
            pbVar20 = pbVar20 + 1;
          }
        }
        local_fc = &DAT_0084790c;
        st::fn_0072E340(&CHAR_00h_00847d0c,PTR_0085755c,0x3fe);
        local_f4 = &CHAR_00h_00847d0c;
        if (DAT_008489d0 != 0) {
          local_e8 = DAT_00848a0c;
          local_ec = DAT_00848a10;
          if ((char *)((int)DAT_008489d0 + 0x231) != nullptr) {
            uVar6 = 0xffffffff;
            pcVar4 = (char *)((int)DAT_008489d0 + 0x231);
            do {
              pcVar21 = pcVar4;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar21 = pcVar4 + 1;
              cVar2 = *pcVar4;
              pcVar4 = pcVar21;
            } while (cVar2 != '\0');
            uVar6 = ~uVar6;
            pcVar4 = pcVar21 + -uVar6;
            pcVar21 = (char *)&DAT_0084810c;
            memmove(pcVar21, pcVar4, uVar6); /* compiler REP MOVS byte copy */
          }
          local_f0 = &DAT_0084810c;
        }
        /* ST_CALLSITE[00684152]: CALL dword ptr [EBP + 0x18] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar8 = (*(code *)param_5)(&local_fc);
        if (iVar8 != 0) {
          st::fn_006A5E40
                    (-0x65,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x48a
                    );
        }
      }
      local_30 = 1;
      if (DAT_007d2d18 == 0x1c) {
        pAVar17 = (AllocationRecord_0065CD10 *)lpFileName;
        if (param_3 != nullptr) {
          *param_3 = 6;
        }
cf_common_join_0068A687:
        if (pAVar17 == nullptr) {
          st::fn_006A5E40
                    (-0x8d,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x9dd
                    );
        }
        st::fn_004020A4((int *)&g_allocationRecord_00648620_008489B4);
        st::fn_00402E05((int *)&g_allocationRecord_0067D3B0_008489B8);
        st::fn_00401537((int *)&g_allocationRecord_0065CD10_008489BC);
        st::fn_00402E00((int *)&DAT_008489c8);
        st::fn_00405BCD((int *)&g_allocationRecord_006684E0_008489C4);
        st::fn_00402FE0((int *)&PTR_008489cc);
        if (g_array_008489D4 != nullptr) {
          st::fn_006AE110(g_array_008489D4);
          g_array_008489D4 = nullptr;
        }
        if (g_dArray_008489DC != nullptr) {
          st::fn_006B5570(g_dArray_008489DC);
          g_dArray_008489DC = nullptr;
        }
        st::fn_00403DE6();
        st::fn_0040193D((undefined4 *)&g_anonShape_00683780_11EA4E23_00848A14);
        local_EAX_27312 = st::fn_00404D90();
        while (local_EAX_27312 != 0) {
          local_EAX_27312 = st::fn_00404D90();
        }
        st::fn_0040597A(&DAT_008489d0);
        g_currentExceptionFrame = local_16c.previous;
        return (uint *)pAVar17;
      }
      switch((&DAT_00811a90)[DAT_008488b0 * 0xac5]) {
      case 0:
        if (DAT_007d2d18 == 0x3b7) {
          if ((int)(&DAT_0081458c)[DAT_008488b0 * 0xac5] < 1) {
            st::fn_006A5E40
                      (-0x6e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x494);
          }
          iVar9 = DAT_008488b0;
          iVar8 = DAT_008488b0 * 0x2b14;
          *(undefined4 *)(&DAT_008143f4 + (&DAT_0081458c)[DAT_008488b0 * 0xac5] * 8 + iVar8) = 1;
          iVar8 = iVar8 + (&DAT_0081458c)[iVar9 * 0xac5] * 8;
          pvVar16 = *(void **)(&DAT_008143f4 + iVar8);
          if (((pvVar16 == nullptr) && (*(int *)(&DAT_008143f8 + iVar8) == 0)) ||
             ((pvVar16 == (void *)0x1 && (*(int *)(&DAT_008143f8 + iVar8) != 0)))) {
            st::fn_004053B2(pvVar16,1);
            bVar25 = 1;
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            pvVar16 = extraout_ECX_00;
          }
          else {
LAB_006842cf:
            st::fn_004053B2(pvVar16,0);
            bVar25 = 0;
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            pvVar16 = extraout_ECX_01;
          }
LAB_006842d6:
          st::fn_00403B98(pvVar16,bVar25);
        }
        else if (DAT_007d2d18 == 0x3b8) {
          if ((int)(&DAT_0081458c)[DAT_008488b0 * 0xac5] < 1) {
            st::fn_006A5E40
                      (-0x6e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x49f);
          }
          iVar8 = DAT_008488b0 * 0x2b14;
          pvVar16 = (void *)((&DAT_0081458c)[DAT_008488b0 * 0xac5] + -1);
          (&DAT_0081458c)[DAT_008488b0 * 0xac5] = pvVar16;
          if (((int)pvVar16 < 1) ||
             (((*(int *)(&DAT_008143f4 + (int)pvVar16 * 8 + iVar8) != 0 ||
               (*(int *)(&DAT_008143f8 + (int)pvVar16 * 8 + iVar8) != 0)) &&
              ((*(int *)(&DAT_008143f4 + (int)pvVar16 * 8 + iVar8) != 1 ||
               (*(int *)(&DAT_008143f8 + (int)pvVar16 * 8 + iVar8) == 0)))))) goto LAB_006842cf;
          st::fn_004053B2(pvVar16,1);
          bVar25 = 1;
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          pvVar16 = extraout_ECX;
          goto LAB_006842d6;
        }
        iVar9 = DAT_008488b0 * 0x2b14;
        iVar8 = (&DAT_0081458c)[DAT_008488b0 * 0xac5];
        if ((iVar8 < 1) ||
           (((*(int *)(&DAT_008143f4 + iVar8 * 8 + iVar9) != 0 ||
             (*(int *)(&DAT_008143f8 + iVar8 * 8 + iVar9) != 0)) &&
            ((*(int *)(&DAT_008143f4 + iVar8 * 8 + iVar9) != 1 ||
             (*(int *)(&DAT_008143f8 + iVar8 * 8 + iVar9) == 0)))))) {
          if (DAT_007d2d18 < 0x475) {
            if (DAT_007d2d18 < 0x456) {
              if (0x3ed < DAT_007d2d18) {
                switch(DAT_007d2d18) {
                case 0x3f2:
                case 0x3f3:
                case 0x3fc:
                case 0x3fd:
                case 0x406:
                case 0x407:
                case 0x408:
                case 0x409:
                case 0x41a:
                case 0x41b:
                case 0x424:
                case 0x425:
                case 0x426:
                case 0x427:
                case 0x428:
                case 0x429:
                case 0x42a:
                case 0x42b:
                case 0x42c:
                case 0x42d:
                case 0x42e:
                case 0x42f:
                case 0x430:
                case 0x431:
                case 0x432:
                case 0x44c:
                case 0x44d:
                  goto switchD_00684bb9_caseD_3f2;
                default:
                  goto switchD_006841b6_default;
                }
              }
              if (DAT_007d2d18 < 1000) {
                if (DAT_007d2d18 < 0x24) {
                  if (DAT_007d2d18 != 0x23) {
                    if (DAT_007d2d18 == 0x19) {
                      local_EAX_3364 = st::fn_00401CD0();
                      if (local_EAX_3364 == 0) {
                        st::fn_006A5E40
                                  (-0x8e,g_overwriteContext_007ED77C,
                                   st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x5a1);
                      }
                      if (PTR_008489cc == nullptr) {
                        st::fn_006A5E40
                                  (-0x8f,g_overwriteContext_007ED77C,
                                   st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x5a2);
                      }
                      iVar8 = DAT_008488b0 + 1;
                      puVar5 = &DAT_00811a90 + iVar8 * 0xac5;
                      DAT_008488b0 = iVar8;
                      for (iVar9 = 0xac5; temp_3f53535d7a = PTR_00857528, iVar12 = DAT_007d2d18,
                          iVar9 != 0; iVar9 = iVar9 + -1) {
                        *puVar5 = 0;
                        puVar5 = puVar5 + 1;
                      }
                      (&DAT_00811a90)[iVar8 * 0xac5] = 4;
                      (&DAT_00811a94)[iVar8 * 0xac5] = iVar12;
                      local_EAX_3521 =
                           st::fn_0072E340
                                     (&CHAR_00h_00811aa4 + iVar8 * 0x2b14,temp_3f53535d7a,0x3f);
                      local_bc = STReplaceLowWord((uint32_t)(local_EAX_3521), (uint16_t)(STField<undefined2>(local_EAX_3364,0x472)));
                      local_d0 = st::machine_word_boundary_cast<int>(PTR_008489cc->field_000F->count + 1);
                      local_EAX_3581 =
                           st::fn_00403EE5((int *)(local_EAX_3364 + 0x46e),'\x02',
                                              (byte *)&local_d0,STField<int>(local_EAX_3364,0x456));
                      local_4c = 0xb;
                      local_4b = 0x19;
                      local_49 = 1;
                      (&DAT_00814590)[DAT_008488b0 * 0xac5] = local_EAX_3581;
                      st::fn_00402149((int *)(local_EAX_3364 + 0x46e),(undefined4 *)&local_4c);
                      st::fn_006AE1C0(PTR_008489cc->field_000F,&local_bc);
                    }
                    else if (DAT_007d2d18 == 0x1a) {
                      if (DAT_008488b0 < 2) {
                        st::fn_006A5E40
                                  (-0x8f,g_overwriteContext_007ED77C,
                                   st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x5ba);
                      }
                      DAT_008488b0 = DAT_008488b0 + -1;
                      iVar8 = (&DAT_00811a94)[DAT_008488b0 * 0xac5];
                      if (iVar8 < 0x43) {
                        if (iVar8 == 0x42) {
                          local_EAX_2872 = st::fn_00401CD0();
                          if (local_EAX_2872 == 0) {
                            st::fn_006A5E40
                                      (-0x8e,g_overwriteContext_007ED77C,
                                       st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x60c);
                          }
                          if (PTR_008489cc == nullptr) {
                            st::fn_006A5E40
                                      (-0x8f,g_overwriteContext_007ED77C,
                                       st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x60d);
                          }
                          local_c8 = STField<undefined4>(local_EAX_2872,0x472);
                          pAVar1 = (AnonShape_00683780_11EA4E23 *)(local_EAX_2872 + 0x46e);
                          st::fn_00403EE5((int *)pAVar1,'\x02',
                                             (byte *)(&DAT_00814594 + DAT_008488b0 * 0xac5),
                                             STField<int>(local_EAX_2872,0x456));
                          local_5c = 0xb;
                          local_5b = 0x21;
                          local_59 = 1;
                          st::fn_00402149((int *)pAVar1,(undefined4 *)&local_5c);
                          st::fn_006AE1C0(PTR_008489cc->field_000F,&local_c8);
                          local_EAX_3095 =
                               st::fn_00403779(pAVar1,(&DAT_00814590)[DAT_008488b0 * 0xac5]);
                          if (local_EAX_3095 == nullptr) {
                            st::fn_006A5E40
                                      (-0x6c,g_overwriteContext_007ED77C,
                                       st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x61a);
                          }
                          *(dword *)(local_EAX_3095 + 1) = PTR_008489cc->field_000F->count;
                          DAT_008488b0 = DAT_008488b0 + -1;
                        }
                        else {
                          if (iVar8 == 0x19) {
                            local_EAX_2631 = st::fn_00401CD0();
                            if (local_EAX_2631 == 0) {
                              st::fn_006A5E40
                                        (-0x8e,g_overwriteContext_007ED77C,
                                         st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x5fc);
                            }
                            if (PTR_008489cc == nullptr) {
                              st::fn_006A5E40
                                        (-0x8f,g_overwriteContext_007ED77C,
                                         st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x5fd);
                            }
                            local_c0 = STField<undefined4>(local_EAX_2631,0x472);
                            local_6c = 0xb;
                            local_6b = 0x323;
                            local_69 = 0;
                            st::fn_00402149((int *)(local_EAX_2631 + 0x46e),
                                               (undefined4 *)&local_6c);
                            st::fn_006AE1C0(PTR_008489cc->field_000F,&local_c0);
                            local_EAX_2603 =
                                 st::fn_00403779((AnonShape_00683780_11EA4E23 *)
                                                    (local_EAX_2631 + 0x46e),
                                                    (&DAT_00814590)[DAT_008488b0 * 0xac5]);
                            if (local_EAX_2603 == nullptr) {
                              iVar8 = 0x607;
LAB_00684777:
                              st::fn_006A5E40
                                        (-0x6c,g_overwriteContext_007ED77C,
                                         st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),iVar8);
                            }
                          }
                          else {
                            if (iVar8 != 0x23) goto LAB_00684989;
                            local_EAX_2430 = st::fn_00401CD0();
                            if (local_EAX_2430 == 0) {
                              st::fn_006A5E40
                                        (-0x8e,g_overwriteContext_007ED77C,
                                         st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x5ec);
                            }
                            if (PTR_008489cc == nullptr) {
                              st::fn_006A5E40
                                        (-0x8f,g_overwriteContext_007ED77C,
                                         st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x5ed);
                            }
                            local_b8 = STField<undefined4>(local_EAX_2430,0x472);
                            local_7c = 0xb;
                            local_7b = 0x322;
                            local_79 = 0;
                            st::fn_00402149((int *)(local_EAX_2430 + 0x46e),
                                               (undefined4 *)&local_7c);
                            st::fn_006AE1C0(PTR_008489cc->field_000F,&local_b8);
                            local_EAX_2603 =
                                 st::fn_00403779((AnonShape_00683780_11EA4E23 *)
                                                    (local_EAX_2430 + 0x46e),
                                                    (&DAT_00814590)[DAT_008488b0 * 0xac5]);
                            if (local_EAX_2603 == nullptr) {
                              iVar8 = 0x5f7;
                              goto LAB_00684777;
                            }
                          }
                          *(dword *)(local_EAX_2603 + 1) = PTR_008489cc->field_000F->count;
                          DAT_008488b0 = DAT_008488b0 + -1;
                        }
                      }
                      else {
                        if ((0x455 < iVar8) && (iVar8 < 0x475)) {
                          if (PTR_008489cc == nullptr) {
                            st::fn_006A5E40
                                      (-0x8f,g_overwriteContext_007ED77C,
                                       st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x5dc);
                          }
                          local_EAX_3220 = st::fn_00401CD0();
                          if (local_EAX_3220 == 0) {
                            st::fn_006A5E40
                                      (-0x8e,g_overwriteContext_007ED77C,
                                       st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x5dd);
                          }
                          local_b4 = STField<undefined4>(local_EAX_3220,0x472);
                          local_44 = 0xb;
                          local_43 = 0x514;
                          local_41 = 0;
                          st::fn_00402149((int *)(local_EAX_3220 + 0x46e),(undefined4 *)&local_44
                                            );
                          st::fn_006AE1C0(PTR_008489cc->field_000F,&local_b4);
                          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                          st::fn_006AE1C0
                                    (*(DArrayTy **)(local_EAX_3220 + 0x462),PTR_008489cc);
                          st::fn_006AB060(&PTR_008489cc);
                        }
LAB_00684989:
                        DAT_008488b0 = DAT_008488b0 + -1;
                      }
                    }
                    else if (DAT_007d2d18 == 0x22) {
                      DAT_008488b0 = DAT_008488b0 + 1;
                      iVar12 = DAT_008488b0 * 0x2b14;
                      iVar8 = DAT_008488b0 * 0xac5;
                      puVar5 = &DAT_00811a90 + iVar8;
                      for (iVar9 = 0xac5; temp_3f861e3394 = PTR_00857528, iVar9 != 0;
                          iVar9 = iVar9 + -1) {
                        *puVar5 = 0;
                        puVar5 = puVar5 + 1;
                      }
                      (&DAT_00811a90)[iVar8] = 1;
                      st::fn_0072E340(&CHAR_00h_00811aa4 + iVar12,temp_3f861e3394,0x3f);
                      local_EAX_1897 = st::fn_004018FC((byte *)PTR_00857528);
                      iVar8 = DAT_008488b0;
                      (&DAT_00811a9c)[DAT_008488b0 * 0xac5] = local_EAX_1897;
                      if (local_EAX_1897 == 5) {
                        if (PTR_008489cc == nullptr) {
                          st::fn_006A5E40
                                    (-0x8f,g_overwriteContext_007ED77C,
                                     st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x4bb);
                        }
                        iVar8 = DAT_008488b0;
                        uVar3 = st::fn_00404548(PTR_00857528);
                        (&DAT_00811aa0)[iVar8 * 0xac5] = uVar3;
                      }
                      iVar9 = DAT_008488b0;
                      if ((&DAT_00811a9c)[iVar8 * 0xac5] == 6) {
                        if (PTR_008489cc == nullptr) {
                          st::fn_006A5E40
                                    (-0x8f,g_overwriteContext_007ED77C,
                                     st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x4bf);
                        }
                        iVar8 = DAT_008488b0;
                        uVar3 = st::fn_004046FB(PTR_00857528);
                        iVar9 = DAT_008488b0;
                        (&DAT_00811aa0)[iVar8 * 0xac5] = uVar3;
                      }
                      if ((&DAT_00811a9c)[iVar8 * 0xac5] == 7) {
                        iVar8 = iVar9;
                        if (PTR_008489cc == nullptr) {
                          st::fn_006A5E40
                                    (-0x8f,g_overwriteContext_007ED77C,
                                     st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x4c3);
                          iVar8 = DAT_008488b0;
                        }
                        uVar3 = st::fn_00403EA9(PTR_00857528);
                        (&DAT_00811aa0)[iVar8 * 0xac5] = uVar3;
                      }
                      if ((&DAT_00811a9c)[iVar8 * 0xac5] == 8) {
                        if (PTR_008489cc == nullptr) {
                          st::fn_006A5E40
                                    (-0x8f,g_overwriteContext_007ED77C,
                                     st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x4c7);
                        }
                        uVar3 = st::fn_00403EC2(PTR_00857528);
                        (&DAT_00811aa0)[DAT_008488b0 * 0xac5] = uVar3;
                      }
                    }
                    goto switchD_006841b6_default;
                  }
                }
                else if ((DAT_007d2d18 != 0x35) && (DAT_007d2d18 != 0x42)) {
                  if (DAT_007d2d18 == 0x3b6) {
                    if (0x31 < iVar8) {
                      st::fn_006A5E40
                                (-0x66,g_overwriteContext_007ED77C,
                                 st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x4cc);
                    }
                    iVar9 = DAT_008488b0;
                    iVar12 = DAT_008488b0 * 0x2b14;
                    iVar8 = (&DAT_0081458c)[DAT_008488b0 * 0xac5];
                    iVar11 = DAT_008488b0 + 1;
                    (&DAT_0081458c)[DAT_008488b0 * 0xac5] = iVar8 + 1;
                    DAT_008488b0 = iVar11;
                    *(undefined4 *)(&DAT_008143f4 + (iVar8 + 1) * 8 + iVar12) = 0;
                    *(undefined4 *)(&DAT_008143f8 + (&DAT_0081458c)[iVar9 * 0xac5] * 8 + iVar12) = 0
                    ;
                    puVar5 = &DAT_00811a90 + iVar11 * 0xac5;
                    for (iVar8 = 0xac5; temp_3fb77f837b = PTR_00857528, iVar9 = DAT_007d2d18,
                        iVar8 != 0; iVar8 = iVar8 + -1) {
                      *puVar5 = 0;
                      puVar5 = puVar5 + 1;
                    }
                    (&DAT_00811a90)[iVar11 * 0xac5] = 2;
                    (&DAT_00811a94)[iVar11 * 0xac5] = iVar9;
                    st::fn_0072E340
                              (&CHAR_00h_00811aa4 + iVar11 * 0x2b14,temp_3fb77f837b,0x3f);
                    DAT_007d3fa4 = 0;
                  }
                  goto switchD_006841b6_default;
                }
              }
            }
          }
          else if (DAT_007d2d18 < 0x57c) {
            if (DAT_007d2d18 < 0x578) {
              switch(DAT_007d2d18) {
              case 0x4b0:
              case 0x4b1:
              case 0x4b2:
              case 0x4b3:
              case 0x4b4:
              case 0x4b5:
              case 0x514:
              case 0x515:
              case 0x516:
              case 0x517:
              case 0x518:
              case 0x519:
              case 0x51a:
              case 0x51b:
              case 0x528:
              case 0x529:
              case 0x52a:
              case 0x532:
              case 0x533:
              case 0x534:
              case 0x535:
              case 0x536:
              case 0x537:
              case 0x546:
              case 0x547:
              case 0x548:
              case 0x549:
              case 0x54a:
              case 0x54b:
              case 0x54c:
              case 0x54d:
              case 0x54e:
              case 0x55a:
              case 0x55b:
              case 0x55c:
              case 0x55d:
              case 0x55e:
              case 0x55f:
              case 0x560:
              case 0x561:
              case 0x562:
              case 0x563:
              case 0x564:
              case 0x565:
              case 0x566:
              case 0x567:
              case 0x568:
              case 0x569:
              case 0x56a:
                break;
              default:
                goto switchD_006841b6_default;
              }
            }
          }
          else if (DAT_007d2d18 < 0x5c9) {
            if (DAT_007d2d18 != 0x5c8) {
              switch(DAT_007d2d18) {
              case 0x582:
              case 0x583:
              case 0x584:
              case 0x585:
              case 0x58c:
              case 0x58d:
              case 0x58e:
              case 0x58f:
              case 0x590:
              case 0x591:
              case 0x592:
              case 0x593:
              case 0x594:
              case 0x595:
              case 0x596:
              case 0x597:
              case 0x598:
              case 0x599:
              case 0x59a:
              case 0x59b:
              case 0x59c:
              case 0x59d:
              case 0x5aa:
              case 0x5ab:
              case 0x5ac:
              case 0x5ad:
              case 0x5ae:
              case 0x5af:
              case 0x5b0:
              case 0x5b1:
              case 0x5b2:
              case 0x5b3:
              case 0x5b4:
              case 0x5b5:
              case 0x5b6:
              case 0x5b7:
              case 0x5b8:
              case 0x5b9:
                break;
              default:
                goto switchD_006841b6_default;
              }
            }
          }
          else if ((DAT_007d2d18 < 0x5dc) || ((0x5fe < DAT_007d2d18 && (DAT_007d2d18 != 0x76c))))
          goto switchD_006841b6_default;
switchD_00684bb9_caseD_3f2:
          iVar9 = DAT_008488b0 + 1;
          puVar5 = &DAT_00811a90 + iVar9 * 0xac5;
          DAT_008488b0 = iVar9;
          for (iVar8 = 0xac5; temp_3f4976a46d = PTR_00857528, iVar12 = DAT_007d2d18, iVar8 != 0;
              iVar8 = iVar8 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          (&DAT_00811a90)[iVar9 * 0xac5] = 2;
          (&DAT_00811a94)[iVar9 * 0xac5] = iVar12;
          st::fn_0072E340(&CHAR_00h_00811aa4 + iVar9 * 0x2b14,temp_3f4976a46d,0x3f);
        }
        goto switchD_006841b6_default;
      case 1:
        if (DAT_007d2d18 != 0x1d) {
          switch(DAT_007d2d18) {
          case 2:
          case 0x17:
          case 0x2d:
          case 0x31:
          case 0x3e:
            if (PTR_008489cc == nullptr) {
              st::fn_006A5E40
                        (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                         0x631);
            }
            iVar8 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
            if (((iVar8 != 5) && (iVar8 != 6)) && (iVar8 != 7)) {
              st::fn_00405411(-0x74,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
            }
            break;
          default:
            if (DAT_007d2d18 == 0x29) {
              st::fn_00405411(-0x7b,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
            }
            else {
              st::fn_004059DE(DAT_007d2d18);
            }
            break;
          case 4:
            iVar8 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
            if (((iVar8 == 5) || (iVar8 == 6)) || ((iVar8 == 7 || (iVar8 == 8)))) {
              st::fn_00405411(-0x74,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
            }
            break;
          case 5:
            if (PTR_008489cc == nullptr) {
              st::fn_006A5E40
                        (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                         0x627);
            }
            iVar8 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
            if ((((iVar8 != 5) && (iVar8 != 6)) && (iVar8 != 7)) && (iVar8 != 8)) {
              st::fn_00405411(-0x74,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
            }
          }
          iVar9 = DAT_008488b0 + 1;
          (&DAT_00811a98)[DAT_008488b0 * 0xac5] = (&DAT_00811a98)[DAT_008488b0 * 0xac5] + 1;
          iVar12 = iVar9 * 0x2b14;
          puVar5 = &DAT_00811a90 + iVar9 * 0xac5;
          DAT_008488b0 = iVar9;
          for (iVar8 = 0xac5; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          (&DAT_00811a90)[iVar9 * 0xac5] = 3;
          uVar6 = 0xffffffff;
          (&DAT_00811a94)[iVar9 * 0xac5] = 1;
          pcVar4 = (char *)(iVar12 + 0x80ef90);
          do {
            pcVar21 = pcVar4;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar21 = pcVar4 + 1;
            cVar2 = *pcVar4;
            pcVar4 = pcVar21;
          } while (cVar2 != '\0');
          uVar6 = ~uVar6;
          pcVar4 = pcVar21 + -uVar6;
          pcVar21 = &CHAR_00h_00811aa4 + iVar12;
          memmove(pcVar21, pcVar4, uVar6); /* compiler REP MOVS byte copy */
          uVar7 = 0;
          (&DAT_00811a9c)[iVar9 * 0xac5] = STField<undefined4>(iVar12,0x80EF88);
          iVar8 = DAT_007d2d18;
          (&DAT_00811aa0)[iVar9 * 0xac5] = STField<undefined4>(iVar12,0x80EF8C);
          (&DAT_00811ae4)[iVar9 * 0xac5] = iVar8;
        }
        goto switchD_006841b6_default;
      case 2:
        goto switchD_006841b6_caseD_2;
      case 3:
        g_anonShape_00683780_11EA4E23_00848A14 =
             (AnonShape_00683780_11EA4E23 *)st::fn_0040213F(10);
        if (DAT_007d2d18 != 0x39) {
          st::fn_00404E26();
        }
        if ((DAT_007d2d18 != 0x10) && (DAT_007d2d18 != 0x39)) {
          if (DAT_007d2d18 != 0x3a) {
            if ((&DAT_00811a94)[DAT_008488b0 * 0xac5] == 2) {
              st::fn_006A5E40
                        (-0x71,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                         0x9d0);
              st::fn_0040193D((undefined4 *)&g_anonShape_00683780_11EA4E23_00848A14);
            }
            else {
              st::fn_006A5E40
                        (-0x72,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                         0x9d1);
              st::fn_0040193D((undefined4 *)&g_anonShape_00683780_11EA4E23_00848A14);
            }
            goto switchD_006841b6_default;
          }
          if ((&DAT_00811a94)[DAT_008488b0 * 0xac5] == 2) {
            st::fn_006A5E40
                      (-0x71,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x938);
          }
          if ((&DAT_00811a94)[DAT_008488b0 * 0xac5] != 1) {
            st::fn_006A5E40
                      (-0x69,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x939);
          }
          if (g_anonShape_00683780_11EA4E23_00848A14->field_0004 < 1) {
            st::fn_006A5E40
                      (-0x69,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x93a);
          }
          iVar8 = DAT_008488b0 * 0x2b14;
          switch((&DAT_00811ae4)[DAT_008488b0 * 0xac5]) {
          case 2:
          case 0x17:
          case 0x2d:
          case 0x31:
          case 0x3e:
            iVar9 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
            if (((iVar9 != 5) && (iVar9 != 6)) && (iVar9 != 7)) {
              st::fn_00405411(-0x74,&CHAR_00h_00811aa4 + iVar8);
            }
            iVar10 = st::fn_00401CD0();
            iVar8 = iVar10;
            if (iVar10 == 0) {
              st::fn_006A5E40
                        (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                         0x9a7);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              iVar8 = extraout_EAX;
            }
            uVar13 = (undefined2)((uint)iVar8 >> 0x10);
            if (PTR_008489cc == nullptr) {
              st::fn_006A5E40
                        (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                         0x9a8);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar13 = extraout_var;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_b0 = CONCAT22(uVar13,STField<undefined2>(iVar10,0x472));
            piVar22 = (int *)(iVar10 + 0x46e);
            st::fn_00403EE5(piVar22,'\x02',(byte *)(&DAT_00811aa0 + DAT_008488b0 * 0xac5),
                               STField<int>(iVar10,0x456));
            local_EAX_25691 = st::fn_00403779(g_anonShape_00683780_11EA4E23_00848A14,0);
            if ((g_anonShape_00683780_11EA4E23_00848A14->field_0004 == 1) &&
               (cVar2 = *local_EAX_25691, cVar2 != '\a')) {
              if ((cVar2 != '\x04') && (cVar2 != '\x01')) {
                st::fn_00405411(-0x74,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
              }
              st::fn_00403EE5(piVar22,'\x02',(byte *)(local_EAX_25691 + 1),
                                 STField<int>(iVar10,0x456));
            }
            else {
              st::fn_004033AF(piVar22,g_anonShape_00683780_11EA4E23_00848A14,
                                 STField<int>(iVar10,0x456));
            }
            local_1c = 0;
            switch((&DAT_00811a9c)[DAT_008488b0 * 0xac5]) {
            case 5:
              local_1c = 0;
              break;
            case 6:
              local_1c = 1;
              break;
            case 7:
              local_1c = 2;
              break;
            case 8:
              local_1c = 3;
            }
            st::fn_00403EE5(piVar22,'\x02',(byte *)&local_1c,STField<int>(iVar10,0x456));
            local_84 = 0xb;
            local_81 = 3;
            local_83 = *(undefined2 *)(&DAT_00811ae4 + DAT_008488b0 * 0xac5);
            st::fn_00402149(piVar22,(undefined4 *)&local_84);
            puVar5 = &local_b0;
            break;
          default:
            iVar8 = 0x9c8;
            uVar6 = 0xffffff97;
            goto cf_error_exit_0068A22B;
          case 4:
            iVar9 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
            if ((((iVar9 == 5) || (iVar9 == 6)) || (iVar9 == 7)) || (iVar9 == 8)) {
              st::fn_00405411(-0x74,&CHAR_00h_00811aa4 + iVar8);
            }
            local_EAX_23799 = st::fn_00403779(g_anonShape_00683780_11EA4E23_00848A14,0);
            if ((g_anonShape_00683780_11EA4E23_00848A14->field_0004 != 1) ||
               (cVar2 = *local_EAX_23799, cVar2 == '\a')) {
              if (((&DAT_00811a9c)[DAT_008488b0 * 0xac5] != 0) &&
                 ((&DAT_00811a9c)[DAT_008488b0 * 0xac5] != 4)) {
                st::fn_00405411(-0x74,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
              }
              uVar6 = st::fn_004042CD(g_anonShape_00683780_11EA4E23_00848A14,
                                         (byte *)(&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14));
              if ((int)uVar6 < 0) {
                st::fn_006A5E40
                          (uVar6,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp")
                           ,0x96e);
              }
              DAT_008488b0 = DAT_008488b0 + -2;
              g_anonShape_00683780_11EA4E23_00848A14 = nullptr;
              st::fn_0040193D((undefined4 *)&g_anonShape_00683780_11EA4E23_00848A14);
              goto switchD_006841b6_default;
            }
            switch(cVar2) {
            case '\x01':
            case '\x04':
              iVar8 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
              if (iVar8 == 0) {
                if (cVar2 == '\x01') {
                  uVar3 = *(undefined4 *)(local_EAX_23799 + 1);
                }
                else {
                  uVar3 = st::fn_00402C11((int)*(short *)(local_EAX_23799 + 1));
                }
                uVar6 = st::fn_00404B1F(&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14,uVar3);
                if ((int)uVar6 < 0) {
                  iVar8 = 0x953;
                  goto cf_error_exit_0068A22B;
                }
              }
              else if (iVar8 == 2) {
                if (cVar2 == '\x01') {
                  uVar3 = *(undefined4 *)(local_EAX_23799 + 1);
                }
                else {
                  uVar3 = st::fn_00402C11((int)*(short *)(local_EAX_23799 + 1));
                }
                uVar6 = st::fn_00404B1F(&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14,uVar3);
                if ((int)uVar6 < 0) {
                  iVar8 = 0x94c;
                  goto cf_error_exit_0068A22B;
                }
              }
              else {
                if (iVar8 != 3) {
                  st::fn_00405411(-0x74,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
                  DAT_008488b0 = DAT_008488b0 + -2;
                  st::fn_0040193D((undefined4 *)&g_anonShape_00683780_11EA4E23_00848A14);
                  goto switchD_006841b6_default;
                }
                if (cVar2 == '\x02') {
                  local_88 = *(float *)(local_EAX_23799 + 1);
                }
                else {
                  fVar23 = st::fn_0040465B((int)*(short *)(local_EAX_23799 + 1));
                  local_88 = (float)fVar23;
                }
                uVar6 = st::fn_00401EB5((byte *)(&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14),
                                           local_88);
                if ((int)uVar6 < 0) {
                  iVar8 = 0x948;
                  goto cf_error_exit_0068A22B;
                }
              }
              break;
            case '\x02':
            case '\x05':
              if (((&DAT_00811a9c)[DAT_008488b0 * 0xac5] != 0) &&
                 ((&DAT_00811a9c)[DAT_008488b0 * 0xac5] != 3)) {
                st::fn_00405411(-0x74,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
              }
              if (*local_EAX_23799 == '\x02') {
                local_8c = *(float *)(local_EAX_23799 + 1);
              }
              else {
                fVar23 = st::fn_0040465B((int)*(short *)(local_EAX_23799 + 1));
                local_8c = (float)fVar23;
              }
              uVar6 = st::fn_00401EB5((byte *)(&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14),
                                         local_8c);
              if ((int)uVar6 < 0) {
                iVar8 = 0x95a;
                goto cf_error_exit_0068A22B;
              }
              break;
            case '\x03':
            case '\x06':
              if (((&DAT_00811a9c)[DAT_008488b0 * 0xac5] != 0) &&
                 ((&DAT_00811a9c)[DAT_008488b0 * 0xac5] != 1)) {
                st::fn_00405411(-0x74,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
              }
              if (((&DAT_00811a9c)[DAT_008488b0 * 0xac5] == 0) && (*local_EAX_23799 == '\x03')) {
                iVar8 = st::fn_00403F30(&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14,
                                           (int)*(short *)(local_EAX_23799 + 1));
                if (iVar8 == 0) {
                  iVar8 = 0x961;
                  uVar6 = 0xffffff95;
                  goto cf_error_exit_0068A22B;
                }
              }
              else {
                pcVar4 = (char *)st::fn_0040353A((int)*(short *)(local_EAX_23799 + 1));
                if (pcVar4 == nullptr) {
                  st::fn_006A5E40
                            (-0x6b,g_overwriteContext_007ED77C,
                             st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x964);
                }
                iVar8 = st::fn_00402F40(&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14,pcVar4,
                                           nullptr);
                if (iVar8 == 0) {
                  iVar8 = 0x965;
                  uVar6 = 0xfffffffe;
                  goto cf_error_exit_0068A22B;
                }
              }
              break;
            default:
              iVar8 = 0x969;
              uVar6 = 0xffffff95;
cf_error_exit_0068A22B:
              st::fn_006A5E40
                        (uVar6,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                         iVar8);
            }
            DAT_008488b0 = DAT_008488b0 + -2;
            st::fn_0040193D((undefined4 *)&g_anonShape_00683780_11EA4E23_00848A14);
            goto switchD_006841b6_default;
          case 5:
            iVar9 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
            if ((((iVar9 != 5) && (iVar9 != 6)) && (iVar9 != 7)) && (iVar9 != 8)) {
              st::fn_00405411(-0x74,&CHAR_00h_00811aa4 + iVar8);
            }
            local_EAX_24967 = st::fn_00401CD0();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar13 = extraout_var_02;
            if (local_EAX_24967 == 0) {
              st::fn_006A5E40
                        (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                         0x977);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar13 = extraout_var_03;
            }
            if (PTR_008489cc == nullptr) {
              st::fn_006A5E40
                        (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                         0x978);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar13 = extraout_var_04;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_d4 = CONCAT22(uVar13,STField<undefined2>(local_EAX_24967,0x472));
            piVar22 = (int *)(local_EAX_24967 + 0x46e);
            st::fn_00403EE5(piVar22,'\x02',(byte *)(&DAT_00811aa0 + DAT_008488b0 * 0xac5),
                               STField<int>(local_EAX_24967,0x456));
            local_EAX_25115 = st::fn_00403779(g_anonShape_00683780_11EA4E23_00848A14,0);
            if ((g_anonShape_00683780_11EA4E23_00848A14->field_0004 == 1) &&
               (local_5 = *local_EAX_25115, local_5 != '\a')) {
              iVar8 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
              if (4 < iVar8) {
                if (iVar8 < 8) {
                  if ((local_5 != '\x04') && (local_5 != '\x01')) {
                    st::fn_00405411(-0x74,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
                  }
                  st::fn_00403EE5(piVar22,'\x02',(byte *)(local_EAX_25115 + 1),
                                     STField<int>(local_EAX_24967,0x456));
                }
                else if (iVar8 == 8) {
                  if ((local_5 != '\x06') && (local_5 != '\x03')) {
                    st::fn_00405411(-0x74,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
                  }
                  st::fn_00403EE5(piVar22,'\x01',*(byte **)(local_EAX_25115 + 1),
                                     STField<int>(local_EAX_24967,0x456));
                }
              }
            }
            else {
              st::fn_004033AF(piVar22,g_anonShape_00683780_11EA4E23_00848A14,
                                 STField<int>(local_EAX_24967,0x456));
            }
            local_14 = 0;
            switch((&DAT_00811a9c)[DAT_008488b0 * 0xac5]) {
            case 5:
              local_14 = 0;
              break;
            case 6:
              local_14 = 1;
              break;
            case 7:
              local_14 = 2;
              break;
            case 8:
              local_14 = 3;
            }
            st::fn_00403EE5(piVar22,'\x02',(byte *)&local_14,STField<int>(local_EAX_24967,0x456));
            local_74 = 0xb;
            local_71 = 3;
            local_73 = *(undefined2 *)(&DAT_00811ae4 + DAT_008488b0 * 0xac5);
            st::fn_00402149(piVar22,(undefined4 *)&local_74);
            puVar5 = &local_d4;
          }
          st::fn_006AE1C0(PTR_008489cc->field_000F,puVar5);
          DAT_008488b0 = DAT_008488b0 + -2;
          st::fn_0040193D((undefined4 *)&g_anonShape_00683780_11EA4E23_00848A14);
          goto switchD_006841b6_default;
        }
        if ((&DAT_00811a94)[DAT_008488b0 * 0xac5] != 2) {
          st::fn_006A5E40
                    (-0x69,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x906
                    );
        }
        if (0 < g_anonShape_00683780_11EA4E23_00848A14->field_0004) {
          local_EAX_26162 = st::fn_00403779(g_anonShape_00683780_11EA4E23_00848A14,0);
          iVar8 = DAT_008488b0;
          if ((g_anonShape_00683780_11EA4E23_00848A14->field_0004 == 1) &&
             (*local_EAX_26162 != '\a')) {
            switch(*local_EAX_26162) {
            case '\x01':
            case '\x04':
              (&DAT_008110b4)[(&DAT_008110b0)[DAT_008488b0 * 0xac5] + DAT_008488b0 * 0x2b14] = 2;
              (&DAT_008110b0)[iVar8 * 0xac5] = (&DAT_008110b0)[iVar8 * 0xac5] + 1;
              if (*local_EAX_26162 == '\x01') {
                uVar3 = *(undefined4 *)(local_EAX_26162 + 1);
                DAT_008488b0 = iVar8;
              }
              else {
                uVar3 = st::fn_00402C11((int)*(short *)(local_EAX_26162 + 1));
              }
              *(undefined4 *)
               (&DAT_0080f16c + (DAT_008488b0 * 0xac5 + (&DAT_0080f168)[DAT_008488b0 * 0xac5]) * 4)
                   = uVar3;
              (&DAT_0080f168)[DAT_008488b0 * 0xac5] = (&DAT_0080f168)[DAT_008488b0 * 0xac5] + 1;
              break;
            case '\x02':
            case '\x05':
              (&DAT_008110b4)[(&DAT_008110b0)[DAT_008488b0 * 0xac5] + DAT_008488b0 * 0x2b14] = 3;
              (&DAT_008110b0)[iVar8 * 0xac5] = (&DAT_008110b0)[iVar8 * 0xac5] + 1;
              if (*local_EAX_26162 == '\x02') {
                fVar23 = (float10)*(float *)(local_EAX_26162 + 1);
                DAT_008488b0 = iVar8;
              }
              else {
                fVar23 = st::fn_0040465B((int)*(short *)(local_EAX_26162 + 1));
              }
              *(float *)(&DAT_00810110 +
                        (DAT_008488b0 * 0xac5 + (&DAT_0081010c)[DAT_008488b0 * 0xac5]) * 4) =
                   (float)fVar23;
              (&DAT_0081010c)[DAT_008488b0 * 0xac5] = (&DAT_0081010c)[DAT_008488b0 * 0xac5] + 1;
              break;
            case '\x03':
            case '\x06':
              (&DAT_008110b4)[(&DAT_008110b0)[DAT_008488b0 * 0xac5] + DAT_008488b0 * 0x2b14] = 1;
              (&DAT_008110b0)[iVar8 * 0xac5] = (&DAT_008110b0)[iVar8 * 0xac5] + 1;
              uVar3 = st::fn_0040353A((int)*(short *)(local_EAX_26162 + 1));
              *(undefined4 *)
               (&DAT_0080efd8 + (DAT_008488b0 * 0xac5 + (&DAT_0080efd4)[DAT_008488b0 * 0xac5]) * 4)
                   = uVar3;
              (&DAT_0080efd4)[DAT_008488b0 * 0xac5] = (&DAT_0080efd4)[DAT_008488b0 * 0xac5] + 1;
              break;
            default:
              st::fn_006A5E40
                        (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                         0x923);
            }
          }
          else {
            local_EAX_26713 = st::fn_00402E82();
            uVar6 = st::fn_00404976(g_anonShape_00683780_11EA4E23_00848A14,local_EAX_26713);
            if ((int)uVar6 < 0) {
              st::fn_006A5E40
                        (uVar6,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                         0x927);
            }
            g_anonShape_00683780_11EA4E23_00848A14 = nullptr;
            (&DAT_008110b4)[(&DAT_008110b0)[DAT_008488b0 * 0xac5] + DAT_008488b0 * 0x2b14] = 4;
            (&DAT_008110b0)[DAT_008488b0 * 0xac5] = (&DAT_008110b0)[DAT_008488b0 * 0xac5] + 1;
            *(uint *)(&DAT_0080f16c +
                     (DAT_008488b0 * 0xac5 + (&DAT_0080f168)[DAT_008488b0 * 0xac5]) * 4) = uVar6;
            (&DAT_0080f168)[DAT_008488b0 * 0xac5] = (&DAT_0080f168)[DAT_008488b0 * 0xac5] + 1;
          }
        }
        DAT_008488b0 = DAT_008488b0 + -1;
        local_30 = 0;
        st::fn_0040193D((undefined4 *)&g_anonShape_00683780_11EA4E23_00848A14);
        goto switchD_006841b6_default;
      case 4:
        if (DAT_007d2d18 == 6) {
          DAT_008488b0 = DAT_008488b0 + 1;
          iVar8 = DAT_008488b0 * 0xac5;
          memset(&DAT_00811a90 + iVar8, 0, 0x2b14); /* compiler bulk-zero initialization */
          (&DAT_00811a90)[iVar8] = 0;
        }
        else if (DAT_007d2d18 != 0x1d) {
          st::fn_006A5E40
                    (-0x6c,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x658
                    );
        }
      default:
        goto switchD_006841b6_default;
      }
    }
    g_currentExceptionFrame = local_16c.previous;
    if (param_4 != nullptr) {
      memset(param_4, 0, 0x18); /* compiler bulk-zero initialization */
      *param_4 = iVar2;
      param_4[2] = DAT_00857554;
      st::fn_0072E730(PTR_0085753c,nullptr,nullptr,nullptr,local_3c8);
      if (local_3c8[0] != 0) {
        lpFileName = (LPCSTR)PTR_0085753c;
      }
      if ((byte *)lpFileName != nullptr) {
        uVar6 = 0xffffffff;
        do {
          pbVar15 = (byte *)lpFileName;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pbVar15 = (byte *)(lpFileName + 1);
          bVar25 = *lpFileName;
          lpFileName = (LPCSTR)pbVar15;
        } while (bVar25 != 0);
        uVar6 = ~uVar6;
        pbVar15 = pbVar15 + -uVar6;
        pbVar20 = (byte *)&DAT_0084790c;
        memmove(pbVar20, pbVar15, uVar6); /* compiler REP MOVS byte copy */
      }
      param_4[1] = (int)&DAT_0084790c;
      st::fn_0072E340(&CHAR_00h_00847d0c,PTR_0085755c,0x3fe);
      param_4[3] = (int)&CHAR_00h_00847d0c;
      param_4[4] = (int)&DAT_008488b4;
      param_4[5] = DAT_00857544;
    }
    st::fn_004020A4((int *)&g_allocationRecord_00648620_008489B4);
    st::fn_004020A4((int *)&local_20);
    st::fn_00402E05((int *)&g_allocationRecord_0067D3B0_008489B8);
    st::fn_00402E05((int *)&local_28);
    st::fn_00401537((int *)&g_allocationRecord_0065CD10_008489BC);
    st::fn_00401537((int *)&local_c);
    st::fn_00402E00((int *)&DAT_008489c8);
    st::fn_00402E00((int *)&local_24);
    st::fn_00405BCD((int *)&g_allocationRecord_006684E0_008489C4);
    st::fn_00405BCD((int *)&local_2c);
    st::fn_00402FE0((int *)&PTR_008489cc);
    if (g_array_008489D4 != nullptr) {
      st::fn_006AE110(g_array_008489D4);
      g_array_008489D4 = nullptr;
    }
    if (g_dArray_008489DC != nullptr) {
      st::fn_006B5570(g_dArray_008489DC);
      g_dArray_008489DC = nullptr;
    }
    st::fn_00403DE6();
    st::fn_0040193D((undefined4 *)&g_anonShape_00683780_11EA4E23_00848A14);
    local_EAX_27736 = st::fn_00404D90();
    while (local_EAX_27736 != 0) {
      local_EAX_27736 = st::fn_00404D90();
    }
    st::fn_0040597A(&DAT_008489d0);
    if (param_3 != nullptr) {
      *param_3 = 0;
      return nullptr;
    }
  }
  else {
    g_currentExceptionFrame = local_1b0.previous;
    if (param_4 != nullptr) {
      memset(param_4, 0, 0x18); /* compiler bulk-zero initialization */
      *param_4 = local_EAX_119;
      param_4[2] = 0;
      if (lpFileName != (LPCSTR)0x0) {
        uVar6 = 0xffffffff;
        do {
          pcVar7 = lpFileName;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar7 = lpFileName + 1;
          cVar2 = *lpFileName;
          lpFileName = pcVar7;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6;
        pcVar4 = pcVar7 + -uVar6;
        pcVar21 = (char *)&DAT_0084790c;
        memmove(pcVar21, pcVar4, uVar6); /* compiler REP MOVS byte copy */
        uVar7 = 0;
      }
      param_4[1] = (int)&DAT_0084790c;
      uVar6 = 0xffffffff;
      pcVar4 = &CHAR_00h_008016a0;
      do {
        pcVar21 = pcVar4;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar21 = pcVar4 + 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar21;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6;
      pcVar4 = pcVar21 + -uVar6;
      pcVar21 = &CHAR_00h_00847d0c;
      memmove(pcVar21, pcVar4, uVar6); /* compiler REP MOVS byte copy */
      param_4[3] = (int)&CHAR_00h_00847d0c;
      param_4[4] = (int)&DAT_008488b4;
    }
  }
  return nullptr;
switchD_006841b6_caseD_2:
  if (((&DAT_00811a98)[DAT_008488b0 * 0xac5] == 0) && (DAT_007d2d18 != 0x29)) {
    local_EAX_4770 = st::fn_004057DB(0x29);
    st::fn_00405411(-0x70,local_EAX_4770);
  }
  iVar8 = DAT_008488b0;
  (&DAT_00811a98)[DAT_008488b0 * 0xac5] = (&DAT_00811a98)[DAT_008488b0 * 0xac5] + 1;
  if ((DAT_007d2d18 == 0x10) || (DAT_007d2d18 == 0x29)) {
    iVar9 = DAT_008488b0 + 1;
    puVar5 = &DAT_00811a90 + iVar9 * 0xac5;
    DAT_008488b0 = iVar9;
    for (iVar8 = 0xac5; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    (&DAT_00811a90)[iVar9 * 0xac5] = 3;
    (&DAT_00811a94)[iVar9 * 0xac5] = 2;
    pcVar4 = st::pointer_boundary_cast<char *>(st::fn_00402540((&DAT_008110b0)[iVar9 * 0xac5]));
    uVar6 = 0xffffffff;
    do {
      pcVar21 = pcVar4;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar21 = pcVar4 + 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar21;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    pcVar4 = pcVar21 + -uVar6;
    pcVar21 = &CHAR_00h_00811aa4 + iVar9 * 0x2b14;
    memmove(pcVar21, pcVar4, uVar6); /* compiler REP MOVS byte copy */
    (&DAT_00811a9c)[iVar9 * 0xac5] = 0;
    (&DAT_00811ae4)[iVar9 * 0xac5] = 4;
    goto switchD_006841b6_default;
  }
  if (DAT_007d2d18 != 0x39) {
    st::fn_006A5E40
              (-0x71,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8fd);
    goto switchD_006841b6_default;
  }
  iVar9 = (&DAT_00811a94)[iVar8 * 0xac5];
  if (iVar9 < 0x568) {
    if (iVar9 == 0x567) {
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8a0);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8a0;
        goto cf_error_exit_006877A0;
      }
      goto cf_common_join_006877B6;
    }
    if (0x4b3 < iVar9) {
      switch(iVar9) {
      case 0x4b4:
        if (g_dArray_008489D8 == nullptr) {
          st::fn_006A5E40
                    (-0x8d,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x83f
                    );
        }
        pAVar17 = (AllocationRecord_0065CD10 *)g_dArray_008489D8;
        if (DAT_008489d0 == 0) {
          g_dArray_008489D8 = nullptr;
          if (param_3 != nullptr) {
            *param_3 = 10;
          }
          goto cf_common_join_0068A687;
        }
        st::fn_006A5E40
                  (-0x8d,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x841);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x4b5:
        iVar8 = st::fn_00403F99();
        if (iVar8 == 0) {
          st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_dArray_008489D8 == nullptr) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x84d
                    );
        }
        pcVar4 = local_6ec;
        for (iVar8 = 0x88; iVar8 != 0; iVar8 = iVar8 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + 4;
        }
        st::fn_0072E340(local_6ec,(&PTR_00811aec)[DAT_008488b0 * 0xac5],0x103);
        st::fn_0072E340(local_5d8,(&PTR_00811af0)[DAT_008488b0 * 0xac5],0x103);
        local_5e8 = (&DAT_00811c80)[DAT_008488b0 * 0xac5];
        local_5e4 = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        local_5e0 = (&DAT_00811c88)[DAT_008488b0 * 0xac5];
        local_5dc = (&DAT_00811c8c)[DAT_008488b0 * 0xac5];
        local_4d4 = (&DAT_00811c90)[DAT_008488b0 * 0xac5];
        st::fn_006AE1C0(g_dArray_008489D8,local_6ec);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      default:
        goto switchD_00685456_default;
      case 0x514:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x875
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x875;
          goto cf_error_exit_006876AB;
        }
        goto LAB_006876c1;
      case 0x515:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x876
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x876;
          goto cf_error_exit_006876FE;
        }
        goto LAB_00687714;
      case 0x516:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x877
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x877;
cf_error_exit_00687750:
          st::fn_006A5E40
                    (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),iVar8
                    );
        }
        break;
      case 0x517:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x878
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x878;
cf_error_exit_006877A0:
          st::fn_006A5E40
                    (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),iVar8
                    );
        }
        goto cf_common_join_006877B6;
      case 0x518:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x879
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x879;
cf_error_exit_006877EF:
          st::fn_006A5E40
                    (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),iVar8
                    );
        }
        goto cf_common_join_00687805;
      case 0x519:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x87a
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x87a;
cf_error_exit_0068783F:
          st::fn_006A5E40
                    (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),iVar8
                    );
        }
        goto cf_common_join_00687855;
      case 0x51a:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x87b
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x87b;
cf_error_exit_0068788E:
          st::fn_006A5E40
                    (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),iVar8
                    );
        }
        goto cf_common_join_006878A4;
      case 0x51b:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x87c
                    );
        }
        if (PTR_008489cc == nullptr) {
          st::fn_006A5E40
                    (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x87c
                    );
        }
        iVar8 = st::fn_004010AF(1,1);
        goto joined_r0x00689693;
      case 0x528:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x87e
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x87e;
          goto cf_error_exit_00687750;
        }
        break;
      case 0x529:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x87f
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x87f;
          goto cf_error_exit_0068783F;
        }
        goto cf_common_join_00687855;
      case 0x52a:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x880
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x880;
          goto cf_error_exit_00687750;
        }
        break;
      case 0x532:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x882
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x882;
cf_error_exit_006879EA:
          st::fn_006A5E40
                    (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),iVar8
                    );
        }
        goto cf_common_join_00687A00;
      case 0x533:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x883
                    );
        }
        if (PTR_008489cc == nullptr) {
          st::fn_006A5E40
                    (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x883
                    );
        }
        iVar8 = st::fn_004010AF(4,1);
        goto cf_common_join_006895D5;
      case 0x534:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x884
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x884;
cf_error_exit_00687A9D:
          st::fn_006A5E40
                    (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),iVar8
                    );
        }
        goto LAB_00687ab3;
      case 0x535:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x885
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x885;
cf_error_exit_00687AEC:
          st::fn_006A5E40
                    (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),iVar8
                    );
        }
        goto LAB_00687b02;
      case 0x536:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x886
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x886;
          goto cf_error_exit_006879EA;
        }
        goto cf_common_join_00687A00;
      case 0x537:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x887
                    );
        }
        if (PTR_008489cc == nullptr) {
          st::fn_006A5E40
                    (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x887
                    );
        }
        iVar8 = st::fn_004010AF(2,1);
        goto cf_common_join_006895D5;
      case 0x546:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x889
                    );
        }
        if (PTR_008489cc == nullptr) {
          st::fn_006A5E40
                    (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x889
                    );
        }
        iVar8 = 7;
        goto cf_common_join_0068956E;
      case 0x547:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x88a
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x88a;
          goto cf_error_exit_0068788E;
        }
        goto cf_common_join_006878A4;
      case 0x548:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x88b
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x88b;
          goto cf_error_exit_0068783F;
        }
        goto cf_common_join_00687855;
      case 0x549:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x88c
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x88c;
          goto cf_error_exit_006877EF;
        }
        goto cf_common_join_00687805;
      case 0x54a:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x88d
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x88d;
          goto cf_error_exit_006877A0;
        }
        goto cf_common_join_006877B6;
      case 0x54b:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x88e
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x88e;
          goto cf_error_exit_0068788E;
        }
        goto cf_common_join_006878A4;
      case 0x54c:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x88f
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x88f;
          goto cf_error_exit_0068783F;
        }
        goto cf_common_join_00687855;
      case 0x54d:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x890
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x890;
          goto cf_error_exit_00687750;
        }
        break;
      case 0x54e:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x891
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x891;
          goto cf_error_exit_00687A9D;
        }
LAB_00687ab3:
        iVar8 = 5;
        goto cf_common_join_0068956E;
      case 0x55a:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x893
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x893;
          goto cf_error_exit_00687750;
        }
        break;
      case 0x55b:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x894
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x894;
          goto cf_error_exit_006879EA;
        }
cf_common_join_00687A00:
        iVar8 = st::fn_004010AF(2,1);
        goto joined_r0x00689693;
      case 0x55c:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x895
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x895;
          goto cf_error_exit_00687750;
        }
        break;
      case 0x55d:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x896
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x896;
LAB_00687f2d:
          st::fn_006A5E40
                    (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),iVar8
                    );
        }
        goto LAB_00687f43;
      case 0x55e:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x897
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x897;
          goto cf_error_exit_00687AEC;
        }
        goto LAB_00687b02;
      case 0x55f:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x898
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x898;
          goto LAB_00687f2d;
        }
LAB_00687f43:
        iVar8 = st::fn_004010AF(3,1);
        goto joined_r0x00689693;
      case 0x560:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x899
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x899;
          goto cf_error_exit_00687750;
        }
        break;
      case 0x561:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x89a
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x89a;
          goto cf_error_exit_0068783F;
        }
        goto cf_common_join_00687855;
      case 0x562:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x89b
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x89b;
          goto cf_error_exit_00687AEC;
        }
LAB_00687b02:
        iVar8 = st::fn_004010AF(3,1);
        goto cf_common_join_006895D5;
      case 0x563:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x89c
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x89c;
          goto cf_error_exit_006877A0;
        }
        goto cf_common_join_006877B6;
      case 0x564:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x89d
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x89d;
          goto cf_error_exit_0068788E;
        }
cf_common_join_006878A4:
        iVar8 = 2;
        goto cf_common_join_006895CD;
      case 0x565:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x89e
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x89e;
          goto cf_error_exit_006877A0;
        }
cf_common_join_006877B6:
        iVar8 = 3;
        goto cf_common_join_0068956E;
      case 0x566:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x89f
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x89f;
          goto cf_error_exit_00687750;
        }
      }
cf_common_join_00687766:
      iVar8 = 3;
cf_common_join_006895CD:
      iVar8 = st::fn_0040328D(iVar8);
cf_common_join_006895D5:
      if (iVar8 == 0) {
        st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
      }
      iVar8 = STField<int>(local_EAX_14857,0x456);
      uVar24 = (ushort)(&DAT_00811a94)[DAT_008488b0 * 0xac5];
      goto LAB_006896f6;
    }
    if (iVar9 == 0x4b3) {
      if (g_dArray_008489D8 != nullptr) {
        st::fn_006A5E40
                  (-0x8c,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x83a);
      }
      g_dArray_008489D8 = st::fn_006AE290(nullptr,5,0x220,5);
      DAT_008488b0 = DAT_008488b0 + -1;
      goto switchD_006841b6_default;
    }
    if (iVar9 < 0x425) {
      if (iVar9 == 0x424) {
        iVar8 = st::fn_00402301();
        if (iVar8 == 0) {
          st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (((g_allocationRecord_006684E0_008489C4 != nullptr) ||
            (g_allocationRecord_0065CD10_008489BC != nullptr)) ||
           (g_allocationRecord_00648620_008489B4 != nullptr)) {
          st::fn_006A5E40
                    (-0x8c,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x72e
                    );
        }
        g_allocationRecord_006684E0_008489C4 =
             st::fn_004053C1((&PTR_00811aec)[DAT_008488b0 * 0xac5],
                                *(ushort *)(&DAT_00811c80 + DAT_008488b0 * 0xac5),
                                *(ushort *)(&DAT_00811c84 + DAT_008488b0 * 0xac5),
                                *(ushort *)(&DAT_00811c88 + DAT_008488b0 * 0xac5),
                                *(byte *)(&DAT_00811c8c + DAT_008488b0 * 0xac5));
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      }
      if (iVar9 < 0x3f3) {
        if (iVar9 == 0x3f2) {
          iVar8 = st::fn_00405A5B();
          if (iVar8 == 0) {
            st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
          }
          if (g_dArray_008489DC != nullptr) {
            st::fn_006A5E40
                      (-0x8c,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x85b);
          }
          g_dArray_008489DC = st::fn_006B54F0(nullptr,5,5);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        }
        if (iVar9 < 0x3ea) {
          if (iVar9 == 0x3e9) {
            iVar8 = st::fn_00402F1D();
            if (iVar8 == 0) {
              st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
            }
            if (DAT_008489d0 != 0) {
              st::fn_0040597A(&DAT_008489d0);
            }
            DAT_008489d0 = st::machine_word_boundary_cast<undefined4>(st::fn_00402054((byte *)(&PTR_00811aec)[DAT_008488b0 * 0xac5],
                                              (&DAT_00811c80)[DAT_008488b0 * 0xac5]));
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          }
          if (0x42 < iVar9) {
            if (iVar9 == 0x3b6) {
              if ((iVar8 < 1) || ((int)(&DAT_00811a78)[iVar8 * 0xac5] < 1)) {
                st::fn_006A5E40
                          (-0x6e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp")
                           ,0x66c);
              }
              iVar8 = st::fn_00405178();
              if (iVar8 == 0) {
                st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
              }
              iVar9 = DAT_008488b0;
              DAT_007d3fa4 = 1;
              iVar8 = DAT_008488b0 * 0x2b14;
              *(undefined4 *)(&DAT_008118e4 + (&DAT_00811a78)[DAT_008488b0 * 0xac5] * 8 + iVar8) =
                   (&DAT_00811c80)[DAT_008488b0 * 0xac5];
              iVar8 = iVar8 + (&DAT_00811a78)[iVar9 * 0xac5] * 8;
              pvVar16 = *(void **)(&DAT_008118e0 + iVar8);
              if (((pvVar16 == nullptr) && (*(int *)(&DAT_008118e4 + iVar8) == 0)) ||
                 ((pvVar16 == (void *)0x1 && (*(int *)(&DAT_008118e4 + iVar8) != 0)))) {
                st::fn_004053B2(pvVar16,1);
                st::fn_00403B98(this_02,1);
                DAT_008488b0 = DAT_008488b0 + -1;
              }
              else {
                st::fn_004053B2(pvVar16,0);
                st::fn_00403B98(this_03,0);
                DAT_008488b0 = DAT_008488b0 + -1;
              }
            }
            else {
              if (iVar9 != 1000) goto switchD_00685456_default;
              iVar8 = st::fn_00402F1D();
              if (iVar8 == 0) {
                st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
              }
              if (DAT_008489d0 != 0) {
                st::fn_0040597A(&DAT_008489d0);
              }
              DAT_008489d0 = st::machine_word_boundary_cast<undefined4>(st::fn_00405754((byte *)(&PTR_00811aec)[DAT_008488b0 * 0xac5]));
              DAT_008488b0 = DAT_008488b0 + -1;
            }
            goto switchD_006841b6_default;
          }
          if ((iVar9 == 0x42) || (iVar9 == 0x23)) {
            local_EAX_5150 = st::fn_00401CD0();
            if (local_EAX_5150 == 0) {
              st::fn_006A5E40
                        (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                         0x6ae);
            }
            if (PTR_008489cc == nullptr) {
              st::fn_006A5E40
                        (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                         0x6af);
            }
            iVar8 = st::fn_00403053();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar13 = extraout_var_00;
            if (iVar8 == 0) {
              st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar13 = extraout_var_01;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_c4 = CONCAT22(uVar13,STField<undefined2>(local_EAX_5150,0x472));
            piVar22 = (int *)(local_EAX_5150 + 0x46e);
            iVar8 = STField<int>(local_EAX_5150,0x456);
            if ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14] == '\x02') {
              st::fn_00403EE5(piVar22,'\x02',(byte *)(&DAT_00811c80 + DAT_008488b0 * 0xac5),iVar8
                                );
            }
            else {
              local_EAX_5366 = st::fn_00404273((&DAT_00811c80)[DAT_008488b0 * 0xac5]);
              st::fn_004033AF(piVar22,local_EAX_5366,iVar8);
            }
            local_cc = st::machine_word_boundary_cast<int>(PTR_008489cc->field_000F->count + 1);
            local_EAX_5419 =
                 st::fn_00403EE5(piVar22,'\x02',(byte *)&local_cc,
                                    STField<int>(local_EAX_5150,0x456));
            iVar8 = DAT_008488b0;
            local_54 = 0xb;
            local_51 = 2;
            (&DAT_00814590)[DAT_008488b0 * 0xac5] = local_EAX_5419;
            local_53 = *(undefined2 *)(&DAT_00811a94 + iVar8 * 0xac5);
            st::fn_00402149(piVar22,(undefined4 *)&local_54);
            iVar8 = DAT_008488b0;
            local_EAX_5537 = st::fn_006AE1C0(PTR_008489cc->field_000F,&local_c4);
            (&DAT_00814594)[iVar8 * 0xac5] = local_EAX_5537;
            (&DAT_00811a90)[iVar8 * 0xac5] = 4;
            goto switchD_006841b6_default;
          }
          if (iVar9 == 0x35) {
            local_EAX_5008 = st::fn_00402B80();
            if (local_EAX_5008 == 0) {
              st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
            }
            if (g_dArray_008489DC == nullptr) {
              st::fn_006A5E40
                        (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                         0x86f);
            }
            st::fn_006B5AA0(g_dArray_008489DC,(&PTR_00811aec)[DAT_008488b0 * 0xac5]);
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          }
        }
        else {
          switch(iVar9) {
          case 0x3ea:
            iVar8 = st::fn_00402F1D();
            if (iVar8 == 0) {
              st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
            }
            if (DAT_008489d0 != 0) {
              st::fn_0040597A(&DAT_008489d0);
            }
            DAT_008489d0 = st::machine_word_boundary_cast<undefined4>(st::fn_0040102D((byte *)(&PTR_00811aec)[DAT_008488b0 * 0xac5],
                                              (&DAT_00811c80)[DAT_008488b0 * 0xac5]));
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          case 0x3eb:
            if (DAT_008489d0 != 0) {
              st::fn_0040597A(&DAT_008489d0);
              DAT_008488b0 = DAT_008488b0 + -1;
              goto switchD_006841b6_default;
            }
            break;
          case 0x3ec:
            local_EAX_6442 = st::fn_00402B9E();
            if (local_EAX_6442 == 0) {
              st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
            }
            st::fn_004012E9(*(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5));
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          case 0x3ed:
            iVar8 = st::fn_0040297D();
            if (iVar8 == 0) {
              st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
            }
            st::fn_00404FE8((&PTR_00811aec)[DAT_008488b0 * 0xac5],
                               (&DAT_00811c80)[DAT_008488b0 * 0xac5],
                               (&DAT_00811c84)[DAT_008488b0 * 0xac5],
                               (&DAT_00811c88)[DAT_008488b0 * 0xac5]);
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          }
        }
      }
      else {
        switch(iVar9) {
        case 0x3f3:
          if (g_dArray_008489DC == nullptr) {
            st::fn_006A5E40
                      (-0x8d,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x860);
          }
          pAVar17 = (AllocationRecord_0065CD10 *)g_dArray_008489DC;
          if (DAT_008489d0 == 0) {
            g_dArray_008489DC = nullptr;
            if (param_3 != nullptr) {
              *param_3 = 9;
            }
            goto cf_common_join_0068A687;
          }
          st::fn_004024B9(&g_dArray_008489DC->flags);
          if (g_dArray_008489DC != nullptr) {
            st::fn_006B5570(g_dArray_008489DC);
            g_dArray_008489DC = nullptr;
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          }
          break;
        case 0x3fc:
          iVar8 = st::fn_00402784();
          if (iVar8 == 0) {
            st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
          }
          if ((((g_allocationRecord_0067D3B0_008489B8 != nullptr) ||
               (g_allocationRecord_00648620_008489B4 != nullptr)) ||
              (g_allocationRecord_006684E0_008489C4 != nullptr)) ||
             ((DAT_008489c8 != 0 ||
              (g_allocationRecord_0065CD10_008489BC != nullptr)))) {
            st::fn_006A5E40
                      (-0x8c,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x74c);
          }
          g_allocationRecord_00648620_008489B4 =
               st::fn_0040117C((&PTR_00811aec)[DAT_008488b0 * 0xac5],
                                  (&DAT_00811c80)[DAT_008488b0 * 0xac5]);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x3fd:
          if ((g_allocationRecord_00648620_008489B4 == nullptr) ||
             (DAT_008489c0 == 1)) {
            st::fn_006A5E40
                      (-0x8d,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x751);
          }
          pAVar17 = (AllocationRecord_0065CD10 *)g_allocationRecord_00648620_008489B4;
          if (DAT_008489d0 == 0) {
            g_allocationRecord_00648620_008489B4 = nullptr;
            if (param_3 != nullptr) {
              *param_3 = 4;
            }
            goto cf_common_join_0068A687;
          }
          /* ST_CALLSITE[00685C9B]: CALL 0x00401ebf; direct=00401EBF EventDataPack */
          local_c = st::fn_00401EBF(*(AllocationRecord_0065CD10 **)
                                   &g_allocationRecord_00648620_008489B4->field_0x4e,&local_18);
          /* ST_CALLSITE[00685CB2]: CALL 0x00405a24; direct=00405A24 BossDataPack */
          local_20 = st::fn_00405A24(g_allocationRecord_00648620_008489B4,(undefined4 *)local_c,
                                  local_18,&local_10);
          st::fn_00401537((int *)&local_c);
          st::fn_004020A4((int *)&g_allocationRecord_00648620_008489B4);
          st::fn_00401A41((byte *)local_20,local_10);
          st::fn_004020A4((int *)&local_20);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x406:
          iVar8 = st::fn_00403431();
          if (iVar8 == 0) {
            st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
          }
          if ((((g_allocationRecord_0067D3B0_008489B8 != nullptr) ||
               (g_allocationRecord_00648620_008489B4 != nullptr)) ||
              (g_allocationRecord_006684E0_008489C4 != nullptr)) ||
             ((DAT_008489c8 != 0 ||
              (g_allocationRecord_0065CD10_008489BC != nullptr)))) {
            st::fn_006A5E40
                      (-0x8c,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x6e5);
          }
          g_allocationRecord_0067D3B0_008489B8 =
               st::fn_00405074((&PTR_00811aec)[DAT_008488b0 * 0xac5],
                                  *(undefined2 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5),
                                  (&PTR_00811af0)[DAT_008488b0 * 0xac5],
                                  (&DAT_00811c84)[DAT_008488b0 * 0xac5]);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x407:
          if ((g_allocationRecord_0067D3B0_008489B8 == nullptr) ||
             (DAT_008489c0 == 1)) {
            st::fn_006A5E40
                      (-0x8d,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x6ea);
          }
          pAVar17 = (AllocationRecord_0065CD10 *)g_allocationRecord_0067D3B0_008489B8;
          if (DAT_008489d0 == 0) {
            g_allocationRecord_0067D3B0_008489B8 = nullptr;
            if (param_3 != nullptr) {
              *param_3 = 3;
            }
            goto cf_common_join_0068A687;
          }
          /* ST_CALLSITE[006857AD]: CALL 0x00401ebf; direct=00401EBF EventDataPack */
          local_c = st::fn_00401EBF(*(AllocationRecord_0065CD10 **)
                                   &g_allocationRecord_0067D3B0_008489B8->field_0x106,&local_18);
          /* ST_CALLSITE[006857C4]: CALL 0x00405204; direct=00405204 PlrDataPack */
          local_28 = st::fn_00405204(g_allocationRecord_0067D3B0_008489B8,(undefined4 *)local_c,local_18
                                 ,&local_10);
          st::fn_00401537((int *)&local_c);
          st::fn_00402E05((int *)&g_allocationRecord_0067D3B0_008489B8);
          st::fn_00401A41((byte *)local_28,local_10);
          st::fn_00402E05((int *)&local_28);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x408:
          if (g_allocationRecord_0067D3B0_008489B8 == nullptr) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x6fc);
          }
          iVar8 = st::fn_00405A79();
          if (iVar8 == 0) {
            st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
          }
          g_allocationRecord_0067D3B0_008489B8->field_0x71 =
               *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
          *(undefined4 *)&g_allocationRecord_0067D3B0_008489B8->field_0x6d =
               (&DAT_00811c84)[DAT_008488b0 * 0xac5];
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x409:
          if (g_allocationRecord_0067D3B0_008489B8 == nullptr) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x703);
          }
          local_EAX_7282 = st::fn_004014B0();
          if (local_EAX_7282 == 0) {
            st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
          }
          g_allocationRecord_0067D3B0_008489B8->field_0xa3 =
               *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
          *(undefined2 *)&g_allocationRecord_0067D3B0_008489B8->field_0xa4 =
               *(undefined2 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5);
          *(undefined2 *)&g_allocationRecord_0067D3B0_008489B8->field_0xa6 =
               *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
          *(undefined2 *)&g_allocationRecord_0067D3B0_008489B8->field_0xa8 =
               *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5);
          *(undefined4 *)&g_allocationRecord_0067D3B0_008489B8->field_0xaa =
               (&DAT_00811c90)[DAT_008488b0 * 0xac5];
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x41a:
          iVar8 = st::fn_004045B1();
          if (iVar8 == 0) {
            st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
          }
          if (((DAT_008489c8 != 0) ||
              (g_allocationRecord_0065CD10_008489BC != nullptr)) ||
             ((g_allocationRecord_00648620_008489B4 != nullptr ||
              (g_allocationRecord_006684E0_008489C4 != nullptr)))) {
            st::fn_006A5E40
                      (-0x8c,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x70e);
          }
          DAT_008489c8 = st::machine_word_boundary_cast<undefined4>((AllocationRecord_0065CD10 *)
                         st::fn_0040506A((&PTR_00811aec)[DAT_008488b0 * 0xac5],
                                            *(undefined2 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5),
                                            *(undefined2 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5)));
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x41b:
          if (DAT_008489c8 == 0) {
            st::fn_006A5E40
                      (-0x8d,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x713);
          }
          pAVar17 = st::pointer_boundary_cast<AllocationRecord_0065CD10 *>(DAT_008489c8);
          if (g_allocationRecord_0067D3B0_008489B8 == nullptr) {
            if (DAT_008489d0 == 0) {
              DAT_008489c8 = 0;
              if (param_3 != nullptr) {
                *param_3 = 2;
              }
              goto cf_common_join_0068A687;
            }
            /* ST_CALLSITE[00685B5F]: CALL 0x0040518c; direct=0040518C TactDataPack */
            local_24 = st::fn_0040518C((undefined4 *)DAT_008489c8,&local_10);
            st::fn_00402E00((int *)&DAT_008489c8);
            st::fn_00401A41(local_24,local_10);
            st::fn_00402E00((int *)&local_24);
            DAT_008488b0 = DAT_008488b0 + -1;
          }
          else {
            local_e4 = st::pointer_boundary_cast<AllocationRecord_0065CD10 *>(DAT_008489c8);
            local_e0 = 0;
            local_dc = 0;
            local_d8 = *(uint *)&DAT_008489c8->field_0x14;
            st::fn_006AE1C0
                      (g_allocationRecord_0067D3B0_008489B8->field_00C2,&local_e4);
            DAT_008489c8 = 0;
            DAT_008488b0 = DAT_008488b0 + -1;
          }
          goto switchD_006841b6_default;
        }
      }
    }
    else {
      switch(iVar9) {
      case 0x425:
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          st::fn_006A5E40
                    (-0x8d,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x733
                    );
        }
        pAVar17 = (AllocationRecord_0065CD10 *)g_allocationRecord_006684E0_008489C4;
        if (DAT_008489c8 == 0) {
          if (DAT_008489d0 == 0) {
            g_allocationRecord_006684E0_008489C4 = nullptr;
            if (param_3 != nullptr) {
              *param_3 = 1;
            }
            goto cf_common_join_0068A687;
          }
          /* ST_CALLSITE[0068608A]: CALL 0x004014c4; direct=004014C4 FltDataPack */
          local_2c = st::fn_004014C4(g_allocationRecord_006684E0_008489C4,&local_10);
          st::fn_00405BCD((int *)&g_allocationRecord_006684E0_008489C4);
          st::fn_00401A41((byte *)local_2c,local_10);
          st::fn_00405BCD((int *)&local_2c);
          DAT_008488b0 = DAT_008488b0 + -1;
        }
        else {
          local_ac = 0;
          if (g_allocationRecord_006684E0_008489C4 == nullptr) {
            local_a8 = nullptr;
          }
          else {
            local_a8 = (undefined1 *)((int)&g_allocationRecord_006684E0_008489C4[-1].field_023F + 1);
          }
          st::fn_006AE1C0(*(DArrayTy **)&DAT_008489c8->field_0x85,&local_ac);
          g_allocationRecord_006684E0_008489C4 = nullptr;
          DAT_008488b0 = DAT_008488b0 + -1;
        }
        goto switchD_006841b6_default;
      case 0x426:
        iVar8 = st::fn_00401F14();
        if (iVar8 == 0) {
          st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x78d
                    );
        }
        memset(local_128, 0, 0x2c); /* compiler bulk-zero initialization */
        local_128[0] = (&DAT_00811c80)[DAT_008488b0 * 0xac5];
        local_128[1] = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        local_128[2] = (&DAT_00811c88)[DAT_008488b0 * 0xac5];
        local_11c = *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5);
        local_11a = *(undefined2 *)(&DAT_00811c90 + DAT_008488b0 * 0xac5);
        local_118 = (&DAT_00811c94)[DAT_008488b0 * 0x158a];
        local_116 = (&DAT_00811c98)[DAT_008488b0 * 0x158a];
        local_114 = (&DAT_00811c9c)[DAT_008488b0 * 0x2b14];
        st::fn_0072E340(local_113,(&PTR_00811aec)[DAT_008488b0 * 0xac5],0xe);
        st::fn_006AE1C0
                  ((DArrayTy *)g_allocationRecord_006684E0_008489C4->field_01EB,local_128);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x427:
        iVar8 = st::fn_00403FF8();
        if (iVar8 == 0) {
          st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x79d
                    );
        }
        g_allocationRecord_006684E0_008489C4->field_00DF =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x428:
        iVar8 = st::fn_004031FC();
        if (iVar8 == 0) {
          st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x7b1
                    );
        }
        g_allocationRecord_006684E0_008489C4->field_00F5 =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_00F6 = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        g_allocationRecord_006684E0_008489C4->field_00FA =
             (&DAT_00811c88)[DAT_008488b0 * 0xac5] * 0x19;
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x429:
        iVar8 = st::fn_00404958();
        if (iVar8 == 0) {
          st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x7a3
                    );
        }
        g_allocationRecord_006684E0_008489C4->field_0xe0 =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_00E1 =
             *(undefined2 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_00E3 =
             *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_00E5 =
             *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_00F1 = (&DAT_00811c90)[DAT_008488b0 * 0xac5];
        g_allocationRecord_006684E0_008489C4->field_00E7 =
             *(int *)(&DAT_00811c94 + DAT_008488b0 * 0x158a) * 0x19;
        g_allocationRecord_006684E0_008489C4->field_00EB = (&DAT_00811c98)[DAT_008488b0 * 0x158a];
        g_allocationRecord_006684E0_008489C4->field_00ED =
             *(undefined2 *)(&DAT_00811c9c + DAT_008488b0 * 0x2b14);
        g_allocationRecord_006684E0_008489C4->field_00EF = (&DAT_00811ca0)[DAT_008488b0 * 0x158a];
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x42a:
        iVar8 = st::fn_00404980();
        if (iVar8 == 0) {
          st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x7b9
                    );
        }
        g_allocationRecord_006684E0_008489C4->field_0102 =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_0109 = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        g_allocationRecord_006684E0_008489C4->field_0103 =
             (&DAT_00811c88)[DAT_008488b0 * 0xac5] * 0x19;
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x42b:
        iVar8 = st::fn_00403DF5();
        if (iVar8 == 0) {
          st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x7c1
                    );
        }
        local_9c = *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_a0 = CONCAT22(*(undefined2 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5),
                            *(undefined2 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5));
        local_90 = (&DAT_00811c8c)[DAT_008488b0 * 0xac5];
        uStack_9a = (&DAT_00811c90)[DAT_008488b0 * 0xac5] * 0x19;
        uStack_96 = (&DAT_00811c94)[DAT_008488b0 * 0x158a];
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_94 = CONCAT22(*(undefined2 *)(&DAT_00811c9c + DAT_008488b0 * 0x2b14),
                            (&DAT_00811c98)[DAT_008488b0 * 0x158a]);
        st::fn_006AE1C0
                  ((DArrayTy *)g_allocationRecord_006684E0_008489C4->field_0203,&local_a0);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x42c:
        iVar8 = st::fn_00404BE7();
        if (iVar8 == 0) {
          st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),2000);
        }
        g_allocationRecord_006684E0_008489C4->field_0119 =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_011A = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        g_allocationRecord_006684E0_008489C4->field_011E =
             *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        *(undefined2 *)&g_allocationRecord_006684E0_008489C4->field_0x120 =
             *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_0126 = (&DAT_00811c90)[DAT_008488b0 * 0xac5];
        g_allocationRecord_006684E0_008489C4->field_0122 =
             *(int *)(&DAT_00811c94 + DAT_008488b0 * 0x158a) * 0x19;
        g_allocationRecord_006684E0_008489C4->field_012A =
             *(int *)(&DAT_00811c98 + DAT_008488b0 * 0x158a) * 0x19;
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x42d:
        iVar8 = st::fn_00401C3A();
        if (iVar8 == 0) {
          st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x7e7
                    );
        }
        g_allocationRecord_006684E0_008489C4->field_0143 =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        *(undefined4 *)&g_allocationRecord_006684E0_008489C4->field_0x144 =
             (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        *(undefined2 *)&g_allocationRecord_006684E0_008489C4->field_0x148 =
             *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_014A =
             *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5);
        *(int *)&g_allocationRecord_006684E0_008489C4->field_0x14c =
             (&DAT_00811c90)[DAT_008488b0 * 0xac5] * 0x19;
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x42e:
        iVar8 = st::fn_004021A8();
        if (iVar8 == 0) {
          st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x7f1
                    );
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_3c = CONCAT22(*(undefined2 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5),
                            *(undefined2 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5));
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_38 = CONCAT22(*(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5),
                            *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5));
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_34 = CONCAT22((&DAT_00811c94)[DAT_008488b0 * 0x158a],
                            *(undefined2 *)(&DAT_00811c90 + DAT_008488b0 * 0xac5));
        st::fn_006AE1C0
                  ((DArrayTy *)g_allocationRecord_006684E0_008489C4->field_020F,&local_3c);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x42f:
        iVar8 = st::fn_00401A8C();
        if (iVar8 == 0) {
          st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x7dc
                    );
        }
        g_allocationRecord_006684E0_008489C4->field_0132 =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_0133 = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        g_allocationRecord_006684E0_008489C4->field_0137 =
             *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_0139 =
             *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_013F = (&DAT_00811c90)[DAT_008488b0 * 0xac5];
        g_allocationRecord_006684E0_008489C4->field_013B =
             *(int *)(&DAT_00811c94 + DAT_008488b0 * 0x158a) * 0x19;
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x430:
        iVar8 = st::fn_00403198();
        if (iVar8 == 0) {
          st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x7fe
                    );
        }
        g_allocationRecord_006684E0_008489C4->field_0156 =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_0157 =
             *(undefined2 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_0159 =
             *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_015B = (&DAT_00811c8c)[DAT_008488b0 * 0xac5];
        g_allocationRecord_006684E0_008489C4->field_015F = (&DAT_00811c90)[DAT_008488b0 * 0xac5];
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x431:
        iVar8 = st::fn_004051E6();
        if (iVar8 == 0) {
          st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x808
                    );
        }
        g_allocationRecord_006684E0_008489C4->field_0167 =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        *(undefined4 *)&g_allocationRecord_006684E0_008489C4->field_0x168 =
             (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        *(undefined2 *)&g_allocationRecord_006684E0_008489C4->field_0x16c =
             *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_016E =
             *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5);
        *(int *)&g_allocationRecord_006684E0_008489C4->field_0x170 =
             (&DAT_00811c90)[DAT_008488b0 * 0xac5] * 0x19;
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x432:
        iVar8 = st::fn_004049F3();
        if (iVar8 == 0) {
          st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x812
                    );
        }
        g_allocationRecord_006684E0_008489C4->field_0x174 =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_023F = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x44c:
        DAT_008489c0 = 1;
        iVar8 = st::fn_004023BA();
        if (iVar8 == 0) {
          st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if ((g_allocationRecord_006684E0_008489C4 != nullptr) ||
           (DAT_008489c8 != 0)) {
          st::fn_006A5E40
                    (-0x8c,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x765
                    );
        }
        if (g_allocationRecord_0067D3B0_008489B8 == nullptr) {
          if (g_allocationRecord_00648620_008489B4 == nullptr) {
            if (g_allocationRecord_0065CD10_008489BC != nullptr) {
              st::fn_006A5E40
                        (-0x8c,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                         0x774);
            }
            g_allocationRecord_0065CD10_008489BC =
                 st::fn_004015E1((&PTR_00811aec)[DAT_008488b0 * 0xac5]);
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          }
          if (*(&PTR_00811aec)[DAT_008488b0 * 0xac5] != '\0') {
            memset((void *)(*(int *)&g_allocationRecord_00648620_008489B4->field_0x4e + 6), 0, 0x40); /* compiler bulk-zero initialization */
            iVar8 = 0;
            st::fn_0072E340
                      ((char *)(*(int *)&g_allocationRecord_00648620_008489B4->field_0x4e + 6),
                       (&PTR_00811aec)[DAT_008488b0 * 0xac5],0x3f);
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          }
        }
        else if (*(&PTR_00811aec)[DAT_008488b0 * 0xac5] != '\0') {
          memset((void *)(*(int *)&g_allocationRecord_0067D3B0_008489B8->field_0x106 + 6), 0, 0x40); /* compiler bulk-zero initialization */
          st::fn_0072E340
                    ((char *)(*(int *)&g_allocationRecord_0067D3B0_008489B8->field_0x106 + 6),
                     (&PTR_00811aec)[DAT_008488b0 * 0xac5],0x3f);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        }
        break;
      case 0x44d:
        DAT_008489c0 = 0;
        if (PTR_008489cc != nullptr) {
          st::fn_006A5E40
                    (-0x91,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x77a
                    );
        }
        if ((g_allocationRecord_0067D3B0_008489B8 == nullptr) &&
           (g_allocationRecord_00648620_008489B4 == nullptr)) {
          if (g_allocationRecord_0065CD10_008489BC == nullptr) {
            st::fn_006A5E40
                      (-0x8d,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x77c);
          }
          pAVar17 = g_allocationRecord_0065CD10_008489BC;
          if (DAT_008489d0 == 0) {
            g_allocationRecord_0065CD10_008489BC = nullptr;
            if (param_3 != nullptr) {
              *param_3 = 5;
            }
            goto cf_common_join_0068A687;
          }
          /* ST_CALLSITE[00686328]: CALL 0x00401ebf; direct=00401EBF EventDataPack */
          local_c = st::fn_00401EBF(g_allocationRecord_0065CD10_008489BC,&local_18);
          st::fn_00401537((int *)&g_allocationRecord_0065CD10_008489BC);
          st::fn_00401A41((byte *)local_c,local_18);
          st::fn_00401537((int *)&local_c);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        }
        break;
      case 0x456:
      case 0x457:
      case 0x458:
      case 0x459:
      case 0x45a:
      case 0x45b:
      case 0x45c:
      case 0x45d:
      case 0x45e:
      case 0x45f:
      case 0x460:
      case 0x461:
      case 0x462:
      case 0x463:
      case 0x464:
      case 0x465:
      case 0x466:
      case 0x467:
      case 0x468:
      case 0x469:
      case 0x46a:
      case 0x46b:
      case 0x46c:
      case 0x46d:
      case 0x46e:
      case 0x46f:
      case 0x470:
      case 0x471:
      case 0x472:
      case 0x473:
      case 0x474:
        local_EAX_8657 = st::fn_00401CD0();
        if (local_EAX_8657 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x698
                    );
        }
        iVar8 = st::fn_00404773();
        if (iVar8 == 0) {
          st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (PTR_008489cc != nullptr) {
          st::fn_006A5E40
                    (-0x90,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x69a
                    );
        }
        PTR_008489cc = st::fn_00404205();
        piVar22 = (int *)(local_EAX_8657 + 0x46e);
        PTR_008489cc->field_0001 = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        PTR_008489cc->field_0005 = (&DAT_00811a94)[DAT_008488b0 * 0xac5];
        if ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14] == '\x02') {
          local_EAX_8927 =
               st::fn_00403EE5(piVar22,'\x02',(byte *)(&DAT_00811c80 + DAT_008488b0 * 0xac5),
                                  STField<int>(local_EAX_8657,0x456));
          STPiece<0,2>(local_EAX_8927) = (undefined2)local_EAX_8927;
        }
        else {
          iVar8 = STField<int>(local_EAX_8657,0x456);
          pAVar4 = st::fn_00404273((&DAT_00811c80)[DAT_008488b0 * 0xac5]);
          local_EAX_8961 = st::fn_004033AF(piVar22,pAVar4,iVar8);
          STPiece<0,2>(local_EAX_8961) = (undefined2)local_EAX_8961;
          STPiece<0,2>(local_EAX_8927) = (undefined2)local_EAX_8961;
        }
        PTR_008489cc->field_0009 = (undefined2)local_EAX_8927;
        local_64 = 0xb;
        local_61 = 1;
        local_63 = *(undefined2 *)(&DAT_00811a94 + DAT_008488b0 * 0xac5);
        st::fn_00402149(piVar22,(undefined4 *)&local_64);
        (&DAT_00811a90)[DAT_008488b0 * 0xac5] = 4;
        goto switchD_006841b6_default;
      case 0x4b0:
        if (g_array_008489D4 != nullptr) {
          st::fn_006A5E40
                    (-0x8c,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x818
                    );
        }
        g_array_008489D4 = st::fn_006AE290(nullptr,3,0x118,1);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x4b1:
        if (g_array_008489D4 == nullptr) {
          st::fn_006A5E40
                    (-0x8d,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x81d
                    );
        }
        pAVar17 = (AllocationRecord_0065CD10 *)g_array_008489D4;
        if (DAT_008489d0 == 0) {
          g_array_008489D4 = nullptr;
          if (param_3 != nullptr) {
            *param_3 = 0x40;
          }
          goto cf_common_join_0068A687;
        }
        st::fn_006A5E40
                  (-0x8d,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x81f);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x4b2:
        local_EAX_14040 = st::fn_00404DA4();
        if (local_EAX_14040 == 0) {
          st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_array_008489D4 == nullptr) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x82b
                    );
        }
        pcVar4 = local_2c8;
        for (iVar8 = 0x46; iVar8 != 0; iVar8 = iVar8 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + 4;
        }
        st::fn_0072E340(local_2c8,(&PTR_00811aec)[DAT_008488b0 * 0xac5],0x103);
        local_1c4 = *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        local_1c3 = *(undefined1 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5);
        local_1c2 = *(undefined1 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        local_1c1 = (&DAT_00811c8c)[DAT_008488b0 * 0xac5];
        local_1bd = (&DAT_00811c90)[DAT_008488b0 * 0xac5];
        local_1b9 = *(undefined4 *)(&DAT_00811c94 + DAT_008488b0 * 0x158a);
        local_1b5 = *(undefined4 *)(&DAT_00811c98 + DAT_008488b0 * 0x158a);
        local_1b1 = (&DAT_00811c9c)[DAT_008488b0 * 0x2b14];
        st::fn_006AE1C0(g_array_008489D4,local_2c8);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      }
    }
  }
  else {
    if (0x5b6 < iVar9) {
      if (0x5ec < iVar9) {
        if (0x76c < iVar9) goto switchD_00685456_default;
        if (iVar9 == 0x76c) {
          local_EAX_14857 = st::fn_00401CD0();
          if (local_EAX_14857 == 0) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8f8);
          }
          if (PTR_008489cc == nullptr) {
            st::fn_006A5E40
                      (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8f8);
          }
          iVar8 = st::fn_0040328D(1);
          goto joined_r0x00689693;
        }
        switch(iVar9) {
        case 0x5ed:
          local_EAX_14857 = st::fn_00401CD0();
          if (local_EAX_14857 == 0) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8ec);
          }
          if (PTR_008489cc == nullptr) {
            iVar8 = 0x8ec;
cf_error_exit_0068883F:
            st::fn_006A5E40
                      (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       iVar8);
          }
          goto LAB_00688855;
        case 0x5ee:
          local_EAX_14857 = st::fn_00401CD0();
          if (local_EAX_14857 == 0) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8ed);
          }
          if (PTR_008489cc == nullptr) {
            iVar8 = 0x8ed;
            goto cf_error_exit_006877A0;
          }
          goto cf_common_join_006877B6;
        case 0x5ef:
          local_EAX_14857 = st::fn_00401CD0();
          if (local_EAX_14857 == 0) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8ee);
          }
          if (PTR_008489cc == nullptr) {
            st::fn_006A5E40
                      (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8ee);
          }
          iVar8 = 9;
          goto cf_common_join_006895CD;
        case 0x5f0:
          local_EAX_14857 = st::fn_00401CD0();
          if (local_EAX_14857 == 0) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8ef);
          }
          if (PTR_008489cc == nullptr) {
            iVar8 = 0x8ef;
            goto cf_error_exit_006882E6;
          }
          break;
        case 0x5f1:
          local_EAX_14857 = st::fn_00401CD0();
          if (local_EAX_14857 == 0) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8e5);
          }
          if (PTR_008489cc == nullptr) {
            iVar8 = 0x8e5;
            goto cf_error_exit_006882E6;
          }
          break;
        case 0x5f2:
          local_EAX_14857 = st::fn_00401CD0();
          if (local_EAX_14857 == 0) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8e6);
          }
          if (PTR_008489cc == nullptr) {
            iVar8 = 0x8e6;
            goto cf_error_exit_006877EF;
          }
          goto cf_common_join_00687805;
        case 0x5f3:
          local_EAX_14857 = st::fn_00401CD0();
          if (local_EAX_14857 == 0) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8e7);
          }
          if (PTR_008489cc == nullptr) {
            iVar8 = 0x8e7;
            goto cf_error_exit_006882E6;
          }
          break;
        case 0x5f4:
          local_EAX_14857 = st::fn_00401CD0();
          if (local_EAX_14857 == 0) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8e8);
          }
          if (PTR_008489cc == nullptr) {
            iVar8 = 0x8e8;
            goto cf_error_exit_006877EF;
          }
          goto cf_common_join_00687805;
        case 0x5f5:
          local_EAX_14857 = st::fn_00401CD0();
          if (local_EAX_14857 == 0) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8e9);
          }
          if (PTR_008489cc == nullptr) {
            iVar8 = 0x8e9;
cf_error_exit_00689556:
            st::fn_006A5E40
                      (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       iVar8);
          }
          goto LAB_0068956c;
        case 0x5f6:
          local_EAX_14857 = st::fn_00401CD0();
          if (local_EAX_14857 == 0) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8ea);
          }
          if (PTR_008489cc == nullptr) {
            iVar8 = 0x8ea;
            goto cf_error_exit_00687750;
          }
          goto cf_common_join_00687766;
        case 0x5f7:
          local_EAX_14857 = st::fn_00401CD0();
          if (local_EAX_14857 == 0) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8eb);
          }
          if (PTR_008489cc == nullptr) {
            iVar8 = 0x8eb;
            goto cf_error_exit_006882E6;
          }
          break;
        case 0x5f8:
          local_EAX_14857 = st::fn_00401CD0();
          if (local_EAX_14857 == 0) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8f0);
          }
          if (PTR_008489cc == nullptr) {
            iVar8 = 0x8f0;
            goto cf_error_exit_006877EF;
          }
          goto cf_common_join_00687805;
        case 0x5f9:
          local_EAX_14857 = st::fn_00401CD0();
          if (local_EAX_14857 == 0) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8f2);
          }
          if (PTR_008489cc == nullptr) {
            iVar8 = 0x8f2;
            goto cf_error_exit_0068883F;
          }
          goto LAB_00688855;
        case 0x5fa:
          local_EAX_14857 = st::fn_00401CD0();
          if (local_EAX_14857 == 0) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8f3);
          }
          if (PTR_008489cc == nullptr) {
            iVar8 = 0x8f3;
            goto cf_error_exit_00689556;
          }
          goto LAB_0068956c;
        case 0x5fb:
          local_EAX_14857 = st::fn_00401CD0();
          if (local_EAX_14857 == 0) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8f4);
          }
          if (PTR_008489cc == nullptr) {
            iVar8 = 0x8f4;
            goto cf_error_exit_0068883F;
          }
LAB_00688855:
          iVar8 = 6;
          goto cf_common_join_006895CD;
        case 0x5fc:
          local_EAX_14857 = st::fn_00401CD0();
          if (local_EAX_14857 == 0) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8f5);
          }
          if (PTR_008489cc == nullptr) {
            iVar8 = 0x8f5;
            goto cf_error_exit_00689556;
          }
LAB_0068956c:
          iVar8 = 6;
          goto cf_common_join_0068956E;
        case 0x5fd:
          local_EAX_14857 = st::fn_00401CD0();
          if (local_EAX_14857 == 0) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8f1);
          }
          if (PTR_008489cc == nullptr) {
            iVar8 = 0x8f1;
            goto cf_error_exit_006882E6;
          }
          break;
        case 0x5fe:
          local_EAX_14857 = st::fn_00401CD0();
          if (local_EAX_14857 == 0) {
            st::fn_006A5E40
                      (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0x8f6);
          }
          if (PTR_008489cc == nullptr) {
            iVar8 = 0x8f6;
            goto LAB_006895b5;
          }
          goto LAB_006895cb;
        default:
          goto switchD_00685456_default;
        }
        goto cf_common_join_006882FC;
      }
      if (iVar9 == 0x5ec) {
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8e4
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x8e4;
          goto cf_error_exit_00687750;
        }
        goto cf_common_join_00687766;
      }
      switch(iVar9) {
      case 0x5b7:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8ce
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x8ce;
          goto cf_error_exit_006877A0;
        }
        goto cf_common_join_006877B6;
      case 0x5b8:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8cf
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x8cf;
          goto cf_error_exit_00687750;
        }
        goto cf_common_join_00687766;
      case 0x5b9:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8d0
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x8d0;
          goto cf_error_exit_006879EA;
        }
        goto cf_common_join_00687A00;
      default:
        goto switchD_00685456_default;
      case 0x5c8:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8cb
                    );
        }
        if (PTR_008489cc == nullptr) {
          st::fn_006A5E40
                    (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8cb
                    );
          iVar8 = 4;
          goto cf_common_join_006895CD;
        }
        break;
      case 0x5dc:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8d4
                    );
        }
        if (PTR_008489cc == nullptr) {
          st::fn_006A5E40
                    (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8d4
                    );
        }
        iVar8 = st::fn_00404471(2,1,2);
        goto cf_common_join_006895D5;
      case 0x5dd:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8d5
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x8d5;
          goto cf_error_exit_006877A0;
        }
        goto cf_common_join_006877B6;
      case 0x5de:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8d6
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x8d6;
          goto cf_error_exit_00687750;
        }
        goto cf_common_join_00687766;
      case 0x5df:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8d7
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x8d7;
          goto cf_error_exit_006877A0;
        }
        goto cf_common_join_006877B6;
      case 0x5e0:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8d8
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x8d8;
          goto cf_error_exit_006877EF;
        }
        break;
      case 0x5e1:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8d9
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x8d9;
          goto cf_error_exit_006882E6;
        }
        goto cf_common_join_006882FC;
      case 0x5e2:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8da
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x8da;
          goto cf_error_exit_00687AEC;
        }
        goto LAB_00687b02;
      case 0x5e3:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8db
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x8db;
          goto cf_error_exit_006877A0;
        }
        goto cf_common_join_006877B6;
      case 0x5e4:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8dc
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x8dc;
          goto cf_error_exit_006877EF;
        }
        break;
      case 0x5e5:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8de
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x8de;
          goto cf_error_exit_006877EF;
        }
        break;
      case 0x5e6:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8dd
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x8dd;
          goto cf_error_exit_006882E6;
        }
        goto cf_common_join_006882FC;
      case 0x5e7:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8df
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x8df;
          goto cf_error_exit_006882E6;
        }
        goto cf_common_join_006882FC;
      case 0x5e8:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8e0
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x8e0;
          goto cf_error_exit_00687750;
        }
        goto cf_common_join_00687766;
      case 0x5e9:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8e1
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x8e1;
          goto cf_error_exit_006882E6;
        }
cf_common_join_006882FC:
        iVar8 = 4;
        goto cf_common_join_0068956E;
      case 0x5ea:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8e2
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar8 = 0x8e2;
          goto cf_error_exit_006877EF;
        }
        break;
      case 0x5eb:
        local_EAX_14857 = st::fn_00401CD0();
        if (local_EAX_14857 == 0) {
          st::fn_006A5E40
                    (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8e3
                    );
        }
        if (PTR_008489cc == nullptr) {
          st::fn_006A5E40
                    (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8e3
                    );
        }
        iVar8 = 9;
        goto cf_common_join_0068956E;
      }
cf_common_join_00687805:
      iVar8 = 4;
      goto cf_common_join_006895CD;
    }
    if (iVar9 == 0x5b6) {
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8d2);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8d2;
        goto cf_error_exit_00689556;
      }
      goto LAB_0068956c;
    }
    switch(iVar9) {
    case 0x568:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8a1);
      }
      if (PTR_008489cc == nullptr) {
        st::fn_006A5E40
                  (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8a1);
        iVar8 = 2;
        goto cf_common_join_006895CD;
      }
      goto cf_common_join_006878A4;
    case 0x569:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8a2);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8a2;
        goto cf_error_exit_0068783F;
      }
      break;
    case 0x56a:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8a3);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8a3;
cf_error_exit_0068821F:
        st::fn_006A5E40
                  (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),iVar8);
      }
      goto LAB_00688235;
    default:
      goto switchD_00685456_default;
    case 0x578:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8a6);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8a6;
        goto cf_error_exit_00687750;
      }
      goto cf_common_join_00687766;
    case 0x579:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8a7);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8a7;
cf_error_exit_006882E6:
        st::fn_006A5E40
                  (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),iVar8);
      }
      goto cf_common_join_006882FC;
    case 0x57a:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8a8);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8a8;
        goto cf_error_exit_0068821F;
      }
      goto LAB_00688235;
    case 0x57b:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8a9);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8a9;
        goto cf_error_exit_006877A0;
      }
      goto cf_common_join_006877B6;
    case 0x582:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8ab);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8ab;
LAB_006883ac:
        st::fn_006A5E40
                  (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),iVar8);
      }
      goto LAB_006883c2;
    case 0x583:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8ac);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8ac;
        goto cf_error_exit_0068783F;
      }
      break;
    case 0x584:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8ad);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8ad;
        goto cf_error_exit_0068821F;
      }
LAB_00688235:
      iVar8 = 1;
      goto cf_common_join_006895CD;
    case 0x585:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8a4);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8a4;
cf_error_exit_006876FE:
        st::fn_006A5E40
                  (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),iVar8);
      }
      goto LAB_00687714;
    case 0x58c:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8b4);
      }
      if (PTR_008489cc == nullptr) {
        st::fn_006A5E40
                  (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8b4);
      }
      iVar8 = st::fn_00403F08(1,3);
      goto joined_r0x00689693;
    case 0x58d:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8b1);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8b1;
        goto cf_error_exit_00687750;
      }
      goto cf_common_join_00687766;
    case 0x58e:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8b2);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8b2;
        goto cf_error_exit_0068783F;
      }
      break;
    case 0x58f:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8b3);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8b3;
        goto cf_error_exit_0068788E;
      }
      goto cf_common_join_006878A4;
    case 0x590:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8b5);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8b5;
LAB_006895b5:
        st::fn_006A5E40
                  (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),iVar8);
      }
LAB_006895cb:
      iVar8 = 7;
      goto cf_common_join_006895CD;
    case 0x591:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8b6);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8b6;
        goto cf_error_exit_0068783F;
      }
      break;
    case 0x592:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8b7);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8b7;
        goto LAB_006883ac;
      }
LAB_006883c2:
      iVar8 = 5;
      goto cf_common_join_006895CD;
    case 0x593:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8b8);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8b8;
        goto cf_error_exit_006876FE;
      }
LAB_00687714:
      iVar8 = st::fn_00404E7B();
      goto joined_r0x00689693;
    case 0x594:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8b9);
      }
      if (PTR_008489cc == nullptr) {
        st::fn_006A5E40
                  (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8b9);
      }
      iVar8 = st::fn_00402E3C(2);
      goto cf_common_join_006895D5;
    case 0x595:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8ae);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8ae;
        goto cf_error_exit_006882E6;
      }
      goto cf_common_join_006882FC;
    case 0x596:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8af);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8af;
cf_error_exit_006876AB:
        st::fn_006A5E40
                  (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),iVar8);
      }
      goto LAB_006876c1;
    case 0x597:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8b0);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8b0;
        goto cf_error_exit_0068783F;
      }
      break;
    case 0x598:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8ba);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8ba;
        goto cf_error_exit_00687A9D;
      }
      goto LAB_00687ab3;
    case 0x599:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8bb);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8bb;
        goto cf_error_exit_006876AB;
      }
LAB_006876c1:
      iVar8 = st::fn_00404E7B();
      goto cf_common_join_006895D5;
    case 0x59a:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8bc);
      }
      if (PTR_008489cc == nullptr) {
        st::fn_006A5E40
                  (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8bc);
      }
      iVar8 = st::fn_00402E3C(2);
      goto joined_r0x00689693;
    case 0x59b:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8bd);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8bd;
        goto cf_error_exit_0068883F;
      }
      goto LAB_00688855;
    case 0x59c:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8be);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8be;
        goto cf_error_exit_0068783F;
      }
      break;
    case 0x59d:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8bf);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8bf;
        goto cf_error_exit_00687750;
      }
      goto cf_common_join_00687766;
    case 0x5aa:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8c1);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8c1;
        goto cf_error_exit_006877A0;
      }
      goto cf_common_join_006877B6;
    case 0x5ab:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8c2);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8c2;
        goto cf_error_exit_00687750;
      }
      goto cf_common_join_00687766;
    case 0x5ac:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8c3);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8c3;
        goto cf_error_exit_006877A0;
      }
      goto cf_common_join_006877B6;
    case 0x5ad:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8c4);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8c4;
        goto cf_error_exit_00687750;
      }
      goto cf_common_join_00687766;
    case 0x5ae:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8c5);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8c5;
        goto cf_error_exit_0068783F;
      }
      break;
    case 0x5af:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8c6);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8c6;
        goto cf_error_exit_00687750;
      }
      goto cf_common_join_00687766;
    case 0x5b0:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8c7);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8c7;
        goto cf_error_exit_0068783F;
      }
      break;
    case 0x5b1:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8c8);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8c8;
        goto cf_error_exit_0068788E;
      }
      goto cf_common_join_006878A4;
    case 0x5b2:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8c9);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8c9;
        goto cf_error_exit_0068783F;
      }
      break;
    case 0x5b3:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8ca);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8ca;
        goto cf_error_exit_00687750;
      }
      goto cf_common_join_00687766;
    case 0x5b4:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8cd);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8cd;
        goto cf_error_exit_006879EA;
      }
      goto cf_common_join_00687A00;
    case 0x5b5:
      local_EAX_14857 = st::fn_00401CD0();
      if (local_EAX_14857 == 0) {
        st::fn_006A5E40
                  (-0x8e,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0x8d1);
      }
      if (PTR_008489cc == nullptr) {
        iVar8 = 0x8d1;
        goto cf_error_exit_006877EF;
      }
      goto cf_common_join_00687805;
    }
cf_common_join_00687855:
    iVar8 = 2;
cf_common_join_0068956E:
    iVar8 = st::fn_0040328D(iVar8);
joined_r0x00689693:
    if (iVar8 == 0) {
      st::fn_00405411(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
    }
    iVar8 = STField<int>(local_EAX_14857,0x456);
    uVar24 = (ushort)(&DAT_00811a94)[DAT_008488b0 * 0xac5];
LAB_006896f6:
    st::fn_004035DA((int)PTR_008489cc,(int *)(local_EAX_14857 + 0x46e),uVar24,iVar8);
  }
switchD_00685456_default:
  DAT_008488b0 = DAT_008488b0 + -1;
  goto switchD_006841b6_default;
}

// 0068CEC0 FUN_0068cec0
#line 4 "decomp/ST.exe/functions/0068CEC0/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to use type for symbol pcVar13 */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 2617 | 2645 | 2646 | 2647 | 2648 | 2649 | 2650 | 2651 | 2655 | 2656 |
   2664 | 2676 | 2682 | 2693 | 2714 | 2725 | 2754 (metadata/report site, not the function
   definition)
   [STSourceProvenanceApplier end]

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0068CEC0 -> EXTERNAL:0000001F @ 0068D116

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

uint * __cdecl
st::fn_0068CEC0(LPCSTR lpFileName,AnonShape_00683C70_22193481 *param_2,int *param_3,undefined *param_4)

{
  char cVar1;
  byte bVar2;
  int local_EAX_114;
  int iVar3;
  int iVar4;
  uint uVar7;
  uint local_EAX_499;
  uint local_EAX_547;
  byte *pbVar5_mg0;
  DArrayTy *pDVar5;
  int iVar6;
  char *local_EAX_1411;
  char *local_EAX_1858;
  int iVar17;
  int local_EAX_2325;
  int local_EAX_2338;
  uint uVar6;
  uint uVar8;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  int iVar9;
  byte *pbVar10;
  undefined4 **ppuVar11;
  byte *pbVar12;
  char *pcVar14;
  char *pcVar15;
  char *pcVar17;
  uint *puVar18;
  char local_10bc [4100];
  InternalExceptionFrame local_b8;
  InternalExceptionFrame local_74;
  undefined4 *local_30;
  int local_2c;
  char *local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  DArrayTy *local_8;
  byte *pbVar5_mg2;
  char *pcVar13;

  uVar6 = 0xffffffff;
  local_8 = nullptr;
  local_10 = -1;
  local_14 = 0;
  local_c = 0;
  pcVar17 = &CHAR_00h_008016a0;
  do {
    pcVar15 = pcVar17;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar15 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar15;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar17 = pcVar15 + -uVar6;
  pcVar15 = (char *)&DAT_008488b4;
  memmove(pcVar15, pcVar17, uVar6); /* compiler REP MOVS byte copy */
  uVar8 = 0;
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  local_EAX_114 = st::fn_0072D7F0(local_b8.jumpBuffer,0);
  if (local_EAX_114 == 0) {
    if (lpFileName == (LPCSTR)0x0) {
      st::fn_006A5E40
                (-6,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0xa39);
    }
    st::fn_00404426(lpFileName,
                       (AnonShape_GLOBAL_0081194C_4D1525E6 *)&PTR_thunk_FUN_00680270_007d3fa8);
    g_currentExceptionFrame = &local_74;
    local_74.previous = local_b8.previous;
    iVar3 = st::fn_0072D7F0(local_74.jumpBuffer,0);
    if (iVar3 == 0) {
      st::fn_00402702(this,1);
      st::fn_00404944(this_00,1);
      st::fn_00402F77(this_01,0);
      st::fn_004013FC(this_02,0);
      st::fn_00402D8D(1);
      st::fn_00405CD1(this_03,1);
      st::fn_00403148((undefined4 *)&DAT_007d3f78);
      st::fn_0040493F();
      if (param_2 == nullptr) {
        st::fn_006A5E40
                  (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0xa55);
      }
      iVar4 = st::fn_00402F40(st::mutable_c_string("_main_path"),(char *)param_2,nullptr);
      if (iVar4 == 0) {
        st::fn_006A5E40
                  (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0xa56);
      }
      iVar4 = st::fn_00402F40(st::mutable_c_string("_inc_path"),(char *)&param_2->field_0x104,nullptr);
      if (iVar4 == 0) {
        st::fn_006A5E40
                  (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0xa57);
      }
      iVar4 = st::fn_00402F40(st::mutable_c_string("_maps_path"),(char *)&param_2->field_0x208,nullptr);
      if (iVar4 == 0) {
        st::fn_006A5E40
                  (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0xa58);
      }
      uVar7 = st::fn_00404B1F(st::mutable_c_string("_env_var0"),param_2->field_030C);
      if ((int)uVar7 < 0) {
        st::fn_006A5E40
                  (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0xa59);
      }
      local_EAX_499 = st::fn_00404B1F(st::mutable_c_string("_env_var1"),param_2->field_0310);
      if ((int)local_EAX_499 < 0) {
        st::fn_006A5E40
                  (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0xa5a);
      }
      local_EAX_547 = st::fn_00404B1F(st::mutable_c_string("_env_var2"),param_2->field_0314);
      if ((int)local_EAX_547 < 0) {
        st::fn_006A5E40
                  (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0xa5b);
      }
      /* ST_CALLSITE[0068D116]: CALL dword ptr [0x0085bba8] */
      st::external_0000001F(lpFileName,0x104,st::pointer_boundary_cast<LPSTR>(&DAT_0084868c),nullptr);
      st::fn_0072E730
                ((byte *)&DAT_0084868c,(byte *)&DAT_008478a8,(byte *)&DAT_00848790,(byte *)&DAT_0084858c,(byte *)&DAT_00811990);
      st::fn_0072F110((char *)&DAT_0084868c,(char *)&DAT_008478a8,(char *)&DAT_00848790,nullptr,nullptr);
      iVar4 = st::fn_00402F40(st::mutable_c_string("_curr_path"),(char *)&DAT_0084868c,nullptr);
      if (iVar4 == 0) {
        st::fn_006A5E40
                  (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0xa5f);
      }
      puVar18 = nullptr;
      pcVar17 = (char *)&DAT_0084868c;
      pbVar5_mg0 = st::fn_00401AA5(DAT_00848a24);
      iVar4 = st::fn_00402F40((char *)pbVar5_mg0,pcVar17,puVar18);
      if (iVar4 == 0) {
        st::fn_006A5E40
                  (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0xa60);
      }
      pDVar5 = st::fn_006B54F0(nullptr,0x32,0x32);
      local_8 = pDVar5;
      st::fn_006B5AA0(pDVar5,st::mutable_c_string("include<[_inc_path]\\AiScript.dfn>;"));
      st::fn_006B5AA0(pDVar5,st::mutable_c_string("include<[_inc_path]\\AiScript.mcr>;"));
      st::fn_006B5AA0(pDVar5,&CHAR_00h_008016a0);
      iVar4 = local_10;
cf_continue_loop_0068D1EB:
      iVar6 = st::fn_00401D7F();
      if (iVar6 < 0) {
        st::fn_006A5E40
                  (iVar6,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0xa68);
      }
      if (param_4 != nullptr) {
        ppuVar11 = &local_30;
        for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
          *ppuVar11 = nullptr;
          ppuVar11 = ppuVar11 + 1;
        }
        local_2c = DAT_00857554;
        st::fn_0072E730
                  (PTR_0085753c,nullptr,nullptr,nullptr,(byte *)&DAT_00811990);
        pbVar5_mg2 = (byte *)lpFileName;
        if (DAT_00811990 != '\0') {
          pbVar5_mg2 = PTR_0085753c;
        }
        if (pbVar5_mg2 != nullptr) {
          uVar6 = 0xffffffff;
          do {
            pbVar10 = pbVar5_mg2;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pbVar10 = pbVar5_mg2 + 1;
            bVar2 = *pbVar5_mg2;
            pbVar5_mg2 = pbVar10;
          } while (bVar2 != 0);
          uVar6 = ~uVar6;
          pbVar10 = pbVar10 + -uVar6;
          pbVar12 = (byte *)&DAT_0084790c;
          memmove(pbVar12, pbVar10, uVar6); /* compiler REP MOVS byte copy */
        }
        local_30 = &DAT_0084790c;
        st::fn_0072E340(&CHAR_00h_00847d0c,PTR_0085755c,0x3fe);
        local_28 = &CHAR_00h_00847d0c;
        /* ST_CALLSITE[0068D2B8]: CALL dword ptr [EBP + 0x14] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar9 = (*(code *)param_4)(&local_30);
        if (iVar9 != 0) {
          st::fn_006A5E40
                    (-0x65,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0xa74
                    );
        }
      }
      if (DAT_007d2d18 == 0x1c) {
        if (0 < iVar4) {
          st::fn_006A5E40
                    (-0x8d,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0xac2
                    );
        }
        st::fn_00403DE6();
        iVar17 = st::fn_00404D90();
        while (iVar17 != 0) {
          iVar17 = st::fn_00404D90();
        }
        g_currentExceptionFrame = local_74.previous;
        return &local_8->flags;
      }
      switch(DAT_007d2d18) {
      case 0x3b9:
        if (local_c != 0x44c) {
          if (-1 < iVar4) {
            st::fn_006A5E40
                      (-0x90,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0xa9a);
          }
          local_10bc[0] = '\0';
          iVar4 = DAT_00857544;
          if (0 < DAT_00857544) {
            do {
              uVar6 = 0xffffffff;
              pcVar17 = &st_global_007C3B5C;
              do {
                pcVar15 = pcVar17;
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                pcVar15 = pcVar17 + 1;
                cVar1 = *pcVar17;
                pcVar17 = pcVar15;
              } while (cVar1 != '\0');
              uVar6 = ~uVar6;
              iVar9 = -1;
              pcVar17 = local_10bc;
              do {
                pcVar14 = pcVar17;
                if (iVar9 == 0) break;
                iVar9 = iVar9 + -1;
                pcVar14 = pcVar17 + 1;
                cVar1 = *pcVar17;
                pcVar17 = pcVar14;
              } while (cVar1 != '\0');
              pcVar17 = pcVar15 + -uVar6;
              pcVar15 = pcVar14 + -1;
              for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined4 *)pcVar15 = *(undefined4 *)pcVar17;
                pcVar17 = pcVar17 + 4;
                pcVar15 = pcVar15 + 4;
              }
              iVar4 = iVar4 + -1;
              for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *pcVar15 = *pcVar17;
                pcVar17 = pcVar17 + 1;
                pcVar15 = pcVar15 + 1;
              }
            } while (iVar4 != 0);
          }
          st::fn_0072ED50(local_10bc,PTR_0085755c + DAT_00857544,0x1000);
          local_10 = DAT_00857554;
          local_14 = DAT_00857544;
          local_c = 0x3b9;
          iVar4 = DAT_00857554;
          goto cf_continue_loop_0068D1EB;
        }
        break;
      case 0x3ba:
        if (local_c != 0x44c) {
          if (iVar4 < 0) {
            st::fn_006A5E40
                      (-0x8f,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0xaa5);
          }
          if (iVar4 < DAT_00857554) {
            st::fn_006B5AA0(local_8,local_10bc);
            st::fn_0072E340(local_10bc,PTR_0085755c,0x1000);
            local_10 = DAT_00857554;
            local_14 = 0;
          }
          local_10bc[DAT_00857544 - local_14] = '\0';
          local_EAX_1858 = st::fn_004057DB(DAT_007d2d18);
          pDVar5 = local_8;
          uVar6 = 0xffffffff;
          do {
            pcVar17 = local_EAX_1858;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar17 = local_EAX_1858 + 1;
            cVar1 = *local_EAX_1858;
            local_EAX_1858 = pcVar17;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          iVar4 = -1;
          pcVar15 = local_10bc;
          do {
            pcVar14 = pcVar15;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar14 = pcVar15 + 1;
            cVar1 = *pcVar15;
            pcVar15 = pcVar14;
          } while (cVar1 != '\0');
          pcVar17 = pcVar17 + -uVar6;
          pcVar15 = pcVar14 + -1;
          memmove(pcVar15, pcVar17, uVar6); /* compiler REP MOVS byte copy */
          uVar8 = 0;
          st::fn_006B5AA0(local_8,local_10bc);
          st::fn_006B5AA0(pDVar5,&CHAR_00h_008016a0);
          iVar4 = -1;
          local_c = 0;
          local_10 = -1;
          goto cf_continue_loop_0068D1EB;
        }
        break;
      case 0x44c:
        if (local_c != 0x3b9) {
          if (-1 < iVar4) {
            st::fn_006A5E40
                      (-0x8c,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),
                       0xa7a);
          }
          local_10bc[0] = '\0';
          if (0 < DAT_00857544) {
            local_18 = DAT_00857544;
            do {
              uVar6 = 0xffffffff;
              pcVar17 = &st_global_007C3B5C;
              do {
                pcVar15 = pcVar17;
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                pcVar15 = pcVar17 + 1;
                cVar1 = *pcVar17;
                pcVar17 = pcVar15;
              } while (cVar1 != '\0');
              uVar6 = ~uVar6;
              iVar4 = -1;
              pcVar17 = local_10bc;
              do {
                pcVar14 = pcVar17;
                if (iVar4 == 0) break;
                iVar4 = iVar4 + -1;
                pcVar14 = pcVar17 + 1;
                cVar1 = *pcVar17;
                pcVar17 = pcVar14;
              } while (cVar1 != '\0');
              pcVar17 = pcVar15 + -uVar6;
              pcVar15 = pcVar14 + -1;
              for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined4 *)pcVar15 = *(undefined4 *)pcVar17;
                pcVar17 = pcVar17 + 4;
                pcVar15 = pcVar15 + 4;
              }
              local_18 = local_18 + -1;
              for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *pcVar15 = *pcVar17;
                pcVar17 = pcVar17 + 1;
                pcVar15 = pcVar15 + 1;
              }
            } while (local_18 != 0);
          }
          st::fn_0072ED50(local_10bc,PTR_0085755c + DAT_00857544,0x1002 - DAT_00857544);
          local_14 = DAT_00857544;
          local_10 = DAT_00857554;
          local_c = 0x44c;
          iVar4 = DAT_00857554;
          goto cf_continue_loop_0068D1EB;
        }
        break;
      case 0x44d:
        if (local_c == 0x3b9) break;
        if (iVar4 < 0) {
          st::fn_006A5E40
                    (-0x8d,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_script.cpp"),0xa85
                    );
        }
        if (iVar4 < DAT_00857554) {
          st::fn_006B5AA0(local_8,local_10bc);
          st::fn_0072E340(local_10bc,PTR_0085755c,0x1000);
          local_10 = DAT_00857554;
          local_14 = 0;
        }
        local_10bc[DAT_00857544 - local_14] = '\0';
        local_EAX_1411 = st::fn_004057DB(DAT_007d2d18);
        pDVar5 = local_8;
        uVar6 = 0xffffffff;
        do {
          pcVar17 = local_EAX_1411;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar17 = local_EAX_1411 + 1;
          cVar1 = *local_EAX_1411;
          local_EAX_1411 = pcVar17;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar4 = -1;
        pcVar15 = local_10bc;
        do {
          pcVar14 = pcVar15;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar14 = pcVar15 + 1;
          cVar1 = *pcVar15;
          pcVar15 = pcVar14;
        } while (cVar1 != '\0');
        pcVar17 = pcVar17 + -uVar6;
        pcVar15 = pcVar14 + -1;
        memmove(pcVar15, pcVar17, uVar6); /* compiler REP MOVS byte copy */
        uVar8 = 0;
        uVar6 = 0xffffffff;
        pcVar17 = &st_global_007D5684;
        do {
          pcVar15 = pcVar17;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar15 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar15;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar4 = -1;
        pcVar17 = local_10bc;
        do {
          pcVar14 = pcVar17;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar14 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar14;
        } while (cVar1 != '\0');
        pcVar17 = pcVar15 + -uVar6;
        pcVar15 = pcVar14 + -1;
        memmove(pcVar15, pcVar17, uVar6); /* compiler REP MOVS byte copy */
        uVar8 = 0;
        st::fn_006B5AA0(local_8,local_10bc);
        st::fn_006B5AA0(pDVar5,&CHAR_00h_008016a0);
        iVar4 = -1;
        local_c = 0;
        local_10 = -1;
        goto cf_continue_loop_0068D1EB;
      }
      if ((-1 < iVar4) && (iVar4 < DAT_00857554)) {
        st::fn_006B5AA0(local_8,local_10bc);
        st::fn_0072E340(local_10bc,PTR_0085755c,0x1000);
        local_10 = DAT_00857554;
        local_14 = 0;
        iVar4 = DAT_00857554;
      }
      goto cf_continue_loop_0068D1EB;
    }
    g_currentExceptionFrame = local_74.previous;
    if (param_3 != nullptr) {
      memset(param_3, 0, 0x18); /* compiler bulk-zero initialization */
      *param_3 = iVar3;
      param_3[2] = DAT_00857554;
      st::fn_0072E730
                (PTR_0085753c,nullptr,nullptr,nullptr,(byte *)&DAT_00811990);
      if (DAT_00811990 != '\0') {
        lpFileName = (LPCSTR)PTR_0085753c;
      }
      if ((byte *)lpFileName != nullptr) {
        uVar6 = 0xffffffff;
        do {
          pbVar10 = (byte *)lpFileName;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pbVar10 = (byte *)(lpFileName + 1);
          bVar2 = *lpFileName;
          lpFileName = (LPCSTR)pbVar10;
        } while (bVar2 != 0);
        uVar6 = ~uVar6;
        pbVar10 = pbVar10 + -uVar6;
        pbVar12 = (byte *)&DAT_0084790c;
        memmove(pbVar12, pbVar10, uVar6); /* compiler REP MOVS byte copy */
      }
      param_3[1] = (int)&DAT_0084790c;
      st::fn_0072E340(&CHAR_00h_00847d0c,PTR_0085755c,0x3fe);
      param_3[3] = (int)&CHAR_00h_00847d0c;
      param_3[4] = (int)&DAT_008488b4;
      param_3[5] = DAT_00857544;
    }
    if (local_8 != nullptr) {
      st::fn_006B5570(local_8);
    }
    local_8 = nullptr;
    st::fn_00403DE6();
    local_EAX_2325 = st::fn_00404D90();
    if (local_EAX_2325 != 0) {
      do {
        local_EAX_2338 = st::fn_00404D90();
      } while (local_EAX_2338 != 0);
      return nullptr;
    }
  }
  else {
    g_currentExceptionFrame = local_b8.previous;
    if (param_3 != nullptr) {
      memset(param_3, 0, 0x18); /* compiler bulk-zero initialization */
      *param_3 = local_EAX_114;
      param_3[2] = 0;
      if (lpFileName != (LPCSTR)0x0) {
        uVar6 = 0xffffffff;
        do {
          pcVar13 = lpFileName;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar13 = lpFileName + 1;
          cVar1 = *lpFileName;
          lpFileName = pcVar13;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar17 = pcVar13 + -uVar6;
        pcVar15 = (char *)&DAT_0084790c;
        memmove(pcVar15, pcVar17, uVar6); /* compiler REP MOVS byte copy */
        uVar8 = 0;
      }
      param_3[1] = (int)&DAT_0084790c;
      uVar6 = 0xffffffff;
      pcVar17 = &CHAR_00h_008016a0;
      do {
        pcVar15 = pcVar17;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar15 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar15;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar17 = pcVar15 + -uVar6;
      pcVar15 = &CHAR_00h_00847d0c;
      memmove(pcVar15, pcVar17, uVar6); /* compiler REP MOVS byte copy */
      param_3[3] = (int)&CHAR_00h_00847d0c;
      param_3[4] = (int)&DAT_008488b4;
    }
  }
  return nullptr;
}

