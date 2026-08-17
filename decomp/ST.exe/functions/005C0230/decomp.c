#include "../../pseudocode_runtime.h"


void __fastcall FUN_005c0230(MReportTy *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar6;
  bool bVar7;
  int local_4bc [280];
  undefined4 local_5c [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_14;
  undefined4 local_10;

  memset(local_5c, 0, 0x58); /* compiler bulk-zero initialization */
  iVar4 = 0;
  memset(local_4bc, 0, 0x460); /* compiler bulk-zero initialization */
  iVar4 = 0;
  param_1->field_0353 = 0x7d;
  param_1->field_0357 = 0x7e;
  param_1->field_035B = 0x93;
  param_1->field_035F = 0x54;
  param_1->field_036B = 0x2446;
  param_1->field_036F = 0x111;
  param_1->field_0373 = 0x7e;
  param_1->field_0377 = 0x91;
  param_1->field_037B = 0x54;
  param_1->field_0387 = 0x2447;
  param_1->field_038B = 0x1a3;
  param_1->field_038F = 0x7e;
  param_1->field_0393 = 0x93;
  param_1->field_0397 = 0x54;
  param_1->field_03A3 = 0x2448;
  param_1->field_03A7 = 0x239;
  param_1->field_03AB = 0x7e;
  param_1->field_03AF = 0x95;
  param_1->field_03B3 = 0x54;
  param_1->field_03BF = 0x2449;
  param_1->field_03CB = 0x93;
  param_1->field_0403 = 0x93;
  param_1->field_03C3 = 0x7d;
  param_1->field_03C7 = 0xdf;
  param_1->field_03CF = 0x54;
  param_1->field_03E3 = 0xdf;
  param_1->field_03EB = 0x54;
  param_1->field_03FF = 0xdf;
  param_1->field_0407 = 0x54;
  param_1->field_041B = 0xdf;
  param_1->field_0423 = 0x54;
  param_1->field_0433 = 0x7d;
  param_1->field_03DB = 0x244a;
  param_1->field_03DF = 0x111;
  param_1->field_03E7 = 0x91;
  param_1->field_03F7 = 0x244b;
  param_1->field_03FB = 0x1a3;
  param_1->field_0413 = 0x244c;
  param_1->field_0417 = 0x239;
  param_1->field_041F = 0x95;
  param_1->field_042F = 0x244d;
  param_1->field_0437 = 0x13f;
  param_1->field_043B = 0x251;
  param_1->field_043F = 0x43;
  param_1->field_044B = 0x244e;
  memset(&param_1->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
  param_1->field_002D = 0x13;
  param_1->field_0031 = param_1->field_0008;
  param_1->field_0033 = param_1->field_000A;
  FUN_006e6000(param_1,3,1,(undefined4 *)&param_1->field_0x1d);
  if (param_1->field_0066 == '\x01') {
    /* ST_CALLSITE[005C041E]: CALL 0x00405ecf; direct=00405ECF MReportTy::CreateBut */
    uVar1 = MReportTy::CreateBut(param_1,1,1,0x2d,0x226,0x91,0x28,0x6201,0x6213);
    param_1->field_0093 = uVar1;
    /* ST_CALLSITE[005C0447]: CALL 0x00405ecf; direct=00405ECF MReportTy::CreateBut */
    uVar1 = MReportTy::CreateBut(param_1,1,1,0x1e,0x1bd,300,0x1e,0x6202,0x6214);
    param_1->field_0097 = uVar1;
  }
  else {
    /* ST_CALLSITE[005C0475]: CALL 0x00405ecf; direct=00405ECF MReportTy::CreateBut */
    uVar1 = MReportTy::CreateBut(param_1,1,1,0x262,0x226,0x91,0x28,0x6200,0x6212);
    param_1->field_008F = uVar1;
  }
  bVar3 = 0;
  iVar6 = 1;
  iVar4 = 0x4b;
  piVar2 = local_4bc + 1;
  do {
    piVar2[-1] = iVar6;
    bVar7 = bVar3 != 0;
    bVar3 = bVar3 + 1;
    *piVar2 = bVar7 + 1;
    piVar2[2] = 0x1a;
    piVar2[4] = 0x2e;
    piVar2[3] = iVar4;
    piVar2[5] = 0x24;
    iVar6 = iVar6 + 1;
    iVar4 = iVar4 + 0x26;
    piVar2 = piVar2 + 0x1c;
  } while (bVar3 < 9);
  local_14 = local_4bc;
  local_5c[0] = 1;
  local_10 = 1;
  STPiece<0,2>(local_4c) = param_1->field_0008;
  STPiece<2,2>(local_4c) = param_1->field_000A;
  local_48 = 2;
  local_28 = 2;
  local_44 = 0xb208;
  local_24 = 0xb209;
  local_2c = local_4c;
  /* ST_CALLSITE[005C0511]: CALL dword ptr [EDX + 0x8] */
  (*param_1->field_000C->vtable->CreateObject)
            ((SystemClassTy *)param_1->field_000C,5,&param_1->field_009F,nullptr,local_5c,0);
  /* ST_CALLSITE[005C0516]: CALL 0x00403b07; direct=00403B07 MReportTy::SetCtrl */
  MReportTy::SetCtrl(param_1);
  return;
}

