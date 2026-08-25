#include "st/generated.hpp"
// Generated translation unit: source/original/Start/fsgs_obj.cpp

// 00594B90 FSGSTy::OutChSlProc
#line 4 "decomp/ST.exe/functions/00594B90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::OutChSlProc

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00596CC0 -> 00594B90 @ 00596E99 */

void __thiscall
st::fn_00594B90(FSGSTy *this,AnonShape_GLOBAL_0080759C_9638EF10 *param_1,undefined4 param_2,
                   undefined4 param_3,int param_4,int param_5,int param_6,int param_7,
                   undefined4 *param_8)

{
  uint *puVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_50;
  int local_c;
  undefined4 *local_8;

  if (param_8 != nullptr) {
    local_8 = param_8;
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
    puVar2 = local_8;
    if (errorCode == 0) {
      st::fn_006C68F0(param_1,param_4,param_5,param_6,param_7,(int)(local_8 + 1));
      st::fn_006C6850((int)param_1,param_4,param_5,param_6,param_7,*puVar2);
      st::fn_006C6660
                ((DDXContext *)param_1,param_4 + -0x15 + param_6,param_5 + 0x26,7,param_7 - 0x62,3,0
                );
      st::fn_006C6470
                ((int)param_1,param_4 + -0x15 + param_6,param_5 + 0x26,(undefined4 *)0x7,
                 param_7 + -0x62,3,*puVar2);
      local_c = param_5 + -0x16 + param_7;
      st::fn_006C53B0
                ((int)param_1,param_4,local_c,param_4 + -1 + param_6,local_c,*puVar2);
      st::fn_006C53B0
                ((int)param_1,param_4 + 0x168,local_c,param_4 + 0x168,param_5 + -1 + param_7,*puVar2
                );
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x66,0,errorCode,
                               st::mutable_c_string("%s"),"FSGSTy::OutChSlProc");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x66);
  }
  return;
}

// 00594D40 FSGSTy::OutTRGlProc
#line 4 "decomp/ST.exe/functions/00594D40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::OutTRGlProc

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00594D40 parameter used as this of MMMObjTy::OutRGlProc @ 00594DAA

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00594D40 parameter used as this of MMMObjTy::OutRGlProc @ 00594DCB

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_00594D40(FSGSTy *this,int param_1,MMMObjTy *param_2,MMMObjTy *param_3,int param_4,
                   int param_5,int param_6,int param_7,UINT param_8)

{
  int errorCode;
  char *resourceString;
  int iVar2;
  StartServTy *this_00;
  uint uVar3;
  uint uVar4;
  ccFntTy *pcVar5;
  uint uVar6;
  InternalExceptionFrame local_48;

  if (param_8 != 0) {
    local_48.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_48;
    errorCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
    if (errorCode == 0) {
      /* ST_CALLSITE[00594DAA]: CALL 0x00403099; direct=00403099 MMMObjTy::OutRGlProc */
      st::fn_00403099
                (param_2,param_1,param_2,param_3,param_4,param_5 + 0x16,param_6,param_7 + -0x16,
                 &g_startSystem_0081176C->field_0140);
      /* ST_CALLSITE[00594DCB]: CALL 0x00403099; direct=00403099 MMMObjTy::OutRGlProc */
      st::fn_00403099
                (param_3,param_1,param_2,param_3,param_4,param_5,param_6,0x15,
                 &g_startSystem_0081176C->field_0140);
      uVar6 = 0;
      pcVar5 = g_startSystem_0081176C->field_0034;
      uVar4 = 0xffffffff;
      uVar3 = 0xfffffffe;
      resourceString = st::fn_006B0140(param_8,g_hINSTANCE_00807618);
      /* ST_CALLSITE[00594DF7]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
      st::fn_00404C2D
                (this_00,0,param_4,param_5,param_6,0x15,resourceString,uVar3,uVar4,pcVar5,uVar6);
      g_currentExceptionFrame = local_48.previous;
      return;
    }
    g_currentExceptionFrame = local_48.previous;
    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x73,0,errorCode,
                               st::mutable_c_string("%s"),"FSGSTy::OutTRGlProc");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x73);
  }
  return;
}

// 00594EB0 FSGSTy::OutTRGlProc
#line 4 "decomp/ST.exe/functions/00594EB0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::OutTRGlProc

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00594EB0 parameter used as this of MMMObjTy::OutRGlProc @ 0059501F

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00594EB0 parameter used as this of MMMObjTy::OutRGlProc @ 00594F17

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00594EB0 parameter used as this of StartServTy::WrTextDDX @ 005950C4

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00596CC0 -> 00594EB0 @ 00596EDD */

void __thiscall
st::fn_00594EB0(FSGSTy *this,AnonShape_GLOBAL_0080759C_9638EF10 *param_1,MMMObjTy *param_2,
                   MMMObjTy *param_3,StartServTy *param_4,int param_5,int param_6,int param_7,
                   int param_8)

{
  StartServTy *this_00;
  int errorCode;
  char *pcVar2;
  int iVar3;
  StartServTy *this_01;
  StartServTy *this_02;
  uint uVar4;
  uint uVar5;
  ccFntTy *pcVar6;
  uint uVar7;
  InternalExceptionFrame local_4c;
  StartServTy *local_8;

  if (param_8 != 0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (errorCode == 0) {
      /* ST_CALLSITE[00594F17]: CALL 0x00403099; direct=00403099 MMMObjTy::OutRGlProc */
      st::fn_00403099
                (param_3,(int)param_1,param_2,param_3,(int)param_4,param_5,param_6,param_7 + -0x5f,
                 &g_startSystem_0081176C->field_0140);
      local_8 = param_4 + param_6 + -0x15;
      st::fn_006C6660
                ((DDXContext *)param_1,(int)local_8,param_5 + 0x26,7,param_7 - 0xab,3,0);
      st::fn_006C6470
                ((int)param_1,(int)local_8,param_5 + 0x26,(undefined4 *)0x7,param_7 + -0xab,3,
                 g_startSystem_0081176C->field_0140);
      uVar7 = 2;
      pcVar6 = g_startSystem_0081176C->field_0034;
      uVar5 = 0xffffffff;
      uVar4 = 0xffffffff;
      pcVar2 = st::fn_006B0140(0x2616,g_hINSTANCE_00807618);
      /* ST_CALLSITE[00594F9E]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
      st::fn_00404C2D
                (this_01,0,(int)(param_4 + 10),param_5 + 0xf8,0xe6,0x19,pcVar2,uVar4,uVar5,pcVar6,
                 uVar7);
      st::fn_006C6470
                ((int)param_1,(int)(param_4 + 10),param_5 + 0xf8,(undefined4 *)0xe6,0x19,4,
                 g_startSystem_0081176C->field_0140);
      st::fn_006C6470
                ((int)param_1,(int)(param_4 + 0xc),param_5 + 0xfa,(undefined4 *)0xe2,0x15,4,
                 g_startSystem_0081176C->field_0140);
      /* ST_CALLSITE[0059501F]: CALL 0x00403099; direct=00403099 MMMObjTy::OutRGlProc */
      st::fn_00403099
                (param_2,(int)param_1,param_2,param_3,(int)param_4,param_5 + -0x5c + param_7,param_6
                 ,0x5c,&g_startSystem_0081176C->field_0140);
      local_8 = (StartServTy *)(param_6 + -0x14);
      uVar7 = 2;
      pcVar6 = g_startSystem_0081176C->field_0034;
      uVar5 = 0xffffffff;
      uVar4 = 0;
      pcVar2 = st::fn_006B0140(0x2569,g_hINSTANCE_00807618);
      this_00 = (StartServTy *)(param_5 + -0x57 + param_7);
      /* ST_CALLSITE[00595062]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
      st::fn_00404C2D
                (this_00,0,(int)(param_4 + 10),(int)this_00,(int)local_8,0xf,pcVar2,uVar4,uVar5,
                 pcVar6,uVar7);
      st::fn_006C6850((int)param_1,(int)(param_4 + 10),param_5 + -0x46 + param_7,(int)local_8,0x16,
                   g_startSystem_0081176C->field_0140);
      uVar7 = 2;
      pcVar6 = g_startSystem_0081176C->field_0034;
      uVar5 = 0xffffffff;
      uVar4 = 0;
      pcVar2 = st::fn_006B0140(0x2550,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005950C4]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
      st::fn_00404C2D
                (param_4,0,(int)(param_4 + 10),param_5 + -0x2f + param_7,(int)local_8,0xf,pcVar2,
                 uVar4,uVar5,pcVar6,uVar7);
      st::fn_006C6850((int)param_1,(int)(param_4 + 10),param_5 + -0x1e + param_7,100,0x16,
                   g_startSystem_0081176C->field_0140);
      uVar7 = 2;
      pcVar6 = g_startSystem_0081176C->field_0034;
      uVar5 = 0xffffffff;
      uVar4 = 0xffffffff;
      pcVar2 = st::fn_006B0140(0x2566,g_hINSTANCE_00807618);
      /* ST_CALLSITE[00595127]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
      st::fn_00404C2D
                (this_02,0,(int)(param_4 + 0x78),param_5 + 0x155,0xa0,0x19,pcVar2,uVar4,uVar5,pcVar6
                 ,uVar7);
      st::fn_006C6470
                ((int)param_1,(int)(param_4 + 0x78),param_5 + 0x155,(undefined4 *)0xa0,0x19,4,
                 g_startSystem_0081176C->field_0140);
      st::fn_006C6470
                ((int)param_1,(int)(param_4 + 0x7a),param_5 + 0x157,(undefined4 *)0x9c,0x15,4,
                 g_startSystem_0081176C->field_0140);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x8c,0,errorCode,
                               st::mutable_c_string("%s"),"FSGSTy::OutTRGlProc");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x8c);
  }
  return;
}

// 005952B0 FSGSTy::OutSGlProc
#line 4 "decomp/ST.exe/functions/005952B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::OutSGlProc

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 005952B0 parameter used as this of MMMObjTy::OutRGlProc @ 00595314

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00596CC0 -> 005952B0 @ 00596F2C

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 005952B0 -> 005B67A0 @ 00595314 */

void __thiscall
st::fn_005952B0(FSGSTy *this,AnonShape_GLOBAL_0080759C_9638EF10 *param_1,MMMObjTy *param_2,
                  MMMObjTy *param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

{
  int iVar2;
  char *pcVar2;
  int iVar3;
  StartServTy *this_00;
  StartServTy *this_01;
  StartServTy *this_02;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ccFntTy *pcVar7;
  uint uVar8;
  InternalExceptionFrame local_50;
  int local_c;
  undefined4 *local_8;

  if (param_8 != 0) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
    if (iVar2 == 0) {
      /* ST_CALLSITE[00595314]: CALL 0x00403099; direct=00403099 MMMObjTy::OutRGlProc */
      st::fn_00403099
                (param_2,(int)param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                 &g_startSystem_0081176C->field_0140);
      uVar8 = 2;
      iVar4 = param_4 + 10;
      pcVar7 = g_startSystem_0081176C->field_0034;
      uVar6 = 0xffffffff;
      uVar5 = 0;
      pcVar2 = st::fn_006B0140(0x256f,g_hINSTANCE_00807618);
      /* ST_CALLSITE[0059534E]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
      st::fn_00404C2D
                (this_00,0,iVar4,param_5 + 10,param_6 + -0x14,0x14,pcVar2,uVar5,uVar6,pcVar7,uVar8);
      st::fn_006C6850((int)param_1,iVar4,param_5 + 0x1e,param_6 + -0x14,0x8e,
                   g_startSystem_0081176C->field_0140);
      uVar8 = 2;
      pcVar7 = g_startSystem_0081176C->field_0034;
      uVar6 = 0xffffffff;
      uVar5 = 0;
      pcVar2 = st::fn_006B0140(0x256b,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005953AF]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
      st::fn_00404C2D
                (this_01,0,iVar4,param_5 + 0xb4,param_6 + -0x14,0x14,pcVar2,uVar5,uVar6,pcVar7,uVar8
                );
      st::fn_006C6850((int)param_1,iVar4,param_5 + 200,param_6 + -0x14,0x19,
                   g_startSystem_0081176C->field_0140);
      uVar8 = 2;
      pcVar7 = g_startSystem_0081176C->field_0034;
      uVar6 = 0xffffffff;
      uVar5 = 0;
      pcVar2 = st::fn_006B0140(0x256c,g_hINSTANCE_00807618);
      /* ST_CALLSITE[00595410]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
      st::fn_00404C2D
                (this_02,0,iVar4,param_5 + 0xe1,param_6 + -0x14,0x14,pcVar2,uVar5,uVar6,pcVar7,uVar8
                );
      st::fn_006C6850((int)param_1,iVar4,param_5 + 0xf5,param_6 + -0x14,0x19,
                   g_startSystem_0081176C->field_0140);
      uVar8 = 2;
      local_c = param_6 + -0x1e;
      local_8 = (undefined4 *)(local_c / 2);
      pcVar7 = g_startSystem_0081176C->field_0034;
      uVar6 = 0xffffffff;
      uVar5 = 0;
      pcVar2 = st::fn_006B0140(0x256d,g_hINSTANCE_00807618);
      /* ST_CALLSITE[00595481]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
      st::fn_00404C2D
                ((StartServTy *)(param_5 + 0x11a),0,iVar4,param_5 + 0x11a,(int)(local_8 + -10),0x14,
                 pcVar2,uVar5,uVar6,pcVar7,uVar8);
      st::fn_006C6470
                ((int)param_1,(int)local_8 + param_4 + -0x14,param_5 + 0x11c,local_8 + 10,0x19,4,
                 g_startSystem_0081176C->field_0140);
      st::fn_006C6470
                ((int)param_1,(int)local_8 + param_4 + -0x12,param_5 + 0x11e,local_8 + 9,0x15,4,
                 g_startSystem_0081176C->field_0140);
      st::fn_006C6470
                ((int)param_1,iVar4,param_5 + 0x138,(undefined4 *)(param_6 + -0x14),0x19,4,
                 g_startSystem_0081176C->field_0140);
      st::fn_006C6470
                ((int)param_1,param_4 + 0xc,param_5 + 0x13a,(undefined4 *)(param_6 + -0x18),0x15,4,
                 g_startSystem_0081176C->field_0140);
      iVar4 = param_4 + (STSignedDiv4(local_c));
      st::fn_006C6470
                ((int)param_1,iVar4 + 0xf,param_5 + 0x157,local_8,0x19,4,
                 g_startSystem_0081176C->field_0140);
      st::fn_006C6470
                ((int)param_1,iVar4 + 0x11,param_5 + 0x159,local_8 + -1,0x15,4,
                 g_startSystem_0081176C->field_0140);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xb3,0,iVar2,st::mutable_c_string("%s"),
                               "FSGSTy::OutSGlProc");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xb3);
  }
  return;
}

// 005956C0 FSGSTy::OutLadProc
#line 4 "decomp/ST.exe/functions/005956C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::OutLadProc

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 005956C0 parameter used as this of FSGSTy::OutTRGlProc @ 00595713 */

void __thiscall
st::fn_005956C0(FSGSTy *this,int param_1,MMMObjTy *param_2,MMMObjTy *param_3,int param_4,
                  int param_5,FSGSTy *param_6,int param_7)

{
  int iVar2;
  char *pcVar3;
  int iVar4;
  StartServTy *this_00;
  StartServTy *this_01;
  StartServTy *this_02;
  StartServTy *this_03;
  StartServTy *this_04;
  StartServTy *this_05;
  StartServTy *this_06;
  StartServTy *this_07;
  StartServTy *this_08;
  uint uVar5;
  uint uVar6;
  ccFntTy *pcVar7;
  uint uVar8;
  InternalExceptionFrame local_50;
  StartServTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    /* ST_CALLSITE[00595713]: CALL 0x004035e9; direct=004035E9 FSGSTy::OutTRGlProc */
    st::fn_004035E9(param_6,param_1,param_2,param_3,param_4,param_5,(int)param_6,param_7,0x25a6);
    iVar2 = param_5 + 0x55;
    st::fn_006C53B0
              (param_1,param_4,iVar2,param_4 + -1 + (int)param_6,iVar2,
               g_startSystem_0081176C->field_0140);
    st::fn_006C53B0
              (param_1,param_4,param_5 + 0x78,param_4 + -1 + (int)param_6,param_5 + 0x78,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    pcVar3 = st::fn_006B0140(0x25a7,g_hINSTANCE_00807618);
    /* ST_CALLSITE[00595787]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    st::fn_00404C2D(this_00,0,param_4,iVar2,0x2d,0x23,pcVar3,uVar5,uVar6,pcVar7,uVar8);
    local_8 = param_5 + -1 + param_7;
    st::fn_006C53B0
              (param_1,param_4 + 0x2d,param_5 + 0x78,param_4 + 0x2d,local_8,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    pcVar3 = st::fn_006B0140(0x25a8,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005957EB]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    st::fn_00404C2D(this_01,0,param_4 + 0x2d,iVar2,0xeb,0x23,pcVar3,uVar5,uVar6,pcVar7,uVar8);
    st::fn_006C53B0
              (param_1,param_4 + 0x118,param_5 + 0x78,param_4 + 0x118,local_8,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    pcVar3 = st::fn_006B0140(0x25a9,g_hINSTANCE_00807618);
    /* ST_CALLSITE[00595848]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    st::fn_00404C2D
              (this_02,0,param_4 + 0x118,iVar2,0x46,0x23,pcVar3,uVar5,uVar6,pcVar7,uVar8);
    st::fn_006C53B0
              (param_1,param_4 + 0x15e,param_5 + 0x78,param_4 + 0x15e,local_8,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    pcVar3 = st::fn_006B0140(0x25aa,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005958A8]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    st::fn_00404C2D
              (this_03,0,param_4 + 0x15e,iVar2,0x91,0x23,pcVar3,uVar5,uVar6,pcVar7,uVar8);
    st::fn_006C53B0
              (param_1,param_4 + 0x1ef,param_5 + 0x78,param_4 + 0x1ef,local_8,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    pcVar3 = st::fn_006B0140(0x25ab,g_hINSTANCE_00807618);
    /* ST_CALLSITE[00595905]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    st::fn_00404C2D
              (this_04,0,param_4 + 0x1ef,iVar2,0x46,0x23,pcVar3,uVar5,uVar6,pcVar7,uVar8);
    st::fn_006C53B0
              (param_1,param_4 + 0x235,param_5 + 0x78,param_4 + 0x235,local_8,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    pcVar3 = st::fn_006B0140(0x25ac,g_hINSTANCE_00807618);
    /* ST_CALLSITE[00595962]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    st::fn_00404C2D
              (this_05,0,param_4 + 0x235,iVar2,0x32,0x23,pcVar3,uVar5,uVar6,pcVar7,uVar8);
    st::fn_006C53B0
              (param_1,param_4 + 0x267,param_5 + 0x78,param_4 + 0x267,local_8,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    pcVar3 = st::fn_006B0140(0x25ad,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005959C6]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    st::fn_00404C2D
              (this_06,0,param_4 + 0x267,iVar2,(int)&param_6[-1].field_0x1e5c,0x23,pcVar3,uVar5,
               uVar6,pcVar7,uVar8);
    pcVar7 = g_startSystem_0081176C->field_0034;
    local_c = (StartServTy *)(param_5 + 0x19);
    uVar8 = 2;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    pcVar3 = st::fn_006B0140(0x25ae,g_hINSTANCE_00807618);
    /* ST_CALLSITE[00595A0A]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    st::fn_00404C2D
              (this_07,0,param_4 + 10,(int)local_c,0x96,0x14,pcVar3,uVar5,uVar6,pcVar7,uVar8);
    iVar2 = param_5 + 0x32;
    st::fn_006C6470
              (param_1,param_4 + 10,iVar2,(undefined4 *)0x96,0x19,4,
               g_startSystem_0081176C->field_0140);
    local_8 = param_5 + 0x34;
    st::fn_006C6470
              (param_1,param_4 + 0xc,local_8,(undefined4 *)0x92,0x15,4,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    pcVar3 = st::fn_006B0140(0x25af,g_hINSTANCE_00807618);
    /* ST_CALLSITE[00595A94]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    st::fn_00404C2D
              (local_c,0,param_4 + 0xa5,(int)local_c,0x96,0x14,pcVar3,uVar5,uVar6,pcVar7,uVar8);
    st::fn_006C6470
              (param_1,param_4 + 0xa5,iVar2,(undefined4 *)0x96,0x19,4,
               g_startSystem_0081176C->field_0140);
    st::fn_006C6470
              (param_1,param_4 + 0xa7,local_8,(undefined4 *)0x92,0x15,4,
               g_startSystem_0081176C->field_0140);
    st::fn_006C6470
              (param_1,param_4 + 0x14a,iVar2,(undefined4 *)0x19,0x19,4,
               g_startSystem_0081176C->field_0140);
    st::fn_006C6470
              (param_1,param_4 + 0x14c,local_8,(undefined4 *)0x15,0x15,4,
               g_startSystem_0081176C->field_0140);
    st::fn_006C6850(param_1,param_4 + 0x168,iVar2,100,0x19,g_startSystem_0081176C->field_0140);
    st::fn_006C6470
              (param_1,param_4 + 0x1d1,iVar2,(undefined4 *)0x19,0x19,4,
               g_startSystem_0081176C->field_0140);
    st::fn_006C6470
              (param_1,param_4 + 0x1d3,local_8,(undefined4 *)0x15,0x15,4,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    pcVar3 = st::fn_006B0140(0x25b0,g_hINSTANCE_00807618);
    /* ST_CALLSITE[00595BC2]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    st::fn_00404C2D
              (local_c,0,param_4 + 0x1f9,(int)local_c,0x96,0x14,pcVar3,uVar5,uVar6,pcVar7,uVar8);
    st::fn_006C6850(param_1,param_4 + 0x1f9,iVar2,0x96,0x19,g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    pcVar3 = st::fn_006B0140(0x25b1,g_hINSTANCE_00807618);
    /* ST_CALLSITE[00595C1B]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    st::fn_00404C2D
              (this_08,0,param_4 + 0x294,iVar2,0x41,0x19,pcVar3,uVar5,uVar6,pcVar7,uVar8);
    st::fn_006C6470
              (param_1,param_4 + 0x294,iVar2,(undefined4 *)0x41,0x19,4,
               g_startSystem_0081176C->field_0140);
    st::fn_006C6470
              (param_1,param_4 + 0x296,local_8,(undefined4 *)0x3d,0x15,4,
               g_startSystem_0081176C->field_0140);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xeb,0,iVar2,st::mutable_c_string("%s"),
                             "FSGSTy::OutLadProc");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xeb);
  return;
}

// 00595E40 FSGSTy::InitFSGS
#line 4 "decomp/ST.exe/functions/00595E40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::InitFSGS */

void __thiscall st::fn_00595E40(FSGSTy *this,byte param_1)

{
  MMsgTy *pMVar1;
  int iVar2;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar3;
  ushort *local_EAX_207;
  ushort *puVar4;
  ushort *local_EAX_284;
  ushort *local_EAX_317;
  HPALETTE pHVar4;
  FSGSTy_field_1FB3DArray *pFVar5;
  ccFntTy *pcVar6;
  StartServTy *pSVar7;
  int local_EAX_679;
  AnonPointee_FSGSTy_1A97 *pAVar8;
  uint *puVar9;
  LPSTR text;
  ushort *local_EAX_811;
  int uVar11;
  ushort *puVar10;
  DArrayTy *pDVar11;
  int iVar12;
  uint uVar12;
  byte bVar13;
  int iVar14;
  undefined4 local_450 [256];
  InternalExceptionFrame local_50;
  FSGSTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_01 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar12 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x15d,0,iVar3,
                                st::mutable_c_string("%s"),"FSGSTy::InitFSGS");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x15d);
    return;
  }
  /* ST_CALLSITE[00595E82]: CALL 0x0040590c; direct=0040590C StartSystemTy::sub_005DAF20 */
  st::fn_0040590C(local_c->array_00BC[0xc].field_01DB);
  g_fSGS_0081174C = this_01;
  DAT_008067a0 = 0;
  /* ST_CALLSITE[00595E99]: CALL 0x0040330a; direct=0040330A StartSystemTy::GetIP */
  st::fn_0040330A(this_01->array_00BC[0xc].field_01DB);
  DAT_00802a99 = 0;
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  pMVar1 = (this_01->array_00BC[0xc].field_01DB)->field_02E6;
  if (pMVar1 != nullptr) {
    /* ST_CALLSITE[00595EE5]: CALL 0x0040462e; direct=0040462E MMsgTy::HideSprites */
    st::fn_0040462E(pMVar1);
    (this_01->array_00BC[0xc].field_01DB)->field_02E6->field_1CAB = 0;
  }
  local_EAX_207 = st::fn_0070A9F0(g_cMf32_00806780,st::mutable_c_string("FSGS_BKG"),0,1);
  g_startSystem_0081176C->field_002C = local_EAX_207;
  this_01->field_005D = g_startSystem_0081176C->field_002C;
  puVar4 = st::fn_00709AF0
                     (PTR_00806784,CASE_B,st::mutable_c_string("SET_ACC"),0xffffffff,0,1,0,nullptr);
  this_01->field_1A83 = puVar4;
  local_EAX_284 =
       st::fn_00709AF0
                 (PTR_00806784,CASE_B,st::mutable_c_string("FILE_LIST"),0xffffffff,0,1,0,nullptr);
  this_01->field_1A87 = local_EAX_284;
  local_EAX_317 =
       st::fn_00709AF0
                 (PTR_00806784,CASE_B,(char *)&DAT_007cc07c,0xffffffff,0,1,0,nullptr);
  this_01->field_1A8B = local_EAX_317;
  st::fn_006BC360(this_01->field_005D,local_450,nullptr);
  (this_01->array_00BC[0xc].field_01DB)->field_0140 = 0xf;
  st::fn_00718780
            ((int)local_450,0,0x100,0x8b,0x15,
             (undefined4 *)&(this_01->array_00BC[0xc].field_01DB)->field_0x144);
  pHVar4 = st::fn_006C6A60(this_01->field_005D);
  this_01->array_00BC[0xc].field_01E7 = pHVar4;
  this_01->field_1F5B = this_01->field_0008;
  this_01->field_1F3B = this_01->field_0008;
  this_01->field_1F5F = 2;
  this_01->field_1F3F = 2;
  this_01->field_1F7F = st::machine_word_boundary_cast<undefined4>(this_01->field_005D);
  this_01->field_1F93 = 0;
  this_01->field_1F8F = PTR_008032ac;
  this_01->field_1F87 = 0xf;
  this_01->field_1F8B = 1;
  this_01->field_1F83 = 0x4d;
  pFVar5 = (FSGSTy_field_1FB3DArray *)st::fn_006AE290(nullptr,5,0x10c,5);
  this_01->field_1FB3 = pFVar5;
  this_01->array_00BC[0xc].field_01EF = st::machine_word_boundary_cast<undefined4>((this_01->array_00BC[0xc].field_01DB)->field_0030);
  this_01->array_00BC[0xc].field_01F3 = (this_01->array_00BC[0xc].field_01DB)->field_0034;
  pcVar6 = (ccFntTy *)st::fn_00402036((int)this_01->field_005D,nullptr,DAT_00807dd9);
  this_01->array_00BC[0xc].field_01F7 = pcVar6;
  pcVar6->field_007E = 1;
  *(undefined2 *)&pcVar6->field_0x9e = 0;
  pcVar6->field_0x9e = DAT_007c6ff0;
  /* ST_CALLSITE[005960A8]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new */
  pcVar6 = (ccFntTy *)st::fn_0070CEB0(0x19d,g_cMf32_00806780,st::mutable_c_string("FSGS_NB"),0);
  this_01->field_1A7B = pcVar6;
  pcVar6->field_0058 = 1;
  pcVar6->field_005C = 0;
  /* ST_CALLSITE[005960CA]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new */
  pSVar7 = (StartServTy *)st::fn_0070CEB0(0x19d,g_cMf32_00806780,st::mutable_c_string("FSGS_NS"),0);
  this_01->field_1A7F = pSVar7;
  *(undefined4 *)(pSVar7 + 0x58) = 1;
  *(undefined4 *)(pSVar7 + 0x5c) = 0;
  puVar10 = this_01->field_005D + 0x14;
  iVar14 = 1;
  local_EAX_679 = st::fn_006B4FE0(this_01->field_005D);
  pAVar8 = (AnonPointee_FSGSTy_1A97 *)
           st::fn_006B50C0(0x24d,0x59,(uint)this_01->field_005D[7],local_EAX_679,(undefined4 *)puVar10,
                        iVar14);
  this_01->field_1A97 = pAVar8;
  local_8 = pAVar8->field_0014;
  if (local_8 == 0) {
    local_8 = ((uint)(ushort)pAVar8->field_000E * pAVar8->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
              pAVar8->field_0008;
  }
  puVar9 = (undefined4 *)st::fn_006B4FA0((int *)pAVar8);
  for (uVar12 = local_8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *puVar9 = 0xffffffff;
    puVar9 = puVar9 + 1;
  }
  iVar14 = 0;
  bVar13 = 0;
  for (uVar12 = local_8 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined1 *)puVar9 = 0xff;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  text = st::fn_006F2C00(st::mutable_c_string("MM_BAN_"),2,this_01->field_1A93);
  local_EAX_811 = st::fn_0070A5A0(g_cMf32_00806780,6,text,bVar13,iVar14);
  /* ST_CALLSITE[0059617C]: CALL 0x00403229; direct=00403229 DibPut */
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_01->field_1A97,0,0,'\x06',(byte *)local_EAX_811);
  pAVar8 = this_01->field_1A97;
  st::fn_006B2330(g_ddxContext_008075A8,&this_01->field_1A8F,0x31,0x4023f6,pAVar8->field_0004,
               pAVar8->field_0008,(ushort *)pAVar8);
  st::fn_006B3640
            ((int *)g_ddxContext_008075A8,this_01->field_1A8F,0xffffffff,g_nWidth_00806730 - 0x24d,0
            );
  iVar14 = 1;
  puVar10 = this_01->field_005D + 0x14;
  uVar11 = st::fn_006B4FE0(this_01->field_005D);
  puVar10 = (ushort *)
            st::fn_006B50C0(0x1b8,0x106,(uint)this_01->field_005D[7],uVar11,(undefined4 *)puVar10,
                         iVar14);
  this_01->field_1AC0 = puVar10;
  this_01->field_1ABB = 0;
  puVar9 = &this_01->field_1ABC;
  st::fn_006B2330(g_ddxContext_008075A8,puVar9,0x31,0x4023f6,*(uint *)(puVar10 + 2),
               *(uint *)(puVar10 + 4),puVar10);
  st::fn_006B3640((int *)g_ddxContext_008075A8,*puVar9,0xffffffff,0xb4,0xaa);
  st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar9);
  st::fn_007158A0
            ((SpriteClassTy *)&this_01->field_1B28,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_CALLSITE[0059627B]: CALL dword ptr [EAX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1B28 + 4))(PTR_00806784,7,0,"MM_SLDUP",0xffffffff);
  this_01->field_1B30 = 0;
  if (this_01->field_1B2C != 0xffffffff) {
    st::fn_006B3AF0((int *)this_01->field_1B70,this_01->field_1B2C);
  }
  st::fn_007158A0
            ((SpriteClassTy *)&this_01->field_1BB9,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_CALLSITE[005962C4]: CALL dword ptr [EDX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1BB9 + 4))(PTR_00806784,7,0,"MM_SLDDN",0xffffffff);
  this_01->field_1BC1 = 0;
  if (this_01->field_1BBD != 0xffffffff) {
    st::fn_006B3AF0((int *)this_01->field_1C01,this_01->field_1BBD);
  }
  st::fn_007158A0
            ((SpriteClassTy *)&this_01->field_1C4A,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_CALLSITE[0059630F]: CALL dword ptr [EAX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1C4A + 4))(PTR_00806784,7,0,"MM_SLDT",0xffffffff);
  this_01->field_1C52 = 0;
  if (this_01->field_1C4E != 0xffffffff) {
    st::fn_006B3AF0((int *)this_01->field_1C92,this_01->field_1C4E);
  }
  st::fn_007158A0
            ((SpriteClassTy *)&this_01->field_1CDB,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_CALLSITE[00596358]: CALL dword ptr [EDX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1CDB + 4))(PTR_00806784,7,0,"MM_SLDUP",0xffffffff);
  this_01->field_1CE3 = 0;
  if (this_01->field_1CDF != 0xffffffff) {
    st::fn_006B3AF0((int *)this_01->field_1D23,this_01->field_1CDF);
  }
  st::fn_007158A0
            ((SpriteClassTy *)&this_01->field_1D6C,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_CALLSITE[005963A3]: CALL dword ptr [EAX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1D6C + 4))(PTR_00806784,7,0,"MM_SLDDN",0xffffffff);
  this_01->field_1D74 = 0;
  if (this_01->field_1D70 != 0xffffffff) {
    st::fn_006B3AF0((int *)this_01->field_1DB4,this_01->field_1D70);
  }
  st::fn_007158A0
            ((SpriteClassTy *)&this_01->field_1DFD,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_CALLSITE[005963EC]: CALL dword ptr [EDX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1DFD + 4))(PTR_00806784,7,0,"MM_SLDT",0xffffffff);
  this_01->field_1E05 = 0;
  if (this_01->field_1E01 != 0xffffffff) {
    st::fn_006B3AF0((int *)this_01->field_1E45,this_01->field_1E01);
  }
  this_01->field_1CFB = 0;
  this_01->field_1CF7 = 0;
  this_01->field_1B48 = 0;
  this_01->field_1B44 = 0;
  this_01->field_1D8C = 0;
  this_01->field_1D88 = 0;
  this_01->field_1BD9 = 0;
  this_01->field_1BD5 = 0;
  this_01->field_1E1D = 0;
  this_01->field_1E19 = 0;
  this_01->field_1C6A = 0;
  this_01->field_1C66 = 0;
  pDVar11 = st::fn_006B54F0(nullptr,10,10);
  this_01->field_1B08 = pDVar11;
  st::fn_006B5AA0(pDVar11,st::mutable_c_string("License agreement"));
  st::fn_006B5AA0(this_01->field_1B08,st::mutable_c_string("Nothing to do"));
  /* ST_CALLSITE[0059647F]: CALL 0x00403b4d; direct=00403B4D FSGSTy::PaintFSGS */
  st::fn_00403B4D(this_01,'\x01');
  st::fn_0040448A((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                     this_01->field_005D,10,2);
  if ((5 < param_1) && (param_1 < 9)) {
    pDVar11 = st::fn_006B54F0(nullptr,100,100);
    this_01->field_1E9E = &pDVar11->flags;
  }
  this_01->array_00BC[0xc].field_01E2 = 0;
  if (param_1 == 6) {
    this_01->array_00BC[0xc].field_01DF = 6;
    bVar13 = 8;
  }
  else if (param_1 == 7) {
    this_01->array_00BC[0xc].field_01DF = 7;
    bVar13 = 7;
  }
  else {
    if (param_1 != 8) {
      /* ST_CALLSITE[005964DF]: CALL 0x00401b2c; direct=00401B2C FSGSTy::SetState */
      st::fn_00401B2C(this_01,6);
      this_01->array_00BC[0xc].field_01E2 = 1;
      goto LAB_00596510;
    }
    this_01->array_00BC[0xc].field_01DF = 8;
    bVar13 = 10;
  }
  /* ST_CALLSITE[0059650B]: CALL 0x00401b2c; direct=00401B2C FSGSTy::SetState */
  st::fn_00401B2C(this_01,bVar13);
LAB_00596510:
  this_00 = g_cursorClass_00802A30;
  if (g_cursorClass_00802A30 != nullptr) {
    iVar14 = g_cursorClass_00802A30->field_00C9;
    iVar2 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = CASE_1;
    this_00->field_0494 = 0xffff;
    /* ST_CALLSITE[0059653B]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
    st::fn_0040507E(this_00,CASE_0,iVar2,iVar14);
    /* ST_CALLSITE[00596550]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  pMVar1 = (this_01->array_00BC[0xc].field_01DB)->field_02E6;
  if (pMVar1 != nullptr) {
    /* ST_CALLSITE[00596575]: CALL 0x00405191; direct=00405191 MMsgTy::ShowSprites */
    st::fn_00405191(pMVar1);
    (this_01->array_00BC[0xc].field_01DB)->field_02E6->field_1CAB = this_01->field_0008;
  }
  st::fn_0040329C(&g_sound,0);
  st::fn_00404BF1(this_01,0xb,'\0',-1);
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 005967F0 FSGSTy::DoneFSGS
#line 4 "decomp/ST.exe/functions/005967F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DoneFSGS */

void __thiscall st::fn_005967F0(FSGSTy *this)

{
  ccFntTy *pcVar1;
  HGDIOBJ ho;
  FSGSTy_field_1FB3DArray *array;
  MMsgTy *this_00;
  FSGSTy *this_01;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    /* ST_CALLSITE[0059682A]: CALL dword ptr [0x0085c02c] */
    st::external_000000F9((CFsgsConnection *)&DAT_00802a90);
    this_01 = local_8;
    /* ST_CALLSITE[00596835]: CALL 0x0040458e; direct=0040458E MMObjTy::DoneMMObj */
    st::fn_0040458E((MMObjTy *)local_8);
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    /* ST_CALLSITE[00596876]: CALL 0x00401d43; direct=00401D43 DarkScreen */
    st::fn_00401D43(g_dDXContext_0080759C,10,2);
    if (g_startSystem_0081176C->field_002C != nullptr) {
      st::fn_006F20E0(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }
    /* ST_CALLSITE[00596898]: CALL 0x00405641; direct=00405641 FSGSTy::sub_005A0590 */
    st::fn_00405641(this_01);
    /* ST_CALLSITE[0059689F]: CALL 0x0040580d; direct=0040580D FSGSTy::sub_005A07F0 */
    st::fn_0040580D(this_01);
    /* ST_CALLSITE[005968A6]: CALL 0x004020f9; direct=004020F9 FSGSTy::sub_005A0A50 */
    st::fn_004020F9(this_01);
    /* ST_CALLSITE[005968AD]: CALL 0x0040520e; direct=0040520E FSGSTy::sub_005A0AF0 */
    st::fn_0040520E(this_01);
    /* ST_CALLSITE[005968B4]: CALL 0x0040418d; direct=0040418D FSGSTy::sub_005A0C80 */
    st::fn_0040418D(this_01);
    if (this_01->field_1B08 != nullptr) {
      st::fn_006B5570(this_01->field_1B08);
    }
    this_01->field_1B08 = nullptr;
    if ((DArrayTy *)this_01->field_1E9E != nullptr) {
      st::fn_006B5570((DArrayTy *)this_01->field_1E9E);
    }
    this_01->field_1E9E = nullptr;
    if (this_01->field_1B0C != nullptr) {
      st::fn_006AB060(&this_01->field_1B0C);
    }
    if (this_01->field_1F23 != nullptr) {
      /* ST_CALLSITE[00596905]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(this_01->field_1F23);
      st::fn_0072E2B0(this_01->field_1F23);
      this_01->field_1F23 = nullptr;
    }
    if (this_01->field_1F27 != nullptr) {
      /* ST_CALLSITE[00596929]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(this_01->field_1F27);
      st::fn_0072E2B0(this_01->field_1F27);
      this_01->field_1F27 = nullptr;
    }
    if (this_01->field_1F2B != nullptr) {
      /* ST_CALLSITE[0059694D]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(this_01->field_1F2B);
      st::fn_0072E2B0(this_01->field_1F2B);
      this_01->field_1F2B = nullptr;
    }
    if (this_01->field_1F2F != nullptr) {
      /* ST_CALLSITE[00596971]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(this_01->field_1F2F);
      st::fn_0072E2B0(this_01->field_1F2F);
      this_01->field_1F2F = nullptr;
    }
    if (this_01->field_1E8E != 0) {
      st::fn_006AB060(&this_01->field_1E8E);
    }
    if (this_01->field_1E92 != nullptr) {
      st::fn_006AB060(&this_01->field_1E92);
    }
    if (this_01->field_1E96 != nullptr) {
      st::fn_006AB060(&this_01->field_1E96);
    }
    if (this_01->field_1E9A != nullptr) {
      st::fn_006AB060(&this_01->field_1E9A);
    }
    if (-1 < (int)this_01->field_1ABC) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,this_01->field_1ABC);
    }
    this_01->field_1ABC = 0xffffffff;
    if (this_01->field_1AC0 != nullptr) {
      st::fn_006AB060(&this_01->field_1AC0);
    }
    if (this_01->field_1AB3 != 0) {
      st::fn_006E56B0(this_01->field_000C,this_01->field_1AB3);
    }
    this_01->field_1AB3 = 0;
    if (this_01->field_1AAB != (LPCSTR)0x0) {
      st::fn_006AB060(&this_01->field_1AAB);
    }
    if (this_01->field_1A9F != nullptr) {
      st::fn_006C6FC0(static_cast<AnonShape_006C6FC0_B2C34C14 *>(this_01->field_1A9F));
    }
    this_01->field_1A9F = nullptr;
    if (this_01->field_1A9B != nullptr) {
      st::fn_006AB060(&this_01->field_1A9B);
    }
    if (-1 < (int)this_01->field_1A8F) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,this_01->field_1A8F);
    }
    this_01->field_1A8F = 0xffffffff;
    if (this_01->field_1A97 != nullptr) {
      st::fn_006AB060(&this_01->field_1A97);
    }
    pcVar1 = this_01->array_00BC[0xc].field_01F7;
    if (pcVar1 != nullptr) {
      st::fn_00710560((uint *)pcVar1);
      this_01->array_00BC[0xc].field_01F7 = nullptr;
    }
    if (this_01->field_1A7B != nullptr) {
      st::fn_00710560((uint *)this_01->field_1A7B);
      this_01->field_1A7B = nullptr;
    }
    if (this_01->field_1A7F != nullptr) {
      st::fn_00710560((uint *)this_01->field_1A7F);
      this_01->field_1A7F = nullptr;
    }
    ho = this_01->array_00BC[0xc].field_01E7;
    if (ho != (HGDIOBJ)0x0) {
      /* ST_CALLSITE[00596B01]: CALL dword ptr [0x0085ba78] */
      st::external_000000A6(ho);
    }
    array = this_01->field_1FB3;
    this_01->array_00BC[0xc].field_01E7 = nullptr;
    if (array != nullptr) {
      st::fn_006AE110((DArrayTy *)array);
    }
    this_01->field_1FB3 = nullptr;
    if (this_01->field_004D != 0) {
      st::fn_006E3B50((AppClassTy *)&DAT_00807620,(undefined4 *)&this_01->field_0x3d);
    }
    this_00 = (this_01->array_00BC[0xc].field_01DB)->field_02E6;
    if (this_00 != nullptr) {
      /* ST_CALLSITE[00596B48]: CALL 0x0040462e; direct=0040462E MMsgTy::HideSprites */
      st::fn_0040462E(this_00);
      (this_01->array_00BC[0xc].field_01DB)->field_02E6->field_1CAB = 0;
    }
    g_fSGS_0081174C = nullptr;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x197,0,errorCode,
                             st::mutable_c_string("%s"),"FSGSTy::DoneFSGS");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x197);
  return;
}

// 00596CC0 FSGSTy::PaintFSGS
#line 4 "decomp/ST.exe/functions/00596CC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PaintFSGS

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00596CC0(FSGSTy *this,char param_1)

{
  FSGSTy *this_00;
  int errorCode;
  int iVar2;
  FSGSTy *this_01;
  FSGSTy *pFVar3;
  undefined4 *this_02;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  FSGSTy *extraout_ECX;
  InternalExceptionFrame local_50;
  FSGSTy *local_c;
  UINT local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x1c8,0,errorCode,
                               st::mutable_c_string("%s"),"FSGSTy::PaintFSGS");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x1c8);
    return;
  }
  st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
  this_00 = local_c;
  /* ST_CALLSITE[00596D23]: CALL 0x00403738; direct=00403738 PutDDX */
  st::fn_00403738(0,0,'\x01',(BITMAPINFO *)local_c->field_005D);
  switch(this_00->array_00BC[0xc].field_01DF) {
  case 1:
    if (local_8 == 0) {
      local_8 = 0x2563;
      goto LAB_00596d58;
    }
    break;
  case 2:
LAB_00596d58:
    if (local_8 == 0) {
      local_8 = 0x2553;
      goto LAB_00596d69;
    }
    break;
  case 3:
    if (this_00->field_1F23 != nullptr) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (param_1 != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    /* ST_CALLSITE[00596E4D]: CALL 0x004042d2; direct=004042D2 MMMObjTy::OutBSlProc */
    st::fn_004042D2
              ((MMMObjTy *)g_dDXContext_0080759C,g_dDXContext_0080759C,nullptr,
               nullptr,0x22,0x72,0x2e1,0x14c,
               &(this_00->array_00BC[0xc].field_01DB)->field_0140);
    g_currentExceptionFrame = local_50.previous;
    return;
  case 4:
LAB_00596d69:
    if (local_8 == 0) {
      local_8 = 0x2552;
      goto LAB_00596d7a;
    }
    break;
  case 5:
LAB_00596d7a:
    if (local_8 == 0) {
      local_8 = 0x2562;
      goto LAB_00596d8b;
    }
    break;
  case 6:
    if ((this_00->field_1F27 == nullptr) && (param_1 == '\0')) {
      /* ST_CALLSITE[00596E99]: CALL 0x004023b0; direct=004023B0 FSGSTy::OutChSlProc */
      st::fn_004023B0(this_01,(AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,0,0,0x13,0x5e,
                  0x1bf,0x175,&(this_00->array_00BC[0xc].field_01DB)->field_0140);
    }
    if (this_00->field_1F2B != nullptr) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (param_1 != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    this_02 = &(this_00->array_00BC[0xc].field_01DB)->field_0140;
    /* ST_CALLSITE[00596EDD]: CALL 0x0040303f; direct=0040303F FSGSTy::OutTRGlProc */
    st::fn_0040303F((FSGSTy *)this_02,(AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,
                nullptr,nullptr,(StartServTy *)0x1e9,0x5e,0x124,0x175,(int)this_02);
    g_currentExceptionFrame = local_50.previous;
    return;
  case 7:
LAB_00596d8b:
    if (local_8 == 0) {
      local_8 = 0x255b;
      goto LAB_00596d9c;
    }
    break;
  case 8:
    pFVar3 = this_01;
    if ((this_00->field_1F2F == nullptr) && (param_1 == '\0')) {
      /* ST_CALLSITE[00596F2C]: CALL 0x00403981; direct=00403981 FSGSTy::OutSGlProc */
      st::fn_00403981((FSGSTy *)g_dDXContext_0080759C,
                 (AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,nullptr,
                 nullptr,0x199,0x5e,0x174,0x175,
                 (int)&(this_00->array_00BC[0xc].field_01DB)->field_0140);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      pFVar3 = extraout_ECX;
    }
    if (this_00->field_1F2B != nullptr) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (param_1 != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    /* ST_CALLSITE[00596F64]: CALL 0x004042d2; direct=004042D2 MMMObjTy::OutBSlProc */
    st::fn_004042D2
              ((MMMObjTy *)pFVar3,g_dDXContext_0080759C,nullptr,nullptr,0x13,0x5e,
               0x174,0x175,&(this_00->array_00BC[0xc].field_01DB)->field_0140);
    g_currentExceptionFrame = local_50.previous;
    return;
  case 9:
    if (this_00->field_1F23 != nullptr) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (param_1 != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    /* ST_CALLSITE[00596FA6]: CALL 0x00401032; direct=00401032 FSGSTy::OutLadProc */
    st::fn_00401032((FSGSTy *)g_dDXContext_0080759C,(int)g_dDXContext_0080759C,nullptr,
               nullptr,0x22,0x5e,(FSGSTy *)0x2e1,0x175);
    /* ST_CALLSITE[00596FAD]: CALL 0x00402031; direct=00402031 FSGSTy::PaintLadder */
    st::fn_00402031(this_00);
    g_currentExceptionFrame = local_50.previous;
    return;
  case 10:
LAB_00596d9c:
    if (local_8 == 0) {
      local_8 = 0x259c;
    }
    break;
  default:
    goto switchD_00596d3d_default;
  }
  if ((this_00->field_1F23 == nullptr) && (param_1 == '\0')) {
    pFVar3 = (FSGSTy *)((-(uint)(this_00->field_1ABB != '\0') & 0x74) + 0x106);
    /* ST_CALLSITE[00596DF9]: CALL 0x004035e9; direct=004035E9 FSGSTy::OutTRGlProc */
    st::fn_004035E9(pFVar3,(int)g_dDXContext_0080759C,nullptr,nullptr,0xb4,
                (-(uint)(this_00->field_1ABB != '\0') & 0xffffffb4) + 0xaa,0x1b8,(int)pFVar3,local_8
               );
    g_currentExceptionFrame = local_50.previous;
    return;
  }
switchD_00596d3d_default:
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 00597120 FSGSTy::NoneFSGS
#line 4 "decomp/ST.exe/functions/00597120/decomp.c"
/* WARNING: Removing unreachable block (ram,0x00597a13) */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::NoneFSGS

   [STSwitchEnumApplier] Switch target field_0065 uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_0065State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall NoneFSGS(FSGSTy * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=00597422 RET | 00597462 RET | 0059748B RET | 005974B4 RET | 00597916 RET |
   00597B00 RET | 00597B47 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_00597120(FSGSTy *this)

{
  char cVar1;
  int iVar2;
  AnonPointee_FSGSTy_1A97 *pAVar3;
  HoloTy *this_00;
  MMsgTy *this_01;
  CursorClassTy *pCVar5;
  FSGSTy *this_02;
  DWORD DVar6;
  int local_EAX_67;
  uint uVar7;
  uint *puVar8;
  LPSTR pCVar9;
  ushort *puVar10;
  char *pcVar11_mg0;
  int iVar6;
  int iVar12;
  uint uVar11;
  FSGSTy_field_1EA6DArray *pFVar12;
  uint uVar13;
  byte bVar14;
  char *pcVar15;
  FSGSTy_field_1EA6Element *element_1ea6;
  int iVar16;
  ulong uVar17;
  InternalExceptionFrame local_a8;
  char *local_64;
  char *local_60;
  char *local_5c;
  char *local_58;
  char *local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  FSGSTy *local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1a;
  undefined2 local_18;
  int local_8;

  uVar13 = 1;
  local_8 = 1;
  local_28 = this;
  /* ST_CALLSITE[00597139]: CALL dword ptr [0x0085bedc] */
  DVar6 = st::external_000000DA();
  this->field_0061 = DVar6;
  local_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a8;
  local_EAX_67 = st::fn_0072D7F0(local_a8.jumpBuffer,0);
  this_02 = local_28;
  if (local_EAX_67 != 0) {
    g_currentExceptionFrame = local_a8.previous;
    iVar12 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x284,0,local_EAX_67,
                                st::mutable_c_string("%s"),"FSGSTy::NoneFSGS");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_67,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x284);
    return;
  }
  switch(local_28->field_0065) {
  case CASE_1:
    /* ST_CALLSITE[0059791C]: CALL dword ptr [0x0085c05c] */
    st::external_00000105((CFsgsConnection *)&DAT_00802a90);
    cVar1 = this_02->array_00BC[0xc].field_01DF;
    if (cVar1 == '\x06') {
      if (15000 < this_02->field_0061 - this_02->field_1EB2) {
        if ((this_02->array_00BC[0xc].field_01E0 == '\0') &&
           (pFVar12 = this_02->field_1EA6, pFVar12 != nullptr)) {
          if (1 < pFVar12->count) {
            do {
              element_1ea6 = DArrayAt<FSGSTy_field_1EA6Element>(pFVar12, uVar13);
              if (element_1ea6 != nullptr) {
                /* ST_CALLSITE[00597A29]: CALL EBX */
                st::external_0000010F
                          ((CFsgsConnection *)&DAT_00802a90,this_02->field_1EAE,
                           *(ulong *)(element_1ea6 + 0x21));
              }
              pFVar12 = this_02->field_1EA6;
              uVar13 = uVar13 + 1;
            } while (uVar13 < pFVar12->count);
          }
          this_02->field_1EAE = st::machine_word_boundary_cast<undefined4>(this_02->field_1EAE + 1);
        }
        this_02->field_1EB2 = this_02->field_0061;
      }
    }
    else if ((cVar1 == '\b') && (60000 < this_02->field_0061 - this_02->array_00BC[0xc].field_01E3))
    {
      /* ST_CALLSITE[0059795F]: CALL dword ptr [0x0085c01c] */
      st::external_000000F5
                ((CFsgsConnection *)&DAT_00802a90,this_02->field_1EC2,nullptr);
      this_02->array_00BC[0xc].field_01E3 = this_02->field_0061;
      pCVar5 = g_cursorClass_00802A30;
      if (g_cursorClass_00802A30 != nullptr) {
        iVar16 = g_cursorClass_00802A30->field_00C9;
        iVar2 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_5;
        pCVar5->field_0494 = 0xffff;
        /* ST_CALLSITE[0059799E]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
        st::fn_0040507E(pCVar5,CASE_0,iVar2,iVar16);
        /* ST_CALLSITE[005979B3]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
        st::fn_0040241E(pCVar5,pCVar5->field_00C5,pCVar5->field_00C9);
        pCVar5->field_00D2 = 0;
        pCVar5->field_04DF = -1;
      }
    }
    if (((this_02->field_1A97 != nullptr) &&
        (this_02->field_1A9F != nullptr)) &&
       (this_02->field_1AA3 < (int)(this_02->field_0061 - this_02->field_1AA7))) {
      st::fn_006C7070(static_cast<int *>(this_02->field_1A9F),(undefined4 *)this_02->field_1A97,0);
      iVar6 = st::fn_006C7000(static_cast<AnonShape_006C7000_4A8D1200 *>(this_02->field_1A9F));
      this_02->field_1AA3 = iVar6;
      if (iVar6 < 1) {
        if (iVar6 == -1) {
          st::fn_006C7030(static_cast<AnonShape_006C7030_23487746 *>(this_02->field_1A9F));
        }
        else {
          st::fn_006C6FC0(static_cast<AnonShape_006C6FC0_B2C34C14 *>(this_02->field_1A9F));
          this_02->field_1A9F = nullptr;
          st::fn_006AB060(&this_02->field_1A9B);
        }
      }
      else {
        this_02->field_1AA7 = this_02->field_0061;
      }
      st::fn_006B35D0((int *)g_ddxContext_008075A8,this_02->field_1A8F);
    }
    break;
  case CASE_3:
  case CASE_6:
  case CASE_7:
  case CASE_8:
  case CASE_A:
    if ((0 < local_28->field_1A93) && (-1 < (int)local_28->field_1A8F)) {
      if (local_28->field_1A93 == 9) {
        /* ST_CALLSITE[005974EB]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
        uVar7 = st::fn_0040361B((MMObjTy *)local_28,0,1,0x121,9,0x1d6,0x3c,0x694c,0);
        this_02->field_1AB3 = uVar7;
      }
      pAVar3 = this_02->field_1A97;
      this_02->field_1A93 = st::machine_word_boundary_cast<int>(this_02->field_1A93 + -1);
      uVar13 = pAVar3->field_0014;
      if (uVar13 == 0) {
        uVar13 = ((uint)(ushort)pAVar3->field_000E * pAVar3->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                 pAVar3->field_0008;
      }
      puVar8 = (undefined4 *)st::fn_006B4FA0((int *)pAVar3);
      for (uVar11 = uVar13 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      iVar16 = 0;
      bVar14 = 0;
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      pCVar9 = st::fn_006F2C00(st::mutable_c_string("MM_BAN_"),2,this_02->field_1A93);
      puVar10 = st::fn_0070A5A0(g_cMf32_00806780,6,pCVar9,bVar14,iVar16);
      /* ST_CALLSITE[0059757A]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_02->field_1A97,0,0,'\x06',(byte *)puVar10);
      st::fn_006B35D0((int *)g_ddxContext_008075A8,this_02->field_1A8F);
      local_8 = 0;
    }
    if ((this_02->field_1F23 != nullptr) &&
       /* ST_CALLSITE[005975A8]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
       (iVar16 = st::fn_004055F1(this_02->field_1F23), iVar16 != 0)) {
      local_8 = 0;
    }
    if ((this_02->field_1F27 != nullptr) &&
       /* ST_CALLSITE[005975BE]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
       (iVar16 = st::fn_004055F1(this_02->field_1F27), iVar16 != 0)) {
      local_8 = 0;
    }
    if ((this_02->field_1F2B != nullptr) &&
       /* ST_CALLSITE[005975D4]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
       (iVar16 = st::fn_004055F1(this_02->field_1F2B), iVar16 != 0)) {
      local_8 = 0;
    }
    if ((this_02->field_1F2F != nullptr) &&
       /* ST_CALLSITE[005975EA]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
       (iVar16 = st::fn_004055F1(this_02->field_1F2F), iVar16 != 0)) {
      local_8 = 0;
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_8 = 0;
    }
    if (local_8 == 0) {
      g_currentExceptionFrame = local_a8.previous;
      return;
    }
    puVar8 = &local_24;
    memset(puVar8, 0, 0x1a); /* compiler bulk-zero initialization */
    puVar8 = (undefined4 *)((byte *)puVar8 + 0x18);
    this_00 = this_02->field_1F2B;
    if (this_00 != nullptr) {
      /* ST_CALLSITE[00597632]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(this_00);
      st::fn_0072E2B0(this_02->field_1F2B);
      this_02->field_1F2B = nullptr;
    }
    if (this_02->field_1F23 != nullptr) {
      /* ST_CALLSITE[00597656]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(this_02->field_1F23);
      st::fn_0072E2B0(this_02->field_1F23);
      this_02->field_1F23 = nullptr;
    }
    if (this_02->field_1F27 != nullptr) {
      /* ST_CALLSITE[0059767A]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(this_02->field_1F27);
      st::fn_0072E2B0(this_02->field_1F27);
      this_02->field_1F27 = nullptr;
    }
    if (this_02->field_1F2F != nullptr) {
      /* ST_CALLSITE[0059769E]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(this_02->field_1F2F);
      st::fn_0072E2B0(this_02->field_1F2F);
      this_02->field_1F2F = nullptr;
    }
    switch(this_02->field_0065) {
    case CASE_6:
      st::fn_006B3430((int *)g_ddxContext_008075A8,this_02->field_1ABC);
      this_02->array_00BC[0xc].field_01DF = 1;
      st::fn_00402577((CFsgsConnection *)&DAT_00802a90);
      local_18 = 1;
      break;
    case CASE_7:
      cVar1 = this_02->array_00BC[0xc].field_01DF;
      if ((cVar1 != '\x03') && (cVar1 != '\t')) {
        st::fn_006B3430((int *)g_ddxContext_008075A8,this_02->field_1ABC);
      }
    case CASE_8:
    case CASE_A:
      local_18 = 1;
      local_1a = 1;
      local_20 = 1;
      STPiece<2,2>(local_24) = 1;
      STPiece<0,2>(local_24) = 1;
    }
    this_02->field_0065 = CASE_1;
    /* ST_CALLSITE[00597739]: CALL 0x00403b4d; direct=00403B4D FSGSTy::PaintFSGS */
    st::fn_00403B4D(this_02,'\0');
    /* ST_CALLSITE[00597740]: CALL 0x0040279d; direct=0040279D FSGSTy::CreateCtrls */
    st::fn_0040279D(this_02);
    switch(this_02->array_00BC[0xc].field_01DF) {
    case 6:
      cVar1 = this_02->array_00BC[0xc].field_01E2;
      this_02->field_1EB2 = this_02->field_0061;
      if (cVar1 == '\0') {
        st::fn_00404057((CFsgsConnection *)&DAT_00802a90);
      }
      else {
        uVar17 = 0;
        pcVar15 = &CHAR_00h_008016a0;
        pcVar11_mg0 = st::fn_006B0140(0x254d,g_hINSTANCE_00807618);
        st::fn_00405542(&DAT_00802a90,pcVar11_mg0,pcVar15,uVar17);
        this_02->array_00BC[0xc].field_01E2 = 0;
      }
      break;
    case 8:
      /* ST_CALLSITE[005977BC]: CALL dword ptr [0x0085c01c] */
      st::external_000000F5
                ((CFsgsConnection *)&DAT_00802a90,this_02->field_1EC2,nullptr);
      /* ST_CALLSITE[005977C2]: CALL dword ptr [0x0085bedc] */
      DVar6 = st::external_000000DA();
      this_02->array_00BC[0xc].field_01E3 = DVar6;
      pCVar5 = g_cursorClass_00802A30;
      goto joined_r0x00597872;
    case 9:
      /* ST_CALLSITE[0059788B]: CALL dword ptr [0x0085c024] */
      st::external_000000F7
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
      pCVar5 = g_cursorClass_00802A30;
joined_r0x00597872:
      g_cursorClass_00802A30 = pCVar5;
      if (pCVar5 != nullptr) {
        pCVar5->field_0493 = CASE_5;
        pCVar5->field_0494 = 0xffff;
        /* ST_CALLSITE[005978BC]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
        st::fn_0040507E(pCVar5,CASE_0,pCVar5->field_00C5,pCVar5->field_00C9);
        /* ST_CALLSITE[005978D1]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
        st::fn_0040241E(pCVar5,pCVar5->field_00C5,pCVar5->field_00C9);
        pCVar5->field_00D2 = 0;
        pCVar5->field_04DF = -1;
      }
      break;
    case 10:
      if (this_02->field_1B0C != nullptr) {
        local_64 = "Profile\\Age";
        local_60 = "Profile\\Sex";
        local_5c = "Profile\\Location";
        local_58 = "Profile\\Description";
        local_54 = "0\\Wins";
        local_50 = "0\\Losses";
        local_4c = "0\\Draws";
        local_48 = "0\\Disconnects";
        local_44 = "1\\Wins";
        local_40 = "1\\Losses";
        local_3c = "1\\Draws";
        local_38 = "1\\Disconnects";
        local_34 = "1\\Rank";
        local_30 = "1\\Rating";
        local_2c = "1\\Last Game";
        /* ST_CALLSITE[00597864]: CALL dword ptr [0x0085c020] */
        st::external_000000F6
                  ((CFsgsConnection *)&DAT_00802a90,(char *)this_02->field_1B0C,0xf,&local_64);
        pCVar5 = g_cursorClass_00802A30;
        goto joined_r0x00597872;
      }
    }
    this_01 = (this_02->array_00BC[0xc].field_01DB)->field_02E6;
    if (this_01 != nullptr) {
      /* ST_CALLSITE[005978FF]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
      st::fn_00404B51(this_01,(int)&local_24);
      g_currentExceptionFrame = local_a8.previous;
      return;
    }
    break;
  case CASE_4:
    if (local_28->field_1F23 != nullptr) {
      /* ST_CALLSITE[00597198]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar16 = st::fn_004055F1(local_28->field_1F23);
      if (iVar16 == 0) {
        uVar13 = *(uint *)&this_02->field_1F23->field_0x3;
        if (-1 < (int)uVar13) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar13);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (this_02->field_1F27 != nullptr) {
      /* ST_CALLSITE[005971C9]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar16 = st::fn_004055F1(this_02->field_1F27);
      if (iVar16 == 0) {
        uVar13 = *(uint *)&this_02->field_1F27->field_0x3;
        if (-1 < (int)uVar13) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar13);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (this_02->field_1F2B != nullptr) {
      /* ST_CALLSITE[005971FB]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar16 = st::fn_004055F1(this_02->field_1F2B);
      if (iVar16 == 0) {
        uVar13 = *(uint *)&this_02->field_1F2B->field_0x3;
        if (-1 < (int)uVar13) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar13);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (this_02->field_1F2F != nullptr) {
      /* ST_CALLSITE[0059722D]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar16 = st::fn_004055F1(this_02->field_1F2F);
      if (iVar16 == 0) {
        uVar13 = *(uint *)&this_02->field_1F2F->field_0x3;
        if (-1 < (int)uVar13) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar13);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (((this_02->array_00BC[0xc].field_01E1 == '\0') && (this_02->field_1A93 < 9)) &&
       (-1 < (int)this_02->field_1A8F)) {
      if ((this_02->field_1A93 == 0) && (this_02->field_1AB3 != 0)) {
        st::fn_006E56B0(this_02->field_000C,this_02->field_1AB3);
        this_02->field_1AB3 = 0;
      }
      pAVar3 = this_02->field_1A97;
      this_02->field_1A93 = st::machine_word_boundary_cast<int>(this_02->field_1A93 + 1);
      uVar13 = pAVar3->field_0014;
      if (uVar13 == 0) {
        uVar13 = ((uint)(ushort)pAVar3->field_000E * pAVar3->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                 pAVar3->field_0008;
      }
      puVar8 = (undefined4 *)st::fn_006B4FA0((int *)pAVar3);
      for (uVar11 = uVar13 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      iVar16 = 0;
      bVar14 = 0;
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      pCVar9 = st::fn_006F2C00(st::mutable_c_string("MM_BAN_"),2,this_02->field_1A93);
      puVar10 = st::fn_0070A5A0(g_cMf32_00806780,6,pCVar9,bVar14,iVar16);
      /* ST_CALLSITE[0059731E]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_02->field_1A97,0,0,'\x06',(byte *)puVar10);
      st::fn_006B35D0((int *)g_ddxContext_008075A8,this_02->field_1A8F);
      local_8 = 0;
    }
    pCVar5 = g_cursorClass_00802A30;
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (g_cursorClass_00802A30 != nullptr) {
        iVar16 = g_cursorClass_00802A30->field_00C9;
        iVar2 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_1;
        pCVar5->field_0494 = 0xffff;
        /* ST_CALLSITE[00597390]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
        st::fn_0040507E(pCVar5,CASE_0,iVar2,iVar16);
        /* ST_CALLSITE[005973A5]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
        st::fn_0040241E(pCVar5,pCVar5->field_00C5,pCVar5->field_00C9);
        pCVar5->field_00D2 = 0;
        pCVar5->field_04DF = -1;
      }
      cVar1 = this_02->array_00BC[0xc].field_01E1;
      if (cVar1 != '\0') {
        switch(cVar1) {
        case '\x02':
        case '\x03':
        case '\x04':
        case '\x05':
        case '\a':
        case '\t':
        case '\n':
          this_02->array_00BC[0xc].field_01DF = cVar1;
          /* ST_CALLSITE[00597444]: CALL 0x00401b2c; direct=00401B2C FSGSTy::SetState */
          st::fn_00401B2C(this_02,7);
          this_02->array_00BC[0xc].field_01E1 = 0;
          g_currentExceptionFrame = local_a8.previous;
          return;
        case '\x06':
          this_02->array_00BC[0xc].field_01DF = cVar1;
          /* ST_CALLSITE[0059746D]: CALL 0x00401b2c; direct=00401B2C FSGSTy::SetState */
          st::fn_00401B2C(this_02,8);
          this_02->array_00BC[0xc].field_01E1 = 0;
          g_currentExceptionFrame = local_a8.previous;
          return;
        case '\b':
          this_02->array_00BC[0xc].field_01DF = cVar1;
          /* ST_CALLSITE[00597496]: CALL 0x00401b2c; direct=00401B2C FSGSTy::SetState */
          st::fn_00401B2C(this_02,10);
        }
        this_02->array_00BC[0xc].field_01E1 = 0;
        g_currentExceptionFrame = local_a8.previous;
        return;
      }
      bVar14 = this_02->array_00BC[0xc].field_01DA;
      this_02->field_0065 = CASE_2;
      if ((bVar14 != 0xff) && (*(int *)&this_02->array_00BC[bVar14].field_0x15 != 0)) {
        st::fn_006E3B50
                  ((AppClassTy *)&DAT_00807620,(undefined4 *)&this_02->array_00BC[bVar14].field_0x5);
        g_currentExceptionFrame = local_a8.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_a8.previous;
  return;
}

// 00597E70 FSGSTy::SetState
#line 4 "decomp/ST.exe/functions/00597E70/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetState

   [STSwitchEnumApplier] Switch target field_0065 uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_0065State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10

   [STSwitchEnumApplier] Switch target field_0065 uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_0065State. Cases:
   CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00595E40 -> 00597E70 @ 005964DF; literal 6 at 005964DB | 00597120 -> 00597E70 @
   00597444; literal 7 at 0059743A | 00597120 -> 00597E70 @ 0059746D; literal 8 at 00597463 |
   00597120 -> 00597E70 @ 00597496; literal 10 at 0059748C */

void __thiscall st::fn_00597E70(FSGSTy *this,byte param_1)

{
  ushort *puVar1;
  StartSystemTy *pSVar2;
  FSGSTy *this_00;
  int iVar8;
  uint *puVar4;
  char *resourceString;
  uint local_EAX_718;
  uint local_EAX_1280;
  uint local_EAX_1866;
  uint local_EAX_2234;
  uint local_EAX_3263;
  uint local_EAX_3905;
  HoloTy *pHVar5;
  uint uVar14;
  uint local_EAX_4936;
  int iVar7;
  int iVar6;
  int iVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  uint uVar15;
  uint uVar16;
  undefined4 local_270 [7];
  InternalExceptionFrame local_254;
  undefined4 local_210;
  undefined4 local_203;
  undefined4 local_1ff;
  undefined4 local_1fb;
  undefined4 local_1e9;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1c2;
  undefined4 local_1b5;
  undefined4 local_1b1;
  undefined4 local_1ad;
  undefined4 local_14d;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_126;
  undefined1 local_122;
  undefined4 local_119;
  undefined4 local_115;
  undefined4 local_111;
  FSGSTy *local_14;
  uint local_10;
  ushort *local_c;
  uint local_8;

  puVar4 = &local_210;
  local_14 = this;
  for (iVar6 = 0x7e; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  STField<undefined1>(puVar4,2) = 0;
  local_8 = 0xffffffff;
  local_254.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_254;
  iVar8 = st::fn_0072D7F0(local_254.jumpBuffer,0);
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_254.previous;
    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x397,0,iVar8,st::mutable_c_string("%s")
                               ,"FSGSTy::SetState");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar8,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x397);
    return;
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  this_00 = local_14;
  local_14->field_0065 = param_1;
  if (local_14->field_1F23 != nullptr) {
    /* ST_CALLSITE[00597F0F]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
    st::fn_0040128A(local_14->field_1F23);
    st::fn_0072E2B0(this_00->field_1F23);
    this_00->field_1F23 = nullptr;
  }
  if (this_00->field_1F27 != nullptr) {
    /* ST_CALLSITE[00597F33]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
    st::fn_0040128A(this_00->field_1F27);
    st::fn_0072E2B0(this_00->field_1F27);
    this_00->field_1F27 = nullptr;
  }
  if (this_00->field_1F2B != nullptr) {
    /* ST_CALLSITE[00597F57]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
    st::fn_0040128A(this_00->field_1F2B);
    st::fn_0072E2B0(this_00->field_1F2B);
    this_00->field_1F2B = nullptr;
  }
  if (this_00->field_1F2F != nullptr) {
    /* ST_CALLSITE[00597F7B]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
    st::fn_0040128A(this_00->field_1F2F);
    st::fn_0072E2B0(this_00->field_1F2F);
    this_00->field_1F2F = nullptr;
  }
  switch(this_00->field_0065) {
  case CASE_6:
    if (this_00->field_1ABB != '\0') {
      /* ST_CALLSITE[00597FBB]: CALL 0x0040165e; direct=0040165E FSGSTy::PrepBkgMess */
      st::fn_0040165E(this_00,'\0');
    }
    puVar1 = this_00->field_1AC0;
    uVar16 = *(uint *)(puVar1 + 10);
    if (uVar16 == 0) {
      uVar16 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(puVar1 + 4);
    }
    puVar4 = (undefined4 *)st::fn_006B4FA0((int *)puVar1);
    for (uVar15 = uVar16 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,(int)this_00->field_1AC0,0,0,0x16,0x1b8,
                     0xf0);
    iVar13 = -1;
    iVar12 = -1;
    uVar16 = 2;
    iVar9 = -1;
    iVar6 = -1;
    resourceString = st::fn_006B0140(0x254e,g_hINSTANCE_00807618);
    st::fn_00711B70(this_00->array_00BC[0xc].field_01F3,resourceString,iVar6,iVar9,uVar16,iVar12,
                   iVar13);
    st::fn_006B3430((int *)g_ddxContext_008075A8,this_00->field_1ABC);
    st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
    st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x4035e9,0x1b8,0x106,(ushort *)0x2563);
    st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0xb4,0xaa);
    pHVar5 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar5 == nullptr) {
      pHVar5 = nullptr;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      *(undefined4 *)&pHVar5->field_0x3 = 0xffffffff;
      pHVar5->field_0001 = CASE_2;
      pHVar5->field_0007 = nullptr;
      pHVar5->field_000B = nullptr;
      pHVar5->field_000F = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = -1;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    this_00->field_1F23 = pHVar5;
    if (pHVar5 != nullptr) {
      uVar16 = 0;
      cVar11 = '\x01';
      bVar10 = 0x10;
      iVar9 = 1;
      iVar6 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0xb4,0xaa,0x1b8,0x106);
      /* ST_CALLSITE[0059813E]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_718 =
           st::fn_0040459D(this_00->field_1F23,CASE_2,0xb4,0xaa,iVar6,iVar9,bVar10,cVar11,uVar16);
      if (local_EAX_718 != 0) {
        pHVar5 = this_00->field_1F23;
        pHVar5->field_0002 = 1;
        pHVar5->field_0017 = pHVar5->field_0013;
        uVar16 = *(uint *)&this_00->field_1F23->field_0x3;
        if (-1 < (int)uVar16) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar16);
        }
        /* ST_CALLSITE[00598175]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        st::fn_004055F1(this_00->field_1F23);
        st::fn_006B3AF0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
      }
    }
    if (local_8 != 0xffffffff) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
    local_119 = this_00->field_0008;
    local_126 = 0x2336;
    local_115 = 2;
    local_111 = 0x6941;
    goto switchD_00597fa6_caseD_9;
  case CASE_7:
    cVar11 = this_00->array_00BC[0xc].field_01DF;
    local_c = (ushort *)0x2563;
    if (cVar11 == '\x03') {
      st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0x2e1,0x14c,
                   (ushort *)&(this_00->array_00BC[0xc].field_01DB)->field_0140);
      st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x22,0x72);
      this_00->field_1B48 = 0x77;
      this_00->field_1B44 = 0x2fe - this_00->field_1B4C;
      if (this_00->field_1B2C != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)this_00->field_1B70,this_00->field_1B2C,0xfffffffe,this_00->field_1B44,
                   this_00->field_1B48);
      }
      if (this_00->field_1B2C != 0xffffffff) {
        st::fn_006B35D0((int *)this_00->field_1B70,this_00->field_1B2C);
      }
      this_00->field_1BD5 = 0x2fe - this_00->field_1BDD;
      this_00->field_1BD9 = 0x1b9 - this_00->field_1BE1;
      if (this_00->field_1BBD != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)this_00->field_1C01,this_00->field_1BBD,0xfffffffe,this_00->field_1BD5,
                   this_00->field_1BD9);
      }
      if (this_00->field_1BBD != 0xffffffff) {
        st::fn_006B35D0((int *)this_00->field_1C01,this_00->field_1BBD);
      }
      this_00->field_1C6A = 0x98;
      uVar16 = 0x2ee - (this_00->field_1C6E + -7) / 2;
      this_00->field_1C66 = uVar16;
      if (this_00->field_1C4E != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)this_00->field_1C92,this_00->field_1C4E,0xfffffffe,uVar16,
                   this_00->field_1C6A);
      }
      if (this_00->field_1C4E != 0xffffffff) {
        st::fn_006B35D0((int *)this_00->field_1C92,this_00->field_1C4E);
      }
      pHVar5 = (HoloTy *)st::fn_0072E530(0x33);
      if (pHVar5 == nullptr) {
        pHVar5 = nullptr;
      }
      else {
        pHVar5->field_0002 = 1;
        pHVar5->field_0000 = 0;
        *(undefined4 *)&pHVar5->field_0x3 = 0xffffffff;
        pHVar5->field_0001 = CASE_2;
        pHVar5->field_0007 = nullptr;
        pHVar5->field_000B = nullptr;
        pHVar5->field_000F = 0;
        *(undefined4 *)&pHVar5->field_0x1b = 1;
        pHVar5->field_0013 = 1;
        pHVar5->field_0017 = -1;
        pHVar5->field_0027 = 0;
        pHVar5->field_0023 = 0;
        pHVar5->field_002F = 1;
        pHVar5->field_002B = 1;
      }
      this_00->field_1F23 = pHVar5;
      if (pHVar5 != nullptr) {
        uVar16 = 0;
        cVar11 = '\x01';
        bVar10 = 0x10;
        iVar9 = 1;
        iVar6 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x22,0x72,0x2e1,0x14c);
        /* ST_CALLSITE[005985BA]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
        local_EAX_1866 =
             st::fn_0040459D(this_00->field_1F23,CASE_2,0x22,0x72,iVar6,iVar9,bVar10,cVar11,uVar16);
        if (local_EAX_1866 != 0) {
          pHVar5 = this_00->field_1F23;
          pHVar5->field_0002 = 1;
          pHVar5->field_0017 = pHVar5->field_0013;
          uVar16 = *(uint *)&this_00->field_1F23->field_0x3;
          if (-1 < (int)uVar16) {
            st::fn_006B3430((int *)g_ddxContext_008075A8,uVar16);
          }
          /* ST_CALLSITE[005985F2]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
          st::fn_004055F1(this_00->field_1F23);
        }
      }
      if (local_8 != 0xffffffff) {
        st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
        local_8 = 0xffffffff;
      }
      st::fn_006B3AF0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
      if (this_00->field_1B2C != 0xffffffff) {
        st::fn_006B3AF0((int *)this_00->field_1B70,this_00->field_1B2C);
      }
      if (this_00->field_1BBD != 0xffffffff) {
        st::fn_006B3AF0((int *)this_00->field_1C01,this_00->field_1BBD);
      }
      if (this_00->field_1C4E != 0xffffffff) {
        st::fn_006B3AF0((int *)this_00->field_1C92,this_00->field_1C4E);
      }
    }
    else {
      if (cVar11 == '\t') {
        st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x401032,0x2e1,0x175,nullptr);
        st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x22,0x5e);
        pHVar5 = (HoloTy *)st::fn_0072E530(0x33);
        if (pHVar5 == nullptr) {
          pHVar5 = nullptr;
        }
        else {
          pHVar5->field_0002 = 1;
          pHVar5->field_0000 = 0;
          *(undefined4 *)&pHVar5->field_0x3 = 0xffffffff;
          pHVar5->field_0001 = CASE_2;
          pHVar5->field_0007 = nullptr;
          pHVar5->field_000B = nullptr;
          pHVar5->field_000F = 0;
          *(undefined4 *)&pHVar5->field_0x1b = 1;
          pHVar5->field_0013 = 1;
          pHVar5->field_0017 = -1;
          pHVar5->field_0027 = 0;
          pHVar5->field_0023 = 0;
          pHVar5->field_002F = 1;
          pHVar5->field_002B = 1;
        }
        this_00->field_1F23 = pHVar5;
        if (pHVar5 != nullptr) {
          uVar16 = 0;
          cVar11 = '\x01';
          bVar10 = 0x10;
          iVar9 = 1;
          iVar6 = st::fn_006BF9F0
                            ((int *)g_ddxContext_008075A8,0x22,0x5e,0x2e1,0x175);
          /* ST_CALLSITE[0059872A]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
          local_EAX_2234 =
               st::fn_0040459D(this_00->field_1F23,CASE_2,0x22,0x5e,iVar6,iVar9,bVar10,cVar11,uVar16);
          if (local_EAX_2234 != 0) {
            pHVar5 = this_00->field_1F23;
            pHVar5->field_0002 = 1;
            pHVar5->field_0017 = pHVar5->field_0013;
            uVar16 = *(uint *)&this_00->field_1F23->field_0x3;
            if (-1 < (int)uVar16) {
              st::fn_006B3430((int *)g_ddxContext_008075A8,uVar16);
            }
            /* ST_CALLSITE[00598761]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
            st::fn_004055F1(this_00->field_1F23);
            st::fn_006B3AF0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
          }
        }
      }
      else {
        switch(cVar11) {
        case '\x02':
        case '\x04':
        case '\x05':
        case '\a':
          if (this_00->field_1ABB != '\0') {
            cVar11 = '\0';
LAB_00598221:
            /* ST_CALLSITE[00598223]: CALL 0x0040165e; direct=0040165E FSGSTy::PrepBkgMess */
            st::fn_0040165E(this_00,cVar11);
          }
          break;
        case '\n':
          if (this_00->field_1ABB != '\x01') {
            cVar11 = '\x01';
            goto LAB_00598221;
          }
        }
        switch(this_00->array_00BC[0xc].field_01DF) {
        case 2:
          /* ST_CALLSITE[00598241]: CALL 0x0040334b; direct=0040334B FSGSTy::PaintLogLogin */
          st::fn_0040334B(this_00);
          local_c = (ushort *)0x2553;
          break;
        case 4:
          /* ST_CALLSITE[00598251]: CALL 0x00401c49; direct=00401C49 FSGSTy::PaintLogNew */
          st::fn_00401C49(this_00);
          DAT_0080735f = 0;
          local_c = (ushort *)0x2552;
          break;
        case 5:
          /* ST_CALLSITE[00598268]: CALL 0x004034a4; direct=004034A4 FSGSTy::PaintLogPsw */
          st::fn_004034A4(this_00);
          local_c = (ushort *)0x2562;
          break;
        case 7:
          /* ST_CALLSITE[00598278]: CALL 0x004022c0; direct=004022C0 FSGSTy::PaintGameNew */
          st::fn_004022C0(this_00);
          local_c = (ushort *)0x255b;
          break;
        case 10:
          /* ST_CALLSITE[00598288]: CALL 0x004024be; direct=004024BE FSGSTy::PaintInfo */
          st::fn_004024BE(this_00);
          local_c = (ushort *)0x259c;
        }
        uVar16 = (-(uint)(this_00->field_1ABB != '\0') & 0xffffffb4) + 0xaa;
        local_10 = (-(uint)(this_00->field_1ABB != '\0') & 0x74) + 0x106;
        st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x4035e9,0x1b8,local_10,local_c);
        st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0xb4,uVar16);
        pHVar5 = (HoloTy *)st::fn_0072E530(0x33);
        if (pHVar5 == nullptr) {
          pHVar5 = nullptr;
        }
        else {
          pHVar5->field_0002 = 1;
          pHVar5->field_0000 = 0;
          *(undefined4 *)&pHVar5->field_0x3 = 0xffffffff;
          pHVar5->field_0001 = CASE_2;
          pHVar5->field_0007 = nullptr;
          pHVar5->field_000B = nullptr;
          pHVar5->field_000F = 0;
          *(undefined4 *)&pHVar5->field_0x1b = 1;
          pHVar5->field_0013 = 1;
          pHVar5->field_0017 = -1;
          pHVar5->field_0027 = 0;
          pHVar5->field_0023 = 0;
          pHVar5->field_002F = 1;
          pHVar5->field_002B = 1;
        }
        this_00->field_1F23 = pHVar5;
        if (pHVar5 != nullptr) {
          uVar15 = 0;
          cVar11 = '\x01';
          bVar10 = 0x10;
          iVar9 = 1;
          iVar6 = st::fn_006BF9F0
                            ((int *)g_ddxContext_008075A8,0xb4,uVar16,0x1b8,local_10);
          /* ST_CALLSITE[00598370]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
          local_EAX_1280 =
               st::fn_0040459D(this_00->field_1F23,CASE_2,0xb4,uVar16,iVar6,iVar9,bVar10,cVar11,uVar15);
          if (local_EAX_1280 != 0) {
            pHVar5 = this_00->field_1F23;
            pHVar5->field_0002 = 1;
            pHVar5->field_0017 = pHVar5->field_0013;
            uVar16 = *(uint *)&this_00->field_1F23->field_0x3;
            if (-1 < (int)uVar16) {
              st::fn_006B3430((int *)g_ddxContext_008075A8,uVar16);
            }
            /* ST_CALLSITE[005983A7]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
            st::fn_004055F1(this_00->field_1F23);
            st::fn_006B3AF0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
          }
        }
      }
      if (local_8 != 0xffffffff) {
        st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
        local_8 = 0xffffffff;
      }
    }
    switch(this_00->array_00BC[0xc].field_01DF) {
    case 2:
      local_203 = this_00->field_0008;
      local_122 = this_00->field_1ED2;
      local_210 = 0x2552;
      local_1ff = 2;
      local_1fb = 0x6954;
      local_1e9 = 0x2553;
      local_1d8 = 2;
      local_1d4 = 0x6953;
      local_1c2 = 0x2564;
      local_1b1 = 2;
      local_1ad = 0x694b;
      local_126 = 0x2336;
      local_115 = 2;
      local_111 = 0x6941;
      local_1dc = local_203;
      local_1b5 = local_203;
      local_119 = local_203;
      break;
    case 3:
      local_203 = this_00->field_0008;
      local_210 = 0x255f;
      local_1ff = 2;
      local_1fb = 0x63ff;
      local_1e9 = 0x2560;
      local_1d8 = 2;
      local_1d4 = 0x6952;
      local_14d = 0x254c;
      local_13c = 2;
      local_138 = 0x6941;
      local_126 = 0x24bc;
      local_115 = 2;
      local_111 = 0x6952;
      local_1dc = local_203;
      local_140 = local_203;
      local_119 = local_203;
      break;
    case 4:
      local_1dc = this_00->field_0008;
      local_1e9 = 0x2553;
      local_1d4 = 0x6953;
      goto LAB_00599280;
    case 5:
      local_1dc = this_00->field_0008;
      local_1e9 = 0x2561;
      local_1d4 = 0x694b;
      goto LAB_00599280;
    case 7:
      goto switchD_005987a8_caseD_7;
    case 9:
    case 10:
      local_140 = this_00->field_0008;
      goto LAB_00599290;
    }
    goto switchD_00597fa6_caseD_9;
  case CASE_8:
    this_00->field_1B48 = 99;
    this_00->field_1B44 = 0x1cd - this_00->field_1B4C;
    if (this_00->field_1B2C != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1B70,this_00->field_1B2C,0xfffffffe,this_00->field_1B44,
                 this_00->field_1B48);
    }
    if (this_00->field_1B2C != 0xffffffff) {
      st::fn_006B35D0((int *)this_00->field_1B70,this_00->field_1B2C);
    }
    this_00->field_1BD5 = 0x1cd - this_00->field_1BDD;
    this_00->field_1BD9 = 0x1b8 - this_00->field_1BE1;
    if (this_00->field_1BBD != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1C01,this_00->field_1BBD,0xfffffffe,this_00->field_1BD5,
                 this_00->field_1BD9);
    }
    if (this_00->field_1BBD != 0xffffffff) {
      st::fn_006B35D0((int *)this_00->field_1C01,this_00->field_1BBD);
    }
    this_00->field_1C6A = 0x84;
    uVar16 = 0x1bd - (this_00->field_1C6E + -7) / 2;
    this_00->field_1C66 = uVar16;
    if (this_00->field_1C4E != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1C92,this_00->field_1C4E,0xfffffffe,uVar16,
                 this_00->field_1C6A);
    }
    if (this_00->field_1C4E != 0xffffffff) {
      st::fn_006B35D0((int *)this_00->field_1C92,this_00->field_1C4E);
    }
    st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x4023b0,0x1bf,0x175,
                 (ushort *)&(this_00->array_00BC[0xc].field_01DB)->field_0140);
    st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x13,0x5e);
    pHVar5 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar5 == nullptr) {
      pHVar5 = nullptr;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      *(undefined4 *)&pHVar5->field_0x3 = 0xffffffff;
      pHVar5->field_0001 = CASE_2;
      pHVar5->field_0007 = nullptr;
      pHVar5->field_000B = nullptr;
      pHVar5->field_000F = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = -1;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    this_00->field_1F27 = pHVar5;
    if (pHVar5 != nullptr) {
      uVar16 = 0;
      cVar11 = '\x01';
      bVar10 = 0x10;
      iVar9 = 1;
      iVar6 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x13,0x5e,0x1bf,0x175);
      /* ST_CALLSITE[00598B2F]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_3263 =
           st::fn_0040459D(this_00->field_1F27,CASE_4,0x13,0x5e,iVar6,iVar9,bVar10,cVar11,uVar16);
      if (local_EAX_3263 != 0) {
        pHVar5 = this_00->field_1F27;
        pHVar5->field_0002 = 1;
        pHVar5->field_0017 = pHVar5->field_0013;
        uVar16 = *(uint *)&this_00->field_1F27->field_0x3;
        if (-1 < (int)uVar16) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar16);
        }
        /* ST_CALLSITE[00598B66]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        st::fn_004055F1(this_00->field_1F27);
        if (this_00->field_1B2C != 0xffffffff) {
          st::fn_006B3AF0((int *)this_00->field_1B70,this_00->field_1B2C);
        }
        if (this_00->field_1BBD != 0xffffffff) {
          st::fn_006B3AF0((int *)this_00->field_1C01,this_00->field_1BBD);
        }
        if (this_00->field_1C4E != 0xffffffff) {
          st::fn_006B3AF0((int *)this_00->field_1C92,this_00->field_1C4E);
        }
      }
    }
    if (local_8 != 0xffffffff) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
    uVar16 = 0x308 - this_00->field_1CFF;
    this_00->field_1CFB = 99;
    this_00->field_1CF7 = uVar16;
    if (this_00->field_1CDF != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1D23,this_00->field_1CDF,0xfffffffe,uVar16,
                 this_00->field_1CFB);
    }
    if (this_00->field_1CDF != 0xffffffff) {
      st::fn_006B35D0((int *)this_00->field_1D23,this_00->field_1CDF);
    }
    this_00->field_1D88 = 0x308 - this_00->field_1D90;
    this_00->field_1D8C = 0x16f - this_00->field_1D94;
    if (this_00->field_1D70 != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1DB4,this_00->field_1D70,0xfffffffe,this_00->field_1D88,
                 this_00->field_1D8C);
    }
    if (this_00->field_1D70 != 0xffffffff) {
      st::fn_006B35D0((int *)this_00->field_1DB4,this_00->field_1D70);
    }
    this_00->field_1E1D = 0x84;
    uVar16 = 0x2f8 - (this_00->field_1E21 + -7) / 2;
    this_00->field_1E19 = uVar16;
    if (this_00->field_1E01 != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1E45,this_00->field_1E01,0xfffffffe,uVar16,
                 this_00->field_1E1D);
    }
    if (this_00->field_1E01 != 0xffffffff) {
      st::fn_006B35D0((int *)this_00->field_1E45,this_00->field_1E01);
    }
    st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x40303f,0x124,0x175,
                 (ushort *)&(this_00->array_00BC[0xc].field_01DB)->field_0140);
    st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x1e9,0x5e);
    pHVar5 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar5 == nullptr) {
      pHVar5 = nullptr;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      *(undefined4 *)&pHVar5->field_0x3 = 0xffffffff;
      pHVar5->field_0001 = CASE_2;
      pHVar5->field_0007 = nullptr;
      pHVar5->field_000B = nullptr;
      pHVar5->field_000F = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = -1;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    this_00->field_1F2B = pHVar5;
    if (pHVar5 != nullptr) {
      uVar16 = 0;
      cVar11 = '\x01';
      bVar10 = 0x10;
      iVar9 = 1;
      iVar6 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0x175);
      /* ST_CALLSITE[00598DB1]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_3905 =
           st::fn_0040459D(this_00->field_1F2B,CASE_2,0x1e9,0x5e,iVar6,iVar9,bVar10,cVar11,uVar16);
      if (local_EAX_3905 != 0) {
        pHVar5 = this_00->field_1F2B;
        pHVar5->field_0002 = 1;
        pHVar5->field_0017 = pHVar5->field_0013;
        uVar16 = *(uint *)&this_00->field_1F2B->field_0x3;
        if (-1 < (int)uVar16) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar16);
        }
        /* ST_CALLSITE[00598DE8]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        st::fn_004055F1(this_00->field_1F2B);
        if (this_00->field_1CDF != 0xffffffff) {
          st::fn_006B3AF0((int *)this_00->field_1D23,this_00->field_1CDF);
        }
        if (this_00->field_1D70 != 0xffffffff) {
          st::fn_006B3AF0((int *)this_00->field_1DB4,this_00->field_1D70);
        }
        if (this_00->field_1E01 != 0xffffffff) {
          st::fn_006B3AF0((int *)this_00->field_1E45,this_00->field_1E01);
        }
      }
    }
    if (local_8 != 0xffffffff) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
    local_203 = this_00->field_0008;
    local_210 = 0x255b;
    local_1ff = 2;
    local_1fb = 0x694a;
    local_1e9 = 0x255c;
    local_1d4 = 0x694e;
    local_1c2 = 0x255d;
    local_1b1 = 2;
    local_1ad = 0x6949;
    local_1dc = local_203;
    local_1b5 = local_203;
    break;
  default:
    goto switchD_00597fa6_caseD_9;
  case CASE_A:
    st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x403981,0x174,0x175,
                 (ushort *)&(this_00->array_00BC[0xc].field_01DB)->field_0140);
    st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x199,0x5e);
    pHVar5 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar5 == nullptr) {
      pHVar5 = nullptr;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      *(undefined4 *)&pHVar5->field_0x3 = 0xffffffff;
      pHVar5->field_0001 = CASE_2;
      pHVar5->field_0007 = nullptr;
      pHVar5->field_000B = nullptr;
      pHVar5->field_000F = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = -1;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    this_00->field_1F2F = pHVar5;
    if (pHVar5 != nullptr) {
      uVar16 = 0;
      cVar11 = '\x01';
      bVar10 = 0x10;
      iVar9 = 1;
      iVar6 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x199,0x5e,0x174,0x175);
      /* ST_CALLSITE[00598F87]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      uVar14 = st::fn_0040459D(this_00->field_1F2F,CASE_2,0x199,0x5e,iVar6,iVar9,bVar10,cVar11,uVar16);
      if (uVar14 != 0) {
        pHVar5 = this_00->field_1F2F;
        pHVar5->field_0002 = 1;
        pHVar5->field_0017 = pHVar5->field_0013;
        uVar16 = *(uint *)&this_00->field_1F2F->field_0x3;
        if (-1 < (int)uVar16) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar16);
        }
        /* ST_CALLSITE[00598FBE]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        st::fn_004055F1(this_00->field_1F2F);
      }
    }
    if (local_8 != 0xffffffff) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
    uVar16 = 0x182 - this_00->field_1CFF;
    this_00->field_1CFB = 99;
    this_00->field_1CF7 = uVar16;
    if (this_00->field_1CDF != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1D23,this_00->field_1CDF,0xfffffffe,uVar16,
                 this_00->field_1CFB);
    }
    if (this_00->field_1CDF != 0xffffffff) {
      st::fn_006B35D0((int *)this_00->field_1D23,this_00->field_1CDF);
    }
    this_00->field_1D88 = 0x182 - this_00->field_1D90;
    this_00->field_1D8C = 0x1ce - this_00->field_1D94;
    if (this_00->field_1D70 != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1DB4,this_00->field_1D70,0xfffffffe,this_00->field_1D88,
                 this_00->field_1D8C);
    }
    if (this_00->field_1D70 != 0xffffffff) {
      st::fn_006B35D0((int *)this_00->field_1DB4,this_00->field_1D70);
    }
    this_00->field_1E1D = 0x84;
    uVar16 = 0x172 - (this_00->field_1E21 + -7) / 2;
    this_00->field_1E19 = uVar16;
    if (this_00->field_1E01 != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1E45,this_00->field_1E01,0xfffffffe,uVar16,
                 this_00->field_1E1D);
    }
    if (this_00->field_1E01 != 0xffffffff) {
      st::fn_006B35D0((int *)this_00->field_1E45,this_00->field_1E01);
    }
    st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0x174,0x175,
                 (ushort *)&(this_00->array_00BC[0xc].field_01DB)->field_0140);
    st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x13,0x5e);
    pHVar5 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar5 == nullptr) {
      pHVar5 = nullptr;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      *(undefined4 *)&pHVar5->field_0x3 = 0xffffffff;
      pHVar5->field_0001 = CASE_2;
      pHVar5->field_0007 = nullptr;
      pHVar5->field_000B = nullptr;
      pHVar5->field_000F = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = -1;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    this_00->field_1F2B = pHVar5;
    if (pHVar5 != nullptr) {
      uVar16 = 0;
      cVar11 = '\x01';
      bVar10 = 0x10;
      iVar9 = 1;
      iVar6 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x13,0x5e,0x174,0x175);
      /* ST_CALLSITE[005991B8]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_4936 =
           st::fn_0040459D(this_00->field_1F2B,CASE_4,0x13,0x5e,iVar6,iVar9,bVar10,cVar11,uVar16);
      if (local_EAX_4936 != 0) {
        pHVar5 = this_00->field_1F2B;
        pHVar5->field_0002 = 1;
        pHVar5->field_0017 = pHVar5->field_0013;
        uVar16 = *(uint *)&this_00->field_1F2B->field_0x3;
        if (-1 < (int)uVar16) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar16);
        }
        /* ST_CALLSITE[005991EF]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        st::fn_004055F1(this_00->field_1F2B);
        if (this_00->field_1CDF != 0xffffffff) {
          st::fn_006B3AF0((int *)this_00->field_1D23,this_00->field_1CDF);
        }
        if (this_00->field_1D70 != 0xffffffff) {
          st::fn_006B3AF0((int *)this_00->field_1DB4,this_00->field_1D70);
        }
        if (this_00->field_1E01 != 0xffffffff) {
          st::fn_006B3AF0((int *)this_00->field_1E45,this_00->field_1E01);
        }
      }
    }
    if (local_8 != 0xffffffff) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
switchD_005987a8_caseD_7:
    local_1dc = this_00->field_0008;
    local_1e9 = 0x24b8;
    local_1d4 = 0x63ff;
  }
LAB_00599280:
  local_1d8 = 2;
  local_140 = local_1dc;
LAB_00599290:
  local_14d = 0x254c;
  local_13c = 2;
  local_138 = 0x6941;
  local_126 = 0x24bc;
  local_115 = 2;
  local_111 = 0x6952;
  local_119 = local_140;
switchD_00597fa6_caseD_9:
  pSVar2 = this_00->array_00BC[0xc].field_01DB;
  if (pSVar2->field_02E6 != nullptr) {
    puVar4 = local_270;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0xffff;
    /* ST_CALLSITE[005992F5]: CALL 0x00401717; direct=00401717 MMsgTy::SetPanel */
    st::fn_00401717(pSVar2->field_02E6,0,(int)&local_210,0,0);
    /* ST_CALLSITE[0059930D]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
    st::fn_00404B51((this_00->array_00BC[0xc].field_01DB)->field_02E6,(int)local_270);
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8A60((byte *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C,
                 0xfffffffe,g_cursorClass_00802A30->field_0034,g_cursorClass_00802A30->field_0038);
      g_currentExceptionFrame = local_254.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_254.previous;
  return;
}

// 005999C0 FSGSTy::PrepBkgMess
#line 4 "decomp/ST.exe/functions/005999C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PrepBkgMess

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005999C0(FSGSTy *this,char param_1)

{
  ushort **slotStorage;
  FSGSTy *pFVar2;
  int iVar3;
  int uVar4;
  ushort *puVar3;
  int iVar6;
  uint uVar5;
  int iVar7;
  InternalExceptionFrame local_54;
  FSGSTy *local_10;
  int local_c;
  int local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  pFVar2 = local_10;
  if (iVar3 == 0) {
    slotStorage = &local_10->field_1AC0;
    if (local_10->field_1AC0 != nullptr) {
      st::fn_006AB060(slotStorage);
    }
    if (param_1 == '\0') {
      local_8 = 0x106;
      local_c = 0x1b8;
    }
    else {
      local_8 = (-(uint)(param_1 != '\x01') & 0xfffffffb) + 0x17a;
      local_c = (-(uint)(param_1 != '\x01') & 0x129) + 0x1b8;
    }
    iVar7 = 1;
    puVar3 = pFVar2->field_005D + 0x14;
    uVar4 = st::fn_006B4FE0(pFVar2->field_005D);
    puVar3 = (ushort *)
             st::fn_006B50C0(local_c,local_8,(uint)pFVar2->field_005D[7],uVar4,(undefined4 *)puVar3,
                          iVar7);
    uVar5 = pFVar2->field_1ABC;
    *slotStorage = puVar3;
    st::fn_006B2410(g_ddxContext_008075A8,uVar5,(uint)puVar3);
    st::fn_006B2800(g_ddxContext_008075A8,pFVar2->field_1ABC,*(uint *)(*slotStorage + 2),
                 *(uint *)(*slotStorage + 4));
    if (param_1 == '\0') {
      uVar5 = 0xb4;
    }
    else {
      uVar5 = (-(uint)(param_1 != '\x01') & 0xffffff6e) + 0xb4;
    }
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,pFVar2->field_1ABC,0xffffffff,uVar5,
               (-(uint)(param_1 != '\0') & 0xffffffb4) + 0xaa);
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,pFVar2->field_1ABC);
    pFVar2->field_1ABB = param_1;
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x3a8,0,iVar3,st::mutable_c_string("%s"),
                             "FSGSTy::PrepBkgMess");
  if (iVar6 == 0) {
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x3a8);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 00599BE0 FSGSTy::PaintLogLogin
#line 4 "decomp/ST.exe/functions/00599BE0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PaintLogLogin */

void __thiscall st::fn_00599BE0(FSGSTy *this)

{
  ushort *puVar1;
  FSGSTy *pFVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pFVar3 = local_8;
  if (iVar4 == 0) {
    puVar1 = local_8->field_1AC0;
    uVar8 = *(uint *)(puVar1 + 10);
    if (uVar8 == 0) {
      uVar8 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar1 + 4);
    }
    puVar5 = (undefined4 *)st::fn_006B4FA0((int *)puVar1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x48,0x186,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x254f,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x5b,0x188,0x1b,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x7f,0xb4,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x2550,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x92,0xb6,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x104,0x93,0x96,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x2551,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006C7570((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0xe6,0x93,(undefined4 *)0x16,
                 0x14,2,0xf);
    st::fn_006B3430((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
    st::fn_006B35D0((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x3c0,0,iVar4,st::mutable_c_string("%s"),
                             "FSGSTy::PaintLogLogin");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x3c0);
  return;
}

// 00599E90 FSGSTy::PaintLogNew
#line 4 "decomp/ST.exe/functions/00599E90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PaintLogNew */

void __thiscall st::fn_00599E90(FSGSTy *this)

{
  ushort *puVar1;
  FSGSTy *pFVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pFVar3 = local_8;
  if (iVar4 == 0) {
    puVar1 = local_8->field_1AC0;
    uVar8 = *(uint *)(puVar1 + 10);
    if (uVar8 == 0) {
      uVar8 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar1 + 4);
    }
    puVar5 = (undefined4 *)st::fn_006B4FA0((int *)puVar1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x1b,0x186,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x254f,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x2e,0x188,0x1b,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x48,0xb4,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x2550,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x5b,0xb6,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0xeb,0x48,0xb4,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x2554,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0xea,0x5b,0xb6,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x70,0x6e,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x2557,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x83,0x70,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0xa5,0x70,0x6e,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x2558,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0xa4,0x83,0x70,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x131,0x70,0x6e,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x2559,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x130,0x83,0x70,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x98,0x186,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x255a,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0xab,0x188,0x4d,0xf,0xd);
    st::fn_006B3430((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
    st::fn_006B35D0((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),999,0,iVar4,st::mutable_c_string("%s"),
                             "FSGSTy::PaintLogNew");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),999);
  return;
}

// 0059A320 FSGSTy::PaintLogPsw
#line 4 "decomp/ST.exe/functions/0059A320/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PaintLogPsw */

void __thiscall st::fn_0059A320(FSGSTy *this)

{
  ushort *puVar1;
  FSGSTy *pFVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pFVar3 = local_8;
  if (iVar4 == 0) {
    puVar1 = local_8->field_1AC0;
    uVar8 = *(uint *)(puVar1 + 10);
    if (uVar8 == 0) {
      uVar8 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar1 + 4);
    }
    puVar5 = (undefined4 *)st::fn_006B4FA0((int *)puVar1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x2a,0x186,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x254f,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x3d,0x188,0x1b,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x61,0xb4,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x2556,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x74,0xb6,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x89,0xb4,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x2555,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x9c,0xb6,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0xb1,0xb4,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x2554,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0xc4,0xb6,0x16,0xf,0xd);
    st::fn_006B3430((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
    st::fn_006B35D0((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x401,0,iVar4,st::mutable_c_string("%s"),
                             "FSGSTy::PaintLogPsw");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x401);
  return;
}

// 0059A640 FSGSTy::PaintGameNew
#line 4 "decomp/ST.exe/functions/0059A640/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PaintGameNew */

void __thiscall st::fn_0059A640(FSGSTy *this)

{
  ushort *puVar1;
  FSGSTy *pFVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pFVar3 = local_8;
  if (iVar4 == 0) {
    puVar1 = local_8->field_1AC0;
    uVar8 = *(uint *)(puVar1 + 10);
    if (uVar8 == 0) {
      uVar8 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar1 + 4);
    }
    puVar5 = (undefined4 *)st::fn_006B4FA0((int *)puVar1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x48,0x186,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x256b,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x5b,0x188,0x1b,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x7f,0xb4,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x2550,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x92,0xb6,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0xb1,0xb4,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x256d,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006C7570((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x19,0xc5,(undefined4 *)0x186
                 ,0x19,4,0xf);
    st::fn_006C7570((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x1b,199,(undefined4 *)0x182,
                 0x15,4,0xf);
    st::fn_006B3430((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
    st::fn_006B35D0((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x418,0,iVar4,st::mutable_c_string("%s"),
                             "FSGSTy::PaintGameNew");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x418);
  return;
}

// 0059A910 FSGSTy::PaintInfo
#line 4 "decomp/ST.exe/functions/0059A910/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PaintInfo */

void __thiscall st::fn_0059A910(FSGSTy *this)

{
  ushort *puVar1;
  FSGSTy *pFVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pFVar3 = local_8;
  if (iVar4 == 0) {
    puVar1 = local_8->field_1AC0;
    uVar8 = *(uint *)(puVar1 + 10);
    if (uVar8 == 0) {
      uVar8 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar1 + 4);
    }
    puVar5 = (undefined4 *)st::fn_006B4FA0((int *)puVar1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x1b,0x186,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x254f,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x2e,0x188,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x1e,0x2e,0x17c,
                     0x14);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,(char *)pFVar3->field_1B0C,0,-1,0);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x43,0x6e,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x2557,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x56,0x70,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0xa5,0x43,0x6e,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x2558,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0xa4,0x56,0x70,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x131,0x43,0x6e,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x2559,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x130,0x56,0x70,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x6b,0x186,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x255a,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x7e,0x188,0x4d,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0xcf,0x186,
                     0x14);
    uVar8 = 0;
    iVar9 = -1;
    iVar4 = -1;
    pcVar6 = st::fn_006B0140(0x259d,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0xde,0x50,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x259f,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0xf2,0x52,0x14,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x7d,0xde,0x50,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x25a0,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x7c,0xf2,0x52,0x14,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0xe1,0xde,0x50,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x25a5,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0xe0,0xf2,0x52,0x14,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x145,0xde,0x50,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x25a1,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x144,0xf2,0x52,0x14,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x106,0x50,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x25a4,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x11a,0x52,0x19,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x7d,0x106,0x50,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x25a3,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x7c,0x11a,0x52,0x19,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0xe1,0x106,0xb4,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x25a2,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0xe0,0x11a,0xb6,0x19,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x13d,0x186,
                     0x14);
    uVar8 = 0;
    iVar9 = -1;
    iVar4 = -1;
    pcVar6 = st::fn_006B0140(0x259e,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x14c,0x50,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x259f,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x160,0x52,0x14,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x7d,0x14c,0x50,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x25a0,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x7c,0x160,0x52,0x14,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0xe1,0x14c,0x50,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x25a5,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0xe0,0x160,0x52,0x14,0xf,0xd);
    st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x145,0x14c,0x50,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    pcVar6 = st::fn_006B0140(0x25a1,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x144,0x160,0x52,0x14,0xf,0xd
                );
    st::fn_006B3430((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
    st::fn_006B35D0((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x46c,0,iVar4,st::mutable_c_string("%s"),
                             "FSGSTy::PaintInfo");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x46c);
  return;
}

// 0059B2C0 FSGSTy::PaintLadder
#line 4 "decomp/ST.exe/functions/0059B2C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PaintLadder
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall PaintLadder(FSGSTy * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0059B5FE RET | 0059B647 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_0059B2C0(FSGSTy *this)

{
  int iVar2;
  FSGSTy *pFVar3;
  StartServTy *pSVar4;
  int iVar4;
  uint uVar5;
  tm *ptVar6;
  int iVar6;
  int iVar7;
  StartServTy *this_00;
  uint uVar8;
  StartServTy *this_01;
  int *piVar9;
  int *piVar10;
  InternalExceptionFrame local_8c;
  StartServTy local_48 [52];
  void *local_14;
  FSGSTy *local_10;
  uint local_c;
  StartServTy *local_8;

  local_14 = this->field_1EDB;
  if (((this->field_1E8E != 0) && (this->field_1E92 != nullptr)) &&
     (local_14 != nullptr)) {
    local_8c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_8c;
    local_10 = this;
    iVar4 = st::fn_0072D7F0(local_8c.jumpBuffer,0);
    if (iVar4 == 0) {
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0x22,0x5e,0x2e1,0x175);
      pFVar3 = local_10;
      /* ST_CALLSITE[0059B368]: CALL 0x00402298; direct=00402298 PutDDXClip */
      st::fn_00402298(0x18a,0x90,0x168,0x32,100,(byte *)0x19,'\x01',local_10->field_1E92);
      /* ST_CALLSITE[0059B388]: CALL dword ptr [0x0085bde8] */
      st::external_00000080((LPSTR)local_48,st::mutable_c_string("%6d_:_%6d"),pFVar3->field_1EDF,
                (pFVar3->field_1EE3 - 1) + pFVar3->field_1EDF);
      /* ST_CALLSITE[0059B3AD]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
      st::fn_00404C2D
                (local_48,0,0x18b,0x91,0x62,0x17,(char *)local_48,0xffffffff,0xffffffff,
                 (ccFntTy *)pFVar3->field_1A7F,0);
      /* ST_CALLSITE[0059B3D2]: CALL 0x00402298; direct=00402298 PutDDXClip */
      st::fn_00402298(0x22,0xd6,0,0x78,0x2e1,(byte *)0xfd,'\x01',pFVar3->field_1E92);
      if (pFVar3->field_1EE3 != 0) {
        local_8 = (StartServTy *)0xdb;
        piVar9 = (int *)((int)local_14 + 0xc);
        local_c = 0;
        do {
          /* ST_CALLSITE[0059B40D]: CALL dword ptr [0x0085bde8] */
          st::external_00000080((LPSTR)local_48,st::mutable_c_string("%6d"),pFVar3->field_1EDF + local_c);
          /* ST_CALLSITE[0059B430]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
          st::fn_00404C2D
                    (local_48,0,0x23,(int)local_8,0x2b,0x10,(char *)local_48,0xffffffff,0xffffffff,
                     (ccFntTy *)pFVar3->field_1A7F,0);
          /* ST_CALLSITE[0059B455]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
          st::fn_00404C2D
                    (local_8,0,0x50,(int)local_8,0xe9,0x10,(char *)(piVar9 + 2),0,0xffffffff,
                     pFVar3->array_00BC[0xc].field_01F3,2);
          iVar7 = -1;
          piVar10 = piVar9 + 2;
          do {
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            iVar2 = *piVar10;
            piVar10 = (int *)((int)piVar10 + 1);
          } while ((char)iVar2 != '\0');
          if (iVar7 != -2) {
            /* ST_CALLSITE[0059B47A]: CALL dword ptr [0x0085bde8] */
            st::external_00000080((LPSTR)local_48,st::mutable_c_string("%6d"),piVar9[1]);
            pSVar4 = local_8;
            /* ST_CALLSITE[0059B4A0]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
            st::fn_00404C2D
                      (pFVar3->field_1A7F,0,0x13b,(int)local_8,0x44,0x10,(char *)local_48,0xffffffff
                       ,0xffffffff,(ccFntTy *)pFVar3->field_1A7F,0);
            /* ST_CALLSITE[0059B4B9]: CALL dword ptr [0x0085bde8] */
            st::external_00000080((LPSTR)local_48,st::mutable_c_string("%6d_:_%6d_:_%6d"),piVar9[-2],piVar9[-1],*piVar9);
            /* ST_CALLSITE[0059B4E2]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
            st::fn_00404C2D
                      (pFVar3->field_1A7F,0,0x181,(int)pSVar4,0x8f,0x10,(char *)local_48,0xffffffff,
                       0xffffffff,(ccFntTy *)pFVar3->field_1A7F,0);
            /* ST_CALLSITE[0059B4FD]: CALL dword ptr [0x0085bde8] */
            st::external_00000080((LPSTR)local_48,st::mutable_c_string("%6d"),*piVar9 + piVar9[-1] + piVar9[-2]);
            /* ST_CALLSITE[0059B520]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
            st::fn_00404C2D
                      (this_00,0,0x212,(int)pSVar4,0x44,0x10,(char *)local_48,0xffffffff,0xffffffff,
                       (ccFntTy *)pFVar3->field_1A7F,0);
            uVar8 = *piVar9 + piVar9[-2] + piVar9[-1];
            uVar5 = 0;
            if (uVar8 != 0) {
              uVar5 = (uint)(piVar9[-2] * 100) / uVar8;
            }
            /* ST_CALLSITE[0059B54F]: CALL dword ptr [0x0085bde8] */
            st::external_00000080((LPSTR)local_48,st::mutable_c_string("%3d"),uVar5);
            /* ST_CALLSITE[0059B572]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
            st::fn_00404C2D
                      (this_01,0,600,(int)pSVar4,0x30,0x10,(char *)local_48,0xffffffff,0xffffffff,
                       (ccFntTy *)pFVar3->field_1A7F,0);
            ptVar6 = st::fn_0072FC30((time_t *)(piVar9 + -3));
            /* ST_CALLSITE[0059B59C]: CALL dword ptr [0x0085bde8] */
            st::external_00000080((LPSTR)local_48,st::mutable_c_string("%2d_:_%2d_:_%4d"),ptVar6->tm_mday,ptVar6->tm_mon + 1,
                      ptVar6->tm_year + 0x76c);
            /* ST_CALLSITE[0059B5C2]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
            st::fn_00404C2D
                      (pFVar3->field_1A7F,0,0x28a,(int)pSVar4,0x76,0x10,(char *)local_48,0xffffffff,
                       0xffffffff,(ccFntTy *)pFVar3->field_1A7F,0);
            local_8 = pSVar4;
          }
          local_c = local_c + 1;
          piVar9 = piVar9 + 9;
          local_8 = local_8 + 0x10;
        } while (local_c < pFVar3->field_1EE3);
      }
      g_currentExceptionFrame = local_8c.previous;
      return;
    }
    g_currentExceptionFrame = local_8c.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x49b,0,iVar4,st::mutable_c_string("%s")
                               ,"FSGSTy::PaintLadder");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x49b);
  }
  return;
}

// 0059B740 FSGSTy::CloseButtons
#line 4 "decomp/ST.exe/functions/0059B740/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::CloseButtons */

void __thiscall st::fn_0059B740(FSGSTy *this)

{
  FSGSTy *this_00;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    /* ST_CALLSITE[0059B774]: CALL 0x00403459; direct=00403459 MMObjTy::CloseButtons */
    st::fn_00403459((MMObjTy *)local_8);
    st::fn_00404BF1(this_00,0xc,'\x01',-1);
    /* ST_CALLSITE[0059B788]: CALL 0x0040427d; direct=0040427D FSGSTy::DeleteCtrls */
    st::fn_0040427D(this_00);
    this_00->field_0065 = CASE_4;
    this_00->array_00BC[0xc].field_01DF = 0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x4a9,0,errorCode,
                             st::mutable_c_string("%s"),"FSGSTy::CloseButtons");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x4a9);
  return;
}

// 0059C520 FSGSTy::CreateCtrls
#line 4 "decomp/ST.exe/functions/0059C520/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::CreateCtrls

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10 */

void __thiscall st::fn_0059C520(FSGSTy *this)

{
  FSGSTy *pFVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pFVar2 = local_8;
  if (errorCode == 0) {
    switch(local_8->array_00BC[0xc].field_01DF) {
    case 2:
      /* ST_CALLSITE[0059C571]: CALL 0x00402392; direct=00402392 FSGSTy::LoginCtrls */
      st::fn_00402392(local_8);
      pFVar2->array_00BC[0xc].field_01E2 = 1;
      g_currentExceptionFrame = local_4c.previous;
      return;
    case 3:
      /* ST_CALLSITE[0059C5B4]: CALL 0x00401d75; direct=00401D75 FSGSTy::LicCtrls */
      st::fn_00401D75(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case 4:
      /* ST_CALLSITE[0059C58C]: CALL 0x00402022; direct=00402022 FSGSTy::NewIDCtrls */
      st::fn_00402022(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case 5:
      /* ST_CALLSITE[0059C5A0]: CALL 0x004032d3; direct=004032D3 FSGSTy::PswCtrls */
      st::fn_004032D3(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case 6:
      /* ST_CALLSITE[0059C5C8]: CALL 0x00404570; direct=00404570 FSGSTy::ChatCtrls */
      st::fn_00404570(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case 7:
      /* ST_CALLSITE[0059C5DC]: CALL 0x00403fad; direct=00403FAD FSGSTy::NewGameCtrls */
      st::fn_00403FAD(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case 8:
      /* ST_CALLSITE[0059C5F0]: CALL 0x0040196a; direct=0040196A FSGSTy::JoinGameCtrls */
      st::fn_0040196A(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case 9:
      /* ST_CALLSITE[0059C618]: CALL 0x00404421; direct=00404421 FSGSTy::LadderCtrls */
      st::fn_00404421(local_8);
      break;
    case 10:
      /* ST_CALLSITE[0059C604]: CALL 0x00402626; direct=00402626 FSGSTy::InfoCtrls */
      st::fn_00402626(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x582,0,errorCode,
                             st::mutable_c_string("%s"),"FSGSTy::CreateCtrls");
  if (iVar3 == 0) {
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x582);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 0059C700 FSGSTy::LoginCtrls
#line 4 "decomp/ST.exe/functions/0059C700/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::LoginCtrls */

void __thiscall st::fn_0059C700(FSGSTy *this)

{
  FSGSTy *this_00;
  int iVar5;
  DArrayTy *pDVar2;
  uint uVar3;
  int iVar4;
  int iVar6;
  char *text;
  ccFntTy **ppcVar7;
  ccFntTy *local_8d8 [8];
  DArrayTy *local_8b8;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  ppcVar7 = local_8d8;
  local_8 = this;
  for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppcVar7 = nullptr;
    ppcVar7 = ppcVar7 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar5 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar5 == 0) {
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00 = local_8;
    local_8->field_1AE8 = pDVar2;
    st::fn_006B5AA0(pDVar2,&CHAR_00h_00807e1d);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AEC = pDVar2;
    text = &CHAR_00h_00807e5d;
    if (DAT_0080735f == '\0') {
      text = &CHAR_00h_008016a0;
    }
    st::fn_006B5AA0(pDVar2,text);
    ppcVar7 = local_8d8;
    for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
      *ppcVar7 = nullptr;
      ppcVar7 = ppcVar7 + 1;
    }
    local_8d8[2] = this_00->array_00BC[0xc].field_01F3;
    local_8b8 = this_00->field_1AE8;
    local_8ac = this_00->field_0008;
    local_64 = 2;
    local_8a8 = 2;
    local_888 = 2;
    local_8d8[0] = (ccFntTy *)0x1;
    local_8d8[1] = (ccFntTy *)0x89;
    local_8d8[3] = (ccFntTy *)0xd2;
    local_8d8[4] = (ccFntTy *)0x106;
    local_8d8[5] = (ccFntTy *)0x17c;
    local_8d8[6] = (ccFntTy *)0x19;
    local_8d8[7] = (ccFntTy *)0x10;
    local_8a4 = 0x68ff;
    local_884 = 0x697f;
    local_60 = 0x6955;
    local_88c = local_8ac;
    local_68 = local_8ac;
    /* ST_CALLSITE[0059C858]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC4,nullptr,st::machine_word_boundary_cast<undefined4>(local_8d8),0);
    local_8b8 = this_00->field_1AEC;
    local_8d8[1] = (ccFntTy *)0xa9;
    local_8d8[4] = (ccFntTy *)0x13d;
    local_8d8[5] = (ccFntTy *)0xaa;
    local_8d8[6] = (ccFntTy *)0x14;
    local_8d8[7] = (ccFntTy *)0x10;
    /* ST_CALLSITE[0059C8AE]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC8,nullptr,st::machine_word_boundary_cast<undefined4>(local_8d8),0);
    /* ST_CALLSITE[0059C8CF]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar3 = st::fn_0040361B((MMObjTy *)this_00,3,1,0x19a,0x13d,0x16,0x14,0x6900,0x6980);
    this_00->field_1AD0 = uVar3;
    this_00->field_002D = 0x61;
    this_00->field_0035 = 0;
    this_00->field_0037 = 0;
    st::fn_006E6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x5ac,0,iVar5,st::mutable_c_string("%s"),
                             "FSGSTy::LoginCtrls");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x5ac);
  return;
}

// 0059C9F0 FSGSTy::NewIDCtrls
#line 4 "decomp/ST.exe/functions/0059C9F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::NewIDCtrls */

void __thiscall st::fn_0059C9F0(FSGSTy *this)

{
  FSGSTy *this_00;
  int iVar4;
  DArrayTy *pDVar2;
  int iVar3;
  int iVar5;
  ccFntTy **ppcVar6;
  ccFntTy *local_8d8 [8];
  DArrayTy *local_8b8;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  ppcVar6 = local_8d8;
  local_8 = this;
  for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppcVar6 = nullptr;
    ppcVar6 = ppcVar6 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar4 == 0) {
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00 = local_8;
    local_8->field_1AE8 = pDVar2;
    st::fn_006B5AA0(pDVar2,&CHAR_00h_00807e1d);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AEC = pDVar2;
    st::fn_006B5AA0(pDVar2,&CHAR_00h_008016a0);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AF0 = pDVar2;
    st::fn_006B5AA0(pDVar2,&CHAR_00h_008016a0);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AF8 = pDVar2;
    st::fn_006B5AA0(pDVar2,&CHAR_00h_008016a0);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AFC = pDVar2;
    st::fn_006B5AA0(pDVar2,&CHAR_00h_008016a0);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1B00 = pDVar2;
    st::fn_006B5AA0(pDVar2,&CHAR_00h_008016a0);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1B04 = &pDVar2->flags;
    st::fn_006B5AA0(pDVar2,&CHAR_00h_008016a0);
    ppcVar6 = local_8d8;
    for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppcVar6 = nullptr;
      ppcVar6 = ppcVar6 + 1;
    }
    local_8d8[2] = this_00->array_00BC[0xc].field_01F3;
    local_8b8 = this_00->field_1AE8;
    local_8ac = this_00->field_0008;
    local_8d8[0] = (ccFntTy *)0x1;
    local_8d8[1] = (ccFntTy *)0x89;
    local_8d8[3] = (ccFntTy *)0xd2;
    local_8d8[4] = (ccFntTy *)0xd9;
    local_8d8[5] = (ccFntTy *)0x17c;
    local_8d8[6] = (ccFntTy *)0x19;
    local_8d8[7] = (ccFntTy *)0x10;
    local_64 = 2;
    local_8a8 = 2;
    local_888 = 2;
    local_8a4 = 0x68ff;
    local_884 = 0x697f;
    local_60 = 0x6955;
    local_88c = local_8ac;
    local_68 = local_8ac;
    /* ST_CALLSITE[0059CBC4]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC4,nullptr,st::machine_word_boundary_cast<undefined4>(local_8d8),0);
    local_8b8 = this_00->field_1AEC;
    local_8d8[1] = (ccFntTy *)0xa9;
    local_8d8[4] = (ccFntTy *)0x106;
    local_8d8[5] = (ccFntTy *)0xaa;
    local_8d8[6] = (ccFntTy *)0x14;
    local_8d8[7] = (ccFntTy *)0x10;
    /* ST_CALLSITE[0059CC1E]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC8,nullptr,st::machine_word_boundary_cast<undefined4>(local_8d8),0);
    local_8b8 = this_00->field_1AF0;
    local_8d8[3] = (ccFntTy *)0x1a4;
    /* ST_CALLSITE[0059CC50]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1ACC,nullptr,st::machine_word_boundary_cast<undefined4>(local_8d8),0);
    local_8b8 = this_00->field_1AF8;
    local_8d8[1] = (ccFntTy *)0x89;
    local_8d8[3] = (ccFntTy *)0xd2;
    local_8d8[4] = (ccFntTy *)0x12e;
    local_8d8[5] = (ccFntTy *)0x64;
    local_8d8[7] = (ccFntTy *)0x1ff;
    /* ST_CALLSITE[0059CCA6]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AD8,nullptr,st::machine_word_boundary_cast<undefined4>(local_8d8),0);
    local_8b8 = this_00->field_1AFC;
    local_8d8[3] = (ccFntTy *)0x15e;
    /* ST_CALLSITE[0059CCD8]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1ADC,nullptr,st::machine_word_boundary_cast<undefined4>(local_8d8),0);
    local_8b8 = this_00->field_1B00;
    local_8d8[3] = (ccFntTy *)0x1ea;
    /* ST_CALLSITE[0059CD0A]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AE0,nullptr,st::machine_word_boundary_cast<undefined4>(local_8d8),0);
    local_8b8 = (DArrayTy *)this_00->field_1B04;
    local_8d8[1] = (ccFntTy *)0xc8;
    local_8d8[3] = (ccFntTy *)0xd2;
    local_8d8[4] = (ccFntTy *)0x156;
    local_8d8[5] = (ccFntTy *)0x17c;
    local_8d8[6] = (ccFntTy *)0x4b;
    local_884 = 0x6981;
    /* ST_CALLSITE[0059CD6A]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,(undefined4 *)&this_00->field_1AE4,nullptr,st::machine_word_boundary_cast<undefined4>(local_8d8),0);
    this_00->field_002D = 0x61;
    this_00->field_0035 = 0;
    this_00->field_0037 = 0;
    st::fn_006E6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x5f4,0,iVar4,st::mutable_c_string("%s"),
                             "FSGSTy::NewIDCtrls");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x5f4);
  return;
}

// 0059CEE0 FSGSTy::PswCtrls
#line 4 "decomp/ST.exe/functions/0059CEE0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PswCtrls */

void __thiscall st::fn_0059CEE0(FSGSTy *this)

{
  FSGSTy *this_00;
  int iVar4;
  DArrayTy *pDVar2;
  int iVar3;
  int iVar5;
  ccFntTy **ppcVar6;
  ccFntTy *local_8d8 [8];
  DArrayTy *local_8b8;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  ppcVar6 = local_8d8;
  local_8 = this;
  for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppcVar6 = nullptr;
    ppcVar6 = ppcVar6 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar4 == 0) {
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00 = local_8;
    local_8->field_1AE8 = pDVar2;
    st::fn_006B5AA0(pDVar2,&CHAR_00h_00807e1d);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AEC = pDVar2;
    st::fn_006B5AA0(pDVar2,&CHAR_00h_008016a0);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AF0 = pDVar2;
    st::fn_006B5AA0(pDVar2,&CHAR_00h_008016a0);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AF4 = pDVar2;
    st::fn_006B5AA0(pDVar2,&CHAR_00h_008016a0);
    ppcVar6 = local_8d8;
    for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppcVar6 = nullptr;
      ppcVar6 = ppcVar6 + 1;
    }
    local_8d8[2] = this_00->array_00BC[0xc].field_01F3;
    local_8b8 = this_00->field_1AE8;
    local_8ac = this_00->field_0008;
    local_64 = 2;
    local_8a8 = 2;
    local_888 = 2;
    local_8d8[0] = (ccFntTy *)0x1;
    local_8d8[1] = (ccFntTy *)0x89;
    local_8d8[3] = (ccFntTy *)0xd2;
    local_8d8[4] = (ccFntTy *)0xe8;
    local_8d8[5] = (ccFntTy *)0x17c;
    local_8d8[6] = (ccFntTy *)0x19;
    local_8d8[7] = (ccFntTy *)0x10;
    local_8a4 = 0x68ff;
    local_884 = 0x697f;
    local_60 = 0x6955;
    local_88c = local_8ac;
    local_68 = local_8ac;
    /* ST_CALLSITE[0059D060]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC4,nullptr,st::machine_word_boundary_cast<undefined4>(local_8d8),0);
    local_8b8 = this_00->field_1AEC;
    local_8d8[1] = (ccFntTy *)0xa9;
    local_8d8[4] = (ccFntTy *)0x11f;
    local_8d8[5] = (ccFntTy *)0xaa;
    local_8d8[6] = (ccFntTy *)0x14;
    local_8d8[7] = (ccFntTy *)0x10;
    /* ST_CALLSITE[0059D0B6]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC8,nullptr,st::machine_word_boundary_cast<undefined4>(local_8d8),0);
    local_8b8 = this_00->field_1AF4;
    local_8d8[4] = (ccFntTy *)0x147;
    /* ST_CALLSITE[0059D0E8]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AD4,nullptr,st::machine_word_boundary_cast<undefined4>(local_8d8),0);
    local_8b8 = this_00->field_1AF0;
    local_8d8[4] = (ccFntTy *)0x16f;
    /* ST_CALLSITE[0059D11A]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1ACC,nullptr,st::machine_word_boundary_cast<undefined4>(local_8d8),0);
    this_00->field_002D = 0x61;
    this_00->field_0035 = 0;
    this_00->field_0037 = 0;
    st::fn_006E6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x624,0,iVar4,st::mutable_c_string("%s"),
                             "FSGSTy::PswCtrls");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x624);
  return;
}

// 0059D240 FSGSTy::LicCtrls
#line 4 "decomp/ST.exe/functions/0059D240/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::LicCtrls */

void __thiscall st::fn_0059D240(FSGSTy *this)

{
  ccFntTy *pcVar1;
  uint uVar2;
  FSGSTy *this_00;
  int iVar7;
  uint uVar4;
  int local_EAX_163;
  LPBITMAPINFO ptVar5;
  int iVar6;
  int iVar8;
  byte *puVar9;
  int *piVar10;
  byte *puVar11;
  ushort *puVar12;
  int local_8c4 [5];
  int local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_8a0;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 local_808 [4];
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_68c;
  undefined4 local_688 [4];
  undefined4 local_678;
  undefined4 local_674;
  undefined4 local_620;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  piVar10 = local_8c4;
  local_8 = this;
  for (iVar8 = 0x21e; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar7 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar7 == 0) {
    puVar9 = (byte *)(&local_8->field_1E8E);
    if (local_8->field_1E8E != 0) {
      st::fn_006AB060(puVar9);
    }
    if (this_00->field_1E92 != nullptr) {
      st::fn_006AB060(&this_00->field_1E92);
    }
    iVar8 = 1;
    puVar12 = this_00->field_005D + 0x14;
    uVar4 = st::fn_006B4FE0(this_00->field_005D);
    local_EAX_163 =
         st::fn_006B50C0(0x2c8 - this_00->field_1B4C,0x149,(uint)this_00->field_005D[7],uVar4,
                      (undefined4 *)puVar12,iVar8);
    *puVar9 = local_EAX_163;
    ptVar5 = st::fn_006C4880(g_dDXContext_0080759C,0x22,0x72,0x2e1,0x14c,8);
    iVar8 = *puVar9;
    this_00->field_1E92 = ptVar5;
    if ((iVar8 != 0) && (ptVar5 != (LPBITMAPINFO)0x0)) {
      pcVar1 = this_00->array_00BC[0xc].field_01F3;
      local_8c4[0] = 0;
      local_8c4[3] = 0;
      local_8c4[4] = 0x2c8 - this_00->field_1B4C;
      local_8c4[1] = 2;
      local_8a4 = 0x28;
      local_8a0 = 0x73;
      local_8c4[2] = 1;
      if (pcVar1->field_00A0 != 0) {
        st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar1);
      }
      local_8b0 = *(int *)&pcVar1->field_0x8a;
      local_8a8 = (undefined4)(0x149 / (longlong)local_8b0);
      local_808[3] = this_00->field_1BD9;
      local_810 = 0;
      local_808[0] = 0;
      local_808[2] = this_00->field_1BD5;
      local_888 = 2;
      local_80c = 2;
      local_808[1] = 2;
      local_7f8 = this_00->field_1BDD;
      local_7a4 = 2;
      local_68c = 2;
      local_8ac = 1;
      local_884 = 0x6982;
      local_814 = 4;
      local_7f4 = this_00->field_1BE1;
      local_6f8 = 500;
      local_6f4 = 0x32;
      local_7a0 = 0x6334;
      uVar2 = this_00->field_1B48;
      local_88c = this_00->field_0008;
      local_7a8 = local_88c;
      puVar9 = (byte *)(local_808);
      puVar11 = (byte *)(local_688);
      memmove(puVar11, puVar9, 0x17c); /* compiler REP MOVS byte copy */
      local_688[2] = this_00->field_1B44;
      local_674 = this_00->field_1B50;
      local_678 = this_00->field_1B4C;
      local_4fc = this_00->field_1C66;
      local_4f4 = this_00->field_1C6E;
      local_4f8 = this_00->field_1C6A;
      local_620 = 0x6333;
      local_50c = 3;
      local_508 = 1;
      local_500 = 0;
      local_4f0 = 0xe7;
      local_4ec = 0xe;
      local_4b4 = 2;
      local_4b0 = 0x6335;
      local_688[3] = uVar2;
      local_4b8 = local_88c;
      /* ST_CALLSITE[0059D514]: CALL dword ptr [EDX + 0x8] */
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,8,&this_00->field_1B14,nullptr,st::machine_word_boundary_cast<undefined4>(local_8c4),0);
      this_00->field_002D = 5;
      st::fn_006E6080(this_00,2,this_00->field_1B14,(undefined4 *)&this_00->field_0x1d);
      if (this_00->field_1B2C != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)this_00->field_1B70,this_00->field_1B2C,0xfffffffe,this_00->field_1B44,
                   this_00->field_1B48);
      }
      if (this_00->field_1BBD != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)this_00->field_1C01,this_00->field_1BBD,0xfffffffe,this_00->field_1BD5,
                   this_00->field_1BD9);
      }
      if (this_00->field_1C4E != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)this_00->field_1C92,this_00->field_1C4E,0xfffffffe,this_00->field_1C66,
                   this_00->field_1C6A);
      }
    }
    this_00->field_002D = 0x61;
    this_00->field_0035 = 0;
    this_00->field_0037 = 0;
    st::fn_006E6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x666,0,iVar7,st::mutable_c_string("%s"),
                             "FSGSTy::LicCtrls");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar7,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x666);
  return;
}

// 0059D720 FSGSTy::InfoCtrls
#line 4 "decomp/ST.exe/functions/0059D720/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::InfoCtrls
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall InfoCtrls(FSGSTy * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0059D9FB RET | 0059DA40 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_0059D720(FSGSTy *this)

{
  byte bVar1;
  FSGSTy *this_00;
  int iVar3;
  byte *pbVar4;
  int iVar6;
  DArrayTy *pDVar5;
  int iVar5;
  int iVar7;
  char *pcVar8;
  ccFntTy **ppcVar9;
  bool bVar10;
  ccFntTy *local_8dc [8];
  DArrayTy *local_8bc;
  undefined4 local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  InternalExceptionFrame local_50;
  FSGSTy *local_c;
  int local_8;

  pbVar4 = this->field_1B0C;
  if (pbVar4 != nullptr) {
    pcVar8 = &CHAR_00h_00807e1d;
    ppcVar9 = local_8dc;
    local_c = this;
    for (iVar7 = 0x223; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppcVar9 = nullptr;
      ppcVar9 = ppcVar9 + 1;
    }
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_0059d77b:
        local_8 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_0059d780;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_0059d77b;
      pbVar4 = pbVar4 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    local_8 = 0;
LAB_0059d780:
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    iVar6 = st::fn_0072D7F0(local_50.jumpBuffer,0);
    if (iVar6 == 0) {
      pDVar5 = st::fn_006B54F0(nullptr,1,1);
      this_00 = local_c;
      local_c->field_1AF8 = pDVar5;
      st::fn_006B5AA0(pDVar5,&CHAR_00h_008016a0);
      pDVar5 = st::fn_006B54F0(nullptr,1,1);
      this_00->field_1AFC = pDVar5;
      st::fn_006B5AA0(pDVar5,&CHAR_00h_008016a0);
      pDVar5 = st::fn_006B54F0(nullptr,1,1);
      this_00->field_1B00 = pDVar5;
      st::fn_006B5AA0(pDVar5,&CHAR_00h_008016a0);
      pDVar5 = st::fn_006B54F0(nullptr,1,1);
      this_00->field_1B04 = &pDVar5->flags;
      st::fn_006B5AA0(pDVar5,&CHAR_00h_008016a0);
      ppcVar9 = local_8dc;
      for (iVar7 = 0x223; iVar3 = local_8, iVar7 != 0; iVar7 = iVar7 + -1) {
        *ppcVar9 = nullptr;
        ppcVar9 = ppcVar9 + 1;
      }
      local_8dc[0] = (ccFntTy *)0x1;
      local_8dc[1] = (ccFntTy *)0x89;
      if (local_8 != 0) {
        local_8dc[1] = (ccFntTy *)0x99;
      }
      local_8dc[2] = this_00->array_00BC[0xc].field_01F3;
      local_8bc = this_00->field_1AF8;
      local_8b0 = this_00->field_0008;
      local_68 = 2;
      local_8ac = 2;
      local_88c = 2;
      local_8dc[3] = (ccFntTy *)0xd2;
      local_8dc[4] = (ccFntTy *)0xb5;
      local_8dc[5] = (ccFntTy *)0x64;
      local_8dc[6] = (ccFntTy *)0x14;
      local_8dc[7] = (ccFntTy *)0x1ff;
      local_8a8 = 0x68ff;
      local_888 = 0x697f;
      local_64 = 0x6955;
      local_890 = local_8b0;
      local_6c = local_8b0;
      /* ST_CALLSITE[0059D8F6]: CALL dword ptr [EDX + 0x8] */
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AD8,nullptr,st::machine_word_boundary_cast<undefined4>(local_8dc),0);
      local_8bc = this_00->field_1AFC;
      local_8dc[3] = (ccFntTy *)0x15e;
      /* ST_CALLSITE[0059D928]: CALL dword ptr [EDX + 0x8] */
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1ADC,nullptr,st::machine_word_boundary_cast<undefined4>(local_8dc),0);
      local_8bc = this_00->field_1B00;
      local_8dc[3] = (ccFntTy *)0x1ea;
      /* ST_CALLSITE[0059D95A]: CALL dword ptr [EDX + 0x8] */
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AE0,nullptr,st::machine_word_boundary_cast<undefined4>(local_8dc),0);
      local_8dc[1] = (ccFntTy *)0xc8;
      if (iVar3 != 0) {
        local_8dc[1] = (ccFntTy *)0xcc;
      }
      local_8bc = (DArrayTy *)this_00->field_1B04;
      local_8dc[3] = (ccFntTy *)0xd2;
      local_8dc[4] = (ccFntTy *)0xdd;
      local_8dc[5] = (ccFntTy *)0x17c;
      local_8dc[6] = (ccFntTy *)0x4b;
      local_888 = 0x6981;
      /* ST_CALLSITE[0059D9CC]: CALL dword ptr [EDX + 0x8] */
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,6,(undefined4 *)&this_00->field_1AE4,nullptr,st::machine_word_boundary_cast<undefined4>(local_8dc),0);
      this_00->field_002D = 0x61;
      this_00->field_0035 = 0;
      this_00->field_0037 = 0;
      st::fn_006E6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x69c,0,iVar6,st::mutable_c_string("%s")
                               ,"FSGSTy::InfoCtrls");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x69c);
  }
  return;
}

// 0059DB20 FSGSTy::ChatCtrls
#line 4 "decomp/ST.exe/functions/0059DB20/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::ChatCtrls */

void __thiscall st::fn_0059DB20(FSGSTy *this)

{
  ccFntTy *pcVar1;
  FSGSTy *this_00;
  short sVar3;
  int iVar9;
  int uVar6_mg0;
  int local_EAX_212;
  LPBITMAPINFO ptVar4;
  FSGSTy_field_1EA6DArray *array;
  FSGSTy_field_1EAADArray *pFVar5;
  DArrayTy *pDVar6;
  uint uVar7;
  int iVar14;
  int iVar8;
  byte *puVar9;
  int *piVar10;
  byte *puVar11;
  ccFntTy **ppcVar12;
  ushort *puVar13;
  ccFntTy *local_1654 [8];
  DArrayTy *local_1634;
  undefined4 local_1628;
  undefined4 local_1624;
  undefined4 local_1620;
  undefined4 local_1608;
  undefined4 local_1604;
  undefined4 local_1600;
  undefined4 local_15c8;
  undefined4 local_15c4;
  undefined4 local_15c0;
  undefined4 local_df0;
  undefined4 local_de4;
  undefined4 local_de0;
  undefined4 local_ddc;
  int local_dc8 [5];
  int local_db4;
  undefined4 local_db0;
  undefined4 local_dac;
  undefined4 local_da8;
  undefined4 local_da4;
  undefined4 local_d90;
  undefined4 local_d8c;
  undefined4 local_d88;
  undefined4 local_d18;
  undefined4 local_d14;
  undefined4 local_d10;
  undefined4 local_d0c [4];
  undefined4 local_cfc;
  undefined4 local_cf8;
  undefined4 local_cac;
  undefined4 local_ca8;
  undefined4 local_ca4;
  undefined4 local_bfc;
  undefined4 local_bf8;
  undefined4 local_b90;
  undefined4 local_b8c [4];
  undefined4 local_b7c;
  undefined4 local_b78;
  undefined4 local_b24;
  undefined4 local_a10;
  undefined4 local_a0c;
  undefined4 local_a04;
  undefined4 local_a00;
  undefined4 local_9fc;
  undefined4 local_9f8;
  undefined4 local_9f4;
  undefined4 local_9f0;
  undefined4 local_9bc;
  undefined4 local_9b8;
  undefined4 local_9b4;
  undefined1 local_550 [45];
  undefined1 local_523;
  int local_520 [5];
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_3f4;
  undefined4 local_3f0 [4];
  int local_3e0;
  undefined4 local_3dc;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_274;
  undefined4 local_270 [4];
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_208;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_50;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;
  InternalExceptionFrame *pIVar14_mg0;

  ppcVar12 = local_1654;
  for (iVar8 = 0x223; iVar8 != 0; iVar8 = iVar8 + -1) {
    *ppcVar12 = nullptr;
    ppcVar12 = ppcVar12 + 1;
  }
  piVar10 = local_dc8;
  local_8 = this;
  for (iVar8 = 0x21e; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  memset(local_520, 0, 0x4d4); /* compiler bulk-zero initialization */
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar9 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar9 == 0) {
    local_8->array_00BC[0xc].field_01E0 = 0;
    if (local_8->field_1E8E != 0) {
      st::fn_006AB060(&local_8->field_1E8E);
    }
    if (this_00->field_1E92 != nullptr) {
      st::fn_006AB060(&this_00->field_1E92);
    }
    if (this_00->field_1E9A != nullptr) {
      st::fn_006AB060(&this_00->field_1E9A);
    }
    iVar8 = 1;
    puVar13 = this_00->field_005D + 0x14;
    uVar6_mg0 = st::fn_006B4FE0(this_00->field_005D);
    local_EAX_212 =
         st::fn_006B50C0(0x1bf,0x175,(uint)this_00->field_005D[7],uVar6_mg0,(undefined4 *)puVar13,iVar8
                     );
    this_00->field_1E8E = local_EAX_212;
    ptVar4 = st::fn_006C4880(g_dDXContext_0080759C,0x13,0x5e,0x1bf,0x175,8);
    this_00->field_1E92 = ptVar4;
    ptVar4 = st::fn_006C4880(g_dDXContext_0080759C,0x1e9,0x5e,0x124,0x175,8);
    this_00->field_1E9A = ptVar4;
    array = (FSGSTy_field_1EA6DArray *)st::fn_006AE290(nullptr,0x14,0x2e,10);
    this_00->field_1EA6 = array;
    local_523 = 1;
    st::fn_006AE1C0((DArrayTy *)array,local_550);
    pFVar5 = (FSGSTy_field_1EAADArray *)
             st::fn_006AE290(nullptr,0x14,0x68,10);
    this_00->field_1EAA = pFVar5;
    pDVar6 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AE8 = pDVar6;
    st::fn_006B5AA0(pDVar6,&CHAR_00h_008016a0);
    pDVar6 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AEC = pDVar6;
    st::fn_006B5AA0(pDVar6,&CHAR_00h_008016a0);
    pDVar6 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1EA2 = pDVar6;
    st::fn_006B5AA0(pDVar6,&CHAR_00h_008016a0);
    local_dc8[0] = 0;
    local_dc8[1] = 2;
    local_da8 = 0x19;
    local_da4 = 0x5f;
    local_dc8[2] = 1;
    local_dc8[3] = 0;
    pcVar1 = this_00->array_00BC[0xc].field_01F7;
    local_dc8[4] = 0x1a6 - this_00->field_1B4C;
    if (pcVar1->field_00A0 != 0) {
      st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar1);
    }
    local_db4 = *(int *)&pcVar1->field_0x8a;
    local_dac = (undefined4)(0x15e / (longlong)local_db4);
    local_d14 = 0;
    local_d0c[0] = 0;
    local_d0c[3] = this_00->field_1BD9;
    local_d0c[2] = this_00->field_1BD5;
    local_d8c = 2;
    local_d10 = 2;
    local_d0c[1] = 2;
    local_cfc = this_00->field_1BDD;
    local_ca8 = 2;
    local_b90 = 2;
    local_db0 = 1;
    local_d88 = 0x6982;
    local_d18 = 4;
    local_cf8 = this_00->field_1BE1;
    local_bfc = 500;
    local_bf8 = 0x32;
    local_ca4 = 0x6334;
    uVar7 = this_00->field_1B48;
    local_d90 = this_00->field_0008;
    local_cac = local_d90;
    puVar9 = (byte *)(local_d0c);
    puVar11 = (byte *)(local_b8c);
    memmove(puVar11, puVar9, 0x17c); /* compiler REP MOVS byte copy */
    iVar8 = 0;
    local_b8c[2] = this_00->field_1B44;
    local_b78 = this_00->field_1B50;
    local_b7c = this_00->field_1B4C;
    local_a00 = this_00->field_1C66;
    local_9f8 = this_00->field_1C6E;
    local_9fc = this_00->field_1C6A;
    puVar9 = (byte *)(&this_00->field_1B14);
    local_b24 = 0x6333;
    local_a10 = 3;
    local_a0c = 1;
    local_a04 = 0;
    local_9f4 = 0x110;
    local_9f0 = 0xe;
    local_9b8 = 2;
    local_9b4 = 0x6335;
    local_b8c[3] = uVar7;
    local_9bc = local_d90;
    /* ST_CALLSITE[0059DEC2]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,8,st::pointer_boundary_cast<undefined4 *>(puVar9),nullptr,st::machine_word_boundary_cast<undefined4>(local_dc8),0);
    this_00->field_002D = 5;
    st::fn_006E6080(this_00,2,*puVar9,(undefined4 *)&this_00->field_0x1d);
    if (this_00->field_1B2C != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1B70,this_00->field_1B2C,0xfffffffe,this_00->field_1B44,
                 this_00->field_1B48);
    }
    if (this_00->field_1BBD != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1C01,this_00->field_1BBD,0xfffffffe,this_00->field_1BD5,
                 this_00->field_1BD9);
    }
    if (this_00->field_1C4E != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1C92,this_00->field_1C4E,0xfffffffe,this_00->field_1C66,
                 this_00->field_1C6A);
    }
    this_00->field_002D = 0x28;
    *(undefined2 *)&this_00->field_0x31 = 1;
    *(short *)&this_00->field_0x33 = (short)this_00->field_1E9E[2];
    st::fn_006E6080(this_00,2,*puVar9,(undefined4 *)&this_00->field_0x1d);
    this_00->field_002D = 0x22;
    *(undefined2 *)&this_00->field_0x31 = 0;
    if ((int)this_00->field_1E9E[2] < 0x19) {
      sVar3 = 0;
    }
    else {
      sVar3 = (short)this_00->field_1E9E[2] + -0x19;
    }
    *(short *)&this_00->field_0x33 = sVar3;
    st::fn_006E6080(this_00,2,*puVar9,(undefined4 *)&this_00->field_0x1d);
    ppcVar12 = local_1654;
    for (iVar8 = 0x223; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppcVar12 = nullptr;
      ppcVar12 = ppcVar12 + 1;
    }
    local_1654[2] = this_00->array_00BC[0xc].field_01F7;
    local_1634 = this_00->field_1EA2;
    local_1608 = this_00->field_0008;
    local_1654[0] = (ccFntTy *)0x1;
    local_1654[1] = (ccFntTy *)0x9;
    local_1654[3] = (ccFntTy *)0x19;
    local_1654[4] = (ccFntTy *)0x1bd;
    local_1654[5] = (ccFntTy *)0x15b;
    local_1654[6] = (ccFntTy *)0x14;
    local_1654[7] = (ccFntTy *)0x104;
    local_df0 = 0x100;
    local_1604 = 2;
    local_1600 = 0x6983;
    local_15c4 = 2;
    local_15c0 = 0xc0a2;
    local_15c8 = local_1608;
    /* ST_CALLSITE[0059E071]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1B10,nullptr,st::machine_word_boundary_cast<undefined4>(local_1654),0);
    /* ST_CALLSITE[0059E089]: CALL 0x00402dbf; direct=00402DBF SetAccelerator */
    st::fn_00402DBF(1,this_00->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
    /* ST_CALLSITE[0059E0A6]: CALL 0x00402dbf; direct=00402DBF SetAccelerator */
    st::fn_00402DBF(1,this_00->field_0008,2,0xc0a4,2,0x8000031,0,0,0,0,0,0);
    /* ST_CALLSITE[0059E0C6]: CALL 0x00402dbf; direct=00402DBF SetAccelerator */
    st::fn_00402DBF(1,this_00->field_0008,2,0xc0a5,2,0x4000002f,0,0,0,0,0,0);
    /* ST_CALLSITE[0059E0EC]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar7 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x17c,0x1be,0x55,0x14,0x6901,0x6984);
    this_00->field_1B18 = uVar7;
    /* ST_CALLSITE[0059E117]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar7 = st::fn_0040361B((MMObjTy *)this_00,1,0,499,0x156,0xe6,0x19,0x6903,0x6986);
    this_00->field_1B24 = uVar7;
    /* ST_CALLSITE[0059E143]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar7 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x261,0x1b3,0xa0,0x19,0x6902,0x6985);
    this_00->field_1B1C = uVar7;
    local_4f8 = this_00->field_0008;
    local_520[4] = 0x10b - this_00->field_1CFF;
    local_520[0] = 0;
    local_520[2] = 0x1ea;
    local_520[3] = 0x5f;
    local_50c = 0xf2;
    local_508 = 0;
    local_504 = 0;
    local_4f4 = 2;
    local_4f0 = 0x8160;
    local_4d8 = local_4f8;
    local_4d4 = 2;
    local_4d0 = 0x8161;
    local_4b8 = local_4f8;
    local_4b4 = 2;
    local_4b0 = 0x8162;
    local_498 = local_4f8;
    local_494 = 2;
    local_490 = 0x8163;
    if (DAT_0080734c != '\0') {
      local_50 = 1;
    }
    local_3e0 = this_00->field_1CFF;
    local_3f0[2] = this_00->field_1CF7;
    local_3f4 = 2;
    local_3f0[0] = 0;
    local_3f0[1] = 2;
    local_3dc = this_00->field_1D03;
    local_38c = 2;
    local_274 = 2;
    local_3f0[3] = this_00->field_1CFB;
    uVar7 = this_00->field_1D88;
    local_2e0 = 500;
    local_2dc = 0x32;
    local_390 = local_4f8;
    local_388 = 0x8164;
    puVar9 = (byte *)(local_3f0);
    puVar11 = (byte *)(local_270);
    memmove(puVar11, puVar9, 0x17c); /* compiler REP MOVS byte copy */
    iVar8 = 0;
    local_270[3] = this_00->field_1D8C;
    local_260 = this_00->field_1D90;
    local_25c = this_00->field_1D94;
    local_e4 = this_00->field_1E19;
    local_e0 = this_00->field_1E1D;
    local_dc = this_00->field_1E21;
    local_208 = 0x8165;
    local_f4 = 3;
    local_f0 = 1;
    local_e8 = 0;
    local_d8 = 199;
    local_d4 = 0xe;
    local_9c = 2;
    local_98 = 0x8166;
    local_270[2] = uVar7;
    local_a0 = local_4f8;
    /* ST_CALLSITE[0059E340]: CALL dword ptr [EAX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,7,&this_00->field_1B20,nullptr,st::machine_word_boundary_cast<undefined4>(local_520),0);
    if (this_00->field_1CDF != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1D23,this_00->field_1CDF,0xfffffffe,this_00->field_1CF7,
                 this_00->field_1CFB);
    }
    if (this_00->field_1D70 != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1DB4,this_00->field_1D70,0xfffffffe,this_00->field_1D88,
                 this_00->field_1D8C);
    }
    if (this_00->field_1E01 != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1E45,this_00->field_1E01,0xfffffffe,this_00->field_1E19,
                 this_00->field_1E1D);
    }
    local_1634 = this_00->field_1AE8;
    ppcVar12 = local_1654;
    for (iVar8 = 0x223; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppcVar12 = nullptr;
      ppcVar12 = ppcVar12 + 1;
    }
    local_1654[2] = this_00->array_00BC[0xc].field_01F3;
    local_1628 = this_00->field_0008;
    local_1654[0] = (ccFntTy *)0x1;
    local_1654[1] = (ccFntTy *)0x89;
    local_1654[3] = (ccFntTy *)0x1f3;
    local_1654[4] = (ccFntTy *)0x18d;
    local_1654[5] = (ccFntTy *)0x10b;
    local_1654[6] = (ccFntTy *)0x16;
    local_1654[7] = (ccFntTy *)0x40;
    local_15c4 = 2;
    local_de0 = 2;
    local_1624 = 2;
    local_1604 = 2;
    local_1620 = 0x68ff;
    local_1600 = 0x6987;
    local_ddc = 0x6955;
    local_15c0 = 0xc0a3;
    local_1608 = local_1628;
    local_15c8 = local_1628;
    local_de4 = local_1628;
    /* ST_CALLSITE[0059E49C]: CALL dword ptr [EAX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC4,nullptr,st::machine_word_boundary_cast<undefined4>(local_1654),0);
    local_1634 = this_00->field_1AEC;
    local_1654[4] = (ccFntTy *)0x1b5;
    local_1654[5] = (ccFntTy *)0x5f;
    local_1654[7] = (ccFntTy *)0x20;
    /* ST_CALLSITE[0059E4E2]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC8,nullptr,st::machine_word_boundary_cast<undefined4>(local_1654),0);
    this_00->field_002D = 0x61;
    this_00->field_0035 = 0;
    this_00->field_0037 = 0;
    st::fn_006E6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar14 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x758,0,iVar9,st::mutable_c_string("%s"),
                              "FSGSTy::ChatCtrls");
  if (iVar14 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar9,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x758);
  return;
}

// 0059E7F0 FSGSTy::NewGameCtrls
#line 4 "decomp/ST.exe/functions/0059E7F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::NewGameCtrls */

void __thiscall st::fn_0059E7F0(FSGSTy *this)

{
  FSGSTy *this_00;
  int iVar5;
  DArrayTy *pDVar2;
  uint uVar3;
  int iVar4;
  int iVar6;
  ccFntTy **ppcVar7;
  ccFntTy *local_8d8 [8];
  DArrayTy *local_8b8;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_84c;
  undefined4 local_848;
  undefined4 local_844;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  ppcVar7 = local_8d8;
  local_8 = this;
  for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppcVar7 = nullptr;
    ppcVar7 = ppcVar7 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar5 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar5 == 0) {
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00 = local_8;
    local_8->field_1AE8 = pDVar2;
    st::fn_006B5AA0(pDVar2,&CHAR_00h_00807e1d);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AEC = pDVar2;
    st::fn_006B5AA0(pDVar2,&CHAR_00h_008016a0);
    ppcVar7 = local_8d8;
    for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
      *ppcVar7 = nullptr;
      ppcVar7 = ppcVar7 + 1;
    }
    local_8d8[2] = this_00->array_00BC[0xc].field_01F3;
    local_8b8 = this_00->field_1AE8;
    local_8ac = this_00->field_0008;
    local_848 = 2;
    local_64 = 2;
    local_8a8 = 2;
    local_888 = 2;
    local_8d8[0] = (ccFntTy *)0x1;
    local_8d8[1] = (ccFntTy *)0x89;
    local_8d8[3] = (ccFntTy *)0xd2;
    local_8d8[4] = (ccFntTy *)0x106;
    local_8d8[5] = (ccFntTy *)0x17c;
    local_8d8[6] = (ccFntTy *)0x19;
    local_8d8[7] = (ccFntTy *)0x20;
    local_8a4 = 0x68ff;
    local_884 = 0x697f;
    local_60 = 0x6955;
    local_844 = 0x63ff;
    local_88c = local_8ac;
    local_84c = local_8ac;
    local_68 = local_8ac;
    /* ST_CALLSITE[0059E94D]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC4,nullptr,st::machine_word_boundary_cast<undefined4>(local_8d8),0);
    local_8b8 = this_00->field_1AEC;
    local_8d8[4] = (ccFntTy *)0x13d;
    local_8d8[5] = (ccFntTy *)0xaa;
    local_8d8[6] = (ccFntTy *)0x14;
    local_8d8[7] = (ccFntTy *)0x10;
    /* ST_CALLSITE[0059E99D]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC8,nullptr,st::machine_word_boundary_cast<undefined4>(local_8d8),0);
    this_00->field_1EC2 = 0x100;
    this_00->field_1EC6 = 0xffffffff;
    this_00->field_1ECA = 0;
    /* ST_CALLSITE[0059E9DF]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar3 = st::fn_0040361B((MMObjTy *)this_00,1,1,0xcd,0x16f,0x186,0x19,0x6904,0x698b);
    this_00->field_1EB6 = uVar3;
    this_00->field_002D = 0x61;
    this_00->field_0035 = 0;
    this_00->field_0037 = 0;
    st::fn_006E6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x782,0,iVar5,st::mutable_c_string("%s"),
                             "FSGSTy::NewGameCtrls");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x782);
  return;
}

// 0059EB00 FSGSTy::JoinGameCtrls
#line 4 "decomp/ST.exe/functions/0059EB00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::JoinGameCtrls */

void __thiscall st::fn_0059EB00(FSGSTy *this)

{
  FSGSTy *this_00;
  int iVar8;
  uint uVar2;
  int local_EAX_168;
  LPBITMAPINFO ptVar3;
  DArrayTy *pDVar4;
  FSGSTy_field_1EBEDArray *pFVar5;
  uint uVar6;
  int iVar7;
  int iVar9;
  byte *puVar10;
  byte *puVar12;
  ccFntTy **ppcVar13;
  ushort *puVar14;
  ccFntTy *local_dac [8];
  DArrayTy *local_d8c;
  undefined4 local_d80;
  undefined4 local_d7c;
  undefined4 local_d78;
  undefined4 local_d60;
  undefined4 local_d5c;
  undefined4 local_d58;
  undefined4 local_d20;
  undefined4 local_d1c;
  undefined4 local_d18;
  undefined4 local_53c;
  undefined4 local_538;
  undefined4 local_534;
  int local_520 [5];
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_3f4;
  undefined4 local_3f0 [4];
  int local_3e0;
  undefined4 local_3dc;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_274;
  undefined4 local_270 [4];
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_208;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_50;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  ppcVar13 = local_dac;
  local_8 = this;
  for (iVar9 = 0x223; iVar9 != 0; iVar9 = iVar9 + -1) {
    *ppcVar13 = nullptr;
    ppcVar13 = ppcVar13 + 1;
  }
  memset(local_520, 0, 0x4d4); /* compiler bulk-zero initialization */
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar8 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar8 == 0) {
    if (local_8->field_1E8E != 0) {
      st::fn_006AB060(&local_8->field_1E8E);
    }
    if (this_00->field_1E92 != nullptr) {
      st::fn_006AB060(&this_00->field_1E92);
    }
    iVar9 = 1;
    puVar14 = this_00->field_005D + 0x14;
    uVar2 = st::fn_006B4FE0(this_00->field_005D);
    local_EAX_168 =
         st::fn_006B50C0(0x174,0x175,(uint)this_00->field_005D[7],uVar2,(undefined4 *)puVar14,iVar9);
    this_00->field_1E8E = local_EAX_168;
    ptVar3 = st::fn_006C4880(g_dDXContext_0080759C,0x199,0x5e,0x174,0x175,8);
    this_00->field_1E92 = ptVar3;
    ptVar3 = st::fn_006C4880(g_dDXContext_0080759C,0x13,0x5e,0x174,0x175,8);
    this_00->field_1E9A = ptVar3;
    pDVar4 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AE8 = pDVar4;
    st::fn_006B5AA0(pDVar4,&CHAR_00h_008016a0);
    pDVar4 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AEC = pDVar4;
    st::fn_006B5AA0(pDVar4,&CHAR_00h_008016a0);
    pFVar5 = (FSGSTy_field_1EBEDArray *)
             st::fn_006AE290(nullptr,0x14,0x25c,10);
    this_00->field_1EBE = pFVar5;
    local_520[4] = 0x15b - this_00->field_1CFF;
    local_4f8 = this_00->field_0008;
    local_520[0] = 0;
    local_520[2] = 0x14;
    local_520[3] = 100;
    local_50c = 0x169;
    local_508 = 0;
    local_504 = 0;
    local_4f4 = 2;
    local_4f0 = 0x8160;
    local_4d4 = 2;
    local_4d0 = 0x8161;
    local_4b4 = 2;
    local_4b0 = 0x63ff;
    local_494 = 2;
    local_490 = 0x8163;
    if (DAT_0080734c != '\0') {
      local_50 = 1;
    }
    local_3f0[0] = 0;
    local_3f0[2] = this_00->field_1CF7;
    local_3e0 = this_00->field_1CFF;
    local_3f0[3] = this_00->field_1CFB;
    local_3dc = this_00->field_1D03;
    local_3f4 = 2;
    local_3f0[1] = 2;
    local_2e0 = 500;
    local_2dc = 0x32;
    local_390 = local_4f8;
    local_38c = 2;
    local_388 = 0x8164;
    local_274 = 2;
    puVar10 = (byte *)(local_3f0);
    puVar12 = (byte *)(local_270);
    memmove(puVar12, puVar10, 0x17c); /* compiler REP MOVS byte copy */
    iVar9 = 0;
    local_270[2] = this_00->field_1D88;
    local_270[3] = this_00->field_1D8C;
    local_260 = this_00->field_1D90;
    local_25c = this_00->field_1D94;
    local_e4 = this_00->field_1E19;
    local_e0 = this_00->field_1E1D;
    local_dc = this_00->field_1E21;
    local_208 = 0x8165;
    local_f4 = 3;
    local_f0 = 1;
    local_e8 = 0;
    local_d8 = 0x126;
    local_d4 = 0xe;
    local_9c = 2;
    local_98 = 0x8166;
    local_4d8 = local_4f8;
    local_4b8 = local_4f8;
    local_498 = local_4f8;
    local_a0 = local_4f8;
    /* ST_CALLSITE[0059EE2E]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,7,&this_00->field_1B20,nullptr,st::machine_word_boundary_cast<undefined4>(local_520),0);
    if (this_00->field_1CDF != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1D23,this_00->field_1CDF,0xfffffffe,this_00->field_1CF7,
                 this_00->field_1CFB);
    }
    if (this_00->field_1D70 != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1DB4,this_00->field_1D70,0xfffffffe,this_00->field_1D88,
                 this_00->field_1D8C);
    }
    if (this_00->field_1E01 != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1E45,this_00->field_1E01,0xfffffffe,this_00->field_1E19,
                 this_00->field_1E1D);
    }
    local_d8c = this_00->field_1AE8;
    ppcVar13 = local_dac;
    for (iVar9 = 0x223; iVar9 != 0; iVar9 = iVar9 + -1) {
      *ppcVar13 = nullptr;
      ppcVar13 = ppcVar13 + 1;
    }
    local_dac[2] = this_00->array_00BC[0xc].field_01F3;
    local_d80 = this_00->field_0008;
    local_dac[0] = (ccFntTy *)0x1;
    local_dac[1] = (ccFntTy *)0x99;
    local_dac[3] = (ccFntTy *)0x1a8;
    local_dac[4] = (ccFntTy *)0x127;
    local_dac[5] = (ccFntTy *)0x156;
    local_dac[6] = (ccFntTy *)0x17;
    local_dac[7] = (ccFntTy *)0x20;
    local_d1c = 2;
    local_538 = 2;
    local_d7c = 2;
    local_d5c = 2;
    local_d78 = 0x68ff;
    local_d58 = 0x6988;
    local_534 = 0x6955;
    local_d18 = 0x63ff;
    local_d60 = local_d80;
    local_d20 = local_d80;
    local_53c = local_d80;
    /* ST_CALLSITE[0059EF8D]: CALL dword ptr [EAX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC4,nullptr,st::machine_word_boundary_cast<undefined4>(local_dac),0);
    local_d8c = this_00->field_1AEC;
    local_dac[1] = (ccFntTy *)0x89;
    local_dac[4] = (ccFntTy *)0x154;
    local_dac[7] = (ccFntTy *)0x10;
    /* ST_CALLSITE[0059EFD1]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC8,nullptr,st::machine_word_boundary_cast<undefined4>(local_dac),0);
    this_00->field_1EC2 = 0;
    this_00->field_1EC6 = 0xffffffff;
    this_00->field_1ECA = 0;
    /* ST_CALLSITE[0059F00B]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar6 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x230,0x17a,0xd3,0x19,0x6904,0x6989);
    this_00->field_1EB6 = uVar6;
    /* ST_CALLSITE[0059F036]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar6 = st::fn_0040361B((MMObjTy *)this_00,1,0,0x1a3,0x196,0x160,0x19,0x6905,0x698a);
    this_00->field_1EBA = uVar6;
    /* ST_CALLSITE[0059F062]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar6 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x1fd,0x1b5,0xab,0x19,0x6903,0x698d);
    this_00->field_1B24 = uVar6;
    this_00->field_002D = 0x61;
    this_00->field_0035 = 0;
    this_00->field_0037 = 0;
    st::fn_006E6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x7f0,0,iVar8,st::mutable_c_string("%s"),
                             "FSGSTy::JoinGameCtrls");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar8,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x7f0);
  return;
}

// 0059F260 FSGSTy::LadderCtrls
#line 4 "decomp/ST.exe/functions/0059F260/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::LadderCtrls */

void __thiscall st::fn_0059F260(FSGSTy *this)

{
  FSGSTy *this_00;
  int iVar6;
  DArrayTy *pDVar2;
  uint uVar3;
  int local_EAX_198;
  LPBITMAPINFO ptVar4;
  uint uVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  ccFntTy **ppcVar10;
  ushort *puVar11;
  ccFntTy *local_8e0 [8];
  DArrayTy *local_8c0;
  undefined4 local_894;
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_854;
  undefined4 local_850;
  undefined4 local_84c;
  InternalExceptionFrame local_54;
  FSGSTy *local_10;
  int local_c;
  undefined4 *local_8;

  ppcVar10 = local_8e0;
  local_10 = this;
  for (iVar8 = 0x223; iVar8 != 0; iVar8 = iVar8 + -1) {
    *ppcVar10 = nullptr;
    ppcVar10 = ppcVar10 + 1;
  }
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar6 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar6 == 0) {
    if (local_10->field_1AE8 != nullptr) {
      st::fn_006B5570(local_10->field_1AE8);
    }
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AE8 = pDVar2;
    st::fn_006B5AA0(pDVar2,&CHAR_00h_008016a0);
    if (this_00->field_1E8E != 0) {
      st::fn_006AB060(&this_00->field_1E8E);
    }
    if (this_00->field_1E92 != nullptr) {
      st::fn_006AB060(&this_00->field_1E92);
    }
    iVar8 = 1;
    puVar11 = this_00->field_005D + 0x14;
    uVar3 = st::fn_006B4FE0(this_00->field_005D);
    local_EAX_198 =
         st::fn_006B50C0(0x2e1,0x175,(uint)this_00->field_005D[7],uVar3,(undefined4 *)puVar11,iVar8);
    this_00->field_1E8E = local_EAX_198;
    ptVar4 = st::fn_006C4880(g_dDXContext_0080759C,0x22,0x5e,0x2e1,0x175,8);
    this_00->field_1E92 = ptVar4;
    /* ST_CALLSITE[0059F369]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar5 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x2c,0x90,0x96,0x19,0x6906,0x698e);
    this_00->field_1EB6 = uVar5;
    /* ST_CALLSITE[0059F395]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar5 = st::fn_0040361B((MMObjTy *)this_00,1,1,199,0x90,0x96,0x19,0x6907,0x698f);
    this_00->field_1EBA = uVar5;
    /* ST_CALLSITE[0059F3BE]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar5 = st::fn_0040361B((MMObjTy *)this_00,1,0,0x16c,0x90,0x19,0x19,0x6908,0x6990);
    this_00->field_1ED3 = uVar5;
    /* ST_CALLSITE[0059F3E7]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar5 = st::fn_0040361B((MMObjTy *)this_00,1,1,499,0x90,0x19,0x19,0x6909,0x6991);
    this_00->field_1ED7 = uVar5;
    /* ST_CALLSITE[0059F410]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar5 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x2b6,0x90,0x41,0x19,0x690a,0x6992);
    this_00->field_1B24 = uVar5;
    iVar9 = 0x6913;
    iVar8 = 0xdb;
    local_8 = &this_00->field_1EE7;
    local_c = 0xf;
    do {
      /* ST_CALLSITE[0059F448]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
      uVar5 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x50,iVar8,0xe9,0x10,iVar9,0);
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 0x10;
      *local_8 = uVar5;
      local_8 = local_8 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    local_c = 0;
    ppcVar10 = local_8e0;
    for (iVar8 = 0x223; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppcVar10 = nullptr;
      ppcVar10 = ppcVar10 + 1;
    }
    local_8e0[2] = this_00->array_00BC[0xc].field_01F3;
    local_8c0 = this_00->field_1AE8;
    local_894 = this_00->field_0008;
    local_850 = 2;
    local_890 = 2;
    local_8e0[0] = (ccFntTy *)0x1;
    local_8e0[1] = (ccFntTy *)0x89;
    local_8e0[3] = (ccFntTy *)0x21c;
    local_8e0[4] = (ccFntTy *)0x90;
    local_8e0[5] = (ccFntTy *)0x94;
    local_8e0[6] = (ccFntTy *)0x17;
    local_8e0[7] = (ccFntTy *)0x10;
    local_84c = 0x690a;
    local_88c = 0x6988;
    local_854 = local_894;
    /* ST_CALLSITE[0059F51F]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC4,nullptr,st::machine_word_boundary_cast<undefined4>(local_8e0),0);
    this_00->field_002D = 0x61;
    this_00->field_0035 = 0;
    this_00->field_0037 = 0;
    st::fn_006E6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x81d,0,iVar6,st::mutable_c_string("%s"),
                             "FSGSTy::LadderCtrls");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x81d);
  return;
}

// 0059F670 FSGSTy::DeleteCtrls
#line 4 "decomp/ST.exe/functions/0059F670/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DeleteCtrls

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10 */

void __thiscall st::fn_0059F670(FSGSTy *this)

{
  FSGSTy *pFVar2;
  int iVar3;
  uint local_EAX_340;
  HoloTy *pHVar3;
  int iVar4;
  uint uVar9;
  uint local_EAX_996;
  uint local_EAX_1307;
  uint local_EAX_1677;
  uint local_EAX_2031;
  uint local_EAX_2414;
  uint local_EAX_2700;
  int iVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  DDXContext_008075A8 *pDVar9;
  uint uVar10;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x89c,0,iVar3,st::mutable_c_string("%s")
                               ,"FSGSTy::DeleteCtrls");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x89c);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  pFVar2 = local_8;
  cVar8 = local_8->array_00BC[0xc].field_01DF;
  switch(cVar8) {
  case '\x02':
  case '\x04':
  case '\x05':
  case '\a':
    if (cVar8 == '\a') {
      /* ST_CALLSITE[0059F705]: CALL 0x004020f9; direct=004020F9 FSGSTy::sub_005A0A50 */
      st::fn_004020F9(local_8);
    }
    else {
      /* ST_CALLSITE[0059F70C]: CALL 0x00405641; direct=00405641 FSGSTy::sub_005A0590 */
      st::fn_00405641(local_8);
    }
  case '\x01':
    if (pFVar2->field_1F23 != nullptr) {
      /* ST_CALLSITE[0059F71B]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(pFVar2->field_1F23);
      st::fn_0072E2B0(pFVar2->field_1F23);
      pFVar2->field_1F23 = nullptr;
    }
    pHVar3 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar3 == nullptr) {
      pHVar3 = nullptr;
    }
    else {
      pHVar3->field_0002 = 1;
      pHVar3->field_0000 = 0;
      *(undefined4 *)&pHVar3->field_0x3 = 0xffffffff;
      pHVar3->field_0001 = CASE_2;
      pHVar3->field_0007 = nullptr;
      pHVar3->field_000B = nullptr;
      pHVar3->field_000F = 0;
      *(undefined4 *)&pHVar3->field_0x1b = 1;
      pHVar3->field_0013 = 1;
      pHVar3->field_0017 = -1;
      pHVar3->field_0027 = 0;
      pHVar3->field_0023 = 0;
      pHVar3->field_002F = 1;
      pHVar3->field_002B = 1;
    }
    pFVar2->field_1F23 = pHVar3;
    if (pHVar3 != nullptr) {
      uVar10 = 0;
      cVar8 = '\x01';
      bVar7 = 0x10;
      iVar6 = 1;
      iVar4 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0xb4,0xaa,0x1b8,0x106);
      /* ST_CALLSITE[0059F7C4]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_340 =
           st::fn_0040459D(pFVar2->field_1F23,CASE_4,0xb4,0xaa,iVar4,iVar6,bVar7,cVar8,uVar10);
      if (local_EAX_340 != 0) {
        pHVar3 = pFVar2->field_1F23;
        pHVar3->field_0002 = 0;
        pHVar3->field_0017 = -1;
        uVar10 = *(uint *)&pFVar2->field_1F23->field_0x3;
        if (-1 < (int)uVar10) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar10);
        }
        /* ST_CALLSITE[0059F7FD]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        st::fn_004055F1(pFVar2->field_1F23);
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0xb4,0xaa,0x1b8,0x106);
      /* ST_CALLSITE[0059F845]: CALL 0x00402298; direct=00402298 PutDDXClip */
      st::fn_00402298(0xb4,0xaa,0xb4,0xaa,0x1b8,(byte *)0x106,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    }
    uVar10 = pFVar2->field_1ABC;
    pDVar9 = g_ddxContext_008075A8;
    break;
  case '\x03':
    /* ST_CALLSITE[0059FADF]: CALL 0x00405641; direct=00405641 FSGSTy::sub_005A0590 */
    st::fn_00405641(local_8);
    if (pFVar2->field_1F23 != nullptr) {
      /* ST_CALLSITE[0059FAEE]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(pFVar2->field_1F23);
      st::fn_0072E2B0(pFVar2->field_1F23);
      pFVar2->field_1F23 = nullptr;
    }
    pHVar3 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar3 == nullptr) {
      pHVar3 = nullptr;
    }
    else {
      pHVar3->field_0002 = 1;
      pHVar3->field_0000 = 0;
      *(undefined4 *)&pHVar3->field_0x3 = 0xffffffff;
      pHVar3->field_0001 = CASE_2;
      pHVar3->field_0007 = nullptr;
      pHVar3->field_000B = nullptr;
      pHVar3->field_000F = 0;
      *(undefined4 *)&pHVar3->field_0x1b = 1;
      pHVar3->field_0013 = 1;
      pHVar3->field_0017 = -1;
      pHVar3->field_0027 = 0;
      pHVar3->field_0023 = 0;
      pHVar3->field_002F = 1;
      pHVar3->field_002B = 1;
    }
    pFVar2->field_1F23 = pHVar3;
    if (pHVar3 == nullptr) goto switchD_0059f6f7_default;
    uVar10 = 0;
    cVar8 = '\x01';
    bVar7 = 0x10;
    iVar6 = 1;
    iVar4 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x22,0x72,0x2e1,0x14c);
    /* ST_CALLSITE[0059FB8B]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
    local_EAX_1307 =
         st::fn_0040459D(pFVar2->field_1F23,CASE_4,0x22,0x72,iVar4,iVar6,bVar7,cVar8,uVar10);
    if (local_EAX_1307 != 0) {
      pHVar3 = pFVar2->field_1F23;
      pHVar3->field_0002 = 0;
      pHVar3->field_0017 = -1;
      uVar10 = *(uint *)&pFVar2->field_1F23->field_0x3;
      if (-1 < (int)uVar10) {
        st::fn_006B3430((int *)g_ddxContext_008075A8,uVar10);
      }
      /* ST_CALLSITE[0059FBC4]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      st::fn_004055F1(pFVar2->field_1F23);
    }
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0x22,0x72,0x2e1,0x14c);
    /* ST_CALLSITE[0059FBFA]: CALL 0x00402298; direct=00402298 PutDDXClip */
    st::fn_00402298(0x22,0x72,0x22,0x72,0x2e1,(byte *)0x14c,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    if (pFVar2->field_1B2C != 0xffffffff) {
      st::fn_006B3AF0((int *)pFVar2->field_1B70,pFVar2->field_1B2C);
    }
    if (pFVar2->field_1BBD != 0xffffffff) {
      st::fn_006B3AF0((int *)pFVar2->field_1C01,pFVar2->field_1BBD);
    }
    uVar10 = pFVar2->field_1C4E;
    if (uVar10 == 0xffffffff) goto switchD_0059f6f7_default;
    pDVar9 = (DDXContext_008075A8 *)pFVar2->field_1C92;
    break;
  case '\x06':
    /* ST_CALLSITE[0059FC50]: CALL 0x0040580d; direct=0040580D FSGSTy::sub_005A07F0 */
    st::fn_0040580D(local_8);
    if (pFVar2->field_1F27 != nullptr) {
      /* ST_CALLSITE[0059FC5F]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(pFVar2->field_1F27);
      st::fn_0072E2B0(pFVar2->field_1F27);
      pFVar2->field_1F27 = nullptr;
    }
    pHVar3 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar3 == nullptr) {
      pHVar3 = nullptr;
    }
    else {
      pHVar3->field_0002 = 1;
      pHVar3->field_0000 = 0;
      *(undefined4 *)&pHVar3->field_0x3 = 0xffffffff;
      pHVar3->field_0001 = CASE_2;
      pHVar3->field_0007 = nullptr;
      pHVar3->field_000B = nullptr;
      pHVar3->field_000F = 0;
      *(undefined4 *)&pHVar3->field_0x1b = 1;
      pHVar3->field_0013 = 1;
      pHVar3->field_0017 = -1;
      pHVar3->field_0027 = 0;
      pHVar3->field_0023 = 0;
      pHVar3->field_002F = 1;
      pHVar3->field_002B = 1;
    }
    pFVar2->field_1F27 = pHVar3;
    if (pHVar3 != nullptr) {
      uVar10 = 0;
      cVar8 = '\x01';
      bVar7 = 0x10;
      iVar6 = 1;
      iVar4 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x13,0x5e,0x1bf,0x175);
      /* ST_CALLSITE[0059FCFD]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_1677 =
           st::fn_0040459D(pFVar2->field_1F27,CASE_4,0x13,0x5e,iVar4,iVar6,bVar7,cVar8,uVar10);
      if (local_EAX_1677 != 0) {
        pHVar3 = pFVar2->field_1F27;
        pHVar3->field_0002 = 0;
        pHVar3->field_0017 = -1;
        uVar10 = *(uint *)&pFVar2->field_1F27->field_0x3;
        if (-1 < (int)uVar10) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar10);
        }
        /* ST_CALLSITE[0059FD35]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        st::fn_004055F1(pFVar2->field_1F27);
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0x13,0x5e,0x1bf,0x175);
      /* ST_CALLSITE[0059FD6B]: CALL 0x00402298; direct=00402298 PutDDXClip */
      st::fn_00402298(0x13,0x5e,0x13,0x5e,0x1bf,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
      if (pFVar2->field_1B2C != 0xffffffff) {
        st::fn_006B3AF0((int *)pFVar2->field_1B70,pFVar2->field_1B2C);
      }
      if (pFVar2->field_1BBD != 0xffffffff) {
        st::fn_006B3AF0((int *)pFVar2->field_1C01,pFVar2->field_1BBD);
      }
      if (pFVar2->field_1C4E != 0xffffffff) {
        st::fn_006B3AF0((int *)pFVar2->field_1C92,pFVar2->field_1C4E);
      }
    }
    if (pFVar2->field_1F2B != nullptr) {
      /* ST_CALLSITE[0059FDC5]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(pFVar2->field_1F2B);
      st::fn_0072E2B0(pFVar2->field_1F2B);
      pFVar2->field_1F2B = nullptr;
    }
    pHVar3 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar3 == nullptr) {
      pHVar3 = nullptr;
    }
    else {
      pHVar3->field_0002 = 1;
      pHVar3->field_0000 = 0;
      *(undefined4 *)&pHVar3->field_0x3 = 0xffffffff;
      pHVar3->field_0001 = CASE_2;
      pHVar3->field_0007 = nullptr;
      pHVar3->field_000B = nullptr;
      pHVar3->field_000F = 0;
      *(undefined4 *)&pHVar3->field_0x1b = 1;
      pHVar3->field_0013 = 1;
      pHVar3->field_0017 = -1;
      pHVar3->field_0027 = 0;
      pHVar3->field_0023 = 0;
      pHVar3->field_002F = 1;
      pHVar3->field_002B = 1;
    }
    pFVar2->field_1F2B = pHVar3;
    if (pHVar3 == nullptr) goto switchD_0059f6f7_default;
    uVar10 = 0;
    cVar8 = '\x01';
    bVar7 = 0x10;
    iVar6 = 1;
    iVar4 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0x175);
    /* ST_CALLSITE[0059FE5F]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
    local_EAX_2031 =
         st::fn_0040459D(pFVar2->field_1F2B,CASE_2,0x1e9,0x5e,iVar4,iVar6,bVar7,cVar8,uVar10);
    if (local_EAX_2031 != 0) {
      pHVar3 = pFVar2->field_1F2B;
      pHVar3->field_0002 = 0;
      pHVar3->field_0017 = -1;
      uVar10 = *(uint *)&pFVar2->field_1F2B->field_0x3;
      if (-1 < (int)uVar10) {
        st::fn_006B3430((int *)g_ddxContext_008075A8,uVar10);
      }
      /* ST_CALLSITE[0059FE98]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      st::fn_004055F1(pFVar2->field_1F2B);
    }
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0x175);
    /* ST_CALLSITE[0059FED6]: CALL 0x00402298; direct=00402298 PutDDXClip */
    st::fn_00402298(0x1e9,0x5e,0x1e9,0x5e,0x124,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    if (pFVar2->field_1CDF != 0xffffffff) {
      st::fn_006B3AF0((int *)pFVar2->field_1D23,pFVar2->field_1CDF);
    }
    if (pFVar2->field_1D70 != 0xffffffff) {
      st::fn_006B3AF0((int *)pFVar2->field_1DB4,pFVar2->field_1D70);
    }
    uVar10 = pFVar2->field_1E01;
    if (uVar10 == 0xffffffff) goto switchD_0059f6f7_default;
    pDVar9 = (DDXContext_008075A8 *)pFVar2->field_1E45;
    break;
  case '\b':
    /* ST_CALLSITE[0059FF2C]: CALL 0x0040520e; direct=0040520E FSGSTy::sub_005A0AF0 */
    st::fn_0040520E(local_8);
    if (pFVar2->field_1F2F != nullptr) {
      /* ST_CALLSITE[0059FF3B]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(pFVar2->field_1F2F);
      st::fn_0072E2B0(pFVar2->field_1F2F);
      pFVar2->field_1F2F = nullptr;
    }
    pHVar3 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar3 == nullptr) {
      pHVar3 = nullptr;
    }
    else {
      pHVar3->field_0002 = 1;
      pHVar3->field_0000 = 0;
      *(undefined4 *)&pHVar3->field_0x3 = 0xffffffff;
      pHVar3->field_0001 = CASE_2;
      pHVar3->field_0007 = nullptr;
      pHVar3->field_000B = nullptr;
      pHVar3->field_000F = 0;
      *(undefined4 *)&pHVar3->field_0x1b = 1;
      pHVar3->field_0013 = 1;
      pHVar3->field_0017 = -1;
      pHVar3->field_0027 = 0;
      pHVar3->field_0023 = 0;
      pHVar3->field_002F = 1;
      pHVar3->field_002B = 1;
    }
    pFVar2->field_1F2F = pHVar3;
    if (pHVar3 != nullptr) {
      uVar10 = 0;
      cVar8 = '\x01';
      bVar7 = 0x10;
      iVar6 = 1;
      iVar4 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x199,0x5e,0x174,0x175);
      /* ST_CALLSITE[0059FFDE]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_2414 =
           st::fn_0040459D(pFVar2->field_1F2F,CASE_2,0x199,0x5e,iVar4,iVar6,bVar7,cVar8,uVar10);
      if (local_EAX_2414 != 0) {
        pHVar3 = pFVar2->field_1F2F;
        pHVar3->field_0002 = 0;
        pHVar3->field_0017 = -1;
        uVar10 = *(uint *)&pFVar2->field_1F2F->field_0x3;
        if (-1 < (int)uVar10) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar10);
        }
        /* ST_CALLSITE[005A0017]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        st::fn_004055F1(pFVar2->field_1F2F);
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0x199,0x5e,0x174,0x175);
      /* ST_CALLSITE[005A0056]: CALL 0x00402298; direct=00402298 PutDDXClip */
      st::fn_00402298(0x199,0x5e,0x199,0x5e,0x174,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    }
    if (pFVar2->field_1F2B != nullptr) {
      /* ST_CALLSITE[005A0068]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(pFVar2->field_1F2B);
      st::fn_0072E2B0(pFVar2->field_1F2B);
      pFVar2->field_1F2B = nullptr;
    }
    pHVar3 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar3 == nullptr) {
      pHVar3 = nullptr;
    }
    else {
      pHVar3->field_0002 = 1;
      pHVar3->field_0000 = 0;
      *(undefined4 *)&pHVar3->field_0x3 = 0xffffffff;
      pHVar3->field_0001 = CASE_2;
      pHVar3->field_0007 = nullptr;
      pHVar3->field_000B = nullptr;
      pHVar3->field_000F = 0;
      *(undefined4 *)&pHVar3->field_0x1b = 1;
      pHVar3->field_0013 = 1;
      pHVar3->field_0017 = -1;
      pHVar3->field_0027 = 0;
      pHVar3->field_0023 = 0;
      pHVar3->field_002F = 1;
      pHVar3->field_002B = 1;
    }
    pFVar2->field_1F2B = pHVar3;
    if (pHVar3 == nullptr) goto switchD_0059f6f7_default;
    uVar10 = 0;
    cVar8 = '\x01';
    bVar7 = 0x10;
    iVar6 = 1;
    iVar4 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x13,0x5e,0x174,0x175);
    /* ST_CALLSITE[005A00FC]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
    local_EAX_2700 =
         st::fn_0040459D(pFVar2->field_1F2B,CASE_4,0x13,0x5e,iVar4,iVar6,bVar7,cVar8,uVar10);
    if (local_EAX_2700 != 0) {
      pHVar3 = pFVar2->field_1F2B;
      pHVar3->field_0002 = 0;
      pHVar3->field_0017 = -1;
      uVar10 = *(uint *)&pFVar2->field_1F2B->field_0x3;
      if (-1 < (int)uVar10) {
        st::fn_006B3430((int *)g_ddxContext_008075A8,uVar10);
      }
      /* ST_CALLSITE[005A0134]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      st::fn_004055F1(pFVar2->field_1F2B);
    }
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0x13,0x5e,0x174,0x175);
    /* ST_CALLSITE[005A016A]: CALL 0x00402298; direct=00402298 PutDDXClip */
    st::fn_00402298(0x13,0x5e,0x13,0x5e,0x174,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    if (pFVar2->field_1CDF != 0xffffffff) {
      st::fn_006B3AF0((int *)pFVar2->field_1D23,pFVar2->field_1CDF);
    }
    if (pFVar2->field_1D70 != 0xffffffff) {
      st::fn_006B3AF0((int *)pFVar2->field_1DB4,pFVar2->field_1D70);
    }
    uVar10 = pFVar2->field_1E01;
    if (uVar10 == 0xffffffff) goto switchD_0059f6f7_default;
    pDVar9 = (DDXContext_008075A8 *)pFVar2->field_1E45;
    break;
  case '\t':
    /* ST_CALLSITE[0059F9A7]: CALL 0x0040418d; direct=0040418D FSGSTy::sub_005A0C80 */
    st::fn_0040418D(local_8);
    if (pFVar2->field_1F23 != nullptr) {
      /* ST_CALLSITE[0059F9B6]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(pFVar2->field_1F23);
      st::fn_0072E2B0(pFVar2->field_1F23);
      pFVar2->field_1F23 = nullptr;
    }
    pHVar3 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar3 == nullptr) {
      pHVar3 = nullptr;
    }
    else {
      pHVar3->field_0002 = 1;
      pHVar3->field_0000 = 0;
      *(undefined4 *)&pHVar3->field_0x3 = 0xffffffff;
      pHVar3->field_0001 = CASE_2;
      pHVar3->field_0007 = nullptr;
      pHVar3->field_000B = nullptr;
      pHVar3->field_000F = 0;
      *(undefined4 *)&pHVar3->field_0x1b = 1;
      pHVar3->field_0013 = 1;
      pHVar3->field_0017 = -1;
      pHVar3->field_0027 = 0;
      pHVar3->field_0023 = 0;
      pHVar3->field_002F = 1;
      pHVar3->field_002B = 1;
    }
    pFVar2->field_1F23 = pHVar3;
    if (pHVar3 != nullptr) {
      uVar10 = 0;
      cVar8 = '\x01';
      bVar7 = 0x10;
      iVar6 = 1;
      iVar4 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x22,0x5e,0x2e1,0x175);
      /* ST_CALLSITE[0059FA54]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_996 =
           st::fn_0040459D(pFVar2->field_1F23,CASE_4,0x22,0x5e,iVar4,iVar6,bVar7,cVar8,uVar10);
      if (local_EAX_996 != 0) {
        pHVar3 = pFVar2->field_1F23;
        pHVar3->field_0002 = 0;
        pHVar3->field_0017 = -1;
        uVar10 = *(uint *)&pFVar2->field_1F23->field_0x3;
        if (-1 < (int)uVar10) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar10);
        }
        /* ST_CALLSITE[0059FA8C]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        st::fn_004055F1(pFVar2->field_1F23);
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0x22,0x5e,0x2e1,0x175);
      /* ST_CALLSITE[0059FAC2]: CALL 0x00402298; direct=00402298 PutDDXClip */
      st::fn_00402298(0x22,0x5e,0x22,0x5e,0x2e1,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    }
    uVar10 = pFVar2->field_1ABC;
    pDVar9 = g_ddxContext_008075A8;
    break;
  case '\n':
    /* ST_CALLSITE[0059F861]: CALL 0x00405641; direct=00405641 FSGSTy::sub_005A0590 */
    st::fn_00405641(local_8);
    if (pFVar2->field_1F23 != nullptr) {
      /* ST_CALLSITE[0059F870]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(pFVar2->field_1F23);
      st::fn_0072E2B0(pFVar2->field_1F23);
      pFVar2->field_1F23 = nullptr;
    }
    pHVar3 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar3 == nullptr) {
      pHVar3 = nullptr;
    }
    else {
      pHVar3->field_0002 = 1;
      pHVar3->field_0000 = 0;
      *(undefined4 *)&pHVar3->field_0x3 = 0xffffffff;
      pHVar3->field_0001 = CASE_2;
      pHVar3->field_0007 = nullptr;
      pHVar3->field_000B = nullptr;
      pHVar3->field_000F = 0;
      *(undefined4 *)&pHVar3->field_0x1b = 1;
      pHVar3->field_0013 = 1;
      pHVar3->field_0017 = -1;
      pHVar3->field_0027 = 0;
      pHVar3->field_0023 = 0;
      pHVar3->field_002F = 1;
      pHVar3->field_002B = 1;
    }
    pFVar2->field_1F23 = pHVar3;
    if (pHVar3 != nullptr) {
      uVar10 = 0;
      cVar8 = '\x01';
      bVar7 = 0x10;
      iVar6 = 1;
      iVar4 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0xb4,0x5e,0x1b8,0x17a);
      /* ST_CALLSITE[0059F914]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      uVar9 = st::fn_0040459D(pFVar2->field_1F23,CASE_4,0xb4,0x5e,iVar4,iVar6,bVar7,cVar8,uVar10);
      if (uVar9 != 0) {
        pHVar3 = pFVar2->field_1F23;
        pHVar3->field_0002 = 0;
        pHVar3->field_0017 = -1;
        uVar10 = *(uint *)&pFVar2->field_1F23->field_0x3;
        if (-1 < (int)uVar10) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar10);
        }
        /* ST_CALLSITE[0059F94D]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        st::fn_004055F1(pFVar2->field_1F23);
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0xb4,0x5e,0x1b8,0x17a);
      /* ST_CALLSITE[0059F98B]: CALL 0x00402298; direct=00402298 PutDDXClip */
      st::fn_00402298(0xb4,0x5e,0xb4,0x5e,0x1b8,(byte *)0x17a,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    }
    uVar10 = pFVar2->field_1ABC;
    pDVar9 = g_ddxContext_008075A8;
    break;
  default:
    goto switchD_0059f6f7_default;
  }
  st::fn_006B3AF0((int *)pDVar9,uVar10);
switchD_0059f6f7_default:
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8A60((byte *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C,
                 0xfffffffe,g_cursorClass_00802A30->field_0034,g_cursorClass_00802A30->field_0038);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 005A0DC0 FSGSTy::ConnectProc
#line 4 "decomp/ST.exe/functions/005A0DC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::ConnectProc */

void __thiscall st::fn_005A0DC0(FSGSTy *this,int param_1,int param_2)

{
  char cVar1;
  ushort *puVar2;
  FSGSTy *pFVar4;
  int iVar5;
  uint *puVar6;
  char *pcVar7_mg2;
  char *pcVar7_mg0;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  if (((this->array_00BC[0xc].field_01DF == '\x01') && (this->field_1AC0 != nullptr)) &&
     (-1 < (int)this->field_1ABC)) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar5 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    pFVar4 = local_8;
    if (iVar5 == 0) {
      puVar2 = local_8->field_1AC0;
      uVar9 = *(uint *)(puVar2 + 10);
      if (uVar9 == 0) {
        uVar9 = ((uint)puVar2[7] * *(int *)(puVar2 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar2 + 4);
      }
      puVar6 = (undefined4 *)st::fn_006B4FA0((int *)puVar2);
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar6 = 0xffffffff;
        puVar6 = puVar6 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar6 = 0xff;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      st::fn_00710A90(pFVar4->array_00BC[0xc].field_01F3,(int)pFVar4->field_1AC0,0,0,0x16,0x1b8,
                       0xf0);
      if (param_1 < param_2) {
        iVar5 = (param_1 * 100) / param_2;
        pcVar7_mg2 = st::fn_006B0140(0x2571,g_hINSTANCE_00807618);
        /* ST_CALLSITE[005A0EB7]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s%d%%"),pcVar7_mg2,iVar5);
      }
      else {
        pcVar7_mg0 = st::fn_006B0140(0x2570,g_hINSTANCE_00807618);
        uVar9 = 0xffffffff;
        do {
          pcVar10 = pcVar7_mg0;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar10 = pcVar7_mg0 + 1;
          cVar1 = *pcVar7_mg0;
          pcVar7_mg0 = pcVar10;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pcVar10 = pcVar10 + -uVar9;
        pcVar11 = (char *)&DAT_0080f33a;
        memmove(pcVar11, pcVar10, uVar9); /* compiler REP MOVS byte copy */
      }
      st::fn_00711B70(pFVar4->array_00BC[0xc].field_01F3,(char *)&DAT_0080f33a,-1,-1,2,-1,-1);
      st::fn_006B35D0((int *)g_ddxContext_008075A8,pFVar4->field_1ABC);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x909,0,iVar5,st::mutable_c_string("%s")
                               ,"FSGSTy::ConnectProc");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x909);
  }
  return;
}

// 005A0FF0 FSGSTy::DoLogon
#line 4 "decomp/ST.exe/functions/005A0FF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DoLogon */

void __thiscall st::fn_005A0FF0(FSGSTy *this)

{
  int iVar1;
  int iVar2;
  StartSystemTy *pSVar3;
  CursorClassTy *this_00;
  FSGSTy *pFVar5;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_5c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  FSGSTy *local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  this_00 = g_cursorClass_00802A30;
  if (iVar4 == 0) {
    if (g_cursorClass_00802A30 != nullptr) {
      iVar1 = g_cursorClass_00802A30->field_00C9;
      iVar2 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      this_00->field_0494 = 0xffff;
      /* ST_CALLSITE[005A104F]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      st::fn_0040507E(this_00,CASE_0,iVar2,iVar1);
      /* ST_CALLSITE[005A1064]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
      this_00->field_00D2 = 0;
      this_00->field_04DF = -1;
    }
    pFVar5 = local_8;
    /* ST_CALLSITE[005A1081]: CALL dword ptr [EDX + 0x8] */
    local_8->CloseButtons();
    pFVar5->array_00BC[0xc].field_01E1 = 2;
    pSVar3 = pFVar5->array_00BC[0xc].field_01DB;
    if (pSVar3->field_02E6 != nullptr) {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      st::fn_00401A9B(pSVar3->field_02E6,&local_18);
    }
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x918,0,iVar4,st::mutable_c_string("%s"),
                             "FSGSTy::DoLogon");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x918);
  return;
}

// 005A1160 FSGSTy::CheckUpdate
#line 4 "decomp/ST.exe/functions/005A1160/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::CheckUpdate */

void __thiscall st::fn_005A1160(FSGSTy *this)

{
  char cVar1;
  ushort *puVar2;
  MMsgTy *this_00;
  FSGSTy *this_01;
  int iVar4;
  char *pcVar4;
  uint *puVar5;
  int iVar11;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  STMessage *pSVar9;
  dword *pdVar10;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  InternalExceptionFrame local_90;
  dword local_4c [8];
  STMessage local_2c;
  FSGSTy *local_c;
  int local_8;

  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  local_c = this;
  iVar4 = st::fn_0072D7F0(local_90.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_90.previous;
    iVar11 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x935,0,iVar4,
                                st::mutable_c_string("%s"),"FSGSTy::CheckUpdate");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x935);
    return;
  }
  /* ST_CALLSITE[005A11BD]: CALL dword ptr [0x0085bde8] */
  st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s%s%s"),&CHAR_00h_00807680,st_global_0079C020,
            st_global_0079C024);
  pcVar4 = (char *)st::fn_0040363E(&DAT_0080f33a,(undefined4 *)&local_8,nullptr,nullptr);
  this_01 = local_c;
  if (pcVar4 == nullptr) {
    /* ST_CALLSITE[005A1337]: CALL 0x00402ced; direct=00402CED FSGSTy::DoLogon */
    st::fn_00402CED(local_c);
    g_currentExceptionFrame = local_90.previous;
    return;
  }
  uVar6 = 0xffffffff;
  do {
    pcVar8 = pcVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar8 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar8;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar4 = pcVar8 + -uVar6;
  pcVar8 = (char *)&DAT_0080f126;
  memmove(pcVar8, pcVar4, uVar6); /* compiler REP MOVS byte copy */
  uVar7 = 0;
  puVar2 = local_c->field_1AC0;
  uVar6 = *(uint *)(puVar2 + 10);
  if (uVar6 == 0) {
    uVar6 = ((uint)puVar2[7] * *(int *)(puVar2 + 2) + 0x1f >> 3 & 0x1ffffffc) * *(int *)(puVar2 + 4);
  }
  puVar5 = (undefined4 *)st::fn_006B4FA0((int *)puVar2);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar5 = 0xff;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  st::fn_00710A90(this_01->array_00BC[0xc].field_01F3,(int)this_01->field_1AC0,0,0,0x16,0x1b8,0xf0);
  iVar15 = -1;
  iVar14 = -1;
  uVar6 = 2;
  iVar13 = -1;
  iVar12 = -2;
  pcVar4 = st::fn_006B0140(0x25bd,g_hINSTANCE_00807618);
  st::fn_00711B70(this_01->array_00BC[0xc].field_01F3,pcVar4,iVar12,iVar13,uVar6,iVar14,iVar15);
  st::fn_006B35D0((int *)g_ddxContext_008075A8,this_01->field_1ABC);
  pSVar9 = &local_2c;
  for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
    pSVar9->unknown_00 = 0;
    pSVar9 = (STMessage *)&pSVar9->unknown_04;
  }
  memset(local_4c, 0, 0x20); /* compiler bulk-zero initialization */
  local_4c[2] = this_01->field_0008;
  local_2c.unknown_0c = 2;
  local_2c.id = MESS_FSGSTY_6957;
  local_4c[3] = 2;
  local_4c[4] = 0x6956;
  this_00 = (this_01->array_00BC[0xc].field_01DB)->field_02E6;
  local_2c.unknown_08 = local_4c[2];
  if (this_00 != nullptr) {
    /* ST_CALLSITE[005A12FF]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
    st::fn_00403FA8(this_00,0x25b7,'\x01',&local_2c.unknown_00,local_4c,nullptr,local_8
                       ,0x25b8);
    g_currentExceptionFrame = local_90.previous;
    return;
  }
  /* ST_CALLSITE[005A131F]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/FSGSTy;pointer:/SubmarineTitans/Recovered/STMessage */
  this_01->GetMessage(&local_2c);
  g_currentExceptionFrame = local_90.previous;
  return;
}

// 005A1430 FSGSTy::Download
#line 4 "decomp/ST.exe/functions/005A1430/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::Download */

void __thiscall st::fn_005A1430(FSGSTy *this,undefined4 param_1,undefined4 param_2)

{
  ushort *puVar1;
  FSGSTy *pFVar3;
  int errorCode;
  uint *puVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  if (((this->array_00BC[0xc].field_01DF == '\x01') && (this->field_1AC0 != nullptr)) &&
     (-1 < (int)this->field_1ABC)) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    pFVar3 = local_8;
    if (errorCode == 0) {
      puVar1 = local_8->field_1AC0;
      uVar9 = *(uint *)(puVar1 + 10);
      if (uVar9 == 0) {
        uVar9 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar1 + 4);
      }
      puVar4 = (undefined4 *)st::fn_006B4FA0((int *)puVar1);
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar4 = 0xff;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      st::fn_00710A90(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0,0x16,0x1b8,
                       0xf0);
      pcVar5 = st::fn_006B0140(0x25bb,g_hINSTANCE_00807618);
      pcVar6 = st::fn_006B0140(0x25ba,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005A152A]: CALL dword ptr [0x0085bde8] */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s %d%%\n(%d %s)"),pcVar6,param_1,param_2,pcVar5);
      st::fn_00711B70(pFVar3->array_00BC[0xc].field_01F3,(char *)&DAT_0080f33a,-2,-1,2,-1,-1);
      st::fn_006B35D0((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x941,0,errorCode,
                               st::mutable_c_string("%s"),"FSGSTy::Download");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x941);
  }
  return;
}

// 005A1630 FSGSTy::Finished
#line 4 "decomp/ST.exe/functions/005A1630/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::Finished */

void __thiscall st::fn_005A1630(FSGSTy *this,int param_1)

{
  ushort *puVar1;
  StartSystemTy *pSVar2;
  MMsgTy *this_00;
  CursorClassTy *this_01;
  FSGSTy *this_02;
  int iVar4;
  uint *puVar4;
  char *resourceString;
  int iVar9;
  uint uVar5;
  uint uVar6;
  STMessage *pSVar7;
  int iVar8;
  int iVar10;
  int iVar11;
  int iVar12;
  InternalExceptionFrame local_6c;
  STMessage local_28;
  FSGSTy *local_8;

  if (((this->array_00BC[0xc].field_01DF == '\x01') && (this->field_1AC0 != nullptr)) &&
     (-1 < (int)this->field_1ABC)) {
    local_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_6c;
    local_8 = this;
    iVar4 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
    this_01 = g_cursorClass_00802A30;
    if (iVar4 == 0) {
      if (g_cursorClass_00802A30 != nullptr) {
        iVar8 = g_cursorClass_00802A30->field_00C9;
        iVar10 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_1;
        this_01->field_0494 = 0xffff;
        /* ST_CALLSITE[005A16BF]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
        st::fn_0040507E(this_01,CASE_0,iVar10,iVar8);
        /* ST_CALLSITE[005A16D4]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
        st::fn_0040241E(this_01,this_01->field_00C5,this_01->field_00C9);
        this_01->field_00D2 = 0;
        this_01->field_04DF = -1;
      }
      this_02 = local_8;
      if (param_1 != 0) {
        DAT_0080fb76 = 1;
        local_8->field_004D = 0x7102;
        local_8->field_0049 = 1;
        st::fn_006E6020(local_8,(undefined4 *)&local_8->field_0x3d);
        g_currentExceptionFrame = local_6c.previous;
        return;
      }
      puVar1 = local_8->field_1AC0;
      uVar6 = *(uint *)(puVar1 + 10);
      if (uVar6 == 0) {
        uVar6 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar1 + 4);
      }
      puVar4 = (undefined4 *)st::fn_006B4FA0((int *)puVar1);
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar4 = 0xff;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      st::fn_00710A90(this_02->array_00BC[0xc].field_01F3,(int)this_02->field_1AC0,0,0,0x16,0x1b8,
                       0xf0);
      iVar12 = -1;
      iVar11 = -1;
      uVar6 = 2;
      iVar10 = -1;
      iVar8 = -2;
      resourceString = st::fn_006B0140(0x25b9,g_hINSTANCE_00807618);
      st::fn_00711B70(this_02->array_00BC[0xc].field_01F3,resourceString,iVar8,iVar10,uVar6,iVar11,
                     iVar12);
      st::fn_006B35D0((int *)g_ddxContext_008075A8,this_02->field_1ABC);
      pSVar2 = this_02->array_00BC[0xc].field_01DB;
      pSVar7 = &local_28;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        pSVar7->unknown_00 = 0;
        pSVar7 = (STMessage *)&pSVar7->unknown_04;
      }
      local_28.unknown_08 = this_02->field_0008;
      local_28.unknown_0c = 2;
      local_28.id = MESS_CHOOSEMAPTY_6956;
      this_00 = pSVar2->field_02E6;
      if (this_00 != nullptr) {
        /* ST_CALLSITE[005A17FC]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
        st::fn_00403FA8(this_00,0x25bc,'\0',&local_28.unknown_00,nullptr,
                           nullptr,0,0);
        g_currentExceptionFrame = local_6c.previous;
        return;
      }
      /* ST_CALLSITE[005A181B]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/FSGSTy;pointer:/SubmarineTitans/Recovered/STMessage */
      this_02->GetMessage(&local_28);
      g_currentExceptionFrame = local_6c.previous;
      return;
    }
    g_currentExceptionFrame = local_6c.previous;
    iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x95b,0,iVar4,st::mutable_c_string("%s")
                               ,"FSGSTy::Finished");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x95b);
  }
  return;
}

// 005A1920 FSGSTy::SetBanner
#line 4 "decomp/ST.exe/functions/005A1920/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetBanner */

void __thiscall
st::fn_005A1920(FSGSTy *this,char *param_1,undefined4 param_2,int param_3,uint param_4,
                 undefined4 *param_5)

{
  byte *puVar1;
  char cVar2;
  int iVar5;
  int local_EAX_72;
  int local_EAX_205;
  byte *puVar6;
  RecoveredRecord_FSGSTy_006C7D20 *pRVar7;
  int local_EAX_485;
  DWORD DVar8;
  int iVar4;
  int *piVar9;
  char *pcVar10;
  int iVar10;
  uint uVar11;
  int iVar12;
  FSGSTy *pFVar14;
  char *pcVar15;
  undefined4 local_8e0;
  undefined1 local_860 [41];
  undefined1 auStack_837 [855];
  undefined4 local_4e0;
  undefined1 local_460 [41];
  undefined1 auStack_437 [855];
  InternalExceptionFrame local_e0;
  InternalExceptionFrame local_9c;
  InternalExceptionFrame local_58;
  int local_14;
  int local_10;
  FSGSTy *local_c;
  int *local_8;
  char *pcVar15_mg0;
  char *pcVar10_mg0;

  if (((param_5 != nullptr) && (this->field_1A97 != nullptr)) &&
     (this->field_0065 == CASE_1)) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_c = this;
    local_EAX_72 = st::fn_0072D7F0(local_58.jumpBuffer,0);
    pFVar14 = local_c;
    if (local_EAX_72 == 0) {
      if ((param_3 == 1) || (param_3 == 8)) {
        if (local_c->field_1A9F != nullptr) {
          st::fn_006C6FC0(static_cast<AnonShape_006C6FC0_B2C34C14 *>(local_c->field_1A9F));
        }
        pFVar14->field_1A9F = nullptr;
        if (pFVar14->field_1A9B != nullptr) {
          st::fn_006AB060(&pFVar14->field_1A9B);
        }
      }
      if (param_3 == 1) {
        local_8 = nullptr;
        local_9c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_9c;
        iVar4 = st::fn_0072D7F0(local_9c.jumpBuffer,0);
        if (iVar4 == 0) {
          piVar9 = st::fn_006C7C50(st::machine_word_boundary_cast<undefined4>(param_5),param_4);
          pFVar14 = local_c;
          local_8 = piVar9;
          if (piVar9 != nullptr) {
            memset(&local_8e0, 0, 0x400); /* compiler bulk-zero initialization */
            st::fn_006C7BB0(piVar9,(undefined1 *)&local_8e0,&local_14);
            iVar12 = 0x80;
            local_10 = 0x40;
            do {
              puVar1 = (undefined1 *)((int)&local_8e0 + iVar12 + 1);
              (&pFVar14->field_1A97[1].field_0x12)[iVar12] =
                   *(undefined1 *)((int)&local_8e0 + iVar12);
              (&pFVar14->field_1A97[1].field_0x11)[iVar12] = *puVar1;
              iVar5 = iVar12 + 2;
              iVar12 = iVar12 + 4;
              (puVar1 + (0xa8 - (int)(local_860 + 1)))[(int)pFVar14->field_1A97] =
                   *(undefined1 *)((int)&local_8e0 + iVar5);
              local_10 = local_10 + -1;
            } while (local_10 != 0);
            st::fn_006B0A20((AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,(int)local_860,
                         0x20,0x40,0);
            piVar9 = local_8;
            st::fn_006C7B90(local_8,0x4e,9);
            st::fn_006C79A0(piVar9,(undefined4 *)pFVar14->field_1A97,0);
            st::fn_006C7980(piVar9);
          }
          g_currentExceptionFrame = local_9c.previous;
        }
        else {
          g_currentExceptionFrame = local_9c.previous;
          pFVar14 = local_c;
          if (local_8 != nullptr) {
            st::fn_006C7980(local_8);
            pFVar14 = local_c;
          }
        }
      }
      else if (param_3 == 8) {
        pFVar14->field_1AA3 = 0;
        local_e0.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_e0;
        local_EAX_205 = st::fn_0072D7F0(local_e0.jumpBuffer,0);
        pFVar14 = local_c;
        if (local_EAX_205 == 0) {
          puVar6 = (byte *)(st::fn_006AAC70(param_4));
          pFVar14 = local_c;
          local_c->field_1A9B = puVar6;
          if (puVar6 != nullptr) {
            memmove(puVar6, param_5, param_4); /* compiler REP MOVS byte copy */
            pRVar7 = (RecoveredRecord_FSGSTy_006C7D20 *)
                     st::fn_006C7DC0(st::machine_word_boundary_cast<undefined4>(local_c->field_1A9B));
            pFVar14->field_1A9F = pRVar7;
            if (pRVar7 != nullptr) {
              memset(&local_4e0, 0, 0x400); /* compiler bulk-zero initialization */
              st::fn_006C7D20(pRVar7,(int)&local_4e0,&local_10);
              iVar12 = 0x80;
              local_8 = (int *)0x40;
              do {
                puVar1 = (undefined1 *)((int)&local_4e0 + iVar12 + 1);
                (&pFVar14->field_1A97[1].field_0x12)[iVar12] =
                     *(undefined1 *)((int)&local_4e0 + iVar12);
                (&pFVar14->field_1A97[1].field_0x11)[iVar12] = *puVar1;
                iVar5 = iVar12 + 2;
                iVar12 = iVar12 + 4;
                (puVar1 + (0xa8 - (int)(local_460 + 1)))[(int)pFVar14->field_1A97] =
                     *(undefined1 *)((int)&local_4e0 + iVar5);
                local_8 = (int *)((int)local_8 + -1);
              } while (local_8 != nullptr);
              st::fn_006B0A20((AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,
                           (int)local_460,0x20,0x40,0);
              st::fn_006C7D00(st::pointer_boundary_cast<undefined4 *>(pFVar14->field_1A9F),0x4e,9);
              st::fn_006C7070
                        (static_cast<int *>(pFVar14->field_1A9F),(undefined4 *)pFVar14->field_1A97,0);
              local_EAX_485 = st::fn_006C7000(static_cast<AnonShape_006C7000_4A8D1200 *>(pFVar14->field_1A9F));
              pFVar14->field_1AA3 = local_EAX_485;
              if (local_EAX_485 < 1) {
                st::fn_006C6FC0(static_cast<AnonShape_006C6FC0_B2C34C14 *>(pFVar14->field_1A9F));
                pFVar14->field_1A9F = nullptr;
                st::fn_006AB060(&pFVar14->field_1A9B);
                pFVar14->field_1AA3 = 0;
                g_currentExceptionFrame = local_e0.previous;
              }
              else {
                /* ST_CALLSITE[005A1B14]: CALL dword ptr [0x0085bedc] */
                DVar8 = st::external_000000DA();
                pFVar14->field_1AA7 = DVar8;
                g_currentExceptionFrame = local_e0.previous;
              }
              goto LAB_005a1cfd;
            }
            st::fn_006AB060(&pFVar14->field_1A9B);
          }
          g_currentExceptionFrame = local_e0.previous;
        }
        else {
          g_currentExceptionFrame = local_e0.previous;
          if (local_c->field_1A9F != nullptr) {
            st::fn_006C6FC0(static_cast<AnonShape_006C6FC0_B2C34C14 *>(local_c->field_1A9F));
          }
          pFVar14->field_1A9F = nullptr;
          if (pFVar14->field_1A9B != nullptr) {
            st::fn_006AB060(&pFVar14->field_1A9B);
          }
          pFVar14->field_1AA3 = 0;
        }
      }
LAB_005a1cfd:
      st::fn_006B35D0((int *)g_ddxContext_008075A8,pFVar14->field_1A8F);
      if ((param_3 == 1) || (param_3 == 8)) {
        if (pFVar14->field_1AAB != (LPCSTR)0x0) {
          st::fn_006AB060(&pFVar14->field_1AAB);
        }
        uVar11 = 0xffffffff;
        pcVar10_mg0 = param_1;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar2 = *pcVar10_mg0;
          pcVar10_mg0 = pcVar10_mg0 + 1;
        } while (cVar2 != '\0');
        pcVar10 = static_cast<char *>(st::fn_006AAC70(~uVar11));
        pFVar14->field_1AAB = pcVar10;
        if (pcVar10 != nullptr) {
          uVar11 = 0xffffffff;
          do {
            pcVar15_mg0 = param_1;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            pcVar15_mg0 = param_1 + 1;
            cVar2 = *param_1;
            param_1 = pcVar15_mg0;
          } while (cVar2 != '\0');
          uVar11 = ~uVar11;
          pcVar15 = pcVar15_mg0 + -uVar11;
          memmove(pcVar10, pcVar15, uVar11); /* compiler REP MOVS byte copy */
        }
        pFVar14->field_1AAF = param_2;
      }
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar10 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x9b5,0,local_EAX_72,
                                st::mutable_c_string("%s"),"FSGSTy::SetBanner");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_72,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x9b5);
  }
  return;
}

// 005A1F00 FSGSTy::AddMessage
#line 4 "decomp/ST.exe/functions/005A1F00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::AddMessage
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=005A1FC7 MOV ECX,dword ptr [EBP + 0x8];
   first-use mask | 005A1FF1 MOV EAX,dword ptr [EBP + 0x8]; first-use mask | 005A2048 MOV EDX,dword
   ptr [EBP + 0x8]; first-use mask
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:4: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=005A1FF7 MOV ECX,dword ptr [EBP + 0x14];
   first-use mask */

void __thiscall
st::fn_005A1F00(FSGSTy *this,byte param_1,byte *param_2,char *param_3,byte param_4)

{
  byte bVar1;
  char cVar2;
  AnonShape_006B7830_769CA2DF *pAVar3;
  FSGSTy *this_00;
  short sVar5;
  int iVar6;
  uint *puVar6;
  DArrayTy *pDVar7;
  DArrayTy *pDVar8;
  int iVar10;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  char *pcVar13;
  bool bVar14;
  InternalExceptionFrame local_5c;
  DArrayTy *local_18;
  FSGSTy *local_14;
  uint local_10;
  uint *local_c;
  char local_5;
  char *pcVar13_mg1;
  char *pcVar13_mg0;

  local_c = nullptr;
  if ((param_3 == nullptr) || (param_2 == nullptr)) {
    return;
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar6 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar10 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x9ec,0,iVar6,
                                st::mutable_c_string("%s"),"FSGSTy::AddMessage");
    if (iVar10 == 0) {
      st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x9ec);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar9 = -1;
  pbVar12 = param_2;
  do {
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    bVar1 = *pbVar12;
    pbVar12 = pbVar12 + 1;
  } while (bVar1 != 0);
  if (iVar9 == -2) {
    uVar10 = 0xffffffff;
    pcVar13_mg0 = param_3;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar13_mg0;
      pcVar13_mg0 = pcVar13_mg0 + 1;
    } while (cVar2 != '\0');
    local_c = static_cast<uint *>(st::fn_006AAC10(~uVar10 + 4));
    if (local_c == nullptr) {
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    /* ST_CALLSITE[005A205E]: CALL dword ptr [0x0085bde8] */
    st::external_00000080((LPSTR)local_c,st::mutable_c_string("%s%1d%s"),&DAT_007c6ff0,param_1,param_3);
  }
  else {
    uVar10 = 0xffffffff;
    pbVar12 = param_2;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar1 != 0);
    uVar11 = 0xffffffff;
    pcVar13_mg1 = param_3;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar2 = *pcVar13_mg1;
      pcVar13_mg1 = pcVar13_mg1 + 1;
    } while (cVar2 != '\0');
    local_c = static_cast<uint *>(st::fn_006AAC10(~uVar10 + ~uVar11 + 0xc));
    if (local_c == nullptr) {
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    pcVar13 = &CHAR_00h_00807e1d;
    pbVar12 = param_2;
    do {
      bVar1 = *pbVar12;
      bVar14 = bVar1 < (byte)*pcVar13;
      if (bVar1 != *pcVar13) {
LAB_005a1fbe:
        iVar9 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_005a1fc3;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar12[1];
      bVar14 = bVar1 < (byte)pcVar13[1];
      if (bVar1 != pcVar13[1]) goto LAB_005a1fbe;
      pbVar12 = pbVar12 + 2;
      pcVar13 = pcVar13 + 2;
    } while (bVar1 != 0);
    iVar9 = 0;
LAB_005a1fc3:
    if (iVar9 == 0) {
      /* ST_CALLSITE[005A1FE6]: CALL dword ptr [0x0085bde8] */
      st::external_00000080((LPSTR)local_c,st::mutable_c_string("%s2%s> %s%1d%s"),&DAT_007c6ff0,param_2,&DAT_007c6ff0,param_1
                ,param_3);
    }
    else {
      /* ST_CALLSITE[005A2019]: CALL dword ptr [0x0085bde8] */
      st::external_00000080((LPSTR)local_c,st::mutable_c_string("%s%1d%s> %s%1d%s"),&DAT_007c6ff0,param_4,param_2,
                &DAT_007c6ff0,param_1,param_3);
    }
  }
  if (local_c != nullptr) {
    for (puVar6 = st::fn_0072E560(local_c,'\n'); puVar6 != nullptr;
        puVar6 = st::fn_0072E560(puVar6,'\n')) {
      *(undefined1 *)puVar6 = 0x20;
    }
    pDVar7 = st::fn_006B54F0(nullptr,1,10);
    local_18 = pDVar7;
    if (pDVar7 != nullptr) {
      local_10 = 0;
      local_5 = '\0';
      st::fn_006B5AA0(pDVar7,(char *)local_c);
      this_00 = local_14;
      pDVar8 = (DArrayTy *)
               st::fn_007121F0(local_14->array_00BC[0xc].field_01F7,&pDVar7->flags,
                                 st::mutable_c_string(" ,.;:!?/\\()[]{}"),0x1a6 - local_14->field_1B4C,0,0xffffffff
                                 ,1);
      if (this_00->array_00BC[0xc].field_01DF == '\x06') {
        this_00->field_002D = 0x26;
        st::fn_006E6080(this_00,2,this_00->field_1B14,(undefined4 *)&this_00->field_0x1d);
        local_10 = (uint)*(ushort *)&this_00->field_0x33;
        if ((int)(this_00->field_1E9E[2] - 0x19) <= (int)local_10) {
          local_5 = '\x01';
        }
      }
      if (pDVar8 != nullptr) {
        st::fn_007129D0
                  (this_00->array_00BC[0xc].field_01F7,(uint *)pDVar8,(uint *)pDVar8);
        pAVar3 = (AnonShape_006B7830_769CA2DF *)this_00->field_1E9E;
        iVar9 = st::machine_word_boundary_cast<int>(pAVar3->field_0008 + pDVar8->elementSize);
        while (499 < iVar9) {
          st::fn_006B7830(pAVar3,0);
          pAVar3 = (AnonShape_006B7830_769CA2DF *)this_00->field_1E9E;
          iVar9 = st::machine_word_boundary_cast<int>(pAVar3->field_0008 + pDVar8->elementSize);
        }
        iVar9 = 0;
        if (0 < (int)pDVar8->elementSize) {
          if ((int)pDVar8->elementSize < 1) {
            pcVar13 = nullptr;
            goto LAB_005a2188;
          }
          do {
            pcVar13 = *(char **)(pDVar8->growCapacity + iVar9 * 4);
LAB_005a2188:
            st::fn_006B5AA0((DArrayTy *)this_00->field_1E9E,pcVar13);
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)pDVar8->elementSize);
        }
        st::fn_006B5570(pDVar8);
        pDVar7 = local_18;
      }
      st::fn_006B5570(pDVar7);
      if (this_00->array_00BC[0xc].field_01DF == '\x06') {
        this_00->field_002D = 0x28;
        *(undefined2 *)&this_00->field_0x31 = 1;
        *(short *)&this_00->field_0x33 = (short)this_00->field_1E9E[2];
        st::fn_006E6080(this_00,2,this_00->field_1B14,(undefined4 *)&this_00->field_0x1d);
        this_00->field_002D = 0x22;
        *(undefined2 *)&this_00->field_0x31 = 0;
        if (local_5 == '\0') {
          sVar5 = (short)local_10;
        }
        else if ((int)this_00->field_1E9E[2] < 0x19) {
          sVar5 = 0;
        }
        else {
          sVar5 = (short)this_00->field_1E9E[2] + -0x19;
        }
        *(short *)&this_00->field_0x33 = sVar5;
        st::fn_006E6080(this_00,2,this_00->field_1B14,(undefined4 *)&this_00->field_0x1d);
      }
    }
    st::fn_006AB060(&local_c);
  }
  g_currentExceptionFrame = local_5c.previous;
  return;
}

// 005A2380 FSGSTy::AddPlayer
#line 4 "decomp/ST.exe/functions/005A2380/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::AddPlayer */

void __thiscall st::fn_005A2380(FSGSTy *this,undefined4 *param_1)

{
  byte bVar1;
  FSGSTy_field_1EA6DArray *array;
  FSGSTy *this_00;
  int iVar3;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  byte *puVar8;
  byte *pbVar9;
  bool bVar10;
  byte local_b0 [48];
  InternalExceptionFrame local_80;
  undefined4 local_3c [11];
  undefined1 local_f;
  FSGSTy *local_c;
  char *local_8;
  FSGSTy_field_1EA6Element *element_1ea6;

  if ((this->array_00BC[0xc].field_01DF == '\x06') && (this->array_00BC[0xc].field_01E0 == '\0')) {
    local_80.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_80;
    local_c = this;
    iVar3 = st::fn_0072D7F0(local_80.jumpBuffer,0);
    this_00 = local_c;
    if (iVar3 == 0) {
      local_c->field_002D = 0x26;
      st::fn_006E6080(local_c,2,local_c->field_1B20,(undefined4 *)&local_c->field_0x1d);
      array = this_00->field_1EA6;
      if ((uint)*(ushort *)&this_00->field_0x31 < array->count) {
        element_1ea6 = DArrayAt<FSGSTy_field_1EA6Element>(array, (uint)*(ushort *)&this_00->field_0x31);
      }
      else {
        element_1ea6 = nullptr;
      }
      if (element_1ea6 != nullptr) {
        pcVar7 = &(element_1ea6)->field_0000;
        pbVar9 = local_b0;
        memmove(pbVar9, pcVar7, 0x2e); /* compiler REP MOVS byte copy */
        iVar5 = 0;
      }
      puVar8 = (byte *)(local_3c);
      memmove(puVar8, param_1, 0x2d); /* compiler REP MOVS byte copy */
      local_f = 0;
      st::fn_006AE1C0((DArrayTy *)array,local_3c);
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0xf3);
      /* ST_CALLSITE[005A2485]: CALL 0x00402298; direct=00402298 PutDDXClip */
      st::fn_00402298(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',this_00->field_1E9A);
      this_00->field_002D = 0x28;
      *(dword *)&this_00->field_0x31 = this_00->field_1EA6->count;
      this_00->field_0035 = 1;
      st::fn_006E6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
      this_00->field_002D = 0x20;
      if ((this_00->field_1EA6->count == 0) || (this_00->array_00BC[0xc].field_01EB == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      *(undefined4 *)&this_00->field_0x31 = uVar3;
      st::fn_006E6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
      if (element_1ea6 != nullptr) {
        uVar6 = 0;
        local_8 = (char *)this_00->field_1EA6->count;
        if (local_8 != nullptr) {
          if (local_8 == nullptr) {
            pcVar7 = nullptr;
            goto LAB_005a252f;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar7 = &this_00->field_1EA6->data->field_0000 +
                     this_00->field_1EA6->elementSize * uVar6;
LAB_005a252f:
            if (pcVar7 != nullptr) {
              pbVar9 = local_b0;
              do {
                bVar1 = *pcVar7;
                bVar10 = bVar1 < *pbVar9;
                if (bVar1 != *pbVar9) {
LAB_005a255d:
                  iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                  goto LAB_005a2562;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar7[1];
                bVar10 = bVar1 < pbVar9[1];
                if (bVar1 != pbVar9[1]) goto LAB_005a255d;
                pcVar7 = pcVar7 + 2;
                pbVar9 = pbVar9 + 2;
              } while (bVar1 != 0);
              iVar5 = 0;
LAB_005a2562:
              if (iVar5 == 0) {
                *(short *)&this_00->field_0x31 = (short)uVar6;
                this_00->field_0037 = 1;
                this_00->field_0035 = 1;
                this_00->field_002D = 0x22;
                st::fn_006E6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
                g_currentExceptionFrame = local_80.previous;
                return;
              }
            }
            uVar6 = uVar6 + 1;
            if (local_8 <= uVar6) {
              g_currentExceptionFrame = local_80.previous;
              return;
            }
          } while( true );
        }
      }
      g_currentExceptionFrame = local_80.previous;
      return;
    }
    g_currentExceptionFrame = local_80.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xa12,0,iVar3,st::mutable_c_string("%s")
                               ,"FSGSTy::AddPlayer");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xa12);
  }
  return;
}

// 005A26C0 FSGSTy::DelPlayer
#line 4 "decomp/ST.exe/functions/005A26C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DelPlayer */

void __thiscall st::fn_005A26C0(FSGSTy *this,byte *param_1)

{
  byte bVar1;
  FSGSTy_field_1EA6DArray *pFVar2;
  FSGSTy *this_00;
  int iVar4;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint index;
  uint uVar7;
  char *pcVar8;
  byte *pbVar9;
  bool bVar10;
  InternalExceptionFrame local_84;
  byte local_40 [48];
  FSGSTy *local_10;
  uint local_c;
  char *local_8;
  byte *pbVar10;

  if ((this->array_00BC[0xc].field_01DF == '\x06') && (this->array_00BC[0xc].field_01E0 == '\0')) {
    local_84.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_84;
    local_10 = this;
    iVar4 = st::fn_0072D7F0(local_84.jumpBuffer,0);
    this_00 = local_10;
    if (iVar4 == 0) {
      local_10->field_002D = 0x26;
      st::fn_006E6080(local_10,2,local_10->field_1B20,(undefined4 *)&local_10->field_0x1d);
      pFVar2 = this_00->field_1EA6;
      uVar7 = pFVar2->count;
      if (*(ushort *)&this_00->field_0x31 < uVar7) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        local_8 = &pFVar2->data->field_0000 +
                  pFVar2->elementSize * (uint)*(ushort *)&this_00->field_0x31;
      }
      else {
        local_8 = nullptr;
      }
      local_c = uVar7;
      if (local_8 != nullptr) {
        pcVar8 = local_8;
        pbVar9 = local_40;
        memmove(pbVar9, pcVar8, 0x2e); /* compiler REP MOVS byte copy */
      }
      index = 0;
      if (uVar7 != 0) {
        if (uVar7 == 0) {
          pcVar8 = nullptr;
          goto LAB_005a278f;
        }
        do {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pcVar8 = &this_00->field_1EA6->data->field_0000 + this_00->field_1EA6->elementSize * index
          ;
LAB_005a278f:
          pbVar10 = param_1;
          if (pcVar8 != nullptr) {
            do {
              bVar1 = *pcVar8;
              bVar10 = bVar1 < *pbVar10;
              if (bVar1 != *pbVar10) {
LAB_005a27ba:
                iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_005a27bf;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar8[1];
              bVar10 = bVar1 < pbVar10[1];
              if (bVar1 != pbVar10[1]) goto LAB_005a27ba;
              pcVar8 = pcVar8 + 2;
              pbVar10 = pbVar10 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_005a27bf:
            uVar7 = local_c;
            if (iVar6 == 0) {
              st::fn_006B0C70((DArrayTy *)this_00->field_1EA6,index);
              break;
            }
          }
          index = index + 1;
        } while (index < uVar7);
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0xf3);
      /* ST_CALLSITE[005A2814]: CALL 0x00402298; direct=00402298 PutDDXClip */
      st::fn_00402298(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',this_00->field_1E9A);
      this_00->field_002D = 0x28;
      *(dword *)&this_00->field_0x31 = this_00->field_1EA6->count;
      this_00->field_0035 = 1;
      st::fn_006E6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
      this_00->field_002D = 0x20;
      if ((this_00->field_1EA6->count == 0) || (this_00->array_00BC[0xc].field_01EB == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      *(undefined4 *)&this_00->field_0x31 = uVar4;
      st::fn_006E6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
      if (local_8 != nullptr) {
        uVar7 = 0;
        local_c = this_00->field_1EA6->count;
        if (local_c != 0) {
          if (local_c == 0) {
            pcVar8 = nullptr;
            goto LAB_005a28be;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar8 = &this_00->field_1EA6->data->field_0000 +
                     this_00->field_1EA6->elementSize * uVar7;
LAB_005a28be:
            if (pcVar8 != nullptr) {
              pbVar9 = local_40;
              do {
                bVar1 = *pcVar8;
                bVar10 = bVar1 < *pbVar9;
                if (bVar1 != *pbVar9) {
LAB_005a28e9:
                  iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                  goto LAB_005a28ee;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar8[1];
                bVar10 = bVar1 < pbVar9[1];
                if (bVar1 != pbVar9[1]) goto LAB_005a28e9;
                pcVar8 = pcVar8 + 2;
                pbVar9 = pbVar9 + 2;
              } while (bVar1 != 0);
              iVar6 = 0;
LAB_005a28ee:
              if (iVar6 == 0) {
                *(short *)&this_00->field_0x31 = (short)uVar7;
                this_00->field_0037 = 1;
                this_00->field_0035 = 1;
                this_00->field_002D = 0x22;
                st::fn_006E6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
                g_currentExceptionFrame = local_84.previous;
                return;
              }
            }
            uVar7 = uVar7 + 1;
            if (local_c <= uVar7) {
              g_currentExceptionFrame = local_84.previous;
              return;
            }
          } while( true );
        }
      }
      g_currentExceptionFrame = local_84.previous;
      return;
    }
    g_currentExceptionFrame = local_84.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xa3c,0,iVar4,st::mutable_c_string("%s")
                               ,"FSGSTy::DelPlayer");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xa3c);
  }
  return;
}

// 005A2A60 FSGSTy::ChangePlayer
#line 4 "decomp/ST.exe/functions/005A2A60/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::ChangePlayer

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void __thiscall st::fn_005A2A60(FSGSTy *this,byte *param_1)

{
  byte bVar1;
  int iVar3;
  char *pcVar3;
  int iVar5;
  int iVar4;
  uint uVar6;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  InternalExceptionFrame local_54;
  uint local_10;
  AnonShape_00413AF0_B6B4EE9A *local_c;
  FSGSTy *local_8;

  if (((this->array_00BC[0xc].field_01DF == '\x06') && (this->array_00BC[0xc].field_01E0 == '\0'))
     && (this->field_1EA6 != nullptr)) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_8 = this;
    iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
    if (iVar3 == 0) {
      uVar6 = 0;
      local_c = (AnonShape_00413AF0_B6B4EE9A *)local_8->field_1EA6;
      local_10 = ((FSGSTy_field_1EA6DArray *)local_c)->count;
      if (local_10 != 0) {
        if (local_10 == 0) {
          pcVar8 = nullptr;
          goto LAB_005a2aea;
        }
        do {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pcVar8 = &((FSGSTy_field_1EA6DArray *)local_c)->data->field_0000 +
                   ((FSGSTy_field_1EA6DArray *)local_c)->elementSize * uVar6;
LAB_005a2aea:
          pcVar3 = pcVar8;
          pbVar7 = param_1;
          if (pcVar8 != nullptr) {
            do {
              bVar1 = *pcVar3;
              bVar9 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_005a2b17:
                iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_005a2b1c;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar3[1];
              bVar9 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_005a2b17;
              pcVar3 = pcVar3 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
LAB_005a2b1c:
            if (iVar5 == 0) {
              *(undefined4 *)(pcVar8 + 0x25) = *(undefined4 *)(param_1 + 0x25);
              break;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_10);
      }
      local_8->field_002D = 5;
      st::fn_006E6080(local_8,2,local_8->field_1B20,(undefined4 *)&local_8->field_0x1d);
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xa50,0,iVar3,st::mutable_c_string("%s")
                               ,"FSGSTy::ChangePlayer");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xa50);
  }
  return;
}

// 005A2C10 FSGSTy::ChangePlayerPing
#line 4 "decomp/ST.exe/functions/005A2C10/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::ChangePlayerPing */

void __thiscall
st::fn_005A2C10(FSGSTy *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  FSGSTy_field_1EA6DArray *pFVar1;
  uint uVar2;
  int errorCode;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  if (((this->array_00BC[0xc].field_01DF == '\x06') && (this->array_00BC[0xc].field_01E0 == '\0'))
     && (this->field_1EA6 != nullptr)) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (errorCode == 0) {
      uVar6 = 0;
      pFVar1 = local_8->field_1EA6;
      uVar2 = pFVar1->count;
      if (uVar2 != 0) {
        if (uVar2 == 0) {
          pcVar4 = nullptr;
          goto LAB_005a2c91;
        }
        do {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pcVar4 = &pFVar1->data->field_0000 + pFVar1->elementSize * uVar6;
LAB_005a2c91:
          if ((pcVar4 != nullptr) && (*(int *)(pcVar4 + 0x21) == param_2)) {
            *(undefined4 *)(pcVar4 + 0x29) = param_3;
            break;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
      local_8->field_002D = 5;
      st::fn_006E6080(local_8,2,local_8->field_1B20,(undefined4 *)&local_8->field_0x1d);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xa60,0,errorCode,
                               st::mutable_c_string("%s"),"FSGSTy::ChangePlayerPing");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xa60);
  }
  return;
}

// 005A2D70 FSGSTy::JoinChannel
#line 4 "decomp/ST.exe/functions/005A2D70/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::JoinChannel
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall JoinChannel(FSGSTy * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005A2F26 RET | 005A2F69 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_005A2D70(FSGSTy *this)

{
  byte *puVar1;
  int iVar2;
  int iVar4;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar3;
  uint uVar6;
  int iVar5;
  InternalExceptionFrame local_7c;
  undefined1 local_38 [45];
  undefined1 local_b;
  FSGSTy *local_8;

  if (this->array_00BC[0xc].field_01DF == '\x06') {
    this->array_00BC[0xc].field_01E0 = 0;
    local_7c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_7c;
    local_8 = this;
    iVar3 = st::fn_0072D7F0(local_7c.jumpBuffer,0);
    this_00 = g_cursorClass_00802A30;
    if (iVar3 == 0) {
      if (g_cursorClass_00802A30 != nullptr) {
        iVar2 = g_cursorClass_00802A30->field_00C9;
        iVar4 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_1;
        this_00->field_0494 = 0xffff;
        /* ST_CALLSITE[005A2DE5]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
        st::fn_0040507E(this_00,CASE_0,iVar4,iVar2);
        /* ST_CALLSITE[005A2DFA]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
        st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
        this_00->field_00D2 = 0;
        this_00->field_04DF = -1;
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0xf3);
      this_01 = local_8;
      /* ST_CALLSITE[005A2E4B]: CALL 0x00402298; direct=00402298 PutDDXClip */
      st::fn_00402298(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',local_8->field_1E9A);
      this_01->field_1EA6->count = 0;
      local_b = 1;
      st::fn_006AE1C0((DArrayTy *)this_01->field_1EA6,local_38);
      this_01->field_002D = 0x28;
      puVar1 = &this_01->field_0x1d;
      *(dword *)&this_01->field_0x31 = this_01->field_1EA6->count;
      this_01->field_0035 = 1;
      st::fn_006E6080(this_01,2,this_01->field_1B20,(undefined4 *)puVar1);
      this_01->field_002D = 0x20;
      if ((this_01->field_1EA6->count == 0) || (this_01->array_00BC[0xc].field_01EB == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      *(undefined4 *)&this_01->field_0x31 = uVar6;
      st::fn_006E6080(this_01,2,this_01->field_1B20,(undefined4 *)puVar1);
      this_01->field_002D = 0x20;
      *(undefined4 *)&this_01->field_0x31 = 0;
      if (this_01->field_1B24 != 0) {
        st::fn_006E6080(this_01,2,this_01->field_1B24,(undefined4 *)puVar1);
      }
      *(undefined4 *)&this_01->field_0x31 = 1;
      if ((this_01->field_1B18 != 0) && (this_01->array_00BC[0xc].field_01EB != 0)) {
        st::fn_006E6080(this_01,2,this_01->field_1B18,(undefined4 *)puVar1);
      }
      g_currentExceptionFrame = local_7c.previous;
      return;
    }
    g_currentExceptionFrame = local_7c.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xa7d,0,iVar3,st::mutable_c_string("%s")
                               ,"FSGSTy::JoinChannel");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xa7d);
  }
  return;
}

// 005A2FF0 FSGSTy::SetChannelList
#line 4 "decomp/ST.exe/functions/005A2FF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetChannelList */

void __thiscall st::fn_005A2FF0(FSGSTy *this,int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar4;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int local_EAX_63;
  FSGSTy_field_1EAADArray *pFVar6;
  int iVar3;
  uint uVar7;
  int iVar6;
  dword dVar8;
  FSGSTy_field_1EAAElement *element_1eaa;
  FSGSTy_field_1EAAElement *element_1eaa_2;
  uint uVar9;
  InternalExceptionFrame local_50;
  FSGSTy *local_c;
  int local_8;

  if ((this->array_00BC[0xc].field_01DF == '\x06') && (this->array_00BC[0xc].field_01E0 != '\0')) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    local_EAX_63 = st::fn_0072D7F0(local_50.jumpBuffer,0);
    this_00 = g_cursorClass_00802A30;
    if (local_EAX_63 == 0) {
      if (g_cursorClass_00802A30 != nullptr) {
        iVar2 = g_cursorClass_00802A30->field_00C9;
        iVar4 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_1;
        this_00->field_0494 = 0xffff;
        /* ST_CALLSITE[005A306D]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
        st::fn_0040507E(this_00,CASE_0,iVar4,iVar2);
        /* ST_CALLSITE[005A3082]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
        st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
        this_00->field_00D2 = 0;
        this_00->field_04DF = -1;
      }
      this_01 = local_c;
      local_c->field_1EAA->count = 0;
      for (; param_1 != 0; param_1 = param_1 + -1) {
        st::fn_006AE1C0((DArrayTy *)this_01->field_1EAA,param_2);
        param_2 = param_2 + 0x1a;
      }
      do {
        pFVar6 = this_01->field_1EAA;
        local_8 = 0;
        dVar8 = pFVar6->count;
        uVar9 = 0;
        if (dVar8 != 1) {
          do {
            if (uVar9 < dVar8) {
              element_1eaa_2 = DArrayAt<FSGSTy_field_1EAAElement>(pFVar6, uVar9);
            }
            else {
              element_1eaa_2 = nullptr;
            }
            uVar1 = uVar9 + 1;
            if (uVar1 < dVar8) {
              element_1eaa = DArrayAt<FSGSTy_field_1EAAElement>(pFVar6, uVar1);
            }
            else {
              element_1eaa = nullptr;
            }
            iVar3 = st::fn_0072E620(&(element_1eaa_2)->field_0000,&(element_1eaa)->field_0000);
            if (0 < iVar3) {
              st::fn_006B0CD0((AnonShape_00413AF0_B6B4EE9A *)this_01->field_1EAA,uVar9,uVar1);
              local_8 = 1;
            }
            pFVar6 = this_01->field_1EAA;
            dVar8 = pFVar6->count;
            uVar9 = uVar1;
          } while (uVar1 < dVar8 - 1);
        }
      } while (local_8 != 0);
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0xf3);
      /* ST_CALLSITE[005A3177]: CALL 0x00402298; direct=00402298 PutDDXClip */
      st::fn_00402298(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',this_01->field_1E9A);
      this_01->field_002D = 0x28;
      *(dword *)&this_01->field_0x31 = this_01->field_1EAA->count;
      this_01->field_0035 = 1;
      st::fn_006E6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
      this_01->field_002D = 0x20;
      if ((this_01->field_1EAA->count == 0) || (this_01->array_00BC[0xc].field_01EB == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      *(undefined4 *)&this_01->field_0x31 = uVar7;
      st::fn_006E6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xa9d,0,local_EAX_63,
                               st::mutable_c_string("%s"),"FSGSTy::SetChannelList");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_63,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xa9d);
  }
  return;
}

// 005A32F0 FSGSTy::CreateGame
#line 4 "decomp/ST.exe/functions/005A32F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::CreateGame */

void __thiscall st::fn_005A32F0(FSGSTy *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  MMsgTy *pMVar4;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = g_cursorClass_00802A30;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xab9,0,iVar4,st::mutable_c_string("%s")
                               ,"FSGSTy::CreateGame");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xab9);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (g_cursorClass_00802A30 != nullptr) {
    iVar1 = g_cursorClass_00802A30->field_00C9;
    iVar2 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = CASE_1;
    this_00->field_0494 = 0xffff;
    /* ST_CALLSITE[005A334F]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
    st::fn_0040507E(this_00,CASE_0,iVar2,iVar1);
    /* ST_CALLSITE[005A3364]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  this_01 = local_8;
  if (param_1 != 0) {
    pMVar4 = (local_8->array_00BC[0xc].field_01DB)->field_02E6;
    if (pMVar4 == nullptr) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    /* ST_CALLSITE[005A3461]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
    st::fn_00403FA8(pMVar4,0x2594,'\0',nullptr,nullptr,nullptr,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  DAT_0080877f = g_int_00811764[0xe];
  DAT_0080877e = 1;
  local_8->array_00BC[0xc].field_01E1 = 0;
  DAT_008067a0 = 1;
  uVar3 = local_8->field_1EC2;
  if (uVar3 < 0x502) {
    if (uVar3 == 0x501) {
      DAT_00803400 = 5;
      goto cf_common_exit_005A33FB;
    }
    if (uVar3 == 0x200) {
      DAT_00803400 = 0x14;
      goto cf_common_exit_005A33FB;
    }
    if (uVar3 == 0x400) {
      DAT_00803400 = 0x15;
      goto cf_common_exit_005A33FB;
    }
  }
  else if (uVar3 == 0x502) {
    DAT_00803400 = 0xc;
    goto cf_common_exit_005A33FB;
  }
  DAT_00803400 = 4;
cf_common_exit_005A33FB:
  st::fn_004036C0(local_8,0x611f,0x13,0);
  /* ST_CALLSITE[005A340F]: CALL dword ptr [EAX + 0x8] */
  this_01->CloseButtons();
  pMVar4 = (this_01->array_00BC[0xc].field_01DB)->field_02E6;
  if (pMVar4 == nullptr) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  /* ST_CALLSITE[005A3428]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
  st::fn_00401FA5(pMVar4,1,0,1);
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 005A3540 FSGSTy::SetGameList
#line 4 "decomp/ST.exe/functions/005A3540/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetGameList */

void __thiscall st::fn_005A3540(FSGSTy *this,int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  FSGSTy_field_1EBEDArray *pFVar13;
  uint local_2bc [11];
  byte local_290 [560];
  InternalExceptionFrame local_60;
  char local_1c [8];
  undefined1 local_14;
  FSGSTy *local_10;
  FSGSTy_field_1EBEElement *element_1ebe;
  uint local_8;

  if ((this->array_00BC[0xc].field_01DF == '\b') &&
     (this->field_1EBE != nullptr)) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    local_10 = this;
    iVar3 = st::fn_0072D7F0(local_60.jumpBuffer,0);
    this_00 = g_cursorClass_00802A30;
    if (iVar3 == 0) {
      if (g_cursorClass_00802A30 != nullptr) {
        iVar7 = g_cursorClass_00802A30->field_00C9;
        iVar2 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_1;
        this_00->field_0494 = 0xffff;
        /* ST_CALLSITE[005A35C0]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
        st::fn_0040507E(this_00,CASE_0,iVar2,iVar7);
        /* ST_CALLSITE[005A35D5]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
        st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
        this_00->field_00D2 = 0;
        this_00->field_04DF = -1;
      }
      this_01 = local_10;
      local_10->field_002D = 0x26;
      st::fn_006E6080(local_10,2,local_10->field_1B20,(undefined4 *)&local_10->field_0x1d);
      pFVar13 = this_01->field_1EBE;
      if ((uint)*(ushort *)&this_01->field_0x31 < pFVar13->count) {
        element_1ebe = DArrayAt<FSGSTy_field_1EBEElement>(pFVar13, (uint)*(ushort *)&this_01->field_0x31);
      }
      else {
        element_1ebe = nullptr;
      }
      if (element_1ebe != nullptr) {
        puVar9 = element_1ebe;
        puVar5 = local_2bc;
        memmove(puVar5, puVar9, 0x25c); /* compiler REP MOVS byte copy */
      }
      pFVar13->count = 0;
      do {
        if (param_1 == 0) {
          st::fn_006B5F80((int *)g_ddxContext_008075A8,0x13,0x5e,0x174,0x175);
          /* ST_CALLSITE[005A3730]: CALL 0x00402298; direct=00402298 PutDDXClip */
          st::fn_00402298(0x13,0x5e,0,0,0x174,(byte *)0x175,'\x01',this_01->field_1E9A);
          this_01->field_002D = 0x28;
          *(dword *)&this_01->field_0x31 = this_01->field_1EBE->count;
          this_01->field_0035 = 1;
          st::fn_006E6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
          this_01->field_002D = 0x20;
          if ((this_01->field_1EBE->count == 0) || (this_01->array_00BC[0xc].field_01EB == 0)) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
          *(undefined4 *)&this_01->field_0x31 = uVar4;
          st::fn_006E6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
          if (element_1ebe != nullptr) {
            uVar8 = 0;
            local_8 = this_01->field_1EBE->count;
            if (local_8 != 0) {
              if (local_8 == 0) {
                puVar5 = nullptr;
                goto LAB_005a37da;
              }
              do {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                puVar5 = (uint *)((int)&this_01->field_1EBE->data->field_0000 +
                                 this_01->field_1EBE->elementSize * uVar8);
LAB_005a37da:
                if (puVar5 != nullptr) {
                  pbVar11 = local_290;
                  pbVar10 = (byte *)(puVar5 + 0xb);
                  do {
                    bVar1 = *pbVar10;
                    bVar12 = bVar1 < *pbVar11;
                    if (bVar1 != *pbVar11) {
LAB_005a380b:
                      iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                      goto LAB_005a3810;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar10[1];
                    bVar12 = bVar1 < pbVar11[1];
                    if (bVar1 != pbVar11[1]) goto LAB_005a380b;
                    pbVar10 = pbVar10 + 2;
                    pbVar11 = pbVar11 + 2;
                  } while (bVar1 != 0);
                  iVar7 = 0;
LAB_005a3810:
                  if (iVar7 == 0) {
                    *(short *)&this_01->field_0x31 = (short)uVar8;
                    this_01->field_0037 = 1;
                    this_01->field_0035 = 1;
                    this_01->field_002D = 0x22;
                    st::fn_006E6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
                    g_currentExceptionFrame = local_60.previous;
                    return;
                  }
                }
                uVar8 = uVar8 + 1;
                if (local_8 <= uVar8) {
                  g_currentExceptionFrame = local_60.previous;
                  return;
                }
              } while( true );
            }
          }
          g_currentExceptionFrame = local_60.previous;
          return;
        }
        uVar8 = this_01->field_1EC2;
        if (uVar8 == 0) {
          if (*param_2 == 4) {
            pFVar13 = this_01->field_1EBE;
            goto LAB_005a36e9;
          }
        }
        else if ((param_2[2] == uVar8) && (*param_2 == 4)) {
          if (uVar8 == 0x100) {
            if (this_01->field_1EC6 != -1) {
              if ((char)param_2[0x1f] != '\0') {
                st::fn_0072E340(local_1c,(char *)((int)param_2 + 0x7f),8);
                local_14 = 0;
                st::fn_0072EE80(local_1c,(byte *)"%08x");
                if (local_8 == this_01->field_1EC6) {
                  pFVar13 = this_01->field_1EBE;
                  goto LAB_005a36e9;
                }
              }
              goto LAB_005a36ee;
            }
            pFVar13 = this_01->field_1EBE;
          }
          else {
            pFVar13 = this_01->field_1EBE;
          }
LAB_005a36e9:
          st::fn_006AE1C0((DArrayTy *)pFVar13,param_2);
        }
LAB_005a36ee:
        param_2 = param_2 + 0x97;
        param_1 = param_1 + -1;
      } while( true );
    }
    g_currentExceptionFrame = local_60.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xaf6,0,iVar3,st::mutable_c_string("%s")
                               ,"FSGSTy::SetGameList");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xaf6);
  }
  return;
}

// 005A3AB0 FSGSTy::SetInfo
#line 4 "decomp/ST.exe/functions/005A3AB0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetInfo */

void __thiscall st::fn_005A3AB0(FSGSTy *this,byte *param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  byte *pbVar4;
  int iVar6;
  int iVar4;
  byte *pbVar3;
  byte *local_EAX_321;
  byte *local_EAX_393;
  uint *puVar7;
  DArrayTy *pDVar8;
  byte *local_EAX_791;
  int local_EAX_838;
  BOOL BVar9;
  int iVar5;
  bool bVar10;
  CHAR local_88 [32];
  InternalExceptionFrame local_68;
  _SYSTEMTIME local_24;
  FSGSTy *local_14;
  uint *local_10;
  FILETIME local_c;

  this_00 = g_cursorClass_00802A30;
  local_14 = this;
  if (g_cursorClass_00802A30 != nullptr) {
    g_cursorClass_00802A30->field_0493 = CASE_1;
    this_00->field_0494 = 0xffff;
    /* ST_CALLSITE[005A3AED]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
    st::fn_0040507E(this_00,CASE_0,this_00->field_00C5,this_00->field_00C9);
    /* ST_CALLSITE[005A3B02]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  if ((this->array_00BC[0xc].field_01DF == '\n') &&
     (pbVar4 = this->field_1B0C, pbVar4 != nullptr)) {
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < *param_1;
      if (bVar1 != *param_1) {
LAB_005a3b5e:
        iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_005a3b63;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < param_1[1];
      if (bVar1 != param_1[1]) goto LAB_005a3b5e;
      pbVar4 = pbVar4 + 2;
      param_1 = param_1 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_005a3b63:
    if (iVar6 == 0) {
      local_68.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_68;
      iVar4 = st::fn_0072D7F0(local_68.jumpBuffer,0);
      if (iVar4 == 0) {
        pbVar3 = st::fn_00403EC7(st::mutable_c_string("Profile\\Age"),param_2,param_3);
        this_01 = local_14;
        if (pbVar3 != nullptr) {
          st::fn_006B6020(local_14->field_1AF8,0,(char *)pbVar3);
          *(DArrayTy **)&this_01->field_0x31 = this_01->field_1AF8;
          this_01->field_002D = 0x33;
          st::fn_006E6080(this_01,2,this_01->field_1AD8,(undefined4 *)&this_01->field_0x1d);
        }
        local_EAX_321 = st::fn_00403EC7(st::mutable_c_string("Profile\\Sex"),param_2,param_3);
        if (local_EAX_321 != nullptr) {
          st::fn_006B6020(this_01->field_1AFC,0,(char *)local_EAX_321);
          this_01->field_002D = 0x33;
          *(DArrayTy **)&this_01->field_0x31 = this_01->field_1AFC;
          st::fn_006E6080(this_01,2,this_01->field_1ADC,(undefined4 *)&this_01->field_0x1d);
        }
        local_EAX_393 = st::fn_00403EC7(st::mutable_c_string("Profile\\Location"),param_2,param_3);
        if (local_EAX_393 != nullptr) {
          st::fn_006B6020(this_01->field_1B00,0,(char *)local_EAX_393);
          this_01->field_002D = 0x33;
          *(DArrayTy **)&this_01->field_0x31 = this_01->field_1B00;
          st::fn_006E6080(this_01,2,this_01->field_1AE0,(undefined4 *)&this_01->field_0x1d);
        }
        local_10 = (uint *)st::fn_00403EC7(st::mutable_c_string("Profile\\Description"),param_2,param_3);
        if (local_10 != nullptr) {
          if ((DArrayTy *)this_01->field_1B04 != nullptr) {
            st::fn_006B5570((DArrayTy *)this_01->field_1B04);
          }
          puVar7 = st::fn_00712F80(this_01->array_00BC[0xc].field_01F3,local_10);
          this_01->field_1B04 = puVar7;
          if (puVar7 == nullptr) {
            pDVar8 = st::fn_006B54F0(nullptr,1,1);
            this_01->field_1B04 = &pDVar8->flags;
            st::fn_006B5AA0(pDVar8,&CHAR_00h_008016a0);
          }
          this_01->field_002D = 0x33;
          *(uint **)&this_01->field_0x31 = this_01->field_1B04;
          st::fn_006E6080(this_01,2,st::machine_word_boundary_cast<undefined4>(this_01->field_1AE4),(undefined4 *)&this_01->field_0x1d);
        }
        /* ST_CALLSITE[005A3D10]: CALL 0x004049df; direct=004049DF FSGSTy::sub_005A39A0 */
        st::fn_004049DF(this_01,(ccFntTy *)this_01->field_1A7F,st::mutable_c_string("1\\Wins"),param_2,param_3,0x1a,
                     0xf3,0x4e,0x12);
        /* ST_CALLSITE[005A3D30]: CALL 0x004049df; direct=004049DF FSGSTy::sub_005A39A0 */
        st::fn_004049DF(this_01,(ccFntTy *)this_01->field_1A7F,st::mutable_c_string("1\\Losses"),param_2,param_3,0x7e
                     ,0xf3,0x4e,0x12);
        /* ST_CALLSITE[005A3D53]: CALL 0x004049df; direct=004049DF FSGSTy::sub_005A39A0 */
        st::fn_004049DF(this_01,(ccFntTy *)this_01->field_1A7F,st::mutable_c_string("1\\Draws"),param_2,param_3,0xe2,
                     0xf3,0x4e,0x12);
        /* ST_CALLSITE[005A3D76]: CALL 0x004049df; direct=004049DF FSGSTy::sub_005A39A0 */
        st::fn_004049DF(this_01,(ccFntTy *)this_01->field_1A7F,st::mutable_c_string("1\\Disconnects"),param_2,param_3
                     ,0x146,0xf3,0x4e,0x12);
        /* ST_CALLSITE[005A3D96]: CALL 0x004049df; direct=004049DF FSGSTy::sub_005A39A0 */
        st::fn_004049DF(this_01,this_01->field_1A7B,st::mutable_c_string("1\\Rating"),param_2,param_3,0x1a,0x11b,0x4e
                     ,0x17);
        /* ST_CALLSITE[005A3DB6]: CALL 0x004049df; direct=004049DF FSGSTy::sub_005A39A0 */
        st::fn_004049DF(this_01,this_01->field_1A7B,st::mutable_c_string("1\\Rank"),param_2,param_3,0x7e,0x11b,0x4e,
                     0x17);
        local_EAX_791 = st::fn_00403EC7(st::mutable_c_string("1\\Last Game"),param_2,param_3);
        if (local_EAX_791 != nullptr) {
          iVar6 = -1;
          pbVar4 = local_EAX_791;
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar1 = *pbVar4;
            pbVar4 = pbVar4 + 1;
          } while (bVar1 != 0);
          if (iVar6 != -2) {
            local_EAX_838 =
                 st::fn_0072EE80((char *)local_EAX_791,(byte *)"%d %d");
            if (local_EAX_838 != 2) {
              local_c.dwHighDateTime = 0;
              local_c.dwLowDateTime = 0;
            }
            /* ST_CALLSITE[005A3E13]: CALL dword ptr [0x0085bbb4] */
            BVar9 = st::external_00000022(&local_c,st::pointer_boundary_cast<LPSYSTEMTIME>(&local_24));
            if (BVar9 != 0) {
              /* ST_CALLSITE[005A3E4A]: CALL dword ptr [0x0085bde8] */
              st::external_00000080(local_88,st::mutable_c_string("%2d/%2d/%4d"),STPiece<6,4>(local_24) & 0xffff,local_24.wMonth,
                        local_24.wYear);
              st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_01->field_1AC0,0,0xe2,0x11b,0xb2,
                           0x17,0xff);
              st::fn_00710A90(this_01->array_00BC[0xc].field_01F3,(int)this_01->field_1AC0,0,0xe2,
                               0x11b,0xb2,0x17);
              st::fn_007119C0(this_01->array_00BC[0xc].field_01F3,local_88,-1,-1,0);
            }
          }
        }
        /* ST_CALLSITE[005A3ED2]: CALL 0x004049df; direct=004049DF FSGSTy::sub_005A39A0 */
        st::fn_004049DF(this_01,(ccFntTy *)this_01->field_1A7F,st::mutable_c_string("0\\Wins"),param_2,param_3,0x1a,
                     0x161,0x4e,0x12);
        /* ST_CALLSITE[005A3EF2]: CALL 0x004049df; direct=004049DF FSGSTy::sub_005A39A0 */
        st::fn_004049DF(this_01,(ccFntTy *)this_01->field_1A7F,st::mutable_c_string("0\\Losses"),param_2,param_3,0x7e
                     ,0x161,0x4e,0x12);
        /* ST_CALLSITE[005A3F15]: CALL 0x004049df; direct=004049DF FSGSTy::sub_005A39A0 */
        st::fn_004049DF(this_01,(ccFntTy *)this_01->field_1A7F,st::mutable_c_string("0\\Draws"),param_2,param_3,0xe2,
                     0x161,0x4e,0x12);
        /* ST_CALLSITE[005A3F38]: CALL 0x004049df; direct=004049DF FSGSTy::sub_005A39A0 */
        st::fn_004049DF(this_01,(ccFntTy *)this_01->field_1A7F,st::mutable_c_string("0\\Disconnects"),param_2,param_3
                     ,0x146,0x161,0x4e,0x12);
        st::fn_006B35D0((int *)g_ddxContext_008075A8,this_01->field_1ABC);
        g_currentExceptionFrame = local_68.previous;
        return;
      }
      g_currentExceptionFrame = local_68.previous;
      iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xb4e,0,iVar4,
                                 st::mutable_c_string("%s"),"FSGSTy::SetInfo");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xb4e);
    }
  }
  return;
}

// 005A40F0 FSGSTy::SetLadder
#line 4 "decomp/ST.exe/functions/005A40F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetLadder */

void __thiscall
st::fn_005A40F0(FSGSTy *this,undefined4 param_1,uint param_2,int param_3,undefined4 *param_4)

{
  void **slotStorage;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar2;
  uint *puVar2;
  int iVar4;
  uint uVar3;
  int iVar5;
  InternalExceptionFrame local_6c;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  FSGSTy *local_8;

  this_00 = g_cursorClass_00802A30;
  local_8 = this;
  if (g_cursorClass_00802A30 != nullptr) {
    g_cursorClass_00802A30->field_0493 = CASE_1;
    this_00->field_0494 = 0xffff;
    /* ST_CALLSITE[005A412A]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
    st::fn_0040507E(this_00,CASE_0,this_00->field_00C5,this_00->field_00C9);
    /* ST_CALLSITE[005A413F]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  if (this->array_00BC[0xc].field_01DF == '\t') {
    local_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_6c;
    iVar2 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
    this_01 = local_8;
    if (iVar2 == 0) {
      slotStorage = &local_8->field_1EDB;
      if (local_8->field_1EDB != nullptr) {
        st::fn_006AB060(slotStorage);
      }
      this_01->field_1EDF = param_2;
      this_01->field_1EE3 = param_3;
      puVar2 = static_cast<uint *>(st::fn_006AAC70(param_3 * 0x24));
      uVar3 = this_01->field_1EE3;
      *slotStorage = puVar2;
      for (uVar3 = uVar3 * 9 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *param_4;
        param_4 = param_4 + 1;
        puVar2 = puVar2 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar2 = *(undefined1 *)param_4;
        param_4 = (undefined4 *)((int)param_4 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      /* ST_CALLSITE[005A41E6]: CALL 0x00402031; direct=00402031 FSGSTy::PaintLadder */
      st::fn_00402031(this_01);
      memset(local_28, 0, 0x20); /* compiler bulk-zero initialization */
      local_18 = 0x20;
      if ((this_01->field_1EDF == 0) || (local_14 = 1, this_01->array_00BC[0xc].field_01EB == 0)) {
        local_14 = 0;
      }
      if (this_01->field_1ED3 != 0) {
        st::fn_006E6080(this_01,2,this_01->field_1ED3,local_28);
      }
      if ((0xf422f < this_01->field_1EDF) ||
         (local_14 = 1, this_01->array_00BC[0xc].field_01EB == 0)) {
        local_14 = 0;
      }
      if (this_01->field_1ED7 != 0) {
        st::fn_006E6080(this_01,2,this_01->field_1ED7,local_28);
      }
      g_currentExceptionFrame = local_6c.previous;
      return;
    }
    g_currentExceptionFrame = local_6c.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xb65,0,iVar2,st::mutable_c_string("%s")
                               ,"FSGSTy::SetLadder");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xb65);
  }
  return;
}

// 005A4350 FSGSTy::GetMessage
#line 4 "decomp/ST.exe/functions/005A4350/decomp.c"
/* WARNING: Removing unreachable block (ram,0x005a58e7) */
/* WARNING: Removing unreachable block (ram,0x005a5b40) */
/* WARNING: Removing unreachable block (ram,0x005a5f43) */
/* WARNING: Removing unreachable block (ram,0x005a5d46) */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00404165|005A4350; family_names=FSGSTy::GetMessage; ret4=2;
   direct_offsets={10:8,14:74,18:16,1c:34}

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10 */

int __thiscall st::fn_005A4350(FSGSTy *this,STMessage *message)

{
  byte *puVar1;
  char cVar2;
  ushort uVar3;
  word wVar4;
  STMessageId SVar5;
  ushort *puVar6;
  FSGSTy_field_1EBEDArray *pFVar7;
  StartSystemTy *pSVar8;
  FSGSTy_field_1FB3DArray *pFVar9;
  FSGSTy_field_1FB3Element *pFVar10;
  FSGSTy_field_1EA6DArray *pFVar11;
  dword dVar12;
  ccFntTy *pcVar13;
  LPCSTR pCVar14;
  LPCSTR pCVar15;
  LPCSTR pCVar16;
  int *piVar17;
  RecoveredSourceFamily_dibcopy *pRVar18;
  FSGSTy_field_1EAADArray *pFVar19;
  bool bVar44;
  DWORD DVar20;
  int local_EAX_61;
  UINT UVar21;
  uint *puVar22;
  char *pcVar38_mg43;
  DArrayTy *local_EAX_1705;
  int local_EAX_3145;
  int local_EAX_3627;
  uint uVar23;
  int local_EAX_3743;
  char *pcVar24;
  DWORD DVar25;
  char *pcVar38_mg26;
  char *pcVar38_mg33;
  char *pcVar38_mg27;
  char *pcVar38_mg29;
  char *pcVar38_mg2B;
  char *pcVar38_mg2D;
  char *pcVar38_mg2F;
  char *pcVar38_mg31;
  char *pcVar38_mg21;
  char *pcVar38_mg23;
  char *pcVar38_mg3B;
  char *pcVar38_mg3D;
  char *pcVar38_mg3F;
  ulong uVar26;
  LPCSTR pCVar27;
  HINSTANCE pHVar28;
  char *pcVar38_mg1;
  BITMAPINFO *pBVar29;
  void *pvVar30;
  int iVar21;
  char *pcVar38_mg20;
  char *pcVar38_mg1D;
  char *pcVar38_mg1F;
  char *pcVar38_mg1A;
  char *pcVar38_mg9;
  char *pcVar38_mgA;
  char *pcVar38_mgB;
  char *pcVar38_mgC;
  char *pcVar38_mgD;
  char *pcVar38_mgE;
  char *pcVar38_mgF;
  char *pcVar38_mg10;
  char *pcVar38_mg11;
  char *pcVar38_mg12;
  char *pcVar38_mg16;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  DArrayTy *pDVar31;
  int local_EAX_18792;
  int iVar46;
  uint uVar32;
  MMsgTy *pMVar33;
  uint *puVar34;
  FSGSTy_field_1FB3Element *element_1fb3;
  byte bVar35;
  FSGSTy *this_00;
  uint uVar36;
  byte *pbVar37;
  CursorClassTy *pCVar38;
  char *pcVar39;
  FSGSTy_field_1EA6Element *element_1ea6_2;
  FSGSTy_field_1EA6Element *element_1ea6_3;
  FSGSTy_field_1EA6Element *element_1ea6_4;
  FSGSTy_field_1EAAElement *element_1eaa;
  STMessage *pSVar40;
  byte *pbVar41;
  LPCSTR pCVar42;
  FSGSTy_field_1EAAElement *pFVar43;
  bool bVar45;
  int iVar47;
  int iVar48;
  DWORD DVar49;
  int iVar50;
  int iVar51;
  char local_6b8 [32];
  undefined1 local_698;
  CHAR local_4b8 [260];
  InternalExceptionFrame local_3b4;
  undefined4 local_370 [7];
  undefined4 local_354 [7];
  undefined4 local_338 [7];
  undefined4 local_31c [7];
  undefined4 local_300 [7];
  undefined4 local_2e4 [7];
  undefined4 local_2c8 [7];
  undefined4 local_2ac [7];
  InternalExceptionFrame local_290;
  undefined4 local_24c [4];
  undefined4 local_23c;
  uint local_238;
  undefined4 local_22c [4];
  InternalExceptionFrame local_21c;
  undefined4 local_1d8 [2];
  undefined2 local_1ce;
  undefined2 local_1cc;
  undefined4 local_1bc [4];
  undefined4 local_1ac;
  undefined4 local_1a8;
  STMessage local_19c;
  undefined4 local_17c [2];
  undefined2 local_172;
  undefined2 local_170;
  STMessage local_160;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  char *local_130;
  undefined *local_12c;
  undefined *local_128;
  undefined4 local_124;
  char *local_120;
  char *local_11c;
  char *local_118;
  char *local_114;
  char *local_110;
  char *local_10c;
  char *local_108;
  char *local_104;
  char *local_100;
  char *local_fc;
  char *local_f8;
  char *local_f4;
  char *local_f0;
  undefined *local_ec;
  undefined *local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  undefined4 *local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  FSGSTy *local_20;
  AnonShape_005A4350_59BACD18 *local_1c;
  char local_15;
  tagBITMAPINFO *local_14;
  uint *local_10;
  FSGSTy_field_1EBEElement *element_1ebe;
  FSGSTy_field_1EAAElement *local_c;
  FSGSTy_field_1EAAElement *element_1eaa_2;
  uint *local_8;
  DArrayTy *pDVar25;

  local_20 = this;
  DVar20 = st::fn_006E51B0(this->field_0010);
  pcVar39 = nullptr;
  this->field_0061 = DVar20;
  local_21c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_21c;
  local_EAX_61 = st::fn_0072D7F0(local_21c.jumpBuffer,0);
  this_00 = local_20;
  if (local_EAX_61 != 0) {
    g_currentExceptionFrame = local_21c.previous;
    iVar46 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x1048,0,local_EAX_61,
                                st::mutable_c_string("%s"),"FSGSTy::GetMessage");
    if (iVar46 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_61,0,st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0x1048);
    return 0xffff;
  }
  st::fn_00402563(local_20,message);
  pCVar38 = g_cursorClass_00802A30;
  SVar5 = message->id;
  if (MESS_FSGSTY_6949 < SVar5) {
    if (SVar5 < MESS_SHARED_6980) {
      if (SVar5 == MESS_SHARED_697F) {
        dVar12 = (message->arg2).u32;
        local_60 = STField<int>(dVar12,0x24) + -0xb4;
        local_58 = STField<int>(dVar12,0x2C);
        local_54 = STField<int>(dVar12,0x30);
        uVar36 = STField<int>(dVar12,0x28) -
                 ((-(uint)(this_00->field_1ABB != '\0') & 0xffffffb4) + 0xaa);
        local_5c = uVar36;
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,
                     STField<int>(dVar12,0x24) + -0xb5,uVar36,local_58 + 2,local_54,0xff);
        st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,(int)this_00->field_1AC0,0,local_60,
                         uVar36,local_58,local_54);
        if ((message->arg0).ptr != nullptr) {
          st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,*(char **)(message->arg0).ptr,0,-1,0);
        }
        uVar3 = (message->arg1).words.low;
        if ((uVar3 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
          iVar47 = (uint)uVar3 + local_60;
          st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1AC0,0,iVar47,uVar36 + 1,iVar47
                       ,local_54 + -2 + uVar36,9,0xd);
        }
        st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
        goto cf_common_exit_005A8CA7;
      }
      switch(SVar5) {
      case MESS_FSGSTY_694A:
      case 0x694e:
        /* ST_CALLSITE[005A69DB]: CALL dword ptr [EAX + 0x8] */
        this_00->CloseButtons();
        this_00->array_00BC[0xc].field_01E1 = (message->id != MESS_FSGSTY_694A) + '\a';
        pSVar8 = this_00->array_00BC[0xc].field_01DB;
        if (pSVar8->field_02E6 == nullptr) break;
        puVar22 = local_31c;
        for (iVar47 = 6; iVar47 != 0; iVar47 = iVar47 + -1) {
          *puVar22 = 0xffffffff;
          puVar22 = puVar22 + 1;
        }
        *(undefined2 *)puVar22 = 0xffff;
        local_9c = 0;
        local_98 = 0;
        local_a0 = 0x10101;
        local_94 = 0;
        /* ST_CALLSITE[005A6A51]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
        st::fn_00404B51(pSVar8->field_02E6,(int)local_31c);
        puVar22 = &local_a0;
        goto cf_common_exit_005A7F3B;
      case 0x694b:
        cVar2 = this_00->array_00BC[0xc].field_01DF;
        if (cVar2 == '\x02') {
          /* ST_CALLSITE[005A6978]: CALL dword ptr [EDX + 0x8] */
          this_00->CloseButtons();
          this_00->array_00BC[0xc].field_01E1 = 5;
          pSVar8 = this_00->array_00BC[0xc].field_01DB;
          if (pSVar8->field_02E6 != nullptr) {
            local_8c = 0;
            local_88 = 0;
            local_84 = 0;
            local_90 = 0x10101;
            st::fn_00401A9B(pSVar8->field_02E6,&local_90);
          }
        }
        else if (cVar2 == '\x05') {
          if (0 < (int)this_00->field_1AF4->elementSize) {
            pcVar39 = *(char **)this_00->field_1AF4->growCapacity;
          }
          iVar47 = -1;
          do {
            if (iVar47 == 0) break;
            iVar47 = iVar47 + -1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar39 + 1;
          } while (cVar2 != '\0');
          if (iVar47 == -2) {
            pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
            if (pMVar33 != nullptr) {
              /* ST_CALLSITE[005A686C]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
              st::fn_00403FA8(pMVar33,0x2592,'\0',nullptr,nullptr,
                                 nullptr,0,0);
            }
          }
          else {
            puVar22 = local_1d8;
            for (iVar47 = 6; iVar47 != 0; iVar47 = iVar47 + -1) {
              *puVar22 = 0xffffffff;
              puVar22 = puVar22 + 1;
            }
            *(undefined2 *)puVar22 = 0xffff;
            local_1cc = 1;
            local_1ce = 1;
            pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
            if (pMVar33 != nullptr) {
              /* ST_CALLSITE[005A68B2]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
              st::fn_00404B51(pMVar33,(int)local_1d8);
            }
            pCVar38 = g_cursorClass_00802A30;
            if (g_cursorClass_00802A30 != nullptr) {
              iVar47 = g_cursorClass_00802A30->field_00C9;
              iVar48 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = CASE_5;
              pCVar38->field_0494 = 0xffff;
              /* ST_CALLSITE[005A68E3]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
              st::fn_0040507E(pCVar38,CASE_0,iVar48,iVar47);
              /* ST_CALLSITE[005A68F8]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
              st::fn_0040241E(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
              pCVar38->field_00D2 = 0;
              pCVar38->field_04DF = -1;
            }
            if ((int)this_00->field_1AF4->elementSize < 1) {
              pcVar39 = nullptr;
            }
            else {
              pcVar39 = *(char **)this_00->field_1AF4->growCapacity;
            }
            if ((int)this_00->field_1AEC->elementSize < 1) {
              pcVar24 = nullptr;
            }
            else {
              pcVar24 = *(char **)this_00->field_1AEC->growCapacity;
            }
            if ((int)this_00->field_1AE8->elementSize < 1) {
              /* ST_CALLSITE[005A6969]: CALL dword ptr [0x0085c07c] */
              st::external_0000010D
                        ((CFsgsConnection *)&DAT_00802a90,nullptr,pcVar24,pcVar39);
            }
            else {
              /* ST_CALLSITE[005A6954]: CALL dword ptr [0x0085c07c] */
              st::external_0000010D
                        ((CFsgsConnection *)&DAT_00802a90,
                         *(char **)this_00->field_1AE8->growCapacity,pcVar24,pcVar39);
            }
          }
        }
        break;
      case 0x694c:
        if ((this_00->field_1AAB != (LPCSTR)0x0) &&
           /* ST_CALLSITE[005A6D2A]: CALL dword ptr [0x0085bda4] */
           (pHVar28 = st::external_000000CA(HWND_00856d78,st::pointer_boundary_cast<LPCSTR>(&DAT_007cc624),this_00->field_1AAB,(LPCSTR)0x0,
                                    (LPCSTR)0x0,1), 0x20 < (int)pHVar28)) {
          /* ST_CALLSITE[005A6D45]: CALL dword ptr [0x0085c080] */
          st::external_0000010E((CFsgsConnection *)&DAT_00802a90,this_00->field_1AAF);
        }
        break;
      case MESS_PRIVIDERTY_6952:
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        switch(this_00->array_00BC[0xc].field_01DF) {
        case 6:
          local_30 = 0x10000;
        case 3:
          local_30 = STReplaceLowByte((uint32_t)(local_30), (uint8_t)(1));
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        case 5:
          STPiece<0,2>(local_30) = CONCAT11(1,(undefined1)local_30);
        case 4:
          local_2c = 0x10100;
          this_00->array_00BC[0xc].field_01E1 = 2;
          break;
        case 7:
        case 8:
          local_30 = 0x100;
        case 9:
          this_00->array_00BC[0xc].field_01E1 = 6;
          break;
        case 10:
          pbVar41 = this_00->field_1B0C;
          if (pbVar41 != nullptr) {
            pcVar39 = &CHAR_00h_00807e1d;
            do {
              bVar35 = *pbVar41;
              bVar45 = bVar35 < (byte)*pcVar39;
              if (bVar35 != *pcVar39) {
LAB_005a63e7:
                iVar47 = (1 - (uint)bVar45) - (uint)(bVar45 != 0);
                goto LAB_005a63ec;
              }
              if (bVar35 == 0) break;
              bVar35 = pbVar41[1];
              bVar45 = bVar35 < (byte)pcVar39[1];
              if (bVar35 != pcVar39[1]) goto LAB_005a63e7;
              pbVar41 = pbVar41 + 2;
              pcVar39 = pcVar39 + 2;
            } while (bVar35 != 0);
            iVar47 = 0;
LAB_005a63ec:
            if (iVar47 == 0) {
              if ((int)this_00->field_1B00->elementSize < 1) {
                pcVar39 = nullptr;
              }
              else {
                pcVar39 = *(char **)this_00->field_1B00->growCapacity;
              }
              if ((int)this_00->field_1AFC->elementSize < 1) {
                pcVar24 = nullptr;
              }
              else {
                pcVar24 = *(char **)this_00->field_1AFC->growCapacity;
              }
              if ((int)this_00->field_1AF8->elementSize < 1) {
                pbVar41 = nullptr;
              }
              else {
                pbVar41 = *(byte **)this_00->field_1AF8->growCapacity;
              }
              st::fn_00402572(&DAT_00802a90,pbVar41,pcVar24,pcVar39,
                                 (AnonShape_0055C320_953077EC *)this_00->field_1B04);
              local_e4 = DAT_008030d4;
              local_110 = "Profile\\Age";
              local_f0 = (char *)&DAT_00802ad4;
              local_10c = "Profile\\Sex";
              local_ec = (undefined *)&DAT_00802cd4;
              local_108 = "Profile\\Location";
              local_e8 = (undefined *)&DAT_00802ed4;
              local_104 = "Profile\\Description";
              /* ST_CALLSITE[005A64B1]: CALL dword ptr [0x0085c028] */
              st::external_000000F8((CFsgsConnection *)&DAT_00802a90,4,&local_110,&local_f0);
            }
          }
          this_00->array_00BC[0xc].field_01E1 = this_00->field_1ED2;
        }
        /* ST_CALLSITE[005A6359]: CALL dword ptr [EDX + 0x8] */
        this_00->CloseButtons();
        pSVar8 = this_00->array_00BC[0xc].field_01DB;
        if (pSVar8->field_02E6 != nullptr) {
          puVar22 = local_2e4;
          for (iVar47 = 6; iVar47 != 0; iVar47 = iVar47 + -1) {
            *puVar22 = 0xffffffff;
            puVar22 = puVar22 + 1;
          }
          *(undefined2 *)puVar22 = 0xffff;
          /* ST_CALLSITE[005A638D]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
          st::fn_00404B51(pSVar8->field_02E6,(int)local_2e4);
          st::fn_00401A9B((this_00->array_00BC[0xc].field_01DB)->field_02E6,&local_30);
        }
        break;
      case 0x6953:
        puVar22 = local_17c;
        for (iVar47 = 6; iVar47 != 0; iVar47 = iVar47 + -1) {
          *puVar22 = 0xffffffff;
          puVar22 = puVar22 + 1;
        }
        *(undefined2 *)puVar22 = 0xffff;
        local_170 = 1;
        local_172 = 1;
        if ((int)this_00->field_1AE8->elementSize < 1) {
          pcVar39 = nullptr;
        }
        else {
          pcVar39 = *(char **)this_00->field_1AE8->growCapacity;
        }
        st::fn_0072E340(&CHAR_00h_00807e1d,pcVar39,0x40);
        DAT_00807e5c = 0;
        if ((int)this_00->field_1AEC->elementSize < 1) {
          pcVar39 = nullptr;
        }
        else {
          pcVar39 = *(char **)this_00->field_1AEC->growCapacity;
        }
        uVar36 = 0xffffffff;
        do {
          pcVar24 = pcVar39;
          if (uVar36 == 0) break;
          uVar36 = uVar36 - 1;
          pcVar24 = pcVar39 + 1;
          cVar2 = *pcVar39;
          pcVar39 = pcVar24;
        } while (cVar2 != '\0');
        uVar36 = ~uVar36;
        pcVar39 = pcVar24 + -uVar36;
        pcVar24 = &CHAR_00h_00807e5d;
        memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
        uVar32 = 0;
        iVar47 = -1;
        pcVar39 = &CHAR_00h_00807e5d;
        do {
          if (iVar47 == 0) break;
          iVar47 = iVar47 + -1;
          cVar2 = *pcVar39;
          pcVar39 = pcVar39 + 1;
        } while (cVar2 != '\0');
        if (iVar47 == -2) {
          pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
          if (pMVar33 != nullptr) {
            /* ST_CALLSITE[005A65EC]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
            st::fn_00403FA8(pMVar33,0x2592,'\0',nullptr,nullptr,
                               nullptr,0,0);
          }
          break;
        }
        cVar2 = this_00->array_00BC[0xc].field_01DF;
        if (cVar2 != '\x02') {
          if (cVar2 == '\x04') {
            if ((int)this_00->field_1AF0->elementSize < 1) {
              pbVar41 = nullptr;
            }
            else {
              pbVar41 = *(byte **)this_00->field_1AF0->growCapacity;
            }
            pcVar39 = &CHAR_00h_00807e5d;
            do {
              bVar35 = *pcVar39;
              bVar45 = bVar35 < *pbVar41;
              if (bVar35 != *pbVar41) {
LAB_005a6653:
                iVar47 = (1 - (uint)bVar45) - (uint)(bVar45 != 0);
                goto LAB_005a6658;
              }
              if (bVar35 == 0) break;
              bVar35 = pcVar39[1];
              bVar45 = bVar35 < pbVar41[1];
              if (bVar35 != pbVar41[1]) goto LAB_005a6653;
              pcVar39 = pcVar39 + 2;
              pbVar41 = pbVar41 + 2;
            } while (bVar35 != 0);
            iVar47 = 0;
LAB_005a6658:
            if (iVar47 == 0) {
              pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
              if (pMVar33 != nullptr) {
                /* ST_CALLSITE[005A66A2]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
                st::fn_00404B51(pMVar33,(int)local_17c);
              }
              pCVar38 = g_cursorClass_00802A30;
              if (g_cursorClass_00802A30 != nullptr) {
                iVar47 = g_cursorClass_00802A30->field_00C9;
                iVar48 = g_cursorClass_00802A30->field_00C5;
                g_cursorClass_00802A30->field_0493 = CASE_5;
                pCVar38->field_0494 = 0xffff;
                /* ST_CALLSITE[005A66D3]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
                st::fn_0040507E(pCVar38,CASE_0,iVar48,iVar47);
                /* ST_CALLSITE[005A66E8]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
                st::fn_0040241E(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
                pCVar38->field_00D2 = 0;
                pCVar38->field_04DF = -1;
              }
              if ((int)this_00->field_1B00->elementSize < 1) {
                pcVar39 = nullptr;
              }
              else {
                pcVar39 = *(char **)this_00->field_1B00->growCapacity;
              }
              if ((int)this_00->field_1AFC->elementSize < 1) {
                pcVar24 = nullptr;
              }
              else {
                pcVar24 = *(char **)this_00->field_1AFC->growCapacity;
              }
              if ((int)this_00->field_1AF8->elementSize < 1) {
                pbVar41 = nullptr;
              }
              else {
                pbVar41 = *(byte **)this_00->field_1AF8->growCapacity;
              }
              st::fn_00402572(&DAT_00802a90,pbVar41,pcVar24,pcVar39,
                                 (AnonShape_0055C320_953077EC *)this_00->field_1B04);
              /* ST_CALLSITE[005A6763]: CALL dword ptr [0x0085c004] */
              st::external_000000EF
                        ((CFsgsConnection *)&DAT_00802a90,&CHAR_00h_00807e1d,&CHAR_00h_00807e5d);
            }
            else {
              pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
              if (pMVar33 != nullptr) {
                /* ST_CALLSITE[005A6681]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
                st::fn_00403FA8(pMVar33,0x258a,'\0',nullptr,nullptr,
                                   nullptr,0,0);
              }
            }
          }
          break;
        }
        pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
        if (pMVar33 != nullptr) {
          /* ST_CALLSITE[005A6785]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
          st::fn_00404B51(pMVar33,(int)local_17c);
        }
        pCVar38 = g_cursorClass_00802A30;
        if (g_cursorClass_00802A30 != nullptr) {
          iVar47 = g_cursorClass_00802A30->field_00C9;
          iVar48 = g_cursorClass_00802A30->field_00C5;
          g_cursorClass_00802A30->field_0493 = CASE_5;
          pCVar38->field_0494 = 0xffff;
          /* ST_CALLSITE[005A67B6]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
          st::fn_0040507E(pCVar38,CASE_0,iVar48,iVar47);
          /* ST_CALLSITE[005A67CB]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
          st::fn_0040241E(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
          pCVar38->field_00D2 = 0;
          pCVar38->field_04DF = -1;
        }
LAB_005a67e1:
        /* ST_CALLSITE[005A67F0]: CALL dword ptr [0x0085c008] */
        uVar26 = st::external_000000F0
                           ((CFsgsConnection *)&DAT_00802a90,&CHAR_00h_00807e1d,&CHAR_00h_00807e5d);
        if (uVar26 == 0) {
          /* ST_CALLSITE[005A67FA]: CALL dword ptr [0x0085bbcc] */
          DVar25 = st::external_00000028();
          st::fn_00405E0C(&DAT_00802a90,DVar25);
        }
        DAT_00802a9a = 0;
        break;
      case 0x6954:
        /* ST_CALLSITE[005A64CE]: CALL dword ptr [EAX + 0x8] */
        this_00->CloseButtons();
        this_00->array_00BC[0xc].field_01E1 = 4;
        pSVar8 = this_00->array_00BC[0xc].field_01DB;
        if (pSVar8->field_02E6 != nullptr) {
          local_bc = 0;
          local_b8 = 0;
          local_b4 = 0;
          local_c0 = 0x10101;
          st::fn_00401A9B(pSVar8->field_02E6,&local_c0);
        }
        break;
      case 0x6955:
        pCVar14 = (LPCSTR)this_00->field_1AB7;
        pCVar27 = (LPCSTR)0x0;
        pCVar42 = (LPCSTR)0x0;
        if (pCVar14 != (LPCSTR)0x0) {
          if ((message->arg0).u32 == 0) {
            switch(this_00->array_00BC[0xc].field_01DF) {
            case 2:
            case 6:
            case 7:
              goto switchD_005a6a92_caseD_2;
            case 4:
              pCVar42 = (LPCSTR)this_00->field_1AC4;
              if (pCVar14 == pCVar42) {
                pCVar27 = pCVar42;
                pCVar42 = (LPCSTR)this_00->field_1AC8;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1AC8) {
                pCVar27 = (LPCSTR)this_00->field_1AC8;
                pCVar42 = (LPCSTR)this_00->field_1ACC;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1ACC) {
                pCVar27 = (LPCSTR)this_00->field_1ACC;
                pCVar42 = (LPCSTR)this_00->field_1AD8;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1AD8) {
                pCVar27 = (LPCSTR)this_00->field_1AD8;
                pCVar42 = (LPCSTR)this_00->field_1ADC;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1ADC) {
                pCVar27 = (LPCSTR)this_00->field_1ADC;
                pCVar42 = (LPCSTR)this_00->field_1AE0;
              }
              else {
                if (pCVar14 != (LPCSTR)this_00->field_1AE0) goto LAB_005a6cc4;
                pCVar27 = (LPCSTR)this_00->field_1AE0;
                pCVar42 = this_00->field_1AE4;
              }
              break;
            case 5:
              pCVar42 = (LPCSTR)this_00->field_1AC4;
              if (pCVar14 == pCVar42) {
                pCVar27 = pCVar42;
                pCVar42 = (LPCSTR)this_00->field_1AC8;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1AC8) {
                pCVar27 = (LPCSTR)this_00->field_1AC8;
                pCVar42 = (LPCSTR)this_00->field_1AD4;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1AD4) {
                pCVar27 = (LPCSTR)this_00->field_1AD4;
                pCVar42 = (LPCSTR)this_00->field_1ACC;
              }
              else {
                pCVar27 = (LPCSTR)this_00->field_1ACC;
              }
              break;
            case 10:
              pCVar42 = (LPCSTR)this_00->field_1AD8;
              if (pCVar14 == pCVar42) {
                pCVar27 = pCVar42;
                pCVar42 = (LPCSTR)this_00->field_1ADC;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1ADC) {
                pCVar27 = (LPCSTR)this_00->field_1ADC;
                pCVar42 = (LPCSTR)this_00->field_1AE0;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1AE0) {
                pCVar27 = (LPCSTR)this_00->field_1AE0;
                pCVar42 = this_00->field_1AE4;
              }
              else {
LAB_005a6cc4:
                pCVar27 = this_00->field_1AE4;
              }
            }
          }
          else {
            switch(this_00->array_00BC[0xc].field_01DF) {
            case 2:
            case 6:
            case 7:
switchD_005a6a92_caseD_2:
              pCVar42 = (LPCSTR)this_00->field_1AC4;
              if (pCVar14 == pCVar42) {
                pCVar27 = pCVar42;
                pCVar42 = (LPCSTR)this_00->field_1AC8;
              }
              else {
                pCVar27 = (LPCSTR)this_00->field_1AC8;
              }
              break;
            case 4:
              pCVar42 = (LPCSTR)this_00->field_1AC4;
              if (pCVar14 == pCVar42) {
                pCVar27 = pCVar42;
                pCVar42 = this_00->field_1AE4;
              }
              else {
                pCVar15 = (LPCSTR)this_00->field_1AC8;
                pCVar27 = pCVar15;
                if (((pCVar14 != pCVar15) &&
                    (pCVar16 = (LPCSTR)this_00->field_1ACC, pCVar27 = pCVar16, pCVar42 = pCVar15,
                    pCVar14 != pCVar16)) &&
                   (pCVar15 = (LPCSTR)this_00->field_1AD8, pCVar27 = pCVar15, pCVar42 = pCVar16,
                   pCVar14 != pCVar15)) {
                  pCVar16 = (LPCSTR)this_00->field_1ADC;
                  goto joined_r0x005a6ba3;
                }
              }
              break;
            case 5:
              pCVar42 = (LPCSTR)this_00->field_1AC4;
              if (pCVar14 == pCVar42) {
                pCVar27 = pCVar42;
                pCVar42 = (LPCSTR)this_00->field_1ACC;
              }
              else {
                pCVar15 = (LPCSTR)this_00->field_1AC8;
                pCVar27 = pCVar15;
                if ((pCVar14 != pCVar15) &&
                   (pCVar16 = (LPCSTR)this_00->field_1AD4, pCVar27 = pCVar16, pCVar42 = pCVar15,
                   pCVar14 != pCVar16)) {
                  pCVar27 = (LPCSTR)this_00->field_1ACC;
                  pCVar42 = pCVar16;
                }
              }
              break;
            case 10:
              pCVar15 = (LPCSTR)this_00->field_1AD8;
              if (pCVar14 == pCVar15) {
                pCVar27 = pCVar15;
                pCVar42 = this_00->field_1AE4;
              }
              else {
                pCVar16 = (LPCSTR)this_00->field_1ADC;
joined_r0x005a6ba3:
                pCVar27 = pCVar16;
                pCVar42 = pCVar15;
                if ((pCVar14 != pCVar16) &&
                   (pCVar15 = (LPCSTR)this_00->field_1AE0, pCVar27 = pCVar15, pCVar42 = pCVar16,
                   pCVar14 != pCVar15)) {
                  pCVar27 = this_00->field_1AE4;
                  pCVar42 = pCVar15;
                }
              }
            }
          }
        }
        this_00->field_002D = 0x20;
        if (pCVar27 != (LPCSTR)0x0) {
          *(undefined4 *)&this_00->field_0x31 = 0;
          st::fn_006E6080(this_00,2,st::machine_word_boundary_cast<undefined4>(pCVar27),(undefined4 *)&this_00->field_0x1d);
        }
        if (pCVar42 != (LPCSTR)0x0) {
          *(undefined4 *)&this_00->field_0x31 = 1;
          st::fn_006E6080(this_00,2,st::machine_word_boundary_cast<undefined4>(pCVar42),(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case MESS_CHOOSEMAPTY_6956:
        this_00->field_1ED2 = 1;
LAB_005a6d57:
        /* ST_CALLSITE[005A6D59]: CALL 0x00402ced; direct=00402CED FSGSTy::DoLogon */
        st::fn_00402CED(this_00);
        break;
      case MESS_FSGSTY_6957:
        puVar6 = this_00->field_1AC0;
        uVar36 = *(uint *)(puVar6 + 10);
        if (uVar36 == 0) {
          uVar36 = ((uint)puVar6[7] * *(int *)(puVar6 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                   *(int *)(puVar6 + 4);
        }
        puVar22 = (undefined4 *)st::fn_006B4FA0((int *)puVar6);
        for (uVar32 = uVar36 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
          *puVar22 = 0xffffffff;
          puVar22 = puVar22 + 1;
        }
        for (uVar36 = uVar36 & 3; uVar36 != 0; uVar36 = uVar36 - 1) {
          *(undefined1 *)puVar22 = 0xff;
          puVar22 = (undefined4 *)((int)puVar22 + 1);
        }
        st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,(int)this_00->field_1AC0,0,0,0x16,0x1b8
                         ,0xf0);
        iVar51 = -1;
        iVar50 = -1;
        uVar36 = 2;
        iVar48 = -1;
        iVar47 = -2;
        pcVar38_mg1 = st::fn_006B0140(0x25be,g_hINSTANCE_00807618);
        st::fn_00711B70(this_00->array_00BC[0xc].field_01F3,pcVar38_mg1,iVar47,iVar48,uVar36,iVar50,
                       iVar51);
        st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
        /* ST_CALLSITE[005A6E21]: CALL ESI */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s%s%s"),&CHAR_00h_00807680,st_global_0079C020,
                  &DAT_0080f126);
        /* ST_CALLSITE[005A6E34]: CALL ESI */
        st::external_00000080(local_4b8,st::mutable_c_string("subtitans/%s"),&DAT_0080f126);
        /* ST_CALLSITE[005A6E4A]: CALL dword ptr [0x0085c018] */
        st::external_000000F4
                  ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a,local_4b8);
LAB_005a6e50:
        pCVar38 = g_cursorClass_00802A30;
        if (g_cursorClass_00802A30 != nullptr) {
          g_cursorClass_00802A30->field_0493 = CASE_5;
          pCVar38->field_0494 = 0xffff;
          /* ST_CALLSITE[005A6E80]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
          st::fn_0040507E(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
          /* ST_CALLSITE[005A6E95]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
          st::fn_0040241E(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
          pCVar38->field_00D2 = 0;
          pCVar38->field_04DF = -1;
        }
      }
      goto cf_common_exit_005A8CA7;
    }
    if (MESS_SHARED_8160 < SVar5) {
      if (SVar5 < MESS_SHARED_C0A2) {
        if (SVar5 == MESS_FSGSTY_C0A1) {
          if ((this_00->array_00BC[0xc].field_01EB != 0) && (this_00->field_1B10 != 0)) {
            this_00->field_002D = 0x20;
            *(undefined4 *)&this_00->field_0x31 = 1;
            st::fn_006E6080(this_00,2,this_00->field_1B10,(undefined4 *)&this_00->field_0x1d);
          }
          goto cf_common_exit_005A8CA7;
        }
        switch(SVar5) {
        case MESS_SIDTY_8161:
          if ((this_00->field_1E8E == 0) || (this_00->field_1E9A == nullptr)) break;
          pFVar43 = (FSGSTy_field_1EAAElement *)(message->arg2).u32;
          local_1c = (AnonShape_005A4350_59BACD18 *)pFVar43;
          st::fn_006B5F80((int *)g_ddxContext_008075A8,pFVar43->field_0024,
                       (uint)(message->arg1).words.high + pFVar43->field_0028,pFVar43->field_002C,
                       0x11);
          if (this_00->array_00BC[0xc].field_01DF == '\x06') {
            iVar47 = (uint)(message->arg1).words.high + pFVar43->field_0028;
            /* ST_CALLSITE[005A861E]: CALL 0x00402298; direct=00402298 PutDDXClip */
            st::fn_00402298(pFVar43->field_0024,iVar47,st::machine_word_boundary_cast<int>(pFVar43->field_0024 + -0x1e9),iVar47 + -0x5e,
                       pFVar43->field_002C,(byte *)0x11,'\x01',this_00->field_1E9A);
            st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                         pFVar43->field_002C,0x11,0xff);
            if (this_00->array_00BC[0xc].field_01E0 == '\0') {
              pFVar11 = this_00->field_1EA6;
              if (pFVar11 != nullptr) {
                uVar36 = (uint)(message->arg0).words.low;
                if (uVar36 < pFVar11->count) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                  local_8 = (uint *)(&pFVar11->data->field_0000 + pFVar11->elementSize * uVar36);
                }
                else {
                  local_8 = nullptr;
                }
                if (local_8 != nullptr) {
                  st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0x23,0,
                                   st::machine_word_boundary_cast<int>(pFVar43->field_002C + -0x46),0x11);
                  if (STField<undefined1>(local_8,0x2d) == '\0') {
                    local_c = (FSGSTy_field_1EAAElement *)
                              st::fn_00403F26(&DAT_00802a90,(int)local_8);
                    /* ST_CALLSITE[005A8830]: CALL 0x00403229; direct=00403229 DibPut */
                    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,3,1,'\x01',
                           (byte *)local_c);
                    if (local_c != nullptr) {
                      st::fn_006AB060(&local_c);
                    }
                    st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,(char *)local_8,0,-1,
                                   (-(uint)((message->arg0).words.high != 0) & 0xfffffffe) + 2);
                    if ((STField<undefined1>(local_8,0x25) & 0x10) != 0) {
                      pBVar29 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)
                                             this_00->field_1A8B,3);
                      st::fn_006B5440((ushort *)this_00->field_1E8E,0,st::machine_word_boundary_cast<int>(pFVar43->field_002C + -0x1d),
                                   (0x11 - (pBVar29->bmiHeader).biHeight) / 2,pBVar29,0,0xff);
                    }
                  }
                  else {
                    pBVar29 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1A87
                                           ,1);
                    /* ST_CALLSITE[005A87D4]: CALL 0x00403229; direct=00403229 DibPut */
                    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,3,
                           (0x11 - (pBVar29->bmiHeader).biHeight) / 2,'\x06',(byte *)pBVar29);
                    uVar36 = (-(uint)((message->arg0).words.high != 0) & 0xfffffffe) + 2;
                    iVar48 = -1;
                    iVar47 = 0;
                    pcVar38_mg16 = st::fn_006B0140(0x2567,g_hINSTANCE_00807618);
                    st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,pcVar38_mg16,iVar47,iVar48,
                                   uVar36);
                  }
                }
              }
            }
            else {
              pFVar19 = this_00->field_1EAA;
              if (pFVar19 != nullptr) {
                uVar36 = (uint)(message->arg0).words.low;
                if (uVar36 < pFVar19->count) {
                  element_1eaa_2 = DArrayAt<FSGSTy_field_1EAAElement>(pFVar19, uVar36);
                }
                else {
                  element_1eaa_2 = nullptr;
                }
                if (element_1eaa_2 != nullptr) {
                  uVar36 = element_1eaa_2->field_0060;
                  if ((uVar36 & 0x40) == 0) {
                    if ((uVar36 & 0x18) == 0) {
                      local_10 = (uint *)(STReplaceLowByte((uint32_t)(local_10), (uint8_t)(-((uVar36 & 2) != 0))) & 0xffffff05
                                         );
                    }
                    else {
                      local_10 = (uint *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(3));
                    }
                  }
                  else {
                    local_10 = (uint *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(4));
                  }
                  pBVar29 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1A87,
                                         (uint)local_10 & 0xff);
                  /* ST_CALLSITE[005A86DB]: CALL 0x00403229; direct=00403229 DibPut */
                  st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,3,
                         (0x11 - (pBVar29->bmiHeader).biHeight) / 2,'\x06',(byte *)pBVar29);
                  st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0x23,0,
                                   st::machine_word_boundary_cast<int>(pFVar43->field_002C + -0x46),0x11);
                  iVar47 = (-(uint)((message->arg0).words.high != 0) & 0xfffffffe) + 2;
                  /* ST_CALLSITE[005A8726]: CALL dword ptr [0x0085bde8] */
                  st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("&%d%s (&0%d&%d)"),iVar47,element_1eaa_2,
                            *(undefined4 *)&element_1eaa_2->field_0x64,iVar47);
                  st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,(char *)&DAT_0080f33a,0,-1,0);
                }
              }
            }
          }
          else {
            iVar47 = (uint)(message->arg1).words.high + pFVar43->field_0028;
            /* ST_CALLSITE[005A88E5]: CALL 0x00402298; direct=00402298 PutDDXClip */
            st::fn_00402298(pFVar43->field_0024,iVar47,st::machine_word_boundary_cast<int>(pFVar43->field_0024 + -0x13),iVar47 + -0x5e,
                       pFVar43->field_002C,(byte *)0x11,'\x01',this_00->field_1E9A);
            st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                         pFVar43->field_002C,0x11,0xff);
            pFVar7 = this_00->field_1EBE;
            if (pFVar7 != nullptr) {
              uVar36 = (uint)(message->arg0).words.low;
              if (uVar36 < pFVar7->count) {
                element_1ebe = DArrayAt<FSGSTy_field_1EBEElement>(pFVar7, uVar36);
              }
              else {
                element_1ebe = nullptr;
              }
              if (element_1ebe != nullptr) {
                iVar47 = -1;
                pcVar39 = (char *)(element_1ebe + 0x13);
                do {
                  if (iVar47 == 0) break;
                  iVar47 = iVar47 + -1;
                  cVar2 = *pcVar39;
                  pcVar39 = pcVar39 + 1;
                } while (cVar2 != '\0');
                pBVar29 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1A87,
                                       -(uint)(iVar47 != -2) & 4);
                /* ST_CALLSITE[005A897E]: CALL 0x00403229; direct=00403229 DibPut */
                st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,3,
                       (0x11 - (pBVar29->bmiHeader).biHeight) / 2,'\x06',(byte *)pBVar29);
                st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0x23,0,
                                 st::machine_word_boundary_cast<int>(local_1c->field_002C + -0x40),0x11);
                st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,(char *)(element_1ebe + 0xb),0,-1,
                               (-(uint)((message->arg0).words.high != 0) & 0xfffffffe) + 2);
                pFVar43 = (FSGSTy_field_1EAAElement *)local_1c;
              }
            }
          }
          DVar49 = pFVar43->field_002C;
          pBVar29 = (BITMAPINFO *)this_00->field_1E8E;
          DVar25 = 0x11;
          iVar47 = (uint)(message->arg1).words.high + pFVar43->field_0028;
          goto LAB_005a89f6;
        case MESS_OPTPANELTY_8162:
          if ((g_cursorClass_00802A30 != nullptr) &&
             (g_cursorClass_00802A30->field_0493 == CASE_5)) break;
          if (this_00->array_00BC[0xc].field_01E0 != '\0') {
            pFVar19 = this_00->field_1EAA;
            if (pFVar19 != nullptr) {
              if ((message->arg0).u32 < pFVar19->count) {
                element_1eaa = DArrayAt<FSGSTy_field_1EAAElement>(pFVar19, (message->arg0).u32);
              }
              else {
                element_1eaa = nullptr;
              }
              if (element_1eaa != nullptr) {
                if (g_cursorClass_00802A30 != nullptr) {
                  iVar47 = g_cursorClass_00802A30->field_00C9;
                  iVar48 = g_cursorClass_00802A30->field_00C5;
                  g_cursorClass_00802A30->field_0493 = CASE_5;
                  pCVar38->field_0494 = 0xffff;
                  /* ST_CALLSITE[005A7DCD]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
                  st::fn_0040507E(pCVar38,CASE_0,iVar48,iVar47);
                  /* ST_CALLSITE[005A7DE2]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
                  st::fn_0040241E(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
                  pCVar38->field_00D2 = 0;
                  pCVar38->field_04DF = -1;
                }
                iVar47 = -1;
                pcVar24 = &(element_1eaa + 0x40)->field_0000;
                do {
                  if (iVar47 == 0) break;
                  iVar47 = iVar47 + -1;
                  cVar2 = *pcVar24;
                  pcVar24 = pcVar24 + 1;
                } while (cVar2 != '\0');
                if (iVar47 == -2) {
                  st::fn_00405542(&DAT_00802a90,&(element_1eaa)->field_0000,(char *)&(element_1eaa + 0x40)->field_0000,1);
                }
                else if ((int)this_00->field_1AEC->elementSize < 1) {
                  st::fn_00405542(&DAT_00802a90,&(element_1eaa)->field_0000,nullptr,1);
                }
                else {
                  st::fn_00405542(&DAT_00802a90,&(element_1eaa)->field_0000,
                                     *(char **)this_00->field_1AEC->growCapacity,1);
                }
              }
            }
            break;
          }
          uVar36 = (message->arg0).u32;
          if (uVar36 == 0) {
            if (g_cursorClass_00802A30 != nullptr) {
              iVar47 = g_cursorClass_00802A30->field_00C9;
              iVar48 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = CASE_5;
              pCVar38->field_0494 = 0xffff;
              /* ST_CALLSITE[005A7F7A]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
              st::fn_0040507E(pCVar38,CASE_0,iVar48,iVar47);
              /* ST_CALLSITE[005A7F8F]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
              st::fn_0040241E(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
              pCVar38->field_00D2 = 0;
              pCVar38->field_04DF = -1;
            }
            /* ST_CALLSITE[005A7FAA]: CALL dword ptr [0x0085c00c] */
            st::external_000000F1((CFsgsConnection *)&DAT_00802a90);
            iVar47 = this_00->field_1B18;
            this_00->array_00BC[0xc].field_01E0 = 1;
            this_00->field_002D = 0x20;
            *(undefined4 *)&this_00->field_0x31 = 0;
            if (iVar47 != 0) {
              st::fn_006E6080(this_00,2,iVar47,(undefined4 *)&this_00->field_0x1d);
            }
            *(undefined4 *)&this_00->field_0x31 = 1;
            if (this_00->field_1B24 != 0) {
              st::fn_006E6080(this_00,2,this_00->field_1B24,(undefined4 *)&this_00->field_0x1d);
            }
            break;
          }
          pFVar11 = this_00->field_1EA6;
          if (uVar36 < pFVar11->count) {
            element_1ea6_2 = DArrayAt<FSGSTy_field_1EA6Element>(pFVar11, uVar36);
          }
          else {
            element_1ea6_2 = nullptr;
          }
          if (element_1ea6_2 == nullptr) break;
          if (this_00->field_1B0C != nullptr) {
            st::fn_006AB060(&this_00->field_1B0C);
          }
          uVar36 = 0xffffffff;
          pcVar24 = &(element_1ea6_2)->field_0000;
          do {
            if (uVar36 == 0) break;
            uVar36 = uVar36 - 1;
            cVar2 = *pcVar24;
            pcVar24 = pcVar24 + 1;
          } while (cVar2 != '\0');
          pbVar41 = st::pointer_boundary_cast<byte *>(st::fn_006AAC70(~uVar36));
          uVar36 = 0xffffffff;
          this_00->field_1B0C = pbVar41;
          do {
            pcVar24 = &(element_1ea6_2)->field_0000;
            if (uVar36 == 0) break;
            uVar36 = uVar36 - 1;
            pcVar24 = &(element_1ea6_2 + 1)->field_0000;
            cVar2 = element_1ea6_2->field_0000;
            pcVar39 = pcVar24;
          } while (cVar2 != '\0');
          uVar36 = ~uVar36;
          pcVar39 = pcVar24 + -uVar36;
          memmove(pbVar41, pcVar39, uVar36); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          /* ST_CALLSITE[005A7ED5]: CALL dword ptr [EDX + 0x8] */
          this_00->CloseButtons();
          this_00->array_00BC[0xc].field_01E1 = 10;
          this_00->field_1ED2 = 6;
          pSVar8 = this_00->array_00BC[0xc].field_01DB;
          if (pSVar8->field_02E6 == nullptr) break;
          puVar22 = local_370;
          for (iVar47 = 6; iVar47 != 0; iVar47 = iVar47 + -1) {
            *puVar22 = 0xffffffff;
            puVar22 = puVar22 + 1;
          }
          *(undefined2 *)puVar22 = 0xffff;
          local_7c = 0;
          local_78 = 0;
          local_80 = 0x10101;
          local_74 = 0;
          /* ST_CALLSITE[005A7F33]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
          st::fn_00404B51(pSVar8->field_02E6,(int)local_370);
          puVar22 = &local_80;
          goto cf_common_exit_005A7F3B;
        case MESS_SIDTY_8163:
          cVar2 = this_00->array_00BC[0xc].field_01DF;
          if (cVar2 == '\x06') {
            if (this_00->array_00BC[0xc].field_01E0 == '\0') {
              local_1ac = 0x20;
              if ((message->arg0).u32 == 0) {
                local_1a8 = 0;
                if (this_00->field_1B18 != 0) {
                  st::fn_006E6080(this_00,2,this_00->field_1B18,local_1bc);
                }
              }
              else {
                local_1a8 = 1;
                if (this_00->field_1B18 != 0) {
                  st::fn_006E6080(this_00,2,this_00->field_1B18,local_1bc);
                }
              }
            }
          }
          else if (cVar2 == '\b') {
            pFVar7 = this_00->field_1EBE;
            bVar45 = true;
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            if (((pFVar7 != nullptr) && ((message->arg0).u32 < pFVar7->count)
                ) && (puVar34 = (uint *)((int)&pFVar7->data->field_0000 +
                                        pFVar7->elementSize * (message->arg0).u32),
                     puVar34 != nullptr)) {
              bVar45 = false;
              st::fn_006B6020(this_00->field_1AE8,0,(char *)(puVar34 + 0xb));
              this_00->field_002D = 0x33;
              *(DArrayTy **)&this_00->field_0x31 = this_00->field_1AE8;
              st::fn_006E6080(this_00,2,this_00->field_1AC4,(undefined4 *)&this_00->field_0x1d);
              st::fn_006B5F80((int *)g_ddxContext_008075A8,0x1a4,0x7d,0x15e,0x8c);
              /* ST_CALLSITE[005A80C1]: CALL 0x00402298; direct=00402298 PutDDXClip */
              st::fn_00402298(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',this_00->field_1E92);
              st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,0x15e,0x8c,
                           0xff);
              st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0,0x15e,
                               0x11);
              uVar36 = 2;
              iVar48 = -1;
              iVar47 = -1;
              pcVar38_mg9 = st::fn_006B0140(0x2572,g_hINSTANCE_00807618);
              st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,pcVar38_mg9,iVar47,iVar48,uVar36);
              st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,10,0x11,
                               0x14a,0x11);
              st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,(char *)(puVar34 + 7),0,-1,0);
              st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0x22,
                               0x15e,0x11);
              uVar36 = 2;
              iVar48 = -1;
              iVar47 = -1;
              pcVar38_mgA = st::fn_006B0140(0x2347,g_hINSTANCE_00807618);
              st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,pcVar38_mgA,iVar47,iVar48,uVar36);
              st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,10,0x33,
                               0x14a,0x11);
              uVar36 = 0;
              iVar48 = -1;
              iVar47 = 0;
              if (((char *)puVar34)[0x1f] == '\0') {
                pcVar38_mgB = st::fn_006B0140(0x2573,g_hINSTANCE_00807618);
              }
              else {
                pcVar38_mgB = (char *)((int)puVar34 + 0x83);
              }
              st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,pcVar38_mgB,iVar47,iVar48,uVar36);
              st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0x44,
                               0x15e,0x11);
              uVar36 = 2;
              iVar48 = -1;
              iVar47 = -1;
              pcVar38_mgC = st::fn_006B0140(0x2344,g_hINSTANCE_00807618);
              st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,pcVar38_mgC,iVar47,iVar48,uVar36);
              if (((char *)puVar34)[0x1f] != '\0') {
                st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,10,0x55,
                                 0x14a,0x11);
                iVar47 = (int)(char)STField<undefined1>(puVar34,0x7e) << 1;
                /* ST_CALLSITE[005A825E]: CALL dword ptr [0x0085bde8] */
                st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%dx%d"),iVar47,iVar47);
                st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,(char *)&DAT_0080f33a,0,-1,0);
              }
              st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0x66,
                               0x15e,0x11);
              uVar36 = 2;
              iVar48 = -1;
              iVar47 = -1;
              pcVar38_mgD = st::fn_006B0140(0x2345,g_hINSTANCE_00807618);
              st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,pcVar38_mgD,iVar47,iVar48,uVar36);
              if (((char *)puVar34)[0x1f] != '\0') {
                st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,10,0x77,
                                 0x14a,0x11);
                pcVar38_mgE = st::fn_006B0140(0x2574,g_hINSTANCE_00807618);
                /* ST_CALLSITE[005A8306]: CALL dword ptr [0x0085bde8] */
                st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%d %s"),
                          (int)(char)STField<undefined1>(puVar34,0x7d),pcVar38_mgE);
                st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,(char *)&DAT_0080f33a,0,-1,0);
              }
              st::fn_006B4680
                        ((int *)g_dDXContext_0080759C,0x1a4,0x7d,(BITMAPINFO *)this_00->field_1E8E,
                         nullptr,0,0,0x15e,0x8c,0x10000ff);
            }
            if (bVar45) {
              st::fn_006B6020(this_00->field_1AE8,0,&CHAR_00h_008016a0);
              this_00->field_002D = 0x33;
              *(DArrayTy **)&this_00->field_0x31 = this_00->field_1AE8;
              st::fn_006E6080(this_00,2,this_00->field_1AC4,(undefined4 *)&this_00->field_0x1d);
              st::fn_006B5F80((int *)g_ddxContext_008075A8,0x1a4,0x7d,0x15e,0x8c);
              /* ST_CALLSITE[005A83CD]: CALL 0x00402298; direct=00402298 PutDDXClip */
              st::fn_00402298(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',this_00->field_1E92);
              st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,0x15e,0x8c,
                           0xff);
              st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0,0x15e,
                               0x11);
              uVar36 = 2;
              iVar48 = -1;
              iVar47 = -1;
              pcVar38_mgF = st::fn_006B0140(0x2572,g_hINSTANCE_00807618);
              st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,pcVar38_mgF,iVar47,iVar48,uVar36);
              st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0x22,
                               0x15e,0x11);
              uVar36 = 2;
              iVar48 = -1;
              iVar47 = -1;
              pcVar38_mg10 = st::fn_006B0140(0x2347,g_hINSTANCE_00807618);
              st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,pcVar38_mg10,iVar47,iVar48,uVar36);
              st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0x44,
                               0x15e,0x11);
              uVar36 = 2;
              iVar48 = -1;
              iVar47 = -1;
              pcVar38_mg11 = st::fn_006B0140(0x2344,g_hINSTANCE_00807618);
              st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,pcVar38_mg11,iVar47,iVar48,uVar36);
              st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0x66,
                               0x15e,0x11);
              uVar36 = 2;
              iVar48 = -1;
              iVar47 = -1;
              pcVar38_mg12 = st::fn_006B0140(0x2345,g_hINSTANCE_00807618);
              st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,pcVar38_mg12,iVar47,iVar48,uVar36);
              st::fn_006B4680
                        ((int *)g_dDXContext_0080759C,0x1a4,0x7d,(BITMAPINFO *)this_00->field_1E8E,
                         nullptr,0,0,0x15e,0x8c,0x10000ff);
            }
          }
          break;
        case MESS_OPTPANELTY_8164:
          /* ST_CALLSITE[005A8A17]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
          st::fn_004031D4
                    ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1CDB,
                     (int)message,0);
          break;
        case MESS_OPTPANELTY_8165:
          /* ST_CALLSITE[005A8A2C]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
          st::fn_004031D4
                    ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1D6C,
                     (int)message,0);
          break;
        case MESS_SHARED_8166:
          uVar36 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
          this_00->field_1E1D = uVar36;
          if (this_00->field_1E01 != 0xffffffff) {
            st::fn_006B3730
                      ((uint *)this_00->field_1E45,this_00->field_1E01,this_00->field_1E05,
                       this_00->field_1E19,uVar36);
          }
        }
        goto cf_common_exit_005A8CA7;
      }
      switch(SVar5) {
      case MESS_SHARED_C0A2:
        if ((int)this_00->field_1EA2->elementSize < 1) {
          pcVar39 = nullptr;
        }
        else {
          pcVar39 = *(char **)this_00->field_1EA2->growCapacity;
        }
        bVar44 = st::fn_0040224D(pcVar39);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (CONCAT31(extraout_var,bVar44) == 0) {
          if ((int)this_00->field_1EA2->elementSize < 1) {
            pcVar39 = nullptr;
          }
          else {
            pcVar39 = *(char **)this_00->field_1EA2->growCapacity;
          }
          /* ST_CALLSITE[005A8B53]: CALL dword ptr [0x0085c064] */
          st::external_00000107((CFsgsConnection *)&DAT_00802a90,pcVar39);
        }
        else {
          iVar47 = 0;
          pDVar31 = (this_00->array_00BC[0xc].field_01DB)->field_0696;
          if (0 < (int)pDVar31->elementSize) {
            if ((int)pDVar31->elementSize < 1) {
              pcVar39 = nullptr;
              goto LAB_005a8b12;
            }
            do {
              pcVar39 = *(char **)(pDVar31->growCapacity + iVar47 * 4);
LAB_005a8b12:
              /* ST_CALLSITE[005A8B1E]: CALL 0x0040347c; direct=0040347C FSGSTy::AddMessage */
              st::fn_0040347C(this_00,8,(byte *)&CHAR_00h_008016a0,pcVar39,8);
              iVar47 = iVar47 + 1;
              pDVar31 = (this_00->array_00BC[0xc].field_01DB)->field_0696;
            } while (iVar47 < (int)pDVar31->elementSize);
          }
        }
        st::fn_006B6020(this_00->field_1EA2,0,&CHAR_00h_008016a0);
        this_00->field_002D = 0x33;
        *(DArrayTy **)&this_00->field_0x31 = this_00->field_1EA2;
        goto LAB_005a8c85;
      case MESS_SHARED_C0A3:
        pDVar31 = this_00->field_1AE8;
        dVar12 = pDVar31->elementSize;
joined_r0x005a8b8f:
        if (0 < (int)dVar12) {
          pcVar39 = *(char **)pDVar31->growCapacity;
        }
        iVar47 = -1;
        do {
          if (iVar47 == 0) break;
          iVar47 = iVar47 + -1;
          cVar2 = *pcVar39;
          pcVar39 = pcVar39 + 1;
        } while (cVar2 != '\0');
        if (iVar47 != -2) {
          if ((int)this_00->field_1AEC->elementSize < 1) {
            pcVar39 = nullptr;
          }
          else {
            pcVar39 = *(char **)this_00->field_1AEC->growCapacity;
          }
          if ((int)dVar12 < 1) {
            st::fn_00405542(&DAT_00802a90,nullptr,pcVar39,1);
          }
          else {
            st::fn_00405542(&DAT_00802a90,*(char **)pDVar31->growCapacity,pcVar39,1);
          }
        }
        break;
      case MESS_BLDLABPANELTY_C0A4:
        if (this_00->array_00BC[0xc].field_01E0 != '\0') break;
        this_00->field_002D = 0x26;
        st::fn_006E6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
        uVar36 = *(uint *)&this_00->field_0x31;
        if (uVar36 == 0) break;
        pFVar11 = this_00->field_1EA6;
        if (uVar36 < pFVar11->count) {
          element_1ea6_3 = DArrayAt<FSGSTy_field_1EA6Element>(pFVar11, uVar36);
        }
        else {
          element_1ea6_3 = nullptr;
        }
        if ((int)this_00->field_1EA2->elementSize < 1) {
          uVar23 = 0;
        }
        else {
          uVar23 = *(undefined4 *)this_00->field_1EA2->growCapacity;
        }
        /* ST_CALLSITE[005A8C59]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s %s "),uVar23,element_1ea6_3);
        st::fn_006B6020(this_00->field_1EA2,0,(char *)&DAT_0080f33a);
        this_00->field_002D = 0x33;
        *(DArrayTy **)&this_00->field_0x31 = this_00->field_1EA2;
LAB_005a8c85:
        st::fn_006E6080(this_00,2,this_00->field_1B10,(undefined4 *)&this_00->field_0x1d);
        break;
      case MESS_FRMPANELTY_C0A5:
        DAT_00807360 = DAT_00807360 == '\0';
      }
      goto cf_common_exit_005A8CA7;
    }
    if (SVar5 == MESS_SHARED_8160) {
      (message->arg1).u32 = 0x11;
      goto cf_common_exit_005A8CA7;
    }
    switch(SVar5) {
    case MESS_SHARED_6980:
      piVar17 = static_cast<int *>((message->arg1).ptr);
      iVar47 = *piVar17;
      local_140 = iVar47 + -0xb4;
      iVar48 = piVar17[1];
      local_13c = iVar48 + -0xaa;
      local_138 = piVar17[2];
      local_134 = piVar17[3];
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,iVar47 + -0xb3,
                   iVar48 + -0xa9,local_138 + -2,local_134 + -2,0xff);
      if (DAT_0080735f != '\0') {
        pBVar29 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1A83,0);
        /* ST_CALLSITE[005A703A]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,iVar47 + -0xb2,iVar48 + -0xa8,
               '\x06',(byte *)pBVar29);
      }
      break;
    case MESS_SIDTY_6981:
      pcVar13 = this_00->array_00BC[0xc].field_01F3;
      local_14 = nullptr;
      if (pcVar13->field_00A0 != 0) {
        st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar13);
      }
      dVar12 = (message->arg2).u32;
      iVar21 = *(int *)&pcVar13->field_0x8a;
      local_50 = STField<int>(dVar12,0x24) + -0xb4;
      local_48 = STField<int>(dVar12,0x2C);
      local_44 = STField<int>(dVar12,0x30);
      local_4c = STField<int>(dVar12,0x28) -
                 ((-(uint)(this_00->field_1ABB != '\0') & 0xffffffb4) + 0xaa);
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,
                   STField<int>(dVar12,0x24) + -0xb5,local_4c,local_48 + 2,local_44,0xff);
      pvVar30 = (message->arg0).ptr;
      if (pvVar30 != nullptr) {
        local_8 = nullptr;
        do {
          if (*(char **)((int)pvVar30 + (int)local_8) == nullptr) break;
          iVar21 = st::fn_007111C0(this_00->array_00BC[0xc].field_01F3,
                                *(char **)((int)pvVar30 + (int)local_8));
          st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,(int)this_00->field_1AC0,0,local_50,
                           (int)&(((tagBITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize
                           + local_4c,local_48,iVar21);
          st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,
                         *(char **)((int)(message->arg0).ptr + (int)local_8),0,-1,0);
          local_14 = (tagBITMAPINFO *)
                     ((int)&(((tagBITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize +
                     (this_00->array_00BC[0xc].field_01F3)->field_005C + iVar21);
          pvVar30 = (message->arg0).ptr;
          local_8 = local_8 + 1;
        } while (pvVar30 != nullptr);
      }
      uVar3 = (message->arg1).words.low;
      if ((uVar3 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
        iVar48 = (uint)(message->arg1).words.high + local_4c;
        iVar47 = (uint)uVar3 + local_50;
        st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1AC0,0,iVar47,iVar48,iVar47,
                     iVar48 + iVar21,9,0xd);
      }
      goto LAB_005a7c92;
    case MESS_SHARED_6980|MESS_ID_CREATE:
      if (((this_00->field_1E8E != 0) && (this_00->field_1E92 != nullptr)) &&
         (local_8 = (uint *)(message->arg2).u32, local_8 != nullptr)) {
        if (this_00->array_00BC[0xc].field_01DF == '\x03') {
          pcVar13 = this_00->array_00BC[0xc].field_01F3;
          local_1c = (AnonShape_005A4350_59BACD18 *)this_00->field_1B08;
        }
        else {
          pcVar13 = this_00->array_00BC[0xc].field_01F7;
          local_1c = (AnonShape_005A4350_59BACD18 *)this_00->field_1E9E;
        }
        st::fn_006B5F80((int *)g_ddxContext_008075A8,local_8[9],local_8[10],local_8[0xb],local_8[0xc]);
        /* ST_CALLSITE[005A7235]: CALL 0x00402298; direct=00402298 PutDDXClip */
        st::fn_00402298(local_8[9],local_8[10],6,1,local_8[0xb],(byte *)local_8[0xc],'\x01',
                   this_00->field_1E92);
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,local_8[0xb],
                     local_8[0xc],0xff);
        local_14 = (tagBITMAPINFO *)(uint)(message->arg0).words.high;
        if ((int)local_14 <
            (int)((int)&(((tagBITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize +
                 local_8[0x78])) {
          do {
            if ((int)local_14 < local_1c->field_0008) {
              local_10 = *(uint **)(local_1c->field_0014 + (int)local_14 * 4);
            }
            else {
              local_10 = nullptr;
            }
            if (local_10 != nullptr) {
              if (pcVar13->field_00A0 != 0) {
                st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar13);
              }
              local_c = *(FSGSTy_field_1EAAElement **)&pcVar13->field_0x8a;
              if (pcVar13->field_00A0 != 0) {
                st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar13);
              }
              st::fn_00710A90(pcVar13,this_00->field_1E8E,0,0,
                               ((int)local_14 - (uint)(message->arg0).words.high) *
                               *(int *)&pcVar13->field_0x8a,*(int *)(this_00->field_1E8E + 4),
                               (int)local_c);
              st::fn_007119C0(pcVar13,(char *)local_10,0,-1,2);
            }
            local_14 = (tagBITMAPINFO *)((int)&(local_14->bmiHeader).biSize + 1);
          } while ((int)local_14 < (int)((uint)(message->arg0).words.high + local_8[0x78]));
        }
        st::fn_006B4680
                  ((int *)g_dDXContext_0080759C,local_8[9],local_8[10],
                   (BITMAPINFO *)this_00->field_1E8E,nullptr,0,0,local_8[0xb],local_8[0xc],
                   0x10000ff);
      }
      break;
    case MESS_MAINMENUTY_6983:
      if ((this_00->field_1E8E != 0) && (this_00->field_1E92 != nullptr)) {
        dVar12 = (message->arg2).u32;
        st::fn_006B5F80((int *)g_ddxContext_008075A8,STField<int>(dVar12,0x24),STField<int>(dVar12,0x28),
                     STField<int>(dVar12,0x2C),STField<int>(dVar12,0x30));
        /* ST_CALLSITE[005A73B0]: CALL 0x00402298; direct=00402298 PutDDXClip */
        st::fn_00402298(STField<int>(dVar12,0x24),STField<int>(dVar12,0x28),6,0x15f,STField<uint>(dVar12,0x2C),
                   *(byte **)(dVar12 + 0x30),'\x01',this_00->field_1E92);
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                     STField<int>(dVar12,0x2C),STField<int>(dVar12,0x30),0xff);
        if ((message->arg0).u32 != 0) {
          st::fn_00710A90(this_00->array_00BC[0xc].field_01F7,this_00->field_1E8E,0,0,0,
                           *(int *)(this_00->field_1E8E + 4),0x14);
          st::fn_007119C0(this_00->array_00BC[0xc].field_01F7,*(char **)(message->arg0).ptr,0,-1,5);
        }
        uVar3 = (message->arg1).words.low;
        if ((uVar3 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
          st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1E8E,0,(uint)uVar3,2,
                       (uint)uVar3,0x11,9,0xd);
        }
        st::fn_006B4680
                  ((int *)g_dDXContext_0080759C,STField<int>(dVar12,0x24),STField<int>(dVar12,0x28),
                   (BITMAPINFO *)this_00->field_1E8E,nullptr,0,0,STField<DWORD>(dVar12,0x2C),
                   STField<DWORD>(dVar12,0x30),0x10000ff);
      }
      break;
    case 0x6984:
      if ((this_00->field_1E8E == 0) || (this_00->field_1E92 == nullptr)) break;
      pFVar43 = (FSGSTy_field_1EAAElement *)(message->arg2).u32;
      st::fn_006B5F80((int *)g_ddxContext_008075A8,pFVar43->field_0024,pFVar43->field_0028,
                   pFVar43->field_002C,pFVar43->field_0030);
      /* ST_CALLSITE[005A74CB]: CALL 0x00402298; direct=00402298 PutDDXClip */
      st::fn_00402298(pFVar43->field_0024,pFVar43->field_0028,st::machine_word_boundary_cast<int>(pFVar43->field_0024 + -0x13),0x160,
                 pFVar43->field_002C,(byte *)pFVar43->field_0030,'\x01',this_00->field_1E92);
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,pFVar43->field_002C,
                   pFVar43->field_0030,0xff);
      st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0,
                       pFVar43->field_002C,pFVar43->field_0030);
      wVar4 = (message->arg0).words.low;
      if (wVar4 == 1) {
        uVar36 = 2;
      }
      else {
        uVar36 = (-(uint)(wVar4 != 0) & 2) + 1;
      }
      iVar48 = -1;
      iVar47 = -1;
      pcVar38_mg20 = st::fn_006B0140(0x2565,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,pcVar38_mg20,iVar47,iVar48,uVar36);
      goto LAB_005a754e;
    case MESS_SHARED_6980|MESS_SHARED_0005:
    case MESS_MMSGTY_6986:
    case MESS_SHARED_6980|MESS_CURSORCLASSTY_0009:
    case MESS_FSGSTY_698A:
    case MESS_SHARED_6980|MESS_SHARED_0008|MESS_SHARED_0005:
    case 0x698e:
    case 0x698f:
    case 0x6990:
    case 0x6991:
    case MESS_FSGSTY_6992:
      if (this_00->field_1E8E == 0) break;
      local_14 = nullptr;
      switch(SVar5) {
      case MESS_SHARED_6980|MESS_SHARED_0005:
      case MESS_MMSGTY_6986:
        local_14 = this_00->field_1E9A;
        local_10 = (uint *)0x1e9;
        break;
      default:
        goto switchD_005a7593_caseD_6987;
      case MESS_SHARED_6980|MESS_CURSORCLASSTY_0009:
      case MESS_FSGSTY_698A:
      case MESS_SHARED_6980|MESS_SHARED_0008|MESS_SHARED_0005:
        local_14 = this_00->field_1E92;
        local_10 = (uint *)0x199;
        break;
      case 0x698e:
      case 0x698f:
      case 0x6990:
      case 0x6991:
      case MESS_FSGSTY_6992:
        local_14 = this_00->field_1E92;
        local_10 = (uint *)0x22;
      }
      local_1c = (AnonShape_005A4350_59BACD18 *)0x5e;
switchD_005a7593_caseD_6987:
      if (local_14 == nullptr) break;
      local_c = (FSGSTy_field_1EAAElement *)(message->arg2).u32;
      switch(SVar5 - (MESS_SHARED_6980|MESS_SHARED_0005)) {
      case MESS_ID_NONE:
        local_8 = (uint *)0x2566;
        break;
      case 1:
      case MESS_SHARED_0008:
        local_8 = (uint *)0x2616;
        break;
      case 4:
        uVar36 = this_00->field_1EC2;
        if (uVar36 < 0x401) {
          if (uVar36 == 0x400) {
            local_8 = (uint *)0x235b;
          }
          else if (uVar36 == 0x100) {
            local_8 = (uint *)0x2341;
          }
          else {
            if (uVar36 != 0x200) goto LAB_005a7656;
            local_8 = (uint *)0x235a;
          }
        }
        else if (uVar36 == 0x501) {
          local_8 = (uint *)0x2342;
        }
        else if (uVar36 == 0x502) {
          local_8 = (uint *)0x235d;
        }
        else {
LAB_005a7656:
          local_8 = (uint *)0x235c;
        }
        break;
      case MESS_SHARED_0005:
        if (this_00->field_1EC6 == -1) {
          pcVar38_mg1D = st::fn_006B0140(0x235c,g_hINSTANCE_00807618);
          uVar36 = 0xffffffff;
          do {
            pcVar39 = pcVar38_mg1D;
            if (uVar36 == 0) break;
            uVar36 = uVar36 - 1;
            pcVar39 = pcVar38_mg1D + 1;
            cVar2 = *pcVar38_mg1D;
            pcVar38_mg1D = pcVar39;
          } while (cVar2 != '\0');
          uVar36 = ~uVar36;
          pcVar39 = pcVar39 + -uVar36;
          pcVar24 = (char *)&DAT_0080f33a;
          memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
          uVar32 = 0;
        }
        else {
          if (this_00->field_1ECA < PTR_0080c502->count) {
            pcVar39 = DArrayAt<char>(PTR_0080c502, this_00->field_1ECA);
          }
          else {
            pcVar39 = nullptr;
          }
          if (pcVar39 == nullptr) {
            pcVar39 = &CHAR_00h_008016a0;
          }
          uVar36 = 0xffffffff;
          do {
            pcVar24 = pcVar39;
            if (uVar36 == 0) break;
            uVar36 = uVar36 - 1;
            pcVar24 = pcVar39 + 1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar24;
          } while (cVar2 != '\0');
          uVar36 = ~uVar36;
          pcVar39 = pcVar24 + -uVar36;
          pcVar24 = (char *)&DAT_0080f33a;
          memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
          uVar32 = 0;
        }
        break;
      case MESS_CURSORCLASSTY_0009:
        if (DAT_00803140 == 2) {
          local_8 = (uint *)0x25b5;
        }
        else {
          local_8 = (uint *)0x25b4;
        }
        break;
      case MESS_SYSTEMCLASSTY_000A:
        if (DAT_00803144 == 1) {
          local_8 = (uint *)0x25c0;
        }
        else if (DAT_00803144 == 2) {
          local_8 = (uint *)0x25c1;
        }
        else {
          local_8 = (uint *)0x25bf;
        }
        break;
      case 0xb:
        local_8 = (uint *)0x25b2;
        break;
      case 0xc:
        local_8 = (uint *)0x25b3;
        break;
      case MESS_SHARED_0008|MESS_SHARED_0005:
        local_8 = (uint *)0x25b1;
      }
      pFVar43 = local_c;
      st::fn_006B5F80((int *)g_ddxContext_008075A8,local_c->field_0024,local_c->field_0028,
                   local_c->field_002C,local_c->field_0030);
      /* ST_CALLSITE[005A77AA]: CALL 0x00402298; direct=00402298 PutDDXClip */
      st::fn_00402298(pFVar43->field_0024,pFVar43->field_0028,st::machine_word_boundary_cast<int>(pFVar43->field_0024 - (int)local_10),
                 st::machine_word_boundary_cast<int>(pFVar43->field_0028 - (int)local_1c),pFVar43->field_002C,(byte *)pFVar43->field_0030
                 ,'\x01',local_14);
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,pFVar43->field_002C,
                   pFVar43->field_0030,0xff);
      st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0,
                       pFVar43->field_002C,pFVar43->field_0030);
      wVar4 = (message->arg0).words.low;
      if (wVar4 == 1) {
        local_c = (FSGSTy_field_1EAAElement *)0x2;
      }
      else {
        local_c = (FSGSTy_field_1EAAElement *)((-(uint)(wVar4 != 0) & 2) + 1);
      }
      if (message->id == MESS_FSGSTY_698A) {
        pcVar38_mg1F = (char *)&DAT_0080f33a;
      }
      else {
        pcVar38_mg1F = st::fn_006B0140((UINT)local_8,g_hINSTANCE_00807618);
      }
      st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,pcVar38_mg1F,-1,-1,(uint)local_c);
      wVar4 = (message->arg0).words.low;
      if (wVar4 == 0) {
        bVar35 = 0xd;
      }
      else {
        bVar35 = (-(wVar4 != 2) & 0x10U) - 2;
      }
      st::fn_006C7570((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                   (undefined4 *)pFVar43->field_002C,pFVar43->field_0030,4,bVar35);
      wVar4 = (message->arg0).words.low;
      if (wVar4 == 0) {
        bVar35 = 0xd;
      }
      else {
        bVar35 = (-(wVar4 != 2) & 0x10U) - 2;
      }
      st::fn_006C7570((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,2,2,
                   (undefined4 *)(pFVar43->field_002C + -4),st::machine_word_boundary_cast<int>(pFVar43->field_0030 + -4),4,bVar35);
LAB_005a754e:
      DVar25 = pFVar43->field_0030;
      DVar49 = pFVar43->field_002C;
      pBVar29 = (BITMAPINFO *)this_00->field_1E8E;
      iVar47 = pFVar43->field_0028;
LAB_005a89f6:
      st::fn_006B4680
                ((int *)g_dDXContext_0080759C,pFVar43->field_0024,iVar47,pBVar29,nullptr,0,0,
                 DVar49,DVar25,0x10000ff);
      break;
    case 0x6987:
      if ((this_00->field_1E8E != 0) && (this_00->field_1E9A != nullptr)) {
        dVar12 = (message->arg2).u32;
        st::fn_006B5F80((int *)g_ddxContext_008075A8,STField<int>(dVar12,0x24),STField<int>(dVar12,0x28),
                     STField<int>(dVar12,0x2C),STField<int>(dVar12,0x30));
        /* ST_CALLSITE[005A7928]: CALL 0x00402298; direct=00402298 PutDDXClip */
        st::fn_00402298(STField<int>(dVar12,0x24),STField<int>(dVar12,0x28),STField<int>(dVar12,0x24) + -0x1e9,
                   STField<int>(dVar12,0x28) + -0x5e,STField<uint>(dVar12,0x2C),
                   *(byte **)(dVar12 + 0x30),'\x01',this_00->field_1E9A);
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                     STField<int>(dVar12,0x2C),STField<int>(dVar12,0x30),0xff);
        if ((message->arg0).u32 != 0) {
          st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0,
                           *(int *)(this_00->field_1E8E + 4),0x19);
          st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,*(char **)(message->arg0).ptr,3,-1,5);
        }
        uVar3 = (message->arg1).words.low;
        if ((uVar3 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
          iVar47 = uVar3 + 3;
          st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1E8E,0,iVar47,4,iVar47,0x11,9,
                       0xd);
        }
        st::fn_006B4680
                  ((int *)g_dDXContext_0080759C,STField<int>(dVar12,0x24),STField<int>(dVar12,0x28),
                   (BITMAPINFO *)this_00->field_1E8E,nullptr,0,0,STField<DWORD>(dVar12,0x2C),
                   STField<DWORD>(dVar12,0x30),0x10000ff);
      }
      break;
    case MESS_SHARED_6980|MESS_SHARED_0008:
      if ((this_00->field_1E8E != 0) && (this_00->field_1E92 != nullptr)) {
        dVar12 = (message->arg2).u32;
        st::fn_006B5F80((int *)g_ddxContext_008075A8,STField<int>(dVar12,0x24),STField<int>(dVar12,0x28),
                     STField<int>(dVar12,0x2C),STField<int>(dVar12,0x30));
        /* ST_CALLSITE[005A7A5D]: CALL 0x00402298; direct=00402298 PutDDXClip */
        st::fn_00402298(STField<int>(dVar12,0x24),STField<int>(dVar12,0x28),
                   STField<int>(dVar12,0x24) -
                   ((-(uint)(this_00->array_00BC[0xc].field_01DF != '\t') & 0x177) + 0x22),
                   STField<int>(dVar12,0x28) + -0x5e,STField<uint>(dVar12,0x2C),
                   *(byte **)(dVar12 + 0x30),'\x01',this_00->field_1E92);
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                     STField<int>(dVar12,0x2C),STField<int>(dVar12,0x30),0xff);
        if ((message->arg0).u32 != 0) {
          st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,this_00->field_1E8E,0,0,0,
                           *(int *)(this_00->field_1E8E + 4),0x19);
          st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,*(char **)(message->arg0).ptr,3,-1,5);
        }
        uVar3 = (message->arg1).words.low;
        if ((uVar3 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
          iVar47 = uVar3 + 3;
          st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1E8E,0,iVar47,3,iVar47,0x11,9,
                       0xd);
        }
        st::fn_006B4680
                  ((int *)g_dDXContext_0080759C,STField<int>(dVar12,0x24),STField<int>(dVar12,0x28),
                   (BITMAPINFO *)this_00->field_1E8E,nullptr,0,0,STField<DWORD>(dVar12,0x2C),
                   STField<DWORD>(dVar12,0x30),0x10000ff);
      }
      break;
    case 0x698b:
      piVar17 = static_cast<int *>((message->arg1).ptr);
      iVar47 = *piVar17;
      iVar48 = iVar47 + -0xb4;
      local_3c = st::machine_word_boundary_cast<uint>(piVar17[1] - 0xaa);
      local_38 = (undefined4 *)piVar17[2];
      local_34 = piVar17[3];
      local_40 = iVar48;
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,iVar48,local_3c,
                   (int)local_38,local_34,0xff);
      wVar4 = (message->arg0).words.low;
      if (wVar4 == 0) {
        bVar35 = 0xd;
      }
      else {
        bVar35 = (-(wVar4 != 2) & 0x10U) - 2;
      }
      st::fn_006C7570((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,iVar48,local_3c,local_38,
                   local_34,4,bVar35);
      wVar4 = (message->arg0).words.low;
      if (wVar4 == 0) {
        bVar35 = 0xd;
      }
      else {
        bVar35 = (-(wVar4 != 2) & 0x10U) - 2;
      }
      st::fn_006C7570((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,iVar47 + -0xb2,
                   local_3c + 2,local_38 + -1,local_34 + -4,4,bVar35);
      uVar36 = this_00->field_1EC2;
      if (uVar36 < 0x502) {
        if (uVar36 == 0x501) {
          local_8 = (uint *)0x2342;
        }
        else if (uVar36 == 0x200) {
          local_8 = (uint *)0x235a;
        }
        else {
          if (uVar36 != 0x400) goto LAB_005a7c26;
          local_8 = (uint *)0x235b;
        }
      }
      else if (uVar36 == 0x502) {
        local_8 = (uint *)0x235d;
      }
      else {
LAB_005a7c26:
        local_8 = (uint *)0x2341;
      }
      st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,(int)this_00->field_1AC0,0,iVar48,
                       local_3c,(int)local_38,local_34);
      wVar4 = (message->arg0).words.low;
      if (wVar4 == 1) {
        uVar36 = 2;
      }
      else {
        uVar36 = (-(uint)(wVar4 != 0) & 2) + 1;
      }
      iVar48 = -1;
      iVar47 = -1;
      pcVar38_mg1A = st::fn_006B0140((UINT)local_8,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,pcVar38_mg1A,iVar47,iVar48,uVar36);
LAB_005a7c92:
      st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
      break;
    case 0x698c:
      st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,(message->arg1).i32,0,0,0,0,0);
      pFVar9 = this_00->field_1FB3;
      uVar36 = (uint)(message->arg0).words.low;
      if (uVar36 < pFVar9->count) {
        element_1fb3 = DArrayAt<FSGSTy_field_1FB3Element>(pFVar9, uVar36);
      }
      else {
        element_1fb3 = nullptr;
      }
      st::fn_007119C0(this_00->array_00BC[0xc].field_01F3,(char *)element_1fb3,-1,-1,
                     3 - ((message->arg0).words.high != 1));
      if ((message->arg0).words.high == 1) {
        pRVar18 = static_cast<RecoveredSourceFamily_dibcopy *>((message->arg1).ptr);
        st::fn_006B5EE0(pRVar18,0,0,0,pRVar18->field_0004,pRVar18->field_0008,0xf,0xd);
      }
    }
    goto cf_common_exit_005A8CA7;
  }
  if (SVar5 == MESS_FSGSTY_6949) {
    /* ST_CALLSITE[005A6268]: CALL dword ptr [EDX + 0x8] */
    this_00->CloseButtons();
    this_00->array_00BC[0xc].field_01E1 = 9;
    pSVar8 = this_00->array_00BC[0xc].field_01DB;
    if (pSVar8->field_02E6 == nullptr) goto cf_common_exit_005A8CA7;
    puVar22 = local_2ac;
    for (iVar47 = 6; iVar47 != 0; iVar47 = iVar47 + -1) {
      *puVar22 = 0xffffffff;
      puVar22 = puVar22 + 1;
    }
    *(undefined2 *)puVar22 = 0xffff;
    local_cc = 0;
    local_c8 = 0;
    local_d0 = 0x10101;
    local_c4 = 0;
    /* ST_CALLSITE[005A62D2]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
    st::fn_00404B51(pSVar8->field_02E6,(int)local_2ac);
    puVar22 = &local_d0;
cf_common_exit_005A7F3B:
    st::fn_00401A9B((this_00->array_00BC[0xc].field_01DB)->field_02E6,puVar22);
    goto cf_common_exit_005A8CA7;
  }
  if (MESS_ID_MSGOK < SVar5) {
    if (SVar5 < 0x6907) {
      if (SVar5 == MESS_FSGSTY_6906) {
        if (g_cursorClass_00802A30->field_0493 == CASE_5) goto cf_common_exit_005A8CA7;
        local_c = (FSGSTy_field_1EAAElement *)(message->arg2).u32;
        this_00->field_1F43 = 0x6506;
        uVar23 = *(undefined4 *)&local_c->field_0x8;
        this_00->field_1F63 = 0x698c;
        this_00->field_1F4B = uVar23;
        this_00->field_1FB3->count = 0;
        this_00->field_20BB = 1;
        pcVar38_mg21 = st::fn_006B0140(0x25b4,g_hINSTANCE_00807618);
        uVar36 = 0xffffffff;
        do {
          pcVar39 = pcVar38_mg21;
          if (uVar36 == 0) break;
          uVar36 = uVar36 - 1;
          pcVar39 = pcVar38_mg21 + 1;
          cVar2 = *pcVar38_mg21;
          pcVar38_mg21 = pcVar39;
        } while (cVar2 != '\0');
        uVar36 = ~uVar36;
        pcVar39 = pcVar39 + -uVar36;
        pcVar24 = (char *)&this_00->field_0x1fb7;
        memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
        uVar32 = 0;
        st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
        this_00->field_20BB = 2;
        pcVar38_mg23 = st::fn_006B0140(0x25b5,g_hINSTANCE_00807618);
        uVar36 = 0xffffffff;
        do {
          pcVar39 = pcVar38_mg23;
          if (uVar36 == 0) break;
          uVar36 = uVar36 - 1;
          pcVar39 = pcVar38_mg23 + 1;
          cVar2 = *pcVar38_mg23;
          pcVar38_mg23 = pcVar39;
        } while (cVar2 != '\0');
        uVar36 = ~uVar36;
        pcVar39 = pcVar39 + -uVar36;
        pcVar24 = (char *)&this_00->field_0x1fb7;
        memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
        uVar32 = 0;
        st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
        pFVar9 = this_00->field_1FB3;
        this_00->field_1F7B = pFVar9->count;
        uVar36 = 0;
        this_00->field_1F73 = 0;
        if (pFVar9->count != 0) {
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            if (DAT_00803140 == *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar36))
            {
              this_00->field_1F73 = uVar36;
              break;
            }
            uVar36 = uVar36 + 1;
          } while (uVar36 < pFVar9->count);
        }
      }
      else {
        if (SVar5 < MESS_FSGSTY_6903) {
          if (SVar5 == MESS_MAINMENUTY_6902) {
            pDVar31 = this_00->field_1AE8;
            dVar12 = pDVar31->elementSize;
            goto joined_r0x005a8b8f;
          }
          if (MESS_SHARED_6900 < SVar5) {
            if ((SVar5 == MESS_FSGSTY_6901) && (this_00->array_00BC[0xc].field_01E0 == '\0')) {
              this_00->field_002D = 0x26;
              puVar1 = &this_00->field_0x1d;
              st::fn_006E6080(this_00,2,this_00->field_1B20,(undefined4 *)puVar1);
              pFVar11 = this_00->field_1EA6;
              if ((uint)*(ushort *)&this_00->field_0x31 < pFVar11->count) {
                element_1ea6_4 = DArrayAt<FSGSTy_field_1EA6Element>(pFVar11, (uint)*(ushort *)&this_00->field_0x31);
              }
              else {
                element_1ea6_4 = nullptr;
              }
              if (element_1ea6_4 != nullptr) {
                this_00->field_002D = 0x32;
                st::fn_006E6080(this_00,2,this_00->field_1B10,(undefined4 *)puVar1);
                iVar47 = *(int *)&this_00->field_0x31;
                if (iVar47 != 0) {
                  if (STField<int>(iVar47,0x8) < 1) {
                    uVar23 = 0;
                  }
                  else {
                    uVar23 = **(undefined4 **)(iVar47 + 0x14);
                  }
                  pcVar38_mg26 = st::fn_006B0140(0x2568,g_hINSTANCE_00807618);
                  /* ST_CALLSITE[005A572C]: CALL dword ptr [0x0085bde8] */
                  st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s %s %s"),pcVar38_mg26,element_1ea6_4,uVar23);
                  /* ST_CALLSITE[005A573F]: CALL dword ptr [0x0085c064] */
                  st::external_00000107
                            ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a);
                  st::fn_006B6020(this_00->field_1EA2,0,&CHAR_00h_008016a0);
                  this_00->field_002D = 0x33;
                  *(DArrayTy **)&this_00->field_0x31 = this_00->field_1EA2;
                  st::fn_006E6080(this_00,2,this_00->field_1B10,(undefined4 *)puVar1);
                }
              }
            }
            goto cf_common_exit_005A8CA7;
          }
          if (SVar5 == MESS_SHARED_6900) {
            DAT_0080735f = DAT_0080735f == '\0';
            this_00->field_002D = 5;
            st::fn_006E6080(this_00,2,this_00->field_1AD0,(undefined4 *)&this_00->field_0x1d);
            goto cf_common_exit_005A8CA7;
          }
          if (SVar5 != MESS_FSGSTY_6506) {
            if (SVar5 == MESS_MMSGTY_68FF) {
              if ((message->arg0).u32 == 0) {
                if (this_00->field_1AB7 == message->unknown_00) {
                  this_00->field_1AB7 = 0;
                }
              }
              else if ((message->arg0).u32 == 1) {
                this_00->field_1AB7 = message->unknown_00;
              }
            }
            goto cf_common_exit_005A8CA7;
          }
          pFVar9 = this_00->field_1FB3;
          uVar36 = (message->arg0).u32;
          if (pFVar9->count <= uVar36) goto cf_common_exit_005A8CA7;
          if (this_00->array_00BC[0xc].field_01DF == '\t') {
            if ((message->arg1).u32 == this_00->field_1EB6) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              DAT_00803140 = *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar36);
              /* ST_CALLSITE[005A541B]: CALL dword ptr [0x0085c024] */
              st::external_000000F7
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pCVar38 = g_cursorClass_00802A30;
joined_r0x005a55e5:
              g_cursorClass_00802A30 = pCVar38;
              if (pCVar38 == nullptr) goto cf_common_exit_005A5634;
              pCVar38->field_0493 = CASE_5;
              pCVar38->field_0494 = 0xffff;
              /* ST_CALLSITE[005A5609]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
              st::fn_0040507E(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
              iVar47 = pCVar38->field_00C9;
              iVar48 = pCVar38->field_00C5;
            }
            else {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              DAT_00803144 = *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar36);
              /* ST_CALLSITE[005A545C]: CALL dword ptr [0x0085c024] */
              st::external_000000F7
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pCVar38 = g_cursorClass_00802A30;
              if (g_cursorClass_00802A30 == nullptr) goto cf_common_exit_005A5634;
              iVar47 = g_cursorClass_00802A30->field_00C9;
              iVar48 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = CASE_5;
              pCVar38->field_0494 = 0xffff;
              /* ST_CALLSITE[005A5492]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
              st::fn_0040507E(pCVar38,CASE_0,iVar48,iVar47);
              iVar47 = pCVar38->field_00C9;
              iVar48 = pCVar38->field_00C5;
            }
LAB_005a561c:
            /* ST_CALLSITE[005A561E]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
            st::fn_0040241E(pCVar38,iVar48,iVar47);
            pCVar38->field_00D2 = 0;
            pCVar38->field_04DF = -1;
          }
          else {
            if ((message->arg1).u32 != this_00->field_1EB6) {
              iVar47 = st::machine_word_boundary_cast<int>(pFVar9->elementSize * uVar36);
              pFVar10 = pFVar9->data;
              this_00->field_1EC6 = *(undefined4 *)(&pFVar10->field_0x104 + iVar47);
              this_00->field_1ECA = *(uint *)(&pFVar10->field_0x108 + iVar47);
              /* ST_CALLSITE[005A55CB]: CALL dword ptr [0x0085c01c] */
              st::external_000000F5
                        ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,nullptr);
              /* ST_CALLSITE[005A55D1]: CALL dword ptr [0x0085bedc] */
              DVar25 = st::external_000000DA();
              this_00->array_00BC[0xc].field_01E3 = DVar25;
              pCVar38 = g_cursorClass_00802A30;
              goto joined_r0x005a55e5;
            }
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            this_00->field_1EC2 =
                 *(uint *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar36);
            if (this_00->array_00BC[0xc].field_01DF == '\b') {
              uVar36 = this_00->field_1EC2;
              memset(local_24c, 0, 0x20); /* compiler bulk-zero initialization */
              this_00->field_1EC6 = 0xffffffff;
              local_238 = (uint)(uVar36 == 0x100);
              this_00->field_1ECA = 0;
              local_23c = 0x20;
              if (this_00->field_1EBA != 0) {
                st::fn_006E6080(this_00,2,this_00->field_1EBA,local_24c);
              }
              /* ST_CALLSITE[005A5547]: CALL dword ptr [0x0085c01c] */
              st::external_000000F5
                        ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,nullptr);
              /* ST_CALLSITE[005A554D]: CALL dword ptr [0x0085bedc] */
              DVar25 = st::external_000000DA();
              this_00->array_00BC[0xc].field_01E3 = DVar25;
              pCVar38 = g_cursorClass_00802A30;
              if (g_cursorClass_00802A30 != nullptr) {
                iVar47 = g_cursorClass_00802A30->field_00C9;
                iVar48 = g_cursorClass_00802A30->field_00C5;
                g_cursorClass_00802A30->field_0493 = CASE_5;
                pCVar38->field_0494 = 0xffff;
                /* ST_CALLSITE[005A5589]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
                st::fn_0040507E(pCVar38,CASE_0,iVar48,iVar47);
                iVar47 = pCVar38->field_00C9;
                iVar48 = pCVar38->field_00C5;
                goto LAB_005a561c;
              }
            }
          }
cf_common_exit_005A5634:
          this_00->field_002D = 5;
          st::fn_006E6080(this_00,2,static_cast<undefined4>((message->arg1).u32),(undefined4 *)&this_00->field_0x1d);
          goto cf_common_exit_005A8CA7;
        }
        if (SVar5 == MESS_FSGSTY_6903) {
          if (g_cursorClass_00802A30 != nullptr) {
            iVar47 = g_cursorClass_00802A30->field_00C9;
            iVar48 = g_cursorClass_00802A30->field_00C5;
            g_cursorClass_00802A30->field_0493 = CASE_5;
            pCVar38->field_0494 = 0xffff;
            /* ST_CALLSITE[005A5BBF]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
            st::fn_0040507E(pCVar38,CASE_0,iVar48,iVar47);
            /* ST_CALLSITE[005A5BD4]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
            st::fn_0040241E(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
            pCVar38->field_00D2 = 0;
            pCVar38->field_04DF = -1;
          }
          if (this_00->array_00BC[0xc].field_01DF == '\x06') {
            /* ST_CALLSITE[005A5BF8]: CALL dword ptr [0x0085c00c] */
            st::external_000000F1((CFsgsConnection *)&DAT_00802a90);
            this_00->array_00BC[0xc].field_01E0 = 1;
          }
          if (this_00->array_00BC[0xc].field_01DF == '\b') {
            /* ST_CALLSITE[005A5C1F]: CALL dword ptr [0x0085c01c] */
            st::external_000000F5
                      ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,nullptr);
            /* ST_CALLSITE[005A5C25]: CALL dword ptr [0x0085bedc] */
            DVar25 = st::external_000000DA();
            this_00->array_00BC[0xc].field_01E3 = DVar25;
          }
          goto cf_common_exit_005A8CA7;
        }
        if (SVar5 == MESS_FSGSTY_6904) {
          local_c = (FSGSTy_field_1EAAElement *)(message->arg2).u32;
          this_00->field_1F43 = 0x6506;
          uVar23 = *(undefined4 *)&local_c->field_0x8;
          this_00->field_1F63 = 0x698c;
          this_00->field_1F4B = uVar23;
          this_00->field_1FB3->count = 0;
          if (this_00->array_00BC[0xc].field_01DF == '\b') {
            this_00->field_20BB = 0;
            pcVar38_mg27 = st::fn_006B0140(0x235c,g_hINSTANCE_00807618);
            uVar36 = 0xffffffff;
            do {
              pcVar39 = pcVar38_mg27;
              if (uVar36 == 0) break;
              uVar36 = uVar36 - 1;
              pcVar39 = pcVar38_mg27 + 1;
              cVar2 = *pcVar38_mg27;
              pcVar38_mg27 = pcVar39;
            } while (cVar2 != '\0');
            uVar36 = ~uVar36;
            pcVar39 = pcVar39 + -uVar36;
            pcVar24 = (char *)&this_00->field_0x1fb7;
            memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
            uVar32 = 0;
            st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          }
          this_00->field_20BB = 0x100;
          pcVar38_mg29 = st::fn_006B0140(0x2341,g_hINSTANCE_00807618);
          uVar36 = 0xffffffff;
          do {
            pcVar39 = pcVar38_mg29;
            if (uVar36 == 0) break;
            uVar36 = uVar36 - 1;
            pcVar39 = pcVar38_mg29 + 1;
            cVar2 = *pcVar38_mg29;
            pcVar38_mg29 = pcVar39;
          } while (cVar2 != '\0');
          uVar36 = ~uVar36;
          pcVar39 = pcVar39 + -uVar36;
          pcVar24 = (char *)&this_00->field_0x1fb7;
          memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          this_00->field_20BB = 0x501;
          pcVar38_mg2B = st::fn_006B0140(0x2342,g_hINSTANCE_00807618);
          uVar36 = 0xffffffff;
          do {
            pcVar39 = pcVar38_mg2B;
            if (uVar36 == 0) break;
            uVar36 = uVar36 - 1;
            pcVar39 = pcVar38_mg2B + 1;
            cVar2 = *pcVar38_mg2B;
            pcVar38_mg2B = pcVar39;
          } while (cVar2 != '\0');
          uVar36 = ~uVar36;
          pcVar39 = pcVar39 + -uVar36;
          pcVar24 = (char *)&this_00->field_0x1fb7;
          memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          this_00->field_20BB = 0x200;
          pcVar38_mg2D = st::fn_006B0140(0x235a,g_hINSTANCE_00807618);
          uVar36 = 0xffffffff;
          do {
            pcVar39 = pcVar38_mg2D;
            if (uVar36 == 0) break;
            uVar36 = uVar36 - 1;
            pcVar39 = pcVar38_mg2D + 1;
            cVar2 = *pcVar38_mg2D;
            pcVar38_mg2D = pcVar39;
          } while (cVar2 != '\0');
          uVar36 = ~uVar36;
          pcVar39 = pcVar39 + -uVar36;
          pcVar24 = (char *)&this_00->field_0x1fb7;
          memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          this_00->field_20BB = 0x400;
          pcVar38_mg2F = st::fn_006B0140(0x235b,g_hINSTANCE_00807618);
          uVar36 = 0xffffffff;
          do {
            pcVar39 = pcVar38_mg2F;
            if (uVar36 == 0) break;
            uVar36 = uVar36 - 1;
            pcVar39 = pcVar38_mg2F + 1;
            cVar2 = *pcVar38_mg2F;
            pcVar38_mg2F = pcVar39;
          } while (cVar2 != '\0');
          uVar36 = ~uVar36;
          pcVar39 = pcVar39 + -uVar36;
          pcVar24 = (char *)&this_00->field_0x1fb7;
          memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          this_00->field_20BB = 0x502;
          pcVar38_mg31 = st::fn_006B0140(0x235d,g_hINSTANCE_00807618);
          uVar36 = 0xffffffff;
          do {
            pcVar39 = pcVar38_mg31;
            if (uVar36 == 0) break;
            uVar36 = uVar36 - 1;
            pcVar39 = pcVar38_mg31 + 1;
            cVar2 = *pcVar38_mg31;
            pcVar38_mg31 = pcVar39;
          } while (cVar2 != '\0');
          uVar36 = ~uVar36;
          pcVar39 = pcVar39 + -uVar36;
          pcVar24 = (char *)&this_00->field_0x1fb7;
          memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          pFVar9 = this_00->field_1FB3;
          this_00->field_1F7B = pFVar9->count;
          uVar36 = 0;
          this_00->field_1F73 = 0;
          if (pFVar9->count != 0) {
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              if (this_00->field_1EC2 ==
                  *(uint *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar36)) {
                this_00->field_1F73 = uVar36;
                break;
              }
              uVar36 = uVar36 + 1;
            } while (uVar36 < pFVar9->count);
          }
        }
        else {
          if (SVar5 != MESS_FSGSTY_6905) goto cf_common_exit_005A8CA7;
          local_c = (FSGSTy_field_1EAAElement *)(message->arg2).u32;
          this_00->field_1F43 = 0x6506;
          uVar23 = *(undefined4 *)&local_c->field_0x8;
          this_00->field_1F63 = 0x698c;
          this_00->field_1F4B = uVar23;
          this_00->field_1FB3->count = 0;
          this_00->field_20BB = 0xffffffff;
          pcVar38_mg33 = st::fn_006B0140(0x235c,g_hINSTANCE_00807618);
          uVar36 = 0xffffffff;
          do {
            pcVar39 = pcVar38_mg33;
            if (uVar36 == 0) break;
            uVar36 = uVar36 - 1;
            pcVar39 = pcVar38_mg33 + 1;
            cVar2 = *pcVar38_mg33;
            pcVar38_mg33 = pcVar39;
          } while (cVar2 != '\0');
          uVar36 = ~uVar36;
          pcVar39 = pcVar39 + -uVar36;
          pcVar24 = (char *)&this_00->field_0x1fb7;
          memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          this_00->field_20BF = 0;
          st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          local_8 = nullptr;
          if (PTR_0080c502->count != 0) {
            pDVar25 = PTR_0080c502;
            if (PTR_0080c502->count == 0) {
              pcVar39 = nullptr;
              goto LAB_005a5859;
            }
            do {
              pcVar39 = DArrayAt<char>(pDVar25, (int)local_8);
LAB_005a5859:
              if (pcVar39 != nullptr) {
                this_00->field_20BB = *(undefined4 *)(pcVar39 + 0x90);
                uVar36 = 0xffffffff;
                do {
                  pcVar24 = pcVar39;
                  if (uVar36 == 0) break;
                  uVar36 = uVar36 - 1;
                  pcVar24 = pcVar39 + 1;
                  cVar2 = *pcVar39;
                  pcVar39 = pcVar24;
                } while (cVar2 != '\0');
                uVar36 = ~uVar36;
                pcVar39 = pcVar24 + -uVar36;
                pcVar24 = (char *)&this_00->field_0x1fb7;
                memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
                uVar32 = 0;
                this_00->field_20BF = st::machine_word_boundary_cast<undefined4>(local_8);
                st::fn_006AE1C0
                          ((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
                pDVar25 = PTR_0080c502;
              }
              local_8 = (uint *)((int)local_8 + 1);
            } while (local_8 < (undefined1 *)pDVar25->count);
          }
          pFVar9 = this_00->field_1FB3;
          uVar36 = 0;
          dVar12 = pFVar9->count;
          this_00->field_1F73 = 0;
          this_00->field_1F7B = dVar12;
          if (pFVar9->count != 0) {
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              if (this_00->field_1EC6 ==
                  *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar36)) {
                this_00->field_1F73 = uVar36;
                break;
              }
              uVar36 = uVar36 + 1;
            } while (uVar36 < pFVar9->count);
          }
        }
      }
      pcVar13 = this_00->array_00BC[0xc].field_01F3;
      this_00->field_1F97 = local_c->field_0024;
      this_00->field_1F9F = st::machine_word_boundary_cast<undefined4>(local_c->field_002C + 10);
      this_00->field_1F9B = local_c->field_0030 + local_c->field_0028;
      iVar47 = pcVar13->field_00A0;
joined_r0x005a5b89:
      if (iVar47 != 0) {
        st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar13);
      }
      this_00->field_1F77 = *(undefined4 *)&pcVar13->field_0x8a;
      /* ST_CALLSITE[005A5FBA]: CALL dword ptr [EAX + 0x8] */
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,0x100ef,nullptr,nullptr,
                 st::machine_word_boundary_cast<undefined4>(&this_00->field_0x1f33),0);
      goto cf_common_exit_005A8CA7;
    }
    switch(SVar5) {
    case 0x6907:
      if (g_cursorClass_00802A30->field_0493 == CASE_5) break;
      local_c = (FSGSTy_field_1EAAElement *)(message->arg2).u32;
      this_00->field_1F43 = 0x6506;
      uVar23 = *(undefined4 *)&local_c->field_0x8;
      this_00->field_1F63 = 0x698c;
      this_00->field_1F4B = uVar23;
      this_00->field_1FB3->count = 0;
      this_00->field_20BB = 0;
      pcVar38_mg3B = st::fn_006B0140(0x25bf,g_hINSTANCE_00807618);
      uVar36 = 0xffffffff;
      do {
        pcVar39 = pcVar38_mg3B;
        if (uVar36 == 0) break;
        uVar36 = uVar36 - 1;
        pcVar39 = pcVar38_mg3B + 1;
        cVar2 = *pcVar38_mg3B;
        pcVar38_mg3B = pcVar39;
      } while (cVar2 != '\0');
      uVar36 = ~uVar36;
      pcVar39 = pcVar39 + -uVar36;
      pcVar24 = (char *)&this_00->field_0x1fb7;
      memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
      uVar32 = 0;
      st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
      this_00->field_20BB = 1;
      pcVar38_mg3D = st::fn_006B0140(0x25c0,g_hINSTANCE_00807618);
      uVar36 = 0xffffffff;
      do {
        pcVar39 = pcVar38_mg3D;
        if (uVar36 == 0) break;
        uVar36 = uVar36 - 1;
        pcVar39 = pcVar38_mg3D + 1;
        cVar2 = *pcVar38_mg3D;
        pcVar38_mg3D = pcVar39;
      } while (cVar2 != '\0');
      uVar36 = ~uVar36;
      pcVar39 = pcVar39 + -uVar36;
      pcVar24 = (char *)&this_00->field_0x1fb7;
      memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
      uVar32 = 0;
      st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
      this_00->field_20BB = 2;
      pcVar38_mg3F = st::fn_006B0140(0x25c1,g_hINSTANCE_00807618);
      uVar36 = 0xffffffff;
      do {
        pcVar39 = pcVar38_mg3F;
        if (uVar36 == 0) break;
        uVar36 = uVar36 - 1;
        pcVar39 = pcVar38_mg3F + 1;
        cVar2 = *pcVar38_mg3F;
        pcVar38_mg3F = pcVar39;
      } while (cVar2 != '\0');
      uVar36 = ~uVar36;
      pcVar39 = pcVar39 + -uVar36;
      pcVar24 = (char *)&this_00->field_0x1fb7;
      memmove(pcVar24, pcVar39, uVar36); /* compiler REP MOVS byte copy */
      uVar32 = 0;
      st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
      pFVar9 = this_00->field_1FB3;
      this_00->field_1F7B = pFVar9->count;
      uVar36 = 0;
      this_00->field_1F73 = 0;
      if (pFVar9->count != 0) {
        do {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          if (DAT_00803144 == *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar36)) {
            this_00->field_1F73 = uVar36;
            break;
          }
          uVar36 = uVar36 + 1;
        } while (uVar36 < pFVar9->count);
      }
      pcVar13 = this_00->array_00BC[0xc].field_01F3;
      this_00->field_1F97 = local_c->field_0024;
      this_00->field_1F9F = st::machine_word_boundary_cast<undefined4>(local_c->field_002C + 10);
      this_00->field_1F9B = local_c->field_0030 + local_c->field_0028;
      iVar47 = pcVar13->field_00A0;
      goto joined_r0x005a5b89;
    case MESS_SHARED_6900|MESS_SHARED_0008:
      if (g_cursorClass_00802A30->field_0493 == CASE_5) break;
      bVar45 = false;
      if (DAT_00803148 != 0) {
        if (DAT_00803148 < 0x10) {
          DAT_00803148 = 0;
        }
        else {
          DAT_00803148 = DAT_00803148 - 0xf;
        }
        bVar45 = true;
      }
      if ((!bVar45) ||
         /* ST_CALLSITE[005A600D]: CALL dword ptr [0x0085c024] */
         (st::external_000000F7
                    ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf),
         pCVar38 = g_cursorClass_00802A30, g_cursorClass_00802A30 == nullptr)) break;
      iVar47 = g_cursorClass_00802A30->field_00C9;
      iVar48 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_5;
      pCVar38->field_0494 = 0xffff;
      /* ST_CALLSITE[005A6042]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      st::fn_0040507E(pCVar38,CASE_0,iVar48,iVar47);
      iVar47 = pCVar38->field_00C9;
      iVar48 = pCVar38->field_00C5;
      goto cf_common_exit_005A52AA;
    case MESS_SHARED_6900|MESS_CURSORCLASSTY_0009:
      if ((g_cursorClass_00802A30->field_0493 == CASE_5) || (0xf422f < DAT_00803148)) break;
      DAT_00803148 = DAT_00803148 + 0xf;
      /* ST_CALLSITE[005A609F]: CALL dword ptr [0x0085c024] */
      st::external_000000F7
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
      pCVar38 = g_cursorClass_00802A30;
      if (g_cursorClass_00802A30 == nullptr) break;
      iVar47 = g_cursorClass_00802A30->field_00C9;
      iVar48 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_5;
      pCVar38->field_0494 = 0xffff;
      /* ST_CALLSITE[005A60D4]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      st::fn_0040507E(pCVar38,CASE_0,iVar48,iVar47);
      iVar47 = pCVar38->field_00C9;
      iVar48 = pCVar38->field_00C5;
cf_common_exit_005A52AA:
      /* ST_CALLSITE[005A52AC]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      st::fn_0040241E(pCVar38,iVar48,iVar47);
      pCVar38->field_00D2 = 0;
      pCVar38->field_04DF = -1;
      break;
    case MESS_SHARED_6900|MESS_SYSTEMCLASSTY_000A:
      if ((g_cursorClass_00802A30->field_0493 == CASE_5) ||
         (pDVar31 = this_00->field_1AE8, pDVar31 == nullptr)) break;
      if (0 < (int)pDVar31->elementSize) {
        pcVar39 = *(char **)pDVar31->growCapacity;
      }
      iVar47 = -1;
      do {
        if (iVar47 == 0) break;
        iVar47 = iVar47 + -1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar39 + 1;
      } while (cVar2 != '\0');
      if (iVar47 == -2) break;
      if ((int)pDVar31->elementSize < 1) {
        pcVar39 = nullptr;
      }
      else {
        pcVar39 = *(char **)pDVar31->growCapacity;
      }
      /* ST_CALLSITE[005A6145]: CALL dword ptr [0x0085c000] */
      st::external_000000EE
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,pcVar39,0xf);
      goto LAB_005a6e50;
    case 0x6913:
    case 0x6914:
    case 0x6915:
    case 0x6916:
    case 0x6917:
    case 0x6918:
    case 0x6919:
    case 0x691a:
    case 0x691b:
    case 0x691c:
    case 0x691d:
    case 0x691e:
    case 0x691f:
    case 0x6920:
    case 0x6921:
      bVar35 = (char)message->id - 0x13;
      local_c = (FSGSTy_field_1EAAElement *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar35));
      if ((this_00->field_1EE3 <= (uint)bVar35) || (this_00->field_1EDB == nullptr)) break;
      iVar48 = (uint)bVar35 * 0x24;
      iVar47 = -1;
      pcVar39 = (char *)(iVar48 + 0x14 + (int)this_00->field_1EDB);
      do {
        if (iVar47 == 0) break;
        iVar47 = iVar47 + -1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar39 + 1;
      } while (cVar2 != '\0');
      if (iVar47 == -2) break;
      if (this_00->field_1B0C != nullptr) {
        st::fn_006AB060(&this_00->field_1B0C);
      }
      uVar36 = 0xffffffff;
      pcVar39 = (char *)(iVar48 + 0x14 + (int)this_00->field_1EDB);
      do {
        if (uVar36 == 0) break;
        uVar36 = uVar36 - 1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar39 + 1;
      } while (cVar2 != '\0');
      pbVar41 = st::pointer_boundary_cast<byte *>(st::fn_006AAC70(~uVar36));
      this_00->field_1B0C = pbVar41;
      uVar36 = 0xffffffff;
      pcVar39 = (char *)(iVar48 + 0x14 + (int)this_00->field_1EDB);
      do {
        pcVar24 = pcVar39;
        if (uVar36 == 0) break;
        uVar36 = uVar36 - 1;
        pcVar24 = pcVar39 + 1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar24;
      } while (cVar2 != '\0');
      uVar36 = ~uVar36;
      pbVar37 = (byte *)(pcVar24 + -uVar36);
      memmove(pbVar41, pbVar37, uVar36); /* compiler REP MOVS byte copy */
      uVar32 = 0;
      /* ST_CALLSITE[005A61F9]: CALL dword ptr [EDX + 0x8] */
      this_00->CloseButtons();
      this_00->array_00BC[0xc].field_01E1 = 10;
      this_00->field_1ED2 = 9;
      pSVar8 = this_00->array_00BC[0xc].field_01DB;
      if (pSVar8->field_02E6 == nullptr) break;
      puVar22 = local_338;
      for (iVar47 = 6; iVar47 != 0; iVar47 = iVar47 + -1) {
        *puVar22 = 0xffffffff;
        puVar22 = puVar22 + 1;
      }
      *(undefined2 *)puVar22 = 0xffff;
      local_6c = 0;
      local_68 = 0;
      local_70 = 0x10101;
      local_64 = 0;
      /* ST_CALLSITE[005A6257]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
      st::fn_00404B51(pSVar8->field_02E6,(int)local_338);
      puVar22 = &local_70;
      goto cf_common_exit_005A7F3B;
    case MESS_PRIVIDERTY_693F:
      /* ST_CALLSITE[005A5D96]: CALL 0x00401ee2; direct=00401EE2 FSGSTy::sub_0059B820 */
      st::fn_00401EE2(this_00);
      break;
    case MESS_SHARED_6940:
      /* ST_CALLSITE[005A5D8A]: CALL 0x004024d7; direct=004024D7 FSGSTy::sub_0059BE50 */
      st::fn_004024D7(this_00);
      break;
    case MESS_FSGSTY_6941:
      st::fn_004036C0(this_00,0x6105,0,1);
      this_00->array_00BC[0xc].field_01E1 = 0;
      /* ST_CALLSITE[005A5DBB]: CALL dword ptr [0x0085bffc] */
      st::external_000000ED((CFsgsConnection *)&DAT_00802a90);
      /* ST_CALLSITE[005A5DC5]: CALL dword ptr [EDX + 0x8] */
      this_00->CloseButtons();
      pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
      if (pMVar33 != nullptr) {
        /* ST_CALLSITE[005A5DE1]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
        st::fn_00401FA5(pMVar33,1,0,1);
      }
    }
    goto cf_common_exit_005A8CA7;
  }
  if (SVar5 == MESS_ID_MSGOK) {
    cVar2 = this_00->array_00BC[0xc].field_01DF;
    if (cVar2 == '\x03') {
      /* ST_CALLSITE[005A52F4]: CALL dword ptr [EAX + 0x8] */
      this_00->CloseButtons();
      this_00->array_00BC[0xc].field_01E1 = 4;
      pSVar8 = this_00->array_00BC[0xc].field_01DB;
      if (pSVar8->field_02E6 != nullptr) {
        local_dc = 0;
        local_d8 = 0;
        local_e0 = 0x101;
        local_d4 = 0;
        st::fn_00401A9B(pSVar8->field_02E6,&local_e0);
      }
      goto cf_common_exit_005A8CA7;
    }
    if (cVar2 == '\a') {
      if ((g_cursorClass_00802A30 != nullptr) &&
         (g_cursorClass_00802A30->field_0493 == CASE_5)) goto cf_common_exit_005A8CA7;
      st::fn_004034F4();
      local_290.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_290;
      local_EAX_3627 = st::fn_0072D7F0(local_290.jumpBuffer,0);
      this_00 = local_20;
      if (local_EAX_3627 == 0) {
        st::fn_006B6150((uint)DAT_00807362);
        if ((int)this_00->field_1AE8->elementSize < 1) {
          uVar23 = 0;
        }
        else {
          uVar23 = *(undefined4 *)this_00->field_1AE8->growCapacity;
        }
        st::fn_006B69B0((int *)&g_int_00811764,(int *)&DAT_007cd6f0,0,uVar23,0x20);
        g_currentExceptionFrame = local_290.previous;
      }
      else {
        g_currentExceptionFrame = local_290.previous;
        local_EAX_3743 =
             st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\fsgs_obj.cpp"),0xc08,0,local_EAX_3627,
                                st::mutable_c_string("%s"),"FSGSTy::GetMessage(MESS_ID_MSGOK, New Game)");
        if (local_EAX_3743 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
      if (g_int_00811764 == nullptr) {
        pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
        if (pMVar33 != nullptr) {
          /* ST_CALLSITE[005A52E6]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
          st::fn_00403FA8(pMVar33,0x2594,'\0',nullptr,nullptr,
                             nullptr,0,0);
        }
        goto cf_common_exit_005A8CA7;
      }
      st::fn_006B6160(local_6b8,(int)(g_int_00811764 + 6));
      local_698 = 0;
      if ((int)this_00->field_1AEC->elementSize < 1) {
        pcVar39 = nullptr;
      }
      else {
        pcVar39 = *(char **)this_00->field_1AEC->growCapacity;
      }
      if ((int)this_00->field_1AE8->elementSize < 1) {
        pcVar24 = nullptr;
      }
      else {
        pcVar24 = *(char **)this_00->field_1AE8->growCapacity;
      }
      /* ST_CALLSITE[005A5262]: CALL dword ptr [0x0085c03c] */
      st::external_000000FD
                ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,0x17e0,pcVar24,pcVar39,
                 local_6b8);
      pCVar38 = g_cursorClass_00802A30;
      if (g_cursorClass_00802A30 == nullptr) goto cf_common_exit_005A8CA7;
      iVar47 = g_cursorClass_00802A30->field_00C9;
      iVar48 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_5;
      pCVar38->field_0494 = 0xffff;
      /* ST_CALLSITE[005A5297]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      st::fn_0040507E(pCVar38,CASE_0,iVar48,iVar47);
      iVar47 = pCVar38->field_00C9;
      iVar48 = pCVar38->field_00C5;
      goto cf_common_exit_005A52AA;
    }
    if ((cVar2 != '\b') ||
       (((g_cursorClass_00802A30 != nullptr &&
         (g_cursorClass_00802A30->field_0493 == CASE_5)) ||
        (this_00->field_1EBE == nullptr)))) goto cf_common_exit_005A8CA7;
    if (g_cursorClass_00802A30 != nullptr) {
      g_cursorClass_00802A30->field_0493 = CASE_5;
      pCVar38->field_0494 = 0xffff;
      /* ST_CALLSITE[005A4E07]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      st::fn_0040507E(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
      /* ST_CALLSITE[005A4E1C]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      st::fn_0040241E(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
      pCVar38->field_00D2 = 0;
      pCVar38->field_04DF = -1;
    }
    this_00->field_002D = 0x26;
    st::fn_006E6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
    pCVar38 = g_cursorClass_00802A30;
    pFVar7 = this_00->field_1EBE;
    if (pFVar7->count <= *(uint *)&this_00->field_0x31) goto cf_common_exit_005A8CA7;
    local_15 = '\x01';
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
    local_8 = (uint *)((int)&pFVar7->data->field_0000 +
                      pFVar7->elementSize * *(uint *)&this_00->field_0x31);
    if (local_8 == nullptr) goto cf_common_exit_005A8CA7;
    pbVar41 = (byte *)(local_8 + 0x13);
    iVar47 = -1;
    pcVar39 = (char *)pbVar41;
    do {
      if (iVar47 == 0) break;
      iVar47 = iVar47 + -1;
      cVar2 = *pcVar39;
      pcVar39 = pcVar39 + 1;
    } while (cVar2 != '\0');
    if (iVar47 != -2) {
      if ((int)this_00->field_1AEC->elementSize < 1) {
        pbVar37 = nullptr;
      }
      else {
        pbVar37 = *(byte **)this_00->field_1AEC->growCapacity;
      }
      do {
        bVar35 = *pbVar41;
        bVar45 = bVar35 < *pbVar37;
        if (bVar35 != *pbVar37) {
LAB_005a4eca:
          iVar47 = (1 - (uint)bVar45) - (uint)(bVar45 != 0);
          goto LAB_005a4ecf;
        }
        if (bVar35 == 0) break;
        bVar35 = pbVar41[1];
        bVar45 = bVar35 < pbVar37[1];
        if (bVar35 != pbVar37[1]) goto LAB_005a4eca;
        pbVar41 = pbVar41 + 2;
        pbVar37 = pbVar37 + 2;
      } while (bVar35 != 0);
      iVar47 = 0;
LAB_005a4ecf:
      if (iVar47 != 0) {
        local_15 = '\0';
        g_cursorClass_00802A30->field_0493 = CASE_1;
        pCVar38->field_0494 = 0xffff;
        /* ST_CALLSITE[005A4EFF]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
        st::fn_0040507E(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
        /* ST_CALLSITE[005A4F14]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
        st::fn_0040241E(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
        pCVar38->field_00D2 = 0;
        pCVar38->field_04DF = -1;
        pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
        if (pMVar33 != nullptr) {
          /* ST_CALLSITE[005A4F4B]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
          st::fn_00403FA8(pMVar33,0x258b,'\0',nullptr,nullptr,
                             nullptr,0,0);
        }
      }
    }
    puVar34 = local_8;
    if (local_15 == '\0') goto cf_common_exit_005A8CA7;
    st::fn_004034F4();
    st::fn_006B61A0(local_22c,(byte *)(puVar34 + 0x17));
    local_3b4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_3b4;
    local_EAX_3145 = st::fn_0072D7F0(local_3b4.jumpBuffer,0);
    puVar34 = local_8;
    if (local_EAX_3145 == 0) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      st::fn_006B6A50
                ((int *)&g_int_00811764,(undefined4 *)&DAT_007cd6f0,
                 (in_addr)(((in_addr *)(local_8 + 4))->S_un).S_un_b,local_22c);
    }
    pCVar38 = g_cursorClass_00802A30;
    g_currentExceptionFrame = local_3b4.previous;
    if (g_cursorClass_00802A30 != nullptr) {
      iVar47 = g_cursorClass_00802A30->field_00C9;
      iVar48 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar38->field_0494 = 0xffff;
      /* ST_CALLSITE[005A5008]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      st::fn_0040507E(pCVar38,CASE_0,iVar48,iVar47);
      /* ST_CALLSITE[005A501D]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      st::fn_0040241E(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
      pCVar38->field_00D2 = 0;
      pCVar38->field_04DF = -1;
    }
    this_00 = local_20;
    if (g_int_00811764 == nullptr) {
      pMVar33 = (local_20->array_00BC[0xc].field_01DB)->field_02E6;
      if (pMVar33 != nullptr) {
        /* ST_CALLSITE[005A5131]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
        st::fn_00403FA8(pMVar33,0x2595,'\0',nullptr,nullptr,nullptr
                           ,0,0);
      }
      goto cf_common_exit_005A8CA7;
    }
    /* ST_CALLSITE[005A5049]: CALL dword ptr [0x0085c014] */
    st::external_000000F3((CFsgsConnection *)&DAT_00802a90,puVar34[1]);
    this_00 = local_20;
    DAT_0080877f = g_int_00811764[0xe];
    DAT_0080877e = 0;
    DAT_008087be = 0;
    local_20->array_00BC[0xc].field_01E1 = 0;
    DAT_008067a0 = 1;
    uVar36 = local_20->field_1EC2;
    if (uVar36 < 0x502) {
      if (uVar36 == 0x501) {
        DAT_00803400 = 5;
      }
      else if (uVar36 == 0x200) {
        DAT_00803400 = 0x14;
      }
      else {
        if (uVar36 != 0x400) goto LAB_005a50be;
        DAT_00803400 = 0x15;
      }
    }
    else if (uVar36 == 0x502) {
      DAT_00803400 = 0xc;
    }
    else {
LAB_005a50be:
      DAT_00803400 = 4;
    }
    st::fn_004036C0(local_20,0x6109,0,1);
    /* ST_CALLSITE[005A50E2]: CALL dword ptr [EDX + 0x8] */
    this_00->CloseButtons();
    pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
    if (pMVar33 != nullptr) {
      /* ST_CALLSITE[005A50FF]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
      st::fn_00401FA5(pMVar33,1,0,1);
    }
    goto cf_common_exit_005A8CA7;
  }
  if (SVar5 < (MESS_FSGSTY_6150|MESS_ID_CREATE)) {
    if (SVar5 != MESS_FSGSTY_6151) {
      if (SVar5 < (MESS_STARTSYSTEMTY_6104|MESS_ID_CREATE)) {
        if (SVar5 == MESS_SHARED_6105) {
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = message->id;
          this_00->field_0051 = static_cast<undefined4>((message->arg0).u32);
          this_00->field_0055 = static_cast<undefined4>((message->arg1).u32);
          st::fn_00404DB8((MTaskTy *)this_00);
        }
        else {
          switch(SVar5) {
          case MESS_ID_NONE:
            /* ST_CALLSITE[005A442A]: CALL 0x00404fc5; direct=00404FC5 FSGSTy::NoneFSGS */
            st::fn_00404FC5(this_00);
            break;
          case MESS_ID_CREATE:
            /* ST_CALLSITE[005A4405]: CALL 0x0040454d; direct=0040454D FSGSTy::InitFSGS */
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            st::fn_0040454D(this_00,*(byte *)((message->arg0).u32 + 0x14));
            break;
          case MESS_SHARED_0003:
            /* ST_CALLSITE[005A4411]: CALL 0x00401721; direct=00401721 FSGSTy::DoneFSGS */
            st::fn_00401721(this_00);
            break;
          case MESS_SHARED_0005:
            /* ST_CALLSITE[005A441E]: CALL 0x00403b4d; direct=00403B4D FSGSTy::PaintFSGS */
            st::fn_00403B4D(this_00,'\0');
          }
        }
      }
      else {
        switch(SVar5) {
        case MESS_SHARED_6109:
        case MESS_SHARED_611F:
          /* ST_CALLSITE[005A447F]: CALL 0x00405510; direct=00405510 StartSystemTy::InitChat */
          st::fn_00405510(this_00->array_00BC[0xc].field_01DB);
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = message->id;
          this_00->field_0051 = static_cast<undefined4>((message->arg0).u32);
          this_00->field_0055 = static_cast<undefined4>((message->arg1).u32);
          st::fn_00404DB8((MTaskTy *)this_00);
          break;
        case 0x614f:
          if (g_cursorClass_00802A30 != nullptr) {
            g_cursorClass_00802A30->field_0493 = CASE_1;
            pCVar38->field_0494 = 0xffff;
            /* ST_CALLSITE[005A44D9]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
            st::fn_0040507E(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
            /* ST_CALLSITE[005A44EE]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
            st::fn_0040241E(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
            pCVar38->field_00D2 = 0;
            pCVar38->field_04DF = -1;
          }
          pSVar8 = this_00->array_00BC[0xc].field_01DB;
          pSVar40 = &local_19c;
          for (iVar47 = 8; iVar47 != 0; iVar47 = iVar47 + -1) {
            pSVar40->unknown_00 = 0;
            pSVar40 = (STMessage *)&pSVar40->unknown_04;
          }
          local_19c.unknown_08 = this_00->field_0008;
          local_19c.unknown_0c = 2;
          local_19c.id = MESS_FSGSTY_6941;
          pMVar33 = pSVar8->field_02E6;
          if (pMVar33 == nullptr) {
            /* ST_CALLSITE[005A4570]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/FSGSTy;pointer:/SubmarineTitans/Recovered/STMessage */
            this_00->GetMessage(&local_19c);
          }
          else {
            /* ST_CALLSITE[005A455B]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
            st::fn_00403FA8(pMVar33,0x2593,'\0',&local_19c.unknown_00,nullptr,
                               nullptr,(message->arg0).i32,0x2599);
          }
          break;
        case MESS_FSGSTY_6150:
          if (this_00->array_00BC[0xc].field_01DF == '\x01') {
            if (g_cursorClass_00802A30 != nullptr) {
              g_cursorClass_00802A30->field_0493 = CASE_1;
              pCVar38->field_0494 = 0xffff;
              /* ST_CALLSITE[005A45B0]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
              st::fn_0040507E(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
              /* ST_CALLSITE[005A45C5]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
              st::fn_0040241E(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
              pCVar38->field_00D2 = 0;
              pCVar38->field_04DF = -1;
            }
            iVar47 = (message->arg0).i32;
            pSVar40 = &local_160;
            for (iVar48 = 8; iVar48 != 0; iVar48 = iVar48 + -1) {
              pSVar40->unknown_00 = 0;
              pSVar40 = (STMessage *)&pSVar40->unknown_04;
            }
            local_160.unknown_08 = this_00->field_0008;
            local_160.unknown_0c = 2;
            local_160.id = MESS_FSGSTY_6941;
            switch(iVar47) {
            case 1:
              UVar21 = 0x2580;
              break;
            case 2:
              UVar21 = 0x2581;
              break;
            case 3:
              UVar21 = 0x2582;
              break;
            case 4:
              UVar21 = 0x2583;
              break;
            default:
              UVar21 = 0x2584;
            }
            if ((UVar21 == 0) ||
               (pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6,
               pMVar33 == nullptr)) {
              /* ST_CALLSITE[005A469A]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/FSGSTy;pointer:/SubmarineTitans/Recovered/STMessage */
              this_00->GetMessage(&local_160);
            }
            else if (UVar21 == 0x2584) {
              /* ST_CALLSITE[005A4669]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
              st::fn_00403FA8(pMVar33,0x2584,'\0',&local_160.unknown_00,nullptr,
                                 nullptr,iVar47,0x2599);
            }
            else {
              /* ST_CALLSITE[005A4685]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
              st::fn_00403FA8(pMVar33,UVar21,'\0',&local_160.unknown_00,nullptr,
                                 nullptr,0,0);
            }
          }
        }
      }
      goto cf_common_exit_005A8CA7;
    }
    if (this_00->array_00BC[0xc].field_01DF != '\x01') goto cf_common_exit_005A8CA7;
    /* ST_CALLSITE[005A46B3]: CALL dword ptr [0x0085c06c] */
    st::external_00000109((CFsgsConnection *)&DAT_00802a90);
    if (((char)DAT_00807dd1 != '\x01') && ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000)) {
      puVar6 = this_00->field_1AC0;
      uVar36 = *(uint *)(puVar6 + 10);
      if (uVar36 == 0) {
        uVar36 = ((uint)puVar6[7] * *(int *)(puVar6 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar6 + 4);
      }
      puVar22 = (undefined4 *)st::fn_006B4FA0((int *)puVar6);
      for (uVar32 = uVar36 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
        *puVar22 = 0xffffffff;
        puVar22 = puVar22 + 1;
      }
      for (uVar36 = uVar36 & 3; uVar36 != 0; uVar36 = uVar36 - 1) {
        *(undefined1 *)puVar22 = 0xff;
        puVar22 = (undefined4 *)((int)puVar22 + 1);
      }
      st::fn_00710A90(this_00->array_00BC[0xc].field_01F3,(int)this_00->field_1AC0,0,0,0x16,0x1b8,
                       0xf0);
      iVar51 = -1;
      iVar50 = -1;
      uVar36 = 2;
      iVar48 = -1;
      iVar47 = -1;
      pcVar38_mg43 = st::fn_006B0140(0x25b6,g_hINSTANCE_00807618);
      st::fn_00711B70(this_00->array_00BC[0xc].field_01F3,pcVar38_mg43,iVar47,iVar48,uVar36,iVar50,
                     iVar51);
      st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
      /* ST_CALLSITE[005A4785]: CALL dword ptr [0x0085c068] */
      st::external_00000108((CFsgsConnection *)&DAT_00802a90,st::mutable_c_string("st.inf"));
      goto cf_common_exit_005A8CA7;
    }
    goto LAB_005a6d57;
  }
  if (MESS_WAITTY_6333 < SVar5) {
    if (SVar5 == MESS_SHARED_6334) {
      /* ST_CALLSITE[005A4D94]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
      st::fn_004031D4
                ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1BB9,
                 (int)message,0);
    }
    else if (SVar5 == MESS_WAITTY_6335) {
      this_00->field_1C6A = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
      if (this_00->field_1C4E != 0xffffffff) {
        st::fn_006B3730
                  ((uint *)this_00->field_1C92,this_00->field_1C4E,this_00->field_1C52,
                   this_00->field_1C66,this_00->field_1C6A);
      }
    }
    goto cf_common_exit_005A8CA7;
  }
  if (SVar5 == MESS_WAITTY_6333) {
    /* ST_CALLSITE[005A4D27]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
    st::fn_004031D4
              ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1B28,
               (int)message,0);
    goto cf_common_exit_005A8CA7;
  }
  switch(SVar5) {
  case MESS_FSGSTY_6150|MESS_ID_CREATE:
    if (this_00->array_00BC[0xc].field_01DF != '\x02') goto cf_common_exit_005A8CA7;
    if (g_cursorClass_00802A30 != nullptr) {
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar38->field_0494 = 0xffff;
      /* ST_CALLSITE[005A47F0]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      st::fn_0040507E(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
      /* ST_CALLSITE[005A4805]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      st::fn_0040241E(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
      pCVar38->field_00D2 = 0;
      pCVar38->field_04DF = -1;
    }
    pSVar8 = this_00->array_00BC[0xc].field_01DB;
    puVar22 = local_2c8;
    for (iVar47 = 6; iVar47 != 0; iVar47 = iVar47 + -1) {
      *puVar22 = 0x10001;
      puVar22 = puVar22 + 1;
    }
    *(undefined2 *)puVar22 = 1;
    pMVar33 = pSVar8->field_02E6;
    if (pMVar33 != nullptr) {
      /* ST_CALLSITE[005A4846]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
      st::fn_00404B51(pMVar33,(int)local_2c8);
    }
    switch((message->arg0).i32) {
    case 2:
      UVar21 = 0x258b;
      break;
    case 3:
      UVar21 = 0x258c;
      break;
    case 4:
      UVar21 = 0x258d;
      break;
    default:
      UVar21 = 0x2589;
      break;
    case 7:
      UVar21 = 0x25c2;
    }
    if ((UVar21 == 0) ||
       (pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6, pMVar33 == nullptr))
    goto cf_common_exit_005A8CA7;
    if (UVar21 == 0x2589) {
      /* ST_CALLSITE[005A48B4]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
      st::fn_00403FA8(pMVar33,0x2589,'\0',nullptr,nullptr,nullptr,
                         (message->arg0).i32,0x2599);
      goto cf_common_exit_005A8CA7;
    }
    break;
  case MESS_FSGSTY_6150|MESS_SHARED_0003:
    cVar2 = this_00->array_00BC[0xc].field_01DF;
    if ((cVar2 == '\x02') || (cVar2 == '\x04')) {
      if (g_cursorClass_00802A30 != nullptr) {
        g_cursorClass_00802A30->field_0493 = CASE_1;
        pCVar38->field_0494 = 0xffff;
        /* ST_CALLSITE[005A48FB]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
        st::fn_0040507E(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
        /* ST_CALLSITE[005A4910]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
        st::fn_0040241E(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
        pCVar38->field_00D2 = 0;
        pCVar38->field_04DF = -1;
      }
      local_100 = "Profile\\Age";
      local_fc = "Profile\\Sex";
      local_f8 = "Profile\\Location";
      local_f4 = "Profile\\Description";
      if (this_00->array_00BC[0xc].field_01DF == '\x02') {
        /* ST_CALLSITE[005A496E]: CALL dword ptr [0x0085c020] */
        st::external_000000F6
                  ((CFsgsConnection *)&DAT_00802a90,&CHAR_00h_00807e1d,4,&local_100);
      }
      else {
        local_11c = "Profile\\Sex";
        local_118 = "Profile\\Location";
        local_114 = "Profile\\Description";
        local_124 = DAT_008030d4;
        local_120 = "Profile\\Age";
        local_130 = (char *)&DAT_00802ad4;
        local_12c = (undefined *)&DAT_00802cd4;
        local_128 = (undefined *)&DAT_00802ed4;
        /* ST_CALLSITE[005A49CD]: CALL dword ptr [0x0085c028] */
        st::external_000000F8((CFsgsConnection *)&DAT_00802a90,4,&local_120,&local_130);
      }
      st::fn_004017A3(&DAT_00802a90,st::machine_word_boundary_cast<undefined4>(this_00->array_00BC[0xc].field_01E7));
      if ((DArrayTy *)this_00->field_1E9E != nullptr) {
        st::fn_006B5570((DArrayTy *)this_00->field_1E9E);
      }
      local_EAX_1705 = st::fn_006B54F0(nullptr,100,100);
      this_00->field_1E9E = &local_EAX_1705->flags;
      /* ST_CALLSITE[005A4A08]: CALL dword ptr [EDX + 0x8] */
      this_00->CloseButtons();
      this_00->array_00BC[0xc].field_01E1 = 6;
      pSVar8 = this_00->array_00BC[0xc].field_01DB;
      if (pSVar8->field_02E6 != nullptr) {
        local_ac = 0;
        local_a8 = 0;
        local_b0 = 0x10101;
        local_a4 = 0;
        st::fn_00401A9B(pSVar8->field_02E6,&local_b0);
      }
    }
    goto cf_common_exit_005A8CA7;
  case 0x6154:
    if (this_00->array_00BC[0xc].field_01DF == '\x05') {
      if (g_cursorClass_00802A30 != nullptr) {
        g_cursorClass_00802A30->field_0493 = CASE_1;
        pCVar38->field_0494 = 0xffff;
        /* ST_CALLSITE[005A4AA4]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
        st::fn_0040507E(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
        /* ST_CALLSITE[005A4AB9]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
        st::fn_0040241E(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
        pCVar38->field_00D2 = 0;
        pCVar38->field_04DF = -1;
      }
      uVar36 = (message->arg0).u32;
      if (uVar36 == 0) {
        this_00->field_002D = 0x6952;
        /* ST_CALLSITE[005A4B62]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/FSGSTy;pointer:/SubmarineTitans/Recovered/STMessage */
        this_00->GetMessage((STMessage *)&this_00->field_0x1d);
      }
      else if ((uVar36 != 0) && (uVar36 < 3)) {
        puVar22 = local_300;
        for (iVar47 = 6; iVar47 != 0; iVar47 = iVar47 + -1) {
          *puVar22 = 0x10001;
          puVar22 = puVar22 + 1;
        }
        pSVar8 = this_00->array_00BC[0xc].field_01DB;
        *(undefined2 *)puVar22 = 1;
        pMVar33 = pSVar8->field_02E6;
        if (pMVar33 != nullptr) {
          /* ST_CALLSITE[005A4B12]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
          st::fn_00404B51(pMVar33,(int)local_300);
        }
        pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
        if (pMVar33 != nullptr) {
          /* ST_CALLSITE[005A4B49]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
          st::fn_00403FA8(pMVar33,(-(uint)((message->arg0).u32 != 1) & 10) + 0x258e,'\0',
                             nullptr,nullptr,nullptr,0,0);
        }
      }
    }
    goto cf_common_exit_005A8CA7;
  case MESS_FSGSTY_6150|MESS_SHARED_0005:
    if (this_00->array_00BC[0xc].field_01DF != '\x04') goto cf_common_exit_005A8CA7;
    if (g_cursorClass_00802A30 != nullptr) {
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar38->field_0494 = 0xffff;
      /* ST_CALLSITE[005A4BA2]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      st::fn_0040507E(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
      /* ST_CALLSITE[005A4BB7]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      st::fn_0040241E(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
      pCVar38->field_00D2 = 0;
      pCVar38->field_04DF = -1;
    }
    if ((message->arg0).u32 == 0) goto LAB_005a67e1;
    if (6 < (message->arg0).u32) goto cf_common_exit_005A8CA7;
    puVar22 = local_354;
    for (iVar47 = 6; iVar47 != 0; iVar47 = iVar47 + -1) {
      *puVar22 = 0x10001;
      puVar22 = puVar22 + 1;
    }
    *(undefined2 *)puVar22 = 1;
    pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
    if (pMVar33 != nullptr) {
      /* ST_CALLSITE[005A4C12]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
      st::fn_00404B51(pMVar33,(int)local_354);
    }
    pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
    if (pMVar33 == nullptr) goto cf_common_exit_005A8CA7;
    switch((message->arg0).u32) {
    case 2:
      UVar21 = 0x2597;
      break;
    case 3:
      UVar21 = 0x2596;
      break;
    case 4:
      UVar21 = 0x25c3;
      break;
    case 5:
      UVar21 = 0x25c4;
      break;
    case 6:
      UVar21 = 0x25c5;
      break;
    default:
      UVar21 = 0x258f;
    }
    break;
  case MESS_FSGSTY_6156:
    if (this_00->array_00BC[0xc].field_01DF != '\x06') goto cf_common_exit_005A8CA7;
    if (g_cursorClass_00802A30 != nullptr) {
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar38->field_0494 = 0xffff;
      /* ST_CALLSITE[005A4CB5]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      st::fn_0040507E(pCVar38,CASE_0,pCVar38->field_00C5,pCVar38->field_00C9);
      /* ST_CALLSITE[005A4CCA]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      st::fn_0040241E(pCVar38,pCVar38->field_00C5,pCVar38->field_00C9);
      pCVar38->field_00D2 = 0;
      pCVar38->field_04DF = -1;
    }
    UVar21 = 0;
    if ((message->arg0).u32 == 0xd) {
      UVar21 = 0x2590;
    }
    else if ((message->arg0).u32 == 0xf) {
      UVar21 = 0x2591;
    }
    if ((UVar21 == 0) ||
       (pMVar33 = (this_00->array_00BC[0xc].field_01DB)->field_02E6, pMVar33 == nullptr))
    goto cf_common_exit_005A8CA7;
    break;
  default:
    goto cf_common_exit_005A8CA7;
  }
  /* ST_CALLSITE[005A4C72]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
  st::fn_00403FA8(pMVar33,UVar21,'\0',nullptr,nullptr,nullptr,0,0);
cf_common_exit_005A8CA7:
  g_currentExceptionFrame = local_21c.previous;
  /* ST_CALLSITE[005A8CB8]: CALL 0x00401280; direct=00401280 MMObjTy::GetMessage */
  local_EAX_18792 = st::fn_00401280((MMObjTy *)this_00,message);
  return local_EAX_18792;
}

