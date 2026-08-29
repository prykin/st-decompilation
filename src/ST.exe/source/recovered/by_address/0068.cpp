#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0068.cpp

// 00680040 FUN_00680040
#line 1 "decomp/ST.exe/functions/00680040/decomp.c"

void st::fn_00680040(void)

{
  st::fn_004032B0();
  st::fn_004010B4();
  st::fn_00402428();
  st::fn_004028A6();
  return;
}

// 00680070 FUN_00680070
#line 1 "decomp/ST.exe/functions/00680070/decomp.c"

void st::fn_00680070(void)

{
  st::fn_00404D4A();
  st::fn_0040491C();
  st::fn_00403319();
  st::fn_00404020();
  return;
}

// 006800A0 FUN_006800a0
#line 4 "decomp/ST.exe/functions/006800A0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=006829B0 @ 006829BF
   -> MOV MOV ESI,EAX */

int __cdecl st::fn_006800A0(byte *param_1)

{
  byte bVar1;
  dword dVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;


  iVar3 = st::fn_00404548(reinterpret_cast<char *>(param_1));
  if (-1 < iVar3) {
    return 5;
  }

  iVar3 = st::fn_004046FB(reinterpret_cast<char *>(param_1));
  if (-1 < iVar3) {
    return 6;
  }

  iVar3 = st::fn_00403EA9(reinterpret_cast<char *>(param_1));
  if (-1 < iVar3) {
    return 7;
  }

  iVar3 = st::fn_00403EC2(reinterpret_cast<char *>(param_1));
  if (-1 < iVar3) {
    return 8;
  }
  pcVar4 = st::fn_00403E36(param_1);
  if (pcVar4 != nullptr) {
    return 1;
  }
  iVar3 = 0;
  dVar2 = g_dArray_00848A2C->elementSize;
  if (0 < (int)dVar2) {
    do {
      pbVar6 = param_1;
      if (iVar3 < (int)dVar2) {
        pbVar7 = *(byte **)(g_dArray_00848A2C->growCapacity + iVar3 * 4);
      }
      else {
        pbVar7 = nullptr;
      }
      do {
        bVar1 = *pbVar6;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00680161:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00680166;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00680161;
        pbVar7 = pbVar7 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00680166:
      if (iVar5 == 0) {
        if (-1 < iVar3) {
          return 2;
        }
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)dVar2);
  }
  iVar3 = 0;
  dVar2 = g_dArray_00848A34->elementSize;
  if (0 < (int)dVar2) {
    do {
      pbVar6 = param_1;
      if (iVar3 < (int)dVar2) {
        pbVar7 = *(byte **)(g_dArray_00848A34->growCapacity + iVar3 * 4);
      }
      else {
        pbVar7 = nullptr;
      }
      do {
        bVar1 = *pbVar6;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_006801cd:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_006801d2;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_006801cd;
        pbVar7 = pbVar7 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_006801d2:
      if (iVar5 == 0) {
        if (-1 < iVar3) {
          return 3;
        }
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)dVar2);
  }

  iVar3 = st::fn_004056A5(param_1);
  return (iVar3 < 0) - 1 & 4;
}

// 00680270 FUN_00680270
#line 1 "decomp/ST.exe/functions/00680270/decomp.c"

void st::fn_00680270(LPCSTR param_1)

{
  st::fn_0072EA70(param_1,reinterpret_cast<char *>(&DAT_007d1d98));
  return;
}

// 00680310 FUN_00680310
#line 1 "decomp/ST.exe/functions/00680310/decomp.c"

void st::fn_00680310(void)

{
  DAT_007d3fa0 = 1;
  CHAR_00h_008489e0 = '\0';
  DAT_00848a00 = 0;
  DAT_00848a04 = 0;
  return;
}

// 00680340 FUN_00680340
#line 4 "decomp/ST.exe/functions/00680340/decomp.c"
void __cdecl st::fn_00680340(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;
  char *pcVar4_mg0;

  uVar2 = 0xffffffff;
  do {
    pcVar4_mg0 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4_mg0 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4_mg0;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4_mg0 + -uVar2;
  pcVar5 = &CHAR_00h_008489e0;
  memmove(pcVar5, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  DAT_00848a00 = param_3;
  DAT_00848a04 = param_2;
  DAT_007d3fa0 = param_4;
  return;
}

// 006803B0 FUN_006803b0
#line 4 "decomp/ST.exe/functions/006803B0/decomp.c"
undefined4 * __cdecl st::fn_006803B0(byte param_1)

{
  char cVar1;
  int iVar2;
  LPSTR pCVar3;
  int iVar4;
  uint uVar5;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  CHAR local_a8 [128];
  char local_28 [32];
  cMf32 *local_8;

  iVar2 = DAT_00848a04;
  if (DAT_00848a04 < 1) {
    if (-1 < DAT_00848a00) goto LAB_00680474;
  }
  else if (-1 < DAT_00848a00) {
    st::fn_0072DE60(DAT_00848a04,local_28,10);
    /* ST_CALLSITE[006803FB]: CALL ESI */
    st::external_00000080(reinterpret_cast<LPSTR>(local_a8),st::mutable_c_string("%s%s%s"),"%s%0",local_28,&DAT_007d5630);
    /* ST_CALLSITE[00680414]: CALL ESI */
    st::external_00000080((LPSTR)&DAT_008478ac,reinterpret_cast<char *>(local_a8),&CHAR_00h_008489e0,DAT_00848a00);
    DAT_00848a00 = DAT_00848a00 + DAT_007d3fa0;
    return &DAT_008478ac;
  }
  if (DAT_008489d0 != 0) {
    local_8 = st::pointer_boundary_cast<cMf32 *>(DAT_008489d0);
    iVar7 = 0;
    do {
      pCVar3 = st::fn_006F2C00(&CHAR_00h_008489e0,iVar2,iVar7);
      iVar4 = st::fn_006F21C0(local_8,param_1,reinterpret_cast<char *>(pCVar3));
      if (iVar4 != 0) {
        if (st::machine_word_boundary_cast<uint>(pCVar3) != st::machine_word_boundary_cast<uint>((LPSTR)0x0)) {
          uVar5 = 0xffffffff;
          goto code_r0x006804ae;
        }
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x7ffffff0);
  }
LAB_00680474:
  uVar5 = 0xffffffff;
  pcVar8 = &CHAR_00h_008489e0;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = reinterpret_cast<char *>(&DAT_008478ac);
  memmove(pcVar9, pcVar8, uVar5); /* compiler REP MOVS byte copy */
  return &DAT_008478ac;
  while( true ) {
    uVar5 = uVar5 - 1;
    pcVar8 = reinterpret_cast<char *>(pCVar3 + 1);
    cVar1 = *pCVar3;
    pCVar3 = reinterpret_cast<LPSTR>(pcVar8);
    if (cVar1 == '\0') break;
code_r0x006804ae:
    pcVar8 = reinterpret_cast<char *>(pCVar3);
    if (uVar5 == 0) break;
  }
  uVar5 = ~uVar5;
  pcVar8 = pcVar8 + -uVar5;
  pcVar9 = reinterpret_cast<char *>(&DAT_008478ac);
  memmove(pcVar9, pcVar8, uVar5); /* compiler REP MOVS byte copy */
  return &DAT_008478ac;
}

// 00680530 FUN_00680530
#line 1 "decomp/ST.exe/functions/00680530/decomp.c"

/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_00680530(void)

{
  DAT_00848a08 = 0;
  return;
}

// 00680550 FUN_00680550
#line 4 "decomp/ST.exe/functions/00680550/decomp.c"
void __cdecl st::fn_00680550(undefined1 param_1)

{
  DAT_00848a08 = param_1;
  return;
}

// 00680570 FUN_00680570
#line 1 "decomp/ST.exe/functions/00680570/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 00680570 returns used as parameter 6 of cMf32::RecPut @ 006808EB */

char st::fn_00680570(void)

{
  return DAT_00848a08;
}

// 00680590 FUN_00680590
#line 4 "decomp/ST.exe/functions/00680590/decomp.c"
undefined4 * __cdecl st::fn_00680590(byte *param_1)

{
  byte *_Drive;
  uint *puVar1;
  char *text;
  byte *pbVar2;
  CHAR local_404 [1024];


  puVar1 = st::fn_006F0EC0(0x345,param_1,0,0,0);
  _Drive = (byte *)((int)puVar1 + 0x231);
  pbVar2 = _Drive;
  text = st::fn_006B0140(7000,g_hINSTANCE_00807618);
  /* ST_CALLSITE[006805D4]: CALL dword ptr [0x0085bde8] */
  st::external_00000080(reinterpret_cast<LPSTR>(local_404),text,pbVar2);
  st::fn_004043FE(_Drive);
  st::fn_0040408E(reinterpret_cast<char *>(local_404));
  st::fn_00402310(_Drive);
  st::fn_00402F45(reinterpret_cast<char *>(local_404));
  DAT_00848a10 = 0;
  DAT_00848a0c = 0;
  return puVar1;
}

// 00680650 FUN_00680650
#line 4 "decomp/ST.exe/functions/00680650/decomp.c"
undefined4 * __cdecl st::fn_00680650(byte *param_1,uint param_2)

{
  byte *_Drive;
  uint *puVar1;
  char *text;
  byte *pbVar2;
  CHAR local_404 [1024];

  puVar1 = st::fn_006F0EC0(0x345,param_1,1,param_2,0);
  _Drive = (byte *)((int)puVar1 + 0x231);
  pbVar2 = _Drive;
  text = st::fn_006B0140(7000,g_hINSTANCE_00807618);
  /* ST_CALLSITE[00680696]: CALL dword ptr [0x0085bde8] */
  st::external_00000080(reinterpret_cast<LPSTR>(local_404),text,pbVar2);
  st::fn_004043FE(_Drive);
  st::fn_0040408E(reinterpret_cast<char *>(local_404));
  st::fn_00402310(_Drive);
  st::fn_00402F45(reinterpret_cast<char *>(local_404));
  DAT_00848a10 = 0;
  DAT_00848a0c = 0;
  return puVar1;
}

// 00680710 FUN_00680710
#line 4 "decomp/ST.exe/functions/00680710/decomp.c"
undefined4 * __cdecl st::fn_00680710(byte *param_1,uint param_2)

{
  byte *_Drive;
  uint *puVar1;
  char *text;
  byte *pbVar2;
  CHAR local_404 [1024];

  puVar1 = st::fn_006F0EC0(0x345,param_1,2,param_2,0);
  _Drive = (byte *)((int)puVar1 + 0x231);
  pbVar2 = _Drive;
  text = st::fn_006B0140(7000,g_hINSTANCE_00807618);
  /* ST_CALLSITE[00680756]: CALL dword ptr [0x0085bde8] */
  st::external_00000080(reinterpret_cast<LPSTR>(local_404),text,pbVar2);
  st::fn_004043FE(_Drive);
  st::fn_0040408E(reinterpret_cast<char *>(local_404));
  st::fn_00402310(_Drive);
  st::fn_00402F45(reinterpret_cast<char *>(local_404));
  DAT_00848a10 = 0;
  DAT_00848a0c = 0;
  return puVar1;
}

// 006807D0 FUN_006807d0
#line 4 "decomp/ST.exe/functions/006807D0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_006807D0(undefined4 *param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  CHAR local_404 [1024];

  st::fn_00405876();
  pcVar1 = st::fn_006B0140(0x1b59,g_hINSTANCE_00807618);
  st::fn_00402F45(pcVar1);
  uVar2 = DAT_00848a10;
  uVar3 = DAT_00848a0c;
  pcVar1 = st::fn_006B0140(0x1b5b,g_hINSTANCE_00807618);
  /* ST_CALLSITE[0068081E]: CALL dword ptr [0x0085bde8] */
  st::external_00000080(reinterpret_cast<LPSTR>(local_404),pcVar1,uVar2,uVar3);
  st::fn_00402F45(reinterpret_cast<char *>(local_404));
  st::fn_00402CB6();
  if ((cMf32 *)*param_1 != nullptr) {
    st::fn_006F1170((cMf32 *)*param_1);
  }
  *param_1 = 0;
  return;
}

// 006809B0 FUN_006809b0
#line 4 "decomp/ST.exe/functions/006809B0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_006809B0(byte *param_1,uint param_2)

{
  uint local_10;
  uint local_c;
  uint local_8;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  st::fn_00403346(0xc,param_1,param_2,&local_10);
  return;
}

// 00680B00 FUN_00680b00
#line 4 "decomp/ST.exe/functions/00680B00/decomp.c"
undefined4 st::fn_00680B00(void)

{
  if ((*(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14) == 1) &&
     ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14] == '\x02')) {
    return 1;
  }
  return 0;
}

// 00680B50 FUN_00680b50
#line 4 "decomp/ST.exe/functions/00680B50/decomp.c"
undefined4 st::fn_00680B50(void)

{
  if (((&DAT_00813bc8)[DAT_008488b0 * 0x2b14] != '\x02') &&
     ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14] != '\x04')) {
    return 0;
  }
  if ((int)(&DAT_00813bc4)[DAT_008488b0 * 0xac5] < 2) {
    (&DAT_00811c84)[DAT_008488b0 * 0xac5] = 0xffffffff;
  }
  else if ((&DAT_00813bc9)[DAT_008488b0 * 0x2b14] != '\x02') {
    return 0;
  }
  return 1;
}

// 00680BD0 FUN_00680bd0
#line 4 "decomp/ST.exe/functions/00680BD0/decomp.c"
undefined4 st::fn_00680BD0(void)

{
  if (((&DAT_00813bc8)[DAT_008488b0 * 0x2b14] != '\x02') &&
     ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14] != '\x04')) {
    return 0;
  }
  return 1;
}

// 00680C20 FUN_00680c20
#line 4 "decomp/ST.exe/functions/00680C20/decomp.c"
undefined4 st::fn_00680C20(void)

{
  if (*(int *)(&DAT_00811ae8 + DAT_008488b0 * 0x2b14) != 1) {
    return 0;
  }
  if (*(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14) < 1) {
    (&DAT_00811c80)[DAT_008488b0 * 0xac5] = 0;
  }
  return 1;
}

// 00680C70 FUN_00680c70
#line 4 "decomp/ST.exe/functions/00680C70/decomp.c"
undefined4 st::fn_00680C70(void)

{
  int iVar1;
  int iVar2;

  iVar1 = DAT_008488b0;
  iVar2 = DAT_008488b0 * 0x2b14;
  if (*(int *)(&DAT_00811ae8 + iVar2) != 1) {
    return 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 3) {
    (&DAT_00811c88)[DAT_008488b0 * 0xac5] = 1;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 2) {
    (&DAT_00811c84)[iVar1 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 1) {
    (&DAT_00811c80)[iVar1 * 0xac5] = 0;
  }
  return 1;
}

// 00680D00 FUN_00680d00
#line 1 "decomp/ST.exe/functions/00680D00/decomp.c"

/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00683C70 @ 0068559A
   -> TEST TEST EAX,EAX */

int st::fn_00680D00(void)

{
  return st::storage_bit_cast<uint>(static_cast<uint32_t>(*(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14) == 1));
}

// 00680D40 FUN_00680d40
#line 4 "decomp/ST.exe/functions/00680D40/decomp.c"
undefined4 st::fn_00680D40(void)

{
  int iVar1;
  char *pcVar2;

  iVar1 = DAT_008488b0;
  if ((0 < *(int *)(&DAT_00811ae8 + DAT_008488b0 * 0x2b14)) &&
     (0 < *(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14))) {
    if (*(int *)(&DAT_00811ae8 + DAT_008488b0 * 0x2b14) < 2) {
      pcVar2 = st::fn_00403E36(reinterpret_cast<byte *>(PTR_s___EMPTY___0079d734));
      (&PTR_00811af0)[iVar1 * 0xac5] = pcVar2;
    }
    if (*(int *)(&DAT_00811c7c + iVar1 * 0x2b14) < 2) {
      (&DAT_00811c84)[iVar1 * 0xac5] = 0xffffffff;
    }
    if ((0 < (int)(&DAT_00811c80)[iVar1 * 0xac5]) && ((int)(&DAT_00811c80)[iVar1 * 0xac5] < 4)) {
      return 1;
    }
  }
  return 0;
}

// 00680E00 FUN_00680e00
#line 4 "decomp/ST.exe/functions/00680E00/decomp.c"
undefined4 st::fn_00680E00(void)

{
  if (((0 < *(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14)) &&
      (-1 < (int)(&DAT_00811c80)[DAT_008488b0 * 0xac5])) &&
     ((int)(&DAT_00811c80)[DAT_008488b0 * 0xac5] < 3)) {
    return 1;
  }
  return 0;
}

// 00680E50 FUN_00680e50
#line 1 "decomp/ST.exe/functions/00680E50/decomp.c"

/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00683C70 @ 006858E2
   -> TEST TEST EAX,EAX */

int st::fn_00680E50(void)

{
  int iVar1;

  iVar1 = DAT_008488b0;
  if (*(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14) < 4) {
    return 0;
  }
  if (*(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14) < 5) {
    (&DAT_00811c90)[DAT_008488b0 * 0xac5] = 0;
  }
  if ((int)(&DAT_00811c84)[iVar1 * 0xac5] < 0) {
    return 0;
  }
  if ((int)(&DAT_00811c88)[iVar1 * 0xac5] < 0) {
    return 0;
  }
  return (uint)(-1 < (int)(&DAT_00811c8c)[iVar1 * 0xac5]);
}

// 00680EE0 FUN_00680ee0
#line 4 "decomp/ST.exe/functions/00680EE0/decomp.c"
undefined4 st::fn_00680EE0(void)

{
  int iVar1;

  iVar1 = DAT_008488b0;
  if ((*(int *)(&DAT_00811ae8 + DAT_008488b0 * 0x2b14) == 1) &&
     (0 < *(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14))) {
    if (*(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14) < 2) {
      (&DAT_00811c84)[DAT_008488b0 * 0xac5] = 10;
    }
    if ((0 < (int)(&DAT_00811c80)[iVar1 * 0xac5]) && ((int)(&DAT_00811c80)[iVar1 * 0xac5] < 4)) {
      if ((int)(&DAT_00811c84)[iVar1 * 0xac5] < 0) {
        (&DAT_00811c84)[iVar1 * 0xac5] = 0;
      }
      if (0x13 < (int)(&DAT_00811c84)[iVar1 * 0xac5]) {
        (&DAT_00811c84)[iVar1 * 0xac5] = 0x14;
      }
      return 1;
    }
  }
  return 0;
}

// 00680FA0 FUN_00680fa0
#line 4 "decomp/ST.exe/functions/00680FA0/decomp.c"
undefined4 st::fn_00680FA0(void)

{
  if (*(int *)(&DAT_00811ae8 + DAT_008488b0 * 0x2b14) != 1) {
    return 0;
  }
  if (*(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14) < 1) {
    (&DAT_00811c80)[DAT_008488b0 * 0xac5] = 1;
  }
  return 1;
}

// 00680FF0 FUN_00680ff0
#line 4 "decomp/ST.exe/functions/00680FF0/decomp.c"
undefined4 st::fn_00680FF0(void)

{
  char *pcVar1;

  if (*(int *)(&DAT_00811ae8 + DAT_008488b0 * 0x2b14) < 1) {
    pcVar1 = st::fn_00403E36(reinterpret_cast<byte *>(PTR_s___EMPTY___0079d734));
    (&PTR_00811aec)[DAT_008488b0 * 0xac5] = pcVar1;
  }
  return 1;
}

// 00681070 FUN_00681070
#line 4 "decomp/ST.exe/functions/00681070/decomp.c"
undefined4 st::fn_00681070(void)

{
  int iVar1;
  int iVar2;

  iVar1 = DAT_008488b0;
  iVar2 = DAT_008488b0 * 0x2b14;
  if ((*(int *)(&DAT_00811ae8 + iVar2) == 1) && (1 < *(int *)(&DAT_00811c7c + iVar2))) {
    if (*(int *)(&DAT_00811c7c + iVar2) < 3) {
      (&DAT_00811c88)[DAT_008488b0 * 0xac5] = 10;
    }
    if (*(int *)(&DAT_00811c7c + iVar2) < 4) {
      (&DAT_00811c8c)[iVar1 * 0xac5] = 8;
    }
    if ((0 < (int)(&DAT_00811c80)[iVar1 * 0xac5]) && ((int)(&DAT_00811c80)[iVar1 * 0xac5] < 4)) {
      if ((int)(&DAT_00811c88)[iVar1 * 0xac5] < 0) {
        (&DAT_00811c88)[iVar1 * 0xac5] = 0;
      }
      if (0x13 < (int)(&DAT_00811c88)[iVar1 * 0xac5]) {
        (&DAT_00811c88)[iVar1 * 0xac5] = 0x14;
      }
      return 1;
    }
  }
  return 0;
}

// 00681140 FUN_00681140
#line 4 "decomp/ST.exe/functions/00681140/decomp.c"
undefined4 st::fn_00681140(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;

  iVar1 = DAT_008488b0;
  iVar3 = DAT_008488b0 * 0x2b14;
  if (*(int *)(&DAT_00811c7c + iVar3) < 1) {
    return 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 2) {
    (&DAT_00811c84)[DAT_008488b0 * 0xac5] = 0xff;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 3) {
    (&DAT_00811c88)[iVar1 * 0xac5] = 0xff;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 4) {
    (&DAT_00811c8c)[iVar1 * 0xac5] = 0x19;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 5) {
    (&DAT_00811c90)[iVar1 * 0xac5] = 0xffffffff;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 6) {
    *(undefined4 *)(&DAT_00811c94 + iVar1 * 0x158a) = 0xffffffff;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 7) {
    *(undefined4 *)(&DAT_00811c98 + iVar1 * 0x158a) = 0xffffffff;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 8) {
    *(undefined4 *)(&DAT_00811c9c + iVar3) = 0xffffffff;
  }
  if (*(int *)(&DAT_00811ae8 + iVar3) < 1) {
    pcVar2 = st::fn_00403E36(reinterpret_cast<byte *>(PTR_s___EMPTY___0079d734));
    (&PTR_00811aec)[iVar1 * 0xac5] = pcVar2;
  }
  if ((int)(&DAT_00811c8c)[iVar1 * 0xac5] < 0) {
    (&DAT_00811c8c)[iVar1 * 0xac5] = 0;
  }
  if (0x31 < (int)(&DAT_00811c8c)[iVar1 * 0xac5]) {
    (&DAT_00811c8c)[iVar1 * 0xac5] = 0x32;
  }
  return 1;
}

// 00681280 FUN_00681280
#line 4 "decomp/ST.exe/functions/00681280/decomp.c"
undefined4 st::fn_00681280(void)

{
  if (((0 < *(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14)) &&
      (-1 < (int)(&DAT_00811c80)[DAT_008488b0 * 0xac5])) &&
     ((int)(&DAT_00811c80)[DAT_008488b0 * 0xac5] < 3)) {
    return 1;
  }
  return 0;
}

// 006812D0 FUN_006812d0
#line 4 "decomp/ST.exe/functions/006812D0/decomp.c"
undefined4 st::fn_006812D0(void)

{
  int iVar1;
  int iVar2;

  iVar1 = DAT_008488b0;
  iVar2 = DAT_008488b0 * 0x2b14;
  if (*(int *)(&DAT_00811c7c + iVar2) < 1) {
    (&DAT_00811c84)[DAT_008488b0 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 2) {
    (&DAT_00811c84)[iVar1 * 0xac5] = 0xffffffff;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 3) {
    (&DAT_00811c88)[iVar1 * 0xac5] = 0xffffffff;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 4) {
    (&DAT_00811c8c)[iVar1 * 0xac5] = 0xffffffff;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 5) {
    (&DAT_00811c90)[iVar1 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 6) {
    *(undefined4 *)(&DAT_00811c94 + iVar1 * 0x158a) = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 7) {
    *(undefined4 *)(&DAT_00811c98 + iVar1 * 0x158a) = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 8) {
    *(undefined4 *)(&DAT_00811c9c + iVar2) = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 9) {
    *(undefined4 *)(&DAT_00811ca0 + iVar1 * 0x158a) = 0;
  }
  if ((((-1 < (int)(&DAT_00811c80)[iVar1 * 0xac5]) && ((int)(&DAT_00811c80)[iVar1 * 0xac5] < 3)) &&
      (-1 < *(int *)(&DAT_00811c98 + iVar1 * 0x158a))) &&
     (((*(int *)(&DAT_00811c98 + iVar1 * 0x158a) < 6 && (-1 < *(int *)(&DAT_00811c9c + iVar2))) &&
      (*(int *)(&DAT_00811c9c + iVar2) < 10)))) {
    return 1;
  }
  return 0;
}

// 00681400 FUN_00681400
#line 4 "decomp/ST.exe/functions/00681400/decomp.c"
undefined4 st::fn_00681400(void)

{
  int iVar1;
  int iVar2;

  iVar1 = DAT_008488b0;
  iVar2 = DAT_008488b0 * 0x2b14;
  if (*(int *)(&DAT_00811c7c + iVar2) < 1) {
    (&DAT_00811c80)[DAT_008488b0 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 2) {
    (&DAT_00811c84)[iVar1 * 0xac5] = 0xdd;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 3) {
    (&DAT_00811c88)[iVar1 * 0xac5] = 0;
  }
  if ((-1 < (int)(&DAT_00811c80)[iVar1 * 0xac5]) && ((int)(&DAT_00811c80)[iVar1 * 0xac5] < 3)) {
    if ((int)(&DAT_00811c88)[iVar1 * 0xac5] < 0) {
      (&DAT_00811c88)[iVar1 * 0xac5] = 0;
    }
    return 1;
  }
  return 0;
}

// 006814A0 FUN_006814a0
#line 4 "decomp/ST.exe/functions/006814A0/decomp.c"
undefined4 st::fn_006814A0(void)

{
  int iVar1;
  int iVar2;

  iVar1 = DAT_008488b0;
  iVar2 = DAT_008488b0 * 0x2b14;
  if (*(int *)(&DAT_00811c7c + iVar2) < 1) {
    (&DAT_00811c80)[DAT_008488b0 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 2) {
    (&DAT_00811c84)[iVar1 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 3) {
    (&DAT_00811c88)[iVar1 * 0xac5] = 0;
  }
  if ((-1 < (int)(&DAT_00811c80)[iVar1 * 0xac5]) && ((int)(&DAT_00811c80)[iVar1 * 0xac5] < 3)) {
    if ((int)(&DAT_00811c88)[iVar1 * 0xac5] < 0) {
      (&DAT_00811c88)[iVar1 * 0xac5] = 0;
    }
    return 1;
  }
  return 0;
}

// 00681540 FUN_00681540
#line 4 "decomp/ST.exe/functions/00681540/decomp.c"
undefined4 st::fn_00681540(void)

{
  int iVar1;
  int iVar2;

  iVar1 = DAT_008488b0;
  iVar2 = DAT_008488b0 * 0x2b14;
  if (*(int *)(&DAT_00811c7c + iVar2) < 1) {
    (&DAT_00811c80)[DAT_008488b0 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 2) {
    (&DAT_00811c84)[iVar1 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 3) {
    (&DAT_00811c88)[iVar1 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 4) {
    (&DAT_00811c8c)[iVar1 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 5) {
    (&DAT_00811c90)[iVar1 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 6) {
    *(undefined4 *)(&DAT_00811c94 + iVar1 * 0x158a) = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 7) {
    *(undefined4 *)(&DAT_00811c98 + iVar1 * 0x158a) = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 8) {
    *(undefined4 *)(&DAT_00811c9c + iVar2) = 0;
  }
  if ((int)(&DAT_00811c80)[iVar1 * 0xac5] < 0) {
    (&DAT_00811c80)[iVar1 * 0xac5] = 0;
  }
  if ((int)(&DAT_00811c84)[iVar1 * 0xac5] < 0) {
    (&DAT_00811c84)[iVar1 * 0xac5] = 0;
  }
  if ((int)(&DAT_00811c88)[iVar1 * 0xac5] < 0) {
    (&DAT_00811c88)[iVar1 * 0xac5] = 0;
  }
  if ((((-1 < *(int *)(&DAT_00811c94 + iVar1 * 0x158a)) &&
       (*(int *)(&DAT_00811c94 + iVar1 * 0x158a) < 6)) &&
      (-1 < *(int *)(&DAT_00811c98 + iVar1 * 0x158a))) &&
     (*(int *)(&DAT_00811c98 + iVar1 * 0x158a) < 10)) {
    return 1;
  }
  return 0;
}

// 00681670 FUN_00681670
#line 4 "decomp/ST.exe/functions/00681670/decomp.c"
undefined4 st::fn_00681670(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;

  iVar1 = DAT_008488b0;
  uVar2 = 1;
  iVar3 = DAT_008488b0 * 0x2b14;
  if (*(int *)(&DAT_00811c7c + iVar3) < 1) {
    (&DAT_00811c80)[DAT_008488b0 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 2) {
    (&DAT_00811c84)[iVar1 * 0xac5] = 0x3fffffff;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 3) {
    (&DAT_00811c88)[iVar1 * 0xac5] = 1;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 4) {
    (&DAT_00811c8c)[iVar1 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 5) {
    (&DAT_00811c90)[iVar1 * 0xac5] = 1;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 6) {
    *(undefined4 *)(&DAT_00811c94 + iVar1 * 0x158a) = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 7) {
    *(undefined4 *)(&DAT_00811c98 + iVar1 * 0x158a) = 0;
  }
  if (((int)(&DAT_00811c80)[iVar1 * 0xac5] < 0) || (2 < (int)(&DAT_00811c80)[iVar1 * 0xac5])) {
    uVar2 = 0;
  }
  else {
    if ((int)(&DAT_00811c88)[iVar1 * 0xac5] < 0) {
      (&DAT_00811c88)[iVar1 * 0xac5] = 1;
    }
    if ((int)(&DAT_00811c8c)[iVar1 * 0xac5] < 0) {
      (&DAT_00811c8c)[iVar1 * 0xac5] = 0;
    }
    if ((int)(&DAT_00811c90)[iVar1 * 0xac5] < 0) {
      (&DAT_00811c90)[iVar1 * 0xac5] = 1;
    }
    if (*(int *)(&DAT_00811c94 + iVar1 * 0x158a) < 0) {
      *(undefined4 *)(&DAT_00811c94 + iVar1 * 0x158a) = 0;
    }
    if (*(int *)(&DAT_00811c98 + iVar1 * 0x158a) < 0) {
      *(undefined4 *)(&DAT_00811c98 + iVar1 * 0x158a) = 0;
      return uVar2;
    }
  }
  return uVar2;
}

// 006817A0 FUN_006817a0
#line 4 "decomp/ST.exe/functions/006817A0/decomp.c"
undefined4 st::fn_006817A0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;

  iVar1 = DAT_008488b0;
  uVar2 = 1;
  iVar3 = DAT_008488b0 * 0x2b14;
  if (*(int *)(&DAT_00811c7c + iVar3) < 1) {
    (&DAT_00811c80)[DAT_008488b0 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 2) {
    (&DAT_00811c84)[iVar1 * 0xac5] = 1;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 3) {
    (&DAT_00811c88)[iVar1 * 0xac5] = 1;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 4) {
    (&DAT_00811c8c)[iVar1 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 5) {
    (&DAT_00811c90)[iVar1 * 0xac5] = 1;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 6) {
    *(undefined4 *)(&DAT_00811c94 + iVar1 * 0x158a) = 0;
  }
  if (((int)(&DAT_00811c80)[iVar1 * 0xac5] < 0) || (2 < (int)(&DAT_00811c80)[iVar1 * 0xac5])) {
    uVar2 = 0;
  }
  else {
    if ((int)(&DAT_00811c88)[iVar1 * 0xac5] < 0) {
      (&DAT_00811c88)[iVar1 * 0xac5] = 1;
    }
    if ((int)(&DAT_00811c8c)[iVar1 * 0xac5] < 0) {
      (&DAT_00811c8c)[iVar1 * 0xac5] = 0;
    }
    if ((int)(&DAT_00811c90)[iVar1 * 0xac5] < 0) {
      (&DAT_00811c90)[iVar1 * 0xac5] = 1;
    }
    if (*(int *)(&DAT_00811c94 + iVar1 * 0x158a) < 0) {
      *(undefined4 *)(&DAT_00811c94 + iVar1 * 0x158a) = 0;
      return uVar2;
    }
  }
  return uVar2;
}

// 006818B0 FUN_006818b0
#line 4 "decomp/ST.exe/functions/006818B0/decomp.c"
undefined4 st::fn_006818B0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;

  iVar1 = DAT_008488b0;
  uVar2 = 1;
  iVar3 = DAT_008488b0 * 0x2b14;
  if (*(int *)(&DAT_00811c7c + iVar3) < 1) {
    (&DAT_00811c80)[DAT_008488b0 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 2) {
    (&DAT_00811c84)[iVar1 * 0xac5] = 0x3fffffff;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 3) {
    (&DAT_00811c88)[iVar1 * 0xac5] = 1;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 4) {
    (&DAT_00811c8c)[iVar1 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 5) {
    (&DAT_00811c90)[iVar1 * 0xac5] = 0;
  }
  if (((int)(&DAT_00811c80)[iVar1 * 0xac5] < 0) || (2 < (int)(&DAT_00811c80)[iVar1 * 0xac5])) {
    uVar2 = 0;
  }
  else {
    if ((int)(&DAT_00811c88)[iVar1 * 0xac5] < 0) {
      (&DAT_00811c88)[iVar1 * 0xac5] = 1;
    }
    if ((int)(&DAT_00811c8c)[iVar1 * 0xac5] < 0) {
      (&DAT_00811c8c)[iVar1 * 0xac5] = 0;
    }
    if ((int)(&DAT_00811c90)[iVar1 * 0xac5] < 0) {
      (&DAT_00811c90)[iVar1 * 0xac5] = 0;
      return uVar2;
    }
  }
  return uVar2;
}

// 006819A0 FUN_006819a0
#line 4 "decomp/ST.exe/functions/006819A0/decomp.c"
undefined4 st::fn_006819A0(void)

{
  int iVar1;
  int iVar2;

  iVar1 = DAT_008488b0;
  iVar2 = DAT_008488b0 * 0x2b14;
  if (*(int *)(&DAT_00811c7c + iVar2) < 1) {
    (&DAT_00811c80)[DAT_008488b0 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 2) {
    (&DAT_00811c84)[iVar1 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 3) {
    (&DAT_00811c88)[iVar1 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 4) {
    (&DAT_00811c8c)[iVar1 * 0xac5] = 7;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 5) {
    (&DAT_00811c90)[iVar1 * 0xac5] = 7;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 6) {
    *(undefined4 *)(&DAT_00811c94 + iVar1 * 0x158a) = 5;
  }
  if ((int)(&DAT_00811c80)[iVar1 * 0xac5] < 0) {
    (&DAT_00811c80)[iVar1 * 0xac5] = 0;
  }
  if ((int)(&DAT_00811c84)[iVar1 * 0xac5] < 0) {
    (&DAT_00811c84)[iVar1 * 0xac5] = 0;
  }
  if ((int)(&DAT_00811c88)[iVar1 * 0xac5] < 0) {
    (&DAT_00811c88)[iVar1 * 0xac5] = 0;
  }
  if ((int)(&DAT_00811c8c)[iVar1 * 0xac5] < 1) {
    (&DAT_00811c8c)[iVar1 * 0xac5] = 7;
  }
  if ((int)(&DAT_00811c90)[iVar1 * 0xac5] < 1) {
    (&DAT_00811c90)[iVar1 * 0xac5] = 7;
  }
  if (*(int *)(&DAT_00811c94 + iVar1 * 0x158a) < 1) {
    *(undefined4 *)(&DAT_00811c94 + iVar1 * 0x158a) = 5;
  }
  return 1;
}

// 00681AD0 FUN_00681ad0
#line 4 "decomp/ST.exe/functions/00681AD0/decomp.c"
undefined4 st::fn_00681AD0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;

  iVar1 = DAT_008488b0;
  uVar2 = 1;
  iVar3 = DAT_008488b0 * 0x2b14;
  if (*(int *)(&DAT_00811c7c + iVar3) < 1) {
    (&DAT_00811c80)[DAT_008488b0 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 2) {
    (&DAT_00811c84)[iVar1 * 0xac5] = 0x32;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 3) {
    (&DAT_00811c88)[iVar1 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 4) {
    (&DAT_00811c8c)[iVar1 * 0xac5] = 1;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 5) {
    (&DAT_00811c90)[iVar1 * 0xac5] = 0x3fffffff;
  }
  if (((int)(&DAT_00811c80)[iVar1 * 0xac5] < 0) || (2 < (int)(&DAT_00811c80)[iVar1 * 0xac5])) {
    uVar2 = 0;
  }
  else if (99 < (int)(&DAT_00811c84)[iVar1 * 0xac5]) {
    (&DAT_00811c84)[iVar1 * 0xac5] = 99;
    return uVar2;
  }
  return uVar2;
}

// 00681BB0 FUN_00681bb0
#line 4 "decomp/ST.exe/functions/00681BB0/decomp.c"
undefined4 st::fn_00681BB0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;

  iVar1 = DAT_008488b0;
  uVar2 = 1;
  iVar3 = DAT_008488b0 * 0x2b14;
  if (*(int *)(&DAT_00811c7c + iVar3) < 1) {
    (&DAT_00811c80)[DAT_008488b0 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 2) {
    (&DAT_00811c84)[iVar1 * 0xac5] = 0x3fffffff;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 3) {
    (&DAT_00811c88)[iVar1 * 0xac5] = 1;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 4) {
    (&DAT_00811c8c)[iVar1 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 5) {
    (&DAT_00811c90)[iVar1 * 0xac5] = 0;
  }
  if (((int)(&DAT_00811c80)[iVar1 * 0xac5] < 0) || (2 < (int)(&DAT_00811c80)[iVar1 * 0xac5])) {
    uVar2 = 0;
  }
  else {
    if ((int)(&DAT_00811c88)[iVar1 * 0xac5] < 0) {
      (&DAT_00811c88)[iVar1 * 0xac5] = 1;
    }
    if ((int)(&DAT_00811c8c)[iVar1 * 0xac5] < 0) {
      (&DAT_00811c8c)[iVar1 * 0xac5] = 0;
    }
    if (*(int *)(&DAT_00811c94 + iVar1 * 0x158a) < 0) {
      *(undefined4 *)(&DAT_00811c94 + iVar1 * 0x158a) = 0;
      return uVar2;
    }
  }
  return uVar2;
}

// 00681CA0 FUN_00681ca0
#line 4 "decomp/ST.exe/functions/00681CA0/decomp.c"
undefined4 st::fn_00681CA0(void)

{
  int iVar1;
  int iVar2;

  iVar1 = DAT_008488b0;
  iVar2 = DAT_008488b0 * 0x2b14;
  if (*(int *)(&DAT_00811c7c + iVar2) < 1) {
    (&DAT_00811c80)[DAT_008488b0 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 2) {
    (&DAT_00811c84)[iVar1 * 0xac5] = 0x3fffffff;
  }
  if ((-1 < (int)(&DAT_00811c80)[iVar1 * 0xac5]) && ((int)(&DAT_00811c80)[iVar1 * 0xac5] < 3)) {
    return 1;
  }
  return 0;
}

// 00681D20 FUN_00681d20
#line 4 "decomp/ST.exe/functions/00681D20/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00683C70 @ 00687348
   -> TEST TEST EAX,EAX */

int st::fn_00681D20(void)

{
  int iVar1;
  int iVar2;

  iVar1 = DAT_008488b0;
  iVar2 = DAT_008488b0 * 0x2b14;
  if (0 < *(int *)(&DAT_00811ae8 + iVar2)) {
    if (*(int *)(&DAT_00811c7c + iVar2) < 1) {
      (&DAT_00811c80)[DAT_008488b0 * 0xac5] = 0;
    }
    if (*(int *)(&DAT_00811c7c + iVar2) < 2) {
      (&DAT_00811c84)[iVar1 * 0xac5] = 2;
    }
    if (*(int *)(&DAT_00811c7c + iVar2) < 3) {
      (&DAT_00811c88)[iVar1 * 0xac5] = 0;
    }
    if (*(int *)(&DAT_00811c7c + iVar2) < 4) {
      (&DAT_00811c8c)[iVar1 * 0xac5] = 0;
    }
    if (*(int *)(&DAT_00811c7c + iVar2) < 5) {
      (&DAT_00811c90)[iVar1 * 0xac5] = 0;
    }
    if (*(int *)(&DAT_00811c7c + iVar2) < 6) {
      *(undefined4 *)(&DAT_00811c94 + iVar1 * 0x158a) = 800;
    }
    if (*(int *)(&DAT_00811c7c + iVar2) < 7) {
      *(undefined4 *)(&DAT_00811c98 + iVar1 * 0x158a) = 600;
    }
    if (*(int *)(&DAT_00811c7c + iVar2) < 8) {
      *(undefined4 *)(&DAT_00811c9c + iVar2) = 0;
    }
    if ((((-1 < (int)(&DAT_00811c80)[iVar1 * 0xac5]) && ((int)(&DAT_00811c80)[iVar1 * 0xac5] < 2))
        && (-1 < (int)(&DAT_00811c84)[iVar1 * 0xac5])) &&
       ((((int)(&DAT_00811c84)[iVar1 * 0xac5] < 3 && (-1 < (int)(&DAT_00811c88)[iVar1 * 0xac5])) &&
        (((int)(&DAT_00811c88)[iVar1 * 0xac5] < 3 && (0 < *(int *)(&DAT_00811c94 + iVar1 * 0x158a)))
        )))) {
      return (uint)(0 < *(int *)(&DAT_00811c98 + iVar1 * 0x158a));
    }
  }
  return 0;
}

// 00681E60 FUN_00681e60
#line 4 "decomp/ST.exe/functions/00681E60/decomp.c"
undefined4 st::fn_00681E60(void)

{
  if (((((1 < *(int *)(&DAT_00811ae8 + DAT_008488b0 * 0x2b14)) &&
        (3 < *(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14))) &&
       (-1 < (int)(&DAT_00811c80)[DAT_008488b0 * 0xac5])) &&
      (((int)(&DAT_00811c80)[DAT_008488b0 * 0xac5] < 0x100 &&
       (-1 < (int)(&DAT_00811c88)[DAT_008488b0 * 0xac5])))) &&
     (((int)(&DAT_00811c88)[DAT_008488b0 * 0xac5] < 0x100 &&
      ((-1 < (int)(&DAT_00811c8c)[DAT_008488b0 * 0xac5] &&
       ((int)(&DAT_00811c8c)[DAT_008488b0 * 0xac5] < 0x100)))))) {
    return 1;
  }
  return 0;
}

// 00681EF0 FUN_00681ef0
#line 4 "decomp/ST.exe/functions/00681EF0/decomp.c"
undefined4 st::fn_00681EF0(void)

{
  return 1;
}

// 00681F10 FUN_00681f10
#line 1 "decomp/ST.exe/functions/00681F10/decomp.c"

/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00683C70 @ 00685000
   -> TEST TEST EAX,EAX */

int st::fn_00681F10(void)

{
  return (uint)(0 < *(int *)(&DAT_00811ae8 + DAT_008488b0 * 0x2b14));
}

// 00681F50 FUN_00681f50
#line 1 "decomp/ST.exe/functions/00681F50/decomp.c"

/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00683C70 @ 006876C1 -> read as EAX on
   every CFG path | 00683C70 @ 00687714 -> read as EAX on every CFG path */

int st::fn_00681F50(void)

{
  return 1;
}

// 00681F70 FUN_00681f70
#line 4 "decomp/ST.exe/functions/00681F70/decomp.c"
/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=3, ignored=0,
   unknown=0 */

int __cdecl st::fn_00681F70(int param_1)

{
  int iVar1;

  iVar1 = 0;
  if (0 < param_1) {
    do {
      if (((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + iVar1] != '\x02') &&
         ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + iVar1] != '\x04')) {
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1);
  }
  return 1;
}

// 00681FE0 FUN_00681fe0
#line 4 "decomp/ST.exe/functions/00681FE0/decomp.c"
/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=2, ignored=0,
   unknown=0 */

int __cdecl st::fn_00681FE0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  if (0 < param_1) {
    do {
      if (((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + iVar1] != '\x01') &&
         ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + iVar1] != '\x04')) {
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1);
  }
  return 1;
}

// 00682050 FUN_00682050
#line 4 "decomp/ST.exe/functions/00682050/decomp.c"
/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=6, ignored=0,
   unknown=0 */

int __cdecl st::fn_00682050(int param_1,int param_2)

{
  int iVar1;

  iVar1 = 0;
  if (0 < param_1) {
    do {
      if (((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + iVar1] != '\x02') &&
         ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + iVar1] != '\x04')) {
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1);
  }
  iVar1 = param_1 + param_2;
  while( true ) {
    if (iVar1 <= param_1) {
      return 1;
    }
    if (((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + param_1] != '\x01') &&
       ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + param_1] != '\x04')) break;
    param_1 = param_1 + 1;
  }
  return 0;
}

// 006820F0 FUN_006820f0
#line 4 "decomp/ST.exe/functions/006820F0/decomp.c"
undefined4 __cdecl st::fn_006820F0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;
  if (0 < param_1) {
    do {
      if (((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + iVar2] != '\x02') &&
         ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + iVar2] != '\x04')) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  iVar2 = param_2 + param_1;
  while( true ) {
    if (iVar2 <= param_1) {
      iVar1 = iVar2 + param_3;
      while( true ) {
        if (iVar1 <= iVar2) {
          return 1;
        }
        if (((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + iVar2] != '\x02') &&
           ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + iVar2] != '\x04')) break;
        iVar2 = iVar2 + 1;
      }
      return 0;
    }
    if (((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + param_1] != '\x01') &&
       ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + param_1] != '\x04')) break;
    param_1 = param_1 + 1;
  }
  return 0;
}

// 006821D0 FUN_006821d0
#line 4 "decomp/ST.exe/functions/006821D0/decomp.c"
undefined4 __cdecl st::fn_006821D0(int param_1,int param_2)

{
  int iVar1;

  iVar1 = 0;
  if (0 < param_1) {
    do {
      if (((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + iVar1] != '\x01') &&
         ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + iVar1] != '\x04')) {
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1);
  }
  iVar1 = param_1 + param_2;
  while( true ) {
    if (iVar1 <= param_1) {
      return 1;
    }
    if (((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + param_1] != '\x02') &&
       ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + param_1] != '\x04')) break;
    param_1 = param_1 + 1;
  }
  return 0;
}

// 00682290 FUN_00682290
#line 1 "decomp/ST.exe/functions/00682290/decomp.c"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007A411C>00682270 */

void st::fn_00682290(void)

{
  _DAT_00847820 = st::machine_word_boundary_cast<undefined4>(&st_global_0079D75C);
  DAT_00847824 = 0;
  _DAT_008478a4 = 0;
  return;
}

// 006822C0 FUN_006822c0
#line 1 "decomp/ST.exe/functions/006822C0/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 006822C0 returns return of FUN_0067f4b0 @ 006822E0 */

int st::fn_006822C0(char *param_1)

{
  int iVar1;

  if (*param_1 == '\x01') {
    return *(int *)(param_1 + 1);
  }

  iVar1 = st::fn_00402C11((int)*(short *)(param_1 + 1));
  return iVar1;
}

// 00682300 FUN_00682300
#line 4 "decomp/ST.exe/functions/00682300/decomp.c"
float10 st::fn_00682300(char *param_1)

{
  float10 fVar1;

  if (*param_1 == '\x02') {
    return (float10)*(float *)(param_1 + 1);
  }
  fVar1 = st::fn_0040465B((int)*(short *)(param_1 + 1));
  return fVar1;
}

// 00682340 FUN_00682340
#line 1 "decomp/ST.exe/functions/00682340/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 00682340 returns return of FUN_0067ee40 @ 00682354 */

int st::fn_00682340(RecoveredRecord_00682340_3ED6F00B *param_1)

{
  int iVar1;


  iVar1 = st::fn_0040353A((int)param_1->field_0001);
  return iVar1;
}

// 00682370 FUN_00682370
#line 4 "decomp/ST.exe/functions/00682370/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=15, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl st::fn_00682370(undefined4 *param_1)

{
  if (g_anonShape_00683780_11EA4E23_00848A14 != nullptr) {

    st::fn_00402149(reinterpret_cast<int *>(g_anonShape_00683780_11EA4E23_00848A14),param_1);
  }
  return;
}

// 006823A0 FUN_006823a0
#line 4 "decomp/ST.exe/functions/006823A0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006823E0 -> 006823A0 @ 006823FE; FUN_006823e0 parameter param_1 */

void __cdecl st::fn_006823A0(short param_1,undefined2 param_2)

{
  byte local_c;
  short local_b;
  ushort local_9;
  local_c = 7;
  local_b = param_1;
  local_9 = param_2;
  st::fn_00401014(reinterpret_cast<undefined4 *>(&local_c));
  return;
}

// 006826A0 FUN_006826a0
#line 4 "decomp/ST.exe/functions/006826A0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl st::fn_006826A0(int param_1)

{
  char *pcVar1;

  if (param_1 == 0x1c) {
    pcVar1 = st::fn_006B0140(0x1b5e,g_hINSTANCE_00807618);
    st::fn_00405411(-0x6d,pcVar1);
    return;
  }
  if (param_1 != 0x1d) {
    pcVar1 = st::fn_004057DB(param_1);
    st::fn_00405411(-0x6d,pcVar1);
    return;
  }
  pcVar1 = st::fn_006B0140(0x1b5d,g_hINSTANCE_00807618);
  st::fn_00405411(-0x6d,pcVar1);
  return;
}

// 00682720 FUN_00682720
#line 4 "decomp/ST.exe/functions/00682720/decomp.c"
void __cdecl st::fn_00682720(int param_1)

{
  char *pcVar1;

  if (param_1 == 0x1c) {
    pcVar1 = st::fn_006B0140(0x1b5e,g_hINSTANCE_00807618);
    st::fn_00405411(-0x70,pcVar1);
    return;
  }
  if (param_1 != 0x1d) {
    pcVar1 = st::fn_004057DB(param_1);
    st::fn_00405411(-0x70,pcVar1);
    return;
  }
  pcVar1 = st::fn_006B0140(0x1b5d,g_hINSTANCE_00807618);
  st::fn_00405411(-0x70,pcVar1);
  return;
}

// 00682810 FUN_00682810
#line 4 "decomp/ST.exe/functions/00682810/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=22, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl st::fn_00682810(int param_1)

{
  if (DAT_007d2d18 == param_1) {
    st::fn_00402469();
    return;
  }
  st::fn_00402F59(DAT_007d2d18);
  return;
}

// 006829B0 FUN_006829b0
#line 4 "decomp/ST.exe/functions/006829B0/decomp.c"
void st::fn_006829B0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  byte local_c;
  float local_b;


  iVar1 = st::fn_004018FC(reinterpret_cast<byte *>(PTR_00857528));
  if (iVar1 == 0) {
    if (DAT_007d3fa4 != 0) {
      st::fn_00405411(-0x73,PTR_00857528);
    }

    iVar2 = st::fn_00405A10(reinterpret_cast<byte *>(PTR_00857528));
    if (iVar2 < 0) {
      st::fn_00405411(-0x73,PTR_00857528);
    }
    else {
      iVar1 = 2;
    }
  }
  switch(iVar1) {
  case 1:
    local_c = 6;

    iVar1 = st::fn_00405CB8(reinterpret_cast<byte *>(PTR_00857528));
    local_b = (float)STReplaceLowWord((uint32_t)(local_b), (uint16_t)((short)iVar1));
    st::fn_00401014(reinterpret_cast<undefined4 *>(&local_c));
    st::fn_00402469();
    return;
  case 2:
    local_c = 1;

    local_b = (float)st::fn_00404075(reinterpret_cast<byte *>(PTR_00857528));
    st::fn_00401014(reinterpret_cast<undefined4 *>(&local_c));
    st::fn_00402469();
    return;
  case 3:
    local_c = 2;
    fVar4 = st::fn_0040124E(reinterpret_cast<byte *>(PTR_00857528));
    local_b = (float)fVar4;
    st::fn_00401014(reinterpret_cast<undefined4 *>(&local_c));
    st::fn_00402469();
    return;
  case 4:

    iVar1 = st::fn_00405196(reinterpret_cast<byte *>(PTR_00857528));
    if (iVar1 == 0) {
      st::fn_00405411(-0x73,PTR_00857528);
    }
    iVar2 = 0;
    if (0 < STField<int>(iVar1,0x4)) {
      iVar3 = 0;
      do {
        st::fn_00401014((undefined4 *)(STField<int>(iVar1,0x8) + iVar3));
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 5;
      } while (iVar2 < STField<int>(iVar1,0x4));
      st::fn_00402469();
      return;
    }
    break;
  case 5:
    local_c = 1;
    local_b = 1.26117e-44;
    st::fn_00401014(reinterpret_cast<undefined4 *>(&local_c));
    local_c = 1;

    local_b = (float)st::fn_00404548(PTR_00857528);
    st::fn_00401014(reinterpret_cast<undefined4 *>(&local_c));
    st::fn_0040308F(0x7d1,2);
    st::fn_00402469();
    return;
  case 6:
    local_c = 1;

    local_b = (float)st::fn_004046FB(PTR_00857528);
    st::fn_00401014(reinterpret_cast<undefined4 *>(&local_c));
    st::fn_0040308F(0x7d2,1);
    st::fn_00402469();
    return;
  case 7:
    local_c = 1;

    local_b = (float)st::fn_00403EA9(PTR_00857528);
    st::fn_00401014(reinterpret_cast<undefined4 *>(&local_c));
    st::fn_0040308F(0x7d4,1);
    st::fn_00402469();
    return;
  case 8:
    local_c = 1;

    local_b = (float)st::fn_00403EC2(PTR_00857528);
    st::fn_00401014(reinterpret_cast<undefined4 *>(&local_c));
    st::fn_0040308F(0x7d5,1);
    st::fn_00402469();
    return;
  default:
    st::fn_00405411(-0x73,PTR_00857528);
  }
  st::fn_00402469();
  return;
}

// 00682CF0 FUN_00682cf0
#line 4 "decomp/ST.exe/functions/00682CF0/decomp.c"
void st::fn_00682CF0(void)

{
  byte local_c;
  char *local_b;

  local_c = 1;
  local_b = PTR_00857548;
  st::fn_00401014(reinterpret_cast<undefined4 *>(&local_c));
  st::fn_00402469();
  return;
}

// 00682D30 FUN_00682d30
#line 4 "decomp/ST.exe/functions/00682D30/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_00682D30(void)

{
  byte local_c;
  float local_b;

  local_b = st::storage_bit_cast<float>(_PTR_00857548);
  local_c = 2;
  st::fn_00401014(reinterpret_cast<undefined4 *>(&local_c));
  st::fn_00402469();
  return;
}

// 00682DF0 FUN_00682df0
#line 1 "decomp/ST.exe/functions/00682DF0/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=0,
   ignored=3, unknown=1 */

void st::fn_00682DF0(void)

{
  int iVar1;

  switch(DAT_007d2d18) {
  case 0x22:
    st::fn_004049C1();
    return;
  case 0x25:
    st::fn_00404DB3();
    return;
  case 0x29:
    st::fn_004052BD(0x29);
    st::fn_00404E26();
    st::fn_004052BD(0x39);
    return;
  case 0x37:
    st::fn_00403BD9();
    return;
  case 0x3c:
    st::fn_0040262B();
    return;
  }

  iVar1 = st::fn_004038AF(DAT_007d2d18);
  if (-1 < iVar1) {
    st::fn_00404237();
    return;
  }
  st::fn_004059DE(DAT_007d2d18);
  return;
}

// 00682EC0 FUN_00682ec0
#line 1 "decomp/ST.exe/functions/00682EC0/decomp.c"

void st::fn_00682EC0(void)

{
  bool bVar1;
  int iVar2;

  iVar2 = DAT_007d2d18;
  bVar1 = false;
  switch(DAT_007d2d18) {
  case 1:
    bVar1 = false;
    break;
  default:
    goto switchD_00682eda_caseD_2;
  case 9:
  case 0x32:
  case 0x3d:
    bVar1 = true;
  }
  st::fn_00402469();
switchD_00682eda_caseD_2:
  st::fn_00405376();
  if (bVar1) {
    if (iVar2 == 9) {
      st::fn_00405C6D(9,(float *)0x1);
    }
    else {
      if (iVar2 == 0x32) {
        st::fn_00405C6D(0x32,(float *)0x1);
        return;
      }
      if (iVar2 == 0x3d) {
        st::fn_00405C6D(0x41,(float *)0x1);
        return;
      }
    }
  }
  return;
}

// 00682FB0 FUN_00682fb0
#line 4 "decomp/ST.exe/functions/00682FB0/decomp.c"
/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=2, ignored=0,
   unknown=0 */

int __cdecl st::fn_00682FB0(int param_1)

{
  if (((param_1 != 0x30) && (param_1 != 0x16)) && (param_1 != 0x2c)) {
    return 0;
  }
  return 1;
}

// 00682FE0 FUN_00682fe0
#line 1 "decomp/ST.exe/functions/00682FE0/decomp.c"

void st::fn_00682FE0(void)

{
  st::fn_004052BD(0x30);
  st::fn_00405376();
  st::fn_00405C6D(0x30,(float *)0x2);
  return;
}

// 00683010 FUN_00683010
#line 1 "decomp/ST.exe/functions/00683010/decomp.c"

void st::fn_00683010(void)

{
  st::fn_004052BD(0x16);
  st::fn_00405376();
  st::fn_00405C6D(0x16,(float *)0x2);
  return;
}

// 00683040 FUN_00683040
#line 1 "decomp/ST.exe/functions/00683040/decomp.c"

void st::fn_00683040(void)

{
  st::fn_004052BD(0x2c);
  st::fn_00405376();
  st::fn_00405C6D(0x2c,(float *)0x2);
  return;
}

// 00683070 FUN_00683070
#line 1 "decomp/ST.exe/functions/00683070/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void st::fn_00683070(void)

{
  int iVar1;

  st::fn_00404485();
  iVar1 = st::fn_004018AC(DAT_007d2d18);
  while (iVar1 != 0) {
    if (DAT_007d2d18 == 0x16) {
      st::fn_00403715();
    }
    else if (DAT_007d2d18 == 0x2c) {
      st::fn_004047F5();
    }
    else if (DAT_007d2d18 == 0x30) {
      st::fn_00404B06();
    }
    iVar1 = st::fn_004018AC(DAT_007d2d18);
  }
  return;
}

// 006830F0 FUN_006830f0
#line 4 "decomp/ST.exe/functions/006830F0/decomp.c"
/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=2, ignored=0,
   unknown=0 */

int __cdecl st::fn_006830F0(int param_1)

{
  if ((param_1 != 1) && (param_1 != 0x3d)) {
    return 0;
  }
  return 1;
}

// 00683120 FUN_00683120
#line 1 "decomp/ST.exe/functions/00683120/decomp.c"

void st::fn_00683120(void)

{
  st::fn_004052BD(1);
  st::fn_004028A1();
  st::fn_00405C6D(1,(float *)0x2);
  return;
}

// 00683150 FUN_00683150
#line 1 "decomp/ST.exe/functions/00683150/decomp.c"

void st::fn_00683150(void)

{
  st::fn_004052BD(0x3d);
  st::fn_004028A1();
  st::fn_00405C6D(0x3d,(float *)0x2);
  return;
}

// 00683180 FUN_00683180
#line 1 "decomp/ST.exe/functions/00683180/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void st::fn_00683180(void)

{
  int iVar1;

  st::fn_004028A1();
  iVar1 = st::fn_004042D7(DAT_007d2d18);
  while (iVar1 != 0) {
    if (DAT_007d2d18 == 1) {
      st::fn_004043E5();
    }
    else if (DAT_007d2d18 == 0x3d) {
      st::fn_004036E8();
    }
    iVar1 = st::fn_004042D7(DAT_007d2d18);
  }
  return;
}

// 006831F0 FUN_006831f0
#line 1 "decomp/ST.exe/functions/006831F0/decomp.c"

void st::fn_006831F0(void)

{
  st::fn_004052BD(0x1e);
  st::fn_00401366();
  st::fn_00405C6D(0x1e,(float *)0x2);
  return;
}

// 00683220 FUN_00683220
#line 1 "decomp/ST.exe/functions/00683220/decomp.c"

void st::fn_00683220(void)

{
  st::fn_004052BD(0x2e);
  st::fn_00401366();
  st::fn_00405C6D(0x2e,(float *)0x2);
  return;
}

// 00683250 FUN_00683250
#line 1 "decomp/ST.exe/functions/00683250/decomp.c"

void st::fn_00683250(void)

{
  st::fn_004052BD(0x2f);
  st::fn_00401366();
  st::fn_00405C6D(0x2f,(float *)0x2);
  return;
}

// 00683280 FUN_00683280
#line 1 "decomp/ST.exe/functions/00683280/decomp.c"

void st::fn_00683280(void)

{
  st::fn_004052BD(0x27);
  st::fn_00401366();
  st::fn_00405C6D(0x27,(float *)0x2);
  return;
}

// 006832B0 FUN_006832b0
#line 1 "decomp/ST.exe/functions/006832B0/decomp.c"

void st::fn_006832B0(void)

{
  st::fn_004052BD(0x28);
  st::fn_00401366();
  st::fn_00405C6D(0x28,(float *)0x2);
  return;
}

// 006832E0 FUN_006832e0
#line 1 "decomp/ST.exe/functions/006832E0/decomp.c"

void st::fn_006832E0(void)

{
  st::fn_004052BD(0x33);
  st::fn_00401366();
  st::fn_00405C6D(0x33,(float *)0x2);
  return;
}

// 00683310 FUN_00683310
#line 1 "decomp/ST.exe/functions/00683310/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_00683310(void)

{
  st::fn_00401366();
  switch(DAT_007d2d18) {
  case 0x1e:
    st::fn_00402C5C();
    return;
  default:
    return;
  case 0x27:
    st::fn_00401069();
    return;
  case 0x28:
    st::fn_00404F43();
    return;
  case 0x2e:
    st::fn_004041EC();
    return;
  case 0x2f:
    st::fn_004015CD();
    return;
  case 0x33:
    st::fn_004016CC();
    return;
  }
}

// 006833B0 FUN_006833b0
#line 1 "decomp/ST.exe/functions/006833B0/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006833B0(void)

{
  st::fn_004036BB();
  while (DAT_007d2d18 == 8) {
    st::fn_004052BD(8);
    st::fn_004036BB();
    st::fn_00405C6D(8,(float *)0x2);
  }
  return;
}

// 00683400 FUN_00683400
#line 1 "decomp/ST.exe/functions/00683400/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_00683400(void)

{
  st::fn_004032FB();
  while (DAT_007d2d18 == 0xb) {
    st::fn_004052BD(0xb);
    st::fn_004032FB();
    st::fn_00405C6D(0xb,(float *)0x2);
  }
  return;
}

// 00683450 FUN_00683450
#line 1 "decomp/ST.exe/functions/00683450/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_00683450(void)

{
  st::fn_00401564();
  while (DAT_007d2d18 == 10) {
    st::fn_004052BD(10);
    st::fn_00401564();
    st::fn_00405C6D(10,(float *)0x2);
  }
  return;
}

// 006834A0 FUN_006834a0
#line 1 "decomp/ST.exe/functions/006834A0/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void st::fn_006834A0(void)

{
  st::fn_00401500();
  while (DAT_007d2d18 == 3) {
    st::fn_004052BD(3);
    st::fn_0040308F(800,1);
    st::fn_00401500();
    st::fn_00405C6D(3,(float *)0x2);
  }
  return;
}

// 006834F0 FUN_006834f0
#line 4 "decomp/ST.exe/functions/006834F0/decomp.c"
/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=2, ignored=0,
   unknown=0 */

int __cdecl st::fn_006834F0(int param_1)

{
  if ((param_1 != 0x34) && (param_1 != 0x43)) {
    return 0;
  }
  return 1;
}

// 00683520 FUN_00683520
#line 1 "decomp/ST.exe/functions/00683520/decomp.c"

void st::fn_00683520(void)

{
  st::fn_004052BD(0x34);
  st::fn_0040308F(0x321,1);
  st::fn_00405D67();
  st::fn_00405C6D(0x34,(float *)0x2);
  return;
}

// 00683560 FUN_00683560
#line 1 "decomp/ST.exe/functions/00683560/decomp.c"

void st::fn_00683560(void)

{
  st::fn_004052BD(0x43);
  st::fn_00405D67();
  st::fn_00405C6D(0x43,(float *)0x2);
  return;
}

// 00683590 FUN_00683590
#line 1 "decomp/ST.exe/functions/00683590/decomp.c"

void st::fn_00683590(void)

{
  int iVar1;

  st::fn_00405D67();
  iVar1 = st::fn_0040325B(DAT_007d2d18);
  while (iVar1 != 0) {
    if (DAT_007d2d18 == 0x34) {
      st::fn_00401F78();
    }
    else if (DAT_007d2d18 == 0x43) {
      st::fn_00404953();
    }
    iVar1 = st::fn_0040325B(DAT_007d2d18);
  }
  return;
}

// 00683600 FUN_00683600
#line 1 "decomp/ST.exe/functions/00683600/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void st::fn_00683600(void)

{
  if (DAT_007d2d18 == 0x1d) {
    st::fn_00402469();
  }
  st::fn_004048E5();
  if (DAT_007d2d18 == 0x13) {
    st::fn_004052BD(0x13);
    st::fn_00404E26();
    st::fn_004052BD(0xf);
    st::fn_00404E26();
    st::fn_00405C6D(0x13,(float *)0x3);
  }
  return;
}

// 00683670 FUN_00683670
#line 1 "decomp/ST.exe/functions/00683670/decomp.c"

int st::fn_00683670(void)

{
  AllocationRecord_0065CD10 *pAVar1;

  if ((g_allocationRecord_0065CD10_008489BC == nullptr) ||
     (pAVar1 = g_allocationRecord_0065CD10_008489BC, DAT_008489c0 == 0)) {
    if ((g_allocationRecord_0067D3B0_008489B8 != nullptr) &&
       (DAT_008489c0 != 0)) {
      return *(int *)&g_allocationRecord_0067D3B0_008489B8->field_0x106;
    }
    if ((g_allocationRecord_00648620_008489B4 != nullptr) &&
       (DAT_008489c0 != 0)) {
      return *(int *)&g_allocationRecord_00648620_008489B4->field_0x4e;
    }
    pAVar1 = nullptr;
  }
  return (int)pAVar1;
}

// 0068CDA0 FUN_0068cda0
#line 4 "decomp/ST.exe/functions/0068CDA0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0068CDA0_param_2Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_9=9;CASE_A=10;CASE_40=64 */

void __cdecl st::fn_0068CDA0(int *param_1,Global_sub_0068CDA0_param_2Enum param_2)

{
  DArrayTy *array;

  array = (DArrayTy *)*param_1;
  if (array != nullptr) {
    switch(param_2) {
    case CASE_1:
      st::fn_00405BCD(param_1);
      return;
    case CASE_2:
      st::fn_00402E00(param_1);
      return;
    case CASE_3:
      st::fn_00402E05(param_1);
      return;
    case CASE_4:
      st::fn_004020A4(param_1);
      return;
    case CASE_5:
      st::fn_00401537(param_1);
      return;
    case CASE_9:
      st::fn_006B5570(array);
      *param_1 = 0;
      return;
    case CASE_A:
    case CASE_40:
      st::fn_006AE110(array);
      *param_1 = 0;
    }
  }
  return;
}

// 0068E140 FUN_0068e140
#line 4 "decomp/ST.exe/functions/0068E140/decomp.c"
uint __thiscall st::fn_0068E140(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0xa5);
  uVar3 = 0;
  uVar2 = STField<uint>(iVar1,0xC);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (bVar5) {
        piVar4 = (int *)(STField<int>(iVar1,0x8) * uVar3 + STField<int>(iVar1,0x1C));
      }
      else {
        piVar4 = nullptr;
      }
      if (*piVar4 == param_1) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      bVar5 = uVar3 < uVar2;
    } while ((int)uVar3 < (int)uVar2);
  }
  return 0xffffffff;
}

// 0068E190 FUN_0068e190
#line 4 "decomp/ST.exe/functions/0068E190/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=006901F0 @ 006901F7 -> read as EAX on
   every CFG path | 006903A0 @ 006903A7 -> read as EAX on every CFG path */

int __thiscall st::fn_0068E190(void *this,int param_1)

{
  undefined4 st_unresolved_iRam00000004{};

  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0xa5);
  uVar4 = 0;
  uVar2 = STField<uint>(iVar1,0xC);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (bVar5) {
        piVar3 = (int *)(STField<int>(iVar1,0x8) * uVar4 + STField<int>(iVar1,0x1C));
      }
      else {
        piVar3 = nullptr;
      }
      if (*piVar3 == param_1) {
        if (iVar1 == 0) {
          return 0;
        }
        if ((int)uVar4 < 0) {
          return 0;
        }
        if ((int)uVar2 <= (int)uVar4) {
          return 0;
        }
        if (uVar2 <= uVar4) {
          return st_unresolved_iRam00000004;
        }
        return *(int *)(STField<int>(iVar1,0x8) * uVar4 + STField<int>(iVar1,0x1C) + 4);
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar2;
    } while ((int)uVar4 < (int)uVar2);
  }
  return 0;
}

// 0068E220 FUN_0068e220
#line 4 "decomp/ST.exe/functions/0068E220/decomp.c"
uint __thiscall st::fn_0068E220(void *this,short param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0xa5);
  uVar3 = 0;
  uVar2 = STField<uint>(iVar1,0xC);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (bVar5) {
        iVar4 = STField<int>(iVar1,0x8) * uVar3 + STField<int>(iVar1,0x1C);
      }
      else {
        iVar4 = 0;
      }
      if ((STField<int>(iVar4,0x4) != 0) && (*(short *)(STField<int>(iVar4,0x4) + 0x7d) == param_1)) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      bVar5 = uVar3 < uVar2;
    } while ((int)uVar3 < (int)uVar2);
  }
  return 0xffffffff;
}

// 0068E300 FUN_0068e300
#line 4 "decomp/ST.exe/functions/0068E300/decomp.c"
uint __thiscall st::fn_0068E300(void *this,byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;

  iVar2 = STField<int>(this,0xa5);
  uVar3 = STField<uint>(iVar2,0xC);
  do {
    do {
      uVar3 = uVar3 - 1;
      if ((int)uVar3 < 0) {
        return 0xffffffff;
      }
      if (uVar3 < STField<uint>(iVar2,0xC)) {
        iVar4 = STField<int>(iVar2,0x8) * uVar3 + STField<int>(iVar2,0x1C);
      }
      else {
        iVar4 = 0;
      }
      iVar4 = STField<int>(iVar4,0x4);
    } while (iVar4 == 0);
    pbVar5 = (byte *)(iVar4 + 0x3b);
    pbVar7 = param_1;
    do {
      bVar1 = *pbVar5;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_0068e363:
        iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_0068e368;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_0068e363;
      pbVar5 = pbVar5 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_0068e368:
    if (iVar6 == 0) {
      return (uint)STField<ushort>(iVar4,0x7D);
    }
  } while( true );
}

// 0068E3C0 FUN_0068e3c0
#line 4 "decomp/ST.exe/functions/0068E3C0/decomp.c"
int __thiscall st::fn_0068E3C0(void *this,byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;

  iVar2 = STField<int>(this,0xa5);
  uVar3 = STField<uint>(iVar2,0xC);
  do {
    do {
      uVar3 = uVar3 - 1;
      if ((int)uVar3 < 0) {
        return 0;
      }
      if (uVar3 < STField<uint>(iVar2,0xC)) {
        iVar4 = STField<int>(iVar2,0x8) * uVar3 + STField<int>(iVar2,0x1C);
      }
      else {
        iVar4 = 0;
      }
      iVar4 = STField<int>(iVar4,0x4);
    } while (iVar4 == 0);
    pbVar5 = (byte *)(iVar4 + 0x3b);
    pbVar7 = param_1;
    do {
      bVar1 = *pbVar5;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_0068e423:
        iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_0068e428;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_0068e423;
      pbVar5 = pbVar5 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_0068e428:
    if (iVar6 == 0) {
      return iVar4;
    }
  } while( true );
}

// 0068E4F0 FUN_0068e4f0
#line 4 "decomp/ST.exe/functions/0068E4F0/decomp.c"
uint * __thiscall st::fn_0068E4F0(void *this,int param_1)

{
  dword dVar1;
  DArrayTy *array;
  int iVar2;
  DArrayTy *array_00;
  ushort *puVar3;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_EDX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_EDX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_EDX_01;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_EDX_02;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_c;
  uint local_8;

  array = st::fn_006AE290(nullptr,0x14,2,0x14);
  iVar2 = STField<int>(this,0xa5);
  local_8 = 0;
  if (0 < STField<int>(iVar2,0xC)) {
    bVar7 = STField<int>(iVar2,0xC) != 0;
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    iVar4 = extraout_EDX;
    do {
      uVar6 = local_8;
      if (bVar7) {
        iVar4 = STField<int>(iVar2,0x1C);
        iVar2 = STField<int>(iVar2,0x8) * local_8 + iVar4;
      }
      else {
        iVar2 = 0;
      }
      if ((*(AiFltClassTy **)(iVar2 + 4) != nullptr) &&
         /* ST_CALLSITE[0068E543]: CALL 0x004059b6; direct=004059B6 AiFltClassTy::sub_0065E360; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__fastcall;pointer:/SubmarineTitans/Recovered/DArrayTy;pointer:/AiFltClassTy;/undefined4;/int */
         /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
         (array_00 = reinterpret_cast<DArrayTy *>(st::fn_004059B6(*(AiFltClassTy **)(iVar2 + 4),iVar4,param_1)),
         iVar4 = extraout_EDX_00, array_00 != nullptr)) {
        dVar1 = array_00->count;
        if ((dVar1 != 0) && (uVar5 = 0, uVar6 = local_8, 0 < (int)dVar1)) {
          bVar7 = dVar1 != 0;
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          iVar2 = extraout_EDX_00;
          do {
            if (bVar7) {
              puVar3 = DArrayAt<undefined2>(array_00, uVar5);
            }
            else {
              puVar3 = nullptr;
            }
            local_c = STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(iVar2)), (uint16_t)(*puVar3));

            st::fn_006AE1C0(array,&local_c);
            uVar5 = uVar5 + 1;
            bVar7 = uVar5 < array_00->count;
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            iVar2 = extraout_EDX_01;
            uVar6 = local_8;
          } while ((int)uVar5 < (int)array_00->count);
        }
        st::fn_006AE110(array_00);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        iVar4 = extraout_EDX_02;
      }
      local_8 = uVar6 + 1;
      iVar2 = STField<int>(this,0xa5);
      bVar7 = local_8 < STField<uint>(iVar2,0xC);
    } while ((int)local_8 < (int)STField<uint>(iVar2,0xC));
  }
  if (array->count != 0) {
    return &array->flags;
  }
  st::fn_006AE110(array);
  return nullptr;
}

// 0068E7D0 FUN_0068e7d0
#line 4 "decomp/ST.exe/functions/0068E7D0/decomp.c"
int __cdecl
st::fn_0068E7D0(RecoveredRecord_0068E7D0_C9DEDE4F *param_1,RecoveredRecord_0068E7D0_3F8A8E72 *param_2)

{
  return (int)param_1->field_0006 - (int)param_2->field_0006;
}

// 0068E800 FUN_0068e800
#line 4 "decomp/ST.exe/functions/0068E800/decomp.c"
int __thiscall st::fn_0068E800(void *this,short param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;

  iVar1 = STField<int>(this,0xbd);
  iVar3 = 0;
  uVar2 = STField<uint>(iVar1,0xC);
  uVar5 = 0;
  if (0 < (int)uVar2) {
    bVar6 = uVar2 != 0;
    do {
      if (bVar6) {
        iVar4 = STField<int>(iVar1,0x8) * uVar5 + STField<int>(iVar1,0x1C);
      }
      else {
        iVar4 = 0;
      }
      if (STField<short>(iVar4,0xC) == param_1) {
        iVar3 = iVar3 + 1;
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
  }
  return iVar3;
}

// 0068E850 FUN_0068e850
#line 4 "decomp/ST.exe/functions/0068E850/decomp.c"
int __thiscall st::fn_0068E850(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;

  iVar1 = STField<int>(this,0xbd);
  iVar3 = 0;
  uVar2 = STField<uint>(iVar1,0xC);
  uVar5 = 0;
  if (0 < (int)uVar2) {
    bVar6 = uVar2 != 0;
    do {
      if (bVar6) {
        piVar4 = (int *)(STField<int>(iVar1,0x8) * uVar5 + STField<int>(iVar1,0x1C));
      }
      else {
        piVar4 = nullptr;
      }
      if (((uint)piVar4[0xb] < 3) && (*piVar4 == param_1)) {
        iVar3 = iVar3 + 1;
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
  }
  return iVar3;
}

// 0068E8C0 FUN_0068e8c0
#line 4 "decomp/ST.exe/functions/0068E8C0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0068F020 @ 0068F141 -> read as EAX on
   every CFG path | 0068F020 @ 0068F1D5 -> read as EAX on every CFG path */

int __thiscall st::fn_0068E8C0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0xbd);
  uVar3 = 0;
  uVar2 = STField<uint>(iVar1,0xC);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (bVar5) {
        piVar4 = (int *)(STField<int>(iVar1,0x8) * uVar3 + STField<int>(iVar1,0x1C));
      }
      else {
        piVar4 = nullptr;
      }
      if (*piVar4 == param_1) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      bVar5 = uVar3 < uVar2;
    } while ((int)uVar3 < (int)uVar2);
  }
  return -1;
}

// 0068E910 FUN_0068e910
#line 4 "decomp/ST.exe/functions/0068E910/decomp.c"
void __fastcall st::fn_0068E910(RecoveredRecord_0068E910_916952FD *param_1)

{
  DArrayTy *pDVar1;

  if (param_1->field_00BD != nullptr) {
    st::fn_006AE110(param_1->field_00BD);
    pDVar1 = st::fn_006AE290(nullptr,10,0x4a,10);
    param_1->field_00BD = pDVar1;
  }
  return;
}

// 0068F8F0 FUN_0068f8f0
#line 4 "decomp/ST.exe/functions/0068F8F0/decomp.c"
undefined4 __thiscall st::fn_0068F8F0(void *this,short param_1)

{
  AiFltClassTy *this_00;
  short sVar1;
  int iVar2;
  uint uVar3;
  bool bVar5;
  uint local_38 [2];
  char local_30;

  if (param_1 == 1) {
    if (STField<short>(this,0x39) != 3) {
      return 1;
    }
    if ((g_allPlayers_007FA174 != nullptr) &&
       (sVar1 = st::fn_00401023(STField<char>(this,0x24),0x62,0,-1), sVar1 != 0)) {
      return 1;
    }
  }
  else {
    iVar2 = STField<int>(this,0xa5);
    uVar3 = 0;
    if (0 < STField<int>(iVar2,0xC)) {
      bVar5 = STField<int>(iVar2,0xC) != 0;
      do {
        if (bVar5) {
          iVar2 = STField<int>(iVar2,0x8) * uVar3 + STField<int>(iVar2,0x1C);
        }
        else {
          iVar2 = 0;
        }
        this_00 = *(AiFltClassTy **)(iVar2 + 4);
        if ((this_00 != nullptr) && (this_00->field_007B == -0x8000)) {
          memset(local_38, 0, 0x34); /* compiler bulk-zero initialization */
          local_38[1] = STField<undefined4>(this,300);
          local_38[0] = 0x75;
          /* ST_CALLSITE[0068F990]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
          st::fn_00401555(this_00,local_38);
          if ('\0' < local_30) {
            return 1;
          }
        }
        iVar2 = STField<int>(this,0xa5);
        uVar3 = uVar3 + 1;
        bVar5 = uVar3 < STField<uint>(iVar2,0xC);
      } while ((int)uVar3 < (int)STField<uint>(iVar2,0xC));
    }
  }
  return 0;
}

// 0068FA00 FUN_0068fa00
#line 4 "decomp/ST.exe/functions/0068FA00/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006618E0 -> 0068FA00 @ 00661B54 */

void __thiscall st::fn_0068FA00(void *this,uint *param_1)

{
  AiFltClassTy *this_00;
  int iVar1;
  uint uVar2;
  bool bVar4;
  uint local_38 [2];
  char local_30;
  byte local_2f;
  uint *local_2e;

  uVar2 = 0;
  iVar1 = STField<int>(this,0xa5);
  if (0 < STField<int>(iVar1,0xC)) {
    bVar4 = STField<int>(iVar1,0xC) != 0;
    do {
      if (bVar4) {
        iVar1 = STField<int>(iVar1,0x8) * uVar2 + STField<int>(iVar1,0x1C);
      }
      else {
        iVar1 = 0;
      }
      this_00 = *(AiFltClassTy **)(iVar1 + 4);
      if ((this_00 != nullptr) && (this_00->field_007B == -0x8000)) {
        memset(local_38, 0, 0x34); /* compiler bulk-zero initialization */
        local_38[1] = STField<undefined4>(this,300);
        local_2e = param_1;
        local_38[0] = 0x75;
        local_2f = 1;
        /* ST_CALLSITE[0068FA68]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
        st::fn_00401555(this_00,local_38);
        if ('\0' < local_30) {
          return;
        }
      }
      iVar1 = STField<int>(this,0xa5);
      uVar2 = uVar2 + 1;
      bVar4 = uVar2 < STField<uint>(iVar1,0xC);
    } while ((int)uVar2 < (int)STField<uint>(iVar1,0xC));
  }
  return;
}

// 0068FAC0 FUN_0068fac0
#line 4 "decomp/ST.exe/functions/0068FAC0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0068FAD5 MOV CX,word ptr
   [EBP + 0x8] */

int __thiscall st::fn_0068FAC0(void *this,ushort param_1,undefined4 param_2)

{
  uint local_38 [2];
  ushort local_2f;
  uint local_2d;
  short local_29;

  memset(local_38, 0, 0x34); /* compiler bulk-zero initialization */
  local_38[1] = STField<undefined4>(this,300);
  local_2f = param_1;
  local_38[0] = 0x76;
  local_2d = param_2;
  /* ST_CALLSITE[0068FAFE]: CALL 0x00403cdd; direct=00403CDD AiTactClassTy::sub_006902B0 */
  st::fn_00403CDD(static_cast<AiTactClassTy *>(this),-0x8000,local_38);
  return (int)local_29;
}

// 0068FC70 FUN_0068fc70
#line 4 "decomp/ST.exe/functions/0068FC70/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0068FC70 returns forwarded through return of FUN_00679f00 @ 00679F57

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0068FC70 -> 00662240 @ 0068FCB8 */

int __thiscall st::fn_0068FC70(void *this,RecoveredRecordView_0068FD00_630BE91E *aiMess,short param_2)

{
  AiFltClassTy *this_00;
  int iVar1;
  uint uVar2;
  bool bVar3;

  uVar2 = 0;
  iVar1 = STField<int>(this,0xa5);
  if (0 < STField<int>(iVar1,0xC)) {
    bVar3 = STField<int>(iVar1,0xC) != 0;
    do {
      if ((((bVar3) && (iVar1 = STField<int>(iVar1,0x8) * uVar2 + STField<int>(iVar1,0x1C), iVar1 != 0))
          && (this_00 = *(AiFltClassTy **)(iVar1 + 4), this_00 != nullptr)) &&
         ((uint)(ushort)this_00->field_007D == (int)param_2)) {
        /* ST_CALLSITE[0068FCB8]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
        st::fn_00401555(this_00,reinterpret_cast<uint *>(aiMess));
      }
      iVar1 = STField<int>(this,0xa5);
      uVar2 = uVar2 + 1;
      bVar3 = uVar2 < STField<uint>(iVar1,0xC);
    } while ((int)uVar2 < (int)STField<uint>(iVar1,0xC));
    return 0;
  }
  return 0;
}
