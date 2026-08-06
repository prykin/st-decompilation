#include "st/generated.hpp"
// Generated translation unit: source/original/Start/adv_obj.cpp

// 00590170 MAdvTy::InitMAdv
#line 4 "decomp/ST.exe/functions/00590170/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\adv_obj.cpp
   MAdvTy::InitMAdv */

void __thiscall st::fn_00590170(MAdvTy *this)

{
  int iVar1;
  CursorClassTy *this_00;
  MAdvTy *this_01;
  int iVar2;
  LPSTR text;
  ushort *puVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  InternalExceptionFrame local_4c;
  MAdvTy *local_8;

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
    this_01 = local_8;
    iVar6 = 1;
    bVar5 = 0;
    text = st::fn_006F2C00(&DAT_007cbc5c,1,(uint)(local_8->field_005D != '\0'));
    puVar3 = st::fn_0070A9F0(g_cMf32_00806780,text,bVar5,iVar6);
    this_01->field_005E = puVar3;
    memset(&this_01->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
    this_01->field_002C = this_01->field_0008;
    this_01->field_0028 = 0x13;
    st::fn_006E6000(this_01,3,1,(undefined4 *)&this_01->field_0x18);
    if (g_startSystem_0081176C->field_02E6 != nullptr) {
      st::fn_00401FA5(g_startSystem_0081176C->field_02E6,0,0,1);
      st::fn_0040462E(g_startSystem_0081176C->field_02E6);
    }
    st::fn_00401D43(g_dDXContext_0080759C,1,0);
    st::fn_00403AB2(this_01);
    st::fn_0040448A((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                       this_01->field_005E,10,2);
    this_00 = g_cursorClass_00802A30;
    if (g_cursorClass_00802A30 != nullptr) {
      iVar6 = g_cursorClass_00802A30->field_00C9;
      iVar1 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      this_00->field_0494 = 0xffff;
      st::fn_0040507E(this_00,CASE_0,iVar1,iVar6);
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
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\adv_obj.cpp",0x1f,0,iVar2,"%s",
                             "MAdvTy::InitMAdv");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\Start\\adv_obj.cpp",0x1f);
  return;
}

// 00590410 MAdvTy::DoneMAdv
#line 4 "decomp/ST.exe/functions/00590410/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\adv_obj.cpp
   MAdvTy::DoneMAdv */

void __thiscall st::fn_00590410(MAdvTy *this)

{
  MAdvTy *this_00;
  int iVar2;
  int iVar3;
  InternalExceptionFrame local_4c;
  MAdvTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    st::fn_00402DBF(0,local_8->field_0008,2,100,2,1,0,0,0,0,0,0);
    st::fn_00402DBF(0,this_00->field_0008,2,0x62,2,0x1c,0,0,0,0,0,0);
    memset(&this_00->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
    this_00->field_0028 = 0x14;
    this_00->field_002C = this_00->field_0008;
    st::fn_006E6000(this_00,3,1,(undefined4 *)&this_00->field_0x18);
    st::fn_006F20E0(g_cMf32_00806780,(uint *)&this_00->field_005E);
    st::fn_00401D43(g_dDXContext_0080759C,10,2);
    if (this_00->field_0048 != 0) {
      st::fn_006E3B50((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->field_0x38);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\adv_obj.cpp",0x36,0,iVar2,"%s",
                             "MAdvTy::DoneMAdv");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\Start\\adv_obj.cpp",0x36);
  return;
}

// 00590580 MAdvTy::PaintMAdv
#line 4 "decomp/ST.exe/functions/00590580/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\adv_obj.cpp
   MAdvTy::PaintMAdv

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00590580(MAdvTy *this)

{
  MAdvTy *pMVar2;
  int iVar3;
  char *pcVar3;
  int iVar5;
  StartServTy *this_00;
  StartServTy *this_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  StartServTy *extraout_ECX;
  StartServTy *this_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  StartServTy *extraout_ECX_00;
  StartServTy *this_03;
  int iVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ccFntTy *pcVar11;
  uint uVar12;
  InternalExceptionFrame local_4c;
  MAdvTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar3 == 0) {
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
    pMVar2 = local_8;
    st::fn_00403738(0,0,'\x01',(BITMAPINFO *)local_8->field_005E);
    pcVar11 = g_startSystem_0081176C->field_0030;
    uVar12 = 1;
    uVar10 = 0xffffffff;
    if (pMVar2->field_005D == '\0') {
      uVar9 = 0xfffffffe;
      pcVar3 = st::fn_006B0140(0x25e4,g_hINSTANCE_00807618);
      st::fn_00404C2D(this_02,0,0,0x1b8,800,0x14,pcVar3,uVar9,uVar10,pcVar11,uVar12);
      pcVar11 = g_startSystem_0081176C->field_0030;
      uVar9 = 1;
      uVar12 = 0xffffffff;
      uVar10 = 0xffffffff;
      pcVar3 = st::fn_006B0140(0x25e8,g_hINSTANCE_00807618);
      iVar8 = 0x8c;
      iVar7 = 800;
      iVar6 = 0x1cc;
      iVar4 = 0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_03 = extraout_ECX_00;
    }
    else {
      uVar9 = 0xffffffff;
      pcVar3 = st::fn_006B0140(0x25e5,g_hINSTANCE_00807618);
      st::fn_00404C2D(this_00,0,10,10,0x30c,0x32,pcVar3,uVar9,uVar10,pcVar11,uVar12);
      pcVar11 = g_startSystem_0081176C->field_0030;
      uVar9 = 1;
      uVar12 = 0xffffffff;
      uVar10 = 0;
      pcVar3 = st::fn_006B0140(0x25e6,g_hINSTANCE_00807618);
      st::fn_00404C2D(this_01,0,0x10e,0x3c,0x20d,0xfa,pcVar3,uVar10,uVar12,pcVar11,uVar9);
      pcVar11 = g_startSystem_0081176C->field_0030;
      uVar9 = 1;
      uVar12 = 0xffffffff;
      uVar10 = 0;
      pcVar3 = st::fn_006B0140(0x25e7,g_hINSTANCE_00807618);
      iVar8 = 0xe6;
      iVar7 = 0x302;
      iVar6 = 0x172;
      iVar4 = 0x14;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_03 = extraout_ECX;
    }
    st::fn_00404C2D(this_03,0,iVar4,iVar6,iVar7,iVar8,pcVar3,uVar10,uVar12,pcVar11,uVar9);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = st::fn_006AD4D0("E:\\__titans\\Start\\adv_obj.cpp",0x4d,0,iVar3,"%s",
                             "MAdvTy::PaintMAdv");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\adv_obj.cpp",0x4d);
  return;
}

// 005907D0 MAdvTy::NoneMAdv
#line 4 "decomp/ST.exe/functions/005907D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\adv_obj.cpp
   MAdvTy::NoneMAdv */

void __thiscall st::fn_005907D0(MAdvTy *this)

{
  InternalExceptionFrame *pIVar2;
  int errorCode;
  int iVar3;
  int local_44 [16];

  pIVar2 = g_currentExceptionFrame;
  errorCode = st::fn_0072D7F0(local_44,0);
  if (errorCode == 0) {
    g_currentExceptionFrame = pIVar2;
    return;
  }
  g_currentExceptionFrame = pIVar2;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\adv_obj.cpp",0x57,0,errorCode,"%s"
                             ,"MAdvTy::NoneMAdv");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\adv_obj.cpp",0x57);
  return;
}

// 005908B0 MAdvTy::GetMessage
#line 4 "decomp/ST.exe/functions/005908B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\adv_obj.cpp
   MAdvTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005908B0; family_names=MAdvTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:2,18:0,1c:0} */

int __thiscall st::fn_005908B0(MAdvTy *this,STMessage *message)

{
  MAdvTy *this_00;
  DWORD DVar2;
  int local_EAX_47;
  int iVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_4c;
  MAdvTy *local_8;

  local_8 = this;
  DVar2 = st::fn_006E51B0(this->field_0010);
  this->field_0058 = DVar2;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_EAX_47 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (local_EAX_47 == 0) {
    switch(message->id) {
    case MESS_ID_NONE:
      st::fn_004058D5(local_8);
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case MESS_ID_CREATE:
      local_8->field_005D = *(undefined1 *)((message->arg0).u32 + 0x14);
      st::fn_00405E25(local_8);
      break;
    case MESS_SHARED_0003:
      st::fn_00402CC0(local_8);
      break;
    case MESS_SHARED_0005:
      st::fn_00403AB2(local_8);
      break;
    case MESS_TRACKBARCLASSTY_0062:
    case MESS_SHARED_0064:
      st::fn_00403378(local_8);
      if (this_00->field_005D == '\0') {
        this_00->field_0040 = 0x200;
        this_00->field_0044 = 0;
        this_00->field_0048 = 0x6102;
      }
      else {
        this_00->field_0044 = 1;
        this_00->field_0048 = 0x7102;
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006E5FD0(this_00,message);
    return iVar3;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\adv_obj.cpp",0x87,0,local_EAX_47,
                             "%s","MAdvTy::GetMessage");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(local_EAX_47,0,"E:\\__titans\\Start\\adv_obj.cpp",0x87);
  return 0xffff;
}

