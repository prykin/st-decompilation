#include "st/generated.hpp"
// Generated translation unit: source/original/ai/ai_event.cpp

// 0064CD80 AiEventClassTy::InitData
#line 4 "decomp/ST.exe/functions/0064CD80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::InitData */

int __thiscall st::fn_0064CD80(AiEventClassTy *this,int *param_1)

{
  AiEventClassTy *this_00;
  int iVar3;
  DArrayTy *local_EAX_96;
  byte *puVar2;
  DArrayTy *pDVar4;
  uint *puVar3;
  DArrayTy *pDVar5;
  DArrayTy *local_EAX_393;
  int iVar6;
  int iVar7;
  int *piVar9;
  uint uVar10;
  byte *puVar11;
  void *pvVar12;
  int *piVar13;
  bool bVar14;
  InternalExceptionFrame local_4c;
  AiEventClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 == 0) {
    if (local_8 == nullptr) {
      piVar13 = nullptr;
    }
    else {
      piVar13 = reinterpret_cast<int *>(&local_8->field_008C);
    }
    piVar9 = param_1;
    memmove(piVar13, piVar9, 0x49f); /* compiler REP MOVS byte copy */
    local_8->field_0091 = 1;
    local_EAX_96 = st::fn_006B54F0(nullptr,5,5);
    this_00->field_05B3 = local_EAX_96;
    uVar10 = 0;
    do {
      st::fn_006B6020(this_00->field_05B3,uVar10,&CHAR_00h_008016a0);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 4);
    if (this_00->field_008C == '\0') {
      this_00->field_0088 = DAT_00808754;
      /* ST_CALLSITE[0064CE1F]: CALL dword ptr [EDX + 0x18] */
      iVar7 = this_00->vfunc_18();
      uVar10 = iVar7 * 2 + 2;
      this_00->field_00D2 = uVar10;
      if (0x18 < uVar10) {
        this_00->field_00D2 = 3;
      }
    }
    else {
      this_00->field_0088 = this_00->field_00DA;
    }
    iVar7 = this_00->field_0506;
    piVar13 = &this_00->field_04FA;
    if (piVar13 == nullptr) {
      uVar10 = 0;
    }
    else {
      uVar10 = *piVar13 * 5;
    }
    puVar2 = reinterpret_cast<byte *>((st::fn_006AAC10(uVar10)));
    this_00->field_0502 = puVar2;
    if (piVar13 == nullptr) {
      uVar10 = 0;
    }
    else {
      uVar10 = *piVar13 * 5;
    }
    puVar11 = (byte *)(iVar7 + 0x49e + (int)param_1);
    memmove(puVar2, puVar11, uVar10); /* compiler REP MOVS byte copy */
    pDVar4 = st::fn_006B0060(nullptr,(uint *)(this_00->field_04F2 + 0x49e + (int)param_1));
    this_00->field_04EE = pDVar4;
    puVar3 = st::fn_006C8680
                       (nullptr,(uint *)(this_00->field_04E6 + 0x49e + (int)param_1));
    this_00->field_04E2 = puVar3;
    pDVar5 = this_00->field_04EE;
    uVar10 = 0;
    if (0 < (int)pDVar5->count) {
      bVar14 = pDVar5->count != 0;
      do {
        if (bVar14) {
          pvVar12 = DArrayAt<void>(pDVar5, uVar10);
        }
        else {
          pvVar12 = nullptr;
        }
        if (STField<int>(pvVar12,0xf) != 0) {
          local_EAX_393 =
               st::fn_006B0060(nullptr,
                            (uint *)(STField<int>(pvVar12,0x13) + 0x49e + (int)param_1));
          STField<DArrayTy *>(pvVar12,0xf) = local_EAX_393;
        }
        pDVar5 = this_00->field_04EE;
        uVar10 = uVar10 + 1;
        bVar14 = uVar10 < pDVar5->count;
      } while ((int)uVar10 < (int)pDVar5->count);
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_00402E14(local_8);
  iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_event.cpp"),0x50,0,iVar3,st::mutable_c_string("%s"),
                             "AiEventClassTy::InitData");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\ai\\ai_event.cpp"),0x51);
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
  AllocationRecord_0065CD10 *pAVar3_mg1;
  int iVar4;
  uint *puVar5;
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
      pAVar3 = reinterpret_cast<AllocationRecord_0065CD10 *>(&local_8->field_008C);
    }
    /* ST_CALLSITE[0064D045]: CALL 0x00401ebf; direct=00401EBF EventDataPack; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/undefined4; source view only; no Ghidra override */
    pAVar3_mg1 = st::fn_00401EBF(pAVar3,param_1);
    *(undefined1 *)pAVar3_mg1 = 1;
    *(uint *)&pAVar3_mg1->field_0x4e = pAVar2->field_0088;
    g_currentExceptionFrame = local_4c.previous;
    return (undefined4 *)pAVar3_mg1;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_event.cpp"),0x66,0,errorCode,st::mutable_c_string("%s"),
                             "AiEventClassTy::PrepareToSave");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_event.cpp"),0x67);
  return nullptr;
}

// 0064D270 AiEventClassTy::__CreateObjPl
#line 4 "decomp/ST.exe/functions/0064D270/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::__CreateObjPl

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0064D270 -> 004B0F20 @ 0064D6D4 | 0064D270 -> 004B1040 @ 0064D679

   [STPrototypeRepairApplier] Propagated parameter 3.
   Evidence: 0064D270 -> 004B0F20 @ 0064D6D4 | 0064D270 -> 004B1040 @ 0064D679 | 0064D270 ->
   00675B10 @ 0064D376 | incoming stack slot is read as a int before its address is passed as a
   distinct output lifetime

   [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 0064D270 -> 004B0F20 @ 0064D6D4 | 0064D270 -> 004B1040 @ 0064D679 | 0064D270 ->
   00675B10 @ 0064D376 | incoming stack slot is read as a int before its address is passed as a
   distinct output lifetime

   [STPrototypeRepairApplier] Propagated parameter 5.
   Evidence: 0064D270 -> 004B0F20 @ 0064D6D4 | 0064D270 -> 004B1040 @ 0064D679 | incoming stack slot
   is read as a int before its address is passed as a distinct output lifetime */

int __thiscall
st::fn_0064D270
          (AiEventClassTy *this,uint param_1,short param_2,int param_3,int param_4,int param_5,
          uint param_6,uint param_7,char *param_8,undefined4 param_9,undefined4 param_10,
          int param_11,int param_12)

{
  bool bVar2;
  int local_EAX_54;
  int iVar3;
  int iVar5;
  char *_Source;
  int local_EAX_1070;
  int iVar4;
  int iVar6;
  uint uVar7;
  uint uVar8;
  Global_sub_004B1120_param_2Enum GVar10;
  InternalExceptionFrame local_e8;
  uint local_a4 [5];
  uint local_90;
  int local_8c;
  ushort local_88;
  ushort local_86;
  ushort local_84;
  ushort local_82;
  ushort local_80;
  uint local_7e;
  int local_7a;
  int local_76;
  uint local_72;
  char local_6e [15];
  uint local_5f;
  uint local_5b;
  AiEventClassTy *local_38;
  short local_34 [2];
  uint local_30;
  int local_2c;
  short local_28 [2];
  int local_24;
  uint local_20;
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

  local_EAX_54 = st::fn_0072D7F0(local_e8.jumpBuffer,0);
  if (local_EAX_54 != 0) {
    g_currentExceptionFrame = local_e8.previous;

    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_event.cpp"),0xcb,0,local_EAX_54,
                               st::mutable_c_string("%s"),"AiEventClassTy::__CreateObjPl");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_54,0,st::mutable_c_string("E:\\__titans\\ai\\ai_event.cpp"),0xcc);
    return local_EAX_54;
  }
  if ((param_2 < 1) || (0x28 < param_2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar7 = param_7;
  if ((bVar2) && (g_allPlayers_007FA174 != nullptr)) {
    if (((short)param_3 < 0) || (((short)param_4 < 0 || ((short)param_5 < 0)))) {
      uVar7 = param_1 & 0xffff;
      local_28[0] = 7;
      local_28[1] = 0;
      local_1c[0] = 7;
      local_1c[1] = 0;
      local_20 = STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(param_3)), (uint16_t)((short)g_bulkInitializedRecords_008087C7[uVar7].field_0024 + -3));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_30 = CONCAT22((short)(uVar7 * 9 >> 0x10),
                          (short)g_bulkInitializedRecords_008087C7[uVar7].field_0028 + -3);
      st::fn_00401906(reinterpret_cast<short *>(&local_20),reinterpret_cast<short *>(&local_30),local_28,local_1c);
      local_38->field_0088 = local_38->field_0088 * 0x41c64e6d + 0x3039;
      local_18 = local_38->field_0088 * 0x41c64e6d + 0x3039;
      local_38->field_0088 = local_18;

      iVar5 = st::fn_00401D9D((local_18 >> 0x10) % (uint)(int)local_28[0] + (short)local_20,
                                 (local_38->field_0088 >> 0x10) % (uint)(int)local_1c[0] +
                                 (short)local_30,1,reinterpret_cast<short *>(&param_3),reinterpret_cast<short *>(&param_4),
                                 reinterpret_cast<short *>(&param_5),(int)param_2);
    }
    else {

      iVar3 = st::fn_00404D3B((short)param_3,(short)param_4,(short)param_5);
      if (iVar3 == 0) {
        local_2c = param_3 + -1;
        local_24 = param_4 + -1;
        local_18 = 3;
        local_34[0] = 3;
        local_34[1] = 0;
        st::fn_00401906(reinterpret_cast<short *>(&local_2c),reinterpret_cast<short *>(&local_24),reinterpret_cast<short *>(&local_18),local_34);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = local_2c + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = local_24 + 1;
      }

      iVar5 = st::fn_00401D9D(param_3,param_4,(short)param_5,reinterpret_cast<short *>(&param_3),reinterpret_cast<short *>(&param_4),
                                 reinterpret_cast<short *>(&param_5),(int)param_2);
    }
    uVar7 = param_7;
    if (iVar5 != 0) {
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
        _Source = &CHAR_00h_008016a0;
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
      /* ST_CALLSITE[0064D5A0]: CALL 0x00404b97; direct=00404B97 STAllPlayersC::CreateBoat */
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
    local_8 = (short)param_3;
    local_c = (short)param_4;
    local_10 = (short)param_5;
    if (param_11 == 0) {
      iVar6 = 1;
      GVar10 = (Global_sub_004B1120_param_2Enum)param_2;
      uVar7 = param_1 & 0xffff;

      iVar5 = st::fn_00402829((short)param_3,local_c,local_10,GVar10,uVar7,nullptr,
                                 nullptr,nullptr,1,nullptr);
      if (iVar5 == 0) {

        iVar6 = st::fn_004019EC(uVar7,GVar10,&local_8,&local_c,&local_10,0,0);
      }
      if (iVar6 == 0) {
        g_currentExceptionFrame = local_e8.previous;
        return local_14;
      }
      if (((int)param_7 < 0) || (uVar8 = param_7, 7 < (int)param_7)) {
        uVar8 = uVar7;
      }
      st::fn_0040484A(uVar7,GVar10,local_8,local_c,local_10,param_6,uVar8,param_8,param_9,
                         param_10);
    }
    else {
      uVar8 = param_1 & 0xffff;

      local_EAX_1070 = st::fn_004019EC(uVar8,(int)param_2,&local_8,&local_c,&local_10,0,0);
      if (local_EAX_1070 != 0) {
        if (((int)uVar7 < 0) || (7 < (int)uVar7)) {
          uVar7 = uVar8;
        }

        st::fn_004018A2(uVar8,(int)param_2,local_8,local_c,local_10,param_6,uVar7,param_8,0,
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
  int local_EAX_39;
  int iVar3;
  int iVar5;
  int iVar4;
  InternalExceptionFrame local_6c;
  int local_28;
  uint local_24;
  short local_20 [4];
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;

  local_28 = -1;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_EAX_39 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  if (local_EAX_39 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_event.cpp"),0xee,0,local_EAX_39,
                               st::mutable_c_string("%s"),"AiEventClassTy::_CreateRCCont");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_39,0,st::mutable_c_string("E:\\__titans\\ai\\ai_event.cpp"),0xef);
    return local_EAX_39;
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
        st::fn_00401906(reinterpret_cast<short *>(&local_14),reinterpret_cast<short *>(&local_18),local_20,local_20 + 2);
        local_c = local_14 + 1;
        local_8 = local_18 + 1;
      }
      iVar5 = st::fn_00401D9D(local_c,local_8,(short)local_10,reinterpret_cast<short *>(&local_c),reinterpret_cast<short *>(&local_8)
                                 ,reinterpret_cast<short *>(&local_10),0xfe);
      if (iVar5 != 0) {
        if (param_7 == nullptr) {
          param_7 = &CHAR_00h_008016a0;
        }
        st::fn_00405740((uint)param_1,local_24,(int)param_2,param_6,(short)local_c,
                           (short)local_8,(short)local_10,param_7,0xffffffff,
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
  int local_EAX_38;
  int iVar3;
  int iVar5;
  int iVar4;
  InternalExceptionFrame local_68;
  int local_24;
  short local_20 [4];
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;

  local_24 = -1;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;

  local_EAX_38 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  if (local_EAX_38 != 0) {
    g_currentExceptionFrame = local_68.previous;

    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_event.cpp"),0x117,0,local_EAX_38,
                               st::mutable_c_string("%s"),"AiEventClassTy::_CreateArt");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_38,0,st::mutable_c_string("E:\\__titans\\ai\\ai_event.cpp"),0x118);
    return local_EAX_38;
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
        st::fn_00401906(reinterpret_cast<short *>(&local_14),reinterpret_cast<short *>(&local_18),local_20,local_20 + 2);
        local_c = local_14 + 1;
        local_8 = local_18 + 1;
      }

      iVar5 = st::fn_00401D9D(local_c,local_8,(short)local_10,reinterpret_cast<short *>(&local_c),reinterpret_cast<short *>(&local_8)
                                 ,reinterpret_cast<short *>(&local_10),0xfd);
      if (iVar5 != 0) {
        if (param_7 == nullptr) {
          param_7 = &CHAR_00h_008016a0;
        }
        if (param_6 == nullptr) {
          param_6 = &CHAR_00h_008016a0;
        }
        st::fn_00402059((int)param_1,(int)param_2,(short)local_c,(short)local_8,
                           (short)local_10,param_6,param_7,0xffffffff,param_8);
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
  int local_EAX_39;
  int iVar3;
  int iVar5;
  int iVar4;
  InternalExceptionFrame local_50;
  int local_c;
  int local_8;

  local_c = -1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_EAX_39 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (local_EAX_39 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_event.cpp"),0x13c,0,local_EAX_39,
                               st::mutable_c_string("%s"),"AiEventClassTy::_CreateDest");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_39,0,st::mutable_c_string("E:\\__titans\\ai\\ai_event.cpp"),0x13d);
    return local_EAX_39;
  }
  if ((param_1 == 0) || (bVar2 = false, param_1 == 1)) {
    bVar2 = true;
  }
  if (bVar2) {
    iVar3 = st::fn_00404D3B(param_3,param_4,param_5);
    if (iVar3 != 0) {
      local_8 = (int)param_3;
      iVar5 = st::fn_00403260(param_3,param_4,param_5,(int)param_1);
      if (iVar5 != 0) {
        if (param_7 == nullptr) {
          param_7 = &CHAR_00h_008016a0;
        }
        if (param_6 == nullptr) {
          param_6 = &CHAR_00h_008016a0;
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
  int local_EAX_64;
  int iVar3;
  int iVar5;
  int iVar4;
  InternalExceptionFrame local_6c;
  int local_28;
  uint local_24;
  short local_20 [4];
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;

  local_28 = -1;
  if (((short)param_6 < 0) || (7 < (short)param_6)) {
    param_6 = param_1;
  }
  local_24 = (uint)param_6;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;

  local_EAX_64 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  if (local_EAX_64 == 0) {
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
          st::fn_00401906(reinterpret_cast<short *>(&local_14),reinterpret_cast<short *>(&local_18),local_20,local_20 + 2);
          local_c = local_14 + 1;
          local_8 = local_18 + 1;
        }

        iVar5 = st::fn_00404D54(local_c,local_8,(short)local_10,reinterpret_cast<short *>(&local_c),
                                   reinterpret_cast<short *>(&local_8),reinterpret_cast<short *>(&local_10),1);
        if (iVar5 != 0) {
          if (param_7 == nullptr) {
            param_7 = &CHAR_00h_008016a0;
          }
          st::fn_0040105A((int)param_2,(uint)param_1,0,0,(short)local_c,(short)local_8,
                             (short)local_10,local_24,param_7,param_9);
          g_currentExceptionFrame = local_6c.previous;
          return 0;
        }
      }
    }
    g_currentExceptionFrame = local_6c.previous;
    return local_28;
  }
  g_currentExceptionFrame = local_6c.previous;

  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_event.cpp"),0x169,0,local_EAX_64,
                             st::mutable_c_string("%s"),"AiEventClassTy::_CreateMine");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(local_EAX_64,0,st::mutable_c_string("E:\\__titans\\ai\\ai_event.cpp"),0x16a);
  return local_EAX_64;
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
    st::fn_00405BCD(reinterpret_cast<int *>(&local_8));
    st::fn_00405BCD(reinterpret_cast<int *>(&local_c));
    st::fn_006A5E40(uVar1,0,st::mutable_c_string("E:\\__titans\\ai\\ai_event.cpp"),0x1b8);
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
  local_8 = st::fn_004053C1(param_2,param_3,(short)param_4,param_5,(byte)iVar1);
  *(int *)&local_8->field_0x4 = param_1;
  *(uint *)&local_8->field_0x77 = uVar2;
  /* ST_CALLSITE[0064E3B2]: CALL 0x004014c4; direct=004014C4 FltDataPack */
  local_c = st::fn_004014C4(local_8,local_20);
  st::fn_00405BCD(reinterpret_cast<int *>(&local_8));
  /* ST_CALLSITE[0064E3DE]: CALL 0x00401bc2; direct=00401BC2 STPlaySystemC::CreateGameObject */
  st::fn_00401BC2(g_playSystem_00802A38,900,st::machine_word_boundary_cast<undefined4>(local_20 + 1),st::machine_word_boundary_cast<undefined4>(&local_14),st::machine_word_boundary_cast<undefined4>(local_c),0);
  st::fn_00405BCD(reinterpret_cast<int *>(&local_c));
  if (local_14 == nullptr) {
    st::fn_006A5E40
              (-0xab,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_event.cpp"),0x1b4);
    uVar2 = local_20[2];
  }
  else {
    uVar2 = (uint)STField<ushort>(local_14,0x7d);
    local_20[2] = uVar2;
    /* ST_CALLSITE[0064E400]: CALL 0x00404da9; direct=00404DA9 _GetStaffGrpExch; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__cdecl;pointer:/SubmarineTitans/Recovered/DArrayTy;/undefined4 */
    array = st::pointer_boundary_cast<DArrayTy *>(st::fn_00404DA9(param_1));
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
  int local_EAX_52;
  uint uVar7;
  int iVar7;
  int local_EAX_327;
  char *pcVar8_mg40;
  short *psVar8;
  int local_EAX_488;
  char *pcVar8_mg3F;
  char *pcVar8_mg39;
  char *pcVar8_mg38;
  char *pcVar8_mg37;
  byte *puVar9;
  int iVar37_mgC4;
  char *pcVar8_mg36;
  char *pcVar8_mg35;
  int iVar37_mgBE;
  AiPlrClassTy *pAVar10;
  char *pcVar8_mg34;
  char *pcVar8_mg33;
  int ppbVar11;
  int ppbVar11_mg1;
  char *pcVar8_mg32;
  int local_EAX_2959;
  CPanelTy *iVar37_mgF4;
  int local_EAX_3277;
  int local_EAX_3358;
  int local_EAX_3452;
  int local_EAX_3527;
  int local_EAX_3643;
  int local_EAX_3752;
  int local_EAX_3857;
  int local_EAX_3907;
  int local_EAX_4002;
  int local_EAX_4052;
  int local_EAX_4139;
  int local_EAX_4219;
  int local_EAX_4307;
  int local_EAX_4445;
  int iVar11;
  int iVar37_mgDF;
  int local_EAX_4850;
  int iVar37_mgD7;
  char *pcVar8_mg3A;
  int iVar37_mgD3;
  uint *puVar12;
  char *pcVar8_mg31;
  char *pcVar8_mg30;
  int local_EAX_5500;
  int local_EAX_5668;
  int local_EAX_5904;
  int local_EAX_5961;
  int local_EAX_6159;
  int local_EAX_6230;
  int local_EAX_6287;
  int local_EAX_6392;
  int local_EAX_6449;
  int local_EAX_6742;
  int local_EAX_6799;
  int local_EAX_6856;
  int local_EAX_6968;
  int local_EAX_7118;
  int local_EAX_7204;
  int local_EAX_7261;
  int local_EAX_7336;
  int local_EAX_7431;
  int local_EAX_7569;
  int local_EAX_7731;
  int iVar37_mg118;
  int local_EAX_8204;
  int local_EAX_8314;
  int local_EAX_8446;
  uint *puVar13;
  int local_EAX_8597;
  char *pcVar8_mg3E;
  int local_EAX_11843;
  int local_EAX_11892;
  int local_EAX_11906;
  int local_EAX_12115;
  RecoveredRecord_00423300_67884733 *pRVar14;
  int local_EAX_12727;
  char *pcVar8_mg3D;
  dword dVar14;
  dword *pdVar15;
  DArrayTy *pDVar16;
  ushort *puVar17;
  int local_EAX_13452;
  char *pcVar8_mg3C;
  int local_EAX_13781;
  char *pcVar8_mg2F;
  char *pcVar8_mg3B;
  int local_EAX_14486;
  int local_EAX_14928;
  char *pcVar8_mg2E;
  int iVar37_mg9E;
  char *pcVar8_mg2D;
  int iVar37_mg97;
  char *pcVar8_mg2C;
  int iVar37_mg94;
  RecoveredRecordView_0067B260_B3B2F7BB *pRVar18;
  char *pcVar8_mg2B;
  int iVar37_mg8B;
  char *pcVar8_mg28;
  char *pcVar8_mg27;
  char *pcVar8_mg26;
  int iVar37_mg88;
  RecoveredRecordView_00679600_4B4DB6B6 *pRVar19;
  char *pcVar8_mg2A;
  int local_EAX_17905;
  int iVar37_mg85;
  char *pcVar8_mg29;
  char *pcVar8_mg25;
  char *pcVar8_mg24;
  int local_EAX_18546;
  RecoveredRecord_00423300_67884733 *pRVar14_mg1F;
  RecoveredRecordView_0065DA10_5A1C53AF *pRVar21_mg1;
  char *pcVar8_mg22;
  int local_EAX_18755;
  RecoveredRecord_00423300_67884733 *pRVar14_mg1E;
  RecoveredRecordView_0065DA10_5A1C53AF *pRVar21;
  char *pcVar8_mg21;
  int local_EAX_18964;
  RecoveredRecord_00423300_67884733 *pRVar14_mg1D;
  char *pcVar8_mg20;
  int local_EAX_19222;
  int local_EAX_19384;
  STGroupBoatC *pSVar20;
  int local_EAX_19546;
  RecoveredRecord_00423300_67884733 *pRVar14_mg1C;
  char *pcVar8_mg1F;
  int local_EAX_19855;
  RecoveredRecord_00423300_67884733 *pRVar14_mg1B;
  RecoveredRecordView_0065D590_F2A3738B *pRVar22;
  char *pcVar8_mg1E;
  RecoveredRecord_00423300_67884733 *pRVar14_mg1A;
  char *pcVar8_mg1D;
  RecoveredRecord_00423300_67884733 *pRVar14_mg18;
  char *pcVar8_mg1B;
  int local_EAX_20759;
  RecoveredRecord_00423300_67884733 *pRVar14_mg19;
  char *pcVar8_mg1C;
  RecoveredRecord_00423300_67884733 *pRVar14_mg17;
  char *pcVar8_mg19;
  int local_EAX_21479;
  RecoveredRecord_00423300_67884733 *pRVar14_mg16;
  char *pcVar8_mg18;
  RecoveredRecord_00423300_67884733 *pRVar14_mg15;
  char *pcVar8_mg17;
  int local_EAX_22002;
  RecoveredRecord_00423300_67884733 *pRVar14_mg14;
  char *pcVar8_mg16;
  int local_EAX_22325;
  RecoveredRecord_00423300_67884733 *pRVar14_mg13;
  char *pcVar8_mg15;
  int local_EAX_22663;
  RecoveredRecord_00423300_67884733 *pRVar14_mg12;
  char *pcVar8_mg14;
  int local_EAX_22928;
  RecoveredRecord_00423300_67884733 *pRVar14_mgD;
  char *pcVar8_mgE;
  RecoveredRecord_00423300_67884733 *pRVar14_mgC;
  char *pcVar8_mgD;
  RecoveredRecord_00423300_67884733 *pRVar14_mgB;
  char *pcVar8_mgC;
  RecoveredRecord_00423300_67884733 *pRVar14_mgA;
  char *pcVar8_mgB;
  RecoveredRecord_00423300_67884733 *pRVar14_mg9;
  char *pcVar8_mgA;
  int local_EAX_24571;
  RecoveredRecord_00423300_67884733 *pRVar14_mg8;
  char *pcVar8_mg9;
  RecoveredRecord_00423300_67884733 *pRVar14_mg7;
  char *pcVar8_mg8;
  RecoveredRecord_00423300_67884733 *pRVar14_mg11;
  char *pcVar8_mg13;
  int local_EAX_25481;
  RecoveredRecord_00423300_67884733 *pRVar14_mg10;
  char *pcVar23;
  char *pcVar8_mg11;
  int local_EAX_25882;
  RecoveredRecord_00423300_67884733 *pRVar14_mgF;
  char *pcVar8_mg10;
  int local_EAX_26279;
  RecoveredRecord_00423300_67884733 *pRVar14_mgE;
  char *pcVar8_mgF;
  int local_EAX_26593;
  RecoveredRecord_00423300_67884733 *pRVar14_mg6;
  char *pcVar8_mg7;
  int iVar36;
  RecoveredRecord_00423300_67884733 *pRVar14_mg1;
  char *pcVar8_mg1;
  int local_EAX_27539;
  RecoveredRecord_00423300_67884733 *pRVar14_mg5;
  char *pcVar8_mg6;
  int local_EAX_27909;
  RecoveredRecord_00423300_67884733 *pRVar14_mg4;
  char *pcVar8_mg5;
  int local_EAX_28249;
  RecoveredRecord_00423300_67884733 *pRVar14_mg3;
  char *pcVar8_mg4;
  int local_EAX_28574;
  RecoveredRecord_00423300_67884733 *pRVar14_mg2;
  char *pcVar8_mg3;
  RecoveredRecord_00423300_67884733 *pRVar14_mg0;
  AiFltClassTy *pAVar24;
  char *pcVar8_mg0;
  char *pcVar8_mg23;
  short sVar25;
  CPanelTy *pCVar26;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_00;
  short sVar27;
  ushort uVar31;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;
  uint uVar28;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  DArrayTy *extraout_EDX_01;
  DArrayTy *pDVar29;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_02;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_03;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_04;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_05;
  uint uVar30;
  AnonShape_00652810_4F58F813 *pAVar32;
  AnonNested_00652810_000F_9CE8027E *pAVar33;
  STFishC *pSVar34;
  uint uVar35;
  uint **ppuVar37;
  bool bVar38;
  int iVar39;
  AiFltClassTyVTable *pAVar40;
  byte local_484 [256];
  byte local_384 [256];
  InternalExceptionFrame local_284;
  uint local_240 [2];
  byte local_237;
  uint **local_236;
  uint *local_20c;
  ushort local_208;
  ushort local_206;
  uint local_204;
  ushort local_200;
  int local_1fe;
  ushort local_1f6;
  ushort local_1f4;
  ushort local_1f2;
  byte local_1f0;
  char local_1ef [15];
  uint local_1e0;
  byte local_1ce;
  uint local_1c0 [4];
  int local_1b0;
  uint local_1a0;
  uint local_19c;
  int local_198;
  int local_194;
  DArrayTy *local_190;
  DArrayTy *local_18c;
  AiEventClassTy *local_188;
  uint *local_184;
  DArrayTy *local_180;
  RecoveredRecordView_0068E690_5404D20D *local_17c;
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
  byte local_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  byte local_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  ushort local_4e;
  undefined1 uStack_4c;
  char cStack_4b;
  uint local_4a;
  ushort local_3b;
  int local_39;
  uint output_values_neg_34 [8];
  uint local_14;
  AiFltClassTy *local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;

  local_180 = nullptr;
  local_198 = 0;
  if ((g_allPlayers_007FA174 != nullptr) &&
     /* ST_CALLSITE[00652844]: CALL 0x0040371a; direct=0040371A AiEventClassTy::sub_0065BD70 */
     (local_188 = this, local_EAX_52 = st::fn_0040371A(this,message,0), -1 < local_EAX_52)) {
    local_194 = local_EAX_52;
    /* ST_CALLSITE[0065285D]: CALL dword ptr [EDX + 0x18] */
    uVar7 = this->vfunc_18();
    this->field_052B = uVar7;
    if ((local_EAX_52 != 0x456) ||
       ((g_playSystem_00802A38->field_00E4 % 0x19 == this->field_00D2 ||
        (g_playSystem_00802A38->field_00E4 == 1)))) {
      local_19c = this->field_04E2[2];
      local_284.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_284;

      iVar7 = st::fn_0072D7F0(local_284.jumpBuffer,0);
      this_00 = local_188;
      if (iVar7 == 0) {
        local_14 = 0;
        pDVar16 = local_188->field_04EE;
        bVar38 = pDVar16->count != 0;
        if (0 < (int)pDVar16->count) {
          do {
            if (bVar38) {
              pAVar32 = DArrayAt<AnonShape_00652810_4F58F813>(pDVar16, local_14);
            }
            else {
              pAVar32 = nullptr;
            }
            local_178 = pAVar32;
            if (*(char *)pAVar32 == '\0') {
              if (*(int *)&pAVar32->field_0x5 == local_194) {
                if (local_198 == 0) {
                  /* ST_CALLSITE[00652933]: CALL 0x0040371a; direct=0040371A AiEventClassTy::sub_0065BD70 */
                  st::fn_0040371A(this_00,message,1);
                  local_198 = 1;
                }

                local_EAX_327 =
                     st::fn_00402923(reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                        reinterpret_cast<RecoveredGlobalRecordView_00848A14 *>(&this_00->field_04FA),
                                        (int)*(short *)&pAVar32->field_0x9,reinterpret_cast<short *>(&local_16c));
                uVar35 = local_14;
                if (local_EAX_327 < 0) {
                  iVar39 = this_00->field_0084;
                  pcVar8_mg40 = &this_00->field_0004;
                }
                else {
                  if (local_9c == '\b') {
                    if (pDStack_164 != nullptr) {
                      *(char *)pAVar32 = '\x01';
                      pAVar32->field_000B = 0;
                      pAVar33 = pAVar32->field_000F;
                      local_170 = nullptr;
                      local_174 = 0;
                      pDVar16 = pAVar33->field_000C;
                      if (0 < (int)pDVar16) {
                        do {
                          if (local_170 < pDVar16) {
                            psVar8 = (short *)(pAVar33->field_0008 * (int)local_170 +
                                              pAVar33->field_001C);
                          }
                          else {
                            psVar8 = nullptr;
                          }

                          local_EAX_488 =
                               st::fn_00402923(reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                  reinterpret_cast<RecoveredGlobalRecordView_00848A14 *>(&this_00->field_04FA),(int)*psVar8,
                                                  reinterpret_cast<short *>(&local_16c));
                          if (local_EAX_488 < 0) {
                            st::fn_00405042(this_00,local_EAX_488,&this_00->field_0004,local_14,
                                               -1);
                            goto cf_common_join_00659A73;
                          }
                          if (local_EAX_488 != 0x19) {
                            local_174 = 0;
                          }
                          if (0x593 < local_EAX_488) {
                            if (0x5c8 < local_EAX_488) {
                              if (local_EAX_488 < 0x76d) {
                                if (local_EAX_488 != 0x76c) {
                                  switch(local_EAX_488) {
                                  case 0x5dc:

                                    iVar39 = st::fn_00401C67(reinterpret_cast<short *>(&local_16c));
                                    if (iVar39 != 0) {
                                      /* ST_CALLSITE[00656FFE]: CALL dword ptr [EAX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[00657023]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {

                                            st::fn_00403003(*puVar12,reinterpret_cast<char *>(local_15c),
                                                               (ushort)local_158,(char)local_154,
                                                               (ushort)local_150,(char)local_14c,
                                                               (uint)local_148);
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5dd:

                                    local_EAX_18546 =
                                         st::fn_004048A4(reinterpret_cast<RecoveredRecord_00651120_F461859C *>(&local_16c));
                                    if (local_EAX_18546 != 0) {
                                      /* ST_CALLSITE[00657096]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[006570BB]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[006570E4]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg1F = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                              (ushort)local_15c));
                                            if (pRVar14_mg1F ==
                                                nullptr) {
                                              st::fn_00405042(this_00,-0xaa,&CHAR_00h_008016a0,
                                                                 local_14,*puVar12);
                                            }
                                            else {
                                              /* ST_CALLSITE[00657109]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_0065DA10_5A1C53AF; signature=__fastcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_0065DA10_5A1C53AF;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pRVar21_mg1 = st::pointer_boundary_cast<RecoveredRecordView_0065DA10_5A1C53AF *>(st::fn_00405902(pRVar14_mg1F));
                                              if (pRVar21_mg1 ==
                                                  nullptr) {
                                                uVar35 = *puVar12;
                                                uVar30 = local_14;
                                                pcVar8_mg22 = st::fn_004057DB(local_EAX_488);
                                                st::fn_00405042(this_00,-0xab,pcVar8_mg22,uVar30,
                                                                   uVar35);
                                              }
                                              else {
                                                /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                                                st::fn_0040130C(pRVar21_mg1,extraout_EDX_04);
                                              }
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5de:

                                    local_EAX_18755 =
                                         st::fn_00401FBE(reinterpret_cast<RecoveredRecord_00651160_26346523 *>(&local_16c));
                                    if (local_EAX_18755 != 0) {
                                      /* ST_CALLSITE[00657167]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[0065718C]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[006571B5]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg1E = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                              (ushort)local_15c));
                                            if (pRVar14_mg1E ==
                                                nullptr) {
                                              st::fn_00405042(this_00,-0xaa,&CHAR_00h_008016a0,
                                                                 local_14,*puVar12);
                                            }
                                            else {
                                              /* ST_CALLSITE[006571DA]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_0065DA10_5A1C53AF; signature=__fastcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_0065DA10_5A1C53AF;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pRVar21 = st::pointer_boundary_cast<RecoveredRecordView_0065DA10_5A1C53AF *>(st::fn_00405902(pRVar14_mg1E));
                                              if (pRVar21 ==
                                                  nullptr) {
                                                uVar35 = *puVar12;
                                                uVar30 = local_14;
                                                pcVar8_mg21 = st::fn_004057DB(local_EAX_488);
                                                st::fn_00405042(this_00,-0xab,pcVar8_mg21,uVar30,
                                                                   uVar35);
                                              }
                                              else {
                                                /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                                                st::fn_00401EF1(pRVar21,extraout_EDX_05);
                                              }
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5df:

                                    local_EAX_18964 =
                                         st::fn_00401FBE(reinterpret_cast<RecoveredRecord_00651160_26346523 *>(&local_16c));
                                    if (local_EAX_18964 != 0) {
                                      /* ST_CALLSITE[00657238]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_8 = (DArrayTy *)

                                                  /* ST_CALLSITE[0065725D]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_8) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[00657286]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg1D = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                              (ushort)local_15c));
                                            if (pRVar14_mg1D ==
                                                nullptr) {
                                              st::fn_00405042(this_00,-0xaa,&CHAR_00h_008016a0,
                                                                 local_14,*puVar12);
                                            }
                                            else {
                                              local_17c = STPointerBoundaryCast<RecoveredRecordView_0068E690_5404D20D *>(st::fn_00405902(pRVar14_mg1D));
                                              if (local_17c ==
                                                  nullptr) {
                                                uVar35 = *puVar12;
                                                uVar30 = local_14;
                                                pcVar8_mg20 = st::fn_004057DB(local_EAX_488);
                                                st::fn_00405042(this_00,-0xab,pcVar8_mg20,uVar30,
                                                                   uVar35);
                                              }
                                              else {
                                                /* ST_CALLSITE[006572DC]: CALL 0x00404da9; direct=00404DA9 _GetStaffGrpExch; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__cdecl;pointer:/SubmarineTitans/Recovered/DArrayTy;/undefined4 */
                                                pDVar16 = st::pointer_boundary_cast<DArrayTy *>(st::fn_00404DA9(*puVar12));
                                                if (pDVar16 != nullptr) {
                                                  st::fn_004020EA(local_17c,pDVar16,0);
                                                  st::fn_006AE110(pDVar16);
                                                }
                                              }
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_8 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                          } while (local_8 != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e0:

                                    local_EAX_19222 =
                                         st::fn_00403AA3(reinterpret_cast<RecoveredRecord_006511A0_EA666092 *>(&local_16c));
                                    if (local_EAX_19222 != 0) {
                                      /* ST_CALLSITE[0065733A]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[0065735F]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar20 = st::fn_00405CF9((char)*puVar12,
                                                                         (ushort)local_15c);
                                            if (pSVar20 == nullptr) {
                                              st::fn_00405042(this_00,-0xaa,&CHAR_00h_008016a0,
                                                                 local_14,*puVar12);
                                            }
                                            else {
                                              st::fn_0040460B(pSVar20,(uint)local_158);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e1:

                                    local_EAX_19384 =
                                         st::fn_00403AA3(reinterpret_cast<RecoveredRecord_006511A0_EA666092 *>(&local_16c));
                                    if (local_EAX_19384 != 0) {
                                      /* ST_CALLSITE[006573DC]: CALL dword ptr [EAX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[00657401]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar20 = st::fn_00405CF9((char)*puVar12,
                                                                         (ushort)local_15c);
                                            if (pSVar20 == nullptr) {
                                              st::fn_00405042(this_00,-0xaa,&CHAR_00h_008016a0,
                                                                 local_14,*puVar12);
                                            }
                                            else {
                                              st::fn_00403788(pSVar20,(uint)local_158);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e2:

                                    local_EAX_19546 =
                                         st::fn_00405CB3(reinterpret_cast<RecoveredRecord_006511E0_D143FD4C *>(&local_16c));
                                    if (local_EAX_19546 != 0) {
                                      /* ST_CALLSITE[0065747E]: CALL dword ptr [EAX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[006574A3]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[006574CC]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg1C = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                              (ushort)local_15c));
                                            if (pRVar14_mg1C ==
                                                nullptr) {
                                              st::fn_00405042(this_00,-0xaa,&CHAR_00h_008016a0,
                                                                 local_14,*puVar12);
                                            }
                                            else {
                                              local_17c = STPointerBoundaryCast<RecoveredRecordView_0068E690_5404D20D *>(st::fn_00405902(pRVar14_mg1C));
                                              if (local_17c ==
                                                  nullptr) {
                                                uVar35 = *puVar12;
                                                uVar30 = local_14;
                                                pcVar8_mg1F = st::fn_004057DB(local_EAX_488);
                                                st::fn_00405042(this_00,-0xab,pcVar8_mg1F,uVar30,
                                                                   uVar35);
                                              }
                                              else {
                                                pAVar10 = nullptr;
                                                local_8 = nullptr;
                                                if (g_allPlayers_007FA174 != nullptr) {
                                                  pAVar10 = st::fn_00401DC5((char)*puVar12);
                                                }
                                                if (pAVar10 != nullptr) {
                                                  local_8 = STPointerBoundaryCast<DArrayTy *>(st::fn_00405A06(pAVar10,reinterpret_cast<byte *>(local_158)));
                                                }
                                                if (local_8 == nullptr) {
                                                  st::fn_00405042(this_00,-4,reinterpret_cast<char *>(local_158),
                                                                     local_14,*puVar12);
                                                }
                                                else {

                                                  st::fn_00405EC5(local_8,local_17c);
                                                }
                                              }
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e3:

                                    local_EAX_19855 =
                                         st::fn_00404FED(reinterpret_cast<RecoveredRecord_00651250_A6EBE57F *>(&local_16c));
                                    if (local_EAX_19855 != 0) {
                                      /* ST_CALLSITE[006575B3]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[006575D8]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[00657601]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg1B = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                              (ushort)local_15c));
                                            if (pRVar14_mg1B ==
                                                nullptr) {
                                              st::fn_00405042(this_00,-0xaa,&CHAR_00h_008016a0,
                                                                 local_14,*puVar12);
                                            }
                                            else {
                                              /* ST_CALLSITE[00657626]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_0065D590_F2A3738B; signature=__fastcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_0065D590_F2A3738B;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pRVar22 = st::pointer_boundary_cast<RecoveredRecordView_0065D590_F2A3738B *>(st::fn_00405902(pRVar14_mg1B));
                                              if (pRVar22 ==
                                                  nullptr) {
                                                uVar35 = *puVar12;
                                                uVar30 = local_14;
                                                pcVar8_mg1E = st::fn_004057DB(local_EAX_488);
                                                st::fn_00405042(this_00,-0xab,pcVar8_mg1E,uVar30,
                                                                   uVar35);
                                              }
                                              else {
                                                st::fn_004037E7(pRVar22);
                                              }
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e4:

                                    iVar39 = st::fn_0040155A(reinterpret_cast<short *>(&local_16c));
                                    if (iVar39 != 0) {
                                      /* ST_CALLSITE[00657684]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[006576A9]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[006576D2]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg1A = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                              (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg1A ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg1D = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_006577ae:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg1D,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[006576F3]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg1A));
                                              if (((pAVar24 == nullptr) ||
                                                  (pAVar24->field_007B == 1)) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg1D = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_006577ae;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              uStack_59 = SUB41(local_14c,0);
                                              local_58 = (undefined1)((uint)local_14c >> 8);
                                              local_60 = STPiece<0,1>(local_158);
                                              iVar39 = (int)local_144 * 0x19;
                                              uStack_5b = SUB41(local_150,0);
                                              uStack_5a = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 1;
                                              uStack_57 = SUB41(local_148,0);
                                              uStack_56 = (undefined1)((uint)local_148 >> 8);
                                              uStack_55 = (undefined1)((uint)local_148 >> 0x10);
                                              uStack_54 = (undefined1)((uint)local_148 >> 0x18);
                                              uStack_53 = (undefined1)iVar39;
                                              uStack_52 = (undefined1)((uint)iVar39 >> 8);
                                              uStack_51 = (undefined1)((uint)iVar39 >> 0x10);
                                              uStack_50 = (undefined1)((uint)iVar39 >> 0x18);
                                              iVar39 = local_140 * 0x19;
                                              uStack_4f = (undefined1)iVar39;
                                              local_4e = (undefined2)((uint)iVar39 >> 8);
                                              uStack_4c = (undefined1)((uint)iVar39 >> 0x18);
                                              /* ST_CALLSITE[00657791]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e5:

                                    local_EAX_20759 = st::fn_004013B6(reinterpret_cast<short *>(&local_16c));
                                    if (local_EAX_20759 != 0) {
                                      /* ST_CALLSITE[0065793B]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[00657960]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[00657989]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg19 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                              (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg19 ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg1C = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_00657a41:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg1C,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[006579AA]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg19));
                                              if (((pAVar24 == nullptr) ||
                                                  (pAVar24->field_007B == 1)) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg1C = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_00657a41;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              uStack_59 = SUB41(local_14c,0);
                                              local_58 = (undefined1)((uint)local_14c >> 8);
                                              local_60 = STPiece<0,1>(local_158);
                                              iVar39 = (int)local_148 * 0x19;
                                              uStack_5b = SUB41(local_150,0);
                                              uStack_5a = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 2;
                                              uStack_57 = (undefined1)iVar39;
                                              uStack_56 = (undefined1)((uint)iVar39 >> 8);
                                              uStack_55 = (undefined1)((uint)iVar39 >> 0x10);
                                              uStack_54 = (undefined1)((uint)iVar39 >> 0x18);
                                              /* ST_CALLSITE[00657A24]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e6:

                                    iVar39 = st::fn_004015E6(reinterpret_cast<short *>(&local_16c));
                                    if (iVar39 != 0) {
                                      /* ST_CALLSITE[006577EB]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[00657810]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[00657839]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg18 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                              (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg18 ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg1B = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_006578fe:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg1B,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[0065785A]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg18));
                                              if (((pAVar24 == nullptr) ||
                                                  (pAVar24->field_007B == 1)) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg1B = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_006578fe;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
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
                                              iVar39 = (int)local_144 * 0x19;
                                              local_68[0] = 3;
                                              uStack_57 = (undefined1)iVar39;
                                              uStack_56 = (undefined1)((uint)iVar39 >> 8);
                                              uStack_55 = (undefined1)((uint)iVar39 >> 0x10);
                                              uStack_54 = (undefined1)((uint)iVar39 >> 0x18);
                                              /* ST_CALLSITE[006578E1]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e7:

                                    iVar39 = st::fn_00405966(reinterpret_cast<RecoveredRecord_AiEventClassTy_006515B0 *>(&local_16c));
                                    if (iVar39 != 0) {
                                      /* ST_CALLSITE[00657A7E]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[00657AA3]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[00657ACC]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg17 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                              (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg17 ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg19 = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_00657bce:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg19,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[00657AED]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg17));
                                              if ((pAVar24 == nullptr) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg19 = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_00657bce;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              uVar35 = (uint)local_158 & 0x3fffffff;
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_60 = (undefined1)uVar35;
                                              uStack_5f = (undefined1)(uVar35 >> 8);
                                              uStack_5e = (undefined1)(uVar35 >> 0x10);
                                              uStack_5d = (undefined1)(uVar35 >> 0x18);
                                              uVar35 = (uint)local_154 & 0x3fffffff;
                                              uStack_54 = SUB41(local_14c,0);
                                              uStack_53 = (undefined1)((uint)local_14c >> 8);
                                              uStack_5c = (undefined1)uVar35;
                                              uStack_5b = (undefined1)(uVar35 >> 8);
                                              uStack_5a = (undefined1)(uVar35 >> 0x10);
                                              uStack_59 = (undefined1)(uVar35 >> 0x18);
                                              uVar35 = (uint)local_150 & 0x3fffffff;
                                              local_4e = (undefined2)local_140;
                                              local_58 = (undefined1)uVar35;
                                              uStack_57 = (undefined1)(uVar35 >> 8);
                                              uStack_56 = (undefined1)(uVar35 >> 0x10);
                                              uStack_55 = (undefined1)(uVar35 >> 0x18);
                                              uStack_52 = SUB41(local_148,0);
                                              uStack_51 = (undefined1)((uint)local_148 >> 8);
                                              local_68[0] = 4;
                                              uStack_50 = SUB41(local_144,0);
                                              uStack_4f = (undefined1)((uint)local_144 >> 8);
                                              uStack_4c = (undefined1)local_13c;
                                              pcVar23 = local_138;
                                              if (local_138 == nullptr) {
                                                pcVar23 = &CHAR_00h_008016a0;
                                              }
                                              st::fn_0072E340(&cStack_4b,pcVar23,0xe);
                                              /* ST_CALLSITE[00657BB1]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e8:

                                    local_EAX_21479 =
                                         st::fn_00401802(reinterpret_cast<RecoveredRecord_00651730_E89B8086 *>(&local_16c));
                                    if (local_EAX_21479 != 0) {
                                      /* ST_CALLSITE[00657C0B]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[00657C30]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[00657C59]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg16 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                              (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg16 ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg18 = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_00657ccf:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg18,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[00657C77]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg16));
                                              if ((pAVar24 == nullptr) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg18 = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_00657ccf;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_68[0] = 5;
                                              /* ST_CALLSITE[00657CB2]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e9:

                                    iVar39 = st::fn_004054AC(reinterpret_cast<RecoveredRecordView_00651770_AFECD81B *>(&local_16c)
                                                  );
                                    if (iVar39 != 0) {
                                      /* ST_CALLSITE[00657D0C]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[00657D31]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[00657D5A]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg15 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                              (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg15 ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg17 = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_00657dd9:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg17,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[00657D78]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg15));
                                              if ((pAVar24 == nullptr) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg17 = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_00657dd9;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_60 = STPiece<0,1>(local_158);
                                              local_68[0] = 6;
                                              /* ST_CALLSITE[00657DBC]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5ea:

                                    local_EAX_22002 = st::fn_00401226(reinterpret_cast<short *>(&local_16c));
                                    if (local_EAX_22002 != 0) {
                                      /* ST_CALLSITE[00657E16]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[00657E3B]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[00657E64]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg14 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                              (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg14 ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg16 = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_00657f1c:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg16,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[00657E85]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg14));
                                              if (((pAVar24 == nullptr) ||
                                                  (pAVar24->field_007B == 1)) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg16 = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_00657f1c;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              uStack_59 = SUB41(local_14c,0);
                                              local_58 = (undefined1)((uint)local_14c >> 8);
                                              local_60 = STPiece<0,1>(local_158);
                                              iVar39 = (int)local_148 * 0x19;
                                              uStack_5b = SUB41(local_150,0);
                                              uStack_5a = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 7;
                                              uStack_57 = (undefined1)iVar39;
                                              uStack_56 = (undefined1)((uint)iVar39 >> 8);
                                              uStack_55 = (undefined1)((uint)iVar39 >> 0x10);
                                              uStack_54 = (undefined1)((uint)iVar39 >> 0x18);
                                              /* ST_CALLSITE[00657EFF]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5eb:

                                    local_EAX_22325 =
                                         st::fn_00401429(reinterpret_cast<RecoveredRecord_00651880_B0B7072C *>(&local_16c));
                                    if (local_EAX_22325 != 0) {
                                      /* ST_CALLSITE[00657F59]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[00657F7E]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[00657FA7]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg13 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                              (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg13 ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg15 = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_0065806e:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg15,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[00657FC8]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg13));
                                              if (((pAVar24 == nullptr) ||
                                                  (pAVar24->field_007B == 1)) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg15 = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_0065806e;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
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
                                              /* ST_CALLSITE[00658051]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5ec:

                                    local_EAX_22663 =
                                         st::fn_004047AA(reinterpret_cast<RecoveredRecord_006518C0_AF8C168C *>(&local_16c));
                                    if (local_EAX_22663 != 0) {
                                      /* ST_CALLSITE[006580AB]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[006580D0]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[006580F9]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg12 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                              (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg12 ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg14 = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_00658177:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg14,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[00658117]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg12));
                                              if (((pAVar24 == nullptr) ||
                                                  (pAVar24->field_007B == 1)) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg14 = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_00658177;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_68[0] = 9;
                                              /* ST_CALLSITE[0065815A]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5ed:

                                    iVar39 = st::fn_00401C58(reinterpret_cast<short *>(&local_16c));
                                    if (iVar39 != 0) {
                                      /* ST_CALLSITE[00658A3B]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[00658A60]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[00658A89]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg11 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                              (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg11 ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg13 = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_00658b70:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg13,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[00658AAA]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg11));
                                              if (((pAVar24 == nullptr) ||
                                                  (pAVar24->field_007B == 1)) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg13 = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_00658b70;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5e = SUB41(local_154,0);
                                              uStack_5d = (undefined1)((uint)local_154 >> 8);
                                              uStack_50 = SUB41(local_14c,0);
                                              uStack_4f = (undefined1)((uint)local_14c >> 8);
                                              local_4e = (undefined2)((uint)local_14c >> 0x10);
                                              local_60 = SUB41(local_158,0);
                                              uStack_5f = (undefined1)((uint)local_158 >> 8);
                                              iVar39 = (int)local_148 * 0x19;
                                              uStack_5c = SUB41(local_150,0);
                                              uStack_5b = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0x34;
                                              uStack_5a = (undefined1)iVar39;
                                              uStack_59 = (undefined1)((uint)iVar39 >> 8);
                                              local_58 = (undefined1)((uint)iVar39 >> 0x10);
                                              uStack_57 = (undefined1)((uint)iVar39 >> 0x18);
                                              uStack_54 = (undefined1)local_140;
                                              uStack_53 = (undefined1)(local_140 >> 8);
                                              uStack_56 = SUB41(local_144,0);
                                              uStack_55 = (undefined1)((uint)local_144 >> 8);
                                              uStack_52 = (undefined1)local_13c;
                                              uStack_51 = (undefined1)((uint)local_13c >> 8);
                                              /* ST_CALLSITE[00658B53]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5ee:

                                    local_EAX_25481 =
                                         st::fn_004011B8(reinterpret_cast<RecoveredRecord_AiEventClassTy_00651ED0 *>(&local_16c));
                                    if (local_EAX_25481 != 0) {
                                      /* ST_CALLSITE[00658BAD]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[00658BD2]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[00658BFB]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg10 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                              (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg10 ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg11 = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_00658d01:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg11,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[00658C1C]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg10));
                                              if (((pAVar24 == nullptr) ||
                                                  (pAVar24->field_007B == 1)) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg11 = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_00658d01;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
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
                                              pcVar23 = local_148;
                                              if (local_148 == nullptr) {
                                                pcVar23 = &CHAR_00h_008016a0;
                                              }
                                              st::fn_0072E340
                                                        (reinterpret_cast<char *>(&local_4a),pcVar23,0xe);
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
                                              /* ST_CALLSITE[00658CE4]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5ef:

                                    local_EAX_25882 = st::fn_0040566E(reinterpret_cast<short *>(&local_16c));
                                    if (local_EAX_25882 != 0) {
                                      /* ST_CALLSITE[00658D3E]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[00658D63]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[00658D8C]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mgF = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                             (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mgF ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg10 = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_00658e8e:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg10,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[00658DAD]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mgF));
                                              if (((pAVar24 == nullptr) ||
                                                  (pAVar24->field_007B == 1)) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg10 = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_00658e8e;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
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
                                              /* ST_CALLSITE[00658E71]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f0:

                                    local_EAX_26279 = st::fn_00404CAA(reinterpret_cast<short *>(&local_16c));
                                    if (local_EAX_26279 != 0) {
                                      /* ST_CALLSITE[00658ECB]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[00658EF0]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[00658F19]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mgE = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                             (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mgE ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mgF = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_00658fc8:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mgF,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[00658F3A]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mgE));
                                              if (((pAVar24 == nullptr) ||
                                                  (pAVar24->field_007B == 1)) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mgF = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_00658fc8;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
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
                                              iVar39 = (int)local_14c * 0x19;
                                              local_68[0] = 0x35;
                                              local_58 = (undefined1)iVar39;
                                              uStack_57 = (undefined1)((uint)iVar39 >> 8);
                                              uStack_56 = (undefined1)((uint)iVar39 >> 0x10);
                                              uStack_55 = (undefined1)((uint)iVar39 >> 0x18);
                                              /* ST_CALLSITE[00658FAB]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f1:

                                    local_EAX_22928 = st::fn_004049B2(reinterpret_cast<short *>(&local_16c));
                                    if (local_EAX_22928 != 0) {
                                      /* ST_CALLSITE[006581B4]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[006581D9]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[00658202]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mgD = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                             (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mgD ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mgE = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_006582b3:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mgE,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[00658223]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mgD));
                                              if ((pAVar24 == nullptr) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mgE = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_006582b3;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
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
                                              /* ST_CALLSITE[00658296]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f2:

                                    iVar39 = st::fn_00403E3B(reinterpret_cast<short *>(&local_16c));
                                    if (iVar39 != 0) {
                                      /* ST_CALLSITE[006582F0]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[00658315]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[0065833E]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mgC = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                             (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mgC ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mgD = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_00658416:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mgD,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[0065835F]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mgC));
                                              if (pAVar24 == nullptr) {
                                                uVar30 = *puVar12;
                                                pcVar8_mgD = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_00658416;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5b = SUB41(local_14c,0);
                                              uStack_5a = (undefined1)((uint)local_14c >> 8);
                                              local_60 = STPiece<0,1>(local_158);
                                              iVar39 = (int)local_144 * 0x19;
                                              uStack_5d = SUB41(local_150,0);
                                              uStack_5c = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0xb;
                                              uStack_4f = SUB41(local_148,0);
                                              local_4e = (undefined2)((uint)local_148 >> 8);
                                              uStack_4c = (undefined1)((uint)local_148 >> 0x18);
                                              uStack_59 = (undefined1)iVar39;
                                              local_58 = (undefined1)((uint)iVar39 >> 8);
                                              uStack_57 = (undefined1)((uint)iVar39 >> 0x10);
                                              uStack_56 = (undefined1)((uint)iVar39 >> 0x18);
                                              uStack_55 = (undefined1)local_140;
                                              uStack_54 = (undefined1)(local_140 >> 8);
                                              uStack_53 = (undefined1)local_13c;
                                              uStack_52 = (undefined1)((uint)local_13c >> 8);
                                              uStack_51 = SUB41(local_138,0);
                                              uStack_50 = (undefined1)((uint)local_138 >> 8);
                                              /* ST_CALLSITE[006583F9]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f3:

                                    iVar39 = st::fn_00402BC1(reinterpret_cast<short *>(&local_16c));
                                    if (iVar39 != 0) {
                                      /* ST_CALLSITE[00658453]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[00658478]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[006584A1]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mgB = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                             (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mgB ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mgC = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_00658543:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mgC,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[006584C2]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mgB));
                                              if (((pAVar24 == nullptr) ||
                                                  (pAVar24->field_007B == 1)) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mgC = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_00658543;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              local_60 = STPiece<0,1>(local_158);
                                              local_68[0] = 0xc;
                                              iVar39 = (int)local_150 * 0x19;
                                              uStack_5b = (undefined1)iVar39;
                                              uStack_5a = (undefined1)((uint)iVar39 >> 8);
                                              uStack_59 = (undefined1)((uint)iVar39 >> 0x10);
                                              local_58 = (undefined1)((uint)iVar39 >> 0x18);
                                              /* ST_CALLSITE[00658526]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f4:

                                    iVar39 = st::fn_004026BC(reinterpret_cast<short *>(&local_16c));
                                    if (iVar39 != 0) {
                                      /* ST_CALLSITE[00658580]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[006585A5]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[006585CE]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mgA = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                             (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mgA ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mgB = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_00658670:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mgB,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[006585EF]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mgA));
                                              if (((pAVar24 == nullptr) ||
                                                  (pAVar24->field_007B == 1)) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mgB = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_00658670;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              local_60 = STPiece<0,1>(local_158);
                                              local_68[0] = 0xd;
                                              iVar39 = (int)local_150 * 0x19;
                                              uStack_5b = (undefined1)iVar39;
                                              uStack_5a = (undefined1)((uint)iVar39 >> 8);
                                              uStack_59 = (undefined1)((uint)iVar39 >> 0x10);
                                              local_58 = (undefined1)((uint)iVar39 >> 0x18);
                                              /* ST_CALLSITE[00658653]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f5:

                                    iVar39 = st::fn_004044C1(reinterpret_cast<short *>(&local_16c));
                                    if (iVar39 != 0) {
                                      /* ST_CALLSITE[006586AD]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[006586D2]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[006586FB]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg9 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                             (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg9 ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mgA = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_006587e2:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mgA,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[0065871C]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg9));
                                              if (((pAVar24 == nullptr) ||
                                                  (pAVar24->field_007B == 1)) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mgA = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_006587e2;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5e = SUB41(local_154,0);
                                              uStack_5d = (undefined1)((uint)local_154 >> 8);
                                              uStack_50 = SUB41(local_14c,0);
                                              uStack_4f = (undefined1)((uint)local_14c >> 8);
                                              local_4e = (undefined2)((uint)local_14c >> 0x10);
                                              local_60 = SUB41(local_158,0);
                                              uStack_5f = (undefined1)((uint)local_158 >> 8);
                                              iVar39 = (int)local_148 * 0x19;
                                              uStack_5c = SUB41(local_150,0);
                                              uStack_5b = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0xe;
                                              uStack_5a = (undefined1)iVar39;
                                              uStack_59 = (undefined1)((uint)iVar39 >> 8);
                                              local_58 = (undefined1)((uint)iVar39 >> 0x10);
                                              uStack_57 = (undefined1)((uint)iVar39 >> 0x18);
                                              uStack_54 = (undefined1)local_140;
                                              uStack_53 = (undefined1)(local_140 >> 8);
                                              uStack_56 = SUB41(local_144,0);
                                              uStack_55 = (undefined1)((uint)local_144 >> 8);
                                              uStack_52 = (undefined1)local_13c;
                                              uStack_51 = (undefined1)((uint)local_13c >> 8);
                                              /* ST_CALLSITE[006587C5]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f6:

                                    local_EAX_24571 =
                                         st::fn_00405D71(reinterpret_cast<RecoveredRecord_00651DB0_B471A58B *>(&local_16c));
                                    if (local_EAX_24571 != 0) {
                                      /* ST_CALLSITE[0065881F]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[00658844]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[0065886D]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg8 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                             (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg8 ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg9 = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_006588eb:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg9,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[0065888B]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg8));
                                              if (((pAVar24 == nullptr) ||
                                                  (pAVar24->field_007B == 1)) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg9 = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_006588eb;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_68[0] = 0xf;
                                              /* ST_CALLSITE[006588CE]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f7:

                                    iVar39 = st::fn_004046D3(reinterpret_cast<short *>(&local_16c));
                                    if (iVar39 != 0) {
                                      /* ST_CALLSITE[00658928]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[0065894D]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[00658976]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg7 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                             (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg7 ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg8 = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_006589fe:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg8,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[00658994]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg7));
                                              if ((pAVar24 == nullptr) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg8 = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_006589fe;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_60 = STPiece<0,1>(local_158);
                                              local_68[0] = 0x10;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              /* ST_CALLSITE[006589E1]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f8:

                                    local_EAX_26593 = st::fn_00402D65(reinterpret_cast<short *>(&local_16c));
                                    if (local_EAX_26593 != 0) {
                                      /* ST_CALLSITE[00659005]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[0065902A]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[00659053]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg6 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                             (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg6 ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg7 = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_00659143:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg7,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[00659074]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg6));
                                              if (((pAVar24 == nullptr) ||
                                                  (pAVar24->field_007B == 1)) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg7 = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_00659143;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
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
                                              iVar39 = (int)local_138 * 0x19;
                                              local_4e = (undefined2)local_140;
                                              local_68[0] = 0x36;
                                              uStack_4c = (undefined1)iVar39;
                                              cStack_4b = (char)((uint)iVar39 >> 8);
                                              STPiece<0,2>(local_4a) = (undefined2)((uint)iVar39 >> 0x10);
                                              /* ST_CALLSITE[00659126]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f9:

                                    local_EAX_27539 =
                                         st::fn_00402FC7(reinterpret_cast<RecoveredRecord_AiEventClassTy_00652460 *>(&local_16c));
                                    if (local_EAX_27539 != 0) {
                                      /* ST_CALLSITE[006593B7]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[006593DC]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[00659405]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg5 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                             (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg5 ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg6 = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_006594ec:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg6,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[00659426]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg5));
                                              if (((pAVar24 == nullptr) ||
                                                  (pAVar24->field_007B == 1)) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg6 = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_006594ec;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
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
                                              iVar39 = local_13c * 0x19;
                                              local_68[0] = 0x37;
                                              uStack_50 = (undefined1)iVar39;
                                              uStack_4f = (undefined1)((uint)iVar39 >> 8);
                                              local_4e = (undefined2)((uint)iVar39 >> 0x10);
                                              /* ST_CALLSITE[006594CF]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5fa:

                                    local_EAX_27909 = st::fn_004011C2(reinterpret_cast<short *>(&local_16c));
                                    if (local_EAX_27909 != 0) {
                                      /* ST_CALLSITE[00659529]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[0065954E]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[00659577]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg4 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                             (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg4 ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg5 = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_00659640:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg5,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[00659598]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg4));
                                              if (((pAVar24 == nullptr) ||
                                                  (pAVar24->field_007B == 1)) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg5 = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_00659640;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
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
                                              iVar39 = (int)local_144 * 0x19;
                                              local_68[0] = 0x38;
                                              uStack_54 = (undefined1)iVar39;
                                              uStack_53 = (undefined1)((uint)iVar39 >> 8);
                                              uStack_52 = (undefined1)((uint)iVar39 >> 0x10);
                                              uStack_51 = (undefined1)((uint)iVar39 >> 0x18);
                                              /* ST_CALLSITE[00659623]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5fb:

                                    local_EAX_28249 =
                                         st::fn_0040395E(reinterpret_cast<RecoveredRecordView_006525E0_3E62F5FD *>(&local_16c));
                                    if (local_EAX_28249 != 0) {
                                      /* ST_CALLSITE[0065967D]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[006596A2]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[006596CB]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg3 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                             (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg3 ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg4 = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_00659785:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg4,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[006596EC]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg3));
                                              if (((pAVar24 == nullptr) ||
                                                  (pAVar24->field_007B == 1)) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg4 = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_00659785;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
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
                                              iVar39 = (int)local_148 * 0x19;
                                              local_58 = SUB41(local_150,0);
                                              uStack_57 = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0x39;
                                              uStack_56 = (undefined1)iVar39;
                                              uStack_55 = (undefined1)((uint)iVar39 >> 8);
                                              uStack_54 = (undefined1)((uint)iVar39 >> 0x10);
                                              uStack_53 = (undefined1)((uint)iVar39 >> 0x18);
                                              /* ST_CALLSITE[00659768]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5fc:

                                    local_EAX_28574 =
                                         st::fn_00401208(reinterpret_cast<RecoveredRecordView_00652670_3E62F5FD *>(&local_16c));
                                    if (local_EAX_28574 != 0) {
                                      /* ST_CALLSITE[006597C2]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[006597E7]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[00659810]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg2 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                             (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg2 ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg3 = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_006598ca:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg3,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[00659831]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg2));
                                              if (((pAVar24 == nullptr) ||
                                                  (pAVar24->field_007B == 1)) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg3 = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_006598ca;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
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
                                              iVar39 = (int)local_148 * 0x19;
                                              local_58 = SUB41(local_150,0);
                                              uStack_57 = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0x3a;
                                              uStack_56 = (undefined1)iVar39;
                                              uStack_55 = (undefined1)((uint)iVar39 >> 8);
                                              uStack_54 = (undefined1)((uint)iVar39 >> 0x10);
                                              uStack_53 = (undefined1)((uint)iVar39 >> 0x18);
                                              /* ST_CALLSITE[006598AD]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5fd:

                                    iVar36 = st::fn_0040106E(reinterpret_cast<RecoveredRecord_AiEventClassTy_00652300 *>(&local_16c));
                                    if (iVar36 != 0) {
                                      /* ST_CALLSITE[00659180]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[006591A5]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[006591CE]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg1 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                             (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg1 ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg1 = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_0065937a:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg1,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[006591EF]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg1));
                                              uVar30 = local_140;
                                              if ((pAVar24 == nullptr) ||
                                                 (pAVar24->field_007B == -0x8000)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg1 = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_0065937a;
                                              }
                                              ppuVar37 = &local_20c;
                                              for (iVar39 = 0x12; puVar13 = local_158, iVar39 != 0;
                                                  iVar39 = iVar39 + -1) {
                                                *ppuVar37 = nullptr;
                                                ppuVar37 = ppuVar37 + 1;
                                              }
                                              *(undefined2 *)ppuVar37 = 0;
                                              local_20c = puVar13;
                                              local_208 = 0xffff;
                                              local_206 = 0x5622;
                                              local_204 = 0xfffffff0;
                                              local_200 = 0xfffe;
                                              if (-1 < (int)uVar30) {
                                                local_200 = (undefined2)uVar30;
                                              }
                                              local_1fe = (int)local_138 * 0x19;
                                              local_1f6 = STPiece<0,2>(local_154);
                                              local_1f4 = STPiece<0,2>(local_150);
                                              local_1f2 = STPiece<0,2>(local_14c);
                                              if (((int)local_148 < 0) ||
                                                 (pcVar23 = local_148, 7 < (int)local_148)) {
                                                bVar1 = pAVar24->field_0081;
                                                pcVar23 = (char *)(uint)bVar1;
                                                if (((char)bVar1 < '\0') || ('\a' < (char)bVar1)) {
                                                  pcVar23 = (char *)(uint)(byte)pAVar24->field_0024;
                                                }
                                              }
                                              local_1f0 = SUB41(pcVar23,0);
                                              if (local_144 != nullptr) {
                                                st::fn_0072E340
                                                          (local_1ef,reinterpret_cast<char *>(local_144),0xe);
                                                uVar30 = local_140;
                                              }
                                              if ((((st::machine_word_boundary_cast<uint>(local_20c) == st::machine_word_boundary_cast<uint>((uint *)0xdd)) ||
                                                   (st::machine_word_boundary_cast<uint>(local_20c) == st::machine_word_boundary_cast<uint>((uint *)0xde))) ||
                                                  (st::machine_word_boundary_cast<uint>(local_20c) == st::machine_word_boundary_cast<uint>((uint *)0xe2))) ||
                                                 (st::machine_word_boundary_cast<uint>(local_20c) == st::machine_word_boundary_cast<uint>((uint *)0xdc))) {
                                                bVar1 = 1;
                                              }
                                              else {
                                                bVar1 = 0;
                                              }
                                              local_1e0 = -(uint)bVar1 & uVar30;
                                              puVar13 = local_240;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_236 = &local_20c;
                                              local_1ce = 1;
                                              local_240[0] = 0x68;
                                              local_237 = 1;
                                              /* ST_CALLSITE[0065935D]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_240);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5fe:

                                    iVar39 = st::fn_00402801(reinterpret_cast<RecoveredRecord_AiEventClassTy_00652700 *>(&local_16c));
                                    if (iVar39 != 0) {
                                      /* ST_CALLSITE[00659907]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                        local_c = (DArrayTy *)

                                                  /* ST_CALLSITE[0065992C]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                                  st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            /* ST_CALLSITE[00659955]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                            pRVar14_mg0 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9((char)*puVar12,
                                                                             (ushort)local_15c));
                                            uVar35 = local_14;
                                            if (pRVar14_mg0 ==
                                                nullptr) {
                                              uVar30 = *puVar12;
                                              pcVar8_mg0 = &CHAR_00h_008016a0;
                                              iVar39 = -0xaa;
LAB_00659a1c:
                                              st::fn_00405042(this_00,iVar39,pcVar8_mg0,uVar35,
                                                                 uVar30);
                                            }
                                            else {
                                              /* ST_CALLSITE[00659976]: CALL 0x00405902; direct=00405902 thunk_FUN_00423300; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__fastcall;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733 */
                                              pAVar24 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00405902(pRVar14_mg0));
                                              if ((pAVar24 == nullptr) ||
                                                 (pAVar24->field_007B != 1)) {
                                                uVar30 = *puVar12;
                                                pcVar8_mg0 = st::fn_004057DB(local_EAX_488);
                                                iVar39 = -0xab;
                                                goto LAB_00659a1c;
                                              }
                                              puVar13 = local_68;
                                              for (iVar39 = 0xd; iVar39 != 0; iVar39 = iVar39 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
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
                                              iVar39 = local_140 * 0x19;
                                              uStack_52 = SUB41(local_148,0);
                                              uStack_51 = (undefined1)((uint)local_148 >> 8);
                                              uStack_50 = (undefined1)((uint)local_148 >> 0x10);
                                              uStack_4f = (undefined1)((uint)local_148 >> 0x18);
                                              local_68[0] = 0x3b;
                                              local_4e = (undefined2)iVar39;
                                              uStack_4c = (undefined1)((uint)iVar39 >> 0x10);
                                              cStack_4b = (char)((uint)iVar39 >> 0x18);
                                              /* ST_CALLSITE[006599FF]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              st::fn_00401555(pAVar24,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
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

                                iVar39 = st::fn_004051DC((int)&local_16c);
                                if (iVar39 == 0) {
                                  iVar39 = -1;
                                  uVar35 = local_14;
                                  pcVar8_mg23 = st::fn_004057DB(0x76c);
                                  st::fn_00405042(this_00,-0x7d,pcVar8_mg23,uVar35,iVar39);
                                }
                                else {
                                  DAT_0080c51e = st::machine_word_boundary_cast<undefined4>(pDStack_164);
                                }
                              }
                              goto cf_common_join_00659A73;
                            }
                            if (local_EAX_488 == 0x5c8) {

                              iVar39 = st::fn_00403139((int)&local_16c);
                              if (iVar39 == 0) {
                                iVar39 = -1;
                                uVar35 = local_14;
                                pcVar8_mg25 = st::fn_004057DB(0x5c8);
                                st::fn_00405042(this_00,-0x7d,pcVar8_mg25,uVar35,iVar39);
                              }
                              else {
                                /* ST_CALLSITE[00656EFD]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 == 8) && (st::machine_word_boundary_cast<uint>(pDStack_164) == st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  iVar39 = -1;
                                  uVar35 = local_14;
                                  pcVar8_mg24 = st::fn_004057DB(0x5c8);
                                  st::fn_00405042(this_00,-0x7d,pcVar8_mg24,uVar35,iVar39);
                                }
                                else {
                                  local_c = (DArrayTy *)

                                            /* ST_CALLSITE[00656F3A]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                            st::fn_00668F50
                                                      (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                       reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    pDVar16 = local_15c;
                                    do {
                                      puVar9 = (undefined1 *)0xffffffff;
                                      if (((int)pDVar16 < 1) || (0x28 < (int)pDVar16)) {
                                        bVar38 = false;
                                      }
                                      else {
                                        bVar38 = true;
                                      }
                                      if (bVar38) {
                                        puVar9 = (undefined1 *)((int)&pDVar16[2].flags + 1);
                                      }
                                      if (((int)pDVar16 < 0x32) || (0x73 < (int)pDVar16)) {
                                        bVar38 = false;
                                      }
                                      else {
                                        bVar38 = true;
                                      }
                                      if (bVar38) {
                                        puVar9 = (undefined1 *)((int)&pDVar16[-2].count + 2);
                                      }
                                      if (-1 < (int)puVar9) {
                                        st::fn_00402EAF(*puVar12,(int)puVar9,st::machine_word_boundary_cast<undefined4>(local_158));
                                        pDVar16 = local_15c;
                                      }
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                }
                              }
                              goto cf_common_join_00659A73;
                            }
                            switch(local_EAX_488) {
                            case 0x594:

                              iVar39 = st::fn_004031ED((int)&local_16c);
                              if (iVar39 == 0) break;
                              if (local_160 != nullptr) {
                                /* ST_CALLSITE[00655EE1]: CALL 0x00402932; direct=00402932 _EnumArt */
                                st::fn_00402932(0,reinterpret_cast<byte *>(pDStack_164),0,0,0,-1,-1,-1,st::function_address_boundary_cast<code *>(st::fn_0064DD70),
                                         st::machine_word_boundary_cast<undefined4>(local_160));
                              }
                              goto cf_common_join_00659A73;
                            case 0x595:

                              iVar39 = st::fn_00401C35(reinterpret_cast<RecoveredRecord_0064FEF0_DD304A9A *>(&local_16c));
                              if (iVar39 == 0) break;
                              if (((st::machine_word_boundary_cast<uint>(pDStack_164) == st::machine_word_boundary_cast<uint>((DArrayTy *)0xdd)) ||
                                  (st::machine_word_boundary_cast<uint>(pDStack_164) == st::machine_word_boundary_cast<uint>((DArrayTy *)0xde))) ||
                                 (st::machine_word_boundary_cast<uint>(pDStack_164) == st::machine_word_boundary_cast<uint>((DArrayTy *)0xe0))) {
                                bVar38 = true;
                              }
                              else {
                                bVar38 = false;
                              }
                              if (bVar38) {
                                local_18c = local_160;
                                local_190 = local_15c;
                                local_184 = local_158;

                                local_EAX_14486 =
                                     st::fn_0040170D((int)pDStack_164,reinterpret_cast<int *>(&local_18c),
                                                        reinterpret_cast<int *>(&local_190),reinterpret_cast<int *>(&local_184));
                                if (local_EAX_14486 == 0) goto LAB_00655f4c;

                                st::fn_00405E84(st::machine_word_boundary_cast<undefined4>(local_18c),st::machine_word_boundary_cast<undefined4>(local_190),st::machine_word_boundary_cast<undefined4>(local_184),st::machine_word_boundary_cast<undefined4>(pDStack_164),
                                                   st::machine_word_boundary_cast<undefined4>(local_154));
                              }
                              goto cf_common_join_00659A73;
                            case 0x596:

                              iVar39 = st::fn_00405DAD(reinterpret_cast<RecoveredRecord_AiEventClassTy_0064FF70 *>(&local_16c));
                              if (iVar39 == 0) break;
                              DAT_008118fc = 0;
                              /* ST_CALLSITE[0065614B]: CALL 0x00404142; direct=00404142 _EnumRCField */
                              st::fn_00404142((short)pDStack_164,(short)local_160,(short)local_15c,
                                           (short)local_158,(short)local_154,(short)local_150,
                                           (short)local_14c,st::function_address_boundary_cast<code *>(st::fn_0064E260),st::machine_word_boundary_cast<undefined4>(&local_148));
                              goto cf_common_join_00659A73;
                            case 0x597:

                              iVar39 = st::fn_004018B6(reinterpret_cast<RecoveredRecord_AiEventClassTy_00650090 *>(&local_16c));
                              if (iVar39 == 0) break;
                              /* ST_CALLSITE[006561BC]: CALL 0x00404142; direct=00404142 _EnumRCField */
                              st::fn_00404142((short)local_15c,(short)local_158,(short)local_154,
                                           (short)local_150,(short)local_14c,(short)local_148,
                                           (short)local_144,st::function_address_boundary_cast<code *>(st::fn_0064E290),
                                           (int)local_160 << 0x10 | (uint)pDStack_164 & 0xffff);
                              goto cf_common_join_00659A73;
                            case 0x598:

                              iVar39 = st::fn_00402220(reinterpret_cast<RecoveredRecord_AiEventClassTy_006501A0 *>(&local_16c));
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[00655F3F]: CALL 0x0040341d; direct=0040341D AiEventClassTy::_CreateDest */
                                local_EAX_13781 =
                                     st::fn_0040341D(this_00,(short)pDStack_164,(short)local_160,
                                                 (short)local_15c,(short)local_158,(short)local_154,
                                                 reinterpret_cast<char *>(local_150),local_14c,st::machine_word_boundary_cast<undefined4>(local_148));
                                goto LAB_00655f44;
                              }
                              break;
                            case 0x599:

                              iVar39 = st::fn_004047CD(reinterpret_cast<RecoveredRecord_AiEventClassTy_00650240 *>(&local_16c));
                              if (iVar39 == 0) break;
                              DAT_008118fc = 0;
                              /* ST_CALLSITE[00655FCC]: CALL 0x004013f2; direct=004013F2 _EnumDest */
                              st::fn_004013F2(reinterpret_cast<byte *>(local_160),(char)pDStack_164,(short)local_15c,
                                        (short)local_158,(short)local_154,(short)local_150,
                                        (short)local_14c,(short)local_148,st::function_address_boundary_cast<code *>(st::fn_0064DF30),
                                        st::machine_word_boundary_cast<undefined4>(&local_144));
                              goto cf_common_join_00659A73;
                            case 0x59a:

                              iVar39 = st::fn_00402027((int)&local_16c);
                              if (iVar39 == 0) break;
                              if (local_160 != nullptr) {
                                /* ST_CALLSITE[00656019]: CALL 0x004013f2; direct=004013F2 _EnumDest */
                                st::fn_004013F2(reinterpret_cast<byte *>(pDStack_164),-1,0,0,0,-1,-1,-1,st::function_address_boundary_cast<code *>(st::fn_0064DF70),
                                          st::machine_word_boundary_cast<undefined4>(local_160));
                              }
                              goto cf_common_join_00659A73;
                            case 0x59b:

                              iVar39 = st::fn_00404502(reinterpret_cast<RecoveredRecord_006503B0_3B1FB22E *>(&local_16c));
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[006561E4]: CALL dword ptr [EAX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  local_c = (DArrayTy *)

                                            /* ST_CALLSITE[00656209]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                            st::fn_00668F50
                                                      (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                       reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    local_8 = reinterpret_cast<DArrayTy *>(output_values_neg_34);
                                    do {
                                      /* ST_CALLSITE[00656260]: CALL 0x0040434a; direct=0040434A AiEventClassTy::_CreateMine */
                                      local_EAX_14928 =
                                           st::fn_0040434A(this_00,(ushort)local_8->flags,
                                                       (short)local_15c,(int)local_158,
                                                       (int)local_154,st::machine_word_boundary_cast<undefined4>(local_150),(ushort)local_14c,
                                                       local_148,st::machine_word_boundary_cast<undefined4>(local_144),local_140);
                                      if (local_EAX_14928 != 0) {
                                        dVar14 = local_8->flags;
                                        uVar35 = local_14;
                                        pcVar8_mg2E = st::fn_004057DB(local_EAX_488);
                                        st::fn_00405042(this_00,-0xab,pcVar8_mg2E,uVar35,dVar14);
                                      }
                                      local_8 = reinterpret_cast<DArrayTy *>(&local_8->iteratorIndex);
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x59c:

                              iVar39 = st::fn_00401843(reinterpret_cast<RecoveredRecord_AiEventClassTy_00650480 *>(&local_16c));
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[006562B5]: CALL dword ptr [EAX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  local_c = (DArrayTy *)

                                            /* ST_CALLSITE[006562DA]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                            st::fn_00668F50
                                                      (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                       reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      DAT_008118fc = 0;
                                      /* ST_CALLSITE[00656345]: CALL 0x00403675; direct=00403675 _EnumMines */
                                      st::fn_00403675(*puVar12,(short)local_15c,(char)local_158,local_154
                                                 ,(short)local_150,(short)local_14c,(short)local_148
                                                 ,(short)local_144,(short)local_140,(short)local_13c
                                                 ,st::function_address_boundary_cast<code *>(st::fn_0064E1F0),st::machine_word_boundary_cast<undefined4>(&local_138));
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x59d:

                              iVar39 = st::fn_00404890(reinterpret_cast<RecoveredRecord_AiEventClassTy_00650600 *>(&local_16c));
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[00656379]: CALL dword ptr [EAX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  local_c = (DArrayTy *)

                                            /* ST_CALLSITE[0065639E]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                            st::fn_00668F50
                                                      (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                       reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      DAT_008118fc = 0;
                                      /* ST_CALLSITE[00656409]: CALL 0x00403675; direct=00403675 _EnumMines */
                                      st::fn_00403675(*puVar12,(short)local_158,(char)local_154,local_150
                                                 ,(short)local_14c,(short)local_148,(short)local_144
                                                 ,(short)local_140,(short)local_13c,(short)local_138
                                                 ,st::function_address_boundary_cast<code *>(st::fn_0064E230),st::machine_word_boundary_cast<undefined4>(local_15c));
                                      puVar12 = puVar12 + 1;
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

                              iVar39 = st::fn_0040248C(reinterpret_cast<short *>(&local_16c));
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[0065643D]: CALL dword ptr [EAX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  local_c = (DArrayTy *)

                                            /* ST_CALLSITE[00656462]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                            st::fn_00668F50
                                                      (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                       reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    do {

                                      st::fn_00402AAE(*puVar12,&local_15c->flags,(byte)local_158);
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5ab:

                              iVar39 = st::fn_0040248C(reinterpret_cast<short *>(&local_16c));
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[006564BD]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  local_c = (DArrayTy *)

                                            /* ST_CALLSITE[006564E2]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                            st::fn_00668F50
                                                      (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                       reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    do {

                                      st::fn_0040534E((uint *)*puVar12,(int)local_15c,
                                                         (byte)local_158);
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5ac:

                              iVar39 = st::fn_004018CA(reinterpret_cast<short *>(&local_16c));
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[00656621]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  /* ST_CALLSITE[00656646]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                  iVar37_mg9E = st::fn_00668F50
                                                          (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                           reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                           output_values_neg_34);
                                  if (0 < iVar37_mg9E) {
                                    local_8 = reinterpret_cast<DArrayTy *>(output_values_neg_34);
                                    do {
                                      pAVar10 = st::fn_00401DC5((char)local_8->flags);
                                      if (pAVar10 == nullptr) {
                                        dVar14 = local_8->flags;
                                        uVar35 = local_14;
                                        pcVar8_mg2D = st::fn_004057DB(local_EAX_488);
                                        st::fn_00405042(this_00,-0xab,pcVar8_mg2D,uVar35,dVar14);
                                      }
                                      else {
                                        /* ST_CALLSITE[0065668A]: CALL 0x00402e37; direct=00402E37 AiPlrClassTy::SetTech */
                                        st::fn_00402E37
                                                  (pAVar10,(int)local_15c,(int)local_158,
                                                   (int)local_154,-1);
                                      }
                                      local_8 = reinterpret_cast<DArrayTy *>(&local_8->iteratorIndex);
                                      iVar37_mg9E = iVar37_mg9E + -1;
                                    } while (iVar37_mg9E != 0);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5ad:

                              iVar39 = st::fn_00404732(reinterpret_cast<short *>(&local_16c));
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[006566DD]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  local_c = (DArrayTy *)

                                            /* ST_CALLSITE[00656702]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                            st::fn_00668F50
                                                      (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                       reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      /* ST_CALLSITE[0065672C]: CALL 0x00402130; direct=00402130 STAllPlayersC::sub_004E6310 */
                                      st::fn_00402130
                                                (g_allPlayers_007FA174,(byte *)*puVar12,
                                                 (uint)local_15c,(uint)local_158);
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5ae:

                              iVar39 = st::fn_0040385A((int)&local_16c);
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[006567E4]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  local_c = (DArrayTy *)

                                            /* ST_CALLSITE[00656809]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                            st::fn_00668F50
                                                      (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                       reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      /* ST_CALLSITE[00656825]: CALL 0x00404ec6; direct=00404EC6 STAllPlayersC::sub_004E75F0 */
                                      st::fn_00404EC6(g_allPlayers_007FA174,*puVar12);
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5af:

                              iVar39 = st::fn_004032EC(reinterpret_cast<RecoveredRecordView_00650A20_3149A900 *>(&local_16c));
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[00656856]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  /* ST_CALLSITE[0065687B]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                  iVar37_mg97 = st::fn_00668F50
                                                          (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                           reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                           output_values_neg_34);
                                  if (0 < iVar37_mg97) {
                                    local_8 = reinterpret_cast<DArrayTy *>(output_values_neg_34);
                                    do {
                                      pAVar10 = st::fn_00401DC5((char)local_8->flags);
                                      if (pAVar10 == nullptr) {
                                        dVar14 = local_8->flags;
                                        uVar35 = local_14;
                                        pcVar8_mg2C = st::fn_004057DB(local_EAX_488);
                                        st::fn_00405042(this_00,-0xab,pcVar8_mg2C,uVar35,dVar14);
                                      }
                                      else {
                                        st::fn_00402A18(pAVar10,(int)local_15c,(int)local_158);
                                      }
                                      local_8 = reinterpret_cast<DArrayTy *>(&local_8->iteratorIndex);
                                      iVar37_mg97 = iVar37_mg97 + -1;
                                    } while (iVar37_mg97 != 0);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b0:

                              iVar39 = st::fn_004035D0((int)&local_16c);
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[00656909]: CALL dword ptr [EAX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  /* ST_CALLSITE[0065692E]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                  iVar37_mg94 = st::fn_00668F50
                                                          (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                           reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                           output_values_neg_34);
                                  if (0 < iVar37_mg94) {
                                    local_8 = reinterpret_cast<DArrayTy *>(output_values_neg_34);
                                    do {
                                      /* ST_CALLSITE[00656950]: CALL 0x00401dc5; direct=00401DC5 thunk_FUN_004357f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_0067B260_B3B2F7BB; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_0067B260_B3B2F7BB;/char */
                                      pRVar18 = st::pointer_boundary_cast<RecoveredRecordView_0067B260_B3B2F7BB *>(st::fn_00401DC5((char)local_8->flags));
                                      if (pRVar18 == nullptr) {
                                        dVar14 = local_8->flags;
                                        uVar35 = local_14;
                                        pcVar8_mg2B = st::fn_004057DB(local_EAX_488);
                                        st::fn_00405042(this_00,-0xab,pcVar8_mg2B,uVar35,dVar14);
                                      }
                                      else {
                                        st::fn_00402CC5(pRVar18);
                                      }
                                      local_8 = reinterpret_cast<DArrayTy *>(&local_8->iteratorIndex);
                                      iVar37_mg94 = iVar37_mg94 + -1;
                                    } while (iVar37_mg94 != 0);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b1:

                              iVar39 = st::fn_0040120D((int)&local_16c);
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[0065653D]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  local_c = (DArrayTy *)

                                            /* ST_CALLSITE[00656562]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                            st::fn_00668F50
                                                      (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                       reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    do {

                                      st::fn_00405349(*puVar12);
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b2:

                              iVar39 = st::fn_0040120D((int)&local_16c);
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[006565AF]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  local_c = (DArrayTy *)

                                            /* ST_CALLSITE[006565D4]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                            st::fn_00668F50
                                                      (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                       reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    do {

                                      st::fn_004037F1((uint *)*puVar12);
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b3:

                              iVar39 = st::fn_00402478(reinterpret_cast<short *>(&local_16c));
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[0065675D]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  local_c = (DArrayTy *)

                                            /* ST_CALLSITE[00656782]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                            st::fn_00668F50
                                                      (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                       reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      st::fn_00401A28(g_allPlayers_007FA174,(byte *)*puVar12,
                                                         (uint)local_15c,(uint)local_158,
                                                         (int)local_154);
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b4:

                              iVar39 = st::fn_00401505(reinterpret_cast<RecoveredRecord_AiEventClassTy_00650B10 *>(&local_16c));
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[006569AE]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  /* ST_CALLSITE[006569D3]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                  iVar37_mg8B = st::fn_00668F50
                                                          (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                           reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                           output_values_neg_34);
                                  if (0 < iVar37_mg8B) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      local_c = (DArrayTy *)0xffffffff;
                                      if (g_allPlayers_007FA174 == nullptr) {
                                        pAVar10 = nullptr;
                                      }
                                      else {
                                        pAVar10 = st::fn_00401DC5((char)*puVar12);
                                      }
                                      if (pAVar10 != nullptr) {
                                        local_c = (DArrayTy *)
                                                  st::fn_00679120
                                                            (reinterpret_cast<RecoveredReceiver_00678E00 *>(pAVar10),
                                                             reinterpret_cast<byte *>(local_15c),(int)local_158,
                                                             (int)local_154,(int)local_150);
                                      }
                                      if ((int)local_c < 0) {
                                        st::fn_00405042(this_00,-4,reinterpret_cast<char *>(local_15c),local_14,
                                                           *puVar12);
                                      }
                                      puVar12 = puVar12 + 1;
                                      iVar37_mg8B = iVar37_mg8B + -1;
                                    } while (iVar37_mg8B != 0);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b5:

                              iVar39 = st::fn_0040426E(reinterpret_cast<RecoveredRecord_00650F50_B7B27450 *>(&local_16c));
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[00656D50]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  /* ST_CALLSITE[00656D75]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                  iVar37_mg88 = st::fn_00668F50
                                                          (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                           reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                           output_values_neg_34);
                                  if (0 < iVar37_mg88) {
                                    local_8 = reinterpret_cast<DArrayTy *>(output_values_neg_34);
                                    do {
                                      if (g_allPlayers_007FA174 == nullptr) {
                                        pRVar19 = nullptr;
                                      }
                                      else {
                                        pRVar19 = reinterpret_cast<RecoveredRecordView_00679600_4B4DB6B6 *>(st::fn_00401DC5((char)local_8->flags));
                                      }
                                      if (pRVar19 == nullptr) {
                                        dVar14 = local_8->flags;
                                        uVar35 = local_14;
                                        pcVar8_mg2A = st::fn_004057DB(local_EAX_488);
                                        st::fn_00405042(this_00,-0xab,pcVar8_mg2A,uVar35,dVar14);
                                      }
                                      else {
                                        pRVar19->field_0644 = (char)local_15c;
                                        pRVar19->field_0640 = st::machine_word_boundary_cast<undefined4>(local_158);
                                        st::fn_00401DB6(pRVar19);
                                      }
                                      local_8 = reinterpret_cast<DArrayTy *>(&local_8->iteratorIndex);
                                      iVar37_mg88 = iVar37_mg88 + -1;
                                    } while (iVar37_mg88 != 0);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b6:

                              local_EAX_17905 = st::fn_0040592F(reinterpret_cast<short *>(&local_16c));
                              if (local_EAX_17905 != 0) {
                                /* ST_CALLSITE[00656E15]: CALL dword ptr [EAX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  /* ST_CALLSITE[00656E3A]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                  iVar37_mg85 = st::fn_00668F50
                                                          (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                           reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                           output_values_neg_34);
                                  if (0 < iVar37_mg85) {
                                    local_8 = reinterpret_cast<DArrayTy *>(output_values_neg_34);
                                    do {
                                      if (g_allPlayers_007FA174 == nullptr) {
                                        pAVar10 = nullptr;
                                      }
                                      else {
                                        pAVar10 = st::fn_00401DC5((char)local_8->flags);
                                      }
                                      if (pAVar10 == nullptr) {
                                        dVar14 = local_8->flags;
                                        uVar35 = local_14;
                                        pcVar8_mg29 = st::fn_004057DB(local_EAX_488);
                                        st::fn_00405042(this_00,-0xab,pcVar8_mg29,uVar35,dVar14);
                                      }
                                      else {
                                        st::fn_00401CA8(pAVar10,(byte)local_15c,(ushort)local_158
                                                           ,(ushort)local_154,(ushort)local_150,
                                                           st::machine_word_boundary_cast<undefined4>(local_14c));
                                      }
                                      local_8 = reinterpret_cast<DArrayTy *>(&local_8->iteratorIndex);
                                      iVar37_mg85 = iVar37_mg85 + -1;
                                    } while (iVar37_mg85 != 0);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b7:

                              iVar39 = st::fn_00405132(reinterpret_cast<RecoveredRecord_AiEventClassTy_00650BD0 *>(&local_16c));
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[00656A74]: CALL dword ptr [EAX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  local_8 = (DArrayTy *)

                                            /* ST_CALLSITE[00656A99]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                            st::fn_00668F50
                                                      (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                       reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_8) {
                                    local_10 = reinterpret_cast<AiFltClassTy *>(output_values_neg_34);
                                    do {
                                      /* ST_CALLSITE[00656AEF]: CALL 0x004037d3; direct=004037D3 thunk_FUN_00677290; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__cdecl;pointer:/SubmarineTitans/Recovered/DArrayTy;/undefined4;/uint;/char;/short;/short;/short;/short;/short;/short;/int */
                                      pDVar16 = st::pointer_boundary_cast<DArrayTy *>(st::fn_004037D3(st::machine_word_boundary_cast<undefined4>(local_10->vtable),(uint)local_15c,
                                                                   (char)local_158,(short)local_154,
                                                                   (short)local_150,(short)local_14c
                                                                   ,(short)local_148,
                                                                   (short)local_144,(short)local_140
                                                                   ,1));
                                      if (pDVar16 == nullptr) {
                                        pAVar40 = local_10->vtable;
                                        uVar35 = local_14;
                                        pcVar8_mg28 = st::fn_004057DB(local_EAX_488);
                                        st::fn_00405042(this_00,-0xab,pcVar8_mg28,uVar35,
                                                           (int)pAVar40);
                                      }
                                      else {
                                        st::fn_00402270((uint)local_10->vtable,pDVar16);
                                        st::fn_006AE110(pDVar16);
                                      }
                                      local_10 = reinterpret_cast<AiFltClassTy *>(reinterpret_cast<byte *>(local_10) + 0x4);
                                      local_8 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                    } while (local_8 != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b8:

                              iVar39 = st::fn_0040158C(reinterpret_cast<RecoveredRecord_AiEventClassTy_00650CF0 *>(&local_16c));
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[00656B68]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  local_8 = (DArrayTy *)

                                            /* ST_CALLSITE[00656B8D]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                            st::fn_00668F50
                                                      (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                       reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_8) {
                                    local_10 = reinterpret_cast<AiFltClassTy *>(output_values_neg_34);
                                    do {
                                      /* ST_CALLSITE[00656BE3]: CALL 0x0040533a; direct=0040533A thunk_FUN_006773b0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__cdecl;pointer:/SubmarineTitans/Recovered/DArrayTy;/undefined4;/uint;/char;/short;/short;/short;/short;/short;/short;/int */
                                      pDVar16 = st::pointer_boundary_cast<DArrayTy *>(st::fn_0040533A(st::machine_word_boundary_cast<undefined4>(local_10->vtable),(uint)local_15c,
                                                                   (char)local_158,(short)local_154,
                                                                   (short)local_150,(short)local_14c
                                                                   ,(short)local_148,
                                                                   (short)local_144,(short)local_140
                                                                   ,1));
                                      if (pDVar16 == nullptr) {
                                        pAVar40 = local_10->vtable;
                                        uVar35 = local_14;
                                        pcVar8_mg27 = st::fn_004057DB(local_EAX_488);
                                        st::fn_00405042(this_00,-0xab,pcVar8_mg27,uVar35,
                                                           (int)pAVar40);
                                      }
                                      else {
                                        st::fn_00402270((uint)local_10->vtable,pDVar16);
                                        st::fn_006AE110(pDVar16);
                                      }
                                      local_10 = reinterpret_cast<AiFltClassTy *>(reinterpret_cast<byte *>(local_10) + 0x4);
                                      local_8 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                    } while (local_8 != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b9:

                              iVar39 = st::fn_004050DD(reinterpret_cast<RecoveredRecord_AiEventClassTy_00650E10 *>(&local_16c));
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[00656C5C]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  local_8 = (DArrayTy *)

                                            /* ST_CALLSITE[00656C81]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                            st::fn_00668F50
                                                      (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                       reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_8) {
                                    local_10 = reinterpret_cast<AiFltClassTy *>(output_values_neg_34);
                                    do {
                                      /* ST_CALLSITE[00656CD7]: CALL 0x00403c2e; direct=00403C2E thunk_FUN_006774c0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__cdecl;pointer:/SubmarineTitans/Recovered/DArrayTy;/undefined4;pointer:/byte;/char;/short;/short;/short;/short;/short;/short;/int */
                                      pDVar16 = st::pointer_boundary_cast<DArrayTy *>(st::fn_00403C2E(st::machine_word_boundary_cast<undefined4>(local_10->vtable),
                                                                   reinterpret_cast<byte *>(local_15c),(char)local_158
                                                                   ,(short)local_154,
                                                                   (short)local_150,(short)local_14c
                                                                   ,(short)local_148,
                                                                   (short)local_144,(short)local_140
                                                                   ,1));
                                      if (pDVar16 == nullptr) {
                                        pAVar40 = local_10->vtable;
                                        uVar35 = local_14;
                                        pcVar8_mg26 = st::fn_004057DB(local_EAX_488);
                                        st::fn_00405042(this_00,-0xab,pcVar8_mg26,uVar35,
                                                           (int)pAVar40);
                                      }
                                      else {
                                        st::fn_00402270((uint)local_10->vtable,pDVar16);
                                        st::fn_006AE110(pDVar16);
                                      }
                                      local_10 = reinterpret_cast<AiFltClassTy *>(reinterpret_cast<byte *>(local_10) + 0x4);
                                      local_8 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                    } while (local_8 != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                            }
                            goto cf_common_join_00652A99;
                          }
                          if (local_EAX_488 == 0x593) {

                            iVar39 = st::fn_00402F4A(reinterpret_cast<RecoveredRecord_AiEventClassTy_0064FD80 *>(&local_16c));
                            if (iVar39 == 0) {
                              iVar39 = -1;
                              uVar35 = local_14;
                              pcVar8_mg2F = st::fn_004057DB(0x593);
                              st::fn_00405042(this_00,-0x7d,pcVar8_mg2F,uVar35,iVar39);
                            }
                            else {
                              DAT_008118fc = 0;
                              /* ST_CALLSITE[00655E6C]: CALL 0x00402932; direct=00402932 _EnumArt */
                              st::fn_00402932((short)pDStack_164,reinterpret_cast<byte *>(local_160),(short)local_15c,
                                       (short)local_158,(short)local_154,(short)local_150,
                                       (short)local_14c,(short)local_148,st::function_address_boundary_cast<code *>(st::fn_0064DD30),
                                       st::machine_word_boundary_cast<undefined4>(&local_144));
                            }
                            goto cf_common_join_00659A73;
                          }
                          if (local_EAX_488 < 0x54e) {
                            if (local_EAX_488 == 0x54d) {

                              iVar39 = st::fn_00402A1D(reinterpret_cast<RecoveredRecord_0064EF10_0181E150 *>(&local_16c));
                              if (iVar39 == 0) {
                                iVar39 = -1;
                                uVar35 = local_14;
                                pcVar8_mg31 = st::fn_004057DB(0x54d);
                                st::fn_00405042(this_00,-0x7d,pcVar8_mg31,uVar35,iVar39);
                              }
                              else {
                                /* ST_CALLSITE[00653D4F]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 == 8) && (st::machine_word_boundary_cast<uint>(pDStack_164) == st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  iVar39 = -1;
                                  uVar35 = local_14;
                                  pcVar8_mg30 = st::fn_004057DB(0x54d);
                                  st::fn_00405042(this_00,-0x7d,pcVar8_mg30,uVar35,iVar39);
                                }
                                else {
                                  /* ST_CALLSITE[00653D8C]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                  local_EAX_5500 =
                                       st::fn_00668F50
                                                 (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                  reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                  output_values_neg_34);
                                  iVar39 = 0;
                                  if (0 < local_EAX_5500) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      if (*puVar12 == (uint)DAT_0080874d) {
                                        if (g_opticClass_007FB2A0 != nullptr) {
                                          st::fn_00404CEB((int)local_15c);
                                        }
                                        break;
                                      }
                                      iVar39 = iVar39 + 1;
                                      puVar12 = puVar12 + 1;
                                    } while (iVar39 < local_EAX_5500);
                                  }
                                }
                              }
                              goto cf_common_join_00659A73;
                            }
                            if (local_EAX_488 < 0x51b) {
                              if (local_EAX_488 == 0x51a) {

                                iVar39 = st::fn_00404C32(reinterpret_cast<RecoveredRecord_0064E960_781AC0FD *>(&local_16c));
                                if (iVar39 == 0) {
                                  iVar39 = -1;
                                  uVar35 = local_14;
                                  pcVar8_mg32 = st::fn_004057DB(0x51a);
                                  st::fn_00405042(this_00,-0x7d,pcVar8_mg32,uVar35,iVar39);
                                }
                                else {
                                  this_00->field_052F[(int)pDStack_164] = (uint)local_160;
                                }
                                goto cf_common_join_00659A73;
                              }
                              if (0x3e < local_EAX_488) {
                                if (local_EAX_488 < 0x517) {
                                  if (local_EAX_488 == 0x516) {

                                    iVar39 = st::fn_00402158(reinterpret_cast<short *>(&local_16c));
                                    if (iVar39 == 0) {
                                      iVar39 = -1;
                                      uVar35 = local_14;
                                      pcVar8_mg37 = st::fn_004057DB(0x516);
                                      st::fn_00405042(this_00,-0x7d,pcVar8_mg37,uVar35,iVar39);
                                    }
                                    else {
                                      if (st::machine_word_boundary_cast<uint>(pDStack_164) == st::machine_word_boundary_cast<uint>((DArrayTy *)0x9)) {
                                        /* ST_CALLSITE[00652FD4]: CALL dword ptr [EDX + 0x18] */
                                        iVar39 = this_00->vfunc_18();
                                        if (iVar39 == 8) {
                                          pDVar16 = local_15c;
                                          if ((int)local_15c <= (int)local_158) {
                                            do {
                                              puVar9 = STPointerBoundaryCast<undefined1 *>(st::fn_004048E0(this_00,(int)pDVar16));
                                              if (puVar9 != nullptr) {
                                                *puVar9 = 0;
                                              }
                                              pDVar16 = (DArrayTy *)((int)&pDVar16->flags + 1);
                                            } while ((int)pDVar16 <= (int)local_158);
                                          }
                                          goto cf_common_join_00659A73;
                                        }
                                      }
                                      /* ST_CALLSITE[00653023]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                      iVar37_mgC4 = st::fn_00668F50
                                                              (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00)
                                                               ,reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                               output_values_neg_34);
                                      if (0 < iVar37_mgC4) {
                                        local_8 = reinterpret_cast<DArrayTy *>(output_values_neg_34);
                                        do {
                                          if (g_allPlayers_007FA174 == nullptr) {
                                            local_10 = nullptr;
                                          }
                                          else {
                                            local_10 = reinterpret_cast<AiFltClassTy *>(st::fn_00401DC5((char)local_8->flags));
                                          }
                                          pDVar16 = local_15c;
                                          if ((int)local_15c <= (int)local_158) {
                                            do {
                                              if (local_10 != nullptr) {
                                                puVar9 = STPointerBoundaryCast<undefined1 *>(st::fn_004048E0(&local_10->field_001C,
                                                                            (int)pDVar16));
                                                if (puVar9 != nullptr) {
                                                  *puVar9 = 0;
                                                }
                                              }
                                              pDVar16 = (DArrayTy *)((int)&pDVar16->flags + 1);
                                            } while ((int)pDVar16 <= (int)local_158);
                                          }
                                          local_8 = reinterpret_cast<DArrayTy *>(&local_8->iteratorIndex);
                                          iVar37_mgC4 = iVar37_mgC4 + -1;
                                        } while (iVar37_mgC4 != 0);
                                      }
                                    }
                                  }
                                  else if (local_EAX_488 == 0x42) {

                                    iVar39 = st::fn_0040199C((int)&local_16c);
                                    if (iVar39 == 0) {
                                      iVar39 = -1;
                                      uVar35 = local_14;
                                      pcVar8_mg38 = st::fn_004057DB(0x42);
                                      st::fn_00405042(this_00,-0x7d,pcVar8_mg38,uVar35,iVar39);
                                    }
                                    else {
                                      pDVar16 = local_160;
                                      if (pDStack_164 == nullptr)
                                      goto cf_continue_loop_00659A80;
                                    }
                                  }
                                  else if (local_EAX_488 == 0x322) {
                                    local_174 = 1;
                                  }
                                  else if (local_EAX_488 == 0x515) {

                                    iVar39 = st::fn_00404174(reinterpret_cast<short *>(&local_16c));
                                    if (iVar39 == 0) {
                                      iVar39 = -1;
                                      uVar35 = local_14;
                                      pcVar8_mg39 = st::fn_004057DB(0x515);
                                      st::fn_00405042(this_00,-0x7d,pcVar8_mg39,uVar35,iVar39);
                                    }
                                    else if (pDStack_164 == nullptr) {
                                      *(undefined1 *)local_178 = 0;
                                      local_178->field_000B = 0;
                                    }
                                    else {
                                      *(undefined1 *)local_178 = 1;
                                      local_178->field_000B = st::machine_word_boundary_cast<undefined4>(pDStack_164);
                                    }
                                  }
                                }
                                else if (local_EAX_488 == 0x517) {

                                  iVar39 = st::fn_0040339B(reinterpret_cast<short *>(&local_16c));
                                  if (iVar39 == 0) {
                                    iVar39 = -1;
                                    uVar35 = local_14;
                                    pcVar8_mg33 = st::fn_004057DB(0x517);
                                    st::fn_00405042(this_00,-0x7d,pcVar8_mg33,uVar35,iVar39);
                                  }
                                  else {
                                    if (st::machine_word_boundary_cast<uint>(pDStack_164) == st::machine_word_boundary_cast<uint>((DArrayTy *)0x9)) {
                                      /* ST_CALLSITE[0065321C]: CALL dword ptr [EDX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if (iVar39 == 8) {
                                        pDVar16 = local_15c;
                                        if ((int)local_15c <= (int)local_158) {
                                          do {

                                            ppbVar11 = st::fn_004048E0(this_00,(int)pDVar16);
                                            if (ppbVar11 != 0) {
                                              *(undefined1 *)ppbVar11 = 1;
                                              *(byte **)(ppbVar11 + 0xb) = local_154;
                                            }
                                            pDVar16 = (DArrayTy *)((int)&pDVar16->flags + 1);
                                          } while ((int)pDVar16 <= (int)local_158);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    local_c = (DArrayTy *)

                                              /* ST_CALLSITE[00653274]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                              st::fn_00668F50
                                                        (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                         reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                         output_values_neg_34);
                                    if (0 < (int)local_c) {
                                      local_8 = reinterpret_cast<DArrayTy *>(output_values_neg_34);
                                      do {
                                        if (g_allPlayers_007FA174 == nullptr) {
                                          local_10 = nullptr;
                                        }
                                        else {
                                          local_10 = reinterpret_cast<AiFltClassTy *>(st::fn_00401DC5((char)local_8->flags));
                                        }
                                        pDVar16 = local_15c;
                                        if ((int)local_15c <= (int)local_158) {
                                          do {
                                            if (local_10 != nullptr) {

                                              ppbVar11_mg1 = st::fn_004048E0(&local_10->
                                                                                 field_001C,
                                                                                (int)pDVar16);
                                              if (ppbVar11_mg1 != 0) {
                                                *(undefined1 *)ppbVar11_mg1 = 1;
                                                *(byte **)(ppbVar11_mg1 + 0xb) = local_154;
                                              }
                                            }
                                            pDVar16 = (DArrayTy *)((int)&pDVar16->flags + 1);
                                          } while ((int)pDVar16 <= (int)local_158);
                                        }
                                        local_8 = reinterpret_cast<DArrayTy *>(&local_8->iteratorIndex);
                                        local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                      } while (local_c != nullptr);
                                    }
                                  }
                                }
                                else if (local_EAX_488 == 0x518) {

                                  iVar39 = st::fn_00405588(reinterpret_cast<RecoveredRecord_0064E8C0_55D619B7 *>(&local_16c));
                                  if (iVar39 == 0) {
                                    iVar39 = -1;
                                    uVar35 = local_14;
                                    pcVar8_mg35 = st::fn_004057DB(0x518);
                                    st::fn_00405042(this_00,-0x7d,pcVar8_mg35,uVar35,iVar39);
                                  }
                                  else {
                                    if (st::machine_word_boundary_cast<uint>(pDStack_164) == st::machine_word_boundary_cast<uint>((DArrayTy *)0x9)) {
                                      /* ST_CALLSITE[0065313E]: CALL dword ptr [EAX + 0x18] */
                                      iVar39 = this_00->vfunc_18();
                                      if (iVar39 == 8) {
                                        *(uint **)(&this_00->field_0xde + (int)local_15c * 4) =
                                             local_158;
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    /* ST_CALLSITE[00653172]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                    iVar37_mgBE = st::fn_00668F50
                                                            (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                             reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                             output_values_neg_34);
                                    if (0 < iVar37_mgBE) {
                                      puVar12 = output_values_neg_34;
                                      do {
                                        if (g_allPlayers_007FA174 == nullptr) {
                                          pAVar10 = nullptr;
                                        }
                                        else {
                                          pAVar10 = st::fn_00401DC5((char)*puVar12);
                                        }
                                        if (pAVar10 == nullptr) {
                                          uVar35 = *puVar12;
                                          uVar30 = local_14;
                                          pcVar8_mg34 = st::fn_004057DB(0x518);
                                          st::fn_00405042(this_00,-0xab,pcVar8_mg34,uVar30,uVar35
                                                            );
                                        }
                                        else {
                                          *(uint **)(&pAVar10->field_0xfa + (int)local_15c * 4) =
                                               local_158;
                                        }
                                        puVar12 = puVar12 + 1;
                                        iVar37_mgBE = iVar37_mgBE + -1;
                                      } while (iVar37_mgBE != 0);
                                    }
                                  }
                                }
                                else if (local_EAX_488 == 0x519) {

                                  iVar39 = st::fn_00403832(reinterpret_cast<RecoveredRecord_0064E910_BEEF74E3 *>(&local_16c));
                                  if (iVar39 == 0) {
                                    iVar39 = -1;
                                    uVar35 = local_14;
                                    pcVar8_mg36 = st::fn_004057DB(0x519);
                                    st::fn_00405042(this_00,-0x7d,pcVar8_mg36,uVar35,iVar39);
                                  }
                                  else {
                                    (&DAT_0080e43b)[(int)pDStack_164] = st::machine_word_boundary_cast<undefined4>(local_160);
                                  }
                                }
                                goto cf_common_join_00659A73;
                              }
                              if (local_EAX_488 == 0x3e) {
switchD_00652b42_switchD:
                                switch(static_cast<uint32_t>(STRawWord(local_15c))) {
                                case 0:

                                  iVar39 = st::fn_004046A6(reinterpret_cast<RecoveredRecord_0064EA10_A671C4A7 *>(&local_16c));
                                  if (iVar39 == 0) goto cf_common_join_00652A99;
                                  switch(local_EAX_488) {
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
                                      st::fn_00405042(this_00,-0x67,&CHAR_00h_008016a0,local_14,
                                                         -1);
                                    }
                                    else {
                                      *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4) =
                                           *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4) /
                                           (int)local_160;
                                    }
                                    break;
                                  case 0x2d:
                                    if (local_160 == nullptr) {
                                      st::fn_00405042(this_00,-0x67,&CHAR_00h_008016a0,local_14,
                                                         -1);
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
                                case 0x1:

                                  iVar39 = st::fn_004046A6(reinterpret_cast<RecoveredRecord_0064EA10_A671C4A7 *>(&local_16c));
                                  if (iVar39 == 0) goto cf_common_join_00652A99;
                                  switch(local_EAX_488) {
                                  case 2:
                                    (&DAT_0080e43b)[(int)pDStack_164] =
                                         (int)&local_160->flags + (&DAT_0080e43b)[(int)pDStack_164];
                                    break;
                                  case 5:
                                    (&DAT_0080e43b)[(int)pDStack_164] = st::machine_word_boundary_cast<undefined4>(local_160);
                                    break;
                                  case 0x17:
                                    if (local_160 == nullptr) {
                                      st::fn_00405042(this_00,-0x67,&CHAR_00h_008016a0,local_14,
                                                         -1);
                                    }
                                    else {
                                      (&DAT_0080e43b)[(int)pDStack_164] =
                                           st::storage_bit_cast<int>(static_cast<uint32_t>((&DAT_0080e43b)[(int)pDStack_164])) / (int)local_160;
                                    }
                                    break;
                                  case 0x2d:
                                    if (local_160 == nullptr) {
                                      st::fn_00405042(this_00,-0x67,&CHAR_00h_008016a0,local_14,
                                                         -1);
                                    }
                                    else {
                                      (&DAT_0080e43b)[(int)pDStack_164] =
                                           st::storage_bit_cast<int>(static_cast<uint32_t>((&DAT_0080e43b)[(int)pDStack_164])) % (int)local_160;
                                    }
                                    break;
                                  case 0x31:
                                    (&DAT_0080e43b)[(int)pDStack_164] =
                                         st::machine_word_boundary_cast<undefined4>((&DAT_0080e43b)[(int)pDStack_164] * (int)local_160);
                                    break;
                                  case 0x3e:
                                    (&DAT_0080e43b)[(int)pDStack_164] =
                                         st::machine_word_boundary_cast<undefined4>((&DAT_0080e43b)[(int)pDStack_164] - (int)local_160);
                                  }
                                  break;
                                case 0x2:

                                  iVar39 = st::fn_0040378D(reinterpret_cast<RecoveredRecord_0064EA60_9905C978 *>(&local_16c));
                                  if (iVar39 == 0) goto cf_common_join_00652A99;
                                  switch(local_EAX_488) {
                                  case 2:
                                    this_00->field_052F[(int)pDStack_164] =
                                         (int)&local_160->flags +
                                         this_00->field_052F[(int)pDStack_164];
                                    break;
                                  case 5:
                                    this_00->field_052F[(int)pDStack_164] = (uint)local_160;
                                    break;
                                  case 0x17:
                                    if (local_160 == nullptr) {
                                      st::fn_00405042(this_00,-0x67,&CHAR_00h_008016a0,local_14,
                                                         -1);
                                    }
                                    else {
                                      this_00->field_052F[(int)pDStack_164] =
                                           (int)this_00->field_052F[(int)pDStack_164] /
                                           (int)local_160;
                                    }
                                    break;
                                  case 0x2d:
                                    if (local_160 == nullptr) {
                                      st::fn_00405042(this_00,-0x67,&CHAR_00h_008016a0,local_14,
                                                         -1);
                                    }
                                    else {
                                      this_00->field_052F[(int)pDStack_164] =
                                           (int)this_00->field_052F[(int)pDStack_164] %
                                           (int)local_160;
                                    }
                                    break;
                                  case 0x31:
                                    this_00->field_052F[(int)pDStack_164] =
                                         st::machine_word_boundary_cast<uint>(this_00->field_052F[(int)pDStack_164] * (int)local_160);
                                    break;
                                  case 0x3e:
                                    this_00->field_052F[(int)pDStack_164] =
                                         st::machine_word_boundary_cast<uint>(this_00->field_052F[(int)pDStack_164] - (int)local_160);
                                  }
                                  break;
                                case 0x3:

                                  iVar39 = st::fn_004023F1(reinterpret_cast<RecoveredRecord_0064EAA0_C5553866 *>(&local_16c));
                                  if (iVar39 == 0) goto cf_common_join_00652A99;
                                  if (local_EAX_488 == 5) {

                                    st::fn_006B6020
                                              (this_00->field_05B3,st::machine_word_boundary_cast<uint>(pDStack_164),
                                               reinterpret_cast<char *>(local_160));
                                  }
                                }
                                goto cf_common_join_00659A73;
                              }
                              switch(local_EAX_488) {
                              case 2:
                              case 5:
                              case 0x17:
                              case 0x2d:
                              case 0x31:
                                goto switchD_00652b42_switchD;
                              case 0x19:

                                iVar39 = st::fn_004020EF((int)&local_16c);
                                if (iVar39 == 0) goto cf_common_join_00652A99;
                                if (local_174 != 0) {
                                  local_174 = 0;
                                  local_170 = pDStack_164;
                                  pDVar16 = local_170;
                                  goto cf_continue_loop_00659A80;
                                }
                                local_174 = 0;
                                break;
                              case 0x21:

                                iVar39 = st::fn_00405A65((int)&local_16c);
                                pDVar16 = pDStack_164;
                                if (iVar39 == 0) goto cf_common_join_00652A99;
                                goto cf_continue_loop_00659A80;
                              case 0x23:

                                iVar39 = st::fn_004011CC((int)&local_16c);
                                if (iVar39 == 0) goto cf_common_join_00652A99;
                                if (pDStack_164 == nullptr) {
                                  local_170 = local_160;
                                  pDVar16 = local_170;
                                  goto cf_continue_loop_00659A80;
                                }
                              }
                              goto cf_common_join_00659A73;
                            }
                            switch(static_cast<uint32_t>(STRawWord(local_EAX_488))) {
                            case 0x51b:

                              iVar39 = st::fn_00403CD3(reinterpret_cast<RecoveredRecord_0064E9A0_7C06081A *>(&local_16c));
                              if (iVar39 == 0) goto cf_common_join_00652A99;

                              st::fn_006B6020
                                        (this_00->field_05B3,st::machine_word_boundary_cast<uint>(pDStack_164),reinterpret_cast<char *>(local_160));
                              break;
                            case 0x528:

                              local_EAX_2959 =
                                   st::fn_004041C4(reinterpret_cast<RecoveredRecord_0064EB20_CBD2CC1E *>(&local_16c));
                              if (local_EAX_2959 != 0) {
                                /* ST_CALLSITE[006533B3]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  local_c = (DArrayTy *)

                                            /* ST_CALLSITE[006533D8]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                            st::fn_00668F50
                                                      (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                       reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    pCVar26 = g_cPanel_00801688;
                                    do {
                                      if (pCVar26 != nullptr) {
                                        /* ST_CALLSITE[00653401]: CALL 0x00401410; direct=00401410 CPanelTy::sub_004F9120 */
                                        st::fn_00401410
                                                  (pCVar26,(byte)*puVar12,'\x01',st::machine_word_boundary_cast<undefined4>(local_15c));
                                        pCVar26 = g_cPanel_00801688;
                                      }
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x529:

                              iVar39 = st::fn_00404E3A((int)&local_16c);
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[00653438]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  /* ST_CALLSITE[0065345D]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/CPanelTy; signature=__thiscall;pointer:/CPanelTy;pointer:/SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_0064A970;pointer:/char;/uint;pointer:/uint */
                                  iVar37_mgF4 = st::pointer_boundary_cast<CPanelTy *>(st::fn_00668F50
                                                          (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                           reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                           output_values_neg_34));
                                  if (0 < (int)iVar37_mgF4) {
                                    puVar12 = output_values_neg_34;
                                    pCVar26 = g_cPanel_00801688;
                                    do {
                                      if (pCVar26 != nullptr) {
                                        /* ST_CALLSITE[00653481]: CALL 0x00401410; direct=00401410 CPanelTy::sub_004F9120 */
                                        st::fn_00401410(pCVar26,(byte)*puVar12,'\0',0);
                                        pCVar26 = g_cPanel_00801688;
                                      }
                                      puVar12 = puVar12 + 1;
                                      iVar37_mgF4 = reinterpret_cast<CPanelTy *>(&iVar37_mgF4[-1].field_17DE);
                                    } while (iVar37_mgF4 != nullptr);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x52a:

                              iVar39 = st::fn_0040510A((int)&local_16c);
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[006534B8]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  /* ST_CALLSITE[006534DD]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                  local_EAX_3277 =
                                       st::fn_00668F50
                                                 (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                  reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                  output_values_neg_34);
                                  iVar39 = 0;
                                  if (0 < local_EAX_3277) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      if (*puVar12 == (uint)DAT_0080874d) {
                                        if (g_cPanel_00801688 != nullptr) {
                                          st::fn_00402DB0((char)local_15c);
                                        }
                                        break;
                                      }
                                      iVar39 = iVar39 + 1;
                                      puVar12 = puVar12 + 1;
                                    } while (iVar39 < local_EAX_3277);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x532:

                              local_EAX_3358 =
                                   st::fn_00403D82(reinterpret_cast<RecoveredRecord_0064EBE0_6039A486 *>(&local_16c));
                              if (local_EAX_3358 == 0) goto cf_common_join_00652A99;
                              if (g_popUp_008016D8 != nullptr) {
                                if (st::machine_word_boundary_cast<uint>(pDStack_164) == st::machine_word_boundary_cast<uint>((DArrayTy *)0x9)) {
                                  /* ST_CALLSITE[00653558]: CALL dword ptr [EDX + 0x18] */
                                  iVar39 = this_00->vfunc_18();
                                  if (iVar39 == 8) {
                                    /* ST_CALLSITE[0065356E]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
                                    st::fn_004014D8(g_popUp_008016D8,reinterpret_cast<char *>(local_15c),8);
                                    break;
                                  }
                                }
                                /* ST_CALLSITE[0065358C]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                local_EAX_3452 =
                                     st::fn_00668F50
                                               (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                output_values_neg_34);
                                iVar39 = 0;
                                if (0 < local_EAX_3452) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      /* ST_CALLSITE[006535C6]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
                                      st::fn_004014D8(g_popUp_008016D8,reinterpret_cast<char *>(local_15c),8);
                                      break;
                                    }
                                    iVar39 = iVar39 + 1;
                                    puVar12 = puVar12 + 1;
                                  } while (iVar39 < local_EAX_3452);
                                }
                              }
                              break;
                            case 0x533:

                              local_EAX_3527 =
                                   st::fn_00403AC1(reinterpret_cast<RecoveredRecord_0064EC30_383D4D00 *>(&local_16c));
                              if (local_EAX_3527 == 0) goto cf_common_join_00652A99;
                              if (st::machine_word_boundary_cast<uint>(pDStack_164) == st::machine_word_boundary_cast<uint>((DArrayTy *)0x9)) {
                                /* ST_CALLSITE[006535F4]: CALL dword ptr [EAX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if (iVar39 == 8) {
                                  if (g_helpString_00801694 != nullptr) {
                                    /* ST_CALLSITE[0065362D]: CALL 0x00402045; direct=00402045 HelpStringTy::sub_0051FAC0 */
                                    st::fn_00402045
                                              (g_helpString_00801694,reinterpret_cast<char *>(local_154),2,
                                               (char)local_158,(int)local_15c * 1000);
                                  }
                                  break;
                                }
                              }
                              /* ST_CALLSITE[0065364B]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                              local_EAX_3643 =
                                   st::fn_00668F50
                                             (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                              reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                              output_values_neg_34);
                              iVar39 = 0;
                              if (0 < local_EAX_3643) {
                                puVar12 = output_values_neg_34;
                                do {
                                  if (*puVar12 == (uint)DAT_0080874d) {
                                    if (g_helpString_00801694 != nullptr) {
                                      /* ST_CALLSITE[006536A7]: CALL 0x00402045; direct=00402045 HelpStringTy::sub_0051FAC0 */
                                      st::fn_00402045
                                                (g_helpString_00801694,reinterpret_cast<char *>(local_154),2,
                                                 (char)local_158,(int)local_15c * 1000);
                                    }
                                    break;
                                  }
                                  iVar39 = iVar39 + 1;
                                  puVar12 = puVar12 + 1;
                                } while (iVar39 < local_EAX_3643);
                              }
                              break;
                            case 0x534:

                              local_EAX_3752 =
                                   st::fn_004014AB(reinterpret_cast<RecoveredRecordView_0064EC80_78BCE981 *>(&local_16c));
                              if (local_EAX_3752 == 0) goto cf_common_join_00652A99;
                              if (st::machine_word_boundary_cast<uint>(pDStack_164) == st::machine_word_boundary_cast<uint>((DArrayTy *)0x9)) {
                                /* ST_CALLSITE[006536D5]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if (iVar39 == 8) {
LAB_006536dd:
                                  if (g_cPanel_00801688 != nullptr) {
                                    /* ST_CALLSITE[00653703]: CALL 0x00403152; direct=00403152 CPanelTy::OutText */
                                    st::fn_00403152(g_cPanel_00801688,(int)local_158,
                                                      (int)(local_154 + (1 - (int)local_158)),
                                                      st::machine_word_boundary_cast<undefined4>(local_15c));
                                  }
                                  break;
                                }
                              }
                              /* ST_CALLSITE[00653721]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                              local_EAX_3857 =
                                   st::fn_00668F50
                                             (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                              reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                              output_values_neg_34);
                              iVar39 = 0;
                              if (0 < local_EAX_3857) {
                                puVar12 = output_values_neg_34;
                                do {
                                  if (*puVar12 == (uint)DAT_0080874d) goto LAB_006536dd;
                                  iVar39 = iVar39 + 1;
                                  puVar12 = puVar12 + 1;
                                } while (iVar39 < local_EAX_3857);
                              }
                              break;
                            case 0x535:

                              local_EAX_3907 =
                                   st::fn_0040344F(reinterpret_cast<RecoveredRecord_0064ECD0_D70CBA34 *>(&local_16c));
                              if (local_EAX_3907 == 0) goto cf_common_join_00652A99;
                              if (st::machine_word_boundary_cast<uint>(pDStack_164) == st::machine_word_boundary_cast<uint>((DArrayTy *)0x9)) {
                                /* ST_CALLSITE[00653770]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if (iVar39 == 8) {
LAB_00653778:
                                  if (g_cPanel_00801688 != nullptr) {
                                    /* ST_CALLSITE[00653794]: CALL 0x0040195b; direct=0040195B CPanelTy::OutText */
                                    st::fn_0040195B(g_cPanel_00801688,reinterpret_cast<char *>(local_158),st::machine_word_boundary_cast<undefined4>(local_15c));
                                  }
                                  break;
                                }
                              }
                              /* ST_CALLSITE[006537B2]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                              local_EAX_4002 =
                                   st::fn_00668F50
                                             (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                              reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                              output_values_neg_34);
                              iVar39 = 0;
                              if (0 < local_EAX_4002) {
                                puVar12 = output_values_neg_34;
                                do {
                                  if (*puVar12 == (uint)DAT_0080874d) goto LAB_00653778;
                                  iVar39 = iVar39 + 1;
                                  puVar12 = puVar12 + 1;
                                } while (iVar39 < local_EAX_4002);
                              }
                              break;
                            case 0x536:

                              local_EAX_4052 =
                                   st::fn_00405E2A(reinterpret_cast<RecoveredRecord_0064ED20_BEFBD077 *>(&local_16c));
                              if (local_EAX_4052 == 0) goto cf_common_join_00652A99;
                              if (st::machine_word_boundary_cast<uint>(pDStack_164) == st::machine_word_boundary_cast<uint>((DArrayTy *)0x9)) {
                                /* ST_CALLSITE[00653801]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if (iVar39 == 8) {
                                  /* ST_CALLSITE[0065381D]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
                                  st::fn_00404BD8
                                            (reinterpret_cast<SoundClassTy *>(&g_sound),SOUND_MODE_12,
                                             reinterpret_cast<char *>(local_15c),0,nullptr,0);
                                  break;
                                }
                              }
                              /* ST_CALLSITE[0065383B]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                              local_EAX_4139 =
                                   st::fn_00668F50
                                             (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                              reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                              output_values_neg_34);
                              iVar39 = 0;
                              if (0 < local_EAX_4139) {
                                puVar12 = output_values_neg_34;
                                do {
                                  if (*puVar12 == (uint)DAT_0080874d) {
                                    /* ST_CALLSITE[0065387A]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
                                    st::fn_00404BD8
                                              (reinterpret_cast<SoundClassTy *>(&g_sound),SOUND_MODE_12,
                                               reinterpret_cast<char *>(local_15c),0,nullptr,0);
                                    break;
                                  }
                                  iVar39 = iVar39 + 1;
                                  puVar12 = puVar12 + 1;
                                } while (iVar39 < local_EAX_4139);
                              }
                              break;
                            case 0x537:

                              local_EAX_4219 =
                                   st::fn_004043C2(reinterpret_cast<RecoveredRecord_0064ED70_6DBB3410 *>(&local_16c));
                              if (local_EAX_4219 == 0) goto cf_common_join_00652A99;
                              if (st::machine_word_boundary_cast<uint>(pDStack_164) == st::machine_word_boundary_cast<uint>((DArrayTy *)0x9)) {
                                /* ST_CALLSITE[006538A8]: CALL dword ptr [EAX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if (iVar39 == 8) {
                                  if (g_cPanel_00801688 != nullptr) {
                                    /* ST_CALLSITE[006538C5]: CALL 0x00402c1b; direct=00402C1B CPanelTy::PlayBriefing */
                                    st::fn_00402C1B(g_cPanel_00801688,reinterpret_cast<char *>(local_15c));
                                  }
                                  break;
                                }
                              }
                              /* ST_CALLSITE[006538E3]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                              local_EAX_4307 =
                                   st::fn_00668F50
                                             (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                              reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                              output_values_neg_34);
                              iVar39 = 0;
                              if (0 < local_EAX_4307) {
                                puVar12 = output_values_neg_34;
                                do {
                                  if (*puVar12 == (uint)DAT_0080874d) {
                                    if (g_cPanel_00801688 != nullptr) {
                                      /* ST_CALLSITE[00653923]: CALL 0x00402c1b; direct=00402C1B CPanelTy::PlayBriefing */
                                      st::fn_00402C1B(g_cPanel_00801688,reinterpret_cast<char *>(local_15c));
                                    }
                                    break;
                                  }
                                  iVar39 = iVar39 + 1;
                                  puVar12 = puVar12 + 1;
                                } while (iVar39 < local_EAX_4307);
                              }
                              break;
                            case 0x546:

                              iVar39 = st::fn_00405B4B((int)&local_16c);
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[00653948]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  /* ST_CALLSITE[0065396D]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                  local_EAX_4445 =
                                       st::fn_00668F50
                                                 (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                  reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                  output_values_neg_34);
                                  iVar39 = 0;
                                  if (0 < local_EAX_4445) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      if (*puVar12 == (uint)DAT_0080874d) {
                                        if (g_visibleClass_00802A88 != nullptr) {
                                          if ((int)local_14c < 0) {
                                            iVar11 = -0x10;
                                          }
                                          else {
                                            iVar11 = (int)local_14c * 0x19;
                                          }
                                          /* ST_CALLSITE[006539DF]: CALL 0x00401fd2; direct=00401FD2 VisibleClassTy::VisHoleCreate */
                                          st::fn_00401FD2
                                                    (g_visibleClass_00802A88,(int)local_15c,
                                                     (int)local_158,local_154,
                                                     output_values_neg_34[iVar39],local_150,iVar11);
                                        }
                                        break;
                                      }
                                      iVar39 = iVar39 + 1;
                                      puVar12 = puVar12 + 1;
                                    } while (iVar39 < local_EAX_4445);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x547:
                            case 0x548:

                              iVar39 = st::fn_004018F7((int)&local_16c);
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[00653A04]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  /* ST_CALLSITE[00653A29]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                  iVar37_mgDF = st::fn_00668F50
                                                          (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                           reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                           output_values_neg_34);
                                  iVar39 = 0;
                                  if (0 < iVar37_mgDF) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      if (*puVar12 == (uint)DAT_0080874d) {
                                        if (g_visibleClass_00802A88 == nullptr) break;
                                        if (g_visibleClass_00802A88->field_0114 == 0) {
                                          g_visibleClass_00802A88->field_00F8 = 0;
                                        }
                                        else {
                                          g_visibleClass_00802A88->field_00F8 =
                                               (uint)(local_EAX_488 == 0x547);
                                          pSVar4 = g_sT3DSMAPContext_00807598;
                                          if ((local_EAX_488 == 0x547) != 0) {
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
                                      iVar39 = iVar39 + 1;
                                      puVar12 = puVar12 + 1;
                                    } while (iVar39 < iVar37_mgDF);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x549:

                              iVar39 = st::fn_00401FE1(reinterpret_cast<short *>(&local_16c));
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[00653ADD]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  /* ST_CALLSITE[00653B02]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                  local_EAX_4850 =
                                       st::fn_00668F50
                                                 (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                  reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                  output_values_neg_34);
                                  iVar39 = 0;
                                  if (0 < local_EAX_4850) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      if (*puVar12 == (uint)DAT_0080874d) {
                                        if (g_opticClass_007FB2A0 != nullptr) {
                                          st::fn_00401519((int)local_154,&local_15c->flags,
                                                             (int)local_158);
                                        }
                                        break;
                                      }
                                      iVar39 = iVar39 + 1;
                                      puVar12 = puVar12 + 1;
                                    } while (iVar39 < local_EAX_4850);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x54a:

                              iVar39 = st::fn_00401DED((int)&local_16c);
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[00653B75]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  /* ST_CALLSITE[00653B9A]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                  iVar37_mgD7 = st::fn_00668F50
                                                          (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                           reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                           output_values_neg_34);
                                  iVar39 = 0;
                                  if (0 < iVar37_mgD7) {
                                    puVar12 = output_values_neg_34;
LAB_00653bb7:
                                    if (*puVar12 != (uint)DAT_0080874d) goto code_r0x00653bbb;
                                    if (g_opticClass_007FB2A0 != nullptr) {
                                      memset(local_1c0, 0, 0x20); /* compiler bulk-zero initialization */
                                      switch(st::machine_word_boundary_cast<uint>(local_15c)) {
                                      case 0:
                                        local_1b0 = 0x104;
                                        break;
                                      case 0x1:
                                        local_1b0 = 0x105;
                                        break;
                                      case 0x2:
                                        local_1b0 = 0x106;
                                        break;
                                      case 0x3:
                                        local_1b0 = 0x107;
                                        break;
                                      default:
                                        iVar39 = -1;
                                        uVar35 = local_14;
                                        pcVar8_mg3A = st::fn_004057DB(local_EAX_488);
                                        st::fn_00405042(this_00,-0x7d,pcVar8_mg3A,uVar35,iVar39);
                                        goto cf_common_join_00659A73;
                                      }
                                      /* ST_CALLSITE[00653C37]: CALL dword ptr [EAX + 0x30] */
                                      (*this_00->vtable->vfunc_30)(3,0x100,st::machine_word_boundary_cast<undefined4>(local_1c0));
                                    }
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x54b:
                            case 0x54c:

                              iVar39 = st::fn_00402568((int)&local_16c);
                              if (iVar39 != 0) {
                                /* ST_CALLSITE[00653C7B]: CALL dword ptr [EDX + 0x18] */
                                iVar39 = this_00->vfunc_18();
                                if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                  /* ST_CALLSITE[00653CA0]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                  iVar37_mgD3 = st::fn_00668F50
                                                          (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                           reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                           output_values_neg_34);
                                  iVar39 = 0;
                                  if (0 < iVar37_mgD3) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      if (*puVar12 == (uint)DAT_0080874d) {
                                        if (g_opticClass_007FB2A0 != nullptr) {
                                          memset(local_1c0, 0, 0x20); /* compiler bulk-zero initialization */
                                          iVar39 = 0;
                                          local_1b0 = (local_EAX_488 != 0x54b) + 0x100;
                                          /* ST_CALLSITE[00653D11]: CALL dword ptr [EDX + 0x30] */
                                          (*this_00->vtable->vfunc_30)(3,0x100,st::machine_word_boundary_cast<undefined4>(local_1c0));
                                        }
                                        break;
                                      }
                                      iVar39 = iVar39 + 1;
                                      puVar12 = puVar12 + 1;
                                    } while (iVar39 < iVar37_mgD3);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            }
                            goto cf_common_join_00659A73;
                          }
                          switch(static_cast<uint32_t>(STRawWord(local_EAX_488))) {
                          case 0x54e:

                            iVar39 = st::fn_00401AC8((int)&local_16c);
                            if (iVar39 != 0) {
                              /* ST_CALLSITE[00653E0F]: CALL dword ptr [EAX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                /* ST_CALLSITE[00653E34]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                local_EAX_5668 =
                                     st::fn_00668F50
                                               (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                output_values_neg_34);
                                iVar39 = 0;
                                if (0 < local_EAX_5668) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      st::fn_0040222F((byte)local_15c,(int)local_158,
                                                         (int)local_154);
                                      break;
                                    }
                                    iVar39 = iVar39 + 1;
                                    puVar12 = puVar12 + 1;
                                  } while (iVar39 < local_EAX_5668);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          default:
                            goto cf_common_join_00659A73;
                          case 0x55a:

                            iVar39 = st::fn_004029EB((int)&local_16c);
                            if (iVar39 != 0) {
                              /* ST_CALLSITE[00653E9C]: CALL dword ptr [EDX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                local_c = (DArrayTy *)

                                          /* ST_CALLSITE[00653EC1]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                          st::fn_00668F50
                                                    (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                     reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)local_c) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    uVar35 = *puVar12;
                                    (&DAT_00809950)[uVar35] =
                                         (st::machine_word_boundary_cast<uint>(local_15c) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x1)) + '\x01';
                                    if (uVar35 == DAT_0080874d) {
                                      DAT_0080c522 = (uint)(st::machine_word_boundary_cast<uint>(local_15c) == st::machine_word_boundary_cast<uint>((DArrayTy *)0x1));
                                    }
                                    puVar12 = puVar12 + 1;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x55b:

                            local_EAX_5904 =
                                 st::fn_00402BD0(reinterpret_cast<RecoveredRecord_0064F0C0_EC627629 *>(&local_16c));
                            if (local_EAX_5904 != 0) {
                              /* ST_CALLSITE[00653F34]: CALL dword ptr [EDX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                /* ST_CALLSITE[00653F59]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                local_EAX_5961 =
                                     st::fn_00668F50
                                               (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                output_values_neg_34);
                                iVar39 = 0;
                                if (0 < local_EAX_5961) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      if (((char)local_15c->flags != '\0') &&
                                         (((char)DAT_008087a0 == '\x03' ||
                                          ((char)DAT_008087a0 == '\b')))) {
                                        st::fn_0072E730
                                                  (reinterpret_cast<byte *>(&CHAR_00h_0080ef1e),nullptr,local_384,
                                                   nullptr,nullptr);
                                        st::fn_0072F110
                                                  (reinterpret_cast<char *>(&DAT_0080c632),nullptr,reinterpret_cast<char *>(local_384),
                                                   reinterpret_cast<char *>(local_15c),nullptr);
                                      }
                                      break;
                                    }
                                    iVar39 = iVar39 + 1;
                                    puVar12 = puVar12 + 1;
                                  } while (iVar39 < local_EAX_5961);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x55c:

                            iVar39 = st::fn_0040274D(reinterpret_cast<RecoveredRecord_0064F110_056D040B *>(&local_16c));
                            if (iVar39 != 0) {
                              /* ST_CALLSITE[00653FFA]: CALL dword ptr [EDX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                /* ST_CALLSITE[0065401F]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                local_EAX_6159 =
                                     st::fn_00668F50
                                               (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                output_values_neg_34);
                                iVar39 = 0;
                                if (0 < local_EAX_6159) {
                                  do {
                                    (&DAT_0080c947)[iVar39] = st::machine_word_boundary_cast<undefined4>(local_158);
                                    if (output_values_neg_34[iVar39] == (uint)DAT_0080874d) {
                                      DAT_0080e301 = (char)local_15c;
                                    }
                                    iVar39 = iVar39 + 1;
                                  } while (iVar39 < local_EAX_6159);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x55d:

                            local_EAX_6230 =
                                 st::fn_00401A55(reinterpret_cast<RecoveredRecord_0064F160_1D0EC978 *>(&local_16c));
                            if (local_EAX_6230 != 0) {
                              /* ST_CALLSITE[0065407A]: CALL dword ptr [EDX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                /* ST_CALLSITE[0065409F]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                local_EAX_6287 =
                                     st::fn_00668F50
                                               (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                output_values_neg_34);
                                iVar39 = 0;
                                if (0 < local_EAX_6287) {
                                  puVar12 = output_values_neg_34;
LAB_006540b9:
                                  if (*puVar12 != (uint)DAT_0080874d) goto code_r0x006540bd;
                                  DAT_0080e300 = (char)local_15c;
                                  memset(&DAT_0080e303, 0, 0x20); /* compiler bulk-zero initialization */
                                  st::fn_0072E340
                                            (reinterpret_cast<char *>(&DAT_0080e303),reinterpret_cast<char *>(local_158),0x1f);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x55e:

                            local_EAX_6392 =
                                 st::fn_00401E60(reinterpret_cast<RecoveredRecord_AiEventClassTy_0064F1B0 *>(&local_16c));
                            if (local_EAX_6392 != 0) {
                              /* ST_CALLSITE[0065411C]: CALL dword ptr [EAX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                /* ST_CALLSITE[00654141]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                local_EAX_6449 =
                                     st::fn_00668F50
                                               (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                output_values_neg_34);
                                iVar39 = 0;
                                if (0 < local_EAX_6449) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      DAT_0080e302 = (char)local_15c;
                                      DAT_0080e429 = (char)local_154;
                                      DAT_0080e428 = STPiece<0,1>(local_14c);
                                      DAT_0080e427 = STPiece<0,1>(local_150);
                                      _DAT_0080e432 = local_140;
                                      _DAT_0080e42a = st::machine_word_boundary_cast<undefined4>(local_148);
                                      _DAT_0080e42e = st::machine_word_boundary_cast<undefined4>(local_144);
                                      _DAT_0080e436 = local_13c;
                                      DAT_0080e43a = STPiece<0,1>(local_138);
                                      if ((char)DAT_008087a0 == '\x03') {
                                        st::fn_0072E730
                                                  (reinterpret_cast<byte *>(&CHAR_00h_0080ef1e),nullptr,local_484,
                                                   nullptr,nullptr);
                                        st::fn_0072F110
                                                  (reinterpret_cast<char *>(&DAT_0080f33a),nullptr,
                                                   reinterpret_cast<char *>(local_484),reinterpret_cast<char *>(local_158),nullptr);
                                        /* ST_CALLSITE[00654251]: CALL dword ptr [0x0085bde8] */
                                        st::external_00000080(reinterpret_cast<LPSTR>(&DAT_0080e323),st::mutable_c_string("%s%s"),&CHAR_00h_00807784,
                                                  &DAT_0080f33a);
                                      }
                                      else if ((char)DAT_008087a0 == '\b') {
                                        /* ST_CALLSITE[006541FC]: CALL dword ptr [0x0085bde8] */
                                        st::external_00000080(reinterpret_cast<LPSTR>(&DAT_0080e323),st::mutable_c_string("%s%s"),&CHAR_00h_00807784,
                                                  local_158);
                                      }
                                      break;
                                    }
                                    iVar39 = iVar39 + 1;
                                    puVar12 = puVar12 + 1;
                                  } while (iVar39 < local_EAX_6449);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x55f:

                            local_EAX_6742 =
                                 st::fn_0040533F(reinterpret_cast<RecoveredRecordView_0064EF90_AFECD81B *>(&local_16c));
                            if (local_EAX_6742 != 0) {
                              /* ST_CALLSITE[0065427A]: CALL dword ptr [EDX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                /* ST_CALLSITE[0065429F]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                local_EAX_6799 =
                                     st::fn_00668F50
                                               (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                output_values_neg_34);
                                iVar39 = 0;
                                if (0 < local_EAX_6799) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    if (*puVar12 == (uint)DAT_0080874d) {

                                      local_EAX_6856 =
                                           st::fn_006B5AA0
                                                     (g_dArray_0080C4CB,reinterpret_cast<char *>(local_158));
                                      if (g_optPanel_008016DC != nullptr) {
                                        /* ST_CALLSITE[006542E9]: CALL 0x00401587; direct=00401587 OptPanelTy::UpdateObjectives */
                                        st::fn_00401587(g_optPanel_008016DC);
                                      }
                                      if (-1 < local_EAX_6856) {
                                        *(int *)(&this_00->field_0xde + (int)local_15c * 4) =
                                             local_EAX_6856;
                                      }
                                      break;
                                    }
                                    iVar39 = iVar39 + 1;
                                    puVar12 = puVar12 + 1;
                                  } while (iVar39 < local_EAX_6799);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x560:

                            iVar39 = st::fn_00405EAC((int)&local_16c);
                            if (iVar39 != 0) {
                              /* ST_CALLSITE[00654323]: CALL dword ptr [EDX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                /* ST_CALLSITE[00654348]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                local_EAX_6968 =
                                     st::fn_00668F50
                                               (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                output_values_neg_34);
                                iVar39 = 0;
                                if (0 < local_EAX_6968) {
                                  puVar12 = output_values_neg_34;
LAB_00654362:
                                  if (*puVar12 != (uint)DAT_0080874d) goto code_r0x00654366;

                                  st::fn_006C87C0(g_dArray_0080C4CB,(uint)local_15c);
LAB_00654386:
                                  if (g_optPanel_008016DC != nullptr) {
                                    /* ST_CALLSITE[00654394]: CALL 0x00401587; direct=00401587 OptPanelTy::UpdateObjectives */
                                    st::fn_00401587(g_optPanel_008016DC);
                                  }
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x561:

                            iVar39 = st::fn_004055B0((int)&local_16c);
                            if (iVar39 != 0) {
                              /* ST_CALLSITE[006543B9]: CALL dword ptr [EAX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                /* ST_CALLSITE[006543DE]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                local_EAX_7118 =
                                     st::fn_00668F50
                                               (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                output_values_neg_34);
                                iVar39 = 0;
                                if (0 < local_EAX_7118) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      if (g_dArray_0080C4CB != nullptr) {
                                        st::fn_006B5570(g_dArray_0080C4CB);
                                      }
                                      g_dArray_0080C4CB =
                                           st::fn_006B54F0(nullptr,10,10);
                                      goto LAB_00654386;
                                    }
                                    iVar39 = iVar39 + 1;
                                    puVar12 = puVar12 + 1;
                                  } while (iVar39 < local_EAX_7118);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x562:

                            local_EAX_7204 =
                                 st::fn_0040533F(reinterpret_cast<RecoveredRecordView_0064EF90_AFECD81B *>(&local_16c));
                            if (local_EAX_7204 != 0) {
                              /* ST_CALLSITE[00654448]: CALL dword ptr [EDX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                /* ST_CALLSITE[0065446D]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                local_EAX_7261 =
                                     st::fn_00668F50
                                               (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                output_values_neg_34);
                                iVar39 = 0;
                                if (0 < local_EAX_7261) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      if (g_dArray_0080C4C7 == nullptr) {
                                        g_dArray_0080C4C7 =
                                             st::fn_006B54F0(nullptr,10,10);
                                      }

                                      local_EAX_7336 =
                                           st::fn_006B5AA0
                                                     (g_dArray_0080C4C7,reinterpret_cast<char *>(local_158));
                                      if (-1 < local_EAX_7336) {
                                        *(int *)(&this_00->field_0xde + (int)local_15c * 4) =
                                             local_EAX_7336;
                                      }
                                      break;
                                    }
                                    iVar39 = iVar39 + 1;
                                    puVar12 = puVar12 + 1;
                                  } while (iVar39 < local_EAX_7261);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x563:

                            iVar39 = st::fn_00405EAC((int)&local_16c);
                            if (iVar39 != 0) {
                              /* ST_CALLSITE[006544F2]: CALL dword ptr [EDX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                /* ST_CALLSITE[00654517]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                local_EAX_7431 =
                                     st::fn_00668F50
                                               (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                output_values_neg_34);
                                iVar39 = 0;
                                if (0 < local_EAX_7431) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      if (g_dArray_0080C4C7 != nullptr) {

                                        st::fn_006C87C0(g_dArray_0080C4C7,(uint)local_15c);
                                      }
                                      break;
                                    }
                                    iVar39 = iVar39 + 1;
                                    puVar12 = puVar12 + 1;
                                  } while (iVar39 < local_EAX_7431);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x564:

                            iVar39 = st::fn_004055B0((int)&local_16c);
                            if (iVar39 != 0) {
                              /* ST_CALLSITE[0065457C]: CALL dword ptr [EAX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                /* ST_CALLSITE[006545A1]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                local_EAX_7569 =
                                     st::fn_00668F50
                                               (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                output_values_neg_34);
                                iVar39 = 0;
                                if (0 < local_EAX_7569) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      if (g_dArray_0080C4C7 != nullptr) {
                                        st::fn_006B5570(g_dArray_0080C4C7);
                                      }
                                      g_dArray_0080C4C7 =
                                           st::fn_006B54F0(nullptr,10,10);
                                      break;
                                    }
                                    iVar39 = iVar39 + 1;
                                    puVar12 = puVar12 + 1;
                                  } while (iVar39 < local_EAX_7569);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x565:
                          case 0x566:

                            iVar39 = st::fn_0040292D((int)&local_16c);
                            if (iVar39 != 0) {
                              /* ST_CALLSITE[0065460B]: CALL dword ptr [EDX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if (((iVar39 != 8) ||
                                  ((st::machine_word_boundary_cast<uint>(local_15c) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9) && (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))
                                   ))) && (st::machine_word_boundary_cast<uint>(local_15c) != st::machine_word_boundary_cast<uint>((DArrayTy *)0xff))) {
                                /* ST_CALLSITE[00654643]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                local_EAX_7731 =
                                     st::fn_00668F50
                                               (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                reinterpret_cast<char *>(local_15c),0,output_values_neg_34);
                                uVar35 = output_values_neg_34[0];
                                if (local_EAX_7731 == 1) {
                                  /* ST_CALLSITE[0065466B]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                  iVar37_mg118 = st::fn_00668F50
                                                           (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                            reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                            output_values_neg_34);
                                  if (0 < iVar37_mg118) {
                                    puVar12 = output_values_neg_34;
                                    local_1a0 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_1a0)), (uint8_t)(local_EAX_488 == 0x565));
                                    iVar39 = iVar37_mg118;
                                    do {
                                      st::fn_00401212(&DAT_00807620,(byte)*puVar12,(byte)uVar35,
                                                         (char)local_1a0);
                                      puVar12 = puVar12 + 1;
                                      iVar39 = iVar39 + -1;
                                    } while (iVar39 != 0);
                                  }
                                  pPVar3 = g_playPanel_008016E4;
                                  if ((g_playPanel_008016E4 != nullptr) &&
                                     (iVar37_mg118 != 0)) {
                                    local_8 = reinterpret_cast<DArrayTy *>(&g_playPanel_008016E4->field_0181);
                                    g_playPanel_008016E4->field_0028 = 5;
                                    local_c = (DArrayTy *)0x8;
                                    do {
                                      if (local_8->flags != 0) {
                                        st::fn_006E6080(pPVar3,2,local_8->flags,
                                                     reinterpret_cast<undefined4 *>(&pPVar3->field_0x18));
                                      }
                                      local_8 = reinterpret_cast<DArrayTy *>(&local_8->iteratorIndex);
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                            }
                            break;
                          case 0x567:

                            iVar39 = st::fn_004058DF(reinterpret_cast<RecoveredRecord_0064F360_F7C216AE *>(&local_16c));
                            if (iVar39 != 0) {
                              /* ST_CALLSITE[00654727]: CALL dword ptr [EAX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                pDVar16 = (DArrayTy *)

                                          /* ST_CALLSITE[0065474C]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                          st::fn_00668F50
                                                    (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                     reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)pDVar16) {
                                  puVar12 = output_values_neg_34;
                                  local_c = pDVar16;
                                  do {
                                    st::fn_00401D98(&DAT_00807620,(byte)*puVar12,(char)local_15c);
                                    puVar12 = puVar12 + 1;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                pPVar3 = g_playPanel_008016E4;
                                if ((g_playPanel_008016E4 != nullptr) &&
                                   (pDVar16 != nullptr)) {
                                  local_8 = reinterpret_cast<DArrayTy *>(&g_playPanel_008016E4->field_0181);
                                  g_playPanel_008016E4->field_0028 = 5;
                                  local_c = (DArrayTy *)0x8;
                                  do {
                                    if (local_8->flags != 0) {
                                      st::fn_006E6080(pPVar3,2,local_8->flags,
                                                   reinterpret_cast<undefined4 *>(&pPVar3->field_0x18));
                                    }
                                    local_8 = reinterpret_cast<DArrayTy *>(&local_8->iteratorIndex);
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x568:

                            iVar39 = st::fn_00401B31((int)&local_16c);
                            if (iVar39 != 0) {
                              /* ST_CALLSITE[006547F7]: CALL dword ptr [EDX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                /* ST_CALLSITE[0065481C]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                local_EAX_8204 =
                                     st::fn_00668F50
                                               (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                output_values_neg_34);
                                iVar39 = 0;
                                if (0 < local_EAX_8204) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      DAT_00808790 = 1;
                                      break;
                                    }
                                    iVar39 = iVar39 + 1;
                                    puVar12 = puVar12 + 1;
                                  } while (iVar39 < local_EAX_8204);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x56a:

                            iVar39 = st::fn_0040266C((int)&local_16c);
                            if (iVar39 == 0) break;
                            st::fn_00402B99(&DAT_00807620,reinterpret_cast<char *>(pDStack_164));
                            goto cf_common_join_00659A73;
                          case 0x578:

                            local_EAX_8314 =
                                 st::fn_00401F91(reinterpret_cast<RecoveredRecord_0064F430_6891D71C *>(&local_16c));
                            if (local_EAX_8314 != 0) {
                              /* ST_CALLSITE[0065489E]: CALL dword ptr [EAX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                local_c = (DArrayTy *)

                                          /* ST_CALLSITE[006548C3]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                          st::fn_00668F50
                                                    (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                     reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)local_c) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    pDVar16 = local_15c;
                                    if ((int)local_15c < 0) {
                                      pDVar16 = (DArrayTy *)(DAT_00808a90 >> 8 & 0xff);
                                    }

                                    st::fn_004030EE(g_allPlayers_007FA174,*puVar12,(int)pDVar16);
                                    puVar12 = puVar12 + 1;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x579:

                            local_EAX_8446 =
                                 st::fn_00402AE5(reinterpret_cast<RecoveredRecord_0064F470_8E2B40ED *>(&local_16c));
                            if (local_EAX_8446 != 0) {
                              /* ST_CALLSITE[00654922]: CALL dword ptr [EDX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                local_c = (DArrayTy *)

                                          /* ST_CALLSITE[00654947]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                          st::fn_00668F50
                                                    (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                     reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)local_c) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    pDVar16 = local_15c;
                                    if ((int)local_15c < 0) {
                                      pDVar16 = (DArrayTy *)(DAT_00808a90 >> 0x10 & 0xff);
                                    }
                                    puVar13 = local_158;
                                    if ((int)local_158 < 0) {
                                      puVar13 = (uint *)(DAT_00808a90 >> 0x18);
                                    }

                                    st::fn_004035EE((int *)*puVar12,&pDVar16->flags,puVar13);
                                    puVar12 = puVar12 + 1;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x57a:

                            local_EAX_8597 =
                                 st::fn_0040265D(reinterpret_cast<RecoveredRecord_0064F4C0_88F508D2 *>(&local_16c));
                            if (local_EAX_8597 == 0) break;
                            pDVar16 = pDStack_164;
                            if ((int)pDStack_164 < 0) {
                              pDVar16 = (DArrayTy *)(DAT_00808a90 & 0xff);
                            }

                            st::fn_00401F37((int)pDVar16);
                            goto cf_common_join_00659A73;
                          case 0x57b:

                            iVar39 = st::fn_00405187(reinterpret_cast<RecoveredRecord_AiEventClassTy_0064F500 *>(&local_16c));
                            if (iVar39 != 0) {
                              /* ST_CALLSITE[006549F5]: CALL dword ptr [EAX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                local_8 = local_15c;
                                if ((int)local_15c < 0) {
                                  local_8 = (DArrayTy *)(uint)DAT_00808a9b;
                                }
                                local_c = (DArrayTy *)

                                          /* ST_CALLSITE[00654A32]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                          st::fn_00668F50
                                                    (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                     reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)local_c) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    uVar35 = *puVar12;
                                    bVar1 = g_bulkInitializedRecords_008087C7[uVar35].field_0021;
                                    uVar31 = (undefined2)((uint)local_150 >> 0x10);
                                    if (bVar1 == 1) {
                                      if ((int)local_8 < 3) {
                                        if (st::machine_word_boundary_cast<uint>(local_8) == st::machine_word_boundary_cast<uint>((DArrayTy *)0x2)) {
                                          /* ST_CALLSITE[0065520D]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                          st::fn_00403C15(this_00,CONCAT22(uVar31,(short)*puVar12),0xc
                                                        ,(int)local_158,(int)local_154,
                                                        (int)local_150,0xfffe,0xffffffff,nullptr
                                                        ,100,1,0,0);
                                          /* ST_CALLSITE[00655242]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12)),1,
                                                        (int)local_158,(int)local_154,(int)local_150
                                                        ,0xfffe,0xffffffff,nullptr,100,1,0,0);
                                          /* ST_CALLSITE[00655277]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12)),1,
                                                        (int)local_158,(int)local_154,(int)local_150
                                                        ,0xfffe,0xffffffff,nullptr,100,1,0,0);
                                          /* ST_CALLSITE[006552AC]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12)),2,
                                                        (int)local_158,(int)local_154,(int)local_150
                                                        ,0xfffe,0xffffffff,nullptr,100,1,0,0);
                                          /* ST_CALLSITE[006552E1]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12)),3,
                                                        (int)local_158,(int)local_154,(int)local_150
                                                        ,0xfffe,0xffffffff,nullptr,100,1,0,0);
                                          /* ST_CALLSITE[00655316]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12)),6,
                                                        (int)local_158,(int)local_154,(int)local_150
                                                        ,0xfffe,0xffffffff,nullptr,100,1,0,0);
                                        }
                                        else if (local_8 == nullptr) {
                                          /* ST_CALLSITE[006551D3]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                          st::fn_00403C15(this_00,CONCAT22(uVar31,(short)*puVar12),0xc
                                                        ,(int)local_158,(int)local_154,
                                                        (int)local_150,0xfffe,0xffffffff,nullptr
                                                        ,100,1,0,0);
                                        }
                                        else {
                                          if (st::machine_word_boundary_cast<uint>(local_8) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x1)) goto LAB_00655324;
                                          /* ST_CALLSITE[006550FA]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                          st::fn_00403C15(this_00,CONCAT22(uVar31,(short)*puVar12),0xc
                                                        ,(int)local_158,(int)local_154,
                                                        (int)local_150,0xfffe,0xffffffff,nullptr
                                                        ,100,1,0,0);
                                          /* ST_CALLSITE[0065512F]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12)),1,
                                                        (int)local_158,(int)local_154,(int)local_150
                                                        ,0xfffe,0xffffffff,nullptr,100,1,0,0);
                                          /* ST_CALLSITE[00655164]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12)),1,
                                                        (int)local_158,(int)local_154,(int)local_150
                                                        ,0xfffe,0xffffffff,nullptr,100,1,0,0);
                                          /* ST_CALLSITE[00655199]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12)),2,
                                                        (int)local_158,(int)local_154,(int)local_150
                                                        ,0xfffe,0xffffffff,nullptr,100,1,0,0);
                                        }
                                      }
                                      else {
joined_r0x00655322:
                                        if (st::machine_word_boundary_cast<uint>(local_8) != st::machine_word_boundary_cast<uint>((DArrayTy *)0xff)) {
LAB_00655324:
                                          uVar30 = local_14;
                                          pcVar8_mg3E = st::fn_004057DB(local_EAX_488);
                                          st::fn_00405042(this_00,-0x7d,pcVar8_mg3E,uVar30,uVar35
                                                            );
                                        }
                                      }
                                    }
                                    else if (bVar1 == 2) {
                                      if (2 < (int)local_8) goto joined_r0x00655322;
                                      if (st::machine_word_boundary_cast<uint>(local_8) == st::machine_word_boundary_cast<uint>((DArrayTy *)0x2)) {
                                        /* ST_CALLSITE[00654F85]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                        st::fn_00403C15(this_00,CONCAT22(uVar31,(short)*puVar12),0x18,
                                                      (int)local_158,(int)local_154,(int)local_150,
                                                      0xfffe,0xffffffff,nullptr,100,1,0,0);
                                        /* ST_CALLSITE[00654FBA]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0xd,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654FEF]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0xd,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00655024]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0xe,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00655059]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0xf,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[0065508E]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x12,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                      }
                                      else if (local_8 == nullptr) {
                                        /* ST_CALLSITE[00654F4B]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                        st::fn_00403C15(this_00,CONCAT22(uVar31,(short)*puVar12),0x18,
                                                      (int)local_158,(int)local_154,(int)local_150,
                                                      0xfffe,0xffffffff,nullptr,100,1,0,0);
                                      }
                                      else {
                                        if (st::machine_word_boundary_cast<uint>(local_8) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x1)) goto LAB_00655324;
                                        /* ST_CALLSITE[00654E72]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                        st::fn_00403C15(this_00,CONCAT22(uVar31,(short)*puVar12),0x18,
                                                      (int)local_158,(int)local_154,(int)local_150,
                                                      0xfffe,0xffffffff,nullptr,100,1,0,0);
                                        /* ST_CALLSITE[00654EA7]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0xd,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654EDC]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0xd,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654F11]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0xe,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                      }
                                    }
                                    else if (bVar1 == 3) {
                                      if (2 < (int)local_8) goto joined_r0x00655322;
                                      if (st::machine_word_boundary_cast<uint>(local_8) == st::machine_word_boundary_cast<uint>((DArrayTy *)0x2)) {
                                        /* ST_CALLSITE[00654CA3]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                        st::fn_00403C15(this_00,CONCAT22(uVar31,(short)*puVar12),0x19,
                                                      (int)local_158,(int)local_154,(int)local_150,
                                                      0xfffe,0xffffffff,nullptr,100,1,0,0);
                                        /* ST_CALLSITE[00654CD8]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x19,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654D0D]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x19,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654D42]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x1e,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654D77]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x1e,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654DAC]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x1e,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654DE1]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x20,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654E16]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x22,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                      }
                                      else if (local_8 == nullptr) {
                                        /* ST_CALLSITE[00654BFF]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                        st::fn_00403C15(this_00,CONCAT22(uVar31,(short)*puVar12),0x19,
                                                      (int)local_158,(int)local_154,(int)local_150,
                                                      0xfffe,0xffffffff,nullptr,100,1,0,0);
                                        /* ST_CALLSITE[00654C34]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x19,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654C69]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x19,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                      }
                                      else {
                                        if (st::machine_word_boundary_cast<uint>(local_8) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x1)) goto LAB_00655324;
                                        /* ST_CALLSITE[00654ABC]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                        st::fn_00403C15(this_00,CONCAT22(uVar31,(short)*puVar12),0x19,
                                                      (int)local_158,(int)local_154,(int)local_150,
                                                      0xfffe,0xffffffff,nullptr,100,1,0,0);
                                        /* ST_CALLSITE[00654AF1]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x19,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654B26]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x19,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654B5B]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x1e,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654B90]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x1e,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654BC5]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x1e,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                      }
                                    }
                                    puVar12 = puVar12 + 1;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x582:

                            iVar39 = st::fn_0040164F((int)&local_16c);
                            if (iVar39 != 0) {
                              /* ST_CALLSITE[0065536C]: CALL dword ptr [EDX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                local_c = (DArrayTy *)

                                          /* ST_CALLSITE[00655391]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                          st::fn_00668F50
                                                    (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                     reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)local_c) {
                                  puVar12 = output_values_neg_34;
                                  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                                  uVar7 = extraout_ECX;
                                  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                                  uVar28 = extraout_EDX;
                                  do {
                                    switch(st::machine_word_boundary_cast<uint>(local_15c)) {
                                    case 0xdc:
                                      if (local_158 == nullptr) {

                                        st::fn_00403625((char)*puVar12,st::machine_word_boundary_cast<undefined4>(local_154));
                                      }
                                      else if ((int)local_158 < 1) {

                                        st::fn_00403166((char)*puVar12,(int)local_154);
                                      }
                                      else {

                                        st::fn_00404336((char)*puVar12,(int)local_154);
                                      }
                                      break;
                                    case 0xdd:
                                      if (local_158 == nullptr) {

                                        st::fn_004018E8((char)*puVar12,st::machine_word_boundary_cast<undefined4>(local_154));
                                      }
                                      else if ((int)local_158 < 1) {

                                        st::fn_00403418((char)*puVar12,(int)local_154);
                                      }
                                      else {

                                        st::fn_00404412((char)*puVar12,(int)local_154);
                                      }
                                      break;
                                    case 0xde:
                                      if (local_158 == nullptr) {

                                        st::fn_00402685((char)*puVar12,st::machine_word_boundary_cast<undefined4>(local_154));
                                      }
                                      else if ((int)local_158 < 1) {

                                        st::fn_00405367((char)*puVar12,(int)local_154);
                                      }
                                      else {

                                        st::fn_004055E7((char)*puVar12,(int)local_154);
                                      }
                                      break;
                                    case 0xdf:
                                      if (local_158 == nullptr) {

                                        st::fn_00401EDD(g_allPlayers_007FA174,
                                                           STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(uVar28)), (uint8_t)((char)*puVar12)),(int)local_154);
                                      }
                                      else if ((int)local_158 < 1) {

                                        st::fn_00401C30(g_allPlayers_007FA174,
                                                           STReplaceLowByte((uint32_t)(local_158), (uint8_t)((char)*puVar12)),(int)local_154);
                                      }
                                      else {

                                        st::fn_00404106(g_allPlayers_007FA174,
                                                           STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(uVar7)), (uint8_t)((char)*puVar12)),(int)local_154);
                                      }
                                      break;
                                    case 0xe2:
                                      if (local_158 == nullptr) {
                                        st::fn_004030E9(*puVar12,st::machine_word_boundary_cast<undefined4>(local_154));
                                      }
                                      else if ((int)local_158 < 1) {

                                        st::fn_00403814(*puVar12,(int)local_154);
                                      }
                                      else {

                                        st::fn_00405E6B(*puVar12,(int)local_154);
                                      }
                                      break;
                                    case 0xe3:
                                      if (local_158 == nullptr) {
                                        st::fn_00405024(*puVar12,st::machine_word_boundary_cast<undefined4>(local_154));
                                      }
                                      else if ((int)local_158 < 1) {

                                        st::fn_004043F9(*puVar12,(int)local_154);
                                      }
                                      else {
                                        /* ST_CALLSITE[006555AB]: CALL 0x004053f3; direct=004053F3 STAllPlayersC::sub_004E4270 */
                                        st::fn_004053F3
                                                  (g_allPlayers_007FA174,*puVar12,(int)local_154);
                                      }
                                    }
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      /* ST_CALLSITE[006555DE]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
                                      st::fn_00404B8D
                                                (g_allPlayers_007FA174,(char)*puVar12);
                                    }

                                    st::fn_004028F6((char)*puVar12);
                                    puVar12 = puVar12 + 1;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                                    uVar7 = extraout_ECX_00;
                                    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                                    uVar28 = extraout_EDX_00;
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x583:

                            iVar39 = st::fn_00401E42((int)&local_16c);
                            pDVar16 = local_160;
                            if (iVar39 == 0) break;
                            if (pDStack_164 == nullptr) {

                              st::fn_0040557E(st::machine_word_boundary_cast<undefined4>(local_160));
                              goto cf_common_join_00659A73;
                            }
                            if ((int)pDStack_164 < 1) {

                              local_EAX_11892 = st::fn_00401177(0);
                              if ((int)pDVar16 < local_EAX_11892) {

                                local_EAX_11906 = st::fn_00401177(0);
                                iVar39 = local_EAX_11906 - (int)pDVar16;
                                goto LAB_0065565b;
                              }
                            }
                            else {

                              local_EAX_11843 = st::fn_00401177(0);
                              iVar39 = (int)&pDVar16->flags + local_EAX_11843;
LAB_0065565b:

                              st::fn_0040557E(iVar39);
                            }

                            st::fn_00401177(0);
                            goto cf_common_join_00659A73;
                          case 0x584:

                            iVar39 = st::fn_004016EF(reinterpret_cast<RecoveredRecord_0064F620_E51BA62D *>(&local_16c));
                            if (iVar39 == 0) break;
                            st::fn_00405F01((char)pDStack_164,(short)local_160,(short)local_15c,
                                               st::machine_word_boundary_cast<undefined4>(local_158),(int)local_154);
                            goto cf_common_join_00659A73;
                          case 0x585:

                            iVar39 = st::fn_0040570E();
                            if (iVar39 == 0) break;

                            DAT_00808794 = st::fn_0040150A(reinterpret_cast<RecoveredRecordView_0056F930_AC468BC6 *>(&DAT_00807620));
                            goto cf_common_join_00659A73;
                          case 0x58c:

                            iVar39 = st::fn_00404C05(reinterpret_cast<short *>(&local_16c));
                            if (iVar39 == 0) break;
                            pSVar34 = nullptr;
                            sVar27 = (short)local_160;
                            sVar25 = (short)local_15c;
                            sVar6 = (short)local_158;
                            if (local_154 == nullptr) {
                              if ((((sVar27 < 0) || (g_worldGrid.sizeX <= sVar27)) ||
                                  ((sVar25 < 0 || ((g_worldGrid.sizeY <= sVar25 || (sVar6 < 0))))))
                                 || (g_worldGrid.sizeZ <= sVar6)) {
LAB_00655871:
                                pSVar34 = nullptr;
                              }
                              else {
                                pSVar34 = reinterpret_cast<STFishC *>(STGridAt3D(g_worldGrid, sVar27, sVar25, sVar6).
                                          objects[0]);
                              }
                            }
                            else if (st::machine_word_boundary_cast<uint>(local_154) == st::machine_word_boundary_cast<uint>((byte *)0x1)) {
                              if (((((sVar27 < 0) || (g_worldGrid.sizeX <= sVar27)) || (sVar25 < 0))
                                  || ((g_worldGrid.sizeY <= sVar25 || (sVar6 < 0)))) ||
                                 (g_worldGrid.sizeZ <= sVar6)) goto LAB_00655871;
                              pSVar34 = reinterpret_cast<STFishC *>(STGridAt3D(g_worldGrid, sVar27, sVar25, sVar6).objects
                                        [1]);
                            }
                            else if (st::machine_word_boundary_cast<uint>(local_154) == st::machine_word_boundary_cast<uint>((byte *)0x2)) {
                              /* ST_CALLSITE[00655763]: CALL 0x004013f2; direct=004013F2 _EnumDest */
                              local_EAX_12115 =
                                   st::fn_004013F2(nullptr,-1,sVar27,sVar25,sVar6,1,1,1,
                                             st::function_address_boundary_cast<code *>(st::fn_00678890),0);
                              if ((local_EAX_12115 == -1) && (g_fish_00811984 != nullptr)) {
                                pSVar34 = g_fish_00811984;
                              }
                            }
                            if ((pSVar34 != nullptr) && (pDStack_164 != nullptr)) {
                              /* ST_CALLSITE[0065588E]: CALL dword ptr [EDX + 0x70] */
                              (*pSVar34->vtable->vfunc_70)(st::machine_word_boundary_cast<undefined4>(pDStack_164));
                            }
                            goto cf_common_join_00659A73;
                          case 0x58d:

                            iVar39 = st::fn_0040568C(reinterpret_cast<RecoveredRecord_AiEventClassTy_0064F780 *>(&local_16c));
                            if (iVar39 != 0) {
                              /* ST_CALLSITE[006558B1]: CALL dword ptr [EDX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                local_8 = (DArrayTy *)

                                          /* ST_CALLSITE[006558D6]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                          st::fn_00668F50
                                                    (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                     reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)local_8) {
                                  local_10 = reinterpret_cast<AiFltClassTy *>(output_values_neg_34);
                                  do {
                                    local_c = local_144;
                                    uVar35 = local_14;
                                    if ((int)local_144 < 0) {
                                      local_c = (DArrayTy *)0xfffe;
LAB_00655972:
                                      /* ST_CALLSITE[006559C7]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                      local_EAX_12727 =
                                           st::fn_00403C15(this_00,STReplaceLowWord((uint32_t)(local_158), (uint16_t)(*(undefined2 *) &local_10->vtable)),
                                                         (short)local_15c,(int)local_158,
                                                         (int)local_154,(int)local_150,(uint)local_c
                                                         ,(uint)local_14c,local_148,local_140,
                                                         local_13c,(int)local_138,local_134);
                                      if (local_EAX_12727 != 0) {
LAB_006559d0:
                                        pAVar40 = local_10->vtable;
LAB_006559d6:
                                        pcVar8_mg3D = st::fn_004057DB(local_EAX_488);
                                        iVar39 = -0xab;
                                        goto LAB_006559e3;
                                      }
                                    }
                                    else {
                                      if ((int)local_144 < 1) goto LAB_00655972;
                                      /* ST_CALLSITE[00655911]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733;/char;/ushort */
                                      pRVar14 = st::pointer_boundary_cast<RecoveredRecord_00423300_67884733 *>(st::fn_00405CF9(*(char *)&local_10->vtable,
                                                                   (ushort)local_144));
                                      if (pRVar14 != nullptr) {

                                        iVar39 = st::fn_00405902(pRVar14);
                                        if (iVar39 != 0) {
                                          if (((int)local_15c < 0x32) || (0x73 < (int)local_15c)) {
                                            bVar38 = false;
                                          }
                                          else {
                                            bVar38 = true;
                                          }
                                          if (((!bVar38) || (STField<short>(iVar39,0x7B) == 1)) &&
                                             (STField<short>(iVar39,0x7B) != -0x8000))
                                          goto LAB_00655972;
                                          goto LAB_006559d0;
                                        }
                                        pAVar40 = local_10->vtable;
                                        goto LAB_006559d6;
                                      }
                                      pAVar40 = local_10->vtable;
                                      pcVar8_mg3D = &CHAR_00h_008016a0;
                                      iVar39 = -0xaa;
LAB_006559e3:
                                      st::fn_00405042(this_00,iVar39,pcVar8_mg3D,uVar35,
                                                         (int)pAVar40);
                                    }
                                    local_10 = reinterpret_cast<AiFltClassTy *>(reinterpret_cast<byte *>(local_10) + 0x4);
                                    local_8 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                  } while (local_8 != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x58e:

                            iVar39 = st::fn_00401A82(reinterpret_cast<short *>(&local_16c));
                            if (iVar39 != 0) {
                              /* ST_CALLSITE[00655A20]: CALL dword ptr [EDX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                local_c = (DArrayTy *)

                                          /* ST_CALLSITE[00655A45]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                          st::fn_00668F50
                                                    (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                     reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)local_c) {
                                  local_10 = reinterpret_cast<AiFltClassTy *>(output_values_neg_34);
                                  do {
                                    /* ST_CALLSITE[00655A61]: CALL 0x00404da9; direct=00404DA9 _GetStaffGrpExch */
                                    pDVar16 = reinterpret_cast<DArrayTy *>(st::fn_00404DA9(st::machine_word_boundary_cast<undefined4>(local_10->vtable)));
                                    if (pDVar16 != nullptr) {
                                      uVar35 = 0;
                                      dVar14 = pDVar16->count;
                                      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                                      pDVar29 = extraout_EDX_01;
                                      if (0 < (int)dVar14) {
                                        do {
                                          if (uVar35 < dVar14) {
                                            pDVar29 = static_cast<DArrayTy *>(pDVar16->data);
                                            pdVar15 = (dword *)((int)&pDVar29->flags +
                                                               pDVar16->elementSize * uVar35);
                                          }
                                          else {
                                            pdVar15 = nullptr;
                                          }
                                          /* ST_CALLSITE[00655AAC]: CALL 0x0040387d; direct=0040387D STAllPlayersC::DestroyObjectMsg */
                                          st::fn_0040387D
                                                    (g_allPlayers_007FA174,
                                                     *(char *)&local_10->vtable,
                                                     STReplaceLowWord((uint32_t)(pDVar29), (uint16_t)((short)*pdVar15)),CASE_1,st::machine_word_boundary_cast<undefined4>(local_15c));
                                          uVar35 = uVar35 + 1;
                                          dVar14 = pDVar16->count;
                                          pDVar29 = pDVar16;
                                        } while ((int)uVar35 < (int)dVar14);
                                      }
                                      st::fn_006AE110(pDVar16);
                                    }
                                    local_10 = reinterpret_cast<AiFltClassTy *>(reinterpret_cast<byte *>(local_10) + 0x4);
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x58f:

                            iVar39 = st::fn_00402D7E(reinterpret_cast<RecoveredRecord_AiEventClassTy_0064F950 *>(&local_16c));
                            if (iVar39 != 0) {
                              /* ST_CALLSITE[00655AF7]: CALL dword ptr [EDX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                local_c = (DArrayTy *)

                                          /* ST_CALLSITE[00655B1C]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                          st::fn_00668F50
                                                    (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                     reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)local_c) {
                                  local_10 = reinterpret_cast<AiFltClassTy *>(output_values_neg_34);
                                  do {
                                    if ((char)local_154 == '\b') {
                                      cVar5 = *(char *)&local_10->vtable;
                                    }
                                    else if (((char)local_154 < '\0') ||
                                            (cVar5 = (char)local_154, '\b' < (char)local_154)) {
                                      cVar5 = -1;
                                    }
                                    /* ST_CALLSITE[00655B98]: CALL 0x00404705; direct=00404705 thunk_FUN_006775e0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__cdecl;pointer:/SubmarineTitans/Recovered/DArrayTy;/undefined4;/uint;/uint;pointer:/byte;/char;/short;/short;/short;/short;/short;/short;/int */
                                    pDVar16 = st::pointer_boundary_cast<DArrayTy *>(st::fn_00404705(st::machine_word_boundary_cast<undefined4>(local_10->vtable),(uint)local_158,
                                                                 (uint)local_15c,local_150,cVar5,
                                                                 (short)local_14c,(short)local_148,
                                                                 (short)local_144,(short)local_140,
                                                                 (short)local_13c,(short)local_138,1
                                                                ));
                                    if (pDVar16 != nullptr) {
                                      uVar35 = 0;
                                      if (0 < (int)pDVar16->count) {
                                        bVar38 = pDVar16->count != 0;
                                        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                                        uVar7 = extraout_EDX_02;
                                        do {
                                          if (bVar38) {
                                            puVar17 = DArrayAt<undefined2>(pDVar16, uVar35);
                                          }
                                          else {
                                            puVar17 = nullptr;
                                          }
                                          /* ST_CALLSITE[00655BDB]: CALL 0x0040387d; direct=0040387D STAllPlayersC::DestroyObjectMsg */
                                          st::fn_0040387D
                                                    (g_allPlayers_007FA174,
                                                     *(char *)&local_10->vtable,
                                                     STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(uVar7)), (uint16_t)(*puVar17))
                                                     ,CASE_1,local_134);
                                          uVar35 = uVar35 + 1;
                                          bVar38 = uVar35 < pDVar16->count;
                                          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                                          uVar7 = extraout_EDX_03;
                                        } while ((int)uVar35 < (int)pDVar16->count);
                                      }
                                      st::fn_006AE110(pDVar16);
                                    }
                                    local_10 = reinterpret_cast<AiFltClassTy *>(reinterpret_cast<byte *>(local_10) + 0x4);
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x590:

                            iVar39 = st::fn_00405F1A(reinterpret_cast<RecoveredRecord_0064FB00_42E58B4A *>(&local_16c));
                            if (iVar39 != 0) {
                              /* ST_CALLSITE[00655C27]: CALL dword ptr [EAX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                local_c = (DArrayTy *)

                                          /* ST_CALLSITE[00655C4C]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                          st::fn_00668F50
                                                    (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                     reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)local_c) {
                                  local_8 = reinterpret_cast<DArrayTy *>(output_values_neg_34);
                                  do {
                                    /* ST_CALLSITE[00655C9C]: CALL 0x00401b27; direct=00401B27 AiEventClassTy::_CreateRCCont */
                                    local_EAX_13452 =
                                         st::fn_00401B27(this_00,(ushort)local_8->flags,
                                                       (short)local_15c,(int)local_158,
                                                       (int)local_154,st::machine_word_boundary_cast<undefined4>(local_150),st::machine_word_boundary_cast<undefined4>(local_14c),local_148,
                                                       (int)local_144);
                                    if (local_EAX_13452 != 0) {
                                      dVar14 = local_8->flags;
                                      uVar35 = local_14;
                                      pcVar8_mg3C = st::fn_004057DB(local_EAX_488);
                                      st::fn_00405042(this_00,-0xab,pcVar8_mg3C,uVar35,dVar14);
                                    }
                                    local_8 = reinterpret_cast<DArrayTy *>(&local_8->iteratorIndex);
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x591:

                            iVar39 = st::fn_00403904(reinterpret_cast<RecoveredRecord_AiEventClassTy_0064FB80 *>(&local_16c));
                            if (iVar39 != 0) {
                              /* ST_CALLSITE[00655CF1]: CALL dword ptr [EDX + 0x18] */
                              iVar39 = this_00->vfunc_18();
                              if ((iVar39 != 8) || (st::machine_word_boundary_cast<uint>(pDStack_164) != st::machine_word_boundary_cast<uint>((DArrayTy *)0x9))) {
                                local_c = (DArrayTy *)

                                          /* ST_CALLSITE[00655D16]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0064A970::sub_00668F50 */
                                          st::fn_00668F50
                                                    (reinterpret_cast<RecoveredReceiver_0064A970 *>(this_00),
                                                     reinterpret_cast<char *>(pDStack_164),(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)local_c) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    DAT_008118fc = 0;
                                    /* ST_CALLSITE[00655D7B]: CALL 0x00403882; direct=00403882 _EnumRCCont */
                                    st::fn_00403882((short)*puVar12,(short)local_15c,reinterpret_cast<byte *>(local_158),
                                                (short)local_154,(short)local_150,(short)local_14c,
                                                (short)local_148,(short)local_144,(short)local_140,
                                                st::function_address_boundary_cast<code *>(st::fn_0064DAC0),st::machine_word_boundary_cast<undefined4>(&local_13c));
                                    puVar12 = puVar12 + 1;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x592:

                            iVar39 = st::fn_00403F9E(reinterpret_cast<RecoveredRecord_0064FCE0_70CB9801 *>(&local_16c));
                            if (iVar39 == 0) break;
                            /* ST_CALLSITE[00655DE5]: CALL 0x00402ba8; direct=00402BA8 AiEventClassTy::_CreateArt */
                            local_EAX_13781 =
                                 st::fn_00402BA8(this_00,(short)pDStack_164,(short)local_160,
                                            (int)local_15c,(int)local_158,st::machine_word_boundary_cast<undefined4>(local_154),
                                            reinterpret_cast<char *>(local_150),local_14c,st::machine_word_boundary_cast<undefined4>(local_148));
LAB_00655f44:
                            if (local_EAX_13781 != 0) {
LAB_00655f4c:
                              iVar39 = -1;
                              uVar35 = local_14;
                              pcVar8_mg3B = st::fn_004057DB(local_EAX_488);
                              st::fn_00405042(this_00,-0xab,pcVar8_mg3B,uVar35,iVar39);
                            }
                            goto cf_common_join_00659A73;
                          }
cf_common_join_00652A99:
                          iVar39 = -1;
                          uVar35 = local_14;
                          pcVar8_mg3F = st::fn_004057DB(local_EAX_488);
                          st::fn_00405042(this_00,-0x7d,pcVar8_mg3F,uVar35,iVar39);
cf_common_join_00659A73:
                          pDVar16 = (DArrayTy *)((int)&local_170->flags + 1);
cf_continue_loop_00659A80:
                          local_170 = pDVar16;
                          pAVar33 = local_178->field_000F;
                          pDVar16 = pAVar33->field_000C;
                        } while ((int)local_170 < (int)pDVar16);
                      }
                    }
                    goto LAB_00659aae;
                  }
                  iVar39 = -1;
                  pcVar8_mg40 = st::fn_004057DB(local_EAX_327);
                  local_EAX_327 = -0x7d;
                }
                st::fn_00405042(this_00,local_EAX_327,pcVar8_mg40,uVar35,iVar39);
                *(char *)pAVar32 = '\x01';
                pAVar32->field_000B = 0;
              }
            }
            else if (pAVar32->field_000B != 0) {
              if (pAVar32->field_000B == 1) {
                *(char *)pAVar32 = '\0';
              }
              pAVar32->field_000B = pAVar32->field_000B + -1;
            }
LAB_00659aae:
            pDVar16 = this_00->field_04EE;
            local_14 = local_14 + 1;
            bVar38 = local_14 < pDVar16->count;
          } while ((int)local_14 < (int)pDVar16->count);
        }
        uVar35 = local_19c;
        pAVar2 = reinterpret_cast<AnonShape_006B7830_769CA2DF *>(this_00->field_04E2);
        iVar39 = pAVar2->field_0008;
        while ((int)uVar35 < iVar39) {

          st::fn_006B7830(pAVar2,iVar39 - 1);
          pAVar2 = reinterpret_cast<AnonShape_006B7830_769CA2DF *>(this_00->field_04E2);
          iVar39 = pAVar2->field_0008;
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
      st::fn_00405042(local_188,iVar7,&CHAR_00h_008016a0,local_14,-1);
    }
  }
  return;
code_r0x00653bbb:
  iVar39 = iVar39 + 1;
  puVar12 = puVar12 + 1;
  if (iVar37_mgD7 <= iVar39) goto cf_common_join_00659A73;
  goto LAB_00653bb7;
code_r0x00654366:
  iVar39 = iVar39 + 1;
  puVar12 = puVar12 + 1;
  if (local_EAX_6968 <= iVar39) goto cf_common_join_00659A73;
  goto LAB_00654362;
code_r0x006540bd:
  iVar39 = iVar39 + 1;
  puVar12 = puVar12 + 1;
  if (local_EAX_6287 <= iVar39) goto cf_common_join_00659A73;
  goto LAB_006540b9;
}
