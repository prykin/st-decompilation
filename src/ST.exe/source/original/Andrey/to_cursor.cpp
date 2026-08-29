#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/to_cursor.cpp

// 00543600 CursorClassTy::InitCursor
#line 4 "decomp/ST.exe/functions/00543600/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::InitCursor */

void __thiscall st::fn_00543600(CursorClassTy *this,undefined4 param_1)

{
  uint *puVar1;
  CursorClassTy *this_00;
  int local_EAX_34;
  ushort *local_EAX_157;
  ushort *puVar4;
  uint uVar3;
  int puVar5_mg1;
  int iVar3;
  ushort *puVar5;
  int iVar6;
  InternalExceptionFrame local_50;
  CursorClassTy *local_c;
  ushort *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  local_EAX_34 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (local_EAX_34 == 0) {

    st::fn_007158A0
              (reinterpret_cast<SpriteClassTy *>(&local_c->field_0018),reinterpret_cast<int *>(g_ddxContext_008075A8),0,'\a',
               nullptr,0,0);

    st::fn_006B88D0
              (&this_00->field_00AD,g_dDXContext_0080759C,0,nullptr,0x8000000,0,
               nullptr,0);
    /* ST_CALLSITE[00543680]: CALL 0x0040376f; direct=0040376F CursorClassTy::SetImages */
    st::fn_0040376F(this_00,param_1,st::mutable_c_string("CUR_MENU"),0x32,nullptr,0,-1,-1);
    local_EAX_157 =
         st::fn_00709AF0
                   (PTR_00806784,CASE_B,st::mutable_c_string("INF_DEEPS"),0xffffffff,0,1,0,nullptr);
    this_00->field_04E3 = local_EAX_157;
    puVar4 = st::fn_00709AF0
                       (PTR_00806784,CASE_13,st::mutable_c_string("CUR_CONFIRM"),0xffffffff,0,1,0,
                        nullptr);
    this_00->field_04E7 = puVar4;
    local_8 = st::fn_006F1CE0(g_cMf32_00806780,1,st::mutable_c_string("CURSOR_PAL"),nullptr,1);
    puVar5 = local_8 + 0x14;
    iVar6 = 1;

    uVar3 = st::fn_006B4FE0(local_8);
    /* ST_CALLSITE[00543708]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ushort; source view only; no Ghidra override */
    puVar5_mg1 = st::fn_006B50C0(800,0x96,(uint)local_8[7],uVar3,reinterpret_cast<undefined4 *>(puVar5),iVar6);
    this_00->field_04D2 = (ushort *)puVar5_mg1;
    st::fn_006F20E0(g_cMf32_00806780,reinterpret_cast<uint *>(&local_8));
    puVar1 = &this_00->field_04D6;

    st::fn_006B2330(g_ddxContext_008075A8,puVar1,1,0x4047ff,0,0,this_00->field_04D2);
    st::fn_006B28C0(g_ddxContext_008075A8,*puVar1,1);
    st::fn_006B3AF0(reinterpret_cast<int *>(g_ddxContext_008075A8),*puVar1);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x65,0,local_EAX_34,
                             st::mutable_c_string("%s"),"CursorClassTy::InitCursor");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(-0x34,0,st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x66);
  return;
}

// 00543830 CursorClassTy::DoneCursor
#line 4 "decomp/ST.exe/functions/00543830/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::DoneCursor */

void __thiscall st::fn_00543830(CursorClassTy *this)

{
  CursorClassTy *pCVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  CursorClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (errorCode == 0) {
    if (-1 < (int)local_8->field_04D6) {
      st::fn_006B3BB0(reinterpret_cast<int *>(g_ddxContext_008075A8),local_8->field_04D6);
    }
    pCVar2->field_04D6 = 0xffffffff;
    if (pCVar2->field_04D2 != nullptr) {
      st::fn_006AB060(&pCVar2->field_04D2);
    }
    pCVar2->field_04E3 = nullptr;
    pCVar2->field_04E7 = nullptr;
    if (pCVar2->field_04EB != nullptr) {

      st::fn_00715AB0(pCVar2->field_04EB);
      st::fn_0072E2B0(reinterpret_cast<HoloTy *>(pCVar2->field_04EB));
      pCVar2->field_04EB = nullptr;
    }
    if ((int *)pCVar2->field_00AD != 0) {
      st::fn_006B8A30((int *)pCVar2->field_00AD);
    }
    pCVar2->field_00AD = 0;

    st::fn_00715AB0(reinterpret_cast<SpriteClassTy *>(&pCVar2->field_0018));
    g_cursorClass_00802A30 = nullptr;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x7d,0,errorCode,
                             st::mutable_c_string("%s"),"CursorClassTy::DoneCursor");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x7e);
  return;
}

// 00543990 CursorClassTy::ReInitCursorSpr
#line 4 "decomp/ST.exe/functions/00543990/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::ReInitCursorSpr

   [STSwitchEnumApplier] Switch target field_0494 uses
   /SubmarineTitans/Recovered/Enums/CursorClassTy_field_0494State. Cases:
   CASE_C=12;CASE_F=15;CASE_18=24;CASE_48=72;CASE_58=88 */

void __thiscall st::fn_00543990(CursorClassTy *this,int param_1)

{
  undefined4 *this_00;
  CursorClassTy *this_01;
  int iVar2;
  int iVar3;
  char cVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  CursorClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_01 = local_8;
  if (iVar2 == 0) {
    this_00 = &local_8->field_0018;
    st::fn_00715AB0(reinterpret_cast<SpriteClassTy *>(this_00));
    if (param_1 != 7) {
      iVar2 = 0x21;
      cVar4 = -0x7f;
      puVar5 = st::pointer_boundary_cast<uint *>(DAT_00811640);
    }
    else {
      iVar2 = 0;
      cVar4 = '\a';
      puVar5 = nullptr;
    }
    st::fn_007158A0
              (reinterpret_cast<SpriteClassTy *>(this_00),reinterpret_cast<int *>(g_ddxContext_008075A8),0,cVar4,puVar5,iVar2,
               (uint)(param_1 != 7));
    this_01->field_0494 = CASE_58;
    /* ST_CALLSITE[00543A1E]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
    st::fn_0040507E(this_01,CASE_0,this_01->field_0034,this_01->field_0038);
    if (this_01->field_001C != 0xffffffff) {
      st::fn_006B3AF0(reinterpret_cast<int *>(this_01->field_0060),this_01->field_001C);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x8c,0,iVar2,st::mutable_c_string("%s"),
                             "CursorClassTy::ReInitCursorSpr");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x8d);
  return;
}

// 00543AD0 CursorClassTy::SetImages
#line 4 "decomp/ST.exe/functions/00543AD0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::SetImages

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00543600 -> 00543AD0 @ 00543680 | 0054BF40 -> 00543AD0 @ 0054C073 | 0054BF40 ->
   00543AD0 @ 0054C358 | 0054BF40 -> 00543AD0 @ 0054C397 | 0054BF40 -> 00543AD0 @ 0054C3D6

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_00543AD0
          (CursorClassTy *this,undefined4 param_1,char *text,int param_3,BITMAPINFO *param_4,
          uint param_5,int param_6,int param_7)

{
  CursorClassTy *pCVar2;
  int iVar3;
  InternalExceptionFrame local_4c;
  CursorClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0xa8,0,iVar3,
                               st::mutable_c_string("%s"),"CursorClassTy::SetImages");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(-0x34,0,st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0xa9);
    return;
  }
  local_8->field_00B9 = -(int)param_4;
  local_8->field_00A9 = param_1;
  local_8->field_00BD = -param_5;
  /* ST_CALLSITE[00543B3F]: CALL dword ptr [EAX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(local_8->field_0018 + 4))(PTR_00806784,7,0,text,0xffffffff);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006B85D0
            ((uint *)pCVar2->field_00AD,(int)*(short *)(pCVar2->field_0069 + 0x23),
             (BITMAPINFO *)(pCVar2->field_0069 + 0x2d),0x8000000,0,param_4,param_5);
  pCVar2->field_0058 = param_3;
  if (pCVar2->field_001C != 0xffffffff) {
    st::fn_006B34D0
              (reinterpret_cast<uint *>(pCVar2->field_0060),pCVar2->field_001C,0xfffffffe,pCVar2->field_0034,
               pCVar2->field_0038);
  }
  if (param_6 < 0) {
    pCVar2->field_00B1 = pCVar2->field_003C - (int)param_4;
  }
  else {
    pCVar2->field_00B1 = param_6 - (int)param_4;
  }
  if (param_7 < 0) {
    pCVar2->field_00B5 = pCVar2->field_0040 - param_5;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  pCVar2->field_00B5 = param_7 - param_5;
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 00543C90 CursorClassTy::DrawSprite
#line 4 "decomp/ST.exe/functions/00543C90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::DrawSprite */

void __thiscall st::fn_00543C90(CursorClassTy *this,int param_1,int param_2)

{
  SpriteClassTy *pSVar1;
  uint uVar3;
  CursorClassTy *pCVar4;
  int iVar5;
  int iVar6;
  InternalExceptionFrame local_54;
  uint local_10;
  CursorClassTy *local_c;
  int local_8;

  local_c = this;

  local_10 = st::fn_006E51B0(reinterpret_cast<STAppC *>(this->field_0010));
  local_8 = 0;
  if (this->field_001C == 0xffffffff) {
    iVar5 = 0;
  }
  else {

    iVar5 = st::fn_006B33F0(this->field_0060,this->field_001C);
  }
  if (iVar5 != 0) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;

    iVar5 = st::fn_0072D7F0(local_54.jumpBuffer,0);
    pCVar4 = local_c;
    uVar3 = local_10;
    if (iVar5 == 0) {
      local_c->field_0020 = 0xfffffffe;
      if (param_1 != -1) {
        local_c->field_0034 = param_1;
        local_8 = 1;
      }
      if (param_2 != -1) {
        local_c->field_0038 = param_2;
        local_8 = 1;
      }
      if ((uint)(local_c->field_0058 + local_c->field_005C) <= local_10) {
        local_c->field_0020 = 0xffffffff;
        local_c->field_005C = local_10;
        local_8 = 1;
      }
      if (local_8 != 0) {
        if (local_c->field_00A9 == 0) {
          st::fn_006B8BC0((int *)local_c->field_00AD,local_c->field_0034,local_c->field_0038,
                       local_c->field_0020);
        }
        else {

          st::fn_006B3640
                    (reinterpret_cast<int *>(g_ddxContext_008075A8),local_c->field_001C,local_c->field_0020,
                     local_c->field_00B9 + local_c->field_0034,
                     local_c->field_00BD + local_c->field_0038);
        }
      }
      pSVar1 = pCVar4->field_04EB;
      if ((pSVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)
         ) {
        if (pSVar1->field_000C + -1 <= pSVar1->field_0008) {

          st::fn_00715AB0(pSVar1);
          st::fn_0072E2B0(reinterpret_cast<HoloTy *>(pCVar4->field_04EB));
          pCVar4->field_04EB = nullptr;
          g_currentExceptionFrame = local_54.previous;
          return;
        }
        if ((uint)(pSVar1->field_0040 + pSVar1->field_0044) <= uVar3) {
          pSVar1->field_0044 = uVar3;
          pSVar1->field_0008 = pSVar1->field_0008 + 1;
          st::fn_006E2970
                    (g_sT3DSMAPContext_00807598,(float)pCVar4->field_04EF,(float)pCVar4->field_04F3,
                     pCVar4->field_04F7,reinterpret_cast<int *>(&pCVar4->field_04EB->field_001C),
                     reinterpret_cast<int *>(&pCVar4->field_04EB->field_0020));
          pCVar4->field_04EB->field_001C =
               pCVar4->field_04EB->field_001C - *(int *)((int)pCVar4->field_04E7 + 9) / 2;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pCVar4->field_04EB->field_0020 =
               pCVar4->field_04EB->field_0020 - *(int *)((int)pCVar4->field_04E7 + 0xd) / 2;
          pSVar1 = pCVar4->field_04EB;

          st::fn_006B3730
                    (reinterpret_cast<uint *>(g_ddxContext_008075A8),pSVar1->field_0004,pSVar1->field_0008,
                     pSVar1->field_001C,pSVar1->field_0020);
        }
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;

    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0xcc,0,iVar5,
                               st::mutable_c_string("%s"),"CursorClassTy::DrawSprite");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0xcd);
  }
  return;
}

// 00543FA0 CursorClassTy::CursDrawInit
#line 4 "decomp/ST.exe/functions/00543FA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::CursDrawInit */

void __thiscall
st::fn_00543FA0(CursorClassTy *this,int param_1,int param_2,int param_3,int param_4)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  CursorClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0xd8,0,errorCode,
                               st::mutable_c_string("%s"),"CursorClassTy::CursDrawInit");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0xd9);
    return;
  }
  if (local_8->field_00A9 != 0) {
    st::fn_006B5F80(reinterpret_cast<int *>(g_ddxContext_008075A8),param_1,param_2,param_3,param_4);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  st::fn_006B8D50((int *)local_8->field_00AD,param_1,param_2,param_3,param_4);
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 005441A0 CursorClassTy::AddSysAcc
#line 4 "decomp/ST.exe/functions/005441A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::AddSysAcc */

void __thiscall st::fn_005441A0(CursorClassTy *this)

{
  CursorClassTy *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  RecoveredRecordView_00544100_1AA291CA *pRVar6;
  InternalExceptionFrame local_b8;
  RecoveredRecordView_00544100_1AA291CA local_74;
  CursorClassTy *local_28;
  uint local_24 [4];
  uint local_14;
  RecoveredRecordView_00544100_1AA291CA *local_10;
  uint local_c;

  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  local_28 = this;

  iVar2 = st::fn_0072D7F0(local_b8.jumpBuffer,0);
  this_00 = local_28;
  if (iVar2 == 0) {
    memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
    iVar4 = 0;
    local_10 = (RecoveredRecordView_00544100_1AA291CA *)local_28->field_0008;
    local_c = (-(uint)(DAT_0080734c != '\0') & 2) + 1;
    local_14 = 0x13;

    st::fn_006E6000(local_28,3,1,local_24);
    local_14 = 0x15;

    st::fn_006E6000(this_00,3,1,local_24);
    this_00->field_00C5 = local_c & 0xffff;
    this_00->field_0034 = local_c & 0xffff;
    this_00->field_00C9 = local_c >> 0x10;
    this_00->field_0038 = local_c >> 0x10;
    pRVar6 = &local_74;
    for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
      pRVar6->field_0000 = 0;
      pRVar6 = reinterpret_cast<RecoveredRecordView_00544100_1AA291CA *>(&pRVar6->field_0004);
    }
    local_74.field_0014 = this_00->field_0008;
    local_10 = &local_74;
    local_74.field_0000 = 8;
    local_74.field_0018 = 2;
    local_74.field_0038 = 2;
    local_14 = 0x10;
    local_74.field_0004 = 0x8000000;
    local_74.field_001C = 0xa110;
    local_74.field_003C = 0xa111;
    local_74.field_0034 = local_74.field_0014;

    st::fn_006E6000(this_00,3,1,local_24);
    local_74.field_0004 = 0x1000000;
    local_74.field_001C = 0xa112;
    local_74.field_003C = 0xa113;

    st::fn_006E6000(this_00,3,1,local_24);
    local_74.field_0004 = 0x40000000;
    local_74.field_001C = 0xa114;
    local_74.field_003C = 0xa115;

    st::fn_006E6000(this_00,3,1,local_24);
    local_74.field_003C = 0xa133;
    iVar4 = 4;
    do {
      /* ST_CALLSITE[0054430C]: CALL 0x00401d5c; direct=00401D5C CursorClassTy::sub_005440C0 */
      st::fn_00401D5C(this_00,iVar4,local_24,reinterpret_cast<RecoveredRecord_005440C0_A2D6FA40 *>(&local_74));
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    local_74.field_003C = 0;
    iVar4 = 8;
    do {
      /* ST_CALLSITE[0054432E]: CALL 0x00401d5c; direct=00401D5C CursorClassTy::sub_005440C0 */
      st::fn_00401D5C(this_00,iVar4,local_24,reinterpret_cast<RecoveredRecord_005440C0_A2D6FA40 *>(&local_74));
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x50);
    iVar4 = 0;
    do {
      /* ST_CALLSITE[00544346]: CALL 0x00403891; direct=00403891 CursorClassTy::sub_00544150 */
      st::fn_00403891(this_00,iVar4,local_24,reinterpret_cast<RecoveredRecord_00544150_A51B387C *>(&local_74));
      iVar4 = iVar4 + 1;
    } while (iVar4 < 10);
    iVar4 = 0;
    do {
      /* ST_CALLSITE[0054435E]: CALL 0x00401c71; direct=00401C71 CursorClassTy::sub_00544100 */
      st::fn_00401C71(this_00,iVar4,local_24,&local_74);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x1e);
    g_currentExceptionFrame = local_b8.previous;
    return;
  }
  g_currentExceptionFrame = local_b8.previous;

  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x127,0,iVar2,st::mutable_c_string("%s")
                             ,"CursorClassTy::AddSysAcc");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x128);
  return;
}

// 00544460 CursorClassTy::DelSysAcc
#line 4 "decomp/ST.exe/functions/00544460/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::DelSysAcc */

void __thiscall st::fn_00544460(CursorClassTy *this)

{
  CursorClassTy *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  RecoveredRecordView_00544100_1AA291CA *pRVar6;
  InternalExceptionFrame local_b8;
  RecoveredRecordView_00544100_1AA291CA local_74;
  uint local_28 [4];
  uint local_18;
  RecoveredRecordView_00544100_1AA291CA *local_14;
  CursorClassTy *local_8;

  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  local_8 = this;

  iVar2 = st::fn_0072D7F0(local_b8.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    memset(local_28, 0, 0x20); /* compiler bulk-zero initialization */
    iVar4 = 0;
    local_14 = (RecoveredRecordView_00544100_1AA291CA *)this_00->field_0008;
    local_18 = 0x14;

    st::fn_006E6000(this_00,3,1,local_28);
    pRVar6 = &local_74;
    for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
      pRVar6->field_0000 = 0;
      pRVar6 = reinterpret_cast<RecoveredRecordView_00544100_1AA291CA *>(&pRVar6->field_0004);
    }
    local_74.field_0014 = this_00->field_0008;
    local_74.field_0018 = 2;
    local_74.field_0038 = 2;
    local_74.field_0000 = 8;
    local_18 = 0x11;
    local_74.field_0004 = 0x8000000;
    local_74.field_001C = 0xa110;
    local_74.field_003C = 0xa111;
    local_74.field_0034 = local_74.field_0014;
    local_14 = &local_74;

    st::fn_006E6000(this_00,3,1,local_28);
    local_74.field_0004 = 0x1000000;
    local_74.field_001C = 0xa112;
    local_74.field_003C = 0xa113;

    st::fn_006E6000(this_00,3,1,local_28);
    local_74.field_0004 = 0x40000000;
    local_74.field_001C = 0xa114;
    local_74.field_003C = 0xa115;

    st::fn_006E6000(this_00,3,1,local_28);
    local_74.field_003C = 0xa133;
    iVar4 = 4;
    do {
      /* ST_CALLSITE[00544580]: CALL 0x00401d5c; direct=00401D5C CursorClassTy::sub_005440C0 */
      st::fn_00401D5C(this_00,iVar4,local_28,reinterpret_cast<RecoveredRecord_005440C0_A2D6FA40 *>(&local_74));
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    local_74.field_003C = 0;
    iVar4 = 8;
    do {
      /* ST_CALLSITE[005445A2]: CALL 0x00401d5c; direct=00401D5C CursorClassTy::sub_005440C0 */
      st::fn_00401D5C(this_00,iVar4,local_28,reinterpret_cast<RecoveredRecord_005440C0_A2D6FA40 *>(&local_74));
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x50);
    iVar4 = 0;
    do {
      /* ST_CALLSITE[005445BA]: CALL 0x00403891; direct=00403891 CursorClassTy::sub_00544150 */
      st::fn_00403891(this_00,iVar4,local_28,reinterpret_cast<RecoveredRecord_00544150_A51B387C *>(&local_74));
      iVar4 = iVar4 + 1;
    } while (iVar4 < 10);
    iVar4 = 0;
    do {
      /* ST_CALLSITE[005445D2]: CALL 0x00401c71; direct=00401C71 CursorClassTy::sub_00544100 */
      st::fn_00401C71(this_00,iVar4,local_28,&local_74);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x1e);
    g_currentExceptionFrame = local_b8.previous;
    return;
  }
  g_currentExceptionFrame = local_b8.previous;

  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x15a,0,iVar2,st::mutable_c_string("%s")
                             ,"CursorClassTy::DelSysAcc");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x15b);
  return;
}

// 005446C0 CursorClassTy::AddOpticAcc
#line 4 "decomp/ST.exe/functions/005446C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::AddOpticAcc */

void __thiscall st::fn_005446C0(CursorClassTy *this)

{
  CursorClassTy *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_b8;
  uint local_74 [5];
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_28 [4];
  uint local_18;
  undefined4 *local_14;
  CursorClassTy *local_8;

  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_b8.jumpBuffer,0);
  if (iVar2 == 0) {
    memset(local_28, 0, 0x20); /* compiler bulk-zero initialization */
    iVar4 = 0;
    puVar5 = local_74;
    for (iVar4 = 0x13; this_00 = local_8, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_14 = local_74;
    local_74[0] = 8;
    local_5c = 2;
    local_60 = local_8->field_0008;
    local_18 = 0x10;
    puVar5 = &DAT_00808136;
    do {
      local_74[1] = puVar5[-0x50];
      local_58 = *puVar5;
      st::fn_006E6000(this_00,3,1,local_28);
      puVar5 = puVar5 + 1;
    } while ((int)puVar5 < 0x808146);
    g_currentExceptionFrame = local_b8.previous;
    return;
  }
  g_currentExceptionFrame = local_b8.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x175,0,iVar2,st::mutable_c_string("%s")
                             ,"CursorClassTy::AddOpticAcc");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x176);
  return;
}

// 00544800 CursorClassTy::DelOpticAcc
#line 4 "decomp/ST.exe/functions/00544800/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::DelOpticAcc */

void __thiscall st::fn_00544800(CursorClassTy *this)

{
  CursorClassTy *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_b8;
  uint local_74 [5];
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_28 [4];
  uint local_18;
  undefined4 *local_14;
  CursorClassTy *local_8;

  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_b8.jumpBuffer,0);
  if (iVar2 == 0) {
    memset(local_28, 0, 0x20); /* compiler bulk-zero initialization */
    iVar4 = 0;
    puVar5 = local_74;
    for (iVar4 = 0x13; this_00 = local_8, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_14 = local_74;
    local_74[0] = 8;
    local_5c = 2;
    local_60 = local_8->field_0008;
    local_18 = 0x11;
    puVar5 = &DAT_00808136;
    do {
      local_74[1] = puVar5[-0x50];
      local_58 = *puVar5;
      st::fn_006E6000(this_00,3,1,local_28);
      puVar5 = puVar5 + 1;
    } while ((int)puVar5 < 0x808146);
    g_currentExceptionFrame = local_b8.previous;
    return;
  }
  g_currentExceptionFrame = local_b8.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),399,0,iVar2,st::mutable_c_string("%s"),
                             "CursorClassTy::DelOpticAcc");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),400);
  return;
}

// 005449B0 CursorClassTy::GetMessage
#line 4 "decomp/ST.exe/functions/005449B0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::GetMessage

   [STSwitchEnumApplier] Switch target field_00DE uses
   /SubmarineTitans/Recovered/Enums/CursorClassTy_field_00DEState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_5=5

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005449B0; family_names=CursorClassTy::GetMessage; ret4=74;
   direct_offsets={10:10,14:8,18:6,1c:3}

   [STSwitchEnumApplier] Switch target field_00CD uses
   /SubmarineTitans/Recovered/Enums/CursorClassTy_field_00CDState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4

   [STSwitchEnumApplier] Switch target field_00DE uses
   /SubmarineTitans/Recovered/Enums/CursorClassTy_field_00DEState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5 */

int __thiscall st::fn_005449B0(CursorClassTy *this,STMessage *message)

{
  alignas(4) byte st_stack_frame[1368];

  int *piVar1;
  char cVar2;
  CursorClassTy_field_00DEState CVar3;
  STMessageId SVar4;
  AnonShape_005449B0_F65ED625 *pAVar5;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar6;
  bool bVar7;
  CursorClassTy *this_00;
  short sVar8;
  int local_EAX_58;
  uint *puVar9;
  int iVar10;
  int local_EAX_1318;
  int local_EAX_1737;
  int local_EAX_2209;
  uint uVar11;
  int local_EAX_2439;
  int local_EAX_2734;
  int local_EAX_3132;
  char *pcVar12_mg14;
  char *pcVar12_mg13;
  char *pcVar12_mg12;
  char *pcVar12_mg15;
  char *pcVar12_mg11;
  char *pcVar13_mgC;
  char *pcVar12_mgB;
  uint *local_EAX_4371;
  char *pcVar12_mgD;
  uint *puVar13;
  char *pcVar12_mgF;
  UINT UVar12;
  char *pcVar12_mg10;
  int local_EAX_4779;
  int local_EAX_4809;
  int iVar13;
  uint *puVar14;
  int local_EAX_5241;
  int local_EAX_5271;
  int local_EAX_6047;
  int local_EAX_6656;
  cMf32 *this_01;
  ushort *puVar16;
  int local_EAX_7651;
  int iVar8;
  ushort uVar15;
  int iVar17;
  uint uVar16;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined3 uVar22;
  int *piVar23;
  char *pcVar24;
  uint *puVar25;
  code *pcVar26;
  char *pcVar27;
  char *pcVar28;
  longlong lVar29;
  int iVar30;
  int iVar31;
  ushort uVar32;
  short sVar33;
  byte bVar34;
  HINSTANCE module;
  uint local_524 [256];
  InternalExceptionFrame local_124;
  InternalExceptionFrame local_e0;
  int local_9c;
  int local_98;
  int local_8c;
  int local_88;
  float local_7c;
  uint local_78;
  uint local_74;
  float local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  int *local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  CursorClassTy *local_44;
  uint local_40 [6];
  ushort local_28;
  ushort local_26;
  int local_1c;
  cMf32 *local_14;
  char local_d;
  float local_c;
  AnonShape_005449B0_F65ED625 *local_8;
  char *pcVar12_mg2;
  char *pcVar12_mg8;

  local_44 = this;

  local_1c = st::fn_006E51B0(reinterpret_cast<STAppC *>(this->field_0010));
  local_e0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_e0;

  local_EAX_58 = st::fn_0072D7F0(local_e0.jumpBuffer,0);
  this_00 = local_44;
  if (local_EAX_58 != 0) {
    g_currentExceptionFrame = local_e0.previous;

    iVar17 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x4d6,0,local_EAX_58,
                                st::mutable_c_string("%s"),"CursorClassTy::GetMessage");
    if (iVar17 == 0) {
      st::fn_006A5E40(local_EAX_58,0,st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x4d7);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }

  st::fn_006E5FD0(local_44,message);
  switch(message->id) {
  case 0xa110:
    this_00->field_0xd4 = 1;
    break;
  case 0xa111:
    this_00->field_0xd4 = 0;
    break;
  case 0xa112:
    this_00->field_0xd3 = 1;
    break;
  case 0xa113:
    this_00->field_0xd3 = 0;
    break;
  case 0xa114:
    this_00->field_0xd5 = 1;
    break;
  case MESS_CURSORCLASSTY_A115:
    this_00->field_0xd5 = 0;
  }
  if (((this_00->field_0493 != 2) && (MESS_CURSORCLASSTY_A0FF < message->id)) &&
     (message->id < 0xb100)) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if ((((DAT_00808784 != 0) || (DAT_0080878c != 0)) || (DAT_00808790 != 0)) &&
     ((0xa10e < message->id && (message->id < 0xb100)))) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  SVar4 = message->id;
  if (SVar4 < MESS_SHARED_0061) {
    if (SVar4 == MESS_SHARED_0060) {
      this_00->field_00C9 = (uint)(message->arg1).words.high;
      uVar19 = (uint)(message->arg1).words.low;
      this_00->field_00C5 = uVar19;
      /* ST_CALLSITE[005452E9]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      st::fn_0040241E(this_00,uVar19,this_00->field_00C9);
      if ((this_00->field_04B2 <= this_00->field_00C5) &&
         (this_00->field_00C5 < this_00->field_04BA + this_00->field_04B2)) {
        if ((this_00->field_04B6 <= this_00->field_00C9) &&
           (this_00->field_00C9 < this_00->field_04BE + this_00->field_04B6)) {
          uVar11 = 1;
          goto LAB_0054532f;
        }
      }
      uVar11 = 0;
LAB_0054532f:
      this_00->field_0496 = uVar11;
      /* ST_CALLSITE[00545337]: CALL 0x00403634; direct=00403634 CursorClassTy::sub_00544990 */
      local_EAX_2439 = st::fn_00403634(this_00);
      if (local_EAX_2439 == 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_tLOBldMark_007FB2AC == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_0496 != 0) && (this_00->field_04A2 == CASE_E)) {
        if (g_tLOBldMark_007FB2AC->field_0018 != 0) {
          /* ST_CALLSITE[00545375]: CALL 0x0040515a; direct=0040515A TLOBldMark::sub_004C6210 */
          st::fn_0040515A(g_tLOBldMark_007FB2AC,this_00->field_04AA,0);
        }
        /* ST_CALLSITE[005453A4]: CALL 0x00404818; direct=00404818 TLOBldMark::sub_004C6440 */
        st::fn_00404818
                  (g_tLOBldMark_007FB2AC,(float)(this_00->field_00C5 - this_00->field_04B2),
                   this_00->field_00C9 - this_00->field_04B6,nullptr,nullptr,nullptr);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_tLOBldMark_007FB2AC->field_0018 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[005453CA]: CALL 0x0040153c; direct=0040153C TLOBldMark::sub_004C63F0 */
      st::fn_0040153C(g_tLOBldMark_007FB2AC);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    switch(SVar4) {
    case MESS_ID_NONE:
      switch(this_00->field_00DE) {
      case CASE_0:
        /* ST_CALLSITE[00545079]: CALL 0x00403634; direct=00403634 CursorClassTy::sub_00544990 */
        local_EAX_1737 = st::fn_00403634(this_00);
        if (local_EAX_1737 == 0) break;
        if (-1 < this_00->field_010B) {
          st::fn_006B3BB0(reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_010B);
          this_00->field_010B = -1;
        }
        switch(this_00->field_00CD) {
        case CASE_0:

          st::fn_00402EA0(this_00,0,0,g_nWidth_00806730,DAT_00806734,this_00->field_00C5,
                             this_00->field_00C9,1);
          break;
        case CASE_1:
          iVar13 = 100;
          uVar32 = 0;
          goto LAB_005450ca;
        case CASE_2:

          st::fn_00402EA0(this_00,0,0,g_nWidth_00806730,DAT_00806734,g_nWidth_00806730 + -1,100,0
                            );
          break;
        case CASE_3:

          st::fn_00402EA0(this_00,0,0,g_nWidth_00806730,DAT_00806734,100,0,0);
          break;
        case CASE_4:
          iVar13 = DAT_00806734 + -1;
          uVar32 = 100;
LAB_005450ca:

          st::fn_00402EA0(this_00,0,0,g_nWidth_00806730,DAT_00806734,(uint)uVar32,iVar13,0);
        }
        break;
      case CASE_1:
        if (g_sT3DSMAPContext_00807598 != nullptr) {
          local_7c = (float)this_00->field_00EF;
          local_78 = this_00->field_00F3;
          local_74 = 0;

          st::fn_006E25D0
                    (g_sT3DSMAPContext_00807598,&local_9c,&local_7c,0.0,0.0,0.0,0);
          this_00->field_00DF = local_9c >> 0x10;
          this_00->field_00E3 = local_98 >> 0x10;
        }
        uVar19 = (this_00->field_00C5 - this_00->field_04B2) - this_00->field_00DF;
        this_00->field_00E7 = uVar19;
        uVar20 = (this_00->field_00C9 - this_00->field_04B6) - this_00->field_00E3;
        this_00->field_00EB = uVar20;
        if ((5 < st::storage_bit_cast<int>(static_cast<uint32_t>((uVar19 ^ (int)uVar19 >> 0x1f) - ((int)uVar19 >> 0x1f)))) ||
           (5 < st::storage_bit_cast<int>(static_cast<uint32_t>((uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f))))) {
          piVar23 = &this_00->field_010B;
          this_00->field_00DE = CASE_2;
          if (-1 < this_00->field_010B) {
            st::fn_006B3BB0(reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_010B);
          }
          iVar13 = 0x20;
          puVar9 = reinterpret_cast<uint *>(&this_00->field_0x113);
          do {
            iVar13 = iVar13 + -1;
            *puVar9 = (-(uint)(this_00->field_04A2 != 0) & 0x49) + 0x45 | 0x1000000;
            puVar9 = puVar9 + 7;
          } while (iVar13 != 0);

          st::fn_006B96F0(reinterpret_cast<int *>(g_ddxContext_008075A8),reinterpret_cast<uint *>(piVar23),10,0x20,
                       (uint)&this_00->field_0x113);

          st::fn_006B1B10(reinterpret_cast<AnonShape_006B1B10_121F236C *>(g_ddxContext_008075A8),*piVar23,2);

          st::fn_006B3640
                    (reinterpret_cast<int *>(g_ddxContext_008075A8),*piVar23,0xffffffff,this_00->field_00DF,
                     this_00->field_00E3);
          st::fn_006B2800(g_ddxContext_008075A8,*piVar23,this_00->field_00E7,this_00->field_00EB);

          iVar13 = st::fn_00405687((int)this_00);
          if (iVar13 == 0) {
            /* ST_CALLSITE[00544D01]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
            st::fn_0040507E(this_00,CASE_0,this_00->field_0034,this_00->field_0038);
          }
        }
        break;
      case CASE_2:
        local_8 = (AnonShape_005449B0_F65ED625 *)0xfffffffe;
        local_c = 1.4013e-45;
        switch(this_00->field_00CD) {
        case CASE_1:
          iVar10 = this_00->field_04B6;
          iVar21 = this_00->field_04B2;
          iVar13 = iVar10 + 100;
          iVar18 = iVar21;
          goto LAB_00544d9b;
        case CASE_2:
          iVar10 = this_00->field_04B6;
          iVar30 = this_00->field_04BA;
          iVar21 = this_00->field_04B2;
          iVar13 = iVar10 + 100;
          iVar18 = iVar30 + -1 + iVar21;
          iVar31 = this_00->field_04BE;
          break;
        case CASE_3:
          iVar21 = this_00->field_04B2;
          iVar10 = this_00->field_04B6;
          iVar13 = iVar10;
          iVar18 = iVar21 + 100;
LAB_00544d9b:
          iVar31 = this_00->field_04BE;
          iVar30 = this_00->field_04BA;
          break;
        case CASE_4:
          iVar31 = this_00->field_04BE;
          iVar10 = this_00->field_04B6;
          iVar21 = this_00->field_04B2;
          iVar13 = iVar31 + -1 + iVar10;
          iVar18 = iVar21 + 100;
          iVar30 = this_00->field_04BA;
          break;
        default:
          goto switchD_00544d44_default;
        }

        st::fn_00402EA0(this_00,iVar21,iVar10,iVar30,iVar31,iVar18,iVar13,0);
switchD_00544d44_default:
        local_70 = (float)this_00->field_00EF;
        local_6c = this_00->field_00F3;
        local_68 = 0;

        st::fn_006E25D0(g_sT3DSMAPContext_00807598,&local_8c,&local_70,0.0,0.0,0.0,0);
        this_00->field_00E3 = local_88 >> 0x10;
        this_00->field_00DF = local_8c >> 0x10;
        if (this_00->field_00CD == CASE_0) {
          piVar23 = &this_00->field_00C9;
          piVar1 = &this_00->field_00C5;

          local_EAX_1318 =
               st::fn_00405DDA(this_00->field_04B2,this_00->field_04B6,this_00->field_04BA,
                                  this_00->field_04BE,piVar1,piVar23);
          if (local_EAX_1318 != 0) {
            local_28 = (undefined2)*piVar1;
            local_26 = (undefined2)*piVar23;
            local_40[4] = 0x16;

            st::fn_006E6000(this_00,3,1,local_40);
          }

          iVar13 = st::fn_00405687((int)this_00);

          iVar13 = st::fn_00402EA0(this_00,this_00->field_04B2,this_00->field_04B6,
                                      this_00->field_04BA,this_00->field_04BE,*piVar1,*piVar23,
                                      (uint)(iVar13 == 0));
          if (iVar13 != 0) {
            st::fn_006E1440(g_sT3DSMAPContext_00807598);
            iVar13 = *piVar23;
            uVar19 = (*piVar1 - this_00->field_00DF) - this_00->field_04B2;
            this_00->field_00E7 = uVar19;
            goto LAB_00544e8f;
          }
          local_14 = (cMf32 *)this_00->field_00EB;
          uVar20 = this_00->field_00E7;
          uVar19 = (*piVar1 - this_00->field_00DF) - this_00->field_04B2;
          uVar16 = (*piVar23 - this_00->field_04B6) - this_00->field_00E3;
          this_00->field_00E7 = uVar19;
          this_00->field_00EB = uVar16;
          if ((uVar20 == uVar19) && (st::machine_word_boundary_cast<uint>(local_14) == st::machine_word_boundary_cast<uint>((cMf32 *)uVar16))) {
            local_c = 0.0;
          }
        }
        else {
          st::fn_006E1440(g_sT3DSMAPContext_00807598);
          iVar13 = this_00->field_00C9;
          uVar19 = (this_00->field_00C5 - this_00->field_04B2) - this_00->field_00DF;
          this_00->field_00E7 = uVar19;
LAB_00544e8f:
          uVar16 = (iVar13 - this_00->field_04B6) - this_00->field_00E3;
          this_00->field_00EB = uVar16;
        }
        if (0x31 < (uint)(local_1c - this_00->field_010F)) {
          this_00->field_010F = local_1c;
          local_8 = (AnonShape_005449B0_F65ED625 *)0xffffffff;
        }
        if (local_c != 0.0) {
          st::fn_006B2800(g_ddxContext_008075A8,this_00->field_010B,uVar19,uVar16);
        }
        if ((local_c != 0.0) || ((int)local_8 < 0)) {

          st::fn_006B3640
                    (reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_010B,(uint)local_8,
                     this_00->field_00DF,this_00->field_00E3);
        }
        break;
      case CASE_3:
        uVar19 = this_00->field_010B;
        if (-1 < (int)uVar19) goto LAB_0054505c;
        goto LAB_0054506b;
      case CASE_4:
        uVar19 = this_00->field_010B;
LAB_0054505c:
        st::fn_006B3BB0(reinterpret_cast<int *>(g_ddxContext_008075A8),uVar19);
        this_00->field_010B = -1;
LAB_0054506b:
        this_00->field_00DE = CASE_0;
        break;
      case CASE_5:
        if (g_sT3DSMAPContext_00807598 != nullptr) {

          st::fn_006E1C20
                    (g_sT3DSMAPContext_00807598,(float)(this_00->field_00C5 - this_00->field_04B2),
                     this_00->field_00C9 - this_00->field_04B6,this_00->field_0107,reinterpret_cast<float *>(&local_8)
                     ,&local_c);
          lVar29 = st::fn_0072E288();
          this_00->field_00FB = (int)lVar29;
          if ((int)lVar29 < 1) {
            this_00->field_00FB = 1;
          }
          lVar29 = st::fn_0072E288();
          iVar13 = (short)lVar29;
          lVar29 = st::fn_0072E288();
          iVar18 = (short)lVar29;
          lVar29 = st::fn_0072E288();
          sVar8 = (short)lVar29;
          sVar33 = sVar8 >> 0xf;
          lVar29 = st::fn_0072E288();

          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_EAX_2209 = st::fn_006DB910((short)lVar29,CONCAT22(sVar33,sVar8),iVar18,iVar13);
          this_00->field_00F7 = local_EAX_2209;
          st::fn_006E8DF0
                    (g_sT3DSMAPContext_00807598,this_00->field_010B,this_00->field_00FF,
                     this_00->field_0103,this_00->field_0107,local_EAX_2209,this_00->field_00FB,1);
        }
      }
      if ((this_00->field_04A6 != 0) && (this_00->field_04A2 != 0)) {
        /* ST_CALLSITE[005452A3]: CALL 0x004040fc; direct=004040FC CursorClassTy::sub_0054A8D0 */
        st::fn_004040FC(this_00);
      }
      /* ST_CALLSITE[005452AC]: CALL 0x00403a67; direct=00403A67 CursorClassTy::GCGameState */
      st::fn_00403A67(this_00,1);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_ID_CREATE:
      /* ST_CALLSITE[00544ACC]: CALL 0x004010b9; direct=004010B9 CursorClassTy::InitCursor */
      st::fn_004010B9(this_00,1);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_SHARED_0003:
      /* ST_CALLSITE[00544B1C]: CALL 0x00403436; direct=00403436 CursorClassTy::DoneCursor */
      st::fn_00403436(this_00);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_SHARED_0008:
      if (this_00->field_00C1 == 0) {
        this_00->field_00C1 = 1;
        /* ST_CALLSITE[00544AFF]: CALL 0x004024a0; direct=004024A0 CursorClassTy::AddSysAcc */
        st::fn_004024A0(this_00);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      break;
    case MESS_CURSORCLASSTY_0009:
      if (this_00->field_00C1 != 0) {
        this_00->field_00C1 = 0;
        /* ST_CALLSITE[00544B4F]: CALL 0x00405164; direct=00405164 CursorClassTy::DelSysAcc */
        st::fn_00405164(this_00);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
    }
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (SVar4 < MESS_CURSORCLASSTY_A31D) {
    if (0xa312 < SVar4) {
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[00546928]: CALL 0x004056ff; direct=004056FF STAllPlayersC::SaveTmp */
      st::fn_004056FF(g_allPlayers_007FA174,SVar4 - MESS_CURSORCLASSTY_A313);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (MESS_CURSORCLASSTY_A124 < SVar4) {
      if (SVar4 < 0xa204) {
        if (0xa1fe < SVar4) {
          if (g_playSystem_00802A38 == nullptr) {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          local_d = '\x03' - (char)message->id;
          /* ST_CALLSITE[00546736]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
          st::fn_00403C33
                    (g_playSystem_00802A38,(undefined4 *)0x15,reinterpret_cast<uint *>(&local_d),0,0xffffffff);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        switch(SVar4) {
        case 0xa125:
          goto switchD_00546590_caseD_a125;
        case MESS_CURSORCLASSTY_A124|MESS_ID_CREATE:
          if (DAT_00808783 != '\x03') {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          /* ST_CALLSITE[005466A6]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
          st::fn_00403058(this_00);
          if (g_intercomPanel_0080169C == nullptr) {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          /* ST_CALLSITE[005466BB]: CALL 0x00401dcf; direct=00401DCF IntercomPanelTy::SwitchIntercomPanel */
          st::fn_00401DCF(g_intercomPanel_0080169C,3);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case MESS_CURSORCLASSTY_A124|MESS_SHARED_0003:
          if (DAT_00808783 != '\x03') {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          /* ST_CALLSITE[005466E5]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
          st::fn_00403058(this_00);
          if (g_intercomPanel_0080169C == nullptr) {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          /* ST_CALLSITE[005466F9]: CALL 0x00401dcf; direct=00401DCF IntercomPanelTy::SwitchIntercomPanel */
          st::fn_00401DCF(g_intercomPanel_0080169C,2);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case MESS_CURSORCLASSTY_A100|MESS_TRACKBARCLASSTY_0028:
          if (g_cPanel_00801688 == nullptr) {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          /* ST_CALLSITE[0054663D]: CALL 0x00404a0c; direct=00404A0C CPanelTy::sub_004FAFF0 */
          st::fn_00404A0C(g_cPanel_00801688);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        default:
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case 0xa12f:
          this_00->field_00CD = CASE_3;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case 0xa130:
          this_00->field_00CD = CASE_4;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case 0xa131:
          this_00->field_00CD = CASE_2;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case 0xa132:
          this_00->field_00CD = CASE_1;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case MESS_CURSORCLASSTY_A133:
          this_00->field_00CD = CASE_0;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
      }
      if (MESS_CURSORCLASSTY_A209 < SVar4) {
        switch(SVar4) {
        case 0xa2ff:
        case 0xa300:
        case 0xa301:
        case 0xa302:
        case 0xa303:
        case 0xa304:
        case 0xa305:
        case 0xa306:
        case 0xa307:
        case 0xa308:
          goto switchD_005468af_caseD_a2ff;
        case 0xa309:
        case 0xa30a:
        case 0xa30b:
        case 0xa30c:
        case 0xa30d:
        case 0xa30e:
        case 0xa30f:
        case 0xa310:
        case 0xa311:
        case 0xa312:
          if (g_opticClass_007FB2A0 == nullptr) {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          st::fn_00403F1C(SVar4 - 0xa309);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        default:
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
      }
      if (SVar4 != MESS_CURSORCLASSTY_A209) {
        if (SVar4 == MESS_CURSORCLASSTY_A206) {
          memset(local_40, 0, 0x20); /* compiler bulk-zero initialization */
          local_40[4] = 0x100;

          st::fn_006E6000(this_00,3,0x100,local_40);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (SVar4 == MESS_CURSORCLASSTY_A207) {
          memset(local_40, 0, 0x20); /* compiler bulk-zero initialization */
          local_40[4] = 0x101;

          st::fn_006E6000(this_00,3,0x100,local_40);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (SVar4 != MESS_CURSORCLASSTY_A208) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (g_opticClass_007FB2A0 == nullptr) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        memset(local_40, 0, 0x20); /* compiler bulk-zero initialization */

        local_EAX_7651 = st::fn_0040581C();
        switch(local_EAX_7651) {
        case 0:
switchD_0054679d_caseD_0:
          local_40[4] = 0x105;
          break;
        case 1:
switchD_0054679d_caseD_1:
          local_40[4] = 0x106;
          break;
        case 2:
switchD_0054679d_caseD_2:
          local_40[4] = 0x107;
          break;
        case 3:
switchD_0054679d_caseD_3:
          local_40[4] = 0x104;
        default:
          break;
        }
switchD_0054679d_default:

        st::fn_006E6000(this_00,3,0x100,local_40);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_opticClass_007FB2A0 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      memset(local_40, 0, 0x20); /* compiler bulk-zero initialization */

      iVar8 = st::fn_0040581C();
      switch(iVar8) {
      case 0:
        goto switchD_0054679d_caseD_2;
      case 1:
        goto switchD_0054679d_caseD_3;
      case 2:
        goto switchD_0054679d_caseD_0;
      case 3:
        goto switchD_0054679d_caseD_1;
      default:
        goto switchD_0054679d_default;
      }
    }
    if (SVar4 == MESS_CURSORCLASSTY_A124) {
      /* ST_CALLSITE[0054653C]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
      st::fn_00403058(this_00);
      if (g_intercomPanel_0080169C == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[00546551]: CALL 0x00401dcf; direct=00401DCF IntercomPanelTy::SwitchIntercomPanel */
      st::fn_00401DCF(g_intercomPanel_0080169C,0);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (MESS_CURSORCLASSTY_A102 < SVar4) {
      switch(SVar4) {
      case 0xa103:
        if (g_optPanel_008016DC == nullptr) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        /* ST_CALLSITE[005464E7]: CALL 0x00404f16; direct=00404F16 OptPanelTy::Question */
        st::fn_00404F16(g_optPanel_008016DC,'\x04');
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case 0xa104:
        if (g_optPanel_008016DC == nullptr) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (DAT_008067a0 != '\0') {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        /* ST_CALLSITE[0054651F]: CALL 0x00404f16; direct=00404F16 OptPanelTy::Question */
        st::fn_00404F16(g_optPanel_008016DC,'\x05');
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case MESS_OPTPANELTY_A105:
      case MESS_OPTPANELTY_A106:
        if (g_optPanel_008016DC == nullptr) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        /* ST_CALLSITE[005464BF]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/OptPanelTy;pointer:/SubmarineTitans/Recovered/STMessage */
        g_optPanel_008016DC->GetMessage(message);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      default:
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case 0xa11f:
        if (DAT_00808783 == '\x03') {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        DAT_00808794 = 1;
        _DAT_00808798 = 1;
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case 0xa120:
        if (DAT_00808783 == '\x03') {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        uVar19 = 0xffffffff;
        pcVar24 = &CHAR_00h_00807680;
        break;
      case 0xa122:
        /* ST_CALLSITE[00546232]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
        st::fn_00403058(this_00);
        if (g_cPanel_00801688 == nullptr) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        /* ST_CALLSITE[00546245]: CALL 0x004024c8; direct=004024C8 CPanelTy::SwitchCPanel */
        st::fn_004024C8(g_cPanel_00801688);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case MESS_CURSORCLASSTY_A123:
        if (g_cPanel_00801688 == nullptr) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        /* ST_CALLSITE[0054626E]: CALL 0x004015af; direct=004015AF CPanelTy::sub_004FA3B0 */
        st::fn_004015AF(g_cPanel_00801688);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      do {
        pcVar28 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar28 = pcVar24 + 1;
        cVar2 = *pcVar24;
        pcVar24 = pcVar28;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      local_58 = &local_48;
      local_48 = 0;
      pcVar24 = pcVar28 + -uVar19;
      pcVar28 = reinterpret_cast<char *>(&DAT_0080ee1a);
      memmove(pcVar28, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      uVar19 = 0xffffffff;
      pcVar12_mg2 = st_global_0079ADE4;
      do {
        pcVar24 = pcVar12_mg2;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar24 = pcVar12_mg2 + 1;
        cVar2 = *pcVar12_mg2;
        pcVar12_mg2 = pcVar24;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      iVar13 = -1;
      pcVar28 = reinterpret_cast<char *>(&DAT_0080ee1a);
      do {
        pcVar27 = pcVar28;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar27 = pcVar28 + 1;
        cVar2 = *pcVar28;
        pcVar28 = pcVar27;
      } while (cVar2 != '\0');
      pcVar24 = pcVar24 + -uVar19;
      pcVar28 = pcVar27 + -1;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar28 = *(undefined4 *)pcVar24;
        pcVar24 = pcVar24 + 4;
        pcVar28 = pcVar28 + 4;
      }
      local_14 = nullptr;
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar28 = *pcVar24;
        pcVar24 = pcVar24 + 1;
        pcVar28 = pcVar28 + 1;
      }
      uVar19 = 0xffffffff;
      pcVar24 = &CHAR_00h_00807ddd;
      do {
        pcVar28 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar28 = pcVar24 + 1;
        cVar2 = *pcVar24;
        pcVar24 = pcVar28;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      iVar13 = -1;
      pcVar24 = reinterpret_cast<char *>(&DAT_0080ee1a);
      do {
        pcVar27 = pcVar24;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar27 = pcVar24 + 1;
        cVar2 = *pcVar24;
        pcVar24 = pcVar27;
      } while (cVar2 != '\0');
      pcVar24 = pcVar28 + -uVar19;
      pcVar28 = pcVar27 + -1;
      memmove(pcVar28, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      st::fn_006B8280(reinterpret_cast<char *>(&DAT_0080ee1a),reinterpret_cast<char *>(&DAT_0080ee1a));
      uVar19 = 0xffffffff;
      pcVar12_mg8 = PTR_s_SAVE_QUICKSAVE_0079ade8;
      do {
        pcVar24 = pcVar12_mg8;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar24 = pcVar12_mg8 + 1;
        cVar2 = *pcVar12_mg8;
        pcVar12_mg8 = pcVar24;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      iVar13 = -1;
      pcVar28 = reinterpret_cast<char *>(&DAT_0080ee1a);
      do {
        pcVar27 = pcVar28;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar27 = pcVar28 + 1;
        cVar2 = *pcVar28;
        pcVar28 = pcVar27;
      } while (cVar2 != '\0');
      pcVar24 = pcVar24 + -uVar19;
      pcVar28 = pcVar27 + -1;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar28 = *(undefined4 *)pcVar24;
        pcVar24 = pcVar24 + 4;
        pcVar28 = pcVar28 + 4;
      }
      local_124.previous = g_currentExceptionFrame;
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar28 = *pcVar24;
        pcVar24 = pcVar24 + 1;
        pcVar28 = pcVar28 + 1;
      }
      g_currentExceptionFrame = &local_124;

      local_EAX_6656 = st::fn_0072D7F0(local_124.jumpBuffer,0);
      this_01 = local_14;
      if (local_EAX_6656 == 0) {
        /* ST_CALLSITE[005463CD]: CALL 0x006f0ec0; direct=006F0EC0 Library::Ourlib::MF32INT::FUN_006f0ec0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/cMf32; signature=__cdecl;pointer:/cMf32;/uint;pointer:/byte;/int;/uint;/uint */
        this_01 = st::pointer_boundary_cast<cMf32 *>(st::fn_006F0EC0(0x345,reinterpret_cast<byte *>(&DAT_0080ee1a),0,0,0));
        local_14 = this_01;
        puVar16 = st::fn_006F1CE0(this_01,0x80,PTR_s_SAVE_DESC_0079adec,reinterpret_cast<int *>(&local_58),0);
        if (puVar16 != nullptr) {
          iVar13 = -0x77ffffea;
          if (DAT_00808783 == '\x01') {
            iVar13 = -0x77fffeea;
          }
          else if (DAT_00808783 == '\x02') {
            iVar13 = -0x77fffdea;
          }
          if (iVar13 == local_48) {
            if (DAT_00808783 == '\x01') {
              STPiece<0,1>(DAT_008087a0) = 9;
            }
            else if (DAT_00808783 == '\x02') {
              STPiece<0,1>(DAT_008087a0) = 10;
            }
            memset(local_40, 0, 0x20); /* compiler bulk-zero initialization */
            DAT_0080879c = 1;
            _DAT_0080f32e = 1;
            local_40[3] = 1;
            local_40[4] = 0x6100;

            st::fn_006E3B50(local_44->field_0010,local_40);
          }
        }
      }
      if (this_01 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      g_currentExceptionFrame = local_124.previous;
      st::fn_006F1170(this_01);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (SVar4 == MESS_CURSORCLASSTY_A102) {
      /* ST_CALLSITE[005461E0]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
      st::fn_00403058(this_00);
      if (g_optPanel_008016DC == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[005461F8]: CALL 0x00405a42; direct=00405A42 OptPanelTy::SwitchOptPanel */
      st::fn_00405A42(g_optPanel_008016DC,-1);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (MESS_CURSORCLASSTY_4203 < SVar4) {
      if (SVar4 == MESS_CURSORCLASSTY_A0FF) {
        message->id = MESS_STAPPC_7104;
        /* ST_CALLSITE[005461C3]: CALL 0x004058ee; direct=004058EE STAppC::GetMessage */
        st::fn_004058EE(reinterpret_cast<STAppC *>(&DAT_00807620),message);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (SVar4 != MESS_CURSORCLASSTY_A100) {
        if (SVar4 != MESS_CURSORCLASSTY_A101) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        /* ST_CALLSITE[0054611D]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
        st::fn_00403058(this_00);
        if (g_optPanel_008016DC == nullptr) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        /* ST_CALLSITE[00546132]: CALL 0x00405a42; direct=00405A42 OptPanelTy::SwitchOptPanel */
        st::fn_00405A42(g_optPanel_008016DC,'\x0f');
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[0054614F]: CALL 0x00403634; direct=00403634 CursorClassTy::sub_00544990 */
      local_EAX_6047 = st::fn_00403634(this_00);
      if (local_EAX_6047 == 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      local_54 = 1;
      if (g_parentSystem_0081163C == nullptr) {
        local_4c = 1;
        puVar9 = &local_54;
        local_50 = (uint)(DAT_00808784 == 0);
      }
      else {
        local_4c = 1;
        puVar9 = &local_54;
        local_50 = (uint)(g_parentSystem_0081163C->field_042C == 0);
      }
      goto LAB_00547c2d;
    }
    if (SVar4 == MESS_CURSORCLASSTY_4203) {
      /* ST_CALLSITE[005460EB]: CALL 0x00401055; direct=00401055 CursorClassTy::sub_00544940 */
      st::fn_00401055(this_00);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (MESS_CURSORCLASSTY_4201 < SVar4) {
      if (SVar4 != MESS_CURSORCLASSTY_4202) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (DAT_00807322 == 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((message->arg1).u32 != this_00->field_04DA) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      this_00->field_04DA = 0;
      st::fn_006B2800(g_ddxContext_008075A8,this_00->field_04D6,0,0);
      st::fn_006B3AF0(reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_04D6);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (SVar4 != MESS_CURSORCLASSTY_4201) {
      if (SVar4 == MESS_CURSORCLASSTY_0067) {
        if (DAT_0080734c == '\0') {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        /* ST_CALLSITE[005455EC]: CALL 0x00403634; direct=00403634 CursorClassTy::sub_00544990 */
        local_EAX_3132 = st::fn_00403634(this_00);
        if (local_EAX_3132 == 0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (DAT_00808784 != 0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_researchPanel_008016E8 != nullptr) &&
           (g_researchPanel_008016E8->field_0172 == CASE_1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_bldBoatPanel_0080167C != nullptr) &&
           (g_bldBoatPanel_0080167C->field_0172 == CASE_1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_bldObjPanel_00801684 != nullptr) &&
           (g_bldObjPanel_00801684->field_0172 == CASE_1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_upgPanel_00802A48 != nullptr) && (g_upgPanel_00802A48->field_0172 == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_infocPanel_00801698 != nullptr) &&
           (g_infocPanel_00801698->field_0172 == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_tradePanel_00802A44 != nullptr) &&
           (g_tradePanel_00802A44->field_0172 == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_frmPanel_0080168C != nullptr) && (g_frmPanel_0080168C->field_0172 == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_behPanel_00801678 != nullptr) && (g_behPanel_00801678->field_0172 == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_sAMPanel_008016EC != nullptr) && (g_sAMPanel_008016EC->field_0172 == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_bldLabPanel_00801680 != nullptr) &&
           (g_bldLabPanel_00801680->field_0172 == CASE_1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (g_opticClass_007FB2A0 == nullptr) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (this_00->field_00D2 == '\0') {
          /* ST_CALLSITE[00545750]: CALL 0x004017e4; direct=004017E4 OpticClassC::sub_004AB070 */
          st::fn_004017E4(g_opticClass_007FB2A0,CASE_3,0.0,0,1);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        /* ST_CALLSITE[00545733]: CALL 0x004017e4; direct=004017E4 OpticClassC::sub_004AB070 */
        st::fn_004017E4(g_opticClass_007FB2A0,CASE_1,0.0,0,1);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (SVar4 != MESS_SHARED_0068) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (DAT_0080734c == '\0') {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[0054545E]: CALL 0x00403634; direct=00403634 CursorClassTy::sub_00544990 */
      local_EAX_2734 = st::fn_00403634(this_00);
      if (local_EAX_2734 == 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_researchPanel_008016E8 != nullptr) &&
         (g_researchPanel_008016E8->field_0172 == CASE_1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_bldBoatPanel_0080167C != nullptr) &&
         (g_bldBoatPanel_0080167C->field_0172 == CASE_1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_bldObjPanel_00801684 != nullptr) &&
         (g_bldObjPanel_00801684->field_0172 == CASE_1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_upgPanel_00802A48 != nullptr) && (g_upgPanel_00802A48->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_infocPanel_00801698 != nullptr) && (g_infocPanel_00801698->field_0172 == 1)
         ) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_tradePanel_00802A44 != nullptr) && (g_tradePanel_00802A44->field_0172 == 1)
         ) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_frmPanel_0080168C != nullptr) && (g_frmPanel_0080168C->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_behPanel_00801678 != nullptr) && (g_behPanel_00801678->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_sAMPanel_008016EC != nullptr) && (g_sAMPanel_008016EC->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_bldLabPanel_00801680 != nullptr) &&
         (g_bldLabPanel_00801680->field_0172 == CASE_1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_opticClass_007FB2A0 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_00D2 == '\0') {
        /* ST_CALLSITE[005455C2]: CALL 0x004017e4; direct=004017E4 OpticClassC::sub_004AB070 */
        st::fn_004017E4(g_opticClass_007FB2A0,CASE_4,0.0,0,1);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[005455A5]: CALL 0x004017e4; direct=004017E4 OpticClassC::sub_004AB070 */
      st::fn_004017E4(g_opticClass_007FB2A0,CASE_2,0.0,0,1);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    local_c = 1.4013e-45;
    if (DAT_00807322 == 0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    UVar12 = (message->arg1).u32;
    if (UVar12 == this_00->field_04DA) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (UVar12 == 0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (this_00->field_00DE == CASE_5) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (this_00->field_00DE == CASE_2) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    this_00->field_04DA = UVar12;
    uVar32 = (message->arg0).words.high;
    if (uVar32 == 1) {
      pAVar5 = static_cast<AnonShape_005449B0_F65ED625 *>((message->arg1).ptr);
      local_8 = pAVar5;
      switch(*(undefined1 *)pAVar5) {
      case 1:
        if (pAVar5->field_0009 < 0) {
          if ((st::machine_word_boundary_cast<uint>((st_stack_frame + 1364)) != st::machine_word_boundary_cast<uint>((undefined1 *)0x524)) &&
             (pcVar12_mg13 = st::fn_006B0140(pAVar5->field_0001,g_hINSTANCE_00807618),
             pcVar12_mg13 != nullptr)) {
            UVar12 = local_8->field_0001;
LAB_005458df:
            pcVar12_mg15 = st::fn_006B0140(UVar12,g_hINSTANCE_00807618);
            uVar19 = 0xffffffff;
            do {
              pcVar24 = pcVar12_mg15;
              if (uVar19 == 0) break;
              uVar19 = uVar19 - 1;
              pcVar24 = pcVar12_mg15 + 1;
              cVar2 = *pcVar12_mg15;
              pcVar12_mg15 = pcVar24;
            } while (cVar2 != '\0');
            uVar19 = ~uVar19;
            puVar9 = reinterpret_cast<uint *>((pcVar24 + -uVar19));
            puVar25 = local_524;
            memmove(puVar25, puVar9, uVar19); /* compiler REP MOVS byte copy */
            uVar20 = 0;
          }
        }
        else {

          st::fn_0040535D(*(uint *)(&DAT_00807e66 + pAVar5->field_0009 * 4),1);
          st::fn_006B0140(pAVar5->field_0001,g_hINSTANCE_00807618);
          /* ST_CALLSITE[00545860]: CALL dword ptr [0x0085bde8] */
          st::external_00000080((LPSTR)local_524,st::mutable_c_string("&%d%s\n&%d%s"));
        }
        break;
      case 2:
        if (pAVar5->field_0001 == 0) goto switchD_00545816_default;
        if ((st::machine_word_boundary_cast<uint>((st_stack_frame + 1364)) != st::machine_word_boundary_cast<uint>((undefined1 *)0x524)) &&
           (pcVar12_mg12 = st::fn_006B0140(pAVar5->field_0001,g_hINSTANCE_00807618),
           pcVar12_mg12 != nullptr)) {
          UVar12 = local_8->field_0001;
          goto LAB_005458df;
        }
        break;
      case 3:
        if (pAVar5->field_0005 == 0) {
          pcVar12_mg11 = st::fn_006B0140(0x36b3,g_hINSTANCE_00807618);
          pcVar13_mgC = st::fn_006B0140(pAVar5->field_0001,g_hINSTANCE_00807618);
          pcVar26 = reinterpret_cast<code *>(PTR_wsprintfA_0085bde8);
          /* ST_CALLSITE[005459A4]: CALL EDI */
          st::external_00000080((LPSTR)local_524,st::mutable_c_string("&%d%s\n%s"),(message->arg0).words.low,pcVar13_mgC,
                    pcVar12_mg11);
        }
        else {
          st::fn_006B0140(0x36b3,g_hINSTANCE_00807618);
          st::fn_006B0140(pAVar5->field_0005,g_hINSTANCE_00807618);
          st::fn_006B0140(pAVar5->field_0001,g_hINSTANCE_00807618);
          pcVar26 = reinterpret_cast<code *>(PTR_wsprintfA_0085bde8);
          /* ST_CALLSITE[00545962]: CALL EDI */
          st::external_00000080((LPSTR)local_524,st::mutable_c_string("&%d%s\n%s\n%s"));
        }
        if (*(short *)&pAVar5->field_0xd != 0) {
          /* ST_CALLSITE[005459DF]: CALL EDI */
          (*pcVar26)(local_524,"%s &%d%d",(short)local_524,
                     (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 5,*(short *)&pAVar5->field_0xd
                    );
        }
        sVar8 = (short)pAVar5->field_0009;
        if (sVar8 != 0) {
          /* ST_CALLSITE[00545A08]: CALL EDI */
          (*pcVar26)((short)local_524,"%s &%d%d",local_524,2,sVar8);
        }
        sVar8 = STField<short>(pAVar5,0xB);
        if (sVar8 != 0) {
          /* ST_CALLSITE[00545A40]: CALL EDI */
          (*pcVar26)((short)local_524,"%s &%d%d",local_524,
                     (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 6,sVar8);
        }
        if (0 < *(short *)&pAVar5->field_0xf) {
          st::fn_006B0140(0x273a,g_hINSTANCE_00807618);
          /* ST_CALLSITE[00545A7D]: CALL EDI */
          (*pcVar26)();
        }
        break;
      case 4:
        pcVar12_mgB = st::fn_006B0140(pAVar5->field_0001,g_hINSTANCE_00807618);
        uVar19 = 0xffffffff;
        do {
          pcVar24 = pcVar12_mgB;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar24 = pcVar12_mgB + 1;
          cVar2 = *pcVar12_mgB;
          pcVar12_mgB = pcVar24;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        pcVar24 = pcVar24 + -uVar19;
        pcVar28 = reinterpret_cast<char *>(&DAT_0080f33a);
        memmove(pcVar28, pcVar24, uVar19); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        for (local_EAX_4371 = st::fn_0072E560(&DAT_0080f33a,'\n');
            local_EAX_4371 != nullptr;
            local_EAX_4371 = st::fn_0072E560(local_EAX_4371,'\n')) {
          *(undefined1 *)local_EAX_4371 = 0x20;
        }
        /* ST_CALLSITE[00545AFC]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)local_524,st::mutable_c_string("&%d%s"),(uint)(message->arg0).words.low,&DAT_0080f33a);
        if (local_8->field_0005 != 0) {
          pcVar12_mgD = st::fn_006B0140(local_8->field_0005,g_hINSTANCE_00807618);
          uVar19 = 0xffffffff;
          do {
            pcVar24 = pcVar12_mgD;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar24 = pcVar12_mgD + 1;
            cVar2 = *pcVar12_mgD;
            pcVar12_mgD = pcVar24;
          } while (cVar2 != '\0');
          uVar19 = ~uVar19;
          pcVar24 = pcVar24 + -uVar19;
          pcVar28 = reinterpret_cast<char *>(&DAT_0080f33a);
          memmove(pcVar28, pcVar24, uVar19); /* compiler REP MOVS byte copy */
          for (puVar13 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar13 != nullptr;
              puVar13 = st::fn_0072E560(puVar13,'\n')) {
            *(undefined1 *)puVar13 = 0x20;
          }
          /* ST_CALLSITE[00545B7B]: CALL dword ptr [0x0085bde8] */
          st::external_00000080((LPSTR)local_524,st::mutable_c_string("%s\n%s"),local_524,&DAT_0080f33a);
        }
        piVar23 = &local_8->field_0009;
        if (local_8->field_0009 != 0) {
          pcVar12_mgF = st::fn_006B0140(0x36c2,g_hINSTANCE_00807618);
          /* ST_CALLSITE[00545BB9]: CALL dword ptr [0x0085bde8] */
          st::external_00000080((LPSTR)local_524,st::mutable_c_string("%s\n%s"),local_524,pcVar12_mgF);
          iVar13 = 5;
          do {
            if (*piVar23 != CASE_0) {
              module = g_hINSTANCE_00807618;

              UVar12 = st::fn_00404B29((Global_sub_00528060_param_1Enum)*piVar23,
                                          (char)((uint)*piVar23 >> 0x10));
              pcVar12_mg10 = st::fn_006B0140(UVar12,module);
              /* ST_CALLSITE[00545C09]: CALL dword ptr [0x0085bde8] */
              st::external_00000080((LPSTR)local_524,st::mutable_c_string("%s\n&%d%s"),local_524,
                        (STField<Global_sub_00528060_param_1Enum>(piVar23,5) != CASE_0) + 1,
                        pcVar12_mg10);
            }
            piVar23 = (int *)((int)piVar23 + 6);
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        break;
      default:
switchD_00545816_default:
        local_c = 0.0;
      }
    }
    else if ((uVar32 < 2) || (3 < uVar32)) {
      local_c = 0.0;
    }
    else if ((st::machine_word_boundary_cast<uint>((st_stack_frame + 1364)) != st::machine_word_boundary_cast<uint>((undefined1 *)0x524)) &&
            (pcVar12_mg14 = st::fn_006B0140(UVar12,g_hINSTANCE_00807618),
            pcVar12_mg14 != nullptr)) {
      UVar12 = this_00->field_04DA;
      goto LAB_005458df;
    }
    if (local_c == 0.0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if ((message->arg0).words.high == 3) {
      if ((g_startSystem_0081176C == nullptr) ||
         (g_startSystem_0081176C->field_0038 == nullptr)) goto cf_common_exit_00545FF6;

      local_EAX_5241 = st::fn_00711370(g_startSystem_0081176C->field_0038,local_524);
      this_00->field_04CA = local_EAX_5241 + 0xc;

      local_EAX_5271 = st::fn_007113E0(g_startSystem_0081176C->field_0038,local_524);
      iVar13 = local_EAX_5271 + 10;
      this_00->field_04CE = iVar13;
      if ((800 < this_00->field_04CA) || (0x96 < iVar13)) goto cf_common_exit_00545FF6;
      this_00->field_04C2 = this_00->field_00C5 + this_00->field_00B1;
      iVar21 = this_00->field_00C9 + this_00->field_00B5;
      this_00->field_04C6 = iVar21;
      iVar18 = (g_nWidth_00806730 - this_00->field_04CA) + -0x28;
      if (iVar18 < this_00->field_04C2) {
        this_00->field_04C2 = iVar18;
      }
      if (this_00->field_04C2 < 0) {
        this_00->field_04C2 = 0;
      }
      iVar13 = (DAT_00806734 - iVar13) + -0x14;
      if (iVar13 < iVar21) {
        this_00->field_04C6 = iVar13;
      }
      if (this_00->field_04C6 < 0) {
        this_00->field_04C6 = 0;
      }
      pRVar6 = reinterpret_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(this_00->field_04D2);
      uVar19 = *(uint *)&pRVar6[1].field_0x4;
      if (uVar19 == 0) {
        uVar19 = ((uint)pRVar6->field_000E * *(int *)&pRVar6->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)&pRVar6->field_0x8;
      }

      puVar14 = STPointerBoundaryCast<undefined4 *>(st::fn_006B4FA0(pRVar6));
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *puVar14 = 0x22222222;
        puVar14 = puVar14 + 1;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined1 *)puVar14 = 0x22;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }

      st::fn_00710A90(reinterpret_cast<ccFntTy *>(g_startSystem_0081176C->field_0038),(int)this_00->field_04D2,0,5,5,
                       this_00->field_04CA + -10,this_00->field_04CE + -10);

      st::fn_00711B70(reinterpret_cast<ccFntTy *>(g_startSystem_0081176C->field_0038),reinterpret_cast<char *>(local_524),-2,-1,
                     (uint)(message->arg0).words.low,-1,-1);
      st::fn_006B5EE0(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_04D2),0,0,0,this_00->field_04CA,
                   this_00->field_04CE,0x18,0xd);
      st::fn_006B5EE0(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_04D2),0,1,1,
                   this_00->field_04CA + -2,this_00->field_04CE + -2,0x1d,0xd);
      bVar34 = 0x18;
    }
    else {
      if ((g_interSystem_00802A28 == nullptr) ||
         (g_interSystem_00802A28->field_0028 == nullptr)) goto cf_common_exit_00545FF6;

      local_EAX_4779 = st::fn_00711370(g_interSystem_00802A28->field_0028,local_524);
      this_00->field_04CA = local_EAX_4779 + 0xc;

      local_EAX_4809 = st::fn_007113E0(g_interSystem_00802A28->field_0028,local_524);
      iVar13 = local_EAX_4809 + 10;
      this_00->field_04CE = iVar13;
      if ((800 < this_00->field_04CA) || (0x96 < iVar13)) goto cf_common_exit_00545FF6;
      this_00->field_04C2 = this_00->field_00C5 + this_00->field_00B1;
      iVar21 = this_00->field_00C9 + this_00->field_00B5;
      this_00->field_04C6 = iVar21;
      iVar18 = (g_nWidth_00806730 - this_00->field_04CA) + -0x28;
      if (iVar18 < this_00->field_04C2) {
        this_00->field_04C2 = iVar18;
      }
      if (this_00->field_04C2 < 0) {
        this_00->field_04C2 = 0;
      }
      iVar13 = (DAT_00806734 - iVar13) + -0x14;
      if (iVar13 < iVar21) {
        this_00->field_04C6 = iVar13;
      }
      if (this_00->field_04C6 < 0) {
        this_00->field_04C6 = 0;
      }
      pRVar6 = reinterpret_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(this_00->field_04D2);
      uVar19 = *(uint *)&pRVar6[1].field_0x4;
      if (uVar19 == 0) {
        uVar19 = ((uint)pRVar6->field_000E * *(int *)&pRVar6->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)&pRVar6->field_0x8;
      }

      puVar14 = STPointerBoundaryCast<undefined4 *>(st::fn_006B4FA0(pRVar6));
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *puVar14 = 0x3a3a3a3a;
        puVar14 = puVar14 + 1;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined1 *)puVar14 = 0x3a;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }

      st::fn_00710A90(reinterpret_cast<ccFntTy *>(g_interSystem_00802A28->field_0028),(int)this_00->field_04D2,0,5,5,
                       this_00->field_04CA + -10,this_00->field_04CE + -10);

      st::fn_00711B70(reinterpret_cast<ccFntTy *>(g_interSystem_00802A28->field_0028),reinterpret_cast<char *>(local_524),-2,-1,
                     (uint)(message->arg0).words.low,-1,-1);
      st::fn_006B5EE0(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_04D2),0,0,0,this_00->field_04CA,
                   this_00->field_04CE,0x6f,0xd);
      st::fn_006B5EE0(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_04D2),0,1,1,
                   this_00->field_04CA + -2,this_00->field_04CE + -2,0xb3,0xd);
      bVar34 = 0x6f;
    }
    st::fn_006B5EE0(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_04D2),0,3,3,this_00->field_04CA + -6
                 ,this_00->field_04CE + -6,bVar34,0xd);
cf_common_exit_00545FF6:
    if (800 < this_00->field_04CA) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (0x96 < this_00->field_04CE) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    st::fn_006B2800(g_ddxContext_008075A8,this_00->field_04D6,this_00->field_04CA,this_00->field_04CE);

    st::fn_006B3640
              (reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_04D6,0xffffffff,this_00->field_04C2,
               this_00->field_04C6);

    st::fn_006B3430(reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_04D6);
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (MESS_CURSORCLASSTY_A50C < SVar4) {
    if (MESS_CURSORCLASSTY_A708 < SVar4) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (0xa6fe < SVar4) {
      local_60 = SVar4 - MESS_CURSORCLASSTY_A6FF;
      puVar9 = &local_64;
      local_5c = 0;
      local_64 = 9;
LAB_00547c2d:
      /* ST_CALLSITE[00547C35]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
      st::fn_00403C33(g_playSystem_00802A38,(undefined4 *)0x5,puVar9,1,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    uVar22 = (undefined3)((uint)this_00 >> 8);
    uVar15 = (undefined2)(SVar4 + ~MESS_CURSORCLASSTY_A50C >> 0x10);
    switch(SVar4 + ~MESS_CURSORCLASSTY_A50C) {
    case MESS_ID_NONE:
      /* ST_CALLSITE[00547234]: CALL 0x00403a67; direct=00403A67 CursorClassTy::GCGameState */
      st::fn_00403A67(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) &&
         (g_helpPanel_00801690->field_0172 != CASE_2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_00C5 < this_00->field_04B2) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BA + this_00->field_04B2 <= this_00->field_00C5) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_00C9 < this_00->field_04B6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + this_00->field_04B6 <= this_00->field_00C9) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != CASE_3)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A != nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar13 = 0;
      break;
    case 1:
      /* ST_CALLSITE[00547309]: CALL 0x00403a67; direct=00403A67 CursorClassTy::GCGameState */
      st::fn_00403A67(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) &&
         (g_helpPanel_00801690->field_0172 != CASE_2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar13 = this_00->field_00C5;
      iVar18 = this_00->field_04B2;
      if (iVar13 < iVar18) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BA + iVar18 <= iVar13) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar21 = this_00->field_00C9;
      iVar10 = this_00->field_04B6;
      if (iVar21 < iVar10) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar10 <= iVar21) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != CASE_3)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A != nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[005473F1]: CALL 0x00404647; direct=00404647 STAllPlayersC::PointPick */
      st::fn_00404647
                (g_allPlayers_007FA174,(DArrayTy *)STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(iVar18)), (uint8_t)(DAT_0080874d)),
                 iVar13 - iVar18,iVar21 - iVar10,0);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_ID_CREATE:
      /* ST_CALLSITE[00547410]: CALL 0x00403a67; direct=00403A67 CursorClassTy::GCGameState */
      st::fn_00403A67(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) &&
         (g_helpPanel_00801690->field_0172 != CASE_2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_00C5 < this_00->field_04B2) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BA + this_00->field_04B2 <= this_00->field_00C5) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_00C9 < this_00->field_04B6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + this_00->field_04B6 <= this_00->field_00C9) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != CASE_3)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 != (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar13 = 0;
      break;
    case MESS_SHARED_0003:
      /* ST_CALLSITE[005474F8]: CALL 0x00403a67; direct=00403A67 CursorClassTy::GCGameState */
      st::fn_00403A67(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) &&
         (g_helpPanel_00801690->field_0172 != CASE_2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar13 = this_00->field_00C5;
      local_8 = (AnonShape_005449B0_F65ED625 *)this_00->field_04B2;
      if (iVar13 < (int)local_8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)(&local_8->field_0x0 + this_00->field_04BA) <= iVar13) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar18 = this_00->field_00C9;
      iVar21 = this_00->field_04B6;
      if (iVar18 < iVar21) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar21 <= iVar18) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != CASE_3)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 != (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[005475F3]: CALL 0x00404647; direct=00404647 STAllPlayersC::PointPick */
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      st::fn_00404647
                (g_allPlayers_007FA174,(DArrayTy *)CONCAT31(uVar22,DAT_0080874d),
                 iVar13 - (int)local_8,iVar18 - iVar21,0);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 4:
      /* ST_CALLSITE[00547612]: CALL 0x00403a67; direct=00403A67 CursorClassTy::GCGameState */
      st::fn_00403A67(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) &&
         (g_helpPanel_00801690->field_0172 != CASE_2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar13 = this_00->field_00C5;
      local_8 = (AnonShape_005449B0_F65ED625 *)this_00->field_04B2;
      if (iVar13 < (int)local_8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)(&local_8->field_0x0 + this_00->field_04BA) <= iVar13) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar18 = this_00->field_00C9;
      iVar21 = this_00->field_04B6;
      if (iVar18 < iVar21) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar21 <= iVar18) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != CASE_3)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 != (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[0054770D]: CALL 0x00404647; direct=00404647 STAllPlayersC::PointPick */
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      st::fn_00404647
                (g_allPlayers_007FA174,(DArrayTy *)CONCAT31(uVar22,DAT_0080874d),
                 iVar13 - (int)local_8,iVar18 - iVar21,1);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_SHARED_0005:
      /* ST_CALLSITE[0054772C]: CALL 0x00403a67; direct=00403A67 CursorClassTy::GCGameState */
      st::fn_00403A67(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) &&
         (g_helpPanel_00801690->field_0172 != CASE_2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar13 = this_00->field_00C5;
      iVar18 = this_00->field_04B2;
      if (iVar13 < iVar18) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BA + iVar18 <= iVar13) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar21 = this_00->field_00C9;
      iVar10 = this_00->field_04B6;
      if (iVar21 < iVar10) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar10 <= iVar21) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != CASE_3)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 != (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[0054781E]: CALL 0x00402e91; direct=00402E91 STAllPlayersC::SelectObjects */
      st::fn_00402E91(g_allPlayers_007FA174,CASE_7,iVar13 - iVar18,iVar21 - iVar10);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 6:
      /* ST_CALLSITE[0054783D]: CALL 0x00403a67; direct=00403A67 CursorClassTy::GCGameState */
      st::fn_00403A67(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) &&
         (g_helpPanel_00801690->field_0172 != CASE_2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar13 = this_00->field_00C5;
      iVar18 = this_00->field_04B2;
      if (iVar13 < iVar18) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BA + iVar18 <= iVar13) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar21 = this_00->field_00C9;
      iVar10 = this_00->field_04B6;
      if (iVar21 < iVar10) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar10 <= iVar21) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != CASE_3)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 != (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[0054792F]: CALL 0x00402e91; direct=00402E91 STAllPlayersC::SelectObjects */
      st::fn_00402E91(g_allPlayers_007FA174,CASE_6,iVar13 - iVar18,iVar21 - iVar10);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 7:
      /* ST_CALLSITE[0054794E]: CALL 0x00403a67; direct=00403A67 CursorClassTy::GCGameState */
      st::fn_00403A67(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) &&
         (g_helpPanel_00801690->field_0172 != CASE_2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_00C5 < this_00->field_04B2) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BA + this_00->field_04B2 <= this_00->field_00C5) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_00C9 < this_00->field_04B6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + this_00->field_04B6 <= this_00->field_00C9) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != CASE_3)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 == (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar13 = 0;
      break;
    case MESS_SHARED_0008:
      /* ST_CALLSITE[00547A36]: CALL 0x00403a67; direct=00403A67 CursorClassTy::GCGameState */
      st::fn_00403A67(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) &&
         (g_helpPanel_00801690->field_0172 != CASE_2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar13 = this_00->field_00C5;
      local_8 = (AnonShape_005449B0_F65ED625 *)this_00->field_04B2;
      if (iVar13 < (int)local_8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)(&local_8->field_0x0 + this_00->field_04BA) <= iVar13) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar18 = this_00->field_00C9;
      iVar21 = this_00->field_04B6;
      if (iVar18 < iVar21) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar21 <= iVar18) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != CASE_3)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 == (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[00547B29]: CALL 0x00404647; direct=00404647 STAllPlayersC::PointPick */
      st::fn_00404647
                (g_allPlayers_007FA174,(DArrayTy *)(uint)DAT_0080874d,iVar13 - (int)local_8,
                 iVar18 - iVar21,0);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_CURSORCLASSTY_0009:
      if (DAT_0080734c == '\0') {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      this_00->field_00D2 = this_00->field_00D2 == '\0';
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_SYSTEMCLASSTY_000A:
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[00547B96]: CALL 0x004051cd; direct=004051CD CPanelTy::sub_004FAD60 */
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      st::fn_004051CD
                (g_cPanel_00801688,(uint *)CONCAT22(uVar15,(short)this_00->field_00C5),
                 (uint)(ushort)this_00->field_00C9);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 0xb:
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      st::fn_00401BC7(reinterpret_cast<RecoveredRecord_004FAE70_42EA0A49 *>(g_cPanel_00801688));
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 0xc:
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[00547BF0]: CALL 0x004054f2; direct=004054F2 CPanelTy::sub_004FAE90 */
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      st::fn_004054F2
                (g_cPanel_00801688,(uint *)CONCAT22(uVar15,(short)this_00->field_00C5),
                 (ushort)this_00->field_00C9);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_SHARED_0008|MESS_SHARED_0005:
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[00547215]: CALL 0x00402e91; direct=00402E91 STAllPlayersC::SelectObjects */
      st::fn_00402E91(g_allPlayers_007FA174,CASE_4,0xffffffff,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    default:
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    goto LAB_005470b2;
  }
  if (SVar4 == MESS_CURSORCLASSTY_A50C) {
    if (g_allPlayers_007FA174 == nullptr) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    /* ST_CALLSITE[005471BB]: CALL 0x00402e91; direct=00402E91 STAllPlayersC::SelectObjects */
    st::fn_00402E91(g_allPlayers_007FA174,CASE_5,0xffffffff,0xffffffff);
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (MESS_CURSORCLASSTY_A504 < SVar4) {
    switch(SVar4) {
    case 0xa505:
    case MESS_CURSORCLASSTY_A507:
      goto switchD_00546ac9_caseD_a505;
    case MESS_CURSORCLASSTY_A504|MESS_ID_CREATE:
      goto switchD_00546ac9_caseD_a506;
    case MESS_CURSORCLASSTY_A500|MESS_SHARED_0008:
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[00547100]: CALL 0x00402e91; direct=00402E91 STAllPlayersC::SelectObjects */
      st::fn_00402E91(g_allPlayers_007FA174,CASE_0,0xffffffff,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_CURSORCLASSTY_A500|MESS_CURSORCLASSTY_0009:
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[0054712E]: CALL 0x00402e91; direct=00402E91 STAllPlayersC::SelectObjects */
      st::fn_00402E91(g_allPlayers_007FA174,CASE_2,0xffffffff,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_CURSORCLASSTY_A500|MESS_SYSTEMCLASSTY_000A:
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[0054715D]: CALL 0x00402e91; direct=00402E91 STAllPlayersC::SelectObjects */
      st::fn_00402E91(g_allPlayers_007FA174,CASE_1,0xffffffff,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 0xa50b:
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[0054718C]: CALL 0x00402e91; direct=00402E91 STAllPlayersC::SelectObjects */
      st::fn_00402E91(g_allPlayers_007FA174,CASE_3,0xffffffff,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    default:
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
  }
  if (SVar4 == MESS_CURSORCLASSTY_A504) {
switchD_00546ac9_caseD_a506:
    /* ST_CALLSITE[00546AD4]: CALL 0x00403a67; direct=00403A67 CursorClassTy::GCGameState */
    st::fn_00403A67(this_00,1);
    if (DAT_00808784 != 0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if ((g_helpPanel_00801690 != nullptr) && (g_helpPanel_00801690->field_0172 != CASE_2)
       ) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (this_00->field_00C5 < this_00->field_04B2) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (this_00->field_04BA + this_00->field_04B2 <= this_00->field_00C5) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (this_00->field_00C9 < this_00->field_04B6) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (this_00->field_04BE + this_00->field_04B6 <= this_00->field_00C9) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (message->id != MESS_CURSORCLASSTY_A501) {
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A != nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      this_00->field_00DE = CASE_1;
      this_00->field_00DF = this_00->field_00C5 - this_00->field_04B2;
      iVar13 = this_00->field_00C9 - this_00->field_04B6;
      this_00->field_00E3 = iVar13;

      st::fn_006E1C20
                (g_sT3DSMAPContext_00807598,(float)this_00->field_00DF,iVar13,0.0,
                 reinterpret_cast<float *>(&this_00->field_00EF),reinterpret_cast<float *>(&this_00->field_00F3));
      this_00->field_010F = local_1c;
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }

    iVar13 = st::fn_00402BFD(reinterpret_cast<RecoveredRecord_00548B90_C039E281 *>(this_00));
    if (iVar13 != 0) {
      this_00->field_00DE = CASE_1;
      this_00->field_00DF = this_00->field_00C5 - this_00->field_04B2;
      iVar13 = this_00->field_00C9 - this_00->field_04B6;
      this_00->field_00E3 = iVar13;

      st::fn_006E1C20
                (g_sT3DSMAPContext_00807598,(float)this_00->field_00DF,iVar13,0.0,
                 reinterpret_cast<float *>(&this_00->field_00EF),reinterpret_cast<float *>(&this_00->field_00F3));
      this_00->field_010F = local_1c;
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (this_00->field_04A2 != CASE_4E) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (g_sT3DSMAPContext_00807598 == nullptr) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }

    iVar13 = st::fn_006E1DD0
                       (g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                        this_00->field_00C9 - this_00->field_04B6,&this_00->field_00FF,
                        &this_00->field_0103,&this_00->field_0107);
    if (iVar13 == 0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    piVar23 = &this_00->field_010B;
    this_00->field_00DE = CASE_5;
    if ((-1 < this_00->field_010B) && (g_sT3DSMAPContext_00807598 != nullptr)) {
      st::fn_006E8BA0(g_sT3DSMAPContext_00807598,this_00->field_010B);
    }

    st::fn_006E89B0(g_sT3DSMAPContext_00807598,piVar23,st::machine_word_boundary_cast<undefined4>(&DAT_007c7cd8),8,2,0x45,this_00->field_00FF,
                 this_00->field_0103,this_00->field_0107,0,1,1);

    st::fn_006EAAA0(g_sT3DSMAPContext_00807598,*piVar23,0);
    st::fn_006EA460(g_sT3DSMAPContext_00807598,*piVar23,-1);
    if (this_00->field_00A9 != 0) {
      if (this_00->field_001C == 0xffffffff) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      st::fn_006B3AF0(reinterpret_cast<int *>(this_00->field_0060),this_00->field_001C);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }

    st::fn_006B8B10((int *)this_00->field_00AD);
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (SVar4 < MESS_CURSORCLASSTY_A501) {
    if (SVar4 == MESS_CURSORCLASSTY_A500) {
      this_00->field_04AE = 0;
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (MESS_CURSORCLASSTY_A330 < SVar4) {
      if (SVar4 != MESS_CURSORCLASSTY_A4FF) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      this_00->field_04AE = 1;
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (SVar4 == MESS_CURSORCLASSTY_A330) {
      if (g_playSystem_00802A38 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      st::fn_00402AC2((int)g_playSystem_00802A38);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (SVar4 < MESS_CURSORCLASSTY_A31D) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (SVar4 < 0xa327) {
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_CALLSITE[005469DD]: CALL 0x004057f4; direct=004057F4 STAllPlayersC::RestoreTmp */
      st::fn_004057F4(g_allPlayers_007FA174,SVar4 - MESS_CURSORCLASSTY_A31D);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (SVar4 != MESS_CURSORCLASSTY_A32F) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (g_popUp_008016D8 == nullptr) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    /* ST_CALLSITE[005469AE]: CALL 0x004040f7; direct=004040F7 PopUpTy::Clear */
    st::fn_004040F7(g_popUp_008016D8);
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (SVar4 == MESS_CURSORCLASSTY_A501) goto switchD_00546ac9_caseD_a506;
  if (SVar4 != MESS_CURSORCLASSTY_A502) {
    if (SVar4 != MESS_CURSORCLASSTY_A503) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    this_00->field_04A6 = 1;
    this_00->field_04DE = 0;
    if (g_cPanel_00801688 == nullptr) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    /* ST_CALLSITE[00546A9F]: CALL 0x00402798; direct=00402798 CPanelTy::sub_004FAD20 */
    st::fn_00402798(g_cPanel_00801688);
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
switchD_00546ac9_caseD_a505:
  if ((this_00->field_04B2 <= this_00->field_00C5) &&
     (this_00->field_00C5 < this_00->field_04BA + this_00->field_04B2)) {
    if ((this_00->field_04B6 <= this_00->field_00C9) &&
       (this_00->field_00C9 < this_00->field_04BE + this_00->field_04B6)) {
      switch(this_00->field_00DE) {
      case CASE_1:
        this_00->field_00DE = CASE_3;
      case CASE_0:
        if (message->id != MESS_CURSORCLASSTY_A502) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (DAT_00808784 != 0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_helpPanel_00801690 != nullptr) &&
           (g_helpPanel_00801690->field_0172 != CASE_2)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((this_00->field_04A2 == 0) && (this_00->field_04DE == '\0')) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        /* ST_CALLSITE[00546E8E]: CALL 0x00402c20; direct=00402C20 CursorClassTy::TakeCmdToRun */
        st::fn_00402C20(this_00,0);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case CASE_2:
        if (DAT_00808784 != 0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_helpPanel_00801690 != nullptr) &&
           (g_helpPanel_00801690->field_0172 != CASE_2)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (SVar4 != MESS_CURSORCLASSTY_A502) {
          if (this_00->field_04A2 == 0) {
            /* ST_CALLSITE[00546F77]: CALL 0x00404d40; direct=00404D40 STAllPlayersC::FramePick */
            st::fn_00404D40
                      (g_allPlayers_007FA174,
                       STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(this_00->field_00E7)), (uint8_t)(DAT_0080874d)),
                       this_00->field_00DF,this_00->field_00E3,this_00->field_00E7,
                       this_00->field_00EB,(uint)(SVar4 == MESS_CURSORCLASSTY_A507));
          }
          this_00->field_00DE = CASE_4;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (this_00->field_04A2 == 0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        /* ST_CALLSITE[00546F17]: CALL 0x00402c20; direct=00402C20 CursorClassTy::TakeCmdToRun */
        st::fn_00402C20(this_00,1);
        goto LAB_00546f1c;
      default:
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case CASE_5:
        goto switchD_00546e07_caseD_5;
      }
    }
  }
  CVar3 = this_00->field_00DE;
  if (CVar3 == CASE_1) {
    this_00->field_00DE = CASE_3;
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (CVar3 == CASE_2) {
LAB_00546f1c:
    this_00->field_00DE = CASE_4;
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (CVar3 != CASE_5) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (SVar4 != MESS_CURSORCLASSTY_A502) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (this_00->field_00A9 == 0) {

    st::fn_006B8A60((byte *)this_00->field_00AD);
  }
  else if (this_00->field_001C != 0xffffffff) {

    st::fn_006B34D0
              (reinterpret_cast<uint *>(this_00->field_0060),this_00->field_001C,0xfffffffe,this_00->field_0034,
               this_00->field_0038);
  }
  /* ST_CALLSITE[00547075]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
  st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
  if (g_sT3DSMAPContext_00807598 != nullptr) {
    uVar19 = this_00->field_010B;
LAB_0054708b:
    st::fn_006E8BA0(g_sT3DSMAPContext_00807598,uVar19);
  }
LAB_00547090:
  this_00->field_00DE = CASE_0;
  this_00->field_010B = -1;
  if (this_00->field_04A2 != CASE_4E) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  iVar13 = 1;
LAB_005470b2:
  /* ST_CALLSITE[005470B4]: CALL 0x00402c20; direct=00402C20 CursorClassTy::TakeCmdToRun */
  st::fn_00402C20(this_00,iVar13);
  g_currentExceptionFrame = local_e0.previous;
  return 0;
switchD_00546e07_caseD_5:
  if (SVar4 != MESS_CURSORCLASSTY_A502) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (this_00->field_00A9 == 0) {

    st::fn_006B8A60((byte *)this_00->field_00AD);
  }
  else if (this_00->field_001C != 0xffffffff) {

    st::fn_006B34D0
              (reinterpret_cast<uint *>(this_00->field_0060),this_00->field_001C,0xfffffffe,this_00->field_0034,
               this_00->field_0038);
  }
  /* ST_CALLSITE[00546FE8]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
  st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
  if (g_sT3DSMAPContext_00807598 != nullptr) {
    uVar19 = this_00->field_010B;
    goto LAB_0054708b;
  }
  goto LAB_00547090;
switchD_005468af_caseD_a2ff:
  if (g_opticClass_007FB2A0 == nullptr) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  st::fn_004026AD(SVar4 - 0xa2ff);
  g_currentExceptionFrame = local_e0.previous;
  return 0;
switchD_00546590_caseD_a125:
  if (DAT_00808783 != '\x03') {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  /* ST_CALLSITE[00546667]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
  st::fn_00403058(this_00);
  if (g_intercomPanel_0080169C == nullptr) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  /* ST_CALLSITE[0054667C]: CALL 0x00401dcf; direct=00401DCF IntercomPanelTy::SwitchIntercomPanel */
  st::fn_00401DCF(g_intercomPanel_0080169C,1);
  g_currentExceptionFrame = local_e0.previous;
  return 0;
}

// 00548C40 CursorClassTy::TakeCmdToRun
#line 4 "decomp/ST.exe/functions/00548C40/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::TakeCmdToRun

   [STSwitchEnumApplier] Switch target field_04A2 uses
   /SubmarineTitans/Recovered/Enums/CursorClassTy_field_04A2State. Cases:
   CASE_3=3;CASE_5=5;CASE_A=10;CASE_E=14;CASE_2B=43;CASE_2C=44;CASE_4E=78

   [STSwitchEnumApplier] Switch target field_0494 uses
   /SubmarineTitans/Recovered/Enums/CursorClassTy_field_0494State. Cases:
   CASE_C=12;CASE_F=15;CASE_18=24;CASE_48=72;CASE_58=88 */

void __thiscall st::fn_00548C40(CursorClassTy *this,int param_1)

{
  alignas(4) byte st_stack_frame[724];

  uint32_t _local_78;
  uint32_t _local_80;

  float float_local_20_1;
  float float_local_1c_2;
  float float_local_14_3;
  float float_local_14_4;
  float float_local_14_5;
  float float_local_14_6;
  float float_local_14_7;
  float float_local_14_8;
  float float_local_14_9;
  float float_local_14_10;
  float float_local_14_11;
  CursorClassTy_field_0494State CVar1;
  STFishC *pSVar2;
  uint uVar3;
  CursorClassTy *this_00;
  int iVar5;
  HelpPanelTy_sub_00514BC0_param_1Enum HVar5;
  int iVar7;
  int iVar6;
  uint uVar8;
  STPlaySystemC *this_01;
  ushort *puVar9;
  uint *puVar10;
  byte *puVar11;
  uint *puVar12;
  longlong lVar13;
  byte *puVar14;
  InternalExceptionFrame local_2c8;
  uint local_284 [7];
  uint local_267;
  byte local_260 [5];
  int local_25b;
  int local_257;
  byte local_23c [5];
  int local_237;
  int local_233;
  int local_218;
  int local_214;
  byte local_208;
  uint local_207;
  uint local_203;
  int local_1ff;
  byte local_1e4 [5];
  int local_1df;
  int local_1db;
  uint local_1c7;
  byte local_1c0 [5];
  int local_1bb;
  int local_1b7;
  uint local_1a3;
  char local_19c;
  uint local_19b;
  uint local_197;
  int local_193;
  byte local_178 [5];
  byte local_173;
  byte local_172;
  byte local_171;
  byte local_160 [5];
  byte local_15b;
  byte local_15a;
  byte local_159;
  float local_148;
  uint local_144;
  int local_140;
  uint local_13c;
  uint local_138;
  int local_134;
  uint local_130;
  uint local_12c;
  int local_128;
  CursorClassTy *local_124;
  byte local_120 [5];
  byte local_11b;
  byte local_11a;
  byte local_119;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  byte local_f8;
  undefined1 uStack_f7;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  byte local_e4;
  undefined1 uStack_e3;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  char local_d4;
  char local_d0;
  short local_cf;
  short local_cd;
  short local_cb;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint *local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  byte local_84;
  byte local_80;
  undefined3 uStack_7f;
  byte local_7c;
  short local_7a;
  byte local_78;
  undefined3 uStack_77;
  byte local_74;
  short local_70;
  short local_6e;
  byte local_6c [2];
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  short local_60;
  byte local_5e [2];
  short local_5c;
  short local_5a;
  short local_58;
  short local_56;
  undefined4 *local_54;
  short local_4e;
  ushort *local_4c;
  byte local_46 [2];
  ushort *local_44;
  byte local_3e [2];
  ushort *local_3c;
  short local_38;
  short local_36;
  short local_34;
  byte local_32 [2];
  byte local_30 [2];
  short local_2e;
  byte local_2c;
  short sStack_2b;
  undefined1 uStack_29;
  undefined1 uStack_28;
  undefined1 uStack_27;
  byte local_26;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  float local_10;
  float local_c;
  float local_8;

  local_2c8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_2c8;
  local_124 = this;

  iVar5 = st::fn_0072D7F0(local_2c8.jumpBuffer,0);
  this_00 = local_124;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_2c8.previous;

    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x671,0,iVar5,
                               st::mutable_c_string("%s"),"CursorClassTy::TakeCmdToRun");
    if (iVar6 == 0) {
      st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x672);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (g_sT3DSMAPContext_00807598 != nullptr) {
    local_148 = (float)local_124->field_00EF;
    local_144 = local_124->field_00F3;
    local_140 = iVar5;

    st::fn_006E25D0(g_sT3DSMAPContext_00807598,&local_218,&local_148,0.0,0.0,0.0,0);
    this_00->field_00DF = local_218 >> 0x10;
    this_00->field_00E7 = (this_00->field_00C5 - this_00->field_04B2) - (local_218 >> 0x10);
    this_00->field_00E3 = local_214 >> 0x10;
    this_00->field_00EB = (this_00->field_00C9 - this_00->field_04B6) - (local_214 >> 0x10);
  }
  this_01 = g_playSystem_00802A38;
  if (g_playSystem_00802A38 == nullptr) {
    g_currentExceptionFrame = local_2c8.previous;
    return;
  }
  if (this_00->field_04DE != '\0') {
    if (((this_00->field_0494 == CASE_48) &&
        (pSVar2 = this_00->field_049A, pSVar2 != nullptr)) &&
       (g_helpPanel_00801690 != nullptr)) {
      /* ST_CALLSITE[00548D67]: CALL dword ptr [EDX + 0x2c] */
      HVar5 = pSVar2->vfunc_2C();
      if (HVar5 == 0x78) {
        HVar5 = *(HelpPanelTy_sub_00514BC0_param_1Enum *)&this_00->field_049A->field_0x259;
      }
      /* ST_CALLSITE[00548D81]: CALL dword ptr [EDX + 0xc] */
      iVar7 = pSVar2->vfunc_0C();
      /* ST_CALLSITE[00548D8C]: CALL 0x00404d1d; direct=00404D1D HelpPanelTy::sub_00514BC0 */
      st::fn_00404D1D(g_helpPanel_00801690,HVar5,iVar7);
      this_00->field_04DE = 0;
    }
    goto switchD_00548db5_caseD_3;
  }
  CVar1 = this_00->field_0494;
  switch(CVar1) {
  case 1:
    switch(this_00->field_04A2) {
    case CASE_3:
    case CASE_A:
    case CASE_2B:
      if (param_1 != 0) {
        local_4c = nullptr;
        if (g_allPlayers_007FA174 != nullptr) {
          /* ST_CALLSITE[00549E84]: CALL 0x004010ff; direct=004010FF STAllPlayersC::GetScrObjList */
          local_4c = st::fn_004010FF
                               (g_allPlayers_007FA174,(this_00->field_04A2 == CASE_A) + 1,
                                this_00->field_00DF,this_00->field_00E3,this_00->field_00E7,
                                this_00->field_00EB,reinterpret_cast<int *>(&local_9c));
        }
        if (local_4c != nullptr) {
          local_18 = (uint *)(local_9c + 1);

          local_94 = static_cast<uint *>(st::fn_006AAC10((uint)local_18));
          if (local_94 != nullptr) {
            *(char *)local_94 = (this_00->field_04A2 == CASE_A) + '\x01';
            puVar9 = local_4c;
            puVar14 = (byte *)((int)local_94 + 1);
            for (uVar8 = local_9c >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar14 = *(undefined4 *)puVar9;
              puVar9 = puVar9 + 2;
              puVar14 = reinterpret_cast<byte *>((puVar14 + 1));
            }
            for (local_9c = local_9c & 3; local_9c != 0; local_9c = local_9c - 1) {
              *(char *)puVar14 = (char)*puVar9;
              puVar9 = (ushort *)((int)puVar9 + 1);
              puVar14 = (byte *)((int)puVar14 + 1);
            }
            /* ST_CALLSITE[00549EEA]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
            st::fn_00403C33
                      (g_playSystem_00802A38,(undefined4 *)0x31,local_94,0,(uint)local_18);
            st::fn_006AB060(&local_94);
          }
          st::fn_006AB060(&local_4c);
        }
      }
      break;
    case CASE_5:
      if (param_1 != 0) {
        local_1c = nullptr;
        if (g_allPlayers_007FA174 != nullptr) {
          /* ST_CALLSITE[00549FF7]: CALL 0x004010ff; direct=004010FF STAllPlayersC::GetScrObjList */
          local_1c = reinterpret_cast<uint *>(st::fn_004010FF
                                       (g_allPlayers_007FA174,3,this_00->field_00DF,
                                        this_00->field_00E3,this_00->field_00E7,this_00->field_00EB,
                                        reinterpret_cast<int *>(&local_a8)));
        }
        if (local_1c != nullptr) {
          local_24 = (uint *)(local_a8 + 1);

          local_18 = static_cast<uint *>(st::fn_006AAC10((uint)local_24));
          if (local_18 != nullptr) {
            *(undefined1 *)local_18 = 3;
            puVar10 = local_1c;
            puVar12 = (uint *)((int)local_18 + 1);
            memmove(puVar12, puVar10, local_a8); /* compiler REP MOVS byte copy */
            uVar8 = 0;
            /* ST_CALLSITE[0054A04D]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
            st::fn_00403C33
                      (g_playSystem_00802A38,(undefined4 *)0x31,local_18,0,(uint)local_24);
            st::fn_006AB060(&local_18);
          }
          st::fn_006AB060(&local_1c);
        }
        break;
      }
      pSVar2 = this_00->field_049A;
      if (pSVar2 == nullptr) break;
      memset((void *)local_1e4, 0, 0x21); /* compiler bulk-zero initialization */
      /* ST_CALLSITE[0054A095]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
      st::fn_004018C5(pSVar2,&local_56,&local_68,&local_2e);
      STPiece<1,4>(local_1e4) = SEXT24(local_56);
      local_1db = (int)local_2e;
      local_1df = (int)local_68;
      local_1e4[0] = 1;
      local_1c7 = this_00->field_049A->field_0018;
      puVar10 = reinterpret_cast<uint *>(local_1e4);
      puVar14 = (byte *)0x17;
      this_01 = g_playSystem_00802A38;
      goto cf_common_join_0054A19A;
    case CASE_E:
      if (g_tLOBldMark_007FB2AC != nullptr) {
        local_b8 = this_00->field_04AA;
        local_b4 = 0;
        local_b0 = 0;
        local_ac = 0;
        if (g_tLOBldMark_007FB2AC->field_0024 != 0) {
          if (st::machine_word_boundary_cast<uint>((st_stack_frame + 720)) != st::machine_word_boundary_cast<uint>((undefined1 *)0xb4)) {
            local_b4 = g_tLOBldMark_007FB2AC->field_0030;
          }
          if (st::machine_word_boundary_cast<uint>((st_stack_frame + 720)) != st::machine_word_boundary_cast<uint>((undefined1 *)0xb0)) {
            local_b0 = g_tLOBldMark_007FB2AC->field_0034;
          }
          if (st::machine_word_boundary_cast<uint>((st_stack_frame + 720)) != st::machine_word_boundary_cast<uint>((undefined1 *)0xac)) {
            local_ac = g_tLOBldMark_007FB2AC->field_0038;
          }
          if (g_tLOBldMark_007FB2AC->field_0024 != 0) {
            /* ST_CALLSITE[00549DAF]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
            st::fn_00403C33
                      (g_playSystem_00802A38,(undefined4 *)0x23,&local_b8,0,0xffffffff);

            iVar7 = st::fn_006E1DD0
                              (g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                               this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                               &local_8);
            if (iVar7 != 0) {
              if (_DAT_0079034c <= local_8) {
                float_local_14_3 = local_8; /* split floating lifetime from pointer-typed SSA storage */
                st::fn_00405E7F(reinterpret_cast<RecoveredReceiver_0054A9B0 *>(this_00),local_10,local_c,
                                   local_8);
              }
              else {
                float_local_14_3 = 0.0f; /* split floating lifetime from pointer-typed SSA storage */
                st::fn_00405E7F(reinterpret_cast<RecoveredReceiver_0054A9B0 *>(this_00),local_10,local_c,0.0);
              }
            }
          }
        }
      }
      break;
    case CASE_2C:
      if (param_1 != 0) {
        local_54 = nullptr;
        if (g_allPlayers_007FA174 != nullptr) {
          local_54 = (undefined4 *)st::fn_00405222();
        }
        if (local_54 != nullptr) {
          local_18 = (uint *)(local_a4 + 1);

          local_24 = static_cast<uint *>(st::fn_006AAC10((uint)local_18));
          if (local_24 != nullptr) {
            *(undefined1 *)local_24 = 4;
            puVar14 = reinterpret_cast<byte *>((local_54));
            puVar11 = (byte *)((int)local_24 + 1);
            memmove(puVar11, puVar14, local_a4); /* compiler REP MOVS byte copy */
            uVar8 = 0;
            /* ST_CALLSITE[00549F9C]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
            st::fn_00403C33
                      (g_playSystem_00802A38,(undefined4 *)0x31,local_24,0,(uint)local_18);
            st::fn_006AB060(&local_24);
          }
          st::fn_006AB060(&local_54);
        }
      }
      break;
    case CASE_4E:
      local_f4 = (uint)(byte)this_00->field_04AA;
      local_f0 = 0;
      local_ec = 0;
      local_e8 = 0;
      local_e4 = 0;
      uStack_e3 = 0;
      lVar13 = st::fn_0072E288();
      STPiece<1,3>(local_f4) = (undefined3)lVar13;
      STPiece<0,1>(local_f0) = (undefined1)((ulonglong)lVar13 >> 0x18);
      lVar13 = st::fn_0072E288();
      STPiece<1,3>(local_f0) = (undefined3)lVar13;
      STPiece<0,1>(local_ec) = (undefined1)((ulonglong)lVar13 >> 0x18);
      lVar13 = st::fn_0072E288();
      uStack_e3 = *(undefined1 *)&this_00->field_00FB;
      STPiece<1,3>(local_ec) = (undefined3)lVar13;
      puVar10 = &local_f4;
      STPiece<1,3>(local_e8) = (undefined3)this_00->field_00F7;
      local_e8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_e8)), (uint8_t)((char)((ulonglong)lVar13 >> 0x18)));
      local_e4 = (undefined1)((uint)this_00->field_00F7 >> 0x18);
      goto LAB_0054a196;
    }
    break;
  case 2:
  case 7:
  case CASE_C:
    if (param_1 != 0) {
      local_3c = nullptr;
      if (g_allPlayers_007FA174 != nullptr) {
        /* ST_CALLSITE[00548EF8]: CALL 0x004010ff; direct=004010FF STAllPlayersC::GetScrObjList */
        local_3c = st::fn_004010FF
                             (g_allPlayers_007FA174,(CVar1 == CASE_C) + 1,this_00->field_00DF,
                              this_00->field_00E3,this_00->field_00E7,this_00->field_00EB,
                              reinterpret_cast<int *>(&local_98));
      }
      if (local_3c != nullptr) {
        local_18 = (uint *)(local_98 + 1);

        local_20 = static_cast<uint *>(st::fn_006AAC10((uint)local_18));
        if (local_20 != nullptr) {
          *(char *)local_20 = (this_00->field_0494 == CASE_C) + '\x01';
          puVar9 = local_3c;
          puVar14 = (byte *)((int)local_20 + 1);
          for (uVar8 = local_98 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar14 = *(undefined4 *)puVar9;
            puVar9 = puVar9 + 2;
            puVar14 = reinterpret_cast<byte *>((puVar14 + 1));
          }
          for (local_98 = local_98 & 3; local_98 != 0; local_98 = local_98 - 1) {
            *(char *)puVar14 = (char)*puVar9;
            puVar9 = (ushort *)((int)puVar9 + 1);
            puVar14 = (byte *)((int)puVar14 + 1);
          }
          /* ST_CALLSITE[00548F5B]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
          st::fn_00403C33
                    (g_playSystem_00802A38,(undefined4 *)0x31,local_20,0,(uint)local_18);
          st::fn_006AB060(&local_20);
        }
        st::fn_006AB060(&local_3c);
      }
      break;
    }
    memset((void *)local_120, 0, 0x18); /* compiler bulk-zero initialization */
    if (this_00->field_049A == nullptr) {

      iVar7 = st::fn_006E1DD0
                        (g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                         this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                         &local_8);
      if (iVar7 == 0) break;
      lVar13 = st::fn_0072E288();
      local_11b = (undefined1)lVar13;
      lVar13 = st::fn_0072E288();
      local_11a = (undefined1)lVar13;
      lVar13 = st::fn_0072E288();
      local_119 = (byte)lVar13;
      if (4 < local_119) {
        local_119 = 4;
      }
      puVar10 = reinterpret_cast<uint *>(local_120);
      local_120[0] = 3;
      puVar14 = (byte *)0x16;
      this_01 = g_playSystem_00802A38;
    }
    else {
      /* ST_CALLSITE[00548F9C]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
      st::fn_004018C5
                (this_00->field_049A,reinterpret_cast<short *>(local_5e),reinterpret_cast<short *>(local_30),reinterpret_cast<short *>(local_32));
      local_11b = local_5e[0];
      local_11a = local_30[0];
      local_119 = local_32[0];
      local_120[0] = (this_00->field_0494 != CASE_C) - 1U & 5;
      STPiece<1,4>(local_120) = this_00->field_049A->field_0018;
      puVar10 = reinterpret_cast<uint *>(local_120);
      puVar14 = (byte *)0x16;
      this_01 = g_playSystem_00802A38;
    }
    goto cf_common_join_0054A19A;
  case 5:
  case 6:

    iVar7 = st::fn_006E1DD0
                      (g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                       this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                       &local_8);
    if (iVar7 != 0) {
      lVar13 = st::fn_0072E288();
      local_130 = (uint)lVar13;
      lVar13 = st::fn_0072E288();
      local_12c = (undefined4)lVar13;
      lVar13 = st::fn_0072E288();
      local_128 = (int)lVar13;
      if (local_128 < 0) {
        local_128 = 0;
      }
      if (4 < local_128) {
        local_128 = 4;
      }
      /* ST_CALLSITE[00548E5F]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
      st::fn_00403C33(g_playSystem_00802A38,(undefined4 *)0x14,&local_130,0,0xffffffff);
      if (_DAT_0079034c <= local_8) {
        float_local_1c_2 = local_8; /* split floating lifetime from pointer-typed SSA storage */
        st::fn_00405E7F
                  (reinterpret_cast<RecoveredReceiver_0054A9B0 *>(this_00),local_10,local_c,local_8);
      }
      else {
        float_local_1c_2 = 0.0f; /* split floating lifetime from pointer-typed SSA storage */
        st::fn_00405E7F
                  (reinterpret_cast<RecoveredReceiver_0054A9B0 *>(this_00),local_10,local_c,0.0);
      }
    }
    break;
  case 8:

    iVar7 = st::fn_006E1DD0
                      (g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                       this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                       &local_8);
    if (iVar7 != 0) {
      local_178[0] = 2;
      lVar13 = st::fn_0072E288();
      local_173 = (undefined1)lVar13;
      lVar13 = st::fn_0072E288();
      local_172 = (undefined1)lVar13;
      lVar13 = st::fn_0072E288();
      local_171 = (byte)lVar13;
      if (4 < local_171) {
        local_171 = 4;
      }
      /* ST_CALLSITE[00549876]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
      st::fn_00403C33
                (g_playSystem_00802A38,(undefined4 *)0x16,reinterpret_cast<uint *>(local_178),0,0xffffffff);
      if (_DAT_0079034c <= local_8) {
        float_local_14_4 = local_8; /* split floating lifetime from pointer-typed SSA storage */
        st::fn_00405E7F
                  (reinterpret_cast<RecoveredReceiver_0054A9B0 *>(this_00),local_10,local_c,local_8);
      }
      else {
        float_local_14_4 = 0.0f; /* split floating lifetime from pointer-typed SSA storage */
        st::fn_00405E7F
                  (reinterpret_cast<RecoveredReceiver_0054A9B0 *>(this_00),local_10,local_c,0.0);
      }
    }
    break;
  case 9:
  case 10:
  case 0xb:
    pSVar2 = this_00->field_049A;
    if (pSVar2 == nullptr) break;
    memset((void *)local_160, 0, 0x18); /* compiler bulk-zero initialization */
    /* ST_CALLSITE[005498F2]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
    st::fn_004018C5(pSVar2,reinterpret_cast<short *>(local_3e),reinterpret_cast<short *>(local_6c),reinterpret_cast<short *>(local_46));
    local_15b = local_3e[0];
    local_159 = local_46[0];
    local_15a = local_6c[0];
    local_160[0] = 1;
    STPiece<1,4>(local_160) = this_00->field_049A->field_0018;
    /* ST_CALLSITE[0054993B]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
    st::fn_00403C33
              (g_playSystem_00802A38,(undefined4 *)0x16,reinterpret_cast<uint *>(local_160),0,0xffffffff);

    iVar7 = st::fn_006E1DD0
                      (g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                       this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                       &local_8);
    if (iVar7 == 0) break;
    if (_DAT_0079034c <= local_8) {
      float_local_14_5 = local_8; /* split floating lifetime from pointer-typed SSA storage */
    }
    else {
      float_local_14_5 = 0.0f; /* split floating lifetime from pointer-typed SSA storage */
    }
    goto LAB_00549b36;
  case 0xd:
  case 0xe:
    if (param_1 != 0) {
      if (CVar1 == 0xd) {
        local_44 = nullptr;
        if (g_allPlayers_007FA174 != nullptr) {
          /* ST_CALLSITE[005491EC]: CALL 0x004010ff; direct=004010FF STAllPlayersC::GetScrObjList */
          local_44 = st::fn_004010FF
                               (g_allPlayers_007FA174,3,this_00->field_00DF,this_00->field_00E3,
                                this_00->field_00E7,this_00->field_00EB,reinterpret_cast<int *>(&local_a0));
        }
        if (local_44 != nullptr) {
          local_18 = (uint *)(local_a0 + 1);

          local_14 = static_cast<uint *>(st::fn_006AAC10((uint)local_18));
          if (local_14 != nullptr) {
            *(undefined1 *)local_14 = 3;
            puVar9 = local_44;
            puVar14 = (byte *)((int)local_14 + 1);
            for (uVar8 = local_a0 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar14 = *(undefined4 *)puVar9;
              puVar9 = puVar9 + 2;
              puVar14 = reinterpret_cast<byte *>((puVar14 + 1));
            }
            for (local_a0 = local_a0 & 3; local_a0 != 0; local_a0 = local_a0 - 1) {
              *(char *)puVar14 = (char)*puVar9;
              puVar9 = (ushort *)((int)puVar9 + 1);
              puVar14 = (byte *)((int)puVar14 + 1);
            }
            /* ST_CALLSITE[00549242]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
            st::fn_00403C33
                      (g_playSystem_00802A38,(undefined4 *)0x31,local_14,0,(uint)local_18);
            st::fn_006AB060(&local_14);
          }
          st::fn_006AB060(&local_44);
        }
      }
      break;
    }
    pSVar2 = this_00->field_049A;
    if (pSVar2 == nullptr) break;
    memset((void *)local_1c0, 0, 0x21); /* compiler bulk-zero initialization */
    /* ST_CALLSITE[0054928A]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
    st::fn_004018C5(pSVar2,&local_36,&local_58,&local_62);
    STPiece<1,4>(local_1c0) = SEXT24(local_36);
    local_1b7 = (int)local_62;
    local_1bb = (int)local_58;
    local_1c0[0] = 1;
    local_1a3 = this_00->field_049A->field_0018;
    puVar10 = reinterpret_cast<uint *>(local_1c0);
    puVar14 = (byte *)0x17;
    this_01 = g_playSystem_00802A38;
    goto cf_common_join_0054A19A;
  case CASE_F:
  case 0x10:

    iVar7 = st::fn_006E1DD0
                      (g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                       this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                       &local_8);
    if (iVar7 != 0) {
      local_19c = ((this_00->field_0494 != CASE_F) - 1U & 0xf2) + 0x10;
      lVar13 = st::fn_0072E288();
      local_19b = (undefined4)lVar13;
      lVar13 = st::fn_0072E288();
      local_197 = (undefined4)lVar13;
      lVar13 = st::fn_0072E288();
      local_193 = (int)lVar13;
      if (local_193 < 0) {
        local_193 = 0;
      }
      if (4 < local_193) {
        local_193 = 4;
      }
      /* ST_CALLSITE[00549152]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
      st::fn_00403C33
                (g_playSystem_00802A38,(undefined4 *)0x17,reinterpret_cast<uint *>(&local_19c),0,0xffffffff);
      if (_DAT_0079034c <= local_8) {
        float_local_20_1 = local_8; /* split floating lifetime from pointer-typed SSA storage */
        st::fn_00405E7F
                  (reinterpret_cast<RecoveredReceiver_0054A9B0 *>(this_00),local_10,local_c,local_8);
      }
      else {
        float_local_20_1 = 0.0f; /* split floating lifetime from pointer-typed SSA storage */
        st::fn_00405E7F
                  (reinterpret_cast<RecoveredReceiver_0054A9B0 *>(this_00),local_10,local_c,0.0);
      }
    }
    break;
  case 0x11:

    iVar7 = st::fn_006E1DD0
                      (g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                       this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                       &local_8);
    if (iVar7 != 0) {
      lVar13 = st::fn_0072E288();
      local_13c = (uint)lVar13;
      lVar13 = st::fn_0072E288();
      local_138 = (undefined4)lVar13;
      lVar13 = st::fn_0072E288();
      local_134 = (int)lVar13;
      if (local_134 < 0) {
        local_134 = 0;
      }
      if (4 < local_134) {
        local_134 = 4;
      }
      /* ST_CALLSITE[0054978B]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
      st::fn_00403C33(g_playSystem_00802A38,(undefined4 *)0x19,&local_13c,0,0xffffffff);
      if (_DAT_0079034c <= local_8) {
        float_local_14_6 = local_8; /* split floating lifetime from pointer-typed SSA storage */
        st::fn_00405E7F
                  (reinterpret_cast<RecoveredReceiver_0054A9B0 *>(this_00),local_10,local_c,local_8);
      }
      else {
        float_local_14_6 = 0.0f; /* split floating lifetime from pointer-typed SSA storage */
        st::fn_00405E7F
                  (reinterpret_cast<RecoveredReceiver_0054A9B0 *>(this_00),local_10,local_c,0.0);
      }
    }
    break;
  case 0x12:
  case 0x13:
    if (this_00->field_049A == nullptr) break;
    local_d0 = (CVar1 != 0x12) + '\x01';
    /* ST_CALLSITE[00549415]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
    st::fn_004018C5(this_00->field_049A,&local_cf,&local_cd,&local_cb);
    puVar10 = reinterpret_cast<uint *>(&local_d0);
    puVar14 = (byte *)0x1f;
    this_01 = g_playSystem_00802A38;
    goto cf_common_join_0054A19A;
  case 0x14:
    if (g_tLOBldMark_007FB2AC != nullptr) {
      local_c8 = this_00->field_04AA;
      local_c4 = 0;
      local_c0 = 0;
      local_bc = 0;
      if (g_tLOBldMark_007FB2AC->field_0024 != 0) {
        if (st::machine_word_boundary_cast<uint>((st_stack_frame + 720)) != st::machine_word_boundary_cast<uint>((undefined1 *)0xc4)) {
          local_c4 = g_tLOBldMark_007FB2AC->field_0030;
        }
        if (st::machine_word_boundary_cast<uint>((st_stack_frame + 720)) != st::machine_word_boundary_cast<uint>((undefined1 *)0xc0)) {
          local_c0 = g_tLOBldMark_007FB2AC->field_0034;
        }
        if (st::machine_word_boundary_cast<uint>((st_stack_frame + 720)) != st::machine_word_boundary_cast<uint>((undefined1 *)0xbc)) {
          local_bc = g_tLOBldMark_007FB2AC->field_0038;
        }
        if (g_tLOBldMark_007FB2AC->field_0024 != 0) {
          /* ST_CALLSITE[0054965A]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
          st::fn_00403C33
                    (g_playSystem_00802A38,(undefined4 *)0x23,&local_c8,0,0xffffffff);

          iVar7 = st::fn_006E1DD0
                            (g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                             this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                             &local_8);
          if (iVar7 != 0) {
            if (_DAT_0079034c <= local_8) {
              float_local_14_7 = local_8; /* split floating lifetime from pointer-typed SSA storage */
              st::fn_00405E7F
                        (reinterpret_cast<RecoveredReceiver_0054A9B0 *>(this_00),local_10,local_c,local_8);
            }
            else {
              float_local_14_7 = 0.0f; /* split floating lifetime from pointer-typed SSA storage */
              st::fn_00405E7F
                        (reinterpret_cast<RecoveredReceiver_0054A9B0 *>(this_00),local_10,local_c,0.0);
            }
          }
        }
      }
    }
    break;
  case 0x16:
  case CASE_18:
    pSVar2 = this_00->field_049A;
    if (pSVar2 == nullptr) break;
    memset((void *)local_260, 0, 0x21); /* compiler bulk-zero initialization */
    /* ST_CALLSITE[00549335]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
    st::fn_004018C5(pSVar2,&local_6e,&local_66,&local_6a);
    STPiece<1,4>(local_260) = SEXT24(local_6e);
    local_25b = (int)local_66;
    local_257 = (int)local_6a;
    local_260[0] = ((this_00->field_0494 != CASE_18) - 1U & 0xeb) + 0x18;
    puVar10 = reinterpret_cast<uint *>(local_260);
    puVar14 = (byte *)0x17;
    this_01 = g_playSystem_00802A38;
    goto cf_common_join_0054A19A;
  case 0x17:
    if (this_00->field_049A == nullptr) break;
    uVar3 = this_00->field_049A->field_0018;
    puVar10 = reinterpret_cast<uint *>(&local_78);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_78 = CONCAT31((int3)uVar3,1);
    local_74 = (undefined1)((uint)uVar3 >> 0x18);
    puVar14 = (byte *)0x21;
    goto cf_common_join_0054A19A;
  case 0x19:

    iVar7 = st::fn_006E1DD0
                      (g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                       this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                       &local_8);
    if (iVar7 != 0) {
      lVar13 = st::fn_0072E288();
      local_207 = (undefined4)lVar13;
      lVar13 = st::fn_0072E288();
      local_203 = (undefined4)lVar13;
      lVar13 = st::fn_0072E288();
      local_1ff = (int)lVar13;
      if (local_1ff < 0) {
        local_1ff = 0;
      }
      if (4 < local_1ff) {
        local_1ff = 4;
      }
      local_208 = 0xb;
      /* ST_CALLSITE[0054954A]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
      st::fn_00403C33
                (g_playSystem_00802A38,(undefined4 *)0x17,reinterpret_cast<uint *>(&local_208),0,0xffffffff);
      if (_DAT_0079034c <= local_8) {
        float_local_14_8 = local_8; /* split floating lifetime from pointer-typed SSA storage */
        st::fn_00405E7F
                  (reinterpret_cast<RecoveredReceiver_0054A9B0 *>(this_00),local_10,local_c,local_8);
      }
      else {
        float_local_14_8 = 0.0f; /* split floating lifetime from pointer-typed SSA storage */
        st::fn_00405E7F
                  (reinterpret_cast<RecoveredReceiver_0054A9B0 *>(this_00),local_10,local_c,0.0);
      }
    }
    break;
  case 0x1a:
    if (this_00->field_049A == nullptr) break;
    uVar3 = this_00->field_049A->field_0018;
    puVar10 = reinterpret_cast<uint *>(&local_80);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_80 = CONCAT31((int3)uVar3,4);
    local_7c = (undefined1)((uint)uVar3 >> 0x18);
    puVar14 = (byte *)0x21;
    goto cf_common_join_0054A19A;
  case 0x1b:
    pSVar2 = this_00->field_049A;
    if (pSVar2 == nullptr) break;
    memset((void *)local_23c, 0, 0x21); /* compiler bulk-zero initialization */
    /* ST_CALLSITE[0054945E]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
    st::fn_004018C5(pSVar2,&local_70,&local_38,&local_60);
    STPiece<1,4>(local_23c) = SEXT24(local_70);
    local_237 = (int)local_38;
    local_233 = (int)local_60;
    puVar10 = reinterpret_cast<uint *>(local_23c);
    local_23c[0] = 0x13;
    puVar14 = (byte *)0x17;
    this_01 = g_playSystem_00802A38;
    goto cf_common_join_0054A19A;
  case 0x1c:
    local_108 = (uint)(byte)this_00->field_04AA;
    local_104 = 0;
    local_100 = 0;
    local_fc = 0;
    local_f8 = 0;
    uStack_f7 = 0;
    lVar13 = st::fn_0072E288();
    STPiece<1,3>(local_108) = (undefined3)lVar13;
    STPiece<0,1>(local_104) = (undefined1)((ulonglong)lVar13 >> 0x18);
    lVar13 = st::fn_0072E288();
    STPiece<1,3>(local_104) = (undefined3)lVar13;
    STPiece<0,1>(local_100) = (undefined1)((ulonglong)lVar13 >> 0x18);
    lVar13 = st::fn_0072E288();
    uStack_f7 = *(undefined1 *)&this_00->field_00FB;
    STPiece<1,3>(local_100) = (undefined3)lVar13;
    puVar10 = &local_108;
    STPiece<1,3>(local_fc) = (undefined3)this_00->field_00F7;
    local_fc = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_fc)), (uint8_t)((char)((ulonglong)lVar13 >> 0x18)));
    local_f8 = (undefined1)((uint)this_00->field_00F7 >> 0x18);
LAB_0054a196:
    puVar14 = (byte *)0x18;
    goto cf_common_join_0054A19A;
  case 0x1d:
    if (this_00->field_04A2 == 0x18) {

      iVar7 = st::fn_006E1DD0
                        (g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                         this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                         &local_8);
      if (iVar7 == 0) break;
      local_90 = 1;
      local_8c = 0;
      local_88 = 0;
      local_84 = 0;
      lVar13 = st::fn_0072E288();
      STPiece<1,3>(local_90) = (undefined3)lVar13;
      STPiece<0,1>(local_8c) = (undefined1)((ulonglong)lVar13 >> 0x18);
      lVar13 = st::fn_0072E288();
      STPiece<1,3>(local_8c) = (undefined3)lVar13;
      STPiece<0,1>(local_88) = (undefined1)((ulonglong)lVar13 >> 0x18);
      lVar13 = st::fn_0072E288();
      iVar7 = (int)lVar13;
      STPiece<1,3>(local_88) = (undefined3)lVar13;
      local_84 = (undefined1)((ulonglong)lVar13 >> 0x18);
      if (iVar7 < 0) {
        iVar7 = 0;
        STPiece<1,3>(local_88) = 0;
        local_84 = 0;
      }
      if (4 < iVar7) {
        STPiece<1,3>(local_88) = 4;
        local_84 = 0;
      }
      /* ST_CALLSITE[00549C0C]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
      st::fn_00403C33(g_playSystem_00802A38,(undefined4 *)0x1a,&local_90,0,0xffffffff);
      if (_DAT_0079034c <= local_8) {
        float_local_14_9 = local_8; /* split floating lifetime from pointer-typed SSA storage */
      }
      else {
        float_local_14_9 = 0.0f; /* split floating lifetime from pointer-typed SSA storage */
      }
      goto LAB_00549c33;
    }
    if (this_00->field_049A == nullptr) break;
    local_dc = 0;
    local_d8 = 0;
    local_e0 = 2;
    local_d4 = 0;
    /* ST_CALLSITE[00549A9C]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
    st::fn_004018C5(this_00->field_049A,&local_64,&local_4e,&local_7a);
    STPiece<1,3>(local_e0) = (int3)local_64;
    STPiece<0,1>(local_dc) = (char)(local_64 >> 0xf);
    STPiece<1,3>(local_dc) = (int3)local_4e;
    STPiece<0,1>(local_d8) = (char)(local_4e >> 0xf);
    STPiece<1,3>(local_d8) = (int3)local_7a;
    local_d4 = (char)(local_7a >> 0xf);
    /* ST_CALLSITE[00549AD2]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
    st::fn_00403C33(g_playSystem_00802A38,(undefined4 *)0x1a,&local_e0,0,0xffffffff);

    iVar7 = st::fn_006E1DD0
                      (g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                       this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                       &local_8);
    if (iVar7 == 0) break;
    if (_DAT_0079034c <= local_8) {
      float_local_14_10 = local_8; /* split floating lifetime from pointer-typed SSA storage */
    }
    else {
      float_local_14_10 = 0.0f; /* split floating lifetime from pointer-typed SSA storage */
    }
LAB_00549b36:
    st::fn_00405E7F
              (reinterpret_cast<RecoveredReceiver_0054A9B0 *>(this_00),local_10,local_c,float_local_14_10);
    break;
  case 0x1e:
    if (this_00->field_049A == nullptr) break;
    local_2c = 0;
    sStack_2b = 0;
    uStack_29 = 0;
    uStack_28 = 0;
    uStack_27 = 0;
    local_26 = 0;
    /* ST_CALLSITE[005493AE]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
    st::fn_004018C5(this_00->field_049A,&local_5c,&local_5a,&local_34);
    sStack_2b = local_5c;
    puVar10 = reinterpret_cast<uint *>(&local_2c);
    uStack_29 = (undefined1)local_5a;
    uStack_28 = (undefined1)((ushort)local_5a >> 8);
    uStack_27 = (undefined1)local_34;
    local_26 = (undefined1)((ushort)local_34 >> 8);
    local_2c = 3;
    puVar14 = (byte *)0x1f;
    this_01 = g_playSystem_00802A38;
cf_common_join_0054A19A:
    /* ST_CALLSITE[0054A19A]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
    st::fn_00403C33(this_01,reinterpret_cast<undefined4 *>(puVar14),puVar10,0,0xffffffff);
    break;
  case 0x1f:
    pSVar2 = this_00->field_049A;
    if (pSVar2 == nullptr) break;
    memset(local_284, 0, 0x21); /* compiler bulk-zero initialization */
    STPiece<0,1>(local_284[0]) = 0x19;
    local_267 = pSVar2->field_0018;
    /* ST_CALLSITE[005499E6]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
    st::fn_00403C33(g_playSystem_00802A38,(undefined4 *)0x17,local_284,0,0xffffffff);

    iVar7 = st::fn_006E1DD0
                      (g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                       this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                       &local_8);
    if (iVar7 == 0) break;
    if (_DAT_0079034c <= local_8) {
      float_local_14_11 = local_8; /* split floating lifetime from pointer-typed SSA storage */
    }
    else {
      float_local_14_11 = 0.0f; /* split floating lifetime from pointer-typed SSA storage */
    }
LAB_00549c33:
    st::fn_00405E7F
              (reinterpret_cast<RecoveredReceiver_0054A9B0 *>(this_00),local_10,local_c,float_local_14_11);
  }
switchD_00548db5_caseD_3:
  if (((this_00->field_04A2 != 0) && (this_00->field_0xd3 == '\0')) &&
     (this_00->field_04A6 = 1, g_cPanel_00801688 != nullptr)) {
    /* ST_CALLSITE[0054A1C7]: CALL 0x00402798; direct=00402798 CPanelTy::sub_004FAD20 */
    st::fn_00402798(g_cPanel_00801688);
  }
  g_currentExceptionFrame = local_2c8.previous;
  return;
}

// 0054AEE0 CursorClassTy::GCGameState
#line 4 "decomp/ST.exe/functions/0054AEE0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::GCGameState

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=11, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0054AEE0(CursorClassTy *this,int param_1)

{
  char cVar1;
  bool bVar3;
  CursorClassTy *this_00;
  CursorClassTy_SetGCType_param_1Enum CVar4;
  int local_EAX_45;
  int iVar5;
  int iVar6;
  STFishC *pSVar7;
  UINT resourceId;
  char *pcVar8;
  uint *puVar9_mg1;
  Global_sub_005121F0_param_1Enum GVar9;
  int iVar10;
  uint uVar10;
  uint *puVar12;
  char *pcVar14;
  uint *puVar15;
  longlong lVar16;
  int iVar17;
  HINSTANCE module;
  uint local_f8 [8];
  uint local_d8 [25];
  InternalExceptionFrame local_74;
  int local_30;
  Global_sub_00523410_param_1Enum local_2c;
  uint local_28;
  CursorClassTy *local_18;
  short local_14;
  short local_12;
  float local_10;
  uint local_c;
  int local_8;

  local_8 = 1;
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_18 = this;

  local_EAX_45 = st::fn_0072D7F0(local_74.jumpBuffer,0);
  this_00 = local_18;
  if (local_EAX_45 != 0) {
    g_currentExceptionFrame = local_74.previous;

    iVar10 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x6fc,0,local_EAX_45,
                                st::mutable_c_string("%s"),"CursorClassTy::GCGameState");
    if (iVar10 == 0) {
      st::fn_006A5E40(local_EAX_45,0,st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x6fe);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[0054AF24]: CALL 0x00403634; direct=00403634 CursorClassTy::sub_00544990 */
  iVar5 = st::fn_00403634(local_18);
  if ((iVar5 != 0) &&
     ((((this_00->field_00DE == CASE_2 || (this_00->field_00DE == CASE_4)) &&

       (iVar6 = st::fn_00405687((int)this_00), iVar6 == 0)) || (this_00->field_0496 == 0)))) {
    /* ST_CALLSITE[0054AF54]: CALL 0x00403175; direct=00403175 CursorClassTy::sub_0054B700 */
    st::fn_00403175(this_00,-1);
    if ((g_helpPanel_00801690 == nullptr) || (g_helpPanel_00801690->field_0172 == CASE_2)
       ) goto LAB_0054b372;
LAB_0054b019:
    iVar6 = this_00->field_0038;
    iVar17 = this_00->field_0034;
    CVar4 = (CursorClassTy_SetGCType_param_1Enum)(byte)g_helpPanel_00801690->field_01DB;
    goto cf_common_exit_0054B368;
  }
  memset(local_f8, 0, 0x20); /* compiler bulk-zero initialization */
  if ((g_allPlayers_007FA174 == nullptr) || (DAT_00808784 != 0)) {
LAB_0054b335:
    if ((g_helpPanel_00801690 == nullptr) || (g_helpPanel_00801690->field_0172 == CASE_2)
       ) {
      iVar6 = this_00->field_0038;
      iVar17 = this_00->field_0034;
LAB_0054b366:
      CVar4 = CASE_0;
    }
    else {
      iVar6 = this_00->field_0038;
      iVar17 = this_00->field_0034;
      CVar4 = (CursorClassTy_SetGCType_param_1Enum)(byte)g_helpPanel_00801690->field_01DB;
    }
  }
  else {
    if ((DAT_00808788 == 0) && ((DAT_0080878c == 0 && (DAT_00808790 == 0)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_0054b335;
    if ((((g_playPanel_008016E4 != nullptr) &&
         (g_playPanel_008016E4->field_0172 != CASE_2)) ||
        ((g_helpPanel_00801690 != nullptr && (g_helpPanel_00801690->field_0172 != CASE_2)
         ))) || ((g_optPanel_008016DC != nullptr &&
                 (g_optPanel_008016DC->field_0172 != CASE_2)))) {
      if ((g_helpPanel_00801690 != nullptr) &&
         (g_helpPanel_00801690->field_0172 != CASE_2)) goto LAB_0054b019;
      iVar6 = this_00->field_0038;
      iVar17 = this_00->field_0034;
      goto LAB_0054b366;
    }
    /* ST_CALLSITE[0054B05C]: CALL 0x00405d49; direct=00405D49 thunk_FUN_00435820; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STFishC; signature=__stdcall;pointer:/STFishC;/int;/int */
    pSVar7 = st::pointer_boundary_cast<STFishC *>(st::fn_00405D49(this_00->field_00C5 - this_00->field_04B2,
                                this_00->field_00C9 - this_00->field_04B6));
    this_00->field_049A = pSVar7;
    if (pSVar7 == nullptr) {

      st::fn_006E1DD0
                (g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                 this_00->field_00C9 - this_00->field_04B6,nullptr,nullptr,&local_10);
      lVar16 = st::fn_0072E288();
      local_c = (undefined4)lVar16;
    }
    else {
      /* ST_CALLSITE[0054B079]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
      st::fn_004018C5(pSVar7,&local_14,&local_12,reinterpret_cast<short *>(&local_c));
    }
    if (4 < (short)local_c) {
      local_c = 4;
    }
    /* ST_CALLSITE[0054B0F4]: CALL 0x00403175; direct=00403175 CursorClassTy::sub_0054B700 */
    st::fn_00403175(this_00,(short)local_c);
    pSVar7 = this_00->field_049A;
    if (pSVar7 == nullptr) {
      if ((this_00->field_049E != 0) &&
         (this_00->field_049E = 0, g_helpString_00801694 != nullptr)) {
        /* ST_CALLSITE[0054B28B]: CALL 0x00402045; direct=00402045 HelpStringTy::sub_0051FAC0 */
        st::fn_00402045(g_helpString_00801694,nullptr,0,'\x01',0xfffffc18);
      }
      if (this_00->field_04DE == '\0') goto LAB_0054b2a9;
      iVar6 = this_00->field_0038;
      iVar17 = this_00->field_0034;
      CVar4 = CASE_47;
    }
    else {
      /* ST_CALLSITE[0054B10D]: CALL dword ptr [EAX + 0x68] */
      pSVar7->vfunc_68((short)&local_30);
      if (this_00->field_049E != local_30) {
        this_00->field_049E = local_30;
        module = g_hINSTANCE_00807618;

        resourceId = st::fn_00403684(local_2c,(char)local_28,0);
        pcVar8 = st::fn_006B0140(resourceId,module);
        uVar10 = 0xffffffff;
        do {
          pcVar14 = pcVar8;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar14 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar14;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        puVar12 = reinterpret_cast<uint *>((pcVar14 + -uVar10));
        puVar15 = local_d8;
        memmove(puVar15, puVar12, uVar10); /* compiler REP MOVS byte copy */
        puVar9_mg1 = st::fn_0072E560(local_d8,'\n');
        while (puVar9_mg1 != nullptr) {
          *(undefined1 *)puVar9_mg1 = 0x20;
          puVar9_mg1 = st::fn_0072E560(puVar9_mg1,'\n');
        }
        if (STPiece<1,1>(local_28) == '\0') {
          /* ST_CALLSITE[0054B1CD]: CALL dword ptr [0x0085bde8] */
          st::external_00000080((LPSTR)local_d8,st::mutable_c_string("%s"),local_d8);
        }
        else {
          /* ST_CALLSITE[0054B1AF]: CALL dword ptr [0x0085bde8] */
          st::external_00000080((LPSTR)local_d8,st::mutable_c_string("%s - \"%s\""),local_d8,(int)&local_28 + 1);
        }
        if (g_helpString_00801694 != nullptr) {
          /* ST_CALLSITE[0054B1F0]: CALL 0x00402045; direct=00402045 HelpStringTy::sub_0051FAC0 */
          st::fn_00402045(g_helpString_00801694,reinterpret_cast<char *>(local_d8),0,'\x01',0xfffffc18);
        }
      }
      if (this_00->field_04DE == '\0') {
LAB_0054b2a9:
        /* ST_CALLSITE[0054B2DB]: CALL 0x00404c00; direct=00404C00 STAllPlayersC::GetCursorType */
        CVar4 = st::fn_00404C00
                          (g_allPlayers_007FA174,this_00->field_04A2,
                           reinterpret_cast<RecoveredRecordView_00435930_B686CBAB *>(this_00->field_049A),
                           this_00->field_00C5 - this_00->field_04B2,
                           (int *)(this_00->field_00C9 - this_00->field_04B6));
        while (CVar4 == CASE_58) {
          /* ST_CALLSITE[0054B2E8]: CALL 0x004040fc; direct=004040FC CursorClassTy::sub_0054A8D0 */
          st::fn_004040FC(this_00);
          /* ST_CALLSITE[0054B31F]: CALL 0x00404c00; direct=00404C00 STAllPlayersC::GetCursorType */
          CVar4 = st::fn_00404C00
                            (g_allPlayers_007FA174,this_00->field_04A2,
                             reinterpret_cast<RecoveredRecordView_00435930_B686CBAB *>(this_00->field_049A),
                             this_00->field_00C5 - this_00->field_04B2,
                             (int *)(this_00->field_00C9 - this_00->field_04B6));
        }
        iVar6 = this_00->field_0038;
        iVar17 = this_00->field_0034;
      }
      else {
        pSVar7 = this_00->field_049A;
        /* ST_CALLSITE[0054B20D]: CALL dword ptr [EAX + 0x2c] */
        GVar9 = pSVar7->vfunc_2C();
        if (GVar9 == 0x78) {
          GVar9 = *(Global_sub_005121F0_param_1Enum *)&this_00->field_049A->field_0x259;
        }
        if (g_helpPanel_00801690 != nullptr) {
          /* ST_CALLSITE[0054B230]: CALL dword ptr [EDX + 0xc] */
          iVar6 = pSVar7->vfunc_0C();

          iVar6 = st::fn_00404F61(g_helpPanel_00801690,GVar9,iVar6);
          if (iVar6 != 0) {
            iVar6 = this_00->field_0038;
            iVar17 = this_00->field_0034;
            CVar4 = CASE_48;
            goto cf_common_exit_0054B368;
          }
        }
        iVar6 = this_00->field_0038;
        iVar17 = this_00->field_0034;
        CVar4 = CASE_47;
      }
    }
  }
cf_common_exit_0054B368:
  /* ST_CALLSITE[0054B36A]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
  local_8 = st::fn_0040507E(this_00,CVar4,iVar17,iVar6);
LAB_0054b372:
  if ((param_1 != 0) && (local_8 != 0)) {
    /* ST_CALLSITE[0054B390]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
  }
  g_currentExceptionFrame = local_74.previous;
  return;
}

// 0054BE70 CPanelTy::OutProc
#line 4 "decomp/ST.exe/functions/0054BE70/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CPanelTy::OutProc

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0054BE70 -> 006B4640 @ 0054BEAD */

void __thiscall
st::fn_0054BE70(CPanelTy *this,DDXContext *param_1,undefined4 param_2,undefined4 param_3,
                 int param_4,int param_5,undefined4 param_6,undefined4 param_7,BITMAPINFO *param_8)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;

  errorCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (errorCode == 0) {

    st::fn_006B4640(param_1,param_4,param_5,param_8,nullptr);
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;

  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x797,0,errorCode,
                             st::mutable_c_string("%s"),"CPanelTy::OutProc");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x797);
  return;
}

// 0054BF40 CursorClassTy::SetGCType
#line 4 "decomp/ST.exe/functions/0054BF40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::SetGCType

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/CursorClassTy_SetGCType_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_46=70;CASE_47=71;CASE_48=72

   [STSwitchEnumApplier] Switch target field_0493 uses
   /SubmarineTitans/Recovered/Enums/CursorClassTy_field_0493State. Cases:
   CASE_1=1;CASE_3=3;CASE_4=4;CASE_5=5

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00577280 -> 0054BF40 @ 00577358; /CursorClassTy+0xc5 | 005A4350 -> 0054BF40 @ 005A4EFF;
   /CursorClassTy+0xc5

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00577280 -> 0054BF40 @ 00577358; /CursorClassTy+0xc9 | 005A4350 -> 0054BF40 @ 005A4EFF;
   /CursorClassTy+0xc9 */

undefined4 __thiscall
st::fn_0054BF40
          (CursorClassTy *this,CursorClassTy_SetGCType_param_1Enum param_1,int param_2,int param_3)

{
  CursorClassTy *this_00;
  int iVar2;
  int iVar3;
  uint uVar2;
  char *pcVar3;
  BITMAPINFO *pBVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  InternalExceptionFrame local_58;
  CursorClassTy *local_14;
  uint local_10;
  BITMAPINFO *local_c;
  uint local_8;

  local_10 = 1;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar2 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x8ee,0,iVar2,
                               st::mutable_c_string("%s"),"CursorClassTy::SetGCType");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\to_cursor.cpp"),0x8f0);
    return local_10;
  }
  if (local_14->field_0494 == param_1) {
switchD_0054bfbc_caseD_20:
    g_currentExceptionFrame = local_58.previous;
    return local_10;
  }
  local_14->field_0494 = param_1;
  local_14->field_00C5 = param_2;
  local_14->field_00C9 = param_3;
  switch((uint)param_1) {
  case 0:
    switch(local_14->field_0493) {
    case CASE_1:
      pcVar3 = st::mutable_c_string("CUR_MENU");
      break;
    default:
      pcVar3 = st::mutable_c_string("CUR_ARROW");
      break;
    case CASE_3:
      pcVar3 = st::mutable_c_string("CUR_TASK");
      break;
    case CASE_4:
      pcVar3 = st::mutable_c_string("CUR_REPORT");
      break;
    case CASE_5:
      pcVar3 = st::mutable_c_string("CUR_CLOCK");
    }
    iVar7 = -1;
    iVar6 = -1;
    if (local_14->field_0493 == CASE_5) {
      uVar5 = 0x12;
      pBVar4 = (BITMAPINFO *)0xd;
      uVar2 = 1000;
    }
    else {
      uVar5 = 0;
      pBVar4 = nullptr;
      uVar2 = 0x32;
    }
    goto cf_common_exit_0054C01C;
  case 1:
  case 6:
    iVar7 = 0x20;
    iVar6 = 0x3b;
    uVar5 = 0x14;
    pBVar4 = (BITMAPINFO *)0x22;
    pcVar3 = st::mutable_c_string("CUR_CMD");
    goto cf_common_exit_0054C06F;
  case 2:
  case 7:
    iVar7 = 0x32;
    iVar6 = 0x43;
    uVar5 = 0x1d;
    pBVar4 = (BITMAPINFO *)0x27;
    pcVar3 = st::mutable_c_string("CUR_FIRE");
    break;
  case 3:
    iVar7 = 0x1f;
    iVar6 = 0x35;
    uVar5 = 0x14;
    pBVar4 = (BITMAPINFO *)0x22;
    pcVar3 = st::mutable_c_string("CUR_OWNBOAT");
    break;
  case 4:
    iVar7 = 0x1f;
    iVar6 = 0x35;
    uVar5 = 0x14;
    pBVar4 = (BITMAPINFO *)0x22;
    pcVar3 = st::mutable_c_string("CUR_OWNOBJ");
    goto cf_common_exit_0054C06F;
  case 5:
  case 0x14:
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 0;
    pBVar4 = nullptr;
    pcVar3 = st::mutable_c_string("CUR_ARROW");
    break;
  case 8:
    iVar7 = 0x39;
    iVar6 = 0x37;
    uVar5 = 0x26;
    pBVar4 = (BITMAPINFO *)0x25;
    pcVar3 = st::mutable_c_string("CUR_DCBOMBER");
    goto cf_common_exit_0054C06F;
  case 9:
    iVar7 = 0x34;
    iVar6 = 0x43;
    uVar5 = 0x1b;
    pBVar4 = (BITMAPINFO *)0x24;
    pcVar3 = st::mutable_c_string("CUR_CAPTURE");
    break;
  case 10:
    iVar7 = 0x34;
    iVar6 = 0x43;
    uVar5 = 0x1b;
    pBVar4 = (BITMAPINFO *)0x24;
    pcVar3 = st::mutable_c_string("CUR_CAPTUREUSE");
    goto cf_common_exit_0054C06F;
  case 0xb:
    iVar7 = 0x34;
    iVar6 = 0x43;
    uVar5 = 0x1b;
    pBVar4 = (BITMAPINFO *)0x24;
    uVar2 = 0x32;
    pcVar3 = st::mutable_c_string("CUR_CAPTUREACS");
    goto cf_common_exit_0054C01C;
  case 0xc:
  case 0x1f:
    iVar7 = 0x34;
    iVar6 = 0x43;
    uVar5 = 0x1b;
    pBVar4 = (BITMAPINFO *)0x24;
    uVar2 = 0x32;
    pcVar3 = st::mutable_c_string("CUR_PARALISE");
    goto cf_common_exit_0054C01C;
  case 0xd:
  case 0xe:
    iVar7 = 0x2c;
    iVar6 = 0x41;
    uVar5 = 0x1d;
    pBVar4 = (BITMAPINFO *)0x2a;
    pcVar3 = st::mutable_c_string("CUR_DEFENCE");
    goto cf_common_exit_0054C06F;
  case 0xf:
  case 0x10:
    iVar7 = 0x20;
    iVar6 = 0x3b;
    uVar5 = 0x14;
    pBVar4 = (BITMAPINFO *)0x22;
    pcVar3 = st::mutable_c_string("CUR_PATROL");
    break;
  case 0x11:
    iVar7 = 0x20;
    iVar6 = 0x3b;
    uVar5 = 0x14;
    pBVar4 = (BITMAPINFO *)0x22;
    uVar2 = 0x32;
    pcVar3 = st::mutable_c_string("CUR_EQUIPM");
    goto cf_common_exit_0054C01C;
  case 0x12:
    iVar7 = 0x26;
    iVar6 = 0x43;
    uVar5 = 0x14;
    pBVar4 = (BITMAPINFO *)0x22;
    pcVar3 = st::mutable_c_string("CUR_RC");
    goto cf_common_exit_0054C06F;
  case 0x13:
    iVar7 = 0x28;
    iVar6 = 0x3c;
    uVar5 = 0x1e;
    pBVar4 = (BITMAPINFO *)0x28;
    uVar2 = 0x32;
    pcVar3 = st::mutable_c_string("CUR_UNLOADRC");
    goto cf_common_exit_0054C01C;
  case 0x15:
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 0x13;
    pBVar4 = (BITMAPINFO *)0x23;
    pcVar3 = st::mutable_c_string("CUR_NOBUILD");
    goto cf_common_exit_0054C06F;
  case 0x16:
    iVar7 = 0x3a;
    iVar6 = 0x38;
    uVar5 = 0x26;
    pBVar4 = (BITMAPINFO *)0x25;
    uVar2 = 0x32;
    pcVar3 = st::mutable_c_string("CUR_DISMANTLING");
    goto cf_common_exit_0054C01C;
  case 0x17:
  case 0x18:
    iVar7 = 0x28;
    iVar6 = 0x32;
    uVar5 = 0x14;
    pBVar4 = (BITMAPINFO *)0x23;
    uVar2 = 0x32;
    pcVar3 = st::mutable_c_string("CUR_REPAIR");
    goto cf_common_exit_0054C01C;
  case 0x19:
    iVar7 = 0x20;
    iVar6 = 0x3b;
    uVar5 = 0x14;
    pBVar4 = (BITMAPINFO *)0x22;
    uVar2 = 0x32;
    pcVar3 = st::mutable_c_string("CUR_VIEW");
    goto cf_common_exit_0054C01C;
  case 0x1a:
  case 0x1e:
    iVar7 = 0x32;
    iVar6 = 0x34;
    uVar5 = 0x25;
    pBVar4 = (BITMAPINFO *)0x25;
    pcVar3 = st::mutable_c_string("CUR_UNLOADCNT");
    break;
  case 0x1b:
    iVar7 = 0x21;
    iVar6 = 0x3a;
    uVar5 = 0x13;
    pBVar4 = (BITMAPINFO *)0x21;
    pcVar3 = st::mutable_c_string("CUR_REPLENISH");
    break;
  case 0x1c:
    iVar7 = 0x1b;
    iVar6 = 0x56;
    uVar5 = 0x13;
    pBVar4 = (BITMAPINFO *)0x34;
    pcVar3 = st::mutable_c_string("CUR_FORMATION");
    break;
  case 0x1d:
    iVar7 = 0x2e;
    iVar6 = 0x41;
    uVar5 = 0x23;
    pBVar4 = (BITMAPINFO *)0x28;
    pcVar3 = st::mutable_c_string("CUR_TELEPORT");
    goto cf_common_exit_0054C06F;
  default:
    goto switchD_0054bfbc_caseD_20;
  case 0x32:
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 0x1b;
    pBVar4 = (BITMAPINFO *)0x24;
    pcVar3 = st::mutable_c_string("CUR_SUP");
    goto cf_common_exit_0054C06F;
  case 0x33:
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 0x1b;
    pBVar4 = (BITMAPINFO *)0x24;
    uVar2 = 0x32;
    pcVar3 = st::mutable_c_string("CUR_SDN");
    goto cf_common_exit_0054C01C;
  case 0x34:
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 0x1b;
    pBVar4 = (BITMAPINFO *)0x24;
    pcVar3 = st::mutable_c_string("CUR_SRT");
    break;
  case 0x35:
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 0x1b;
    pBVar4 = (BITMAPINFO *)0x24;
    pcVar3 = st::mutable_c_string("CUR_SLT");
    goto cf_common_exit_0054C06F;
  case 0x36:
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 0x16;
    pBVar4 = (BITMAPINFO *)0x24;
    uVar2 = 0x32;
    pcVar3 = st::mutable_c_string("CUR_SLU");
    goto cf_common_exit_0054C01C;
  case 0x37:
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 0x16;
    pBVar4 = (BITMAPINFO *)0x24;
    pcVar3 = st::mutable_c_string("CUR_SRU");
    break;
  case 0x38:
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 0x20;
    pBVar4 = (BITMAPINFO *)0x24;
    pcVar3 = st::mutable_c_string("CUR_SLD");
cf_common_exit_0054C06F:
    /* ST_CALLSITE[0054C073]: CALL 0x0040376f; direct=0040376F CursorClassTy::SetImages */
    st::fn_0040376F(local_14,1,pcVar3,0x32,pBVar4,uVar5,iVar6,iVar7);
    /* ST_CALLSITE[0054C088]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  case 0x39:
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 0x20;
    pBVar4 = (BITMAPINFO *)0x24;
    uVar2 = 0x32;
    pcVar3 = st::mutable_c_string("CUR_SRD");
cf_common_exit_0054C01C:
    /* ST_CALLSITE[0054C020]: CALL 0x0040376f; direct=0040376F CursorClassTy::SetImages */
    st::fn_0040376F(local_14,1,pcVar3,uVar2,pBVar4,uVar5,iVar6,iVar7);
    /* ST_CALLSITE[0054C035]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
    iVar6 = param_1 - 0x3c;
    switch(iVar6) {
    case 0:
    case 1:
      local_c = (BITMAPINFO *)0x22;
      break;
    case 2:
    case 5:
    case 7:
      local_c = (BITMAPINFO *)0x3f;
      break;
    case 3:
    case 4:
    case 6:
      local_c = (BITMAPINFO *)0x5;
      break;
    default:
      goto switchD_0054c0ac_default;
    }
    switch(iVar6) {
    case 0:
    case 4:
    case 5:
      local_8 = 4;
      break;
    case 1:
    case 6:
    case 7:
      local_8 = 0x22;
      break;
    case 2:
    case 3:
      local_8 = 0x14;
    }
switchD_0054c0ac_default:
    iVar7 = -1;
    iVar6 = -1;
    pcVar3 = st::mutable_c_string("CUR_SNO");
    pBVar4 = local_c;
    uVar5 = local_8;
    break;
  case 0x46:
    /* ST_CALLSITE[0054C358]: CALL 0x0040376f; direct=0040376F CursorClassTy::SetImages */
    st::fn_0040376F(local_14,1,st::mutable_c_string("CUR_HYPER"),0x32,(BITMAPINFO *)0xd,0,0x1b,0xf);
    /* ST_CALLSITE[0054C36D]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  case 0x47:
    /* ST_CALLSITE[0054C397]: CALL 0x0040376f; direct=0040376F CursorClassTy::SetImages */
    st::fn_0040376F(local_14,1,st::mutable_c_string("CUR_HELPNO"),0x32,(BITMAPINFO *)0x1,1,0x1d,0x30);
    /* ST_CALLSITE[0054C3AC]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  case 0x48:
    iVar7 = 0x1e;
    iVar6 = 0x36;
    pcVar3 = st::mutable_c_string("CUR_HELPYES");
    pBVar4 = (BITMAPINFO *)0x20;
    uVar5 = 0x12;
  }
  /* ST_CALLSITE[0054C3D6]: CALL 0x0040376f; direct=0040376F CursorClassTy::SetImages */
  st::fn_0040376F(local_14,1,pcVar3,0x32,pBVar4,uVar5,iVar6,iVar7);
  /* ST_CALLSITE[0054C3EB]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
  st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
  g_currentExceptionFrame = local_58.previous;
  return 0;
}
