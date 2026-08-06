#include "st/generated.hpp"
// Generated translation unit: source/original/ai/ai_event.cpp

// 0064CD80 AiEventClassTy::InitData
#line 4 "decomp/ST.exe/functions/0064CD80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::InitData */

int __thiscall st::fn_0064CD80(AiEventClassTy *this,int *param_1)

{
  AiEventClassTy *pAVar2;
  int iVar3;
  DArrayTy *pDVar4;
  byte *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar10;
  uint uVar11;
  byte *puVar12;
  void *pvVar13;
  int *piVar14;
  bool bVar15;
  InternalExceptionFrame local_4c;
  AiEventClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pAVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8 == nullptr) {
      piVar14 = nullptr;
    }
    else {
      piVar14 = (int *)&local_8->field_008C;
    }
    piVar10 = param_1;
    memmove(piVar14, piVar10, 0x49f); /* compiler REP MOVS byte copy */
    local_8->field_0091 = 1;
    pDVar4 = st::fn_006B54F0(nullptr,5,5);
    pAVar2->field_05B3 = pDVar4;
    uVar11 = 0;
    do {
      st::fn_006B6020(pAVar2->field_05B3,uVar11,&DAT_008016a0);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < 4);
    if (pAVar2->field_008C == '\0') {
      pAVar2->field_0088 = DAT_00808754;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar3 = (*(code *)pAVar2->field_0000->field_0018)();
      uVar11 = iVar3 * 2 + 2;
      pAVar2->field_00D2 = uVar11;
      if (0x18 < uVar11) {
        pAVar2->field_00D2 = 3;
      }
    }
    else {
      pAVar2->field_0088 = pAVar2->field_00DA;
    }
    iVar3 = pAVar2->field_0506;
    piVar14 = &pAVar2->field_04FA;
    if (piVar14 == nullptr) {
      uVar11 = 0;
    }
    else {
      uVar11 = *piVar14 * 5;
    }
    puVar5 = (byte *)(st::fn_006AAC10(uVar11));
    pAVar2->field_0502 = puVar5;
    if (piVar14 == nullptr) {
      uVar11 = 0;
    }
    else {
      uVar11 = *piVar14 * 5;
    }
    puVar12 = (byte *)(iVar3 + 0x49e + (int)param_1);
    memmove(puVar5, puVar12, uVar11); /* compiler REP MOVS byte copy */
    pDVar4 = (DArrayTy *)
             st::fn_006B0060(nullptr,(uint *)(pAVar2->field_04F2 + 0x49e + (int)param_1));
    pAVar2->field_04EE = pDVar4;
    puVar6 = st::fn_006C8680
                       (nullptr,(uint *)(pAVar2->field_04E6 + 0x49e + (int)param_1));
    pAVar2->field_04E2 = puVar6;
    pDVar4 = pAVar2->field_04EE;
    uVar11 = 0;
    if (0 < (int)pDVar4->count) {
      bVar15 = pDVar4->count != 0;
      do {
        if (bVar15) {
          pvVar13 = DArrayAt<void>(pDVar4, uVar11);
        }
        else {
          pvVar13 = nullptr;
        }
        if (STField<int>(pvVar13,0xf) != 0) {
          uVar7 = st::fn_006B0060(nullptr,
                               (uint *)(STField<int>(pvVar13,0x13) + 0x49e + (int)param_1));
          STField<undefined4>(pvVar13,0xf) = uVar7;
        }
        pDVar4 = pAVar2->field_04EE;
        uVar11 = uVar11 + 1;
        bVar15 = uVar11 < pDVar4->count;
      } while ((int)uVar11 < (int)pDVar4->count);
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_00402E14(local_8);
  iVar8 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_event.cpp",0x50,0,iVar3,"%s",
                             "AiEventClassTy::InitData");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\ai\\ai_event.cpp",0x51);
  return iVar3;
}

// 0064D000 AiEventClassTy::PrepareToSave
#line 4 "decomp/ST.exe/functions/0064D000/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::PrepareToSave */

undefined4 * __thiscall st::fn_0064D000(AiEventClassTy *this,uint *param_1)

{
  AiEventClassTy *pAVar2;
  int errorCode;
  AllocationRecord_0065CD10 *pAVar3;
  int iVar4;
  undefined4 *puVar5;
  InternalExceptionFrame local_4c;
  AiEventClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pAVar2 = local_8;
  if (errorCode == 0) {
    if (local_8 == nullptr) {
      pAVar3 = nullptr;
    }
    else {
      pAVar3 = (AllocationRecord_0065CD10 *)&local_8->field_008C;
    }
    pAVar3 = st::fn_00401EBF(pAVar3,param_1);
    *(undefined1 *)pAVar3 = 1;
    *(uint *)&pAVar3->field_0x4e = pAVar2->field_0088;
    g_currentExceptionFrame = local_4c.previous;
    return (undefined4 *)pAVar3;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_event.cpp",0x66,0,errorCode,"%s",
                             "AiEventClassTy::PrepareToSave");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\ai\\ai_event.cpp",0x67);
  return nullptr;
}

// 0064D270 AiEventClassTy::__CreateObjPl
#line 4 "decomp/ST.exe/functions/0064D270/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::__CreateObjPl

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0064D270 -> 00675B10 @ 0064D376 | 0064D270 -> 00675B10 @ 0064D450

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0064D270 -> 00675B10 @ 0064D376 | 0064D270 -> 00675B10 @ 0064D450

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 0064D270 -> 00675B10 @ 0064D376 | 0064D270 -> 00675B10 @ 0064D450

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0064D270 -> 004B0F20 @ 0064D6D4 | 0064D270 -> 004B1040 @ 0064D679 */

int __thiscall
st::fn_0064D270
          (AiEventClassTy *this,uint param_1,short param_2,short *param_3,short *param_4,
          short *param_5,uint param_6,uint param_7,char *param_8,undefined4 param_9,
          undefined4 param_10,int param_11,int param_12)

{
  bool bVar2;
  int iVar3;
  char *_Source;
  int iVar4;
  uint uVar5;
  uint uVar6;
  Global_sub_004B1120_param_2Enum GVar8;
  InternalExceptionFrame local_e8;
  uint local_a4 [5];
  uint local_90;
  int local_8c;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined4 local_7e;
  int local_7a;
  int local_76;
  undefined4 local_72;
  char local_6e [15];
  undefined4 local_5f;
  undefined4 local_5b;
  AiEventClassTy *local_38;
  short local_34 [2];
  undefined4 local_30;
  int local_2c;
  short local_28 [2];
  int local_24;
  undefined4 local_20;
  short local_1c [2];
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_14 = -1;
  local_e8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_e8;
  local_38 = this;
  iVar3 = st::fn_0072D7F0(local_e8.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_e8.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_event.cpp",0xcb,0,iVar3,"%s",
                               "AiEventClassTy::__CreateObjPl");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\ai\\ai_event.cpp",0xcc);
    return iVar3;
  }
  if ((param_2 < 1) || (0x28 < param_2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar5 = param_7;
  if ((bVar2) && (g_allPlayers_007FA174 != nullptr)) {
    if (((short)param_3 < 0) || (((short)param_4 < 0 || ((short)param_5 < 0)))) {
      uVar5 = param_1 & 0xffff;
      local_28[0] = 7;
      local_28[1] = 0;
      local_1c[0] = 7;
      local_1c[1] = 0;
      local_20 = STReplaceLowWord((uint32_t)(param_3), (uint16_t)((short)g_bulkInitializedRecords_008087C7[uVar5].field_0024 + -3));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_30 = CONCAT22((short)(uVar5 * 9 >> 0x10),
                          (short)g_bulkInitializedRecords_008087C7[uVar5].field_0028 + -3);
      st::fn_00401906((short *)&local_20,(short *)&local_30,local_28,local_1c);
      local_38->field_0088 = local_38->field_0088 * 0x41c64e6d + 0x3039;
      local_18 = local_38->field_0088 * 0x41c64e6d + 0x3039;
      local_38->field_0088 = local_18;
      iVar3 = st::fn_00401D9D((local_18 >> 0x10) % (uint)(int)local_28[0] + (int)(short)local_20,
                                 (local_38->field_0088 >> 0x10) % (uint)(int)local_1c[0] +
                                 (int)(short)local_30,1,(short *)&param_3,(short *)&param_4,
                                 (short *)&param_5,(int)param_2);
    }
    else {
      iVar3 = st::fn_00404D3B((short)param_3,(short)param_4,(short)param_5);
      if (iVar3 == 0) {
        local_2c = (int)param_3 + -1;
        local_24 = (int)param_4 + -1;
        local_18 = 3;
        local_34[0] = 3;
        local_34[1] = 0;
        st::fn_00401906((short *)&local_2c,(short *)&local_24,(short *)&local_18,local_34);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = (short *)(local_2c + 1);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (short *)(local_24 + 1);
      }
      iVar3 = st::fn_00401D9D((int)param_3,(int)param_4,(short)param_5,(short *)&param_3,
                                 (short *)&param_4,(short *)&param_5,(int)param_2);
    }
    uVar5 = param_7;
    if (iVar3 != 0) {
      memset(local_a4, 0, 0x69); /* compiler bulk-zero initialization */
      local_a4[3] = 0;
      local_a4[1] = param_1 & 0xffff;
      if (((int)param_7 < 0) || (local_90 = param_7, 7 < (int)param_7)) {
        local_90 = local_a4[1];
      }
      local_8c = (int)param_2;
      local_88 = (short)param_3;
      local_86 = (short)param_4;
      local_80 = (undefined2)param_6;
      local_84 = (short)param_5;
      local_82 = 0xffff;
      _Source = param_8;
      if (param_8 == nullptr) {
        _Source = &DAT_008016a0;
      }
      st::fn_0072E340(local_6e,_Source,0xe);
      local_7e = param_9;
      local_72 = 1;
      local_5f = param_10;
      if (((param_2 == 8) || (param_2 == 0x14)) || (param_2 == 0x1a)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        local_7a = (param_11 * 0x78) / 100;
      }
      else {
        local_7a = 0;
      }
      if (((param_2 == 8) || (param_2 == 0x14)) || (param_2 == 0x1a)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        local_76 = (param_12 * 800) / 100;
      }
      else {
        local_76 = 0;
      }
      local_5b = 1;
      st::fn_00404B97(g_allPlayers_007FA174,local_a4);
      local_14 = 0;
    }
  }
  if ((param_2 < 0x32) || (0x73 < param_2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (g_allPlayers_007FA174 != nullptr)) {
    local_8 = (int)(short)param_3;
    local_c = (int)(short)param_4;
    local_10 = (int)(short)param_5;
    if (param_11 == 0) {
      iVar4 = 1;
      GVar8 = (Global_sub_004B1120_param_2Enum)param_2;
      uVar5 = param_1 & 0xffff;
      iVar3 = st::fn_00402829((short)param_3,local_c,local_10,GVar8,uVar5,nullptr,
                                 nullptr,nullptr,1,nullptr);
      if (iVar3 == 0) {
        iVar4 = st::fn_004019EC(uVar5,GVar8,&local_8,&local_c,&local_10,0,0);
      }
      if (iVar4 == 0) {
        g_currentExceptionFrame = local_e8.previous;
        return local_14;
      }
      if (((int)param_7 < 0) || (uVar6 = param_7, 7 < (int)param_7)) {
        uVar6 = uVar5;
      }
      st::fn_0040484A(uVar5,GVar8,local_8,local_c,local_10,param_6,uVar6,param_8,param_9,param_10
                        );
    }
    else {
      uVar6 = param_1 & 0xffff;
      iVar3 = st::fn_004019EC(uVar6,(int)param_2,&local_8,&local_c,&local_10,0,0);
      if (iVar3 != 0) {
        if (((int)uVar5 < 0) || (7 < (int)uVar5)) {
          uVar5 = uVar6;
        }
        st::fn_004018A2(uVar6,(int)param_2,local_8,local_c,local_10,param_6,uVar5,param_8,0,
                           param_9);
      }
    }
    local_14 = 0;
  }
  g_currentExceptionFrame = local_e8.previous;
  return local_14;
}

// 0064D890 AiEventClassTy::_CreateRCCont
#line 4 "decomp/ST.exe/functions/0064D890/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::_CreateRCCont
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0064D903 MOV ESI,dword ptr [EBP + 0x8];
   first-use mask */

int __thiscall
st::fn_0064D890
          (AiEventClassTy *this,ushort param_1,short param_2,int param_3,int param_4,
          undefined4 param_5,undefined4 param_6,char *param_7,int param_8)

{
  bool bVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_6c;
  int local_28;
  uint local_24;
  short local_20 [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  local_28 = -1;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  iVar3 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_event.cpp",0xee,0,iVar3,"%s",
                               "AiEventClassTy::_CreateRCCont");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\ai\\ai_event.cpp",0xef);
    return iVar3;
  }
  if (g_allPlayers_007FA174 != nullptr) {
    if ((((param_2 == 0xdd) || (param_2 == 0xde)) || (param_2 == 0xe2)) || (param_2 == 0xdc)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      local_c = param_3;
      local_8 = param_4;
      local_24 = (uint)g_bulkInitializedRecords_008087C7[param_1].field_0021;
      local_10 = param_5;
      iVar3 = st::fn_00404D3B((short)param_3,(short)param_4,(short)param_5);
      if (iVar3 == 0) {
        local_20[0] = 3;
        local_20[1] = 0;
        local_20[2] = 3;
        local_20[3] = 0;
        local_14 = param_3 + -1;
        local_18 = param_4 + -1;
        st::fn_00401906((short *)&local_14,(short *)&local_18,local_20,local_20 + 2);
        local_c = local_14 + 1;
        local_8 = local_18 + 1;
      }
      iVar3 = st::fn_00401D9D(local_c,local_8,(short)local_10,(short *)&local_c,(short *)&local_8
                                 ,(short *)&local_10,0xfe);
      if (iVar3 != 0) {
        if (param_7 == nullptr) {
          param_7 = &DAT_008016a0;
        }
        st::fn_00405740((uint)param_1,local_24,(int)param_2,param_6,(int)(short)local_c,
                           (int)(short)local_8,(int)(short)local_10,param_7,0xffffffff,
                           (ushort)param_8);
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_6c.previous;
  return local_28;
}

// 0064DB00 AiEventClassTy::_CreateArt
#line 4 "decomp/ST.exe/functions/0064DB00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::_CreateArt */

int __thiscall
st::fn_0064DB00
          (AiEventClassTy *this,short param_1,short param_2,int param_3,int param_4,
          undefined4 param_5,char *param_6,char *param_7,undefined4 param_8)

{
  bool bVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_68;
  int local_24;
  short local_20 [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  local_24 = -1;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar3 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_event.cpp",0x117,0,iVar3,"%s",
                               "AiEventClassTy::_CreateArt");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\ai\\ai_event.cpp",0x118);
    return iVar3;
  }
  if (g_allPlayers_007FA174 != nullptr) {
    if ((param_1 < 1) && (0x15 < param_1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (((param_2 == 1 || (param_2 == 2)) || (param_2 == 3)))) {
      local_c = param_3;
      local_8 = param_4;
      local_10 = param_5;
      iVar3 = st::fn_00404D3B((short)param_3,(short)param_4,(short)param_5);
      if (iVar3 == 0) {
        local_14 = param_3 + -1;
        local_18 = param_4 + -1;
        local_20[0] = 3;
        local_20[1] = 0;
        local_20[2] = 3;
        local_20[3] = 0;
        st::fn_00401906((short *)&local_14,(short *)&local_18,local_20,local_20 + 2);
        local_c = local_14 + 1;
        local_8 = local_18 + 1;
      }
      iVar3 = st::fn_00401D9D(local_c,local_8,(short)local_10,(short *)&local_c,(short *)&local_8
                                 ,(short *)&local_10,0xfd);
      if (iVar3 != 0) {
        if (param_7 == nullptr) {
          param_7 = &DAT_008016a0;
        }
        if (param_6 == nullptr) {
          param_6 = &DAT_008016a0;
        }
        st::fn_00402059((int)param_1,(int)param_2,(int)(short)local_c,(int)(short)local_8,
                           (int)(short)local_10,param_6,param_7,0xffffffff,param_8);
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_68.previous;
  return local_24;
}

// 0064DDA0 AiEventClassTy::_CreateDest
#line 4 "decomp/ST.exe/functions/0064DDA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::_CreateDest */

int __thiscall
st::fn_0064DDA0
          (AiEventClassTy *this,short param_1,short param_2,short param_3,short param_4,
          short param_5,char *param_6,char *param_7,undefined4 param_8)

{
  bool bVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_50;
  int local_c;
  int local_8;

  local_c = -1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_event.cpp",0x13c,0,iVar3,"%s",
                               "AiEventClassTy::_CreateDest");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\ai\\ai_event.cpp",0x13d);
    return iVar3;
  }
  if ((param_1 == 0) || (bVar2 = false, param_1 == 1)) {
    bVar2 = true;
  }
  if (bVar2) {
    iVar3 = st::fn_00404D3B(param_3,param_4,param_5);
    if (iVar3 != 0) {
      local_8 = (int)param_3;
      iVar3 = st::fn_00403260(param_3,param_4,param_5,(int)param_1);
      if (iVar3 != 0) {
        if (param_7 == nullptr) {
          param_7 = &DAT_008016a0;
        }
        if (param_6 == nullptr) {
          param_6 = &DAT_008016a0;
        }
        st::fn_00403512((short)local_8,param_4,param_5,(int)param_1,(int)param_2,param_6,param_7,
                           param_8);
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_c;
}

// 0064DFA0 AiEventClassTy::_CreateMine
#line 4 "decomp/ST.exe/functions/0064DFA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::_CreateMine */

int __thiscall
st::fn_0064DFA0
          (AiEventClassTy *this,ushort param_1,short param_2,int param_3,int param_4,
          undefined4 param_5,ushort param_6,char *param_7,undefined4 param_8,undefined4 param_9)

{
  bool bVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_6c;
  int local_28;
  uint local_24;
  short local_20 [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  local_28 = -1;
  if (((short)param_6 < 0) || (7 < (short)param_6)) {
    param_6 = param_1;
  }
  local_24 = (uint)param_6;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  iVar3 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  if (iVar3 == 0) {
    if (g_allPlayers_007FA174 != nullptr) {
      if ((((param_2 == 0xa6) || (param_2 == 0xa7)) || (param_2 == 0xbd)) || (param_2 == 0xaf)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        local_c = param_3;
        local_8 = param_4;
        local_10 = param_5;
        iVar3 = st::fn_00404D3B((short)param_3,(short)param_4,(short)param_5);
        if (iVar3 == 0) {
          local_20[0] = 3;
          local_20[1] = 0;
          local_20[2] = 3;
          local_20[3] = 0;
          local_14 = param_3 + -1;
          local_18 = param_4 + -1;
          st::fn_00401906((short *)&local_14,(short *)&local_18,local_20,local_20 + 2);
          local_c = local_14 + 1;
          local_8 = local_18 + 1;
        }
        iVar3 = st::fn_00404D54(local_c,local_8,(short)local_10,(short *)&local_c,
                                   (short *)&local_8,(short *)&local_10,1);
        if (iVar3 != 0) {
          if (param_7 == nullptr) {
            param_7 = &DAT_008016a0;
          }
          st::fn_0040105A((int)param_2,(uint)param_1,0,0,(int)(short)local_c,(int)(short)local_8,
                             (int)(short)local_10,local_24,param_7,param_9);
          g_currentExceptionFrame = local_6c.previous;
          return 0;
        }
      }
    }
    g_currentExceptionFrame = local_6c.previous;
    return local_28;
  }
  g_currentExceptionFrame = local_6c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_event.cpp",0x169,0,iVar3,"%s",
                             "AiEventClassTy::_CreateMine");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\ai\\ai_event.cpp",0x16a);
  return iVar3;
}

// 0064E300 FUN_0064e300
#line 4 "decomp/ST.exe/functions/0064E300/decomp.c"
/* WARNING: Type propagation algorithm not settling */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_event.cpp
   Diagnostic line evidence: 436 | 440 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0064E300 -> 00668180 @ 0064E399

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0064E300 -> 00668180 @ 0064E399 */

uint st::fn_0064E300(int param_1,char *param_2,ushort param_3,char param_4,ushort param_5,char param_6,
                 uint param_7)

{
  int uVar1;
  int iVar1;
  DArrayTy *array;
  uint uVar2;
  bool bVar3;
  InternalExceptionFrame local_64;
  uint local_20 [3];
  void *local_14;
  uint local_10;
  AllocationRecord_006684E0 *local_c;
  AllocationRecord_006684E0 *local_8;

  local_10 = param_7;
  local_8 = nullptr;
  local_c = nullptr;
  local_20[2] = 0xffffffff;
  local_20[1] = 0;
  local_14 = nullptr;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  uVar1 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  if (uVar1 != 0) {
    g_currentExceptionFrame = local_64.previous;
    st::fn_00405BCD((int *)&local_8);
    st::fn_00405BCD((int *)&local_c);
    st::fn_006A5E40(uVar1,0,"E:\\__titans\\ai\\ai_event.cpp",0x1b8);
    return uVar1;
  }
  if (((int)local_10 < 0) || (bVar3 = local_10 == 8, 8 < (int)local_10)) {
    local_10 = 0xff;
    bVar3 = false;
  }
  if (bVar3) {
    local_10 = (uint)DAT_0080874d;
  }
  uVar2 = local_10;
  if ((param_6 < '\0') || (iVar1 = (int)param_6, '\a' < param_6)) {
    iVar1 = param_1;
  }
  local_8 = (AllocationRecord_006684E0 *)
            st::fn_004053C1(param_2,param_3,(short)param_4,param_5,(byte)iVar1);
  *(int *)&local_8->field_0x4 = param_1;
  *(uint *)&local_8->field_0x77 = uVar2;
  local_c = st::fn_004014C4(local_8,local_20);
  st::fn_00405BCD((int *)&local_8);
  st::fn_00401BC2(g_playSystem_00802A38,900,local_20 + 1,&local_14,local_c,0);
  st::fn_00405BCD((int *)&local_c);
  if (local_14 == nullptr) {
    st::fn_006A5E40
              (-0xab,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_event.cpp",0x1b4);
    uVar2 = local_20[2];
  }
  else {
    uVar2 = (uint)STField<ushort>(local_14,0x7d);
    local_20[2] = uVar2;
    array = (DArrayTy *)st::fn_00404DA9(param_1);
    if (array != nullptr) {
      st::fn_004020EA(local_14,array,0);
      st::fn_006AE110(array);
      g_currentExceptionFrame = local_64.previous;
      return uVar2;
    }
  }
  g_currentExceptionFrame = local_64.previous;
  return uVar2;
}

// 00652810 AiEventClassTy::GetMessage
#line 4 "decomp/ST.exe/functions/00652810/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [ST_RECOVERY:ai_event_get_message_v1]
   Source: E:\__titans\ai\ai_event.cpp
   Handles an STMessage for AiEventClassTy. Maps the external message ID to an internal AI event
   trigger, finds matching event records, evaluates their conditions, and interprets their action
   lists.

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401BE0|00652810; family_names=AiEventClassTy::GetMessage; ret4=2;
   direct_offsets={10:0,14:0,18:100,1c:5}
   [STTypeBootstrapApplier] Retired legacy curated identity; name=AiEventClassTy::GetMessage.
   Evidence: semantic leaf retained by an independent recovery tag
   [STTypeBootstrapApplier] Normalized signature, return, and explicit parameter provenance to
   ANALYSIS after heuristic identity retirement. Evidence: legacy signature/parameter source
   priority survived curated identity retirement */

void __thiscall st::fn_00652810(AiEventClassTy *this,STMessage *message)

{
  byte bVar1;
  AnonShape_006B7830_769CA2DF *pAVar2;
  PlayPanelTy *pPVar3;
  ST3DSMAPContext *pSVar4;
  AiEventClassTy *this_00;
  char cVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  short *psVar10;
  undefined1 *puVar11;
  DArrayTy *pDVar12;
  AiPlrClassTy *pAVar13;
  AiFltClassTy *pAVar14;
  uint *puVar15;
  STGroupBoatC *pSVar16;
  uint uVar17;
  dword *pdVar18;
  undefined2 *puVar19;
  AnonShape_00679600_B8E418A8 *pAVar20;
  AnonShape_0065DA10_8B0AA883 *pAVar21;
  short sVar22;
  CPanelTy *pCVar23;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_00;
  short sVar24;
  DArrayTy *pDVar25;
  undefined2 uVar27;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  undefined4 uVar26;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  DArrayTy *extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_05;
  AnonShape_00652810_4F58F813 *pAVar28;
  AnonNested_00652810_000F_9CE8027E *pAVar29;
  STFishC *pSVar30;
  uint uVar31;
  uint uVar32;
  uint **ppuVar34;
  bool bVar35;
  int iVar36;
  AiFltClassTyVTable *pAVar37;
  dword dVar38;
  byte local_484 [256];
  byte local_384 [256];
  InternalExceptionFrame local_284;
  uint local_240 [2];
  undefined1 local_237;
  uint **local_236;
  uint *local_20c;
  undefined2 local_208;
  undefined2 local_206;
  undefined4 local_204;
  undefined2 local_200;
  int local_1fe;
  undefined2 local_1f6;
  undefined2 local_1f4;
  undefined2 local_1f2;
  undefined1 local_1f0;
  char local_1ef [15];
  uint local_1e0;
  undefined1 local_1ce;
  undefined4 local_1c0 [4];
  int local_1b0;
  undefined4 local_1a0;
  uint local_19c;
  int local_198;
  int local_194;
  DArrayTy *local_190;
  DArrayTy *local_18c;
  AiEventClassTy *local_188;
  uint *local_184;
  DArrayTy *local_180;
  void *local_17c;
  AnonShape_00652810_4F58F813 *local_178;
  int local_174;
  DArrayTy *local_170;
  uint local_16c;
  DArrayTy *pDStack_164;
  DArrayTy *local_160;
  DArrayTy *local_15c;
  uint *local_158;
  byte *local_154;
  byte *local_150;
  char *local_14c;
  char *local_148;
  DArrayTy *local_144;
  uint local_140;
  int local_13c;
  char *local_138;
  int local_134;
  char local_9c;
  uint local_68 [2];
  undefined1 local_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 local_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined2 local_4e;
  undefined1 uStack_4c;
  char cStack_4b;
  undefined4 local_4a;
  undefined2 local_3b;
  int local_39;
  DArrayTy local_34;
  uint local_14;
  AiFltClassTy *local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;

  local_180 = nullptr;
  local_198 = 0;
  if ((g_allPlayers_007FA174 != nullptr) &&
     (local_188 = this, iVar7 = st::fn_0040371A(this,message,0), -1 < iVar7)) {
    local_194 = iVar7;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar8 = (*(code *)this->field_0000->field_0018)();
    this->field_052B = uVar8;
    if ((iVar7 != 0x456) ||
       ((g_playSystem_00802A38->field_00E4 % 0x19 == this->field_00D2 ||
        (g_playSystem_00802A38->field_00E4 == 1)))) {
      local_19c = this->field_04E2[2];
      local_284.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_284;
      iVar7 = st::fn_0072D7F0(local_284.jumpBuffer,0);
      this_00 = local_188;
      if (iVar7 == 0) {
        local_14 = 0;
        pDVar12 = local_188->field_04EE;
        bVar35 = pDVar12->count != 0;
        if (0 < (int)pDVar12->count) {
          do {
            uVar32 = local_14;
            if (bVar35) {
              pAVar28 = DArrayAt<AnonShape_00652810_4F58F813>(pDVar12, local_14);
            }
            else {
              pAVar28 = nullptr;
            }
            local_178 = pAVar28;
            if (*(char *)pAVar28 == '\0') {
              if (*(int *)&pAVar28->field_0x5 == local_194) {
                if (local_198 == 0) {
                  st::fn_0040371A(this_00,message,1);
                  local_198 = 1;
                }
                iVar7 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                        st::fn_00402923((AnonReceiver_0064A970 *)this_00,&this_00->field_04FA,
                                           (int)*(short *)&pAVar28->field_0x9,(short *)&local_16c);
                uVar17 = uVar32;
                if (iVar7 < 0) {
                  iVar36 = this_00->field_0084;
                  pcVar9 = &this_00->field_0004;
                }
                else {
                  if (local_9c == '\b') {
                    if (pDStack_164 != nullptr) {
                      *(char *)pAVar28 = '\x01';
                      pAVar28->field_000B = 0;
                      pAVar29 = pAVar28->field_000F;
                      local_170 = nullptr;
                      local_174 = 0;
                      pDVar12 = pAVar29->field_000C;
                      if (0 < (int)pDVar12) {
                        do {
                          if (local_170 < pDVar12) {
                            psVar10 = (short *)(pAVar29->field_0008 * (int)local_170 +
                                               pAVar29->field_001C);
                          }
                          else {
                            psVar10 = nullptr;
                          }
                          iVar7 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                                  st::fn_00402923((AnonReceiver_0064A970 *)this_00,
                                                     &this_00->field_04FA,(int)*psVar10,
                                                     (short *)&local_16c);
                          if (iVar7 < 0) {
                            st::fn_00405042(this_00,iVar7,&this_00->field_0004,uVar32,-1);
                            goto cf_common_join_00659A73;
                          }
                          if (iVar7 != 0x19) {
                            local_174 = 0;
                          }
                          if (0x593 < iVar7) {
                            if (0x5c8 < iVar7) {
                              if (iVar7 < 0x76d) {
                                if (iVar7 != 0x76c) {
                                  switch(iVar7) {
                                  case 0x5dc:
                                    iVar36 = st::fn_00401C67((short *)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          pDVar25 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            st::fn_00403003(pDVar25->flags,(char *)local_15c,
                                                               (ushort)local_158,(char)local_154,
                                                               (ushort)local_150,(char)local_14c,
                                                               (uint)local_148);
                                            pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5dd:
                                    iVar36 = st::fn_004048A4((int)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_10 = (AiFltClassTy *)&local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9(*(char *)&local_10->vtable,
                                                                         (ushort)local_15c);
                                            if (pSVar16 == nullptr) {
                                              st::fn_00405042(this_00,-0xaa,&DAT_008016a0,uVar32,
                                                                 (int)local_10->vtable);
                                            }
                                            else {
                                              pAVar21 = (AnonShape_0065DA10_8B0AA883 *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (pAVar21 == nullptr) {
                                                pAVar37 = local_10->vtable;
                                                uVar17 = uVar32;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                st::fn_00405042(this_00,-0xab,pcVar9,uVar17,
                                                                   (int)pAVar37);
                                              }
                                              else {
                                                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                                                st::fn_0040130C(pAVar21,extraout_EDX_04);
                                              }
                                            }
                                            local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5de:
                                    iVar36 = st::fn_00401FBE((int)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_10 = (AiFltClassTy *)&local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9(*(char *)&local_10->vtable,
                                                                         (ushort)local_15c);
                                            if (pSVar16 == nullptr) {
                                              st::fn_00405042(this_00,-0xaa,&DAT_008016a0,uVar32,
                                                                 (int)local_10->vtable);
                                            }
                                            else {
                                              pAVar21 = (AnonShape_0065DA10_8B0AA883 *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (pAVar21 == nullptr) {
                                                pAVar37 = local_10->vtable;
                                                uVar17 = uVar32;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                st::fn_00405042(this_00,-0xab,pcVar9,uVar17,
                                                                   (int)pAVar37);
                                              }
                                              else {
                                                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                                                st::fn_00401EF1(pAVar21,extraout_EDX_05);
                                              }
                                            }
                                            local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5df:
                                    iVar36 = st::fn_00401FBE((int)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_10 = (AiFltClassTy *)&local_34;
                                          local_8 = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9(*(char *)&local_10->vtable,
                                                                         (ushort)local_15c);
                                            if (pSVar16 == nullptr) {
                                              st::fn_00405042(this_00,-0xaa,&DAT_008016a0,uVar32,
                                                                 (int)local_10->vtable);
                                            }
                                            else {
                                              local_17c = (void *)st::fn_00405902((int)pSVar16);
                                              if (local_17c == nullptr) {
                                                pAVar37 = local_10->vtable;
                                                uVar17 = uVar32;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                st::fn_00405042(this_00,-0xab,pcVar9,uVar17,
                                                                   (int)pAVar37);
                                              }
                                              else {
                                                local_c = (DArrayTy *)
                                                          st::fn_00404DA9(local_10->vtable);
                                                if (local_c != nullptr) {
                                                  st::fn_004020EA(local_17c,local_c,0);
                                                  st::fn_006AE110(local_c);
                                                }
                                              }
                                            }
                                            local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                            local_8 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                          } while (local_8 != nullptr);
                                          local_8 = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e0:
                                    iVar36 = st::fn_00403AA3((int)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          pDVar25 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)pDVar25->flags,
                                                                         (ushort)local_15c);
                                            if (pSVar16 == nullptr) {
                                              st::fn_00405042(this_00,-0xaa,&DAT_008016a0,uVar32,
                                                                 pDVar25->flags);
                                            }
                                            else {
                                              st::fn_0040460B(pSVar16,(uint)local_158);
                                            }
                                            pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e1:
                                    iVar36 = st::fn_00403AA3((int)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          pDVar25 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)pDVar25->flags,
                                                                         (ushort)local_15c);
                                            if (pSVar16 == nullptr) {
                                              st::fn_00405042(this_00,-0xaa,&DAT_008016a0,uVar32,
                                                                 pDVar25->flags);
                                            }
                                            else {
                                              st::fn_00403788(pSVar16,(uint)local_158);
                                            }
                                            pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e2:
                                    iVar36 = st::fn_00405CB3((int)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_10 = (AiFltClassTy *)&local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9(*(char *)&local_10->vtable,
                                                                         (ushort)local_15c);
                                            if (pSVar16 == nullptr) {
                                              st::fn_00405042(this_00,-0xaa,&DAT_008016a0,uVar32,
                                                                 (int)local_10->vtable);
                                            }
                                            else {
                                              local_17c = (void *)st::fn_00405902((int)pSVar16);
                                              if (local_17c == nullptr) {
                                                pAVar37 = local_10->vtable;
                                                uVar17 = uVar32;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                st::fn_00405042(this_00,-0xab,pcVar9,uVar17,
                                                                   (int)pAVar37);
                                              }
                                              else {
                                                pAVar13 = nullptr;
                                                local_8 = nullptr;
                                                if (g_allPlayers_007FA174 != nullptr) {
                                                  pAVar13 = st::fn_00401DC5(*(char *)&local_10->
                                                                                         vtable);
                                                }
                                                if (pAVar13 != nullptr) {
                                                  local_8 = (DArrayTy *)
                                                            st::fn_00405A06(pAVar13,(byte *)
                                                  local_158);
                                                }
                                                if (local_8 == nullptr) {
                                                  st::fn_00405042(this_00,-4,(char *)local_158,
                                                                     uVar32,(int)local_10->vtable);
                                                }
                                                else {
                                                  st::fn_00405EC5(local_8,(int)local_17c);
                                                }
                                              }
                                            }
                                            local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e3:
                                    iVar36 = st::fn_00404FED((int)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_10 = (AiFltClassTy *)&local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9(*(char *)&local_10->vtable,
                                                                         (ushort)local_15c);
                                            if (pSVar16 == nullptr) {
                                              st::fn_00405042(this_00,-0xaa,&DAT_008016a0,uVar32,
                                                                 (int)local_10->vtable);
                                            }
                                            else {
                                              iVar36 = st::fn_00405902((int)pSVar16);
                                              if (iVar36 == 0) {
                                                pAVar37 = local_10->vtable;
                                                uVar17 = uVar32;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                st::fn_00405042(this_00,-0xab,pcVar9,uVar17,
                                                                   (int)pAVar37);
                                              }
                                              else {
                                                st::fn_004037E7(iVar36);
                                              }
                                            }
                                            local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e4:
                                    iVar36 = st::fn_0040155A((short *)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_10 = (AiFltClassTy *)&local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9(*(char *)&local_10->vtable,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              pAVar37 = local_10->vtable;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_006577ae:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,
                                                                 (int)pAVar37);
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (((pAVar14 == nullptr) ||
                                                  (pAVar14->field_007B == 1)) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                pAVar37 = local_10->vtable;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_006577ae;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              uStack_59 = SUB41(local_14c,0);
                                              local_58 = (undefined1)((uint)local_14c >> 8);
                                              local_60 = STPiece<0,1>(local_158);
                                              iVar36 = (int)local_144 * 0x19;
                                              uStack_5b = SUB41(local_150,0);
                                              uStack_5a = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 1;
                                              uStack_57 = SUB41(local_148,0);
                                              uStack_56 = (undefined1)((uint)local_148 >> 8);
                                              uStack_55 = (undefined1)((uint)local_148 >> 0x10);
                                              uStack_54 = (undefined1)((uint)local_148 >> 0x18);
                                              uStack_53 = (undefined1)iVar36;
                                              uStack_52 = (undefined1)((uint)iVar36 >> 8);
                                              uStack_51 = (undefined1)((uint)iVar36 >> 0x10);
                                              uStack_50 = (undefined1)((uint)iVar36 >> 0x18);
                                              iVar36 = local_140 * 0x19;
                                              uStack_4f = (undefined1)iVar36;
                                              local_4e = (undefined2)((uint)iVar36 >> 8);
                                              uStack_4c = (undefined1)((uint)iVar36 >> 0x18);
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e5:
                                    iVar36 = st::fn_004013B6((short *)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_10 = (AiFltClassTy *)&local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9(*(char *)&local_10->vtable,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              pAVar37 = local_10->vtable;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_00657a41:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,
                                                                 (int)pAVar37);
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (((pAVar14 == nullptr) ||
                                                  (pAVar14->field_007B == 1)) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                pAVar37 = local_10->vtable;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_00657a41;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              uStack_59 = SUB41(local_14c,0);
                                              local_58 = (undefined1)((uint)local_14c >> 8);
                                              local_60 = STPiece<0,1>(local_158);
                                              iVar36 = (int)local_148 * 0x19;
                                              uStack_5b = SUB41(local_150,0);
                                              uStack_5a = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 2;
                                              uStack_57 = (undefined1)iVar36;
                                              uStack_56 = (undefined1)((uint)iVar36 >> 8);
                                              uStack_55 = (undefined1)((uint)iVar36 >> 0x10);
                                              uStack_54 = (undefined1)((uint)iVar36 >> 0x18);
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e6:
                                    iVar36 = st::fn_004015E6((short *)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_10 = (AiFltClassTy *)&local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9(*(char *)&local_10->vtable,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              pAVar37 = local_10->vtable;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_006578fe:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,
                                                                 (int)pAVar37);
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (((pAVar14 == nullptr) ||
                                                  (pAVar14->field_007B == 1)) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                pAVar37 = local_10->vtable;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_006578fe;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              local_60 = STPiece<0,1>(local_158);
                                              uStack_59 = SUB41(local_14c,0);
                                              local_58 = (undefined1)((uint)local_14c >> 8);
                                              uStack_5b = SUB41(local_150,0);
                                              uStack_5a = (undefined1)((uint)local_150 >> 8);
                                              uStack_53 = SUB41(local_148,0);
                                              uStack_52 = (undefined1)((uint)local_148 >> 8);
                                              uStack_51 = (undefined1)((uint)local_148 >> 0x10);
                                              uStack_50 = (undefined1)((uint)local_148 >> 0x18);
                                              iVar36 = (int)local_144 * 0x19;
                                              local_68[0] = 3;
                                              uStack_57 = (undefined1)iVar36;
                                              uStack_56 = (undefined1)((uint)iVar36 >> 8);
                                              uStack_55 = (undefined1)((uint)iVar36 >> 0x10);
                                              uStack_54 = (undefined1)((uint)iVar36 >> 0x18);
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e7:
                                    iVar36 = st::fn_00405966((
                                                  RecoveredRecord_AiEventClassTy_006515B0 *)
                                                  &local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_00657bce:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              local_10 = (AiFltClassTy *)
                                                         st::fn_00405902((int)pSVar16);
                                              if ((local_10 == nullptr) ||
                                                 (local_10->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_00657bce;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              uVar32 = (uint)local_158 & 0x3fffffff;
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_60 = (undefined1)uVar32;
                                              uStack_5f = (undefined1)(uVar32 >> 8);
                                              uStack_5e = (undefined1)(uVar32 >> 0x10);
                                              uStack_5d = (undefined1)(uVar32 >> 0x18);
                                              uVar32 = (uint)local_154 & 0x3fffffff;
                                              uStack_54 = SUB41(local_14c,0);
                                              uStack_53 = (undefined1)((uint)local_14c >> 8);
                                              uStack_5c = (undefined1)uVar32;
                                              uStack_5b = (undefined1)(uVar32 >> 8);
                                              uStack_5a = (undefined1)(uVar32 >> 0x10);
                                              uStack_59 = (undefined1)(uVar32 >> 0x18);
                                              uVar32 = (uint)local_150 & 0x3fffffff;
                                              local_4e = (undefined2)local_140;
                                              local_58 = (undefined1)uVar32;
                                              uStack_57 = (undefined1)(uVar32 >> 8);
                                              uStack_56 = (undefined1)(uVar32 >> 0x10);
                                              uStack_55 = (undefined1)(uVar32 >> 0x18);
                                              uStack_52 = SUB41(local_148,0);
                                              uStack_51 = (undefined1)((uint)local_148 >> 8);
                                              local_68[0] = 4;
                                              uStack_50 = SUB41(local_144,0);
                                              uStack_4f = (undefined1)((uint)local_144 >> 8);
                                              uStack_4c = (undefined1)local_13c;
                                              pcVar9 = local_138;
                                              if (local_138 == nullptr) {
                                                pcVar9 = &DAT_008016a0;
                                              }
                                              st::fn_0072E340(&cStack_4b,pcVar9,0xe);
                                              st::fn_00401555(local_10,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e8:
                                    iVar36 = st::fn_00401802((int)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_00657ccf:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if ((pAVar14 == nullptr) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_00657ccf;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_68[0] = 5;
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e9:
                                    iVar36 = st::fn_004054AC((AnonShape_00651770_8F77396F *)
                                                                &local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_00657dd9:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if ((pAVar14 == nullptr) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_00657dd9;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_60 = STPiece<0,1>(local_158);
                                              local_68[0] = 6;
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5ea:
                                    iVar36 = st::fn_00401226((short *)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_00657f1c:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (((pAVar14 == nullptr) ||
                                                  (pAVar14->field_007B == 1)) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_00657f1c;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              uStack_59 = SUB41(local_14c,0);
                                              local_58 = (undefined1)((uint)local_14c >> 8);
                                              local_60 = STPiece<0,1>(local_158);
                                              iVar36 = (int)local_148 * 0x19;
                                              uStack_5b = SUB41(local_150,0);
                                              uStack_5a = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 7;
                                              uStack_57 = (undefined1)iVar36;
                                              uStack_56 = (undefined1)((uint)iVar36 >> 8);
                                              uStack_55 = (undefined1)((uint)iVar36 >> 0x10);
                                              uStack_54 = (undefined1)((uint)iVar36 >> 0x18);
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5eb:
                                    iVar36 = st::fn_00401429((int)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_0065806e:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (((pAVar14 == nullptr) ||
                                                  (pAVar14->field_007B == 1)) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_0065806e;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_60 = SUB41(local_158,0);
                                              uStack_5f = (undefined1)((uint)local_158 >> 8);
                                              uStack_5c = SUB41(local_150,0);
                                              uStack_5b = (undefined1)((uint)local_150 >> 8);
                                              uStack_5e = SUB41(local_154,0);
                                              uStack_5d = (undefined1)((uint)local_154 >> 8);
                                              local_58 = SUB41(local_148,0);
                                              uStack_57 = (undefined1)((uint)local_148 >> 8);
                                              uStack_5a = SUB41(local_14c,0);
                                              uStack_59 = (undefined1)((uint)local_14c >> 8);
                                              local_68[0] = 8;
                                              uStack_56 = SUB41(local_144,0);
                                              uStack_55 = (undefined1)((uint)local_144 >> 8);
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5ec:
                                    iVar36 = st::fn_004047AA((int)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_00658177:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (((pAVar14 == nullptr) ||
                                                  (pAVar14->field_007B == 1)) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_00658177;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_68[0] = 9;
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5ed:
                                    iVar36 = st::fn_00401C58((short *)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_00658b70:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (((pAVar14 == nullptr) ||
                                                  (pAVar14->field_007B == 1)) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_00658b70;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5e = SUB41(local_154,0);
                                              uStack_5d = (undefined1)((uint)local_154 >> 8);
                                              uStack_50 = SUB41(local_14c,0);
                                              uStack_4f = (undefined1)((uint)local_14c >> 8);
                                              local_4e = (undefined2)((uint)local_14c >> 0x10);
                                              local_60 = SUB41(local_158,0);
                                              uStack_5f = (undefined1)((uint)local_158 >> 8);
                                              iVar36 = (int)local_148 * 0x19;
                                              uStack_5c = SUB41(local_150,0);
                                              uStack_5b = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0x34;
                                              uStack_5a = (undefined1)iVar36;
                                              uStack_59 = (undefined1)((uint)iVar36 >> 8);
                                              local_58 = (undefined1)((uint)iVar36 >> 0x10);
                                              uStack_57 = (undefined1)((uint)iVar36 >> 0x18);
                                              uStack_54 = (undefined1)local_140;
                                              uStack_53 = (undefined1)(local_140 >> 8);
                                              uStack_56 = SUB41(local_144,0);
                                              uStack_55 = (undefined1)((uint)local_144 >> 8);
                                              uStack_52 = (undefined1)local_13c;
                                              uStack_51 = (undefined1)((uint)local_13c >> 8);
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5ee:
                                    iVar36 = st::fn_004011B8((
                                                  RecoveredRecord_AiEventClassTy_00651ED0 *)
                                                  &local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_00658d01:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              local_10 = (AiFltClassTy *)
                                                         st::fn_00405902((int)pSVar16);
                                              if (((local_10 == nullptr) ||
                                                  (local_10->field_007B == 1)) ||
                                                 (local_10->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_00658d01;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_58 = SUB41(local_158,0);
                                              uStack_57 = (undefined1)((uint)local_158 >> 8);
                                              uStack_56 = (undefined1)((uint)local_158 >> 0x10);
                                              uStack_55 = (undefined1)((uint)local_158 >> 0x18);
                                              uStack_4c = SUB41(local_14c,0);
                                              cStack_4b = (char)((uint)local_14c >> 8);
                                              local_68[0] = 0x32;
                                              uStack_50 = SUB41(local_154,0);
                                              uStack_4f = (undefined1)((uint)local_154 >> 8);
                                              local_4e = (undefined2)((uint)local_154 >> 0x10);
                                              uStack_54 = SUB41(local_150,0);
                                              uStack_53 = (undefined1)((uint)local_150 >> 8);
                                              uStack_52 = (undefined1)((uint)local_150 >> 0x10);
                                              uStack_51 = (undefined1)((uint)local_150 >> 0x18);
                                              pcVar9 = local_148;
                                              if (local_148 == nullptr) {
                                                pcVar9 = &DAT_008016a0;
                                              }
                                              st::fn_0072E340
                                                        ((char *)&local_4a,pcVar9,0xe);
                                              uStack_5b = (undefined1)(local_140 >> 8);
                                              uStack_5c = 0;
                                              uStack_5a = 0;
                                              uStack_59 = 0;
                                              local_3b = STPiece<0,2>(local_144);
                                              local_39 = local_13c * 0x19;
                                              local_60 = (undefined1)local_140;
                                              uStack_5f = 0;
                                              uStack_5e = 0;
                                              uStack_5d = 0;
                                              st::fn_00401555(local_10,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5ef:
                                    iVar36 = st::fn_0040566E((short *)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_00658e8e:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (((pAVar14 == nullptr) ||
                                                  (pAVar14->field_007B == 1)) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_00658e8e;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_58 = SUB41(local_158,0);
                                              uStack_57 = (undefined1)((uint)local_158 >> 8);
                                              uStack_56 = SUB41(local_154,0);
                                              uStack_55 = (undefined1)((uint)local_154 >> 8);
                                              uStack_54 = SUB41(local_150,0);
                                              uStack_53 = (undefined1)((uint)local_150 >> 8);
                                              uStack_52 = SUB41(local_14c,0);
                                              uStack_51 = (undefined1)((uint)local_14c >> 8);
                                              uStack_50 = SUB41(local_148,0);
                                              uStack_4f = (undefined1)((uint)local_148 >> 8);
                                              local_4e = STPiece<0,2>(local_144);
                                              uStack_4c = (undefined1)local_140;
                                              cStack_4b = (char)(local_140 >> 8);
                                              uStack_5b = (undefined1)((uint)local_13c >> 8);
                                              uStack_5c = 0;
                                              uStack_5a = 0;
                                              uStack_59 = 0;
                                              local_60 = (undefined1)local_13c;
                                              uStack_5f = 0;
                                              uStack_5e = 0;
                                              uStack_5d = 0;
                                              local_4a = (int)local_138 * 0x19;
                                              local_68[0] = 0x33;
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f0:
                                    iVar36 = st::fn_00404CAA((short *)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_00658fc8:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (((pAVar14 == nullptr) ||
                                                  (pAVar14->field_007B == 1)) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_00658fc8;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5a = SUB41(local_154,0);
                                              uStack_59 = (undefined1)((uint)local_154 >> 8);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              local_60 = SUB41(local_150,0);
                                              uStack_5f = (undefined1)((uint)local_150 >> 8);
                                              uStack_5e = (undefined1)((uint)local_150 >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_150 >> 0x18);
                                              iVar36 = (int)local_14c * 0x19;
                                              local_68[0] = 0x35;
                                              local_58 = (undefined1)iVar36;
                                              uStack_57 = (undefined1)((uint)iVar36 >> 8);
                                              uStack_56 = (undefined1)((uint)iVar36 >> 0x10);
                                              uStack_55 = (undefined1)((uint)iVar36 >> 0x18);
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f1:
                                    iVar36 = st::fn_004049B2((short *)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_006582b3:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if ((pAVar14 == nullptr) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_006582b3;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_60 = STPiece<0,1>(local_158);
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = SUB41(local_150,0);
                                              uStack_5c = (undefined1)((uint)local_150 >> 8);
                                              uStack_5b = SUB41(local_14c,0);
                                              uStack_5a = (undefined1)((uint)local_14c >> 8);
                                              uStack_59 = (undefined1)((uint)local_14c >> 0x10);
                                              local_58 = (undefined1)((uint)local_14c >> 0x18);
                                              uStack_57 = SUB41(local_148,0);
                                              uStack_56 = (undefined1)((uint)local_148 >> 8);
                                              uStack_55 = (undefined1)((uint)local_148 >> 0x10);
                                              uStack_54 = (undefined1)((uint)local_148 >> 0x18);
                                              local_68[0] = 10;
                                              uStack_53 = 0;
                                              uStack_52 = 0;
                                              uStack_51 = 0;
                                              uStack_50 = 0;
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f2:
                                    iVar36 = st::fn_00403E3B((short *)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_00658416:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (pAVar14 == nullptr) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_00658416;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5b = SUB41(local_14c,0);
                                              uStack_5a = (undefined1)((uint)local_14c >> 8);
                                              local_60 = STPiece<0,1>(local_158);
                                              iVar36 = (int)local_144 * 0x19;
                                              uStack_5d = SUB41(local_150,0);
                                              uStack_5c = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0xb;
                                              uStack_4f = SUB41(local_148,0);
                                              local_4e = (undefined2)((uint)local_148 >> 8);
                                              uStack_4c = (undefined1)((uint)local_148 >> 0x18);
                                              uStack_59 = (undefined1)iVar36;
                                              local_58 = (undefined1)((uint)iVar36 >> 8);
                                              uStack_57 = (undefined1)((uint)iVar36 >> 0x10);
                                              uStack_56 = (undefined1)((uint)iVar36 >> 0x18);
                                              uStack_55 = (undefined1)local_140;
                                              uStack_54 = (undefined1)(local_140 >> 8);
                                              uStack_53 = (undefined1)local_13c;
                                              uStack_52 = (undefined1)((uint)local_13c >> 8);
                                              uStack_51 = SUB41(local_138,0);
                                              uStack_50 = (undefined1)((uint)local_138 >> 8);
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f3:
                                    iVar36 = st::fn_00402BC1((short *)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_00658543:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (((pAVar14 == nullptr) ||
                                                  (pAVar14->field_007B == 1)) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_00658543;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              local_60 = STPiece<0,1>(local_158);
                                              local_68[0] = 0xc;
                                              iVar36 = (int)local_150 * 0x19;
                                              uStack_5b = (undefined1)iVar36;
                                              uStack_5a = (undefined1)((uint)iVar36 >> 8);
                                              uStack_59 = (undefined1)((uint)iVar36 >> 0x10);
                                              local_58 = (undefined1)((uint)iVar36 >> 0x18);
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f4:
                                    iVar36 = st::fn_004026BC((short *)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_00658670:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (((pAVar14 == nullptr) ||
                                                  (pAVar14->field_007B == 1)) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_00658670;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              local_60 = STPiece<0,1>(local_158);
                                              local_68[0] = 0xd;
                                              iVar36 = (int)local_150 * 0x19;
                                              uStack_5b = (undefined1)iVar36;
                                              uStack_5a = (undefined1)((uint)iVar36 >> 8);
                                              uStack_59 = (undefined1)((uint)iVar36 >> 0x10);
                                              local_58 = (undefined1)((uint)iVar36 >> 0x18);
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f5:
                                    iVar36 = st::fn_004044C1((short *)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_006587e2:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (((pAVar14 == nullptr) ||
                                                  (pAVar14->field_007B == 1)) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_006587e2;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5e = SUB41(local_154,0);
                                              uStack_5d = (undefined1)((uint)local_154 >> 8);
                                              uStack_50 = SUB41(local_14c,0);
                                              uStack_4f = (undefined1)((uint)local_14c >> 8);
                                              local_4e = (undefined2)((uint)local_14c >> 0x10);
                                              local_60 = SUB41(local_158,0);
                                              uStack_5f = (undefined1)((uint)local_158 >> 8);
                                              iVar36 = (int)local_148 * 0x19;
                                              uStack_5c = SUB41(local_150,0);
                                              uStack_5b = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0xe;
                                              uStack_5a = (undefined1)iVar36;
                                              uStack_59 = (undefined1)((uint)iVar36 >> 8);
                                              local_58 = (undefined1)((uint)iVar36 >> 0x10);
                                              uStack_57 = (undefined1)((uint)iVar36 >> 0x18);
                                              uStack_54 = (undefined1)local_140;
                                              uStack_53 = (undefined1)(local_140 >> 8);
                                              uStack_56 = SUB41(local_144,0);
                                              uStack_55 = (undefined1)((uint)local_144 >> 8);
                                              uStack_52 = (undefined1)local_13c;
                                              uStack_51 = (undefined1)((uint)local_13c >> 8);
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f6:
                                    iVar36 = st::fn_00405D71((int)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_006588eb:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (((pAVar14 == nullptr) ||
                                                  (pAVar14->field_007B == 1)) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_006588eb;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_68[0] = 0xf;
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f7:
                                    iVar36 = st::fn_004046D3((short *)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_006589fe:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if ((pAVar14 == nullptr) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_006589fe;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_60 = STPiece<0,1>(local_158);
                                              local_68[0] = 0x10;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f8:
                                    iVar36 = st::fn_00402D65((short *)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_00659143:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (((pAVar14 == nullptr) ||
                                                  (pAVar14->field_007B == 1)) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_00659143;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_58 = SUB41(local_154,0);
                                              uStack_57 = (undefined1)((uint)local_154 >> 8);
                                              uStack_54 = SUB41(local_14c,0);
                                              uStack_53 = (undefined1)((uint)local_14c >> 8);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              uStack_5a = (undefined1)((uint)local_158 >> 0x10);
                                              uStack_59 = (undefined1)((uint)local_158 >> 0x18);
                                              uStack_50 = SUB41(local_144,0);
                                              uStack_4f = (undefined1)((uint)local_144 >> 8);
                                              uStack_56 = SUB41(local_150,0);
                                              uStack_55 = (undefined1)((uint)local_150 >> 8);
                                              local_60 = (undefined1)local_13c;
                                              uStack_5f = (undefined1)((uint)local_13c >> 8);
                                              uStack_5e = (undefined1)((uint)local_13c >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_13c >> 0x18);
                                              uStack_52 = SUB41(local_148,0);
                                              uStack_51 = (undefined1)((uint)local_148 >> 8);
                                              iVar36 = (int)local_138 * 0x19;
                                              local_4e = (undefined2)local_140;
                                              local_68[0] = 0x36;
                                              uStack_4c = (undefined1)iVar36;
                                              cStack_4b = (char)((uint)iVar36 >> 8);
                                              STPiece<0,2>(local_4a) = (undefined2)((uint)iVar36 >> 0x10);
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f9:
                                    iVar36 = st::fn_00402FC7((
                                                  RecoveredRecord_AiEventClassTy_00652460 *)
                                                  &local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_006594ec:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (((pAVar14 == nullptr) ||
                                                  (pAVar14->field_007B == 1)) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_006594ec;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5a = SUB41(local_154,0);
                                              uStack_59 = (undefined1)((uint)local_154 >> 8);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              uStack_56 = SUB41(local_14c,0);
                                              uStack_55 = (undefined1)((uint)local_14c >> 8);
                                              local_58 = SUB41(local_150,0);
                                              uStack_57 = (undefined1)((uint)local_150 >> 8);
                                              uStack_52 = SUB41(local_144,0);
                                              uStack_51 = (undefined1)((uint)local_144 >> 8);
                                              uStack_54 = SUB41(local_148,0);
                                              uStack_53 = (undefined1)((uint)local_148 >> 8);
                                              local_60 = (undefined1)local_140;
                                              uStack_5f = (undefined1)(local_140 >> 8);
                                              uStack_5e = (undefined1)(local_140 >> 0x10);
                                              uStack_5d = (undefined1)(local_140 >> 0x18);
                                              iVar36 = local_13c * 0x19;
                                              local_68[0] = 0x37;
                                              uStack_50 = (undefined1)iVar36;
                                              uStack_4f = (undefined1)((uint)iVar36 >> 8);
                                              local_4e = (undefined2)((uint)iVar36 >> 0x10);
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5fa:
                                    iVar36 = st::fn_004011C2((short *)&local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_00659640:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (((pAVar14 == nullptr) ||
                                                  (pAVar14->field_007B == 1)) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_00659640;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5a = SUB41(local_154,0);
                                              uStack_59 = (undefined1)((uint)local_154 >> 8);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              uStack_56 = SUB41(local_14c,0);
                                              uStack_55 = (undefined1)((uint)local_14c >> 8);
                                              local_58 = SUB41(local_150,0);
                                              uStack_57 = (undefined1)((uint)local_150 >> 8);
                                              local_60 = SUB41(local_148,0);
                                              uStack_5f = (undefined1)((uint)local_148 >> 8);
                                              uStack_5e = (undefined1)((uint)local_148 >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_148 >> 0x18);
                                              iVar36 = (int)local_144 * 0x19;
                                              local_68[0] = 0x38;
                                              uStack_54 = (undefined1)iVar36;
                                              uStack_53 = (undefined1)((uint)iVar36 >> 8);
                                              uStack_52 = (undefined1)((uint)iVar36 >> 0x10);
                                              uStack_51 = (undefined1)((uint)iVar36 >> 0x18);
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5fb:
                                    iVar36 = st::fn_0040395E((AnonShape_006525E0_52237033 *)
                                                                &local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_00659785:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (((pAVar14 == nullptr) ||
                                                  (pAVar14->field_007B == 1)) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_00659785;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5a = SUB41(local_154,0);
                                              uStack_59 = (undefined1)((uint)local_154 >> 8);
                                              local_60 = SUB41(local_14c,0);
                                              uStack_5f = (undefined1)((uint)local_14c >> 8);
                                              uStack_5e = (undefined1)((uint)local_14c >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_14c >> 0x18);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              iVar36 = (int)local_148 * 0x19;
                                              local_58 = SUB41(local_150,0);
                                              uStack_57 = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0x39;
                                              uStack_56 = (undefined1)iVar36;
                                              uStack_55 = (undefined1)((uint)iVar36 >> 8);
                                              uStack_54 = (undefined1)((uint)iVar36 >> 0x10);
                                              uStack_53 = (undefined1)((uint)iVar36 >> 0x18);
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5fc:
                                    iVar36 = st::fn_00401208((AnonShape_00652670_DFEA616F *)
                                                                &local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_006598ca:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if (((pAVar14 == nullptr) ||
                                                  (pAVar14->field_007B == 1)) ||
                                                 (pAVar14->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_006598ca;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5a = SUB41(local_154,0);
                                              uStack_59 = (undefined1)((uint)local_154 >> 8);
                                              local_60 = SUB41(local_14c,0);
                                              uStack_5f = (undefined1)((uint)local_14c >> 8);
                                              uStack_5e = (undefined1)((uint)local_14c >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_14c >> 0x18);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              iVar36 = (int)local_148 * 0x19;
                                              local_58 = SUB41(local_150,0);
                                              uStack_57 = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0x3a;
                                              uStack_56 = (undefined1)iVar36;
                                              uStack_55 = (undefined1)((uint)iVar36 >> 8);
                                              uStack_54 = (undefined1)((uint)iVar36 >> 0x10);
                                              uStack_53 = (undefined1)((uint)iVar36 >> 0x18);
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5fd:
                                    iVar36 = st::fn_0040106E((
                                                  RecoveredRecord_AiEventClassTy_00652300 *)
                                                  &local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_0065937a:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              local_10 = (AiFltClassTy *)
                                                         st::fn_00405902((int)pSVar16);
                                              uVar31 = local_140;
                                              if ((local_10 == nullptr) ||
                                                 (local_10->field_007B == -0x8000)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_0065937a;
                                              }
                                              ppuVar34 = &local_20c;
                                              for (iVar36 = 0x12; puVar15 = local_158, iVar36 != 0;
                                                  iVar36 = iVar36 + -1) {
                                                *ppuVar34 = nullptr;
                                                ppuVar34 = ppuVar34 + 1;
                                              }
                                              *(undefined2 *)ppuVar34 = 0;
                                              local_20c = puVar15;
                                              local_208 = 0xffff;
                                              local_206 = 0x5622;
                                              local_204 = 0xfffffff0;
                                              local_200 = 0xfffe;
                                              if (-1 < (int)uVar31) {
                                                local_200 = (undefined2)uVar31;
                                              }
                                              local_1fe = (int)local_138 * 0x19;
                                              local_1f6 = STPiece<0,2>(local_154);
                                              local_1f4 = STPiece<0,2>(local_150);
                                              local_1f2 = STPiece<0,2>(local_14c);
                                              if (((int)local_148 < 0) ||
                                                 (pcVar9 = local_148, 7 < (int)local_148)) {
                                                bVar1 = local_10->field_0081;
                                                pcVar9 = (char *)(uint)bVar1;
                                                if (((char)bVar1 < '\0') || ('\a' < (char)bVar1)) {
                                                  pcVar9 = (char *)(uint)*(byte *)&local_10->
                                                                                   field_0024;
                                                }
                                              }
                                              local_1f0 = SUB41(pcVar9,0);
                                              if (local_144 != nullptr) {
                                                st::fn_0072E340
                                                          (local_1ef,(char *)local_144,0xe);
                                                uVar31 = local_140;
                                              }
                                              if ((((local_20c == (uint *)0xdd) ||
                                                   (local_20c == (uint *)0xde)) ||
                                                  (local_20c == (uint *)0xe2)) ||
                                                 (local_20c == (uint *)0xdc)) {
                                                bVar1 = 1;
                                              }
                                              else {
                                                bVar1 = 0;
                                              }
                                              local_1e0 = -(uint)bVar1 & uVar31;
                                              puVar15 = local_240;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_236 = &local_20c;
                                              local_1ce = 1;
                                              local_240[0] = 0x68;
                                              local_237 = 1;
                                              st::fn_00401555(local_10,local_240);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5fe:
                                    iVar36 = st::fn_00402801((
                                                  RecoveredRecord_AiEventClassTy_00652700 *)
                                                  &local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                      if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        pDVar12 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::st::fn_004016B8
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             &local_34.flags);
                                        if (0 < (int)pDVar12) {
                                          local_8 = &local_34;
                                          local_c = pDVar12;
                                          do {
                                            pSVar16 = st::fn_00405CF9((char)local_8->flags,
                                                                         (ushort)local_15c);
                                            uVar17 = uVar32;
                                            if (pSVar16 == nullptr) {
                                              dVar38 = local_8->flags;
                                              pcVar9 = &DAT_008016a0;
                                              iVar36 = -0xaa;
LAB_00659a1c:
                                              st::fn_00405042(this_00,iVar36,pcVar9,uVar17,dVar38
                                                                );
                                            }
                                            else {
                                              pAVar14 = (AiFltClassTy *)
                                                        st::fn_00405902((int)pSVar16);
                                              if ((pAVar14 == nullptr) ||
                                                 (pAVar14->field_007B != 1)) {
                                                dVar38 = local_8->flags;
                                                pcVar9 = st::fn_004057DB(iVar7);
                                                iVar36 = -0xab;
                                                goto LAB_00659a1c;
                                              }
                                              puVar15 = local_68;
                                              for (iVar36 = 0xd; iVar36 != 0; iVar36 = iVar36 + -1)
                                              {
                                                *puVar15 = 0;
                                                puVar15 = puVar15 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_58 = SUB41(local_154,0);
                                              uStack_57 = (undefined1)((uint)local_154 >> 8);
                                              uStack_54 = SUB41(local_14c,0);
                                              uStack_53 = (undefined1)((uint)local_14c >> 8);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              uStack_5a = (undefined1)((uint)local_158 >> 0x10);
                                              uStack_59 = (undefined1)((uint)local_158 >> 0x18);
                                              local_60 = SUB41(local_144,0);
                                              uStack_5f = (undefined1)((uint)local_144 >> 8);
                                              uStack_5e = (undefined1)((uint)local_144 >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_144 >> 0x18);
                                              uStack_56 = SUB41(local_150,0);
                                              uStack_55 = (undefined1)((uint)local_150 >> 8);
                                              iVar36 = local_140 * 0x19;
                                              uStack_52 = SUB41(local_148,0);
                                              uStack_51 = (undefined1)((uint)local_148 >> 8);
                                              uStack_50 = (undefined1)((uint)local_148 >> 0x10);
                                              uStack_4f = (undefined1)((uint)local_148 >> 0x18);
                                              local_68[0] = 0x3b;
                                              local_4e = (undefined2)iVar36;
                                              uStack_4c = (undefined1)((uint)iVar36 >> 0x10);
                                              cStack_4b = (char)((uint)iVar36 >> 0x18);
                                              st::fn_00401555(pAVar14,local_68);
                                              uVar32 = local_14;
                                            }
                                            local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                          local_c = nullptr;
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  default:
                                    goto cf_common_join_00659A73;
                                  }
                                  goto cf_common_join_00652A99;
                                }
                                iVar7 = st::fn_004051DC((int)&local_16c);
                                if (iVar7 == 0) {
                                  iVar7 = -1;
                                  uVar17 = uVar32;
                                  pcVar9 = st::fn_004057DB(0x76c);
                                  st::fn_00405042(this_00,-0x7d,pcVar9,uVar17,iVar7);
                                }
                                else {
                                  DAT_0080c51e = pDStack_164;
                                }
                              }
                              goto cf_common_join_00659A73;
                            }
                            if (iVar7 == 0x5c8) {
                              iVar7 = st::fn_00403139((int)&local_16c);
                              if (iVar7 == 0) {
                                iVar7 = -1;
                                uVar17 = uVar32;
                                pcVar9 = st::fn_004057DB(0x5c8);
                                st::fn_00405042(this_00,-0x7d,pcVar9,uVar17,iVar7);
                              }
                              else {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar7 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar7 == 8) && (pDStack_164 == (DArrayTy *)0x9)) {
                                  iVar7 = -1;
                                  uVar17 = uVar32;
                                  pcVar9 = st::fn_004057DB(0x5c8);
                                  st::fn_00405042(this_00,-0x7d,pcVar9,uVar17,iVar7);
                                }
                                else {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar25 = &local_34;
                                    local_c = pDVar12;
                                    pDVar12 = local_15c;
                                    do {
                                      puVar11 = (undefined1 *)0xffffffff;
                                      if (((int)pDVar12 < 1) || (0x28 < (int)pDVar12)) {
                                        bVar35 = false;
                                      }
                                      else {
                                        bVar35 = true;
                                      }
                                      if (bVar35) {
                                        puVar11 = (undefined1 *)((int)&pDVar12[2].flags + 1);
                                      }
                                      if (((int)pDVar12 < 0x32) || (0x73 < (int)pDVar12)) {
                                        bVar35 = false;
                                      }
                                      else {
                                        bVar35 = true;
                                      }
                                      if (bVar35) {
                                        puVar11 = (undefined1 *)((int)&pDVar12[-2].count + 2);
                                      }
                                      if (-1 < (int)puVar11) {
                                        st::fn_00402EAF(pDVar25->flags,(int)puVar11,local_158);
                                        pDVar12 = local_15c;
                                      }
                                      pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                }
                              }
                              goto cf_common_join_00659A73;
                            }
                            switch(iVar7) {
                            case 0x594:
                              iVar36 = st::fn_004031ED((int)&local_16c);
                              if (iVar36 == 0) break;
                              if (local_160 != nullptr) {
                                st::fn_00402932(0,(byte *)pDStack_164,0,0,0,-1,-1,-1,thunk_FUN_0064dd70,
                                         local_160);
                              }
                              goto cf_common_join_00659A73;
                            case 0x595:
                              iVar36 = st::fn_00401C35((short *)&local_16c);
                              if (iVar36 == 0) break;
                              if (((pDStack_164 == (DArrayTy *)0xdd) ||
                                  (pDStack_164 == (DArrayTy *)0xde)) ||
                                 (pDStack_164 == (DArrayTy *)0xe0)) {
                                bVar35 = true;
                              }
                              else {
                                bVar35 = false;
                              }
                              if (bVar35) {
                                local_18c = local_160;
                                local_190 = local_15c;
                                local_184 = local_158;
                                iVar36 = st::fn_0040170D((int)pDStack_164,(int *)&local_18c,
                                                            (int *)&local_190,(int *)&local_184);
                                if (iVar36 == 0) goto LAB_00655f4c;
                                st::fn_00405E84(local_18c,local_190,local_184,pDStack_164,
                                                   local_154);
                              }
                              goto cf_common_join_00659A73;
                            case 0x596:
                              iVar36 = st::fn_00405DAD((RecoveredRecord_AiEventClassTy_0064FF70 *
                                                          )&local_16c);
                              if (iVar36 == 0) break;
                              DAT_008118fc = 0;
                              st::fn_00404142((short)pDStack_164,(short)local_160,(short)local_15c,
                                           (short)local_158,(short)local_154,(short)local_150,
                                           (short)local_14c,thunk_FUN_0064e260,&local_148);
                              goto cf_common_join_00659A73;
                            case 0x597:
                              iVar36 = st::fn_004018B6((RecoveredRecord_AiEventClassTy_00650090 *
                                                          )&local_16c);
                              if (iVar36 == 0) break;
                              st::fn_00404142((short)local_15c,(short)local_158,(short)local_154,
                                           (short)local_150,(short)local_14c,(short)local_148,
                                           (short)local_144,thunk_FUN_0064e290,
                                           (int)local_160 << 0x10 | (uint)pDStack_164 & 0xffff);
                              goto cf_common_join_00659A73;
                            case 0x598:
                              iVar36 = st::fn_00402220((RecoveredRecord_AiEventClassTy_006501A0 *
                                                          )&local_16c);
                              if (iVar36 != 0) {
                                iVar36 = st::fn_0040341D(this_00,(short)pDStack_164,(short)local_160,
                                                     (short)local_15c,(short)local_158,
                                                     (short)local_154,(char *)local_150,local_14c,
                                                     local_148);
                                goto LAB_00655f44;
                              }
                              break;
                            case 0x599:
                              iVar36 = st::fn_004047CD((RecoveredRecord_AiEventClassTy_00650240 *
                                                          )&local_16c);
                              if (iVar36 == 0) break;
                              DAT_008118fc = 0;
                              st::fn_004013F2((byte *)local_160,(char)pDStack_164,(short)local_15c,
                                        (short)local_158,(short)local_154,(short)local_150,
                                        (short)local_14c,(short)local_148,thunk_FUN_0064df30,
                                        &local_144);
                              goto cf_common_join_00659A73;
                            case 0x59a:
                              iVar36 = st::fn_00402027((int)&local_16c);
                              if (iVar36 == 0) break;
                              if (local_160 != nullptr) {
                                st::fn_004013F2((byte *)pDStack_164,-1,0,0,0,-1,-1,-1,thunk_FUN_0064df70,
                                          local_160);
                              }
                              goto cf_common_join_00659A73;
                            case 0x59b:
                              iVar36 = st::fn_00404502((short *)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    local_8 = &local_34;
                                    local_c = pDVar12;
                                    do {
                                      iVar36 = st::fn_0040434A(this_00,(ushort)local_8->flags,
                                                           (short)local_15c,(int)local_158,
                                                           (int)local_154,local_150,
                                                           (ushort)local_14c,local_148,local_144,
                                                           local_140);
                                      if (iVar36 != 0) {
                                        dVar38 = local_8->flags;
                                        uVar17 = uVar32;
                                        pcVar9 = st::fn_004057DB(iVar7);
                                        st::fn_00405042(this_00,-0xab,pcVar9,uVar17,dVar38);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                    local_c = nullptr;
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x59c:
                              iVar36 = st::fn_00401843((RecoveredRecord_AiEventClassTy_00650480 *
                                                          )&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar25 = &local_34;
                                    local_c = pDVar12;
                                    do {
                                      DAT_008118fc = 0;
                                      st::fn_00403675(pDVar25->flags,(short)local_15c,(char)local_158,
                                                 local_154,(short)local_150,(short)local_14c,
                                                 (short)local_148,(short)local_144,(short)local_140,
                                                 (short)local_13c,thunk_FUN_0064e1f0,&local_138);
                                      pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x59d:
                              iVar36 = st::fn_00404890((RecoveredRecord_AiEventClassTy_00650600 *
                                                          )&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar25 = &local_34;
                                    local_c = pDVar12;
                                    do {
                                      DAT_008118fc = 0;
                                      st::fn_00403675(pDVar25->flags,(short)local_158,(char)local_154,
                                                 local_150,(short)local_14c,(short)local_148,
                                                 (short)local_144,(short)local_140,(short)local_13c,
                                                 (short)local_138,thunk_FUN_0064e230,local_15c);
                                      pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            default:
                              goto cf_common_join_00659A73;
                            case 0x5aa:
                              iVar36 = st::fn_0040248C((short *)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar25 = &local_34;
                                    local_c = pDVar12;
                                    do {
                                      st::fn_00402AAE(pDVar25->flags,&local_15c->flags,
                                                         (byte)local_158);
                                      pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5ab:
                              iVar36 = st::fn_0040248C((short *)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar25 = &local_34;
                                    local_c = pDVar12;
                                    do {
                                      st::fn_0040534E((uint *)pDVar25->flags,(int)local_15c,
                                                         (byte)local_158);
                                      pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5ac:
                              iVar36 = st::fn_004018CA((short *)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    local_8 = &local_34;
                                    do {
                                      local_c = pDVar12;
                                      pAVar13 = st::fn_00401DC5((char)local_8->flags);
                                      if (pAVar13 == nullptr) {
                                        dVar38 = local_8->flags;
                                        uVar17 = uVar32;
                                        pcVar9 = st::fn_004057DB(iVar7);
                                        st::fn_00405042(this_00,-0xab,pcVar9,uVar17,dVar38);
                                      }
                                      else {
                                        st::fn_00402E37
                                                  (pAVar13,(int)local_15c,(int)local_158,
                                                   (int)local_154,-1);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      pDVar12 = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (pDVar12 != nullptr);
                                    local_c = nullptr;
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5ad:
                              iVar36 = st::fn_00404732((short *)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar25 = &local_34;
                                    local_c = pDVar12;
                                    do {
                                      st::fn_00402130((byte *)pDVar25->flags,(uint)local_15c,
                                                         (uint)local_158);
                                      pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5ae:
                              iVar36 = st::fn_0040385A((int)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar25 = &local_34;
                                    local_c = pDVar12;
                                    do {
                                      st::fn_00404EC6(pDVar25->flags);
                                      pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5af:
                              iVar36 = st::fn_004032EC((AnonShape_00650A20_4A198923 *)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    local_8 = &local_34;
                                    do {
                                      local_c = pDVar12;
                                      pAVar13 = st::fn_00401DC5((char)local_8->flags);
                                      if (pAVar13 == nullptr) {
                                        dVar38 = local_8->flags;
                                        uVar17 = uVar32;
                                        pcVar9 = st::fn_004057DB(iVar7);
                                        st::fn_00405042(this_00,-0xab,pcVar9,uVar17,dVar38);
                                      }
                                      else {
                                        st::fn_00402A18(pAVar13,(int)local_15c,(int)local_158);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      pDVar12 = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (pDVar12 != nullptr);
                                    local_c = nullptr;
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b0:
                              iVar36 = st::fn_004035D0((int)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    local_8 = &local_34;
                                    do {
                                      local_c = pDVar12;
                                      pAVar13 = st::fn_00401DC5((char)local_8->flags);
                                      if (pAVar13 == nullptr) {
                                        dVar38 = local_8->flags;
                                        uVar17 = uVar32;
                                        pcVar9 = st::fn_004057DB(iVar7);
                                        st::fn_00405042(this_00,-0xab,pcVar9,uVar17,dVar38);
                                      }
                                      else {
                                        st::fn_00402CC5((int)pAVar13);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      pDVar12 = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (pDVar12 != nullptr);
                                    local_c = nullptr;
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b1:
                              iVar36 = st::fn_0040120D((int)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar25 = &local_34;
                                    local_c = pDVar12;
                                    do {
                                      st::fn_00405349(pDVar25->flags);
                                      pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b2:
                              iVar36 = st::fn_0040120D((int)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar25 = &local_34;
                                    local_c = pDVar12;
                                    do {
                                      st::fn_004037F1((uint *)pDVar25->flags);
                                      pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b3:
                              iVar36 = st::fn_00402478((short *)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar25 = &local_34;
                                    local_c = pDVar12;
                                    do {
                                      st::fn_00401A28((byte *)pDVar25->flags,(uint)local_15c,
                                                         (uint)local_158,(int)local_154);
                                      pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b4:
                              iVar36 = st::fn_00401505((RecoveredRecord_AiEventClassTy_00650B10 *
                                                          )&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar25 = &local_34;
                                    local_8 = pDVar12;
                                    do {
                                      local_c = (DArrayTy *)0xffffffff;
                                      local_8 = pDVar12;
                                      if (g_allPlayers_007FA174 == nullptr) {
                                        pAVar13 = nullptr;
                                      }
                                      else {
                                        pAVar13 = st::fn_00401DC5((char)pDVar25->flags);
                                      }
                                      if (pAVar13 != nullptr) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_00678E00::st::fn_00402A0E
                                                            ((AnonReceiver_00678E00 *)pAVar13,
                                                             (byte *)local_15c,(int)local_158,
                                                             (int)local_154,(int)local_150);
                                      }
                                      if ((int)local_c < 0) {
                                        st::fn_00405042(this_00,-4,(char *)local_15c,uVar32,
                                                           pDVar25->flags);
                                      }
                                      pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                      pDVar12 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                      local_8 = pDVar12;
                                    } while (pDVar12 != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b5:
                              iVar36 = st::fn_0040426E((int)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    local_8 = &local_34;
                                    do {
                                      local_c = pDVar12;
                                      if (g_allPlayers_007FA174 == nullptr) {
                                        pAVar20 = nullptr;
                                      }
                                      else {
                                        pAVar20 = (AnonShape_00679600_B8E418A8 *)
                                                  st::fn_00401DC5((char)local_8->flags);
                                      }
                                      if (pAVar20 == nullptr) {
                                        dVar38 = local_8->flags;
                                        uVar17 = uVar32;
                                        pcVar9 = st::fn_004057DB(iVar7);
                                        st::fn_00405042(this_00,-0xab,pcVar9,uVar17,dVar38);
                                      }
                                      else {
                                        pAVar20->field_0644 = (char)local_15c;
                                        pAVar20->field_0640 = local_158;
                                        st::fn_00401DB6(pAVar20);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      pDVar12 = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (pDVar12 != nullptr);
                                    local_c = nullptr;
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b6:
                              iVar36 = st::fn_0040592F((short *)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    local_8 = &local_34;
                                    do {
                                      local_c = pDVar12;
                                      if (g_allPlayers_007FA174 == nullptr) {
                                        pAVar13 = nullptr;
                                      }
                                      else {
                                        pAVar13 = st::fn_00401DC5((char)local_8->flags);
                                      }
                                      if (pAVar13 == nullptr) {
                                        dVar38 = local_8->flags;
                                        uVar17 = uVar32;
                                        pcVar9 = st::fn_004057DB(iVar7);
                                        st::fn_00405042(this_00,-0xab,pcVar9,uVar17,dVar38);
                                      }
                                      else {
                                        st::fn_00401CA8(pAVar13,(byte)local_15c,(ushort)local_158
                                                           ,(ushort)local_154,(ushort)local_150,
                                                           local_14c);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      pDVar12 = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (pDVar12 != nullptr);
                                    local_c = nullptr;
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b7:
                              iVar36 = st::fn_00405132((RecoveredRecord_AiEventClassTy_00650BD0 *
                                                          )&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    local_10 = (AiFltClassTy *)&local_34;
                                    local_8 = pDVar12;
                                    do {
                                      local_c = (DArrayTy *)
                                                st::fn_004037D3(local_10->vtable,(uint)local_15c,
                                                                   (char)local_158,(short)local_154,
                                                                   (short)local_150,(short)local_14c
                                                                   ,(short)local_148,
                                                                   (short)local_144,(short)local_140
                                                                   ,1);
                                      if (local_c == nullptr) {
                                        pAVar37 = local_10->vtable;
                                        uVar17 = uVar32;
                                        pcVar9 = st::fn_004057DB(iVar7);
                                        st::fn_00405042(this_00,-0xab,pcVar9,uVar17,(int)pAVar37);
                                      }
                                      else {
                                        st::fn_00402270((uint)local_10->vtable,local_c);
                                        st::fn_006AE110(local_c);
                                      }
                                      local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                      local_8 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                    } while (local_8 != nullptr);
                                    local_8 = nullptr;
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b8:
                              iVar36 = st::fn_0040158C((RecoveredRecord_AiEventClassTy_00650CF0 *
                                                          )&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    local_10 = (AiFltClassTy *)&local_34;
                                    local_8 = pDVar12;
                                    do {
                                      local_c = (DArrayTy *)
                                                st::fn_0040533A(local_10->vtable,(uint)local_15c,
                                                                   (char)local_158,(short)local_154,
                                                                   (short)local_150,(short)local_14c
                                                                   ,(short)local_148,
                                                                   (short)local_144,(short)local_140
                                                                   ,1);
                                      if (local_c == nullptr) {
                                        pAVar37 = local_10->vtable;
                                        uVar17 = uVar32;
                                        pcVar9 = st::fn_004057DB(iVar7);
                                        st::fn_00405042(this_00,-0xab,pcVar9,uVar17,(int)pAVar37);
                                      }
                                      else {
                                        st::fn_00402270((uint)local_10->vtable,local_c);
                                        st::fn_006AE110(local_c);
                                      }
                                      local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                      local_8 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                    } while (local_8 != nullptr);
                                    local_8 = nullptr;
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b9:
                              iVar36 = st::fn_004050DD((RecoveredRecord_AiEventClassTy_00650E10 *
                                                          )&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    local_10 = (AiFltClassTy *)&local_34;
                                    local_8 = pDVar12;
                                    do {
                                      local_c = (DArrayTy *)
                                                st::fn_00403C2E(local_10->vtable,
                                                                   (byte *)local_15c,(char)local_158
                                                                   ,(short)local_154,
                                                                   (short)local_150,(short)local_14c
                                                                   ,(short)local_148,
                                                                   (short)local_144,(short)local_140
                                                                   ,1);
                                      if (local_c == nullptr) {
                                        pAVar37 = local_10->vtable;
                                        uVar17 = uVar32;
                                        pcVar9 = st::fn_004057DB(iVar7);
                                        st::fn_00405042(this_00,-0xab,pcVar9,uVar17,(int)pAVar37);
                                      }
                                      else {
                                        st::fn_00402270((uint)local_10->vtable,local_c);
                                        st::fn_006AE110(local_c);
                                      }
                                      local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                      local_8 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                    } while (local_8 != nullptr);
                                    local_8 = nullptr;
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                            }
                            goto cf_common_join_00652A99;
                          }
                          if (iVar7 == 0x593) {
                            iVar7 = st::fn_00402F4A((RecoveredRecord_AiEventClassTy_0064FD80 *)
                                                       &local_16c);
                            if (iVar7 == 0) {
                              iVar7 = -1;
                              uVar17 = uVar32;
                              pcVar9 = st::fn_004057DB(0x593);
                              st::fn_00405042(this_00,-0x7d,pcVar9,uVar17,iVar7);
                            }
                            else {
                              DAT_008118fc = 0;
                              st::fn_00402932((short)pDStack_164,(byte *)local_160,(short)local_15c,
                                       (short)local_158,(short)local_154,(short)local_150,
                                       (short)local_14c,(short)local_148,thunk_FUN_0064dd30,
                                       &local_144);
                            }
                            goto cf_common_join_00659A73;
                          }
                          if (iVar7 < 0x54e) {
                            if (iVar7 == 0x54d) {
                              iVar7 = st::fn_00402A1D((int)&local_16c);
                              if (iVar7 == 0) {
                                iVar7 = -1;
                                uVar17 = uVar32;
                                pcVar9 = st::fn_004057DB(0x54d);
                                st::fn_00405042(this_00,-0x7d,pcVar9,uVar17,iVar7);
                              }
                              else {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar7 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar7 == 8) && (pDStack_164 == (DArrayTy *)0x9)) {
                                  iVar7 = -1;
                                  uVar17 = uVar32;
                                  pcVar9 = st::fn_004057DB(0x54d);
                                  st::fn_00405042(this_00,-0x7d,pcVar9,uVar17,iVar7);
                                }
                                else {
                                  iVar7 = SubmarineTitans::Recovered::HiddenThis::
                                          AnonReceiver_0064A970::st::fn_004016B8
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     &local_34.flags);
                                  iVar36 = 0;
                                  if (0 < iVar7) {
                                    pDVar12 = &local_34;
                                    do {
                                      if (pDVar12->flags == (uint)DAT_0080874d) {
                                        if (g_opticClass_007FB2A0 != nullptr) {
                                          st::fn_00404CEB((int)local_15c);
                                        }
                                        break;
                                      }
                                      iVar36 = iVar36 + 1;
                                      pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                    } while (iVar36 < iVar7);
                                  }
                                }
                              }
                              goto cf_common_join_00659A73;
                            }
                            if (iVar7 < 0x51b) {
                              if (iVar7 == 0x51a) {
                                iVar7 = st::fn_00404C32((int)&local_16c);
                                if (iVar7 == 0) {
                                  iVar7 = -1;
                                  uVar17 = uVar32;
                                  pcVar9 = st::fn_004057DB(0x51a);
                                  st::fn_00405042(this_00,-0x7d,pcVar9,uVar17,iVar7);
                                }
                                else {
                                  (&this_00->field_052F)[(int)pDStack_164] = local_160;
                                }
                                goto cf_common_join_00659A73;
                              }
                              if (0x3e < iVar7) {
                                if (iVar7 < 0x517) {
                                  if (iVar7 == 0x516) {
                                    iVar7 = st::fn_00402158((short *)&local_16c);
                                    if (iVar7 == 0) {
                                      iVar7 = -1;
                                      uVar17 = uVar32;
                                      pcVar9 = st::fn_004057DB(0x516);
                                      st::fn_00405042(this_00,-0x7d,pcVar9,uVar17,iVar7);
                                    }
                                    else {
                                      if (pDStack_164 == (DArrayTy *)0x9) {
                                        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                        iVar7 = (*(code *)this_00->field_0000->field_0018)();
                                        if (iVar7 == 8) {
                                          pDVar12 = local_15c;
                                          if ((int)local_15c <= (int)local_158) {
                                            do {
                                              puVar11 = (undefined1 *)
                                                        st::fn_004048E0(this_00,(int)pDVar12);
                                              if (puVar11 != nullptr) {
                                                *puVar11 = 0;
                                              }
                                              pDVar12 = (DArrayTy *)((int)&pDVar12->flags + 1);
                                            } while ((int)pDVar12 <= (int)local_158);
                                          }
                                          goto cf_common_join_00659A73;
                                        }
                                      }
                                      pDVar12 = (DArrayTy *)
                                                SubmarineTitans::Recovered::HiddenThis::
                                                AnonReceiver_0064A970::st::fn_004016B8
                                                          ((AnonReceiver_0064A970 *)this_00,
                                                           (char *)pDStack_164,(uint)local_160,
                                                           &local_34.flags);
                                      if (0 < (int)pDVar12) {
                                        local_8 = &local_34;
                                        do {
                                          local_c = pDVar12;
                                          if (g_allPlayers_007FA174 == nullptr) {
                                            local_10 = nullptr;
                                          }
                                          else {
                                            local_10 = (AiFltClassTy *)
                                                       st::fn_00401DC5((char)local_8->flags);
                                          }
                                          pDVar12 = local_15c;
                                          if ((int)local_15c <= (int)local_158) {
                                            do {
                                              if (local_10 != nullptr) {
                                                puVar11 = (undefined1 *)
                                                          st::fn_004048E0(&local_10->field_001C,
                                                                             (int)pDVar12);
                                                if (puVar11 != nullptr) {
                                                  *puVar11 = 0;
                                                }
                                              }
                                              pDVar12 = (DArrayTy *)((int)&pDVar12->flags + 1);
                                            } while ((int)pDVar12 <= (int)local_158);
                                          }
                                          local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                          pDVar12 = (DArrayTy *)((int)&local_c[-1].data + 3);
                                        } while (pDVar12 != nullptr);
                                        local_c = nullptr;
                                      }
                                    }
                                  }
                                  else if (iVar7 == 0x42) {
                                    iVar7 = st::fn_0040199C((int)&local_16c);
                                    if (iVar7 == 0) {
                                      iVar7 = -1;
                                      uVar17 = uVar32;
                                      pcVar9 = st::fn_004057DB(0x42);
                                      st::fn_00405042(this_00,-0x7d,pcVar9,uVar17,iVar7);
                                    }
                                    else {
                                      pDVar12 = local_160;
                                      if (pDStack_164 == nullptr)
                                      goto cf_continue_loop_00659A80;
                                    }
                                  }
                                  else if (iVar7 == 0x322) {
                                    local_174 = 1;
                                  }
                                  else if (iVar7 == 0x515) {
                                    iVar7 = st::fn_00404174((short *)&local_16c);
                                    if (iVar7 == 0) {
                                      iVar7 = -1;
                                      uVar17 = uVar32;
                                      pcVar9 = st::fn_004057DB(0x515);
                                      st::fn_00405042(this_00,-0x7d,pcVar9,uVar17,iVar7);
                                    }
                                    else if (pDStack_164 == nullptr) {
                                      *(undefined1 *)local_178 = 0;
                                      local_178->field_000B = 0;
                                    }
                                    else {
                                      *(undefined1 *)local_178 = 1;
                                      local_178->field_000B = pDStack_164;
                                    }
                                  }
                                }
                                else if (iVar7 == 0x517) {
                                  iVar7 = st::fn_0040339B((short *)&local_16c);
                                  if (iVar7 == 0) {
                                    iVar7 = -1;
                                    uVar17 = uVar32;
                                    pcVar9 = st::fn_004057DB(0x517);
                                    st::fn_00405042(this_00,-0x7d,pcVar9,uVar17,iVar7);
                                  }
                                  else {
                                    if (pDStack_164 == (DArrayTy *)0x9) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar7 = (*(code *)this_00->field_0000->field_0018)();
                                      if (iVar7 == 8) {
                                        pDVar12 = local_15c;
                                        if ((int)local_15c <= (int)local_158) {
                                          do {
                                            puVar11 = (undefined1 *)
                                                      st::fn_004048E0(this_00,(int)pDVar12);
                                            if (puVar11 != nullptr) {
                                              *puVar11 = 1;
                                              *(byte **)(puVar11 + 0xb) = local_154;
                                            }
                                            pDVar12 = (DArrayTy *)((int)&pDVar12->flags + 1);
                                          } while ((int)pDVar12 <= (int)local_158);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    pDVar12 = (DArrayTy *)
                                              SubmarineTitans::Recovered::HiddenThis::
                                              AnonReceiver_0064A970::st::fn_004016B8
                                                        ((AnonReceiver_0064A970 *)this_00,
                                                         (char *)pDStack_164,(uint)local_160,
                                                         &local_34.flags);
                                    if (0 < (int)pDVar12) {
                                      local_8 = &local_34;
                                      local_c = pDVar12;
                                      do {
                                        if (g_allPlayers_007FA174 == nullptr) {
                                          local_10 = nullptr;
                                        }
                                        else {
                                          local_10 = (AiFltClassTy *)
                                                     st::fn_00401DC5((char)local_8->flags);
                                        }
                                        pDVar12 = local_15c;
                                        if ((int)local_15c <= (int)local_158) {
                                          do {
                                            if (local_10 != nullptr) {
                                              puVar11 = (undefined1 *)
                                                        st::fn_004048E0(&local_10->field_001C,
                                                                           (int)pDVar12);
                                              if (puVar11 != nullptr) {
                                                *puVar11 = 1;
                                                *(byte **)(puVar11 + 0xb) = local_154;
                                              }
                                            }
                                            pDVar12 = (DArrayTy *)((int)&pDVar12->flags + 1);
                                          } while ((int)pDVar12 <= (int)local_158);
                                        }
                                        local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                        local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                      } while (local_c != nullptr);
                                      local_c = nullptr;
                                    }
                                  }
                                }
                                else if (iVar7 == 0x518) {
                                  iVar7 = st::fn_00405588((int)&local_16c);
                                  if (iVar7 == 0) {
                                    iVar7 = -1;
                                    uVar17 = uVar32;
                                    pcVar9 = st::fn_004057DB(0x518);
                                    st::fn_00405042(this_00,-0x7d,pcVar9,uVar17,iVar7);
                                  }
                                  else {
                                    if (pDStack_164 == (DArrayTy *)0x9) {
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      iVar7 = (*(code *)this_00->field_0000->field_0018)();
                                      if (iVar7 == 8) {
                                        *(uint **)(&this_00->field_0xde + (int)local_15c * 4) =
                                             local_158;
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    pDVar12 = (DArrayTy *)
                                              SubmarineTitans::Recovered::HiddenThis::
                                              AnonReceiver_0064A970::st::fn_004016B8
                                                        ((AnonReceiver_0064A970 *)this_00,
                                                         (char *)pDStack_164,(uint)local_160,
                                                         &local_34.flags);
                                    if (0 < (int)pDVar12) {
                                      pDVar25 = &local_34;
                                      local_c = pDVar12;
                                      do {
                                        local_c = pDVar12;
                                        if (g_allPlayers_007FA174 == nullptr) {
                                          pAVar13 = nullptr;
                                        }
                                        else {
                                          pAVar13 = st::fn_00401DC5((char)pDVar25->flags);
                                        }
                                        if (pAVar13 == nullptr) {
                                          dVar38 = pDVar25->flags;
                                          uVar17 = uVar32;
                                          pcVar9 = st::fn_004057DB(0x518);
                                          st::fn_00405042(this_00,-0xab,pcVar9,uVar17,dVar38);
                                        }
                                        else {
                                          *(uint **)(&pAVar13->field_0xfa + (int)local_15c * 4) =
                                               local_158;
                                        }
                                        pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                        pDVar12 = (DArrayTy *)((int)&local_c[-1].data + 3);
                                        local_c = pDVar12;
                                      } while (pDVar12 != nullptr);
                                    }
                                  }
                                }
                                else if (iVar7 == 0x519) {
                                  iVar7 = st::fn_00403832((int)&local_16c);
                                  if (iVar7 == 0) {
                                    iVar7 = -1;
                                    uVar17 = uVar32;
                                    pcVar9 = st::fn_004057DB(0x519);
                                    st::fn_00405042(this_00,-0x7d,pcVar9,uVar17,iVar7);
                                  }
                                  else {
                                    (&DAT_0080e43b)[(int)pDStack_164] = local_160;
                                  }
                                }
                                goto cf_common_join_00659A73;
                              }
                              if (iVar7 == 0x3e) {
switchD_00652b42_switchD:
                                switch(local_15c) {
                                case nullptr:
                                  iVar36 = st::fn_004046A6((int)&local_16c);
                                  if (iVar36 == 0) goto cf_common_join_00652A99;
                                  switch(iVar7) {
                                  case 2:
                                    *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4) =
                                         (int)&local_160->flags +
                                         *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4);
                                    break;
                                  case 5:
                                    *(DArrayTy **)(&this_00->field_0xde + (int)pDStack_164 * 4) =
                                         local_160;
                                    break;
                                  case 0x17:
                                    if (local_160 == nullptr) {
                                      st::fn_00405042(this_00,-0x67,&DAT_008016a0,uVar32,-1);
                                    }
                                    else {
                                      *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4) =
                                           *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4) /
                                           (int)local_160;
                                    }
                                    break;
                                  case 0x2d:
                                    if (local_160 == nullptr) {
                                      st::fn_00405042(this_00,-0x67,&DAT_008016a0,uVar32,-1);
                                    }
                                    else {
                                      *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4) =
                                           *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4) %
                                           (int)local_160;
                                    }
                                    break;
                                  case 0x31:
                                    *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4) =
                                         *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4) *
                                         (int)local_160;
                                    break;
                                  case 0x3e:
                                    *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4) =
                                         *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4) -
                                         (int)local_160;
                                  }
                                  break;
                                case (DArrayTy *)0x1:
                                  iVar36 = st::fn_004046A6((int)&local_16c);
                                  if (iVar36 == 0) goto cf_common_join_00652A99;
                                  switch(iVar7) {
                                  case 2:
                                    (&DAT_0080e43b)[(int)pDStack_164] =
                                         (int)&local_160->flags + (&DAT_0080e43b)[(int)pDStack_164];
                                    break;
                                  case 5:
                                    (&DAT_0080e43b)[(int)pDStack_164] = local_160;
                                    break;
                                  case 0x17:
                                    if (local_160 == nullptr) {
                                      st::fn_00405042(this_00,-0x67,&DAT_008016a0,uVar32,-1);
                                    }
                                    else {
                                      (&DAT_0080e43b)[(int)pDStack_164] =
                                           (int)(&DAT_0080e43b)[(int)pDStack_164] / (int)local_160;
                                    }
                                    break;
                                  case 0x2d:
                                    if (local_160 == nullptr) {
                                      st::fn_00405042(this_00,-0x67,&DAT_008016a0,uVar32,-1);
                                    }
                                    else {
                                      (&DAT_0080e43b)[(int)pDStack_164] =
                                           (int)(&DAT_0080e43b)[(int)pDStack_164] % (int)local_160;
                                    }
                                    break;
                                  case 0x31:
                                    (&DAT_0080e43b)[(int)pDStack_164] =
                                         (&DAT_0080e43b)[(int)pDStack_164] * (int)local_160;
                                    break;
                                  case 0x3e:
                                    (&DAT_0080e43b)[(int)pDStack_164] =
                                         (&DAT_0080e43b)[(int)pDStack_164] - (int)local_160;
                                  }
                                  break;
                                case (DArrayTy *)0x2:
                                  iVar36 = st::fn_0040378D((int)&local_16c);
                                  if (iVar36 == 0) goto cf_common_join_00652A99;
                                  switch(iVar7) {
                                  case 2:
                                    (&this_00->field_052F)[(int)pDStack_164] =
                                         (int)&local_160->flags +
                                         (&this_00->field_052F)[(int)pDStack_164];
                                    break;
                                  case 5:
                                    (&this_00->field_052F)[(int)pDStack_164] = local_160;
                                    break;
                                  case 0x17:
                                    if (local_160 == nullptr) {
                                      st::fn_00405042(this_00,-0x67,&DAT_008016a0,uVar32,-1);
                                    }
                                    else {
                                      (&this_00->field_052F)[(int)pDStack_164] =
                                           (int)(&this_00->field_052F)[(int)pDStack_164] /
                                           (int)local_160;
                                    }
                                    break;
                                  case 0x2d:
                                    if (local_160 == nullptr) {
                                      st::fn_00405042(this_00,-0x67,&DAT_008016a0,uVar32,-1);
                                    }
                                    else {
                                      (&this_00->field_052F)[(int)pDStack_164] =
                                           (int)(&this_00->field_052F)[(int)pDStack_164] %
                                           (int)local_160;
                                    }
                                    break;
                                  case 0x31:
                                    (&this_00->field_052F)[(int)pDStack_164] =
                                         (&this_00->field_052F)[(int)pDStack_164] * (int)local_160;
                                    break;
                                  case 0x3e:
                                    (&this_00->field_052F)[(int)pDStack_164] =
                                         (&this_00->field_052F)[(int)pDStack_164] - (int)local_160;
                                  }
                                  break;
                                case (DArrayTy *)0x3:
                                  iVar36 = st::fn_004023F1((int)&local_16c);
                                  if (iVar36 == 0) goto cf_common_join_00652A99;
                                  if (iVar7 == 5) {
                                    st::fn_006B6020
                                              (this_00->field_05B3,(uint)pDStack_164,
                                               (char *)local_160);
                                  }
                                }
                                goto cf_common_join_00659A73;
                              }
                              switch(iVar7) {
                              case 2:
                              case 5:
                              case 0x17:
                              case 0x2d:
                              case 0x31:
                                goto switchD_00652b42_switchD;
                              case 0x19:
                                iVar36 = st::fn_004020EF((int)&local_16c);
                                if (iVar36 == 0) goto cf_common_join_00652A99;
                                if (local_174 != 0) {
                                  local_174 = 0;
                                  local_170 = pDStack_164;
                                  pDVar12 = local_170;
                                  goto cf_continue_loop_00659A80;
                                }
                                local_174 = 0;
                                break;
                              case 0x21:
                                iVar36 = st::fn_00405A65((int)&local_16c);
                                pDVar12 = pDStack_164;
                                if (iVar36 == 0) goto cf_common_join_00652A99;
                                goto cf_continue_loop_00659A80;
                              case 0x23:
                                iVar36 = st::fn_004011CC((int)&local_16c);
                                if (iVar36 == 0) goto cf_common_join_00652A99;
                                if (pDStack_164 == nullptr) {
                                  local_170 = local_160;
                                  pDVar12 = local_170;
                                  goto cf_continue_loop_00659A80;
                                }
                              }
                              goto cf_common_join_00659A73;
                            }
                            switch(iVar7) {
                            case 0x51b:
                              iVar36 = st::fn_00403CD3((int)&local_16c);
                              if (iVar36 == 0) goto cf_common_join_00652A99;
                              st::fn_006B6020
                                        (this_00->field_05B3,(uint)pDStack_164,(char *)local_160);
                              break;
                            case 0x528:
                              iVar36 = st::fn_004041C4((int)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar25 = &local_34;
                                    local_c = pDVar12;
                                    pCVar23 = g_cPanel_00801688;
                                    do {
                                      if (pCVar23 != nullptr) {
                                        st::fn_00401410
                                                  (pCVar23,(byte)pDVar25->flags,'\x01',local_15c);
                                        pCVar23 = g_cPanel_00801688;
                                      }
                                      pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x529:
                              iVar36 = st::fn_00404E3A((int)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  pDVar12 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  if (0 < (int)pDVar12) {
                                    pDVar25 = &local_34;
                                    local_c = pDVar12;
                                    pCVar23 = g_cPanel_00801688;
                                    do {
                                      local_c = pDVar12;
                                      if (pCVar23 != nullptr) {
                                        st::fn_00401410(pCVar23,(byte)pDVar25->flags,'\0',0);
                                        pCVar23 = g_cPanel_00801688;
                                      }
                                      pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                      pDVar12 = (DArrayTy *)((int)&local_c[-1].data + 3);
                                      local_c = pDVar12;
                                    } while (pDVar12 != nullptr);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x52a:
                              iVar36 = st::fn_0040510A((int)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  iVar7 = SubmarineTitans::Recovered::HiddenThis::
                                          AnonReceiver_0064A970::st::fn_004016B8
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     &local_34.flags);
                                  iVar36 = 0;
                                  if (0 < iVar7) {
                                    pDVar12 = &local_34;
                                    do {
                                      if (pDVar12->flags == (uint)DAT_0080874d) {
                                        if (g_cPanel_00801688 != nullptr) {
                                          st::fn_00402DB0((char)local_15c);
                                        }
                                        break;
                                      }
                                      iVar36 = iVar36 + 1;
                                      pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                    } while (iVar36 < iVar7);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x532:
                              iVar36 = st::fn_00403D82((int)&local_16c);
                              if (iVar36 == 0) goto cf_common_join_00652A99;
                              if (g_popUp_008016D8 != nullptr) {
                                if (pDStack_164 == (DArrayTy *)0x9) {
                                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                  iVar7 = (*(code *)this_00->field_0000->field_0018)();
                                  if (iVar7 == 8) {
                                    st::fn_004014D8(g_popUp_008016D8,(char *)local_15c,8);
                                    break;
                                  }
                                }
                                iVar7 = SubmarineTitans::Recovered::HiddenThis::
                                        AnonReceiver_0064A970::st::fn_004016B8
                                                  ((AnonReceiver_0064A970 *)this_00,
                                                   (char *)pDStack_164,(uint)local_160,
                                                   &local_34.flags);
                                iVar36 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
                                  do {
                                    if (pDVar12->flags == (uint)DAT_0080874d) {
                                      st::fn_004014D8(g_popUp_008016D8,(char *)local_15c,8);
                                      break;
                                    }
                                    iVar36 = iVar36 + 1;
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                  } while (iVar36 < iVar7);
                                }
                              }
                              break;
                            case 0x533:
                              iVar36 = st::fn_00403AC1((int)&local_16c);
                              if (iVar36 == 0) goto cf_common_join_00652A99;
                              if (pDStack_164 == (DArrayTy *)0x9) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar7 = (*(code *)this_00->field_0000->field_0018)();
                                if (iVar7 == 8) {
                                  if (DAT_00801694 != nullptr) {
                                    st::fn_00402045(DAT_00801694,(char *)local_154,2,
                                                       (char)local_158,(int)local_15c * 1000);
                                  }
                                  break;
                                }
                              }
                              iVar7 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970
                                      ::st::fn_004016B8((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     &local_34.flags);
                              iVar36 = 0;
                              if (0 < iVar7) {
                                pDVar12 = &local_34;
                                do {
                                  if (pDVar12->flags == (uint)DAT_0080874d) {
                                    if (DAT_00801694 != nullptr) {
                                      st::fn_00402045(DAT_00801694,(char *)local_154,2,
                                                         (char)local_158,(int)local_15c * 1000);
                                    }
                                    break;
                                  }
                                  iVar36 = iVar36 + 1;
                                  pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                } while (iVar36 < iVar7);
                              }
                              break;
                            case 0x534:
                              iVar36 = st::fn_004014AB((AnonShape_0064EC80_53C284F2 *)&local_16c);
                              if (iVar36 == 0) goto cf_common_join_00652A99;
                              if (pDStack_164 == (DArrayTy *)0x9) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar7 = (*(code *)this_00->field_0000->field_0018)();
                                if (iVar7 == 8) {
LAB_006536dd:
                                  if (g_cPanel_00801688 != nullptr) {
                                    CPanelTy::OutText(g_cPanel_00801688,(int)local_158,
                                                      (int)(local_154 + (1 - (int)local_158)),
                                                      local_15c);
                                  }
                                  break;
                                }
                              }
                              iVar7 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970
                                      ::st::fn_004016B8((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     &local_34.flags);
                              iVar36 = 0;
                              if (0 < iVar7) {
                                pDVar12 = &local_34;
                                do {
                                  if (pDVar12->flags == (uint)DAT_0080874d) goto LAB_006536dd;
                                  iVar36 = iVar36 + 1;
                                  pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                } while (iVar36 < iVar7);
                              }
                              break;
                            case 0x535:
                              iVar36 = st::fn_0040344F((int)&local_16c);
                              if (iVar36 == 0) goto cf_common_join_00652A99;
                              if (pDStack_164 == (DArrayTy *)0x9) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar7 = (*(code *)this_00->field_0000->field_0018)();
                                if (iVar7 == 8) {
LAB_00653778:
                                  if (g_cPanel_00801688 != nullptr) {
                                    CPanelTy::OutText(g_cPanel_00801688,(char *)local_158,local_15c);
                                  }
                                  break;
                                }
                              }
                              iVar7 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970
                                      ::st::fn_004016B8((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     &local_34.flags);
                              iVar36 = 0;
                              if (0 < iVar7) {
                                pDVar12 = &local_34;
                                do {
                                  if (pDVar12->flags == (uint)DAT_0080874d) goto LAB_00653778;
                                  iVar36 = iVar36 + 1;
                                  pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                } while (iVar36 < iVar7);
                              }
                              break;
                            case 0x536:
                              iVar36 = st::fn_00405E2A((int)&local_16c);
                              if (iVar36 == 0) goto cf_common_join_00652A99;
                              if (pDStack_164 == (DArrayTy *)0x9) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar7 = (*(code *)this_00->field_0000->field_0018)();
                                if (iVar7 == 8) {
                                  st::fn_00404BD8
                                            ((SoundClassTy *)&g_sound,SOUND_MODE_12,
                                             (char *)local_15c,0,nullptr,0);
                                  break;
                                }
                              }
                              iVar7 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970
                                      ::st::fn_004016B8((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     &local_34.flags);
                              iVar36 = 0;
                              if (0 < iVar7) {
                                pDVar12 = &local_34;
                                do {
                                  if (pDVar12->flags == (uint)DAT_0080874d) {
                                    st::fn_00404BD8
                                              ((SoundClassTy *)&g_sound,SOUND_MODE_12,
                                               (char *)local_15c,0,nullptr,0);
                                    break;
                                  }
                                  iVar36 = iVar36 + 1;
                                  pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                } while (iVar36 < iVar7);
                              }
                              break;
                            case 0x537:
                              iVar36 = st::fn_004043C2((int)&local_16c);
                              if (iVar36 == 0) goto cf_common_join_00652A99;
                              if (pDStack_164 == (DArrayTy *)0x9) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar7 = (*(code *)this_00->field_0000->field_0018)();
                                if (iVar7 == 8) {
                                  if (g_cPanel_00801688 != nullptr) {
                                    st::fn_00402C1B(g_cPanel_00801688,(char *)local_15c);
                                  }
                                  break;
                                }
                              }
                              iVar7 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970
                                      ::st::fn_004016B8((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     &local_34.flags);
                              iVar36 = 0;
                              if (0 < iVar7) {
                                pDVar12 = &local_34;
                                do {
                                  if (pDVar12->flags == (uint)DAT_0080874d) {
                                    if (g_cPanel_00801688 != nullptr) {
                                      st::fn_00402C1B(g_cPanel_00801688,(char *)local_15c);
                                    }
                                    break;
                                  }
                                  iVar36 = iVar36 + 1;
                                  pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                } while (iVar36 < iVar7);
                              }
                              break;
                            case 0x546:
                              iVar36 = st::fn_00405B4B((int)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  iVar7 = SubmarineTitans::Recovered::HiddenThis::
                                          AnonReceiver_0064A970::st::fn_004016B8
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     &local_34.flags);
                                  iVar36 = 0;
                                  if (0 < iVar7) {
                                    pDVar12 = &local_34;
                                    do {
                                      if (pDVar12->flags == (uint)DAT_0080874d) {
                                        if (g_visibleClass_00802A88 != nullptr) {
                                          if ((int)local_14c < 0) {
                                            iVar7 = -0x10;
                                          }
                                          else {
                                            iVar7 = (int)local_14c * 0x19;
                                          }
                                          st::fn_00401FD2
                                                    (g_visibleClass_00802A88,(int)local_15c,
                                                     (int)local_158,local_154,
                                                     (&local_34.flags)[iVar36],local_150,iVar7);
                                        }
                                        break;
                                      }
                                      iVar36 = iVar36 + 1;
                                      pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                    } while (iVar36 < iVar7);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x547:
                            case 0x548:
                              iVar36 = st::fn_004018F7((int)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  local_10 = (AiFltClassTy *)
                                             SubmarineTitans::Recovered::HiddenThis::
                                             AnonReceiver_0064A970::st::fn_004016B8
                                                       ((AnonReceiver_0064A970 *)this_00,
                                                        (char *)pDStack_164,(uint)local_160,
                                                        &local_34.flags);
                                  iVar36 = 0;
                                  if (0 < (int)local_10) {
                                    pDVar12 = &local_34;
                                    do {
                                      if (pDVar12->flags == (uint)DAT_0080874d) {
                                        if (g_visibleClass_00802A88 == nullptr) break;
                                        if (g_visibleClass_00802A88->field_0114 == 0) {
                                          g_visibleClass_00802A88->field_00F8 = 0;
                                        }
                                        else {
                                          g_visibleClass_00802A88->field_00F8 =
                                               (uint)(iVar7 == 0x547);
                                          pSVar4 = g_sT3DSMAPContext_00807598;
                                          if ((iVar7 == 0x547) != 0) {
                                            g_sT3DSMAPContext_00807598->field_0466 = 1;
                                            pSVar4->field_02D8 = 1;
                                            break;
                                          }
                                        }
                                        pSVar4 = g_sT3DSMAPContext_00807598;
                                        g_sT3DSMAPContext_00807598->field_0466 = 0;
                                        pSVar4->field_02D8 = 1;
                                        break;
                                      }
                                      iVar36 = iVar36 + 1;
                                      pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                    } while (iVar36 < (int)local_10);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x549:
                              iVar36 = st::fn_00401FE1((short *)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  iVar7 = SubmarineTitans::Recovered::HiddenThis::
                                          AnonReceiver_0064A970::st::fn_004016B8
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     &local_34.flags);
                                  iVar36 = 0;
                                  if (0 < iVar7) {
                                    pDVar12 = &local_34;
                                    do {
                                      if (pDVar12->flags == (uint)DAT_0080874d) {
                                        if (g_opticClass_007FB2A0 != nullptr) {
                                          st::fn_00401519((int)local_154,&local_15c->flags,
                                                             (int)local_158);
                                        }
                                        break;
                                      }
                                      iVar36 = iVar36 + 1;
                                      pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                    } while (iVar36 < iVar7);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x54a:
                              iVar36 = st::fn_00401DED((int)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  local_10 = (AiFltClassTy *)
                                             SubmarineTitans::Recovered::HiddenThis::
                                             AnonReceiver_0064A970::st::fn_004016B8
                                                       ((AnonReceiver_0064A970 *)this_00,
                                                        (char *)pDStack_164,(uint)local_160,
                                                        &local_34.flags);
                                  iVar36 = 0;
                                  if (0 < (int)local_10) {
                                    pDVar12 = &local_34;
LAB_00653bb7:
                                    if (pDVar12->flags != (uint)DAT_0080874d) goto code_r0x00653bbb;
                                    if (g_opticClass_007FB2A0 != nullptr) {
                                      memset(local_1c0, 0, 0x20); /* compiler bulk-zero initialization */
                                      switch(local_15c) {
                                      case nullptr:
                                        local_1b0 = 0x104;
                                        break;
                                      case (DArrayTy *)0x1:
                                        local_1b0 = 0x105;
                                        break;
                                      case (DArrayTy *)0x2:
                                        local_1b0 = 0x106;
                                        break;
                                      case (DArrayTy *)0x3:
                                        local_1b0 = 0x107;
                                        break;
                                      default:
                                        iVar36 = -1;
                                        uVar32 = local_14;
                                        pcVar9 = st::fn_004057DB(iVar7);
                                        st::fn_00405042(this_00,-0x7d,pcVar9,uVar32,iVar36);
                                        uVar32 = local_14;
                                        goto cf_common_join_00659A73;
                                      }
                                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                      (*(code *)this_00->field_0000->field_0030)(3,0x100,local_1c0);
                                      uVar32 = local_14;
                                    }
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x54b:
                            case 0x54c:
                              iVar36 = st::fn_00402568((int)&local_16c);
                              if (iVar36 != 0) {
                                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                iVar36 = (*(code *)this_00->field_0000->field_0018)();
                                if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  local_10 = (AiFltClassTy *)
                                             SubmarineTitans::Recovered::HiddenThis::
                                             AnonReceiver_0064A970::st::fn_004016B8
                                                       ((AnonReceiver_0064A970 *)this_00,
                                                        (char *)pDStack_164,(uint)local_160,
                                                        &local_34.flags);
                                  iVar36 = 0;
                                  if (0 < (int)local_10) {
                                    pDVar12 = &local_34;
                                    do {
                                      if (pDVar12->flags == (uint)DAT_0080874d) {
                                        if (g_opticClass_007FB2A0 != nullptr) {
                                          memset(local_1c0, 0, 0x20); /* compiler bulk-zero initialization */
                                          iVar36 = 0;
                                          local_1b0 = (iVar7 != 0x54b) + 0x100;
                                          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                                          (*(code *)this_00->field_0000->field_0030)
                                                    (3,0x100,local_1c0);
                                          uVar32 = local_14;
                                        }
                                        break;
                                      }
                                      iVar36 = iVar36 + 1;
                                      pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                    } while (iVar36 < (int)local_10);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            }
                            goto cf_common_join_00659A73;
                          }
                          switch(iVar7) {
                          case 0x54e:
                            iVar36 = st::fn_00401AC8((int)&local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                iVar7 = SubmarineTitans::Recovered::HiddenThis::
                                        AnonReceiver_0064A970::st::fn_004016B8
                                                  ((AnonReceiver_0064A970 *)this_00,
                                                   (char *)pDStack_164,(uint)local_160,
                                                   &local_34.flags);
                                iVar36 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
                                  do {
                                    if (pDVar12->flags == (uint)DAT_0080874d) {
                                      st::fn_0040222F((byte)local_15c,(int)local_158,
                                                         (int)local_154);
                                      break;
                                    }
                                    iVar36 = iVar36 + 1;
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                  } while (iVar36 < iVar7);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          default:
                            goto cf_common_join_00659A73;
                          case 0x55a:
                            iVar36 = st::fn_004029EB((int)&local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                pDVar12 = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          AnonReceiver_0064A970::st::fn_004016B8
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     &local_34.flags);
                                if (0 < (int)pDVar12) {
                                  pDVar25 = &local_34;
                                  local_c = pDVar12;
                                  do {
                                    uVar17 = pDVar25->flags;
                                    (&DAT_00809950)[uVar17] =
                                         (local_15c != (DArrayTy *)0x1) + '\x01';
                                    if (uVar17 == DAT_0080874d) {
                                      DAT_0080c522 = (uint)(local_15c == (DArrayTy *)0x1);
                                    }
                                    pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x55b:
                            iVar36 = st::fn_00402BD0((int)&local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                iVar7 = SubmarineTitans::Recovered::HiddenThis::
                                        AnonReceiver_0064A970::st::fn_004016B8
                                                  ((AnonReceiver_0064A970 *)this_00,
                                                   (char *)pDStack_164,(uint)local_160,
                                                   &local_34.flags);
                                iVar36 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
                                  do {
                                    if (pDVar12->flags == (uint)DAT_0080874d) {
                                      if (((char)local_15c->flags != '\0') &&
                                         ((DAT_008087a0 == '\x03' || (DAT_008087a0 == '\b')))) {
                                        st::fn_0072E730
                                                  (&DAT_0080ef1e,nullptr,local_384,nullptr,
                                                   nullptr);
                                        st::fn_0072F110
                                                  (&DAT_0080c632,nullptr,(char *)local_384,
                                                   (char *)local_15c,nullptr);
                                      }
                                      break;
                                    }
                                    iVar36 = iVar36 + 1;
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                  } while (iVar36 < iVar7);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x55c:
                            iVar36 = st::fn_0040274D((short *)&local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                iVar7 = SubmarineTitans::Recovered::HiddenThis::
                                        AnonReceiver_0064A970::st::fn_004016B8
                                                  ((AnonReceiver_0064A970 *)this_00,
                                                   (char *)pDStack_164,(uint)local_160,
                                                   &local_34.flags);
                                iVar36 = 0;
                                if (0 < iVar7) {
                                  do {
                                    (&DAT_0080c947)[iVar36] = local_158;
                                    if ((&local_34.flags)[iVar36] == (uint)DAT_0080874d) {
                                      DAT_0080e301 = (char)local_15c;
                                    }
                                    iVar36 = iVar36 + 1;
                                  } while (iVar36 < iVar7);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x55d:
                            iVar36 = st::fn_00401A55((int)&local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                iVar7 = SubmarineTitans::Recovered::HiddenThis::
                                        AnonReceiver_0064A970::st::fn_004016B8
                                                  ((AnonReceiver_0064A970 *)this_00,
                                                   (char *)pDStack_164,(uint)local_160,
                                                   &local_34.flags);
                                iVar36 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
LAB_006540b9:
                                  if (pDVar12->flags != (uint)DAT_0080874d) goto code_r0x006540bd;
                                  DAT_0080e300 = (char)local_15c;
                                  memset(&DAT_0080e303, 0, 0x20); /* compiler bulk-zero initialization */
                                  st::fn_0072E340
                                            ((char *)&DAT_0080e303,(char *)local_158,0x1f);
                                  uVar32 = local_14;
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x55e:
                            iVar36 = st::fn_00401E60((RecoveredRecord_AiEventClassTy_0064F1B0 *)
                                                        &local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                iVar7 = SubmarineTitans::Recovered::HiddenThis::
                                        AnonReceiver_0064A970::st::fn_004016B8
                                                  ((AnonReceiver_0064A970 *)this_00,
                                                   (char *)pDStack_164,(uint)local_160,
                                                   &local_34.flags);
                                iVar36 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
                                  do {
                                    if (pDVar12->flags == (uint)DAT_0080874d) {
                                      DAT_0080e302 = (char)local_15c;
                                      DAT_0080e429 = (char)local_154;
                                      DAT_0080e428 = STPiece<0,1>(local_14c);
                                      DAT_0080e427 = STPiece<0,1>(local_150);
                                      _DAT_0080e432 = local_140;
                                      _DAT_0080e42a = local_148;
                                      _DAT_0080e42e = local_144;
                                      _DAT_0080e436 = local_13c;
                                      DAT_0080e43a = STPiece<0,1>(local_138);
                                      if (DAT_008087a0 == '\x03') {
                                        st::fn_0072E730
                                                  (&DAT_0080ef1e,nullptr,local_484,nullptr,
                                                   nullptr);
                                        st::fn_0072F110
                                                  ((char *)&DAT_0080f33a,nullptr,
                                                   (char *)local_484,(char *)local_158,nullptr);
                                        st::external_00000080(&DAT_0080e323,"%s%s",&DAT_00807784,
                                                  &DAT_0080f33a);
                                      }
                                      else if (DAT_008087a0 == '\b') {
                                        st::external_00000080(&DAT_0080e323,"%s%s",&DAT_00807784,
                                                  local_158);
                                      }
                                      break;
                                    }
                                    iVar36 = iVar36 + 1;
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                  } while (iVar36 < iVar7);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x55f:
                            iVar36 = st::fn_0040533F((AnonShape_0064EF90_4909407D *)&local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                iVar7 = SubmarineTitans::Recovered::HiddenThis::
                                        AnonReceiver_0064A970::st::fn_004016B8
                                                  ((AnonReceiver_0064A970 *)this_00,
                                                   (char *)pDStack_164,(uint)local_160,
                                                   &local_34.flags);
                                iVar36 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
                                  do {
                                    if (pDVar12->flags == (uint)DAT_0080874d) {
                                      iVar7 = st::fn_006B5AA0
                                                        (&g_dArray_0080C4CB->flags,(char *)local_158
                                                        );
                                      if (g_optPanel_008016DC != nullptr) {
                                        st::fn_00401587(g_optPanel_008016DC);
                                      }
                                      if (-1 < iVar7) {
                                        *(int *)(&this_00->field_0xde + (int)local_15c * 4) = iVar7;
                                      }
                                      break;
                                    }
                                    iVar36 = iVar36 + 1;
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                  } while (iVar36 < iVar7);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x560:
                            iVar36 = st::fn_00405EAC((int)&local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                iVar7 = SubmarineTitans::Recovered::HiddenThis::
                                        AnonReceiver_0064A970::st::fn_004016B8
                                                  ((AnonReceiver_0064A970 *)this_00,
                                                   (char *)pDStack_164,(uint)local_160,
                                                   &local_34.flags);
                                iVar36 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
LAB_00654362:
                                  if (pDVar12->flags != (uint)DAT_0080874d) goto code_r0x00654366;
                                  st::fn_006C87C0(g_dArray_0080C4CB,(uint)local_15c);
LAB_00654386:
                                  if (g_optPanel_008016DC != nullptr) {
                                    st::fn_00401587(g_optPanel_008016DC);
                                  }
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x561:
                            iVar36 = st::fn_004055B0((int)&local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                iVar7 = SubmarineTitans::Recovered::HiddenThis::
                                        AnonReceiver_0064A970::st::fn_004016B8
                                                  ((AnonReceiver_0064A970 *)this_00,
                                                   (char *)pDStack_164,(uint)local_160,
                                                   &local_34.flags);
                                iVar36 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
                                  do {
                                    if (pDVar12->flags == (uint)DAT_0080874d) {
                                      if (g_dArray_0080C4CB != nullptr) {
                                        st::fn_006B5570(g_dArray_0080C4CB);
                                      }
                                      g_dArray_0080C4CB =
                                           st::fn_006B54F0(nullptr,10,10);
                                      goto LAB_00654386;
                                    }
                                    iVar36 = iVar36 + 1;
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                  } while (iVar36 < iVar7);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x562:
                            iVar36 = st::fn_0040533F((AnonShape_0064EF90_4909407D *)&local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                iVar7 = SubmarineTitans::Recovered::HiddenThis::
                                        AnonReceiver_0064A970::st::fn_004016B8
                                                  ((AnonReceiver_0064A970 *)this_00,
                                                   (char *)pDStack_164,(uint)local_160,
                                                   &local_34.flags);
                                iVar36 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
                                  do {
                                    if (pDVar12->flags == (uint)DAT_0080874d) {
                                      if (g_dArray_0080C4C7 == nullptr) {
                                        g_dArray_0080C4C7 =
                                             st::fn_006B54F0(nullptr,10,10);
                                      }
                                      iVar7 = st::fn_006B5AA0
                                                        (&g_dArray_0080C4C7->flags,(char *)local_158
                                                        );
                                      if (-1 < iVar7) {
                                        *(int *)(&this_00->field_0xde + (int)local_15c * 4) = iVar7;
                                      }
                                      break;
                                    }
                                    iVar36 = iVar36 + 1;
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                  } while (iVar36 < iVar7);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x563:
                            iVar36 = st::fn_00405EAC((int)&local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                iVar7 = SubmarineTitans::Recovered::HiddenThis::
                                        AnonReceiver_0064A970::st::fn_004016B8
                                                  ((AnonReceiver_0064A970 *)this_00,
                                                   (char *)pDStack_164,(uint)local_160,
                                                   &local_34.flags);
                                iVar36 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
                                  do {
                                    if (pDVar12->flags == (uint)DAT_0080874d) {
                                      if (g_dArray_0080C4C7 != nullptr) {
                                        st::fn_006C87C0(g_dArray_0080C4C7,(uint)local_15c);
                                      }
                                      break;
                                    }
                                    iVar36 = iVar36 + 1;
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                  } while (iVar36 < iVar7);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x564:
                            iVar36 = st::fn_004055B0((int)&local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                iVar7 = SubmarineTitans::Recovered::HiddenThis::
                                        AnonReceiver_0064A970::st::fn_004016B8
                                                  ((AnonReceiver_0064A970 *)this_00,
                                                   (char *)pDStack_164,(uint)local_160,
                                                   &local_34.flags);
                                iVar36 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
                                  do {
                                    if (pDVar12->flags == (uint)DAT_0080874d) {
                                      if (g_dArray_0080C4C7 != nullptr) {
                                        st::fn_006B5570(g_dArray_0080C4C7);
                                      }
                                      g_dArray_0080C4C7 =
                                           st::fn_006B54F0(nullptr,10,10);
                                      break;
                                    }
                                    iVar36 = iVar36 + 1;
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                  } while (iVar36 < iVar7);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x565:
                          case 0x566:
                            iVar36 = st::fn_0040292D((int)&local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if (((iVar36 != 8) ||
                                  ((local_15c != (DArrayTy *)0x9 && (pDStack_164 != (DArrayTy *)0x9)
                                   ))) && (local_15c != (DArrayTy *)0xff)) {
                                iVar36 = SubmarineTitans::Recovered::HiddenThis::
                                         AnonReceiver_0064A970::st::fn_004016B8
                                                   ((AnonReceiver_0064A970 *)this_00,
                                                    (char *)local_15c,0,&local_34.flags);
                                if (iVar36 == 1) {
                                  local_8 = (DArrayTy *)local_34.flags;
                                  pAVar14 = (AiFltClassTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            AnonReceiver_0064A970::st::fn_004016B8
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       &local_34.flags);
                                  local_10 = pAVar14;
                                  if (0 < (int)pAVar14) {
                                    pDVar12 = &local_34;
                                    local_1a0 = STReplaceLowByte((uint32_t)(local_1a0), (uint8_t)(iVar7 == 0x565));
                                    local_c = (DArrayTy *)pAVar14;
                                    do {
                                      local_c = (DArrayTy *)pAVar14;
                                      st::fn_00401212(&DAT_00807620,(byte)pDVar12->flags,
                                                         (byte)local_8,(char)local_1a0);
                                      pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                      pAVar14 = (AiFltClassTy *)((int)&local_c[-1].data + 3);
                                      local_c = (DArrayTy *)pAVar14;
                                    } while (pAVar14 != nullptr);
                                  }
                                  pPVar3 = g_playPanel_008016E4;
                                  if ((g_playPanel_008016E4 != nullptr) &&
                                     (local_10 != nullptr)) {
                                    local_8 = (DArrayTy *)&g_playPanel_008016E4->field_0181;
                                    g_playPanel_008016E4->field_0028 = 5;
                                    local_c = (DArrayTy *)0x8;
                                    do {
                                      if (local_8->flags != 0) {
                                        st::fn_006E6080(pPVar3,2,local_8->flags,
                                                     (undefined4 *)&pPVar3->field_0x18);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                    local_c = nullptr;
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                            }
                            break;
                          case 0x567:
                            iVar36 = st::fn_004058DF((int)&local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                local_10 = (AiFltClassTy *)
                                           SubmarineTitans::Recovered::HiddenThis::
                                           AnonReceiver_0064A970::st::fn_004016B8
                                                     ((AnonReceiver_0064A970 *)this_00,
                                                      (char *)pDStack_164,(uint)local_160,
                                                      &local_34.flags);
                                if (0 < (int)local_10) {
                                  pDVar12 = &local_34;
                                  local_c = (DArrayTy *)local_10;
                                  do {
                                    st::fn_00401D98(&DAT_00807620,(byte)pDVar12->flags,
                                                       (char)local_15c);
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                pPVar3 = g_playPanel_008016E4;
                                if ((g_playPanel_008016E4 != nullptr) &&
                                   (local_10 != nullptr)) {
                                  local_8 = (DArrayTy *)&g_playPanel_008016E4->field_0181;
                                  g_playPanel_008016E4->field_0028 = 5;
                                  local_c = (DArrayTy *)0x8;
                                  do {
                                    if (local_8->flags != 0) {
                                      st::fn_006E6080(pPVar3,2,local_8->flags,
                                                   (undefined4 *)&pPVar3->field_0x18);
                                    }
                                    local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                  local_c = nullptr;
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x568:
                            iVar36 = st::fn_00401B31((int)&local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                iVar7 = SubmarineTitans::Recovered::HiddenThis::
                                        AnonReceiver_0064A970::st::fn_004016B8
                                                  ((AnonReceiver_0064A970 *)this_00,
                                                   (char *)pDStack_164,(uint)local_160,
                                                   &local_34.flags);
                                iVar36 = 0;
                                if (0 < iVar7) {
                                  pDVar12 = &local_34;
                                  do {
                                    if (pDVar12->flags == (uint)DAT_0080874d) {
                                      DAT_00808790 = 1;
                                      break;
                                    }
                                    iVar36 = iVar36 + 1;
                                    pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
                                  } while (iVar36 < iVar7);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x56a:
                            iVar36 = st::fn_0040266C((int)&local_16c);
                            if (iVar36 == 0) break;
                            st::fn_00402B99(&DAT_00807620,(char *)pDStack_164);
                            goto cf_common_join_00659A73;
                          case 0x578:
                            iVar36 = st::fn_00401F91((int)&local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                pDVar12 = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          AnonReceiver_0064A970::st::fn_004016B8
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     &local_34.flags);
                                if (0 < (int)pDVar12) {
                                  pDVar25 = &local_34;
                                  local_c = pDVar12;
                                  do {
                                    pDVar12 = local_15c;
                                    if ((int)local_15c < 0) {
                                      pDVar12 = (DArrayTy *)(DAT_00808a90 >> 8 & 0xff);
                                    }
                                    st::fn_004030EE(pDVar25->flags,(int)pDVar12);
                                    pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x579:
                            iVar36 = st::fn_00402AE5((int)&local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                pDVar12 = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          AnonReceiver_0064A970::st::fn_004016B8
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     &local_34.flags);
                                if (0 < (int)pDVar12) {
                                  pDVar25 = &local_34;
                                  local_c = pDVar12;
                                  do {
                                    pDVar12 = local_15c;
                                    if ((int)local_15c < 0) {
                                      pDVar12 = (DArrayTy *)(DAT_00808a90 >> 0x10 & 0xff);
                                    }
                                    puVar15 = local_158;
                                    if ((int)local_158 < 0) {
                                      puVar15 = (uint *)(DAT_00808a90 >> 0x18);
                                    }
                                    st::fn_004035EE((int *)pDVar25->flags,&pDVar12->flags,puVar15
                                                      );
                                    pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x57a:
                            iVar36 = st::fn_0040265D((int)&local_16c);
                            if (iVar36 == 0) break;
                            pDVar12 = pDStack_164;
                            if ((int)pDStack_164 < 0) {
                              pDVar12 = (DArrayTy *)(DAT_00808a90 & 0xff);
                            }
                            st::fn_00401F37((int)pDVar12);
                            goto cf_common_join_00659A73;
                          case 0x57b:
                            iVar36 = st::fn_00405187((RecoveredRecord_AiEventClassTy_0064F500 *)
                                                        &local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                local_8 = local_15c;
                                if ((int)local_15c < 0) {
                                  local_8 = (DArrayTy *)(uint)DAT_00808a9b;
                                }
                                pDVar12 = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          AnonReceiver_0064A970::st::fn_004016B8
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     &local_34.flags);
                                if (0 < (int)pDVar12) {
                                  pDVar25 = &local_34;
                                  local_c = pDVar12;
                                  do {
                                    dVar38 = pDVar25->flags;
                                    bVar1 = g_bulkInitializedRecords_008087C7[dVar38].field_0021;
                                    uVar27 = (undefined2)((uint)local_150 >> 0x10);
                                    if (bVar1 == 1) {
                                      if ((int)local_8 < 3) {
                                        if (local_8 == (DArrayTy *)0x2) {
                                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                          st::fn_00403C15(this_00,CONCAT22(uVar27,(short)pDVar25->
                                                  flags),0xc,(short *)local_158,(short *)local_154,
                                                  (short *)local_150,0xfffe,0xffffffff,nullptr,
                                                  100,1,0,0);
                                          st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),1,
                                                        (short *)local_158,(short *)local_154,
                                                        (short *)local_150,0xfffe,0xffffffff,
                                                        nullptr,100,1,0,0);
                                          st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),1,
                                                        (short *)local_158,(short *)local_154,
                                                        (short *)local_150,0xfffe,0xffffffff,
                                                        nullptr,100,1,0,0);
                                          st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),2,
                                                        (short *)local_158,(short *)local_154,
                                                        (short *)local_150,0xfffe,0xffffffff,
                                                        nullptr,100,1,0,0);
                                          st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),3,
                                                        (short *)local_158,(short *)local_154,
                                                        (short *)local_150,0xfffe,0xffffffff,
                                                        nullptr,100,1,0,0);
                                          st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),6,
                                                        (short *)local_158,(short *)local_154,
                                                        (short *)local_150,0xfffe,0xffffffff,
                                                        nullptr,100,1,0,0);
                                        }
                                        else if (local_8 == nullptr) {
                                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                          st::fn_00403C15(this_00,CONCAT22(uVar27,(short)pDVar25->
                                                  flags),0xc,(short *)local_158,(short *)local_154,
                                                  (short *)local_150,0xfffe,0xffffffff,nullptr,
                                                  100,1,0,0);
                                        }
                                        else {
                                          if (local_8 != (DArrayTy *)0x1) goto LAB_00655324;
                                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                          st::fn_00403C15(this_00,CONCAT22(uVar27,(short)pDVar25->
                                                  flags),0xc,(short *)local_158,(short *)local_154,
                                                  (short *)local_150,0xfffe,0xffffffff,nullptr,
                                                  100,1,0,0);
                                          st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),1,
                                                        (short *)local_158,(short *)local_154,
                                                        (short *)local_150,0xfffe,0xffffffff,
                                                        nullptr,100,1,0,0);
                                          st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),1,
                                                        (short *)local_158,(short *)local_154,
                                                        (short *)local_150,0xfffe,0xffffffff,
                                                        nullptr,100,1,0,0);
                                          st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),2,
                                                        (short *)local_158,(short *)local_154,
                                                        (short *)local_150,0xfffe,0xffffffff,
                                                        nullptr,100,1,0,0);
                                        }
                                      }
                                      else {
joined_r0x00655322:
                                        if (local_8 != (DArrayTy *)0xff) {
LAB_00655324:
                                          uVar32 = local_14;
                                          pcVar9 = st::fn_004057DB(iVar7);
                                          st::fn_00405042(this_00,-0x7d,pcVar9,uVar32,dVar38);
                                        }
                                      }
                                    }
                                    else if (bVar1 == 2) {
                                      if (2 < (int)local_8) goto joined_r0x00655322;
                                      if (local_8 == (DArrayTy *)0x2) {
                                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                        st::fn_00403C15(this_00,CONCAT22(uVar27,(short)pDVar25->flags)
                                                      ,0x18,(short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0xd,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0xd,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0xe,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0xf,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0x12,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                      }
                                      else if (local_8 == nullptr) {
                                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                        st::fn_00403C15(this_00,CONCAT22(uVar27,(short)pDVar25->flags)
                                                      ,0x18,(short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                      }
                                      else {
                                        if (local_8 != (DArrayTy *)0x1) goto LAB_00655324;
                                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                        st::fn_00403C15(this_00,CONCAT22(uVar27,(short)pDVar25->flags)
                                                      ,0x18,(short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0xd,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0xd,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0xe,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                      }
                                    }
                                    else if (bVar1 == 3) {
                                      if (2 < (int)local_8) goto joined_r0x00655322;
                                      if (local_8 == (DArrayTy *)0x2) {
                                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                        st::fn_00403C15(this_00,CONCAT22(uVar27,(short)pDVar25->flags)
                                                      ,0x19,(short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0x19,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0x19,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0x1e,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0x1e,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0x1e,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0x20,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0x22,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                      }
                                      else if (local_8 == nullptr) {
                                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                        st::fn_00403C15(this_00,CONCAT22(uVar27,(short)pDVar25->flags)
                                                      ,0x19,(short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0x19,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0x19,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                      }
                                      else {
                                        if (local_8 != (DArrayTy *)0x1) goto LAB_00655324;
                                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                        st::fn_00403C15(this_00,CONCAT22(uVar27,(short)pDVar25->flags)
                                                      ,0x19,(short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0x19,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0x19,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0x1e,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0x1e,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)pDVar25->flags)),0x1e,
                                                      (short *)local_158,(short *)local_154,
                                                      (short *)local_150,0xfffe,0xffffffff,
                                                      nullptr,100,1,0,0);
                                      }
                                    }
                                    pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    uVar32 = local_14;
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x582:
                            iVar36 = st::fn_0040164F((int)&local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                pDVar12 = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          AnonReceiver_0064A970::st::fn_004016B8
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     &local_34.flags);
                                if (0 < (int)pDVar12) {
                                  pDVar25 = &local_34;
                                  local_c = pDVar12;
                                  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                                  uVar8 = extraout_ECX;
                                  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                                  uVar26 = extraout_EDX;
                                  do {
                                    switch(local_15c) {
                                    case (DArrayTy *)0xdc:
                                      if (local_158 == nullptr) {
                                        st::fn_00403625((char)pDVar25->flags,local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        st::fn_00403166((char)pDVar25->flags,(int)local_154);
                                      }
                                      else {
                                        st::fn_00404336((char)pDVar25->flags,(int)local_154);
                                      }
                                      break;
                                    case (DArrayTy *)0xdd:
                                      if (local_158 == nullptr) {
                                        st::fn_004018E8((char)pDVar25->flags,local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        st::fn_00403418((char)pDVar25->flags,(int)local_154);
                                      }
                                      else {
                                        st::fn_00404412((char)pDVar25->flags,(int)local_154);
                                      }
                                      break;
                                    case (DArrayTy *)0xde:
                                      if (local_158 == nullptr) {
                                        st::fn_00402685((char)pDVar25->flags,local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        st::fn_00405367((char)pDVar25->flags,(int)local_154);
                                      }
                                      else {
                                        st::fn_004055E7((char)pDVar25->flags,(int)local_154);
                                      }
                                      break;
                                    case (DArrayTy *)0xdf:
                                      if (local_158 == nullptr) {
                                        st::fn_00401EDD(STReplaceLowByte((uint32_t)(uVar26), (uint8_t)((char)pDVar25->flags)),
                                                           (int)local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        st::fn_00401C30(STReplaceLowByte((uint32_t)(local_158), (uint8_t)((char)pDVar25->flags)),
                                                           (int)local_154);
                                      }
                                      else {
                                        st::fn_00404106(STReplaceLowByte((uint32_t)(uVar8), (uint8_t)((char)pDVar25->flags)),
                                                           (int)local_154);
                                      }
                                      break;
                                    case (DArrayTy *)0xe2:
                                      if (local_158 == nullptr) {
                                        st::fn_004030E9(pDVar25->flags,local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        st::fn_00403814(pDVar25->flags,(int)local_154);
                                      }
                                      else {
                                        st::fn_00405E6B(pDVar25->flags,(int)local_154);
                                      }
                                      break;
                                    case (DArrayTy *)0xe3:
                                      if (local_158 == nullptr) {
                                        st::fn_00405024(pDVar25->flags,local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        st::fn_004043F9(pDVar25->flags,(int)local_154);
                                      }
                                      else {
                                        st::fn_004053F3(pDVar25->flags,(int)local_154);
                                      }
                                    }
                                    if (pDVar25->flags == (uint)DAT_0080874d) {
                                      st::fn_00404B8D((char)pDVar25->flags);
                                    }
                                    st::fn_004028F6((char)pDVar25->flags);
                                    pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                                    uVar8 = extraout_ECX_00;
                                    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                                    uVar26 = extraout_EDX_00;
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x583:
                            iVar36 = st::fn_00401E42((int)&local_16c);
                            if (iVar36 == 0) break;
                            if (pDStack_164 == nullptr) {
                              st::fn_0040557E(local_160);
                              goto cf_common_join_00659A73;
                            }
                            if ((int)pDStack_164 < 1) {
                              local_c = local_160;
                              iVar7 = st::fn_00401177(0);
                              if ((int)local_c < iVar7) {
                                iVar7 = st::fn_00401177(0);
                                iVar7 = iVar7 - (int)local_c;
                                goto LAB_0065565b;
                              }
                            }
                            else {
                              local_c = local_160;
                              iVar7 = st::fn_00401177(0);
                              iVar7 = (int)&local_c->flags + iVar7;
LAB_0065565b:
                              st::fn_0040557E(iVar7);
                            }
                            st::fn_00401177(0);
                            goto cf_common_join_00659A73;
                          case 0x584:
                            iVar36 = st::fn_004016EF((short *)&local_16c);
                            if (iVar36 == 0) break;
                            st::fn_00405F01((char)pDStack_164,(short)local_160,(short)local_15c,
                                               local_158,(int)local_154);
                            goto cf_common_join_00659A73;
                          case 0x585:
                            iVar36 = st::fn_0040570E();
                            if (iVar36 == 0) break;
                            DAT_00808794 = st::fn_0040150A((AnonShape_0056F930_C6277D80 *)
                                                              &DAT_00807620);
                            goto cf_common_join_00659A73;
                          case 0x58c:
                            iVar36 = st::fn_00404C05((short *)&local_16c);
                            if (iVar36 == 0) break;
                            pSVar30 = nullptr;
                            sVar24 = (short)local_160;
                            sVar22 = (short)local_15c;
                            sVar6 = (short)local_158;
                            if (local_154 == nullptr) {
                              if ((((sVar24 < 0) || (g_worldGrid.sizeX <= sVar24)) ||
                                  ((sVar22 < 0 || ((g_worldGrid.sizeY <= sVar22 || (sVar6 < 0))))))
                                 || (g_worldGrid.sizeZ <= sVar6)) {
LAB_00655871:
                                pSVar30 = nullptr;
                              }
                              else {
                                pSVar30 = (STFishC *)
                                          STGridAt3D(g_worldGrid, sVar24, sVar22, sVar6).
                                          objects[0];
                              }
                            }
                            else if (local_154 == (byte *)0x1) {
                              if (((((sVar24 < 0) || (g_worldGrid.sizeX <= sVar24)) || (sVar22 < 0))
                                  || ((g_worldGrid.sizeY <= sVar22 || (sVar6 < 0)))) ||
                                 (g_worldGrid.sizeZ <= sVar6)) goto LAB_00655871;
                              pSVar30 = (STFishC *)
                                        STGridAt3D(g_worldGrid, sVar24, sVar22, sVar6).objects
                                        [1];
                            }
                            else if (local_154 == (byte *)0x2) {
                              iVar7 = st::fn_004013F2(nullptr,-1,sVar24,sVar22,sVar6,1,1,1,
                                                thunk_FUN_00678890,0);
                              if ((iVar7 == -1) && (g_fish_00811984 != nullptr)) {
                                pSVar30 = g_fish_00811984;
                              }
                            }
                            if ((pSVar30 != nullptr) && (pDStack_164 != nullptr)) {
                              (*pSVar30->vtable->vfunc_70)(pDStack_164);
                            }
                            goto cf_common_join_00659A73;
                          case 0x58d:
                            iVar36 = st::fn_0040568C((RecoveredRecord_AiEventClassTy_0064F780 *)
                                                        &local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                pDVar12 = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          AnonReceiver_0064A970::st::fn_004016B8
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     &local_34.flags);
                                if (0 < (int)pDVar12) {
                                  local_10 = (AiFltClassTy *)&local_34;
                                  local_8 = pDVar12;
                                  do {
                                    local_c = local_144;
                                    uVar17 = uVar32;
                                    if ((int)local_144 < 0) {
                                      local_c = (DArrayTy *)0xfffe;
LAB_00655972:
                                      iVar36 = st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_158), (uint16_t)(*(undefined2 *)&local_10->vtable)),(short)local_15c
                                                  ,(short *)local_158,(short *)local_154,
                                                  (short *)local_150,(uint)local_c,(uint)local_14c,
                                                  local_148,local_140,local_13c,(int)local_138,
                                                  local_134);
                                      if (iVar36 != 0) {
LAB_006559d0:
                                        pAVar37 = local_10->vtable;
LAB_006559d6:
                                        pcVar9 = st::fn_004057DB(iVar7);
                                        iVar36 = -0xab;
                                        goto LAB_006559e3;
                                      }
                                    }
                                    else {
                                      if ((int)local_144 < 1) goto LAB_00655972;
                                      pSVar16 = st::fn_00405CF9(*(char *)&local_10->vtable,
                                                                   (ushort)local_144);
                                      if (pSVar16 != nullptr) {
                                        iVar36 = st::fn_00405902((int)pSVar16);
                                        if (iVar36 != 0) {
                                          if (((int)local_15c < 0x32) || (0x73 < (int)local_15c)) {
                                            bVar35 = false;
                                          }
                                          else {
                                            bVar35 = true;
                                          }
                                          if (((!bVar35) || (*(short *)(iVar36 + 0x7b) == 1)) &&
                                             (*(short *)(iVar36 + 0x7b) != -0x8000))
                                          goto LAB_00655972;
                                          goto LAB_006559d0;
                                        }
                                        pAVar37 = local_10->vtable;
                                        goto LAB_006559d6;
                                      }
                                      pAVar37 = local_10->vtable;
                                      pcVar9 = &DAT_008016a0;
                                      iVar36 = -0xaa;
LAB_006559e3:
                                      st::fn_00405042(this_00,iVar36,pcVar9,uVar17,(int)pAVar37);
                                    }
                                    local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                    local_8 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                  } while (local_8 != nullptr);
                                  local_8 = nullptr;
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x58e:
                            iVar36 = st::fn_00401A82((short *)&local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                pDVar12 = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          AnonReceiver_0064A970::st::fn_004016B8
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     &local_34.flags);
                                if (0 < (int)pDVar12) {
                                  local_10 = (AiFltClassTy *)&local_34;
                                  local_c = pDVar12;
                                  do {
                                    local_8 = (DArrayTy *)st::fn_00404DA9(local_10->vtable);
                                    if (local_8 != nullptr) {
                                      uVar31 = 0;
                                      uVar17 = local_8->count;
                                      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                                      pDVar12 = extraout_EDX_01;
                                      if (0 < (int)uVar17) {
                                        do {
                                          if (uVar31 < uVar17) {
                                            pDVar12 = local_8->data;
                                            pdVar18 = (dword *)((int)&pDVar12->flags +
                                                               local_8->elementSize * uVar31);
                                          }
                                          else {
                                            pdVar18 = nullptr;
                                          }
                                          st::fn_0040387D
                                                    (g_allPlayers_007FA174,
                                                     *(char *)&local_10->vtable,
                                                     STReplaceLowWord((uint32_t)(pDVar12), (uint16_t)((short)*pdVar18)),CASE_1,local_15c);
                                          uVar31 = uVar31 + 1;
                                          uVar17 = local_8->count;
                                          pDVar12 = local_8;
                                        } while ((int)uVar31 < (int)uVar17);
                                      }
                                      st::fn_006AE110(local_8);
                                    }
                                    local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                  local_c = nullptr;
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x58f:
                            iVar36 = st::fn_00402D7E((RecoveredRecord_AiEventClassTy_0064F950 *)
                                                        &local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                pDVar12 = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          AnonReceiver_0064A970::st::fn_004016B8
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     &local_34.flags);
                                if (0 < (int)pDVar12) {
                                  local_10 = (AiFltClassTy *)&local_34;
                                  local_c = pDVar12;
                                  do {
                                    if ((char)local_154 == '\b') {
                                      cVar5 = *(char *)&local_10->vtable;
                                    }
                                    else if (((char)local_154 < '\0') ||
                                            (cVar5 = (char)local_154, '\b' < (char)local_154)) {
                                      cVar5 = -1;
                                    }
                                    pDVar12 = (DArrayTy *)
                                              st::fn_00404705(local_10->vtable,(uint)local_158,
                                                                 (uint)local_15c,local_150,cVar5,
                                                                 (short)local_14c,(short)local_148,
                                                                 (short)local_144,(short)local_140,
                                                                 (short)local_13c,(short)local_138,1
                                                                );
                                    if (pDVar12 != nullptr) {
                                      uVar32 = 0;
                                      if (0 < (int)pDVar12->count) {
                                        bVar35 = pDVar12->count != 0;
                                        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                                        uVar8 = extraout_EDX_02;
                                        do {
                                          if (bVar35) {
                                            puVar19 = DArrayAt<undefined2>(pDVar12, uVar32);
                                          }
                                          else {
                                            puVar19 = nullptr;
                                          }
                                          st::fn_0040387D
                                                    (g_allPlayers_007FA174,
                                                     *(char *)&local_10->vtable,
                                                     STReplaceLowWord((uint32_t)(uVar8), (uint16_t)(*puVar19))
                                                     ,CASE_1,local_134);
                                          uVar32 = uVar32 + 1;
                                          bVar35 = uVar32 < pDVar12->count;
                                          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                                          uVar8 = extraout_EDX_03;
                                        } while ((int)uVar32 < (int)pDVar12->count);
                                      }
                                      st::fn_006AE110(pDVar12);
                                    }
                                    local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                  local_c = nullptr;
                                  uVar32 = local_14;
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x590:
                            iVar36 = st::fn_00405F1A((short *)&local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                pDVar12 = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          AnonReceiver_0064A970::st::fn_004016B8
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     &local_34.flags);
                                if (0 < (int)pDVar12) {
                                  local_8 = &local_34;
                                  local_c = pDVar12;
                                  do {
                                    iVar36 = st::fn_00401B27(this_00,(ushort)local_8->flags,
                                                           (short)local_15c,(int)local_158,
                                                           (int)local_154,local_150,local_14c,
                                                           local_148,(int)local_144);
                                    if (iVar36 != 0) {
                                      dVar38 = local_8->flags;
                                      uVar17 = uVar32;
                                      pcVar9 = st::fn_004057DB(iVar7);
                                      st::fn_00405042(this_00,-0xab,pcVar9,uVar17,dVar38);
                                    }
                                    local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                  local_c = nullptr;
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x591:
                            iVar36 = st::fn_00403904((RecoveredRecord_AiEventClassTy_0064FB80 *)
                                                        &local_16c);
                            if (iVar36 != 0) {
                              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                              iVar36 = (*(code *)this_00->field_0000->field_0018)();
                              if ((iVar36 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                pDVar12 = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          AnonReceiver_0064A970::st::fn_004016B8
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     &local_34.flags);
                                if (0 < (int)pDVar12) {
                                  pDVar25 = &local_34;
                                  local_c = pDVar12;
                                  do {
                                    DAT_008118fc = 0;
                                    st::fn_00403882((short)pDVar25->flags,(short)local_15c,
                                                (byte *)local_158,(short)local_154,(short)local_150,
                                                (short)local_14c,(short)local_148,(short)local_144,
                                                (short)local_140,thunk_FUN_0064dac0,&local_13c);
                                    pDVar25 = (DArrayTy *)&pDVar25->iteratorIndex;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x592:
                            iVar36 = st::fn_00403F9E((short *)&local_16c);
                            if (iVar36 == 0) break;
                            iVar36 = st::fn_00402BA8(this_00,(short)pDStack_164,(short)local_160,
                                                (int)local_15c,(int)local_158,local_154,
                                                (char *)local_150,local_14c,local_148);
LAB_00655f44:
                            if (iVar36 != 0) {
LAB_00655f4c:
                              iVar36 = -1;
                              uVar17 = uVar32;
                              pcVar9 = st::fn_004057DB(iVar7);
                              st::fn_00405042(this_00,-0xab,pcVar9,uVar17,iVar36);
                            }
                            goto cf_common_join_00659A73;
                          }
cf_common_join_00652A99:
                          iVar36 = -1;
                          uVar17 = uVar32;
                          pcVar9 = st::fn_004057DB(iVar7);
                          st::fn_00405042(this_00,-0x7d,pcVar9,uVar17,iVar36);
cf_common_join_00659A73:
                          pDVar12 = (DArrayTy *)((int)&local_170->flags + 1);
cf_continue_loop_00659A80:
                          local_170 = pDVar12;
                          pAVar29 = local_178->field_000F;
                          pDVar12 = pAVar29->field_000C;
                        } while ((int)local_170 < (int)pDVar12);
                      }
                    }
                    goto LAB_00659aae;
                  }
                  iVar36 = -1;
                  pcVar9 = st::fn_004057DB(iVar7);
                  iVar7 = -0x7d;
                }
                st::fn_00405042(this_00,iVar7,pcVar9,uVar17,iVar36);
                *(char *)pAVar28 = '\x01';
                pAVar28->field_000B = 0;
              }
            }
            else if (pAVar28->field_000B != 0) {
              if (pAVar28->field_000B == 1) {
                *(char *)pAVar28 = '\0';
              }
              pAVar28->field_000B = pAVar28->field_000B + -1;
            }
LAB_00659aae:
            pDVar12 = this_00->field_04EE;
            local_14 = uVar32 + 1;
            bVar35 = local_14 < pDVar12->count;
          } while ((int)local_14 < (int)pDVar12->count);
        }
        uVar32 = local_19c;
        pAVar2 = (AnonShape_006B7830_769CA2DF *)this_00->field_04E2;
        iVar7 = pAVar2->field_0008;
        while ((int)uVar32 < iVar7) {
          st::fn_006B7830(pAVar2,iVar7 - 1);
          pAVar2 = (AnonShape_006B7830_769CA2DF *)this_00->field_04E2;
          iVar7 = pAVar2->field_0008;
        }
        if (local_194 == 0x456) {
          this_00->field_00D6 = this_00->field_00D6 + 1;
        }
        g_currentExceptionFrame = local_284.previous;
        return;
      }
      g_currentExceptionFrame = local_284.previous;
      if (local_180 != nullptr) {
        st::fn_006AE110(local_180);
      }
      local_180 = nullptr;
      st::fn_00405042(local_188,iVar7,&DAT_008016a0,local_14,-1);
    }
  }
  return;
code_r0x00653bbb:
  iVar36 = iVar36 + 1;
  pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
  if ((int)local_10 <= iVar36) goto cf_common_join_00659A73;
  goto LAB_00653bb7;
code_r0x00654366:
  iVar36 = iVar36 + 1;
  pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
  if (iVar7 <= iVar36) goto cf_common_join_00659A73;
  goto LAB_00654362;
code_r0x006540bd:
  iVar36 = iVar36 + 1;
  pDVar12 = (DArrayTy *)&pDVar12->iteratorIndex;
  if (iVar7 <= iVar36) goto cf_common_join_00659A73;
  goto LAB_006540b9;
}

