#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0058.cpp

// 005800E0 FUN_005800e0
#line 4 "decomp/ST.exe/functions/005800E0/decomp.c"
void __thiscall st::fn_005800E0(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  RecoveredRecordView_004E0250_21BF6808 *pRVar4;

  /* ST_CALLSITE[005800F4]: CALL 0x00402973; direct=00402973 STResourceC::SetResource */
  st::fn_00402973(static_cast<STResourceC *>(this),STField<int>(this,0x259) + param_1,1);
  if (STField<int>(this,0x25d) == 1) {
    sVar1 = STField<short>(this,0x245);
    sVar2 = STField<short>(this,0x24d);
    sVar3 = STField<short>(this,0x249);
    if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
       (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))) {
      pRVar4 = nullptr;
    }
    else {
      pRVar4 = reinterpret_cast<RecoveredRecordView_004E0250_21BF6808 *>(STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0]);
    }
    if (pRVar4->field_0018 == STField<int>(this,0x269)) {
      st::fn_00405EE8(pRVar4);
    }
  }
  return;
}

// 005801C0 FUN_005801c0
#line 4 "decomp/ST.exe/functions/005801C0/decomp.c"
void __thiscall st::fn_005801C0(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  RecoveredRecordView_004E0250_21BF6808 *pRVar4;

  /* ST_CALLSITE[005801D4]: CALL 0x00402973; direct=00402973 STResourceC::SetResource */
  st::fn_00402973(static_cast<STResourceC *>(this),STField<int>(this,0x259) - param_1,1);
  if (STField<int>(this,0x25d) == 1) {
    sVar1 = STField<short>(this,0x245);
    sVar2 = STField<short>(this,0x24d);
    sVar3 = STField<short>(this,0x249);
    if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
       (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))) {
      pRVar4 = nullptr;
    }
    else {
      pRVar4 = reinterpret_cast<RecoveredRecordView_004E0250_21BF6808 *>(STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0]);
    }
    if (pRVar4->field_0018 == STField<int>(this,0x269)) {
      st::fn_00405EE8(pRVar4);
    }
  }
  return;
}

// 00580380 FUN_00580380
#line 4 "decomp/ST.exe/functions/00580380/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00580D30 -> 00580380 @ 00580D86; STResourceC::sub_00580D30 this; stable alias ESI

   [STPrototypeApplier] Propagated return.
   Evidence: 00580380 returns return of sub_006E60A0 @ 005803A6 */

int __fastcall st::fn_00580380(STResourceC *param_1)

{
  int iVar1;
  uint local_24 [3];
  uint local_18;
  uint local_14;
  uint local_10;
  local_10 = param_1->field_0008;
  local_18 = 0;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(param_1,local_24);
  return iVar1;
}

// 005803C0 FUN_005803c0
#line 1 "decomp/ST.exe/functions/005803C0/decomp.c"

/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_005803C0(void)

{
  return;
}

// 005803E0 FUN_005803e0
#line 4 "decomp/ST.exe/functions/005803E0/decomp.c"
/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=3, scalar_uses=0; sites=005803E3 dereference: TEST byte ptr [ESI +
   0x261],0x1 | 0058041E dereference: MOV EAX,dword ptr [ESI + 0x261] | 00580427 dereference: MOV
   dword ptr [ESI + 0x261],EAX */

void __fastcall st::fn_005803E0(void *param_1)

{
  if ((STField<byte>(param_1,0x261) & 1) == 0) {
    /* ST_CALLSITE[00580403]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    st::fn_00405240((STT3DSprC *)((int)param_1 + 0x1d5),0xe,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[00580419]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    st::fn_00405240((STT3DSprC *)((int)param_1 + 0x1d5),0xd,g_playSystem_00802A38->field_00E4);
    STField<uint>(param_1,0x261) = STField<uint>(param_1,0x261) | 1;
  }
  return;
}

// 00580450 FUN_00580450
#line 4 "decomp/ST.exe/functions/00580450/decomp.c"
undefined4 __cdecl
st::fn_00580450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint local_2c [5];
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  memset(local_2c, 0, 0x28); /* compiler bulk-zero initialization */
  local_18 = param_1;
  local_14 = param_2;
  local_c = param_5;
  local_8 = param_4;
  local_2c[0] = 0x5a;
  local_2c[1] = 0xff;
  local_2c[2] = 2;
  local_2c[3] = 1;
  local_10 = param_3;
  /* ST_CALLSITE[005804B6]: CALL dword ptr [EDX + 0x8] */
  g_playSystem_00802A38->vfunc_8(0x10b,nullptr,reinterpret_cast<int *>(&param_1),(short)local_2c,0);
  return param_1;
}

// 005804F0 FUN_005804f0
#line 4 "decomp/ST.exe/functions/005804F0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004E0040 -> 005804F0 @ 004E0114; zero-filled partial register load at 004E0108 |
   004E0250 -> 005804F0 @ 004E030B; zero-filled partial register load at 004E02FF

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 005804F0 -> 00580FF0 @ 0058053D

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005804F0(void *this,undefined4 param_1,ushort param_2,ushort param_3)

{
  uint uVar1;

  STField<undefined4>(this,0x269) = param_1;
  uVar1 = STField<uint>(this,0x255);
  STField<undefined4>(this,0x25d) = 1;
  if ((0xdb < uVar1) && ((uVar1 < 0xdf || (uVar1 == 0xe0)))) {
    if (0x14 < g_playSystem_00802A38->field_00E4) {
      st::fn_00404F7F(param_2,param_3);
    }
    st::fn_004045BB();
  }
  return;
}

// 00580570 FUN_00580570
#line 4 "decomp/ST.exe/functions/00580570/decomp.c"
void __fastcall st::fn_00580570(RecoveredRecordView_00580570_55CB0282 *param_1)

{
  uint uVar1;

  param_1->field_025D = 0;
  param_1->field_0269 = 0;
  uVar1 = param_1->field_0255;
  if ((0xdb < uVar1) && ((uVar1 < 0xdf || (uVar1 == 0xe0)))) {
    st::fn_004015B9();
    st::fn_0040109B(param_1);
  }
  return;
}

// 005808E0 FUN_005808e0
#line 4 "decomp/ST.exe/functions/005808E0/decomp.c"
undefined4 __fastcall st::fn_005808E0(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1 + 0x21d) == 0) && (*(int *)(param_1 + 0x25d) != 2)) {
    return 1;
  }
  return 0;
}

// 00580910 FUN_00580910
#line 4 "decomp/ST.exe/functions/00580910/decomp.c"
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00580910_param_2Enum. Cases:
   CASE_DC=220;CASE_DD=221;CASE_DE=222;CASE_E0=224

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0044C130 -> 00580910 @ 0044C376

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0044C130 -> 00580910 @ 0044C376; STAllPlayersC::GetTOBJImage parameter param_1 */

void __cdecl
st::fn_00580910(int param_1,Global_sub_00580910_param_2Enum param_2,int param_3,undefined4 *param_4,
            char *param_5,undefined1 *param_6,STAllPlayersC_GetTOBJImage_param_2Enum *param_7)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;

  *param_4 = 0;
  *param_5 = '\0';
  *param_6 = 0x1d;
  *param_7 = 0;
  if ((param_3 == 0xe) || (param_3 == 0xc)) {
    switch(param_2) {
    case CASE_DC:
      *param_4 = 0;
      return;
    case CASE_DD:
      pcVar4 = st::mutable_c_string("rc276_c0");
      break;
    case CASE_DE:
    case CASE_E0:
      pcVar4 = &CHAR_r_007cb2a8;
      break;
    default:
      goto switchD_0058094e_caseD_df;
    }
    uVar2 = 0xffffffff;
    do {
      pcVar5 = pcVar4;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar5 + -uVar2;
    memmove(param_5, pcVar4, uVar2); /* compiler REP MOVS byte copy */
    *param_4 = st::machine_word_boundary_cast<undefined4>(PTR_00806774);
  }
switchD_0058094e_caseD_df:
  return;
}

// 005809E0 FUN_005809e0
#line 4 "decomp/ST.exe/functions/005809E0/decomp.c"
undefined4 __cdecl st::fn_005809E0(short param_1,short param_2,int param_3,int param_4)

{
  STWorldObject *this;
  short sVar1;
  int iVar2;
  int iVar3;
  short sVar4;

  sVar4 = (short)param_3;
  iVar2 = st::fn_00404D3B(param_1,param_2,sVar4);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_3 != 0) {
    sVar1 = sVar4 + -1;
    if (param_1 < 0) {
      return 1;
    }
    if ((((param_1 < g_worldGrid.sizeX) && (-1 < param_2)) && (param_2 < g_worldGrid.sizeY)) &&
       (((-1 < sVar1 && (sVar1 < g_worldGrid.sizeZ)) &&
        (STGridAt3D(g_pathingGrid, param_1, param_2, sVar1) != -1)))) {
      return 0;
    }
  }
  if (((param_1 < 0) || (g_worldGrid.sizeX <= param_1)) ||
     (((param_2 < 0 ||
       (((g_worldGrid.sizeY <= param_2 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)))) ||
      (this = STGridAt3D(g_worldGrid, param_1, param_2, sVar4).objects[0], this == nullptr)))) {
    return 1;
  }
  /* ST_CALLSITE[00580AD0]: CALL dword ptr [EAX + 0x2c] */
  iVar3 = this->GetObjectTypeId();
  if (iVar3 != 0x39) {
    if (iVar3 == 0x4f) {
      if (param_4 != 0xde) {
        return 0;
      }
      return 1;
    }
    if (iVar3 != 0x5e) {
      return 0;
    }
  }
  if (param_4 != 0xdd) {
    return 0;
  }
  return 1;
}

// 00580DC0 FUN_00580dc0
#line 4 "decomp/ST.exe/functions/00580DC0/decomp.c"
undefined4 __fastcall st::fn_00580DC0(STJellyGunC *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  RecoveredRecordView_004E0250_21BF6808 *pRVar4;
  int iVar5;
  uint uVar6;
  uVar6 = 0;

  iVar5 = st::fn_00402040((short)*(undefined4 *)&param_1->field_0x245,
                             (short)*(undefined4 *)&param_1->field_0x249,
                             *(int *)&param_1->field_0x24d,*(int *)&param_1->field_0x255);
  if (iVar5 != 0) {
    /* ST_CALLSITE[00580DFE]: CALL 0x00403cd8; direct=00403CD8 STAllPlayersC::RegisterDeposit */
    iVar5 = st::fn_00403CD8(g_allPlayers_007FA174,0xffff,param_1);
    if (iVar5 != 0) {

      st::fn_00404449(reinterpret_cast<STResourceC *>(param_1));
      return 0;
    }
    *(undefined4 *)&param_1->field_0x25d = 0;

    st::fn_00402C4D((int)param_1);
    sVar1 = *(short *)&param_1->field_0x24d;
    sVar2 = *(short *)&param_1->field_0x249;
    sVar3 = *(short *)&param_1->field_0x245;
    uVar6 = 1;
    if (((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
        ((sVar2 < g_worldGrid.sizeY && (-1 < sVar1)))) &&
       ((sVar1 < g_worldGrid.sizeZ &&
        (pRVar4 = reinterpret_cast<RecoveredRecordView_004E0250_21BF6808 *>(STGridAt3D(g_worldGrid, sVar3, sVar2, sVar1).objects[0]), pRVar4 != nullptr)))
       ) {
      /* ST_CALLSITE[00580EA0]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
      iVar5 = STStructuralVirtualCall<undefined4>(pRVar4, 0x2C);
      /* ST_CALLSITE[00580EAC]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
      if (((iVar5 != 0x39) && (iVar5 = STStructuralVirtualCall<undefined4>(pRVar4, 0x2C), iVar5 != 0x4f)) &&
         /* ST_CALLSITE[00580EB8]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
         (iVar5 = STStructuralVirtualCall<undefined4>(pRVar4, 0x2C), iVar5 != 0x5e)) {
        return 1;
      }
      st::fn_00405EE8(pRVar4);
    }
  }
  return uVar6;
}

// 00580F50 FUN_00580f50
#line 1 "decomp/ST.exe/functions/00580F50/decomp.c"

void st::fn_00580F50(void)

{
  int iVar1;
  STMessage *pSVar2;
  STMessage local_24;

  if (g_aiBossClass_008117BC != nullptr) {
    pSVar2 = &local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar2->unknown_00 = 0;
      pSVar2 = reinterpret_cast<STMessage *>(&pSVar2->unknown_04);
    }
    local_24.id = 0x5ddf;
    /* ST_CALLSITE[00580F82]: CALL dword ptr [EAX] */
    g_aiBossClass_008117BC->GetMessage(&local_24);
  }
  return;
}

// 00580FA0 FUN_00580fa0
#line 1 "decomp/ST.exe/functions/00580FA0/decomp.c"

void st::fn_00580FA0(void)

{
  int iVar1;
  STMessage *pSVar2;
  STMessage local_24;

  if (g_aiBossClass_008117BC != nullptr) {
    pSVar2 = &local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar2->unknown_00 = 0;
      pSVar2 = reinterpret_cast<STMessage *>(&pSVar2->unknown_04);
    }
    local_24.id = 0x5de0;
    /* ST_CALLSITE[00580FD2]: CALL dword ptr [EAX] */
    g_aiBossClass_008117BC->GetMessage(&local_24);
  }
  return;
}

// 00580FF0 FUN_00580ff0
#line 1 "decomp/ST.exe/functions/00580FF0/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005804F0 -> 00580FF0 @ 0058053D; FUN_005804f0 parameter param_2 */

void st::fn_00580FF0(ushort param_1,word param_2)

{
  int iVar1;
  STMessage *pSVar2;
  STMessage local_24;

  if (g_aiBossClass_008117BC != nullptr) {
    pSVar2 = &local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar2->unknown_00 = 0;
      pSVar2 = reinterpret_cast<STMessage *>(&pSVar2->unknown_04);
    }
    local_24.arg1.words.high = param_2;
    local_24.arg1.words.low = param_1;
    local_24.id = 0x5de1;
    /* ST_CALLSITE[00581032]: CALL dword ptr [EAX] */
    g_aiBossClass_008117BC->GetMessage(&local_24);
  }
  return;
}

// 00581060 FUN_00581060
#line 1 "decomp/ST.exe/functions/00581060/decomp.c"

void st::fn_00581060(void)

{
  int iVar1;
  STMessage *pSVar2;
  STMessage local_24;

  if (g_aiBossClass_008117BC != nullptr) {
    pSVar2 = &local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar2->unknown_00 = 0;
      pSVar2 = reinterpret_cast<STMessage *>(&pSVar2->unknown_04);
    }
    local_24.id = 0x5de2;
    /* ST_CALLSITE[00581092]: CALL dword ptr [EAX] */
    g_aiBossClass_008117BC->GetMessage(&local_24);
  }
  return;
}

// 00581120 FUN_00581120
#line 4 "decomp/ST.exe/functions/00581120/decomp.c"
/* [STPrototypeApplier] Propagated parameter 7.
   Evidence: 004C5F30 -> 00581120 @ 004C6001; zero-filled partial register load at 004C5FEE */

undefined4 __cdecl
st::fn_00581120(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,ushort param_8)

{
  uint local_34 [5];
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  ushort local_8;

  memset(local_34, 0, 0x2e); /* compiler bulk-zero initialization */
  local_20 = param_1;
  local_34[1] = param_6;
  local_18 = param_3;
  local_10 = param_5;
  local_c = param_7;
  local_1c = param_2;
  local_8 = param_8;
  local_34[0] = 0x104;
  local_34[2] = 0;
  local_34[3] = 1;
  local_14 = param_4;
  /* ST_CALLSITE[00581195]: CALL dword ptr [EDX + 0x8] */
  g_playSystem_00802A38->vfunc_8(0x138,nullptr,reinterpret_cast<int *>(&param_6),(short)local_34,0);
  return param_6;
}

// 005811C0 FUN_005811c0
#line 4 "decomp/ST.exe/functions/005811C0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 005811C0 returns return of sub_006E60A0 @ 005811E6 */

int __fastcall st::fn_005811C0(RecoveredRecord_005811C0_696D31CF *param_1)

{
  int iVar1;
  uint local_24 [3];
  uint local_18;
  uint local_14;
  uint local_10;
  local_10 = param_1->field_0008;
  local_18 = 0;
  local_14 = 10;

  iVar1 = st::fn_006E60A0(param_1,local_24);
  return iVar1;
}

// 00581200 FUN_00581200
#line 4 "decomp/ST.exe/functions/00581200/decomp.c"
/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=4, scalar_uses=0; sites=00581206 dereference: MOV EDX,dword ptr [ECX +
   0x1f5] | 0058120E dereference: MOV ESI,dword ptr [ECX + 0x1ed] | 00581216 dereference: MOV
   EBX,dword ptr [ECX + 0x1f9] | 00581231 dereference: MOV EDI,dword ptr [ECX + 0x1f1] */

void __fastcall st::fn_00581200(void *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  STWorldObject *pSVar4;
  void *this;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  AnonShape_00581200_BFD82E5E *pAVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  short sVar16;
  bool bVar17;
  int local_54;
  int local_4c;
  int local_44;
  int *local_40;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  AnonShape_00581200_BFD82E5E *local_c;
  short local_8;
  char local_5;

  iVar10 = STField<int>(param_1,0x1f5) - STField<int>(param_1,0x1ed) >> 1;
  local_1c = 0;
  iVar11 = iVar10 + 3;
  iVar12 = STField<int>(param_1,0x1f9) - STField<int>(param_1,0x1f1) >> 1;
  iVar15 = iVar12 + 3;
  if (iVar15 < iVar11) {
    iVar15 = iVar11;
  }
  iVar11 = STField<int>(param_1,0x1f5) + 3;
  local_40 = (int *)(STField<int>(param_1,0x1ed) + -3);
  if (g_worldGrid.sizeX <= iVar11) {
    iVar11 = g_worldGrid.sizeX + -1;
  }
  if ((int)local_40 < 0) {
    local_40 = nullptr;
  }
  local_24 = STField<int>(param_1,0x1f9) + 3;
  local_20 = STField<int>(param_1,0x1f1) + -3;
  iVar14 = (int)g_worldGrid.sizeY;
  if (iVar14 <= local_24) {
    iVar14 = iVar14 + -1;
    local_24 = iVar14;
  }
  if (local_20 < 0) {
    local_20 = 0;
  }
  sVar13 = STField<short>(param_1,0x1ed) + (short)iVar10;
  local_28 = STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(iVar14)), (uint16_t)(sVar13));
  sVar16 = STField<short>(param_1,0x1f1) + (short)iVar12;
  local_2c = STReplaceLowWord((uint32_t)(param_1), (uint16_t)(sVar16));
  local_10 = (int)sVar16;
  local_c = static_cast<AnonShape_00581200_BFD82E5E *>(param_1);
  if ((((sVar13 <= iVar11) && (local_10 <= local_24)) && ((int)local_40 <= (int)sVar13)) &&
     (local_20 <= local_10)) {
    local_18 = 0;
    do {
      iVar10 = local_18;
      if ((((-1 < sVar13) && (sVar13 < g_worldGrid.sizeX)) &&
          ((-1 < (short)local_10 &&
           (((short)local_10 < g_worldGrid.sizeY && (sVar16 = (short)local_18, -1 < sVar16)))))) &&
         ((sVar16 < g_worldGrid.sizeZ &&
          ((pSVar4 = STGridAt3D(g_worldGrid, sVar13, local_10, sVar16).objects[0],
           pSVar4 != nullptr &&
           (((((pSVar4->value_20 == 1000 || (pSVar4->value_20 == 0x14)) &&
              /* ST_CALLSITE[00581381]: CALL dword ptr [EAX + 0xf0]; [STIndirectCallsiteApplier] exact slot 0xF0; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
              (iVar12 = pSVar4->vfunc_F0(), pAVar8 = local_c, iVar12 != 0))
             && (st::machine_word_boundary_cast<uint>(pSVar4[1].vtable) < st::machine_word_boundary_cast<uint>((STWorldObjectVTable *)0x8))) &&
            ((g_playSystem_00802A38 == nullptr ||
             (g_bulkInitializedRecords_008087C7[(int)pSVar4[1].vtable].field_0022 < 8)))))))))) {
        this = (void *)local_c->field_0010;
        if (STField<char>(this,0x146f) == '\0') {

          iVar10 = st::fn_00405D8F(this,*(byte *)&pSVar4[1].vtable,local_c->field_0024);
          bVar17 = iVar10 < 0;
        }
        else {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          local_5 = *(char *)((uint)local_c->field_0024 * 0x51 + 0x11ca + (int)this);
          bVar17 = local_5 !=
                   *(char *)((uint)*(byte *)&pSVar4[1].vtable * 0x51 + 0x11ca + (int)this);
        }
        iVar10 = local_18;
        if ((bVar17) &&
           /* ST_CALLSITE[00581430]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
           (iVar12 = pSVar4->vfunc_F8(), iVar10 = local_18, iVar12 != 0)) {
          *(STWorldObject **)(pAVar8->field_020B + local_1c * 4) = pSVar4;
          local_1c = local_1c + 1;
          if (pAVar8->field_01FD <= local_1c) goto cf_break_loop_00581775;
        }
      }
      local_18 = iVar10 + 1;
    } while (local_18 < 5);
  }
  local_18 = 0;
  do {
    iVar10 = (short)local_28 + 1;
    local_10 = (short)local_2c + 1;
    local_44 = 1;
    local_30 = 0;
    local_34 = 3;
    local_4c = DAT_007cb2dc;
    local_38 = DAT_007cb2e8;
cf_continue_loop_005814A2:
    iVar10 = iVar10 + local_4c;
    local_10 = local_10 + local_38;
    sVar13 = (short)iVar10 - (short)local_28;
    iVar12 = (int)sVar13;
    if (sVar13 < 0) {
      iVar12 = -iVar12;
    }
    local_14 = iVar10;
    if (iVar12 <= local_44) {
      sVar13 = (short)local_10 - (short)local_2c;
      iVar12 = (int)sVar13;
      if (sVar13 < 0) {
        iVar12 = -iVar12;
      }
      if (local_44 < iVar12) goto LAB_005814e2;
      goto LAB_00581545;
    }
LAB_005814e2:
    bVar17 = false;
    local_30 = local_30 + 1;
    if (local_30 < 4) {
      iVar10 = iVar10 - local_4c;
      local_10 = local_10 - local_38;
      bVar17 = true;
LAB_00581518:
      local_34 = local_34 + 1;
      if (3 < local_34) {
        local_34 = 0;
      }
      local_4c = (&DAT_007cb2dc)[local_30];
      local_38 = (&DAT_007cb2dc)[local_34];
      local_14 = iVar10;
      if (bVar17) goto cf_continue_loop_005814A2;
LAB_00581545:
      iVar10 = local_14;
      if (((((iVar11 < local_14) || (local_24 < local_10)) || (local_14 < (int)local_40)) ||
          (((((local_10 < local_20 || (sVar13 = (short)local_14, sVar13 < 0)) ||
             ((g_worldGrid.sizeX <= sVar13 ||
              ((sVar16 = (short)local_10, sVar16 < 0 || (g_worldGrid.sizeY <= sVar16)))))) ||
            (sVar9 = (short)local_18, sVar9 < 0)) ||
           ((g_worldGrid.sizeZ <= sVar9 ||
            (pSVar4 = STGridAt3D(g_worldGrid, sVar13, sVar16, sVar9).objects[0],
            pSVar4 == nullptr)))))) ||
         ((((pSVar4->value_20 != 1000 && (pSVar4->value_20 != 0x14)) ||
           /* ST_CALLSITE[005815F6]: CALL dword ptr [EAX + 0xf0]; [STIndirectCallsiteApplier] exact slot 0xF0; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
           ((iVar12 = pSVar4->vfunc_F0(), iVar12 == 0 ||
            (st::machine_word_boundary_cast<uint>((STWorldObjectVTable *)0x7) < st::machine_word_boundary_cast<uint>(pSVar4[1].vtable))))) ||
          ((g_playSystem_00802A38 != nullptr &&
           (7 < g_bulkInitializedRecords_008087C7[(int)pSVar4[1].vtable].field_0022))))))
      goto cf_continue_loop_005814A2;
      bVar1 = *(byte *)&pSVar4[1].vtable;
      bVar2 = local_c->field_0024;
      iVar12 = local_c->field_0010;
      if (STField<char>(iVar12,0x146F) != '\0') {
        local_5 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar12);
        local_14 = 0;
        bVar17 = local_5 != *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar12);
        goto LAB_00581728;
      }
      if (bVar1 == bVar2) {
LAB_0058171d:
        iVar12 = 0;
      }
      else {
        uVar6 = (uint)bVar1;
        uVar7 = (uint)bVar2;
        cVar3 = *(char *)(uVar7 + uVar6 * 8 + 0x142f + iVar12);
        if ((cVar3 == '\0') &&
           (iVar10 = local_14, *(char *)(uVar6 + uVar7 * 8 + 0x142f + iVar12) == '\0')) {
          iVar12 = -2;
        }
        else if ((cVar3 == '\x01') &&
                (iVar10 = local_14, *(char *)(uVar6 + uVar7 * 8 + 0x142f + iVar12) == '\0')) {
          iVar12 = -1;
        }
        else if ((cVar3 == '\0') &&
                (iVar10 = local_14, *(char *)(uVar6 + uVar7 * 8 + 0x142f + iVar12) == '\x01')) {
          iVar12 = 1;
        }
        else {
          if ((cVar3 != '\x01') || (*(char *)(uVar6 + uVar7 * 8 + 0x142f + iVar12) != '\x01'))
          goto LAB_0058171d;
          iVar12 = 2;
        }
      }
      bVar17 = iVar12 < 0;
LAB_00581728:
      /* ST_CALLSITE[00581734]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
      if ((bVar17) && (iVar12 = pSVar4->vfunc_F8(), iVar12 != 0)) {
        local_1c = local_1c + 1;
        *(STWorldObject **)(local_c->field_020B + -4 + local_1c * 4) = pSVar4;
        if (local_c->field_01FD <= local_1c) goto cf_break_loop_00581775;
      }
      goto cf_continue_loop_005814A2;
    }
    local_44 = local_44 + 1;
    local_30 = 0;
    if (local_44 <= iVar15) goto LAB_00581518;
    local_18 = local_18 + 1;
    if (4 < local_18) {
cf_break_loop_00581775:
      iVar15 = local_c->field_01FD;
      while (iVar15 = iVar15 + -1, -1 < iVar15) {
        iVar10 = *(int *)(local_c->field_0207 + iVar15 * 4);
        if (((iVar10 != 0) && (STField<int>(iVar10,0x23D) != 0)) &&
           (((int)STField<short>(iVar10,0x47) < (int)local_40 ||
            (((iVar11 < STField<short>(iVar10,0x47) || (STField<short>(iVar10,0x49) < local_20)) ||
             (local_24 < STField<short>(iVar10,0x49))))))) {
          STField<undefined4>(iVar10,0x241) = 0xff;
          STField<undefined4>(iVar10,0x23D) = 0;
        }
      }
      local_24 = 0;
      if (0 < local_1c) {
        do {
          iVar11 = local_24;
          local_54 = -1;
          iVar15 = 0x1fffff;
          st::fn_004031E3(*(void **)(local_c->field_020B + local_24 * 4),&local_28,
                             reinterpret_cast<short *>(&local_2c),&local_8);
          iVar10 = local_c->field_01FD + -1;
          if (-1 < iVar10) {
            local_40 = (int *)(local_c->field_0207 + iVar10 * 4);
            do {
              iVar11 = *local_40;
              if ((iVar11 != 0) && (STField<int>(iVar11,0x23D) == 0)) {
                sVar13 = STField<short>(iVar11,0x41) - (short)local_28;
                iVar12 = (int)sVar13;
                if (sVar13 < 0) {
                  iVar12 = -iVar12;
                }
                sVar13 = STField<short>(iVar11,0x43) - (short)local_2c;
                iVar14 = (int)sVar13;
                if (sVar13 < 0) {
                  iVar14 = -iVar14;
                }
                sVar13 = STField<short>(iVar11,0x45) - local_8;
                iVar11 = (int)sVar13;
                if (sVar13 < 0) {
                  iVar11 = -iVar11;
                }
                iVar12 = iVar11 + iVar14 + iVar12;
                if (iVar12 < iVar15) {
                  iVar15 = iVar12;
                  local_54 = iVar10;
                }
              }
              iVar10 = iVar10 + -1;
              local_40 = local_40 + -1;
            } while (-1 < iVar10);
            iVar11 = local_24;
            if (local_54 != -1) {
              iVar15 = *(int *)(local_c->field_0207 + local_54 * 4);
              iVar10 = *(int *)(local_c->field_020B + local_24 * 4);
              if (STField<int>(iVar15,0x235) != 2) {
                uVar5 = STField<undefined4>(iVar10,0x24);
                STField<undefined2>(iVar15,0x245) = STField<undefined2>(iVar10,0x32);
                STField<undefined4>(iVar15,0x241) = uVar5;
                STField<undefined4>(iVar15,0x23D) = 1;
                STField<undefined4>(iVar15,0x252) = 0;
              }
            }
          }
          local_24 = iVar11 + 1;
        } while (local_24 < local_1c);
      }
      return;
    }
  } while( true );
}

// 00581B80 FUN_00581b80
#line 4 "decomp/ST.exe/functions/00581B80/decomp.c"
void __fastcall st::fn_00581B80(RecoveredRecord_00581B80_E3538055 *param_1)

{
  param_1->field_01D5 = param_1->field_01D5 | 1;
  return;
}

// 00581BC0 FUN_00581bc0
#line 4 "decomp/ST.exe/functions/00581BC0/decomp.c"
uint __fastcall st::fn_00581BC0(int param_1)

{
  uint uVar1;

  if (g_playSystem_00802A38->field_00E4 % 0x3c == 0) {
    uVar1 = st::fn_004020E5((void *)param_1);
    return uVar1;
  }
  return g_playSystem_00802A38->field_00E4 / 0x3c;
}

// 00582280 CreateSTJellyMan
#line 4 "decomp/ST.exe/functions/00582280/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA95C>00403B11

   [STObjectFactoryApplier] Central object factory for 0x0138 (ST_OBJECT_ST_JELLY_MAN).
   Evidence: registry[71] at 007CA958 stores type 0x0138 and executable pointer 00403B11; allocation
   size 531 uniquely matches /STJellyManC */

STJellyManC * __cdecl st::fn_00582280(void)

{
  STJellyManC *pSVar1;

  /* ST_CALLSITE[00582285]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STJellyManC; signature=__stdcall;pointer:/STJellyManC;/uint */
  pSVar1 = st::pointer_boundary_cast<STJellyManC *>(st::fn_006B04D0(0x213));
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00402388(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 005822B0 FUN_005822b0
#line 4 "decomp/ST.exe/functions/005822B0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004CCC10 -> 005822B0 @ 004CD079; zero-filled partial register load at 004CD070 */

void __thiscall st::fn_005822B0(void *this,undefined4 param_1,ushort param_2)

{
  STField<ushort>(this,0x205) = param_2;
  STField<undefined4>(this,0x1dd) = param_1;
  return;
}

// 005822E0 FUN_005822e0
#line 4 "decomp/ST.exe/functions/005822E0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (16), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00581200 @ 0058141A -> read as EAX on
   every CFG path | 00668F50 @ 006690D6 -> read as EAX on every CFG path | 00668F50 @ 00669185 ->
   read as EAX on every CFG path | 00668F50 @ 00669234 -> read as EAX on every CFG path | 00668F50 @
   006692F5 -> read as EAX on every CFG path | 00668F50 @ 006693A0 -> read as EAX on every CFG path
   | 00668F50 @ 00669446 -> read as EAX on every CFG path | 00668F50 @ 0066950B -> read as EAX on
   every CFG path | 00668F50 @ 006696D9 -> read as EAX on every CFG path | 00668F50 @ 00669973 ->
   read as EAX on every CFG path | 00668F50 @ 00669B8A -> read as EAX on every CFG path | 00668F50 @
   00669D23 -> read as EAX on every CFG path | 00668F50 @ 00669FD2 -> read as EAX on every CFG path
   | 00668F50 @ 0066A212 -> read as EAX on every CFG path | 00668F50 @ 0066A4C1 -> read as EAX on
   every CFG path | 006799B0 @ 00679A50 -> read as EAX on every CFG path */

int __thiscall st::fn_005822E0(void *this,byte param_1,byte param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;

  if (param_1 != param_2) {
    uVar2 = (uint)param_1;
    uVar3 = (uint)param_2;
    cVar1 = *(char *)(uVar3 + uVar2 * 8 + 0x142f + (int)this);
    if ((cVar1 == '\0') && (*(char *)(uVar2 + uVar3 * 8 + 0x142f + (int)this) == '\0')) {
      return -2;
    }
    if ((cVar1 == '\x01') && (*(char *)(uVar2 + uVar3 * 8 + 0x142f + (int)this) == '\0')) {
      return -1;
    }
    if ((cVar1 == '\0') && (*(char *)(uVar2 + uVar3 * 8 + 0x142f + (int)this) == '\x01')) {
      return 1;
    }
    if ((cVar1 == '\x01') && (*(char *)(uVar2 + uVar3 * 8 + 0x142f + (int)this) == '\x01')) {
      return 2;
    }
  }
  return 0;
}

// 005823B0 FUN_005823b0
#line 4 "decomp/ST.exe/functions/005823B0/decomp.c"
undefined4 st::fn_005823B0(void)

{
  return 0xed;
}

// 00582460 FUN_00582460
#line 4 "decomp/ST.exe/functions/00582460/decomp.c"
/* [STPrototypeApplier] Propagated parameter 10.
   Evidence: 00581AC0 -> 00582460 @ 00581B44; zero-filled partial register load at 00581B06 */

undefined4 __cdecl
st::fn_00582460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,uint param_11,undefined2 param_12)

{
  uint local_44 [5];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  ushort local_8;
  memset(local_44, 0, 0x3e); /* compiler bulk-zero initialization */
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  local_24 = param_4;
  local_20 = param_5;
  local_44[1] = param_9;
  local_1c = param_6;
  local_18 = param_7;
  local_14 = param_8;
  local_c = param_11;
  local_44[0] = 0xfa;
  local_44[2] = 0;
  local_44[3] = 1;
  local_10 = 0;
  local_8 = param_12;
  /* ST_CALLSITE[005824E7]: CALL dword ptr [EDX + 0x8] */
  g_playSystem_00802A38->vfunc_8(0x137,nullptr,reinterpret_cast<int *>(&param_9),(short)local_44,0);
  return param_9;
}

// 00583E00 FUN_00583e00
#line 4 "decomp/ST.exe/functions/00583E00/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA954>00405858

   [STObjectFactoryApplier] Central object factory for 0x0137 (ST_OBJECT_TYPE_0137).
   Evidence: registry[70] at 007CA950 stores type 0x0137 and executable pointer 00405858; allocation
   size 660 has no unique current class-layout match */

void * __cdecl st::fn_00583E00(void)

{
  STJellyGunC *pSVar1;

  /* ST_CALLSITE[00583E05]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STJellyGunC; signature=__stdcall;pointer:/STJellyGunC;/uint */
  pSVar1 = st::pointer_boundary_cast<STJellyGunC *>(st::fn_006B04D0(0x294));
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_0040562D(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 005844B0 FUN_005844b0
#line 4 "decomp/ST.exe/functions/005844B0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=005844B3 MOV AX,word ptr
   [EBP + 0xc] */

void __thiscall st::fn_005844B0(void *this,undefined4 param_1,ushort param_2)

{
  STField<ushort>(this,0x292) = param_2;
  STField<undefined4>(this,0x25a) = param_1;
  return;
}

// 005845B0 FUN_005845b0
#line 4 "decomp/ST.exe/functions/005845B0/decomp.c"
/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=3, ignored=0,
   unknown=0 */

int __cdecl
st::fn_005845B0(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
            int *param_8,int *param_9,uint param_10)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  short sVar9;

  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((st::storage_bit_cast<int>(static_cast<uint32_t>((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f))) < param_3) &&
     (param_10 = param_10 * 0x41c64e6d + 0x3039, (param_10 & 0x10000) == 0)) {
LAB_00584666:
    if ((int)param_2 < 0) {
      if ((param_10 * 0x4e6d + 0x3039 & 0x10000) == 0) {
        piVar2 = reinterpret_cast<int *>(&DAT_007cb658);
      }
      else {
        piVar2 = reinterpret_cast<int *>(&DAT_007cb610);
      }
    }
    else if ((param_10 * 0x4e6d + 0x3039 & 0x10000) == 0) {
      piVar2 = reinterpret_cast<int *>(&DAT_007cb634);
    }
    else {
      piVar2 = reinterpret_cast<int *>(&DAT_007cb5ec);
    }
  }
  else {
    if ((int)param_2 < 1) {
      uVar1 = (uint)(param_2 != 0);
      if (uVar1 == 1) {
        piVar2 = reinterpret_cast<int *>(&DAT_007cb6c4);
        if ((param_10 * 0x4e6d + 0x3039 & 0x10000) == 0) {
          piVar2 = reinterpret_cast<int *>(&DAT_007cb6e8);
        }
        goto LAB_005846f7;
      }
      if (uVar1 == 0) goto LAB_00584666;
      if (uVar1 != 0xffffffff) {
        piVar2 = reinterpret_cast<int *>(&DAT_007cb5c8);
        goto LAB_005846f7;
      }
    }
    if ((param_10 * 0x4e6d + 0x3039 & 0x10000) == 0) {
      piVar2 = reinterpret_cast<int *>(&DAT_007cb6a0);
    }
    else {
      piVar2 = reinterpret_cast<int *>(&DAT_007cb67c);
    }
  }
LAB_005846f7:
  if (piVar2 == nullptr) {
    piVar2 = reinterpret_cast<int *>(&DAT_007cb5c8);
  }
  auto param_10_after_write = 0; /* compiler stack-slot lifetime split */
  do {
    iVar3 = (*piVar2 + param_1 * 9) * 6;
    iVar6 = *(short *)(&DAT_007cb418 + iVar3) + param_4;
    iVar5 = *(short *)(&DAT_007cb41c + iVar3) + param_6;
    iVar3 = *(short *)(&DAT_007cb41a + iVar3) + param_5;
    if (((((-1 < iVar6) && (-1 < iVar3)) && (-1 < iVar5)) &&
        ((iVar6 < g_worldGrid.sizeX && (iVar3 < g_worldGrid.sizeY)))) && (iVar5 < g_worldGrid.sizeZ)
       ) {
      sVar7 = (short)iVar6;
      sVar8 = (short)iVar3;
      sVar9 = (short)iVar5;
      iVar4 = st::fn_00404D3B(sVar7,sVar8,sVar9);
      if ((iVar4 != 0) &&
         (((sVar7 < 0 || (g_worldGrid.sizeX <= sVar7)) ||
          ((((sVar8 < 0 ||
             (((g_worldGrid.sizeY <= sVar8 || (sVar9 < 0)) || (g_worldGrid.sizeZ <= sVar9)))) ||
            (STGridAt3D(g_worldGrid, sVar7, sVar8, sVar9).objects[0] == nullptr)) &&
           ((((g_worldGrid.sizeX <= sVar7 || (sVar8 < 0)) ||
             ((g_worldGrid.sizeY <= sVar8 || ((sVar9 < 0 || (g_worldGrid.sizeZ <= sVar9)))))) ||
            (STGridAt3D(g_worldGrid, sVar7, sVar8, sVar9).objects[1] == nullptr)))))))) {
        *param_7 = iVar6;
        *param_8 = iVar3;
        *param_9 = iVar5;
        return 1;
      }
    }
    param_10_after_write = param_10_after_write + 1;
    piVar2 = piVar2 + 1;
    if (8 < (int)param_10_after_write) {
      return 0;
    }
  } while( true );
}

// 00584950 FUN_00584950
#line 4 "decomp/ST.exe/functions/00584950/decomp.c"
undefined4 st::fn_00584950(void)

{
  return 0xec;
}

// 00584A30 FUN_00584a30
#line 4 "decomp/ST.exe/functions/00584A30/decomp.c"
/* [STPrototypeApplier] Propagated parameter 8.
   Evidence: 004C4550 -> 00584A30 @ 004C4AAE; zero-filled partial register load at 004C4A71 */

undefined4 __cdecl
st::fn_00584A30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            ushort param_9)

{
  uint local_38 [5];
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  ushort local_c;

  memset(local_38, 0, 0x32); /* compiler bulk-zero initialization */
  local_24 = param_1;
  local_38[1] = param_6;
  local_18 = param_4;
  local_1c = param_3;
  local_10 = param_8;
  local_20 = param_2;
  local_c = param_9;
  local_38[0] = 0xaa;
  local_38[2] = 0;
  local_38[3] = 1;
  local_14 = param_5;
  /* ST_CALLSITE[00584AA5]: CALL dword ptr [EDX + 0x8] */
  g_playSystem_00802A38->vfunc_8(0x130,nullptr,reinterpret_cast<int *>(&param_6),(short)local_38,0);
  return param_6;
}

// 00584AD0 FUN_00584ad0
#line 4 "decomp/ST.exe/functions/00584AD0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00584AD0 returns return of sub_006E60A0 @ 00584AF6 */

int __fastcall st::fn_00584AD0(RecoveredRecord_00584AD0_6EDDB383 *param_1)

{
  int iVar1;
  uint local_24 [3];
  uint local_18;
  uint local_14;
  uint local_10;
  local_10 = param_1->field_0008;
  local_18 = 0;
  local_14 = 10;

  iVar1 = st::fn_006E60A0(param_1,local_24);
  return iVar1;
}

// 00584B10 FUN_00584b10
#line 4 "decomp/ST.exe/functions/00584B10/decomp.c"
void __fastcall st::fn_00584B10(RecoveredRecordView_00584B10_465CC529 *param_1)

{
  byte *this;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  this = &param_1->field_0x1d5;
  /* ST_CALLSITE[00584B1E]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
  st::fn_00404264(reinterpret_cast<STT3DSprC *>(this),0xe);
  st::fn_00402A90(reinterpret_cast<STT3DSprC *>(this));
  /* ST_CALLSITE[00584B3B]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  st::fn_00404183(reinterpret_cast<STT3DSprC *>(this),8,PTR_00806774,st::mutable_c_string("Expb22"),CASE_1D);
  /* ST_CALLSITE[00584B52]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  st::fn_00404183(reinterpret_cast<STT3DSprC *>(this),10,PTR_00806774,st::mutable_c_string("expmask3"),CASE_1D);
  uVar4 = 0x45;
  uVar3 = 0x5a;
  iVar2 = 1;

  uVar1 = st::fn_004052CC(reinterpret_cast<STT3DSprC *>(this));

  st::fn_006EA4E0(param_1->field_0211,uVar1,iVar2,uVar3,uVar4);
  /* ST_CALLSITE[00584B74]: CALL 0x00403233; direct=00403233 STT3DSprC::sub_004ACFE0 */
  st::fn_00403233(reinterpret_cast<STT3DSprC *>(this),'\n');
  /* ST_CALLSITE[00584B84]: CALL 0x004044ee; direct=004044EE STT3DSprC::sub_004ACF20 */
  st::fn_004044EE(reinterpret_cast<STT3DSprC *>(this),PTR_008032b8,0x10);
  /* ST_CALLSITE[00584B99]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
  st::fn_00405240(reinterpret_cast<STT3DSprC *>(this),10,g_playSystem_00802A38->field_00E4);
  /* ST_CALLSITE[00584BAF]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
  st::fn_00405240(reinterpret_cast<STT3DSprC *>(this),8,g_playSystem_00802A38->field_00E4);
  /* ST_CALLSITE[00584BB8]: CALL dword ptr [EDX + 0xd8]; [STIndirectCallsiteApplier] exact slot 0xD8; mode=structural-presentation; signature=__thiscall;/void;pointer:/void */
  STStructuralVirtualCall<void>(param_1, 0xD8);
  /* ST_CALLSITE[00584BCF]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  iVar2 = st::fn_00404183(reinterpret_cast<STT3DSprC *>(this),9,PTR_00806764,st::mutable_c_string("expl_bbt0"),CASE_1D);
  if (iVar2 == 0) {
    /* ST_CALLSITE[00584BDC]: CALL 0x00402761; direct=00402761 STT3DSprC::sub_004AD070 */
    st::fn_00402761(reinterpret_cast<STT3DSprC *>(this),9);
    /* ST_CALLSITE[00584BE5]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    uVar3 = st::fn_004022AC(reinterpret_cast<STT3DSprC *>(this),'\t');
    param_1->field_0255 = (char)uVar3;
    param_1->field_0256 = DAT_007cb8e0;
    param_1->field_0257 = 0;
  }
  return;
}

// 00584C50 FUN_00584c50
#line 4 "decomp/ST.exe/functions/00584C50/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00584C50(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 **ppuVar3;
  undefined4 *local_40 [8];
  uint local_20 [3];
  ushort local_14;
  ushort local_12;
  if (param_1 != nullptr) {
    memset(local_20, 0, 0x1c); /* compiler bulk-zero initialization */
    iVar1 = 0;
    local_14 = STField<undefined2>(this,0x284);
    local_20[0] = DAT_007e656c;
    local_12 = STField<undefined2>(this,0x280);
    local_20[2] = STField<undefined4>(this,0x25c);
    local_40[2] = (undefined4 *)param_1[2];
    ppuVar3 = local_40;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppuVar3 = nullptr;
      ppuVar3 = ppuVar3 + 1;
    }
    local_40[5] = local_20;
    local_20[1] = 0xa3;
    local_40[3] = (undefined4 *)0x2;
    local_40[4] = (undefined4 *)0x110;
    /* ST_CALLSITE[00584CC9]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4 */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)*param_1)(local_40);
  }
  return;
}

// 00584D10 FUN_00584d10
#line 4 "decomp/ST.exe/functions/00584D10/decomp.c"
void __fastcall st::fn_00584D10(RecoveredRecordView_00584D10_FD6C656C *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint local_64 [6];
  short local_4a;
  short sStack_48;
  short local_46;
  short sStack_44;
  short local_42;
  short local_40;
  ushort local_3e;
  uint local_3c;
  byte local_38;
  uint local_37;
  ushort local_33;
  int local_c;
  int local_8;

  iVar6 = param_1->field_0251;
  uVar1 = param_1->field_025C;
  puVar7 = local_64;
  local_8 = iVar6;
  for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_33 = param_1->field_0284;
  local_38 = 0;
  local_37 = param_1->field_0280;
  local_3c = 0xa3;
  local_64[0] = 0x28;
  local_64[3] = 1;
  local_c = 0;
  local_64[1] = uVar1;
  do {
    local_3e = (undefined2)iVar6;
    st::fn_004031E3(param_1,reinterpret_cast<uint *>(&local_4a),&sStack_48,&local_46);
    if (local_c < 4) {

      uVar2 = st::fn_006AFF50(iVar6);

      uVar3 = st::fn_006AFF5B(local_8);
      iVar4 = uVar2 * 0xc9;
      iVar6 = iVar4 / 3;
      local_4a = local_4a +
                 (((short)(iVar6 / 10000) + (short)(iVar6 >> 0x1f)) -
                 (short)((longlong)iVar6 * 0x68db8bad >> 0x3f));
      iVar6 = uVar3 * 0xc9;
      iVar5 = (int)((ulonglong)((longlong)iVar6 * 0x55555555) >> 0x20) + uVar3 * -0xc9;
      iVar5 = (iVar5 >> 1) - (iVar5 >> 0x1f);
      sStack_48 = sStack_48 +
                  (((short)(iVar5 / 10000) + (short)(iVar5 >> 0x1f)) -
                  (short)((longlong)iVar5 * 0x68db8bad >> 0x3f));
      sStack_44 = (((short)(iVar4 / 10000) + (short)(iVar4 >> 0x1f)) -
                  (short)((longlong)iVar4 * 0x68db8bad >> 0x3f)) + local_4a;
      local_42 = sStack_48 -
                 (((short)(iVar6 / 10000) + (short)(iVar6 >> 0x1f)) -
                 (short)((longlong)iVar6 * 0x68db8bad >> 0x3f));
      local_40 = local_46 + 0x32;
      iVar6 = local_8;
    }
    else {
      local_46 = local_46 + -0x1e;
      local_40 = 0;
      uVar2 = param_1->field_001C * 0x41c64e6d + 0x3039;
      param_1->field_001C = uVar2;
      sStack_44 = (short)((ulonglong)(uVar2 >> 0x10) % 0x193) + -0xc9 + local_4a;
      uVar2 = param_1->field_001C * 0x41c64e6d + 0x3039;
      param_1->field_001C = uVar2;
      local_42 = (short)((ulonglong)(uVar2 >> 0x10) % 0x193) + -0xc9 + sStack_48;
    }
    if ((((-1 < local_4a) && (-1 < sStack_48)) && (-1 < local_46)) &&
       (((short)((local_4a / 0xc9 + (local_4a >> 0xf)) -
                (short)((longlong)(int)local_4a * 0x28c1979 >> 0x3f)) < g_worldGrid.sizeX &&
        ((short)((sStack_48 / 0xc9 + (sStack_48 >> 0xf)) -
                (short)((longlong)(int)sStack_48 * 0x28c1979 >> 0x3f)) < g_worldGrid.sizeY)))) {
      /* ST_CALLSITE[00584F0A]: CALL 0x00401bc2; direct=00401BC2 STPlaySystemC::CreateGameObject */
      st::fn_00401BC2(g_playSystem_00802A38,0x28,0,0,st::machine_word_boundary_cast<undefined4>(local_64),0);
      if (0xc9 < local_46) {
        local_40 = local_46 + -0xc9;
        /* ST_CALLSITE[00584F32]: CALL 0x00401bc2; direct=00401BC2 STPlaySystemC::CreateGameObject */
        st::fn_00401BC2(g_playSystem_00802A38,0x28,0,0,st::machine_word_boundary_cast<undefined4>(local_64),0);
      }
      iVar6 = (iVar6 + 0x5a) % 0x168;
      local_8 = iVar6;
    }
    local_c = local_c + 1;
  } while (local_c < 5);
  iVar6 = param_1->field_0251 + -0xf;
  param_1->field_0251 = iVar6;
  if (iVar6 < 0) {
    param_1->field_0251 = 0x168;
  }
  return;
}

// 00585020 FUN_00585020
#line 4 "decomp/ST.exe/functions/00585020/decomp.c"
void __fastcall st::fn_00585020(RecoveredRecordView_00585020_EFC427BB *param_1)

{
  int iVar1;
  byte *this;
  STWorldObject *pSVar2;
  int iVar4;
  uint uVar5;
  int iVar3;
  int iVar5;
  int local_EAX_906;
  int iVar7;
  int iVar6;
  short sVar7;
  int iVar8;
  int local_14;
  short local_10;
  short local_8;

  sVar7 = param_1->field_0041;
  sVar7 = STBiasedDiv16(sVar7, 0xc9); /* exact signed 16-bit grid-index division */
  param_1->field_0047 = sVar7;
  param_1->field_005B = sVar7;
  sVar7 = param_1->field_0043;
  sVar7 = STBiasedDiv16(sVar7, 0xc9); /* exact signed 16-bit grid-index division */
  param_1->field_0049 = sVar7;
  param_1->field_005D = sVar7;
  sVar7 = param_1->field_0045;
  sVar7 = STBiasedDiv16(sVar7, 200); /* exact signed 16-bit grid-index division */
  param_1->field_004B = sVar7;
  param_1->field_005F = sVar7;

  iVar4 = st::fn_00401A3C(reinterpret_cast<RecoveredRecordView_0041C710_A35B7121 *>(param_1));
  this = &param_1->field_0x1d5;
  if (iVar4 == 0) {
    iVar4 = 0;

    uVar5 = st::fn_004052CC(reinterpret_cast<STT3DSprC *>(this));

    st::fn_006EABF0(param_1->field_0211,uVar5,iVar4);

    iVar3 = st::fn_004050D8(reinterpret_cast<RecoveredRecordView_0041CAF0_18493751 *>(param_1));
    if (iVar3 == 1) {
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 1;

    uVar5 = st::fn_004052CC(reinterpret_cast<STT3DSprC *>(this));

    st::fn_006EABF0(param_1->field_0211,uVar5,iVar4);
    iVar4 = 1;
  }

  iVar5 = st::fn_004052CC(reinterpret_cast<STT3DSprC *>(this));
  st::fn_006E6870(param_1->field_0211,iVar5,iVar4);
  sVar7 = param_1->field_0041;
  iVar4 = (int)sVar7;
  if (sVar7 < 0) {
    local_10 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1
    ;
  }
  else {
    local_10 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f);
  }
  sVar7 = param_1->field_0043;
  iVar6 = (int)sVar7;
  if (sVar7 < 0) {
    local_8 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_8 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f);
  }
  sVar7 = param_1->field_0045;
  local_14 = STBiasedDiv16(sVar7, 200); /* exact signed 16-bit grid-index division */
  iVar8 = param_1->field_0231;
  sVar7 = (short)local_14;
  if (iVar8 == 0) {
    iVar6 = g_playSystem_00802A38->field_00E4 - param_1->field_023D;
    iVar4 = (param_1->field_024D * iVar6 * iVar6) / 22000;

    if ((local_14 < 5) && (iVar7 = st::fn_00404D3B(local_10,local_8,sVar7), iVar7 == 0)) {
      if ((((-1 < local_10) &&
           (((local_10 < g_worldGrid.sizeX && (-1 < local_8)) && (local_8 < g_worldGrid.sizeY)))) &&
          (((-1 < sVar7 && (sVar7 < g_worldGrid.sizeZ)) &&
           (pSVar2 = STGridAt3D(g_worldGrid, local_10, local_8, sVar7).objects[0],
           pSVar2 != nullptr)))) && (pSVar2->value_20 != 0xaa)) {
        st::fn_004054DE(param_1,reinterpret_cast<undefined4 *>(&pSVar2->vtable));
        st::fn_00401730(param_1,(short)param_1->field_0041,(short)param_1->field_0043,
                           0x464);
      }
      param_1->field_0231 = 2;
      st::fn_00402B03(reinterpret_cast<RecoveredRecordView_00584B10_465CC529 *>(param_1));
      return;
    }
    iVar8 = DAT_007cb8e4 >> 1;
    if (iVar8 < iVar6) {
      iVar1 = PTR_00806724->entryCount + -1;
      iVar8 = ((iVar6 - iVar8) * iVar1) / iVar8;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      if (PTR_00806724->entryCount <= iVar8) {
        /* ST_CALLSITE[00585572]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
        st::fn_0040116D(reinterpret_cast<STT3DSprC *>(this),0,0);
        iVar8 = iVar1;
      }
      param_1->field_0241 = iVar8;
      /* ST_CALLSITE[0058558E]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
      st::fn_0040116D
                (reinterpret_cast<STT3DSprC *>(this),PTR_00806724->entries[iVar8],(int)PTR_00806724->field_002C);
    }
    sVar7 = (short)iVar4;
    if (iVar4 + 0x28 < 0) {
      /* ST_CALLSITE[005855BB]: CALL 0x00403107; direct=00403107 sub_00416240 */
      st::fn_00403107(param_1,*(ushort *)&param_1->field_0x278,*(short *)&param_1->field_0x27c,
                   sVar7 + param_1->field_0045 + 0x28);
      param_1->field_0251 = 0x168;
      param_1->field_0235 = (int)param_1->field_0045;
      *(int *)&param_1->field_0x274 = *(int *)&param_1->field_0x274 + 1;
      param_1->field_023D = g_playSystem_00802A38->field_00E4;
      iVar4 = (int)((ulonglong)((longlong)param_1->field_024D * -0x2aaaaaab) >> 0x20);
      param_1->field_024D = iVar4 - (iVar4 >> 0x1f);
      if (g_visibleClass_00802A88 != nullptr) {
        sVar7 = param_1->field_0043;
        iVar4 = STBiasedDiv16(sVar7, 0xc9); /* exact signed 16-bit grid-index division */
        sVar7 = param_1->field_0041;
        iVar6 = STBiasedDiv16(sVar7, 0xc9); /* exact signed 16-bit grid-index division */
        /* ST_CALLSITE[00585686]: CALL 0x00401fd2; direct=00401FD2 VisibleClassTy::VisHoleCreate */
        st::fn_00401FD2
                  (g_visibleClass_00802A88,iVar6,iVar4,nullptr,
                   *(uint *)&param_1->field_0x24,(undefined *)0x5,500);
      }
      param_1->field_0231 = 1;
      /* ST_CALLSITE[00585699]: CALL dword ptr [EAX + 0xd8]; [STIndirectCallsiteApplier] exact slot 0xD8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
      STStructuralVirtualCall<undefined4>(param_1, 0xD8);
      return;
    }
    uVar5 = (uint)(ushort)(param_1->field_0249 + sVar7 + param_1->field_0045);
  }
  else {
    if (iVar8 != 1) {
      if (iVar8 != 2) {
        return;
      }

      uVar5 = st::fn_004042AF(this,'\b');
      if ((param_1->field_0255 != '\0') && (uVar5 == param_1->field_0256)) {
        /* ST_CALLSITE[00585231]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        st::fn_00405240(reinterpret_cast<STT3DSprC *>(this),9,g_playSystem_00802A38->field_00E4);
        st::fn_00404854(this,9);
      }
      /* ST_CALLSITE[00585243]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar4 = st::fn_004022AC(reinterpret_cast<STT3DSprC *>(this),'\b');
      if (uVar5 == iVar4 - 1U) {
        /* ST_CALLSITE[00585251]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        st::fn_00404264(reinterpret_cast<STT3DSprC *>(this),8);
      }
      /* ST_CALLSITE[0058525A]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar4 = st::fn_004022AC(reinterpret_cast<STT3DSprC *>(this),'\n');
      if (uVar5 == iVar4 - 1U) {
        /* ST_CALLSITE[00585268]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        st::fn_00404264(reinterpret_cast<STT3DSprC *>(this),10);
      }
      if (param_1->field_0255 != '\0') {
        /* ST_CALLSITE[0058527B]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
        iVar4 = st::fn_004022AC(reinterpret_cast<STT3DSprC *>(this),'\t');

        iVar6 = st::fn_004042AF(this,'\t');
        if (iVar6 == iVar4 + -1) {
          /* ST_CALLSITE[00585294]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
          st::fn_00404264(reinterpret_cast<STT3DSprC *>(this),9);
          param_1->field_0255 = 0;
        }
      }
      /* ST_CALLSITE[005852A7]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar4 = st::fn_004022AC(reinterpret_cast<STT3DSprC *>(this),'\b');
      if ((uVar5 == iVar4 - 1U) && (param_1->field_0255 == '\0')) {

        st::fn_00401DE3(reinterpret_cast<RecoveredRecord_00584AD0_6EDDB383 *>(param_1));
        return;
      }
      /* ST_CALLSITE[005852CD]: CALL dword ptr [EDX + 0xd8]; [STIndirectCallsiteApplier] exact slot 0xD8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
      STStructuralVirtualCall<undefined4>(param_1, 0xD8);
      return;
    }
    iVar8 = g_playSystem_00802A38->field_00E4 - param_1->field_023D;
    if (iVar8 == 1) {
      st::fn_00402117(param_1,iVar4,iVar6,param_1->field_0286);
    }
    iVar4 = PTR_00806724->entryCount + -1;
    iVar4 = iVar4 - (iVar4 * iVar8) / (DAT_007cb8e4 >> 1);
    if (iVar4 < 1) {
      param_1->field_0241 = 0;
      /* ST_CALLSITE[00585354]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
      st::fn_0040116D(reinterpret_cast<STT3DSprC *>(this),0,0);

      st::fn_00403FDA(this,'\x0e');
    }
    else {
      param_1->field_0241 = iVar4;
      /* ST_CALLSITE[0058533D]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
      st::fn_0040116D
                (reinterpret_cast<STT3DSprC *>(this),*(uint *)((int)PTR_00806724 + iVar4 * 4 + 0x30),
                 (int)PTR_00806724->field_002C);
    }
    uVar5 = (int)param_1->field_0045 - 5;
    if ((param_1->field_0045 < 0x44c) && (0x1b < st::storage_bit_cast<int>(static_cast<uint32_t>(param_1->field_0235 - uVar5)))) {
      st::fn_00404930(reinterpret_cast<RecoveredRecordView_00584D10_FD6C656C *>(param_1));
      param_1->field_0235 = uVar5;
    }
    if ((local_14 < 5) &&

       (local_EAX_906 = st::fn_00404D3B(local_10,local_8,sVar7), local_EAX_906 == 0)) {
      if (((-1 < local_10) &&
          ((((local_10 < g_worldGrid.sizeX && (-1 < local_8)) && (local_8 < g_worldGrid.sizeY)) &&
           ((-1 < sVar7 && (sVar7 < g_worldGrid.sizeZ)))))) &&
         ((pSVar2 = STGridAt3D(g_worldGrid, local_10, local_8, sVar7).objects[0],
          pSVar2 != nullptr && (pSVar2->value_20 != 0xaa)))) {
        st::fn_004054DE(param_1,reinterpret_cast<undefined4 *>(&pSVar2->vtable));
      }
      param_1->field_0231 = 2;
      st::fn_00402B03(reinterpret_cast<RecoveredRecordView_00584B10_465CC529 *>(param_1));
    }
  }
  /* ST_CALLSITE[005856C1]: CALL 0x00403107; direct=00403107 sub_00416240 */
  st::fn_00403107(param_1,param_1->field_0041,param_1->field_0043,(ushort)uVar5);
  /* ST_CALLSITE[005856CA]: CALL dword ptr [EAX + 0xd8]; [STIndirectCallsiteApplier] exact slot 0xD8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  STStructuralVirtualCall<undefined4>(param_1, 0xD8);
  return;
}

// 00585890 FUN_00585890
#line 4 "decomp/ST.exe/functions/00585890/decomp.c"
void __thiscall st::fn_00585890(void *this,int param_1,int param_2,uint param_3)

{
  short sVar1;
  int soundId;
  SoundPosition local_10;

  if (DAT_0080874d == param_3) {
    if (DAT_0080874e == '\x01') {
      soundId = 0xa7;
    }
    else if (DAT_0080874e == '\x02') {
      soundId = 0xa8;
    }
    else if (DAT_0080874e == '\x03') {
      soundId = 0xa9;
    }
    else {
      soundId = 0;
    }
    sVar1 = (short)(param_1 >> 0x1f);
    if (param_1 < 0) {
      local_10.x = (short)(((short)(param_1 / 0xc9) + sVar1) -
                          (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_10.x = (short)(((short)(param_1 / 0xc9) + sVar1) -
                               (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
    }
    sVar1 = (short)(param_2 >> 0x1f);
    if (param_2 < 0) {
      local_10.y = (short)(((short)(param_2 / 0xc9) + sVar1) -
                          (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_10.y = (short)(((short)(param_2 / 0xc9) + sVar1) -
                               (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
    }
    local_10.unknown = STField<int>(this,0x18);
    if (soundId != 0) {
      /* ST_CALLSITE[00585951]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
      st::fn_00404BD8(reinterpret_cast<SoundClassTy *>(&g_sound),SOUND_MODE_6,nullptr,soundId,&local_10,0);
    }
  }
  return;
}

// 005860D0 FUN_005860d0
#line 4 "decomp/ST.exe/functions/005860D0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 005860D0 -> 00568DD0 @ 00586156

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005860D0(void *this,int param_1,int param_2,int soundId)

{
  short sVar1;
  SoundPosition local_10;

  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    local_10.x = (short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.x = (short)(((short)(param_1 / 0xc9) + sVar1) -
                             (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    local_10.y = (short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.y = (short)(((short)(param_2 / 0xc9) + sVar1) -
                             (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  local_10.unknown = STField<int>(this,0x18);
  /* ST_CALLSITE[00586156]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
  st::fn_00404BD8(reinterpret_cast<SoundClassTy *>(&g_sound),SOUND_MODE_2,nullptr,soundId,&local_10,0);
  return;
}

// 005861A0 FUN_005861a0
#line 4 "decomp/ST.exe/functions/005861A0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA92C>004038CD

   [STObjectFactoryApplier] Central object factory for 0x0130 (ST_OBJECT_TYPE_0130).
   Evidence: registry[65] at 007CA928 stores type 0x0130 and executable pointer 004038CD; allocation
   size 650 has no unique current class-layout match */

void * __cdecl st::fn_005861A0(void)

{
  STLBombC *pSVar1;

  /* ST_CALLSITE[005861A5]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STLBombC; signature=__stdcall;pointer:/STLBombC;/uint */
  pSVar1 = st::pointer_boundary_cast<STLBombC *>(st::fn_006B04D0(0x28a));
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00402207(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 005861D0 FUN_005861d0
#line 4 "decomp/ST.exe/functions/005861D0/decomp.c"
undefined4 st::fn_005861D0(void)

{
  return 0xaa;
}

// 00586240 FUN_00586240
#line 4 "decomp/ST.exe/functions/00586240/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004C4550 -> 00586240 @ 004C4F32; MOVSX at 004C4F2C establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004C4550 -> 00586240 @ 004C4F32; MOVSX at 004C4F26 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004C4550 -> 00586240 @ 004C4F32; MOVSX at 004C4F22 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 004C4550 -> 00586240 @ 004C4F32; zero-filled partial register load at 004C4F15 */

undefined4 __cdecl
st::fn_00586240(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,ushort param_7)

{
  uint local_30 [5];
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  ushort local_8;

  memset(local_30, 0, 0x2a); /* compiler bulk-zero initialization */
  local_1c = param_1;
  local_30[1] = param_5;
  local_14 = param_3;
  local_c = param_6;
  local_18 = param_2;
  local_10 = param_4;
  local_30[0] = 0xb4;
  local_30[2] = 0;
  local_30[3] = 1;
  local_8 = param_7;
  /* ST_CALLSITE[005862AF]: CALL dword ptr [EDX + 0x8] */
  g_playSystem_00802A38->vfunc_8(0x131,nullptr,reinterpret_cast<int *>(&param_5),(short)local_30,0);
  return param_5;
}

// 005862E0 FUN_005862e0
#line 4 "decomp/ST.exe/functions/005862E0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 005862E0 returns return of sub_006E60A0 @ 00586306 */

int __fastcall st::fn_005862E0(RecoveredRecord_005862E0_AFF1B07D *param_1)

{
  int iVar1;
  uint local_24 [3];
  uint local_18;
  uint local_14;
  uint local_10;
  local_10 = param_1->field_0008;
  local_18 = 0;
  local_14 = 10;

  iVar1 = st::fn_006E60A0(param_1,local_24);
  return iVar1;
}

// 00586320 FUN_00586320
#line 4 "decomp/ST.exe/functions/00586320/decomp.c"
int * __fastcall st::fn_00586320(RecoveredRecordView_00586320_0792B306 *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  STWorldObject *pSVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  bool bVar14;
  int local_44;
  int local_40;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_c;

  sVar12 = param_1->field_0041;
  iVar13 = STBiasedDiv16(sVar12, 0xc9); /* exact signed 16-bit grid-index division */
  sVar12 = param_1->field_0043;
  local_14 = STBiasedDiv16(sVar12, 0xc9); /* exact signed 16-bit grid-index division */
  param_1->field_0273 = 0;
  param_1->field_026F = 0xff;
  param_1->field_0231 = 1;
  iVar9 = iVar13 + 5;
  local_40 = iVar13 + -5;
  if (g_worldGrid.sizeX <= iVar9) {
    iVar9 = g_worldGrid.sizeX + -1;
  }
  if (local_40 < 0) {
    local_40 = 0;
  }
  iVar10 = local_14 + 5;
  local_44 = local_14 + -5;
  if (g_worldGrid.sizeY <= iVar10) {
    iVar10 = g_worldGrid.sizeY + -1;
  }
  if (local_44 < 0) {
    local_44 = 0;
  }
  if ((((iVar13 <= iVar9) && (local_14 <= iVar10)) && (local_40 <= iVar13)) &&
     (local_44 <= local_14)) {
    local_1c = 0;
    do {
      sVar12 = (short)iVar13;
      if ((((((-1 < sVar12) && (sVar12 < g_worldGrid.sizeX)) &&
            ((-1 < (short)local_14 &&
             (((short)local_14 < g_worldGrid.sizeY && (sVar11 = (short)local_1c, -1 < sVar11))))))
           && (sVar11 < g_worldGrid.sizeZ)) &&
          (((pSVar4 = STGridAt3D(g_worldGrid, sVar12, local_14, sVar11).objects[0],
            pSVar4 != nullptr &&
            (((pSVar4->value_20 == 1000 || (pSVar4->value_20 == 0x14)) &&
             /* ST_CALLSITE[005864BC]: CALL dword ptr [EDX + 0xf0]; [STIndirectCallsiteApplier] exact slot 0xF0; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
             (iVar7 = pSVar4->vfunc_F0(), iVar7 != 0)))) &&
           (st::machine_word_boundary_cast<uint>(pSVar4[1].vtable) < st::machine_word_boundary_cast<uint>((STWorldObjectVTable *)0x8))))) &&
         (((g_playSystem_00802A38 == nullptr ||
           (g_bulkInitializedRecords_008087C7[(int)pSVar4[1].vtable].field_0022 < 8)) &&
          /* ST_CALLSITE[005864F5]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
          (iVar7 = pSVar4->vfunc_F8(), iVar7 != 0)))) {
        bVar1 = *(byte *)&pSVar4[1].vtable;
        bVar2 = param_1->field_0024;
        iVar7 = param_1->field_0010;
        if (STField<char>(iVar7,0x146F) == '\0') {
          if (bVar1 == bVar2) {
            iVar7 = 0;
          }
          else {
            uVar5 = (uint)bVar1;
            uVar6 = (uint)bVar2;
            cVar3 = *(char *)(uVar6 + uVar5 * 8 + 0x142f + iVar7);
            if ((cVar3 == '\0') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\0')) {
              iVar7 = -2;
            }
            else if ((cVar3 == '\x01') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\0')) {
              iVar7 = -1;
            }
            else if ((cVar3 == '\0') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\x01')) {
              iVar7 = 1;
            }
            else if ((cVar3 == '\x01') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\x01'))
            {
              iVar7 = 2;
            }
            else {
              iVar7 = 0;
            }
          }
          bVar14 = iVar7 < 0;
        }
        else {
          bVar14 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar7) !=
                   *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar7);
        }
        if (bVar14) {
          param_1->field_0231 = 0;
          param_1->field_0257 = 0;
          param_1->field_0273 = *(undefined2 *)&pSVar4[1].field_0xe;
          param_1->field_026F = st::machine_word_boundary_cast<undefined4>(pSVar4[1].vtable);
          return (int *)pSVar4;
        }
      }
      local_1c = local_1c + 1;
    } while (local_1c < 5);
  }
  local_1c = 0;
  do {
    local_c = local_14 + 1;
    local_18 = iVar13 + 1;
    local_34 = 1;
    local_24 = 0;
    local_28 = 3;
    local_2c = DAT_007cb95c;
    local_30 = DAT_007cb968;
LAB_00586642:
    local_18 = local_18 + local_2c;
    local_c = local_c + local_30;
    iVar7 = local_18 - iVar13;
    if (iVar7 < 0) {
      iVar7 = iVar13 - local_18;
    }
    if (iVar7 <= local_34) {
      iVar7 = local_c - local_14;
      if (iVar7 < 0) {
        iVar7 = local_14 - local_c;
      }
      if (local_34 < iVar7) goto LAB_0058667b;
      goto LAB_00586713;
    }
LAB_0058667b:
    bVar14 = false;
    local_24 = local_24 + 1;
    if (local_24 < 4) {
      bVar14 = true;
      local_18 = local_18 - local_2c;
      local_c = local_c - local_30;
LAB_005866e6:
      local_28 = local_28 + 1;
      if (3 < local_28) {
        local_28 = 0;
      }
      local_2c = (&DAT_007cb95c)[local_24];
      local_30 = (&DAT_007cb95c)[local_28];
      if (!bVar14) {
LAB_00586713:
        if ((((((local_18 <= iVar9) && (local_c <= iVar10)) && (local_40 <= local_18)) &&
             (((local_44 <= local_c && (sVar12 = (short)local_18, -1 < sVar12)) &&
              ((sVar12 < g_worldGrid.sizeX &&
               ((sVar11 = (short)local_c, -1 < sVar11 && (sVar11 < g_worldGrid.sizeY)))))))) &&
            (((sVar8 = (short)local_1c, -1 < sVar8 &&
              ((sVar8 < g_worldGrid.sizeZ &&
               (pSVar4 = STGridAt3D(g_worldGrid, sVar12, sVar11, sVar8).objects[0],
               pSVar4 != nullptr)))) &&
             (((pSVar4->value_20 == 1000 || (pSVar4->value_20 == 0x14)) &&
              /* ST_CALLSITE[005867BF]: CALL dword ptr [EDX + 0xf0]; [STIndirectCallsiteApplier] exact slot 0xF0; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
              ((iVar7 = pSVar4->vfunc_F0(), iVar7 != 0 &&
               (st::machine_word_boundary_cast<uint>(pSVar4[1].vtable) < st::machine_word_boundary_cast<uint>((STWorldObjectVTable *)0x8))))))))) &&
           ((g_playSystem_00802A38 == nullptr ||
            (g_bulkInitializedRecords_008087C7[(int)pSVar4[1].vtable].field_0022 < 8)))) {
          bVar1 = *(byte *)&pSVar4[1].vtable;
          bVar2 = param_1->field_0024;
          iVar7 = param_1->field_0010;
          if (STField<char>(iVar7,0x146F) == '\0') {
            if (bVar1 == bVar2) {
              iVar7 = 0;
            }
            else {
              uVar5 = (uint)bVar1;
              uVar6 = (uint)bVar2;
              cVar3 = *(char *)(uVar6 + uVar5 * 8 + 0x142f + iVar7);
              if ((cVar3 == '\0') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\0')) {
                iVar7 = -2;
              }
              else if ((cVar3 == '\x01') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\0'))
              {
                iVar7 = -1;
              }
              else if ((cVar3 == '\0') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\x01'))
              {
                iVar7 = 1;
              }
              else if ((cVar3 == '\x01') &&
                      (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\x01')) {
                iVar7 = 2;
              }
              else {
                iVar7 = 0;
              }
            }
            bVar14 = iVar7 < 0;
          }
          else {
            bVar14 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar7) !=
                     *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar7);
          }
          /* ST_CALLSITE[00586906]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
          if ((bVar14) && (iVar7 = pSVar4->vfunc_F8(), iVar7 != 0)) {
            param_1->field_0231 = 0;
            param_1->field_0257 = 0;
            param_1->field_0273 = *(undefined2 *)&pSVar4[1].field_0xe;
            param_1->field_026F = st::machine_word_boundary_cast<undefined4>(pSVar4[1].vtable);
            return (int *)pSVar4;
          }
        }
      }
      goto LAB_00586642;
    }
    local_34 = local_34 + 1;
    local_24 = 0;
    if (local_34 < 6) goto LAB_005866e6;
    local_1c = local_1c + 1;
    if (4 < local_1c) {
      return nullptr;
    }
  } while( true );
}

// 00586AF0 FUN_00586af0
#line 4 "decomp/ST.exe/functions/00586AF0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STTypeFamilyApplier] RETURN_TO_LOCAL_FAMILY.
   Evidence: direct call return copied through registers into this script-owned anonymous stack
   local */

void __fastcall st::fn_00586AF0(int *param_1)

{
  STT3DSprC *this;
  byte bVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  short sVar5;
  uint uVar6;
  int iVar8;
  uint uVar9;
  int iVar7;
  int iVar9;
  STGameObjC *pSVar10;
  STGameObjC *this_00;
  int iVar11;
  uint local_EAX_2124;
  uint local_EAX_2928;
  int local_EAX_3393;
  int iVar12;
  uint uVar8;
  uint local_EAX_6098;
  int iVar13;
  uint local_EAX_6553;
  short sVar14;
  short sVar15;
  short sVar16;
  STWorldObject *pSVar17;
  int *piVar18;
  AnonShape_0041AF40_F59F8577 *pAVar19;
  bool bVar20;
  ushort *puVar21;
  short *psVar22;
  ushort *puVar23;
  AnonShape_0041AF40_F59F8577 local_6c;
  int local_4c;
  int local_48;
  STGameObjC *local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  ushort local_30 [2];
  short local_2c [2];
  ushort local_28 [2];
  int local_24;
  STWorldObject *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  char local_5;

  local_20 = nullptr;
  sVar14 = STField<short>(param_1,0x41);
  sVar14 = STBiasedDiv16(sVar14, 0xc9); /* exact signed 16-bit grid-index division */
  STField<short>(param_1,0x47) = sVar14;
  STField<short>(param_1,0x5b) = sVar14;
  sVar14 = STField<short>(param_1,0x43);
  sVar14 = STBiasedDiv16(sVar14, 0xc9); /* exact signed 16-bit grid-index division */
  STField<short>(param_1,0x49) = sVar14;
  STField<short>(param_1,0x5d) = sVar14;
  sVar14 = STField<short>(param_1,0x45);
  sVar14 = STBiasedDiv16(sVar14, 200); /* exact signed 16-bit grid-index division */
  STField<short>(param_1,0x4b) = sVar14;
  STField<short>(param_1,0x5f) = sVar14;

  iVar8 = st::fn_00401A3C(reinterpret_cast<RecoveredRecordView_0041C710_A35B7121 *>(param_1));
  this = (STT3DSprC *)((int)param_1 + 0x1d5);
  if (iVar8 == 0) {
    iVar8 = 0;

    uVar9 = st::fn_004052CC(this);

    st::fn_006EABF0(STField<void *>(param_1,0x211),uVar9,iVar8);

    iVar7 = st::fn_004050D8(reinterpret_cast<RecoveredRecordView_0041CAF0_18493751 *>(param_1));
    if (iVar7 == 1) {
      iVar8 = 1;
    }
    else {
      iVar8 = 0;
    }
  }
  else {
    iVar8 = 1;

    uVar9 = st::fn_004052CC(this);

    st::fn_006EABF0(STField<void *>(param_1,0x211),uVar9,iVar8);
    iVar8 = 1;
  }

  iVar9 = st::fn_004052CC(this);
  st::fn_006E6870(STField<void *>(param_1,0x211),iVar9,iVar8);
  iVar8 = STField<int>(param_1,0x231);
  if (iVar8 == 0) {
    lVar4 = (longlong)STField<int>(param_1,0x235) * 0xeeff;
    uVar9 = (uint)lVar4;
    STField<uint>(param_1,0x235) =
         (uVar9 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) + (uint)((uVar9 >> 0xf & 1) != 0);
    lVar4 = (longlong)STField<int>(param_1,0x239) * 0xeeff;
    uVar9 = (uint)lVar4;
    local_4c = STField<int>(param_1,0x23d);
    STField<uint>(param_1,0x239) =
         (uVar9 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) + (uint)((uVar9 >> 0xf & 1) != 0);
    uVar9 = (uint)((longlong)local_4c * 0xeeff);
    STField<uint>(param_1,0x23d) =
         (uVar9 >> 0x10 | (int)((ulonglong)((longlong)local_4c * 0xeeff) >> 0x20) << 0x10) +
         (uint)((uVar9 >> 0xf & 1) != 0);
    /* ST_CALLSITE[005877EA]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    local_44 = st::fn_004028BA
                         (g_allPlayers_007FA174,STField<char>(param_1,0x26f),
                          STField<ushort>(param_1,0x273),CASE_1);
    if (local_44 == nullptr) {
LAB_00587844:
      local_44 = reinterpret_cast<STGameObjC *>(st::fn_00405150(reinterpret_cast<RecoveredRecordView_00586320_0792B306 *>(param_1)));
      STField<uint>(param_1,0x253) = g_playSystem_00802A38->field_00E4;
      if ((local_44 == nullptr) || (STField<int>(param_1,0x231) != 0)) {
        STField<undefined4>(param_1,0x26b) = 0;
        STField<undefined4>(param_1,0x267) = 0;
        STField<undefined4>(param_1,0x263) = 0;
        goto LAB_00588350;
      }
      st::fn_004031E3(local_44,(uint *)((int)param_1 + 0x241),(short *)((int)param_1 + 0x243),
                         (short *)((int)param_1 + 0x245));

      local_EAX_3393 =
           st::fn_006ACF0D((int)STField<short>(param_1,0x41),(int)STField<short>(param_1,0x43),
                        (int)STField<short>(param_1,0x45),(int)STField<short>(param_1,0x241),
                        (int)STField<short>(param_1,0x243),(int)STField<short>(param_1,0x245));
    }
    else {
      st::fn_004031E3(local_44,(uint *)((int)param_1 + 0x241),(short *)((int)param_1 + 0x243),
                         (short *)((int)param_1 + 0x245));

      local_EAX_3393 =
           st::fn_006ACF0D((int)STField<short>(param_1,0x41),(int)STField<short>(param_1,0x43),
                        (int)STField<short>(param_1,0x45),(int)STField<short>(param_1,0x241),
                        (int)STField<short>(param_1,0x243),(int)STField<short>(param_1,0x245));
      if (DAT_0081170c < local_EAX_3393) goto LAB_00587844;
    }
    iVar8 = DAT_0081170c - local_EAX_3393;
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    iVar8 = (((iVar8 * iVar8) / 10) * (iVar8 / 10)) / 50000;
    STField<uint>(param_1,0x263) = STField<uint>(param_1,0x263) & 3;
    uVar9 = STField<uint>(param_1,0x26b) & 3;
    STField<uint>(param_1,0x267) = STField<uint>(param_1,0x267) & 3;
    STField<uint>(param_1,0x26b) = uVar9;
    if (local_EAX_3393 != 0) {
      STField<int>(param_1,0x263) =
           (((((int)STField<short>(param_1,0x241) - (int)STField<short>(param_1,0x41)) *
             DAT_0081170c) / local_EAX_3393) * iVar8 * 4) / 0x19640 + STField<int>(param_1,0x263);
      STField<int>(param_1,0x267) =
           (((((int)STField<short>(param_1,0x243) - (int)STField<short>(param_1,0x43)) *
             DAT_0081170c) / local_EAX_3393) * iVar8 * 4) / 0x19640 + STField<int>(param_1,0x267);
      uVar9 = ((((int)STField<short>(param_1,0x245) - (int)STField<short>(param_1,0x45)) *
               DAT_0081170c) / local_EAX_3393) * iVar8 * 4;
      STField<int>(param_1,0x26b) = (int)uVar9 / 0x19640 + STField<int>(param_1,0x26b);
    }
    local_48 = STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(uVar9)), (uint16_t)(STField<short>(param_1,0x41)));
    local_4c = STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(iVar8)), (uint16_t)(STField<short>(param_1,0x43)));
    local_10 = (STField<int>(param_1,0x263) >> 2) +
               (st::storage_bit_cast<int>(static_cast<uint32_t>(STField<int>(param_1,0x235) +
                     (STField<int>(param_1,0x235) >> 0x1f & 0xffffU))) >> 0x10) +
               (int)STField<short>(param_1,0x41);
    local_40 = STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_40)), (uint16_t)(STField<short>(param_1,0x45)));
    local_14 = (STField<int>(param_1,0x267) >> 2) +
               (st::storage_bit_cast<int>(static_cast<uint32_t>(STField<int>(param_1,0x239) +
                     (STField<int>(param_1,0x239) >> 0x1f & 0xffffU))) >> 0x10) +
               (int)STField<short>(param_1,0x43);
    iVar8 = (STField<int>(param_1,0x26b) >> 2) +
            (st::storage_bit_cast<int>(static_cast<uint32_t>(STField<int>(param_1,0x23d) +
                  (STField<int>(param_1,0x23d) >> 0x1f & 0xffffU))) >> 0x10) +
            (st::storage_bit_cast<int>(static_cast<uint32_t>(STField<int>(param_1,0x25b) + (STField<int>(param_1,0x25b) >> 0x1f & 3U)))
            >> 2) + (int)STField<short>(param_1,0x45);
    if (local_10 < 0) {
      local_10 = 0;
    }
    if (local_14 < 0) {
      local_14 = 0;
    }
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    if (g_worldGrid.sizeX * 0xc9 <= local_10) {
      local_10 = g_worldGrid.sizeX * 0xc9 + -1;
    }
    iVar11 = local_10;
    if (g_worldGrid.sizeY * 0xc9 <= local_14) {
      local_14 = g_worldGrid.sizeY * 0xc9 + -1;
    }
    if (g_worldGrid.sizeZ * 200 <= iVar8) {
      iVar8 = g_worldGrid.sizeZ * 200 + -1;
    }
    local_34 = STBiasedDiv16(local_10, 0xc9); /* exact signed 16-bit grid-index division */
    local_38 = STBiasedDiv16(local_14, 0xc9); /* exact signed 16-bit grid-index division */
    local_3c = STBiasedDiv16(iVar8, 200); /* exact signed 16-bit grid-index division */
    param_1[0x9e] = -1;
    local_1c = local_14;
    local_18 = iVar8;
    local_c = local_10;
    if (((((g_playSystem_00802A38->field_00E4 & 1) != 0) && (local_44->field_0047 == local_34)) &&
        (local_44->field_0049 == local_38)) && (local_44->field_004B == local_3c)) {
      /* ST_CALLSITE[00587BE6]: CALL dword ptr [EDX + 0xdc] */
      iVar13 = local_44->vfunc_DC();
      param_1[0x9e] = iVar13;
    }
    if (param_1[0x9e] < 0) {
      sVar14 = STField<short>(param_1,0x41);
      iVar13 = STBiasedDiv16(sVar14, 0xc9); /* exact signed 16-bit grid-index division */
      iVar12 = param_1[0xa4];
      iVar12 = STBiasedDiv16(iVar12, 0xc9); /* exact signed 16-bit grid-index division */
      if (iVar13 == iVar12) {
        sVar14 = STField<short>(param_1,0x43);
        iVar13 = STBiasedDiv16(sVar14, 0xc9); /* exact signed 16-bit grid-index division */
        iVar12 = param_1[0xa5];
        iVar12 = STBiasedDiv16(iVar12, 0xc9); /* exact signed 16-bit grid-index division */
        if (iVar13 != iVar12) goto LAB_00587dde;
        sVar14 = STField<short>(param_1,0x45);
        iVar13 = STBiasedDiv16(sVar14, 200); /* exact signed 16-bit grid-index division */
        iVar12 = param_1[0xa6];
        iVar12 = STBiasedDiv16(iVar12, 200); /* exact signed 16-bit grid-index division */
        if (iVar13 != iVar12) goto LAB_00587dde;
LAB_00587fb9:
        iVar8 = 0;
        pSVar17 = local_20;
      }
      else {
LAB_00587dde:
        sVar14 = (short)local_34;
        if ((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
            ((sVar15 = (short)local_38, sVar15 < 0 ||
             ((g_worldGrid.sizeY <= sVar15 || (sVar16 = (short)local_3c, sVar16 < 0)))))) ||
           ((g_worldGrid.sizeZ <= sVar16 ||
            (pSVar17 = STGridAt3D(g_worldGrid, sVar14, sVar15, sVar16).objects[0],
            local_20 = pSVar17, pSVar17 == nullptr)))) {

          uVar8 = st::fn_00404A3E(iVar11,local_14,iVar8);
          local_20 = (STWorldObject *)(uint)(-1 < (int)uVar8);
          goto LAB_00587fb9;
        }
        if ((pSVar17->value_20 != 0xb4) &&
           /* ST_CALLSITE[00587E71]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
           (iVar8 = pSVar17->vfunc_F8(), iVar8 != 0)) {
          if (((pSVar17->value_20 == 1000) || (pSVar17->value_20 == 0x14)) &&
             ((st::machine_word_boundary_cast<uint>(pSVar17[1].vtable) < st::machine_word_boundary_cast<uint>((STWorldObjectVTable *)0x8) &&
              ((g_playSystem_00802A38 == nullptr ||
               (g_bulkInitializedRecords_008087C7[(int)pSVar17[1].vtable].field_0022 < 8)))))) {
            iVar8 = param_1[4];
            bVar1 = *(byte *)&pSVar17[1].vtable;
            bVar2 = static_cast<byte>(st::machine_word_boundary_cast<uint>(((byte *)param_1)[9]));
            local_4c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_4c)), (uint8_t)(bVar1));
            local_48 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_48)), (uint8_t)(bVar2));
            if (STField<char>(iVar8,0x146F) == '\0') {
              if (bVar1 == bVar2) {
LAB_00587f89:
                iVar8 = 0;
              }
              else {
                uVar9 = (uint)bVar1;
                uVar6 = (uint)bVar2;
                cVar3 = *(char *)(iVar8 + uVar9 * 8 + 0x142f + uVar6);
                if ((cVar3 == '\0') && (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) == '\0')) {
                  iVar8 = -2;
                }
                else if ((cVar3 == '\x01') &&
                        (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) == '\0')) {
                  iVar8 = -1;
                }
                else if ((cVar3 == '\0') &&
                        (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) == '\x01')) {
                  iVar8 = 1;
                }
                else {
                  if ((cVar3 != '\x01') || (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) != '\x01')
                     ) goto LAB_00587f89;
                  iVar8 = 2;
                }
              }
              bVar20 = iVar8 < 0;
            }
            else {
              bVar20 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar8) !=
                       *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar8);
            }
            if (bVar20) goto LAB_00587f98;
          }
          goto LAB_00587fb9;
        }
LAB_00587f98:
        iVar8 = 0;
        pSVar17 = nullptr;
      }
      do {
        if (pSVar17 == nullptr) {
          if (iVar8 < 7) {
            iVar8 = local_18;
            if (local_18 < 0) {
              iVar8 = 0;
              STField<int>(param_1,0x25f) = -STField<int>(param_1,0x25f);
            }
            /* ST_CALLSITE[00588301]: CALL 0x00403107; direct=00403107 sub_00416240 */
            st::fn_00403107(param_1,(ushort)local_c,(short)local_1c,(ushort)iVar8);
          }
          break;
        }
        switch(iVar8) {
        case 0:
        case 2:
          local_c = (int)STField<short>(param_1,0x41);
          break;
        case 1:
          local_1c = (int)STField<short>(param_1,0x43);
          local_c = local_10;
          break;
        case 3:
          local_c = local_10;
          goto LAB_00588002;
        case 4:
          local_c = (int)STField<short>(param_1,0x41);
LAB_00588002:
          local_1c = local_14;
          local_18 = (st::storage_bit_cast<int>(static_cast<uint32_t>(STField<int>(param_1,0x25b) +
                           (STField<int>(param_1,0x25b) >> 0x1f & 3U))) >> 2) +
                     (int)STField<short>(param_1,0x45);
          break;
        case 5:
          local_1c = (int)STField<short>(param_1,0x43);
          local_c = local_10;
          local_18 = (st::storage_bit_cast<int>(static_cast<uint32_t>(STField<int>(param_1,0x25b) +
                           (STField<int>(param_1,0x25b) >> 0x1f & 3U))) >> 2) +
                     (int)STField<short>(param_1,0x45);
          break;
        case 6:
          local_10 = (int)STField<short>(param_1,0x41);
          local_14 = (int)STField<short>(param_1,0x43);
        }
        local_38 = iVar8 + 1;
        local_34 = STBiasedDiv16(local_c, 0xc9); /* exact signed 16-bit grid-index division */
        sVar14 = STBiasedDiv16(local_1c, 0xc9); /* exact signed 16-bit grid-index division */
        sVar15 = STBiasedDiv16(local_18, 200); /* exact signed 16-bit grid-index division */
        sVar16 = (short)local_34;
        if ((((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) || (sVar14 < 0)) ||
           (((g_worldGrid.sizeY <= sVar14 || (sVar15 < 0)) ||
            ((g_worldGrid.sizeZ <= sVar15 ||
             (pSVar17 = STGridAt3D(g_worldGrid, sVar16, sVar14, sVar15).objects[0],
             pSVar17 == nullptr)))))) {

          local_EAX_6098 = st::fn_00404A3E(local_c,local_1c,local_18);
          pSVar17 = (STWorldObject *)(uint)(-1 < (int)local_EAX_6098);
        }
        else if ((pSVar17->value_20 == 0xb4) ||
                /* ST_CALLSITE[00588174]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
                (iVar8 = pSVar17->vfunc_F8(), iVar8 == 0)) {
LAB_005882af:
          pSVar17 = nullptr;
        }
        else if ((((pSVar17->value_20 == 1000) || (pSVar17->value_20 == 0x14)) &&
                 (st::machine_word_boundary_cast<uint>(pSVar17[1].vtable) < st::machine_word_boundary_cast<uint>((STWorldObjectVTable *)0x8))) &&
                ((g_playSystem_00802A38 == nullptr ||
                 (g_bulkInitializedRecords_008087C7[(int)pSVar17[1].vtable].field_0022 < 8)))) {
          iVar8 = param_1[4];
          bVar1 = *(byte *)&pSVar17[1].vtable;
          bVar2 = static_cast<byte>(st::machine_word_boundary_cast<uint>(((byte *)param_1)[9]));
          local_4c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_4c)), (uint8_t)(bVar1));
          local_48 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_48)), (uint8_t)(bVar2));
          if (STField<char>(iVar8,0x146F) == '\0') {
            if (bVar1 == bVar2) {
LAB_005882a0:
              iVar8 = 0;
            }
            else {
              uVar9 = (uint)bVar1;
              uVar6 = (uint)bVar2;
              local_5 = *(char *)(iVar8 + uVar9 * 8 + 0x142f + uVar6);
              if ((local_5 == '\0') && (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) == '\0')) {
                iVar8 = -2;
              }
              else if ((local_5 == '\x01') &&
                      (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) == '\0')) {
                iVar8 = -1;
              }
              else if ((local_5 == '\0') &&
                      (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) == '\x01')) {
                iVar8 = 1;
              }
              else {
                if ((local_5 != '\x01') || (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) != '\x01')
                   ) goto LAB_005882a0;
                iVar8 = 2;
              }
            }
            bVar20 = iVar8 < 0;
          }
          else {
            local_44 = (STGameObjC *)(iVar8 + (uint)bVar2 * 0x48);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            bVar20 = *(char *)((int)&local_44[2].field_0185 + (uint)bVar2 * 9 + 1) !=
                     *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar8);
          }
          if (bVar20) goto LAB_005882af;
        }
        iVar8 = local_38;
      } while (local_38 < 7);
      iVar8 = STField<int>(param_1,0x25b) + STField<int>(param_1,0x25f);
      STField<int>(param_1,0x25b) = iVar8;
      if (iVar8 < 0xd) {
        if (iVar8 < -0xc) {
          STField<undefined4>(param_1,0x25f) = 2;
        }
      }
      else {
        STField<undefined4>(param_1,0x25f) = 0xfffffffe;
      }
    }
    else {
      STField<undefined4>(param_1,0x231) = 2;
      /* ST_CALLSITE[00587C14]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      st::fn_00404264((STT3DSprC *)((int)param_1 + 0x1d5),0xe);
      st::fn_00402A90((STT3DSprC *)((int)param_1 + 0x1d5));
      st::fn_00403D19(param_1,(int)STField<short>(param_1,0x41),
                         (int)STField<short>(param_1,0x43),0x45c);

      iVar8 = st::fn_00401D93(reinterpret_cast<RecoveredRecordView_00589740_39D83294 *>(param_1));
      pSVar10 = local_44;
      if (iVar8 != 0) goto LAB_00587761;
      /* ST_CALLSITE[00587C63]: CALL dword ptr [EDX + 0xe0] */
      local_44->vfunc_E0();
      if (local_24 == 0) {
        st::fn_006EA460
                  (STField<void *>(param_1,0x211),STField<uint>(param_1,0x1ed),
                   pSVar10->field_01ED);
      }
      else {
        st::fn_006EA3E0
                  (STField<void *>(param_1,0x211),STField<uint>(param_1,0x1ed),
                   pSVar10->field_01ED);
      }
    }
  }
  else if (iVar8 == 1) {
    if (STField<int>(param_1,599) == 0) {
      STField<uint>(param_1,599) = g_playSystem_00802A38->field_00E4;
    }
    lVar4 = (longlong)STField<int>(param_1,0x235) * 0xeeff;
    uVar9 = (uint)lVar4;
    STField<uint>(param_1,0x235) =
         (uVar9 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) + (uint)((uVar9 >> 0xf & 1) != 0);
    lVar4 = (longlong)STField<int>(param_1,0x239) * 0xeeff;
    uVar9 = (uint)lVar4;
    STField<uint>(param_1,0x239) =
         (uVar9 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) + (uint)((uVar9 >> 0xf & 1) != 0);
    lVar4 = (longlong)STField<int>(param_1,0x23d) * 0xeeff;
    uVar9 = (uint)lVar4;
    iVar8 = (uVar9 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
            (uint)((uVar9 >> 0xf & 1) != 0);
    sVar14 = STField<short>(param_1,0x41);
    STField<int>(param_1,0x23d) = iVar8;
    iVar11 = (int)sVar14;
    local_10 = (st::storage_bit_cast<int>(static_cast<uint32_t>(STField<int>(param_1,0x235) +
                     (STField<int>(param_1,0x235) >> 0x1f & 0xffffU))) >> 0x10) + iVar11;
    sVar15 = STField<short>(param_1,0x43);
    local_4c = STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_10)), (uint16_t)(sVar15));
    local_44 = (STGameObjC *)(int)sVar15;
    local_14 = (int)&local_44->vtable +
               (st::storage_bit_cast<int>(static_cast<uint32_t>(STField<int>(param_1,0x239) +
                     (STField<int>(param_1,0x239) >> 0x1f & 0xffffU))) >> 0x10);
    sVar16 = STField<short>(param_1,0x45);
    local_40 = STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_14)), (uint16_t)(sVar16));
    local_48 = (int)sVar16;
    local_18 = (st::storage_bit_cast<int>(static_cast<uint32_t>(STField<int>(param_1,0x25b) + (STField<int>(param_1,0x25b) >> 0x1f & 3U))) >> 2) + local_48 + (st::storage_bit_cast<int>(static_cast<uint32_t>(iVar8 + (iVar8 >> 0x1f & 0xffffU))) >> 0x10);
    if (local_10 < 0) {
      local_10 = 0;
    }
    if (local_14 < 0) {
      local_14 = 0;
    }
    if (local_18 < 0) {
      local_18 = 0;
    }
    if (g_worldGrid.sizeX * 0xc9 <= local_10) {
      local_10 = g_worldGrid.sizeX * 0xc9 + -1;
    }
    if (g_worldGrid.sizeY * 0xc9 <= local_14) {
      local_14 = g_worldGrid.sizeY * 0xc9 + -1;
    }
    if (g_worldGrid.sizeZ * 200 <= local_18) {
      local_18 = g_worldGrid.sizeZ * 200 + -1;
    }
    local_c = local_10;
    local_1c = local_14;
    local_34 = STBiasedDiv16(local_10, 0xc9); /* exact signed 16-bit grid-index division */
    local_38 = STBiasedDiv16(local_14, 0xc9); /* exact signed 16-bit grid-index division */
    local_3c = STBiasedDiv16(local_18, 200); /* exact signed 16-bit grid-index division */
    if (sVar14 < 0) {
      iVar8 = (short)((sVar14 / 0xc9 + (sVar14 >> 0xf)) -
                     (short)((longlong)iVar11 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar8 = (short)((sVar14 / 0xc9 + (sVar14 >> 0xf)) -
                          (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
    }
    iVar11 = param_1[0xa4];
    iVar11 = STBiasedDiv16(iVar11, 0xc9); /* exact signed 16-bit grid-index division */
    if (iVar8 == iVar11) {
      if (sVar15 < 0) {
        iVar8 = (short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                       (short)((longlong)(int)local_44 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar8 = (short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                            (short)((longlong)(int)local_44 * 0x28c1979 >> 0x3f));
      }
      iVar11 = param_1[0xa5];
      iVar11 = STBiasedDiv16(iVar11, 0xc9); /* exact signed 16-bit grid-index division */
      if (iVar8 != iVar11) goto LAB_00587161;
      if (sVar16 < 0) {
        iVar8 = (short)((sVar16 / 200 + (sVar16 >> 0xf)) -
                       (short)((longlong)local_48 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar8 = (short)((sVar16 / 200 + (sVar16 >> 0xf)) -
                            (short)((longlong)local_48 * 0x51eb851f >> 0x3f));
      }
      iVar11 = param_1[0xa6];
      iVar11 = STBiasedDiv16(iVar11, 200); /* exact signed 16-bit grid-index division */
      pSVar17 = local_20;
      if (iVar8 != iVar11) goto LAB_00587161;
      goto LAB_00587359;
    }
LAB_00587161:
    sVar14 = (short)local_34;
    if (((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
         ((sVar15 = (short)local_38, sVar15 < 0 ||
          ((g_worldGrid.sizeY <= sVar15 || (sVar16 = (short)local_3c, sVar16 < 0)))))) ||
        (g_worldGrid.sizeZ <= sVar16)) ||
       (pSVar17 = STGridAt3D(g_worldGrid, sVar14, sVar15, sVar16).objects[0], local_20 = pSVar17, pSVar17 == nullptr))
    {

      local_EAX_2124 = st::fn_00404A3E(local_10,local_14,local_18);
      local_38 = 0;
      iVar8 = local_18;
      pSVar17 = (STWorldObject *)(uint)(-1 < (int)local_EAX_2124);
    }
    else if ((pSVar17->value_20 == 0xb4) ||
            /* ST_CALLSITE[005871F2]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
            (iVar8 = pSVar17->vfunc_F8(), iVar8 == 0)) {
LAB_00587323:
      local_38 = 0;
      iVar8 = local_18;
      pSVar17 = nullptr;
    }
    else {
      if (((pSVar17->value_20 == 1000) || (pSVar17->value_20 == 0x14)) &&
         ((st::machine_word_boundary_cast<uint>(pSVar17[1].vtable) < st::machine_word_boundary_cast<uint>((STWorldObjectVTable *)0x8) &&
          ((g_playSystem_00802A38 == nullptr ||
           (g_bulkInitializedRecords_008087C7[(int)pSVar17[1].vtable].field_0022 < 8)))))) {
        iVar8 = param_1[4];
        bVar1 = *(byte *)&pSVar17[1].vtable;
        bVar2 = static_cast<byte>(st::machine_word_boundary_cast<uint>(((byte *)param_1)[9]));
        local_4c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_4c)), (uint8_t)(bVar1));
        local_48 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_48)), (uint8_t)(bVar2));
        if (STField<char>(iVar8,0x146F) == '\0') {
          if (bVar1 == bVar2) {
            iVar8 = 0;
          }
          else {
            uVar9 = (uint)bVar1;
            uVar6 = (uint)bVar2;
            cVar3 = *(char *)(iVar8 + uVar9 * 8 + 0x142f + uVar6);
            pSVar17 = local_20;
            if ((cVar3 == '\0') && (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) == '\0')) {
              iVar8 = -2;
            }
            else if ((cVar3 == '\x01') && (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) == '\0')) {
              iVar8 = -1;
            }
            else if ((cVar3 == '\0') && (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) == '\x01')) {
              iVar8 = 1;
            }
            else if ((cVar3 == '\x01') && (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) == '\x01'))
            {
              iVar8 = 2;
            }
            else {
              iVar8 = 0;
            }
          }
          bVar20 = iVar8 < 0;
        }
        else {
          bVar20 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar8) !=
                   *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar8);
        }
        if (bVar20) goto LAB_00587323;
      }
LAB_00587359:
      local_38 = 0;
      iVar8 = local_18;
    }
    do {
      if (pSVar17 == nullptr) {
        if (local_38 < 7) {
          if (iVar8 < 0) {
            iVar8 = 0;
            STField<undefined4>(param_1,0x25f) = 2;
          }
          /* ST_CALLSITE[0058769C]: CALL 0x00403107; direct=00403107 sub_00416240 */
          st::fn_00403107(param_1,(ushort)local_c,(short)local_1c,(ushort)iVar8);
        }
        break;
      }
      switch(local_38) {
      case 0:
      case 2:
        local_c = (int)STField<short>(param_1,0x41);
        break;
      case 1:
        local_1c = (int)STField<short>(param_1,0x43);
        local_c = local_10;
        break;
      case 3:
        local_c = local_10;
        goto LAB_005873a4;
      case 4:
        local_c = (int)STField<short>(param_1,0x41);
LAB_005873a4:
        local_1c = local_14;
        iVar8 = (st::storage_bit_cast<int>(static_cast<uint32_t>(STField<int>(param_1,0x25b) +
                      (STField<int>(param_1,0x25b) >> 0x1f & 3U))) >> 2) +
                (int)STField<short>(param_1,0x45);
        local_18 = iVar8;
        break;
      case 5:
        local_1c = (int)STField<short>(param_1,0x43);
        local_c = local_10;
        iVar8 = (st::storage_bit_cast<int>(static_cast<uint32_t>(STField<int>(param_1,0x25b) +
                      (STField<int>(param_1,0x25b) >> 0x1f & 3U))) >> 2) +
                (int)STField<short>(param_1,0x45);
        local_18 = iVar8;
        break;
      case 6:
        local_10 = (int)STField<short>(param_1,0x41);
        local_14 = (int)STField<short>(param_1,0x43);
      }
      local_38 = local_38 + 1;
      sVar14 = STBiasedDiv16(local_c, 0xc9); /* exact signed 16-bit grid-index division */
      sVar15 = STBiasedDiv16(local_1c, 0xc9); /* exact signed 16-bit grid-index division */
      sVar16 = STBiasedDiv16(iVar8, 200); /* exact signed 16-bit grid-index division */
      if ((((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar15 < 0)) ||
           ((g_worldGrid.sizeY <= sVar15 || (sVar16 < 0)))) || (g_worldGrid.sizeZ <= sVar16)) ||
         (pSVar17 = STGridAt3D(g_worldGrid, sVar14, sVar15, sVar16).objects[0],
         local_20 = pSVar17, pSVar17 == nullptr)) {

        local_EAX_2928 = st::fn_00404A3E(local_c,local_1c,iVar8);
        local_20 = (STWorldObject *)(uint)(-1 < (int)local_EAX_2928);
      }
      else if ((pSVar17->value_20 == 0xb4) ||
              /* ST_CALLSITE[0058750E]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
              (iVar11 = pSVar17->vfunc_F8(), iVar11 == 0)) {
LAB_00587648:
        local_20 = nullptr;
      }
      else if ((((pSVar17->value_20 == 1000) || (pSVar17->value_20 == 0x14)) &&
               (st::machine_word_boundary_cast<uint>(pSVar17[1].vtable) < st::machine_word_boundary_cast<uint>((STWorldObjectVTable *)0x8))) &&
              ((g_playSystem_00802A38 == nullptr ||
               (g_bulkInitializedRecords_008087C7[(int)pSVar17[1].vtable].field_0022 < 8)))) {
        iVar11 = param_1[4];
        bVar1 = *(byte *)&pSVar17[1].vtable;
        bVar2 = static_cast<byte>(st::machine_word_boundary_cast<uint>(((byte *)param_1)[9]));
        local_4c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_4c)), (uint8_t)(bVar1));
        local_48 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_48)), (uint8_t)(bVar2));
        if (STField<char>(iVar11,0x146F) == '\0') {
          if (bVar1 == bVar2) {
            iVar11 = 0;
          }
          else {
            uVar9 = (uint)bVar1;
            uVar6 = (uint)bVar2;
            cVar3 = *(char *)(iVar11 + uVar9 * 8 + 0x142f + uVar6);
            iVar8 = local_18;
            if ((cVar3 == '\0') && (*(char *)(iVar11 + uVar6 * 8 + 0x142f + uVar9) == '\0')) {
              iVar11 = -2;
            }
            else if ((cVar3 == '\x01') && (*(char *)(iVar11 + uVar6 * 8 + 0x142f + uVar9) == '\0'))
            {
              iVar11 = -1;
            }
            else if ((cVar3 == '\0') && (*(char *)(iVar11 + uVar6 * 8 + 0x142f + uVar9) == '\x01'))
            {
              iVar11 = 1;
            }
            else if ((cVar3 == '\x01') && (*(char *)(iVar11 + uVar6 * 8 + 0x142f + uVar9) == '\x01')
                    ) {
              iVar11 = 2;
            }
            else {
              iVar11 = 0;
            }
          }
          bVar20 = iVar11 < 0;
        }
        else {
          local_5 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar11);
          local_44 = nullptr;
          bVar20 = local_5 != *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar11);
        }
        if (bVar20) goto LAB_00587648;
      }
      pSVar17 = local_20;
    } while (local_38 < 7);
    iVar8 = STField<int>(param_1,0x25b) + STField<int>(param_1,0x25f);
    STField<int>(param_1,0x25b) = iVar8;
    if (iVar8 < 0xd) {
      if (iVar8 < -0xc) {
        STField<undefined4>(param_1,0x25f) = 2;
      }
    }
    else {
      STField<undefined4>(param_1,0x25f) = 0xfffffffe;
    }
    if (10 < g_playSystem_00802A38->field_00E4 - STField<int>(param_1,0x253)) {
      st::fn_00405150(reinterpret_cast<RecoveredRecordView_00586320_0792B306 *>(param_1));
      STField<uint>(param_1,0x253) = g_playSystem_00802A38->field_00E4;
    }
    if (4000 < g_playSystem_00802A38->field_00E4 - STField<int>(param_1,599)) {
      STField<undefined4>(param_1,0x231) = 2;
      /* ST_CALLSITE[0058773C]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      st::fn_00404264((STT3DSprC *)((int)param_1 + 0x1d5),0xe);
      st::fn_00402A90((STT3DSprC *)((int)param_1 + 0x1d5));
      STField<undefined4>(param_1,0x26f) = 0xff;

      iVar8 = st::fn_00401D93(reinterpret_cast<RecoveredRecordView_00589740_39D83294 *>(param_1));
      if (iVar8 == 0) goto LAB_00588350;
LAB_00587761:

      st::fn_00405EF2(reinterpret_cast<RecoveredRecord_005862E0_AFF1B07D *>(param_1));
    }
  }
  else if (iVar8 == 2) {

    pSVar10 = STPointerBoundaryCast<STGameObjC *>(st::fn_004042AF(this,'\b'));
    local_44 = pSVar10;
    if ((st::machine_word_boundary_cast<uint>(pSVar10) == st::machine_word_boundary_cast<uint>((STGameObjC *)0x1)) && (STField<int>(param_1,0x26f) != 0xff)) {
      /* ST_CALLSITE[00586C64]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
      this_00 = st::fn_004028BA
                          (g_allPlayers_007FA174,(char)STField<int>(param_1,0x26f),
                           STField<ushort>(param_1,0x273),CASE_1);
      if (this_00 != nullptr) {
        memset(&DAT_008116f0, 0, 0x1c); /* compiler bulk-zero initialization */
        DAT_008116f0 = DAT_007e660c;
        _DAT_008116fc = (undefined2)param_1[0xa9];
        _DAT_008116fe = (undefined2)param_1[0xa8];
        _DAT_008116f8 = param_1[0xa0];
        iVar8 = 8;
        DAT_008116f4 = 0xab;
        pAVar19 = &local_6c;
        while( true ) {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          *(undefined4 *)pAVar19 = 0;
          pAVar19 = reinterpret_cast<AnonShape_0041AF40_F59F8577 *>(reinterpret_cast<byte *>(pAVar19) + 0x4);
        }
        STPiece<8,4>(local_6c) = this_00->field_0008;
        STPiece<12,4>(local_6c) = 2;
        local_6c.field_0010 = 0x110;
        local_6c.field_0014 = &DAT_008116f0;
        /* ST_CALLSITE[00586CE8]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC;pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_0041AF40_F59F8577 */
        this_00->GetMessage(&local_6c);
        pSVar10 = local_44;
      }
    }
    if ((STField<char>(param_1,0x275) != '\0') &&
       (pSVar10 == (STGameObjC *)(uint)STField<byte>(param_1,0x276))) {
      /* ST_CALLSITE[00586D13]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      st::fn_00405240(this,9,g_playSystem_00802A38->field_00E4);
      st::fn_00404854(this,9);
    }
    /* ST_CALLSITE[00586D25]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    iVar8 = st::fn_004022AC(this,'\b');
    if (pSVar10 == (STGameObjC *)(iVar8 - 1U)) {
      /* ST_CALLSITE[00586D33]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      st::fn_00404264(this,8);
    }
    /* ST_CALLSITE[00586D3C]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    iVar8 = st::fn_004022AC(this,'\n');
    if (pSVar10 == (STGameObjC *)(iVar8 - 1U)) {
      /* ST_CALLSITE[00586D4A]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      st::fn_00404264(this,10);
    }
    if (STField<char>(param_1,0x275) != '\0') {
      /* ST_CALLSITE[00586D5D]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar8 = st::fn_004022AC(this,'\t');

      iVar11 = st::fn_004042AF(this,'\t');
      pSVar10 = local_44;
      if (iVar11 == iVar8 + -1) {
        /* ST_CALLSITE[00586D76]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        st::fn_00404264(this,9);
        STField<undefined1>(param_1,0x275) = 0;
        pSVar10 = local_44;
      }
    }
    /* ST_CALLSITE[00586D89]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    iVar8 = st::fn_004022AC(this,'\b');
    if ((pSVar10 == (STGameObjC *)(iVar8 - 1U)) && (STField<char>(param_1,0x275) == '\0')) {

      st::fn_00405EF2(reinterpret_cast<RecoveredRecord_005862E0_AFF1B07D *>(param_1));
      return;
    }
    if ((((int)pSVar10 < 10) && (STField<int>(param_1,0x26f) != 0xff)) &&
       /* ST_CALLSITE[00586DD6]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
       (pSVar10 = st::fn_004028BA
                            (g_allPlayers_007FA174,(char)STField<int>(param_1,0x26f),
                             STField<ushort>(param_1,0x273),CASE_1), pSVar10 != nullptr
       )) {
      piVar18 = &local_24;
      puVar23 = local_30;
      psVar22 = local_2c;
      puVar21 = local_28;
      iVar8 = param_1[0x9e];
      /* ST_CALLSITE[00586DFE]: CALL dword ptr [EDX + 0xe0] */
      pSVar10->vfunc_E0();
      /* ST_CALLSITE[00586E12]: CALL 0x00403107; direct=00403107 sub_00416240 */
      st::fn_00403107(param_1,local_28[0],local_2c[0],local_30[0]);
      /* ST_CALLSITE[00586E1B]: CALL dword ptr [EDX + 0xd8]; [STIndirectCallsiteApplier] exact slot 0xD8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*param_1 + 0xd8))(iVar8,puVar21,psVar22,puVar23,piVar18);
      return;
    }
    goto LAB_005884da;
  }
LAB_00588350:
  sVar14 = STField<short>(param_1,0x41);
  sVar15 = STField<short>(param_1,0x43);
  sVar16 = STField<short>(param_1,0x45);
  STField<short>(param_1,0x24d) = sVar14;
  STField<short>(param_1,0x24f) = sVar15;
  STField<short>(param_1,0x251) = sVar16;
  if (STField<int>(param_1,0x231) != 2) {
    iVar8 = STBiasedDiv16(sVar14, 0xc9); /* exact signed 16-bit grid-index division */
    iVar11 = STBiasedDiv16(sVar15, 0xc9); /* exact signed 16-bit grid-index division */
    iVar13 = STBiasedDiv16(sVar16, 200); /* exact signed 16-bit grid-index division */
    if ((((STField<short>(param_1,0x47) != iVar8) || (STField<short>(param_1,0x49) != iVar11))
        || (STField<short>(param_1,0x4b) != iVar13)) &&
       (((-1 < iVar8 && (-1 < iVar11)) &&
        ((iVar8 < g_worldGrid.sizeX &&
         ((iVar11 < g_worldGrid.sizeY &&
          (iVar13 = g_worldGrid.sizeX * iVar11, *(char *)(iVar8 + iVar13 + DAT_007fb26c) != '\0'))))
        )))) {
      if ((((&DAT_007fb24c)[param_1[9]] == 0) ||
          (*(char *)((&DAT_007fb24c)[param_1[9]] + iVar8 + iVar13) == '\0')) &&

         (local_EAX_6553 = st::fn_00403B66(iVar8,iVar11,param_1[9],1,DAT_007e660c),
         -1 < (int)local_EAX_6553)) {
        st::fn_00405B82((int)STField<short>(param_1,0x41),(int)STField<short>(param_1,0x43)
                           ,(int)STField<short>(param_1,0x45));
        /* ST_CALLSITE[005884B3]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        st::fn_00404264((STT3DSprC *)((int)param_1 + 0x1d5),0xe);
        st::fn_00402A90((STT3DSprC *)((int)param_1 + 0x1d5));
        STField<undefined4>(param_1,0x231) = 2;
        STField<undefined4>(param_1,0x26f) = 0xff;

        st::fn_00405EF2(reinterpret_cast<RecoveredRecord_005862E0_AFF1B07D *>(param_1));
      }
    }
  }
LAB_005884da:
  /* ST_CALLSITE[005884DE]: CALL dword ptr [EDX + 0xd8]; [STIndirectCallsiteApplier] exact slot 0xD8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  STStructuralVirtualCall<undefined4>(param_1, 0xD8);
  return;
}

// 00589740 FUN_00589740
#line 4 "decomp/ST.exe/functions/00589740/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00586AF0 @ 00587754 -> read as EAX on
   every CFG path | 00586AF0 @ 00587C3B -> read as EAX on every CFG path */

int __fastcall st::fn_00589740(RecoveredRecordView_00589740_39D83294 *param_1)

{
  byte *this;
  int iVar1;
  uint uVar2;
  this = &param_1->field_0x1d5;
  /* ST_CALLSITE[0058975F]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  iVar1 = st::fn_00404183(reinterpret_cast<STT3DSprC *>(this),8,PTR_00806774,st::mutable_c_string("Expb23"),CASE_1D);
  if (iVar1 == 0) {
    /* ST_CALLSITE[0058977D]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    st::fn_00405240(reinterpret_cast<STT3DSprC *>(this),8,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[00589793]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    st::fn_00404183(reinterpret_cast<STT3DSprC *>(this),10,PTR_00806774,st::mutable_c_string("expmask2"),CASE_1D);
    /* ST_CALLSITE[0058979C]: CALL 0x00403233; direct=00403233 STT3DSprC::sub_004ACFE0 */
    st::fn_00403233(reinterpret_cast<STT3DSprC *>(this),'\n');
    /* ST_CALLSITE[005897AC]: CALL 0x004044ee; direct=004044EE STT3DSprC::sub_004ACF20 */
    st::fn_004044EE(reinterpret_cast<STT3DSprC *>(this),PTR_008032b8,0x10);
    /* ST_CALLSITE[005897C2]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    st::fn_00405240(reinterpret_cast<STT3DSprC *>(this),10,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[005897CB]: CALL dword ptr [EDX + 0xd8]; [STIndirectCallsiteApplier] exact slot 0xD8; mode=structural-presentation; signature=__thiscall;/void;pointer:/void */
    STStructuralVirtualCall<void>(param_1, 0xD8);
    /* ST_CALLSITE[005897E2]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar1 = st::fn_00404183(reinterpret_cast<STT3DSprC *>(this),9,PTR_00806764,st::mutable_c_string("bulb_n4"),CASE_1D);
    if (iVar1 == 0) {
      /* ST_CALLSITE[005897EF]: CALL 0x00402761; direct=00402761 STT3DSprC::sub_004AD070 */
      st::fn_00402761(reinterpret_cast<STT3DSprC *>(this),9);
      /* ST_CALLSITE[005897F8]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      uVar2 = st::fn_004022AC(reinterpret_cast<STT3DSprC *>(this),'\t');
      param_1->field_0275 = (char)uVar2;
      param_1->field_0276 = DAT_007cb958;
      param_1->field_0277 = 0;
    }
    return 0;
  }
  return -1;
}

// 00589870 FUN_00589870
#line 4 "decomp/ST.exe/functions/00589870/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00589870 -> 00568DD0 @ 005898F6

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00589870(void *this,int param_1,int param_2,int soundId)

{
  short sVar1;
  SoundPosition local_10;

  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    local_10.x = (short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.x = (short)(((short)(param_1 / 0xc9) + sVar1) -
                             (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    local_10.y = (short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.y = (short)(((short)(param_2 / 0xc9) + sVar1) -
                             (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  local_10.unknown = STField<int>(this,0x18);
  /* ST_CALLSITE[005898F6]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
  st::fn_00404BD8(reinterpret_cast<SoundClassTy *>(&g_sound),SOUND_MODE_2,nullptr,soundId,&local_10,0);
  return;
}

// 00589940 FUN_00589940
#line 4 "decomp/ST.exe/functions/00589940/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA934>00403D2D

   [STObjectFactoryApplier] Central object factory for 0x0131 (ST_OBJECT_TYPE_0131).
   Evidence: registry[66] at 007CA930 stores type 0x0131 and executable pointer 00403D2D; allocation
   size 678 has no unique current class-layout match */

void * __cdecl st::fn_00589940(void)

{
  STMBombC *pSVar1;

  /* ST_CALLSITE[00589945]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STMBombC; signature=__stdcall;pointer:/STMBombC;/uint */
  pSVar1 = st::pointer_boundary_cast<STMBombC *>(st::fn_006B04D0(0x2a6));
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00403733(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 00589970 FUN_00589970
#line 4 "decomp/ST.exe/functions/00589970/decomp.c"
undefined4 st::fn_00589970(void)

{
  return 0xab;
}

// 005899E0 FUN_005899e0
#line 4 "decomp/ST.exe/functions/005899E0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_005899E0(RecoveredRecord_005899E0_1FE8750F *param_1)

{
  uint local_24 [3];
  uint local_18;
  uint local_14;
  uint local_10;
  local_10 = param_1->field_0008;
  local_18 = 0;
  local_14 = 10;

  st::fn_006E60A0(param_1,local_24);
  return;
}

// 0058A970 FUN_0058a970
#line 4 "decomp/ST.exe/functions/0058A970/decomp.c"
int __thiscall st::fn_0058A970(void *this,undefined4 param_1,int param_2)

{
  uint uVar1;

  uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x1c) = uVar1;
  return (uVar1 >> 0x10) % 0x15 + 0x1e + param_2;
}

// 0058A9B0 CreateSTOctopus
#line 4 "decomp/ST.exe/functions/0058A9B0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA96C>00401D7A | P:007CA974>00401D7A

   [STObjectFactoryApplier] Central object factory for 0x0140 (ST_OBJECT_ST_OCTOPUS_0140).
   Evidence: registry[73] at 007CA968 stores type 0x0140 and executable pointer 00401D7A; allocation
   size 685 uniquely matches /STOctopusC */

STOctopusC * __cdecl st::fn_0058A9B0(void)

{
  STOctopusC *pSVar1;

  /* ST_CALLSITE[0058A9B5]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STOctopusC; signature=__stdcall;pointer:/STOctopusC;/uint */
  pSVar1 = st::pointer_boundary_cast<STOctopusC *>(st::fn_006B04D0(0x2ad));
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00405A1F(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 0058A9E0 FUN_0058a9e0
#line 4 "decomp/ST.exe/functions/0058A9E0/decomp.c"
void __fastcall st::fn_0058A9E0(RecoveredRecordView_0058A9E0_0338C9E5 *param_1)

{
  byte *puVar1;
  int iVar3;
  uint uVar4;
  int iVar2;
  int iVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  int local_c;

  sVar6 = param_1->field_0041;
  sVar6 = STBiasedDiv16(sVar6, 0xc9); /* exact signed 16-bit grid-index division */
  param_1->field_0047 = sVar6;
  param_1->field_005B = sVar6;
  sVar6 = param_1->field_0043;
  sVar6 = STBiasedDiv16(sVar6, 0xc9); /* exact signed 16-bit grid-index division */
  param_1->field_0049 = sVar6;
  param_1->field_005D = sVar6;
  sVar6 = param_1->field_0045;
  sVar6 = STBiasedDiv16(sVar6, 200); /* exact signed 16-bit grid-index division */
  param_1->field_004B = sVar6;
  param_1->field_005F = sVar6;

  iVar3 = st::fn_00401A3C(reinterpret_cast<RecoveredRecordView_0041C710_A35B7121 *>(param_1));
  puVar1 = &param_1->field_0x1d5;
  if (iVar3 == 0) {
    iVar3 = 0;

    uVar4 = st::fn_004052CC(reinterpret_cast<STT3DSprC *>(puVar1));

    st::fn_006EABF0(param_1->field_0211,uVar4,iVar3);

    iVar2 = st::fn_004050D8(reinterpret_cast<RecoveredRecordView_0041CAF0_18493751 *>(param_1));
    if (iVar2 == 1) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 1;

    uVar4 = st::fn_004052CC(reinterpret_cast<STT3DSprC *>(puVar1));

    st::fn_006EABF0(param_1->field_0211,uVar4,iVar3);
    iVar3 = 1;
  }

  iVar5 = st::fn_004052CC(reinterpret_cast<STT3DSprC *>(puVar1));
  st::fn_006E6870(param_1->field_0211,iVar5,iVar3);
  iVar3 = param_1->field_02A5;
  if ((iVar3 == 0xf8) || (iVar3 == 0xf9)) {
    local_c = 8;
    iVar5 = 8;
  }
  else {
    iVar5 = 6;
    local_c = 6;
  }
  if (2 < g_playSystem_00802A38->field_00E4 - param_1->field_0245) {
    param_1->field_0245 = g_playSystem_00802A38->field_00E4;
    param_1->field_0235 = 0;
    iVar7 = (param_1->field_0231 + 1) % iVar5;
    param_1->field_0231 = iVar7;
    if (iVar7 != 0) {
      param_1->field_0235 = ((iVar5 - iVar7) * 0x6a0) / iVar5;
    }
  }
  if (param_1->field_0249 == 1) {
    if (param_1->field_0281 == 0) {
      iVar3 = (int)param_1->field_0041 - (int)param_1->field_004E;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar3 < 0x15) {
        iVar3 = (int)param_1->field_0043 - (int)*(short *)&param_1->field_0x50;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (iVar3 < 0x15) {
          /* ST_CALLSITE[0058ABCE]: CALL 0x00401a05; direct=00401A05 STOctopusC::sub_0058B190 */
          iVar3 = st::fn_00401A05
                            (reinterpret_cast<STOctopusC *>(param_1),&param_1->field_004E,
                             reinterpret_cast<short *>(&param_1->field_0x50),&param_1->field_0052,
                             reinterpret_cast<short *>(&param_1->field_0x6c));
          param_1->field_0249 = iVar3;
          param_1->field_024D = 0;
        }
      }
      iVar3 = param_1->field_02A5;
      param_1->field_025D = param_1->field_025D + param_1->field_0251;
      param_1->field_0261 = param_1->field_0261 + param_1->field_0255;
      if ((iVar3 == 0xf8) || (iVar3 == 0xf9)) {
        param_1->field_025D =
             (param_1->field_0269 * param_1->field_0235) / param_1->field_0239 + param_1->field_025D
        ;
        param_1->field_0261 =
             (param_1->field_026D * param_1->field_0235) / param_1->field_0239 + param_1->field_0261
        ;
        iVar5 = local_c;
      }
      param_1->field_0041 =
           (short)(param_1->field_025D + (param_1->field_025D >> 0x1f & 0xffU) >> 8) +
           param_1->field_0275;
      param_1->field_0043 =
           (short)(param_1->field_0261 + (param_1->field_0261 >> 0x1f & 0xffU) >> 8) +
           param_1->field_0279;
    }
    iVar7 = param_1->field_0265 + param_1->field_0259;
    param_1->field_0265 = iVar7;
    if ((iVar3 == 0xf8) || (iVar3 == 0xf9)) {
      param_1->field_0265 =
           (param_1->field_0271 * param_1->field_0235) / param_1->field_0239 + iVar7;
    }
    sVar6 = (short)(param_1->field_0265 + (param_1->field_0265 >> 0x1f & 0xffU) >> 8) +
            param_1->field_027D;
    param_1->field_0045 = sVar6;
    if (param_1->field_0281 != 0) {
      iVar3 = (int)sVar6 - (int)param_1->field_0052;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar3 < 10) {
        param_1->field_0259 = 0;
        param_1->field_0281 = 0;
      }
    }
  }
  else if (0xc < (uint)param_1->field_024D) {
    /* ST_CALLSITE[0058AD40]: CALL 0x00401a05; direct=00401A05 STOctopusC::sub_0058B190 */
    iVar3 = st::fn_00401A05
                      (reinterpret_cast<STOctopusC *>(param_1),&param_1->field_004E,reinterpret_cast<short *>(&param_1->field_0x50),
                       &param_1->field_0052,reinterpret_cast<short *>(&param_1->field_0x6c));
    param_1->field_0249 = iVar3;
    param_1->field_024D = 0;
  }
  sVar6 = *(short *)&param_1->field_0x6c * 0x2d;
  *(short *)&param_1->field_0x6c = sVar6;
  if (param_1->field_0281 == 0) {
    iVar3 = (0x18 - (int)sVar6 / 0xf) % 0x18;
    uVar4 = (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * local_c + param_1->field_0231;
    uVar8 = (iVar3 / 3) * local_c + param_1->field_0231;
  }
  else {
    uVar4 = param_1->field_0231 + iVar5 * 8;
    uVar8 = uVar4;
  }
  puVar1 = &param_1->field_0x1d5;
  *(short *)&param_1->field_0x6c = sVar6 / 0x2d - (short)((int)sVar6 / -0x4c000000);
  /* ST_CALLSITE[0058AE17]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  st::fn_00401064(reinterpret_cast<STT3DSprC *>(puVar1),'\x0e',uVar4);
  /* ST_CALLSITE[0058AE21]: CALL 0x004052fe; direct=004052FE STT3DSprC::SetCurShad */
  st::fn_004052FE(reinterpret_cast<STT3DSprC *>(puVar1),'\x0e',uVar8);
  /* ST_CALLSITE[0058AE2A]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
  st::fn_004030BC(reinterpret_cast<STT3DSprC *>(puVar1),'\x0e');
  param_1->field_024D = param_1->field_024D + 1;
  /* ST_CALLSITE[0058AE40]: CALL dword ptr [EDX + 0xd8]; [STIndirectCallsiteApplier] exact slot 0xD8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  STStructuralVirtualCall<undefined4>(param_1, 0xD8);
  return;
}

// 0058B980 FUN_0058b980
#line 4 "decomp/ST.exe/functions/0058B980/decomp.c"
undefined4 __cdecl
st::fn_0058B980(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  uint local_2c [5];
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  memset(local_2c, 0, 0x28); /* compiler bulk-zero initialization */
  local_18 = param_2;
  local_c = param_1;
  local_8 = param_5;
  local_2c[1] = param_6;
  local_10 = param_4;
  local_2c[0] = 0x118;
  local_2c[2] = 0;
  local_2c[3] = 1;
  local_14 = param_3;
  /* ST_CALLSITE[0058B9E5]: CALL dword ptr [EAX + 0x8] */
  g_playSystem_00802A38->vfunc_8(0x140,nullptr,reinterpret_cast<int *>(&param_6),(short)local_2c,0);
  return param_6;
}

// 0058BAB0 FUN_0058bab0
#line 4 "decomp/ST.exe/functions/0058BAB0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 5.
   Evidence: 004C4550 -> 0058BAB0 @ 004C4B6A; zero-filled partial register load at 004C4B4E */

undefined4 __cdecl
st::fn_0058BAB0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,ushort param_6)

{
  uint local_2c [5];
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  ushort local_8;

  memset(local_2c, 0, 0x26); /* compiler bulk-zero initialization */
  local_14 = param_2;
  local_18 = param_1;
  local_8 = param_6;
  local_2c[1] = param_4;
  local_c = param_5;
  local_2c[0] = 400;
  local_2c[2] = 0;
  local_2c[3] = 1;
  local_10 = param_3;
  /* ST_CALLSITE[0058BB19]: CALL dword ptr [EAX + 0x8] */
  g_playSystem_00802A38->vfunc_8(0x14d,nullptr,reinterpret_cast<int *>(&param_4),(short)local_2c,0);
  return param_4;
}

// 0058BB50 FUN_0058bb50
#line 4 "decomp/ST.exe/functions/0058BB50/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0058BB50 returns return of sub_006E60A0 @ 0058BB76 */

int __fastcall st::fn_0058BB50(RecoveredRecord_0058BB50_29AADF52 *param_1)

{
  int iVar1;
  uint local_24 [3];
  uint local_18;
  uint local_14;
  uint local_10;
  local_10 = param_1->field_0008;
  local_18 = 0;
  local_14 = 10;

  iVar1 = st::fn_006E60A0(param_1,local_24);
  return iVar1;
}

// 0058BB90 FUN_0058bb90
#line 4 "decomp/ST.exe/functions/0058BB90/decomp.c"
void __fastcall st::fn_0058BB90(RecoveredRecordView_0058BB90_A8C58367 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar5;
  uint local_60 [6];
  short local_46;
  short local_44;
  short local_42;
  short local_40;
  short local_3e;
  short local_3c;
  ushort local_3a;
  uint local_38;
  byte local_34;
  uint local_33;
  ushort local_2f;
  int local_8;

  uVar1 = param_1->field_0279;
  memset(local_60, 0, 0x58); /* compiler bulk-zero initialization */
  local_2f = param_1->field_0299;
  local_34 = 0;
  local_33 = param_1->field_0295;
  local_44 = param_1->field_0043;
  local_46 = (short)(st::storage_bit_cast<uint>(static_cast<uint32_t>(param_1->field_0259 * 5)) >> 8) + param_1->field_0041;
  local_42 = param_1->field_0045 + -0x96;
  local_3c = param_1->field_0045 + -200;
  local_38 = 0xa5;
  local_60[0] = 0x28;
  local_60[3] = 1;
  local_3a = 0;
  local_8 = STBiasedDiv16(local_46, 0xc9); /* exact signed 16-bit grid-index division */
  iVar3 = STBiasedDiv16(local_44, 0xc9); /* exact signed 16-bit grid-index division */
  puVar5 = (undefined *)0x4;
  local_60[1] = uVar1;
  local_40 = local_46;
  local_3e = local_44;

  iVar2 = st::fn_00404D3B((short)local_8,(short)iVar3,4);
  if (iVar2 != 0) {
    do {
      if ((int)puVar5 < 1) break;
      puVar5 = puVar5 + -1;

      iVar2 = st::fn_00404D3B((short)local_8,(short)iVar3,(short)puVar5);
    } while (iVar2 != 0);
    if ((int)puVar5 < 0) {
      local_3c = (short)((int)puVar5 / 200) + -1;
      goto LAB_0058bcd7;
    }
  }
  local_3c = (short)((int)puVar5 / 200);
LAB_0058bcd7:
  if (g_visibleClass_00802A88 != nullptr) {
    /* ST_CALLSITE[0058BCF3]: CALL 0x00401fd2; direct=00401FD2 VisibleClassTy::VisHoleCreate */
    st::fn_00401FD2
              (g_visibleClass_00802A88,local_8,iVar3,puVar5,param_1->field_0024,(undefined *)0x2,
               0x19);
  }
  /* ST_CALLSITE[0058BD0A]: CALL 0x00401bc2; direct=00401BC2 STPlaySystemC::CreateGameObject */
  st::fn_00401BC2(g_playSystem_00802A38,0x28,0,0,st::machine_word_boundary_cast<undefined4>(local_60),0);
  return;
}

// 0058BD90 FUN_0058bd90
#line 4 "decomp/ST.exe/functions/0058BD90/decomp.c"
void __fastcall st::fn_0058BD90(RecoveredRecordView_0058BD90_5921842F *param_1)

{
  byte *puVar1;
  int iVar3;
  uint uVar4;
  int iVar2;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  uint local_8;

  local_8 = 0;
  if (param_1->field_0231 == 1) {
    return;
  }
  sVar6 = param_1->field_0041;
  sVar6 = STBiasedDiv16(sVar6, 0xc9); /* exact signed 16-bit grid-index division */
  param_1->field_0047 = sVar6;
  param_1->field_005B = sVar6;
  sVar6 = param_1->field_0043;
  sVar6 = STBiasedDiv16(sVar6, 0xc9); /* exact signed 16-bit grid-index division */
  param_1->field_0049 = sVar6;
  param_1->field_005D = sVar6;
  sVar6 = param_1->field_0045;
  sVar6 = STBiasedDiv16(sVar6, 200); /* exact signed 16-bit grid-index division */
  param_1->field_004B = sVar6;
  param_1->field_005F = sVar6;

  iVar3 = st::fn_00401A3C(reinterpret_cast<RecoveredRecordView_0041C710_A35B7121 *>(param_1));
  puVar1 = &param_1->field_0x1d5;
  if (iVar3 == 0) {
    iVar3 = 0;

    uVar4 = st::fn_004052CC(reinterpret_cast<STT3DSprC *>(puVar1));

    st::fn_006EABF0(param_1->field_0211,uVar4,iVar3);

    iVar2 = st::fn_004050D8(reinterpret_cast<RecoveredRecordView_0041CAF0_18493751 *>(param_1));
    if (iVar2 == 1) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 1;

    uVar4 = st::fn_004052CC(reinterpret_cast<STT3DSprC *>(puVar1));

    st::fn_006EABF0(param_1->field_0211,uVar4,iVar3);
    iVar3 = 1;
  }

  iVar4 = st::fn_004052CC(reinterpret_cast<STT3DSprC *>(puVar1));
  st::fn_006E6870(param_1->field_0211,iVar4,iVar3);
  switch(param_1->field_0231) {
  case 0:
  case 3:
    goto switchD_0058bec9_caseD_0;
  default:
    goto cf_common_exit_0058C391;
  case 2:
    goto switchD_0058bec9_caseD_2;
  case 4:
    puVar1 = &param_1->field_0x1d5;

    iVar3 = st::fn_004042AF(puVar1,'\x0e');
    local_8 = iVar3 + 1;
    if ((int)local_8 < 0x23) {
      /* ST_CALLSITE[0058C140]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      st::fn_00401064(reinterpret_cast<STT3DSprC *>(puVar1),'\x0e',local_8);
    }
    else {
      /* ST_CALLSITE[0058C14D]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      st::fn_00401064(reinterpret_cast<STT3DSprC *>(puVar1),'\x0e',0x18);
      param_1->field_0231 = 2;
    }
    if (local_8 == 0x20) {
      st::fn_0040293C(reinterpret_cast<RecoveredRecordView_0058BB90_A8C58367 *>(param_1));
    }
switchD_0058bec9_caseD_2:
    if (param_1->field_0231 == 2) {
      local_8 = 0x18;
    }
    if ((g_playSystem_00802A38->field_00E4 & 3) == 0) {
      if (param_1->field_0235 == 0) {
        if (param_1->field_023D < param_1->field_0241) {
          iVar3 = param_1->field_0239 + 1;
          param_1->field_0239 = iVar3;
          if (PTR_00806724->entryCount <= iVar3) {
            param_1->field_0231 = 1;
            param_1->field_0251 = param_1->field_0249 * 2 - param_1->field_0251;
            param_1->field_0255 = param_1->field_024D * 2 - param_1->field_0255;
            goto cf_common_exit_0058C391;
          }
          /* ST_CALLSITE[0058C27A]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
          st::fn_00401BAE(reinterpret_cast<STT3DSprC *>(&param_1->field_0x1d5),'\x0e');
          /* ST_CALLSITE[0058C296]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
          st::fn_0040116D
                    (reinterpret_cast<STT3DSprC *>(&param_1->field_0x1d5),PTR_00806724->entries[param_1->field_0239],
                     (int)PTR_00806724->field_002C);
        }
      }
      else {
        iVar3 = param_1->field_0239;
        iVar5 = iVar3 + -1;
        param_1->field_0239 = iVar5;
        if (iVar5 < 1) {
          param_1->field_0239 = 0;
          param_1->field_0235 = 0;

          st::fn_00403FDA(&param_1->field_0x1d5,'\x0e');
          param_1->field_0241 = -param_1->field_023D;
        }
        else {
          /* ST_CALLSITE[0058C1EC]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
          st::fn_0040116D
                    (reinterpret_cast<STT3DSprC *>(&param_1->field_0x1d5),PTR_00806724->entries[iVar3 + -1],
                     (int)PTR_00806724->field_002C);
          param_1->field_0241 = -param_1->field_023D;
        }
      }
    }
    iVar5 = param_1->field_0261 + param_1->field_0259 * 5;
    iVar9 = param_1->field_0265 + param_1->field_025D * 5;
    param_1->field_0265 = iVar9;
    iVar3 = param_1->field_023D + -5;
    sVar7 = param_1->field_0269 - (short)((uint)iVar5 >> 8);
    param_1->field_023D = iVar3;
    param_1->field_0261 = iVar5;
    iVar3 = iVar3 * iVar3 * 0xd;
    sVar8 = param_1->field_026D - (short)((uint)iVar9 >> 8);
    param_1->field_0041 = sVar7;
    param_1->field_0043 = sVar8;
    sVar6 = (short)(st::storage_bit_cast<int>(static_cast<uint32_t>(iVar3 + (iVar3 >> 0x1f & 0x3fffU))) >> 0xe) + param_1->field_0271;
    param_1->field_0045 = sVar6;
    if ((((sVar6 < 0x4b0) && (g_playSystem_00802A38->field_00E4 % 0x11 == 0)) &&
        ((int)sVar7 < g_worldGrid.sizeX * 0xc9)) &&
       (((0 < sVar7 && ((int)sVar8 < g_worldGrid.sizeY * 0xc9)) && (0 < sVar8)))) {
      param_1->field_0231 = 4;
    }
    goto LAB_0058c38c;
  case 6:
    break;
  }
  /* ST_CALLSITE[0058BEDA]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
  iVar3 = st::fn_004022AC(reinterpret_cast<STT3DSprC *>(&param_1->field_0x1d5),'\b');

  iVar5 = st::fn_004042AF(&param_1->field_0x1d5,'\b');
  if (iVar3 + -1 <= iVar5) {

    st::fn_004058B2(reinterpret_cast<RecoveredRecord_0058BB50_29AADF52 *>(param_1));
  }
switchD_0058bec9_caseD_0:
  sVar6 = param_1->field_0041;
  param_1->field_0045 = param_1->field_0045 + 0x12;
  sVar8 = param_1->field_0045;
  sVar6 = STBiasedDiv16(sVar6, 0xc9); /* exact signed 16-bit grid-index division */
  sVar7 = param_1->field_0043;
  sVar7 = STBiasedDiv16(sVar7, 0xc9); /* exact signed 16-bit grid-index division */
  iVar3 = STBiasedDiv16(sVar8, 200); /* exact signed 16-bit grid-index division */
  if (((sVar6 < 0) || (g_worldGrid.sizeX <= sVar6)) ||
     ((sVar7 < 0 ||
      ((((g_worldGrid.sizeY <= sVar7 || (sVar8 = (short)iVar3, sVar8 < 0)) ||
        (g_worldGrid.sizeZ <= sVar8)) ||
       ((STGridAt3D(g_worldGrid, sVar6, sVar7, sVar8).objects[0] == nullptr ||
        (STGridAt3D(g_worldGrid, sVar6, sVar7, sVar8).objects[0]->value_20 == 400)))))))) {
    if ((5 < iVar3) && ((g_playSystem_00802A38->field_00E4 & 3) == 0)) {
      iVar3 = param_1->field_0239;
      iVar5 = iVar3 + 1;
      param_1->field_0239 = iVar5;
      if (PTR_00806724->entryCount <= iVar5) {
        iVar3 = param_1->field_0231;
        param_1->field_0239 = 0;
        param_1->field_0231 = 1;
        if (iVar3 == 3) {
          st::fn_004021F3(param_1,param_1->field_0249,param_1->field_024D);
        }
        goto cf_common_exit_0058C391;
      }
      /* ST_CALLSITE[0058C0E5]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
      st::fn_0040116D
                (reinterpret_cast<STT3DSprC *>(&param_1->field_0x1d5),PTR_00806724[1].entries[iVar3 + -0xc],
                 (int)PTR_00806724->field_002C);
    }
    if ((g_playSystem_00802A38->field_00E4 & 1) == 0) {

      iVar3 = st::fn_004042AF(&param_1->field_0x1d5,'\x0e');
      local_8 = iVar3 + 1;
      if (0x18 < (int)local_8) {
        local_8 = 0x18;
      }
LAB_0058c38c:
      /* ST_CALLSITE[0058C38C]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      st::fn_00401064(reinterpret_cast<STT3DSprC *>(&param_1->field_0x1d5),'\x0e',local_8);
    }
  }
  else {
    puVar1 = &param_1->field_0x1d5;
    param_1->field_0231 = 5;
    /* ST_CALLSITE[0058C01A]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
    st::fn_00404264(reinterpret_cast<STT3DSprC *>(puVar1),0xe);
    st::fn_00402A90(reinterpret_cast<STT3DSprC *>(puVar1));
    /* ST_CALLSITE[0058C038]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    st::fn_00404183(reinterpret_cast<STT3DSprC *>(puVar1),8,PTR_00806774,st::mutable_c_string("explsna"),CASE_1D);
    /* ST_CALLSITE[0058C04D]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    st::fn_00405240(reinterpret_cast<STT3DSprC *>(puVar1),8,g_playSystem_00802A38->field_00E4);
    param_1->field_0045 = param_1->field_0045 + 0x12;
    param_1->field_0231 = 6;
  }
cf_common_exit_0058C391:
  /* ST_CALLSITE[0058C399]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
  st::fn_004030BC(reinterpret_cast<STT3DSprC *>(&param_1->field_0x1d5),'\x0e');
  /* ST_CALLSITE[0058C3A2]: CALL dword ptr [EAX + 0xd8]; [STIndirectCallsiteApplier] exact slot 0xD8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  STStructuralVirtualCall<undefined4>(param_1, 0xD8);
  return;
}

// 0058CF60 FUN_0058cf60
#line 4 "decomp/ST.exe/functions/0058CF60/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA97C>00403BF7

   [STObjectFactoryApplier] Central object factory for 0x014D (ST_OBJECT_TYPE_014D).
   Evidence: registry[75] at 007CA978 stores type 0x014D and executable pointer 00403BF7; allocation
   size 667 has no unique current class-layout match */

void * __cdecl st::fn_0058CF60(void)

{
  STSatC *pSVar1;

  /* ST_CALLSITE[0058CF65]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STSatC; signature=__stdcall;pointer:/STSatC;/uint */
  pSVar1 = st::pointer_boundary_cast<STSatC *>(st::fn_006B04D0(0x29b));
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00401ECE(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 0058CF90 FUN_0058cf90
#line 4 "decomp/ST.exe/functions/0058CF90/decomp.c"
void __thiscall st::fn_0058CF90(void *this,undefined4 param_1,undefined2 param_2)

{
  STField<undefined2>(this,0x299) = param_2;
  STField<undefined4>(this,0x279) = param_1;
  STField<undefined4>(this,0x24) = param_1;
  return;
}

// 0058CFC0 FUN_0058cfc0
#line 4 "decomp/ST.exe/functions/0058CFC0/decomp.c"
undefined4 st::fn_0058CFC0(void)

{
  return 0xfc;
}

// 0058CFE0 FUN_0058cfe0
#line 4 "decomp/ST.exe/functions/0058CFE0/decomp.c"
/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=4, ignored=0,
   unknown=0 */

int __cdecl st::fn_0058CFE0(RecoveredRecord_0058CFE0_6E80059E *param_1)

{
  DAT_00811720 = DAT_00811720 + 1;
  /* ST_CALLSITE[0058CFF9]: CALL 0x006acf50; direct=006ACF50 Library::DKW::LIB::MemRealloc; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_TLOBaseTy_0607; source view only; no Ghidra override */
  PTR_00811718 = static_cast<AnonPointee_TLOBaseTy_0607 *>(st::fn_006ACF50(PTR_00811718,DAT_00811720 * 4));
  /* ST_CALLSITE[0058D018]: CALL 0x006acf50; direct=006ACF50 Library::DKW::LIB::MemRealloc; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_TLOBaseTy_0607; source view only; no Ghidra override */
  PTR_0081171c = static_cast<AnonPointee_TLOBaseTy_0607 *>(st::fn_006ACF50(PTR_0081171c,DAT_00811720 * 4));
  if ((PTR_00811718 != nullptr) &&
     (PTR_0081171c != nullptr)) {
    *(undefined4 *)((int)PTR_00811718 + DAT_00811720 * 4 + -4) = param_1->field_0018;
    *(RecoveredRecord_0058CFE0_6E80059E **)((int)PTR_0081171c + DAT_00811720 * 4 + -4) = param_1;
    return 1;
  }
  return 0;
}

// 0058D080 FUN_0058d080
#line 4 "decomp/ST.exe/functions/0058D080/decomp.c"
undefined4 __cdecl st::fn_0058D080(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  iVar5 = DAT_00811720 + -1;
  if (-1 < iVar5) {
    piVar2 = (int *)((int)PTR_00811718 + iVar5 * 4);
    iVar1 = iVar5;
    do {
      if (param_1 == *piVar2) {
        iVar3 = iVar5 - iVar1;
        DAT_00811720 = iVar5;
        if (0 < iVar3) {
          puVar6 = &PTR_00811718->field_0004 + iVar1;
          puVar7 = &PTR_00811718->field_0000 + iVar1;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar6 = &PTR_0081171c->field_0004 + iVar1;
          puVar7 = &PTR_0081171c->field_0000 + iVar1;
          for (uVar4 = DAT_00811720 - iVar1 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
        }
        if (DAT_00811720 == 0) {
          st::fn_006AB060(&PTR_00811718);
          PTR_00811718 = nullptr;
          st::fn_006AB060(&PTR_0081171c);
          PTR_0081171c = nullptr;
        }
        return 1;
      }
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

// 0058D160 FUN_0058d160
#line 4 "decomp/ST.exe/functions/0058D160/decomp.c"
/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:4: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=4,
   pointer_dereferences=7, scalar_uses=0; sites=0058D172 dereference: MOVSX ECX,word ptr [EBX +
   0x41] | 0058D189 dereference: MOVSX ECX,word ptr [EBX + 0x43] | 0058D1B8 dereference: MOVSX
   ESI,word ptr [EBX + 0x41] | 0058D204 dereference: MOVSX EDI,word ptr [EBX + 0x43] | 0058D20C
   dereference: MOVSX EDI,word ptr [EBX + 0x43] | 0058D258 dereference: MOVSX ESI,word ptr [EBX +
   0x41] | 0058D25C dereference: MOV AX,word ptr [EBX + 0x45] */

undefined4 __cdecl
st::fn_0058D160(short param_1,short param_2,short param_3,short param_4,
            RecoveredRecord_0058D160_4B53BB8A *param_5,int param_6,int param_7,int param_8,
            int param_9,undefined2 *param_10,undefined2 *param_11,short *param_12)

{
  short sVar1;
  short sVar2;
  RecoveredRecord_0058D160_4B53BB8A *pRVar3;
  int iVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_8;

  pRVar3 = param_5;
  local_8 = 0;
  iVar6 = ((param_8 - param_6 >> 1) + (int)param_5->field_0041) - param_6;
  iVar8 = ((param_9 - param_7 >> 1) + (int)param_5->field_0043) - param_7;
  do {
    iVar7 = iVar6;
    iVar9 = iVar8;
    if (local_8 != 0) {
      iVar7 = param_6;
      iVar9 = param_7;
    }
    iVar6 = iVar7;
    if (iVar7 < 0) {
      iVar6 = -iVar7;
    }
    iVar8 = iVar9;
    if (iVar9 < 0) {
      iVar8 = -iVar9;
    }
    if (iVar8 < iVar6) {
      while( true ) {
        while (-1 < iVar7) {
          iVar6 = pRVar3->field_0041 + 0xc9;
          if (iVar6 <= (short)(param_3 * 0xc9 + 100)) goto LAB_0058d1fe;
          iVar7 = -1;
        }
        iVar6 = pRVar3->field_0041 + -0xc9;
        if ((short)(param_1 * 0xc9 + 100) <= iVar6) break;
        iVar7 = 1;
      }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_0058d1fe:
      param_6 = 0;
      iVar8 = (int)pRVar3->field_0043;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_7 = iVar9;
    }
    else {
      while( true ) {
        while (-1 < iVar9) {
          iVar8 = pRVar3->field_0043 + 0xc9;
          if (iVar8 <= (short)(param_4 * 0xc9 + 100)) goto LAB_0058d252;
          iVar9 = -1;
        }
        iVar8 = pRVar3->field_0043 + -0xc9;
        if ((short)(param_2 * 0xc9 + 100) <= iVar8) break;
        iVar9 = 1;
      }
LAB_0058d252:
      param_7 = 0;
      iVar6 = (int)pRVar3->field_0041;
      param_6 = iVar7;
    }
    sVar1 = *(short *)(pRVar3 + 1);
    if (sVar1 < 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = (RecoveredRecord_0058D160_4B53BB8A *)
                ((short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                        (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      param_5 = (RecoveredRecord_0058D160_4B53BB8A *)
                (short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                            (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f));
    }
    sVar4 = STBiasedDiv16(iVar8, 0xc9); /* exact signed 16-bit grid-index division */
    sVar5 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */

    iVar7 = st::fn_00404D3B(sVar5,sVar4,(short)param_5);
    if (iVar7 != 0) goto LAB_0058d3a9;
    local_8 = local_8 + 1;
  } while (local_8 < 2);
  local_8 = 0;
  while( true ) {
    if (iVar8 < 0) {
      sVar4 = (((short)(iVar8 / 0xc9) + sVar1) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      sVar4 = ((short)(iVar8 / 0xc9) + sVar1) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f);
    }
    if (iVar6 < 0) {
      sVar5 = (((short)(iVar6 / 0xc9) + sVar2) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      sVar5 = ((short)(iVar6 / 0xc9) + sVar2) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f);
    }

    iVar3 = st::fn_00404D3B(sVar5,sVar4,(short)param_5);
    if (iVar3 != 0) break;
    param_5 = (RecoveredRecord_0058D160_4B53BB8A *)((int)&param_5->field_0x1 % 5);
    local_8 = local_8 + 1;
    if (4 < local_8) {
      return 0;
    }
  }
LAB_0058d3a9:
  *param_10 = (short)iVar6;
  *param_11 = (short)iVar8;
  *param_12 = (short)param_5 * 200 + 100;
  return 1;
}

// 0058D480 FUN_0058d480
#line 4 "decomp/ST.exe/functions/0058D480/decomp.c"
int __cdecl st::fn_0058D480(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;

  local_8 = 0;
  iVar4 = param_1 - param_3;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  iVar6 = param_2 - param_3;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  iVar5 = param_1 + param_3;
  if (g_worldGrid.sizeX <= iVar5) {
    iVar5 = g_worldGrid.sizeX + -1;
  }
  iVar3 = param_3 + param_2;
  if (g_worldGrid.sizeY <= iVar3) {
    iVar3 = g_worldGrid.sizeY + -1;
  }
  iVar2 = DAT_00811720;
  while( true ) {
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return local_8;
      }
      iVar1 = (&PTR_0081171c->field_0000)[iVar2];
    } while (((((int)STField<short>(iVar1,0x41) < iVar4 * 0xc9) ||
              (iVar5 * 0xc9 < (int)STField<short>(iVar1,0x41))) ||
             ((int)STField<short>(iVar1,0x43) < iVar6 * 0xc9)) ||
            (iVar3 * 0xc9 < (int)STField<short>(iVar1,0x43)));
    if (param_5 == 1) break;
    if (param_5 != 0) goto LAB_0058d54d;
    if ((STField<int>(iVar1,0x20) == 0x32) || (STField<int>(iVar1,0x20) == 0x8c)) {
      /* ST_CALLSITE[0058D583]: CALL dword ptr [EAX + 0x18] */
      (*g_playSystem_00802A38->vtable->SendMessage)
                (reinterpret_cast<SystemWithNamedObjClassTy *>(g_playSystem_00802A38),param_4);
LAB_0058d559:
      local_8 = local_8 + 1;
    }
  }
  if ((STField<int>(iVar1,0x20) == 0x10e) || (STField<int>(iVar1,0x20) == 0x118)) {
    /* ST_CALLSITE[0058D547]: CALL dword ptr [EDX + 0x18] */
    (*g_playSystem_00802A38->vtable->SendMessage)
              (reinterpret_cast<SystemWithNamedObjClassTy *>(g_playSystem_00802A38),param_4);
    local_8 = local_8 + 1;
  }
LAB_0058d54d:
  /* ST_CALLSITE[0058D556]: CALL dword ptr [EDX + 0x18] */
  (*g_playSystem_00802A38->vtable->SendMessage)
            (reinterpret_cast<SystemWithNamedObjClassTy *>(g_playSystem_00802A38),param_4);
  goto LAB_0058d559;
}

// 0058D5E0 FUN_0058d5e0
#line 4 "decomp/ST.exe/functions/0058D5E0/decomp.c"
int __cdecl
st::fn_0058D5E0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  uint *puVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  iVar2 = DAT_00811720 + -1;
  if (iVar2 < 0) {
    return 0;
  }
  do {
    puVar1 = (undefined4 *)(&PTR_0081171c->field_0000)[iVar2];
    if ((((param_1 * 0xc9 <= (int)STField<short>(puVar1,0x41)) &&
         ((int)STField<short>(puVar1,0x41) <= param_3 * 0xc9)) &&
        (param_2 * 0xc9 <= (int)STField<short>(puVar1,0x43))) &&
       ((int)STField<short>(puVar1,0x43) <= param_4 * 0xc9)) {
      if (param_6 == 1) {
        if ((puVar1[8] == 0x10e) || (puVar1[8] == 0x118)) {
          /* ST_CALLSITE[0058D676]: CALL dword ptr [EDX] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)*puVar1)(param_5);
          iVar3 = iVar3 + 1;
        }
      }
      else if (((param_6 == 0) && (puVar1[8] != 0x32)) && (puVar1[8] != 0x8c)) goto LAB_0058d697;
      /* ST_CALLSITE[0058D694]: CALL dword ptr [EDX] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)*puVar1)(param_5);
      iVar3 = iVar3 + 1;
    }
LAB_0058d697:
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      return iVar3;
    }
  } while( true );
}

// 0058D6F0 FUN_0058d6f0
#line 4 "decomp/ST.exe/functions/0058D6F0/decomp.c"
undefined4 st::fn_0058D6F0(void)

{
  PTR_00811718 = nullptr;
  DAT_00811720 = 0;
  return 1;
}

// 0058D720 FUN_0058d720
#line 1 "decomp/ST.exe/functions/0058D720/decomp.c"

void st::fn_0058D720(void)

{
  if (PTR_00811718 != nullptr) {
    st::fn_006AB060(&PTR_00811718);
  }
  DAT_00811720 = 0;
  return;
}

// 0058E410 CreateSTShark
#line 4 "decomp/ST.exe/functions/0058E410/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8E4>00404A98

   [STObjectFactoryApplier] Central object factory for 0x0129 (ST_OBJECT_ST_SHARK).
   Evidence: registry[56] at 007CA8E0 stores type 0x0129 and executable pointer 00404A98; allocation
   size 655 uniquely matches /STSharkC */

STSharkC * __cdecl st::fn_0058E410(void)

{
  STSharkC *pSVar1;

  /* ST_CALLSITE[0058E415]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STSharkC; signature=__stdcall;pointer:/STSharkC;/uint */
  pSVar1 = st::pointer_boundary_cast<STSharkC *>(st::fn_006B04D0(0x28f));
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00403CE2(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 0058EEB0 FUN_0058eeb0
#line 4 "decomp/ST.exe/functions/0058EEB0/decomp.c"
void __fastcall st::fn_0058EEB0(RecoveredRecordView_0058EEB0_4D3DB5B5 *param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = g_worldGrid.sizeX + -1;
  iVar2 = g_worldGrid.sizeY + -1;
  if (((((int)param_1->field_027F < 0) || (param_1->field_0287 < 0)) ||
      ((int)param_1->field_0283 < 0)) ||
     (((param_1->field_028B < 0 || (iVar1 < (int)param_1->field_027F)) ||
      ((iVar1 < param_1->field_0287 ||
       ((iVar2 < (int)param_1->field_0283 || (iVar2 < param_1->field_028B)))))))) {
    param_1->field_027F = 0;
    param_1->field_0287 = iVar1;
    param_1->field_0283 = 0;
    param_1->field_028B = iVar2;
  }
  if (param_1->field_0287 <= (int)param_1->field_027F) {
    param_1->field_027F = 0;
    param_1->field_0287 = iVar1;
  }
  if (param_1->field_028B <= (int)param_1->field_0283) {
    param_1->field_0283 = 0;
    param_1->field_028B = iVar2;
  }
  if ((((iVar1 < param_1->field_026F) || (param_1->field_026F < 0)) || (iVar2 < param_1->field_0273)
      ) || (param_1->field_0273 < 0)) {
    param_1->field_026F = iVar1 >> 1;
    param_1->field_0273 = iVar2 >> 1;
  }
  if (((int)param_1->field_0277 < 0) || (4 < (int)param_1->field_0277)) {
    param_1->field_0277 = 2;
  }
  return;
}

// 0058F030 FUN_0058f030
#line 4 "decomp/ST.exe/functions/0058F030/decomp.c"
undefined4 __fastcall st::fn_0058F030(RecoveredRecordView_0058F030_1CB310F2 *param_1)

{
  int uVar1;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  short local_10 [2];
  short local_c [2];
  short local_8 [2];


  uVar1 = st::fn_006DB910((int)param_1->field_0047,(int)param_1->field_0049,(int)param_1->field_0231,
                       (int)param_1->field_0233);

  iVar1 = st::fn_006DB990(uVar1,8);
  uVar2 = param_1->field_001C * 0x41c64e6d + 0x3039;
  param_1->field_001C = uVar2;
  uVar2 = uVar2 >> 0x10;
  piVar9 = reinterpret_cast<int *>(local_8);
  piVar8 = reinterpret_cast<int *>(local_c);
  iVar5 = (int)param_1->field_0049;
  iVar6 = (int)param_1->field_0047;
  piVar7 = reinterpret_cast<int *>(local_10);
  iVar3 = (int)param_1->field_004B;

  iVar4 = st::fn_006ACF90(iVar6,iVar5,(int)param_1->field_0231,(int)param_1->field_0233);

  iVar1 = st::fn_0040244B(iVar1,(int)param_1->field_0235 - (int)param_1->field_004B,iVar4,iVar6,
                             iVar5,iVar3,piVar7,piVar8,piVar9,uVar2);
  if (iVar1 == 0) {
    st::fn_00405C90(param_1,8);
    st::fn_00405105(param_1,6);

    iVar1 = st::fn_00404318
                      (reinterpret_cast<RecoveredReceiver_004167A0 *>(param_1),param_1->field_0231,param_1->field_0233
                       ,param_1->field_0235);
    if (iVar1 == 0) {
      return 1;
    }
  }
  else {
    st::fn_00405C90(param_1,8);
    st::fn_00405105(param_1,6);

    iVar1 = st::fn_00404318
                      (reinterpret_cast<RecoveredReceiver_004167A0 *>(param_1),local_10[0],local_c[0],local_8[0]);
    if (iVar1 == 0) {
      return 1;
    }

    iVar1 = st::fn_00404318
                      (reinterpret_cast<RecoveredReceiver_004167A0 *>(param_1),param_1->field_0231,param_1->field_0233
                       ,param_1->field_0235);
    if (iVar1 == 0) {
      return 1;
    }
  }
  param_1->field_0253 = 0x1f;
  return 0;
}

// 0058F1E0 FUN_0058f1e0
#line 4 "decomp/ST.exe/functions/0058F1E0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0058F1E0 returns stored into /STSharkC+0x257 @ 0058EBA1 | 0058F1E0 returns stored into
   /STSharkC+0x257 @ 0058EBEB */

STSharkC_field_0257State __thiscall st::fn_0058F1E0(void *this,int param_1)

{
  short sVar1;
  STSharkC_field_0257State SVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;

  sVar5 = STField<short>(this,0x47);
  if ((STField<int>(this,0x27f) <= (int)sVar5) && ((int)sVar5 <= STField<int>(this,0x287))) {
    sVar1 = STField<short>(this,0x49);
    if ((STField<int>(this,0x283) <= (int)sVar1) && ((int)sVar1 <= STField<int>(this,0x28b)))
    {
      if ((((sVar5 == STField<short>(this,0x231)) && (sVar1 == STField<short>(this,0x233))) &&
          (STField<short>(this,0x4b) == STField<short>(this,0x235))) || (param_1 != 0)) {

        SVar2 = st::fn_0040194C(this,(undefined2 *)((int)this + 0x231),
                                   (undefined2 *)((int)this + 0x233),
                                   (undefined2 *)((int)this + 0x235),(short *)((int)this + 0x237));
        if (SVar2 == CASE_2) {
          STField<undefined4>(this,0x253) = 0;
        }
      }
      else {
        SVar2 = CASE_2;
      }
      goto LAB_0058f34a;
    }
  }
  iVar6 = STField<int>(this,0x287) - STField<int>(this,0x27f);
  uVar7 = st::storage_bit_cast<int>(static_cast<uint32_t>(iVar6 - 1U)) >> 0x1f;
  uVar3 = (STField<int>(this,0x28b) - STField<int>(this,0x283)) - 1;
  uVar8 = (int)uVar3 >> 0x1f;
  if (iVar6 < 1) {
    sVar5 = -(ushort)(iVar6 != 0);
  }
  else {
    sVar5 = 1;
  }
  uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x1c) = uVar4;
  STField<short>(this,0x231) =
       (short)((uVar4 >> 0x10) % (((iVar6 - 1U ^ uVar7) - uVar7) + 1)) * sVar5 +
       STField<short>(this,0x27f);
  if (STField<int>(this,0x28b) - STField<int>(this,0x283) < 1) {
    iVar6 = -st::storage_bit_cast<uint>(static_cast<uint32_t>(STField<int>(this,0x28b) != STField<int>(this,0x283)));
  }
  else {
    iVar6 = 1;
  }
  SVar2 = CASE_3;
  uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x1c) = uVar7;
  STField<undefined2>(this,0x235) = STField<undefined2>(this,0x4b);
  STField<short>(this,0x233) =
       (short)(((uVar7 >> 0x10) % (((uVar3 ^ uVar8) - uVar8) + 1)) * iVar6) +
       STField<short>(this,0x283);
LAB_0058f34a:
  switch(SVar2) {

  case CASE_1:
  case CASE_2:
  case CASE_3:
    iVar6 = st::fn_00404F3E(static_cast<RecoveredRecordView_0058F030_1CB310F2 *>(this));
    if (iVar6 == 0) {
      return CASE_0;
    }
    break;
  case CASE_6:

    iVar6 = st::fn_004021E9(this,STField<short>(this,0x6c),STField<short>(this,0x237));
    if (iVar6 != 0) {
      SVar2 = CASE_0;
    }
  }
  return SVar2;
}

// 0058F680 FUN_0058f680
#line 4 "decomp/ST.exe/functions/0058F680/decomp.c"
int __thiscall
st::fn_0058F680(void *this,undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,short *param_4)

{
  int iVar2;
  int iVar1;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  short sVar12;
  short sVar13;
  int local_1c;
  int local_18;
  int local_14;
  int local_8;

  uVar9 = 0;
  uVar7 = 0;
  /* ST_CALLSITE[0058F68F]: CALL 0x0040259a; direct=0040259A STSharkC::sub_0058F430 */
  local_1c = st::fn_0040259A(static_cast<STSharkC *>(this));
  if (STField<int>(this,0x23d) != 0) {
    return local_1c;
  }
  iVar4 = (int)STField<short>(this,0x47);
  if ((((iVar4 <= STField<int>(this,0x27f)) &&
       (((sVar5 = STField<short>(this,0x6c), sVar5 == 0xe1 || (sVar5 == 0xb4)) || (sVar5 == 0x87)
        ))) || ((STField<int>(this,0x287) <= iVar4 &&
                (((sVar5 = STField<short>(this,0x6c), sVar5 == 0x2d || (sVar5 == 0)) ||
                 (sVar5 == 0x13b)))))) ||
     (((iVar6 = (int)STField<short>(this,0x49), iVar6 <= STField<int>(this,0x283) &&
       (((sVar5 = STField<short>(this,0x6c), sVar5 == 0x87 || (sVar5 == 0x5a)) || (sVar5 == 0x2d)
        ))) || ((STField<int>(this,0x28b) <= iVar6 &&
                (((sVar5 = STField<short>(this,0x6c), sVar5 == 0xe1 || (sVar5 == 0x10e)) ||
                 (sVar5 == 0x13b)))))))) {
    sVar5 = (short)((sVar5 + 0x2d) % 0x168);
    *param_4 = sVar5;
    while (sVar5 < 0) {
      *param_4 = *param_4 + 0x168;
      sVar5 = *param_4;
    }
    return 6;
  }
  local_18 = iVar4 + -1;
  if (iVar4 + -1 < STField<int>(this,0x27f)) {
    local_18 = STField<int>(this,0x27f);
  }
  local_14 = iVar6 + -1;
  if (iVar6 + -1 < STField<int>(this,0x283)) {
    local_14 = STField<int>(this,0x283);
  }
  iVar4 = STField<short>(this,0x47) + 1;
  if (STField<int>(this,0x287) < iVar4) {
    iVar4 = STField<int>(this,0x287);
  }
  local_8 = iVar6 + 1;
  if (STField<int>(this,0x28b) < iVar6 + 1) {
    local_8 = STField<int>(this,0x28b);
  }
  do {
    iVar6 = (int)((ulonglong)((longlong)(int)STField<short>(this,0x6c) * -0x49f49f49) >> 0x20) +
            (int)STField<short>(this,0x6c);
    switch((iVar6 >> 5) - (iVar6 >> 0x1f)) {
    case 0:
      if (iVar4 < 0) {
        iVar6 = STField<int>(this,0x1c);
      }
      else {
        iVar6 = STField<int>(this,0x1c);
      }
      uVar7 = iVar6 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      uVar9 = (uVar7 >> 0x10) % ((STField<int>(this,0x287) - iVar4) + 1U) + iVar4;
      iVar6 = uVar9 - (int)STField<short>(this,0x47);
      iVar3 = STField<short>(this,0x49) - iVar6;
      if (iVar3 < 0) {
        iVar2 = STField<int>(this,0x1c);
      }
      else {
        iVar2 = STField<int>(this,0x1c);
      }
      uVar7 = iVar2 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      uVar7 = (uVar7 >> 0x10) % (((STField<short>(this,0x49) + iVar6) - iVar3) + 1U) + iVar3;
      break;
    case 1:
      uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      uVar7 = (uVar7 >> 0x10) % (local_14 + 1U);
      goto LAB_0058fb0d;
    case 2:
      uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      uVar7 = (uVar7 >> 0x10) % (local_14 + 1U);
      iVar3 = (int)STField<short>(this,0x49) - uVar7;
      iVar6 = STField<short>(this,0x47) + iVar3;
      iVar3 = STField<short>(this,0x47) - iVar3;
      if (iVar3 < 0) {
        uVar9 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar9;
        uVar9 = (uVar9 >> 0x10) % ((iVar6 - iVar3) + 1U) + iVar3;
      }
      else {
        uVar9 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar9;
        uVar9 = (uVar9 >> 0x10) % ((iVar6 - iVar3) + 1U) + iVar3;
      }
      break;
    case 3:
      uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      uVar9 = (uVar7 >> 0x10) % (local_18 + 1U);
      uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      uVar7 = (uVar7 >> 0x10) % (local_14 + 1U);
      break;
    case 4:
      uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      uVar9 = (uVar7 >> 0x10) % (local_18 + 1U);
      iVar3 = (int)STField<short>(this,0x47) - uVar9;
      iVar6 = STField<short>(this,0x49) + iVar3;
      iVar3 = STField<short>(this,0x49) - iVar3;
      if (iVar3 < 0) {
        uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar7;
        uVar7 = (uVar7 >> 0x10) % ((iVar6 - iVar3) + 1U) + iVar3;
      }
      else {
        uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar7;
        uVar7 = (uVar7 >> 0x10) % ((iVar6 - iVar3) + 1U) + iVar3;
      }
      break;
    case 5:
      if (local_8 < 0) {
        iVar6 = STField<int>(this,0x1c);
      }
      else {
        iVar6 = STField<int>(this,0x1c);
      }
      uVar7 = iVar6 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      uVar7 = (uVar7 >> 0x10) % ((STField<int>(this,0x28b) - local_8) + 1U) + local_8;
      uVar9 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar9;
      uVar9 = (uVar9 >> 0x10) % (local_18 + 1U);
      break;
    case 6:
      if (local_8 < 0) {
        iVar6 = STField<int>(this,0x1c);
      }
      else {
        iVar6 = STField<int>(this,0x1c);
      }
      uVar7 = iVar6 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      uVar7 = (uVar7 >> 0x10) % ((STField<int>(this,0x28b) - local_8) + 1U) + local_8;
      iVar6 = uVar7 - (int)STField<short>(this,0x49);
      iVar3 = STField<short>(this,0x47) - iVar6;
      if (iVar3 < 0) {
        iVar2 = STField<int>(this,0x1c);
      }
      else {
        iVar2 = STField<int>(this,0x1c);
      }
      uVar9 = iVar2 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar9;
      uVar9 = (uVar9 >> 0x10) % (((STField<short>(this,0x47) + iVar6) - iVar3) + 1U) + iVar3;
      break;
    case 7:
      if (local_8 < 0) {
        iVar6 = STField<int>(this,0x1c);
      }
      else {
        iVar6 = STField<int>(this,0x1c);
      }
      uVar7 = iVar6 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      uVar7 = (uVar7 >> 0x10) % ((STField<int>(this,0x28b) - local_8) + 1U) + local_8;
LAB_0058fb0d:
      if (iVar4 < 0) {
        iVar6 = STField<int>(this,0x1c);
      }
      else {
        iVar6 = STField<int>(this,0x1c);
      }
      uVar9 = iVar6 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar9;
      uVar9 = (uVar9 >> 0x10) % ((STField<int>(this,0x287) - iVar4) + 1U) + iVar4;
    }
    if ((uVar9 != (int)STField<short>(this,0x47)) || (uVar7 != (int)STField<short>(this,0x49))
       ) {
      if ((int)uVar9 < 0) {
        uVar9 = 0;
      }
      if ((int)STField<uint>(this,0x287) < (int)uVar9) {
        uVar9 = STField<uint>(this,0x287);
      }
      if ((int)uVar7 < 0) {
        uVar7 = 0;
      }
      if ((int)STField<uint>(this,0x28b) < (int)uVar7) {
        uVar7 = STField<uint>(this,0x28b);
      }
      uVar8 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar8;
      iVar4 = STField<short>(this,0x4b) + -2 + (uVar8 >> 0x10) % 5;
      if (iVar4 < 5) {
        if (iVar4 < 0) {
          iVar4 = 0;
        }
      }
      else {
        iVar4 = 4;
      }
      iVar6 = iVar4 + 5;
      if (iVar4 < iVar6) {
        local_1c = 2;
        iVar3 = iVar4;
        do {
          uVar8 = uVar7;
          uVar10 = uVar9;
          iVar4 = iVar3;
          if (4 < iVar3) {
            iVar4 = iVar3 + -5;
          }
          do {
            while( true ) {
              while( true ) {
                while( true ) {
                  sVar5 = (short)uVar10;
                  sVar12 = (short)uVar8;
                  sVar13 = (short)iVar4;
                  iVar1 = st::fn_00404D3B(sVar5,sVar12,sVar13);
                  if (((iVar1 != 0) &&
                      (((sVar5 < 0 || (g_worldGrid.sizeX <= sVar5)) ||
                       ((sVar12 < 0 ||
                        ((((g_worldGrid.sizeY <= sVar12 || (sVar13 < 0)) ||
                          (g_worldGrid.sizeZ <= sVar13)) ||
                         (STGridAt3D(g_worldGrid, sVar5, sVar12, sVar13).objects[0] ==
                          nullptr)))))))) &&
                     (((sVar5 < 0 || (g_worldGrid.sizeX <= sVar5)) ||
                      ((sVar12 < 0 ||
                       (((g_worldGrid.sizeY <= sVar12 || (sVar13 < 0)) ||
                        ((g_worldGrid.sizeZ <= sVar13 ||
                         (STGridAt3D(g_worldGrid, sVar5, sVar12, sVar13).objects[1] ==
                          nullptr)))))))))) goto LAB_0058fd1a;
                  bVar11 = st::storage_bit_cast<int>(static_cast<uint32_t>(uVar10 - (int)STField<short>(this,0x47))) < 0;
                  if (uVar10 == (int)STField<short>(this,0x47) || bVar11) break;
                  uVar10 = uVar10 - 1;
                  if ((int)uVar10 < 0) goto LAB_0058fcfe;
                }
                if (!bVar11) break;
                uVar10 = uVar10 + 1;
              }
              bVar11 = -1 < st::storage_bit_cast<int>(static_cast<uint32_t>(uVar8 - (int)STField<short>(this,0x49)));
              if (uVar8 != (int)STField<short>(this,0x49) && bVar11) break;
              if (bVar11) goto LAB_0058fcfe;
              uVar8 = uVar8 + 1;
            }
            uVar8 = uVar8 - 1;
          } while (-1 < (int)uVar8);
LAB_0058fcfe:
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar6);
      }
      else {
        uVar8 = uVar7;
        uVar10 = uVar9;
        if (local_1c != 0) {
LAB_0058fd1a:
          *param_1 = (short)uVar10;
          *param_2 = (short)uVar8;
          *param_3 = (short)iVar4;
          return local_1c;
        }
      }
      sVar5 = (short)((STField<short>(this,0x6c) + 0x2d) % 0x168);
      *param_4 = sVar5;
      while (sVar5 < 0) {
        *param_4 = *param_4 + 0x168;
        sVar5 = *param_4;
      }
      return 6;
    }
  } while( true );
}
