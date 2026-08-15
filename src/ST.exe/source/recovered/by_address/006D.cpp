#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/006D.cpp

// 006D0020 FUN_006d0020
#line 4 "decomp/ST.exe/functions/006D0020/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006D0020 -> 006CE8C0 @ 006D00B5 | 006D0020 -> EXTERNAL:0000009F @ 006D00AA | 006D0020
   -> EXTERNAL:000000A2 @ 006D005D | 006D0020 -> EXTERNAL:000000B5 @ 006D006A

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 006D0020 -> EXTERNAL:0000009F @ 006D00AA */

void st::fn_006D0020(HDC hdc,undefined4 param_2,undefined4 param_3,LPRECT lprc,int param_5,int param_6,
                 int param_7,int param_8)

{
  LPCSTR lpchText;
  char cVar1;
  COLORREF color;
  HDC pHVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  LPCSTR pCVar6;
  tagRECT local_14;

  pHVar2 = hdc;
  iVar4 = st::fn_006CE770((uint)hdc,st::pointer_boundary_cast<undefined4 *>(&hdc));
  iVar3 = param_8;
  if (iVar4 == 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::external_000000B6(hdc,*(COLORREF *)(param_8 + 0xc));
    color = *(COLORREF *)(iVar3 + 0x10);
    if (color == 0xffffffff) {
      st::external_000000A2(hdc,1);
    }
    else {
      st::external_000000B5(hdc,color);
    }
    local_14.left = (LONG)lprc;
    local_14.right = (int)&lprc->left + param_6;
    local_14.top = param_5;
    local_14.bottom = param_5 + param_7;
    lpchText = (LPCSTR)(iVar3 + 0x18);
    uVar5 = 0xffffffff;
    pCVar6 = lpchText;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pCVar6;
      pCVar6 = pCVar6 + 1;
    } while (cVar1 != '\0');
    st::external_0000009F(hdc,lpchText,~uVar5 - 1,st::pointer_boundary_cast<LPRECT>(&local_14),0x800);
    st::fn_006CE8C0((int)pHVar2,hdc);
  }
  return;
}

// 006D00D0 FUN_006d00d0
#line 1 "decomp/ST.exe/functions/006D00D0/decomp.c"

void st::fn_006D00D0(int *param_1,uint param_2)

{
  uint *puVar1;

  if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
    st::external_00000018((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
  }
  if ((param_2 < (uint)param_1[0x68]) &&
     (puVar1 = *(uint **)(param_1[0x6c] + param_2 * 4), (*puVar1 & 0xc000) == 0xc000)) {
    st::fn_006AB060(puVar1 + 0x30);
    st::fn_006B3BB0(param_1,param_2);
  }
  if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
    st::external_00000019((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
  }
  return;
}

// 006D0150 FUN_006d0150
#line 1 "decomp/ST.exe/functions/006D0150/decomp.c"

/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006D0150 -> 0072E340 @ 006D01CC */

void st::fn_006D0150(int *param_1,uint param_2,char *source)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  size_t sVar5;
  uint *puVar6;
  char *pcVar7;
  size_t *psVar8;

  if (param_2 < (uint)param_1[0x68]) {
    puVar2 = *(uint **)(param_1[0x6c] + param_2 * 4);
    if ((*puVar2 & 0xc000) == 0xc000) {
      puVar6 = (uint *)puVar2[0x30];
      uVar4 = 0xffffffff;
      pcVar7 = source;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      psVar8 = puVar6 + 5;
      sVar5 = ~uVar4 - 1;
      if ((int)puVar6[5] < (int)sVar5) {
        puVar3 = (uint *)st::fn_006BFB50((int *)puVar6,~uVar4 + 0x18);
        if (puVar3 != nullptr) {
          psVar8 = puVar3 + 5;
          puVar2[0x30] = (uint)puVar3;
          *psVar8 = sVar5;
          puVar6 = puVar3;
        }
      }
      st::fn_0072E340((char *)(puVar6 + 6),source,*psVar8);
      st::fn_006B3640(param_1,*puVar6,0xffffffff,puVar6[1],puVar6[2]);
    }
  }
  return;
}

// 006D0200 FUN_006d0200
#line 4 "decomp/ST.exe/functions/006D0200/decomp.c"
void __cdecl st::fn_006D0200(int *param_1,uint param_2,byte *param_3)

{
  alignas(4) byte st_stack_frame[552];

  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  size_t sVar5;
  uint *puVar6;
  char *pcVar7;
  size_t *psVar8;
  char local_204 [511];
  undefined1 local_5;

  if (param_2 < (uint)param_1[0x68]) {
    puVar2 = *(uint **)(param_1[0x6c] + param_2 * 4);
    if ((*puVar2 & 0xc000) == 0xc000) {
      puVar6 = (uint *)puVar2[0x30];
      st::fn_007300E0(st::pointer_boundary_cast<undefined1 *>(local_204),0x1ff,param_3,(undefined4 *)(st_stack_frame + 548));
      uVar4 = 0xffffffff;
      local_5 = 0;
      pcVar7 = local_204;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      psVar8 = puVar6 + 5;
      sVar5 = ~uVar4 - 1;
      if ((int)puVar6[5] < (int)sVar5) {
        puVar3 = (uint *)st::fn_006BFB50((int *)puVar6,~uVar4 + 0x18);
        if (puVar3 != nullptr) {
          psVar8 = puVar3 + 5;
          puVar2[0x30] = (uint)puVar3;
          *psVar8 = sVar5;
          puVar6 = puVar3;
        }
      }
      st::fn_0072E340((char *)(puVar6 + 6),local_204,*psVar8);
      st::fn_006B3640(param_1,*puVar6,0xffffffff,puVar6[1],puVar6[2]);
    }
  }
  return;
}

// 006D02E0 FUN_006d02e0
#line 1 "decomp/ST.exe/functions/006D02E0/decomp.c"

void st::fn_006D02E0(int *param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;

  if ((param_2 < (uint)param_1[0x68]) &&
     (puVar1 = *(uint **)(param_1[0x6c] + param_2 * 4), (*puVar1 & 0xc000) == 0xc000)) {
    puVar1 = (uint *)puVar1[0x30];
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    st::fn_006B3640(param_1,*puVar1,0xffffffff,param_3,param_4);
  }
  return;
}

// 006D0330 FUN_006d0330
#line 1 "decomp/ST.exe/functions/006D0330/decomp.c"

void st::fn_006D0330(int *param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;

  if ((param_2 < (uint)param_1[0x68]) &&
     (puVar1 = *(uint **)(param_1[0x6c] + param_2 * 4), (*puVar1 & 0xc000) == 0xc000)) {
    puVar1 = (uint *)puVar1[0x30];
    st::fn_006B2800((DDXContext_008075A8 *)param_1,*puVar1,param_3,param_4);
    st::fn_006B3640(param_1,*puVar1,0xffffffff,puVar1[1],puVar1[2]);
  }
  return;
}

// 006D0390 FUN_006d0390
#line 1 "decomp/ST.exe/functions/006D0390/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006D0390 -> EXTERNAL:000000B7 @ 006D03CA

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006D0390 -> EXTERNAL:000000B7 @ 006D03CA

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006D0390 -> EXTERNAL:000000B7 @ 006D03CA */

void st::fn_006D0390(HDC hdc,int xDest,int yDest,BITMAPINFO *param_4,void *param_5)

{
  uint uVar1;
  DWORD h;
  uint uVar2;

  if (param_5 == nullptr) {
    param_5 = (void *)st::fn_006B4FA0((int *)param_4);
  }
  uVar1 = (param_4->bmiHeader).biHeight;
  uVar2 = (int)uVar1 >> 0x1f;
  h = (uVar1 ^ uVar2) - uVar2;
  st::external_000000B7(hdc,xDest,yDest,(param_4->bmiHeader).biWidth,h,0,0,0,h,param_5,param_4,0);
  return;
}

// 006D03E0 FUN_006d03e0
#line 1 "decomp/ST.exe/functions/006D03E0/decomp.c"

void st::fn_006D03E0(HDC param_1,int param_2,int param_3,BITMAPINFO *param_4,void *param_5,int param_6,
                 int param_7,DWORD param_8,DWORD param_9)

{
  UINT cLines;

  if (param_5 == nullptr) {
    param_5 = (void *)st::fn_006B4FA0((int *)param_4);
  }
  cLines = (param_4->bmiHeader).biHeight;
  if (-1 < (int)cLines) {
    st::external_000000B7(param_1,param_2,param_3,param_8,param_9,param_6,(cLines - param_7) - param_9,0
                      ,cLines,param_5,param_4,0);
    return;
  }
  st::external_000000B7(param_1,param_2,param_3,param_8,param_9,param_6,param_7,0,-cLines,param_5,
                    param_4,0);
  return;
}

// 006D0460 FUN_006d0460
#line 1 "decomp/ST.exe/functions/006D0460/decomp.c"

void st::fn_006D0460(HDC param_1,int param_2,int param_3,BITMAPINFO *param_4,void *param_5,int param_6,
                 int param_7,DWORD param_8,DWORD param_9)

{
  int iVar1;
  int iVar2;
  RGBQUAD *pRVar3;
  UINT cLines;
  BITMAPINFO *pBVar4;
  UINT ColorUse;
  BITMAPINFO local_22c [12];

  if (param_5 == nullptr) {
    param_5 = (void *)st::fn_006B4FA0((int *)param_4);
  }
  cLines = (param_4->bmiHeader).biHeight;
  iVar1 = st::fn_006B4FE0((int)param_4);
  if (((iVar1 == 0) || (0x100 < iVar1)) || ((param_4->bmiHeader).biCompression != 0)) {
    ColorUse = 0;
    if (-1 < (int)cLines) {
      st::external_000000B7(param_1,param_2,param_3,param_8,param_9,param_6,(cLines - param_7) - param_9
                        ,0,cLines,param_5,param_4,0);
      return;
    }
  }
  else {
    pBVar4 = local_22c;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      (pBVar4->bmiHeader).biSize = (param_4->bmiHeader).biSize;
      param_4 = (BITMAPINFO *)&(param_4->bmiHeader).biWidth;
      pBVar4 = (BITMAPINFO *)&(pBVar4->bmiHeader).biWidth;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      pRVar3 = local_22c[0].bmiColors;
      do {
        pRVar3->rgbBlue = (char)(short)iVar2;
        pRVar3->rgbGreen = (char)((ushort)(short)iVar2 >> 8);
        iVar2 = iVar2 + 1;
        pRVar3 = (RGBQUAD *)&pRVar3->rgbRed;
      } while (iVar2 < iVar1);
    }
    ColorUse = 1;
    if (-1 < (int)cLines) {
      param_4 = local_22c;
      param_7 = (cLines - param_7) - param_9;
      goto LAB_006d050e;
    }
    param_4 = local_22c;
  }
  cLines = -cLines;
LAB_006d050e:
  st::external_000000B7(param_1,param_2,param_3,param_8,param_9,param_6,param_7,0,cLines,param_5,param_4
                    ,ColorUse);
  return;
}

// 006D0570 FUN_006d0570
#line 1 "decomp/ST.exe/functions/006D0570/decomp.c"

void st::fn_006D0570(HDC param_1,int param_2,int param_3,BITMAPINFO *param_4,void *param_5)

{
  uint uVar1;
  uint uVar2;

  uVar1 = (param_4->bmiHeader).biHeight;
  uVar2 = (int)uVar1 >> 0x1f;
  st::fn_006D0460(param_1,param_2,param_3,param_4,param_5,0,0,(param_4->bmiHeader).biWidth,
               (uVar1 ^ uVar2) - uVar2);
  return;
}

// 006D05B0 FUN_006d05b0
#line 4 "decomp/ST.exe/functions/006D05B0/decomp.c"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void st::fn_006D05B0(undefined4 *param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;

  if (0 < param_6) {
    do {
      iVar3 = param_5;
      puVar5 = param_3;
      puVar7 = param_1;
      if (((uint)param_1 & 2) == 0) {
LAB_006d05f0:
        iVar4 = iVar3 + -2;
        while (bVar2 = 1 < iVar3, iVar3 = iVar4, puVar6 = puVar5, puVar8 = puVar7, bVar2) {
          uVar1 = *puVar5;
          puVar6 = (uint *)((int)puVar5 + 2);
          *puVar7 = CONCAT22(*(undefined2 *)(param_7 + (uVar1 >> 8 & 0xff) * 2),
                             *(undefined2 *)(param_7 + (uVar1 & 0xff) * 2));
          puVar8 = puVar7 + 1;
          iVar3 = iVar4 + -2;
          if (iVar4 < 2) break;
          puVar5 = puVar5 + 1;
          *puVar8 = CONCAT22(*(undefined2 *)(param_7 + (uVar1 >> 0x18) * 2),
                             *(undefined2 *)(param_7 + (uVar1 >> 0x10 & 0xff) * 2));
          puVar7 = puVar7 + 2;
          iVar4 = iVar4 + -4;
        }
        if (iVar3 != -2) {
          *(undefined2 *)puVar8 = *(undefined2 *)(param_7 + (uint)(byte)*puVar6 * 2);
        }
      }
      else {
        puVar5 = (uint *)((int)param_3 + 1);
        *(undefined2 *)param_1 = *(undefined2 *)(param_7 + (uint)(byte)*param_3 * 2);
        puVar7 = (undefined4 *)((int)param_1 + 2);
        iVar3 = param_5 + -1;
        if (iVar3 != 0 && 0 < param_5) goto LAB_006d05f0;
      }
      param_3 = (uint *)((int)param_3 + param_4);
      param_1 = (undefined4 *)((int)param_1 + param_2);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}

// 006D0680 FUN_006d0680
#line 4 "decomp/ST.exe/functions/006D0680/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

undefined4
st::fn_006D0680(RecoveredSourceFamily_dibcopy *param_1,int *param_2,uint *param_3,
            RecoveredSourceFamily_dibcopy *param_4,int *param_5,uint *param_6)

{
  uint uVar1;
  int iVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14 [3];
  int local_8;

  if ((0 < param_2[2]) && (0 < param_2[3])) {
    local_14[1] = 0;
    local_14[0] = 0;
    local_14[2] = param_4->field_0004;
    uVar1 = (uint)param_4->field_000E * local_14[2] + 0x1f >> 3 & 0x1ffffffc;
    *param_6 = uVar1;
    local_8 = param_4->field_0008;
    if (local_8 < 0) {
      local_8 = -local_8;
      *param_6 = -uVar1;
    }
    iVar2 = st::fn_006B0460(&local_24,param_5,local_14);
    if (iVar2 != 0) {
      local_14[1] = 0;
      *param_2 = *param_2 + (local_24 - *param_5);
      local_14[0] = 0;
      param_2[1] = st::machine_word_boundary_cast<int>(param_2[1] + (local_20 - param_5[1]));
      *param_5 = local_24;
      param_5[1] = local_20;
      param_5[2] = local_1c;
      param_5[3] = local_18;
      param_2[3] = local_18;
      param_2[2] = local_1c;
      local_14[2] = param_1->field_0004;
      uVar1 = (uint)param_1->field_000E * local_14[2] + 0x1f >> 3 & 0x1ffffffc;
      *param_3 = uVar1;
      local_8 = param_1->field_0008;
      if (local_8 < 0) {
        local_8 = -local_8;
        *param_3 = -uVar1;
      }
      iVar2 = st::fn_006B0460(&local_24,param_2,local_14);
      if (iVar2 != 0) {
        *param_5 = *param_5 + (local_24 - *param_2);
        param_5[1] = st::machine_word_boundary_cast<int>(param_5[1] + (local_20 - param_2[1]));
        *param_2 = local_24;
        param_2[1] = local_20;
        param_2[2] = local_1c;
        param_2[3] = local_18;
        param_5[2] = local_1c;
        param_5[3] = local_18;
        return 1;
      }
    }
  }
  return 0;
}

// 006D07D0 FUN_006d07d0
#line 1 "decomp/ST.exe/functions/006D07D0/decomp.c"

/* [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /WinDef.h/UINT; no intervening CALL or EAX/AX/AL/AH definition exists; machine CFG audit: used=2,
   ignored=0, unknown=0 */

UINT st::fn_006D07D0(int param_1,HPALETTE param_2,int param_3)

{
  UINT UVar1;

  UVar1 = st::external_000000B2
                    (param_2,(param_3 >> 3 & 0xfcU | (uint)(byte)((char)param_3 << 3) << 8) << 8 |
                             param_3 >> 8 & 0xf8U);
  *(char *)(param_1 + param_3) = (char)UVar1;
  return UVar1;
}

// 006D0820 FUN_006d0820
#line 4 "decomp/ST.exe/functions/006D0820/decomp.c"
/* [STPrototypeApplier] Propagated parameter 6.
   Evidence: 006D0820 -> 006B0460 @ 006D089A */

void st::fn_006D0820(int param_1,int param_2,int param_3,int param_4,
                 AnonShape_006D0820_E08F8169 *param_5,int param_6,int *param_7,int param_8,
                 int param_9,int param_10,int param_11,HPALETTE param_12)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  char *pcVar8;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  UINT UVar4;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_6 == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = st::fn_006B4FA0((int *)param_5);
  }
  local_1c = param_5->field_0004;
  local_18 = param_5->field_0008;
  uVar5 = (uint)param_5->field_000E * local_1c + 0x1f >> 3 & 0x1ffffffc;
  local_20 = 0;
  local_24 = 0;
  uVar6 = -uVar5;
  if (local_18 < 0) {
    local_18 = -local_18;
    uVar6 = uVar5;
  }
  local_10 = param_8;
  local_14 = param_7;
  local_c = param_9;
  local_8 = param_10;
  iVar3 = st::fn_006B0460((int *)&local_14,(int *)&local_14,&local_24);
  if (iVar3 != 0) {
    pcVar8 = (char *)((int)local_14 +
                     param_3 + param_1 + (((local_10 - param_8) + param_4) * param_2 - (int)param_7)
                     );
    if ((int)uVar6 < 0) {
      iVar3 = -(((local_18 - local_10) + -1) * uVar6);
    }
    else {
      iVar3 = local_10 * uVar6;
    }
    puVar7 = (ushort *)(iVar3 + param_6 + (int)local_14 * 2);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = local_c;
    if ((param_5->field_0010 == 3) && (param_5->field_0028 == 0xf800)) {
      if (0 < local_8) {
        do {
          local_8 = local_8 + -1;
          iVar3 = param_6;
          if (0 < param_6) {
            do {
              uVar5 = (uint)*puVar7;
              puVar7 = puVar7 + 1;
              cVar2 = *(char *)(uVar5 + param_11);
              if (uVar5 < 0x8001) {
                if (cVar2 == -1) goto LAB_006d0950;
              }
              else if (cVar2 == '\0') {
LAB_006d0950:
                UVar4 = st::fn_006D07D0(param_11,param_12,uVar5);
                cVar2 = (char)UVar4;
              }
              *pcVar8 = cVar2;
              pcVar8 = pcVar8 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + -1;
              iVar3 = local_c;
            } while (param_6 != 0);
          }
          pcVar8 = pcVar8 + (param_2 - iVar3);
          puVar7 = (ushort *)((int)puVar7 + uVar6 + iVar3 * -2);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = iVar3;
          if (local_8 < 1) {
            return;
          }
        } while( true );
      }
    }
    else {
      while (0 < local_8) {
        local_8 = local_8 + -1;
        iVar3 = param_6;
        if (0 < param_6) {
          do {
            uVar1 = *puVar7;
            puVar7 = puVar7 + 1;
            uVar5 = (uVar1 & 0x7fe0) << 1 | uVar1 & 0x1f;
            cVar2 = *(char *)(uVar5 + param_11);
            if (uVar5 < 0x8001) {
              if (cVar2 == -1) goto LAB_006d09e1;
            }
            else if (cVar2 == '\0') {
LAB_006d09e1:
              UVar4 = st::fn_006D07D0(param_11,param_12,uVar5);
              cVar2 = (char)UVar4;
            }
            *pcVar8 = cVar2;
            pcVar8 = pcVar8 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + -1;
            iVar3 = local_c;
          } while (param_6 != 0);
        }
        pcVar8 = pcVar8 + (param_2 - iVar3);
        puVar7 = (ushort *)((int)puVar7 + uVar6 + iVar3 * -2);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = iVar3;
      }
    }
  }
  return;
}

// 006D0CC0 FUN_006d0cc0
#line 1 "decomp/ST.exe/functions/006D0CC0/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 006D0CC0 returns return of Library::DKW::DDX::FUN_006d0a20 @ 006D0CE9 */

int st::fn_006D0CC0(uint param_1,int *param_2,BITMAPINFO *param_3,uint *param_4)

{
  int iVar1;

  iVar1 = st::fn_006D0A20
                    (param_1,param_2,0,0,param_3,param_4,0,0,(param_3->bmiHeader).biWidth,
                     (param_3->bmiHeader).biHeight);
  return iVar1;
}

// 006D0CF0 FUN_006d0cf0
#line 4 "decomp/ST.exe/functions/006D0CF0/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 006D0CF0 -> 006CEBE0 @ 006D0E8F | 006D0CF0 -> 006D13C0 @ 006D0ECE

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

undefined4
st::fn_006D0CF0(AnonShape_006D0CF0_F5F86399 *param_1,int param_2,int param_3,
            RecoveredSourceFamily_dibcopy *param_4,char *param_5,int param_6,int param_7,int param_8
            ,int param_9,byte param_10)

{
  alignas(4) byte st_stack_frame[124];

  undefined1 *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c [2];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  uint local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_0079daa0);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 32);
  if (((param_1->field_0474 == 0) || (0x10 < param_1->field_0020)) || (param_4->field_000E != 8)) {
    return 0xffffffd0;
  }
  if ((param_8 < 1) || (param_9 < 1)) {
    return 0;
  }
  ExceptionList = &local_14;
  puVar1 = (st_stack_frame + 32);
  if (param_5 == nullptr) {
    ExceptionList = &local_14;
    param_5 = (char *)st::fn_006B4FA0((int *)param_4);
    puVar1 = local_1c;
  }
  local_1c = puVar1;
  local_24 = 0;
  iVar5 = param_2 + param_1->field_0010;
  iVar4 = param_3 + param_1->field_0014;
  local_2c = param_8;
  local_28 = param_9;
  local_34 = iVar5;
  local_30 = iVar4;
  iVar2 = st::fn_006CFEB0(&local_34,&local_34,(int *)&param_1->field_0x484);
  if (iVar2 != 0) {
    param_1->field_0050 =st::machine_word_boundary_cast<int>(
         param_1->field_0478 /
         ((int)(param_1->field_0020 + (param_1->field_0020 >> 0x1f & 7U)) >> 3));
    local_4c = param_6 + (local_34 - iVar5);
    local_48 = param_7 + (local_30 - iVar4);
    local_44 = local_2c;
    local_40 = local_28;
    iVar2 = st::fn_006D0680((RecoveredSourceFamily_dibcopy *)&param_1->field_0x4c,&local_34,&local_20,
                         param_4,&local_4c,local_3c);
    if (iVar2 != 0) {
      if ((int)local_3c[0] < 0) {
        iVar2 = -((local_40 + -1 + local_48) * local_3c[0]);
      }
      else {
        iVar2 = ((param_4->field_0008 - local_40) - local_48) * local_3c[0];
      }
      iVar4 = st::machine_word_boundary_cast<int>(param_1->field_0020 * local_34);
      puVar3 = (uint *)((((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) -
                        (local_28 + -1 + local_30) * local_20) + param_1->field_0474);
      local_8 = 0;
      if (param_1->field_0020 == 8) {
        st::fn_006CEBE0((char *)puVar3,local_20,param_5 + local_4c + iVar2,local_3c[0],local_2c,
                     local_28,param_10);
        ExceptionList = local_14;
        return local_24;
      }
      st::fn_006D13C0(puVar3,local_20,(byte *)(param_5 + local_4c + iVar2),local_3c[0],local_2c,
                   local_28,param_1->field_04C0,param_10);
      ExceptionList = local_14;
      return local_24;
    }
  }
  ExceptionList = local_14;
  return local_24;
}

// 006D0F50 FUN_006d0f50
#line 4 "decomp/ST.exe/functions/006D0F50/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006D0F50(AnonShape_006D0F50_D22E7C78 *param_1,int param_2,uint *param_3,int param_4,
                 uint param_5,int param_6,int param_7,byte param_8,uint param_9)

{
  int _param_8 = static_cast<int>(param_8);

  int iVar1;
  AnonShape_006D0F50_D22E7C78 AVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  if (0 < (int)param_5) {
    if (param_9 != 0xffffffff) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      auto _param_8 = CONCAT13(param_8,CONCAT12(param_8,CONCAT11(param_8,param_8)));
      /* ST_PSEUDO[stack_slot_reuse,packed_or_unaligned_piece]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable; expected named packed member, bit extract/compose, or unaligned load */
      param_9 = CONCAT13((byte)param_9,CONCAT12((byte)param_9,CONCAT11((byte)param_9,(byte)param_9))
                        );
      do {
        uVar7 = param_5 >> 2;
        if (param_5 >> 2 != 0) {
          do {
            while( true ) {
              uVar6 = *param_3;
              param_3 = param_3 + 1;
              if (uVar6 == _param_8) break;
              if (uVar6 == param_9) {
                param_1 = param_1 + 1;
                uVar6 = uVar7 - 1;
                bVar3 = (int)uVar7 < 1;
                uVar7 = uVar6;
                if (uVar6 == 0 || bVar3) goto LAB_006d105f;
              }
              else {
                if ((byte)uVar6 != (byte)param_9) {
                  if ((byte)uVar6 == param_8) {
                    uVar6 = STReplaceLowByte((uint32_t)(uVar6), (uint8_t)(*(undefined1 *)(param_7 + (uint)*(byte *)param_1)));
                  }
                  *(byte *)param_1 = (byte)uVar6;
                }
                uVar5 = uVar6 >> 8;
                bVar4 = (byte)(uVar6 >> 8);
                if (bVar4 != (byte)param_9) {
                  if (bVar4 == param_8) {
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    uVar5 = (uint)CONCAT21((short)(uVar6 >> 0x10),
                                           *(undefined1 *)(param_7 + (uint)param_1->field_0001));
                  }
                  param_1->field_0001 = (byte)uVar5;
                }
                uVar6 = uVar5 >> 8;
                bVar4 = (byte)(uVar5 >> 8);
                if (bVar4 != (byte)param_9) {
                  if (bVar4 == param_8) {
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    uVar6 = (uint)CONCAT21((short)(uVar5 >> 0x10),
                                           *(undefined1 *)(param_7 + (uint)param_1->field_0002));
                  }
                  param_1->field_0002 = (byte)uVar6;
                }
                bVar4 = (byte)(uVar6 >> 8);
                if (bVar4 != (byte)param_9) {
                  if (bVar4 == param_8) {
                    bVar4 = *(byte *)(param_7 + (uint)param_1->field_0003);
                  }
                  param_1->field_0003 = bVar4;
                }
                param_1 = param_1 + 1;
                uVar6 = uVar7 - 1;
                bVar3 = (int)uVar7 < 1;
                uVar7 = uVar6;
                if (uVar6 == 0 || bVar3) goto LAB_006d105f;
              }
            }
            AVar2 = *param_1;
            bVar4 = *(byte *)(param_7 + ((uint)AVar2 >> 8 & 0xff));
            *(byte *)param_1 = *(byte *)(param_7 + ((uint)AVar2 & 0xff));
            param_1->field_0001 = bVar4;
            bVar4 = *(byte *)(param_7 + ((uint)AVar2 >> 0x18));
            param_1->field_0002 = *(byte *)(param_7 + ((uint)AVar2 >> 0x10 & 0xff));
            param_1->field_0003 = bVar4;
            param_1 = param_1 + 1;
            uVar6 = uVar7 - 1;
            bVar3 = 0 < (int)uVar7;
            uVar7 = uVar6;
          } while (uVar6 != 0 && bVar3);
        }
LAB_006d105f:
        uVar7 = param_5 & 3;
        if ((param_5 & 3) != 0) {
          do {
            while( true ) {
              bVar4 = (byte)*param_3;
              param_3 = (uint *)((int)param_3 + 1);
              if (bVar4 != param_8) break;
              *(byte *)param_1 = *(byte *)(param_7 + (uint)*(byte *)param_1);
              param_1 = (AnonShape_006D0F50_D22E7C78 *)&param_1->field_0001;
              uVar6 = uVar7 - 1;
              bVar3 = (int)uVar7 < 1;
              uVar7 = uVar6;
              if (uVar6 == 0 || bVar3) goto LAB_006d1089;
            }
            if (bVar4 != (byte)param_9) {
              *(byte *)param_1 = bVar4;
            }
            param_1 = (AnonShape_006D0F50_D22E7C78 *)&param_1->field_0001;
            uVar6 = uVar7 - 1;
            bVar3 = 0 < (int)uVar7;
            uVar7 = uVar6;
          } while (uVar6 != 0 && bVar3);
        }
LAB_006d1089:
        param_3 = (uint *)((int)param_3 + (param_4 - param_5));
        param_1 = (AnonShape_006D0F50_D22E7C78 *)((int)param_1 + (param_2 - param_5));
        iVar1 = param_6 + -1;
        bVar3 = param_6 < 1;
        param_6 = iVar1;
        if (iVar1 == 0 || bVar3) {
          return;
        }
      } while( true );
    }
    if (0 < param_6) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_9 = param_6;
      do {
        uVar7 = param_5;
        if (0 < (int)param_5) {
          do {
            uVar6 = *param_3;
            param_3 = (uint *)((int)param_3 + 1);
            if ((byte)uVar6 == param_8) {
              *(byte *)param_1 = *(byte *)((uint)*(byte *)param_1 + param_7);
            }
            else {
              *(byte *)param_1 = (byte)uVar6;
            }
            param_1 = (AnonShape_006D0F50_D22E7C78 *)&param_1->field_0001;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        param_3 = (uint *)((int)param_3 + (param_4 - param_5));
        param_1 = (AnonShape_006D0F50_D22E7C78 *)((int)param_1 + (param_2 - param_5));
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_9 = param_9 - 1;
      } while (param_9 != 0);
    }
  }
  return;
}

// 006D10F0 FUN_006d10f0
#line 4 "decomp/ST.exe/functions/006D10F0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006D10F0 returns return of Library::DKW::LIB::FUN_006aac70 @ 006D11BB | 006D10F0
   returns return of Library::DKW::LIB::FUN_006aac70 @ 006D11E2 */

int st::fn_006D10F0(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  uint size;
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;

  if (0x100 < (int)param_4) {
    param_4 = 0;
  }
  uVar2 = param_4 * 4 + 0x28;
  iVar4 = (param_1 * param_3 + 0x1fU >> 3 & 0x1ffffffc) * param_2;
  size = uVar2;
  if (param_5 != 0) {
    size = uVar2 + iVar4;
  }
  puVar1 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC70(size));
  if (puVar1 != nullptr) {
    puVar5 = puVar1;
    for (uVar2 = uVar2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar1[2] = param_2;
    puVar1[1] = param_1;
    puVar1[5] = iVar4;
    *puVar1 = 0x28;
    *(undefined2 *)(puVar1 + 3) = 1;
    STField<short>(puVar1,0xe) = (short)param_3;
    puVar1[4] = 0;
    puVar1[8] = (0xf < param_3) - 1 & param_4;
    if (param_4 == 3) {
      if (param_3 == 0x10) {
        puVar1[10] = 0xf800;
        puVar1[0xb] = 0x7e0;
        puVar1[0xc] = 0x1f;
        puVar1[4] = 3;
        return (int)puVar1;
      }
      if (param_3 == 0x20) {
        puVar1[10] = 0xff0000;
        puVar1[0xb] = 0xff00;
        puVar1[0xc] = 0xff;
        puVar1[4] = 3;
      }
    }
  }
  return (int)puVar1;
}

// 006D11F0 FUN_006d11f0
#line 4 "decomp/ST.exe/functions/006D11F0/decomp.c"
void st::fn_006D11F0(undefined4 *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 int param_7,byte param_8)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;

  if ((0 < param_5) && (0 < param_6)) {
    iVar3 = param_5;
    do {
      do {
        bVar1 = *param_3;
        param_3 = param_3 + 1;
        if (bVar1 != param_8) {
          *param_1 = *(undefined4 *)(param_7 + (uint)bVar1 * 4);
        }
        param_1 = param_1 + 1;
        iVar4 = iVar3 + -1;
        bVar2 = 0 < iVar3;
        iVar3 = iVar4;
      } while (iVar4 != 0 && bVar2);
      param_3 = param_3 + (param_4 - param_5);
      param_1 = (undefined4 *)((int)param_1 + param_2 + param_5 * -4);
      iVar4 = param_6 + -1;
      bVar2 = 0 < param_6;
      iVar3 = param_5;
      param_6 = iVar4;
    } while (iVar4 != 0 && bVar2);
  }
  return;
}

// 006D1250 FUN_006d1250
#line 1 "decomp/ST.exe/functions/006D1250/decomp.c"

void st::fn_006D1250(uint *param_1,int param_2,int param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint local_10;

  if (param_4 == nullptr) {
    uVar6 = 0xff0000;
    local_10 = 0xff00;
    uVar5 = 0xff;
  }
  else {
    local_10 = param_4[1];
    uVar6 = *param_4;
    uVar5 = param_4[2];
  }
  bVar4 = 0;
  for (uVar2 = uVar6; (uVar2 & 0x800000) == 0; uVar2 = uVar2 << 1) {
    bVar4 = bVar4 + 1;
  }
  bVar1 = 0;
  for (uVar2 = local_10; (uVar2 & 0x800000) == 0; uVar2 = uVar2 << 1) {
    bVar1 = bVar1 + 1;
  }
  bVar7 = 0;
  for (uVar2 = uVar5; (uVar2 & 0x800000) == 0; uVar2 = uVar2 << 1) {
    bVar7 = bVar7 + 1;
  }
  if (0 < param_3) {
    pbVar3 = (byte *)(param_2 + 2);
    do {
      param_3 = param_3 + -1;
      *param_1 = ((uint)pbVar3[-2] << 0x10) >> (bVar7 & 0x1f) & uVar5 |
                 ((uint)pbVar3[-1] << 0x10) >> (bVar1 & 0x1f) & local_10 |
                 ((uint)*pbVar3 << 0x10) >> (bVar4 & 0x1f) & uVar6;
      pbVar3 = pbVar3 + 4;
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}

// 006D1350 FUN_006d1350
#line 4 "decomp/ST.exe/functions/006D1350/decomp.c"
void __cdecl
st::fn_006D1350(undefined2 *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
            int param_7,byte param_8)

{
  byte bVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;

  if (param_6 != 0) {
    iVar4 = param_6;
    do {
      do {
        bVar1 = *param_3;
        puVar3 = param_1;
        while (param_3 = param_3 + 1, bVar1 != param_8) {
          uVar2 = *(undefined4 *)(param_5 + (uint)bVar1 * 4);
          *puVar3 = (short)uVar2;
          *(char *)(puVar3 + 1) = (char)((uint)uVar2 >> 0x10);
          iVar4 = iVar4 + -1;
          if (iVar4 == 0) goto LAB_006d13a9;
          puVar3 = (undefined2 *)((int)puVar3 + 3);
          bVar1 = *param_3;
        }
        param_1 = (undefined2 *)((int)puVar3 + 3);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
LAB_006d13a9:
      param_3 = param_3 + (param_4 - param_6);
      param_1 = (undefined2 *)((int)puVar3 + param_2 + param_6 * -3 + 3);
      param_7 = param_7 + -1;
      iVar4 = param_6;
    } while (param_7 != 0);
  }
  return;
}

// 006D13C0 FUN_006d13c0
#line 4 "decomp/ST.exe/functions/006D13C0/decomp.c"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void st::fn_006D13C0(uint *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 int param_7,byte param_8)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint *puVar6;

  if (0 < param_6) {
    do {
      pbVar5 = param_3;
      puVar6 = param_1;
      iVar3 = param_5;
      if (((uint)param_1 & 2) == 0) {
joined_r0x006d1410:
        iVar4 = iVar3 + -2;
        if (1 < iVar3) {
          while( true ) {
            bVar1 = *pbVar5;
            iVar3 = iVar4;
            while (bVar1 == param_8) {
              if (pbVar5[1] != param_8) {
                STField<ushort>(puVar6,2) = *(ushort *)(param_7 + (uint)pbVar5[1] * 2);
                pbVar5 = pbVar5 + 2;
                puVar6 = puVar6 + 1;
                goto joined_r0x006d1410;
              }
              pbVar5 = pbVar5 + 2;
              puVar6 = puVar6 + 1;
              iVar4 = iVar3 + -2;
              if (iVar3 < 2) goto LAB_006d147f;
              iVar3 = iVar4;
              bVar1 = *pbVar5;
            }
            uVar2 = *(ushort *)(param_7 + (uint)bVar1 * 2);
            if (pbVar5[1] != param_8) break;
            pbVar5 = pbVar5 + 2;
            *(ushort *)puVar6 = uVar2;
            puVar6 = puVar6 + 1;
            iVar4 = iVar3 + -2;
            if (iVar3 < 2) goto LAB_006d147f;
          }
          *puVar6 = CONCAT22(uVar2,*(undefined2 *)(param_7 + (uint)pbVar5[1] * 2)) << 0x10 |
                    (uint)uVar2;
          pbVar5 = pbVar5 + 2;
          puVar6 = puVar6 + 1;
          goto joined_r0x006d1410;
        }
LAB_006d147f:
        if ((iVar4 != -2) && (*pbVar5 != param_8)) {
          *(ushort *)puVar6 = *(ushort *)(param_7 + (uint)*pbVar5 * 2);
        }
      }
      else {
        pbVar5 = param_3 + 1;
        if (*param_3 != param_8) {
          *(undefined2 *)param_1 = *(undefined2 *)(param_7 + (uint)*param_3 * 2);
        }
        puVar6 = (uint *)((int)param_1 + 2);
        iVar3 = param_5 + -1;
        if (iVar3 != 0 && 0 < param_5) goto joined_r0x006d1410;
      }
      param_3 = param_3 + param_4;
      param_1 = (uint *)((int)param_1 + param_2);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}

// 006D14C0 FUN_006d14c0
#line 4 "decomp/ST.exe/functions/006D14C0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void st::fn_006D14C0(ushort *param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;

  if (param_4 == nullptr) {
    local_10 = 0x1f;
    local_18 = 0x7c00;
    local_14 = 0x3e0;
  }
  else {
    local_18 = *param_4;
    local_14 = param_4[1];
    local_10 = param_4[2];
  }
  iVar2 = -1;
  local_8 = -1;
  param_4 = (uint *)0xffffffff;
  local_c = -1;
  if (local_18 == 0xf800) {
    local_8 = 0;
  }
  else if (local_18 == 0x7c00) {
    local_8 = 1;
  }
  if (local_14 == 0x7e0) {
    param_4 = (uint *)0x5;
  }
  else if (local_14 == 0x3e0) {
    param_4 = (uint *)0x6;
  }
  if (local_10 == 0x1f) {
    iVar2 = 0xb;
    local_c = 0xb;
  }
  if (local_8 == -1) {
    STPiece<0,1>(local_8) = 0;
    for (uVar1 = local_18; (uVar1 & 0x8000) == 0; uVar1 = uVar1 << 1) {
      STPiece<0,1>(local_8) = (byte)local_8 + 1;
    }
  }
  if (param_4 == (uint *)0xffffffff) {
    STPiece<0,1>(param_4) = 0;
    for (uVar1 = local_14; (uVar1 & 0x8000) == 0; uVar1 = uVar1 << 1) {
      STPiece<0,1>(param_4) = (byte)param_4 + 1;
    }
  }
  if (iVar2 == -1) {
    iVar2 = 0;
    for (uVar1 = local_10; local_c = iVar2, (uVar1 & 0x8000) == 0; uVar1 = uVar1 << 1) {
      iVar2 = iVar2 + 1;
    }
  }
  if (0 < param_3) {
    pbVar3 = (byte *)(param_2 + 2);
    do {
      param_3 = param_3 + -1;
      *param_1 = (ushort)((int)((uint)pbVar3[-2] << 8) >> ((byte)iVar2 & 0x1f)) & (ushort)local_10 |
                 (ushort)((int)((uint)pbVar3[-1] << 8) >> ((byte)param_4 & 0x1f)) & (ushort)local_14
                 | (ushort)((int)((uint)*pbVar3 << 8) >> ((byte)local_8 & 0x1f)) & (ushort)local_18;
      iVar2 = local_c;
      pbVar3 = pbVar3 + 4;
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}

// 006D1610 FUN_006d1610
#line 4 "decomp/ST.exe/functions/006D1610/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=2,
   ignored=5, unknown=0

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006D1610 -> 006CEA60 @ 006D162F */

void st::fn_006D1610(undefined8 *param_1,undefined8 *param_2,RecoveredSourceFamily_dibcopy *param_3,
                 uint param_4,int param_5)

{
  int iVar1;
  AnonPointee_TLOBaseTy_0607 *source;
  byte *destination;

  if (param_1 <= param_2) {
    st::fn_006CEA60((byte *)param_1,(int)param_3,(byte *)param_2,(int)param_3,param_4,param_5);
    return;
  }
  iVar1 = (param_5 + -1) * (int)param_3;
  destination = (byte *)((int)param_1 + iVar1);
  source = (AnonPointee_TLOBaseTy_0607 *)((int)param_2 + iVar1);
  if ((int)destination - (int)source < (int)param_4) {
    if ((0 < (int)param_4) && (0 < param_5)) {
      do {
        st::fn_0072DA70((undefined4 *)destination,source,param_4);
        source = (AnonPointee_TLOBaseTy_0607 *)((int)source - (int)param_3);
        destination = destination + -(int)param_3;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
    return;
  }
  st::fn_006CEA60(destination,-(int)param_3,(byte *)source,-(int)param_3,param_4,param_5);
  return;
}

// 006D1A10 FUN_006d1a10
#line 4 "decomp/ST.exe/functions/006D1A10/decomp.c"
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0070B770 -> 006D1A10 @ 0070B8D8 */

void st::fn_006D1A10(undefined4 *param_1,int param_2,int param_3,int param_4,
                 AnonShape_0070B770_3BA0472D *param_5,int param_6,int param_7,int param_8,
                 int param_9,int param_10)

{
  st::fn_006D16A0
            (param_1,param_2,param_3,param_4,0x10,param_5,param_6,param_7,param_8,8,param_9,param_10
            );
  return;
}

// 006D1A50 FUN_006d1a50
#line 4 "decomp/ST.exe/functions/006D1A50/decomp.c"
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0070B770 -> 006D1A50 @ 0070B86A */

void st::fn_006D1A50(undefined4 *param_1,int param_2,int param_3,int param_4,
                 AnonShape_0070B770_3BA0472D *param_5,int param_6,int param_7,int param_8,
                 int param_9,int param_10)

{
  st::fn_006D16A0
            (param_1,param_2,param_3,param_4,0x18,param_5,param_6,param_7,param_8,8,param_9,param_10
            );
  return;
}

// 006D1A90 FUN_006d1a90
#line 4 "decomp/ST.exe/functions/006D1A90/decomp.c"
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0070B770 -> 006D1A90 @ 0070B7EA */

void st::fn_006D1A90(undefined4 *param_1,int param_2,int param_3,int param_4,
                 AnonShape_0070B770_3BA0472D *param_5,int param_6,int param_7,int param_8,
                 int param_9,int param_10)

{
  st::fn_006D16A0
            (param_1,param_2,param_3,param_4,0x10,param_5,param_6,param_7,param_8,0x18,param_9,
             param_10);
  return;
}

// 006D1AD0 FUN_006d1ad0
#line 1 "decomp/ST.exe/functions/006D1AD0/decomp.c"

int st::fn_006D1AD0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar8;
  int *piVar7;
  int iVar9;
  int *piVar10;
  int local_10;
  int local_c;
  int local_8;

  if ((param_5 == 0) || (param_6 == 0)) {
    return 0;
  }
  iVar9 = *param_1;
  if (iVar9 <= param_2) {
    piVar10 = param_1 + 2;
    local_10 = 0;
    if (0 < iVar9) {
      do {
        iVar1 = piVar10[2];
        local_8 = *piVar10;
        iVar3 = iVar1 + local_8;
        if ((param_3 <= iVar3) && (iVar4 = param_5 + param_3, local_8 <= iVar4)) {
          iVar2 = piVar10[3];
          iVar5 = iVar2 + piVar10[1];
          if ((param_4 <= iVar5) && (iVar6 = param_6 + param_4, piVar10[1] <= iVar6)) {
            if ((((param_3 < iVar3) && (local_8 < iVar4)) && (param_4 < iVar5)) &&
               (local_c = piVar10[1], local_c < iVar6)) {
              if (param_3 <= local_8) {
                local_8 = param_3;
              }
              if (param_4 <= local_c) {
                local_c = param_4;
              }
              if (iVar4 < iVar3) {
                iVar4 = iVar3;
              }
              iVar4 = iVar4 - local_8;
              if (iVar6 < iVar5) {
                iVar6 = iVar5;
              }
              iVar6 = iVar6 - local_c;
              iVar3 = iVar6 * iVar4 * 7;
              if ((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3 < param_5 * param_6 + iVar2 * iVar1) {
                if ((((local_8 == *piVar10) && (local_c == piVar10[1])) && (iVar4 == piVar10[2])) &&
                   (iVar6 == piVar10[3])) {
                  return 0;
                }
                if ((0 < param_9) ||
                   (((local_8 == param_3 && (local_c == param_4)) &&
                    ((iVar4 == param_5 && (iVar6 == param_6)))))) {
                  if (local_10 < iVar9 + -1) {
                    piVar7 = piVar10 + 4;
                    for (iVar9 = ((iVar9 - local_10) - 1U & 0xfffffff) << 2; iVar9 != 0;
                        iVar9 = iVar9 + -1) {
                      *piVar10 = *piVar7;
                      piVar7 = piVar7 + 1;
                      piVar10 = piVar10 + 1;
                    }
                    for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
                      *(char *)piVar10 = (char)*piVar7;
                      piVar7 = (int *)((int)piVar7 + 1);
                      piVar10 = (int *)((int)piVar10 + 1);
                    }
                  }
                  *param_1 = *param_1 + -1;
                  param_1[1] = st::machine_word_boundary_cast<int>(param_1[1] - iVar2 * iVar1);
                  param_5 = iVar4;
                  param_6 = iVar6;
cf_continue_loop_006D1E3F:
                  iVar8 = st::fn_006D1AD0(param_1,param_2,local_8,local_c,param_5,param_6,param_7,
                                       param_8,param_9);
                  if (local_10 < iVar8) {
                    return local_10 + 1;
                  }
                  return iVar8;
                }
              }
              if (param_9 < 0) {
                *param_1 = param_2 + 1;
                return -1;
              }
            }
            else {
              if ((param_6 == iVar2) && (param_4 == piVar10[1])) {
                if (param_3 == iVar3) {
LAB_006d1d8a:
                  local_8 = *piVar10;
                }
                else {
                  if (iVar4 != local_8) goto LAB_006d1cbe;
                  if (param_3 == iVar3) goto LAB_006d1d8a;
                  local_8 = param_3;
                }
                param_5 = st::machine_word_boundary_cast<int>(piVar10[2] + param_5);
                *param_1 = iVar9 + -1;
                param_1[1] = st::machine_word_boundary_cast<int>(param_1[1] - piVar10[3] * piVar10[2]);
                local_c = param_4;
                if (local_10 < iVar9 + -1) {
                  piVar7 = piVar10 + 4;
                  for (iVar9 = ((iVar9 - local_10) - 1U & 0xfffffff) << 2; iVar9 != 0;
                      iVar9 = iVar9 + -1) {
                    *piVar10 = *piVar7;
                    piVar7 = piVar7 + 1;
                    piVar10 = piVar10 + 1;
                  }
                  for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
                    *(char *)piVar10 = (char)*piVar7;
                    piVar7 = (int *)((int)piVar7 + 1);
                    piVar10 = (int *)((int)piVar10 + 1);
                  }
                }
                goto cf_continue_loop_006D1E3F;
              }
LAB_006d1cbe:
              if ((param_5 == iVar1) && (param_3 == local_8)) {
                if (param_4 == iVar5) {
LAB_006d1de7:
                  local_c = piVar10[1];
                }
                else {
                  if (iVar6 != piVar10[1]) goto LAB_006d1ce7;
                  if (param_4 == iVar5) goto LAB_006d1de7;
                  local_c = param_4;
                }
                param_6 = st::machine_word_boundary_cast<int>(piVar10[3] + param_6);
                *param_1 = iVar9 + -1;
                param_1[1] = st::machine_word_boundary_cast<int>(param_1[1] - piVar10[2] * piVar10[3]);
                local_8 = param_3;
                if (local_10 < iVar9 + -1) {
                  piVar7 = piVar10 + 4;
                  for (iVar9 = ((iVar9 - local_10) - 1U & 0xfffffff) << 2; iVar9 != 0;
                      iVar9 = iVar9 + -1) {
                    *piVar10 = *piVar7;
                    piVar7 = piVar7 + 1;
                    piVar10 = piVar10 + 1;
                  }
                  for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
                    *(char *)piVar10 = (char)*piVar7;
                    piVar7 = (int *)((int)piVar7 + 1);
                    piVar10 = (int *)((int)piVar10 + 1);
                  }
                }
                goto cf_continue_loop_006D1E3F;
              }
            }
          }
        }
LAB_006d1ce7:
        piVar10 = piVar10 + 4;
        local_10 = local_10 + 1;
      } while (local_10 < iVar9);
    }
    if (iVar9 < param_2) {
      *param_1 = iVar9 + 1;
      piVar10 = param_1 + iVar9 * 4 + 2;
      *piVar10 = param_3;
      piVar10[1] = param_4;
      piVar10[2] = param_5;
      piVar10[3] = param_6;
      iVar9 = st::machine_word_boundary_cast<int>(param_1[1] + param_5 * param_6);
      param_1[1] = iVar9;
      if (iVar9 < param_7 * param_8) {
        return *param_1;
      }
      *param_1 = param_2 + 1;
      return -1;
    }
  }
  *param_1 = param_2 + 1;
  return -1;
}

// 006D1EC0 FUN_006d1ec0
#line 4 "decomp/ST.exe/functions/006D1EC0/decomp.c"
int st::fn_006D1EC0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  int local_EAX_883;
  int iVar2;
  int iVar3;
  int local_EAX_1261;
  int iVar5;
  int iVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  bool bVar14;
  bool bVar15;
  int local_10;
  int local_c;
  int local_8;

  if ((param_5 == 0) || (param_6 == 0)) {
    return 0;
  }
  local_8 = *param_1;
  if (local_8 <= param_2) {
    piVar1 = param_1 + 2;
    local_c = 0;
    if (0 < local_8) {
      local_10 = local_8 + -1;
      do {
        iVar6 = st::machine_word_boundary_cast<int>(piVar1[2] + *piVar1);
        if ((iVar6 < param_3) || (iVar7 = param_3 + param_5, iVar7 < *piVar1)) {
cf_common_join_006D2041:
          local_c = local_c + 1;
          piVar1 = piVar1 + 4;
        }
        else {
          iVar2 = piVar1[1];
          iVar3 = iVar2 + piVar1[3];
          if ((iVar3 < param_4) || (iVar8 = param_4 + param_6, iVar8 < iVar2))
          goto cf_common_join_006D2041;
          if ((((iVar6 <= param_3) || (iVar7 <= *piVar1)) || (iVar3 <= param_4)) || (iVar8 <= iVar2)
             ) {
            if ((param_6 == piVar1[3]) && (param_4 == iVar2)) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              if (param_3 == iVar6) {
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_006d23e7:
                param_3 = *piVar1;
              }
              else {
                if (iVar7 != *piVar1) goto LAB_006d2188;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_3 == iVar6) goto LAB_006d23e7;
              }
              param_5 = param_5 + piVar1[2];
              *param_1 = *param_1 + -1;
              if (local_c < local_8 + -1) {
                piVar11 = piVar1 + 4;
                for (iVar6 = ((local_8 - local_c) - 1U & 0xfffffff) << 2; iVar6 != 0;
                    iVar6 = iVar6 + -1) {
                  *piVar1 = *piVar11;
                  piVar11 = piVar11 + 1;
                  piVar1 = piVar1 + 1;
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(char *)piVar1 = (char)*piVar11;
                  piVar11 = (int *)((int)piVar11 + 1);
                  piVar1 = (int *)((int)piVar1 + 1);
                }
              }
            }
            else {
LAB_006d2188:
              if ((param_5 != piVar1[2]) || (param_3 != *piVar1)) goto cf_common_join_006D2041;
              if (param_4 == iVar3) {
LAB_006d244b:
                param_4 = piVar1[1];
              }
              else {
                if (iVar8 != iVar2) goto cf_common_join_006D2041;
                if (param_4 == iVar3) goto LAB_006d244b;
              }
              param_6 = param_6 + piVar1[3];
              *param_1 = *param_1 + -1;
              if (local_c < local_8 + -1) {
                piVar11 = piVar1 + 4;
                for (iVar6 = ((local_8 - local_c) - 1U & 0xfffffff) << 2; iVar6 != 0;
                    iVar6 = iVar6 + -1) {
                  *piVar1 = *piVar11;
                  piVar11 = piVar11 + 1;
                  piVar1 = piVar1 + 1;
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(char *)piVar1 = (char)*piVar11;
                  piVar11 = (int *)((int)piVar11 + 1);
                  piVar1 = (int *)((int)piVar1 + 1);
                }
              }
            }
            iVar5 = st::fn_006D1EC0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
            if (local_c < iVar5) {
              return local_c + 1;
            }
            return iVar5;
          }
          iVar9 = *piVar1;
          if (*piVar1 <= param_3) {
            iVar9 = param_3;
          }
          iVar12 = param_4;
          if (param_4 < iVar2) {
            iVar12 = iVar2;
          }
          iVar4 = iVar7;
          if (iVar6 < iVar7) {
            iVar4 = iVar6;
          }
          iVar4 = iVar4 - iVar9;
          iVar10 = iVar8;
          if (iVar3 < iVar8) {
            iVar10 = iVar3;
          }
          iVar10 = iVar10 - iVar12;
          if (iVar4 == param_5) {
            if (iVar4 == piVar1[2]) {
              iVar6 = piVar1[1];
              if (iVar6 < param_4) {
                param_4 = iVar6;
              }
              if (iVar8 < iVar3) {
                iVar8 = iVar3;
              }
              param_6 = iVar8 - param_4;
              if ((param_4 == iVar6) && (param_6 == piVar1[3])) {
                return 0;
              }
              if (local_c < local_8 + -1) {
                piVar11 = piVar1 + 4;
                for (iVar6 = ((local_8 - local_c) - 1U & 0xfffffff) << 2; iVar6 != 0;
                    iVar6 = iVar6 + -1) {
                  *piVar1 = *piVar11;
                  piVar11 = piVar11 + 1;
                  piVar1 = piVar1 + 1;
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(char *)piVar1 = (char)*piVar11;
                  piVar11 = (int *)((int)piVar11 + 1);
                  piVar1 = (int *)((int)piVar1 + 1);
                }
              }
              *param_1 = *param_1 + -1;
LAB_006d2232:
              local_EAX_883 =
                   st::fn_006D1EC0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
              if (local_c < local_EAX_883) {
                return local_c + 1;
              }
              return local_EAX_883;
            }
            if (iVar12 == param_4) {
              param_4 = param_4 + iVar10;
              param_6 = param_6 - iVar10;
              bVar15 = param_6 < 0;
              bVar14 = param_6 == 0;
            }
            else {
              if (iVar3 < iVar8) goto cf_common_join_006D22C3;
              param_6 = param_6 - iVar10;
              bVar15 = param_6 < 0;
              bVar14 = param_6 == 0;
            }
LAB_006d2038:
            if (bVar14 || bVar15) {
              return 0;
            }
            goto cf_common_join_006D2041;
          }
          if (iVar10 == param_6) {
            if (iVar10 == piVar1[3]) {
              iVar3 = *piVar1;
              if (iVar3 < param_3) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_3 = iVar3;
              }
              if (iVar7 < iVar6) {
                iVar7 = iVar6;
              }
              param_5 = iVar7 - param_3;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              if ((param_3 == iVar3) && (param_5 == piVar1[2])) {
                return 0;
              }
              if (local_c < local_8 + -1) {
                piVar11 = piVar1 + 4;
                for (iVar6 = ((local_8 - local_c) - 1U & 0xfffffff) << 2; iVar6 != 0;
                    iVar6 = iVar6 + -1) {
                  *piVar1 = *piVar11;
                  piVar11 = piVar11 + 1;
                  piVar1 = piVar1 + 1;
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(char *)piVar1 = (char)*piVar11;
                  piVar11 = (int *)((int)piVar11 + 1);
                  piVar1 = (int *)((int)piVar1 + 1);
                }
              }
              *param_1 = *param_1 + -1;
              goto LAB_006d2232;
            }
            if (iVar9 == param_3) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = param_3 + iVar4;
            }
            else if (iVar6 < iVar7) goto cf_common_join_006D22C3;
            param_5 = param_5 - iVar4;
            bVar15 = param_5 < 0;
            bVar14 = param_5 == 0;
            goto LAB_006d2038;
          }
          if (iVar4 == piVar1[2]) {
            if (iVar12 == iVar2) {
              iVar6 = st::machine_word_boundary_cast<int>(piVar1[3] - iVar10);
              piVar1[1] = st::machine_word_boundary_cast<int>(piVar1[1] + iVar10);
              piVar1[3] = iVar6;
            }
            else {
              if (iVar3 < iVar8) goto cf_common_join_006D22C3;
              iVar6 = st::machine_word_boundary_cast<int>(piVar1[3] - iVar10);
              piVar1[3] = iVar6;
            }
LAB_006d20bc:
            if (0 < iVar6) goto cf_common_join_006D2041;
            if (local_10 <= local_c) goto LAB_006d2148;
            piVar11 = piVar1 + 4;
            piVar13 = piVar1;
            for (iVar6 = ((local_8 - local_c) - 1U & 0xfffffff) << 2; iVar6 != 0; iVar6 = iVar6 + -1
                ) {
              *piVar13 = *piVar11;
              piVar11 = piVar11 + 1;
              piVar13 = piVar13 + 1;
            }
            for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(char *)piVar13 = (char)*piVar11;
              piVar11 = (int *)((int)piVar11 + 1);
              piVar13 = (int *)((int)piVar13 + 1);
            }
            local_8 = local_8 + -1;
            local_10 = local_10 + -1;
            *param_1 = *param_1 + -1;
          }
          else {
            if (iVar10 != piVar1[3]) {
cf_common_join_006D22C3:
              param_6 = local_c + 1;
              if (param_4 < iVar12) {
                iVar2 = st::fn_006D1EC0(param_1,param_2,param_3,param_4,param_5,iVar12 - param_4,
                                     param_7,param_8);
                if (iVar2 == -1) {
                  return -1;
                }
                if (iVar2 < param_6) {
                  param_6 = iVar2;
                }
              }
              if (iVar3 < iVar8) {
                iVar3 = st::fn_006D1EC0(param_1,param_2,param_3,iVar3,param_5,iVar8 - iVar3,param_7,
                                     param_8);
                if (iVar3 == -1) {
                  return -1;
                }
                if (iVar3 < param_6) {
                  param_6 = iVar3;
                }
              }
              if (param_3 < iVar9) {
                iVar3 = st::fn_006D1EC0(param_1,param_2,param_3,iVar12,iVar9 - param_3,iVar10,param_7,
                                     param_8);
                if (iVar3 == -1) {
                  return -1;
                }
                if (iVar3 < param_6) {
                  param_6 = iVar3;
                }
              }
              if (iVar6 < iVar7) {
                local_EAX_1261 =
                     st::fn_006D1EC0(param_1,param_2,iVar6,iVar12,iVar7 - iVar6,iVar10,param_7,param_8);
                if (local_EAX_1261 == -1) {
                  return -1;
                }
                if (local_EAX_1261 < param_6) {
                  return local_EAX_1261;
                }
              }
              return param_6;
            }
            if (iVar9 == *piVar1) {
              iVar6 = st::machine_word_boundary_cast<int>(piVar1[2] - iVar4);
              *piVar1 = *piVar1 + iVar4;
              piVar1[2] = iVar6;
              goto LAB_006d20bc;
            }
            if (iVar6 < iVar7) goto cf_common_join_006D22C3;
            iVar4 = st::machine_word_boundary_cast<int>(piVar1[2] - iVar4);
            piVar1[2] = iVar4;
            if (0 < iVar4) goto cf_common_join_006D2041;
            if (local_c < local_10) {
              piVar11 = piVar1 + 4;
              piVar13 = piVar1;
              for (iVar6 = ((local_8 - local_c) - 1U & 0xfffffff) << 2; iVar6 != 0;
                  iVar6 = iVar6 + -1) {
                *piVar13 = *piVar11;
                piVar11 = piVar11 + 1;
                piVar13 = piVar13 + 1;
              }
              for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                *(char *)piVar13 = (char)*piVar11;
                piVar11 = (int *)((int)piVar11 + 1);
                piVar13 = (int *)((int)piVar13 + 1);
              }
            }
LAB_006d2148:
            local_8 = local_8 + -1;
            local_10 = local_10 + -1;
            *param_1 = *param_1 + -1;
          }
        }
      } while (local_c < local_8);
    }
    if (local_8 < param_2) {
      *param_1 = *param_1 + 1;
      piVar1 = param_1 + local_8 * 4 + 2;
      *piVar1 = param_3;
      piVar1[1] = param_4;
      piVar1[2] = param_5;
      piVar1[3] = param_6;
      return *param_1;
    }
  }
  *param_1 = param_2 + 1;
  return -1;
}

// 006D2510 FUN_006d2510
#line 4 "decomp/ST.exe/functions/006D2510/decomp.c"
void st::fn_006D2510(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

// 006D2530 FUN_006d2530
#line 4 "decomp/ST.exe/functions/006D2530/decomp.c"
void st::fn_006D2530(int *param_1,undefined4 *param_2)

{
  if ((undefined4 *)param_1[1] != nullptr) {
    *(undefined4 *)param_1[1] = st::machine_word_boundary_cast<undefined4>(param_2);
  }
  if (*param_1 == 0) {
    *param_1 = (int)param_2;
  }
  *param_2 = 0;
  param_2[1] = param_1[1];
  param_1[1] = (int)param_2;
  return;
}

// 006D2560 FUN_006d2560
#line 1 "decomp/ST.exe/functions/006D2560/decomp.c"

void st::fn_006D2560(int *param_1,int *param_2)

{
  if (*param_2 == 0) {
    param_1[1] = param_2[1];
  }
  else {
    *(int *)(*param_2 + 4) = param_2[1];
  }
  if ((int *)param_2[1] != nullptr) {
    *(int *)param_2[1] = *param_2;
    return;
  }
  *param_1 = *param_2;
  return;
}

// 006D25A0 FUN_006d25a0
#line 4 "decomp/ST.exe/functions/006D25A0/decomp.c"
void st::fn_006D25A0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar2 = param_1;
  param_1 = (undefined4 *)*param_1;
  while (param_1 != nullptr) {
    puVar1 = (undefined4 *)*param_1;
    st::fn_006AB060(&param_1);
    param_1 = puVar1;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}

// 006D25E0 FUN_006d25e0
#line 4 "decomp/ST.exe/functions/006D25E0/decomp.c"
void st::fn_006D25E0(byte *param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  bool bVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;

LAB_006d25f2:
  while( true ) {
    bVar3 = *param_3;
    uVar5 = (uint)bVar3;
    iVar7 = param_4;
    if (uVar5 != 0) break;
    param_3 = param_3 + 2;
    param_1 = param_1 + param_2;
    iVar7 = param_5 + -1;
    bVar1 = param_5 < 1;
    param_5 = iVar7;
    if (iVar7 == 0 || bVar1) {
      return;
    }
  }
  do {
    pbVar8 = param_3 + 1;
    if (0x7f < bVar3) {
      bVar3 = (byte)uVar5;
      do {
        while (bVar3 < 0xc0) {
LAB_006d2641:
          uVar4 = uVar5 & 0xffffff3f;
          iVar7 = iVar7 - uVar4;
          *param_1 = *pbVar8;
          if ((byte)uVar4 < 4) {
            param_3 = pbVar8 + 1;
            pbVar2 = param_1 + 1;
            if (1 < uVar4) {
              bVar3 = *param_3;
              param_3 = pbVar8 + 2;
              param_1[1] = bVar3;
              pbVar2 = param_1 + 2;
              if (uVar4 != 2 && 0 < (int)(uVar4 - 1)) {
                bVar3 = *param_3;
                param_3 = pbVar8 + 3;
                param_1[2] = bVar3;
                pbVar2 = param_1 + 3;
              }
            }
            param_1 = pbVar2;
            if (0 < iVar7) {
              bVar3 = *param_3;
              uVar5 = (uint)bVar3;
              pbVar8 = param_3 + 1;
              if (0x7f < bVar3) goto code_r0x006d2671;
              goto cf_continue_loop_006D2607;
            }
            goto cf_continue_loop_006D26AD;
          }
          if ((uVar5 & 1) != 0) {
            pbVar8 = pbVar8 + 1;
            param_1 = param_1 + 1;
          }
          uVar5 = uVar4 >> 2;
          param_3 = pbVar8;
          if ((uVar4 >> 1 & 1) != 0) {
            *param_1 = *pbVar8;
            param_1[1] = pbVar8[1];
            param_3 = pbVar8 + 2;
            param_1 = param_1 + 2;
          }
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)param_1 = *(undefined4 *)param_3;
            param_3 = param_3 + 4;
            param_1 = param_1 + 4;
          }
          if (iVar7 < 1) goto cf_continue_loop_006D26AD;
          bVar3 = *param_3;
          uVar5 = (uint)bVar3;
          pbVar8 = param_3 + 1;
          if (bVar3 < 0x80) goto cf_continue_loop_006D2607;
        }
LAB_006d2620:
        bVar3 = *pbVar8;
        param_3 = pbVar8 + 1;
        iVar7 = iVar7 - (uVar5 & 0xffffff3f);
        uVar5 = uVar5 & 0xffffff3f;
        do {
          *param_1 = bVar3;
          param_1 = param_1 + 1;
          uVar4 = uVar5 - 1;
          bVar1 = 0 < (int)uVar5;
          uVar5 = uVar4;
        } while (uVar4 != 0 && bVar1);
        if (iVar7 < 1) goto cf_continue_loop_006D26AD;
        bVar3 = *param_3;
        uVar5 = (uint)bVar3;
        pbVar8 = pbVar8 + 2;
      } while (0x7f < bVar3);
    }
cf_continue_loop_006D2607:
    param_1 = param_1 + uVar5;
    iVar6 = iVar7 - uVar5;
    param_3 = pbVar8;
    if (iVar6 == 0 || iVar7 < (int)uVar5) goto cf_continue_loop_006D26AD;
    bVar3 = *pbVar8;
    uVar5 = (uint)bVar3;
    iVar7 = iVar6;
  } while( true );
code_r0x006d2671:
  if (0xbf < bVar3) goto LAB_006d2620;
  goto LAB_006d2641;
cf_continue_loop_006D26AD:
  param_1 = param_1 + (param_2 - param_4);
  iVar7 = param_5 + -1;
  bVar1 = param_5 < 1;
  param_5 = iVar7;
  if (iVar7 == 0 || bVar1) {
    return;
  }
  goto LAB_006d25f2;
}

// 006D26D0 FUN_006d26d0
#line 1 "decomp/ST.exe/functions/006D26D0/decomp.c"

void st::fn_006D26D0(byte *param_1,int param_2,byte *param_3,int param_4,int param_5,uint param_6,
                 int param_7)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar7;

  do {
    while( true ) {
      uVar5 = (uint)*param_3;
      param_3 = param_3 + 1;
      iVar6 = param_5;
      if (uVar5 != 0) break;
      param_1 = param_1 + param_2;
      iVar6 = param_7 + -1;
      bVar3 = param_7 < 1;
      param_7 = iVar6;
      if (iVar6 == 0 || bVar3) {
        return;
      }
    }
    while( true ) {
      while( true ) {
        uVar7 = param_6;
        if ((uVar5 & 0x80) == 0) {
          do {
            if (iVar6 < (int)uVar5) {
              uVar5 = (uint)(byte)((char)uVar5 - (char)iVar6);
              goto LAB_006d2766;
            }
            iVar6 = iVar6 - uVar5;
            bVar2 = *param_3;
            uVar5 = (uint)bVar2;
            param_3 = param_3 + 1;
          } while ((bVar2 & 0x80) == 0);
        }
        if ((uVar5 & 0x40) != 0) break;
        uVar4 = uVar5 & 0xffffff3f;
        if (iVar6 < (int)uVar4) {
          param_3 = param_3 + iVar6;
          uVar5 = (uint)(byte)((char)uVar4 - (char)iVar6);
          goto LAB_006d2759;
        }
        uVar5 = (uint)param_3[uVar4];
        param_3 = param_3 + uVar4 + 1;
        iVar6 = iVar6 - uVar4;
      }
      uVar4 = uVar5 & 0xffffff3f;
      if (iVar6 < (int)uVar4) break;
      uVar5 = (uint)param_3[1];
      param_3 = param_3 + 2;
      iVar6 = iVar6 - uVar4;
    }
    uVar5 = (uint)(byte)((char)uVar4 - (char)iVar6);
    while( true ) {
      uVar5 = uVar5 & 0x3f;
      pbVar1 = param_3 + 1;
      bVar2 = *param_3;
      if ((int)uVar7 < (int)uVar5) break;
      uVar7 = uVar7 - uVar5;
      for (; param_3 = pbVar1, uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_1 = bVar2;
        param_1 = param_1 + 1;
      }
      while( true ) {
        while( true ) {
          uVar5 = uVar7;
          if ((int)uVar7 < 1) goto LAB_006d27a4;
          bVar2 = *param_3;
          uVar5 = (uint)bVar2;
          param_3 = param_3 + 1;
          if ((bVar2 & 0x80) != 0) break;
LAB_006d2766:
          if ((int)uVar7 < (int)uVar5) {
            if (0 < (int)uVar7) {
              uVar5 = uVar5 - uVar7;
              param_1 = param_1 + uVar7;
            }
            goto LAB_006d27a4;
          }
          uVar7 = uVar7 - uVar5;
          param_1 = param_1 + uVar5;
        }
        if ((bVar2 & 0x40) != 0) break;
LAB_006d2759:
        uVar5 = uVar5 & 0x3f;
        if ((int)uVar7 < (int)uVar5) {
          uVar5 = uVar5 | 0x80;
          if (0 < (int)uVar7) {
            uVar5 = uVar5 - uVar7;
            for (; uVar7 != 0; uVar7 = uVar7 - 1) {
              *param_1 = *param_3;
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
            }
          }
          goto LAB_006d27a4;
        }
        uVar7 = uVar7 - uVar5;
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *param_1 = *param_3;
          param_3 = param_3 + 1;
          param_1 = param_1 + 1;
        }
      }
    }
    uVar5 = uVar5 | 0xc0;
    if (0 < (int)uVar7) {
      uVar5 = uVar5 - uVar7;
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        *param_1 = bVar2;
        param_1 = param_1 + 1;
      }
    }
LAB_006d27a4:
    iVar6 = (param_4 - param_6) - param_5;
    while( true ) {
      while( true ) {
        pbVar7 = param_3;
        if ((uVar5 & 0x80) == 0) {
          do {
            if (iVar6 <= (int)uVar5) goto cf_continue_loop_006D27EE;
            iVar6 = iVar6 - uVar5;
            bVar2 = *param_3;
            uVar5 = (uint)bVar2;
            param_3 = param_3 + 1;
            pbVar7 = param_3;
          } while ((bVar2 & 0x80) == 0);
        }
        if ((uVar5 & 0x40) == 0) break;
        param_3 = pbVar7 + 1;
        if (iVar6 <= (int)(uVar5 & 0xffffff3f)) goto cf_continue_loop_006D27EE;
        iVar6 = iVar6 - (uVar5 & 0xffffff3f);
        uVar5 = (uint)*param_3;
        param_3 = pbVar7 + 2;
      }
      uVar7 = uVar5 & 0xffffff3f;
      if (iVar6 <= (int)uVar7) break;
      iVar6 = iVar6 - uVar7;
      uVar5 = (uint)pbVar7[uVar7];
      param_3 = pbVar7 + uVar7 + 1;
    }
    param_3 = pbVar7 + uVar7;
cf_continue_loop_006D27EE:
    param_1 = param_1 + (param_2 - param_6);
    iVar6 = param_7 + -1;
    bVar3 = param_7 < 1;
    param_7 = iVar6;
    if (iVar6 == 0 || bVar3) {
      return;
    }
  } while( true );
}

// 006D2820 FUN_006d2820
#line 4 "decomp/ST.exe/functions/006D2820/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 006B84D0 -> 006D2820 @ 006B85C2

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

void st::fn_006D2820(byte *param_1,RecoveredSourceFamily_dibcopy *param_2,byte *param_3,int param_4,
                 uint param_5,uint param_6,uint param_7,int param_8,byte *param_9,int param_10,
                 uint param_11,byte *param_12)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12_mg5;
  byte *pbVar12;
  uint local_c;
  byte *temp_3f0f81c0fe;
  byte *pbVar9;
  byte *pbVar12_mg0;
  byte *pbVar12_mg4;
  byte *pbVar12_mg3;

  if (param_9 != nullptr) {
    param_9 = param_9 + param_10 * (int)param_12 + ((int)param_11 >> 3);
  }
  if ((int)param_5 < 1) {
    param_12 = param_3 + (param_3[0xd] >> 1 & 0xe) + 0x16;
  }
  else {
    param_12 = st::fn_006CFE10(param_3,param_5);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar3 = (uint)*(short *)(param_3 + 0x12);
  bVar7 = (byte)param_11;
  if (param_6 == uVar3) {
    if (param_8 == 0) {
      if (param_9 != nullptr) {
        st::fn_006DA660(st::machine_word_boundary_cast<undefined4>(param_1),st::machine_word_boundary_cast<undefined4>(param_2),(char *)param_12,param_9,param_10,param_11 & 7,param_6,param_7);
        return;
      }
      st::fn_006D25E0(param_1,(int)param_2,param_12,param_6,param_7);
      return;
    }
    if (param_9 == nullptr) {
      if (-1 < (int)(param_7 - 1)) {
        param_9 = (byte *)param_7;
        do {
          uVar6 = (uint)*param_12;
          param_12 = param_12 + 1;
          uVar3 = param_6;
          pbVar12_mg5 = param_1;
          if (uVar6 == 0) {
            param_1 = param_1 + (int)param_2;
          }
          else {
            while( true ) {
              if ((uVar6 & 0x80) == 0) {
                uVar3 = uVar3 - (uVar6 & 0x7f);
                pbVar12_mg5 = pbVar12_mg5 + (uVar6 & 0x7f);
                param_1 = pbVar12_mg5;
              }
              else {
                uVar4 = uVar6 & 0x3f;
                uVar3 = uVar3 - uVar4;
                if ((uVar6 & 0x40) == 0) {
                  pbVar10 = pbVar12_mg5;
                  if (-1 < (int)(uVar4 - 1)) {
                    do {
                      pbVar12_mg5 = pbVar10 + 1;
                      bVar7 = *param_12;
                      param_12 = param_12 + 1;
                      uVar4 = uVar4 - 1;
                      *pbVar10 = *(byte *)((uint)bVar7 + param_8);
                      pbVar10 = pbVar12_mg5;
                      param_1 = pbVar12_mg5;
                    } while (uVar4 != 0);
                  }
                }
                else {
                  bVar7 = *param_12;
                  param_12 = param_12 + 1;
                  bVar7 = *(byte *)((uint)bVar7 + param_8);
                  if (-1 < (int)(uVar4 - 1)) {
                    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                      *(uint *)pbVar12_mg5 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7));
                      pbVar12_mg5 = pbVar12_mg5 + 4;
                    }
                    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                      *pbVar12_mg5 = bVar7;
                      pbVar12_mg5 = pbVar12_mg5 + 1;
                    }
                    pbVar12_mg5 = param_1 + uVar4;
                    param_1 = pbVar12_mg5;
                  }
                }
              }
              if ((int)uVar3 < 1) break;
              uVar6 = (uint)*param_12;
              param_12 = param_12 + 1;
            }
            param_1 = pbVar12_mg5 + ((int)param_2 - param_6);
          }
          param_9 = param_9 + -1;
        } while (param_9 != nullptr);
        return;
      }
    }
    else if (-1 < (int)(param_7 - 1)) {
      do {
        uVar6 = 0x80 >> (bVar7 & 7) & 0xff;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_5 = param_6;
        uVar3 = (uint)*param_12;
        param_12 = param_12 + 1;
        pbVar12_mg4 = param_1;
        param_3 = param_9;
        if (uVar3 == 0) {
          param_1 = param_1 + (int)param_2;
        }
        else {
          while( true ) {
            if ((uVar3 & 0x80) == 0) {
              uVar3 = uVar3 & 0x7f;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_5 = param_5 - uVar3;
              pbVar12_mg4 = pbVar12_mg4 + uVar3;
              uVar6 = (uVar6 << 8) >> ((byte)uVar3 & 7);
              param_1 = pbVar12_mg4;
              if (uVar6 < 0x81) {
                uVar6 = uVar6 & 0xff;
                param_3 = param_3 + ((int)uVar3 >> 3) + 1;
              }
              else {
                param_3 = param_3 + ((int)uVar3 >> 3);
                uVar6 = uVar6 >> 8 & 0xff;
              }
            }
            else {
              pbVar10 = (byte *)(uVar3 & 0x3f);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_5 = param_5 - (int)pbVar10;
              if ((uVar3 & 0x40) == 0) {
                if (-1 < (int)(pbVar10 + -1)) {
                  do {
                    param_1 = pbVar10;
                    if ((*param_3 & (byte)uVar6) != 0) {
                      *pbVar12_mg4 = *(byte *)((uint)*param_12 + param_8);
                    }
                    pbVar12_mg4 = pbVar12_mg4 + 1;
                    param_12 = param_12 + 1;
                    bVar2 = (byte)uVar6 >> 1;
                    uVar6 = (uint)bVar2;
                    if (bVar2 == 0) {
                      uVar6 = 0x80;
                      param_3 = param_3 + 1;
                    }
                    pbVar10 = param_1 + -1;
                    param_1 = pbVar12_mg4;
                  } while (pbVar10 != nullptr);
                }
              }
              else {
                bVar2 = *param_12;
                param_12 = param_12 + 1;
                bVar2 = *(byte *)((uint)bVar2 + param_8);
                pbVar12_mg4 = param_1;
                if (-1 < (int)(pbVar10 + -1)) {
                  do {
                    if ((*param_3 & (byte)uVar6) != 0) {
                      *param_1 = bVar2;
                    }
                    pbVar12_mg4 = param_1 + 1;
                    bVar1 = (byte)uVar6 >> 1;
                    uVar6 = (uint)bVar1;
                    if (bVar1 == 0) {
                      uVar6 = 0x80;
                      param_3 = param_3 + 1;
                    }
                    pbVar10 = pbVar10 + -1;
                    param_1 = pbVar12_mg4;
                  } while (pbVar10 != nullptr);
                }
              }
            }
            if ((int)param_5 < 1) break;
            uVar3 = (uint)*param_12;
            param_12 = param_12 + 1;
          }
          param_1 = pbVar12_mg4 + ((int)param_2 - param_6);
        }
        param_9 = param_9 + param_10;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_7 = param_7 - 1;
      } while (param_7 != 0);
      return;
    }
  }
  else {
    param_3 = param_9;
    if (param_8 == 0) {
      if (param_9 == nullptr) {
        st::fn_006D26D0(param_1,(int)param_2,param_12,uVar3,param_4,param_6,param_7);
        return;
      }
      if (-1 < (int)(param_7 - 1)) {
        param_8 = param_7;
        do {
          uVar6 = (uint)*param_12;
          param_12 = param_12 + 1;
          if (uVar6 == 0) {
            param_1 = param_1 + (int)param_2;
          }
          else {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_7 = (0x80 >> (bVar7 & 7)) << 0x18;
            iVar11 = param_4;
            while( true ) {
              while ((uVar6 & 0x80) == 0) {
                uVar4 = uVar6 & 0x7f;
                if (iVar11 < (int)uVar4) goto LAB_006d2b87;
                iVar11 = iVar11 - uVar4;
                bVar2 = *param_12;
                param_12 = param_12 + 1;
                uVar6 = (uint)bVar2;
              }
              uVar4 = uVar6 & 0x3f;
              if (iVar11 < (int)uVar4) break;
              if ((uVar6 & 0x40) == 0) {
                iVar11 = iVar11 - uVar4;
                uVar6 = (uint)param_12[uVar4];
                param_12 = param_12 + uVar4 + 1;
              }
              else {
                iVar11 = iVar11 - uVar4;
                uVar6 = (uint)param_12[1];
                param_12 = param_12 + 2;
              }
            }
LAB_006d2b87:
            uVar4 = uVar4 - iVar11;
            if (((byte)uVar6 & 0xc0) == 0x80) {
              param_12 = param_12 + iVar11;
            }
            uVar5 = param_6;
            if ((int)uVar4 <= (int)param_6) {
              do {
                uVar5 = uVar5 - uVar4;
                if ((uVar6 & 0x80) == 0) {
                  param_1 = param_1 + uVar4;
                  uVar8 = ((param_7 >> 0x18) << 8) >> ((byte)uVar4 & 7);
                  if (uVar8 < 0x81) {
                    param_3 = param_3 + 1;
                  }
                  else {
                    uVar8 = uVar8 >> 8;
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_7 = uVar8 << 0x18;
                  param_3 = param_3 + ((int)uVar4 >> 3);
                }
                else if ((uVar6 & 0x40) == 0) {
                  if (-1 < (int)(uVar4 - 1)) {
                    do {
                      if ((*param_3 & STPiece<3,1>(param_7)) != 0) {
                        *param_1 = *param_12;
                      }
                      param_1 = param_1 + 1;
                      param_12 = param_12 + 1;
                      uVar8 = (uint)(STPiece<3,1>(param_7) >> 1);
                      if (STPiece<3,1>(param_7) >> 1 == 0) {
                        uVar8 = 0x80;
                        param_3 = param_3 + 1;
                      }
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_7 = uVar8 << 0x18;
                      uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                  }
                }
                else {
                  bVar2 = *param_12;
                  param_12 = param_12 + 1;
                  if (-1 < (int)(uVar4 - 1)) {
                    do {
                      if ((*param_3 & STPiece<3,1>(param_7)) != 0) {
                        *param_1 = bVar2;
                      }
                      param_1 = param_1 + 1;
                      uVar8 = (uint)(STPiece<3,1>(param_7) >> 1);
                      if (STPiece<3,1>(param_7) >> 1 == 0) {
                        uVar8 = 0x80;
                        param_3 = param_3 + 1;
                      }
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_7 = uVar8 << 0x18;
                      uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                  }
                }
                if ((int)uVar5 < 1) {
                  uVar4 = 0;
                  break;
                }
                bVar2 = *param_12;
                uVar6 = (uint)bVar2;
                param_12 = param_12 + 1;
                if ((bVar2 & 0x80) == 0) {
                  uVar4 = uVar6 & 0x7f;
                }
                else {
                  uVar4 = uVar6 & 0x3f;
                }
              } while ((int)uVar4 <= (int)uVar5);
            }
            uVar4 = uVar4 - uVar5;
            bVar2 = (byte)uVar6;
            if ((uVar6 & 0x80) == 0) {
              param_1 = param_1 + uVar5;
            }
            else if ((uVar6 & 0x40) == 0) {
              if (-1 < (int)(uVar5 - 1)) {
                do {
                  if ((*param_3 & STPiece<3,1>(param_7)) != 0) {
                    *param_1 = *param_12;
                  }
                  param_1 = param_1 + 1;
                  param_12 = param_12 + 1;
                  uVar8 = (uint)(STPiece<3,1>(param_7) >> 1);
                  if (STPiece<3,1>(param_7) >> 1 == 0) {
                    uVar8 = 0x80;
                    param_3 = param_3 + 1;
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_7 = uVar8 << 0x18;
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
              }
            }
            else if (0 < (int)uVar5) {
              bVar1 = *param_12;
              param_12 = param_12 + 1;
              if (-1 < (int)(uVar5 - 1)) {
                do {
                  if ((*param_3 & STPiece<3,1>(param_7)) != 0) {
                    *param_1 = bVar1;
                  }
                  param_1 = param_1 + 1;
                  uVar8 = (uint)(STPiece<3,1>(param_7) >> 1);
                  if (STPiece<3,1>(param_7) >> 1 == 0) {
                    uVar8 = 0x80;
                    param_3 = param_3 + 1;
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_7 = uVar8 << 0x18;
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
              }
            }
            iVar11 = (uVar3 - param_4) - param_6;
            if ((int)uVar4 < iVar11) {
              do {
                iVar11 = iVar11 - uVar4;
                pbVar12_mg3 = param_12;
                if (((byte)uVar6 & 0xc0) == 0x80) {
                  pbVar12_mg3 = param_12 + uVar4;
                }
                bVar2 = *pbVar12_mg3;
                uVar6 = (uint)bVar2;
                param_12 = pbVar12_mg3 + 1;
                uVar4 = uVar6;
                if (((bVar2 & 0x80) != 0) && (uVar4 = uVar6 & 0x3f, (bVar2 & 0x40) != 0)) {
                  param_12 = pbVar12_mg3 + 2;
                }
              } while ((int)uVar4 < iVar11);
            }
            if ((bVar2 & 0xc0) == 0x80) {
              param_12 = param_12 + iVar11;
            }
            param_1 = param_1 + ((int)param_2 - param_6);
            param_3 = param_9;
          }
          if (param_3 != nullptr) {
            param_3 = param_3 + param_10;
            param_9 = param_3;
          }
          param_8 = param_8 + -1;
          if (param_8 == 0) {
            return;
          }
        } while( true );
      }
    }
    else if (param_9 == nullptr) {
      if (-1 < (int)(param_7 - 1)) {
        param_11 = param_7;
        do {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_7 = (uint)*param_12;
          param_12 = param_12 + 1;
          iVar11 = param_4;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          if (param_7 == 0) {
            param_1 = param_1 + (int)param_2;
          }
          else {
            while( true ) {
              while ((param_7 & 0x80) == 0) {
                uVar6 = param_7 & 0x7f;
                if (iVar11 < (int)uVar6) goto LAB_006d2e2c;
                bVar7 = *param_12;
                param_12 = param_12 + 1;
                iVar11 = iVar11 - uVar6;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_7 = (uint)bVar7;
              }
              uVar6 = param_7 & 0x3f;
              if (iVar11 < (int)uVar6) break;
              if ((param_7 & 0x40) == 0) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_7 = (uint)param_12[uVar6];
                param_12 = param_12 + uVar6 + 1;
                iVar11 = iVar11 - uVar6;
              }
              else {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_7 = (uint)param_12[1];
                param_12 = param_12 + 2;
                iVar11 = iVar11 - uVar6;
              }
            }
LAB_006d2e2c:
            uVar6 = uVar6 - iVar11;
            if (((byte)param_7 & 0xc0) == 0x80) {
              param_12 = param_12 + iVar11;
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_5 = param_6;
            pbVar10 = param_1;
            pbVar9 = param_1;
            if ((int)uVar6 <= (int)param_6) {
              do {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = param_5 - uVar6;
                if ((param_7 & 0x80) == 0) {
                  pbVar10 = pbVar9 + uVar6;
                  param_1 = pbVar9 + uVar6;
                }
                else {
                  pbVar10 = pbVar9;
                  if ((param_7 & 0x40) == 0) {
                    if (-1 < (int)(uVar6 - 1)) {
                      do {
                        pbVar10 = pbVar9 + 1;
                        bVar7 = *param_12;
                        param_12 = param_12 + 1;
                        uVar6 = uVar6 - 1;
                        *pbVar9 = *(byte *)((uint)bVar7 + param_8);
                        pbVar9 = pbVar10;
                        param_1 = pbVar10;
                      } while (uVar6 != 0);
                    }
                  }
                  else {
                    bVar7 = *(byte *)((uint)*param_12 + param_8);
                    param_12 = param_12 + 1;
                    if (-1 < (int)(uVar6 - 1)) {
                      for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                        *(uint *)pbVar9 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7));
                        pbVar9 = pbVar9 + 4;
                      }
                      for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                        *pbVar9 = bVar7;
                        pbVar9 = pbVar9 + 1;
                      }
                      pbVar10 = param_1 + uVar6;
                      param_1 = pbVar10;
                    }
                  }
                }
                if ((int)param_5 < 1) {
                  uVar6 = 0;
                  break;
                }
                bVar7 = *param_12;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_7 = (uint)bVar7;
                param_12 = param_12 + 1;
                if ((bVar7 & 0x80) == 0) {
                  uVar6 = param_7 & 0x7f;
                }
                else {
                  uVar6 = param_7 & 0x3f;
                }
                pbVar9 = pbVar10;
              } while ((int)uVar6 <= (int)param_5);
            }
            uVar6 = uVar6 - param_5;
            if ((param_7 & 0x80) == 0) {
              pbVar10 = pbVar10 + param_5;
            }
            else if ((param_7 & 0x40) == 0) {
              pbVar12 = pbVar10;
              param_1 = (byte *)param_5;
              if (-1 < (int)(param_5 - 1)) {
                do {
                  pbVar10 = pbVar12 + 1;
                  bVar7 = *param_12;
                  param_12 = param_12 + 1;
                  *pbVar12 = *(byte *)((uint)bVar7 + param_8);
                  param_1 = param_1 + -1;
                  pbVar12 = pbVar10;
                } while (param_1 != nullptr);
              }
            }
            else if (0 < (int)param_5) {
              bVar7 = *(byte *)((uint)*param_12 + param_8);
              param_12 = param_12 + 1;
              if (-1 < (int)(param_5 - 1)) {
                for (uVar4 = param_5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *(uint *)pbVar10 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7));
                  pbVar10 = pbVar10 + 4;
                }
                for (uVar4 = param_5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *pbVar10 = bVar7;
                  pbVar10 = pbVar10 + 1;
                }
                pbVar10 = param_1 + param_5;
              }
            }
            bVar7 = (byte)param_7;
            iVar11 = (uVar3 - param_4) - param_6;
            if ((int)uVar6 < iVar11) {
              do {
                iVar11 = iVar11 - uVar6;
                temp_3f0f81c0fe = param_12;
                if (((byte)param_7 & 0xc0) == 0x80) {
                  temp_3f0f81c0fe = param_12 + uVar6;
                }
                bVar7 = *temp_3f0f81c0fe;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_7 = (uint)bVar7;
                param_12 = temp_3f0f81c0fe + 1;
                uVar6 = param_7;
                if (((bVar7 & 0x80) != 0) && (uVar6 = param_7 & 0x3f, (bVar7 & 0x40) != 0)) {
                  param_12 = temp_3f0f81c0fe + 2;
                }
              } while ((int)uVar6 < iVar11);
            }
            if ((bVar7 & 0xc0) == 0x80) {
              param_12 = param_12 + iVar11;
            }
            param_1 = pbVar10 + ((int)param_2 - param_6);
          }
          if (param_9 != nullptr) {
            param_9 = param_9 + param_10;
          }
          param_11 = param_11 - 1;
          if (param_11 == 0) {
            return;
          }
        } while( true );
      }
    }
    else if (-1 < (int)(param_7 - 1)) {
      local_c = param_7;
      do {
        uVar6 = (uint)*param_12;
        param_12 = param_12 + 1;
        if (uVar6 == 0) {
          param_1 = param_1 + (int)param_2;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_7 = (0x80 >> (bVar7 & 7)) << 0x18;
          iVar11 = param_4;
          while( true ) {
            while ((uVar6 & 0x80) == 0) {
              uVar4 = uVar6 & 0x7f;
              if (iVar11 < (int)uVar4) goto LAB_006d306f;
              iVar11 = iVar11 - uVar4;
              bVar2 = *param_12;
              param_12 = param_12 + 1;
              uVar6 = (uint)bVar2;
            }
            uVar4 = uVar6 & 0x3f;
            if (iVar11 < (int)uVar4) break;
            if ((uVar6 & 0x40) == 0) {
              iVar11 = iVar11 - uVar4;
              uVar6 = (uint)param_12[uVar4];
              param_12 = param_12 + uVar4 + 1;
            }
            else {
              iVar11 = iVar11 - uVar4;
              uVar6 = (uint)param_12[1];
              param_12 = param_12 + 2;
            }
          }
LAB_006d306f:
          uVar4 = uVar4 - iVar11;
          if (((byte)uVar6 & 0xc0) == 0x80) {
            param_12 = param_12 + iVar11;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_5 = param_6;
          if ((int)uVar4 <= (int)param_6) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_5 = param_5 - uVar4;
              if ((uVar6 & 0x80) == 0) {
                param_1 = param_1 + uVar4;
                uVar5 = ((param_7 >> 0x18) << 8) >> ((byte)uVar4 & 7);
                if (uVar5 < 0x81) {
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_7 = uVar5 << 0x18;
                  param_3 = param_3 + ((int)uVar4 >> 3) + 1;
                }
                else {
                  param_3 = param_3 + ((int)uVar4 >> 3);
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_7 = (uVar5 >> 8) << 0x18;
                }
              }
              else if ((uVar6 & 0x40) == 0) {
                if (-1 < (int)(uVar4 - 1)) {
                  do {
                    if ((*param_3 & STPiece<3,1>(param_7)) != 0) {
                      *param_1 = *(byte *)((uint)*param_12 + param_8);
                    }
                    param_1 = param_1 + 1;
                    param_12 = param_12 + 1;
                    uVar5 = (uint)(STPiece<3,1>(param_7) >> 1);
                    if (STPiece<3,1>(param_7) >> 1 == 0) {
                      uVar5 = 0x80;
                      param_3 = param_3 + 1;
                    }
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_7 = uVar5 << 0x18;
                    uVar4 = uVar4 - 1;
                  } while (uVar4 != 0);
                }
              }
              else {
                bVar2 = *param_12;
                param_12 = param_12 + 1;
                bVar2 = *(byte *)((uint)bVar2 + param_8);
                if (-1 < (int)(uVar4 - 1)) {
                  do {
                    if ((*param_3 & STPiece<3,1>(param_7)) != 0) {
                      *param_1 = bVar2;
                    }
                    param_1 = param_1 + 1;
                    uVar5 = (uint)(STPiece<3,1>(param_7) >> 1);
                    if (STPiece<3,1>(param_7) >> 1 == 0) {
                      uVar5 = 0x80;
                      param_3 = param_3 + 1;
                    }
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_7 = uVar5 << 0x18;
                    uVar4 = uVar4 - 1;
                  } while (uVar4 != 0);
                }
              }
              if ((int)param_5 < 1) {
                uVar4 = 0;
                break;
              }
              bVar2 = *param_12;
              uVar6 = (uint)bVar2;
              param_12 = param_12 + 1;
              if ((bVar2 & 0x80) == 0) {
                uVar4 = uVar6 & 0x7f;
              }
              else {
                uVar4 = uVar6 & 0x3f;
              }
            } while ((int)uVar4 <= (int)param_5);
          }
          uVar4 = uVar4 - param_5;
          bVar2 = (byte)uVar6;
          if ((uVar6 & 0x80) == 0) {
            param_1 = param_1 + param_5;
          }
          else if ((uVar6 & 0x40) == 0) {
            if (-1 < (int)(param_5 - 1)) {
              do {
                if ((*param_3 & STPiece<3,1>(param_7)) != 0) {
                  *param_1 = *(byte *)((uint)*param_12 + param_8);
                }
                param_1 = param_1 + 1;
                param_12 = param_12 + 1;
                uVar5 = (uint)(STPiece<3,1>(param_7) >> 1);
                if (STPiece<3,1>(param_7) >> 1 == 0) {
                  uVar5 = 0x80;
                  param_3 = param_3 + 1;
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_7 = uVar5 << 0x18;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = param_5 - 1;
              } while (param_5 != 0);
            }
          }
          else if (0 < (int)param_5) {
            bVar1 = *param_12;
            param_12 = param_12 + 1;
            bVar1 = *(byte *)((uint)bVar1 + param_8);
            if (-1 < (int)(param_5 - 1)) {
              do {
                if ((*param_3 & STPiece<3,1>(param_7)) != 0) {
                  *param_1 = bVar1;
                }
                param_1 = param_1 + 1;
                uVar5 = (uint)(STPiece<3,1>(param_7) >> 1);
                if (STPiece<3,1>(param_7) >> 1 == 0) {
                  uVar5 = 0x80;
                  param_3 = param_3 + 1;
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_7 = uVar5 << 0x18;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = param_5 - 1;
              } while (param_5 != 0);
            }
          }
          iVar11 = (uVar3 - param_4) - param_6;
          if ((int)uVar4 < iVar11) {
            do {
              iVar11 = iVar11 - uVar4;
              pbVar12_mg0 = param_12;
              if (((byte)uVar6 & 0xc0) == 0x80) {
                pbVar12_mg0 = param_12 + uVar4;
              }
              bVar2 = *pbVar12_mg0;
              uVar6 = (uint)bVar2;
              param_12 = pbVar12_mg0 + 1;
              uVar4 = uVar6;
              if (((bVar2 & 0x80) != 0) && (uVar4 = uVar6 & 0x3f, (bVar2 & 0x40) != 0)) {
                param_12 = pbVar12_mg0 + 2;
              }
            } while ((int)uVar4 < iVar11);
          }
          if ((bVar2 & 0xc0) == 0x80) {
            param_12 = param_12 + iVar11;
          }
          param_1 = param_1 + ((int)param_2 - param_6);
          param_3 = param_9;
        }
        if (param_3 != nullptr) {
          param_3 = param_3 + param_10;
          param_9 = param_3;
        }
        local_c = local_c - 1;
      } while (local_c != 0);
    }
  }
  return;
}

// 006D3300 FUN_006d3300
#line 4 "decomp/ST.exe/functions/006D3300/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006CEF60 -> 006D3300 @ 006CF752

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006D3300(uint *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 byte *param_7,int param_8,byte *param_9,int param_10,int param_11,int param_12)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar7_mg1;

  if (param_9 != nullptr) {
    param_9 = param_9 + param_10 * param_12 + (param_11 >> 3);
  }
  if (param_5 < 1) {
    pbVar3 = param_3 + (param_3[0xd] >> 1 & 0xe) + 0x16;
  }
  else {
    pbVar3 = st::fn_006CFE10(param_3,param_5);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar2 = *(short *)(param_3 + 0x12);
  bVar1 = (byte)param_11;
  if (param_6 == sVar2) {
    if (param_9 == nullptr) {
      if (0 < (int)param_7) {
        param_9 = param_7;
        do {
          uVar8 = (uint)*pbVar3;
          pbVar3 = pbVar3 + 1;
          iVar9 = param_6;
          if (uVar8 == 0) {
            param_1 = (uint *)((int)param_1 + param_2);
          }
          else {
            while( true ) {
              uVar5 = uVar8 & 0x7f;
              iVar9 = iVar9 - uVar5;
              if ((uVar8 & 0x80) == 0) {
                param_1 = (uint *)((int)param_1 + uVar5 * 2);
              }
              else {
                for (; uVar5 != 0; uVar5 = uVar5 - 1) {
                  bVar1 = *pbVar3;
                  pbVar3 = pbVar3 + 1;
                  *(undefined2 *)param_1 = *(undefined2 *)(param_8 + (uint)bVar1 * 2);
                  param_1 = (uint *)((int)param_1 + 2);
                }
              }
              if (iVar9 < 1) break;
              uVar8 = (uint)*pbVar3;
              pbVar3 = pbVar3 + 1;
            }
            param_1 = (uint *)((int)param_1 + param_2 + param_6 * -2);
          }
          param_9 = param_9 + -1;
        } while (param_9 != nullptr);
        return;
      }
    }
    else if (0 < (int)param_7) {
      param_11 = (int)param_7;
      do {
        uVar5 = (uint)*pbVar3;
        pbVar3 = pbVar3 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = (byte *)param_6;
        uVar8 = 0x80 >> (bVar1 & 7);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_7 = param_9;
        if (uVar5 == 0) {
          param_1 = (uint *)((int)param_1 + param_2);
        }
        else {
          while( true ) {
            uVar4 = uVar5 & 0x7f;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = param_3 + -uVar4;
            if ((uVar5 & 0x80) == 0) {
              uVar8 = ((uVar8 & 0xff) << 8) >> ((byte)uVar4 & 7);
              param_1 = (uint *)((int)param_1 + uVar4 * 2);
              if (uVar8 < 0x81) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_7 = param_7 + 1;
              }
              else {
                uVar8 = uVar8 >> 8;
              }
              uVar8 = uVar8 & 0xff;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_7 = param_7 + ((int)uVar4 >> 3);
            }
            else {
              for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                if ((*param_7 & (byte)uVar8) != 0) {
                  *(undefined2 *)param_1 = *(undefined2 *)(param_8 + (uint)*pbVar3 * 2);
                }
                param_1 = (uint *)((int)param_1 + 2);
                pbVar3 = pbVar3 + 1;
                bVar6 = (byte)uVar8 >> 1;
                uVar8 = (uint)bVar6;
                if (bVar6 == 0) {
                  uVar8 = 0x80;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_7 = param_7 + 1;
                }
              }
            }
            if ((int)param_3 < 1) break;
            uVar5 = (uint)*pbVar3;
            pbVar3 = pbVar3 + 1;
          }
          param_1 = (uint *)((int)param_1 + param_2 + param_6 * -2);
        }
        param_9 = param_9 + param_10;
        param_11 = param_11 + -1;
      } while (param_11 != 0);
      return;
    }
  }
  else if (0 < (int)param_7) {
    param_12 = (int)param_7;
    do {
      uVar8 = (uint)*pbVar3;
      pbVar3 = pbVar3 + 1;
      if (uVar8 == 0) {
        param_1 = (uint *)((int)param_1 + param_2);
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_7 = param_9;
        uVar5 = 0x80 >> (bVar1 & 7);
        uVar4 = uVar8 & 0x7f;
        iVar9 = param_4;
        if ((int)uVar4 <= param_4) {
          do {
            if ((uVar8 & 0x80) != 0) {
              pbVar3 = pbVar3 + uVar4;
            }
            iVar9 = iVar9 - uVar4;
            uVar8 = (uint)*pbVar3;
            pbVar3 = pbVar3 + 1;
            uVar4 = uVar8 & 0x7f;
          } while ((int)uVar4 <= iVar9);
        }
        puVar7 = (uint *)(uVar4 - iVar9);
        if ((uVar8 & 0x80) != 0) {
          pbVar3 = pbVar3 + iVar9;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = (byte *)param_6;
        if (param_9 == nullptr) {
          puVar10 = param_1;
          if ((int)puVar7 <= param_6) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = (byte *)((int)param_3 - (int)puVar7);
              if ((uVar8 & 0x80) == 0) {
                puVar10 = (uint *)((int)param_1 + (int)puVar7 * 2);
              }
              else {
                puVar10 = param_1;
                if (0 < (int)puVar7) {
                  do {
                    puVar10 = (uint *)((int)param_1 + 2);
                    bVar6 = *pbVar3;
                    pbVar3 = pbVar3 + 1;
                    puVar7 = (uint *)((int)puVar7 - 1);
                    *(undefined2 *)param_1 = *(undefined2 *)(param_8 + (uint)bVar6 * 2);
                    param_1 = puVar10;
                  } while (puVar7 != nullptr);
                }
              }
              if ((int)param_3 < 1) {
                puVar7 = nullptr;
                break;
              }
              uVar8 = (uint)*pbVar3;
              puVar7 = (uint *)(uVar8 & 0x7f);
              pbVar3 = pbVar3 + 1;
              param_1 = puVar10;
            } while ((int)puVar7 <= (int)param_3);
          }
          uVar4 = (int)puVar7 - (int)param_3;
          param_1 = puVar10;
          if ((uVar8 & 0x80) == 0) {
LAB_006d36c3:
            puVar7_mg1 = (uint *)((int)param_1 + (int)param_3 * 2);
          }
          else {
            puVar7_mg1 = puVar10;
            param_1 = (uint *)param_3;
            if (0 < (int)param_3) {
              do {
                puVar7_mg1 = (uint *)((int)puVar10 + 2);
                bVar6 = *pbVar3;
                pbVar3 = pbVar3 + 1;
                *(undefined2 *)puVar10 = *(undefined2 *)(param_8 + (uint)bVar6 * 2);
                param_1 = (uint *)((int)param_1 + -1);
                puVar10 = puVar7_mg1;
              } while (param_1 != nullptr);
            }
          }
        }
        else {
          puVar10 = param_1;
          if ((int)puVar7 <= param_6) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = (byte *)((int)param_3 - (int)puVar7);
              if ((uVar8 & 0x80) == 0) {
                puVar10 = (uint *)((int)puVar10 + (int)puVar7 * 2);
                uVar5 = ((uVar5 & 0xff) << 8) >> ((byte)puVar7 & 7);
                if (uVar5 < 0x81) {
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_7 = param_7 + 1;
                }
                else {
                  uVar5 = uVar5 >> 8;
                }
                uVar5 = uVar5 & 0xff;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_7 = param_7 + ((int)puVar7 >> 3);
              }
              else {
                param_1 = puVar7;
                if (0 < (int)puVar7) {
                  do {
                    if ((*param_7 & (byte)uVar5) != 0) {
                      *(undefined2 *)puVar10 = *(undefined2 *)(param_8 + (uint)*pbVar3 * 2);
                    }
                    puVar10 = (uint *)((int)puVar10 + 2);
                    pbVar3 = pbVar3 + 1;
                    bVar6 = (byte)uVar5 >> 1;
                    uVar5 = (uint)bVar6;
                    if (bVar6 == 0) {
                      uVar5 = 0x80;
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_7 = param_7 + 1;
                    }
                    param_1 = (uint *)((int)param_1 + -1);
                  } while (param_1 != nullptr);
                }
              }
              param_1 = puVar10;
              if ((int)param_3 < 1) {
                puVar7 = nullptr;
                break;
              }
              uVar8 = (uint)*pbVar3;
              puVar7 = (uint *)(uVar8 & 0x7f);
              pbVar3 = pbVar3 + 1;
            } while ((int)puVar7 <= (int)param_3);
          }
          uVar4 = (int)puVar7 - (int)param_3;
          if ((uVar8 & 0x80) == 0) goto LAB_006d36c3;
          puVar7_mg1 = param_1;
          if (0 < (int)param_3) {
            do {
              if ((*param_7 & (byte)uVar5) != 0) {
                *(undefined2 *)param_1 = *(undefined2 *)(param_8 + (uint)*pbVar3 * 2);
              }
              puVar7_mg1 = (uint *)((int)param_1 + 2);
              pbVar3 = pbVar3 + 1;
              bVar6 = (byte)uVar5 >> 1;
              uVar5 = (uint)bVar6;
              if (bVar6 == 0) {
                uVar5 = 0x80;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_7 = param_7 + 1;
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = param_3 + -1;
              param_1 = puVar7_mg1;
            } while (param_3 != nullptr);
          }
        }
        iVar9 = (sVar2 - param_4) - param_6;
        if ((int)uVar4 < iVar9) {
          do {
            if ((uVar8 & 0x80) != 0) {
              pbVar3 = pbVar3 + uVar4;
            }
            iVar9 = iVar9 - uVar4;
            uVar8 = (uint)*pbVar3;
            uVar4 = uVar8 & 0x7f;
            pbVar3 = pbVar3 + 1;
          } while ((int)uVar4 < iVar9);
        }
        if ((uVar8 & 0x80) != 0) {
          pbVar3 = pbVar3 + iVar9;
        }
        param_1 = (uint *)((int)puVar7_mg1 + param_2 + param_6 * -2);
      }
      if (param_9 != nullptr) {
        param_9 = param_9 + param_10;
      }
      param_12 = param_12 + -1;
    } while (param_12 != 0);
  }
  return;
}

// 006D39F0 FUN_006d39f0
#line 4 "decomp/ST.exe/functions/006D39F0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006D39F0(undefined4 *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;

  if ((0 < param_5) && (0 < param_6)) {
    iVar3 = param_5;
    do {
      do {
        bVar1 = *param_3;
        param_3 = param_3 + 1;
        *param_1 = *(undefined4 *)(param_7 + (uint)bVar1 * 4);
        param_1 = param_1 + 1;
        iVar4 = iVar3 + -1;
        bVar2 = 0 < iVar3;
        iVar3 = iVar4;
      } while (iVar4 != 0 && bVar2);
      param_3 = param_3 + (param_4 - param_5);
      param_1 = (undefined4 *)((int)param_1 + param_2 + param_5 * -4);
      iVar4 = param_6 + -1;
      bVar2 = 0 < param_6;
      iVar3 = param_5;
      param_6 = iVar4;
    } while (iVar4 != 0 && bVar2);
  }
  return;
}

// 006D3A50 FUN_006d3a50
#line 4 "decomp/ST.exe/functions/006D3A50/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006D3A50(undefined2 *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int local_8;

  if (0 < param_6) {
    local_8 = param_6;
    do {
      if (0 < param_5) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_5;
        puVar2 = param_1;
        do {
          puVar1 = (undefined2 *)(param_7 + (uint)*param_3 * 4);
          param_1 = (undefined2 *)((int)puVar2 + 3);
          param_3 = param_3 + 1;
          *puVar2 = *puVar1;
          *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar1 + 1);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + -1;
          puVar2 = param_1;
        } while (param_6 != 0);
      }
      param_1 = (undefined2 *)((int)param_1 + param_2 + param_5 * -3);
      param_3 = param_3 + (param_4 - param_5);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

// 006D3C30 FUN_006d3c30
#line 4 "decomp/ST.exe/functions/006D3C30/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:5: parameter=/int
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0x18, direct_reads=1, scalar_operations=2, signed_comparisons=1, unsigned_bounds=0,
   pointer_dereferences=0, slot_reused=false; sites=006D3C7F incoming load: MOV EDX,dword ptr [EBP +
   0x18] | 006D3CB4 scalar operation: ADD ECX,EDX | 006D3CB9 scalar operation: LEA EDX,[EBP + -0x10]

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void st::fn_006D3C30(AnonShape_006D3C30_0FAA5DE6 *param_1,int param_2,int param_3,int param_4,
                 int param_5,AnonShape_006D3C30_B7073A5B *param_6)

{
  undefined4 *lprcDst;
  BOOL BVar1;
  HRGN pHVar2;
  RECT local_24;
  RECT local_14;

  if (param_6 != nullptr) {
    *(undefined4 *)param_6 = param_1->field_0484;
    param_6->field_0004 = param_1->field_0488;
    param_6->field_0008 = param_1->field_048C - param_1->field_0484;
    param_6->field_000C = param_1->field_0490 - param_1->field_0488;
  }
  if ((-1 < param_4) && (-1 < param_5)) {
    if ((param_2 != 0) ||
       (((param_3 != 0 || (param_4 != param_1->field_0018)) || (param_5 != param_1->field_001C)))) {
      local_24.left = param_2;
      local_24.right = param_2 + param_4;
      local_14.right = param_1->field_0018;
      local_24.top = param_3;
      local_24.bottom = param_3 + param_5;
      local_14.bottom = param_1->field_001C;
      lprcDst = &param_1->field_0484;
      local_14.top = 0;
      local_14.left = 0;
      BVar1 = st::external_0000009A((LPRECT)lprcDst,&local_24,&local_14);
      if (BVar1 == 0) {
        param_1->field_0490 = 0;
        param_1->field_048C = 0;
        param_1->field_0488 = 0;
        *lprcDst = 0;
      }
      if ((HGDIOBJ)param_1->field_0494 != (HGDIOBJ)0x0) {
        st::external_000000A6((HGDIOBJ)param_1->field_0494);
      }
      pHVar2 = st::external_000000B8(*lprcDst,param_1->field_0488,param_1->field_048C,param_1->field_0490);
      param_1->field_0494 = st::machine_word_boundary_cast<undefined4>(pHVar2);
      return;
    }
  }
  param_1->field_0490 = param_1->field_001C;
  param_1->field_0488 = 0;
  param_1->field_0484 = 0;
  param_1->field_048C = param_1->field_0018;
  if ((HGDIOBJ)param_1->field_0494 != (HGDIOBJ)0x0) {
    st::external_000000A6((HGDIOBJ)param_1->field_0494);
  }
  param_1->field_0494 = 0;
  return;
}

// 006D3D80 FUN_006d3d80
#line 4 "decomp/ST.exe/functions/006D3D80/decomp.c"
void st::fn_006D3D80(int param_1,int param_2,int param_3,byte *param_4,int param_5,int param_6,
                 int param_7,int param_8,byte *param_9,int param_10,int param_11,int param_12,
                 int param_13,int param_14,int param_15,int param_16,int param_17,int param_18,
                 int param_19,byte *param_20,byte *param_21)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  byte *pbVar15;
  int local_48;
  int local_44;
  byte *local_40;
  int local_34;
  int local_30;
  uint local_28;
  int local_20;
  byte *local_14;
  byte *local_10;
  byte *local_c;
  byte *local_8;
  byte *pbVar6;
  byte *pbVar13_mg0;

  iVar2 = param_18 / param_14;
  iVar3 = (int)(param_5 + 7 + (param_5 + 7 >> 0x1f & 7U)) >> 3;
  if (param_20 != nullptr) {
    param_20 = param_20 + iVar3 * param_7 + (param_6 >> 3);
  }
  if (param_21 != nullptr) {
    param_21 = param_21 + iVar3 * param_7 + (param_6 >> 3);
  }
  if (0 < (int)param_9) {
    local_20 = param_7;
    local_40 = param_9;
    pbVar12 = param_4;
    do {
      local_8 = param_20;
      local_10 = param_21;
      local_c = pbVar12 + (param_3 - (int)param_4);
      param_18 = (0x80 >> ((byte)param_6 & 7)) << 0x18;
      param_7 = 0;
      local_14 = pbVar12;
      if (0 < param_8) {
        do {
          pbVar15 = (byte *)(param_7 * param_14 + param_1);
          iVar4 = param_7;
          if (((param_3 == 0) || (param_10 == 0)) || (local_28 = (uint)*local_c, local_28 != 0)) {
            if (((param_4 != nullptr) && (param_12 != 0)) &&
               (((uint)*local_14 != param_13 - 1U &&
                ((param_21 == nullptr || ((*local_10 & STPiece<3,1>(param_18)) != 0)))))) {
              st::fn_006DAC70(st::pointer_boundary_cast<undefined1 *>(pbVar15),param_2,*(byte **)(param_12 + (uint)*local_14 * 4),param_14,0,
                           param_14,param_15,0);
            }
            if ((((param_3 != 0) && (param_10 != 0)) && (local_28 != param_11 - 1U)) &&
               ((param_20 == nullptr || ((*local_8 & STPiece<3,1>(param_18)) != 0)))) {
              param_9 = *(byte **)(param_10 + local_28 * 4);
              if (param_16 == 0) {
                st::fn_006DAC70(st::pointer_boundary_cast<undefined1 *>(pbVar15),param_2,param_9,param_14,0,param_14,param_15,0);
              }
              else {
                bVar8 = 0x80;
                pbVar7 = (byte *)((((param_6 + param_7) % iVar2) * param_14 -
                                  ((param_19 - (local_20 % (param_19 / param_15)) * param_15) + -1)
                                  * param_17) + param_16);
                if (0 < param_15) {
                  local_30 = param_15;
                  do {
                    pbVar13_mg0 = param_9;
                    local_34 = param_14;
                    if (0 < param_14) {
                      do {
                        if ((*pbVar13_mg0 & bVar8) != 0) {
                          *pbVar15 = *pbVar7;
                        }
                        pbVar15 = pbVar15 + 1;
                        pbVar7 = pbVar7 + 1;
                        bVar8 = bVar8 >> 1;
                        if (bVar8 == 0) {
                          pbVar13_mg0 = pbVar13_mg0 + 1;
                          bVar8 = 0x80;
                        }
                        local_34 = local_34 + -1;
                      } while (local_34 != 0);
                    }
                    param_9 = param_9 + ((int)(param_14 + 7 + (param_14 + 7 >> 0x1f & 7U)) >> 3);
                    pbVar15 = pbVar15 + (param_2 - param_14);
                    pbVar7 = pbVar7 + (param_17 - param_14);
                    local_30 = local_30 + -1;
                  } while (local_30 != 0);
                }
              }
            }
LAB_006d4180:
            bVar8 = STPiece<3,1>(param_18) >> 1;
            param_18 = (uint)bVar8 << 0x18;
            if (bVar8 == 0) {
              local_8 = local_8 + 1;
              local_10 = local_10 + 1;
              param_18 = -0x80000000;
            }
            local_c = local_c + 1;
            local_14 = local_14 + 1;
            param_7 = iVar4 + 1;
          }
          else {
            iVar14 = 0;
            if (param_8 <= param_7) goto LAB_006d4180;
            do {
              local_28 = (uint)*local_c;
              if ((local_28 != 0) ||
                 ((param_20 != nullptr && ((*local_8 & STPiece<3,1>(param_18)) == 0)))) break;
              bVar8 = STPiece<3,1>(param_18) >> 1;
              param_18 = (uint)bVar8 << 0x18;
              if (bVar8 == 0) {
                local_8 = local_8 + 1;
                local_10 = local_10 + 1;
                param_18 = -0x80000000;
              }
              iVar14 = iVar14 + 1;
              local_c = local_c + 1;
              local_14 = local_14 + 1;
              iVar4 = iVar4 + 1;
            } while (iVar4 < param_8);
            if (iVar14 == 0) goto LAB_006d4180;
            if (param_16 == 0) {
              param_7 = iVar4;
              if (0 < param_15) {
                local_34 = param_15;
                do {
                  pbVar7 = pbVar15;
                  for (uVar10 = (uint)(iVar14 * param_14) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                    pbVar7[0] = 0;
                    pbVar7[1] = 0;
                    pbVar7[2] = 0;
                    pbVar7[3] = 0;
                    pbVar7 = pbVar7 + 4;
                  }
                  for (uVar10 = iVar14 * param_14 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                    *pbVar7 = 0;
                    pbVar7 = pbVar7 + 1;
                  }
                  pbVar15 = pbVar15 + param_2;
                  local_34 = local_34 + -1;
                } while (local_34 != 0);
              }
            }
            else {
              local_44 = (param_7 + param_6) % iVar2;
              local_48 = local_44 * param_14;
              param_9 = pbVar15;
              while( true ) {
                pbVar15 = (byte *)((param_16 -
                                   ((param_19 - (local_20 % (param_19 / param_15)) * param_15) + -1)
                                   * param_17) + local_48);
                iVar9 = iVar14;
                if (iVar2 < local_44 + iVar14) {
                  iVar9 = iVar2 - local_44;
                }
                iVar14 = iVar14 - iVar9;
                local_44 = 0;
                local_48 = 0;
                if (param_14 == 8) {
                  if (0 < param_15) {
                    local_30 = param_15;
                    pbVar7 = param_9;
                    do {
                      if (0 < iVar9 * 2) {
                        pbVar5 = pbVar7 + 4;
                        uVar10 = iVar9 * 2 + 1U >> 1;
                        pbVar13 = pbVar15;
                        do {
                          uVar1 = *(undefined4 *)pbVar13;
                          pbVar13 = pbVar13 + 8;
                          *(undefined4 *)(pbVar5 + -4) = uVar1;
                          *(undefined4 *)pbVar5 =
                               *(undefined4 *)(pbVar5 + ((int)pbVar15 - (int)pbVar7));
                          pbVar5 = pbVar5 + 8;
                          uVar10 = uVar10 - 1;
                        } while (uVar10 != 0);
                      }
                      pbVar7 = pbVar7 + param_2;
                      pbVar15 = pbVar15 + param_17;
                      local_30 = local_30 + -1;
                    } while (local_30 != 0);
                  }
                  uVar10 = iVar9 << 3;
                }
                else {
                  uVar10 = iVar9 * param_14;
                  if (0 < param_15) {
                    local_30 = param_15;
                    pbVar6 = param_9;
                    do {
                      pbVar7 = pbVar15;
                      pbVar13 = pbVar6;
                      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar7;
                        pbVar7 = pbVar7 + 4;
                        pbVar13 = pbVar13 + 4;
                      }
                      pbVar6 = pbVar6 + param_2;
                      for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                        *pbVar13 = *pbVar7;
                        pbVar7 = pbVar7 + 1;
                        pbVar13 = pbVar13 + 1;
                      }
                      pbVar15 = pbVar15 + param_17;
                      local_30 = local_30 + -1;
                    } while (local_30 != 0);
                  }
                }
                param_7 = iVar4;
                if (iVar14 < 1) break;
                param_9 = param_9 + uVar10;
              }
            }
          }
        } while (param_7 < param_8);
      }
      if (param_20 != nullptr) {
        param_20 = param_20 + iVar3;
      }
      if (param_21 != nullptr) {
        param_21 = param_21 + iVar3;
      }
      param_1 = param_1 + param_2 * param_15;
      pbVar12 = pbVar12 + param_5;
      local_20 = local_20 + 1;
      local_40 = local_40 + -1;
    } while (local_40 != nullptr);
  }
  return;
}

// 006D46A0 FUN_006d46a0
#line 4 "decomp/ST.exe/functions/006D46A0/decomp.c"
void st::fn_006D46A0(undefined4 *param_1,DWORD param_2)

{
  DWORD dwErrCode;
  DWORD DVar1;

  if (param_1 != nullptr) {
    dwErrCode = st::external_00000028();
    if ((param_1[2] & 0x100000) == 0) {
      if ((LPCVOID)param_1[0xd] != (LPCVOID)0x0) {
        st::external_00000008((LPCVOID)param_1[0xd]);
      }
      if ((param_1[2] & 0x800000) != 0) {
        if (param_2 == 0) {
          param_2 = param_1[6];
        }
        DVar1 = st::external_00000052((HANDLE)param_1[3],param_2,(PLONG)0x0,0);
        if (DVar1 == param_2) {
          st::external_00000009((HANDLE)param_1[3]);
        }
      }
    }
    if ((HANDLE)param_1[3] != (HANDLE)0xffffffff) {
      st::external_00000027((HANDLE)param_1[3]);
    }
    st::fn_006A5E90((short *)param_1[1]);
    if ((param_1[2] & 0x400000) != 0) {
      st::fn_006A5E90((short *)param_1);
    }
    st::external_0000000A(dwErrCode);
  }
  return;
}

// 006D4930 FUN_006d4930
#line 4 "decomp/ST.exe/functions/006D4930/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 006D4930 -> EXTERNAL:0000004F @ 006D496E

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 006D4930 -> EXTERNAL:0000004F @ 006D496E */

DWORD st::fn_006D4930(AnonShape_006D4930_676532DD *param_1,LPDWORD lpNumberOfBytesRead,
                  undefined4 *param_3,DWORD nNumberOfBytesToRead)

{
  DWORD DVar1;
  BOOL BVar2;
  byte *puVar4;

  puVar4 = (byte *)(param_3);
  if ((param_1->field_0008 & 0x100000) == 0) {
    if (param_1->field_0034 == 0) {
      return 0xffffffaf;
    }
    if ((int)lpNumberOfBytesRead + nNumberOfBytesToRead <= param_1->field_0038) {
      if (param_3 != nullptr) {
        puVar4 = (byte *)(param_1->field_0034 + (int)lpNumberOfBytesRead);
        memmove(param_3, puVar4, nNumberOfBytesToRead); /* compiler REP MOVS byte copy */
      }
      return 0;
    }
  }
  else {
    if (param_3 == nullptr) {
      return 0;
    }
    DVar1 = st::external_00000052(param_1->field_000C,(LONG)lpNumberOfBytesRead,(PLONG)0x0,0);
    if ((DVar1 == 0xffffffff) ||
       (BVar2 = st::external_0000004F(param_1->field_000C,st::pointer_boundary_cast<LPVOID>(puVar4),nNumberOfBytesToRead,
                         (LPDWORD)&lpNumberOfBytesRead,(LPOVERLAPPED)0x0), BVar2 == 0)) {
      DVar1 = st::external_00000028();
      if (DVar1 != 0) {
        return DVar1;
      }
      return 0xffffff03;
    }
    if (lpNumberOfBytesRead == (LPDWORD)nNumberOfBytesToRead) {
      return 0;
    }
  }
  return 0xfffffff2;
}

// 006D4CF0 FUN_006d4cf0
#line 4 "decomp/ST.exe/functions/006D4CF0/decomp.c"
undefined4 __cdecl st::fn_006D4CF0(AnonShape_006D4CF0_8A8947BE *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  int *piVar7;

  iVar6 = 4;
  bVar10 = true;
  piVar8 = param_2 + 0xb;
  piVar9 = st::pointer_boundary_cast<int *>(&DAT_007a1358);
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar10 = *piVar8 == *piVar9;
    piVar8 = piVar8 + 1;
    piVar9 = piVar9 + 1;
  } while (bVar10);
  if (bVar10) {
    if ((uint)param_2[0x10] < 0x58) {
      return 0x80004005;
    }
    iVar6 = 4;
    bVar10 = true;
    piVar7 = param_2;
    piVar8 = st::pointer_boundary_cast<int *>(&DAT_007a1348);
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar10 = *piVar7 == *piVar8;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    } while (bVar10);
    if (bVar10) {
      piVar8 = (int *)param_2[0x11];
      if ((((((piVar8[0xc] == 0x28) && (0 < piVar8[0xd])) && (piVar8[0xe] != 0)) &&
           (((short)piVar8[0xf] == 1 &&
            (uVar4 = st::fn_00749989((char *)(param_2 + 4)), (short)uVar4 != -1)))) &&
          ((piVar8[0x10] == 0 ||
           ((piVar8[0x10] == 3 &&
            ((STField<short>(piVar8,0x3e) == 0x10 || (STField<short>(piVar8,0x3e) == 0x20)))))
           ))) && ((piVar8[0x11] == 0 ||
                   (iVar5 = st::fn_00749841((RecoveredSourceFamily_dibcopy *)(piVar8 + 0xc)),
                   piVar8[0x11] == iVar5)))) {
        uVar3 = STField<ushort>(piVar8,0x3e);
        iVar6 = param_1->field_0028;
        if ((int)(uint)uVar3 <= *(int *)(iVar6 + 0x20)) {
          param_1->field_0090 = st::machine_word_boundary_cast<undefined4>(piVar8[2] - *piVar8);
          iVar1 = piVar8[3];
          iVar2 = piVar8[1];
          param_1->field_0094 = iVar1 - iVar2;
          if ((param_1->field_0090 == 0) || (iVar1 - iVar2 == 0)) {
            param_1->field_0090 = piVar8[0xd];
            uVar7 = st::machine_word_boundary_cast<uint>(piVar8[0xe] >> 0x1f);
            param_1->field_0094 = (piVar8[0xe] ^ uVar7) - uVar7;
          }
          if ((param_1->field_0004 & 0x8000000) == 0) {
            param_1->field_0008 = 0;
            param_1->field_000C = 0;
            param_1->field_0010 = param_1->field_0090;
            param_1->field_0014 = param_1->field_0094;
          }
          uVar3 = STField<ushort>(piVar8,0x3e);
          if (uVar3 == 8) {
            iVar6 = piVar8[0x14];
            if (iVar6 == 0) {
              iVar6 = 0x100;
            }
            if (iVar6 * 4 + 0x58U <= (uint)param_2[0x10]) {
              piVar8 = piVar8 + 0x16;
              piVar9 = (int *)&param_1[1].field_0x70;
              for (; iVar6 != 0; iVar6 = iVar6 + -1) {
                *piVar9 = *piVar8;
                piVar8 = piVar8 + 1;
                piVar9 = piVar9 + 1;
              }
            }
            return 0;
          }
        }
        if (*(uint *)(iVar6 + 0x20) == (uint)uVar3) {
          if (uVar3 != 0x10) {
            return 0;
          }
          if (piVar8[0x10] == 3) {
            if ((piVar8[0x16] == *(int *)(iVar6 + 0x4c4)) &&
               (piVar8[0x17] == *(int *)(iVar6 + 0x4c8))) {
              if (piVar8[0x18] == *(int *)(iVar6 + 0x4cc)) {
                return 0;
              }
              return 0x80070057;
            }
          }
          else if (((*(int *)(iVar6 + 0x4c4) == 0x7c00) && (*(int *)(iVar6 + 0x4c8) == 0x3e0)) &&
                  (*(int *)(iVar6 + 0x4cc) == 0x1f)) {
            return 0;
          }
        }
      }
    }
  }
  return 0x80070057;
}

// 006D4EF0 FUN_006d4ef0
#line 4 "decomp/ST.exe/functions/006D4EF0/decomp.c"
int st::fn_006D4EF0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  int local_8;

  local_8 = 0;
  this = (void *)st::fn_0072E530(0x318);
  if (this == nullptr) {
    puVar1 = nullptr;
  }
  else {
    puVar1 = st::fn_006D4FF0(this,0,0,st::pointer_boundary_cast<undefined4 *>(&local_8),param_3);
  }
  *param_1 = st::machine_word_boundary_cast<undefined4>(puVar1);
  if (local_8 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_007a1368,param_2);
    return iVar2;
  }
  return local_8;
}

// 006D4F50 FUN_006d4f50
#line 4 "decomp/ST.exe/functions/006D4F50/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void st::fn_006D4F50(int *param_1)

{
  if (param_1 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 0xc))(1);
  }
  return;
}

// 006D4F70 FUN_006d4f70
#line 4 "decomp/ST.exe/functions/006D4F70/decomp.c"
int st::fn_006D4F70(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  int local_8;

  local_8 = 0;
  this = (void *)st::fn_0072E530(0xa8);
  if (this == nullptr) {
    puVar1 = nullptr;
  }
  else {
    puVar1 = st::fn_006D70B0(this,0,0,st::machine_word_boundary_cast<undefined4>(&local_8),param_3);
  }
  *param_1 = st::machine_word_boundary_cast<undefined4>(puVar1);
  if (local_8 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_007a1368,param_2);
    return iVar2;
  }
  return local_8;
}

// 006D4FD0 FUN_006d4fd0
#line 4 "decomp/ST.exe/functions/006D4FD0/decomp.c"
void st::fn_006D4FD0(int *param_1)

{
  if (param_1 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 0xc))(1);
  }
  return;
}

// 006D4FF0 FUN_006d4ff0
#line 4 "decomp/ST.exe/functions/006D4FF0/decomp.c"
undefined4 * __thiscall
st::fn_006D4FF0(void *this,undefined4 param_1,int param_2,undefined4 *param_3,int param_4)

{
  st::fn_0074ABC4(this,(undefined4 *)&DAT_0079dad0,param_1,param_2);
  st::fn_006D5720((void *)((int)this + 0x150),0,(int)this,(int)this + 0x7c,st::machine_word_boundary_cast<undefined4>(param_3),
               (char *)"Input");
  st::fn_0074B91D((undefined4 *)((int)this + 0x240));
  STField<int>(this,0x288) = param_4;
  st::fn_006D5CD0((void *)((int)this + 0x294),st::machine_word_boundary_cast<undefined4>(this),0,param_3);
  *(VTable_0079DB78 **)this = &st_global_0079DB78;
  STField<VTable_0079DB3C *>(this,0xc) = &st_global_0079DB3C;
  STField<VTable_0079DB28 *>(this,0x10) = &st_global_0079DB28;
  STField<VTable_0079DB04 *>(this,200) = &st_global_0079DB04;
  STField<VTable_0079DAF0 *>(this,0xcc) = &st_global_0079DAF0;
  st::fn_0074BB83((undefined4 *)((int)this + 0x240));
  STField<undefined4>(this,0x28c) = 0;
  STField<undefined4>(this,0x290) = 0;
  STField<undefined4>(this,0x308) = 0;
  STField<undefined4>(this,0x310) = 0;
  STField<undefined4>(this,0x30c) = 1;
  if (DAT_007ee240 < 8) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::external_00000081(*(HWND *)(param_4 + 0x78),st::pointer_boundary_cast<LPCSTR>("Need compile \"vidrend.cpp\" with /Zp8 option."),
                st::pointer_boundary_cast<LPCSTR>("Error"),0x1010);
    st::fn_0072EF80(0xffffffff);
  }
  return st::pointer_boundary_cast<undefined4 *>(this);
}

// 006D50E0 FUN_006d50e0
#line 4 "decomp/ST.exe/functions/006D50E0/decomp.c"
/* [STVTableApplier] Virtual slot 0079DB78+0x20

   [STVTableApplier] Virtual slot 0079DDEC+0x20

   [STVTableApplier] Virtual slot 007A13D0+0x20

   [STVTableApplier] Virtual slot 007A15E8+0x20 */

undefined4 st::fn_006D50E0(void)

{
  return 0;
}

// 006D50F0 FUN_006d50f0
#line 1 "decomp/ST.exe/functions/006D50F0/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STVTableApplier] Virtual slot 0079DB78+0x34

   [STVTableApplier] Virtual slot 007A13D0+0x34

   [STVTableApplier] Virtual slot 007A15E8+0x34

   [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_006D50F0(void)

{
  return;
}

// 006D5100 FUN_006d5100
#line 1 "decomp/ST.exe/functions/006D5100/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STVTableApplier] Virtual slot 0079DB78+0x50

   [STVTableApplier] Virtual slot 007A13D0+0x50

   [STVTableApplier] Virtual slot 007A15E8+0x50

   [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_006D5100(void)

{
  return;
}

// 006D5110 FUN_006d5110
#line 4 "decomp/ST.exe/functions/006D5110/decomp.c"
void st::fn_006D5110(int param_1,undefined4 param_2,undefined4 param_3)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)**(undefined4 **)(param_1 + -8))(*(undefined4 **)(param_1 + -8),param_2,param_3);
  return;
}

// 006D5130 FUN_006d5130
#line 4 "decomp/ST.exe/functions/006D5130/decomp.c"
void st::fn_006D5130(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(**(int **)(param_1 + -8) + 4))(*(int **)(param_1 + -8));
  return;
}

// 006D5150 FUN_006d5150
#line 4 "decomp/ST.exe/functions/006D5150/decomp.c"
void st::fn_006D5150(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(**(int **)(param_1 + -8) + 8))(*(int **)(param_1 + -8));
  return;
}

// 006D5170 FUN_006d5170
#line 4 "decomp/ST.exe/functions/006D5170/decomp.c"
int * __thiscall st::fn_006D5170(void *this,byte param_1)

{
  st::fn_006D51A0(st::pointer_boundary_cast<int *>(this));
  if ((param_1 & 1) != 0) {
    st::fn_0072E2B0(st::pointer_boundary_cast<HoloTy *>(this));
  }
  return st::pointer_boundary_cast<int *>(this);
}

// 006D51A0 FUN_006d51a0
#line 4 "decomp/ST.exe/functions/006D51A0/decomp.c"
void __fastcall st::fn_006D51A0(int *param_1)

{
  *param_1 = (int)&st_global_0079DB78;
  param_1[3] = (int)&st_global_0079DB3C;
  param_1[4] = (int)&st_global_0079DB28;
  param_1[0x32] = (int)&st_global_0079DB04;
  param_1[0x33] = (int)&st_global_0079DAF0;
  param_1[0x1e] = 0;
  st::fn_006D5DB0(st::pointer_boundary_cast<undefined4 *>(param_1 + 0xa5));
  st::fn_0074B916((int)(param_1 + 0x90));
  st::fn_007485C5((int)(param_1 + 0x54));
  st::fn_0074AC41(param_1);
  return;
}

// 006D5200 FUN_006d5200
#line 4 "decomp/ST.exe/functions/006D5200/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006D5200 returns literal 2147500037 at 006D5212 @ 006D5218 */

uint __thiscall st::fn_006D5200(void *this,int *param_1)

{
  uint uVar1;

  if (((STField<AnonShape_006D4CF0_8A8947BE *>(this,0x288))->field_0004 & 0x1000000) == 0) {
    return 0x80004005;
  }
  uVar1 = st::fn_006D4CF0(STField<AnonShape_006D4CF0_8A8947BE *>(this,0x288),param_1);
  return uVar1;
}

// 006D5230 FUN_006d5230
#line 4 "decomp/ST.exe/functions/006D5230/decomp.c"
undefined4 __thiscall st::fn_006D5230(void *this,int param_1)

{
  if (param_1 != 0) {
    return 0;
  }
  if (STField<int>(this,0x78) == 0) {
    STField<int>(this,0x78) = (int)this + 0x150;
  }
  return STField<undefined4>(this,0x78);
}

// 006D5260 FUN_006d5260
#line 4 "decomp/ST.exe/functions/006D5260/decomp.c"
undefined4 __thiscall st::fn_006D5260(void *this,undefined4 *param_1)

{
  alignas(4) byte st_stack_frame[1056];

  AnonShape_00749A79_05F12707 *pAVar1;
  AnonShape_00749A79_05F12707 *pAVar2;
  byte bVar3;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar4;
  int local_EAX_263;
  tagPALETTEENTRY **pptVar8;
  int *piVar9;
  HDC hdc;
  UINT UVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 *iStart;
  UINT iStart_00;
  bool bVar13;
  tagPALETTEENTRY *local_414;
  tagPALETTEENTRY *local_3c;
  _RTL_CRITICAL_SECTION *local_14;
  int local_10;
  void *local_c;
  undefined4 *local_8;

  local_14 = (_RTL_CRITICAL_SECTION *)((int)this + 0x7c);
  local_c = this;
  st::external_00000018(local_14);
  pAVar1 = STField<AnonShape_00749A79_05F12707 *>(this,0x284);
  pAVar2 = (AnonShape_00749A79_05F12707 *)param_1[0x11];
  if (((uint)param_1[0x10] < 0x59) || (iVar5 = st::fn_00749A5E((int)pAVar2), iVar5 == 0)) {
    local_8 = nullptr;
  }
  else {
    local_8 = (undefined4 *)0x1;
    if ((pAVar1 != nullptr) &&
       (iVar5 = st::fn_00749A5E((int)pAVar1), iVar5 != 0)) {
      iVar5 = *(int *)&pAVar1[1].field_0xc;
      if ((*(int *)&pAVar2[1].field_0xc == iVar5) ||
         ((*(int *)&pAVar2[1].field_0xc == 0 && (iVar5 == 1 << (pAVar2->field_0x3e & 0x1f))))) {
        pcVar6 = (char *)st::fn_00749A79(pAVar1);
        local_10 = iVar5 * 4;
        pcVar7 = (char *)st::fn_00749A79(pAVar2);
        bVar13 = true;
        iVar5 = local_10;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar13 = *pcVar7 == *pcVar6;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (bVar13);
        this = local_c;
        if (bVar13) {
          local_8 = nullptr;
        }
      }
    }
  }
  st::fn_0074B98A((void *)((int)this + 0x240),param_1);
  pAVar1 = STField<AnonShape_00749A79_05F12707 *>(this,0x284);
  bVar3 = (byte)*(ushort *)&pAVar1->field_0x3e;
  if ((*(ushort *)&pAVar1->field_0x3e < 9) && (*(int *)&pAVar1[1].field_0xc == 0)) {
    *(int *)&pAVar1[1].field_0xc = 1 << (bVar3 & 0x1f);
  }
  if (*(uint *)&pAVar1[1].field_0xc < *(uint *)&pAVar1[1].field_0x10) {
    *(int *)&pAVar1[1].field_0x10 = 1 << (bVar3 & 0x1f);
  }
  if (*(int *)(pAVar1 + 1) == 0) {
    iVar4 = st::fn_00749841((RecoveredSourceFamily_dibcopy *)&pAVar1->field_0030);
    *(int *)(pAVar1 + 1) = iVar4;
  }
  if (local_8 != nullptr) {
    local_EAX_263 = st::fn_00749A79(pAVar1);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = *(undefined4 **)&pAVar1[1].field_0xc;
    local_8 = param_1;
    if (param_1 != nullptr) {
      pptVar8 = &local_414;
      puVar11 = (undefined1 *)(local_EAX_263 + 1);
      do {
        puVar12 = puVar11 + 4;
        *(undefined1 *)pptVar8 = puVar11[1];
        puVar12[(int)((st_stack_frame + 4) + -local_EAX_263)] = *puVar11;
        puVar12[(int)((st_stack_frame + 5) + -local_EAX_263)] = puVar11[-1];
        puVar12[(int)((st_stack_frame + 6) + -local_EAX_263)] = 0;
        pptVar8 = pptVar8 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (undefined4 *)((int)param_1 + -1);
        puVar11 = puVar12;
      } while (param_1 != nullptr);
    }
    iStart_00 = 0;
    pptVar8 = &local_414;
    do {
      if (*pptVar8 != nullptr) break;
      iStart_00 = iStart_00 + 1;
      pptVar8 = pptVar8 + 1;
    } while ((int)iStart_00 < 10);
    iStart = local_8;
    if (0xf6 < (int)local_8) {
      piVar9 = (int *)((st_stack_frame + 4) + (int)local_8 * 4);
      do {
        if (*piVar9 != 0) break;
        iStart = (undefined4 *)((int)iStart - 1);
        piVar9 = piVar9 + -1;
      } while (0xf6 < (int)iStart);
    }
    hdc = st::external_00000099((HWND)0x0);
    if (0 < (int)iStart_00) {
      UVar10 = iStart_00;
      if (10 < (int)iStart_00) {
        UVar10 = 10;
      }
      st::external_000000A8(hdc,0,UVar10,(LPPALETTEENTRY)&local_414);
    }
    if ((int)iStart < 0x100) {
      if ((int)iStart < 0xf6) {
        UVar10 = 10;
      }
      else {
        UVar10 = 0x100 - (int)iStart;
      }
      st::external_000000A8(hdc,(UINT)iStart,UVar10,(LPPALETTEENTRY)&local_3c);
    }
    st::external_00000098((HWND)0x0,hdc);
    this = local_c;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006B0A20(*(AnonShape_GLOBAL_0080759C_9638EF10 **)(STField<int>(local_c,0x288) + 0x28),
                 (int)(&local_414 + iStart_00),iStart_00,(int)iStart - iStart_00,0);
    st::fn_00747406(this,9,nullptr,0);
  }
  st::fn_006D6110((void *)((int)this + 0x294),(int)this + 0x240);
  st::external_00000019(local_14);
  return 0;
}

// 006D54C0 FUN_006d54c0
#line 4 "decomp/ST.exe/functions/006D54C0/decomp.c"
undefined4 __fastcall st::fn_006D54C0(AnonShape_006D54C0_FBA73A61 *param_1)

{
  AnonNested_AnonShape_006D54C0_FBA73A61_0284_041C9282 *pAVar1;
  AnonNested_AnonShape_006D54C0_FBA73A61_0288_92098C55 *pAVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint local_1c;
  _RTL_CRITICAL_SECTION *local_18;
  uint local_14;
  int local_10;
  int local_c;
  int *local_8;

  local_14 = 0;
  local_18 = (_RTL_CRITICAL_SECTION *)&param_1->field_0x7c;
  st::external_00000018(local_18);
  st::fn_0074A193(param_1);
  pAVar1 = param_1->field_0284;
  iVar6 = pAVar1->field_000C - pAVar1->field_0004;
  iVar4 = pAVar1->field_0008 - pAVar1->field_0000;
  if ((iVar4 == 0) || (iVar6 == 0)) {
    iVar4 = pAVar1[3].field_0004;
    uVar5 = (int)pAVar1[3].field_0008 >> 0x1f;
    iVar6 = (pAVar1[3].field_0008 ^ uVar5) - uVar5;
  }
  param_1->field_0288->field_0018 = 0;
  param_1->field_0288->field_001C = 0;
  param_1->field_0288->field_0020 = iVar4;
  param_1->field_0288->field_0024 = iVar6;
  param_1->field_0288->field_0008 = 0;
  param_1->field_0288->field_000C = 0;
  param_1->field_0288->field_0010 = iVar4;
  param_1->field_0288->field_0014 = iVar6;
  param_1->field_0288->field_0098 =
       (uint)*(ushort *)&pAVar1[3].field_000C * (uint)*(ushort *)((int)&pAVar1[3].field_000C + 2);
  pAVar2 = param_1->field_0288;
  pAVar2->field_00B0 = pAVar1[2].field_0008;
  pAVar2->field_00B4 = pAVar1[2].field_000C;
  param_1->field_0288->field_00B8 = pAVar1[2].field_0000;
  param_1->field_0288->field_00BC = pAVar1[2].field_0004;
  uVar5 = (int)pAVar1[3].field_0008 >> 0x1f;
  local_10 = st::fn_006C4350
                       (param_1->field_0288->field_0028,st::pointer_boundary_cast<undefined4 *>(&local_8),pAVar1[3].field_0004,
                        (pAVar1[3].field_0008 ^ uVar5) - uVar5,0,0);
  if (local_10 == 0) {
    local_10 = 0;
    local_c = 0;
    do {
      local_10 = st::fn_006BBE40(local_8,&local_1c,(int *)&local_14,0);
      if (local_10 == 0) {
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
LAB_006d5620:
        (**(code **)(*local_8 + 0x80))(local_8,0);
        break;
      }
      if (local_10 != -0x7789fe3e) {
        if (local_10 == 0) goto LAB_006d5620;
        break;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*local_8 + 0x6c))(local_8);
      local_c = local_c + 1;
    } while (local_c < 2);
  }
  if (local_8 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = nullptr;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((((local_10 != 0) || (pAVar2 = param_1->field_0288, pAVar2->field_0090 != iVar4)) ||
        (pAVar2->field_0094 != iVar6)) ||
       ((uVar5 = (uint)*(ushort *)((int)&pAVar1[3].field_000C + 2),
        (pAVar1[3].field_0004 * uVar5 + 0x1f >> 3 & 0x1ffffffc) != local_14 ||
        (-1 < (int)pAVar1[3].field_0008)))) ||
      (iVar3 = pAVar2->field_0028, uVar5 != *(uint *)(iVar3 + 0x20))) ||
     ((pAVar1[4].field_0000 == 3 &&
      (((pAVar1[5].field_0008 != *(int *)(iVar3 + 0x4c4) ||
        (pAVar1[5].field_000C != *(int *)(iVar3 + 0x4c8))) ||
       (pAVar1[6].field_0000 != *(int *)(iVar3 + 0x4cc))))))) {
    st::fn_006C3500((AnonShape_006C3500_19C01617 *)param_1->field_0288);
    param_1->field_030C = 0;
    param_1->field_0288->field_0090 = iVar4;
    param_1->field_0288->field_0094 = iVar6;
  }
  param_1->field_028C = iVar4;
  param_1->field_0290 = iVar6;
  st::external_00000019(local_18);
  return 0;
}

// 006D5720 FUN_006d5720
#line 4 "decomp/ST.exe/functions/006D5720/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 5.
   Evidence: 006D4FF0 -> 006D5720 @ 006D5023 */

undefined4 * __thiscall
st::fn_006D5720(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            char *text)

{
  st::fn_0074A95F(this,param_2,param_4,(short *)text);
  STField<int>(this,0xe0) = param_2;
  STField<undefined4>(this,0xe4) = param_3;
  *(VTable_0079DCBC **)this = &st_global_0079DCBC;
  STField<VTable_0079DC74 *>(this,0xc) = &st_global_0079DC74;
  STField<VTable_0079DC60 *>(this,0x10) = &st_global_0079DC60;
  STField<VTable_0079DC3C *>(this,0x98) = &st_global_0079DC3C;
  STField<undefined4>(this,0xe8) = 0;
  return st::pointer_boundary_cast<undefined4 *>(this);
}

// 006D5780 FUN_006d5780
#line 4 "decomp/ST.exe/functions/006D5780/decomp.c"
/* [STVTableApplier] Virtual slot 0079DC74+0x34

   [STVTableApplier] Virtual slot 0079DE90+0x34

   [STVTableApplier] Virtual slot 007A14C8+0x34

   [STVTableApplier] Virtual slot 007A1780+0x34

   [STVTableApplier] Virtual slot 007A1820+0x34

   [STVTableApplier] Virtual slot 007A1908+0x34

   [STVTableApplier] Virtual slot 007A19A8+0x34 */

undefined4 st::fn_006D5780(void)

{
  return 0x80004001;
}

// 006D5790 FUN_006d5790
#line 4 "decomp/ST.exe/functions/006D5790/decomp.c"
void st::fn_006D5790(int param_1,undefined4 param_2,undefined4 param_3)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)**(undefined4 **)(param_1 + -8))(*(undefined4 **)(param_1 + -8),param_2,param_3);
  return;
}

// 006D57B0 FUN_006d57b0
#line 4 "decomp/ST.exe/functions/006D57B0/decomp.c"
void st::fn_006D57B0(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(**(int **)(param_1 + -8) + 4))(*(int **)(param_1 + -8));
  return;
}

// 006D57D0 FUN_006d57d0
#line 4 "decomp/ST.exe/functions/006D57D0/decomp.c"
void st::fn_006D57D0(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(**(int **)(param_1 + -8) + 8))(*(int **)(param_1 + -8));
  return;
}

// 006D57F0 FUN_006d57f0
#line 4 "decomp/ST.exe/functions/006D57F0/decomp.c"
undefined4 * __thiscall st::fn_006D57F0(void *this,byte param_1)

{
  st::fn_007485C5((int)this);
  if ((param_1 & 1) != 0) {
    st::fn_0072E2B0(st::pointer_boundary_cast<HoloTy *>(this));
  }
  return st::pointer_boundary_cast<undefined4 *>(this);
}

// 006D5820 FUN_006d5820
#line 4 "decomp/ST.exe/functions/006D5820/decomp.c"
int st::fn_006D5820(AnonShape_006D5820_330472AB *param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  int iVar2;
  int *piVar3;

  lpCriticalSection = param_1->field_004C;
  st::external_00000018(lpCriticalSection);
  iVar1 = param_1->field_0048;
  if (*(int *)(iVar1 + 0x30c) == 0) {
    iVar2 = st::fn_0074862E((int)param_1,param_2);
    st::external_00000019(lpCriticalSection);
    return iVar2;
  }
  if (iVar1 == -0x294) {
    piVar3 = nullptr;
  }
  else {
    piVar3 = (int *)(iVar1 + 0x2a0);
  }
  piVar2 = (int *)param_1->field_0004;
  if (piVar2 != piVar3) {
    if (piVar2 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    if (param_1->field_0048 == -0x294) {
      piVar3 = nullptr;
    }
    else {
      piVar3 = (int *)(param_1->field_0048 + 0x2a0);
    }
    param_1->field_0004 = st::machine_word_boundary_cast<undefined4>(piVar3);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*(int *)param_1->field_0004 + 4))((int *)param_1->field_0004);
  *param_2 = param_1->field_0004;
  st::external_00000019(lpCriticalSection);
  return 0;
}

// 006D58C0 FUN_006d58c0
#line 4 "decomp/ST.exe/functions/006D58C0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall st::fn_006D58C0(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  AnonShape_006BB8B0_D6DE56CA *pAVar2;
  int iVar3;
  int iVar4;
  undefined4 **ppuVar5;
  byte *puVar6;
  byte *puVar7;
  undefined4 *local_58 [18];
  void *local_10;
  AnonShape_006BB8B0_D6DE56CA *local_c;
  _RTL_CRITICAL_SECTION *local_8;

  local_58[1] = nullptr;
  local_58[2] = nullptr;
  local_58[3] = nullptr;
  local_58[5] = nullptr;
  iVar1 = *(int *)(STField<int>(this,0xe0) + 0x288);
  local_8 = STField<_RTL_CRITICAL_SECTION *>(this,0xe4);
  local_58[6] = nullptr;
  local_58[0xc] = nullptr;
  local_58[7] = nullptr;
  local_c = *(AnonShape_006BB8B0_D6DE56CA **)(iVar1 + 0x28);
  local_58[0xd] = nullptr;
  local_58[0] = nullptr;
  local_58[4] = nullptr;
  local_58[8] = (undefined4 *)0x1;
  local_58[9] = nullptr;
  local_58[10] = nullptr;
  local_58[0xb] = nullptr;
  local_58[0xe] = nullptr;
  local_58[0xf] = nullptr;
  local_58[0x10] = nullptr;
  local_58[0x11] = &DAT_00856900;
  local_10 = this;
  st::external_00000018(local_8);
  pAVar2 = local_c;
  if (((*(int *)(iVar1 + 0x90) == 0) || (*(int *)(iVar1 + 0x94) == 0)) ||
     (*(int *)(STField<int>(this,0xe0) + 0x30c) == 0)) {
    st::external_00000019(local_8);
    return 0x8000ffff;
  }
  if (param_1 < 0) {
    st::external_00000019(local_8);
    return 0x80070057;
  }
  if (0 < param_1) {
    st::external_00000019(local_8);
    return 0x40103;
  }
  ppuVar5 = local_58;
  puVar6 = (byte *)(param_2);
  memmove(puVar6, ppuVar5, 0x48); /* compiler REP MOVS byte copy */
  *param_2 = DAT_007a1348;
  param_2[1] = DAT_007a134c;
  param_2[2] = DAT_007a1350;
  param_2[3] = DAT_007a1354;
  param_2[0xb] = DAT_007a1358;
  param_2[0xc] = DAT_007a135c;
  param_2[0xd] = DAT_007a1360;
  param_2[0xe] = DAT_007a1364;
  param_2[0x10] = 0x58;
  memset(&DAT_00856900, 0, 0x468); /* compiler bulk-zero initialization */
  iVar4 = 0;
  DAT_00856900 = 0;
  DAT_00856904 = 0;
  _DAT_00856908 = *(undefined4 *)(iVar1 + 0x90);
  _DAT_0085690c = *(undefined4 *)(iVar1 + 0x94);
  _DAT_00856910 = 0;
  _DAT_00856914 = 0;
  _DAT_00856918 = *(undefined4 *)(iVar1 + 0x90);
  _DAT_0085691c = *(undefined4 *)(iVar1 + 0x94);
  _DAT_00856930 = 0x28;
  _DAT_00856934 = *(int *)(iVar1 + 0x90);
  _DAT_00856938 = -*(int *)(iVar1 + 0x94);
  _DAT_0085693c = 1;
  DAT_0085693e = *(short *)&local_c->field_0x20;
  _DAT_00856940 = 0;
  _DAT_00856950 = 0;
  if (((byte)*(undefined4 *)(iVar1 + 4) & 0xf) == 2) {
    iVar3 = st::fn_006BB8B0(local_c);
    if (iVar3 == 0) {
      _DAT_00856934 = *(int *)(pAVar2 + 1) / *(int *)&pAVar2->field_0x28;
      _DAT_00856938 = -*(int *)&pAVar2->field_0x1c;
      st::fn_006BB980((AnonShape_006BB980_E41494A1 *)pAVar2);
      *(undefined4 *)(STField<int>(local_10,0xe0) + 0x310) = 1;
    }
  }
  _DAT_00856944 = st::fn_00749841((RecoveredSourceFamily_dibcopy *)&DAT_00856930);
  if (DAT_0085693e == 0x10) {
    if (((*(int *)&pAVar2[1].field_0x4c != 0x7c00) && (*(int *)&pAVar2[1].field_0x50 != 0x3e00)) &&
       (*(int *)&pAVar2[1].field_0x54 != 0x1f)) {
      DAT_0085695c = *(undefined4 *)&pAVar2[1].field_0x50;
      _DAT_00856960 = *(undefined4 *)&pAVar2[1].field_0x54;
      _DAT_00856940 = 3;
      DAT_00856958 = *(int *)&pAVar2[1].field_0x4c;
      param_2[0x10] = st::machine_word_boundary_cast<undefined4>(param_2[0x10] + 0xc);
      param_2[4] = DAT_007a1700;
      param_2[5] = DAT_007a1704;
      param_2[6] = DAT_007a1708;
      param_2[7] = DAT_007a170c;
      st::external_00000019(local_8);
      return 0;
    }
    param_2[4] = DAT_007a16f0;
    param_2[5] = DAT_007a16f4;
    param_2[6] = DAT_007a16f8;
    param_2[7] = DAT_007a16fc;
    st::external_00000019(local_8);
    return 0;
  }
  if (DAT_0085693e == 8) {
    param_2[4] = DAT_007a16e0;
    param_2[5] = DAT_007a16e4;
    param_2[6] = DAT_007a16e8;
    param_2[7] = DAT_007a16ec;
    puVar6 = (byte *)(iVar1 + 0x108);
    puVar7 = (byte *)(&DAT_00856958);
    memmove(puVar7, puVar6, 0x400); /* compiler REP MOVS byte copy */
    param_2[0x10] = st::machine_word_boundary_cast<undefined4>(param_2[0x10] + 0x400);
    st::external_00000019(local_8);
    return 0;
  }
  if (DAT_0085693e == 0x18) {
    param_2[4] = DAT_007a16d0;
    param_2[5] = DAT_007a16d4;
    param_2[6] = DAT_007a16d8;
    param_2[7] = DAT_007a16dc;
    st::external_00000019(local_8);
    return 0;
  }
  param_2[4] = DAT_007a16c0;
  param_2[5] = DAT_007a16c4;
  param_2[6] = DAT_007a16c8;
  param_2[7] = DAT_007a16cc;
  st::external_00000019(local_8);
  return 0;
}

// 006D5CD0 FUN_006d5cd0
#line 4 "decomp/ST.exe/functions/006D5CD0/decomp.c"
undefined4 * __thiscall
st::fn_006D5CD0(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  st::fn_00749024(this,param_2,0,param_3,1);
  STField<undefined4>(this,0x58) = 0;
  STField<undefined4>(this,0x60) = 0;
  STField<undefined4>(this,100) = 0;
  STField<undefined4>(this,0x6c) = 0;
  STField<undefined4>(this,0x68) = 0;
  STField<undefined4>(this,0x70) = 0;
  STField<undefined4>(this,0x5c) = param_1;
  *(VTable_0079DD1C **)this = &st_global_0079DD1C;
  STField<VTable_0079DCF8 *>(this,0xc) = &st_global_0079DCF8;
  return st::pointer_boundary_cast<undefined4 *>(this);
}

// 006D5D20 FUN_006d5d20
#line 4 "decomp/ST.exe/functions/006D5D20/decomp.c"
void st::fn_006D5D20(int param_1,undefined4 param_2,undefined4 param_3)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)**(undefined4 **)(param_1 + -8))(*(undefined4 **)(param_1 + -8),param_2,param_3);
  return;
}

// 006D5D40 FUN_006d5d40
#line 4 "decomp/ST.exe/functions/006D5D40/decomp.c"
void st::fn_006D5D40(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(**(int **)(param_1 + -8) + 4))(*(int **)(param_1 + -8));
  return;
}

// 006D5D60 FUN_006d5d60
#line 4 "decomp/ST.exe/functions/006D5D60/decomp.c"
void st::fn_006D5D60(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(**(int **)(param_1 + -8) + 8))(*(int **)(param_1 + -8));
  return;
}

// 006D5D80 FUN_006d5d80
#line 4 "decomp/ST.exe/functions/006D5D80/decomp.c"
undefined4 * __thiscall st::fn_006D5D80(void *this,byte param_1)

{
  st::fn_006D5DB0(st::pointer_boundary_cast<undefined4 *>(this));
  if ((param_1 & 1) != 0) {
    st::fn_0072E2B0(st::pointer_boundary_cast<HoloTy *>(this));
  }
  return st::pointer_boundary_cast<undefined4 *>(this);
}

// 006D5DB0 FUN_006d5db0
#line 4 "decomp/ST.exe/functions/006D5DB0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall st::fn_006D5DB0(undefined4 *param_1)

{
  int *piVar1;

  *param_1 = st::machine_word_boundary_cast<undefined4>(&st_global_0079DD1C);
  param_1[3] = st::machine_word_boundary_cast<undefined4>(&st_global_0079DCF8);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1[0x17] + 0x310) == 0) &&
     (piVar1 = (int *)param_1[0x19], piVar1 != nullptr)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x19] = 0;
  }
  st::fn_00749091((int)param_1);
  return;
}

// 006D5DF0 FUN_006d5df0
#line 4 "decomp/ST.exe/functions/006D5DF0/decomp.c"
undefined4 st::fn_006D5DF0(int param_1,AnonShape_006D5DF0_C24DE923 *param_2)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x58) == 0) {
    return 0x80040209;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(*(int *)(param_1 + 0x58) + 0x44);
  if ((param_2->field_0004 != 0) && ((uint)param_2->field_0004 < *(uint *)(iVar1 + 0x44))) {
    return 0x80070057;
  }
  if (0 < param_2->field_000C) {
    return 0x80070057;
  }
  param_2->field_0004 = *(undefined4 *)(iVar1 + 0x44);
  return 0;
}

// 006D5E50 FUN_006d5e50
#line 4 "decomp/ST.exe/functions/006D5E50/decomp.c"
int st::fn_006D5E50(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG local_14;
  LONG local_10;
  LONG local_c;
  HANDLE local_8;

  local_14 = (PRTL_CRITICAL_SECTION_DEBUG)*param_2;
  local_10 = param_2[1];
  local_c = param_2[2];
  local_8 = (HANDLE)param_2[3];
  if (param_1 == 0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  }
  st::external_00000018(lpCriticalSection);
  local_14 = (PRTL_CRITICAL_SECTION_DEBUG)0x1;
  iVar1 = st::fn_006D5DF0(param_1 + -0xc,(AnonShape_006D5DF0_C24DE923 *)&local_14);
  if (-1 < iVar1) {
    iVar1 = st::fn_00749106((AnonShape_00749106_79800343 *)param_1,(LPCRITICAL_SECTION)&local_14,
                         param_3);
  }
  st::external_00000019(lpCriticalSection);
  return iVar1;
}

// 006D5ED0 FUN_006d5ed0
#line 4 "decomp/ST.exe/functions/006D5ED0/decomp.c"
uint __fastcall st::fn_006D5ED0(AnonShape_006D5ED0_5EF510E8 *param_1)

{
  int *piVar1;
  uint uVar3;
  int uVar2;
  void *this;
  undefined4 *puVar2;
  uint uVar4;
  int iVar5;
  int iVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  AnonShape_006D5ED0_6A5D6B49 *pAVar7;
  InternalExceptionFrame local_5c;
  uint local_18;
  AnonShape_006D5ED0_6A5D6B49 *local_14;
  int local_10;
  AnonShape_006D5ED0_5EF510E8 *local_c;
  _RTL_CRITICAL_SECTION *local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar6 = *(int *)(param_1->field_005C + 0x288);
  if (param_1 == nullptr) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)&param_1->field_0x10;
  }
  local_10 = iVar6;
  local_c = param_1;
  local_8 = lpCriticalSection;
  st::external_00000018(lpCriticalSection);
  uVar3 = st::fn_00749415((AnonShape_00749415_513CA2B2 *)param_1);
  local_18 = uVar3;
  if ((int)uVar3 < 0) {
    st::external_00000019(lpCriticalSection);
    return uVar3;
  }
  if (param_1->field_003C < param_1->field_0038) {
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pAVar7 = (AnonShape_006D5ED0_6A5D6B49 *)(*(int *)(param_1->field_0058 + 0x44) + 0x30);
      local_14 = pAVar7;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(param_1->field_005C + 0x310) == 0) {
        local_5c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_5c;
        uVar2 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
        param_1 = local_c;
        iVar6 = local_10;
        pAVar7 = local_14;
        if (uVar2 != 0) {
          g_currentExceptionFrame = local_5c.previous;
          st::external_00000019(local_8);
          return uVar2;
        }
        if (*(int *)(local_c + 1) == 0) {
          uVar4 = (int)local_14->field_0008 >> 0x1f;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          st::fn_006C4350
                    (*(int *)(local_10 + 0x28),&local_c->field_0064,local_14->field_0004,
                     (local_14->field_0008 ^ uVar4) - uVar4,0,*(uint *)(local_10 + 4) & 0xc);
        }
        g_currentExceptionFrame = local_5c.previous;
      }
      else {
        param_1->field_0064 = *(undefined4 *)(*(int *)(iVar6 + 0x28) + 0x40);
      }
      *(uint *)(iVar6 + 4) = *(uint *)(iVar6 + 4) | 0x2000000;
      this = (void *)st::fn_0072E530(0x48);
      if (this == nullptr) {
        puVar2 = nullptr;
      }
      else {
        puVar2 = st::fn_006D6160(this,st::machine_word_boundary_cast<undefined4>(param_1),0,st::machine_word_boundary_cast<undefined4>(&local_18),param_1->field_0064,pAVar7[1].field_0008);
      }
      param_1->field_0060 = puVar2;
      if (puVar2 == nullptr) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(int *)(param_1->field_005C + 0x310) == 0) &&
           (piVar1 = (int *)param_1->field_0064, piVar1 != nullptr)) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*piVar1 + 8))(piVar1);
          param_1->field_0064 = 0;
        }
        st::external_00000019(local_8);
        return 0x8007000e;
      }
      param_1->field_006C = 0;
      param_1->field_0068 = 0;
      puVar2[7] = param_1->field_0028;
      param_1->field_0028 = st::machine_word_boundary_cast<undefined4>(puVar2);
      param_1->field_002C = st::machine_word_boundary_cast<int>(param_1->field_002C + 1);
      iVar5 = st::machine_word_boundary_cast<int>(param_1->field_003C + 1);
      param_1->field_003C = iVar5;
    } while (iVar5 < param_1->field_0038);
  }
  st::external_00000019(local_8);
  return 0;
}

// 006D6090 FUN_006d6090
#line 4 "decomp/ST.exe/functions/006D6090/decomp.c"
void __fastcall st::fn_006D6090(AnonShape_006D6090_8F63898D *param_1)

{
  int iVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;

  if (param_1 == nullptr) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)&param_1->field_0x10;
  }
  st::external_00000018(lpCriticalSection);
  iVar1 = param_1->field_002C;
  while (iVar1 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(int *)(param_1->field_005C + 0x310) == 0) &&
       (piVar2 = (int *)param_1->field_0064, piVar2 != nullptr)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar2 + 8))(piVar2);
      param_1->field_0064 = 0;
    }
    piVar2 = (int *)param_1->field_0028;
    if (piVar2 != nullptr) {
      param_1->field_0028 = piVar2[7];
      param_1->field_002C = st::machine_word_boundary_cast<int>(param_1->field_002C + -1);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar2 + 0x54))(1);
    }
    iVar1 = param_1->field_002C;
  }
  param_1->field_003C = 0;
  param_1->field_0064 = 0;
  param_1->field_006C = 0;
  param_1->field_0068 = 0;
  param_1->field_0070 = 0;
  st::external_00000019(lpCriticalSection);
  return;
}

// 006D6110 FUN_006d6110
#line 4 "decomp/ST.exe/functions/006D6110/decomp.c"
void __thiscall st::fn_006D6110(void *this,undefined4 param_1)

{
  STField<undefined4>(this,0x58) = param_1;
  return;
}

// 006D6120 FUN_006d6120
#line 4 "decomp/ST.exe/functions/006D6120/decomp.c"
void st::fn_006D6120(int param_1)

{
  int *piVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = (int *)(*(int *)(param_1 + 0x5c) + 0xc);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*piVar1 + 4))(piVar1);
  return;
}

// 006D6140 FUN_006d6140
#line 4 "decomp/ST.exe/functions/006D6140/decomp.c"
void st::fn_006D6140(int param_1)

{
  int *piVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = (int *)(*(int *)(param_1 + 0x5c) + 0xc);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}

// 006D6160 FUN_006d6160
#line 4 "decomp/ST.exe/functions/006D6160/decomp.c"
undefined4 * __thiscall
st::fn_006D6160(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  st::fn_00748A83(this,param_2,param_1,param_3,param_4,param_5);
  *(VTable_0079DD34 **)this = &st_global_0079DD34;
  return st::pointer_boundary_cast<undefined4 *>(this);
}

// 006D6190 FUN_006d6190
#line 4 "decomp/ST.exe/functions/006D6190/decomp.c"
undefined4 * __thiscall st::fn_006D6190(void *this,byte param_1)

{
  st::fn_00748AD3(st::pointer_boundary_cast<undefined4 *>(this));
  if ((param_1 & 1) != 0) {
    st::fn_0072E2B0(st::pointer_boundary_cast<HoloTy *>(this));
  }
  return st::pointer_boundary_cast<undefined4 *>(this);
}

// 006D61C0 FUN_006d61c0
#line 1 "decomp/ST.exe/functions/006D61C0/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 006D61C0 returns return of FUN_00748b37 @ 006D61D3 */

LONG st::fn_006D61C0(int param_1)

{
  int *piVar1;
  LONG LVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = (int *)(*(int *)(param_1 + 0x18) + 0x68);
  *piVar1 = *piVar1 + 1;
  LVar2 = st::fn_00748B37(param_1);
  return LVar2;
}

// 006D61E0 FUN_006d61e0
#line 4 "decomp/ST.exe/functions/006D61E0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006D61E0(int *param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = param_1[6];
  iVar2 = *(int *)(iVar1 + 0x68) + -1;
  *(int *)(iVar1 + 0x68) = iVar2;
  if ((iVar2 < 1) && (*(int *)(iVar1 + 0x6c) != 0)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(**(int **)(iVar1 + 100) + 0x80))(*(int **)(iVar1 + 100),0);
    if ((*(int *)(*(int *)(iVar1 + 0x5c) + 0x310) != 0) &&
       (iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 0x5c) + 0x288) + 0x28),
       (*(uint *)(iVar2 + 8) & 0x4000000) != 0)) {
      st::external_00000019((LPCRITICAL_SECTION)(iVar2 + 0x4f0));
    }
    *(undefined4 *)(iVar1 + 0x6c) = 0;
  }
  _DAT_008568fc = st::fn_00748B48(param_1);
  return;
}

// 006D6250 FUN_006d6250
#line 4 "decomp/ST.exe/functions/006D6250/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006D6250 returns return of FUN_00748dae @ 006D6261 */

int st::fn_006D6250(int param_1,undefined4 *param_2)

{
  int iVar1;

  iVar1 = st::fn_00748DAE(param_1,param_2);
  return iVar1;
}

// 006D6270 FUN_006d6270
#line 4 "decomp/ST.exe/functions/006D6270/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006D6270 -> 00748DE3 @ 006D627B */

void st::fn_006D6270(AnonShape_00748DE3_6873BEB9 *param_1,undefined4 *param_2)

{
  st::fn_00748DE3(param_1,param_2);
  return;
}

// 006D6290 FUN_006d6290
#line 4 "decomp/ST.exe/functions/006D6290/decomp.c"
int st::fn_006D6290(AnonShape_006D6290_6C97E0B2 *param_1,int *param_2)

{
  AnonNested_006D6290_0018_C51D55FE *pAVar1;
  int iVar2;
  int iVar3;
  int local_10;
  AnonShape_006D6290_10462BC7 *local_c;
  int *local_8;

  pAVar1 = param_1->field_0018;
  local_c = pAVar1->field_005C;
  iVar2 = local_c->field_0288;
  local_10 = 0;
  if (pAVar1->field_006C != 0) {
    *param_2 = param_1->field_000C;
    return 0;
  }
  if (local_c->field_0310 != 0) {
    if ((*(uint *)(*(int *)(iVar2 + 0x28) + 8) & 0x4000000) != 0) {
      st::external_00000018((LPCRITICAL_SECTION)(*(int *)(iVar2 + 0x28) + 0x4f0));
    }
    iVar3 = *(int *)(iVar2 + 0x28);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    if (*(code **)(iVar3 + 0x4e4) != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(iVar3 + 0x4e4))
                (*(undefined4 *)(iVar3 + 0x4ec),*(int *)(iVar3 + 0x10) + *(int *)(iVar2 + 0x18),
                 *(int *)(iVar3 + 0x14) + *(int *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x20),
                 *(undefined4 *)(iVar2 + 0x24));
    }
  }
  local_8 = &param_1->field_000C;
  param_1 = nullptr;
  do {
    iVar3 = st::fn_006BBE40(pAVar1->field_0064,(uint *)local_8,&local_10,0);
    if (iVar3 == 0) {
LAB_006d6394:
      iVar3 = *local_8;
      *param_2 = iVar3;
      if (local_c->field_0310 != 0) {
        *param_2 = *(int *)(iVar2 + 0x1c) * local_10 +
                   iVar3 + *(int *)(*(int *)(iVar2 + 0x28) + 0x28) * *(int *)(iVar2 + 0x18);
      }
      pAVar1->field_006C = 1;
      pAVar1->field_0068 = 0;
      return 0;
    }
    if (iVar3 != -0x7789fe3e) {
      if (iVar3 == 0) goto LAB_006d6394;
      goto LAB_006d6363;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*pAVar1->field_0064 + 0x6c))(pAVar1->field_0064);
    param_1 = (AnonShape_006D6290_6C97E0B2 *)&param_1->field_0x1;
    if (1 < (int)param_1) {
LAB_006d6363:
      if ((local_c->field_0310 != 0) && ((*(uint *)(*(int *)(iVar2 + 0x28) + 8) & 0x4000000) != 0))
      {
        st::external_00000019((LPCRITICAL_SECTION)(*(int *)(iVar2 + 0x28) + 0x4f0));
      }
      return iVar3;
    }
  } while( true );
}

// 006D6A10 FUN_006d6a10
#line 4 "decomp/ST.exe/functions/006D6A10/decomp.c"
int __thiscall st::fn_006D6A10(void *this,int *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  DWORD DVar6;
  BOOL BVar7;
  uint uVar8;
  int iVar9;
  InternalExceptionFrame local_dc;
  InternalExceptionFrame local_98;
  tagRECT local_54;
  int *local_44;
  RECT local_40;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  RECT local_20;
  AnonReceiver_006CEC40 *local_10;
  int local_c;
  int local_8;

  piVar2 = STField<int *>(this,0x2f8);
  if ((*(uint *)(STField<int>(this,0x288) + 4) & 0x20000000) == 0) {
    return 0;
  }
  iVar9 = 0;
  local_8 = 0;
  local_44 = piVar2;
  local_10 = st::pointer_boundary_cast<AnonReceiver_006CEC40 *>(this);
  DVar6 = st::external_000000DA();
  *(int *)(STField<int>(this,0x288) + 0xe8) = *(int *)(STField<int>(this,0x288) + 0xe8) + 1;
  iVar3 = STField<int>(this,0x288);
  if (3 < *(uint *)(iVar3 + 0xe8)) {
    uVar8 = DVar6 - *(int *)(iVar3 + 0xec);
    *(int *)(iVar3 + 0xf0) = *(int *)(iVar3 + 0xf0) + uVar8;
    if (uVar8 < *(uint *)(STField<int>(this,0x288) + 0xf4)) {
      *(uint *)(STField<int>(this,0x288) + 0xf4) = uVar8;
    }
    if (*(uint *)(STField<int>(this,0x288) + 0xf8) < uVar8) {
      *(uint *)(STField<int>(this,0x288) + 0xf8) = uVar8;
    }
  }
  *(DWORD *)(STField<int>(this,0x288) + 0xec) = DVar6;
  if (STField<int>(this,0x30c) == 0) {
    local_98.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_98;
    iVar9 = st::fn_0072D7F0(local_98.jumpBuffer,0);
    this = local_10;
    if (iVar9 == 0) {
      iVar9 = st::fn_006D63E0
                        (local_10,param_1);
      local_8 = iVar9;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      st::fn_006BB370
                (*(DDXContext **)(*(int *)&((AnonReceiver_006CEC40 *)this)->field_0x288 + 0x28),0,0);
      g_currentExceptionFrame = local_98.previous;
    }
    else {
      g_currentExceptionFrame = local_98.previous;
      local_8 = iVar9;
    }
  }
  else {
    uVar8 = *(uint *)(STField<int>(this,0x288) + 4);
    if ((uVar8 & 1) == 0) {
      if (STField<int>(this,0x310) == 0) {
        if (STField<int>(this,0x300) != 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*piVar2 + 0x80))(piVar2,0);
          STField<undefined4>(this,0x300) = 0;
          STField<undefined4>(this,0x2fc) = 0;
        }
        iVar3 = *(int *)(STField<int>(this,0x288) + 0x28);
        if ((*(uint *)(iVar3 + 8) & 0x4000000) != 0) {
          st::external_00000018((LPCRITICAL_SECTION)(iVar3 + 0x4f0));
        }
        iVar3 = STField<int>(this,0x288);
        local_30 = *(undefined4 *)(iVar3 + 8);
        local_2c = *(undefined4 *)(iVar3 + 0xc);
        local_28 = *(int *)(iVar3 + 0x10) + *(int *)(iVar3 + 8);
        local_24 = *(int *)(iVar3 + 0x14) + *(int *)(iVar3 + 0xc);
        local_40.left = 0;
        local_40.top = 0;
        local_40.right = *(LONG *)(*(int *)(iVar3 + 0x28) + 0x18);
        local_40.bottom = *(LONG *)(*(int *)(iVar3 + 0x28) + 0x1c);
        local_20.left = *(int *)(*(int *)(iVar3 + 0x28) + 0x10) + *(int *)(iVar3 + 0x18);
        local_20.top = *(int *)(*(int *)(iVar3 + 0x28) + 0x14) + *(int *)(iVar3 + 0x1c);
        local_20.right = *(int *)(iVar3 + 0x20) + local_20.left;
        local_20.bottom = *(int *)(iVar3 + 0x24) + local_20.top;
        BVar7 = st::external_0000009A(st::pointer_boundary_cast<LPRECT>(&local_54),&local_20,&local_40);
        if (BVar7 != 0) {
          iVar3 = *(int *)(STField<int>(this,0x288) + 0x28);
          pcVar5 = *(code **)(iVar3 + 0x4e4);
          if (pcVar5 != nullptr) {
            (*pcVar5)(*(undefined4 *)(iVar3 + 0x4ec),local_54.left,local_54.top,
                      local_54.right - local_54.left,local_54.bottom - local_54.top);
          }
          piVar2 = local_44;
          local_c = 0;
          while( true ) {
            piVar4 = *(int **)(*(int *)(STField<int>(this,0x288) + 0x28) + 0x40);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            iVar9 = (**(code **)(*piVar4 + 0x14))(piVar4,&local_54,piVar2,&local_30,0x1000000,0);
            local_8 = iVar9;
            if (iVar9 == 0) break;
            if (iVar9 == -0x7789fe3e) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
              (**(code **)(*piVar2 + 0x6c))(piVar2);
              st::fn_006CEC40(*(AnonShape_006CEC40_BB23E716 **)(STField<int>(this,0x288) + 0x28));
            }
            else {
              if (((iVar9 != -0x7789ff60) && (iVar9 != -0x7789fe52)) || (local_c != 0)) break;
              st::external_00000050(2);
            }
            local_c = local_c + 1;
            if (1 < local_c) break;
          }
          if ((iVar9 == -0x7789ff60) || (iVar9 == -0x7789fe52)) {
            iVar9 = 0;
            local_8 = 0;
          }
        }
        iVar3 = *(int *)(STField<int>(this,0x288) + 0x28);
        if ((*(uint *)(iVar3 + 8) & 0x4000000) != 0) {
          st::external_00000019((LPCRITICAL_SECTION)(iVar3 + 0x4f0));
        }
        st::fn_006BB370(*(DDXContext **)(STField<int>(this,0x288) + 0x28),0,0);
      }
      else {
        if (STField<int>(this,0x300) != 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*piVar2 + 0x80))(piVar2,0);
          iVar3 = *(int *)(STField<int>(this,0x288) + 0x28);
          if ((*(uint *)(iVar3 + 8) & 0x4000000) != 0) {
            st::external_00000019((LPCRITICAL_SECTION)(iVar3 + 0x4f0));
          }
          STField<undefined4>(this,0x300) = 0;
          STField<undefined4>(this,0x2fc) = 0;
        }
        local_dc.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_dc;
        iVar9 = st::fn_0072D7F0(local_dc.jumpBuffer,0);
        this = local_10;
        if (iVar9 == 0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          st::fn_006BB370
                    (*(DDXContext **)(*(int *)&local_10->field_0x288 + 0x28),0,0);
          g_currentExceptionFrame = local_dc.previous;
          iVar9 = local_8;
        }
        else {
          g_currentExceptionFrame = local_dc.previous;
          local_8 = iVar9;
        }
      }
    }
    else if ((STField<int>(this,0x304) == 0) || ((uVar8 & 0x2000000) != 0)) {
      if (STField<int>(this,0x300) != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*piVar2 + 0x80))(piVar2,0);
        STField<undefined4>(this,0x300) = 0;
        STField<undefined4>(this,0x2fc) = 0;
      }
      iVar3 = *(int *)(STField<int>(this,0x288) + 0x28);
      if ((*(uint *)(iVar3 + 8) & 0x4000000) != 0) {
        st::external_00000018((LPCRITICAL_SECTION)(iVar3 + 0x4f0));
      }
      iVar3 = STField<int>(this,0x288);
      local_30 = *(undefined4 *)(iVar3 + 8);
      local_2c = *(undefined4 *)(iVar3 + 0xc);
      local_28 = *(int *)(iVar3 + 0x10) + *(int *)(iVar3 + 8);
      local_24 = *(int *)(iVar3 + 0x14) + *(int *)(iVar3 + 0xc);
      local_40.left = 0;
      local_40.top = 0;
      local_40.right = *(LONG *)(*(int *)(iVar3 + 0x28) + 0x18);
      local_40.bottom = *(LONG *)(*(int *)(iVar3 + 0x28) + 0x1c);
      local_20.left = *(int *)(*(int *)(iVar3 + 0x28) + 0x10) + *(int *)(iVar3 + 0x18);
      local_20.top = *(int *)(*(int *)(iVar3 + 0x28) + 0x14) + *(int *)(iVar3 + 0x1c);
      st::external_0000009B(*(HWND *)(*(int *)(iVar3 + 0x28) + 4),(LPPOINT)&local_20);
      local_c = 0;
      local_20.right = *(int *)(STField<int>(this,0x288) + 0x20) + local_20.left;
      local_20.bottom = *(int *)(STField<int>(this,0x288) + 0x24) + local_20.top;
      do {
        if (STField<int>(this,0x304) == 0) {
          piVar4 = *(int **)(*(int *)(STField<int>(this,0x288) + 0x28) + 0x34);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar9 = (**(code **)(*piVar4 + 0x14))(piVar4,&local_20,piVar2,&local_30,0x1000000,0);
        }
        else {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar9 = (**(code **)(*piVar2 + 0x84))
                            (piVar2,&local_30,
                             *(undefined4 *)(*(int *)(STField<int>(this,0x288) + 0x28) + 0x34),
                             &local_20,0x4000,0);
        }
        local_8 = iVar9;
        if (iVar9 == 0) break;
        if (iVar9 == -0x7789fe3e) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*piVar2 + 0x6c))(piVar2);
          st::fn_006CEC40(*(AnonShape_006CEC40_BB23E716 **)(STField<int>(this,0x288) + 0x28));
        }
        else {
          if (((iVar9 != -0x7789ff60) && (iVar9 != -0x7789fe52)) || (local_c != 0)) break;
          st::external_00000050(2);
        }
        local_c = local_c + 1;
      } while (local_c < 2);
      if ((iVar9 == -0x7789ff60) || (iVar9 == -0x7789fe52)) {
        iVar9 = 0;
        local_8 = 0;
      }
      if (iVar9 == 0) {
        puVar1 = (uint *)(STField<int>(this,0x288) + 4);
        *puVar1 = *puVar1 & 0xfdffffff;
      }
      iVar3 = *(int *)(STField<int>(this,0x288) + 0x28);
      if ((*(uint *)(iVar3 + 8) & 0x4000000) != 0) {
        st::external_00000019((LPCRITICAL_SECTION)(iVar3 + 0x4f0));
      }
    }
  }
  DVar6 = st::external_000000DA();
  iVar3 = *(int *)&((AnonReceiver_006CEC40 *)this)->field_0x288;
  if (3 < *(uint *)(iVar3 + 0xe8)) {
    uVar8 = DVar6 - *(int *)(iVar3 + 0xec);
    *(uint *)(iVar3 + 0xfc) = *(int *)(iVar3 + 0xfc) + uVar8;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (uVar8 < *(uint *)(*(int *)&((AnonReceiver_006CEC40 *)this)->field_0x288 + 0x100)) {
      *(uint *)(*(int *)&((AnonReceiver_006CEC40 *)this)->field_0x288 + 0x100) = uVar8;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(uint *)(*(int *)&((AnonReceiver_006CEC40 *)this)->field_0x288 + 0x104) < uVar8) {
      *(uint *)(*(int *)&((AnonReceiver_006CEC40 *)this)->field_0x288 + 0x104) = uVar8;
    }
  }
  return iVar9;
}

// 006D7000 FUN_006d7000
#line 4 "decomp/ST.exe/functions/006D7000/decomp.c"
undefined4 __thiscall st::fn_006D7000(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;

  iVar1 = *(int *)(STField<int>(this,0xe0) + 0x90);
  piVar2 = *(int **)(iVar1 + 0x18);
  if (piVar2 == nullptr) {
    uVar3 = st::fn_006D4CF0(*(AnonShape_006D4CF0_8A8947BE **)(STField<int>(this,0xe0) + 0xa0),
                         param_1);
    return uVar3;
  }
  iVar4 = 4;
  bVar7 = true;
  piVar5 = param_1 + 4;
  piVar6 = (int *)(iVar1 + 0x2c);
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar7 = *piVar5 == *piVar6;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,param_1);
    return uVar3;
  }
  return 0x8004022a;
}

// 006D7060 FUN_006d7060
#line 4 "decomp/ST.exe/functions/006D7060/decomp.c"
void __thiscall st::fn_006D7060(void *this,undefined4 param_1)

{
  int iVar1;
  uint uVar2;

  iVar1 = *(int *)(STField<int>(this,0xe0) + 0xa0);
  uVar2 = *(uint *)(iVar1 + 4);
  if ((uVar2 & 0x1000000) != 0) {
    *(uint *)(iVar1 + 4) = uVar2 | 0x800000;
  }
  iVar1 = *(int *)(STField<int>(this,0xe0) + 0xa0);
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x1000000;
  st::fn_0074C434(this,param_1);
  return;
}

// 006D70B0 FUN_006d70b0
#line 4 "decomp/ST.exe/functions/006D70B0/decomp.c"
undefined4 * __thiscall
st::fn_006D70B0(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  st::fn_0074C952(this,param_1,param_2,(undefined4 *)&DAT_0079dae0);
  *(VTable_0079DDEC **)this = &st_global_0079DDEC;
  STField<undefined4>(this,0xa0) = param_4;
  STField<VTable_0079DDB0 *>(this,0xc) = &st_global_0079DDB0;
  STField<VTable_0079DD9C *>(this,0x10) = &st_global_0079DD9C;
  return st::pointer_boundary_cast<undefined4 *>(this);
}

// 006D7100 FUN_006d7100
#line 4 "decomp/ST.exe/functions/006D7100/decomp.c"
void st::fn_006D7100(int param_1,undefined4 param_2,undefined4 param_3)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)**(undefined4 **)(param_1 + -8))(*(undefined4 **)(param_1 + -8),param_2,param_3);
  return;
}

// 006D7120 FUN_006d7120
#line 4 "decomp/ST.exe/functions/006D7120/decomp.c"
void st::fn_006D7120(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(**(int **)(param_1 + -8) + 4))(*(int **)(param_1 + -8));
  return;
}

// 006D7140 FUN_006d7140
#line 4 "decomp/ST.exe/functions/006D7140/decomp.c"
void st::fn_006D7140(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(**(int **)(param_1 + -8) + 8))(*(int **)(param_1 + -8));
  return;
}

// 006D7160 FUN_006d7160
#line 4 "decomp/ST.exe/functions/006D7160/decomp.c"
/* [STVTableApplier] Virtual slot 0079DDEC+0x34 */

undefined4 st::fn_006D7160(void)

{
  return 0x8000ffff;
}

// 006D7170 FUN_006d7170
#line 4 "decomp/ST.exe/functions/006D7170/decomp.c"
/* [STVTableApplier] Virtual slot 0079DDEC+0x2C */

undefined4 st::fn_006D7170(void)

{
  return 0;
}

// 006D7180 FUN_006d7180
#line 4 "decomp/ST.exe/functions/006D7180/decomp.c"
/* [STVTableApplier] Virtual slot 0079DDEC+0x28 */

undefined4 st::fn_006D7180(void)

{
  return 0;
}

// 006D7190 FUN_006d7190
#line 4 "decomp/ST.exe/functions/006D7190/decomp.c"
/* [STVTableApplier] Virtual slot 0079DDEC+0x68 */

undefined4 st::fn_006D7190(void)

{
  return 0;
}

// 006D71A0 FUN_006d71a0
#line 4 "decomp/ST.exe/functions/006D71A0/decomp.c"
undefined4 * __thiscall st::fn_006D71A0(void *this,byte param_1)

{
  st::fn_0074BE28(st::pointer_boundary_cast<AnonShape_0074BE28_A72B0079 *>(this));
  if ((param_1 & 1) != 0) {
    st::fn_0072E2B0(st::pointer_boundary_cast<HoloTy *>(this));
  }
  return st::pointer_boundary_cast<undefined4 *>(this);
}

// 006D71D0 FUN_006d71d0
#line 4 "decomp/ST.exe/functions/006D71D0/decomp.c"
undefined4 __thiscall st::fn_006D71D0(void *this,int param_1)

{
  int *this_00;
  void *this_01;
  undefined4 *puVar1;
  int local_8;

  local_8 = 0;
  if ((STField<int>(this,0x8c) == 0) || (STField<int>(this,0x90) == 0)) {
    this_00 = (int *)st::fn_0072E530(0xe8);
    if (this_00 == nullptr) {
      this_00 = nullptr;
    }
    else {
      st::fn_0074CDC5(this_00,0,(int)this,st::machine_word_boundary_cast<undefined4>(&local_8),(char *)"Input");
      *this_00 = (int)&st_global_0079DED8;
      this_00[3] = (int)&st_global_0079DE90;
      this_00[4] = (int)&st_global_0079DE7C;
      this_00[0x26] = (int)&st_global_0079DE58;
    }
    STField<int *>(this,0x8c) = this_00;
    if (local_8 < 0) {
      if (this_00 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*this_00 + 0xc))(1);
      }
    }
    else if (this_00 != nullptr) {
      this_01 = (void *)st::fn_0072E530(0xb0);
      if (this_01 == nullptr) {
        puVar1 = nullptr;
      }
      else {
        puVar1 = st::fn_0074CFC0(this_01,0,(int)this,st::machine_word_boundary_cast<undefined4>(&local_8),(char *)"Output");
      }
      STField<undefined4 *>(this,0x90) = puVar1;
      if ((local_8 < 0) || (puVar1 == nullptr)) {
        if (STField<int *>(this,0x8c) != nullptr) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*STField<int *>(this,0x8c) + 0xc))(1);
        }
        STField<undefined4>(this,0x8c) = 0;
        if (STField<int *>(this,0x90) != nullptr) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*STField<int *>(this,0x90) + 0xc))(1);
        }
        STField<undefined4>(this,0x90) = 0;
        return 0;
      }
      goto LAB_006d728d;
    }
    STField<undefined4>(this,0x8c) = 0;
  }
  else {
LAB_006d728d:
    if (param_1 == 0) {
      return STField<undefined4>(this,0x8c);
    }
    if (param_1 == 1) {
      return STField<undefined4>(this,0x90);
    }
  }
  return 0;
}

// 006D7310 FUN_006d7310
#line 4 "decomp/ST.exe/functions/006D7310/decomp.c"
void st::fn_006D7310(undefined4 param_1,undefined4 *param_2)

{
  st::fn_0074DCA1((short *)&DAT_007ee298,param_2);
  return;
}

// 006D7330 FUN_006d7330
#line 1 "decomp/ST.exe/functions/006D7330/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006D7330 -> 0074CEB2 @ 006D733D

   [STPrototypeApplier] Propagated return.
   Evidence: 006D7330 returns return of FUN_0074ceb2 @ 006D7343 */

int st::fn_006D7330(AnonShape_0074CEB2_D881A5E3 *param_1,int *param_2)

{
  int iVar1;

  iVar1 = st::fn_0074CEB2(param_1,param_2,0);
  return iVar1;
}

// 006D7350 FUN_006d7350
#line 4 "decomp/ST.exe/functions/006D7350/decomp.c"
undefined4 * __thiscall st::fn_006D7350(void *this,byte param_1)

{
  st::fn_007485C5((int)this);
  if ((param_1 & 1) != 0) {
    st::fn_0072E2B0(st::pointer_boundary_cast<HoloTy *>(this));
  }
  return st::pointer_boundary_cast<undefined4 *>(this);
}

// 006D7380 FUN_006d7380
#line 4 "decomp/ST.exe/functions/006D7380/decomp.c"
undefined4 __thiscall st::fn_006D7380(void *this,int param_1)

{
  int *piVar1;
  int iVar3;
  int iVar2;
  undefined4 uVar4;

  uVar4 = 0;
  piVar1 = STField<int *>(this,0x40);
  if (piVar1 == nullptr) {
    return 0x8004025f;
  }
  if (param_1 == 1) {
    iVar3 = STField<int>(this,0x8c);
    if (*(int *)(iVar3 + 0x18) != 0) {
      if (iVar3 != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        uVar4 = (**(code **)(*piVar1 + 0x20))(piVar1,iVar3 + 0xc);
        return uVar4;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar4 = (**(code **)(*piVar1 + 0x20))(piVar1,0);
      return uVar4;
    }
  }
  else if (*(int *)(STField<int>(this,0x90) + 0x18) != 0) {
    iVar2 = st::fn_0074B9F5((void *)(STField<int>(this,0x8c) + 0x1c),
                         (char *)(STField<int>(this,0x90) + 0x1c));
    if (iVar2 != 0) {
      if (STField<int>(this,0x90) != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        uVar4 = (**(code **)(*STField<int *>(this,0x40) + 0x20))
                          (STField<int *>(this,0x40),STField<int>(this,0x90) + 0xc);
        return uVar4;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar4 = (**(code **)(*STField<int *>(this,0x40) + 0x20))(STField<int *>(this,0x40),0);
    }
  }
  return uVar4;
}

// 006D7430 FUN_006d7430
#line 4 "decomp/ST.exe/functions/006D7430/decomp.c"
/* [STVTableApplier] Virtual slot 0079DC60+0x0

   [STVTableApplier] Virtual slot 0079DE7C+0x0

   [STVTableApplier] Virtual slot 007A14B0+0x0

   [STVTableApplier] Virtual slot 007A1768+0x0

   [STVTableApplier] Virtual slot 007A18F0+0x0 */

void st::fn_006D7430(int param_1,undefined4 param_2,undefined4 param_3)

{
  st::fn_006D5790(param_1 + -4,param_2,param_3);
  return;
}

// 006D7440 FUN_006d7440
#line 1 "decomp/ST.exe/functions/006D7440/decomp.c"

/* [STVTableApplier] Virtual slot 0079DC60+0x4

   [STVTableApplier] Virtual slot 0079DE7C+0x4

   [STVTableApplier] Virtual slot 007A14B0+0x4

   [STVTableApplier] Virtual slot 007A1768+0x4

   [STVTableApplier] Virtual slot 007A18F0+0x4 */

void st::fn_006D7440(int param_1)

{
  st::fn_006D57B0(param_1 + -4);
  return;
}

// 006D7450 FUN_006d7450
#line 1 "decomp/ST.exe/functions/006D7450/decomp.c"

/* [STVTableApplier] Virtual slot 0079DC60+0x8

   [STVTableApplier] Virtual slot 0079DE7C+0x8

   [STVTableApplier] Virtual slot 007A14B0+0x8

   [STVTableApplier] Virtual slot 007A1768+0x8

   [STVTableApplier] Virtual slot 007A18F0+0x8 */

void st::fn_006D7450(int param_1)

{
  st::fn_006D57D0(param_1 + -4);
  return;
}

// 006D7460 FUN_006d7460
#line 4 "decomp/ST.exe/functions/006D7460/decomp.c"
/* [STVTableApplier] Virtual slot 0079DC3C+0x0

   [STVTableApplier] Virtual slot 0079DE58+0x0

   [STVTableApplier] Virtual slot 007A1488+0x0

   [STVTableApplier] Virtual slot 007A1740+0x0

   [STVTableApplier] Virtual slot 007A18C8+0x0 */

void st::fn_006D7460(int param_1,undefined4 param_2,undefined4 param_3)

{
  st::fn_006D5790(param_1 + -0x8c,param_2,param_3);
  return;
}

// 006D7470 FUN_006d7470
#line 1 "decomp/ST.exe/functions/006D7470/decomp.c"

/* [STVTableApplier] Virtual slot 0079DC3C+0x4

   [STVTableApplier] Virtual slot 0079DE58+0x4

   [STVTableApplier] Virtual slot 007A1488+0x4

   [STVTableApplier] Virtual slot 007A1740+0x4

   [STVTableApplier] Virtual slot 007A18C8+0x4 */

void st::fn_006D7470(int param_1)

{
  st::fn_006D57B0(param_1 + -0x8c);
  return;
}

// 006D7480 FUN_006d7480
#line 1 "decomp/ST.exe/functions/006D7480/decomp.c"

/* [STVTableApplier] Virtual slot 0079DC3C+0x8

   [STVTableApplier] Virtual slot 0079DE58+0x8

   [STVTableApplier] Virtual slot 007A1488+0x8

   [STVTableApplier] Virtual slot 007A1740+0x8

   [STVTableApplier] Virtual slot 007A18C8+0x8 */

void st::fn_006D7480(int param_1)

{
  st::fn_006D57D0(param_1 + -0x8c);
  return;
}

// 006D7490 FUN_006d7490
#line 4 "decomp/ST.exe/functions/006D7490/decomp.c"
/* [STVTableApplier] Virtual slot 0079DD9C+0x0

   [STVTableApplier] Virtual slot 007A1378+0x0 */

void st::fn_006D7490(int param_1,undefined4 param_2,undefined4 param_3)

{
  st::fn_006D7100(param_1 + -4,param_2,param_3);
  return;
}

// 006D74A0 FUN_006d74a0
#line 1 "decomp/ST.exe/functions/006D74A0/decomp.c"

/* [STVTableApplier] Virtual slot 0079DD9C+0x4

   [STVTableApplier] Virtual slot 007A1378+0x4 */

void st::fn_006D74A0(int param_1)

{
  st::fn_006D7120(param_1 + -4);
  return;
}

// 006D74B0 FUN_006d74b0
#line 1 "decomp/ST.exe/functions/006D74B0/decomp.c"

/* [STVTableApplier] Virtual slot 0079DD9C+0x8

   [STVTableApplier] Virtual slot 007A1378+0x8 */

void st::fn_006D74B0(int param_1)

{
  st::fn_006D7140(param_1 + -4);
  return;
}

// 006D74C0 FUN_006d74c0
#line 4 "decomp/ST.exe/functions/006D74C0/decomp.c"
/* [STVTableApplier] Virtual slot 0079DB28+0x0

   [STVTableApplier] Virtual slot 007A1590+0x0 */

void st::fn_006D74C0(int param_1,undefined4 param_2,undefined4 param_3)

{
  st::fn_006D5110(param_1 + -4,param_2,param_3);
  return;
}

// 006D74D0 FUN_006d74d0
#line 1 "decomp/ST.exe/functions/006D74D0/decomp.c"

/* [STVTableApplier] Virtual slot 0079DB28+0x4

   [STVTableApplier] Virtual slot 007A1590+0x4 */

void st::fn_006D74D0(int param_1)

{
  st::fn_006D5130(param_1 + -4);
  return;
}

// 006D74E0 FUN_006d74e0
#line 1 "decomp/ST.exe/functions/006D74E0/decomp.c"

/* [STVTableApplier] Virtual slot 0079DB28+0x8

   [STVTableApplier] Virtual slot 007A1590+0x8 */

void st::fn_006D74E0(int param_1)

{
  st::fn_006D5150(param_1 + -4);
  return;
}

// 006D74F0 FUN_006d74f0
#line 4 "decomp/ST.exe/functions/006D74F0/decomp.c"
/* [STVTableApplier] Virtual slot 0079DB04+0x0

   [STVTableApplier] Virtual slot 007A1568+0x0 */

void st::fn_006D74F0(int param_1,undefined4 param_2,undefined4 param_3)

{
  st::fn_006D5110(param_1 + -0xbc,param_2,param_3);
  return;
}

// 006D7500 FUN_006d7500
#line 1 "decomp/ST.exe/functions/006D7500/decomp.c"

/* [STVTableApplier] Virtual slot 0079DB04+0x4

   [STVTableApplier] Virtual slot 007A1568+0x4 */

void st::fn_006D7500(int param_1)

{
  st::fn_006D5130(param_1 + -0xbc);
  return;
}

// 006D7510 FUN_006d7510
#line 1 "decomp/ST.exe/functions/006D7510/decomp.c"

/* [STVTableApplier] Virtual slot 0079DB04+0x8

   [STVTableApplier] Virtual slot 007A1568+0x8 */

void st::fn_006D7510(int param_1)

{
  st::fn_006D5150(param_1 + -0xbc);
  return;
}

// 006D7520 FUN_006d7520
#line 4 "decomp/ST.exe/functions/006D7520/decomp.c"
/* [STVTableApplier] Virtual slot 0079DAF0+0x0

   [STVTableApplier] Virtual slot 007A1550+0x0 */

void st::fn_006D7520(int param_1,undefined4 param_2,undefined4 param_3)

{
  st::fn_006D5110(param_1 + -0xc0,param_2,param_3);
  return;
}

// 006D7530 FUN_006d7530
#line 1 "decomp/ST.exe/functions/006D7530/decomp.c"

/* [STVTableApplier] Virtual slot 0079DAF0+0x4

   [STVTableApplier] Virtual slot 007A1550+0x4 */

void st::fn_006D7530(int param_1)

{
  st::fn_006D5130(param_1 + -0xc0);
  return;
}

// 006D7540 FUN_006d7540
#line 1 "decomp/ST.exe/functions/006D7540/decomp.c"

/* [STVTableApplier] Virtual slot 0079DAF0+0x8

   [STVTableApplier] Virtual slot 007A1550+0x8 */

void st::fn_006D7540(int param_1)

{
  st::fn_006D5150(param_1 + -0xc0);
  return;
}

// 006D7770 FUN_006d7770
#line 4 "decomp/ST.exe/functions/006D7770/decomp.c"
void st::fn_006D7770(AnonShape_006D7770_4ECBDE32 *param_1)

{
  int *piVar1;

  piVar1 = (int *)param_1->field_0020;
  if ((short)piVar1[1] == -0x50ee) {
    param_1->field_0008 = (uint)*(ushort *)(piVar1 + 2);
    param_1->field_000C = (uint)STField<ushort>(piVar1,10);
    param_1->field_0010 = (uint)*(ushort *)(piVar1 + 4);
    param_1->field_0014 = (uint)STField<ushort>(piVar1,6);
    param_1->field_0018 = 0xffffffff;
    param_1->field_0028 = st::machine_word_boundary_cast<undefined4>(piVar1[0x14] + (int)piVar1);
    param_1->field_002C = st::machine_word_boundary_cast<int>(piVar1[0x15] + (int)piVar1);
    param_1->field_0024 = *piVar1 + (int)piVar1;
    param_1->field_0020 = param_1->field_0028;
  }
  return;
}

// 006D7830 FUN_006d7830
#line 4 "decomp/ST.exe/functions/006D7830/decomp.c"
void st::fn_006D7830(undefined1 *param_1,int param_2,undefined4 *param_3,int param_4,int param_5,
                 undefined1 param_6)

{
  int _param_6 = static_cast<int>(param_6);

  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined1 *local_14;
  int local_10;
  undefined1 *local_8;

  uVar1 = param_6;
  puVar9 = param_1;
  iVar2 = (int)param_3 + (-1 - param_5);
  uVar4 = (int)param_3 + param_5 * -2;
  puVar7 = (undefined4 *)(param_1 + param_5);
  puVar10 = puVar7;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar10 = CONCAT22(CONCAT11(param_6,param_6),CONCAT11(param_6,param_6));
    puVar10 = puVar10 + 1;
  }
  for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar10 = param_6;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  iVar3 = (param_4 + -1) * param_2;
  puVar10 = (undefined4 *)(param_1 + param_5 + iVar3);
  puVar11 = puVar10;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar11 = CONCAT22(CONCAT11(param_6,param_6),CONCAT11(param_6,param_6));
    puVar11 = puVar11 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar11 = param_6;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  puVar6 = param_1 + param_2 * param_5;
  param_1 = puVar6 + -1 + (int)param_3;
  iVar8 = param_4 - param_5;
  if (param_5 < iVar8) {
    param_4 = iVar8 - param_5;
    do {
      *puVar6 = param_6;
      *param_1 = param_6;
      puVar6 = puVar6 + param_2;
      param_1 = param_1 + param_2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  param_1 = puVar9 + iVar2;
  local_8 = puVar9 + iVar2 + iVar3;
  param_4 = (int)(puVar9 + param_5 + param_2 * param_5);
  local_10 = param_5 * -2 + 3;
  puVar9 = puVar9 + param_5 + (iVar8 + -1) * param_2;
  iVar8 = 0;
  local_14 = puVar9 + (iVar2 - param_5);
  iVar3 = param_5;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_3 = puVar7;
  param_5 = (int)(param_4 + (iVar2 - param_5));
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  auto _param_6 = puVar10;
  do {
    iVar2 = iVar3;
    *(undefined1 *)((int)param_3 - iVar8) = uVar1;
    param_1[iVar8] = uVar1;
    *(undefined1 *)((int)_param_6 - iVar8) = uVar1;
    local_8[iVar8] = uVar1;
    *(undefined1 *)(param_4 - iVar2) = uVar1;
    *(undefined1 *)(param_5 + iVar2) = uVar1;
    puVar9[-iVar2] = uVar1;
    local_14[iVar2] = uVar1;
    if (local_10 < 0) {
      local_10 = local_10 + 6 + iVar8 * 4;
      iVar3 = iVar2;
    }
    else {
      iVar3 = iVar2 + -1;
      local_10 = local_10 + 10 + (iVar8 - iVar2) * 4;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = (undefined4 *)((int)param_3 + param_2);
      param_1 = param_1 + param_2;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_6 = (undefined4 *)((int)_param_6 - param_2);
      local_8 = local_8 + -param_2;
    }
    iVar8 = iVar8 + 1;
    param_4 = param_4 - param_2;
    puVar9 = puVar9 + param_2;
    param_5 = param_5 - param_2;
    local_14 = local_14 + param_2;
  } while (iVar8 < iVar3);
  if ((iVar8 == iVar3) && (iVar3 != iVar2)) {
    *(undefined1 *)((int)param_3 - iVar8) = uVar1;
    param_1[iVar8] = uVar1;
    *(undefined1 *)((int)_param_6 - iVar8) = uVar1;
    local_8[iVar8] = uVar1;
  }
  return;
}

// 006D7A30 FUN_006d7a30
#line 4 "decomp/ST.exe/functions/006D7A30/decomp.c"
/* [STPrototypeApplier] Propagated parameter 5.
   Evidence: 006C7610 -> 006D7A30 @ 006C7675; FUN_006c7610 parameter param_8

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006D7A30(int param_1,int param_2,uint param_3,uint param_4,int param_5,byte param_6)

{
  int _param_6 = static_cast<int>(param_6);

  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  int local_18;
  int local_14;
  int local_10;
  int local_c;

  bVar2 = param_6;
  uVar3 = param_3 + param_5 * -2;
  pbVar8 = (byte *)(param_2 * param_5 + param_1);
  if (param_5 < (int)(param_4 - param_5)) {
    local_18 = (param_4 - param_5) - param_5;
    do {
      pbVar9 = pbVar8;
      for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(uint *)pbVar9 = CONCAT22(CONCAT11(param_6,param_6),CONCAT11(param_6,param_6));
        pbVar9 = pbVar9 + 4;
      }
      for (uVar5 = param_3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pbVar9 = param_6;
        pbVar9 = pbVar9 + 1;
      }
      pbVar8 = pbVar8 + param_2;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  iVar1 = param_1 + param_5;
  param_3 = 0;
  iVar6 = param_5 * param_5;
  param_1 = (param_4 - 1) * param_2 + param_1 + param_5;
  iVar7 = (1 - param_5) * iVar6 + ((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2);
  iVar4 = iVar6 * 2 * param_5;
  local_14 = param_5;
  local_c = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_4 = uVar3;
  param_5 = iVar1;
  local_10 = iVar4;
  if (0 < iVar4) {
    do {
      if (0 < iVar7) {
        pbVar8 = (byte *)(param_5 - param_3);
        for (uVar5 = param_4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(uint *)pbVar8 = CONCAT22(CONCAT11(param_6,param_6),CONCAT11(param_6,param_6));
          pbVar8 = pbVar8 + 4;
        }
        for (uVar5 = param_4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar8 = param_6;
          pbVar8 = pbVar8 + 1;
        }
        pbVar8 = (byte *)(param_1 - param_3);
        for (uVar5 = param_4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(uint *)pbVar8 = CONCAT22(CONCAT11(param_6,param_6),CONCAT11(param_6,param_6));
          pbVar8 = pbVar8 + 4;
        }
        for (uVar5 = param_4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar8 = param_6;
          pbVar8 = pbVar8 + 1;
        }
        param_5 = param_5 + param_2;
        param_1 = param_1 - param_2;
        local_14 = local_14 + -1;
        iVar4 = local_10 + iVar6 * -2;
        iVar7 = iVar7 - iVar4;
        local_10 = iVar4;
      }
      local_c = local_c + iVar6 * 2;
      param_3 = param_3 + 1;
      iVar7 = iVar7 + local_c + iVar6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = param_4 + 2;
    } while (local_c < iVar4);
  }
  iVar7 = iVar7 - (iVar4 + local_c) / 2;
  if (-1 < local_14) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = local_14 + 1;
    auto _param_6 = uVar3 + param_3 * 2;
    do {
      pbVar8 = (byte *)(param_5 - param_3);
      for (uVar3 = _param_6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)pbVar8 = CONCAT22(CONCAT11(bVar2,bVar2),CONCAT11(bVar2,bVar2));
        pbVar8 = pbVar8 + 4;
      }
      for (uVar3 = _param_6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pbVar8 = bVar2;
        pbVar8 = pbVar8 + 1;
      }
      pbVar8 = (byte *)(param_1 - param_3);
      for (uVar3 = _param_6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)pbVar8 = CONCAT22(CONCAT11(bVar2,bVar2),CONCAT11(bVar2,bVar2));
        pbVar8 = pbVar8 + 4;
      }
      for (uVar3 = _param_6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pbVar8 = bVar2;
        pbVar8 = pbVar8 + 1;
      }
      if (iVar7 < 0) {
        param_3 = param_3 + 1;
        _param_6 = _param_6 + 2;
        local_c = local_c + iVar6 * 2;
        iVar7 = iVar7 + local_c;
      }
      param_5 = param_5 + param_2;
      param_1 = param_1 - param_2;
      local_10 = local_10 + iVar6 * -2;
      iVar7 = iVar7 + (iVar6 - local_10);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return;
}

// 006D7CA0 FUN_006d7ca0
#line 1 "decomp/ST.exe/functions/006D7CA0/decomp.c"

void st::fn_006D7CA0(byte *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;

  if ((0 < param_3) && (-1 < param_4 + -1)) {
    do {
      pbVar1 = param_1;
      iVar2 = param_3;
      if (-1 < param_3 + -1) {
        do {
          param_1 = pbVar1 + 1;
          iVar2 = iVar2 + -1;
          *pbVar1 = *(byte *)((uint)*pbVar1 + param_5);
          pbVar1 = param_1;
        } while (iVar2 != 0);
      }
      param_1 = param_1 + (param_2 - param_3);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

// 006D7D9A FUN_006d7d9a
#line 4 "decomp/ST.exe/functions/006D7D9A/decomp.c"
uint __cdecl st::fn_006D7D9A(AnonShape_006D7D9A_A5401417 *param_1)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  int local_52;
  int local_3e;
  uint local_3a;
  undefined4 local_36;
  undefined1 local_2b;
  uint local_2a;
  int local_26;
  uint local_16;
  byte local_12;
  byte local_11 [5];
  int *local_c;
  int *local_8;

  pcVar3 = (code *)param_1->field_0042;
  pcVar4 = (code *)param_1->field_0046;
  iVar5 = param_1->field_0022;
  iVar6 = param_1->field_0026;
  cVar2 = param_1->field_0018;
  param_1->field_0017 = 0;
  local_52 = 0;
  local_2a = 0;
  local_2b = 0;
  local_36 = 0;
  local_3a = 1;
  if (cVar2 != '\0') {
    local_3a = 8;
  }
  local_8 = st::fn_00402B21(iVar5 + 0x4101);
  uVar8 = 0xfffffffe;
  if ((local_8 != nullptr) && (uVar8 = (*pcVar3)(param_1,local_11,1), uVar8 == 1)) {
    if ((local_11[0] < 2) || (9 < local_11[0])) {
LAB_006d7faf:
      uVar8 = 0xfffffffb;
    }
    else {
      uVar9 = 1 << (local_11[0] & 0x1f);
      local_26 = uVar9 << 1;
      uVar10 = (uVar9 & 0x7fffffff) + 2;
      local_12 = local_11[0] + 1;
      local_c = local_8 + 0x1040;
      local_3e = iVar5;
      local_16 = uVar10;
      while (uVar11 = st::fn_006D8036(), uVar8 = uVar11, -1 < (int)uVar11) {
        if (uVar11 == (uVar9 & 0x7fffffff) + 1) {
          uVar8 = 0;
          goto LAB_006d7fc6;
        }
        if (uVar11 == uVar9) {
          local_12 = local_11[0] + 1;
          local_26 = 1 << (local_12 & 0x1f);
          local_2a = uVar11;
          local_16 = uVar10;
        }
        else {
          puVar15 = (undefined1 *)((int)local_8 + 0xfff);
          if (local_2a == uVar9) {
            local_2b = (undefined1)uVar11;
            *puVar15 = local_2b;
            puVar15 = (undefined1 *)((int)local_8 + 0xffe);
          }
          else {
            if ((int)local_16 <= (int)uVar11) {
              if ((int)local_16 < (int)uVar11) goto LAB_006d7faf;
              *puVar15 = local_2b;
              puVar15 = (undefined1 *)((int)local_8 + 0xffe);
              uVar8 = local_2a;
            }
            for (; (int)uVar10 <= (int)uVar8;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                uVar8 = (uint)*(ushort *)((int)local_8 + uVar8 * 2 + 0x2000)) {
              *puVar15 = *(undefined1 *)((int)local_8 + uVar8 + 0x1000);
              puVar15 = puVar15 + -1;
            }
            local_2b = (undefined1)uVar8;
            *puVar15 = local_2b;
            puVar15 = puVar15 + -1;
            *(undefined1 *)((int)local_8 + local_16 + 0x1000) = local_2b;
            *(short *)((int)local_8 + local_16 * 2 + 0x2000) = (short)local_2a;
            local_16 = (local_16 & 0x7fffffff) + 1;
            if ((local_26 <= (int)local_16) && ((char)local_12 < '\f')) {
              local_26 = local_26 << 1;
              local_12 = local_12 + 1;
            }
          }
          puVar15 = puVar15 + 1;
          iVar14 = (int)local_8 + (0x1000 - (int)puVar15);
          while (local_2a = uVar11, iVar14 != 0) {
            iVar12 = iVar14;
            if (local_3e < iVar14) {
              iVar12 = local_3e;
            }
            iVar14 = iVar14 - iVar12;
            iVar1 = local_3e - iVar12;
            for (iVar13 = iVar12; iVar13 != 0; iVar13 = iVar13 + -1) {
              *(undefined1 *)local_c = *puVar15;
              puVar15 = puVar15 + 1;
              local_c = (int *)((int)local_c + 1);
            }
            bVar7 = local_3e < iVar12;
            local_3e = iVar1;
            if (iVar1 == 0 || bVar7) {
              local_c = local_8 + 0x1040;
              uVar8 = (*pcVar4)(param_1,local_c,local_36);
              if (uVar8 != 0) goto LAB_006d7fb4;
              local_36 = local_36 + local_3a;
              local_3e = iVar5;
              if ((cVar2 != '\0') && (iVar6 <= local_36)) {
                local_52 = local_52 + 1;
                uVar8 = (uint)local_36 >> 0x10;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_36 = CONCAT22((short)uVar8,
                                    (short)(char)*(undefined2 *)(&DAT_006d7d90 + local_52 * 2));
                local_3a = (uint)(ushort)(short)(char)((ushort)*(undefined2 *)
                                                                (&DAT_006d7d90 + local_52 * 2) >> 8);
              }
            }
          }
        }
      }
    }
  }
LAB_006d7fb4:
  if ((uVar8 != 0xffffffff) && (-1 < (int)uVar8)) {
    uVar8 = 0xfffffffb;
  }
LAB_006d7fc6:
  st::fn_00405D8A(local_8);
  return uVar8;
}

// 006D7FDA FUN_006d7fda
#line 4 "decomp/ST.exe/functions/006D7FDA/decomp.c"
uint st::fn_006D7FDA(void)

{
  uint uVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;

  *(int *)(unaff_EBP + -0x2e) = *(int *)(unaff_EBP + -4) + 0x4000;
  /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar1 = (**(code **)(unaff_EBP + -0x46))(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x29,1);
  /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable or function-table callback call with the machine-proven calling convention */
  if ((uVar1 == 1) &&
     (uVar1 = (**(code **)(unaff_EBP + -0x46))
                        (*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x2e),
                         *(undefined1 *)(unaff_EBP + -0x29)), uVar1 == *(byte *)(unaff_EBP + -0x29))
     ) {
    return uVar1;
  }
  if (-1 < (int)uVar1) {
    uVar1 = 0xfffffffb;
  }
  return uVar1;
}

// 006D8036 FUN_006d8036
#line 4 "decomp/ST.exe/functions/006D8036/decomp.c"
uint st::fn_006D8036(void)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uint in_EAX;
  byte bVar4;
  ushort uVar5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;
  bool bVar6;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (*(char *)(unaff_EBP + -0x28) == '\0') {
    bVar6 = false;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if ((*(char *)(unaff_EBP + -0x29) == '\0') && (in_EAX = st::fn_006D7FDA(), bVar6)) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      return in_EAX;
    }
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    uVar1 = **(undefined1 **)(unaff_EBP + -0x2e);
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    in_EAX = STReplaceLowByte((uint32_t)(in_EAX), (uint8_t)(uVar1));
    *(undefined1 *)(unaff_EBP + -0x2a) = uVar1;
    *(undefined1 **)(unaff_EBP + -0x2e) = *(undefined1 **)(unaff_EBP + -0x2e) + 1;
    *(char *)(unaff_EBP + -0x29) = *(char *)(unaff_EBP + -0x29) + -1;
    *(undefined1 *)(unaff_EBP + -0x28) = 8;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  bVar2 = *(byte *)(unaff_EBP + -0xe);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uVar5 = (ushort)(*(byte *)(unaff_EBP + -0x2a) >> (8U - *(char *)(unaff_EBP + -0x28) & 0x1f));
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  bVar4 = *(byte *)(unaff_EBP + -0x28);
  while( true ) {
    if ((char)bVar2 <= (char)bVar4) {
      *(byte *)(unaff_EBP + -0x28) = bVar4 - bVar2;
      return (uint)(uVar5 & *(ushort *)(&DAT_006d801c + (uint)bVar2 * 2));
    }
    bVar6 = false;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if ((*(char *)(unaff_EBP + -0x29) == '\0') && (in_EAX = st::fn_006D7FDA(), bVar6)) break;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    bVar3 = **(byte **)(unaff_EBP + -0x2e);
    *(byte *)(unaff_EBP + -0x2a) = bVar3;
    *(byte **)(unaff_EBP + -0x2e) = *(byte **)(unaff_EBP + -0x2e) + 1;
    *(char *)(unaff_EBP + -0x29) = *(char *)(unaff_EBP + -0x29) + -1;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    in_EAX = STReplaceLowWord((uint32_t)(in_EAX), (uint16_t)((ushort)bVar3)) << (bVar4 & 0x1f);
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    uVar5 = uVar5 | (ushort)in_EAX;
    bVar4 = bVar4 + 8;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  return in_EAX;
}

// 006D8120 FUN_006d8120
#line 4 "decomp/ST.exe/functions/006D8120/decomp.c"
uint __cdecl st::fn_006D8120(AnonShape_006D8120_534053F7 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int uVar6;
  byte *pbVar10;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_ECX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_ECX_00;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  byte *extraout_EDX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  byte *extraout_EDX_00;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  bool bVar19;
  uint local_30;
  int local_20;
  int local_1c;

  pcVar3 = (code *)param_1->field_003A;
  uVar5 = (uint)param_1->field_0011;
  uVar6 = uVar5;
  if (param_1->field_0011 < 2) {
    uVar7 = (uint)param_1->field_0010 * param_1->field_0008 + 7 >> 3;
    uVar4 = param_1->field_0012;
    uVar12 = uVar4 - uVar7;
    local_20 = param_1->field_000C;
    pbVar8 = (byte *)st::fn_00402B21(uVar7 * uVar5 + 0x203);
    uVar6 = 0;
    if (pbVar8 != nullptr) {
      pbVar9 = pbVar8 + 0x200;
      uVar7 = 0;
      pbVar13 = nullptr;
      local_1c = 0;
      pbVar10 = pbVar9;
      pbVar16 = pbVar8;
      pbVar18 = pbVar9;
      local_30 = uVar5;
      do {
        do {
          uVar14 = -uVar7;
          uVar7 = uVar4;
          while (0 < (int)uVar7) {
            pbVar17 = pbVar16;
            if (uVar14 == 0) {
              bVar19 = pbVar16 < pbVar13;
              iVar11 = 0;
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              if ((!bVar19) &&
                 (uVar6 = st::fn_006D822B(), iVar11 = extraout_ECX, pbVar13 = extraout_EDX, bVar19))
              goto cf_common_exit_006D8217;
              uVar14 = iVar11 + 1;
              pbVar1 = pbVar16 + 1;
              bVar2 = *pbVar16;
              pbVar10 = (byte *)(uint)bVar2;
              pbVar17 = pbVar1;
              if (0xbf < bVar2) {
                uVar14 = STReplaceLowByte((uint32_t)(uVar14), (uint8_t)(bVar2)) & 0xffffff3f;
                bVar19 = pbVar1 < pbVar13;
                /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                if ((!bVar19) &&
                   (uVar6 = st::fn_006D822B(), uVar14 = extraout_ECX_00, pbVar13 = extraout_EDX_00,
                   bVar19)) goto cf_common_exit_006D8217;
                pbVar17 = pbVar16 + 2;
                pbVar10 = (byte *)(uint)*pbVar1;
              }
            }
            uVar15 = uVar7 - uVar14;
            pbVar16 = pbVar17;
            if ((((int)uVar14 <= (int)uVar7) && (uVar12 <= uVar15)) ||
               (iVar11 = uVar14 + uVar15, uVar14 = iVar11 - uVar12, uVar7 = uVar15,
               uVar14 != 0 && (int)uVar12 <= iVar11)) {
              for (; uVar7 = uVar15, uVar14 != 0; uVar14 = uVar14 - 1) {
                *pbVar18 = (byte)pbVar10;
                pbVar18 = pbVar18 + 1;
              }
            }
          }
          local_30 = local_30 - 1;
        } while (local_30 != 0);
        uVar6 = (*pcVar3)(param_1,pbVar9,local_1c);
        if (uVar6 != 0) {
          if (uVar6 != 0xffffffff) goto cf_common_exit_006D8217;
          break;
        }
        local_1c = local_1c + 1;
        local_20 = local_20 + -1;
        pbVar18 = pbVar9;
        local_30 = uVar5;
      } while (local_20 != 0);
      uVar6 = 0;
cf_common_exit_006D8217:
      st::fn_00405D8A((int *)pbVar8);
    }
  }
  return uVar6;
}

// 006D822B FUN_006d822b
#line 4 "decomp/ST.exe/functions/006D822B/decomp.c"
int st::fn_006D822B(void)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;

  /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(unaff_EBP + -4))
                    (*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0xc),0x200);
  if ((iVar1 < 1) && (iVar1 == 0)) {
    iVar1 = -5;
  }
  return iVar1;
}

// 006D86E0 FUN_006d86e0
#line 4 "decomp/ST.exe/functions/006D86E0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 006CEF60 -> 006D86E0 @ 006CF83E */

void st::fn_006D86E0(AnonShape_006D86E0_D6D32C07 *param_1,int param_2,
                 AnonShape_006D86E0_768BB816 *param_3,int param_4,int param_5,int param_6,
                 uint param_7,byte param_8,char param_9)

{
  short sVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined1 uVar4;
  AnonShape_006D86E0_768BB816 *pAVar5;
  AnonShape_006D86E0_D6D32C07 AVar6;
  AnonShape_006D86E0_D6D32C07 AVar7;
  AnonShape_006D86E0_768BB816 *pAVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint local_c;
  byte local_8;

  if ((param_6 < 1) || ((int)param_7 < 1)) {
    return;
  }
  local_8 = (param_8 - 1) + param_9;
  if (param_5 < 1) {
    pAVar5 = (AnonShape_006D86E0_768BB816 *)
             (&param_3[1].field_0002 + (param_3->field_000D >> 1 & 0xe));
  }
  else {
    pAVar5 = (AnonShape_006D86E0_768BB816 *)st::fn_006CFE10((byte *)param_3,param_5);
  }
  sVar1 = param_3->field_0012;
  local_c = param_7;
LAB_006d8738:
  param_7 = (uint)*(byte *)pAVar5;
  pAVar5 = (AnonShape_006D86E0_768BB816 *)&pAVar5->field_0001;
  iVar11 = param_4;
  if (param_7 != 0) {
    while( true ) {
      while ((param_7 & 0x80) == 0) {
        uVar10 = param_7 & 0x7f;
        if (iVar11 < (int)uVar10) goto LAB_006d8786;
        bVar9 = *(byte *)pAVar5;
        pAVar5 = (AnonShape_006D86E0_768BB816 *)&pAVar5->field_0001;
        iVar11 = iVar11 - uVar10;
        param_7 = (uint)bVar9;
      }
      uVar10 = param_7 & 0x3f;
      if (iVar11 < (int)uVar10) break;
      if ((param_7 & 0x40) == 0) {
        param_7 = (uint)(byte)(&pAVar5->field_0x0)[uVar10];
        pAVar5 = (AnonShape_006D86E0_768BB816 *)(&pAVar5->field_0x0 + uVar10 + 1);
        iVar11 = iVar11 - uVar10;
      }
      else {
        param_7 = (uint)pAVar5->field_0001;
        pAVar5 = (AnonShape_006D86E0_768BB816 *)&pAVar5->field_0002;
        iVar11 = iVar11 - uVar10;
      }
    }
LAB_006d8786:
    param_9 = (char)uVar10 - (char)iVar11;
    param_3 = pAVar5;
    if (((byte)param_7 & 0xc0) == 0x80) {
      param_3 = (AnonShape_006D86E0_768BB816 *)(&pAVar5->field_0x0 + iVar11);
    }
    bVar9 = (byte)param_7 & 0xc0;
    if ((param_7 & 0x80) == 0) {
      bVar9 = 0;
    }
    uVar10 = (uint)(byte)(bVar9 + param_9);
    iVar11 = param_6;
    do {
      pAVar5 = param_3;
      if ((uVar10 & 0x80) == 0) {
        if (iVar11 < (int)uVar10) goto cf_common_join_006D88D7;
        iVar11 = iVar11 - uVar10;
        param_1 = (AnonShape_006D86E0_D6D32C07 *)((int)&param_1->field_0x0 + uVar10);
      }
      else if ((uVar10 & 0x40) == 0) {
        uVar10 = uVar10 & 0x3f;
        if (iVar11 < (int)uVar10) goto cf_common_join_006D88D7;
        iVar11 = iVar11 - uVar10;
        if ((*(byte *)param_3 < param_8) || (local_8 < *(byte *)param_3)) {
          if (3 < uVar10) {
            if (((uint)param_1 & 1) != 0) {
              uVar10 = uVar10 - 1;
              *(byte *)param_1 = *(byte *)param_3;
              param_3 = (AnonShape_006D86E0_768BB816 *)&param_3->field_0001;
              param_1 = (AnonShape_006D86E0_D6D32C07 *)&param_1->field_0001;
            }
            if (((uint)param_1 & 2) != 0) {
              bVar9 = param_3->field_0001;
              uVar10 = uVar10 - 2;
              param_1->field_0x0 = param_3->field_0x0;
              param_1->field_0001 = bVar9;
              param_3 = (AnonShape_006D86E0_768BB816 *)&param_3->field_0002;
              param_1 = (AnonShape_006D86E0_D6D32C07 *)&param_1->field_0002;
            }
            while (3 < (int)uVar10) {
              puVar2 = st::pointer_boundary_cast<undefined1 *>(&param_3->field_0x0);
              bVar9 = param_3->field_0001;
              bVar3 = param_3->field_0002;
              uVar4 = param_3->field_0x3;
              param_3 = (AnonShape_006D86E0_768BB816 *)&param_3->field_0x4;
              param_1->field_0x0 = *puVar2;
              param_1->field_0001 = bVar9;
              param_1->field_0002 = bVar3;
              param_1->field_0x3 = uVar4;
              param_1 = param_1 + 1;
              uVar10 = uVar10 - 4;
            }
            if (uVar10 == 0) goto LAB_006d88c6;
          }
          if ((char)uVar10 != '\x01') {
            if ((char)uVar10 != '\x02') {
              param_1->field_0002 = param_3->field_0002;
            }
            param_1->field_0001 = param_3->field_0001;
          }
          bVar9 = *(byte *)param_3;
          param_3 = (AnonShape_006D86E0_768BB816 *)((int)&param_3->field_0x0 + uVar10);
          *(byte *)param_1 = bVar9;
          param_1 = (AnonShape_006D86E0_D6D32C07 *)((int)&param_1->field_0x0 + uVar10);
        }
        else {
          param_3 = (AnonShape_006D86E0_768BB816 *)((int)&param_3->field_0x0 + uVar10);
          param_1 = (AnonShape_006D86E0_D6D32C07 *)((int)&param_1->field_0x0 + uVar10);
        }
      }
      else {
        bVar9 = *(byte *)param_3;
        uVar10 = uVar10 & 0xffffff3f;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        STPiece<0,2>(AVar6) = CONCAT11(bVar9,bVar9);
        STPiece<2,2>(AVar6) = 0;
        if (iVar11 < (int)uVar10) goto cf_common_join_006D88D7;
        iVar11 = iVar11 - uVar10;
        param_3 = (AnonShape_006D86E0_768BB816 *)&param_3->field_0001;
        if (3 < uVar10) {
          if (((uint)param_1 & 1) != 0) {
            *(byte *)param_1 = bVar9;
            param_1 = (AnonShape_006D86E0_D6D32C07 *)&param_1->field_0001;
            uVar10 = uVar10 - 1;
          }
          if (((uint)param_1 & 2) != 0) {
            *(ushort *)param_1 = STPiece<0,2>(AVar6);
            param_1 = (AnonShape_006D86E0_D6D32C07 *)&param_1->field_0002;
            uVar10 = uVar10 - 2;
          }
          STPiece<2,2>(AVar6) = STPiece<0,2>(AVar6);
          while (3 < (int)uVar10) {
            *param_1 = AVar6;
            param_1 = param_1 + 1;
            uVar10 = uVar10 - 4;
          }
          if (uVar10 == 0) goto LAB_006d88c6;
        }
        bVar9 = STPiece<0,1>(AVar6);
        if ((char)uVar10 != '\x01') {
          if ((char)uVar10 != '\x02') {
            param_1->field_0002 = bVar9;
          }
          param_1->field_0001 = bVar9;
        }
        *(byte *)param_1 = bVar9;
        param_1 = (AnonShape_006D86E0_D6D32C07 *)((int)&param_1->field_0x0 + uVar10);
      }
LAB_006d88c6:
      uVar10 = 0;
      pAVar5 = param_3;
      if (iVar11 < 1) goto cf_common_join_006D88D7;
      uVar10 = (uint)*(byte *)param_3;
      param_3 = (AnonShape_006D86E0_768BB816 *)&param_3->field_0001;
      param_7 = uVar10;
    } while( true );
  }
  param_1 = (AnonShape_006D86E0_D6D32C07 *)(&param_1->field_0x0 + param_2);
  goto LAB_006d8a3c;
cf_common_join_006D88D7:
  if (0 < iVar11) {
    uVar10 = uVar10 - iVar11;
    if ((param_7 & 0x80) == 0) {
      param_1 = (AnonShape_006D86E0_D6D32C07 *)((int)&param_1->field_0x0 + iVar11);
    }
    else if ((param_7 & 0x40) == 0) {
      if ((*(byte *)pAVar5 < param_8) || (local_8 < *(byte *)pAVar5)) {
        if (3 < iVar11) {
          if (((uint)param_1 & 1) != 0) {
            *(byte *)param_1 = *(byte *)pAVar5;
            pAVar5 = (AnonShape_006D86E0_768BB816 *)&pAVar5->field_0001;
            param_1 = (AnonShape_006D86E0_D6D32C07 *)&param_1->field_0001;
            iVar11 = iVar11 + -1;
          }
          if (((uint)param_1 & 2) != 0) {
            bVar9 = pAVar5->field_0001;
            param_1->field_0x0 = pAVar5->field_0x0;
            param_1->field_0001 = bVar9;
            pAVar5 = (AnonShape_006D86E0_768BB816 *)&pAVar5->field_0002;
            param_1 = (AnonShape_006D86E0_D6D32C07 *)&param_1->field_0002;
            iVar11 = iVar11 + -2;
          }
          while (3 < iVar11) {
            puVar2 = st::pointer_boundary_cast<undefined1 *>(&pAVar5->field_0x0);
            bVar9 = pAVar5->field_0001;
            bVar3 = pAVar5->field_0002;
            uVar4 = pAVar5->field_0x3;
            pAVar5 = (AnonShape_006D86E0_768BB816 *)&pAVar5->field_0x4;
            param_1->field_0x0 = *puVar2;
            param_1->field_0001 = bVar9;
            param_1->field_0002 = bVar3;
            param_1->field_0x3 = uVar4;
            param_1 = param_1 + 1;
            iVar11 = iVar11 + -4;
          }
          if (iVar11 == 0) goto LAB_006d89c6;
        }
        if ((char)iVar11 != '\x01') {
          if ((char)iVar11 != '\x02') {
            param_1->field_0002 = pAVar5->field_0002;
          }
          param_1->field_0001 = pAVar5->field_0001;
        }
        *(byte *)param_1 = *(byte *)pAVar5;
        pAVar5 = (AnonShape_006D86E0_768BB816 *)((int)&pAVar5->field_0x0 + iVar11);
        param_1 = (AnonShape_006D86E0_D6D32C07 *)((int)&param_1->field_0x0 + iVar11);
      }
      else {
        pAVar5 = (AnonShape_006D86E0_768BB816 *)((int)&pAVar5->field_0x0 + iVar11);
        param_1 = (AnonShape_006D86E0_D6D32C07 *)((int)&param_1->field_0x0 + iVar11);
      }
    }
    else {
      bVar9 = *(byte *)pAVar5;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STPiece<0,2>(AVar7) = CONCAT11(bVar9,bVar9);
      STPiece<2,2>(AVar7) = 0;
      pAVar5 = (AnonShape_006D86E0_768BB816 *)&pAVar5->field_0001;
      if (3 < iVar11) {
        if (((uint)param_1 & 1) != 0) {
          *(byte *)param_1 = bVar9;
          param_1 = (AnonShape_006D86E0_D6D32C07 *)&param_1->field_0001;
          iVar11 = iVar11 + -1;
        }
        if (((uint)param_1 & 2) != 0) {
          *(ushort *)param_1 = STPiece<0,2>(AVar7);
          param_1 = (AnonShape_006D86E0_D6D32C07 *)&param_1->field_0002;
          iVar11 = iVar11 + -2;
        }
        STPiece<2,2>(AVar7) = STPiece<0,2>(AVar7);
        while (3 < iVar11) {
          *param_1 = AVar7;
          param_1 = param_1 + 1;
          iVar11 = iVar11 + -4;
        }
        if (iVar11 == 0) goto LAB_006d89c6;
      }
      bVar9 = STPiece<0,1>(AVar7);
      if ((char)iVar11 != '\x01') {
        if ((char)iVar11 != '\x02') {
          param_1->field_0002 = bVar9;
        }
        param_1->field_0001 = bVar9;
      }
      *(byte *)param_1 = bVar9;
      param_1 = (AnonShape_006D86E0_D6D32C07 *)((int)&param_1->field_0x0 + iVar11);
    }
  }
LAB_006d89c6:
  iVar11 = (sVar1 - param_4) - param_6;
  bVar9 = (byte)param_7;
  if ((int)uVar10 < iVar11) {
    do {
      iVar11 = iVar11 - uVar10;
      pAVar8 = pAVar5;
      if (((byte)param_7 & 0xc0) == 0x80) {
        pAVar8 = (AnonShape_006D86E0_768BB816 *)((int)&pAVar5->field_0x0 + uVar10);
      }
      bVar9 = *(byte *)pAVar8;
      param_7 = (uint)bVar9;
      pAVar5 = (AnonShape_006D86E0_768BB816 *)&pAVar8->field_0001;
      uVar10 = param_7;
      if (((bVar9 & 0x80) != 0) && (uVar10 = param_7 & 0x3f, (bVar9 & 0x40) != 0)) {
        pAVar5 = (AnonShape_006D86E0_768BB816 *)&pAVar8->field_0002;
      }
    } while ((int)uVar10 < iVar11);
  }
  if ((bVar9 & 0xc0) == 0x80) {
    pAVar5 = (AnonShape_006D86E0_768BB816 *)(&pAVar5->field_0x0 + iVar11);
  }
  param_1 = (AnonShape_006D86E0_D6D32C07 *)((int)param_1 + (param_2 - param_6));
LAB_006d8a3c:
  local_c = local_c - 1;
  if (local_c == 0) {
    return;
  }
  goto LAB_006d8738;
}

// 006D8A60 FUN_006d8a60
#line 4 "decomp/ST.exe/functions/006D8A60/decomp.c"
/* WARNING: Unable to use type for symbol temp_3ff146b557 */
/* WARNING: Unable to use type for symbol puVar18 */
/* WARNING: Unable to use type for symbol temp_3f248b4d74 */
/* WARNING: Unable to use type for symbol temp_3f135a84f2 */
/* WARNING: Unable to use type for symbol temp_3f38b4ca47 */
/* WARNING: Unable to use type for symbol temp_3fa16318a4 */
/* WARNING: Unable to use type for symbol pAVar16 */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006CEF60 -> 006D8A60 @ 006CF8D7
   [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:9: parameter=/int
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0x2c, direct_reads=1, scalar_operations=2, signed_comparisons=2, unsigned_bounds=8,
   pointer_dereferences=0, slot_reused=true; sites=006D8A7F incoming load: MOV EAX,dword ptr [EBP +
   0x2c] | 006D8A85 scalar operation: ADD EAX,ECX | 006D8A8A scalar operation: DEC EAX | 006D8AEB
   first slot write: MOV dword ptr [EBP + 0x2c],EDX | 006D8C3C derived narrow scalar use: CMP
   AL,byte ptr [EBP + -0x10] | 006D8C3C derived scalar comparison: CMP AL,byte ptr [EBP + -0x10]; JA
   | 006D8E2A derived narrow scalar use: CMP AL,byte ptr [EBP + -0x10] | 006D8E2A derived scalar
   comparison: CMP AL,byte ptr [EBP + -0x10]; JA | 006D93EC derived narrow scalar use: CMP AL,byte
   ptr [EBP + -0x10] | 006D93EC derived scalar comparison: CMP AL,byte ptr [EBP + -0x10]; JA |
   006D95BA derived narrow scalar use: CMP AL,byte ptr [EBP + -0x10] | 006D95BA derived scalar
   comparison: CMP AL,byte ptr [EBP + -0x10]; JA | 006D9E2F derived scalar comparison: CMP ECX,dword
   ptr [EBP + -0x14]; JL | 006D9E97 derived scalar comparison: CMP ECX,dword ptr [EBP + -0x14]; JL
    */

void st::fn_006D8A60(AnonShape_006D8A60_D503343B *param_1,int param_2,byte *param_3,int param_4,
                 uint param_5,uint param_6,int param_7,undefined *param_8,uint param_9,int param_10,
                 undefined *param_11,byte *param_12,int param_13,int param_14,uint param_15)

{
  byte *pbVar1;
  undefined1 *puVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  AnonShape_006D8A60_D503343B AVar7;
  AnonShape_006D8A60_D503343B AVar8;
  AnonShape_006D8A60_D503343B AVar9;
  AnonShape_006D8A60_D503343B AVar10;
  AnonShape_006D8A60_D503343B AVar11;
  AnonShape_006D8A60_D503343B AVar12;
  AnonShape_006D8A60_D503343B AVar13;
  char cVar14;
  int iVar15;
  undefined1 uVar16;
  undefined2 uVar17;
  uint uVar18;
  AnonShape_006D8A60_D503343B AVar19;
  AnonShape_006D8A60_D503343B *pAVar20_mg2;
  byte bVar20;
  byte bVar21;
  undefined *puVar22;
  uint uVar23;
  AnonShape_006D8A60_D503343B *pAVar24;
  byte *pbVar25;
  AnonShape_006D8A60_D503343B *pAVar26;
  byte local_14;
  char local_10;
  uint local_8;
  AnonShape_006D8A60_D503343B *temp_3ff146b557;
  AnonShape_006D8A60_D503343B *puVar18;
  AnonShape_006D8A60_D503343B *temp_3f248b4d74;
  AnonShape_006D8A60_D503343B *temp_3f135a84f2;
  AnonShape_006D8A60_D503343B *temp_3f38b4ca47;
  AnonShape_006D8A60_D503343B *temp_3fa16318a4;
  AnonShape_006D8A60_D503343B *pAVar16;
  AnonShape_006D8A60_D503343B *pAVar20_mg0;
  AnonShape_006D8A60_D503343B *pAVar20_mg4;
  AnonShape_006D8A60_D503343B *pAVar20_mg3;

  if (((int)param_6 < 1) || (param_7 < 1)) {
    return;
  }
  iVar6 = param_10 + param_9;
  local_14 = (char)iVar6 - 1;
  if ((param_12 != nullptr) &&
     (param_12 = param_12 + param_13 * param_15 + (param_14 >> 3), param_11 == nullptr)) {
    param_11 = st::pointer_boundary_cast<undefined *>(&DAT_007ee300);
  }
  if ((int)param_5 < 1) {
    param_10 = (int)(param_3 + (param_3[0xd] >> 1 & 0xe) + 0x16);
  }
  else {
    param_10 = (int)st::fn_006CFE10(param_3,param_5);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar3 = *(short *)(param_3 + 0x12);
LAB_006d8b04:
  pAVar20_mg0 = param_1;
  param_7 = param_7 + -1;
  local_8 = (uint)*(byte *)param_10;
  param_10 = param_10 + 1;
  iVar15 = param_4;
  if (local_8 != 0) {
    while( true ) {
      while ((local_8 & 0x80) == 0) {
        uVar23 = local_8 & 0x7f;
        if (iVar15 < (int)uVar23) goto LAB_006d8b50;
        bVar21 = *(byte *)param_10;
        param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
        iVar15 = iVar15 - uVar23;
        local_8 = (uint)bVar21;
      }
      uVar23 = local_8 & 0x3f;
      if (iVar15 < (int)uVar23) break;
      if ((local_8 & 0x40) == 0) {
        pbVar25 = (byte *)((int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0x0 + uVar23);
        local_8 = (uint)*pbVar25;
        param_10 = (int)(pbVar25 + 1);
        iVar15 = iVar15 - uVar23;
      }
      else {
        local_8 = (uint)((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
        param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
        iVar15 = iVar15 - uVar23;
      }
    }
LAB_006d8b50:
    uVar23 = uVar23 - iVar15;
    bVar21 = (byte)local_8;
    if ((bVar21 & 0xc0) == 0x80) {
      param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0x0 + iVar15;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_15 = param_6;
    if (param_8 == nullptr) {
      if ((int)uVar23 <= (int)param_6) {
        do {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_15 = param_15 - uVar23;
          if ((local_8 & 0x80) == 0) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar23);
          }
          else if (0 < (int)uVar23) {
            do {
              bVar21 = *(byte *)param_10;
              param_10 = param_10 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_5 = (uint)bVar21;
              if (((int)param_5 < (int)param_9) || (iVar6 <= (int)param_5)) {
                *(byte *)param_1 = bVar21;
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
          if ((int)param_15 < 1) {
            uVar23 = 0;
            break;
          }
          local_8 = (uint)*(byte *)param_10;
          uVar23 = local_8 & 0x7f;
          param_10 = param_10 + 1;
        } while ((int)uVar23 <= (int)param_15);
      }
      uVar23 = uVar23 - param_15;
      pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
      if ((local_8 & 0x80) == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + param_15);
      }
      else if (0 < (int)param_15) {
        do {
          bVar21 = *(byte *)param_10;
          param_10 = param_10 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_5 = (uint)bVar21;
          if (((int)param_5 < (int)param_9) || (iVar6 <= (int)param_5)) {
            *(byte *)param_1 = bVar21;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_15 = param_15 - 1;
          pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
        } while (param_15 != 0);
      }
    }
    else {
      local_10 = (char)uVar23;
      if ((param_3[0xd] & 3) == 1) {
        bVar21 = bVar21 & 0xc0;
        if ((local_8 & 0x80) == 0) {
          bVar21 = 0;
        }
        uVar23 = (uint)(byte)(bVar21 + local_10);
        uVar18 = param_6;
        pAVar16 = param_1;
        do {
          if ((uVar23 & 0x80) == 0) {
            if ((int)uVar18 < (int)uVar23) goto cf_common_join_006D8DA5;
            uVar18 = uVar18 - uVar23;
            pAVar26 = (AnonShape_006D8A60_D503343B *)((int)&pAVar16->field_0x0 + uVar23);
          }
          else if ((uVar23 & 0x40) == 0) {
            uVar23 = uVar23 & 0x3f;
            if ((int)uVar18 < (int)uVar23) goto cf_common_join_006D8DA5;
            uVar18 = uVar18 - uVar23;
            bVar21 = *(byte *)param_10;
            if ((bVar21 < (byte)param_9) || (local_14 < bVar21)) {
              if (3 < uVar23) {
                if (((uint)pAVar16 & 1) != 0) {
                  uVar23 = uVar23 - 1;
                  *(byte *)pAVar16 = *(byte *)param_10;
                  param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
                  pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0001;
                }
                if (((uint)pAVar16 & 2) != 0) {
                  bVar21 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
                  uVar23 = uVar23 - 2;
                  pAVar16->field_0x0 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0x0;
                  pAVar16->field_0001 = bVar21;
                  param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
                  pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0002;
                }
                while (3 < (int)uVar23) {
                  AVar19 = *(AnonShape_006D8A60_D503343B *)param_10;
                  param_10 = param_10 + 4;
                  *pAVar16 = AVar19;
                  pAVar16 = pAVar16 + 1;
                  uVar23 = uVar23 - 4;
                }
                pAVar26 = pAVar16;
                if (uVar23 == 0) goto LAB_006d8d94;
              }
              if ((char)uVar23 != '\x01') {
                if ((char)uVar23 != '\x02') {
                  pAVar16->field_0002 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
                }
                pAVar16->field_0001 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
              }
              bVar21 = *(byte *)param_10;
              param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0x0 + uVar23;
              *(byte *)pAVar16 = bVar21;
              pAVar26 = (AnonShape_006D8A60_D503343B *)((int)&pAVar16->field_0x0 + uVar23);
            }
            else {
              AVar19 = *(AnonShape_006D8A60_D503343B *)((uint)pAVar16 & 0xfffffffc);
              if (((uint)pAVar16 & 3) == 0) {
LAB_006d8cab:
                bVar21 = (byte)uVar23;
                while ('\x03' < (char)bVar21) {
                  bVar20 = *(byte *)param_10;
                  pbVar25 = st::pointer_boundary_cast<byte *>(&((AnonShape_006D8A60_D503343B *)param_10)->field_0001);
                  pbVar1 = st::pointer_boundary_cast<byte *>(&((AnonShape_006D8A60_D503343B *)param_10)->field_0002);
                  puVar2 = st::pointer_boundary_cast<undefined1 *>(&((AnonShape_006D8A60_D503343B *)param_10)->field_0x3);
                  param_10 = param_10 + 4;
                  *pAVar16 = (AnonShape_006D8A60_D503343B)
                             /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                             (CONCAT22(CONCAT11(param_8[(uint)CONCAT11(*pbVar25,AVar19.field_0001) +
                                                        param_9 * -0x100],
                                                param_8[(uint)CONCAT11(bVar20,STPiece<0,1>(AVar19)) +
                                                        param_9 * -0x100]),
                                       CONCAT11(param_8[(uint)CONCAT11(*puVar2,STPiece<3,1>(AVar19)) +
                                                        param_9 * -0x100],
                                                param_8[(uint)CONCAT11(*pbVar1,AVar19.field_0002) +
                                                        param_9 * -0x100])) << 0x10 |
                             (uint)CONCAT11(param_8[(uint)CONCAT11(*pbVar25,AVar19.field_0001) +
                                                    param_9 * -0x100],
                                            param_8[(uint)CONCAT11(bVar20,STPiece<0,1>(AVar19)) +
                                                    param_9 * -0x100]));
                  AVar19 = pAVar16[1];
                  pAVar16 = pAVar16 + 1;
                  bVar21 = bVar21 - 4;
                }
                uVar23 = (uint)bVar21;
                pAVar24 = (AnonShape_006D8A60_D503343B *)param_10;
                pAVar26 = pAVar16;
                if (bVar21 == 0) goto LAB_006d8d94;
              }
              else {
                AVar19 = (AnonShape_006D8A60_D503343B)((uint)AVar19 >> (((byte)pAVar16 & 3) << 3));
                pAVar24 = (AnonShape_006D8A60_D503343B *)param_10;
                if (3 < uVar23) {
                  if (((uint)pAVar16 & 1) != 0) {
                    uVar23 = (uint)(byte)((char)uVar23 - 1);
                    param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
                    *(undefined *)pAVar16 =
                         /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                         param_8[(uint)CONCAT11(bVar21,STPiece<0,1>(AVar19)) + param_9 * -0x100];
                    AVar19 = (AnonShape_006D8A60_D503343B)((uint)AVar19 >> 8);
                    pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0001;
                  }
                  if (((uint)pAVar16 & 2) != 0) {
                    bVar21 = *(byte *)param_10;
                    pbVar25 = st::pointer_boundary_cast<byte *>(&((AnonShape_006D8A60_D503343B *)param_10)->field_0001);
                    uVar23 = (uint)(byte)((char)uVar23 - 2);
                    param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
                    *(ushort *)pAVar16 =
                         /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                         CONCAT11(param_8[(uint)CONCAT11(*pbVar25,AVar19.field_0001) +
                                          param_9 * -0x100],
                                  param_8[(uint)CONCAT11(bVar21,STPiece<0,1>(AVar19)) + param_9 * -0x100]);
                    pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0002;
                  }
                  AVar19 = *pAVar16;
                  goto LAB_006d8cab;
                }
              }
              param_10 = (int)&pAVar24->field_0001;
              pAVar26 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0001;
              *(undefined *)pAVar16 =
                   /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                   param_8[(uint)CONCAT11(*(byte *)pAVar24,STPiece<0,1>(AVar19)) + param_9 * -0x100];
              uVar17 = STPiece<1,2>(AVar19);
              if (uVar23 != 1) {
                if (((uint)pAVar26 & 3) == 0) {
                  uVar17 = SUB42(*pAVar26,0);
                }
                bVar21 = *(byte *)param_10;
                param_10 = (int)&pAVar24->field_0002;
                pbVar25 = &pAVar16->field_0002;
                *(undefined *)pAVar26 =
                     /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                     param_8[(uint)CONCAT11(bVar21,(char)uVar17) + param_9 * -0x100];
                uVar16 = (undefined1)((ushort)uVar17 >> 8);
                pAVar26 = (AnonShape_006D8A60_D503343B *)pbVar25;
                if (uVar23 != 2) {
                  if (((uint)pbVar25 & 3) == 0) {
                    uVar16 = (undefined1)*(undefined4 *)pbVar25;
                  }
                  bVar21 = *(byte *)param_10;
                  param_10 = (int)&pAVar24->field_0x3;
                  pAVar26 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0x3;
                  *pbVar25 = param_8[(uint)CONCAT11(bVar21,uVar16) + param_9 * -0x100];
                }
              }
            }
          }
          else {
            bVar21 = *(byte *)param_10;
            uVar23 = uVar23 & 0xffffff3f;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            STPiece<0,2>(AVar19) = CONCAT11(bVar21,bVar21);
            STPiece<2,2>(AVar19) = 0;
            if ((int)uVar18 < (int)uVar23) goto cf_common_join_006D8DA5;
            uVar18 = uVar18 - uVar23;
            param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
            if (3 < uVar23) {
              if (((uint)pAVar16 & 1) != 0) {
                *(byte *)pAVar16 = bVar21;
                pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0001;
                uVar23 = uVar23 - 1;
              }
              if (((uint)pAVar16 & 2) != 0) {
                *(ushort *)pAVar16 = STPiece<0,2>(AVar19);
                pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0002;
                uVar23 = uVar23 - 2;
              }
              STPiece<2,2>(AVar19) = STPiece<0,2>(AVar19);
              while (3 < (int)uVar23) {
                *pAVar16 = AVar19;
                pAVar16 = pAVar16 + 1;
                uVar23 = uVar23 - 4;
              }
              pAVar26 = pAVar16;
              if (uVar23 == 0) goto LAB_006d8d94;
            }
            bVar21 = STPiece<0,1>(AVar19);
            if ((char)uVar23 != '\x01') {
              if ((char)uVar23 != '\x02') {
                pAVar16->field_0002 = bVar21;
              }
              pAVar16->field_0001 = bVar21;
            }
            *(byte *)pAVar16 = bVar21;
            pAVar26 = (AnonShape_006D8A60_D503343B *)((int)&pAVar16->field_0x0 + uVar23);
          }
LAB_006d8d94:
          uVar23 = 0;
          pAVar16 = pAVar26;
          if ((int)uVar18 < 1) goto cf_common_join_006D8DA5;
          uVar23 = (uint)*(byte *)param_10;
          param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
          local_8 = uVar23;
        } while( true );
      }
      if ((param_3[0xd] & 3) == 2) {
        if (param_12 == nullptr) {
          if (param_11 == nullptr) {
            bVar21 = bVar21 & 0xc0;
            if ((local_8 & 0x80) == 0) {
              bVar21 = 0;
            }
            uVar23 = (uint)(byte)(bVar21 + local_10);
            uVar18 = param_6;
            do {
              if ((uVar23 & 0x80) == 0) {
                if ((int)uVar18 < (int)uVar23) goto cf_common_join_006D958E;
                uVar18 = uVar18 - uVar23;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar23);
              }
              else if ((uVar23 & 0x40) == 0) {
                uVar23 = uVar23 & 0x3f;
                if ((int)uVar18 < (int)uVar23) goto cf_common_join_006D958E;
                uVar18 = uVar18 - uVar23;
                if (3 < uVar23) {
                  if (((uint)param_1 & 1) != 0) {
                    uVar23 = uVar23 - 1;
                    *(byte *)param_1 = *(byte *)param_10;
                    param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                  }
                  if (((uint)param_1 & 2) != 0) {
                    bVar21 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
                    uVar23 = uVar23 - 2;
                    param_1->field_0x0 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0x0;
                    param_1->field_0001 = bVar21;
                    param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0002;
                  }
                  while (3 < (int)uVar23) {
                    AVar19 = *(AnonShape_006D8A60_D503343B *)param_10;
                    param_10 = param_10 + 4;
                    *param_1 = AVar19;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = param_1 + 1;
                    uVar23 = uVar23 - 4;
                  }
                  if (uVar23 == 0) goto LAB_006d957d;
                }
                if ((char)uVar23 != '\x01') {
                  if ((char)uVar23 != '\x02') {
                    param_1->field_0002 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
                  }
                  param_1->field_0001 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
                }
                bVar21 = *(byte *)param_10;
                param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0x0 + uVar23;
                *(byte *)param_1 = bVar21;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar23);
              }
              else {
                bVar21 = *(byte *)param_10;
                uVar23 = uVar23 & 0xffffff3f;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                STPiece<0,2>(AVar8) = CONCAT11(bVar21,bVar21);
                STPiece<2,2>(AVar8) = 0;
                if ((int)uVar18 < (int)uVar23) goto cf_common_join_006D958E;
                uVar18 = uVar18 - uVar23;
                param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
                if ((bVar21 < (byte)param_9) || (local_14 < bVar21)) {
                  if (3 < uVar23) {
                    if (((uint)param_1 & 1) != 0) {
                      *(byte *)param_1 = bVar21;
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                      uVar23 = uVar23 - 1;
                    }
                    if (((uint)param_1 & 2) != 0) {
                      *(ushort *)param_1 = STPiece<0,2>(AVar8);
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0002;
                      uVar23 = uVar23 - 2;
                    }
                    STPiece<2,2>(AVar8) = STPiece<0,2>(AVar8);
                    while (3 < (int)uVar23) {
                      *param_1 = AVar8;
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = param_1 + 1;
                      uVar23 = uVar23 - 4;
                    }
                    if (uVar23 == 0) goto LAB_006d957d;
                  }
                  bVar21 = STPiece<0,1>(AVar8);
                  if ((char)uVar23 != '\x01') {
                    if ((char)uVar23 != '\x02') {
                      param_1->field_0002 = bVar21;
                    }
                    param_1->field_0001 = bVar21;
                  }
                  *(byte *)param_1 = bVar21;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar23);
                }
                else {
                  AVar19 = *(AnonShape_006D8A60_D503343B *)((uint)param_1 & 0xfffffffc);
                  if (((uint)param_1 & 3) == 0) {
LAB_006d9450:
                    bVar21 = (byte)uVar23;
                    while ('\x03' < (char)bVar21) {
                      *param_1 = (AnonShape_006D8A60_D503343B)
                                 /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                 (CONCAT22(CONCAT11(param_8[(uint)AVar19 >> 8 & 0xff],
                                                    param_8[(uint)AVar19 & 0xff]),
                                           CONCAT11(param_8[(uint)AVar19 >> 0x18],
                                                    param_8[(uint)AVar19 >> 0x10 & 0xff])) << 0x10 |
                                 (uint)CONCAT11(param_8[(uint)AVar19 >> 8 & 0xff],
                                                param_8[(uint)AVar19 & 0xff]));
                      AVar19 = param_1[1];
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = param_1 + 1;
                      bVar21 = bVar21 - 4;
                    }
                    uVar23 = (uint)bVar21;
                    if (bVar21 == 0) goto LAB_006d957d;
                  }
                  else {
                    AVar19 = (AnonShape_006D8A60_D503343B)
                             ((uint)AVar19 >> (((byte)param_1 & 3) << 3));
                    if (3 < uVar23) {
                      if (((uint)param_1 & 1) != 0) {
                        uVar23 = (uint)(byte)((char)uVar23 - 1);
                        *(undefined *)param_1 = param_8[(uint)AVar19 & 0xff];
                        AVar19 = (AnonShape_006D8A60_D503343B)((uint)AVar19 >> 8);
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                      }
                      if (((uint)param_1 & 2) != 0) {
                        uVar23 = (uint)(byte)((char)uVar23 - 2);
                        *(ushort *)param_1 =
                             /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                             CONCAT11(param_8[(uint)AVar19 >> 8 & 0xff],param_8[(uint)AVar19 & 0xff]
                                     );
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0002;
                      }
                      AVar19 = *param_1;
                      goto LAB_006d9450;
                    }
                  }
                  if ((char)uVar23 != '\x01') {
                    if ((char)uVar23 != '\x02') {
                      uVar4 = (uint)AVar19 >> 0x10;
                      AVar19 = (AnonShape_006D8A60_D503343B)((uint)AVar19 & 0xffff);
                      param_1->field_0002 = param_8[uVar4 & 0xff];
                    }
                    param_1->field_0001 = param_8[(uint)AVar19 >> 8 & 0xff];
                  }
                  *(undefined *)param_1 = param_8[(uint)AVar19 & 0xff];
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar23);
                }
              }
LAB_006d957d:
              uVar23 = 0;
              if ((int)uVar18 < 1) goto cf_common_join_006D958E;
              uVar23 = (uint)*(byte *)param_10;
              param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
              local_8 = uVar23;
            } while( true );
          }
          if ((int)uVar23 <= (int)param_6) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_15 = param_15 - uVar23;
              if ((local_8 & 0x80) == 0) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar23);
              }
              else if ((local_8 & 0x40) == 0) {
                if (0 < (int)uVar23) {
                  do {
                    pbVar25 = &param_1->field_0001;
                    bVar21 = *(byte *)param_10;
                    param_10 = param_10 + 1;
                    uVar23 = uVar23 - 1;
                    *(undefined *)param_1 = param_11[bVar21];
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (AnonShape_006D8A60_D503343B *)pbVar25;
                  } while (uVar23 != 0);
                }
              }
              else {
                bVar21 = *(byte *)param_10;
                param_10 = param_10 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)bVar21;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  if (0 < (int)uVar23) {
                    do {
                      pbVar25 = &param_1->field_0001;
                      uVar23 = uVar23 - 1;
                      *(undefined *)param_1 = param_8[*(byte *)param_1];
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = (AnonShape_006D8A60_D503343B *)pbVar25;
                    } while (uVar23 != 0);
                  }
                }
                else if (0 < (int)uVar23) {
                  do {
                    *(undefined *)param_1 = param_11[param_5];
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                    uVar23 = uVar23 - 1;
                  } while (uVar23 != 0);
                }
              }
              if ((int)param_15 < 1) {
                uVar23 = 0;
                break;
              }
              bVar21 = *(byte *)param_10;
              local_8 = (uint)bVar21;
              param_10 = param_10 + 1;
              if ((bVar21 & 0x80) == 0) {
                uVar23 = local_8 & 0x7f;
              }
              else {
                uVar23 = local_8 & 0x3f;
              }
            } while ((int)uVar23 <= (int)param_15);
          }
          uVar23 = uVar23 - param_15;
          if ((local_8 & 0x80) == 0) goto LAB_006d9c24;
          pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
          if ((local_8 & 0x40) == 0) {
            pAVar20_mg3 = param_1;
            if (0 < (int)param_15) {
              do {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg3->field_0001;
                *(undefined *)pAVar20_mg3 = param_11[*(byte *)param_10];
                param_10 = param_10 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                pAVar20_mg3 = param_1;
                pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
              } while (param_15 != 0);
            }
          }
          else if (0 < (int)param_15) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_5 = (uint)*(byte *)param_10;
            pAVar20_mg4 = param_1;
            pAVar26 = (AnonShape_006D8A60_D503343B *)(param_10 + 1);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_5 == param_9) {
              do {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg4->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                *(undefined *)pAVar20_mg4 = param_8[*(byte *)pAVar20_mg4];
                pAVar20_mg4 = param_1;
              } while (param_15 != 0);
            }
            else {
              do {
                *(undefined *)param_1 = param_11[param_5];
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
              } while (param_15 != 0);
            }
          }
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (AnonShape_006D8A60_D503343B *)param_12;
          uVar18 = 0x80 >> ((byte)param_14 & 7);
          if ((int)uVar23 <= (int)param_6) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_15 = param_15 - uVar23;
              if ((local_8 & 0x80) == 0) {
                pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)(&pAVar20_mg0->field_0x0 + uVar23);
                uVar18 = ((uVar18 & 0xff) << 8) >> ((byte)uVar23 & 7);
                if (uVar18 < 0x81) {
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                }
                else {
                  uVar18 = uVar18 >> 8 & 0xff;
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + ((int)uVar23 >> 3));
              }
              else if ((local_8 & 0x40) == 0) {
                if (-1 < (int)(uVar23 - 1)) {
                  do {
                    if ((*(byte *)param_1 & (byte)uVar18) != 0) {
                      *(undefined *)pAVar20_mg0 = param_11[*(byte *)param_10];
                      param_10 = param_10 + 1;
                    }
                    pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg0->field_0001;
                    bVar21 = (byte)uVar18 >> 1;
                    if (bVar21 == 0) {
                      bVar21 = 0x80;
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                    }
                    uVar18 = (uint)bVar21;
                    uVar23 = uVar23 - 1;
                  } while (uVar23 != 0);
                }
              }
              else {
                iVar15 = param_10 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)*(byte *)param_10;
                param_10 = iVar15;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  uVar18 = ((uVar18 & 0xff) << 8) >> ((byte)uVar23 & 7);
                  if (uVar18 < 0x81) {
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                  }
                  else {
                    uVar18 = uVar18 >> 8 & 0xff;
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)
                            (&param_1->field_0x0 + ((int)uVar23 >> 3));
                  pAVar26 = pAVar20_mg0;
                  if (-1 < (int)(uVar23 - 1)) {
                    do {
                      pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)&pAVar26->field_0001;
                      uVar23 = uVar23 - 1;
                      *(undefined *)pAVar26 = param_8[*(byte *)pAVar26];
                      pAVar26 = pAVar20_mg0;
                    } while (uVar23 != 0);
                  }
                }
                else {
                  bVar21 = param_11[param_5];
                  if (-1 < (int)(uVar23 - 1)) {
                    do {
                      if ((*(byte *)param_1 & (byte)uVar18) != 0) {
                        *(byte *)pAVar20_mg0 = bVar21;
                      }
                      pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg0->field_0001;
                      bVar20 = (byte)uVar18 >> 1;
                      if (bVar20 == 0) {
                        bVar20 = 0x80;
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                      }
                      uVar18 = (uint)bVar20;
                      uVar23 = uVar23 - 1;
                    } while (uVar23 != 0);
                  }
                }
              }
              if ((int)param_15 < 1) {
                uVar23 = 0;
                break;
              }
              bVar21 = *(byte *)param_10;
              local_8 = (uint)bVar21;
              param_10 = param_10 + 1;
              if ((bVar21 & 0x80) == 0) {
                uVar23 = local_8 & 0x7f;
              }
              else {
                uVar23 = local_8 & 0x3f;
              }
            } while ((int)uVar23 <= (int)param_15);
          }
          uVar23 = uVar23 - param_15;
          if ((local_8 & 0x80) == 0) {
LAB_006d9a18:
            pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)(&pAVar20_mg0->field_0x0 + param_15);
          }
          else if ((local_8 & 0x40) == 0) {
            if (-1 < (int)(param_15 - 1)) {
              do {
                if ((*(byte *)param_1 & (byte)uVar18) != 0) {
                  *(undefined *)pAVar20_mg0 = param_11[*(byte *)param_10];
                  param_10 = param_10 + 1;
                }
                pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg0->field_0001;
                bVar21 = (byte)uVar18 >> 1;
                uVar18 = (uint)bVar21;
                if (bVar21 == 0) {
                  uVar18 = 0x80;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
              } while (param_15 != 0);
              param_12 = param_12 + param_13;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = pAVar20_mg0;
              pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
              goto cf_common_join_006D9EAC;
            }
          }
          else if (0 < (int)param_15) {
            pAVar26 = (AnonShape_006D8A60_D503343B *)(param_10 + 1);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_5 = (uint)*(byte *)param_10;
            param_10 = (int)pAVar26;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_5 == param_9) {
              if ((int)(param_15 - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg0->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                *(undefined *)pAVar20_mg0 = param_8[*(byte *)pAVar20_mg0];
                pAVar20_mg0 = param_1;
              } while (param_15 != 0);
              param_12 = param_12 + param_13;
            }
            else {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_5 = (uint)(byte)param_11[param_5];
              if ((int)(param_15 - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                if ((*(byte *)param_1 & (byte)uVar18) != 0) {
                  *(undefined *)pAVar20_mg0 = param_11[param_5];
                }
                pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg0->field_0001;
                bVar21 = (byte)uVar18 >> 1;
                uVar18 = (uint)bVar21;
                if (bVar21 == 0) {
                  uVar18 = 0x80;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
              } while (param_15 != 0);
              param_12 = param_12 + param_13;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = pAVar20_mg0;
            }
            goto cf_common_join_006D9EAC;
          }
cf_common_join_006D9A1A:
          param_12 = param_12 + param_13;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = pAVar20_mg0;
          pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
        }
      }
      else {
        if (param_12 != nullptr) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (AnonShape_006D8A60_D503343B *)param_12;
          uVar18 = 0x80 >> ((byte)param_14 & 7);
          if ((int)uVar23 <= (int)param_6) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_15 = param_15 - uVar23;
              if ((local_8 & 0x80) == 0) {
                pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)(&pAVar20_mg0->field_0x0 + uVar23);
                uVar18 = ((uVar18 & 0xff) << 8) >> ((byte)uVar23 & 7);
                if (uVar18 < 0x81) {
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                }
                else {
                  uVar18 = uVar18 >> 8 & 0xff;
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + ((int)uVar23 >> 3));
              }
              else if ((local_8 & 0x40) == 0) {
                if (-1 < (int)(uVar23 - 1)) {
                  do {
                    iVar15 = param_10 + 1;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_5 = (uint)*(byte *)param_10;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    if (param_5 == param_9) {
                      bVar21 = param_8[*(byte *)pAVar20_mg0];
LAB_006d9875:
                      *(byte *)pAVar20_mg0 = bVar21;
                    }
                    else if ((*(byte *)param_1 & (byte)uVar18) != 0) {
                      bVar21 = param_11[param_5];
                      goto LAB_006d9875;
                    }
                    pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg0->field_0001;
                    bVar21 = (byte)uVar18 >> 1;
                    if (bVar21 == 0) {
                      bVar21 = 0x80;
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                    }
                    uVar18 = (uint)bVar21;
                    uVar23 = uVar23 - 1;
                    param_10 = iVar15;
                  } while (uVar23 != 0);
                }
              }
              else {
                iVar15 = param_10 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)*(byte *)param_10;
                param_10 = iVar15;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  uVar18 = ((uVar18 & 0xff) << 8) >> ((byte)uVar23 & 7);
                  if (uVar18 < 0x81) {
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                  }
                  else {
                    uVar18 = uVar18 >> 8 & 0xff;
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)
                            (&param_1->field_0x0 + ((int)uVar23 >> 3));
                  pAVar26 = pAVar20_mg0;
                  if (-1 < (int)(uVar23 - 1)) {
                    do {
                      pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)&pAVar26->field_0001;
                      uVar23 = uVar23 - 1;
                      *(undefined *)pAVar26 = param_8[*(byte *)pAVar26];
                      pAVar26 = pAVar20_mg0;
                    } while (uVar23 != 0);
                  }
                }
                else {
                  bVar21 = param_11[param_5];
                  if (-1 < (int)(uVar23 - 1)) {
                    do {
                      if ((*(byte *)param_1 & (byte)uVar18) != 0) {
                        *(byte *)pAVar20_mg0 = bVar21;
                      }
                      pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg0->field_0001;
                      bVar20 = (byte)uVar18 >> 1;
                      if (bVar20 == 0) {
                        bVar20 = 0x80;
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                      }
                      uVar18 = (uint)bVar20;
                      uVar23 = uVar23 - 1;
                    } while (uVar23 != 0);
                  }
                }
              }
              if ((int)param_15 < 1) {
                uVar23 = 0;
                break;
              }
              bVar21 = *(byte *)param_10;
              local_8 = (uint)bVar21;
              param_10 = param_10 + 1;
              if ((bVar21 & 0x80) == 0) {
                uVar23 = local_8 & 0x7f;
              }
              else {
                uVar23 = local_8 & 0x3f;
              }
            } while ((int)uVar23 <= (int)param_15);
          }
          uVar23 = uVar23 - param_15;
          if ((local_8 & 0x80) == 0) goto LAB_006d9a18;
          if ((local_8 & 0x40) == 0) {
            if (-1 < (int)(param_15 - 1)) {
              do {
                pAVar26 = (AnonShape_006D8A60_D503343B *)(param_10 + 1);
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)*(byte *)param_10;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  bVar21 = param_8[*(byte *)pAVar20_mg0];
LAB_006d99e9:
                  *(byte *)pAVar20_mg0 = bVar21;
                }
                else if ((*(byte *)param_1 & (byte)uVar18) != 0) {
                  bVar21 = param_11[param_5];
                  goto LAB_006d99e9;
                }
                pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg0->field_0001;
                bVar21 = (byte)uVar18 >> 1;
                uVar18 = (uint)bVar21;
                if (bVar21 == 0) {
                  uVar18 = 0x80;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                param_10 = (int)pAVar26;
              } while (param_15 != 0);
              param_12 = param_12 + param_13;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = pAVar20_mg0;
              goto cf_common_join_006D9EAC;
            }
          }
          else if (0 < (int)param_15) {
            pAVar26 = (AnonShape_006D8A60_D503343B *)(param_10 + 1);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_5 = (uint)*(byte *)param_10;
            param_10 = (int)pAVar26;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_5 == param_9) {
              if ((int)(param_15 - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg0->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                *(undefined *)pAVar20_mg0 = param_8[*(byte *)pAVar20_mg0];
                pAVar20_mg0 = param_1;
              } while (param_15 != 0);
              param_12 = param_12 + param_13;
            }
            else {
              bVar21 = param_11[param_5];
              if ((int)(param_15 - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                if ((*(byte *)param_1 & (byte)uVar18) != 0) {
                  *(byte *)pAVar20_mg0 = bVar21;
                }
                pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg0->field_0001;
                bVar20 = (byte)uVar18 >> 1;
                uVar18 = (uint)bVar20;
                if (bVar20 == 0) {
                  uVar18 = 0x80;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
              } while (param_15 != 0);
              param_12 = param_12 + param_13;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = pAVar20_mg0;
            }
            goto cf_common_join_006D9EAC;
          }
          goto cf_common_join_006D9A1A;
        }
        if (param_11 == nullptr) {
          if ((int)uVar23 <= (int)param_6) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_15 = param_15 - uVar23;
              if ((local_8 & 0x80) == 0) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar23);
              }
              else if ((local_8 & 0x40) == 0) {
                if (0 < (int)uVar23) {
                  do {
                    bVar21 = *(byte *)param_10;
                    param_10 = param_10 + 1;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_5 = (uint)bVar21;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    if (param_5 == param_9) {
                      bVar21 = param_8[*(byte *)param_1];
                    }
                    *(byte *)param_1 = bVar21;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                    uVar23 = uVar23 - 1;
                  } while (uVar23 != 0);
                }
              }
              else {
                bVar21 = *(byte *)param_10;
                param_10 = param_10 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)bVar21;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  pAVar20_mg2 = param_1;
                  if (0 < (int)uVar23) {
                    do {
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg2->field_0001;
                      uVar23 = uVar23 - 1;
                      *(undefined *)pAVar20_mg2 = param_8[*(byte *)pAVar20_mg2];
                      pAVar20_mg2 = param_1;
                    } while (uVar23 != 0);
                  }
                }
                else if (0 < (int)uVar23) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  STPiece<2,2>(AVar12) = CONCAT11(bVar21,bVar21);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  STPiece<0,2>(AVar12) = CONCAT11(bVar21,bVar21);
                  puVar18 = param_1;
                  for (uVar18 = uVar23 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                    *puVar18 = AVar12;
                    puVar18 = puVar18 + 1;
                  }
                  for (uVar18 = uVar23 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                    *(byte *)puVar18 = bVar21;
                    puVar18 = (AnonShape_006D8A60_D503343B *)&puVar18->field_0001;
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar23);
                }
              }
              if ((int)param_15 < 1) {
                uVar23 = 0;
                break;
              }
              bVar21 = *(byte *)param_10;
              local_8 = (uint)bVar21;
              param_10 = param_10 + 1;
              if ((bVar21 & 0x80) == 0) {
                uVar23 = local_8 & 0x7f;
              }
              else {
                uVar23 = local_8 & 0x3f;
              }
            } while ((int)uVar23 <= (int)param_15);
          }
          uVar23 = uVar23 - param_15;
          if ((local_8 & 0x80) == 0) goto LAB_006d9c24;
          pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
          if ((local_8 & 0x40) == 0) {
            if (0 < (int)param_15) {
              do {
                bVar21 = *(byte *)param_10;
                param_10 = param_10 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)bVar21;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  bVar21 = param_8[*(byte *)param_1];
                }
                *(byte *)param_1 = bVar21;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
              } while (param_15 != 0);
            }
          }
          else if (0 < (int)param_15) {
            bVar21 = *(byte *)param_10;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_5 = (uint)bVar21;
            temp_3ff146b557 = param_1;
            pAVar26 = (AnonShape_006D8A60_D503343B *)(param_10 + 1);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_5 == param_9) {
              do {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)&temp_3ff146b557->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                *(undefined *)temp_3ff146b557 = param_8[*(byte *)temp_3ff146b557];
                temp_3ff146b557 = param_1;
              } while (param_15 != 0);
            }
            else {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              STPiece<2,2>(AVar13) = CONCAT11(bVar21,bVar21);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              STPiece<0,2>(AVar13) = CONCAT11(bVar21,bVar21);
              temp_3f135a84f2 = param_1;
              for (uVar18 = param_15 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *temp_3f135a84f2 = AVar13;
                temp_3f135a84f2 = temp_3f135a84f2 + 1;
              }
              for (uVar18 = param_15 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(byte *)temp_3f135a84f2 = bVar21;
                temp_3f135a84f2 = (AnonShape_006D8A60_D503343B *)&temp_3f135a84f2->field_0001;
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + param_15);
            }
          }
        }
        else {
          if ((int)uVar23 <= (int)param_6) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_15 = param_15 - uVar23;
              if ((local_8 & 0x80) == 0) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar23);
              }
              else if ((local_8 & 0x40) == 0) {
                if (0 < (int)uVar23) {
                  do {
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_5 = (uint)*(byte *)param_10;
                    param_10 = param_10 + 1;
                    puVar22 = param_11;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    if (param_5 == param_9) {
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_5 = (uint)*(byte *)param_1;
                      puVar22 = param_8;
                    }
                    *(undefined *)param_1 = puVar22[param_5];
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                    uVar23 = uVar23 - 1;
                  } while (uVar23 != 0);
                }
              }
              else {
                bVar21 = *(byte *)param_10;
                param_10 = param_10 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)bVar21;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  if (0 < (int)uVar23) {
                    do {
                      pbVar25 = &param_1->field_0001;
                      uVar23 = uVar23 - 1;
                      *(undefined *)param_1 = param_8[*(byte *)param_1];
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = (AnonShape_006D8A60_D503343B *)pbVar25;
                    } while (uVar23 != 0);
                  }
                }
                else {
                  bVar21 = param_11[param_5];
                  if (0 < (int)uVar23) {
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    STPiece<2,2>(AVar10) = CONCAT11(bVar21,bVar21);
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    STPiece<0,2>(AVar10) = CONCAT11(bVar21,bVar21);
                    temp_3f248b4d74 = param_1;
                    for (uVar18 = uVar23 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                      *temp_3f248b4d74 = AVar10;
                      temp_3f248b4d74 = temp_3f248b4d74 + 1;
                    }
                    for (uVar18 = uVar23 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                      *(byte *)temp_3f248b4d74 = bVar21;
                      temp_3f248b4d74 = (AnonShape_006D8A60_D503343B *)&temp_3f248b4d74->field_0001;
                    }
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar23);
                  }
                }
              }
              if ((int)param_15 < 1) {
                uVar23 = 0;
                break;
              }
              bVar21 = *(byte *)param_10;
              local_8 = (uint)bVar21;
              param_10 = param_10 + 1;
              if ((bVar21 & 0x80) == 0) {
                uVar23 = local_8 & 0x7f;
              }
              else {
                uVar23 = local_8 & 0x3f;
              }
            } while ((int)uVar23 <= (int)param_15);
          }
          uVar23 = uVar23 - param_15;
          if ((local_8 & 0x80) == 0) {
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_006d9c24:
            param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + param_15);
            pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
          }
          else {
            pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
            if ((local_8 & 0x40) == 0) {
              if (0 < (int)param_15) {
                do {
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_5 = (uint)*(byte *)param_10;
                  param_10 = param_10 + 1;
                  puVar22 = param_11;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  if (param_5 == param_9) {
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_5 = (uint)*(byte *)param_1;
                    puVar22 = param_8;
                  }
                  *(undefined *)param_1 = puVar22[param_5];
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_15 = param_15 - 1;
                  pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
                } while (param_15 != 0);
              }
            }
            else if (0 < (int)param_15) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_5 = (uint)*(byte *)param_10;
              temp_3fa16318a4 = param_1;
              pAVar26 = (AnonShape_006D8A60_D503343B *)(param_10 + 1);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              if (param_5 == param_9) {
                do {
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)&temp_3fa16318a4->field_0001;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_15 = param_15 - 1;
                  *(undefined *)temp_3fa16318a4 = param_8[*(byte *)temp_3fa16318a4];
                  temp_3fa16318a4 = param_1;
                } while (param_15 != 0);
              }
              else {
                uVar16 = param_11[param_5];
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                STPiece<2,2>(AVar11) = CONCAT11(uVar16,uVar16);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                STPiece<0,2>(AVar11) = CONCAT11(uVar16,uVar16);
                temp_3f38b4ca47 = param_1;
                for (uVar18 = param_15 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *temp_3f38b4ca47 = AVar11;
                  temp_3f38b4ca47 = temp_3f38b4ca47 + 1;
                }
                for (uVar18 = param_15 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *(undefined1 *)temp_3f38b4ca47 = uVar16;
                  temp_3f38b4ca47 = (AnonShape_006D8A60_D503343B *)&temp_3f38b4ca47->field_0001;
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + param_15);
              }
            }
          }
        }
      }
    }
    goto cf_common_join_006D9EAC;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + param_2);
  goto LAB_006d9f11;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
cf_common_join_006D8DA5:
  param_1 = pAVar16;
  pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
  if ((int)uVar18 < 1) goto cf_common_join_006D9EAC;
  uVar23 = uVar23 - uVar18;
  if ((local_8 & 0x80) == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (AnonShape_006D8A60_D503343B *)((int)&pAVar16->field_0x0 + uVar18);
    goto cf_common_join_006D9EAC;
  }
  if ((local_8 & 0x40) != 0) {
    bVar21 = *(byte *)param_10;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    STPiece<0,2>(AVar7) = CONCAT11(bVar21,bVar21);
    STPiece<2,2>(AVar7) = 0;
    pAVar26 = (AnonShape_006D8A60_D503343B *)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
    if (3 < (int)uVar18) {
      if (((uint)pAVar16 & 1) != 0) {
        *(byte *)pAVar16 = bVar21;
        pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0001;
        uVar18 = uVar18 - 1;
      }
      if (((uint)pAVar16 & 2) != 0) {
        *(ushort *)pAVar16 = STPiece<0,2>(AVar7);
        pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0002;
        uVar18 = uVar18 - 2;
      }
      STPiece<2,2>(AVar7) = STPiece<0,2>(AVar7);
      while (3 < (int)uVar18) {
        *pAVar16 = AVar7;
        pAVar16 = pAVar16 + 1;
        uVar18 = uVar18 - 4;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = pAVar16;
      if (uVar18 == 0) goto cf_common_join_006D9EAC;
    }
    bVar21 = STPiece<0,1>(AVar7);
    if ((char)uVar18 != '\x01') {
      if ((char)uVar18 != '\x02') {
        pAVar16->field_0002 = bVar21;
      }
      pAVar16->field_0001 = bVar21;
    }
    *(byte *)pAVar16 = bVar21;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (AnonShape_006D8A60_D503343B *)(&pAVar16->field_0x0 + uVar18);
    goto cf_common_join_006D9EAC;
  }
  bVar21 = *(byte *)param_10;
  if ((bVar21 < (byte)param_9) || (local_14 < bVar21)) {
    if (3 < (int)uVar18) {
      if (((uint)pAVar16 & 1) != 0) {
        *(byte *)pAVar16 = *(byte *)param_10;
        param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
        pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0001;
        uVar18 = uVar18 - 1;
      }
      if (((uint)pAVar16 & 2) != 0) {
        bVar21 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
        pAVar16->field_0x0 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0x0;
        pAVar16->field_0001 = bVar21;
        param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
        pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0002;
        uVar18 = uVar18 - 2;
      }
      while (3 < (int)uVar18) {
        AVar19 = *(AnonShape_006D8A60_D503343B *)param_10;
        param_10 = param_10 + 4;
        *pAVar16 = AVar19;
        pAVar16 = pAVar16 + 1;
        uVar18 = uVar18 - 4;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = pAVar16;
      pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
      if (uVar18 == 0) goto cf_common_join_006D9EAC;
    }
    if ((char)uVar18 != '\x01') {
      if ((char)uVar18 != '\x02') {
        pAVar16->field_0002 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
      }
      pAVar16->field_0001 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
    }
    *(byte *)pAVar16 = *(byte *)param_10;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (AnonShape_006D8A60_D503343B *)(&pAVar16->field_0x0 + uVar18);
    pAVar26 = (AnonShape_006D8A60_D503343B *)
              ((int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0x0 + uVar18);
    goto cf_common_join_006D9EAC;
  }
  AVar19 = *(AnonShape_006D8A60_D503343B *)((uint)pAVar16 & 0xfffffffc);
  if (((uint)pAVar16 & 3) == 0) {
LAB_006d8e9b:
    cVar14 = (char)uVar18;
    while ('\x03' < cVar14) {
      bVar21 = *(byte *)param_10;
      pbVar25 = st::pointer_boundary_cast<byte *>(&((AnonShape_006D8A60_D503343B *)param_10)->field_0001);
      pbVar1 = st::pointer_boundary_cast<byte *>(&((AnonShape_006D8A60_D503343B *)param_10)->field_0002);
      puVar2 = st::pointer_boundary_cast<undefined1 *>(&((AnonShape_006D8A60_D503343B *)param_10)->field_0x3);
      param_10 = param_10 + 4;
      *pAVar16 = (AnonShape_006D8A60_D503343B)
                 /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                 (CONCAT22(CONCAT11(param_8[(uint)CONCAT11(*pbVar25,AVar19.field_0001) +
                                            param_9 * -0x100],
                                    param_8[(uint)CONCAT11(bVar21,STPiece<0,1>(AVar19)) + param_9 * -0x100])
                           ,CONCAT11(param_8[(uint)CONCAT11(*puVar2,STPiece<3,1>(AVar19)) + param_9 * -0x100
                                            ],param_8[(uint)CONCAT11(*pbVar1,AVar19.field_0002) +
                                                      param_9 * -0x100])) << 0x10 |
                 (uint)CONCAT11(param_8[(uint)CONCAT11(*pbVar25,AVar19.field_0001) +
                                        param_9 * -0x100],
                                param_8[(uint)CONCAT11(bVar21,STPiece<0,1>(AVar19)) + param_9 * -0x100]));
      AVar19 = pAVar16[1];
      pAVar16 = pAVar16 + 1;
      cVar14 = cVar14 + -4;
    }
    uVar18 = STReplaceLowByte((uint32_t)(uVar18), (uint8_t)(cVar14));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = pAVar16;
    pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
    if (cVar14 == '\0') goto cf_common_join_006D9EAC;
  }
  else {
    AVar19 = (AnonShape_006D8A60_D503343B)((uint)AVar19 >> (((byte)pAVar16 & 3) << 3));
    if (3 < uVar18) {
      if (((uint)pAVar16 & 1) != 0) {
        uVar18 = STReplaceLowByte((uint32_t)(uVar18), (uint8_t)((char)uVar18 + -1));
        param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
        *(undefined *)pAVar16 = param_8[(uint)CONCAT11(bVar21,STPiece<0,1>(AVar19)) + param_9 * -0x100];
        AVar19 = (AnonShape_006D8A60_D503343B)((uint)AVar19 >> 8);
        pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0001;
      }
      if (((uint)pAVar16 & 2) != 0) {
        bVar21 = *(byte *)param_10;
        pbVar25 = st::pointer_boundary_cast<byte *>(&((AnonShape_006D8A60_D503343B *)param_10)->field_0001);
        uVar18 = STReplaceLowByte((uint32_t)(uVar18), (uint8_t)((char)uVar18 + -2));
        param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
        *(ushort *)pAVar16 =
             /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
             CONCAT11(param_8[(uint)CONCAT11(*pbVar25,AVar19.field_0001) + param_9 * -0x100],
                      param_8[(uint)CONCAT11(bVar21,STPiece<0,1>(AVar19)) + param_9 * -0x100]);
        pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0002;
      }
      AVar19 = *pAVar16;
      goto LAB_006d8e9b;
    }
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0001;
  *(undefined *)pAVar16 = param_8[(uint)CONCAT11(*(byte *)param_10,STPiece<0,1>(AVar19)) + param_9 * -0x100]
  ;
  uVar17 = STPiece<1,2>(AVar19);
  pAVar26 = (AnonShape_006D8A60_D503343B *)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
  if (uVar18 != 1) {
    if (((uint)param_1 & 3) == 0) {
      uVar17 = SUB42(*param_1,0);
    }
    pbVar25 = &pAVar16->field_0002;
    *(undefined *)param_1 =
         /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
         param_8[(uint)CONCAT11(((AnonShape_006D8A60_D503343B *)param_10)->field_0001,(char)uVar17)
                 + param_9 * -0x100];
    uVar16 = (undefined1)((ushort)uVar17 >> 8);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (AnonShape_006D8A60_D503343B *)pbVar25;
    pAVar26 = (AnonShape_006D8A60_D503343B *)&((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
    if (uVar18 != 2) {
      if (((uint)pbVar25 & 3) == 0) {
        uVar16 = (undefined1)*(undefined4 *)pbVar25;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0x3;
      *pbVar25 = param_8[(uint)CONCAT11(((AnonShape_006D8A60_D503343B *)param_10)->field_0002,uVar16
                                       ) + param_9 * -0x100];
      pAVar26 = (AnonShape_006D8A60_D503343B *)&((AnonShape_006D8A60_D503343B *)param_10)->field_0x3
      ;
    }
  }
  goto cf_common_join_006D9EAC;
cf_common_join_006D958E:
  pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
  if ((int)uVar18 < 1) goto cf_common_join_006D9EAC;
  uVar23 = uVar23 - uVar18;
  if ((local_8 & 0x80) == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar18);
    goto cf_common_join_006D9EAC;
  }
  if ((local_8 & 0x40) == 0) {
    if (3 < (int)uVar18) {
      if (((uint)param_1 & 1) != 0) {
        *(byte *)param_1 = *(byte *)param_10;
        param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
        uVar18 = uVar18 - 1;
      }
      if (((uint)param_1 & 2) != 0) {
        bVar21 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
        param_1->field_0x0 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0x0;
        param_1->field_0001 = bVar21;
        param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0002;
        uVar18 = uVar18 - 2;
      }
      while (3 < (int)uVar18) {
        AVar19 = *(AnonShape_006D8A60_D503343B *)param_10;
        param_10 = param_10 + 4;
        *param_1 = AVar19;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
        uVar18 = uVar18 - 4;
      }
      pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
      if (uVar18 == 0) goto cf_common_join_006D9EAC;
    }
    if ((char)uVar18 != '\x01') {
      if ((char)uVar18 != '\x02') {
        param_1->field_0002 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
      }
      param_1->field_0001 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
    }
    *(byte *)param_1 = *(byte *)param_10;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar18);
    pAVar26 = (AnonShape_006D8A60_D503343B *)
              ((int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0x0 + uVar18);
    goto cf_common_join_006D9EAC;
  }
  bVar21 = *(byte *)param_10;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  STPiece<0,2>(AVar9) = CONCAT11(bVar21,bVar21);
  STPiece<2,2>(AVar9) = 0;
  pAVar26 = (AnonShape_006D8A60_D503343B *)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
  if ((bVar21 < (byte)param_9) || (local_14 < bVar21)) {
    if (3 < (int)uVar18) {
      if (((uint)param_1 & 1) != 0) {
        *(byte *)param_1 = bVar21;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
        uVar18 = uVar18 - 1;
      }
      if (((uint)param_1 & 2) != 0) {
        *(ushort *)param_1 = STPiece<0,2>(AVar9);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0002;
        uVar18 = uVar18 - 2;
      }
      STPiece<2,2>(AVar9) = STPiece<0,2>(AVar9);
      while (3 < (int)uVar18) {
        *param_1 = AVar9;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
        uVar18 = uVar18 - 4;
      }
      if (uVar18 == 0) goto cf_common_join_006D9EAC;
    }
    bVar21 = STPiece<0,1>(AVar9);
    if ((char)uVar18 != '\x01') {
      if ((char)uVar18 != '\x02') {
        param_1->field_0002 = bVar21;
      }
      param_1->field_0001 = bVar21;
    }
    *(byte *)param_1 = bVar21;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar18);
    goto cf_common_join_006D9EAC;
  }
  AVar19 = *(AnonShape_006D8A60_D503343B *)((uint)param_1 & 0xfffffffc);
  if (((uint)param_1 & 3) == 0) {
LAB_006d9621:
    cVar14 = (char)uVar18;
    while ('\x03' < cVar14) {
      *param_1 = (AnonShape_006D8A60_D503343B)
                 /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                 (CONCAT22(CONCAT11(param_8[(uint)AVar19 >> 8 & 0xff],param_8[(uint)AVar19 & 0xff]),
                           CONCAT11(param_8[(uint)AVar19 >> 0x18],
                                    param_8[(uint)AVar19 >> 0x10 & 0xff])) << 0x10 |
                 (uint)CONCAT11(param_8[(uint)AVar19 >> 8 & 0xff],param_8[(uint)AVar19 & 0xff]));
      AVar19 = param_1[1];
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 + 1;
      cVar14 = cVar14 + -4;
    }
    uVar18 = STReplaceLowByte((uint32_t)(uVar18), (uint8_t)(cVar14));
    if (cVar14 == '\0') goto cf_common_join_006D9EAC;
  }
  else {
    AVar19 = (AnonShape_006D8A60_D503343B)((uint)AVar19 >> (((byte)param_1 & 3) << 3));
    if (3 < uVar18) {
      if (((uint)param_1 & 1) != 0) {
        uVar18 = STReplaceLowByte((uint32_t)(uVar18), (uint8_t)((char)uVar18 + -1));
        pAVar26 = (AnonShape_006D8A60_D503343B *)
                  &((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
        *(undefined *)param_1 = param_8[(uint)AVar19 & 0xff];
        AVar19 = (AnonShape_006D8A60_D503343B)((uint)AVar19 >> 8);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
      }
      if (((uint)param_1 & 2) != 0) {
        uVar18 = STReplaceLowByte((uint32_t)(uVar18), (uint8_t)((char)uVar18 + -2));
        *(ushort *)param_1 =
             /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
             CONCAT11(param_8[(uint)AVar19 >> 8 & 0xff],param_8[(uint)AVar19 & 0xff]);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0002;
      }
      AVar19 = *param_1;
      goto LAB_006d9621;
    }
  }
  if ((char)uVar18 != '\x01') {
    if ((char)uVar18 != '\x02') {
      uVar4 = (uint)AVar19 >> 0x10;
      AVar19 = (AnonShape_006D8A60_D503343B)((uint)AVar19 & 0xffff);
      param_1->field_0002 = param_8[uVar4 & 0xff];
    }
    param_1->field_0001 = param_8[(uint)AVar19 >> 8 & 0xff];
  }
  *(undefined *)param_1 = param_8[(uint)AVar19 & 0xff];
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar18);
cf_common_join_006D9EAC:
  param_10 = (int)pAVar26;
  bVar21 = (byte)local_8;
  iVar15 = (sVar3 - param_4) - param_6;
  if ((int)uVar23 < iVar15) {
    do {
      iVar15 = iVar15 - uVar23;
      if (((byte)local_8 & 0xc0) == 0x80) {
        param_10 = param_10 + uVar23;
      }
      bVar21 = *(byte *)param_10;
      local_8 = (uint)bVar21;
      uVar23 = local_8;
      iVar5 = param_10 + 1;
      if (((bVar21 & 0x80) != 0) && (uVar23 = local_8 & 0x3f, (bVar21 & 0x40) != 0)) {
        iVar5 = param_10 + 2;
      }
      param_10 = iVar5;
    } while ((int)uVar23 < iVar15);
  }
  if ((bVar21 & 0xc0) == 0x80) {
    param_10 = param_10 + iVar15;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (AnonShape_006D8A60_D503343B *)((int)param_1 + (param_2 - param_6));
LAB_006d9f11:
  if (param_7 < 1) {
    return;
  }
  goto LAB_006d8b04;
}

// 006D9F30 FUN_006d9f30
#line 4 "decomp/ST.exe/functions/006D9F30/decomp.c"
int st::fn_006D9F30(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if ((param_1[0x71] < param_4) || (param_1[0x72] < param_5)) {
    piVar1 = (int *)param_1[0x73];
    if (piVar1 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    if (param_1[0x71] < param_4) {
      param_1[0x71] = param_4;
    }
    if (param_1[0x72] < param_5) {
      param_1[0x72] = param_5;
    }
    iVar2 = st::fn_006BB6C0(*param_1,st::pointer_boundary_cast<undefined4 *>(param_1 + 0x73),param_1[0x71],param_1[0x72],-1,0x800);
    if (iVar2 != 0) {
      param_1[0x71] = 0;
      param_1[0x72] = 0;
      param_1[0x73] = 0;
      return iVar2;
    }
  }
  local_24 = 0;
  local_20 = 0;
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_2 + param_4;
  local_8 = param_3 + param_5;
  local_1c = param_4;
  local_18 = param_5;
  iVar2 = 0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  while (iVar3 = (**(code **)(*(int *)param_1[0x73] + 0x14))
                           ((int *)param_1[0x73],&local_24,*(undefined4 *)(*param_1 + 0x44),
                            &local_14,0x1000000,0), iVar3 != 0) {
    if (iVar3 == -0x7789fe3e) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)param_1[0x73] + 0x6c))((int *)param_1[0x73]);
      st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)*param_1);
    }
    else {
      if (((iVar3 != -0x7789ff60) && (iVar3 != -0x7789fe52)) || (iVar2 != 0)) break;
      st::external_00000050(2);
    }
    iVar2 = iVar2 + 1;
    if (1 < iVar2) break;
  }
  if ((iVar3 != -0x7789ff60) && (iVar3 != -0x7789fe52)) {
    return iVar3;
  }
  return 0;
}

// 006DA080 FUN_006da080
#line 4 "decomp/ST.exe/functions/006DA080/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006CEF60 -> 006DA080 @ 006CF7E7 */

int st::fn_006DA080(int *param_1,uint *param_2,int param_3,int param_4,int param_5,byte *param_6,
                int param_7,int param_8,int param_9,byte *param_10,undefined1 *param_11)

{
  alignas(4) byte st_stack_frame[96];

  int iVar1;
  int iVar2;
  uint local_2c [3];
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_0079df38);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 36);
  iVar2 = 0;
  local_2c[0] = 0;
  local_20 = 0;
  ExceptionList = &local_14;
  do {
    iVar1 = st::fn_006BBE40((int *)param_1[0x73],local_2c,&local_20,0x10);
    if (iVar1 == 0) goto LAB_006da0f3;
    if (iVar1 != -0x7789fe3e) break;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)param_1[0x73] + 0x6c))((int *)param_1[0x73]);
    st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)*param_1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  if (iVar1 == 0) {
LAB_006da0f3:
    local_2c[0] = st::machine_word_boundary_cast<uint>(local_2c[0] + local_20 * param_5 + param_4);
    local_8 = 0;
    st::fn_006DA1A0((int)param_2,param_3,local_2c[0],local_20,param_6,param_7,param_8,param_9,param_10,
                 param_11);
    local_8 = 0xffffffff;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)param_1[0x73] + 0x80))((int *)param_1[0x73],0);
  }
  if ((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) {
    ExceptionList = local_14;
    return iVar1;
  }
  ExceptionList = local_14;
  return 0;
}

// 006DA1A0 FUN_006da1a0
#line 4 "decomp/ST.exe/functions/006DA1A0/decomp.c"
/* WARNING: Type propagation algorithm not settling */

void st::fn_006DA1A0(int param_1,int param_2,int param_3,int param_4,byte *param_5,int param_6,
                 int param_7,int param_8,byte *param_9,undefined1 *param_10)

{
  short sVar1;
  int *piVar2;
  uint local_EAX_117;
  uint uVar3;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_8c [31];
  int *local_10;
  int local_c;
  int local_8;
  byte *pbVar4;

  if ((2 < param_8) && (2 < (int)param_9)) {
    local_8 = (int)param_10 * 2 + 1;
    if (param_8 <= local_8) {
      local_8 = 3;
    }
    if ((int)param_9 <= local_8) {
      local_8 = 3;
    }
    iVar11 = local_8;
    local_c = 0x1f;
    local_10 = local_8c;
    iVar12 = (local_8 + -1) / 2;
    iVar10 = (local_8 + -1) / 2;
    do {
      local_EAX_117 = st::fn_0072E6C0();
      iVar6 = (int)local_EAX_117 % local_8;
      uVar3 = st::fn_0072E6C0();
      piVar2 = local_10;
      local_10 = local_10 + 1;
      *piVar2 = ((int)uVar3 % iVar11 - iVar10) * param_2 + (iVar6 - iVar12);
      local_c = local_c + -1;
    } while (local_c != 0);
    iVar6 = param_7 + iVar10;
    iVar7 = param_8 + (1 - local_8);
    pbVar3 = param_9 + (1 - iVar11);
    pbVar9 = (byte *)(iVar10 * param_2 + iVar12 + param_1);
    param_10 = (undefined1 *)(iVar10 * param_4 + iVar12 + param_3);
    param_7 = 0;
    if (iVar6 < 1) {
      param_9 = param_5 + (param_5[0xd] >> 1 & 0xe) + 0x16;
    }
    else {
      param_9 = st::fn_006CFE10(param_5,iVar6);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    sVar1 = *(short *)(param_5 + 0x12);
    local_c = (int)sVar1;
    param_1 = (int)pbVar3;
    if (0 < (int)pbVar3) {
      do {
        uVar8 = (uint)*param_9;
        param_9 = param_9 + 1;
        iVar11 = param_6 + iVar12;
        if (uVar8 == 0) {
          pbVar9 = pbVar9 + param_2;
          param_10 = param_10 + param_4;
        }
        else {
          while( true ) {
            while ((uVar8 & 0x80) == 0) {
              uVar4 = uVar8 & 0x7f;
              if (iVar11 < (int)uVar4) goto LAB_006da325;
              bVar5 = *param_9;
              param_9 = param_9 + 1;
              iVar11 = iVar11 - uVar4;
              uVar8 = (uint)bVar5;
            }
            uVar4 = uVar8 & 0x3f;
            if (iVar11 < (int)uVar4) break;
            if ((uVar8 & 0x40) == 0) {
              uVar8 = (uint)param_9[uVar4];
              param_9 = param_9 + uVar4 + 1;
              iVar11 = iVar11 - uVar4;
            }
            else {
              uVar8 = (uint)param_9[1];
              param_9 = param_9 + 2;
              iVar11 = iVar11 - uVar4;
            }
          }
LAB_006da325:
          param_5 = (byte *)(uVar4 - iVar11);
          if (((byte)uVar8 & 0xc0) == 0x80) {
            param_9 = param_9 + iVar11;
          }
          iVar11 = iVar7;
          if ((int)param_5 <= iVar7) {
            do {
              iVar11 = iVar11 - (int)param_5;
              if ((uVar8 & 0x80) == 0) {
                pbVar9 = pbVar9 + (int)param_5;
                param_10 = param_10 + (int)param_5;
              }
              else {
                if ((uVar8 & 0x40) == 0) {
                  param_9 = param_9 + (int)param_5;
                }
                else {
                  param_9 = param_9 + 1;
                }
                if (0 < (int)param_5) {
                  do {
                    pbVar9[local_8c[param_7]] = *param_10;
                    param_7 = param_7 + 1;
                    pbVar9 = pbVar9 + 1;
                    param_10 = param_10 + 1;
                    if (0x1e < param_7) {
                      param_7 = 0;
                    }
                    param_5 = param_5 + -1;
                  } while (param_5 != nullptr);
                }
              }
              if (iVar11 < 1) {
                param_5 = nullptr;
                break;
              }
              bVar5 = *param_9;
              uVar8 = (uint)bVar5;
              param_9 = param_9 + 1;
              if ((bVar5 & 0x80) == 0) {
                param_5 = (byte *)(uVar8 & 0x7f);
              }
              else {
                param_5 = (byte *)(uVar8 & 0x3f);
              }
            } while ((int)param_5 <= iVar11);
          }
          uVar4 = (int)param_5 - iVar11;
          bVar5 = (byte)uVar8;
          if ((uVar8 & 0x80) == 0) {
            pbVar9 = pbVar9 + iVar11;
            param_10 = param_10 + iVar11;
          }
          else {
            if ((uVar8 & 0x40) == 0) {
              param_9 = param_9 + iVar11;
            }
            else if (0 < iVar11) {
              param_9 = param_9 + 1;
            }
            if (0 < iVar11) {
              do {
                pbVar9[local_8c[param_7]] = *param_10;
                param_7 = param_7 + 1;
                pbVar9 = pbVar9 + 1;
                param_10 = param_10 + 1;
                if (0x1e < param_7) {
                  param_7 = 0;
                }
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
            }
          }
          iVar11 = ((int)sVar1 - (param_6 + iVar12)) - iVar7;
          if ((int)uVar4 < iVar11) {
            do {
              iVar11 = iVar11 - uVar4;
              pbVar4 = param_9;
              if (((byte)uVar8 & 0xc0) == 0x80) {
                pbVar4 = param_9 + uVar4;
              }
              bVar5 = *pbVar4;
              uVar8 = (uint)bVar5;
              param_9 = pbVar4 + 1;
              uVar4 = uVar8;
              if (((bVar5 & 0x80) != 0) && (uVar4 = uVar8 & 0x3f, (bVar5 & 0x40) != 0)) {
                param_9 = pbVar4 + 2;
              }
            } while ((int)uVar4 < iVar11);
          }
          if ((bVar5 & 0xc0) == 0x80) {
            param_9 = param_9 + iVar11;
          }
          pbVar9 = pbVar9 + (param_2 - iVar7);
          param_10 = param_10 + (param_4 - iVar7);
        }
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
  }
  return;
}

// 006DA4F0 FUN_006da4f0
#line 4 "decomp/ST.exe/functions/006DA4F0/decomp.c"
void st::fn_006DA4F0(ushort *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 uint *param_7)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ushort *puVar6;
  uint local_14;
  uint local_10;
  int local_8;

  if (param_7 == nullptr) {
    local_10 = 0xf800;
    local_14 = 0x7e0;
    uVar1 = 0x1f;
  }
  else {
    local_10 = *param_7;
    local_14 = param_7[1];
    uVar1 = param_7[2];
  }
  iVar3 = -1;
  param_7 = (uint *)0xffffffff;
  local_8 = -1;
  bVar2 = 0xff;
  if (local_10 == 0xf800) {
    param_7 = nullptr;
  }
  else if (local_10 == 0x7c00) {
    param_7 = (uint *)0x1;
  }
  if (local_14 == 0x7e0) {
    local_8 = 5;
  }
  else if (local_14 == 0x3e0) {
    local_8 = 6;
  }
  if (uVar1 == 0x1f) {
    iVar3 = 0xb;
    bVar2 = 0xb;
  }
  if (param_7 == (uint *)0xffffffff) {
    STPiece<0,1>(param_7) = 0;
    for (uVar4 = local_10; (uVar4 & 0x8000) == 0; uVar4 = uVar4 << 1) {
      STPiece<0,1>(param_7) = (byte)param_7 + 1;
    }
  }
  if (local_8 == -1) {
    STPiece<0,1>(local_8) = 0;
    for (uVar4 = local_14; (uVar4 & 0x8000) == 0; uVar4 = uVar4 << 1) {
      STPiece<0,1>(local_8) = (byte)local_8 + 1;
    }
  }
  if (iVar3 == -1) {
    bVar2 = 0;
    for (uVar4 = uVar1; (uVar4 & 0x8000) == 0; uVar4 = uVar4 << 1) {
      bVar2 = bVar2 + 1;
    }
  }
  if (0 < param_6) {
    do {
      iVar3 = param_5;
      pbVar5 = param_3;
      puVar6 = param_1;
      if (0 < param_5) {
        do {
          param_1 = puVar6 + 1;
          param_3 = pbVar5 + 3;
          iVar3 = iVar3 + -1;
          *puVar6 = (ushort)((int)((uint)pbVar5[2] << 8) >> ((byte)param_7 & 0x1f)) &
                    (ushort)local_10 |
                    (ushort)((int)((uint)pbVar5[1] << 8) >> ((byte)local_8 & 0x1f)) &
                    (ushort)local_14 |
                    (ushort)((int)((uint)*pbVar5 << 8) >> (bVar2 & 0x1f)) & (ushort)uVar1;
          pbVar5 = param_3;
          puVar6 = param_1;
        } while (iVar3 != 0);
      }
      param_1 = (ushort *)((int)param_1 + param_2 + param_5 * -2);
      param_3 = param_3 + param_4 + param_5 * -3;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}

// 006DA660 FUN_006da660
#line 4 "decomp/ST.exe/functions/006DA660/decomp.c"
void __cdecl
st::fn_006DA660(undefined4 param_1,undefined4 param_2,char *param_3,byte *param_4,int param_5,
            uint param_6,int param_7,int param_8)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int local_8;

  uVar9 = 0;
  do {
    local_8 = param_7;
    cVar2 = *param_3;
    param_3 = param_3 + 1;
    uVar9 = STReplaceLowByte((uint32_t)(uVar9), (uint8_t)(cVar2));
    if (cVar2 != '\0') {
      pbVar10 = param_4 + 1;
      bVar4 = (byte)param_6 & 7;
      bVar4 = *param_4 << bVar4 | *param_4 >> 8 - bVar4;
      uVar6 = param_6 ^ 7;
      while( true ) {
        iVar7 = uVar6 + 1;
        if ((uVar9 & 0x80) != 0) {
          if ((uVar9 & 0x40) == 0) {
            uVar9 = uVar9 & 0xffffff3f;
            if ((int)uVar9 <= iVar7) {
              if (bVar4 == 0xaa) {
                    /* WARNING: Could not recover jumptable at 0x006da9bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
                (**(code **)(&DAT_006dabfb + uVar9 * 4))();
                return;
              }
              if (bVar4 == 0x55) {
                    /* WARNING: Could not recover jumptable at 0x006da9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
                (**(code **)(&DAT_006dac1f + uVar9 * 4))();
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x006da9b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
              (**(code **)(&DAT_006dac43 + uVar9 * 4))();
              return;
            }
            if (bVar4 == 0xaa) {
                    /* WARNING: Could not recover jumptable at 0x006da85a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
              (**(code **)(&DAT_006dab8f + iVar7 * 4))();
              return;
            }
            if (bVar4 == 0x55) {
                    /* WARNING: Could not recover jumptable at 0x006da879. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
              (**(code **)(&DAT_006dabb3 + iVar7 * 4))();
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x006da853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(&DAT_006dabd7 + iVar7 * 4))();
            return;
          }
          uVar9 = uVar9 & 0xffffff3f;
          if ((int)uVar9 <= iVar7) {
            if (bVar4 == 0xaa) {
                    /* WARNING: Could not recover jumptable at 0x006da7bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
              (**(code **)(&DAT_006dab23 + uVar9 * 4))();
              return;
            }
            if (bVar4 == 0x55) {
                    /* WARNING: Could not recover jumptable at 0x006da7d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
              (**(code **)(&DAT_006dab47 + uVar9 * 4))();
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x006da7b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(&DAT_006dab6b + uVar9 * 4))();
            return;
          }
          if (bVar4 == 0xaa) {
                    /* WARNING: Could not recover jumptable at 0x006da6c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(&DAT_006daab7 + iVar7 * 4))();
            return;
          }
          if (bVar4 == 0x55) {
                    /* WARNING: Could not recover jumptable at 0x006da6d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(&DAT_006daadb + iVar7 * 4))();
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x006da6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(&DAT_006daaff + iVar7 * 4))();
          return;
        }
        local_8 = local_8 - uVar9;
        uVar8 = (uVar6 ^ 7) + uVar9;
        uVar9 = uVar8 >> 3;
        bVar5 = (byte)uVar8 & 7;
        pbVar1 = pbVar10 + uVar9;
        pbVar10 = pbVar10 + uVar9;
        bVar4 = *pbVar1 << bVar5 | *pbVar1 >> 8 - bVar5;
        uVar6 = (uint)(bVar5 ^ 7);
        if (local_8 < 1) break;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar9 = CONCAT31((uint3)(uVar8 >> 0xb),*param_3);
        param_3 = param_3 + 1;
      }
      param_4 = param_4 + param_5;
    }
    iVar7 = param_8 + -1;
    bVar3 = param_8 < 1;
    param_8 = iVar7;
    if (iVar7 == 0 || bVar3) {
      return;
    }
  } while( true );
}

// 006DAC70 FUN_006dac70
#line 4 "decomp/ST.exe/functions/006DAC70/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 006D3D80 -> 006DAC70 @ 006D4097; literal 0 at 006D4087 | 006D3D80 -> 006DAC70 @
   006D4178; literal 0 at 006D416E */

void st::fn_006DAC70(undefined1 *param_1,int param_2,byte *param_3,int param_4,byte param_5,int param_6
                 ,int param_7,byte param_8)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;

  iVar1 = param_4 + 7;
  if (0 < param_7) {
    do {
      uVar3 = 0x80 >> (param_5 & 7) & 0xff;
      if (0 < param_6) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = param_6;
        pbVar4 = param_3;
        do {
          if ((*pbVar4 & (byte)uVar3) != 0) {
            *param_1 = param_8;
          }
          bVar2 = (byte)uVar3 >> 1;
          uVar3 = (uint)bVar2;
          if (bVar2 == 0) {
            uVar3 = 0x80;
            pbVar4 = pbVar4 + 1;
          }
          param_1 = param_1 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
      param_3 = param_3 + ((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3);
      param_1 = param_1 + (param_2 - param_6);
      param_7 = param_7 + -1;
    } while (param_7 != 0);
  }
  return;
}

// 006DAEA0 FUN_006daea0
#line 4 "decomp/ST.exe/functions/006DAEA0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006DAEA0 returns return of Library::DKW::DDX::FUN_006dad00 @ 006DAECB */

int st::fn_006DAEA0(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                undefined1 param_7)

{
  int iVar1;

  iVar1 = st::fn_006DAD00
                    (param_1,param_2,param_3,param_4,param_5,param_6,0,0,param_5,param_6,param_7);
  return iVar1;
}

// 006DAED0 FUN_006daed0
#line 4 "decomp/ST.exe/functions/006DAED0/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006DAED0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8)

{
  alignas(4) byte st_stack_frame[64];

  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  int local_8;

  iVar1 = param_3 * -4;
  piVar4 = (int *)((st_stack_frame + 36) + iVar1);
  iVar2 = -(param_7 >> 1);
  iVar3 = -2;
  iVar5 = param_3;
  if (0 < param_3) {
    do {
      for (; iVar2 < 1; iVar2 = iVar2 + param_3) {
        iVar3 = iVar3 + 2;
      }
      *piVar4 = iVar3;
      iVar2 = iVar2 - param_7;
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_8 = param_4;
  param_7 = -(param_8 >> 1);
  iVar2 = param_5 - param_6;
  do {
    if (param_7 < 1) {
      do {
        iVar2 = iVar2 + param_6;
        bVar6 = SCARRY4(param_7,param_4);
        param_7 = param_7 + param_4;
      } while (param_7 == 0 || bVar6 != param_7 < 0);
    }
    piVar4 = (int *)((st_stack_frame + 36) + iVar1);
    iVar3 = param_3;
    if (((uint)param_1 & 2) == 0) {
joined_r0x006daf6b:
      while (1 < iVar3) {
        *param_1 = CONCAT22(*(undefined2 *)(iVar2 + piVar4[1]),*(undefined2 *)(iVar2 + *piVar4));
        param_1 = param_1 + 1;
        piVar4 = piVar4 + 2;
        iVar3 = iVar3 + -2;
      }
      if (iVar3 + -2 != -2) {
        *(undefined2 *)param_1 = *(undefined2 *)(iVar2 + *piVar4);
        param_1 = (undefined4 *)((int)param_1 + 2);
      }
    }
    else {
      piVar4 = (int *)((st_stack_frame + 40) + iVar1);
      *(undefined2 *)param_1 = *(undefined2 *)(iVar2 + *(int *)((st_stack_frame + 36) + iVar1));
      param_1 = (undefined4 *)((int)param_1 + 2);
      iVar3 = param_3 + -1;
      if (iVar3 != 0 && 0 < param_3) goto joined_r0x006daf6b;
    }
    param_1 = (undefined4 *)((int)param_1 + param_2 + param_3 * -2);
    param_7 = param_7 - param_8;
    iVar3 = local_8 + -1;
    bVar6 = local_8 < 1;
    local_8 = iVar3;
    if (iVar3 == 0 || bVar6) {
      return;
    }
  } while( true );
}

// 006DAFD0 FUN_006dafd0
#line 4 "decomp/ST.exe/functions/006DAFD0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006DAFD0(ushort *param_1,int param_2,ushort *param_3,int param_4,int param_5,int param_6)

{
  ushort *puVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  ushort *puVar8;
  uint *puVar9;
  undefined4 *puVar10;

  iVar5 = param_5;
  if (((uint)param_1 & 2) == 0) {
    do {
      do {
        uVar7 = *param_3;
        uVar2 = *param_3;
        param_3 = param_3 + 1;
        *(uint *)param_1 = CONCAT22(uVar7,uVar2);
        param_1 = param_1 + 2;
        iVar6 = iVar5 + -1;
        bVar3 = 0 < iVar5;
        iVar5 = iVar6;
      } while (iVar6 != 0 && bVar3);
      puVar8 = param_3 + -param_5;
      puVar10 = (undefined4 *)((int)param_1 + param_5 * -4 + param_2);
      iVar5 = param_5;
      do {
        uVar7 = *puVar8;
        uVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar10 = CONCAT22(uVar7,uVar2);
        puVar10 = puVar10 + 1;
        iVar6 = iVar5 + -1;
        bVar3 = 0 < iVar5;
        iVar5 = iVar6;
      } while (iVar6 != 0 && bVar3);
      param_3 = (ushort *)((int)puVar8 + param_5 * -2 + param_4);
      param_1 = (ushort *)((int)puVar10 + param_5 * -4 + param_2);
      iVar6 = param_6 + -1;
      bVar3 = 0 < param_6;
      iVar5 = param_5;
      param_6 = iVar6;
    } while (iVar6 != 0 && bVar3);
  }
  else {
    do {
      uVar7 = *param_3;
      puVar8 = param_3 + 1;
      *param_1 = uVar7;
      puVar9 = (uint *)(param_1 + 1);
      if (param_5 + -1 != 0 && 0 < param_5) {
        uVar4 = (uint)uVar7 << 0x10;
        iVar5 = param_5 + -1;
        do {
          uVar7 = *puVar8;
          uVar4 = uVar4 >> 0x10 | (uint)uVar7 << 0x10;
          puVar8 = puVar8 + 1;
          *puVar9 = uVar4;
          puVar9 = puVar9 + 1;
          iVar6 = iVar5 + -1;
          bVar3 = 0 < iVar5;
          iVar5 = iVar6;
        } while (iVar6 != 0 && bVar3);
      }
      *(ushort *)puVar9 = uVar7;
      puVar1 = (ushort *)((int)puVar9 + param_5 * -4 + param_2 + 2);
      uVar7 = puVar8[-param_5];
      puVar8 = puVar8 + -param_5 + 1;
      *puVar1 = uVar7;
      puVar9 = (uint *)(puVar1 + 1);
      if (param_5 + -1 != 0 && 0 < param_5) {
        uVar4 = (uint)uVar7 << 0x10;
        iVar5 = param_5 + -1;
        do {
          uVar7 = *puVar8;
          uVar4 = uVar4 >> 0x10 | (uint)uVar7 << 0x10;
          puVar8 = puVar8 + 1;
          *puVar9 = uVar4;
          puVar9 = puVar9 + 1;
          iVar6 = iVar5 + -1;
          bVar3 = 0 < iVar5;
          iVar5 = iVar6;
        } while (iVar6 != 0 && bVar3);
      }
      *(ushort *)puVar9 = uVar7;
      param_3 = (ushort *)((int)puVar8 + param_5 * -2 + param_4);
      param_1 = (ushort *)((int)puVar9 + param_5 * -4 + param_2 + 2);
      iVar5 = param_6 + -1;
      bVar3 = 0 < param_6;
      param_6 = iVar5;
    } while (iVar5 != 0 && bVar3);
  }
  return;
}

// 006DB0D0 FUN_006db0d0
#line 4 "decomp/ST.exe/functions/006DB0D0/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void st::fn_006DB0D0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8,int param_9)

{
  alignas(4) byte st_stack_frame[68];

  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  int iStack_1c;

  puVar5 = (st_stack_frame + 60);
  iStack_1c = 0x6db0ed;
  piVar4 = (int *)((st_stack_frame + 40) + param_3 * -4);
  iVar3 = -1;
  iVar2 = -(param_7 >> 1);
  iVar7 = param_3;
  if (0 < param_3) {
    do {
      for (; iVar2 < 1; iVar2 = iVar2 + param_3) {
        iVar3 = iVar3 + 1;
      }
      *piVar4 = iVar3;
      iVar2 = iVar2 - param_7;
      piVar4 = piVar4 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  pbVar6 = (byte *)(param_5 - param_6);
  do {
    iVar2 = *(int *)(puVar5 + 0x20);
    if (iVar2 < 1) {
      do {
        pbVar6 = pbVar6 + *(int *)(puVar5 + 0x1c);
        bVar8 = SCARRY4(iVar2,*(int *)(puVar5 + 0x14));
        iVar2 = iVar2 + *(int *)(puVar5 + 0x14);
      } while (iVar2 == 0 || bVar8 != iVar2 < 0);
    }
    *(int *)(puVar5 + 0x20) = iVar2;
    iVar2 = *(int *)(puVar5 + 0x10);
    piVar4 = *(int **)(puVar5 + -8);
    (&iStack_1c)[-param_3] = (int)puVar5;
    iVar3 = *(int *)(puVar5 + 0x28);
    iVar7 = iVar2;
    if (((uint)param_1 & 2) == 0) {
joined_r0x006db171:
      while (1 < iVar7) {
        piVar1 = piVar4 + 1;
        iVar2 = *piVar4;
        piVar4 = piVar4 + 2;
        *param_1 = CONCAT22(*(undefined2 *)(iVar3 + (uint)pbVar6[*piVar1] * 2),
                            *(undefined2 *)
                             /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                             (iVar3 + CONCAT22((short)((uint)iVar2 >> 0x10),(ushort)pbVar6[iVar2]) *
                                      2));
        param_1 = param_1 + 1;
        iVar7 = iVar7 + -2;
      }
      if (iVar7 + -2 != -2) {
        *(undefined2 *)param_1 = *(undefined2 *)(iVar3 + (uint)pbVar6[*piVar4] * 2);
        param_1 = (undefined4 *)((int)param_1 + 2);
      }
    }
    else {
      piVar4 = piVar4 + 1;
      *(undefined2 *)param_1 = *(undefined2 *)(iVar3 + (uint)*pbVar6 * 2);
      param_1 = (undefined4 *)((int)param_1 + 2);
      iVar7 = iVar2 + -1;
      if (iVar7 != 0 && 0 < iVar2) goto joined_r0x006db171;
    }
    puVar5 = (undefined1 *)(&iStack_1c)[-param_3];
    param_1 = (undefined4 *)
              ((int)param_1 +
              *(int *)(puVar5 + 0xc) + (-*(int *)(puVar5 + 0x10) - *(int *)(puVar5 + 0x10)));
    *(int *)(puVar5 + 0x20) = *(int *)(puVar5 + 0x20) - *(int *)(puVar5 + 0x24);
    iVar2 = *(int *)(puVar5 + -4);
    iVar3 = iVar2 + -1;
    *(int *)(puVar5 + -4) = iVar3;
    if (iVar3 == 0 || iVar2 < 1) {
      return;
    }
  } while( true );
}

// 006DB1F0 FUN_006db1f0
#line 4 "decomp/ST.exe/functions/006DB1F0/decomp.c"
void st::fn_006DB1F0(ushort *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  ushort *puVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined4 *puVar10;

  iVar5 = param_5;
  if (((uint)param_1 & 2) == 0) {
    do {
      do {
        bVar2 = *param_3;
        param_3 = param_3 + 1;
        *(uint *)param_1 =
             /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
             CONCAT22(*(undefined2 *)(param_7 + (uint)bVar2 * 2),
                      *(undefined2 *)(param_7 + (uint)bVar2 * 2));
        param_1 = param_1 + 2;
        iVar6 = iVar5 + -1;
        bVar3 = 0 < iVar5;
        iVar5 = iVar6;
      } while (iVar6 != 0 && bVar3);
      pbVar8 = param_3 + -param_5;
      puVar10 = (undefined4 *)((int)param_1 + param_5 * -4 + param_2);
      iVar5 = param_5;
      do {
        bVar2 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        *puVar10 = CONCAT22(*(undefined2 *)(param_7 + (uint)bVar2 * 2),
                            *(undefined2 *)(param_7 + (uint)bVar2 * 2));
        puVar10 = puVar10 + 1;
        iVar6 = iVar5 + -1;
        bVar3 = 0 < iVar5;
        iVar5 = iVar6;
      } while (iVar6 != 0 && bVar3);
      param_3 = pbVar8 + (param_4 - param_5);
      param_1 = (ushort *)((int)puVar10 + param_5 * -4 + param_2);
      iVar6 = param_6 + -1;
      bVar3 = 0 < param_6;
      iVar5 = param_5;
      param_6 = iVar6;
    } while (iVar6 != 0 && bVar3);
  }
  else {
    do {
      uVar7 = *(ushort *)(param_7 + (uint)*param_3 * 2);
      pbVar8 = param_3 + 1;
      *param_1 = uVar7;
      puVar9 = (uint *)(param_1 + 1);
      if (param_5 + -1 != 0 && 0 < param_5) {
        uVar4 = (uint)uVar7 << 0x10;
        iVar5 = param_5 + -1;
        do {
          uVar7 = *(ushort *)(param_7 + (uint)*pbVar8 * 2);
          uVar4 = uVar4 >> 0x10 | (uint)uVar7 << 0x10;
          pbVar8 = pbVar8 + 1;
          *puVar9 = uVar4;
          puVar9 = puVar9 + 1;
          iVar6 = iVar5 + -1;
          bVar3 = 0 < iVar5;
          iVar5 = iVar6;
        } while (iVar6 != 0 && bVar3);
      }
      *(ushort *)puVar9 = uVar7;
      puVar1 = (ushort *)((int)puVar9 + param_5 * -4 + param_2 + 2);
      uVar7 = *(ushort *)(param_7 + (uint)pbVar8[-param_5] * 2);
      pbVar8 = pbVar8 + -param_5 + 1;
      *puVar1 = uVar7;
      puVar9 = (uint *)(puVar1 + 1);
      if (param_5 + -1 != 0 && 0 < param_5) {
        uVar4 = (uint)uVar7 << 0x10;
        iVar5 = param_5 + -1;
        do {
          uVar7 = *(ushort *)(param_7 + (uint)*pbVar8 * 2);
          uVar4 = uVar4 >> 0x10 | (uint)uVar7 << 0x10;
          pbVar8 = pbVar8 + 1;
          *puVar9 = uVar4;
          puVar9 = puVar9 + 1;
          iVar6 = iVar5 + -1;
          bVar3 = 0 < iVar5;
          iVar5 = iVar6;
        } while (iVar6 != 0 && bVar3);
      }
      *(ushort *)puVar9 = uVar7;
      param_3 = pbVar8 + (param_4 - param_5);
      param_1 = (ushort *)((int)puVar9 + param_5 * -4 + param_2 + 2);
      iVar5 = param_6 + -1;
      bVar3 = 0 < param_6;
      param_6 = iVar5;
    } while (iVar5 != 0 && bVar3);
  }
  return;
}

// 006DB310 FUN_006db310
#line 4 "decomp/ST.exe/functions/006DB310/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006DB310(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8)

{
  alignas(4) byte st_stack_frame[84];

  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;

  iVar4 = param_3 * -4;
  local_18 = -(param_7 >> 1);
  local_10 = -1;
  for (local_14 = 0; local_14 < param_3; local_14 = local_14 + 1) {
    for (; local_18 < 1; local_18 = local_18 + param_3) {
      local_10 = local_10 + 1;
    }
    local_18 = local_18 - param_7;
    *(int *)((st_stack_frame + 36) + local_14 * 4 + iVar4) = local_10;
  }
  local_c = param_4;
  local_1c = -(param_8 >> 1);
  iVar11 = param_5 - param_6;
  do {
    if (local_1c < 1) {
      do {
        iVar11 = iVar11 + param_6;
        bVar12 = SCARRY4(local_1c,param_4);
        local_1c = local_1c + param_4;
      } while (local_1c == 0 || bVar12 != local_1c < 0);
    }
    iVar5 = param_3;
    piVar10 = (int *)((st_stack_frame + 36) + iVar4);
    if (((uint)param_1 & 3) != 0) {
      iVar7 = param_3;
      uVar8 = (uint)((byte)param_1 & 3 ^ 3);
      piVar10 = (int *)((st_stack_frame + 36) + iVar4);
      do {
        iVar5 = *piVar10;
        piVar10 = piVar10 + 1;
        *(undefined1 *)param_1 = *(undefined1 *)(iVar11 + iVar5);
        param_1 = (undefined4 *)((int)param_1 + 1);
        iVar5 = iVar7 + -1;
        if (iVar5 == 0 || iVar7 < 1) goto LAB_006db41f;
        uVar9 = uVar8 - 1;
        bVar12 = 0 < (int)uVar8;
        iVar7 = iVar5;
        uVar8 = uVar9;
      } while (uVar9 != 0 && bVar12);
    }
    iVar6 = iVar5 + -4;
    iVar7 = iVar6;
    if (3 < iVar5) {
      do {
        piVar1 = piVar10 + 3;
        piVar2 = piVar10 + 2;
        piVar3 = piVar10 + 1;
        iVar5 = *piVar10;
        piVar10 = piVar10 + 4;
        *param_1 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar11 + *piVar1),
                                              *(undefined1 *)(iVar11 + *piVar2)),
                                     *(undefined1 *)(iVar11 + *piVar3)),
                            *(undefined1 *)(iVar11 + iVar5));
        param_1 = param_1 + 1;
        iVar6 = iVar7 + -4;
        bVar12 = 3 < iVar7;
        iVar7 = iVar6;
      } while (iVar6 != 0 && bVar12);
    }
    iVar5 = iVar6 + 4;
    if (iVar6 + 4 != 0) {
      do {
        iVar7 = *piVar10;
        piVar10 = piVar10 + 1;
        *(undefined1 *)param_1 = *(undefined1 *)(iVar11 + iVar7);
        param_1 = (undefined4 *)((int)param_1 + 1);
        iVar7 = iVar5 + -1;
        bVar12 = 0 < iVar5;
        iVar5 = iVar7;
      } while (iVar7 != 0 && bVar12);
    }
LAB_006db41f:
    param_1 = (undefined4 *)((int)param_1 + (param_2 - param_3));
    local_1c = local_1c - param_8;
    iVar5 = local_c + -1;
    bVar12 = local_c < 1;
    local_c = iVar5;
    if (iVar5 == 0 || bVar12) {
      return;
    }
  } while( true );
}

// 006DB450 FUN_006db450
#line 4 "decomp/ST.exe/functions/006DB450/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006DB450(undefined4 *param_1,int param_2,undefined2 *param_3,int param_4,int param_5,
                 int param_6)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  bool bVar12;

  if (((uint)param_1 & 1) == 0) {
    do {
      iVar4 = param_5;
      if (((uint)param_1 & 2) == 0) {
LAB_006db553:
        bVar12 = SBORROW4(iVar4,1);
        iVar6 = iVar4 + -1;
        iVar5 = iVar6;
        if (iVar6 != 0 && 0 < iVar4) {
          do {
            puVar9 = (undefined1 *)((int)param_3 + 1);
            uVar7 = *(undefined1 *)param_3;
            param_3 = param_3 + 1;
            *param_1 = CONCAT22(CONCAT11(*puVar9,*puVar9),CONCAT11(uVar7,uVar7));
            param_1 = param_1 + 1;
            bVar12 = SBORROW4(iVar5,2);
            iVar6 = iVar5 + -2;
            bVar2 = 1 < iVar5;
            iVar5 = iVar6;
          } while (iVar6 != 0 && bVar2);
        }
        if (bVar12 == iVar6 < 0) {
          uVar7 = *(undefined1 *)param_3;
          param_3 = (undefined2 *)((int)param_3 + 1);
          *(ushort *)param_1 = CONCAT11(uVar7,uVar7);
          param_1 = (undefined4 *)((int)param_1 + 2);
        }
      }
      else {
        uVar7 = *(undefined1 *)param_3;
        param_3 = (undefined2 *)((int)param_3 + 1);
        *(ushort *)param_1 = CONCAT11(uVar7,uVar7);
        param_1 = (undefined4 *)((int)param_1 + 2);
        iVar4 = param_5 + -1;
        if (iVar4 != 0 && 0 < param_5) goto LAB_006db553;
      }
      puVar9 = (undefined1 *)((int)param_3 - param_5);
      puVar10 = (undefined4 *)((int)param_1 + param_5 * -2 + param_2);
      iVar4 = param_5;
      if (((uint)puVar10 & 2) == 0) {
LAB_006db59d:
        bVar12 = SBORROW4(iVar4,1);
        iVar6 = iVar4 + -1;
        iVar5 = iVar6;
        if (iVar6 != 0 && 0 < iVar4) {
          do {
            puVar1 = puVar9 + 1;
            uVar7 = *puVar9;
            puVar9 = puVar9 + 2;
            *puVar10 = CONCAT22(CONCAT11(*puVar1,*puVar1),CONCAT11(uVar7,uVar7));
            puVar10 = puVar10 + 1;
            bVar12 = SBORROW4(iVar5,2);
            iVar6 = iVar5 + -2;
            bVar2 = 1 < iVar5;
            iVar5 = iVar6;
          } while (iVar6 != 0 && bVar2);
        }
        if (bVar12 == iVar6 < 0) {
          uVar7 = *puVar9;
          puVar9 = puVar9 + 1;
          *(ushort *)puVar10 = CONCAT11(uVar7,uVar7);
          puVar10 = (undefined4 *)((int)puVar10 + 2);
        }
      }
      else {
        uVar7 = *puVar9;
        puVar9 = puVar9 + 1;
        *(ushort *)puVar10 = CONCAT11(uVar7,uVar7);
        puVar10 = (undefined4 *)((int)puVar10 + 2);
        iVar4 = param_5 + -1;
        if (iVar4 != 0 && 0 < param_5) goto LAB_006db59d;
      }
      param_1 = (undefined4 *)((int)puVar10 + param_5 * -2 + param_2);
      param_3 = (undefined2 *)(puVar9 + (param_4 - param_5));
      iVar4 = param_6 + -1;
      bVar12 = 0 < param_6;
      param_6 = iVar4;
    } while (iVar4 != 0 && bVar12);
  }
  else {
    do {
      iVar4 = param_5;
      if (((uint)param_1 & 2) == 0) {
        uVar7 = *(undefined1 *)param_3;
        param_3 = (undefined2 *)((int)param_3 + 1);
        *(ushort *)param_1 = CONCAT11(uVar7,uVar7);
        param_1 = (undefined4 *)((int)param_1 + 2);
        iVar4 = param_5 + -1;
        if (iVar4 != 0 && 0 < param_5) goto LAB_006db484;
      }
      else {
LAB_006db484:
        uVar7 = *(undefined1 *)param_3;
        param_3 = (undefined2 *)((int)param_3 + 1);
        *(undefined1 *)param_1 = uVar7;
        puVar10 = (undefined4 *)((int)param_1 + 1);
        iVar5 = iVar4 + -2;
        if (iVar5 != 0 && 1 < iVar4) {
          do {
            iVar4 = iVar5;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            uVar3 = CONCAT31(CONCAT21(*param_3,*(undefined1 *)param_3),uVar7);
            uVar7 = STField<undefined1>(param_3,1);
            param_3 = param_3 + 1;
            *puVar10 = uVar3;
            puVar10 = puVar10 + 1;
            iVar5 = iVar4 + -2;
          } while (iVar5 != 0 && 1 < iVar4);
        }
        *(undefined1 *)puVar10 = uVar7;
        param_1 = (undefined4 *)((int)puVar10 + 1);
        if (SBORROW4(iVar4,2) == iVar5 < 0) {
          uVar7 = *(undefined1 *)param_3;
          param_3 = (undefined2 *)((int)param_3 + 1);
          *(ushort *)param_1 = CONCAT11(uVar7,uVar7);
          param_1 = (undefined4 *)((int)puVar10 + 3);
        }
      }
      puVar8 = (undefined2 *)((int)param_3 - param_5);
      puVar11 = (undefined2 *)((int)param_1 + param_5 * -2 + param_2);
      iVar4 = param_5;
      if (((uint)puVar11 & 2) == 0) {
        uVar7 = *(undefined1 *)puVar8;
        puVar8 = (undefined2 *)((int)puVar8 + 1);
        *puVar11 = CONCAT11(uVar7,uVar7);
        puVar11 = puVar11 + 1;
        iVar4 = param_5 + -1;
        if (iVar4 != 0 && 0 < param_5) goto LAB_006db4e1;
      }
      else {
LAB_006db4e1:
        uVar7 = *(undefined1 *)puVar8;
        puVar8 = (undefined2 *)((int)puVar8 + 1);
        *(undefined1 *)puVar11 = uVar7;
        puVar10 = (undefined4 *)((int)puVar11 + 1);
        iVar5 = iVar4 + -2;
        if (iVar5 != 0 && 1 < iVar4) {
          do {
            iVar4 = iVar5;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            uVar3 = CONCAT31(CONCAT21(*puVar8,*(undefined1 *)puVar8),uVar7);
            uVar7 = STField<undefined1>(puVar8,1);
            puVar8 = puVar8 + 1;
            *puVar10 = uVar3;
            puVar10 = puVar10 + 1;
            iVar5 = iVar4 + -2;
          } while (iVar5 != 0 && 1 < iVar4);
        }
        *(undefined1 *)puVar10 = uVar7;
        puVar11 = (undefined2 *)((int)puVar10 + 1);
        if (SBORROW4(iVar4,2) == iVar5 < 0) {
          uVar7 = *(undefined1 *)puVar8;
          puVar8 = (undefined2 *)((int)puVar8 + 1);
          *puVar11 = CONCAT11(uVar7,uVar7);
          puVar11 = (undefined2 *)((int)puVar10 + 3);
        }
      }
      param_1 = (undefined4 *)((int)puVar11 + param_5 * -2 + param_2);
      param_3 = (undefined2 *)((int)puVar8 + (param_4 - param_5));
      iVar4 = param_6 + -1;
      bVar12 = 0 < param_6;
      param_6 = iVar4;
    } while (iVar4 != 0 && bVar12);
  }
  return;
}

// 006DB5F0 FUN_006db5f0
#line 4 "decomp/ST.exe/functions/006DB5F0/decomp.c"
uint st::fn_006DB5F0(int param_1,int param_2)

{
  longlong lVar1;

  lVar1 = (longlong)param_1 * (longlong)param_2 + 0x8000;
  return (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
}

// 006DB610 FUN_006db610
#line 4 "decomp/ST.exe/functions/006DB610/decomp.c"
undefined4 st::fn_006DB610(int param_1,int param_2)

{
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  return (int)(CONCAT44(param_1 >> 0x10,param_1 << 0x10) / (longlong)param_2);
}

// 006DB630 FUN_006db630
#line 4 "decomp/ST.exe/functions/006DB630/decomp.c"
undefined4 st::fn_006DB630(int param_1,int param_2,int param_3)

{
  return (int)(((longlong)param_1 * (longlong)param_2) / (longlong)param_3);
}

// 006DB6D0 FUN_006db6d0
#line 1 "decomp/ST.exe/functions/006DB6D0/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 006DB6D0 returns return of Library::DKW::STR::FUN_006db640 @ 006DB6E0 */

int st::fn_006DB6D0(int param_1)

{
  int iVar1;

  iVar1 = st::fn_006DB640(param_1 + 0x5a);
  return iVar1;
}

// 006DB6F0 FUN_006db6f0
#line 1 "decomp/ST.exe/functions/006DB6F0/decomp.c"

int st::fn_006DB6F0(int param_1)

{
  int iVar1;
  bool bVar2;

  bVar2 = param_1 < 0;
  if (bVar2) {
    param_1 = -param_1;
  }
  if (0xb3 < param_1) {
    param_1 = param_1 % 0xb4;
  }
  if (param_1 < 0x5b) {
    iVar1 = *(int *)(&DAT_007ee584 + param_1 * 4);
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = -*(int *)(s_AppClassTy__DeleteObject_Error___007ee83c + param_1 * -4 + 0x18);
  }
  if (bVar2) {
    iVar1 = -iVar1;
  }
  return iVar1;
}

// 006DB740 FUN_006db740
#line 1 "decomp/ST.exe/functions/006DB740/decomp.c"

int st::fn_006DB740(int param_1)

{
  int iVar1;

  iVar1 = st::fn_006DB6F0(param_1 + 0x5a);
  return -iVar1;
}

// 006DB760 FUN_006db760
#line 1 "decomp/ST.exe/functions/006DB760/decomp.c"

int st::fn_006DB760(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  iVar2 = 0;
  bVar4 = param_1 < 0;
  if (bVar4) {
    param_1 = -param_1;
  }
  if (param_1 < 0x10001) {
    iVar3 = 0x5a;
    do {
      iVar1 = (iVar3 + iVar2) / 2;
      if (param_1 == *(int *)(&DAT_007ee418 + iVar1 * 4)) goto LAB_006db7ce;
      if (*(int *)(&DAT_007ee418 + iVar1 * 4) < param_1) {
        iVar2 = iVar1;
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
    } while (iVar2 < iVar1 + -1);
    if (param_1 - *(int *)(&DAT_007ee418 + iVar2 * 4) <=
        *(int *)(&DAT_007ee418 + iVar1 * 4) - param_1) {
      iVar1 = iVar2;
    }
  }
  else {
    iVar1 = 0x5a;
  }
LAB_006db7ce:
  if (bVar4) {
    iVar1 = 0x168 - iVar1;
  }
  return iVar1;
}

// 006DB7F0 FUN_006db7f0
#line 1 "decomp/ST.exe/functions/006DB7F0/decomp.c"

int st::fn_006DB7F0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = st::fn_006DB760(param_1);
  iVar3 = -iVar1 + 0x5a;
  iVar2 = -iVar1 + 0x1c2;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  return iVar2;
}

// 006DB820 FUN_006db820
#line 1 "decomp/ST.exe/functions/006DB820/decomp.c"

int st::fn_006DB820(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  iVar2 = 0;
  bVar4 = param_1 < 0;
  if (bVar4) {
    param_1 = -param_1;
  }
  iVar3 = 0x5a;
  do {
    iVar1 = (iVar3 + iVar2) / 2;
    if (param_1 == *(int *)(&DAT_007ee584 + iVar1 * 4)) goto LAB_006db87f;
    if (*(int *)(&DAT_007ee584 + iVar1 * 4) < param_1) {
      iVar2 = iVar1;
      iVar1 = iVar3;
    }
    iVar3 = iVar1;
  } while (iVar2 < iVar1 + -1);
  if (param_1 - *(int *)(&DAT_007ee584 + iVar2 * 4) <= *(int *)(&DAT_007ee584 + iVar1 * 4) - param_1
     ) {
    iVar1 = iVar2;
  }
LAB_006db87f:
  if (bVar4) {
    iVar1 = 0xb4 - iVar1;
  }
  return iVar1;
}

// 006DB8A0 FUN_006db8a0
#line 1 "decomp/ST.exe/functions/006DB8A0/decomp.c"

int st::fn_006DB8A0(int param_1)

{
  int iVar1;

  iVar1 = st::fn_006DB820(-param_1);
  iVar1 = iVar1 + -0x5a;
  if (iVar1 < 0) {
    iVar1 = 0xb4 - iVar1;
  }
  return iVar1;
}

// 006DB8C0 FUN_006db8c0
#line 4 "decomp/ST.exe/functions/006DB8C0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong st::fn_006DB8C0(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  float10 fVar2;
  longlong lVar3;

  fVar2 = (float10)fpatan(-((float10)param_4 - (float10)param_2),(float10)param_3 - (float10)param_1
                         );
  if (fVar2 < (float10)_DAT_0079034c) {
    fVar2 = fVar2 + (float10)_DAT_0079c5a4;
  }
  dVar1 = (double)(fVar2 * (float10)_DAT_0079df54 + (float10)_DAT_007901c0);
  st::fn_0072E150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar3 = st::fn_0072E288();
  return lVar3;
}

// 006DB910 FUN_006db910
#line 1 "decomp/ST.exe/functions/006DB910/decomp.c"

int st::fn_006DB910(int param_1,int param_2,int param_3,int param_4)

{
  int iVar2;
  int iVar1;
  uint uVar3;
  uint uVar4;

  uVar3 = param_3 - param_1;
  uVar4 = param_2 - param_4;
  if (uVar4 == 0) {
    return (((int)uVar3 < 0) - 1 & 0xffffff4c) + 0xb4;
  }
  if ((int)(((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) * 100) <=
      (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) {
    return (((int)uVar4 < 0) - 1 & 0xffffff4c) + 0x10e;
  }
  iVar2 = st::fn_006DB630(uVar4,0x10000,uVar3);
  iVar1 = st::fn_006DB820(iVar2);
  if ((int)uVar4 < 0) {
    iVar1 = iVar1 + 0xb4;
  }
  return iVar1;
}

// 006DB990 FUN_006db990
#line 4 "decomp/ST.exe/functions/006DB990/decomp.c"
uint st::fn_006DB990(uint param_1,int param_2)

{
  uint uVar1;

  if ((int)param_1 < 0) {
    param_1 = param_1 + ((0x167 - param_1) / 0x168) * 0x168;
  }
  if (0x167 < (int)param_1) {
    param_1 = param_1 % 0x168;
  }
  uVar1 = (int)(((int)(0xb40000 / (longlong)param_2) + param_1 * 0x10000) * param_2) / 0x168 >> 0x10
  ;
  return (param_2 <= (int)uVar1) - 1 & uVar1;
}

// 006DBA20 FUN_006dba20
#line 4 "decomp/ST.exe/functions/006DBA20/decomp.c"
uint st::fn_006DBA20(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  if ((int)param_1 < 0) {
    param_1 = param_1 + ((0x167 - param_1) / 0x168) * 0x168;
  }
  if (0x167 < (int)param_1) {
    param_1 = param_1 % 0x168;
  }
  iVar1 = (int)(0x1680000 / (longlong)param_2);
  iVar2 = st::fn_006DB610(iVar1 / 2 + param_1 * 0x10000,iVar1);
  uVar3 = (iVar2 >> 0x10) * iVar1 >> 0x10;
  return uVar3 & (0x167 < (int)uVar3) - 1;
}

// 006DBCA0 FUN_006dbca0
#line 4 "decomp/ST.exe/functions/006DBCA0/decomp.c"
/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=8, ignored=0, unknown=0

   [STReturnSemanticsApplier] typed_pointer_return.
   Evidence: all 1 value-return path(s) forward Listing variable param_1 with evidence-backed
   structure /SubmarineTitans/Recovered/PointerShapes/AnonShape_006DBCA0_EF06575F (current recovered
   extent=680) */

AnonShape_006DBCA0_EF06575F * __fastcall st::fn_006DBCA0(AnonShape_006DBCA0_EF06575F *param_1)

{
  param_1->field_0114 = 0;
  param_1->field_011C = 0;
  param_1->field_012C = 0xa0000000;
  param_1->field_0130 = 0x3ff19999;
  param_1->field_0118 = 0x40590000;
  param_1->field_0120 = 0x40790000;
  param_1->field_02A0 = 1;
  param_1->field_02A4 = 1;
  return param_1;
}

// 006DC300 FUN_006dc300
#line 4 "decomp/ST.exe/functions/006DC300/decomp.c"
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __fastcall st::fn_006DC300(int param_1)

{
  *(undefined4 *)(param_1 + 0x2d8) = 1;
  return;
}

// 006DC310 FUN_006dc310
#line 1 "decomp/ST.exe/functions/006DC310/decomp.c"

/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_006DC310(void)

{
  return;
}

// 006DC320 FUN_006dc320
#line 4 "decomp/ST.exe/functions/006DC320/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall st::fn_006DC320(AnonShape_006DC320_0C876EFA *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  undefined8 local_20;
  float local_18;
  float local_14;
  undefined4 local_10;
  int iStack_c;
  int local_8;

  local_24 = 0;
  local_20 = (double)(ulonglong)(uint)local_20;
  if (param_1->field_0068 <= param_1->field_0060) {
    return;
  }
  if (param_1->field_0078 <= param_1->field_0070) {
    return;
  }
  if (param_1->field_0038 <= (int)param_1->field_0030) {
    return;
  }
  if (param_1->field_003C <= param_1->field_0034) {
    return;
  }
  param_1->field_00D8 =
       (double)(param_1->field_0038 - param_1->field_0030) /
       (param_1->field_0068 - param_1->field_0060);
  local_18 = (float)(param_1->field_003C - param_1->field_0034);
  param_1->field_00E0 = (double)(int)local_18 / (param_1->field_0078 - param_1->field_0070);
  lVar6 = st::fn_0072E288();
  iVar5 = (int)lVar6;
  param_1->field_02F0 = iVar5;
  if (iVar5 < 0x36) {
    param_1->field_02F0 = 0x28;
  }
  else {
    param_1->field_02F0 = ((0x53 < iVar5) - 1 & 0xffffffdf) + 100;
  }
  lVar6 = st::fn_0072E288();
  iVar5 = (int)lVar6;
  param_1->field_02F4 = iVar5;
  if (iVar5 < 0x36) {
    param_1->field_02F4 = 0x28;
  }
  else {
    param_1->field_02F4 = ((0x53 < iVar5) - 1 & 0xffffffdf) + 100;
  }
  st::fn_00717380((AnonShape_00717380_FEFD061B *)param_1);
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  st::fn_006E25D0((ST3DSMAPContext *)param_1,&local_50,&local_30,0.0,0.0,0.0,1);
  switch(param_1->field_00A8) {
  case 0:
    iStack_c = -1;
    local_8 = -1;
    break;
  case 1:
    iStack_c = 1;
    local_8 = -1;
    break;
  case 2:
    iStack_c = 1;
    local_8 = 1;
    break;
  case 3:
    iStack_c = -1;
    local_8 = 1;
    break;
  default:
    iStack_c = 0;
    local_8 = 0;
  }
  st::fn_006E25D0
            ((ST3DSMAPContext *)param_1,&local_40,&local_30,(double)iStack_c,0.0,0.0,1);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  auto _local_10 = CONCAT44(local_38 - local_48,local_10);
  param_1->field_02F8 = (double)(local_38 - local_48) * _DAT_0079b148;
  st::fn_006E25D0
            ((ST3DSMAPContext *)param_1,&local_40,&local_30,0.0,(double)local_8,0.0,1);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  _local_10 = CONCAT44(local_38 - local_48,local_10);
  param_1->field_0300 = (double)(local_38 - local_48) * _DAT_0079b148;
  st::fn_006E25D0((ST3DSMAPContext *)param_1,&local_40,&local_30,0.0,0.0,1.0,1);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  _local_10 = CONCAT44(local_38 - local_48,local_10);
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  param_1->field_0308 = (double)(local_38 - local_48) * _DAT_0079b148;
  st::fn_006E25D0
            ((ST3DSMAPContext *)param_1,&local_50,&local_30,*(double *)&param_1->field_0x98,
             *(double *)&param_1->field_0xa0,0.0,0);
  local_30 = (float)param_1->field_0368;
  local_2c = 0.0;
  local_28 = 0.0;
  st::fn_006E25D0
            ((ST3DSMAPContext *)param_1,&local_40,&local_30,*(double *)&param_1->field_0x98,
             *(double *)&param_1->field_0xa0,0.0,0);
  param_1->field_03AC = local_40 - local_50;
  param_1->field_03B8 = local_3c - local_4c;
  param_1->field_03C4 = local_38 - local_48;
  local_2c = (float)param_1->field_0368;
  local_30 = 0.0;
  local_28 = 0.0;
  st::fn_006E25D0
            ((ST3DSMAPContext *)param_1,&local_40,&local_30,*(double *)&param_1->field_0x98,
             *(double *)&param_1->field_0xa0,0.0,0);
  param_1->field_03B0 = local_40 - local_50;
  param_1->field_03BC = local_3c - local_4c;
  param_1->field_03C8 = local_38 - local_48;
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = (float)((float10)param_1->field_03A4 * (float10)_DAT_0079dfa8);
  st::fn_006E25D0
            ((ST3DSMAPContext *)param_1,&local_40,&local_30,*(double *)&param_1->field_0x98,
             *(double *)&param_1->field_0xa0,0.0,0);
  param_1->field_03B4 = local_40 - local_50;
  param_1->field_03C0 = local_3c - local_4c;
  param_1->field_03CC = local_38 - local_48;
  lVar6 = st::fn_0072E288();
  param_1->field_03D4 = (int)lVar6;
  iStack_c = (int)lVar6;
  lVar6 = st::fn_0072E288();
  param_1->field_03D0 = (int)lVar6;
  lVar6 = st::fn_0072E288();
  param_1->field_03D8 = (int)lVar6;
  param_1->field_03E0 = 1;
  if (param_1->field_0280 == nullptr) goto LAB_006dcafd;
  local_8 = param_1->field_03DC;
  iVar5 = local_8 / 2;
  local_10 = SUB84((double)(int)*param_1->field_0280 * param_1->field_00C8,0);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  _local_10 = CONCAT44(iVar5,local_10);
  switch(param_1->field_00A8) {
  case 0:
    lVar6 = st::fn_0072E288();
    local_24 = (int)lVar6;
    lVar6 = st::fn_0072E288();
    local_20 = (double)(lVar6 << 0x20);
    break;
  case 1:
    lVar6 = st::fn_0072E288();
    local_24 = (int)lVar6;
    lVar6 = st::fn_0072E288();
    local_20 = (double)(lVar6 << 0x20);
    break;
  case 2:
    lVar6 = st::fn_0072E288();
    local_24 = (int)lVar6;
    lVar6 = st::fn_0072E288();
    local_20 = (double)(lVar6 << 0x20);
    break;
  case 3:
    lVar6 = st::fn_0072E288();
    local_24 = (int)lVar6;
    lVar6 = st::fn_0072E288();
    local_20 = (double)(lVar6 << 0x20);
  }
  local_20 = (double)STPiece<4,4>(local_20);
  lVar6 = st::fn_0072E288();
  param_1->field_03E8 = (int)lVar6;
  iStack_c = (int)lVar6;
  lVar6 = st::fn_0072E288();
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_20 = (double)CONCAT44((int)lVar6,(uint)local_20);
  param_1->field_03F4 = (int)lVar6;
  lVar6 = st::fn_0072E288();
  iVar2 = (int)lVar6;
  param_1->field_0400 = iVar2;
  lVar6 = st::fn_0072E288();
  iVar1 = (int)lVar6;
  param_1->field_040C = iVar1;
  if (0 < iStack_c) {
    param_1->field_03EC = iVar2;
    param_1->field_03F0 = iVar1;
    if (iVar5 < iStack_c) {
      iVar3 = (iStack_c - local_8) + iVar5;
      if (iVar2 <= iVar3 + 1) {
        param_1->field_03EC = iVar3 + 2;
      }
      iVar3 = (local_8 - iStack_c) + iVar5;
      if (iVar3 + -2 <= iVar1) {
        iVar3 = iVar3 + -3;
        goto LAB_006dc9b3;
      }
    }
    else {
      if (iVar2 < iVar5 - iStack_c) {
        param_1->field_03EC = iVar5 - iStack_c;
      }
      if (iStack_c + iVar5 <= iVar1) {
        iVar3 = iStack_c + iVar5 + -1;
LAB_006dc9b3:
        param_1->field_03F0 = iVar3;
      }
    }
  }
  iVar3 = STPiece<4,4>(local_20);
  if (STPiece<4,4>(local_20) < local_8 + -1) {
    param_1->field_03F8 = iVar2;
    param_1->field_03FC = iVar1;
    if (iVar5 < STPiece<4,4>(local_20)) {
      iVar4 = (STPiece<4,4>(local_20) - local_8) + iVar5;
      if (iVar2 <= iVar4 + 1) {
        param_1->field_03F8 = iVar4 + 2;
      }
      iVar4 = (local_8 - STPiece<4,4>(local_20)) + iVar5;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_20 = (double)CONCAT44(iVar4,(uint)local_20);
      if (iVar4 + -2 <= iVar1) {
        iVar4 = iVar4 + -3;
        goto LAB_006dca21;
      }
    }
    else {
      if (iVar2 < iVar5 - STPiece<4,4>(local_20)) {
        param_1->field_03F8 = iVar5 - STPiece<4,4>(local_20);
      }
      if (STPiece<4,4>(local_20) + iVar5 <= iVar1) {
        iVar4 = STPiece<4,4>(local_20) + iVar5 + -1;
LAB_006dca21:
        param_1->field_03FC = iVar4;
      }
    }
  }
  if (0 < iVar2) {
    param_1->field_0404 = iStack_c;
    param_1->field_0408 = iVar3;
    if (iVar5 < iVar2) {
      iVar4 = (iVar2 - local_8) + iVar5;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_20 = (double)CONCAT44(iVar4,(uint)local_20);
      if (iStack_c <= iVar4 + 1) {
        param_1->field_0404 = iVar4 + 2;
      }
      iVar2 = (local_8 - iVar2) + iVar5;
      if (iVar2 + -2 <= iVar3) {
        param_1->field_0408 = iVar2 + -3;
      }
    }
    else {
      if (iStack_c < iVar5 - iVar2) {
        param_1->field_0404 = iVar5 - iVar2;
      }
      if (iVar2 + iVar5 <= iVar3) {
        param_1->field_0408 = iVar2 + iVar5 + -1;
      }
    }
  }
  local_24 = iVar1;
  if (0 < iVar1) {
    param_1->field_0410 = iStack_c;
    param_1->field_0414 = iVar3;
    if (iVar5 < iVar1) {
      local_24 = (iVar1 - local_8) + iVar5;
      if (iStack_c <= local_24 + 1) {
        param_1->field_0410 = local_24 + 2;
      }
      iVar5 = iVar5 + (local_8 - iVar1);
      if (iVar3 < iVar5 + -2) goto LAB_006dcafd;
      iVar5 = iVar5 + -3;
    }
    else {
      if (iStack_c < iVar5 - iVar1) {
        param_1->field_0410 = iVar5 - iVar1;
      }
      if (iVar3 < iVar5 + iVar1) goto LAB_006dcafd;
      iVar5 = iVar5 + iVar1 + -1;
    }
    param_1->field_0414 = iVar5;
  }
LAB_006dcafd:
  st::fn_006E1C20
            ((ST3DSMAPContext *)param_1,(float)param_1->field_0030,param_1->field_0034,0.0,&local_14
             ,&local_18);
  lVar6 = st::fn_0072E288();
  iVar5 = (int)lVar6;
  lVar6 = st::fn_0072E288();
  iVar2 = (int)lVar6;
  switch(param_1->field_00A8) {
  case 0:
    param_1->field_004C = iVar2;
    param_1->field_0048 = iVar5 + -2;
    break;
  case 1:
    param_1->field_0040 = iVar5;
    param_1->field_0044 = iVar2 + -2;
    break;
  case 2:
    param_1->field_005C = iVar2;
    param_1->field_0058 = iVar5 + 2;
    break;
  case 3:
    param_1->field_0050 = iVar5;
    param_1->field_0054 = iVar2 + 2;
  }
  st::fn_006E1C20
            ((ST3DSMAPContext *)param_1,(float)(param_1->field_0038 + -1),param_1->field_0034,0.0,
             &local_14,&local_18);
  lVar6 = st::fn_0072E288();
  iVar5 = (int)lVar6;
  lVar6 = st::fn_0072E288();
  iVar2 = (int)lVar6;
  switch(param_1->field_00A8) {
  case 0:
    param_1->field_0040 = iVar5;
    param_1->field_0044 = iVar2 + -2;
    break;
  case 1:
    param_1->field_005C = iVar2;
    param_1->field_0058 = iVar5 + 2;
    break;
  case 2:
    param_1->field_0050 = iVar5;
    param_1->field_0054 = iVar2 + 2;
    break;
  case 3:
    param_1->field_004C = iVar2;
    param_1->field_0048 = iVar5 + -2;
  }
  st::fn_006E1C20
            ((ST3DSMAPContext *)param_1,(float)param_1->field_0030,st::machine_word_boundary_cast<int>(param_1->field_003C + -1),
             (float)((float10)param_1->field_00D0 * (float10)_DAT_0079df90),&local_14,&local_18);
  lVar6 = st::fn_0072E288();
  iVar5 = (int)lVar6;
  lVar6 = st::fn_0072E288();
  iVar2 = (int)lVar6;
  switch(param_1->field_00A8) {
  case 0:
    param_1->field_0050 = iVar5;
    param_1->field_0054 = iVar2 + 2;
    break;
  case 1:
    param_1->field_004C = iVar2;
    param_1->field_0048 = iVar5 + -2;
    break;
  case 2:
    param_1->field_0040 = iVar5;
    param_1->field_0044 = iVar2 + -2;
    break;
  case 3:
    param_1->field_005C = iVar2;
    param_1->field_0058 = iVar5 + 2;
  }
  st::fn_006E1C20
            ((ST3DSMAPContext *)param_1,(float)(param_1->field_0038 + -1),st::machine_word_boundary_cast<int>(param_1->field_003C + -1),
             (float)((float10)param_1->field_00D0 * (float10)_DAT_0079df90),&local_14,&local_18);
  lVar6 = st::fn_0072E288();
  iVar5 = (int)lVar6;
  lVar6 = st::fn_0072E288();
  iVar2 = (int)lVar6;
  switch(param_1->field_00A8) {
  case 0:
    param_1->field_005C = iVar2;
    param_1->field_0058 = iVar5 + 2;
    return;
  case 1:
    param_1->field_0050 = iVar5;
    param_1->field_0054 = iVar2 + 2;
    return;
  case 2:
    param_1->field_004C = iVar2;
    param_1->field_0048 = iVar5 + -2;
    return;
  case 3:
    param_1->field_0040 = iVar5;
    param_1->field_0044 = iVar2 + -2;
  }
  return;
}

// 006DCD60 FUN_006dcd60
#line 4 "decomp/ST.exe/functions/006DCD60/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall st::fn_006DCD60(int param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  void *pvVar8;
  float10 fVar9;
  longlong lVar10;
  double local_c;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar3 = *(int *)(param_1 + 0x358);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((iVar3 != 0) && ((*(byte *)(param_1 + 0xa8) & 8) == 0)) {
    lVar10 = st::fn_0072E288();
    iVar7 = (int)lVar10;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    dVar4 = (double)iVar7 * *(double *)(param_1 + 0x368);
    if (*(int *)(iVar3 + 0x28) < iVar7) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pvVar8 = st::fn_006ACF50
                         (*(void **)(*(int *)(param_1 + 0x358) + 8),iVar7 * iVar7 + 0x18);
      *(void **)(*(int *)(param_1 + 0x358) + 8) = pvVar8;
      *(undefined4 *)(*(int *)(param_1 + 0x358) + 0xc) =
           *(undefined4 *)(*(int *)(param_1 + 0x358) + 8);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pvVar8 = st::fn_006ACF50
                         (*(void **)(*(int *)(param_1 + 0x358) + 0x10),iVar7 * iVar7 + 0x10);
      *(void **)(*(int *)(param_1 + 0x358) + 0x10) = pvVar8;
      *(int *)(*(int *)(param_1 + 0x358) + 0x14) = *(int *)(*(int *)(param_1 + 0x358) + 0x10) + 8;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = *(int *)(param_1 + 0x358);
      *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(iVar3 + 0x14);
      *(int *)(iVar3 + 0x28) = iVar7;
      *(int *)(*(int *)(param_1 + 0x358) + 0x2c) = iVar7;
      *(int *)(param_1 + 0x37c) = iVar7;
    }
    local_c = dVar4 * _DAT_007901c0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    dVar2 = *(double *)(param_1 + 0x78) * _DAT_00790770;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    dVar5 = *(double *)(param_1 + 0xd0) * _DAT_0079df68 -
            *(double *)(param_1 + 0x70) * _DAT_00790770;
    dVar1 = local_c;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    switch(*(undefined4 *)(param_1 + 0xa8)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 0:
      local_c = *(double *)(param_1 + 0x78) + *(double *)(param_1 + 0x78);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      dVar1 = (-*(double *)(param_1 + 0x60) - dVar2) * _DAT_0079df60 + local_c;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_c = (*(double *)(param_1 + 0x68) - dVar2) * _DAT_0079df60 + local_c;
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 1:
      dVar6 = -*(double *)(param_1 + 0x60);
      dVar1 = (dVar5 - dVar6) * _DAT_0079df60 + dVar6 * _DAT_00790770;
      local_c = (dVar2 - dVar6) * _DAT_0079df60 + dVar6 * _DAT_00790770;
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 2:
      dVar1 = (*(double *)(param_1 + 0x68) - dVar5) * _DAT_0079df60 + dVar5 * _DAT_00790770;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_c = (-*(double *)(param_1 + 0x60) - dVar5) * _DAT_0079df60 + dVar5 * _DAT_00790770;
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 3:
      local_c = *(double *)(param_1 + 0x68) * _DAT_00790770;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      dVar1 = (dVar2 - *(double *)(param_1 + 0x68)) * _DAT_0079df60 + local_c;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_c = (dVar5 - *(double *)(param_1 + 0x68)) * _DAT_0079df60 + local_c;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    dVar1 = dVar1 / *(double *)(param_1 + 0x368);
    fVar9 = st::fn_00730450(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    dVar1 = (double)(fVar9 * (float10)*(double *)(param_1 + 0x368));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_c = local_c / *(double *)(param_1 + 0x368);
    fVar9 = st::fn_00730450(SUB84(local_c,0),(uint)((ulonglong)local_c >> 0x20));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    dVar2 = (double)(fVar9 * (float10)*(double *)(param_1 + 0x368));
    STPiece<0,4>(local_c) = SUB84(dVar2,0);
    dVar5 = dVar4 - dVar1;
    dVar1 = -dVar1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006DD6E0
              (*(void **)(param_1 + 0x358),SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),
               SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),SUB84(-(dVar4 - dVar2),0),
               (int)((ulonglong)-(dVar4 - dVar2) >> 0x20),STPiece<0,4>(local_c),
               (int)((ulonglong)dVar2 >> 0x20));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006DD660(*(void **)(param_1 + 0x358),0,0,iVar7,iVar7);
    *(int *)(*(int *)(param_1 + 0x358) + 0x370) = iVar7;
    *(int *)(param_1 + 0x370) = iVar7;
    *(undefined4 *)(*(int *)(param_1 + 0x358) + 0x134) = 1;
  }
  return;
}

// 006DDBD0 FUN_006ddbd0
#line 4 "decomp/ST.exe/functions/006DDBD0/decomp.c"
undefined4 st::fn_006DDBD0(void)

{
  return 1;
}

