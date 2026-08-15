#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0054.cpp

// 00540C40 FUN_00540c40
#line 4 "decomp/ST.exe/functions/00540C40/decomp.c"
undefined4 * __cdecl st::fn_00540C40(void *param_1,uint *param_2,uint *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint *puVar8;
  char *pcVar9;
  int local_c;
  int local_8;

  uVar3 = 0xffffffff;
  iVar5 = 0;
  pcVar6 = &CHAR_00h_008016a0;
  do {
    pcVar9 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  local_8 = 0;
  local_c = 0;
  pcVar6 = pcVar9 + -uVar3;
  pcVar9 = &CHAR_00h_008016f0;
  memmove(pcVar9, pcVar6, uVar3); /* compiler REP MOVS byte copy */
  if ((param_1 != nullptr) && (param_2 != nullptr)) {
    iVar2 = st::fn_00711110(param_1,(char *)param_2);
    if (param_4 < iVar2) {
      if (param_3 != nullptr) {
        local_8 = st::fn_00711110(param_1,(char *)param_3);
      }
      puVar8 = param_2;
      iVar2 = local_8;
      if (param_4 < local_8) goto LAB_00540d59;
      while (iVar2 < param_4) {
        uVar3 = st::fn_00710FB0(param_1,(byte *)puVar8);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar5 = iVar5 + STField<int>(param_1,0x58) +
                        (int)*(short *)(STField<int>(param_1,0x9a) + 0x6a + (uVar3 & 0xffff) * 10
                                       );
        local_c = local_c + 1;
        puVar8 = (uint *)((int)puVar8 + 1);
        iVar2 = iVar5 + local_8;
      }
      st::fn_0072E340(&CHAR_00h_008016f0,(char *)param_2,local_c - 1);
      uVar3 = 0xffffffff;
      *(undefined1 *)((int)&g_sAMPanel_008016EC + local_c + 3) = 0;
      do {
        puVar8 = param_3;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        puVar8 = (uint *)((int)param_3 + 1);
        uVar4 = *param_3;
        param_3 = puVar8;
      } while ((char)uVar4 != '\0');
      uVar3 = ~uVar3;
      pcVar6 = (char *)((int)puVar8 - uVar3);
      iVar5 = -1;
      pcVar9 = &CHAR_00h_008016f0;
      do {
        pcVar7 = pcVar9;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
    }
    else {
      uVar3 = 0xffffffff;
      do {
        puVar8 = param_2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        puVar8 = (uint *)((int)param_2 + 1);
        uVar4 = *param_2;
        param_2 = puVar8;
      } while ((char)uVar4 != '\0');
      uVar3 = ~uVar3;
      pcVar6 = (char *)((int)puVar8 - uVar3);
      pcVar7 = &CHAR_00h_008016f0;
    }
    memmove(pcVar7, pcVar6, uVar3); /* compiler REP MOVS byte copy */
  }
LAB_00540d59:
  return (undefined4 *)&CHAR_00h_008016f0;
}

// 005411A0 FUN_005411a0
#line 4 "decomp/ST.exe/functions/005411A0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 004F9480 -> 005411A0 @ 004F94F8 | 004F95B0 -> 005411A0 @ 004F95F6 | 00532A80 ->
   005411A0 @ 00532B02 | 005DC050 -> 005411A0 @ 005DC23A | 005DC730 -> 005411A0 @ 005DC835 |
   005E1330 -> 005411A0 @ 005E2306

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004F9480 -> 005411A0 @ 004F94F8 | 004F95B0 -> 005411A0 @ 004F95F6 | 004F96A0 ->
   005411A0 @ 004F9803

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=1,
   ignored=7, unknown=0 */

void __cdecl st::fn_005411A0(DArrayTy *param_1,char *param_2,char *text)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  InternalExceptionFrame local_4c;
  uint *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  if (((param_1 != nullptr) && (param_2 != nullptr)) && (text != nullptr)) {
    uVar4 = 0xffffffff;
    pcVar6 = param_2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0xffffffff;
    pcVar6 = text;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_8 = st::pointer_boundary_cast<uint *>(st::fn_006AAC70(~uVar4 + ~uVar5 + 2));
    if (local_8 != nullptr) {
      st::external_00000080((LPSTR)local_8,text,param_2);
      for (puVar3 = st::fn_0072E560(local_8,'\n'); puVar3 != nullptr;
          puVar3 = st::fn_0072E560(puVar3,'\n')) {
        *(undefined1 *)puVar3 = 0x20;
      }
      st::fn_006B5AA0(param_1,(char *)local_8);
      st::fn_006AB060(&local_8);
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 005412B0 FUN_005412b0
#line 4 "decomp/ST.exe/functions/005412B0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005424A0 -> 005412B0 @ 00542552; data at 0080679C */

void __cdecl st::fn_005412B0(ushort *param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  LOGFONTA *pLVar6;
  char *pcVar7;
  CHAR *pCVar8;
  LOGFONTA local_cc;
  byte local_90 [88];
  byte local_38 [52];

  pLVar6 = &local_cc;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    pLVar6->lfHeight = 0;
    pLVar6 = (LOGFONTA *)&pLVar6->lfWidth;
  }
  local_cc.lfCharSet = param_3;
  uVar3 = 0xffffffff;
  pcVar5 = "Small Fonts";
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  local_cc.lfHeight = -9;
  local_cc.lfWidth = 0;
  local_cc.lfEscapement = 0;
  local_cc.lfOrientation = 0;
  local_cc.lfWeight = 400;
  local_cc.lfItalic = '\0';
  local_cc.lfUnderline = '\0';
  local_cc.lfStrikeOut = '\0';
  local_cc.lfOutPrecision = '\x01';
  local_cc.lfClipPrecision = '\x02';
  local_cc.lfQuality = '\x01';
  local_cc.lfPitchAndFamily = '\"';
  pcVar5 = pcVar7 + -uVar3;
  pCVar8 = local_cc.lfFaceName;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pCVar8 = pCVar8 + 4;
  }
  local_38[0] = 0;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar8 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pCVar8 = pCVar8 + 1;
  }
  local_38[1] = 0x6a;
  local_38[0x10] = 0x10;
  local_38[0x11] = 0x10;
  local_38[2] = 0x46;
  local_38[0x12] = 0x11;
  local_38[0x13] = 0x11;
  local_38[0x14] = 0x11;
  local_38[0x15] = 0x11;
  local_38[3] = 0x28;
  local_38[0x17] = 0x16;
  local_38[0x18] = 0x16;
  local_38[4] = 0x29;
  local_38[0x19] = 0x17;
  local_38[0x1a] = 0x17;
  local_38[0x1b] = 0x17;
  local_38[0x1c] = 0x17;
  local_38[5] = 0x43;
  local_38[6] = 0x43;
  local_38[7] = 0x43;
  local_38[8] = 0xcf;
  local_38[9] = 0x57;
  local_38[10] = 0xa2;
  local_38[0xb] = 0x5b;
  local_38[0xc] = 0x5c;
  local_38[0xd] = 0x5c;
  local_38[0xe] = 0x5c;
  local_38[0xf] = 0x15;
  local_38[0x16] = 0x1b;
  local_38[0x1d] = 0xb1;
  local_38[0x1e] = 0x84;
  local_38[0x1f] = 0xae;
  local_38[0x20] = 0xc1;
  local_38[0x21] = 0xaf;
  local_38[0x22] = 0xaf;
  local_38[0x23] = 0xaf;
  local_38[0x24] = 0x3f;
  local_38[0x28] = 0x43;
  local_38[0x29] = 0x43;
  local_38[0x2a] = 0x43;
  local_38[0x2c] = 0x34;
  local_38[0x2d] = 0x34;
  local_38[0x2e] = 0x34;
  local_90[0x11] = 0x34;
  local_90[0x1d] = 0x43;
  local_38[0x25] = 0x46;
  local_38[0x26] = 0x28;
  local_38[0x27] = 0x29;
  local_38[0x2b] = 0x39;
  local_38[0x2f] = 0x35;
  local_38[0x30] = 0x35;
  local_38[0x31] = 0x36;
  local_90[0] = 0x20;
  local_90[1] = 0x21;
  local_90[2] = 0x22;
  local_90[3] = 0x23;
  local_90[4] = 0x25;
  local_90[5] = 0x26;
  local_90[6] = 0x27;
  local_90[7] = 0x28;
  local_90[8] = 0x29;
  local_90[9] = 0x2c;
  local_90[10] = 0x2d;
  local_90[0xb] = 0x2e;
  local_90[0xc] = 0x2f;
  local_90[0xd] = 0x30;
  local_90[0xe] = 0x31;
  local_90[0xf] = 0x32;
  local_90[0x10] = 0x33;
  local_90[0x12] = 0x35;
  local_90[0x13] = 0x36;
  local_90[0x14] = 0x37;
  local_90[0x15] = 0x38;
  local_90[0x16] = 0x39;
  local_90[0x17] = 0x3a;
  local_90[0x18] = 0x3d;
  local_90[0x19] = 0x3e;
  local_90[0x1a] = 0x3f;
  local_90[0x1b] = 0x41;
  local_90[0x1c] = 0x42;
  local_90[0x1e] = 0x44;
  local_90[0x1f] = 0x45;
  local_90[0x20] = 0xd;
  local_90[0x21] = 10;
  local_90[0x22] = 0x46;
  local_90[0x23] = 0x47;
  local_90[0x24] = 0x48;
  local_90[0x25] = 0x49;
  local_90[0x26] = 0x4a;
  local_90[0x27] = 0x4b;
  local_90[0x28] = 0x4c;
  local_90[0x29] = 0x4d;
  local_90[0x2a] = 0x4e;
  local_90[0x2b] = 0x4f;
  local_90[0x2c] = 0x50;
  local_90[0x2d] = 0x51;
  local_90[0x2e] = 0x52;
  local_90[0x2f] = 0x53;
  local_90[0x30] = 0x54;
  local_90[0x31] = 0x55;
  local_90[0x32] = 0x56;
  local_90[0x33] = 0x57;
  local_90[0x34] = 0x58;
  local_90[0x35] = 0x59;
  local_90[0x36] = 0x5a;
  local_90[0x37] = 0x5c;
  local_90[0x38] = 0x5f;
  local_90[0x39] = 0x61;
  local_90[0x3a] = 0x62;
  local_90[0x3b] = 99;
  local_90[0x3c] = 100;
  local_90[0x3d] = 0x65;
  local_90[0x3e] = 0x66;
  local_90[0x3f] = 0x67;
  local_90[0x40] = 0x68;
  local_90[0x42] = 0xd;
  local_90[0x43] = 10;
  local_90[0x41] = 0x69;
  local_90[0x44] = 0x6a;
  local_90[0x45] = 0x6b;
  local_90[0x46] = 0x6c;
  local_90[0x47] = 0x6d;
  local_90[0x48] = 0x6e;
  local_90[0x49] = 0x6f;
  local_90[0x4a] = 0x70;
  local_90[0x4b] = 0x71;
  local_90[0x4c] = 0x72;
  local_90[0x4d] = 0x73;
  local_90[0x4e] = 0x74;
  local_90[0x4f] = 0x75;
  local_90[0x50] = 0x76;
  local_90[0x51] = 0x77;
  local_90[0x52] = 0x78;
  local_90[0x53] = 0x79;
  local_90[0x54] = 0x7a;
  local_90[0x55] = 0x7c;
  local_90[0x56] = 0x7e;
  st::fn_0070D1F0
            (0x19d,&local_cc,nullptr,local_90,(int)param_1,local_38,7,7,1,0,0x20021c,param_2);
  return;
}

// 005416A0 FUN_005416a0
#line 4 "decomp/ST.exe/functions/005416A0/decomp.c"
void __cdecl st::fn_005416A0(int param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  LOGFONTA *pLVar6;
  char *pcVar7;
  CHAR *pCVar8;
  LOGFONTA local_b0;
  byte local_74 [88];
  byte local_1c [24];

  pLVar6 = &local_b0;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    pLVar6->lfHeight = 0;
    pLVar6 = (LOGFONTA *)&pLVar6->lfWidth;
  }
  local_b0.lfCharSet = param_3;
  uVar3 = 0xffffffff;
  pcVar5 = "Verdana";
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  local_b0.lfHeight = -0x10;
  local_b0.lfWidth = 0;
  local_b0.lfEscapement = 0;
  local_b0.lfOrientation = 0;
  local_b0.lfWeight = 400;
  local_b0.lfItalic = '\0';
  local_b0.lfUnderline = '\0';
  local_b0.lfStrikeOut = '\0';
  local_b0.lfOutPrecision = '\x03';
  local_b0.lfClipPrecision = '\x02';
  local_b0.lfQuality = '\x01';
  local_b0.lfPitchAndFamily = '\"';
  pcVar5 = pcVar7 + -uVar3;
  pCVar8 = local_b0.lfFaceName;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pCVar8 = pCVar8 + 4;
  }
  local_1c[0] = 0;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar8 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pCVar8 = pCVar8 + 1;
  }
  local_1c[2] = 0x13;
  local_1c[1] = 0x49;
  local_1c[3] = 0x15;
  local_1c[4] = 0x10;
  local_1c[5] = 0x72;
  local_1c[6] = 0xcf;
  local_1c[7] = 0x49;
  local_1c[8] = 0x16;
  local_1c[9] = 0x3f;
  local_1c[10] = 0x28;
  local_1c[0xb] = 0x74;
  local_1c[0xc] = 0x43;
  local_1c[0xd] = 0x6a;
  local_1c[0xe] = 0x74;
  local_1c[0xf] = 0x6e;
  local_1c[0x10] = 0xc4;
  local_1c[0x11] = 0xc5;
  local_1c[0x12] = 0x53;
  local_1c[0x13] = 0xc2;
  local_1c[0x14] = 0x62;
  local_74[0] = 0x20;
  local_74[1] = 0x21;
  local_74[2] = 0x22;
  local_74[3] = 0x23;
  local_74[4] = 0x25;
  local_74[5] = 0x26;
  local_74[6] = 0x27;
  local_74[7] = 0x28;
  local_74[8] = 0x29;
  local_74[9] = 0x2c;
  local_74[10] = 0x2d;
  local_74[0xb] = 0x2e;
  local_74[0xc] = 0x2f;
  local_74[0xd] = 0x30;
  local_74[0xe] = 0x31;
  local_74[0xf] = 0x32;
  local_74[0x10] = 0x33;
  local_74[0x11] = 0x34;
  local_74[0x12] = 0x35;
  local_74[0x13] = 0x36;
  local_74[0x25] = 0x49;
  local_74[0x1d] = 0x43;
  local_74[0x4e] = 0x74;
  local_74[0x14] = 0x37;
  local_74[0x15] = 0x38;
  local_74[0x16] = 0x39;
  local_74[0x17] = 0x3a;
  local_74[0x18] = 0x3d;
  local_74[0x19] = 0x3e;
  local_74[0x1a] = 0x3f;
  local_74[0x1b] = 0x41;
  local_74[0x1c] = 0x42;
  local_74[0x1e] = 0x44;
  local_74[0x1f] = 0x45;
  local_74[0x20] = 0xd;
  local_74[0x21] = 10;
  local_74[0x22] = 0x46;
  local_74[0x23] = 0x47;
  local_74[0x24] = 0x48;
  local_74[0x26] = 0x4a;
  local_74[0x27] = 0x4b;
  local_74[0x28] = 0x4c;
  local_74[0x29] = 0x4d;
  local_74[0x2a] = 0x4e;
  local_74[0x2b] = 0x4f;
  local_74[0x2c] = 0x50;
  local_74[0x2d] = 0x51;
  local_74[0x2e] = 0x52;
  local_74[0x2f] = 0x53;
  local_74[0x30] = 0x54;
  local_74[0x31] = 0x55;
  local_74[0x32] = 0x56;
  local_74[0x33] = 0x57;
  local_74[0x34] = 0x58;
  local_74[0x35] = 0x59;
  local_74[0x36] = 0x5a;
  local_74[0x37] = 0x5c;
  local_74[0x38] = 0x5f;
  local_74[0x39] = 0x61;
  local_74[0x3a] = 0x62;
  local_74[0x3b] = 99;
  local_74[0x3c] = 100;
  local_74[0x3d] = 0x65;
  local_74[0x3e] = 0x66;
  local_74[0x3f] = 0x67;
  local_74[0x40] = 0x68;
  local_74[0x41] = 0x69;
  local_74[0x42] = 0xd;
  local_74[0x43] = 10;
  local_74[0x44] = 0x6a;
  local_74[0x45] = 0x6b;
  local_74[0x46] = 0x6c;
  local_74[0x47] = 0x6d;
  local_74[0x48] = 0x6e;
  local_74[0x49] = 0x6f;
  local_74[0x4a] = 0x70;
  local_74[0x4b] = 0x71;
  local_74[0x4c] = 0x72;
  local_74[0x4d] = 0x73;
  local_74[0x4f] = 0x75;
  local_74[0x50] = 0x76;
  local_74[0x51] = 0x77;
  local_74[0x52] = 0x78;
  local_74[0x53] = 0x79;
  local_74[0x54] = 0x7a;
  local_74[0x55] = 0x7c;
  local_74[0x56] = 0x7e;
  st::fn_0070D1F0
            (0x19d,&local_b0,nullptr,local_74,param_1,local_1c,10,2,1,1,0x40001c,param_2);
  return;
}

// 005419E0 FUN_005419e0
#line 4 "decomp/ST.exe/functions/005419E0/decomp.c"
void __cdecl st::fn_005419E0(int param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  LOGFONTA *pLVar6;
  char *pcVar7;
  CHAR *pCVar8;
  LOGFONTA local_a4;
  byte local_68 [88];
  byte local_10 [12];

  pLVar6 = &local_a4;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    pLVar6->lfHeight = 0;
    pLVar6 = (LOGFONTA *)&pLVar6->lfWidth;
  }
  local_a4.lfCharSet = param_3;
  uVar3 = 0xffffffff;
  pcVar5 = "System";
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  local_a4.lfHeight = -0xd;
  local_a4.lfWidth = 0;
  local_a4.lfEscapement = 0;
  local_a4.lfOrientation = 0;
  local_a4.lfWeight = 700;
  local_a4.lfItalic = '\0';
  local_a4.lfUnderline = '\0';
  local_a4.lfStrikeOut = '\0';
  local_a4.lfOutPrecision = '\x01';
  local_a4.lfClipPrecision = '\x02';
  local_a4.lfQuality = '\x01';
  local_a4.lfPitchAndFamily = '\"';
  pcVar5 = pcVar7 + -uVar3;
  pCVar8 = local_a4.lfFaceName;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pCVar8 = pCVar8 + 4;
  }
  local_10[7] = 0x8e;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar8 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pCVar8 = pCVar8 + 1;
  }
  local_10[8] = 0x8e;
  local_10[0] = 0;
  local_10[1] = 0x75;
  local_10[2] = 0x28;
  local_10[3] = 0x45;
  local_10[4] = 0x44;
  local_10[5] = 0x43;
  local_10[6] = 0x20;
  local_10[9] = 0x30;
  local_10[10] = 0x31;
  local_68[0] = 0x20;
  local_68[1] = 0x21;
  local_68[2] = 0x22;
  local_68[3] = 0x23;
  local_68[4] = 0x25;
  local_68[5] = 0x26;
  local_68[6] = 0x27;
  local_68[7] = 0x28;
  local_68[8] = 0x29;
  local_68[9] = 0x2c;
  local_68[10] = 0x2d;
  local_68[0xb] = 0x2e;
  local_68[0xc] = 0x2f;
  local_68[0xd] = 0x30;
  local_68[0xe] = 0x31;
  local_68[0xf] = 0x32;
  local_68[0x10] = 0x33;
  local_68[0x11] = 0x34;
  local_68[0x12] = 0x35;
  local_68[0x13] = 0x36;
  local_68[0x14] = 0x37;
  local_68[0x15] = 0x38;
  local_68[0x16] = 0x39;
  local_68[0x17] = 0x3a;
  local_68[0x18] = 0x3d;
  local_68[0x19] = 0x3e;
  local_68[0x1a] = 0x3f;
  local_68[0x1b] = 0x41;
  local_68[0x1c] = 0x42;
  local_68[0x20] = 0xd;
  local_68[0x42] = 0xd;
  local_68[0x21] = 10;
  local_68[0x43] = 10;
  local_68[0x1d] = 0x43;
  local_68[0x1e] = 0x44;
  local_68[0x1f] = 0x45;
  local_68[0x22] = 0x46;
  local_68[0x23] = 0x47;
  local_68[0x24] = 0x48;
  local_68[0x25] = 0x49;
  local_68[0x26] = 0x4a;
  local_68[0x27] = 0x4b;
  local_68[0x28] = 0x4c;
  local_68[0x29] = 0x4d;
  local_68[0x2a] = 0x4e;
  local_68[0x2b] = 0x4f;
  local_68[0x2c] = 0x50;
  local_68[0x2d] = 0x51;
  local_68[0x2e] = 0x52;
  local_68[0x2f] = 0x53;
  local_68[0x30] = 0x54;
  local_68[0x31] = 0x55;
  local_68[0x32] = 0x56;
  local_68[0x33] = 0x57;
  local_68[0x34] = 0x58;
  local_68[0x35] = 0x59;
  local_68[0x36] = 0x5a;
  local_68[0x37] = 0x5c;
  local_68[0x38] = 0x5f;
  local_68[0x39] = 0x61;
  local_68[0x3a] = 0x62;
  local_68[0x3b] = 99;
  local_68[0x3c] = 100;
  local_68[0x3d] = 0x65;
  local_68[0x3e] = 0x66;
  local_68[0x3f] = 0x67;
  local_68[0x40] = 0x68;
  local_68[0x41] = 0x69;
  local_68[0x44] = 0x6a;
  local_68[0x45] = 0x6b;
  local_68[0x46] = 0x6c;
  local_68[0x47] = 0x6d;
  local_68[0x48] = 0x6e;
  local_68[0x49] = 0x6f;
  local_68[0x4a] = 0x70;
  local_68[0x4b] = 0x71;
  local_68[0x4c] = 0x72;
  local_68[0x4d] = 0x73;
  local_68[0x4e] = 0x74;
  local_68[0x4f] = 0x75;
  local_68[0x50] = 0x76;
  local_68[0x51] = 0x77;
  local_68[0x52] = 0x78;
  local_68[0x53] = 0x79;
  local_68[0x54] = 0x7a;
  local_68[0x55] = 0x7c;
  local_68[0x56] = 0x7e;
  st::fn_0070D1F0
            (0x19d,&local_a4,nullptr,local_68,param_1,local_10,2,5,1,0,0x100021c,param_2);
  return;
}

// 00541CF0 FUN_00541cf0
#line 4 "decomp/ST.exe/functions/00541CF0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005424A0 -> 00541CF0 @ 0054252E; data at 0080679C */

void __cdecl st::fn_00541CF0(ushort *param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  LOGFONTA *pLVar6;
  char *pcVar7;
  CHAR *pCVar8;
  LOGFONTA local_90;
  byte local_54 [60];
  byte local_18 [20];

  pLVar6 = &local_90;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    pLVar6->lfHeight = 0;
    pLVar6 = (LOGFONTA *)&pLVar6->lfWidth;
  }
  local_90.lfCharSet = param_3;
  uVar3 = 0xffffffff;
  pcVar5 = "Small Fonts";
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  local_90.lfHeight = -8;
  local_90.lfWidth = 0;
  local_90.lfEscapement = 0;
  local_90.lfOrientation = 0;
  local_90.lfWeight = 400;
  local_90.lfItalic = '\0';
  local_90.lfUnderline = '\0';
  local_90.lfStrikeOut = '\0';
  local_90.lfOutPrecision = '\x01';
  local_90.lfClipPrecision = '\x02';
  local_90.lfQuality = '\x01';
  local_90.lfPitchAndFamily = '\"';
  local_18[0] = 0;
  pcVar5 = pcVar7 + -uVar3;
  pCVar8 = local_90.lfFaceName;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pCVar8 = pCVar8 + 4;
  }
  local_18[2] = 0x10;
  local_18[3] = 0x10;
  local_18[4] = 0x10;
  local_18[5] = 0x10;
  local_18[6] = 0x10;
  local_18[8] = 0x10;
  local_18[9] = 0x10;
  local_18[10] = 0x10;
  local_18[0xb] = 0x10;
  local_18[0xc] = 0x10;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar8 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pCVar8 = pCVar8 + 1;
  }
  local_18[1] = 0x13;
  local_18[7] = 0x12;
  local_18[0xd] = 0xcf;
  local_18[0xe] = 0x5f;
  local_18[0xf] = 0x5f;
  local_18[0x10] = 0x5f;
  local_18[0x11] = 0x5f;
  local_18[0x12] = 0x5f;
  local_54[0] = 0x20;
  local_54[1] = 0x21;
  local_54[2] = 0x22;
  local_54[3] = 0x23;
  local_54[4] = 0x25;
  local_54[5] = 0x26;
  local_54[6] = 0x27;
  local_54[7] = 0x28;
  local_54[8] = 0x29;
  local_54[9] = 0x2c;
  local_54[10] = 0x2d;
  local_54[0xb] = 0x2e;
  local_54[0xc] = 0x2f;
  local_54[0xd] = 0x30;
  local_54[0xe] = 0x31;
  local_54[0xf] = 0x32;
  local_54[0x10] = 0x33;
  local_54[0x11] = 0x34;
  local_54[0x12] = 0x35;
  local_54[0x13] = 0x36;
  local_54[0x14] = 0x37;
  local_54[0x15] = 0x38;
  local_54[0x16] = 0x39;
  local_54[0x17] = 0x3a;
  local_54[0x18] = 0x3d;
  local_54[0x19] = 0x3e;
  local_54[0x1a] = 0x3f;
  local_54[0x1b] = 0x41;
  local_54[0x1c] = 0x42;
  local_54[0x1d] = 0x43;
  local_54[0x1e] = 0x44;
  local_54[0x1f] = 0x45;
  local_54[0x20] = 0xd;
  local_54[0x21] = 10;
  local_54[0x22] = 0x46;
  local_54[0x23] = 0x47;
  local_54[0x24] = 0x48;
  local_54[0x25] = 0x49;
  local_54[0x26] = 0x4a;
  local_54[0x27] = 0x4b;
  local_54[0x28] = 0x4c;
  local_54[0x29] = 0x4d;
  local_54[0x2a] = 0x4e;
  local_54[0x2b] = 0x4f;
  local_54[0x2c] = 0x50;
  local_54[0x2d] = 0x51;
  local_54[0x2e] = 0x52;
  local_54[0x2f] = 0x53;
  local_54[0x30] = 0x54;
  local_54[0x31] = 0x55;
  local_54[0x32] = 0x56;
  local_54[0x33] = 0x57;
  local_54[0x34] = 0x58;
  local_54[0x35] = 0x59;
  local_54[0x36] = 0x5a;
  local_54[0x37] = 0x5c;
  local_54[0x38] = 0x7c;
  local_54[0x39] = 0x7e;
  local_54[0x3a] = 0x2a;
  st::fn_0070D1F0
            (0x19d,&local_90,nullptr,local_54,(int)param_1,local_18,3,6,1,0,0x10021c,param_2);
  return;
}

// 00541F60 FUN_00541f60
#line 4 "decomp/ST.exe/functions/00541F60/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005424A0 -> 00541F60 @ 00542515; data at 0080679C */

void __cdecl st::fn_00541F60(ushort *param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  LOGFONTA *pLVar6;
  char *pcVar7;
  CHAR *pCVar8;
  LOGFONTA local_90;
  byte local_54 [60];
  byte local_18 [20];

  pLVar6 = &local_90;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    pLVar6->lfHeight = 0;
    pLVar6 = (LOGFONTA *)&pLVar6->lfWidth;
  }
  local_90.lfCharSet = param_3;
  uVar3 = 0xffffffff;
  pcVar5 = "Small Fonts";
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  local_90.lfHeight = -8;
  local_90.lfWidth = 0;
  local_90.lfEscapement = 0;
  local_90.lfOrientation = 0;
  local_90.lfWeight = 400;
  local_90.lfItalic = '\0';
  local_90.lfUnderline = '\0';
  local_90.lfStrikeOut = '\0';
  local_90.lfOutPrecision = '\x01';
  local_90.lfClipPrecision = '\x02';
  local_90.lfQuality = '\x01';
  local_90.lfPitchAndFamily = '\"';
  pcVar5 = pcVar7 + -uVar3;
  pCVar8 = local_90.lfFaceName;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pCVar8 = pCVar8 + 4;
  }
  local_18[0] = 0;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar8 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pCVar8 = pCVar8 + 1;
  }
  local_18[1] = 99;
  local_18[2] = 0x8d;
  local_18[3] = 0x8d;
  local_18[4] = 0x4f;
  local_18[5] = 0x4f;
  local_18[6] = 0x4f;
  local_18[7] = 0x82;
  local_18[8] = 0xac;
  local_18[9] = 0xac;
  local_18[10] = 0xac;
  local_18[0xb] = 0xac;
  local_18[0xc] = 0xac;
  local_18[0xd] = 0x6e;
  local_18[0xe] = 99;
  local_18[0xf] = 99;
  local_18[0x10] = 99;
  local_18[0x11] = 99;
  local_18[0x12] = 99;
  local_54[0] = 0x20;
  local_54[1] = 0x21;
  local_54[2] = 0x22;
  local_54[3] = 0x23;
  local_54[4] = 0x25;
  local_54[5] = 0x26;
  local_54[6] = 0x27;
  local_54[7] = 0x28;
  local_54[8] = 0x29;
  local_54[9] = 0x2c;
  local_54[10] = 0x2d;
  local_54[0xb] = 0x2e;
  local_54[0xc] = 0x2f;
  local_54[0xd] = 0x30;
  local_54[0xe] = 0x31;
  local_54[0xf] = 0x32;
  local_54[0x10] = 0x33;
  local_54[0x11] = 0x34;
  local_54[0x12] = 0x35;
  local_54[0x13] = 0x36;
  local_54[0x14] = 0x37;
  local_54[0x15] = 0x38;
  local_54[0x16] = 0x39;
  local_54[0x17] = 0x3a;
  local_54[0x18] = 0x3d;
  local_54[0x19] = 0x3e;
  local_54[0x1a] = 0x3f;
  local_54[0x1b] = 0x41;
  local_54[0x1c] = 0x42;
  local_54[0x1d] = 0x43;
  local_54[0x1e] = 0x44;
  local_54[0x1f] = 0x45;
  local_54[0x20] = 0xd;
  local_54[0x21] = 10;
  local_54[0x22] = 0x46;
  local_54[0x23] = 0x47;
  local_54[0x24] = 0x48;
  local_54[0x25] = 0x49;
  local_54[0x26] = 0x4a;
  local_54[0x27] = 0x4b;
  local_54[0x28] = 0x4c;
  local_54[0x29] = 0x4d;
  local_54[0x2a] = 0x4e;
  local_54[0x2b] = 0x4f;
  local_54[0x2c] = 0x50;
  local_54[0x2d] = 0x51;
  local_54[0x2e] = 0x52;
  local_54[0x2f] = 0x53;
  local_54[0x30] = 0x54;
  local_54[0x31] = 0x55;
  local_54[0x32] = 0x56;
  local_54[0x33] = 0x57;
  local_54[0x34] = 0x58;
  local_54[0x35] = 0x59;
  local_54[0x36] = 0x5a;
  local_54[0x37] = 0x5c;
  local_54[0x38] = 0x7c;
  local_54[0x39] = 0x7e;
  local_54[0x3a] = 0x2a;
  st::fn_0070D1F0
            (0x19d,&local_90,nullptr,local_54,(int)param_1,local_18,3,6,1,0,0x10021c,param_2);
  return;
}

// 005421D0 FUN_005421d0
#line 4 "decomp/ST.exe/functions/005421D0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005424A0 -> 005421D0 @ 00542500; data at 0080679C */

void __cdecl st::fn_005421D0(ushort *param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  LOGFONTA *pLVar6;
  char *pcVar7;
  CHAR *pCVar8;
  LOGFONTA local_90;
  byte local_54 [60];
  byte local_18 [20];

  pLVar6 = &local_90;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    pLVar6->lfHeight = 0;
    pLVar6 = (LOGFONTA *)&pLVar6->lfWidth;
  }
  local_90.lfCharSet = param_3;
  uVar3 = 0xffffffff;
  pcVar5 = "Small Fonts";
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  local_90.lfHeight = -8;
  local_90.lfWidth = 0;
  local_90.lfEscapement = 0;
  local_90.lfOrientation = 0;
  local_90.lfWeight = 400;
  local_90.lfItalic = '\0';
  local_90.lfUnderline = '\0';
  local_90.lfStrikeOut = '\0';
  local_90.lfOutPrecision = '\x01';
  local_90.lfClipPrecision = '\x02';
  local_90.lfQuality = '\x01';
  local_90.lfPitchAndFamily = '\"';
  pcVar5 = pcVar7 + -uVar3;
  pCVar8 = local_90.lfFaceName;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pCVar8 = pCVar8 + 4;
  }
  local_18[0] = 0;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar8 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pCVar8 = pCVar8 + 1;
  }
  local_18[2] = 0x46;
  local_18[1] = 0x3f;
  local_18[3] = 0x28;
  local_18[4] = 0x29;
  local_18[5] = 0x43;
  local_18[6] = 0x43;
  local_18[7] = 0x45;
  local_18[8] = 0x47;
  local_18[9] = 0x28;
  local_18[10] = 0x28;
  local_18[0xb] = 0x28;
  local_18[0xc] = 0x28;
  local_18[0xd] = 0x3d;
  local_18[0xe] = 0x41;
  local_18[0xf] = 0x3f;
  local_18[0x10] = 0x3f;
  local_18[0x11] = 0x74;
  local_18[0x12] = 0x74;
  local_54[0] = 0x20;
  local_54[1] = 0x21;
  local_54[2] = 0x22;
  local_54[3] = 0x23;
  local_54[4] = 0x25;
  local_54[5] = 0x26;
  local_54[6] = 0x27;
  local_54[7] = 0x28;
  local_54[8] = 0x29;
  local_54[9] = 0x2c;
  local_54[10] = 0x2d;
  local_54[0xb] = 0x2e;
  local_54[0xc] = 0x2f;
  local_54[0xd] = 0x30;
  local_54[0xe] = 0x31;
  local_54[0xf] = 0x32;
  local_54[0x10] = 0x33;
  local_54[0x11] = 0x34;
  local_54[0x12] = 0x35;
  local_54[0x13] = 0x36;
  local_54[0x14] = 0x37;
  local_54[0x15] = 0x38;
  local_54[0x1a] = 0x3f;
  local_54[0x16] = 0x39;
  local_54[0x17] = 0x3a;
  local_54[0x18] = 0x3d;
  local_54[0x19] = 0x3e;
  local_54[0x1b] = 0x41;
  local_54[0x1c] = 0x42;
  local_54[0x1d] = 0x43;
  local_54[0x1e] = 0x44;
  local_54[0x1f] = 0x45;
  local_54[0x20] = 0xd;
  local_54[0x21] = 10;
  local_54[0x22] = 0x46;
  local_54[0x23] = 0x47;
  local_54[0x24] = 0x48;
  local_54[0x25] = 0x49;
  local_54[0x26] = 0x4a;
  local_54[0x27] = 0x4b;
  local_54[0x28] = 0x4c;
  local_54[0x29] = 0x4d;
  local_54[0x2a] = 0x4e;
  local_54[0x2b] = 0x4f;
  local_54[0x2c] = 0x50;
  local_54[0x2d] = 0x51;
  local_54[0x2e] = 0x52;
  local_54[0x2f] = 0x53;
  local_54[0x30] = 0x54;
  local_54[0x31] = 0x55;
  local_54[0x32] = 0x56;
  local_54[0x33] = 0x57;
  local_54[0x34] = 0x58;
  local_54[0x35] = 0x59;
  local_54[0x36] = 0x5a;
  local_54[0x37] = 0x5c;
  local_54[0x38] = 0x7c;
  local_54[0x39] = 0x7e;
  local_54[0x3a] = 0x2a;
  st::fn_0070D1F0
            (0x19d,&local_90,nullptr,local_54,(int)param_1,local_18,3,6,1,0,0x10021c,param_2);
  return;
}

// 00543410 FUN_00543410
#line 4 "decomp/ST.exe/functions/00543410/decomp.c"
void st::fn_00543410(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  if (-1 < param_3 + -1) {
    do {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (*(code *)param_4)();
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 00543450 CreateCursor
#line 4 "decomp/ST.exe/functions/00543450/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA77C>00405353

   [STObjectFactoryApplier] Central object factory for 0x0101 (ST_OBJECT_TYPE_0101).
   Evidence: registry[11] at 007CA778 stores type 0x0101 and executable pointer 00405353; allocation
   size 1275 has no unique current class-layout match */

void * __cdecl st::fn_00543450(void)

{
  CursorClassTy *this;
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  CursorClassTy_field_00DEState *pCVar5;

  this = (CursorClassTy *)st::fn_006B04D0(0x4fb);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    st::fn_00715820((SpriteClassTy *)&this->field_0018);
    this->field_0000 = st::machine_word_boundary_cast<undefined4>(&st_global_0079AE04);
    this->field_0018 = st::machine_word_boundary_cast<undefined4>(&st_global_0079ADF4);
    this->field_00AD = 0;
    this->field_00CD = CASE_0;
    this->field_00D2 = 0;
    *(undefined4 *)&this->field_0xd3 = 0;
    this->field_00D7 = 0;
    this->field_00DB = 0;
    this->field_00DD = 0;
    pCVar5 = &this->field_00DE;
    for (iVar3 = 0xed; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pCVar5 = 0;
      pCVar5 = pCVar5 + 4;
    }
    *pCVar5 = CASE_0;
    this->field_0496 = 0;
    this->field_00C1 = 0;
    this->field_0493 = 0;
    this->field_0494 = 0;
    this->field_049A = nullptr;
    this->field_049E = 0;
    this->field_04A2 = 0;
    this->field_04A6 = 0;
    this->field_04AE = 0;
    this->field_010B = -1;
    iVar3 = 0;
    puVar1 = (uint *)&this->field_0x11b;
    do {
      puVar1[-1] = 0xffffffff;
      bVar2 = (byte)iVar3;
      *puVar1 = -0xf000f01 << (bVar2 & 0x1f) | 0xf0fff0ffU >> 0x20 - (bVar2 & 0x1f);
      uVar4 = -0xf0010 << (bVar2 & 0x1f) | 0xfff0fff0U >> 0x20 - (bVar2 & 0x1f);
      puVar1[1] = uVar4;
      puVar1[2] = uVar4;
      iVar3 = iVar3 + 1;
      puVar1[3] = 0xfff0fff0U >> (bVar2 & 0x1f) | -0xf0010 << 0x20 - (bVar2 & 0x1f);
      puVar1[4] = 2;
      puVar1 = puVar1 + 7;
    } while (iVar3 < 0x20);
    this->field_04D6 = 0xffffffff;
    this->field_04CE = 0;
    this->field_04CA = 0;
    this->field_04C6 = 0;
    this->field_04C2 = 0;
    this->field_04D2 = nullptr;
    this->field_04DA = 0;
    this->field_04DE = 0;
    this->field_04E7 = nullptr;
    this->field_04EB = nullptr;
    this->field_04F7 = 0;
    this->field_04F3 = 0;
    this->field_04EF = 0;
    g_cursorClass_00802A30 = this;
    return this;
  }
  g_cursorClass_00802A30 = nullptr;
  return nullptr;
}

// 005440C0 FUN_005440c0
#line 4 "decomp/ST.exe/functions/005440C0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005440C0(void *this,int param_1,undefined4 *param_2,int param_3)

{
  *(undefined4 *)(param_3 + 4) = (&DAT_00807ff6)[param_1];
  *(undefined4 *)(param_3 + 0x1c) = (&DAT_00808136)[param_1];
  st::fn_006E6000(this,3,1,param_2);
  return;
}

// 00544100 FUN_00544100
#line 4 "decomp/ST.exe/functions/00544100/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00544100 returns return of FUN_006e6000 @ 00544137 */

int __thiscall
st::fn_00544100(void *this,int param_1,undefined4 *param_2,AnonShape_00544100_1A02F945 *param_3)

{
  int iVar1;

  param_3->field_0004 = *(undefined4 *)(&DAT_00808276 + param_1 * 4);
  param_3->field_001C = *(undefined4 *)(&DAT_008082ee + param_1 * 4);
  param_3->field_003C = *(undefined4 *)(&DAT_00808366 + param_1 * 4);
  iVar1 = st::fn_006E6000(this,3,1,param_2);
  return iVar1;
}

// 00544150 FUN_00544150
#line 4 "decomp/ST.exe/functions/00544150/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00544150(void *this,int param_1,undefined4 *param_2,int param_3)

{
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(&DAT_008083de + param_1 * 4);
  *(int *)(param_3 + 0x1c) = param_1 + 0xa6ff;
  if (*(int *)(&DAT_008083de + param_1 * 4) != 0) {
    st::fn_006E6000(this,3,1,param_2);
  }
  return;
}

// 00544990 FUN_00544990
#line 4 "decomp/ST.exe/functions/00544990/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (6), none consume AL/AX, and every RET path defines full EAX; sites=005449B0 @ 00545079
   -> TEST TEST EAX,EAX | 005449B0 @ 00545337 -> TEST TEST EAX,EAX | 005449B0 @ 0054545E -> TEST
   TEST EAX,EAX | 005449B0 @ 005455EC -> TEST TEST EAX,EAX | 005449B0 @ 0054614F -> TEST TEST
   EAX,EAX | 0054AEE0 @ 0054AF24 -> TEST TEST EAX,EAX

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0054AEE0 -> 00544990 @ 0054AF24 */

int __fastcall st::fn_00544990(CursorClassTy *param_1)

{
  return (uint)(param_1->field_0493 == 2);
}

// 00548B90 FUN_00548b90
#line 4 "decomp/ST.exe/functions/00548B90/decomp.c"
undefined4 __fastcall st::fn_00548B90(int param_1)

{
  undefined4 uVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x4a2) == 0) {
    return 1;
  }
  uVar1 = st::fn_00405687(param_1);
  return uVar1;
}

// 00548BC0 FUN_00548bc0
#line 4 "decomp/ST.exe/functions/00548BC0/decomp.c"
undefined4 __fastcall st::fn_00548BC0(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(param_1 + 0x4a2)) {
  case 3:
  case 5:
  case 10:
  case 0x2b:
  case 0x2c:
    return 1;
  default:
    return 0;
  }
}

// 0054B9A0 FUN_0054b9a0
#line 4 "decomp/ST.exe/functions/0054B9A0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 3.
   Evidence: 005449B0 -> 0054B9A0 @ 005450D6 | 005449B0 -> 0054B9A0 @ 005450FB | 005449B0 ->
   0054B9A0 @ 0054511E | 005449B0 -> 0054B9A0 @ 0054515B */

undefined4 __thiscall
st::fn_0054B9A0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar4 = param_1 + 0xb;
  iVar2 = param_1 + -0xc + param_3;
  iVar1 = param_2 + 5;
  iVar3 = param_2 + -6 + param_4;
  if ((((param_5 <= iVar4) || (iVar2 <= param_5)) || (param_6 <= iVar1)) || (iVar3 <= param_6)) {
    if (((DAT_00808784 == 0) && (DAT_00808788 == 0)) && ((DAT_0080878c == 0 && (DAT_00808790 == 0)))
       ) {
      if (param_5 <= iVar4) {
        if (param_6 <= iVar1) {
          iVar4 = st::fn_004017E4
                            (g_opticClass_007FB2A0,CASE_5,1.4013e-45,
                             (uint)STField<byte>(this,0xd1),0);
          if (param_7 != 0) {
            st::fn_0040507E
                      (st::pointer_boundary_cast<CursorClassTy *>(this),(-(ushort)(iVar4 != -2) & 0xfff6) + CASE_40,STField<int>(this,0x34),
                       STField<int>(this,0x38));
          }
          STField<undefined1>(this,0xd1) = 0;
          return 1;
        }
        if (iVar3 <= param_6) {
          iVar4 = st::fn_004017E4
                            (g_opticClass_007FB2A0,CASE_6,1.4013e-45,
                             (uint)STField<byte>(this,0xd1),0);
          if (param_7 != 0) {
            st::fn_0040507E
                      (st::pointer_boundary_cast<CursorClassTy *>(this),(-(ushort)(iVar4 != -2) & 0xfff6) + CASE_42,STField<int>(this,0x34),
                       STField<int>(this,0x38));
          }
          STField<undefined1>(this,0xd1) = 0;
          return 1;
        }
      }
      if (iVar2 <= param_5) {
        if (param_6 <= iVar1) {
          iVar4 = st::fn_004017E4
                            (g_opticClass_007FB2A0,CASE_7,1.4013e-45,
                             (uint)STField<byte>(this,0xd1),0);
          if (param_7 != 0) {
            st::fn_0040507E
                      (st::pointer_boundary_cast<CursorClassTy *>(this),(-(ushort)(iVar4 != -2) & 0xfff6) + CASE_41,STField<int>(this,0x34),
                       STField<int>(this,0x38));
          }
          STField<undefined1>(this,0xd1) = 0;
          return 1;
        }
        if (iVar3 <= param_6) {
          iVar4 = st::fn_004017E4
                            (g_opticClass_007FB2A0,CASE_8,1.4013e-45,
                             (uint)STField<byte>(this,0xd1),0);
          if (param_7 != 0) {
            st::fn_0040507E
                      (st::pointer_boundary_cast<CursorClassTy *>(this),(-(ushort)(iVar4 != -2) & 0xfff6) + CASE_43,STField<int>(this,0x34),
                       STField<int>(this,0x38));
          }
          STField<undefined1>(this,0xd1) = 0;
          return 1;
        }
      }
      if (param_5 <= iVar4) {
        iVar4 = st::fn_004017E4
                          (g_opticClass_007FB2A0,CASE_1,1.4013e-45,(uint)STField<byte>(this,0xd1)
                           ,0);
        if (param_7 != 0) {
          st::fn_0040507E
                    (st::pointer_boundary_cast<CursorClassTy *>(this),(-(ushort)(iVar4 != -2) & 0xfff6) + CASE_3F,STField<int>(this,0x34),
                     STField<int>(this,0x38));
        }
        STField<undefined1>(this,0xd1) = 0;
        return 1;
      }
      if (iVar2 <= param_5) {
        iVar4 = st::fn_004017E4
                          (g_opticClass_007FB2A0,CASE_2,1.4013e-45,(uint)STField<byte>(this,0xd1)
                           ,0);
        if (param_7 != 0) {
          st::fn_0040507E
                    (st::pointer_boundary_cast<CursorClassTy *>(this),(-(ushort)(iVar4 != -2) & 0xfff6) + CASE_3E,STField<int>(this,0x34),
                     STField<int>(this,0x38));
        }
        STField<undefined1>(this,0xd1) = 0;
        return 1;
      }
      if (param_6 <= iVar1) {
        iVar4 = st::fn_004017E4
                          (g_opticClass_007FB2A0,CASE_3,1.4013e-45,(uint)STField<byte>(this,0xd1)
                           ,0);
        if (param_7 != 0) {
          st::fn_0040507E
                    (st::pointer_boundary_cast<CursorClassTy *>(this),(-(ushort)(iVar4 != -2) & 0xfff6) + CASE_3C,STField<int>(this,0x34),
                     STField<int>(this,0x38));
        }
        STField<undefined1>(this,0xd1) = 0;
        return 1;
      }
      if (iVar3 <= param_6) {
        iVar4 = st::fn_004017E4
                          (g_opticClass_007FB2A0,CASE_4,1.4013e-45,(uint)STField<byte>(this,0xd1)
                           ,0);
        if (param_7 != 0) {
          st::fn_0040507E
                    (st::pointer_boundary_cast<CursorClassTy *>(this),(-(ushort)(iVar4 != -2) & 0xfff6) + CASE_3D,STField<int>(this,0x34),
                     STField<int>(this,0x38));
        }
        STField<undefined1>(this,0xd1) = 0;
        return 1;
      }
      STField<undefined1>(this,0xd1) = 1;
      return 1;
    }
    goto cf_common_exit_0054BA0C;
  }
  if (STField<int>(this,0x496) != 0) {
    if (STField<char>(this,0xde) == '\0') goto cf_common_exit_0054BA0C;
    iVar4 = st::fn_00405687((int)this);
    if (iVar4 != 0) goto cf_common_exit_0054BA0C;
  }
  st::fn_0040507E(st::pointer_boundary_cast<CursorClassTy *>(this),CASE_0,STField<int>(this,0x34),STField<int>(this,0x38));
cf_common_exit_0054BA0C:
  STField<undefined1>(this,0xd1) = 1;
  return 0;
}

// 0054BDF0 FUN_0054bdf0
#line 1 "decomp/ST.exe/functions/0054BDF0/decomp.c"

/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=005449B0 @ 00544ED6
   -> TEST TEST EAX,EAX */

int st::fn_0054BDF0(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  int iVar1;
  uint uVar2;

  iVar1 = *param_5;
  if (iVar1 < param_1) {
    *param_5 = param_1;
  }
  uVar2 = (uint)(iVar1 < param_1);
  iVar1 = param_1 + -1 + param_3;
  if (iVar1 < *param_5) {
    *param_5 = iVar1;
    uVar2 = 1;
  }
  if (*param_6 < param_2) {
    *param_6 = param_2;
    uVar2 = 1;
  }
  iVar1 = param_2 + -1 + param_4;
  if (iVar1 < *param_6) {
    *param_6 = iVar1;
    uVar2 = 1;
  }
  return uVar2;
}

// 0054CA10 FUN_0054ca10
#line 4 "decomp/ST.exe/functions/0054CA10/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0054CA10 parameter used as this of cMf32::RecMemFree @ 0054CAC7 */

int __cdecl st::fn_0054CA10(int *param_1,undefined4 param_2,cMf32 *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;

  piVar2 = param_1;
  if (DAT_0080879c == 0) {
    switch(DAT_008087a0 & 0xff) {
    case 1:
    case 4:
    case 0xd:
    case 0x13:
      if (DAT_00808a9b == -1) break;
    case 6:
    case 7:
    case 0xe:
      if (param_1[2] == 1) {
        return 0;
      }
    }
  }
  uVar5 = 0xffffffff;
  pcVar6 = st::pointer_boundary_cast<char *>(PTR_DAT_007c83b0);
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  puVar3 = (undefined4 *)
           st::fn_006B9770((byte *)((~uVar5 - 1) + param_4),nullptr,10);
  DAT_00802a3c = DAT_00802a3c + 1;
  if (g_cLoading_00802A58 != nullptr) {
    st::fn_00403472(g_cLoading_00802A58,CASE_1,DAT_00802a3c,nullptr);
  }
  iVar4 = st::fn_00404DDB(puVar3,*piVar2,nullptr,nullptr,param_1,0);
  if (param_1 != nullptr) {
    st::fn_006F20E0(param_3,(uint *)&param_1);
  }
  return iVar4;
}

// 0054CBB0 FUN_0054cbb0
#line 4 "decomp/ST.exe/functions/0054CBB0/decomp.c"
undefined4 st::fn_0054CBB0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;

  iVar4 = 0;
  uVar1 = 0xfffffffc;
  if (DAT_007c8238 != 0) {
    puVar3 = &DAT_007c8238;
    iVar2 = DAT_007c8238;
    while (iVar2 != param_1) {
      iVar2 = puVar3[2];
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + 1;
      if (iVar2 == 0) {
        return uVar1;
      }
    }
    if (param_2 != nullptr) {
      *param_2 = *(undefined4 *)(iVar4 * 8 + 0x7c823c);
    }
    uVar1 = 0;
  }
  return uVar1;
}

// 0054CD90 FUN_0054cd90
#line 4 "decomp/ST.exe/functions/0054CD90/decomp.c"
undefined4 st::fn_0054CD90(void)

{
  return 0;
}

// 0054CDB0 FUN_0054cdb0
#line 4 "decomp/ST.exe/functions/0054CDB0/decomp.c"
undefined4 st::fn_0054CDB0(void)

{
  return 0;
}

// 0054CF00 FUN_0054cf00
#line 4 "decomp/ST.exe/functions/0054CF00/decomp.c"
int __thiscall
st::fn_0054CF00(void *this,int param_1,undefined4 *param_2,int *param_3,undefined4 param_4,int param_5)

{
  int iVar1;

  iVar1 = st::fn_006E6170(st::pointer_boundary_cast<SystemWithNamedObjClassTy *>(this),param_1,param_2,&param_5,param_4,param_5);
  if (param_3 != nullptr) {
    *param_3 = param_5;
  }
  if (iVar1 == 0) {
    st::fn_0040129E();
  }
  return iVar1;
}

// 0054CF70 FUN_0054cf70
#line 4 "decomp/ST.exe/functions/0054CF70/decomp.c"
void __thiscall st::fn_0054CF70(void *this,uint param_1)

{
  st::fn_00401AD7();
  st::fn_006E56B0(st::pointer_boundary_cast<StartSystemTy *>(this),param_1);
  return;
}

// 0054CFA0 FUN_0054cfa0
#line 4 "decomp/ST.exe/functions/0054CFA0/decomp.c"
undefined4 st::fn_0054CFA0(void)

{
  return 0;
}

// 0054EAB0 FUN_0054eab0
#line 4 "decomp/ST.exe/functions/0054EAB0/decomp.c"
undefined4 * __thiscall st::fn_0054EAB0(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;

  puVar1 = STField<undefined4 *>(this,0x65);
  if (param_2 != nullptr) {
    *param_2 = 0;
  }
  while( true ) {
    if (puVar1 == nullptr) {
      return nullptr;
    }
    if (puVar1[2] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  if (param_2 == nullptr) {
    return puVar1 + 2;
  }
  *param_2 = puVar1[1];
  return puVar1 + 2;
}

// 0054EB20 FUN_0054eb20
#line 4 "decomp/ST.exe/functions/0054EB20/decomp.c"
undefined4 __thiscall st::fn_0054EB20(void *this,uint *param_1)

{
  int iVar1;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *local_8;

  local_8 = STField<int *>(this,0x65);
  iVar1 = st::fn_006B98C0((int *)((int)this + 0x65),local_8);
  if (iVar1 != 0) {
    STField<int>(this,0x69) = STField<int>(this,0x69) + -1;
  }
  if (local_8 != nullptr) {
    if (param_1 != nullptr) {
      *param_1 = local_8[1];
    }
    uVar3 = *param_1;
    piVar4 = local_8 + 2;
    piVar5 = STField<int *>(this,0x3d);
    memmove(piVar5, piVar4, uVar3); /* compiler REP MOVS byte copy */
    st::fn_006AB060(&local_8);
    return 1;
  }
  return 0;
}

// 0054EDF0 FUN_0054edf0
#line 4 "decomp/ST.exe/functions/0054EDF0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00503BB0 -> 0054EDF0 @ 00503E68; address of zeroed full register at 00503E53 | 0052F2B0
   -> 0054EDF0 @ 0052F54F; address of zeroed full register at 0052F51C | 0053CA80 -> 0054EDF0 @
   0053CC2B; address of zeroed full register at 0053CBFD */

void st::fn_0054EDF0(undefined4 *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STPlaySystemC *in_ECX;
  char cVar2;

  cVar2 = (char)param_1;
  if ((((*(char *)(g_bulkInitializedRecords_008087C7 + DAT_0080874d) == '\0') &&
       (DAT_0080874f == '\0')) || (cVar2 == '\x05')) && (DAT_008087a5 == 0)) {
    if (param_3 != 0) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      st::fn_0040422D(in_ECX,DAT_0080874d,0,cVar2,param_2,param_4,nullptr,0);
      return;
    }
    param_1 = nullptr;
    uVar1 = st::fn_00401FFF(g_allPlayers_007FA174,st::pointer_boundary_cast<undefined4 *>(&param_1),&param_3);
    if (uVar1 != 0xffffffff) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      st::fn_0040422D(in_ECX,DAT_0080874d,uVar1,cVar2,param_2,param_4,param_1,param_3);
    }
    if (param_1 != nullptr) {
      st::fn_006AB060(&param_1);
    }
  }
  return;
}

