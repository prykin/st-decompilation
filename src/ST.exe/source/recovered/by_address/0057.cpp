#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0057.cpp

// 005711D0 FUN_005711d0
#line 4 "decomp/ST.exe/functions/005711D0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=9, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005711D0(void *this,int *param_1)

{
  if (*param_1 != 0) {
    st::fn_006E4C30(this,*param_1);
    st::fn_006E4B80(this,*param_1);
    st::fn_006E4D20(this,(DebugSystemC *)*param_1);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)*param_1 + 4))();
    st::fn_0072E2B0((HoloTy *)*param_1);
    *param_1 = 0;
  }
  return;
}

// 00571240 FUN_00571240
#line 4 "decomp/ST.exe/functions/00571240/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004EEA40 -> 00571240 @ 004EEB34 | 004EEA40 -> 00571240 @ 004EEBCA | 004F05C0 ->
   00571240 @ 004F068A | 004F05C0 -> 00571240 @ 004F0702 | 004F5690 -> 00571240 @ 004F5DF2 |
   004F5690 -> 00571240 @ 004F6195 | 00503450 -> 00571240 @ 00503908 | 005107C0 -> 00571240 @
   00510A5F | 00539280 -> 00571240 @ 00539388 | 005397F0 -> 00571240 @ 00539960 | 0053EF20 ->
   00571240 @ 0053F04A | 005400F0 -> 00571240 @ 0054026C | 005400F0 -> 00571240 @ 005402B3 */

LPSTR __cdecl st::fn_00571240(char *text,int param_2)

{
  char *pcVar1;
  LPSTR pCVar2;
  char *text_00;

  if (param_2 == 0) {
    if (DAT_0080874e == 2) {
      pcVar1 = &CHAR_B_007ca248;
    }
    else if (DAT_0080874e == 3) {
      pcVar1 = &CHAR_S_007ca24c;
    }
    else {
      pcVar1 = &CHAR_W_007ca250;
    }
    text_00 = "%s_%s";
  }
  else {
    if (DAT_0080874e == 0) {
      pcVar1 = (char *)0x1;
    }
    else {
      pcVar1 = (char *)(uint)DAT_0080874e;
    }
    text_00 = "%s%d";
  }
  pCVar2 = st::pointer_boundary_cast<LPSTR>(&DAT_00803520 + (uint)DAT_008067a1 * 0x200);
  st::external_00000080(pCVar2,text_00,text,pcVar1);
  if (DAT_008067a1 == 0x18) {
    DAT_008067a1 = 0;
    return pCVar2;
  }
  DAT_008067a1 = DAT_008067a1 + 1;
  return pCVar2;
}

// 00571320 FUN_00571320
#line 4 "decomp/ST.exe/functions/00571320/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00533D10 -> 00571320 @ 00534053 | 00533D10 -> 00571320 @ 0053515A */

void __thiscall st::fn_00571320(void *this,HWND param_1)

{
  char cVar1;
  uint uVar2;

  uVar2 = DAT_00807300 & 0xff;
  if (uVar2 == 2) {
    st::fn_004041C9((void *)((int)this + 0x38),st::machine_word_boundary_cast<undefined4>(param_1));
  }
  else if (((uVar2 == 4) || (uVar2 == 8)) && (DAT_008033f0 != 0)) {
    cVar1 = STField<char>(this,0x112e);
    if (cVar1 == '\x01') {
      st::fn_00405C36(2);
      return;
    }
    if (cVar1 == '\x02') {
      st::fn_00405C36(1);
      return;
    }
    if (cVar1 == '\x03') {
      st::fn_00405C36(3);
      return;
    }
  }
  return;
}

// 005713B0 FUN_005713b0
#line 4 "decomp/ST.exe/functions/005713B0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_005713B0(int param_1)

{
  uint uVar1;

  uVar1 = DAT_00807300 & 0xff;
  if (uVar1 == 2) {
    st::fn_00401C94((void *)(param_1 + 0x38));
    return;
  }
  if (((uVar1 == 4) || (uVar1 == 8)) && (DAT_008033f0 != nullptr)) {
    st::fn_00403C01(st::pointer_boundary_cast<SoundManagerTy *>(DAT_008033f0));
    return;
  }
  return;
}

// 005717E0 FUN_005717e0
#line 1 "decomp/ST.exe/functions/005717E0/decomp.c"

bool st::fn_005717E0(char *param_1)

{
  if (param_1 == nullptr) {
    return false;
  }
  return *param_1 == '/';
}

// 00571810 FUN_00571810
#line 4 "decomp/ST.exe/functions/00571810/decomp.c"
bool st::fn_00571810(char *param_1)

{
  byte bVar1;
  char **ppcVar2;
  byte *pbVar3;
  bool bVar4;

  if (param_1 == nullptr) {
    return false;
  }
  st::fn_0072E340((char *)&param_1,param_1,4);
  param_1 = (char *)((uint)param_1 & 0xffffff);
  st::fn_006B77E0((char *)&param_1,(byte *)&param_1);
  pbVar3 = st::pointer_boundary_cast<byte *>(&DAT_007ca2e4);
  ppcVar2 = &param_1;
  while( true ) {
    bVar1 = *(byte *)ppcVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return true;
    }
    bVar1 = STField<byte>(ppcVar2,1);
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    ppcVar2 = (char **)((int)ppcVar2 + 2);
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return true;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

// 005718D0 FUN_005718d0
#line 4 "decomp/ST.exe/functions/005718D0/decomp.c"
void __fastcall st::fn_005718D0(int param_1)

{
  int iVar2;
  int iVar1;
  CHAR local_164 [260];
  InternalExceptionFrame local_60;
  undefined4 local_1c [4];
  int local_c;
  LPBITMAPINFO local_8;

  local_8 = (LPBITMAPINFO)0x0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x4efa) == 0) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    local_c = param_1;
    iVar1 = st::fn_0072D7F0(local_60.jumpBuffer,0);
    if (iVar1 == 0) {
      st::fn_006BD740((int *)g_ddxContext_008075A8);
      st::fn_006C4630
                (g_dDXContext_0080759C,g_dDXContext_0080759C->field_0044,local_1c);
      local_8 = st::fn_006C4880
                          (g_dDXContext_0080759C,0,0,g_nWidth_00806730,DAT_00806734,DAT_00806738);
      st::fn_006C44E0(g_dDXContext_0080759C,local_1c);
      iVar2 = local_c;
      if (local_8 != (LPBITMAPINFO)0x0) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        st::external_00000080(local_164,st::mutable_c_string("%sscr%03d.bmp"),local_c + 0x60,
                  (uint)*(ushort *)(local_c + 0x1138));
        st::fn_006C4230(local_164,st::pointer_boundary_cast<LPCVOID>(local_8),(LPCVOID)0x0);
        *(short *)(iVar2 + 0x1138) = *(short *)(iVar2 + 0x1138) + 1;
        st::fn_006AB060(&local_8);
      }
      g_currentExceptionFrame = local_60.previous;
      return;
    }
    g_currentExceptionFrame = local_60.previous;
  }
  return;
}

// 00571A30 FUN_00571a30
#line 4 "decomp/ST.exe/functions/00571A30/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __cdecl
st::fn_00571A30(AnonShape_00571A30_8BA8841B *param_1,AnonShape_00571A30_67EE4B56 *param_2,char param_3)

{
  int iVar1;
  byte *puVar2;
  byte *puVar3;

  iVar1 = 0x10;
  if (param_3 != '\0') {
    puVar2 = (byte *)&param_2->field_0x10;
    puVar3 = (byte *)&param_1->field_0x299;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = (byte *)(puVar2 + 1);
      puVar3 = (byte *)(puVar3 + 1);
    }
    param_1->field_02E6 = param_2->field_005D;
    param_1->field_02EA = param_2->field_0061;
    param_1->field_02EE = param_2->field_0065;
    puVar2 = (byte *)&param_2[1].field_0x8;
    puVar3 = (byte *)&param_1->field_0x11aa;
    memmove(puVar3, puVar2, 0x20); /* compiler REP MOVS byte copy */
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)((int)&param_1->field_0003 + 1) = *(undefined4 *)((int)&param_2->field_0003 + 1);
    *(undefined4 *)&param_1->field_0x8 = *(undefined4 *)&param_2->field_0x8;
    *(undefined2 *)&param_1->field_0xc = *(undefined2 *)&param_2->field_0xc;
    param_1->field_000E = param_2->field_000E;
    param_1->field_02D9 = param_2->field_0x50;
    param_1->field_02DA = param_2->field_0051;
    param_1->field_02DB = param_2->field_0052;
    param_1->field_0x2dc = param_2->field_0053;
    param_1->field_02DD = param_2->field_0x54;
    param_1->field_02DE = param_2->field_0055;
    param_1->field_02DF = param_2->field_0056;
    param_1->field_0x2e0 = param_2->field_0057;
    param_1->field_02E1 = *(undefined4 *)&param_2->field_0x58;
    param_1->field_02E5 = param_2->field_0x5c;
    param_1->field_02F3 = param_2->field_006A;
    param_1->field_0x2f4 = param_2->field_006B;
    param_1->field_02F5 = *(undefined4 *)(param_2 + 1);
    param_1->field_02F2 = param_2->field_0069;
    param_1->field_11A6 = *(undefined4 *)((int)&param_2[1].field_0003 + 1);
    return;
  }
  puVar2 = (byte *)&param_1->field_0x299;
  puVar3 = (byte *)&param_2->field_0x10;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = (byte *)(puVar2 + 1);
    puVar3 = (byte *)(puVar3 + 1);
  }
  param_2->field_005D = param_1->field_02E6;
  param_2->field_0061 = param_1->field_02EA;
  param_2->field_0065 = param_1->field_02EE;
  puVar2 = (byte *)&param_1->field_0x11aa;
  puVar3 = (byte *)&param_2[1].field_0x8;
  memmove(puVar3, puVar2, 0x20); /* compiler REP MOVS byte copy */
  *(undefined4 *)param_2 = *(undefined4 *)param_1;
  *(undefined4 *)((int)&param_2->field_0003 + 1) = *(undefined4 *)((int)&param_1->field_0003 + 1);
  *(undefined4 *)&param_2->field_0x8 = *(undefined4 *)&param_1->field_0x8;
  *(undefined2 *)&param_2->field_0xc = *(undefined2 *)&param_1->field_0xc;
  param_2->field_000E = param_1->field_000E;
  param_2->field_0x50 = param_1->field_02D9;
  param_2->field_0051 = param_1->field_02DA;
  param_2->field_0052 = param_1->field_02DB;
  param_2->field_0053 = param_1->field_0x2dc;
  param_2->field_0x54 = param_1->field_02DD;
  param_2->field_0055 = param_1->field_02DE;
  param_2->field_0056 = param_1->field_02DF;
  param_2->field_0057 = param_1->field_0x2e0;
  *(undefined4 *)&param_2->field_0x58 = param_1->field_02E1;
  param_2->field_0x5c = param_1->field_02E5;
  param_2->field_006A = param_1->field_02F3;
  param_2->field_006B = param_1->field_0x2f4;
  *(undefined4 *)(param_2 + 1) = param_1->field_02F5;
  param_2->field_0069 = param_1->field_02F2;
  *(undefined4 *)((int)&param_2[1].field_0003 + 1) = param_1->field_11A6;
  return;
}

// 00571C90 FUN_00571c90
#line 1 "decomp/ST.exe/functions/00571C90/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 00571C90 returns zeroed full register at 00571CB0 @ 00571CB3 */

uint st::fn_00571C90(int param_1)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STSprGameObjC *in_ECX;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar1 = st::fn_00404F07(in_ECX,(STMessage *)param_1);
  if (iVar1 == 0xffff) {
    return 0xffff;
  }
  return 0;
}

// 00571CD0 FUN_00571cd0
#line 4 "decomp/ST.exe/functions/00571CD0/decomp.c"
/* [STReturnSemanticsApplier] typed_pointer_return.
   Evidence: all 1 value-return path(s) forward Listing variable param_1 with evidence-backed
   structure /SubmarineTitans/Recovered/PointerShapes/AnonShape_00571CD0_C1ECCB3F (current recovered
   extent=3568) */

AnonShape_00571CD0_C1ECCB3F * __fastcall st::fn_00571CD0(AnonShape_00571CD0_C1ECCB3F *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;

  uVar2 = 0xffffffff;
  *(undefined4 *)&param_1->field_0x8 = 0;
  *(undefined4 *)&param_1->field_0xc = 0;
  *(undefined4 *)&param_1->field_0x10 = 0;
  *(undefined4 *)&param_1->field_0x14 = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)&param_1->field_0x4 = 0;
  param_1->field_0x28 = 0;
  param_1->field_0x12c = 0;
  param_1->field_0x438 = 0;
  param_1->field_0x230 = 0;
  param_1->field_0x334 = 0;
  param_1->field_0645 = 0;
  param_1->field_0x53c = 0;
  pcVar4 = &CHAR_N_007ca684;
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
  pcVar5 = st::pointer_boundary_cast<char *>(&param_1->field_0x749);
  memmove(pcVar5, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  param_1->field_0DEE = 0;
  param_1->field_0781 = 1;
  param_1->field_0DAE = 0;
  st::fn_00403760((AnonShape_005739A0_A4724D00 *)param_1);
  return param_1;
}

// 00571DC0 FUN_00571dc0
#line 4 "decomp/ST.exe/functions/00571DC0/decomp.c"
uint st::fn_00571DC0(void)

{
  UINT UVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  uint local_8;

  UVar1 = st::external_00000047();
  local_10 = 0;
  local_14 = DAT_007ca690;
  local_c = 0;
  iVar2 = 0;
  do {
    local_8 = UVar1;
    if ((UVar1 & 1) != 0) {
      local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)((char)iVar2 + 'A'));
      UVar1 = st::external_0000004E((LPCSTR)&local_14);
      if (UVar1 == 5) break;
    }
    UVar1 = local_8 >> 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  return STReplaceLowByte((uint32_t)(UVar1), (uint8_t)((CHAR)local_14));
}

// 00571E40 FUN_00571e40
#line 4 "decomp/ST.exe/functions/00571E40/decomp.c"
/* WARNING: Type propagation algorithm not settling */
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00571E40 -> EXTERNAL:000000C4 @ 0057229A */

undefined4 __thiscall st::fn_00571E40(void *this,LPDWORD lpcbData)

{
  LPBYTE pBVar1;
  uint *lpData;
  char cVar2;
  byte bVar3;
  LSTATUS LVar4;
  UINT UVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  byte *pbVar10;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  CHAR local_124 [260];
  undefined4 local_20;
  CHAR local_1c;
  undefined3 uStack_1b;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_11;
  DWORD local_10 [2];
  HKEY local_8;

  LVar4 = st::external_000000C5((HKEY)&DAT_80000001,st::pointer_boundary_cast<LPCSTR>("SOFTWARE\\Ellipse Studios\\Submarine Titans\\Directories"),st::pointer_boundary_cast<PHKEY>(&local_8));
  pcVar9 = RegQueryValueExA_exref;
  if (LVar4 != 0) goto cf_common_exit_0057238D;
  pBVar1 = (LPBYTE)((int)this + 0x28);
  local_10[1] = 0x104;
  LVar4 = st::external_000000C4(local_8,st::pointer_boundary_cast<LPCSTR>("MainPath"),(LPDWORD)0x0,local_10,pBVar1,local_10 + 1);
  if (LVar4 != 0) {
    st::external_000000C9(local_8);
    return 0;
  }
  st::fn_006B8280((char *)pBVar1,(char *)pBVar1);
  local_11 = STField<undefined1>(this,0x2b);
  STField<undefined1>(this,0x2b) = 0;
  UVar5 = st::external_0000004E((LPCSTR)pBVar1);
  STField<undefined1>(this,0x2b) = local_11;
  if (UVar5 != 3) {
    st::external_000000C9(local_8);
    return 0;
  }
  pBVar1 = (LPBYTE)((int)this + 300);
  local_10[1] = 0x104;
  LVar4 = st::external_000000C4(local_8,st::pointer_boundary_cast<LPCSTR>("VideoPath"),(LPDWORD)0x0,local_10,pBVar1,local_10 + 1);
  if (LVar4 != 0) goto cf_common_exit_0057238D;
  st::fn_006B8280((char *)pBVar1,(char *)pBVar1);
  pBVar1 = (LPBYTE)((int)this + 0x438);
  local_10[1] = 0x104;
  LVar4 = st::external_000000C4(local_8,st::pointer_boundary_cast<LPCSTR>("DataPath"),(LPDWORD)0x0,local_10,pBVar1,local_10 + 1);
  if (LVar4 != 0) {
    st::external_000000C9(local_8);
    return 0;
  }
  st::fn_006B8280((char *)pBVar1,(char *)pBVar1);
  pBVar1 = (LPBYTE)((int)this + 0x230);
  local_10[1] = 0x104;
  LVar4 = st::external_000000C4(local_8,st::pointer_boundary_cast<LPCSTR>("SoundPath"),(LPDWORD)0x0,local_10,pBVar1,local_10 + 1);
  if (LVar4 != 0) {
    st::external_000000C9(local_8);
    return 0;
  }
  st::fn_006B8280((char *)pBVar1,(char *)pBVar1);
  pBVar1 = (LPBYTE)((int)this + 0x334);
  local_10[1] = 0x104;
  LVar4 = st::external_000000C4(local_8,st::pointer_boundary_cast<LPCSTR>("MusicPath"),(LPDWORD)0x0,local_10,pBVar1,local_10 + 1);
  if (LVar4 != 0) goto cf_common_exit_0057238D;
  st::fn_006B8280((char *)pBVar1,(char *)pBVar1);
  pBVar1 = (LPBYTE)((int)this + 0x53c);
  local_10[1] = 0x104;
  LVar4 = st::external_000000C4(local_8,st::pointer_boundary_cast<LPCSTR>("InstPath"),(LPDWORD)0x0,local_10,pBVar1,local_10 + 1);
  if (LVar4 != 0) {
    st::external_000000C9(local_8);
    return 0;
  }
  st::fn_006B8280((char *)pBVar1,(char *)pBVar1);
  st::external_000000C9(local_8);
  st::external_00000080(local_124,st::mutable_c_string("%s%s"),(int)this + 0x28,st_global_0079B0CC);
  st::external_00000054(local_124,(LPSECURITY_ATTRIBUTES)0x0);
  LVar4 = st::external_000000C5((HKEY)&DAT_80000001,st::pointer_boundary_cast<LPCSTR>("SOFTWARE\\Ellipse Studios\\Submarine Titans\\Version"),st::pointer_boundary_cast<PHKEY>(&local_8));
  if (LVar4 != 0) {
LAB_00572086:
    st::external_000000C9(local_8);
    return 0;
  }
  local_10[1] = 4;
  LVar4 = st::external_000000C4(local_8,st::pointer_boundary_cast<LPCSTR>("Version"),(LPDWORD)0x0,local_10,
                           (LPBYTE)((int)this + 0x77d),local_10 + 1);
  if (LVar4 != 0) goto LAB_00572086;
  lpData = (uint *)((int)this + 0x779);
  local_10[1] = 4;
  LVar4 = st::external_000000C4(local_8,st::pointer_boundary_cast<LPCSTR>(&DAT_007ca4f8),(LPDWORD)0x0,local_10,(LPBYTE)lpData,local_10 + 1);
  if (LVar4 != 0) goto cf_common_exit_0057238D;
  uVar6 = *lpData >> 0x10;
  if (uVar6 < 0xdeb1) {
    if (((uVar6 != 0xdeb0) && (uVar6 != 0xd0dd)) && ((uVar6 < 0xddd1 || (0xddd2 < uVar6)))) {
LAB_005720f0:
      *lpData = *lpData | 0xd0ddffff;
    }
  }
  else if (uVar6 != 0xffff) goto LAB_005720f0;
  local_10[1] = 0x104;
  LVar4 = st::external_000000C4(local_8,st::pointer_boundary_cast<LPCSTR>("Folder"),(LPDWORD)0x0,local_10,
                           (LPBYTE)((int)this + 0x645),local_10 + 1);
  if (LVar4 != 0) {
    st::external_000000C9(local_8);
    return 0;
  }
  local_10[1] = 0x30;
  LVar4 = st::external_000000C4(local_8,st::pointer_boundary_cast<LPCSTR>(&DAT_007ca508),(LPDWORD)0x0,local_10,(LPBYTE)((int)this + 0x749),
                           local_10 + 1);
  if (LVar4 != 0) {
    uVar6 = 0xffffffff;
    pcVar12 = &CHAR_N_007ca684;
    do {
      pcVar13 = pcVar12;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar13 = pcVar12 + 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar13;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    pcVar12 = pcVar13 + -uVar6;
    pcVar13 = (char *)((int)this + 0x749);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar6 = uVar6 & 3; pcVar9 = RegQueryValueExA_exref, uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar13 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
    }
  }
  memset((void *)((int)this + 0x785), 0, 0x40); /* compiler bulk-zero initialization */
  local_10[1] = 0x40;
  iVar8 = (*pcVar9)(local_8,"LastPlayer",0,local_10,(undefined4 *)((int)this + 0x785),
                    local_10 + 1);
  if (iVar8 == 0) {
    local_10[1] = 4;
    iVar8 = (*pcVar9)(local_8,"CharSet",0,local_10,(int)this + 0x781,local_10 + 1);
    if (iVar8 != 0) {
      st::external_000000C9(local_8);
      return 0;
    }
    memset((void *)((int)this + 0xdae), 0, 0x40); /* compiler bulk-zero initialization */
    local_10[1] = 0x40;
    iVar8 = (*pcVar9)(local_8,"Server",0,local_10,(undefined4 *)((int)this + 0xdae),
                      local_10 + 1);
    if (iVar8 == 0) {
      if (((uint)lpcbData & 2) != 0) {
        local_20 = 0x100;
        iVar8 = (*pcVar9)(local_8,"Editor",0,local_10,&DAT_008071f8,&local_20);
        if (iVar8 != 0) {
          st::external_000000C9(local_8);
          return 0;
        }
      }
      if (((uint)lpcbData & 1) != 0) {
        lpcbData = (LPDWORD)0x5;
        iVar8 = (*pcVar9)(local_8,"CDAudioDrive",0,local_10,(int)this + 0x640,&lpcbData);
        if (iVar8 != 0) {
          st::external_000000C9(local_8);
          return 0;
        }
        pcVar12 = &CHAR_N_007ca694;
        pbVar10 = (byte *)((int)this + 0x640);
        do {
          bVar3 = *pbVar10;
          bVar14 = bVar3 < (byte)*pcVar12;
          if (bVar3 != *pcVar12) {
LAB_005722e8:
            iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_005722ed;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar10[1];
          bVar14 = bVar3 < (byte)pcVar12[1];
          if (bVar3 != pcVar12[1]) goto LAB_005722e8;
          pbVar10 = pbVar10 + 2;
          pcVar12 = pcVar12 + 2;
        } while (bVar3 != 0);
        iVar8 = 0;
LAB_005722ed:
        if (iVar8 != 0) {
          local_18 = 0;
          local_14 = 0;
          auto _local_1c = STReplaceLowByte((uint32_t)(DAT_007ca690), (uint8_t)(STField<undefined1>(this,0x640)));
          UVar5 = st::external_0000004E(st::pointer_boundary_cast<LPCSTR>(&local_1c));
          if (UVar5 == 5) {
            uVar6 = 0xffffffff;
            pcVar12 = st::pointer_boundary_cast<char *>(&local_1c);
            do {
              pcVar13 = pcVar12;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar13 = pcVar12 + 1;
              cVar2 = *pcVar12;
              pcVar12 = pcVar13;
            } while (cVar2 != '\0');
            uVar6 = ~uVar6;
            pcVar12 = pcVar13 + -uVar6;
            pcVar13 = (char *)((int)this + 0x640);
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar13 = pcVar13 + 4;
            }
          }
          else {
            uVar6 = 0xffffffff;
            pcVar12 = &CHAR_N_007ca694;
            do {
              pcVar13 = pcVar12;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar13 = pcVar12 + 1;
              cVar2 = *pcVar12;
              pcVar12 = pcVar13;
            } while (cVar2 != '\0');
            uVar6 = ~uVar6;
            pcVar12 = pcVar13 + -uVar6;
            pcVar13 = (char *)((int)this + 0x640);
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar13 = pcVar13 + 4;
            }
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar13 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar13 = pcVar13 + 1;
          }
          st::fn_006B78C0((char *)((int)this + 0x640),(char *)((int)this + 0x640));
        }
        st::fn_004026A8(st::pointer_boundary_cast<AnonReceiver_00573260 *>(this));
      }
      st::external_000000C9(local_8);
      return 1;
    }
  }
cf_common_exit_0057238D:
  st::external_000000C9(local_8);
  return 0;
}

// 00572510 FUN_00572510
#line 4 "decomp/ST.exe/functions/00572510/decomp.c"
/* WARNING: Removing unreachable block (ram,0x00572660) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_00572510(AnonShape_00572510_F06DC155 *param_1)

{
  char cVar1;
  byte bVar2;
  AnonShape_00572510_F06DC155 *this;
  HANDLE hFindFile;
  BOOL BVar3;
  int iVar4;
  cMf32 *this_00;
  ushort *puVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar10;
  int iVar11;
  byte *pbVar12;
  bool bVar13;
  _WIN32_FIND_DATAA local_29c;
  byte local_15c [260];
  InternalExceptionFrame local_58;
  cMf32 *local_14;
  AnonShape_00572510_F06DC155 *local_10;
  int local_c;
  char *local_8;

  local_8 = &param_1->field_0785;
  local_c = 0;
  param_1->field_0DEE = 0;
  if (param_1->field_0785 != '\0') {
    local_10 = param_1;
    st::external_00000080((LPSTR)local_15c,st::mutable_c_string("%s%s%s"),&param_1->field_0x28,st_global_0079B0CC,
              local_8);
    hFindFile = st::external_00000070((LPCSTR)local_15c,st::pointer_boundary_cast<LPWIN32_FIND_DATAA>(&local_29c));
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        if (((byte)local_29c.dwFileAttributes & 0x10) != 0) {
          local_c = 1;
          break;
        }
        BVar3 = st::external_00000071(hFindFile,st::pointer_boundary_cast<LPWIN32_FIND_DATAA>(&local_29c));
      } while (BVar3 != 0);
    }
    if (hFindFile != (HANDLE)0xffffffff) {
      st::external_00000072(hFindFile);
    }
    if (local_c != 0) {
      st::external_00000080((LPSTR)local_15c,st::mutable_c_string("%s%s%s\\%s"),&param_1->field_0x28,st_global_0079B0CC,
                local_8,PTR_s_PL_LOG_0079b0d0);
      local_58.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_58;
      iVar4 = st::fn_0072D7F0(local_58.jumpBuffer,0);
      if (iVar4 == 0) {
        this_00 = (cMf32 *)st::fn_006F0EC0(0x345,local_15c,0,0,0);
        this = local_10;
        if (this_00 != nullptr) {
          local_8 = st::pointer_boundary_cast<char *>(&DAT_008072f8);
          local_14 = this_00;
          st::fn_006F1CE0(this_00,0xc,PTR_s_OPTIONS_PLAYER_0079b0d4,(int *)&local_8,1);
          st::fn_00403760((AnonShape_005739A0_A4724D00 *)this);
          local_8 = st::pointer_boundary_cast<char *>(&this->field_0x80e);
          st::fn_006F1CE0(this_00,0xc,PTR_s_ACCKEYS_PLAYER_0079b0d8,(int *)&local_8,1);
          local_8 = st::pointer_boundary_cast<char *>(&this->field_0xd86);
          st::fn_006F1CE0(this_00,0xc,PTR_s_AIKEYS_PLAYER_0079b0dc,(int *)&local_8,1);
          local_8 = st::pointer_boundary_cast<char *>(&this->field_0x99e);
          st::fn_006F1CE0(this_00,0xc,PTR_s_SYSKEYS_PLAYER_0079b0e0,(int *)&local_8,1);
          local_8 = st::pointer_boundary_cast<char *>(&this->field_0xc1e);
          st::fn_006F1CE0(this_00,0xc,PTR_s_MOUKEYS_PLAYER_0079b0e4,(int *)&local_8,1);
          local_8 = st::pointer_boundary_cast<char *>(&this->field_0x7c5);
          this->field_0DEE = 1;
          memset((void *)local_8, 0, 0x40); /* compiler bulk-zero initialization */
          *(undefined4 *)&this->field_0x805 = 0;
          *(undefined4 *)&this->field_0x809 = 0;
          this->field_0x80d = 0;
          puVar4 = st::fn_006F1CE0(this_00,0xc,PTR_s_LASTLOG_0079b0e8,(int *)&local_8,0);
          if (((puVar4 == nullptr) && (this != (AnonShape_00572510_F06DC155 *)0xfffff83b)) &&
             (&this->field_0785 != nullptr)) {
            uVar7 = 0xffffffff;
            pcVar5 = &this->field_0785;
            do {
              pcVar10 = pcVar5;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar10 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar10;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar5 = pcVar10 + -uVar7;
            pcVar10 = st::pointer_boundary_cast<char *>(&this->field_0x7c5);
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar7 = uVar7 & 3; this_00 = local_14, uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar10 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar10 = pcVar10 + 1;
            }
          }
          iVar11 = 0;
          local_8 = st::pointer_boundary_cast<char *>(&this->field_0x805);
          st::fn_006F1CE0(this_00,0xc,PTR_s_LASTPSW_0079b0ec,(int *)&local_8,0);
          iVar6 = _DAT_008072f8;
          _DAT_008072f8 = 0;
          _DAT_008072fc = 0x82;
          uVar7 = 0;
          do {
            iVar11 = iVar11 + (uint)(byte)(&DAT_008072f8)[uVar7];
            uVar7 = uVar7 + 1;
          } while (uVar7 < 0x82);
          if (iVar11 != iVar6) {
            st::fn_00404769(this,(LPDWORD)0x0,(PHKEY)0x1);
          }
          pcVar5 = &CHAR_N_007ca694;
          pbVar12 = st::pointer_boundary_cast<byte *>(&this->field_0x640);
          do {
            bVar2 = *pbVar12;
            bVar13 = bVar2 < (byte)*pcVar5;
            if (bVar2 != *pcVar5) {
LAB_005727ec:
              iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_005727f1;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar12[1];
            bVar13 = bVar2 < (byte)pcVar5[1];
            if (bVar2 != pcVar5[1]) goto LAB_005727ec;
            pbVar12 = pbVar12 + 2;
            pcVar5 = pcVar5 + 2;
          } while (bVar2 != 0);
          iVar6 = 0;
LAB_005727f1:
          if ((iVar6 == 0) && ((char)DAT_00807300 == '\x02')) {
            STPiece<0,1>(DAT_00807300) = '\x01';
          }
          st::fn_00403D00();
          st::fn_006F1170(this_00);
        }
        g_currentExceptionFrame = local_58.previous;
        local_10 = this;
      }
      else {
        g_currentExceptionFrame = local_58.previous;
        local_c = 0;
      }
      param_1 = local_10;
      if (local_c != 0) {
        return;
      }
    }
    param_1->field_0DEE = 0;
  }
  return;
}

// 00572920 FUN_00572920
#line 4 "decomp/ST.exe/functions/00572920/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall st::fn_00572920(void *this,byte param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  LSTATUS LVar3;
  uint uVar4;
  int iVar5;
  cMf32 *this_00;
  byte local_158 [260];
  InternalExceptionFrame local_54;
  void *local_10;
  undefined4 local_c;
  HKEY local_8;

  local_c = 1;
  local_10 = this;
  if ((param_1 & 1) != 0) {
    LVar3 = st::external_000000C5((HKEY)&DAT_80000001,st::pointer_boundary_cast<LPCSTR>("SOFTWARE\\Ellipse Studios\\Submarine Titans\\Version"),st::pointer_boundary_cast<PHKEY>(&local_8));
    if (LVar3 == 0) {
      st::external_000000C6(local_8,st::pointer_boundary_cast<LPCSTR>("LastPlayer"),0,1,(BYTE *)((int)this + 0x785),0x40);
    }
    st::external_000000C9(local_8);
    _DAT_008072f8 = 0;
    _DAT_008072fc = 0x82;
    uVar4 = 0;
    do {
      _DAT_008072f8 = _DAT_008072f8 + (uint)(byte)(&DAT_008072f8)[uVar4];
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x82);
    st::external_00000080((LPSTR)local_158,st::mutable_c_string("%s%s%s"),(int)this + 0x28,st_global_0079B0CC,
              (int)this + 0x785);
    st::external_00000054((LPCSTR)local_158,(LPSECURITY_ATTRIBUTES)0x0);
    st::external_00000080((LPSTR)local_158,st::mutable_c_string("%s\\%s"),local_158,PTR_s_PL_LOG_0079b0d0);
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    iVar5 = st::fn_0072D7F0(local_54.jumpBuffer,0);
    if (iVar5 == 0) {
      this_00 = (cMf32 *)st::fn_006F0EC0(0x345,local_158,2,0,0);
      if (this_00 != nullptr) {
        st::fn_006F13F0(this_00,0xc,PTR_s_OPTIONS_PLAYER_0079b0d4,st::pointer_boundary_cast<byte *>(&DAT_008072f8),0x82,nullptr
                      ,'\0',nullptr);
        pvVar1 = local_10;
        st::fn_006F13F0(this_00,0xc,PTR_s_LASTLOG_0079b0e8,(byte *)((int)local_10 + 0x7c5),0x40,
                      nullptr,'\0',nullptr);
        st::fn_006F13F0(this_00,0xc,PTR_s_LASTPSW_0079b0ec,(byte *)((int)pvVar1 + 0x805),9,
                      nullptr,'\0',nullptr);
        st::fn_006F1170(this_00);
      }
      g_currentExceptionFrame = local_54.previous;
    }
    else {
      g_currentExceptionFrame = local_54.previous;
      local_c = 0;
    }
  }
  uVar2 = local_c;
  if ((param_1 & 2) != 0) {
    LVar3 = st::external_000000C5((HKEY)&DAT_80000001,st::pointer_boundary_cast<LPCSTR>("SOFTWARE\\Ellipse Studios\\Submarine Titans"),st::pointer_boundary_cast<PHKEY>(&local_8));
    if (LVar3 == 0) {
      st::external_000000C6(local_8,st::pointer_boundary_cast<LPCSTR>("Editor"),0,3,(BYTE *)&DAT_008071f8,0x100);
    }
    st::external_000000C9(local_8);
  }
  return uVar2;
}

// 00572BA0 FUN_00572ba0
#line 4 "decomp/ST.exe/functions/00572BA0/decomp.c"
undefined4 __fastcall st::fn_00572BA0(int param_1)

{
  int iVar2;
  int iVar1;
  cMf32 *this;
  byte local_154 [260];
  InternalExceptionFrame local_50;
  int local_c;
  undefined4 local_8;

  local_8 = 1;
  local_c = param_1;
  st::external_00000080((LPSTR)local_154,st::mutable_c_string("%s%s%s\\%s"),param_1 + 0x28,st_global_0079B0CC,
            param_1 + 0x785,PTR_s_PL_LOG_0079b0d0);
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar1 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar1 == 0) {
    this = (cMf32 *)st::fn_006F0EC0(0x345,local_154,2,0,0);
    iVar2 = local_c;
    if (this != nullptr) {
      st::fn_006F13F0(this,0xc,PTR_s_AIKEYS_PLAYER_0079b0dc,(byte *)(local_c + 0xd86),0x28,
                    nullptr,'\0',nullptr);
      st::fn_006F13F0(this,0xc,PTR_s_ACCKEYS_PLAYER_0079b0d8,(byte *)(iVar2 + 0x80e),400,
                    nullptr,'\0',nullptr);
      st::fn_006F13F0(this,0xc,PTR_s_SYSKEYS_PLAYER_0079b0e0,(byte *)(iVar2 + 0x99e),0x140,
                    nullptr,'\0',nullptr);
      st::fn_006F13F0(this,0xc,PTR_s_MOUKEYS_PLAYER_0079b0e4,(byte *)(iVar2 + 0xc1e),0x78,
                    nullptr,'\0',nullptr);
      st::fn_006F1170(this);
    }
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

// 00572D30 FUN_00572d30
#line 4 "decomp/ST.exe/functions/00572D30/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00572D30 -> EXTERNAL:000000C6 @ 00573032

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00572D30 -> EXTERNAL:000000C6 @ 00573001 */

undefined4 __thiscall st::fn_00572D30(void *this,BYTE *param_1,BYTE *param_2)

{
  char *pcVar1;
  char cVar2;
  LSTATUS LVar3;
  uint uVar4;
  UINT UVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  code *pcVar10;
  char *pcVar11;
  undefined4 local_1c [2];
  undefined2 local_14;
  char *local_10;
  char *local_c;
  HKEY local_8;

  LVar3 = st::external_000000C7((HKEY)&DAT_80000002,st::pointer_boundary_cast<LPCSTR>("SOFTWARE\\Ellipse Studios\\Submarine Titans\\Version"),st::pointer_boundary_cast<PHKEY>(&local_8));
  pcVar10 = RegSetValueExA_exref;
  if (LVar3 == 0) {
    LVar3 = st::external_000000C6(local_8,st::pointer_boundary_cast<LPCSTR>(&DAT_007ca4f8),0,4,(BYTE *)((int)this + 0x779),4);
    if ((((LVar3 == 0) &&
         (LVar3 = st::external_000000C6(local_8,st::pointer_boundary_cast<LPCSTR>("Version"),0,4,(BYTE *)((int)this + 0x77d),4),
         LVar3 == 0)) &&
        (LVar3 = st::external_000000C6(local_8,st::pointer_boundary_cast<LPCSTR>("Folder"),0,1,(BYTE *)((int)this + 0x645),0x104),
        LVar3 == 0)) &&
       ((LVar3 = st::external_000000C6(local_8,st::pointer_boundary_cast<LPCSTR>(&DAT_007ca508),0,1,(BYTE *)((int)this + 0x749),0x30),
        LVar3 == 0 &&
        (LVar3 = st::external_000000C6(local_8,st::pointer_boundary_cast<LPCSTR>("LastPlayer"),0,1,(BYTE *)((int)this + 0x785),0x40),
        LVar3 == 0)))) {
      if (param_1 != nullptr) {
        local_1c[0] = DAT_007ca690;
        local_1c[1] = 0;
        local_14 = 0;
        uVar4 = st::fn_00401D84();
        local_1c[0] = STReplaceLowByte((uint32_t)(local_1c[0]), (uint8_t)((char)uVar4));
        UVar4 = st::external_0000004E((LPCSTR)local_1c);
        if (UVar4 != 5) {
          uVar6 = 0xffffffff;
          pcVar9 = &CHAR_N_007ca694;
          do {
            pcVar11 = pcVar9;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar11 = pcVar9 + 1;
            cVar2 = *pcVar9;
            pcVar9 = pcVar11;
          } while (cVar2 != '\0');
          uVar6 = ~uVar6;
          pcVar9 = pcVar11 + -uVar6;
          pcVar11 = (char *)local_1c;
          memmove(pcVar11, pcVar9, uVar6); /* compiler REP MOVS byte copy */
          uVar7 = 0;
        }
        st::fn_006B78C0((char *)local_1c,(char *)local_1c);
        uVar6 = 0xffffffff;
        pcVar9 = (char *)local_1c;
        do {
          pcVar11 = pcVar9;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6;
        pcVar9 = pcVar11 + -uVar6;
        pcVar11 = (char *)((int)this + 0x640);
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; pcVar10 = RegSetValueExA_exref, uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        }
      }
      (*pcVar10)(local_8,"CDAudioDrive",0,1,(int)this + 0x640,5);
      iVar5 = (*pcVar10)(local_8,"CharSet",0,4,(int)this + 0x781,4);
      if (iVar5 != 0) {
        st::external_000000C9(local_8);
        return 0;
      }
      iVar5 = (*pcVar10)(local_8,"Server",0,1,(int)this + 0xdae,0x40);
      if (iVar5 != 0) {
        st::external_000000C9(local_8);
        return 0;
      }
      if ((((uint)param_2 & 2) != 0) &&
         (iVar5 = (*pcVar10)(local_8,"Editor",0,3,&DAT_008071f8,0x100), iVar5 != 0)) {
        st::external_000000C9(local_8);
        return 0;
      }
      st::external_000000C9(local_8);
      pcVar9 = (char *)((int)this + 0x28);
      st::fn_006B8280(pcVar9,pcVar9);
      local_c = (char *)((int)this + 300);
      st::fn_006B8280(local_c,local_c);
      local_10 = (char *)((int)this + 0x438);
      st::fn_006B8280(local_10,local_10);
      pcVar11 = (char *)((int)this + 0x230);
      st::fn_006B8280(pcVar11,pcVar11);
      pcVar1 = (char *)((int)this + 0x334);
      st::fn_006B8280(pcVar1,pcVar1);
      pcVar8 = (char *)((int)this + 0x53c);
      st::fn_006B8280(pcVar8,pcVar8);
      LVar3 = st::external_000000C7((HKEY)&DAT_80000002,st::pointer_boundary_cast<LPCSTR>("SOFTWARE\\Ellipse Studios\\Submarine Titans\\Directories"),st::pointer_boundary_cast<PHKEY>(&local_8)
                           );
      if (LVar3 == 0) {
        iVar5 = (*pcVar10)(local_8,"MainPath",0,1,pcVar9,0x104);
        if (iVar5 != 0) {
          st::external_000000C9(local_8);
          return 0;
        }
        iVar5 = (*pcVar10)(local_8,"SoundPath",0,1,pcVar11,0x104);
        if (iVar5 != 0) {
          st::external_000000C9(local_8);
          return 0;
        }
        iVar5 = (*pcVar10)(local_8,"MusicPath",0,1,pcVar1,0x104);
        if (iVar5 != 0) {
          st::external_000000C9(local_8);
          return 0;
        }
        iVar5 = (*pcVar10)(local_8,"VideoPath",0,1,local_c,0x104);
        if (iVar5 == 0) {
          iVar5 = (*pcVar10)(local_8,"DataPath",0,1,local_10,0x104);
          if (iVar5 != 0) {
            st::external_000000C9(local_8);
            return 0;
          }
          iVar5 = (*pcVar10)(local_8,"InstPath",0,1,pcVar8,0x104);
          if (iVar5 == 0) {
            st::external_000000C9(local_8);
            return 1;
          }
          st::external_000000C9(local_8);
          return 0;
        }
        st::external_000000C9(local_8);
        return 0;
      }
    }
    else {
      st::external_000000C9(local_8);
    }
  }
  return 0;
}

// 00573240 FUN_00573240
#line 1 "decomp/ST.exe/functions/00573240/decomp.c"

/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_00573240(void)

{
  return;
}

// 005734C0 FUN_005734c0
#line 4 "decomp/ST.exe/functions/005734C0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 005734C0 -> EXTERNAL:000000C4 @ 00573652

   [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 005734C0 -> EXTERNAL:000000C5 @ 00573628

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005734C0(void *this,LPDWORD lpcbData,PHKEY phkResult)

{
  char cVar1;
  uint uVar2;
  LSTATUS LVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar8;
  void *local_8;

  local_8 = this;
  if (((uint)phkResult & 1) != 0) {
    _DAT_008072f8 = 0;
    memset(&DAT_008072f8, 0, 0x82); /* compiler bulk-zero initialization */
    iVar4 = 0;
    _DAT_008072fc = 0x82;
    uVar2 = 0;
    do {
      _DAT_008072f8 = _DAT_008072f8 + (uint)(byte)(&DAT_008072f8)[uVar2];
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x82);
    STPiece<1,1>(DAT_00807300) = STPiece<1,1>(DAT_00807300) | 0xf;
    DAT_0080731a = 1;
    DAT_0080731e = 1;
    DAT_00807322 = 1;
    DAT_00807326 = 1;
    DAT_00807328 = 1;
    DAT_0080732c = 1;
    DAT_00807327 = 7;
    STPiece<0,1>(DAT_00807300) = 8;
    _DAT_00807330 = 3;
    DAT_00807332 = 1;
    _DAT_00807336 = 1;
    DAT_0080734c = 1;
    DAT_0080733a = 0;
    DAT_0080733b = 2;
    DAT_0080733c = 0;
    DAT_00807340 = 0;
    DAT_00807361 = 1;
    DAT_00807341 = 1;
    DAT_00807342 = 1;
    DAT_00807346 = 10;
    DAT_00807347 = 1;
    DAT_00807348 = 0;
    DAT_00807349 = 0;
    DAT_0080734d = 1;
    DAT_0080734e = 0;
    DAT_00807352 = 0;
    DAT_00807356 = 0;
    DAT_0080735a = 0;
    DAT_0080735e = 0;
    DAT_00807363 = 2;
    DAT_00807364 = 1;
    st::fn_00403760(st::pointer_boundary_cast<AnonShape_005739A0_A4724D00 *>(this));
  }
  if (((uint)phkResult & 2) != 0) {
    memset(&DAT_008071f8, 0, 0x100); /* compiler bulk-zero initialization */
  }
  if (lpcbData == (LPDWORD)0x0) goto LAB_005737e5;
  LVar3 = st::external_000000C5((HKEY)&DAT_80000001,st::pointer_boundary_cast<LPCSTR>("SOFTWARE\\Microsoft\\Windows\\CurrentVersion"),
                      (PHKEY)&phkResult);
  if (LVar3 == 0) {
    lpcbData = (LPDWORD)0x40;
    LVar3 = st::external_000000C4((HKEY)phkResult,st::pointer_boundary_cast<LPCSTR>("RegisteredOwner"),(LPDWORD)0x0,
                             (LPDWORD)&local_8,(LPBYTE)((int)this + 0x785),(LPDWORD)&lpcbData);
    st::external_000000C9((HKEY)phkResult);
    if (LVar3 != 0) goto LAB_0057366c;
  }
  else {
LAB_0057366c:
    uVar2 = 0xffffffff;
    pcVar6 = &CHAR_00h_008016a0;
    do {
      pcVar8 = pcVar6;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar6 = pcVar8 + -uVar2;
    pcVar8 = (char *)((int)this + 0x785);
    memmove(pcVar8, pcVar6, uVar2); /* compiler REP MOVS byte copy */
    uVar5 = 0;
  }
  uVar2 = 0xffffffff;
  pcVar6 = &CHAR_N_007ca694;
  do {
    pcVar8 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar8 + -uVar2;
  pcVar8 = (char *)((int)this + 0x640);
  memmove(pcVar8, pcVar6, uVar2); /* compiler REP MOVS byte copy */
  uVar5 = 0;
  uVar2 = 0xffffffff;
  STField<undefined4>(this,0x779) = 0xdeb00008;
  STField<undefined4>(this,0x77d) = 0;
  pcVar6 = &CHAR_N_007ca684;
  do {
    pcVar8 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar8 + -uVar2;
  pcVar8 = (char *)((int)this + 0x749);
  memmove(pcVar8, pcVar6, uVar2); /* compiler REP MOVS byte copy */
  uVar5 = 0;
  uVar2 = 0xffffffff;
  pcVar6 = &CHAR_00h_008016a0;
  do {
    pcVar8 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar8 + -uVar2;
  pcVar8 = (char *)((int)this + 0x28);
  memmove(pcVar8, pcVar6, uVar2); /* compiler REP MOVS byte copy */
  uVar5 = 0;
  uVar2 = 0xffffffff;
  pcVar6 = &CHAR_00h_008016a0;
  do {
    pcVar8 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar8 + -uVar2;
  pcVar8 = (char *)((int)this + 300);
  memmove(pcVar8, pcVar6, uVar2); /* compiler REP MOVS byte copy */
  uVar5 = 0;
  uVar2 = 0xffffffff;
  pcVar6 = &CHAR_00h_008016a0;
  do {
    pcVar8 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar8 + -uVar2;
  pcVar8 = (char *)((int)this + 0x438);
  memmove(pcVar8, pcVar6, uVar2); /* compiler REP MOVS byte copy */
  uVar5 = 0;
  uVar2 = 0xffffffff;
  pcVar6 = &CHAR_00h_008016a0;
  do {
    pcVar8 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar8 + -uVar2;
  pcVar8 = (char *)((int)this + 0x230);
  memmove(pcVar8, pcVar6, uVar2); /* compiler REP MOVS byte copy */
  uVar5 = 0;
  uVar2 = 0xffffffff;
  pcVar6 = &CHAR_00h_008016a0;
  do {
    pcVar8 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar8 + -uVar2;
  pcVar8 = (char *)((int)this + 0x334);
  memmove(pcVar8, pcVar6, uVar2); /* compiler REP MOVS byte copy */
  uVar5 = 0;
  uVar2 = 0xffffffff;
  pcVar6 = &CHAR_00h_008016a0;
  do {
    pcVar8 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar8 + -uVar2;
  pcVar8 = (char *)((int)this + 0x645);
  memmove(pcVar8, pcVar6, uVar2); /* compiler REP MOVS byte copy */
LAB_005737e5:
  st::fn_004026A8(st::pointer_boundary_cast<AnonReceiver_00573260 *>(this));
  return;
}

// 005738D0 FUN_005738d0
#line 4 "decomp/ST.exe/functions/005738D0/decomp.c"
undefined4 __fastcall st::fn_005738D0(AnonShape_005738D0_F693E267 *param_1)

{
  int iVar1;
  CHAR local_108 [260];

  st::fn_00404769(param_1,(LPDWORD)0x0,(PHKEY)0x1);
  st::fn_004026A8
            ((AnonReceiver_00573260 *)param_1);
  st::external_00000080(local_108,st::mutable_c_string("%s%s%s"),&param_1->field_0x28,st_global_0079B0CC,
            &param_1->field_0x785);
  st::external_00000054(local_108,(LPSECURITY_ATTRIBUTES)0x0);
  iVar1 = st::fn_004042B9(param_1,1);
  if (iVar1 != 0) {
    iVar1 = st::fn_004046B0((int)param_1);
    if (iVar1 != 0) {
      param_1->field_0DEE = 1;
      return 1;
    }
  }
  param_1->field_0DEE = 0;
  return 0;
}

// 005739A0 FUN_005739a0
#line 4 "decomp/ST.exe/functions/005739A0/decomp.c"
void __fastcall st::fn_005739A0(AnonShape_005739A0_A4724D00 *param_1)

{
  int iVar1;

  memset(&param_1->field_080E, 0, 0x190); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&param_1->field_0D86, 0, 0x28); /* compiler bulk-zero initialization */
  iVar1 = 0;
  param_1->field_099E = 0x4e;
  param_1->field_0ADE = 0xa206;
  param_1->field_09A2 = 0x4a;
  param_1->field_0AE2 = 0xa207;
  param_1->field_09A6 = 0x37;
  param_1->field_0AE6 = 0xa209;
  param_1->field_09AA = 0xb5;
  param_1->field_0AEA = 0xa208;
  param_1->field_09AE = 200;
  param_1->field_0AEE = 0xa12f;
  param_1->field_09B2 = 0xd0;
  param_1->field_0AF2 = 0xa130;
  param_1->field_09B6 = 0xcd;
  param_1->field_0AF6 = 0xa131;
  param_1->field_09BA = 0xcb;
  param_1->field_0AFA = 0xa132;
  param_1->field_09BE = 1;
  param_1->field_0AFE = 0xa101;
  param_1->field_09C2 = 0x8000018;
  param_1->field_0B02 = 0xa102;
  param_1->field_09C6 = 0x1c;
  param_1->field_0B06 = 0xa124;
  param_1->field_09CA = 0x8000039;
  param_1->field_0B0A = 0xa122;
  param_1->field_09CE = 0xf;
  param_1->field_0B0E = 0xa123;
  param_1->field_09D2 = 0x800001f;
  param_1->field_0B12 = 0xa11f;
  param_1->field_09D6 = 0x8000026;
  param_1->field_0B16 = 0xa120;
  param_1->field_09DA = 0x15;
  param_1->field_0B1A = 0xa105;
  param_1->field_09DE = 0x31;
  param_1->field_0B1E = 0xa106;
  param_1->field_09E2 = 0x4800002e;
  param_1->field_0B22 = 0xa0ff;
  param_1->field_09E6 = 0x4000002d;
  param_1->field_0B26 = 0xa103;
  param_1->field_09EA = 0x40000010;
  param_1->field_0B2A = 0xa104;
  param_1->field_09EE = 0x4f;
  param_1->field_0B2E = 0xa1ff;
  param_1->field_09F2 = 0x50;
  param_1->field_0B32 = 0xa200;
  param_1->field_09F6 = 0x51;
  param_1->field_0B36 = 0xa201;
  param_1->field_09FA = 0x4b;
  param_1->field_0B3A = 0xa202;
  param_1->field_09FE = 0x4c;
  param_1->field_0B3E = 0xa203;
  param_1->field_0A02 = 0x52;
  param_1->field_0B42 = 0xa204;
  param_1->field_0A06 = 0x53;
  param_1->field_0B46 = 0xa205;
  param_1->field_0A0A = 0x8000002;
  param_1->field_0B4A = 0xa313;
  param_1->field_0A0E = 0x8000003;
  param_1->field_0B4E = 0xa314;
  param_1->field_0A12 = 0x8000004;
  param_1->field_0B52 = 0xa315;
  param_1->field_0A16 = 0x8000005;
  param_1->field_0B56 = 0xa316;
  param_1->field_0A1A = 0x8000006;
  param_1->field_0B5A = 0xa317;
  param_1->field_0A1E = 0x8000007;
  param_1->field_0B5E = 0xa318;
  param_1->field_0A22 = 0x8000008;
  param_1->field_0B62 = 0xa319;
  param_1->field_0A26 = 0x8000009;
  param_1->field_0B66 = 0xa31a;
  param_1->field_0A2A = 0x800000a;
  param_1->field_0B6A = 0xa31b;
  param_1->field_0A2E = 0x800000b;
  param_1->field_0B6E = 0xa31c;
  param_1->field_0A32 = 2;
  param_1->field_0B72 = 0xa31d;
  param_1->field_0A36 = 3;
  param_1->field_0B76 = 0xa31e;
  param_1->field_0A3A = 4;
  param_1->field_0B7A = 0xa31f;
  param_1->field_0A3E = 5;
  param_1->field_0B7E = 0xa320;
  param_1->field_0A42 = 6;
  param_1->field_0B82 = 0xa321;
  param_1->field_0A46 = 7;
  param_1->field_0B86 = 0xa322;
  param_1->field_0A4A = 8;
  param_1->field_0B8A = 0xa323;
  param_1->field_0A4E = 9;
  param_1->field_0B8E = 0xa324;
  param_1->field_0A52 = 10;
  param_1->field_0B92 = 0xa325;
  param_1->field_0A56 = 0xb;
  param_1->field_0B96 = 0xa326;
  param_1->field_0A5A = 0x100003b;
  param_1->field_0B9A = 0xa2ff;
  param_1->field_0A5E = 0x100003c;
  param_1->field_0B9E = 0xa300;
  param_1->field_0A62 = 0x100003d;
  param_1->field_0BA2 = 0xa301;
  param_1->field_0A66 = 0x100003e;
  param_1->field_0BA6 = 0xa302;
  param_1->field_0A6A = 0x100003f;
  param_1->field_0BAA = 0xa303;
  param_1->field_0A6E = 0x1000040;
  param_1->field_0BAE = 0xa304;
  param_1->field_0A72 = 0x1000041;
  param_1->field_0BB2 = 0xa305;
  param_1->field_0A76 = 0x1000042;
  param_1->field_0BB6 = 0xa306;
  param_1->field_0A7A = 0x1000043;
  param_1->field_0BBA = 0xa307;
  param_1->field_0A7E = 0x1000044;
  param_1->field_0BBE = 0xa308;
  param_1->field_0A82 = 0x3b;
  param_1->field_0BC2 = 0xa309;
  param_1->field_0A86 = 0x3c;
  param_1->field_0BC6 = 0xa30a;
  param_1->field_0A8A = 0x3d;
  param_1->field_0BCA = 0xa30b;
  param_1->field_0A8E = 0x3e;
  param_1->field_0BCE = 0xa30c;
  param_1->field_0A92 = 0x3f;
  param_1->field_0BD2 = 0xa30d;
  param_1->field_0A96 = 0x40;
  param_1->field_0BD6 = 0xa30e;
  param_1->field_0A9A = 0x41;
  param_1->field_0BDA = 0xa30f;
  param_1->field_0A9E = 0x42;
  param_1->field_0BDE = 0xa310;
  param_1->field_0AA2 = 0x43;
  param_1->field_0BE2 = 0xa311;
  param_1->field_0AA6 = 0x44;
  param_1->field_0BE6 = 0xa312;
  param_1->field_0AAA = 0x58;
  param_1->field_0BEA = 0xa32f;
  param_1->field_0AAE = 0x57;
  param_1->field_0BEE = 0xa330;
  param_1->field_0AB2 = 0x4000001c;
  param_1->field_0BF2 = 0xa126;
  param_1->field_0AB6 = 0x800001c;
  param_1->field_0BF6 = 0xa127;
  param_1->field_0ABA = 0x100001c;
  param_1->field_0BFA = 0xa125;
  param_1->field_0ABE = 0x39;
  param_1->field_0BFE = 0xa128;
  memset(&param_1->field_0C1E, 0, 0x168); /* compiler bulk-zero initialization */
  param_1->field_0C1E = 0x1000000;
  param_1->field_0C96 = 0xa4ff;
  param_1->field_0D0E = 0xa500;
  param_1->field_0C22 = 0xfe;
  param_1->field_0C9A = 0xa501;
  param_1->field_0D12 = 0xa502;
  param_1->field_0C26 = 0xfd;
  param_1->field_0D16 = 0xa503;
  param_1->field_0C2A = 0xfe;
  param_1->field_0CA2 = 0xa504;
  param_1->field_0D1A = 0xa505;
  param_1->field_0C2E = 0x10000fe;
  param_1->field_0CA6 = 0xa506;
  param_1->field_0D1E = 0xa507;
  param_1->field_0C32 = 0x4800001e;
  param_1->field_0CAA = 0xa508;
  param_1->field_0C36 = 0x48000032;
  param_1->field_0CAE = 0xa509;
  param_1->field_0C3A = 0x4800001f;
  param_1->field_0CB2 = 0xa50a;
  param_1->field_0C3E = 0x48000014;
  param_1->field_0CB6 = 0xa50b;
  param_1->field_0C42 = 0x48000030;
  param_1->field_0CBA = 0xa50c;
  param_1->field_0C46 = 0xfd;
  param_1->field_0D36 = 0xa50d;
  param_1->field_0C4A = 0x1000020;
  param_1->field_0D3A = 0xa50e;
  param_1->field_0C4E = 0xfd;
  param_1->field_0D3E = 0xa50f;
  param_1->field_0C52 = 0xfe;
  param_1->field_0D42 = 0xa510;
  param_1->field_0C56 = 0x10000fe;
  param_1->field_0D46 = 0xa511;
  param_1->field_0C5A = 0x400000fe;
  param_1->field_0D4A = 0xa512;
  param_1->field_0C5E = 0x10000fd;
  param_1->field_0D4E = 0xa513;
  param_1->field_0C62 = 0xfd;
  param_1->field_0D52 = 0xa514;
  param_1->field_0C66 = 0xfe;
  param_1->field_0D56 = 0xa515;
  param_1->field_0C6A = 0xfc;
  param_1->field_0CE2 = 0xa516;
  param_1->field_0C6E = 0xfe;
  param_1->field_0CE6 = 0xa517;
  param_1->field_0D5E = 0xa518;
  param_1->field_0C72 = 0xfd;
  param_1->field_0D62 = 0xa519;
  param_1->field_0C76 = 0x48000013;
  param_1->field_0CEE = 0xa51a;
  param_1->field_080E = 0x32;
  param_1->field_0812 = 0x1e;
  param_1->field_0816 = 0x1f;
  param_1->field_081A = 0x13;
  param_1->field_081E = 0x4000001e;
  param_1->field_0822 = 0x8000022;
  param_1->field_0826 = 0x8000019;
  param_1->field_082A = 0x800001e;
  param_1->field_082E = 0x800002c;
  param_1->field_0832 = 0x800001f;
  param_1->field_0836 = 0x4000002e;
  param_1->field_083A = 0x40000012;
  param_1->field_083E = 0x40000020;
  param_1->field_0842 = 0x40000019;
  param_1->field_0846 = 0x40000022;
  param_1->field_084A = 0x30;
  param_1->field_0852 = 0x26;
  param_1->field_0856 = 0x16;
  param_1->field_085A = 0x40000013;
  param_1->field_085E = 0x18;
  param_1->field_0862 = 0x13;
  param_1->field_0866 = 0x30;
  param_1->field_0882 = 0x1a;
  param_1->field_0886 = 0x1b;
  param_1->field_0892 = 0x14;
  param_1->field_08B6 = 0x2f;
  param_1->field_0D86 = 0x4900003b;
  param_1->field_0D8A = 0x4900003c;
  param_1->field_0D8E = 0x4900003d;
  param_1->field_0D92 = 0x4900003e;
  param_1->field_0D96 = 0x4900003f;
  param_1->field_0D9A = 0x49000040;
  param_1->field_0D9E = 0x49000041;
  param_1->field_0DA2 = 0x49000042;
  param_1->field_0DA6 = 0x49000043;
  param_1->field_0DAA = 0x49000044;
  return;
}

// 00574540 FUN_00574540
#line 1 "decomp/ST.exe/functions/00574540/decomp.c"

/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:007A4108>00574520 | P:007A4108>00574520 */

void st::fn_00574540(void)

{
  PTR_008073cc = PTR_008032c0;
  return;
}

// 00574580 FUN_00574580
#line 1 "decomp/ST.exe/functions/00574580/decomp.c"

/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:007A410C>00574560 | P:007A410C>00574560 */

void st::fn_00574580(void)

{
  DAT_00807560 = st::machine_word_boundary_cast<undefined4>(PTR_008032c4);
  return;
}

// 005745C0 FUN_005745c0
#line 1 "decomp/ST.exe/functions/005745C0/decomp.c"

/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:007A4110>005745A0 | P:007A4110>005745A0 */

void st::fn_005745C0(void)

{
  DAT_008073c8 = st::machine_word_boundary_cast<undefined4>(PTR_008032bc);
  return;
}

// 005745E0 FUN_005745e0
#line 4 "decomp/ST.exe/functions/005745E0/decomp.c"
void __cdecl st::fn_005745E0(AnonShape_005745E0_AF52CC75 *param_1,undefined4 *param_2)

{
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 **ppRVar1;
  ushort uVar2;
  ST3DSMAPContext *pSVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined4 local_28;
  void *local_24;
  int local_20;
  void *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if (((*(short *)(param_2 + 2) != 0) &&
      (uVar2 = STField<ushort>(param_2,0x4e), (uVar2 & 0x4000) == 0)) &&
     (((uVar2 & 0x2000) == 0 || ((uVar2 & 0x1000) == 0)))) {
    *(undefined4 *)(param_1->field_044D + 4) = 0;
    do {
      iVar6 = param_1->field_044D;
      uVar7 = *(uint *)(iVar6 + 4);
      if (*(uint *)(iVar6 + 0xc) <= uVar7) goto cf_break_loop_00574651;
      piVar5 = (int *)(*(int *)(iVar6 + 8) * uVar7 + *(int *)(iVar6 + 0x1c));
      *(uint *)(iVar6 + 4) = uVar7 + 1;
      if (piVar5 == nullptr) goto cf_break_loop_00574651;
    } while (param_2[10] != *piVar5);
    if (piVar5 == nullptr) {
cf_break_loop_00574651:
      local_14 = (int)STField<short>(param_2,6);
      local_18 = (void *)(int)*(short *)(param_2 + 1);
      local_10 = (int)*(short *)(param_2 + 2);
      *(undefined2 *)(param_2 + 1) = 0;
      STField<undefined2>(param_2,6) = 0;
      *(undefined2 *)(param_2 + 2) = 0;
      pSVar3 = g_sT3DSMAPContext_0080760C;
      ppRVar1 = &g_sT3DSMAPContext_0080760C->field_0140;
      *param_2 = st::machine_word_boundary_cast<undefined4>(g_sT3DSMAPContext_0080760C->field_0140);
      *ppRVar1 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)param_2;
      pSVar3->field_013C = st::machine_word_boundary_cast<int>(pSVar3->field_013C + 1);
      st::fn_006DDBE0(g_sT3DSMAPContext_0080760C);
      g_sT3DSMAPContext_0080760C->field_0124 = 3;
      st::fn_006DDD50(g_sT3DSMAPContext_0080760C);
      g_sT3DSMAPContext_0080760C->field_0124 = 4;
      st::fn_006DDD50(g_sT3DSMAPContext_0080760C);
      pSVar3 = g_sT3DSMAPContext_0080760C;
      g_sT3DSMAPContext_0080760C->field_0140 = nullptr;
      pSVar3->field_013C = 0;
      *(undefined2 *)(param_2 + 1) = STPiece<0,2>(local_18);
      STField<undefined2>(param_2,6) = (undefined2)local_14;
      *(undefined2 *)(param_2 + 2) = (undefined2)local_10;
      local_24 = st::fn_006AAC10
                           ((uint)param_1->field_0004 * (uint)param_1->field_0004);
      local_28 = param_2[10];
      local_10 = 0;
      local_c = 0;
      while( true ) {
        do {
          local_14 = 0;
          uVar7 = (uint)param_1->field_0004;
          local_8 = 0;
          if (uVar7 != 0) {
            do {
              iVar6 = uVar7 * local_10 + local_8;
              local_20 = uVar7 * local_c;
              uVar9 = 0;
              if (uVar7 != 0) {
                pcVar10 = (char *)(g_sT3DSMAPContext_0080760C->field_0028 * iVar6 +
                                   g_sT3DSMAPContext_0080760C->field_000C + local_20);
                do {
                  if (*pcVar10 != '\0') {
                    if (*pcVar10 == -1) {
                      local_14 = local_14 + 1;
                      uVar8 = uVar9 & 0x80000003;
                      if ((int)uVar8 < 0) {
                        uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
                      }
                      bVar4 = (&DAT_007ca6a4)[uVar8];
                    }
                    else {
                      uVar8 = uVar9 & 0x80000003;
                      if ((int)uVar8 < 0) {
                        uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
                      }
                      bVar4 = *(byte *)(uVar8 + 0x7ca6a8);
                    }
                    pbVar11 = (byte *)((int)local_24 +
                                      ((int)(uVar9 + ((int)uVar9 >> 0x1f & 3U)) >> 2) +
                                      ((int)(local_20 + (local_20 >> 0x1f & 3U)) >> 2) +
                                      (int)(uVar7 * iVar6) / 2);
                    *pbVar11 = *pbVar11 | bVar4;
                  }
                  uVar9 = uVar9 + 1;
                  pcVar10 = pcVar10 + 1;
                } while ((int)uVar9 < (int)(uint)param_1->field_0004);
              }
              local_8 = local_8 + 1;
              uVar7 = (uint)param_1->field_0004;
            } while (local_8 < (int)uVar7);
          }
          local_c = local_c + 1;
        } while (local_c < 2);
        local_10 = local_10 + 1;
        if (1 < local_10) break;
        local_c = 0;
      }
      local_18 = local_24;
      st::fn_006AE1C0((DArrayTy *)param_1->field_044D,&local_28);
      param_2[6] = st::machine_word_boundary_cast<undefined4>(local_18);
      return;
    }
    param_2[6] = piVar5[1];
  }
  return;
}

// 00574920 FUN_00574920
#line 4 "decomp/ST.exe/functions/00574920/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl
st::fn_00574920(AnonShape_00574920_7507981E *param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  DArrayTy *pDVar2;
  int iVar3;
  byte *puVar4;
  void *pvVar5;
  byte *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  byte *local_60;
  uint local_5c;
  int local_58;
  int local_50;
  undefined4 *local_4c;
  int local_48;
  undefined1 *local_44;
  int local_40;
  int local_3c;
  int local_34;
  uint local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_0079b0f8);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff54);
  local_4c = nullptr;
  iVar3 = (int)param_1->field_0002 * (int)param_1->field_0000;
  local_24 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
  local_40 = 1;
  local_2c = (int *)(&param_1[1].field_0x4 +
                    (local_24 * 5 + param_2 + (param_1->field_0000 * param_3) / 2) * 4);
  local_34 = 5;
  ExceptionList = &local_14;
  do {
    if (local_34 < 0) {
      ExceptionList = local_14;
      return;
    }
    iVar3 = *local_2c;
    if (iVar3 != 0) {
      local_20 = 0;
      local_3c = 0;
      local_28 = 0;
      local_58 = iVar3;
      if ((*(int *)(iVar3 + 0x10) != 0) && (*(int *)(iVar3 + 0x14) != 0)) {
        param_1->field_0451->iteratorIndex = 0;
        do {
          pDVar2 = param_1->field_0451;
          uVar10 = pDVar2->iteratorIndex;
          if (uVar10 < pDVar2->count) {
            piVar12 = DArrayAt<int>(pDVar2, uVar10);
            pDVar2->iteratorIndex = uVar10 + 1;
          }
          else {
            piVar12 = nullptr;
          }
        } while ((piVar12 != nullptr) &&
                ((*(int *)(iVar3 + 0x10) != *piVar12 || (*(int *)(iVar3 + 0x14) != piVar12[1]))));
        local_3c = 1;
        if (piVar12 == nullptr) {
          st::fn_006A5E90(*(short **)(iVar3 + 0xc));
          puVar4 = st::pointer_boundary_cast<byte *>(st::fn_006AAC70
                             ((uint)(byte)param_1->field_0x4 * (uint)(byte)param_1->field_0x4 * 4));
          *(undefined4 **)(iVar3 + 0xc) = st::pointer_boundary_cast<undefined4 *>(puVar4);
          local_28 = 1;
          local_20 = 1;
          if (*(undefined4 **)(iVar3 + 0x10) != nullptr) {
            puVar6 = (byte *)(*(undefined4 **)(iVar3 + 0x10));
            for (iVar8 = (uint)(byte)param_1->field_0x4 * (uint)(byte)param_1->field_0x4; iVar8 != 0
                ; iVar8 = iVar8 + -1) {
              *puVar4 = *puVar6;
              puVar6 = (byte *)(puVar6 + 1);
              puVar4 = (byte *)(puVar4 + 1);
            }
            for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
              *(undefined1 *)puVar4 = *(undefined1 *)puVar6;
              puVar6 = (byte *)((int)puVar6 + 1);
              puVar4 = (byte *)((int)puVar4 + 1);
            }
          }
          local_8 = 0;
          iVar8 = (uint)(byte)param_1->field_0x4 << 1;
          st::fn_006B03D0(*(char **)(iVar3 + 0xc),*(char **)(iVar3 + 0x14),iVar8,iVar8,
                       *(char *)(iVar3 + 10));
          local_8 = 0xffffffff;
        }
        else {
          if (*(short **)(iVar3 + 0xc) != nullptr) {
            param_1->field_0451->iteratorIndex = 0;
            do {
              pDVar2 = param_1->field_0451;
              uVar10 = pDVar2->iteratorIndex;
              if (uVar10 < pDVar2->count) {
                piVar12 = DArrayAt<int>(pDVar2, uVar10);
                pDVar2->iteratorIndex = uVar10 + 1;
              }
              else {
                piVar12 = nullptr;
              }
              if (piVar12 == nullptr) goto LAB_00574b14;
            } while (*(int *)(iVar3 + 0xc) != piVar12[2]);
            if (piVar12 == nullptr) {
LAB_00574b14:
              st::fn_006A5E90(*(short **)(iVar3 + 0xc));
            }
          }
          *(int *)(iVar3 + 0xc) = piVar12[2];
        }
      }
      if ((local_34 == 0) || ((*(byte *)(iVar3 + 0x4f) & 0x10) != 0)) {
        if (local_40 == 0) goto LAB_00574b4a;
      }
      else {
        local_4c = *(undefined4 **)(iVar3 + 0x18);
        if (local_4c != nullptr) {
LAB_00574b4a:
          if (local_40 == 0) {
            if (local_3c == 0) {
              if (*(int *)(iVar3 + 0xc) != 0) {
                param_1->field_0451->iteratorIndex = 0;
                do {
                  pDVar2 = param_1->field_0451;
                  uVar10 = pDVar2->iteratorIndex;
                  if (uVar10 < pDVar2->count) {
                    pvVar5 = DArrayAt<void>(pDVar2, uVar10);
                    pDVar2->iteratorIndex = uVar10 + 1;
                  }
                  else {
                    pvVar5 = nullptr;
                  }
                  if (pvVar5 == nullptr) goto LAB_00574bcc;
                } while (*(int *)(iVar3 + 0xc) != STField<int>(pvVar5,8));
                if (pvVar5 == nullptr) {
LAB_00574bcc:
                  st::fn_006A5E90(*(short **)(iVar3 + 0xc));
                }
              }
              puVar6 = st::pointer_boundary_cast<byte *>(st::fn_006AAC70
                                 ((uint)(byte)param_1->field_0x4 * (uint)(byte)param_1->field_0x4 *
                                  4));
              *(undefined4 **)(iVar3 + 0xc) = st::pointer_boundary_cast<undefined4 *>(puVar6);
              puVar4 = (byte *)(*(undefined4 **)(iVar3 + 0x10));
              if ((puVar4 != nullptr) ||
                 (puVar4 = st::pointer_boundary_cast<byte *>(*(undefined4 **)(iVar3 + 0x14)), puVar4 != nullptr)) {
                for (iVar8 = (uint)(byte)param_1->field_0x4 * (uint)(byte)param_1->field_0x4;
                    iVar8 != 0; iVar8 = iVar8 + -1) {
                  *puVar6 = *puVar4;
                  puVar4 = (byte *)(puVar4 + 1);
                  puVar6 = (byte *)(puVar6 + 1);
                }
                for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
                  puVar4 = (byte *)((int)puVar4 + 1);
                  puVar6 = (byte *)((int)puVar6 + 1);
                }
              }
            }
            else if (local_20 == 0) {
              puVar7 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC70
                                 ((uint)(byte)param_1->field_0x4 * (uint)(byte)param_1->field_0x4 *
                                  4));
              puVar4 = (byte *)(*(undefined4 **)(iVar3 + 0xc));
              puVar6 = (byte *)(puVar7);
              for (iVar8 = (uint)(byte)param_1->field_0x4 * (uint)(byte)param_1->field_0x4;
                  iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar6 = *puVar4;
                puVar4 = (byte *)(puVar4 + 1);
                puVar6 = (byte *)(puVar6 + 1);
              }
              for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
                *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
                puVar4 = (byte *)((int)puVar4 + 1);
                puVar6 = (byte *)((int)puVar6 + 1);
              }
              *(undefined4 **)(iVar3 + 0xc) = puVar7;
            }
            local_28 = 0;
            if ((local_34 == 0) || ((*(byte *)(iVar3 + 0x4f) & 0x10) != 0)) {
              for (local_50 = 0; local_50 < (int)((uint)(byte)param_1->field_0x4 * 2);
                  local_50 = local_50 + 1) {
                iVar8 = (uint)(byte)param_1->field_0x4 * local_50;
                local_48 = iVar8 / 2 + (int)param_4;
                local_60 = (byte *)(*(int *)(iVar3 + 0xc) + iVar8 * 2);
                local_30 = 0;
                while ((int)local_30 < (int)((uint)(byte)param_1->field_0x4 * 2)) {
                  uVar10 = local_30 & 0x80000003;
                  if ((int)uVar10 < 0) {
                    uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
                  }
                  local_5c = (uint)(*(byte *)(((int)(local_30 + ((int)local_30 >> 0x1f & 3U)) >> 2)
                                             + local_48) & (&DAT_007ca6a4)[uVar10]);
                  if (local_5c == 0) {
LAB_00574e10:
                    local_30 = local_30 + 1;
                    local_60 = local_60 + 1;
                  }
                  else {
                    if (local_5c != (byte)(&DAT_007ca6a4)[uVar10]) {
                      *local_60 = *(byte *)((uint)*local_60 + DAT_008073c8);
                      goto LAB_00574e10;
                    }
                    *local_60 = *(byte *)((uint)*local_60 + DAT_00807560);
                    local_30 = local_30 + 1;
                    local_60 = local_60 + 1;
                  }
                }
              }
            }
            else {
              for (local_50 = 0; local_50 < (int)((uint)(byte)param_1->field_0x4 * 2);
                  local_50 = local_50 + 1) {
                iVar11 = (uint)(byte)param_1->field_0x4 * local_50;
                iVar8 = iVar11 / 2;
                local_48 = iVar8 + (int)param_4;
                local_44 = (undefined1 *)(iVar8 + (int)local_4c);
                local_60 = (byte *)(*(int *)(iVar3 + 0xc) + iVar11 * 2);
                for (local_30 = 0; (int)local_30 < (int)((uint)(byte)param_1->field_0x4 * 2);
                    local_30 = local_30 + 1) {
                  iVar3 = (int)(local_30 + ((int)local_30 >> 0x1f & 3U)) >> 2;
                  uVar10 = local_30 & 0x80000003;
                  if ((int)uVar10 < 0) {
                    uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
                  }
                  bVar1 = (&DAT_007ca6a4)[uVar10];
                  if ((bVar1 & local_44[iVar3]) == bVar1) {
                    local_5c = (uint)(*(byte *)(iVar3 + local_48) & bVar1);
                    if (local_5c != 0) {
                      if (local_5c == bVar1) {
                        *local_60 = *(byte *)((uint)*local_60 + DAT_00807560);
                      }
                      else {
                        *local_60 = *(byte *)((uint)*local_60 + DAT_008073c8);
                      }
                    }
                  }
                  *(byte *)(iVar3 + local_48) =
                       *(byte *)(iVar3 + local_48) | (&DAT_007ca6a4)[uVar10] & local_44[iVar3];
                  local_60 = local_60 + 1;
                  iVar3 = local_58;
                }
              }
            }
            local_8 = 0xffffffff;
          }
          else {
            uVar9 = (uint)(byte)param_1->field_0x4 * (uint)(byte)param_1->field_0x4;
            puVar4 = (byte *)(local_4c);
            puVar6 = (byte *)(param_4);
            memmove(puVar6, puVar4, uVar9); /* compiler REP MOVS byte copy */
            local_40 = 0;
          }
        }
      }
      if (local_28 != 0) {
        local_6c = *(undefined4 *)(iVar3 + 0x10);
        local_68 = *(undefined4 *)(iVar3 + 0x14);
        local_64 = *(undefined4 *)(iVar3 + 0xc);
        st::fn_006AE1C0(param_1->field_0451,&local_6c);
      }
    }
    local_34 = local_34 + -1;
    local_2c = local_2c + -local_24;
  } while( true );
}

// 00575030 FUN_00575030
#line 4 "decomp/ST.exe/functions/00575030/decomp.c"
void __cdecl st::fn_00575030(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  piVar3 = param_1;
  iVar4 = (int)STField<short>(param_1,2) * (int)(short)*param_1;
  iVar5 = (short)*param_1 * param_3;
  iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_3 = 6;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (int *)((int)param_1 + (iVar4 * 5 + param_2 + iVar5 / 2) * 4 + 0x459);
  do {
    iVar5 = *param_1;
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0xc) != 0)) {
      *(undefined4 *)(STField<int>(piVar3,0x451) + 4) = 0;
      do {
        iVar1 = STField<int>(piVar3,0x451);
        uVar2 = *(uint *)(iVar1 + 4);
        if (*(uint *)(iVar1 + 0xc) <= uVar2) goto LAB_005750c2;
        iVar6 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c);
        *(uint *)(iVar1 + 4) = uVar2 + 1;
        if (iVar6 == 0) goto LAB_005750c2;
      } while (*(int *)(iVar5 + 0xc) != *(int *)(iVar6 + 8));
      if (iVar6 == 0) {
LAB_005750c2:
        st::fn_006AB060((int *)(iVar5 + 0xc));
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_1 + -iVar4;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = param_3 + -1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_3 == 0) {
      return;
    }
  } while( true );
}

// 00575120 FUN_00575120
#line 4 "decomp/ST.exe/functions/00575120/decomp.c"
void __thiscall
st::fn_00575120(void *this,AnonShape_005745E0_AF52CC75 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *local_8;

  iVar3 = 6;
  iVar2 = (int)*(short *)&param_1->field_0x2 * (int)*(short *)param_1;
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
  puVar4 = (undefined4 *)
           (&param_1[1].field_0x5 + (iVar2 * 5 + param_2 + (*(short *)param_1 * param_3) / 2) * 4);
  local_8 = st::pointer_boundary_cast<undefined4 *>(this);
  do {
    puVar1 = (undefined4 *)*puVar4;
    if (puVar1 != nullptr) {
      puVar1[6] = 0;
      st::fn_004016C2(param_1,puVar1);
    }
    puVar4 = puVar4 + -iVar2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_8 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC70((uint)param_1->field_0004 * (uint)param_1->field_0004));
  st::fn_00404B79((AnonShape_00574920_7507981E *)param_1,param_2,param_3,local_8);
  st::fn_006AB060(&local_8);
  return;
}

// 00575460 FUN_00575460
#line 4 "decomp/ST.exe/functions/00575460/decomp.c"
void __cdecl st::fn_00575460(AnonShape_00575460_06C413C6 *param_1)

{
  undefined4 *element;
  int *element_00;
  int iVar1;
  uint uVar2;
  ST3DSMAPContext *pSVar3;
  AnonShape_00575460_06C413C6 *pAVar4;
  DArrayTy *array;
  int iVar5;
  int *piVar6;
  int local_8;

  pAVar4 = param_1;
  pSVar3 = g_sT3DSMAPContext_0080760C;
  if (g_sT3DSMAPContext_0080760C != nullptr) {
    st::fn_006DBCF0(g_sT3DSMAPContext_0080760C);
    st::fn_0072E2B0((HoloTy *)pSVar3);
    g_sT3DSMAPContext_0080760C = nullptr;
  }
  if (param_1 != nullptr) {
    array = st::fn_006AE290(nullptr,0x14,4,0x14);
    *(undefined4 *)(param_1->field_0451 + 4) = 0;
    while( true ) {
      iVar1 = param_1->field_0451;
      uVar2 = *(uint *)(iVar1 + 4);
      if (*(uint *)(iVar1 + 0xc) <= uVar2) break;
      iVar5 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c);
      *(uint *)(iVar1 + 4) = uVar2 + 1;
      if (iVar5 == 0) break;
      element = (undefined4 *)(iVar5 + 8);
      st::fn_006AE1C0(array,element);
      st::fn_006A5E90((short *)*element);
    }
    st::fn_006AE110((DArrayTy *)param_1->field_0451);
    param_1->field_0451 = 0;
    local_8 = 0;
    if (0 < param_1->field_0455) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (AnonShape_00575460_06C413C6 *)&param_1->field_0x459;
      do {
        iVar1 = *(int *)param_1;
        if ((iVar1 != 0) && (element_00 = (int *)(iVar1 + 0xc), *(int *)(iVar1 + 0xc) != 0)) {
          array->iteratorIndex = 0;
          do {
            uVar2 = array->iteratorIndex;
            if (array->count <= uVar2) goto LAB_0057554f;
            piVar6 = DArrayAt<int>(array, uVar2);
            array->iteratorIndex = uVar2 + 1;
            if (piVar6 == nullptr) goto LAB_0057554f;
          } while (*element_00 != *piVar6);
          if (piVar6 == nullptr) {
LAB_0057554f:
            st::fn_006AE1C0(array,element_00);
            st::fn_006AB060(element_00);
          }
          *element_00 = 0;
        }
        local_8 = local_8 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_00575460_06C413C6 *)&param_1->field_0x4;
      } while (local_8 < pAVar4->field_0455);
    }
    st::fn_006AE110(array);
  }
  *(undefined4 *)(*(int *)&pAVar4->field_0x44d + 4) = 0;
  while( true ) {
    iVar1 = *(int *)&pAVar4->field_0x44d;
    uVar2 = *(uint *)(iVar1 + 4);
    if (*(uint *)(iVar1 + 0xc) <= uVar2) break;
    iVar5 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c);
    *(uint *)(iVar1 + 4) = uVar2 + 1;
    if (iVar5 == 0) break;
    st::fn_006A5E90(*(short **)(iVar5 + 4));
  }
  st::fn_006AE110(*(DArrayTy **)&pAVar4->field_0x44d);
  *(undefined4 *)&pAVar4->field_0x44d = 0;
  return;
}

// 00575640 FUN_00575640
#line 4 "decomp/ST.exe/functions/00575640/decomp.c"
void __cdecl st::fn_00575640(short *param_1,undefined4 *param_2,short *param_3)

{
  uint uVar1;
  short *psVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar7;
  uint uVar8;
  short *psVar10;
  uint uVar11;
  byte *puVar12;
  int iVar13;
  int iVar14;
  int local_1c;
  int *local_18;
  int local_14;
  uint local_8;
  short *psVar9;

  psVar2 = param_1;
  iVar4 = (int)*param_1 * (int)param_1[1];
  uVar11 = iVar4 * 10;
  local_1c = 0;
  puVar12 = (byte *)(param_2);
  memset(puVar12, 0, uVar11); /* compiler bulk-zero initialization */
  if (0 < STField<int>(param_1,0x455)) {
    local_18 = (int *)((int)param_1 + 0x459);
    do {
      iVar14 = *local_18;
      if (((iVar14 != 0) && (*(short *)(iVar14 + 8) != 0)) &&
         ((*(byte *)(iVar14 + 0x4f) & 0x40) == 0)) {
        uVar8 = 0x8000;
        local_8 = 8;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (short *)0x80;
        local_14 = 0;
        psVar10 = (short *)((int)param_2 +
                           ((int)*(short *)(iVar14 + 6) * (int)*psVar2 +
                            (*(short *)(iVar14 + 8) + -1) * iVar4 + (int)*(short *)(iVar14 + 4)) * 2
                           );
        if (*(char *)(iVar14 + 0x48) != '\0') {
          do {
            uVar1 = *(uint *)(iVar14 + 0x2c);
            if ((local_8 & uVar1) != 0) {
              if (((uint)param_1 & uVar1) == 0) {
                sVar3 = (-(ushort)((uVar1 & uVar8) != 0) & 0x3fff) + 0xbfff;
              }
              else {
                sVar3 = -1;
              }
              *psVar10 = sVar3;
            }
            uVar1 = *(uint *)(iVar14 + 0x30);
            if ((local_8 & uVar1) != 0) {
              if (((uint)param_1 & uVar1) == 0) {
                sVar3 = (-(ushort)((uVar1 & uVar8) != 0) & 0x3fff) + 0xbfff;
              }
              else {
                sVar3 = -1;
              }
              psVar10[1] = sVar3;
            }
            uVar1 = *(uint *)(iVar14 + 0x34);
            if ((local_8 & uVar1) != 0) {
              if (((uint)param_1 & uVar1) == 0) {
                sVar3 = (-(ushort)((uVar1 & uVar8) != 0) & 0x3fff) + 0xbfff;
              }
              else {
                sVar3 = -1;
              }
              psVar10[*psVar2] = sVar3;
            }
            uVar1 = *(uint *)(iVar14 + 0x38);
            if ((local_8 & uVar1) != 0) {
              if (((uint)param_1 & uVar1) == 0) {
                sVar3 = (-(ushort)((uVar1 & uVar8) != 0) & 0x3fff) + 0xbfff;
              }
              else {
                sVar3 = -1;
              }
              psVar10[*psVar2 + 1] = sVar3;
            }
            local_14 = local_14 + 1;
            psVar10 = psVar10 + -iVar4;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = (short *)((int)param_1 >> 1);
            local_8 = (int)local_8 >> 1;
            uVar8 = (int)uVar8 >> 1;
          } while (local_14 < (int)(uint)*(byte *)(iVar14 + 0x48));
        }
      }
      local_1c = local_1c + 1;
      local_18 = local_18 + 1;
    } while (local_1c < STField<int>(psVar2,0x455));
  }
  if (param_3 != nullptr) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = st::pointer_boundary_cast<short *>(st::fn_006AAC70(uVar11));
    puVar12 = (byte *)(param_2);
    psVar9 = param_1;
    for (uVar8 = uVar11 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)psVar9 = *puVar12;
      puVar12 = (byte *)(puVar12 + 1);
      psVar9 = psVar9 + 2;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)psVar9 = *(undefined1 *)puVar12;
      puVar12 = (byte *)((int)puVar12 + 1);
      psVar9 = (short *)((int)psVar9 + 1);
    }
    iVar14 = 0;
    if (0 < psVar2[1]) {
      do {
        iVar5 = (int)*psVar2;
        iVar13 = 0;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_1 + iVar5 * iVar14 + iVar4 * 4;
        if (0 < iVar5) {
          do {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (*param_3 == 0) {
              st::fn_006AB090((int)param_1,iVar5,(int)psVar2[1],5,iVar13,iVar14,4,-1,-1,-1);
            }
            iVar5 = (int)*psVar2;
            iVar13 = iVar13 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = param_3 + 1;
          } while (iVar13 < iVar5);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < psVar2[1]);
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = nullptr;
    local_1c = 5;
    do {
      iVar14 = 0;
      if (0 < psVar2[1]) {
        do {
          int scalar_psVar6 = *psVar2 * iVar14 + (int)param_3; /* split integer lifetime from pointer-typed SSA storage */
          psVar10 = param_1 + scalar_psVar6;
          puVar7 = (undefined2 *)(scalar_psVar6 * 2 + (int)param_2);
          iVar5 = 0;
          if (0 < *psVar2) {
            do {
              if (*psVar10 == 0) {
                *puVar7 = 0xfffe;
              }
              iVar5 = iVar5 + 1;
              psVar10 = psVar10 + 1;
              puVar7 = puVar7 + 1;
            } while (iVar5 < *psVar2);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < psVar2[1]);
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = (short *)((int)param_3 + iVar4);
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    st::fn_006AB060(&param_1);
  }
  return;
}

// 005759F0 FUN_005759f0
#line 4 "decomp/ST.exe/functions/005759F0/decomp.c"
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007A4118>005759D0

   [STPrototypeApplier] Propagated return.
   Evidence: 005759F0 returns return of STAppC::STAppC @ 005759FF
   [STAbiConsistencyApplier] unknown_convention_return_revert target=return:-1: return=/undefined1
   Evidence: automation-owned propagated return is deferred until the wrapper calling convention and
   live-in parameter storage are recovered */

void st::fn_005759F0(void)

{
  st::fn_0040121C((STAppC *)&DAT_00807620,st::machine_word_boundary_cast<undefined4>(g_objectFactoryRegistry));
  return;
}

// 00575A10 FUN_00575a10
#line 4 "decomp/ST.exe/functions/00575A10/decomp.c"
undefined4 st::fn_00575A10(HINSTANCE param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char *resourceString;
  int iVar1;
  int iVar2;
  InternalExceptionFrame local_60;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_0079b118);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff8c);
  ExceptionList = &local_14;
  g_hINSTANCE_00807618 = st::external_00000048(st::pointer_boundary_cast<LPCSTR>("st_string.dll"));
  if (g_hINSTANCE_00807618 == (HMODULE)0x0) {
    ExceptionList = local_14;
    return 0xffffffff;
  }
  resourceString = st::fn_006B0140(100,g_hINSTANCE_00807618);
  st::fn_0072F260(0,resourceString);
  st::fn_006AD190(0x18,st::mutable_c_string("dbg_msg.rpt"),0);
  st::fn_004046F6();
  local_8 = 0;
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar1 = st::fn_0072D7F0
                    (local_60.jumpBuffer,2,Library::MSVCRT::__seh_longjmp_unwind_4,0);
  if (iVar1 == 0) {
    local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff8c);
    iVar2 = st::fn_004045F2((STAppC *)&DAT_00807620,param_1,param_2,param_3,param_4);
    if (iVar2 != 1) {
      ExceptionList = local_14;
      return 0;
    }
    st::fn_006E4FC0((AppClassTy *)&DAT_00807620);
    g_currentExceptionFrame = local_60.previous;
  }
  else {
    g_currentExceptionFrame = local_60.previous;
    local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff8c);
    if ((iVar1 != -0x5001fff6) &&
       ((iVar1 < -0x5001fff4 || (local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff8c), -0x5001fff3 < iVar1)))) {
      local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff8c);
      st::external_00000081(g_hWnd_00806748,st::pointer_boundary_cast<LPCSTR>("Internal error"),st::pointer_boundary_cast<LPCSTR>("Internal error"),0);
    }
  }
  local_8 = 0xffffffff;
  if (DAT_0080fb76 == 0) {
    if (DAT_0080fb72 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%ssteditor.exe"),&CHAR_00h_00807680);
  }
  else {
    st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s%s%s"),&CHAR_00h_00807680,st_global_0079B114,
              &DAT_0080f126);
  }
  st::external_00000026((LPCSTR)&DAT_0080f33a,1);
  ExceptionList = local_14;
  return 0;
}

// 00575C80 FUN_00575c80
#line 4 "decomp/ST.exe/functions/00575C80/decomp.c"
int __cdecl st::fn_00575C80(int param_1,int param_2)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(int *)(param_2 + 0x14) - *(int *)(param_1 + 0x14);
}

// 00576A60 CreateSTAlga
#line 4 "decomp/ST.exe/functions/00576A60/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA78C>00404B38

   [STObjectFactoryApplier] Central object factory for 0x0103 (ST_OBJECT_ST_ALGA).
   Evidence: registry[13] at 007CA788 stores type 0x0103 and executable pointer 00404B38; allocation
   size 76 uniquely matches /STAlgaC */

STAlgaC * __cdecl st::fn_00576A60(void)

{
  STAlgaC *this;

  this = (STAlgaC *)st::fn_006B04D0(0x4c);
  if (this != nullptr) {
    st::fn_006E60E0(this);
    this->vtable = &st_global_0079B188;
    return this;
  }
  return nullptr;
}

// 00577440 FUN_00577440
#line 4 "decomp/ST.exe/functions/00577440/decomp.c"
void __fastcall st::fn_00577440(int param_1)

{
  bool bVar1;
  uint uVar2;
  DWORD DVar3;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  int *piVar6;
  short sVar7;
  uint uVar8;
  uint *puVar9;
  uint local_8;

  uVar2 = st::fn_006E4D40(&DAT_00807620,param_1);
  if ((uVar2 == 1) && (DAT_00808784 == 0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0x430) == '\x01') {
      puVar9 = (uint *)(param_1 + 0x20);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      DVar4 = st::fn_006E51B0(*(STAppC **)(param_1 + 0x18));
      iVar5 = st::fn_00718F40
                        (g_dDXContext_0080759C,(undefined4 *)(param_1 + 0x28),0,0x100,10,
                         (int *)(param_1 + 0x24),2,DVar4,puVar9);
      if (iVar5 == -4) {
        st::fn_006B0A20((AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,param_1 + 0x28,0,
                     0x100,0);
        *(undefined1 *)(param_1 + 0x430) = 2;
      }
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    else if ((*(char *)(param_1 + 0x430) == '\x02') && (*(int *)(param_1 + 0x431) != 0)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      DVar3 = st::fn_006E51B0(*(STAppC **)(param_1 + 0x18));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      piVar6 = *(int **)(param_1 + 0x431);
      bVar1 = false;
      uVar3 = 0xffffffff;
      local_8 = 0x101;
      if (piVar6 != nullptr) {
        do {
          if (STField<uint>(piVar6,7) <= DVar3 - STField<int>(piVar6,0xb)) {
            sVar7 = 0;
            STField<DWORD>(piVar6,0xb) = DVar3;
            if (STField<char>(piVar6,6) == '\0') {
              STField<short>(piVar6,0xf) = STField<short>(piVar6,0xf) + 1;
            }
            else {
              STField<short>(piVar6,0xf) = STField<short>(piVar6,0xf) + -1;
            }
            if (STField<short>(piVar6,0xf) < 0) {
              if (STField<char>(piVar6,5) == '\0') {
                STField<undefined1>(piVar6,6) = 0;
                STField<undefined2>(piVar6,0xf) = 0;
              }
              else {
                STField<short>(piVar6,0xf) = STField<short>(piVar6,0x11) + -1;
              }
            }
            if (STField<short>(piVar6,0x11) <= STField<short>(piVar6,0xf)) {
              if (STField<char>(piVar6,5) == '\0') {
                STField<undefined1>(piVar6,6) = 1;
                sVar7 = STField<short>(piVar6,0x11) + -1;
              }
              STField<short>(piVar6,0xf) = sVar7;
            }
            uVar8 = (uint)*(byte *)(piVar6 + 1);
            if (uVar8 < local_8) {
              local_8 = uVar8;
            }
            if ((int)uVar3 < (int)uVar8) {
              uVar3 = uVar8;
            }
            *(undefined1 *)(param_1 + 0x28 + uVar8 * 4) =
                 *(undefined1 *)(STField<short>(piVar6,0xf) * 3 + 0x13 + (int)piVar6);
            *(undefined1 *)(param_1 + 0x29 + (uint)*(byte *)(piVar6 + 1) * 4) =
                 *(undefined1 *)(STField<short>(piVar6,0xf) * 3 + 0x14 + (int)piVar6);
            *(undefined1 *)(param_1 + 0x2a + (uint)*(byte *)(piVar6 + 1) * 4) =
                 *(undefined1 *)((int)piVar6 + (STField<short>(piVar6,0xf) + 7) * 3);
            bVar1 = true;
          }
          piVar6 = (int *)*piVar6;
        } while (piVar6 != nullptr);
        if (bVar1) {
          st::fn_006B0A20((AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,
                       param_1 + 0x28 + local_8 * 4,local_8,(uVar3 - local_8) + 1,0);
          st::fn_006E5D90((SystemClassTy *)param_1);
          return;
        }
      }
    }
  }
  st::fn_006E5D90((SystemClassTy *)param_1);
  return;
}

// 005782D0 FUN_005782d0
#line 1 "decomp/ST.exe/functions/005782D0/decomp.c"

void st::fn_005782D0(void)

{
  DebugSystemC *this;
  int iVar2;
  int iVar1;

  this = (DebugSystemC *)st::fn_0072E530(0x24);
  if (this == nullptr) {
    g_debugSystem_00811644 = nullptr;
  }
  else {
    g_debugSystem_00811644 = st::fn_00405DD0(this,g_app_00806728);
  }
  g_debugSystem_00811644->field_0020 = 0;
  iVar2 = (*g_debugSystem_00811644->vtable->InitSystem)((SystemClassTy *)g_debugSystem_00811644);
  if (iVar2 != 0) {
    st::fn_0040151E();
  }
  iVar1 = st::fn_006E4650(g_app_00806728,(int *)g_debugSystem_00811644,0);
  if (iVar1 != 0) {
    st::fn_0040151E();
    g_debugSystem_00811644->field_0020 = 1;
    return;
  }
  g_debugSystem_00811644->field_0020 = 1;
  return;
}

// 00578370 FUN_00578370
#line 1 "decomp/ST.exe/functions/00578370/decomp.c"

void st::fn_00578370(void)

{
  if (g_debugSystem_00811644 != nullptr) {
    if (g_debugSystem_00811644->field_0020 == 1) {
      st::fn_006E4B80(g_app_00806728,(int)g_debugSystem_00811644);
      st::fn_006E4D20(g_app_00806728,g_debugSystem_00811644);
    }
    g_debugSystem_00811644->vfunc_04();
    st::fn_0072E2B0((HoloTy *)g_debugSystem_00811644);
    g_debugSystem_00811644 = nullptr;
  }
  return;
}

// 005783F0 FUN_005783f0
#line 4 "decomp/ST.exe/functions/005783F0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 005783F0 returns return of sub_006E60A0 @ 00578416 */

int __fastcall st::fn_005783F0(void *param_1)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = STField<undefined4>(param_1,8);
  local_18 = 0;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(param_1,local_24);
  return iVar1;
}

// 00578430 FUN_00578430
#line 4 "decomp/ST.exe/functions/00578430/decomp.c"
undefined4 __thiscall
st::fn_00578430(void *this,short param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;

  sVar1 = STField<short>(this,0x45) + -0x1c;
  sVar4 = STField<short>(this,0x45) + 0x1c;
  sVar6 = STField<short>(this,0x41) + -0x1c;
  sVar2 = STField<short>(this,0x43) + -0x1c;
  sVar3 = STField<short>(this,0x41) + 0x1c;
  sVar5 = STField<short>(this,0x43) + 0x1c;
  if ((((((sVar6 <= param_1) && (param_1 <= sVar3)) || ((sVar6 <= param_4 && (param_4 <= sVar3))))
       || ((param_1 <= sVar6 && (sVar3 <= param_4)))) &&
      (((sVar2 <= param_2 && (param_2 <= sVar5)) ||
       (((sVar2 <= param_5 && (param_5 <= sVar5)) || ((param_2 <= sVar2 && (sVar5 <= param_5))))))))
     && ((((sVar1 <= param_3 && (param_3 <= sVar4)) || ((sVar1 <= param_6 && (param_6 <= sVar4))))
         || ((param_3 <= sVar1 && (sVar4 <= param_6)))))) {
    return 0;
  }
  return 0xffffffff;
}

// 00578520 FUN_00578520
#line 4 "decomp/ST.exe/functions/00578520/decomp.c"
undefined4 __thiscall
st::fn_00578520(void *this,undefined4 param_1,undefined2 *param_2,undefined2 *param_3,
            undefined2 *param_4,undefined4 *param_5)

{
  *param_2 = STField<undefined2>(this,0x41);
  *param_3 = STField<undefined2>(this,0x43);
  *param_4 = STField<undefined2>(this,0x45);
  *param_5 = 0;
  return 0;
}

// 005792E0 FUN_005792e0
#line 4 "decomp/ST.exe/functions/005792E0/decomp.c"
int __thiscall st::fn_005792E0(void *this,undefined4 param_1,int param_2)

{
  uint uVar1;

  uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x1c) = uVar1;
  return (uVar1 >> 0x10) % 0x15 + 0x1e + param_2;
}

// 00579320 CreateSTCrab
#line 4 "decomp/ST.exe/functions/00579320/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA964>00401834 | P:007CA9A4>00401834

   [STObjectFactoryApplier] Central object factory for 0x013F (ST_OBJECT_ST_CRAB_013F).
   Evidence: registry[72] at 007CA960 stores type 0x013F and executable pointer 00401834; allocation
   size 641 uniquely matches /STCrabC */

STCrabC * __cdecl st::fn_00579320(void)

{
  STCrabC *pSVar1;

  pSVar1 = (STCrabC *)st::fn_006B04D0(0x281);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_004057D6(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 00579350 FUN_00579350
#line 4 "decomp/ST.exe/functions/00579350/decomp.c"
void __fastcall st::fn_00579350(AnonShape_00579350_2E014C47 *param_1)

{
  undefined1 *this;
  int iVar2;
  uint uVar3;
  int iVar1;
  int iVar4;
  uint local_EAX_315;
  uint uVar2;
  undefined4 uVar5;
  short sVar6;

  sVar6 = param_1->field_0041;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0047 = sVar6;
  param_1->field_005B = sVar6;
  sVar6 = param_1->field_0043;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0049 = sVar6;
  param_1->field_005D = sVar6;
  sVar6 = param_1->field_0045;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 200 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 200 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f);
  }
  param_1->field_004B = sVar6;
  param_1->field_005F = sVar6;
  iVar2 = st::fn_00401A3C((AnonShape_0041C710_C4D46939 *)param_1);
  this = st::pointer_boundary_cast<undefined1 *>(&param_1->field_0x1d5);
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar3 = st::fn_004052CC((STT3DSprC *)this);
    st::fn_006EABF0(param_1->field_0211,uVar3,iVar2);
    iVar1 = st::fn_004050D8((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (iVar1 == 1) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 1;
    uVar3 = st::fn_004052CC((STT3DSprC *)this);
    st::fn_006EABF0(param_1->field_0211,uVar3,iVar2);
    iVar2 = 1;
  }
  iVar4 = st::fn_004052CC((STT3DSprC *)this);
  st::fn_006E6870(param_1->field_0211,iVar4,iVar2);
  if ((param_1->field_0279 == 0xf6) || (param_1->field_0279 == 0xf7)) {
    uVar2 = st::fn_00404A3E((int)param_1->field_0041,(int)param_1->field_0043,
                               (int)param_1->field_0045);
    if ((int)uVar2 < 0) {
      if (0x81 < param_1->field_0045) {
        param_1->field_0045 = param_1->field_0045 + -1;
      }
    }
    else {
      param_1->field_0045 = param_1->field_0045 + 1;
    }
  }
  else {
    local_EAX_315 =
         st::fn_00404A3E((int)param_1->field_0041,(int)param_1->field_0043,
                            (int)param_1->field_0045);
    if ((int)local_EAX_315 < 0) {
      if (0x27 < param_1->field_0045) {
        param_1->field_0045 = param_1->field_0045 + -2;
      }
    }
    else {
      param_1->field_0045 = param_1->field_0045 + 2;
    }
  }
  if (param_1->field_0239 == 1) {
    iVar2 = (int)param_1->field_0041 - (int)param_1->field_004E;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 8) {
      iVar2 = (int)param_1->field_0043 - (int)*(short *)&param_1->field_0x50;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (iVar2 < 8) goto LAB_00579591;
    }
    iVar4 = param_1->field_0241 + param_1->field_0245;
    param_1->field_0241 = iVar4;
    iVar2 = param_1->field_0249 + param_1->field_024D;
    param_1->field_0249 = iVar2;
    param_1->field_0041 = (short)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + param_1->field_0251;
    param_1->field_0043 = (short)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + param_1->field_0255;
  }
  else {
    if ((uint)param_1->field_023D < 0x10) goto LAB_005795a9;
LAB_00579591:
    uVar5 = st::fn_0040104B(param_1,&param_1->field_004E,(short *)&param_1->field_0x50,
                               (undefined2 *)&param_1->field_0x6c);
    param_1->field_0239 = uVar5;
    param_1->field_023D = 0;
  }
LAB_005795a9:
  if (2 < g_playSystem_00802A38->field_00E4 - param_1->field_0235) {
    param_1->field_0235 = g_playSystem_00802A38->field_00E4;
    if ((*(short *)&param_1->field_0x6c == 7) || (*(short *)&param_1->field_0x6c < 3)) {
      param_1->field_0231 = (param_1->field_0231 + 1) % 6;
    }
    else {
      iVar2 = st::machine_word_boundary_cast<int>(param_1->field_0231 + -1);
      param_1->field_0231 = iVar2;
      if (iVar2 < 0) {
        param_1->field_0231 = 5;
      }
    }
  }
  uVar3 = (uint)*(short *)&param_1->field_0x6c;
  if (((param_1->field_0279 == 0xf7) || (param_1->field_0279 == 0xf6)) &&
     (uVar3 = uVar3 + 4 & 0x80000007, (int)uVar3 < 0)) {
    uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
  }
  uVar3 = (((0x18 - (int)(uVar3 * 0x2d) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18) / 3;
  st::fn_00401064((STT3DSprC *)this,'\r',uVar3);
  st::fn_004030BC((STT3DSprC *)this,'\r');
  st::fn_00401064((STT3DSprC *)this,'\x0e',st::machine_word_boundary_cast<uint>(param_1->field_0231 + uVar3 * 6));
  st::fn_004030BC((STT3DSprC *)this,'\x0e');
  param_1->field_023D = st::machine_word_boundary_cast<undefined4>(param_1->field_023D + 1);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)param_1 + 0xd8))();
  return;
}

// 005797B0 FUN_005797b0
#line 4 "decomp/ST.exe/functions/005797B0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00579DC3 exact 2-byte output store from MOVSX at 00579D49 establishes signed source
   width 2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00579DC9 exact 2-byte output store from MOVSX at 00579D96 establishes signed source
   width 2 */

undefined4 __thiscall st::fn_005797B0(void *this,short *param_1,short *param_2,undefined2 *param_3)

{
  uint uVar1;
  uint *puVar1;
  int iVar3;
  int iVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_18;
  int local_14;
  short local_10;
  int local_c;
  int local_8;

  iVar2 = 0;
  iVar9 = 0;
  sVar4 = STField<short>(this,0x41);
  if (sVar4 < 0) {
    sVar4 = ((sVar4 / 0xc9 + (sVar4 >> 0xf)) - (short)((longlong)(int)sVar4 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar4 = (sVar4 / 0xc9 + (sVar4 >> 0xf)) - (short)((longlong)(int)sVar4 * 0x28c1979 >> 0x3f);
  }
  sVar5 = STField<short>(this,0x43);
  STField<short>(this,0x47) = sVar4;
  if (sVar5 < 0) {
    sVar5 = ((sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar5 = (sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f);
  }
  iVar6 = (int)sVar4;
  local_c = iVar6 + -1;
  STField<short>(this,0x49) = sVar5;
  if (local_c < 0) {
    local_c = 0;
  }
  iVar8 = (int)sVar5;
  local_8 = iVar8 + -1;
  if (local_8 < 0) {
    local_8 = 0;
  }
  local_18 = iVar6 + 1;
  if ((int)g_worldGrid.sizeX <= iVar6 + 1) {
    local_18 = iVar6;
  }
  local_14 = iVar8 + 1;
  if ((int)g_worldGrid.sizeY <= iVar8 + 1) {
    local_14 = iVar8;
  }
  switch(STField<undefined2>(this,0x6c)) {
  case 0:
    if (iVar6 < 0) {
      iVar2 = STField<int>(this,0x1c);
    }
    else {
      iVar2 = STField<int>(this,0x1c);
    }
    uVar3 = iVar2 * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    iVar2 = (uVar3 >> 0x10) % ((local_18 - iVar6) + 1U) + iVar6;
    local_8 = iVar2 - STField<short>(this,0x47);
    iVar9 = STField<short>(this,0x49) + local_8;
    local_8 = STField<short>(this,0x49) - local_8;
    if (local_8 < 0) goto LAB_00579a6c;
LAB_005798e8:
    uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    goto LAB_00579a7a;
  case 1:
    if (local_8 < 0) {
      iVar2 = STField<int>(this,0x1c);
    }
    else {
      iVar2 = STField<int>(this,0x1c);
    }
    uVar3 = iVar2 * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    local_c = (int)STField<short>(this,0x47);
    iVar9 = (uVar3 >> 0x10) % ((iVar8 - local_8) + 1U) + local_8;
    if (local_c < 0) {
      uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    }
    else {
LAB_00579baa:
      uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    }
    goto LAB_00579bc9;
  case 2:
    if (local_8 < 0) {
      iVar2 = STField<int>(this,0x1c);
    }
    else {
      iVar2 = STField<int>(this,0x1c);
    }
    uVar3 = iVar2 * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    iVar9 = (uVar3 >> 0x10) % ((iVar8 - local_8) + 1U) + local_8;
    local_c = STField<short>(this,0x49) - iVar9;
    local_18 = STField<short>(this,0x47) + local_c;
    local_c = STField<short>(this,0x47) - local_c;
    if (-1 < local_c) goto LAB_00579b56;
LAB_005799a8:
    uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    break;
  case 3:
    if (local_c < 0) {
      iVar2 = STField<int>(this,0x1c);
    }
    else {
      iVar2 = STField<int>(this,0x1c);
    }
    uVar3 = iVar2 * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    iVar2 = (uVar3 >> 0x10) % ((iVar6 - local_c) + 1U) + local_c;
    iVar9 = (int)STField<short>(this,0x49);
    if (local_8 < 0) {
      uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      goto LAB_00579a7a;
    }
    goto LAB_00579a6c;
  case 4:
    if (local_c < 0) {
      iVar2 = STField<int>(this,0x1c);
    }
    else {
      iVar2 = STField<int>(this,0x1c);
    }
    uVar3 = iVar2 * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    iVar2 = (uVar3 >> 0x10) % ((iVar6 - local_c) + 1U) + local_c;
    local_8 = STField<short>(this,0x47) - iVar2;
    iVar9 = STField<short>(this,0x49) + local_8;
    local_8 = STField<short>(this,0x49) - local_8;
    if (-1 < local_8) goto LAB_005798e8;
LAB_00579a6c:
    uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
LAB_00579a7a:
    STField<uint>(this,0x1c) = uVar3;
    iVar9 = (uVar3 >> 0x10) % ((iVar9 - local_8) + 1U) + local_8;
    goto LAB_00579bdd;
  case 5:
    if (iVar8 < 0) {
      iVar2 = STField<int>(this,0x1c);
    }
    else {
      iVar2 = STField<int>(this,0x1c);
    }
    uVar3 = iVar2 * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    local_18 = (int)STField<short>(this,0x47);
    iVar9 = (uVar3 >> 0x10) % ((local_14 - iVar8) + 1U) + iVar8;
    if (local_c < 0) {
      uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar3;
    }
    else {
      uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar3;
    }
    break;
  case 6:
    if (iVar8 < 0) {
      iVar2 = STField<int>(this,0x1c);
    }
    else {
      iVar2 = STField<int>(this,0x1c);
    }
    uVar3 = iVar2 * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    iVar9 = (uVar3 >> 0x10) % ((local_14 - iVar8) + 1U) + iVar8;
    local_c = iVar9 - STField<short>(this,0x49);
    local_18 = STField<short>(this,0x47) + local_c;
    local_c = STField<short>(this,0x47) - local_c;
    if (-1 < local_c) goto LAB_005799a8;
LAB_00579b56:
    uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    break;
  case 7:
    if (iVar8 < 0) {
      iVar2 = STField<int>(this,0x1c);
    }
    else {
      iVar2 = STField<int>(this,0x1c);
    }
    uVar3 = iVar2 * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    iVar9 = (uVar3 >> 0x10) % ((local_14 - iVar8) + 1U) + iVar8;
    local_c = (int)STField<short>(this,0x47);
    if (local_c < 0) goto LAB_00579baa;
    uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
LAB_00579bc9:
    STField<uint>(this,0x1c) = uVar3;
    break;
  default:
    goto switchD_0057988b_default;
  }
  iVar2 = (uVar3 >> 0x10) % ((local_18 - local_c) + 1U) + local_c;
LAB_00579bdd:
  if (iVar2 < 0) {
    iVar2 = 0;
  }
switchD_0057988b_default:
  if (g_worldGrid.sizeX <= iVar2) {
    iVar2 = g_worldGrid.sizeX + -1;
  }
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  if (g_worldGrid.sizeY <= iVar9) {
    iVar9 = g_worldGrid.sizeY + -1;
  }
  sVar4 = STField<short>(this,0x45);
  if (sVar4 < 0) {
    local_10 = ((sVar4 / 200 + (sVar4 >> 0xf)) - (short)((longlong)(int)sVar4 * 0x51eb851f >> 0x3f))
               + -1;
  }
  else {
    local_10 = (sVar4 / 200 + (sVar4 >> 0xf)) - (short)((longlong)(int)sVar4 * 0x51eb851f >> 0x3f);
  }
  local_14 = (int)(short)((short)iVar2 * 0xc9 + 100);
  local_18 = (int)(short)((short)iVar9 * 0xc9 + 100);
  local_8 = iVar9;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = st::fn_00404A3E(local_14,local_18,(int)STField<short>(this,0x45));
          sVar4 = (short)iVar2;
          if ((int)uVar1 < 0) {
            puVar1 = st::fn_00405E48((int)sVar4,(int)(short)local_8,(int)local_10);
            if ((puVar1 == nullptr) &&
               (((((sVar4 < 0 || (g_worldGrid.sizeX <= sVar4)) || ((short)local_8 < 0)) ||
                 ((g_worldGrid.sizeY <= (short)local_8 || (local_10 < 0)))) ||
                ((g_worldGrid.sizeZ <= local_10 ||
                 (STGridAt3D(g_worldGrid, sVar4, local_8, local_10).objects[0] ==
                  nullptr)))))) {
              if ((STField<short>(this,0x47) != iVar2) ||
                 (STField<short>(this,0x49) != local_8)) {
                *param_1 = (short)local_14;
                *param_2 = (short)local_18;
                iVar2 = local_14 - STField<short>(this,0x41);
                iVar9 = local_18 - STField<short>(this,0x43);
                STField<int>(this,0x245) = iVar2;
                STField<int>(this,0x24d) = iVar9;
                iVar3 = st::fn_006ACF0D(0,0,0,iVar2,iVar9,0);
                STField<undefined4>(this,0x249) = 0;
                STField<undefined4>(this,0x241) = 0;
                STField<int>(this,0x245) = (STField<int>(this,0x245) << 9) / iVar3;
                iVar2 = (STField<int>(this,0x24d) << 9) / iVar3;
                STField<int>(this,0x24d) = iVar2;
                sVar4 = STField<short>(this,0x41);
                STField<int>(this,0x251) = (int)sVar4;
                sVar5 = STField<short>(this,0x43);
                STField<int>(this,0x255) = (int)sVar5;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                uVar7 = CONCAT22(sVar5 >> 0xf,STField<undefined2>(this,0x45));
                /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
                sVar4 = (**(code **)(*(int *)this + 0x10))
                                  (STReplaceLowWord((uint32_t)(iVar2), (uint16_t)(sVar4)),
                                   CONCAT22(sVar4 >> 0xf,sVar5),uVar7,local_14,local_18,uVar7);
                uVar3 = (int)(short)((sVar4 / 0x2d + 3) - (short)((int)sVar4 / -0x4c000000)) &
                        0x80000007;
                if ((int)uVar3 < 0) {
                  uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
                }
                *param_3 = (short)uVar3;
                return 1;
              }
              goto cf_common_exit_00579E8F;
            }
          }
          bVar10 = iVar2 - STField<short>(this,0x47) < 0;
          if (iVar2 == STField<short>(this,0x47) || bVar10) break;
          iVar2 = iVar2 + -1;
          local_14 = (int)(short)(sVar4 + 99 + (short)iVar2 * 200);
          if (iVar2 < 0) goto cf_common_exit_00579E8F;
        }
        if (!bVar10) break;
        iVar2 = iVar2 + 1;
        local_14 = (int)(short)(sVar4 + 0x65 + (short)iVar2 * 200);
      }
      bVar10 = -1 < local_8 - STField<short>(this,0x49);
      if (local_8 != STField<short>(this,0x49) && bVar10) break;
      if (bVar10) goto cf_common_exit_00579E8F;
      local_18 = (int)(short)((short)local_8 + 0x65 + (short)(local_8 + 1) * 200);
      local_8 = local_8 + 1;
    }
    iVar9 = local_8 + -1;
    local_18 = (int)(short)((short)local_8 + 99 + (short)iVar9 * 200);
    local_8 = iVar9;
  } while (-1 < iVar9);
cf_common_exit_00579E8F:
  uVar3 = (int)STField<short>(this,0x6c) + 1U & 0x80000007;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
  }
  *param_3 = (short)uVar3;
  return 0;
}

// 0057A0B0 FUN_0057a0b0
#line 4 "decomp/ST.exe/functions/0057A0B0/decomp.c"
undefined4 __cdecl
st::fn_0057A0B0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 local_2c [5];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;

  memset(local_2c, 0, 0x28); /* compiler bulk-zero initialization */
  local_2c[1] = param_5;
  local_18 = param_2;
  local_c = param_1;
  local_8 = param_4;
  local_2c[0] = 0x10e;
  local_2c[2] = 0;
  local_2c[3] = 1;
  local_14 = param_3;
  g_playSystem_00802A38->vfunc_08(0x13f,0,(short)&param_5,(short)local_2c,0);
  return param_5;
}

// 0057A140 FUN_0057a140
#line 4 "decomp/ST.exe/functions/0057A140/decomp.c"
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0057A140_param_2Enum. Cases:
   CASE_E6=230;CASE_E7=231;CASE_E8=232;CASE_E9=233;CASE_EA=234;CASE_EB=235;CASE_F2=242;CASE_F3=243;CASE_F4=244;CASE_F5=245;CASE_F6=246;CASE_F7=247;CASE_F8=248;CASE_F9=249;CASE_FA=250;CASE_FB=251

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0044C130 -> 0057A140 @ 0044C43B

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0044C130 -> 0057A140 @ 0044C43B; STAllPlayersC::GetTOBJImage parameter param_1 */

void __cdecl
st::fn_0057A140(int param_1,Global_sub_0057A140_param_2Enum param_2,int param_3,undefined4 *param_4,
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
    case CASE_E6:
      pcVar4 = "shark1";
      break;
    case CASE_E7:
      pcVar4 = "fish1";
      break;
    case CASE_E8:
      pcVar4 = "fish_b";
      break;
    case CASE_E9:
      pcVar4 = "fish_gr";
      break;
    case CASE_EA:
      pcVar4 = &CHAR_s_007cae4c;
      break;
    case CASE_EB:
      pcVar4 = &CHAR_z_007cae44;
      break;
    default:
      goto switchD_0057a18b_caseD_ec;
    case CASE_F2:
    case CASE_F3:
    case CASE_F4:
    case CASE_F5:
      pcVar4 = "crab2b";
      break;
    case CASE_F6:
    case CASE_F7:
      pcVar4 = "langus1";
      break;
    case CASE_F8:
    case CASE_F9:
      pcVar4 = "octopus1";
      break;
    case CASE_FA:
    case CASE_FB:
      pcVar4 = &CHAR_m_007cae18;
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
    *param_4 = st::machine_word_boundary_cast<undefined4>(PTR_0080676c);
  }
switchD_0057a18b_caseD_ec:
  return;
}

// 0057B670 FUN_0057b670
#line 4 "decomp/ST.exe/functions/0057B670/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0057B670 -> 00416270 @ 0057B716 | 0057B670 -> 0057A2C0 @ 0057B6F7

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0057B670 -> 00416270 @ 0057B716 | 0057B670 -> 0057A2C0 @ 0057B6F7 */

undefined4 __cdecl
st::fn_0057B670(int *param_1,uint param_2,uint param_3,short *param_4,short *param_5)

{
  undefined2 uVar1;
  int *this;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_60 [5];
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  short local_40;
  short local_3e;
  short local_3c;
  undefined2 local_3a;
  int *local_38;
  undefined1 local_34;
  undefined4 local_33;
  undefined2 local_2f;
  int local_8;

  this = param_1;
  uVar5 = 0;
  local_8 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == nullptr) {
    return 1;
  }
  if ((param_2 & 0xff) != 0) {
    if ((param_2 & 0xff) != 1) {
      return 1;
    }
    st::fn_00405D3A(param_1,param_3,&local_8);
    goto LAB_0057b6ff;
  }
  if (STField<int>(param_1,0x259) == 0x99) {
    iVar4 = 0x15e;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_0057b6da:
    param_1 = (int *)0x3fc00000;
  }
  else {
    if (STField<int>(param_1,0x259) != 0xb7) {
      iVar4 = 400;
      goto LAB_0057b6da;
    }
    iVar4 = 0xfa;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (int *)0x3f000000;
  }
  st::fn_00402D33((AnonShape_0057A2C0_A829D396 *)this,param_3,&local_8,param_4,iVar4,param_1,
                     param_5);
LAB_0057b6ff:
  if (local_8 != 0) {
    st::fn_004031E3(this,&param_2,(int *)&param_5,(short *)&param_4);
    if (STField<int>(this,0x259) == 0x99) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int *)0xb4;
    }
    else if (STField<int>(this,0x259) == 0xb7) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int *)0xb9;
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int *)0x96;
    }
    if (0 < (int)(param_3 + 1)) {
      do {
        uVar2 = param_3;
        uVar1 = STField<undefined2>(this,0x247);
        memset(local_60, 0, 0x58); /* compiler bulk-zero initialization */
        local_4c = STField<undefined2>(this,0x245);
        local_60[3] = 1;
        local_60[2] = 1;
        local_60[1] = this[9];
        local_48 = STField<undefined2>(this,0x249);
        local_2f = STField<undefined2>(this,0x262);
        local_33 = STField<undefined4>(this,0x25e);
        local_34 = STField<undefined1>(this,0x25d);
        local_60[0] = 0x28;
        local_46 = (undefined2)param_2;
        local_44 = STPiece<0,2>(param_5);
        local_42 = STPiece<0,2>(param_4);
        local_4a = uVar1;
        if (uVar5 == param_3) {
          iVar3 = st::fn_006ACF0D((int)STField<short>(this,0x3a),(int)(short)this[0xf],
                               (int)STField<short>(this,0x3e),(int)(short)this[0xd],
                               (int)STField<short>(this,0x36),(int)(short)this[0xe]);
          if (iVar3 == 0) {
            local_40 = *(short *)(local_8 + -8 + uVar5 * 8);
            local_3e = *(short *)(local_8 + -6 + uVar5 * 8);
            local_3c = *(short *)(local_8 + -4 + uVar5 * 8);
          }
          else {
            local_40 = (short)((((int)STField<short>(this,0x3a) - (int)(short)this[0xd]) * 100) /
                              iVar3) + (short)param_2;
            local_3e = (short)((((int)(short)this[0xf] - (int)STField<short>(this,0x36)) * 100) /
                              iVar3) + (short)param_5;
            local_3c = (short)((((int)STField<short>(this,0x3e) - (int)(short)this[0xe]) * 100) /
                              iVar3) + (short)param_4;
          }
        }
        else {
          local_40 = *(short *)(local_8 + uVar5 * 8);
          local_3e = *(short *)(local_8 + 2 + uVar5 * 8);
          local_3c = *(short *)(local_8 + 4 + uVar5 * 8);
        }
        local_38 = param_1;
        local_3a = *(undefined2 *)(local_8 + 6 + uVar5 * 8);
        g_playSystem_00802A38->vfunc_08(0x106,0,0,(short)local_60,0);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)(uVar2 + 1));
    }
    if (local_8 != 0) {
      st::fn_006AB060(&local_8);
    }
  }
  return 1;
}

// 0057B990 FUN_0057b990
#line 4 "decomp/ST.exe/functions/0057B990/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0057B9C4 MOV CX,word ptr
   [EBP + 0x14] */

void __cdecl
st::fn_0057B990(undefined4 param_1,undefined4 param_2,int param_3,ushort param_4,undefined2 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 local_40 [5];
  undefined4 *local_2c;
  undefined4 local_20 [3];
  undefined2 local_14;
  ushort local_12;

  if (param_3 != 0) {
    memset(local_40, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(local_20, 0, 0x1c); /* compiler bulk-zero initialization */
    local_20[2] = param_1;
    local_20[0] = param_2;
    local_14 = param_5;
    local_12 = param_4;
    local_40[2] = *(undefined4 *)(param_3 + 8);
    local_20[1] = param_6;
    local_2c = local_20;
    local_40[3] = 2;
    local_40[4] = param_7;
    (*g_playSystem_00802A38->vtable->SendMessage)
              ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_40);
  }
  return;
}

// 0057BA30 FUN_0057ba30
#line 4 "decomp/ST.exe/functions/0057BA30/decomp.c"
int __cdecl st::fn_0057BA30(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  short local_6;

  pvVar3 = param_1;
  local_24 = 0;
  local_1c = (param_2 + -1) / 0xc9 + 1;
  if (param_1 == nullptr) {
    return 0;
  }
  st::fn_004031E3(param_1,(uint *)((int)&param_1 + 2),(int *)((int)&param_2 + 2),&local_6);
  local_18 = STPiece<2,2>(param_2) + 1 + local_1c;
  local_14 = STPiece<2,2>(param_2) - local_1c;
  local_c = STPiece<2,2>(param_1) - local_1c;
  local_10 = STPiece<2,2>(param_1) + 1 + local_1c;
  iVar4 = local_6 - local_1c;
  local_1c = local_6 + 1 + local_1c;
  if (local_14 < 0) {
    local_14 = 0;
  }
  if (local_c < 0) {
    local_c = 0;
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (g_worldGrid.sizeY < local_18) {
    local_18 = (int)g_worldGrid.sizeY;
  }
  if (g_worldGrid.sizeX < local_10) {
    local_10 = (int)g_worldGrid.sizeX;
  }
  if (4 < local_1c) {
    local_1c = 4;
  }
  for (; iVar2 = local_14, iVar4 < local_1c; iVar4 = iVar4 + 1) {
    for (; iVar1 = local_c, iVar2 < local_18; iVar2 = iVar2 + 1) {
      for (; iVar1 < local_10; iVar1 = iVar1 + 1) {
        sVar7 = (short)iVar1;
        if ((((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) && (sVar6 = (short)iVar2, -1 < sVar6)) &&
           (((sVar6 < g_worldGrid.sizeY && (sVar5 = (short)iVar4, -1 < sVar5)) &&
            ((sVar5 < g_worldGrid.sizeZ &&
             (STGridAt3D(g_worldGrid, sVar7, sVar6, sVar5).objects[0] != nullptr)))))) {
          local_24 = local_24 + 1;
          st::fn_0040439F(STField<undefined4>(pvVar3,0x24),DAT_007e6620,
                             (int)STGridAt3D(g_worldGrid, sVar7, sVar6, sVar5).objects[0],
                             (ushort)STField<undefined4>(pvVar3,0x25e),
                             STField<undefined2>(pvVar3,0x262),0xac,0x110);
        }
      }
    }
  }
  return local_24;
}

// 0057BC50 FUN_0057bc50
#line 4 "decomp/ST.exe/functions/0057BC50/decomp.c"
int __cdecl
st::fn_0057BC50(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9)

{
  int iVar1;

  iVar1 = (param_6 * param_6) / 10000 + (param_5 * param_5) / 10000 + (param_4 * param_4) / 10000;
  if (iVar1 != 0) {
    return ((param_7 - param_1) * param_4 + (param_8 - param_2) * param_5 +
           (param_9 - param_3) * param_6) / iVar1;
  }
  return 0;
}

// 0057BD70 FUN_0057bd70
#line 4 "decomp/ST.exe/functions/0057BD70/decomp.c"
undefined4 __thiscall
st::fn_0057BD70(void *this,short param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;

  sVar2 = 0;
  sVar5 = 0;
  sVar6 = 0;
  switch(STField<undefined4>(this,0x267)) {
  case 0xe7:
  case 0xe9:
    sVar2 = 0x1c;
    sVar5 = 0x1c;
    sVar6 = 0x1c;
    goto switchD_0057bd8f_default;
  case 0xe8:
  case 0xea:
    sVar2 = 0x16;
    break;
  case 0xeb:
    sVar2 = 0x1c;
    break;
  default:
    goto switchD_0057bd8f_default;
  }
  sVar5 = 0xc;
  sVar6 = 0xc;
switchD_0057bd8f_default:
  sVar3 = STField<short>(this,0x43) - sVar5;
  sVar4 = STField<short>(this,0x45) - sVar6;
  sVar1 = STField<short>(this,0x41) - sVar2;
  sVar2 = sVar2 + STField<short>(this,0x41);
  sVar5 = sVar5 + STField<short>(this,0x43);
  sVar6 = sVar6 + STField<short>(this,0x45);
  if ((((((sVar1 <= param_1) && (param_1 <= sVar2)) || ((sVar1 <= param_4 && (param_4 <= sVar2))))
       || ((param_1 <= sVar1 && (sVar2 <= param_4)))) &&
      (((sVar3 <= param_2 && (param_2 <= sVar5)) ||
       (((sVar3 <= param_5 && (param_5 <= sVar5)) || ((param_2 <= sVar3 && (sVar5 <= param_5))))))))
     && ((((sVar4 <= param_3 && (param_3 <= sVar6)) || ((sVar4 <= param_6 && (param_6 <= sVar6))))
         || ((param_3 <= sVar4 && (sVar6 <= param_6)))))) {
    return 0;
  }
  return 0xffffffff;
}

// 0057BEE0 FUN_0057bee0
#line 4 "decomp/ST.exe/functions/0057BEE0/decomp.c"
undefined4 __thiscall
st::fn_0057BEE0(void *this,undefined4 param_1,undefined2 *param_2,undefined2 *param_3,
            undefined2 *param_4,undefined4 *param_5)

{
  *param_2 = STField<undefined2>(this,0x41);
  *param_3 = STField<undefined2>(this,0x43);
  *param_4 = STField<undefined2>(this,0x45);
  *param_5 = 0;
  return 0;
}

// 0057CB30 FUN_0057cb30
#line 4 "decomp/ST.exe/functions/0057CB30/decomp.c"
void __fastcall st::fn_0057CB30(AnonShape_0057CB30_71092CE7 *param_1)

{
  int iVar1;

  iVar1 = (int)g_worldGrid.sizeY;
  if ((((g_worldGrid.sizeX + -1 < param_1->field_0257) || (param_1->field_0257 < 0)) ||
      (iVar1 + -1 < param_1->field_025B)) || (param_1->field_025B < 0)) {
    param_1->field_0257 = g_worldGrid.sizeX + -1 >> 1;
    param_1->field_025B = iVar1 + -1 >> 1;
  }
  return;
}

// 0057CB80 FUN_0057cb80
#line 4 "decomp/ST.exe/functions/0057CB80/decomp.c"
int __thiscall st::fn_0057CB80(void *this,undefined4 param_1,int param_2)

{
  uint uVar1;

  if ((STField<int>(this,0x267) != 0xe7) && (STField<int>(this,0x267) != 0xe9)) {
    uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar1;
    return (uVar1 >> 0x10) % 0x15 + 0x1e + param_2;
  }
  return param_2;
}

// 0057CBF0 FUN_0057cbf0
#line 1 "decomp/ST.exe/functions/0057CBF0/decomp.c"

/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0057CBF0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

int st::fn_0057CBF0(Global_sub_0057CBF0_param_1Enum param_1,int param_2)

{
  switch(param_1) {
  case CASE_0:
    return param_2 + 5;
  case CASE_1:
    return param_2 + 2;
  case CASE_2:
    return param_2 + 10;
  case CASE_3:
    param_2 = param_2 + 3;
  }
  return param_2;
}

// 0057CC60 CreateSTFish
#line 4 "decomp/ST.exe/functions/0057CC60/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7A4>00401492

   [STObjectFactoryApplier] Central object factory for 0x0107 (ST_OBJECT_ST_FISH).
   Evidence: registry[16] at 007CA7A0 stores type 0x0107 and executable pointer 00401492; allocation
   size 619 uniquely matches /STFishC */

STFishC * __cdecl st::fn_0057CC60(void)

{
  STFishC *pSVar1;

  pSVar1 = (STFishC *)st::fn_006B04D0(0x26b);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_0040538A(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 0057CC90 FUN_0057cc90
#line 4 "decomp/ST.exe/functions/0057CC90/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0057CC90_param_1Enum. Cases:
   CASE_E7=231;CASE_E8=232;CASE_E9=233;CASE_EA=234;CASE_EB=235 */

undefined4 __thiscall st::fn_0057CC90(void *this,Global_sub_0057CC90_param_1Enum param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  uVar1 = 0xffffffff;
  iVar3 = 0;
  if (8 < param_2) {
    return 0xffffffff;
  }
  switch(param_1) {
  case CASE_E7:
  case CASE_E8:
  case CASE_E9:
    uVar1 = st::fn_00401EBA((void *)((int)this + 0x1d5),0xe,0,0xb,'\0');
    return uVar1;
  case CASE_EA:
    if (param_2 != 0) {
      iVar3 = (8 - param_2 >> 1) * 0xf;
    }
    iVar2 = iVar3 + 0xe;
    break;
  case CASE_EB:
    if (param_2 != 0) {
      iVar3 = (8 - param_2 >> 1) * 0x14;
    }
    iVar2 = iVar3 + 0x13;
    break;
  default:
    goto switchD_0057ccb8_default;
  }
  uVar1 = st::fn_00401EBA((void *)((int)this + 0x1d5),0xe,iVar3,iVar2,'\0');
switchD_0057ccb8_default:
  return uVar1;
}

// 0057D420 FUN_0057d420
#line 4 "decomp/ST.exe/functions/0057D420/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0057D5F0 -> 0057D420 @ 0057D677; STFishC::sub_0057D5F0 this; stable alias ESI */

undefined4 __fastcall st::fn_0057D420(STFishC *param_1)

{
  STFishC_field_0267State SVar1;
  int uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  short local_10 [2];
  short local_c [2];
  short local_8 [2];

  bVar9 = 6;
  SVar1 = param_1->field_0267;
  if ((SVar1 == CASE_E7) || (SVar1 == CASE_E8)) {
    bVar9 = 3;
  }
  else if (SVar1 == CASE_E9) {
    bVar9 = 4;
  }
  uVar2 = st::fn_006DB910((int)param_1->field_0047,(int)param_1->field_0049,(int)param_1->field_0235,
                       (int)param_1->field_0237);
  uVar3 = st::fn_006DB990(uVar2,8);
  uVar4 = st::machine_word_boundary_cast<uint>(param_1->field_001C * 0x41c64e6d + 0x3039);
  param_1->field_001C = uVar4;
  uVar4 = uVar4 >> 0x10;
  piVar12 = (int *)local_8;
  piVar11 = (int *)local_c;
  iVar7 = (int)param_1->field_0049;
  iVar8 = (int)param_1->field_0047;
  piVar10 = (int *)local_10;
  iVar5 = (int)param_1->field_004B;
  iVar6 = st::fn_006ACF90(iVar8,iVar7,(int)param_1->field_0235,(int)param_1->field_0237);
  iVar5 = st::fn_0040244B(uVar3,(int)param_1->field_0239 - (int)param_1->field_004B,iVar6,iVar8,
                             iVar7,iVar5,piVar10,piVar11,piVar12,uVar4);
  if (iVar5 == 0) {
    st::fn_00405C90(param_1,bVar9);
    st::fn_00405105(param_1,bVar9 - 1);
    iVar5 = st::fn_00404318
                      ((AnonReceiver_004167A0 *)param_1,param_1->field_0235,param_1->field_0237,
                       param_1->field_0239);
    if (iVar5 != 0) {
      param_1->field_023F = 0x10;
      return 0;
    }
    return 1;
  }
  st::fn_00405C90(param_1,bVar9);
  st::fn_00405105(param_1,bVar9 - 1);
  iVar5 = st::fn_00404318
                    ((AnonReceiver_004167A0 *)param_1,local_10[0],local_c[0],local_8[0]);
  if ((iVar5 != 0) &&
     (iVar5 = st::fn_00404318
                        ((AnonReceiver_004167A0 *)param_1,param_1->field_0235,param_1->field_0237,
                         param_1->field_0239), iVar5 != 0)) {
    return 0;
  }
  return 1;
}

// 0057DF20 FUN_0057df20
#line 4 "decomp/ST.exe/functions/0057DF20/decomp.c"
undefined4 __cdecl
st::fn_0057DF20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 local_2c [5];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  memset(local_2c, 0, 0x28); /* compiler bulk-zero initialization */
  local_18 = param_1;
  local_8 = param_5;
  local_c = param_4;
  local_2c[1] = param_6;
  local_10 = param_3;
  local_2c[0] = 0x32;
  local_2c[2] = 0;
  local_2c[3] = 1;
  local_14 = param_2;
  g_playSystem_00802A38->vfunc_08(0x107,0,(short)&param_6,(short)local_2c,0);
  return param_6;
}

// 0057F1A0 CreateSTDcResourc
#line 4 "decomp/ST.exe/functions/0057F1A0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7B4>00405BB9

   [STObjectFactoryApplier] Central object factory for 0x010B (ST_OBJECT_ST_DC_RESOURC).
   Evidence: registry[18] at 007CA7B0 stores type 0x010B and executable pointer 00405BB9; allocation
   size 631 uniquely matches /STDcResourcC */

STDcResourcC * __cdecl st::fn_0057F1A0(void)

{
  STDcResourcC *pSVar1;

  pSVar1 = (STDcResourcC *)st::fn_006B04D0(0x277);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00405704(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 0057F240 FUN_0057f240
#line 4 "decomp/ST.exe/functions/0057F240/decomp.c"
undefined1 st::fn_0057F240(int param_1,int param_2)

{
  bool bVar1;

  bVar1 = false;
  if (param_1 == 0xdd) {
    if (param_2 < 0x1389) {
      return 2;
    }
    bVar1 = param_2 < 0x2711;
  }
  else {
    if (param_1 == 0xde) {
      if (param_2 < 0x2711) {
        return 2;
      }
      return param_2 < 0x9c41;
    }
    if (param_1 == 0xe0) {
      if (param_2 < 1) {
        return 2;
      }
      return param_2 < 0x4e21;
    }
  }
  return bVar1;
}

// 0057F530 FUN_0057f530
#line 4 "decomp/ST.exe/functions/0057F530/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0057F530 returns data at 007CB0A4 @ 0057F553 | 0057F530 returns data at 007CB0A4 @
   0057F567 */

char * __thiscall st::fn_0057F530(void *this,int param_1)

{
  undefined1 uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int3 extraout_var;
  int iVar2;

  uVar1 = st::fn_004019FB(0xe0,STField<int>(this,0x259));
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  iVar2 = CONCAT31(extraout_var,uVar1);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (((param_1 == 0) && (iVar2 != 0 && -1 < extraout_var)) && (iVar2 < 5)) {
    return (&PTR_s_term0_007cb0a4)[iVar2];
  }
  return PTR_s_term0_007cb0a4;
}

