#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/006B.cpp

// 006B0020 FUN_006b0020
#line 1 "decomp/ST.exe/functions/006B0020/decomp.c"

void st::fn_006B0020(uint *param_1,int *param_2)

{
  uint *puVar1;

  if (param_2 != nullptr) {
    *param_2 = 0;
  }
  puVar1 = st::fn_006AAC70(param_1[3] * param_1[2] + 0x1c);
  if (puVar1 == nullptr) {
    return;
  }
  st::fn_006AFFC0(param_1,puVar1,param_2);
  return;
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

  pDVar1 = st::fn_006AE290((DArrayTy *)param_1,param_2[4],param_2[2],param_2[5]);
  if (pDVar1 == nullptr) {
    return nullptr;
  }
  pDVar1->flags = pDVar1->flags | *param_2;
  uVar2 = pDVar1->elementSize * param_2[3];
  pDVar1->count = param_2[3];
  puVar4 = param_2 + 7;
  puVar5 = pDVar1->data;
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

  pDVar1 = st::fn_006AE290((DArrayTy *)param_1,param_2[4],param_2[2],param_2[5]);
  if (pDVar1 == nullptr) {
    return nullptr;
  }
  pDVar1->flags = pDVar1->flags | *param_2 | 0x100;
  pDVar1->count = param_2[3];
  uVar2 = pDVar1->elementSize * pDVar1->count;
  pDVar1->growCallback = param_3;
  puVar5 = param_2 + 7;
  puVar6 = pDVar1->data;
  memmove(puVar6, puVar5, uVar2); /* compiler REP MOVS byte copy */
  iVar4 = pDVar1->capacity - pDVar1->count;
  if (iVar4 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
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

  if (0x1004 < (int)(g_resourceStringBufferOffset + 0x800)) {
    g_resourceStringBufferOffset = 0;
  }
  if (module == (HINSTANCE)0x0) {
    module = st::external_00000048((LPCSTR)0x0);
  }
  uVar1 = st::external_00000097(module,resourceId,g_resourceStringBuffer + g_resourceStringBufferOffset,0x800);
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
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079d880;
  puStack_10 = &st_image_0072D964;
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
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079d890;
  puStack_10 = &st_image_0072D964;
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
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079d8a0;
  puStack_10 = &st_image_0072D964;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  st::fn_006CEBE0(param_1,param_3,param_2,param_3,param_3,param_4,param_5);
  ExceptionList = local_14;
  return;
}

// 006B0460 FUN_006b0460
#line 4 "decomp/ST.exe/functions/006B0460/decomp.c"
undefined4 __fastcall st::fn_006B0460(int *param_1,int *param_2,int *param_3)

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
    return piVar1;
  }
  return nullptr;
}

// 006B0520 FUN_006b0520
#line 4 "decomp/ST.exe/functions/006B0520/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006B0A20 -> 006B0520 @ 006B0B2C

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006B0A20 -> 006B0520 @ 006B0B2C; FUN_006b0a20 parameter param_1 */

undefined4
st::fn_006B0520(AnonShape_GLOBAL_0080759C_9638EF10 *param_1,int param_2,UINT param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  byte *pbVar3;

  if (*(int *)&param_1->field_0x24 == 0x10) {
    if (*(int *)&param_1[1].field_0x8 == 0) {
      puVar1 = st::fn_006B04D0(0x200);
      *(undefined4 **)&param_1[1].field_0x8 = puVar1;
      if (puVar1 == nullptr) {
        return 0xfffffffe;
      }
    }
    if (0 < param_4) {
      iVar2 = param_3 * 2;
      pbVar3 = (byte *)(param_2 + 1);
      do {
        *(ushort *)(iVar2 + *(int *)&param_1[1].field_0x8) =
             (ushort)((int)((uint)pbVar3[-1] << 8) >> ((byte)param_1[1].field_0018 & 0x1f)) &
             (ushort)param_1[1].field_000C |
             (ushort)((int)((uint)pbVar3[1] << 8) >> ((byte)param_1[1].field_0020 & 0x1f)) &
             *(ushort *)&param_1[1].field_0x14 |
             (ushort)((int)((uint)*pbVar3 << 8) >> ((byte)param_1[1].field_001C & 0x1f)) &
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
        return 0xfffffffe;
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
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
bool st::fn_006B06A0(AnonShape_GLOBAL_0080759C_9638EF10 *param_1,LOGPALETTE *param_2,int param_3,
                 UINT param_4,int param_5)

{
  UINT iStart;
  int *piVar1;
  HDC pHVar2;
  BYTE *pBVar3;
  BYTE *pBVar4;
  HPALETTE pHVar5;
  BYTE BVar6;
  int iVar7;
  LOGPALETTE *pLVar8;
  WORD *pWVar9;
  tagLOGPALETTE **pptVar10;
  undefined4 *puVar11;
  tagLOGPALETTE *local_408;
  tagPALETTEENTRY *local_404;
  LOGPALETTE *pLVar8_mg0;

  if (*(HGDIOBJ *)param_1 != (HGDIOBJ)0x0) {
    st::external_000000A6(*(HGDIOBJ *)param_1);
    *(undefined4 *)param_1 = 0;
  }
  if (param_1->field_04B4 != (HPALETTE)0x0) {
    st::external_000000A6(param_1->field_04B4);
    param_1->field_04B4 = (HPALETTE)0x0;
  }
  pLVar8_mg0 = param_2;
  for (iVar7 = 0x101; iVar7 != 0; iVar7 = iVar7 + -1) {
    pLVar8_mg0->palVersion = 0;
    pLVar8_mg0->palNumEntries = 0;
    pLVar8_mg0 = (LOGPALETTE *)pLVar8_mg0->palPalEntry;
  }
  param_2->palVersion = 0x300;
  param_2->palNumEntries = 0x100;
  piVar1 = (int *)param_1->field_003C;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  if ((piVar1 == nullptr) ||
     (iVar7 = (**(code **)(*piVar1 + 0x10))(piVar1,0,0,0x100,param_2->palPalEntry), iVar7 != 0)) {
    pHVar2 = st::external_00000099((HWND)0x0);
    st::external_000000A8(pHVar2,0,0x100,param_2->palPalEntry);
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
      pLVar8 = (LOGPALETTE *)pLVar8[-1].palPalEntry;
    } while (iVar7 < 10);
  }
  if (0 < param_5) {
    pBVar3 = &param_2->palPalEntry[param_4].peBlue;
    pBVar4 = (BYTE *)(param_3 + 2);
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
  pHVar5 = st::external_000000A7(param_2);
  *(HPALETTE *)param_1 = pHVar5;
  if (pHVar5 != (HPALETTE)0x0) {
    pHVar5 = st::external_000000A7(param_2);
    param_1->field_04B4 = pHVar5;
    if (pHVar5 == (HPALETTE)0x0) {
      st::external_000000A6(*(HGDIOBJ *)param_1);
      *(undefined4 *)param_1 = 0;
      return false;
    }
    pptVar10 = &local_408;
    for (iVar7 = 0x101; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pptVar10 = *(tagLOGPALETTE **)param_2;
      param_2 = (LOGPALETTE *)param_2->palPalEntry;
      pptVar10 = pptVar10 + 1;
    }
    pHVar2 = st::external_00000099((HWND)0x0);
    if (0 < (int)param_4) {
      st::external_000000A8(pHVar2,0,param_4,(LPPALETTEENTRY)&local_404);
    }
    iStart = param_4 + param_5;
    if ((int)iStart < 0x100) {
      st::external_000000A8
                (pHVar2,iStart,(0x100 - param_4) - param_5,(LPPALETTEENTRY)(&local_404 + iStart));
    }
    st::external_00000098((HWND)0x0,pHVar2);
    if (*(undefined4 **)&param_1[1].field_0x24 != nullptr) {
      puVar11 = *(undefined4 **)&param_1[1].field_0x24;
      for (iVar7 = 0x2000; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 1;
      }
      memset((void *)(*(int *)&param_1[1].field_0x24 + 0x8000), 0, 0x8000); /* compiler bulk-zero initialization */
      pHVar5 = st::external_000000A7((LOGPALETTE *)&local_408);
      *(HPALETTE *)&param_1[1].field_0x28 = pHVar5;
      if (pHVar5 == (HPALETTE)0x0) {
        return false;
      }
    }
    iVar7 = st::fn_006B0520(param_1,(int)&local_404,0,0x100);
    return (bool)('\x01' - (iVar7 != 0));
  }
  return false;
}

// 006B08F0 FUN_006b08f0
#line 4 "decomp/ST.exe/functions/006B08F0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0042A860 -> 006B08F0 @ 0042A8D0 */

int st::fn_006B08F0(AnonShape_GLOBAL_0080759C_9638EF10 *param_1,int param_2,UINT param_3,int param_4)

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
      if (0xf6 < (int)(param_3 + param_4)) {
        param_4 = 0xf6 - param_3;
      }
    }
    if ((param_2 != 0) && (0 < param_4)) {
      if ((*(uint *)&param_1->field_0x8 & 0x4000000) != 0) {
        st::external_00000018((LPCRITICAL_SECTION)&param_1[1].field_0x38);
      }
      bVar2 = st::fn_006B06A0(param_1,local_40c,param_2 + iVar3 * 4,param_3,param_4);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (CONCAT31(extraout_var,bVar2) == 0) {
        iVar3 = -0xfd;
      }
      else {
        piVar1 = (int *)param_1->field_003C;
        iVar3 = local_8;
        if (piVar1 != nullptr) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar3 = (**(code **)(*piVar1 + 0x18))(piVar1,0,0,0x100,local_40c[0].palPalEntry);
          local_8 = iVar3;
        }
      }
      if ((*(uint *)&param_1->field_0x8 & 0x4000000) != 0) {
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

int st::fn_006B0A20(AnonShape_GLOBAL_0080759C_9638EF10 *param_1,int param_2,UINT iStart,UINT param_4,
                int param_5)

{
  int *piVar1;
  int iVar2;
  BYTE *pBVar3;
  UINT UVar4;
  int iVar5;
  PALETTEENTRY *pPVar6;
  PALETTEENTRY *pPVar7;
  undefined4 *puVar8;
  PALETTEENTRY local_404 [256];

  if (param_1 != nullptr) {
    iVar2 = 0;
    if (((*(uint *)&param_1->field_0x8 & 0x20000001) == 0) && (*(int *)&param_1->field_0x24 < 9)) {
      if ((int)iStart < 10) {
        iVar2 = 10 - iStart;
        iStart = 10;
        param_4 = param_4 - iVar2;
      }
      if (0xf6 < (int)(iStart + param_4)) {
        param_4 = 0xf6 - iStart;
      }
    }
    if ((param_2 != 0) && (0 < (int)param_4)) {
      pPVar6 = (PALETTEENTRY *)(param_2 + iVar2 * 4);
      pPVar7 = local_404;
      for (UVar4 = param_4; UVar4 != 0; UVar4 = UVar4 - 1) {
        *pPVar7 = *pPVar6;
        pPVar6 = pPVar6 + 1;
        pPVar7 = pPVar7 + 1;
      }
      pBVar3 = &local_404[0].peFlags;
      UVar4 = param_4;
      do {
        *pBVar3 = *pBVar3 | 4;
        pBVar3 = pBVar3 + 4;
        UVar4 = UVar4 - 1;
      } while (UVar4 != 0);
      if (param_5 != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*param_1->field_0030 + 0x58))(param_1->field_0030,1,0);
      }
      piVar1 = (int *)param_1->field_003C;
      if (piVar1 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar1 + 0x18))(piVar1,0,iStart,param_4,local_404);
      }
      st::external_000000A9(*(HPALETTE *)param_1,iStart,param_4,local_404);
      st::external_000000A9(param_1->field_04B4,iStart,param_4,local_404);
      iVar2 = st::fn_006B0520(param_1,(int)local_404,iStart,param_4);
      if (*(undefined4 **)&param_1[1].field_0x24 != nullptr) {
        puVar8 = *(undefined4 **)&param_1[1].field_0x24;
        for (iVar5 = 0x2000; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = 0xffffffff;
          puVar8 = puVar8 + 1;
        }
        memset((void *)(*(int *)&param_1[1].field_0x24 + 0x8000), 0, 0x8000); /* compiler bulk-zero initialization */
        st::external_000000A9(*(HPALETTE *)&param_1[1].field_0x28,iStart,param_4,local_404);
      }
      if (((iVar2 != -0x7789fdc4) && (iVar2 != -0x7789fdb3)) && (iVar2 != -0x7fffbfff)) {
        return iVar2;
      }
    }
  }
  return 0;
}

// 006B0BA0 FUN_006b0ba0
#line 4 "decomp/ST.exe/functions/006B0BA0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00709470 -> 006B0BA0 @ 00709566;
   /SubmarineTitans/Recovered/LibraryContexts/ST3DSMAPContext+0x4 */

undefined4
st::fn_006B0BA0(AnonPointee_ST3DSMAPContext_0004 *param_1,undefined4 param_2,undefined4 param_3,
            undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;

  if ((param_1 != nullptr) &&
     (piVar1 = (int *)param_1[1].field_001C, piVar1 != nullptr)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
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
  undefined4 uVar2;
  HDC hdc;
  tagPALETTEENTRY *local_404;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0x3c), piVar1 != nullptr)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,0,iStart,cEntries,param_2);
    hdc = st::external_00000099((HWND)0x0);
    st::external_000000A8(hdc,iStart,cEntries,(LPPALETTEENTRY)&local_404);
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

undefined4 st::fn_006B0CD0(AnonShape_00413AF0_B6B4EE9A *param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
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

// 006B0D60 FUN_006b0d60
#line 4 "decomp/ST.exe/functions/006B0D60/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=29, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_006B0D60(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;

  iVar3 = 0;
  piVar2 = (int *)&stack0x00000008;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  do {
    iVar1 = *piVar2;
    if (iVar1 < 0) {
      return;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
    param_1[(int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5] =
         param_1[(int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5] | 1 << ((byte)iVar1 & 0x1f);
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
    param_1[(int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5] =
         param_1[(int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5] | 1 << ((byte)param_2 & 0x1f);
  }
  return;
}

// 006B0E20 FUN_006b0e20
#line 4 "decomp/ST.exe/functions/006B0E20/decomp.c"
void __cdecl st::fn_006B0E20(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;

  iVar3 = 0;
  piVar4 = (int *)&stack0x00000008;
  do {
    iVar2 = *piVar4;
    if (iVar2 < 0) {
      return;
    }
    puVar1 = (uint *)(param_1 + ((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
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
    puVar1 = (uint *)(param_1 + ((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  }
  return;
}

// 006B0ED0 FUN_006b0ed0
#line 4 "decomp/ST.exe/functions/006B0ED0/decomp.c"
void __cdecl st::fn_006B0ED0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;

  iVar3 = 0;
  piVar4 = (int *)&stack0x00000008;
  do {
    iVar2 = *piVar4;
    if (iVar2 < 0) {
      return;
    }
    puVar1 = (uint *)(param_1 + ((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
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
    puVar1 = (uint *)(param_1 + ((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
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
undefined4 __cdecl st::fn_006B0FD0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;

  iVar3 = 0;
  piVar2 = (int *)&stack0x00000008;
  while( true ) {
    iVar1 = *piVar2;
    if (iVar1 < 0) {
      return 1;
    }
    if ((*(uint *)(param_1 + ((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) * 4) &
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
    if ((*(uint *)(param_1 + ((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4) &
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
  int iVar1;
  int iVar2;
  int *piVar3;
  uint local_14 [4];

  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  iVar2 = 0;
  piVar3 = (int *)&stack0x00000008;
  do {
    iVar1 = *piVar3;
    if (iVar1 < 0) break;
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + 1;
    local_14[(int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5] =
         local_14[(int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5] | 1 << ((byte)iVar1 & 0x1f);
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
    local_14[(int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5] =
         local_14[(int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5] | 1 << ((byte)param_2 & 0x1f);
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
undefined4 __cdecl st::fn_006B12A8(int param_1,int param_2)

{
  return (int)(((longlong)param_1 * (longlong)DAT_007eda8c) / (longlong)param_2);
}

// 006B12BC FUN_006b12bc
#line 4 "decomp/ST.exe/functions/006B12BC/decomp.c"
undefined4 __cdecl st::fn_006B12BC(int param_1,int param_2,int param_3)

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
undefined4 __cdecl st::fn_006B12DC(int param_1,int param_2)

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
  undefined4 uVar2;
  int *piVar3;

  if ((param_1 != nullptr) && (iVar1 = *param_1, iVar1 != 0)) {
    if ((*(uint *)(iVar1 + 8) & 0x4000000) != 0) {
      st::external_00000018((LPCRITICAL_SECTION)(iVar1 + 0x4f0));
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x4b0) != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0x40);
      *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x44);
      *(undefined4 *)(*param_1 + 0x44) = uVar2;
      *(undefined4 *)(*param_1 + 0x4b0) = 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    piVar3 = *(int **)(*param_1 + 0x44);
    if (piVar3 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar3 + 8))(piVar3);
      *(undefined4 *)(*param_1 + 0x44) = 0;
    }
    if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
      st::external_00000019((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
  }
  return;
}

// 006B1940 FUN_006b1940
#line 4 "decomp/ST.exe/functions/006B1940/decomp.c"
undefined4 st::fn_006B1940(int param_1)

{
  undefined4 uVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  return uVar1;
}

// 006B1960 FUN_006b1960
#line 4 "decomp/ST.exe/functions/006B1960/decomp.c"
undefined4 st::fn_006B1960(int param_1)

{
  undefined4 uVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d0) = 1;
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
      uVar4 = st::fn_006CEE10((int)param_1,(int)pAVar1);
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
      uVar4 = st::fn_006CEE10((int)param_1,(int)pAVar1);
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

uint st::fn_006B1C80(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;

  uVar2 = 0xfffffffe;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_2 < *(uint *)(param_1 + 0x1a0)) &&
     (puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4), (*puVar1 & 0x8000) != 0)) {
    uVar2 = puVar1[0x13];
  }
  return uVar2;
}

// 006B1CC0 FUN_006b1cc0
#line 4 "decomp/ST.exe/functions/006B1CC0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0056ADC0 -> 006B1CC0 @ 0056B2EF; data at 008075A8 | 0056ADC0 -> 006B1CC0 @ 0056B32D;
   data at 008075A8 | 0056D740 -> 006B1CC0 @ 0056D9FA; data at 008075A8 | 0056D740 -> 006B1CC0 @
   0056DA39; data at 008075A8 */

void st::fn_006B1CC0(DDXContext_008075A8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;

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

// 006B1D20 FUN_006b1d20
#line 4 "decomp/ST.exe/functions/006B1D20/decomp.c"
void st::fn_006B1D20(int param_1,int param_2,undefined4 *param_3)

{
  if (param_2 < 0) {
    param_2 = 10;
  }
  *param_3 = *(undefined4 *)(param_1 + 0x11c + param_2 * 8);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  param_3[1] = *(undefined4 *)(param_1 + 0x120 + param_2 * 8);
  return;
}

// 006B2020 FUN_006b2020
#line 1 "decomp/ST.exe/functions/006B2020/decomp.c"

void st::fn_006B2020(AnonShape_006B2020_F949DD3E *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  AnonNested_006B2020_01A0_B4F1EFF3 *pAVar7;
  int local_EAX_79;
  int uVar7;
  int uVar8;
  int *piVar8;
  int iVar9;

  iVar2 = param_1->field_01AC;
  if ((param_2 < param_1->field_01A0) &&
     (puVar3 = *(uint **)(param_1->field_01B0 + param_2 * 4), (*puVar3 & 0x80000) == 0)) {
    uVar4 = puVar3[0x12];
    if ((int)param_3 < (int)puVar3[0x11]) {
      puVar3[0x11] = param_3;
      local_EAX_79 = st::fn_006CEE10((int)param_1,(int)puVar3);
      puVar3[0x14] = local_EAX_79;
      if ((0 < (int)uVar4) && ((int)param_3 < *(int *)(*(int *)(iVar2 + -4 + uVar4 * 4) + 0x44))) {
        if ((*puVar3 & 0x4000) == 0) {
          iVar9 = uVar4 - 1;
          if (-1 < iVar9) {
            piVar8 = (int *)(iVar2 + iVar9 * 4);
            do {
              puVar6 = (uint *)*piVar8;
              if (((int)puVar6[0x11] <= (int)param_3) &&
                 ((param_3 != puVar6[0x11] || ((*puVar6 & 0x4000) == 0)))) break;
              uVar4 = iVar9 + 1;
              piVar8[1] = (int)puVar6;
              iVar9 = iVar9 + -1;
              piVar8 = piVar8 + -1;
              puVar6[0x12] = uVar4;
            } while (-1 < iVar9);
          }
        }
        else {
          iVar9 = uVar4 - 1;
          if (-1 < iVar9) {
            piVar8 = (int *)(iVar2 + iVar9 * 4);
            do {
              iVar5 = *piVar8;
              if (*(int *)(iVar5 + 0x44) <= (int)param_3) break;
              iVar1 = iVar9 + 1;
              piVar8[1] = iVar5;
              iVar9 = iVar9 + -1;
              piVar8 = piVar8 + -1;
              *(int *)(iVar5 + 0x48) = iVar1;
            } while (-1 < iVar9);
          }
        }
        *(uint **)(iVar2 + (iVar9 + 1U) * 4) = puVar3;
        puVar3[0x12] = iVar9 + 1U;
        if ((*puVar3 & 0x20) != 0) {
          param_1->field_01B4 = 1;
          return;
        }
      }
    }
    else if ((int)puVar3[0x11] < (int)param_3) {
      puVar3[0x11] = param_3;
      uVar7 = st::fn_006CEE10((int)param_1,(int)puVar3);
      puVar3[0x14] = uVar7;
      pAVar7 = param_1->field_01A0;
      if (((int)uVar4 < (int)((int)&pAVar7[-1].field_0048 + 3)) &&
         (iVar9 = uVar4 + 1, *(int *)(*(int *)(iVar2 + 4 + uVar4 * 4) + 0x44) < (int)param_3)) {
        if ((*puVar3 & 0x4000) == 0) {
          if (iVar9 < (int)pAVar7) {
            piVar8 = (int *)(iVar2 + iVar9 * 4);
            do {
              puVar6 = (uint *)*piVar8;
              if (((int)param_3 <= (int)puVar6[0x11]) &&
                 ((param_3 != puVar6[0x11] || ((*puVar6 & 0x4000) == 0)))) break;
              piVar8[-1] = (int)puVar6;
              puVar6[0x12] = iVar9 - 1;
              iVar9 = iVar9 + 1;
              piVar8 = piVar8 + 1;
            } while (iVar9 < (int)param_1->field_01A0);
          }
        }
        else if (iVar9 < (int)pAVar7) {
          piVar8 = (int *)(iVar2 + iVar9 * 4);
          do {
            iVar5 = *piVar8;
            if ((int)param_3 <= *(int *)(iVar5 + 0x44)) break;
            piVar8[-1] = iVar5;
            *(int *)(iVar5 + 0x48) = iVar9 + -1;
            iVar9 = iVar9 + 1;
            piVar8 = piVar8 + 1;
          } while (iVar9 < (int)param_1->field_01A0);
        }
        *(uint **)(iVar2 + (iVar9 - 1U) * 4) = puVar3;
        puVar3[0x12] = iVar9 - 1U;
        if ((*puVar3 & 0x20) != 0) {
          param_1->field_01B4 = 1;
          return;
        }
      }
    }
    else {
      uVar8 = st::fn_006CEE10((int)param_1,(int)puVar3);
      puVar3[0x14] = uVar8;
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

void st::fn_006B23A0(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_2 < *(uint *)(param_1 + 0x1a0)) &&
     (puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4), (*puVar1 & 0xc000) == 0xc000)) {
    puVar1[0x33] = param_3;
    st::fn_006B23E0(param_1,puVar1);
  }
  return;
}

// 006B23E0 FUN_006b23e0
#line 4 "decomp/ST.exe/functions/006B23E0/decomp.c"
void st::fn_006B23E0(int param_1,uint *param_2)

{
  if (((byte)*param_2 & 0x21) == 0x21) {
    *param_2 = *param_2 | 6;
    *(undefined4 *)(param_1 + 0x1b4) = 1;
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
    st::fn_006B23E0((int)param_1,&pDVar1->flags);
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

// 006B2480 FUN_006b2480
#line 1 "decomp/ST.exe/functions/006B2480/decomp.c"

uint st::fn_006B2480(int *param_1,uint param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  uVar3 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(*param_1 + 0x20) != 0x10) {
    if (param_2 < (uint)param_1[0x68]) {
      puVar1 = *(uint **)(param_1[0x6c] + param_2 * 4);
      uVar2 = *puVar1;
      if ((uVar2 & 0xc000) == 0x8000) {
        uVar3 = uVar2 >> 8 & 1;
        *puVar1 = uVar2 | 0x2000;
        if (param_3 == 0) {
          uVar2 = uVar2 & 0xfffffeff | 0x2000;
        }
        else {
          uVar2 = uVar2 | 0x2100;
        }
        *puVar1 = uVar2;
        st::fn_006B23E0((int)param_1,puVar1);
        puVar1[0x18] = param_5;
        puVar1[0x19] = param_6;
        puVar1[0x17] = param_4;
        if ((((*puVar1 & 0x4000000) != 0) && (puVar1[0x34] != 0)) &&
           (iVar4 = 0, 0 < (int)puVar1[0x30])) {
          do {
            uVar2 = *(uint *)(puVar1[0x34] + iVar4 * 4);
            if (-1 < (int)uVar2) {
              st::fn_006B2480(param_1,uVar2,param_3,param_4,param_5,param_6);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)puVar1[0x30]);
        }
      }
    }
    return uVar3;
  }
  return 0;
}

// 006B2560 FUN_006b2560
#line 1 "decomp/ST.exe/functions/006B2560/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 006B2560 returns return of FUN_006b2480 @ 006B257F */

uint st::fn_006B2560(int *param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;

  uVar1 = st::fn_006B2480(param_1,param_2,param_3,param_4,param_5,1);
  return uVar1;
}

// 006B2590 FUN_006b2590
#line 1 "decomp/ST.exe/functions/006B2590/decomp.c"

uint st::fn_006B2590(int *param_1,uint param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  uVar3 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(*param_1 + 0x20) != 0x10) {
    if (param_2 < (uint)param_1[0x68]) {
      puVar1 = *(uint **)(param_1[0x6c] + param_2 * 4);
      uVar2 = *puVar1;
      if ((uVar2 & 0xc000) == 0x8000) {
        uVar3 = uVar2 >> 0xc & 1;
        if (param_3 == 0) {
          uVar2 = uVar2 & 0xffffefff;
        }
        else {
          uVar2 = uVar2 | 0x1000;
        }
        *puVar1 = uVar2;
        st::fn_006B23E0((int)param_1,puVar1);
        puVar1[0x16] = param_4;
        if ((((*puVar1 & 0x4000000) != 0) && (puVar1[0x34] != 0)) &&
           (iVar4 = 0, 0 < (int)puVar1[0x30])) {
          do {
            uVar2 = *(uint *)(puVar1[0x34] + iVar4 * 4);
            if (-1 < (int)uVar2) {
              st::fn_006B2590(param_1,uVar2,param_3,param_4);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)puVar1[0x30]);
        }
      }
    }
    return uVar3;
  }
  return 0;
}

// 006B2660 FUN_006b2660
#line 1 "decomp/ST.exe/functions/006B2660/decomp.c"

uint st::fn_006B2660(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  uVar2 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (param_2 < *(uint *)(param_1 + 0x1a0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4);
    uVar3 = *puVar1;
    if ((uVar3 & 0xc000) == 0x8000) {
      uVar2 = uVar3 >> 0x12 & 1;
      if (param_3 == 0) {
        uVar3 = uVar3 & 0xfffbffff;
      }
      else {
        uVar3 = uVar3 | 0x40000;
      }
      *puVar1 = uVar3;
      st::fn_006B23E0(param_1,puVar1);
      if ((((*puVar1 & 0x4000000) != 0) && (puVar1[0x34] != 0)) &&
         (iVar4 = 0, 0 < (int)puVar1[0x30])) {
        do {
          uVar3 = *(uint *)(puVar1[0x34] + iVar4 * 4);
          if (-1 < (int)uVar3) {
            st::fn_006B2660(param_1,uVar3,param_3);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)puVar1[0x30]);
      }
    }
  }
  return uVar2;
}

// 006B2710 FUN_006b2710
#line 1 "decomp/ST.exe/functions/006B2710/decomp.c"

void st::fn_006B2710(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_2 < *(uint *)(param_1 + 0x1a0)) &&
     (puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4), (*puVar1 & 0xc000) == 0x8000)) {
    puVar1[0x2e] = param_3;
    puVar1[0x2f] = param_4;
    st::fn_006B23E0(param_1,puVar1);
    if (((*puVar1 & 0x4000000) != 0) && (puVar1[0x34] != 0)) {
      uVar2 = puVar1[0x30];
      iVar4 = 0;
      if (0 < (int)uVar2) {
        do {
          uVar3 = *(uint *)(puVar1[0x34] + iVar4 * 4);
          if (-1 < (int)uVar3) {
            st::fn_006B2710(param_1,uVar3,param_3,param_4);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar2);
      }
    }
  }
  return;
}

// 006B27B0 FUN_006b27b0
#line 1 "decomp/ST.exe/functions/006B27B0/decomp.c"

void st::fn_006B27B0(int param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_2 < *(uint *)(param_1 + 0x1a0)) &&
     (puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4), (*puVar1 & 0xc000) == 0x8000)) {
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
   008075A8 */

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
    st::fn_006B23E0((int)param_1,&pDVar1->flags);
  }
  return;
}

// 006B2850 FUN_006b2850
#line 1 "decomp/ST.exe/functions/006B2850/decomp.c"

uint st::fn_006B2850(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;

  uVar3 = 1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (param_2 < *(uint *)(param_1 + 0x1a0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4);
    uVar2 = *puVar1;
    if ((uVar2 & 0xc000) == 0xc000) {
      uVar3 = ~uVar2 >> 0x11 & 1;
      *puVar1 = uVar2 & 0xfffdffff;
      if (param_3 == 0) {
        *puVar1 = uVar2 & 0xfffdffff | 0x20000;
      }
      st::fn_006B23E0(param_1,puVar1);
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
      st::fn_006B23E0((int)param_1,&pDVar1->flags);
    }
  }
  return bVar3;
}

// 006B3020 FUN_006b3020
#line 1 "decomp/ST.exe/functions/006B3020/decomp.c"

void st::fn_006B3020(int param_1,uint param_2,uint param_3)

{
  st::fn_006B2020((AnonShape_006B2020_F949DD3E *)param_1,param_2,param_3);
  return;
}

// 006B3040 FUN_006b3040
#line 4 "decomp/ST.exe/functions/006B3040/decomp.c"
undefined4 st::fn_006B3040(int param_1,uint param_2)

{
  undefined4 uVar1;

  uVar1 = 0xffffffff;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (param_2 < *(uint *)(param_1 + 0x1a0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1b0) + param_2 * 4) + 0x44);
  }
  return uVar1;
}

// 006B3070 FUN_006b3070
#line 1 "decomp/ST.exe/functions/006B3070/decomp.c"

void st::fn_006B3070(AnonShape_006B2020_F949DD3E *param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;

  if (param_4 < 0) {
    if (((param_2 < param_1->field_01A0) &&
        (puVar1 = *(uint **)(param_1->field_01B0 + param_2 * 4), (*puVar1 & 0x4008000) == 0x4008000)
        ) && (uVar2 = *(uint *)(puVar1[0x34] + param_3 * 4), -1 < (int)uVar2)) {
      st::fn_006B2020(param_1,uVar2,-param_4);
    }
  }
  return;
}

// 006B30D0 FUN_006b30d0
#line 4 "decomp/ST.exe/functions/006B30D0/decomp.c"
undefined4 st::fn_006B30D0(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;

  uVar3 = 0xffffffff;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((param_2 < *(uint *)(param_1 + 0x1a0)) &&
      (puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4),
      (*puVar1 & 0x4008000) == 0x4008000)) &&
     (uVar2 = *(uint *)(puVar1[0x34] + param_3 * 4), -1 < (int)uVar2)) {
    uVar3 = st::fn_006B3040(param_1,uVar2);
  }
  return uVar3;
}

// 006B3120 FUN_006b3120
#line 4 "decomp/ST.exe/functions/006B3120/decomp.c"
int st::fn_006B3120(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int local_24 [3];
  uint local_18;
  undefined4 local_14;
  RecoveredSourceFamily_dibcopy *local_10;
  AnonShape_006D86E0_D6D32C07 *local_c;
  int local_8;

  puVar4 = param_2;
  puVar3 = param_1;
  iVar7 = 0;
  local_c = nullptr;
  local_10 = nullptr;
  local_8 = 0;
  if (param_2[0x33] != 0) {
    param_1[0x6d] = 1;
    uVar1 = *param_2;
    if ((uVar1 & 0x60004000) == 0) {
      param_2[8] = 0xffffffff;
      param_2[9] = 0xffffffff;
      *param_2 = uVar1 | 0x24;
    }
    else {
      *param_2 = uVar1 | 0x20;
      if ((((uVar1 & 0x40000001) != 0x40000001) || (param_2[10] != param_2[6])) ||
         (param_2[0xb] != param_2[7])) {
        *param_2 = STReplaceLowByte((uint32_t)(uVar1), (uint8_t)((char)(uVar1 | 0x20))) | 4;
      }
      param_2[10] = param_2[6];
      param_2[0xb] = param_2[7];
    }
    if (((*param_2 & 0x4000000) != 0) && (param_2[0x34] != 0)) {
      uVar1 = param_2[0x30];
      psVar5 = (short *)(param_2[0x33] + param_2[0x31] * uVar1 * 10);
      if (0 < (int)uVar1) {
        do {
          uVar2 = *(uint *)(param_2[0x34] + iVar7 * 4);
          if (-1 < (int)uVar2) {
            local_8 = st::fn_006B3640
                                ((int *)param_1,uVar2,param_2[0x31],param_2[6] + (int)*psVar5,
                                 (int)psVar5[1] + param_2[7]);
            if (local_8 != 0) {
              return local_8;
            }
            iVar6 = st::fn_006B33F0((DDXContext_008075A8 *)param_1,*(uint *)(param_2[0x34] + iVar7 * 4)
                                );
            if ((iVar6 == 0) &&
               (local_8 = st::fn_006B3430
                                    ((int *)param_1,*(uint *)(param_2[0x34] + iVar7 * 4)),
               local_8 != 0)) {
              return local_8;
            }
          }
          psVar5 = psVar5 + 5;
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar1);
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (((param_2[0xc] != 0) && (param_2[0xd] != 0)) &&
       (uVar1 = *param_2, *param_2 = uVar1 | 2, (uVar1 & 0x4200) == 0)) {
      st::fn_006CF950(param_2);
      uVar1 = *param_1;
      if ((*(uint *)(uVar1 + 0xc) & 0x1100) != 0x100) {
        local_24[2] = param_2[0xc];
        local_24[1] = 0;
        local_24[0] = 0;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = nullptr;
        local_18 = puVar4[0xd];
        if ((*puVar4 & 0x60000000) == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = *(uint **)puVar4[0x33];
          if ((*puVar4 & 0xc0000000) != 0) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = (uint *)((undefined4 *)puVar4[0x33])[1];
          }
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (uint *)puVar4[0x33];
        }
        if ((*(uint *)(uVar1 + 8) & 0x4000000) != 0) {
          st::external_00000018((LPCRITICAL_SECTION)(uVar1 + 0x4f0));
        }
        uVar1 = *puVar3;
        iVar7 = 0;
        local_14 = *(undefined4 *)(uVar1 + 0x40);
        *(undefined4 *)(uVar1 + 0x40) = *(undefined4 *)(uVar1 + 0x44);
        *(undefined4 *)(*puVar3 + 0x44) = local_14;
        local_c = nullptr;
        if ((*puVar4 & 0xa0001000) == 0) {
          do {
            local_8 = st::fn_006BBE40(*(int **)(*puVar3 + 0x44),(uint *)&local_c,(int *)&local_10,0);
            if (local_8 == 0) goto LAB_006b3351;
            if (local_8 != -0x7789fe3e) goto LAB_006b334d;
            st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)*puVar3);
            st::fn_006CEE60((int)puVar3);
            iVar7 = iVar7 + 1;
          } while (iVar7 < 2);
        }
        else {
LAB_006b334d:
          if (local_8 == 0) {
LAB_006b3351:
            iVar7 = st::fn_006CEE10((int)puVar3,(int)puVar4);
            local_8 = st::fn_006CEF60((int *)puVar3,local_c,local_10,(int)puVar4,
                                   (AnonShape_006D86E0_768BB816 *)param_1,(char *)param_2,puVar4[10]
                                   ,puVar4[0xb],local_24,0,iVar7,*puVar4 & 0xff000000,
                                   nullptr);
            if (local_c != nullptr) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(**(int **)(*puVar3 + 0x44) + 0x80))(*(int **)(*puVar3 + 0x44),0);
            }
          }
          if ((local_8 == -0x7789ff60) || (local_8 == -0x7789fe52)) {
            local_8 = 0;
          }
        }
        *(undefined4 *)(*puVar3 + 0x44) = *(undefined4 *)(*puVar3 + 0x40);
        *(undefined4 *)(*puVar3 + 0x40) = local_14;
        if ((*(uint *)(*puVar3 + 8) & 0x4000000) != 0) {
          st::external_00000019((LPCRITICAL_SECTION)(*puVar3 + 0x4f0));
        }
      }
    }
  }
  return local_8;
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
    uVar1 = (uint)((param_1->entries_01B0[param_2]->flags & 0x8020) == 0x8020);
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
        st::external_00000018((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
        st::fn_006B23E0((int)param_1,puVar1);
        st::external_00000019((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
        return 0;
      }
      st::fn_006B23E0((int)param_1,puVar1);
    }
  }
  return 0;
}

// 006B3930 FUN_006b3930
#line 1 "decomp/ST.exe/functions/006B3930/decomp.c"

bool st::fn_006B3930(int param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;

  param_3[3] = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (param_2 < *(uint *)(param_1 + 0x1a0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4);
    if ((*puVar1 & 3) != 0) {
      if ((*puVar1 & 2) == 0) {
        puVar4 = puVar1 + 1;
      }
      else {
        st::fn_006CF950(puVar1);
        puVar4 = puVar1 + 6;
      }
      local_14 = *puVar4;
      local_10 = puVar4[1];
      local_c = puVar4[2];
      local_8 = puVar4[3];
      iVar2 = st::fn_006CEE10(param_1,(int)puVar1);
      iVar3 = iVar2 * 0x10 + param_1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_24 = *(int *)(iVar2 * 0x10 + 0x14 + param_1) - *(int *)(param_1 + 0x11c + iVar2 * 8);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_20 = *(int *)(iVar3 + 0x18) - *(int *)(param_1 + 0x120 + iVar2 * 8);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_1c = *(int *)(iVar3 + 0x1c) - *(int *)(param_1 + 0x11c + iVar2 * 8);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_18 = *(int *)((iVar2 + 2) * 0x10 + param_1) - *(int *)(param_1 + 0x120 + iVar2 * 8);
      if ((int)local_c < 0) {
        local_14 = local_14 + local_c;
        local_c = -local_c;
      }
      if ((int)local_8 < 0) {
        local_10 = local_10 + local_8;
        local_8 = -local_8;
      }
      iVar3 = st::fn_006CFEB0(param_3,(int *)&local_14,&local_24);
      return iVar3 != 0;
    }
  }
  return false;
}

// 006B3A40 FUN_006b3a40
#line 1 "decomp/ST.exe/functions/006B3A40/decomp.c"

void st::fn_006B3A40(int param_1,uint param_2,uint *param_3)

{
  uint *puVar1;

  param_3[3] = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_2 < *(uint *)(param_1 + 0x1a0)) &&
     (puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4), (*puVar1 & 0x8020) == 0x8020)) {
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

uint st::fn_006B3AB0(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;

  uVar2 = 0xffffffff;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_2 < *(uint *)(param_1 + 0x1a0)) &&
     (puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4), (*puVar1 & 0x8000) != 0)) {
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
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
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
  iVar1 = st::fn_006B4FA0((int *)param_2);
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
    iVar2 = st::fn_006CFEB0(&local_14,&local_14,(int *)(&param_1->field_0x14 + iVar2 * 0x10));
    if (iVar2 != 0) {
      iVar2 = param_1->field_01F4 + 7;
      pbVar1 = (byte *)(((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) * param_3 + param_1->field_0210 +
                       ((int)(param_2 ^ 7) >> 3));
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
    iVar2 = st::fn_006CFEB0(&local_14,&local_14,(int *)(&param_1->field_0x14 + iVar2 * 0x10));
    if (iVar2 != 0) {
      iVar2 = param_1->field_01F4 + 7;
      pbVar1 = (byte *)(((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) * param_3 + param_1->field_0220 +
                       ((int)(param_2 ^ 7) >> 3));
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
undefined4 st::fn_006B4110(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(param_1 + 0x1dc);
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
  undefined1 *puVar1;
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
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d8b0;
  puStack_10 = &st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffa0;
  if ((0 < param_5) && (0 < param_6)) {
    ExceptionList = &local_14;
    puVar1 = &stack0xffffffa0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == 0) {
      ExceptionList = &local_14;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = st::fn_006B4FA0((int *)param_1);
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
    BVar2 = st::external_0000009A(&local_54,&local_3c,&local_2c);
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
undefined4 st::fn_006B4B20(int *param_1,AnonShape_006B4B20_3D4F4412 *param_2,int param_3,byte param_4)

{
  byte bVar1;
  byte bVar2;
  AnonShape_006B4B20_3D4F4412 *pAVar3;
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
  AnonShape_006B4B20_3D4F4412 *pAVar16;
  byte *pbVar17;
  int iVar18;
  byte *pbVar19;
  bool bVar20;
  short *local_3c;
  int local_34;
  byte *local_30;
  AnonShape_006B4B20_3D4F4412 *local_2c;
  int local_20;
  int local_1c;
  uint local_14;
  int local_10;
  int local_c;
  AnonShape_006B4B20_3D4F4412 *pAVar16_mg0;

  *param_1 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_3 == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = st::fn_006B4FA0((int *)param_2);
  }
  pAVar3 = (AnonShape_006B4B20_3D4F4412 *)param_2->field_0004;
  uVar4 = param_2->field_0008;
  uVar15 = (uint)param_2->field_000E * (int)pAVar3 + 0x1f >> 3 & 0x1ffffffc;
  puVar5 = st::fn_006AAC70((int)((int)&pAVar3->field_0x1 * uVar4 * 3) / 2 + 0x16);
  if (puVar5 == nullptr) {
    return 0xfffffffe;
  }
  pbVar6 = (byte *)((uVar4 - 1) * uVar15 + param_3);
  pbVar14 = (byte *)((int)puVar5 + 0x16);
  local_1c = -1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_2 = nullptr;
  local_20 = 0;
  local_14 = 0;
  iVar12 = 0;
  pAVar16_mg0 = nullptr;
  local_2c = pAVar3;
  if (0 < (int)uVar4) {
    do {
      pAVar16 = nullptr;
      while( true ) {
        bVar1 = *pbVar6;
        while (bVar1 == param_4) {
          if ((int)pAVar3 <= (int)pAVar16) goto LAB_006b4c1b;
          pbVar6 = pbVar6 + 1;
          pAVar16 = (AnonShape_006B4B20_3D4F4412 *)&pAVar16->field_0x1;
          bVar1 = *pbVar6;
        }
        if ((int)pAVar3 <= (int)pAVar16) break;
        if (local_1c == -1) {
          local_1c = local_14;
        }
        local_20 = local_14;
        if ((int)pAVar16 < (int)local_2c) {
          local_2c = pAVar16;
        }
        bVar1 = *pbVar6;
        for (; (bVar1 != param_4 && ((int)pAVar16 < (int)pAVar3));
            pAVar16 = (AnonShape_006B4B20_3D4F4412 *)&pAVar16->field_0x1) {
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
        }
        if ((int)param_2 < (int)pAVar16) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = pAVar16;
        }
      }
LAB_006b4c1b:
      pbVar6 = pbVar6 + -(int)(&pAVar3->field_0x0 + uVar15);
      local_14 = local_14 + 1;
      iVar12 = local_20;
      pAVar16_mg0 = param_2;
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
    local_10 = (int)(iVar7 + (iVar7 >> 0x1f & 0xfU)) >> 4;
    if (7 < local_10) {
      local_10 = 7;
    }
    if (0xffff < (local_10 * local_c * 3) / 2) {
      local_10 = (int)(0x1fffe / (longlong)(local_c * 3));
    }
    local_3c = (short *)((int)puVar5 + 0x16);
    pbVar14 = (byte *)(local_3c + local_10);
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
  puVar5[1] = (uint)pAVar3;
  STField<char>(puVar5,0xd) = cVar9 << 2;
  puVar5[2] = uVar4;
  STField<undefined2>(puVar5,0xe) = STPiece<0,2>(local_2c);
  *puVar5 = (int)pbVar14 - (int)puVar5;
  *(undefined1 *)(puVar5 + 3) = 0x80;
  *(short *)(puVar5 + 4) = (short)local_1c;
  STField<undefined2>(puVar5,0x12) = (undefined2)local_c;
  *(short *)(puVar5 + 5) = (short)iVar12 - (short)local_1c;
  piVar8 = st::fn_006BFB50((int *)puVar5,(int)pbVar14 - (int)puVar5);
  *param_1 = (int)piVar8;
  if (piVar8 == nullptr) {
    *param_1 = (int)puVar5;
  }
  return 0;
}

// 006B4FA0 FUN_006b4fa0
#line 4 "decomp/ST.exe/functions/006B4FA0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0070C860 -> 006B4FA0 @ 0070C8C9; FUN_0070c860 parameter param_1 | 0070CB20 -> 006B4FA0
   @ 0070CB96; FUN_0070cb20 parameter param_3 */

int st::fn_006B4FA0(int *param_1)

{
  ushort uVar1;
  int iVar2;

  iVar2 = param_1[8];
  if (iVar2 == 0) {
    uVar1 = STField<ushort>(param_1,0xe);
    if (uVar1 != 0) {
      if (uVar1 < 9) {
        return (int)(param_1 + (1 << ((byte)uVar1 & 0x1f)) + 10);
      }
      if (param_1[4] == 3) {
        iVar2 = 3;
      }
    }
  }
  return (int)(param_1 + iVar2 + 10);
}

// 006B4FE0 FUN_006b4fe0
#line 1 "decomp/ST.exe/functions/006B4FE0/decomp.c"

int st::fn_006B4FE0(int param_1)

{
  ushort uVar1;
  int iVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar1 = *(ushort *)(param_1 + 0xe);
    if ((uVar1 != 0) && (uVar1 < 9)) {
      iVar2 = 1 << ((byte)uVar1 & 0x1f);
    }
  }
  return iVar2;
}

// 006B5010 FUN_006b5010
#line 1 "decomp/ST.exe/functions/006B5010/decomp.c"

int st::fn_006B5010(int param_1)

{
  ushort uVar1;
  int iVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar1 = *(ushort *)(param_1 + 0xe);
    if (uVar1 != 0) {
      if (uVar1 < 9) {
        return (1 << ((byte)uVar1 & 0x1f)) << 2;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(param_1 + 0x10) == 3) {
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
  iVar1 = st::fn_006B5010((int)param_1);
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
  undefined4 *puVar2;

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
   Evidence: 005C87C0 -> 006B5440 @ 005C885D; /StartSystemTy+0x2f0 */

void st::fn_006B5440(ushort *param_1,int param_2,int param_3,int param_4,tagBITMAPINFO *tOBJImage,
                 int param_6,byte param_7)

{
  st::fn_006B5110
            ((int)param_1,param_2,param_3,param_4,tOBJImage,param_6,0,0,
             (tOBJImage->bmiHeader).biWidth,(tOBJImage->bmiHeader).biHeight,param_7);
  return;
}

// 006B5480 FUN_006b5480
#line 4 "decomp/ST.exe/functions/006B5480/decomp.c"
undefined4 st::fn_006B5480(AnonShape_006B5480_2C1D4FBF *param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;

  pvVar1 = st::fn_006ACF50
                     ((void *)param_1->field_0014,(param_1->field_000C + param_1->field_0010) * 4);
  if (pvVar1 == nullptr) {
    return 0xfffffffe;
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
      st::fn_006A5E90((short *)param_1);
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
  pcVar2 = param_1->data;
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
  undefined1 *puVar3;
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
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = st::fn_006B4FA0((int *)param_1);
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
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = 0;
      }
      if (iVar12 < param_6) {
        return;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = -param_6;
      iVar12 = -iVar12;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = 1 - (int)pAVar1;
    }
    if (iVar4 <= param_5) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = iVar4 + -1;
    }
    if (iVar8 <= param_5) {
      if (iVar7 < iVar6) {
        iVar11 = iVar10 - iVar6;
        if (param_3 <= param_6) {
          if (iVar12 < param_3) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
   semantic function names, and exact first-argument call flow */

void st::fn_006B5EE0(RecoveredSourceFamily_dibcopy *param_1,int param_2,int param_3,int param_4,
                 int param_5,int param_6,byte param_7,int param_8)

{
  int iVar1;
  int iVar2;

  iVar1 = param_4 + -1 + param_6;
  iVar2 = param_3 + -1 + param_5;
  st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,param_2,param_3,param_4,iVar2,param_4,param_7,
               param_8);
  st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,param_2,iVar2,param_4 + 1,iVar2,iVar1 + -1,
               param_7,param_8);
  st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,param_2,iVar2,iVar1,param_3,iVar1,param_7,
               param_8);
  st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,param_2,param_3,iVar1 + -1,param_3,param_4 + 1
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
void st::fn_006B6110(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;

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
    st::fn_006A5E90((short *)param_1);
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
    *param_5 = piVar3;
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

// 006B64B0 FUN_006b64b0
#line 4 "decomp/ST.exe/functions/006B64B0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void st::fn_006B64B0(undefined4 *param_1)

{
  undefined4 local_2c [9];
  undefined4 local_8;

  memset(local_2c, 0, 0x28); /* compiler bulk-zero initialization */
  local_2c[0] = 0x28;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)*param_1 + 0x38))((int *)*param_1,local_2c,0);
  param_1[0xb] = local_8;
  st::fn_006D2510(param_1 + 0x11);
  return;
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

// 006B6530 FUN_006b6530
#line 4 "decomp/ST.exe/functions/006B6530/decomp.c"
undefined4
st::fn_006B6530(AnonShape_006B6530_C4BC1053 *param_1,undefined4 param_2,byte param_3,
            undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;

  piVar3 = (int *)*param_4;
  if ((param_3 & 1) != 0) {
    return 0;
  }
  if (param_1->field_002C != param_1->field_0028) {
    if (*piVar3 <= piVar3[1]) {
      iVar1 = *piVar3 + 10;
      piVar3 = st::fn_006BFB50(piVar3,iVar1 * 0x14 + 8);
      if (piVar3 == nullptr) {
        return 0;
      }
      *param_4 = piVar3;
      *piVar3 = iVar1;
    }
    piVar2 = piVar3 + piVar3[1] * 5 + 3;
    *piVar2 = param_1->field_0008;
    piVar2[1] = param_1->field_000C;
    piVar2[2] = param_1->field_0010;
    piVar2[3] = param_1->field_0014;
    pcVar4 = st::fn_006C8170(param_1->field_0030);
    piVar3[piVar3[1] * 5 + 2] = (int)pcVar4;
    if (piVar3[piVar3[1] * 5 + 2] == 0) {
      return 0;
    }
    piVar3[1] = piVar3[1] + 1;
  }
  return 1;
}

// 006B66A0 FUN_006b66a0
#line 4 "decomp/ST.exe/functions/006B66A0/decomp.c"
int st::fn_006B66A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                char *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_EBX;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_ESI;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_EDI;
  int *piStack_1c;
  undefined4 uStack_18;
  undefined4 **ppuStack_14;

  puVar1 = param_1;
  ppuStack_14 = &param_1;
  piStack_1c = (int *)*param_1;
  uStack_18 = 0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (**(code **)(*piStack_1c + 0x58))();
  if (iVar2 == -0x7788ffe2) {
    st::fn_0072DA40();
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      return -2;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)(*(int *)*puVar1 + 0x58))((int *)*puVar1,&piStack_1c,&param_1);
    if (iVar2 == 0) {
      puVar1[0xf] = param_3;
      puVar1[6] = ppuStack_14;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      puVar1[7] = unaff_EDI;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      puVar1[8] = unaff_ESI;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      puVar1[9] = unaff_EBX;
      st::fn_006A5E90((short *)puVar1[0xc]);
      pcVar3 = st::fn_006C49B0(param_5);
      puVar1[0xc] = pcVar3;
    }
  }
  else if (iVar2 == 0) {
    return -0xfd;
  }
  return iVar2;
}

// 006B6830 FUN_006b6830
#line 4 "decomp/ST.exe/functions/006B6830/decomp.c"
int st::fn_006B6830(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_EBX;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_ESI;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_stack_ffffffd4;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  char *in_stack_ffffffd8;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar2 = st::fn_006B66A0(param_1,unaff_ESI,unaff_EBX,in_stack_ffffffd4,in_stack_ffffffd8);
  if (iVar2 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)(*(int *)*param_1 + 0x18))((int *)*param_1,param_1 + 0xe,0,0,0,0,0x100);
    if (iVar2 == 0) {
      piVar1 = (int *)*param_1;
      memset(&stack0xffffffd4, 0, 0x28); /* compiler bulk-zero initialization */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 0x4c))(piVar1,param_1[0xe],&stack0xffffffd4,0);
      return 0;
    }
  }
  return iVar2;
}

// 006B68C0 FUN_006b68c0
#line 4 "decomp/ST.exe/functions/006B68C0/decomp.c"
void st::fn_006B68C0(undefined4 *param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)*param_1 + 0x30))((int *)*param_1,0,&st_image_006B68B0,&param_1,0);
  return;
}

// 006B6970 FUN_006b6970
#line 4 "decomp/ST.exe/functions/006B6970/decomp.c"
void st::fn_006B6970(undefined4 *param_1)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_EBP;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_ESI;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_retaddr;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar1 = st::fn_006B66A0(param_1,unaff_ESI,unaff_EBP,unaff_retaddr,(char *)param_1);
  if (iVar1 == 0) {
    st::fn_006B68C0(param_1);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)*param_1 + 0x18))((int *)*param_1,param_1 + 0xe,0,0,0,0,0);
  }
  return;
}

// 006B7070 FUN_006b7070
#line 4 "decomp/ST.exe/functions/006B7070/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005D4850 -> 006B7070 @ 005D488F */

void st::fn_006B7070(int *param_1)

{
  int iVar1;
  uint uVar2;
  int **ppiVar3;
  int *piStack_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_28 [2];
  undefined1 *local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d908;
  puStack_10 = &st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffcc;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    piStack_40 = (int *)*param_1;
    puStack_38 = local_28;
    uStack_3c = 0;
    ExceptionList = &local_14;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*piStack_40 + 0x58))();
    if (iVar1 == -0x7788ffe2) {
      local_8 = 0;
      st::fn_0072DA40();
      ppiVar3 = &piStack_40;
      local_20 = (undefined1 *)&piStack_40;
      local_1c = (undefined1 *)&piStack_40;
      for (uVar2 = local_28[0] >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *ppiVar3 = nullptr;
        ppiVar3 = ppiVar3 + 1;
      }
      for (uVar2 = local_28[0] & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)ppiVar3 = 0;
        ppiVar3 = (int **)((int)ppiVar3 + 1);
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*(int *)*param_1 + 0x58))((int *)*param_1,&piStack_40,local_28);
      if (iVar1 == 0) {
        uStack_3c = uStack_3c | 0x20;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)*param_1 + 0x7c))((int *)*param_1,&piStack_40,0);
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
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)*param_1 + 0x30))((int *)*param_1,param_1 + 6,st::fn_006B7170,piVar1,0x10);
  return *piVar1 + 1;
}

// 006B7170 FUN_006b7170
#line 4 "decomp/ST.exe/functions/006B7170/decomp.c"
undefined4
st::fn_006B7170(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  if (param_2 == 1) {
    *param_5 = *param_5 + 1;
  }
  return 1;
}

// 006B7190 FUN_006b7190
#line 4 "decomp/ST.exe/functions/006B7190/decomp.c"
int st::fn_006B7190(int *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  byte *puVar4;
  uint uVar6;
  AnonShape_006B7190_816EEFBC *pAVar7;
  undefined1 local_14 [4];
  int local_10;
  uint local_c;
  AnonShape_006B7190_816EEFBC *local_8;

  piVar1 = param_1;
LAB_006b719c:
  while( true ) {
    while( true ) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*(int *)*piVar1 + 100))((int *)*piVar1,&local_10,local_14,0,0,&local_c);
      if (iVar2 != -0x7788ffe2) {
        if (iVar2 == -0x7788ff42) {
          return 0;
        }
        return iVar2;
      }
      local_8 = st::fn_006AAC70(local_c);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*(int *)*piVar1 + 100))
                        ((int *)*piVar1,&local_10,local_14,0,local_8,&local_c);
      if (iVar2 == -0x7788ff42) {
        st::fn_006A5E90((short *)local_8);
        return 0;
      }
      if (local_10 != 0) break;
      st::fn_006AB060(&local_8);
    }
    if (*(char *)local_8 != '\x05') break;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (int *)st::fn_006B73E0(piVar1[0x14],local_10);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == nullptr) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = st::fn_006AAC70(0x18);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_1 == nullptr) {
        return -2;
      }
      st::fn_006B9910(piVar1 + 0x14,(int)param_1);
    }
    else {
      st::fn_006A5E90((short *)param_1[5]);
    }
    param_1[1] = local_10;
    param_1[2] = (uint)(byte)local_8->field_0001;
    param_1[3] = (int)(short)local_8->field_0002;
    param_1[4] = local_c - 8;
    pvVar3 = st::fn_006AAC70(*(uint *)((int)&local_8->field_0002 + 2));
    param_1[5] = (int)pvVar3;
    uVar6 = param_1[4];
    pAVar7 = local_8 + 1;
    puVar4 = (byte *)param_1[5];
    memmove(puVar4, pAVar7, uVar6); /* compiler REP MOVS byte copy */
    uVar6 = 0;
  }
  if (*(char *)local_8 == '\x06') goto code_r0x006b72b1;
  goto LAB_006b7373;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
code_r0x006b72b1:
  param_1 = (int *)st::fn_006B73E0(piVar1[0x14],local_10);
  if (param_1 != nullptr) {
    if (((char)param_1[2] == local_8->field_0001) &&
       ((int)(short)local_8->field_0002 == param_1[3] + -1)) {
      param_1[3] = param_1[3] + -1;
      pAVar7 = local_8 + 1;
      puVar4 = (byte *)(param_1[5] + param_1[4]);
      for (uVar6 = local_c - 8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = *(undefined4 *)pAVar7;
        pAVar7 = (AnonShape_006B7190_816EEFBC *)((int)&pAVar7->field_0002 + 2);
        puVar4 = (byte *)(puVar4 + 1);
      }
      for (uVar6 = local_c - 8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)pAVar7;
        pAVar7 = (AnonShape_006B7190_816EEFBC *)&pAVar7->field_0001;
        puVar4 = (byte *)((int)puVar4 + 1);
      }
      param_1[4] = param_1[4] + (local_c - 8);
      if (param_1[3] == 0) {
        st::fn_006AB060(&local_8);
        local_8 = (AnonShape_006B7190_816EEFBC *)param_1[5];
        local_c = param_1[4];
        st::fn_006B98C0(piVar1 + 0x14,param_1);
        st::fn_006AB060(&param_1);
LAB_006b7373:
        puVar4 = (byte *)(st::fn_006AAC70(0x14));
        if (puVar4 == nullptr) {
          return -2;
        }
        puVar4[2] = local_10;
        puVar4[4] = local_8;
        puVar4[3] = local_c;
        st::fn_006D2530(piVar1 + 0x11,puVar4);
      }
    }
    else {
      st::fn_006AB060(param_1 + 5);
      st::fn_006B98C0(piVar1 + 0x14,param_1);
      st::fn_006AB060(&param_1);
    }
  }
  goto LAB_006b719c;
}

// 006B73E0 FUN_006b73e0
#line 1 "decomp/ST.exe/functions/006B73E0/decomp.c"

void st::fn_006B73E0(int param_1,int param_2)

{
  if (param_1 != 0) {
    do {
    } while (*(int *)(param_1 + 4) != param_2);
  }
  return;
}

// 006B75C0 FUN_006b75c0
#line 1 "decomp/ST.exe/functions/006B75C0/decomp.c"

/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006B75C0 -> 006B7510 @ 006B7602 | 006B75C0 -> 006B7510 @ 006B762A */

int st::fn_006B75C0(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;

  piVar1 = param_3;
  iVar2 = st::fn_006B7510(param_1,(int)param_3,(int *)&param_3,-1,0);
  if (iVar2 == 0) {
    if ((0 < param_2) && ((int)param_3 < 1)) {
      DVar3 = st::external_000000DA();
      iVar2 = st::fn_006B7510(param_1,(int)piVar1,(int *)&param_3,-1,0);
      if (iVar2 != 0) {
        return iVar2;
      }
      while (((int)param_3 < 1 && (DVar4 = st::external_000000DA(), (int)(DVar4 - DVar3) < param_2))) {
        iVar2 = st::fn_006B7510(param_1,(int)piVar1,(int *)&param_3,-1,0);
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
  undefined4 *puVar3;

  if (param_1 != nullptr) {
    piVar1 = (int *)*param_1;
    if (piVar1 != nullptr) {
      iVar2 = param_1[0xe];
      if ((iVar2 != 0) && (iVar2 != -1)) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar1 + 0x24))(piVar1,iVar2);
        param_1[0xe] = -1;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)*param_1 + 0x10))((int *)*param_1);
    }
    for (puVar3 = (undefined4 *)param_1[0x11]; puVar3 != nullptr;
        puVar3 = (undefined4 *)*puVar3) {
      st::fn_006A5E90((short *)puVar3[4]);
    }
    st::fn_006D25A0(param_1 + 0x11);
    st::fn_006AB060(param_1 + 0xd);
    st::fn_006AB060(param_1 + 0xc);
  }
  return;
}

// 006B7740 FUN_006b7740
#line 4 "decomp/ST.exe/functions/006B7740/decomp.c"
void st::fn_006B7740(int *param_1)

{
  int *piVar1;

  if (param_1 != nullptr) {
    st::fn_006B76D0(param_1);
    if ((*(byte *)(param_1 + 1) & 4) != 0) {
      st::external_000000CF();
    }
    piVar1 = (int *)*param_1;
    if (piVar1 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_1 = 0;
    }
    st::fn_006A5E90((short *)param_1);
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
  undefined4 *puVar4;
  undefined4 *puVar5;

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
  if ((HMIXER)param_1[0xc] != (HMIXER)0x0) {
    st::external_000000D9((HMIXER)param_1[0xc]);
    param_1[0xc] = 0;
  }
  st::fn_006A5E90((short *)param_1);
  return;
}

// 006B8200 FUN_006b8200
#line 4 "decomp/ST.exe/functions/006B8200/decomp.c"
undefined4 st::fn_006B8200(AnonShape_006B8200_800652FF *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;

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
                 byte *param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  RecoveredSourceFamily_dibcopy *pRVar4;
  int local_24 [3];
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_2 == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = st::fn_006B4FA0((int *)param_1);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar1 = *(short *)(param_5 + 0xe);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar2 = *(short *)(param_5 + 0x10);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_c = (uint)*(short *)(param_5 + 0x12);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8 = (uint)*(short *)(param_5 + 0x14);
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
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (RecoveredSourceFamily_dibcopy *)-(int)pRVar4;
  }
  local_14 = param_3 + sVar1;
  local_10 = param_4 + sVar2;
  iVar3 = st::fn_006CFEB0(&local_14,&local_14,local_24);
  if (iVar3 != 0) {
    iVar3 = local_10;
    if ((int)param_1 < 0) {
      iVar3 = (local_18 - local_10) + -1;
    }
    st::fn_006D2820((byte *)((int)pRVar4 * iVar3 + local_14 + param_2),param_1,param_5,
                 local_14 - (param_3 + sVar1),local_10 - (param_4 + sVar2),local_c,local_8,0,
                 nullptr,0,0,nullptr);
  }
  return;
}

// 006B8850 FUN_006b8850
#line 4 "decomp/ST.exe/functions/006B8850/decomp.c"
void st::fn_006B8850(AnonShape_006B8850_E5DFE1E1 *param_1)

{
  int *piVar1;
  int iVar2;

  if (param_1 != nullptr) {
    piVar1 = (int *)param_1->field_003C;
    if (piVar1 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1->field_003C = 0;
    }
    piVar1 = (int *)param_1->field_0038;
    if (piVar1 != nullptr) {
      if ((param_1->field_0004 & 0x20000000) != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar1 + 8))(piVar1);
        param_1->field_0038 = 0;
        return;
      }
      if ((param_1->field_0004 & 0xa0000000) != 0) {
        iVar2 = 0;
        if (0 < param_1->field_002C) {
          do {
            piVar1 = *(int **)(param_1->field_0038 + iVar2 * 4);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
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
    st::fn_006B8850((AnonShape_006B8850_E5DFE1E1 *)param_1);
    *(undefined4 *)(*param_1 + 0x4e8) = 0;
    st::fn_006A5E90((short *)param_1);
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
  undefined4 local_14;
  undefined4 local_10;
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
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(**(int **)(*param_1 + 0x40) + 0x14))
                      (*(int **)(*param_1 + 0x40),&local_24,param_1[0xf],&local_14,0x1000000,0);
    if (iVar1 == 0) break;
    if (iVar1 == -0x7789fe3e) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)param_1[0xf] + 0x6c))((int *)param_1[0xf]);
      st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)*param_1);
    }
    else {
      if (((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) || (iVar2 != 0)) break;
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
  AnonShape_006B8F10_41B61BA9 *pAVar2;
  int local_EAX_86;
  int iVar5;
  int iVar6;
  int iVar4;
  int iVar3;
  undefined4 local_b4;
  undefined4 local_b0;
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

  pAVar2 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(*(int *)param_1 + 0x40) == 0) {
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
     (local_EAX_86 = st::fn_006B8E30((int *)param_1), local_EAX_86 != 0)) {
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
      param_1 = *(AnonShape_006B8F10_41B61BA9 **)(param_1->field_0038 + param_1->field_0028 * 4);
      local_b4 = 0x7c;
      local_b0 = 6;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar6 = (**(code **)(*(int *)param_1 + 0x58))(param_1,&local_b4);
      if (iVar6 != 0) {
        return iVar6;
      }
      local_c = local_a8;
      local_8 = local_ac;
    }
    else {
      local_c = param_1->field_0030;
      local_8 = param_1->field_0034;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (AnonShape_006B8F10_41B61BA9 *)param_1->field_0038;
    }
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = *(AnonShape_006B8F10_41B61BA9 **)(param_1->field_0038 + param_1->field_0028 * 4);
    local_c = param_1->field_0004;
    local_8 = (byte *)param_1->field_0008;
  }
  iVar4 = st::fn_006B91A0((int *)pAVar2,&local_14);
  if (iVar4 == 0) {
    pAVar2->field_0010 = local_14;
    pAVar2->field_0014 = local_10;
    pAVar2->field_0018 = local_c;
    pAVar2->field_001C = (int)local_8;
    if ((local_c != 0) && (local_8 != nullptr)) {
      local_28 = local_14 - iVar5;
      local_24 = local_10 - local_18;
      if ((pAVar2->field_0004 & 0x8000000) != 0) {
        iVar3 = st::fn_006B82E0
                          (*(DDXContext **)pAVar2,local_14,local_10,(byte *)param_1,local_28,
                           local_24,local_c,local_8);
        pAVar2->field_0004 = pAVar2->field_0004 | 0x4000;
        return iVar3;
      }
      if ((pAVar2->field_0004 & 0x20000000) != 0) {
        local_24 = local_24 +
                   ((*(int *)&pAVar2->field_0x2c - pAVar2->field_0028) + -1) *
                   (int)pAVar2->field_0034;
      }
      local_38 = local_14;
      local_20 = local_28 + local_c;
      local_30 = local_c + local_14;
      local_1c = local_8 + local_24;
      local_2c = local_8 + local_10;
      local_34 = local_10;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = nullptr;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      while (iVar5 = (**(code **)(**(int **)(*(int *)pAVar2 + 0x40) + 0x14))
                               (*(int **)(*(int *)pAVar2 + 0x40),&local_38,param_1,&local_28,
                                0x1008000,0), iVar5 != 0) {
        if (iVar5 == -0x7789fe3e) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*(int *)param_1 + 0x6c))(param_1);
          st::fn_006CEC40(*(AnonShape_006CEC40_BB23E716 **)pAVar2);
        }
        else {
          if (((iVar5 != -0x7789ff60) && (iVar5 != -0x7789fe52)) || (param_2 != nullptr)) break;
          st::external_00000050(2);
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = (int *)((int)param_2 + 1);
        if (1 < (int)param_2) break;
      }
      if ((iVar5 == -0x7789ff60) || (iVar5 == -0x7789fe52)) {
        iVar5 = 0;
      }
      pAVar2->field_0004 = pAVar2->field_0004 | 0x4000;
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
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14 [3];
  undefined4 local_8;

  iVar2 = 0;
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x40) == 0) {
    return -0x51;
  }
  local_14[1] = 0;
  local_14[0] = 0;
  local_30 = 0;
  local_34 = 0;
  local_14[2] = *(undefined4 *)(iVar1 + 0x18);
  local_8 = *(undefined4 *)(iVar1 + 0x1c);
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
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*(int *)param_1[0xf] + 0x14))
                        ((int *)param_1[0xf],&local_34,*(undefined4 *)(*param_1 + 0x40),&local_24,
                         0x1000000,0);
      if (iVar2 == 0) break;
      if (iVar2 == -0x7789fe3e) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)param_1[0xf] + 0x6c))((int *)param_1[0xf]);
        st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)*param_1);
      }
      else {
        if (((iVar2 != -0x7789ff60) && (iVar2 != -0x7789fe52)) || (iVar1 != 0)) break;
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
#line 4 "decomp/ST.exe/functions/006B92B0/decomp.c"
undefined4 st::fn_006B92B0(int *param_1,int *param_2)

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
void st::fn_006B94E0(AnonShape_006B94E0_A7E74DF0 *param_1,undefined4 param_2,int param_3,int param_4,
                 int param_5,int param_6,int param_7,int param_8)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
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
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_8 = param_5;
    do {
      iVar7 = st::fn_006C53B0
                        ((int)param_1,param_4,param_8,iVar2 - iVar8,param_8,*puVar1);
      if (iVar7 != 0) goto cf_common_exit_006B96BA;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = param_3 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = param_8 + 1;
    } while (param_3 < iVar8);
  }
  st::fn_006C6410(param_1,puVar1[3]);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_3 = 0;
  if (0 < iVar8) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_8 = iVar2;
    do {
      iVar7 = st::fn_006C53B0
                        ((int)param_1,param_8,param_5,param_8,iVar3 - iVar8,*puVar1);
      if (iVar7 != 0) goto cf_common_exit_006B96BA;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = param_3 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = param_8 + -1;
    } while (param_3 < iVar8);
  }
  st::fn_006C6410(param_1,puVar1[4]);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_3 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_8 = iVar3;
  if (0 < iVar8) {
    do {
      iVar7 = st::fn_006C53B0
                        ((int)param_1,iVar2,param_8,iVar8 + param_4,param_8,*puVar1);
      if (iVar7 != 0) goto cf_common_exit_006B96BA;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = param_3 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = param_8 + -1;
    } while (param_3 < iVar8);
  }
  st::fn_006C6410(param_1,puVar1[5]);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_3 = 0;
  if (0 < iVar8) {
    iVar2 = iVar8 + param_5;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_5 = param_4;
    do {
      iVar7 = st::fn_006C53B0((int)param_1,param_5,iVar3,param_5,iVar2,*puVar1);
      if (iVar7 != 0) break;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = param_3 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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

  iVar1 = st::fn_006B2330((DDXContext_008075A8 *)param_1,param_2,param_3,0x6b94e0,0,0,(ushort *)param_5
                      );
  if (iVar1 == 0) {
    if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
      st::external_00000018((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
    if (param_4 < 1) {
      param_4 = 1;
    }
    *(int *)(*(int *)(param_1[0x6c] + *param_2 * 4) + 200) = param_4;
    if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
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
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (int *)*param_1;
  while (param_1 != nullptr) {
    st::fn_006B98C0(piVar1,param_1);
    st::fn_006AB060(&param_1);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (int *)*piVar1;
  }
  return;
}

// 006B98C0 FUN_006b98c0
#line 4 "decomp/ST.exe/functions/006B98C0/decomp.c"
undefined4 st::fn_006B98C0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
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
   Evidence: 006736F0 -> 006B9910 @ 00673830 | 006B7190 -> 006B9910 @ 006B723F */

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

// 006B9A40 FUN_006b9a40
#line 4 "decomp/ST.exe/functions/006B9A40/decomp.c"
int st::fn_006B9A40(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;

  piVar1 = st::fn_006BFB70(0x170);
  *param_2 = (int)piVar1;
  if (piVar1 == nullptr) {
    return -2;
  }
  *piVar1 = 0x1e;
  *(undefined4 *)(*param_2 + 4) = 0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (**(code **)(**(int **)(param_1 + 0x30) + 0x20))
                    (*(int **)(param_1 + 0x30),0,0,param_2,st::fn_006B9AA0);
  if (iVar2 != 0) {
    st::fn_006AB060(param_2);
  }
  return iVar2;
}

// 006B9AA0 FUN_006b9aa0
#line 4 "decomp/ST.exe/functions/006B9AA0/decomp.c"
undefined4 st::fn_006B9AA0(AnonShape_006B9AA0_FC1882B5 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;

  piVar2 = (int *)*param_2;
  if (*piVar2 <= piVar2[1]) {
    iVar1 = *piVar2 + 10;
    piVar2 = st::fn_006BFB50(piVar2,iVar1 * 0xc + 8);
    if (piVar2 == nullptr) {
      return 0;
    }
    *piVar2 = iVar1;
  }
  piVar2[piVar2[1] * 3 + 2] = param_1->field_000C;
  piVar2[(piVar2[1] + 1) * 3] = param_1->field_0008;
  piVar2[piVar2[1] * 3 + 4] = param_1->field_0054;
  piVar2[1] = piVar2[1] + 1;
  *param_2 = piVar2;
  return 1;
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

  iVar1 = st::fn_006B9940(param_1,0,param_2,param_3);
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
      st::external_00000018((LPCRITICAL_SECTION)(param_1 + 0x13c));
    }
    if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
      st::external_000000A6((HGDIOBJ)*param_1);
    }
    if ((HGDIOBJ)param_1[0x12d] != (HGDIOBJ)0x0) {
      st::external_000000A6((HGDIOBJ)param_1[0x12d]);
    }
    if ((HGDIOBJ)param_1[0x125] != (HGDIOBJ)0x0) {
      st::external_000000A6((HGDIOBJ)param_1[0x125]);
    }
    piVar1 = (int *)param_1[0x10];
    if (piVar1 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0x10] = 0;
    }
    piVar1 = (int *)param_1[0x11];
    if (piVar1 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0x11] = 0;
    }
    piVar1 = (int *)param_1[0x12];
    if (piVar1 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0x12] = 0;
    }
    piVar1 = (int *)param_1[0xf];
    if (piVar1 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xf] = 0;
    }
    piVar1 = (int *)param_1[0xe];
    if (piVar1 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xe] = 0;
    }
    piVar1 = (int *)param_1[0xd];
    if (piVar1 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xd] = 0;
    }
    if (((*(byte *)(param_1 + 2) & 1) != 0) && (piVar1 = (int *)param_1[0xc], piVar1 != nullptr))
    {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 0x4c))(piVar1);
    }
    piVar1 = (int *)param_1[0xc];
    if (piVar1 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xc] = 0;
    }
    piVar1 = (int *)param_1[0xb];
    if (piVar1 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xb] = 0;
    }
    st::fn_006AB060(param_1 + 0x130);
    st::fn_006AB060(param_1 + 0x137);
    if ((HGDIOBJ)param_1[0x138] != (HGDIOBJ)0x0) {
      st::external_000000A6((HGDIOBJ)param_1[0x138]);
    }
    if ((param_1[2] & 0x4000000) != 0) {
      st::external_00000019((LPCRITICAL_SECTION)(param_1 + 0x13c));
    }
    st::external_00000016((LPCRITICAL_SECTION)(param_1 + 0x13c));
    st::fn_006A5E90((short *)param_1);
  }
  return;
}

// 006BA740 FUN_006ba740
#line 1 "decomp/ST.exe/functions/006BA740/decomp.c"

void st::fn_006BA740(int param_1)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffeff;
  return;
}

// 006BA760 FUN_006ba760
#line 1 "decomp/ST.exe/functions/006BA760/decomp.c"

void st::fn_006BA760(int param_1)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x100;
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

// 006BA7B0 FUN_006ba7b0
#line 4 "decomp/ST.exe/functions/006BA7B0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void st::fn_006BA7B0(AnonShape_006BA7B0_E82BD3A2 *param_1,undefined4 param_2,undefined4 param_3,
                 undefined4 *param_4)

{
  if (param_4 != nullptr) {
    *param_4 = param_1->field_0010;
    param_4[1] = param_1->field_0014;
  }
  param_1->field_0010 = param_2;
  param_1->field_0014 = param_3;
  return;
}

// 006BB690 FUN_006bb690
#line 4 "decomp/ST.exe/functions/006BB690/decomp.c"
undefined4 st::fn_006BB690(AnonShape_006BB690_EB7315D1 *param_1)

{
  undefined4 uVar1;

  if ((param_1->field_000C & 0x100) != 0) {
    return 0;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar1 = (**(code **)(*param_1->field_0030 + 0x28))(param_1->field_0030);
  return uVar1;
}

// 006BB6C0 FUN_006bb6c0
#line 4 "decomp/ST.exe/functions/006BB6C0/decomp.c"
int st::fn_006BB6C0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                uint param_6)

{
  int iVar1;
  undefined4 local_88 [26];
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
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x18))
                    (*(int **)(param_1 + 0x30),local_88,param_2,0);
  if ((iVar1 == 0) && (param_5 != -1)) {
    local_8 = param_5;
    local_c = param_5;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*(int *)*param_2 + 0x74))
                      ((int *)*param_2,(-((param_6 & 0x80) != 0) & 8U) + 8,&local_c);
    if (iVar1 != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)*param_2 + 8))((int *)*param_2);
      *param_2 = 0;
    }
  }
  return iVar1;
}

// 006BB780 FUN_006bb780
#line 4 "decomp/ST.exe/functions/006BB780/decomp.c"
int st::fn_006BB780(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6,undefined4 *param_7,int param_8)

{
  int iVar1;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
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
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x18))
                    (*(int **)(param_1 + 0x30),&local_88,param_2,0);
  if ((iVar1 == 0) && (param_8 != -1)) {
    local_8 = param_8;
    local_c = param_8;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*(int *)*param_2 + 0x74))((int *)*param_2,0x10,&local_c);
    if (iVar1 != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)*param_2 + 8))((int *)*param_2);
      *param_2 = 0;
    }
  }
  return iVar1;
}

// 006BB8B0 FUN_006bb8b0
#line 1 "decomp/ST.exe/functions/006BB8B0/decomp.c"

int st::fn_006BB8B0(AnonShape_006BB8B0_D6DE56CA *param_1)

{
  AnonShape_006BB8B0_D6DE56CA *pAVar1;
  int iVar2;

  pAVar1 = param_1;
  param_1->field_0474 = 0;
  if ((param_1->field_000C & 0x1100) == 0x100) {
    return -0x7789fe52;
  }
  if (param_1->field_0040 == 0) {
    return -0x7789fe52;
  }
  if ((param_1->field_0008 & 0x4000000) != 0) {
    st::external_00000018((LPCRITICAL_SECTION)&param_1[1].field_0x78);
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = nullptr;
  while( true ) {
    iVar2 = st::fn_006BBE40((int *)pAVar1->field_0040,&pAVar1->field_0474,(int *)(pAVar1 + 1),0);
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar2 != -0x7789fe3e) break;
    st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)pAVar1);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (AnonShape_006BB8B0_D6DE56CA *)&param_1->field_0x1;
    if (1 < (int)param_1) {
LAB_006bb943:
      pAVar1->field_0474 = 0;
      *(int *)(pAVar1 + 1) = 0;
      if ((pAVar1->field_0008 & 0x4000000) != 0) {
        st::external_00000019((LPCRITICAL_SECTION)&pAVar1[1].field_0x78);
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
void st::fn_006BB980(AnonShape_006BB980_E41494A1 *param_1)

{
  if (param_1->field_0474 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1->field_0040 + 0x80))(param_1->field_0040,0);
    param_1->field_0474 = 0;
    param_1->field_0478 = 0;
    if ((param_1->field_0008 & 0x4000000) != 0) {
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
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
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
  BVar3 = st::external_0000009A(&local_44,&local_24,&local_14);
  if (BVar3 != 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = nullptr;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    while (piVar1 = (int *)pAVar2->field_0040,
          iVar4 = (**(code **)(*piVar1 + 0x14))
                            (piVar1,&local_44,param_6,&local_34,param_9 | 0x1000000,0), iVar4 != 0)
    {
      if (iVar4 == -0x7789fe3e) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*param_6 + 0x6c))(param_6);
        st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)pAVar2);
      }
      else {
        if (((iVar4 != -0x7789ff60) && (iVar4 != -0x7789fe52)) ||
           (param_1 != nullptr)) break;
        st::external_00000050(2);
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (AnonShape_006BB9D0_BD42D958 *)&param_1->field_0x1;
      if (1 < (int)param_1) break;
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

undefined4 st::fn_006BBB00(AnonShape_006B94E0_A7E74DF0 *param_1,undefined4 param_2)

{
  undefined4 uVar1;

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
  undefined4 local_428 [95];
  undefined4 local_2ac;
  byte local_2a8;
  byte local_200;
  undefined4 local_130 [18];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_dc;
  undefined4 local_c8;
  undefined4 local_b4 [18];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_4c;
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
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*piVar1 + 0x38))(piVar1,local_28);
  piVar1 = param_1->field_0044;
  local_38[0] = 0;
  if (piVar1 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
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
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      local_18 = (**(code **)(*param_1->field_0030 + 0x18))
                           (param_1->field_0030,local_b4,&local_14,0);
      if (local_18 != 0) goto LAB_006bbdfd;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)param_1->field_0040 + 0x38))((int *)param_1->field_0040,local_28);
    }
    if (local_10 != 0) {
      piVar1 = param_1->field_0044;
      if (piVar1 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar1 + 8))(piVar1);
        param_1->field_0044 = nullptr;
      }
      param_1->field_0044 = local_c;
      if (param_1->field_0020 == 8) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_c + 0x7c))(local_c,param_1->field_003C);
      }
    }
    if (local_8 != 0) {
      piVar1 = (int *)param_1->field_0040;
      if (piVar1 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar1 + 8))(piVar1);
        param_1->field_0040 = 0;
      }
      param_1->field_0040 = local_14;
      if (param_1->field_0020 == 8) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_14 + 0x7c))(local_14,param_1->field_003C);
      }
    }
    local_2ac = 0x17c;
    local_428[0] = 0x17c;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1->field_0030 + 0x2c))(param_1->field_0030,&local_2ac,local_428);
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
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    local_18 = (**(code **)(*param_1->field_0030 + 0x18))(param_1->field_0030,local_130,&local_c,0);
    if (local_18 == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1->field_0044 + 0x38))(param_1->field_0044,local_38);
      goto LAB_006bbc85;
    }
LAB_006bbdfd:
    if (local_c != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*local_c + 8))(local_c);
      local_c = nullptr;
    }
    if (local_14 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
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
   Evidence: 006CEF60 -> 006BBE40 @ 006CF1D7 | 006CEF60 -> 006BBE40 @ 006CF663 */

void st::fn_006BBE40(int *param_1,uint *param_2,int *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 local_80 [4];
  int local_70;
  uint local_5c;

  bVar1 = false;
  local_5c = 0;
  local_70 = 0;
  local_80[0] = 0x7c;
  while( true ) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)(*param_1 + 100))(param_1,0,local_80,param_4 | 1,0);
    if (((iVar2 != -0x7789ff60) && (iVar2 != -0x7789fe52)) || (bVar1)) break;
    st::external_00000050(2);
    bVar1 = true;
  }
  if (iVar2 == 0) {
    *param_2 = local_5c;
    *param_3 = local_70;
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}

// 006BBED0 FUN_006bbed0
#line 4 "decomp/ST.exe/functions/006BBED0/decomp.c"
void st::fn_006BBED0(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 local_5c;

  bVar1 = false;
  local_5c = 0;
  local_70 = 0;
  local_80[0] = 0x7c;
  while( true ) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)(*param_1 + 100))(param_1,param_4,local_80,0x21,0);
    if (((iVar2 != -0x7789ff60) && (iVar2 != -0x7789fe52)) || (bVar1)) break;
    st::external_00000050(2);
    bVar1 = true;
  }
  if (iVar2 == 0) {
    *param_2 = local_5c;
    *param_3 = local_70;
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}

// 006BBF50 FUN_006bbf50
#line 4 "decomp/ST.exe/functions/006BBF50/decomp.c"
void st::fn_006BBF50(int *param_1,undefined4 param_2)

{
  int iVar1;

  if ((param_1[3] & 0x400U) != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (*(code *)**(undefined4 **)param_1[0xd])
                      ((undefined4 *)param_1[0xd],&DAT_0079fc78,&param_1);
    if ((iVar1 == 0) && (param_1 != nullptr)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 0x10))(param_1,1,param_2);
      if (param_1 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
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
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;

  iVar1 = st::fn_006B4FE0((int)param_1);
  if ((param_2 == nullptr) &&
     (param_2 = st::fn_006AAC70(0x400), param_2 == nullptr)) {
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
  undefined2 *puVar1;

  puVar1 = param_2;
  if (param_2 == nullptr) {
    puVar1 = st::fn_006AAC70(0x404);
    if (puVar1 == nullptr) {
      return nullptr;
    }
  }
  st::fn_006BC360(param_1,(undefined4 *)(puVar1 + 2),(int *)&param_2);
  *puVar1 = 0x300;
  puVar1[1] = STPiece<0,2>(param_2);
  if (param_3 != nullptr) {
    *param_3 = param_2;
  }
  return puVar1;
}

// 006BC440 FUN_006bc440
#line 4 "decomp/ST.exe/functions/006BC440/decomp.c"
undefined4
st::fn_006BC440(AnonShape_006BC440_9548EA86 *param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6)

{
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
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_4 = param_4 - *(int *)(&param_1->field_0x120 + param_1->field_01E4 * 8);
  if (param_4 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = param_6 + iVar8;
  }
  if ((0 < param_5) && (0 < param_6)) {
    iVar1 = param_1->field_01EC;
    iVar5 = param_1->field_01F0;
    iVar3 = (iVar8 % iVar1 + iVar1 + -1 + param_5) / iVar1;
    iVar4 = (param_4 % iVar5 + iVar5 + -1 + param_6) / iVar5;
    iVar2 = param_1->field_01F4;
    iVar5 = param_4 / iVar5;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = 0;
    iVar5 = iVar2 * iVar5;
    iVar9 = param_1->field_0204 + iVar5 + iVar8 / iVar1;
    pcVar6 = (char *)(param_1->field_021C + iVar5 + iVar8 / iVar1);
    if (0 < iVar4) {
      do {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = 0;
        if (0 < iVar3) {
          pcVar7 = pcVar6;
          do {
            if (((param_1->field_0204 == 0) || (pcVar7[iVar9 - (int)pcVar6] != '\0')) &&
               ((param_2 != 0 || ((param_1->field_021C == 0 || (*pcVar7 != '\0')))))) {
              return 0;
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = param_3 + 1;
            pcVar7 = pcVar7 + 1;
          } while (param_3 < iVar3);
        }
        iVar9 = iVar9 + iVar2;
        pcVar6 = pcVar6 + iVar2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = param_4 + 1;
      } while (param_4 < iVar4);
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
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1->field_0044 + 0x14))
                      (param_1->field_0044,&local_14,param_1->field_0040,&local_14,0x1000000,0);
    if (iVar1 == 0) break;
    if (iVar1 == -0x7789fe3e) {
      st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)param_1);
    }
    else {
      if (((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) || (iVar2 != 0)) break;
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
      DAT_00854fd0 = *(uint **)(DAT_00854fc0 + DAT_00854eec * 4);
      if ((*DAT_00854fd0 & 0x4000) != 0) {
        if ((int)DAT_00854fd0[0xc] < 0) {
          DAT_00854fd0[10] = DAT_00854fd0[10] + DAT_00854fd0[0xc] + 1;
          DAT_00854fd0[0xc] = -DAT_00854fd0[0xc];
          *DAT_00854fd0 = *DAT_00854fd0 | 0x400;
        }
        if ((int)DAT_00854fd0[0xd] < 0) {
          DAT_00854fd0[0xb] = DAT_00854fd0[0xb] + DAT_00854fd0[0xd] + 1;
          DAT_00854fd0[0xd] = -DAT_00854fd0[0xd];
          *DAT_00854fd0 = *DAT_00854fd0 | 0x800;
        }
      }
      if ((*DAT_00854fd0 & 0x24) != 0) {
        DAT_00854f9c = DAT_00854fd0[0x14];
        DAT_00854f90 = g_int_00854FD4 + DAT_00854f9c * 4 + 5;
        DAT_00854f50 = g_int_00854FD4[DAT_00854f9c + 0x5d];
        DAT_00854fd0[10] = DAT_00854fd0[10] + g_int_00854FD4[DAT_00854f9c * 2 + 0x47];
        DAT_00854fd0[0xb] = DAT_00854fd0[0xb] + g_int_00854FD4[DAT_00854f9c * 2 + 0x48];
        DAT_00854fd0[6] = DAT_00854fd0[6] + g_int_00854FD4[DAT_00854f9c * 2 + 0x47];
        DAT_00854fd0[7] = DAT_00854fd0[7] + g_int_00854FD4[DAT_00854f9c * 2 + 0x48];
        uVar1 = *DAT_00854fd0;
        if ((uVar1 & 0x40000) == 0) {
          if ((uVar1 & 0x4000) == 0) {
            if ((((int)DAT_00854fd0[6] < DAT_00854f90[2]) &&
                (*DAT_00854f90 < (int)(DAT_00854fd0[0xe] + DAT_00854fd0[6]))) &&
               (uVar1 = DAT_00854fd0[7], (int)uVar1 < DAT_00854f90[3])) {
              uVar2 = DAT_00854fd0[0xf];
              goto LAB_006bc7d0;
            }
LAB_006bc7e0:
            _DAT_00854ed0 = 0;
          }
          else {
            if (((DAT_00854f90[2] <= (int)DAT_00854fd0[10]) ||
                ((int)(DAT_00854fd0[0xc] + DAT_00854fd0[10]) <= *DAT_00854f90)) ||
               (uVar1 = DAT_00854fd0[0xb], DAT_00854f90[3] <= (int)uVar1)) goto LAB_006bc7e0;
            uVar2 = DAT_00854fd0[0xd];
LAB_006bc7d0:
            if ((int)(uVar2 + uVar1) <= DAT_00854f90[1]) goto LAB_006bc7e0;
            _DAT_00854ed0 = 1;
          }
          if (((*DAT_00854fd0 & 0x20) == 0) || (_DAT_00854ed0 == 0)) {
            *DAT_00854fd0 = *DAT_00854fd0 & 0xfffffffd;
          }
          else {
            if (DAT_00854fd0[8] == 0xffffffff) {
              st::fn_006CF950(DAT_00854fd0);
            }
            if (((((int)DAT_00854fd0[10] < DAT_00854f90[2]) &&
                 (*DAT_00854f90 < (int)(DAT_00854fd0[10] + DAT_00854fd0[0xc]))) &&
                ((int)DAT_00854fd0[0xb] < DAT_00854f90[3])) &&
               (DAT_00854f90[1] < (int)(DAT_00854fd0[0xb] + DAT_00854fd0[0xd]))) {
              uVar1 = *DAT_00854fd0;
              if ((uVar1 & 0x20) != 0) {
                if (((int)DAT_00854fd0[0xc] < 1) || ((int)DAT_00854fd0[0xd] < 1)) {
                  if ((uVar1 & 1) != 0) {
                    *DAT_00854fd0 = uVar1 | 4;
                  }
                }
                else {
                  *DAT_00854fd0 = uVar1 | 0x40;
                  DAT_00854fc8 = DAT_00854fc8 + 1;
                  if (((*DAT_00854fd0 & 1) == 0) || (DAT_00854f50 != 0)) {
                    *DAT_00854fd0 = *DAT_00854fd0 | 6;
                  }
                }
              }
              goto LAB_006bc8a6;
            }
            *DAT_00854fd0 = *DAT_00854fd0 & 0xfffffffd;
          }
        }
        else {
          *DAT_00854fd0 = uVar1 & 0xfffffffd;
        }
        uVar1 = *DAT_00854fd0;
        if ((uVar1 & 1) == 0) {
          uVar1 = uVar1 & 0xfffffffb;
        }
        else {
          uVar1 = uVar1 | 4;
        }
        *DAT_00854fd0 = uVar1;
      }
LAB_006bc8a6:
      if (((*DAT_00854fd0 & 0x500e) == 0) && (DAT_00854f98 == 0)) {
        DAT_00854fd0[0x1a] = 0;
        DAT_00854fd0[0x1b] = 0;
      }
      else {
        DAT_00854fd0[0x1a] = 5;
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
    DAT_00854edc = st::fn_006BC970(g_int_00854FD4,DAT_00854f28,DAT_00854fdc,DAT_00854fc8);
    if (DAT_00854edc == 0xffffffff) {
      DAT_00854f98 = 1;
      DAT_00854f28 = -2;
    }
    else if ((DAT_00854edc == 0) || (DAT_00854f28 < (int)(DAT_00854edc - 1))) {
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
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_3;
    do {
      puVar1 = (uint *)*param_1;
      if ((*puVar1 & 8) == 0) {
        if (((*puVar1 & 2) == 0) || ((int)puVar1[0x1a] < 5)) {
          iVar4 = st::fn_006B0460((int *)&local_20,local_c,(int *)(puVar1 + 1));
          if (iVar4 != 0) {
            if ((int)puVar1[0x1a] < 5) {
              iVar3 = st::fn_006D1AD0((int *)(puVar1 + 0x1a),4,local_20,local_1c,local_18,local_14,
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
        iVar4 = st::fn_006CFEB0((int *)&local_20,local_c,piVar2 + piVar2[0x79] * 4 + 5);
        if (iVar4 != 0) {
          st::fn_006BCB30(piVar2,local_20,local_1c,local_18,local_14);
        }
      }
      local_10 = local_10 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 + 1;
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
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = param_4 + iVar8;
    iVar8 = 0;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_3 = param_3 - param_1[param_1[0x79] * 2 + 0x48];
  if (param_3 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_5 = param_5 + iVar8;
  }
  if ((0 < param_4) && (0 < param_5)) {
    iVar7 = param_1[0x7b];
    iVar5 = param_1[0x7c];
    iVar3 = (iVar8 % iVar7 + iVar7 + -1 + param_4) / iVar7;
    local_10 = (param_3 % iVar5 + iVar5 + -1 + param_5) / iVar5;
    uVar4 = iVar8 / iVar7;
    iVar5 = param_3 / iVar5;
    iVar8 = param_1[0x7d] + 7;
    iVar8 = (int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3;
    iVar7 = iVar8 * iVar5;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = param_1[0x88] + iVar7;
    iVar5 = param_1[0x7d] * iVar5;
    iVar9 = param_1[0x81] + iVar5 + uVar4;
    iVar5 = param_1[0x87] + iVar5 + uVar4;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
                pbVar1 = (byte *)(param_3 + ((int)(uVar6 ^ 7) >> 3));
                *pbVar1 = *pbVar1 | '\x01' << ((uVar6 ^ 7) & 7);
              }
            }
            else {
              pbVar1 = (byte *)((int)param_1 + ((int)(uVar6 ^ 7) >> 3));
              *pbVar1 = *pbVar1 | '\x01' << ((uVar6 ^ 7) & 7);
              if ((piVar2[0x87] != 0) && (*(char *)(iVar7 + uVar6) != '\0')) {
                pbVar1 = (byte *)(param_3 + ((int)(uVar6 ^ 7) >> 3));
                *pbVar1 = *pbVar1 | '\x01' << ((uVar6 ^ 7) & 7);
              }
            }
            uVar6 = uVar6 + 1;
            local_8 = local_8 + -1;
          } while (local_8 != 0);
        }
        iVar9 = iVar9 + piVar2[0x7d];
        iVar5 = iVar5 + piVar2[0x7d];
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + iVar8;
        local_10 = local_10 + -1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
  uint *puVar3;
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
    DAT_00854f44 = *(uint **)(DAT_00854fdc + iVar2 * 4);
    DAT_00854f60 = iVar2;
    if ((*DAT_00854f44 & 8) == 0) {
      if ((*DAT_00854f44 & 2) == 0) goto joined_r0x006bcd2a;
      if (((g_int_00854FD4[0x7a] < (int)DAT_00854f44[0x11]) && (g_int_00854FD4[0x77] != 0)) &&
         (iVar2 = st::fn_006CFEB0((int *)&DAT_00854f08,(int *)(DAT_00854f44 + 10),
                               g_int_00854FD4 + g_int_00854FD4[0x79] * 4 + 5), iVar2 != 0)) {
        st::fn_006BCB30(g_int_00854FD4,DAT_00854f08,DAT_00854f0c,DAT_00854f10,DAT_00854f14);
      }
      DAT_00854eec = 0;
      puVar3 = DAT_00854f44;
      iVar2 = DAT_00854f60;
      if (0 < DAT_00854f60) {
        do {
          DAT_00854fd0 = *(uint **)(DAT_00854fdc + DAT_00854eec * 4);
          if ((((*DAT_00854fd0 & 2) == 0) || ((int)DAT_00854fd0[0x1a] < 5)) &&
             (DAT_00854edc = 0, 4 < (int)puVar3[0x1a])) {
            iVar2 = st::fn_006B0460((int *)&DAT_00854f08,(int *)(DAT_00854fd0 + 1),(int *)(puVar3 + 10)
                                );
            if (iVar2 != 0) {
              DAT_00854edc = st::fn_006D1AD0((int *)(DAT_00854fd0 + 0x1a),4,DAT_00854f08,DAT_00854f0c,
                                          DAT_00854f10,DAT_00854f14,DAT_00854fd0[3],DAT_00854fd0[4],
                                          -(uint)((*DAT_00854fd0 & 0x2000) != 0));
            }
            puVar3 = DAT_00854f44;
            if (DAT_00854edc != 0) {
              *DAT_00854fd0 = *DAT_00854fd0 | 2;
              uVar8 = *DAT_00854fd0;
              if (((uVar8 & 0x3000) != 0) ||
                 ((puVar3 = DAT_00854f44, (uVar8 & 0x4000) != 0 && ((uVar8 & 0x20000) == 0)))) {
                *DAT_00854fd0 = uVar8 | 4;
                if (((*DAT_00854f44 & 0x2000) == 0) || (DAT_00854edc == -1)) {
                  iVar2 = g_int_00854FD4[4];
                  iVar1 = g_int_00854FD4[3];
                  piVar4 = (int *)g_int_00854FD4[0x70];
                  uVar8 = DAT_00854fd0[4];
                  uVar7 = DAT_00854fd0[3];
                  uVar6 = DAT_00854fd0[2];
                  uVar5 = DAT_00854fd0[1];
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
                puVar3 = DAT_00854f44;
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
          DAT_00854fd0 = *(uint **)(DAT_00854fdc + DAT_00854eec * 4);
          if (((((*DAT_00854fd0 & 2) == 0) || ((int)DAT_00854fd0[0x1a] < 5)) &&
              (iVar1 = st::fn_006CFEB0((int *)&DAT_00854f08,(int *)(DAT_00854fd0 + 10),
                                    g_int_00854FD4 + g_int_00854FD4[0x79] * 4 + 5),
              iVar2 = DAT_00854f60, iVar1 != 0)) &&
             (iVar1 = st::fn_006BD0C0(g_int_00854FD4,DAT_00854f08,DAT_00854f0c,DAT_00854f10,
                                   DAT_00854f14), iVar2 = DAT_00854f60, iVar1 != 0)) {
            DAT_00854fd0[0x1a] = 5;
            *DAT_00854fd0 = *DAT_00854fd0 | 2;
            uVar8 = *DAT_00854fd0;
            if (((uVar8 & 0x3000) != 0) ||
               ((iVar2 = DAT_00854f60, (uVar8 & 0x4000) != 0 && ((uVar8 & 0x20000) == 0)))) {
              *DAT_00854fd0 = uVar8 | 4;
              DAT_00854f28 = st::fn_006D1AD0((int *)g_int_00854FD4[0x70],100,DAT_00854fd0[1],
                                          DAT_00854fd0[2],DAT_00854fd0[3],DAT_00854fd0[4],
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
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_3 = param_3 - param_1[param_1[0x79] * 2 + 0x48];
  if (param_3 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_5 = param_5 + iVar5;
  }
  if ((0 < param_4) && (0 < param_5)) {
    iVar1 = param_1[0x7b];
    iVar4 = param_1[0x7c];
    iVar2 = (iVar5 % iVar1 + iVar1 + -1 + param_4) / iVar1;
    iVar3 = (param_3 % iVar4 + iVar4 + -1 + param_5) / iVar4;
    iVar4 = param_3 / iVar4;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 0;
    iVar7 = (int)(param_1[0x7d] + 7 + (param_1[0x7d] + 7 >> 0x1f & 7U)) >> 3;
    iVar4 = iVar7 * iVar4;
    iVar6 = param_1[0x88] + iVar4;
    iVar4 = param_1[0x84] + iVar4;
    if (0 < iVar3) {
      do {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = 0;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)(iVar5 / iVar1);
        if (0 < iVar2) {
          do {
            if (((*(byte *)(iVar4 + ((int)((uint)param_1 ^ 7) >> 3)) >> (((uint)param_1 ^ 7) & 7) &
                 1) != 0) ||
               ((*(byte *)(iVar6 + ((int)((uint)param_1 ^ 7) >> 3)) >> (((uint)param_1 ^ 7) & 7) & 1
                ) != 0)) {
              return 1;
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = param_2 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = (int *)((int)param_1 + 1);
          } while (param_2 < iVar2);
        }
        iVar4 = iVar4 + iVar7;
        iVar6 = iVar6 + iVar7;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + 1;
      } while (param_3 < iVar3);
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
  undefined4 *puVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d940;
  puStack_10 = &st_image_0072D964;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined4 *)g_int_00854FD4[0x70] = 0;
  *(undefined4 *)(g_int_00854FD4[0x70] + 4) = 0;
  if (g_int_00854FD4[0x76] == 0) {
    if (g_int_00854FD4[0x8b] == 0) {
      DAT_00854ed8 = 0;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      while (DAT_00854fec = (**(code **)(*PTR_00854ee8->field_0044 + 0x14))
                                      (PTR_00854ee8->field_0044,0,PTR_00854ee8->field_0040,0,
                                       0x1000000,0), DAT_00854fec != 0) {
        if (DAT_00854fec == -0x7789fe3e) {
          st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)PTR_00854ee8);
        }
        else {
          if (((DAT_00854fec != -0x7789ff60) && (DAT_00854fec != -0x7789fe52)) ||
             (DAT_00854ed8 != 0)) break;
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
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      DAT_00854fec = (*(code *)g_int_00854FD4[0x8a])(PTR_00854ee8,g_int_00854FD4[0x8d]);
      if (DAT_00854fec == 0) {
        local_8 = 0;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        DAT_00854fec = (*(code *)g_int_00854FD4[0x8b])(0,g_int_00854FD4[0x8d]);
        local_8 = 0xffffffff;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
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
      DAT_00854f44 = *(uint **)(DAT_00854fdc + DAT_00854f60 * 4);
      *DAT_00854f44 = *DAT_00854f44 | 2;
      DAT_00854f44[0x1a] = 5;
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

  if (((*DAT_00854f44 & 0x80004) == 0x80004) && ((byte *)DAT_00854f44[0x30] != nullptr)) {
    st::fn_006CEA60((byte *)DAT_00854f44[0x30],DAT_00854f44[3],
             &DAT_00854f00->field_0x0 + DAT_00854f44[2] * (int)DAT_00854fe0 + DAT_00854f44[1],
             (int)DAT_00854fe0,DAT_00854f44[3],DAT_00854f44[4]);
  }
  DAT_00854edc = DAT_00854f44[0x1a];
  if ((int)DAT_00854edc < 5) {
    DAT_00854fd8 = DAT_00854f44 + 0x1c;
    DAT_00854ed8 = 0;
    if (0 < (int)DAT_00854edc) {
      do {
        _DAT_00854fb0 = *DAT_00854fd8 - DAT_00854ee0;
        _DAT_00854fb4 = (DAT_00854f24 - DAT_00854ee4) + DAT_00854fd8[1];
        DAT_00854fb8 = DAT_00854fd8[2];
        DAT_00854fbc = DAT_00854fd8[3];
        DAT_00854fec = st::fn_006CEF60(g_int_00854FD4,DAT_00854f00,DAT_00854fe0,(int)DAT_00854f44,
                                    DAT_00854f68,DAT_00854f58,*DAT_00854fd8,DAT_00854fd8[1],
                                    (int *)&DAT_00854fb0,DAT_00854f20,DAT_00854f9c,DAT_00854f1c,
                                    DAT_00854f5c);
        if (DAT_00854fe4 == 0) {
          DAT_00854fe4 = DAT_00854fec;
        }
        if (((DAT_00854ed4 == 0) &&
            (iVar2 = st::fn_006CFEB0(&DAT_00854ef0,(int *)DAT_00854fd8,DAT_00854f90), iVar2 != 0)) &&
           (local_EAX_386 =
                 st::fn_006D1AD0((int *)g_int_00854FD4[0x70],100,DAT_00854ef0,DAT_00854ef4,DAT_00854ef8
                              ,DAT_00854efc,g_int_00854FD4[3],g_int_00854FD4[4],1),
           local_EAX_386 == -1)) {
          DAT_00854ed4 = 1;
        }
        DAT_00854fd8 = DAT_00854fd8 + 4;
        DAT_00854ed8 = DAT_00854ed8 + 1;
      } while (DAT_00854ed8 < (int)DAT_00854edc);
      return;
    }
  }
  else {
    _DAT_00854fb4 = DAT_00854f24;
    _DAT_00854fb0 = 0;
    DAT_00854fec = st::fn_006CEF60(g_int_00854FD4,DAT_00854f00,DAT_00854fe0,(int)DAT_00854f44,
                                DAT_00854f68,DAT_00854f58,DAT_00854ee0,DAT_00854ee4,
                                (int *)&DAT_00854fb0,DAT_00854f20,DAT_00854f9c,DAT_00854f1c,
                                DAT_00854f5c);
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

// 006BEA40 FUN_006bea40
#line 4 "decomp/ST.exe/functions/006BEA40/decomp.c"
int st::fn_006BEA40(int *param_1,uint param_2)

{
  DDXContext *pDVar1;
  void **ppvVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  uint *local_90;
  int local_8c;
  int local_88;
  uint local_84;
  int local_80;
  int *local_7c;
  undefined1 *local_78;
  byte *local_74;
  int local_70;
  int *local_6c;
  int local_68;
  undefined1 local_64 [4];
  undefined4 local_60 [4];
  DDXContext *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  tagRECT local_3c;
  int *local_2c;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d968;
  puStack_10 = &st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff4c;
  pDVar1 = (DDXContext *)*param_1;
  iVar6 = 0;
  local_24 = 0;
  local_50 = pDVar1;
  if (DAT_00854fe8 != 0) {
    ExceptionList = &local_14;
    local_1c = &stack0xffffff4c;
    st::fn_006C4630(pDVar1,pDVar1->field_0044,local_60);
    g_tagBITMAPINFO_00854F74 =
         st::fn_006C4880
                   (pDVar1,DAT_00854f30,DAT_00854f34,DAT_00854f38,DAT_00854f3c,pDVar1->field_0020);
    st::fn_006C44E0(pDVar1,local_60);
    ExceptionList = local_14;
    return 0;
  }
  if ((*(uint *)&pDVar1->field_0x8 & 0x2000000) != 0) {
    ExceptionList = &local_14;
    ppvVar2 = &local_14;
    local_1c = &stack0xffffff4c;
    puVar3 = &stack0xffffff4c;
    if ((*(uint *)&pDVar1->field_0x8 & 0x1000000) != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      while (iVar4 = (**(code **)(**(int **)&pDVar1->field_0x48 + 0x14))
                               (*(int **)&pDVar1->field_0x48,0), ppvVar2 = ExceptionList,
            puVar3 = local_1c, iVar4 != 0) {
        if (iVar4 == -0x7789fe3e) {
          st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)pDVar1);
        }
        else {
          if (((iVar4 != -0x7789ff60) && (iVar4 != -0x7789fe52)) || (iVar6 != 0)) break;
          st::external_00000050(2);
        }
        iVar6 = iVar6 + 1;
        ppvVar2 = ExceptionList;
        puVar3 = local_1c;
        if (1 < iVar6) break;
      }
    }
    local_1c = puVar3;
    ExceptionList = ppvVar2;
    iVar4 = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    while (iVar6 = (**(code **)(**(int **)&pDVar1->field_0x34 + 0x2c))(), iVar6 != 0) {
      if (iVar6 == -0x7789fe3e) {
        st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)pDVar1);
      }
      else {
        if (((iVar6 != -0x7789ff60) && (iVar6 != -0x7789fe52)) || (iVar4 != 0)) break;
        st::external_00000050(2);
      }
      iVar4 = iVar4 + 1;
      if (1 < iVar4) break;
    }
    if ((iVar6 == -0x7789ff60) || (iVar6 == -0x7789fe52)) {
      iVar6 = 0;
    }
    goto cf_common_join_006BF619;
  }
  local_20 = *(int *)param_1[0x70];
  if (*(int *)&pDVar1->field_0x24 == pDVar1->field_0020) {
    if (((1 < local_20) && ((pDVar1->field_000C & 2) != 0)) &&
       ((param_1[4] * param_1[3] * 3) / (local_20 + 2) <= ((int *)param_1[0x70])[1])) {
      param_2 = param_2 | 1;
    }
    if ((*(uint *)&pDVar1->field_0x8 & 0x1000000) == 0) {
      local_3c.left = param_1[1];
      local_3c.top = param_1[2];
      local_3c.right = param_1[3];
      local_3c.bottom = param_1[4];
      ExceptionList = &local_14;
      local_1c = &stack0xffffff4c;
    }
    else {
      ExceptionList = &local_14;
      st::external_0000009C(*(HWND *)&pDVar1->field_0x4,&local_3c);
      param_2 = 1;
    }
    st::external_0000009B(*(HWND *)&pDVar1->field_0x4,(LPPOINT)&local_3c);
    if (param_2 == 0) {
      local_40 = local_3c.left;
      local_44 = local_3c.top;
      if (*(int *)&pDVar1[1].field_0x54 != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(**(int **)&pDVar1->field_0x2c + 0x58))();
        *(undefined4 *)&pDVar1[1].field_0x54 = 0;
      }
      piVar7 = (int *)(param_1[0x70] + 8);
      if (0 < local_20) {
        local_a8 = local_20;
        do {
          piVar7[2] = piVar7[2] + *piVar7;
          piVar7[3] = piVar7[3] + piVar7[1];
          local_3c.left = *piVar7 + local_40;
          local_3c.top = piVar7[1] + local_44;
          local_3c.right = piVar7[2] + local_40;
          local_3c.bottom = piVar7[3] + local_44;
          local_48 = 0;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          while (iVar6 = (**(code **)(**(int **)&pDVar1->field_0x34 + 0x14))
                                   (*(int **)&pDVar1->field_0x34,&local_3c), iVar6 != 0) {
            if (iVar6 == -0x7789fe3e) {
              st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)pDVar1);
            }
            else {
              if (((iVar6 != -0x7789ff60) && (iVar6 != -0x7789fe52)) || (local_48 != 0)) break;
              st::external_00000050(2);
            }
            local_48 = local_48 + 1;
            if (1 < local_48) break;
          }
          if ((iVar6 == -0x7789ff60) || (iVar6 == -0x7789fe52)) {
            iVar6 = 0;
            param_1[0x6d] = 1;
            param_1[0x6e] = 1;
          }
          if (local_24 == 0) {
            local_24 = iVar6;
          }
          piVar7 = piVar7 + 4;
          local_a8 = local_a8 + -1;
        } while (local_a8 != 0);
      }
    }
    else {
      local_3c.right = local_3c.right + local_3c.left;
      local_3c.bottom = local_3c.bottom + local_3c.top;
      iVar4 = 0;
      if (*(int *)&pDVar1[1].field_0x54 != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(**(int **)&pDVar1->field_0x2c + 0x58))();
        *(undefined4 *)&pDVar1[1].field_0x54 = 0;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      while (iVar6 = (**(code **)(**(int **)&pDVar1->field_0x34 + 0x14))
                               (*(int **)&pDVar1->field_0x34,&local_3c), iVar6 != 0) {
        if (iVar6 == -0x7789fe3e) {
          st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)pDVar1);
        }
        else {
          if (((iVar6 != -0x7789ff60) && (iVar6 != -0x7789fe52)) || (iVar4 != 0)) break;
          st::external_00000050(2);
        }
        iVar4 = iVar4 + 1;
        if (1 < iVar4) break;
      }
      if ((iVar6 == -0x7789ff60) || (iVar6 == -0x7789fe52)) {
        iVar6 = 0;
        param_1[0x6d] = 1;
        param_1[0x6e] = 1;
      }
    }
    goto cf_common_join_006BF619;
  }
  local_3c.left = param_1[1];
  local_3c.top = param_1[2];
  ExceptionList = &local_14;
  local_1c = &stack0xffffff4c;
  st::external_0000009B(*(HWND *)&pDVar1->field_0x4,(LPPOINT)&local_3c);
  local_40 = local_3c.left;
  local_44 = local_3c.top;
  local_3c.right = param_1[3] + local_3c.left;
  local_3c.bottom = param_1[4] + local_3c.top;
  local_48 = 0;
  while (iVar6 = st::fn_006BBED0(*(int **)&pDVar1->field_0x34,&local_74,&local_70,&local_3c),
        iVar6 != 0) {
    if (iVar6 == -0x7789fe3e) {
      st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)pDVar1);
    }
    else {
      if (((iVar6 != -0x7789ff60) && (iVar6 != -0x7789fe52)) || (local_48 != 0)) break;
      st::external_00000050(2);
    }
    local_48 = local_48 + 1;
    if (1 < local_48) break;
  }
  if ((iVar6 == -0x7789ff60) || (iVar6 == -0x7789fe52)) {
    iVar6 = 0;
    param_1[0x6d] = 1;
    param_1[0x6e] = 1;
    goto cf_common_join_006BF619;
  }
  if (iVar6 != 0) goto cf_common_join_006BF619;
  local_68 = 0;
  local_6c = nullptr;
  iVar4 = 0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar6 = (**(code **)(**(int **)&pDVar1->field_0x38 + 0xc))();
  if (iVar6 == 0) {
    local_8 = 0;
    st::fn_0072DA40();
    local_8 = 0xffffffff;
    local_78 = &stack0xffffff3c;
    local_1c = &stack0xffffff3c;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar6 = (**(code **)(**(int **)&pDVar1->field_0x38 + 0xc))
                      (*(int **)&pDVar1->field_0x38,&local_3c,&stack0xffffff3c,local_64);
    if (iVar6 == 0) {
      local_68 = iVar4;
      if (iVar4 < 1) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(**(int **)&pDVar1->field_0x34 + 0x80))(*(int **)&pDVar1->field_0x34,0);
        iVar6 = 0;
        goto cf_common_join_006BF619;
      }
      local_6c = &local_a4;
      if ((((iVar4 == 1) && (local_3c.left == local_a4)) && (local_3c.right == local_9c)) &&
         ((local_3c.top == local_a0 && (local_3c.bottom == local_98)))) {
        local_6c = nullptr;
        local_68 = 0;
      }
    }
  }
  if (0 < local_68) {
    piVar7 = local_6c + 1;
    iVar6 = local_68;
    do {
      piVar7[-1] = piVar7[-1] - local_40;
      piVar7[1] = piVar7[1] - local_40;
      *piVar7 = *piVar7 - local_44;
      piVar7[2] = piVar7[2] - local_44;
      piVar7 = piVar7 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar4 = 0;
  do {
    iVar6 = st::fn_006BBE40(pDVar1->field_0044,(uint *)&local_90,&local_94,0);
    if (iVar6 == 0) goto LAB_006bed50;
    if (iVar6 != -0x7789fe3e) break;
    st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)pDVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  if (iVar6 == 0) {
LAB_006bed50:
    local_8 = 1;
    if (local_6c != nullptr) {
      if (param_2 == 0) {
        local_2c = (int *)(param_1[0x70] + 8);
        for (local_4c = 0; local_4c < local_20; local_4c = local_4c + 1) {
          local_7c = local_6c;
          local_48 = 0;
          while (iVar4 = local_48, local_48 < local_68) {
            iVar5 = st::fn_006CFEB0(&local_8c,local_2c,local_7c);
            if (iVar5 == 0) goto switchD_006befc1_caseD_9;
            switch(*(undefined4 *)&pDVar1->field_0x24) {
            case 8:
              st::fn_006CEA60(local_74 + local_88 * local_70 + local_8c,local_70,
                       (byte *)(local_88 * local_94 + local_8c + (int)local_90),local_94,local_84,
                       local_80);
              local_48 = iVar4 + 1;
              local_7c = local_7c + 4;
              break;
            case 0x10:
              st::fn_006D05B0((undefined4 *)(local_74 + local_8c * 2 + local_88 * local_70),local_70,
                           (uint *)(local_88 * local_94 + local_8c + (int)local_90),local_94,
                           local_84,local_80,*(int *)&pDVar1[1].field_0x8);
              local_48 = iVar4 + 1;
              local_7c = local_7c + 4;
              break;
            case 0x18:
              st::fn_006D3A50((undefined2 *)(local_74 + local_8c * 3 + local_88 * local_70),local_70,
                           (byte *)(local_88 * local_94 + local_8c + (int)local_90),local_94,
                           local_84,local_80,*(int *)&pDVar1[1].field_0x8);
              local_48 = iVar4 + 1;
              local_7c = local_7c + 4;
              break;
            case 0x20:
              st::fn_006D39F0((undefined4 *)(local_74 + local_8c * 4 + local_88 * local_70),local_70,
                           (byte *)(local_88 * local_94 + local_8c + (int)local_90),local_94,
                           local_84,local_80,*(int *)&pDVar1[1].field_0x8);
            default:
switchD_006befc1_caseD_9:
              local_48 = iVar4 + 1;
              local_7c = local_7c + 4;
            }
          }
          local_2c = local_2c + 4;
        }
      }
      else {
        local_a4 = 0;
        local_a0 = 0;
        local_9c = param_1[3];
        local_98 = param_1[4];
        local_7c = local_6c;
        local_48 = 0;
        while (iVar4 = local_48, local_48 < local_68) {
          iVar5 = st::fn_006CFEB0(&local_8c,&local_a4,local_7c);
          if (iVar5 == 0) goto switchD_006bedda_caseD_9;
          switch(*(undefined4 *)&pDVar1->field_0x24) {
          case 8:
            st::fn_006CEA60(local_74 + local_88 * local_70 + local_8c,local_70,
                     (byte *)(local_88 * local_94 + local_8c + (int)local_90),local_94,local_84,
                     local_80);
            local_48 = iVar4 + 1;
            local_7c = local_7c + 4;
            break;
          case 0x10:
            st::fn_006D05B0((undefined4 *)(local_74 + local_8c * 2 + local_88 * local_70),local_70,
                         (uint *)(local_88 * local_94 + local_8c + (int)local_90),local_94,local_84,
                         local_80,*(int *)&pDVar1[1].field_0x8);
            local_48 = iVar4 + 1;
            local_7c = local_7c + 4;
            break;
          case 0x18:
            st::fn_006D3A50((undefined2 *)(local_74 + local_8c * 3 + local_88 * local_70),local_70,
                         (byte *)(local_88 * local_94 + local_8c + (int)local_90),local_94,local_84,
                         local_80,*(int *)&pDVar1[1].field_0x8);
            local_48 = iVar4 + 1;
            local_7c = local_7c + 4;
            break;
          case 0x20:
            st::fn_006D39F0((undefined4 *)(local_74 + local_8c * 4 + local_88 * local_70),local_70,
                         (byte *)(local_88 * local_94 + local_8c + (int)local_90),local_94,local_84,
                         local_80,*(int *)&pDVar1[1].field_0x8);
          default:
switchD_006bedda_caseD_9:
            local_48 = iVar4 + 1;
            local_7c = local_7c + 4;
          }
        }
      }
      goto switchD_006bf136_caseD_9;
    }
    if (param_2 == 0) {
      local_2c = (int *)(param_1[0x70] + 8);
      local_4c = 0;
      while (piVar7 = local_2c, local_4c < local_20) {
        switch(*(undefined4 *)&pDVar1->field_0x24) {
        case 8:
          st::fn_006CEA60(local_74 + *local_2c + local_70 * local_2c[1],local_70,
                   (byte *)((int)local_90 + *local_2c + local_94 * local_2c[1]),local_94,local_2c[2]
                   ,local_2c[3]);
          local_4c = local_4c + 1;
          local_2c = piVar7 + 4;
          break;
        case 0x10:
          st::fn_006D05B0((undefined4 *)(local_74 + *local_2c * 2 + local_70 * local_2c[1]),local_70,
                       (uint *)((int)local_90 + *local_2c + local_94 * local_2c[1]),local_94,
                       local_2c[2],local_2c[3],*(int *)&pDVar1[1].field_0x8);
          local_4c = local_4c + 1;
          local_2c = piVar7 + 4;
          break;
        case 0x18:
          st::fn_006D3A50((undefined2 *)(local_74 + *local_2c * 3 + local_70 * local_2c[1]),local_70,
                       (byte *)((int)local_90 + *local_2c + local_94 * local_2c[1]),local_94,
                       local_2c[2],local_2c[3],*(int *)&pDVar1[1].field_0x8);
          local_4c = local_4c + 1;
          local_2c = piVar7 + 4;
          break;
        case 0x20:
          st::fn_006D39F0((undefined4 *)(local_74 + *local_2c * 4 + local_70 * local_2c[1]),local_70,
                       (byte *)((int)local_90 + *local_2c + local_94 * local_2c[1]),local_94,
                       local_2c[2],local_2c[3],*(int *)&pDVar1[1].field_0x8);
        default:
          local_4c = local_4c + 1;
          local_2c = piVar7 + 4;
        }
      }
      goto switchD_006bf136_caseD_9;
    }
    switch(*(undefined4 *)&pDVar1->field_0x24) {
    case 8:
      st::fn_006CEA60(local_74,local_70,(byte *)local_90,local_94,param_1[3],param_1[4]);
    default:
switchD_006bf136_caseD_9:
      break;
    case 0x10:
      st::fn_006D05B0((undefined4 *)local_74,local_70,local_90,local_94,param_1[3],param_1[4],
                   *(int *)&pDVar1[1].field_0x8);
      break;
    case 0x18:
      st::fn_006D3A50((undefined2 *)local_74,local_70,(byte *)local_90,local_94,param_1[3],param_1[4],
                   *(int *)&pDVar1[1].field_0x8);
      break;
    case 0x20:
      st::fn_006D39F0((undefined4 *)local_74,local_70,(byte *)local_90,local_94,param_1[3],param_1[4],
                   *(int *)&pDVar1[1].field_0x8);
    }
    local_8 = 0xffffffff;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*pDVar1->field_0044 + 0x80))(pDVar1->field_0044,0);
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)&pDVar1->field_0x34 + 0x80))(*(int **)&pDVar1->field_0x34,0);
cf_common_join_006BF619:
  if ((iVar6 == -0x7789ff60) || (iVar6 == -0x7789fe52)) {
    iVar6 = 0;
  }
  if (local_24 == 0) {
    local_24 = iVar6;
  }
  ExceptionList = local_14;
  return local_24;
}

// 006BF710 FUN_006bf710
#line 4 "decomp/ST.exe/functions/006BF710/decomp.c"
undefined4
st::fn_006BF710(AnonShape_006BF710_259ECA93 *param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6,byte *param_7,int *param_8)

{
  byte *pbVar1;
  int iVar3;
  int iVar4;
  int iVar2;
  byte *pbVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  byte *pbVar18;
  int local_4c;
  int local_44;
  int local_3c;
  byte *local_34;
  byte *local_30;
  int local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079d980;
  puStack_10 = &st_image_0072D964;
  local_14 = ExceptionList;
  pbVar1 = param_1->field_0210;
  iVar4 = param_1->field_01E4;
  if (*(int *)(&param_1->field_0xf0 + iVar4 * 4) != 0) {
    iVar3 = param_1->field_01F4 * param_5 + param_4;
    local_24 = param_1->field_0204;
    if (local_24 != 0) {
      local_24 = local_24 + iVar3;
    }
    pbVar5 = param_1->field_021C;
    if (pbVar5 != nullptr) {
      pbVar5 = pbVar5 + iVar3;
    }
    local_8 = 0;
    iVar3 = param_1->field_0208;
    if (iVar3 == 0) {
      pbVar18 = param_1->field_0220;
      iVar17 = 0;
      iVar9 = 0;
      iVar6 = 0;
      iVar3 = 0;
      iVar16 = param_1->field_01F0;
      iVar15 = param_1->field_01EC;
      iVar14 = param_1->field_0218;
      iVar13 = param_1->field_0214;
      iVar12 = param_1->field_0200;
      iVar11 = param_1->field_01FC;
      iVar10 = param_1->field_01F4;
    }
    else {
      iVar9 = *(int *)(iVar3 + 4);
      pbVar18 = param_1->field_0220;
      iVar17 = *(int *)(iVar3 + 8);
      iVar6 = -((uint)*(ushort *)(iVar3 + 0xe) * iVar9 + 0x1f >> 3 & 0x1ffffffc);
      iVar3 = param_1->field_020C;
      iVar16 = param_1->field_01F0;
      iVar15 = param_1->field_01EC;
      iVar14 = param_1->field_0218;
      iVar13 = param_1->field_0214;
      iVar12 = param_1->field_0200;
      iVar11 = param_1->field_01FC;
      iVar10 = param_1->field_01F4;
    }
    ExceptionList = &local_14;
    st::fn_006D3D80(param_2 + *(int *)(&param_1->field_0x18 + iVar4 * 0x10) * param_3 +
                           *(int *)(&param_1->field_0x14 + iVar4 * 0x10),param_3,local_24,pbVar5,
                 iVar10,param_4,param_5,param_6,param_7,iVar11,iVar12,iVar13,iVar14,iVar15,iVar16,
                 iVar3,iVar6,iVar9,iVar17,pbVar1,pbVar18);
    if (*param_8 == 0) {
      iVar4 = param_1->field_01F4 + 7;
      iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3;
      local_30 = nullptr;
      if (pbVar1 != nullptr) {
        local_30 = pbVar1 + iVar4 * param_5 + (param_4 >> 3);
      }
      local_4c = *(int *)(&param_1->field_0x120 + param_1->field_01E4 * 8) +
                 param_1->field_01F0 * param_5;
      for (local_44 = 0; local_44 < (int)param_7; local_44 = local_44 + 1) {
        uVar8 = 0x80 >> ((byte)param_4 & 7);
        iVar3 = param_1->field_01EC;
        iVar9 = *(int *)(&param_1->field_0x11c + param_1->field_01E4 * 8) + iVar3 * param_4;
        local_34 = local_30;
        for (local_3c = 0; local_3c < param_6; local_3c = local_3c + 1) {
          if (((*local_34 & (byte)uVar8) != 0) &&
             (iVar2 = st::fn_006D1AD0(param_1->field_01C0,100,iVar9,local_4c,iVar3,param_1->field_01F0,
                                   param_1->field_000C,param_1->field_0010,1), iVar2 == -1)) {
            *param_8 = 1;
            break;
          }
          bVar7 = (byte)uVar8 >> 1;
          uVar8 = (uint)bVar7;
          if (bVar7 == 0) {
            uVar8 = 0x80;
            local_34 = local_34 + 1;
          }
          iVar3 = param_1->field_01EC;
          iVar9 = iVar9 + iVar3;
        }
        if (*param_8 != 0) {
          ExceptionList = local_14;
          return 0;
        }
        if (local_30 != nullptr) {
          local_30 = local_30 + iVar4;
        }
        local_4c = local_4c + param_1->field_01F0;
      }
    }
  }
  ExceptionList = local_14;
  return 0;
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
   Evidence: 006BFB90 -> EXTERNAL:0000004F @ 006BFBD0 | 006BFE70 -> 006BFB90 @ 006BFEB9 */

DWORD st::fn_006BFB90(HANDLE param_1,LPDWORD lpNumberOfBytesRead,LPVOID lpBuffer,
                  DWORD nNumberOfBytesToRead)

{
  DWORD DVar1;
  BOOL BVar2;
  DWORD DVar2;

  DVar1 = st::external_00000052(param_1,(LONG)lpNumberOfBytesRead,(PLONG)0x0,0);
  DVar2 = nNumberOfBytesToRead;
  if ((DVar1 != 0xffffffff) &&
     (BVar2 = st::external_0000004F(param_1,lpBuffer,nNumberOfBytesToRead,(LPDWORD)&lpNumberOfBytesRead,
                       (LPOVERLAPPED)0x0), BVar2 != 0)) {
    return -(uint)(lpNumberOfBytesRead != (LPDWORD)DVar2) & 0xfffffff2;
  }
  DVar1 = st::external_00000028();
  if (DVar1 != 0) {
    return DVar1;
  }
  return 0xffffff03;
}

// 006BFBF0 FUN_006bfbf0
#line 4 "decomp/ST.exe/functions/006BFBF0/decomp.c"
void st::fn_006BFBF0(AnonShape_006BFBF0_13F73F95 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  AnonShape_006BFBF0_13F73F95 *pAVar4;
  uint uVar5;
  DWORD DVar6;
  int iVar7;
  uint uVar8;
  byte *puVar9;
  byte *puVar11;
  uint local_34 [4];
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;

  pAVar4 = param_1;
  memset(local_34, 0, 0x24); /* compiler bulk-zero initialization */
  iVar7 = 0;
  local_24 = &param_1->field_0x8a;
  *(undefined4 *)&param_1->field_0x18 = 0x7fffffff;
  puVar9 = (byte *)&param_1->field_0x4c;
  puVar11 = (byte *)local_24;
  memmove(puVar11, puVar9, 0x32); /* compiler REP MOVS byte copy */
  local_34[0] = 0x24;
  if (*(short *)local_24 == 2) {
    *(undefined2 *)local_24 = 1;
    *(undefined2 *)&param_1->field_0x98 = 0x10;
    uVar5 = (int)((uint)*(ushort *)&param_1->field_0x8c * 0x10) >> 3;
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
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar7 = (**(code **)(*DAT_008568b4 + 0xc))(DAT_008568b4,local_34,puVar1,0);
  if (-1 < iVar7) {
    if ((local_34[1] & 2) != 0) {
      *(uint *)&pAVar4->field_0x4 = *(uint *)&pAVar4->field_0x4 | 0x4000;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar7 = (**(code **)(**(int **)puVar1 + 0x2c))
                      (*(int **)puVar1,0,local_34[2],&local_8,&param_1,&local_10,&local_c,0);
    if (iVar7 == 0) {
      st::fn_006BFE70(local_8,(AnonShape_006BFE70_9EDC24A5 *)pAVar4,param_1);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar7 = (**(code **)(**(int **)puVar1 + 0x4c))
                        (*(int **)puVar1,local_8,param_1,local_10,local_c);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if ((iVar7 == 0) &&
         (iVar7 = (**(code **)(**(int **)puVar1 + 0x3c))
                            (*(int **)puVar1,*(undefined4 *)&pAVar4->field_0x30), iVar7 == 0)) {
        piVar3 = *(int **)puVar1;
        if ((*(uint *)&pAVar4->field_0x4 & 0x1000) == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(*piVar3 + 0x40))(piVar3,*(undefined4 *)&pAVar4->field_0x34);
        }
        else {
          puVar2 = &pAVar4->field_0x10;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)*piVar3)(piVar3,&DAT_0079eaa8,puVar2);
          if (iVar7 != 0) {
            return;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(**(int **)puVar2 + 0x4c))
                            (*(int **)puVar2,*(undefined4 *)&pAVar4->field_0x38,
                             *(undefined4 *)&pAVar4->field_0x3c,*(undefined4 *)&pAVar4->field_0x40,1
                            );
          if (iVar7 != 0) {
            return;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(**(int **)puVar2 + 0x44))
                            (*(int **)puVar2,*(undefined4 *)&pAVar4->field_0x44,1);
          if (iVar7 != 0) {
            return;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(**(int **)puVar2 + 0x40))
                            (*(int **)puVar2,*(undefined4 *)&pAVar4->field_0x48,1);
          if (iVar7 != 0) {
            return;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(*DAT_008568bc + 0x44))(DAT_008568bc);
        }
        if (iVar7 == 0) {
          DVar6 = st::external_000000DA();
          *(DWORD *)&pAVar4->field_0x8 = DVar6;
          uVar5 = ~*(uint *)&pAVar4->field_0x4 >> 0xe & 1;
          if ((*(uint *)&pAVar4->field_0x4 & 1) != 0) {
            uVar5 = 1;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(**(int **)puVar1 + 0x30))(*(int **)puVar1,0,0,uVar5);
          if (iVar7 == 0) {
            *(uint *)pAVar4 = *(uint *)pAVar4 | 1;
          }
        }
      }
    }
  }
  return;
}

// 006BFE70 FUN_006bfe70
#line 4 "decomp/ST.exe/functions/006BFE70/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 006BFBF0 -> 006BFE70 @ 006BFD7F */

DWORD st::fn_006BFE70(undefined4 *param_1,AnonShape_006BFE70_9EDC24A5 *param_2,
                  AnonShape_006BFBF0_13F73F95 *param_3)

{
  short *psVar1;
  LPDWORD pDVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  AnonShape_006BFE70_9EDC24A5 *pAVar5;
  int iVar6;
  DWORD DVar7;
  AnonShape_006BFE70_9EDC24A5 *pAVar8;
  undefined2 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  DWORD local_c;
  undefined4 *local_8;

  pAVar5 = param_2;
  pbVar14 = g_lpBuffer_008568B0;
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
                (param_1,(AnonPointee_TLOBaseTy_0607 *)(param_2->field_0028 + iVar6),(uint)param_3);
    }
    else {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_c = st::fn_006BFB90(*(HANDLE *)(*(int *)(param_2->field_001C + 4) + 0xc),
                             (LPDWORD)param_2->field_0028,param_1,(DWORD)param_3);
    }
    param_2->field_0028 = &param_3->field_0x0 + param_2->field_0028;
    param_2->field_00C0 = param_2->field_00C0 - (int)param_3 / (int)(uint)param_2->field_0096;
    return local_c;
  }
  if ((param_2->field_0004 & 0x2000) == 0) {
    psVar1 = param_2->field_0024;
    iVar6 = *(int *)(psVar1 + 0xb);
    if (iVar6 == 0) {
      iVar6 = (-(uint)(*psVar1 != 1) & 0x24) + 0x1a + (int)psVar1;
    }
    pbVar14 = (byte *)(param_2->field_0028 + iVar6);
    local_8 = (undefined4 *)((int)param_3 * 2);
  }
  else {
    local_18 = param_2->field_005E + 0x3e + param_2->field_0020;
    pDVar2 = (LPDWORD)param_2->field_0028;
    local_8 = DAT_00856878;
    if (local_18 < (int)pDVar2 + (int)DAT_00856878) {
      local_8 = (undefined4 *)(local_18 - (int)pDVar2);
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
    puVar12 = param_1;
    if (0 < (int)param_3) {
      do {
        pvVar4 = g_lpBuffer_008568B0;
        iVar6 = pAVar5->field_00BC;
        if (iVar6 < 1) {
          pbVar15 = pbVar14;
          if ((int)local_8 < 0xe) {
            pDVar2 = (LPDWORD)pAVar5->field_0028;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = DAT_00856878;
            if (local_18 < (int)pDVar2 + (int)DAT_00856878) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = (undefined4 *)(local_18 - (int)pDVar2);
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            DVar7 = st::fn_006BFB90(*(HANDLE *)(*(int *)(pAVar5->field_001C + 4) + 0xc),pDVar2,
                                 g_lpBuffer_008568B0,(DWORD)param_1);
            if (DVar7 != 0) {
              return DVar7;
            }
            local_8 = param_1;
            local_c = 0;
            pbVar15 = pvVar4;
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
          local_8 = (undefined4 *)((int)local_8 - 0xe);
          pAVar5->field_0028 = pAVar5->field_0028 + 0xe;
          pAVar5->field_00BC = *(ushort *)&pAVar5->field_0x58 - 10;
          *(undefined2 *)puVar12 = *(undefined2 *)&pAVar5->field_0xa8;
          uVar9 = *(undefined2 *)&pAVar5->field_0xb8;
LAB_006c0125:
          STField<undefined2>(puVar12,2) = uVar9;
          puVar12 = puVar12 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = (AnonShape_006BFE70_9EDC24A5 *)&param_2->field_0004;
          pAVar5->field_00C0 = pAVar5->field_00C0 + -1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = puVar12;
        }
        else {
          if (iVar6 == *(ushort *)&pAVar5->field_0x58 - 10) {
            pAVar5->field_00BC = iVar6 + -4;
            *(undefined2 *)puVar12 = *(undefined2 *)&pAVar5->field_0xa4;
            uVar9 = *(undefined2 *)&pAVar5->field_0xb4;
            goto LAB_006c0125;
          }
          while (((int)param_2 < (int)param_3 &&
                 (iVar6 = pAVar5->field_00BC, pAVar5->field_00BC = iVar6 + -1,
                 pvVar4 = g_lpBuffer_008568B0, 0 < iVar6))) {
            if (pAVar5->field_00C0 < 1) {
              return local_c;
            }
            pbVar15 = pbVar14;
            if ((int)local_8 < 1) {
              pDVar2 = (LPDWORD)pAVar5->field_0028;
              local_8 = DAT_00856878;
              if (local_18 < (int)pDVar2 + (int)DAT_00856878) {
                local_8 = (undefined4 *)(local_18 - (int)pDVar2);
              }
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_c = st::fn_006BFB90(*(HANDLE *)(*(int *)(pAVar5->field_001C + 4) + 0xc),pDVar2,
                                     g_lpBuffer_008568B0,(DWORD)local_8);
              pbVar15 = pvVar4;
              if (local_c != 0) {
                return local_c;
              }
            }
            pbVar14 = pbVar15 + 1;
            uVar10 = (uint)(*pbVar15 >> 4);
            uVar13 = *pbVar15 & 0xf;
            local_8 = (undefined4 *)((int)local_8 - 1);
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
            if (7 < uVar13) {
              uVar13 = uVar13 - 0x10;
            }
            iVar6 = ((int)(*(int *)&pAVar5->field_0xb4 * local_1c +
                          local_20 * *(int *)&pAVar5->field_0xb8) >> 8) +
                    *(int *)&pAVar5->field_0xb0 * uVar13;
            if (iVar6 < 0x8000) {
              if (iVar6 < -0x8000) {
                iVar6 = -0x8000;
              }
            }
            else {
              iVar6 = 0x7fff;
            }
            iVar11 = *(int *)(PTR_DAT_007ede0c + uVar13 * 4) * *(int *)&pAVar5->field_0xb0 >> 8;
            *(int *)&pAVar5->field_0xb0 = iVar11;
            if (iVar11 < 0x10) {
              *(undefined4 *)&pAVar5->field_0xb0 = 0x10;
            }
            uVar3 = *(undefined4 *)&pAVar5->field_0xb4;
            *(int *)&pAVar5->field_0xb4 = iVar6;
            *(undefined4 *)&pAVar5->field_0xb8 = uVar3;
            STField<short>(param_1,2) = (short)iVar6;
            puVar12 = param_1 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = (AnonShape_006BFE70_9EDC24A5 *)&param_2->field_0004;
            pAVar5->field_00C0 = pAVar5->field_00C0 + -1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = puVar12;
          }
        }
        if (pAVar5->field_00C0 < 1) {
          return local_c;
        }
        if ((int)param_3 <= (int)param_2) {
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
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = nullptr;
    if (0 < (int)param_3) {
      do {
        pvVar4 = g_lpBuffer_008568B0;
        uVar10 = pAVar5->field_00BC;
        if ((int)uVar10 < 1) {
          if ((int)local_8 < 7) {
            pDVar2 = (LPDWORD)pAVar5->field_0028;
            local_8 = DAT_00856878;
            if (local_18 < (int)pDVar2 + (int)DAT_00856878) {
              local_8 = (undefined4 *)(local_18 - (int)pDVar2);
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_c = st::fn_006BFB90(*(HANDLE *)(*(int *)(pAVar5->field_001C + 4) + 0xc),pDVar2,
                                   g_lpBuffer_008568B0,(DWORD)local_8);
            pbVar14 = pvVar4;
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
          local_8 = (undefined4 *)((int)local_8 - 7);
          pAVar5->field_0028 = pAVar5->field_0028 + 7;
          pAVar5->field_00BC = (uint)*(ushort *)&pAVar5->field_0x58 * 2 + -0xc;
          *(undefined2 *)param_1 = *(undefined2 *)&pAVar5->field_0xa8;
LAB_006c0455:
          pAVar5->field_00C0 = pAVar5->field_00C0 + -1;
          puVar12 = (undefined4 *)((int)param_1 + 2);
          pAVar8 = (AnonShape_006BFE70_9EDC24A5 *)&param_2->field_0x2;
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
              local_8 = DAT_00856878;
              if (local_18 < (int)pDVar2 + (int)DAT_00856878) {
                local_8 = (undefined4 *)(local_18 - (int)pDVar2);
              }
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_c = st::fn_006BFB90(*(HANDLE *)(*(int *)(pAVar5->field_001C + 4) + 0xc),pDVar2,
                                     g_lpBuffer_008568B0,(DWORD)local_8);
              pbVar14 = pvVar4;
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
            local_8 = (undefined4 *)((int)local_8 - 1);
            *(int *)&pAVar5->field_0xa4 = iVar6;
            pAVar5->field_0028 = pAVar5->field_0028 + 1;
            *(short *)param_1 = (short)iVar6;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = (undefined4 *)((int)param_1 + 2);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = (AnonShape_006BFE70_9EDC24A5 *)&param_2->field_0x2;
            pAVar5->field_00BC = pAVar5->field_00BC + -1;
            pAVar5->field_00C0 = pAVar5->field_00C0 + -1;
          }
          puVar12 = param_1;
          pAVar8 = param_2;
          if ((int)param_2 < (int)param_3) {
            while (pvVar4 = g_lpBuffer_008568B0, puVar12 = param_1, pAVar8 = param_2,
                  0 < pAVar5->field_00BC) {
              if (pAVar5->field_00C0 < 1) {
                return local_c;
              }
              if ((int)local_8 < 1) {
                pDVar2 = (LPDWORD)pAVar5->field_0028;
                local_8 = DAT_00856878;
                if (local_18 < (int)pDVar2 + (int)DAT_00856878) {
                  local_8 = (undefined4 *)(local_18 - (int)pDVar2);
                }
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                local_c = st::fn_006BFB90(*(HANDLE *)(*(int *)(pAVar5->field_001C + 4) + 0xc),pDVar2,
                                       g_lpBuffer_008568B0,(DWORD)local_8);
                pbVar14 = pvVar4;
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
              puVar12 = (undefined4 *)((int)param_1 + 2);
              iVar6 = pAVar5->field_00C0 + -1;
              pAVar5->field_00BC = pAVar5->field_00BC + -1;
              pAVar5->field_00C0 = iVar6;
              pAVar8 = (AnonShape_006BFE70_9EDC24A5 *)&param_2->field_0x2;
              if (((int)param_3 <= (int)pAVar8) || (iVar6 < 1)) break;
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
              *(short *)puVar12 = (short)iVar6;
              local_8 = (undefined4 *)((int)local_8 - 1);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = param_1 + 1;
              pAVar5->field_00BC = pAVar5->field_00BC + -1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_2 = (AnonShape_006BFE70_9EDC24A5 *)&param_2->field_0004;
              pAVar5->field_00C0 = pAVar5->field_00C0 + -1;
              puVar12 = param_1;
              pAVar8 = param_2;
              if ((int)param_3 <= (int)param_2) break;
            }
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = pAVar8;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = puVar12;
        if (pAVar5->field_00C0 < 1) {
          return local_c;
        }
        if ((int)param_3 <= (int)param_2) {
          return local_c;
        }
      } while( true );
    }
  }
  return local_c;
}

