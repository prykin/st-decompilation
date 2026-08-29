#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::CreateCtrls

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall PrividerTy::CreateCtrls(PrividerTy *this,char param_1)

{
  byte *puVar1;
  uint uVar2;
  PrividerTy *this_00;
  int iVar4;
  int iVar3;
  int iVar5;
  uint *puVar6;
  HDC__ **ppHVar7;
  HDC__ *local_dd0 [8];
  DArrayTy *local_db0;
  uint local_d84;
  uint local_d80;
  uint local_d7c;
  uint local_544 [7];
  uint local_528;
  uint local_51c;
  uint local_518;
  uint local_514;
  uint local_4fc;
  uint local_4f8;
  uint local_4f4;
  uint local_4dc;
  uint local_4d8;
  uint local_4d4;
  uint local_4bc;
  uint local_4b8;
  uint local_4b4;
  uint local_418;
  uint local_414;
  uint local_410;
  uint local_40c;
  uint local_408;
  uint local_404;
  uint local_400;
  uint local_3b4;
  uint local_3b0;
  uint local_3ac;
  uint local_304;
  uint local_300;
  uint local_298;
  uint local_294;
  uint local_290;
  uint local_28c;
  uint local_288;
  uint local_284;
  uint local_280;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_184;
  uint local_180;
  uint local_118;
  uint local_114;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_74;
  InternalExceptionFrame local_70;
  uint local_2c;
  ushort local_28;
  ushort local_22;
  ushort local_20;
  ushort local_1e;
  PrividerTy *local_10;
  uint local_c;
  char local_5;

  puVar6 = local_544;
  local_10 = this;
  for (iVar5 = 0x135; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  ppHVar7 = local_dd0;
  for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppHVar7 = nullptr;
    ppHVar7 = ppHVar7 + 1;
  }
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;

  iVar4 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_70.previous;

    iVar3 = ReportDebugMessage("E:\\__titans\\Start\\prov_obj.cpp",0x24d,0,iVar4,"%s"
                               ,"PrividerTy::CreateCtrls");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\prov_obj.cpp",0x24d);
    return;
  }
  local_5 = local_10->array_00BC[0xc].field_01DF;
  if (local_5 == '\0') {
    if (g_startSystem_0081176C->field_068A != 0) {
      local_c = *(uint *)(g_startSystem_0081176C->field_068A + 4);
      goto LAB_005bbb22;
    }
  }
  else if (g_startSystem_0081176C->field_068E != 0) {
    local_c = *(uint *)(g_startSystem_0081176C->field_068E + 4);
    goto LAB_005bbb22;
  }
  local_c = 0;
LAB_005bbb22:
  local_544[6] = ((int)local_c < 0) - 1 & local_c;
  if (param_1 == '\0') {
    if (local_5 == '\0') {
      local_d84 = local_10->field_0008;
      local_dd0[0] = nullptr;
      local_dd0[1] = (HDC__ *)0x9;
      local_dd0[2] = g_startSystem_0081176C->field_0030;
      local_db0 = local_10->field_1C92;
      local_dd0[3] = (HDC__ *)0x7d;
      local_dd0[4] = (HDC__ *)0x1af;
      local_dd0[5] = (HDC__ *)0x226;
      local_dd0[6] = (HDC__ *)0x14;
      local_dd0[7] = (HDC__ *)0x104;
      local_d80 = 2;
      local_d7c = 0x631f;
      /* ST_CALLSITE[005BBDD6]: CALL dword ptr [EAX + 0x8] */
      (*local_10->field_000C->vtable->CreateObject)
                ((SystemClassTy *)local_10->field_000C,6,&local_10->field_1C86,nullptr,local_dd0,
                 0);
      uVar2 = this_00->array_00BC[0xc].field_01F3;
      this_00->field_002D = 0x20;
      this_00->field_0031 = 1;
      FUN_006e6080(this_00,2,uVar2,(undefined4 *)&this_00->field_0x1d);
    }
    if ((this_00->array_00BC[0xc].field_01DB)->field_02E6 != nullptr) {
      memset(&local_2c, 0, 0x1a); /* compiler bulk-zero initialization */
      STPiece<2,2>(local_2c) = (-(ushort)(local_544[6] != 0) & 2) - 1;
      local_1e = 1;
      local_20 = 1;
      local_22 = 1;
      local_28 = 1;
      STPiece<0,2>(local_2c) = 1;
      /* ST_CALLSITE[005BBE50]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
      MMsgTy::StatePanel((this_00->array_00BC[0xc].field_01DB)->field_02E6,(int)&local_2c);
    }
  }
  else {
    local_51c = local_10->field_0008;
    local_544[0] = 0;
    local_544[2] = 0x7a;
    local_544[3] = 0x67;
    local_544[4] = 0x208;
    local_544[5] = 0x143;
    local_528 = 0;
    local_518 = 2;
    local_514 = 0x8160;
    local_4f8 = 2;
    local_4f4 = 0x8161;
    local_4d8 = 2;
    local_4d4 = 0x8162;
    local_4b8 = 2;
    local_4b4 = 0x8163;
    if (DAT_0080734c != '\0') {
      local_74 = 1;
    }
    local_408 = local_10->field_1A97;
    local_40c = local_10->field_1A93;
    local_400 = local_10->field_1A9F;
    local_28c = local_10->field_1B24;
    local_288 = local_10->field_1B28;
    local_284 = local_10->field_1B2C;
    local_404 = local_10->field_1A9B;
    local_280 = local_10->field_1B30;
    local_100 = local_10->field_1BBD;
    local_300 = 0x32;
    local_180 = 0x32;
    local_108 = local_10->field_1BB5;
    local_418 = 2;
    local_414 = 0;
    local_410 = 2;
    local_304 = 500;
    local_3b0 = 2;
    local_3ac = 0x8164;
    local_298 = 2;
    local_294 = 0;
    local_290 = 2;
    local_184 = 500;
    local_230 = 2;
    local_22c = 0x8165;
    local_118 = 3;
    local_114 = 1;
    local_10c = 0;
    local_104 = 0x8a;
    local_fc = 0xe6;
    local_f8 = 0xe;
    local_c0 = 2;
    local_bc = 0x8166;
    local_4fc = local_51c;
    local_4dc = local_51c;
    local_4bc = local_51c;
    local_3b4 = local_51c;
    local_234 = local_51c;
    local_c4 = local_51c;
    /* ST_CALLSITE[005BBD37]: CALL dword ptr [EAX + 0x8] */
    (*local_10->field_000C->vtable->CreateObject)
              ((SystemClassTy *)local_10->field_000C,7,&local_10->array_00BC[0xc].field_01F3,
               nullptr,local_544,0);
  }
  uVar2 = this_00->array_00BC[0xc].field_01F3;
  this_00->field_0031 = 0;
  puVar1 = &this_00->field_0x1d;
  this_00->field_002D = 0x20;
  FUN_006e6080(this_00,2,uVar2,(undefined4 *)puVar1);
  uVar2 = this_00->array_00BC[0xc].field_01F3;
  this_00->field_0031 = ((int)local_c < 1) - 1 & local_c;
  this_00->field_002D = 0x28;
  FUN_006e6080(this_00,2,uVar2,(undefined4 *)puVar1);
  if (0 < (int)local_c) {
    uVar2 = this_00->array_00BC[0xc].field_01F3;
    this_00->field_002D = 0x20;
    this_00->field_0031 = 1;
    FUN_006e6080(this_00,2,uVar2,(undefined4 *)puVar1);
  }
  g_currentExceptionFrame = local_70.previous;
  return;
}

