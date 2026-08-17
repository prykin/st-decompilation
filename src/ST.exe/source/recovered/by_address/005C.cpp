#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/005C.cpp

// 005C0230 FUN_005c0230
#line 4 "decomp/ST.exe/functions/005C0230/decomp.c"
void __fastcall st::fn_005C0230(MReportTy *param_1)

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
  st::fn_006E6000(param_1,3,1,(undefined4 *)&param_1->field_0x1d);
  if (param_1->field_0066 == '\x01') {
    /* ST_CALLSITE[005C041E]: CALL 0x00405ecf; direct=00405ECF MReportTy::CreateBut */
    uVar1 = st::fn_00405ECF(param_1,1,1,0x2d,0x226,0x91,0x28,0x6201,0x6213);
    param_1->field_0093 = uVar1;
    /* ST_CALLSITE[005C0447]: CALL 0x00405ecf; direct=00405ECF MReportTy::CreateBut */
    uVar1 = st::fn_00405ECF(param_1,1,1,0x1e,0x1bd,300,0x1e,0x6202,0x6214);
    param_1->field_0097 = uVar1;
  }
  else {
    /* ST_CALLSITE[005C0475]: CALL 0x00405ecf; direct=00405ECF MReportTy::CreateBut */
    uVar1 = st::fn_00405ECF(param_1,1,1,0x262,0x226,0x91,0x28,0x6200,0x6212);
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
            ((SystemClassTy *)param_1->field_000C,5,&param_1->field_009F,nullptr,st::machine_word_boundary_cast<undefined4>(local_5c),0);
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

  this = (MReportTy *)st::fn_006B04D0(0x45b);
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
  undefined4 local_2c;
  undefined1 local_20;
  undefined4 local_1e;

  /* ST_CALLSITE[005C2767]: CALL dword ptr [0x0085bedc] */
  DVar2 = st::external_000000DA();
  DVar1 = DAT_00811754;
  if ((PTR_0081175c != nullptr) && (99 < DVar2 - DAT_00811754)) {
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
    pBVar3 = st::fn_0070B3A0(PTR_0081175c,(int)(short)PTR_0081175c->field_0029);
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
      st::fn_00715360(g_int_00811764,0,'\x1a',(char *)&local_2c,0x26,1,0xffffffff);
    }
  }
  DAT_00811754 = DVar1;
  return;
}

// 005C5CA0 FUN_005c5ca0
#line 4 "decomp/ST.exe/functions/005C5CA0/decomp.c"
void __fastcall st::fn_005C5CA0(AnonShape_005C5CA0_A6776207 *param_1)

{
  undefined1 *puVar1;
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
  piVar7 = (int *)&param_1->field_0x1f60;
  iVar6 = 7;
  do {
    iVar3 = *piVar7;
    if ((iVar3 != 0) && (DAT_0080877e != '\0')) {
      param_1->field_0031 = 1;
      param_1->field_0025 = iVar3;
      /* ST_CALLSITE[005C5D2D]: CALL dword ptr [EAX + 0x18] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)param_1->field_000C + 0x18))(&param_1->field_0x1d);
    }
    piVar7 = piVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if ((param_1->field_215D != 0) && (DAT_0080877e != '\0')) {
    param_1->field_0031 = 1;
    param_1->field_0025 = param_1->field_215D;
    /* ST_CALLSITE[005C5D5E]: CALL dword ptr [EAX + 0x18] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)param_1->field_000C + 0x18))(&param_1->field_0x1d);
  }
  piVar7 = (int *)&param_1->field_0x2125;
  iVar6 = 0xe;
  do {
    iVar3 = *piVar7;
    if (((iVar3 != 0) && (DAT_0080877e != '\0')) && (!bVar5)) {
      param_1->field_0031 = 1;
      param_1->field_0025 = iVar3;
      /* ST_CALLSITE[005C5D97]: CALL dword ptr [EAX + 0x18] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)param_1->field_000C + 0x18))(&param_1->field_0x1d);
    }
    piVar7 = piVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (param_1->field_211D != 0) {
    param_1->field_0031 = 1;
    param_1->field_0025 = param_1->field_211D;
    puVar1 = &param_1->field_0x1d;
    /* ST_CALLSITE[005C5DBE]: CALL dword ptr [EAX + 0x18] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)param_1->field_000C + 0x18))(puVar1);
    param_1->field_002D = 0x22;
    *(undefined4 *)&param_1->field_0x1f88 = 0;
    param_1->field_0031 = 0;
    /* ST_CALLSITE[005C5DD9]: CALL dword ptr [EDX + 0x18] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)param_1->field_000C + 0x18))(puVar1);
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
    /* ST_CALLSITE[005C5E04]: CALL dword ptr [EDX + 0x18] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)param_1->field_000C + 0x18))(puVar1);
  }
  iVar6 = g_startSystem_0081176C->field_0389;
  if (iVar6 != 0) {
    param_1->field_0031 = 1;
    param_1->field_0025 = iVar6;
    /* ST_CALLSITE[005C5E2C]: CALL dword ptr [EDX + 0x18] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)param_1->field_000C + 0x18))(&param_1->field_0x1d);
  }
  /* ST_CALLSITE[005C5E33]: CALL dword ptr [EDX + 0x2c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(param_1->field_0000 + 0x2c))();
  return;
}

// 005C5EB0 FUN_005c5eb0
#line 4 "decomp/ST.exe/functions/005C5EB0/decomp.c"
void __fastcall st::fn_005C5EB0(AnonShape_005C5EB0_D4E7C108 *param_1)

{
  int iVar1;
  int *piVar2;
  int local_8;

  iVar1 = 7;
  param_1->field_1C63 = 0;
  param_1->field_0029 = 2;
  param_1->field_002D = 0x20;
  param_1->field_0031 = 0;
  piVar2 = (int *)&param_1->field_0x1f60;
  do {
    if (*piVar2 != 0) {
      param_1->field_0025 = *piVar2;
      /* ST_CALLSITE[005C5EEF]: CALL dword ptr [EAX + 0x18] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (param_1->field_215D != 0) {
    param_1->field_0025 = param_1->field_215D;
    /* ST_CALLSITE[005C5F0E]: CALL dword ptr [EAX + 0x18] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
  }
  piVar2 = (int *)&param_1->field_0x2125;
  iVar1 = 0xe;
  do {
    if (*piVar2 != 0) {
      param_1->field_0025 = *piVar2;
      /* ST_CALLSITE[005C5F2E]: CALL dword ptr [EAX + 0x18] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  piVar2 = (int *)&param_1->field_0x1f8c;
  local_8 = 10;
  do {
    iVar1 = 8;
    do {
      if (*piVar2 != 0) {
        param_1->field_0025 = *piVar2;
        /* ST_CALLSITE[005C5F5B]: CALL dword ptr [EAX + 0x18] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
      }
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (param_1->field_211D != 0) {
    param_1->field_0025 = param_1->field_211D;
    param_1->field_0031 = 0;
    /* ST_CALLSITE[005C5F88]: CALL dword ptr [EAX + 0x18] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
  }
  if (g_startSystem_0081176C->field_0389 != 0) {
    param_1->field_0025 = g_startSystem_0081176C->field_0389;
    param_1->field_002D = 0x20;
    param_1->field_0031 = 0;
    /* ST_CALLSITE[005C5FB0]: CALL dword ptr [EDX + 0x18] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
  }
  return;
}

// 005C7800 FUN_005c7800
#line 4 "decomp/ST.exe/functions/005C7800/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_005C7800(void)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  SettMapTy_field_1E26State SVar4;
  DArrayTy *pDVar5;
  int iVar5;
  uint local_EAX_470;
  uint uVar6;
  uint local_EAX_556;
  uint local_EAX_591;
  uint local_EAX_610;
  uint local_EAX_629;
  uint local_EAX_671;
  uint local_EAX_684;
  uint local_EAX_697;
  cMf32 *pcVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte *puVar12;
  byte *pbVar13;
  DWORD *pDVar14;
  char *pcVar15;
  char *pcVar16;
  byte *puVar17;
  byte *pbVar18;
  STMessage *pSVar19;
  AnonShape_006A00B0_8C09D559 *local_5a80;
  byte local_228 [336];
  undefined4 local_d8 [17];
  undefined4 local_94;
  InternalExceptionFrame local_8c;
  undefined4 local_48 [4];
  STMessage local_38;
  undefined4 local_18;
  undefined4 local_14;
  SettMapTy *local_c;
  char *local_8;
  char *pcVar14_mg2;

  local_8 = (char *)0x5c780d;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  iVar5 = st::fn_0072D7F0(local_8c.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    pSVar19 = &local_38;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      pSVar19->unknown_00 = 0;
      pSVar19 = (STMessage *)&pSVar19->unknown_04;
    }
    local_38.unknown_0c = 2;
    local_38.unknown_08 = local_c->field_0008;
    local_38.id = (-(uint)(local_c->field_1E26 != CASE_E) & 0xfffffffa) + MESS_WAITTY_694D;
    /* ST_CALLSITE[005C7FF5]: CALL dword ptr [EDX] */
    (*local_c->vtable->GetMessage)((SettMapSTy *)local_c,&local_38);
    return;
  }
  /* ST_CALLSITE[005C784A]: CALL dword ptr [EAX + 0x24] */
  local_c->vfunc_24();
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  /* ST_CALLSITE[005C7884]: CALL 0x004049d5; direct=004049D5 SettMapTy::PaintSettMap */
  st::fn_004049D5(local_c,'\0');
  st::fn_006BD740((int *)g_ddxContext_008075A8);
  st::fn_006C4630(g_dDXContext_0080759C,g_dDXContext_0080759C->field_0044,local_48);
  g_tagBITMAPINFO_00811758 =
       st::fn_006C4880
                 (g_dDXContext_0080759C,0,0,g_nWidth_00806730,DAT_00806734,DAT_00806738);
  st::fn_006C44E0(g_dDXContext_0080759C,local_48);
  st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
  st::fn_006B4640(g_dDXContext_0080759C,0,0,g_tagBITMAPINFO_00811758,nullptr);
  st::fn_006BB370(g_dDXContext_0080759C,0,0);
  if (local_c->field_1F3F != nullptr) {
    st::fn_006F1170(local_c->field_1F3F);
  }
  if (DAT_0080877e == '\0') goto LAB_005c7ae0;
  if ((DAT_008067a0 != '\0') && (g_int_00811764 != nullptr)) {
    puVar1 = &local_c->array_00BC[0xc].field_0x1df;
    st::fn_006B6160(st::pointer_boundary_cast<char *>(puVar1),(int)(g_int_00811764 + 6));
    local_c->field_1A7F = 0;
    /* ST_CALLSITE[005C7977]: CALL dword ptr [0x0085c070] */
    st::external_0000010A((CFsgsConnection *)&DAT_00802a90,4,st::pointer_boundary_cast<char *>(puVar1));
  }
  memset(&DAT_00853de0, 0, 0x232); /* compiler bulk-zero initialization */
  DAT_00853de0 = local_c->field_1F53;
  _DAT_00853ff4 = (uint)local_c->field_1F5C;
  cVar3 = local_c->field_1F57;
  if (cVar3 == '\0') {
    uVar6 = st::fn_0072E6C0();
    _DAT_00853fec = (uVar6 & 0xf) * 2 + 0x28;
    _DAT_00853ff0 = _DAT_00853fec;
  }
  else {
    if (cVar3 == '\x01') {
      iVar11 = (-(uint)(3 < local_c->field_1F5C) & 4) + 0x21;
      local_EAX_470 = st::fn_0072E6C0();
      iVar8 = 0x2e;
    }
    else {
      if (cVar3 != '\x02') goto LAB_005c7a2c;
      if (local_c->field_1F5C < 4) {
        iVar11 = 0x2b;
      }
      else {
        iVar11 = (-(uint)(5 < local_c->field_1F5C) & 5) + 0x30;
      }
      local_EAX_470 = st::fn_0072E6C0();
      iVar8 = 0x41;
    }
    _DAT_00853fec = (local_EAX_470 % (uint)(iVar8 - iVar11) + iVar11) * 2;
    _DAT_00853ff0 = _DAT_00853fec;
  }
LAB_005c7a2c:
  local_EAX_556 = st::fn_0072E6C0();
  _DAT_00854001 = (local_EAX_556 & 1) + 4;
  cVar3 = local_c->field_1F5D;
  if (cVar3 == '\0') {
    local_EAX_629 = st::fn_0072E6C0();
    _DAT_00854005 = local_EAX_629 % 0xb + 0x1e;
  }
  else if (cVar3 == '\x01') {
    local_EAX_610 = st::fn_0072E6C0();
    _DAT_00854005 = local_EAX_610 % 0xb + 0x28;
  }
  else if (cVar3 == '\x02') {
    local_EAX_591 = st::fn_0072E6C0();
    _DAT_00854005 = local_EAX_591 % 0xb + 0x32;
  }
  cVar3 = local_c->field_1F5E;
  if (cVar3 == '\0') {
    local_EAX_697 = st::fn_0072E6C0();
    _DAT_00854009 = (local_EAX_697 & 1) + 2;
  }
  else if (cVar3 == '\x01') {
    local_EAX_684 = st::fn_0072E6C0();
    _DAT_00854009 = (local_EAX_684 & 1) + 4;
  }
  else if (cVar3 == '\x02') {
    local_EAX_671 = st::fn_0072E6C0();
    _DAT_00854009 = (local_EAX_671 & 1) + 6;
  }
  DAT_0085400d = local_c->field_1F5F;
  DAT_00853ffc = STReplaceLowByte((uint32_t)(DAT_00853ffc), (uint8_t)((char)local_c->field_1F58));
LAB_005c7ae0:
  /* ST_CALLSITE[005C7AFD]: CALL dword ptr [0x0085bde8] */
  st::external_00000080(st::pointer_boundary_cast<LPSTR>(&CHAR_00h_00853de4),st::mutable_c_string("%s%s%s"),&CHAR_00h_00807680,st_global_0079C0E8,
            PTR_s_RANDOM_0079c0f4);
  pDVar5 = local_c->field_1F7C;
  if ((DAT_00853ffc & 0xff) < pDVar5->count) {
    pcVar15 = DArrayAt<char>(pDVar5, (DAT_00853ffc & 0xff));
  }
  else {
    pcVar15 = nullptr;
  }
  uVar9 = 0xffffffff;
  do {
    pcVar16 = pcVar15;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar16 = pcVar15 + 1;
    cVar3 = *pcVar15;
    pcVar15 = pcVar16;
  } while (cVar3 != '\0');
  uVar9 = ~uVar9;
  pcVar15 = pcVar16 + -uVar9;
  pcVar16 = (char *)&DAT_00853ee8;
  memmove(pcVar16, pcVar15, uVar9); /* compiler REP MOVS byte copy */
  uVar10 = 0;
  _DAT_0085400e = st::fn_005C2760;
  /* ST_CALLSITE[005C7B6D]: CALL dword ptr [0x0085bde8] */
  st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s%s%s"),&CHAR_00h_00807680,st_global_0079C0EC,
            &DAT_00853ee8);
  PTR_00853ff8 = (cMf32 *)st::fn_006F0EC0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  STPiece<1,3>(DAT_00853ffc) = SUB43(PTR_00853ff8,0);
  st_image_00854000 = (undefined1)((uint)PTR_00853ff8 >> 0x18);
  if (PTR_00853ff8 != nullptr) {
    st::fn_004057B8((undefined4 *)&local_5a80);
    /* ST_CALLSITE[005C7BA8]: CALL dword ptr [0x0085bedc] */
    DAT_00811754 = st::external_000000DA();
    SVar4 = local_c->field_1E26;
    if ((((SVar4 != CASE_6) && (SVar4 != CASE_1)) && (SVar4 != CASE_2)) && (DAT_0080877e != '\0')) {
      st::fn_00715360(g_int_00811764,0,'\x1e',(char *)&DAT_00853de0,0x232,1,0xffffffff);
      st::fn_00715360(g_int_00811764,0,' ',(char *)&local_c->field_1F53,0xd,1,0xffffffff);
    }
    st::fn_00405385
              ((CGenerate *)&local_5a80,(AnonShape_006952B0_7A982E30 *)&DAT_00853de0,
               (byte *)&local_c->field_1F53);
    st::fn_0040113B((AnonShape_006A00B0_8C09D559 *)&local_5a80);
    st::fn_006F1170(PTR_00853ff8);
    st::fn_00405EE3((int)&local_5a80);
  }
  pcVar6 = (cMf32 *)st::fn_006F0EC0(0x345,(byte *)&CHAR_00h_00853de4,0,0,0);
  local_c->field_1F3F = pcVar6;
  DAT_008087b6 = 0;
  if (local_c->field_1F3F != nullptr) {
    if (g_startSystem_0081176C->field_02F4 != nullptr) {
      st::fn_006AB060(&g_startSystem_0081176C->field_02F4);
    }
    puVar7 = st::fn_0070A5A0(local_c->field_1F3F,0xc,PTR_s_SMALL_MAP_0079c114,2,0);
    g_startSystem_0081176C->field_02F4 = puVar7;
    if (g_startSystem_0081176C->field_02F4 != nullptr) {
      st::fn_006C7F90(g_startSystem_0081176C->field_02F4,nullptr,g_dDXContext_0080759C->field_04B4,
                   0);
    }
    local_94 = DAT_0080995c;
    puVar12 = (byte *)&DAT_00809960;
    puVar17 = (byte *)(local_d8);
    memmove(puVar17, puVar12, 0x20); /* compiler REP MOVS byte copy */
    iVar8 = 0;
    local_8 = (char *)&DAT_008087b6;
    st::fn_006F1CE0(local_c->field_1F3F,0,PTR_s_DESCRIPTOR_0079c110,(int *)&local_8,0);
    if (DAT_0080877e == '\0') {
      *(undefined4 *)&local_c->field_0x2121 = 0xffffffff;
      DAT_00808aab = 0xffffffff;
    }
    else {
      *(undefined4 *)&local_c->field_0x2121 = 0;
      DAT_00808aab = 0;
      DAT_00808aa8 = DAT_0080734b;
    }
    DAT_00809958 = DAT_008087be;
    DAT_0080995c = local_94;
    puVar12 = (byte *)(local_d8);
    puVar17 = (byte *)&DAT_00809960;
    memmove(puVar17, puVar12, 0x20); /* compiler REP MOVS byte copy */
    iVar8 = 0;
    if (g_dArray_0080C4C7 != nullptr) {
      st::fn_006B5570(g_dArray_0080C4C7);
    }
    g_dArray_0080C4C7 =
         (DArrayTy *)
         st::fn_0071AA10(local_c->field_1F3F,PTR_s_DESCRIPTION_0079c108,0);
    if (g_dArray_0080C4C7 == nullptr) {
      g_dArray_0080C4C7 = st::fn_006B54F0(nullptr,10,10);
    }
    if (g_dArray_0080C4CB != nullptr) {
      st::fn_006B5570(g_dArray_0080C4CB);
    }
    g_dArray_0080C4CB =
         (DArrayTy *)
         st::fn_0071AA10(local_c->field_1F3F,PTR_s_OBJECTIVES_0079c10c,0);
    if (g_dArray_0080C4CB == nullptr) {
      g_dArray_0080C4CB = st::fn_006B54F0(nullptr,10,10);
    }
    pcVar14_mg2 = PTR_s_TITLE_MISSION_0079c104;
    pcVar15 = &CHAR_00h_0080c3c3;
    for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
      pcVar15[0] = '\0';
      pcVar15[1] = '\0';
      pcVar15[2] = '\0';
      pcVar15[3] = '\0';
      pcVar15 = pcVar15 + 4;
    }
    local_8 = &CHAR_00h_0080c3c3;
    puVar7 = st::fn_006F1CE0(local_c->field_1F3F,0xc,pcVar14_mg2,(int *)&local_8,0);
    if ((puVar7 == nullptr) || (CHAR_00h_0080c3c3 == '\0')) {
      st::fn_0072E730
                ((byte *)&CHAR_00h_00853de4,nullptr,nullptr,local_228,nullptr);
      uVar9 = 0xffffffff;
      pbVar13 = local_228;
      do {
        pbVar18 = pbVar13;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pbVar18 = pbVar13 + 1;
        bVar2 = *pbVar13;
        pbVar13 = pbVar18;
      } while (bVar2 != 0);
      uVar9 = ~uVar9;
      pbVar13 = pbVar18 + -uVar9;
      pbVar18 = (byte *)&CHAR_00h_0080c3c3;
      memmove(pbVar18, pbVar13, uVar9); /* compiler REP MOVS byte copy */
    }
    local_c->field_1F47 = 1;
    if (((DAT_0080877e != '\0') && (DAT_008067a0 != '\0')) && (g_int_00811764 != nullptr)) {
      puVar1 = &local_c->array_00BC[0xc].field_0x1df;
      st::fn_006B6160(st::pointer_boundary_cast<char *>(puVar1),(int)(g_int_00811764 + 6));
      local_c->field_1A7F = 1;
      local_c->field_1A80 = DAT_008087c6;
      local_c->field_1A81 = (char)(DAT_008087c2 >> 1);
      /* ST_CALLSITE[005C7EE9]: CALL dword ptr [0x0085bde8] */
      st::external_00000080((LPSTR)&local_18,st::mutable_c_string("%08x"),DAT_0080995c);
      local_c->field_1A82 = local_18;
      local_c->field_1A86 = local_14;
      st::fn_0072E340(&local_c->field_1A8A,&CHAR_00h_0080c3c3,0x1d5);
      local_c->field_1C5E = 0;
      /* ST_CALLSITE[005C7F28]: CALL dword ptr [0x0085c070] */
      st::external_0000010A((CFsgsConnection *)&DAT_00802a90,4,st::pointer_boundary_cast<char *>(puVar1));
    }
  }
  /* ST_CALLSITE[005C7F32]: CALL dword ptr [EDX + 0x28] */
  (*local_c->vtable->PrepPlList)((SettMapSTy *)local_c);
  if (g_tagBITMAPINFO_00811758 != nullptr) {
    st::fn_006AB060(&g_tagBITMAPINFO_00811758);
  }
  /* ST_CALLSITE[005C7F4C]: CALL 0x004049d5; direct=004049D5 SettMapTy::PaintSettMap */
  st::fn_004049D5(local_c,'\0');
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8A60((byte *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C,
                 0xfffffffe,g_cursorClass_00802A30->field_0034,g_cursorClass_00802A30->field_0038);
      g_currentExceptionFrame = local_8c.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_8c.previous;
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
void __fastcall st::fn_005CCC30(AnonShape_005CCC30_E8B603E2 *param_1)

{
  int iVar1;

  iVar1 = *(int *)&param_1[0x9b].field_0x14;
  param_1->field_002D = 0x20;
  if (iVar1 != 0) {
    param_1->field_0031 = 1;
    st::fn_006E6080(param_1,2,iVar1,(undefined4 *)&param_1->field_0x1d);
  }
  if (g_startSystem_0081176C->field_0550 != 0) {
    param_1->field_0031 = 1;
    st::fn_006E6080(param_1,2,g_startSystem_0081176C->field_0550,(undefined4 *)&param_1->field_0x1d);
  }
  if (g_startSystem_0081176C->field_054C != 0) {
    param_1->field_002D = 0x29;
    param_1->field_0031 = 9;
    st::fn_006E6080(param_1,2,g_startSystem_0081176C->field_054C,(undefined4 *)&param_1->field_0x1d);
  }
  st::fn_00405DD5((AnonShape_005C5CA0_A6776207 *)param_1);
  return;
}

// 005CCD00 FUN_005ccd00
#line 4 "decomp/ST.exe/functions/005CCD00/decomp.c"
void __fastcall st::fn_005CCD00(AnonShape_005CCD00_F1FA07E9 *param_1)

{
  if (param_1->field_21FC != 0) {
    param_1->field_002D = 0x20;
    param_1->field_0031 = 0;
    st::fn_006E6080(param_1,2,param_1->field_21FC,(undefined4 *)&param_1->field_0x1d);
  }
  if (g_startSystem_0081176C->field_054C != 0) {
    param_1->field_002D = 0x20;
    param_1->field_0031 = 0;
    st::fn_006E6080(param_1,2,g_startSystem_0081176C->field_054C,(undefined4 *)&param_1->field_0x1d);
    param_1->field_002D = 0x29;
    param_1->field_0031 = 0x19;
    st::fn_006E6080(param_1,2,g_startSystem_0081176C->field_054C,(undefined4 *)&param_1->field_0x1d);
  }
  if (g_startSystem_0081176C->field_0550 != 0) {
    param_1->field_002D = 0x20;
    param_1->field_0031 = 0;
    st::fn_006E6080(param_1,2,g_startSystem_0081176C->field_0550,(undefined4 *)&param_1->field_0x1d);
  }
  st::fn_0040337D((AnonShape_005C5EB0_D4E7C108 *)param_1);
  return;
}

