#include "../../pseudocode_runtime.h"


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
AiEventClassTy::__CreateObjPl
          (AiEventClassTy *this,uint param_1,short param_2,short *param_3,short *param_4,
          short *param_5,uint param_6,uint param_7,char *param_8,undefined4 param_9,
          undefined4 param_10,int param_11,int param_12)

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
  local_EAX_54 = Library::MSVCRT::__setjmp3(local_e8.jumpBuffer,0);
  if (local_EAX_54 != 0) {
    g_currentExceptionFrame = local_e8.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\ai\\ai_event.cpp",0xcb,0,local_EAX_54,
                               "%s","AiEventClassTy::__CreateObjPl");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_54,0,"E:\\__titans\\ai\\ai_event.cpp",0xcc);
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
      local_20 = STReplaceLowWord((uint32_t)(param_3), (uint16_t)((short)g_bulkInitializedRecords_008087C7[uVar7].field_0024 + -3));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_30 = CONCAT22((short)(uVar7 * 9 >> 0x10),
                          (short)g_bulkInitializedRecords_008087C7[uVar7].field_0028 + -3);
      thunk_FUN_006756d0((short *)&local_20,(short *)&local_30,local_28,local_1c);
      local_38->field_0088 = local_38->field_0088 * 0x41c64e6d + 0x3039;
      local_18 = local_38->field_0088 * 0x41c64e6d + 0x3039;
      local_38->field_0088 = local_18;
      iVar5 = thunk_FUN_00675b10((local_18 >> 0x10) % (uint)(int)local_28[0] + (int)(short)local_20,
                                 (local_38->field_0088 >> 0x10) % (uint)(int)local_1c[0] +
                                 (int)(short)local_30,1,(short *)&param_3,(short *)&param_4,
                                 (short *)&param_5,(int)param_2);
    }
    else {
      iVar3 = thunk_FUN_004961b0((short)param_3,(short)param_4,(short)param_5);
      if (iVar3 == 0) {
        local_2c = (int)param_3 + -1;
        local_24 = (int)param_4 + -1;
        local_18 = 3;
        local_34[0] = 3;
        local_34[1] = 0;
        thunk_FUN_006756d0((short *)&local_2c,(short *)&local_24,(short *)&local_18,local_34);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = (short *)(local_2c + 1);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (short *)(local_24 + 1);
      }
      iVar5 = thunk_FUN_00675b10((int)param_3,(int)param_4,(short)param_5,(short *)&param_3,
                                 (short *)&param_4,(short *)&param_5,(int)param_2);
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
      Library::MSVCRT::_strncpy(local_6e,_Source,0xe);
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
      STAllPlayersC::CreateBoat(g_allPlayers_007FA174,local_a4);
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
      iVar6 = 1;
      GVar10 = (Global_sub_004B1120_param_2Enum)param_2;
      uVar7 = param_1 & 0xffff;
      iVar5 = thunk_FUN_004ae0b0((short)param_3,local_c,local_10,GVar10,uVar7,nullptr,
                                 nullptr,nullptr,1,nullptr);
      if (iVar5 == 0) {
        iVar6 = thunk_FUN_004b1120(uVar7,GVar10,&local_8,&local_c,&local_10,0,0);
      }
      if (iVar6 == 0) {
        g_currentExceptionFrame = local_e8.previous;
        return local_14;
      }
      if (((int)param_7 < 0) || (uVar8 = param_7, 7 < (int)param_7)) {
        uVar8 = uVar7;
      }
      thunk_FUN_004b1040(uVar7,GVar10,local_8,local_c,local_10,param_6,uVar8,param_8,param_9,
                         param_10);
    }
    else {
      uVar8 = param_1 & 0xffff;
      local_EAX_1070 = thunk_FUN_004b1120(uVar8,(int)param_2,&local_8,&local_c,&local_10,0,0);
      if (local_EAX_1070 != 0) {
        if (((int)uVar7 < 0) || (7 < (int)uVar7)) {
          uVar7 = uVar8;
        }
        thunk_FUN_004b0f20(uVar8,(int)param_2,local_8,local_c,local_10,param_6,uVar7,param_8,0,
                           param_9);
      }
    }
    local_14 = 0;
  }
  g_currentExceptionFrame = local_e8.previous;
  return local_14;
}

