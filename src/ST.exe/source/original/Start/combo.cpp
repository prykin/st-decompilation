#include "st/generated.hpp"
// Generated translation unit: source/original/Start/combo.cpp

// 005939E0 ComboTy::OutBmpProc
#line 4 "decomp/ST.exe/functions/005939E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\combo.cpp
   ComboTy::OutBmpProc

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 005939E0 -> 006B4640 @ 00593A9E | 005939E0 -> 006C5000 @ 00593A50 | 005939E0 ->
   006C5000 @ 00593A79 */

void __thiscall
st::fn_005939E0(ComboTy *this,DDXContext *param_1,undefined4 param_2,undefined4 param_3,
                   int param_4,int param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  AnonShape_005939E0_9F78A8B0 *pAVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  AnonShape_005939E0_9F78A8B0 *local_8;

  local_8 = (AnonShape_005939E0_9F78A8B0 *)param_8;
  if (param_8 != 0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;

    iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    pAVar2 = local_8;
    if (iVar3 == 0) {
      if (local_8->field_0060 != 0) {
        iVar3 = local_8->field_0078;

        st::fn_006C5000
                  (param_1,param_4,param_5 + 3,iVar3,0,0,0,STField<uint>(iVar3,0x4),STField<int>(iVar3,0x8),
                   local_8->field_0060,(byte)local_8->field_0058);
      }
      if (*(int *)&pAVar2->field_0x5c != 0) {
        iVar3 = *(int *)&pAVar2->field_0x74;

        st::fn_006C5000
                  (param_1,param_4,param_5,iVar3,0,0,0,STField<uint>(iVar3,0x4),STField<int>(iVar3,0x8),
                   *(int *)&pAVar2->field_0x5c,(byte)*(undefined4 *)&pAVar2->field_0x50);
        g_currentExceptionFrame = local_4c.previous;
        return;
      }

      st::fn_006B4640(param_1,param_4 + 3,param_5,*(BITMAPINFO **)&pAVar2->field_0x74,nullptr);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;

    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\combo.cpp"),0x12,0,iVar3,st::mutable_c_string("%s"),
                               "ComboTy::OutBmpProc");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\combo.cpp"),0x12);
  }
  return;
}

// 00593B50 ComboTy::InitCombo
#line 4 "decomp/ST.exe/functions/00593B50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\combo.cpp
   ComboTy::InitCombo */

void __thiscall st::fn_00593B50(ComboTy *this,undefined4 *param_1)

{
  byte *puVar1;
  uint *puVar2;
  ComboTy *this_00;
  int iVar4;
  int local_EAX_159;
  RecoveredSourceFamily_dibcopy *pRVar4;
  byte *puVar5;
  int uVar4;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar6;
  int local_EAX_427;
  int iVar10;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar12;
  ushort *puVar13;
  int iVar14;
  int local_528 [4];
  int local_518;
  int local_514;
  uint local_510;
  uint local_50c;
  uint local_500;
  uint local_4fc;
  uint local_4f8;
  uint local_4e0;
  uint local_4dc;
  uint local_4d8;
  uint local_4c0;
  uint local_4bc;
  uint local_4b8;
  uint local_4a0;
  uint local_49c;
  uint local_498;
  InternalExceptionFrame local_54;
  ComboTy *local_10;
  uint *local_c;
  byte local_5;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;

  iVar4 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;

    iVar10 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\combo.cpp"),99,0,iVar4,st::mutable_c_string("%s"),
                                "ComboTy::InitCombo");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\combo.cpp"),99);
    return;
  }
  puVar5 = reinterpret_cast<byte *>(&local_10->field_0088);
  memmove(puVar5, param_1, 0x80); /* compiler REP MOVS byte copy */
  iVar7 = 0;
  puVar13 = (ushort *)local_10->field_00D4;
  local_10->field_009C = 0xffffffff;
  if ((puVar13 != nullptr) && (iVar7 = local_10->field_00D0, iVar7 != 0)) {
    if (iVar7 + -1 < local_10->field_00C8) {
      local_10->field_00C8 = 0;
    }
    iVar14 = 1;
    local_10->field_00F8 = iVar7 * local_10->field_00CC + 10;
    puVar12 = puVar13 + 0x14;

    local_EAX_159 = st::fn_006B4FE0(puVar13);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pRVar4 = (RecoveredSourceFamily_dibcopy *)

             st::fn_006B50C0(this_00->field_00F4,this_00->field_00F8,
                          (uint)*(ushort *)(this_00->field_00D4 + 0xe),local_EAX_159,
                          reinterpret_cast<undefined4 *>(puVar12),iVar14);
    this_00->field_00FC = pRVar4;
    uVar9 = pRVar4[1].field_0004;
    if (uVar9 == 0) {
      uVar9 = ((uint)pRVar4->field_000E * pRVar4->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
              pRVar4->field_0008;
    }
    local_5 = this_00->field_00D8;

    puVar5 = STPointerBoundaryCast<byte *>(st::fn_006B4FA0(reinterpret_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(pRVar4)));
    iVar7 = 1;
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar5 = reinterpret_cast<byte *>((puVar5 + 1));
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar5 = local_5;
      puVar5 = (byte *)((int)puVar5 + 1);
    }
    puVar13 = (ushort *)this_00->field_00D4 + 0x14;

    uVar4 = st::fn_006B4FE0((ushort *)this_00->field_00D4);
    /* ST_CALLSITE[00593C96]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006B4FA0_DAC3A217; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006B4FA0_DAC3A217;/int;/int;/int;/uint;pointer:/undefined4;/int */
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pRVar6 = st::pointer_boundary_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(st::fn_006B50C0(this_00->field_00F4,this_00->field_00F8,
                          (uint)*(ushort *)(this_00->field_00D4 + 0xe),uVar4,reinterpret_cast<undefined4 *>(puVar13),
                          iVar7));
    this_00->field_0100 = pRVar6;
    uVar9 = *(uint *)&pRVar6[1].field_0x4;
    if (uVar9 == 0) {
      uVar9 = ((uint)pRVar6->field_000E * *(int *)&pRVar6->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)&pRVar6->field_0x8;
    }
    local_5 = this_00->field_00E0;

    puVar5 = STPointerBoundaryCast<byte *>(st::fn_006B4FA0(pRVar6));
    iVar7 = 1;
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar5 = reinterpret_cast<byte *>((puVar5 + 1));
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar5 = local_5;
      puVar5 = (byte *)((int)puVar5 + 1);
    }
    puVar13 = (ushort *)this_00->field_00D4 + 0x14;

    local_EAX_427 = st::fn_006B4FE0((ushort *)this_00->field_00D4);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pRVar6 = STPointerBoundaryCast<RecoveredRecord_006B4FA0_DAC3A217 *>(st::fn_006B50C0(this_00->field_00F4 + -10,this_00->field_00CC,
                          (uint)*(ushort *)(this_00->field_00D4 + 0xe),local_EAX_427,
                          reinterpret_cast<undefined4 *>(puVar13),iVar7));
    this_00->field_0104 = reinterpret_cast<ushort *>(pRVar6);
    uVar9 = *(uint *)&pRVar6[1].field_0x4;
    if (uVar9 == 0) {
      uVar9 = ((uint)pRVar6->field_000E * *(int *)&pRVar6->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)&pRVar6->field_0x8;
    }
    local_5 = this_00->field_00D8;

    puVar5 = STPointerBoundaryCast<byte *>(st::fn_006B4FA0(pRVar6));
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar5 = reinterpret_cast<byte *>((puVar5 + 1));
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar5 = local_5;
      puVar5 = (byte *)((int)puVar5 + 1);
    }
    this_00->field_00C0 = st::machine_word_boundary_cast<undefined4>(this_00->field_0104);
    st::fn_006B5EE0(this_00->field_00FC,0,2,2,this_00->field_00F4 + -4,this_00->field_00F8 + -4,
                 (byte)this_00->field_00DC,0xd);
    puVar2 = &this_00->field_0108;
    local_c = puVar2;

    st::fn_006B2330(g_ddxContext_008075A8,puVar2,2,0x401712,this_00->field_00FC->field_0004 + 3,
                 this_00->field_00FC->field_0008 + 3,reinterpret_cast<ushort *>(&this_00->field_0088));

    st::fn_006B3640
              (reinterpret_cast<int *>(g_ddxContext_008075A8),*puVar2,0xffffffff,this_00->field_00EC - 3,
               this_00->field_00F0);
    puVar1 = &this_00->field_0x18;
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    iVar7 = 0;
    this_00->field_0028 = 0x1a;

    st::fn_006E6000(this_00,3,1,reinterpret_cast<undefined4 *>(puVar1));
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    iVar7 = 0;
    this_00->field_0028 = 0x18;

    st::fn_006E6000(this_00,3,1,reinterpret_cast<undefined4 *>(puVar1));
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    iVar7 = 0;
    this_00->field_0028 = 0x13;
    this_00->field_002C = (ComboTy *)this_00->field_0008;

    st::fn_006E6000(this_00,3,1,reinterpret_cast<undefined4 *>(puVar1));
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    iVar7 = 0;
    this_00->field_0028 = 0x65;

    st::fn_006E6000(this_00,3,1,reinterpret_cast<undefined4 *>(puVar1));
    puVar5 = reinterpret_cast<byte *>((&this_00->field_0038));
    this_00->field_0084 = st::machine_word_boundary_cast<undefined4>(&this_00->field_002C->field_0x1);
    memset(puVar5, 0, 0x4c); /* compiler bulk-zero initialization */
    iVar7 = 0;
    this_00->field_004C = this_00->field_0008;
    this_00->field_0040 = (ComboTy *)this_00->field_0084;
    this_00->field_0050 = 2;
    this_00->field_0054 = 0x10003;
    *puVar5 = 10;
    this_00->field_003C = 1;
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    this_00->field_0028 = 0x10;
    this_00->field_002C = reinterpret_cast<ComboTy *>(puVar5);

    st::fn_006E6000(this_00,3,1,reinterpret_cast<undefined4 *>(puVar1));
    iVar7 = this_00->field_00F0;
    memset(local_528, 0, 0x4d4); /* compiler bulk-zero initialization */
    local_528[2] = this_00->field_00EC + 5;
    local_528[3] = iVar7 + 5;
    local_518 = this_00->field_00F4 + -10;
    local_514 = this_00->field_00F8 + -10;
    local_510 = this_00->field_00D0;
    local_500 = this_00->field_0008;
    local_528[0] = 1;
    local_50c = 0;
    local_4fc = 2;
    local_4f8 = 0xffff;
    local_49c = 2;
    local_498 = 0x10002;
    local_4dc = 2;
    local_4bc = 2;
    local_4d8 = 0x10001;
    local_4b8 = 0x10000;
    local_4e0 = local_500;
    local_4c0 = local_500;
    local_4a0 = local_500;
    /* ST_CALLSITE[00593FD3]: CALL dword ptr [EAX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              (reinterpret_cast<SystemClassTy *>(this_00->field_000C),7,&this_00->field_010C,nullptr,st::machine_word_boundary_cast<undefined4>(local_528),0);
    this_00->field_0028 = 0x22;
    this_00->field_002C = (ComboTy *)this_00->field_00C8;
    st::fn_006E6080(this_00,2,this_00->field_010C,reinterpret_cast<undefined4 *>(puVar1));
    this_00->field_0110 = 1;

    st::fn_006B35D0(reinterpret_cast<int *>(g_ddxContext_008075A8),*local_c);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  /* ST_CALLSITE[00594023]: CALL 0x00403968; direct=00403968 ComboTy::sub_005943F0 */
  st::fn_00403968(local_10);
  g_currentExceptionFrame = local_54.previous;
  return;
}

// 005941D0 ComboTy::DoneCombo
#line 4 "decomp/ST.exe/functions/005941D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\combo.cpp
   ComboTy::DoneCombo */

void __thiscall st::fn_005941D0(ComboTy *this)

{
  byte *puVar1;
  ComboTy *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_4c;
  ComboTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_010C != 0) {
      st::fn_006E56B0(local_8->field_000C,local_8->field_010C);
    }
    puVar1 = &this_00->field_0x18;
    this_00->field_010C = 0;
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    iVar5 = 0;
    this_00->field_0028 = 0x11;
    this_00->field_002C = reinterpret_cast<ComboTy *>(&this_00->field_0038);
    st::fn_006E6000(this_00,3,1,reinterpret_cast<undefined4 *>(puVar1));
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    iVar5 = 0;
    this_00->field_002C = (ComboTy *)this_00->field_0008;
    this_00->field_0028 = 0x14;
    st::fn_006E6000(this_00,3,1,reinterpret_cast<undefined4 *>(puVar1));
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    iVar5 = 0;
    this_00->field_0028 = 0x19;
    st::fn_006E6000(this_00,3,1,reinterpret_cast<undefined4 *>(puVar1));
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    this_00->field_0028 = 0x1b;
    st::fn_006E6000(this_00,3,1,reinterpret_cast<undefined4 *>(puVar1));
    if (this_00->field_0108 != 0xffffffff) {
      st::fn_006B3BB0(reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_0108);
    }
    this_00->field_0108 = 0xffffffff;
    if (this_00->field_00FC != nullptr) {
      st::fn_006AB060(&this_00->field_00FC);
    }
    if (this_00->field_0100 != nullptr) {
      st::fn_006AB060(&this_00->field_0100);
    }
    if (this_00->field_0104 != nullptr) {
      st::fn_006AB060(&this_00->field_0104);
    }
    if (this_00->field_0098 != 0) {
      st::fn_006E3B50(reinterpret_cast<AppClassTy *>(&DAT_00807620),reinterpret_cast<undefined4 *>(&this_00->field_0088));
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\combo.cpp"),0x7f,0,iVar3,st::mutable_c_string("%s"),
                             "ComboTy::DoneCombo");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\combo.cpp"),0x7f);
  return;
}

// 00594440 ComboTy::GetMessage
#line 4 "decomp/ST.exe/functions/00594440/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\combo.cpp
   ComboTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00594440; family_names=ComboTy::GetMessage; ret4=2;
   direct_offsets={10:1,14:4,18:3,1c:0} */

int __thiscall st::fn_00594440(ComboTy *this,STMessage *message)

{
  byte uVar1;
  STMessageId SVar2;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar3;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar4;
  ComboTy *this_00;
  int local_EAX_35;
  uint *puVar6;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  InternalExceptionFrame local_50;
  ComboTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  local_EAX_35 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_50.previous;

    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\combo.cpp"),0xb7,0,local_EAX_35,
                               st::mutable_c_string("%s"),"ComboTy::GetMessage");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_35,0,st::mutable_c_string("E:\\__titans\\Start\\combo.cpp"),0xb7);
    return 0xffff;
  }
  SVar2 = message->id;
  if (SVar2 < 0x10000) {
    if (SVar2 == MESS_COMBOTY_FFFF) {
      message->arg1 = st::message_arg_u32(static_cast<uint32_t>(local_c->field_00CC));
      goto cf_common_exit_00594615;
    }
    switch(SVar2) {
    case MESS_ID_CREATE:
      /* ST_CALLSITE[005944B5]: CALL 0x004036cf; direct=004036CF ComboTy::InitCombo */
      st::fn_004036CF(local_c,reinterpret_cast<undefined4 *>((message->arg0).ptr));
      break;
    case MESS_SHARED_0003:
      /* ST_CALLSITE[005944C1]: CALL 0x00403134; direct=00403134 ComboTy::DoneCombo */
      st::fn_00403134(local_c);
      break;
    case MESS_SHARED_0005:

      st::fn_006B35D0(reinterpret_cast<int *>(g_ddxContext_008075A8),local_c->field_0108);
      break;
    case MESS_TRACKBARCLASSTY_0062:
      uVar9 = (uint)(message->arg1).words.low;
      uVar8 = (uint)(message->arg1).words.high;
      if (((local_c->field_00EC <= (int)uVar9) &&
          ((int)uVar9 < local_c->field_00F4 + local_c->field_00EC)) &&
         (local_c->field_00F0 <= (int)uVar8)) {
        if (local_c->field_00F8 + local_c->field_00F0 <= (int)uVar8) {
          /* ST_CALLSITE[00594521]: CALL 0x00403968; direct=00403968 ComboTy::sub_005943F0 */
          st::fn_00403968(local_c);
        }
        break;
      }
    case MESS_SHARED_0064:
switchD_005944a8_caseD_64:
      /* ST_CALLSITE[00594567]: CALL 0x00403968; direct=00403968 ComboTy::sub_005943F0 */
      st::fn_00403968(local_c);
    }
cf_common_exit_00594615:
    g_currentExceptionFrame = local_50.previous;

    iVar5 = st::fn_006E5FD0(this_00,message);
    return iVar5;
  }
  switch(SVar2) {
  case 0x10001:
    pRVar3 = reinterpret_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(local_c->field_0104);
    local_8 = *(uint *)&pRVar3[1].field_0x4;
    if (local_8 == 0) {
      local_8 = ((uint)pRVar3->field_000E * *(int *)&pRVar3->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)&pRVar3->field_0x8;
    }
    uVar1 = local_c->field_00D8;

    puVar6 = STPointerBoundaryCast<undefined4 *>(st::fn_006B4FA0(pRVar3));
    for (uVar9 = local_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar6 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
      puVar6 = puVar6 + 1;
    }
    for (uVar9 = local_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar6 = uVar1;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    this_00->field_00BC = ((message->arg0).u32);

    st::fn_006E5FE0(this_00,reinterpret_cast<undefined4 *>(&this_00->field_0xa8));
    pRVar4 = reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_0104);

    st::fn_006B55F0
              (this_00->field_00FC,0,(message->arg1).words.low + 5,(message->arg1).words.high + 5,
               pRVar4,0,0,0,*(int *)&pRVar4->field_0x4,*(int *)&pRVar4->field_0x8);
    goto cf_common_exit_00594615;
  case 0x10002:
    if (local_c->field_0110 == 0) goto cf_common_exit_00594615;
  case 0x10000:
    local_c->field_009C = ((message->arg0).u32);
    break;
  case 0x10003:
    break;
  default:
    goto cf_common_exit_00594615;
  }
  goto switchD_005944a8_caseD_64;
}
