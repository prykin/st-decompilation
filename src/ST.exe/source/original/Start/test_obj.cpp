#include "st/generated.hpp"
// Generated translation unit: source/original/Start/test_obj.cpp

// 005E58D0 MTestTy::InitMTest
#line 1 "decomp/ST.exe/functions/005E58D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\test_obj.cpp
   MTestTy::InitMTest */

void __thiscall st::fn_005E58D0(MTestTy *this)

{
  CursorClassTy *this_00;
  MTestTy *this_01;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 local_44c [256];
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
        st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    puVar3 = (ushort *)st::fn_0070A9F0(g_cMf32_00806780,"LOADSINGLE",0,1);
    this_01 = local_8;
    local_8->field_005D = puVar3;
    st::fn_006BC360(puVar3,local_44c,nullptr);
    g_startSystem_0081176C->field_0140 = 0x1f;
    st::fn_00718780
              ((int)local_44c,0,0x100,0x8b,0x15,(undefined4 *)&g_startSystem_0081176C->field_0x144);
    memset(&this_01->field_0x61, 0, 0x20); /* compiler bulk-zero initialization */
    this_01->field_0071 = 0x13;
    this_01->field_0075 = this_01->field_0008;
    st::fn_006E6000(this_01,3,1,(undefined4 *)&this_01->field_0x61);
    if (g_startSystem_0081176C->field_02E6 != nullptr) {
      st::fn_00401FA5(g_startSystem_0081176C->field_02E6,0,0,1);
      st::fn_0040462E(g_startSystem_0081176C->field_02E6);
    }
    st::fn_00401D43(g_dDXContext_0080759C,1,0);
    st::fn_00403E7C(this_01);
    st::fn_0040448A((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                       (ushort *)this_01->field_005D,10,2);
    this_00 = g_cursorClass_00802A30;
    if (g_cursorClass_00802A30 != nullptr) {
      iVar2 = g_cursorClass_00802A30->field_00C9;
      iVar4 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      this_00->field_0494 = 0xffff;
      st::fn_0040507E(this_00,CASE_0,iVar4,iVar2);
      st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
      this_00->field_00D2 = 0;
      this_00->field_04DF = -1;
    }
    st::fn_00402DBF(1,this_01->field_0008,2,100,2,1,0,0,0,0,0,0);
    st::fn_00402DBF(1,this_01->field_0008,2,0x62,2,0x1c,0,0,0,0,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\test_obj.cpp",0x31,0,iVar2,"%s",
                             "MTestTy::InitMTest");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\Start\\test_obj.cpp",0x31);
  return;
}

// 005E5BA0 MTestTy::DoneMTest
#line 1 "decomp/ST.exe/functions/005E5BA0/decomp.c"
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
    st::fn_00402DBF(0,local_8->field_0008,2,100,2,1,0,0,0,0,0,0);
    st::fn_00402DBF(0,this_00->field_0008,2,0x62,2,0x1c,0,0,0,0,0,0);
    memset(&this_00->field_0x61, 0, 0x20); /* compiler bulk-zero initialization */
    this_00->field_0071 = 0x14;
    this_00->field_0075 = this_00->field_0008;
    st::fn_006E6000(this_00,3,1,(undefined4 *)&this_00->field_0x61);
    st::fn_006F20E0(g_cMf32_00806780,&this_00->field_005D);
    st::fn_00401D43(g_dDXContext_0080759C,10,2);
    if (g_holo_00811778 != nullptr) {
      st::fn_0040128A(g_holo_00811778);
      st::fn_0072E2B0(g_holo_00811778);
      g_holo_00811778 = nullptr;
    }
    if (this_00->field_0091 != 0) {
      st::fn_006E3B50((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->field_0x81);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\test_obj.cpp",0x4a,0,iVar2,"%s",
                             "MTestTy::DoneMTest");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\Start\\test_obj.cpp",0x4a);
  return;
}

// 005E5D50 MTestTy::PaintMTest
#line 1 "decomp/ST.exe/functions/005E5D50/decomp.c"
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
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
    st::fn_00403738(0,0,'\x01',(BITMAPINFO *)local_8->field_005D);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\Start\\test_obj.cpp",0x57,0,errorCode,
                             "%s","MTestTy::PaintMTest");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\test_obj.cpp",0x57);
  return;
}

// 005E5E30 MTestTy::NoneMTest
#line 1 "decomp/ST.exe/functions/005E5E30/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\test_obj.cpp
   MTestTy::NoneMTest */

void __thiscall st::fn_005E5E30(MTestTy *this)

{
  MTestTy *pMVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  MTestTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_00B3 == '\x01') {
      if (g_holo_00811778 != nullptr) {
        iVar3 = st::fn_004055F1(g_holo_00811778);
        if (iVar3 == 0) {
          pMVar2->field_00B3 = 4;
        }
      }
    }
    else if ((local_8->field_00B3 == '\x05') && (g_holo_00811778 != nullptr)) {
      iVar3 = st::fn_004055F1(g_holo_00811778);
      if (iVar3 == 0) {
        pMVar2->field_00B3 = 0;
        if (-1 < (int)*(uint *)&g_holo_00811778->field_0x3) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,*(uint *)&g_holo_00811778->field_0x3);
        }
      }
    }
    _DAT_00811774 = pMVar2->field_00A1;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\test_obj.cpp",0x6c,0,iVar3,"%s",
                             "MTestTy::NoneMTest");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\test_obj.cpp",0x6c);
  return;
}

// 005E5FB0 MTestTy::GetMessage
#line 1 "decomp/ST.exe/functions/005E5FB0/decomp.c"
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
  DWORD DVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  InternalExceptionFrame local_50;
  MTestTy *local_c;
  uint local_8;

  local_8 = 0xffffffff;
  local_c = this;
  DVar4 = st::fn_006E51B0(this->field_0010);
  this->field_00A1 = DVar4;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar5 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar5 == 0) {
    switch(message->id) {
    case MESS_ID_NONE:
      st::fn_00403710(local_c);
      break;
    case MESS_ID_CREATE:
      st::fn_00405312(local_c);
      break;
    case MESS_SHARED_0003:
      st::fn_00401145(local_c);
      break;
    case MESS_SHARED_0005:
      st::fn_00403E7C(local_c);
      break;
    case MESS_TRACKBARCLASSTY_0062:
      if (local_c->field_00B3 == '\0') {
        _DAT_00811774 = st::fn_006E51B0(local_c->field_0010);
        this_00->field_00B3 = 1;
        if (g_holo_00811778 != nullptr) {
          st::fn_0040128A(g_holo_00811778);
          st::fn_0072E2B0(g_holo_00811778);
          g_holo_00811778 = nullptr;
        }
        st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x403099,0xf9,0x123,
                     (ushort *)&g_startSystem_0081176C->field_0140);
        st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,10,0xb4);
        g_holo_00811778 = (HoloTy *)st::fn_0072E530(0x33);
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
          uVar9 = 0;
          cVar8 = '\x01';
          bVar7 = 0x10;
          iVar6 = 1;
          iVar5 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x123);
          st::fn_0040459D(g_holo_00811778,CASE_4,10,0xb4,iVar5,iVar6,bVar7,cVar8,uVar9);
          pHVar3 = g_holo_00811778;
          piVar1 = &g_holo_00811778->field_0013;
          g_holo_00811778->field_0002 = 1;
          pHVar3->field_0017 = *piVar1;
          if (-1 < (int)*(uint *)&g_holo_00811778->field_0x3) {
            st::fn_006B3430
                      ((int *)g_ddxContext_008075A8,*(uint *)&g_holo_00811778->field_0x3);
          }
        }
        if (local_8 != 0xffffffff) {
          st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
          local_8 = 0xffffffff;
        }
      }
      else if (local_c->field_00B3 == '\x04') {
        _DAT_00811774 = st::fn_006E51B0(local_c->field_0010);
        this_00->field_00B3 = 5;
        if (g_holo_00811778 != nullptr) {
          st::fn_0040128A(g_holo_00811778);
          st::fn_0072E2B0(g_holo_00811778);
          g_holo_00811778 = nullptr;
        }
        g_holo_00811778 = (HoloTy *)st::fn_0072E530(0x33);
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
          st::fn_006B5F80((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
          st::fn_00403099
                    ((MMMObjTy *)&g_startSystem_0081176C->field_0140,(int)g_dDXContext_0080759C,
                     nullptr,nullptr,10,0xb4,0xf9,0x123,
                     &g_startSystem_0081176C->field_0140);
          uVar9 = 0;
          cVar8 = '\x01';
          bVar7 = 0x10;
          iVar6 = 1;
          iVar5 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x123);
          st::fn_0040459D(g_holo_00811778,CASE_4,10,0xb4,iVar5,iVar6,bVar7,cVar8,uVar9);
          pHVar3 = g_holo_00811778;
          g_holo_00811778->field_0002 = 0;
          pHVar3->field_0017 = -1;
          if (-1 < (int)*(uint *)&g_holo_00811778->field_0x3) {
            st::fn_006B3430
                      ((int *)g_ddxContext_008075A8,*(uint *)&g_holo_00811778->field_0x3);
          }
          st::fn_006B5F80((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
          st::fn_00402298(10,0xb4,10,0xb4,0xf9,(byte *)0x123,'\x01',(BITMAPINFO *)this_00->field_005D);
        }
      }
      break;
    case MESS_SHARED_0064:
      st::fn_00401A19(local_c);
      this_00->field_008D = 1;
      this_00->field_0091 = 0x7102;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar5 = st::fn_006E5FD0(this_00,message);
    return iVar5;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar6 = st::fn_006AD4D0("E:\\__titans\\Start\\test_obj.cpp",0xb5,0,iVar5,"%s",
                             "MTestTy::GetMessage");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar5,0,"E:\\__titans\\Start\\test_obj.cpp",0xb5);
  return 0xffff;
}

