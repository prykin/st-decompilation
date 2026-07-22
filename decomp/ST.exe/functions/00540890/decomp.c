#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\support.cpp
   StartServTy::WrTextDDX

   [STPrototypeApplier] Propagated parameter 9.
   Evidence: 00540890 parameter used as this of ccFntTy::EraseSufr @ 005409EC

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 00540890 -> 00711370 @ 005408D0 | 00540890 -> 007113E0 @ 005408F4 | 00540890 ->
   00711B70 @ 00540974 | 00590580 -> 00540890 @ 00590658 | 00591940 -> 00540890 @ 005919EB |
   00594D40 -> 00540890 @ 00594DF7 | 00594EB0 -> 00540890 @ 00594F9E | 00594EB0 -> 00540890 @
   00595062 | 00594EB0 -> 00540890 @ 005950C4 | 00594EB0 -> 00540890 @ 00595127 | 005952B0 ->
   00540890 @ 0059534E | 005952B0 -> 00540890 @ 005953AF | 005952B0 -> 00540890 @ 00595410 |
   005952B0 -> 00540890 @ 00595481 | 005956C0 -> 00540890 @ 00595787 | 005956C0 -> 00540890 @
   005957EB | 005956C0 -> 00540890 @ 00595848 | 005956C0 -> 00540890 @ 005958A8 | 005956C0 ->
   00540890 @ 00595905 | 005956C0 -> 00540890 @ 00595962 | 005956C0 -> 00540890 @ 005959C6 |
   005956C0 -> 00540890 @ 00595A0A | 005956C0 -> 00540890 @ 00595A94 | 005956C0 -> 00540890 @
   00595BC2 | 005956C0 -> 00540890 @ 00595C1B | 005B3160 -> 00540890 @ 005B320B | 005B3160 ->
   00540890 @ 005B324A | 005B3D60 -> 00540890 @ 005B40D6 | 005B3D60 -> 00540890 @ 005B4342 |
   005B9860 -> 00540890 @ 005B993F | 005C4E20 -> 00540890 @ 005C5027 | 005E79B0 -> 00540890 @
   005E7B20 */

void __thiscall
StartServTy::WrTextDDX
          (StartServTy *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          uint *resourceString,uint param_7,uint param_8,ccFntTy *param_9,uint param_10)

{
  code *pcVar1;
  int iVar2;
  InternalExceptionFrame local_50;
  BITMAPINFO *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_4 < 1) {
      iVar2 = FUN_00711370(param_9,resourceString);
      param_4 = iVar2 + (((int)param_7 < 1) - 1 & param_7);
    }
    local_8 = param_4;
    if (param_5 < 1) {
      iVar2 = FUN_007113e0(param_9,resourceString);
      param_5 = iVar2 + (((int)param_8 < 1) - 1 & param_8);
    }
    if (param_1 == 0) {
      local_c = (BITMAPINFO *)ccFntTy::CreateSurf(param_9,0,0,0,0,local_8,param_5,1);
    }
    else {
      local_c = (BITMAPINFO *)
                Library::DKW::WGR::FUN_006b55f0
                          ((AnonShape_006B5B10_E0D06CF1 *)0x0,0,0,0,(byte *)param_1,0,param_2,
                           param_3,local_8,param_5);
      ccFntTy::SetSurf(param_9,(int)local_c,0,0,0,0,0);
    }
    ccFntTy::WrTxt(param_9,resourceString,param_7,param_8,param_10,-1,-1);
    FUN_006b5f80((int *)PTR_008075a8,param_2,param_3,local_8,param_5);
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

