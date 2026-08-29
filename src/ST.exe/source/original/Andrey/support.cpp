#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/support.cpp

// 005403C0 PutDDX
#line 4 "decomp/ST.exe/functions/005403C0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\support.cpp
   Diagnostic line evidence: 20 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=31, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl st::fn_005403C0(int param_1,int param_2,char param_3,BITMAPINFO *param_4)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  if ((g_dDXContext_0080759C != nullptr) && (param_4 != nullptr)) {
    local_48.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_48;
    errorCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
    if (errorCode == 0) {
      if (param_3 == '\x01') {
        st::fn_006B4640(g_dDXContext_0080759C,param_1,param_2,param_4,nullptr);
      }
      else if (param_3 == '\x06') {
        st::fn_006B82E0
                  (g_dDXContext_0080759C,param_1,param_2,reinterpret_cast<byte *>(param_4),0,0,
                   (param_4->bmiHeader).biWidth,(byte *)(param_4->bmiHeader).biHeight);
        g_currentExceptionFrame = local_48.previous;
        return;
      }
      g_currentExceptionFrame = local_48.previous;
      return;
    }
    g_currentExceptionFrame = local_48.previous;
    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\support.cpp"),0x14,0,errorCode,
                               st::mutable_c_string("%s"),"PutDDX");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\support.cpp"),0x14);
  }
  return;
}

// 005404F0 TransPutDDX
#line 4 "decomp/ST.exe/functions/005404F0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\support.cpp
   Diagnostic line evidence: 38 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_005404F0(int param_1,int param_2,char param_3,BITMAPINFO *param_4,uint param_5)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  if ((g_dDXContext_0080759C != nullptr) && (param_4 != nullptr)) {
    local_48.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_48;
    errorCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
    if (errorCode == 0) {
      if (param_3 == '\x01') {
        st::fn_006B48A0(reinterpret_cast<int *>(g_dDXContext_0080759C),param_1,param_2,param_4,nullptr,param_5);
      }
      else if (param_3 == '\x06') {
        st::fn_006B82E0
                  (g_dDXContext_0080759C,param_1,param_2,reinterpret_cast<byte *>(param_4),0,0,
                   (param_4->bmiHeader).biWidth,(byte *)(param_4->bmiHeader).biHeight);
        g_currentExceptionFrame = local_48.previous;
        return;
      }
      g_currentExceptionFrame = local_48.previous;
      return;
    }
    g_currentExceptionFrame = local_48.previous;
    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\support.cpp"),0x26,0,errorCode,
                               st::mutable_c_string("%s"),"TransPutDDX");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\support.cpp"),0x26);
  }
  return;
}

// 00540620 PutDDXClip
#line 4 "decomp/ST.exe/functions/00540620/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\support.cpp
   Diagnostic line evidence: 58 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=43, used=0), and
   decompilation contains no value return */

void __cdecl
st::fn_00540620(int param_1,int param_2,int param_3,int param_4,uint param_5,byte *param_6,char param_7,
          BITMAPINFO *param_8)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  if ((g_dDXContext_0080759C != nullptr) && (param_8 != nullptr)) {
    local_48.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_48;
    errorCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
    if (errorCode == 0) {
      if (param_7 == '\x01') {
        st::fn_006B42D0
                  (g_dDXContext_0080759C,param_1,param_2,param_8,nullptr,param_3,param_4,param_5
                   ,(DWORD)param_6);
      }
      else if (param_7 == '\x06') {
        st::fn_006B82E0
                  (g_dDXContext_0080759C,param_1,param_2,reinterpret_cast<byte *>(param_8),param_3,param_4,param_5,
                   param_6);
        g_currentExceptionFrame = local_48.previous;
        return;
      }
      g_currentExceptionFrame = local_48.previous;
      return;
    }
    g_currentExceptionFrame = local_48.previous;
    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\support.cpp"),0x3a,0,errorCode,
                               st::mutable_c_string("%s"),"PutDDXClip");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\support.cpp"),0x3a);
  }
  return;
}

// 00540760 DibPut
#line 4 "decomp/ST.exe/functions/00540760/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\support.cpp
   Diagnostic line evidence: 79 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl
st::fn_00540760(RecoveredSourceFamily_dibcopy *param_1,int param_2,int param_3,char param_4,
      RecoveredRecordView_006B84D0_87AF9D9B *param_5)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  if ((param_1 != nullptr) &&
     (param_5 != nullptr)) {
    local_48.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_48;

    errorCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
    if (errorCode == 0) {
      if (param_4 == '\x01') {

        st::fn_006B55F0
                  (param_1,0,param_2,param_3,param_5,0,0,0,*(int *)&param_5->field_0x4,
                   *(int *)&param_5->field_0x8);
      }
      else if (param_4 == '\x06') {
        st::fn_006B84D0(param_1,0,param_2,param_3,param_5);
        g_currentExceptionFrame = local_48.previous;
        return;
      }
      g_currentExceptionFrame = local_48.previous;
      return;
    }
    g_currentExceptionFrame = local_48.previous;

    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\support.cpp"),0x4f,0,errorCode,
                               st::mutable_c_string("%s"),"DibPut");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\support.cpp"),0x4f);
  }
  return;
}

// 00540890 StartServTy::WrTextDDX
#line 4 "decomp/ST.exe/functions/00540890/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\support.cpp
   StartServTy::WrTextDDX

   [STPrototypeApplier] Propagated parameter 9.
   Evidence: 00540890 parameter used as this of ccFntTy::EraseSufr @ 005409EC

   [STPrototypeApplier] Propagated parameter 10.
   Evidence: 00540890 -> 00711B70 @ 00540974 | 005B3D60 -> 00540890 @ 005B4342; zeroed full register
   at 005B427F

   [STPrototypeRepairApplier] Propagated parameter 6.
   Evidence: 00540890 -> 00711B70 @ 00540974 | 00590580 -> 00540890 @ 00590658; return of
   LoadResourceString | 00591940 -> 00540890 @ 005919EB; return of LoadResourceString | 00594D40 ->
   00540890 @ 00594DF7; return of LoadResourceString | 00594EB0 -> 00540890 @ 00594F9E; return of
   LoadResourceString | 00594EB0 -> 00540890 @ 00595062; return of LoadResourceString | 00594EB0 ->
   00540890 @ 005950C4; return of LoadResourceString | 00594EB0 -> 00540890 @ 00595127; return of
   LoadResourceString | 005952B0 -> 00540890 @ 0059534E; return of LoadResourceString | 005952B0 ->
   00540890 @ 005953AF; return of LoadResourceString | 005952B0 -> 00540890 @ 00595410; return of
   LoadResourceString | 005952B0 -> 00540890 @ 00595481; return of LoadResourceString | 005956C0 ->
   00540890 @ 00595787; return of LoadResourceString | 005956C0 -> 00540890 @ 005957EB; return of
   LoadResourceString | 005956C0 -> 00540890 @ 00595848; return of LoadResourceString | 005956C0 ->
   00540890 @ 005958A8; return of LoadResourceString | 005956C0 -> 00540890 @ 00595905; return of
   LoadResourceString | 005956C0 -> 00540890 @ 00595962; return of LoadResourceString | 005956C0 ->
   00540890 @ 005959C6; return of LoadResourceString | 005956C0 -> 00540890 @ 00595A0A; return of
   LoadResourceString | 005956C0 -> 00540890 @ 00595A94; return of LoadResourceString | 005956C0 ->
   00540890 @ 00595BC2; return of LoadResourceString | 005956C0 -> 00540890 @ 00595C1B; return of
   LoadResourceString | 005B3160 -> 00540890 @ 005B320B; return of LoadResourceString | 005B3160 ->
   00540890 @ 005B324A; return of LoadResourceString | 005B3D60 -> 00540890 @ 005B40D6; return of
   LoadResourceString | 005B3D60 -> 00540890 @ 005B4342; return of LoadResourceString | 005B9860 ->
   00540890 @ 005B993F; return of LoadResourceString | 005C4E20 -> 00540890 @ 005C5027; return of
   LoadResourceString | 005E79B0 -> 00540890 @ 005E7B20; return of LoadResourceString */

void __thiscall
st::fn_00540890
          (StartServTy *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          char *resourceString,uint param_7,uint param_8,ccFntTy *param_9,uint param_10)

{
  int iVar2;
  InternalExceptionFrame local_50;
  ccFntTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;

  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_4 < 1) {

      iVar2 = st::fn_00711370(param_9,reinterpret_cast<uint *>(resourceString));
      param_4 = iVar2 + (((int)param_7 < 1) - 1 & param_7);
    }
    local_8 = param_4;
    if (param_5 < 1) {

      iVar2 = st::fn_007113E0(param_9,reinterpret_cast<uint *>(resourceString));
      param_5 = iVar2 + (((int)param_8 < 1) - 1 & param_8);
    }
    if (param_1 == 0) {

      local_c = STPointerBoundaryCast<ccFntTy *>(st::fn_00710BA0(param_9,0,0,0,0,local_8,param_5,1));
    }
    else {
      /* ST_CALLSITE[00540929]: CALL 0x006b55f0; direct=006B55F0 Library::DKW::WGR::FUN_006b55f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__stdcall;pointer:/ccFntTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredSourceFamily_dibcopy;/int;/int;/int;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;/int;/int;/int;/int;/int */
      local_c = st::pointer_boundary_cast<ccFntTy *>(st::fn_006B55F0
                          (nullptr,0,0,0,
                           (RecoveredRecordView_006B84D0_87AF9D9B *)param_1,0,param_2,param_3,
                           local_8,param_5));

      st::fn_00710A90(param_9,(int)local_c,0,0,0,0,0);
    }

    st::fn_00711B70(param_9,resourceString,param_7,param_8,param_10,-1,-1);
    st::fn_006B5F80(reinterpret_cast<int *>(g_ddxContext_008075A8),param_2,param_3,local_8,param_5);
    /* ST_CALLSITE[005409A1]: CALL 0x00405ed4; direct=00405ED4 TransPutDDX */
    st::fn_00405ED4(param_2,param_3,'\x01',reinterpret_cast<BITMAPINFO *>(local_c),-(uint)(param_1 != 0));

    st::fn_00710F00(param_9);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\support.cpp"),0x75,0,iVar2,st::mutable_c_string("%s"),
                             "StartServTy::WrTextDDX");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }

  st::fn_00710F00(param_9);
  return;
}

// 00540A60 StartServTy::WrSarrDDX
#line 4 "decomp/ST.exe/functions/00540A60/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\support.cpp
   StartServTy::WrSarrDDX

   [STPrototypeApplier] Propagated parameter 9.
   Evidence: 00540A60 parameter used as this of ccFntTy::EraseSufr @ 00540BC7 */

void __thiscall
st::fn_00540A60
          (StartServTy *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6
          ,uint param_7,uint param_8,ccFntTy *param_9,undefined4 param_10)

{
  int iVar2;
  InternalExceptionFrame local_50;
  ccFntTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;

  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_4 < 1) {

      iVar2 = st::fn_00711670(param_9,(AnonShape_00711670_5F8DCCF2 *)param_6,0,-1);
      param_4 = iVar2 + (((int)param_7 < 1) - 1 & param_7);
    }
    local_8 = param_4;
    if (param_5 < 1) {

      iVar2 = st::fn_007115E0(param_9,(AnonShape_007115E0_FC3147FF *)param_6,0,-1);
      param_5 = iVar2 + (((int)param_8 < 1) - 1 & param_8);
    }
    if (param_1 == 0) {

      local_c = STPointerBoundaryCast<ccFntTy *>(st::fn_00710BA0(param_9,0,0,0,0,local_8,param_5,1));
    }
    else {
      /* ST_CALLSITE[00540B01]: CALL 0x006b55f0; direct=006B55F0 Library::DKW::WGR::FUN_006b55f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__stdcall;pointer:/ccFntTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredSourceFamily_dibcopy;/int;/int;/int;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;/int;/int;/int;/int;/int */
      local_c = st::pointer_boundary_cast<ccFntTy *>(st::fn_006B55F0
                          (nullptr,0,0,0,
                           (RecoveredRecordView_006B84D0_87AF9D9B *)param_1,0,param_2,param_3,
                           local_8,param_5));

      st::fn_00710A90(param_9,(int)local_c,0,0,0,0,0);
    }

    st::fn_00711F70(param_9,param_6,0,-1,param_7,param_8,param_10);
    st::fn_006B5F80(reinterpret_cast<int *>(g_ddxContext_008075A8),param_2,param_3,local_8,param_5);
    /* ST_CALLSITE[00540B79]: CALL 0x00405ed4; direct=00405ED4 TransPutDDX */
    st::fn_00405ED4(param_2,param_3,'\x01',reinterpret_cast<BITMAPINFO *>(local_c),-(uint)(param_1 != 0));

    st::fn_00710F00(param_9);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\support.cpp"),0x95,0,iVar2,st::mutable_c_string("%s"),
                             "StartServTy::WrSarrDDX");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }

  st::fn_00710F00(param_9);
  return;
}

// 00540DC0 SetAccelerator
#line 4 "decomp/ST.exe/functions/00540DC0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\support.cpp
   Diagnostic line evidence: 231 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0059DB20 -> 00540DC0 @ 0059E089; zeroed full register at 0059DFE2 | 0059DB20 ->
   00540DC0 @ 0059E0C6; zeroed full register at 0059DFE2

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 0059DB20 -> 00540DC0 @ 0059E089; zeroed full register at 0059DFE2 | 0059DB20 ->
   00540DC0 @ 0059E0C6; zeroed full register at 0059DFE2

   [STPrototypeApplier] Propagated parameter 8.
   Evidence: 0059DB20 -> 00540DC0 @ 0059E089; zeroed full register at 0059DFE2 | 0059DB20 ->
   00540DC0 @ 0059E0C6; zeroed full register at 0059DFE2

   [STPrototypeApplier] Propagated parameter 9.
   Evidence: 0059DB20 -> 00540DC0 @ 0059E089; zeroed full register at 0059DFE2 | 0059DB20 ->
   00540DC0 @ 0059E0C6; zeroed full register at 0059DFE2

   [STPrototypeApplier] Propagated parameter 10.
   Evidence: 0059DB20 -> 00540DC0 @ 0059E089; zeroed full register at 0059DFE2 | 0059DB20 ->
   00540DC0 @ 0059E0C6; zeroed full register at 0059DFE2

   [STPrototypeApplier] Propagated parameter 11.
   Evidence: 0059DB20 -> 00540DC0 @ 0059E089; zeroed full register at 0059DFE2 | 0059DB20 ->
   00540DC0 @ 0059E0C6; zeroed full register at 0059DFE2 */

void __cdecl
st::fn_00540DC0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
              undefined4 param_6,uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,
              uint param_12)

{
  int iVar2;
  uint index;
  int iVar3;
  int iVar4;
  uint *puVar5;
  RecoveredRecord_006E3DB0_0F66DDCF *pRVar6;
  uint *puVar7;
  bool bVar8;
  uint local_100 [19];
  InternalExceptionFrame local_b4;
  RecoveredRecord_006E3DB0_0F66DDCF local_70;
  int local_60;
  uint *local_5c;
  uint local_50 [5];
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;

  local_b4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b4;

  iVar2 = st::fn_0072D7F0(local_b4.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_b4.previous;

    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\support.cpp"),0xe7,0,iVar2,st::mutable_c_string("%s"),
                               "SetAccelerator");
    if (iVar3 == 0) {
      st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\support.cpp"),0xe7);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  memset(local_50, 0, 0x4c); /* compiler bulk-zero initialization */
  iVar4 = 0;
  local_3c = param_2;
  local_1c = param_2;
  local_38 = param_3;
  local_18 = param_3;
  local_14 = param_8;
  local_34 = param_4;
  local_10 = param_10;
  local_50[0] = param_5 | 8;
  local_30 = param_9;
  local_50[2] = param_7;
  local_2c = param_11;
  pRVar6 = &local_70;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pRVar6 = 0;
    pRVar6 = reinterpret_cast<RecoveredRecord_006E3DB0_0F66DDCF *>(reinterpret_cast<byte *>(pRVar6) + 0x4);
  }
  local_c = param_12;
  local_5c = local_50;
  local_50[1] = param_6;
  local_60 = 0x11 - (uint)(param_1 != 0);
  local_70.field_0008 = 1;
  local_70.field_000C = 3;

  st::fn_006E3DB0(reinterpret_cast<AppClassTy *>(&DAT_00807620),&local_70);
  if (param_1 != 0) {
    if (g_array_008026F0 == nullptr) {
      g_array_008026F0 = st::fn_006AE290(nullptr,10,0x4c,10);
    }

    st::fn_006AE1C0(g_array_008026F0,local_50);
    g_currentExceptionFrame = local_b4.previous;
    return;
  }
  if (g_array_008026F0 != nullptr) {
    g_array_008026F0->iteratorIndex = 0;

    index = st::fn_006B1190(g_array_008026F0,reinterpret_cast<byte *>(local_100));
    if (-1 < (int)index) {
      do {
        iVar4 = 0x13;
        bVar8 = true;
        puVar5 = local_100;
        puVar7 = local_50;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar8 = *puVar5 == *puVar7;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        } while (bVar8);
        if (bVar8) {

          st::fn_006B0C70(g_array_008026F0,index);
          if (g_array_008026F0->count != 0) {
            g_currentExceptionFrame = local_b4.previous;
            return;
          }
          st::fn_006AE110(g_array_008026F0);
          g_array_008026F0 = nullptr;
          g_currentExceptionFrame = local_b4.previous;
          return;
        }

        index = st::fn_006B1190(g_array_008026F0,reinterpret_cast<byte *>(local_100));
        if ((int)index < 0) {
          g_currentExceptionFrame = local_b4.previous;
          return;
        }
      } while( true );
    }
  }
  g_currentExceptionFrame = local_b4.previous;
  return;
}

// 00541030 DelAllAccelerators
#line 4 "decomp/ST.exe/functions/00541030/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\support.cpp
   Diagnostic line evidence: 253 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void st::fn_00541030(void)

{
  int iVar3;
  int local_EAX_91;
  int iVar2;
  int iVar4;
  byte *pbVar5;
  RecoveredRecord_006E3DB0_0F66DDCF *pRVar6;
  byte local_b4 [76];
  InternalExceptionFrame local_68;
  RecoveredRecord_006E3DB0_0F66DDCF local_24;
  uint local_14;
  byte *local_10;

  pbVar5 = local_b4;
  for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5 = pbVar5 + 4;
  }
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;

  iVar3 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  if (iVar3 == 0) {
    if (g_array_008026F0 != nullptr) {
      g_array_008026F0->iteratorIndex = 0;

      local_EAX_91 = st::fn_006B1190(g_array_008026F0,local_b4);
      while (-1 < local_EAX_91) {
        pRVar6 = &local_24;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pRVar6 = 0;
          pRVar6 = reinterpret_cast<RecoveredRecord_006E3DB0_0F66DDCF *>(reinterpret_cast<byte *>(pRVar6) + 0x4);
        }
        local_10 = local_b4;
        local_24.field_0008 = 1;
        local_24.field_000C = 3;
        local_14 = 0x11;

        st::fn_006E3DB0(reinterpret_cast<AppClassTy *>(&DAT_00807620),&local_24);

        local_EAX_91 = st::fn_006B1190(g_array_008026F0,local_b4);
      }
      st::fn_006AE110(g_array_008026F0);
      g_array_008026F0 = nullptr;
    }
    g_currentExceptionFrame = local_68.previous;
    return;
  }
  g_currentExceptionFrame = local_68.previous;

  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\support.cpp"),0xfd,0,iVar3,st::mutable_c_string("%s"),
                             "DelAllAccelerators");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\support.cpp"),0xfd);
  return;
}
