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
  undefined4 *puVar2;
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
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x66,0,errorCode,
                               "%s","FSGSTy::OutChSlProc");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x66);
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
  uint *resourceString;
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
      st::fn_00403099
                (param_2,param_1,param_2,param_3,param_4,param_5 + 0x16,param_6,param_7 + -0x16,
                 &g_startSystem_0081176C->field_0140);
      st::fn_00403099
                (param_3,param_1,param_2,param_3,param_4,param_5,param_6,0x15,
                 &g_startSystem_0081176C->field_0140);
      uVar6 = 0;
      pcVar5 = g_startSystem_0081176C->field_0034;
      uVar4 = 0xffffffff;
      uVar3 = 0xfffffffe;
      resourceString = (uint *)st::fn_006B0140(param_8,g_hINSTANCE_00807618);
      st::fn_00404C2D
                (this_00,0,param_4,param_5,param_6,0x15,resourceString,uVar3,uVar4,pcVar5,uVar6);
      g_currentExceptionFrame = local_48.previous;
      return;
    }
    g_currentExceptionFrame = local_48.previous;
    iVar2 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x73,0,errorCode,
                               "%s","FSGSTy::OutTRGlProc");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x73);
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
  uint *puVar2;
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
      puVar2 = (uint *)st::fn_006B0140(0x2616,g_hINSTANCE_00807618);
      st::fn_00404C2D
                (this_01,0,(int)(param_4 + 10),param_5 + 0xf8,0xe6,0x19,puVar2,uVar4,uVar5,pcVar6,
                 uVar7);
      st::fn_006C6470
                ((int)param_1,(int)(param_4 + 10),param_5 + 0xf8,(undefined4 *)0xe6,0x19,4,
                 g_startSystem_0081176C->field_0140);
      st::fn_006C6470
                ((int)param_1,(int)(param_4 + 0xc),param_5 + 0xfa,(undefined4 *)0xe2,0x15,4,
                 g_startSystem_0081176C->field_0140);
      st::fn_00403099
                (param_2,(int)param_1,param_2,param_3,(int)param_4,param_5 + -0x5c + param_7,param_6
                 ,0x5c,&g_startSystem_0081176C->field_0140);
      local_8 = (StartServTy *)(param_6 + -0x14);
      uVar7 = 2;
      pcVar6 = g_startSystem_0081176C->field_0034;
      uVar5 = 0xffffffff;
      uVar4 = 0;
      puVar2 = (uint *)st::fn_006B0140(0x2569,g_hINSTANCE_00807618);
      this_00 = (StartServTy *)(param_5 + -0x57 + param_7);
      st::fn_00404C2D
                (this_00,0,(int)(param_4 + 10),(int)this_00,(int)local_8,0xf,puVar2,uVar4,uVar5,
                 pcVar6,uVar7);
      st::fn_006C6850((int)param_1,(int)(param_4 + 10),param_5 + -0x46 + param_7,(int)local_8,0x16,
                   g_startSystem_0081176C->field_0140);
      uVar7 = 2;
      pcVar6 = g_startSystem_0081176C->field_0034;
      uVar5 = 0xffffffff;
      uVar4 = 0;
      puVar2 = (uint *)st::fn_006B0140(0x2550,g_hINSTANCE_00807618);
      st::fn_00404C2D
                (param_4,0,(int)(param_4 + 10),param_5 + -0x2f + param_7,(int)local_8,0xf,puVar2,
                 uVar4,uVar5,pcVar6,uVar7);
      st::fn_006C6850((int)param_1,(int)(param_4 + 10),param_5 + -0x1e + param_7,100,0x16,
                   g_startSystem_0081176C->field_0140);
      uVar7 = 2;
      pcVar6 = g_startSystem_0081176C->field_0034;
      uVar5 = 0xffffffff;
      uVar4 = 0xffffffff;
      puVar2 = (uint *)st::fn_006B0140(0x2566,g_hINSTANCE_00807618);
      st::fn_00404C2D
                (this_02,0,(int)(param_4 + 0x78),param_5 + 0x155,0xa0,0x19,puVar2,uVar4,uVar5,pcVar6
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
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x8c,0,errorCode,
                               "%s","FSGSTy::OutTRGlProc");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x8c);
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
  uint *puVar3;
  int iVar4;
  StartServTy *this_00;
  StartServTy *this_01;
  StartServTy *this_02;
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
      st::fn_00403099
                (param_2,(int)param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                 &g_startSystem_0081176C->field_0140);
      uVar8 = 2;
      iVar2 = param_4 + 10;
      pcVar7 = g_startSystem_0081176C->field_0034;
      uVar6 = 0xffffffff;
      uVar5 = 0;
      puVar3 = (uint *)st::fn_006B0140(0x256f,g_hINSTANCE_00807618);
      st::fn_00404C2D
                (this_00,0,iVar2,param_5 + 10,param_6 + -0x14,0x14,puVar3,uVar5,uVar6,pcVar7,uVar8);
      st::fn_006C6850((int)param_1,iVar2,param_5 + 0x1e,param_6 + -0x14,0x8e,
                   g_startSystem_0081176C->field_0140);
      uVar8 = 2;
      pcVar7 = g_startSystem_0081176C->field_0034;
      uVar6 = 0xffffffff;
      uVar5 = 0;
      puVar3 = (uint *)st::fn_006B0140(0x256b,g_hINSTANCE_00807618);
      st::fn_00404C2D
                (this_01,0,iVar2,param_5 + 0xb4,param_6 + -0x14,0x14,puVar3,uVar5,uVar6,pcVar7,uVar8
                );
      st::fn_006C6850((int)param_1,iVar2,param_5 + 200,param_6 + -0x14,0x19,
                   g_startSystem_0081176C->field_0140);
      uVar8 = 2;
      pcVar7 = g_startSystem_0081176C->field_0034;
      uVar6 = 0xffffffff;
      uVar5 = 0;
      puVar3 = (uint *)st::fn_006B0140(0x256c,g_hINSTANCE_00807618);
      st::fn_00404C2D
                (this_02,0,iVar2,param_5 + 0xe1,param_6 + -0x14,0x14,puVar3,uVar5,uVar6,pcVar7,uVar8
                );
      st::fn_006C6850((int)param_1,iVar2,param_5 + 0xf5,param_6 + -0x14,0x19,
                   g_startSystem_0081176C->field_0140);
      uVar8 = 2;
      local_c = param_6 + -0x1e;
      local_8 = (undefined4 *)(local_c / 2);
      pcVar7 = g_startSystem_0081176C->field_0034;
      uVar6 = 0xffffffff;
      uVar5 = 0;
      puVar3 = (uint *)st::fn_006B0140(0x256d,g_hINSTANCE_00807618);
      st::fn_00404C2D
                ((StartServTy *)(param_5 + 0x11a),0,iVar2,param_5 + 0x11a,(int)(local_8 + -10),0x14,
                 puVar3,uVar5,uVar6,pcVar7,uVar8);
      st::fn_006C6470
                ((int)param_1,(int)local_8 + param_4 + -0x14,param_5 + 0x11c,local_8 + 10,0x19,4,
                 g_startSystem_0081176C->field_0140);
      st::fn_006C6470
                ((int)param_1,(int)local_8 + param_4 + -0x12,param_5 + 0x11e,local_8 + 9,0x15,4,
                 g_startSystem_0081176C->field_0140);
      st::fn_006C6470
                ((int)param_1,iVar2,param_5 + 0x138,(undefined4 *)(param_6 + -0x14),0x19,4,
                 g_startSystem_0081176C->field_0140);
      st::fn_006C6470
                ((int)param_1,param_4 + 0xc,param_5 + 0x13a,(undefined4 *)(param_6 + -0x18),0x15,4,
                 g_startSystem_0081176C->field_0140);
      iVar2 = param_4 + ((int)(local_c + (local_c >> 0x1f & 3U)) >> 2);
      st::fn_006C6470
                ((int)param_1,iVar2 + 0xf,param_5 + 0x157,local_8,0x19,4,
                 g_startSystem_0081176C->field_0140);
      st::fn_006C6470
                ((int)param_1,iVar2 + 0x11,param_5 + 0x159,local_8 + -1,0x15,4,
                 g_startSystem_0081176C->field_0140);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0xb3,0,iVar2,"%s",
                               "FSGSTy::OutSGlProc");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xb3);
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
  uint *puVar3;
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
    puVar3 = (uint *)st::fn_006B0140(0x25a7,g_hINSTANCE_00807618);
    st::fn_00404C2D(this_00,0,param_4,iVar2,0x2d,0x23,puVar3,uVar5,uVar6,pcVar7,uVar8);
    local_8 = param_5 + -1 + param_7;
    st::fn_006C53B0
              (param_1,param_4 + 0x2d,param_5 + 0x78,param_4 + 0x2d,local_8,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)st::fn_006B0140(0x25a8,g_hINSTANCE_00807618);
    st::fn_00404C2D(this_01,0,param_4 + 0x2d,iVar2,0xeb,0x23,puVar3,uVar5,uVar6,pcVar7,uVar8);
    st::fn_006C53B0
              (param_1,param_4 + 0x118,param_5 + 0x78,param_4 + 0x118,local_8,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)st::fn_006B0140(0x25a9,g_hINSTANCE_00807618);
    st::fn_00404C2D
              (this_02,0,param_4 + 0x118,iVar2,0x46,0x23,puVar3,uVar5,uVar6,pcVar7,uVar8);
    st::fn_006C53B0
              (param_1,param_4 + 0x15e,param_5 + 0x78,param_4 + 0x15e,local_8,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)st::fn_006B0140(0x25aa,g_hINSTANCE_00807618);
    st::fn_00404C2D
              (this_03,0,param_4 + 0x15e,iVar2,0x91,0x23,puVar3,uVar5,uVar6,pcVar7,uVar8);
    st::fn_006C53B0
              (param_1,param_4 + 0x1ef,param_5 + 0x78,param_4 + 0x1ef,local_8,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)st::fn_006B0140(0x25ab,g_hINSTANCE_00807618);
    st::fn_00404C2D
              (this_04,0,param_4 + 0x1ef,iVar2,0x46,0x23,puVar3,uVar5,uVar6,pcVar7,uVar8);
    st::fn_006C53B0
              (param_1,param_4 + 0x235,param_5 + 0x78,param_4 + 0x235,local_8,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)st::fn_006B0140(0x25ac,g_hINSTANCE_00807618);
    st::fn_00404C2D
              (this_05,0,param_4 + 0x235,iVar2,0x32,0x23,puVar3,uVar5,uVar6,pcVar7,uVar8);
    st::fn_006C53B0
              (param_1,param_4 + 0x267,param_5 + 0x78,param_4 + 0x267,local_8,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)st::fn_006B0140(0x25ad,g_hINSTANCE_00807618);
    st::fn_00404C2D
              (this_06,0,param_4 + 0x267,iVar2,(int)&param_6[-1].field_0x1e5c,0x23,puVar3,uVar5,
               uVar6,pcVar7,uVar8);
    pcVar7 = g_startSystem_0081176C->field_0034;
    local_c = (StartServTy *)(param_5 + 0x19);
    uVar8 = 2;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)st::fn_006B0140(0x25ae,g_hINSTANCE_00807618);
    st::fn_00404C2D
              (this_07,0,param_4 + 10,(int)local_c,0x96,0x14,puVar3,uVar5,uVar6,pcVar7,uVar8);
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
    puVar3 = (uint *)st::fn_006B0140(0x25af,g_hINSTANCE_00807618);
    st::fn_00404C2D
              (local_c,0,param_4 + 0xa5,(int)local_c,0x96,0x14,puVar3,uVar5,uVar6,pcVar7,uVar8);
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
    puVar3 = (uint *)st::fn_006B0140(0x25b0,g_hINSTANCE_00807618);
    st::fn_00404C2D
              (local_c,0,param_4 + 0x1f9,(int)local_c,0x96,0x14,puVar3,uVar5,uVar6,pcVar7,uVar8);
    st::fn_006C6850(param_1,param_4 + 0x1f9,iVar2,0x96,0x19,g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)st::fn_006B0140(0x25b1,g_hINSTANCE_00807618);
    st::fn_00404C2D
              (this_08,0,param_4 + 0x294,iVar2,0x41,0x19,puVar3,uVar5,uVar6,pcVar7,uVar8);
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
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0xeb,0,iVar2,"%s",
                             "FSGSTy::OutLadProc");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xeb);
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
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar3;
  ushort *puVar4;
  HGDIOBJ pvVar5;
  FSGSTy_field_1FB3DArray *pFVar6;
  ccFntTy *pcVar7;
  StartServTy *pSVar8;
  int local_EAX_679;
  AnonPointee_FSGSTy_1A97 *pAVar9;
  undefined4 *puVar10;
  LPSTR text;
  int uVar11;
  DArrayTy *pDVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
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
    iVar12 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x15d,0,iVar3,
                                "%s","FSGSTy::InitFSGS");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x15d);
    return;
  }
  st::fn_0040590C(local_c->field_1A5B);
  g_fSGS_0081174C = this_01;
  DAT_008067a0 = 0;
  st::fn_0040330A(this_01->field_1A5B);
  DAT_00802a99 = 0;
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  pMVar1 = this_01->field_1A5B->field_02E6;
  if (pMVar1 != nullptr) {
    st::fn_0040462E(pMVar1);
    this_01->field_1A5B->field_02E6->field_1CAB = 0;
  }
  puVar4 = (ushort *)st::fn_0070A9F0(g_cMf32_00806780,"FSGS_BKG",0,1);
  g_startSystem_0081176C->field_002C = puVar4;
  this_01->field_005D = g_startSystem_0081176C->field_002C;
  puVar4 = st::fn_00709AF0
                     (PTR_00806784,CASE_B,"SET_ACC",0xffffffff,0,1,0,nullptr);
  this_01->field_1A83 = puVar4;
  puVar4 = st::fn_00709AF0
                     (PTR_00806784,CASE_B,"FILE_LIST",0xffffffff,0,1,0,nullptr);
  this_01->field_1A87 = puVar4;
  puVar4 = st::fn_00709AF0
                     (PTR_00806784,CASE_B,&DAT_007cc07c,0xffffffff,0,1,0,nullptr);
  this_01->field_1A8B = puVar4;
  st::fn_006BC360(this_01->field_005D,local_450,nullptr);
  this_01->field_1A5B->field_0140 = 0xf;
  st::fn_00718780
            ((int)local_450,0,0x100,0x8b,0x15,(undefined4 *)&this_01->field_1A5B->field_0x144);
  pvVar5 = (HGDIOBJ)st::fn_006C6A60(this_01->field_005D);
  this_01->field_1A67 = pvVar5;
  this_01->field_1F5B = this_01->field_0008;
  this_01->field_1F3B = this_01->field_0008;
  this_01->field_1F5F = 2;
  this_01->field_1F3F = 2;
  this_01->field_1F7F = this_01->field_005D;
  this_01->field_1F93 = 0;
  this_01->field_1F8F = PTR_008032ac;
  this_01->field_1F87 = 0xf;
  this_01->field_1F8B = 1;
  this_01->field_1F83 = 0x4d;
  pFVar6 = (FSGSTy_field_1FB3DArray *)st::fn_006AE290(nullptr,5,0x10c,5);
  this_01->field_1FB3 = pFVar6;
  this_01->field_1A6F = this_01->field_1A5B->field_0030;
  this_01->field_1A73 = this_01->field_1A5B->field_0034;
  pcVar7 = (ccFntTy *)st::fn_00402036((int)this_01->field_005D,nullptr,DAT_00807dd9);
  this_01->field_1A77 = pcVar7;
  pcVar7->field_007E = 1;
  *(undefined2 *)&pcVar7->field_0x9e = 0;
  pcVar7->field_0x9e = DAT_007c6ff0;
  pcVar7 = (ccFntTy *)st::fn_0070CEB0(0x19d,g_cMf32_00806780,"FSGS_NB",0);
  this_01->field_1A7B = pcVar7;
  pcVar7->field_0058 = 1;
  pcVar7->field_005C = 0;
  pSVar8 = (StartServTy *)st::fn_0070CEB0(0x19d,g_cMf32_00806780,"FSGS_NS",0);
  this_01->field_1A7F = pSVar8;
  *(undefined4 *)(pSVar8 + 0x58) = 1;
  *(undefined4 *)(pSVar8 + 0x5c) = 0;
  puVar4 = this_01->field_005D + 0x14;
  iVar3 = 1;
  local_EAX_679 = st::fn_006B4FE0((int)this_01->field_005D);
  pAVar9 = (AnonPointee_FSGSTy_1A97 *)
           st::fn_006B50C0(0x24d,0x59,(uint)this_01->field_005D[7],local_EAX_679,(undefined4 *)puVar4,
                        iVar3);
  this_01->field_1A97 = pAVar9;
  local_8 = pAVar9->field_0014;
  if (local_8 == 0) {
    local_8 = ((uint)(ushort)pAVar9->field_000E * pAVar9->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
              pAVar9->field_0008;
  }
  puVar10 = (undefined4 *)st::fn_006B4FA0((int *)pAVar9);
  for (uVar13 = local_8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar10 = 0xffffffff;
    puVar10 = puVar10 + 1;
  }
  iVar3 = 0;
  bVar14 = 0;
  for (uVar13 = local_8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined1 *)puVar10 = 0xff;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  text = st::fn_006F2C00("MM_BAN_",2,this_01->field_1A93);
  puVar4 = st::fn_0070A5A0(g_cMf32_00806780,6,text,bVar14,iVar3);
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_01->field_1A97,0,0,'\x06',(byte *)puVar4);
  pAVar9 = this_01->field_1A97;
  st::fn_006B2330(g_ddxContext_008075A8,&this_01->field_1A8F,0x31,0x4023f6,pAVar9->field_0004,
               pAVar9->field_0008,(ushort *)pAVar9);
  st::fn_006B3640
            ((int *)g_ddxContext_008075A8,this_01->field_1A8F,0xffffffff,g_nWidth_00806730 - 0x24d,0
            );
  iVar3 = 1;
  puVar4 = this_01->field_005D + 0x14;
  uVar11 = st::fn_006B4FE0((int)this_01->field_005D);
  puVar4 = (ushort *)
           st::fn_006B50C0(0x1b8,0x106,(uint)this_01->field_005D[7],uVar11,(undefined4 *)puVar4,iVar3);
  this_01->field_1AC0 = puVar4;
  this_01->field_1ABB = 0;
  puVar10 = &this_01->field_1ABC;
  st::fn_006B2330(g_ddxContext_008075A8,puVar10,0x31,0x4023f6,*(uint *)(puVar4 + 2),
               *(uint *)(puVar4 + 4),puVar4);
  st::fn_006B3640((int *)g_ddxContext_008075A8,*puVar10,0xffffffff,0xb4,0xaa);
  st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar10);
  st::fn_007158A0
            ((SpriteClassTy *)&this_01->field_1B28,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(this_01->field_1B28 + 4))(PTR_00806784,7,0,"MM_SLDUP",0xffffffff);
  this_01->field_1B30 = 0;
  if (this_01->field_1B2C != 0xffffffff) {
    st::fn_006B3AF0((int *)this_01->field_1B70,this_01->field_1B2C);
  }
  st::fn_007158A0
            ((SpriteClassTy *)&this_01->field_1BB9,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(this_01->field_1BB9 + 4))(PTR_00806784,7,0,"MM_SLDDN",0xffffffff);
  this_01->field_1BC1 = 0;
  if (this_01->field_1BBD != 0xffffffff) {
    st::fn_006B3AF0((int *)this_01->field_1C01,this_01->field_1BBD);
  }
  st::fn_007158A0
            ((SpriteClassTy *)&this_01->field_1C4A,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(this_01->field_1C4A + 4))(PTR_00806784,7,0,"MM_SLDT",0xffffffff);
  this_01->field_1C52 = 0;
  if (this_01->field_1C4E != 0xffffffff) {
    st::fn_006B3AF0((int *)this_01->field_1C92,this_01->field_1C4E);
  }
  st::fn_007158A0
            ((SpriteClassTy *)&this_01->field_1CDB,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(this_01->field_1CDB + 4))(PTR_00806784,7,0,"MM_SLDUP",0xffffffff);
  this_01->field_1CE3 = 0;
  if (this_01->field_1CDF != 0xffffffff) {
    st::fn_006B3AF0((int *)this_01->field_1D23,this_01->field_1CDF);
  }
  st::fn_007158A0
            ((SpriteClassTy *)&this_01->field_1D6C,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(this_01->field_1D6C + 4))(PTR_00806784,7,0,"MM_SLDDN",0xffffffff);
  this_01->field_1D74 = 0;
  if (this_01->field_1D70 != 0xffffffff) {
    st::fn_006B3AF0((int *)this_01->field_1DB4,this_01->field_1D70);
  }
  st::fn_007158A0
            ((SpriteClassTy *)&this_01->field_1DFD,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
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
  st::fn_006B5AA0(&pDVar11->flags,"License agreement");
  st::fn_006B5AA0(&this_01->field_1B08->flags,"Nothing to do");
  st::fn_00403B4D(this_01,'\x01');
  st::fn_0040448A((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                     this_01->field_005D,10,2);
  if ((5 < param_1) && (param_1 < 9)) {
    pDVar11 = st::fn_006B54F0(nullptr,100,100);
    this_01->field_1E9E = &pDVar11->flags;
  }
  this_01->field_1A62 = 0;
  if (param_1 == 6) {
    this_01->field_1A5F = CASE_6;
    bVar14 = 8;
  }
  else if (param_1 == 7) {
    this_01->field_1A5F = CASE_7;
    bVar14 = 7;
  }
  else {
    if (param_1 != 8) {
      st::fn_00401B2C(this_01,6);
      this_01->field_1A62 = 1;
      goto LAB_00596510;
    }
    this_01->field_1A5F = CASE_8;
    bVar14 = 10;
  }
  st::fn_00401B2C(this_01,bVar14);
LAB_00596510:
  this_00 = g_cursorClass_00802A30;
  if (g_cursorClass_00802A30 != nullptr) {
    iVar3 = g_cursorClass_00802A30->field_00C9;
    iVar12 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = CASE_1;
    this_00->field_0494 = 0xffff;
    st::fn_0040507E(this_00,CASE_0,iVar12,iVar3);
    st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  pMVar1 = this_01->field_1A5B->field_02E6;
  if (pMVar1 != nullptr) {
    st::fn_00405191(pMVar1);
    this_01->field_1A5B->field_02E6->field_1CAB = this_01->field_0008;
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
  MMsgTy *this_00;
  FSGSTy *this_01;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    st::external_000000F9((CFsgsConnection *)&DAT_00802a90);
    this_01 = local_8;
    st::fn_0040458E((MMObjTy *)local_8);
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    st::fn_00401D43(g_dDXContext_0080759C,10,2);
    if (g_startSystem_0081176C->field_002C != nullptr) {
      st::fn_006F20E0(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }
    st::fn_00405641(this_01);
    st::fn_0040580D(this_01);
    st::fn_004020F9(this_01);
    st::fn_0040520E(this_01);
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
      st::fn_0040128A(this_01->field_1F23);
      st::fn_0072E2B0(this_01->field_1F23);
      this_01->field_1F23 = nullptr;
    }
    if (this_01->field_1F27 != nullptr) {
      st::fn_0040128A(this_01->field_1F27);
      st::fn_0072E2B0(this_01->field_1F27);
      this_01->field_1F27 = nullptr;
    }
    if (this_01->field_1F2B != nullptr) {
      st::fn_0040128A(this_01->field_1F2B);
      st::fn_0072E2B0(this_01->field_1F2B);
      this_01->field_1F2B = nullptr;
    }
    if (this_01->field_1F2F != nullptr) {
      st::fn_0040128A(this_01->field_1F2F);
      st::fn_0072E2B0(this_01->field_1F2F);
      this_01->field_1F2F = nullptr;
    }
    if (this_01->field_1E8E != 0) {
      st::fn_006AB060((void **)&this_01->field_1E8E);
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
      st::fn_006C6FC0(this_01->field_1A9F);
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
    if (this_01->field_1A77 != nullptr) {
      st::fn_00710560((uint *)this_01->field_1A77);
      this_01->field_1A77 = nullptr;
    }
    if (this_01->field_1A7B != nullptr) {
      st::fn_00710560((uint *)this_01->field_1A7B);
      this_01->field_1A7B = nullptr;
    }
    if (this_01->field_1A7F != nullptr) {
      st::fn_00710560((uint *)this_01->field_1A7F);
      this_01->field_1A7F = nullptr;
    }
    if (this_01->field_1A67 != (HGDIOBJ)0x0) {
      st::external_000000A6(this_01->field_1A67);
    }
    this_01->field_1A67 = (HGDIOBJ)0x0;
    if (this_01->field_1FB3 != nullptr) {
      st::fn_006AE110((DArrayTy *)this_01->field_1FB3);
    }
    this_01->field_1FB3 = nullptr;
    if (this_01->field_004D != 0) {
      st::fn_006E3B50((AppClassTy *)&DAT_00807620,(undefined4 *)&this_01->field_0x3d);
    }
    this_00 = this_01->field_1A5B->field_02E6;
    if (this_00 != nullptr) {
      st::fn_0040462E(this_00);
      this_01->field_1A5B->field_02E6->field_1CAB = 0;
    }
    g_fSGS_0081174C = nullptr;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x197,0,errorCode,
                             "%s","FSGSTy::DoneFSGS");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x197);
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
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
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
    iVar2 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x1c8,0,errorCode,
                               "%s","FSGSTy::PaintFSGS");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x1c8);
    return;
  }
  st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
  this_00 = local_c;
  st::fn_00403738(0,0,'\x01',(BITMAPINFO *)local_c->field_005D);
  switch(this_00->field_1A5F) {
  case CASE_1:
    if (local_8 == 0) {
      local_8 = 0x2563;
      goto LAB_00596d58;
    }
    break;
  case CASE_2:
LAB_00596d58:
    if (local_8 == 0) {
      local_8 = 0x2553;
      goto LAB_00596d69;
    }
    break;
  case CASE_3:
    if (this_00->field_1F23 != nullptr) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (param_1 != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    st::fn_004042D2
              ((MMMObjTy *)g_dDXContext_0080759C,(int)g_dDXContext_0080759C,nullptr,
               nullptr,0x22,0x72,0x2e1,0x14c,&this_00->field_1A5B->field_0140);
    g_currentExceptionFrame = local_50.previous;
    return;
  case CASE_4:
LAB_00596d69:
    if (local_8 == 0) {
      local_8 = 0x2552;
      goto LAB_00596d7a;
    }
    break;
  case CASE_5:
LAB_00596d7a:
    if (local_8 == 0) {
      local_8 = 0x2562;
      goto LAB_00596d8b;
    }
    break;
  case CASE_6:
    if ((this_00->field_1F27 == nullptr) && (param_1 == '\0')) {
      st::fn_004023B0(this_01,(AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,0,0,0x13,0x5e,
                  0x1bf,0x175,&this_00->field_1A5B->field_0140);
    }
    if (this_00->field_1F2B != nullptr) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (param_1 != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    this_02 = &this_00->field_1A5B->field_0140;
    OutTRGlProc((FSGSTy *)this_02,(AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,
                nullptr,nullptr,(StartServTy *)0x1e9,0x5e,0x124,0x175,(int)this_02);
    g_currentExceptionFrame = local_50.previous;
    return;
  case CASE_7:
LAB_00596d8b:
    if (local_8 == 0) {
      local_8 = 0x255b;
      goto LAB_00596d9c;
    }
    break;
  case CASE_8:
    pFVar3 = this_01;
    if ((this_00->field_1F2F == nullptr) && (param_1 == '\0')) {
      st::fn_00403981((FSGSTy *)g_dDXContext_0080759C,
                 (AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,nullptr,
                 nullptr,0x199,0x5e,0x174,0x175,(int)&this_00->field_1A5B->field_0140);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
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
    st::fn_004042D2
              ((MMMObjTy *)pFVar3,(int)g_dDXContext_0080759C,nullptr,nullptr,0x13,
               0x5e,0x174,0x175,&this_00->field_1A5B->field_0140);
    g_currentExceptionFrame = local_50.previous;
    return;
  case CASE_9:
    if (this_00->field_1F23 != nullptr) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (param_1 != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    st::fn_00401032((FSGSTy *)g_dDXContext_0080759C,(int)g_dDXContext_0080759C,nullptr,
               nullptr,0x22,0x5e,(FSGSTy *)0x2e1,0x175);
    st::fn_00402031(this_00);
    g_currentExceptionFrame = local_50.previous;
    return;
  case CASE_A:
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
    OutTRGlProc(pFVar3,(int)g_dDXContext_0080759C,nullptr,nullptr,0xb4,
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
  FSGSTy_field_1A5FState FVar1;
  AnonPointee_FSGSTy_1A97 *pAVar2;
  HoloTy *this_00;
  MMsgTy *this_01;
  CursorClassTy *pCVar4;
  FSGSTy *this_02;
  DWORD DVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  LPSTR pCVar9;
  ushort *puVar10;
  char *resourceString;
  void *pvVar11;
  int iVar12;
  uint uVar13;
  DArrayTy *pDVar14;
  uint uVar15;
  byte bVar16;
  char *pcVar17;
  ulong uVar18;
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

  uVar15 = 1;
  local_8 = 1;
  local_28 = this;
  DVar5 = st::external_000000DA();
  this->field_0061 = DVar5;
  local_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a8;
  iVar6 = st::fn_0072D7F0(local_a8.jumpBuffer,0);
  this_02 = local_28;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_a8.previous;
    iVar12 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x284,0,iVar6,
                                "%s","FSGSTy::NoneFSGS");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x284);
    return;
  }
  switch(local_28->field_0065) {
  case CASE_1:
    st::external_00000105((CFsgsConnection *)&DAT_00802a90);
    if (this_02->field_1A5F == CASE_6) {
      if (15000 < this_02->field_0061 - this_02->field_1EB2) {
        if ((this_02->field_1A60 == '\0') &&
           (pDVar14 = this_02->field_1EA6, pDVar14 != nullptr)) {
          if (1 < pDVar14->count) {
            do {
              pvVar11 = DArrayAt<void>(pDVar14, uVar15);
              if (pvVar11 != nullptr) {
                st::external_0000010F
                          ((CFsgsConnection *)&DAT_00802a90,this_02->field_1EAE,
                           STField<ulong>(pvVar11,0x21));
              }
              pDVar14 = this_02->field_1EA6;
              uVar15 = uVar15 + 1;
            } while (uVar15 < pDVar14->count);
          }
          this_02->field_1EAE = this_02->field_1EAE + 1;
        }
        this_02->field_1EB2 = this_02->field_0061;
      }
    }
    else if ((this_02->field_1A5F == CASE_8) && (60000 < this_02->field_0061 - this_02->field_1A63))
    {
      st::external_000000F5
                ((CFsgsConnection *)&DAT_00802a90,this_02->field_1EC2,nullptr);
      this_02->field_1A63 = this_02->field_0061;
      pCVar4 = g_cursorClass_00802A30;
      if (g_cursorClass_00802A30 != nullptr) {
        iVar6 = g_cursorClass_00802A30->field_00C9;
        iVar12 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_5;
        pCVar4->field_0494 = 0xffff;
        st::fn_0040507E(pCVar4,CASE_0,iVar12,iVar6);
        st::fn_0040241E(pCVar4,pCVar4->field_00C5,pCVar4->field_00C9);
        pCVar4->field_00D2 = 0;
        pCVar4->field_04DF = -1;
      }
    }
    if (((this_02->field_1A97 != nullptr) &&
        (this_02->field_1A9F != nullptr)) &&
       (this_02->field_1AA3 < (int)(this_02->field_0061 - this_02->field_1AA7))) {
      st::fn_006C7070(this_02->field_1A9F,(undefined4 *)this_02->field_1A97,0);
      iVar6 = st::fn_006C7000(this_02->field_1A9F);
      this_02->field_1AA3 = iVar6;
      if (iVar6 < 1) {
        if (iVar6 == -1) {
          st::fn_006C7030(this_02->field_1A9F);
        }
        else {
          st::fn_006C6FC0(this_02->field_1A9F);
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
        uVar7 = st::fn_0040361B((MMObjTy *)local_28,0,1,0x121,9,0x1d6,0x3c,0x694c,0);
        this_02->field_1AB3 = uVar7;
      }
      pAVar2 = this_02->field_1A97;
      this_02->field_1A93 = this_02->field_1A93 + -1;
      uVar15 = pAVar2->field_0014;
      if (uVar15 == 0) {
        uVar15 = ((uint)(ushort)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                 pAVar2->field_0008;
      }
      puVar8 = (undefined4 *)st::fn_006B4FA0((int *)pAVar2);
      for (uVar13 = uVar15 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      iVar6 = 0;
      bVar16 = 0;
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      pCVar9 = st::fn_006F2C00("MM_BAN_",2,this_02->field_1A93);
      puVar10 = st::fn_0070A5A0(g_cMf32_00806780,6,pCVar9,bVar16,iVar6);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_02->field_1A97,0,0,'\x06',(byte *)puVar10);
      st::fn_006B35D0((int *)g_ddxContext_008075A8,this_02->field_1A8F);
      local_8 = 0;
    }
    if ((this_02->field_1F23 != nullptr) &&
       (iVar6 = st::fn_004055F1(this_02->field_1F23), iVar6 != 0)) {
      local_8 = 0;
    }
    if ((this_02->field_1F27 != nullptr) &&
       (iVar6 = st::fn_004055F1(this_02->field_1F27), iVar6 != 0)) {
      local_8 = 0;
    }
    if ((this_02->field_1F2B != nullptr) &&
       (iVar6 = st::fn_004055F1(this_02->field_1F2B), iVar6 != 0)) {
      local_8 = 0;
    }
    if ((this_02->field_1F2F != nullptr) &&
       (iVar6 = st::fn_004055F1(this_02->field_1F2F), iVar6 != 0)) {
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
      st::fn_0040128A(this_00);
      st::fn_0072E2B0(this_02->field_1F2B);
      this_02->field_1F2B = nullptr;
    }
    if (this_02->field_1F23 != nullptr) {
      st::fn_0040128A(this_02->field_1F23);
      st::fn_0072E2B0(this_02->field_1F23);
      this_02->field_1F23 = nullptr;
    }
    if (this_02->field_1F27 != nullptr) {
      st::fn_0040128A(this_02->field_1F27);
      st::fn_0072E2B0(this_02->field_1F27);
      this_02->field_1F27 = nullptr;
    }
    if (this_02->field_1F2F != nullptr) {
      st::fn_0040128A(this_02->field_1F2F);
      st::fn_0072E2B0(this_02->field_1F2F);
      this_02->field_1F2F = nullptr;
    }
    switch(this_02->field_0065) {
    case CASE_6:
      st::fn_006B3430((int *)g_ddxContext_008075A8,this_02->field_1ABC);
      this_02->field_1A5F = CASE_1;
      st::fn_00402577((CFsgsConnection *)&DAT_00802a90);
      local_18 = 1;
      break;
    case CASE_7:
      if ((this_02->field_1A5F != CASE_3) && (this_02->field_1A5F != CASE_9)) {
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
    st::fn_00403B4D(this_02,'\0');
    st::fn_0040279D(this_02);
    switch(this_02->field_1A5F) {
    case CASE_6:
      this_02->field_1EB2 = this_02->field_0061;
      if (this_02->field_1A62 == '\0') {
        st::fn_00404057((CFsgsConnection *)&DAT_00802a90);
      }
      else {
        uVar18 = 0;
        pcVar17 = &DAT_008016a0;
        resourceString = st::fn_006B0140(0x254d,g_hINSTANCE_00807618);
        st::fn_00405542(&DAT_00802a90,resourceString,pcVar17,uVar18);
        this_02->field_1A62 = 0;
      }
      break;
    case CASE_8:
      st::external_000000F5
                ((CFsgsConnection *)&DAT_00802a90,this_02->field_1EC2,nullptr);
      DVar5 = st::external_000000DA();
      this_02->field_1A63 = DVar5;
      pCVar4 = g_cursorClass_00802A30;
      goto joined_r0x00597872;
    case CASE_9:
      st::external_000000F7
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
      pCVar4 = g_cursorClass_00802A30;
joined_r0x00597872:
      g_cursorClass_00802A30 = pCVar4;
      if (pCVar4 != nullptr) {
        pCVar4->field_0493 = CASE_5;
        pCVar4->field_0494 = 0xffff;
        st::fn_0040507E(pCVar4,CASE_0,pCVar4->field_00C5,pCVar4->field_00C9);
        st::fn_0040241E(pCVar4,pCVar4->field_00C5,pCVar4->field_00C9);
        pCVar4->field_00D2 = 0;
        pCVar4->field_04DF = -1;
      }
      break;
    case CASE_A:
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
        st::external_000000F6
                  ((CFsgsConnection *)&DAT_00802a90,(char *)this_02->field_1B0C,0xf,&local_64);
        pCVar4 = g_cursorClass_00802A30;
        goto joined_r0x00597872;
      }
    }
    this_01 = this_02->field_1A5B->field_02E6;
    if (this_01 != nullptr) {
      st::fn_00404B51(this_01,(int)&local_24);
      g_currentExceptionFrame = local_a8.previous;
      return;
    }
    break;
  case CASE_4:
    if (local_28->field_1F23 != nullptr) {
      iVar6 = st::fn_004055F1(local_28->field_1F23);
      if (iVar6 == 0) {
        uVar15 = *(uint *)&this_02->field_1F23->field_0x3;
        if (-1 < (int)uVar15) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar15);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (this_02->field_1F27 != nullptr) {
      iVar6 = st::fn_004055F1(this_02->field_1F27);
      if (iVar6 == 0) {
        uVar15 = *(uint *)&this_02->field_1F27->field_0x3;
        if (-1 < (int)uVar15) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar15);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (this_02->field_1F2B != nullptr) {
      iVar6 = st::fn_004055F1(this_02->field_1F2B);
      if (iVar6 == 0) {
        uVar15 = *(uint *)&this_02->field_1F2B->field_0x3;
        if (-1 < (int)uVar15) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar15);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (this_02->field_1F2F != nullptr) {
      iVar6 = st::fn_004055F1(this_02->field_1F2F);
      if (iVar6 == 0) {
        uVar15 = *(uint *)&this_02->field_1F2F->field_0x3;
        if (-1 < (int)uVar15) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar15);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (((this_02->field_1A61 == '\0') && (this_02->field_1A93 < 9)) &&
       (-1 < (int)this_02->field_1A8F)) {
      if ((this_02->field_1A93 == 0) && (this_02->field_1AB3 != 0)) {
        st::fn_006E56B0(this_02->field_000C,this_02->field_1AB3);
        this_02->field_1AB3 = 0;
      }
      pAVar2 = this_02->field_1A97;
      this_02->field_1A93 = this_02->field_1A93 + 1;
      uVar15 = pAVar2->field_0014;
      if (uVar15 == 0) {
        uVar15 = ((uint)(ushort)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                 pAVar2->field_0008;
      }
      puVar8 = (undefined4 *)st::fn_006B4FA0((int *)pAVar2);
      for (uVar13 = uVar15 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      iVar6 = 0;
      bVar16 = 0;
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      pCVar9 = st::fn_006F2C00("MM_BAN_",2,this_02->field_1A93);
      puVar10 = st::fn_0070A5A0(g_cMf32_00806780,6,pCVar9,bVar16,iVar6);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_02->field_1A97,0,0,'\x06',(byte *)puVar10);
      st::fn_006B35D0((int *)g_ddxContext_008075A8,this_02->field_1A8F);
      local_8 = 0;
    }
    pCVar4 = g_cursorClass_00802A30;
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (g_cursorClass_00802A30 != nullptr) {
        iVar6 = g_cursorClass_00802A30->field_00C9;
        iVar12 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_1;
        pCVar4->field_0494 = 0xffff;
        st::fn_0040507E(pCVar4,CASE_0,iVar12,iVar6);
        st::fn_0040241E(pCVar4,pCVar4->field_00C5,pCVar4->field_00C9);
        pCVar4->field_00D2 = 0;
        pCVar4->field_04DF = -1;
      }
      FVar1 = this_02->field_1A61;
      if (FVar1 != 0) {
        switch(FVar1) {
        case CASE_2:
        case CASE_3:
        case CASE_4:
        case CASE_5:
        case CASE_7:
        case CASE_9:
        case CASE_A:
          this_02->field_1A5F = FVar1;
          st::fn_00401B2C(this_02,7);
          this_02->field_1A61 = 0;
          g_currentExceptionFrame = local_a8.previous;
          return;
        case CASE_6:
          this_02->field_1A5F = FVar1;
          st::fn_00401B2C(this_02,8);
          this_02->field_1A61 = 0;
          g_currentExceptionFrame = local_a8.previous;
          return;
        case CASE_8:
          this_02->field_1A5F = FVar1;
          st::fn_00401B2C(this_02,10);
        }
        this_02->field_1A61 = 0;
        g_currentExceptionFrame = local_a8.previous;
        return;
      }
      bVar16 = this_02->field_1A5A;
      this_02->field_0065 = CASE_2;
      if ((bVar16 != 0xff) && (*(int *)(&this_02->field_0xd1 + (uint)bVar16 * 0x1fb) != 0)) {
        st::fn_006E3B50
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(&this_02->field_0xc1 + (uint)bVar16 * 0x1fb));
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
  FSGSTy_field_1A5FState FVar1;
  ushort *puVar2;
  StartSystemTy *pSVar3;
  FSGSTy *this_00;
  undefined4 *puVar5;
  uint *resourceString;
  HoloTy *pHVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
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

  puVar5 = &local_210;
  local_14 = this;
  for (iVar8 = 0x7e; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  STField<undefined1>(puVar5,2) = 0;
  local_8 = 0xffffffff;
  local_254.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_254;
  iVar8 = st::fn_0072D7F0(local_254.jumpBuffer,0);
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_254.previous;
    iVar7 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x397,0,iVar8,"%s"
                               ,"FSGSTy::SetState");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar8,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x397);
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
    st::fn_0040128A(local_14->field_1F23);
    st::fn_0072E2B0(this_00->field_1F23);
    this_00->field_1F23 = nullptr;
  }
  if (this_00->field_1F27 != nullptr) {
    st::fn_0040128A(this_00->field_1F27);
    st::fn_0072E2B0(this_00->field_1F27);
    this_00->field_1F27 = nullptr;
  }
  if (this_00->field_1F2B != nullptr) {
    st::fn_0040128A(this_00->field_1F2B);
    st::fn_0072E2B0(this_00->field_1F2B);
    this_00->field_1F2B = nullptr;
  }
  if (this_00->field_1F2F != nullptr) {
    st::fn_0040128A(this_00->field_1F2F);
    st::fn_0072E2B0(this_00->field_1F2F);
    this_00->field_1F2F = nullptr;
  }
  switch(this_00->field_0065) {
  case CASE_6:
    if (this_00->field_1ABB != '\0') {
      st::fn_0040165E(this_00,'\0');
    }
    puVar2 = this_00->field_1AC0;
    uVar14 = *(uint *)(puVar2 + 10);
    if (uVar14 == 0) {
      uVar14 = ((uint)puVar2[7] * *(int *)(puVar2 + 2) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(puVar2 + 4);
    }
    puVar5 = (undefined4 *)st::fn_006B4FA0((int *)puVar2);
    for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    st::fn_00710A90(this_00->field_1A73,(int)this_00->field_1AC0,0,0,0x16,0x1b8,0xf0);
    iVar12 = -1;
    iVar11 = -1;
    uVar14 = 2;
    iVar7 = -1;
    iVar8 = -1;
    resourceString = (uint *)st::fn_006B0140(0x254e,g_hINSTANCE_00807618);
    st::fn_00711B70(this_00->field_1A73,resourceString,iVar8,iVar7,uVar14,iVar11,iVar12);
    st::fn_006B3430((int *)g_ddxContext_008075A8,this_00->field_1ABC);
    st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
    st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x4035e9,0x1b8,0x106,(ushort *)0x2563);
    st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0xb4,0xaa);
    pHVar6 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar6 == nullptr) {
      pHVar6 = nullptr;
    }
    else {
      pHVar6->field_0002 = 1;
      pHVar6->field_0000 = 0;
      *(undefined4 *)&pHVar6->field_0x3 = 0xffffffff;
      pHVar6->field_0001 = CASE_2;
      pHVar6->field_0007 = nullptr;
      pHVar6->field_000B = nullptr;
      pHVar6->field_000F = 0;
      *(undefined4 *)&pHVar6->field_0x1b = 1;
      pHVar6->field_0013 = 1;
      pHVar6->field_0017 = -1;
      pHVar6->field_0027 = 0;
      pHVar6->field_0023 = 0;
      pHVar6->field_002F = 1;
      pHVar6->field_002B = 1;
    }
    this_00->field_1F23 = pHVar6;
    if (pHVar6 != nullptr) {
      uVar14 = 0;
      cVar10 = '\x01';
      bVar9 = 0x10;
      iVar7 = 1;
      iVar8 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0xb4,0xaa,0x1b8,0x106);
      uVar14 = st::fn_0040459D(this_00->field_1F23,CASE_2,0xb4,0xaa,iVar8,iVar7,bVar9,cVar10,uVar14);
      if (uVar14 != 0) {
        pHVar6 = this_00->field_1F23;
        pHVar6->field_0002 = 1;
        pHVar6->field_0017 = pHVar6->field_0013;
        uVar14 = *(uint *)&this_00->field_1F23->field_0x3;
        if (-1 < (int)uVar14) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar14);
        }
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
    FVar1 = this_00->field_1A5F;
    local_c = (ushort *)0x2563;
    if (FVar1 == CASE_3) {
      st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0x2e1,0x14c,
                   (ushort *)&this_00->field_1A5B->field_0140);
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
      uVar14 = 0x2ee - (this_00->field_1C6E + -7) / 2;
      this_00->field_1C66 = uVar14;
      if (this_00->field_1C4E != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)this_00->field_1C92,this_00->field_1C4E,0xfffffffe,uVar14,
                   this_00->field_1C6A);
      }
      if (this_00->field_1C4E != 0xffffffff) {
        st::fn_006B35D0((int *)this_00->field_1C92,this_00->field_1C4E);
      }
      pHVar6 = (HoloTy *)st::fn_0072E530(0x33);
      if (pHVar6 == nullptr) {
        pHVar6 = nullptr;
      }
      else {
        pHVar6->field_0002 = 1;
        pHVar6->field_0000 = 0;
        *(undefined4 *)&pHVar6->field_0x3 = 0xffffffff;
        pHVar6->field_0001 = CASE_2;
        pHVar6->field_0007 = nullptr;
        pHVar6->field_000B = nullptr;
        pHVar6->field_000F = 0;
        *(undefined4 *)&pHVar6->field_0x1b = 1;
        pHVar6->field_0013 = 1;
        pHVar6->field_0017 = -1;
        pHVar6->field_0027 = 0;
        pHVar6->field_0023 = 0;
        pHVar6->field_002F = 1;
        pHVar6->field_002B = 1;
      }
      this_00->field_1F23 = pHVar6;
      if (pHVar6 != nullptr) {
        uVar14 = 0;
        cVar10 = '\x01';
        bVar9 = 0x10;
        iVar7 = 1;
        iVar8 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x22,0x72,0x2e1,0x14c);
        uVar14 = st::fn_0040459D(this_00->field_1F23,CASE_2,0x22,0x72,iVar8,iVar7,bVar9,cVar10,uVar14);
        if (uVar14 != 0) {
          pHVar6 = this_00->field_1F23;
          pHVar6->field_0002 = 1;
          pHVar6->field_0017 = pHVar6->field_0013;
          uVar14 = *(uint *)&this_00->field_1F23->field_0x3;
          if (-1 < (int)uVar14) {
            st::fn_006B3430((int *)g_ddxContext_008075A8,uVar14);
          }
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
      if (FVar1 == CASE_9) {
        st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x401032,0x2e1,0x175,nullptr);
        st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x22,0x5e);
        pHVar6 = (HoloTy *)st::fn_0072E530(0x33);
        if (pHVar6 == nullptr) {
          pHVar6 = nullptr;
        }
        else {
          pHVar6->field_0002 = 1;
          pHVar6->field_0000 = 0;
          *(undefined4 *)&pHVar6->field_0x3 = 0xffffffff;
          pHVar6->field_0001 = CASE_2;
          pHVar6->field_0007 = nullptr;
          pHVar6->field_000B = nullptr;
          pHVar6->field_000F = 0;
          *(undefined4 *)&pHVar6->field_0x1b = 1;
          pHVar6->field_0013 = 1;
          pHVar6->field_0017 = -1;
          pHVar6->field_0027 = 0;
          pHVar6->field_0023 = 0;
          pHVar6->field_002F = 1;
          pHVar6->field_002B = 1;
        }
        this_00->field_1F23 = pHVar6;
        if (pHVar6 != nullptr) {
          uVar14 = 0;
          cVar10 = '\x01';
          bVar9 = 0x10;
          iVar7 = 1;
          iVar8 = st::fn_006BF9F0
                            ((int *)g_ddxContext_008075A8,0x22,0x5e,0x2e1,0x175);
          uVar14 = st::fn_0040459D(this_00->field_1F23,CASE_2,0x22,0x5e,iVar8,iVar7,bVar9,cVar10,uVar14
                               );
          if (uVar14 != 0) {
            pHVar6 = this_00->field_1F23;
            pHVar6->field_0002 = 1;
            pHVar6->field_0017 = pHVar6->field_0013;
            uVar14 = *(uint *)&this_00->field_1F23->field_0x3;
            if (-1 < (int)uVar14) {
              st::fn_006B3430((int *)g_ddxContext_008075A8,uVar14);
            }
            st::fn_004055F1(this_00->field_1F23);
            st::fn_006B3AF0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
          }
        }
      }
      else {
        switch(FVar1) {
        case CASE_2:
        case CASE_4:
        case CASE_5:
        case CASE_7:
          if (this_00->field_1ABB != '\0') {
            cVar10 = '\0';
LAB_00598221:
            st::fn_0040165E(this_00,cVar10);
          }
          break;
        case CASE_A:
          if (this_00->field_1ABB != '\x01') {
            cVar10 = '\x01';
            goto LAB_00598221;
          }
        }
        switch(this_00->field_1A5F) {
        case CASE_2:
          st::fn_0040334B(this_00);
          local_c = (ushort *)0x2553;
          break;
        case CASE_4:
          st::fn_00401C49(this_00);
          DAT_0080735f = 0;
          local_c = (ushort *)0x2552;
          break;
        case CASE_5:
          st::fn_004034A4(this_00);
          local_c = (ushort *)0x2562;
          break;
        case CASE_7:
          st::fn_004022C0(this_00);
          local_c = (ushort *)0x255b;
          break;
        case CASE_A:
          st::fn_004024BE(this_00);
          local_c = (ushort *)0x259c;
        }
        uVar14 = (-(uint)(this_00->field_1ABB != '\0') & 0xffffffb4) + 0xaa;
        local_10 = (-(uint)(this_00->field_1ABB != '\0') & 0x74) + 0x106;
        st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x4035e9,0x1b8,local_10,local_c);
        st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0xb4,uVar14);
        pHVar6 = (HoloTy *)st::fn_0072E530(0x33);
        if (pHVar6 == nullptr) {
          pHVar6 = nullptr;
        }
        else {
          pHVar6->field_0002 = 1;
          pHVar6->field_0000 = 0;
          *(undefined4 *)&pHVar6->field_0x3 = 0xffffffff;
          pHVar6->field_0001 = CASE_2;
          pHVar6->field_0007 = nullptr;
          pHVar6->field_000B = nullptr;
          pHVar6->field_000F = 0;
          *(undefined4 *)&pHVar6->field_0x1b = 1;
          pHVar6->field_0013 = 1;
          pHVar6->field_0017 = -1;
          pHVar6->field_0027 = 0;
          pHVar6->field_0023 = 0;
          pHVar6->field_002F = 1;
          pHVar6->field_002B = 1;
        }
        this_00->field_1F23 = pHVar6;
        if (pHVar6 != nullptr) {
          uVar13 = 0;
          cVar10 = '\x01';
          bVar9 = 0x10;
          iVar7 = 1;
          iVar8 = st::fn_006BF9F0
                            ((int *)g_ddxContext_008075A8,0xb4,uVar14,0x1b8,local_10);
          uVar14 = st::fn_0040459D(this_00->field_1F23,CASE_2,0xb4,uVar14,iVar8,iVar7,bVar9,cVar10,
                                uVar13);
          if (uVar14 != 0) {
            pHVar6 = this_00->field_1F23;
            pHVar6->field_0002 = 1;
            pHVar6->field_0017 = pHVar6->field_0013;
            uVar14 = *(uint *)&this_00->field_1F23->field_0x3;
            if (-1 < (int)uVar14) {
              st::fn_006B3430((int *)g_ddxContext_008075A8,uVar14);
            }
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
    switch(this_00->field_1A5F) {
    case CASE_2:
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
    case CASE_3:
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
    case CASE_4:
      local_1dc = this_00->field_0008;
      local_1e9 = 0x2553;
      local_1d4 = 0x6953;
      goto LAB_00599280;
    case CASE_5:
      local_1dc = this_00->field_0008;
      local_1e9 = 0x2561;
      local_1d4 = 0x694b;
      goto LAB_00599280;
    case CASE_7:
      goto switchD_005987a8_caseD_7;
    case CASE_9:
    case CASE_A:
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
    uVar14 = 0x1bd - (this_00->field_1C6E + -7) / 2;
    this_00->field_1C66 = uVar14;
    if (this_00->field_1C4E != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1C92,this_00->field_1C4E,0xfffffffe,uVar14,
                 this_00->field_1C6A);
    }
    if (this_00->field_1C4E != 0xffffffff) {
      st::fn_006B35D0((int *)this_00->field_1C92,this_00->field_1C4E);
    }
    st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x4023b0,0x1bf,0x175,
                 (ushort *)&this_00->field_1A5B->field_0140);
    st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x13,0x5e);
    pHVar6 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar6 == nullptr) {
      pHVar6 = nullptr;
    }
    else {
      pHVar6->field_0002 = 1;
      pHVar6->field_0000 = 0;
      *(undefined4 *)&pHVar6->field_0x3 = 0xffffffff;
      pHVar6->field_0001 = CASE_2;
      pHVar6->field_0007 = nullptr;
      pHVar6->field_000B = nullptr;
      pHVar6->field_000F = 0;
      *(undefined4 *)&pHVar6->field_0x1b = 1;
      pHVar6->field_0013 = 1;
      pHVar6->field_0017 = -1;
      pHVar6->field_0027 = 0;
      pHVar6->field_0023 = 0;
      pHVar6->field_002F = 1;
      pHVar6->field_002B = 1;
    }
    this_00->field_1F27 = pHVar6;
    if (pHVar6 != nullptr) {
      uVar14 = 0;
      cVar10 = '\x01';
      bVar9 = 0x10;
      iVar7 = 1;
      iVar8 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x13,0x5e,0x1bf,0x175);
      uVar14 = st::fn_0040459D(this_00->field_1F27,CASE_4,0x13,0x5e,iVar8,iVar7,bVar9,cVar10,uVar14);
      if (uVar14 != 0) {
        pHVar6 = this_00->field_1F27;
        pHVar6->field_0002 = 1;
        pHVar6->field_0017 = pHVar6->field_0013;
        uVar14 = *(uint *)&this_00->field_1F27->field_0x3;
        if (-1 < (int)uVar14) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar14);
        }
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
    uVar14 = 0x308 - this_00->field_1CFF;
    this_00->field_1CFB = 99;
    this_00->field_1CF7 = uVar14;
    if (this_00->field_1CDF != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1D23,this_00->field_1CDF,0xfffffffe,uVar14,
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
    uVar14 = 0x2f8 - (this_00->field_1E21 + -7) / 2;
    this_00->field_1E19 = uVar14;
    if (this_00->field_1E01 != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1E45,this_00->field_1E01,0xfffffffe,uVar14,
                 this_00->field_1E1D);
    }
    if (this_00->field_1E01 != 0xffffffff) {
      st::fn_006B35D0((int *)this_00->field_1E45,this_00->field_1E01);
    }
    st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x40303f,0x124,0x175,
                 (ushort *)&this_00->field_1A5B->field_0140);
    st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x1e9,0x5e);
    pHVar6 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar6 == nullptr) {
      pHVar6 = nullptr;
    }
    else {
      pHVar6->field_0002 = 1;
      pHVar6->field_0000 = 0;
      *(undefined4 *)&pHVar6->field_0x3 = 0xffffffff;
      pHVar6->field_0001 = CASE_2;
      pHVar6->field_0007 = nullptr;
      pHVar6->field_000B = nullptr;
      pHVar6->field_000F = 0;
      *(undefined4 *)&pHVar6->field_0x1b = 1;
      pHVar6->field_0013 = 1;
      pHVar6->field_0017 = -1;
      pHVar6->field_0027 = 0;
      pHVar6->field_0023 = 0;
      pHVar6->field_002F = 1;
      pHVar6->field_002B = 1;
    }
    this_00->field_1F2B = pHVar6;
    if (pHVar6 != nullptr) {
      uVar14 = 0;
      cVar10 = '\x01';
      bVar9 = 0x10;
      iVar7 = 1;
      iVar8 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0x175);
      uVar14 = st::fn_0040459D(this_00->field_1F2B,CASE_2,0x1e9,0x5e,iVar8,iVar7,bVar9,cVar10,uVar14);
      if (uVar14 != 0) {
        pHVar6 = this_00->field_1F2B;
        pHVar6->field_0002 = 1;
        pHVar6->field_0017 = pHVar6->field_0013;
        uVar14 = *(uint *)&this_00->field_1F2B->field_0x3;
        if (-1 < (int)uVar14) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar14);
        }
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
                 (ushort *)&this_00->field_1A5B->field_0140);
    st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x199,0x5e);
    pHVar6 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar6 == nullptr) {
      pHVar6 = nullptr;
    }
    else {
      pHVar6->field_0002 = 1;
      pHVar6->field_0000 = 0;
      *(undefined4 *)&pHVar6->field_0x3 = 0xffffffff;
      pHVar6->field_0001 = CASE_2;
      pHVar6->field_0007 = nullptr;
      pHVar6->field_000B = nullptr;
      pHVar6->field_000F = 0;
      *(undefined4 *)&pHVar6->field_0x1b = 1;
      pHVar6->field_0013 = 1;
      pHVar6->field_0017 = -1;
      pHVar6->field_0027 = 0;
      pHVar6->field_0023 = 0;
      pHVar6->field_002F = 1;
      pHVar6->field_002B = 1;
    }
    this_00->field_1F2F = pHVar6;
    if (pHVar6 != nullptr) {
      uVar14 = 0;
      cVar10 = '\x01';
      bVar9 = 0x10;
      iVar7 = 1;
      iVar8 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x199,0x5e,0x174,0x175);
      uVar14 = st::fn_0040459D(this_00->field_1F2F,CASE_2,0x199,0x5e,iVar8,iVar7,bVar9,cVar10,uVar14);
      if (uVar14 != 0) {
        pHVar6 = this_00->field_1F2F;
        pHVar6->field_0002 = 1;
        pHVar6->field_0017 = pHVar6->field_0013;
        uVar14 = *(uint *)&this_00->field_1F2F->field_0x3;
        if (-1 < (int)uVar14) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar14);
        }
        st::fn_004055F1(this_00->field_1F2F);
      }
    }
    if (local_8 != 0xffffffff) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
    uVar14 = 0x182 - this_00->field_1CFF;
    this_00->field_1CFB = 99;
    this_00->field_1CF7 = uVar14;
    if (this_00->field_1CDF != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1D23,this_00->field_1CDF,0xfffffffe,uVar14,
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
    uVar14 = 0x172 - (this_00->field_1E21 + -7) / 2;
    this_00->field_1E19 = uVar14;
    if (this_00->field_1E01 != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_1E45,this_00->field_1E01,0xfffffffe,uVar14,
                 this_00->field_1E1D);
    }
    if (this_00->field_1E01 != 0xffffffff) {
      st::fn_006B35D0((int *)this_00->field_1E45,this_00->field_1E01);
    }
    st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0x174,0x175,
                 (ushort *)&this_00->field_1A5B->field_0140);
    st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x13,0x5e);
    pHVar6 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar6 == nullptr) {
      pHVar6 = nullptr;
    }
    else {
      pHVar6->field_0002 = 1;
      pHVar6->field_0000 = 0;
      *(undefined4 *)&pHVar6->field_0x3 = 0xffffffff;
      pHVar6->field_0001 = CASE_2;
      pHVar6->field_0007 = nullptr;
      pHVar6->field_000B = nullptr;
      pHVar6->field_000F = 0;
      *(undefined4 *)&pHVar6->field_0x1b = 1;
      pHVar6->field_0013 = 1;
      pHVar6->field_0017 = -1;
      pHVar6->field_0027 = 0;
      pHVar6->field_0023 = 0;
      pHVar6->field_002F = 1;
      pHVar6->field_002B = 1;
    }
    this_00->field_1F2B = pHVar6;
    if (pHVar6 != nullptr) {
      uVar14 = 0;
      cVar10 = '\x01';
      bVar9 = 0x10;
      iVar7 = 1;
      iVar8 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x13,0x5e,0x174,0x175);
      uVar14 = st::fn_0040459D(this_00->field_1F2B,CASE_4,0x13,0x5e,iVar8,iVar7,bVar9,cVar10,uVar14);
      if (uVar14 != 0) {
        pHVar6 = this_00->field_1F2B;
        pHVar6->field_0002 = 1;
        pHVar6->field_0017 = pHVar6->field_0013;
        uVar14 = *(uint *)&this_00->field_1F2B->field_0x3;
        if (-1 < (int)uVar14) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar14);
        }
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
  pSVar3 = this_00->field_1A5B;
  if (pSVar3->field_02E6 != nullptr) {
    puVar5 = local_270;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0xffff;
    st::fn_00401717(pSVar3->field_02E6,0,(int)&local_210,0,0);
    st::fn_00404B51(this_00->field_1A5B->field_02E6,(int)local_270);
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
   FSGSTy::PrepBkgMess */

void __thiscall st::fn_005999C0(FSGSTy *this,char param_1)

{
  ushort **value;
  FSGSTy *pFVar2;
  int iVar3;
  int uVar4;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
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
    value = &local_10->field_1AC0;
    if (local_10->field_1AC0 != nullptr) {
      st::fn_006AB060(value);
    }
    if (param_1 == '\0') {
      local_8 = 0x106;
      local_c = 0x1b8;
    }
    else {
      local_8 = (-(uint)(param_1 != '\x01') & 0xfffffffb) + 0x17a;
      local_c = (-(uint)(param_1 != '\x01') & 0x129) + 0x1b8;
    }
    iVar3 = 1;
    puVar4 = pFVar2->field_005D + 0x14;
    uVar4 = st::fn_006B4FE0((int)pFVar2->field_005D);
    puVar4 = (ushort *)
             st::fn_006B50C0(local_c,local_8,(uint)pFVar2->field_005D[7],uVar4,(undefined4 *)puVar4,
                          iVar3);
    uVar6 = pFVar2->field_1ABC;
    *value = puVar4;
    st::fn_006B2410(g_ddxContext_008075A8,uVar6,(uint)puVar4);
    st::fn_006B2800(g_ddxContext_008075A8,pFVar2->field_1ABC,*(uint *)(*value + 2),
                 *(uint *)(*value + 4));
    if (param_1 == '\0') {
      uVar6 = 0xb4;
    }
    else {
      uVar6 = (-(uint)(param_1 != '\x01') & 0xffffff6e) + 0xb4;
    }
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,pFVar2->field_1ABC,0xffffffff,uVar6,
               (-(uint)(param_1 != '\0') & 0xffffffb4) + 0xaa);
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,pFVar2->field_1ABC);
    pFVar2->field_1ABB = param_1;
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar5 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x3a8,0,iVar3,"%s",
                             "FSGSTy::PrepBkgMess");
  if (iVar5 == 0) {
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x3a8);
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
  undefined4 *puVar5;
  uint *puVar6;
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
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x48,0x186,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x254f,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x5b,0x188,0x1b,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x7f,0xb4,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x2550,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x92,0xb6,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x104,0x93,0x96,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x2551,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006C7570((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0xe6,0x93,(undefined4 *)0x16,
                 0x14,2,0xf);
    st::fn_006B3430((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
    st::fn_006B35D0((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x3c0,0,iVar4,"%s",
                             "FSGSTy::PaintLogLogin");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x3c0);
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
  undefined4 *puVar5;
  uint *puVar6;
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
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x1b,0x186,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x254f,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x2e,0x188,0x1b,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x48,0xb4,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x2550,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x5b,0xb6,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0xeb,0x48,0xb4,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x2554,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0xea,0x5b,0xb6,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x70,0x6e,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x2557,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x83,0x70,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0xa5,0x70,0x6e,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x2558,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0xa4,0x83,0x70,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x131,0x70,0x6e,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x2559,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x130,0x83,0x70,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x98,0x186,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x255a,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0xab,0x188,0x4d,0xf,0xd);
    st::fn_006B3430((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
    st::fn_006B35D0((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",999,0,iVar4,"%s",
                             "FSGSTy::PaintLogNew");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",999);
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
  undefined4 *puVar5;
  uint *puVar6;
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
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x2a,0x186,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x254f,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x3d,0x188,0x1b,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x61,0xb4,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x2556,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x74,0xb6,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x89,0xb4,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x2555,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x9c,0xb6,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0xb1,0xb4,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x2554,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0xc4,0xb6,0x16,0xf,0xd);
    st::fn_006B3430((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
    st::fn_006B35D0((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x401,0,iVar4,"%s",
                             "FSGSTy::PaintLogPsw");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x401);
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
  undefined4 *puVar5;
  uint *puVar6;
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
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x48,0x186,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x256b,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x5b,0x188,0x1b,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x7f,0xb4,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x2550,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x92,0xb6,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0xb1,0xb4,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x256d,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
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
  iVar9 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x418,0,iVar4,"%s",
                             "FSGSTy::PaintGameNew");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x418);
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
  undefined4 *puVar5;
  uint *puVar6;
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
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x1b,0x186,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x254f,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x2e,0x188,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x1e,0x2e,0x17c,0x14);
    st::fn_007119C0(pFVar3->field_1A73,(uint *)pFVar3->field_1B0C,0,-1,0);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x43,0x6e,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x2557,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x56,0x70,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0xa5,0x43,0x6e,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x2558,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0xa4,0x56,0x70,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x131,0x43,0x6e,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x2559,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x130,0x56,0x70,0x16,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x6b,0x186,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x255a,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x7e,0x188,0x4d,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0xcf,0x186,0x14);
    uVar8 = 0;
    iVar9 = -1;
    iVar4 = -1;
    puVar6 = (uint *)st::fn_006B0140(0x259d,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0xde,0x50,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x259f,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0xf2,0x52,0x14,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x7d,0xde,0x50,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x25a0,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x7c,0xf2,0x52,0x14,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0xe1,0xde,0x50,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x25a5,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0xe0,0xf2,0x52,0x14,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x145,0xde,0x50,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x25a1,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x144,0xf2,0x52,0x14,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x106,0x50,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x25a4,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x11a,0x52,0x19,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x7d,0x106,0x50,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x25a3,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x7c,0x11a,0x52,0x19,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0xe1,0x106,0xb4,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x25a2,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0xe0,0x11a,0xb6,0x19,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x13d,0x186,0x14);
    uVar8 = 0;
    iVar9 = -1;
    iVar4 = -1;
    puVar6 = (uint *)st::fn_006B0140(0x259e,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x14c,0x50,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x259f,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x160,0x52,0x14,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x7d,0x14c,0x50,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x25a0,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x7c,0x160,0x52,0x14,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0xe1,0x14c,0x50,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x25a5,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0xe0,0x160,0x52,0x14,0xf,0xd);
    st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x145,0x14c,0x50,0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)st::fn_006B0140(0x25a1,g_hINSTANCE_00807618);
    st::fn_007119C0(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar8);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x144,0x160,0x52,0x14,0xf,0xd
                );
    st::fn_006B3430((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
    st::fn_006B35D0((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x46c,0,iVar4,"%s",
                             "FSGSTy::PaintInfo");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x46c);
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
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_0059B2C0(FSGSTy *this)

{
  FSGSTy *pFVar2;
  StartServTy *pSVar3;
  int iVar4;
  uint uVar5;
  tm *ptVar6;
  int iVar7;
  StartServTy *this_00;
  uint uVar8;
  StartServTy *this_01;
  int *piVar9;
  uint *puVar10;
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
      pFVar2 = local_10;
      st::fn_00402298(0x18a,0x90,0x168,0x32,100,(byte *)0x19,'\x01',local_10->field_1E92);
      st::external_00000080((LPSTR)local_48,"%6d_:_%6d",pFVar2->field_1EDF,
                (pFVar2->field_1EE3 - 1) + pFVar2->field_1EDF);
      st::fn_00404C2D
                (local_48,0,0x18b,0x91,0x62,0x17,(uint *)local_48,0xffffffff,0xffffffff,
                 (ccFntTy *)pFVar2->field_1A7F,0);
      st::fn_00402298(0x22,0xd6,0,0x78,0x2e1,(byte *)0xfd,'\x01',pFVar2->field_1E92);
      if (pFVar2->field_1EE3 != 0) {
        local_8 = (StartServTy *)0xdb;
        piVar9 = (int *)((int)local_14 + 0xc);
        local_c = 0;
        do {
          st::external_00000080((LPSTR)local_48,"%6d",pFVar2->field_1EDF + local_c);
          st::fn_00404C2D
                    (local_48,0,0x23,(int)local_8,0x2b,0x10,(uint *)local_48,0xffffffff,0xffffffff,
                     (ccFntTy *)pFVar2->field_1A7F,0);
          st::fn_00404C2D
                    (local_8,0,0x50,(int)local_8,0xe9,0x10,(uint *)(piVar9 + 2),0,0xffffffff,
                     pFVar2->field_1A73,2);
          iVar4 = -1;
          puVar10 = (uint *)(piVar9 + 2);
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            uVar5 = *puVar10;
            puVar10 = (uint *)((int)puVar10 + 1);
          } while ((char)uVar5 != '\0');
          if (iVar4 != -2) {
            st::external_00000080((LPSTR)local_48,"%6d",piVar9[1]);
            pSVar3 = local_8;
            st::fn_00404C2D
                      (pFVar2->field_1A7F,0,0x13b,(int)local_8,0x44,0x10,(uint *)local_48,0xffffffff
                       ,0xffffffff,(ccFntTy *)pFVar2->field_1A7F,0);
            st::external_00000080((LPSTR)local_48,"%6d_:_%6d_:_%6d",piVar9[-2],piVar9[-1],*piVar9);
            st::fn_00404C2D
                      (pFVar2->field_1A7F,0,0x181,(int)pSVar3,0x8f,0x10,(uint *)local_48,0xffffffff,
                       0xffffffff,(ccFntTy *)pFVar2->field_1A7F,0);
            st::external_00000080((LPSTR)local_48,"%6d",*piVar9 + piVar9[-1] + piVar9[-2]);
            st::fn_00404C2D
                      (this_00,0,0x212,(int)pSVar3,0x44,0x10,(uint *)local_48,0xffffffff,0xffffffff,
                       (ccFntTy *)pFVar2->field_1A7F,0);
            uVar8 = *piVar9 + piVar9[-2] + piVar9[-1];
            uVar5 = 0;
            if (uVar8 != 0) {
              uVar5 = (uint)(piVar9[-2] * 100) / uVar8;
            }
            st::external_00000080((LPSTR)local_48,"%3d",uVar5);
            st::fn_00404C2D
                      (this_01,0,600,(int)pSVar3,0x30,0x10,(uint *)local_48,0xffffffff,0xffffffff,
                       (ccFntTy *)pFVar2->field_1A7F,0);
            ptVar6 = st::fn_0072FC30((time_t *)(piVar9 + -3));
            st::external_00000080((LPSTR)local_48,"%2d_:_%2d_:_%4d",ptVar6->tm_mday,ptVar6->tm_mon + 1,
                      ptVar6->tm_year + 0x76c);
            st::fn_00404C2D
                      (pFVar2->field_1A7F,0,0x28a,(int)pSVar3,0x76,0x10,(uint *)local_48,0xffffffff,
                       0xffffffff,(ccFntTy *)pFVar2->field_1A7F,0);
            local_8 = pSVar3;
          }
          local_c = local_c + 1;
          piVar9 = piVar9 + 9;
          local_8 = local_8 + 0x10;
        } while (local_c < pFVar2->field_1EE3);
      }
      g_currentExceptionFrame = local_8c.previous;
      return;
    }
    g_currentExceptionFrame = local_8c.previous;
    iVar7 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x49b,0,iVar4,"%s"
                               ,"FSGSTy::PaintLadder");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x49b);
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
    st::fn_00403459((MMObjTy *)local_8);
    st::fn_00404BF1(this_00,0xc,'\x01',-1);
    st::fn_0040427D(this_00);
    this_00->field_0065 = CASE_4;
    this_00->field_1A5F = 0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x4a9,0,errorCode,
                             "%s","FSGSTy::CloseButtons");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x4a9);
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
    switch(local_8->field_1A5F) {
    case CASE_2:
      st::fn_00402392(local_8);
      pFVar2->field_1A62 = 1;
      g_currentExceptionFrame = local_4c.previous;
      return;
    case CASE_3:
      st::fn_00401D75(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case CASE_4:
      st::fn_00402022(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case CASE_5:
      st::fn_004032D3(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case CASE_6:
      st::fn_00404570(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case CASE_7:
      st::fn_00403FAD(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case CASE_8:
      st::fn_0040196A(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case CASE_9:
      st::fn_00404421(local_8);
      break;
    case CASE_A:
      st::fn_00402626(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x582,0,errorCode,
                             "%s","FSGSTy::CreateCtrls");
  if (iVar3 == 0) {
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x582);
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
  DArrayTy *pDVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *text;
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
  iVar5 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar5 == 0) {
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00 = local_8;
    local_8->field_1AE8 = pDVar2;
    st::fn_006B5AA0(&pDVar2->flags,&DAT_00807e1d);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AEC = pDVar2;
    text = (char *)&DAT_00807e5d;
    if (DAT_0080735f == '\0') {
      text = &DAT_008016a0;
    }
    st::fn_006B5AA0(&pDVar2->flags,text);
    ppcVar6 = local_8d8;
    for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppcVar6 = nullptr;
      ppcVar6 = ppcVar6 + 1;
    }
    local_8d8[2] = this_00->field_1A73;
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
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC4,nullptr,local_8d8,0);
    local_8b8 = this_00->field_1AEC;
    local_8d8[1] = (ccFntTy *)0xa9;
    local_8d8[4] = (ccFntTy *)0x13d;
    local_8d8[5] = (ccFntTy *)0xaa;
    local_8d8[6] = (ccFntTy *)0x14;
    local_8d8[7] = (ccFntTy *)0x10;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC8,nullptr,local_8d8,0);
    uVar3 = st::fn_0040361B((MMObjTy *)this_00,3,1,0x19a,0x13d,0x16,0x14,0x6900,0x6980);
    this_00->field_1AD0 = uVar3;
    this_00->field_002D = 0x61;
    *(undefined4 *)&this_00->field_0x35 = 0;
    st::fn_006E6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x5ac,0,iVar5,"%s",
                             "FSGSTy::LoginCtrls");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar5,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x5ac);
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
  DArrayTy *pDVar2;
  int iVar3;
  int iVar4;
  ccFntTy **ppcVar5;
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

  ppcVar5 = local_8d8;
  local_8 = this;
  for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppcVar5 = nullptr;
    ppcVar5 = ppcVar5 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar4 == 0) {
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00 = local_8;
    local_8->field_1AE8 = pDVar2;
    st::fn_006B5AA0(&pDVar2->flags,&DAT_00807e1d);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AEC = pDVar2;
    st::fn_006B5AA0(&pDVar2->flags,&DAT_008016a0);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AF0 = pDVar2;
    st::fn_006B5AA0(&pDVar2->flags,&DAT_008016a0);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AF8 = pDVar2;
    st::fn_006B5AA0(&pDVar2->flags,&DAT_008016a0);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AFC = pDVar2;
    st::fn_006B5AA0(&pDVar2->flags,&DAT_008016a0);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1B00 = pDVar2;
    st::fn_006B5AA0(&pDVar2->flags,&DAT_008016a0);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1B04 = &pDVar2->flags;
    st::fn_006B5AA0(&pDVar2->flags,&DAT_008016a0);
    ppcVar5 = local_8d8;
    for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppcVar5 = nullptr;
      ppcVar5 = ppcVar5 + 1;
    }
    local_8d8[2] = this_00->field_1A73;
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
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC4,nullptr,local_8d8,0);
    local_8b8 = this_00->field_1AEC;
    local_8d8[1] = (ccFntTy *)0xa9;
    local_8d8[4] = (ccFntTy *)0x106;
    local_8d8[5] = (ccFntTy *)0xaa;
    local_8d8[6] = (ccFntTy *)0x14;
    local_8d8[7] = (ccFntTy *)0x10;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC8,nullptr,local_8d8,0);
    local_8b8 = this_00->field_1AF0;
    local_8d8[3] = (ccFntTy *)0x1a4;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1ACC,nullptr,local_8d8,0);
    local_8b8 = this_00->field_1AF8;
    local_8d8[1] = (ccFntTy *)0x89;
    local_8d8[3] = (ccFntTy *)0xd2;
    local_8d8[4] = (ccFntTy *)0x12e;
    local_8d8[5] = (ccFntTy *)0x64;
    local_8d8[7] = (ccFntTy *)0x1ff;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AD8,nullptr,local_8d8,0);
    local_8b8 = this_00->field_1AFC;
    local_8d8[3] = (ccFntTy *)0x15e;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1ADC,nullptr,local_8d8,0);
    local_8b8 = this_00->field_1B00;
    local_8d8[3] = (ccFntTy *)0x1ea;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AE0,nullptr,local_8d8,0);
    local_8b8 = (DArrayTy *)this_00->field_1B04;
    local_8d8[1] = (ccFntTy *)0xc8;
    local_8d8[3] = (ccFntTy *)0xd2;
    local_8d8[4] = (ccFntTy *)0x156;
    local_8d8[5] = (ccFntTy *)0x17c;
    local_8d8[6] = (ccFntTy *)0x4b;
    local_884 = 0x6981;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AE4,nullptr,local_8d8,0);
    this_00->field_002D = 0x61;
    *(undefined4 *)&this_00->field_0x35 = 0;
    st::fn_006E6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x5f4,0,iVar4,"%s",
                             "FSGSTy::NewIDCtrls");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x5f4);
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
  DArrayTy *pDVar2;
  int iVar3;
  int iVar4;
  ccFntTy **ppcVar5;
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

  ppcVar5 = local_8d8;
  local_8 = this;
  for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppcVar5 = nullptr;
    ppcVar5 = ppcVar5 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar4 == 0) {
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00 = local_8;
    local_8->field_1AE8 = pDVar2;
    st::fn_006B5AA0(&pDVar2->flags,&DAT_00807e1d);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AEC = pDVar2;
    st::fn_006B5AA0(&pDVar2->flags,&DAT_008016a0);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AF0 = pDVar2;
    st::fn_006B5AA0(&pDVar2->flags,&DAT_008016a0);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AF4 = pDVar2;
    st::fn_006B5AA0(&pDVar2->flags,&DAT_008016a0);
    ppcVar5 = local_8d8;
    for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppcVar5 = nullptr;
      ppcVar5 = ppcVar5 + 1;
    }
    local_8d8[2] = this_00->field_1A73;
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
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC4,nullptr,local_8d8,0);
    local_8b8 = this_00->field_1AEC;
    local_8d8[1] = (ccFntTy *)0xa9;
    local_8d8[4] = (ccFntTy *)0x11f;
    local_8d8[5] = (ccFntTy *)0xaa;
    local_8d8[6] = (ccFntTy *)0x14;
    local_8d8[7] = (ccFntTy *)0x10;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC8,nullptr,local_8d8,0);
    local_8b8 = this_00->field_1AF4;
    local_8d8[4] = (ccFntTy *)0x147;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AD4,nullptr,local_8d8,0);
    local_8b8 = this_00->field_1AF0;
    local_8d8[4] = (ccFntTy *)0x16f;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1ACC,nullptr,local_8d8,0);
    this_00->field_002D = 0x61;
    *(undefined4 *)&this_00->field_0x35 = 0;
    st::fn_006E6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x624,0,iVar4,"%s",
                             "FSGSTy::PswCtrls");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x624);
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
  FSGSTy *this_00;
  uint uVar3;
  undefined4 uVar4;
  LPBITMAPINFO ptVar5;
  int iVar6;
  int iVar7;
  byte *puVar8;
  int *piVar9;
  byte *puVar10;
  ushort *puVar11;
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

  piVar9 = local_8c4;
  local_8 = this;
  for (iVar7 = 0x21e; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar7 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar7 == 0) {
    puVar8 = (byte *)(&local_8->field_1E8E);
    if (local_8->field_1E8E != 0) {
      st::fn_006AB060((void **)puVar8);
    }
    if (this_00->field_1E92 != nullptr) {
      st::fn_006AB060(&this_00->field_1E92);
    }
    iVar7 = 1;
    puVar11 = this_00->field_005D + 0x14;
    uVar3 = st::fn_006B4FE0((int)this_00->field_005D);
    uVar4 = st::fn_006B50C0(0x2c8 - this_00->field_1B4C,0x149,(uint)this_00->field_005D[7],uVar3,
                         (undefined4 *)puVar11,iVar7);
    *puVar8 = uVar4;
    ptVar5 = st::fn_006C4880(g_dDXContext_0080759C,0x22,0x72,0x2e1,0x14c,8);
    iVar7 = *puVar8;
    this_00->field_1E92 = ptVar5;
    if ((iVar7 != 0) && (ptVar5 != (LPBITMAPINFO)0x0)) {
      pcVar1 = this_00->field_1A73;
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
      uVar4 = this_00->field_1B48;
      local_88c = this_00->field_0008;
      local_7a8 = local_88c;
      puVar8 = (byte *)(local_808);
      puVar10 = (byte *)(local_688);
      memmove(puVar10, puVar8, 0x17c); /* compiler REP MOVS byte copy */
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
      local_688[3] = uVar4;
      local_4b8 = local_88c;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,8,&this_00->field_1B14,nullptr,local_8c4,0);
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
    *(undefined4 *)&this_00->field_0x35 = 0;
    st::fn_006E6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x666,0,iVar7,"%s",
                             "FSGSTy::LicCtrls");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar7,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x666);
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
  byte *pbVar3;
  DArrayTy *pDVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  ccFntTy **ppcVar8;
  bool bVar9;
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

  pbVar3 = this->field_1B0C;
  if (pbVar3 != nullptr) {
    pbVar7 = &DAT_00807e1d;
    ppcVar8 = local_8dc;
    local_c = this;
    for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
      *ppcVar8 = nullptr;
      ppcVar8 = ppcVar8 + 1;
    }
    do {
      bVar1 = *pbVar3;
      bVar9 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_0059d77b:
        local_8 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_0059d780;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar9 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_0059d77b;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    local_8 = 0;
LAB_0059d780:
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    iVar6 = st::fn_0072D7F0(local_50.jumpBuffer,0);
    if (iVar6 == 0) {
      pDVar4 = st::fn_006B54F0(nullptr,1,1);
      this_00 = local_c;
      local_c->field_1AF8 = pDVar4;
      st::fn_006B5AA0(&pDVar4->flags,&DAT_008016a0);
      pDVar4 = st::fn_006B54F0(nullptr,1,1);
      this_00->field_1AFC = pDVar4;
      st::fn_006B5AA0(&pDVar4->flags,&DAT_008016a0);
      pDVar4 = st::fn_006B54F0(nullptr,1,1);
      this_00->field_1B00 = pDVar4;
      st::fn_006B5AA0(&pDVar4->flags,&DAT_008016a0);
      pDVar4 = st::fn_006B54F0(nullptr,1,1);
      this_00->field_1B04 = &pDVar4->flags;
      st::fn_006B5AA0(&pDVar4->flags,&DAT_008016a0);
      ppcVar8 = local_8dc;
      for (iVar6 = 0x223; iVar5 = local_8, iVar6 != 0; iVar6 = iVar6 + -1) {
        *ppcVar8 = nullptr;
        ppcVar8 = ppcVar8 + 1;
      }
      local_8dc[0] = (ccFntTy *)0x1;
      local_8dc[1] = (ccFntTy *)0x89;
      if (local_8 != 0) {
        local_8dc[1] = (ccFntTy *)0x99;
      }
      local_8dc[2] = this_00->field_1A73;
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
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AD8,nullptr,local_8dc,0);
      local_8bc = this_00->field_1AFC;
      local_8dc[3] = (ccFntTy *)0x15e;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1ADC,nullptr,local_8dc,0);
      local_8bc = this_00->field_1B00;
      local_8dc[3] = (ccFntTy *)0x1ea;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AE0,nullptr,local_8dc,0);
      local_8dc[1] = (ccFntTy *)0xc8;
      if (iVar5 != 0) {
        local_8dc[1] = (ccFntTy *)0xcc;
      }
      local_8bc = (DArrayTy *)this_00->field_1B04;
      local_8dc[3] = (ccFntTy *)0xd2;
      local_8dc[4] = (ccFntTy *)0xdd;
      local_8dc[5] = (ccFntTy *)0x17c;
      local_8dc[6] = (ccFntTy *)0x4b;
      local_888 = 0x6981;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AE4,nullptr,local_8dc,0);
      this_00->field_002D = 0x61;
      *(undefined4 *)&this_00->field_0x35 = 0;
      st::fn_006E6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x69c,0,iVar6,"%s"
                               ,"FSGSTy::InfoCtrls");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x69c);
  }
  return;
}

// 0059DB20 FSGSTy::ChatCtrls
#line 4 "decomp/ST.exe/functions/0059DB20/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::ChatCtrls */

void __thiscall st::fn_0059DB20(FSGSTy *this)

{
  undefined1 *puVar1;
  AnonShape_00710790_4CBB90D4 *pAVar2;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  LPBITMAPINFO ptVar7;
  DArrayTy *pDVar8;
  MMObjTy *this_00;
  int iVar9;
  byte *puVar10;
  byte *puVar12;
  undefined4 local_1654 [11];
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
  undefined4 uStackY_74;
  InternalExceptionFrame *pIVar13;
  int iVar14;

  st::fn_0072DA40();
  memset(local_1654, 0, 0x88c); /* compiler bulk-zero initialization */
  iVar9 = 0;
  memset(local_dc8, 0, 0x878); /* compiler bulk-zero initialization */
  iVar9 = 0;
  memset(local_520, 0, 0x4d4); /* compiler bulk-zero initialization */
  pIVar13 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  iVar9 = st::fn_0072D7F0((int *)&stack0xffffffb8,0);
  if (iVar9 == 0) {
    this_00[0x1d].field_0xa9 = 0;
    if (*(int *)((int)&this_00[0x22].field_0066 + 2) != 0) {
      st::fn_006AB060((void **)((int)&this_00[0x22].field_0066 + 2));
    }
    if (*(int *)&this_00[0x22].field_0x6c != 0) {
      st::fn_006AB060((void **)&this_00[0x22].field_0x6c);
    }
    if (*(int *)&this_00[0x22].field_0x74 != 0) {
      st::fn_006AB060((void **)&this_00[0x22].field_0x74);
    }
    iVar9 = 1;
    puVar10 = (byte *)(*(int *)&this_00->field_0x5d + 0x28);
    uVar5 = st::fn_006B4FE0(*(int *)&this_00->field_0x5d);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar6 = st::fn_006B50C0(0x1bf,0x175,(uint)*(ushort *)(*(int *)&this_00->field_0x5d + 0xe),uVar5,
                         puVar10,iVar9);
    *(undefined4 *)((int)&this_00[0x22].field_0066 + 2) = uVar6;
    ptVar7 = st::fn_006C4880(g_dDXContext_0080759C,0x13,0x5e,0x1bf,0x175,8);
    *(LPBITMAPINFO *)&this_00[0x22].field_0x6c = ptVar7;
    ptVar7 = st::fn_006C4880(g_dDXContext_0080759C,0x1e9,0x5e,0x124,0x175,8);
    *(LPBITMAPINFO *)&this_00[0x22].field_0x74 = ptVar7;
    pDVar8 = st::fn_006AE290(nullptr,0x14,0x2e,10);
    *(DArrayTy **)&this_00[0x22].field_0x80 = pDVar8;
    local_523 = 1;
    st::fn_006AE1C0(pDVar8,local_550);
    pDVar8 = st::fn_006AE290(nullptr,0x14,0x68,10);
    *(DArrayTy **)&this_00[0x22].field_0x84 = pDVar8;
    pDVar8 = st::fn_006B54F0(nullptr,1,1);
    *(DArrayTy **)&this_00[0x1e].field_0x4e = pDVar8;
    st::fn_006B5AA0(&pDVar8->flags,&DAT_008016a0);
    pDVar8 = st::fn_006B54F0(nullptr,1,1);
    *(DArrayTy **)&this_00[0x1e].field_0x52 = pDVar8;
    st::fn_006B5AA0(&pDVar8->flags,&DAT_008016a0);
    pDVar8 = st::fn_006B54F0(nullptr,1,1);
    *(DArrayTy **)&this_00[0x22].field_0x7c = pDVar8;
    st::fn_006B5AA0(&pDVar8->flags,&DAT_008016a0);
    local_dc8[0] = 0;
    local_dc8[1] = 2;
    local_da8 = 0x19;
    local_da4 = 0x5f;
    local_dc8[2] = 1;
    local_dc8[3] = 0;
    pAVar2 = *(AnonShape_00710790_4CBB90D4 **)&this_00[0x1d].field_0xc0;
    local_dc8[4] = 0x1a6 - *(int *)&this_00[0x1e].field_0xb2;
    if (*(int *)(pAVar2 + 1) != 0) {
      st::fn_00710790(pAVar2);
    }
    local_db4 = pAVar2->field_008A;
    local_dac = (undefined4)(0x15e / (longlong)local_db4);
    local_d14 = 0;
    local_d0c[0] = 0;
    local_d0c[3] = *(undefined4 *)&this_00[0x1f].field_0x5c;
    local_d0c[2] = *(undefined4 *)&this_00[0x1f].field_0x58;
    local_d8c = 2;
    local_d10 = 2;
    local_d0c[1] = 2;
    local_cfc = *(undefined4 *)&this_00[0x1f].field_0x60;
    local_ca8 = 2;
    local_b90 = 2;
    local_db0 = 1;
    local_d88 = 0x6982;
    local_d18 = 4;
    local_cf8 = *(undefined4 *)&this_00[0x1f].field_0x64;
    local_bfc = 500;
    local_bf8 = 0x32;
    local_ca4 = 0x6334;
    uVar6 = *(undefined4 *)&this_00[0x1e].field_0xae;
    iVar14 = 0;
    local_d90 = this_00->field_0008;
    local_cac = local_d90;
    puVar10 = (byte *)(local_d0c);
    puVar12 = (byte *)(local_b8c);
    memmove(puVar12, puVar10, 0x17c); /* compiler REP MOVS byte copy */
    local_b8c[2] = *(undefined4 *)&this_00[0x1e].field_0xaa;
    local_b78 = *(undefined4 *)&this_00[0x1e].field_0xb6;
    local_b7c = *(undefined4 *)&this_00[0x1e].field_0xb2;
    local_a00 = *(undefined4 *)&this_00[0x20].field_0x6;
    local_9f8 = *(undefined4 *)((int)&this_00[0x20].field_000C + 2);
    local_9fc = *(undefined4 *)((int)&this_00[0x20].field_0008 + 2);
    puVar1 = &this_00[0x1e].field_0x7a;
    local_b24 = 0x6333;
    local_a10 = 3;
    local_a0c = 1;
    local_a04 = 0;
    local_9f4 = 0x110;
    local_9f0 = 0xe;
    local_9b8 = 2;
    local_9b4 = 0x6335;
    local_b8c[3] = uVar6;
    local_9bc = local_d90;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,8,(undefined4 *)puVar1,nullptr,local_dc8,
               iVar14);
    uVar6 = *(undefined4 *)puVar1;
    *(undefined4 *)&this_00->field_0x2d = 5;
    st::fn_006E6080(this_00,2,uVar6,(undefined4 *)&this_00->field_0x1d);
    if (*(uint *)&this_00[0x1e].field_0x92 != 0xffffffff) {
      st::fn_006B34D0
                (*(uint **)&this_00[0x1e].field_0xd6,*(uint *)&this_00[0x1e].field_0x92,0xfffffffe,
                 *(uint *)&this_00[0x1e].field_0xaa,*(uint *)&this_00[0x1e].field_0xae);
    }
    if (*(uint *)&this_00[0x1f].field_0x40 != 0xffffffff) {
      st::fn_006B34D0
                (*(uint **)&this_00[0x1f].field_0x84,*(uint *)&this_00[0x1f].field_0x40,0xfffffffe,
                 *(uint *)&this_00[0x1f].field_0x58,*(uint *)&this_00[0x1f].field_0x5c);
    }
    if (*(uint *)&this_00[0x1f].field_0xd1 != 0xffffffff) {
      st::fn_006B34D0
                (*(uint **)&this_00[0x20].field_0x32,*(uint *)&this_00[0x1f].field_0xd1,0xfffffffe,
                 *(uint *)&this_00[0x20].field_0x6,*(uint *)((int)&this_00[0x20].field_0008 + 2));
    }
    iVar9 = *(int *)&this_00[0x22].field_0x78;
    uVar6 = *(undefined4 *)puVar1;
    *(undefined4 *)&this_00->field_0x2d = 0x28;
    *(undefined2 *)&this_00->field_0x31 = 1;
    *(undefined2 *)&this_00->field_0x33 = *(undefined2 *)(iVar9 + 8);
    st::fn_006E6080(this_00,2,uVar6,(undefined4 *)&this_00->field_0x1d);
    iVar9 = *(int *)&this_00[0x22].field_0x78;
    *(undefined4 *)&this_00->field_0x2d = 0x22;
    *(undefined2 *)&this_00->field_0x31 = 0;
    iVar9 = *(int *)(iVar9 + 8);
    if (iVar9 < 0x19) {
      sVar4 = 0;
    }
    else {
      sVar4 = (short)iVar9 + -0x19;
    }
    uVar6 = *(undefined4 *)puVar1;
    *(short *)&this_00->field_0x33 = sVar4;
    st::fn_006E6080(this_00,2,uVar6,(undefined4 *)&this_00->field_0x1d);
    memset(local_1654, 0, 0x88c); /* compiler bulk-zero initialization */
    iVar9 = 0;
    local_1654[2] = *(undefined4 *)&this_00[0x1d].field_0xc0;
    local_1654[8] = *(undefined4 *)&this_00[0x22].field_0x7c;
    local_1608 = this_00->field_0008;
    local_1654[0] = 1;
    local_1654[1] = 9;
    local_1654[3] = 0x19;
    local_1654[4] = 0x1bd;
    local_1654[5] = 0x15b;
    local_1654[6] = 0x14;
    local_1654[7] = 0x104;
    local_df0 = 0x100;
    local_1604 = 2;
    local_1600 = 0x6983;
    local_15c4 = 2;
    local_15c0 = 0xc0a2;
    local_15c8 = local_1608;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,(undefined4 *)&this_00[0x1e].field_0x76,
               nullptr,local_1654,0);
    st::fn_00402DBF(1,this_00->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
    pIVar13 = nullptr;
    uStackY_74 = 0x59e0ab;
    st::fn_00402DBF(1,this_00->field_0008,2,0xc0a4,2,0x8000031,0,0,0,0,0,0);
    st::fn_00402DBF(1,this_00->field_0008,2,0xc0a5,2,0x4000002f,0,0,0,0,0,0);
    uVar6 = st::fn_0040361B(this_00,1,1,0x17c,0x1be,0x55,0x14,0x6901,0x6984);
    *(undefined4 *)&this_00[0x1e].field_0x7e = uVar6;
    uVar6 = st::fn_0040361B(this_00,1,0,499,0x156,0xe6,0x19,0x6903,0x6986);
    *(undefined4 *)&this_00[0x1e].field_0x8a = uVar6;
    uVar6 = st::fn_0040361B(this_00,1,1,0x261,0x1b3,0xa0,0x19,0x6902,0x6985);
    local_3e0 = *(int *)&this_00[0x20].field_0x9f;
    *(undefined4 *)&this_00[0x1e].field_0x82 = uVar6;
    local_a0 = this_00->field_0008;
    local_520[4] = 0x10b - local_3e0;
    local_520[0] = 0;
    local_520[2] = 0x1ea;
    local_520[3] = 0x5f;
    local_50c = 0xf2;
    local_508 = 0;
    local_504 = 0;
    local_4f8 = local_a0;
    local_4f4 = 2;
    local_4f0 = 0x8160;
    local_4d8 = local_a0;
    local_4d4 = 2;
    local_4d0 = 0x8161;
    local_4b8 = local_a0;
    local_4b4 = 2;
    local_4b0 = 0x8162;
    local_498 = local_a0;
    local_494 = 2;
    local_490 = 0x8163;
    local_3f0[2] = *(undefined4 *)&this_00[0x20].field_0x97;
    local_3f4 = 2;
    local_3f0[0] = 0;
    local_3f0[1] = 2;
    local_3dc = *(undefined4 *)&this_00[0x20].field_0xa3;
    local_38c = 2;
    local_274 = 2;
    local_3f0[3] = *(undefined4 *)&this_00[0x20].field_0x9b;
    local_270[2] = *(undefined4 *)&this_00[0x21].field_0x45;
    local_2e0 = 500;
    local_2dc = 0x32;
    local_390 = local_a0;
    local_388 = 0x8164;
    puVar10 = (byte *)(local_3f0);
    puVar12 = (byte *)(local_270);
    memmove(puVar12, puVar10, 0x17c); /* compiler REP MOVS byte copy */
    local_270[3] = *(undefined4 *)&this_00[0x21].field_0x49;
    local_260 = *(undefined4 *)&this_00[0x21].field_0x4d;
    local_25c = *(undefined4 *)&this_00[0x21].field_0x51;
    local_e4 = *(undefined4 *)&this_00[0x21].field_0xd6;
    local_e0 = *(undefined4 *)&this_00[0x21].field_0xda;
    local_dc = *(undefined4 *)&this_00[0x21].field_0xde;
    local_208 = 0x8165;
    local_f4 = 3;
    local_f0 = 1;
    local_e8 = 0;
    local_d8 = 199;
    local_d4 = 0xe;
    local_9c = 2;
    local_98 = 0x8166;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,7,(undefined4 *)&this_00[0x1e].field_0x86,
               nullptr,local_520,0);
    if (*(uint *)&this_00[0x20].field_0x7f != 0xffffffff) {
      st::fn_006B34D0
                (*(uint **)&this_00[0x20].field_0xc3,*(uint *)&this_00[0x20].field_0x7f,0xfffffffe,
                 *(uint *)&this_00[0x20].field_0x97,*(uint *)&this_00[0x20].field_0x9b);
    }
    if (*(uint *)&this_00[0x21].field_0x2d != 0xffffffff) {
      st::fn_006B34D0
                (*(uint **)&this_00[0x21].field_0x71,*(uint *)&this_00[0x21].field_0x2d,0xfffffffe,
                 *(uint *)&this_00[0x21].field_0x45,*(uint *)&this_00[0x21].field_0x49);
    }
    if (*(uint *)&this_00[0x21].field_0xbe != 0xffffffff) {
      st::fn_006B34D0
                (*(uint **)&this_00[0x22].field_0x1f,*(uint *)&this_00[0x21].field_0xbe,0xfffffffe,
                 *(uint *)&this_00[0x21].field_0xd6,*(uint *)&this_00[0x21].field_0xda);
    }
    uVar6 = *(undefined4 *)&this_00[0x1e].field_0x4e;
    memset(local_1654, 0, 0x88c); /* compiler bulk-zero initialization */
    local_1654[2] = *(undefined4 *)&this_00[0x1d].field_0xbc;
    local_1628 = this_00->field_0008;
    local_1654[0] = 1;
    local_1654[1] = 0x89;
    local_1654[3] = 499;
    local_1654[4] = 0x18d;
    local_1654[5] = 0x10b;
    local_1654[6] = 0x16;
    local_1654[7] = 0x40;
    local_15c4 = 2;
    local_de0 = 2;
    local_1624 = 2;
    local_1604 = 2;
    local_1620 = 0x68ff;
    local_1600 = 0x6987;
    local_ddc = 0x6955;
    local_15c0 = 0xc0a3;
    local_1654[8] = uVar6;
    local_1608 = local_1628;
    local_15c8 = local_1628;
    local_de4 = local_1628;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,(undefined4 *)&this_00[0x1e].field_0x2a,
               nullptr,local_1654,0);
    local_1654[8] = *(undefined4 *)&this_00[0x1e].field_0x52;
    local_1654[4] = 0x1b5;
    local_1654[5] = 0x5f;
    local_1654[7] = 0x20;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,(undefined4 *)&this_00[0x1e].field_0x2e,
               nullptr,local_1654,0);
    *(undefined4 *)&this_00->field_0x2d = 0x61;
    *(undefined4 *)&this_00->field_0x35 = 0;
    st::fn_006E6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = pIVar13;
    return;
  }
  g_currentExceptionFrame = pIVar13;
  iVar14 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x758,0,iVar9,"%s");
  if (iVar14 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar9,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x758);
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
  DArrayTy *pDVar2;
  undefined4 uVar3;
  int iVar4;
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
  undefined4 local_84c;
  undefined4 local_848;
  undefined4 local_844;
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
  iVar5 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar5 == 0) {
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00 = local_8;
    local_8->field_1AE8 = pDVar2;
    st::fn_006B5AA0(&pDVar2->flags,&DAT_00807e1d);
    pDVar2 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AEC = pDVar2;
    st::fn_006B5AA0(&pDVar2->flags,&DAT_008016a0);
    ppcVar6 = local_8d8;
    for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppcVar6 = nullptr;
      ppcVar6 = ppcVar6 + 1;
    }
    local_8d8[2] = this_00->field_1A73;
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
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC4,nullptr,local_8d8,0);
    local_8b8 = this_00->field_1AEC;
    local_8d8[4] = (ccFntTy *)0x13d;
    local_8d8[5] = (ccFntTy *)0xaa;
    local_8d8[6] = (ccFntTy *)0x14;
    local_8d8[7] = (ccFntTy *)0x10;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC8,nullptr,local_8d8,0);
    this_00->field_1EC2 = 0x100;
    this_00->field_1EC6 = 0xffffffff;
    this_00->field_1ECA = 0;
    uVar3 = st::fn_0040361B((MMObjTy *)this_00,1,1,0xcd,0x16f,0x186,0x19,0x6904,0x698b);
    this_00->field_1EB6 = uVar3;
    this_00->field_002D = 0x61;
    *(undefined4 *)&this_00->field_0x35 = 0;
    st::fn_006E6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x782,0,iVar5,"%s",
                             "FSGSTy::NewGameCtrls");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar5,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x782);
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
  uint uVar2;
  undefined4 uVar3;
  LPBITMAPINFO ptVar4;
  DArrayTy *pDVar5;
  FSGSTy_field_1EBEDArray *pFVar6;
  int iVar7;
  int iVar8;
  byte *puVar9;
  byte *puVar11;
  ccFntTy **ppcVar12;
  ushort *puVar13;
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

  ppcVar12 = local_dac;
  local_8 = this;
  for (iVar8 = 0x223; iVar8 != 0; iVar8 = iVar8 + -1) {
    *ppcVar12 = nullptr;
    ppcVar12 = ppcVar12 + 1;
  }
  memset(local_520, 0, 0x4d4); /* compiler bulk-zero initialization */
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar8 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar8 == 0) {
    if (local_8->field_1E8E != 0) {
      st::fn_006AB060((void **)&local_8->field_1E8E);
    }
    if (this_00->field_1E92 != nullptr) {
      st::fn_006AB060(&this_00->field_1E92);
    }
    iVar8 = 1;
    puVar13 = this_00->field_005D + 0x14;
    uVar2 = st::fn_006B4FE0((int)this_00->field_005D);
    uVar3 = st::fn_006B50C0(0x174,0x175,(uint)this_00->field_005D[7],uVar2,(undefined4 *)puVar13,iVar8);
    this_00->field_1E8E = uVar3;
    ptVar4 = st::fn_006C4880(g_dDXContext_0080759C,0x199,0x5e,0x174,0x175,8);
    this_00->field_1E92 = ptVar4;
    ptVar4 = st::fn_006C4880(g_dDXContext_0080759C,0x13,0x5e,0x174,0x175,8);
    this_00->field_1E9A = ptVar4;
    pDVar5 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AE8 = pDVar5;
    st::fn_006B5AA0(&pDVar5->flags,&DAT_008016a0);
    pDVar5 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1AEC = pDVar5;
    st::fn_006B5AA0(&pDVar5->flags,&DAT_008016a0);
    pFVar6 = (FSGSTy_field_1EBEDArray *)
             st::fn_006AE290(nullptr,0x14,0x25c,10);
    this_00->field_1EBE = pFVar6;
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
    puVar9 = (byte *)(local_3f0);
    puVar11 = (byte *)(local_270);
    memmove(puVar11, puVar9, 0x17c); /* compiler REP MOVS byte copy */
    iVar8 = 0;
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
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,7,&this_00->field_1B20,nullptr,local_520,0);
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
    ppcVar12 = local_dac;
    for (iVar8 = 0x223; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppcVar12 = nullptr;
      ppcVar12 = ppcVar12 + 1;
    }
    local_dac[2] = this_00->field_1A73;
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
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC4,nullptr,local_dac,0);
    local_d8c = this_00->field_1AEC;
    local_dac[1] = (ccFntTy *)0x89;
    local_dac[4] = (ccFntTy *)0x154;
    local_dac[7] = (ccFntTy *)0x10;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC8,nullptr,local_dac,0);
    this_00->field_1EC2 = 0;
    this_00->field_1EC6 = 0xffffffff;
    this_00->field_1ECA = 0;
    uVar3 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x230,0x17a,0xd3,0x19,0x6904,0x6989);
    this_00->field_1EB6 = uVar3;
    uVar3 = st::fn_0040361B((MMObjTy *)this_00,1,0,0x1a3,0x196,0x160,0x19,0x6905,0x698a);
    this_00->field_1EBA = uVar3;
    uVar3 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x1fd,0x1b5,0xab,0x19,0x6903,0x698d);
    this_00->field_1B24 = uVar3;
    this_00->field_002D = 0x61;
    *(undefined4 *)&this_00->field_0x35 = 0;
    st::fn_006E6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar7 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x7f0,0,iVar8,"%s",
                             "FSGSTy::JoinGameCtrls");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar8,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x7f0);
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
  DArrayTy *pDVar2;
  uint uVar3;
  undefined4 uVar4;
  LPBITMAPINFO ptVar5;
  int iVar6;
  int iVar7;
  ccFntTy **ppcVar8;
  ushort *puVar9;
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

  ppcVar8 = local_8e0;
  local_10 = this;
  for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppcVar8 = nullptr;
    ppcVar8 = ppcVar8 + 1;
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
    st::fn_006B5AA0(&pDVar2->flags,&DAT_008016a0);
    if (this_00->field_1E8E != 0) {
      st::fn_006AB060((void **)&this_00->field_1E8E);
    }
    if (this_00->field_1E92 != nullptr) {
      st::fn_006AB060(&this_00->field_1E92);
    }
    iVar6 = 1;
    puVar9 = this_00->field_005D + 0x14;
    uVar3 = st::fn_006B4FE0((int)this_00->field_005D);
    uVar4 = st::fn_006B50C0(0x2e1,0x175,(uint)this_00->field_005D[7],uVar3,(undefined4 *)puVar9,iVar6);
    this_00->field_1E8E = uVar4;
    ptVar5 = st::fn_006C4880(g_dDXContext_0080759C,0x22,0x5e,0x2e1,0x175,8);
    this_00->field_1E92 = ptVar5;
    uVar4 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x2c,0x90,0x96,0x19,0x6906,0x698e);
    this_00->field_1EB6 = uVar4;
    uVar4 = st::fn_0040361B((MMObjTy *)this_00,1,1,199,0x90,0x96,0x19,0x6907,0x698f);
    this_00->field_1EBA = uVar4;
    uVar4 = st::fn_0040361B((MMObjTy *)this_00,1,0,0x16c,0x90,0x19,0x19,0x6908,0x6990);
    this_00->field_1ED3 = uVar4;
    uVar4 = st::fn_0040361B((MMObjTy *)this_00,1,1,499,0x90,0x19,0x19,0x6909,0x6991);
    this_00->field_1ED7 = uVar4;
    uVar4 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x2b6,0x90,0x41,0x19,0x690a,0x6992);
    this_00->field_1B24 = uVar4;
    iVar7 = 0x6913;
    iVar6 = 0xdb;
    local_8 = &this_00->field_1EE7;
    local_c = 0xf;
    do {
      uVar4 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x50,iVar6,0xe9,0x10,iVar7,0);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x10;
      *local_8 = uVar4;
      local_8 = local_8 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    local_c = 0;
    ppcVar8 = local_8e0;
    for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
      *ppcVar8 = nullptr;
      ppcVar8 = ppcVar8 + 1;
    }
    local_8e0[2] = this_00->field_1A73;
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
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC4,nullptr,local_8e0,0);
    this_00->field_002D = 0x61;
    *(undefined4 *)&this_00->field_0x35 = 0;
    st::fn_006E6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar7 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x81d,0,iVar6,"%s",
                             "FSGSTy::LadderCtrls");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar6,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x81d);
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
  HoloTy *pHVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  DDXContext_008075A8 *pDVar8;
  uint uVar9;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x89c,0,iVar3,"%s"
                               ,"FSGSTy::DeleteCtrls");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x89c);
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
  switch(local_8->field_1A5F) {
  case CASE_2:
  case CASE_4:
  case CASE_5:
  case CASE_7:
    if (local_8->field_1A5F == CASE_7) {
      st::fn_004020F9(local_8);
    }
    else {
      st::fn_00405641(local_8);
    }
  case CASE_1:
    if (pFVar2->field_1F23 != nullptr) {
      st::fn_0040128A(pFVar2->field_1F23);
      st::fn_0072E2B0(pFVar2->field_1F23);
      pFVar2->field_1F23 = nullptr;
    }
    pHVar4 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F23 = pHVar4;
    if (pHVar4 != nullptr) {
      uVar9 = 0;
      cVar7 = '\x01';
      bVar6 = 0x10;
      iVar5 = 1;
      iVar3 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0xb4,0xaa,0x1b8,0x106);
      uVar9 = st::fn_0040459D(pFVar2->field_1F23,CASE_4,0xb4,0xaa,iVar3,iVar5,bVar6,cVar7,uVar9);
      if (uVar9 != 0) {
        pHVar4 = pFVar2->field_1F23;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = -1;
        uVar9 = *(uint *)&pFVar2->field_1F23->field_0x3;
        if (-1 < (int)uVar9) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar9);
        }
        st::fn_004055F1(pFVar2->field_1F23);
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0xb4,0xaa,0x1b8,0x106);
      st::fn_00402298(0xb4,0xaa,0xb4,0xaa,0x1b8,(byte *)0x106,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    }
    uVar9 = pFVar2->field_1ABC;
    pDVar8 = g_ddxContext_008075A8;
    break;
  case CASE_3:
    st::fn_00405641(local_8);
    if (pFVar2->field_1F23 != nullptr) {
      st::fn_0040128A(pFVar2->field_1F23);
      st::fn_0072E2B0(pFVar2->field_1F23);
      pFVar2->field_1F23 = nullptr;
    }
    pHVar4 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F23 = pHVar4;
    if (pHVar4 == nullptr) goto switchD_0059f6f7_default;
    uVar9 = 0;
    cVar7 = '\x01';
    bVar6 = 0x10;
    iVar5 = 1;
    iVar3 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x22,0x72,0x2e1,0x14c);
    uVar9 = st::fn_0040459D(pFVar2->field_1F23,CASE_4,0x22,0x72,iVar3,iVar5,bVar6,cVar7,uVar9);
    if (uVar9 != 0) {
      pHVar4 = pFVar2->field_1F23;
      pHVar4->field_0002 = 0;
      pHVar4->field_0017 = -1;
      uVar9 = *(uint *)&pFVar2->field_1F23->field_0x3;
      if (-1 < (int)uVar9) {
        st::fn_006B3430((int *)g_ddxContext_008075A8,uVar9);
      }
      st::fn_004055F1(pFVar2->field_1F23);
    }
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0x22,0x72,0x2e1,0x14c);
    st::fn_00402298(0x22,0x72,0x22,0x72,0x2e1,(byte *)0x14c,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    if (pFVar2->field_1B2C != 0xffffffff) {
      st::fn_006B3AF0((int *)pFVar2->field_1B70,pFVar2->field_1B2C);
    }
    if (pFVar2->field_1BBD != 0xffffffff) {
      st::fn_006B3AF0((int *)pFVar2->field_1C01,pFVar2->field_1BBD);
    }
    uVar9 = pFVar2->field_1C4E;
    if (uVar9 == 0xffffffff) goto switchD_0059f6f7_default;
    pDVar8 = (DDXContext_008075A8 *)pFVar2->field_1C92;
    break;
  case CASE_6:
    st::fn_0040580D(local_8);
    if (pFVar2->field_1F27 != nullptr) {
      st::fn_0040128A(pFVar2->field_1F27);
      st::fn_0072E2B0(pFVar2->field_1F27);
      pFVar2->field_1F27 = nullptr;
    }
    pHVar4 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F27 = pHVar4;
    if (pHVar4 != nullptr) {
      uVar9 = 0;
      cVar7 = '\x01';
      bVar6 = 0x10;
      iVar5 = 1;
      iVar3 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x13,0x5e,0x1bf,0x175);
      uVar9 = st::fn_0040459D(pFVar2->field_1F27,CASE_4,0x13,0x5e,iVar3,iVar5,bVar6,cVar7,uVar9);
      if (uVar9 != 0) {
        pHVar4 = pFVar2->field_1F27;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = -1;
        uVar9 = *(uint *)&pFVar2->field_1F27->field_0x3;
        if (-1 < (int)uVar9) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar9);
        }
        st::fn_004055F1(pFVar2->field_1F27);
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0x13,0x5e,0x1bf,0x175);
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
      st::fn_0040128A(pFVar2->field_1F2B);
      st::fn_0072E2B0(pFVar2->field_1F2B);
      pFVar2->field_1F2B = nullptr;
    }
    pHVar4 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F2B = pHVar4;
    if (pHVar4 == nullptr) goto switchD_0059f6f7_default;
    uVar9 = 0;
    cVar7 = '\x01';
    bVar6 = 0x10;
    iVar5 = 1;
    iVar3 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0x175);
    uVar9 = st::fn_0040459D(pFVar2->field_1F2B,CASE_2,0x1e9,0x5e,iVar3,iVar5,bVar6,cVar7,uVar9);
    if (uVar9 != 0) {
      pHVar4 = pFVar2->field_1F2B;
      pHVar4->field_0002 = 0;
      pHVar4->field_0017 = -1;
      uVar9 = *(uint *)&pFVar2->field_1F2B->field_0x3;
      if (-1 < (int)uVar9) {
        st::fn_006B3430((int *)g_ddxContext_008075A8,uVar9);
      }
      st::fn_004055F1(pFVar2->field_1F2B);
    }
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0x175);
    st::fn_00402298(0x1e9,0x5e,0x1e9,0x5e,0x124,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    if (pFVar2->field_1CDF != 0xffffffff) {
      st::fn_006B3AF0((int *)pFVar2->field_1D23,pFVar2->field_1CDF);
    }
    if (pFVar2->field_1D70 != 0xffffffff) {
      st::fn_006B3AF0((int *)pFVar2->field_1DB4,pFVar2->field_1D70);
    }
    uVar9 = pFVar2->field_1E01;
    if (uVar9 == 0xffffffff) goto switchD_0059f6f7_default;
    pDVar8 = (DDXContext_008075A8 *)pFVar2->field_1E45;
    break;
  case CASE_8:
    st::fn_0040520E(local_8);
    if (pFVar2->field_1F2F != nullptr) {
      st::fn_0040128A(pFVar2->field_1F2F);
      st::fn_0072E2B0(pFVar2->field_1F2F);
      pFVar2->field_1F2F = nullptr;
    }
    pHVar4 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F2F = pHVar4;
    if (pHVar4 != nullptr) {
      uVar9 = 0;
      cVar7 = '\x01';
      bVar6 = 0x10;
      iVar5 = 1;
      iVar3 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x199,0x5e,0x174,0x175);
      uVar9 = st::fn_0040459D(pFVar2->field_1F2F,CASE_2,0x199,0x5e,iVar3,iVar5,bVar6,cVar7,uVar9);
      if (uVar9 != 0) {
        pHVar4 = pFVar2->field_1F2F;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = -1;
        uVar9 = *(uint *)&pFVar2->field_1F2F->field_0x3;
        if (-1 < (int)uVar9) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar9);
        }
        st::fn_004055F1(pFVar2->field_1F2F);
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0x199,0x5e,0x174,0x175);
      st::fn_00402298(0x199,0x5e,0x199,0x5e,0x174,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    }
    if (pFVar2->field_1F2B != nullptr) {
      st::fn_0040128A(pFVar2->field_1F2B);
      st::fn_0072E2B0(pFVar2->field_1F2B);
      pFVar2->field_1F2B = nullptr;
    }
    pHVar4 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F2B = pHVar4;
    if (pHVar4 == nullptr) goto switchD_0059f6f7_default;
    uVar9 = 0;
    cVar7 = '\x01';
    bVar6 = 0x10;
    iVar5 = 1;
    iVar3 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x13,0x5e,0x174,0x175);
    uVar9 = st::fn_0040459D(pFVar2->field_1F2B,CASE_4,0x13,0x5e,iVar3,iVar5,bVar6,cVar7,uVar9);
    if (uVar9 != 0) {
      pHVar4 = pFVar2->field_1F2B;
      pHVar4->field_0002 = 0;
      pHVar4->field_0017 = -1;
      uVar9 = *(uint *)&pFVar2->field_1F2B->field_0x3;
      if (-1 < (int)uVar9) {
        st::fn_006B3430((int *)g_ddxContext_008075A8,uVar9);
      }
      st::fn_004055F1(pFVar2->field_1F2B);
    }
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0x13,0x5e,0x174,0x175);
    st::fn_00402298(0x13,0x5e,0x13,0x5e,0x174,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    if (pFVar2->field_1CDF != 0xffffffff) {
      st::fn_006B3AF0((int *)pFVar2->field_1D23,pFVar2->field_1CDF);
    }
    if (pFVar2->field_1D70 != 0xffffffff) {
      st::fn_006B3AF0((int *)pFVar2->field_1DB4,pFVar2->field_1D70);
    }
    uVar9 = pFVar2->field_1E01;
    if (uVar9 == 0xffffffff) goto switchD_0059f6f7_default;
    pDVar8 = (DDXContext_008075A8 *)pFVar2->field_1E45;
    break;
  case CASE_9:
    st::fn_0040418D(local_8);
    if (pFVar2->field_1F23 != nullptr) {
      st::fn_0040128A(pFVar2->field_1F23);
      st::fn_0072E2B0(pFVar2->field_1F23);
      pFVar2->field_1F23 = nullptr;
    }
    pHVar4 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F23 = pHVar4;
    if (pHVar4 != nullptr) {
      uVar9 = 0;
      cVar7 = '\x01';
      bVar6 = 0x10;
      iVar5 = 1;
      iVar3 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x22,0x5e,0x2e1,0x175);
      uVar9 = st::fn_0040459D(pFVar2->field_1F23,CASE_4,0x22,0x5e,iVar3,iVar5,bVar6,cVar7,uVar9);
      if (uVar9 != 0) {
        pHVar4 = pFVar2->field_1F23;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = -1;
        uVar9 = *(uint *)&pFVar2->field_1F23->field_0x3;
        if (-1 < (int)uVar9) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar9);
        }
        st::fn_004055F1(pFVar2->field_1F23);
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0x22,0x5e,0x2e1,0x175);
      st::fn_00402298(0x22,0x5e,0x22,0x5e,0x2e1,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    }
    uVar9 = pFVar2->field_1ABC;
    pDVar8 = g_ddxContext_008075A8;
    break;
  case CASE_A:
    st::fn_00405641(local_8);
    if (pFVar2->field_1F23 != nullptr) {
      st::fn_0040128A(pFVar2->field_1F23);
      st::fn_0072E2B0(pFVar2->field_1F23);
      pFVar2->field_1F23 = nullptr;
    }
    pHVar4 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F23 = pHVar4;
    if (pHVar4 != nullptr) {
      uVar9 = 0;
      cVar7 = '\x01';
      bVar6 = 0x10;
      iVar5 = 1;
      iVar3 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0xb4,0x5e,0x1b8,0x17a);
      uVar9 = st::fn_0040459D(pFVar2->field_1F23,CASE_4,0xb4,0x5e,iVar3,iVar5,bVar6,cVar7,uVar9);
      if (uVar9 != 0) {
        pHVar4 = pFVar2->field_1F23;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = -1;
        uVar9 = *(uint *)&pFVar2->field_1F23->field_0x3;
        if (-1 < (int)uVar9) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar9);
        }
        st::fn_004055F1(pFVar2->field_1F23);
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0xb4,0x5e,0x1b8,0x17a);
      st::fn_00402298(0xb4,0x5e,0xb4,0x5e,0x1b8,(byte *)0x17a,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    }
    uVar9 = pFVar2->field_1ABC;
    pDVar8 = g_ddxContext_008075A8;
    break;
  default:
    goto switchD_0059f6f7_default;
  }
  st::fn_006B3AF0((int *)pDVar8,uVar9);
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
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  if (((this->field_1A5F == CASE_1) && (this->field_1AC0 != nullptr)) &&
     (-1 < (int)this->field_1ABC)) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar5 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    pFVar4 = local_8;
    if (iVar5 == 0) {
      puVar2 = local_8->field_1AC0;
      uVar10 = *(uint *)(puVar2 + 10);
      if (uVar10 == 0) {
        uVar10 = ((uint)puVar2[7] * *(int *)(puVar2 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar2 + 4);
      }
      puVar6 = (undefined4 *)st::fn_006B4FA0((int *)puVar2);
      for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar6 = 0xffffffff;
        puVar6 = puVar6 + 1;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar6 = 0xff;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      st::fn_00710A90(pFVar4->field_1A73,(int)pFVar4->field_1AC0,0,0,0x16,0x1b8,0xf0);
      if (param_1 < param_2) {
        iVar5 = (param_1 * 100) / param_2;
        pcVar7 = st::fn_006B0140(0x2571,g_hINSTANCE_00807618);
        st::external_00000080((LPSTR)&DAT_0080f33a,"%s%d%%",pcVar7,iVar5);
      }
      else {
        pcVar7 = st::fn_006B0140(0x2570,g_hINSTANCE_00807618);
        uVar10 = 0xffffffff;
        do {
          pcVar11 = pcVar7;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar11 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar11;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar7 = pcVar11 + -uVar10;
        pcVar11 = (char *)&DAT_0080f33a;
        memmove(pcVar11, pcVar7, uVar10); /* compiler REP MOVS byte copy */
      }
      st::fn_00711B70(pFVar4->field_1A73,&DAT_0080f33a,-1,-1,2,-1,-1);
      st::fn_006B35D0((int *)g_ddxContext_008075A8,pFVar4->field_1ABC);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar8 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x909,0,iVar5,"%s"
                               ,"FSGSTy::ConnectProc");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x909);
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
  StartSystemTy *pSVar1;
  CursorClassTy *this_00;
  FSGSTy *pFVar3;
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
      iVar4 = g_cursorClass_00802A30->field_00C9;
      iVar5 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      this_00->field_0494 = 0xffff;
      st::fn_0040507E(this_00,CASE_0,iVar5,iVar4);
      st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
      this_00->field_00D2 = 0;
      this_00->field_04DF = -1;
    }
    pFVar3 = local_8;
    local_8->CloseButtons();
    pFVar3->field_1A61 = 2;
    pSVar1 = pFVar3->field_1A5B;
    if (pSVar1->field_02E6 != nullptr) {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      st::fn_00401A9B(pSVar1->field_02E6,&local_18);
    }
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar5 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x918,0,iVar4,"%s",
                             "FSGSTy::DoLogon");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x918);
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
  char *pcVar5;
  undefined4 *puVar6;
  uint *resourceString;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  STMessage *pSVar10;
  dword *pdVar11;
  int iVar12;
  int iVar13;
  int iVar14;
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
    iVar12 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x935,0,iVar4,
                                "%s","FSGSTy::CheckUpdate");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x935);
    return;
  }
  st::external_00000080((LPSTR)&DAT_0080f33a,"%s%s%s",&DAT_00807680,PTR_s_UPDATES__0079c020,
            PTR_s_ST_INF_0079c024);
  pcVar5 = (char *)st::fn_0040363E(&DAT_0080f33a,&local_8,nullptr,nullptr);
  this_01 = local_c;
  if (pcVar5 == nullptr) {
    st::fn_00402CED(local_c);
    g_currentExceptionFrame = local_90.previous;
    return;
  }
  uVar7 = 0xffffffff;
  do {
    pcVar9 = pcVar5;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar9 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar9;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar5 = pcVar9 + -uVar7;
  pcVar9 = (char *)&DAT_0080f126;
  memmove(pcVar9, pcVar5, uVar7); /* compiler REP MOVS byte copy */
  uVar8 = 0;
  puVar2 = local_c->field_1AC0;
  uVar7 = *(uint *)(puVar2 + 10);
  if (uVar7 == 0) {
    uVar7 = ((uint)puVar2[7] * *(int *)(puVar2 + 2) + 0x1f >> 3 & 0x1ffffffc) * *(int *)(puVar2 + 4);
  }
  puVar6 = (undefined4 *)st::fn_006B4FA0((int *)puVar2);
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar6 = 0xff;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  st::fn_00710A90(this_01->field_1A73,(int)this_01->field_1AC0,0,0,0x16,0x1b8,0xf0);
  iVar14 = -1;
  iVar13 = -1;
  uVar7 = 2;
  iVar12 = -1;
  iVar4 = -2;
  resourceString = (uint *)st::fn_006B0140(0x25bd,g_hINSTANCE_00807618);
  st::fn_00711B70(this_01->field_1A73,resourceString,iVar4,iVar12,uVar7,iVar13,iVar14);
  st::fn_006B35D0((int *)g_ddxContext_008075A8,this_01->field_1ABC);
  pSVar10 = &local_2c;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    pSVar10->unknown_00 = 0;
    pSVar10 = (STMessage *)&pSVar10->unknown_04;
  }
  memset(local_4c, 0, 0x20); /* compiler bulk-zero initialization */
  local_4c[2] = this_01->field_0008;
  local_2c.unknown_0c = 2;
  local_2c.id = MESS_FSGSTY_6957;
  local_4c[3] = 2;
  local_4c[4] = 0x6956;
  this_00 = this_01->field_1A5B->field_02E6;
  local_2c.unknown_08 = local_4c[2];
  if (this_00 != nullptr) {
    st::fn_00403FA8(this_00,0x25b7,'\x01',&local_2c.unknown_00,local_4c,nullptr,local_8
                       ,0x25b8);
    g_currentExceptionFrame = local_90.previous;
    return;
  }
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
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  if (((this->field_1A5F == CASE_1) && (this->field_1AC0 != nullptr)) &&
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
      st::fn_00710A90(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0,0x16,0x1b8,0xf0);
      pcVar5 = st::fn_006B0140(0x25bb,g_hINSTANCE_00807618);
      pcVar6 = st::fn_006B0140(0x25ba,g_hINSTANCE_00807618);
      st::external_00000080((LPSTR)&DAT_0080f33a,"%s %d%%\n(%d %s)",pcVar6,param_1,param_2,pcVar5);
      st::fn_00711B70(pFVar3->field_1A73,&DAT_0080f33a,-2,-1,2,-1,-1);
      st::fn_006B35D0((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar7 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x941,0,errorCode,
                               "%s","FSGSTy::Download");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x941);
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
  undefined4 *puVar5;
  uint *resourceString;
  uint uVar6;
  uint uVar7;
  STMessage *pSVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  InternalExceptionFrame local_6c;
  STMessage local_28;
  FSGSTy *local_8;

  if (((this->field_1A5F == CASE_1) && (this->field_1AC0 != nullptr)) &&
     (-1 < (int)this->field_1ABC)) {
    local_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_6c;
    local_8 = this;
    iVar4 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
    this_01 = g_cursorClass_00802A30;
    if (iVar4 == 0) {
      if (g_cursorClass_00802A30 != nullptr) {
        iVar4 = g_cursorClass_00802A30->field_00C9;
        iVar9 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_1;
        this_01->field_0494 = 0xffff;
        st::fn_0040507E(this_01,CASE_0,iVar9,iVar4);
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
      uVar7 = *(uint *)(puVar1 + 10);
      if (uVar7 == 0) {
        uVar7 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar1 + 4);
      }
      puVar5 = (undefined4 *)st::fn_006B4FA0((int *)puVar1);
      for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar5 = 0xff;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      st::fn_00710A90(this_02->field_1A73,(int)this_02->field_1AC0,0,0,0x16,0x1b8,0xf0);
      iVar11 = -1;
      iVar10 = -1;
      uVar7 = 2;
      iVar9 = -1;
      iVar4 = -2;
      resourceString = (uint *)st::fn_006B0140(0x25b9,g_hINSTANCE_00807618);
      st::fn_00711B70(this_02->field_1A73,resourceString,iVar4,iVar9,uVar7,iVar10,iVar11);
      st::fn_006B35D0((int *)g_ddxContext_008075A8,this_02->field_1ABC);
      pSVar2 = this_02->field_1A5B;
      pSVar8 = &local_28;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        pSVar8->unknown_00 = 0;
        pSVar8 = (STMessage *)&pSVar8->unknown_04;
      }
      local_28.unknown_08 = this_02->field_0008;
      local_28.unknown_0c = 2;
      local_28.id = MESS_CHOOSEMAPTY_6956;
      this_00 = pSVar2->field_02E6;
      if (this_00 != nullptr) {
        st::fn_00403FA8(this_00,0x25bc,'\0',&local_28.unknown_00,nullptr,
                           nullptr,0,0);
        g_currentExceptionFrame = local_6c.previous;
        return;
      }
      this_02->GetMessage(&local_28);
      g_currentExceptionFrame = local_6c.previous;
      return;
    }
    g_currentExceptionFrame = local_6c.previous;
    iVar9 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x95b,0,iVar4,"%s"
                               ,"FSGSTy::Finished");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x95b);
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
  undefined1 *puVar1;
  char cVar2;
  int iVar4;
  byte *puVar5;
  AnonShape_006C7D20_41F6C243 *pAVar6;
  DWORD DVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  FSGSTy *pFVar13;
  char *pcVar14;
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

  if (((param_5 != nullptr) && (this->field_1A97 != nullptr)) &&
     (this->field_0065 == CASE_1)) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_c = this;
    iVar4 = st::fn_0072D7F0(local_58.jumpBuffer,0);
    pFVar13 = local_c;
    if (iVar4 == 0) {
      if ((param_3 == 1) || (param_3 == 8)) {
        if (local_c->field_1A9F != nullptr) {
          st::fn_006C6FC0(local_c->field_1A9F);
        }
        pFVar13->field_1A9F = nullptr;
        if (pFVar13->field_1A9B != nullptr) {
          st::fn_006AB060(&pFVar13->field_1A9B);
        }
      }
      if (param_3 == 1) {
        local_8 = nullptr;
        local_9c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_9c;
        iVar4 = st::fn_0072D7F0(local_9c.jumpBuffer,0);
        if (iVar4 == 0) {
          piVar8 = st::fn_006C7C50(param_5,param_4);
          pFVar13 = local_c;
          local_8 = piVar8;
          if (piVar8 != nullptr) {
            memset(&local_8e0, 0, 0x400); /* compiler bulk-zero initialization */
            st::fn_006C7BB0(piVar8,(undefined1 *)&local_8e0,&local_14);
            iVar4 = 0x80;
            local_10 = 0x40;
            do {
              puVar1 = (undefined1 *)((int)&local_8e0 + iVar4 + 1);
              (&pFVar13->field_1A97[1].field_0x12)[iVar4] = *(undefined1 *)((int)&local_8e0 + iVar4);
              (&pFVar13->field_1A97[1].field_0x11)[iVar4] = *puVar1;
              iVar10 = iVar4 + 2;
              iVar4 = iVar4 + 4;
              (puVar1 + (0xa8 - (int)(local_860 + 1)))[(int)pFVar13->field_1A97] =
                   *(undefined1 *)((int)&local_8e0 + iVar10);
              local_10 = local_10 + -1;
            } while (local_10 != 0);
            st::fn_006B0A20((AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,(int)local_860,
                         0x20,0x40,0);
            piVar8 = local_8;
            st::fn_006C7B90(local_8,0x4e,9);
            st::fn_006C79A0(piVar8,(undefined4 *)pFVar13->field_1A97,0);
            st::fn_006C7980(piVar8);
          }
          g_currentExceptionFrame = local_9c.previous;
        }
        else {
          g_currentExceptionFrame = local_9c.previous;
          pFVar13 = local_c;
          if (local_8 != nullptr) {
            st::fn_006C7980(local_8);
            pFVar13 = local_c;
          }
        }
      }
      else if (param_3 == 8) {
        pFVar13->field_1AA3 = 0;
        local_e0.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_e0;
        iVar4 = st::fn_0072D7F0(local_e0.jumpBuffer,0);
        pFVar13 = local_c;
        if (iVar4 == 0) {
          puVar5 = (byte *)(st::fn_006AAC70(param_4));
          pFVar13 = local_c;
          local_c->field_1A9B = puVar5;
          if (puVar5 != nullptr) {
            memmove(puVar5, param_5, param_4); /* compiler REP MOVS byte copy */
            pAVar6 = (AnonShape_006C7D20_41F6C243 *)
                     st::fn_006C7DC0(local_c->field_1A9B);
            pFVar13->field_1A9F = pAVar6;
            if (pAVar6 != nullptr) {
              memset(&local_4e0, 0, 0x400); /* compiler bulk-zero initialization */
              st::fn_006C7D20(pAVar6,(int)&local_4e0,&local_10);
              iVar4 = 0x80;
              local_8 = (int *)0x40;
              do {
                puVar1 = (undefined1 *)((int)&local_4e0 + iVar4 + 1);
                (&pFVar13->field_1A97[1].field_0x12)[iVar4] =
                     *(undefined1 *)((int)&local_4e0 + iVar4);
                (&pFVar13->field_1A97[1].field_0x11)[iVar4] = *puVar1;
                iVar10 = iVar4 + 2;
                iVar4 = iVar4 + 4;
                (puVar1 + (0xa8 - (int)(local_460 + 1)))[(int)pFVar13->field_1A97] =
                     *(undefined1 *)((int)&local_4e0 + iVar10);
                local_8 = (int *)((int)local_8 + -1);
              } while (local_8 != nullptr);
              st::fn_006B0A20((AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,
                           (int)local_460,0x20,0x40,0);
              st::fn_006C7D00(pFVar13->field_1A9F,0x4e,9);
              st::fn_006C7070
                        (pFVar13->field_1A9F,(undefined4 *)pFVar13->field_1A97,0);
              iVar4 = st::fn_006C7000(pFVar13->field_1A9F);
              pFVar13->field_1AA3 = iVar4;
              if (iVar4 < 1) {
                st::fn_006C6FC0(pFVar13->field_1A9F);
                pFVar13->field_1A9F = nullptr;
                st::fn_006AB060(&pFVar13->field_1A9B);
                pFVar13->field_1AA3 = 0;
                g_currentExceptionFrame = local_e0.previous;
              }
              else {
                DVar7 = st::external_000000DA();
                pFVar13->field_1AA7 = DVar7;
                g_currentExceptionFrame = local_e0.previous;
              }
              goto LAB_005a1cfd;
            }
            st::fn_006AB060(&pFVar13->field_1A9B);
          }
          g_currentExceptionFrame = local_e0.previous;
        }
        else {
          g_currentExceptionFrame = local_e0.previous;
          if (local_c->field_1A9F != nullptr) {
            st::fn_006C6FC0(local_c->field_1A9F);
          }
          pFVar13->field_1A9F = nullptr;
          if (pFVar13->field_1A9B != nullptr) {
            st::fn_006AB060(&pFVar13->field_1A9B);
          }
          pFVar13->field_1AA3 = 0;
        }
      }
LAB_005a1cfd:
      st::fn_006B35D0((int *)g_ddxContext_008075A8,pFVar13->field_1A8F);
      if ((param_3 == 1) || (param_3 == 8)) {
        if (pFVar13->field_1AAB != (LPCSTR)0x0) {
          st::fn_006AB060(&pFVar13->field_1AAB);
        }
        uVar11 = 0xffffffff;
        pcVar9 = param_1;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        pcVar9 = st::fn_006AAC70(~uVar11);
        pFVar13->field_1AAB = pcVar9;
        if (pcVar9 != nullptr) {
          uVar11 = 0xffffffff;
          do {
            pcVar14 = param_1;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            pcVar14 = param_1 + 1;
            cVar2 = *param_1;
            param_1 = pcVar14;
          } while (cVar2 != '\0');
          uVar11 = ~uVar11;
          pcVar14 = pcVar14 + -uVar11;
          memmove(pcVar9, pcVar14, uVar11); /* compiler REP MOVS byte copy */
        }
        pFVar13->field_1AAF = param_2;
      }
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar10 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x9b5,0,iVar4,
                                "%s","FSGSTy::SetBanner");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x9b5);
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
  uint *puVar7;
  DArrayTy *pDVar8;
  DArrayTy *pDVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  bool bVar16;
  InternalExceptionFrame local_5c;
  DArrayTy *local_18;
  FSGSTy *local_14;
  uint local_10;
  uint *local_c;
  char local_5;

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
    iVar11 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x9ec,0,iVar6,
                                "%s","FSGSTy::AddMessage");
    if (iVar11 == 0) {
      st::fn_006A5E40(iVar6,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x9ec);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar6 = -1;
  pbVar14 = param_2;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar1 = *pbVar14;
    pbVar14 = pbVar14 + 1;
  } while (bVar1 != 0);
  if (iVar6 == -2) {
    uVar12 = 0xffffffff;
    pcVar10 = param_3;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    local_c = st::fn_006AAC10(~uVar12 + 4);
    if (local_c == nullptr) {
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    st::external_00000080((LPSTR)local_c,"%s%1d%s",&DAT_007c6ff0,param_1,param_3);
  }
  else {
    uVar12 = 0xffffffff;
    pbVar14 = param_2;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      bVar1 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar1 != 0);
    uVar13 = 0xffffffff;
    pcVar10 = param_3;
    do {
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    local_c = st::fn_006AAC10(~uVar12 + ~uVar13 + 0xc);
    if (local_c == nullptr) {
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    pbVar15 = &DAT_00807e1d;
    pbVar14 = param_2;
    do {
      bVar1 = *pbVar14;
      bVar16 = bVar1 < *pbVar15;
      if (bVar1 != *pbVar15) {
LAB_005a1fbe:
        iVar6 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
        goto LAB_005a1fc3;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar14[1];
      bVar16 = bVar1 < pbVar15[1];
      if (bVar1 != pbVar15[1]) goto LAB_005a1fbe;
      pbVar14 = pbVar14 + 2;
      pbVar15 = pbVar15 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_005a1fc3:
    if (iVar6 == 0) {
      st::external_00000080((LPSTR)local_c,s__s2_s>__s_1d_s_007cc4a0,&DAT_007c6ff0,param_2,&DAT_007c6ff0,param_1
                ,param_3);
    }
    else {
      st::external_00000080((LPSTR)local_c,s__s_1d_s>__s_1d_s_007cc48c,&DAT_007c6ff0,param_4,param_2,
                &DAT_007c6ff0,param_1,param_3);
    }
  }
  if (local_c != nullptr) {
    for (puVar7 = st::fn_0072E560(local_c,'\n'); puVar7 != nullptr;
        puVar7 = st::fn_0072E560(puVar7,'\n')) {
      *(undefined1 *)puVar7 = 0x20;
    }
    pDVar8 = st::fn_006B54F0(nullptr,1,10);
    local_18 = pDVar8;
    if (pDVar8 != nullptr) {
      local_10 = 0;
      local_5 = '\0';
      st::fn_006B5AA0(&pDVar8->flags,(char *)local_c);
      this_00 = local_14;
      pDVar9 = (DArrayTy *)
               st::fn_007121F0(local_14->field_1A77,&pDVar8->flags," ,.;:!?/\\()[]{}",
                                 0x1a6 - local_14->field_1B4C,0,0xffffffff,1);
      if (this_00->field_1A5F == CASE_6) {
        this_00->field_002D = 0x26;
        st::fn_006E6080(this_00,2,this_00->field_1B14,(undefined4 *)&this_00->field_0x1d);
        local_10 = (uint)*(ushort *)&this_00->field_0x33;
        if ((int)(this_00->field_1E9E[2] - 0x19) <= (int)local_10) {
          local_5 = '\x01';
        }
      }
      if (pDVar9 != nullptr) {
        st::fn_007129D0(this_00->field_1A77,(uint *)pDVar9,(uint *)pDVar9);
        pAVar3 = (AnonShape_006B7830_769CA2DF *)this_00->field_1E9E;
        iVar6 = pAVar3->field_0008 + pDVar9->elementSize;
        while (499 < iVar6) {
          st::fn_006B7830(pAVar3,0);
          pAVar3 = (AnonShape_006B7830_769CA2DF *)this_00->field_1E9E;
          iVar6 = pAVar3->field_0008 + pDVar9->elementSize;
        }
        iVar6 = 0;
        if (0 < (int)pDVar9->elementSize) {
          if ((int)pDVar9->elementSize < 1) {
            pcVar10 = nullptr;
            goto LAB_005a2188;
          }
          do {
            pcVar10 = *(char **)(pDVar9->growCapacity + iVar6 * 4);
LAB_005a2188:
            st::fn_006B5AA0(this_00->field_1E9E,pcVar10);
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)pDVar9->elementSize);
        }
        st::fn_006B5570(pDVar9);
        pDVar8 = local_18;
      }
      st::fn_006B5570(pDVar8);
      if (this_00->field_1A5F == CASE_6) {
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
  DArrayTy *array;
  FSGSTy *this_00;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  byte *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  byte local_b0 [48];
  InternalExceptionFrame local_80;
  undefined4 local_3c [11];
  undefined1 local_f;
  FSGSTy *local_c;
  undefined4 *local_8;

  if ((this->field_1A5F == CASE_6) && (this->field_1A60 == '\0')) {
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
        local_8 = DArrayAt<undefined4>(array, (uint)*(ushort *)&this_00->field_0x31);
      }
      else {
        local_8 = nullptr;
      }
      if (local_8 != nullptr) {
        puVar7 = (byte *)(local_8);
        pbVar8 = local_b0;
        memmove(pbVar8, puVar7, 0x2e); /* compiler REP MOVS byte copy */
        iVar3 = 0;
      }
      puVar7 = (byte *)(local_3c);
      memmove(puVar7, param_1, 0x2d); /* compiler REP MOVS byte copy */
      local_f = 0;
      st::fn_006AE1C0(array,local_3c);
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0xf3);
      st::fn_00402298(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',this_00->field_1E9A);
      this_00->field_002D = 0x28;
      *(dword *)&this_00->field_0x31 = this_00->field_1EA6->count;
      *(undefined2 *)&this_00->field_0x35 = 1;
      st::fn_006E6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
      this_00->field_002D = 0x20;
      if ((this_00->field_1EA6->count == 0) || (this_00->field_1A6B == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      *(undefined4 *)&this_00->field_0x31 = uVar4;
      st::fn_006E6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
      if (local_8 != nullptr) {
        uVar6 = 0;
        local_8 = (undefined4 *)this_00->field_1EA6->count;
        if (local_8 != nullptr) {
          if (local_8 == nullptr) {
            pbVar8 = nullptr;
            goto LAB_005a252f;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pbVar8 = (byte *)(this_00->field_1EA6->elementSize * uVar6 +
                             (int)this_00->field_1EA6->data);
LAB_005a252f:
            if (pbVar8 != nullptr) {
              pbVar9 = local_b0;
              do {
                bVar1 = *pbVar8;
                bVar10 = bVar1 < *pbVar9;
                if (bVar1 != *pbVar9) {
LAB_005a255d:
                  iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                  goto LAB_005a2562;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar8[1];
                bVar10 = bVar1 < pbVar9[1];
                if (bVar1 != pbVar9[1]) goto LAB_005a255d;
                pbVar8 = pbVar8 + 2;
                pbVar9 = pbVar9 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_005a2562:
              if (iVar3 == 0) {
                *(short *)&this_00->field_0x31 = (short)uVar6;
                *(undefined2 *)&this_00->field_0x37 = 1;
                *(undefined2 *)&this_00->field_0x35 = 1;
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
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0xa12,0,iVar3,"%s"
                               ,"FSGSTy::AddPlayer");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xa12);
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
  DArrayTy *pDVar2;
  FSGSTy *this_00;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint index;
  uint uVar7;
  byte *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  InternalExceptionFrame local_84;
  byte local_40 [48];
  FSGSTy *local_10;
  uint local_c;
  undefined4 *local_8;

  if ((this->field_1A5F == CASE_6) && (this->field_1A60 == '\0')) {
    local_84.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_84;
    local_10 = this;
    iVar4 = st::fn_0072D7F0(local_84.jumpBuffer,0);
    this_00 = local_10;
    if (iVar4 == 0) {
      local_10->field_002D = 0x26;
      st::fn_006E6080(local_10,2,local_10->field_1B20,(undefined4 *)&local_10->field_0x1d);
      pDVar2 = this_00->field_1EA6;
      uVar7 = pDVar2->count;
      if (*(ushort *)&this_00->field_0x31 < uVar7) {
        local_8 = DArrayAt<undefined4>(pDVar2, (uint)*(ushort *)&this_00->field_0x31);
      }
      else {
        local_8 = nullptr;
      }
      local_c = uVar7;
      if (local_8 != nullptr) {
        puVar8 = (byte *)(local_8);
        pbVar9 = local_40;
        memmove(pbVar9, puVar8, 0x2e); /* compiler REP MOVS byte copy */
      }
      index = 0;
      if (uVar7 != 0) {
        if (uVar7 == 0) {
          pbVar9 = nullptr;
          goto LAB_005a278f;
        }
        do {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pbVar9 = (byte *)(this_00->field_1EA6->elementSize * index +
                           (int)this_00->field_1EA6->data);
LAB_005a278f:
          pbVar10 = param_1;
          if (pbVar9 != nullptr) {
            do {
              bVar1 = *pbVar9;
              bVar11 = bVar1 < *pbVar10;
              if (bVar1 != *pbVar10) {
LAB_005a27ba:
                iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_005a27bf;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar9[1];
              bVar11 = bVar1 < pbVar10[1];
              if (bVar1 != pbVar10[1]) goto LAB_005a27ba;
              pbVar9 = pbVar9 + 2;
              pbVar10 = pbVar10 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_005a27bf:
            uVar7 = local_c;
            if (iVar4 == 0) {
              st::fn_006B0C70(this_00->field_1EA6,index);
              break;
            }
          }
          index = index + 1;
        } while (index < uVar7);
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0xf3);
      st::fn_00402298(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',this_00->field_1E9A);
      this_00->field_002D = 0x28;
      *(dword *)&this_00->field_0x31 = this_00->field_1EA6->count;
      *(undefined2 *)&this_00->field_0x35 = 1;
      st::fn_006E6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
      this_00->field_002D = 0x20;
      if ((this_00->field_1EA6->count == 0) || (this_00->field_1A6B == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(undefined4 *)&this_00->field_0x31 = uVar5;
      st::fn_006E6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
      if (local_8 != nullptr) {
        uVar7 = 0;
        local_c = this_00->field_1EA6->count;
        if (local_c != 0) {
          if (local_c == 0) {
            pbVar9 = nullptr;
            goto LAB_005a28be;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pbVar9 = (byte *)(this_00->field_1EA6->elementSize * uVar7 +
                             (int)this_00->field_1EA6->data);
LAB_005a28be:
            if (pbVar9 != nullptr) {
              pbVar10 = local_40;
              do {
                bVar1 = *pbVar9;
                bVar11 = bVar1 < *pbVar10;
                if (bVar1 != *pbVar10) {
LAB_005a28e9:
                  iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_005a28ee;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar9[1];
                bVar11 = bVar1 < pbVar10[1];
                if (bVar1 != pbVar10[1]) goto LAB_005a28e9;
                pbVar9 = pbVar9 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_005a28ee:
              if (iVar4 == 0) {
                *(short *)&this_00->field_0x31 = (short)uVar7;
                *(undefined2 *)&this_00->field_0x37 = 1;
                *(undefined2 *)&this_00->field_0x35 = 1;
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
    iVar6 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0xa3c,0,iVar4,"%s"
                               ,"FSGSTy::DelPlayer");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xa3c);
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
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  InternalExceptionFrame local_54;
  uint local_10;
  AnonShape_00413AF0_B6B4EE9A *local_c;
  FSGSTy *local_8;

  if (((this->field_1A5F == CASE_6) && (this->field_1A60 == '\0')) &&
     (this->field_1EA6 != nullptr)) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_8 = this;
    iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
    if (iVar3 == 0) {
      uVar6 = 0;
      local_c = (AnonShape_00413AF0_B6B4EE9A *)local_8->field_1EA6;
      local_10 = ((DArrayTy *)local_c)->count;
      if (local_10 != 0) {
        if (local_10 == 0) {
          pbVar8 = nullptr;
          goto LAB_005a2aea;
        }
        do {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pbVar8 = (byte *)(((DArrayTy *)local_c)->elementSize * uVar6 +
                           (int)((DArrayTy *)local_c)->data);
LAB_005a2aea:
          pbVar4 = pbVar8;
          pbVar7 = param_1;
          if (pbVar8 != nullptr) {
            do {
              bVar1 = *pbVar4;
              bVar9 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_005a2b17:
                iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_005a2b1c;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar9 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_005a2b17;
              pbVar4 = pbVar4 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_005a2b1c:
            if (iVar3 == 0) {
              *(undefined4 *)(pbVar8 + 0x25) = *(undefined4 *)(param_1 + 0x25);
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
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0xa50,0,iVar3,"%s"
                               ,"FSGSTy::ChangePlayer");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xa50);
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
  DArrayTy *pDVar1;
  uint uVar2;
  int errorCode;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  if (((this->field_1A5F == CASE_6) && (this->field_1A60 == '\0')) &&
     (this->field_1EA6 != nullptr)) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (errorCode == 0) {
      uVar6 = 0;
      pDVar1 = local_8->field_1EA6;
      uVar2 = pDVar1->count;
      if (uVar2 != 0) {
        if (uVar2 == 0) {
          pvVar4 = nullptr;
          goto LAB_005a2c91;
        }
        do {
          pvVar4 = DArrayAt<void>(pDVar1, uVar6);
LAB_005a2c91:
          if ((pvVar4 != nullptr) && (STField<int>(pvVar4,0x21) == param_2)) {
            STField<undefined4>(pvVar4,0x29) = param_3;
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
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0xa60,0,errorCode,
                               "%s","FSGSTy::ChangePlayerPing");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xa60);
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
  undefined1 *puVar1;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  InternalExceptionFrame local_7c;
  undefined1 local_38 [45];
  undefined1 local_b;
  FSGSTy *local_8;

  if (this->field_1A5F == CASE_6) {
    this->field_1A60 = 0;
    local_7c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_7c;
    local_8 = this;
    iVar3 = st::fn_0072D7F0(local_7c.jumpBuffer,0);
    this_00 = g_cursorClass_00802A30;
    if (iVar3 == 0) {
      if (g_cursorClass_00802A30 != nullptr) {
        iVar3 = g_cursorClass_00802A30->field_00C9;
        iVar5 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_1;
        this_00->field_0494 = 0xffff;
        st::fn_0040507E(this_00,CASE_0,iVar5,iVar3);
        st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
        this_00->field_00D2 = 0;
        this_00->field_04DF = -1;
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0xf3);
      this_01 = local_8;
      st::fn_00402298(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',local_8->field_1E9A);
      this_01->field_1EA6->count = 0;
      local_b = 1;
      st::fn_006AE1C0(this_01->field_1EA6,local_38);
      this_01->field_002D = 0x28;
      puVar1 = &this_01->field_0x1d;
      *(dword *)&this_01->field_0x31 = this_01->field_1EA6->count;
      *(undefined2 *)&this_01->field_0x35 = 1;
      st::fn_006E6080(this_01,2,this_01->field_1B20,(undefined4 *)puVar1);
      this_01->field_002D = 0x20;
      if ((this_01->field_1EA6->count == 0) || (this_01->field_1A6B == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      *(undefined4 *)&this_01->field_0x31 = uVar4;
      st::fn_006E6080(this_01,2,this_01->field_1B20,(undefined4 *)puVar1);
      this_01->field_002D = 0x20;
      *(undefined4 *)&this_01->field_0x31 = 0;
      if (this_01->field_1B24 != 0) {
        st::fn_006E6080(this_01,2,this_01->field_1B24,(undefined4 *)puVar1);
      }
      *(undefined4 *)&this_01->field_0x31 = 1;
      if ((this_01->field_1B18 != 0) && (this_01->field_1A6B != 0)) {
        st::fn_006E6080(this_01,2,this_01->field_1B18,(undefined4 *)puVar1);
      }
      g_currentExceptionFrame = local_7c.previous;
      return;
    }
    g_currentExceptionFrame = local_7c.previous;
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0xa7d,0,iVar3,"%s"
                               ,"FSGSTy::JoinChannel");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xa7d);
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
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar3;
  DArrayTy *pDVar4;
  undefined4 uVar5;
  int iVar6;
  dword dVar7;
  char *_Str2;
  char *_Str1;
  uint uVar8;
  InternalExceptionFrame local_50;
  FSGSTy *local_c;
  int local_8;

  if ((this->field_1A5F == CASE_6) && (this->field_1A60 != '\0')) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
    this_00 = g_cursorClass_00802A30;
    if (iVar3 == 0) {
      if (g_cursorClass_00802A30 != nullptr) {
        iVar3 = g_cursorClass_00802A30->field_00C9;
        iVar6 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_1;
        this_00->field_0494 = 0xffff;
        st::fn_0040507E(this_00,CASE_0,iVar6,iVar3);
        st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
        this_00->field_00D2 = 0;
        this_00->field_04DF = -1;
      }
      this_01 = local_c;
      local_c->field_1EAA->count = 0;
      for (; param_1 != 0; param_1 = param_1 + -1) {
        st::fn_006AE1C0(this_01->field_1EAA,param_2);
        param_2 = param_2 + 0x1a;
      }
      do {
        pDVar4 = this_01->field_1EAA;
        local_8 = 0;
        dVar7 = pDVar4->count;
        uVar8 = 0;
        if (dVar7 != 1) {
          do {
            if (uVar8 < dVar7) {
              _Str1 = DArrayAt<char>(pDVar4, uVar8);
            }
            else {
              _Str1 = nullptr;
            }
            uVar1 = uVar8 + 1;
            if (uVar1 < dVar7) {
              _Str2 = DArrayAt<char>(pDVar4, uVar1);
            }
            else {
              _Str2 = nullptr;
            }
            iVar3 = st::fn_0072E620(_Str1,_Str2);
            if (0 < iVar3) {
              st::fn_006B0CD0((AnonShape_00413AF0_B6B4EE9A *)this_01->field_1EAA,uVar8,uVar1);
              local_8 = 1;
            }
            pDVar4 = this_01->field_1EAA;
            dVar7 = pDVar4->count;
            uVar8 = uVar1;
          } while (uVar1 < dVar7 - 1);
        }
      } while (local_8 != 0);
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0xf3);
      st::fn_00402298(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',this_01->field_1E9A);
      this_01->field_002D = 0x28;
      *(dword *)&this_01->field_0x31 = this_01->field_1EAA->count;
      *(undefined2 *)&this_01->field_0x35 = 1;
      st::fn_006E6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
      this_01->field_002D = 0x20;
      if ((this_01->field_1EAA->count == 0) || (this_01->field_1A6B == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(undefined4 *)&this_01->field_0x31 = uVar5;
      st::fn_006E6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar6 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0xa9d,0,iVar3,"%s"
                               ,"FSGSTy::SetChannelList");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xa9d);
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
  uint uVar1;
  MMsgTy *pMVar2;
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
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0xab9,0,iVar4,"%s"
                               ,"FSGSTy::CreateGame");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xab9);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (g_cursorClass_00802A30 != nullptr) {
    iVar4 = g_cursorClass_00802A30->field_00C9;
    iVar5 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = CASE_1;
    this_00->field_0494 = 0xffff;
    st::fn_0040507E(this_00,CASE_0,iVar5,iVar4);
    st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  this_01 = local_8;
  if (param_1 != 0) {
    pMVar2 = local_8->field_1A5B->field_02E6;
    if (pMVar2 == nullptr) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    st::fn_00403FA8(pMVar2,0x2594,'\0',nullptr,nullptr,nullptr,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  DAT_0080877f = g_int_00811764[0xe];
  DAT_0080877e = 1;
  local_8->field_1A61 = 0;
  DAT_008067a0 = 1;
  uVar1 = local_8->field_1EC2;
  if (uVar1 < 0x502) {
    if (uVar1 == 0x501) {
      DAT_00803400 = 5;
      goto cf_common_exit_005A33FB;
    }
    if (uVar1 == 0x200) {
      DAT_00803400 = 0x14;
      goto cf_common_exit_005A33FB;
    }
    if (uVar1 == 0x400) {
      DAT_00803400 = 0x15;
      goto cf_common_exit_005A33FB;
    }
  }
  else if (uVar1 == 0x502) {
    DAT_00803400 = 0xc;
    goto cf_common_exit_005A33FB;
  }
  DAT_00803400 = 4;
cf_common_exit_005A33FB:
  st::fn_004036C0(local_8,0x611f,0x13,0);
  this_01->CloseButtons();
  pMVar2 = this_01->field_1A5B->field_02E6;
  if (pMVar2 == nullptr) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  st::fn_00401FA5(pMVar2,1,0,1);
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
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  FSGSTy_field_1EBEDArray *pFVar12;
  uint local_2bc [11];
  byte local_290 [560];
  InternalExceptionFrame local_60;
  char local_1c [8];
  undefined1 local_14;
  FSGSTy *local_10;
  FSGSTy_field_1EBEElement *element_1ebe;
  uint local_8;

  if ((this->field_1A5F == CASE_8) && (this->field_1EBE != nullptr)) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    local_10 = this;
    iVar3 = st::fn_0072D7F0(local_60.jumpBuffer,0);
    this_00 = g_cursorClass_00802A30;
    if (iVar3 == 0) {
      if (g_cursorClass_00802A30 != nullptr) {
        iVar3 = g_cursorClass_00802A30->field_00C9;
        iVar6 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_1;
        this_00->field_0494 = 0xffff;
        st::fn_0040507E(this_00,CASE_0,iVar6,iVar3);
        st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
        this_00->field_00D2 = 0;
        this_00->field_04DF = -1;
      }
      this_01 = local_10;
      local_10->field_002D = 0x26;
      st::fn_006E6080(local_10,2,local_10->field_1B20,(undefined4 *)&local_10->field_0x1d);
      pFVar12 = this_01->field_1EBE;
      if ((uint)*(ushort *)&this_01->field_0x31 < pFVar12->count) {
        element_1ebe = DArrayAt<FSGSTy_field_1EBEElement>(pFVar12, (uint)*(ushort *)&this_01->field_0x31);
      }
      else {
        element_1ebe = nullptr;
      }
      if (element_1ebe != nullptr) {
        puVar8 = element_1ebe;
        puVar5 = local_2bc;
        memmove(puVar5, puVar8, 0x25c); /* compiler REP MOVS byte copy */
      }
      pFVar12->count = 0;
      do {
        if (param_1 == 0) {
          st::fn_006B5F80((int *)g_ddxContext_008075A8,0x13,0x5e,0x174,0x175);
          st::fn_00402298(0x13,0x5e,0,0,0x174,(byte *)0x175,'\x01',this_01->field_1E9A);
          this_01->field_002D = 0x28;
          *(dword *)&this_01->field_0x31 = this_01->field_1EBE->count;
          *(undefined2 *)&this_01->field_0x35 = 1;
          st::fn_006E6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
          this_01->field_002D = 0x20;
          if ((this_01->field_1EBE->count == 0) || (this_01->field_1A6B == 0)) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
          *(undefined4 *)&this_01->field_0x31 = uVar4;
          st::fn_006E6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
          if (element_1ebe != nullptr) {
            uVar7 = 0;
            local_8 = this_01->field_1EBE->count;
            if (local_8 != 0) {
              if (local_8 == 0) {
                puVar5 = nullptr;
                goto LAB_005a37da;
              }
              do {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                puVar5 = (uint *)((int)&this_01->field_1EBE->data->field_0000 +
                                 this_01->field_1EBE->elementSize * uVar7);
LAB_005a37da:
                if (puVar5 != nullptr) {
                  pbVar10 = local_290;
                  pbVar9 = (byte *)(puVar5 + 0xb);
                  do {
                    bVar1 = *pbVar9;
                    bVar11 = bVar1 < *pbVar10;
                    if (bVar1 != *pbVar10) {
LAB_005a380b:
                      iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                      goto LAB_005a3810;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar9[1];
                    bVar11 = bVar1 < pbVar10[1];
                    if (bVar1 != pbVar10[1]) goto LAB_005a380b;
                    pbVar9 = pbVar9 + 2;
                    pbVar10 = pbVar10 + 2;
                  } while (bVar1 != 0);
                  iVar3 = 0;
LAB_005a3810:
                  if (iVar3 == 0) {
                    *(short *)&this_01->field_0x31 = (short)uVar7;
                    *(undefined2 *)&this_01->field_0x37 = 1;
                    *(undefined2 *)&this_01->field_0x35 = 1;
                    this_01->field_002D = 0x22;
                    st::fn_006E6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
                    g_currentExceptionFrame = local_60.previous;
                    return;
                  }
                }
                uVar7 = uVar7 + 1;
                if (local_8 <= uVar7) {
                  g_currentExceptionFrame = local_60.previous;
                  return;
                }
              } while( true );
            }
          }
          g_currentExceptionFrame = local_60.previous;
          return;
        }
        uVar7 = this_01->field_1EC2;
        if (uVar7 == 0) {
          if (*param_2 == 4) {
            pFVar12 = this_01->field_1EBE;
            goto LAB_005a36e9;
          }
        }
        else if ((param_2[2] == uVar7) && (*param_2 == 4)) {
          if (uVar7 == 0x100) {
            if (this_01->field_1EC6 != -1) {
              if ((char)param_2[0x1f] != '\0') {
                st::fn_0072E340(local_1c,(char *)((int)param_2 + 0x7f),8);
                local_14 = 0;
                st::fn_0072EE80(local_1c,"%08x");
                if (local_8 == this_01->field_1EC6) {
                  pFVar12 = this_01->field_1EBE;
                  goto LAB_005a36e9;
                }
              }
              goto LAB_005a36ee;
            }
            pFVar12 = this_01->field_1EBE;
          }
          else {
            pFVar12 = this_01->field_1EBE;
          }
LAB_005a36e9:
          st::fn_006AE1C0((DArrayTy *)pFVar12,param_2);
        }
LAB_005a36ee:
        param_2 = param_2 + 0x97;
        param_1 = param_1 + -1;
      } while( true );
    }
    g_currentExceptionFrame = local_60.previous;
    iVar6 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0xaf6,0,iVar3,"%s"
                               ,"FSGSTy::SetGameList");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xaf6);
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
  byte *pbVar3;
  int iVar4;
  uint *puVar5;
  DArrayTy *pDVar6;
  BOOL BVar7;
  int iVar8;
  byte *pbVar9;
  bool bVar10;
  uint local_88 [8];
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
    st::fn_0040507E(this_00,CASE_0,this_00->field_00C5,this_00->field_00C9);
    st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  if ((this->field_1A5F == CASE_A) && (pbVar3 = this->field_1B0C, pbVar3 != nullptr)) {
    do {
      bVar1 = *pbVar3;
      bVar10 = bVar1 < *param_1;
      if (bVar1 != *param_1) {
LAB_005a3b5e:
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_005a3b63;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar10 = bVar1 < param_1[1];
      if (bVar1 != param_1[1]) goto LAB_005a3b5e;
      pbVar3 = pbVar3 + 2;
      param_1 = param_1 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_005a3b63:
    if (iVar4 == 0) {
      local_68.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_68;
      iVar4 = st::fn_0072D7F0(local_68.jumpBuffer,0);
      if (iVar4 == 0) {
        pbVar3 = st::fn_00403EC7("Profile\\Age",param_2,param_3);
        this_01 = local_14;
        if (pbVar3 != nullptr) {
          st::fn_006B6020(local_14->field_1AF8,0,(char *)pbVar3);
          *(DArrayTy **)&this_01->field_0x31 = this_01->field_1AF8;
          this_01->field_002D = 0x33;
          st::fn_006E6080(this_01,2,this_01->field_1AD8,(undefined4 *)&this_01->field_0x1d);
        }
        pbVar3 = st::fn_00403EC7("Profile\\Sex",param_2,param_3);
        if (pbVar3 != nullptr) {
          st::fn_006B6020(this_01->field_1AFC,0,(char *)pbVar3);
          this_01->field_002D = 0x33;
          *(DArrayTy **)&this_01->field_0x31 = this_01->field_1AFC;
          st::fn_006E6080(this_01,2,this_01->field_1ADC,(undefined4 *)&this_01->field_0x1d);
        }
        pbVar3 = st::fn_00403EC7("Profile\\Location",param_2,param_3);
        if (pbVar3 != nullptr) {
          st::fn_006B6020(this_01->field_1B00,0,(char *)pbVar3);
          this_01->field_002D = 0x33;
          *(DArrayTy **)&this_01->field_0x31 = this_01->field_1B00;
          st::fn_006E6080(this_01,2,this_01->field_1AE0,(undefined4 *)&this_01->field_0x1d);
        }
        local_10 = (uint *)st::fn_00403EC7("Profile\\Description",param_2,param_3);
        if (local_10 != nullptr) {
          if ((DArrayTy *)this_01->field_1B04 != nullptr) {
            st::fn_006B5570((DArrayTy *)this_01->field_1B04);
          }
          puVar5 = st::fn_00712F80(this_01->field_1A73,local_10);
          this_01->field_1B04 = puVar5;
          if (puVar5 == nullptr) {
            pDVar6 = st::fn_006B54F0(nullptr,1,1);
            this_01->field_1B04 = &pDVar6->flags;
            st::fn_006B5AA0(&pDVar6->flags,&DAT_008016a0);
          }
          this_01->field_002D = 0x33;
          *(uint **)&this_01->field_0x31 = this_01->field_1B04;
          st::fn_006E6080(this_01,2,this_01->field_1AE4,(undefined4 *)&this_01->field_0x1d);
        }
        st::fn_004049DF(this_01,(ccFntTy *)this_01->field_1A7F,"1\\Wins",param_2,param_3,0x1a,
                     0xf3,0x4e,0x12);
        st::fn_004049DF(this_01,(ccFntTy *)this_01->field_1A7F,"1\\Losses",param_2,param_3,0x7e
                     ,0xf3,0x4e,0x12);
        st::fn_004049DF(this_01,(ccFntTy *)this_01->field_1A7F,"1\\Draws",param_2,param_3,0xe2,
                     0xf3,0x4e,0x12);
        st::fn_004049DF(this_01,(ccFntTy *)this_01->field_1A7F,"1\\Disconnects",param_2,param_3
                     ,0x146,0xf3,0x4e,0x12);
        st::fn_004049DF(this_01,this_01->field_1A7B,"1\\Rating",param_2,param_3,0x1a,0x11b,0x4e
                     ,0x17);
        st::fn_004049DF(this_01,this_01->field_1A7B,"1\\Rank",param_2,param_3,0x7e,0x11b,0x4e,
                     0x17);
        pbVar3 = st::fn_00403EC7("1\\Last Game",param_2,param_3);
        if (pbVar3 != nullptr) {
          iVar4 = -1;
          pbVar9 = pbVar3;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar1 = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while (bVar1 != 0);
          if (iVar4 != -2) {
            iVar4 = st::fn_0072EE80((char *)pbVar3,(byte *)"%d %d");
            if (iVar4 != 2) {
              local_c.dwHighDateTime = 0;
              local_c.dwLowDateTime = 0;
            }
            BVar7 = st::external_00000022(&local_c,&local_24);
            if (BVar7 != 0) {
              st::external_00000080((LPSTR)local_88,"%2d/%2d/%4d",STPiece<6,4>(local_24) & 0xffff,
                        local_24.wMonth,local_24.wYear);
              st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_01->field_1AC0,0,0xe2,0x11b,0xb2,
                           0x17,0xff);
              st::fn_00710A90(this_01->field_1A73,(int)this_01->field_1AC0,0,0xe2,0x11b,0xb2,0x17);
              st::fn_007119C0(this_01->field_1A73,local_88,-1,-1,0);
            }
          }
        }
        st::fn_004049DF(this_01,(ccFntTy *)this_01->field_1A7F,"0\\Wins",param_2,param_3,0x1a,
                     0x161,0x4e,0x12);
        st::fn_004049DF(this_01,(ccFntTy *)this_01->field_1A7F,"0\\Losses",param_2,param_3,0x7e
                     ,0x161,0x4e,0x12);
        st::fn_004049DF(this_01,(ccFntTy *)this_01->field_1A7F,"0\\Draws",param_2,param_3,0xe2,
                     0x161,0x4e,0x12);
        st::fn_004049DF(this_01,(ccFntTy *)this_01->field_1A7F,"0\\Disconnects",param_2,param_3
                     ,0x146,0x161,0x4e,0x12);
        st::fn_006B35D0((int *)g_ddxContext_008075A8,this_01->field_1ABC);
        g_currentExceptionFrame = local_68.previous;
        return;
      }
      g_currentExceptionFrame = local_68.previous;
      iVar8 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0xb4e,0,iVar4,
                                 "%s","FSGSTy::SetInfo");
      if (iVar8 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xb4e);
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
  void **value;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
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
    st::fn_0040507E(this_00,CASE_0,this_00->field_00C5,this_00->field_00C9);
    st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  if (this->field_1A5F == CASE_9) {
    local_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_6c;
    iVar2 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
    this_01 = local_8;
    if (iVar2 == 0) {
      value = &local_8->field_1EDB;
      if (local_8->field_1EDB != nullptr) {
        st::fn_006AB060(value);
      }
      this_01->field_1EDF = param_2;
      this_01->field_1EE3 = param_3;
      puVar3 = st::fn_006AAC70(param_3 * 0x24);
      uVar5 = this_01->field_1EE3;
      *value = puVar3;
      for (uVar5 = uVar5 * 9 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = *param_4;
        param_4 = param_4 + 1;
        puVar3 = puVar3 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar3 = *(undefined1 *)param_4;
        param_4 = (undefined4 *)((int)param_4 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      st::fn_00402031(this_01);
      memset(local_28, 0, 0x20); /* compiler bulk-zero initialization */
      local_18 = 0x20;
      if ((this_01->field_1EDF == 0) || (local_14 = 1, this_01->field_1A6B == 0)) {
        local_14 = 0;
      }
      if (this_01->field_1ED3 != 0) {
        st::fn_006E6080(this_01,2,this_01->field_1ED3,local_28);
      }
      if ((0xf422f < this_01->field_1EDF) || (local_14 = 1, this_01->field_1A6B == 0)) {
        local_14 = 0;
      }
      if (this_01->field_1ED7 != 0) {
        st::fn_006E6080(this_01,2,this_01->field_1ED7,local_28);
      }
      g_currentExceptionFrame = local_6c.previous;
      return;
    }
    g_currentExceptionFrame = local_6c.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0xb65,0,iVar2,"%s"
                               ,"FSGSTy::SetLadder");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xb65);
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
  undefined1 *puVar1;
  char cVar2;
  FSGSTy_field_1A5FState FVar3;
  ushort uVar4;
  word wVar5;
  STMessageId SVar6;
  ushort *puVar7;
  FSGSTy_field_1EBEDArray *pFVar8;
  FSGSTy_field_1FB3DArray *pFVar9;
  FSGSTy_field_1FB3Element *pFVar10;
  dword dVar11;
  ccFntTy *pcVar12;
  StartSystemTy *pSVar13;
  LPCSTR pCVar14;
  LPCSTR pCVar15;
  LPCSTR pCVar16;
  int *piVar17;
  RecoveredSourceFamily_dibcopy *pRVar18;
  DWORD DVar20;
  int iVar21;
  UINT UVar22;
  undefined4 *puVar23;
  uint *puVar24;
  FSGSTy_field_1FB3Element *element_1fb3;
  DArrayTy *pDVar25;
  undefined4 uVar26;
  char *pcVar27;
  ulong uVar28;
  LPCSTR pCVar29;
  HINSTANCE pHVar30;
  uint *puVar31;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  uint uVar32;
  MMsgTy *pMVar33;
  byte bVar34;
  FSGSTy *this_00;
  uint uVar35;
  byte *pbVar36;
  CursorClassTy *pCVar37;
  void *pvVar38;
  char *pcVar39;
  STMessage *pSVar40;
  byte *pbVar41;
  LPCSTR pCVar42;
  AnonShape_005A4350_59BACD18 *pAVar43;
  bool bVar44;
  BITMAPINFO *pBVar45;
  int iVar46;
  DWORD DVar47;
  int iVar48;
  int iVar49;
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
  AnonShape_005A4350_59BACD18 *local_c;
  uint *local_8;

  local_20 = this;
  DVar20 = st::fn_006E51B0(this->field_0010);
  pcVar39 = nullptr;
  this->field_0061 = DVar20;
  local_21c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_21c;
  iVar21 = st::fn_0072D7F0(local_21c.jumpBuffer,0);
  this_00 = local_20;
  if (iVar21 != 0) {
    g_currentExceptionFrame = local_21c.previous;
    iVar46 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0x1048,0,iVar21,
                                "%s","FSGSTy::GetMessage");
    if (iVar46 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar21,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x1048);
    return 0xffff;
  }
  st::fn_00402563(local_20,message);
  pCVar37 = g_cursorClass_00802A30;
  SVar6 = message->id;
  if (MESS_FSGSTY_6949 < SVar6) {
    if (SVar6 < MESS_SHARED_6980) {
      if (SVar6 == MESS_SHARED_697F) {
        dVar11 = (message->arg2).u32;
        local_60 = *(int *)(dVar11 + 0x24) + -0xb4;
        local_58 = *(int *)(dVar11 + 0x2c);
        local_54 = *(int *)(dVar11 + 0x30);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        uVar35 = *(int *)(dVar11 + 0x28) -
                 ((-(uint)(this_00->field_1ABB != '\0') & 0xffffffb4) + 0xaa);
        local_5c = uVar35;
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,
                     *(int *)(dVar11 + 0x24) + -0xb5,uVar35,local_58 + 2,local_54,0xff);
        st::fn_00710A90(this_00->field_1A73,(int)this_00->field_1AC0,0,local_60,uVar35,local_58,
                         local_54);
        if ((message->arg0).ptr != nullptr) {
          st::fn_007119C0(this_00->field_1A73,*(uint **)(message->arg0).ptr,0,-1,0);
        }
        uVar4 = (message->arg1).words.low;
        if ((uVar4 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
          iVar21 = (uint)uVar4 + local_60;
          st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1AC0,0,iVar21,uVar35 + 1,iVar21
                       ,local_54 + -2 + uVar35,9,0xd);
        }
        st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
        goto cf_common_exit_005A8CA7;
      }
      switch(SVar6) {
      case MESS_FSGSTY_694A:
      case 0x694e:
        this_00->CloseButtons();
        this_00->field_1A61 = (message->id != MESS_FSGSTY_694A) + '\a';
        pSVar13 = this_00->field_1A5B;
        if (pSVar13->field_02E6 == nullptr) break;
        puVar23 = local_31c;
        for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
          *puVar23 = 0xffffffff;
          puVar23 = puVar23 + 1;
        }
        *(undefined2 *)puVar23 = 0xffff;
        local_9c = 0;
        local_98 = 0;
        local_a0 = 0x10101;
        local_94 = 0;
        st::fn_00404B51(pSVar13->field_02E6,(int)local_31c);
        puVar23 = &local_a0;
        goto cf_common_exit_005A7F3B;
      case 0x694b:
        if (this_00->field_1A5F == CASE_2) {
          this_00->CloseButtons();
          this_00->field_1A61 = 5;
          if (this_00->field_1A5B->field_02E6 != nullptr) {
            local_8c = 0;
            local_88 = 0;
            local_84 = 0;
            local_90 = 0x10101;
            st::fn_00401A9B(this_00->field_1A5B->field_02E6,&local_90);
          }
        }
        else if (this_00->field_1A5F == CASE_5) {
          if (0 < (int)this_00->field_1AF4->elementSize) {
            pcVar39 = *(char **)this_00->field_1AF4->growCapacity;
          }
          iVar21 = -1;
          do {
            if (iVar21 == 0) break;
            iVar21 = iVar21 + -1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar39 + 1;
          } while (cVar2 != '\0');
          if (iVar21 == -2) {
            pMVar33 = this_00->field_1A5B->field_02E6;
            if (pMVar33 != nullptr) {
              st::fn_00403FA8(pMVar33,0x2592,'\0',nullptr,nullptr,
                                 nullptr,0,0);
            }
          }
          else {
            puVar23 = local_1d8;
            for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
              *puVar23 = 0xffffffff;
              puVar23 = puVar23 + 1;
            }
            *(undefined2 *)puVar23 = 0xffff;
            local_1cc = 1;
            local_1ce = 1;
            pMVar33 = this_00->field_1A5B->field_02E6;
            if (pMVar33 != nullptr) {
              st::fn_00404B51(pMVar33,(int)local_1d8);
            }
            pCVar37 = g_cursorClass_00802A30;
            if (g_cursorClass_00802A30 != nullptr) {
              iVar21 = g_cursorClass_00802A30->field_00C9;
              iVar46 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = CASE_5;
              pCVar37->field_0494 = 0xffff;
              st::fn_0040507E(pCVar37,CASE_0,iVar46,iVar21);
              st::fn_0040241E(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
              pCVar37->field_00D2 = 0;
              pCVar37->field_04DF = -1;
            }
            if ((int)this_00->field_1AF4->elementSize < 1) {
              pcVar39 = nullptr;
            }
            else {
              pcVar39 = *(char **)this_00->field_1AF4->growCapacity;
            }
            if ((int)this_00->field_1AEC->elementSize < 1) {
              pcVar27 = nullptr;
            }
            else {
              pcVar27 = *(char **)this_00->field_1AEC->growCapacity;
            }
            if ((int)this_00->field_1AE8->elementSize < 1) {
              st::external_0000010D
                        ((CFsgsConnection *)&DAT_00802a90,nullptr,pcVar27,pcVar39);
            }
            else {
              st::external_0000010D
                        ((CFsgsConnection *)&DAT_00802a90,
                         *(char **)this_00->field_1AE8->growCapacity,pcVar27,pcVar39);
            }
          }
        }
        break;
      case 0x694c:
        if ((this_00->field_1AAB != (LPCSTR)0x0) &&
           (pHVar30 = st::external_000000CA(HWND_00856d78,&DAT_007cc624,this_00->field_1AAB,(LPCSTR)0x0,
                                    (LPCSTR)0x0,1), 0x20 < (int)pHVar30)) {
          st::external_0000010E((CFsgsConnection *)&DAT_00802a90,this_00->field_1AAF);
        }
        break;
      case MESS_PRIVIDERTY_6952:
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        switch(this_00->field_1A5F) {
        case CASE_6:
          local_30 = 0x10000;
        case CASE_3:
          local_30 = STReplaceLowByte((uint32_t)(local_30), (uint8_t)(1));
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        case CASE_5:
          STPiece<0,2>(local_30) = CONCAT11(1,(undefined1)local_30);
        case CASE_4:
          local_2c = 0x10100;
          this_00->field_1A61 = 2;
          break;
        case CASE_7:
        case CASE_8:
          local_30 = 0x100;
        case CASE_9:
          this_00->field_1A61 = 6;
          break;
        case CASE_A:
          pbVar41 = this_00->field_1B0C;
          if (pbVar41 != nullptr) {
            pbVar36 = &DAT_00807e1d;
            do {
              bVar34 = *pbVar41;
              bVar44 = bVar34 < *pbVar36;
              if (bVar34 != *pbVar36) {
LAB_005a63e7:
                iVar21 = (1 - (uint)bVar44) - (uint)(bVar44 != 0);
                goto LAB_005a63ec;
              }
              if (bVar34 == 0) break;
              bVar34 = pbVar41[1];
              bVar44 = bVar34 < pbVar36[1];
              if (bVar34 != pbVar36[1]) goto LAB_005a63e7;
              pbVar41 = pbVar41 + 2;
              pbVar36 = pbVar36 + 2;
            } while (bVar34 != 0);
            iVar21 = 0;
LAB_005a63ec:
            if (iVar21 == 0) {
              if ((int)this_00->field_1B00->elementSize < 1) {
                pcVar39 = nullptr;
              }
              else {
                pcVar39 = *(char **)this_00->field_1B00->growCapacity;
              }
              if ((int)this_00->field_1AFC->elementSize < 1) {
                pcVar27 = nullptr;
              }
              else {
                pcVar27 = *(char **)this_00->field_1AFC->growCapacity;
              }
              if ((int)this_00->field_1AF8->elementSize < 1) {
                pbVar41 = nullptr;
              }
              else {
                pbVar41 = *(byte **)this_00->field_1AF8->growCapacity;
              }
              st::fn_00402572(&DAT_00802a90,pbVar41,pcVar27,pcVar39,
                                 (AnonShape_0055C320_953077EC *)this_00->field_1B04);
              local_e4 = DAT_008030d4;
              local_110 = "Profile\\Age";
              local_f0 = &DAT_00802ad4;
              local_10c = "Profile\\Sex";
              local_ec = &DAT_00802cd4;
              local_108 = "Profile\\Location";
              local_e8 = &DAT_00802ed4;
              local_104 = "Profile\\Description";
              st::external_000000F8((CFsgsConnection *)&DAT_00802a90,4,&local_110,&local_f0);
            }
          }
          this_00->field_1A61 = this_00->field_1ED2;
        }
        this_00->CloseButtons();
        pSVar13 = this_00->field_1A5B;
        if (pSVar13->field_02E6 != nullptr) {
          puVar23 = local_2e4;
          for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
            *puVar23 = 0xffffffff;
            puVar23 = puVar23 + 1;
          }
          *(undefined2 *)puVar23 = 0xffff;
          st::fn_00404B51(pSVar13->field_02E6,(int)local_2e4);
          st::fn_00401A9B(this_00->field_1A5B->field_02E6,&local_30);
        }
        break;
      case 0x6953:
        puVar23 = local_17c;
        for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
          *puVar23 = 0xffffffff;
          puVar23 = puVar23 + 1;
        }
        *(undefined2 *)puVar23 = 0xffff;
        local_170 = 1;
        local_172 = 1;
        if ((int)this_00->field_1AE8->elementSize < 1) {
          pcVar39 = nullptr;
        }
        else {
          pcVar39 = *(char **)this_00->field_1AE8->growCapacity;
        }
        st::fn_0072E340(&DAT_00807e1d,pcVar39,0x40);
        DAT_00807e5c = 0;
        if ((int)this_00->field_1AEC->elementSize < 1) {
          pcVar39 = nullptr;
        }
        else {
          pcVar39 = *(char **)this_00->field_1AEC->growCapacity;
        }
        uVar35 = 0xffffffff;
        do {
          pcVar27 = pcVar39;
          if (uVar35 == 0) break;
          uVar35 = uVar35 - 1;
          pcVar27 = pcVar39 + 1;
          cVar2 = *pcVar39;
          pcVar39 = pcVar27;
        } while (cVar2 != '\0');
        uVar35 = ~uVar35;
        pcVar39 = pcVar27 + -uVar35;
        pcVar27 = (char *)&DAT_00807e5d;
        memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
        uVar32 = 0;
        iVar21 = -1;
        pcVar39 = (char *)&DAT_00807e5d;
        do {
          if (iVar21 == 0) break;
          iVar21 = iVar21 + -1;
          cVar2 = *pcVar39;
          pcVar39 = pcVar39 + 1;
        } while (cVar2 != '\0');
        if (iVar21 == -2) {
          pMVar33 = this_00->field_1A5B->field_02E6;
          if (pMVar33 != nullptr) {
            st::fn_00403FA8(pMVar33,0x2592,'\0',nullptr,nullptr,
                               nullptr,0,0);
          }
          break;
        }
        if (this_00->field_1A5F != CASE_2) {
          if (this_00->field_1A5F == CASE_4) {
            if ((int)this_00->field_1AF0->elementSize < 1) {
              pbVar41 = nullptr;
            }
            else {
              pbVar41 = *(byte **)this_00->field_1AF0->growCapacity;
            }
            pbVar36 = (byte *)&DAT_00807e5d;
            do {
              bVar34 = *pbVar36;
              bVar44 = bVar34 < *pbVar41;
              if (bVar34 != *pbVar41) {
LAB_005a6653:
                iVar21 = (1 - (uint)bVar44) - (uint)(bVar44 != 0);
                goto LAB_005a6658;
              }
              if (bVar34 == 0) break;
              bVar34 = pbVar36[1];
              bVar44 = bVar34 < pbVar41[1];
              if (bVar34 != pbVar41[1]) goto LAB_005a6653;
              pbVar36 = pbVar36 + 2;
              pbVar41 = pbVar41 + 2;
            } while (bVar34 != 0);
            iVar21 = 0;
LAB_005a6658:
            if (iVar21 == 0) {
              pMVar33 = this_00->field_1A5B->field_02E6;
              if (pMVar33 != nullptr) {
                st::fn_00404B51(pMVar33,(int)local_17c);
              }
              pCVar37 = g_cursorClass_00802A30;
              if (g_cursorClass_00802A30 != nullptr) {
                iVar21 = g_cursorClass_00802A30->field_00C9;
                iVar46 = g_cursorClass_00802A30->field_00C5;
                g_cursorClass_00802A30->field_0493 = CASE_5;
                pCVar37->field_0494 = 0xffff;
                st::fn_0040507E(pCVar37,CASE_0,iVar46,iVar21);
                st::fn_0040241E(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
                pCVar37->field_00D2 = 0;
                pCVar37->field_04DF = -1;
              }
              if ((int)this_00->field_1B00->elementSize < 1) {
                pcVar39 = nullptr;
              }
              else {
                pcVar39 = *(char **)this_00->field_1B00->growCapacity;
              }
              if ((int)this_00->field_1AFC->elementSize < 1) {
                pcVar27 = nullptr;
              }
              else {
                pcVar27 = *(char **)this_00->field_1AFC->growCapacity;
              }
              if ((int)this_00->field_1AF8->elementSize < 1) {
                pbVar41 = nullptr;
              }
              else {
                pbVar41 = *(byte **)this_00->field_1AF8->growCapacity;
              }
              st::fn_00402572(&DAT_00802a90,pbVar41,pcVar27,pcVar39,
                                 (AnonShape_0055C320_953077EC *)this_00->field_1B04);
              st::external_000000EF
                        ((CFsgsConnection *)&DAT_00802a90,&DAT_00807e1d,(char *)&DAT_00807e5d);
            }
            else {
              pMVar33 = this_00->field_1A5B->field_02E6;
              if (pMVar33 != nullptr) {
                st::fn_00403FA8(pMVar33,0x258a,'\0',nullptr,nullptr,
                                   nullptr,0,0);
              }
            }
          }
          break;
        }
        pMVar33 = this_00->field_1A5B->field_02E6;
        if (pMVar33 != nullptr) {
          st::fn_00404B51(pMVar33,(int)local_17c);
        }
        pCVar37 = g_cursorClass_00802A30;
        if (g_cursorClass_00802A30 != nullptr) {
          iVar21 = g_cursorClass_00802A30->field_00C9;
          iVar46 = g_cursorClass_00802A30->field_00C5;
          g_cursorClass_00802A30->field_0493 = CASE_5;
          pCVar37->field_0494 = 0xffff;
          st::fn_0040507E(pCVar37,CASE_0,iVar46,iVar21);
          st::fn_0040241E(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
          pCVar37->field_00D2 = 0;
          pCVar37->field_04DF = -1;
        }
LAB_005a67e1:
        uVar28 = st::external_000000F0
                           ((CFsgsConnection *)&DAT_00802a90,&DAT_00807e1d,(char *)&DAT_00807e5d);
        if (uVar28 == 0) {
          DVar20 = st::external_00000028();
          st::fn_00405E0C(&DAT_00802a90,DVar20);
        }
        DAT_00802a9a = 0;
        break;
      case 0x6954:
        this_00->CloseButtons();
        this_00->field_1A61 = 4;
        if (this_00->field_1A5B->field_02E6 != nullptr) {
          local_bc = 0;
          local_b8 = 0;
          local_b4 = 0;
          local_c0 = 0x10101;
          st::fn_00401A9B(this_00->field_1A5B->field_02E6,&local_c0);
        }
        break;
      case 0x6955:
        pCVar14 = (LPCSTR)this_00->field_1AB7;
        pCVar29 = (LPCSTR)0x0;
        pCVar42 = (LPCSTR)0x0;
        if (pCVar14 != (LPCSTR)0x0) {
          if ((message->arg0).u32 == 0) {
            switch(this_00->field_1A5F) {
            case CASE_2:
            case CASE_6:
            case CASE_7:
              goto switchD_005a6a92_caseD_2;
            case CASE_4:
              pCVar42 = (LPCSTR)this_00->field_1AC4;
              if (pCVar14 == pCVar42) {
                pCVar29 = pCVar42;
                pCVar42 = (LPCSTR)this_00->field_1AC8;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1AC8) {
                pCVar29 = (LPCSTR)this_00->field_1AC8;
                pCVar42 = (LPCSTR)this_00->field_1ACC;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1ACC) {
                pCVar29 = (LPCSTR)this_00->field_1ACC;
                pCVar42 = (LPCSTR)this_00->field_1AD8;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1AD8) {
                pCVar29 = (LPCSTR)this_00->field_1AD8;
                pCVar42 = (LPCSTR)this_00->field_1ADC;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1ADC) {
                pCVar29 = (LPCSTR)this_00->field_1ADC;
                pCVar42 = (LPCSTR)this_00->field_1AE0;
              }
              else {
                if (pCVar14 != (LPCSTR)this_00->field_1AE0) goto LAB_005a6cc4;
                pCVar29 = (LPCSTR)this_00->field_1AE0;
                pCVar42 = this_00->field_1AE4;
              }
              break;
            case CASE_5:
              pCVar42 = (LPCSTR)this_00->field_1AC4;
              if (pCVar14 == pCVar42) {
                pCVar29 = pCVar42;
                pCVar42 = (LPCSTR)this_00->field_1AC8;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1AC8) {
                pCVar29 = (LPCSTR)this_00->field_1AC8;
                pCVar42 = (LPCSTR)this_00->field_1AD4;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1AD4) {
                pCVar29 = (LPCSTR)this_00->field_1AD4;
                pCVar42 = (LPCSTR)this_00->field_1ACC;
              }
              else {
                pCVar29 = (LPCSTR)this_00->field_1ACC;
              }
              break;
            case CASE_A:
              pCVar42 = (LPCSTR)this_00->field_1AD8;
              if (pCVar14 == pCVar42) {
                pCVar29 = pCVar42;
                pCVar42 = (LPCSTR)this_00->field_1ADC;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1ADC) {
                pCVar29 = (LPCSTR)this_00->field_1ADC;
                pCVar42 = (LPCSTR)this_00->field_1AE0;
              }
              else if (pCVar14 == (LPCSTR)this_00->field_1AE0) {
                pCVar29 = (LPCSTR)this_00->field_1AE0;
                pCVar42 = this_00->field_1AE4;
              }
              else {
LAB_005a6cc4:
                pCVar29 = this_00->field_1AE4;
              }
            }
          }
          else {
            switch(this_00->field_1A5F) {
            case CASE_2:
            case CASE_6:
            case CASE_7:
switchD_005a6a92_caseD_2:
              pCVar42 = (LPCSTR)this_00->field_1AC4;
              if (pCVar14 == pCVar42) {
                pCVar29 = pCVar42;
                pCVar42 = (LPCSTR)this_00->field_1AC8;
              }
              else {
                pCVar29 = (LPCSTR)this_00->field_1AC8;
              }
              break;
            case CASE_4:
              pCVar42 = (LPCSTR)this_00->field_1AC4;
              if (pCVar14 == pCVar42) {
                pCVar29 = pCVar42;
                pCVar42 = this_00->field_1AE4;
              }
              else {
                pCVar15 = (LPCSTR)this_00->field_1AC8;
                pCVar29 = pCVar15;
                if (((pCVar14 != pCVar15) &&
                    (pCVar16 = (LPCSTR)this_00->field_1ACC, pCVar29 = pCVar16, pCVar42 = pCVar15,
                    pCVar14 != pCVar16)) &&
                   (pCVar15 = (LPCSTR)this_00->field_1AD8, pCVar29 = pCVar15, pCVar42 = pCVar16,
                   pCVar14 != pCVar15)) {
                  pCVar16 = (LPCSTR)this_00->field_1ADC;
                  goto joined_r0x005a6ba3;
                }
              }
              break;
            case CASE_5:
              pCVar42 = (LPCSTR)this_00->field_1AC4;
              if (pCVar14 == pCVar42) {
                pCVar29 = pCVar42;
                pCVar42 = (LPCSTR)this_00->field_1ACC;
              }
              else {
                pCVar15 = (LPCSTR)this_00->field_1AC8;
                pCVar29 = pCVar15;
                if ((pCVar14 != pCVar15) &&
                   (pCVar16 = (LPCSTR)this_00->field_1AD4, pCVar29 = pCVar16, pCVar42 = pCVar15,
                   pCVar14 != pCVar16)) {
                  pCVar29 = (LPCSTR)this_00->field_1ACC;
                  pCVar42 = pCVar16;
                }
              }
              break;
            case CASE_A:
              pCVar15 = (LPCSTR)this_00->field_1AD8;
              if (pCVar14 == pCVar15) {
                pCVar29 = pCVar15;
                pCVar42 = this_00->field_1AE4;
              }
              else {
                pCVar16 = (LPCSTR)this_00->field_1ADC;
joined_r0x005a6ba3:
                pCVar29 = pCVar16;
                pCVar42 = pCVar15;
                if ((pCVar14 != pCVar16) &&
                   (pCVar15 = (LPCSTR)this_00->field_1AE0, pCVar29 = pCVar15, pCVar42 = pCVar16,
                   pCVar14 != pCVar15)) {
                  pCVar29 = this_00->field_1AE4;
                  pCVar42 = pCVar15;
                }
              }
            }
          }
        }
        this_00->field_002D = 0x20;
        if (pCVar29 != (LPCSTR)0x0) {
          *(undefined4 *)&this_00->field_0x31 = 0;
          st::fn_006E6080(this_00,2,pCVar29,(undefined4 *)&this_00->field_0x1d);
        }
        if (pCVar42 != (LPCSTR)0x0) {
          *(undefined4 *)&this_00->field_0x31 = 1;
          st::fn_006E6080(this_00,2,pCVar42,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case MESS_CHOOSEMAPTY_6956:
        this_00->field_1ED2 = 1;
LAB_005a6d57:
        st::fn_00402CED(this_00);
        break;
      case MESS_FSGSTY_6957:
        puVar7 = this_00->field_1AC0;
        uVar35 = *(uint *)(puVar7 + 10);
        if (uVar35 == 0) {
          uVar35 = ((uint)puVar7[7] * *(int *)(puVar7 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                   *(int *)(puVar7 + 4);
        }
        puVar23 = (undefined4 *)st::fn_006B4FA0((int *)puVar7);
        for (uVar32 = uVar35 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
          *puVar23 = 0xffffffff;
          puVar23 = puVar23 + 1;
        }
        for (uVar35 = uVar35 & 3; uVar35 != 0; uVar35 = uVar35 - 1) {
          *(undefined1 *)puVar23 = 0xff;
          puVar23 = (undefined4 *)((int)puVar23 + 1);
        }
        st::fn_00710A90(this_00->field_1A73,(int)this_00->field_1AC0,0,0,0x16,0x1b8,0xf0);
        iVar49 = -1;
        iVar48 = -1;
        uVar35 = 2;
        iVar46 = -1;
        iVar21 = -2;
        puVar24 = (uint *)st::fn_006B0140(0x25be,g_hINSTANCE_00807618);
        st::fn_00711B70(this_00->field_1A73,puVar24,iVar21,iVar46,uVar35,iVar48,iVar49);
        st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
        st::external_00000080((LPSTR)&DAT_0080f33a,"%s%s%s",&DAT_00807680,PTR_s_UPDATES__0079c020,
                  &DAT_0080f126);
        st::external_00000080(local_4b8,"subtitans/%s",&DAT_0080f126);
        st::external_000000F4
                  ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a,local_4b8);
LAB_005a6e50:
        pCVar37 = g_cursorClass_00802A30;
        if (g_cursorClass_00802A30 != nullptr) {
          g_cursorClass_00802A30->field_0493 = CASE_5;
          pCVar37->field_0494 = 0xffff;
          st::fn_0040507E(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
          st::fn_0040241E(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
          pCVar37->field_00D2 = 0;
          pCVar37->field_04DF = -1;
        }
      }
      goto cf_common_exit_005A8CA7;
    }
    if (MESS_SHARED_8160 < SVar6) {
      if (SVar6 < MESS_SHARED_C0A2) {
        if (SVar6 == MESS_FSGSTY_C0A1) {
          if ((this_00->field_1A6B != 0) && (this_00->field_1B10 != 0)) {
            this_00->field_002D = 0x20;
            *(undefined4 *)&this_00->field_0x31 = 1;
            st::fn_006E6080(this_00,2,this_00->field_1B10,(undefined4 *)&this_00->field_0x1d);
          }
          goto cf_common_exit_005A8CA7;
        }
        switch(SVar6) {
        case MESS_SIDTY_8161:
          if ((this_00->field_1E8E == 0) || (this_00->field_1E9A == nullptr)) break;
          pAVar43 = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
          local_1c = pAVar43;
          st::fn_006B5F80((int *)g_ddxContext_008075A8,*(int *)&pAVar43->field_0x24,
                       (uint)(message->arg1).words.high + *(int *)&pAVar43->field_0x28,
                       pAVar43->field_002C,0x11);
          if (this_00->field_1A5F == CASE_6) {
            iVar21 = (uint)(message->arg1).words.high + *(int *)&pAVar43->field_0x28;
            st::fn_00402298(*(int *)&pAVar43->field_0x24,iVar21,*(int *)&pAVar43->field_0x24 + -0x1e9,
                       iVar21 + -0x5e,pAVar43->field_002C,(byte *)0x11,'\x01',this_00->field_1E9A);
            st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                         pAVar43->field_002C,0x11,0xff);
            if (this_00->field_1A60 == '\0') {
              pDVar25 = this_00->field_1EA6;
              if (pDVar25 != nullptr) {
                uVar35 = (uint)(message->arg0).words.low;
                if (uVar35 < pDVar25->count) {
                  local_8 = DArrayAt<uint>(pDVar25, uVar35);
                }
                else {
                  local_8 = nullptr;
                }
                if (local_8 != nullptr) {
                  st::fn_00710A90(this_00->field_1A73,this_00->field_1E8E,0,0x23,0,
                                   pAVar43->field_002C + -0x46,0x11);
                  if (STField<undefined1>(local_8,0x2d) == '\0') {
                    local_c = (AnonShape_005A4350_59BACD18 *)
                              st::fn_00403F26(&DAT_00802a90,(int)local_8);
                    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,3,1,'\x01',
                           (byte *)local_c);
                    if (local_c != nullptr) {
                      st::fn_006AB060(&local_c);
                    }
                    st::fn_007119C0(this_00->field_1A73,local_8,0,-1,
                                   (-(uint)((message->arg0).words.high != 0) & 0xfffffffe) + 2);
                    if ((STField<undefined1>(local_8,0x25) & 0x10) != 0) {
                      uVar35 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)
                                            this_00->field_1A8B,3);
                      st::fn_006B5440((ushort *)this_00->field_1E8E,0,pAVar43->field_002C + -0x1d,
                                   (0x11 - *(int *)(uVar35 + 8)) / 2,uVar35,0,0xff);
                    }
                  }
                  else {
                    pbVar41 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)
                                                   this_00->field_1A87,1);
                    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,3,
                           (0x11 - *(int *)(pbVar41 + 8)) / 2,'\x06',pbVar41);
                    uVar35 = (-(uint)((message->arg0).words.high != 0) & 0xfffffffe) + 2;
                    iVar46 = -1;
                    iVar21 = 0;
                    puVar24 = (uint *)st::fn_006B0140(0x2567,g_hINSTANCE_00807618);
                    st::fn_007119C0(this_00->field_1A73,puVar24,iVar21,iVar46,uVar35);
                  }
                }
              }
            }
            else {
              pDVar25 = this_00->field_1EAA;
              if (pDVar25 != nullptr) {
                uVar35 = (uint)(message->arg0).words.low;
                if (uVar35 < pDVar25->count) {
                  local_c = DArrayAt<AnonShape_005A4350_59BACD18>(pDVar25, uVar35);
                }
                else {
                  local_c = nullptr;
                }
                if (local_c != nullptr) {
                  uVar35 = *(uint *)(local_c + 2);
                  if ((uVar35 & 0x40) == 0) {
                    if ((uVar35 & 0x18) == 0) {
                      local_10 = (uint *)(STReplaceLowByte((uint32_t)(local_10), (uint8_t)(-((uVar35 & 2) != 0))) & 0xffffff05
                                         );
                    }
                    else {
                      local_10 = (uint *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(3));
                    }
                  }
                  else {
                    local_10 = (uint *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(4));
                  }
                  pbVar41 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)
                                                 this_00->field_1A87,(uint)local_10 & 0xff);
                  st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,3,
                         (0x11 - *(int *)(pbVar41 + 8)) / 2,'\x06',pbVar41);
                  st::fn_00710A90(this_00->field_1A73,this_00->field_1E8E,0,0x23,0,
                                   pAVar43->field_002C + -0x46,0x11);
                  iVar21 = (-(uint)((message->arg0).words.high != 0) & 0xfffffffe) + 2;
                  st::external_00000080((LPSTR)&DAT_0080f33a,"&%d%s (&0%d&%d)",iVar21,local_c,
                            *(undefined4 *)&local_c[2].field_0x4,iVar21);
                  st::fn_007119C0(this_00->field_1A73,&DAT_0080f33a,0,-1,0);
                }
              }
            }
          }
          else {
            iVar21 = (uint)(message->arg1).words.high + *(int *)&pAVar43->field_0x28;
            st::fn_00402298(*(int *)&pAVar43->field_0x24,iVar21,*(int *)&pAVar43->field_0x24 + -0x13,
                       iVar21 + -0x5e,pAVar43->field_002C,(byte *)0x11,'\x01',this_00->field_1E9A);
            st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                         pAVar43->field_002C,0x11,0xff);
            pFVar8 = this_00->field_1EBE;
            if (pFVar8 != nullptr) {
              uVar35 = (uint)(message->arg0).words.low;
              if (uVar35 < pFVar8->count) {
                element_1ebe = DArrayAt<FSGSTy_field_1EBEElement>(pFVar8, uVar35);
              }
              else {
                element_1ebe = nullptr;
              }
              if (element_1ebe != nullptr) {
                iVar21 = -1;
                pcVar39 = (char *)(element_1ebe + 0x13);
                do {
                  if (iVar21 == 0) break;
                  iVar21 = iVar21 + -1;
                  cVar2 = *pcVar39;
                  pcVar39 = pcVar39 + 1;
                } while (cVar2 != '\0');
                pbVar41 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)
                                               this_00->field_1A87,-(uint)(iVar21 != -2) & 4);
                st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,3,
                       (0x11 - *(int *)(pbVar41 + 8)) / 2,'\x06',pbVar41);
                st::fn_00710A90(this_00->field_1A73,this_00->field_1E8E,0,0x23,0,
                                 local_1c->field_002C + -0x40,0x11);
                st::fn_007119C0(this_00->field_1A73,element_1ebe + 0xb,0,-1,
                               (-(uint)((message->arg0).words.high != 0) & 0xfffffffe) + 2);
                pAVar43 = local_1c;
              }
            }
          }
          DVar47 = pAVar43->field_002C;
          pBVar45 = (BITMAPINFO *)this_00->field_1E8E;
          DVar20 = 0x11;
          iVar21 = (uint)(message->arg1).words.high + *(int *)&pAVar43->field_0x28;
          goto LAB_005a89f6;
        case MESS_OPTPANELTY_8162:
          if ((g_cursorClass_00802A30 != nullptr) &&
             (g_cursorClass_00802A30->field_0493 == CASE_5)) break;
          if (this_00->field_1A60 != '\0') {
            pDVar25 = this_00->field_1EAA;
            if (pDVar25 != nullptr) {
              if ((message->arg0).u32 < pDVar25->count) {
                pcVar39 = DArrayAt<char>(pDVar25, (message->arg0).u32);
              }
              else {
                pcVar39 = nullptr;
              }
              if (pcVar39 != nullptr) {
                if (g_cursorClass_00802A30 != nullptr) {
                  iVar21 = g_cursorClass_00802A30->field_00C9;
                  iVar46 = g_cursorClass_00802A30->field_00C5;
                  g_cursorClass_00802A30->field_0493 = CASE_5;
                  pCVar37->field_0494 = 0xffff;
                  st::fn_0040507E(pCVar37,CASE_0,iVar46,iVar21);
                  st::fn_0040241E(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
                  pCVar37->field_00D2 = 0;
                  pCVar37->field_04DF = -1;
                }
                iVar21 = -1;
                pcVar27 = pcVar39 + 0x40;
                do {
                  if (iVar21 == 0) break;
                  iVar21 = iVar21 + -1;
                  cVar2 = *pcVar27;
                  pcVar27 = pcVar27 + 1;
                } while (cVar2 != '\0');
                if (iVar21 == -2) {
                  st::fn_00405542(&DAT_00802a90,pcVar39,pcVar39 + 0x40,1);
                }
                else if ((int)this_00->field_1AEC->elementSize < 1) {
                  st::fn_00405542(&DAT_00802a90,pcVar39,nullptr,1);
                }
                else {
                  st::fn_00405542(&DAT_00802a90,pcVar39,
                                     *(char **)this_00->field_1AEC->growCapacity,1);
                }
              }
            }
            break;
          }
          uVar35 = (message->arg0).u32;
          if (uVar35 == 0) {
            if (g_cursorClass_00802A30 != nullptr) {
              iVar21 = g_cursorClass_00802A30->field_00C9;
              iVar46 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = CASE_5;
              pCVar37->field_0494 = 0xffff;
              st::fn_0040507E(pCVar37,CASE_0,iVar46,iVar21);
              st::fn_0040241E(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
              pCVar37->field_00D2 = 0;
              pCVar37->field_04DF = -1;
            }
            st::external_000000F1((CFsgsConnection *)&DAT_00802a90);
            this_00->field_1A60 = 1;
            this_00->field_002D = 0x20;
            *(undefined4 *)&this_00->field_0x31 = 0;
            if (this_00->field_1B18 != 0) {
              st::fn_006E6080(this_00,2,this_00->field_1B18,(undefined4 *)&this_00->field_0x1d);
            }
            *(undefined4 *)&this_00->field_0x31 = 1;
            if (this_00->field_1B24 != 0) {
              st::fn_006E6080(this_00,2,this_00->field_1B24,(undefined4 *)&this_00->field_0x1d);
            }
            break;
          }
          pDVar25 = this_00->field_1EA6;
          if (uVar35 < pDVar25->count) {
            pcVar39 = DArrayAt<char>(pDVar25, uVar35);
          }
          else {
            pcVar39 = nullptr;
          }
          if (pcVar39 == nullptr) break;
          if (this_00->field_1B0C != nullptr) {
            st::fn_006AB060(&this_00->field_1B0C);
          }
          uVar35 = 0xffffffff;
          pcVar27 = pcVar39;
          do {
            if (uVar35 == 0) break;
            uVar35 = uVar35 - 1;
            cVar2 = *pcVar27;
            pcVar27 = pcVar27 + 1;
          } while (cVar2 != '\0');
          pbVar41 = st::fn_006AAC70(~uVar35);
          uVar35 = 0xffffffff;
          this_00->field_1B0C = pbVar41;
          do {
            pcVar27 = pcVar39;
            if (uVar35 == 0) break;
            uVar35 = uVar35 - 1;
            pcVar27 = pcVar39 + 1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar27;
          } while (cVar2 != '\0');
          uVar35 = ~uVar35;
          pbVar36 = (byte *)(pcVar27 + -uVar35);
          memmove(pbVar41, pbVar36, uVar35); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          this_00->CloseButtons();
          this_00->field_1A61 = 10;
          this_00->field_1ED2 = 6;
          pSVar13 = this_00->field_1A5B;
          if (pSVar13->field_02E6 == nullptr) break;
          puVar23 = local_370;
          for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
            *puVar23 = 0xffffffff;
            puVar23 = puVar23 + 1;
          }
          *(undefined2 *)puVar23 = 0xffff;
          local_7c = 0;
          local_78 = 0;
          local_80 = 0x10101;
          local_74 = 0;
          st::fn_00404B51(pSVar13->field_02E6,(int)local_370);
          puVar23 = &local_80;
          goto cf_common_exit_005A7F3B;
        case MESS_SIDTY_8163:
          if (this_00->field_1A5F == CASE_6) {
            if (this_00->field_1A60 == '\0') {
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
          else if (this_00->field_1A5F == CASE_8) {
            pFVar8 = this_00->field_1EBE;
            bVar44 = true;
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            if (((pFVar8 != nullptr) && ((message->arg0).u32 < pFVar8->count)
                ) && (puVar24 = (uint *)((int)&pFVar8->data->field_0000 +
                                        pFVar8->elementSize * (message->arg0).u32),
                     puVar24 != nullptr)) {
              bVar44 = false;
              st::fn_006B6020(this_00->field_1AE8,0,(char *)(puVar24 + 0xb));
              this_00->field_002D = 0x33;
              *(DArrayTy **)&this_00->field_0x31 = this_00->field_1AE8;
              st::fn_006E6080(this_00,2,this_00->field_1AC4,(undefined4 *)&this_00->field_0x1d);
              st::fn_006B5F80((int *)g_ddxContext_008075A8,0x1a4,0x7d,0x15e,0x8c);
              st::fn_00402298(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',this_00->field_1E92);
              st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,0x15e,0x8c,
                           0xff);
              st::fn_00710A90(this_00->field_1A73,this_00->field_1E8E,0,0,0,0x15e,0x11);
              uVar35 = 2;
              iVar46 = -1;
              iVar21 = -1;
              puVar31 = (uint *)st::fn_006B0140(0x2572,g_hINSTANCE_00807618);
              st::fn_007119C0(this_00->field_1A73,puVar31,iVar21,iVar46,uVar35);
              st::fn_00710A90(this_00->field_1A73,this_00->field_1E8E,0,10,0x11,0x14a,0x11);
              st::fn_007119C0(this_00->field_1A73,puVar24 + 7,0,-1,0);
              st::fn_00710A90(this_00->field_1A73,this_00->field_1E8E,0,0,0x22,0x15e,0x11);
              uVar35 = 2;
              iVar46 = -1;
              iVar21 = -1;
              puVar31 = (uint *)st::fn_006B0140(0x2347,g_hINSTANCE_00807618);
              st::fn_007119C0(this_00->field_1A73,puVar31,iVar21,iVar46,uVar35);
              st::fn_00710A90(this_00->field_1A73,this_00->field_1E8E,0,10,0x33,0x14a,0x11);
              uVar35 = 0;
              iVar46 = -1;
              iVar21 = 0;
              if (*(char *)(puVar24 + 0x1f) == '\0') {
                puVar31 = (uint *)st::fn_006B0140(0x2573,g_hINSTANCE_00807618);
              }
              else {
                puVar31 = (uint *)((int)puVar24 + 0x83);
              }
              st::fn_007119C0(this_00->field_1A73,puVar31,iVar21,iVar46,uVar35);
              st::fn_00710A90(this_00->field_1A73,this_00->field_1E8E,0,0,0x44,0x15e,0x11);
              uVar35 = 2;
              iVar46 = -1;
              iVar21 = -1;
              puVar31 = (uint *)st::fn_006B0140(0x2344,g_hINSTANCE_00807618);
              st::fn_007119C0(this_00->field_1A73,puVar31,iVar21,iVar46,uVar35);
              if (*(char *)(puVar24 + 0x1f) != '\0') {
                st::fn_00710A90(this_00->field_1A73,this_00->field_1E8E,0,10,0x55,0x14a,0x11);
                iVar21 = (int)(char)STField<undefined1>(puVar24,0x7e) << 1;
                st::external_00000080((LPSTR)&DAT_0080f33a,"%dx%d",iVar21,iVar21);
                st::fn_007119C0(this_00->field_1A73,&DAT_0080f33a,0,-1,0);
              }
              st::fn_00710A90(this_00->field_1A73,this_00->field_1E8E,0,0,0x66,0x15e,0x11);
              uVar35 = 2;
              iVar46 = -1;
              iVar21 = -1;
              puVar31 = (uint *)st::fn_006B0140(0x2345,g_hINSTANCE_00807618);
              st::fn_007119C0(this_00->field_1A73,puVar31,iVar21,iVar46,uVar35);
              if (*(char *)(puVar24 + 0x1f) != '\0') {
                st::fn_00710A90(this_00->field_1A73,this_00->field_1E8E,0,10,0x77,0x14a,0x11);
                pcVar39 = st::fn_006B0140(0x2574,g_hINSTANCE_00807618);
                st::external_00000080((LPSTR)&DAT_0080f33a,"%d %s",
                          (int)(char)STField<undefined1>(puVar24,0x7d),pcVar39);
                st::fn_007119C0(this_00->field_1A73,&DAT_0080f33a,0,-1,0);
              }
              st::fn_006B4680
                        ((int *)g_dDXContext_0080759C,0x1a4,0x7d,(BITMAPINFO *)this_00->field_1E8E,
                         nullptr,0,0,0x15e,0x8c,0x10000ff);
            }
            if (bVar44) {
              st::fn_006B6020(this_00->field_1AE8,0,&DAT_008016a0);
              this_00->field_002D = 0x33;
              *(DArrayTy **)&this_00->field_0x31 = this_00->field_1AE8;
              st::fn_006E6080(this_00,2,this_00->field_1AC4,(undefined4 *)&this_00->field_0x1d);
              st::fn_006B5F80((int *)g_ddxContext_008075A8,0x1a4,0x7d,0x15e,0x8c);
              st::fn_00402298(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',this_00->field_1E92);
              st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,0x15e,0x8c,
                           0xff);
              st::fn_00710A90(this_00->field_1A73,this_00->field_1E8E,0,0,0,0x15e,0x11);
              uVar35 = 2;
              iVar46 = -1;
              iVar21 = -1;
              puVar24 = (uint *)st::fn_006B0140(0x2572,g_hINSTANCE_00807618);
              st::fn_007119C0(this_00->field_1A73,puVar24,iVar21,iVar46,uVar35);
              st::fn_00710A90(this_00->field_1A73,this_00->field_1E8E,0,0,0x22,0x15e,0x11);
              uVar35 = 2;
              iVar46 = -1;
              iVar21 = -1;
              puVar24 = (uint *)st::fn_006B0140(0x2347,g_hINSTANCE_00807618);
              st::fn_007119C0(this_00->field_1A73,puVar24,iVar21,iVar46,uVar35);
              st::fn_00710A90(this_00->field_1A73,this_00->field_1E8E,0,0,0x44,0x15e,0x11);
              uVar35 = 2;
              iVar46 = -1;
              iVar21 = -1;
              puVar24 = (uint *)st::fn_006B0140(0x2344,g_hINSTANCE_00807618);
              st::fn_007119C0(this_00->field_1A73,puVar24,iVar21,iVar46,uVar35);
              st::fn_00710A90(this_00->field_1A73,this_00->field_1E8E,0,0,0x66,0x15e,0x11);
              uVar35 = 2;
              iVar46 = -1;
              iVar21 = -1;
              puVar24 = (uint *)st::fn_006B0140(0x2345,g_hINSTANCE_00807618);
              st::fn_007119C0(this_00->field_1A73,puVar24,iVar21,iVar46,uVar35);
              st::fn_006B4680
                        ((int *)g_dDXContext_0080759C,0x1a4,0x7d,(BITMAPINFO *)this_00->field_1E8E,
                         nullptr,0,0,0x15e,0x8c,0x10000ff);
            }
          }
          break;
        case MESS_OPTPANELTY_8164:
          st::fn_004031D4
                    ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1CDB,
                     (int)message,0);
          break;
        case MESS_OPTPANELTY_8165:
          st::fn_004031D4
                    ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1D6C,
                     (int)message,0);
          break;
        case MESS_SHARED_8166:
          uVar35 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
          this_00->field_1E1D = uVar35;
          if (this_00->field_1E01 != 0xffffffff) {
            st::fn_006B3730
                      ((uint *)this_00->field_1E45,this_00->field_1E01,this_00->field_1E05,
                       this_00->field_1E19,uVar35);
          }
        }
        goto cf_common_exit_005A8CA7;
      }
      switch(SVar6) {
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
          st::external_00000107((CFsgsConnection *)&DAT_00802a90,pcVar39);
        }
        else {
          iVar21 = 0;
          pDVar25 = this_00->field_1A5B->field_0696;
          if (0 < (int)pDVar25->elementSize) {
            if ((int)pDVar25->elementSize < 1) {
              pcVar39 = nullptr;
              goto LAB_005a8b12;
            }
            do {
              pcVar39 = *(char **)(pDVar25->growCapacity + iVar21 * 4);
LAB_005a8b12:
              st::fn_0040347C(this_00,8,&DAT_008016a0,pcVar39,8);
              iVar21 = iVar21 + 1;
              pDVar25 = this_00->field_1A5B->field_0696;
            } while (iVar21 < (int)pDVar25->elementSize);
          }
        }
        st::fn_006B6020(this_00->field_1EA2,0,&DAT_008016a0);
        this_00->field_002D = 0x33;
        *(DArrayTy **)&this_00->field_0x31 = this_00->field_1EA2;
        goto LAB_005a8c85;
      case MESS_SHARED_C0A3:
        pDVar25 = this_00->field_1AE8;
        dVar11 = pDVar25->elementSize;
joined_r0x005a8b8f:
        if (0 < (int)dVar11) {
          pcVar39 = *(char **)pDVar25->growCapacity;
        }
        iVar21 = -1;
        do {
          if (iVar21 == 0) break;
          iVar21 = iVar21 + -1;
          cVar2 = *pcVar39;
          pcVar39 = pcVar39 + 1;
        } while (cVar2 != '\0');
        if (iVar21 != -2) {
          if ((int)this_00->field_1AEC->elementSize < 1) {
            pcVar39 = nullptr;
          }
          else {
            pcVar39 = *(char **)this_00->field_1AEC->growCapacity;
          }
          if ((int)dVar11 < 1) {
            st::fn_00405542(&DAT_00802a90,nullptr,pcVar39,1);
          }
          else {
            st::fn_00405542(&DAT_00802a90,*(char **)pDVar25->growCapacity,pcVar39,1);
          }
        }
        break;
      case MESS_BLDLABPANELTY_C0A4:
        if (this_00->field_1A60 != '\0') break;
        this_00->field_002D = 0x26;
        st::fn_006E6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
        uVar35 = *(uint *)&this_00->field_0x31;
        if (uVar35 == 0) break;
        pDVar25 = this_00->field_1EA6;
        if (uVar35 < pDVar25->count) {
          pvVar38 = DArrayAt<void>(pDVar25, uVar35);
        }
        else {
          pvVar38 = nullptr;
        }
        if ((int)this_00->field_1EA2->elementSize < 1) {
          uVar26 = 0;
        }
        else {
          uVar26 = *(undefined4 *)this_00->field_1EA2->growCapacity;
        }
        st::external_00000080((LPSTR)&DAT_0080f33a,"%s %s ",uVar26,pvVar38);
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
    if (SVar6 == MESS_SHARED_8160) {
      (message->arg1).u32 = 0x11;
      goto cf_common_exit_005A8CA7;
    }
    switch(SVar6) {
    case MESS_SHARED_6980:
      piVar17 = (message->arg1).ptr;
      iVar21 = *piVar17;
      local_140 = iVar21 + -0xb4;
      iVar46 = piVar17[1];
      local_13c = iVar46 + -0xaa;
      local_138 = piVar17[2];
      local_134 = piVar17[3];
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,iVar21 + -0xb3,
                   iVar46 + -0xa9,local_138 + -2,local_134 + -2,0xff);
      if (DAT_0080735f != '\0') {
        pbVar41 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1A83,0);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,iVar21 + -0xb2,iVar46 + -0xa8,
               '\x06',pbVar41);
      }
      break;
    case MESS_SIDTY_6981:
      pcVar12 = this_00->field_1A73;
      local_14 = nullptr;
      if (pcVar12->field_00A0 != 0) {
        st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar12);
      }
      dVar11 = (message->arg2).u32;
      iVar21 = *(int *)&pcVar12->field_0x8a;
      local_50 = *(int *)(dVar11 + 0x24) + -0xb4;
      local_48 = *(int *)(dVar11 + 0x2c);
      local_44 = *(int *)(dVar11 + 0x30);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_4c = *(int *)(dVar11 + 0x28) -
                 ((-(uint)(this_00->field_1ABB != '\0') & 0xffffffb4) + 0xaa);
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,
                   *(int *)(dVar11 + 0x24) + -0xb5,local_4c,local_48 + 2,local_44,0xff);
      pvVar38 = (message->arg0).ptr;
      if (pvVar38 != nullptr) {
        local_8 = nullptr;
        do {
          if (*(char **)((int)pvVar38 + (int)local_8) == nullptr) break;
          iVar21 = st::fn_007111C0(this_00->field_1A73,*(char **)((int)pvVar38 + (int)local_8));
          st::fn_00710A90(this_00->field_1A73,(int)this_00->field_1AC0,0,local_50,
                           (int)&(((tagBITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize
                           + local_4c,local_48,iVar21);
          st::fn_007119C0(this_00->field_1A73,*(uint **)((int)(message->arg0).ptr + (int)local_8),0,
                         -1,0);
          local_14 = (tagBITMAPINFO *)
                     ((int)&(((tagBITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize +
                     this_00->field_1A73->field_005C + iVar21);
          pvVar38 = (message->arg0).ptr;
          local_8 = local_8 + 1;
        } while (pvVar38 != nullptr);
      }
      uVar4 = (message->arg1).words.low;
      if ((uVar4 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
        iVar48 = (uint)(message->arg1).words.high + local_4c;
        iVar46 = (uint)uVar4 + local_50;
        st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1AC0,0,iVar46,iVar48,iVar46,
                     iVar48 + iVar21,9,0xd);
      }
      goto LAB_005a7c92;
    case MESS_SHARED_6980|MESS_ID_CREATE:
      if (((this_00->field_1E8E != 0) && (this_00->field_1E92 != nullptr)) &&
         (local_8 = (uint *)(message->arg2).u32, local_8 != nullptr)) {
        if (this_00->field_1A5F == CASE_3) {
          pcVar12 = this_00->field_1A73;
          local_1c = (AnonShape_005A4350_59BACD18 *)this_00->field_1B08;
        }
        else {
          pcVar12 = this_00->field_1A77;
          local_1c = (AnonShape_005A4350_59BACD18 *)this_00->field_1E9E;
        }
        st::fn_006B5F80((int *)g_ddxContext_008075A8,local_8[9],local_8[10],local_8[0xb],local_8[0xc]);
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
              if (pcVar12->field_00A0 != 0) {
                st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar12);
              }
              local_c = *(AnonShape_005A4350_59BACD18 **)&pcVar12->field_0x8a;
              if (pcVar12->field_00A0 != 0) {
                st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar12);
              }
              st::fn_00710A90(pcVar12,this_00->field_1E8E,0,0,
                               ((int)local_14 - (uint)(message->arg0).words.high) *
                               *(int *)&pcVar12->field_0x8a,*(int *)(this_00->field_1E8E + 4),
                               (int)local_c);
              st::fn_007119C0(pcVar12,local_10,0,-1,2);
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
        dVar11 = (message->arg2).u32;
        st::fn_006B5F80((int *)g_ddxContext_008075A8,*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                     *(int *)(dVar11 + 0x2c),*(int *)(dVar11 + 0x30));
        st::fn_00402298(*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),6,0x15f,*(uint *)(dVar11 + 0x2c),
                   *(byte **)(dVar11 + 0x30),'\x01',this_00->field_1E92);
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                     *(int *)(dVar11 + 0x2c),*(int *)(dVar11 + 0x30),0xff);
        if ((message->arg0).u32 != 0) {
          st::fn_00710A90(this_00->field_1A77,this_00->field_1E8E,0,0,0,
                           *(int *)(this_00->field_1E8E + 4),0x14);
          st::fn_007119C0(this_00->field_1A77,*(uint **)(message->arg0).ptr,0,-1,5);
        }
        uVar4 = (message->arg1).words.low;
        if ((uVar4 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
          st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1E8E,0,(uint)uVar4,2,
                       (uint)uVar4,0x11,9,0xd);
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        st::fn_006B4680
                  ((int *)g_dDXContext_0080759C,*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                   (BITMAPINFO *)this_00->field_1E8E,nullptr,0,0,*(DWORD *)(dVar11 + 0x2c),
                   *(DWORD *)(dVar11 + 0x30),0x10000ff);
      }
      break;
    case 0x6984:
      if ((this_00->field_1E8E == 0) || (this_00->field_1E92 == nullptr)) break;
      pAVar43 = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
      st::fn_006B5F80((int *)g_ddxContext_008075A8,*(int *)&pAVar43->field_0x24,
                   *(int *)&pAVar43->field_0x28,pAVar43->field_002C,*(int *)(pAVar43 + 1));
      st::fn_00402298(*(int *)&pAVar43->field_0x24,*(int *)&pAVar43->field_0x28,
                 *(int *)&pAVar43->field_0x24 + -0x13,0x160,pAVar43->field_002C,
                 *(byte **)(pAVar43 + 1),'\x01',this_00->field_1E92);
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,pAVar43->field_002C,
                   *(int *)(pAVar43 + 1),0xff);
      st::fn_00710A90(this_00->field_1A73,this_00->field_1E8E,0,0,0,pAVar43->field_002C,
                       *(int *)(pAVar43 + 1));
      wVar5 = (message->arg0).words.low;
      if (wVar5 == 1) {
        uVar35 = 2;
      }
      else {
        uVar35 = (-(uint)(wVar5 != 0) & 2) + 1;
      }
      iVar46 = -1;
      iVar21 = -1;
      puVar24 = (uint *)st::fn_006B0140(0x2565,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_1A73,puVar24,iVar21,iVar46,uVar35);
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
      switch(SVar6) {
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
      local_c = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
      switch(SVar6 - (MESS_SHARED_6980|MESS_SHARED_0005)) {
      case MESS_ID_NONE:
        local_8 = (uint *)0x2566;
        break;
      case 1:
      case MESS_SHARED_0008:
        local_8 = (uint *)0x2616;
        break;
      case 4:
        uVar35 = this_00->field_1EC2;
        if (uVar35 < 0x401) {
          if (uVar35 == 0x400) {
            local_8 = (uint *)0x235b;
          }
          else if (uVar35 == 0x100) {
            local_8 = (uint *)0x2341;
          }
          else {
            if (uVar35 != 0x200) goto LAB_005a7656;
            local_8 = (uint *)0x235a;
          }
        }
        else if (uVar35 == 0x501) {
          local_8 = (uint *)0x2342;
        }
        else if (uVar35 == 0x502) {
          local_8 = (uint *)0x235d;
        }
        else {
LAB_005a7656:
          local_8 = (uint *)0x235c;
        }
        break;
      case MESS_SHARED_0005:
        if (this_00->field_1EC6 == -1) {
          pcVar39 = st::fn_006B0140(0x235c,g_hINSTANCE_00807618);
          uVar35 = 0xffffffff;
          do {
            pcVar27 = pcVar39;
            if (uVar35 == 0) break;
            uVar35 = uVar35 - 1;
            pcVar27 = pcVar39 + 1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar27;
          } while (cVar2 != '\0');
          uVar35 = ~uVar35;
          pcVar39 = pcVar27 + -uVar35;
          pcVar27 = (char *)&DAT_0080f33a;
          memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
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
            pcVar39 = &DAT_008016a0;
          }
          uVar35 = 0xffffffff;
          do {
            pcVar27 = pcVar39;
            if (uVar35 == 0) break;
            uVar35 = uVar35 - 1;
            pcVar27 = pcVar39 + 1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar27;
          } while (cVar2 != '\0');
          uVar35 = ~uVar35;
          pcVar39 = pcVar27 + -uVar35;
          pcVar27 = (char *)&DAT_0080f33a;
          memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
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
      pAVar43 = local_c;
      st::fn_006B5F80((int *)g_ddxContext_008075A8,*(int *)&local_c->field_0x24,
                   *(int *)&local_c->field_0x28,local_c->field_002C,*(int *)(local_c + 1));
      st::fn_00402298(*(int *)&pAVar43->field_0x24,*(int *)&pAVar43->field_0x28,
                 *(int *)&pAVar43->field_0x24 - (int)local_10,
                 *(int *)&pAVar43->field_0x28 - (int)local_1c,pAVar43->field_002C,
                 *(byte **)(pAVar43 + 1),'\x01',local_14);
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,pAVar43->field_002C,
                   *(int *)(pAVar43 + 1),0xff);
      st::fn_00710A90(this_00->field_1A73,this_00->field_1E8E,0,0,0,pAVar43->field_002C,
                       *(int *)(pAVar43 + 1));
      wVar5 = (message->arg0).words.low;
      if (wVar5 == 1) {
        local_c = (AnonShape_005A4350_59BACD18 *)0x2;
      }
      else {
        local_c = (AnonShape_005A4350_59BACD18 *)((-(uint)(wVar5 != 0) & 2) + 1);
      }
      if (message->id == MESS_FSGSTY_698A) {
        puVar24 = &DAT_0080f33a;
      }
      else {
        puVar24 = (uint *)st::fn_006B0140((UINT)local_8,g_hINSTANCE_00807618);
      }
      st::fn_007119C0(this_00->field_1A73,puVar24,-1,-1,(uint)local_c);
      wVar5 = (message->arg0).words.low;
      if (wVar5 == 0) {
        bVar34 = 0xd;
      }
      else {
        bVar34 = (-(wVar5 != 2) & 0x10U) - 2;
      }
      st::fn_006C7570((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                   (undefined4 *)pAVar43->field_002C,*(int *)(pAVar43 + 1),4,bVar34);
      wVar5 = (message->arg0).words.low;
      if (wVar5 == 0) {
        bVar34 = 0xd;
      }
      else {
        bVar34 = (-(wVar5 != 2) & 0x10U) - 2;
      }
      st::fn_006C7570((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,2,2,
                   (undefined4 *)(pAVar43->field_002C + -4),*(int *)(pAVar43 + 1) + -4,4,bVar34);
LAB_005a754e:
      DVar20 = *(DWORD *)(pAVar43 + 1);
      DVar47 = pAVar43->field_002C;
      pBVar45 = (BITMAPINFO *)this_00->field_1E8E;
      iVar21 = *(int *)&pAVar43->field_0x28;
LAB_005a89f6:
      st::fn_006B4680
                ((int *)g_dDXContext_0080759C,*(int *)&pAVar43->field_0x24,iVar21,pBVar45,
                 nullptr,0,0,DVar47,DVar20,0x10000ff);
      break;
    case 0x6987:
      if ((this_00->field_1E8E != 0) && (this_00->field_1E9A != nullptr)) {
        dVar11 = (message->arg2).u32;
        st::fn_006B5F80((int *)g_ddxContext_008075A8,*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                     *(int *)(dVar11 + 0x2c),*(int *)(dVar11 + 0x30));
        st::fn_00402298(*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),*(int *)(dVar11 + 0x24) + -0x1e9,
                   *(int *)(dVar11 + 0x28) + -0x5e,*(uint *)(dVar11 + 0x2c),
                   *(byte **)(dVar11 + 0x30),'\x01',this_00->field_1E9A);
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                     *(int *)(dVar11 + 0x2c),*(int *)(dVar11 + 0x30),0xff);
        if ((message->arg0).u32 != 0) {
          st::fn_00710A90(this_00->field_1A73,this_00->field_1E8E,0,0,0,
                           *(int *)(this_00->field_1E8E + 4),0x19);
          st::fn_007119C0(this_00->field_1A73,*(uint **)(message->arg0).ptr,3,-1,5);
        }
        uVar4 = (message->arg1).words.low;
        if ((uVar4 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
          iVar21 = uVar4 + 3;
          st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1E8E,0,iVar21,4,iVar21,0x11,9,
                       0xd);
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        st::fn_006B4680
                  ((int *)g_dDXContext_0080759C,*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                   (BITMAPINFO *)this_00->field_1E8E,nullptr,0,0,*(DWORD *)(dVar11 + 0x2c),
                   *(DWORD *)(dVar11 + 0x30),0x10000ff);
      }
      break;
    case MESS_SHARED_6980|MESS_SHARED_0008:
      if ((this_00->field_1E8E != 0) && (this_00->field_1E92 != nullptr)) {
        dVar11 = (message->arg2).u32;
        st::fn_006B5F80((int *)g_ddxContext_008075A8,*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                     *(int *)(dVar11 + 0x2c),*(int *)(dVar11 + 0x30));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        st::fn_00402298(*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                   *(int *)(dVar11 + 0x24) -
                   ((-(uint)(this_00->field_1A5F != CASE_9) & 0x177) + 0x22),
                   *(int *)(dVar11 + 0x28) + -0x5e,*(uint *)(dVar11 + 0x2c),
                   *(byte **)(dVar11 + 0x30),'\x01',this_00->field_1E92);
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1E8E,0,0,0,
                     *(int *)(dVar11 + 0x2c),*(int *)(dVar11 + 0x30),0xff);
        if ((message->arg0).u32 != 0) {
          st::fn_00710A90(this_00->field_1A73,this_00->field_1E8E,0,0,0,
                           *(int *)(this_00->field_1E8E + 4),0x19);
          st::fn_007119C0(this_00->field_1A73,*(uint **)(message->arg0).ptr,3,-1,5);
        }
        uVar4 = (message->arg1).words.low;
        if ((uVar4 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
          iVar21 = uVar4 + 3;
          st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1E8E,0,iVar21,3,iVar21,0x11,9,
                       0xd);
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        st::fn_006B4680
                  ((int *)g_dDXContext_0080759C,*(int *)(dVar11 + 0x24),*(int *)(dVar11 + 0x28),
                   (BITMAPINFO *)this_00->field_1E8E,nullptr,0,0,*(DWORD *)(dVar11 + 0x2c),
                   *(DWORD *)(dVar11 + 0x30),0x10000ff);
      }
      break;
    case 0x698b:
      piVar17 = (message->arg1).ptr;
      iVar21 = *piVar17;
      iVar46 = iVar21 + -0xb4;
      local_3c = piVar17[1] - 0xaa;
      local_38 = (undefined4 *)piVar17[2];
      local_34 = piVar17[3];
      local_40 = iVar46;
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,iVar46,local_3c,
                   (int)local_38,local_34,0xff);
      wVar5 = (message->arg0).words.low;
      if (wVar5 == 0) {
        bVar34 = 0xd;
      }
      else {
        bVar34 = (-(wVar5 != 2) & 0x10U) - 2;
      }
      st::fn_006C7570((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,iVar46,local_3c,local_38,
                   local_34,4,bVar34);
      wVar5 = (message->arg0).words.low;
      if (wVar5 == 0) {
        bVar34 = 0xd;
      }
      else {
        bVar34 = (-(wVar5 != 2) & 0x10U) - 2;
      }
      st::fn_006C7570((RecoveredSourceFamily_dibcopy *)this_00->field_1AC0,0,iVar21 + -0xb2,
                   local_3c + 2,local_38 + -1,local_34 + -4,4,bVar34);
      uVar35 = this_00->field_1EC2;
      if (uVar35 < 0x502) {
        if (uVar35 == 0x501) {
          local_8 = (uint *)0x2342;
        }
        else if (uVar35 == 0x200) {
          local_8 = (uint *)0x235a;
        }
        else {
          if (uVar35 != 0x400) goto LAB_005a7c26;
          local_8 = (uint *)0x235b;
        }
      }
      else if (uVar35 == 0x502) {
        local_8 = (uint *)0x235d;
      }
      else {
LAB_005a7c26:
        local_8 = (uint *)0x2341;
      }
      st::fn_00710A90(this_00->field_1A73,(int)this_00->field_1AC0,0,iVar46,local_3c,(int)local_38,
                       local_34);
      wVar5 = (message->arg0).words.low;
      if (wVar5 == 1) {
        uVar35 = 2;
      }
      else {
        uVar35 = (-(uint)(wVar5 != 0) & 2) + 1;
      }
      iVar46 = -1;
      iVar21 = -1;
      puVar24 = (uint *)st::fn_006B0140((UINT)local_8,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_1A73,puVar24,iVar21,iVar46,uVar35);
LAB_005a7c92:
      st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
      break;
    case 0x698c:
      st::fn_00710A90(this_00->field_1A73,(message->arg1).i32,0,0,0,0,0);
      pFVar9 = this_00->field_1FB3;
      uVar35 = (uint)(message->arg0).words.low;
      if (uVar35 < pFVar9->count) {
        element_1fb3 = DArrayAt<FSGSTy_field_1FB3Element>(pFVar9, uVar35);
      }
      else {
        element_1fb3 = nullptr;
      }
      st::fn_007119C0(this_00->field_1A73,element_1fb3,-1,-1,3 - ((message->arg0).words.high != 1));
      if ((message->arg0).words.high == 1) {
        pRVar18 = (message->arg1).ptr;
        st::fn_006B5EE0(pRVar18,0,0,0,pRVar18->field_0004,pRVar18->field_0008,0xf,0xd);
      }
    }
    goto cf_common_exit_005A8CA7;
  }
  if (SVar6 == MESS_FSGSTY_6949) {
    this_00->CloseButtons();
    this_00->field_1A61 = 9;
    pSVar13 = this_00->field_1A5B;
    if (pSVar13->field_02E6 == nullptr) goto cf_common_exit_005A8CA7;
    puVar23 = local_2ac;
    for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
      *puVar23 = 0xffffffff;
      puVar23 = puVar23 + 1;
    }
    *(undefined2 *)puVar23 = 0xffff;
    local_cc = 0;
    local_c8 = 0;
    local_d0 = 0x10101;
    local_c4 = 0;
    st::fn_00404B51(pSVar13->field_02E6,(int)local_2ac);
    puVar23 = &local_d0;
cf_common_exit_005A7F3B:
    st::fn_00401A9B(this_00->field_1A5B->field_02E6,puVar23);
    goto cf_common_exit_005A8CA7;
  }
  if (MESS_ID_MSGOK < SVar6) {
    if (SVar6 < 0x6907) {
      if (SVar6 == MESS_FSGSTY_6906) {
        if (g_cursorClass_00802A30->field_0493 == CASE_5) goto cf_common_exit_005A8CA7;
        local_c = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
        this_00->field_1F43 = 0x6506;
        iVar21 = local_c->field_0008;
        this_00->field_1F63 = 0x698c;
        this_00->field_1F4B = iVar21;
        this_00->field_1FB3->count = 0;
        this_00->field_20BB = 1;
        pcVar39 = st::fn_006B0140(0x25b4,g_hINSTANCE_00807618);
        uVar35 = 0xffffffff;
        do {
          pcVar27 = pcVar39;
          if (uVar35 == 0) break;
          uVar35 = uVar35 - 1;
          pcVar27 = pcVar39 + 1;
          cVar2 = *pcVar39;
          pcVar39 = pcVar27;
        } while (cVar2 != '\0');
        uVar35 = ~uVar35;
        pcVar39 = pcVar27 + -uVar35;
        pcVar27 = &this_00->field_0x1fb7;
        memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
        uVar32 = 0;
        st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
        this_00->field_20BB = 2;
        pcVar39 = st::fn_006B0140(0x25b5,g_hINSTANCE_00807618);
        uVar35 = 0xffffffff;
        do {
          pcVar27 = pcVar39;
          if (uVar35 == 0) break;
          uVar35 = uVar35 - 1;
          pcVar27 = pcVar39 + 1;
          cVar2 = *pcVar39;
          pcVar39 = pcVar27;
        } while (cVar2 != '\0');
        uVar35 = ~uVar35;
        pcVar39 = pcVar27 + -uVar35;
        pcVar27 = &this_00->field_0x1fb7;
        memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
        uVar32 = 0;
        st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
        pFVar9 = this_00->field_1FB3;
        this_00->field_1F7B = pFVar9->count;
        uVar35 = 0;
        this_00->field_1F73 = 0;
        if (pFVar9->count != 0) {
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            if (DAT_00803140 == *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar35))
            {
              this_00->field_1F73 = uVar35;
              break;
            }
            uVar35 = uVar35 + 1;
          } while (uVar35 < pFVar9->count);
        }
      }
      else {
        if (SVar6 < MESS_FSGSTY_6903) {
          if (SVar6 == MESS_MAINMENUTY_6902) {
            pDVar25 = this_00->field_1AE8;
            dVar11 = pDVar25->elementSize;
            goto joined_r0x005a8b8f;
          }
          if (MESS_SHARED_6900 < SVar6) {
            if ((SVar6 == MESS_FSGSTY_6901) && (this_00->field_1A60 == '\0')) {
              this_00->field_002D = 0x26;
              puVar1 = &this_00->field_0x1d;
              st::fn_006E6080(this_00,2,this_00->field_1B20,(undefined4 *)puVar1);
              pDVar25 = this_00->field_1EA6;
              if ((uint)*(ushort *)&this_00->field_0x31 < pDVar25->count) {
                pvVar38 = DArrayAt<void>(pDVar25, (uint)*(ushort *)&this_00->field_0x31);
              }
              else {
                pvVar38 = nullptr;
              }
              if (pvVar38 != nullptr) {
                this_00->field_002D = 0x32;
                st::fn_006E6080(this_00,2,this_00->field_1B10,(undefined4 *)puVar1);
                iVar21 = *(int *)&this_00->field_0x31;
                if (iVar21 != 0) {
                  if (*(int *)(iVar21 + 8) < 1) {
                    uVar26 = 0;
                  }
                  else {
                    uVar26 = **(undefined4 **)(iVar21 + 0x14);
                  }
                  pcVar39 = st::fn_006B0140(0x2568,g_hINSTANCE_00807618);
                  st::external_00000080((LPSTR)&DAT_0080f33a,"%s %s %s",pcVar39,pvVar38,uVar26);
                  st::external_00000107
                            ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a);
                  st::fn_006B6020(this_00->field_1EA2,0,&DAT_008016a0);
                  this_00->field_002D = 0x33;
                  *(DArrayTy **)&this_00->field_0x31 = this_00->field_1EA2;
                  st::fn_006E6080(this_00,2,this_00->field_1B10,(undefined4 *)puVar1);
                }
              }
            }
            goto cf_common_exit_005A8CA7;
          }
          if (SVar6 == MESS_SHARED_6900) {
            DAT_0080735f = DAT_0080735f == '\0';
            this_00->field_002D = 5;
            st::fn_006E6080(this_00,2,this_00->field_1AD0,(undefined4 *)&this_00->field_0x1d);
            goto cf_common_exit_005A8CA7;
          }
          if (SVar6 != MESS_FSGSTY_6506) {
            if (SVar6 == MESS_MMSGTY_68FF) {
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
          uVar35 = (message->arg0).u32;
          if (pFVar9->count <= uVar35) goto cf_common_exit_005A8CA7;
          if (this_00->field_1A5F == CASE_9) {
            if ((message->arg1).u32 == this_00->field_1EB6) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              DAT_00803140 = *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar35);
              st::external_000000F7
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pCVar37 = g_cursorClass_00802A30;
joined_r0x005a55e5:
              g_cursorClass_00802A30 = pCVar37;
              if (pCVar37 == nullptr) goto cf_common_exit_005A5634;
              pCVar37->field_0493 = CASE_5;
              pCVar37->field_0494 = 0xffff;
              st::fn_0040507E(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
              iVar21 = pCVar37->field_00C9;
              iVar46 = pCVar37->field_00C5;
            }
            else {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              DAT_00803144 = *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar35);
              st::external_000000F7
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pCVar37 = g_cursorClass_00802A30;
              if (g_cursorClass_00802A30 == nullptr) goto cf_common_exit_005A5634;
              iVar21 = g_cursorClass_00802A30->field_00C9;
              iVar46 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = CASE_5;
              pCVar37->field_0494 = 0xffff;
              st::fn_0040507E(pCVar37,CASE_0,iVar46,iVar21);
              iVar21 = pCVar37->field_00C9;
              iVar46 = pCVar37->field_00C5;
            }
LAB_005a561c:
            st::fn_0040241E(pCVar37,iVar46,iVar21);
            pCVar37->field_00D2 = 0;
            pCVar37->field_04DF = -1;
          }
          else {
            if ((message->arg1).u32 != this_00->field_1EB6) {
              iVar21 = pFVar9->elementSize * uVar35;
              pFVar10 = pFVar9->data;
              this_00->field_1EC6 = *(undefined4 *)(&pFVar10->field_0x104 + iVar21);
              this_00->field_1ECA = *(uint *)(&pFVar10->field_0x108 + iVar21);
              st::external_000000F5
                        ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,nullptr);
              DVar20 = st::external_000000DA();
              this_00->field_1A63 = DVar20;
              pCVar37 = g_cursorClass_00802A30;
              goto joined_r0x005a55e5;
            }
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            this_00->field_1EC2 =
                 *(uint *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar35);
            if (this_00->field_1A5F == CASE_8) {
              uVar35 = this_00->field_1EC2;
              memset(local_24c, 0, 0x20); /* compiler bulk-zero initialization */
              this_00->field_1EC6 = 0xffffffff;
              local_238 = (uint)(uVar35 == 0x100);
              this_00->field_1ECA = 0;
              local_23c = 0x20;
              if (this_00->field_1EBA != 0) {
                st::fn_006E6080(this_00,2,this_00->field_1EBA,local_24c);
              }
              st::external_000000F5
                        ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,nullptr);
              DVar20 = st::external_000000DA();
              this_00->field_1A63 = DVar20;
              pCVar37 = g_cursorClass_00802A30;
              if (g_cursorClass_00802A30 != nullptr) {
                iVar21 = g_cursorClass_00802A30->field_00C9;
                iVar46 = g_cursorClass_00802A30->field_00C5;
                g_cursorClass_00802A30->field_0493 = CASE_5;
                pCVar37->field_0494 = 0xffff;
                st::fn_0040507E(pCVar37,CASE_0,iVar46,iVar21);
                iVar21 = pCVar37->field_00C9;
                iVar46 = pCVar37->field_00C5;
                goto LAB_005a561c;
              }
            }
          }
cf_common_exit_005A5634:
          this_00->field_002D = 5;
          st::fn_006E6080(this_00,2,message->arg1,(undefined4 *)&this_00->field_0x1d);
          goto cf_common_exit_005A8CA7;
        }
        if (SVar6 == MESS_FSGSTY_6903) {
          if (g_cursorClass_00802A30 != nullptr) {
            iVar21 = g_cursorClass_00802A30->field_00C9;
            iVar46 = g_cursorClass_00802A30->field_00C5;
            g_cursorClass_00802A30->field_0493 = CASE_5;
            pCVar37->field_0494 = 0xffff;
            st::fn_0040507E(pCVar37,CASE_0,iVar46,iVar21);
            st::fn_0040241E(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
            pCVar37->field_00D2 = 0;
            pCVar37->field_04DF = -1;
          }
          if (this_00->field_1A5F == CASE_6) {
            st::external_000000F1((CFsgsConnection *)&DAT_00802a90);
            this_00->field_1A60 = 1;
          }
          if (this_00->field_1A5F == CASE_8) {
            st::external_000000F5
                      ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,nullptr);
            DVar20 = st::external_000000DA();
            this_00->field_1A63 = DVar20;
          }
          goto cf_common_exit_005A8CA7;
        }
        if (SVar6 == MESS_FSGSTY_6904) {
          local_c = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
          this_00->field_1F43 = 0x6506;
          iVar21 = local_c->field_0008;
          this_00->field_1F63 = 0x698c;
          this_00->field_1F4B = iVar21;
          this_00->field_1FB3->count = 0;
          if (this_00->field_1A5F == CASE_8) {
            this_00->field_20BB = 0;
            pcVar39 = st::fn_006B0140(0x235c,g_hINSTANCE_00807618);
            uVar35 = 0xffffffff;
            do {
              pcVar27 = pcVar39;
              if (uVar35 == 0) break;
              uVar35 = uVar35 - 1;
              pcVar27 = pcVar39 + 1;
              cVar2 = *pcVar39;
              pcVar39 = pcVar27;
            } while (cVar2 != '\0');
            uVar35 = ~uVar35;
            pcVar39 = pcVar27 + -uVar35;
            pcVar27 = &this_00->field_0x1fb7;
            memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
            uVar32 = 0;
            st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          }
          this_00->field_20BB = 0x100;
          pcVar39 = st::fn_006B0140(0x2341,g_hINSTANCE_00807618);
          uVar35 = 0xffffffff;
          do {
            pcVar27 = pcVar39;
            if (uVar35 == 0) break;
            uVar35 = uVar35 - 1;
            pcVar27 = pcVar39 + 1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar27;
          } while (cVar2 != '\0');
          uVar35 = ~uVar35;
          pcVar39 = pcVar27 + -uVar35;
          pcVar27 = &this_00->field_0x1fb7;
          memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          this_00->field_20BB = 0x501;
          pcVar39 = st::fn_006B0140(0x2342,g_hINSTANCE_00807618);
          uVar35 = 0xffffffff;
          do {
            pcVar27 = pcVar39;
            if (uVar35 == 0) break;
            uVar35 = uVar35 - 1;
            pcVar27 = pcVar39 + 1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar27;
          } while (cVar2 != '\0');
          uVar35 = ~uVar35;
          pcVar39 = pcVar27 + -uVar35;
          pcVar27 = &this_00->field_0x1fb7;
          memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          this_00->field_20BB = 0x200;
          pcVar39 = st::fn_006B0140(0x235a,g_hINSTANCE_00807618);
          uVar35 = 0xffffffff;
          do {
            pcVar27 = pcVar39;
            if (uVar35 == 0) break;
            uVar35 = uVar35 - 1;
            pcVar27 = pcVar39 + 1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar27;
          } while (cVar2 != '\0');
          uVar35 = ~uVar35;
          pcVar39 = pcVar27 + -uVar35;
          pcVar27 = &this_00->field_0x1fb7;
          memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          this_00->field_20BB = 0x400;
          pcVar39 = st::fn_006B0140(0x235b,g_hINSTANCE_00807618);
          uVar35 = 0xffffffff;
          do {
            pcVar27 = pcVar39;
            if (uVar35 == 0) break;
            uVar35 = uVar35 - 1;
            pcVar27 = pcVar39 + 1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar27;
          } while (cVar2 != '\0');
          uVar35 = ~uVar35;
          pcVar39 = pcVar27 + -uVar35;
          pcVar27 = &this_00->field_0x1fb7;
          memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          this_00->field_20BB = 0x502;
          pcVar39 = st::fn_006B0140(0x235d,g_hINSTANCE_00807618);
          uVar35 = 0xffffffff;
          do {
            pcVar27 = pcVar39;
            if (uVar35 == 0) break;
            uVar35 = uVar35 - 1;
            pcVar27 = pcVar39 + 1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar27;
          } while (cVar2 != '\0');
          uVar35 = ~uVar35;
          pcVar39 = pcVar27 + -uVar35;
          pcVar27 = &this_00->field_0x1fb7;
          memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
          pFVar9 = this_00->field_1FB3;
          this_00->field_1F7B = pFVar9->count;
          uVar35 = 0;
          this_00->field_1F73 = 0;
          if (pFVar9->count != 0) {
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              if (this_00->field_1EC2 ==
                  *(uint *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar35)) {
                this_00->field_1F73 = uVar35;
                break;
              }
              uVar35 = uVar35 + 1;
            } while (uVar35 < pFVar9->count);
          }
        }
        else {
          if (SVar6 != MESS_FSGSTY_6905) goto cf_common_exit_005A8CA7;
          local_c = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
          this_00->field_1F43 = 0x6506;
          iVar21 = local_c->field_0008;
          this_00->field_1F63 = 0x698c;
          this_00->field_1F4B = iVar21;
          this_00->field_1FB3->count = 0;
          this_00->field_20BB = 0xffffffff;
          pcVar39 = st::fn_006B0140(0x235c,g_hINSTANCE_00807618);
          uVar35 = 0xffffffff;
          do {
            pcVar27 = pcVar39;
            if (uVar35 == 0) break;
            uVar35 = uVar35 - 1;
            pcVar27 = pcVar39 + 1;
            cVar2 = *pcVar39;
            pcVar39 = pcVar27;
          } while (cVar2 != '\0');
          uVar35 = ~uVar35;
          pcVar39 = pcVar27 + -uVar35;
          pcVar27 = &this_00->field_0x1fb7;
          memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
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
                uVar35 = 0xffffffff;
                do {
                  pcVar27 = pcVar39;
                  if (uVar35 == 0) break;
                  uVar35 = uVar35 - 1;
                  pcVar27 = pcVar39 + 1;
                  cVar2 = *pcVar39;
                  pcVar39 = pcVar27;
                } while (cVar2 != '\0');
                uVar35 = ~uVar35;
                pcVar39 = pcVar27 + -uVar35;
                pcVar27 = &this_00->field_0x1fb7;
                memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
                uVar32 = 0;
                this_00->field_20BF = local_8;
                st::fn_006AE1C0
                          ((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
                pDVar25 = PTR_0080c502;
              }
              local_8 = (uint *)((int)local_8 + 1);
            } while (local_8 < (undefined1 *)pDVar25->count);
          }
          pFVar9 = this_00->field_1FB3;
          uVar35 = 0;
          dVar11 = pFVar9->count;
          this_00->field_1F73 = 0;
          this_00->field_1F7B = dVar11;
          if (pFVar9->count != 0) {
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              if (this_00->field_1EC6 ==
                  *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar35)) {
                this_00->field_1F73 = uVar35;
                break;
              }
              uVar35 = uVar35 + 1;
            } while (uVar35 < pFVar9->count);
          }
        }
      }
      pcVar12 = this_00->field_1A73;
      this_00->field_1F97 = *(undefined4 *)&local_c->field_0x24;
      this_00->field_1F9F = local_c->field_002C + 10;
      this_00->field_1F9B = *(int *)(local_c + 1) + *(int *)&local_c->field_0x28;
      iVar21 = pcVar12->field_00A0;
joined_r0x005a5b89:
      if (iVar21 != 0) {
        st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar12);
      }
      this_00->field_1F77 = *(undefined4 *)&pcVar12->field_0x8a;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,0x100ef,nullptr,nullptr,
                 &this_00->field_0x1f33,0);
      goto cf_common_exit_005A8CA7;
    }
    switch(SVar6) {
    case 0x6907:
      if (g_cursorClass_00802A30->field_0493 == CASE_5) break;
      local_c = (AnonShape_005A4350_59BACD18 *)(message->arg2).u32;
      this_00->field_1F43 = 0x6506;
      iVar21 = local_c->field_0008;
      this_00->field_1F63 = 0x698c;
      this_00->field_1F4B = iVar21;
      this_00->field_1FB3->count = 0;
      this_00->field_20BB = 0;
      pcVar39 = st::fn_006B0140(0x25bf,g_hINSTANCE_00807618);
      uVar35 = 0xffffffff;
      do {
        pcVar27 = pcVar39;
        if (uVar35 == 0) break;
        uVar35 = uVar35 - 1;
        pcVar27 = pcVar39 + 1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar27;
      } while (cVar2 != '\0');
      uVar35 = ~uVar35;
      pcVar39 = pcVar27 + -uVar35;
      pcVar27 = &this_00->field_0x1fb7;
      memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
      uVar32 = 0;
      st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
      this_00->field_20BB = 1;
      pcVar39 = st::fn_006B0140(0x25c0,g_hINSTANCE_00807618);
      uVar35 = 0xffffffff;
      do {
        pcVar27 = pcVar39;
        if (uVar35 == 0) break;
        uVar35 = uVar35 - 1;
        pcVar27 = pcVar39 + 1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar27;
      } while (cVar2 != '\0');
      uVar35 = ~uVar35;
      pcVar39 = pcVar27 + -uVar35;
      pcVar27 = &this_00->field_0x1fb7;
      memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
      uVar32 = 0;
      st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
      this_00->field_20BB = 2;
      pcVar39 = st::fn_006B0140(0x25c1,g_hINSTANCE_00807618);
      uVar35 = 0xffffffff;
      do {
        pcVar27 = pcVar39;
        if (uVar35 == 0) break;
        uVar35 = uVar35 - 1;
        pcVar27 = pcVar39 + 1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar27;
      } while (cVar2 != '\0');
      uVar35 = ~uVar35;
      pcVar39 = pcVar27 + -uVar35;
      pcVar27 = &this_00->field_0x1fb7;
      memmove(pcVar27, pcVar39, uVar35); /* compiler REP MOVS byte copy */
      uVar32 = 0;
      st::fn_006AE1C0((DArrayTy *)this_00->field_1FB3,&this_00->field_0x1fb7);
      pFVar9 = this_00->field_1FB3;
      this_00->field_1F7B = pFVar9->count;
      uVar35 = 0;
      this_00->field_1F73 = 0;
      if (pFVar9->count != 0) {
        do {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          if (DAT_00803144 == *(int *)(&pFVar9->data->field_0x104 + pFVar9->elementSize * uVar35)) {
            this_00->field_1F73 = uVar35;
            break;
          }
          uVar35 = uVar35 + 1;
        } while (uVar35 < pFVar9->count);
      }
      pcVar12 = this_00->field_1A73;
      this_00->field_1F97 = *(undefined4 *)&local_c->field_0x24;
      this_00->field_1F9F = local_c->field_002C + 10;
      this_00->field_1F9B = *(int *)(local_c + 1) + *(int *)&local_c->field_0x28;
      iVar21 = pcVar12->field_00A0;
      goto joined_r0x005a5b89;
    case MESS_SHARED_6900|MESS_SHARED_0008:
      if (g_cursorClass_00802A30->field_0493 == CASE_5) break;
      bVar44 = false;
      if (DAT_00803148 != 0) {
        if (DAT_00803148 < 0x10) {
          DAT_00803148 = 0;
        }
        else {
          DAT_00803148 = DAT_00803148 - 0xf;
        }
        bVar44 = true;
      }
      if ((!bVar44) ||
         (st::external_000000F7
                    ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf),
         pCVar37 = g_cursorClass_00802A30, g_cursorClass_00802A30 == nullptr)) break;
      iVar21 = g_cursorClass_00802A30->field_00C9;
      iVar46 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_5;
      pCVar37->field_0494 = 0xffff;
      st::fn_0040507E(pCVar37,CASE_0,iVar46,iVar21);
      iVar21 = pCVar37->field_00C9;
      iVar46 = pCVar37->field_00C5;
      goto cf_common_exit_005A52AA;
    case MESS_SHARED_6900|MESS_CURSORCLASSTY_0009:
      if ((g_cursorClass_00802A30->field_0493 == CASE_5) || (0xf422f < DAT_00803148)) break;
      DAT_00803148 = DAT_00803148 + 0xf;
      st::external_000000F7
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
      pCVar37 = g_cursorClass_00802A30;
      if (g_cursorClass_00802A30 == nullptr) break;
      iVar21 = g_cursorClass_00802A30->field_00C9;
      iVar46 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_5;
      pCVar37->field_0494 = 0xffff;
      st::fn_0040507E(pCVar37,CASE_0,iVar46,iVar21);
      iVar21 = pCVar37->field_00C9;
      iVar46 = pCVar37->field_00C5;
cf_common_exit_005A52AA:
      st::fn_0040241E(pCVar37,iVar46,iVar21);
      pCVar37->field_00D2 = 0;
      pCVar37->field_04DF = -1;
      break;
    case MESS_SHARED_6900|MESS_SYSTEMCLASSTY_000A:
      if ((g_cursorClass_00802A30->field_0493 == CASE_5) ||
         (pDVar25 = this_00->field_1AE8, pDVar25 == nullptr)) break;
      if (0 < (int)pDVar25->elementSize) {
        pcVar39 = *(char **)pDVar25->growCapacity;
      }
      iVar21 = -1;
      do {
        if (iVar21 == 0) break;
        iVar21 = iVar21 + -1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar39 + 1;
      } while (cVar2 != '\0');
      if (iVar21 == -2) break;
      if ((int)pDVar25->elementSize < 1) {
        pcVar39 = nullptr;
      }
      else {
        pcVar39 = *(char **)pDVar25->growCapacity;
      }
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
      bVar34 = (char)message->id - 0x13;
      local_c = (AnonShape_005A4350_59BACD18 *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar34));
      if ((this_00->field_1EE3 <= (uint)bVar34) || (this_00->field_1EDB == nullptr)) break;
      iVar46 = (uint)bVar34 * 0x24;
      iVar21 = -1;
      pcVar39 = (char *)(iVar46 + 0x14 + (int)this_00->field_1EDB);
      do {
        if (iVar21 == 0) break;
        iVar21 = iVar21 + -1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar39 + 1;
      } while (cVar2 != '\0');
      if (iVar21 == -2) break;
      if (this_00->field_1B0C != nullptr) {
        st::fn_006AB060(&this_00->field_1B0C);
      }
      uVar35 = 0xffffffff;
      pcVar39 = (char *)(iVar46 + 0x14 + (int)this_00->field_1EDB);
      do {
        if (uVar35 == 0) break;
        uVar35 = uVar35 - 1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar39 + 1;
      } while (cVar2 != '\0');
      pbVar41 = st::fn_006AAC70(~uVar35);
      this_00->field_1B0C = pbVar41;
      uVar35 = 0xffffffff;
      pcVar39 = (char *)(iVar46 + 0x14 + (int)this_00->field_1EDB);
      do {
        pcVar27 = pcVar39;
        if (uVar35 == 0) break;
        uVar35 = uVar35 - 1;
        pcVar27 = pcVar39 + 1;
        cVar2 = *pcVar39;
        pcVar39 = pcVar27;
      } while (cVar2 != '\0');
      uVar35 = ~uVar35;
      pbVar36 = (byte *)(pcVar27 + -uVar35);
      memmove(pbVar41, pbVar36, uVar35); /* compiler REP MOVS byte copy */
      uVar32 = 0;
      this_00->CloseButtons();
      this_00->field_1A61 = 10;
      this_00->field_1ED2 = 9;
      pSVar13 = this_00->field_1A5B;
      if (pSVar13->field_02E6 == nullptr) break;
      puVar23 = local_338;
      for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
        *puVar23 = 0xffffffff;
        puVar23 = puVar23 + 1;
      }
      *(undefined2 *)puVar23 = 0xffff;
      local_6c = 0;
      local_68 = 0;
      local_70 = 0x10101;
      local_64 = 0;
      st::fn_00404B51(pSVar13->field_02E6,(int)local_338);
      puVar23 = &local_70;
      goto cf_common_exit_005A7F3B;
    case MESS_PRIVIDERTY_693F:
      st::fn_00401EE2(this_00);
      break;
    case MESS_SHARED_6940:
      st::fn_004024D7(this_00);
      break;
    case MESS_FSGSTY_6941:
      st::fn_004036C0(this_00,0x6105,0,1);
      this_00->field_1A61 = 0;
      st::external_000000ED((CFsgsConnection *)&DAT_00802a90);
      this_00->CloseButtons();
      pMVar33 = this_00->field_1A5B->field_02E6;
      if (pMVar33 != nullptr) {
        st::fn_00401FA5(pMVar33,1,0,1);
      }
    }
    goto cf_common_exit_005A8CA7;
  }
  if (SVar6 == MESS_ID_MSGOK) {
    FVar3 = this_00->field_1A5F;
    if (FVar3 == CASE_3) {
      this_00->CloseButtons();
      this_00->field_1A61 = 4;
      if (this_00->field_1A5B->field_02E6 != nullptr) {
        local_dc = 0;
        local_d8 = 0;
        local_e0 = 0x101;
        local_d4 = 0;
        st::fn_00401A9B(this_00->field_1A5B->field_02E6,&local_e0);
      }
      goto cf_common_exit_005A8CA7;
    }
    if (FVar3 == CASE_7) {
      if ((g_cursorClass_00802A30 != nullptr) &&
         (g_cursorClass_00802A30->field_0493 == CASE_5)) goto cf_common_exit_005A8CA7;
      st::fn_004034F4();
      local_290.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_290;
      iVar21 = st::fn_0072D7F0(local_290.jumpBuffer,0);
      this_00 = local_20;
      if (iVar21 == 0) {
        st::fn_006B6150((uint)DAT_00807362);
        if ((int)this_00->field_1AE8->elementSize < 1) {
          uVar26 = 0;
        }
        else {
          uVar26 = *(undefined4 *)this_00->field_1AE8->growCapacity;
        }
        st::fn_006B69B0((int *)&g_int_00811764,(int *)&DAT_007cd6f0,0,uVar26,0x20);
        g_currentExceptionFrame = local_290.previous;
      }
      else {
        g_currentExceptionFrame = local_290.previous;
        iVar21 = st::fn_006AD4D0("E:\\__titans\\Start\\fsgs_obj.cpp",0xc08,0,iVar21,
                                    "%s","FSGSTy::GetMessage(MESS_ID_MSGOK, New Game)");
        if (iVar21 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
      if (g_int_00811764 == nullptr) {
        pMVar33 = this_00->field_1A5B->field_02E6;
        if (pMVar33 != nullptr) {
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
        pcVar27 = nullptr;
      }
      else {
        pcVar27 = *(char **)this_00->field_1AE8->growCapacity;
      }
      st::external_000000FD
                ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,0x17e0,pcVar27,pcVar39,
                 local_6b8);
      pCVar37 = g_cursorClass_00802A30;
      if (g_cursorClass_00802A30 == nullptr) goto cf_common_exit_005A8CA7;
      iVar21 = g_cursorClass_00802A30->field_00C9;
      iVar46 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_5;
      pCVar37->field_0494 = 0xffff;
      st::fn_0040507E(pCVar37,CASE_0,iVar46,iVar21);
      iVar21 = pCVar37->field_00C9;
      iVar46 = pCVar37->field_00C5;
      goto cf_common_exit_005A52AA;
    }
    if ((FVar3 != CASE_8) ||
       (((g_cursorClass_00802A30 != nullptr &&
         (g_cursorClass_00802A30->field_0493 == CASE_5)) ||
        (this_00->field_1EBE == nullptr)))) goto cf_common_exit_005A8CA7;
    if (g_cursorClass_00802A30 != nullptr) {
      g_cursorClass_00802A30->field_0493 = CASE_5;
      pCVar37->field_0494 = 0xffff;
      st::fn_0040507E(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
      st::fn_0040241E(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
      pCVar37->field_00D2 = 0;
      pCVar37->field_04DF = -1;
    }
    this_00->field_002D = 0x26;
    st::fn_006E6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
    pCVar37 = g_cursorClass_00802A30;
    pFVar8 = this_00->field_1EBE;
    if (pFVar8->count <= *(uint *)&this_00->field_0x31) goto cf_common_exit_005A8CA7;
    local_15 = '\x01';
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
    local_8 = (uint *)((int)&pFVar8->data->field_0000 +
                      pFVar8->elementSize * *(uint *)&this_00->field_0x31);
    if (local_8 == nullptr) goto cf_common_exit_005A8CA7;
    pbVar41 = (byte *)(local_8 + 0x13);
    iVar21 = -1;
    pcVar39 = (char *)pbVar41;
    do {
      if (iVar21 == 0) break;
      iVar21 = iVar21 + -1;
      cVar2 = *pcVar39;
      pcVar39 = pcVar39 + 1;
    } while (cVar2 != '\0');
    if (iVar21 != -2) {
      if ((int)this_00->field_1AEC->elementSize < 1) {
        pbVar36 = nullptr;
      }
      else {
        pbVar36 = *(byte **)this_00->field_1AEC->growCapacity;
      }
      do {
        bVar34 = *pbVar41;
        bVar44 = bVar34 < *pbVar36;
        if (bVar34 != *pbVar36) {
LAB_005a4eca:
          iVar21 = (1 - (uint)bVar44) - (uint)(bVar44 != 0);
          goto LAB_005a4ecf;
        }
        if (bVar34 == 0) break;
        bVar34 = pbVar41[1];
        bVar44 = bVar34 < pbVar36[1];
        if (bVar34 != pbVar36[1]) goto LAB_005a4eca;
        pbVar41 = pbVar41 + 2;
        pbVar36 = pbVar36 + 2;
      } while (bVar34 != 0);
      iVar21 = 0;
LAB_005a4ecf:
      if (iVar21 != 0) {
        local_15 = '\0';
        g_cursorClass_00802A30->field_0493 = CASE_1;
        pCVar37->field_0494 = 0xffff;
        st::fn_0040507E(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
        st::fn_0040241E(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
        pCVar37->field_00D2 = 0;
        pCVar37->field_04DF = -1;
        pMVar33 = this_00->field_1A5B->field_02E6;
        if (pMVar33 != nullptr) {
          st::fn_00403FA8(pMVar33,0x258b,'\0',nullptr,nullptr,
                             nullptr,0,0);
        }
      }
    }
    puVar24 = local_8;
    if (local_15 == '\0') goto cf_common_exit_005A8CA7;
    st::fn_004034F4();
    st::fn_006B61A0(local_22c,(byte *)(puVar24 + 0x17));
    local_3b4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_3b4;
    iVar21 = st::fn_0072D7F0(local_3b4.jumpBuffer,0);
    puVar24 = local_8;
    if (iVar21 == 0) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      st::fn_006B6A50
                ((int *)&g_int_00811764,(undefined4 *)&DAT_007cd6f0,
                 (in_addr)(((in_addr *)(local_8 + 4))->S_un).S_un_b,local_22c);
    }
    pCVar37 = g_cursorClass_00802A30;
    g_currentExceptionFrame = local_3b4.previous;
    if (g_cursorClass_00802A30 != nullptr) {
      iVar21 = g_cursorClass_00802A30->field_00C9;
      iVar46 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar37->field_0494 = 0xffff;
      st::fn_0040507E(pCVar37,CASE_0,iVar46,iVar21);
      st::fn_0040241E(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
      pCVar37->field_00D2 = 0;
      pCVar37->field_04DF = -1;
    }
    this_00 = local_20;
    if (g_int_00811764 == nullptr) {
      pMVar33 = local_20->field_1A5B->field_02E6;
      if (pMVar33 != nullptr) {
        st::fn_00403FA8(pMVar33,0x2595,'\0',nullptr,nullptr,nullptr
                           ,0,0);
      }
      goto cf_common_exit_005A8CA7;
    }
    st::external_000000F3((CFsgsConnection *)&DAT_00802a90,puVar24[1]);
    this_00 = local_20;
    DAT_0080877f = g_int_00811764[0xe];
    DAT_0080877e = 0;
    DAT_008087be = 0;
    local_20->field_1A61 = 0;
    DAT_008067a0 = 1;
    uVar35 = local_20->field_1EC2;
    if (uVar35 < 0x502) {
      if (uVar35 == 0x501) {
        DAT_00803400 = 5;
      }
      else if (uVar35 == 0x200) {
        DAT_00803400 = 0x14;
      }
      else {
        if (uVar35 != 0x400) goto LAB_005a50be;
        DAT_00803400 = 0x15;
      }
    }
    else if (uVar35 == 0x502) {
      DAT_00803400 = 0xc;
    }
    else {
LAB_005a50be:
      DAT_00803400 = 4;
    }
    st::fn_004036C0(local_20,0x6109,0,1);
    this_00->CloseButtons();
    pMVar33 = this_00->field_1A5B->field_02E6;
    if (pMVar33 != nullptr) {
      st::fn_00401FA5(pMVar33,1,0,1);
    }
    goto cf_common_exit_005A8CA7;
  }
  if (SVar6 < (MESS_FSGSTY_6150|MESS_ID_CREATE)) {
    if (SVar6 != MESS_FSGSTY_6151) {
      if (SVar6 < (MESS_STARTSYSTEMTY_6104|MESS_ID_CREATE)) {
        if (SVar6 == MESS_SHARED_6105) {
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = message->id;
          this_00->field_0051 = message->arg0;
          this_00->field_0055 = message->arg1;
          st::fn_00404DB8((MTaskTy *)this_00);
        }
        else {
          switch(SVar6) {
          case MESS_ID_NONE:
            st::fn_00404FC5(this_00);
            break;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          case MESS_ID_CREATE:
            st::fn_0040454D(this_00,*(byte *)((message->arg0).u32 + 0x14));
            break;
          case MESS_SHARED_0003:
            st::fn_00401721(this_00);
            break;
          case MESS_SHARED_0005:
            st::fn_00403B4D(this_00,'\0');
          }
        }
      }
      else {
        switch(SVar6) {
        case MESS_SHARED_6109:
        case MESS_SHARED_611F:
          st::fn_00405510(this_00->field_1A5B);
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = message->id;
          this_00->field_0051 = message->arg0;
          this_00->field_0055 = message->arg1;
          st::fn_00404DB8((MTaskTy *)this_00);
          break;
        case 0x614f:
          if (g_cursorClass_00802A30 != nullptr) {
            g_cursorClass_00802A30->field_0493 = CASE_1;
            pCVar37->field_0494 = 0xffff;
            st::fn_0040507E(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
            st::fn_0040241E(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
            pCVar37->field_00D2 = 0;
            pCVar37->field_04DF = -1;
          }
          pSVar13 = this_00->field_1A5B;
          pSVar40 = &local_19c;
          for (iVar21 = 8; iVar21 != 0; iVar21 = iVar21 + -1) {
            pSVar40->unknown_00 = 0;
            pSVar40 = (STMessage *)&pSVar40->unknown_04;
          }
          local_19c.unknown_08 = this_00->field_0008;
          local_19c.unknown_0c = 2;
          local_19c.id = MESS_FSGSTY_6941;
          pMVar33 = pSVar13->field_02E6;
          if (pMVar33 == nullptr) {
            this_00->st::fn_00401280(&local_19c);
          }
          else {
            st::fn_00403FA8(pMVar33,0x2593,'\0',&local_19c.unknown_00,nullptr,
                               nullptr,(message->arg0).i32,0x2599);
          }
          break;
        case MESS_FSGSTY_6150:
          if (this_00->field_1A5F == CASE_1) {
            if (g_cursorClass_00802A30 != nullptr) {
              g_cursorClass_00802A30->field_0493 = CASE_1;
              pCVar37->field_0494 = 0xffff;
              st::fn_0040507E(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
              st::fn_0040241E(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
              pCVar37->field_00D2 = 0;
              pCVar37->field_04DF = -1;
            }
            iVar21 = (message->arg0).i32;
            pSVar40 = &local_160;
            for (iVar46 = 8; iVar46 != 0; iVar46 = iVar46 + -1) {
              pSVar40->unknown_00 = 0;
              pSVar40 = (STMessage *)&pSVar40->unknown_04;
            }
            local_160.unknown_08 = this_00->field_0008;
            local_160.unknown_0c = 2;
            local_160.id = MESS_FSGSTY_6941;
            switch(iVar21) {
            case 1:
              UVar22 = 0x2580;
              break;
            case 2:
              UVar22 = 0x2581;
              break;
            case 3:
              UVar22 = 0x2582;
              break;
            case 4:
              UVar22 = 0x2583;
              break;
            default:
              UVar22 = 0x2584;
            }
            if ((UVar22 == 0) ||
               (pMVar33 = this_00->field_1A5B->field_02E6, pMVar33 == nullptr)) {
              this_00->st::fn_00401280(&local_160);
            }
            else if (UVar22 == 0x2584) {
              st::fn_00403FA8(pMVar33,0x2584,'\0',&local_160.unknown_00,nullptr,
                                 nullptr,iVar21,0x2599);
            }
            else {
              st::fn_00403FA8(pMVar33,UVar22,'\0',&local_160.unknown_00,nullptr,
                                 nullptr,0,0);
            }
          }
        }
      }
      goto cf_common_exit_005A8CA7;
    }
    if (this_00->field_1A5F != CASE_1) goto cf_common_exit_005A8CA7;
    st::external_00000109((CFsgsConnection *)&DAT_00802a90);
    if (((char)DAT_00807dd1 != '\x01') && ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000)) {
      puVar7 = this_00->field_1AC0;
      uVar35 = *(uint *)(puVar7 + 10);
      if (uVar35 == 0) {
        uVar35 = ((uint)puVar7[7] * *(int *)(puVar7 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar7 + 4);
      }
      puVar23 = (undefined4 *)st::fn_006B4FA0((int *)puVar7);
      for (uVar32 = uVar35 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
        *puVar23 = 0xffffffff;
        puVar23 = puVar23 + 1;
      }
      for (uVar35 = uVar35 & 3; uVar35 != 0; uVar35 = uVar35 - 1) {
        *(undefined1 *)puVar23 = 0xff;
        puVar23 = (undefined4 *)((int)puVar23 + 1);
      }
      st::fn_00710A90(this_00->field_1A73,(int)this_00->field_1AC0,0,0,0x16,0x1b8,0xf0);
      iVar49 = -1;
      iVar48 = -1;
      uVar35 = 2;
      iVar46 = -1;
      iVar21 = -1;
      puVar24 = (uint *)st::fn_006B0140(0x25b6,g_hINSTANCE_00807618);
      st::fn_00711B70(this_00->field_1A73,puVar24,iVar21,iVar46,uVar35,iVar48,iVar49);
      st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
      st::external_00000108((CFsgsConnection *)&DAT_00802a90,"st.inf");
      goto cf_common_exit_005A8CA7;
    }
    goto LAB_005a6d57;
  }
  if (MESS_WAITTY_6333 < SVar6) {
    if (SVar6 == MESS_SHARED_6334) {
      st::fn_004031D4
                ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1BB9,
                 (int)message,0);
    }
    else if (SVar6 == MESS_WAITTY_6335) {
      this_00->field_1C6A = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
      if (this_00->field_1C4E != 0xffffffff) {
        st::fn_006B3730
                  ((uint *)this_00->field_1C92,this_00->field_1C4E,this_00->field_1C52,
                   this_00->field_1C66,this_00->field_1C6A);
      }
    }
    goto cf_common_exit_005A8CA7;
  }
  if (SVar6 == MESS_WAITTY_6333) {
    st::fn_004031D4
              ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1B28,
               (int)message,0);
    goto cf_common_exit_005A8CA7;
  }
  switch(SVar6) {
  case MESS_FSGSTY_6150|MESS_ID_CREATE:
    if (this_00->field_1A5F != CASE_2) goto cf_common_exit_005A8CA7;
    if (g_cursorClass_00802A30 != nullptr) {
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar37->field_0494 = 0xffff;
      st::fn_0040507E(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
      st::fn_0040241E(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
      pCVar37->field_00D2 = 0;
      pCVar37->field_04DF = -1;
    }
    pSVar13 = this_00->field_1A5B;
    puVar23 = local_2c8;
    for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
      *puVar23 = 0x10001;
      puVar23 = puVar23 + 1;
    }
    *(undefined2 *)puVar23 = 1;
    pMVar33 = pSVar13->field_02E6;
    if (pMVar33 != nullptr) {
      st::fn_00404B51(pMVar33,(int)local_2c8);
    }
    switch((message->arg0).i32) {
    case 2:
      UVar22 = 0x258b;
      break;
    case 3:
      UVar22 = 0x258c;
      break;
    case 4:
      UVar22 = 0x258d;
      break;
    default:
      UVar22 = 0x2589;
      break;
    case 7:
      UVar22 = 0x25c2;
    }
    if ((UVar22 == 0) || (pMVar33 = this_00->field_1A5B->field_02E6, pMVar33 == nullptr))
    goto cf_common_exit_005A8CA7;
    if (UVar22 == 0x2589) {
      st::fn_00403FA8(pMVar33,0x2589,'\0',nullptr,nullptr,nullptr,
                         (message->arg0).i32,0x2599);
      goto cf_common_exit_005A8CA7;
    }
    break;
  case MESS_FSGSTY_6150|MESS_SHARED_0003:
    if ((this_00->field_1A5F == CASE_2) || (this_00->field_1A5F == CASE_4)) {
      if (g_cursorClass_00802A30 != nullptr) {
        g_cursorClass_00802A30->field_0493 = CASE_1;
        pCVar37->field_0494 = 0xffff;
        st::fn_0040507E(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
        st::fn_0040241E(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
        pCVar37->field_00D2 = 0;
        pCVar37->field_04DF = -1;
      }
      local_100 = "Profile\\Age";
      local_fc = "Profile\\Sex";
      local_f8 = "Profile\\Location";
      local_f4 = "Profile\\Description";
      if (this_00->field_1A5F == CASE_2) {
        st::external_000000F6((CFsgsConnection *)&DAT_00802a90,&DAT_00807e1d,4,&local_100);
      }
      else {
        local_11c = "Profile\\Sex";
        local_118 = "Profile\\Location";
        local_114 = "Profile\\Description";
        local_124 = DAT_008030d4;
        local_120 = "Profile\\Age";
        local_130 = &DAT_00802ad4;
        local_12c = &DAT_00802cd4;
        local_128 = &DAT_00802ed4;
        st::external_000000F8((CFsgsConnection *)&DAT_00802a90,4,&local_120,&local_130);
      }
      st::fn_004017A3(&DAT_00802a90,this_00->field_1A67);
      if ((DArrayTy *)this_00->field_1E9E != nullptr) {
        st::fn_006B5570((DArrayTy *)this_00->field_1E9E);
      }
      pDVar25 = st::fn_006B54F0(nullptr,100,100);
      this_00->field_1E9E = &pDVar25->flags;
      this_00->CloseButtons();
      this_00->field_1A61 = 6;
      if (this_00->field_1A5B->field_02E6 != nullptr) {
        local_ac = 0;
        local_a8 = 0;
        local_b0 = 0x10101;
        local_a4 = 0;
        st::fn_00401A9B(this_00->field_1A5B->field_02E6,&local_b0);
      }
    }
    goto cf_common_exit_005A8CA7;
  case 0x6154:
    if (this_00->field_1A5F == CASE_5) {
      if (g_cursorClass_00802A30 != nullptr) {
        g_cursorClass_00802A30->field_0493 = CASE_1;
        pCVar37->field_0494 = 0xffff;
        st::fn_0040507E(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
        st::fn_0040241E(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
        pCVar37->field_00D2 = 0;
        pCVar37->field_04DF = -1;
      }
      uVar35 = (message->arg0).u32;
      if (uVar35 == 0) {
        this_00->field_002D = 0x6952;
        this_00->st::fn_00401280((STMessage *)&this_00->field_0x1d);
      }
      else if ((uVar35 != 0) && (uVar35 < 3)) {
        puVar23 = local_300;
        for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
          *puVar23 = 0x10001;
          puVar23 = puVar23 + 1;
        }
        pSVar13 = this_00->field_1A5B;
        *(undefined2 *)puVar23 = 1;
        pMVar33 = pSVar13->field_02E6;
        if (pMVar33 != nullptr) {
          st::fn_00404B51(pMVar33,(int)local_300);
        }
        pMVar33 = this_00->field_1A5B->field_02E6;
        if (pMVar33 != nullptr) {
          st::fn_00403FA8(pMVar33,(-(uint)((message->arg0).u32 != 1) & 10) + 0x258e,'\0',
                             nullptr,nullptr,nullptr,0,0);
        }
      }
    }
    goto cf_common_exit_005A8CA7;
  case MESS_FSGSTY_6150|MESS_SHARED_0005:
    if (this_00->field_1A5F != CASE_4) goto cf_common_exit_005A8CA7;
    if (g_cursorClass_00802A30 != nullptr) {
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar37->field_0494 = 0xffff;
      st::fn_0040507E(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
      st::fn_0040241E(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
      pCVar37->field_00D2 = 0;
      pCVar37->field_04DF = -1;
    }
    if ((message->arg0).u32 == 0) goto LAB_005a67e1;
    if (6 < (message->arg0).u32) goto cf_common_exit_005A8CA7;
    puVar23 = local_354;
    for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
      *puVar23 = 0x10001;
      puVar23 = puVar23 + 1;
    }
    *(undefined2 *)puVar23 = 1;
    pMVar33 = this_00->field_1A5B->field_02E6;
    if (pMVar33 != nullptr) {
      st::fn_00404B51(pMVar33,(int)local_354);
    }
    pMVar33 = this_00->field_1A5B->field_02E6;
    if (pMVar33 == nullptr) goto cf_common_exit_005A8CA7;
    switch((message->arg0).u32) {
    case 2:
      UVar22 = 0x2597;
      break;
    case 3:
      UVar22 = 0x2596;
      break;
    case 4:
      UVar22 = 0x25c3;
      break;
    case 5:
      UVar22 = 0x25c4;
      break;
    case 6:
      UVar22 = 0x25c5;
      break;
    default:
      UVar22 = 0x258f;
    }
    break;
  case MESS_FSGSTY_6156:
    if (this_00->field_1A5F != CASE_6) goto cf_common_exit_005A8CA7;
    if (g_cursorClass_00802A30 != nullptr) {
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar37->field_0494 = 0xffff;
      st::fn_0040507E(pCVar37,CASE_0,pCVar37->field_00C5,pCVar37->field_00C9);
      st::fn_0040241E(pCVar37,pCVar37->field_00C5,pCVar37->field_00C9);
      pCVar37->field_00D2 = 0;
      pCVar37->field_04DF = -1;
    }
    UVar22 = 0;
    if ((message->arg0).u32 == 0xd) {
      UVar22 = 0x2590;
    }
    else if ((message->arg0).u32 == 0xf) {
      UVar22 = 0x2591;
    }
    if ((UVar22 == 0) || (pMVar33 = this_00->field_1A5B->field_02E6, pMVar33 == nullptr))
    goto cf_common_exit_005A8CA7;
    break;
  default:
    goto cf_common_exit_005A8CA7;
  }
  st::fn_00403FA8(pMVar33,UVar22,'\0',nullptr,nullptr,nullptr,0,0);
cf_common_exit_005A8CA7:
  g_currentExceptionFrame = local_21c.previous;
  iVar21 = st::fn_00401280((MMObjTy *)this_00,message);
  return iVar21;
}

