#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::ChatCtrls */

void __thiscall FSGSTy::ChatCtrls(FSGSTy *this)

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
  undefined4 uVar7;
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
  iVar9 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar9 == 0) {
    local_8->array_00BC[0xc].field_01E0 = 0;
    if (local_8->field_1E8E != 0) {
      FreeAndNull(&local_8->field_1E8E);
    }
    if (this_00->field_1E92 != nullptr) {
      FreeAndNull(&this_00->field_1E92);
    }
    if (this_00->field_1E9A != nullptr) {
      FreeAndNull(&this_00->field_1E9A);
    }
    iVar8 = 1;
    puVar13 = this_00->field_005D + 0x14;
    uVar6_mg0 = FUN_006b4fe0((int)this_00->field_005D);
    local_EAX_212 =
         FUN_006b50c0(0x1bf,0x175,(uint)this_00->field_005D[7],uVar6_mg0,(undefined4 *)puVar13,iVar8
                     );
    this_00->field_1E8E = local_EAX_212;
    ptVar4 = Library::DKW::DDX::FUN_006c4880(g_dDXContext_0080759C,0x13,0x5e,0x1bf,0x175,8);
    this_00->field_1E92 = ptVar4;
    ptVar4 = Library::DKW::DDX::FUN_006c4880(g_dDXContext_0080759C,0x1e9,0x5e,0x124,0x175,8);
    this_00->field_1E9A = ptVar4;
    array = (FSGSTy_field_1EA6DArray *)Library::DKW::TBL::DArrayCreate(nullptr,0x14,0x2e,10);
    this_00->field_1EA6 = array;
    local_523 = 1;
    Library::DKW::TBL::DArrayAppend((DArrayTy *)array,local_550);
    pFVar5 = (FSGSTy_field_1EAADArray *)
             Library::DKW::TBL::DArrayCreate(nullptr,0x14,0x68,10);
    this_00->field_1EAA = pFVar5;
    pDVar6 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    this_00->field_1AE8 = pDVar6;
    Library::DKW::TBL::FUN_006b5aa0(pDVar6,&CHAR_00h_008016a0);
    pDVar6 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    this_00->field_1AEC = pDVar6;
    Library::DKW::TBL::FUN_006b5aa0(pDVar6,&CHAR_00h_008016a0);
    pDVar6 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    this_00->field_1EA2 = pDVar6;
    Library::DKW::TBL::FUN_006b5aa0(pDVar6,&CHAR_00h_008016a0);
    local_dc8[0] = 0;
    local_dc8[1] = 2;
    local_da8 = 0x19;
    local_da4 = 0x5f;
    local_dc8[2] = 1;
    local_dc8[3] = 0;
    pcVar1 = this_00->array_00BC[0xc].field_01F7;
    local_dc8[4] = 0x1a6 - this_00->field_1B4C;
    if (pcVar1->field_00A0 != 0) {
      FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar1);
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
              ((SystemClassTy *)this_00->field_000C,8,puVar9,nullptr,local_dc8,0);
    this_00->field_002D = 5;
    FUN_006e6080(this_00,2,*puVar9,(undefined4 *)&this_00->field_0x1d);
    if (this_00->field_1B2C != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1B70,this_00->field_1B2C,0xfffffffe,this_00->field_1B44,
                 this_00->field_1B48);
    }
    if (this_00->field_1BBD != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1C01,this_00->field_1BBD,0xfffffffe,this_00->field_1BD5,
                 this_00->field_1BD9);
    }
    if (this_00->field_1C4E != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1C92,this_00->field_1C4E,0xfffffffe,this_00->field_1C66,
                 this_00->field_1C6A);
    }
    this_00->field_002D = 0x28;
    *(undefined2 *)&this_00->field_0x31 = 1;
    *(short *)&this_00->field_0x33 = (short)this_00->field_1E9E[2];
    FUN_006e6080(this_00,2,*puVar9,(undefined4 *)&this_00->field_0x1d);
    this_00->field_002D = 0x22;
    *(undefined2 *)&this_00->field_0x31 = 0;
    if ((int)this_00->field_1E9E[2] < 0x19) {
      sVar3 = 0;
    }
    else {
      sVar3 = (short)this_00->field_1E9E[2] + -0x19;
    }
    *(short *)&this_00->field_0x33 = sVar3;
    FUN_006e6080(this_00,2,*puVar9,(undefined4 *)&this_00->field_0x1d);
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
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1B10,nullptr,local_1654,0);
    /* ST_CALLSITE[0059E089]: CALL 0x00402dbf; direct=00402DBF SetAccelerator */
    SetAccelerator(1,this_00->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
    /* ST_CALLSITE[0059E0A6]: CALL 0x00402dbf; direct=00402DBF SetAccelerator */
    SetAccelerator(1,this_00->field_0008,2,0xc0a4,2,0x8000031,0,0,0,0,0,0);
    /* ST_CALLSITE[0059E0C6]: CALL 0x00402dbf; direct=00402DBF SetAccelerator */
    SetAccelerator(1,this_00->field_0008,2,0xc0a5,2,0x4000002f,0,0,0,0,0,0);
    /* ST_CALLSITE[0059E0EC]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar7 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x17c,0x1be,0x55,0x14,0x6901,0x6984);
    this_00->field_1B18 = uVar7;
    /* ST_CALLSITE[0059E117]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar7 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,0,499,0x156,0xe6,0x19,0x6903,0x6986);
    this_00->field_1B24 = uVar7;
    /* ST_CALLSITE[0059E143]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar7 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x261,0x1b3,0xa0,0x19,0x6902,0x6985);
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
              ((SystemClassTy *)this_00->field_000C,7,&this_00->field_1B20,nullptr,local_520,0);
    if (this_00->field_1CDF != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1D23,this_00->field_1CDF,0xfffffffe,this_00->field_1CF7,
                 this_00->field_1CFB);
    }
    if (this_00->field_1D70 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1DB4,this_00->field_1D70,0xfffffffe,this_00->field_1D88,
                 this_00->field_1D8C);
    }
    if (this_00->field_1E01 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
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
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC4,nullptr,local_1654,0);
    local_1634 = this_00->field_1AEC;
    local_1654[4] = (ccFntTy *)0x1b5;
    local_1654[5] = (ccFntTy *)0x5f;
    local_1654[7] = (ccFntTy *)0x20;
    /* ST_CALLSITE[0059E4E2]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC8,nullptr,local_1654,0);
    this_00->field_002D = 0x61;
    this_00->field_0035 = 0;
    this_00->field_0037 = 0;
    FUN_006e6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar14 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x758,0,iVar9,"%s",
                              "FSGSTy::ChatCtrls");
  if (iVar14 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar9,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x758);
  return;
}

