#include "../../pseudocode_runtime.h"


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
StartServTy::WrTextDDX
          (StartServTy *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          char *resourceString,uint param_7,uint param_8,ccFntTy *param_9,uint param_10)

{
  int iVar2;
  InternalExceptionFrame local_50;
  BITMAPINFO *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_4 < 1) {
      iVar2 = FUN_00711370(param_9,(uint *)resourceString);
      param_4 = iVar2 + (((int)param_7 < 1) - 1 & param_7);
    }
    local_8 = param_4;
    if (param_5 < 1) {
      iVar2 = FUN_007113e0(param_9,(uint *)resourceString);
      param_5 = iVar2 + (((int)param_8 < 1) - 1 & param_8);
    }
    if (param_1 == 0) {
      local_c = (BITMAPINFO *)ccFntTy::CreateSurf(param_9,0,0,0,0,local_8,param_5,1);
    }
    else {
      local_c = (BITMAPINFO *)
                Library::DKW::WGR::FUN_006b55f0
                          (nullptr,0,0,0,(byte *)param_1,0,param_2,
                           param_3,local_8,param_5);
      ccFntTy::SetSurf(param_9,(int)local_c,0,0,0,0,0);
    }
    ccFntTy::WrTxt(param_9,resourceString,param_7,param_8,param_10,-1,-1);
    FUN_006b5f80((int *)g_ddxContext_008075A8,param_2,param_3,local_8,param_5);
    /* ST_CALLSITE[005409A1]: CALL 0x00405ed4; direct=00405ED4 TransPutDDX */
    TransPutDDX(param_2,param_3,'\x01',local_c,-(uint)(param_1 != 0));
    ccFntTy::EraseSufr(param_9);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\Andrey\\support.cpp",0x75,0,iVar2,"%s",
                             "StartServTy::WrTextDDX");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  ccFntTy::EraseSufr(param_9);
  return;
}

