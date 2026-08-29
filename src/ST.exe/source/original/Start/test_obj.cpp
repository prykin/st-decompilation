#include "st/generated.hpp"
// Generated translation unit: source/original/Start/test_obj.cpp

// 005E58D0 MTestTy::InitMTest
#line 4 "decomp/ST.exe/functions/005E58D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\test_obj.cpp
   MTestTy::InitMTest */

void __thiscall st::fn_005E58D0(MTestTy *this)

{
  int iVar1;
  CursorClassTy *this_00;
  MTestTy *this_01;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  uint local_44c [256];
  InternalExceptionFrame local_4c;
  MTestTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        st::fn_006B3AF0(reinterpret_cast<int *>(g_cursorClass_00802A30->field_0060),g_cursorClass_00802A30->field_001C);
      }
    }
    puVar3 = st::fn_0070A9F0(g_cMf32_00806780,st::mutable_c_string("LOADSINGLE"),0,1);
    this_01 = local_8;
    local_8->field_005D = puVar3;
    st::fn_006BC360(puVar3,local_44c,nullptr);
    g_startSystem_0081176C->field_0140 = 0x1f;
    st::fn_00718780
              ((int)local_44c,0,0x100,0x8b,0x15,reinterpret_cast<undefined4 *>(&g_startSystem_0081176C->field_0x144));
    memset(&this_01->field_0x61, 0, 0x20); /* compiler bulk-zero initialization */
    this_01->field_0071 = 0x13;
    this_01->field_0075 = this_01->field_0008;
    st::fn_006E6000(this_01,3,1,reinterpret_cast<undefined4 *>(&this_01->field_0x61));
    if (g_startSystem_0081176C->field_02E6 != nullptr) {
      /* ST_CALLSITE[005E59DC]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
      st::fn_00401FA5(g_startSystem_0081176C->field_02E6,0,0,1);
      /* ST_CALLSITE[005E59ED]: CALL 0x0040462e; direct=0040462E MMsgTy::HideSprites */
      st::fn_0040462E(g_startSystem_0081176C->field_02E6);
    }
    /* ST_CALLSITE[005E59FC]: CALL 0x00401d43; direct=00401D43 DarkScreen */
    st::fn_00401D43(g_dDXContext_0080759C,1,0);
    /* ST_CALLSITE[005E5A06]: CALL 0x00403e7c; direct=00403E7C MTestTy::PaintMTest */
    st::fn_00403E7C(this_01);
    st::fn_0040448A(reinterpret_cast<undefined4 *>(g_dDXContext_0080759C),reinterpret_cast<int *>(g_ddxContext_008075A8),
                       this_01->field_005D,10,2);
    this_00 = g_cursorClass_00802A30;
    if (g_cursorClass_00802A30 != nullptr) {
      iVar5 = g_cursorClass_00802A30->field_00C9;
      iVar1 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      this_00->field_0494 = 0xffff;
      /* ST_CALLSITE[005E5A56]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      st::fn_0040507E(this_00,CASE_0,iVar1,iVar5);
      /* ST_CALLSITE[005E5A6B]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
      this_00->field_00D2 = 0;
      this_00->field_04DF = -1;
    }
    /* ST_CALLSITE[005E5A9B]: CALL 0x00402dbf; direct=00402DBF SetAccelerator */
    st::fn_00402DBF(1,this_01->field_0008,2,100,2,1,0,0,0,0,0,0);
    /* ST_CALLSITE[005E5ABA]: CALL 0x00402dbf; direct=00402DBF SetAccelerator */
    st::fn_00402DBF(1,this_01->field_0008,2,0x62,2,0x1c,0,0,0,0,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\test_obj.cpp"),0x31,0,iVar2,st::mutable_c_string("%s"),
                             "MTestTy::InitMTest");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Start\\test_obj.cpp"),0x31);
  return;
}

// 005E5BA0 MTestTy::DoneMTest
#line 4 "decomp/ST.exe/functions/005E5BA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\test_obj.cpp
   MTestTy::DoneMTest */

void __thiscall st::fn_005E5BA0(MTestTy *this)

{
  MTestTy *this_00;
  int iVar2;
  int iVar3;
  InternalExceptionFrame local_4c;
  MTestTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    /* ST_CALLSITE[005E5BEB]: CALL 0x00402dbf; direct=00402DBF SetAccelerator */
    st::fn_00402DBF(0,local_8->field_0008,2,100,2,1,0,0,0,0,0,0);
    /* ST_CALLSITE[005E5C0A]: CALL 0x00402dbf; direct=00402DBF SetAccelerator */
    st::fn_00402DBF(0,this_00->field_0008,2,0x62,2,0x1c,0,0,0,0,0,0);
    memset(&this_00->field_0x61, 0, 0x20); /* compiler bulk-zero initialization */
    this_00->field_0071 = 0x14;
    this_00->field_0075 = this_00->field_0008;
    st::fn_006E6000(this_00,3,1,reinterpret_cast<undefined4 *>(&this_00->field_0x61));
    st::fn_006F20E0(g_cMf32_00806780,reinterpret_cast<uint *>(&this_00->field_005D));
    /* ST_CALLSITE[005E5C53]: CALL 0x00401d43; direct=00401D43 DarkScreen */
    st::fn_00401D43(g_dDXContext_0080759C,10,2);
    if (g_holo_00811778 != nullptr) {
      /* ST_CALLSITE[005E5C65]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(g_holo_00811778);
      st::fn_0072E2B0(g_holo_00811778);
      g_holo_00811778 = nullptr;
    }
    if (this_00->field_0091 != 0) {
      st::fn_006E3B50(reinterpret_cast<AppClassTy *>(&DAT_00807620),reinterpret_cast<undefined4 *>(&this_00->field_0x81));
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\test_obj.cpp"),0x4a,0,iVar2,st::mutable_c_string("%s"),
                             "MTestTy::DoneMTest");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Start\\test_obj.cpp"),0x4a);
  return;
}

// 005E5D50 MTestTy::PaintMTest
#line 4 "decomp/ST.exe/functions/005E5D50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\test_obj.cpp
   MTestTy::PaintMTest

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005E5D50(MTestTy *this)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  MTestTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    st::fn_006B5F80(reinterpret_cast<int *>(g_ddxContext_008075A8),0,0,g_nWidth_00806730,DAT_00806734);
    /* ST_CALLSITE[005E5DA5]: CALL 0x00403738; direct=00403738 PutDDX */
    st::fn_00403738(0,0,'\x01',reinterpret_cast<BITMAPINFO *>(local_8->field_005D));
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\test_obj.cpp"),0x57,0,errorCode,
                             st::mutable_c_string("%s"),"MTestTy::PaintMTest");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\test_obj.cpp"),0x57);
  return;
}

// 005E5E30 MTestTy::NoneMTest
#line 4 "decomp/ST.exe/functions/005E5E30/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\test_obj.cpp
   MTestTy::NoneMTest

   [STSwitchEnumApplier] Switch target field_00B3 uses
   /SubmarineTitans/Recovered/Enums/MTestTy_field_00B3State. Cases: CASE_1=1;CASE_4=4;CASE_5=5 */

void __thiscall st::fn_005E5E30(MTestTy *this)

{
  MTestTy *pMVar2;
  int iVar3;
  int iVar5;
  int iVar4;
  InternalExceptionFrame local_4c;
  MTestTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_00B3 == CASE_1) {
      if (g_holo_00811778 != nullptr) {
        /* ST_CALLSITE[005E5EAD]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        iVar5 = st::fn_004055F1(g_holo_00811778);
        if (iVar5 == 0) {
          pMVar2->field_00B3 = CASE_4;
        }
      }
    }
    else if ((local_8->field_00B3 == CASE_5) && (g_holo_00811778 != nullptr)) {
      /* ST_CALLSITE[005E5E7A]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar5 = st::fn_004055F1(g_holo_00811778);
      if (iVar5 == 0) {
        pMVar2->field_00B3 = 0;
        if (-1 < (int)*(uint *)&g_holo_00811778->field_0x3) {
          st::fn_006B3AF0(reinterpret_cast<int *>(g_ddxContext_008075A8),*(uint *)&g_holo_00811778->field_0x3);
        }
      }
    }
    _DAT_00811774 = pMVar2->field_00A1;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\test_obj.cpp"),0x6c,0,iVar3,st::mutable_c_string("%s"),
                             "MTestTy::NoneMTest");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\test_obj.cpp"),0x6c);
  return;
}

// 005E5FB0 MTestTy::GetMessage
#line 4 "decomp/ST.exe/functions/005E5FB0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\test_obj.cpp
   MTestTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005E5FB0; family_names=MTestTy::GetMessage; ret4=2;
   direct_offsets={10:4,14:0,18:0,1c:0} */

int __thiscall st::fn_005E5FB0(MTestTy *this,STMessage *message)

{
  int *piVar1;
  HoloTy *pHVar3;
  MTestTy *this_00;
  int iVar4;
  int local_EAX_59;
  RecoveredRecord_005AACB0_2533FD69 *pRVar5;
  int iVar5;
  int iVar6;
  byte bVar6;
  char cVar7;
  uint uVar8;
  InternalExceptionFrame local_50;
  MTestTy *local_c;
  uint local_8;

  local_8 = 0xffffffff;
  local_c = this;

  iVar4 = st::fn_006E51B0(this->field_0010);
  this->field_00A1 = iVar4;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;

  local_EAX_59 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (local_EAX_59 == 0) {
    switch(message->id) {
    case MESS_ID_NONE:
      /* ST_CALLSITE[005E6044]: CALL 0x00403710; direct=00403710 MTestTy::NoneMTest */
      st::fn_00403710(local_c);
      break;
    case MESS_ID_CREATE:
      /* ST_CALLSITE[005E6020]: CALL 0x00405312; direct=00405312 MTestTy::InitMTest */
      st::fn_00405312(local_c);
      break;
    case MESS_SHARED_0003:
      /* ST_CALLSITE[005E602C]: CALL 0x00401145; direct=00401145 MTestTy::DoneMTest */
      st::fn_00401145(local_c);
      break;
    case MESS_SHARED_0005:
      /* ST_CALLSITE[005E6038]: CALL 0x00403e7c; direct=00403E7C MTestTy::PaintMTest */
      st::fn_00403E7C(local_c);
      break;
    case MESS_TRACKBARCLASSTY_0062:
      if (local_c->field_00B3 == 0) {

        _DAT_00811774 = st::fn_006E51B0(local_c->field_0010);
        this_00->field_00B3 = CASE_1;
        if (g_holo_00811778 != nullptr) {
          /* ST_CALLSITE[005E6203]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
          st::fn_0040128A(g_holo_00811778);
          st::fn_0072E2B0(g_holo_00811778);
          g_holo_00811778 = nullptr;
        }

        st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x403099,0xf9,0x123,
                     reinterpret_cast<ushort *>(&g_startSystem_0081176C->field_0140));

        st::fn_006B3640(reinterpret_cast<int *>(g_ddxContext_008075A8),local_8,0xffffffff,10,0xb4);
        /* ST_CALLSITE[005E6267]: CALL 0x0072e530; direct=0072E530 Library::MSVCRT::FUN_0072e530; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/HoloTy; signature=__cdecl;pointer:/HoloTy;/uint */
        g_holo_00811778 = st::pointer_boundary_cast<HoloTy *>(st::fn_0072E530(0x33));
        if (g_holo_00811778 == nullptr) {
          g_holo_00811778 = nullptr;
        }
        else {
          g_holo_00811778->field_0002 = 1;
          g_holo_00811778->field_0000 = 0;
          *(undefined4 *)&g_holo_00811778->field_0x3 = 0xffffffff;
          g_holo_00811778->field_0001 = CASE_2;
          g_holo_00811778->field_0007 = nullptr;
          g_holo_00811778->field_000B = nullptr;
          g_holo_00811778->field_000F = 0;
          *(undefined4 *)&g_holo_00811778->field_0x1b = 1;
          g_holo_00811778->field_0013 = 1;
          g_holo_00811778->field_0017 = -1;
          g_holo_00811778->field_0027 = 0;
          g_holo_00811778->field_0023 = 0;
          g_holo_00811778->field_002F = 1;
          g_holo_00811778->field_002B = 1;
        }
        if (g_holo_00811778 != nullptr) {
          uVar8 = 0;
          cVar7 = '\x01';
          bVar6 = 0x10;
          iVar4 = 1;
          /* ST_CALLSITE[005E62D7]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
          pRVar5 = st::pointer_boundary_cast<RecoveredRecord_005AACB0_2533FD69 *>(st::fn_006BF9F0(reinterpret_cast<int *>(g_ddxContext_008075A8),10,0xb4,0xf9,0x123));
          /* ST_CALLSITE[005E62EC]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
          st::fn_0040459D(g_holo_00811778,CASE_4,10,0xb4,pRVar5,iVar4,bVar6,cVar7,uVar8);
          pHVar3 = g_holo_00811778;
          piVar1 = &g_holo_00811778->field_0013;
          g_holo_00811778->field_0002 = 1;
          pHVar3->field_0017 = *piVar1;
          if (-1 < (int)*(uint *)&g_holo_00811778->field_0x3) {

            st::fn_006B3430
                      (reinterpret_cast<int *>(g_ddxContext_008075A8),*(uint *)&g_holo_00811778->field_0x3);
          }
        }
        if (local_8 != 0xffffffff) {
          st::fn_006B3BB0(reinterpret_cast<int *>(g_ddxContext_008075A8),local_8);
          local_8 = 0xffffffff;
        }
      }
      else if (local_c->field_00B3 == CASE_4) {

        _DAT_00811774 = st::fn_006E51B0(local_c->field_0010);
        this_00->field_00B3 = CASE_5;
        if (g_holo_00811778 != nullptr) {
          /* ST_CALLSITE[005E6082]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
          st::fn_0040128A(g_holo_00811778);
          st::fn_0072E2B0(g_holo_00811778);
          g_holo_00811778 = nullptr;
        }
        /* ST_CALLSITE[005E609E]: CALL 0x0072e530; direct=0072E530 Library::MSVCRT::FUN_0072e530; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/HoloTy; signature=__cdecl;pointer:/HoloTy;/uint */
        g_holo_00811778 = st::pointer_boundary_cast<HoloTy *>(st::fn_0072E530(0x33));
        if (g_holo_00811778 == nullptr) {
          g_holo_00811778 = nullptr;
        }
        else {
          g_holo_00811778->field_0002 = 1;
          g_holo_00811778->field_0000 = 0;
          *(undefined4 *)&g_holo_00811778->field_0x3 = 0xffffffff;
          g_holo_00811778->field_0001 = CASE_2;
          g_holo_00811778->field_0007 = nullptr;
          g_holo_00811778->field_000B = nullptr;
          g_holo_00811778->field_000F = 0;
          *(undefined4 *)&g_holo_00811778->field_0x1b = 1;
          g_holo_00811778->field_0013 = 1;
          g_holo_00811778->field_0017 = -1;
          g_holo_00811778->field_0027 = 0;
          g_holo_00811778->field_0023 = 0;
          g_holo_00811778->field_002F = 1;
          g_holo_00811778->field_002B = 1;
        }
        if (g_holo_00811778 != nullptr) {
          st::fn_006B5F80(reinterpret_cast<int *>(g_ddxContext_008075A8),10,0xb4,0xf9,0x121);
          /* ST_CALLSITE[005E613B]: CALL 0x00403099; direct=00403099 MMMObjTy::OutRGlProc */
          st::fn_00403099
                    (reinterpret_cast<MMMObjTy *>(&g_startSystem_0081176C->field_0140),(int)g_dDXContext_0080759C,
                     nullptr,nullptr,10,0xb4,0xf9,0x123,
                     &g_startSystem_0081176C->field_0140);
          uVar8 = 0;
          cVar7 = '\x01';
          bVar6 = 0x10;
          iVar4 = 1;
          /* ST_CALLSITE[005E615C]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
          pRVar5 = st::pointer_boundary_cast<RecoveredRecord_005AACB0_2533FD69 *>(st::fn_006BF9F0(reinterpret_cast<int *>(g_ddxContext_008075A8),10,0xb4,0xf9,0x123));
          /* ST_CALLSITE[005E6171]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
          st::fn_0040459D(g_holo_00811778,CASE_4,10,0xb4,pRVar5,iVar4,bVar6,cVar7,uVar8);
          pHVar3 = g_holo_00811778;
          g_holo_00811778->field_0002 = 0;
          pHVar3->field_0017 = -1;
          if (-1 < (int)*(uint *)&g_holo_00811778->field_0x3) {

            st::fn_006B3430
                      (reinterpret_cast<int *>(g_ddxContext_008075A8),*(uint *)&g_holo_00811778->field_0x3);
          }
          st::fn_006B5F80(reinterpret_cast<int *>(g_ddxContext_008075A8),10,0xb4,0xf9,0x121);
          /* ST_CALLSITE[005E61D8]: CALL 0x00402298; direct=00402298 PutDDXClip */
          st::fn_00402298(10,0xb4,10,0xb4,0xf9,(byte *)0x123,'\x01',reinterpret_cast<BITMAPINFO *>(this_00->field_005D));
        }
      }
      break;
    case MESS_SHARED_0064:
      /* ST_CALLSITE[005E6333]: CALL 0x00401a19; direct=00401A19 MTestTy::sub_005E5F60 */
      st::fn_00401A19(local_c);
      this_00->field_008D = 1;
      this_00->field_0091 = 0x7102;
    }
    g_currentExceptionFrame = local_50.previous;

    iVar5 = st::fn_006E5FD0(this_00,message);
    return iVar5;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\test_obj.cpp"),0xb5,0,local_EAX_59,
                             st::mutable_c_string("%s"),"MTestTy::GetMessage");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(local_EAX_59,0,st::mutable_c_string("E:\\__titans\\Start\\test_obj.cpp"),0xb5);
  return 0xffff;
}
