#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/006B.cpp

// 006B0020 FUN_006b0020
#line 1 "decomp/ST.exe/functions/006B0020/decomp.c"

/* [STReturnSemanticsApplier] pointer_producer_argument_roundtrip.
   Evidence: every reachable RET carries the same trusted pointer-producer ABI pointer:/void; at
   least one path passes that exact live EAX value into a pointer parameter which the helper's
   complete machine CFG returns unchanged in EAX (roundtrip_calls=1); machine CFG audit: used=96,
   ignored=0, unknown=0 */

void * st::fn_006B0020(uint *param_1,int *param_2)

{
  uint *puVar1;

  if (param_2 != nullptr) {
    *param_2 = 0;
  }
  /* ST_CALLSITE[006B0040]: CALL 0x006aac70; direct=006AAC70 Library::DKW::LIB::MemAlloc; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
  puVar1 = static_cast<uint *>(st::fn_006AAC70(param_1[3] * param_1[2] + 0x1c));
  if (puVar1 == nullptr) {
    return nullptr;
  }
  st::fn_006AFFC0(param_1,puVar1,param_2);
  return puVar1;
}

// 006B0060 FUN_006b0060
#line 4 "decomp/ST.exe/functions/006B0060/decomp.c"
/* [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   pointer:/SubmarineTitans/Recovered/DArrayTy; no intervening CALL or EAX/AX/AL/AH definition
   exists; machine CFG audit: used=63, ignored=1, unknown=0 */

DArrayTy * st::fn_006B0060(uint *param_1,uint *param_2)

{
  DArrayTy *pDVar1;
  uint uVar2;
  uint *puVar4;
  uint *puVar5;

  pDVar1 = st::fn_006AE290(reinterpret_cast<DArrayTy *>(param_1),param_2[4],param_2[2],param_2[5]);
  if (pDVar1 == nullptr) {
    return nullptr;
  }
  pDVar1->flags = pDVar1->flags | *param_2;
  uVar2 = pDVar1->elementSize * param_2[3];
  pDVar1->count = param_2[3];
  puVar4 = param_2 + 7;
  puVar5 = static_cast<uint *>(pDVar1->data);
  memmove(puVar5, puVar4, uVar2); /* compiler REP MOVS byte copy */
  return pDVar1;
}

// 006B00C0 FUN_006b00c0
#line 4 "decomp/ST.exe/functions/006B00C0/decomp.c"
uint * st::fn_006B00C0(uint *param_1,uint *param_2,undefined *param_3)

{
  DArrayTy *pDVar1;
  uint uVar2;
  int iVar4;
  uint *puVar5;
  uint *puVar6;

  pDVar1 = st::fn_006AE290(reinterpret_cast<DArrayTy *>(param_1),param_2[4],param_2[2],param_2[5]);
  if (pDVar1 == nullptr) {
    return nullptr;
  }
  pDVar1->flags = pDVar1->flags | *param_2 | 0x100;
  pDVar1->count = param_2[3];
  uVar2 = pDVar1->elementSize * pDVar1->count;
  pDVar1->growCallback = param_3;
  puVar5 = param_2 + 7;
  puVar6 = static_cast<uint *>(pDVar1->data);
  memmove(puVar6, puVar5, uVar2); /* compiler REP MOVS byte copy */
  iVar4 = pDVar1->capacity - pDVar1->count;
  if (iVar4 != 0) {
    /* ST_CALLSITE[006B012D]: CALL EDX */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (*(code *)param_3)(pDVar1->data,pDVar1->count,iVar4);
  }
  return &pDVar1->flags;
}

// 006B0140 LoadResourceString
#line 1 "decomp/ST.exe/functions/006B0140/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005DE5B0 -> 006B0140 @ 005DE5F2 | 006B0140 -> EXTERNAL:00000097 @ 006B0183

   [STUtilityFunctionApplier] load_resource_string: loads a Win32 string resource into the process
   ring buffer and returns its address
   Evidence: body pattern verified */

char * st::fn_006B0140(UINT resourceId,HINSTANCE module)

{
  uint uVar1;
  char *pcVar2;

  if (0x1004 < st::storage_bit_cast<int>(static_cast<uint32_t>(g_resourceStringBufferOffset + 0x800))) {
    g_resourceStringBufferOffset = 0;
  }
  if (st::machine_word_boundary_cast<uint>(module) == st::machine_word_boundary_cast<uint>((HINSTANCE)0x0)) {
    /* ST_CALLSITE[006B0166]: CALL dword ptr [0x0085bc4c]; [STCallResultViewApplier] presentation_only; exact direct-call result=/WinDef.h/HINSTANCE; source view only; no Ghidra override */
    module = st::external_00000048((LPCSTR)0x0);
  }
  /* ST_CALLSITE[006B0183]: CALL dword ptr [0x0085be44] */
  uVar1 = st::external_00000097(module,resourceId,reinterpret_cast<LPSTR>(g_resourceStringBuffer + g_resourceStringBufferOffset),0x800);
  pcVar2 = g_resourceStringBuffer + g_resourceStringBufferOffset;
  if ((uVar1 != 0) && (uVar1 < 0x800)) {
    g_resourceStringBufferOffset = g_resourceStringBufferOffset + 1 + uVar1;
    return pcVar2;
  }
  g_resourceStringBuffer[g_resourceStringBufferOffset] = '\0';
  g_resourceStringBufferOffset = g_resourceStringBufferOffset + 1;
  return pcVar2;
}

// 006B01D0 FUN_006b01d0
#line 4 "decomp/ST.exe/functions/006B01D0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 6.
   Evidence: raw retained-width parameter lifetime: width=1, reads=1, sites=006B022A MOV AL,byte ptr
   [EBP + 0x20] */

void st::fn_006B01D0(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                 byte param_7)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;

  if ((0 < (int)param_5) && (0 < param_6)) {
    pbVar2 = (byte *)(param_1 + param_2 * param_4 + param_3);
    while (param_6 != 0) {
      pbVar3 = pbVar2;
      for (uVar1 = param_5 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(uint *)pbVar3 = CONCAT22(CONCAT11(param_7,param_7),CONCAT11(param_7,param_7));
        pbVar3 = pbVar3 + 4;
      }
      for (uVar1 = param_5 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *pbVar3 = param_7;
        pbVar3 = pbVar3 + 1;
      }
      pbVar2 = pbVar2 + param_2;
      param_6 = param_6 + -1;
    }
  }
  return;
}

// 006B0290 FUN_006b0290
#line 4 "decomp/ST.exe/functions/006B0290/decomp.c"
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00428B20 -> 006B0290 @ 00428C58 */

void st::fn_006B0290(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,
                 int param_7,int param_8,uint param_9,int param_10)

{
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  puStack_c = (undefined *)&DAT_0079d880;
  puStack_10 = (byte *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  st::fn_006CEA60((byte *)(param_2 * param_4 + param_1 + param_3),param_2,
           (byte *)((int)param_5 + param_7 + param_6 * param_8),param_6,param_9,param_10);
  ExceptionList = local_14;
  return;
}

// 006B0330 FUN_006b0330
#line 4 "decomp/ST.exe/functions/006B0330/decomp.c"
void st::fn_006B0330(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,char param_11)

{
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  puStack_c = (undefined *)&DAT_0079d890;
  puStack_10 = (byte *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  st::fn_006CEBE0((char *)(param_2 * param_4 + param_1 + param_3),param_2,
               (char *)(param_6 * param_8 + param_5 + param_7),param_6,param_9,param_10,param_11);
  ExceptionList = local_14;
  return;
}

// 006B03D0 FUN_006b03d0
#line 4 "decomp/ST.exe/functions/006B03D0/decomp.c"
void st::fn_006B03D0(char *param_1,char *param_2,int param_3,int param_4,char param_5)

{
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  puStack_c = (undefined *)&DAT_0079d8a0;
  puStack_10 = (byte *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  st::fn_006CEBE0(param_1,param_3,param_2,param_3,param_3,param_4,param_5);
  ExceptionList = local_14;
  return;
}

// 006B0460 FUN_006b0460
#line 4 "decomp/ST.exe/functions/006B0460/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (36), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00428E50 @ 00429601 -> read as EAX on
   every CFG path | 00428E50 @ 00429874 -> read as EAX on every CFG path | 00428E50 @ 00429A45 ->
   read as EAX on every CFG path | 00428E50 @ 00429C44 -> read as EAX on every CFG path | 006B91A0 @
   006B91E5 -> read as EAX on every CFG path | 006B92B0 @ 006B9323 -> read as EAX on every CFG path
   | 006BC970 @ 006BCA13 -> read as EAX on every CFG path | 006BCD10 @ 006BCF4C -> read as EAX on
   every CFG path | 006D0680 @ 006D06E7 -> read as EAX on every CFG path | 006D0680 @ 006D076B ->
   read as EAX on every CFG path | 006D0820 @ 006D089A -> read as EAX on every CFG path | 006DDD50 @
   006DE0F7 -> read as EAX on every CFG path | 006DE9C0 @ 006E08B9 -> read as EAX on every CFG path
   | 006DE9C0 @ 006E0AD3 -> read as EAX on every CFG path | 006DE9C0 @ 006E0CE9 -> read as EAX on
   every CFG path | 006DE9C0 @ 006E0EFB -> read as EAX on every CFG path | 006E6AF0 @ 006E6C48 ->
   read as EAX on every CFG path | 006E8EA0 @ 006E8FE6 -> unknown: terminal before explicit
   accumulator kill | 006EB570 @ 006EB608 -> read as EAX on every CFG path | 006EC010 @ 006EC0F5 ->
   read as EAX on every CFG path | 006EC010 @ 006EC1CC -> read as EAX on every CFG path | 006EC010 @
   006EC415 -> read as EAX on every CFG path | 006EC010 @ 006EC582 -> read as EAX on every CFG path
   | 006EC010 @ 006EC6D9 -> read as EAX on every CFG path */

int __fastcall st::fn_006B0460(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;

  iVar2 = *param_2;
  iVar1 = iVar2 + param_2[2];
  if (iVar2 <= *param_3) {
    iVar2 = *param_3;
  }
  if (*param_3 + param_3[2] <= iVar1) {
    iVar1 = *param_3 + param_3[2];
  }
  if (iVar1 - iVar2 != 0 && iVar2 <= iVar1) {
    *param_1 = iVar2;
    param_1[2] = iVar1 - iVar2;
    iVar2 = param_2[1];
    iVar1 = iVar2 + param_2[3];
    if (iVar2 <= param_3[1]) {
      iVar2 = param_3[1];
    }
    if (param_3[1] + param_3[3] <= iVar1) {
      iVar1 = param_3[1] + param_3[3];
    }
    if (iVar1 - iVar2 != 0 && iVar2 <= iVar1) {
      param_1[1] = iVar2;
      param_1[3] = iVar1 - iVar2;
      return 1;
    }
  }
  return 0;
}

// 006B04D0 FUN_006b04d0
#line 4 "decomp/ST.exe/functions/006B04D0/decomp.c"
undefined4 * st::fn_006B04D0(uint param_1)

{
  int *piVar1;
  int *piVar3;

  if (param_1 == 0) {
    param_1 = 1;
  }
  piVar1 = st::fn_00402B21(param_1);
  if (piVar1 != nullptr) {
    piVar3 = piVar1;
    memset(piVar3, 0, param_1); /* compiler bulk-zero initialization */
    return reinterpret_cast<undefined4 *>(piVar1);
  }
  return nullptr;
}

// 006B0520 FUN_006b0520
#line 4 "decomp/ST.exe/functions/006B0520/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006B0A20 -> 006B0520 @ 006B0B2C

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006B0A20 -> 006B0520 @ 006B0B2C; FUN_006b0a20 parameter param_1

   [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=3, ignored=0, unknown=0 */

int st::fn_006B0520(RecoveredGlobalRecordView_00854EB8 *param_1,int param_2,UINT param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  byte *pbVar3;

  if (*(int *)&param_1->field_0x24 == 0x10) {
    if (*(int *)&param_1[1].field_0x8 == 0) {

      puVar1 = st::fn_006B04D0(0x200);
      *(undefined4 **)&param_1[1].field_0x8 = puVar1;
      if (puVar1 == nullptr) {
        return -2;
      }
    }
    if (0 < param_4) {
      iVar2 = param_3 * 2;
      pbVar3 = (byte *)(param_2 + 1);
      do {
        *(ushort *)(iVar2 + *(int *)&param_1[1].field_0x8) =
             (ushort)(st::storage_bit_cast<int>(static_cast<uint32_t>((uint)pbVar3[-1] << 8)) >> ((byte)param_1[1].field_0018 & 0x1f)) &
             (ushort)param_1[1].field_000C |
             (ushort)(st::storage_bit_cast<int>(static_cast<uint32_t>((uint)pbVar3[1] << 8)) >> ((byte)param_1[1].field_0020 & 0x1f)) &
             *(ushort *)&param_1[1].field_0x14 |
             (ushort)(st::storage_bit_cast<int>(static_cast<uint32_t>((uint)*pbVar3 << 8)) >> ((byte)param_1[1].field_001C & 0x1f)) &
             *(ushort *)&param_1[1].field_0x10;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = param_4 + -1;
        iVar2 = iVar2 + 2;
        pbVar3 = pbVar3 + 4;
      } while (param_4 != 0);
      return 0;
    }
  }
  else if (0x10 < *(int *)&param_1->field_0x24) {
    if (*(int *)&param_1[1].field_0x8 == 0) {

      puVar1 = st::fn_006B04D0(0x400);
      *(undefined4 **)&param_1[1].field_0x8 = puVar1;
      if (puVar1 == nullptr) {
        return -2;
      }
    }
    if (0 < param_4) {
      pbVar3 = (byte *)(param_2 + 1);
      iVar2 = param_3 << 2;
      do {
        *(uint *)(iVar2 + *(int *)&param_1[1].field_0x8) =
             ((uint)pbVar3[-1] << 0x10) >> ((byte)param_1[1].field_0018 & 0x1f) &
             param_1[1].field_000C |
             ((uint)pbVar3[1] << 0x10) >> ((byte)param_1[1].field_0020 & 0x1f) &
             *(uint *)&param_1[1].field_0x14 |
             ((uint)*pbVar3 << 0x10) >> ((byte)param_1[1].field_001C & 0x1f) &
             *(uint *)&param_1[1].field_0x10;
        param_4 = param_4 + -1;
        pbVar3 = pbVar3 + 4;
        iVar2 = iVar2 + 4;
      } while (param_4 != 0);
    }
  }
  return 0;
}

// 006B06A0 FUN_006b06a0
#line 4 "decomp/ST.exe/functions/006B06A0/decomp.c"
/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:2: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=4, scalar_uses=0; sites=006B079F dereference: MOV DL,byte ptr [EAX + -0x2] |
   006B07A8 dereference: MOV DL,byte ptr [EAX + -0x5] | 006B07AE dereference: MOV DL,byte ptr [EAX +
   -0x4] | 006B07B3 dereference: MOV DL,byte ptr [EAX + -0x3] */

bool st::fn_006B06A0(RecoveredGlobalRecordView_00854EB8 *param_1,LOGPALETTE *param_2,void *param_3,
                 UINT param_4,int param_5)

{
  UINT iStart;
  int *piVar1;
  HDC pHVar2;
  BYTE *pBVar3;
  BYTE *pBVar4;
  HPALETTE pHVar5;
  int iVar7_mg7;
  BYTE BVar6;
  int iVar7;
  LOGPALETTE *pLVar8;
  WORD *pWVar9;
  tagLOGPALETTE **pptVar10;
  uint *puVar11;
  tagLOGPALETTE *local_408;
  tagPALETTEENTRY *local_404;
  LOGPALETTE *pLVar8_mg0;

  if (st::machine_word_boundary_cast<uint>(*(HGDIOBJ *)param_1) != st::machine_word_boundary_cast<uint>((HGDIOBJ)0x0)) {
    /* ST_CALLSITE[006B06B6]: CALL dword ptr [0x0085ba78] */
    st::external_000000A6(*(HGDIOBJ *)param_1);
    *(undefined4 *)param_1 = 0;
  }
  if (st::machine_word_boundary_cast<uint>(param_1->field_04B4) != st::machine_word_boundary_cast<uint>((HPALETTE)0x0)) {
    /* ST_CALLSITE[006B06CD]: CALL dword ptr [0x0085ba78] */
    st::external_000000A6(param_1->field_04B4);
    param_1->field_04B4 = (HPALETTE)0x0;
  }
  pLVar8_mg0 = param_2;
  for (iVar7 = 0x101; iVar7 != 0; iVar7 = iVar7 + -1) {
    pLVar8_mg0->palVersion = 0;
    pLVar8_mg0->palNumEntries = 0;
    pLVar8_mg0 = reinterpret_cast<LOGPALETTE *>(pLVar8_mg0->palPalEntry);
  }
  param_2->palVersion = 0x300;
  param_2->palNumEntries = 0x100;
  piVar1 = (int *)param_1->field_003C;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  if ((piVar1 == nullptr) ||
     /* ST_CALLSITE[006B070D]: CALL dword ptr [ECX + 0x10] */
     (iVar7 = (**(code **)(*piVar1 + 0x10))(piVar1,0,0,0x100,param_2->palPalEntry), iVar7 != 0)) {
    /* ST_CALLSITE[006B0716]: CALL dword ptr [0x0085be4c] */
    pHVar2 = st::external_00000099((HWND)0x0);
    /* ST_CALLSITE[006B072A]: CALL dword ptr [0x0085ba80] */
    st::external_000000A8(pHVar2,0,0x100,reinterpret_cast<LPPALETTEENTRY>(param_2->palPalEntry));
    /* ST_CALLSITE[006B0733]: CALL dword ptr [0x0085be48] */
    st::external_00000098((HWND)0x0,pHVar2);
  }
  if (((param_1->field_0x8 & 1) == 0) && (param_1->field_0020 < 9)) {
    iVar7 = 0;
    pBVar3 = &param_2->palPalEntry[0].peGreen;
    pWVar9 = &param_2[0x80].palNumEntries;
    pLVar8 = param_2 + 0x80;
    do {
      BVar6 = (BYTE)iVar7;
      ((PALETTEENTRY *)(pBVar3 + -1))->peRed = BVar6;
      *pBVar3 = '\0';
      pBVar3[1] = '\0';
      pBVar3[2] = '\x02';
      iVar7 = iVar7 + 1;
      *(BYTE *)&pLVar8->palVersion = -1 - BVar6;
      *(undefined1 *)((int)pWVar9 + -1) = 0;
      *(undefined1 *)pWVar9 = 0;
      STField<undefined1>(pWVar9,1) = 2;
      pBVar3 = pBVar3 + 4;
      pWVar9 = pWVar9 + -2;
      pLVar8 = reinterpret_cast<LOGPALETTE *>(pLVar8[-1].palPalEntry);
    } while (iVar7 < 10);
  }
  if (0 < param_5) {
    pBVar3 = &param_2->palPalEntry[param_4].peBlue;
    pBVar4 = (BYTE *)((int)param_3 + 2);
    iVar7 = param_5;
    do {
      ((PALETTEENTRY *)(pBVar3 + -2))->peRed = pBVar4[-2];
      pBVar3[-1] = pBVar4[-1];
      *pBVar3 = *pBVar4;
      pBVar3[1] = pBVar4[1] | 4;
      pBVar3 = pBVar3 + 4;
      iVar7 = iVar7 + -1;
      pBVar4 = pBVar4 + 4;
    } while (iVar7 != 0);
  }
  if ((*(uint *)&param_1->field_0x8 & 0x20000000) == 0) {
    *(undefined1 *)((int)&param_2[0x80].palNumEntries + 1) = 4;
    *(undefined1 *)&param_2[0x80].palVersion = 0xff;
    *(undefined1 *)((int)&param_2[0x80].palVersion + 1) = 0xff;
    *(undefined1 *)&param_2[0x80].palNumEntries = 0xff;
  }
  /* ST_CALLSITE[006B07ED]: CALL EDI; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/WinDef.h/HPALETTE__; source view only; no Ghidra override */
  pHVar5 = st::external_000000A7(param_2);
  *(HPALETTE *)param_1 = pHVar5;
  if (st::machine_word_boundary_cast<uint>(pHVar5) != st::machine_word_boundary_cast<uint>((HPALETTE)0x0)) {
    /* ST_CALLSITE[006B07FF]: CALL EDI; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/WinDef.h/HPALETTE__; source view only; no Ghidra override */
    pHVar5 = st::external_000000A7(param_2);
    param_1->field_04B4 = pHVar5;
    if (st::machine_word_boundary_cast<uint>(pHVar5) == st::machine_word_boundary_cast<uint>((HPALETTE)0x0)) {
      /* ST_CALLSITE[006B080E]: CALL dword ptr [0x0085ba78] */
      st::external_000000A6(*(HGDIOBJ *)param_1);
      *(undefined4 *)param_1 = 0;
      return false;
    }
    pptVar10 = &local_408;
    for (iVar7 = 0x101; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pptVar10 = *(tagLOGPALETTE **)param_2;
      param_2 = reinterpret_cast<LOGPALETTE *>(param_2->palPalEntry);
      pptVar10 = pptVar10 + 1;
    }
    /* ST_CALLSITE[006B0834]: CALL dword ptr [0x0085be4c] */
    pHVar2 = st::external_00000099((HWND)0x0);
    if (0 < (int)param_4) {
      /* ST_CALLSITE[006B084E]: CALL dword ptr [0x0085ba80] */
      st::external_000000A8(pHVar2,0,param_4,(LPPALETTEENTRY)&local_404);
    }
    iStart = param_4 + param_5;
    if ((int)iStart < 0x100) {
      /* ST_CALLSITE[006B0875]: CALL dword ptr [0x0085ba80] */
      st::external_000000A8
                (pHVar2,iStart,(0x100 - param_4) - param_5,(LPPALETTEENTRY)(&local_404 + iStart));
    }
    /* ST_CALLSITE[006B087E]: CALL dword ptr [0x0085be48] */
    st::external_00000098((HWND)0x0,pHVar2);
    if (*(undefined4 **)&param_1[1].field_0x24 != nullptr) {
      puVar11 = *(undefined4 **)&param_1[1].field_0x24;
      for (iVar7 = 0x2000; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 1;
      }
      memset((void *)(*(int *)&param_1[1].field_0x24 + 0x8000), 0, 0x8000); /* compiler bulk-zero initialization */
      /* ST_CALLSITE[006B08B4]: CALL dword ptr [0x0085ba7c]; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/WinDef.h/HPALETTE__; source view only; no Ghidra override */
      pHVar5 = st::external_000000A7(reinterpret_cast<LOGPALETTE *>(&local_408));
      *(HPALETTE *)&param_1[1].field_0x28 = pHVar5;
      if (st::machine_word_boundary_cast<uint>(pHVar5) == st::machine_word_boundary_cast<uint>((HPALETTE)0x0)) {
        return false;
      }
    }

    iVar7_mg7 = st::fn_006B0520(param_1,(int)&local_404,0,0x100);
    return (bool)('\x01' - (iVar7_mg7 != 0));
  }
  return false;
}

// 006B08F0 FUN_006b08f0
#line 4 "decomp/ST.exe/functions/006B08F0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0042A860 -> 006B08F0 @ 0042A8D0 */

int st::fn_006B08F0(RecoveredGlobalRecordView_00854EB8 *param_1,int param_2,UINT param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar3;
  LOGPALETTE local_40c [128];
  int local_8;

  iVar3 = 0;
  local_8 = 0;
  if ((param_1 != nullptr) && (param_1->field_0040 != 0)) {
    if (((*(uint *)&param_1->field_0x8 & 0x20000001) == 0) && (*(int *)&param_1->field_0x24 < 9)) {
      if ((int)param_3 < 10) {
        iVar3 = 10 - param_3;
        param_3 = 10;
        param_4 = param_4 - iVar3;
      }
      if (0xf6 < st::storage_bit_cast<int>(static_cast<uint32_t>(param_3 + param_4))) {
        param_4 = 0xf6 - param_3;
      }
    }
    if ((param_2 != 0) && (0 < param_4)) {
      if ((*(uint *)&param_1->field_0x8 & 0x4000000) != 0) {
        /* ST_CALLSITE[006B097F]: CALL dword ptr [0x0085bb8c] */
        st::external_00000018((LPCRITICAL_SECTION)&param_1[1].field_0x38);
      }
      bVar2 = st::fn_006B06A0(param_1,local_40c,(void *)(param_2 + iVar3 * 4),param_3,param_4);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (CONCAT31(extraout_var,bVar2) == 0) {
        iVar3 = -0xfd;
      }
      else {
        piVar1 = (int *)param_1->field_003C;
        iVar3 = local_8;
        if (piVar1 != nullptr) {
          /* ST_CALLSITE[006B09C9]: CALL dword ptr [EDX + 0x18] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar3 = (**(code **)(*piVar1 + 0x18))(piVar1,0,0,0x100,local_40c[0].palPalEntry);
          local_8 = iVar3;
        }
      }
      if ((*(uint *)&param_1->field_0x8 & 0x4000000) != 0) {
        /* ST_CALLSITE[006B09E2]: CALL dword ptr [0x0085bb90] */
        st::external_00000019((LPCRITICAL_SECTION)&param_1[1].field_0x38);
      }
      if (((iVar3 != -0x7789fdc4) && (iVar3 != -0x7789fdb3)) && (iVar3 != -0x7fffbfff)) {
        return iVar3;
      }
    }
  }
  return 0;
}

// 006B0A20 FUN_006b0a20
#line 4 "decomp/ST.exe/functions/006B0A20/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006B0A20 -> EXTERNAL:000000A9 @ 006B0B1D | 006B0A20 -> EXTERNAL:000000A9 @ 006B0B70

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00554660 -> 006B0A20 @ 005546BB; data at 0080759C | 00577440 -> 006B0A20 @ 00577592;
   data at 0080759C | 00577440 -> 006B0A20 @ 005775E9; data at 0080759C | 00592340 -> 006B0A20 @
   005923C5; data at 0080759C | 005A1920 -> 006B0A20 @ 005A1AD5; data at 0080759C | 005A1920 ->
   006B0A20 @ 005A1CAA; data at 0080759C | 005B3B00 -> 006B0A20 @ 005B3B85; data at 0080759C |
   006B0A20 -> 006B0520 @ 006B0B2C */

int st::fn_006B0A20(RecoveredGlobalRecordView_00854EB8 *param_1,int param_2,UINT iStart,UINT param_4,
                int param_5)

{
  int *piVar1;
  int iVar2;
  BYTE *pBVar3;
  int iVar2_mg1;
  UINT UVar4;
  PALETTEENTRY *pPVar5;
  PALETTEENTRY *pPVar6;
  uint *puVar7;
  PALETTEENTRY local_404 [256];

  if (param_1 != nullptr) {
    iVar2 = 0;
    if (((*(uint *)&param_1->field_0x8 & 0x20000001) == 0) && (*(int *)&param_1->field_0x24 < 9)) {
      if ((int)iStart < 10) {
        iVar2 = 10 - iStart;
        iStart = 10;
        param_4 = param_4 - iVar2;
      }
      if (0xf6 < st::storage_bit_cast<int>(static_cast<uint32_t>(iStart + param_4))) {
        param_4 = 0xf6 - iStart;
      }
    }
    if ((param_2 != 0) && (0 < (int)param_4)) {
      pPVar5 = (PALETTEENTRY *)(param_2 + iVar2 * 4);
      pPVar6 = local_404;
      for (UVar4 = param_4; UVar4 != 0; UVar4 = UVar4 - 1) {
        *pPVar6 = *pPVar5;
        pPVar5 = pPVar5 + 1;
        pPVar6 = pPVar6 + 1;
      }
      pBVar3 = &local_404[0].peFlags;
      UVar4 = param_4;
      do {
        *pBVar3 = *pBVar3 | 4;
        pBVar3 = pBVar3 + 4;
        UVar4 = UVar4 - 1;
      } while (UVar4 != 0);
      if (param_5 != 0) {
        /* ST_CALLSITE[006B0ACC]: CALL dword ptr [ECX + 0x58] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*param_1->field_0030 + 0x58))(param_1->field_0030,1,0);
      }
      piVar1 = (int *)param_1->field_003C;
      if (piVar1 != nullptr) {
        /* ST_CALLSITE[006B0AEA]: CALL dword ptr [ECX + 0x18] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*piVar1 + 0x18))(piVar1,0,iStart,param_4,local_404);
      }
      /* ST_CALLSITE[006B0B05]: CALL EDI */
      st::external_000000A9(*(HPALETTE *)param_1,iStart,param_4,local_404);
      /* ST_CALLSITE[006B0B1D]: CALL EDI */
      st::external_000000A9(param_1->field_04B4,iStart,param_4,local_404);

      iVar2_mg1 = st::fn_006B0520(param_1,(int)local_404,iStart,param_4);
      if (*(undefined4 **)&param_1[1].field_0x24 != nullptr) {
        puVar7 = *(undefined4 **)&param_1[1].field_0x24;
        for (iVar2 = 0x2000; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0xffffffff;
          puVar7 = puVar7 + 1;
        }
        memset((void *)(*(int *)&param_1[1].field_0x24 + 0x8000), 0, 0x8000); /* compiler bulk-zero initialization */
        /* ST_CALLSITE[006B0B70]: CALL dword ptr [0x0085ba84] */
        st::external_000000A9(*(HPALETTE *)&param_1[1].field_0x28,iStart,param_4,local_404);
      }
      if (((iVar2_mg1 != -0x7789fdc4) && (iVar2_mg1 != -0x7789fdb3)) && (iVar2_mg1 != -0x7fffbfff))
      {
        return iVar2_mg1;
      }
    }
  }
  return 0;
}

// 006B0BA0 FUN_006b0ba0
#line 4 "decomp/ST.exe/functions/006B0BA0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0055DBF0 -> 006B0BA0 @ 0055DC30; DarkScreen parameter param_1 | 00709470 -> 006B0BA0 @
   00709566; /SubmarineTitans/Recovered/LibraryContexts/ST3DSMAPContext+0x4 */

undefined4
st::fn_006B0BA0(DDXContext *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  if ((param_1 != nullptr) && (piVar1 = (int *)param_1->field_003C, piVar1 != nullptr))
  {
    /* ST_CALLSITE[006B0BC2]: CALL dword ptr [ECX + 0x10] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,0,param_3,param_4,param_2);
    return uVar2;
  }
  return 0xffffffaf;
}

// 006B0BE0 FUN_006b0be0
#line 4 "decomp/ST.exe/functions/006B0BE0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006B0BE0 -> EXTERNAL:000000A8 @ 006B0C25

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 006B0BE0 -> EXTERNAL:000000A8 @ 006B0C25 */

undefined4 st::fn_006B0BE0(int param_1,tagPALETTEENTRY *param_2,UINT iStart,UINT cEntries)

{
  int *piVar1;
  uint uVar2;
  HDC hdc;
  tagPALETTEENTRY *local_404;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0x3c), piVar1 != nullptr)) {
    /* ST_CALLSITE[006B0C0B]: CALL dword ptr [ECX + 0x10] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,0,iStart,cEntries,param_2);
    /* ST_CALLSITE[006B0C13]: CALL dword ptr [0x0085be4c] */
    hdc = st::external_00000099((HWND)0x0);
    /* ST_CALLSITE[006B0C25]: CALL dword ptr [0x0085ba80] */
    st::external_000000A8(hdc,iStart,cEntries,(LPPALETTEENTRY)&local_404);
    /* ST_CALLSITE[006B0C2E]: CALL dword ptr [0x0085be48] */
    st::external_00000098((HWND)0x0,hdc);
    if (0 < (int)cEntries) {
      do {
        if ((param_2->peFlags & 2) != 0) {
          *param_2 = *(tagPALETTEENTRY *)(&local_404 + param_2->peRed);
        }
        param_2 = param_2 + 1;
        cEntries = cEntries - 1;
      } while (cEntries != 0);
    }
    return uVar2;
  }
  return 0xffffffaf;
}

// 006B0C70 DArrayRemoveAt
#line 4 "decomp/ST.exe/functions/006B0C70/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00496E40 -> 006B0C70 @ 00496E9C | 004D2760 -> 006B0C70 @ 004D28A9 | 004D2760 ->
   006B0C70 @ 004D2C21 | 004D8530 -> 006B0C70 @ 004D8583 | 004D9700 -> 006B0C70 @ 004D9741 |
   0054D640 -> 006B0C70 @ 0054D803

   [STUtilityFunctionApplier] darray_remove_at: removes one indexed dynamic-array element, shifts
   the byte tail, updates count/iterator state, and returns zero or -4
   Evidence: body pattern verified */

int st::fn_006B0C70(DArrayTy *array,uint index)

{
  dword dVar1;
  uint uVar2;
  byte *puVar4;
  byte *puVar5;

  if (array != nullptr) {
    if (index < array->count) {
      dVar1 = array->elementSize;
      puVar5 = (byte *)(dVar1 * index + (int)array->data);
      uVar2 = ((array->count - index) + -1) * dVar1;
      puVar4 = (byte *)(dVar1 + (int)puVar5);
      memmove(puVar5, puVar4, uVar2); /* compiler REP MOVS byte copy */
      array->count = array->count - 1;
      if (index < array->iteratorIndex) {
        array->iteratorIndex = array->iteratorIndex - 1;
      }
      return 0;
    }
  }
  return -4;
}

// 006B0CD0 FUN_006b0cd0
#line 4 "decomp/ST.exe/functions/006B0CD0/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

undefined4 st::fn_006B0CD0(RecoveredRecordView_00413AF0_B98DB3AE *param_1,uint param_2,uint param_3)

{
  byte uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  if ((param_2 < param_1->field_000C) && (param_3 < param_1->field_000C)) {
    iVar2 = param_1->field_0008;
    if (iVar2 == 4) {
      iVar2 = param_1->field_001C;
      uVar3 = *(undefined4 *)(iVar2 + param_2 * 4);
      *(undefined4 *)(iVar2 + param_2 * 4) = *(undefined4 *)(iVar2 + param_3 * 4);
      *(undefined4 *)(param_1->field_001C + param_3 * 4) = uVar3;
      return 0;
    }
    iVar5 = iVar2 * param_2;
    iVar6 = iVar2 * param_3;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      iVar4 = param_1->field_001C;
      iVar5 = iVar5 + 1;
      uVar1 = *(undefined1 *)(iVar4 + -1 + iVar5);
      *(undefined1 *)(iVar4 + -1 + iVar5) = *(undefined1 *)(iVar4 + iVar6);
      *(undefined1 *)(param_1->field_001C + iVar6) = uVar1;
      iVar6 = iVar6 + 1;
    }
    return 0;
  }
  return 0xfffffffc;
}

// 006B0D60 BuildBitSet128
#line 4 "decomp/ST.exe/functions/006B0D60/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=29, used=0), and
   decompilation contains no value return

   [STUtilityFunctionApplier] sentinel_bitset128_builder: clears one 128-bit output set, then
   consumes a sentinel-terminated variadic list of bit indexes and sets each corresponding bit; the
   128-entry loop cap is a corruption guard rather than a fixed source argument count
   Evidence: body pattern verified */

void __cdecl st::fn_006B0D60(uint *bits,...)

{
  alignas(4) byte st_stack_frame[20];

  int iVar1;
  int *piVar2;
  int iVar3;

  iVar3 = 0;
  piVar2 = reinterpret_cast<int *>((st_stack_frame + 16));
  *bits = 0;
  bits[1] = 0;
  bits[2] = 0;
  bits[3] = 0;
  do {
    iVar1 = *piVar2;
    if (iVar1 < 0) {
      return;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
    bits[st::storage_bit_cast<int>(static_cast<uint32_t>(iVar1 + (iVar1 >> 0x1f & 0x1fU))) >> 5] =
         bits[st::storage_bit_cast<int>(static_cast<uint32_t>(iVar1 + (iVar1 >> 0x1f & 0x1fU))) >> 5] | 1 << ((byte)iVar1 & 0x1f);
  } while (iVar3 < 0x80);
  return;
}

// 006B0DC0 FUN_006b0dc0
#line 4 "decomp/ST.exe/functions/006B0DC0/decomp.c"
void __cdecl st::fn_006B0DC0(undefined4 *param_1,int param_2,int param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  for (; (param_2 < 0x80 && (param_2 <= param_3)); param_2 = param_2 + 1) {
    param_1[st::storage_bit_cast<int>(static_cast<uint32_t>(param_2 + (param_2 >> 0x1f & 0x1fU))) >> 5] =
         param_1[st::storage_bit_cast<int>(static_cast<uint32_t>(param_2 + (param_2 >> 0x1f & 0x1fU))) >> 5] | 1 << ((byte)param_2 & 0x1f);
  }
  return;
}

// 006B0E20 FUN_006b0e20
#line 4 "decomp/ST.exe/functions/006B0E20/decomp.c"
void __cdecl st::fn_006B0E20(int param_1)

{
  alignas(4) byte st_stack_frame[20];

  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;

  iVar3 = 0;
  piVar4 = reinterpret_cast<int *>((st_stack_frame + 16));
  do {
    iVar2 = *piVar4;
    if (iVar2 < 0) {
      return;
    }
    puVar1 = (uint *)(param_1 + (st::storage_bit_cast<int>(static_cast<uint32_t>(iVar2 + (iVar2 >> 0x1f & 0x1fU))) >> 5) * 4);
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + 1;
    *puVar1 = *puVar1 | 1 << ((byte)iVar2 & 0x1f);
  } while (iVar3 < 0x80);
  return;
}

// 006B0E70 FUN_006b0e70
#line 4 "decomp/ST.exe/functions/006B0E70/decomp.c"
void __cdecl st::fn_006B0E70(int param_1,int param_2,int param_3)

{
  uint *puVar1;

  for (; (param_2 < 0x80 && (param_2 <= param_3)); param_2 = param_2 + 1) {
    puVar1 = (uint *)(param_1 + (st::storage_bit_cast<int>(static_cast<uint32_t>(param_2 + (param_2 >> 0x1f & 0x1fU))) >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  }
  return;
}

// 006B0ED0 FUN_006b0ed0
#line 4 "decomp/ST.exe/functions/006B0ED0/decomp.c"
void __cdecl st::fn_006B0ED0(int param_1)

{
  alignas(4) byte st_stack_frame[20];

  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;

  iVar3 = 0;
  piVar4 = reinterpret_cast<int *>((st_stack_frame + 16));
  do {
    iVar2 = *piVar4;
    if (iVar2 < 0) {
      return;
    }
    puVar1 = (uint *)(param_1 + (st::storage_bit_cast<int>(static_cast<uint32_t>(iVar2 + (iVar2 >> 0x1f & 0x1fU))) >> 5) * 4);
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + 1;
    *puVar1 = *puVar1 & ~(1 << ((byte)iVar2 & 0x1f));
  } while (iVar3 < 0x80);
  return;
}

// 006B0F20 FUN_006b0f20
#line 4 "decomp/ST.exe/functions/006B0F20/decomp.c"
void __cdecl st::fn_006B0F20(int param_1,int param_2,int param_3)

{
  uint *puVar1;

  for (; (param_2 < 0x80 && (param_2 <= param_3)); param_2 = param_2 + 1) {
    puVar1 = (uint *)(param_1 + (st::storage_bit_cast<int>(static_cast<uint32_t>(param_2 + (param_2 >> 0x1f & 0x1fU))) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)param_2 & 0x1f));
  }
  return;
}

// 006B0F80 FUN_006b0f80
#line 4 "decomp/ST.exe/functions/006B0F80/decomp.c"
undefined4 __cdecl st::fn_006B0F80(uint *param_1,uint *param_2)

{
  if (((((*param_1 & *param_2) == *param_2) && ((param_1[1] & param_2[1]) == param_2[1])) &&
      ((param_1[2] & param_2[2]) == param_2[2])) && ((param_1[3] & param_2[3]) == param_2[3])) {
    return 1;
  }
  return 0;
}

// 006B0FD0 FUN_006b0fd0
#line 4 "decomp/ST.exe/functions/006B0FD0/decomp.c"
/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=20,
   ignored=0, unknown=0 */

int __cdecl st::fn_006B0FD0(int param_1)

{
  alignas(4) byte st_stack_frame[20];

  int iVar1;
  int *piVar2;
  int iVar3;

  iVar3 = 0;
  piVar2 = reinterpret_cast<int *>((st_stack_frame + 16));
  while( true ) {
    iVar1 = *piVar2;
    if (iVar1 < 0) {
      return 1;
    }
    if ((*(uint *)(param_1 + (st::storage_bit_cast<int>(static_cast<uint32_t>(iVar1 + (iVar1 >> 0x1f & 0x1fU))) >> 5) * 4) &
        1 << ((byte)iVar1 & 0x1f)) == 0) break;
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
    if (0x7f < iVar3) {
      return 1;
    }
  }
  return 0;
}

// 006B1030 FUN_006b1030
#line 4 "decomp/ST.exe/functions/006B1030/decomp.c"
undefined4 __cdecl st::fn_006B1030(int param_1,int param_2,int param_3)

{
  for (; (param_2 < 0x80 && (param_2 <= param_3)); param_2 = param_2 + 1) {
    if ((*(uint *)(param_1 + (st::storage_bit_cast<int>(static_cast<uint32_t>(param_2 + (param_2 >> 0x1f & 0x1fU))) >> 5) * 4) &
        1 << ((byte)param_2 & 0x1f)) == 0) {
      return 0;
    }
  }
  return 1;
}

// 006B1090 FUN_006b1090
#line 4 "decomp/ST.exe/functions/006B1090/decomp.c"
void __cdecl st::fn_006B1090(uint *param_1)

{
  alignas(4) byte st_stack_frame[40];

  int iVar1;
  int iVar2;
  int *piVar3;
  uint local_14 [4];

  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  iVar2 = 0;
  piVar3 = reinterpret_cast<int *>((st_stack_frame + 36));
  do {
    iVar1 = *piVar3;
    if (iVar1 < 0) break;
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + 1;
    local_14[st::storage_bit_cast<int>(static_cast<uint32_t>(iVar1 + (iVar1 >> 0x1f & 0x1fU))) >> 5] =
         local_14[st::storage_bit_cast<int>(static_cast<uint32_t>(iVar1 + (iVar1 >> 0x1f & 0x1fU))) >> 5] | 1 << ((byte)iVar1 & 0x1f);
  } while (iVar2 < 0x80);
  *param_1 = local_14[0];
  param_1[1] = local_14[1];
  param_1[2] = local_14[2];
  param_1[3] = local_14[3];
  return;
}

// 006B1110 FUN_006b1110
#line 4 "decomp/ST.exe/functions/006B1110/decomp.c"
void __cdecl st::fn_006B1110(uint *param_1,int param_2,int param_3)

{
  uint local_14 [4];

  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  for (; (param_2 < 0x80 && (param_2 <= param_3)); param_2 = param_2 + 1) {
    local_14[st::storage_bit_cast<int>(static_cast<uint32_t>(param_2 + (param_2 >> 0x1f & 0x1fU))) >> 5] =
         local_14[st::storage_bit_cast<int>(static_cast<uint32_t>(param_2 + (param_2 >> 0x1f & 0x1fU))) >> 5] | 1 << ((byte)param_2 & 0x1f);
  }
  *param_1 = local_14[0];
  param_1[1] = local_14[1];
  param_1[2] = local_14[2];
  param_1[3] = local_14[3];
  return;
}

// 006B1190 DArrayGetNext
#line 4 "decomp/ST.exe/functions/006B1190/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004AF080 -> 006B1190 @ 004AF371 | 004AF080 -> 006B1190 @ 004AF3C6 | 004AFFA0 ->
   006B1190 @ 004AFFCC | 004AFFA0 -> 006B1190 @ 004B0159 | 004B0250 -> 006B1190 @ 004B05D5 |
   004B0250 -> 006B1190 @ 004B062A | 004B0250 -> 006B1190 @ 004B09CB | 004B1120 -> 006B1190 @
   004B11A8 | 004B1120 -> 006B1190 @ 004B12BE | 004B1690 -> 006B1190 @ 004B1B19 | 004B1690 ->
   006B1190 @ 004B1B65 | 004B1FB0 -> 006B1190 @ 004B207D | 004B1FB0 -> 006B1190 @ 004B21F2 |
   004B31C0 -> 006B1190 @ 004B3200 | 004B31C0 -> 006B1190 @ 004B3258 | 004B33D0 -> 006B1190 @
   004B368B | 004B33D0 -> 006B1190 @ 004B389E | 004B33D0 -> 006B1190 @ 004B47AD | 004B33D0 ->
   006B1190 @ 004B4823 | 004D8530 -> 006B1190 @ 004D854E | 004D8530 -> 006B1190 @ 004D8568 |
   004D85E0 -> 006B1190 @ 004D8600 | 004D85E0 -> 006B1190 @ 004D8649 | 004DE820 -> 006B1190 @
   004DE96C | 00540DC0 -> 006B1190 @ 00540EDF | 00540DC0 -> 006B1190 @ 00540F08 | 00541030 ->
   006B1190 @ 0054108B | 00541030 -> 006B1190 @ 005410D9 | 006E4C90 -> 006B1190 @ 006E4CAA

   [STUtilityFunctionApplier] darray_get_next: copies the element at iteratorIndex to caller
   storage, advances the iterator, and returns the previous index or -4
   Evidence: body pattern verified */

int __fastcall st::fn_006B1190(DArrayTy *array,byte *outElement)

{
  dword dVar1;
  uint uVar3;
  byte *pbVar4;

  if (array->iteratorIndex < array->count) {
    uVar3 = array->elementSize;
    pbVar4 = (byte *)(uVar3 * array->iteratorIndex + (int)array->data);
    memmove(outElement, pbVar4, uVar3); /* compiler REP MOVS byte copy */
    dVar1 = array->iteratorIndex;
    array->iteratorIndex = dVar1 + 1;
    return dVar1;
  }
  return -4;
}

// 006B1280 FUN_006b1280
#line 4 "decomp/ST.exe/functions/006B1280/decomp.c"
int __cdecl st::fn_006B1280(int param_1)

{
  int iVar1;
  uint uVar2;

  iVar1 = param_1 / (int)DAT_007eda8c;
  uVar2 = param_1 % (int)DAT_007eda8c;
  if ((int)uVar2 < 0) {
    if ((int)uVar2 <= (int)-(DAT_007eda8c >> 1)) {
      iVar1 = iVar1 + -1;
    }
  }
  else if (DAT_007eda8c >> 1 <= uVar2) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

// 006B12A8 FUN_006b12a8
#line 4 "decomp/ST.exe/functions/006B12A8/decomp.c"
/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=5, ignored=0, unknown=0 */

int __cdecl st::fn_006B12A8(int param_1,int param_2)

{
  return (int)(((longlong)param_1 * (longlong)DAT_007eda8c) / (longlong)param_2);
}

// 006B12BC FUN_006b12bc
#line 4 "decomp/ST.exe/functions/006B12BC/decomp.c"
/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=1, ignored=0, unknown=0 */

int __cdecl st::fn_006B12BC(int param_1,int param_2,int param_3)

{
  return (int)(((longlong)param_1 * (longlong)param_2) / (longlong)param_3);
}

// 006B12CC FUN_006b12cc
#line 4 "decomp/ST.exe/functions/006B12CC/decomp.c"
longlong __cdecl st::fn_006B12CC(int param_1)

{
  return (longlong)param_1 * (longlong)DAT_007eda8c;
}

// 006B12DC FUN_006b12dc
#line 4 "decomp/ST.exe/functions/006B12DC/decomp.c"
/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=3, ignored=0, unknown=0 */

int __cdecl st::fn_006B12DC(int param_1,int param_2)

{
  return (int)(((longlong)param_1 * (longlong)param_2) / (longlong)DAT_007eda8c);
}

// 006B13E0 FUN_006b13e0
#line 4 "decomp/ST.exe/functions/006B13E0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006B13E0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;

  if ((param_1 != nullptr) && (iVar1 = *param_1, iVar1 != 0)) {
    if ((STField<uint>(iVar1,0x8) & 0x4000000) != 0) {
      /* ST_CALLSITE[006B1400]: CALL dword ptr [0x0085bb8c] */
      st::external_00000018((LPCRITICAL_SECTION)(iVar1 + 0x4f0));
    }
    iVar1 = *param_1;
    if (STField<int>(iVar1,0x4B0) != 0) {
      uVar2 = STField<undefined4>(iVar1,0x40);
      STField<undefined4>(iVar1,0x40) = STField<undefined4>(iVar1,0x44);
      *(undefined4 *)(*param_1 + 0x44) = uVar2;
      *(undefined4 *)(*param_1 + 0x4b0) = 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    piVar3 = *(int **)(*param_1 + 0x44);
    if (piVar3 != nullptr) {
      /* ST_CALLSITE[006B1438]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar3 + 8))(piVar3);
      *(undefined4 *)(*param_1 + 0x44) = 0;
    }
    if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
      /* ST_CALLSITE[006B1456]: CALL dword ptr [0x0085bb90] */
      st::external_00000019((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
  }
  return;
}

// 006B1940 FUN_006b1940
#line 4 "decomp/ST.exe/functions/006B1940/decomp.c"
undefined4 st::fn_006B1940(RecoveredRecord_006B1940_D755D03E *param_1)

{
  uint uVar1;
  uVar1 = param_1->field_01D0;
  param_1->field_01D0 = 0;
  return uVar1;
}

// 006B1960 FUN_006b1960
#line 4 "decomp/ST.exe/functions/006B1960/decomp.c"
undefined4 st::fn_006B1960(RecoveredRecord_006B1960_252591BF *param_1)

{
  uint uVar1;
  uVar1 = param_1->field_01D0;
  param_1->field_01D0 = 1;
  return uVar1;
}

// 006B1980 FUN_006b1980
#line 1 "decomp/ST.exe/functions/006B1980/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void st::fn_006B1980(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;

  if (-1 < param_2) {
    if (((((param_1[param_2 * 4 + 5] != 0) || (param_1[param_2 * 4 + 6] != 0)) ||
         (param_1[param_2 * 4 + 7] != param_1[3])) || (param_1[(param_2 + 2) * 4] != param_1[4])) &&
       (iVar2 = param_1[param_2 * 4 + 7] - param_1[param_2 * 4 + 5], 0 < iVar2)) {
      iVar1 = param_1[(param_2 + 2) * 4] - param_1[param_2 * 4 + 6];
      if (0 < iVar1) {
        st::fn_006B5F80(param_1,param_1[param_2 * 4 + 5],param_1[param_2 * 4 + 6],iVar2,iVar1);
      }
    }
    if ((0 < param_6) && (0 < param_7)) {
      st::fn_006B5F80(param_1,param_4,param_5,param_6,param_7);
    }
    param_1[param_2 * 4 + 5] = param_4;
    param_1[param_2 * 4 + 6] = param_5;
    param_1[param_2 * 4 + 7] = param_4 + param_6;
    param_1[(param_2 + 2) * 4] = param_5 + param_7;
    if (param_3 < 0) {
      param_3 = -1;
    }
    param_1[param_2 + 0x31] = param_3;
  }
  return;
}

// 006B1A50 FUN_006b1a50
#line 4 "decomp/ST.exe/functions/006B1A50/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=10, used=0), and
   decompilation contains no value return

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004F5690 -> 006B1A50 @ 004F67A3; data at 008075A8 | 0051DDD0 -> 006B1A50 @ 0051DE24;
   data at 008075A8 | 00521900 -> 006B1A50 @ 00521944; data at 008075A8 | 0052E500 -> 006B1A50 @
   0052E541; data at 008075A8 | 005381B0 -> 006B1A50 @ 0053825F; data at 008075A8 | 0053AFB0 ->
   006B1A50 @ 0053B001; data at 008075A8 | 0053EB70 -> 006B1A50 @ 0053EBC2; data at 008075A8 |
   0053EE30 -> 006B1A50 @ 0053EE71; data at 008075A8 | 0056FA60 -> 006B1A50 @ 005700F0; data at
   008075A8 */

void st::fn_006B1A50(DDXContext_008075A8 *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (-1 < param_2) {
    *param_4 = *(undefined4 *)(&param_1->field_0x14 + param_2 * 0x10);
    param_4[1] = *(undefined4 *)(&param_1->field_0x18 + param_2 * 0x10);
    param_4[2] = *(int *)(&param_1->field_0x1c + param_2 * 0x10) -
                 *(int *)(&param_1->field_0x14 + param_2 * 0x10);
    param_4[3] = *(int *)(&param_1->field_0x20 + param_2 * 0x10) -
                 *(int *)(&param_1->field_0x18 + param_2 * 0x10);
    if (param_3 != nullptr) {
      *param_3 = *(undefined4 *)(&param_1->field_0xc4 + param_2 * 4);
    }
  }
  return;
}

// 006B1AB0 FUN_006b1ab0
#line 1 "decomp/ST.exe/functions/006B1AB0/decomp.c"

int st::fn_006B1AB0(int *param_1,int param_2,int param_3)

{
  int iVar1;

  if (param_2 < 0) {
    return 0;
  }
  iVar1 = param_1[param_2 + 0x3c];
  param_1[param_2 + 0x3c] = param_3;
  if (param_3 != 0) {
    st::fn_006B5F80(param_1,param_1[param_2 * 4 + 5],param_1[param_2 * 4 + 6],
                 param_1[param_2 * 4 + 7] - param_1[param_2 * 4 + 5],
                 param_1[(param_2 + 2) * 4] - param_1[param_2 * 4 + 6]);
  }
  return iVar1;
}

// 006B1B10 FUN_006b1b10
#line 1 "decomp/ST.exe/functions/006B1B10/decomp.c"

uint st::fn_006B1B10(AnonShape_006B1B10_121F236C *param_1,uint param_2,uint param_3)

{
  AnonNested_AnonShape_006B1B10_121F236C_01B0_7CFC8645 *pAVar1;
  uint uVar2;
  uint uVar3;
  uint uVar5;
  int uVar4;
  int iVar6;

  uVar5 = 0xfffffffd;
  if (param_2 < param_1->entryCount) {
    pAVar1 = param_1->entries_01B0[param_2];
    if ((pAVar1->flags & 0x88000) == 0x8000) {
      uVar5 = pAVar1->field_004C;
      pAVar1->field_004C = param_3;
      if ((pAVar1->flags & 0x20) != 0) {
        param_1->field_01B4 = 1;
      }

      uVar4 = st::fn_006CEE10((int)param_1,reinterpret_cast<RecoveredRecord_006CEE10_585981DD *>(pAVar1));
      pAVar1->field_0050 = uVar4;
      if (((pAVar1->flags & 0x4000000) != 0) && (pAVar1->field_00D0 != 0)) {
        uVar2 = pAVar1->field_00C0;
        iVar6 = 0;
        if (0 < (int)uVar2) {
          do {
            uVar3 = *(uint *)(pAVar1->field_00D0 + iVar6 * 4);
            if (-1 < (int)uVar3) {

              st::fn_006B1B10(param_1,uVar3,param_3);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)uVar2);
        }
        return uVar5;
      }
    }
  }
  return uVar5;
}

// 006B1BD0 FUN_006b1bd0
#line 1 "decomp/ST.exe/functions/006B1BD0/decomp.c"

uint st::fn_006B1BD0(AnonShape_006B1BD0_7C890E99 *param_1,uint param_2)

{
  AnonNested_AnonShape_006B1BD0_7C890E99_01B0_6D384113 *pAVar1;
  uint uVar2;
  uint uVar3;
  uint uVar5;
  int uVar4;
  int iVar6;

  uVar5 = 0xfffffffd;
  if (param_2 < param_1->entryCount) {
    pAVar1 = param_1->entries_01B0[param_2];
    if ((pAVar1->field_0000 & 0x88000) == 0x8000) {
      uVar5 = pAVar1->field_004C;
      if ((uVar5 != 0xfffffffd) &&
         (pAVar1->field_004C = 0xfffffffd, (pAVar1->field_0000 & 0x20) != 0)) {
        param_1->field_01B4 = 1;
      }

      uVar4 = st::fn_006CEE10((int)param_1,reinterpret_cast<RecoveredRecord_006CEE10_585981DD *>(pAVar1));
      pAVar1->field_0050 = uVar4;
      if (((pAVar1->field_0000 & 0x4000000) != 0) && (pAVar1->field_00D0 != 0)) {
        uVar2 = pAVar1->field_00C0;
        iVar6 = 0;
        if (0 < (int)uVar2) {
          do {
            uVar3 = *(uint *)(pAVar1->field_00D0 + iVar6 * 4);
            if (-1 < (int)uVar3) {

              st::fn_006B1BD0(param_1,uVar3);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)uVar2);
        }
        return uVar5;
      }
    }
  }
  return uVar5;
}

// 006B1C80 FUN_006b1c80
#line 1 "decomp/ST.exe/functions/006B1C80/decomp.c"

uint st::fn_006B1C80(RecoveredRecord_006B1C80_53649120 *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;

  uVar2 = 0xfffffffe;
  if ((param_2 < param_1->field_01A0) &&
     (puVar1 = *(uint **)(param_1->field_01B0 + param_2 * 4), (*puVar1 & 0x8000) != 0)) {
    uVar2 = puVar1[0x13];
  }
  return uVar2;
}

// 006B1CC0 FUN_006b1cc0
#line 4 "decomp/ST.exe/functions/006B1CC0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0056ADC0 -> 006B1CC0 @ 0056B2EF; data at 008075A8 | 0056ADC0 -> 006B1CC0 @ 0056B32D;
   data at 008075A8 | 0056D740 -> 006B1CC0 @ 0056D9FA; data at 008075A8 | 0056D740 -> 006B1CC0 @
   0056DA39; data at 008075A8

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006B1CC0(DDXContext_008075A8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  if (param_2 < 0) {
    param_2 = 10;
  }
  param_1->field_01B4 = 1;
  uVar1 = *(undefined4 *)(&param_1->field_0x11c + param_2 * 8);
  uVar2 = *(undefined4 *)(&param_1->field_0x120 + param_2 * 8);
  *(undefined4 *)(&param_1->field_0x11c + param_2 * 8) = param_3;
  *(undefined4 *)(&param_1->field_0x120 + param_2 * 8) = param_4;
  *(undefined4 *)(&param_1->field_0x174 + param_2 * 4) = 1;
  if (param_5 != nullptr) {
    *param_5 = uVar1;
    param_5[1] = uVar2;
  }
  return;
}

// 006B2020 FUN_006b2020
#line 4 "decomp/ST.exe/functions/006B2020/decomp.c"
void st::fn_006B2020(RecoveredRecordView_006B2020_4DD6C4AD *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  RecoveredRecord_006CEE10_585981DD *pRVar4;
  uint *puVar5;
  AnonNested_006B2020_01A0_B4F1EFF3 *pAVar6;
  int local_EAX_79;
  int uVar7;
  int iVar7;
  int uVar8;
  int *piVar8;
  int iVar9;

  iVar3 = param_1->field_01AC;
  if ((param_2 < st::machine_word_boundary_cast<uint>(param_1->field_01A0)) &&
     (pRVar4 = *(RecoveredRecord_006CEE10_585981DD **)(param_1->field_01B0 + param_2 * 4),
     (*(uint *)pRVar4 & 0x80000) == 0)) {
    iVar9 = *(int *)&pRVar4->field_0x48;
    if ((int)param_3 < pRVar4->field_0044) {
      pRVar4->field_0044 = param_3;

      local_EAX_79 = st::fn_006CEE10((int)param_1,pRVar4);
      *(int *)(pRVar4 + 1) = local_EAX_79;
      if ((0 < iVar9) && ((int)param_3 < *(int *)(*(int *)(iVar3 + -4 + iVar9 * 4) + 0x44))) {
        if ((*(uint *)pRVar4 & 0x4000) == 0) {
          iVar9 = iVar9 + -1;
          if (-1 < iVar9) {
            piVar8 = (int *)(iVar3 + iVar9 * 4);
            do {
              puVar5 = (uint *)*piVar8;
              if (((int)puVar5[0x11] <= (int)param_3) &&
                 ((param_3 != puVar5[0x11] || ((*puVar5 & 0x4000) == 0)))) break;
              uVar2 = iVar9 + 1;
              piVar8[1] = (int)puVar5;
              iVar9 = iVar9 + -1;
              piVar8 = piVar8 + -1;
              puVar5[0x12] = uVar2;
            } while (-1 < iVar9);
          }
        }
        else {
          iVar9 = iVar9 + -1;
          if (-1 < iVar9) {
            piVar8 = (int *)(iVar3 + iVar9 * 4);
            do {
              iVar7 = *piVar8;
              if (STField<int>(iVar7,0x44) <= (int)param_3) break;
              iVar1 = iVar9 + 1;
              piVar8[1] = iVar7;
              iVar9 = iVar9 + -1;
              piVar8 = piVar8 + -1;
              STField<int>(iVar7,0x48) = iVar1;
            } while (-1 < iVar9);
          }
        }
        *(RecoveredRecord_006CEE10_585981DD **)(iVar3 + (iVar9 + 1) * 4) = pRVar4;
        *(int *)&pRVar4->field_0x48 = iVar9 + 1;
        if ((*(byte *)pRVar4 & 0x20) != 0) {
          param_1->field_01B4 = 1;
          return;
        }
      }
    }
    else if (pRVar4->field_0044 < (int)param_3) {
      pRVar4->field_0044 = param_3;

      uVar7 = st::fn_006CEE10((int)param_1,pRVar4);
      *(int *)(pRVar4 + 1) = uVar7;
      pAVar6 = param_1->field_01A0;
      if ((iVar9 < st::storage_bit_cast<int>(static_cast<uint32_t>((int)&pAVar6[-1].field_0048 + 3))) &&
         (iVar7 = iVar9 + 1, *(int *)(*(int *)(iVar3 + 4 + iVar9 * 4) + 0x44) < (int)param_3)) {
        if ((*(uint *)pRVar4 & 0x4000) == 0) {
          if (iVar7 < (int)pAVar6) {
            piVar8 = (int *)(iVar3 + iVar7 * 4);
            do {
              puVar5 = (uint *)*piVar8;
              if (((int)param_3 <= (int)puVar5[0x11]) &&
                 ((param_3 != puVar5[0x11] || ((*puVar5 & 0x4000) == 0)))) break;
              piVar8[-1] = (int)puVar5;
              puVar5[0x12] = iVar7 - 1;
              iVar7 = iVar7 + 1;
              piVar8 = piVar8 + 1;
            } while (iVar7 < (int)param_1->field_01A0);
          }
        }
        else if (iVar7 < (int)pAVar6) {
          piVar8 = (int *)(iVar3 + iVar7 * 4);
          do {
            iVar9 = *piVar8;
            if ((int)param_3 <= STField<int>(iVar9,0x44)) break;
            piVar8[-1] = iVar9;
            STField<int>(iVar9,0x48) = iVar7 + -1;
            iVar7 = iVar7 + 1;
            piVar8 = piVar8 + 1;
          } while (iVar7 < (int)param_1->field_01A0);
        }
        *(RecoveredRecord_006CEE10_585981DD **)(iVar3 + (iVar7 + -1) * 4) = pRVar4;
        *(int *)&pRVar4->field_0x48 = iVar7 + -1;
        if ((*(byte *)pRVar4 & 0x20) != 0) {
          param_1->field_01B4 = 1;
          return;
        }
      }
    }
    else {

      uVar8 = st::fn_006CEE10((int)param_1,pRVar4);
      *(int *)(pRVar4 + 1) = uVar8;
    }
  }
  return;
}

// 006B21E0 FUN_006b21e0
#line 1 "decomp/ST.exe/functions/006B21E0/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void st::fn_006B21E0(uint param_1,uint *param_2,uint param_3,uint param_4,int *param_5,uint param_6,
                 uint param_7,uint param_8,uint param_9)

{
  st::fn_006B1D50
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,1);
  return;
}

// 006B2300 FUN_006b2300
#line 1 "decomp/ST.exe/functions/006B2300/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 006B2300 returns return of Library::DKW::DDX::FUN_006b1d50 @ 006B2329 */

int st::fn_006B2300(uint param_1,uint *param_2,uint param_3,int *param_4,uint param_5,uint param_6)

{
  int iVar1;

  iVar1 = st::fn_006B1D50
                    (param_1,param_2,param_3,1,param_4,param_5,0xffffffff,0xffffffff,param_6,0);
  return iVar1;
}

// 006B2330 FUN_006b2330
#line 1 "decomp/ST.exe/functions/006B2330/decomp.c"

/* [STPrototypeApplier] Propagated parameter 6.
   Evidence: 00543600 -> 006B2330 @ 00543741; /CursorClassTy+0x4d2 | 00597E70 -> 006B2330 @
   00598695; zeroed full register at 0059867C

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004F5690 -> 006B2330 @ 004F68BF; data at 008075A8 | 004F5690 -> 006B2330 @ 004F69AA;
   data at 008075A8 | 004F5690 -> 006B2330 @ 004F6A35; data at 008075A8 | 004F5690 -> 006B2330 @
   004F6AE7; data at 008075A8 | 0052DD20 -> 006B2330 @ 0052DE4F; data at 008075A8 | 005381B0 ->
   006B2330 @ 00538283; data at 008075A8 | 00543600 -> 006B2330 @ 00543741; data at 008075A8 |
   00593B50 -> 006B2330 @ 00593DE4; data at 008075A8 | 00595E40 -> 006B2330 @ 005961A7; data at
   008075A8 | 00595E40 -> 006B2330 @ 0059621C; data at 008075A8 | 00597E70 -> 006B2330 @ 0059808F;
   data at 008075A8 | 00597E70 -> 006B2330 @ 005982D5; data at 008075A8 | 00597E70 -> 006B2330 @
   00598400; data at 008075A8 | 00597E70 -> 006B2330 @ 00598695; data at 008075A8 | 00597E70 ->
   006B2330 @ 00598A94; data at 008075A8 | 00597E70 -> 006B2330 @ 00598D14; data at 008075A8 |
   00597E70 -> 006B2330 @ 00598EE7; data at 008075A8 | 00597E70 -> 006B2330 @ 00599124; data at
   008075A8 | 005AACB0 -> 006B2330 @ 005AADB3; data at 008075A8 | 005AB300 -> 006B2330 @ 005AB92F;
   data at 008075A8 | 005AB300 -> 006B2330 @ 005AB999; data at 008075A8 | 005AB300 -> 006B2330 @
   005ABB2C; data at 008075A8 | 005AB300 -> 006B2330 @ 005ABD60; data at 008075A8 | 005AB300 ->
   006B2330 @ 005AC0DD; data at 008075A8 | 005B9B10 -> 006B2330 @ 005B9E4C; data at 008075A8 |
   005B9B10 -> 006B2330 @ 005B9F44; data at 008075A8 | 005B9B10 -> 006B2330 @ 005B9F87; data at
   008075A8 | 005B9B10 -> 006B2330 @ 005BA11C; data at 008075A8 | 005BC5E0 -> 006B2330 @ 005BCBA6;
   data at 008075A8 | 005BD7A0 -> 006B2330 @ 005BDDB9; data at 008075A8 | 005BD7A0 -> 006B2330 @
   005BDEAB; data at 008075A8 | 005C29B0 -> 006B2330 @ 005C2FE7; data at 008075A8 | 005C29B0 ->
   006B2330 @ 005C34AD; data at 008075A8 | 005C29B0 -> 006B2330 @ 005C3A73; data at 008075A8 |
   005C29B0 -> 006B2330 @ 005C3AD2; data at 008075A8 | 005C29B0 -> 006B2330 @ 005C3C6F; data at
   008075A8 | 005C29B0 -> 006B2330 @ 005C3DC0; data at 008075A8 | 005C29B0 -> 006B2330 @ 005C3FBD;
   data at 008075A8 | 005CBD00 -> 006B2330 @ 005CBE56; data at 008075A8 | 005CBD00 -> 006B2330 @
   005CBEDB; data at 008075A8 | 005D7A50 -> 006B2330 @ 005D7C76; data at 008075A8 | 005DB4F0 ->
   006B2330 @ 005DB762; data at 008075A8 | 005DB4F0 -> 006B2330 @ 005DB986; data at 008075A8 |
   005DB4F0 -> 006B2330 @ 005DBA47; data at 008075A8 | 005DB4F0 -> 006B2330 @ 005DBBCA; data at
   008075A8 | 005DFA30 -> 006B2330 @ 005DFD9B; data at 008075A8 | 005DFA30 -> 006B2330 @ 005DFE01;
   data at 008075A8 | 005DFA30 -> 006B2330 @ 005DFF5B; data at 008075A8 | 005DFA30 -> 006B2330 @
   005E00A3; data at 008075A8 | 005E1330 -> 006B2330 @ 005E2C84; data at 008075A8 | 005E1330 ->
   006B2330 @ 005E2E5B; data at 008075A8 | 005E5FB0 -> 006B2330 @ 005E6246; data at 008075A8 |
   005E6770 -> 006B2330 @ 005E6A1F; data at 008075A8 | 005E6770 -> 006B2330 @ 005E6A86; data at
   008075A8 | 005E6770 -> 006B2330 @ 005E6C5D; data at 008075A8 | 005E6770 -> 006B2330 @ 005E6DEF;
   data at 008075A8

   [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /int; no intervening CALL or EAX/AX/AL/AH definition exists; machine CFG audit: used=2,
   ignored=57, unknown=0 */

int st::fn_006B2330(DDXContext_008075A8 *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,
                uint param_6,ushort *param_7)

{
  DDXEntry_008075A8_01B0 *pDVar1;
  int iVar2;

  iVar2 = st::fn_006B1D50
                    ((uint)param_1,param_2,param_3,0,nullptr,0,0xffffffff,0xffffffff,0,1);
  if (iVar2 == 0) {
    pDVar1 = param_1->entries_01B0[*param_2];
    pDVar1->field_0038 = param_5;
    pDVar1->field_0030 = param_5;
    pDVar1->field_0020 = param_5;
    pDVar1->field_000C = param_5;
    pDVar1->field_003C = param_6;
    pDVar1->field_0034 = param_6;
    pDVar1->field_0024 = param_6;
    pDVar1->field_0010 = param_6;
    pDVar1->field_00CC = param_4;
    pDVar1->flags = pDVar1->flags | 0x4000;
    pDVar1->field_00C0 = (uint)param_7;
  }
  return iVar2;
}

// 006B23A0 FUN_006b23a0
#line 1 "decomp/ST.exe/functions/006B23A0/decomp.c"

void st::fn_006B23A0(RecoveredRecord_006B23A0_6D204B14 *param_1,uint param_2,uint param_3)

{
  uint *puVar1;

  if ((param_2 < param_1->field_01A0) &&
     (puVar1 = *(uint **)(param_1->field_01B0 + param_2 * 4), (*puVar1 & 0xc000) == 0xc000)) {
    puVar1[0x33] = param_3;
    st::fn_006B23E0(reinterpret_cast<RecoveredRecord_006B23E0_5A2050A1 *>(param_1),puVar1);
  }
  return;
}

// 006B23E0 FUN_006b23e0
#line 1 "decomp/ST.exe/functions/006B23E0/decomp.c"

void st::fn_006B23E0(RecoveredRecord_006B23E0_5A2050A1 *param_1,uint *param_2)

{
  if (((byte)*param_2 & 0x21) == 0x21) {
    *param_2 = *param_2 | 6;
    param_1->field_01B4 = 1;
  }
  return;
}

// 006B2410 FUN_006b2410
#line 1 "decomp/ST.exe/functions/006B2410/decomp.c"

/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 005999C0 -> 006B2410 @ 00599A8C; data at 008075A8 */

void st::fn_006B2410(DDXContext_008075A8 *param_1,uint param_2,uint param_3)

{
  DDXEntry_008075A8_01B0 *pDVar1;

  if ((param_2 < param_1->entryCount) &&
     (pDVar1 = param_1->entries_01B0[param_2], (pDVar1->flags & 0xc000) == 0xc000)) {
    pDVar1->field_00C0 = param_3;
    st::fn_006B23E0(reinterpret_cast<RecoveredRecord_006B23E0_5A2050A1 *>(param_1),&pDVar1->flags);
  }
  return;
}

// 006B2450 FUN_006b2450
#line 1 "decomp/ST.exe/functions/006B2450/decomp.c"

int st::fn_006B2450(int *param_1,int param_2)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(*param_1 + 0x20) == 0x10) {
    return 0;
  }
  iVar1 = param_1[0x75];
  param_1[0x75] = param_2;
  return iVar1;
}

// 006B27B0 FUN_006b27b0
#line 1 "decomp/ST.exe/functions/006B27B0/decomp.c"

void st::fn_006B27B0(RecoveredRecord_006B27B0_FDD8E181 *param_1,uint param_2,uint *param_3,
                 uint *param_4)

{
  uint *puVar1;

  if ((param_2 < param_1->field_01A0) &&
     (puVar1 = *(uint **)(param_1->field_01B0 + param_2 * 4), (*puVar1 & 0xc000) == 0x8000)) {
    *param_3 = puVar1[0x2e];
    *param_4 = puVar1[0x2f];
  }
  return;
}

// 006B2800 FUN_006b2800
#line 1 "decomp/ST.exe/functions/006B2800/decomp.c"

/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0052D370 -> 006B2800 @ 0052D53C; data at 008075A8 | 0052D690 -> 006B2800 @ 0052D7A8;
   data at 008075A8 | 0052D690 -> 006B2800 @ 0052D7E9; data at 008075A8 | 0052D980 -> 006B2800 @
   0052DA55; data at 008075A8 | 0052D980 -> 006B2800 @ 0052DA96; data at 008075A8 | 0052DB90 ->
   006B2800 @ 0052DC56; data at 008075A8 | 0052DD20 -> 006B2800 @ 0052E158; data at 008075A8 |
   0052DD20 -> 006B2800 @ 0052E199; data at 008075A8 | 005449B0 -> 006B2800 @ 00544CE1; data at
   008075A8 | 005449B0 -> 006B2800 @ 0054500E; data at 008075A8 | 005449B0 -> 006B2800 @ 00546028;
   data at 008075A8 | 005449B0 -> 006B2800 @ 005460BB; data at 008075A8 | 005999C0 -> 006B2800 @
   00599AA9; data at 008075A8 | 005AACB0 -> 006B2800 @ 005AADE6; data at 008075A8 | 005AACB0 ->
   006B2800 @ 005AAE05; data at 008075A8 | 005E1330 -> 006B2800 @ 005E1E3B; data at 008075A8 |
   005E1330 -> 006B2800 @ 005E21BE; data at 008075A8 | 005E1330 -> 006B2800 @ 005E281E; data at
   008075A8

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=20, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006B2800(DDXContext_008075A8 *param_1,uint param_2,uint param_3,uint param_4)

{
  DDXEntry_008075A8_01B0 *pDVar1;

  if ((param_2 < param_1->entryCount) &&
     (pDVar1 = param_1->entries_01B0[param_2], (pDVar1->flags & 0xc000) == 0xc000)) {
    pDVar1->field_0038 = param_3;
    pDVar1->field_0030 = param_3;
    pDVar1->field_0020 = param_3;
    pDVar1->field_003C = param_4;
    pDVar1->field_0034 = param_4;
    pDVar1->field_0024 = param_4;
    st::fn_006B23E0(reinterpret_cast<RecoveredRecord_006B23E0_5A2050A1 *>(param_1),&pDVar1->flags);
  }
  return;
}

// 006B2850 FUN_006b2850
#line 1 "decomp/ST.exe/functions/006B2850/decomp.c"

uint st::fn_006B2850(RecoveredRecord_006B2850_44647229 *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;

  uVar3 = 1;
  if (param_2 < param_1->field_01A0) {
    puVar1 = *(uint **)(param_1->field_01B0 + param_2 * 4);
    uVar2 = *puVar1;
    if ((uVar2 & 0xc000) == 0xc000) {
      uVar3 = ~uVar2 >> 0x11 & 1;
      *puVar1 = uVar2 & 0xfffdffff;
      if (param_3 == 0) {
        *puVar1 = uVar2 & 0xfffdffff | 0x20000;
      }
      st::fn_006B23E0(reinterpret_cast<RecoveredRecord_006B23E0_5A2050A1 *>(param_1),puVar1);
    }
  }
  return uVar3;
}

// 006B28C0 FUN_006b28c0
#line 1 "decomp/ST.exe/functions/006B28C0/decomp.c"

/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004F5690 -> 006B28C0 @ 004F68E0; data at 008075A8 | 00543600 -> 006B28C0 @ 00543752;
   data at 008075A8 */

bool st::fn_006B28C0(DDXContext_008075A8 *param_1,uint param_2,int param_3)

{
  DDXEntry_008075A8_01B0 *pDVar1;
  uint uVar2;
  bool bVar3;

  bVar3 = true;
  if (param_2 < param_1->entryCount) {
    pDVar1 = param_1->entries_01B0[param_2];
    uVar2 = pDVar1->flags;
    if ((uVar2 & 0xc000) == 0xc000) {
      bVar3 = (uVar2 & 0x40020000) == 0x40020000;
      pDVar1->flags = uVar2 & 0xbffdffff;
      if (param_3 != 0) {
        pDVar1->flags = uVar2 & 0xbffdffff | 0x40020000;
      }
      st::fn_006B23E0(reinterpret_cast<RecoveredRecord_006B23E0_5A2050A1 *>(param_1),&pDVar1->flags);
    }
  }
  return bVar3;
}

// 006B3020 FUN_006b3020
#line 1 "decomp/ST.exe/functions/006B3020/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=10, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006B3020(int param_1,uint param_2,uint param_3)

{
  st::fn_006B2020((RecoveredRecordView_006B2020_4DD6C4AD *)param_1,param_2,param_3);
  return;
}

// 006B3070 FUN_006b3070
#line 1 "decomp/ST.exe/functions/006B3070/decomp.c"

void st::fn_006B3070(RecoveredRecordView_006B2020_4DD6C4AD *param_1,uint param_2,int param_3,
                 int param_4)

{
  uint *puVar1;
  uint uVar2;

  if (param_4 < 0) {
    if (((param_2 < st::machine_word_boundary_cast<uint>(param_1->field_01A0)) &&
        (puVar1 = *(uint **)(param_1->field_01B0 + param_2 * 4), (*puVar1 & 0x4008000) == 0x4008000)
        ) && (uVar2 = *(uint *)(puVar1[0x34] + param_3 * 4), -1 < (int)uVar2)) {
      st::fn_006B2020(param_1,uVar2,-param_4);
    }
  }
  return;
}

// 006B30D0 FUN_006b30d0
#line 4 "decomp/ST.exe/functions/006B30D0/decomp.c"
undefined4 st::fn_006B30D0(RecoveredRecord_006B30D0_CB79E1A3 *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uVar3 = 0xffffffff;
  if (((param_2 < param_1->field_01A0) &&
      (puVar1 = *(uint **)(param_1->field_01B0 + param_2 * 4), (*puVar1 & 0x4008000) == 0x4008000))
     && (uVar2 = *(uint *)(puVar1[0x34] + param_3 * 4), -1 < (int)uVar2)) {

    uVar3 = st::fn_006B3040((int)param_1,uVar2);
  }
  return uVar3;
}

// 006B33F0 FUN_006b33f0
#line 1 "decomp/ST.exe/functions/006B33F0/decomp.c"

/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (4), none consume AL/AX, and every RET path defines full EAX; sites=004F80A0 @ 004F8691
   -> TEST TEST EAX,EAX | 004FB060 @ 004FB900 -> TEST TEST EAX,EAX | 00543C90 @ 00543CBC -> XOR XOR
   EAX,EAX | 006B3120 @ 006B3221 -> TEST TEST EAX,EAX

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004F80A0 -> 006B33F0 @ 004F8691; data at 008075A8 | 004FB060 -> 006B33F0 @ 004FB900;
   data at 008075A8 */

int st::fn_006B33F0(DDXContext_008075A8 *param_1,uint param_2)

{
  uint uVar1;

  uVar1 = 0;
  if (param_2 < param_1->entryCount) {
    uVar1 = (uint)(st::machine_word_boundary_cast<int>((param_1->entries_01B0[param_2]->flags & 0x8020)) == 0x8020);
  }
  return uVar1;
}

// 006B35D0 FUN_006b35d0
#line 4 "decomp/ST.exe/functions/006B35D0/decomp.c"
undefined4 st::fn_006B35D0(int *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;

  if (param_2 < (uint)param_1[0x68]) {
    puVar1 = *(uint **)(param_1[0x6c] + param_2 * 4);
    uVar2 = *puVar1;
    if (((uVar2 & 0x8000) != 0) && (((byte)uVar2 & 0x30) == 0x20)) {
      if ((uVar2 & 0x80000) != 0) {
        /* ST_CALLSITE[006B360C]: CALL dword ptr [0x0085bb8c] */
        st::external_00000018((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
        st::fn_006B23E0(reinterpret_cast<RecoveredRecord_006B23E0_5A2050A1 *>(param_1),puVar1);
        /* ST_CALLSITE[006B3622]: CALL dword ptr [0x0085bb90] */
        st::external_00000019((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
        return 0;
      }
      st::fn_006B23E0(reinterpret_cast<RecoveredRecord_006B23E0_5A2050A1 *>(param_1),puVar1);
    }
  }
  return 0;
}

// 006B3930 FUN_006b3930
#line 1 "decomp/ST.exe/functions/006B3930/decomp.c"

/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=6, scalar_uses=0; sites=006B394F dereference: MOV ECX,dword ptr [ESI +
   0x1a0] | 006B395D dereference: MOV ECX,dword ptr [ESI + 0x1b0] | 006B39A2 dereference: MOV
   EDI,dword ptr [ESI + EAX*0x8 + 0x11c] | 006B39BB dereference: SUB EDX,dword ptr [ESI + EAX*0x8 +
   0x120] | 006B39C8 dereference: MOV EDX,dword ptr [ESI + EAX*0x8 + 0x11c] | 006B39DD dereference:
   MOV EDX,dword ptr [ESI + EAX*0x8 + 0x120] */

bool st::fn_006B3930(RecoveredRecord_006B3930_A2828000 *param_1,uint param_2,int *param_3)

{
  RecoveredRecord_006CEE10_585981DD *pRVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  param_3[3] = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  if (param_2 < param_1->field_01A0) {
    pRVar1 = *(RecoveredRecord_006CEE10_585981DD **)(param_1->field_01B0 + param_2 * 4);
    if ((*(uint *)pRVar1 & 3) != 0) {
      if ((*(uint *)pRVar1 & 2) == 0) {
        piVar3 = reinterpret_cast<int *>(&pRVar1->field_0x4);
      }
      else {
        st::fn_006CF950(reinterpret_cast<uint *>(pRVar1));
        piVar3 = reinterpret_cast<int *>(&pRVar1->field_0x18);
      }
      local_14 = *piVar3;
      local_10 = piVar3[1];
      local_c = piVar3[2];
      local_8 = piVar3[3];

      iVar2 = st::fn_006CEE10((int)param_1,pRVar1);
      iVar4 = iVar2 * 0x10;
      local_24 = *(int *)(&param_1->field_0x14 + iVar4) -
                 *(int *)(&param_1->field_0x11c + iVar2 * 8);
      local_20 = *(int *)(&param_1->field_0x18 + iVar4) -
                 *(int *)(&param_1->field_0x120 + iVar2 * 8);
      local_1c = *(int *)(&param_1->field_0x1c + iVar4) -
                 *(int *)(&param_1->field_0x11c + iVar2 * 8);
      local_18 = *(int *)(&param_1->field_0x20 + iVar2 * 0x10) -
                 *(int *)(&param_1->field_0x120 + iVar2 * 8);
      if (local_c < 0) {
        local_14 = local_14 + local_c;
        local_c = -local_c;
      }
      if (local_8 < 0) {
        local_10 = local_10 + local_8;
        local_8 = -local_8;
      }

      iVar2 = st::fn_006CFEB0(param_3,&local_14,&local_24);
      return iVar2 != 0;
    }
  }
  return false;
}

// 006B3A40 FUN_006b3a40
#line 1 "decomp/ST.exe/functions/006B3A40/decomp.c"

void st::fn_006B3A40(RecoveredRecord_006B3A40_EC4AA6D4 *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;

  param_3[3] = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  if ((param_2 < param_1->field_01A0) &&
     (puVar1 = *(uint **)(param_1->field_01B0 + param_2 * 4), (*puVar1 & 0x8020) == 0x8020)) {
    st::fn_006CF950(puVar1);
    *param_3 = puVar1[6];
    param_3[1] = puVar1[7];
    param_3[2] = puVar1[8];
    param_3[3] = puVar1[9];
  }
  return;
}

// 006B3AB0 FUN_006b3ab0
#line 1 "decomp/ST.exe/functions/006B3AB0/decomp.c"

uint st::fn_006B3AB0(RecoveredRecord_006B3AB0_5288AE95 *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;

  uVar2 = 0xffffffff;
  if ((param_2 < param_1->field_01A0) &&
     (puVar1 = *(uint **)(param_1->field_01B0 + param_2 * 4), (*puVar1 & 0x8000) != 0)) {
    uVar2 = puVar1[0x31];
  }
  return uVar2;
}

// 006B3AF0 FUN_006b3af0
#line 1 "decomp/ST.exe/functions/006B3AF0/decomp.c"

void st::fn_006B3AF0(int *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  if (param_2 < (uint)param_1[0x68]) {
    puVar1 = *(uint **)(param_1[0x6c] + param_2 * 4);
    if ((*puVar1 & 0x80000) != 0) {
      /* ST_CALLSITE[006B3B21]: CALL dword ptr [0x0085bb8c] */
      st::external_00000018((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
    if (((*puVar1 & 0x30) != 0) && ((*puVar1 & 0x8000) != 0)) {
      param_1[0x6d] = 1;
      uVar2 = *puVar1;
      uVar3 = uVar2 & 0xffffffcd;
      *puVar1 = uVar3;
      if ((uVar2 & 1) != 0) {
        *puVar1 = uVar3 | 4;
      }
      if (((*puVar1 & 0x4000000) != 0) && (puVar1[0x34] != 0)) {
        uVar2 = puVar1[0x30];
        iVar4 = 0;
        if (0 < (int)uVar2) {
          do {
            uVar3 = *(uint *)(puVar1[0x34] + iVar4 * 4);
            if (-1 < (int)uVar3) {
              st::fn_006B3AF0(param_1,uVar3);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)uVar2);
        }
      }
    }
    if ((*puVar1 & 0x80000) != 0) {
      /* ST_CALLSITE[006B3B9F]: CALL dword ptr [0x0085bb90] */
      st::external_00000019((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
  }
  return;
}

// 006B3BB0 FUN_006b3bb0
#line 1 "decomp/ST.exe/functions/006B3BB0/decomp.c"

void st::fn_006B3BB0(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;

  if (param_1 != nullptr) {
    st::fn_006B3AF0(param_1,param_2);
    if (param_2 < (uint)param_1[0x68]) {
      puVar3 = *(uint **)(param_1[0x6c] + param_2 * 4);
      if ((*puVar3 & 0x8000) != 0) {
        if ((*puVar3 & 0x80000) != 0) {
          /* ST_CALLSITE[006B3BFA]: CALL dword ptr [0x0085bb8c] */
          st::external_00000018((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
          st::fn_006AB060(puVar3 + 0x30);
        }
        uVar1 = *puVar3;
        *puVar3 = uVar1 & 0xffff7fff;
        if ((uVar1 & 0x6000000) != 0) {
          if ((uVar1 & 0x2000000) != 0) {
            st::fn_006AB060(puVar3 + 0x33);
          }
          if (puVar3[0x34] != 0) {
            iVar2 = 0;
            if (0 < (int)puVar3[0x30]) {
              do {
                uVar1 = *(uint *)(puVar3[0x34] + iVar2 * 4);
                if (-1 < (int)uVar1) {
                  st::fn_006B3BB0(param_1,uVar1);
                  puVar3 = *(uint **)(param_1[0x6c] + param_2 * 4);
                }
                iVar2 = iVar2 + 1;
              } while (iVar2 < (int)puVar3[0x30]);
            }
            st::fn_006AB060(puVar3 + 0x34);
          }
        }
        if ((*puVar3 & 0x80000) != 0) {
          /* ST_CALLSITE[006B3C8F]: CALL dword ptr [0x0085bb90] */
          st::external_00000019((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
        }
      }
    }
  }
  return;
}

// 006B3CA0 FUN_006b3ca0
#line 4 "decomp/ST.exe/functions/006B3CA0/decomp.c"
void st::fn_006B3CA0(undefined4 param_1,int *param_2)

{
  if (param_2 != nullptr) {
    /* ST_CALLSITE[006B3CAD]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_2 + 8))(param_2);
  }
  return;
}

// 006B3F40 FUN_006b3f40
#line 1 "decomp/ST.exe/functions/006B3F40/decomp.c"

void st::fn_006B3F40(AnonShape_006B3F40_BF05F5FE *param_1,int param_2,int param_3)

{
  int iVar1;

  param_1->field_0208 = param_2;
  if (param_3 != 0) {
    param_1->field_020C = param_3;
    return;
  }

  iVar1 = st::fn_006B4FA0((RecoveredRecord_006B4FA0_DAC3A217 *)param_2);
  param_1->field_020C = iVar1;
  return;
}

// 006B3F80 FUN_006b3f80
#line 1 "decomp/ST.exe/functions/006B3F80/decomp.c"

void st::fn_006B3F80(AnonShape_006B3F80_E1B76DFD *param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if (param_1->field_0210 != 0) {
    local_c = param_1->field_01EC;
    iVar2 = param_1->field_01E4;
    local_14 = *(int *)(&param_1->field_0x11c + iVar2 * 8) + local_c * param_2;
    local_8 = param_1->field_01F0;
    local_10 = *(int *)(&param_1->field_0x120 + iVar2 * 8) + local_8 * param_3;

    iVar2 = st::fn_006CFEB0(&local_14,&local_14,reinterpret_cast<int *>((&param_1->field_0x14 + iVar2 * 0x10)));
    if (iVar2 != 0) {
      iVar2 = param_1->field_01F4 + 7;
      pbVar1 = (byte *)((st::storage_bit_cast<int>(static_cast<uint32_t>(iVar2 + (iVar2 >> 0x1f & 7U))) >> 3) * param_3 + param_1->field_0210 +
                       (st::storage_bit_cast<int>(static_cast<uint32_t>(param_2 ^ 7)) >> 3));
      *pbVar1 = *pbVar1 | '\x01' << ((param_2 ^ 7) & 7);
    }
  }
  return;
}

// 006B4030 FUN_006b4030
#line 1 "decomp/ST.exe/functions/006B4030/decomp.c"

void st::fn_006B4030(AnonShape_006B4030_B7868C9A *param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if (param_1->field_0220 != 0) {
    local_c = param_1->field_01EC;
    iVar2 = param_1->field_01E4;
    local_14 = *(int *)(&param_1->field_0x11c + iVar2 * 8) + local_c * param_2;
    local_8 = param_1->field_01F0;
    local_10 = *(int *)(&param_1->field_0x120 + iVar2 * 8) + local_8 * param_3;

    iVar2 = st::fn_006CFEB0(&local_14,&local_14,reinterpret_cast<int *>((&param_1->field_0x14 + iVar2 * 0x10)));
    if (iVar2 != 0) {
      iVar2 = param_1->field_01F4 + 7;
      pbVar1 = (byte *)((st::storage_bit_cast<int>(static_cast<uint32_t>(iVar2 + (iVar2 >> 0x1f & 7U))) >> 3) * param_3 + param_1->field_0220 +
                       (st::storage_bit_cast<int>(static_cast<uint32_t>(param_2 ^ 7)) >> 3));
      *pbVar1 = *pbVar1 | '\x01' << ((param_2 ^ 7) & 7);
    }
  }
  return;
}

// 006B40E0 FUN_006b40e0
#line 1 "decomp/ST.exe/functions/006B40E0/decomp.c"

void st::fn_006B40E0(AnonShape_006B40E0_1B946617 *param_1,int param_2)

{
  int iVar1;

  iVar1 = param_1->field_01DC;
  param_1->field_01DC = param_2;
  if (iVar1 != param_2) {
    param_1->field_01B8 = 1;
    param_1->field_01B4 = 1;
  }
  return;
}

// 006B4110 FUN_006b4110
#line 4 "decomp/ST.exe/functions/006B4110/decomp.c"
undefined4 st::fn_006B4110(RecoveredRecord_006B4110_3C800FB2 *param_1)

{
  return param_1->field_01DC;
}

// 006B4120 FUN_006b4120
#line 1 "decomp/ST.exe/functions/006B4120/decomp.c"

void st::fn_006B4120(int *param_1)

{
  st::fn_006AB060(param_1 + 0x84);
  st::fn_006AB060(param_1 + 0x88);
  st::fn_006B3BB0(param_1,param_1[0x78]);
  param_1[0x77] = 0;
  param_1[0x78] = 0x7fffffff;
  param_1[0x7a] = 0x7fffffff;
  return;
}

// 006B4170 FUN_006b4170
#line 4 "decomp/ST.exe/functions/006B4170/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 006C7610 -> 006B4170 @ 006C769F

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00520B50 -> 006B4170 @ 00520C11 | 005A39A0 -> 006B4170 @ 005A3A33 | 006B4170 ->
   EXTERNAL:0000009A @ 006B420C | 006C7610 -> 006B4170 @ 006C769F

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 004F80A0 -> 006B4170 @ 004F8934; literal 0 at 004F8924 | 004F96A0 -> 006B4170 @
   004F97AB; literal 0 at 004F979B | 004F9CD0 -> 006B4170 @ 004F9DCD; literal 0 at 004F9DB6 |
   004FE960 -> 006B4170 @ 004FEB95; literal 0 at 004FEB88 | 004FF380 -> 006B4170 @ 004FFAF1; literal
   0 at 004FFAE4 | 00505960 -> 006B4170 @ 005059AD; literal 16777277 at 00505998 | 00505960 ->
   006B4170 @ 005059C8; literal 16777279 at 005059B8 | 00505960 -> 006B4170 @ 005059E3; literal
   16777274 at 005059D3 | 005061C0 -> 006B4170 @ 00506721; literal 0 at 00506715 | 005061C0 ->
   006B4170 @ 00506A89; literal 0 at 00506A7E | 005061C0 -> 006B4170 @ 00506CFD; literal 0 at
   00506CF1 | 005061C0 -> 006B4170 @ 00506F00; literal 0 at 00506EF1 | 00507F60 -> 006B4170 @
   005081B4; literal 0 at 005081A5 | 00507F60 -> 006B4170 @ 00508707; literal 0 at 005086F9 |
   00507F60 -> 006B4170 @ 005088D3; literal 0 at 005088C4 | 0052DD20 -> 006B4170 @ 0052E07C; literal
   16777353 at 0052E05E | 00554C80 -> 006B4170 @ 00554CEA; literal 0 at 00554CD1 | 00554C80 ->
   006B4170 @ 00554DBD; literal 0 at 00554DA7 | 0056F250 -> 006B4170 @ 0056F53E; literal 0 at
   0056F533 | 005A39A0 -> 006B4170 @ 005A3A33; literal 255 at 005A3A27 | 005A3AB0 -> 006B4170 @
   005A3E72; literal 255 at 005A3E59 | 005A4350 -> 006B4170 @ 005A6F00; literal 255 at 005A6EB3 |
   005A4350 -> 006B4170 @ 005A7008; literal 255 at 005A6FBB | 005A4350 -> 006B4170 @ 005A70C6;
   literal 255 at 005A706A | 005A4350 -> 006B4170 @ 005A725A; literal 255 at 005A724C | 005A4350 ->
   006B4170 @ 005A73D2; literal 255 at 005A73C4 | 005A4350 -> 006B4170 @ 005A74ED; literal 255 at
   005A74DF | 005A4350 -> 006B4170 @ 005A77CC; literal 255 at 005A77BE | 005A4350 -> 006B4170 @
   005A794A; literal 255 at 005A793C | 005A4350 -> 006B4170 @ 005A7A7F; literal 255 at 005A7A71 |
   005A4350 -> 006B4170 @ 005A7B5A; literal 255 at 005A7B26 | 005A4350 -> 006B4170 @ 005A80E2;
   literal 255 at 005A80CF | 005A4350 -> 006B4170 @ 005A83F1; literal 255 at 005A83DB | 005A4350 ->
   006B4170 @ 005A863E; literal 255 at 005A862F | 005A4350 -> 006B4170 @ 005A8905; literal 255 at
   005A88F6 | 005AB300 -> 006B4170 @ 005AB6C1; literal 255 at 005AB6AA | 005AE050 -> 006B4170 @
   005AE0D3; literal 255 at 005AE0C2 | 005AF350 -> 006B4170 @ 005AF63D; literal 255 at 005AF61A |
   005B5BE0 -> 006B4170 @ 005B5C47; literal 0 at 005B5C36 | 005B5BE0 -> 006B4170 @ 005B5C60; literal
   0 at 005B5C4F | 005B5BE0 -> 006B4170 @ 005B5D5E; literal 0 at 005B5D4D | 005B5F00 -> 006B4170 @
   005B5F6C; literal 0 at 005B5F5B | 005B5F00 -> 006B4170 @ 005B607B; literal 0 at 005B606A |
   005BC5E0 -> 006B4170 @ 005BC81F; literal 255 at 005BC80D | 005BD7A0 -> 006B4170 @ 005BDA0A;
   literal 16777471 at 005BD9F4 | 005BE5B0 -> 006B4170 @ 005BE69D; literal 16777292 at 005BE687 |
   005BE5B0 -> 006B4170 @ 005BF085; literal 16777292 at 005BF071 | 005BE5B0 -> 006B4170 @ 005BF2A5;
   literal 16777216 at 005BF286 | 005BFD30 -> 006B4170 @ 005BFDF1; literal 16777216 at 005BFDDB |
   005C1610 -> 006B4170 @ 005C16A9; literal 16777471 at 005C169A | 005C6D40 -> 006B4170 @ 005C719C;
   literal 255 at 005C7179 | 005D1400 -> 006B4170 @ 005D3591; literal 255 at 005D3578 | 005D5560 ->
   006B4170 @ 005D6AA1; literal 255 at 005D6A88 | 005D8BF0 -> 006B4170 @ 005D8CAA; literal 255 at
   005D8C98 | 005D9250 -> 006B4170 @ 005D92A8; literal 255 at 005D9288 | 005D9470 -> 006B4170 @
   005D99A6; literal 255 at 005D996E | 005D9470 -> 006B4170 @ 005D9ACA; literal 255 at 005D9AB3 |
   005DD470 -> 006B4170 @ 005DD689; literal 255 at 005DD675 | 005DE050 -> 006B4170 @ 005DE102;
   literal 255 at 005DE0EB | 005E6770 -> 006B4170 @ 005E68E4; literal 255 at 005E68D3 | 005E7C00 ->
   006B4170 @ 005E7C9F; literal 0 at 005E7C84 | 005E7C00 -> 006B4170 @ 005E7E31; literal 0 at
   005E7E23 | 005E7FE0 -> 006B4170 @ 005E806A; literal 255 at 005E8059 | 005E9D70 -> 006B4170 @
   005EA002; literal 255 at 005E9FE0 | 006C7430 -> 006B4170 @ 006C751E; zero-filled partial register
   load at 006C7502

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

void st::fn_006B4170(RecoveredSourceFamily_dibcopy *param_1,int param_2,int lprcSrc2,int param_4,
                 int param_5,int param_6,byte param_7)

{
  alignas(4) byte st_stack_frame[120];

  byte *puVar1;
  BOOL BVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  tagRECT local_54;
  uint local_44;
  RECT local_3c;
  RECT local_2c;
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  local_8 = 0xffffffff;
  puStack_c = (undefined *)&DAT_0079d8b0;
  puStack_10 = (byte *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 20);
  if ((0 < param_5) && (0 < param_6)) {
    ExceptionList = &local_14;
    puVar1 = (st_stack_frame + 20);
    if (param_2 == 0) {
      ExceptionList = &local_14;

      param_2 = st::fn_006B4FA0(reinterpret_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(param_1));
      puVar1 = local_1c;
    }
    local_1c = puVar1;
    local_2c.top = param_4;
    local_2c.left = lprcSrc2;
    local_2c.bottom = param_4 + param_6;
    local_2c.right = lprcSrc2 + param_5;
    local_3c.left = 0;
    local_3c.top = 0;
    local_3c.right = param_1->field_0004;
    uVar6 = local_3c.right + 3U & 0xfffffffc;
    local_3c.bottom = param_1->field_0008;
    if (local_3c.bottom < 0) {
      local_3c.bottom = -local_3c.bottom;
      uVar6 = -uVar6;
    }
    local_44 = uVar6;
    /* ST_CALLSITE[006B420C]: CALL dword ptr [0x0085be50] */
    BVar2 = st::external_0000009A(reinterpret_cast<LPRECT>(&local_54),&local_3c,&local_2c);
    if (BVar2 != 0) {
      iVar3 = local_54.bottom - local_54.top;
      if ((int)uVar6 < 0) {
        iVar5 = -((local_54.top + -1 + iVar3) * uVar6);
      }
      else {
        iVar5 = ((local_3c.bottom - local_54.top) - iVar3) * uVar6;
      }
      pbVar4 = (byte *)(local_54.left + iVar5 + param_2);
      while (iVar3 != 0) {
        pbVar7 = pbVar4;
        for (uVar6 = (uint)(local_54.right - local_54.left) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(uint *)pbVar7 = CONCAT22(CONCAT11(param_7,param_7),CONCAT11(param_7,param_7));
          pbVar7 = pbVar7 + 4;
        }
        for (uVar6 = local_54.right - local_54.left & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar7 = param_7;
          pbVar7 = pbVar7 + 1;
        }
        pbVar4 = pbVar4 + local_44;
        iVar3 = iVar3 + -1;
      }
    }
  }
  ExceptionList = local_14;
  return;
}

// 006B4640 FUN_006b4640
#line 1 "decomp/ST.exe/functions/006B4640/decomp.c"

/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004F1390 -> 006B4640 @ 004F13CD; CPanelTy::OutProc parameter param_1 | 005403C0 ->
   006B4640 @ 00540458; data at 0080759C | 0054BE70 -> 006B4640 @ 0054BEAD; CPanelTy::OutProc
   parameter param_1 | 00554660 -> 006B4640 @ 005546EC; data at 0080759C | 00554800 -> 006B4640 @
   0055495C; data at 0080759C | 005939E0 -> 006B4640 @ 00593A9E; ComboTy::OutBmpProc parameter
   param_1 | 005C7800 -> 006B4640 @ 005C7911; data at 0080759C | 006B4640 -> 006B42D0 @ 006B4668

   [STPrototypeApplier] Propagated return.
   Evidence: 006B4640 returns return of Library::DKW::DDX::FUN_006b42d0 @ 006B466E */

int st::fn_006B4640(DDXContext *param_1,int param_2,int param_3,BITMAPINFO *param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;

  uVar1 = (param_4->bmiHeader).biHeight;
  uVar3 = (int)uVar1 >> 0x1f;

  iVar2 = st::fn_006B42D0
                    (param_1,param_2,param_3,param_4,param_5,0,0,(param_4->bmiHeader).biWidth,
                     (uVar1 ^ uVar3) - uVar3);
  return iVar2;
}

// 006B48A0 FUN_006b48a0
#line 1 "decomp/ST.exe/functions/006B48A0/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 006B48A0 returns return of Library::DKW::DDX::FUN_006b4680 @ 006B48D2 */

int st::fn_006B48A0(int *param_1,int param_2,int param_3,BITMAPINFO *param_4,uint *param_5,uint param_6
                )

{
  uint uVar1;
  int iVar2;
  uint uVar3;

  uVar1 = (param_4->bmiHeader).biHeight;
  uVar3 = (int)uVar1 >> 0x1f;
  iVar2 = st::fn_006B4680
                    (param_1,param_2,param_3,param_4,param_5,0,0,(param_4->bmiHeader).biWidth,
                     (uVar1 ^ uVar3) - uVar3,param_6);
  return iVar2;
}

// 006B4B20 FUN_006b4b20
#line 4 "decomp/ST.exe/functions/006B4B20/decomp.c"
undefined4
st::fn_006B4B20(int *param_1,RecoveredRecordView_006B4B20_F20E56A6 *param_2,int param_3,byte param_4)

{
  byte bVar1;
  byte bVar2;
  RecoveredRecordView_006B4B20_F20E56A6 *pRVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  RecoveredRecordView_006B4B20_F20E56A6 *pRVar16;
  byte *pbVar17;
  int iVar18;
  byte *pbVar19;
  bool bVar20;
  short *local_3c;
  int local_34;
  byte *local_30;
  RecoveredRecordView_006B4B20_F20E56A6 *local_2c;
  int local_20;
  int local_1c;
  uint local_14;
  int local_10;
  int local_c;
  RecoveredRecordView_006B4B20_F20E56A6 *pAVar16_mg0;

  *param_1 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_3 == 0) {

    param_3 = st::fn_006B4FA0(reinterpret_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(param_2));
  }
  pRVar3 = (RecoveredRecordView_006B4B20_F20E56A6 *)param_2->field_0004;
  uVar4 = param_2->field_0008;
  uVar15 = (uint)param_2->field_000E * (int)pRVar3 + 0x1f >> 3 & 0x1ffffffc;

  puVar5 = static_cast<uint *>(st::fn_006AAC70(st::storage_bit_cast<int>(static_cast<uint32_t>((int)&pRVar3->field_0x1 * uVar4 * 3)) / 2 + 0x16));
  if (puVar5 == nullptr) {
    return 0xfffffffe;
  }
  pbVar6 = (byte *)((uVar4 - 1) * uVar15 + param_3);
  pbVar14 = (byte *)((int)puVar5 + 0x16);
  local_1c = -1;
  RecoveredRecordView_006B4B20_F20E56A6 * param_2_after_write = nullptr; /* compiler stack-slot lifetime split */
  local_20 = 0;
  local_14 = 0;
  iVar12 = 0;
  pAVar16_mg0 = nullptr;
  local_2c = pRVar3;
  if (0 < (int)uVar4) {
    do {
      pRVar16 = nullptr;
      while( true ) {
        bVar1 = *pbVar6;
        while (bVar1 == param_4) {
          if ((int)pRVar3 <= (int)pRVar16) goto LAB_006b4c1b;
          pbVar6 = pbVar6 + 1;
          pRVar16 = reinterpret_cast<RecoveredRecordView_006B4B20_F20E56A6 *>(reinterpret_cast<byte *>(pRVar16) + 0x1);
          bVar1 = *pbVar6;
        }
        if ((int)pRVar3 <= (int)pRVar16) break;
        if (local_1c == -1) {
          local_1c = local_14;
        }
        local_20 = local_14;
        if ((int)pRVar16 < (int)local_2c) {
          local_2c = pRVar16;
        }
        bVar1 = *pbVar6;
        for (; (bVar1 != param_4 && ((int)pRVar16 < (int)pRVar3));
            pRVar16 = reinterpret_cast<RecoveredRecordView_006B4B20_F20E56A6 *>(reinterpret_cast<byte *>(pRVar16) + 0x1)) {
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
        }
        if ((int)param_2_after_write < (int)pRVar16) {
          param_2_after_write = pRVar16;
        }
      }
LAB_006b4c1b:
      pbVar6 = pbVar6 + -(int)(&pRVar3->field_0x0 + uVar15);
      local_14 = local_14 + 1;
      iVar12 = local_20;
      pAVar16_mg0 = param_2_after_write;
    } while ((int)local_14 < (int)uVar4);
  }
  local_c = (int)pAVar16_mg0 - (int)local_2c;
  if (local_1c == -1) {
    local_1c = 0;
    local_c = 0;
    cVar9 = '\0';
  }
  else {
    iVar12 = iVar12 + 1;
    iVar7 = iVar12 - local_1c;
    local_10 = st::storage_bit_cast<int>(static_cast<uint32_t>(iVar7 + (iVar7 >> 0x1f & 0xfU))) >> 4;
    if (7 < local_10) {
      local_10 = 7;
    }
    if (0xffff < (local_10 * local_c * 3) / 2) {
      local_10 = (int)(0x1fffe / (longlong)(local_c * 3));
    }
    local_3c = (short *)((int)puVar5 + 0x16);
    pbVar14 = reinterpret_cast<byte *>((local_3c + local_10));
    local_34 = 0;
    pbVar14[-0xffffffff00000002] = 0;
    pbVar14[-0xffffffff00000001] = 0;
    pbVar6 = &local_2c->field_0x0 + param_3 + ((uVar4 - local_1c) + -1) * uVar15;
    local_14 = 0;
    if (0 < iVar7) {
      do {
        iVar18 = 0;
        if (local_14 != 0) {
          uVar13 = local_14 & 0x8000000f;
          bVar20 = uVar13 == 0;
          if ((int)uVar13 < 0) {
            bVar20 = (uVar13 - 1 | 0xfffffff0) == 0xffffffff;
          }
          if ((bVar20) && (local_34 < local_10)) {
            *local_3c = (short)pbVar14 - ((short)puVar5 + 0x16);
            local_34 = local_34 + 1;
            local_3c = local_3c + 1;
          }
        }
        do {
          iVar10 = 0;
          local_30 = pbVar6;
          if (*pbVar6 == param_4) {
            do {
              if (local_c <= iVar18) break;
              pbVar17 = pbVar6 + 1;
              iVar10 = iVar10 + 1;
              pbVar6 = pbVar6 + 1;
              iVar18 = iVar18 + 1;
            } while (*pbVar17 == param_4);
            if (0x7f < iVar10) {
              uVar13 = (iVar10 - 1U) / 0x7f;
              pbVar17 = pbVar14;
              for (uVar11 = (iVar10 - 1U) / 0x1fc; uVar11 != 0; uVar11 = uVar11 - 1) {
                pbVar17[0] = 0x7f;
                pbVar17[1] = 0x7f;
                pbVar17[2] = 0x7f;
                pbVar17[3] = 0x7f;
                pbVar17 = pbVar17 + 4;
              }
              for (uVar11 = uVar13 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                *pbVar17 = 0x7f;
                pbVar17 = pbVar17 + 1;
              }
              pbVar14 = pbVar14 + uVar13;
              iVar10 = iVar10 + uVar13 * -0x7f;
            }
            local_30 = pbVar6;
            if (0 < iVar10) {
              *pbVar14 = (byte)iVar10;
              pbVar14 = pbVar14 + 1;
            }
          }
          uVar13 = 0;
          bVar20 = false;
          pbVar6 = local_30;
          bVar1 = param_4;
          if (local_c <= iVar18) break;
          do {
            bVar2 = *pbVar6;
            if (bVar2 == param_4) break;
            if (((bVar2 == bVar1) && (iVar18 < local_c + -1)) && (pbVar6[1] == bVar1)) {
              bVar20 = true;
              uVar13 = uVar13 - 1;
              break;
            }
            uVar13 = uVar13 + 1;
            pbVar6 = pbVar6 + 1;
            iVar18 = iVar18 + 1;
            bVar1 = bVar2;
          } while (iVar18 < local_c);
          if (0x3f < (int)uVar13) {
            uVar11 = (uVar13 - 1) / 0x3f;
            uVar13 = uVar13 + uVar11 * -0x3f;
            do {
              *pbVar14 = 0xbf;
              pbVar17 = local_30;
              pbVar19 = pbVar14 + 1;
              memmove(pbVar19, pbVar17, 0x3e); /* compiler REP MOVS byte copy */
              pbVar19 = pbVar19 + 0x3c;
              pbVar17 = pbVar17 + 0x3c;
              pbVar14 = pbVar14 + 0x40;
              local_30 = local_30 + 0x3f;
              uVar11 = uVar11 - 1;
              pbVar19[2] = pbVar17[2];
            } while (uVar11 != 0);
          }
          if (0 < (int)uVar13) {
            *pbVar14 = (byte)uVar13 | 0x80;
            pbVar17 = pbVar14 + 1;
            for (uVar11 = uVar13 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined4 *)pbVar17 = *(undefined4 *)local_30;
              local_30 = local_30 + 4;
              pbVar17 = pbVar17 + 4;
            }
            pbVar14 = pbVar14 + 1 + uVar13;
            for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
              *pbVar17 = *local_30;
              local_30 = local_30 + 1;
              pbVar17 = pbVar17 + 1;
            }
          }
          if (bVar20) {
            iVar18 = iVar18 + 2;
            iVar10 = 3;
            pbVar6 = pbVar6 + 2;
            if (iVar18 < local_c) {
              do {
                if (*pbVar6 != bVar1) break;
                iVar10 = iVar10 + 1;
                pbVar6 = pbVar6 + 1;
                iVar18 = iVar18 + 1;
              } while (iVar18 < local_c);
              if (0x3f < iVar10) {
                uVar13 = (iVar10 - 1U) / 0x3f;
                iVar10 = iVar10 + uVar13 * -0x3f;
                do {
                  *pbVar14 = 0xff;
                  pbVar14[1] = bVar1;
                  pbVar14 = pbVar14 + 2;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              if (iVar10 < 1) goto LAB_006b4ef4;
            }
            *pbVar14 = (byte)iVar10 | 0xc0;
            pbVar14[1] = bVar1;
            pbVar14 = pbVar14 + 2;
          }
LAB_006b4ef4:
        } while (iVar18 < local_c);
        pbVar6 = pbVar6 + -(local_c + uVar15);
        local_14 = local_14 + 1;
      } while ((int)local_14 < iVar7);
    }
    cVar9 = (char)local_10;
  }
  puVar5[1] = (uint)pRVar3;
  STField<char>(puVar5,0xd) = cVar9 << 2;
  puVar5[2] = uVar4;
  STField<undefined2>(puVar5,0xe) = STPiece<0,2>(local_2c);
  *puVar5 = (int)pbVar14 - (int)puVar5;
  ((undefined1 *)puVar5)[3] = 0x80;
  *(short *)(puVar5 + 4) = (short)local_1c;
  STField<undefined2>(puVar5,0x12) = (undefined2)local_c;
  *(short *)(puVar5 + 5) = (short)iVar12 - (short)local_1c;
  piVar8 = st::fn_006BFB50(reinterpret_cast<int *>(puVar5),(int)pbVar14 - (int)puVar5);
  *param_1 = (int)piVar8;
  if (piVar8 == nullptr) {
    *param_1 = (int)puVar5;
  }
  return 0;
}

// 006B4FA0 FUN_006b4fa0
#line 1 "decomp/ST.exe/functions/006B4FA0/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0070C860 -> 006B4FA0 @ 0070C8C9; FUN_0070c860 parameter param_1 | 0070CB20 -> 006B4FA0
   @ 0070CB96; FUN_0070cb20 parameter param_3 */

int st::fn_006B4FA0(RecoveredRecord_006B4FA0_DAC3A217 *param_1)

{
  ushort uVar1;
  int iVar2;

  iVar2 = *(int *)(param_1 + 2);
  if (iVar2 == 0) {
    uVar1 = param_1->field_000E;
    if (uVar1 != 0) {
      if (uVar1 < 9) {
        return (int)(&param_1[2].field_0x8 + (1 << ((byte)uVar1 & 0x1f)) * 4);
      }
      if (*(int *)(param_1 + 1) == 3) {
        iVar2 = 3;
      }
    }
  }
  return (int)(&param_1[2].field_0x8 + iVar2 * 4);
}

// 006B4FE0 FUN_006b4fe0
#line 1 "decomp/ST.exe/functions/006B4FE0/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004F5690 -> 006B4FE0 @ 004F572B; data at 0080679C | 004F5690 -> 006B4FE0 @ 004F593D;
   data at 0080679C | 004F5690 -> 006B4FE0 @ 004F5FF9; data at 0080679C | 00511AB0 -> 006B4FE0 @
   00511B28; /HelpPanelTy+0x1dc | 0051FBA0 -> 006B4FE0 @ 0051FC1E; data at 0080679C | 005219E0 ->
   006B4FE0 @ 00521A74; return of cMf32::RecGet | 0052BF00 -> 006B4FE0 @ 0052C0D9; data at 0080679C
   | 0052BF00 -> 006B4FE0 @ 0052C155; data at 0080679C | 0052BF00 -> 006B4FE0 @ 0052C1CF; data at
   0080679C | 0052BF00 -> 006B4FE0 @ 0052C249; data at 0080679C | 0052DD20 -> 006B4FE0 @ 0052DDAF;
   data at 0080679C | 0052E5E0 -> 006B4FE0 @ 0052E738; /OptPanelTy+0x184 | 005381B0 -> 006B4FE0 @
   005381F4; data at 0080679C | 00543600 -> 006B4FE0 @ 005436EE; return of cMf32::RecGet | 0056F250
   -> 006B4FE0 @ 0056F505; data at 0080679C | 005CBD00 -> 006B4FE0 @ 005CBDD5; /StartSystemTy+0x2f0
   | 005D7A50 -> 006B4FE0 @ 005D7B05; /StartSystemTy+0x2c | 005D7A50 -> 006B4FE0 @ 005D7B79;
   /StartSystemTy+0x2c | 005D7A50 -> 006B4FE0 @ 005D7BEA; /StartSystemTy+0x2c | 006BC360 -> 006B4FE0
   @ 006BC369; FUN_006bc360 parameter param_1 */

int st::fn_006B4FE0(ushort *param_1)

{
  ushort uVar1;
  int iVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    uVar1 = param_1[7];
    if ((uVar1 != 0) && (uVar1 < 9)) {
      iVar2 = 1 << ((byte)uVar1 & 0x1f);
    }
  }
  return iVar2;
}

// 006B5010 FUN_006b5010
#line 1 "decomp/ST.exe/functions/006B5010/decomp.c"

/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=3, scalar_uses=0; sites=006B5016 dereference: MOV EAX,dword ptr [EDX + 0x20]
   | 006B501F dereference: MOV CX,word ptr [EDX + 0xe] | 006B503A dereference: CMP dword ptr [EDX +
   0x10],0x3 */

int st::fn_006B5010(AnonShape_006B5010_308EC787 *param_1)

{
  ushort uVar1;
  int iVar2;

  iVar2 = param_1->field_0020;
  if (iVar2 == 0) {
    uVar1 = param_1->field_000E;
    if (uVar1 != 0) {
      if (uVar1 < 9) {
        return (1 << ((byte)uVar1 & 0x1f)) << 2;
      }
      if (param_1->field_0010 == 3) {
        iVar2 = 3;
      }
    }
  }
  return iVar2 << 2;
}

// 006B5050 FUN_006b5050
#line 1 "decomp/ST.exe/functions/006B5050/decomp.c"

int st::fn_006B5050(AnonShape_006B5050_99986F91 *param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = param_1->field_0014;
  if (iVar2 == 0) {
    iVar2 = ((uint)param_1->field_000E * param_1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
            param_1->field_0008;
  }

  iVar1 = st::fn_006B5010(reinterpret_cast<AnonShape_006B5010_308EC787 *>(param_1));
  return iVar1 + 0x28 + iVar2;
}

// 006B5090 FUN_006b5090
#line 1 "decomp/ST.exe/functions/006B5090/decomp.c"

int st::fn_006B5090(int param_1,int param_2,int param_3,int param_4)

{
  return (param_1 * param_3 + 0x1fU >> 3 & 0x1ffffffc) * param_2 + 0x28 + param_4 * 4;
}

// 006B50C0 FUN_006b50c0
#line 4 "decomp/ST.exe/functions/006B50C0/decomp.c"
/* [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /int; no intervening CALL or EAX/AX/AL/AH definition exists; machine CFG audit: used=63,
   ignored=0, unknown=0 */

int st::fn_006B50C0(int param_1,int param_2,int param_3,uint param_4,undefined4 *param_5,int param_6)

{
  int iVar1;
  uint *puVar2;
  if (0x100 < (int)param_4) {
    param_4 = 0;
  }
  iVar1 = st::fn_006D10F0(param_1,param_2,param_3,param_4,param_6);
  if (((iVar1 != 0) && (param_4 != 0)) && (param_5 != nullptr)) {
    puVar2 = (undefined4 *)(iVar1 + 0x28);
    for (; param_4 != 0; param_4 = param_4 - 1) {
      *puVar2 = *param_5;
      param_5 = param_5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  return iVar1;
}

// 006B5440 FUN_006b5440
#line 1 "decomp/ST.exe/functions/006B5440/decomp.c"

/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 00515650 -> 006B5440 @ 00515737

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005C87C0 -> 006B5440 @ 005C885D; /StartSystemTy+0x2f0

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=24, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006B5440(ushort *param_1,int param_2,int param_3,int param_4,tagBITMAPINFO *tOBJImage,
                 int param_6,byte param_7)

{
  st::fn_006B5110
            ((int)param_1,param_2,param_3,param_4,reinterpret_cast<BITMAPINFO *>(tOBJImage),param_6,0,0,
             (tOBJImage->bmiHeader).biWidth,(tOBJImage->bmiHeader).biHeight,param_7);
  return;
}

// 006B5480 FUN_006b5480
#line 4 "decomp/ST.exe/functions/006B5480/decomp.c"
/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=4, ignored=0, unknown=0 */

int st::fn_006B5480(AnonShape_006B5480_2C1D4FBF *param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  pvVar1 = st::fn_006ACF50
                     ((void *)param_1->field_0014,(param_1->field_000C + param_1->field_0010) * 4);
  if (pvVar1 == nullptr) {
    return -2;
  }
  puVar4 = (undefined4 *)((int)pvVar1 + param_1->field_000C * 4);
  for (uVar2 = param_1->field_0010 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  param_1->field_0014 = (int)pvVar1;
  param_1->field_000C = param_1->field_000C + param_1->field_0010;
  return 0;
}

// 006B5570 FUN_006b5570
#line 1 "decomp/ST.exe/functions/006B5570/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005E1330 -> 006B5570 @ 005E2BA4 | 005E1330 -> 006B5570 @ 005E2DD4 */

void st::fn_006B5570(DArrayTy *param_1)

{
  uint uVar1;

  if (param_1 != nullptr) {
    uVar1 = 0;
    if (param_1->elementSize != 0) {
      do {
        st::fn_006A5E90(*(short **)(param_1->growCapacity + uVar1 * 4));
        uVar1 = uVar1 + 1;
      } while (uVar1 < param_1->elementSize);
    }
    st::fn_006A5E90((short *)param_1->growCapacity);
    if ((param_1->flags & 8) != 0) {
      st::fn_006A5E90(reinterpret_cast<short *>(param_1));
    }
  }
  return;
}

// 006B55C0 FUN_006b55c0
#line 1 "decomp/ST.exe/functions/006B55C0/decomp.c"

/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (11), none consume AL/AX, and every RET path defines full EAX; sites=004FB060 @ 004FBB0E
   -> TEST TEST EAX,EAX | 0071CFD0 @ 0071D4EA -> TEST TEST EAX,EAX | 0071CFD0 @ 0071D5BA -> TEST
   TEST EAX,EAX | 0071CFD0 @ 0071D78B -> TEST TEST EAX,EAX | 0071CFD0 @ 0071D801 -> TEST TEST
   EAX,EAX | 0071CFD0 @ 0071D9F5 -> TEST TEST EAX,EAX | 0071CFD0 @ 0071DA64 -> TEST TEST EAX,EAX |
   00723420 @ 00723E3D -> TEST TEST EAX,EAX | 00723420 @ 00723FE5 -> TEST TEST EAX,EAX | 00724F00 @
   00724F85 -> XOR XOR EAX,EAX | 0072B780 @ 0072BD6F -> TEST TEST EAX,EAX */

int st::fn_006B55C0(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;

  uVar1 = (param_2 + 7U & 0xfffffff8) * param_4 + param_3 ^ 7;
  return (uint)((*(byte *)(param_1 + ((int)uVar1 >> 3)) >> (uVar1 & 7) & 1) != 0);
}

// 006B5A50 FUN_006b5a50
#line 4 "decomp/ST.exe/functions/006B5A50/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004FF380 -> 006B5A50 @ 004FF5A6; /CPanelTy+0xb4b */

uint __fastcall st::fn_006B5A50(DArrayTy *param_1,AnonShape_006B5A50_BD82F60D *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;

  if ((param_1 == nullptr) || (param_2 == nullptr)) {
    return 0xffffffcc;
  }
  if (param_1->elementSize != param_2->field_0008) {
    return 0xffffffce;
  }
  if (param_1->count != param_2->field_000C) {
    return 2;
  }
  iVar1 = param_1->count * param_1->elementSize;
  bVar4 = true;
  pcVar2 = static_cast<char *>(param_1->data);
  pcVar3 = param_2->field_001C;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  return (uint)!bVar4;
}

// 006B5B10 FUN_006b5b10
#line 4 "decomp/ST.exe/functions/006B5B10/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006E6FB0 -> 006B5B10 @ 006E77B4 | 006E6FB0 -> 006B5B10 @ 006E809F | 006E6FB0 ->
   006B5B10 @ 006E80EC | 006E6FB0 -> 006B5B10 @ 006E812A | 006E6FB0 -> 006B5B10 @ 006E8169 */

void st::fn_006B5B10(AnonShape_006E6FB0_BC494FEA *param_1,int param_2,int param_3,int param_4,
                 int param_5,int param_6,byte param_7,int param_8)

{
  AnonNested_006E6FB0_0008_71212DD0 *pAVar1;
  uint uVar2;
  byte *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;

  iVar11 = param_6;
  iVar10 = param_5;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_2 == 0) {

    param_2 = st::fn_006B4FA0(reinterpret_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(param_1));
  }
  iVar4 = param_1->field_0004;
  pAVar1 = param_1->field_0008;
  uVar5 = (uint)param_1->field_000E * iVar4 + 0x1f >> 3 & 0x1ffffffc;
  iVar6 = param_5 - param_3;
  iVar8 = param_3;
  iVar12 = param_4;
  if (iVar6 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_5 = param_3;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = param_4;
    iVar6 = -iVar6;
    iVar8 = iVar10;
    iVar12 = iVar11;
  }
  uVar2 = param_6 - iVar12;
  if (uVar2 == 0) {
    if ((-1 < iVar12) && (param_6 < (int)pAVar1)) {
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      if (iVar4 <= param_5) {
        param_5 = iVar4 + -1;
      }
      if (iVar8 <= param_5) {
        pbVar9 = (byte *)(((int)pAVar1 + (-1 - iVar12)) * uVar5 + iVar8 + param_2);
        uVar5 = (param_5 - iVar8) + 1;
        if (param_8 != 7) {
          for (uVar2 = uVar5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(uint *)pbVar9 = CONCAT22(CONCAT11(param_7,param_7),CONCAT11(param_7,param_7));
            pbVar9 = pbVar9 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pbVar9 = param_7;
            pbVar9 = pbVar9 + 1;
          }
          return;
        }
        if (uVar5 != 0) {
          do {
            *pbVar9 = *pbVar9 ^ param_7;
            pbVar9 = pbVar9 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
          return;
        }
      }
    }
  }
  else if (iVar6 == 0) {
    if ((-1 < iVar8) && (param_5 < iVar4)) {
      puVar3 = (undefined1 *)param_6;
      if ((int)uVar2 < 0) {
        puVar3 = (undefined1 *)param_4;
        iVar12 = param_6;
      }
      if (iVar12 < 0) {
        iVar12 = 0;
      }
      if ((int)pAVar1 <= (int)puVar3) {
        puVar3 = &pAVar1[-1].field_0x17;
      }
      if (iVar12 <= (int)puVar3) {
        pbVar9 = (byte *)(((int)pAVar1 + (-1 - iVar12)) * uVar5 + iVar8 + param_2);
        puVar3 = puVar3 + (1 - iVar12);
        if (param_8 == 7) {
          if (puVar3 != nullptr) {
            do {
              *pbVar9 = *pbVar9 ^ param_7;
              pbVar9 = pbVar9 + -uVar5;
              puVar3 = puVar3 + -1;
            } while (puVar3 != nullptr);
            return;
          }
        }
        else if (puVar3 != nullptr) {
          do {
            *pbVar9 = param_7;
            pbVar9 = pbVar9 + -uVar5;
            puVar3 = puVar3 + -1;
          } while (puVar3 != nullptr);
          return;
        }
      }
    }
  }
  else {
    pbVar9 = (byte *)(((int)pAVar1 + (-1 - iVar12)) * uVar5 + iVar8 + param_2);
    iVar7 = param_5 - iVar8;
    iVar6 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    iVar11 = iVar6 * 2;
    iVar10 = iVar7 * 2;
    if (iVar12 < param_6) {
      uVar5 = -uVar5;
      if ((int)pAVar1 <= param_6) {
        param_6 = (int)&pAVar1[-1].field_0x17;
      }
      if (param_6 < iVar12) {
        return;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = 0;
    }
    else {
      if (param_6 < 0) {
        param_6 = 0;
      }
      if (iVar12 < param_6) {
        return;
      }
      param_6 = -param_6;
      iVar12 = -iVar12;
      param_3 = 1 - (int)pAVar1;
    }
    if (iVar4 <= param_5) {
      param_5 = iVar4 + -1;
    }
    if (iVar8 <= param_5) {
      if (iVar7 < iVar6) {
        iVar11 = iVar10 - iVar6;
        if (param_3 <= param_6) {
          if (iVar12 < param_3) {
            param_3 = param_3 - iVar12;
            iVar12 = iVar12 + param_3;
            do {
              if (-1 < iVar11) {
                pbVar9 = pbVar9 + 1;
                iVar11 = iVar11 + iVar6 * -2;
                iVar8 = iVar8 + 1;
              }
              pbVar9 = pbVar9 + uVar5;
              iVar11 = iVar11 + iVar10;
              param_3 = param_3 + -1;
            } while (param_3 != 0);
          }
          while (iVar8 < 0) {
            if (-1 < iVar11) {
              pbVar9 = pbVar9 + 1;
              iVar11 = iVar11 + iVar6 * -2;
              iVar8 = iVar8 + 1;
            }
            pbVar9 = pbVar9 + uVar5;
            iVar11 = iVar11 + iVar10;
            iVar12 = iVar12 + 1;
          }
          if (param_8 == 7) {
            if (iVar8 <= param_5) {
              while (iVar12 <= param_6) {
                *pbVar9 = *pbVar9 ^ param_7;
                if (-1 < iVar11) {
                  pbVar9 = pbVar9 + 1;
                  iVar11 = iVar11 + iVar6 * -2;
                  iVar8 = iVar8 + 1;
                }
                pbVar9 = pbVar9 + uVar5;
                iVar11 = iVar11 + iVar10;
                iVar12 = iVar12 + 1;
                if (param_5 < iVar8) {
                  return;
                }
              }
            }
          }
          else {
            for (; (iVar8 <= param_5 && (iVar12 <= param_6)); iVar12 = iVar12 + 1) {
              *pbVar9 = param_7;
              if (-1 < iVar11) {
                pbVar9 = pbVar9 + 1;
                iVar11 = iVar11 + iVar6 * -2;
                iVar8 = iVar8 + 1;
              }
              pbVar9 = pbVar9 + uVar5;
              iVar11 = iVar11 + iVar10;
            }
          }
        }
      }
      else {
        iVar10 = iVar11 - iVar7;
        if (-1 < param_5) {
          if (iVar8 < 0) {
            iVar4 = -iVar8;
            iVar8 = 0;
            do {
              if (-1 < iVar10) {
                pbVar9 = pbVar9 + uVar5;
                iVar10 = iVar10 + iVar7 * -2;
                iVar12 = iVar12 + 1;
              }
              pbVar9 = pbVar9 + 1;
              iVar10 = iVar10 + iVar11;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          while (iVar12 < param_3) {
            if (-1 < iVar10) {
              pbVar9 = pbVar9 + uVar5;
              iVar10 = iVar10 + iVar7 * -2;
              iVar12 = iVar12 + 1;
            }
            pbVar9 = pbVar9 + 1;
            iVar10 = iVar10 + iVar11;
            iVar8 = iVar8 + 1;
          }
          if (param_8 == 7) {
            if (iVar8 <= param_5) {
              while (iVar12 <= param_6) {
                *pbVar9 = *pbVar9 ^ param_7;
                if (-1 < iVar10) {
                  pbVar9 = pbVar9 + uVar5;
                  iVar10 = iVar10 + iVar7 * -2;
                  iVar12 = iVar12 + 1;
                }
                pbVar9 = pbVar9 + 1;
                iVar10 = iVar10 + iVar11;
                iVar8 = iVar8 + 1;
                if (param_5 < iVar8) {
                  return;
                }
              }
            }
          }
          else if (iVar8 <= param_5) {
            while (iVar12 <= param_6) {
              *pbVar9 = param_7;
              if (-1 < iVar10) {
                pbVar9 = pbVar9 + uVar5;
                iVar10 = iVar10 + iVar7 * -2;
                iVar12 = iVar12 + 1;
              }
              pbVar9 = pbVar9 + 1;
              iVar10 = iVar10 + iVar11;
              iVar8 = iVar8 + 1;
              if (param_5 < iVar8) {
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}

// 006B5EE0 FUN_006b5ee0
#line 1 "decomp/ST.exe/functions/006B5EE0/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006B5EE0 -> 006B5B10 @ 006B5F34 | 006B5EE0 -> 006B5B10 @ 006B5F50 | 006B5EE0 ->
   006B5B10 @ 006B5F69 | 006C7570 -> 006B5EE0 @ 006C7601

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=51, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006B5EE0(RecoveredSourceFamily_dibcopy *param_1,int param_2,int param_3,int param_4,
                 int param_5,int param_6,byte param_7,int param_8)

{
  int iVar1;
  int iVar2;

  iVar1 = param_4 + -1 + param_6;
  iVar2 = param_3 + -1 + param_5;
  st::fn_006B5B10(reinterpret_cast<AnonShape_006E6FB0_BC494FEA *>(param_1),param_2,param_3,param_4,iVar2,param_4,param_7,
               param_8);
  st::fn_006B5B10(reinterpret_cast<AnonShape_006E6FB0_BC494FEA *>(param_1),param_2,iVar2,param_4 + 1,iVar2,iVar1 + -1,
               param_7,param_8);
  st::fn_006B5B10(reinterpret_cast<AnonShape_006E6FB0_BC494FEA *>(param_1),param_2,iVar2,iVar1,param_3,iVar1,param_7,
               param_8);
  st::fn_006B5B10(reinterpret_cast<AnonShape_006E6FB0_BC494FEA *>(param_1),param_2,param_3,iVar1 + -1,param_3,param_4 + 1
               ,param_7,param_8);
  return;
}

// 006B5F80 FUN_006b5f80
#line 1 "decomp/ST.exe/functions/006B5F80/decomp.c"

/* [STPrototypeRepairApplier] Propagated parameter 3.
   Evidence: 00554660 -> 006B5F80 @ 005546D6 | 00554800 -> 006B5F80 @ 0055494B | 0056CBD0 ->
   006B5F80 @ 0056CCA4 | 0056CBD0 -> 006B5F80 @ 0056CFD8 | 0056FA60 -> 006B5F80 @ 0057048B |
   00590580 -> 006B5F80 @ 005905C9 | 00591940 -> 006B5F80 @ 0059198B | 00593040 -> 006B5F80 @
   0059313C | 00596CC0 -> 006B5F80 @ 00596D11 | 005AD050 -> 006B5F80 @ 005AD09A | 005B3160 ->
   006B5F80 @ 005B31AB | 005B3D60 -> 006B5F80 @ 005B43FD | 005BA8B0 -> 006B5F80 @ 005BA8FA |
   005BE5B0 -> 006B5F80 @ 005BE5FE | 005BF860 -> 006B5F80 @ 005BFA14 | 005BF860 -> 006B5F80 @
   005BFB6D | 005C05F0 -> 006B5F80 @ 005C0685 | 005C2760 -> 006B5F80 @ 005C27A7 | 005C4E20 ->
   006B5F80 @ 005C4E6A | 005C7800 -> 006B5F80 @ 005C78F9 | 005E09E0 -> 006B5F80 @ 005E0A25 |
   005E5D50 -> 006B5F80 @ 005E5D95 | 005E79B0 -> 006B5F80 @ 005E79FA

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=88, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=1,
   ignored=96, unknown=1 */

void st::fn_006B5F80(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;

  if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
    /* ST_CALLSITE[006B5F98]: CALL dword ptr [0x0085bb8c] */
    st::external_00000018((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
  }
  param_1[0x6d] = 1;
  if (param_1[0x6e] == 0) {
    iVar1 = st::fn_006D1AD0((int *)param_1[0x6f],100,param_2 + param_1[0x5b],param_3 + param_1[0x5c],
                         param_4,param_5,param_1[3],param_1[4],1);
    if (iVar1 == -1) {
      param_1[0x6e] = 1;
    }
  }
  if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
    /* ST_CALLSITE[006B600B]: CALL dword ptr [0x0085bb90] */
    st::external_00000019((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
  }
  return;
}

// 006B60B0 FUN_006b60b0
#line 4 "decomp/ST.exe/functions/006B60B0/decomp.c"
char * st::fn_006B60B0(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar5;
  char *pcVar6;
  char *pcVar4;

  if (param_2 == nullptr) {
    return nullptr;
  }
  cVar1 = *param_2;
  while ((cVar1 != '\0' && ((cVar1 == ' ' || (cVar1 == '\t'))))) {
    pcVar5 = param_2 + 1;
    param_2 = param_2 + 1;
    cVar1 = *pcVar5;
  }
  if (param_1 == nullptr) {
    return param_2;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar4 = param_2;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar5 = pcVar4 + -uVar2;
  pcVar6 = param_1;
  memmove(pcVar6, pcVar5, uVar2); /* compiler REP MOVS byte copy */
  return param_1;
}

// 006B6110 FUN_006b6110
#line 4 "decomp/ST.exe/functions/006B6110/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006B6110(undefined4 *param_1)

{
  int iVar1;
  uint *puVar2;
  if (param_1 != nullptr) {
    iVar1 = 0;
    if (0 < (int)param_1[1]) {
      puVar2 = param_1 + 2;
      do {
        st::fn_006A5E90((short *)*puVar2);
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 5;
      } while (iVar1 < (int)param_1[1]);
    }
    st::fn_006A5E90(reinterpret_cast<short *>(param_1));
  }
  return;
}

// 006B6150 FUN_006b6150
#line 1 "decomp/ST.exe/functions/006B6150/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005A4350 -> 006B6150 @ 005A5193 | 005DA980 -> 006B6150 @ 005DA9BF

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void st::fn_006B6150(uint param_1)

{
  DAT_00854ec4 = param_1;
  return;
}

// 006B6160 FUN_006b6160
#line 1 "decomp/ST.exe/functions/006B6160/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void st::fn_006B6160(char *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;

  iVar2 = 0;
  do {
    *param_1 = "0123456789ABCDEF"[*(byte *)(iVar2 + param_2) >> 4];
    pbVar1 = (byte *)(iVar2 + param_2);
    iVar2 = iVar2 + 1;
    param_1[1] = "0123456789ABCDEF"[*pbVar1 & 0xf];
    param_1 = param_1 + 2;
  } while (iVar2 < 0x10);
  return;
}

// 006B61A0 FUN_006b61a0
#line 4 "decomp/ST.exe/functions/006B61A0/decomp.c"
void st::fn_006B61A0(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar4 = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 < 0x41) {
      iVar2 = bVar1 - 0x30;
    }
    else {
      iVar2 = bVar1 - 0x37;
    }
    bVar1 = param_2[1];
    if (bVar1 < 0x41) {
      iVar3 = bVar1 - 0x30;
    }
    else {
      iVar3 = bVar1 - 0x37;
    }
    if ((((iVar2 < 0) || (0xf < iVar2)) || (iVar3 < 0)) || (0xf < iVar3)) break;
    param_2 = param_2 + 2;
    *(byte *)(iVar4 + (int)param_1) = (char)iVar2 << 4 | (byte)iVar3;
    iVar4 = iVar4 + 1;
    if (0xf < iVar4) {
      return;
    }
  }
  if (iVar4 < 0x10) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

// 006B6230 FUN_006b6230
#line 4 "decomp/ST.exe/functions/006B6230/decomp.c"
undefined4
st::fn_006B6230(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;

  piVar3 = (int *)*param_5;
  if (*piVar3 <= piVar3[1]) {
    iVar1 = *piVar3 + 10;
    piVar3 = st::fn_006BFB50(piVar3,iVar1 * 0x14 + 8);
    if (piVar3 == nullptr) {
      return 0;
    }
    *param_5 = st::machine_word_boundary_cast<undefined4>(piVar3);
    *piVar3 = iVar1;
  }
  piVar2 = piVar3 + piVar3[1] * 5 + 3;
  *piVar2 = *param_1;
  piVar2[1] = param_1[1];
  piVar2[2] = param_1[2];
  piVar2[3] = param_1[3];
  pcVar4 = st::fn_006C8170(param_2);
  piVar3[piVar3[1] * 5 + 2] = (int)pcVar4;
  if (piVar3[piVar3[1] * 5 + 2] == 0) {
    return 0;
  }
  piVar3[1] = piVar3[1] + 1;
  return 1;
}

// 006B6500 FUN_006b6500
#line 1 "decomp/ST.exe/functions/006B6500/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00521CF0 -> 006B6500 @ 00521F27 | 0054D640 -> 006B6500 @ 0054D6C4 | 0054D640 ->
   006B6500 @ 0054D6FA | 0054E4F0 -> 006B6500 @ 0054E590 | 0054E4F0 -> 006B6500 @ 0054E5C2 |
   0054E4F0 -> 006B6500 @ 0054E7AA | 0054F1D0 -> 006B6500 @ 0054F7B2 | 0054F1D0 -> 006B6500 @
   0054F7DF | 0054F1D0 -> 006B6500 @ 0054F837 | 0054F1D0 -> 006B6500 @ 0054F870 | 0054F1D0 ->
   006B6500 @ 0054FA23 | 0054F1D0 -> 006B6500 @ 0054FA5F | 0054F1D0 -> 006B6500 @ 0054FA75 |
   0054F1D0 -> 006B6500 @ 0054FAAA | 00550BB0 -> 006B6500 @ 00550BF1 | 00550BB0 -> 006B6500 @
   00550C33 | 0056DB80 -> 006B6500 @ 0056DC2A | 005CBD00 -> 006B6500 @ 005CC146 | 005CD9A0 ->
   006B6500 @ 005CDA37 | 005CD9A0 -> 006B6500 @ 005CDA6C | 005CDB20 -> 006B6500 @ 005CDC7E |
   005CDB20 -> 006B6500 @ 005CDCB3 | 005CDB20 -> 006B6500 @ 005CDDD6 | 005CDB20 -> 006B6500 @
   005CDE0B | 005CE0E0 -> 006B6500 @ 005CE28D | 005CE0E0 -> 006B6500 @ 005CE2BF | 005CE0E0 ->
   006B6500 @ 005CE4FA | 005CE0E0 -> 006B6500 @ 005CE52E | 005CE0E0 -> 006B6500 @ 005CEA9D |
   005CE0E0 -> 006B6500 @ 005CEACA | 005CE0E0 -> 006B6500 @ 005CEB0D | 005CE0E0 -> 006B6500 @
   005CEB3A | 005CE0E0 -> 006B6500 @ 005CEBB0 | 005CE0E0 -> 006B6500 @ 005CEBF4 | 005CE0E0 ->
   006B6500 @ 005CEC2F | 005CE0E0 -> 006B6500 @ 005CEC5C | 005CE0E0 -> 006B6500 @ 005CEC97 |
   005CE0E0 -> 006B6500 @ 005CECC4 | 005D1400 -> 006B6500 @ 005D20AC | 005D1400 -> 006B6500 @
   005D2176 | 005D1400 -> 006B6500 @ 005D25A2 | 005D1400 -> 006B6500 @ 005D25CF | 005DA980 ->
   006B6500 @ 005DA9F2 | 005DAF20 -> 006B6500 @ 005DAF2F | 005DAF20 -> 006B6500 @ 005DAFA6 |
   005E84D0 -> 006B6500 @ 005E8E7D | 005E84D0 -> 006B6500 @ 005E8EAC | 005E84D0 -> 006B6500 @
   005E934E | 005E84D0 -> 006B6500 @ 005E937C */

uint st::fn_006B6500(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;

  uVar1 = param_1[1];
  uVar2 = uVar1 & 0xfffffffd;
  param_1[1] = uVar2;
  if (param_2 != 0) {
    param_1[1] = uVar2 | 2;
  }
  return uVar1 >> 1 & 1;
}

// 006B66A0 FUN_006b66a0
#line 4 "decomp/ST.exe/functions/006B66A0/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int st::fn_006B66A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                char *param_5)

{
  alignas(4) byte st_stack_frame[44];

  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  byte *puVar6;
  char *pcVar7;
  byte *puVar8;
  undefined4 auStack_2c [2];
  undefined1 auStack_24 [4];
  int iStack_20;
  int *piStack_1c;
  uint uStack_18;
  undefined4 **ppuStack_14;

  puVar4 = param_1;
  ppuStack_14 = &param_1;
  piStack_1c = (int *)*param_1;
  uStack_18 = 0;
  iStack_20 = 0x6b66b7;
  /* ST_CALLSITE[006B66B4]: CALL dword ptr [ECX + 0x58] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar5 = (**(code **)(*piStack_1c + 0x58))();
  if (iVar5 == -0x7788ffe2) {
    puVar6 = (undefined1 *)((int)param_1 + 3U & 0xfffffffc);
    iStack_20 = 0x6b66de;
    iVar3 = -(int)puVar6;
    if (st::machine_word_boundary_cast<uint>(&piStack_1c) == st::machine_word_boundary_cast<uint>((int **)puVar6)) {
      return -2;
    }
    piVar1 = (int *)*puVar4;
    *(undefined4 ***)((int)&iStack_20 + iVar3) = &param_1;
    *(int *)(auStack_24 + iVar3) = (int)&piStack_1c + iVar3;
    iVar5 = *piVar1;
    *(int **)((int)auStack_2c + iVar3 + 4) = piVar1;
    pcVar2 = *(code **)(iVar5 + 0x58);
    puVar8 = (undefined1 *)((int)auStack_2c + iVar3);
    *(undefined4 *)((int)auStack_2c + iVar3) = 0x6b6700;
    /* ST_CALLSITE[006B66FD]: CALL dword ptr [ECX + 0x58] */
    iVar5 = (*pcVar2)();
    if (iVar5 == 0) {
      puVar4[0xf] = *(undefined4 *)((int)&param_3 + iVar3);
      puVar4[6] = *(undefined4 *)((int)&ppuStack_14 + iVar3);
      puVar4[7] = *(undefined4 *)((st_stack_frame + 24) + iVar3);
      puVar4[8] = *(undefined4 *)((st_stack_frame + 28) + iVar3);
      puVar4[9] = *(undefined4 *)((st_stack_frame + 32) + iVar3);
      *(undefined4 *)(puVar8 + -4) = puVar4[0xc];
      *(undefined4 *)(puVar8 + -8) = 0x6b6731;
      st::fn_006A5E90(*(short **)(puVar8 + -4));
      *(undefined4 *)(puVar8 + -4) = *(undefined4 *)((int)&param_5 + iVar3);
      *(undefined4 *)(puVar8 + -8) = 0x6b673a;
      pcVar7 = st::fn_006C49B0(*(char **)(puVar8 + -4));
      puVar4[0xc] = st::machine_word_boundary_cast<uint>(pcVar7);
    }
  }
  else if (iVar5 == 0) {
    return -0xfd;
  }
  return iVar5;
}

// 006B68C0 FUN_006b68c0
#line 4 "decomp/ST.exe/functions/006B68C0/decomp.c"
void st::fn_006B68C0(undefined4 *param_1)

{
  /* ST_CALLSITE[006B68D8]: CALL dword ptr [ECX + 0x30] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*(int *)*param_1 + 0x30))((int *)*param_1,0,&st_image_006B68B0,&param_1,0);
  return;
}

// 006B7070 FUN_006b7070
#line 4 "decomp/ST.exe/functions/006B7070/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005D4850 -> 006B7070 @ 005D488F */

void st::fn_006B7070(int *param_1)

{
  alignas(4) byte st_stack_frame[64];

  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *puVar6;
  uint *puVar7;
  undefined4 auStack_50 [2];
  undefined1 auStack_48 [4];
  int iStack_44;
  int *piStack_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_28 [2];
  byte *local_20;
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  local_8 = 0xffffffff;
  puStack_c = (undefined *)&DAT_0079d908;
  puStack_10 = (byte *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 8);
  if ((((byte *)param_1)[1] & 1) != 0) {
    piStack_40 = (int *)*param_1;
    puStack_38 = local_28;
    uStack_3c = 0;
    iStack_44 = 0x6b70b1;
    ExceptionList = &local_14;
    /* ST_CALLSITE[006B70AE]: CALL dword ptr [ECX + 0x58] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (**(code **)(*piStack_40 + 0x58))();
    if (iVar3 == -0x7788ffe2) {
      local_8 = 0;
      iStack_44 = 0x6b70ce;
      iVar3 = -(local_28[0] + 3 & 0xfffffffc);
      local_1c = (undefined1 *)((int)&piStack_40 + iVar3);
      local_20 = (undefined1 *)((int)&piStack_40 + iVar3);
      puVar7 = (undefined4 *)((int)&piStack_40 + iVar3);
      for (uVar5 = local_28[0] >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = local_28[0] & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = 0;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      piVar1 = (int *)*param_1;
      iVar4 = *piVar1;
      *(uint **)((int)&iStack_44 + iVar3) = local_28;
      *(int *)(auStack_48 + iVar3) = (int)&piStack_40 + iVar3;
      *(int **)((int)auStack_50 + iVar3 + 4) = piVar1;
      pcVar2 = *(code **)(iVar4 + 0x58);
      puVar6 = (undefined1 *)((int)auStack_50 + iVar3);
      *(undefined4 *)((int)auStack_50 + iVar3) = 0x6b70f7;
      /* ST_CALLSITE[006B70F4]: CALL dword ptr [ECX + 0x58] */
      iVar4 = (*pcVar2)();
      if (iVar4 == 0) {
        *(uint *)((int)&uStack_3c + iVar3) = *(uint *)((int)&uStack_3c + iVar3) | 0x20;
        piVar1 = (int *)*param_1;
        iVar4 = *piVar1;
        *(undefined4 *)(puVar6 + -4) = 0;
        *(int *)((int)puVar6 + -8) = (int)&piStack_40 + iVar3;
        *(int **)(puVar6 + -0xc) = piVar1;
        pcVar2 = *(code **)(iVar4 + 0x7c);
        *(undefined4 *)(puVar6 + -0x10) = 0x6b710e;
        /* ST_CALLSITE[006B710B]: CALL dword ptr [EAX + 0x7c] */
        (*pcVar2)();
      }
    }
  }
  ExceptionList = local_14;
  return;
}

// 006B7140 FUN_006b7140
#line 4 "decomp/ST.exe/functions/006B7140/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0054D640 -> 006B7140 @ 0054DAF4 | 0054D640 -> 006B7140 @ 0054DB4D */

int st::fn_006B7140(int *param_1)

{
  int *piVar1;

  piVar1 = param_1 + 0x10;
  *piVar1 = 0;
  /* ST_CALLSITE[006B7161]: CALL dword ptr [EDX + 0x30]; [STIndirectCallsiteApplier] exact slot 0x30; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*(int *)*param_1 + 0x30))
            ((int *)*param_1,param_1 + 6,st::fn_006B7170,piVar1,0x10);
  return *piVar1 + 1;
}

// 006B75C0 FUN_006b75c0
#line 1 "decomp/ST.exe/functions/006B75C0/decomp.c"

/* [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: incoming stack slot is read as a uint before its address is passed as a distinct output
   lifetime */

int st::fn_006B75C0(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;

  uVar1 = param_3;
  iVar2 = st::fn_006B7510(param_1,param_3,reinterpret_cast<int *>(&param_3),-1,0);
  if (iVar2 == 0) {
    if ((0 < param_2) && ((int)param_3 < 1)) {
      /* ST_CALLSITE[006B75F3]: CALL EBX */
      DVar3 = st::external_000000DA();
      iVar2 = st::fn_006B7510(param_1,uVar1,reinterpret_cast<int *>(&param_3),-1,0);
      if (iVar2 != 0) {
        return iVar2;
      }
      /* ST_CALLSITE[006B7612]: CALL EBX */
      while (((int)param_3 < 1 && (DVar4 = st::external_000000DA(), (int)(DVar4 - DVar3) < param_2))) {
        iVar2 = st::fn_006B7510(param_1,uVar1,reinterpret_cast<int *>(&param_3),-1,0);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}

// 006B76D0 FUN_006b76d0
#line 4 "decomp/ST.exe/functions/006B76D0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006B76D0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  if (param_1 != nullptr) {
    piVar1 = (int *)*param_1;
    if (piVar1 != nullptr) {
      iVar2 = param_1[0xe];
      if ((iVar2 != 0) && (iVar2 != -1)) {
        /* ST_CALLSITE[006B76F1]: CALL dword ptr [EDX + 0x24]; [STIndirectCallsiteApplier] exact slot 0x24; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4 */
        STStructuralVirtualCall<void>(piVar1, 0x24, piVar1, iVar2);
        param_1[0xe] = -1;
      }
      /* ST_CALLSITE[006B7700]: CALL dword ptr [ECX + 0x10] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)*param_1 + 0x10))((int *)*param_1);
    }
    for (puVar3 = (undefined4 *)param_1[0x11]; puVar3 != nullptr;
        puVar3 = (undefined4 *)*puVar3) {
      st::fn_006A5E90((short *)puVar3[4]);
    }
    st::fn_006D25A0(reinterpret_cast<undefined4 *>(param_1 + 0x11));
    st::fn_006AB060(param_1 + 0xd);
    st::fn_006AB060(param_1 + 0xc);
  }
  return;
}

// 006B7740 FUN_006b7740
#line 4 "decomp/ST.exe/functions/006B7740/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006B7740(int *param_1)

{
  int *piVar1;

  if (param_1 != nullptr) {
    st::fn_006B76D0(param_1);
    if ((((byte *)param_1)[1] & 4) != 0) {
      /* ST_CALLSITE[006B7757]: CALL dword ptr [0x0085c0e0] */
      st::external_000000CF();
    }
    piVar1 = (int *)*param_1;
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006B7766]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_1 = 0;
    }
    st::fn_006A5E90(reinterpret_cast<short *>(param_1));
  }
  return;
}

// 006B7780 FUN_006b7780
#line 1 "decomp/ST.exe/functions/006B7780/decomp.c"

char * st::fn_006B7780(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;

  if (param_2 == nullptr) {
    return nullptr;
  }
  pcVar3 = param_1;
  if (param_1 == nullptr) {
    param_1 = param_2;
    pcVar3 = param_2;
  }
  do {
    cVar2 = *param_2;
    while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
      pcVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      cVar2 = *pcVar1;
    }
    cVar2 = *param_2;
    while (((cVar2 != '\0' && (cVar2 != ' ')) && (cVar2 != '\t'))) {
      *pcVar3 = cVar2;
      pcVar1 = param_2 + 1;
      pcVar3 = pcVar3 + 1;
      param_2 = param_2 + 1;
      cVar2 = *pcVar1;
    }
  } while (*param_2 != '\0');
  *pcVar3 = '\0';
  return param_1;
}

// 006B77E0 FUN_006b77e0
#line 1 "decomp/ST.exe/functions/006B77E0/decomp.c"

char * st::fn_006B77E0(char *param_1,byte *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;

  uVar2 = st::fn_00734030((uint)*param_2);
  cVar1 = (char)uVar2;
  *param_1 = cVar1;
  pcVar3 = param_1;
  while (cVar1 != '\0') {
    param_2 = param_2 + 1;
    pcVar3 = pcVar3 + 1;
    uVar2 = st::fn_00734030((uint)*param_2);
    cVar1 = (char)uVar2;
    *pcVar3 = cVar1;
  }
  return param_1;
}

// 006B7830 FUN_006b7830
#line 4 "decomp/ST.exe/functions/006B7830/decomp.c"
undefined4 st::fn_006B7830(AnonShape_006B7830_769CA2DF *param_1,uint param_2)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  if (param_2 < (uint)param_1->field_0008) {
    psVar1 = *(short **)(param_2 * 4 + param_1->field_0014);
    if (psVar1 != nullptr) {
      st::fn_006A5E90(psVar1);
    }
    puVar4 = (undefined4 *)(param_2 * 4 + param_1->field_0014);
    puVar5 = puVar4;
    for (uVar2 = (param_1->field_0008 - param_2) * 4 - 4 >> 2; puVar4 = puVar4 + 1, uVar2 != 0;
        uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    iVar3 = param_1->field_0008 + -1;
    param_1->field_0008 = iVar3;
    *(undefined4 *)(param_1->field_0014 + iVar3 * 4) = 0;
    if (param_2 < param_1->field_0004) {
      param_1->field_0004 = param_1->field_0004 - 1;
    }
    return 0;
  }
  return 0xfffffffc;
}

// 006B78C0 FUN_006b78c0
#line 4 "decomp/ST.exe/functions/006B78C0/decomp.c"
/* [STReturnSemanticsApplier] repair_false_machine_eax_return.
   Evidence: the earlier machine return was admitted only because a self-zeroing XOR/SUB was
   misclassified as reading the call result; every resolved caller now proves an exact EAX kill;
   machine CFG audit: used=0, ignored=9, unknown=0 */

void st::fn_006B78C0(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;

  uVar2 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  if ((param_1 != nullptr) && (param_1 != param_2)) {
    pcVar5 = param_1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar5 = pcVar5 + 4;
    }
    pcVar4 = param_2;
    for (uVar3 = uVar2 & 3; param_2 = param_1, uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  if ((uVar2 != 1) && ((param_2[uVar2 - 2] == '\\' || (param_2[uVar2 - 2] == '/')))) {
    param_2[uVar2 - 2] = '\0';
  }
  return;
}

// 006B81D0 FUN_006b81d0
#line 4 "decomp/ST.exe/functions/006B81D0/decomp.c"
void st::fn_006B81D0(undefined4 *param_1)

{
  if (st::machine_word_boundary_cast<uint>((HMIXER)param_1[0xc]) != st::machine_word_boundary_cast<uint>((HMIXER)0x0)) {
    /* ST_CALLSITE[006B81DF]: CALL dword ptr [0x0085bed8] */
    st::external_000000D9((HMIXER)param_1[0xc]);
    param_1[0xc] = 0;
  }
  st::fn_006A5E90(reinterpret_cast<short *>(param_1));
  return;
}

// 006B8200 FUN_006b8200
#line 4 "decomp/ST.exe/functions/006B8200/decomp.c"
undefined4 st::fn_006B8200(AnonShape_006B8200_800652FF *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  if ((param_2 < param_1->field_0008) && (param_3 < param_1->field_0008)) {
    iVar1 = param_1->field_0014;
    uVar2 = *(undefined4 *)(iVar1 + param_2 * 4);
    *(undefined4 *)(iVar1 + param_2 * 4) = *(undefined4 *)(iVar1 + param_3 * 4);
    *(undefined4 *)(param_1->field_0014 + param_3 * 4) = uVar2;
    return 0;
  }
  return 0xfffffffc;
}

// 006B8240 FUN_006b8240
#line 1 "decomp/ST.exe/functions/006B8240/decomp.c"

char * st::fn_006B8240(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;

  if (param_1 == nullptr) {
    return nullptr;
  }
  iVar2 = 0;
  if (0 < param_2) {
    while (cVar1 = *param_1, param_1 = param_1 + 1, cVar1 != '\0') {
      iVar2 = iVar2 + 1;
      if (param_2 <= iVar2) {
        return param_1;
      }
    }
    param_1 = nullptr;
  }
  return param_1;
}

// 006B8280 FUN_006b8280
#line 4 "decomp/ST.exe/functions/006B8280/decomp.c"
/* [STReturnSemanticsApplier] repair_false_machine_eax_return.
   Evidence: the earlier machine return was admitted only because a self-zeroing XOR/SUB was
   misclassified as reading the call result; every resolved caller now proves an exact EAX kill;
   machine CFG audit: used=0, ignored=36, unknown=0 */

void st::fn_006B8280(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;

  uVar2 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  if ((param_1 != nullptr) && (param_1 != param_2)) {
    pcVar5 = param_1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar5 = pcVar5 + 4;
    }
    pcVar4 = param_2;
    for (uVar3 = uVar2 & 3; param_2 = param_1, uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  if ((((uVar2 - 1 != 0) && (cVar1 = param_2[uVar2 - 2], cVar1 != '\\')) && (cVar1 != '/')) &&
     (cVar1 != ':')) {
    param_2[uVar2 - 1] = '\\';
    param_2[uVar2] = '\0';
  }
  return;
}

// 006B84D0 FUN_006b84d0
#line 1 "decomp/ST.exe/functions/006B84D0/decomp.c"

/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

void st::fn_006B84D0(RecoveredSourceFamily_dibcopy *param_1,int param_2,int param_3,int param_4,
                 RecoveredRecordView_006B84D0_87AF9D9B *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  RecoveredSourceFamily_dibcopy *pRVar4;
  int local_24 [3];
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;

  if (param_2 == 0) {

    param_2 = st::fn_006B4FA0(reinterpret_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(param_1));
  }
  local_c = (uint)param_5->field_0012;
  iVar3 = param_3 + param_5->field_000E;
  iVar1 = param_4 + param_5->field_0010;
  local_8 = (uint)param_5->field_0014;
  local_24[2] = param_1->field_0004;
  local_24[1] = 0;
  local_24[0] = 0;
  local_18 = param_1->field_0008;
  pRVar4 = (RecoveredSourceFamily_dibcopy *)
           ((uint)param_1->field_000E * local_24[2] + 0x1f >> 3 & 0x1ffffffc);
  if (local_18 < 0) {
    local_18 = -local_18;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = pRVar4;
  }
  else {
    param_1 = (RecoveredSourceFamily_dibcopy *)-(int)pRVar4;
  }
  local_14 = iVar3;
  local_10 = iVar1;

  iVar2 = st::fn_006CFEB0(&local_14,&local_14,local_24);
  if (iVar2 != 0) {
    iVar2 = local_10;
    if ((int)param_1 < 0) {
      iVar2 = (local_18 - local_10) + -1;
    }
    st::fn_006D2820((byte *)((int)pRVar4 * iVar2 + local_14 + param_2),param_1,
                 reinterpret_cast<RecoveredRecord_006D2820_5C2BCC8C *>(param_5),local_14 - iVar3,local_10 - iVar1,
                 local_c,local_8,0,nullptr,0,0,nullptr);
  }
  return;
}

// 006B8850 FUN_006b8850
#line 4 "decomp/ST.exe/functions/006B8850/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006B8850(AnonShape_006B8850_E5DFE1E1 *param_1)

{
  int *piVar1;
  int iVar2;

  if (param_1 != nullptr) {
    piVar1 = (int *)param_1->field_003C;
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006B8865]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1->field_003C = 0;
    }
    piVar1 = (int *)param_1->field_0038;
    if (piVar1 != nullptr) {
      if ((param_1->field_0004 & 0x20000000) != 0) {
        /* ST_CALLSITE[006B8884]: CALL dword ptr [EDX + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*piVar1 + 8))(piVar1);
        param_1->field_0038 = 0;
        return;
      }
      if ((param_1->field_0004 & 0xa0000000) != 0) {
        iVar2 = 0;
        if (0 < param_1->field_002C) {
          do {
            piVar1 = *(int **)(param_1->field_0038 + iVar2 * 4);
            /* ST_CALLSITE[006B88AE]: CALL dword ptr [ECX + 0x8] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*piVar1 + 8))(piVar1);
            iVar2 = iVar2 + 1;
          } while (iVar2 < param_1->field_002C);
        }
        st::fn_006A5E90((short *)param_1->field_0038);
        param_1->field_0038 = 0;
      }
    }
  }
  return;
}

// 006B8A30 FUN_006b8a30
#line 4 "decomp/ST.exe/functions/006B8A30/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void st::fn_006B8A30(int *param_1)

{
  if (param_1 != nullptr) {
    st::fn_006B8850(reinterpret_cast<AnonShape_006B8850_E5DFE1E1 *>(param_1));
    *(undefined4 *)(*param_1 + 0x4e8) = 0;
    st::fn_006A5E90(reinterpret_cast<short *>(param_1));
  }
  return;
}

// 006B8BC0 FUN_006b8bc0
#line 1 "decomp/ST.exe/functions/006B8BC0/decomp.c"

void st::fn_006B8BC0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;

  if (param_1 != nullptr) {
    if (param_4 < 0) {
      iVar1 = param_1[10];
      if (param_4 == -1) {
        iVar1 = iVar1 + 1;
      }
      if (param_1[0xb] <= iVar1) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = param_4 % param_1[0xb];
    }
    if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
      /* ST_CALLSITE[006B8C00]: CALL dword ptr [0x0085bb8c] */
      st::external_00000018((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
    if (((param_1[2] != param_2) || (param_1[3] != param_3)) || (param_1[10] != iVar1)) {
      param_1[2] = param_2;
      param_1[3] = param_3;
      param_1[10] = iVar1;
      if ((param_1[1] & 0xa000U) == 0x8000) {
        param_1[1] = param_1[1] | 0x1000;
      }
    }
    if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
      /* ST_CALLSITE[006B8C52]: CALL dword ptr [0x0085bb90] */
      st::external_00000019((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
  }
  return;
}

// 006B8E30 FUN_006b8e30
#line 4 "decomp/ST.exe/functions/006B8E30/decomp.c"
int st::fn_006B8E30(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;

  iVar2 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(*param_1 + 0x40) == 0) {
    return 0;
  }
  local_c = param_1[6];
  local_8 = param_1[7];
  local_10 = 0;
  local_24 = param_1[4];
  local_14 = 0;
  local_20 = param_1[5];
  local_1c = param_1[6] + local_24;
  local_18 = param_1[7] + local_20;
  while( true ) {
    /* ST_CALLSITE[006B8E9C]: CALL dword ptr [EDX + 0x14] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(**(int **)(*param_1 + 0x40) + 0x14))
                      (*(int **)(*param_1 + 0x40),&local_24,param_1[0xf],&local_14,0x1000000,0);
    if (iVar1 == 0) break;
    if (iVar1 == -0x7789fe3e) {
      /* ST_CALLSITE[006B8EB3]: CALL dword ptr [EDX + 0x6c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)param_1[0xf] + 0x6c))((int *)param_1[0xf]);
      st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)*param_1);
    }
    else {
      if (((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) || (iVar2 != 0)) break;
      /* ST_CALLSITE[006B8ED6]: CALL dword ptr [0x0085bc6c] */
      st::external_00000050(2);
    }
    iVar2 = iVar2 + 1;
    if (1 < iVar2) break;
  }
  if ((iVar1 == -0x7789ff60) || (iVar1 == -0x7789fe52)) {
    iVar1 = 0;
  }
  param_1[1] = param_1[1] & 0xffffbfff;
  return iVar1;
}

// 006B8F10 FUN_006b8f10
#line 4 "decomp/ST.exe/functions/006B8F10/decomp.c"
int st::fn_006B8F10(AnonShape_006B8F10_41B61BA9 *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  AnonShape_006B8F10_41B61BA9 *pAVar3;
  int local_EAX_86;
  int iVar5;
  int iVar6;
  int iVar4;
  int iVar3;
  uint local_b4;
  uint local_b0;
  byte *local_ac;
  uint local_a8;
  int local_38;
  int local_34;
  int local_30;
  byte *local_2c;
  int local_28;
  int local_24;
  int local_20;
  byte *local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  byte *local_8;

  pAVar3 = param_1;
  if (param_1->field_0000->field_0040 == 0) {
    return 0;
  }
  param_2[3] = 0;
  param_2[2] = 0;
  if ((param_1->field_0004 & 0x8000) != 0) {
    *param_2 = param_1->field_0010;
    param_2[1] = param_1->field_0014;
    param_2[2] = param_1->field_0018;
    param_2[3] = param_1->field_001C;
  }
  if (((param_1->field_0004 & 0x4000) != 0) &&

     (local_EAX_86 = st::fn_006B8E30(reinterpret_cast<int *>(param_1)), local_EAX_86 != 0)) {
    return local_EAX_86;
  }
  uVar1 = param_1->field_0004;
  param_1->field_0004 = uVar1 & 0xffffefff;
  iVar5 = param_1->field_0008 - param_1->field_0020;
  local_18 = param_1->field_000C - param_1->field_0024;
  local_14 = iVar5;
  local_10 = local_18;
  if ((uVar1 & 0x8000000) == 0) {
    if ((uVar1 & 0x20000000) == 0) {
      if ((uVar1 & 0xa0000000) == 0) {
        return -0x51;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = *(AnonShape_006B8F10_41B61BA9 **)(param_1->entries_0038 + param_1->field_0028 * 4);
      local_b4 = 0x7c;
      local_b0 = 6;
      /* ST_CALLSITE[006B9010]: CALL dword ptr [EDX + 0x58] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar6 = (**(code **)&param_1->field_0000->field_0x58)(param_1,&local_b4);
      if (iVar6 != 0) {
        return iVar6;
      }
      local_c = local_a8;
      local_8 = local_ac;
    }
    else {
      local_c = param_1->field_0030;
      local_8 = param_1->field_0034;
      param_1 = (AnonShape_006B8F10_41B61BA9 *)param_1->entries_0038;
    }
  }
  else {
    param_1 = *(AnonShape_006B8F10_41B61BA9 **)(param_1->entries_0038 + param_1->field_0028 * 4);
    local_c = param_1->field_0004;
    local_8 = (byte *)param_1->field_0008;
  }

  iVar4 = st::fn_006B91A0(reinterpret_cast<int *>(pAVar3),&local_14);
  if (iVar4 == 0) {
    pAVar3->field_0010 = local_14;
    pAVar3->field_0014 = local_10;
    pAVar3->field_0018 = local_c;
    pAVar3->field_001C = (int)local_8;
    if ((local_c != 0) && (local_8 != nullptr)) {
      local_28 = local_14 - iVar5;
      local_24 = local_10 - local_18;
      if ((pAVar3->field_0004 & 0x8000000) != 0) {

        iVar3 = st::fn_006B82E0
                          (reinterpret_cast<DDXContext *>(pAVar3->field_0000),local_14,local_10,reinterpret_cast<byte *>(param_1),
                           local_28,local_24,local_c,local_8);
        pAVar3->field_0004 = pAVar3->field_0004 | 0x4000;
        return iVar3;
      }
      if ((pAVar3->field_0004 & 0x20000000) != 0) {
        local_24 = local_24 +
                   ((*(int *)&pAVar3->field_0x2c - pAVar3->field_0028) + -1) *
                   (int)pAVar3->field_0034;
      }
      local_38 = local_14;
      local_20 = local_28 + local_c;
      local_30 = local_c + local_14;
      local_1c = local_8 + local_24;
      local_2c = local_8 + local_10;
      local_34 = local_10;
      int * param_2_after_write = nullptr; /* compiler stack-slot lifetime split */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      while (piVar2 = (int *)pAVar3->field_0000->field_0040,
            /* ST_CALLSITE[006B9119]: CALL dword ptr [ECX + 0x14] */
            iVar5 = (**(code **)(*piVar2 + 0x14))(piVar2,&local_38,param_1,&local_28,0x1008000,0),
            iVar5 != 0) {
        if (iVar5 == -0x7789fe3e) {
          /* ST_CALLSITE[006B912D]: CALL dword ptr [EAX + 0x6c] */
          (*STField<code *>(param_1->field_0000,0x006C))(param_1);
          st::fn_006CEC40(reinterpret_cast<AnonShape_006CEC40_BB23E716 *>(pAVar3->field_0000));
        }
        else {
          if (((iVar5 != -0x7789ff60) && (iVar5 != -0x7789fe52)) || (param_2_after_write != nullptr)) break;
          /* ST_CALLSITE[006B9153]: CALL dword ptr [0x0085bc6c] */
          st::external_00000050(2);
        }
        param_2_after_write = (int *)((int)param_2_after_write + 1);
        if (1 < (int)param_2_after_write) break;
      }
      if ((iVar5 == -0x7789ff60) || (iVar5 == -0x7789fe52)) {
        iVar5 = 0;
      }
      pAVar3->field_0004 = pAVar3->field_0004 | 0x4000;
      return iVar5;
    }
  }
  return iVar4;
}

// 006B91A0 FUN_006b91a0
#line 4 "decomp/ST.exe/functions/006B91A0/decomp.c"
int st::fn_006B91A0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14 [3];
  uint local_8;
  iVar2 = 0;
  iVar1 = *param_1;
  if (STField<int>(iVar1,0x40) == 0) {
    return -0x51;
  }
  local_14[1] = 0;
  local_14[0] = 0;
  local_30 = 0;
  local_34 = 0;
  local_14[2] = STField<undefined4>(iVar1,0x18);
  local_8 = STField<undefined4>(iVar1,0x1C);

  iVar1 = st::fn_006B0460(param_2,param_2,local_14);
  if (iVar1 == 0) {
    param_2[3] = 0;
    param_2[2] = 0;
  }
  else {
    local_2c = param_2[2];
    local_28 = param_2[3];
    local_24 = *param_2;
    local_20 = param_2[1];
    local_1c = local_2c + local_24;
    local_18 = local_28 + local_20;
    iVar1 = 0;
    while( true ) {
      /* ST_CALLSITE[006B9230]: CALL dword ptr [ECX + 0x14] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar2 = (**(code **)(*(int *)param_1[0xf] + 0x14))
                        ((int *)param_1[0xf],&local_34,*(undefined4 *)(*param_1 + 0x40),&local_24,
                         0x1000000,0);
      if (iVar2 == 0) break;
      if (iVar2 == -0x7789fe3e) {
        /* ST_CALLSITE[006B9247]: CALL dword ptr [ECX + 0x6c] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*(int *)param_1[0xf] + 0x6c))((int *)param_1[0xf]);
        st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)*param_1);
      }
      else {
        if (((iVar2 != -0x7789ff60) && (iVar2 != -0x7789fe52)) || (iVar1 != 0)) break;
        /* ST_CALLSITE[006B926A]: CALL dword ptr [0x0085bc6c] */
        st::external_00000050(2);
      }
      iVar1 = iVar1 + 1;
      if (1 < iVar1) break;
    }
    if ((iVar2 == -0x7789ff60) || (iVar2 == -0x7789fe52)) {
      return 0;
    }
  }
  return iVar2;
}

// 006B92B0 FUN_006b92b0
#line 1 "decomp/ST.exe/functions/006B92B0/decomp.c"

/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (4), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=006B89B0 @ 006B89E6 -> read as EAX on
   every CFG path | 006B8A60 @ 006B8AB5 -> read as EAX on every CFG path | 006B8B10 @ 006B8B68 ->
   read as EAX on every CFG path | 006B8C60 @ 006B8CF8 -> read as EAX on every CFG path */

int st::fn_006B92B0(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_44;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if ((*(uint *)&((DDXContext *)*param_1)->field_0x8 & 0x3000000) != 0) {

    st::fn_006BB370((DDXContext *)*param_1,0,0);
    return 0;
  }
  local_14 = param_1[4];
  local_10 = param_1[5];
  local_c = param_1[6];
  local_24 = *param_2;
  local_8 = param_1[7];
  local_20 = param_2[1];
  local_1c = param_2[2];
  iVar6 = param_2[3];
  local_44 = *param_2;
  iVar1 = param_2[1];
  iVar7 = param_2[2];
  local_38 = param_2[3];
  local_18 = iVar6;

  iVar4 = st::fn_006B0460(&local_34,param_2,&local_14);
  if (iVar4 == 0) {
    iVar4 = 0;
    goto LAB_006b945a;
  }
  iVar6 = param_2[2];
  bVar2 = false;
  if (local_c < iVar6) {
    if ((local_34 == local_14) && (local_2c == local_c)) {
      bVar2 = true;
    }
    else {
LAB_006b9365:
      bVar2 = false;
    }
  }
  else if (iVar6 < local_c) {
    if ((local_34 != *param_2) || (local_2c != iVar6)) goto LAB_006b9365;
    bVar2 = true;
  }
  iVar4 = param_2[3];
  if (local_8 < iVar4) {
    if ((local_30 == local_10) && (local_28 == local_8)) {
      bVar3 = 1;
    }
    else {
LAB_006b93a5:
      bVar3 = 0;
    }
LAB_006b93a7:
    bVar2 = (bool)(bVar2 | bVar3);
  }
  else if (iVar4 < local_8) {
    if ((local_30 != param_2[1]) || (local_28 != iVar4)) goto LAB_006b93a5;
    bVar3 = 1;
    goto LAB_006b93a7;
  }
  if (bVar2) {
    iVar7 = *param_2;
    if (iVar7 < local_14) {
      local_14 = iVar7;
    }
    iVar5 = local_c + local_14;
    if (local_c + local_14 < iVar7 + iVar6) {
      iVar5 = iVar7 + iVar6;
    }
    iVar6 = param_2[1];
    local_c = iVar5 - local_14;
    if (iVar6 < local_10) {
      local_10 = iVar6;
    }
    iVar7 = local_8 + local_10;
    if (local_8 + local_10 < iVar4 + iVar6) {
      iVar7 = iVar4 + iVar6;
    }
    local_8 = iVar7 - local_10;
    iVar7 = 0;
    iVar6 = local_18;
    iVar4 = 0;
  }
  else if (local_30 == param_2[1]) {
    if (local_34 == *param_2) {
      local_44 = local_44 + local_2c;
    }
    local_20 = local_20 + local_28;
    iVar7 = iVar7 - local_2c;
    iVar6 = local_18 - local_28;
    iVar4 = local_1c;
  }
  else {
    if (local_34 == *param_2) {
      local_24 = local_24 + local_2c;
    }
    iVar4 = local_1c - local_2c;
    local_38 = local_38 - local_28;
    local_20 = local_30;
    iVar6 = local_28;
  }
LAB_006b945a:

  st::fn_006BAC60(*param_1,0,0,local_14,local_10,local_c,local_8);
  if ((iVar7 != 0) && (local_38 != 0)) {

    st::fn_006BAC60(*param_1,0,0,local_44,iVar1,iVar7,local_38);
  }
  if ((iVar4 != 0) && (iVar6 != 0)) {

    st::fn_006BAC60(*param_1,0,0,local_24,local_20,iVar4,iVar6);
    return 0;
  }
  return 0;
}

// 006B94E0 FUN_006b94e0
#line 4 "decomp/ST.exe/functions/006B94E0/decomp.c"
void st::fn_006B94E0(RecoveredRecordView_006B94E0_92E1E144 *param_1,undefined4 param_2,int param_3,
                 int param_4,int param_5,int param_6,int param_7,int param_8)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar8 = *(int *)(param_8 + 0x18 + param_3 * 0x1c);
  puVar1 = (undefined4 *)(param_8 + param_3 * 0x1c);
  if (iVar8 < 1) {
    iVar8 = 1;
  }
  if (param_6 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = param_4 + 1 + param_6;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = -param_6;
  }
  if (param_7 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_5 = param_5 + 1 + param_7;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_7 = -param_7;
  }
  iVar2 = param_4 + -1 + param_6;
  uVar4 = param_1->field_0498;
  iVar3 = param_5 + -1 + param_7;
  iVar5 = param_1->field_04A0;
  uVar6 = param_1->field_04A4;

  st::fn_006BBB00(param_1,0xd);

  st::fn_006C6450(param_1,puVar1[1]);

  st::fn_006C6410(param_1,puVar1[2]);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_3 = 0;
  if (0 < iVar8) {
    auto param_8_after_write = param_5; /* compiler stack-slot lifetime split */
    do {

      iVar7 = st::fn_006C53B0
                        ((int)param_1,param_4,param_8_after_write,iVar2 - iVar8,param_8_after_write,*puVar1);
      if (iVar7 != 0) goto cf_common_exit_006B96BA;
      param_3 = param_3 + 1;
      param_8_after_write = param_8_after_write + 1;
    } while (param_3 < iVar8);
  }

  st::fn_006C6410(param_1,puVar1[3]);
  param_3 = 0;
  if (0 < iVar8) {
    int param_8_after_write_2 = iVar2; /* compiler stack-slot lifetime split */
    do {

      iVar7 = st::fn_006C53B0
                        ((int)param_1,param_8_after_write_2,param_5,param_8_after_write_2,iVar3 - iVar8,*puVar1);
      if (iVar7 != 0) goto cf_common_exit_006B96BA;
      param_3 = param_3 + 1;
      param_8_after_write_2 = param_8_after_write_2 + -1;
    } while (param_3 < iVar8);
  }

  st::fn_006C6410(param_1,puVar1[4]);
  param_3 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_8 = iVar3;
  if (0 < iVar8) {
    do {

      iVar7 = st::fn_006C53B0
                        ((int)param_1,iVar2,param_8,iVar8 + param_4,param_8,*puVar1);
      if (iVar7 != 0) goto cf_common_exit_006B96BA;
      param_3 = param_3 + 1;
      param_8 = param_8 + -1;
    } while (param_3 < iVar8);
  }

  st::fn_006C6410(param_1,puVar1[5]);
  param_3 = 0;
  if (0 < iVar8) {
    iVar2 = iVar8 + param_5;
    param_5 = param_4;
    do {

      iVar7 = st::fn_006C53B0((int)param_1,param_5,iVar3,param_5,iVar2,*puVar1);
      if (iVar7 != 0) break;
      param_3 = param_3 + 1;
      param_5 = param_5 + 1;
    } while (param_3 < iVar8);
  }
cf_common_exit_006B96BA:

  st::fn_006BBB00(param_1,uVar4);

  st::fn_006C6410(param_1,iVar5);

  st::fn_006C6450(param_1,uVar6);
  return;
}

// 006B96F0 FUN_006b96f0
#line 1 "decomp/ST.exe/functions/006B96F0/decomp.c"

int st::fn_006B96F0(int *param_1,uint *param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;

  iVar1 = st::fn_006B2330(reinterpret_cast<DDXContext_008075A8 *>(param_1),param_2,param_3,0x6b94e0,0,0,(ushort *)param_5
                      );
  if (iVar1 == 0) {
    if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
      /* ST_CALLSITE[006B972B]: CALL dword ptr [0x0085bb8c] */
      st::external_00000018((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
    if (param_4 < 1) {
      param_4 = 1;
    }
    *(int *)(*(int *)(param_1[0x6c] + *param_2 * 4) + 200) = param_4;
    if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
      /* ST_CALLSITE[006B9760]: CALL dword ptr [0x0085bb90] */
      st::external_00000019((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
  }
  return iVar1;
}

// 006B9890 FUN_006b9890
#line 1 "decomp/ST.exe/functions/006B9890/decomp.c"

void st::fn_006B9890(int *param_1)

{
  int *piVar1;

  piVar1 = param_1;
  param_1 = (int *)*param_1;
  while (param_1 != nullptr) {
    st::fn_006B98C0(piVar1,param_1);
    st::fn_006AB060(&param_1);
    param_1 = (int *)*piVar1;
  }
  return;
}

// 006B98C0 FUN_006b98c0
#line 4 "decomp/ST.exe/functions/006B98C0/decomp.c"
undefined4 st::fn_006B98C0(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;

  uVar2 = 0;
  piVar4 = (int *)*param_1;
  if (piVar4 != nullptr) {
    if (piVar4 == param_2) {
      *param_1 = *param_2;
      return 1;
    }
    piVar1 = (int *)*piVar4;
    if ((int *)*piVar4 != nullptr) {
      while (piVar3 = piVar1, piVar3 != param_2) {
        piVar1 = (int *)*piVar3;
        piVar4 = piVar3;
        if ((int *)*piVar3 == nullptr) {
          return uVar2;
        }
      }
      uVar2 = 1;
      *piVar4 = *param_2;
    }
  }
  return uVar2;
}

// 006B9910 FUN_006b9910
#line 4 "decomp/ST.exe/functions/006B9910/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006736F0 -> 006B9910 @ 00673830 | 006B7190 -> 006B9910 @ 006B723F

   [STReturnSemanticsApplier] repair_false_machine_eax_return.
   Evidence: the earlier machine return was admitted only because a self-zeroing XOR/SUB was
   misclassified as reading the call result; every resolved caller now proves an exact EAX kill;
   machine CFG audit: used=0, ignored=21, unknown=0 */

void st::fn_006B9910(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;

  *(undefined4 *)param_2 = 0;
  piVar1 = (int *)*param_1;
  if (piVar1 != nullptr) {
    for (piVar2 = (int *)*piVar1; piVar2 != nullptr; piVar2 = (int *)*piVar2) {
      piVar1 = piVar2;
    }
    *piVar1 = param_2;
    return;
  }
  *param_1 = param_2;
  return;
}

// 006B9B20 FUN_006b9b20
#line 4 "decomp/ST.exe/functions/006B9B20/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0056ADC0 -> 006B9B20 @ 0056B1DA

   [STPrototypeApplier] Propagated return.
   Evidence: 006B9B20 returns return of Library::DKW::DDX::FUN_006b9940 @ 006B9B37 */

int st::fn_006B9B20(undefined4 *param_1,HWND param_2,int *param_3)

{
  int iVar1;

  iVar1 = st::fn_006B9940(param_1,0,st::machine_word_boundary_cast<undefined4>(param_2),param_3);
  return iVar1;
}

// 006BA600 FUN_006ba600
#line 4 "decomp/ST.exe/functions/006BA600/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void st::fn_006BA600(undefined4 *param_1)

{
  int *piVar1;

  if (param_1 != nullptr) {
    if ((param_1[2] & 0x4000000) != 0) {
      /* ST_CALLSITE[006BA622]: CALL dword ptr [0x0085bb8c] */
      st::external_00000018((LPCRITICAL_SECTION)(param_1 + 0x13c));
    }
    if (st::machine_word_boundary_cast<uint>((HGDIOBJ)*param_1) != st::machine_word_boundary_cast<uint>((HGDIOBJ)0x0)) {
      /* ST_CALLSITE[006BA636]: CALL EBX */
      st::external_000000A6((HGDIOBJ)*param_1);
    }
    if (st::machine_word_boundary_cast<uint>((HGDIOBJ)param_1[0x12d]) != st::machine_word_boundary_cast<uint>((HGDIOBJ)0x0)) {
      /* ST_CALLSITE[006BA643]: CALL EBX */
      st::external_000000A6((HGDIOBJ)param_1[0x12d]);
    }
    if (st::machine_word_boundary_cast<uint>((HGDIOBJ)param_1[0x125]) != st::machine_word_boundary_cast<uint>((HGDIOBJ)0x0)) {
      /* ST_CALLSITE[006BA650]: CALL EBX */
      st::external_000000A6((HGDIOBJ)param_1[0x125]);
    }
    piVar1 = (int *)param_1[0x10];
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006BA65C]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0x10] = 0;
    }
    piVar1 = (int *)param_1[0x11];
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006BA66C]: CALL dword ptr [EDX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0x11] = 0;
    }
    piVar1 = (int *)param_1[0x12];
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006BA67C]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0x12] = 0;
    }
    piVar1 = (int *)param_1[0xf];
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006BA68C]: CALL dword ptr [EDX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xf] = 0;
    }
    piVar1 = (int *)param_1[0xe];
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006BA69C]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xe] = 0;
    }
    piVar1 = (int *)param_1[0xd];
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006BA6AC]: CALL dword ptr [EDX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xd] = 0;
    }
    if (((((byte *)param_1)[2] & 1) != 0) && (piVar1 = (int *)param_1[0xc], piVar1 != nullptr))
    {
      /* ST_CALLSITE[006BA6C2]: CALL dword ptr [ECX + 0x4c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 0x4c))(piVar1);
    }
    piVar1 = (int *)param_1[0xc];
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006BA6CF]: CALL dword ptr [EDX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xc] = 0;
    }
    piVar1 = (int *)param_1[0xb];
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006BA6DF]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xb] = 0;
    }
    st::fn_006AB060(param_1 + 0x130);
    st::fn_006AB060(param_1 + 0x137);
    if (st::machine_word_boundary_cast<uint>((HGDIOBJ)param_1[0x138]) != st::machine_word_boundary_cast<uint>((HGDIOBJ)0x0)) {
      /* ST_CALLSITE[006BA708]: CALL EBX */
      st::external_000000A6((HGDIOBJ)param_1[0x138]);
    }
    if ((param_1[2] & 0x4000000) != 0) {
      /* ST_CALLSITE[006BA71C]: CALL dword ptr [0x0085bb90] */
      st::external_00000019((LPCRITICAL_SECTION)(param_1 + 0x13c));
    }
    /* ST_CALLSITE[006BA729]: CALL dword ptr [0x0085bb84] */
    st::external_00000016((LPCRITICAL_SECTION)(param_1 + 0x13c));
    st::fn_006A5E90(reinterpret_cast<short *>(param_1));
  }
  return;
}

// 006BA740 FUN_006ba740
#line 1 "decomp/ST.exe/functions/006BA740/decomp.c"

void st::fn_006BA740(RecoveredRecord_006BA740_A0A3FDA8 *param_1)

{
  param_1->field_000C = param_1->field_000C & 0xfffffeff;
  return;
}

// 006BA760 FUN_006ba760
#line 1 "decomp/ST.exe/functions/006BA760/decomp.c"

void st::fn_006BA760(RecoveredRecord_006BA760_C6EE148F *param_1)

{
  param_1->field_000C = param_1->field_000C | 0x100;
  return;
}

// 006BA780 FUN_006ba780
#line 1 "decomp/ST.exe/functions/006BA780/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0056ADC0 -> 006BA780 @ 0056B235; data at 0080759C | 0056DB80 -> 006BA780 @ 0056E653;
   data at 0080759C | 005DCE90 -> 006BA780 @ 005DD063; data at 0080759C */

void st::fn_006BA780(DDXContext *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1->field_000C = param_1->field_000C | 0x1000;
    return;
  }
  param_1->field_000C = param_1->field_000C & 0xffffefff;
  return;
}

// 006BB690 FUN_006bb690
#line 4 "decomp/ST.exe/functions/006BB690/decomp.c"
undefined4 st::fn_006BB690(AnonShape_006BB690_EB7315D1 *param_1)

{
  uint uVar1;
  if ((param_1->field_000C & 0x100) != 0) {
    return 0;
  }
  /* ST_CALLSITE[006BB6AA]: CALL dword ptr [ECX + 0x28] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar1 = (**(code **)(*param_1->field_0030 + 0x28))(param_1->field_0030);
  return uVar1;
}

// 006BB6C0 FUN_006bb6c0
#line 4 "decomp/ST.exe/functions/006BB6C0/decomp.c"
int st::fn_006BB6C0(RecoveredRecord_006BB6C0_6F39CDC5 *param_1,undefined4 *param_2,undefined4 param_3,
                undefined4 param_4,int param_5,uint param_6)

{
  int iVar1;
  uint local_88 [26];
  uint local_20;
  int local_c;
  int local_8;

  memset(local_88, 0, 0x7c); /* compiler bulk-zero initialization */
  *param_2 = 0;
  local_88[0] = 0x7c;
  local_88[1] = 7;
  local_20 = param_6;
  if ((param_6 & 0x210a4) == 0) {
    local_20 = param_6 | 0x40;
  }
  local_88[2] = param_4;
  local_88[3] = param_3;
  /* ST_CALLSITE[006BB728]: CALL dword ptr [ECX + 0x18] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(*param_1->field_0030 + 0x18))(param_1->field_0030,local_88,param_2,0);
  if ((iVar1 == 0) && (param_5 != -1)) {
    local_8 = param_5;
    local_c = param_5;
    /* ST_CALLSITE[006BB756]: CALL dword ptr [ECX + 0x74] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*(int *)*param_2 + 0x74))
                      ((int *)*param_2,(-((param_6 & 0x80) != 0) & 8U) + 8,&local_c);
    if (iVar1 != 0) {
      /* ST_CALLSITE[006BB764]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)*param_2 + 8))((int *)*param_2);
      *param_2 = 0;
    }
  }
  return iVar1;
}

// 006BB780 FUN_006bb780
#line 4 "decomp/ST.exe/functions/006BB780/decomp.c"
int st::fn_006BB780(RecoveredRecord_006BB780_43119500 *param_1,undefined4 *param_2,undefined4 param_3,
                undefined4 param_4,int param_5,int param_6,undefined4 *param_7,int param_8)

{
  int iVar1;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_20;
  int local_c;
  int local_8;

  *param_2 = 0;
  local_88 = 0x7c;
  local_84 = 7;
  local_40 = 0x20;
  if (param_6 == 0) {
    if (param_5 != 0) {
      local_84 = 0x1007;
      local_3c = 0x40;
      local_34 = param_5;
      if (param_7 == nullptr) {
        if (param_5 == 0x10) {
          local_30 = 0x7c00;
          local_2c = 0x3e0;
          local_28 = 0x1f;
        }
        else if (0x10 < param_5) {
          local_30 = 0xff0000;
          local_2c = 0xff00;
          local_28 = 0xff;
        }
      }
      else {
        local_30 = *param_7;
        local_2c = param_7[1];
        local_28 = param_7[2];
      }
    }
  }
  else {
    local_38 = param_6;
    local_34 = param_5;
    local_84 = 0x1007;
    local_3c = 0x200;
    local_30 = *param_7;
    local_2c = param_7[1];
    local_28 = param_7[2];
  }
  local_7c = param_3;
  local_20 = 0x4080;
  local_80 = param_4;
  /* ST_CALLSITE[006BB86F]: CALL dword ptr [ECX + 0x18] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(*param_1->field_0030 + 0x18))(param_1->field_0030,&local_88,param_2,0);
  if ((iVar1 == 0) && (param_8 != -1)) {
    local_8 = param_8;
    local_c = param_8;
    /* ST_CALLSITE[006BB88F]: CALL dword ptr [ECX + 0x74] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*(int *)*param_2 + 0x74))((int *)*param_2,0x10,&local_c);
    if (iVar1 != 0) {
      /* ST_CALLSITE[006BB89D]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)*param_2 + 8))((int *)*param_2);
      *param_2 = 0;
    }
  }
  return iVar1;
}

// 006BB8B0 FUN_006bb8b0
#line 1 "decomp/ST.exe/functions/006BB8B0/decomp.c"

int st::fn_006BB8B0(RecoveredRecordView_006BB8B0_05970482 *param_1)

{
  RecoveredRecordView_006BB8B0_05970482 *pRVar1;
  int iVar2;

  pRVar1 = param_1;
  param_1->field_0474 = 0;
  if ((param_1->field_000C & 0x1100) == 0x100) {
    return -0x7789fe52;
  }
  if (param_1->field_0040 == 0) {
    return -0x7789fe52;
  }
  if ((param_1->field_0008 & 0x4000000) != 0) {
    /* ST_CALLSITE[006BB8FA]: CALL dword ptr [0x0085bb8c] */
    st::external_00000018((LPCRITICAL_SECTION)&param_1[1].field_0x78);
  }
  RecoveredRecordView_006BB8B0_05970482 * param_1_after_write = nullptr; /* compiler stack-slot lifetime split */
  while( true ) {

    iVar2 = st::fn_006BBE40((int *)pRVar1->field_0040,&pRVar1->field_0474,reinterpret_cast<int *>((pRVar1 + 1)),0);
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar2 != -0x7789fe3e) break;
    st::fn_006CEC40(reinterpret_cast<AnonShape_006CEC40_BB23E716 *>(pRVar1));
    param_1_after_write = reinterpret_cast<RecoveredRecordView_006BB8B0_05970482 *>(reinterpret_cast<byte *>(param_1_after_write) + 0x1);
    if (1 < (int)param_1_after_write) {
LAB_006bb943:
      pRVar1->field_0474 = 0;
      *(int *)(pRVar1 + 1) = 0;
      if ((pRVar1->field_0008 & 0x4000000) != 0) {
        /* ST_CALLSITE[006BB964]: CALL dword ptr [0x0085bb90] */
        st::external_00000019((LPCRITICAL_SECTION)&pRVar1[1].field_0x78);
      }
      return iVar2;
    }
  }
  if (iVar2 == 0) {
    return 0;
  }
  goto LAB_006bb943;
}

// 006BB980 FUN_006bb980
#line 4 "decomp/ST.exe/functions/006BB980/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=20, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006BB980(AnonShape_006BB980_E41494A1 *param_1)

{
  if (param_1->field_0474 != 0) {
    /* ST_CALLSITE[006BB999]: CALL dword ptr [ECX + 0x80] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1->field_0040 + 0x80))(param_1->field_0040,0);
    param_1->field_0474 = 0;
    param_1->field_0478 = 0;
    if ((param_1->field_0008 & 0x4000000) != 0) {
      /* ST_CALLSITE[006BB9C4]: CALL dword ptr [0x0085bb90] */
      st::external_00000019((LPCRITICAL_SECTION)&param_1[1].field_0x74);
    }
  }
  return;
}

// 006BB9D0 FUN_006bb9d0
#line 4 "decomp/ST.exe/functions/006BB9D0/decomp.c"
int st::fn_006BB9D0(AnonShape_006BB9D0_BD42D958 *param_1,int param_2,int param_3,int param_4,
                int param_5,int *param_6,undefined4 param_7,undefined4 param_8,uint param_9)

{
  int *piVar1;
  AnonShape_006BB9D0_BD42D958 *pAVar2;
  BOOL BVar3;
  int iVar4;
  tagRECT local_44;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  RECT local_24;
  RECT local_14;

  pAVar2 = param_1;
  iVar4 = 0;
  if ((param_1->field_000C & 0x1100) == 0x100) {
    return 0;
  }
  if (param_1->field_0040 == 0) {
    return 0;
  }
  local_14.right = param_1->field_0018;
  local_2c = param_7;
  local_14.bottom = param_1->field_001C;
  local_28 = param_8;
  local_24.left = param_1->field_0010 + param_2;
  local_24.top = param_1->field_0014 + param_3;
  local_24.right = local_24.left + param_4;
  local_24.bottom = local_24.top + param_5;
  local_14.top = 0;
  local_14.left = 0;
  local_30 = 0;
  local_34 = 0;
  /* ST_CALLSITE[006BBA5C]: CALL dword ptr [0x0085be50] */
  BVar3 = st::external_0000009A(reinterpret_cast<LPRECT>(&local_44),&local_24,&local_14);
  if (BVar3 != 0) {
    AnonShape_006BB9D0_BD42D958 * param_1_after_write = nullptr; /* compiler stack-slot lifetime split */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    while (piVar1 = (int *)pAVar2->field_0040,
          /* ST_CALLSITE[006BBA93]: CALL dword ptr [EDX + 0x14] */
          iVar4 = (**(code **)(*piVar1 + 0x14))
                            (piVar1,&local_44,param_6,&local_34,param_9 | 0x1000000,0), iVar4 != 0)
    {
      if (iVar4 == -0x7789fe3e) {
        /* ST_CALLSITE[006BBAA7]: CALL dword ptr [EDX + 0x6c] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*param_6 + 0x6c))(param_6);
        st::fn_006CEC40(reinterpret_cast<AnonShape_006CEC40_BB23E716 *>(pAVar2));
      }
      else {
        if (((iVar4 != -0x7789ff60) && (iVar4 != -0x7789fe52)) ||
           (param_1_after_write != nullptr)) break;
        /* ST_CALLSITE[006BBACB]: CALL dword ptr [0x0085bc6c] */
        st::external_00000050(2);
      }
      param_1_after_write = reinterpret_cast<AnonShape_006BB9D0_BD42D958 *>(reinterpret_cast<byte *>(param_1_after_write) + 0x1);
      if (1 < (int)param_1_after_write) break;
    }
    if ((iVar4 == -0x7789ff60) || (iVar4 == -0x7789fe52)) {
      iVar4 = 0;
    }
  }
  return iVar4;
}

// 006BBB00 FUN_006bbb00
#line 4 "decomp/ST.exe/functions/006BBB00/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006B94E0 -> 006BBB00 @ 006B9563 */

undefined4 st::fn_006BBB00(RecoveredRecordView_006B94E0_92E1E144 *param_1,undefined4 param_2)

{
  uint uVar1;
  uVar1 = param_1->field_0498;
  param_1->field_0498 = param_2;
  return uVar1;
}

// 006BBB20 FUN_006bbb20
#line 4 "decomp/ST.exe/functions/006BBB20/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0056ADC0 -> 006BBB20 @ 0056B228; data at 0080759C | 0056DB80 -> 006BBB20 @ 0056E646;
   data at 0080759C | 005DCE90 -> 006BBB20 @ 005DD056; data at 0080759C */

int st::fn_006BBB20(DDXContext *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint local_428 [95];
  uint local_2ac;
  byte local_2a8;
  byte local_200;
  uint local_130 [18];
  uint local_e8;
  uint local_e4;
  uint local_dc;
  uint local_c8;
  uint local_b4 [18];
  uint local_6c;
  uint local_68;
  uint local_60;
  uint local_4c;
  uint local_38 [4];
  uint local_28 [4];
  int local_18;
  int *local_14;
  int local_10;
  int *local_c;
  int local_8;

  local_8 = 0;
  local_10 = 0;
  local_14 = nullptr;
  local_c = nullptr;
  local_18 = 0;
  if (((param_1->field_000C & 0x800) != 0) ||
     (piVar1 = (int *)param_1->field_0040, piVar1 == nullptr)) {
    return 0;
  }
  /* ST_CALLSITE[006BBB5D]: CALL dword ptr [ECX + 0x38] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*piVar1 + 0x38))(piVar1,local_28);
  piVar1 = param_1->field_0044;
  local_38[0] = 0;
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[006BBB73]: CALL dword ptr [ECX + 0x38] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 0x38))(piVar1,local_38);
  }
  if (param_2 == 0) {
    if (((param_1->field_0044 == nullptr) || ((param_1->field_000B & 0x10) == 0)) &&
       ((local_28[0] & 0x4000) == 0)) {
      local_8 = 1;
    }
    if ((param_1->field_0044 != nullptr) && ((local_38[0] & 0x4000) == 0)) goto LAB_006bbbce;
LAB_006bbc85:
    if (local_8 != 0) {
      memset(local_b4, 0, 0x7c); /* compiler bulk-zero initialization */
      local_b4[3] = param_1->field_0018;
      local_b4[2] = param_1->field_001C;
      local_b4[0] = 0x7c;
      local_b4[1] = 7;
      local_4c = 0x40;
      if (param_2 != 0) {
        local_4c = 0x840;
      }
      if (param_1->field_0020 == 8) {
        local_b4[1] = 0x1007;
        local_6c = 0x20;
        local_68 = 0x60;
        local_60 = 8;
      }
      /* ST_CALLSITE[006BBD0F]: CALL dword ptr [EDX + 0x18] */
      local_18 = (*STField<code **>(param_1->field_0030,0x0000)[6])
                           (param_1->field_0030,local_b4,&local_14,0);
      if (local_18 != 0) goto LAB_006bbdfd;
      /* ST_CALLSITE[006BBD27]: CALL dword ptr [EDX + 0x38] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*STField<int *>(param_1,0x40) + 0x38))((int *)param_1->field_0040,local_28);
    }
    if (local_10 != 0) {
      piVar1 = param_1->field_0044;
      if (piVar1 != nullptr) {
        /* ST_CALLSITE[006BBD3B]: CALL dword ptr [EDX + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*piVar1 + 8))(piVar1);
        param_1->field_0044 = nullptr;
      }
      param_1->field_0044 = local_c;
      if (param_1->field_0020 == 8) {
        /* ST_CALLSITE[006BBD56]: CALL dword ptr [ECX + 0x7c] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*local_c + 0x7c))(local_c,param_1->field_003C);
      }
    }
    if (local_8 != 0) {
      piVar1 = (int *)param_1->field_0040;
      if (piVar1 != nullptr) {
        /* ST_CALLSITE[006BBD68]: CALL dword ptr [ECX + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*piVar1 + 8))(piVar1);
        param_1->field_0040 = 0;
      }
      param_1->field_0040 = st::machine_word_boundary_cast<undefined4>(local_14);
      if (param_1->field_0020 == 8) {
        /* ST_CALLSITE[006BBD83]: CALL dword ptr [EDX + 0x7c] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*local_14 + 0x7c))(local_14,param_1->field_003C);
      }
    }
    local_2ac = 0x17c;
    local_428[0] = 0x17c;
    /* ST_CALLSITE[006BBDAB]: CALL dword ptr [EDX + 0x2c] */
    (*STField<code **>(param_1->field_0030,0x0000)[0xb])(param_1->field_0030,&local_2ac,local_428);
    uVar2 = param_1->field_000C & 0xfffffffd;
    param_1->field_000C = uVar2;
    if ((((local_28[0] & 0x4000) != 0) && ((local_2a8 & 0x40) != 0)) ||
       (((local_28[0] & 0x800) != 0 && ((local_200 & 0x40) != 0)))) {
      param_1->field_000C = uVar2 | 2;
    }
    uVar2 = param_1->field_000C & 0xfffffdff;
    param_1->field_000C = uVar2;
    if (param_2 != 0) {
      param_1->field_000C = uVar2 | 0x200;
      return local_18;
    }
  }
  else {
    if ((local_28[0] & 0x4000) != 0) {
      local_8 = 1;
    }
    if ((param_1->field_0044 == nullptr) || ((local_38[0] & 0x4000) == 0)) goto LAB_006bbc85;
LAB_006bbbce:
    local_10 = 1;
    memset(local_130, 0, 0x7c); /* compiler bulk-zero initialization */
    local_130[3] = param_1->field_0018;
    local_130[2] = param_1->field_001C;
    local_130[0] = 0x7c;
    local_130[1] = 7;
    local_c8 = 0x40;
    if (param_2 != 0) {
      local_c8 = 0x840;
    }
    if (param_1->field_0020 == 8) {
      local_130[1] = 0x1007;
      local_e8 = 0x20;
      local_e4 = 0x60;
      local_dc = 8;
    }
    /* ST_CALLSITE[006BBC65]: CALL dword ptr [EDX + 0x18] */
    local_18 = (*STField<code **>(param_1->field_0030,0x0000)[6])
                         (param_1->field_0030,local_130,&local_c,0);
    if (local_18 == 0) {
      /* ST_CALLSITE[006BBC7D]: CALL dword ptr [EDX + 0x38] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*param_1->field_0044 + 0x38))(param_1->field_0044,local_38);
      goto LAB_006bbc85;
    }
LAB_006bbdfd:
    if (local_c != nullptr) {
      /* ST_CALLSITE[006BBE07]: CALL dword ptr [EDX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*local_c + 8))(local_c);
      local_c = nullptr;
    }
    if (local_14 != nullptr) {
      /* ST_CALLSITE[006BBE1B]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*local_14 + 8))(local_14);
    }
  }
  return local_18;
}

// 006BBE40 FUN_006bbe40
#line 4 "decomp/ST.exe/functions/006BBE40/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006CEF60 -> 006BBE40 @ 006CF1D7 | 006CEF60 -> 006BBE40 @ 006CF663

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006CEF60 -> 006BBE40 @ 006CF1D7 | 006CEF60 -> 006BBE40 @ 006CF663

   [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=19, ignored=0, unknown=0 */

undefined4 st::fn_006BBE40(int *param_1,uint *param_2,int *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  uint local_80 [4];
  int local_70;
  uint local_5c;

  bVar1 = false;
  local_5c = 0;
  local_70 = 0;
  local_80[0] = 0x7c;
  while( true ) {
    /* ST_CALLSITE[006BBE6D]: CALL dword ptr [EAX + 0x64] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)(*param_1 + 100))(param_1,0,local_80,param_4 | 1,0);
    if (((iVar2 != -0x7789ff60) && (iVar2 != -0x7789fe52)) || (bVar1)) break;
    /* ST_CALLSITE[006BBE84]: CALL dword ptr [0x0085bc6c] */
    st::external_00000050(2);
    bVar1 = true;
  }
  if (iVar2 == 0) {
    *param_2 = local_5c;
    *param_3 = local_70;
    return 0;
  }
  *param_2 = 0;
  *param_3 = 0;
  return iVar2;
}

// 006BBED0 FUN_006bbed0
#line 4 "decomp/ST.exe/functions/006BBED0/decomp.c"
/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=3, ignored=0, unknown=0 */

undefined4 st::fn_006BBED0(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  uint local_80 [4];
  uint local_70;
  uint local_5c;
  bVar1 = false;
  local_5c = 0;
  local_70 = 0;
  local_80[0] = 0x7c;
  while( true ) {
    /* ST_CALLSITE[006BBEFA]: CALL dword ptr [EAX + 0x64] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)(*param_1 + 100))(param_1,param_4,local_80,0x21,0);
    if (((iVar2 != -0x7789ff60) && (iVar2 != -0x7789fe52)) || (bVar1)) break;
    /* ST_CALLSITE[006BBF11]: CALL dword ptr [0x0085bc6c] */
    st::external_00000050(2);
    bVar1 = true;
  }
  if (iVar2 == 0) {
    *param_2 = local_5c;
    *param_3 = local_70;
    return 0;
  }
  *param_2 = 0;
  *param_3 = 0;
  return iVar2;
}

// 006BBF50 FUN_006bbf50
#line 4 "decomp/ST.exe/functions/006BBF50/decomp.c"
void st::fn_006BBF50(int *param_1,undefined4 param_2)

{
  int iVar1;

  if ((param_1[3] & 0x400U) != 0) {
    /* ST_CALLSITE[006BBF6D]: CALL dword ptr [ECX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (*(code *)**(undefined4 **)param_1[0xd])
                      ((undefined4 *)param_1[0xd],&DAT_0079fc78,&param_1);
    if ((iVar1 == 0) && (param_1 != nullptr)) {
      /* ST_CALLSITE[006BBF83]: CALL dword ptr [ECX + 0x10] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*param_1 + 0x10))(param_1,1,param_2);
      if (param_1 != nullptr) {
        /* ST_CALLSITE[006BBF90]: CALL dword ptr [ECX + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*param_1 + 8))(param_1);
      }
    }
  }
  return;
}

// 006BC360 FUN_006bc360
#line 4 "decomp/ST.exe/functions/006BC360/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0055DCD0 -> 006BC360 @ 0055DD30

   [STPrototypeApplier] Propagated return.
   Evidence: 006BC360 returns return of Library::DKW::LIB::FUN_006aac70 @ 006BC38D | 006BC360
   returns return of Library::DKW::LIB::FUN_006aac70 @ 006BC3D2 */

int st::fn_006BC360(ushort *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  byte *puVar2;
  int iVar3;
  byte *puVar4;
  iVar1 = st::fn_006B4FE0(param_1);
  if ((param_2 == nullptr) &&
     (param_2 = (undefined4 *)st::fn_006AAC70(0x400), param_2 == nullptr)) {
    return 0;
  }
  memset(param_2, 0, 0x400); /* compiler bulk-zero initialization */
  if (0 < iVar1) {
    puVar4 = (undefined1 *)((int)param_2 + 2);
    puVar2 = (undefined1 *)((int)param_1 + 0x29);
    iVar3 = iVar1;
    do {
      puVar4[-2] = puVar2[1];
      puVar4[-1] = *puVar2;
      *puVar4 = puVar2[-1];
      puVar4 = puVar4 + 4;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + 4;
    } while (iVar3 != 0);
  }
  if (param_3 != nullptr) {
    *param_3 = iVar1;
  }
  return (int)param_2;
}

// 006BC3E0 FUN_006bc3e0
#line 4 "decomp/ST.exe/functions/006BC3E0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006BC3E0 -> 006BC360 @ 006BC40C */

undefined2 * st::fn_006BC3E0(ushort *param_1,undefined2 *param_2,undefined4 *param_3)

{
  ushort *puVar1;
  puVar1 = param_2;
  if (param_2 == nullptr) {
    puVar1 = static_cast<ushort *>(st::fn_006AAC70(0x404));
    if (puVar1 == nullptr) {
      return nullptr;
    }
  }
  st::fn_006BC360(param_1,reinterpret_cast<undefined4 *>((puVar1 + 2)),reinterpret_cast<int *>(&param_2));
  *puVar1 = 0x300;
  puVar1[1] = STPiece<0,2>(param_2);
  if (param_3 != nullptr) {
    *param_3 = st::machine_word_boundary_cast<undefined4>(param_2);
  }
  return puVar1;
}

// 006BC440 FUN_006bc440
#line 4 "decomp/ST.exe/functions/006BC440/decomp.c"
undefined4
st::fn_006BC440(AnonShape_006BC440_9548EA86 *param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  int param_3_after_write;

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;

  iVar8 = param_3 - *(int *)(&param_1->field_0x11c + param_1->field_01E4 * 8);
  if (iVar8 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_5 = param_5 + iVar8;
    iVar8 = 0;
  }
  auto param_4_after_write = param_4 - *(int *)(&param_1->field_0x120 + param_1->field_01E4 * 8); /* compiler stack-slot lifetime split */
  if (param_4_after_write < 0) {
    param_4_after_write = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = param_6 + iVar8;
  }
  if ((0 < param_5) && (0 < param_6)) {
    iVar1 = param_1->field_01EC;
    iVar5 = param_1->field_01F0;
    iVar3 = (iVar8 % iVar1 + iVar1 + -1 + param_5) / iVar1;
    iVar4 = (param_4_after_write % iVar5 + iVar5 + -1 + param_6) / iVar5;
    iVar2 = param_1->field_01F4;
    iVar5 = param_4_after_write / iVar5;
    param_4_after_write = 0;
    iVar5 = iVar2 * iVar5;
    iVar9 = param_1->field_0204 + iVar5 + iVar8 / iVar1;
    pcVar6 = (char *)(param_1->field_021C + iVar5 + iVar8 / iVar1);
    if (0 < iVar4) {
      do {
        param_3_after_write = 0; /* compiler stack-slot lifetime split */
        if (0 < iVar3) {
          pcVar7 = pcVar6;
          do {
            if (((param_1->field_0204 == 0) || (pcVar7[iVar9 - (int)pcVar6] != '\0')) &&
               ((param_2 != 0 || ((param_1->field_021C == 0 || (*pcVar7 != '\0')))))) {
              return 0;
            }
            param_3_after_write = param_3_after_write + 1;
            pcVar7 = pcVar7 + 1;
          } while (param_3_after_write < iVar3);
        }
        iVar9 = iVar9 + iVar2;
        pcVar6 = pcVar6 + iVar2;
        param_4_after_write = param_4_after_write + 1;
      } while (param_4_after_write < iVar4);
    }
  }
  return 1;
}

// 006BC580 FUN_006bc580
#line 4 "decomp/ST.exe/functions/006BC580/decomp.c"
int st::fn_006BC580(AnonShape_006BC580_F6F161A5 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_14 = *param_2;
  local_10 = param_2[1];
  local_c = param_2[2] + local_14;
  local_8 = param_2[3] + local_10;
  iVar2 = 0;
  while( true ) {
    /* ST_CALLSITE[006BC5C5]: CALL dword ptr [ECX + 0x14] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*param_1->field_0044 + 0x14))
                      (param_1->field_0044,&local_14,param_1->field_0040,&local_14,0x1000000,0);
    if (iVar1 == 0) break;
    if (iVar1 == -0x7789fe3e) {
      st::fn_006CEC40(reinterpret_cast<AnonShape_006CEC40_BB23E716 *>(param_1));
    }
    else {
      if (((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) || (iVar2 != 0)) break;
      /* ST_CALLSITE[006BC5F4]: CALL dword ptr [0x0085bc6c] */
      st::external_00000050(2);
    }
    iVar2 = iVar2 + 1;
    if (1 < iVar2) break;
  }
  if ((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) {
    return iVar1;
  }
  return 0;
}

// 006BC630 FUN_006bc630
#line 1 "decomp/ST.exe/functions/006BC630/decomp.c"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006BC630(void)

{
  uint uVar1;
  uint uVar2;

  DAT_00854fc8 = 0;
  DAT_00854eec = 0;
  if (0 < DAT_00854fa0) {
    do {
      PTR_00854fd0 = (uint *)PTR_00854fc0[DAT_00854eec];
      if ((*PTR_00854fd0 & 0x4000) != 0) {
        if ((int)PTR_00854fd0[0xc] < 0) {
          PTR_00854fd0[10] = PTR_00854fd0[10] + PTR_00854fd0[0xc] + 1;
          PTR_00854fd0[0xc] = -PTR_00854fd0[0xc];
          *PTR_00854fd0 = *PTR_00854fd0 | 0x400;
        }
        if ((int)PTR_00854fd0[0xd] < 0) {
          PTR_00854fd0[0xb] = PTR_00854fd0[0xb] + PTR_00854fd0[0xd] + 1;
          PTR_00854fd0[0xd] = -PTR_00854fd0[0xd];
          *PTR_00854fd0 = *PTR_00854fd0 | 0x800;
        }
      }
      if ((*PTR_00854fd0 & 0x24) != 0) {
        DAT_00854f9c = PTR_00854fd0[0x14];
        PTR_00854f90 = g_int_00854FD4 + DAT_00854f9c * 4 + 5;
        DAT_00854f50 = g_int_00854FD4[DAT_00854f9c + 0x5d];
        PTR_00854fd0[10] = PTR_00854fd0[10] + g_int_00854FD4[DAT_00854f9c * 2 + 0x47];
        PTR_00854fd0[0xb] = PTR_00854fd0[0xb] + g_int_00854FD4[DAT_00854f9c * 2 + 0x48];
        PTR_00854fd0[6] = PTR_00854fd0[6] + g_int_00854FD4[DAT_00854f9c * 2 + 0x47];
        PTR_00854fd0[7] = PTR_00854fd0[7] + g_int_00854FD4[DAT_00854f9c * 2 + 0x48];
        uVar1 = *PTR_00854fd0;
        if ((uVar1 & 0x40000) == 0) {
          if ((uVar1 & 0x4000) == 0) {
            if ((((int)PTR_00854fd0[6] < PTR_00854f90[2]) &&
                (*PTR_00854f90 < (int)(PTR_00854fd0[0xe] + PTR_00854fd0[6]))) &&
               (uVar1 = PTR_00854fd0[7], (int)uVar1 < PTR_00854f90[3])) {
              uVar2 = PTR_00854fd0[0xf];
              goto LAB_006bc7d0;
            }
LAB_006bc7e0:
            _DAT_00854ed0 = 0;
          }
          else {
            if (((PTR_00854f90[2] <= (int)PTR_00854fd0[10]) ||
                ((int)(PTR_00854fd0[0xc] + PTR_00854fd0[10]) <= *PTR_00854f90)) ||
               (uVar1 = PTR_00854fd0[0xb], PTR_00854f90[3] <= (int)uVar1)) goto LAB_006bc7e0;
            uVar2 = PTR_00854fd0[0xd];
LAB_006bc7d0:
            if (st::storage_bit_cast<int>(static_cast<uint32_t>(uVar2 + uVar1)) <= PTR_00854f90[1]) goto LAB_006bc7e0;
            _DAT_00854ed0 = 1;
          }
          if (((*PTR_00854fd0 & 0x20) == 0) || (_DAT_00854ed0 == 0)) {
            *PTR_00854fd0 = *PTR_00854fd0 & 0xfffffffd;
          }
          else {
            if (PTR_00854fd0[8] == 0xffffffff) {
              st::fn_006CF950(PTR_00854fd0);
            }
            if (((((int)PTR_00854fd0[10] < PTR_00854f90[2]) &&
                 (*PTR_00854f90 < (int)(PTR_00854fd0[10] + PTR_00854fd0[0xc]))) &&
                ((int)PTR_00854fd0[0xb] < PTR_00854f90[3])) &&
               (PTR_00854f90[1] < (int)(PTR_00854fd0[0xb] + PTR_00854fd0[0xd]))) {
              uVar1 = *PTR_00854fd0;
              if ((uVar1 & 0x20) != 0) {
                if (((int)PTR_00854fd0[0xc] < 1) || ((int)PTR_00854fd0[0xd] < 1)) {
                  if ((uVar1 & 1) != 0) {
                    *PTR_00854fd0 = uVar1 | 4;
                  }
                }
                else {
                  *PTR_00854fd0 = uVar1 | 0x40;
                  DAT_00854fc8 = DAT_00854fc8 + 1;
                  if (((*PTR_00854fd0 & 1) == 0) || (DAT_00854f50 != 0)) {
                    *PTR_00854fd0 = *PTR_00854fd0 | 6;
                  }
                }
              }
              goto LAB_006bc8a6;
            }
            *PTR_00854fd0 = *PTR_00854fd0 & 0xfffffffd;
          }
        }
        else {
          *PTR_00854fd0 = uVar1 & 0xfffffffd;
        }
        uVar1 = *PTR_00854fd0;
        if ((uVar1 & 1) == 0) {
          uVar1 = uVar1 & 0xfffffffb;
        }
        else {
          uVar1 = uVar1 | 4;
        }
        *PTR_00854fd0 = uVar1;
      }
LAB_006bc8a6:
      if (((*PTR_00854fd0 & 0x500e) == 0) && (DAT_00854f98 == 0)) {
        PTR_00854fd0[0x1a] = 0;
        PTR_00854fd0[0x1b] = 0;
      }
      else {
        PTR_00854fd0[0x1a] = 5;
      }
      DAT_00854eec = DAT_00854eec + 1;
    } while (DAT_00854eec < DAT_00854fa0);
  }
  return;
}

// 006BC8F0 FUN_006bc8f0
#line 1 "decomp/ST.exe/functions/006BC8F0/decomp.c"

void st::fn_006BC8F0(void)

{
  while ((DAT_00854f98 == 0 && (DAT_00854f28 < *(int *)g_int_00854FD4[0x70]))) {
    DAT_00854edc = st::fn_006BC970(g_int_00854FD4,DAT_00854f28,PTR_00854fdc,DAT_00854fc8);
    if (DAT_00854edc == 0xffffffff) {
      DAT_00854f98 = 1;
      DAT_00854f28 = -2;
    }
    else if ((DAT_00854edc == 0) || (DAT_00854f28 < st::storage_bit_cast<int>(static_cast<uint32_t>(DAT_00854edc - 1)))) {
      DAT_00854f28 = DAT_00854f28 + 1;
    }
    else {
      DAT_00854f28 = DAT_00854edc - 1;
    }
  }
  return;
}

// 006BC970 FUN_006bc970
#line 1 "decomp/ST.exe/functions/006BC970/decomp.c"

uint st::fn_006BC970(int *param_1,int param_2,int *param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  int iVar4;
  int iVar3;
  int uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int *local_c;
  uint local_8;

  piVar2 = param_1;
  local_10 = 0;
  local_c = (int *)(param_2 * 0x10 + 8 + param_1[0x70]);
  local_8 = 0x7fff;
  uVar5 = 0x7fff;
  if (0 < param_4) {
    auto param_1_after_write = param_3; /* compiler stack-slot lifetime split */
    do {
      puVar1 = (uint *)*param_1_after_write;
      if ((*puVar1 & 8) == 0) {
        if (((*puVar1 & 2) == 0) || ((int)puVar1[0x1a] < 5)) {

          iVar4 = st::fn_006B0460(reinterpret_cast<int *>(&local_20),local_c,reinterpret_cast<int *>((puVar1 + 1)));
          if (iVar4 != 0) {
            if ((int)puVar1[0x1a] < 5) {

              iVar3 = st::fn_006D1AD0(reinterpret_cast<int *>((puVar1 + 0x1a)),4,local_20,local_1c,local_18,local_14,
                                   puVar1[3],puVar1[4],-(uint)((*puVar1 & 0x2000) != 0));
            }
            else {
              iVar3 = -1;
            }
            uVar5 = *puVar1;
            *puVar1 = uVar5 | 2;
            if (((uVar5 & 0x3000) != 0) || (((uVar5 & 0x4000) != 0 && ((uVar5 & 0x20000) == 0)))) {
              *puVar1 = uVar5 | 6;
              if (((uVar5 & 0x2000) == 0) || (iVar3 == -1)) {
                iVar4 = piVar2[4];
                iVar10 = piVar2[3];
                uVar5 = puVar1[4];
                uVar9 = puVar1[3];
                uVar8 = puVar1[2];
                uVar7 = puVar1[1];
                piVar6 = (int *)piVar2[0x70];
              }
              else {
                iVar4 = piVar2[4];
                iVar10 = piVar2[3];
                piVar6 = (int *)piVar2[0x70];
                uVar7 = local_20;
                uVar8 = local_1c;
                uVar9 = local_18;
                uVar5 = local_14;
              }

              uVar4 = st::fn_006D1AD0(piVar6,100,uVar7,uVar8,uVar9,uVar5,iVar10,iVar4,1);
              if (uVar4 == -1) {
                return 0xffffffff;
              }
              if (uVar4 != 0) {
                if (uVar4 + -1 <= param_2) {
                  return uVar4;
                }
                if (uVar4 < (int)local_8) {
                  local_8 = uVar4;
                }
              }
            }
          }
        }
      }
      else {

        iVar4 = st::fn_006CFEB0(reinterpret_cast<int *>(&local_20),local_c,piVar2 + piVar2[0x79] * 4 + 5);
        if (iVar4 != 0) {
          st::fn_006BCB30(piVar2,local_20,local_1c,local_18,local_14);
        }
      }
      local_10 = local_10 + 1;
      param_1_after_write = param_1_after_write + 1;
      uVar5 = local_8;
    } while (local_10 < param_4);
  }
  return -(uint)(uVar5 != 0x7fff) & uVar5;
}

// 006BCB30 FUN_006bcb30
#line 1 "decomp/ST.exe/functions/006BCB30/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006BCD10 -> 006BCB30 @ 006BCEF6

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006BCB30(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_10;
  int local_8;

  piVar2 = param_1;
  iVar8 = param_2 - param_1[param_1[0x79] * 2 + 0x47];
  if (iVar8 < 0) {
    param_4 = param_4 + iVar8;
    iVar8 = 0;
  }
  auto param_3_after_write = param_3 - param_1[param_1[0x79] * 2 + 0x48]; /* compiler stack-slot lifetime split */
  if (param_3_after_write < 0) {
    param_3_after_write = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_5 = param_5 + iVar8;
  }
  if ((0 < param_4) && (0 < param_5)) {
    iVar7 = param_1[0x7b];
    iVar5 = param_1[0x7c];
    iVar3 = (iVar8 % iVar7 + iVar7 + -1 + param_4) / iVar7;
    local_10 = (param_3_after_write % iVar5 + iVar5 + -1 + param_5) / iVar5;
    uVar4 = iVar8 / iVar7;
    iVar5 = param_3_after_write / iVar5;
    iVar8 = param_1[0x7d] + 7;
    iVar8 = st::storage_bit_cast<int>(static_cast<uint32_t>(iVar8 + (iVar8 >> 0x1f & 7U))) >> 3;
    iVar7 = iVar8 * iVar5;
    param_3_after_write = param_1[0x88] + iVar7;
    iVar5 = param_1[0x7d] * iVar5;
    iVar9 = param_1[0x81] + iVar5 + uVar4;
    iVar5 = param_1[0x87] + iVar5 + uVar4;
    param_1 = (int *)(param_1[0x84] + iVar7);
    if (0 < local_10) {
      do {
        if (0 < iVar3) {
          iVar7 = iVar9 - uVar4;
          uVar6 = uVar4;
          local_8 = iVar3;
          do {
            if ((piVar2[0x81] == 0) || ((uint)*(byte *)(iVar7 + uVar6) == piVar2[0x80] - 1U)) {
              if ((piVar2[0x87] != 0) &&
                 ((uint)*(byte *)(iVar7 + (iVar5 - iVar9) + uVar6) != piVar2[0x86] - 1U)) {
                pbVar1 = (byte *)(param_3_after_write + (st::storage_bit_cast<int>(static_cast<uint32_t>(uVar6 ^ 7)) >> 3));
                *pbVar1 = *pbVar1 | '\x01' << ((uVar6 ^ 7) & 7);
              }
            }
            else {
              pbVar1 = (byte *)((int)param_1 + (st::storage_bit_cast<int>(static_cast<uint32_t>(uVar6 ^ 7)) >> 3));
              *pbVar1 = *pbVar1 | '\x01' << ((uVar6 ^ 7) & 7);
              if ((piVar2[0x87] != 0) && (*(char *)(iVar7 + uVar6) != '\0')) {
                pbVar1 = (byte *)(param_3_after_write + (st::storage_bit_cast<int>(static_cast<uint32_t>(uVar6 ^ 7)) >> 3));
                *pbVar1 = *pbVar1 | '\x01' << ((uVar6 ^ 7) & 7);
              }
            }
            uVar6 = uVar6 + 1;
            local_8 = local_8 + -1;
          } while (local_8 != 0);
        }
        iVar9 = iVar9 + piVar2[0x7d];
        iVar5 = iVar5 + piVar2[0x7d];
        param_3_after_write = param_3_after_write + iVar8;
        local_10 = local_10 + -1;
        param_1 = (int *)((int)param_1 + iVar8);
      } while (local_10 != 0);
    }
  }
  return;
}

// 006BCD10 FUN_006bcd10
#line 1 "decomp/ST.exe/functions/006BCD10/decomp.c"

void st::fn_006BCD10(void)

{
  int iVar1;
  int iVar2;
  RecoveredGlobalRecordView_00854F44 *pRVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  iVar2 = DAT_00854fc8;
joined_r0x006bcd2a:
  do {
    iVar2 = iVar2 + -1;
    if (DAT_00854f98 != 0) {
      DAT_00854f60 = iVar2;
      return;
    }
    if (iVar2 < 0) {
      DAT_00854f60 = iVar2;
      return;
    }
    PTR_00854f44 = (RecoveredGlobalRecordView_00854F44 *)PTR_00854fdc[iVar2];
    DAT_00854f60 = iVar2;
    if ((*(uint *)PTR_00854f44 & 8) == 0) {
      if ((*(uint *)PTR_00854f44 & 2) == 0) goto joined_r0x006bcd2a;
      if (((g_int_00854FD4[0x7a] < (int)PTR_00854f44->field_0044) && (g_int_00854FD4[0x77] != 0)) &&

         (iVar2 = st::fn_006CFEB0(reinterpret_cast<int *>(&DAT_00854f08),reinterpret_cast<int *>(&PTR_00854f44->field_0x28),
                               g_int_00854FD4 + g_int_00854FD4[0x79] * 4 + 5), iVar2 != 0)) {
        st::fn_006BCB30(g_int_00854FD4,DAT_00854f08,DAT_00854f0c,DAT_00854f10,DAT_00854f14);
      }
      DAT_00854eec = 0;
      pRVar3 = PTR_00854f44;
      iVar2 = DAT_00854f60;
      if (0 < DAT_00854f60) {
        do {
          PTR_00854fd0 = (uint *)PTR_00854fdc[DAT_00854eec];
          if ((((*PTR_00854fd0 & 2) == 0) || ((int)PTR_00854fd0[0x1a] < 5)) &&
             (DAT_00854edc = 0, 4 < pRVar3->field_0068)) {

            iVar2 = st::fn_006B0460(reinterpret_cast<int *>(&DAT_00854f08),reinterpret_cast<int *>((PTR_00854fd0 + 1)),
                                 reinterpret_cast<int *>(&pRVar3->field_0x28));
            if (iVar2 != 0) {

              DAT_00854edc = st::fn_006D1AD0(reinterpret_cast<int *>((PTR_00854fd0 + 0x1a)),4,DAT_00854f08,DAT_00854f0c,
                                          DAT_00854f10,DAT_00854f14,PTR_00854fd0[3],PTR_00854fd0[4],
                                          -(uint)((*PTR_00854fd0 & 0x2000) != 0));
            }
            pRVar3 = PTR_00854f44;
            if (DAT_00854edc != 0) {
              *PTR_00854fd0 = *PTR_00854fd0 | 2;
              uVar8 = *PTR_00854fd0;
              if (((uVar8 & 0x3000) != 0) ||
                 ((pRVar3 = PTR_00854f44, (uVar8 & 0x4000) != 0 && ((uVar8 & 0x20000) == 0)))) {
                *PTR_00854fd0 = uVar8 | 4;
                if (((*(uint *)PTR_00854f44 & 0x2000) == 0) || (DAT_00854edc == -1)) {
                  iVar2 = g_int_00854FD4[4];
                  iVar1 = g_int_00854FD4[3];
                  piVar4 = (int *)g_int_00854FD4[0x70];
                  uVar8 = PTR_00854fd0[4];
                  uVar7 = PTR_00854fd0[3];
                  uVar6 = PTR_00854fd0[2];
                  uVar5 = PTR_00854fd0[1];
                }
                else {
                  iVar2 = g_int_00854FD4[4];
                  iVar1 = g_int_00854FD4[3];
                  piVar4 = (int *)g_int_00854FD4[0x70];
                  uVar5 = DAT_00854f08;
                  uVar6 = DAT_00854f0c;
                  uVar7 = DAT_00854f10;
                  uVar8 = DAT_00854f14;
                }

                DAT_00854f28 = st::fn_006D1AD0(piVar4,100,uVar5,uVar6,uVar7,uVar8,iVar1,iVar2,1);
                if (DAT_00854f28 == -1) {
                  DAT_00854f98 = 1;
                  iVar2 = DAT_00854f60;
                  break;
                }
                pRVar3 = PTR_00854f44;
                if (DAT_00854f28 != 0) goto LAB_006bd0ad;
              }
            }
          }
          DAT_00854eec = DAT_00854eec + 1;
          iVar2 = DAT_00854f60;
        } while (DAT_00854eec < DAT_00854f60);
      }
    }
    else {
      DAT_00854eec = 0;
      if (0 < iVar2) {
        do {
          PTR_00854fd0 = (uint *)PTR_00854fdc[DAT_00854eec];
          if (((((*PTR_00854fd0 & 2) == 0) || ((int)PTR_00854fd0[0x1a] < 5)) &&

              (iVar1 = st::fn_006CFEB0(reinterpret_cast<int *>(&DAT_00854f08),reinterpret_cast<int *>((PTR_00854fd0 + 10)),
                                    g_int_00854FD4 + g_int_00854FD4[0x79] * 4 + 5),
              iVar2 = DAT_00854f60, iVar1 != 0)) &&

             (iVar1 = st::fn_006BD0C0(g_int_00854FD4,DAT_00854f08,DAT_00854f0c,DAT_00854f10,
                                   DAT_00854f14), iVar2 = DAT_00854f60, iVar1 != 0)) {
            PTR_00854fd0[0x1a] = 5;
            *PTR_00854fd0 = *PTR_00854fd0 | 2;
            uVar8 = *PTR_00854fd0;
            if (((uVar8 & 0x3000) != 0) ||
               ((iVar2 = DAT_00854f60, (uVar8 & 0x4000) != 0 && ((uVar8 & 0x20000) == 0)))) {
              *PTR_00854fd0 = uVar8 | 4;

              DAT_00854f28 = st::fn_006D1AD0((int *)g_int_00854FD4[0x70],100,PTR_00854fd0[1],
                                          PTR_00854fd0[2],PTR_00854fd0[3],PTR_00854fd0[4],
                                          g_int_00854FD4[3],g_int_00854FD4[4],1);
              iVar2 = DAT_00854f60;
              if (DAT_00854f28 == -1) {
                DAT_00854f98 = 1;
                break;
              }
              if (DAT_00854f28 != 0) {
LAB_006bd0ad:
                DAT_00854f28 = DAT_00854f28 + -1;
                DAT_00854f6c = 1;
                return;
              }
            }
          }
          DAT_00854eec = DAT_00854eec + 1;
        } while (DAT_00854eec < iVar2);
      }
    }
    if (DAT_00854f6c != 0) {
      return;
    }
  } while( true );
}

// 006BD0C0 FUN_006bd0c0
#line 4 "decomp/ST.exe/functions/006BD0C0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006BCD10 -> 006BD0C0 @ 006BCDD4 */

undefined4 st::fn_006BD0C0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int param_2_after_write;

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  iVar5 = param_2 - param_1[param_1[0x79] * 2 + 0x47];
  if (iVar5 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = param_4 + iVar5;
    iVar5 = 0;
  }
  auto param_3_after_write = param_3 - param_1[param_1[0x79] * 2 + 0x48]; /* compiler stack-slot lifetime split */
  if (param_3_after_write < 0) {
    param_3_after_write = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_5 = param_5 + iVar5;
  }
  if ((0 < param_4) && (0 < param_5)) {
    iVar1 = param_1[0x7b];
    iVar4 = param_1[0x7c];
    iVar2 = (iVar5 % iVar1 + iVar1 + -1 + param_4) / iVar1;
    iVar3 = (param_3_after_write % iVar4 + iVar4 + -1 + param_5) / iVar4;
    iVar4 = param_3_after_write / iVar4;
    param_3_after_write = 0;
    iVar7 = (int)(param_1[0x7d] + 7 + (param_1[0x7d] + 7 >> 0x1f & 7U)) >> 3;
    iVar4 = iVar7 * iVar4;
    iVar6 = param_1[0x88] + iVar4;
    iVar4 = param_1[0x84] + iVar4;
    if (0 < iVar3) {
      do {
        param_2_after_write = 0; /* compiler stack-slot lifetime split */
        auto param_1_after_write = (int *)(iVar5 / iVar1); /* compiler stack-slot lifetime split */
        if (0 < iVar2) {
          do {
            if (((*(byte *)(iVar4 + (st::storage_bit_cast<int>(static_cast<uint32_t>((uint)param_1_after_write ^ 7)) >> 3)) >> (((uint)param_1_after_write ^ 7) & 7) &
                 1) != 0) ||
               ((*(byte *)(iVar6 + (st::storage_bit_cast<int>(static_cast<uint32_t>((uint)param_1_after_write ^ 7)) >> 3)) >> (((uint)param_1_after_write ^ 7) & 7) & 1
                ) != 0)) {
              return 1;
            }
            param_2_after_write = param_2_after_write + 1;
            param_1_after_write = (int *)((int)param_1_after_write + 1);
          } while (param_2_after_write < iVar2);
        }
        iVar4 = iVar4 + iVar7;
        iVar6 = iVar6 + iVar7;
        param_3_after_write = param_3_after_write + 1;
      } while (param_3_after_write < iVar3);
    }
  }
  return 0;
}

// 006BD230 FUN_006bd230
#line 1 "decomp/ST.exe/functions/006BD230/decomp.c"

void st::fn_006BD230(void)

{
  DAT_00854f28 = 0;
  do {
    DAT_00854f6c = 0;
    st::fn_006BC8F0();
    st::fn_006BCD10();
  } while (DAT_00854f6c != 0);
  return;
}

// 006BD260 FUN_006bd260
#line 4 "decomp/ST.exe/functions/006BD260/decomp.c"
void st::fn_006BD260(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  local_8 = 0xffffffff;
  puStack_c = (undefined *)&DAT_0079d940;
  puStack_10 = (byte *)&st_image_0072D964;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined4 *)g_int_00854FD4[0x70] = 0;
  *(undefined4 *)(g_int_00854FD4[0x70] + 4) = 0;
  if (g_int_00854FD4[0x76] == 0) {
    if (g_int_00854FD4[0x8b] == 0) {
      DAT_00854ed8 = 0;
      /* ST_CALLSITE[006BD369]: CALL dword ptr [EDX + 0x14] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      while (DAT_00854fec = (**(code **)(*PTR_00854ee8->field_0044 + 0x14))
                                      (PTR_00854ee8->field_0044,0,PTR_00854ee8->field_0040,0,
                                       0x1000000,0), DAT_00854fec != 0) {
        if (DAT_00854fec == -0x7789fe3e) {
          st::fn_006CEC40(reinterpret_cast<AnonShape_006CEC40_BB23E716 *>(PTR_00854ee8));
        }
        else {
          if (((DAT_00854fec != -0x7789ff60) && (DAT_00854fec != -0x7789fe52)) ||
             (DAT_00854ed8 != 0)) break;
          /* ST_CALLSITE[006BD3A2]: CALL ESI */
          st::external_00000050(2);
        }
        DAT_00854ed8 = DAT_00854ed8 + 1;
        if (1 < DAT_00854ed8) break;
      }
      if ((DAT_00854fec == -0x7789ff60) || (DAT_00854fec == -0x7789fe52)) {
        DAT_00854fec = 0;
      }
    }
    else {
      /* ST_CALLSITE[006BD2D0]: CALL dword ptr [ESI + 0x228] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      DAT_00854fec = (*(code *)g_int_00854FD4[0x8a])(PTR_00854ee8,g_int_00854FD4[0x8d]);
      if (DAT_00854fec == 0) {
        local_8 = 0;
        /* ST_CALLSITE[006BD2F3]: CALL dword ptr [EAX + 0x22c] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        DAT_00854fec = (*(code *)g_int_00854FD4[0x8b])(0,g_int_00854FD4[0x8d]);
        local_8 = 0xffffffff;
        /* ST_CALLSITE[006BD32F]: CALL dword ptr [EAX + 0x230] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (*(code *)g_int_00854FD4[0x8c])(g_int_00854FD4[0x8d]);
      }
    }
  }
  if (DAT_00854fe4 == 0) {
    DAT_00854fe4 = DAT_00854fec;
  }
  DAT_00854f60 = 0;
  if (0 < DAT_00854fc8) {
    do {
      PTR_00854f44 = (RecoveredGlobalRecordView_00854F44 *)PTR_00854fdc[DAT_00854f60];
      *(uint *)PTR_00854f44 = *(uint *)PTR_00854f44 | 2;
      PTR_00854f44->field_0068 = 5;
      DAT_00854f60 = DAT_00854f60 + 1;
    } while (DAT_00854f60 < DAT_00854fc8);
  }
  if (DAT_00854f94 != 0) {
    uVar1 = ((int)(g_int_00854FD4[0x7d] + 7 + (g_int_00854FD4[0x7d] + 7 >> 0x1f & 7U)) >> 3) *
            g_int_00854FD4[0x7e];
    puVar3 = (undefined4 *)g_int_00854FD4[0x84];
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    uVar1 = ((int)(g_int_00854FD4[0x7d] + 7 + (g_int_00854FD4[0x7d] + 7 >> 0x1f & 7U)) >> 3) *
            g_int_00854FD4[0x7e];
    puVar3 = (undefined4 *)g_int_00854FD4[0x88];
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  ExceptionList = local_14;
  return;
}

// 006BD4B0 FUN_006bd4b0
#line 1 "decomp/ST.exe/functions/006BD4B0/decomp.c"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006BD4B0(void)

{
  int iVar2;
  int local_EAX_386;
  int iVar1;

  if (((*(uint *)PTR_00854f44 & 0x80004) == 0x80004) && (PTR_00854f44->field_00C0 != nullptr)) {
    st::fn_006CEA60(PTR_00854f44->field_00C0,PTR_00854f44->field_000C,
             &PTR_00854f00->field_0x0 +
             PTR_00854f44->field_0008 * (int)PTR_00854fe0 + PTR_00854f44->field_0004,
             (int)PTR_00854fe0,PTR_00854f44->field_000C,PTR_00854f44->field_0010);
  }
  DAT_00854edc = PTR_00854f44->field_0068;
  if (DAT_00854edc < 5) {
    PTR_00854fd8 = reinterpret_cast<int *>(&PTR_00854f44->field_0x70);
    DAT_00854ed8 = 0;
    if (0 < DAT_00854edc) {
      do {
        _DAT_00854fb0 = *PTR_00854fd8 - DAT_00854ee0;
        _DAT_00854fb4 = (DAT_00854f24 - DAT_00854ee4) + PTR_00854fd8[1];
        DAT_00854fb8 = PTR_00854fd8[2];
        DAT_00854fbc = PTR_00854fd8[3];

        DAT_00854fec = st::fn_006CEF60(g_int_00854FD4,PTR_00854f00,PTR_00854fe0,
                                    reinterpret_cast<RecoveredRecord_006CEF60_5CD59663 *>(PTR_00854f44),PTR_00854f68,
                                    st::pointer_boundary_cast<char *>(DAT_00854f58),*PTR_00854fd8,PTR_00854fd8[1],reinterpret_cast<int *>(&DAT_00854fb0),
                                    DAT_00854f20,DAT_00854f9c,DAT_00854f1c,st::pointer_boundary_cast<undefined1 *>(DAT_00854f5c));
        if (DAT_00854fe4 == 0) {
          DAT_00854fe4 = DAT_00854fec;
        }
        if (((DAT_00854ed4 == 0) &&

            (iVar2 = st::fn_006CFEB0(reinterpret_cast<int *>(&DAT_00854ef0),PTR_00854fd8,PTR_00854f90), iVar2 != 0)) &&

           (local_EAX_386 =
                 st::fn_006D1AD0((int *)g_int_00854FD4[0x70],100,DAT_00854ef0,DAT_00854ef4,DAT_00854ef8
                              ,DAT_00854efc,g_int_00854FD4[3],g_int_00854FD4[4],1),
           local_EAX_386 == -1)) {
          DAT_00854ed4 = 1;
        }
        PTR_00854fd8 = PTR_00854fd8 + 4;
        DAT_00854ed8 = DAT_00854ed8 + 1;
      } while (DAT_00854ed8 < DAT_00854edc);
      return;
    }
  }
  else {
    _DAT_00854fb4 = DAT_00854f24;
    _DAT_00854fb0 = 0;

    DAT_00854fec = st::fn_006CEF60(g_int_00854FD4,PTR_00854f00,PTR_00854fe0,
                                reinterpret_cast<RecoveredRecord_006CEF60_5CD59663 *>(PTR_00854f44),PTR_00854f68,
                                st::pointer_boundary_cast<char *>(DAT_00854f58),DAT_00854ee0,DAT_00854ee4,reinterpret_cast<int *>(&DAT_00854fb0),
                                DAT_00854f20,DAT_00854f9c,DAT_00854f1c,st::pointer_boundary_cast<undefined1 *>(DAT_00854f5c));
    if (DAT_00854fe4 == 0) {
      DAT_00854fe4 = DAT_00854fec;
    }
    if ((DAT_00854ed4 == 0) &&

       (iVar1 = st::fn_006D1AD0((int *)g_int_00854FD4[0x70],100,DAT_00854ef0,DAT_00854ef4,DAT_00854ef8,
                             DAT_00854efc,g_int_00854FD4[3],g_int_00854FD4[4],1), iVar1 == -1)) {
      DAT_00854ed4 = 1;
    }
  }
  return;
}

// 006BFB30 FUN_006bfb30
#line 1 "decomp/ST.exe/functions/006BFB30/decomp.c"

void st::fn_006BFB30(int *param_1)

{
  st::fn_006BF9F0(param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
  return;
}

// 006BFB50 FUN_006bfb50
#line 1 "decomp/ST.exe/functions/006BFB50/decomp.c"

/* [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   pointer:/int; no intervening CALL or EAX/AX/AL/AH definition exists; machine CFG audit: used=25,
   ignored=0, unknown=0

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00561670 -> 006BFB50 @ 00561810; return of FUN_006bfb70 | 006A64E0 -> 006BFB50 @
   006A6605; return of FUN_006bfb70 | 006A6F00 -> 006BFB50 @ 006A7000; return of FUN_006bfb70 |
   006AB090 -> 006BFB50 @ 006AB269; return of FUN_006bfb70 */

int * st::fn_006BFB50(int *param_1,uint param_2)

{
  int *piVar1;

  if (param_2 == 0) {
    param_2 = 1;
  }
  piVar1 = st::fn_004055CE(param_1,param_2);
  return piVar1;
}

// 006BFB70 FUN_006bfb70
#line 1 "decomp/ST.exe/functions/006BFB70/decomp.c"

/* [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   pointer:/int; no intervening CALL or EAX/AX/AL/AH definition exists; machine CFG audit: used=17,
   ignored=0, unknown=0 */

int * st::fn_006BFB70(int param_1)

{
  int *piVar1;

  if (param_1 == 0) {
    param_1 = 1;
  }
  piVar1 = st::fn_00402B21(param_1);
  return piVar1;
}

// 006BFB90 FUN_006bfb90
#line 1 "decomp/ST.exe/functions/006BFB90/decomp.c"

/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 006BFB90 -> EXTERNAL:0000004F @ 006BFBD0

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006BFB90 -> EXTERNAL:0000004F @ 006BFBD0 | 006BFE70 -> 006BFB90 @ 006BFF61 | 006BFE70
   -> 006BFB90 @ 006C003B | 006BFE70 -> 006BFB90 @ 006C01DA | 006BFE70 -> 006BFB90 @ 006C03CB |
   006BFE70 -> 006BFB90 @ 006C04D5 | 006BFE70 -> 006BFB90 @ 006C0604

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 006BFB90 -> EXTERNAL:0000004F @ 006BFBD0 | 006BFE70 -> 006BFB90 @ 006BFEB9

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006BFB90 -> EXTERNAL:00000052 @ 006BFBA1
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (7), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=006BFE70 @ 006BFEB9 -> read as EAX on
   every CFG path | 006BFE70 @ 006BFF61 -> read as EAX on every CFG path | 006BFE70 @ 006C003B ->
   read as EAX on every CFG path | 006BFE70 @ 006C01DA -> read as EAX on every CFG path | 006BFE70 @
   006C03CB -> read as EAX on every CFG path | 006BFE70 @ 006C04D5 -> read as EAX on every CFG path
   | 006BFE70 @ 006C0604 -> read as EAX on every CFG path */

int st::fn_006BFB90(HANDLE hFile,LPDWORD lpNumberOfBytesRead,LPVOID lpBuffer,DWORD nNumberOfBytesToRead
                )

{
  DWORD DVar1;
  BOOL BVar2;
  DWORD DVar2;

  /* ST_CALLSITE[006BFBA1]: CALL dword ptr [0x0085bc74] */
  DVar1 = st::external_00000052(hFile,(LONG)lpNumberOfBytesRead,(PLONG)0x0,0);
  DVar2 = nNumberOfBytesToRead;
  if ((DVar1 != 0xffffffff) &&
     /* ST_CALLSITE[006BFBD0]: CALL dword ptr [0x0085bc68] */
     (BVar2 = st::external_0000004F(hFile,lpBuffer,nNumberOfBytesToRead,(LPDWORD)&lpNumberOfBytesRead,
                       (LPOVERLAPPED)0x0), BVar2 != 0)) {
    return -(uint)(lpNumberOfBytesRead != (LPDWORD)DVar2) & 0xfffffff2;
  }
  /* ST_CALLSITE[006BFBAC]: CALL dword ptr [0x0085bbcc] */
  DVar1 = st::external_00000028();
  if (DVar1 != 0) {
    return DVar1;
  }
  return -0xfd;
}

// 006BFBF0 FUN_006bfbf0
#line 4 "decomp/ST.exe/functions/006BFBF0/decomp.c"
/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=4, ignored=1, unknown=0 */

int st::fn_006BFBF0(RecoveredRecordView_006BFBF0_7F78587C *param_1)

{
  byte *puVar1;
  byte *puVar2;
  int *piVar3;
  RecoveredRecordView_006BFBF0_7F78587C *pRVar4;
  uint uVar5;
  DWORD DVar6;
  int iVar7;
  uint uVar8;
  byte *puVar9;
  byte *puVar11;
  uint local_34 [4];
  byte *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  RecoveredRecord_006BFE70_3123BCE8 *local_8;

  pRVar4 = param_1;
  memset(local_34, 0, 0x24); /* compiler bulk-zero initialization */
  iVar7 = 0;
  local_24 = &param_1->field_0x8a;
  *(undefined4 *)&param_1->field_0x18 = 0x7fffffff;
  puVar9 = reinterpret_cast<byte *>(&param_1->field_0x4c);
  puVar11 = reinterpret_cast<byte *>(local_24);
  memmove(puVar11, puVar9, 0x32); /* compiler REP MOVS byte copy */
  local_34[0] = 0x24;
  if (*(short *)local_24 == 2) {
    *(undefined2 *)local_24 = 1;
    *(undefined2 *)&param_1->field_0x98 = 0x10;
    uVar5 = st::storage_bit_cast<int>(static_cast<uint32_t>((uint)*(ushort *)&param_1->field_0x8c * 0x10)) >> 3;
    param_1->field_0096 = (short)uVar5;
    param_1->field_0092 = param_1->field_008E * (uVar5 & 0xffff);
    param_1->field_009A = 0;
    *(uint *)&param_1[1].field_0x24 = param_1->field_0066;
  }
  else {
    *(uint *)&param_1[1].field_0x24 = param_1->field_005E / (uint)(ushort)param_1->field_0096;
  }
  uVar5 = (uint)(ushort)param_1->field_0096 * *(int *)&param_1[1].field_0x24;
  local_34[2] = param_1->field_0092 * 2;
  if (local_34[2] < uVar5 || local_34[2] - uVar5 == 0) {
    uVar8 = 0x100e0;
  }
  else {
    uVar8 = 0xe2;
    local_34[2] = uVar5;
  }
  *(uint *)&param_1->field_0x14 = local_34[2];
  if (((*(uint *)&param_1->field_0x4 & 0x1000) == 0) || (DAT_007ede10 < 1)) {
    local_34[1] = uVar8 | 8;
    *(uint *)&param_1->field_0x4 = *(uint *)&param_1->field_0x4 & 0xffffefff;
  }
  else {
    local_34[1] = uVar8 | 0x20010;
    local_20 = DAT_0079ea38;
    local_1c = DAT_0079ea3c;
    local_18 = DAT_0079ea40;
    local_14 = DAT_0079ea44;
    if (DAT_007ede10 == 1) {
      local_34[1] = uVar8 | 0x20018;
    }
  }
  puVar1 = &param_1->field_0xc;
  /* ST_CALLSITE[006BFD34]: CALL dword ptr [ECX + 0xc] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar7 = (**(code **)(*PTR_008568b4 + 0xc))(PTR_008568b4,local_34,puVar1,0);
  if (-1 < iVar7) {
    if ((local_34[1] & 2) != 0) {
      *(uint *)&pRVar4->field_0x4 = *(uint *)&pRVar4->field_0x4 | 0x4000;
    }
    /* ST_CALLSITE[006BFD6B]: CALL dword ptr [ECX + 0x2c] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar7 = (**(code **)(**(int **)puVar1 + 0x2c))
                      (*(int **)puVar1,0,local_34[2],&local_8,&param_1,&local_10,&local_c,0);
    if (iVar7 == 0) {

      st::fn_006BFE70(local_8,reinterpret_cast<AnonShape_006BFE70_9EDC24A5 *>(pRVar4),(int)param_1);
      /* ST_CALLSITE[006BFD99]: CALL dword ptr [EDX + 0x4c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar7 = (**(code **)(**(int **)puVar1 + 0x4c))
                        (*(int **)puVar1,local_8,param_1,local_10,local_c);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      if ((iVar7 == 0) &&
         /* ST_CALLSITE[006BFDAD]: CALL dword ptr [EDX + 0x3c] */
         (iVar7 = (**(code **)(**(int **)puVar1 + 0x3c))
                            (*(int **)puVar1,*(undefined4 *)&pRVar4->field_0x30), iVar7 == 0)) {
        piVar3 = *(int **)puVar1;
        if ((*(uint *)&pRVar4->field_0x4 & 0x1000) == 0) {
          /* ST_CALLSITE[006BFE2E]: CALL dword ptr [ECX + 0x40] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar7 = (**(code **)(*piVar3 + 0x40))(piVar3,*(undefined4 *)&pRVar4->field_0x34);
        }
        else {
          puVar2 = &pRVar4->field_0x10;
          /* ST_CALLSITE[006BFDCE]: CALL dword ptr [EDX] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar7 = (**(code **)*piVar3)(piVar3,&DAT_0079eaa8,puVar2);
          if (iVar7 != 0) {
            return iVar7;
          }
          /* ST_CALLSITE[006BFDEB]: CALL dword ptr [ECX + 0x4c] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar7 = (**(code **)(**(int **)puVar2 + 0x4c))
                            (*(int **)puVar2,*(undefined4 *)&pRVar4->field_0x38,
                             *(undefined4 *)&pRVar4->field_0x3c,*(undefined4 *)&pRVar4->field_0x40,1
                            );
          if (iVar7 != 0) {
            return iVar7;
          }
          /* ST_CALLSITE[006BFDFD]: CALL dword ptr [ECX + 0x44] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar7 = (**(code **)(**(int **)puVar2 + 0x44))
                            (*(int **)puVar2,*(undefined4 *)&pRVar4->field_0x44,1);
          if (iVar7 != 0) {
            return iVar7;
          }
          /* ST_CALLSITE[006BFE0F]: CALL dword ptr [EAX + 0x40] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar7 = (**(code **)(**(int **)puVar2 + 0x40))
                            (*(int **)puVar2,*(undefined4 *)&pRVar4->field_0x48,1);
          if (iVar7 != 0) {
            return iVar7;
          }
          /* ST_CALLSITE[006BFE1E]: CALL dword ptr [EDX + 0x44] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar7 = (**(code **)(*PTR_008568bc + 0x44))(PTR_008568bc);
        }
        if (iVar7 == 0) {
          /* ST_CALLSITE[006BFE35]: CALL dword ptr [0x0085bedc] */
          DVar6 = st::external_000000DA();
          *(DWORD *)&pRVar4->field_0x8 = DVar6;
          uVar5 = ~*(uint *)&pRVar4->field_0x4 >> 0xe & 1;
          if ((*(uint *)&pRVar4->field_0x4 & 1) != 0) {
            uVar5 = 1;
          }
          /* ST_CALLSITE[006BFE5C]: CALL dword ptr [ECX + 0x30] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar7 = (**(code **)(**(int **)puVar1 + 0x30))(*(int **)puVar1,0,0,uVar5);
          if (iVar7 == 0) {
            *(uint *)pRVar4 = *(uint *)pRVar4 | 1;
          }
        }
      }
    }
  }
  return iVar7;
}

// 006BFE70 FUN_006bfe70
#line 4 "decomp/ST.exe/functions/006BFE70/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 006BFBF0 -> 006BFE70 @ 006BFD7F
   [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:2: parameter=/int
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0x10, direct_reads=11, scalar_operations=6, signed_comparisons=4, unsigned_bounds=0,
   pointer_dereferences=0, slot_reused=false; sites=006BFEA3 incoming load: MOV EDI,dword ptr [EBP +
   0x10] | 006BFEE2 incoming load: MOV EDI,dword ptr [EBP + 0x10] | 006BFEFA scalar operation: ADD
   EDX,EDI | 006BFF12 scalar operation: SUB ECX,EAX | 006BFF25 incoming load: MOV EDX,dword ptr [EBP
   + 0x10] | 006BFF71 incoming load: MOV EDX,dword ptr [EBP + 0x10] | 006BFF9C scalar operation: LEA
   EAX,[EDX + EDX*0x1] | 006C0016 scalar operation: LEA EDX,[EAX + ECX*0x1] | 006C0176 incoming
   load: MOV EDX,dword ptr [EBP + 0x10] | 006C01BC scalar operation: LEA EDX,[EAX + EBX*0x1] |
   006C0314 incoming load: MOV ECX,dword ptr [EBP + 0x10] | 006C034C incoming load: MOV EDX,dword
   ptr [EBP + 0x10] | 006C03AD scalar operation: LEA EDX,[EAX + EBX*0x1] | 006C05AC incoming load:
   MOV ECX,dword ptr [EBP + 0x10] | 006C06AA incoming load: MOV EBX,dword ptr [EBP + 0x10] |
   006C07A2 incoming load: MOV ECX,dword ptr [EBP + 0x10] */

DWORD st::fn_006BFE70(RecoveredRecord_006BFE70_3123BCE8 *param_1,AnonShape_006BFE70_9EDC24A5 *param_2,
                  int param_3)

{
  short *psVar1;
  LPDWORD pDVar2;
  uint uVar3;
  LPVOID pvVar4;
  AnonShape_006BFE70_9EDC24A5 *pAVar5;
  int iVar6;
  DWORD DVar7;
  AnonShape_006BFE70_9EDC24A5 *pAVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  RecoveredRecord_006BFE70_3123BCE8 *pRVar13;
  byte *pbVar14;
  byte *pbVar15;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  DWORD local_c;
  RecoveredRecord_006BFE70_3123BCE8 *local_8;

  pAVar5 = param_2;
  pbVar14 = (byte *)g_lpBuffer_008568B0;
  local_10 = 0;
  local_14 = 0;
  local_1c = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  if (param_2->field_004C == 1) {
    if ((param_2->field_0004 & 0x2000) == 0) {
      psVar1 = param_2->field_0024;
      iVar6 = *(int *)(psVar1 + 0xb);
      if (iVar6 == 0) {
        iVar6 = (-(uint)(*psVar1 != 1) & 0x24) + 0x1a + (int)psVar1;
      }

      st::fn_0072DA70
                (param_1,(AnonPointee_TLOBaseTy_0607 *)(param_2->field_0028 + iVar6),param_3);
    }
    else {

      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_c = st::fn_006BFB90(*(HANDLE *)(*(int *)(param_2->field_001C + 4) + 0xc),
                             (LPDWORD)param_2->field_0028,param_1,param_3);
    }
    param_2->field_0028 = param_2->field_0028 + param_3;
    param_2->field_00C0 = param_2->field_00C0 - param_3 / (int)(uint)param_2->field_0096;
    return local_c;
  }
  if ((param_2->field_0004 & 0x2000) == 0) {
    psVar1 = param_2->field_0024;
    iVar6 = *(int *)(psVar1 + 0xb);
    if (iVar6 == 0) {
      iVar6 = (-(uint)(*psVar1 != 1) & 0x24) + 0x1a + (int)psVar1;
    }
    pbVar14 = (byte *)(param_2->field_0028 + iVar6);
    local_8 = (RecoveredRecord_006BFE70_3123BCE8 *)(param_3 * 2);
  }
  else {
    local_18 = param_2->field_005E + 0x3e + param_2->field_0020;
    pDVar2 = (LPDWORD)param_2->field_0028;
    local_8 = st::pointer_boundary_cast<RecoveredRecord_006BFE70_3123BCE8 *>(DAT_00856878);
    if (local_18 < st::storage_bit_cast<int>(static_cast<uint32_t>((int)pDVar2 + (int)DAT_00856878))) {
      local_8 = (RecoveredRecord_006BFE70_3123BCE8 *)(local_18 - (int)pDVar2);
    }

    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_c = st::fn_006BFB90(*(HANDLE *)(*(int *)(param_2->field_001C + 4) + 0xc),pDVar2,
                           g_lpBuffer_008568B0,(DWORD)local_8);
    if (local_c != 0) {
      return local_c;
    }
  }
  if (param_2->field_008C == 2) {
    if (0 < param_2->field_00BC) {
      local_10 = (int)*(short *)(&param_2->field_0x6e + param_2->field_009C * 4);
      local_14 = (int)*(short *)(&param_2->field_0x70 + param_2->field_009C * 4);
      local_1c = (uint)*(short *)(&param_2->field_0x6e + param_2->field_00AC * 4);
      local_20 = (int)*(short *)(&param_2->field_0x70 + param_2->field_00AC * 4);
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = nullptr;
    pRVar13 = param_1;
    if (0 < param_3) {
      do {
        pvVar4 = g_lpBuffer_008568B0;
        iVar6 = pAVar5->field_00BC;
        if (iVar6 < 1) {
          pbVar15 = pbVar14;
          if ((int)local_8 < 0xe) {
            pDVar2 = (LPDWORD)pAVar5->field_0028;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = st::pointer_boundary_cast<RecoveredRecord_006BFE70_3123BCE8 *>(DAT_00856878);
            if (local_18 < (int)pDVar2 + (int)DAT_00856878) {
              param_1 = (RecoveredRecord_006BFE70_3123BCE8 *)(local_18 - (int)pDVar2);
            }

            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            DVar7 = st::fn_006BFB90(*(HANDLE *)(*(int *)(pAVar5->field_001C + 4) + 0xc),pDVar2,
                                 g_lpBuffer_008568B0,(DWORD)param_1);
            if (DVar7 != 0) {
              return DVar7;
            }
            local_8 = param_1;
            local_c = 0;
            pbVar15 = (byte *)pvVar4;
          }
          pAVar5->field_009C = (uint)*pbVar15;
          pAVar5->field_00AC = (uint)pbVar15[1];
          *(int *)&pAVar5->field_0xa0 = (int)*(short *)(pbVar15 + 2);
          *(int *)&pAVar5->field_0xb0 = (int)*(short *)(pbVar15 + 4);
          *(int *)&pAVar5->field_0xa4 = (int)*(short *)(pbVar15 + 6);
          *(int *)&pAVar5->field_0xb4 = (int)*(short *)(pbVar15 + 8);
          *(int *)&pAVar5->field_0xa8 = (int)*(short *)(pbVar15 + 10);
          iVar6 = pAVar5->field_009C;
          pbVar14 = pbVar15 + 0xe;
          *(int *)&pAVar5->field_0xb8 = (int)*(short *)(pbVar15 + 0xc);
          if ((6 < iVar6) || (iVar11 = pAVar5->field_00AC, 6 < iVar11)) {
            return 0xfffffffb;
          }
          local_10 = (int)*(short *)(&pAVar5->field_0x6e + iVar6 * 4);
          local_14 = (int)*(short *)(&pAVar5->field_0x70 + iVar6 * 4);
          local_1c = (uint)*(short *)(&pAVar5->field_0x6e + iVar11 * 4);
          local_20 = (int)*(short *)(&pAVar5->field_0x70 + iVar11 * 4);
          local_8 = reinterpret_cast<RecoveredRecord_006BFE70_3123BCE8 *>(&local_8[-4].field_0002);
          pAVar5->field_0028 = pAVar5->field_0028 + 0xe;
          pAVar5->field_00BC = *(ushort *)&pAVar5->field_0x58 - 10;
          *(undefined2 *)pRVar13 = *(undefined2 *)&pAVar5->field_0xa8;
          sVar9 = *(short *)&pAVar5->field_0xb8;
LAB_006c0125:
          pRVar13->field_0002 = sVar9;
          pRVar13 = pRVar13 + 1;
          param_2 = reinterpret_cast<AnonShape_006BFE70_9EDC24A5 *>(&param_2->field_0004);
          pAVar5->field_00C0 = pAVar5->field_00C0 + -1;
          param_1 = pRVar13;
        }
        else {
          if (iVar6 == *(ushort *)&pAVar5->field_0x58 - 10) {
            pAVar5->field_00BC = iVar6 + -4;
            *(undefined2 *)pRVar13 = *(undefined2 *)&pAVar5->field_0xa4;
            sVar9 = *(short *)&pAVar5->field_0xb4;
            goto LAB_006c0125;
          }
          while (((int)param_2 < param_3 &&
                 (iVar6 = pAVar5->field_00BC, pAVar5->field_00BC = iVar6 + -1,
                 pvVar4 = g_lpBuffer_008568B0, 0 < iVar6))) {
            if (pAVar5->field_00C0 < 1) {
              return local_c;
            }
            pbVar15 = pbVar14;
            if ((int)local_8 < 1) {
              pDVar2 = (LPDWORD)pAVar5->field_0028;
              local_8 = st::pointer_boundary_cast<RecoveredRecord_006BFE70_3123BCE8 *>(DAT_00856878);
              if (local_18 < (int)pDVar2 + (int)DAT_00856878) {
                local_8 = (RecoveredRecord_006BFE70_3123BCE8 *)(local_18 - (int)pDVar2);
              }

              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_c = st::fn_006BFB90(*(HANDLE *)(*(int *)(pAVar5->field_001C + 4) + 0xc),pDVar2,
                                     g_lpBuffer_008568B0,(DWORD)local_8);
              pbVar15 = (byte *)pvVar4;
              if (local_c != 0) {
                return local_c;
              }
            }
            pbVar14 = pbVar15 + 1;
            uVar10 = (uint)(*pbVar15 >> 4);
            uVar12 = *pbVar15 & 0xf;
            local_8 = (RecoveredRecord_006BFE70_3123BCE8 *)((int)&local_8[-1].field_0002 + 1);
            pAVar5->field_0028 = pAVar5->field_0028 + 1;
            if (7 < uVar10) {
              uVar10 = uVar10 - 0x10;
            }
            iVar6 = (*(int *)&pAVar5->field_0xa4 * local_10 + *(int *)&pAVar5->field_0xa8 * local_14
                    >> 8) + *(int *)&pAVar5->field_0xa0 * uVar10;
            if (iVar6 < 0x8000) {
              if (iVar6 < -0x8000) {
                iVar6 = -0x8000;
              }
            }
            else {
              iVar6 = 0x7fff;
            }
            iVar11 = *(int *)(PTR_DAT_007ede0c + uVar10 * 4) * *(int *)&pAVar5->field_0xa0 >> 8;
            *(int *)&pAVar5->field_0xa0 = iVar11;
            if (iVar11 < 0x10) {
              *(undefined4 *)&pAVar5->field_0xa0 = 0x10;
            }
            *(undefined4 *)&pAVar5->field_0xa8 = *(undefined4 *)&pAVar5->field_0xa4;
            *(int *)&pAVar5->field_0xa4 = iVar6;
            *(short *)param_1 = (short)iVar6;
            if (7 < uVar12) {
              uVar12 = uVar12 - 0x10;
            }
            iVar6 = (st::storage_bit_cast<int>(static_cast<uint32_t>(*(int *)&pAVar5->field_0xb4 * local_1c +
                          local_20 * *(int *)&pAVar5->field_0xb8)) >> 8) +
                    *(int *)&pAVar5->field_0xb0 * uVar12;
            if (iVar6 < 0x8000) {
              if (iVar6 < -0x8000) {
                iVar6 = -0x8000;
              }
            }
            else {
              iVar6 = 0x7fff;
            }
            iVar11 = *(int *)(PTR_DAT_007ede0c + uVar12 * 4) * *(int *)&pAVar5->field_0xb0 >> 8;
            *(int *)&pAVar5->field_0xb0 = iVar11;
            if (iVar11 < 0x10) {
              *(undefined4 *)&pAVar5->field_0xb0 = 0x10;
            }
            uVar3 = *(undefined4 *)&pAVar5->field_0xb4;
            *(int *)&pAVar5->field_0xb4 = iVar6;
            *(undefined4 *)&pAVar5->field_0xb8 = uVar3;
            param_1->field_0002 = (short)iVar6;
            pRVar13 = param_1 + 1;
            param_2 = reinterpret_cast<AnonShape_006BFE70_9EDC24A5 *>(&param_2->field_0004);
            pAVar5->field_00C0 = pAVar5->field_00C0 + -1;
            param_1 = pRVar13;
          }
        }
        if (pAVar5->field_00C0 < 1) {
          return local_c;
        }
        if (param_3 <= (int)param_2) {
          return local_c;
        }
      } while( true );
    }
  }
  else {
    if (0 < param_2->field_00BC) {
      local_10 = (int)*(short *)(&param_2->field_0x6e + param_2->field_009C * 4);
      local_14 = (int)*(short *)(&param_2->field_0x70 + param_2->field_009C * 4);
    }
    param_2 = nullptr;
    if (0 < param_3) {
      do {
        pvVar4 = g_lpBuffer_008568B0;
        uVar10 = pAVar5->field_00BC;
        if ((int)uVar10 < 1) {
          if ((int)local_8 < 7) {
            pDVar2 = (LPDWORD)pAVar5->field_0028;
            local_8 = st::pointer_boundary_cast<RecoveredRecord_006BFE70_3123BCE8 *>(DAT_00856878);
            if (local_18 < st::storage_bit_cast<int>(static_cast<uint32_t>((int)pDVar2 + (int)DAT_00856878))) {
              local_8 = (RecoveredRecord_006BFE70_3123BCE8 *)(local_18 - (int)pDVar2);
            }

            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_c = st::fn_006BFB90(*(HANDLE *)(*(int *)(pAVar5->field_001C + 4) + 0xc),pDVar2,
                                   g_lpBuffer_008568B0,(DWORD)local_8);
            pbVar14 = (byte *)pvVar4;
            if (local_c != 0) {
              return local_c;
            }
          }
          pAVar5->field_009C = (uint)*pbVar14;
          *(int *)&pAVar5->field_0xa0 = (int)*(short *)(pbVar14 + 1);
          *(int *)&pAVar5->field_0xa4 = (int)*(short *)(pbVar14 + 3);
          *(int *)&pAVar5->field_0xa8 = (int)*(short *)(pbVar14 + 5);
          iVar6 = pAVar5->field_009C;
          pbVar14 = pbVar14 + 7;
          if (6 < iVar6) {
            return 0xfffffffb;
          }
          local_10 = (int)*(short *)(&pAVar5->field_0x6e + iVar6 * 4);
          local_14 = (int)*(short *)(&pAVar5->field_0x70 + iVar6 * 4);
          local_8 = reinterpret_cast<RecoveredRecord_006BFE70_3123BCE8 *>(&local_8[-2].field_0x1);
          pAVar5->field_0028 = pAVar5->field_0028 + 7;
          pAVar5->field_00BC = (uint)*(ushort *)&pAVar5->field_0x58 * 2 + -0xc;
          *(undefined2 *)param_1 = *(undefined2 *)&pAVar5->field_0xa8;
LAB_006c0455:
          pAVar5->field_00C0 = pAVar5->field_00C0 + -1;
          pRVar13 = reinterpret_cast<RecoveredRecord_006BFE70_3123BCE8 *>(&param_1->field_0002);
          pAVar8 = reinterpret_cast<AnonShape_006BFE70_9EDC24A5 *>(&param_2->field_0x2);
        }
        else {
          if (uVar10 == (uint)*(ushort *)&pAVar5->field_0x58 * 2 - 0xc) {
            pAVar5->field_00BC = uVar10 - 2;
            *(undefined2 *)param_1 = *(undefined2 *)&pAVar5->field_0xa4;
            goto LAB_006c0455;
          }
          if ((uVar10 & 1) != 0) {
            if ((int)local_8 < 1) {
              pDVar2 = (LPDWORD)pAVar5->field_0028;
              local_8 = st::pointer_boundary_cast<RecoveredRecord_006BFE70_3123BCE8 *>(DAT_00856878);
              if (local_18 < st::storage_bit_cast<int>(static_cast<uint32_t>((int)pDVar2 + (int)DAT_00856878))) {
                local_8 = (RecoveredRecord_006BFE70_3123BCE8 *)(local_18 - (int)pDVar2);
              }

              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_c = st::fn_006BFB90(*(HANDLE *)(*(int *)(pAVar5->field_001C + 4) + 0xc),pDVar2,
                                     g_lpBuffer_008568B0,(DWORD)local_8);
              pbVar14 = (byte *)pvVar4;
              if (local_c != 0) {
                return local_c;
              }
            }
            uVar10 = *pbVar14 & 0xf;
            pbVar14 = pbVar14 + 1;
            if (7 < uVar10) {
              uVar10 = uVar10 - 0x10;
            }
            iVar6 = (*(int *)&pAVar5->field_0xa4 * local_10 + *(int *)&pAVar5->field_0xa8 * local_14
                    >> 8) + *(int *)&pAVar5->field_0xa0 * uVar10;
            if (iVar6 < 0x8000) {
              if (iVar6 < -0x8000) {
                iVar6 = -0x8000;
              }
            }
            else {
              iVar6 = 0x7fff;
            }
            iVar11 = *(int *)(PTR_DAT_007ede0c + uVar10 * 4) * *(int *)&pAVar5->field_0xa0 >> 8;
            *(int *)&pAVar5->field_0xa0 = iVar11;
            if (iVar11 < 0x10) {
              *(undefined4 *)&pAVar5->field_0xa0 = 0x10;
            }
            *(undefined4 *)&pAVar5->field_0xa8 = *(undefined4 *)&pAVar5->field_0xa4;
            local_8 = (RecoveredRecord_006BFE70_3123BCE8 *)((int)&local_8[-1].field_0002 + 1);
            *(int *)&pAVar5->field_0xa4 = iVar6;
            pAVar5->field_0028 = pAVar5->field_0028 + 1;
            *(short *)param_1 = (short)iVar6;
            param_1 = reinterpret_cast<RecoveredRecord_006BFE70_3123BCE8 *>(&param_1->field_0002);
            param_2 = reinterpret_cast<AnonShape_006BFE70_9EDC24A5 *>(reinterpret_cast<byte *>(param_2) + 0x2);
            pAVar5->field_00BC = pAVar5->field_00BC + -1;
            pAVar5->field_00C0 = pAVar5->field_00C0 + -1;
          }
          pRVar13 = param_1;
          pAVar8 = param_2;
          if ((int)param_2 < param_3) {
            while (pvVar4 = g_lpBuffer_008568B0, pRVar13 = param_1, pAVar8 = param_2,
                  0 < pAVar5->field_00BC) {
              if (pAVar5->field_00C0 < 1) {
                return local_c;
              }
              if ((int)local_8 < 1) {
                pDVar2 = (LPDWORD)pAVar5->field_0028;
                local_8 = st::pointer_boundary_cast<RecoveredRecord_006BFE70_3123BCE8 *>(DAT_00856878);
                if (local_18 < st::storage_bit_cast<int>(static_cast<uint32_t>((int)pDVar2 + (int)DAT_00856878))) {
                  local_8 = (RecoveredRecord_006BFE70_3123BCE8 *)(local_18 - (int)pDVar2);
                }

                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                local_c = st::fn_006BFB90(*(HANDLE *)(*(int *)(pAVar5->field_001C + 4) + 0xc),pDVar2,
                                       g_lpBuffer_008568B0,(DWORD)local_8);
                pbVar14 = (byte *)pvVar4;
                if (local_c != 0) {
                  return local_c;
                }
              }
              local_1c = *pbVar14 & 0xf;
              uVar10 = (uint)(*pbVar14 >> 4);
              if (7 < uVar10) {
                uVar10 = uVar10 - 0x10;
              }
              iVar6 = (*(int *)&pAVar5->field_0xa4 * local_10 +
                       *(int *)&pAVar5->field_0xa8 * local_14 >> 8) +
                      *(int *)&pAVar5->field_0xa0 * uVar10;
              if (iVar6 < 0x8000) {
                if (iVar6 < -0x8000) {
                  iVar6 = -0x8000;
                }
              }
              else {
                iVar6 = 0x7fff;
              }
              iVar11 = *(int *)(PTR_DAT_007ede0c + uVar10 * 4) * *(int *)&pAVar5->field_0xa0 >> 8;
              *(int *)&pAVar5->field_0xa0 = iVar11;
              if (iVar11 < 0x10) {
                *(undefined4 *)&pAVar5->field_0xa0 = 0x10;
              }
              uVar3 = *(undefined4 *)&pAVar5->field_0xa4;
              *(int *)&pAVar5->field_0xa4 = iVar6;
              *(undefined4 *)&pAVar5->field_0xa8 = uVar3;
              *(short *)param_1 = (short)iVar6;
              pRVar13 = reinterpret_cast<RecoveredRecord_006BFE70_3123BCE8 *>(&param_1->field_0002);
              iVar6 = pAVar5->field_00C0 + -1;
              pAVar5->field_00BC = pAVar5->field_00BC + -1;
              pAVar5->field_00C0 = iVar6;
              pAVar8 = reinterpret_cast<AnonShape_006BFE70_9EDC24A5 *>(&param_2->field_0x2);
              if ((param_3 <= (int)pAVar8) || (iVar6 < 1)) break;
              if (7 < local_1c) {
                local_1c = local_1c - 0x10;
              }
              iVar6 = (*(int *)&pAVar5->field_0xa4 * local_10 +
                       *(int *)&pAVar5->field_0xa8 * local_14 >> 8) +
                      *(int *)&pAVar5->field_0xa0 * local_1c;
              if (iVar6 < 0x8000) {
                if (iVar6 < -0x8000) {
                  iVar6 = -0x8000;
                }
              }
              else {
                iVar6 = 0x7fff;
              }
              iVar11 = *(int *)(PTR_DAT_007ede0c + local_1c * 4) * *(int *)&pAVar5->field_0xa0 >> 8;
              *(int *)&pAVar5->field_0xa0 = iVar11;
              if (iVar11 < 0x10) {
                *(undefined4 *)&pAVar5->field_0xa0 = 0x10;
              }
              pbVar14 = pbVar14 + 1;
              pAVar5->field_0028 = pAVar5->field_0028 + 1;
              *(int *)&pAVar5->field_0xa8 = *(int *)&pAVar5->field_0xa4;
              *(int *)&pAVar5->field_0xa4 = iVar6;
              *(short *)pRVar13 = (short)iVar6;
              local_8 = (RecoveredRecord_006BFE70_3123BCE8 *)((int)&local_8[-1].field_0002 + 1);
              param_1 = param_1 + 1;
              pAVar5->field_00BC = pAVar5->field_00BC + -1;
              param_2 = reinterpret_cast<AnonShape_006BFE70_9EDC24A5 *>(&param_2->field_0004);
              pAVar5->field_00C0 = pAVar5->field_00C0 + -1;
              pRVar13 = param_1;
              pAVar8 = param_2;
              if (param_3 <= (int)param_2) break;
            }
          }
        }
        param_2 = pAVar8;
        param_1 = pRVar13;
        if (pAVar5->field_00C0 < 1) {
          return local_c;
        }
        if (param_3 <= (int)param_2) {
          return local_c;
        }
      } while( true );
    }
  }
  return local_c;
}
