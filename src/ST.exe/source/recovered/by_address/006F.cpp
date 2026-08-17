#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/006F.cpp

// 006F07E0 FUN_006f07e0
#line 4 "decomp/ST.exe/functions/006F07E0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_006F07E0(int *param_1)

{
  if (*param_1 != 0) {
    st::fn_006AB060(param_1);
  }
  return;
}

// 006F0E30 FUN_006f0e30
#line 4 "decomp/ST.exe/functions/006F0E30/decomp.c"
int __cdecl st::fn_006F0E30(byte *param_1,byte *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;

  if (*param_1 != *param_2) {
    return (uint)*param_1 - (uint)*param_2;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar1 = *(short *)(param_1 + 0x16);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (sVar1 != *(short *)(param_2 + 0x16)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    return (int)sVar1 - (int)*(short *)(param_2 + 0x16);
  }
  iVar3 = (int)sVar1;
  bVar6 = false;
  iVar2 = 0;
  bVar7 = true;
  pbVar4 = param_1 + 0x18;
  pbVar5 = param_2 + 0x18;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = *pbVar4 < *pbVar5;
    bVar7 = *pbVar4 == *pbVar5;
    pbVar4 = pbVar4 + 1;
    pbVar5 = pbVar5 + 1;
  } while (bVar7);
  if (!bVar7) {
    iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
  }
  if (iVar2 == 0) {
    memmove(param_1, param_2, 0x18); /* compiler REP MOVS byte copy */
  }
  return iVar2;
}

// 006F0EA0 FUN_006f0ea0
#line 1 "decomp/ST.exe/functions/006F0EA0/decomp.c"

int st::fn_006F0EA0(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(short *)(param_1 + 0x16) + 0x18;
}

// 006F1CB0 FUN_006f1cb0
#line 4 "decomp/ST.exe/functions/006F1CB0/decomp.c"
int __thiscall st::fn_006F1CB0(void *this,int param_1)

{
  if ((*(uint *)(*(int *)(*(int *)this + 4) + 8) & 0x100000) != 0) {
    return 0;
  }
  return *(int *)(*(int *)(*(int *)this + 4) + 0x34) + param_1;
}

// 006F21A0 FUN_006f21a0
#line 4 "decomp/ST.exe/functions/006F21A0/decomp.c"
void __thiscall st::fn_006F21A0(void *this,uint param_1)

{
  st::fn_00751B10(*(int **)this,param_1);
  return;
}

// 006F2C00 FUN_006f2c00
#line 4 "decomp/ST.exe/functions/006F2C00/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005540E0 -> 006F2C00 @ 00554257 | 005540E0 -> 006F2C00 @ 00554306 | 005DCC10 ->
   006F2C00 @ 005DCC8B */

LPSTR __cdecl st::fn_006F2C00(char *text,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  LPSTR pCVar5;
  CHAR *pCVar6;
  char *pcVar7;
  LPSTR pCVar8;
  CHAR local_44 [32];
  char local_24 [32];

  iVar2 = DAT_00856fc4;
  if (param_2 < 1) {
    uVar3 = 0xffffffff;
    do {
      pcVar7 = text;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = text + 1;
      cVar1 = *text;
      text = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pCVar5 = st::pointer_boundary_cast<LPSTR>(&DAT_00856e40 + DAT_00856fc4 * 0x20);
    pCVar6 = pcVar7 + -uVar3;
    pCVar8 = pCVar5;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pCVar8 = *(undefined4 *)pCVar6;
      pCVar6 = pCVar6 + 4;
      pCVar8 = pCVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pCVar8 = *pCVar6;
      pCVar6 = pCVar6 + 1;
      pCVar8 = pCVar8 + 1;
    }
  }
  else {
    st::fn_0072DE60(param_2,local_24,10);
    /* ST_CALLSITE[006F2C3F]: CALL EDI */
    st::external_00000080(local_44,st::mutable_c_string("%s%s%s"),"%s%0",local_24,&DAT_007d5630);
    pCVar5 = st::pointer_boundary_cast<LPSTR>(&DAT_00856e40 + iVar2 * 0x20);
    /* ST_CALLSITE[006F2C57]: CALL EDI */
    st::external_00000080(pCVar5,local_44,text,param_3);
  }
  DAT_00856fc4 = DAT_00856fc4 + 1;
  if (3 < DAT_00856fc4) {
    DAT_00856fc4 = 0;
  }
  return pCVar5;
}

// 006F2CB0 FUN_006f2cb0
#line 4 "decomp/ST.exe/functions/006F2CB0/decomp.c"
uint __cdecl st::fn_006F2CB0(uint *param_1,char *param_2)

{
  uint *puVar1;

  puVar1 = st::fn_00730590(param_1,param_2);
  if (puVar1 == nullptr) {
    return 0xffffffff;
  }
  return (uint)(puVar1 != param_1);
}

// 006F2CE0 FUN_006f2ce0
#line 4 "decomp/ST.exe/functions/006F2CE0/decomp.c"
int __cdecl st::fn_006F2CE0(byte *param_1,byte *param_2)

{
  if (*param_2 != *param_1) {
    return (uint)*param_2 - (uint)*param_1;
  }
  return 0;
}

// 006F2D10 FUN_006f2d10
#line 4 "decomp/ST.exe/functions/006F2D10/decomp.c"
uint __cdecl st::fn_006F2D10(byte *param_1,byte *param_2)

{
  short sVar1;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint local_204 [128];

  if (*param_2 != *param_1) {
    return (uint)*param_2 - (uint)*param_1;
  }
  if (param_2[1] == 0) {
    return 0;
  }
  memset(local_204, 0, 0x200); /* compiler bulk-zero initialization */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar1 = *(short *)(param_1 + 0x16);
  puVar5 = (uint *)(param_1 + 0x18);
  puVar6 = local_204;
  for (uVar4 = (uint)(int)sVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = (int)sVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar6 = (char)*puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
    puVar6 = (uint *)((int)puVar6 + 1);
  }
  uVar3 = st::fn_006F2CB0(local_204,(char *)(param_2 + 1));
  return uVar3;
}

// 006F4E70 FUN_006f4e70
#line 1 "decomp/ST.exe/functions/006F4E70/decomp.c"

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [STPrototypeApplier] Propagated parameter 6.
   Evidence: 006F31D0 -> 006F4E70 @ 006F4CA8

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006F4E70(byte *param_1,int param_2,uint *param_3,int param_4,int param_5,byte *param_6,
                 byte *param_7,int param_8)

{
  int scalar_param_3;

  int iVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;

  uVar7 = param_5 << 0x10;
  pbVar11 = param_6;
  if (DAT_00857000 != '\0') goto LAB_006f4f35;
  do {
    uVar5 = (uint)*param_6;
    param_6 = param_6 + 1;
    pbVar10 = param_7;
    if (uVar5 == 0) {
      param_1 = param_1 + param_2;
      param_3 = (uint *)((int)param_3 + param_4);
    }
    else {
      while( true ) {
        pbVar9 = pbVar10;
        pbVar11 = param_6;
        if ((uVar5 & 0x80) == 0) {
          do {
            param_1 = param_1 + uVar5;
            scalar_param_3 = (int)param_3 + uVar5 * 2; /* split integer lifetime from pointer-typed SSA storage */
            pbVar10 = pbVar9 + -uVar5;
            if (pbVar10 == nullptr || (int)pbVar9 < (int)uVar5) goto LAB_006f4f0f;
            bVar4 = *param_6;
            uVar5 = (uint)bVar4;
            param_6 = param_6 + 1;
            pbVar9 = pbVar10;
            pbVar11 = param_6;
          } while ((bVar4 & 0x80) == 0);
        }
        if ((uVar5 & 0x40) == 0) {
          pbVar10 = pbVar10 + -(uVar5 & 0x3f);
          uVar5 = uVar5 & 0x3f;
          do {
            if (*(uint *)(scalar_param_3 + -2) < uVar7) {
              DAT_00857000 = '\x01';
              goto LAB_006f4f9d;
            }
            *param_1 = *pbVar11;
            param_3 = (uint *)((int)param_3 + 2);
            pbVar11 = pbVar11 + 1;
            param_1 = param_1 + 1;
            uVar6 = uVar5 - 1;
            bVar3 = 0 < (int)uVar5;
            uVar5 = uVar6;
            param_6 = pbVar11;
          } while (uVar6 != 0 && bVar3);
        }
        else {
          param_6 = pbVar11 + 1;
          bVar4 = *pbVar11;
          pbVar10 = pbVar10 + -(uVar5 & 0x3f);
          uVar6 = uVar5 & 0x3f;
          do {
            if (*(uint *)((int)param_3 + -2) < uVar7) {
              DAT_00857000 = '\x01';
              goto cf_continue_loop_006F4F78;
            }
            *param_1 = bVar4;
            param_1 = param_1 + 1;
            param_3 = (uint *)((int)param_3 + 2);
            uVar5 = uVar6 - 1;
            bVar3 = 0 < (int)uVar6;
            uVar6 = uVar5;
          } while (uVar5 != 0 && bVar3);
        }
        if ((int)pbVar10 < 1) break;
        uVar5 = (uint)*param_6;
        param_6 = param_6 + 1;
      }
LAB_006f4f0f:
      param_1 = param_1 + (param_2 - (int)param_7);
      param_3 = (uint *)((int)param_3 + (int)param_7 * -2 + param_4);
    }
    iVar1 = param_8 + -1;
    bVar3 = param_8 < 1;
    param_8 = iVar1;
    if (iVar1 == 0 || bVar3) {
      return;
    }
  } while( true );
cf_continue_loop_006F4F78:
  do {
    puVar8 = (uint *)((int)param_3 + 2);
    param_1 = param_1 + 1;
    uVar5 = uVar6 - 1;
    pbVar11 = param_6;
    if (uVar5 == 0 || (int)uVar6 < 1) goto LAB_006f4fab;
    uVar2 = *param_3;
    uVar6 = uVar5;
    param_3 = puVar8;
  } while (uVar2 < uVar7);
  do {
    *param_1 = bVar4;
    param_1 = param_1 + 1;
    param_3 = (uint *)((int)puVar8 + 2);
    uVar6 = uVar5 - 1;
    puVar8 = param_3;
    pbVar11 = param_6;
    if (uVar6 == 0 || (int)uVar5 < 1) {
LAB_006f4fab:
      param_3 = puVar8;
      if ((int)pbVar10 < 1) goto LAB_006f4fb6;
      uVar6 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
      while (pbVar9 = pbVar10, (uVar6 & 0x80) == 0) {
        while( true ) {
          param_1 = param_1 + uVar6;
          param_3 = (uint *)((int)param_3 + uVar6 * 2);
          pbVar10 = pbVar9 + -uVar6;
          if (pbVar10 == nullptr || (int)pbVar9 < (int)uVar6) break;
          bVar4 = *pbVar11;
          uVar6 = (uint)bVar4;
          pbVar11 = pbVar11 + 1;
          pbVar9 = pbVar10;
          if ((bVar4 & 0x80) != 0) goto LAB_006f4f5e;
        }
LAB_006f4fb6:
        param_1 = param_1 + (param_2 - (int)param_7);
        param_3 = (uint *)((int)param_3 + (int)param_7 * -2 + param_4);
        while( true ) {
          iVar1 = param_8 + -1;
          bVar3 = param_8 < 1;
          param_8 = iVar1;
          if (iVar1 == 0 || bVar3) {
            return;
          }
LAB_006f4f35:
          uVar6 = (uint)*pbVar11;
          pbVar11 = pbVar11 + 1;
          pbVar10 = param_7;
          if (uVar6 != 0) break;
          param_1 = param_1 + param_2;
          param_3 = (uint *)((int)param_3 + param_4);
        }
      }
LAB_006f4f5e:
      if ((uVar6 & 0x40) == 0) {
        uVar6 = uVar6 & 0x3f;
        pbVar10 = pbVar10 + -uVar6;
        do {
          uVar2 = *(uint *)((int)param_3 + -2);
          uVar5 = uVar6;
          while (uVar2 < uVar7) {
LAB_006f4f9d:
            pbVar11 = pbVar11 + 1;
            param_1 = param_1 + 1;
            puVar8 = (uint *)((int)param_3 + 2);
            if (uVar5 - 1 == 0 || (int)uVar5 < 1) goto LAB_006f4fab;
            uVar2 = *param_3;
            uVar5 = uVar5 - 1;
            param_3 = (uint *)((int)param_3 + 2);
          }
          *param_1 = *pbVar11;
          param_3 = (uint *)((int)param_3 + 2);
          pbVar11 = pbVar11 + 1;
          param_1 = param_1 + 1;
          uVar6 = uVar5 - 1;
          puVar8 = param_3;
        } while (uVar6 != 0 && 0 < (int)uVar5);
        goto LAB_006f4fab;
      }
      uVar6 = uVar6 & 0x3f;
      param_6 = pbVar11 + 1;
      bVar4 = *pbVar11;
      pbVar10 = pbVar10 + -uVar6;
    }
    uVar5 = uVar6;
    puVar8 = param_3;
  } while (uVar7 <= *(uint *)((int)param_3 + -2));
  goto cf_continue_loop_006F4F78;
}

// 006F4FE0 FUN_006f4fe0
#line 4 "decomp/ST.exe/functions/006F4FE0/decomp.c"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte * st::fn_006F4FE0(byte *param_1,int param_2,uint *param_3,int param_4,int param_5,byte *param_6,
                   int param_7,int param_8,byte *param_9,int param_10,int param_11)

{
  int scalar_param_3;

  uint uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;

  PTR_00856fe0 = param_9;
  DAT_00857010 = param_11;
  uVar6 = param_5 << 0x10;
  puVar7 = param_3;
  if (DAT_00857000 != '\0') goto LAB_006f50eb;
  do {
    uVar4 = (uint)*param_6;
    param_6 = param_6 + 1;
    iVar9 = param_7;
    if (uVar4 == 0) {
      param_1 = param_1 + param_2;
      PTR_00856fe0 = PTR_00856fe0 + param_10;
      param_3 = (uint *)((int)param_3 + param_4);
    }
    else {
      while( true ) {
        iVar8 = iVar9;
        pbVar10 = param_6;
        if ((uVar4 & 0x80) == 0) {
          do {
            param_1 = param_1 + uVar4;
            PTR_00856fe0 = PTR_00856fe0 + uVar4;
            scalar_param_3 = (int)param_3 + uVar4 * 2; /* split integer lifetime from pointer-typed SSA storage */
            iVar9 = iVar8 - uVar4;
            if (iVar9 == 0 || iVar8 < (int)uVar4) goto LAB_006f50a4;
            bVar2 = *param_6;
            uVar4 = (uint)bVar2;
            param_6 = param_6 + 1;
            iVar8 = iVar9;
            pbVar10 = param_6;
          } while ((bVar2 & 0x80) == 0);
        }
        if ((uVar4 & 0x40) == 0) {
          iVar9 = iVar9 - (uVar4 & 0x3f);
          uVar4 = uVar4 & 0x3f;
          do {
            if (*(uint *)(scalar_param_3 + -2) < uVar6) {
              DAT_00857000 = '\x01';
              iVar8 = DAT_00857010;
              goto LAB_006f51af;
            }
            bVar2 = *pbVar10;
            param_9 = (byte *)STReplaceLowByte((uint32_t)(param_9), (uint8_t)(bVar2));
            pbVar10 = pbVar10 + 1;
            *param_1 = bVar2;
            param_3 = (uint *)((int)param_3 + 2);
            param_1 = param_1 + 1;
            PTR_00856fe0 = PTR_00856fe0 + 1;
            uVar5 = uVar4 - 1;
            bVar3 = 0 < (int)uVar4;
            uVar4 = uVar5;
            param_6 = pbVar10;
          } while (uVar5 != 0 && bVar3);
        }
        else {
          param_6 = pbVar10 + 1;
          bVar2 = *pbVar10;
          param_9 = (byte *)STReplaceLowByte((uint32_t)(param_9), (uint8_t)(bVar2));
          iVar9 = iVar9 - (uVar4 & 0x3f);
          uVar5 = uVar4 & 0x3f;
          do {
            if (*(uint *)((int)param_3 + -2) < uVar6) {
              DAT_00857000 = '\x01';
              iVar8 = DAT_00857010;
              pbVar10 = param_6;
              goto cf_continue_loop_006F5151;
            }
            *param_1 = bVar2;
            param_3 = (uint *)((int)param_3 + 2);
            param_1 = param_1 + 1;
            PTR_00856fe0 = PTR_00856fe0 + 1;
            uVar4 = uVar5 - 1;
            bVar3 = 0 < (int)uVar5;
            uVar5 = uVar4;
          } while (uVar4 != 0 && bVar3);
        }
        if (iVar9 < 1) break;
        uVar4 = (uint)*param_6;
        param_6 = param_6 + 1;
      }
LAB_006f50a4:
      param_1 = param_1 + (param_2 - param_7);
      PTR_00856fe0 = PTR_00856fe0 + (param_10 - param_7);
      param_3 = (uint *)((int)param_3 + param_7 * -2 + param_4);
    }
    iVar9 = param_8 + -1;
    bVar3 = param_8 < 1;
    param_8 = iVar9;
    if (iVar9 == 0 || bVar3) {
      return param_9;
    }
  } while( true );
cf_continue_loop_006F5151:
  do {
    bVar2 = *PTR_00856fe0;
    PTR_00856fe0 = PTR_00856fe0 + 1;
    puVar7 = (uint *)((int)param_3 + 2);
    *param_1 = *(byte *)(iVar8 + (uint)bVar2);
    param_1 = param_1 + 1;
    uVar4 = uVar5 - 1;
    param_6 = pbVar10;
    if (uVar4 == 0 || (int)uVar5 < 1) goto LAB_006f51e8;
    uVar1 = *param_3;
    uVar5 = uVar4;
    param_3 = puVar7;
  } while (uVar1 < uVar6);
  do {
    *param_1 = (byte)param_9;
    puVar7 = (uint *)((int)puVar7 + 2);
    param_1 = param_1 + 1;
    PTR_00856fe0 = PTR_00856fe0 + 1;
    uVar5 = uVar4 - 1;
    param_3 = puVar7;
    param_6 = pbVar10;
    if (uVar5 == 0 || (int)uVar4 < 1) {
LAB_006f51e8:
      if (iVar9 < 1) goto LAB_006f51f6;
      uVar5 = (uint)*param_6;
      param_6 = param_6 + 1;
      while (iVar8 = iVar9, (uVar5 & 0x80) == 0) {
        while( true ) {
          param_1 = param_1 + uVar5;
          PTR_00856fe0 = PTR_00856fe0 + uVar5;
          puVar7 = (uint *)((int)puVar7 + uVar5 * 2);
          iVar9 = iVar8 - uVar5;
          if (iVar9 == 0 || iVar8 < (int)uVar5) break;
          bVar2 = *param_6;
          uVar5 = (uint)bVar2;
          param_6 = param_6 + 1;
          iVar8 = iVar9;
          if ((bVar2 & 0x80) != 0) goto LAB_006f511e;
        }
LAB_006f51f6:
        param_1 = param_1 + (param_2 - param_7);
        PTR_00856fe0 = PTR_00856fe0 + (param_10 - param_7);
        puVar7 = (uint *)((int)puVar7 + param_7 * -2 + param_4);
        while( true ) {
          iVar9 = param_8 + -1;
          bVar3 = param_8 < 1;
          param_8 = iVar9;
          if (iVar9 == 0 || bVar3) {
            return param_9;
          }
LAB_006f50eb:
          uVar5 = (uint)*param_6;
          param_6 = param_6 + 1;
          iVar9 = param_7;
          if (uVar5 != 0) break;
          param_1 = param_1 + param_2;
          PTR_00856fe0 = PTR_00856fe0 + param_10;
          puVar7 = (uint *)((int)puVar7 + param_4);
        }
      }
LAB_006f511e:
      if ((uVar5 & 0x40) == 0) {
        uVar5 = uVar5 & 0x3f;
        iVar9 = iVar9 - uVar5;
        do {
          uVar1 = *(uint *)((int)puVar7 + -2);
          uVar4 = uVar5;
          param_3 = puVar7;
          iVar8 = DAT_00857010;
          while (pbVar10 = param_6, uVar1 < uVar6) {
LAB_006f51af:
            DAT_00856ffc = st::machine_word_boundary_cast<undefined4>(pbVar10);
            puVar7 = (uint *)((int)param_3 + 2);
            DAT_00856ffc = DAT_00856ffc + 1;
            param_9 = (byte *)(uint)*(byte *)(iVar8 + (uint)*PTR_00856fe0);
            *param_1 = *(byte *)(iVar8 + (uint)*PTR_00856fe0);
            PTR_00856fe0 = PTR_00856fe0 + 1;
            param_1 = param_1 + 1;
            param_6 = st::pointer_boundary_cast<byte *>(DAT_00856ffc);
            if (uVar4 - 1 == 0 || (int)uVar4 < 1) goto LAB_006f51e8;
            uVar1 = *param_3;
            uVar4 = uVar4 - 1;
            param_3 = puVar7;
          }
          bVar2 = *param_6;
          param_9 = (byte *)STReplaceLowByte((uint32_t)(param_9), (uint8_t)(bVar2));
          param_6 = param_6 + 1;
          *param_1 = bVar2;
          puVar7 = (uint *)((int)param_3 + 2);
          PTR_00856fe0 = PTR_00856fe0 + 1;
          param_1 = param_1 + 1;
          uVar5 = uVar4 - 1;
        } while (uVar5 != 0 && 0 < (int)uVar4);
        goto LAB_006f51e8;
      }
      uVar5 = uVar5 & 0x3f;
      pbVar10 = param_6 + 1;
      param_9 = (byte *)STReplaceLowByte((uint32_t)(param_9), (uint8_t)(*param_6));
      iVar9 = iVar9 - uVar5;
      param_3 = puVar7;
    }
    uVar4 = uVar5;
    puVar7 = param_3;
    iVar8 = DAT_00857010;
  } while (uVar6 <= *(uint *)((int)param_3 + -2));
  goto cf_continue_loop_006F5151;
}

// 006F5240 FUN_006f5240
#line 1 "decomp/ST.exe/functions/006F5240/decomp.c"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [STPrototypeApplier] Propagated parameter 8.
   Evidence: 006F31D0 -> 006F5240 @ 006F4DBC

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006F5240(byte *param_1,int param_2,uint *param_3,int param_4,int param_5,byte *param_6,
                 int param_7,int param_8,byte *param_9,int param_10)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *temp_3fc152a556;

  _DAT_00857000 = 1;
LAB_006f5259:
  while( true ) {
    uVar7 = (uint)*param_6;
    param_6 = param_6 + 1;
    iVar8 = param_8;
    if (uVar7 != 0) break;
    param_1 = param_1 + param_2;
    param_3 = (uint *)((int)param_3 + param_4);
    iVar8 = param_10 + -1;
    bVar2 = param_10 < 1;
    param_10 = iVar8;
    if (iVar8 == 0 || bVar2) {
      return;
    }
  }
  while( true ) {
    while( true ) {
      pbVar9 = param_9;
      if ((uVar7 & 0x80) == 0) {
        do {
          if (iVar8 < (int)uVar7) {
            pbVar10 = (byte *)(uint)(byte)((char)uVar7 - (char)iVar8);
            goto LAB_006f532e;
          }
          iVar8 = iVar8 - uVar7;
          bVar1 = *param_6;
          uVar7 = (uint)bVar1;
          param_6 = param_6 + 1;
        } while ((bVar1 & 0x80) == 0);
      }
      if ((uVar7 & 0x40) == 0) break;
      uVar6 = uVar7 & 0xffffff3f;
      if (iVar8 < (int)uVar6) {
        pbVar10 = (byte *)(uint)(byte)((char)uVar6 - (char)iVar8);
        goto LAB_006f52de;
      }
      uVar7 = (uint)param_6[1];
      param_6 = param_6 + 2;
      iVar8 = iVar8 - uVar6;
    }
    uVar6 = uVar7 & 0xffffff3f;
    if (iVar8 < (int)uVar6) break;
    uVar7 = (uint)param_6[uVar6];
    param_6 = param_6 + uVar6 + 1;
    iVar8 = iVar8 - uVar6;
  }
  param_6 = param_6 + iVar8;
  pbVar10 = (byte *)(uint)(byte)((char)uVar6 - (char)iVar8);
  while( true ) {
    uVar7 = (uint)pbVar10 & 0x3f;
    if ((int)pbVar9 < (int)uVar7) break;
    pbVar9 = pbVar9 + -uVar7;
    do {
      uVar6 = *(uint *)((int)param_3 + -2);
      uVar5 = uVar7;
      puVar4 = param_3;
      while (uVar6 < (uint)(param_5 << 0x10)) {
        param_6 = param_6 + 1;
        param_3 = (uint *)((int)puVar4 + 2);
        param_1 = param_1 + 1;
        if (uVar5 - 1 == 0 || (int)uVar5 < 1) goto cf_common_join_006F5339;
        uVar6 = *puVar4;
        uVar5 = uVar5 - 1;
        puVar4 = param_3;
      }
      *param_1 = *param_6;
      param_3 = (uint *)((int)puVar4 + 2);
      param_6 = param_6 + 1;
      param_1 = param_1 + 1;
      uVar7 = uVar5 - 1;
    } while (uVar7 != 0 && 0 < (int)uVar5);
cf_common_join_006F5339:
    pbVar10 = pbVar9;
    if ((int)pbVar9 < 1) goto cf_common_join_006F53A7;
    bVar1 = *param_6;
    pbVar10 = (byte *)(uint)bVar1;
    param_6 = param_6 + 1;
    if ((bVar1 & 0x80) == 0) {
LAB_006f532e:
      if ((int)pbVar9 < (int)pbVar10) {
        if (0 < (int)pbVar9) {
          pbVar10 = pbVar10 + -(int)pbVar9;
          param_1 = param_1 + (int)pbVar9;
          param_3 = (uint *)((int)param_3 + (int)pbVar9 * 2);
        }
        goto cf_common_join_006F53A7;
      }
      pbVar9 = pbVar9 + -(int)pbVar10;
      param_1 = param_1 + (int)pbVar10;
      param_3 = (uint *)((int)param_3 + (int)pbVar10 * 2);
      goto cf_common_join_006F5339;
    }
    if ((bVar1 & 0x40) != 0) {
LAB_006f52de:
      uVar7 = (uint)pbVar10 & 0x3f;
      pbVar10 = param_6 + 1;
      bVar1 = *param_6;
      if ((int)pbVar9 < (int)uVar7) {
        pbVar10 = (byte *)(uVar7 | 0xc0);
        if ((int)pbVar9 < 1) goto cf_common_join_006F53A7;
        pbVar10 = pbVar10 + -(int)pbVar9;
        goto LAB_006f5352;
      }
      pbVar9 = pbVar9 + -uVar7;
      do {
        uVar6 = *(uint *)((int)param_3 + -2);
        uVar5 = uVar7;
        puVar4 = param_3;
        while (param_6 = pbVar10, uVar6 < (uint)(param_5 << 0x10)) {
          param_3 = (uint *)((int)puVar4 + 2);
          param_1 = param_1 + 1;
          if (uVar5 - 1 == 0 || (int)uVar5 < 1) goto cf_common_join_006F5339;
          uVar6 = *puVar4;
          uVar5 = uVar5 - 1;
          puVar4 = param_3;
        }
        *param_1 = bVar1;
        param_1 = param_1 + 1;
        param_3 = (uint *)((int)puVar4 + 2);
        uVar7 = uVar5 - 1;
      } while (uVar7 != 0 && 0 < (int)uVar5);
      goto cf_common_join_006F5339;
    }
  }
  pbVar10 = (byte *)(uVar7 | 0x80);
  if (0 < (int)pbVar9) {
    pbVar10 = pbVar10 + -(int)pbVar9;
    do {
      uVar7 = *(uint *)((int)param_3 + -2);
      pbVar3 = pbVar9;
      puVar4 = param_3;
      while (uVar7 < (uint)(param_5 << 0x10)) {
        param_6 = param_6 + 1;
        param_3 = (uint *)((int)puVar4 + 2);
        param_1 = param_1 + 1;
        if (pbVar3 + -1 == nullptr || (int)pbVar3 < 1) goto cf_common_join_006F53A7;
        uVar7 = *puVar4;
        pbVar3 = pbVar3 + -1;
        puVar4 = param_3;
      }
      *param_1 = *param_6;
      param_3 = (uint *)((int)puVar4 + 2);
      param_6 = param_6 + 1;
      param_1 = param_1 + 1;
      pbVar9 = pbVar3 + -1;
    } while (pbVar9 != nullptr && 0 < (int)pbVar3);
  }
  goto cf_common_join_006F53A7;
LAB_006f5352:
  do {
    uVar7 = *(uint *)((int)param_3 + -2);
    puVar4 = param_3;
    pbVar3 = pbVar9;
    while (uVar7 < (uint)(param_5 << 0x10)) {
      param_3 = (uint *)((int)puVar4 + 2);
      param_1 = param_1 + 1;
      if (pbVar3 + -1 == nullptr || (int)pbVar3 < 1) goto cf_common_join_006F53A7;
      uVar7 = *puVar4;
      puVar4 = param_3;
      pbVar3 = pbVar3 + -1;
    }
    *param_1 = bVar1;
    param_1 = param_1 + 1;
    param_3 = (uint *)((int)puVar4 + 2);
    pbVar9 = pbVar3 + -1;
  } while (pbVar9 != nullptr && 0 < (int)pbVar3);
cf_common_join_006F53A7:
  iVar8 = (param_7 - (int)param_9) - param_8;
  while( true ) {
    while( true ) {
      temp_3fc152a556 = param_6;
      if (((uint)pbVar10 & 0x80) == 0) {
        do {
          if (iVar8 <= (int)pbVar10) goto cf_continue_loop_006F53F2;
          iVar8 = iVar8 - (int)pbVar10;
          bVar1 = *param_6;
          pbVar10 = (byte *)(uint)bVar1;
          param_6 = param_6 + 1;
          temp_3fc152a556 = param_6;
        } while ((bVar1 & 0x80) == 0);
      }
      if (((uint)pbVar10 & 0x40) == 0) break;
      param_6 = temp_3fc152a556 + 1;
      if (iVar8 <= (int)((uint)pbVar10 & 0xffffff3f)) goto cf_continue_loop_006F53F2;
      iVar8 = iVar8 - ((uint)pbVar10 & 0xffffff3f);
      pbVar10 = (byte *)(uint)*param_6;
      param_6 = temp_3fc152a556 + 2;
    }
    uVar7 = (uint)pbVar10 & 0xffffff3f;
    if (iVar8 <= (int)uVar7) break;
    iVar8 = iVar8 - uVar7;
    pbVar10 = (byte *)(uint)temp_3fc152a556[uVar7];
    param_6 = temp_3fc152a556 + uVar7 + 1;
  }
  param_6 = temp_3fc152a556 + uVar7;
cf_continue_loop_006F53F2:
  param_3 = (uint *)((int)param_3 + (int)param_9 * -2 + param_4);
  param_1 = param_1 + (param_2 - (int)param_9);
  iVar8 = param_10 + -1;
  bVar2 = param_10 < 1;
  param_10 = iVar8;
  if (iVar8 == 0 || bVar2) {
    return;
  }
  goto LAB_006f5259;
}

// 006F5430 FUN_006f5430
#line 4 "decomp/ST.exe/functions/006F5430/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte * st::fn_006F5430(byte *param_1,int param_2,uint *param_3,int param_4,int param_5,byte *param_6,
                   int param_7,int param_8,uint param_9,int param_10,byte *param_11,int param_12,
                   int param_13)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;

  PTR_00857034 = param_11;
  DAT_00856ff8 = param_13;
  _DAT_00857000 = 1;
LAB_006f545a:
  while( true ) {
    uVar8 = (uint)*param_6;
    param_6 = param_6 + 1;
    iVar9 = param_8;
    if (uVar8 != 0) break;
    param_1 = param_1 + param_2;
    param_3 = (uint *)((int)param_3 + param_4);
    iVar9 = param_10 + -1;
    bVar3 = param_10 < 1;
    param_10 = iVar9;
    if (iVar9 == 0 || bVar3) {
      return param_11;
    }
  }
  while( true ) {
    while( true ) {
      uVar10 = param_9;
      if ((uVar8 & 0x80) == 0) {
        do {
          if (iVar9 < (int)uVar8) {
            uVar8 = (uint)(byte)((char)uVar8 - (char)iVar9);
            goto LAB_006f55be;
          }
          iVar9 = iVar9 - uVar8;
          bVar1 = *param_6;
          uVar8 = (uint)bVar1;
          param_6 = param_6 + 1;
        } while ((bVar1 & 0x80) == 0);
      }
      if ((uVar8 & 0x40) == 0) break;
      uVar7 = uVar8 & 0xffffff3f;
      if (iVar9 < (int)uVar7) {
        uVar8 = (uint)(byte)((char)uVar7 - (char)iVar9);
        goto LAB_006f54e6;
      }
      uVar8 = (uint)param_6[1];
      param_6 = param_6 + 2;
      iVar9 = iVar9 - uVar7;
    }
    uVar7 = uVar8 & 0xffffff3f;
    if (iVar9 < (int)uVar7) break;
    uVar8 = (uint)param_6[uVar7];
    param_6 = param_6 + uVar7 + 1;
    iVar9 = iVar9 - uVar7;
  }
  param_6 = param_6 + iVar9;
  uVar8 = (uint)(byte)((char)uVar7 - (char)iVar9);
  while( true ) {
    uVar8 = uVar8 & 0x3f;
    if ((int)uVar10 < (int)uVar8) break;
    uVar10 = uVar10 - uVar8;
    pbVar11 = param_6;
    do {
      iVar9 = DAT_00856ff8;
      uVar7 = *(uint *)((int)param_3 + -2);
      uVar4 = uVar8;
      puVar5 = param_3;
      pbVar6 = pbVar11;
      while (uVar7 < (uint)(param_5 << 0x10)) {
        param_3 = (uint *)((int)puVar5 + 2);
        DAT_00857014 = st::machine_word_boundary_cast<undefined4>(pbVar6 + 1);
        param_11 = (byte *)(uint)*(byte *)(iVar9 + (uint)*PTR_00857034);
        *param_1 = *(byte *)(iVar9 + (uint)*PTR_00857034);
        PTR_00857034 = PTR_00857034 + 1;
        param_1 = param_1 + 1;
        pbVar11 = st::pointer_boundary_cast<byte *>(DAT_00857014);
        if (uVar4 - 1 == 0 || (int)uVar4 < 1) goto cf_common_join_006F55D3;
        uVar7 = *puVar5;
        uVar4 = uVar4 - 1;
        puVar5 = param_3;
        pbVar6 = st::pointer_boundary_cast<byte *>(DAT_00857014);
      }
      param_11 = (byte *)STReplaceLowByte((uint32_t)(param_11), (uint8_t)(*pbVar6));
      pbVar11 = pbVar6 + 1;
      *param_1 = *pbVar6;
      param_3 = (uint *)((int)puVar5 + 2);
      PTR_00857034 = PTR_00857034 + 1;
      param_1 = param_1 + 1;
      uVar8 = uVar4 - 1;
    } while (uVar8 != 0 && 0 < (int)uVar4);
cf_common_join_006F55D3:
    uVar8 = uVar10;
    param_6 = pbVar11;
    if ((int)uVar10 < 1) goto cf_common_join_006F56D2;
    bVar1 = *pbVar11;
    uVar8 = (uint)bVar1;
    param_6 = pbVar11 + 1;
    if ((bVar1 & 0x80) == 0) {
LAB_006f55be:
      if ((int)uVar10 < (int)uVar8) {
        if (0 < (int)uVar10) {
          uVar8 = uVar8 - uVar10;
          param_1 = param_1 + uVar10;
          PTR_00857034 = PTR_00857034 + uVar10;
          param_3 = (uint *)((int)param_3 + uVar10 * 2);
        }
        goto cf_common_join_006F56D2;
      }
      uVar10 = uVar10 - uVar8;
      param_1 = param_1 + uVar8;
      PTR_00857034 = PTR_00857034 + uVar8;
      param_3 = (uint *)((int)param_3 + uVar8 * 2);
      pbVar11 = param_6;
      goto cf_common_join_006F55D3;
    }
    if ((bVar1 & 0x40) != 0) {
LAB_006f54e6:
      uVar8 = uVar8 & 0x3f;
      pbVar11 = param_6 + 1;
      bVar1 = *param_6;
      param_11 = (byte *)STReplaceLowByte((uint32_t)(param_11), (uint8_t)(bVar1));
      if ((int)uVar10 < (int)uVar8) {
        uVar8 = uVar8 | 0xc0;
        if ((int)uVar10 < 1) goto cf_common_join_006F56D2;
        uVar8 = uVar8 - uVar10;
        goto LAB_006f55f7;
      }
      uVar10 = uVar10 - uVar8;
      do {
        iVar9 = DAT_00856ff8;
        uVar7 = *(uint *)((int)param_3 + -2);
        uVar4 = uVar8;
        puVar5 = param_3;
        while (uVar7 < (uint)(param_5 << 0x10)) {
          bVar2 = *PTR_00857034;
          PTR_00857034 = PTR_00857034 + 1;
          param_3 = (uint *)((int)puVar5 + 2);
          *param_1 = *(byte *)(iVar9 + (uint)bVar2);
          param_1 = param_1 + 1;
          if (uVar4 - 1 == 0 || (int)uVar4 < 1) goto cf_common_join_006F55D3;
          uVar7 = *puVar5;
          uVar4 = uVar4 - 1;
          puVar5 = param_3;
        }
        *param_1 = bVar1;
        param_3 = (uint *)((int)puVar5 + 2);
        param_1 = param_1 + 1;
        PTR_00857034 = PTR_00857034 + 1;
        uVar8 = uVar4 - 1;
      } while (uVar8 != 0 && 0 < (int)uVar4);
      goto cf_common_join_006F55D3;
    }
  }
  uVar8 = uVar8 | 0x80;
  if (0 < (int)uVar10) {
    uVar8 = uVar8 - uVar10;
    do {
      iVar9 = DAT_00856ff8;
      uVar7 = *(uint *)((int)param_3 + -2);
      uVar4 = uVar10;
      puVar5 = param_3;
      while (uVar7 < (uint)(param_5 << 0x10)) {
        param_3 = (uint *)((int)puVar5 + 2);
        DAT_00857014 = st::machine_word_boundary_cast<undefined4>(param_6 + 1);
        param_11 = (byte *)(uint)*(byte *)(iVar9 + (uint)*PTR_00857034);
        *param_1 = *(byte *)(iVar9 + (uint)*PTR_00857034);
        PTR_00857034 = PTR_00857034 + 1;
        param_1 = param_1 + 1;
        param_6 = st::pointer_boundary_cast<byte *>(DAT_00857014);
        if (uVar4 - 1 == 0 || (int)uVar4 < 1) goto cf_common_join_006F56D2;
        uVar7 = *puVar5;
        uVar4 = uVar4 - 1;
        puVar5 = param_3;
      }
      bVar1 = *param_6;
      param_11 = (byte *)STReplaceLowByte((uint32_t)(param_11), (uint8_t)(bVar1));
      param_6 = param_6 + 1;
      *param_1 = bVar1;
      param_3 = (uint *)((int)puVar5 + 2);
      PTR_00857034 = PTR_00857034 + 1;
      param_1 = param_1 + 1;
      uVar10 = uVar4 - 1;
    } while (uVar10 != 0 && 0 < (int)uVar4);
  }
  goto cf_common_join_006F56D2;
LAB_006f55f7:
  do {
    iVar9 = DAT_00856ff8;
    uVar7 = *(uint *)((int)param_3 + -2);
    puVar5 = param_3;
    uVar4 = uVar10;
    while (uVar7 < (uint)(param_5 << 0x10)) {
      bVar2 = *PTR_00857034;
      PTR_00857034 = PTR_00857034 + 1;
      param_3 = (uint *)((int)puVar5 + 2);
      *param_1 = *(byte *)(iVar9 + (uint)bVar2);
      param_1 = param_1 + 1;
      if (uVar4 - 1 == 0 || (int)uVar4 < 1) goto cf_common_join_006F56D2;
      uVar7 = *puVar5;
      puVar5 = param_3;
      uVar4 = uVar4 - 1;
    }
    *param_1 = bVar1;
    param_3 = (uint *)((int)puVar5 + 2);
    param_1 = param_1 + 1;
    PTR_00857034 = PTR_00857034 + 1;
    uVar10 = uVar4 - 1;
  } while (uVar10 != 0 && 0 < (int)uVar4);
cf_common_join_006F56D2:
  iVar9 = (param_7 - param_9) - param_8;
  while( true ) {
    while( true ) {
      pbVar11 = param_6;
      if ((uVar8 & 0x80) == 0) {
        do {
          if (iVar9 <= (int)uVar8) goto cf_continue_loop_006F571D;
          iVar9 = iVar9 - uVar8;
          bVar1 = *param_6;
          uVar8 = (uint)bVar1;
          param_6 = param_6 + 1;
          pbVar11 = param_6;
        } while ((bVar1 & 0x80) == 0);
      }
      if ((uVar8 & 0x40) == 0) break;
      param_6 = pbVar11 + 1;
      if (iVar9 <= (int)(uVar8 & 0xffffff3f)) goto cf_continue_loop_006F571D;
      iVar9 = iVar9 - (uVar8 & 0xffffff3f);
      uVar8 = (uint)*param_6;
      param_6 = pbVar11 + 2;
    }
    uVar10 = uVar8 & 0xffffff3f;
    if (iVar9 <= (int)uVar10) break;
    iVar9 = iVar9 - uVar10;
    uVar8 = (uint)pbVar11[uVar10];
    param_6 = pbVar11 + uVar10 + 1;
  }
  param_6 = pbVar11 + uVar10;
cf_continue_loop_006F571D:
  PTR_00857034 = PTR_00857034 + (param_12 - param_9);
  param_3 = (uint *)((int)param_3 + param_9 * -2 + param_4);
  param_1 = param_1 + (param_2 - param_9);
  iVar9 = param_10 + -1;
  bVar3 = param_10 < 1;
  param_10 = iVar9;
  if (iVar9 == 0 || bVar3) {
    return param_11;
  }
  goto LAB_006f545a;
}

// 006F5760 FUN_006f5760
#line 4 "decomp/ST.exe/functions/006F5760/decomp.c"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void st::fn_006F5760(undefined1 *param_1,int param_2,uint *param_3,int param_4,int param_5,
                 byte *param_6,int param_7,int param_8,int param_9)

{
  int scalar_param_3;

  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  int iStack_18;

  DAT_0085702c = param_9;
  uVar7 = param_5 << 0x10;
  pbVar11 = param_6;
  if (DAT_00857000 != '\0') goto LAB_006f584a;
  do {
    uVar5 = (uint)*param_6;
    param_6 = param_6 + 1;
    iStack_18 = param_7;
    if (uVar5 == 0) {
      param_1 = param_1 + param_2;
      param_3 = (uint *)((int)param_3 + param_4);
    }
    else {
      while( true ) {
        iVar10 = DAT_0085702c;
        iVar9 = iStack_18;
        pbVar11 = param_6;
        if ((uVar5 & 0x80) == 0) {
          do {
            param_1 = param_1 + uVar5;
            scalar_param_3 = (int)param_3 + uVar5 * 2; /* split integer lifetime from pointer-typed SSA storage */
            iStack_18 = iVar9 - uVar5;
            if (iStack_18 == 0 || iVar9 < (int)uVar5) goto LAB_006f5824;
            bVar2 = *param_6;
            uVar5 = (uint)bVar2;
            param_6 = param_6 + 1;
            iVar9 = iStack_18;
            pbVar11 = param_6;
          } while ((bVar2 & 0x80) == 0);
        }
        if ((uVar5 & 0x40) == 0) {
          iStack_18 = iStack_18 - (uVar5 & 0x3f);
          uVar5 = uVar5 & 0x3f;
          puVar12 = param_1;
          do {
            if (*(uint *)(scalar_param_3 + -2) < uVar7) {
              DAT_00857000 = '\x01';
              goto LAB_006f58d2;
            }
            bVar2 = *pbVar11;
            param_3 = (uint *)((int)param_3 + 2);
            param_1 = puVar12 + 1;
            pbVar11 = pbVar11 + 1;
            uVar6 = uVar5 - 1;
            *puVar12 = *(undefined1 *)(iVar10 + (uint)bVar2);
            bVar3 = 0 < (int)uVar5;
            uVar5 = uVar6;
            param_6 = pbVar11;
            puVar12 = param_1;
          } while (uVar6 != 0 && bVar3);
        }
        else {
          param_6 = pbVar11 + 1;
          iStack_18 = iStack_18 - (uVar5 & 0x3f);
          uVar4 = *(undefined1 *)((uint)*pbVar11 + DAT_0085702c);
          uVar6 = uVar5 & 0x3f;
          do {
            if (*(uint *)((int)param_3 + -2) < uVar7) {
              DAT_00857000 = '\x01';
              goto cf_continue_loop_006F589B;
            }
            *param_1 = uVar4;
            param_1 = param_1 + 1;
            param_3 = (uint *)((int)param_3 + 2);
            uVar5 = uVar6 - 1;
            bVar3 = 0 < (int)uVar6;
            uVar6 = uVar5;
          } while (uVar5 != 0 && bVar3);
        }
        if (iStack_18 < 1) break;
        uVar5 = (uint)*param_6;
        param_6 = param_6 + 1;
      }
LAB_006f5824:
      param_1 = param_1 + (param_2 - param_7);
      param_3 = (uint *)((int)param_3 + param_7 * -2 + param_4);
    }
    iVar10 = param_8 + -1;
    bVar3 = param_8 < 1;
    param_8 = iVar10;
    if (iVar10 == 0 || bVar3) {
      return;
    }
  } while( true );
cf_continue_loop_006F589B:
  do {
    puVar8 = (uint *)((int)param_3 + 2);
    param_1 = param_1 + 1;
    uVar5 = uVar6 - 1;
    pbVar11 = param_6;
    if (uVar5 == 0 || (int)uVar6 < 1) goto LAB_006f58e1;
    uVar1 = *param_3;
    uVar6 = uVar5;
    param_3 = puVar8;
  } while (uVar1 < uVar7);
  do {
    *param_1 = uVar4;
    param_1 = param_1 + 1;
    param_3 = (uint *)((int)puVar8 + 2);
    uVar6 = uVar5 - 1;
    puVar8 = param_3;
    pbVar11 = param_6;
    if (uVar6 == 0 || (int)uVar5 < 1) {
LAB_006f58e1:
      param_3 = puVar8;
      if (iStack_18 < 1) goto LAB_006f58ef;
      uVar6 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
      while (iVar10 = iStack_18, (uVar6 & 0x80) == 0) {
        while( true ) {
          param_1 = param_1 + uVar6;
          param_3 = (uint *)((int)param_3 + uVar6 * 2);
          iStack_18 = iVar10 - uVar6;
          if (iStack_18 == 0 || iVar10 < (int)uVar6) break;
          bVar2 = *pbVar11;
          uVar6 = (uint)bVar2;
          pbVar11 = pbVar11 + 1;
          iVar10 = iStack_18;
          if ((bVar2 & 0x80) != 0) goto LAB_006f5877;
        }
LAB_006f58ef:
        param_1 = param_1 + (param_2 - param_7);
        param_3 = (uint *)((int)param_3 + param_7 * -2 + param_4);
        while( true ) {
          iVar10 = param_8 + -1;
          bVar3 = param_8 < 1;
          param_8 = iVar10;
          if (iVar10 == 0 || bVar3) {
            return;
          }
LAB_006f584a:
          uVar6 = (uint)*pbVar11;
          pbVar11 = pbVar11 + 1;
          iStack_18 = param_7;
          if (uVar6 != 0) break;
          param_1 = param_1 + param_2;
          param_3 = (uint *)((int)param_3 + param_4);
        }
      }
LAB_006f5877:
      if ((uVar6 & 0x40) == 0) {
        uVar6 = uVar6 & 0x3f;
        iStack_18 = iStack_18 - uVar6;
        iVar10 = DAT_0085702c;
        do {
          uVar1 = *(uint *)((int)param_3 + -2);
          uVar5 = uVar6;
          puVar12 = param_1;
          while (uVar1 < uVar7) {
LAB_006f58d2:
            pbVar11 = pbVar11 + 1;
            param_1 = puVar12 + 1;
            puVar8 = (uint *)((int)param_3 + 2);
            if (uVar5 - 1 == 0 || (int)uVar5 < 1) goto LAB_006f58e1;
            uVar1 = *param_3;
            uVar5 = uVar5 - 1;
            param_3 = (uint *)((int)param_3 + 2);
            puVar12 = param_1;
          }
          bVar2 = *pbVar11;
          param_3 = (uint *)((int)param_3 + 2);
          pbVar11 = pbVar11 + 1;
          param_1 = puVar12 + 1;
          uVar6 = uVar5 - 1;
          *puVar12 = *(undefined1 *)(iVar10 + (uint)bVar2);
          puVar8 = param_3;
        } while (uVar6 != 0 && 0 < (int)uVar5);
        goto LAB_006f58e1;
      }
      uVar6 = uVar6 & 0x3f;
      param_6 = pbVar11 + 1;
      iStack_18 = iStack_18 - uVar6;
      uVar4 = *(undefined1 *)((uint)*pbVar11 + DAT_0085702c);
    }
    uVar5 = uVar6;
    puVar8 = param_3;
  } while (uVar7 <= *(uint *)((int)param_3 + -2));
  goto cf_continue_loop_006F589B;
}

// 006F5920 FUN_006f5920
#line 4 "decomp/ST.exe/functions/006F5920/decomp.c"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint st::fn_006F5920(byte *param_1,int param_2,uint *param_3,int param_4,int param_5,byte *param_6,
                 int param_7,int param_8,uint param_9,byte *param_10,int param_11,int param_12)

{
  int scalar_param_3;

  uint uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iStack_18;

  DAT_0085701c = param_9;
  PTR_00857024 = param_10;
  DAT_00857020 = param_12;
  uVar7 = param_5 << 0x10;
  puVar8 = param_3;
  if (DAT_00857000 != '\0') goto LAB_006f5a54;
  do {
    uVar4 = (uint)*param_6;
    param_6 = param_6 + 1;
    iStack_18 = param_7;
    if (uVar4 == 0) {
      param_1 = param_1 + param_2;
      PTR_00857024 = PTR_00857024 + param_11;
      param_3 = (uint *)((int)param_3 + param_4);
    }
    else {
      while( true ) {
        uVar6 = DAT_0085701c;
        iVar9 = iStack_18;
        pbVar10 = param_6;
        if ((uVar4 & 0x80) == 0) {
          do {
            param_1 = param_1 + uVar4;
            PTR_00857024 = PTR_00857024 + uVar4;
            scalar_param_3 = (int)param_3 + uVar4 * 2; /* split integer lifetime from pointer-typed SSA storage */
            iStack_18 = iVar9 - uVar4;
            if (iStack_18 == 0 || iVar9 < (int)uVar4) goto LAB_006f5a0d;
            bVar2 = *param_6;
            uVar4 = (uint)bVar2;
            param_6 = param_6 + 1;
            iVar9 = iStack_18;
            pbVar10 = param_6;
          } while ((bVar2 & 0x80) == 0);
        }
        if ((uVar4 & 0x40) == 0) {
          iStack_18 = iStack_18 - (uVar4 & 0x3f);
          uVar4 = uVar4 & 0x3f;
          pbVar11 = param_1;
          do {
            if (*(uint *)(scalar_param_3 + -2) < uVar7) {
              DAT_00857000 = '\x01';
              iVar9 = DAT_00857020;
              goto LAB_006f5b32;
            }
            bVar2 = *pbVar10;
            param_3 = (uint *)((int)param_3 + 2);
            param_1 = pbVar11 + 1;
            pbVar10 = pbVar10 + 1;
            PTR_00857024 = PTR_00857024 + 1;
            param_9 = (uint)*(byte *)(uVar6 + bVar2);
            uVar5 = uVar4 - 1;
            *pbVar11 = *(byte *)(uVar6 + bVar2);
            bVar3 = 0 < (int)uVar4;
            uVar4 = uVar5;
            param_6 = pbVar10;
            pbVar11 = param_1;
          } while (uVar5 != 0 && bVar3);
        }
        else {
          param_6 = pbVar10 + 1;
          iStack_18 = iStack_18 - (uVar4 & 0x3f);
          bVar2 = *(byte *)(*pbVar10 + DAT_0085701c);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          param_9 = CONCAT31((int3)(*pbVar10 + DAT_0085701c >> 8),bVar2);
          uVar6 = uVar4 & 0x3f;
          do {
            if (*(uint *)((int)param_3 + -2) < uVar7) {
              DAT_00857000 = '\x01';
              iVar9 = DAT_00857020;
              pbVar10 = param_6;
              goto cf_continue_loop_006F5AC4;
            }
            *param_1 = bVar2;
            PTR_00857024 = PTR_00857024 + 1;
            param_1 = param_1 + 1;
            param_3 = (uint *)((int)param_3 + 2);
            uVar4 = uVar6 - 1;
            bVar3 = 0 < (int)uVar6;
            uVar6 = uVar4;
          } while (uVar4 != 0 && bVar3);
        }
        if (iStack_18 < 1) break;
        uVar4 = (uint)*param_6;
        param_6 = param_6 + 1;
      }
LAB_006f5a0d:
      param_1 = param_1 + (param_2 - param_7);
      PTR_00857024 = PTR_00857024 + (param_11 - param_7);
      param_3 = (uint *)((int)param_3 + param_7 * -2 + param_4);
    }
    iVar9 = param_8 + -1;
    bVar3 = param_8 < 1;
    param_8 = iVar9;
    if (iVar9 == 0 || bVar3) {
      return param_9;
    }
  } while( true );
cf_continue_loop_006F5AC4:
  do {
    bVar2 = *PTR_00857024;
    PTR_00857024 = PTR_00857024 + 1;
    puVar8 = (uint *)((int)param_3 + 2);
    *param_1 = *(byte *)(iVar9 + (uint)bVar2);
    param_1 = param_1 + 1;
    uVar4 = uVar6 - 1;
    param_6 = pbVar10;
    if (uVar4 == 0 || (int)uVar6 < 1) goto LAB_006f5b70;
    uVar5 = *param_3;
    uVar6 = uVar4;
    param_3 = puVar8;
  } while (uVar5 < uVar7);
  do {
    *param_1 = (byte)param_9;
    param_1 = param_1 + 1;
    PTR_00857024 = PTR_00857024 + 1;
    puVar8 = (uint *)((int)puVar8 + 2);
    uVar6 = uVar4 - 1;
    param_3 = puVar8;
    param_6 = pbVar10;
    if (uVar6 == 0 || (int)uVar4 < 1) {
LAB_006f5b70:
      if (iStack_18 < 1) goto LAB_006f5b7e;
      uVar6 = (uint)*param_6;
      param_6 = param_6 + 1;
      while (iVar9 = iStack_18, (uVar6 & 0x80) == 0) {
        while( true ) {
          param_1 = param_1 + uVar6;
          PTR_00857024 = PTR_00857024 + uVar6;
          puVar8 = (uint *)((int)puVar8 + uVar6 * 2);
          iStack_18 = iVar9 - uVar6;
          if (iStack_18 == 0 || iVar9 < (int)uVar6) break;
          bVar2 = *param_6;
          uVar6 = (uint)bVar2;
          param_6 = param_6 + 1;
          iVar9 = iStack_18;
          if ((bVar2 & 0x80) != 0) goto LAB_006f5a87;
        }
LAB_006f5b7e:
        PTR_00857024 = PTR_00857024 + (param_11 - param_7);
        param_1 = param_1 + (param_2 - param_7);
        puVar8 = (uint *)((int)puVar8 + param_7 * -2 + param_4);
        while( true ) {
          iVar9 = param_8 + -1;
          bVar3 = param_8 < 1;
          param_8 = iVar9;
          if (iVar9 == 0 || bVar3) {
            return param_9;
          }
LAB_006f5a54:
          uVar6 = (uint)*param_6;
          param_6 = param_6 + 1;
          iStack_18 = param_7;
          if (uVar6 != 0) break;
          param_1 = param_1 + param_2;
          PTR_00857024 = PTR_00857024 + param_11;
          puVar8 = (uint *)((int)puVar8 + param_4);
        }
      }
LAB_006f5a87:
      if ((uVar6 & 0x40) == 0) {
        uVar6 = uVar6 & 0x3f;
        iStack_18 = iStack_18 - uVar6;
        uVar5 = DAT_0085701c;
        do {
          uVar1 = *(uint *)((int)puVar8 + -2);
          uVar4 = uVar6;
          param_3 = puVar8;
          pbVar11 = param_1;
          iVar9 = DAT_00857020;
          while (pbVar10 = param_6, uVar1 < uVar7) {
LAB_006f5b32:
            DAT_00857018 = st::machine_word_boundary_cast<undefined4>(pbVar10);
            puVar8 = (uint *)((int)param_3 + 2);
            DAT_00857018 = DAT_00857018 + 1;
            param_9 = (uint)*(byte *)(iVar9 + (uint)*PTR_00857024);
            *pbVar11 = *(byte *)(iVar9 + (uint)*PTR_00857024);
            PTR_00857024 = PTR_00857024 + 1;
            param_1 = pbVar11 + 1;
            param_6 = st::pointer_boundary_cast<byte *>(DAT_00857018);
            if (uVar4 - 1 == 0 || (int)uVar4 < 1) goto LAB_006f5b70;
            uVar1 = *param_3;
            uVar4 = uVar4 - 1;
            param_3 = puVar8;
            uVar5 = DAT_0085701c;
            pbVar11 = param_1;
          }
          bVar2 = *param_6;
          param_1 = pbVar11 + 1;
          param_6 = param_6 + 1;
          PTR_00857024 = PTR_00857024 + 1;
          puVar8 = (uint *)((int)param_3 + 2);
          param_9 = (uint)*(byte *)(uVar5 + bVar2);
          uVar6 = uVar4 - 1;
          *pbVar11 = *(byte *)(uVar5 + bVar2);
        } while (uVar6 != 0 && 0 < (int)uVar4);
        goto LAB_006f5b70;
      }
      uVar6 = uVar6 & 0x3f;
      pbVar10 = param_6 + 1;
      iStack_18 = iStack_18 - uVar6;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_9 = CONCAT31((int3)(*param_6 + DAT_0085701c >> 8),
                         *(undefined1 *)(*param_6 + DAT_0085701c));
      param_3 = puVar8;
    }
    uVar4 = uVar6;
    puVar8 = param_3;
    iVar9 = DAT_00857020;
  } while (uVar7 <= *(uint *)((int)param_3 + -2));
  goto cf_continue_loop_006F5AC4;
}

// 006F5BD0 FUN_006f5bd0
#line 4 "decomp/ST.exe/functions/006F5BD0/decomp.c"
undefined1
st::fn_006F5BD0(undefined1 *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined1 *puVar10;

  uVar3 = 0;
  do {
    uVar4 = (uint)*param_3;
    param_3 = param_3 + 1;
    iVar8 = param_4;
    if (uVar4 == 0) {
      param_1 = param_1 + param_2;
    }
    else {
      while( true ) {
        iVar7 = iVar8;
        pbVar9 = param_3;
        if ((uVar4 & 0x80) == 0) {
          do {
            param_1 = param_1 + uVar4;
            iVar8 = iVar7 - uVar4;
            if (iVar8 == 0 || iVar7 < (int)uVar4) goto LAB_006f5c3f;
            bVar1 = *param_3;
            uVar4 = (uint)bVar1;
            param_3 = param_3 + 1;
            iVar7 = iVar8;
            pbVar9 = param_3;
          } while ((bVar1 & 0x80) == 0);
        }
        if ((uVar4 & 0x40) == 0) {
          bVar1 = *pbVar9;
          uVar6 = uVar4 & 0x3f;
          param_3 = pbVar9;
          puVar10 = param_1;
          while( true ) {
            param_1 = puVar10 + 1;
            uVar3 = *(undefined1 *)(param_6 + (uint)bVar1);
            param_3 = param_3 + 1;
            *puVar10 = uVar3;
            if (uVar6 - 1 == 0 || (int)uVar6 < 1) break;
            bVar1 = *param_3;
            uVar6 = uVar6 - 1;
            puVar10 = param_1;
          }
        }
        else {
          param_3 = pbVar9 + 1;
          uVar3 = *(undefined1 *)(param_6 + (uint)*pbVar9);
          uVar6 = uVar4 & 0x3f;
          do {
            *param_1 = uVar3;
            param_1 = param_1 + 1;
            uVar5 = uVar6 - 1;
            bVar2 = 0 < (int)uVar6;
            uVar6 = uVar5;
          } while (uVar5 != 0 && bVar2);
        }
        iVar8 = iVar8 - (uVar4 & 0x3f);
        if (iVar8 < 1) break;
        uVar4 = (uint)*param_3;
        param_3 = param_3 + 1;
      }
LAB_006f5c3f:
      param_1 = param_1 + (param_2 - param_4);
    }
    iVar8 = param_5 + -1;
    bVar2 = param_5 < 1;
    param_5 = iVar8;
    if (iVar8 == 0 || bVar2) {
      return uVar3;
    }
  } while( true );
}

// 006F5C60 FUN_006f5c60
#line 4 "decomp/ST.exe/functions/006F5C60/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006F5C60(undefined1 *param_1,int param_2,byte *param_3,int param_4,ushort *param_5,
                 int param_6,uint param_7,byte *param_8,int param_9,int param_10,int param_11)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_8;

  _DAT_00857000 = 1;
  if (-1 < param_10 + -1) {
    local_8 = param_10;
    do {
      uVar1 = (uint)*param_8;
      auto param_8_after_write = param_8 + 1; /* compiler stack-slot lifetime split */
      iVar2 = param_9;
      if (uVar1 == 0) {
        param_1 = param_1 + param_2;
        param_3 = param_3 + param_4;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_5 = (ushort *)((int)param_5 + param_6);
      }
      else {
        while( true ) {
          if ((uVar1 & 0x80) == 0) {
            uVar1 = uVar1 & 0x7f;
            iVar2 = iVar2 - uVar1;
            param_1 = param_1 + uVar1;
            param_3 = param_3 + uVar1;
            param_5 = param_5 + uVar1;
          }
          else {
            uVar3 = uVar1 & 0x3f;
            iVar2 = iVar2 - uVar3;
            if ((uVar1 & 0x40) == 0) {
              if (-1 < (int)(uVar3 - 1)) {
                param_8_after_write = param_8_after_write + uVar3;
                do {
                  if (param_7 <= *param_5) {
                    *param_1 = *(undefined1 *)((uint)*param_3 + param_11);
                  }
                  param_5 = param_5 + 1;
                  param_1 = param_1 + 1;
                  param_3 = param_3 + 1;
                  uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
              }
            }
            else {
              param_8_after_write = param_8_after_write + 1;
              if (-1 < (int)(uVar3 - 1)) {
                do {
                  if (param_7 <= *param_5) {
                    *param_1 = *(undefined1 *)((uint)*param_3 + param_11);
                  }
                  param_5 = param_5 + 1;
                  param_1 = param_1 + 1;
                  param_3 = param_3 + 1;
                  uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
              }
            }
          }
          if (iVar2 < 1) break;
          uVar1 = (uint)*param_8_after_write;
          param_8_after_write = param_8_after_write + 1;
        }
        param_1 = param_1 + (param_2 - param_9);
        param_3 = param_3 + (param_4 - param_9);
        param_5 = (ushort *)((int)param_5 + param_6 + param_9 * -2);
      }
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

// 006F5D80 FUN_006f5d80
#line 4 "decomp/ST.exe/functions/006F5D80/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006F5D80(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int local_8;

  _DAT_00857000 = 1;
  if (-1 < param_10 + -1) {
    local_8 = param_10;
    do {
      uVar5 = (uint)*param_6;
      param_6 = param_6 + 1;
      iVar7 = param_8;
      if (uVar5 == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + param_2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = (ushort *)((int)param_3 + param_4);
      }
      else {
        while( true ) {
          while ((uVar5 & 0x80) == 0) {
            uVar3 = uVar5 & 0x7f;
            if (iVar7 < (int)uVar3) goto LAB_006f5df3;
            iVar7 = iVar7 - uVar3;
            bVar4 = *param_6;
            param_6 = param_6 + 1;
            uVar5 = (uint)bVar4;
          }
          uVar3 = uVar5 & 0x3f;
          if (iVar7 < (int)uVar3) break;
          if ((uVar5 & 0x40) == 0) {
            iVar7 = iVar7 - uVar3;
            uVar5 = (uint)param_6[uVar3];
            param_6 = param_6 + uVar3 + 1;
          }
          else {
            iVar7 = iVar7 - uVar3;
            uVar5 = (uint)param_6[1];
            param_6 = param_6 + 2;
          }
        }
LAB_006f5df3:
        uVar3 = uVar3 - iVar7;
        if (((byte)uVar5 & 0xc0) == 0x80) {
          param_6 = param_6 + iVar7;
        }
        auto param_10_after_write = param_9; /* compiler stack-slot lifetime split */
        if ((int)uVar3 <= param_9) {
          do {
            param_10_after_write = param_10_after_write - uVar3;
            if ((uVar5 & 0x80) == 0) {
              param_1 = param_1 + uVar3;
              param_3 = param_3 + uVar3;
            }
            else if ((uVar5 & 0x40) == 0) {
              if (-1 < (int)(uVar3 - 1)) {
                do {
                  if (param_5 <= *param_3) {
                    *param_1 = *(undefined1 *)((uint)*param_6 + param_11);
                  }
                  param_3 = param_3 + 1;
                  param_1 = param_1 + 1;
                  param_6 = param_6 + 1;
                  uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
              }
            }
            else {
              bVar4 = *param_6;
              param_6 = param_6 + 1;
              uVar1 = *(undefined1 *)((uint)bVar4 + param_11);
              if (-1 < (int)(uVar3 - 1)) {
                do {
                  if (param_5 <= *param_3) {
                    *param_1 = uVar1;
                  }
                  param_3 = param_3 + 1;
                  param_1 = param_1 + 1;
                  uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
              }
            }
            if (param_10_after_write < 1) {
              uVar3 = 0;
              break;
            }
            bVar4 = *param_6;
            uVar5 = (uint)bVar4;
            param_6 = param_6 + 1;
            if ((bVar4 & 0x80) == 0) {
              uVar3 = uVar5 & 0x7f;
            }
            else {
              uVar3 = uVar5 & 0x3f;
            }
          } while ((int)uVar3 <= param_10_after_write);
        }
        uVar3 = uVar3 - param_10_after_write;
        bVar4 = (byte)uVar5;
        if ((uVar5 & 0x80) == 0) {
          param_1 = param_1 + param_10_after_write;
          param_3 = param_3 + param_10_after_write;
        }
        else if ((uVar5 & 0x40) == 0) {
          if (-1 < param_10_after_write + -1) {
            do {
              if (param_5 <= *param_3) {
                *param_1 = *(undefined1 *)((uint)*param_6 + param_11);
              }
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              param_6 = param_6 + 1;
              param_10_after_write = param_10_after_write + -1;
            } while (param_10_after_write != 0);
          }
        }
        else if (0 < param_10_after_write) {
          bVar2 = *param_6;
          param_6 = param_6 + 1;
          uVar1 = *(undefined1 *)((uint)bVar2 + param_11);
          if (-1 < param_10_after_write + -1) {
            do {
              if (param_5 <= *param_3) {
                *param_1 = uVar1;
              }
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              param_10_after_write = param_10_after_write + -1;
            } while (param_10_after_write != 0);
          }
        }
        iVar7 = (param_7 - param_8) - param_9;
        if ((int)uVar3 < iVar7) {
          do {
            iVar7 = iVar7 - uVar3;
            pbVar6 = param_6;
            if (((byte)uVar5 & 0xc0) == 0x80) {
              pbVar6 = param_6 + uVar3;
            }
            bVar4 = *pbVar6;
            uVar5 = (uint)bVar4;
            param_6 = pbVar6 + 1;
            uVar3 = uVar5;
            if (((bVar4 & 0x80) != 0) && (uVar3 = uVar5 & 0x3f, (bVar4 & 0x40) != 0)) {
              param_6 = pbVar6 + 2;
            }
          } while ((int)uVar3 < iVar7);
        }
        if ((bVar4 & 0xc0) == 0x80) {
          param_6 = param_6 + iVar7;
        }
        param_1 = param_1 + (param_2 - param_9);
        param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
      }
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

// 006F6020 FUN_006f6020
#line 4 "decomp/ST.exe/functions/006F6020/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006F6020(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 byte *param_12,int param_13,int param_14)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  int local_8;

  _DAT_00857000 = 1;
  if (-1 < param_10 + -1) {
    local_8 = param_10;
    pbVar8 = param_6;
    do {
      uVar5 = (uint)*pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar7 = param_8;
      if (uVar5 == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + param_2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_12 = param_12 + param_13;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = (ushort *)((int)param_3 + param_4);
      }
      else {
        while( true ) {
          while ((uVar5 & 0x80) == 0) {
            uVar3 = uVar5 & 0x7f;
            if (iVar7 < (int)uVar3) goto LAB_006f6090;
            bVar4 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            iVar7 = iVar7 - uVar3;
            uVar5 = (uint)bVar4;
          }
          uVar3 = uVar5 & 0x3f;
          if (iVar7 < (int)uVar3) break;
          if ((uVar5 & 0x40) == 0) {
            uVar5 = (uint)pbVar8[uVar3];
            pbVar8 = pbVar8 + uVar3 + 1;
            iVar7 = iVar7 - uVar3;
          }
          else {
            uVar5 = (uint)pbVar8[1];
            pbVar8 = pbVar8 + 2;
            iVar7 = iVar7 - uVar3;
          }
        }
LAB_006f6090:
        uVar3 = uVar3 - iVar7;
        if (((byte)uVar5 & 0xc0) == 0x80) {
          pbVar8 = pbVar8 + iVar7;
        }
        auto param_10_after_write = param_9; /* compiler stack-slot lifetime split */
        auto param_6_after_write = pbVar8; /* compiler stack-slot lifetime split */
        if ((int)uVar3 <= param_9) {
          do {
            param_10_after_write = param_10_after_write - uVar3;
            if ((uVar5 & 0x80) == 0) {
              param_1 = param_1 + uVar3;
              param_12 = param_12 + uVar3;
              param_3 = param_3 + uVar3;
            }
            else if ((uVar5 & 0x40) == 0) {
              if (-1 < (int)(uVar3 - 1)) {
                do {
                  if (*param_3 < param_5) {
                    bVar4 = *param_12;
                    iVar7 = param_14;
                  }
                  else {
                    bVar4 = *param_6_after_write;
                    iVar7 = param_11;
                  }
                  *param_1 = *(undefined1 *)((uint)bVar4 + iVar7);
                  param_3 = param_3 + 1;
                  param_1 = param_1 + 1;
                  param_12 = param_12 + 1;
                  param_6_after_write = param_6_after_write + 1;
                  uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
              }
            }
            else {
              uVar1 = *(undefined1 *)((uint)*param_6_after_write + param_11);
              param_6_after_write = param_6_after_write + 1;
              if (-1 < (int)(uVar3 - 1)) {
                do {
                  if (*param_3 < param_5) {
                    *param_1 = *(undefined1 *)((uint)*param_12 + param_14);
                  }
                  else {
                    *param_1 = uVar1;
                  }
                  param_3 = param_3 + 1;
                  param_1 = param_1 + 1;
                  param_12 = param_12 + 1;
                  uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
              }
            }
            if (param_10_after_write < 1) {
              uVar3 = 0;
              break;
            }
            bVar4 = *param_6_after_write;
            uVar5 = (uint)bVar4;
            param_6_after_write = param_6_after_write + 1;
            if ((bVar4 & 0x80) == 0) {
              uVar3 = uVar5 & 0x7f;
            }
            else {
              uVar3 = uVar5 & 0x3f;
            }
          } while ((int)uVar3 <= param_10_after_write);
        }
        uVar3 = uVar3 - param_10_after_write;
        bVar4 = (byte)uVar5;
        pbVar8 = param_6_after_write;
        if ((uVar5 & 0x80) == 0) {
          param_1 = param_1 + param_10_after_write;
          param_12 = param_12 + param_10_after_write;
          param_3 = param_3 + param_10_after_write;
        }
        else if ((uVar5 & 0x40) == 0) {
          param_6_after_write = (byte *)param_10_after_write;
          if (-1 < param_10_after_write + -1) {
            do {
              if (*param_3 < param_5) {
                bVar2 = *param_12;
                iVar7 = param_14;
              }
              else {
                bVar2 = *pbVar8;
                iVar7 = param_11;
              }
              *param_1 = *(undefined1 *)((uint)bVar2 + iVar7);
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              param_12 = param_12 + 1;
              pbVar8 = pbVar8 + 1;
              param_6_after_write = param_6_after_write + -1;
            } while (param_6_after_write != nullptr);
          }
        }
        else if (0 < param_10_after_write) {
          uVar1 = *(undefined1 *)((uint)*param_6_after_write + param_11);
          pbVar8 = param_6_after_write + 1;
          if (-1 < param_10_after_write + -1) {
            param_6_after_write = (byte *)param_10_after_write;
            do {
              uVar6 = uVar1;
              if (*param_3 < param_5) {
                uVar6 = *(undefined1 *)((uint)*param_12 + param_14);
              }
              *param_1 = uVar6;
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              param_12 = param_12 + 1;
              param_6_after_write = param_6_after_write + -1;
            } while (param_6_after_write != nullptr);
          }
        }
        iVar7 = (param_7 - param_8) - param_9;
        if ((int)uVar3 < iVar7) {
          do {
            iVar7 = iVar7 - uVar3;
            pbVar9 = pbVar8;
            if (((byte)uVar5 & 0xc0) == 0x80) {
              pbVar9 = pbVar8 + uVar3;
            }
            bVar4 = *pbVar9;
            uVar5 = (uint)bVar4;
            pbVar8 = pbVar9 + 1;
            uVar3 = uVar5;
            if (((bVar4 & 0x80) != 0) && (uVar3 = uVar5 & 0x3f, (bVar4 & 0x40) != 0)) {
              pbVar8 = pbVar9 + 2;
            }
          } while ((int)uVar3 < iVar7);
        }
        if ((bVar4 & 0xc0) == 0x80) {
          pbVar8 = pbVar8 + iVar7;
        }
        param_1 = param_1 + (param_2 - param_9);
        param_12 = param_12 + (param_13 - param_9);
        param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
      }
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

// 006F6330 FUN_006f6330
#line 1 "decomp/ST.exe/functions/006F6330/decomp.c"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006F6330(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                 byte *param_13)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  int local_8;

  pbVar3 = param_13 + param_8;
  pbVar9 = (byte *)(param_11 + ((int)pbVar3 >> 3));
  _DAT_00857000 = 1;
  if (-1 < param_10 + -1) {
    local_8 = param_10;
    do {
      uVar4 = (uint)*param_6;
      auto param_6_after_write = param_6 + 1; /* compiler stack-slot lifetime split */
      if (uVar4 == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + param_2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = (ushort *)((int)param_3 + param_4);
      }
      else {
        uVar8 = 0x80 >> ((byte)pbVar3 & 7);
        iVar10 = param_8;
        while( true ) {
          while ((uVar4 & 0x80) == 0) {
            uVar1 = uVar4 & 0x7f;
            if (iVar10 < (int)uVar1) goto LAB_006f63e0;
            iVar10 = iVar10 - uVar1;
            bVar6 = *param_6_after_write;
            param_6_after_write = param_6_after_write + 1;
            uVar4 = (uint)bVar6;
          }
          uVar1 = uVar4 & 0x3f;
          if (iVar10 < (int)uVar1) break;
          if ((uVar4 & 0x40) == 0) {
            iVar10 = iVar10 - uVar1;
            uVar4 = (uint)param_6_after_write[uVar1];
            param_6_after_write = param_6_after_write + uVar1 + 1;
          }
          else {
            iVar10 = iVar10 - uVar1;
            uVar4 = (uint)param_6_after_write[1];
            param_6_after_write = param_6_after_write + 2;
          }
        }
LAB_006f63e0:
        pbVar2 = (byte *)(uVar1 - iVar10);
        if (((byte)uVar4 & 0xc0) == 0x80) {
          param_6_after_write = param_6_after_write + iVar10;
        }
        auto param_10_after_write = param_9; /* compiler stack-slot lifetime split */
        pbVar11 = param_1;
        auto param_13_after_write = pbVar9; /* compiler stack-slot lifetime split */
        if ((int)pbVar2 <= param_9) {
          do {
            param_10_after_write = param_10_after_write - (int)pbVar2;
            if ((uVar4 & 0x80) == 0) {
              pbVar11 = pbVar11 + (int)pbVar2;
              param_3 = param_3 + (int)pbVar2;
              uVar8 = ((uVar8 & 0xff) << 8) >> ((byte)pbVar2 & 7);
              if (uVar8 < 0x81) {
                uVar8 = uVar8 & 0xff;
                param_13_after_write = param_13_after_write + ((int)pbVar2 >> 3) + 1;
              }
              else {
                uVar8 = uVar8 >> 8 & 0xff;
                param_13_after_write = param_13_after_write + ((int)pbVar2 >> 3);
              }
            }
            else if ((uVar4 & 0x40) == 0) {
              if (-1 < (int)(pbVar2 + -1)) {
                do {
                  if (((*param_13_after_write & (byte)uVar8) == 0) && (param_5 <= *param_3)) {
                    *pbVar11 = *param_6_after_write;
                  }
                  param_3 = param_3 + 1;
                  pbVar11 = pbVar11 + 1;
                  param_6_after_write = param_6_after_write + 1;
                  bVar6 = (byte)uVar8 >> 1;
                  uVar8 = (uint)bVar6;
                  if (bVar6 == 0) {
                    uVar8 = 0x80;
                    param_13_after_write = param_13_after_write + 1;
                  }
                  pbVar2 = pbVar2 + -1;
                } while (pbVar2 != nullptr);
              }
            }
            else {
              bVar6 = *param_6_after_write;
              param_6_after_write = param_6_after_write + 1;
              param_1 = pbVar2;
              if (-1 < (int)(pbVar2 + -1)) {
                do {
                  if (((*param_13_after_write & (byte)uVar8) == 0) && (param_5 <= *param_3)) {
                    *pbVar11 = bVar6;
                  }
                  param_3 = param_3 + 1;
                  pbVar11 = pbVar11 + 1;
                  bVar5 = (byte)uVar8 >> 1;
                  uVar8 = (uint)bVar5;
                  if (bVar5 == 0) {
                    uVar8 = 0x80;
                    param_13_after_write = param_13_after_write + 1;
                  }
                  param_1 = param_1 + -1;
                } while (param_1 != nullptr);
              }
            }
            param_1 = pbVar11;
            if (param_10_after_write < 1) {
              pbVar2 = nullptr;
              break;
            }
            bVar6 = *param_6_after_write;
            uVar4 = (uint)bVar6;
            param_6_after_write = param_6_after_write + 1;
            if ((bVar6 & 0x80) == 0) {
              pbVar2 = (byte *)(uVar4 & 0x7f);
            }
            else {
              pbVar2 = (byte *)(uVar4 & 0x3f);
            }
          } while ((int)pbVar2 <= param_10_after_write);
        }
        uVar1 = (int)pbVar2 - param_10_after_write;
        bVar6 = (byte)uVar4;
        if ((uVar4 & 0x80) == 0) {
          param_1 = param_1 + param_10_after_write;
          param_3 = param_3 + param_10_after_write;
        }
        else if ((uVar4 & 0x40) == 0) {
          if (-1 < param_10_after_write + -1) {
            do {
              if (((*param_13_after_write & (byte)uVar8) == 0) && (param_5 <= *param_3)) {
                *param_1 = *param_6_after_write;
              }
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              param_6_after_write = param_6_after_write + 1;
              bVar5 = (byte)uVar8 >> 1;
              uVar8 = (uint)bVar5;
              if (bVar5 == 0) {
                uVar8 = 0x80;
                param_13_after_write = param_13_after_write + 1;
              }
              param_10_after_write = param_10_after_write + -1;
            } while (param_10_after_write != 0);
          }
        }
        else if (0 < param_10_after_write) {
          bVar5 = *param_6_after_write;
          param_6_after_write = param_6_after_write + 1;
          if (-1 < param_10_after_write + -1) {
            do {
              if (((*param_13_after_write & (byte)uVar8) == 0) && (param_5 <= *param_3)) {
                *param_1 = bVar5;
              }
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              bVar7 = (byte)uVar8 >> 1;
              uVar8 = (uint)bVar7;
              if (bVar7 == 0) {
                uVar8 = 0x80;
                param_13_after_write = param_13_after_write + 1;
              }
              param_10_after_write = param_10_after_write + -1;
            } while (param_10_after_write != 0);
          }
        }
        iVar10 = (param_7 - param_8) - param_9;
        if ((int)uVar1 < iVar10) {
          do {
            iVar10 = iVar10 - uVar1;
            if (((byte)uVar4 & 0xc0) == 0x80) {
              param_6_after_write = param_6_after_write + uVar1;
            }
            bVar6 = *param_6_after_write;
            uVar4 = (uint)bVar6;
            uVar1 = uVar4;
            pbVar2 = param_6_after_write + 1;
            if (((bVar6 & 0x80) != 0) && (uVar1 = uVar4 & 0x3f, (bVar6 & 0x40) != 0)) {
              pbVar2 = param_6_after_write + 2;
            }
            param_6_after_write = pbVar2;
          } while ((int)uVar1 < iVar10);
        }
        if ((bVar6 & 0xc0) == 0x80) {
          param_6_after_write = param_6_after_write + iVar10;
        }
        param_1 = param_1 + (param_2 - param_9);
        param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
      }
      pbVar9 = pbVar9 + param_12;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

// 006F66C0 FUN_006f66c0
#line 1 "decomp/ST.exe/functions/006F66C0/decomp.c"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006F66C0(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                 byte *param_13,byte *param_14,int param_15,int param_16)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  int local_8;

  pbVar4 = param_13 + param_8;
  pbVar1 = (byte *)(param_11 + ((int)pbVar4 >> 3));
  _DAT_00857000 = 1;
  if (-1 < param_10 + -1) {
    local_8 = param_10;
    do {
      uVar9 = (uint)*param_6;
      auto param_6_after_write = param_6 + 1; /* compiler stack-slot lifetime split */
      if (uVar9 == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + param_2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_14 = param_14 + param_15;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = (ushort *)((int)param_3 + param_4);
      }
      else {
        uVar8 = 0x80 >> ((byte)pbVar4 & 7);
        iVar10 = param_8;
        while( true ) {
          while ((uVar9 & 0x80) == 0) {
            uVar2 = uVar9 & 0x7f;
            if (iVar10 < (int)uVar2) goto LAB_006f6770;
            iVar10 = iVar10 - uVar2;
            bVar6 = *param_6_after_write;
            param_6_after_write = param_6_after_write + 1;
            uVar9 = (uint)bVar6;
          }
          uVar2 = uVar9 & 0x3f;
          if (iVar10 < (int)uVar2) break;
          if ((uVar9 & 0x40) == 0) {
            iVar10 = iVar10 - uVar2;
            uVar9 = (uint)param_6_after_write[uVar2];
            param_6_after_write = param_6_after_write + uVar2 + 1;
          }
          else {
            iVar10 = iVar10 - uVar2;
            uVar9 = (uint)param_6_after_write[1];
            param_6_after_write = param_6_after_write + 2;
          }
        }
LAB_006f6770:
        pbVar3 = (byte *)(uVar2 - iVar10);
        if (((byte)uVar9 & 0xc0) == 0x80) {
          param_6_after_write = param_6_after_write + iVar10;
        }
        auto param_10_after_write = param_9; /* compiler stack-slot lifetime split */
        pbVar11 = param_1;
        auto param_13_after_write = pbVar1; /* compiler stack-slot lifetime split */
        if ((int)pbVar3 <= param_9) {
          do {
            param_10_after_write = param_10_after_write - (int)pbVar3;
            if ((uVar9 & 0x80) == 0) {
              pbVar11 = pbVar11 + (int)pbVar3;
              param_14 = param_14 + (int)pbVar3;
              param_3 = param_3 + (int)pbVar3;
              uVar8 = ((uVar8 & 0xff) << 8) >> ((byte)pbVar3 & 7);
              if (uVar8 < 0x81) {
                uVar8 = uVar8 & 0xff;
                param_13_after_write = param_13_after_write + ((int)pbVar3 >> 3) + 1;
              }
              else {
                uVar8 = uVar8 >> 8 & 0xff;
                param_13_after_write = param_13_after_write + ((int)pbVar3 >> 3);
              }
            }
            else if ((uVar9 & 0x40) == 0) {
              if (-1 < (int)(pbVar3 + -1)) {
                do {
                  if ((*param_13_after_write & (byte)uVar8) == 0) {
                    if (*param_3 < param_5) {
                      *pbVar11 = *(byte *)((uint)*param_14 + param_16);
                    }
                    else {
                      *pbVar11 = *param_6_after_write;
                    }
                  }
                  param_3 = param_3 + 1;
                  pbVar11 = pbVar11 + 1;
                  param_14 = param_14 + 1;
                  param_6_after_write = param_6_after_write + 1;
                  bVar6 = (byte)uVar8 >> 1;
                  uVar8 = (uint)bVar6;
                  if (bVar6 == 0) {
                    uVar8 = 0x80;
                    param_13_after_write = param_13_after_write + 1;
                  }
                  pbVar3 = pbVar3 + -1;
                } while (pbVar3 != nullptr);
              }
            }
            else {
              bVar6 = *param_6_after_write;
              param_6_after_write = param_6_after_write + 1;
              param_1 = pbVar3;
              if (-1 < (int)(pbVar3 + -1)) {
                do {
                  if ((*param_13_after_write & (byte)uVar8) == 0) {
                    if (*param_3 < param_5) {
                      *pbVar11 = *(byte *)((uint)*param_14 + param_16);
                    }
                    else {
                      *pbVar11 = bVar6;
                    }
                  }
                  param_3 = param_3 + 1;
                  pbVar11 = pbVar11 + 1;
                  param_14 = param_14 + 1;
                  bVar5 = (byte)uVar8 >> 1;
                  uVar8 = (uint)bVar5;
                  if (bVar5 == 0) {
                    uVar8 = 0x80;
                    param_13_after_write = param_13_after_write + 1;
                  }
                  param_1 = param_1 + -1;
                } while (param_1 != nullptr);
              }
            }
            param_1 = pbVar11;
            if (param_10_after_write < 1) {
              pbVar3 = nullptr;
              break;
            }
            bVar6 = *param_6_after_write;
            uVar9 = (uint)bVar6;
            param_6_after_write = param_6_after_write + 1;
            if ((bVar6 & 0x80) == 0) {
              pbVar3 = (byte *)(uVar9 & 0x7f);
            }
            else {
              pbVar3 = (byte *)(uVar9 & 0x3f);
            }
          } while ((int)pbVar3 <= param_10_after_write);
        }
        uVar2 = (int)pbVar3 - param_10_after_write;
        bVar6 = (byte)uVar9;
        if ((uVar9 & 0x80) == 0) {
          pbVar3 = param_1 + param_10_after_write;
          param_14 = param_14 + param_10_after_write;
          param_3 = param_3 + param_10_after_write;
        }
        else {
          pbVar3 = param_1;
          if ((uVar9 & 0x40) == 0) {
            param_1 = (byte *)param_10_after_write;
            if (-1 < param_10_after_write + -1) {
              do {
                if ((*param_13_after_write & (byte)uVar8) == 0) {
                  if (*param_3 < param_5) {
                    bVar5 = *(byte *)((uint)*param_14 + param_16);
                  }
                  else {
                    bVar5 = *param_6_after_write;
                  }
                  *pbVar3 = bVar5;
                }
                param_3 = param_3 + 1;
                pbVar3 = pbVar3 + 1;
                param_14 = param_14 + 1;
                param_6_after_write = param_6_after_write + 1;
                bVar5 = (byte)uVar8 >> 1;
                uVar8 = (uint)bVar5;
                if (bVar5 == 0) {
                  uVar8 = 0x80;
                  param_13_after_write = param_13_after_write + 1;
                }
                param_1 = param_1 + -1;
              } while (param_1 != nullptr);
            }
          }
          else if (0 < param_10_after_write) {
            bVar5 = *param_6_after_write;
            param_6_after_write = param_6_after_write + 1;
            if (-1 < param_10_after_write + -1) {
              do {
                if ((*param_13_after_write & (byte)uVar8) == 0) {
                  if (*param_3 < param_5) {
                    *param_1 = *(byte *)((uint)*param_14 + param_16);
                  }
                  else {
                    *param_1 = bVar5;
                  }
                }
                param_3 = param_3 + 1;
                pbVar3 = param_1 + 1;
                param_14 = param_14 + 1;
                bVar7 = (byte)uVar8 >> 1;
                uVar8 = (uint)bVar7;
                if (bVar7 == 0) {
                  uVar8 = 0x80;
                  param_13_after_write = param_13_after_write + 1;
                }
                param_10_after_write = param_10_after_write + -1;
                param_1 = pbVar3;
              } while (param_10_after_write != 0);
            }
          }
        }
        iVar10 = (param_7 - param_8) - param_9;
        if ((int)uVar2 < iVar10) {
          do {
            iVar10 = iVar10 - uVar2;
            if (((byte)uVar9 & 0xc0) == 0x80) {
              param_6_after_write = param_6_after_write + uVar2;
            }
            bVar6 = *param_6_after_write;
            uVar9 = (uint)bVar6;
            uVar2 = uVar9;
            pbVar11 = param_6_after_write + 1;
            if (((bVar6 & 0x80) != 0) && (uVar2 = uVar9 & 0x3f, (bVar6 & 0x40) != 0)) {
              pbVar11 = param_6_after_write + 2;
            }
            param_6_after_write = pbVar11;
          } while ((int)uVar2 < iVar10);
        }
        if ((bVar6 & 0xc0) == 0x80) {
          param_6_after_write = param_6_after_write + iVar10;
        }
        param_1 = pbVar3 + (param_2 - param_9);
        param_14 = param_14 + (param_15 - param_9);
        param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
      }
      pbVar1 = pbVar1 + param_12;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

// 006F6AE0 FUN_006f6ae0
#line 4 "decomp/ST.exe/functions/006F6AE0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006F6AE0(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12,byte *param_13,int param_14)

{
  undefined1 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  undefined1 *puVar10;
  int local_c;
  uint local_8;

  pbVar3 = param_13 + param_8;
  _DAT_00857000 = 1;
  pbVar8 = (byte *)(param_11 + ((int)pbVar3 >> 3));
  if (-1 < param_10 + -1) {
    local_c = param_10;
    do {
      uVar4 = (uint)*param_6;
      auto param_6_after_write = param_6 + 1; /* compiler stack-slot lifetime split */
      if (uVar4 == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + param_2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = (ushort *)((int)param_3 + param_4);
      }
      else {
        uVar7 = 0x80 >> ((byte)pbVar3 & 7);
        iVar9 = param_8;
        while( true ) {
          while ((uVar4 & 0x80) == 0) {
            local_8 = uVar4 & 0x7f;
            if (iVar9 < (int)local_8) goto LAB_006f6b90;
            iVar9 = iVar9 - local_8;
            bVar5 = *param_6_after_write;
            param_6_after_write = param_6_after_write + 1;
            uVar4 = (uint)bVar5;
          }
          local_8 = uVar4 & 0x3f;
          if (iVar9 < (int)local_8) break;
          if ((uVar4 & 0x40) == 0) {
            iVar9 = iVar9 - local_8;
            uVar4 = (uint)param_6_after_write[local_8];
            param_6_after_write = param_6_after_write + local_8 + 1;
          }
          else {
            iVar9 = iVar9 - local_8;
            uVar4 = (uint)param_6_after_write[1];
            param_6_after_write = param_6_after_write + 2;
          }
        }
LAB_006f6b90:
        local_8 = local_8 - iVar9;
        if (((byte)uVar4 & 0xc0) == 0x80) {
          param_6_after_write = param_6_after_write + iVar9;
        }
        auto param_10_after_write = param_9; /* compiler stack-slot lifetime split */
        puVar10 = param_1;
        auto param_13_after_write = pbVar8; /* compiler stack-slot lifetime split */
        if ((int)local_8 <= param_9) {
          do {
            param_10_after_write = param_10_after_write - local_8;
            if ((uVar4 & 0x80) == 0) {
              puVar10 = puVar10 + local_8;
              param_3 = param_3 + local_8;
              uVar7 = ((uVar7 & 0xff) << 8) >> ((byte)local_8 & 7);
              param_1 = puVar10;
              if (uVar7 < 0x81) {
                uVar7 = uVar7 & 0xff;
                param_13_after_write = param_13_after_write + ((int)local_8 >> 3) + 1;
              }
              else {
                uVar7 = uVar7 >> 8 & 0xff;
                param_13_after_write = param_13_after_write + ((int)local_8 >> 3);
              }
            }
            else if ((uVar4 & 0x40) == 0) {
              if (-1 < (int)(local_8 - 1)) {
                do {
                  if (((*param_13_after_write & (byte)uVar7) == 0) && (param_5 <= *param_3)) {
                    *puVar10 = *(undefined1 *)((uint)*param_6_after_write + param_14);
                  }
                  param_3 = param_3 + 1;
                  puVar10 = puVar10 + 1;
                  param_6_after_write = param_6_after_write + 1;
                  bVar5 = (byte)uVar7 >> 1;
                  uVar7 = (uint)bVar5;
                  if (bVar5 == 0) {
                    uVar7 = 0x80;
                    param_13_after_write = param_13_after_write + 1;
                  }
                  local_8 = local_8 - 1;
                  param_1 = puVar10;
                } while (local_8 != 0);
              }
            }
            else {
              uVar1 = *(undefined1 *)((uint)*param_6_after_write + param_14);
              param_6_after_write = param_6_after_write + 1;
              puVar10 = param_1;
              if (-1 < (int)(local_8 - 1)) {
                do {
                  if (((*param_13_after_write & (byte)uVar7) == 0) && (param_5 <= *param_3)) {
                    *param_1 = uVar1;
                  }
                  param_3 = param_3 + 1;
                  param_1 = param_1 + 1;
                  bVar5 = (byte)uVar7 >> 1;
                  uVar7 = (uint)bVar5;
                  if (bVar5 == 0) {
                    uVar7 = 0x80;
                    param_13_after_write = param_13_after_write + 1;
                  }
                  local_8 = local_8 - 1;
                  puVar10 = param_1;
                } while (local_8 != 0);
              }
            }
            if (param_10_after_write < 1) {
              local_8 = 0;
              break;
            }
            bVar5 = *param_6_after_write;
            uVar4 = (uint)bVar5;
            param_6_after_write = param_6_after_write + 1;
            if ((bVar5 & 0x80) == 0) {
              local_8 = uVar4 & 0x7f;
            }
            else {
              local_8 = uVar4 & 0x3f;
            }
          } while ((int)local_8 <= param_10_after_write);
        }
        local_8 = local_8 - param_10_after_write;
        bVar5 = (byte)uVar4;
        if ((uVar4 & 0x80) == 0) {
          param_3 = param_3 + param_10_after_write;
          puVar10 = puVar10 + param_10_after_write;
        }
        else if ((uVar4 & 0x40) == 0) {
          if (-1 < param_10_after_write + -1) {
            do {
              if (((*param_13_after_write & (byte)uVar7) == 0) && (puVar10 = param_1, param_5 <= *param_3)) {
                *param_1 = *(undefined1 *)((uint)*param_6_after_write + param_14);
              }
              param_3 = param_3 + 1;
              puVar10 = puVar10 + 1;
              param_6_after_write = param_6_after_write + 1;
              bVar6 = (byte)uVar7 >> 1;
              uVar7 = (uint)bVar6;
              if (bVar6 == 0) {
                uVar7 = 0x80;
                param_13_after_write = param_13_after_write + 1;
              }
              param_10_after_write = param_10_after_write + -1;
              param_1 = puVar10;
            } while (param_10_after_write != 0);
          }
        }
        else if (0 < param_10_after_write) {
          uVar1 = *(undefined1 *)((uint)*param_6_after_write + param_14);
          param_6_after_write = param_6_after_write + 1;
          puVar10 = param_1;
          if (-1 < param_10_after_write + -1) {
            do {
              if (((*param_13_after_write & (byte)uVar7) == 0) && (param_5 <= *param_3)) {
                *param_1 = uVar1;
              }
              param_3 = param_3 + 1;
              puVar10 = param_1 + 1;
              bVar6 = (byte)uVar7 >> 1;
              uVar7 = (uint)bVar6;
              if (bVar6 == 0) {
                uVar7 = 0x80;
                param_13_after_write = param_13_after_write + 1;
              }
              param_10_after_write = param_10_after_write + -1;
              param_1 = puVar10;
            } while (param_10_after_write != 0);
          }
        }
        iVar9 = (param_7 - param_8) - param_9;
        if ((int)local_8 < iVar9) {
          do {
            iVar9 = iVar9 - local_8;
            if (((byte)uVar4 & 0xc0) == 0x80) {
              param_6_after_write = param_6_after_write + local_8;
            }
            bVar5 = *param_6_after_write;
            uVar4 = (uint)bVar5;
            local_8 = uVar4;
            pbVar2 = param_6_after_write + 1;
            if (((bVar5 & 0x80) != 0) && (local_8 = uVar4 & 0x3f, (bVar5 & 0x40) != 0)) {
              pbVar2 = param_6_after_write + 2;
            }
            param_6_after_write = pbVar2;
          } while ((int)local_8 < iVar9);
        }
        if ((bVar5 & 0xc0) == 0x80) {
          param_6_after_write = param_6_after_write + iVar9;
        }
        param_1 = puVar10 + (param_2 - param_9);
        param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
      }
      pbVar8 = pbVar8 + param_12;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

// 006F6EA0 FUN_006f6ea0
#line 1 "decomp/ST.exe/functions/006F6EA0/decomp.c"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006F7166 exact 1-byte output store from zero-filled partial register load at 006F712A;
   exact partial-width MOV at 006F7161 */

void st::fn_006F6EA0(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                 byte *param_13,int param_14,byte *param_15,int param_16,int param_17)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  int local_c;
  uint local_8;

  pbVar3 = param_13 + param_8;
  _DAT_00857000 = 1;
  pbVar2 = (byte *)(param_11 + ((int)pbVar3 >> 3));
  if (-1 < param_10 + -1) {
    local_c = param_10;
    do {
      uVar8 = (uint)*param_6;
      auto param_6_after_write = param_6 + 1; /* compiler stack-slot lifetime split */
      if (uVar8 == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + param_2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_15 = param_15 + param_16;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = (ushort *)((int)param_3 + param_4);
      }
      else {
        uVar7 = 0x80 >> ((byte)pbVar3 & 7);
        iVar9 = param_8;
        while( true ) {
          while ((uVar8 & 0x80) == 0) {
            local_8 = uVar8 & 0x7f;
            if (iVar9 < (int)local_8) goto LAB_006f6f50;
            iVar9 = iVar9 - local_8;
            bVar5 = *param_6_after_write;
            param_6_after_write = param_6_after_write + 1;
            uVar8 = (uint)bVar5;
          }
          local_8 = uVar8 & 0x3f;
          if (iVar9 < (int)local_8) break;
          if ((uVar8 & 0x40) == 0) {
            iVar9 = iVar9 - local_8;
            uVar8 = (uint)param_6_after_write[local_8];
            param_6_after_write = param_6_after_write + local_8 + 1;
          }
          else {
            iVar9 = iVar9 - local_8;
            uVar8 = (uint)param_6_after_write[1];
            param_6_after_write = param_6_after_write + 2;
          }
        }
LAB_006f6f50:
        local_8 = local_8 - iVar9;
        if (((byte)uVar8 & 0xc0) == 0x80) {
          param_6_after_write = param_6_after_write + iVar9;
        }
        auto param_10_after_write = param_9; /* compiler stack-slot lifetime split */
        pbVar10 = param_1;
        auto param_13_after_write = pbVar2; /* compiler stack-slot lifetime split */
        if ((int)local_8 <= param_9) {
          do {
            param_10_after_write = param_10_after_write - local_8;
            if ((uVar8 & 0x80) == 0) {
              pbVar10 = pbVar10 + local_8;
              param_15 = param_15 + local_8;
              param_3 = param_3 + local_8;
              uVar7 = ((uVar7 & 0xff) << 8) >> ((byte)local_8 & 7);
              param_1 = pbVar10;
              if (uVar7 < 0x81) {
                uVar7 = uVar7 & 0xff;
                param_13_after_write = param_13_after_write + ((int)local_8 >> 3) + 1;
              }
              else {
                uVar7 = uVar7 >> 8 & 0xff;
                param_13_after_write = param_13_after_write + ((int)local_8 >> 3);
              }
            }
            else if ((uVar8 & 0x40) == 0) {
              if (-1 < (int)(local_8 - 1)) {
                do {
                  if ((*param_13_after_write & (byte)uVar7) == 0) {
                    if (*param_3 < param_5) {
                      *pbVar10 = *(byte *)((uint)*param_15 + param_17);
                    }
                    else {
                      *pbVar10 = *(byte *)((uint)*param_6_after_write + param_14);
                    }
                  }
                  param_3 = param_3 + 1;
                  pbVar10 = pbVar10 + 1;
                  param_15 = param_15 + 1;
                  param_6_after_write = param_6_after_write + 1;
                  bVar5 = (byte)uVar7 >> 1;
                  uVar7 = (uint)bVar5;
                  if (bVar5 == 0) {
                    uVar7 = 0x80;
                    param_13_after_write = param_13_after_write + 1;
                  }
                  local_8 = local_8 - 1;
                  param_1 = pbVar10;
                } while (local_8 != 0);
              }
            }
            else {
              bVar5 = *(byte *)((uint)*param_6_after_write + param_14);
              param_6_after_write = param_6_after_write + 1;
              pbVar10 = param_1;
              if (-1 < (int)(local_8 - 1)) {
                do {
                  if ((*param_13_after_write & (byte)uVar7) == 0) {
                    if (*param_3 < param_5) {
                      *param_1 = *(byte *)((uint)*param_15 + param_17);
                    }
                    else {
                      *param_1 = bVar5;
                    }
                  }
                  param_3 = param_3 + 1;
                  param_1 = param_1 + 1;
                  param_15 = param_15 + 1;
                  bVar4 = (byte)uVar7 >> 1;
                  uVar7 = (uint)bVar4;
                  if (bVar4 == 0) {
                    uVar7 = 0x80;
                    param_13_after_write = param_13_after_write + 1;
                  }
                  local_8 = local_8 - 1;
                  pbVar10 = param_1;
                } while (local_8 != 0);
              }
            }
            if (param_10_after_write < 1) {
              local_8 = 0;
              break;
            }
            bVar5 = *param_6_after_write;
            uVar8 = (uint)bVar5;
            param_6_after_write = param_6_after_write + 1;
            if ((bVar5 & 0x80) == 0) {
              local_8 = uVar8 & 0x7f;
            }
            else {
              local_8 = uVar8 & 0x3f;
            }
          } while ((int)local_8 <= param_10_after_write);
        }
        local_8 = local_8 - param_10_after_write;
        bVar5 = (byte)uVar8;
        if ((uVar8 & 0x80) == 0) {
          param_15 = param_15 + param_10_after_write;
          param_3 = param_3 + param_10_after_write;
          pbVar10 = pbVar10 + param_10_after_write;
        }
        else if ((uVar8 & 0x40) == 0) {
          param_1 = (byte *)param_10_after_write;
          if (-1 < param_10_after_write + -1) {
            do {
              if ((*param_13_after_write & (byte)uVar7) == 0) {
                if (*param_3 < param_5) {
                  bVar4 = *param_15;
                  iVar9 = param_17;
                }
                else {
                  bVar4 = *param_6_after_write;
                  iVar9 = param_14;
                }
                *pbVar10 = *(byte *)((uint)bVar4 + iVar9);
              }
              param_3 = param_3 + 1;
              pbVar10 = pbVar10 + 1;
              param_15 = param_15 + 1;
              param_6_after_write = param_6_after_write + 1;
              bVar4 = (byte)uVar7 >> 1;
              uVar7 = (uint)bVar4;
              if (bVar4 == 0) {
                uVar7 = 0x80;
                param_13_after_write = param_13_after_write + 1;
              }
              param_1 = param_1 + -1;
            } while (param_1 != nullptr);
          }
        }
        else if (0 < param_10_after_write) {
          bVar4 = *(byte *)((uint)*param_6_after_write + param_14);
          param_6_after_write = param_6_after_write + 1;
          pbVar10 = param_1;
          if (-1 < param_10_after_write + -1) {
            do {
              if ((*param_13_after_write & (byte)uVar7) == 0) {
                if (*param_3 < param_5) {
                  *param_1 = *(byte *)((uint)*param_15 + param_17);
                }
                else {
                  *param_1 = bVar4;
                }
              }
              param_3 = param_3 + 1;
              pbVar10 = param_1 + 1;
              param_15 = param_15 + 1;
              bVar6 = (byte)uVar7 >> 1;
              uVar7 = (uint)bVar6;
              if (bVar6 == 0) {
                uVar7 = 0x80;
                param_13_after_write = param_13_after_write + 1;
              }
              param_10_after_write = param_10_after_write + -1;
              param_1 = pbVar10;
            } while (param_10_after_write != 0);
          }
        }
        iVar9 = (param_7 - param_8) - param_9;
        if ((int)local_8 < iVar9) {
          do {
            iVar9 = iVar9 - local_8;
            if (((byte)uVar8 & 0xc0) == 0x80) {
              param_6_after_write = param_6_after_write + local_8;
            }
            bVar5 = *param_6_after_write;
            uVar8 = (uint)bVar5;
            local_8 = uVar8;
            pbVar1 = param_6_after_write + 1;
            if (((bVar5 & 0x80) != 0) && (local_8 = uVar8 & 0x3f, (bVar5 & 0x40) != 0)) {
              pbVar1 = param_6_after_write + 2;
            }
            param_6_after_write = pbVar1;
          } while ((int)local_8 < iVar9);
        }
        if ((bVar5 & 0xc0) == 0x80) {
          param_6_after_write = param_6_after_write + iVar9;
        }
        param_1 = pbVar10 + (param_2 - param_9);
        param_15 = param_15 + (param_16 - param_9);
        param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
      }
      pbVar2 = pbVar2 + param_12;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

// 006F72F0 FUN_006f72f0
#line 4 "decomp/ST.exe/functions/006F72F0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006F72F0(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,byte *param_11,uint param_12,
                 int param_13)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint local_10;
  int local_8;
  byte *pbVar6_mg1;

  _DAT_00857000 = 1;
  pbVar6 = param_11;
joined_r0x006f7307:
  do {
    auto param_10_after_write = param_10 + -1; /* compiler stack-slot lifetime split */
    if (param_10_after_write < 0) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_11 = (byte *)(uint)*param_6;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = param_6 + 1;
    uVar4 = (uint)*pbVar6;
    pbVar6 = pbVar6 + 1;
    uVar3 = param_12;
    if (uVar4 != 0) {
      iVar5 = param_13;
      if (param_11 == nullptr) {
        iVar5 = param_12 - 1;
      }
      while( true ) {
        while ((uVar4 & 0x80) == 0) {
          uVar3 = uVar4 & 0x7f;
          if (iVar5 < (int)uVar3) goto LAB_006f736d;
          iVar5 = iVar5 - uVar3;
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          uVar4 = (uint)bVar1;
        }
        uVar3 = uVar4 & 0x3f;
        if ((uVar4 & 0x40) == 0) {
          pbVar6 = pbVar6 + uVar3;
        }
        else {
          pbVar6 = pbVar6 + 1;
        }
        if (iVar5 < (int)uVar3) break;
        iVar5 = iVar5 - uVar3;
        uVar4 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
      }
LAB_006f736d:
      uVar3 = uVar3 - iVar5;
    }
    iVar5 = param_8;
    if (param_11 != nullptr) {
      do {
        if (((uint)param_11 & 0x80) == 0) {
          local_10 = (uint)param_11 & 0x7f;
          if (iVar5 < (int)local_10) goto LAB_006f73be;
        }
        else {
          local_10 = (uint)param_11 & 0x3f;
          if (iVar5 < (int)local_10) goto LAB_006f73be;
          if (((uint)param_11 & 0x40) == 0) {
            param_6 = param_6 + local_10;
          }
          else {
            param_6 = param_6 + 1;
          }
        }
        param_11 = (byte *)(uint)*param_6;
        param_6 = param_6 + 1;
        iVar5 = iVar5 - local_10;
      } while( true );
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_1 + param_2;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = (ushort *)((int)param_3 + param_4);
  } while( true );
LAB_006f73be:
  local_10 = local_10 - iVar5;
  if (((byte)param_11 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar5;
  }
  local_8 = param_9;
  if ((int)local_10 <= param_9) {
    do {
      local_8 = local_8 - local_10;
      if (((uint)param_11 & 0x80) == 0) {
        param_1 = param_1 + local_10;
        param_3 = param_3 + local_10;
        pbVar7 = pbVar6;
        if ((int)uVar3 < (int)local_10) {
          do {
            local_10 = local_10 - uVar3;
            bVar1 = *pbVar7;
            uVar4 = (uint)bVar1;
            pbVar6 = pbVar7 + 1;
            if ((bVar1 & 0x80) == 0) {
              uVar3 = uVar4 & 0x7f;
            }
            else {
              uVar3 = uVar4 & 0x3f;
              if ((bVar1 & 0x40) == 0) {
                pbVar6 = pbVar6 + uVar3;
              }
              else {
                pbVar6 = pbVar7 + 2;
              }
            }
            pbVar7 = pbVar6;
          } while ((int)uVar3 < (int)local_10);
        }
        uVar3 = uVar3 - local_10;
      }
      else if (((uint)param_11 & 0x40) == 0) {
        if (-1 < (int)(local_10 - 1)) {
          uVar8 = uVar4 & 0x80;
          pbVar7 = pbVar6;
          do {
            if ((uVar8 != 0) && (param_5 <= *param_3)) {
              *param_1 = *param_6;
            }
            param_3 = param_3 + 1;
            param_1 = param_1 + 1;
            param_6 = param_6 + 1;
            uVar3 = uVar3 - 1;
            pbVar6 = pbVar7;
            if ((int)uVar3 < 0) {
              bVar1 = *pbVar7;
              uVar4 = (uint)bVar1;
              pbVar6 = pbVar7 + 1;
              uVar8 = uVar4 & 0x80;
              if ((bVar1 & 0x80) == 0) {
                uVar3 = uVar4 & 0x7f;
              }
              else {
                uVar3 = uVar4 & 0x3f;
                if ((bVar1 & 0x40) == 0) {
                  pbVar6 = pbVar6 + uVar3;
                }
                else {
                  pbVar6 = pbVar7 + 2;
                }
              }
            }
            local_10 = local_10 - 1;
            pbVar7 = pbVar6;
          } while (local_10 != 0);
        }
      }
      else {
        bVar1 = *param_6;
        param_6 = param_6 + 1;
        if (-1 < (int)(local_10 - 1)) {
          uVar8 = uVar4 & 0x80;
          pbVar7 = pbVar6;
          do {
            if ((uVar8 != 0) && (param_5 <= *param_3)) {
              *param_1 = bVar1;
            }
            param_3 = param_3 + 1;
            param_1 = param_1 + 1;
            uVar3 = uVar3 - 1;
            pbVar6 = pbVar7;
            if ((int)uVar3 < 0) {
              bVar2 = *pbVar7;
              uVar4 = (uint)bVar2;
              pbVar6 = pbVar7 + 1;
              uVar8 = uVar4 & 0x80;
              if ((bVar2 & 0x80) == 0) {
                uVar3 = uVar4 & 0x7f;
              }
              else {
                uVar3 = uVar4 & 0x3f;
                if ((bVar2 & 0x40) == 0) {
                  pbVar6 = pbVar6 + uVar3;
                }
                else {
                  pbVar6 = pbVar7 + 2;
                }
              }
            }
            local_10 = local_10 - 1;
            pbVar7 = pbVar6;
          } while (local_10 != 0);
        }
      }
      if (local_8 < 1) {
        local_10 = 0;
        break;
      }
      bVar1 = *param_6;
      param_11 = (byte *)(uint)bVar1;
      param_6 = param_6 + 1;
      if ((bVar1 & 0x80) == 0) {
        local_10 = (uint)param_11 & 0x7f;
      }
      else {
        local_10 = (uint)param_11 & 0x3f;
      }
    } while ((int)local_10 <= local_8);
  }
  pbVar7 = pbVar6;
  if ((0 < local_8) && ((int)uVar3 < 1)) {
    bVar1 = *pbVar6;
    uVar4 = (uint)bVar1;
    pbVar7 = pbVar6 + 1;
    if ((bVar1 & 0x80) == 0) {
      uVar3 = uVar4 & 0x7f;
    }
    else {
      uVar3 = uVar4 & 0x3f;
      if ((bVar1 & 0x40) == 0) {
        pbVar7 = pbVar7 + uVar3;
      }
      else {
        pbVar7 = pbVar6 + 2;
      }
    }
  }
  pbVar6_mg1 = (byte *)(local_10 - local_8);
  if (((uint)param_11 & 0x80) == 0) {
    param_1 = param_1 + local_8;
    param_3 = param_3 + local_8;
    pbVar6 = pbVar7;
    if ((int)uVar3 < local_8) {
      do {
        local_8 = local_8 - uVar3;
        bVar1 = *pbVar6;
        pbVar7 = pbVar6 + 1;
        if ((bVar1 & 0x80) == 0) {
          uVar3 = bVar1 & 0x7f;
        }
        else {
          uVar3 = bVar1 & 0x3f;
          if ((bVar1 & 0x40) == 0) {
            pbVar7 = pbVar7 + uVar3;
          }
          else {
            pbVar7 = pbVar6 + 2;
          }
        }
        pbVar6 = pbVar7;
      } while ((int)uVar3 < local_8);
    }
    uVar3 = uVar3 - local_8;
  }
  else if (((uint)param_11 & 0x40) == 0) {
    if (-1 < local_8 + -1) {
      uVar4 = uVar4 & 0x80;
      local_10 = local_8;
      pbVar6 = pbVar7;
      do {
        if ((uVar4 != 0) && (param_5 <= *param_3)) {
          *param_1 = *param_6;
        }
        param_3 = param_3 + 1;
        param_1 = param_1 + 1;
        param_6 = param_6 + 1;
        uVar3 = uVar3 - 1;
        pbVar7 = pbVar6;
        if ((int)uVar3 < 0) {
          bVar1 = *pbVar6;
          uVar3 = (uint)bVar1;
          pbVar7 = pbVar6 + 1;
          uVar4 = uVar3 & 0x80;
          if ((bVar1 & 0x80) == 0) {
            uVar3 = uVar3 & 0x7f;
          }
          else {
            uVar3 = uVar3 & 0x3f;
            if ((bVar1 & 0x40) == 0) {
              pbVar7 = pbVar7 + uVar3;
            }
            else {
              pbVar7 = pbVar6 + 2;
            }
          }
        }
        local_10 = local_10 + -1;
        pbVar6 = pbVar7;
      } while (local_10 != 0);
    }
  }
  else if (0 < local_8) {
    bVar1 = *param_6;
    param_6 = param_6 + 1;
    if (-1 < local_8 + -1) {
      uVar4 = uVar4 & 0x80;
      local_10 = local_8;
      pbVar6 = pbVar7;
      do {
        if ((uVar4 != 0) && (param_5 <= *param_3)) {
          *param_1 = bVar1;
        }
        param_3 = param_3 + 1;
        param_1 = param_1 + 1;
        uVar3 = uVar3 - 1;
        pbVar7 = pbVar6;
        if ((int)uVar3 < 0) {
          bVar2 = *pbVar6;
          uVar3 = (uint)bVar2;
          pbVar7 = pbVar6 + 1;
          uVar4 = uVar3 & 0x80;
          if ((bVar2 & 0x80) == 0) {
            uVar3 = uVar3 & 0x7f;
          }
          else {
            uVar3 = uVar3 & 0x3f;
            if ((bVar2 & 0x40) == 0) {
              pbVar7 = pbVar7 + uVar3;
            }
            else {
              pbVar7 = pbVar6 + 2;
            }
          }
        }
        local_10 = local_10 + -1;
        pbVar6 = pbVar7;
      } while (local_10 != 0);
    }
  }
  iVar5 = (param_7 - param_8) - param_9;
  bVar1 = (byte)param_11;
  if ((int)pbVar6_mg1 < iVar5) {
    do {
      iVar5 = iVar5 - (int)pbVar6_mg1;
      if (((byte)param_11 & 0xc0) == 0x80) {
        param_6 = param_6 + (int)pbVar6_mg1;
      }
      bVar1 = *param_6;
      param_11 = (byte *)(uint)bVar1;
      pbVar6_mg1 = param_11;
      pbVar6 = param_6 + 1;
      if (((bVar1 & 0x80) != 0) &&
         (pbVar6_mg1 = (byte *)((uint)param_11 & 0x3f), (bVar1 & 0x40) != 0)) {
        pbVar6 = param_6 + 2;
      }
      param_6 = pbVar6;
    } while ((int)pbVar6_mg1 < iVar5);
  }
  STPiece<0,1>(param_11) = bVar1;
  if (((byte)param_11 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar5;
  }
  iVar5 = (param_12 - param_9) - param_13;
  pbVar6 = pbVar7;
  if ((int)uVar3 < iVar5) {
    do {
      iVar5 = iVar5 - uVar3;
      bVar1 = *pbVar6;
      pbVar7 = pbVar6 + 1;
      if ((bVar1 & 0x80) == 0) {
        uVar3 = bVar1 & 0x7f;
      }
      else {
        uVar3 = bVar1 & 0x3f;
        if ((bVar1 & 0x40) == 0) {
          pbVar7 = pbVar7 + uVar3;
        }
        else {
          pbVar7 = pbVar6 + 2;
        }
      }
      pbVar6 = pbVar7;
    } while ((int)uVar3 < iVar5);
  }
  param_1 = param_1 + (param_2 - param_9);
  param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
  pbVar6 = pbVar7;
  goto joined_r0x006f7307;
}

// 006F77E0 FUN_006f77e0
#line 4 "decomp/ST.exe/functions/006F77E0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006F77E0(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,byte *param_11,uint param_12,
                 int param_13,int param_14)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  int local_c;
  uint local_8;
  byte *temp_3ff1bd1445;
  byte *pbVar6;
  byte *temp_3f56eb0366;

  _DAT_00857000 = 1;
  pbVar7 = param_11;
joined_r0x006f77f7:
  do {
    auto param_10_after_write = param_10 + -1; /* compiler stack-slot lifetime split */
    if (param_10_after_write < 0) {
      return;
    }
    local_8 = (uint)*param_6;
    uVar4 = (uint)*pbVar7;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = param_6 + 1;
    pbVar7 = pbVar7 + 1;
    uVar3 = param_12;
    if (uVar4 != 0) {
      iVar5 = param_13;
      if (local_8 == 0) {
        iVar5 = param_12 - 1;
      }
      while( true ) {
        while ((uVar4 & 0x80) == 0) {
          uVar3 = uVar4 & 0x7f;
          if (iVar5 < (int)uVar3) goto LAB_006f785d;
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar5 = iVar5 - uVar3;
          uVar4 = (uint)bVar1;
        }
        uVar3 = uVar4 & 0x3f;
        if ((uVar4 & 0x40) == 0) {
          pbVar7 = pbVar7 + uVar3;
        }
        else {
          pbVar7 = pbVar7 + 1;
        }
        if (iVar5 < (int)uVar3) break;
        uVar4 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
        iVar5 = iVar5 - uVar3;
      }
LAB_006f785d:
      uVar3 = uVar3 - iVar5;
    }
    iVar5 = param_8;
    if (local_8 != 0) {
      do {
        if ((local_8 & 0x80) == 0) {
          uVar9 = local_8 & 0x7f;
          if (iVar5 < (int)uVar9) goto LAB_006f78b6;
        }
        else {
          uVar9 = local_8 & 0x3f;
          if (iVar5 < (int)uVar9) goto LAB_006f78b6;
          if ((local_8 & 0x40) == 0) {
            param_6 = param_6 + uVar9;
          }
          else {
            param_6 = param_6 + 1;
          }
        }
        local_8 = (uint)*param_6;
        param_6 = param_6 + 1;
        iVar5 = iVar5 - uVar9;
      } while( true );
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_1 + param_2;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = (ushort *)((int)param_3 + param_4);
  } while( true );
LAB_006f78b6:
  pbVar10 = (byte *)(uVar9 - iVar5);
  if (((byte)local_8 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar5;
  }
  local_c = param_9;
  auto param_11_after_write = pbVar7; /* compiler stack-slot lifetime split */
  if ((int)pbVar10 <= param_9) {
    do {
      local_c = local_c - (int)pbVar10;
      if ((local_8 & 0x80) == 0) {
        param_1 = param_1 + (int)pbVar10;
        param_3 = param_3 + (int)pbVar10;
        pbVar8 = pbVar7;
        if ((int)uVar3 < (int)pbVar10) {
          do {
            pbVar10 = pbVar10 + -uVar3;
            bVar1 = *pbVar8;
            uVar4 = (uint)bVar1;
            pbVar7 = pbVar8 + 1;
            if ((bVar1 & 0x80) == 0) {
              uVar3 = uVar4 & 0x7f;
            }
            else {
              uVar3 = uVar4 & 0x3f;
              if ((bVar1 & 0x40) == 0) {
                pbVar7 = pbVar7 + uVar3;
              }
              else {
                pbVar7 = pbVar8 + 2;
              }
            }
            pbVar8 = pbVar7;
          } while ((int)uVar3 < (int)pbVar10);
        }
        uVar3 = uVar3 - (int)pbVar10;
      }
      else {
        param_11_after_write = pbVar10;
        if ((local_8 & 0x40) == 0) {
          if (-1 < (int)(pbVar10 + -1)) {
            uVar9 = uVar4 & 0x80;
            pbVar10 = pbVar7;
            do {
              if ((uVar9 != 0) && (param_5 <= *param_3)) {
                *param_1 = *param_6;
              }
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              param_6 = param_6 + 1;
              uVar3 = uVar3 - 1;
              pbVar7 = pbVar10;
              if ((int)uVar3 < 0) {
                bVar1 = *pbVar10;
                uVar4 = (uint)bVar1;
                pbVar7 = pbVar10 + 1;
                uVar9 = uVar4 & 0x80;
                if ((bVar1 & 0x80) == 0) {
                  uVar3 = uVar4 & 0x7f;
                }
                else {
                  uVar3 = uVar4 & 0x3f;
                  if ((bVar1 & 0x40) == 0) {
                    pbVar7 = pbVar7 + uVar3;
                  }
                  else {
                    pbVar7 = pbVar10 + 2;
                  }
                }
              }
              param_11_after_write = param_11_after_write + -1;
              pbVar10 = pbVar7;
            } while (param_11_after_write != nullptr);
          }
        }
        else {
          param_6 = param_6 + 1;
          if (-1 < (int)(pbVar10 + -1)) {
            uVar9 = uVar4 & 0x80;
            pbVar10 = pbVar7;
            do {
              if ((uVar9 != 0) && (param_5 <= *param_3)) {
                *param_1 = *(byte *)((uint)*param_6 + param_14);
              }
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              uVar3 = uVar3 - 1;
              pbVar7 = pbVar10;
              if ((int)uVar3 < 0) {
                bVar1 = *pbVar10;
                uVar4 = (uint)bVar1;
                pbVar7 = pbVar10 + 1;
                uVar9 = uVar4 & 0x80;
                if ((bVar1 & 0x80) == 0) {
                  uVar3 = uVar4 & 0x7f;
                }
                else {
                  uVar3 = uVar4 & 0x3f;
                  if ((bVar1 & 0x40) == 0) {
                    pbVar7 = pbVar7 + uVar3;
                  }
                  else {
                    pbVar7 = pbVar10 + 2;
                  }
                }
              }
              param_11_after_write = param_11_after_write + -1;
              pbVar10 = pbVar7;
            } while (param_11_after_write != nullptr);
          }
        }
      }
      param_11_after_write = pbVar7;
      if (local_c < 1) {
        pbVar10 = nullptr;
        break;
      }
      bVar1 = *param_6;
      local_8 = (uint)bVar1;
      param_6 = param_6 + 1;
      if ((bVar1 & 0x80) == 0) {
        pbVar10 = (byte *)(local_8 & 0x7f);
      }
      else {
        pbVar10 = (byte *)(local_8 & 0x3f);
      }
    } while ((int)pbVar10 <= local_c);
  }
  if ((0 < local_c) && ((int)uVar3 < 1)) {
    bVar1 = *param_11_after_write;
    uVar4 = (uint)bVar1;
    if ((bVar1 & 0x80) == 0) {
      uVar3 = uVar4 & 0x7f;
      param_11_after_write = param_11_after_write + 1;
    }
    else {
      uVar3 = uVar4 & 0x3f;
      if ((bVar1 & 0x40) == 0) {
        param_11_after_write = param_11_after_write + 1 + uVar3;
      }
      else {
        param_11_after_write = param_11_after_write + 2;
      }
    }
  }
  uVar9 = (int)pbVar10 - local_c;
  if ((local_8 & 0x80) == 0) {
    param_1 = param_1 + local_c;
    param_3 = param_3 + local_c;
    pbVar6 = param_11_after_write;
    if ((int)uVar3 < local_c) {
      do {
        local_c = local_c - uVar3;
        bVar1 = *pbVar6;
        param_11_after_write = pbVar6 + 1;
        if ((bVar1 & 0x80) == 0) {
          uVar3 = bVar1 & 0x7f;
        }
        else {
          uVar3 = bVar1 & 0x3f;
          if ((bVar1 & 0x40) == 0) {
            param_11_after_write = param_11_after_write + uVar3;
          }
          else {
            param_11_after_write = pbVar6 + 2;
          }
        }
        pbVar6 = param_11_after_write;
      } while ((int)uVar3 < local_c);
    }
    uVar3 = uVar3 - local_c;
  }
  else if ((local_8 & 0x40) == 0) {
    if (-1 < local_c + -1) {
      uVar4 = uVar4 & 0x80;
      temp_3ff1bd1445 = param_11_after_write;
      do {
        if ((uVar4 != 0) && (param_5 <= *param_3)) {
          *param_1 = *(byte *)((uint)*param_6 + param_14);
        }
        param_3 = param_3 + 1;
        param_1 = param_1 + 1;
        param_6 = param_6 + 1;
        uVar3 = uVar3 - 1;
        param_11_after_write = temp_3ff1bd1445;
        if ((int)uVar3 < 0) {
          bVar1 = *temp_3ff1bd1445;
          uVar3 = (uint)bVar1;
          param_11_after_write = temp_3ff1bd1445 + 1;
          uVar4 = uVar3 & 0x80;
          if ((bVar1 & 0x80) == 0) {
            uVar3 = uVar3 & 0x7f;
          }
          else {
            uVar3 = uVar3 & 0x3f;
            if ((bVar1 & 0x40) == 0) {
              param_11_after_write = param_11_after_write + uVar3;
            }
            else {
              param_11_after_write = temp_3ff1bd1445 + 2;
            }
          }
        }
        local_c = local_c + -1;
        temp_3ff1bd1445 = param_11_after_write;
      } while (local_c != 0);
    }
  }
  else if (0 < local_c) {
    bVar1 = *(byte *)((uint)*param_6 + param_14);
    param_6 = param_6 + 1;
    if (-1 < local_c + -1) {
      uVar4 = uVar4 & 0x80;
      do {
        if ((uVar4 != 0) && (param_5 <= *param_3)) {
          *param_1 = bVar1;
        }
        param_3 = param_3 + 1;
        param_1 = param_1 + 1;
        uVar3 = uVar3 - 1;
        if ((int)uVar3 < 0) {
          bVar2 = *param_11_after_write;
          uVar3 = (uint)bVar2;
          uVar4 = uVar3 & 0x80;
          if ((bVar2 & 0x80) == 0) {
            uVar3 = uVar3 & 0x7f;
            param_11_after_write = param_11_after_write + 1;
          }
          else {
            uVar3 = uVar3 & 0x3f;
            if ((bVar2 & 0x40) == 0) {
              param_11_after_write = param_11_after_write + 1 + uVar3;
            }
            else {
              param_11_after_write = param_11_after_write + 2;
            }
          }
        }
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  iVar5 = (param_7 - param_8) - param_9;
  bVar1 = (byte)local_8;
  if ((int)uVar9 < iVar5) {
    do {
      iVar5 = iVar5 - uVar9;
      temp_3f56eb0366 = param_6;
      if (((byte)local_8 & 0xc0) == 0x80) {
        temp_3f56eb0366 = param_6 + uVar9;
      }
      bVar1 = *temp_3f56eb0366;
      local_8 = (uint)bVar1;
      param_6 = temp_3f56eb0366 + 1;
      uVar9 = local_8;
      if (((bVar1 & 0x80) != 0) && (uVar9 = local_8 & 0x3f, (bVar1 & 0x40) != 0)) {
        param_6 = temp_3f56eb0366 + 2;
      }
    } while ((int)uVar9 < iVar5);
  }
  STPiece<0,1>(local_8) = bVar1;
  if (((byte)local_8 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar5;
  }
  iVar5 = (param_12 - param_9) - param_13;
  if ((int)uVar3 < iVar5) {
    do {
      iVar5 = iVar5 - uVar3;
      bVar1 = *param_11_after_write;
      pbVar7 = param_11_after_write + 1;
      if ((bVar1 & 0x80) == 0) {
        uVar3 = bVar1 & 0x7f;
      }
      else {
        uVar3 = bVar1 & 0x3f;
        if ((bVar1 & 0x40) == 0) {
          pbVar7 = pbVar7 + uVar3;
        }
        else {
          pbVar7 = param_11_after_write + 2;
        }
      }
      param_11_after_write = pbVar7;
    } while ((int)uVar3 < iVar5);
  }
  param_1 = param_1 + (param_2 - param_9);
  param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
  pbVar7 = param_11_after_write;
  goto joined_r0x006f77f7;
}

// 006F7D10 FUN_006f7d10
#line 4 "decomp/ST.exe/functions/006F7D10/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006F7D10(undefined1 *param_1,int param_2,byte *param_3,int param_4,ushort *param_5,
                 int param_6,uint param_7,byte *param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int local_8;

  _DAT_00857000 = 1;
  if (-1 < param_12 + -1) {
    local_8 = param_12;
    do {
      uVar4 = (uint)*param_8;
      auto param_8_after_write = param_8 + 1; /* compiler stack-slot lifetime split */
      iVar5 = param_10;
      if (uVar4 == 0) {
        param_1 = param_1 + param_2;
        param_3 = param_3 + param_4;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_5 = (ushort *)((int)param_5 + param_6);
      }
      else {
        while( true ) {
          while ((uVar4 & 0x80) == 0) {
            uVar2 = uVar4 & 0x7f;
            if (iVar5 < (int)uVar2) goto LAB_006f7d83;
            bVar3 = *param_8_after_write;
            param_8_after_write = param_8_after_write + 1;
            iVar5 = iVar5 - uVar2;
            uVar4 = (uint)bVar3;
          }
          uVar2 = uVar4 & 0x3f;
          if (iVar5 < (int)uVar2) break;
          if ((uVar4 & 0x40) == 0) {
            uVar4 = (uint)param_8_after_write[uVar2];
            param_8_after_write = param_8_after_write + uVar2 + 1;
            iVar5 = iVar5 - uVar2;
          }
          else {
            uVar4 = (uint)param_8_after_write[1];
            param_8_after_write = param_8_after_write + 2;
            iVar5 = iVar5 - uVar2;
          }
        }
LAB_006f7d83:
        uVar2 = uVar2 - iVar5;
        if (((byte)uVar4 & 0xc0) == 0x80) {
          param_8_after_write = param_8_after_write + iVar5;
        }
        auto param_12_after_write = param_11; /* compiler stack-slot lifetime split */
        if ((int)uVar2 <= param_11) {
          do {
            param_12_after_write = param_12_after_write - uVar2;
            if ((uVar4 & 0x80) == 0) {
              param_1 = param_1 + uVar2;
              param_3 = param_3 + uVar2;
              param_5 = param_5 + uVar2;
            }
            else if ((uVar4 & 0x40) == 0) {
              if (-1 < (int)(uVar2 - 1)) {
                param_8_after_write = param_8_after_write + uVar2;
                do {
                  if (param_7 <= *param_5) {
                    *param_1 = *(undefined1 *)((uint)*param_3 + param_13);
                  }
                  param_5 = param_5 + 1;
                  param_1 = param_1 + 1;
                  param_3 = param_3 + 1;
                  uVar2 = uVar2 - 1;
                } while (uVar2 != 0);
              }
            }
            else {
              param_8_after_write = param_8_after_write + 1;
              if (-1 < (int)(uVar2 - 1)) {
                do {
                  if (param_7 <= *param_5) {
                    *param_1 = *(undefined1 *)((uint)*param_3 + param_13);
                  }
                  param_5 = param_5 + 1;
                  param_1 = param_1 + 1;
                  param_3 = param_3 + 1;
                  uVar2 = uVar2 - 1;
                } while (uVar2 != 0);
              }
            }
            if (param_12_after_write < 1) {
              uVar2 = 0;
              break;
            }
            bVar3 = *param_8_after_write;
            uVar4 = (uint)bVar3;
            param_8_after_write = param_8_after_write + 1;
            if ((bVar3 & 0x80) == 0) {
              uVar2 = uVar4 & 0x7f;
            }
            else {
              uVar2 = uVar4 & 0x3f;
            }
          } while ((int)uVar2 <= param_12_after_write);
        }
        uVar2 = uVar2 - param_12_after_write;
        bVar3 = (byte)uVar4;
        if ((uVar4 & 0x80) == 0) {
          param_1 = param_1 + param_12_after_write;
          param_3 = param_3 + param_12_after_write;
          param_5 = param_5 + param_12_after_write;
        }
        else if ((uVar4 & 0x40) == 0) {
          if (-1 < param_12_after_write + -1) {
            param_8_after_write = param_8_after_write + param_12_after_write;
            do {
              if (param_7 <= *param_5) {
                *param_1 = *(undefined1 *)((uint)*param_3 + param_13);
              }
              param_5 = param_5 + 1;
              param_1 = param_1 + 1;
              param_3 = param_3 + 1;
              param_12_after_write = param_12_after_write + -1;
            } while (param_12_after_write != 0);
          }
        }
        else if ((0 < param_12_after_write) && (param_8_after_write = param_8_after_write + 1, -1 < param_12_after_write + -1)) {
          do {
            if (param_7 <= *param_5) {
              *param_1 = *(undefined1 *)((uint)*param_3 + param_13);
            }
            param_5 = param_5 + 1;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
            param_12_after_write = param_12_after_write + -1;
          } while (param_12_after_write != 0);
        }
        iVar5 = (param_9 - param_10) - param_11;
        if ((int)uVar2 < iVar5) {
          do {
            iVar5 = iVar5 - uVar2;
            if (((byte)uVar4 & 0xc0) == 0x80) {
              param_8_after_write = param_8_after_write + uVar2;
            }
            bVar3 = *param_8_after_write;
            uVar4 = (uint)bVar3;
            uVar2 = uVar4;
            pbVar1 = param_8_after_write + 1;
            if (((bVar3 & 0x80) != 0) && (uVar2 = uVar4 & 0x3f, (bVar3 & 0x40) != 0)) {
              pbVar1 = param_8_after_write + 2;
            }
            param_8_after_write = pbVar1;
          } while ((int)uVar2 < iVar5);
        }
        if ((bVar3 & 0xc0) == 0x80) {
          param_8_after_write = param_8_after_write + iVar5;
        }
        param_1 = param_1 + (param_2 - param_11);
        param_3 = param_3 + (param_4 - param_11);
        param_5 = (ushort *)((int)param_5 + param_6 + param_11 * -2);
      }
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

// 006F7FC0 FUN_006f7fc0
#line 4 "decomp/ST.exe/functions/006F7FC0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006F7FC0(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int local_8;

  _DAT_00857000 = 1;
  if (-1 < param_10 + -1) {
    local_8 = param_10;
    do {
      uVar3 = (uint)*param_6;
      param_6 = param_6 + 1;
      iVar4 = param_8;
      if (uVar3 == 0) {
        param_1 = param_1 + param_2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = (ushort *)((int)param_3 + param_4);
      }
      else {
        while( true ) {
          while ((uVar3 & 0x80) == 0) {
            uVar1 = uVar3 & 0x7f;
            if (iVar4 < (int)uVar1) goto LAB_006f802d;
            bVar2 = *param_6;
            param_6 = param_6 + 1;
            iVar4 = iVar4 - uVar1;
            uVar3 = (uint)bVar2;
          }
          uVar1 = uVar3 & 0x3f;
          if (iVar4 < (int)uVar1) break;
          if ((uVar3 & 0x40) == 0) {
            uVar3 = (uint)param_6[uVar1];
            param_6 = param_6 + uVar1 + 1;
            iVar4 = iVar4 - uVar1;
          }
          else {
            uVar3 = (uint)param_6[1];
            param_6 = param_6 + 2;
            iVar4 = iVar4 - uVar1;
          }
        }
LAB_006f802d:
        uVar1 = uVar1 - iVar4;
        if (((byte)uVar3 & 0xc0) == 0x80) {
          param_6 = param_6 + iVar4;
        }
        auto param_10_after_write = param_9; /* compiler stack-slot lifetime split */
        if ((int)uVar1 <= param_9) {
          do {
            param_10_after_write = param_10_after_write - uVar1;
            if ((uVar3 & 0x80) == 0) {
              param_1 = param_1 + uVar1;
              param_3 = param_3 + uVar1;
            }
            else if ((uVar3 & 0x40) == 0) {
              if (-1 < (int)(uVar1 - 1)) {
                do {
                  if (param_5 <= *param_3) {
                    *param_1 = *(undefined1 *)((uint)CONCAT11(*param_6,*param_1) + param_11);
                  }
                  param_3 = param_3 + 1;
                  param_1 = param_1 + 1;
                  param_6 = param_6 + 1;
                  uVar1 = uVar1 - 1;
                } while (uVar1 != 0);
              }
            }
            else {
              param_6 = param_6 + 1;
              param_1 = param_1 + uVar1;
              param_3 = param_3 + uVar1;
            }
            if (param_10_after_write < 1) {
              uVar1 = 0;
              break;
            }
            bVar2 = *param_6;
            uVar3 = (uint)bVar2;
            param_6 = param_6 + 1;
            if ((bVar2 & 0x80) == 0) {
              uVar1 = uVar3 & 0x7f;
            }
            else {
              uVar1 = uVar3 & 0x3f;
            }
          } while ((int)uVar1 <= param_10_after_write);
        }
        uVar1 = uVar1 - param_10_after_write;
        bVar2 = (byte)uVar3;
        if ((uVar3 & 0x80) == 0) {
          param_1 = param_1 + param_10_after_write;
          param_3 = param_3 + param_10_after_write;
        }
        else if ((uVar3 & 0x40) == 0) {
          if (-1 < param_10_after_write + -1) {
            do {
              if (param_5 <= *param_3) {
                *param_1 = *(undefined1 *)((uint)CONCAT11(*param_6,*param_1) + param_11);
              }
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              param_6 = param_6 + 1;
              param_10_after_write = param_10_after_write + -1;
            } while (param_10_after_write != 0);
          }
        }
        else if (0 < param_10_after_write) {
          param_6 = param_6 + 1;
          param_1 = param_1 + param_10_after_write;
          param_3 = param_3 + param_10_after_write;
        }
        iVar4 = (param_7 - param_8) - param_9;
        if ((int)uVar1 < iVar4) {
          do {
            iVar4 = iVar4 - uVar1;
            pbVar5 = param_6;
            if (((byte)uVar3 & 0xc0) == 0x80) {
              pbVar5 = param_6 + uVar1;
            }
            bVar2 = *pbVar5;
            uVar3 = (uint)bVar2;
            param_6 = pbVar5 + 1;
            uVar1 = uVar3;
            if (((bVar2 & 0x80) != 0) && (uVar1 = uVar3 & 0x3f, (bVar2 & 0x40) != 0)) {
              param_6 = pbVar5 + 2;
            }
          } while ((int)uVar1 < iVar4);
        }
        if ((bVar2 & 0xc0) == 0x80) {
          param_6 = param_6 + iVar4;
        }
        param_1 = param_1 + (param_2 - param_9);
        param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
      }
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

// 006F81D0 FUN_006f81d0
#line 4 "decomp/ST.exe/functions/006F81D0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006F81D0(undefined1 *param_1,int param_2,byte *param_3,int param_4,ushort *param_5,
                 int param_6,uint param_7,byte *param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13,int param_14,int param_15,byte *param_16)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;

  pbVar3 = param_16 + param_10;
  _DAT_00857000 = 1;
  pbVar6 = (byte *)(param_14 + ((int)pbVar3 >> 3));
  if (-1 < param_12 + -1) {
    do {
      uVar8 = (uint)*param_8;
      auto param_8_after_write = param_8 + 1; /* compiler stack-slot lifetime split */
      if (uVar8 == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + param_2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + param_4;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_5 = (ushort *)((int)param_5 + param_6);
      }
      else {
        uVar7 = 0x80 >> ((byte)pbVar3 & 7);
        iVar9 = param_10;
        while( true ) {
          while ((uVar8 & 0x80) == 0) {
            uVar2 = uVar8 & 0x7f;
            if (iVar9 < (int)uVar2) goto LAB_006f827e;
            iVar9 = iVar9 - uVar2;
            bVar4 = *param_8_after_write;
            param_8_after_write = param_8_after_write + 1;
            uVar8 = (uint)bVar4;
          }
          uVar2 = uVar8 & 0x3f;
          if (iVar9 < (int)uVar2) break;
          if ((uVar8 & 0x40) == 0) {
            iVar9 = iVar9 - uVar2;
            uVar8 = (uint)param_8_after_write[uVar2];
            param_8_after_write = param_8_after_write + uVar2 + 1;
          }
          else {
            iVar9 = iVar9 - uVar2;
            uVar8 = (uint)param_8_after_write[1];
            param_8_after_write = param_8_after_write + 2;
          }
        }
LAB_006f827e:
        uVar2 = uVar2 - iVar9;
        if (((byte)uVar8 & 0xc0) == 0x80) {
          param_8_after_write = param_8_after_write + iVar9;
        }
        puVar10 = (undefined1 *)param_11;
        auto param_16_after_write = pbVar6; /* compiler stack-slot lifetime split */
        if ((int)uVar2 <= param_11) {
          do {
            puVar10 = puVar10 + -uVar2;
            if ((uVar8 & 0x80) == 0) {
              param_1 = param_1 + uVar2;
              param_3 = param_3 + uVar2;
              param_5 = param_5 + uVar2;
              uVar7 = ((uVar7 & 0xff) << 8) >> ((byte)uVar2 & 7);
              if (uVar7 < 0x81) {
                param_16_after_write = param_16_after_write + 1;
              }
              else {
                uVar7 = uVar7 >> 8;
              }
              uVar7 = uVar7 & 0xff;
              param_16_after_write = param_16_after_write + ((int)uVar2 >> 3);
            }
            else if ((uVar8 & 0x40) == 0) {
              if (-1 < (int)(uVar2 - 1)) {
                param_8_after_write = param_8_after_write + uVar2;
                do {
                  if (((*param_16_after_write & (byte)uVar7) == 0) && (param_7 <= *param_5)) {
                    *param_1 = *(undefined1 *)((uint)*param_3 + param_13);
                  }
                  param_5 = param_5 + 1;
                  param_1 = param_1 + 1;
                  param_3 = param_3 + 1;
                  bVar4 = (byte)uVar7 >> 1;
                  uVar7 = (uint)bVar4;
                  if (bVar4 == 0) {
                    uVar7 = 0x80;
                    param_16_after_write = param_16_after_write + 1;
                  }
                  uVar2 = uVar2 - 1;
                } while (uVar2 != 0);
              }
            }
            else {
              param_8_after_write = param_8_after_write + 1;
              if (-1 < (int)(uVar2 - 1)) {
                do {
                  if (((*param_16_after_write & (byte)uVar7) == 0) && (param_7 <= *param_5)) {
                    *param_1 = *(undefined1 *)((uint)*param_3 + param_13);
                  }
                  param_5 = param_5 + 1;
                  param_1 = param_1 + 1;
                  param_3 = param_3 + 1;
                  bVar4 = (byte)uVar7 >> 1;
                  uVar7 = (uint)bVar4;
                  if (bVar4 == 0) {
                    uVar7 = 0x80;
                    param_16_after_write = param_16_after_write + 1;
                  }
                  uVar2 = uVar2 - 1;
                } while (uVar2 != 0);
              }
            }
            if ((int)puVar10 < 1) {
              uVar2 = 0;
              break;
            }
            bVar4 = *param_8_after_write;
            uVar8 = (uint)bVar4;
            param_8_after_write = param_8_after_write + 1;
            if ((bVar4 & 0x80) == 0) {
              uVar2 = uVar8 & 0x7f;
            }
            else {
              uVar2 = uVar8 & 0x3f;
            }
          } while ((int)uVar2 <= (int)puVar10);
        }
        uVar2 = uVar2 - (int)puVar10;
        bVar4 = (byte)uVar8;
        if ((uVar8 & 0x80) == 0) {
          puVar11 = param_1 + (int)puVar10;
          param_3 = param_3 + (int)puVar10;
          param_5 = param_5 + (int)puVar10;
        }
        else {
          puVar11 = param_1;
          if ((uVar8 & 0x40) == 0) {
            if (-1 < (int)(puVar10 + -1)) {
              param_8_after_write = param_8_after_write + (int)puVar10;
              do {
                if (((*param_16_after_write & (byte)uVar7) == 0) && (param_7 <= *param_5)) {
                  *param_1 = *(undefined1 *)((uint)*param_3 + param_13);
                }
                param_5 = param_5 + 1;
                puVar11 = param_1 + 1;
                param_3 = param_3 + 1;
                bVar5 = (byte)uVar7 >> 1;
                uVar7 = (uint)bVar5;
                if (bVar5 == 0) {
                  uVar7 = 0x80;
                  param_16_after_write = param_16_after_write + 1;
                }
                puVar10 = puVar10 + -1;
                param_1 = puVar11;
              } while (puVar10 != nullptr);
            }
          }
          else if ((0 < (int)puVar10) &&
                  (param_8_after_write = param_8_after_write + 1, param_1 = puVar10, -1 < (int)(puVar10 + -1))) {
            do {
              if (((*param_16_after_write & (byte)uVar7) == 0) && (param_7 <= *param_5)) {
                *puVar11 = *(undefined1 *)((uint)*param_3 + param_13);
              }
              param_5 = param_5 + 1;
              puVar11 = puVar11 + 1;
              param_3 = param_3 + 1;
              bVar5 = (byte)uVar7 >> 1;
              uVar7 = (uint)bVar5;
              if (bVar5 == 0) {
                uVar7 = 0x80;
                param_16_after_write = param_16_after_write + 1;
              }
              param_1 = param_1 + -1;
            } while (param_1 != nullptr);
          }
        }
        iVar9 = (param_9 - param_10) - param_11;
        if ((int)uVar2 < iVar9) {
          do {
            iVar9 = iVar9 - uVar2;
            if (((byte)uVar8 & 0xc0) == 0x80) {
              param_8_after_write = param_8_after_write + uVar2;
            }
            bVar4 = *param_8_after_write;
            uVar8 = (uint)bVar4;
            uVar2 = uVar8;
            pbVar1 = param_8_after_write + 1;
            if (((bVar4 & 0x80) != 0) && (uVar2 = uVar8 & 0x3f, (bVar4 & 0x40) != 0)) {
              pbVar1 = param_8_after_write + 2;
            }
            param_8_after_write = pbVar1;
          } while ((int)uVar2 < iVar9);
        }
        if ((bVar4 & 0xc0) == 0x80) {
          param_8_after_write = param_8_after_write + iVar9;
        }
        param_1 = puVar11 + (param_2 - param_11);
        param_3 = param_3 + (param_4 - param_11);
        param_5 = (ushort *)((int)param_5 + param_6 + param_11 * -2);
      }
      pbVar6 = pbVar6 + param_15;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_12 = param_12 + -1;
    } while (param_12 != 0);
  }
  return;
}

// 006F85A0 FUN_006f85a0
#line 4 "decomp/ST.exe/functions/006F85A0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006F85A0(undefined1 *param_1,int param_2,byte *param_3,int param_4,byte *param_5,
                 int param_6,int param_7,int param_8)

{
  byte bVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;

  if (-1 < param_7 + -1) {
    do {
      uVar2 = (uint)*param_5;
      auto param_5_after_write = param_5 + 1; /* compiler stack-slot lifetime split */
      iVar5 = param_6;
      if (uVar2 == 0) {
        param_1 = param_1 + param_2;
        param_3 = param_3 + param_4;
      }
      else {
        while( true ) {
          if ((uVar2 & 0x80) == 0) {
            uVar2 = uVar2 & 0x7f;
            iVar5 = iVar5 - uVar2;
            param_1 = param_1 + uVar2;
            param_3 = param_3 + uVar2;
          }
          else {
            uVar4 = uVar2 & 0x3f;
            iVar5 = iVar5 - uVar4;
            if ((uVar2 & 0x40) == 0) {
              if (-1 < (int)(uVar4 - 1)) {
                param_5_after_write = param_5_after_write + uVar4;
                puVar3 = param_1;
                do {
                  bVar1 = *param_3;
                  param_1 = puVar3 + 1;
                  param_3 = param_3 + 1;
                  uVar4 = uVar4 - 1;
                  *puVar3 = *(undefined1 *)((uint)bVar1 + param_8);
                  puVar3 = param_1;
                } while (uVar4 != 0);
              }
            }
            else {
              param_5_after_write = param_5_after_write + 1;
              puVar3 = param_1;
              if (-1 < (int)(uVar4 - 1)) {
                do {
                  bVar1 = *param_3;
                  param_1 = puVar3 + 1;
                  param_3 = param_3 + 1;
                  uVar4 = uVar4 - 1;
                  *puVar3 = *(undefined1 *)((uint)bVar1 + param_8);
                  puVar3 = param_1;
                } while (uVar4 != 0);
              }
            }
          }
          if (iVar5 < 1) break;
          uVar2 = (uint)*param_5_after_write;
          param_5_after_write = param_5_after_write + 1;
        }
        param_1 = param_1 + (param_2 - param_6);
        param_3 = param_3 + (param_4 - param_6);
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_7 = param_7 + -1;
    } while (param_7 != 0);
  }
  return;
}

// 006F8660 FUN_006f8660
#line 4 "decomp/ST.exe/functions/006F8660/decomp.c"
void st::fn_006F8660(undefined4 *param_1,int param_2,byte *param_3,int param_4,int param_5,uint param_6
                 ,uint param_7,int param_8)

{
  undefined1 uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint local_c;
  uint local_8;
  byte *pbVar5_mg0;

  if (-1 < (int)(param_7 - 1)) {
    local_c = param_7;
    pbVar3 = param_3;
    do {
      local_8 = (uint)*pbVar3;
      pbVar3 = pbVar3 + 1;
      iVar2 = param_5;
      if (local_8 == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (undefined4 *)((int)param_1 + param_2);
      }
      else {
        while( true ) {
          while ((local_8 & 0x80) == 0) {
            uVar7 = local_8 & 0x7f;
            if (iVar2 < (int)uVar7) goto LAB_006f86ce;
            bVar6 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            iVar2 = iVar2 - uVar7;
            local_8 = (uint)bVar6;
          }
          uVar7 = local_8 & 0x3f;
          if (iVar2 < (int)uVar7) break;
          if ((local_8 & 0x40) == 0) {
            local_8 = (uint)pbVar3[uVar7];
            pbVar3 = pbVar3 + uVar7 + 1;
            iVar2 = iVar2 - uVar7;
          }
          else {
            local_8 = (uint)pbVar3[1];
            pbVar3 = pbVar3 + 2;
            iVar2 = iVar2 - uVar7;
          }
        }
LAB_006f86ce:
        uVar7 = uVar7 - iVar2;
        if (((byte)local_8 & 0xc0) == 0x80) {
          pbVar3 = pbVar3 + iVar2;
        }
        auto param_7_after_write = param_6; /* compiler stack-slot lifetime split */
        puVar9 = param_1;
        puVar8 = param_1;
        auto param_3_after_write = pbVar3; /* compiler stack-slot lifetime split */
        if ((int)uVar7 <= (int)param_6) {
          do {
            param_7_after_write = param_7_after_write - uVar7;
            if ((local_8 & 0x80) == 0) {
              puVar9 = (undefined4 *)((int)puVar8 + uVar7);
              param_1 = (undefined4 *)((int)puVar8 + uVar7);
            }
            else {
              puVar9 = puVar8;
              if ((local_8 & 0x40) == 0) {
                if (-1 < (int)(uVar7 - 1)) {
                  do {
                    bVar6 = *param_3_after_write;
                    puVar9 = (undefined4 *)((int)puVar8 + 1);
                    param_3_after_write = param_3_after_write + 1;
                    uVar7 = uVar7 - 1;
                    *(undefined1 *)puVar8 = *(undefined1 *)((uint)bVar6 + param_8);
                    puVar8 = puVar9;
                    param_1 = puVar9;
                  } while (uVar7 != 0);
                }
              }
              else {
                uVar1 = *(undefined1 *)((uint)*param_3_after_write + param_8);
                param_3_after_write = param_3_after_write + 1;
                if (-1 < (int)(uVar7 - 1)) {
                  for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                    *puVar8 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
                    puVar8 = puVar8 + 1;
                  }
                  for (uVar4 = uVar7 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                    *(undefined1 *)puVar8 = uVar1;
                    puVar8 = (undefined4 *)((int)puVar8 + 1);
                  }
                  puVar9 = (undefined4 *)((int)param_1 + uVar7);
                  param_1 = puVar9;
                }
              }
            }
            if ((int)param_7_after_write < 1) {
              uVar7 = 0;
              break;
            }
            bVar6 = *param_3_after_write;
            local_8 = (uint)bVar6;
            param_3_after_write = param_3_after_write + 1;
            if ((bVar6 & 0x80) == 0) {
              uVar7 = local_8 & 0x7f;
            }
            else {
              uVar7 = local_8 & 0x3f;
            }
            puVar8 = puVar9;
          } while ((int)uVar7 <= (int)param_7_after_write);
        }
        uVar7 = uVar7 - param_7_after_write;
        pbVar3 = param_3_after_write;
        if ((local_8 & 0x80) == 0) {
          puVar9 = (undefined4 *)((int)puVar9 + param_7_after_write);
        }
        else if ((local_8 & 0x40) == 0) {
          pbVar5_mg0 = param_3_after_write;
          puVar8 = puVar9;
          param_3_after_write = (byte *)param_7_after_write;
          if (-1 < (int)(param_7_after_write - 1)) {
            do {
              puVar9 = (undefined4 *)((int)puVar8 + 1);
              pbVar3 = pbVar5_mg0 + 1;
              *(undefined1 *)puVar8 = *(undefined1 *)((uint)*pbVar5_mg0 + param_8);
              param_3_after_write = param_3_after_write + -1;
              pbVar5_mg0 = pbVar3;
              puVar8 = puVar9;
            } while (param_3_after_write != nullptr);
          }
        }
        else if (0 < (int)param_7_after_write) {
          uVar1 = *(undefined1 *)((uint)*param_3_after_write + param_8);
          pbVar3 = param_3_after_write + 1;
          if (-1 < (int)(param_7_after_write - 1)) {
            for (uVar4 = param_7_after_write >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar9 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
              puVar9 = puVar9 + 1;
            }
            for (uVar4 = param_7_after_write & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined1 *)puVar9 = uVar1;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            puVar9 = (undefined4 *)((int)param_1 + param_7_after_write);
          }
        }
        bVar6 = (byte)local_8;
        iVar2 = (param_4 - param_5) - param_6;
        if ((int)uVar7 < iVar2) {
          do {
            iVar2 = iVar2 - uVar7;
            pbVar5 = pbVar3;
            if (((byte)local_8 & 0xc0) == 0x80) {
              pbVar5 = pbVar3 + uVar7;
            }
            bVar6 = *pbVar5;
            local_8 = (uint)bVar6;
            pbVar3 = pbVar5 + 1;
            uVar7 = local_8;
            if (((bVar6 & 0x80) != 0) && (uVar7 = local_8 & 0x3f, (bVar6 & 0x40) != 0)) {
              pbVar3 = pbVar5 + 2;
            }
          } while ((int)uVar7 < iVar2);
        }
        if ((bVar6 & 0xc0) == 0x80) {
          pbVar3 = pbVar3 + iVar2;
        }
        param_1 = (undefined4 *)((int)puVar9 + (param_2 - param_6));
      }
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  return;
}

// 006F88A0 FUN_006f88a0
#line 4 "decomp/ST.exe/functions/006F88A0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006F88A0(undefined1 *param_1,int param_2,byte *param_3,int param_4,byte *param_5,
                 int param_6,int param_7,int param_8,int param_9,int param_10)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  int local_8;

  if (-1 < param_9 + -1) {
    local_8 = param_9;
    do {
      uVar5 = (uint)*param_5;
      auto param_5_after_write = param_5 + 1; /* compiler stack-slot lifetime split */
      iVar6 = param_7;
      if (uVar5 == 0) {
        param_1 = param_1 + param_2;
        param_3 = param_3 + param_4;
      }
      else {
        while( true ) {
          while ((uVar5 & 0x80) == 0) {
            uVar3 = uVar5 & 0x7f;
            if (iVar6 < (int)uVar3) goto LAB_006f8909;
            bVar4 = *param_5_after_write;
            param_5_after_write = param_5_after_write + 1;
            iVar6 = iVar6 - uVar3;
            uVar5 = (uint)bVar4;
          }
          uVar3 = uVar5 & 0x3f;
          if (iVar6 < (int)uVar3) break;
          if ((uVar5 & 0x40) == 0) {
            uVar5 = (uint)param_5_after_write[uVar3];
            param_5_after_write = param_5_after_write + uVar3 + 1;
            iVar6 = iVar6 - uVar3;
          }
          else {
            uVar5 = (uint)param_5_after_write[1];
            param_5_after_write = param_5_after_write + 2;
            iVar6 = iVar6 - uVar3;
          }
        }
LAB_006f8909:
        uVar3 = uVar3 - iVar6;
        if (((byte)uVar5 & 0xc0) == 0x80) {
          param_5_after_write = param_5_after_write + iVar6;
        }
        auto param_9_after_write = param_8; /* compiler stack-slot lifetime split */
        if ((int)uVar3 <= param_8) {
          do {
            param_9_after_write = param_9_after_write - uVar3;
            if ((uVar5 & 0x80) == 0) {
              param_1 = param_1 + uVar3;
              param_3 = param_3 + uVar3;
            }
            else if ((uVar5 & 0x40) == 0) {
              if (-1 < (int)(uVar3 - 1)) {
                param_5_after_write = param_5_after_write + uVar3;
                puVar7 = param_1;
                do {
                  bVar4 = *param_3;
                  param_1 = puVar7 + 1;
                  param_3 = param_3 + 1;
                  uVar3 = uVar3 - 1;
                  *puVar7 = *(undefined1 *)((uint)bVar4 + param_10);
                  puVar7 = param_1;
                } while (uVar3 != 0);
              }
            }
            else {
              param_5_after_write = param_5_after_write + 1;
              puVar7 = param_1;
              if (-1 < (int)(uVar3 - 1)) {
                do {
                  bVar4 = *param_3;
                  param_1 = puVar7 + 1;
                  param_3 = param_3 + 1;
                  uVar3 = uVar3 - 1;
                  *puVar7 = *(undefined1 *)((uint)bVar4 + param_10);
                  puVar7 = param_1;
                } while (uVar3 != 0);
              }
            }
            if (param_9_after_write < 1) {
              uVar3 = 0;
              break;
            }
            bVar4 = *param_5_after_write;
            uVar5 = (uint)bVar4;
            param_5_after_write = param_5_after_write + 1;
            if ((bVar4 & 0x80) == 0) {
              uVar3 = uVar5 & 0x7f;
            }
            else {
              uVar3 = uVar5 & 0x3f;
            }
          } while ((int)uVar3 <= param_9_after_write);
        }
        uVar3 = uVar3 - param_9_after_write;
        bVar4 = (byte)uVar5;
        if ((uVar5 & 0x80) == 0) {
          puVar7 = param_1 + param_9_after_write;
          param_3 = param_3 + param_9_after_write;
        }
        else {
          puVar7 = param_1;
          if ((uVar5 & 0x40) == 0) {
            if (-1 < param_9_after_write + -1) {
              param_5_after_write = param_5_after_write + param_9_after_write;
              do {
                bVar1 = *param_3;
                puVar7 = param_1 + 1;
                param_3 = param_3 + 1;
                *param_1 = *(undefined1 *)((uint)bVar1 + param_10);
                param_9_after_write = param_9_after_write + -1;
                param_1 = puVar7;
              } while (param_9_after_write != 0);
            }
          }
          else if ((0 < param_9_after_write) && (param_5_after_write = param_5_after_write + 1, -1 < param_9_after_write + -1)) {
            do {
              bVar1 = *param_3;
              puVar7 = param_1 + 1;
              param_3 = param_3 + 1;
              *param_1 = *(undefined1 *)((uint)bVar1 + param_10);
              param_9_after_write = param_9_after_write + -1;
              param_1 = puVar7;
            } while (param_9_after_write != 0);
          }
        }
        iVar6 = (param_6 - param_7) - param_8;
        if ((int)uVar3 < iVar6) {
          do {
            iVar6 = iVar6 - uVar3;
            if (((byte)uVar5 & 0xc0) == 0x80) {
              param_5_after_write = param_5_after_write + uVar3;
            }
            bVar4 = *param_5_after_write;
            uVar5 = (uint)bVar4;
            uVar3 = uVar5;
            pbVar2 = param_5_after_write + 1;
            if (((bVar4 & 0x80) != 0) && (uVar3 = uVar5 & 0x3f, (bVar4 & 0x40) != 0)) {
              pbVar2 = param_5_after_write + 2;
            }
            param_5_after_write = pbVar2;
          } while ((int)uVar3 < iVar6);
        }
        if ((bVar4 & 0xc0) == 0x80) {
          param_5_after_write = param_5_after_write + iVar6;
        }
        param_1 = puVar7 + (param_2 - param_8);
        param_3 = param_3 + (param_4 - param_8);
      }
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

// 006F8AB0 FUN_006f8ab0
#line 1 "decomp/ST.exe/functions/006F8AB0/decomp.c"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006F8AB0(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12)

{
  ushort *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  ushort *puVar9;
  byte *pbVar10_mg0;
  uint local_c;
  uint local_8;

  _DAT_00857000 = 1;
  pbVar6 = param_6;
  iVar5 = param_10;
  do {
    auto param_10_after_write = iVar5 + -1; /* compiler stack-slot lifetime split */
    if (param_10_after_write < 0) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_12 == 1) {
      param_10_after_write = iVar5 + -2;
      if (param_10_after_write < 0) {
        return;
      }
      uVar4 = (uint)*pbVar6;
      pbVar6 = pbVar6 + 1;
      iVar5 = param_7;
      if (uVar4 != 0) {
        while( true ) {
          if ((uVar4 & 0x80) == 0) {
            uVar3 = uVar4 & 0x7f;
          }
          else if ((uVar4 & 0x40) == 0) {
            pbVar6 = pbVar6 + (uVar4 & 0x3f);
            uVar3 = uVar4 & 0x3f;
          }
          else {
            pbVar6 = pbVar6 + 1;
            uVar3 = uVar4 & 0x3f;
          }
          if ((int)(iVar5 - uVar3) < 1) break;
          uVar4 = (uint)*pbVar6;
          pbVar6 = pbVar6 + 1;
          iVar5 = iVar5 - uVar3;
        }
      }
      param_12 = 2;
    }
    local_8 = (uint)*pbVar6;
    pbVar6 = pbVar6 + 1;
    if (local_8 != 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = (byte *)param_8;
      while( true ) {
        while ((local_8 & 0x80) == 0) {
          uVar4 = local_8 & 0x7f;
          if ((int)param_6 < (int)uVar4) goto LAB_006f8b92;
          param_6 = param_6 + -uVar4;
          bVar8 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          local_8 = (uint)bVar8;
        }
        uVar4 = local_8 & 0x3f;
        if ((int)param_6 < (int)uVar4) break;
        if ((local_8 & 0x40) == 0) {
          param_6 = param_6 + -uVar4;
          local_8 = (uint)pbVar6[uVar4];
          pbVar6 = pbVar6 + uVar4 + 1;
        }
        else {
          param_6 = param_6 + -uVar4;
          local_8 = (uint)pbVar6[1];
          pbVar6 = pbVar6 + 2;
        }
      }
LAB_006f8b92:
      uVar4 = uVar4 - (int)param_6;
      if (((byte)local_8 & 0xc0) == 0x80) {
        pbVar6 = pbVar6 + (int)param_6;
      }
      param_6 = (byte *)param_9;
      iVar5 = param_11;
      puVar9 = param_3;
      pbVar10_mg0 = param_1;
      if ((int)uVar4 <= param_9) {
        do {
          local_c = local_8 & 0x80;
          param_6 = param_6 + -uVar4;
          if (local_c == 0) {
            if (-1 < (int)(uVar4 - 1)) {
              do {
                if (iVar5 != 1) {
                  pbVar10_mg0 = pbVar10_mg0 + 1;
                  puVar9 = puVar9 + 1;
                }
                iVar5 = iVar5 + 1;
                if (2 < iVar5) {
                  iVar5 = 0;
                }
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
          }
          else if ((local_8 & 0x40) == 0) {
            pbVar7 = pbVar6;
            puVar1 = puVar9;
            pbVar2 = pbVar10_mg0;
            if (0 < iVar5) {
              if (iVar5 == 1) {
                pbVar6 = pbVar6 + 1;
                iVar5 = 2;
                uVar4 = uVar4 - 1;
              }
              if ((int)uVar4 < 1) goto LAB_006f8cfb;
              if (param_5 <= *puVar9) {
                *pbVar10_mg0 = *pbVar6;
              }
              iVar5 = 0;
              uVar4 = uVar4 - 1;
              pbVar7 = pbVar6 + 1;
              puVar1 = puVar9 + 1;
              pbVar2 = pbVar10_mg0 + 1;
            }
            for (; pbVar6 = pbVar7, puVar9 = puVar1, pbVar10_mg0 = pbVar2, 0 < (int)uVar4;
                uVar4 = uVar4 - 3) {
              if (param_5 <= *puVar1) {
                *pbVar2 = *pbVar7;
              }
              puVar9 = puVar1 + 1;
              pbVar10_mg0 = pbVar2 + 1;
              pbVar6 = pbVar7 + 1;
              iVar5 = 1;
              if ((int)(uVar4 - 1) < 1) break;
              pbVar6 = pbVar7 + 2;
              iVar5 = 2;
              if ((int)(uVar4 - 2) < 1) break;
              if (param_5 <= *puVar9) {
                *pbVar10_mg0 = *pbVar6;
              }
              iVar5 = 0;
              pbVar7 = pbVar7 + 3;
              puVar1 = puVar1 + 2;
              pbVar2 = pbVar2 + 2;
            }
          }
          else {
            bVar8 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            puVar1 = puVar9;
            pbVar7 = pbVar10_mg0;
            if (0 < iVar5) {
              if (iVar5 == 1) {
                iVar5 = 2;
                uVar4 = uVar4 - 1;
              }
              if ((int)uVar4 < 1) goto LAB_006f8cfb;
              if (param_5 <= *puVar9) {
                *pbVar10_mg0 = bVar8;
              }
              iVar5 = 0;
              uVar4 = uVar4 - 1;
              puVar1 = puVar9 + 1;
              pbVar7 = pbVar10_mg0 + 1;
            }
            for (; puVar9 = puVar1, pbVar10_mg0 = pbVar7, 0 < (int)uVar4; uVar4 = uVar4 - 3) {
              if (param_5 <= *puVar1) {
                *pbVar7 = bVar8;
              }
              puVar9 = puVar1 + 1;
              pbVar10_mg0 = pbVar7 + 1;
              iVar5 = 1;
              if (((int)(uVar4 - 1) < 1) || (iVar5 = 2, (int)(uVar4 - 2) < 1)) break;
              if (param_5 <= *puVar9) {
                *pbVar10_mg0 = bVar8;
              }
              iVar5 = 0;
              puVar1 = puVar1 + 2;
              pbVar7 = pbVar7 + 2;
            }
          }
LAB_006f8cfb:
          if ((int)param_6 < 1) {
            uVar4 = 0;
            break;
          }
          bVar8 = *pbVar6;
          local_8 = (uint)bVar8;
          pbVar6 = pbVar6 + 1;
          if ((bVar8 & 0x80) == 0) {
            uVar4 = bVar8 & 0x7f;
          }
          else {
            uVar4 = bVar8 & 0x3f;
          }
        } while ((int)uVar4 <= (int)param_6);
      }
      uVar4 = uVar4 - (int)param_6;
      if ((0 < (int)param_6) && ((local_8 & 0x80) != 0)) {
        if ((local_8 & 0x40) == 0) {
          pbVar7 = pbVar6;
          if (0 < iVar5) {
            if (iVar5 == 1) {
              pbVar6 = pbVar6 + 1;
              param_6 = param_6 + -1;
            }
            if ((int)param_6 < 1) goto LAB_006f8e6b;
            if (param_5 <= *puVar9) {
              *pbVar10_mg0 = *pbVar6;
            }
            puVar9 = puVar9 + 1;
            pbVar10_mg0 = pbVar10_mg0 + 1;
            param_6 = param_6 + -1;
            pbVar7 = pbVar6 + 1;
          }
          for (; pbVar6 = pbVar7, 0 < (int)param_6; param_6 = param_6 + -3) {
            if (param_5 <= *puVar9) {
              *pbVar10_mg0 = *pbVar7;
            }
            pbVar6 = pbVar7 + 1;
            if (((int)(param_6 + -1) < 1) || (pbVar6 = pbVar7 + 2, (int)(param_6 + -2) < 1)) break;
            if (param_5 <= puVar9[1]) {
              pbVar10_mg0[1] = *pbVar6;
            }
            puVar9 = puVar9 + 2;
            pbVar10_mg0 = pbVar10_mg0 + 2;
            pbVar7 = pbVar7 + 3;
          }
        }
        else {
          bVar8 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          if (0 < iVar5) {
            if (iVar5 == 1) {
              param_6 = param_6 + -1;
            }
            if ((int)param_6 < 1) goto LAB_006f8e6b;
            if (param_5 <= *puVar9) {
              *pbVar10_mg0 = bVar8;
            }
            puVar9 = puVar9 + 1;
            pbVar10_mg0 = pbVar10_mg0 + 1;
            param_6 = param_6 + -1;
          }
          for (; 0 < (int)param_6; param_6 = param_6 + -3) {
            if (param_5 <= *puVar9) {
              *pbVar10_mg0 = bVar8;
            }
            if (((int)(param_6 + -1) < 1) || ((int)(param_6 + -2) < 1)) break;
            if (param_5 <= puVar9[1]) {
              pbVar10_mg0[1] = bVar8;
            }
            puVar9 = puVar9 + 2;
            pbVar10_mg0 = pbVar10_mg0 + 2;
          }
        }
      }
LAB_006f8e6b:
      bVar8 = (byte)local_8;
      iVar5 = (param_7 - param_8) - param_9;
      if ((int)uVar4 < iVar5) {
        do {
          iVar5 = iVar5 - uVar4;
          pbVar7 = pbVar6;
          if (((byte)local_8 & 0xc0) == 0x80) {
            pbVar7 = pbVar6 + uVar4;
          }
          bVar8 = *pbVar7;
          local_8 = (uint)bVar8;
          pbVar6 = pbVar7 + 1;
          uVar4 = local_8;
          if (((bVar8 & 0x80) != 0) && (uVar4 = local_8 & 0x3f, (bVar8 & 0x40) != 0)) {
            pbVar6 = pbVar7 + 2;
          }
        } while ((int)uVar4 < iVar5);
      }
      if ((bVar8 & 0xc0) == 0x80) {
        pbVar6 = pbVar6 + iVar5;
      }
    }
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    param_12 = param_12 + 1;
    iVar5 = param_10_after_write;
    if (2 < param_12) {
      param_12 = 0;
    }
  } while( true );
}

// 006F8F00 FUN_006f8f00
#line 1 "decomp/ST.exe/functions/006F8F00/decomp.c"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006F8F00(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                 byte *param_13,int param_14,int param_15)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3_mg0;
  byte *pbVar3;
  ushort *puVar4;
  ushort *puVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8_mg2;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10_mg0;
  byte *pbVar10;
  uint local_14;
  uint local_10;
  ushort *local_c;
  int local_8;

  _DAT_00857000 = 1;
  iVar8 = param_10;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
joined_r0x006f8f1a:
  param_10 = iVar8 + -1;
  if (param_10 < 0) {
    return;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_12 == 1) {
    param_10 = iVar8 + -2;
    if (param_10 < 0) {
      return;
    }
    uVar2 = (uint)*param_6;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = param_6 + 1;
    iVar8 = param_7;
    if (uVar2 != 0) {
      while( true ) {
        if ((uVar2 & 0x80) == 0) {
          uVar1 = uVar2 & 0x7f;
        }
        else if ((uVar2 & 0x40) == 0) {
          param_6 = param_6 + (uVar2 & 0x3f);
          uVar1 = uVar2 & 0x3f;
        }
        else {
          param_6 = param_6 + 1;
          uVar1 = uVar2 & 0x3f;
        }
        if ((int)(iVar8 - uVar1) < 1) break;
        uVar2 = (uint)*param_6;
        param_6 = param_6 + 1;
        iVar8 = iVar8 - uVar1;
      }
    }
    param_12 = 2;
  }
  local_10 = (uint)*param_6;
  param_6 = param_6 + 1;
  if (local_10 != 0) {
    local_8 = param_8;
    do {
      if ((local_10 & 0x80) == 0) {
        uVar2 = local_10 & 0x7f;
        if (local_8 < (int)uVar2) goto LAB_006f8fe5;
      }
      else {
        uVar2 = local_10 & 0x3f;
        if (local_8 < (int)uVar2) goto LAB_006f8fe5;
        if ((local_10 & 0x40) == 0) {
          param_6 = param_6 + uVar2;
        }
        else {
          param_6 = param_6 + 1;
        }
      }
      local_8 = local_8 - uVar2;
      local_10 = (uint)*param_6;
      param_6 = param_6 + 1;
    } while( true );
  }
  goto LAB_006f947d;
LAB_006f8fe5:
  uVar2 = uVar2 - local_8;
  if (((byte)local_10 & 0xc0) == 0x80) {
    param_6 = param_6 + local_8;
  }
  local_8 = param_9;
  pbVar3_mg0 = param_1;
  puVar4 = param_3;
  iVar8 = param_11;
  pbVar10_mg0 = param_13;
  local_c = param_3;
  if ((int)uVar2 <= param_9) {
    do {
      local_14 = local_10 & 0x80;
      local_8 = local_8 - uVar2;
      if (local_14 == 0) {
        if (-1 < (int)(uVar2 - 1)) {
          do {
            if (iVar8 != 1) {
              pbVar3_mg0 = pbVar3_mg0 + 1;
              pbVar10_mg0 = pbVar10_mg0 + 1;
              puVar4 = puVar4 + 1;
            }
            iVar8 = iVar8 + 1;
            if (2 < iVar8) {
              iVar8 = 0;
            }
            uVar2 = uVar2 - 1;
            local_c = puVar4;
          } while (uVar2 != 0);
        }
      }
      else if ((local_10 & 0x40) == 0) {
        pbVar3 = pbVar3_mg0;
        puVar5 = puVar4;
        pbVar10 = pbVar10_mg0;
        pbVar9 = param_6;
        if (0 < iVar8) {
          if (iVar8 == 1) {
            param_6 = param_6 + 1;
            uVar2 = uVar2 - 1;
            iVar8 = 2;
          }
          if ((int)uVar2 < 1) goto LAB_006f9103;
          if (*puVar4 < param_5) {
            bVar7 = *(byte *)((uint)*pbVar10_mg0 + param_15);
          }
          else {
            bVar7 = *param_6;
          }
          *pbVar3_mg0 = bVar7;
          puVar5 = puVar4 + 1;
          pbVar3 = pbVar3_mg0 + 1;
          pbVar10 = pbVar10_mg0 + 1;
          pbVar9 = param_6 + 1;
          iVar8 = 0;
          uVar2 = uVar2 - 1;
          local_c = puVar5;
        }
        for (; pbVar3_mg0 = pbVar3, puVar4 = puVar5, pbVar10_mg0 = pbVar10, param_6 = pbVar9,
            0 < (int)uVar2; uVar2 = uVar2 - 3) {
          if (*puVar5 < param_5) {
            bVar7 = *(byte *)((uint)*pbVar10 + param_15);
          }
          else {
            bVar7 = *pbVar9;
          }
          *pbVar3 = bVar7;
          puVar4 = puVar5 + 1;
          pbVar3_mg0 = pbVar3 + 1;
          pbVar10_mg0 = pbVar10 + 1;
          param_6 = pbVar9 + 1;
          iVar8 = 1;
          local_c = puVar4;
          if ((int)(uVar2 - 1) < 1) break;
          param_6 = pbVar9 + 2;
          iVar8 = 2;
          if ((int)(uVar2 - 2) < 1) break;
          if (*puVar4 < param_5) {
            bVar7 = *(byte *)((uint)*pbVar10_mg0 + param_15);
          }
          else {
            bVar7 = *param_6;
          }
          *pbVar3_mg0 = bVar7;
          puVar5 = puVar5 + 2;
          iVar8 = 0;
          pbVar3 = pbVar3 + 2;
          pbVar10 = pbVar10 + 2;
          pbVar9 = pbVar9 + 3;
          local_c = puVar5;
        }
      }
      else {
        bVar7 = *param_6;
        param_6 = param_6 + 1;
        pbVar3 = pbVar3_mg0;
        pbVar10 = pbVar10_mg0;
        puVar5 = local_c;
        if (0 < iVar8) {
          if (iVar8 == 1) {
            iVar8 = 2;
            uVar2 = uVar2 - 1;
          }
          puVar4 = local_c;
          if ((int)uVar2 < 1) goto LAB_006f9103;
          if (*local_c < param_5) {
            iVar8 = 0;
            *pbVar3_mg0 = *(byte *)((uint)*pbVar10_mg0 + param_15);
            uVar2 = uVar2 - 1;
            pbVar3 = pbVar3_mg0 + 1;
            pbVar10 = pbVar10_mg0 + 1;
            puVar5 = local_c + 1;
          }
          else {
            *pbVar3_mg0 = bVar7;
            iVar8 = 0;
            uVar2 = uVar2 - 1;
            pbVar3 = pbVar3_mg0 + 1;
            pbVar10 = pbVar10_mg0 + 1;
            puVar5 = local_c + 1;
          }
        }
        for (; pbVar3_mg0 = pbVar3, puVar4 = puVar5, pbVar10_mg0 = pbVar10, local_c = puVar5,
            0 < (int)uVar2; uVar2 = uVar2 - 3) {
          bVar6 = bVar7;
          if (*puVar5 < param_5) {
            bVar6 = *(byte *)((uint)*pbVar10 + param_15);
          }
          *pbVar3 = bVar6;
          puVar4 = puVar5 + 1;
          pbVar3_mg0 = pbVar3 + 1;
          pbVar10_mg0 = pbVar10 + 1;
          iVar8 = 1;
          local_c = puVar4;
          if (((int)(uVar2 - 1) < 1) || (iVar8 = 2, (int)(uVar2 - 2) < 1)) break;
          bVar6 = bVar7;
          if (*puVar4 < param_5) {
            bVar6 = *(byte *)((uint)*pbVar10_mg0 + param_15);
          }
          *pbVar3_mg0 = bVar6;
          iVar8 = 0;
          pbVar3 = pbVar3 + 2;
          pbVar10 = pbVar10 + 2;
          puVar5 = puVar5 + 2;
        }
      }
LAB_006f9103:
      if (local_8 < 1) {
        uVar2 = 0;
        break;
      }
      bVar7 = *param_6;
      local_10 = (uint)bVar7;
      param_6 = param_6 + 1;
      if ((bVar7 & 0x80) == 0) {
        uVar2 = bVar7 & 0x7f;
      }
      else {
        uVar2 = bVar7 & 0x3f;
      }
    } while ((int)uVar2 <= local_8);
  }
  uVar2 = uVar2 - local_8;
  if ((0 < local_8) && ((local_10 & 0x80) != 0)) {
    if ((local_10 & 0x40) == 0) {
      pbVar8_mg2 = param_6;
      if (0 < iVar8) {
        if (iVar8 == 1) {
          param_6 = param_6 + 1;
          local_8 = local_8 + -1;
        }
        if (local_8 < 1) goto LAB_006f9425;
        if (*puVar4 < param_5) {
          bVar7 = *(byte *)((uint)*pbVar10_mg0 + param_15);
        }
        else {
          bVar7 = *param_6;
        }
        *pbVar3_mg0 = bVar7;
        puVar4 = puVar4 + 1;
        pbVar3_mg0 = pbVar3_mg0 + 1;
        pbVar10_mg0 = pbVar10_mg0 + 1;
        pbVar8_mg2 = param_6 + 1;
        local_8 = local_8 + -1;
      }
      for (; param_6 = pbVar8_mg2, 0 < local_8; local_8 = local_8 + -3) {
        if (*puVar4 < param_5) {
          bVar7 = *(byte *)((uint)*pbVar10_mg0 + param_15);
        }
        else {
          bVar7 = *pbVar8_mg2;
        }
        *pbVar3_mg0 = bVar7;
        param_6 = pbVar8_mg2 + 1;
        if ((local_8 + -1 < 1) || (param_6 = pbVar8_mg2 + 2, local_8 + -2 < 1)) break;
        if (puVar4[1] < param_5) {
          bVar7 = *(byte *)((uint)pbVar10_mg0[1] + param_15);
        }
        else {
          bVar7 = *param_6;
        }
        pbVar3_mg0[1] = bVar7;
        puVar4 = puVar4 + 2;
        pbVar3_mg0 = pbVar3_mg0 + 2;
        pbVar10_mg0 = pbVar10_mg0 + 2;
        pbVar8_mg2 = pbVar8_mg2 + 3;
      }
    }
    else {
      bVar7 = *param_6;
      param_6 = param_6 + 1;
      if (0 < iVar8) {
        if (iVar8 == 1) {
          local_8 = local_8 + -1;
        }
        if (local_8 < 1) goto LAB_006f9425;
        if (*local_c < param_5) {
          *pbVar3_mg0 = *(byte *)((uint)*pbVar10_mg0 + param_15);
          local_c = local_c + 1;
          pbVar3_mg0 = pbVar3_mg0 + 1;
          pbVar10_mg0 = pbVar10_mg0 + 1;
          local_8 = local_8 + -1;
        }
        else {
          *pbVar3_mg0 = bVar7;
          local_c = local_c + 1;
          pbVar3_mg0 = pbVar3_mg0 + 1;
          pbVar10_mg0 = pbVar10_mg0 + 1;
          local_8 = local_8 + -1;
        }
      }
      for (; 0 < local_8; local_8 = local_8 + -3) {
        bVar6 = bVar7;
        if (*local_c < param_5) {
          bVar6 = *(byte *)((uint)*pbVar10_mg0 + param_15);
        }
        *pbVar3_mg0 = bVar6;
        if ((local_8 + -1 < 1) || (local_8 + -2 < 1)) break;
        bVar6 = bVar7;
        if (local_c[1] < param_5) {
          bVar6 = *(byte *)((uint)pbVar10_mg0[1] + param_15);
        }
        pbVar3_mg0[1] = bVar6;
        local_c = local_c + 2;
        pbVar3_mg0 = pbVar3_mg0 + 2;
        pbVar10_mg0 = pbVar10_mg0 + 2;
      }
    }
  }
LAB_006f9425:
  bVar7 = (byte)local_10;
  iVar8 = (param_7 - param_8) - param_9;
  if ((int)uVar2 < iVar8) {
    do {
      iVar8 = iVar8 - uVar2;
      if (((byte)local_10 & 0xc0) == 0x80) {
        param_6 = param_6 + uVar2;
      }
      bVar7 = *param_6;
      local_10 = (uint)bVar7;
      uVar2 = local_10;
      pbVar3 = param_6 + 1;
      if (((bVar7 & 0x80) != 0) && (uVar2 = local_10 & 0x3f, (bVar7 & 0x40) != 0)) {
        pbVar3 = param_6 + 2;
      }
      param_6 = pbVar3;
    } while ((int)uVar2 < iVar8);
  }
  if ((bVar7 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar8;
  }
LAB_006f947d:
  param_1 = param_1 + param_2;
  param_3 = (ushort *)((int)param_3 + param_4);
  param_13 = param_13 + param_14;
  param_12 = param_12 + 1;
  iVar8 = param_10;
  if (2 < param_12) {
    param_12 = 0;
  }
  goto joined_r0x006f8f1a;
}

// 006F94D0 FUN_006f94d0
#line 1 "decomp/ST.exe/functions/006F94D0/decomp.c"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006F94D0(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6_mg0;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint local_c;
  uint local_8;

  _DAT_00857000 = 1;
  pbVar7 = param_6;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = param_10 + -1;
    if (param_10 < 0) {
      return;
    }
    while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
      uVar3 = (uint)*pbVar7;
      pbVar7 = pbVar7 + 1;
      iVar5 = param_7;
      if (uVar3 != 0) {
        while( true ) {
          if ((uVar3 & 0x80) == 0) {
            uVar2 = uVar3 & 0x7f;
          }
          else if ((uVar3 & 0x40) == 0) {
            pbVar7 = pbVar7 + (uVar3 & 0x3f);
            uVar2 = uVar3 & 0x3f;
          }
          else {
            pbVar7 = pbVar7 + 1;
            uVar2 = uVar3 & 0x3f;
          }
          if ((int)(iVar5 - uVar2) < 1) break;
          uVar3 = (uint)*pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar5 = iVar5 - uVar2;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_12 = param_12 + 1;
      if (4 < (int)param_12) {
        param_12 = 0;
      }
    }
    local_8 = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
    if (local_8 == 0) goto LAB_006f9a4c;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = (byte *)param_8;
    while( true ) {
      while ((local_8 & 0x80) == 0) {
        uVar3 = local_8 & 0x7f;
        if ((int)param_6 < (int)uVar3) goto LAB_006f95b9;
        param_6 = param_6 + -uVar3;
        bVar6 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        local_8 = (uint)bVar6;
      }
      uVar3 = local_8 & 0x3f;
      if ((int)param_6 < (int)uVar3) break;
      if ((local_8 & 0x40) == 0) {
        param_6 = param_6 + -uVar3;
        local_8 = (uint)pbVar7[uVar3];
        pbVar7 = pbVar7 + uVar3 + 1;
      }
      else {
        param_6 = param_6 + -uVar3;
        local_8 = (uint)pbVar7[1];
        pbVar7 = pbVar7 + 2;
      }
    }
LAB_006f95b9:
    uVar3 = uVar3 - (int)param_6;
    if (((byte)local_8 & 0xc0) == 0x80) {
      pbVar7 = pbVar7 + (int)param_6;
    }
    param_6 = (byte *)param_9;
    iVar5 = param_11;
    pbVar6_mg0 = param_1;
    puVar10 = param_3;
    if ((int)uVar3 <= param_9) {
      do {
        local_c = local_8 & 0x80;
        param_6 = param_6 + -uVar3;
        if (local_c == 0) {
          if (-1 < (int)(uVar3 - 1)) {
            do {
              if (((byte)iVar5 & 1) == 1) {
                pbVar6_mg0 = pbVar6_mg0 + 1;
                puVar10 = puVar10 + 1;
              }
              iVar5 = iVar5 + 1;
              if (4 < iVar5) {
                iVar5 = 0;
              }
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
          }
          goto LAB_006f97ed;
        }
        if ((local_8 & 0x40) == 0) {
          if (iVar5 < 1) {
switchD_006f9702_default:
            if (0 < (int)uVar3) {
              pbVar8 = pbVar7 + 1;
              pbVar1 = pbVar6_mg0;
              puVar9 = puVar10;
              for (iVar4 = uVar3 - 1; iVar5 = 1, pbVar6_mg0 = pbVar1, pbVar7 = pbVar8,
                  puVar10 = puVar9, 0 < iVar4; iVar4 = iVar4 + -5) {
                if (param_5 <= *puVar9) {
                  *pbVar1 = *pbVar8;
                }
                puVar10 = puVar9 + 1;
                pbVar6_mg0 = pbVar1 + 1;
                pbVar7 = pbVar8 + 1;
                iVar5 = 2;
                if (iVar4 + -1 < 1) break;
                pbVar7 = pbVar8 + 2;
                iVar5 = 3;
                if (iVar4 + -2 < 1) break;
                if (param_5 <= *puVar10) {
                  *pbVar6_mg0 = *pbVar7;
                }
                puVar10 = puVar9 + 2;
                pbVar6_mg0 = pbVar1 + 2;
                pbVar7 = pbVar8 + 3;
                iVar5 = 4;
                if (iVar4 + -3 < 1) break;
                pbVar7 = pbVar8 + 4;
                iVar5 = 0;
                if (iVar4 + -4 < 1) break;
                pbVar8 = pbVar8 + 5;
                pbVar1 = pbVar6_mg0;
                puVar9 = puVar10;
              }
            }
          }
          else {
            switch(iVar5) {
            case 1:
              if (param_5 <= *puVar10) {
                *pbVar6_mg0 = *pbVar7;
              }
              puVar10 = puVar10 + 1;
              pbVar6_mg0 = pbVar6_mg0 + 1;
              pbVar7 = pbVar7 + 1;
              uVar3 = uVar3 - 1;
              iVar5 = 2;
              if ((int)uVar3 < 1) goto LAB_006f97ed;
              break;
            case 2:
              break;
            case 3:
              goto switchD_006f9702_caseD_3;
            case 4:
              goto switchD_006f9702_caseD_4;
            default:
              goto switchD_006f9702_default;
            }
            pbVar7 = pbVar7 + 1;
            uVar3 = uVar3 - 1;
            iVar5 = 3;
            if (0 < (int)uVar3) {
switchD_006f9702_caseD_3:
              if (param_5 <= *puVar10) {
                *pbVar6_mg0 = *pbVar7;
              }
              puVar10 = puVar10 + 1;
              pbVar6_mg0 = pbVar6_mg0 + 1;
              pbVar7 = pbVar7 + 1;
              uVar3 = uVar3 - 1;
              iVar5 = 4;
              if (0 < (int)uVar3) {
switchD_006f9702_caseD_4:
                pbVar7 = pbVar7 + 1;
                iVar5 = 0;
                uVar3 = uVar3 - 1;
                goto switchD_006f9702_default;
              }
            }
          }
        }
        else {
          bVar6 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          pbVar8 = pbVar6_mg0;
          puVar9 = puVar10;
          if (iVar5 < 1) {
switchD_006f9617_default:
            pbVar6_mg0 = pbVar8;
            puVar10 = puVar9;
            if (0 < (int)uVar3) {
              iVar4 = uVar3 - 1;
              iVar5 = 1;
              if (0 < iVar4) {
                while( true ) {
                  if (param_5 <= *puVar9) {
                    *pbVar8 = bVar6;
                  }
                  puVar10 = puVar9 + 1;
                  pbVar6_mg0 = pbVar8 + 1;
                  iVar5 = 2;
                  if ((iVar4 + -1 < 1) || (iVar5 = 3, iVar4 + -2 < 1)) break;
                  if (param_5 <= *puVar10) {
                    *pbVar6_mg0 = bVar6;
                  }
                  puVar10 = puVar9 + 2;
                  pbVar6_mg0 = pbVar8 + 2;
                  iVar5 = 4;
                  if ((iVar4 + -3 < 1) || (iVar5 = 0, iVar4 + -4 < 1)) break;
                  iVar4 = iVar4 + -5;
                  iVar5 = 1;
                  pbVar8 = pbVar6_mg0;
                  puVar9 = puVar10;
                  if (iVar4 < 1) break;
                }
              }
            }
          }
          else {
            switch(iVar5) {
            case 1:
              if (param_5 <= *puVar10) {
                *pbVar6_mg0 = bVar6;
              }
              puVar10 = puVar10 + 1;
              pbVar6_mg0 = pbVar6_mg0 + 1;
              uVar3 = uVar3 - 1;
              iVar5 = 2;
              if ((int)uVar3 < 1) goto LAB_006f97ed;
              break;
            case 2:
              break;
            case 3:
              goto switchD_006f9617_caseD_3;
            case 4:
              goto switchD_006f9617_caseD_4;
            default:
              goto switchD_006f9617_default;
            }
            uVar3 = uVar3 - 1;
            iVar5 = 3;
            if (0 < (int)uVar3) {
switchD_006f9617_caseD_3:
              if (param_5 <= *puVar10) {
                *pbVar6_mg0 = bVar6;
              }
              puVar10 = puVar10 + 1;
              pbVar6_mg0 = pbVar6_mg0 + 1;
              uVar3 = uVar3 - 1;
              iVar5 = 4;
              if (0 < (int)uVar3) {
switchD_006f9617_caseD_4:
                iVar5 = 0;
                uVar3 = uVar3 - 1;
                pbVar8 = pbVar6_mg0;
                puVar9 = puVar10;
                goto switchD_006f9617_default;
              }
            }
          }
        }
LAB_006f97ed:
        if ((int)param_6 < 1) {
          uVar3 = 0;
          break;
        }
        bVar6 = *pbVar7;
        local_8 = (uint)bVar6;
        pbVar7 = pbVar7 + 1;
        if ((bVar6 & 0x80) == 0) {
          uVar3 = bVar6 & 0x7f;
        }
        else {
          uVar3 = bVar6 & 0x3f;
        }
      } while ((int)uVar3 <= (int)param_6);
    }
    uVar3 = uVar3 - (int)param_6;
    if (((int)param_6 < 1) || ((local_8 & 0x80) == 0)) goto LAB_006f99fd;
    if ((local_8 & 0x40) == 0) {
      if (iVar5 < 1) goto switchD_006f9933_default;
      pbVar8 = pbVar7;
      switch(iVar5) {
      case 1:
        if (param_5 <= *puVar10) {
          *pbVar6_mg0 = *pbVar7;
        }
        puVar10 = puVar10 + 1;
        pbVar6_mg0 = pbVar6_mg0 + 1;
        pbVar7 = pbVar7 + 1;
        param_6 = param_6 + -1;
        if ((int)param_6 < 1) break;
        goto LAB_006f995e;
      case 2:
LAB_006f995e:
        pbVar8 = pbVar7 + 1;
        param_6 = param_6 + -1;
        pbVar7 = pbVar8;
        if (0 < (int)param_6) {
switchD_006f9933_caseD_3:
          if (param_5 <= *puVar10) {
            *pbVar6_mg0 = *pbVar8;
          }
          puVar10 = puVar10 + 1;
          pbVar6_mg0 = pbVar6_mg0 + 1;
          pbVar7 = pbVar8 + 1;
          if (0 < (int)(param_6 + -1)) {
            pbVar7 = pbVar8 + 2;
            param_6 = param_6 + -2;
            goto switchD_006f9933_default;
          }
        }
        break;
      case 3:
        goto switchD_006f9933_caseD_3;
      case 4:
        pbVar7 = pbVar7 + 1;
        param_6 = param_6 + -1;
      default:
switchD_006f9933_default:
        if (0 < (int)param_6) {
          pbVar8 = pbVar7 + 1;
          param_6 = param_6 + -1;
          pbVar7 = pbVar8;
          if (0 < (int)param_6) {
            while( true ) {
              if (param_5 <= *puVar10) {
                *pbVar6_mg0 = *pbVar8;
              }
              pbVar7 = pbVar8 + 1;
              if (((int)(param_6 + -1) < 1) || (pbVar7 = pbVar8 + 2, (int)(param_6 + -2) < 1))
              break;
              if (param_5 <= puVar10[1]) {
                pbVar6_mg0[1] = pbVar8[2];
              }
              puVar10 = puVar10 + 2;
              pbVar6_mg0 = pbVar6_mg0 + 2;
              pbVar7 = pbVar8 + 3;
              if (((int)(param_6 + -3) < 1) || (pbVar7 = pbVar8 + 4, (int)(param_6 + -4) < 1))
              break;
              pbVar8 = pbVar8 + 5;
              param_6 = param_6 + -5;
              pbVar7 = pbVar8;
              if ((int)param_6 < 1) break;
            }
          }
        }
      }
      goto LAB_006f99fd;
    }
    bVar6 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    if (iVar5 < 1) goto switchD_006f9854_default;
    switch(iVar5) {
    case 1:
      if (param_5 <= *puVar10) {
        *pbVar6_mg0 = bVar6;
      }
      puVar10 = puVar10 + 1;
      pbVar6_mg0 = pbVar6_mg0 + 1;
      param_6 = param_6 + -1;
      if ((int)param_6 < 1) break;
      goto LAB_006f9884;
    case 2:
LAB_006f9884:
      param_6 = param_6 + -1;
      if (0 < (int)param_6) {
LAB_006f9895:
        if (param_5 <= *puVar10) {
          *pbVar6_mg0 = bVar6;
        }
        puVar10 = puVar10 + 1;
        pbVar6_mg0 = pbVar6_mg0 + 1;
        if (0 < (int)(param_6 + -1)) {
          param_6 = param_6 + -2;
          goto switchD_006f9854_default;
        }
      }
      break;
    case 3:
      goto LAB_006f9895;
    case 4:
      param_6 = param_6 + -1;
    default:
switchD_006f9854_default:
      if ((0 < (int)param_6) && (param_6 = param_6 + -1, 0 < (int)param_6)) {
        while( true ) {
          if (param_5 <= *puVar10) {
            *pbVar6_mg0 = bVar6;
          }
          if ((int)(param_6 + -2) < 1) break;
          if (param_5 <= puVar10[1]) {
            pbVar6_mg0[1] = bVar6;
          }
          puVar10 = puVar10 + 2;
          pbVar6_mg0 = pbVar6_mg0 + 2;
          if (((int)(param_6 + -4) < 1) || (param_6 = param_6 + -5, (int)param_6 < 1)) break;
        }
      }
    }
LAB_006f99fd:
    bVar6 = (byte)local_8;
    iVar5 = (param_7 - param_8) - param_9;
    if ((int)uVar3 < iVar5) {
      do {
        iVar5 = iVar5 - uVar3;
        pbVar8 = pbVar7;
        if (((byte)local_8 & 0xc0) == 0x80) {
          pbVar8 = pbVar7 + uVar3;
        }
        bVar6 = *pbVar8;
        local_8 = (uint)bVar6;
        pbVar7 = pbVar8 + 1;
        uVar3 = local_8;
        if (((bVar6 & 0x80) != 0) && (uVar3 = local_8 & 0x3f, (bVar6 & 0x40) != 0)) {
          pbVar7 = pbVar8 + 2;
        }
      } while ((int)uVar3 < iVar5);
    }
    if ((bVar6 & 0xc0) == 0x80) {
      pbVar7 = pbVar7 + iVar5;
    }
LAB_006f9a4c:
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      param_12 = 0;
    }
  } while( true );
}

// 006F9AD0 FUN_006f9ad0
#line 4 "decomp/ST.exe/functions/006F9AD0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006F9AD0(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,ushort *param_6
                 ,int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12,
                 byte *param_13,int param_14,int param_15)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint local_10;
  uint local_c;
  int local_8;
  ushort *puVar10;

  _DAT_00857000 = 1;
  puVar8 = param_6;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = param_10 + -1;
    if (param_10 < 0) {
      return;
    }
    while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
      uVar3 = (uint)(byte)*puVar8;
      puVar8 = (ushort *)((int)puVar8 + 1);
      iVar7 = param_7;
      if (uVar3 != 0) {
        while( true ) {
          if ((uVar3 & 0x80) == 0) {
            uVar2 = uVar3 & 0x7f;
          }
          else if ((uVar3 & 0x40) == 0) {
            puVar8 = (ushort *)((int)puVar8 + (uVar3 & 0x3f));
            uVar2 = uVar3 & 0x3f;
          }
          else {
            puVar8 = (ushort *)((int)puVar8 + 1);
            uVar2 = uVar3 & 0x3f;
          }
          if ((int)(iVar7 - uVar2) < 1) break;
          uVar3 = (uint)(byte)*puVar8;
          puVar8 = (ushort *)((int)puVar8 + 1);
          iVar7 = iVar7 - uVar2;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_12 = param_12 + 1;
      if (4 < (int)param_12) {
        param_12 = 0;
      }
    }
    local_c = (uint)(byte)*puVar8;
    puVar8 = (ushort *)((int)puVar8 + 1);
    if (local_c == 0) goto LAB_006fa1f3;
    local_8 = param_8;
    while( true ) {
      while ((local_c & 0x80) == 0) {
        uVar3 = local_c & 0x7f;
        if (local_8 < (int)uVar3) goto LAB_006f9bc6;
        local_8 = local_8 - uVar3;
        uVar1 = *puVar8;
        puVar8 = (ushort *)((int)puVar8 + 1);
        local_c = (uint)(byte)uVar1;
      }
      uVar3 = local_c & 0x3f;
      if (local_8 < (int)uVar3) break;
      if ((local_c & 0x40) == 0) {
        local_8 = local_8 - uVar3;
        local_c = (uint)*(byte *)((int)puVar8 + uVar3);
        puVar8 = (ushort *)((byte *)((int)puVar8 + uVar3) + 1);
      }
      else {
        local_8 = local_8 - uVar3;
        local_c = (uint)STField<byte>(puVar8,1);
        puVar8 = puVar8 + 1;
      }
    }
LAB_006f9bc6:
    uVar3 = uVar3 - local_8;
    if (((byte)local_c & 0xc0) == 0x80) {
      puVar8 = (ushort *)((int)puVar8 + local_8);
    }
    local_8 = param_9;
    iVar7 = param_11;
    pbVar11 = param_1;
    pbVar13 = param_13;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = param_3;
    if ((int)uVar3 <= param_9) {
      do {
        local_10 = local_c & 0x80;
        local_8 = local_8 - uVar3;
        if (local_10 == 0) {
          puVar10 = param_6;
          local_10 = uVar3;
          if (-1 < (int)(uVar3 - 1)) {
            do {
              if (((byte)iVar7 & 1) == 1) {
                pbVar11 = pbVar11 + 1;
                pbVar13 = pbVar13 + 1;
                param_6 = param_6 + 1;
              }
              iVar7 = iVar7 + 1;
              if (4 < iVar7) {
                iVar7 = 0;
              }
              local_10 = local_10 - 1;
              puVar10 = param_6;
            } while (local_10 != 0);
          }
          goto LAB_006f9ed5;
        }
        if ((local_c & 0x40) == 0) {
          if (iVar7 < 1) {
switchD_006f9d79_default:
            puVar10 = param_6;
            if (0 < (int)uVar3) {
              puVar9 = (ushort *)((int)puVar8 + 1);
              pbVar10 = pbVar11;
              pbVar12 = pbVar13;
              for (iVar4 = uVar3 - 1; iVar7 = 1, puVar8 = puVar9, pbVar11 = pbVar10,
                  pbVar13 = pbVar12, puVar10 = param_6, 0 < iVar4; iVar4 = iVar4 + -5) {
                if (*param_6 < param_5) {
                  bVar6 = *(byte *)((uint)*pbVar12 + param_15);
                }
                else {
                  bVar6 = (byte)*puVar9;
                }
                *pbVar10 = bVar6;
                iVar7 = 2;
                puVar10 = param_6 + 1;
                pbVar11 = pbVar10 + 1;
                pbVar13 = pbVar12 + 1;
                puVar8 = (ushort *)((int)puVar9 + 1);
                if (iVar4 + -1 < 1) break;
                puVar8 = puVar9 + 1;
                iVar7 = 3;
                if (iVar4 + -2 < 1) break;
                if (*puVar10 < param_5) {
                  bVar6 = *(byte *)((uint)*pbVar13 + param_15);
                }
                else {
                  bVar6 = (byte)*puVar8;
                }
                *pbVar11 = bVar6;
                param_6 = param_6 + 2;
                pbVar11 = pbVar10 + 2;
                pbVar13 = pbVar12 + 2;
                puVar8 = (ushort *)((int)puVar9 + 3);
                iVar7 = 4;
                puVar10 = param_6;
                if (iVar4 + -3 < 1) break;
                puVar8 = puVar9 + 2;
                iVar7 = 0;
                if (iVar4 + -4 < 1) break;
                puVar9 = (ushort *)((int)puVar9 + 5);
                pbVar10 = pbVar11;
                pbVar12 = pbVar13;
              }
            }
          }
          else {
            switch(iVar7) {
            case 1:
              if (*param_6 < param_5) {
                bVar6 = *(byte *)((uint)*pbVar13 + param_15);
              }
              else {
                bVar6 = (byte)*puVar8;
              }
              *pbVar11 = bVar6;
              iVar7 = 2;
              param_6 = param_6 + 1;
              pbVar11 = pbVar11 + 1;
              pbVar13 = pbVar13 + 1;
              puVar8 = (ushort *)((int)puVar8 + 1);
              uVar3 = uVar3 - 1;
              puVar10 = param_6;
              if ((int)uVar3 < 1) goto LAB_006f9ed5;
              break;
            case 2:
              break;
            case 3:
              goto switchD_006f9d79_caseD_3;
            case 4:
              goto switchD_006f9d79_caseD_4;
            default:
              goto switchD_006f9d79_default;
            }
            puVar8 = (ushort *)((int)puVar8 + 1);
            uVar3 = uVar3 - 1;
            iVar7 = 3;
            puVar10 = param_6;
            if (0 < (int)uVar3) {
switchD_006f9d79_caseD_3:
              if (*param_6 < param_5) {
                bVar6 = *(byte *)((uint)*pbVar13 + param_15);
              }
              else {
                bVar6 = (byte)*puVar8;
              }
              *pbVar11 = bVar6;
              param_6 = param_6 + 1;
              pbVar11 = pbVar11 + 1;
              pbVar13 = pbVar13 + 1;
              puVar8 = (ushort *)((int)puVar8 + 1);
              uVar3 = uVar3 - 1;
              iVar7 = 4;
              puVar10 = param_6;
              if (0 < (int)uVar3) {
switchD_006f9d79_caseD_4:
                puVar8 = (ushort *)((int)puVar8 + 1);
                iVar7 = 0;
                uVar3 = uVar3 - 1;
                goto switchD_006f9d79_default;
              }
            }
          }
        }
        else {
          bVar6 = (byte)*puVar8;
          puVar8 = (ushort *)((int)puVar8 + 1);
          if (iVar7 < 1) {
switchD_006f9c2c_default:
            puVar10 = param_6;
            if (0 < (int)uVar3) {
              iVar4 = uVar3 - 1;
              iVar7 = 1;
              pbVar10 = pbVar11;
              pbVar12 = pbVar13;
              if (0 < iVar4) {
                while( true ) {
                  bVar5 = bVar6;
                  if (*param_6 < param_5) {
                    bVar5 = *(byte *)((uint)*pbVar12 + param_15);
                  }
                  *pbVar10 = bVar5;
                  iVar7 = 2;
                  puVar10 = param_6 + 1;
                  pbVar11 = pbVar10 + 1;
                  pbVar13 = pbVar12 + 1;
                  if ((iVar4 + -1 < 1) || (iVar7 = 3, iVar4 + -2 < 1)) break;
                  bVar5 = bVar6;
                  if (*puVar10 < param_5) {
                    bVar5 = *(byte *)((uint)*pbVar13 + param_15);
                  }
                  *pbVar11 = bVar5;
                  param_6 = param_6 + 2;
                  pbVar11 = pbVar10 + 2;
                  pbVar13 = pbVar12 + 2;
                  iVar7 = 4;
                  puVar10 = param_6;
                  if ((iVar4 + -3 < 1) || (iVar7 = 0, iVar4 + -4 < 1)) break;
                  iVar4 = iVar4 + -5;
                  iVar7 = 1;
                  pbVar10 = pbVar11;
                  pbVar12 = pbVar13;
                  if (iVar4 < 1) break;
                }
              }
            }
          }
          else {
            switch(iVar7) {
            case 1:
              bVar5 = bVar6;
              if (*param_6 < param_5) {
                bVar5 = *(byte *)((uint)*pbVar13 + param_15);
              }
              *pbVar11 = bVar5;
              iVar7 = 2;
              param_6 = param_6 + 1;
              pbVar11 = pbVar11 + 1;
              pbVar13 = pbVar13 + 1;
              uVar3 = uVar3 - 1;
              puVar10 = param_6;
              if ((int)uVar3 < 1) goto LAB_006f9ed5;
              break;
            case 2:
              break;
            case 3:
              goto switchD_006f9c2c_caseD_3;
            case 4:
              goto switchD_006f9c2c_caseD_4;
            default:
              goto switchD_006f9c2c_default;
            }
            uVar3 = uVar3 - 1;
            iVar7 = 3;
            puVar10 = param_6;
            if (0 < (int)uVar3) {
switchD_006f9c2c_caseD_3:
              bVar5 = bVar6;
              if (*param_6 < param_5) {
                bVar5 = *(byte *)((uint)*pbVar13 + param_15);
              }
              *pbVar11 = bVar5;
              param_6 = param_6 + 1;
              pbVar11 = pbVar11 + 1;
              pbVar13 = pbVar13 + 1;
              uVar3 = uVar3 - 1;
              iVar7 = 4;
              puVar10 = param_6;
              if (0 < (int)uVar3) {
switchD_006f9c2c_caseD_4:
                iVar7 = 0;
                uVar3 = uVar3 - 1;
                goto switchD_006f9c2c_default;
              }
            }
          }
        }
LAB_006f9ed5:
        param_6 = puVar10;
        if (local_8 < 1) {
          uVar3 = 0;
          break;
        }
        bVar6 = (byte)*puVar8;
        local_c = (uint)bVar6;
        puVar8 = (ushort *)((int)puVar8 + 1);
        if ((bVar6 & 0x80) == 0) {
          uVar3 = bVar6 & 0x7f;
        }
        else {
          uVar3 = bVar6 & 0x3f;
        }
      } while ((int)uVar3 <= local_8);
    }
    uVar3 = uVar3 - local_8;
    if ((local_8 < 1) || ((local_c & 0x80) == 0)) goto LAB_006fa1a7;
    if ((local_c & 0x40) == 0) {
      if (iVar7 < 1) goto switchD_006fa07d_default;
      puVar9 = puVar8;
      switch(iVar7) {
      case 1:
        if (*param_6 < param_5) {
          bVar6 = *(byte *)((uint)*pbVar13 + param_15);
        }
        else {
          bVar6 = (byte)*puVar8;
        }
        *pbVar11 = bVar6;
        param_6 = param_6 + 1;
        pbVar11 = pbVar11 + 1;
        pbVar13 = pbVar13 + 1;
        puVar8 = (ushort *)((int)puVar8 + 1);
        local_8 = local_8 + -1;
        if (local_8 < 1) break;
        goto LAB_006fa0be;
      case 2:
LAB_006fa0be:
        puVar9 = (ushort *)((int)puVar8 + 1);
        local_8 = local_8 + -1;
        puVar8 = puVar9;
        if (0 < local_8) {
switchD_006fa07d_caseD_3:
          if (*param_6 < param_5) {
            bVar6 = *(byte *)((uint)*pbVar13 + param_15);
          }
          else {
            bVar6 = (byte)*puVar9;
          }
          *pbVar11 = bVar6;
          param_6 = param_6 + 1;
          pbVar11 = pbVar11 + 1;
          pbVar13 = pbVar13 + 1;
          puVar8 = (ushort *)((int)puVar9 + 1);
          if (0 < local_8 + -1) {
            puVar8 = puVar9 + 1;
            local_8 = local_8 + -2;
            goto switchD_006fa07d_default;
          }
        }
        break;
      case 3:
        goto switchD_006fa07d_caseD_3;
      case 4:
        puVar8 = (ushort *)((int)puVar8 + 1);
        local_8 = local_8 + -1;
      default:
switchD_006fa07d_default:
        if (0 < local_8) {
          puVar9 = (ushort *)((int)puVar8 + 1);
          local_8 = local_8 + -1;
          puVar8 = puVar9;
          if (0 < local_8) {
            while( true ) {
              if (*param_6 < param_5) {
                bVar6 = *(byte *)((uint)*pbVar13 + param_15);
              }
              else {
                bVar6 = (byte)*puVar9;
              }
              *pbVar11 = bVar6;
              puVar8 = (ushort *)((int)puVar9 + 1);
              if ((local_8 + -1 < 1) || (puVar8 = puVar9 + 1, local_8 + -2 < 1)) break;
              if (param_6[1] < param_5) {
                bVar6 = *(byte *)((uint)pbVar13[1] + param_15);
              }
              else {
                bVar6 = (byte)puVar9[1];
              }
              pbVar11[1] = bVar6;
              param_6 = param_6 + 2;
              pbVar11 = pbVar11 + 2;
              pbVar13 = pbVar13 + 2;
              puVar8 = (ushort *)((int)puVar9 + 3);
              if ((local_8 + -3 < 1) || (puVar8 = puVar9 + 2, local_8 + -4 < 1)) break;
              puVar9 = (ushort *)((int)puVar9 + 5);
              local_8 = local_8 + -5;
              puVar8 = puVar9;
              if (local_8 < 1) break;
            }
          }
        }
      }
      goto LAB_006fa1a7;
    }
    bVar6 = (byte)*puVar8;
    puVar8 = (ushort *)((int)puVar8 + 1);
    if (iVar7 < 1) goto switchD_006f9f43_default;
    switch(iVar7) {
    case 1:
      bVar5 = bVar6;
      if (*param_6 < param_5) {
        bVar5 = *(byte *)((uint)*pbVar13 + param_15);
      }
      *pbVar11 = bVar5;
      param_6 = param_6 + 1;
      pbVar11 = pbVar11 + 1;
      pbVar13 = pbVar13 + 1;
      local_8 = local_8 + -1;
      if (local_8 < 1) break;
      goto LAB_006f9f86;
    case 2:
LAB_006f9f86:
      local_8 = local_8 + -1;
      if (0 < local_8) {
switchD_006f9f43_caseD_3:
        bVar5 = bVar6;
        if (*param_6 < param_5) {
          bVar5 = *(byte *)((uint)*pbVar13 + param_15);
        }
        *pbVar11 = bVar5;
        param_6 = param_6 + 1;
        pbVar11 = pbVar11 + 1;
        pbVar13 = pbVar13 + 1;
        if (0 < local_8 + -1) {
          local_8 = local_8 + -2;
          goto switchD_006f9f43_default;
        }
      }
      break;
    case 3:
      goto switchD_006f9f43_caseD_3;
    case 4:
      local_8 = local_8 + -1;
    default:
switchD_006f9f43_default:
      if ((0 < local_8) && (local_8 = local_8 + -1, 0 < local_8)) {
        while( true ) {
          bVar5 = bVar6;
          if (*param_6 < param_5) {
            bVar5 = *(byte *)((uint)*pbVar13 + param_15);
          }
          *pbVar11 = bVar5;
          if (local_8 + -2 < 1) break;
          bVar5 = bVar6;
          if (param_6[1] < param_5) {
            bVar5 = *(byte *)((uint)pbVar13[1] + param_15);
          }
          pbVar11[1] = bVar5;
          param_6 = param_6 + 2;
          pbVar11 = pbVar11 + 2;
          pbVar13 = pbVar13 + 2;
          if ((local_8 + -4 < 1) || (local_8 = local_8 + -5, local_8 < 1)) break;
        }
      }
    }
LAB_006fa1a7:
    bVar6 = (byte)local_c;
    iVar7 = (param_7 - param_8) - param_9;
    if ((int)uVar3 < iVar7) {
      do {
        iVar7 = iVar7 - uVar3;
        puVar9 = puVar8;
        if (((byte)local_c & 0xc0) == 0x80) {
          puVar9 = (ushort *)((int)puVar8 + uVar3);
        }
        bVar6 = (byte)*puVar9;
        local_c = (uint)bVar6;
        puVar8 = (ushort *)((int)puVar9 + 1);
        uVar3 = local_c;
        if (((bVar6 & 0x80) != 0) && (uVar3 = local_c & 0x3f, (bVar6 & 0x40) != 0)) {
          puVar8 = puVar9 + 1;
        }
      } while ((int)uVar3 < iVar7);
    }
    if ((bVar6 & 0xc0) == 0x80) {
      puVar8 = (ushort *)((int)puVar8 + iVar7);
    }
LAB_006fa1f3:
    param_1 = param_1 + param_2;
    param_13 = param_13 + param_14;
    param_3 = (ushort *)((int)param_3 + param_4);
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      param_12 = 0;
    }
  } while( true );
}

// 006FA280 FUN_006fa280
#line 4 "decomp/ST.exe/functions/006FA280/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006FA280(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint local_14;
  uint local_10;
  ushort *local_c;
  int local_8;

  _DAT_00857000 = 1;
  iVar4 = param_10;
  do {
    auto param_10_after_write = iVar4 + -1; /* compiler stack-slot lifetime split */
    if (param_10_after_write < 0) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_12 == 1) {
      param_10_after_write = iVar4 + -2;
      if (param_10_after_write < 0) {
        return;
      }
      uVar3 = (uint)*param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + 1;
      iVar4 = param_7;
      if (uVar3 != 0) {
        while( true ) {
          if ((uVar3 & 0x80) == 0) {
            uVar2 = uVar3 & 0x7f;
          }
          else if ((uVar3 & 0x40) == 0) {
            param_6 = param_6 + (uVar3 & 0x3f);
            uVar2 = uVar3 & 0x3f;
          }
          else {
            param_6 = param_6 + 1;
            uVar2 = uVar3 & 0x3f;
          }
          if ((int)(iVar4 - uVar2) < 1) break;
          uVar3 = (uint)*param_6;
          param_6 = param_6 + 1;
          iVar4 = iVar4 - uVar2;
        }
      }
      param_12 = 2;
    }
    local_10 = (uint)*param_6;
    param_6 = param_6 + 1;
    iVar4 = param_8;
    if (local_10 != 0) {
      while( true ) {
        while ((local_10 & 0x80) == 0) {
          uVar3 = local_10 & 0x7f;
          if (iVar4 < (int)uVar3) goto LAB_006fa36d;
          bVar5 = *param_6;
          param_6 = param_6 + 1;
          iVar4 = iVar4 - uVar3;
          local_10 = (uint)bVar5;
        }
        uVar3 = local_10 & 0x3f;
        if (iVar4 < (int)uVar3) break;
        if ((local_10 & 0x40) == 0) {
          local_10 = (uint)param_6[uVar3];
          param_6 = param_6 + uVar3 + 1;
          iVar4 = iVar4 - uVar3;
        }
        else {
          local_10 = (uint)param_6[1];
          param_6 = param_6 + 2;
          iVar4 = iVar4 - uVar3;
        }
      }
LAB_006fa36d:
      uVar3 = uVar3 - iVar4;
      if (((byte)local_10 & 0xc0) == 0x80) {
        param_6 = param_6 + iVar4;
      }
      local_8 = param_9;
      iVar4 = param_11;
      puVar8 = param_1;
      puVar7 = param_1;
      puVar9 = param_3;
      puVar10 = param_3;
      local_c = param_3;
      if ((int)uVar3 <= param_9) {
        do {
          local_14 = local_10 & 0x80;
          local_8 = local_8 - uVar3;
          puVar8 = puVar7;
          puVar9 = puVar10;
          if (local_14 == 0) {
            if (-1 < (int)(uVar3 - 1)) {
              do {
                if (iVar4 != 1) {
                  puVar7 = puVar7 + 1;
                  puVar10 = puVar10 + 1;
                }
                iVar4 = iVar4 + 1;
                if (2 < iVar4) {
                  iVar4 = 0;
                }
                uVar3 = uVar3 - 1;
                puVar8 = puVar7;
                puVar9 = puVar10;
                local_c = puVar10;
              } while (uVar3 != 0);
            }
          }
          else if ((local_10 & 0x40) == 0) {
            pbVar6 = param_6;
            if (0 < iVar4) {
              if (iVar4 == 1) {
                param_6 = param_6 + 1;
                uVar3 = uVar3 - 1;
                iVar4 = 2;
              }
              if ((int)uVar3 < 1) goto LAB_006fa516;
              if (param_5 <= *puVar10) {
                *puVar7 = *(undefined1 *)((uint)*param_6 + param_13);
              }
              puVar10 = puVar10 + 1;
              puVar7 = puVar7 + 1;
              pbVar6 = param_6 + 1;
              iVar4 = 0;
              uVar3 = uVar3 - 1;
              local_c = puVar10;
            }
            for (; puVar8 = puVar7, puVar9 = puVar10, param_6 = pbVar6, 0 < (int)uVar3;
                uVar3 = uVar3 - 3) {
              if (param_5 <= *puVar10) {
                *puVar7 = *(undefined1 *)((uint)*pbVar6 + param_13);
              }
              puVar9 = puVar10 + 1;
              puVar8 = puVar7 + 1;
              param_6 = pbVar6 + 1;
              iVar4 = 1;
              local_c = puVar9;
              if ((int)(uVar3 - 1) < 1) break;
              param_6 = pbVar6 + 2;
              iVar4 = 2;
              if ((int)(uVar3 - 2) < 1) break;
              if (param_5 <= *puVar9) {
                *puVar8 = *(undefined1 *)((uint)*param_6 + param_13);
              }
              puVar10 = puVar10 + 2;
              puVar7 = puVar7 + 2;
              iVar4 = 0;
              pbVar6 = pbVar6 + 3;
              local_c = puVar10;
            }
          }
          else {
            uVar1 = *(undefined1 *)((uint)*param_6 + param_13);
            param_6 = param_6 + 1;
            puVar10 = local_c;
            if (0 < iVar4) {
              if (iVar4 == 1) {
                iVar4 = 2;
                uVar3 = uVar3 - 1;
              }
              puVar9 = local_c;
              if ((int)uVar3 < 1) goto LAB_006fa516;
              if (param_5 <= *local_c) {
                *puVar7 = uVar1;
              }
              puVar7 = puVar7 + 1;
              iVar4 = 0;
              uVar3 = uVar3 - 1;
              puVar10 = local_c + 1;
            }
            for (; puVar8 = puVar7, puVar9 = puVar10, local_c = puVar10, 0 < (int)uVar3;
                uVar3 = uVar3 - 3) {
              if (param_5 <= *puVar10) {
                *puVar7 = uVar1;
              }
              puVar9 = puVar10 + 1;
              puVar8 = puVar7 + 1;
              iVar4 = 1;
              local_c = puVar9;
              if (((int)(uVar3 - 1) < 1) || (iVar4 = 2, (int)(uVar3 - 2) < 1)) break;
              if (param_5 <= *puVar9) {
                *puVar8 = uVar1;
              }
              puVar7 = puVar7 + 2;
              iVar4 = 0;
              puVar10 = puVar10 + 2;
            }
          }
LAB_006fa516:
          if (local_8 < 1) {
            uVar3 = 0;
            break;
          }
          bVar5 = *param_6;
          local_10 = (uint)bVar5;
          param_6 = param_6 + 1;
          if ((bVar5 & 0x80) == 0) {
            uVar3 = local_10 & 0x7f;
          }
          else {
            uVar3 = local_10 & 0x3f;
          }
          puVar7 = puVar8;
          puVar10 = puVar9;
        } while ((int)uVar3 <= local_8);
      }
      uVar3 = uVar3 - local_8;
      if ((0 < local_8) && ((local_10 & 0x80) != 0)) {
        if ((local_10 & 0x40) == 0) {
          pbVar6 = param_6;
          if (0 < iVar4) {
            if (iVar4 == 1) {
              param_6 = param_6 + 1;
              local_8 = local_8 + -1;
            }
            if (local_8 < 1) goto LAB_006fa631;
            if (param_5 <= *puVar9) {
              *puVar8 = *(undefined1 *)((uint)*param_6 + param_13);
            }
            puVar9 = puVar9 + 1;
            puVar8 = puVar8 + 1;
            local_8 = local_8 + -1;
            pbVar6 = param_6 + 1;
          }
          for (; param_6 = pbVar6, 0 < local_8; local_8 = local_8 + -3) {
            if (param_5 <= *puVar9) {
              *puVar8 = *(undefined1 *)((uint)*pbVar6 + param_13);
            }
            param_6 = pbVar6 + 1;
            if ((local_8 + -1 < 1) || (param_6 = pbVar6 + 2, local_8 + -2 < 1)) break;
            if (param_5 <= puVar9[1]) {
              puVar8[1] = *(undefined1 *)((uint)*param_6 + param_13);
            }
            puVar9 = puVar9 + 2;
            puVar8 = puVar8 + 2;
            pbVar6 = pbVar6 + 3;
          }
        }
        else {
          uVar1 = *(undefined1 *)((uint)*param_6 + param_13);
          param_6 = param_6 + 1;
          if (0 < iVar4) {
            if (iVar4 == 1) {
              local_8 = local_8 + -1;
            }
            if (local_8 < 1) goto LAB_006fa631;
            if (param_5 <= *local_c) {
              *puVar8 = uVar1;
            }
            local_c = local_c + 1;
            puVar8 = puVar8 + 1;
            local_8 = local_8 + -1;
          }
          for (; 0 < local_8; local_8 = local_8 + -3) {
            if (param_5 <= *local_c) {
              *puVar8 = uVar1;
            }
            if ((local_8 + -1 < 1) || (local_8 + -2 < 1)) break;
            if (param_5 <= local_c[1]) {
              puVar8[1] = uVar1;
            }
            local_c = local_c + 2;
            puVar8 = puVar8 + 2;
          }
        }
      }
LAB_006fa631:
      bVar5 = (byte)local_10;
      iVar4 = (param_7 - param_8) - param_9;
      if ((int)uVar3 < iVar4) {
        do {
          iVar4 = iVar4 - uVar3;
          pbVar6 = param_6;
          if (((byte)local_10 & 0xc0) == 0x80) {
            pbVar6 = param_6 + uVar3;
          }
          bVar5 = *pbVar6;
          local_10 = (uint)bVar5;
          param_6 = pbVar6 + 1;
          uVar3 = local_10;
          if (((bVar5 & 0x80) != 0) && (uVar3 = local_10 & 0x3f, (bVar5 & 0x40) != 0)) {
            param_6 = pbVar6 + 2;
          }
        } while ((int)uVar3 < iVar4);
      }
      if ((bVar5 & 0xc0) == 0x80) {
        param_6 = param_6 + iVar4;
      }
    }
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    param_12 = param_12 + 1;
    iVar4 = param_10_after_write;
    if (2 < param_12) {
      param_12 = 0;
    }
  } while( true );
}

// 006FA7A0 FUN_006fa7a0
#line 4 "decomp/ST.exe/functions/006FA7A0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006FA7A0(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13,byte *param_14,int param_15,int param_16)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined1 uVar8;
  byte bVar9;
  byte *pbVar10_mg2;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13_mg0;
  uint local_18;
  uint local_14;
  byte *local_10;
  ushort *local_c;
  int local_8;

  _DAT_00857000 = 1;
  iVar10 = param_10;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
joined_r0x006fa7ba:
  param_10 = iVar10 + -1;
  if (param_10 < 0) {
    return;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_12 == 1) {
    param_10 = iVar10 + -2;
    if (param_10 < 0) {
      return;
    }
    uVar3 = (uint)*param_6;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = param_6 + 1;
    iVar10 = param_7;
    if (uVar3 != 0) {
      while( true ) {
        if ((uVar3 & 0x80) == 0) {
          uVar2 = uVar3 & 0x7f;
        }
        else if ((uVar3 & 0x40) == 0) {
          param_6 = param_6 + (uVar3 & 0x3f);
          uVar2 = uVar3 & 0x3f;
        }
        else {
          param_6 = param_6 + 1;
          uVar2 = uVar3 & 0x3f;
        }
        if ((int)(iVar10 - uVar2) < 1) break;
        uVar3 = (uint)*param_6;
        param_6 = param_6 + 1;
        iVar10 = iVar10 - uVar2;
      }
    }
    param_12 = 2;
  }
  local_14 = (uint)*param_6;
  param_6 = param_6 + 1;
  if (local_14 != 0) {
    local_8 = param_8;
    do {
      if ((local_14 & 0x80) == 0) {
        uVar3 = local_14 & 0x7f;
        if (local_8 < (int)uVar3) goto LAB_006fa888;
      }
      else {
        uVar3 = local_14 & 0x3f;
        if (local_8 < (int)uVar3) goto LAB_006fa888;
        if ((local_14 & 0x40) == 0) {
          param_6 = param_6 + uVar3;
        }
        else {
          param_6 = param_6 + 1;
        }
      }
      local_8 = local_8 - uVar3;
      local_14 = (uint)*param_6;
      param_6 = param_6 + 1;
    } while( true );
  }
  goto LAB_006fad74;
LAB_006fa888:
  uVar3 = uVar3 - local_8;
  if (((byte)local_14 & 0xc0) == 0x80) {
    param_6 = param_6 + local_8;
  }
  local_8 = param_9;
  puVar4 = param_1;
  puVar7 = param_3;
  puVar6 = param_3;
  iVar10 = param_11;
  pbVar12 = param_14;
  pbVar13_mg0 = param_14;
  local_10 = param_14;
  local_c = param_3;
  if ((int)uVar3 <= param_9) {
    do {
      local_18 = local_14 & 0x80;
      local_8 = local_8 - uVar3;
      puVar7 = puVar6;
      pbVar12 = pbVar13_mg0;
      if (local_18 == 0) {
        if (-1 < (int)(uVar3 - 1)) {
          do {
            if (iVar10 != 1) {
              puVar4 = puVar4 + 1;
              pbVar13_mg0 = pbVar13_mg0 + 1;
              puVar6 = puVar6 + 1;
            }
            iVar10 = iVar10 + 1;
            if (2 < iVar10) {
              iVar10 = 0;
            }
            uVar3 = uVar3 - 1;
            puVar7 = puVar6;
            pbVar12 = pbVar13_mg0;
            local_10 = pbVar13_mg0;
            local_c = puVar6;
          } while (uVar3 != 0);
        }
      }
      else if ((local_14 & 0x40) == 0) {
        puVar5 = puVar4;
        pbVar11 = param_6;
        if (0 < iVar10) {
          if (iVar10 == 1) {
            param_6 = param_6 + 1;
            uVar3 = uVar3 - 1;
            iVar10 = 2;
          }
          if ((int)uVar3 < 1) goto LAB_006faad5;
          if (*puVar6 < param_5) {
            bVar9 = *pbVar13_mg0;
            iVar10 = param_16;
          }
          else {
            bVar9 = *param_6;
            iVar10 = param_13;
          }
          *puVar4 = *(undefined1 *)((uint)bVar9 + iVar10);
          puVar6 = puVar6 + 1;
          puVar5 = puVar4 + 1;
          pbVar13_mg0 = pbVar13_mg0 + 1;
          pbVar11 = param_6 + 1;
          iVar10 = 0;
          uVar3 = uVar3 - 1;
          local_10 = pbVar13_mg0;
          local_c = puVar6;
        }
        for (; puVar4 = puVar5, puVar7 = puVar6, pbVar12 = pbVar13_mg0, param_6 = pbVar11,
            0 < (int)uVar3; uVar3 = uVar3 - 3) {
          if (*puVar6 < param_5) {
            bVar9 = *pbVar13_mg0;
            iVar10 = param_16;
          }
          else {
            bVar9 = *pbVar11;
            iVar10 = param_13;
          }
          *puVar5 = *(undefined1 *)((uint)bVar9 + iVar10);
          puVar7 = puVar6 + 1;
          puVar4 = puVar5 + 1;
          pbVar12 = pbVar13_mg0 + 1;
          param_6 = pbVar11 + 1;
          iVar10 = 1;
          local_10 = pbVar12;
          local_c = puVar7;
          if ((int)(uVar3 - 1) < 1) break;
          param_6 = pbVar11 + 2;
          iVar10 = 2;
          if ((int)(uVar3 - 2) < 1) break;
          if (*puVar7 < param_5) {
            bVar9 = *pbVar12;
            iVar10 = param_16;
          }
          else {
            bVar9 = *param_6;
            iVar10 = param_13;
          }
          *puVar4 = *(undefined1 *)((uint)bVar9 + iVar10);
          puVar6 = puVar6 + 2;
          pbVar13_mg0 = pbVar13_mg0 + 2;
          iVar10 = 0;
          puVar5 = puVar5 + 2;
          pbVar11 = pbVar11 + 3;
          local_10 = pbVar13_mg0;
          local_c = puVar6;
        }
      }
      else {
        uVar1 = *(undefined1 *)((uint)*param_6 + param_13);
        param_6 = param_6 + 1;
        puVar5 = puVar4;
        pbVar11 = local_10;
        puVar6 = local_c;
        if (0 < iVar10) {
          if (iVar10 == 1) {
            iVar10 = 2;
            uVar3 = uVar3 - 1;
          }
          puVar7 = local_c;
          pbVar12 = local_10;
          if ((int)uVar3 < 1) goto LAB_006faad5;
          if (*local_c < param_5) {
            iVar10 = 0;
            *puVar4 = *(undefined1 *)((uint)*local_10 + param_16);
            uVar3 = uVar3 - 1;
            puVar5 = puVar4 + 1;
            pbVar11 = local_10 + 1;
            puVar6 = local_c + 1;
          }
          else {
            *puVar4 = uVar1;
            iVar10 = 0;
            uVar3 = uVar3 - 1;
            puVar5 = puVar4 + 1;
            pbVar11 = local_10 + 1;
            puVar6 = local_c + 1;
          }
        }
        for (; puVar4 = puVar5, puVar7 = puVar6, pbVar12 = pbVar11, local_10 = pbVar11,
            local_c = puVar6, 0 < (int)uVar3; uVar3 = uVar3 - 3) {
          uVar8 = uVar1;
          if (*puVar6 < param_5) {
            uVar8 = *(undefined1 *)((uint)*pbVar11 + param_16);
          }
          *puVar5 = uVar8;
          puVar7 = puVar6 + 1;
          puVar4 = puVar5 + 1;
          pbVar12 = pbVar11 + 1;
          iVar10 = 1;
          local_10 = pbVar12;
          local_c = puVar7;
          if (((int)(uVar3 - 1) < 1) || (iVar10 = 2, (int)(uVar3 - 2) < 1)) break;
          uVar8 = uVar1;
          if (*puVar7 < param_5) {
            uVar8 = *(undefined1 *)((uint)*pbVar12 + param_16);
          }
          *puVar4 = uVar8;
          iVar10 = 0;
          puVar5 = puVar5 + 2;
          pbVar11 = pbVar11 + 2;
          puVar6 = puVar6 + 2;
        }
      }
LAB_006faad5:
      if (local_8 < 1) {
        uVar3 = 0;
        break;
      }
      bVar9 = *param_6;
      local_14 = (uint)bVar9;
      param_6 = param_6 + 1;
      if ((bVar9 & 0x80) == 0) {
        uVar3 = bVar9 & 0x7f;
      }
      else {
        uVar3 = bVar9 & 0x3f;
      }
      puVar6 = puVar7;
      pbVar13_mg0 = pbVar12;
    } while ((int)uVar3 <= local_8);
  }
  uVar3 = uVar3 - local_8;
  if ((0 < local_8) && ((local_14 & 0x80) != 0)) {
    if ((local_14 & 0x40) == 0) {
      pbVar10_mg2 = param_6;
      if (0 < iVar10) {
        if (iVar10 == 1) {
          param_6 = param_6 + 1;
          local_8 = local_8 + -1;
        }
        if (local_8 < 1) goto LAB_006fad1c;
        if (*puVar7 < param_5) {
          bVar9 = *pbVar12;
          iVar10 = param_16;
        }
        else {
          bVar9 = *param_6;
          iVar10 = param_13;
        }
        *puVar4 = *(undefined1 *)((uint)bVar9 + iVar10);
        puVar7 = puVar7 + 1;
        puVar4 = puVar4 + 1;
        pbVar12 = pbVar12 + 1;
        pbVar10_mg2 = param_6 + 1;
        local_8 = local_8 + -1;
      }
      for (; param_6 = pbVar10_mg2, 0 < local_8; local_8 = local_8 + -3) {
        if (*puVar7 < param_5) {
          bVar9 = *pbVar12;
          iVar10 = param_16;
        }
        else {
          bVar9 = *pbVar10_mg2;
          iVar10 = param_13;
        }
        *puVar4 = *(undefined1 *)((uint)bVar9 + iVar10);
        param_6 = pbVar10_mg2 + 1;
        if ((local_8 + -1 < 1) || (param_6 = pbVar10_mg2 + 2, local_8 + -2 < 1)) break;
        if (puVar7[1] < param_5) {
          bVar9 = pbVar12[1];
          iVar10 = param_16;
        }
        else {
          bVar9 = *param_6;
          iVar10 = param_13;
        }
        puVar4[1] = *(undefined1 *)((uint)bVar9 + iVar10);
        puVar7 = puVar7 + 2;
        puVar4 = puVar4 + 2;
        pbVar12 = pbVar12 + 2;
        pbVar10_mg2 = pbVar10_mg2 + 3;
      }
    }
    else {
      uVar1 = *(undefined1 *)((uint)*param_6 + param_13);
      param_6 = param_6 + 1;
      if (0 < iVar10) {
        if (iVar10 == 1) {
          local_8 = local_8 + -1;
        }
        if (local_8 < 1) goto LAB_006fad1c;
        if (*local_c < param_5) {
          *puVar4 = *(undefined1 *)((uint)*local_10 + param_16);
          local_c = local_c + 1;
          puVar4 = puVar4 + 1;
          local_10 = local_10 + 1;
          local_8 = local_8 + -1;
        }
        else {
          *puVar4 = uVar1;
          local_c = local_c + 1;
          puVar4 = puVar4 + 1;
          local_10 = local_10 + 1;
          local_8 = local_8 + -1;
        }
      }
      for (; 0 < local_8; local_8 = local_8 + -3) {
        uVar8 = uVar1;
        if (*local_c < param_5) {
          uVar8 = *(undefined1 *)((uint)*local_10 + param_16);
        }
        *puVar4 = uVar8;
        if ((local_8 + -1 < 1) || (local_8 + -2 < 1)) break;
        uVar8 = uVar1;
        if (local_c[1] < param_5) {
          uVar8 = *(undefined1 *)((uint)local_10[1] + param_16);
        }
        puVar4[1] = uVar8;
        local_c = local_c + 2;
        puVar4 = puVar4 + 2;
        local_10 = local_10 + 2;
      }
    }
  }
LAB_006fad1c:
  bVar9 = (byte)local_14;
  iVar10 = (param_7 - param_8) - param_9;
  if ((int)uVar3 < iVar10) {
    do {
      iVar10 = iVar10 - uVar3;
      if (((byte)local_14 & 0xc0) == 0x80) {
        param_6 = param_6 + uVar3;
      }
      bVar9 = *param_6;
      local_14 = (uint)bVar9;
      uVar3 = local_14;
      pbVar12 = param_6 + 1;
      if (((bVar9 & 0x80) != 0) && (uVar3 = local_14 & 0x3f, (bVar9 & 0x40) != 0)) {
        pbVar12 = param_6 + 2;
      }
      param_6 = pbVar12;
    } while ((int)uVar3 < iVar10);
  }
  if ((bVar9 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar10;
  }
LAB_006fad74:
  param_1 = param_1 + param_2;
  param_3 = (ushort *)((int)param_3 + param_4);
  param_14 = param_14 + param_15;
  param_12 = param_12 + 1;
  iVar10 = param_10;
  if (2 < param_12) {
    param_12 = 0;
  }
  goto joined_r0x006fa7ba;
}

// 006FADC0 FUN_006fadc0
#line 4 "decomp/ST.exe/functions/006FADC0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006FADC0(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 ushort *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 uint param_12,int param_13)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  ushort uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  undefined1 *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  int local_10;
  uint local_c;
  undefined1 *local_8;
  ushort *puVar13_mg0;

  _DAT_00857000 = 1;
  puVar11 = param_6;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = param_10 + -1;
    if (param_10 < 0) {
      return;
    }
    while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
      uVar6 = (uint)(byte)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      iVar8 = param_7;
      if (uVar6 != 0) {
        while( true ) {
          if ((uVar6 & 0x80) == 0) {
            uVar5 = uVar6 & 0x7f;
          }
          else if ((uVar6 & 0x40) == 0) {
            puVar11 = (ushort *)((int)puVar11 + (uVar6 & 0x3f));
            uVar5 = uVar6 & 0x3f;
          }
          else {
            puVar11 = (ushort *)((int)puVar11 + 1);
            uVar5 = uVar6 & 0x3f;
          }
          if ((int)(iVar8 - uVar5) < 1) break;
          uVar6 = (uint)(byte)*puVar11;
          puVar11 = (ushort *)((int)puVar11 + 1);
          iVar8 = iVar8 - uVar5;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_12 = param_12 + 1;
      if (4 < (int)param_12) {
        param_12 = 0;
      }
    }
    local_c = (uint)(byte)*puVar11;
    puVar11 = (ushort *)((int)puVar11 + 1);
    iVar8 = param_8;
    if (local_c == 0) goto LAB_006fb415;
    while( true ) {
      while ((local_c & 0x80) == 0) {
        uVar6 = local_c & 0x7f;
        if (iVar8 < (int)uVar6) goto LAB_006faea8;
        uVar3 = *puVar11;
        puVar11 = (ushort *)((int)puVar11 + 1);
        iVar8 = iVar8 - uVar6;
        local_c = (uint)(byte)uVar3;
      }
      uVar6 = local_c & 0x3f;
      if (iVar8 < (int)uVar6) break;
      if ((local_c & 0x40) == 0) {
        local_c = (uint)*(byte *)((int)puVar11 + uVar6);
        puVar11 = (ushort *)((byte *)((int)puVar11 + uVar6) + 1);
        iVar8 = iVar8 - uVar6;
      }
      else {
        local_c = (uint)STField<byte>(puVar11,1);
        puVar11 = puVar11 + 1;
        iVar8 = iVar8 - uVar6;
      }
    }
LAB_006faea8:
    uVar6 = uVar6 - iVar8;
    if (((byte)local_c & 0xc0) == 0x80) {
      puVar11 = (ushort *)((int)puVar11 + iVar8);
    }
    local_10 = param_9;
    iVar8 = param_11;
    puVar10 = param_1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = param_3;
    local_8 = param_1;
    if ((int)uVar6 <= param_9) {
      do {
        local_10 = local_10 - uVar6;
        if ((local_c & 0x80) == 0) {
          puVar13_mg0 = param_6;
          puVar4 = local_8;
          if (-1 < (int)(uVar6 - 1)) {
            do {
              if (((byte)iVar8 & 1) == 1) {
                puVar10 = puVar10 + 1;
                param_6 = param_6 + 1;
              }
              iVar8 = iVar8 + 1;
              if (4 < iVar8) {
                iVar8 = 0;
              }
              uVar6 = uVar6 - 1;
              puVar13_mg0 = param_6;
              puVar4 = puVar10;
            } while (uVar6 != 0);
          }
          goto LAB_006fb183;
        }
        if ((local_c & 0x40) == 0) {
          if (iVar8 < 1) goto switchD_006fb02b_default;
          switch(iVar8) {
          case 1:
            if (param_5 <= *param_6) {
              *puVar10 = *(undefined1 *)((uint)(byte)*puVar11 + param_13);
            }
            param_6 = param_6 + 1;
            puVar10 = puVar10 + 1;
            puVar11 = (ushort *)((int)puVar11 + 1);
            uVar6 = uVar6 - 1;
            iVar8 = 2;
            puVar13_mg0 = param_6;
            puVar4 = puVar10;
            local_8 = puVar10;
            if ((int)uVar6 < 1) break;
            goto LAB_006fb06b;
          case 2:
LAB_006fb06b:
            puVar11 = (ushort *)((int)puVar11 + 1);
            uVar6 = uVar6 - 1;
            iVar8 = 3;
            puVar12 = puVar11;
            puVar13_mg0 = param_6;
            puVar4 = local_8;
            if (0 < (int)uVar6) {
LAB_006fb07f:
              if (param_5 <= *param_6) {
                *puVar10 = *(undefined1 *)((uint)(byte)*puVar12 + param_13);
              }
              param_6 = param_6 + 1;
              puVar10 = puVar10 + 1;
              puVar11 = (ushort *)((int)puVar12 + 1);
              iVar8 = 4;
              puVar13_mg0 = param_6;
              puVar4 = puVar10;
              if (0 < (int)(uVar6 - 1)) {
                puVar11 = puVar12 + 1;
                iVar8 = 0;
                uVar6 = uVar6 - 2;
                local_8 = puVar10;
                goto switchD_006fb02b_default;
              }
            }
            break;
          case 3:
            puVar12 = puVar11;
            goto LAB_006fb07f;
          case 4:
            puVar11 = (ushort *)((int)puVar11 + 1);
            iVar8 = 0;
            uVar6 = uVar6 - 1;
          default:
switchD_006fb02b_default:
            puVar13_mg0 = param_6;
            puVar4 = local_8;
            if (0 < (int)uVar6) {
              puVar12 = (ushort *)((int)puVar11 + 1);
              puVar2 = puVar10;
              for (iVar7 = uVar6 - 1; iVar8 = 1, puVar10 = puVar2, puVar11 = puVar12,
                  puVar13_mg0 = param_6, puVar4 = local_8, 0 < iVar7; iVar7 = iVar7 + -5) {
                if (param_5 <= *param_6) {
                  *puVar2 = *(undefined1 *)((uint)(byte)*puVar12 + param_13);
                }
                puVar13_mg0 = param_6 + 1;
                puVar10 = puVar2 + 1;
                puVar11 = (ushort *)((int)puVar12 + 1);
                iVar8 = 2;
                puVar4 = puVar10;
                if (iVar7 + -1 < 1) break;
                puVar11 = puVar12 + 1;
                iVar8 = 3;
                if (iVar7 + -2 < 1) break;
                if (param_5 <= *puVar13_mg0) {
                  *puVar10 = *(undefined1 *)((uint)(byte)*puVar11 + param_13);
                }
                param_6 = param_6 + 2;
                puVar10 = puVar2 + 2;
                puVar11 = (ushort *)((int)puVar12 + 3);
                iVar8 = 4;
                puVar13_mg0 = param_6;
                puVar4 = puVar10;
                if (iVar7 + -3 < 1) break;
                puVar11 = puVar12 + 2;
                iVar8 = 0;
                if (iVar7 + -4 < 1) break;
                puVar12 = (ushort *)((int)puVar12 + 5);
                puVar2 = puVar10;
                local_8 = puVar10;
              }
            }
          }
          goto LAB_006fb183;
        }
        uVar3 = *puVar11;
        puVar11 = (ushort *)((int)puVar11 + 1);
        uVar1 = *(undefined1 *)((uint)(byte)uVar3 + param_13);
        if (iVar8 < 1) goto switchD_006faf11_default;
        switch(iVar8) {
        case 1:
          if (param_5 <= *param_6) {
            *local_8 = uVar1;
          }
          param_6 = param_6 + 1;
          local_8 = local_8 + 1;
          uVar6 = uVar6 - 1;
          iVar8 = 2;
          puVar10 = local_8;
          puVar13_mg0 = param_6;
          puVar4 = local_8;
          if ((int)uVar6 < 1) break;
          goto LAB_006faf4f;
        case 2:
LAB_006faf4f:
          uVar6 = uVar6 - 1;
          iVar8 = 3;
          puVar10 = local_8;
          puVar13_mg0 = param_6;
          puVar4 = local_8;
          if (0 < (int)uVar6) {
LAB_006faf65:
            if (param_5 <= *param_6) {
              *local_8 = uVar1;
            }
            param_6 = param_6 + 1;
            local_8 = local_8 + 1;
            iVar8 = 4;
            puVar10 = local_8;
            puVar13_mg0 = param_6;
            puVar4 = local_8;
            if (0 < (int)(uVar6 - 1)) {
              iVar8 = 0;
              uVar6 = uVar6 - 2;
              goto switchD_006faf11_default;
            }
          }
          break;
        case 3:
          goto LAB_006faf65;
        case 4:
          iVar8 = 0;
          uVar6 = uVar6 - 1;
        default:
switchD_006faf11_default:
          puVar10 = local_8;
          puVar13_mg0 = param_6;
          puVar4 = local_8;
          if (0 < (int)uVar6) {
            iVar7 = uVar6 - 1;
            iVar8 = 1;
            if (0 < iVar7) {
              while( true ) {
                if (param_5 <= *param_6) {
                  *local_8 = uVar1;
                }
                puVar13_mg0 = param_6 + 1;
                puVar10 = local_8 + 1;
                iVar8 = 2;
                puVar4 = puVar10;
                if ((iVar7 + -1 < 1) || (iVar8 = 3, iVar7 + -2 < 1)) break;
                if (param_5 <= *puVar13_mg0) {
                  *puVar10 = uVar1;
                }
                param_6 = param_6 + 2;
                local_8 = local_8 + 2;
                iVar8 = 4;
                puVar10 = local_8;
                puVar13_mg0 = param_6;
                puVar4 = local_8;
                if ((iVar7 + -3 < 1) || (iVar8 = 0, iVar7 + -4 < 1)) break;
                iVar7 = iVar7 + -5;
                iVar8 = 1;
                if (iVar7 < 1) break;
              }
            }
          }
        }
LAB_006fb183:
        local_8 = puVar4;
        param_6 = puVar13_mg0;
        if (local_10 < 1) {
          uVar6 = 0;
          break;
        }
        uVar3 = *puVar11;
        local_c = (uint)(byte)uVar3;
        puVar11 = (ushort *)((int)puVar11 + 1);
        if (((byte)uVar3 & 0x80) == 0) {
          uVar6 = local_c & 0x7f;
        }
        else {
          uVar6 = local_c & 0x3f;
        }
      } while ((int)uVar6 <= local_10);
    }
    uVar6 = uVar6 - local_10;
    if ((local_10 < 1) || ((local_c & 0x80) == 0)) goto LAB_006fb3c9;
    if ((local_c & 0x40) == 0) {
      if (iVar8 < 1) {
switchD_006fb2ed_default:
        if (0 < local_10) {
          puVar11 = (ushort *)((int)puVar11 + 1);
          local_10 = local_10 + -1;
          puVar12 = puVar11;
          if (0 < local_10) {
            while( true ) {
              if (param_5 <= *param_6) {
                *puVar10 = *(undefined1 *)((uint)(byte)*puVar12 + param_13);
              }
              puVar11 = (ushort *)((int)puVar12 + 1);
              if ((local_10 + -1 < 1) || (puVar11 = puVar12 + 1, local_10 + -2 < 1)) break;
              if (param_5 <= param_6[1]) {
                puVar10[1] = *(undefined1 *)((uint)(byte)*puVar11 + param_13);
              }
              param_6 = param_6 + 2;
              puVar10 = puVar10 + 2;
              puVar11 = (ushort *)((int)puVar12 + 3);
              if ((local_10 + -3 < 1) || (puVar11 = puVar12 + 2, local_10 + -4 < 1)) break;
              puVar11 = (ushort *)((int)puVar12 + 5);
              local_10 = local_10 + -5;
              puVar12 = puVar11;
              if (local_10 < 1) break;
            }
          }
        }
      }
      else {
        switch(iVar8) {
        case 1:
          if (param_5 <= *param_6) {
            *puVar10 = *(undefined1 *)((uint)(byte)*puVar11 + param_13);
          }
          param_6 = param_6 + 1;
          puVar10 = puVar10 + 1;
          puVar11 = (ushort *)((int)puVar11 + 1);
          local_10 = local_10 + -1;
          if (local_10 < 1) goto LAB_006fb3c9;
          break;
        case 2:
          break;
        case 3:
          goto switchD_006fb2ed_caseD_3;
        case 4:
          goto switchD_006fb2ed_caseD_4;
        default:
          goto switchD_006fb2ed_default;
        }
        puVar11 = (ushort *)((int)puVar11 + 1);
        local_10 = local_10 + -1;
        if (0 < local_10) {
switchD_006fb2ed_caseD_3:
          if (param_5 <= *param_6) {
            *puVar10 = *(undefined1 *)((uint)(byte)*puVar11 + param_13);
          }
          param_6 = param_6 + 1;
          puVar10 = puVar10 + 1;
          puVar11 = (ushort *)((int)puVar11 + 1);
          local_10 = local_10 + -1;
          if (0 < local_10) {
switchD_006fb2ed_caseD_4:
            puVar11 = (ushort *)((int)puVar11 + 1);
            local_10 = local_10 + -1;
            goto switchD_006fb2ed_default;
          }
        }
      }
      goto LAB_006fb3c9;
    }
    uVar3 = *puVar11;
    puVar11 = (ushort *)((int)puVar11 + 1);
    uVar1 = *(undefined1 *)((uint)(byte)uVar3 + param_13);
    if (iVar8 < 1) goto switchD_006fb1f6_default;
    switch(iVar8) {
    case 1:
      if (param_5 <= *param_6) {
        *local_8 = uVar1;
      }
      param_6 = param_6 + 1;
      local_8 = local_8 + 1;
      local_10 = local_10 + -1;
      if (local_10 < 1) break;
      goto LAB_006fb22f;
    case 2:
LAB_006fb22f:
      local_10 = local_10 + -1;
      if (0 < local_10) {
LAB_006fb240:
        if (param_5 <= *param_6) {
          *local_8 = uVar1;
        }
        param_6 = param_6 + 1;
        local_8 = local_8 + 1;
        if (0 < local_10 + -1) {
          local_10 = local_10 + -2;
          goto switchD_006fb1f6_default;
        }
      }
      break;
    case 3:
      goto LAB_006fb240;
    case 4:
      local_10 = local_10 + -1;
    default:
switchD_006fb1f6_default:
      if ((0 < local_10) && (local_10 = local_10 + -1, 0 < local_10)) {
        while( true ) {
          if (param_5 <= *param_6) {
            *local_8 = uVar1;
          }
          if (local_10 + -2 < 1) break;
          if (param_5 <= param_6[1]) {
            local_8[1] = uVar1;
          }
          param_6 = param_6 + 2;
          local_8 = local_8 + 2;
          if ((local_10 + -4 < 1) || (local_10 = local_10 + -5, local_10 < 1)) break;
        }
      }
    }
LAB_006fb3c9:
    iVar8 = (param_7 - param_8) - param_9;
    bVar9 = (byte)local_c;
    if ((int)uVar6 < iVar8) {
      do {
        iVar8 = iVar8 - uVar6;
        puVar12 = puVar11;
        if (((byte)local_c & 0xc0) == 0x80) {
          puVar12 = (ushort *)((int)puVar11 + uVar6);
        }
        bVar9 = (byte)*puVar12;
        local_c = (uint)bVar9;
        puVar11 = (ushort *)((int)puVar12 + 1);
        uVar6 = local_c;
        if (((bVar9 & 0x80) != 0) && (uVar6 = local_c & 0x3f, (bVar9 & 0x40) != 0)) {
          puVar11 = puVar12 + 1;
        }
      } while ((int)uVar6 < iVar8);
    }
    if ((bVar9 & 0xc0) == 0x80) {
      puVar11 = (ushort *)((int)puVar11 + iVar8);
    }
LAB_006fb415:
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      param_12 = 0;
    }
  } while( true );
}

// 006FB4A0 FUN_006fb4a0
#line 4 "decomp/ST.exe/functions/006FB4A0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006FB4A0(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 uint param_12,int param_13,byte *param_14,int param_15,int param_16)

{
  undefined1 uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  byte bVar8;
  ushort *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  int local_14;
  uint local_10;
  byte *local_c;
  ushort *local_8;

  _DAT_00857000 = 1;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
joined_r0x006fb4b7:
  param_10 = param_10 + -1;
  if (param_10 < 0) {
    return;
  }
  while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
    uVar4 = (uint)*param_6;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = param_6 + 1;
    iVar6 = param_7;
    if (uVar4 != 0) {
      while( true ) {
        if ((uVar4 & 0x80) == 0) {
          uVar3 = uVar4 & 0x7f;
        }
        else if ((uVar4 & 0x40) == 0) {
          param_6 = param_6 + (uVar4 & 0x3f);
          uVar3 = uVar4 & 0x3f;
        }
        else {
          param_6 = param_6 + 1;
          uVar3 = uVar4 & 0x3f;
        }
        if ((int)(iVar6 - uVar3) < 1) break;
        uVar4 = (uint)*param_6;
        param_6 = param_6 + 1;
        iVar6 = iVar6 - uVar3;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      param_12 = 0;
    }
  }
  local_10 = (uint)*param_6;
  param_6 = param_6 + 1;
  iVar6 = param_8;
  if (local_10 != 0) {
    do {
      if ((local_10 & 0x80) == 0) {
        uVar4 = local_10 & 0x7f;
        if (iVar6 < (int)uVar4) goto LAB_006fb58c;
      }
      else {
        uVar4 = local_10 & 0x3f;
        if (iVar6 < (int)uVar4) goto LAB_006fb58c;
        if ((local_10 & 0x40) == 0) {
          param_6 = param_6 + uVar4;
        }
        else {
          param_6 = param_6 + 1;
        }
      }
      local_10 = (uint)*param_6;
      param_6 = param_6 + 1;
      iVar6 = iVar6 - uVar4;
    } while( true );
  }
  goto LAB_006fbcae;
LAB_006fb58c:
  uVar4 = uVar4 - iVar6;
  if (((byte)local_10 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar6;
  }
  local_14 = param_9;
  iVar6 = param_11;
  pbVar10 = param_14;
  pbVar11 = param_14;
  puVar12 = param_1;
  puVar13 = param_1;
  local_c = param_14;
  local_8 = param_3;
  if ((int)uVar4 <= param_9) {
    do {
      local_14 = local_14 - uVar4;
      if ((local_10 & 0x80) == 0) {
        pbVar10 = pbVar11;
        puVar12 = puVar13;
        pbVar14 = param_6;
        pbVar2 = local_c;
        puVar9 = local_8;
        if (-1 < (int)(uVar4 - 1)) {
          do {
            if (((byte)iVar6 & 1) == 1) {
              puVar13 = puVar13 + 1;
              pbVar11 = pbVar11 + 1;
              local_8 = local_8 + 1;
            }
            iVar6 = iVar6 + 1;
            if (4 < iVar6) {
              iVar6 = 0;
            }
            uVar4 = uVar4 - 1;
            pbVar10 = pbVar11;
            puVar12 = puVar13;
            pbVar2 = pbVar11;
            puVar9 = local_8;
          } while (uVar4 != 0);
        }
        goto LAB_006fb934;
      }
      if ((local_10 & 0x40) == 0) {
        if (iVar6 < 1) goto switchD_006fb77a_default;
        switch(iVar6) {
        case 1:
          if (*local_8 < param_5) {
            *puVar13 = *(undefined1 *)((uint)*pbVar11 + param_16);
          }
          else {
            *puVar13 = *(undefined1 *)((uint)*param_6 + param_13);
          }
          iVar6 = 2;
          local_8 = local_8 + 1;
          puVar13 = puVar13 + 1;
          pbVar11 = pbVar11 + 1;
          param_6 = param_6 + 1;
          uVar4 = uVar4 - 1;
          pbVar10 = pbVar11;
          puVar12 = puVar13;
          pbVar14 = param_6;
          pbVar2 = pbVar11;
          local_c = pbVar11;
          puVar9 = local_8;
          if ((int)uVar4 < 1) break;
          goto LAB_006fb7d4;
        case 2:
LAB_006fb7d4:
          param_6 = param_6 + 1;
          uVar4 = uVar4 - 1;
          iVar6 = 3;
          pbVar10 = pbVar11;
          puVar12 = puVar13;
          pbVar14 = param_6;
          pbVar2 = local_c;
          puVar9 = local_8;
          if (0 < (int)uVar4) {
LAB_006fb7eb:
            if (*local_8 < param_5) {
              *puVar13 = *(undefined1 *)((uint)*pbVar11 + param_16);
            }
            else {
              *puVar13 = *(undefined1 *)((uint)*param_6 + param_13);
            }
            iVar6 = 4;
            local_8 = local_8 + 1;
            puVar13 = puVar13 + 1;
            pbVar11 = pbVar11 + 1;
            pbVar10 = pbVar11;
            puVar12 = puVar13;
            pbVar14 = param_6 + 1;
            pbVar2 = pbVar11;
            puVar9 = local_8;
            if (0 < (int)(uVar4 - 1)) {
              param_6 = param_6 + 2;
              iVar6 = 0;
              uVar4 = uVar4 - 2;
              local_c = pbVar11;
              goto switchD_006fb77a_default;
            }
          }
          break;
        case 3:
          goto LAB_006fb7eb;
        case 4:
          iVar6 = 0;
          param_6 = param_6 + 1;
          uVar4 = uVar4 - 1;
        default:
switchD_006fb77a_default:
          pbVar10 = pbVar11;
          puVar12 = puVar13;
          pbVar14 = param_6;
          pbVar2 = local_c;
          puVar9 = local_8;
          if (0 < (int)uVar4) {
            pbVar15 = param_6 + 1;
            for (iVar5 = uVar4 - 1; iVar6 = 1, pbVar10 = pbVar11, puVar12 = puVar13,
                pbVar14 = pbVar15, pbVar2 = local_c, puVar9 = local_8, 0 < iVar5; iVar5 = iVar5 + -5
                ) {
              if (*local_8 < param_5) {
                *puVar13 = *(undefined1 *)((uint)*pbVar11 + param_16);
              }
              else {
                *puVar13 = *(undefined1 *)((uint)*pbVar15 + param_13);
              }
              iVar6 = 2;
              puVar9 = local_8 + 1;
              puVar12 = puVar13 + 1;
              pbVar10 = pbVar11 + 1;
              pbVar14 = pbVar15 + 1;
              pbVar2 = pbVar10;
              if (iVar5 + -1 < 1) break;
              iVar6 = 3;
              pbVar14 = pbVar15 + 2;
              if (iVar5 + -2 < 1) break;
              if (*puVar9 < param_5) {
                *puVar12 = *(undefined1 *)((uint)*pbVar10 + param_16);
              }
              else {
                *puVar12 = *(undefined1 *)((uint)pbVar15[2] + param_13);
              }
              iVar6 = 4;
              local_8 = local_8 + 2;
              puVar13 = puVar13 + 2;
              pbVar11 = pbVar11 + 2;
              pbVar10 = pbVar11;
              puVar12 = puVar13;
              pbVar14 = pbVar15 + 3;
              pbVar2 = pbVar11;
              puVar9 = local_8;
              if (iVar5 + -3 < 1) break;
              iVar6 = 0;
              pbVar14 = pbVar15 + 4;
              if (iVar5 + -4 < 1) break;
              pbVar15 = pbVar15 + 5;
              local_c = pbVar11;
            }
          }
        }
        goto LAB_006fb934;
      }
      uVar1 = *(undefined1 *)((uint)*param_6 + param_13);
      pbVar14 = param_6 + 1;
      if (iVar6 < 1) goto switchD_006fb5ff_default;
      switch(iVar6) {
      case 1:
        if (*local_8 < param_5) {
          *puVar13 = *(undefined1 *)((uint)*local_c + param_16);
        }
        else {
          *puVar13 = uVar1;
        }
        iVar6 = 2;
        local_8 = local_8 + 1;
        puVar13 = puVar13 + 1;
        local_c = local_c + 1;
        uVar4 = uVar4 - 1;
        pbVar10 = local_c;
        puVar12 = puVar13;
        pbVar2 = local_c;
        puVar9 = local_8;
        if ((int)uVar4 < 1) break;
        goto LAB_006fb64e;
      case 2:
LAB_006fb64e:
        uVar4 = uVar4 - 1;
        iVar6 = 3;
        pbVar10 = local_c;
        puVar12 = puVar13;
        pbVar2 = local_c;
        puVar9 = local_8;
        if (0 < (int)uVar4) {
LAB_006fb661:
          if (*local_8 < param_5) {
            *puVar13 = *(undefined1 *)((uint)*local_c + param_16);
          }
          else {
            *puVar13 = uVar1;
          }
          local_8 = local_8 + 1;
          puVar13 = puVar13 + 1;
          local_c = local_c + 1;
          iVar6 = 4;
          pbVar10 = local_c;
          puVar12 = puVar13;
          pbVar2 = local_c;
          puVar9 = local_8;
          if (0 < (int)(uVar4 - 1)) {
            iVar6 = 0;
            uVar4 = uVar4 - 2;
            goto switchD_006fb5ff_default;
          }
        }
        break;
      case 3:
        goto LAB_006fb661;
      case 4:
        iVar6 = 0;
        uVar4 = uVar4 - 1;
      default:
switchD_006fb5ff_default:
        pbVar10 = local_c;
        puVar12 = puVar13;
        pbVar2 = local_c;
        puVar9 = local_8;
        if (0 < (int)uVar4) {
          iVar5 = uVar4 - 1;
          iVar6 = 1;
          if (0 < iVar5) {
            while( true ) {
              if (*local_8 < param_5) {
                *puVar13 = *(undefined1 *)((uint)*local_c + param_16);
              }
              else {
                *puVar13 = uVar1;
              }
              iVar6 = 2;
              puVar9 = local_8 + 1;
              puVar12 = puVar13 + 1;
              pbVar10 = local_c + 1;
              pbVar2 = pbVar10;
              if ((iVar5 + -1 < 1) || (iVar6 = 3, iVar5 + -2 < 1)) break;
              if (*puVar9 < param_5) {
                *puVar12 = *(undefined1 *)((uint)*pbVar10 + param_16);
              }
              else {
                *puVar12 = uVar1;
              }
              local_8 = local_8 + 2;
              puVar13 = puVar13 + 2;
              local_c = local_c + 2;
              iVar6 = 4;
              pbVar10 = local_c;
              puVar12 = puVar13;
              pbVar2 = local_c;
              puVar9 = local_8;
              if ((iVar5 + -3 < 1) || (iVar6 = 0, iVar5 + -4 < 1)) break;
              iVar5 = iVar5 + -5;
              iVar6 = 1;
              if (iVar5 < 1) break;
            }
          }
        }
      }
LAB_006fb934:
      local_8 = puVar9;
      local_c = pbVar2;
      param_6 = pbVar14;
      if (local_14 < 1) {
        uVar4 = 0;
        break;
      }
      bVar8 = *param_6;
      local_10 = (uint)bVar8;
      param_6 = param_6 + 1;
      if ((bVar8 & 0x80) == 0) {
        uVar4 = local_10 & 0x7f;
      }
      else {
        uVar4 = local_10 & 0x3f;
      }
      pbVar11 = pbVar10;
      puVar13 = puVar12;
    } while ((int)uVar4 <= local_14);
  }
  uVar4 = uVar4 - local_14;
  pbVar11 = param_6;
  if ((local_14 < 1) || ((local_10 & 0x80) == 0)) goto cf_common_join_006FBC59;
  if ((local_10 & 0x40) == 0) {
    if (0 < iVar6) {
      switch(iVar6) {
      case 1:
        if (*local_8 < param_5) {
          *puVar12 = *(undefined1 *)((uint)*pbVar10 + param_16);
        }
        else {
          *puVar12 = *(undefined1 *)((uint)*param_6 + param_13);
        }
        local_8 = local_8 + 1;
        puVar12 = puVar12 + 1;
        pbVar10 = pbVar10 + 1;
        param_6 = param_6 + 1;
        local_14 = local_14 + -1;
        pbVar11 = param_6;
        if (local_14 < 1) goto cf_common_join_006FBC59;
        break;
      case 2:
        break;
      case 3:
        goto switchD_006fbaf2_caseD_3;
      case 4:
        goto switchD_006fbaf2_caseD_4;
      default:
        goto switchD_006fbaf2_default;
      }
      param_6 = param_6 + 1;
      local_14 = local_14 + -1;
      pbVar11 = param_6;
      if (local_14 < 1) goto cf_common_join_006FBC59;
switchD_006fbaf2_caseD_3:
      if (*local_8 < param_5) {
        *puVar12 = *(undefined1 *)((uint)*pbVar10 + param_16);
      }
      else {
        *puVar12 = *(undefined1 *)((uint)*param_6 + param_13);
      }
      local_8 = local_8 + 1;
      puVar12 = puVar12 + 1;
      pbVar10 = pbVar10 + 1;
      param_6 = param_6 + 1;
      local_14 = local_14 + -1;
      pbVar11 = param_6;
      if (local_14 < 1) goto cf_common_join_006FBC59;
switchD_006fbaf2_caseD_4:
      param_6 = param_6 + 1;
      local_14 = local_14 + -1;
    }
switchD_006fbaf2_default:
    pbVar11 = param_6;
    if (0 < local_14) {
      param_6 = param_6 + 1;
      local_14 = local_14 + -1;
      pbVar11 = param_6;
      if (0 < local_14) {
        while( true ) {
          if (*local_8 < param_5) {
            *puVar12 = *(undefined1 *)((uint)*pbVar10 + param_16);
          }
          else {
            *puVar12 = *(undefined1 *)((uint)*param_6 + param_13);
          }
          pbVar11 = param_6 + 1;
          if ((local_14 + -1 < 1) || (pbVar11 = param_6 + 2, local_14 + -2 < 1)) break;
          if (local_8[1] < param_5) {
            puVar12[1] = *(undefined1 *)((uint)pbVar10[1] + param_16);
          }
          else {
            puVar12[1] = *(undefined1 *)((uint)param_6[2] + param_13);
          }
          local_8 = local_8 + 2;
          puVar12 = puVar12 + 2;
          pbVar10 = pbVar10 + 2;
          pbVar11 = param_6 + 3;
          if ((local_14 + -3 < 1) || (pbVar11 = param_6 + 4, local_14 + -4 < 1)) break;
          param_6 = param_6 + 5;
          local_14 = local_14 + -5;
          pbVar11 = param_6;
          if (local_14 < 1) break;
        }
      }
    }
    goto cf_common_join_006FBC59;
  }
  uVar1 = *(undefined1 *)((uint)*param_6 + param_13);
  pbVar11 = param_6 + 1;
  if (iVar6 < 1) goto switchD_006fb9b7_default;
  switch(iVar6) {
  case 1:
    if (*local_8 < param_5) {
      *puVar12 = *(undefined1 *)((uint)*local_c + param_16);
    }
    else {
      *puVar12 = uVar1;
    }
    local_8 = local_8 + 1;
    puVar12 = puVar12 + 1;
    local_c = local_c + 1;
    local_14 = local_14 + -1;
    if (local_14 < 1) goto cf_common_join_006FBC59;
    goto LAB_006fba02;
  case 2:
LAB_006fba02:
    local_14 = local_14 + -1;
    if (local_14 < 1) goto cf_common_join_006FBC59;
LAB_006fba13:
    uVar7 = uVar1;
    if (*local_8 < param_5) {
      uVar7 = *(undefined1 *)((uint)*local_c + param_16);
    }
    *puVar12 = uVar7;
    local_8 = local_8 + 1;
    puVar12 = puVar12 + 1;
    local_c = local_c + 1;
    if (local_14 + -1 < 1) goto cf_common_join_006FBC59;
    local_14 = local_14 + -2;
    break;
  case 3:
    goto LAB_006fba13;
  case 4:
    local_14 = local_14 + -1;
  }
switchD_006fb9b7_default:
  if ((0 < local_14) && (local_14 = local_14 + -1, 0 < local_14)) {
    while( true ) {
      uVar7 = uVar1;
      if (*local_8 < param_5) {
        uVar7 = *(undefined1 *)((uint)*local_c + param_16);
      }
      *puVar12 = uVar7;
      if (local_14 + -2 < 1) break;
      uVar7 = uVar1;
      if (local_8[1] < param_5) {
        uVar7 = *(undefined1 *)((uint)local_c[1] + param_16);
      }
      puVar12[1] = uVar7;
      local_8 = local_8 + 2;
      puVar12 = puVar12 + 2;
      local_c = local_c + 2;
      if ((local_14 + -4 < 1) || (local_14 = local_14 + -5, local_14 < 1)) break;
    }
  }
cf_common_join_006FBC59:
  param_6 = pbVar11;
  iVar6 = (param_7 - param_8) - param_9;
  bVar8 = (byte)local_10;
  if ((int)uVar4 < iVar6) {
    do {
      iVar6 = iVar6 - uVar4;
      pbVar11 = param_6;
      if (((byte)local_10 & 0xc0) == 0x80) {
        pbVar11 = param_6 + uVar4;
      }
      bVar8 = *pbVar11;
      local_10 = (uint)bVar8;
      param_6 = pbVar11 + 1;
      uVar4 = local_10;
      if (((bVar8 & 0x80) != 0) && (uVar4 = local_10 & 0x3f, (bVar8 & 0x40) != 0)) {
        param_6 = pbVar11 + 2;
      }
    } while ((int)uVar4 < iVar6);
  }
  if ((bVar8 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar6;
  }
LAB_006fbcae:
  param_3 = (ushort *)((int)param_3 + param_4);
  param_1 = param_1 + param_2;
  param_14 = param_14 + param_15;
  param_12 = param_12 + 1;
  if (4 < (int)param_12) {
    param_12 = 0;
  }
  goto joined_r0x006fb4b7;
}

// 006FBD40 FUN_006fbd40
#line 1 "decomp/ST.exe/functions/006FBD40/decomp.c"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006FBD40(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                 int param_13,int param_14,int param_15)

{
  byte *pbVar1;
  ushort *puVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8_mg3;
  uint local_18;
  byte *local_14;
  int local_10;
  byte *local_c;
  ushort *local_8;
  byte *pbVar1_mg0;
  byte *pbVar8_mg2;

  pbVar4 = (byte *)(param_13 + (param_15 >> 3));
  _DAT_00857000 = 1;
  iVar7 = param_10;
  do {
    auto param_10_after_write = iVar7 + -1; /* compiler stack-slot lifetime split */
    if (param_10_after_write < 0) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_12 == 1) {
      param_10_after_write = iVar7 + -2;
      if (param_10_after_write < 0) {
        return;
      }
      uVar5 = (uint)*param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + 1;
      iVar7 = param_7;
      if (uVar5 != 0) {
        while( true ) {
          if ((uVar5 & 0x80) == 0) {
            uVar3 = uVar5 & 0x7f;
          }
          else if ((uVar5 & 0x40) == 0) {
            param_6 = param_6 + (uVar5 & 0x3f);
            uVar3 = uVar5 & 0x3f;
          }
          else {
            param_6 = param_6 + 1;
            uVar3 = uVar5 & 0x3f;
          }
          if ((int)(iVar7 - uVar3) < 1) break;
          uVar5 = (uint)*param_6;
          param_6 = param_6 + 1;
          iVar7 = iVar7 - uVar3;
        }
      }
      param_12 = 2;
    }
    local_18 = (uint)*param_6;
    param_6 = param_6 + 1;
    if (local_18 != 0) {
      uVar5 = 0x80 >> ((byte)param_15 & 7);
      iVar7 = param_8;
      while( true ) {
        while ((local_18 & 0x80) == 0) {
          uVar3 = local_18 & 0x7f;
          if (iVar7 < (int)uVar3) goto LAB_006fbe4e;
          iVar7 = iVar7 - uVar3;
          bVar6 = *param_6;
          param_6 = param_6 + 1;
          local_18 = (uint)bVar6;
        }
        uVar3 = local_18 & 0x3f;
        if (iVar7 < (int)uVar3) break;
        if ((local_18 & 0x40) == 0) {
          iVar7 = iVar7 - uVar3;
          local_18 = (uint)param_6[uVar3];
          param_6 = param_6 + uVar3 + 1;
        }
        else {
          iVar7 = iVar7 - uVar3;
          local_18 = (uint)param_6[1];
          param_6 = param_6 + 2;
        }
      }
LAB_006fbe4e:
      uVar3 = uVar3 - iVar7;
      if (((byte)local_18 & 0xc0) == 0x80) {
        param_6 = param_6 + iVar7;
      }
      local_10 = param_9;
      iVar7 = param_11;
      local_14 = param_1;
      local_c = pbVar4;
      local_8 = param_3;
      if ((int)uVar3 <= param_9) {
        do {
          local_10 = local_10 - uVar3;
          if ((local_18 & 0x80) == 0) {
            if (-1 < (int)(uVar3 - 1)) {
              do {
                if (iVar7 != 1) {
                  local_14 = local_14 + 1;
                  local_8 = local_8 + 1;
                  uVar5 = uVar5 >> 1;
                  if (uVar5 == 0) {
                    uVar5 = 0x80;
                    local_c = local_c + 1;
                  }
                }
                iVar7 = iVar7 + 1;
                if (2 < iVar7) {
                  iVar7 = 0;
                }
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
          }
          else if ((local_18 & 0x40) == 0) {
            pbVar1_mg0 = param_6;
            pbVar1 = local_14;
            puVar2 = local_8;
            if (0 < iVar7) {
              if (iVar7 == 1) {
                iVar7 = 2;
                param_6 = param_6 + 1;
                uVar3 = uVar3 - 1;
              }
              if ((int)uVar3 < 1) goto LAB_006fc0ab;
              if (((*local_c & (byte)uVar5) == 0) && (param_5 <= *local_8)) {
                *local_14 = *param_6;
              }
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              iVar7 = 0;
              uVar3 = uVar3 - 1;
              pbVar1_mg0 = param_6 + 1;
              pbVar1 = local_14 + 1;
              puVar2 = local_8 + 1;
            }
            for (; param_6 = pbVar1_mg0, local_14 = pbVar1, local_8 = puVar2, 0 < (int)uVar3;
                uVar3 = uVar3 - 3) {
              if (((*local_c & (byte)uVar5) == 0) && (param_5 <= *puVar2)) {
                *pbVar1 = *pbVar1_mg0;
              }
              local_8 = puVar2 + 1;
              local_14 = pbVar1 + 1;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              param_6 = pbVar1_mg0 + 1;
              iVar7 = 1;
              if ((int)(uVar3 - 1) < 1) break;
              param_6 = pbVar1_mg0 + 2;
              iVar7 = 2;
              if ((int)(uVar3 - 2) < 1) break;
              if (((*local_c & (byte)uVar5) == 0) && (param_5 <= *local_8)) {
                *local_14 = *param_6;
              }
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              iVar7 = 0;
              pbVar1_mg0 = pbVar1_mg0 + 3;
              pbVar1 = pbVar1 + 2;
              puVar2 = puVar2 + 2;
            }
          }
          else {
            bVar6 = *param_6;
            param_6 = param_6 + 1;
            pbVar1 = local_14;
            puVar2 = local_8;
            if (0 < iVar7) {
              if (iVar7 == 1) {
                iVar7 = 2;
                uVar3 = uVar3 - 1;
              }
              if ((int)uVar3 < 1) goto LAB_006fc0ab;
              if (((*local_c & (byte)uVar5) == 0) && (param_5 <= *local_8)) {
                *local_14 = bVar6;
              }
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              iVar7 = 0;
              uVar3 = uVar3 - 1;
              pbVar1 = local_14 + 1;
              puVar2 = local_8 + 1;
            }
            for (; local_14 = pbVar1, local_8 = puVar2, 0 < (int)uVar3; uVar3 = uVar3 - 3) {
              if (((*local_c & (byte)uVar5) == 0) && (param_5 <= *puVar2)) {
                *pbVar1 = bVar6;
              }
              local_8 = puVar2 + 1;
              local_14 = pbVar1 + 1;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              iVar7 = 1;
              if (((int)(uVar3 - 1) < 1) || (iVar7 = 2, (int)(uVar3 - 2) < 1)) break;
              if (((*local_c & (byte)uVar5) == 0) && (param_5 <= *local_8)) {
                *local_14 = bVar6;
              }
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              iVar7 = 0;
              pbVar1 = pbVar1 + 2;
              puVar2 = puVar2 + 2;
            }
          }
LAB_006fc0ab:
          if (local_10 < 1) {
            uVar3 = 0;
            break;
          }
          bVar6 = *param_6;
          local_18 = (uint)bVar6;
          param_6 = param_6 + 1;
          if ((bVar6 & 0x80) == 0) {
            uVar3 = local_18 & 0x7f;
          }
          else {
            uVar3 = local_18 & 0x3f;
          }
        } while ((int)uVar3 <= local_10);
      }
      uVar3 = uVar3 - local_10;
      if ((0 < local_10) && ((local_18 & 0x80) != 0)) {
        if ((local_18 & 0x40) == 0) {
          pbVar8_mg2 = param_6;
          if (0 < iVar7) {
            if (iVar7 == 1) {
              param_6 = param_6 + 1;
              local_10 = local_10 + -1;
            }
            if (local_10 < 1) goto LAB_006fc22a;
            if (((*local_c & (byte)uVar5) == 0) && (param_5 <= *local_8)) {
              *local_14 = *param_6;
            }
            local_8 = local_8 + 1;
            local_14 = local_14 + 1;
            uVar5 = uVar5 >> 1;
            if (uVar5 == 0) {
              uVar5 = 0x80;
              local_c = local_c + 1;
            }
            pbVar8_mg2 = param_6 + 1;
            local_10 = local_10 + -1;
          }
          for (; param_6 = pbVar8_mg2, 0 < local_10; local_10 = local_10 + -3) {
            if (((*local_c & (byte)uVar5) == 0) && (param_5 <= *local_8)) {
              *local_14 = *pbVar8_mg2;
            }
            uVar5 = uVar5 >> 1;
            if (uVar5 == 0) {
              uVar5 = 0x80;
              local_c = local_c + 1;
            }
            param_6 = pbVar8_mg2 + 1;
            if ((local_10 + -1 < 1) || (param_6 = pbVar8_mg2 + 2, local_10 + -2 < 1)) break;
            if (((*local_c & (byte)uVar5) == 0) && (param_5 <= local_8[1])) {
              local_14[1] = *param_6;
            }
            local_8 = local_8 + 2;
            local_14 = local_14 + 2;
            uVar5 = uVar5 >> 1;
            if (uVar5 == 0) {
              uVar5 = 0x80;
              local_c = local_c + 1;
            }
            pbVar8_mg2 = pbVar8_mg2 + 3;
          }
        }
        else {
          bVar6 = *param_6;
          param_6 = param_6 + 1;
          if (0 < iVar7) {
            if (iVar7 == 1) {
              local_10 = local_10 + -1;
            }
            if (local_10 < 1) goto LAB_006fc22a;
            if (((*local_c & (byte)uVar5) == 0) && (param_5 <= *local_8)) {
              *local_14 = bVar6;
            }
            local_8 = local_8 + 1;
            local_14 = local_14 + 1;
            uVar5 = uVar5 >> 1;
            if (uVar5 == 0) {
              uVar5 = 0x80;
              local_c = local_c + 1;
            }
            local_10 = local_10 + -1;
          }
          for (; 0 < local_10; local_10 = local_10 + -3) {
            if (((*local_c & (byte)uVar5) == 0) && (param_5 <= *local_8)) {
              *local_14 = bVar6;
            }
            uVar5 = uVar5 >> 1;
            if (uVar5 == 0) {
              uVar5 = 0x80;
              local_c = local_c + 1;
            }
            if ((local_10 + -1 < 1) || (local_10 + -2 < 1)) break;
            if (((*local_c & (byte)uVar5) == 0) && (param_5 <= local_8[1])) {
              local_14[1] = bVar6;
            }
            local_8 = local_8 + 2;
            local_14 = local_14 + 2;
            uVar5 = uVar5 >> 1;
            if (uVar5 == 0) {
              uVar5 = 0x80;
              local_c = local_c + 1;
            }
          }
        }
      }
LAB_006fc22a:
      bVar6 = (byte)local_18;
      iVar7 = (param_7 - param_8) - param_9;
      if ((int)uVar3 < iVar7) {
        do {
          iVar7 = iVar7 - uVar3;
          pbVar8_mg3 = param_6;
          if (((byte)local_18 & 0xc0) == 0x80) {
            pbVar8_mg3 = param_6 + uVar3;
          }
          bVar6 = *pbVar8_mg3;
          local_18 = (uint)bVar6;
          param_6 = pbVar8_mg3 + 1;
          uVar3 = local_18;
          if (((bVar6 & 0x80) != 0) && (uVar3 = local_18 & 0x3f, (bVar6 & 0x40) != 0)) {
            param_6 = pbVar8_mg3 + 2;
          }
        } while ((int)uVar3 < iVar7);
      }
      if ((bVar6 & 0xc0) == 0x80) {
        param_6 = param_6 + iVar7;
      }
    }
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    pbVar4 = pbVar4 + param_14;
    param_12 = param_12 + 1;
    iVar7 = param_10_after_write;
    if (2 < param_12) {
      param_12 = 0;
    }
  } while( true );
}

// 006FC3E0 FUN_006fc3e0
#line 1 "decomp/ST.exe/functions/006FC3E0/decomp.c"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006FC3E0(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                 int param_13,int param_14,int param_15,byte *param_16,int param_17,int param_18)

{
  byte *pbVar1;
  byte *pbVar2;
  ushort *puVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8_mg2;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  uint local_18;
  int local_14;
  byte *local_10;
  byte *local_c;
  ushort *local_8;
  byte *pbVar2_mg0;

  pbVar8 = (byte *)(param_13 + (param_15 >> 3));
  _DAT_00857000 = 1;
  iVar10 = param_10;
  do {
    auto param_10_after_write = iVar10 + -1; /* compiler stack-slot lifetime split */
    if (param_10_after_write < 0) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_12 == 1) {
      param_10_after_write = iVar10 + -2;
      if (param_10_after_write < 0) {
        return;
      }
      uVar7 = (uint)*param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + 1;
      iVar10 = param_7;
      if (uVar7 != 0) {
        while( true ) {
          if ((uVar7 & 0x80) == 0) {
            uVar4 = uVar7 & 0x7f;
          }
          else if ((uVar7 & 0x40) == 0) {
            param_6 = param_6 + (uVar7 & 0x3f);
            uVar4 = uVar7 & 0x3f;
          }
          else {
            param_6 = param_6 + 1;
            uVar4 = uVar7 & 0x3f;
          }
          if ((int)(iVar10 - uVar4) < 1) break;
          uVar7 = (uint)*param_6;
          param_6 = param_6 + 1;
          iVar10 = iVar10 - uVar4;
        }
      }
      param_12 = 2;
    }
    local_18 = (uint)*param_6;
    param_6 = param_6 + 1;
    if (local_18 != 0) {
      uVar7 = 0x80 >> ((byte)param_15 & 7);
      iVar10 = param_8;
      while( true ) {
        while ((local_18 & 0x80) == 0) {
          uVar4 = local_18 & 0x7f;
          if (iVar10 < (int)uVar4) goto LAB_006fc4ee;
          iVar10 = iVar10 - uVar4;
          bVar6 = *param_6;
          param_6 = param_6 + 1;
          local_18 = (uint)bVar6;
        }
        uVar4 = local_18 & 0x3f;
        if (iVar10 < (int)uVar4) break;
        if ((local_18 & 0x40) == 0) {
          iVar10 = iVar10 - uVar4;
          local_18 = (uint)param_6[uVar4];
          param_6 = param_6 + uVar4 + 1;
        }
        else {
          iVar10 = iVar10 - uVar4;
          local_18 = (uint)param_6[1];
          param_6 = param_6 + 2;
        }
      }
LAB_006fc4ee:
      uVar4 = uVar4 - iVar10;
      if (((byte)local_18 & 0xc0) == 0x80) {
        param_6 = param_6 + iVar10;
      }
      local_14 = param_9;
      iVar10 = param_11;
      pbVar9 = param_1;
      local_10 = param_16;
      local_c = pbVar8;
      local_8 = param_3;
      if ((int)uVar4 <= param_9) {
        do {
          local_14 = local_14 - uVar4;
          if ((local_18 & 0x80) == 0) {
            if (-1 < (int)(uVar4 - 1)) {
              do {
                if (iVar10 != 1) {
                  pbVar9 = pbVar9 + 1;
                  local_10 = local_10 + 1;
                  local_8 = local_8 + 1;
                  uVar7 = uVar7 >> 1;
                  if (uVar7 == 0) {
                    uVar7 = 0x80;
                    local_c = local_c + 1;
                  }
                }
                iVar10 = iVar10 + 1;
                if (2 < iVar10) {
                  iVar10 = 0;
                }
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
          }
          else if ((local_18 & 0x40) == 0) {
            pbVar1 = pbVar9;
            pbVar2_mg0 = param_6;
            pbVar2 = local_10;
            puVar3 = local_8;
            if (0 < iVar10) {
              if (iVar10 == 1) {
                param_6 = param_6 + 1;
                iVar10 = 2;
                uVar4 = uVar4 - 1;
              }
              if ((int)uVar4 < 1) goto LAB_006fc793;
              if ((*local_c & (byte)uVar7) == 0) {
                if (*local_8 < param_5) {
                  bVar6 = *(byte *)((uint)*local_10 + param_18);
                }
                else {
                  bVar6 = *param_6;
                }
                *pbVar9 = bVar6;
              }
              uVar7 = uVar7 >> 1;
              if (uVar7 == 0) {
                uVar7 = 0x80;
                local_c = local_c + 1;
              }
              iVar10 = 0;
              uVar4 = uVar4 - 1;
              pbVar1 = pbVar9 + 1;
              pbVar2_mg0 = param_6 + 1;
              pbVar2 = local_10 + 1;
              puVar3 = local_8 + 1;
            }
            for (; pbVar9 = pbVar1, param_6 = pbVar2_mg0, local_10 = pbVar2, local_8 = puVar3,
                0 < (int)uVar4; uVar4 = uVar4 - 3) {
              if ((*local_c & (byte)uVar7) == 0) {
                if (*puVar3 < param_5) {
                  bVar6 = *(byte *)((uint)*pbVar2 + param_18);
                }
                else {
                  bVar6 = *pbVar2_mg0;
                }
                *pbVar1 = bVar6;
              }
              local_8 = puVar3 + 1;
              pbVar9 = pbVar1 + 1;
              local_10 = pbVar2 + 1;
              uVar7 = uVar7 >> 1;
              if (uVar7 == 0) {
                uVar7 = 0x80;
                local_c = local_c + 1;
              }
              param_6 = pbVar2_mg0 + 1;
              iVar10 = 1;
              if ((int)(uVar4 - 1) < 1) break;
              param_6 = pbVar2_mg0 + 2;
              iVar10 = 2;
              if ((int)(uVar4 - 2) < 1) break;
              if ((*local_c & (byte)uVar7) == 0) {
                if (*local_8 < param_5) {
                  bVar6 = *(byte *)((uint)*local_10 + param_18);
                }
                else {
                  bVar6 = *param_6;
                }
                *pbVar9 = bVar6;
              }
              uVar7 = uVar7 >> 1;
              if (uVar7 == 0) {
                uVar7 = 0x80;
                local_c = local_c + 1;
              }
              iVar10 = 0;
              pbVar1 = pbVar1 + 2;
              pbVar2_mg0 = pbVar2_mg0 + 3;
              pbVar2 = pbVar2 + 2;
              puVar3 = puVar3 + 2;
            }
          }
          else {
            bVar6 = *param_6;
            param_6 = param_6 + 1;
            pbVar1 = pbVar9;
            pbVar2 = local_10;
            puVar3 = local_8;
            if (0 < iVar10) {
              if (iVar10 == 1) {
                iVar10 = 2;
                uVar4 = uVar4 - 1;
              }
              if ((int)uVar4 < 1) goto LAB_006fc793;
              if ((*local_c & (byte)uVar7) == 0) {
                if (*local_8 < param_5) {
                  *pbVar9 = *(byte *)((uint)*local_10 + param_18);
                }
                else {
                  *pbVar9 = bVar6;
                }
              }
              uVar7 = uVar7 >> 1;
              if (uVar7 == 0) {
                uVar7 = 0x80;
                local_c = local_c + 1;
              }
              iVar10 = 0;
              uVar4 = uVar4 - 1;
              pbVar1 = pbVar9 + 1;
              pbVar2 = local_10 + 1;
              puVar3 = local_8 + 1;
            }
            for (; pbVar9 = pbVar1, local_10 = pbVar2, local_8 = puVar3, 0 < (int)uVar4;
                uVar4 = uVar4 - 3) {
              if ((*local_c & (byte)uVar7) == 0) {
                bVar5 = bVar6;
                if (*puVar3 < param_5) {
                  bVar5 = *(byte *)((uint)*pbVar2 + param_18);
                }
                *pbVar1 = bVar5;
              }
              local_8 = puVar3 + 1;
              pbVar9 = pbVar1 + 1;
              local_10 = pbVar2 + 1;
              uVar7 = uVar7 >> 1;
              if (uVar7 == 0) {
                uVar7 = 0x80;
                local_c = local_c + 1;
              }
              iVar10 = 1;
              if (((int)(uVar4 - 1) < 1) || (iVar10 = 2, (int)(uVar4 - 2) < 1)) break;
              if ((*local_c & (byte)uVar7) == 0) {
                bVar5 = bVar6;
                if (*local_8 < param_5) {
                  bVar5 = *(byte *)((uint)*local_10 + param_18);
                }
                *pbVar9 = bVar5;
              }
              uVar7 = uVar7 >> 1;
              if (uVar7 == 0) {
                uVar7 = 0x80;
                local_c = local_c + 1;
              }
              iVar10 = 0;
              pbVar1 = pbVar1 + 2;
              pbVar2 = pbVar2 + 2;
              puVar3 = puVar3 + 2;
            }
          }
LAB_006fc793:
          if (local_14 < 1) {
            uVar4 = 0;
            break;
          }
          bVar6 = *param_6;
          local_18 = (uint)bVar6;
          param_6 = param_6 + 1;
          if ((bVar6 & 0x80) == 0) {
            uVar4 = bVar6 & 0x7f;
          }
          else {
            uVar4 = bVar6 & 0x3f;
          }
        } while ((int)uVar4 <= local_14);
      }
      uVar4 = uVar4 - local_14;
      if ((0 < local_14) && ((local_18 & 0x80) != 0)) {
        if ((local_18 & 0x40) == 0) {
          pbVar8_mg2 = param_6;
          if (0 < iVar10) {
            if (iVar10 == 1) {
              param_6 = param_6 + 1;
              local_14 = local_14 + -1;
            }
            if (local_14 < 1) goto LAB_006fca86;
            if ((*local_c & (byte)uVar7) == 0) {
              if (*local_8 < param_5) {
                bVar6 = *(byte *)((uint)*local_10 + param_18);
              }
              else {
                bVar6 = *param_6;
              }
              *pbVar9 = bVar6;
            }
            local_8 = local_8 + 1;
            pbVar9 = pbVar9 + 1;
            local_10 = local_10 + 1;
            uVar7 = uVar7 >> 1;
            if (uVar7 == 0) {
              uVar7 = 0x80;
              local_c = local_c + 1;
            }
            pbVar8_mg2 = param_6 + 1;
            local_14 = local_14 + -1;
          }
          for (; param_6 = pbVar8_mg2, 0 < local_14; local_14 = local_14 + -3) {
            if ((*local_c & (byte)uVar7) == 0) {
              if (*local_8 < param_5) {
                bVar6 = *(byte *)((uint)*local_10 + param_18);
              }
              else {
                bVar6 = *pbVar8_mg2;
              }
              *pbVar9 = bVar6;
            }
            uVar7 = uVar7 >> 1;
            if (uVar7 == 0) {
              uVar7 = 0x80;
              local_c = local_c + 1;
            }
            param_6 = pbVar8_mg2 + 1;
            if ((local_14 + -1 < 1) || (param_6 = pbVar8_mg2 + 2, local_14 + -2 < 1)) break;
            if ((*local_c & (byte)uVar7) == 0) {
              if (local_8[1] < param_5) {
                bVar6 = *(byte *)((uint)local_10[1] + param_18);
              }
              else {
                bVar6 = *param_6;
              }
              pbVar9[1] = bVar6;
            }
            local_8 = local_8 + 2;
            pbVar9 = pbVar9 + 2;
            local_10 = local_10 + 2;
            uVar7 = uVar7 >> 1;
            if (uVar7 == 0) {
              uVar7 = 0x80;
              local_c = local_c + 1;
            }
            pbVar8_mg2 = pbVar8_mg2 + 3;
          }
        }
        else {
          bVar6 = *param_6;
          param_6 = param_6 + 1;
          if (0 < iVar10) {
            if (iVar10 == 1) {
              local_14 = local_14 + -1;
            }
            if (local_14 < 1) goto LAB_006fca86;
            if ((*local_c & (byte)uVar7) == 0) {
              if (*local_8 < param_5) {
                *pbVar9 = *(byte *)((uint)*local_10 + param_18);
              }
              else {
                *pbVar9 = bVar6;
              }
            }
            local_8 = local_8 + 1;
            pbVar9 = pbVar9 + 1;
            local_10 = local_10 + 1;
            uVar7 = uVar7 >> 1;
            if (uVar7 == 0) {
              uVar7 = 0x80;
              local_c = local_c + 1;
            }
            local_14 = local_14 + -1;
          }
          for (; 0 < local_14; local_14 = local_14 + -3) {
            if ((*local_c & (byte)uVar7) == 0) {
              bVar5 = bVar6;
              if (*local_8 < param_5) {
                bVar5 = *(byte *)((uint)*local_10 + param_18);
              }
              *pbVar9 = bVar5;
            }
            uVar7 = uVar7 >> 1;
            if (uVar7 == 0) {
              uVar7 = 0x80;
              local_c = local_c + 1;
            }
            if ((local_14 + -1 < 1) || (local_14 + -2 < 1)) break;
            if ((*local_c & (byte)uVar7) == 0) {
              bVar5 = bVar6;
              if (local_8[1] < param_5) {
                bVar5 = *(byte *)((uint)local_10[1] + param_18);
              }
              pbVar9[1] = bVar5;
            }
            local_8 = local_8 + 2;
            pbVar9 = pbVar9 + 2;
            local_10 = local_10 + 2;
            uVar7 = uVar7 >> 1;
            if (uVar7 == 0) {
              uVar7 = 0x80;
              local_c = local_c + 1;
            }
          }
        }
      }
LAB_006fca86:
      iVar10 = (param_7 - param_8) - param_9;
      bVar6 = (byte)local_18;
      if ((int)uVar4 < iVar10) {
        do {
          iVar10 = iVar10 - uVar4;
          pbVar9 = param_6;
          if (((byte)local_18 & 0xc0) == 0x80) {
            pbVar9 = param_6 + uVar4;
          }
          bVar6 = *pbVar9;
          local_18 = (uint)bVar6;
          param_6 = pbVar9 + 1;
          uVar4 = local_18;
          if (((bVar6 & 0x80) != 0) && (uVar4 = local_18 & 0x3f, (bVar6 & 0x40) != 0)) {
            param_6 = pbVar9 + 2;
          }
        } while ((int)uVar4 < iVar10);
      }
      if ((bVar6 & 0xc0) == 0x80) {
        param_6 = param_6 + iVar10;
      }
    }
    param_1 = param_1 + param_2;
    param_16 = param_16 + param_17;
    param_3 = (ushort *)((int)param_3 + param_4);
    pbVar8 = pbVar8 + param_14;
    param_12 = param_12 + 1;
    iVar10 = param_10_after_write;
    if (2 < param_12) {
      param_12 = 0;
    }
  } while( true );
}

// 006FCB30 FUN_006fcb30
#line 4 "decomp/ST.exe/functions/006FCB30/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006FCB30(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12,
                 int param_13,int param_14,int param_15)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint local_18;
  int local_14;
  byte *local_10;
  ushort *local_c;
  byte *local_8;

  pbVar4 = (byte *)(param_13 + (param_15 >> 3));
  _DAT_00857000 = 1;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = param_10 + -1;
    if (param_10 < 0) {
      return;
    }
    while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
      uVar5 = (uint)*param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + 1;
      iVar6 = param_7;
      if (uVar5 != 0) {
        while( true ) {
          if ((uVar5 & 0x80) == 0) {
            uVar2 = uVar5 & 0x7f;
          }
          else if ((uVar5 & 0x40) == 0) {
            param_6 = param_6 + (uVar5 & 0x3f);
            uVar2 = uVar5 & 0x3f;
          }
          else {
            param_6 = param_6 + 1;
            uVar2 = uVar5 & 0x3f;
          }
          if ((int)(iVar6 - uVar2) < 1) break;
          uVar5 = (uint)*param_6;
          param_6 = param_6 + 1;
          iVar6 = iVar6 - uVar2;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_12 = param_12 + 1;
      if (4 < (int)param_12) {
        param_12 = 0;
      }
    }
    local_18 = (uint)*param_6;
    param_6 = param_6 + 1;
    if (local_18 == 0) goto LAB_006fd39e;
    uVar5 = 0x80 >> ((byte)param_15 & 7);
    iVar6 = param_8;
    while( true ) {
      while ((local_18 & 0x80) == 0) {
        uVar2 = local_18 & 0x7f;
        if (iVar6 < (int)uVar2) goto LAB_006fcc2f;
        iVar6 = iVar6 - uVar2;
        bVar1 = *param_6;
        param_6 = param_6 + 1;
        local_18 = (uint)bVar1;
      }
      uVar2 = local_18 & 0x3f;
      if (iVar6 < (int)uVar2) break;
      if ((local_18 & 0x40) == 0) {
        iVar6 = iVar6 - uVar2;
        local_18 = (uint)param_6[uVar2];
        param_6 = param_6 + uVar2 + 1;
      }
      else {
        iVar6 = iVar6 - uVar2;
        local_18 = (uint)param_6[1];
        param_6 = param_6 + 2;
      }
    }
LAB_006fcc2f:
    uVar2 = uVar2 - iVar6;
    if (((byte)local_18 & 0xc0) == 0x80) {
      param_6 = param_6 + iVar6;
    }
    local_14 = param_9;
    iVar6 = param_11;
    local_10 = pbVar4;
    local_c = param_3;
    local_8 = param_1;
    if ((int)uVar2 <= param_9) {
      do {
        local_14 = local_14 - uVar2;
        if ((local_18 & 0x80) == 0) {
          pbVar9 = param_6;
          puVar7 = local_c;
          pbVar8 = local_8;
          if (-1 < (int)(uVar2 - 1)) {
            do {
              if (((byte)iVar6 & 1) == 1) {
                local_8 = local_8 + 1;
                local_c = local_c + 1;
                uVar5 = uVar5 >> 1;
                if (uVar5 == 0) {
                  uVar5 = 0x80;
                  local_10 = local_10 + 1;
                }
              }
              iVar6 = iVar6 + 1;
              if (4 < iVar6) {
                iVar6 = 0;
              }
              uVar2 = uVar2 - 1;
              puVar7 = local_c;
              pbVar8 = local_8;
            } while (uVar2 != 0);
          }
          goto LAB_006fcfb4;
        }
        if ((local_18 & 0x40) != 0) {
          bVar1 = *param_6;
          pbVar9 = param_6 + 1;
          if (iVar6 < 1) {
switchD_006fcc99_default:
            puVar7 = local_c;
            pbVar8 = local_8;
            if (0 < (int)uVar2) {
              iVar3 = uVar2 - 1;
              iVar6 = 1;
              if (0 < iVar3) {
                while( true ) {
                  if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
                    *local_8 = bVar1;
                  }
                  iVar6 = 2;
                  puVar7 = local_c + 1;
                  pbVar8 = local_8 + 1;
                  uVar5 = uVar5 >> 1;
                  if (uVar5 == 0) {
                    uVar5 = 0x80;
                    local_10 = local_10 + 1;
                  }
                  if ((iVar3 + -1 < 1) || (iVar6 = 3, iVar3 + -2 < 1)) break;
                  if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *puVar7)) {
                    *pbVar8 = bVar1;
                  }
                  local_c = local_c + 2;
                  local_8 = local_8 + 2;
                  uVar5 = uVar5 >> 1;
                  if (uVar5 == 0) {
                    uVar5 = 0x80;
                    local_10 = local_10 + 1;
                  }
                  iVar6 = 4;
                  puVar7 = local_c;
                  pbVar8 = local_8;
                  if ((iVar3 + -3 < 1) || (iVar6 = 0, iVar3 + -4 < 1)) break;
                  iVar3 = iVar3 + -5;
                  iVar6 = 1;
                  if (iVar3 < 1) break;
                }
              }
            }
          }
          else {
            switch(iVar6) {
            case 1:
              if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
                *local_8 = bVar1;
              }
              iVar6 = 2;
              local_c = local_c + 1;
              local_8 = local_8 + 1;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_10 = local_10 + 1;
              }
              uVar2 = uVar2 - 1;
              puVar7 = local_c;
              pbVar8 = local_8;
              if ((int)uVar2 < 1) goto LAB_006fcfb4;
              break;
            case 2:
              break;
            case 3:
              goto switchD_006fcc99_caseD_3;
            case 4:
              goto switchD_006fcc99_caseD_4;
            default:
              goto switchD_006fcc99_default;
            }
            uVar2 = uVar2 - 1;
            iVar6 = 3;
            puVar7 = local_c;
            pbVar8 = local_8;
            if (0 < (int)uVar2) {
switchD_006fcc99_caseD_3:
              if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
                *local_8 = bVar1;
              }
              local_c = local_c + 1;
              local_8 = local_8 + 1;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_10 = local_10 + 1;
              }
              uVar2 = uVar2 - 1;
              iVar6 = 4;
              puVar7 = local_c;
              pbVar8 = local_8;
              if (0 < (int)uVar2) {
switchD_006fcc99_caseD_4:
                iVar6 = 0;
                uVar2 = uVar2 - 1;
                goto switchD_006fcc99_default;
              }
            }
          }
          goto LAB_006fcfb4;
        }
        if (iVar6 < 1) goto switchD_006fce29_default;
        switch(iVar6) {
        case 1:
          if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
            *local_8 = *param_6;
          }
          local_c = local_c + 1;
          local_8 = local_8 + 1;
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) {
            uVar5 = 0x80;
            local_10 = local_10 + 1;
          }
          param_6 = param_6 + 1;
          uVar2 = uVar2 - 1;
          iVar6 = 2;
          pbVar9 = param_6;
          puVar7 = local_c;
          pbVar8 = local_8;
          if ((int)uVar2 < 1) break;
          goto LAB_006fce8e;
        case 2:
LAB_006fce8e:
          param_6 = param_6 + 1;
          uVar2 = uVar2 - 1;
          iVar6 = 3;
          pbVar9 = param_6;
          puVar7 = local_c;
          pbVar8 = local_8;
          if (0 < (int)uVar2) {
LAB_006fcea8:
            if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
              *local_8 = *param_6;
            }
            local_c = local_c + 1;
            local_8 = local_8 + 1;
            uVar5 = uVar5 >> 1;
            if (uVar5 == 0) {
              uVar5 = 0x80;
              local_10 = local_10 + 1;
            }
            iVar6 = 4;
            pbVar9 = param_6 + 1;
            puVar7 = local_c;
            pbVar8 = local_8;
            if (0 < (int)(uVar2 - 1)) {
              param_6 = param_6 + 2;
              iVar6 = 0;
              uVar2 = uVar2 - 2;
              goto switchD_006fce29_default;
            }
          }
          break;
        case 3:
          goto LAB_006fcea8;
        case 4:
          param_6 = param_6 + 1;
          iVar6 = 0;
          uVar2 = uVar2 - 1;
        default:
switchD_006fce29_default:
          pbVar9 = param_6;
          puVar7 = local_c;
          pbVar8 = local_8;
          if (0 < (int)uVar2) {
            pbVar10 = param_6 + 1;
            for (iVar3 = uVar2 - 1; iVar6 = 1, pbVar9 = pbVar10, puVar7 = local_c, pbVar8 = local_8,
                0 < iVar3; iVar3 = iVar3 + -5) {
              if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
                *local_8 = *pbVar10;
              }
              puVar7 = local_c + 1;
              pbVar8 = local_8 + 1;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_10 = local_10 + 1;
              }
              iVar6 = 2;
              pbVar9 = pbVar10 + 1;
              if (iVar3 + -1 < 1) break;
              iVar6 = 3;
              pbVar9 = pbVar10 + 2;
              if (iVar3 + -2 < 1) break;
              if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *puVar7)) {
                *pbVar8 = pbVar10[2];
              }
              local_c = local_c + 2;
              local_8 = local_8 + 2;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_10 = local_10 + 1;
              }
              iVar6 = 4;
              pbVar9 = pbVar10 + 3;
              puVar7 = local_c;
              pbVar8 = local_8;
              if (iVar3 + -3 < 1) break;
              iVar6 = 0;
              pbVar9 = pbVar10 + 4;
              if (iVar3 + -4 < 1) break;
              pbVar10 = pbVar10 + 5;
            }
          }
        }
LAB_006fcfb4:
        local_8 = pbVar8;
        local_c = puVar7;
        param_6 = pbVar9;
        if (local_14 < 1) {
          uVar2 = 0;
          break;
        }
        bVar1 = *param_6;
        local_18 = (uint)bVar1;
        param_6 = param_6 + 1;
        if ((bVar1 & 0x80) == 0) {
          uVar2 = bVar1 & 0x7f;
        }
        else {
          uVar2 = bVar1 & 0x3f;
        }
      } while ((int)uVar2 <= local_14);
    }
    uVar2 = uVar2 - local_14;
    if ((local_14 < 1) || ((local_18 & 0x80) == 0)) goto LAB_006fd34b;
    if ((local_18 & 0x40) == 0) {
      if (iVar6 < 1) goto switchD_006fd1e3_default;
      switch(iVar6) {
      case 1:
        if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
          *local_8 = *param_6;
        }
        local_c = local_c + 1;
        local_8 = local_8 + 1;
        uVar5 = uVar5 >> 1;
        if (uVar5 == 0) {
          uVar5 = 0x80;
          local_10 = local_10 + 1;
        }
        param_6 = param_6 + 1;
        local_14 = local_14 + -1;
        if (local_14 < 1) break;
        goto LAB_006fd239;
      case 2:
LAB_006fd239:
        param_6 = param_6 + 1;
        local_14 = local_14 + -1;
        pbVar9 = param_6;
        if (0 < local_14) {
LAB_006fd248:
          if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
            *local_8 = *pbVar9;
          }
          local_c = local_c + 1;
          local_8 = local_8 + 1;
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) {
            uVar5 = 0x80;
            local_10 = local_10 + 1;
          }
          param_6 = pbVar9 + 1;
          if (0 < local_14 + -1) {
            param_6 = pbVar9 + 2;
            local_14 = local_14 + -2;
            goto switchD_006fd1e3_default;
          }
        }
        break;
      case 3:
        pbVar9 = param_6;
        goto LAB_006fd248;
      case 4:
        param_6 = param_6 + 1;
        local_14 = local_14 + -1;
      default:
switchD_006fd1e3_default:
        if (0 < local_14) {
          param_6 = param_6 + 1;
          local_14 = local_14 + -1;
          pbVar9 = param_6;
          if (0 < local_14) {
            while( true ) {
              if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
                *local_8 = *pbVar9;
              }
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_10 = local_10 + 1;
              }
              param_6 = pbVar9 + 1;
              if ((local_14 + -1 < 1) || (param_6 = pbVar9 + 2, local_14 + -2 < 1)) break;
              if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= local_c[1])) {
                local_8[1] = *param_6;
              }
              local_c = local_c + 2;
              local_8 = local_8 + 2;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_10 = local_10 + 1;
              }
              param_6 = pbVar9 + 3;
              if ((local_14 + -3 < 1) || (param_6 = pbVar9 + 4, local_14 + -4 < 1)) break;
              param_6 = pbVar9 + 5;
              local_14 = local_14 + -5;
              pbVar9 = param_6;
              if (local_14 < 1) break;
            }
          }
        }
      }
      goto LAB_006fd34b;
    }
    bVar1 = *param_6;
    param_6 = param_6 + 1;
    if (iVar6 < 1) goto switchD_006fd060_default;
    switch(iVar6) {
    case 1:
      if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
        *local_8 = bVar1;
      }
      local_c = local_c + 1;
      local_8 = local_8 + 1;
      uVar5 = uVar5 >> 1;
      if (uVar5 == 0) {
        uVar5 = 0x80;
        local_10 = local_10 + 1;
      }
      local_14 = local_14 + -1;
      if (local_14 < 1) break;
      goto LAB_006fd0b3;
    case 2:
LAB_006fd0b3:
      local_14 = local_14 + -1;
      if (0 < local_14) {
LAB_006fd0c4:
        if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
          *local_8 = bVar1;
        }
        local_c = local_c + 1;
        local_8 = local_8 + 1;
        uVar5 = uVar5 >> 1;
        if (uVar5 == 0) {
          uVar5 = 0x80;
          local_10 = local_10 + 1;
        }
        if (0 < local_14 + -1) {
          local_14 = local_14 + -2;
          goto switchD_006fd060_default;
        }
      }
      break;
    case 3:
      goto LAB_006fd0c4;
    case 4:
      local_14 = local_14 + -1;
    default:
switchD_006fd060_default:
      if ((0 < local_14) && (local_14 = local_14 + -1, 0 < local_14)) {
        while( true ) {
          if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
            *local_8 = bVar1;
          }
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) {
            uVar5 = 0x80;
            local_10 = local_10 + 1;
          }
          if (local_14 + -2 < 1) break;
          if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= local_c[1])) {
            local_8[1] = bVar1;
          }
          local_c = local_c + 2;
          local_8 = local_8 + 2;
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) {
            uVar5 = 0x80;
            local_10 = local_10 + 1;
          }
          if ((local_14 + -4 < 1) || (local_14 = local_14 + -5, local_14 < 1)) break;
        }
      }
    }
LAB_006fd34b:
    iVar6 = (param_7 - param_8) - param_9;
    bVar1 = (byte)local_18;
    if ((int)uVar2 < iVar6) {
      do {
        iVar6 = iVar6 - uVar2;
        pbVar9 = param_6;
        if (((byte)local_18 & 0xc0) == 0x80) {
          pbVar9 = param_6 + uVar2;
        }
        bVar1 = *pbVar9;
        local_18 = (uint)bVar1;
        param_6 = pbVar9 + 1;
        uVar2 = local_18;
        if (((bVar1 & 0x80) != 0) && (uVar2 = local_18 & 0x3f, (bVar1 & 0x40) != 0)) {
          param_6 = pbVar9 + 2;
        }
      } while ((int)uVar2 < iVar6);
    }
    STPiece<0,1>(local_18) = bVar1;
    if (((byte)local_18 & 0xc0) == 0x80) {
      param_6 = param_6 + iVar6;
    }
LAB_006fd39e:
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    pbVar4 = pbVar4 + param_14;
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      param_12 = 0;
    }
  } while( true );
}

// 006FD430 FUN_006fd430
#line 1 "decomp/ST.exe/functions/006FD430/decomp.c"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006FD430(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12,
                 int param_13,int param_14,int param_15,byte *param_16,int param_17,int param_18)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint local_18;
  int local_14;
  byte *local_10;
  ushort *local_c;
  byte *local_8;

  pbVar5 = (byte *)(param_13 + (param_15 >> 3));
  _DAT_00857000 = 1;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = param_10 + -1;
    if (param_10 < 0) {
      return;
    }
    while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
      uVar6 = (uint)*param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + 1;
      iVar8 = param_7;
      if (uVar6 != 0) {
        while( true ) {
          if ((uVar6 & 0x80) == 0) {
            uVar1 = uVar6 & 0x7f;
          }
          else if ((uVar6 & 0x40) == 0) {
            param_6 = param_6 + (uVar6 & 0x3f);
            uVar1 = uVar6 & 0x3f;
          }
          else {
            param_6 = param_6 + 1;
            uVar1 = uVar6 & 0x3f;
          }
          if ((int)(iVar8 - uVar1) < 1) break;
          uVar6 = (uint)*param_6;
          param_6 = param_6 + 1;
          iVar8 = iVar8 - uVar1;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_12 = param_12 + 1;
      if (4 < (int)param_12) {
        param_12 = 0;
      }
    }
    local_18 = (uint)*param_6;
    param_6 = param_6 + 1;
    if (local_18 == 0) goto LAB_006fdbfd;
    uVar6 = 0x80 >> ((byte)param_15 & 7);
    iVar8 = param_8;
    while( true ) {
      while ((local_18 & 0x80) == 0) {
        uVar1 = local_18 & 0x7f;
        if (iVar8 < (int)uVar1) goto LAB_006fd54d;
        iVar8 = iVar8 - uVar1;
        bVar4 = *param_6;
        param_6 = param_6 + 1;
        local_18 = (uint)bVar4;
      }
      uVar1 = local_18 & 0x3f;
      if (iVar8 < (int)uVar1) break;
      if ((local_18 & 0x40) == 0) {
        iVar8 = iVar8 - uVar1;
        local_18 = (uint)param_6[uVar1];
        param_6 = param_6 + uVar1 + 1;
      }
      else {
        iVar8 = iVar8 - uVar1;
        local_18 = (uint)param_6[1];
        param_6 = param_6 + 2;
      }
    }
LAB_006fd54d:
    uVar1 = uVar1 - iVar8;
    if (((byte)local_18 & 0xc0) == 0x80) {
      param_6 = param_6 + iVar8;
    }
    local_14 = param_9;
    iVar8 = param_11;
    pbVar12 = param_1;
    pbVar13 = param_1;
    local_10 = pbVar5;
    local_c = param_3;
    local_8 = param_16;
    if ((int)uVar1 <= param_9) {
      do {
        local_14 = local_14 - uVar1;
        if ((local_18 & 0x80) == 0) {
          pbVar12 = pbVar13;
          pbVar9 = param_6;
          puVar7 = local_c;
          pbVar10 = local_8;
          if (-1 < (int)(uVar1 - 1)) {
            do {
              if (((byte)iVar8 & 1) == 1) {
                pbVar13 = pbVar13 + 1;
                local_8 = local_8 + 1;
                local_c = local_c + 1;
                uVar6 = uVar6 >> 1;
                if (uVar6 == 0) {
                  uVar6 = 0x80;
                  local_10 = local_10 + 1;
                }
              }
              iVar8 = iVar8 + 1;
              if (4 < iVar8) {
                iVar8 = 0;
              }
              uVar1 = uVar1 - 1;
              pbVar12 = pbVar13;
              puVar7 = local_c;
              pbVar10 = local_8;
            } while (uVar1 != 0);
          }
          goto LAB_006fd956;
        }
        if ((local_18 & 0x40) == 0) {
          if (iVar8 < 1) goto switchD_006fd774_default;
          switch(iVar8) {
          case 1:
            if ((*local_10 & (byte)uVar6) == 0) {
              if (*local_c < param_5) {
                *pbVar13 = *(byte *)((uint)*local_8 + param_18);
              }
              else {
                *pbVar13 = *param_6;
              }
            }
            iVar8 = 2;
            local_c = local_c + 1;
            pbVar13 = pbVar13 + 1;
            local_8 = local_8 + 1;
            uVar6 = uVar6 >> 1;
            if (uVar6 == 0) {
              uVar6 = 0x80;
              local_10 = local_10 + 1;
            }
            param_6 = param_6 + 1;
            uVar1 = uVar1 - 1;
            pbVar12 = pbVar13;
            pbVar9 = param_6;
            puVar7 = local_c;
            pbVar10 = local_8;
            if ((int)uVar1 < 1) break;
            goto LAB_006fd7e3;
          case 2:
LAB_006fd7e3:
            param_6 = param_6 + 1;
            uVar1 = uVar1 - 1;
            iVar8 = 3;
            pbVar12 = pbVar13;
            pbVar9 = param_6;
            puVar7 = local_c;
            pbVar10 = local_8;
            if (0 < (int)uVar1) {
LAB_006fd7fa:
              if ((*local_10 & (byte)uVar6) == 0) {
                if (*local_c < param_5) {
                  bVar4 = *(byte *)((uint)*local_8 + param_18);
                }
                else {
                  bVar4 = *param_6;
                }
                *pbVar13 = bVar4;
              }
              local_c = local_c + 1;
              pbVar13 = pbVar13 + 1;
              local_8 = local_8 + 1;
              uVar6 = uVar6 >> 1;
              if (uVar6 == 0) {
                uVar6 = 0x80;
                local_10 = local_10 + 1;
              }
              iVar8 = 4;
              pbVar12 = pbVar13;
              pbVar9 = param_6 + 1;
              puVar7 = local_c;
              pbVar10 = local_8;
              if (0 < (int)(uVar1 - 1)) {
                param_6 = param_6 + 2;
                iVar8 = 0;
                uVar1 = uVar1 - 2;
                goto switchD_006fd774_default;
              }
            }
            break;
          case 3:
            goto LAB_006fd7fa;
          case 4:
            iVar8 = 0;
            param_6 = param_6 + 1;
            uVar1 = uVar1 - 1;
          default:
switchD_006fd774_default:
            pbVar12 = pbVar13;
            pbVar9 = param_6;
            puVar7 = local_c;
            pbVar10 = local_8;
            if (0 < (int)uVar1) {
              pbVar11 = param_6 + 1;
              for (iVar2 = uVar1 - 1; iVar8 = 1, pbVar12 = pbVar13, pbVar9 = pbVar11,
                  puVar7 = local_c, pbVar10 = local_8, 0 < iVar2; iVar2 = iVar2 + -5) {
                if ((*local_10 & (byte)uVar6) == 0) {
                  if (*local_c < param_5) {
                    bVar4 = *(byte *)((uint)*local_8 + param_18);
                  }
                  else {
                    bVar4 = *pbVar11;
                  }
                  *pbVar13 = bVar4;
                }
                iVar8 = 2;
                puVar7 = local_c + 1;
                pbVar12 = pbVar13 + 1;
                pbVar10 = local_8 + 1;
                uVar6 = uVar6 >> 1;
                if (uVar6 == 0) {
                  uVar6 = 0x80;
                  local_10 = local_10 + 1;
                }
                pbVar9 = pbVar11 + 1;
                if (iVar2 + -1 < 1) break;
                iVar8 = 3;
                pbVar9 = pbVar11 + 2;
                if (iVar2 + -2 < 1) break;
                if ((*local_10 & (byte)uVar6) == 0) {
                  if (*puVar7 < param_5) {
                    bVar4 = *(byte *)((uint)*pbVar10 + param_18);
                  }
                  else {
                    bVar4 = pbVar11[2];
                  }
                  *pbVar12 = bVar4;
                }
                local_c = local_c + 2;
                pbVar13 = pbVar13 + 2;
                local_8 = local_8 + 2;
                uVar6 = uVar6 >> 1;
                if (uVar6 == 0) {
                  uVar6 = 0x80;
                  local_10 = local_10 + 1;
                }
                iVar8 = 4;
                pbVar12 = pbVar13;
                pbVar9 = pbVar11 + 3;
                puVar7 = local_c;
                pbVar10 = local_8;
                if (iVar2 + -3 < 1) break;
                iVar8 = 0;
                pbVar9 = pbVar11 + 4;
                if (iVar2 + -4 < 1) break;
                pbVar11 = pbVar11 + 5;
              }
            }
          }
          goto LAB_006fd956;
        }
        bVar4 = *param_6;
        pbVar9 = param_6 + 1;
        if (iVar8 < 1) goto switchD_006fd5b3_default;
        switch(iVar8) {
        case 1:
          if ((*local_10 & (byte)uVar6) == 0) {
            if (*local_c < param_5) {
              *pbVar13 = *(byte *)((uint)*local_8 + param_18);
            }
            else {
              *pbVar13 = bVar4;
            }
          }
          iVar8 = 2;
          local_c = local_c + 1;
          pbVar13 = pbVar13 + 1;
          local_8 = local_8 + 1;
          uVar6 = uVar6 >> 1;
          if (uVar6 == 0) {
            uVar6 = 0x80;
            local_10 = local_10 + 1;
          }
          uVar1 = uVar1 - 1;
          pbVar12 = pbVar13;
          puVar7 = local_c;
          pbVar10 = local_8;
          if ((int)uVar1 < 1) break;
          goto LAB_006fd616;
        case 2:
LAB_006fd616:
          uVar1 = uVar1 - 1;
          iVar8 = 3;
          pbVar12 = pbVar13;
          puVar7 = local_c;
          pbVar10 = local_8;
          if (0 < (int)uVar1) {
LAB_006fd629:
            if ((*local_10 & (byte)uVar6) == 0) {
              bVar3 = bVar4;
              if (*local_c < param_5) {
                bVar3 = *(byte *)((uint)*local_8 + param_18);
              }
              *pbVar13 = bVar3;
            }
            local_c = local_c + 1;
            pbVar13 = pbVar13 + 1;
            local_8 = local_8 + 1;
            uVar6 = uVar6 >> 1;
            if (uVar6 == 0) {
              uVar6 = 0x80;
              local_10 = local_10 + 1;
            }
            iVar8 = 4;
            pbVar12 = pbVar13;
            puVar7 = local_c;
            pbVar10 = local_8;
            if (0 < (int)(uVar1 - 1)) {
              iVar8 = 0;
              uVar1 = uVar1 - 2;
              goto switchD_006fd5b3_default;
            }
          }
          break;
        case 3:
          goto LAB_006fd629;
        case 4:
          iVar8 = 0;
          uVar1 = uVar1 - 1;
        default:
switchD_006fd5b3_default:
          pbVar12 = pbVar13;
          puVar7 = local_c;
          pbVar10 = local_8;
          if (0 < (int)uVar1) {
            iVar2 = uVar1 - 1;
            iVar8 = 1;
            if (0 < iVar2) {
              while( true ) {
                if ((*local_10 & (byte)uVar6) == 0) {
                  bVar3 = bVar4;
                  if (*local_c < param_5) {
                    bVar3 = *(byte *)((uint)*local_8 + param_18);
                  }
                  *pbVar13 = bVar3;
                }
                iVar8 = 2;
                puVar7 = local_c + 1;
                pbVar12 = pbVar13 + 1;
                pbVar10 = local_8 + 1;
                uVar6 = uVar6 >> 1;
                if (uVar6 == 0) {
                  uVar6 = 0x80;
                  local_10 = local_10 + 1;
                }
                if ((iVar2 + -1 < 1) || (iVar8 = 3, iVar2 + -2 < 1)) break;
                if ((*local_10 & (byte)uVar6) == 0) {
                  bVar3 = bVar4;
                  if (*puVar7 < param_5) {
                    bVar3 = *(byte *)((uint)*pbVar10 + param_18);
                  }
                  *pbVar12 = bVar3;
                }
                local_c = local_c + 2;
                pbVar13 = pbVar13 + 2;
                local_8 = local_8 + 2;
                uVar6 = uVar6 >> 1;
                if (uVar6 == 0) {
                  uVar6 = 0x80;
                  local_10 = local_10 + 1;
                }
                iVar8 = 4;
                pbVar12 = pbVar13;
                puVar7 = local_c;
                pbVar10 = local_8;
                if ((iVar2 + -3 < 1) || (iVar8 = 0, iVar2 + -4 < 1)) break;
                iVar2 = iVar2 + -5;
                iVar8 = 1;
                if (iVar2 < 1) break;
              }
            }
          }
        }
LAB_006fd956:
        local_8 = pbVar10;
        local_c = puVar7;
        param_6 = pbVar9;
        if (local_14 < 1) {
          uVar1 = 0;
          break;
        }
        bVar4 = *param_6;
        local_18 = (uint)bVar4;
        param_6 = param_6 + 1;
        if ((bVar4 & 0x80) == 0) {
          uVar1 = bVar4 & 0x7f;
        }
        else {
          uVar1 = bVar4 & 0x3f;
        }
        pbVar13 = pbVar12;
      } while ((int)uVar1 <= local_14);
    }
    uVar1 = uVar1 - local_14;
    pbVar13 = param_6;
    if ((local_14 < 1) || ((local_18 & 0x80) == 0)) goto LAB_006fdba5;
    if ((local_18 & 0x40) == 0) {
      if (iVar8 < 1) goto switchD_006fdc5f_default;
      switch(iVar8) {
      case 1:
        if ((*local_10 & (byte)uVar6) == 0) {
          if (*local_c < param_5) {
            bVar4 = *(byte *)((uint)*local_8 + param_18);
          }
          else {
            bVar4 = *param_6;
          }
          *pbVar12 = bVar4;
        }
        local_c = local_c + 1;
        pbVar12 = pbVar12 + 1;
        local_8 = local_8 + 1;
        uVar6 = uVar6 >> 1;
        if (uVar6 == 0) {
          uVar6 = 0x80;
          local_10 = local_10 + 1;
        }
        param_6 = param_6 + 1;
        local_14 = local_14 + -1;
        pbVar13 = param_6;
        if (local_14 < 1) break;
        goto LAB_006fdccb;
      case 2:
LAB_006fdccb:
        param_6 = param_6 + 1;
        local_14 = local_14 + -1;
        pbVar13 = param_6;
        if (0 < local_14) {
LAB_006fdce0:
          if ((*local_10 & (byte)uVar6) == 0) {
            if (*local_c < param_5) {
              bVar4 = *(byte *)((uint)*local_8 + param_18);
            }
            else {
              bVar4 = *param_6;
            }
            *pbVar12 = bVar4;
          }
          local_c = local_c + 1;
          pbVar12 = pbVar12 + 1;
          local_8 = local_8 + 1;
          uVar6 = uVar6 >> 1;
          if (uVar6 == 0) {
            uVar6 = 0x80;
            local_10 = local_10 + 1;
          }
          pbVar13 = param_6 + 1;
          if (0 < local_14 + -1) {
            param_6 = param_6 + 2;
            local_14 = local_14 + -2;
            goto switchD_006fdc5f_default;
          }
        }
        break;
      case 3:
        goto LAB_006fdce0;
      case 4:
        param_6 = param_6 + 1;
        local_14 = local_14 + -1;
      default:
switchD_006fdc5f_default:
        pbVar13 = param_6;
        if (0 < local_14) {
          param_6 = param_6 + 1;
          local_14 = local_14 + -1;
          pbVar13 = param_6;
          if (0 < local_14) {
            while( true ) {
              if ((*local_10 & (byte)uVar6) == 0) {
                if (*local_c < param_5) {
                  bVar4 = *(byte *)((uint)*local_8 + param_18);
                }
                else {
                  bVar4 = *param_6;
                }
                *pbVar12 = bVar4;
              }
              uVar6 = uVar6 >> 1;
              if (uVar6 == 0) {
                uVar6 = 0x80;
                local_10 = local_10 + 1;
              }
              pbVar13 = param_6 + 1;
              if ((local_14 + -1 < 1) || (pbVar13 = param_6 + 2, local_14 + -2 < 1)) break;
              if ((*local_10 & (byte)uVar6) == 0) {
                if (local_c[1] < param_5) {
                  bVar4 = *(byte *)((uint)local_8[1] + param_18);
                }
                else {
                  bVar4 = param_6[2];
                }
                pbVar12[1] = bVar4;
              }
              local_c = local_c + 2;
              pbVar12 = pbVar12 + 2;
              local_8 = local_8 + 2;
              uVar6 = uVar6 >> 1;
              if (uVar6 == 0) {
                uVar6 = 0x80;
                local_10 = local_10 + 1;
              }
              pbVar13 = param_6 + 3;
              if ((local_14 + -3 < 1) || (pbVar13 = param_6 + 4, local_14 + -4 < 1)) break;
              param_6 = param_6 + 5;
              local_14 = local_14 + -5;
              pbVar13 = param_6;
              if (local_14 < 1) break;
            }
          }
        }
      }
      goto LAB_006fdba5;
    }
    bVar4 = *param_6;
    pbVar13 = param_6 + 1;
    if (iVar8 < 1) goto switchD_006fda0b_default;
    switch(iVar8) {
    case 1:
      if ((*local_10 & (byte)uVar6) == 0) {
        if (*local_c < param_5) {
          *pbVar12 = *(byte *)((uint)*local_8 + param_18);
        }
        else {
          *pbVar12 = bVar4;
        }
      }
      local_c = local_c + 1;
      pbVar12 = pbVar12 + 1;
      local_8 = local_8 + 1;
      uVar6 = uVar6 >> 1;
      if (uVar6 == 0) {
        uVar6 = 0x80;
        local_10 = local_10 + 1;
      }
      local_14 = local_14 + -1;
      if (local_14 < 1) break;
      goto LAB_006fda70;
    case 2:
LAB_006fda70:
      local_14 = local_14 + -1;
      if (0 < local_14) {
LAB_006fda84:
        if ((*local_10 & (byte)uVar6) == 0) {
          bVar3 = bVar4;
          if (*local_c < param_5) {
            bVar3 = *(byte *)((uint)*local_8 + param_18);
          }
          *pbVar12 = bVar3;
        }
        local_c = local_c + 1;
        pbVar12 = pbVar12 + 1;
        local_8 = local_8 + 1;
        uVar6 = uVar6 >> 1;
        if (uVar6 == 0) {
          uVar6 = 0x80;
          local_10 = local_10 + 1;
        }
        if (0 < local_14 + -1) {
          local_14 = local_14 + -2;
          goto switchD_006fda0b_default;
        }
      }
      break;
    case 3:
      goto LAB_006fda84;
    case 4:
      local_14 = local_14 + -1;
    default:
switchD_006fda0b_default:
      if ((0 < local_14) && (local_14 = local_14 + -1, 0 < local_14)) {
        while( true ) {
          if ((*local_10 & (byte)uVar6) == 0) {
            bVar3 = bVar4;
            if (*local_c < param_5) {
              bVar3 = *(byte *)((uint)*local_8 + param_18);
            }
            *pbVar12 = bVar3;
          }
          uVar6 = uVar6 >> 1;
          if (uVar6 == 0) {
            uVar6 = 0x80;
            local_10 = local_10 + 1;
          }
          if (local_14 + -2 < 1) break;
          if ((*local_10 & (byte)uVar6) == 0) {
            bVar3 = bVar4;
            if (local_c[1] < param_5) {
              bVar3 = *(byte *)((uint)local_8[1] + param_18);
            }
            pbVar12[1] = bVar3;
          }
          local_c = local_c + 2;
          pbVar12 = pbVar12 + 2;
          local_8 = local_8 + 2;
          uVar6 = uVar6 >> 1;
          if (uVar6 == 0) {
            uVar6 = 0x80;
            local_10 = local_10 + 1;
          }
          if ((local_14 + -4 < 1) || (local_14 = local_14 + -5, local_14 < 1)) break;
        }
      }
    }
LAB_006fdba5:
    param_6 = pbVar13;
    iVar8 = (param_7 - param_8) - param_9;
    bVar4 = (byte)local_18;
    if ((int)uVar1 < iVar8) {
      do {
        iVar8 = iVar8 - uVar1;
        pbVar13 = param_6;
        if (((byte)local_18 & 0xc0) == 0x80) {
          pbVar13 = param_6 + uVar1;
        }
        bVar4 = *pbVar13;
        local_18 = (uint)bVar4;
        param_6 = pbVar13 + 1;
        uVar1 = local_18;
        if (((bVar4 & 0x80) != 0) && (uVar1 = local_18 & 0x3f, (bVar4 & 0x40) != 0)) {
          param_6 = pbVar13 + 2;
        }
      } while ((int)uVar1 < iVar8);
    }
    if ((bVar4 & 0xc0) == 0x80) {
      param_6 = param_6 + iVar8;
    }
LAB_006fdbfd:
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    param_16 = param_16 + param_17;
    pbVar5 = pbVar5 + param_14;
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      param_12 = 0;
    }
  } while( true );
}

// 006FDEA0 FUN_006fdea0
#line 4 "decomp/ST.exe/functions/006FDEA0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006FDEA0(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13,int param_14,int param_15,int param_16)

{
  undefined1 uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  ushort *puVar9;
  uint local_18;
  int local_14;
  ushort *local_10;
  undefined1 *local_c;
  byte *local_8;

  pbVar3 = (byte *)(param_13 + (param_15 >> 3));
  _DAT_00857000 = 1;
  iVar6 = param_10;
  do {
    auto param_10_after_write = iVar6 + -1; /* compiler stack-slot lifetime split */
    if (param_10_after_write < 0) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_12 == 1) {
      param_10_after_write = iVar6 + -2;
      if (param_10_after_write < 0) {
        return;
      }
      uVar4 = (uint)*param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + 1;
      iVar6 = param_7;
      if (uVar4 != 0) {
        while( true ) {
          if ((uVar4 & 0x80) == 0) {
            uVar2 = uVar4 & 0x7f;
          }
          else if ((uVar4 & 0x40) == 0) {
            param_6 = param_6 + (uVar4 & 0x3f);
            uVar2 = uVar4 & 0x3f;
          }
          else {
            param_6 = param_6 + 1;
            uVar2 = uVar4 & 0x3f;
          }
          if ((int)(iVar6 - uVar2) < 1) break;
          uVar4 = (uint)*param_6;
          param_6 = param_6 + 1;
          iVar6 = iVar6 - uVar2;
        }
      }
      param_12 = 2;
    }
    local_18 = (uint)*param_6;
    param_6 = param_6 + 1;
    if (local_18 != 0) {
      uVar4 = 0x80 >> ((byte)param_15 & 7);
      iVar6 = param_8;
      while( true ) {
        while ((local_18 & 0x80) == 0) {
          uVar2 = local_18 & 0x7f;
          if (iVar6 < (int)uVar2) goto LAB_006fdf96;
          iVar6 = iVar6 - uVar2;
          bVar5 = *param_6;
          param_6 = param_6 + 1;
          local_18 = (uint)bVar5;
        }
        uVar2 = local_18 & 0x3f;
        if (iVar6 < (int)uVar2) break;
        if ((local_18 & 0x40) == 0) {
          iVar6 = iVar6 - uVar2;
          local_18 = (uint)param_6[uVar2];
          param_6 = param_6 + uVar2 + 1;
        }
        else {
          iVar6 = iVar6 - uVar2;
          local_18 = (uint)param_6[1];
          param_6 = param_6 + 2;
        }
      }
LAB_006fdf96:
      uVar2 = uVar2 - iVar6;
      if (((byte)local_18 & 0xc0) == 0x80) {
        param_6 = param_6 + iVar6;
      }
      local_14 = param_9;
      iVar6 = param_11;
      local_10 = param_3;
      local_c = param_1;
      local_8 = pbVar3;
      if ((int)uVar2 <= param_9) {
        do {
          local_14 = local_14 - uVar2;
          if ((local_18 & 0x80) == 0) {
            if (-1 < (int)(uVar2 - 1)) {
              do {
                if (iVar6 != 1) {
                  local_10 = local_10 + 1;
                  local_c = local_c + 1;
                  uVar4 = uVar4 >> 1;
                  if (uVar4 == 0) {
                    uVar4 = 0x80;
                    local_8 = local_8 + 1;
                  }
                }
                iVar6 = iVar6 + 1;
                if (2 < iVar6) {
                  iVar6 = 0;
                }
                uVar2 = uVar2 - 1;
              } while (uVar2 != 0);
            }
          }
          else if ((local_18 & 0x40) == 0) {
            pbVar8 = param_6;
            puVar9 = local_10;
            puVar7 = local_c;
            if (0 < iVar6) {
              if (iVar6 == 1) {
                iVar6 = 2;
                param_6 = param_6 + 1;
                uVar2 = uVar2 - 1;
              }
              if ((int)uVar2 < 1) goto LAB_006fe248;
              if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= *local_10)) {
                *local_c = *(undefined1 *)((uint)*param_6 + param_16);
              }
              puVar9 = local_10 + 1;
              puVar7 = local_c + 1;
              uVar4 = uVar4 >> 1;
              if (uVar4 == 0) {
                uVar4 = 0x80;
                local_8 = local_8 + 1;
              }
              iVar6 = 0;
              pbVar8 = param_6 + 1;
              uVar2 = uVar2 - 1;
            }
            for (; param_6 = pbVar8, local_10 = puVar9, local_c = puVar7, 0 < (int)uVar2;
                uVar2 = uVar2 - 3) {
              if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= *puVar9)) {
                *puVar7 = *(undefined1 *)((uint)*pbVar8 + param_16);
              }
              local_10 = puVar9 + 1;
              local_c = puVar7 + 1;
              uVar4 = uVar4 >> 1;
              if (uVar4 == 0) {
                uVar4 = 0x80;
                local_8 = local_8 + 1;
              }
              param_6 = pbVar8 + 1;
              iVar6 = 1;
              if ((int)(uVar2 - 1) < 1) break;
              param_6 = pbVar8 + 2;
              iVar6 = 2;
              if ((int)(uVar2 - 2) < 1) break;
              if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= *local_10)) {
                *local_c = *(undefined1 *)((uint)*param_6 + param_16);
              }
              uVar4 = uVar4 >> 1;
              if (uVar4 == 0) {
                uVar4 = 0x80;
                local_8 = local_8 + 1;
              }
              iVar6 = 0;
              pbVar8 = pbVar8 + 3;
              puVar9 = puVar9 + 2;
              puVar7 = puVar7 + 2;
            }
          }
          else {
            uVar1 = *(undefined1 *)((uint)*param_6 + param_16);
            param_6 = param_6 + 1;
            puVar9 = local_10;
            puVar7 = local_c;
            if (0 < iVar6) {
              if (iVar6 == 1) {
                iVar6 = 2;
                uVar2 = uVar2 - 1;
              }
              if ((int)uVar2 < 1) goto LAB_006fe248;
              if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= *local_10)) {
                *local_c = uVar1;
              }
              uVar4 = uVar4 >> 1;
              if (uVar4 == 0) {
                uVar4 = 0x80;
                local_8 = local_8 + 1;
              }
              iVar6 = 0;
              uVar2 = uVar2 - 1;
              puVar9 = local_10 + 1;
              puVar7 = local_c + 1;
            }
            for (; local_10 = puVar9, local_c = puVar7, 0 < (int)uVar2; uVar2 = uVar2 - 3) {
              if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= *puVar9)) {
                *puVar7 = uVar1;
              }
              local_10 = puVar9 + 1;
              local_c = puVar7 + 1;
              uVar4 = uVar4 >> 1;
              if (uVar4 == 0) {
                uVar4 = 0x80;
                local_8 = local_8 + 1;
              }
              iVar6 = 1;
              if (((int)(uVar2 - 1) < 1) || (iVar6 = 2, (int)(uVar2 - 2) < 1)) break;
              if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= *local_10)) {
                *local_c = uVar1;
              }
              uVar4 = uVar4 >> 1;
              if (uVar4 == 0) {
                uVar4 = 0x80;
                local_8 = local_8 + 1;
              }
              iVar6 = 0;
              puVar9 = puVar9 + 2;
              puVar7 = puVar7 + 2;
            }
          }
LAB_006fe248:
          if (local_14 < 1) {
            uVar2 = 0;
            break;
          }
          bVar5 = *param_6;
          local_18 = (uint)bVar5;
          param_6 = param_6 + 1;
          if ((bVar5 & 0x80) == 0) {
            uVar2 = local_18 & 0x7f;
          }
          else {
            uVar2 = local_18 & 0x3f;
          }
        } while ((int)uVar2 <= local_14);
      }
      uVar2 = uVar2 - local_14;
      if ((0 < local_14) && ((local_18 & 0x80) != 0)) {
        if ((local_18 & 0x40) == 0) {
          pbVar8 = param_6;
          if (0 < iVar6) {
            if (iVar6 == 1) {
              param_6 = param_6 + 1;
              local_14 = local_14 + -1;
            }
            if (local_14 < 1) goto LAB_006fe395;
            if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= *local_10)) {
              *local_c = *(undefined1 *)((uint)*param_6 + param_16);
            }
            local_10 = local_10 + 1;
            local_c = local_c + 1;
            uVar4 = uVar4 >> 1;
            if (uVar4 == 0) {
              uVar4 = 0x80;
              local_8 = local_8 + 1;
            }
            pbVar8 = param_6 + 1;
            local_14 = local_14 + -1;
          }
          for (; param_6 = pbVar8, 0 < local_14; local_14 = local_14 + -3) {
            if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= *local_10)) {
              *local_c = *(undefined1 *)((uint)*pbVar8 + param_16);
            }
            uVar4 = uVar4 >> 1;
            if (uVar4 == 0) {
              uVar4 = 0x80;
              local_8 = local_8 + 1;
            }
            param_6 = pbVar8 + 1;
            if ((local_14 + -1 < 1) || (param_6 = pbVar8 + 2, local_14 + -2 < 1)) break;
            if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= local_10[1])) {
              local_c[1] = *(undefined1 *)((uint)*param_6 + param_16);
            }
            local_10 = local_10 + 2;
            local_c = local_c + 2;
            uVar4 = uVar4 >> 1;
            if (uVar4 == 0) {
              uVar4 = 0x80;
              local_8 = local_8 + 1;
            }
            pbVar8 = pbVar8 + 3;
          }
        }
        else {
          uVar1 = *(undefined1 *)((uint)*param_6 + param_16);
          param_6 = param_6 + 1;
          if (0 < iVar6) {
            if (iVar6 == 1) {
              local_14 = local_14 + -1;
            }
            if (local_14 < 1) goto LAB_006fe395;
            if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= *local_10)) {
              *local_c = uVar1;
            }
            local_10 = local_10 + 1;
            local_c = local_c + 1;
            uVar4 = uVar4 >> 1;
            if (uVar4 == 0) {
              uVar4 = 0x80;
              local_8 = local_8 + 1;
            }
            local_14 = local_14 + -1;
          }
          for (; 0 < local_14; local_14 = local_14 + -3) {
            if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= *local_10)) {
              *local_c = uVar1;
            }
            uVar4 = uVar4 >> 1;
            if (uVar4 == 0) {
              uVar4 = 0x80;
              local_8 = local_8 + 1;
            }
            if ((local_14 + -1 < 1) || (local_14 + -2 < 1)) break;
            if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= local_10[1])) {
              local_c[1] = uVar1;
            }
            local_10 = local_10 + 2;
            local_c = local_c + 2;
            uVar4 = uVar4 >> 1;
            if (uVar4 == 0) {
              uVar4 = 0x80;
              local_8 = local_8 + 1;
            }
          }
        }
      }
LAB_006fe395:
      bVar5 = (byte)local_18;
      iVar6 = (param_7 - param_8) - param_9;
      if ((int)uVar2 < iVar6) {
        do {
          iVar6 = iVar6 - uVar2;
          pbVar8 = param_6;
          if (((byte)local_18 & 0xc0) == 0x80) {
            pbVar8 = param_6 + uVar2;
          }
          bVar5 = *pbVar8;
          local_18 = (uint)bVar5;
          param_6 = pbVar8 + 1;
          uVar2 = local_18;
          if (((bVar5 & 0x80) != 0) && (uVar2 = local_18 & 0x3f, (bVar5 & 0x40) != 0)) {
            param_6 = pbVar8 + 2;
          }
        } while ((int)uVar2 < iVar6);
      }
      if ((bVar5 & 0xc0) == 0x80) {
        param_6 = param_6 + iVar6;
      }
    }
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    pbVar3 = pbVar3 + param_14;
    param_12 = param_12 + 1;
    iVar6 = param_10_after_write;
    if (2 < param_12) {
      param_12 = 0;
    }
  } while( true );
}

// 006FE570 FUN_006fe570
#line 4 "decomp/ST.exe/functions/006FE570/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006FE570(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13,int param_14,int param_15,int param_16,byte *param_17,
                 int param_18,int param_19)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  ushort *puVar4;
  undefined1 uVar5;
  uint uVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11_mg3;
  undefined1 *puVar11;
  uint local_1c;
  undefined1 *local_18;
  int local_14;
  byte *local_10;
  byte *local_c;
  ushort *local_8;
  byte *pbVar11_mg2;
  byte *pbVar3_mg0;

  pbVar7 = (byte *)(param_13 + (param_15 >> 3));
  _DAT_00857000 = 1;
  iVar10 = param_10;
  do {
    auto param_10_after_write = iVar10 + -1; /* compiler stack-slot lifetime split */
    if (param_10_after_write < 0) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_12 == 1) {
      param_10_after_write = iVar10 + -2;
      if (param_10_after_write < 0) {
        return;
      }
      uVar9 = (uint)*param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + 1;
      iVar10 = param_7;
      if (uVar9 != 0) {
        while( true ) {
          if ((uVar9 & 0x80) == 0) {
            uVar6 = uVar9 & 0x7f;
          }
          else if ((uVar9 & 0x40) == 0) {
            param_6 = param_6 + (uVar9 & 0x3f);
            uVar6 = uVar9 & 0x3f;
          }
          else {
            param_6 = param_6 + 1;
            uVar6 = uVar9 & 0x3f;
          }
          if ((int)(iVar10 - uVar6) < 1) break;
          uVar9 = (uint)*param_6;
          param_6 = param_6 + 1;
          iVar10 = iVar10 - uVar6;
        }
      }
      param_12 = 2;
    }
    local_1c = (uint)*param_6;
    param_6 = param_6 + 1;
    if (local_1c != 0) {
      uVar9 = 0x80 >> ((byte)param_15 & 7);
      iVar10 = param_8;
      while( true ) {
        while ((local_1c & 0x80) == 0) {
          uVar6 = local_1c & 0x7f;
          if (iVar10 < (int)uVar6) goto LAB_006fe684;
          iVar10 = iVar10 - uVar6;
          bVar8 = *param_6;
          param_6 = param_6 + 1;
          local_1c = (uint)bVar8;
        }
        uVar6 = local_1c & 0x3f;
        if (iVar10 < (int)uVar6) break;
        if ((local_1c & 0x40) == 0) {
          iVar10 = iVar10 - uVar6;
          local_1c = (uint)param_6[uVar6];
          param_6 = param_6 + uVar6 + 1;
        }
        else {
          iVar10 = iVar10 - uVar6;
          local_1c = (uint)param_6[1];
          param_6 = param_6 + 2;
        }
      }
LAB_006fe684:
      uVar6 = uVar6 - iVar10;
      if (((byte)local_1c & 0xc0) == 0x80) {
        param_6 = param_6 + iVar10;
      }
      local_14 = param_9;
      iVar10 = param_11;
      puVar11 = param_1;
      local_18 = param_1;
      local_10 = param_17;
      local_c = pbVar7;
      local_8 = param_3;
      if ((int)uVar6 <= param_9) {
        do {
          local_14 = local_14 - uVar6;
          if ((local_1c & 0x80) == 0) {
            if (-1 < (int)(uVar6 - 1)) {
              do {
                if (iVar10 != 1) {
                  puVar11 = puVar11 + 1;
                  local_10 = local_10 + 1;
                  local_8 = local_8 + 1;
                  uVar9 = uVar9 >> 1;
                  if (uVar9 == 0) {
                    uVar9 = 0x80;
                    local_c = local_c + 1;
                  }
                }
                iVar10 = iVar10 + 1;
                if (2 < iVar10) {
                  iVar10 = 0;
                }
                uVar6 = uVar6 - 1;
                local_18 = puVar11;
              } while (uVar6 != 0);
            }
          }
          else if ((local_1c & 0x40) == 0) {
            puVar2 = puVar11;
            pbVar3_mg0 = param_6;
            pbVar3 = local_10;
            puVar4 = local_8;
            if (0 < iVar10) {
              if (iVar10 == 1) {
                param_6 = param_6 + 1;
                iVar10 = 2;
                uVar6 = uVar6 - 1;
              }
              if ((int)uVar6 < 1) goto LAB_006fe95a;
              if ((*local_c & (byte)uVar9) == 0) {
                if (*local_8 < param_5) {
                  bVar8 = *local_10;
                  iVar10 = param_19;
                }
                else {
                  bVar8 = *param_6;
                  iVar10 = param_16;
                }
                *puVar11 = *(undefined1 *)((uint)bVar8 + iVar10);
              }
              local_18 = puVar11 + 1;
              uVar9 = uVar9 >> 1;
              if (uVar9 == 0) {
                uVar9 = 0x80;
                local_c = local_c + 1;
              }
              iVar10 = 0;
              uVar6 = uVar6 - 1;
              puVar2 = local_18;
              pbVar3_mg0 = param_6 + 1;
              pbVar3 = local_10 + 1;
              puVar4 = local_8 + 1;
            }
            for (; puVar11 = puVar2, param_6 = pbVar3_mg0, local_10 = pbVar3, local_8 = puVar4,
                0 < (int)uVar6; uVar6 = uVar6 - 3) {
              if ((*local_c & (byte)uVar9) == 0) {
                if (*puVar4 < param_5) {
                  bVar8 = *pbVar3;
                  iVar10 = param_19;
                }
                else {
                  bVar8 = *pbVar3_mg0;
                  iVar10 = param_16;
                }
                *puVar2 = *(undefined1 *)((uint)bVar8 + iVar10);
              }
              local_8 = puVar4 + 1;
              puVar11 = puVar2 + 1;
              local_10 = pbVar3 + 1;
              uVar9 = uVar9 >> 1;
              if (uVar9 == 0) {
                uVar9 = 0x80;
                local_c = local_c + 1;
              }
              param_6 = pbVar3_mg0 + 1;
              iVar10 = 1;
              local_18 = puVar11;
              if ((int)(uVar6 - 1) < 1) break;
              param_6 = pbVar3_mg0 + 2;
              iVar10 = 2;
              if ((int)(uVar6 - 2) < 1) break;
              if ((*local_c & (byte)uVar9) == 0) {
                if (*local_8 < param_5) {
                  bVar8 = *local_10;
                  iVar10 = param_19;
                }
                else {
                  bVar8 = *param_6;
                  iVar10 = param_16;
                }
                *puVar11 = *(undefined1 *)((uint)bVar8 + iVar10);
              }
              local_18 = puVar2 + 2;
              uVar9 = uVar9 >> 1;
              if (uVar9 == 0) {
                uVar9 = 0x80;
                local_c = local_c + 1;
              }
              iVar10 = 0;
              puVar2 = local_18;
              pbVar3_mg0 = pbVar3_mg0 + 3;
              pbVar3 = pbVar3 + 2;
              puVar4 = puVar4 + 2;
            }
          }
          else {
            uVar1 = *(undefined1 *)((uint)*param_6 + param_16);
            param_6 = param_6 + 1;
            puVar2 = local_18;
            pbVar3 = local_10;
            puVar4 = local_8;
            if (0 < iVar10) {
              if (iVar10 == 1) {
                iVar10 = 2;
                uVar6 = uVar6 - 1;
              }
              puVar11 = local_18;
              if ((int)uVar6 < 1) goto LAB_006fe95a;
              if ((*local_c & (byte)uVar9) == 0) {
                if (*local_8 < param_5) {
                  *local_18 = *(undefined1 *)((uint)*local_10 + param_19);
                }
                else {
                  *local_18 = uVar1;
                }
              }
              uVar9 = uVar9 >> 1;
              if (uVar9 == 0) {
                uVar9 = 0x80;
                local_c = local_c + 1;
              }
              iVar10 = 0;
              uVar6 = uVar6 - 1;
              puVar2 = local_18 + 1;
              pbVar3 = local_10 + 1;
              puVar4 = local_8 + 1;
            }
            for (; puVar11 = puVar2, local_18 = puVar2, local_10 = pbVar3, local_8 = puVar4,
                0 < (int)uVar6; uVar6 = uVar6 - 3) {
              if ((*local_c & (byte)uVar9) == 0) {
                uVar5 = uVar1;
                if (*puVar4 < param_5) {
                  uVar5 = *(undefined1 *)((uint)*pbVar3 + param_19);
                }
                *puVar2 = uVar5;
              }
              local_8 = puVar4 + 1;
              puVar11 = puVar2 + 1;
              local_10 = pbVar3 + 1;
              uVar9 = uVar9 >> 1;
              if (uVar9 == 0) {
                uVar9 = 0x80;
                local_c = local_c + 1;
              }
              iVar10 = 1;
              local_18 = puVar11;
              if (((int)(uVar6 - 1) < 1) || (iVar10 = 2, (int)(uVar6 - 2) < 1)) break;
              if ((*local_c & (byte)uVar9) == 0) {
                uVar5 = uVar1;
                if (*local_8 < param_5) {
                  uVar5 = *(undefined1 *)((uint)*local_10 + param_19);
                }
                *puVar11 = uVar5;
              }
              uVar9 = uVar9 >> 1;
              if (uVar9 == 0) {
                uVar9 = 0x80;
                local_c = local_c + 1;
              }
              iVar10 = 0;
              puVar2 = puVar2 + 2;
              pbVar3 = pbVar3 + 2;
              puVar4 = puVar4 + 2;
            }
          }
LAB_006fe95a:
          if (local_14 < 1) {
            uVar6 = 0;
            break;
          }
          bVar8 = *param_6;
          local_1c = (uint)bVar8;
          param_6 = param_6 + 1;
          if ((bVar8 & 0x80) == 0) {
            uVar6 = bVar8 & 0x7f;
          }
          else {
            uVar6 = bVar8 & 0x3f;
          }
        } while ((int)uVar6 <= local_14);
      }
      uVar6 = uVar6 - local_14;
      if ((0 < local_14) && ((local_1c & 0x80) != 0)) {
        if ((local_1c & 0x40) == 0) {
          pbVar11_mg2 = param_6;
          if (0 < iVar10) {
            if (iVar10 == 1) {
              param_6 = param_6 + 1;
              local_14 = local_14 + -1;
            }
            if (local_14 < 1) goto LAB_006feca3;
            if ((*local_c & (byte)uVar9) == 0) {
              if (*local_8 < param_5) {
                bVar8 = *local_10;
                iVar10 = param_19;
              }
              else {
                bVar8 = *param_6;
                iVar10 = param_16;
              }
              *puVar11 = *(undefined1 *)((uint)bVar8 + iVar10);
            }
            local_8 = local_8 + 1;
            puVar11 = puVar11 + 1;
            local_10 = local_10 + 1;
            uVar9 = uVar9 >> 1;
            if (uVar9 == 0) {
              uVar9 = 0x80;
              local_c = local_c + 1;
            }
            pbVar11_mg2 = param_6 + 1;
            local_14 = local_14 + -1;
          }
          for (; param_6 = pbVar11_mg2, 0 < local_14; local_14 = local_14 + -3) {
            if ((*local_c & (byte)uVar9) == 0) {
              if (*local_8 < param_5) {
                bVar8 = *local_10;
                iVar10 = param_19;
              }
              else {
                bVar8 = *pbVar11_mg2;
                iVar10 = param_16;
              }
              *puVar11 = *(undefined1 *)((uint)bVar8 + iVar10);
            }
            uVar9 = uVar9 >> 1;
            if (uVar9 == 0) {
              uVar9 = 0x80;
              local_c = local_c + 1;
            }
            param_6 = pbVar11_mg2 + 1;
            if ((local_14 + -1 < 1) || (param_6 = pbVar11_mg2 + 2, local_14 + -2 < 1)) break;
            if ((*local_c & (byte)uVar9) == 0) {
              if (local_8[1] < param_5) {
                bVar8 = local_10[1];
                iVar10 = param_19;
              }
              else {
                bVar8 = *param_6;
                iVar10 = param_16;
              }
              puVar11[1] = *(undefined1 *)((uint)bVar8 + iVar10);
            }
            local_8 = local_8 + 2;
            puVar11 = puVar11 + 2;
            local_10 = local_10 + 2;
            uVar9 = uVar9 >> 1;
            if (uVar9 == 0) {
              uVar9 = 0x80;
              local_c = local_c + 1;
            }
            pbVar11_mg2 = pbVar11_mg2 + 3;
          }
        }
        else {
          uVar1 = *(undefined1 *)((uint)*param_6 + param_16);
          param_6 = param_6 + 1;
          if (0 < iVar10) {
            if (iVar10 == 1) {
              local_14 = local_14 + -1;
            }
            if (local_14 < 1) goto LAB_006feca3;
            if ((*local_c & (byte)uVar9) == 0) {
              if (*local_8 < param_5) {
                *local_18 = *(undefined1 *)((uint)*local_10 + param_19);
              }
              else {
                *local_18 = uVar1;
              }
            }
            local_8 = local_8 + 1;
            local_18 = local_18 + 1;
            local_10 = local_10 + 1;
            uVar9 = uVar9 >> 1;
            if (uVar9 == 0) {
              uVar9 = 0x80;
              local_c = local_c + 1;
            }
            local_14 = local_14 + -1;
          }
          for (; 0 < local_14; local_14 = local_14 + -3) {
            if ((*local_c & (byte)uVar9) == 0) {
              uVar5 = uVar1;
              if (*local_8 < param_5) {
                uVar5 = *(undefined1 *)((uint)*local_10 + param_19);
              }
              *local_18 = uVar5;
            }
            uVar9 = uVar9 >> 1;
            if (uVar9 == 0) {
              uVar9 = 0x80;
              local_c = local_c + 1;
            }
            if ((local_14 + -1 < 1) || (local_14 + -2 < 1)) break;
            if ((*local_c & (byte)uVar9) == 0) {
              uVar5 = uVar1;
              if (local_8[1] < param_5) {
                uVar5 = *(undefined1 *)((uint)local_10[1] + param_19);
              }
              local_18[1] = uVar5;
            }
            local_8 = local_8 + 2;
            local_18 = local_18 + 2;
            local_10 = local_10 + 2;
            uVar9 = uVar9 >> 1;
            if (uVar9 == 0) {
              uVar9 = 0x80;
              local_c = local_c + 1;
            }
          }
        }
      }
LAB_006feca3:
      iVar10 = (param_7 - param_8) - param_9;
      bVar8 = (byte)local_1c;
      if ((int)uVar6 < iVar10) {
        do {
          iVar10 = iVar10 - uVar6;
          pbVar11_mg3 = param_6;
          if (((byte)local_1c & 0xc0) == 0x80) {
            pbVar11_mg3 = param_6 + uVar6;
          }
          bVar8 = *pbVar11_mg3;
          local_1c = (uint)bVar8;
          param_6 = pbVar11_mg3 + 1;
          uVar6 = local_1c;
          if (((bVar8 & 0x80) != 0) && (uVar6 = local_1c & 0x3f, (bVar8 & 0x40) != 0)) {
            param_6 = pbVar11_mg3 + 2;
          }
        } while ((int)uVar6 < iVar10);
      }
      if ((bVar8 & 0xc0) == 0x80) {
        param_6 = param_6 + iVar10;
      }
    }
    param_1 = param_1 + param_2;
    param_17 = param_17 + param_18;
    param_3 = (ushort *)((int)param_3 + param_4);
    pbVar7 = pbVar7 + param_14;
    param_12 = param_12 + 1;
    iVar10 = param_10_after_write;
    if (2 < param_12) {
      param_12 = 0;
    }
  } while( true );
}

// 006FED50 FUN_006fed50
#line 4 "decomp/ST.exe/functions/006FED50/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006FED50(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 uint param_12,int param_13,int param_14,int param_15,int param_16)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint local_18;
  int local_14;
  undefined1 *local_10;
  byte *local_c;
  ushort *local_8;

  pbVar5 = (byte *)(param_13 + (param_15 >> 3));
  _DAT_00857000 = 1;
  pbVar10 = param_6;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = param_10 + -1;
    if (param_10 < 0) {
      return;
    }
    while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
      uVar6 = (uint)*pbVar10;
      pbVar10 = pbVar10 + 1;
      iVar7 = param_7;
      if (uVar6 != 0) {
        while( true ) {
          if ((uVar6 & 0x80) == 0) {
            uVar3 = uVar6 & 0x7f;
          }
          else if ((uVar6 & 0x40) == 0) {
            pbVar10 = pbVar10 + (uVar6 & 0x3f);
            uVar3 = uVar6 & 0x3f;
          }
          else {
            pbVar10 = pbVar10 + 1;
            uVar3 = uVar6 & 0x3f;
          }
          if ((int)(iVar7 - uVar3) < 1) break;
          uVar6 = (uint)*pbVar10;
          pbVar10 = pbVar10 + 1;
          iVar7 = iVar7 - uVar3;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_12 = param_12 + 1;
      if (4 < (int)param_12) {
        param_12 = 0;
      }
    }
    local_18 = (uint)*pbVar10;
    pbVar10 = pbVar10 + 1;
    if (local_18 == 0) goto LAB_006ff454;
    uVar6 = 0x80 >> ((byte)param_15 & 7);
    iVar7 = param_8;
    while( true ) {
      while ((local_18 & 0x80) == 0) {
        uVar3 = local_18 & 0x7f;
        if (iVar7 < (int)uVar3) goto LAB_006fee4f;
        iVar7 = iVar7 - uVar3;
        bVar2 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        local_18 = (uint)bVar2;
      }
      uVar3 = local_18 & 0x3f;
      if (iVar7 < (int)uVar3) break;
      if ((local_18 & 0x40) == 0) {
        iVar7 = iVar7 - uVar3;
        local_18 = (uint)pbVar10[uVar3];
        pbVar10 = pbVar10 + uVar3 + 1;
      }
      else {
        iVar7 = iVar7 - uVar3;
        local_18 = (uint)pbVar10[1];
        pbVar10 = pbVar10 + 2;
      }
    }
LAB_006fee4f:
    uVar3 = uVar3 - iVar7;
    if (((byte)local_18 & 0xc0) == 0x80) {
      pbVar10 = pbVar10 + iVar7;
    }
    local_14 = param_9;
    iVar7 = param_11;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = pbVar10;
    local_10 = param_1;
    local_c = pbVar5;
    local_8 = param_3;
    if ((int)uVar3 <= param_9) {
      do {
        local_14 = local_14 - uVar3;
        if ((local_18 & 0x80) == 0) {
          pbVar10 = param_6;
          puVar9 = local_10;
          puVar8 = local_8;
          if (-1 < (int)(uVar3 - 1)) {
            do {
              if (((byte)iVar7 & 1) == 1) {
                local_10 = local_10 + 1;
                local_8 = local_8 + 1;
                uVar6 = uVar6 >> 1;
                if (uVar6 == 0) {
                  uVar6 = 0x80;
                  local_c = local_c + 1;
                }
              }
              iVar7 = iVar7 + 1;
              if (4 < iVar7) {
                iVar7 = 0;
              }
              uVar3 = uVar3 - 1;
              puVar9 = local_10;
              puVar8 = local_8;
            } while (uVar3 != 0);
          }
          goto LAB_006ff204;
        }
        if ((local_18 & 0x40) != 0) {
          uVar1 = *(undefined1 *)((uint)*param_6 + param_16);
          pbVar10 = param_6 + 1;
          if (iVar7 < 1) {
switchD_006feec1_default:
            puVar9 = local_10;
            puVar8 = local_8;
            if (0 < (int)uVar3) {
              iVar4 = uVar3 - 1;
              iVar7 = 1;
              if (0 < iVar4) {
                while( true ) {
                  if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
                    *local_10 = uVar1;
                  }
                  iVar7 = 2;
                  puVar8 = local_8 + 1;
                  puVar9 = local_10 + 1;
                  uVar6 = uVar6 >> 1;
                  if (uVar6 == 0) {
                    uVar6 = 0x80;
                    local_c = local_c + 1;
                  }
                  if ((iVar4 + -1 < 1) || (iVar7 = 3, iVar4 + -2 < 1)) break;
                  if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *puVar8)) {
                    *puVar9 = uVar1;
                  }
                  local_8 = local_8 + 2;
                  local_10 = local_10 + 2;
                  uVar6 = uVar6 >> 1;
                  if (uVar6 == 0) {
                    uVar6 = 0x80;
                    local_c = local_c + 1;
                  }
                  iVar7 = 4;
                  puVar9 = local_10;
                  puVar8 = local_8;
                  if ((iVar4 + -3 < 1) || (iVar7 = 0, iVar4 + -4 < 1)) break;
                  iVar4 = iVar4 + -5;
                  iVar7 = 1;
                  if (iVar4 < 1) break;
                }
              }
            }
          }
          else {
            switch(iVar7) {
            case 1:
              if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
                *local_10 = uVar1;
              }
              iVar7 = 2;
              local_8 = local_8 + 1;
              local_10 = local_10 + 1;
              uVar6 = uVar6 >> 1;
              if (uVar6 == 0) {
                uVar6 = 0x80;
                local_c = local_c + 1;
              }
              uVar3 = uVar3 - 1;
              puVar9 = local_10;
              puVar8 = local_8;
              if ((int)uVar3 < 1) goto LAB_006ff204;
              break;
            case 2:
              break;
            case 3:
              goto switchD_006feec1_caseD_3;
            case 4:
              goto switchD_006feec1_caseD_4;
            default:
              goto switchD_006feec1_default;
            }
            uVar3 = uVar3 - 1;
            iVar7 = 3;
            puVar9 = local_10;
            puVar8 = local_8;
            if (0 < (int)uVar3) {
switchD_006feec1_caseD_3:
              if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
                *local_10 = uVar1;
              }
              local_8 = local_8 + 1;
              local_10 = local_10 + 1;
              uVar6 = uVar6 >> 1;
              if (uVar6 == 0) {
                uVar6 = 0x80;
                local_c = local_c + 1;
              }
              uVar3 = uVar3 - 1;
              iVar7 = 4;
              puVar9 = local_10;
              puVar8 = local_8;
              if (0 < (int)uVar3) {
switchD_006feec1_caseD_4:
                iVar7 = 0;
                uVar3 = uVar3 - 1;
                goto switchD_006feec1_default;
              }
            }
          }
          goto LAB_006ff204;
        }
        if (iVar7 < 1) goto switchD_006ff051_default;
        switch(iVar7) {
        case 1:
          if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
            *local_10 = *(undefined1 *)((uint)*param_6 + param_16);
          }
          iVar7 = 2;
          local_8 = local_8 + 1;
          local_10 = local_10 + 1;
          uVar6 = uVar6 >> 1;
          if (uVar6 == 0) {
            uVar6 = 0x80;
            local_c = local_c + 1;
          }
          param_6 = param_6 + 1;
          uVar3 = uVar3 - 1;
          pbVar10 = param_6;
          puVar9 = local_10;
          puVar8 = local_8;
          if ((int)uVar3 < 1) break;
          goto LAB_006ff0b5;
        case 2:
LAB_006ff0b5:
          param_6 = param_6 + 1;
          uVar3 = uVar3 - 1;
          iVar7 = 3;
          pbVar10 = param_6;
          puVar9 = local_10;
          puVar8 = local_8;
          if (0 < (int)uVar3) {
LAB_006ff0cc:
            if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
              *local_10 = *(undefined1 *)((uint)*param_6 + param_16);
            }
            local_8 = local_8 + 1;
            local_10 = local_10 + 1;
            uVar6 = uVar6 >> 1;
            if (uVar6 == 0) {
              uVar6 = 0x80;
              local_c = local_c + 1;
            }
            iVar7 = 4;
            pbVar10 = param_6 + 1;
            puVar9 = local_10;
            puVar8 = local_8;
            if (0 < (int)(uVar3 - 1)) {
              param_6 = param_6 + 2;
              iVar7 = 0;
              uVar3 = uVar3 - 2;
              goto switchD_006ff051_default;
            }
          }
          break;
        case 3:
          goto LAB_006ff0cc;
        case 4:
          param_6 = param_6 + 1;
          iVar7 = 0;
          uVar3 = uVar3 - 1;
        default:
switchD_006ff051_default:
          pbVar10 = param_6;
          puVar9 = local_10;
          puVar8 = local_8;
          if (0 < (int)uVar3) {
            pbVar11 = param_6 + 1;
            for (iVar4 = uVar3 - 1; iVar7 = 1, pbVar10 = pbVar11, puVar9 = local_10,
                puVar8 = local_8, 0 < iVar4; iVar4 = iVar4 + -5) {
              if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
                *local_10 = *(undefined1 *)((uint)*pbVar11 + param_16);
              }
              iVar7 = 2;
              puVar8 = local_8 + 1;
              puVar9 = local_10 + 1;
              uVar6 = uVar6 >> 1;
              if (uVar6 == 0) {
                uVar6 = 0x80;
                local_c = local_c + 1;
              }
              pbVar10 = pbVar11 + 1;
              if (iVar4 + -1 < 1) break;
              iVar7 = 3;
              pbVar10 = pbVar11 + 2;
              if (iVar4 + -2 < 1) break;
              if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *puVar8)) {
                *puVar9 = *(undefined1 *)((uint)pbVar11[2] + param_16);
              }
              local_8 = local_8 + 2;
              local_10 = local_10 + 2;
              uVar6 = uVar6 >> 1;
              if (uVar6 == 0) {
                uVar6 = 0x80;
                local_c = local_c + 1;
              }
              iVar7 = 4;
              pbVar10 = pbVar11 + 3;
              puVar9 = local_10;
              puVar8 = local_8;
              if (iVar4 + -3 < 1) break;
              iVar7 = 0;
              pbVar10 = pbVar11 + 4;
              if (iVar4 + -4 < 1) break;
              pbVar11 = pbVar11 + 5;
            }
          }
        }
LAB_006ff204:
        local_8 = puVar8;
        local_10 = puVar9;
        param_6 = pbVar10;
        if (local_14 < 1) {
          uVar3 = 0;
          break;
        }
        bVar2 = *param_6;
        local_18 = (uint)bVar2;
        param_6 = param_6 + 1;
        if ((bVar2 & 0x80) == 0) {
          uVar3 = bVar2 & 0x7f;
        }
        else {
          uVar3 = bVar2 & 0x3f;
        }
      } while ((int)uVar3 <= local_14);
    }
    uVar3 = uVar3 - local_14;
    pbVar10 = param_6;
    if ((local_14 < 1) || ((local_18 & 0x80) == 0)) goto LAB_006ff401;
    if ((local_18 & 0x40) != 0) {
      uVar1 = *(undefined1 *)((uint)*param_6 + param_16);
      pbVar10 = param_6 + 1;
      if (iVar7 < 1) goto switchD_006ff2be_default;
      switch(iVar7) {
      case 1:
        if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
          *local_10 = uVar1;
        }
        local_8 = local_8 + 1;
        local_10 = local_10 + 1;
        uVar6 = uVar6 >> 1;
        if (uVar6 == 0) {
          uVar6 = 0x80;
          local_c = local_c + 1;
        }
        local_14 = local_14 + -1;
        if (local_14 < 1) break;
        goto LAB_006ff313;
      case 2:
LAB_006ff313:
        local_14 = local_14 + -1;
        if (0 < local_14) {
LAB_006ff324:
          if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
            *local_10 = uVar1;
          }
          local_8 = local_8 + 1;
          local_10 = local_10 + 1;
          uVar6 = uVar6 >> 1;
          if (uVar6 == 0) {
            uVar6 = 0x80;
            local_c = local_c + 1;
          }
          if (0 < local_14 + -1) {
            local_14 = local_14 + -2;
            goto switchD_006ff2be_default;
          }
        }
        break;
      case 3:
        goto LAB_006ff324;
      case 4:
        local_14 = local_14 + -1;
      default:
switchD_006ff2be_default:
        if ((0 < local_14) && (local_14 = local_14 + -1, 0 < local_14)) {
          while( true ) {
            if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
              *local_10 = uVar1;
            }
            uVar6 = uVar6 >> 1;
            if (uVar6 == 0) {
              uVar6 = 0x80;
              local_c = local_c + 1;
            }
            if (local_14 + -2 < 1) break;
            if (((*local_c & (byte)uVar6) == 0) && (param_5 <= local_8[1])) {
              local_10[1] = uVar1;
            }
            local_8 = local_8 + 2;
            local_10 = local_10 + 2;
            uVar6 = uVar6 >> 1;
            if (uVar6 == 0) {
              uVar6 = 0x80;
              local_c = local_c + 1;
            }
            if ((local_14 + -4 < 1) || (local_14 = local_14 + -5, local_14 < 1)) break;
          }
        }
      }
      goto LAB_006ff401;
    }
    if (iVar7 < 1) goto switchD_006ff4ab_default;
    switch(iVar7) {
    case 1:
      if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
        *local_10 = *(undefined1 *)((uint)*param_6 + param_16);
      }
      local_8 = local_8 + 1;
      local_10 = local_10 + 1;
      uVar6 = uVar6 >> 1;
      if (uVar6 == 0) {
        uVar6 = 0x80;
        local_c = local_c + 1;
      }
      param_6 = param_6 + 1;
      local_14 = local_14 + -1;
      pbVar10 = param_6;
      if (local_14 < 1) break;
      goto LAB_006ff509;
    case 2:
LAB_006ff509:
      param_6 = param_6 + 1;
      local_14 = local_14 + -1;
      pbVar10 = param_6;
      if (0 < local_14) {
LAB_006ff518:
        if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
          *local_10 = *(undefined1 *)((uint)*param_6 + param_16);
        }
        local_8 = local_8 + 1;
        local_10 = local_10 + 1;
        uVar6 = uVar6 >> 1;
        if (uVar6 == 0) {
          uVar6 = 0x80;
          local_c = local_c + 1;
        }
        pbVar10 = param_6 + 1;
        if (0 < local_14 + -1) {
          param_6 = param_6 + 2;
          local_14 = local_14 + -2;
          goto switchD_006ff4ab_default;
        }
      }
      break;
    case 3:
      goto LAB_006ff518;
    case 4:
      param_6 = param_6 + 1;
      local_14 = local_14 + -1;
    default:
switchD_006ff4ab_default:
      pbVar10 = param_6;
      if (0 < local_14) {
        pbVar11 = param_6 + 1;
        local_14 = local_14 + -1;
        pbVar10 = pbVar11;
        if (0 < local_14) {
          while( true ) {
            if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
              *local_10 = *(undefined1 *)((uint)*pbVar11 + param_16);
            }
            uVar6 = uVar6 >> 1;
            if (uVar6 == 0) {
              uVar6 = 0x80;
              local_c = local_c + 1;
            }
            pbVar10 = pbVar11 + 1;
            if ((local_14 + -1 < 1) || (pbVar10 = pbVar11 + 2, local_14 + -2 < 1)) break;
            if (((*local_c & (byte)uVar6) == 0) && (param_5 <= local_8[1])) {
              local_10[1] = *(undefined1 *)((uint)pbVar11[2] + param_16);
            }
            local_8 = local_8 + 2;
            local_10 = local_10 + 2;
            uVar6 = uVar6 >> 1;
            if (uVar6 == 0) {
              uVar6 = 0x80;
              local_c = local_c + 1;
            }
            pbVar10 = pbVar11 + 3;
            if ((local_14 + -3 < 1) || (pbVar10 = pbVar11 + 4, local_14 + -4 < 1)) break;
            pbVar11 = pbVar11 + 5;
            local_14 = local_14 + -5;
            pbVar10 = pbVar11;
            if (local_14 < 1) break;
          }
        }
      }
    }
LAB_006ff401:
    iVar7 = (param_7 - param_8) - param_9;
    bVar2 = (byte)local_18;
    if ((int)uVar3 < iVar7) {
      do {
        iVar7 = iVar7 - uVar3;
        pbVar11 = pbVar10;
        if (((byte)local_18 & 0xc0) == 0x80) {
          pbVar11 = pbVar10 + uVar3;
        }
        bVar2 = *pbVar11;
        local_18 = (uint)bVar2;
        pbVar10 = pbVar11 + 1;
        uVar3 = local_18;
        if (((bVar2 & 0x80) != 0) && (uVar3 = local_18 & 0x3f, (bVar2 & 0x40) != 0)) {
          pbVar10 = pbVar11 + 2;
        }
      } while ((int)uVar3 < iVar7);
    }
    STPiece<0,1>(local_18) = bVar2;
    if (((byte)local_18 & 0xc0) == 0x80) {
      pbVar10 = pbVar10 + iVar7;
    }
LAB_006ff454:
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    pbVar5 = pbVar5 + param_14;
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      param_12 = 0;
    }
  } while( true );
}

// 006FF690 FUN_006ff690
#line 4 "decomp/ST.exe/functions/006FF690/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006FF690(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 uint param_12,int param_13,int param_14,int param_15,int param_16,byte *param_17,
                 int param_18,int param_19)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint local_1c;
  int local_18;
  undefined1 *local_14;
  byte *local_10;
  byte *local_c;
  ushort *local_8;

  pbVar6 = (byte *)(param_13 + (param_15 >> 3));
  _DAT_00857000 = 1;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = param_10 + -1;
    if (param_10 < 0) {
      return;
    }
    while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
      uVar8 = (uint)*param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + 1;
      iVar9 = param_7;
      if (uVar8 != 0) {
        while( true ) {
          if ((uVar8 & 0x80) == 0) {
            uVar3 = uVar8 & 0x7f;
          }
          else if ((uVar8 & 0x40) == 0) {
            param_6 = param_6 + (uVar8 & 0x3f);
            uVar3 = uVar8 & 0x3f;
          }
          else {
            param_6 = param_6 + 1;
            uVar3 = uVar8 & 0x3f;
          }
          if ((int)(iVar9 - uVar3) < 1) break;
          uVar8 = (uint)*param_6;
          param_6 = param_6 + 1;
          iVar9 = iVar9 - uVar3;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_12 = param_12 + 1;
      if (4 < (int)param_12) {
        param_12 = 0;
      }
    }
    local_1c = (uint)*param_6;
    param_6 = param_6 + 1;
    if (local_1c == 0) goto LAB_007000f4;
    uVar8 = 0x80 >> ((byte)param_15 & 7);
    iVar9 = param_8;
    while( true ) {
      while ((local_1c & 0x80) == 0) {
        uVar3 = local_1c & 0x7f;
        if (iVar9 < (int)uVar3) goto LAB_006ff7b0;
        iVar9 = iVar9 - uVar3;
        bVar7 = *param_6;
        param_6 = param_6 + 1;
        local_1c = (uint)bVar7;
      }
      uVar3 = local_1c & 0x3f;
      if (iVar9 < (int)uVar3) break;
      if ((local_1c & 0x40) == 0) {
        iVar9 = iVar9 - uVar3;
        local_1c = (uint)param_6[uVar3];
        param_6 = param_6 + uVar3 + 1;
      }
      else {
        iVar9 = iVar9 - uVar3;
        local_1c = (uint)param_6[1];
        param_6 = param_6 + 2;
      }
    }
LAB_006ff7b0:
    uVar3 = uVar3 - iVar9;
    if (((byte)local_1c & 0xc0) == 0x80) {
      param_6 = param_6 + iVar9;
    }
    local_18 = param_9;
    iVar9 = param_11;
    puVar14 = param_1;
    puVar15 = param_1;
    local_14 = param_1;
    local_10 = param_17;
    local_c = pbVar6;
    local_8 = param_3;
    if ((int)uVar3 <= param_9) {
      do {
        local_18 = local_18 - uVar3;
        if ((local_1c & 0x80) == 0) {
          puVar14 = puVar15;
          pbVar13 = param_6;
          puVar2 = local_14;
          pbVar11 = local_10;
          puVar10 = local_8;
          if (-1 < (int)(uVar3 - 1)) {
            do {
              if (((byte)iVar9 & 1) == 1) {
                puVar15 = puVar15 + 1;
                local_10 = local_10 + 1;
                local_8 = local_8 + 1;
                uVar8 = uVar8 >> 1;
                if (uVar8 == 0) {
                  uVar8 = 0x80;
                  local_c = local_c + 1;
                }
              }
              iVar9 = iVar9 + 1;
              if (4 < iVar9) {
                iVar9 = 0;
              }
              uVar3 = uVar3 - 1;
              puVar14 = puVar15;
              puVar2 = puVar15;
              pbVar11 = local_10;
              puVar10 = local_8;
            } while (uVar3 != 0);
          }
          goto LAB_006ffc16;
        }
        if ((local_1c & 0x40) == 0) {
          if (iVar9 < 1) goto switchD_006ffa14_default;
          switch(iVar9) {
          case 1:
            if ((*local_c & (byte)uVar8) == 0) {
              if (*local_8 < param_5) {
                *puVar15 = *(undefined1 *)((uint)*local_10 + param_19);
              }
              else {
                *puVar15 = *(undefined1 *)((uint)*param_6 + param_16);
              }
            }
            iVar9 = 2;
            local_8 = local_8 + 1;
            puVar15 = puVar15 + 1;
            local_10 = local_10 + 1;
            uVar8 = uVar8 >> 1;
            if (uVar8 == 0) {
              uVar8 = 0x80;
              local_c = local_c + 1;
            }
            param_6 = param_6 + 1;
            uVar3 = uVar3 - 1;
            puVar14 = puVar15;
            pbVar13 = param_6;
            puVar2 = puVar15;
            local_14 = puVar15;
            pbVar11 = local_10;
            puVar10 = local_8;
            if ((int)uVar3 < 1) break;
            goto LAB_006ffa8e;
          case 2:
LAB_006ffa8e:
            param_6 = param_6 + 1;
            uVar3 = uVar3 - 1;
            iVar9 = 3;
            puVar14 = puVar15;
            pbVar13 = param_6;
            puVar2 = local_14;
            pbVar11 = local_10;
            puVar10 = local_8;
            if (0 < (int)uVar3) {
LAB_006ffaa5:
              if ((*local_c & (byte)uVar8) == 0) {
                if (*local_8 < param_5) {
                  bVar7 = *local_10;
                  iVar9 = param_19;
                }
                else {
                  bVar7 = *param_6;
                  iVar9 = param_16;
                }
                *puVar15 = *(undefined1 *)((uint)bVar7 + iVar9);
              }
              local_8 = local_8 + 1;
              puVar15 = puVar15 + 1;
              local_10 = local_10 + 1;
              uVar8 = uVar8 >> 1;
              if (uVar8 == 0) {
                uVar8 = 0x80;
                local_c = local_c + 1;
              }
              iVar9 = 4;
              puVar14 = puVar15;
              pbVar13 = param_6 + 1;
              puVar2 = puVar15;
              pbVar11 = local_10;
              puVar10 = local_8;
              if (0 < (int)(uVar3 - 1)) {
                param_6 = param_6 + 2;
                iVar9 = 0;
                uVar3 = uVar3 - 2;
                local_14 = puVar15;
                goto switchD_006ffa14_default;
              }
            }
            break;
          case 3:
            goto LAB_006ffaa5;
          case 4:
            iVar9 = 0;
            param_6 = param_6 + 1;
            uVar3 = uVar3 - 1;
          default:
switchD_006ffa14_default:
            puVar14 = puVar15;
            pbVar13 = param_6;
            puVar2 = local_14;
            pbVar11 = local_10;
            puVar10 = local_8;
            if (0 < (int)uVar3) {
              pbVar12 = param_6 + 1;
              for (iVar4 = uVar3 - 1; iVar9 = 1, puVar14 = puVar15, pbVar13 = pbVar12,
                  puVar2 = local_14, pbVar11 = local_10, puVar10 = local_8, 0 < iVar4;
                  iVar4 = iVar4 + -5) {
                if ((*local_c & (byte)uVar8) == 0) {
                  if (*local_8 < param_5) {
                    bVar7 = *local_10;
                    iVar9 = param_19;
                  }
                  else {
                    bVar7 = *pbVar12;
                    iVar9 = param_16;
                  }
                  *puVar15 = *(undefined1 *)((uint)bVar7 + iVar9);
                }
                iVar9 = 2;
                puVar10 = local_8 + 1;
                puVar14 = puVar15 + 1;
                pbVar11 = local_10 + 1;
                uVar8 = uVar8 >> 1;
                if (uVar8 == 0) {
                  uVar8 = 0x80;
                  local_c = local_c + 1;
                }
                pbVar13 = pbVar12 + 1;
                puVar2 = puVar14;
                if (iVar4 + -1 < 1) break;
                iVar9 = 3;
                pbVar13 = pbVar12 + 2;
                if (iVar4 + -2 < 1) break;
                if ((*local_c & (byte)uVar8) == 0) {
                  if (*puVar10 < param_5) {
                    bVar7 = *pbVar11;
                    iVar9 = param_19;
                  }
                  else {
                    bVar7 = pbVar12[2];
                    iVar9 = param_16;
                  }
                  *puVar14 = *(undefined1 *)((uint)bVar7 + iVar9);
                }
                local_8 = local_8 + 2;
                puVar15 = puVar15 + 2;
                local_10 = local_10 + 2;
                uVar8 = uVar8 >> 1;
                if (uVar8 == 0) {
                  uVar8 = 0x80;
                  local_c = local_c + 1;
                }
                iVar9 = 4;
                puVar14 = puVar15;
                pbVar13 = pbVar12 + 3;
                puVar2 = puVar15;
                pbVar11 = local_10;
                puVar10 = local_8;
                if (iVar4 + -3 < 1) break;
                iVar9 = 0;
                pbVar13 = pbVar12 + 4;
                if (iVar4 + -4 < 1) break;
                pbVar12 = pbVar12 + 5;
                local_14 = puVar15;
              }
            }
          }
          goto LAB_006ffc16;
        }
        uVar1 = *(undefined1 *)((uint)*param_6 + param_16);
        pbVar13 = param_6 + 1;
        if (iVar9 < 1) goto switchD_006ff820_default;
        switch(iVar9) {
        case 1:
          if ((*local_c & (byte)uVar8) == 0) {
            if (*local_8 < param_5) {
              *local_14 = *(undefined1 *)((uint)*local_10 + param_19);
            }
            else {
              *local_14 = uVar1;
            }
          }
          iVar9 = 2;
          local_8 = local_8 + 1;
          local_14 = local_14 + 1;
          local_10 = local_10 + 1;
          uVar8 = uVar8 >> 1;
          if (uVar8 == 0) {
            uVar8 = 0x80;
            local_c = local_c + 1;
          }
          uVar3 = uVar3 - 1;
          puVar14 = local_14;
          puVar2 = local_14;
          pbVar11 = local_10;
          puVar10 = local_8;
          if ((int)uVar3 < 1) break;
          goto LAB_006ff891;
        case 2:
LAB_006ff891:
          uVar3 = uVar3 - 1;
          iVar9 = 3;
          puVar14 = local_14;
          puVar2 = local_14;
          pbVar11 = local_10;
          puVar10 = local_8;
          if (0 < (int)uVar3) {
LAB_006ff8a4:
            if ((*local_c & (byte)uVar8) == 0) {
              if (*local_8 < param_5) {
                *local_14 = *(undefined1 *)((uint)*local_10 + param_19);
              }
              else {
                *local_14 = uVar1;
              }
            }
            local_8 = local_8 + 1;
            local_14 = local_14 + 1;
            local_10 = local_10 + 1;
            uVar8 = uVar8 >> 1;
            if (uVar8 == 0) {
              uVar8 = 0x80;
              local_c = local_c + 1;
            }
            iVar9 = 4;
            puVar14 = local_14;
            puVar2 = local_14;
            pbVar11 = local_10;
            puVar10 = local_8;
            if (0 < (int)(uVar3 - 1)) {
              iVar9 = 0;
              uVar3 = uVar3 - 2;
              goto switchD_006ff820_default;
            }
          }
          break;
        case 3:
          goto LAB_006ff8a4;
        case 4:
          iVar9 = 0;
          uVar3 = uVar3 - 1;
        default:
switchD_006ff820_default:
          puVar14 = local_14;
          puVar2 = local_14;
          pbVar11 = local_10;
          puVar10 = local_8;
          if (0 < (int)uVar3) {
            iVar4 = uVar3 - 1;
            iVar9 = 1;
            if (0 < iVar4) {
              while( true ) {
                if ((*local_c & (byte)uVar8) == 0) {
                  if (*local_8 < param_5) {
                    *local_14 = *(undefined1 *)((uint)*local_10 + param_19);
                  }
                  else {
                    *local_14 = uVar1;
                  }
                }
                iVar9 = 2;
                puVar10 = local_8 + 1;
                puVar14 = local_14 + 1;
                pbVar11 = local_10 + 1;
                uVar8 = uVar8 >> 1;
                if (uVar8 == 0) {
                  uVar8 = 0x80;
                  local_c = local_c + 1;
                }
                puVar2 = puVar14;
                if ((iVar4 + -1 < 1) || (iVar9 = 3, iVar4 + -2 < 1)) break;
                if ((*local_c & (byte)uVar8) == 0) {
                  if (*puVar10 < param_5) {
                    *puVar14 = *(undefined1 *)((uint)*pbVar11 + param_19);
                  }
                  else {
                    *puVar14 = uVar1;
                  }
                }
                local_8 = local_8 + 2;
                local_14 = local_14 + 2;
                local_10 = local_10 + 2;
                uVar8 = uVar8 >> 1;
                if (uVar8 == 0) {
                  uVar8 = 0x80;
                  local_c = local_c + 1;
                }
                iVar9 = 4;
                puVar14 = local_14;
                puVar2 = local_14;
                pbVar11 = local_10;
                puVar10 = local_8;
                if ((iVar4 + -3 < 1) || (iVar9 = 0, iVar4 + -4 < 1)) break;
                iVar4 = iVar4 + -5;
                iVar9 = 1;
                if (iVar4 < 1) break;
              }
            }
          }
        }
LAB_006ffc16:
        local_8 = puVar10;
        local_10 = pbVar11;
        local_14 = puVar2;
        param_6 = pbVar13;
        if (local_18 < 1) {
          uVar3 = 0;
          break;
        }
        bVar7 = *param_6;
        local_1c = (uint)bVar7;
        param_6 = param_6 + 1;
        if ((bVar7 & 0x80) == 0) {
          uVar3 = bVar7 & 0x7f;
        }
        else {
          uVar3 = bVar7 & 0x3f;
        }
        puVar15 = puVar14;
      } while ((int)uVar3 <= local_18);
    }
    uVar3 = uVar3 - local_18;
    pbVar13 = param_6;
    if ((local_18 < 1) || ((local_1c & 0x80) == 0)) goto LAB_0070009c;
    if ((local_1c & 0x40) == 0) {
      if (iVar9 < 1) goto switchD_006ffea8_default;
      switch(iVar9) {
      case 1:
        if ((*local_c & (byte)uVar8) == 0) {
          if (*local_8 < param_5) {
            bVar7 = *local_10;
            iVar9 = param_19;
          }
          else {
            bVar7 = *param_6;
            iVar9 = param_16;
          }
          *puVar14 = *(undefined1 *)((uint)bVar7 + iVar9);
        }
        local_8 = local_8 + 1;
        puVar14 = puVar14 + 1;
        local_10 = local_10 + 1;
        uVar8 = uVar8 >> 1;
        if (uVar8 == 0) {
          uVar8 = 0x80;
          local_c = local_c + 1;
        }
        param_6 = param_6 + 1;
        local_18 = local_18 + -1;
        pbVar13 = param_6;
        if (local_18 < 1) break;
        goto LAB_006fff19;
      case 2:
LAB_006fff19:
        param_6 = param_6 + 1;
        local_18 = local_18 + -1;
        pbVar13 = param_6;
        if (0 < local_18) {
LAB_006fff2e:
          if ((*local_c & (byte)uVar8) == 0) {
            if (*local_8 < param_5) {
              bVar7 = *local_10;
              iVar9 = param_19;
            }
            else {
              bVar7 = *param_6;
              iVar9 = param_16;
            }
            *puVar14 = *(undefined1 *)((uint)bVar7 + iVar9);
          }
          local_8 = local_8 + 1;
          puVar14 = puVar14 + 1;
          local_10 = local_10 + 1;
          uVar8 = uVar8 >> 1;
          if (uVar8 == 0) {
            uVar8 = 0x80;
            local_c = local_c + 1;
          }
          pbVar13 = param_6 + 1;
          if (0 < local_18 + -1) {
            param_6 = param_6 + 2;
            local_18 = local_18 + -2;
            goto switchD_006ffea8_default;
          }
        }
        break;
      case 3:
        goto LAB_006fff2e;
      case 4:
        param_6 = param_6 + 1;
        local_18 = local_18 + -1;
      default:
switchD_006ffea8_default:
        pbVar13 = param_6;
        if (0 < local_18) {
          param_6 = param_6 + 1;
          local_18 = local_18 + -1;
          pbVar13 = param_6;
          if (0 < local_18) {
            while( true ) {
              if ((*local_c & (byte)uVar8) == 0) {
                if (*local_8 < param_5) {
                  bVar7 = *local_10;
                  iVar9 = param_19;
                }
                else {
                  bVar7 = *param_6;
                  iVar9 = param_16;
                }
                *puVar14 = *(undefined1 *)((uint)bVar7 + iVar9);
              }
              uVar8 = uVar8 >> 1;
              if (uVar8 == 0) {
                uVar8 = 0x80;
                local_c = local_c + 1;
              }
              pbVar13 = param_6 + 1;
              if ((local_18 + -1 < 1) || (pbVar13 = param_6 + 2, local_18 + -2 < 1)) break;
              if ((*local_c & (byte)uVar8) == 0) {
                if (local_8[1] < param_5) {
                  bVar7 = local_10[1];
                  iVar9 = param_19;
                }
                else {
                  bVar7 = param_6[2];
                  iVar9 = param_16;
                }
                puVar14[1] = *(undefined1 *)((uint)bVar7 + iVar9);
              }
              local_8 = local_8 + 2;
              puVar14 = puVar14 + 2;
              local_10 = local_10 + 2;
              uVar8 = uVar8 >> 1;
              if (uVar8 == 0) {
                uVar8 = 0x80;
                local_c = local_c + 1;
              }
              pbVar13 = param_6 + 3;
              if ((local_18 + -3 < 1) || (pbVar13 = param_6 + 4, local_18 + -4 < 1)) break;
              param_6 = param_6 + 5;
              local_18 = local_18 + -5;
              pbVar13 = param_6;
              if (local_18 < 1) break;
            }
          }
        }
      }
      goto LAB_0070009c;
    }
    uVar1 = *(undefined1 *)((uint)*param_6 + param_16);
    pbVar13 = param_6 + 1;
    if (iVar9 < 1) goto switchD_006ffcd8_default;
    switch(iVar9) {
    case 1:
      if ((*local_c & (byte)uVar8) == 0) {
        if (*local_8 < param_5) {
          *local_14 = *(undefined1 *)((uint)*local_10 + param_19);
        }
        else {
          *local_14 = uVar1;
        }
      }
      local_8 = local_8 + 1;
      local_14 = local_14 + 1;
      local_10 = local_10 + 1;
      uVar8 = uVar8 >> 1;
      if (uVar8 == 0) {
        uVar8 = 0x80;
        local_c = local_c + 1;
      }
      local_18 = local_18 + -1;
      if (local_18 < 1) break;
      goto LAB_006ffd48;
    case 2:
LAB_006ffd48:
      local_18 = local_18 + -1;
      if (0 < local_18) {
LAB_006ffd5f:
        if ((*local_c & (byte)uVar8) == 0) {
          uVar5 = uVar1;
          if (*local_8 < param_5) {
            uVar5 = *(undefined1 *)((uint)*local_10 + param_19);
          }
          *local_14 = uVar5;
        }
        local_8 = local_8 + 1;
        local_14 = local_14 + 1;
        local_10 = local_10 + 1;
        uVar8 = uVar8 >> 1;
        if (uVar8 == 0) {
          uVar8 = 0x80;
          local_c = local_c + 1;
        }
        if (0 < local_18 + -1) {
          local_18 = local_18 + -2;
          goto switchD_006ffcd8_default;
        }
      }
      break;
    case 3:
      goto LAB_006ffd5f;
    case 4:
      local_18 = local_18 + -1;
    default:
switchD_006ffcd8_default:
      if ((0 < local_18) && (local_18 = local_18 + -1, 0 < local_18)) {
        while( true ) {
          if ((*local_c & (byte)uVar8) == 0) {
            uVar5 = uVar1;
            if (*local_8 < param_5) {
              uVar5 = *(undefined1 *)((uint)*local_10 + param_19);
            }
            *local_14 = uVar5;
          }
          uVar8 = uVar8 >> 1;
          if (uVar8 == 0) {
            uVar8 = 0x80;
            local_c = local_c + 1;
          }
          if (local_18 + -2 < 1) break;
          if ((*local_c & (byte)uVar8) == 0) {
            uVar5 = uVar1;
            if (local_8[1] < param_5) {
              uVar5 = *(undefined1 *)((uint)local_10[1] + param_19);
            }
            local_14[1] = uVar5;
          }
          local_8 = local_8 + 2;
          local_14 = local_14 + 2;
          local_10 = local_10 + 2;
          uVar8 = uVar8 >> 1;
          if (uVar8 == 0) {
            uVar8 = 0x80;
            local_c = local_c + 1;
          }
          if ((local_18 + -4 < 1) || (local_18 = local_18 + -5, local_18 < 1)) break;
        }
      }
    }
LAB_0070009c:
    param_6 = pbVar13;
    iVar9 = (param_7 - param_8) - param_9;
    bVar7 = (byte)local_1c;
    if ((int)uVar3 < iVar9) {
      do {
        iVar9 = iVar9 - uVar3;
        pbVar13 = param_6;
        if (((byte)local_1c & 0xc0) == 0x80) {
          pbVar13 = param_6 + uVar3;
        }
        bVar7 = *pbVar13;
        local_1c = (uint)bVar7;
        param_6 = pbVar13 + 1;
        uVar3 = local_1c;
        if (((bVar7 & 0x80) != 0) && (uVar3 = local_1c & 0x3f, (bVar7 & 0x40) != 0)) {
          param_6 = pbVar13 + 2;
        }
      } while ((int)uVar3 < iVar9);
    }
    if ((bVar7 & 0xc0) == 0x80) {
      param_6 = param_6 + iVar9;
    }
LAB_007000f4:
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    param_17 = param_17 + param_18;
    pbVar6 = pbVar6 + param_14;
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      param_12 = 0;
    }
  } while( true );
}

