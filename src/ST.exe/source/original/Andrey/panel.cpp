#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/panel.cpp

// 005381B0 PanelTy::InitPanel
#line 4 "decomp/ST.exe/functions/005381B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::InitPanel */

void __thiscall st::fn_005381B0(PanelTy *this)

{
  PanelTy *this_00;
  int iVar2;
  int uVar3;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar2;
  uint *puVar3;
  int iVar7;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar8;
  InternalExceptionFrame local_4c;
  PanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    iVar8 = 1;
    puVar6 = PTR_0080679c + 0x14;

    uVar3 = st::fn_006B4FE0(PTR_0080679c);
    /* ST_CALLSITE[0053820E]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006B4FA0_DAC3A217; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006B4FA0_DAC3A217;/int;/int;/int;/uint;pointer:/undefined4;/int */
    pRVar2 = st::pointer_boundary_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(st::fn_006B50C0(this_00->field_0040,this_00->field_0048,(uint)PTR_0080679c[7],uVar3,
                          reinterpret_cast<undefined4 *>(puVar6),iVar8));
    this_00->field_0068 = st::machine_word_boundary_cast<undefined4>(pRVar2);
    uVar5 = *(uint *)&pRVar2[1].field_0x4;
    if (uVar5 == 0) {
      uVar5 = ((uint)pRVar2->field_000E * *(int *)&pRVar2->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)&pRVar2->field_0x8;
    }

    puVar3 = STPointerBoundaryCast<undefined4 *>(st::fn_006B4FA0(pRVar2));
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    st::fn_006B1A50(g_ddxContext_008075A8,3,nullptr,reinterpret_cast<undefined4 *>(&this_00->field_0x4c));
    puVar3 = &this_00->field_0060;

    st::fn_006B2330(g_ddxContext_008075A8,puVar3,this_00->field_0064,0x4057ea,this_00->field_0040,
                 this_00->field_0048,(ushort *)this_00->field_0068);

    st::fn_006B1B10(reinterpret_cast<AnonShape_006B1B10_121F236C *>(g_ddxContext_008075A8),*puVar3,3);

    st::fn_006B3640
              (reinterpret_cast<int *>(g_ddxContext_008075A8),*puVar3,0xffffffff,this_00->field_003C,
               this_00->field_0044);
    memset(&this_00->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
    this_00->field_002C = this_00->field_0008;
    this_00->field_0028 = 0x13;

    st::fn_006E6000(this_00,3,1,reinterpret_cast<undefined4 *>(&this_00->field_0x18));
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\panel.cpp"),0x2a,0,iVar2,st::mutable_c_string("%s"),
                             "PanelTy::InitPanel");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\panel.cpp"),0x2a);
  return;
}

// 00538390 PanelTy::DonePanel
#line 4 "decomp/ST.exe/functions/00538390/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::DonePanel */

void __thiscall st::fn_00538390(PanelTy *this)

{
  PanelTy *pPVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  PanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pPVar2 = local_8;
  if (iVar3 == 0) {
    memset(&local_8->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
    local_8->field_0028 = 0x14;
    local_8->field_002C = local_8->field_0008;
    st::fn_006E6000(local_8,3,1,reinterpret_cast<undefined4 *>(&local_8->field_0x18));
    if (-1 < (int)pPVar2->field_0060) {
      st::fn_006B3BB0(reinterpret_cast<int *>(g_ddxContext_008075A8),pPVar2->field_0060);
    }
    pPVar2->field_0060 = 0xffffffff;
    if (pPVar2->field_0068 != 0) {
      st::fn_006AB060(&pPVar2->field_0068);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\panel.cpp"),0x3c,0,iVar3,st::mutable_c_string("%s"),
                             "PanelTy::DonePanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\panel.cpp"),0x3c);
  return;
}

// 005384A0 PanelTy::GetMessage
#line 4 "decomp/ST.exe/functions/005384A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004017F8|005384A0; family_names=PanelTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:0,18:0,1c:0} */

int __thiscall st::fn_005384A0(PanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  PanelTy *this_00;
  int iVar3;
  int local_EAX_47;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_4c;
  PanelTy *local_8;

  local_8 = this;

  iVar3 = st::fn_006E51B0(this->field_0010);
  this->field_0038 = iVar3;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;

  local_EAX_47 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (local_EAX_47 == 0) {
    SVar1 = message->id;
    if (SVar1 == MESS_ID_CREATE) {
      /* ST_CALLSITE[00538519]: CALL 0x00401e01; direct=00401E01 PanelTy::InitPanel */
      st::fn_00401E01(local_8);
    }
    else if (SVar1 == MESS_SHARED_0003) {
      /* ST_CALLSITE[00538510]: CALL 0x00404ad9; direct=00404AD9 PanelTy::DonePanel */
      st::fn_00404AD9(local_8);
    }
    else if (SVar1 == MESS_SHARED_0005) {

      st::fn_006B3640
                (reinterpret_cast<int *>(g_ddxContext_008075A8),local_8->field_0060,0xffffffff,local_8->field_003C,
                 local_8->field_0044);
    }
    g_currentExceptionFrame = local_4c.previous;

    iVar4 = st::fn_006E5FD0(this_00,message);
    return iVar4;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\panel.cpp"),0x52,0,local_EAX_47,
                             st::mutable_c_string("%s"),"PanelTy::GetMessage");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(local_EAX_47,0,st::mutable_c_string("E:\\__titans\\Andrey\\panel.cpp"),0x52);
  return 0xffff;
}

// 005385C0 UPanelTy::OutProc
#line 4 "decomp/ST.exe/functions/005385C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   UPanelTy::OutProc */

void __thiscall
st::fn_005385C0(UPanelTy *this,int *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 int param_5,undefined4 param_6,undefined4 param_7,BITMAPINFO *param_8)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    st::fn_006B48A0(param_1,param_4,param_5,param_8,nullptr,0xff);
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\panel.cpp"),0x5c,0,errorCode,st::mutable_c_string("%s"),
                             "UPanelTy::OutProc");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\panel.cpp"),0x5c);
  return;
}

// 00538690 PanelTy::CreateBut
#line 4 "decomp/ST.exe/functions/00538690/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::CreateBut

   [STPrototypeApplier] Propagated parameter 8.
   Evidence: 00539280 -> 00538690 @ 005393BB | 0053EF20 -> 00538690 @ 0053F07B

   [STPrototypeApplier] Propagated parameter 12.
   Evidence: 00539280 -> 00538690 @ 005393BB; literal 0 at 00539398 | 0053EF20 -> 00538690 @
   0053F07B; literal 0 at 0053F05B | 0053EF20 -> 00538690 @ 0053F0F2; literal 0 at 0053F0D7
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00539280 @ 005393BB -> read as EAX on
   every CFG path | 0053EF20 @ 0053F07B -> read as EAX on every CFG path | 0053EF20 @ 0053F0F2 ->
   read as EAX on every CFG path */

int __thiscall
st::fn_00538690(PanelTy *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
                  int param_6,byte param_7,LPSTR param_8,undefined4 param_9,undefined4 param_10,
                  short param_11,ushort param_12,undefined4 param_13,char *param_14,
                  undefined4 param_15)

{
  PanelTy *pPVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_1d0;
  int local_18c [4];
  uint local_17c;
  uint local_178;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_15c;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_13c;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_10c;
  uint local_108;
  uint local_104;
  ushort local_100;
  short local_fe;
  uint local_fc;
  uint local_f4;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  ushort local_dc;
  short local_da;
  uint local_d8;
  uint local_d0;
  uint local_84;
  uint local_80;
  ushort *local_68;
  int local_64;
  PanelTy *local_10;
  ushort *local_c;
  int local_8;

  local_c = nullptr;
  local_8 = 0;
  local_1d0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_1d0;
  local_10 = this;

  iVar3 = st::fn_0072D7F0(local_1d0.jumpBuffer,0);
  pPVar2 = local_10;
  if (iVar3 == 0) {
    memset(local_18c, 0, 0x17c); /* compiler bulk-zero initialization */
    local_18c[1] = param_1;
    local_18c[0] = param_2;
    /* ST_CALLSITE[00538709]: CALL dword ptr [0x0085bde8] */
    st::external_00000080(reinterpret_cast<LPSTR>(&pPVar2->field_006C),st::mutable_c_string("%s0"),param_8);
    local_c = st::fn_006F1CE0(g_cMf32_00806790,param_7,&pPVar2->field_006C,nullptr,1);
    local_17c = *(undefined4 *)(local_c + 2);
    local_178 = *(undefined4 *)(local_c + 4);
    if ((param_5 == 0) || (local_18c[2] = g_nWidth_00806730, pPVar2->field_005C != 0)) {
      local_18c[2] = pPVar2->field_003C;
    }
    local_18c[2] = local_18c[2] + param_3;
    if ((param_6 == 0) || (local_18c[3] = DAT_00806734, pPVar2->field_005C != 0)) {
      local_18c[3] = pPVar2->field_0044;
    }
    local_18c[3] = local_18c[3] + param_4;
    st::fn_006F20E0(g_cMf32_00806790,reinterpret_cast<uint *>(&local_c));
    local_16c = pPVar2->field_0008;
    local_144 = param_9;
    local_164 = param_9;
    local_148 = 2;
    local_168 = 2;
    local_15c = 0;
    local_13c = 1;
    local_128 = 2;
    local_124 = param_10;
    local_84 = 1;
    local_80 = 1;
    if (param_11 != 0) {
      local_d0 = param_15;
      local_10c = 0x101;
      local_108 = 3;
      local_104 = 0x4201;
      local_100 = param_12;
      local_fe = param_11;
      local_fc = param_13;
      local_f4 = 0;
      local_e8 = 0x101;
      local_e4 = 3;
      local_e0 = 0x4202;
      local_dc = param_12;
      local_da = param_11;
      local_d8 = param_13;
    }
    local_14c = local_16c;
    local_12c = local_16c;
    if (param_14 != nullptr) {
      local_68 = st::fn_0070AA70(g_cMf32_00806790,param_14,0,1);

      local_64 = st::fn_0070A6F0(g_cMf32_00806790,0x12,param_14,1);
    }
    /* ST_CALLSITE[005388C5]: CALL dword ptr [EDX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
    STStructuralVirtualCall<void>(STField<int *>(pPVar2,0xC), 0x8, 2, &local_8, 0, local_18c, 0);
    g_currentExceptionFrame = local_1d0.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_1d0.previous;

  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\panel.cpp"),0x97,0,iVar3,st::mutable_c_string("%s"),
                             "PanelTy::CreateBut");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\panel.cpp"),0x97);
  return 0;
}

// 005389E0 PanelTy::PaintBut
#line 4 "decomp/ST.exe/functions/005389E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::PaintBut */

void __thiscall
st::fn_005389E0(PanelTy *this,AnonShape_005389E0_C98BD548 *param_1,byte param_2,char *param_3,
                 code *param_4,int param_5,int param_6)

{
  AnonNested_005389E0_0018_A8EBF066 *pAVar1;
  PanelTy *pPVar3;
  int *errorCode;
  uint uVar4;
  LPSTR text;
  int iVar5;
  InternalExceptionFrame local_58;
  PanelTy *local_14;
  int local_10;
  int local_c;
  RecoveredRecordView_006B84D0_87AF9D9B *local_8;

  pAVar1 = param_1->field_0018;
  local_8 = nullptr;
  if (param_5 == 0) {
    local_10 = pAVar1->field_0000;
  }
  else {
    local_10 = pAVar1->field_0000;
    iVar5 = g_nWidth_00806730;
    if (this->field_005C == 0) goto LAB_00538a14;
  }
  iVar5 = this->field_003C;
LAB_00538a14:
  local_10 = local_10 - iVar5;
  if (param_6 == 0) {
    local_c = pAVar1->field_0004 - this->field_0044;
  }
  else if (this->field_005C == 0) {
    local_c = pAVar1->field_0004 - DAT_00806734;
  }
  else {
    local_c = pAVar1->field_0004 - this->field_0044;
  }
  if (param_4 != nullptr) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;

    errorCode = STPointerBoundaryCast<int *>(st::fn_0072D7F0(local_58.jumpBuffer,0));
    if (errorCode == nullptr) {
      iVar5 = 1;
      /* ST_CALLSITE[00538A84]: CALL dword ptr [EBP + 0x14] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar4 = (*(code *)param_4)(param_1);
      text = st::fn_006F2C00(param_3,1,uVar4);
      /* ST_CALLSITE[00538AA1]: CALL 0x006f1ce0; direct=006F1CE0 cMf32::RecGet; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__thiscall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/cMf32;/byte;pointer:/char;pointer:/int;/int */
      local_8 = st::pointer_boundary_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(st::fn_006F1CE0(g_cMf32_00806790,param_2,reinterpret_cast<char *>(text),errorCode,iVar5));
      pPVar3 = local_14;
      /* ST_CALLSITE[00538ABA]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_14->field_0068,local_10,local_c,param_2,local_8);
      st::fn_006F20E0(g_cMf32_00806790,reinterpret_cast<uint *>(&local_8));

      st::fn_006B3640
                (reinterpret_cast<int *>(g_ddxContext_008075A8),pPVar3->field_0060,0xffffffff,pPVar3->field_003C,
                 pPVar3->field_0044);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;

    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\panel.cpp"),0xb2,0,(int)errorCode,
                               st::mutable_c_string("%s"),"PanelTy::PaintBut");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(st::machine_word_boundary_cast<int>(errorCode),0,st::mutable_c_string("E:\\__titans\\Andrey\\panel.cpp"),0xb2);
  }
  return;
}

// 00538BA0 PanelTy::PaintTxtBut
#line 4 "decomp/ST.exe/functions/00538BA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::PaintTxtBut

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00538BA0 parameter used as this of ccFntTy::SetSurf @ 00538C9F | 00538BA0 parameter
   used as this of ccFntTy::WrStr @ 00538CC6 */

void __thiscall
st::fn_00538BA0
          (PanelTy *this,AnonShape_00538BA0_C95DDA1D *param_1,byte param_2,char *param_3,
          ccFntTy *param_4,UINT param_5,undefined *param_6,int param_7,int param_8)

{
  PanelTy *pPVar2;
  int iVar3;
  uint uVar4;
  char *resourceString;
  int iVar5;
  InternalExceptionFrame local_5c;
  AnonNested_00538BA0_0018_DBC85CBF *local_18;
  PanelTy *local_14;
  int local_10;
  uint local_c;
  RecoveredRecordView_006B84D0_87AF9D9B *local_8;

  local_18 = param_1->field_0018;
  local_8 = nullptr;
  if (param_7 == 0) {
    local_10 = local_18->field_0000;
  }
  else {
    local_10 = local_18->field_0000;
    iVar3 = g_nWidth_00806730;
    if (this->field_005C == 0) goto LAB_00538bd9;
  }
  iVar3 = this->field_003C;
LAB_00538bd9:
  local_10 = local_10 - iVar3;
  if (param_8 == 0) {
    local_c = local_18->field_0004 - this->field_0044;
  }
  else if (this->field_005C == 0) {
    local_c = local_18->field_0004 - DAT_00806734;
  }
  else {
    local_c = local_18->field_0004 - this->field_0044;
  }
  if (param_6 != nullptr) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_14 = this;

    iVar3 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
    if (iVar3 == 0) {
      /* ST_CALLSITE[00538C57]: CALL 0x006f1ce0; direct=006F1CE0 cMf32::RecGet; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__thiscall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/cMf32;/byte;pointer:/char;pointer:/int;/int */
      local_8 = st::pointer_boundary_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(st::fn_006F1CE0(g_cMf32_00806790,param_2,param_3,nullptr,1));
      uVar4 = local_c;
      iVar3 = local_10;
      pPVar2 = local_14;
      /* ST_CALLSITE[00538C70]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_14->field_0068,local_10,local_c,param_2,local_8);
      st::fn_006F20E0(g_cMf32_00806790,reinterpret_cast<uint *>(&local_8));

      st::fn_00710A90(param_4,pPVar2->field_0068,0,iVar3,uVar4,local_18->field_0008,
                       local_18->field_000C);
      /* ST_CALLSITE[00538CA8]: CALL dword ptr [EBP + 0x1c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar4 = (*(code *)param_6)(param_1);
      iVar5 = -1;
      iVar3 = -2;
      /* ST_CALLSITE[00538CBE]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      resourceString = st::fn_006B0140(param_5,g_hINSTANCE_00807618);

      st::fn_007119C0(param_4,resourceString,iVar3,iVar5,uVar4);

      st::fn_006B3640
                (reinterpret_cast<int *>(g_ddxContext_008075A8),pPVar2->field_0060,0xffffffff,pPVar2->field_003C,
                 pPVar2->field_0044);
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;

    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\panel.cpp"),0xcc,0,iVar3,st::mutable_c_string("%s"),
                               "PanelTy::PaintTxtBut");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\panel.cpp"),0xcc);
  }
  return;
}

// 00538DB0 PanelTy::PaintIBut
#line 4 "decomp/ST.exe/functions/00538DB0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::PaintIBut

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_00538DB0(PanelTy *this,AnonShape_00538DB0_574DDCD0 *param_1,char *param_2,UINT param_3,
                  int param_4,int param_5)

{
  PanelTy *pPVar2;
  undefined4 *errorCode;
  int iVar3;
  char *text;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar4;
  ccFntTy *resourceString;
  uint uVar5;
  byte bVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  InternalExceptionFrame local_58;
  AnonNested_00538DB0_0018_D0DE3542 *local_14;
  PanelTy *local_10;
  uint local_c;
  int local_8;

  local_14 = param_1->field_0018;
  if (param_4 == 0) {
    local_8 = local_14->field_0000;
  }
  else {
    local_8 = local_14->field_0000;
    iVar3 = g_nWidth_00806730;
    if (this->field_005C == 0) goto LAB_00538de2;
  }
  iVar3 = this->field_003C;
LAB_00538de2:
  local_8 = local_8 - iVar3;
  if (param_5 == 0) {
    local_c = local_14->field_0004 - this->field_0044;
  }
  else if (this->field_005C == 0) {
    local_c = local_14->field_0004 - DAT_00806734;
  }
  else {
    local_c = local_14->field_0004 - this->field_0044;
  }
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;

  errorCode = STPointerBoundaryCast<undefined4 *>(st::fn_0072D7F0(local_58.jumpBuffer,0));
  pPVar2 = local_10;
  if (errorCode != nullptr) {
    g_currentExceptionFrame = local_58.previous;

    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\panel.cpp"),0xdf,0,(int)errorCode,
                               st::mutable_c_string("%s"),"PanelTy::PaintIBut");
    if (iVar3 == 0) {
      st::fn_006A5E40(st::machine_word_boundary_cast<int>(errorCode),0,st::mutable_c_string("E:\\__titans\\Andrey\\panel.cpp"),0xdf);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar7 = 1;
  uVar5 = 0xffffffff;
  puVar8 = errorCode;
  puVar9 = errorCode;

  iVar3 = st::fn_00401E88(reinterpret_cast<RecoveredRecord_00529FE0_85E582CB *>(param_1));
  bVar6 = (byte)errorCode;
  /* ST_CALLSITE[00538E5E]: CALL 0x006f2c00; direct=006F2C00 FUN_006f2c00; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int;/undefined4 */
  text = st::pointer_boundary_cast<char *>(st::fn_006F2C00(param_2,1,iVar3));
  /* ST_CALLSITE[00538E70]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/int;/SubmarineTitans/Recovered/Enums/Global_mfRLoad_param_2Enum;pointer:/char;/uint;/byte;/int;/int;pointer:/undefined4 */
  pRVar4 = st::pointer_boundary_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(st::fn_00709AF0
                     (PTR_00806794,CASE_1,text,uVar5,bVar6,iVar7,st::machine_word_boundary_cast<int>(puVar8),puVar9));
  uVar5 = local_c;
  /* ST_CALLSITE[00538E84]: CALL 0x00403229; direct=00403229 DibPut */
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)pPVar2->field_0068,local_8,local_c,'\x01',pRVar4);

  st::fn_00710A90(reinterpret_cast<ccFntTy *>(g_interSystem_00802A28->field_0024),pPVar2->field_0068,0,local_8,uVar5,
                   local_14->field_0008,local_14->field_000C);

  uVar5 = st::fn_00401E88(reinterpret_cast<RecoveredRecord_00529FE0_85E582CB *>(param_1));
  iVar7 = -1;
  iVar3 = -2;
  /* ST_CALLSITE[00538EC8]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__stdcall;pointer:/ccFntTy;/WinDef.h/UINT;/WinDef.h/HINSTANCE */
  resourceString = st::pointer_boundary_cast<ccFntTy *>(st::fn_006B0140(param_3,g_hINSTANCE_00807618));

  st::fn_007119C0(reinterpret_cast<ccFntTy *>(g_interSystem_00802A28->field_0024),reinterpret_cast<char *>(resourceString),iVar3,iVar7,
                 uVar5);

  st::fn_006B3640
            (reinterpret_cast<int *>(g_ddxContext_008075A8),pPVar2->field_0060,0xffffffff,pPVar2->field_003C,
             pPVar2->field_0044);
  g_currentExceptionFrame = local_58.previous;
  return;
}

// 00538FC0 PanelTy::PaintLBut
#line 4 "decomp/ST.exe/functions/00538FC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::PaintLBut */

void __thiscall
st::fn_00538FC0(PanelTy *this,RecoveredRecordView_00538FC0_46DCC163 *param_1,byte param_2,
                  char *param_3,char *param_4,undefined *param_5,int param_6,int param_7)

{
  AnonNested_00538FC0_0018_DB9172F2 *pAVar1;
  PanelTy *pPVar3;
  int iVar6;
  int local_EAX_145;
  uint uVar7;
  LPSTR text;
  int iVar5;
  InternalExceptionFrame local_58;
  PanelTy *local_14;
  int local_10;
  int local_c;
  RecoveredRecordView_006B84D0_87AF9D9B *local_8;
  int iVar4;

  pAVar1 = param_1->field_0018;
  local_8 = nullptr;
  if (param_6 == 0) {
    local_c = pAVar1->field_0000;
  }
  else {
    local_c = pAVar1->field_0000;
    iVar4 = g_nWidth_00806730;
    if (this->field_005C == 0) goto LAB_00538ff6;
  }
  iVar4 = this->field_003C;
LAB_00538ff6:
  local_c = local_c - iVar4;
  if (param_7 == 0) {
    local_10 = pAVar1->field_0004 - this->field_0044;
  }
  else if (this->field_005C == 0) {
    local_10 = pAVar1->field_0004 - DAT_00806734;
  }
  else {
    local_10 = pAVar1->field_0004 - this->field_0044;
  }
  if (param_5 != nullptr) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;

    local_EAX_145 = st::fn_0072D7F0(local_58.jumpBuffer,0);
    if (local_EAX_145 == 0) {
      /* ST_CALLSITE[00539067]: CALL dword ptr [EBP + 0x18] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar7 = (*(code *)param_5)(param_1);
      text = st::fn_006F2C00(param_3,1,uVar7);
      /* ST_CALLSITE[00539087]: CALL 0x006f1ce0; direct=006F1CE0 cMf32::RecGet; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__thiscall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/cMf32;/byte;pointer:/char;pointer:/int;/int */
      local_8 = st::pointer_boundary_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(st::fn_006F1CE0(g_cMf32_00806790,param_2,reinterpret_cast<char *>(text),nullptr,1));
      iVar6 = local_10;
      pPVar3 = local_14;
      /* ST_CALLSITE[005390A0]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_14->field_0068,local_c,local_10,param_2,local_8);
      st::fn_006F20E0(g_cMf32_00806790,reinterpret_cast<uint *>(&local_8));
      if (param_1->field_0014 == 3) {
        /* ST_CALLSITE[005390CD]: CALL 0x006f1ce0; direct=006F1CE0 cMf32::RecGet; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__thiscall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/cMf32;/byte;pointer:/char;pointer:/int;/int */
        local_8 = st::pointer_boundary_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(st::fn_006F1CE0(g_cMf32_00806790,6,param_4,nullptr,1));
        /* ST_CALLSITE[005390E1]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pPVar3->field_0068,local_c,iVar6,'\x06',local_8);
        st::fn_006F20E0(g_cMf32_00806790,reinterpret_cast<uint *>(&local_8));
      }

      st::fn_006B3640
                (reinterpret_cast<int *>(g_ddxContext_008075A8),pPVar3->field_0060,0xffffffff,pPVar3->field_003C,
                 pPVar3->field_0044);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;

    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\panel.cpp"),0x102,0,local_EAX_145,
                               st::mutable_c_string("%s"),"PanelTy::PaintLBut");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_145,0,st::mutable_c_string("E:\\__titans\\Andrey\\panel.cpp"),0x102);
  }
  return;
}
