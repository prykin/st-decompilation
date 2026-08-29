#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/005C.cpp

// 005C0230 FUN_005c0230
#line 4 "decomp/ST.exe/functions/005C0230/decomp.c"
void __fastcall st::fn_005C0230(MReportTy *param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar5;
  bool bVar6;
  int local_4bc [280];
  uint local_5c [4];
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_2c;
  uint local_28;
  uint local_24;
  int *local_14;
  uint local_10;
  memset(local_5c, 0, 0x58); /* compiler bulk-zero initialization */
  iVar3 = 0;
  memset(local_4bc, 0, 0x460); /* compiler bulk-zero initialization */
  iVar3 = 0;
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

  st::fn_006E6000(param_1,3,1,reinterpret_cast<undefined4 *>(&param_1->field_0x1d));
  if (param_1->field_0066 == '\x01') {
    /* ST_CALLSITE[005C041E]: CALL 0x00405ecf; direct=00405ECF MReportTy::CreateBut */
    iVar3 = st::fn_00405ECF(param_1,1,1,0x2d,0x226,0x91,0x28,0x6201,0x6213);
    param_1->field_0093 = iVar3;
    /* ST_CALLSITE[005C0447]: CALL 0x00405ecf; direct=00405ECF MReportTy::CreateBut */
    iVar3 = st::fn_00405ECF(param_1,1,1,0x1e,0x1bd,300,0x1e,0x6202,0x6214);
    param_1->field_0097 = iVar3;
  }
  else {
    /* ST_CALLSITE[005C0475]: CALL 0x00405ecf; direct=00405ECF MReportTy::CreateBut */
    iVar3 = st::fn_00405ECF(param_1,1,1,0x262,0x226,0x91,0x28,0x6200,0x6212);
    param_1->field_008F = iVar3;
  }
  bVar2 = 0;
  iVar5 = 1;
  iVar3 = 0x4b;
  piVar1 = local_4bc + 1;
  do {
    piVar1[-1] = iVar5;
    bVar6 = bVar2 != 0;
    bVar2 = bVar2 + 1;
    *piVar1 = bVar6 + 1;
    piVar1[2] = 0x1a;
    piVar1[4] = 0x2e;
    piVar1[3] = iVar3;
    piVar1[5] = 0x24;
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 0x26;
    piVar1 = piVar1 + 0x1c;
  } while (bVar2 < 9);
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
            (reinterpret_cast<SystemClassTy *>(param_1->field_000C),5,&param_1->field_009F,nullptr,st::machine_word_boundary_cast<undefined4>(local_5c),0);
  /* ST_CALLSITE[005C0516]: CALL 0x00403b07; direct=00403B07 MReportTy::SetCtrl */
  st::fn_00403B07(param_1);
  return;
}

// 005C2620 CreateMReport
#line 4 "decomp/ST.exe/functions/005C2620/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8C4>0040166D

   [STObjectFactoryApplier] Central object factory for 0x0304 (ST_OBJECT_M_REPORT).
   Evidence: registry[52] at 007CA8C0 stores type 0x0304 and executable pointer 0040166D; allocation
   size 1115 uniquely matches /MReportTy */

MReportTy * __cdecl st::fn_005C2620(void)

{
  MReportTy *this;
  int iVar1;


  this = STPointerBoundaryCast<MReportTy *>(st::fn_006B04D0(0x45b));
  if (this != nullptr) {

    st::fn_006E5FB0(this);
    this->field_0018 = 0;
    this->field_005D = nullptr;
    memset(&this->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x3d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    DAT_0080879c = 0;
    this->vtable = &st_global_0079C0E4;
    memset(&this->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x3d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    this->field_0065 = 2;
    this->field_0066 = 1;
    this->field_0073 = nullptr;
    this->field_007B = nullptr;
    this->field_0077 = nullptr;
    this->field_006F = nullptr;
    this->field_008B = nullptr;
    this->field_0087 = nullptr;
    this->field_0083 = nullptr;
    this->field_007F = nullptr;
    this->field_008F = 0;
    this->field_0093 = 0;
    this->field_0097 = 0;
    this->field_009B = 0;
    this->field_0068 = 1;
    this->field_009F = 0;
    this->field_0067 = 0;
    this->field_0069 = 0;
    memset(&this->field_0x2a7, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    this->field_02A3 = 0;
    this->field_006A = 0;
    this->field_006B = 0;
    this->field_0347 = nullptr;
    this->field_034B = 0;
    this->field_034F = 0;
    memset(&this->field_0353, 0, 0xfc); /* compiler bulk-zero initialization */
    this->field_044F = 0;
    this->field_0457 = nullptr;
    this->field_0453 = nullptr;
    return this;
  }
  return nullptr;
}

// 005C2760 FUN_005c2760
#line 4 "decomp/ST.exe/functions/005C2760/decomp.c"
void st::fn_005C2760(void)

{
  DWORD DVar1;
  DWORD DVar2;
  BITMAPINFO *pBVar3;
  uint local_2c;
  byte local_20;
  uint local_1e;
  /* ST_CALLSITE[005C2767]: CALL dword ptr [0x0085bedc] */
  DVar2 = st::external_000000DA();
  DVar1 = DAT_00811754;
  if ((PTR_0081175c != nullptr) && (99 < DVar2 - DAT_00811754)) {
    st::fn_006B5F80(reinterpret_cast<int *>(g_ddxContext_008075A8),0,0,g_nWidth_00806730,DAT_00806734);
    pBVar3 = st::fn_0070B3A0(PTR_0081175c,(short)PTR_0081175c->field_0029);
    /* ST_CALLSITE[005C27C3]: CALL 0x00403738; direct=00403738 PutDDX */
    st::fn_00403738(0x15,0x14,'\x06',pBVar3);

    st::fn_006BB370(g_dDXContext_0080759C,0,0);
    PTR_0081175c->field_0029 = PTR_0081175c->field_0029 + 1;
    if (PTR_0081175c->field_0023 <= (short)PTR_0081175c->field_0029) {
      PTR_0081175c->field_0029 = 0;
    }
    DVar1 = DVar2;
    if ((DAT_00811750 != '\0') && (DAT_0080877e != '\0')) {
      memset(&local_2c, 0, 0x26); /* compiler bulk-zero initialization */
      STPiece<0,2>(local_2c) = (undefined2)((uint)DAT_00807dd5 >> 0x10);
      local_20 = DAT_0080733b;
      STPiece<2,1>(local_2c) = 0;
      local_1e = DAT_00808754;

      st::fn_00715360(g_int_00811764,0,'\x1a',reinterpret_cast<char *>(&local_2c),0x26,1,0xffffffff);
    }
  }
  DAT_00811754 = DVar1;
  return;
}

// 005C5CA0 FUN_005c5ca0
#line 4 "decomp/ST.exe/functions/005C5CA0/decomp.c"
void __fastcall st::fn_005C5CA0(RecoveredRecordView_005C5CA0_616D4596 *param_1)

{
  byte *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;

  cVar2 = param_1->field_1E26;
  if ((((cVar2 == '\x02') || (cVar2 == '\x05')) || (cVar2 == '\x0f')) ||
     (((cVar2 == '\f' || (cVar2 == '\x10')) ||
      ((param_1->field_1E27 == 0x13 && ((DAT_00803400 == '\x14' || (DAT_00803400 == '\x15')))))))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  param_1->field_1C63 = 1;
  param_1->field_0029 = 2;
  param_1->field_002D = 0x20;
  piVar7 = reinterpret_cast<int *>(&param_1->field_0x1f60);
  iVar6 = 7;
  do {
    iVar3 = *piVar7;
    if ((iVar3 != 0) && (DAT_0080877e != '\0')) {
      param_1->field_0031 = 1;
      param_1->field_0025 = iVar3;
      /* ST_CALLSITE[005C5D2D]: CALL dword ptr [EAX + 0x18] */
      (*STField<code **>(param_1->field_000C,0x0000)[6])(&param_1->field_0x1d);
    }
    piVar7 = piVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if ((param_1->field_215D != 0) && (DAT_0080877e != '\0')) {
    param_1->field_0031 = 1;
    param_1->field_0025 = param_1->field_215D;
    /* ST_CALLSITE[005C5D5E]: CALL dword ptr [EAX + 0x18]; [STIndirectCallsiteApplier] exact slot 0x18; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
    (*STField<code **>(param_1->field_000C,0x0000)[6])(&param_1->field_0x1d);
  }
  piVar7 = reinterpret_cast<int *>(&param_1->field_0x2125);
  iVar6 = 0xe;
  do {
    iVar3 = *piVar7;
    if (((iVar3 != 0) && (DAT_0080877e != '\0')) && (!bVar5)) {
      param_1->field_0031 = 1;
      param_1->field_0025 = iVar3;
      /* ST_CALLSITE[005C5D97]: CALL dword ptr [EAX + 0x18] */
      (*STField<code **>(param_1->field_000C,0x0000)[6])(&param_1->field_0x1d);
    }
    piVar7 = piVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (param_1->field_211D != 0) {
    param_1->field_0031 = 1;
    param_1->field_0025 = param_1->field_211D;
    puVar1 = &param_1->field_0x1d;
    /* ST_CALLSITE[005C5DBE]: CALL dword ptr [EAX + 0x18]; [STIndirectCallsiteApplier] exact slot 0x18; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
    (*STField<code **>(param_1->field_000C,0x0000)[6])(puVar1);
    param_1->field_002D = 0x22;
    *(undefined4 *)&param_1->field_0x1f88 = 0;
    param_1->field_0031 = 0;
    /* ST_CALLSITE[005C5DD9]: CALL dword ptr [EDX + 0x18]; [STIndirectCallsiteApplier] exact slot 0x18; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
    (*STField<code **>(param_1->field_000C,0x0000)[6])(puVar1);
    param_1->field_002D = 0x28;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar4 = *(uint *)(param_1->field_1F84 + 0xc);
    if (uVar4 < 0xb) {
      iVar6 = 1;
    }
    else {
      iVar6 = uVar4 - 9;
    }
    param_1->field_0031 = iVar6;
    /* ST_CALLSITE[005C5E04]: CALL dword ptr [EDX + 0x18]; [STIndirectCallsiteApplier] exact slot 0x18; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
    (*STField<code **>(param_1->field_000C,0x0000)[6])(puVar1);
  }
  iVar6 = g_startSystem_0081176C->field_0389;
  if (iVar6 != 0) {
    param_1->field_0031 = 1;
    param_1->field_0025 = iVar6;
    /* ST_CALLSITE[005C5E2C]: CALL dword ptr [EDX + 0x18]; [STIndirectCallsiteApplier] exact slot 0x18; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
    (*STField<code **>(param_1->field_000C,0x0000)[6])(&param_1->field_0x1d);
  }
  /* ST_CALLSITE[005C5E33]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  STStructuralVirtualCall<undefined4>(param_1, 0x2C);
  return;
}

// 005C5EB0 FUN_005c5eb0
#line 4 "decomp/ST.exe/functions/005C5EB0/decomp.c"
void __fastcall st::fn_005C5EB0(RecoveredRecordView_005C5EB0_6F980905 *param_1)

{
  int iVar1;
  int *piVar2;
  int local_8;

  iVar1 = 7;
  param_1->field_1C63 = 0;
  param_1->field_0029 = 2;
  param_1->field_002D = 0x20;
  param_1->field_0031 = 0;
  piVar2 = reinterpret_cast<int *>(&param_1->field_0x1f60);
  do {
    if (*piVar2 != 0) {
      param_1->field_0025 = *piVar2;
      /* ST_CALLSITE[005C5EEF]: CALL dword ptr [EAX + 0x18] */
      (*STField<code **>(param_1->field_000C,0x0000)[6])(&param_1->field_0x1d);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (param_1->field_215D != 0) {
    param_1->field_0025 = param_1->field_215D;
    /* ST_CALLSITE[005C5F0E]: CALL dword ptr [EAX + 0x18]; [STIndirectCallsiteApplier] exact slot 0x18; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
    (*STField<code **>(param_1->field_000C,0x0000)[6])(&param_1->field_0x1d);
  }
  piVar2 = reinterpret_cast<int *>(&param_1->field_0x2125);
  iVar1 = 0xe;
  do {
    if (*piVar2 != 0) {
      param_1->field_0025 = *piVar2;
      /* ST_CALLSITE[005C5F2E]: CALL dword ptr [EAX + 0x18] */
      (*STField<code **>(param_1->field_000C,0x0000)[6])(&param_1->field_0x1d);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  piVar2 = reinterpret_cast<int *>(&param_1->field_0x1f8c);
  local_8 = 10;
  do {
    iVar1 = 8;
    do {
      if (*piVar2 != 0) {
        param_1->field_0025 = *piVar2;
        /* ST_CALLSITE[005C5F5B]: CALL dword ptr [EAX + 0x18] */
        (*STField<code **>(param_1->field_000C,0x0000)[6])(&param_1->field_0x1d);
      }
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (param_1->field_211D != 0) {
    param_1->field_0025 = param_1->field_211D;
    param_1->field_0031 = 0;
    /* ST_CALLSITE[005C5F88]: CALL dword ptr [EAX + 0x18]; [STIndirectCallsiteApplier] exact slot 0x18; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
    (*STField<code **>(param_1->field_000C,0x0000)[6])(&param_1->field_0x1d);
  }
  if (g_startSystem_0081176C->field_0389 != 0) {
    param_1->field_0025 = g_startSystem_0081176C->field_0389;
    param_1->field_002D = 0x20;
    param_1->field_0031 = 0;
    /* ST_CALLSITE[005C5FB0]: CALL dword ptr [EDX + 0x18]; [STIndirectCallsiteApplier] exact slot 0x18; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
    (*STField<code **>(param_1->field_000C,0x0000)[6])(&param_1->field_0x1d);
  }
  return;
}

// 005CBBE0 FUN_005cbbe0
#line 4 "decomp/ST.exe/functions/005CBBE0/decomp.c"
int __thiscall st::fn_005CBBE0(void *this,AnonShape_005CBBE0_2D1CAA09 *param_1)

{
  DArrayTy *pDVar1;
  char *pcVar2;
  UINT resourceId;
  void *pvVar3;

  pcVar2 = st::fn_006B0140(8000,g_hINSTANCE_00807618);
  if (param_1 != nullptr) {
    switch(param_1->field_0x4) {
    case 1:
      if (((STField<char>(this,0x1e26) != '\f') && (STField<char>(this,0x1e26) != '\x10')) ||
         (resourceId = 0x1f5a, *(char *)param_1 == '\0')) {
        resourceId = 0x1f41;
      }
      pcVar2 = st::fn_006B0140(resourceId,g_hINSTANCE_00807618);
      return (int)pcVar2;
    case 2:
      pcVar2 = st::fn_006B0140(0x1f42,g_hINSTANCE_00807618);
      return (int)pcVar2;
    case 3:
      pcVar2 = st::fn_006B0140(0x1f46,g_hINSTANCE_00807618);
      return (int)pcVar2;
    case 4:
      pDVar1 = param_1->field_0050;
      if (((uint)(byte)param_1->field_0x5 < pDVar1->count) &&
         (pvVar3 = DArrayAt<void>(pDVar1, (uint)(byte)param_1->field_0x5), pvVar3 != nullptr)) {
        return (int)pvVar3 + 0x40;
      }
      pcVar2 = st::fn_006B0140(10000,g_hINSTANCE_00807618);
    }
  }
  return (int)pcVar2;
}

// 005CCC30 FUN_005ccc30
#line 4 "decomp/ST.exe/functions/005CCC30/decomp.c"
void __fastcall st::fn_005CCC30(RecoveredRecordView_005CCC30_216F705B *param_1)

{
  int iVar1;

  iVar1 = *(int *)&param_1[0x9b].field_0x14;
  param_1->field_002D = 0x20;
  if (iVar1 != 0) {
    param_1->field_0031 = 1;
    st::fn_006E6080(param_1,2,iVar1,reinterpret_cast<undefined4 *>(&param_1->field_0x1d));
  }
  if (g_startSystem_0081176C->field_0550 != 0) {
    param_1->field_0031 = 1;
    st::fn_006E6080(param_1,2,g_startSystem_0081176C->field_0550,reinterpret_cast<undefined4 *>(&param_1->field_0x1d));
  }
  if (g_startSystem_0081176C->field_054C != 0) {
    param_1->field_002D = 0x29;
    param_1->field_0031 = 9;
    st::fn_006E6080(param_1,2,g_startSystem_0081176C->field_054C,reinterpret_cast<undefined4 *>(&param_1->field_0x1d));
  }
  st::fn_00405DD5(reinterpret_cast<RecoveredRecordView_005C5CA0_616D4596 *>(param_1));
  return;
}

// 005CCD00 FUN_005ccd00
#line 4 "decomp/ST.exe/functions/005CCD00/decomp.c"
void __fastcall st::fn_005CCD00(RecoveredRecordView_005CCD00_42E0A333 *param_1)

{
  if (param_1->field_21FC != 0) {
    param_1->field_002D = 0x20;
    param_1->field_0031 = 0;
    st::fn_006E6080(param_1,2,param_1->field_21FC,reinterpret_cast<undefined4 *>(&param_1->field_0x1d));
  }
  if (g_startSystem_0081176C->field_054C != 0) {
    param_1->field_002D = 0x20;
    param_1->field_0031 = 0;
    st::fn_006E6080(param_1,2,g_startSystem_0081176C->field_054C,reinterpret_cast<undefined4 *>(&param_1->field_0x1d));
    param_1->field_002D = 0x29;
    param_1->field_0031 = 0x19;
    st::fn_006E6080(param_1,2,g_startSystem_0081176C->field_054C,reinterpret_cast<undefined4 *>(&param_1->field_0x1d));
  }
  if (g_startSystem_0081176C->field_0550 != 0) {
    param_1->field_002D = 0x20;
    param_1->field_0031 = 0;
    st::fn_006E6080(param_1,2,g_startSystem_0081176C->field_0550,reinterpret_cast<undefined4 *>(&param_1->field_0x1d));
  }
  st::fn_0040337D(reinterpret_cast<RecoveredRecordView_005C5EB0_6F980905 *>(param_1));
  return;
}
