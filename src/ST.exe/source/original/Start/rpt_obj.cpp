#include "st/generated.hpp"
// Generated translation unit: source/original/Start/rpt_obj.cpp

// 005BD4B0 MReportTy::OutTGlProc
#line 4 "decomp/ST.exe/functions/005BD4B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::OutTGlProc

   [STTypeFamilyApplier] CONTEXTUAL_GENERATED_RECORD.
   Evidence: one script-owned pointer shape is used only by functions with one unique class-owner
   context; promote its stable machine layout to a generated owner-qualified record name

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 005BD4B0 -> 006C5000 @ 005BD699 | 005BE5B0 -> 005BD4B0 @ 005BE645; data at 0080759C */

void __thiscall
st::fn_005BD4B0
          (MReportTy *this,DDXContext *param_1,undefined4 param_2,undefined4 param_3,int param_4,
          int param_5,int param_6,int param_7,int param_8)

{
  int iVar3;
  int iVar2;
  int uVar3;
  uint *puVar4;
  char *pcVar5;
  char *pcVar6;
  UINT resourceId;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  InternalExceptionFrame local_50;
  int local_c;
  RecoveredRecord_MReportTy_005BD4B0 *local_8;

  if (param_8 != 0) {
    local_c = param_8;
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
    iVar3 = local_c;
    if (iVar2 == 0) {
      iVar10 = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar9 = *(ushort **)(local_c + 0x5d) + 0x14;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar3 = st::fn_006B4FE0(*(ushort **)(local_c + 0x5d));
      local_8 = (RecoveredRecord_MReportTy_005BD4B0 *)
                st::fn_006B50C0(param_6,param_7,(uint)*(ushort *)(STField<int>(iVar3,0x5D) + 0xe),uVar3,
                             (undefined4 *)puVar9,iVar10);
      uVar8 = local_8->field_0014;
      if (uVar8 == 0) {
        uVar8 = ((uint)local_8->field_000E * local_8->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                local_8->field_0008;
      }
      puVar4 = (undefined4 *)st::fn_006B4FA0((int *)local_8);
      for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar4 = 0x4c4c4c4c;
        puVar4 = puVar4 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar4 = 0x4c;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)local_8,0,2,2,st::machine_word_boundary_cast<int>(local_8->field_0004 + -4),
                   st::machine_word_boundary_cast<int>(local_8->field_0008 + -4),0x18,0xd);
      st::fn_00710A90(*(ccFntTy **)(iVar3 + 0x83),(int)local_8,0,5,5,st::machine_word_boundary_cast<int>(local_8->field_0004 + -10),0xf);
      if (((char *)iVar3)[0x67] == '\0') {
        pcVar5 = st::fn_006B0140(0x2711,g_hINSTANCE_00807618);
      }
      else {
        pcVar5 = (char *)&DAT_0080c736;
      }
      pcVar6 = st::fn_006B0140(0x2445,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005BD5D9]: CALL EDI */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("&0%s: &2%s"),pcVar6,pcVar5);
      st::fn_007119C0(*(ccFntTy **)(iVar3 + 0x83),(char *)&DAT_0080f33a,10,-1,0);
      st::fn_00710A90(*(ccFntTy **)(iVar3 + 0x83),(int)local_8,0,5,0x19,st::machine_word_boundary_cast<int>(local_8->field_0004 + -10),
                       0xf);
      if (((char *)iVar3)[0x67] == '\0') {
        resourceId = 0x2711;
      }
      else {
        resourceId = 0x2339 - (DAT_0080c522 != 0);
      }
      pcVar5 = st::fn_006B0140(resourceId,g_hINSTANCE_00807618);
      pcVar6 = st::fn_006B0140(0x2337,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005BD657]: CALL EDI */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("&0%s &2%s"),pcVar6,pcVar5);
      st::fn_007119C0(*(ccFntTy **)(iVar3 + 0x83),(char *)&DAT_0080f33a,10,-1,0);
      st::fn_006C5000
                (param_1,param_4,param_5,(int)local_8,0,0,0,local_8->field_0004,local_8->field_0008,
                 iVar3 + 0xa3,0x4c);
      st::fn_006AB060(&local_8);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x44,0,iVar2,st::mutable_c_string("%s"),
                               "MReportTy::OutTGlProc");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x44);
  }
  return;
}

// 005BD7A0 MReportTy::InitMReport
#line 4 "decomp/ST.exe/functions/005BD7A0/decomp.c"
/* WARNING: Type propagation algorithm not settling */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::InitMReport */

void __thiscall st::fn_005BD7A0(MReportTy *this,undefined1 param_1)

{
  uint uVar1;
  DArrayTy *pDVar2;
  CursorClassTy *this_00;
  cMf32 *pcVar4;
  int local_EAX_39;
  char *pcVar5;
  ushort *local_EAX_253;
  ushort *puVar5;
  ushort *local_EAX_368;
  ccFntTy *pcVar6;
  int local_EAX_485;
  AnonPointee_MReportTy_0077 *pAVar7;
  int uVar8;
  void *pvVar8;
  int local_EAX_565;
  RecoveredSourceFamily_dibcopy *pRVar9;
  DArrayTy *pDVar10;
  int iVar3;
  int local_EAX_1185;
  HoloTy *pHVar10;
  uint uVar13;
  uint local_EAX_1943;
  int iVar21;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int *piVar14;
  DArrayTy **ppDVar15;
  MReportTy *this_01;
  uint *puVar16;
  char *pcVar18;
  int iVar19;
  byte bVar20;
  char cVar21;
  ushort *puVar22;
  int iVar23;
  undefined4 local_6a4 [256];
  undefined1 local_2a4 [516];
  InternalExceptionFrame local_a0;
  InternalExceptionFrame local_5c;
  MReportTy *local_18;
  cMf32 *local_14;
  uint local_10;
  DArrayTy **local_c;
  uint local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  local_EAX_39 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  if (local_EAX_39 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar21 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0xc6,0,local_EAX_39,
                                st::mutable_c_string("%s"),"MReportTy::InitMReport");
    if (iVar21 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_39,0,st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0xc6);
    return;
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
    /* ST_CALLSITE[005BD811]: CALL 0x00401055; direct=00401055 CursorClassTy::sub_00544940 */
    st::fn_00401055(g_cursorClass_00802A30);
  }
  /* ST_CALLSITE[005BD824]: CALL 0x00401d43; direct=00401D43 DarkScreen */
  st::fn_00401D43(g_dDXContext_0080759C,1,0);
  /* ST_CALLSITE[005BD832]: CALL 0x0040590c; direct=0040590C StartSystemTy::sub_005DAF20 */
  st::fn_0040590C(g_startSystem_0081176C);
  this_01 = local_18;
  DAT_0080877e = 1;
  DAT_0080877f = 0;
  local_18->field_0066 = param_1;
  if (DAT_0080874e == '\x01') {
    pcVar5 = &CHAR_W_007ca250;
  }
  else {
    pcVar5 = &CHAR_B_007ca248;
    if (DAT_0080874e != '\x02') {
      pcVar5 = &CHAR_S_007ca24c;
    }
  }
  /* ST_CALLSITE[005BD88A]: CALL dword ptr [0x0085bde8] */
  st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("REPORT_%s_%c"),pcVar5,
            (int)(char)((-(DAT_0080c522 != 0) & 0xfbU) + 0x46));
  local_EAX_253 = st::fn_0070A9F0(g_cMf32_00806780,(char *)&DAT_0080f33a,0,1);
  this_01->field_005D = local_EAX_253;
  st::fn_006BC360(local_EAX_253,local_6a4,nullptr);
  g_startSystem_0081176C->field_0140 = 0x18;
  st::fn_00718780
            ((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)&g_startSystem_0081176C->field_0x144);
  puVar5 = st::fn_00709AF0
                     (PTR_00806784,CASE_B,st::mutable_c_string("STATS"),0xffffffff,0,1,0,nullptr);
  this_01->field_007F = puVar5;
  local_EAX_368 = st::fn_0070AA50(g_cMf32_00806780,st::mutable_c_string("RPT_IND"),0,1);
  this_01->field_006F = local_EAX_368;
  pcVar6 = (ccFntTy *)st::fn_004042A5((int)this_01->field_005D,nullptr,DAT_00807dd9);
  this_01->field_0083 = pcVar6;
  pcVar6->field_0058 = 1;
  pcVar6->field_005C = 0;
  pcVar6 = (ccFntTy *)st::fn_00402306((int)this_01->field_005D,nullptr,DAT_00807dd9);
  this_01->field_0087 = pcVar6;
  g_startSystem_0081176C->field_0038 = (HDC__ *)pcVar6;
  /* ST_CALLSITE[005BD968]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new */
  pcVar6 = (ccFntTy *)st::fn_0070CEB0(0x19d,g_cMf32_00806780,st::mutable_c_string("RPT_FNTN"),0);
  this_01->field_008B = pcVar6;
  pcVar6->field_0058 = 1;
  pcVar6->field_005C = 0;
  iVar23 = 1;
  puVar22 = this_01->field_005D + 0x14;
  local_EAX_485 = st::fn_006B4FE0(this_01->field_005D);
  pAVar7 = (AnonPointee_MReportTy_0077 *)
           st::fn_006B50C0(0x91,0x28,(uint)this_01->field_005D[7],local_EAX_485,(undefined4 *)puVar22,
                        iVar23);
  this_01->field_0077 = pAVar7;
  iVar23 = 1;
  puVar22 = this_01->field_005D + 0x14;
  uVar8 = st::fn_006B4FE0(this_01->field_005D);
  pvVar8 = (void *)st::fn_006B50C0(300,0x1e,(uint)this_01->field_005D[7],uVar8,(undefined4 *)puVar22,
                                iVar23);
  this_01->field_007B = pvVar8;
  iVar23 = 1;
  puVar22 = this_01->field_005D + 0x14;
  local_EAX_565 = st::fn_006B4FE0(this_01->field_005D);
  pRVar9 = (RecoveredSourceFamily_dibcopy *)
           st::fn_006B50C0(0x2e9,0x15e,(uint)this_01->field_005D[7],local_EAX_565,(undefined4 *)puVar22
                        ,iVar23);
  this_01->field_0073 = (AnonPointee_MReportTy_0073 *)pRVar9;
  st::fn_006B4170(pRVar9,0,0,0,0x2e9,0x15e,0xff);
  st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)this_01->field_0073,0,0x2d,0,700,0x15e,0x18,0xd);
  st::fn_00718780
            ((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)&this_01->field_00A3);
  st::fn_00718780
            ((int)local_6a4,0,0x100,0x2e,0x10,(undefined4 *)&this_01->field_0x1a3);
  memset(&this_01->field_0x2c7, 0, 0x80); /* compiler bulk-zero initialization */
  STPiece<0,2>(uVar1) = this_01->field_0008;
  STPiece<2,2>(uVar1) = this_01->field_000A;
  this_01->field_0323 = (MReportTy *)&this_01->field_00A3;
  pcVar6 = this_01->field_0087;
  this_01->field_02EF = uVar1;
  this_01->field_02CF = uVar1;
  this_01->field_02F3 = 2;
  this_01->field_02D3 = 2;
  this_01->field_0313 = st::machine_word_boundary_cast<undefined4>(this_01->field_005D);
  this_01->field_031B = 0x18;
  this_01->field_0317 = 0x4c;
  if (pcVar6->field_00A0 != 0) {
    st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar6);
  }
  this_01->field_030B = *(undefined4 *)&pcVar6->field_0x8a;
  if (this_01->field_0066 == '\x01') {
    local_14 = nullptr;
    ppDVar15 = &this_01->field_0347;
    iVar23 = 3;
    do {
      pDVar10 = st::fn_006AE290(nullptr,0x18,4,0x18);
      *ppDVar15 = pDVar10;
      ppDVar15 = ppDVar15 + 1;
      iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
    /* ST_CALLSITE[005BDB31]: CALL dword ptr [0x0085bde8] */
    st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s%s%s\\%s"),&CHAR_00h_00807680,st_global_0079C0D4,
              &CHAR_00h_00807ddd,PTR_s_PL_LOG_0079c0d8);
    local_a0.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a0;
    iVar3 = st::fn_0072D7F0(local_a0.jumpBuffer,0);
    if (iVar3 == 0) {
      local_14 = (cMf32 *)st::fn_006F0EC0(0x345,(byte *)&DAT_0080f33a,0,0,0);
    }
    pcVar4 = local_14;
    this_01 = local_18;
    g_currentExceptionFrame = local_a0.previous;
    if (local_14 != nullptr) {
      memset((void *)local_2a4, 0, 0x201); /* compiler bulk-zero initialization */
      uVar11 = 0xffffffff;
      local_2a4[0] = 0xc;
      pcVar5 = st::pointer_boundary_cast<char *>(PTR_DAT_0079c0dc);
      do {
        pcVar18 = pcVar5;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar18 = pcVar5 + 1;
        cVar21 = *pcVar5;
        pcVar5 = pcVar18;
      } while (cVar21 != '\0');
      uVar11 = ~uVar11;
      pcVar5 = pcVar18 + -uVar11;
      ppDVar15 = (DArrayTy **)(local_2a4 + 1);
      memmove(ppDVar15, pcVar5, uVar11); /* compiler REP MOVS byte copy */
      local_c = (DArrayTy **)(local_2a4 + 1);
      st::fn_006F12B0(pcVar4,st::machine_word_boundary_cast<undefined4>(st::fn_006F2D10),st::machine_word_boundary_cast<undefined4>(local_2a4));
      pcVar4 = local_14;
      pcVar5 = (char *)st::fn_006F2790(local_14);
      while (pcVar5 != nullptr) {
        local_10 = 0;
        local_c = nullptr;
        /* ST_CALLSITE[005BDC2D]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s%s"),PTR_DAT_0079c0dc,"%01d%02d");
        local_EAX_1185 = st::fn_0072EE80(pcVar5,(byte *)&DAT_0080f33a);
        if (((local_EAX_1185 == 2) && (local_10 != 0)) && (local_10 < 4)) {
          st::fn_006AE1C0
                    (*(DArrayTy **)(&this_01->field_0x343 + local_10 * 4),&local_c);
        }
        pcVar5 = (char *)st::fn_006F2790(pcVar4);
      }
      st::fn_006F1170(pcVar4);
    }
    do {
      local_c = &this_01->field_0347;
      local_8 = 0;
      local_10 = 3;
      do {
        uVar11 = 0;
        if ((*local_c)->count != 1 && -1 < (int)((*local_c)->count - 1)) {
          do {
            pDVar2 = *local_c;
            if (uVar11 < pDVar2->count) {
              puVar16 = DArrayAt<uint>(pDVar2, uVar11);
            }
            else {
              puVar16 = nullptr;
            }
            uVar12 = uVar11 + 1;
            if (uVar12 < pDVar2->count) {
              puVar13 = DArrayAt<uint>(pDVar2, uVar12);
            }
            else {
              puVar13 = nullptr;
            }
            if (*puVar13 < *puVar16) {
              st::fn_006B0CD0((AnonShape_00413AF0_B6B4EE9A *)pDVar2,uVar11,uVar12);
              local_8 = 1;
            }
            uVar11 = uVar12;
          } while ((int)uVar12 < (int)((*local_c)->count - 1));
        }
        local_c = local_c + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    } while (local_8 != 0);
    iVar23 = 2;
    piVar14 = reinterpret_cast<int *>(&this_01->field_034F);
    do {
      if (*(int *)(*piVar14 + 0xc) != 0) {
        this_01->field_006A = (char)iVar23;
      }
      iVar23 = iVar23 + -1;
      piVar14 = piVar14 + -1;
    } while (-1 < iVar23);
    local_10 = 0;
  }
  else {
    if (DAT_008067a0 != '\0') {
      /* ST_CALLSITE[005BDD49]: CALL dword ptr [0x0085c060] */
      st::external_00000106((CFsgsConnection *)&DAT_00802a90,2 - (DAT_0080c522 != 0));
    }
    this_01->field_0067 = 1;
  }
  if (g_startSystem_0081176C->field_02E6 != nullptr) {
    /* ST_CALLSITE[005BDD6D]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
    st::fn_00401FA5(g_startSystem_0081176C->field_02E6,0,0,1);
  }
  /* ST_CALLSITE[005BDD76]: CALL 0x0040126c; direct=0040126C MReportTy::SetCtrl */
  st::fn_0040126C(this_01,0);
  /* ST_CALLSITE[005BDD84]: CALL 0x00403738; direct=00403738 PutDDX */
  st::fn_00403738(0,0,'\x01',(BITMAPINFO *)this_01->field_005D);
  local_8 = 0xffffffff;
  st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x403099,0x2bd,0x15e,
               (ushort *)&g_startSystem_0081176C->field_0140);
  st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x47,0x46);
  pHVar10 = (HoloTy *)st::fn_0072E530(0x33);
  if (pHVar10 == nullptr) {
    pHVar10 = nullptr;
  }
  else {
    pHVar10->field_0002 = 1;
    pHVar10->field_0000 = 0;
    *(undefined4 *)&pHVar10->field_0x3 = 0xffffffff;
    pHVar10->field_0001 = CASE_2;
    pHVar10->field_0007 = nullptr;
    pHVar10->field_000B = nullptr;
    pHVar10->field_000F = 0;
    *(undefined4 *)&pHVar10->field_0x1b = 1;
    pHVar10->field_0013 = 1;
    pHVar10->field_0017 = -1;
    pHVar10->field_0027 = 0;
    pHVar10->field_0023 = 0;
    pHVar10->field_002F = 1;
    pHVar10->field_002B = 1;
  }
  this_01->field_0453 = pHVar10;
  if (pHVar10 != nullptr) {
    uVar11 = 0;
    cVar21 = '\x01';
    bVar20 = 0x10;
    iVar19 = 1;
    iVar23 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x47,0x46,0x2bd,0x15e);
    /* ST_CALLSITE[005BDE48]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
    uVar13 = st::fn_0040459D(this_01->field_0453,CASE_2,0x47,0x46,iVar23,iVar19,bVar20,cVar21,uVar11);
    if (uVar13 != 0) {
      pHVar10 = this_01->field_0453;
      pHVar10->field_0002 = 1;
      pHVar10->field_0017 = pHVar10->field_0013;
      uVar11 = *(uint *)&this_01->field_0453->field_0x3;
      if (-1 < (int)uVar11) {
        st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar11);
      }
    }
  }
  if (local_8 != 0xffffffff) {
    st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
    local_8 = 0xffffffff;
  }
  st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x401217,0x2e9,0x32,(ushort *)this_01);
  st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x1a,10);
  pHVar10 = (HoloTy *)st::fn_0072E530(0x33);
  if (pHVar10 == nullptr) {
    pHVar10 = nullptr;
  }
  else {
    pHVar10->field_0002 = 1;
    pHVar10->field_0000 = 0;
    *(undefined4 *)&pHVar10->field_0x3 = 0xffffffff;
    pHVar10->field_0001 = CASE_2;
    pHVar10->field_0007 = nullptr;
    pHVar10->field_000B = nullptr;
    pHVar10->field_000F = 0;
    *(undefined4 *)&pHVar10->field_0x1b = 1;
    pHVar10->field_0013 = 1;
    pHVar10->field_0017 = -1;
    pHVar10->field_0027 = 0;
    pHVar10->field_0023 = 0;
    pHVar10->field_002F = 1;
    pHVar10->field_002B = 1;
  }
  this_01->field_0457 = pHVar10;
  if (pHVar10 != nullptr) {
    uVar11 = 0;
    cVar21 = '\x01';
    bVar20 = 0x10;
    iVar19 = 1;
    iVar23 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x1a,10,0x2e9,0x32);
    /* ST_CALLSITE[005BDF37]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
    local_EAX_1943 =
         st::fn_0040459D(this_01->field_0457,CASE_3,0x1a,10,iVar23,iVar19,bVar20,cVar21,uVar11);
    if (local_EAX_1943 != 0) {
      pHVar10 = this_01->field_0457;
      pHVar10->field_0002 = 1;
      pHVar10->field_0017 = pHVar10->field_0013;
      uVar11 = *(uint *)&this_01->field_0457->field_0x3;
      if (-1 < (int)uVar11) {
        st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar11);
      }
    }
  }
  if (local_8 != 0xffffffff) {
    st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
  }
  this_01->field_0065 = 3;
  st::fn_0040448A((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                     this_01->field_005D,10,2);
  pHVar10 = this_01->field_0457;
  if (((pHVar10 != nullptr) && (pHVar10->field_0000 != '\0')) &&
     (-1 < (int)*(uint *)&pHVar10->field_0x3)) {
    st::fn_006B3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar10->field_0x3);
  }
  pHVar10 = this_01->field_0453;
  if (((pHVar10 != nullptr) && (pHVar10->field_0000 != '\0')) &&
     (-1 < (int)*(uint *)&pHVar10->field_0x3)) {
    st::fn_006B3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar10->field_0x3);
  }
  this_00 = g_cursorClass_00802A30;
  if (g_cursorClass_00802A30 != nullptr) {
    iVar23 = g_cursorClass_00802A30->field_00C9;
    iVar19 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = CASE_3;
    this_00->field_0494 = 0xffff;
    /* ST_CALLSITE[005BE015]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
    st::fn_0040507E(this_00,CASE_0,iVar19,iVar23);
    /* ST_CALLSITE[005BE02A]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  st::fn_0040329C(&g_sound,0);
  if ((STPiece<1,1>(DAT_00807300) & 8) != 0) {
    st::fn_00402FD1(&g_sound,0x14,'\x02',0,nullptr);
  }
  g_currentExceptionFrame = local_5c.previous;
  return;
}

// 005BE310 MReportTy::DoneMReport
#line 4 "decomp/ST.exe/functions/005BE310/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::DoneMReport */

void __thiscall st::fn_005BE310(MReportTy *this)

{
  ushort uVar2;
  MReportTy *pMVar3;
  int iVar3;
  int iVar4;
  int iVar5;
  DArrayTy **ppDVar7;
  InternalExceptionFrame local_4c;
  MReportTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pMVar3 = local_8;
  if (iVar3 == 0) {
    memset(&local_8->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    uVar2 = local_8->field_000A;
    local_8->field_002D = 0x14;
    local_8->field_0031 = local_8->field_0008;
    local_8->field_0033 = uVar2;
    st::fn_006E6000(local_8,3,1,(undefined4 *)&local_8->field_0x1d);
    /* ST_CALLSITE[005BE378]: CALL 0x00401d43; direct=00401D43 DarkScreen */
    st::fn_00401D43(g_dDXContext_0080759C,10,2);
    if (g_cursorClass_00802A30 != nullptr) {
      /* ST_CALLSITE[005BE38A]: CALL 0x00401055; direct=00401055 CursorClassTy::sub_00544940 */
      st::fn_00401055(g_cursorClass_00802A30);
    }
    ppDVar7 = &pMVar3->field_0347;
    iVar5 = 3;
    do {
      if (*ppDVar7 != nullptr) {
        st::fn_006AE110(*ppDVar7);
        *ppDVar7 = nullptr;
      }
      ppDVar7 = ppDVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (pMVar3->field_0453 != nullptr) {
      /* ST_CALLSITE[005BE3BC]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(pMVar3->field_0453);
      st::fn_0072E2B0(pMVar3->field_0453);
      pMVar3->field_0453 = nullptr;
    }
    if (pMVar3->field_0457 != nullptr) {
      /* ST_CALLSITE[005BE3E4]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(pMVar3->field_0457);
      st::fn_0072E2B0(pMVar3->field_0457);
      pMVar3->field_0457 = nullptr;
    }
    st::fn_006F20E0(g_cMf32_00806780,(uint *)&pMVar3->field_005D);
    st::fn_006F20E0(g_cMf32_00806780,(uint *)&pMVar3->field_006F);
    if (pMVar3->field_0077 != nullptr) {
      st::fn_006AB060(&pMVar3->field_0077);
    }
    if (pMVar3->field_007B != nullptr) {
      st::fn_006AB060(&pMVar3->field_007B);
    }
    if (pMVar3->field_0073 != nullptr) {
      st::fn_006AB060(&pMVar3->field_0073);
    }
    if (pMVar3->field_0083 != nullptr) {
      st::fn_00710560((uint *)pMVar3->field_0083);
      pMVar3->field_0083 = nullptr;
    }
    if (pMVar3->field_0087 != nullptr) {
      st::fn_00710560((uint *)pMVar3->field_0087);
      pMVar3->field_0087 = nullptr;
      g_startSystem_0081176C->field_0038 = nullptr;
    }
    if (pMVar3->field_008B != nullptr) {
      st::fn_00710560((uint *)pMVar3->field_008B);
      pMVar3->field_008B = nullptr;
    }
    pMVar3->field_007F = nullptr;
    if (pMVar3->field_004D != 0) {
      st::fn_006E3B50((AppClassTy *)&DAT_00807620,(undefined4 *)&pMVar3->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0xe5,0,iVar3,st::mutable_c_string("%s"),
                             "MReportTy::DoneMReport");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0xe5);
  return;
}

// 005BE5B0 MReportTy::PaintMReport
#line 4 "decomp/ST.exe/functions/005BE5B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::PaintMReport

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STTypeFamilyApplier] CONTEXTUAL_GENERATED_RECORD.
   Evidence: one script-owned pointer shape is used only by functions with one unique class-owner
   context; promote its stable machine layout to a generated owner-qualified record name */

void __thiscall st::fn_005BE5B0(MReportTy *this,char param_1)

{
  ccFntTy *pcVar1;
  AnonPointee_MReportTy_0073 *pAVar2;
  MReportTy *this_00;
  byte bVar3;
  int local_EAX_38;
  int iVar6;
  BITMAPINFO *pBVar7;
  int iVar5;
  int local_EAX_584;
  int local_EAX_755;
  uint uVar8;
  char *pcVar8;
  uint *puVar9;
  char *local_EAX_2492;
  char *local_EAX_2562;
  byte bVar4;
  int uVar11;
  uint *puVar10;
  char *local_EAX_3266;
  char *pcVar10;
  int iVar14;
  uint uVar12;
  uint uVar13;
  int iVar15;
  undefined *puVar16;
  char cVar17;
  size_t _Count;
  code *pcVar19;
  char *pcVar20;
  char *pcVar21;
  bool bVar22;
  UINT UVar23;
  ushort *puVar24;
  char *pcVar25;
  int iVar26;
  char local_898 [2100];
  InternalExceptionFrame local_64;
  MReportTy *local_20;
  undefined4 local_1c;
  RecoveredSourceFamily_dibcopy *local_18;
  char local_11;
  uint local_10;
  RecoveredRecord_MReportTy_005BD4B0 *local_c;
  UINT local_8;
  size_t sVar18;

  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_20 = this;
  local_EAX_38 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  if (local_EAX_38 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar14 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x1b4,0,local_EAX_38,
                                st::mutable_c_string("%s"),"MReportTy::PaintMReport");
    if (iVar14 == 0) {
      st::fn_006A5E40(local_EAX_38,0,st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x1b4);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
  this_00 = local_20;
  /* ST_CALLSITE[005BE617]: CALL 0x00402298; direct=00402298 PutDDXClip */
  st::fn_00402298(0,0,0,0,800,(byte *)0x3c,'\x01',(BITMAPINFO *)local_20->field_005D);
  if ((this_00->field_0457 == nullptr) && (param_1 == '\0')) {
    /* ST_CALLSITE[005BE645]: CALL 0x00401217; direct=00401217 MReportTy::OutTGlProc */
    st::fn_00401217((MReportTy *)g_dDXContext_0080759C,g_dDXContext_0080759C,0,0,0x1a,10,0x2e9,0x32,
               (int)this_00);
  }
  if (this_00->field_0453 != nullptr) {
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  if (param_1 != '\0') {
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  /* ST_CALLSITE[005BE67C]: CALL 0x00402298; direct=00402298 PutDDXClip */
  st::fn_00402298(0x1a,0x46,0x1a,0x46,this_00->field_0073->field_0004,
             (byte *)this_00->field_0073->field_0008,'\x01',(BITMAPINFO *)this_00->field_005D);
  st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0073,0,0x2e,1,0x2ba,0x15c,0x4c);
  pcVar19 = st::pointer_boundary_cast<code *>(PTR_wsprintfA_0085bde8);
  if (this_00->field_0067 == '\0') {
    st::fn_00710A90(this_00->field_0083,(int)this_00->field_0073,0,0x37,10,
                     st::machine_word_boundary_cast<int>(this_00->field_0073->field_0004 + -0x41),0xf);
    uVar12 = 0;
    iVar15 = -1;
    iVar6 = -1;
    pcVar10 = st::fn_006B0140(0x2440,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_0083,pcVar10,iVar6,iVar15,uVar12);
    goto LAB_005bf406;
  }
  bVar3 = this_00->field_0069;
  if (bVar3 == 0) {
    st::fn_00710A90(this_00->field_0083,(int)this_00->field_0073,0,0x37,10,
                     st::machine_word_boundary_cast<int>(this_00->field_0073->field_0004 + -0x41),0xf);
    uVar12 = 0;
    iVar15 = -1;
    iVar6 = -1;
    local_EAX_2562 = st::fn_006B0140(0x2440,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_0083,local_EAX_2562,iVar6,iVar15,uVar12);
    local_18 = (RecoveredSourceFamily_dibcopy *)
               st::fn_00710BA0(this_00->field_0083,(int)this_00->field_0073,0,0,0,0x136,0x22,0);
    if (local_18 != nullptr) {
      local_10 = local_10 & 0xffffff00;
      if (DAT_0080c83e != 0xffffffff) {
        do {
          uVar12 = local_10;
          bVar3 = DAT_0080c846;
          if ((char)local_10 != '\0') {
            bVar3 = (&DAT_0080c83e)[local_10 & 0xff];
          }
          local_8 = local_8 & 0xffffff00;
          if (DAT_00808aaf != 0) {
            do {
              UVar23 = local_8;
              iVar6 = (local_8 & 0xff) * 0x9c;
              if (((&DAT_00808af4)[iVar6] == bVar3) && ((&DAT_00808af5)[iVar6] != '\0')) {
                st::fn_006B4170(local_18,0,0,0,local_18->field_0004,local_18->field_0008,0x4c);
                st::fn_007119C0(this_00->field_0083,&CHAR_00h_00808ab0 + (UVar23 & 0xff) * 0x9c,0,-1,
                               0);
                /* ST_CALLSITE[005BF0CC]: CALL 0x00403229; direct=00403229 DibPut */
                st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0073,0x38,
                       (uVar12 & 0xff) * 0x26 + 0x2c,'\x01',(byte *)local_18);
                break;
              }
              bVar4 = (char)local_8 + 1;
              local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
            } while (bVar4 < DAT_00808aaf);
          }
          bVar3 = (char)local_10 + 1;
          local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar3));
        } while ((uint)bVar3 < DAT_0080c83e + 1);
      }
      st::fn_00710F00(this_00->field_0083);
    }
    if (this_00->field_0068 == '\0') {
      iVar6 = 0;
      if (DAT_0080c83e != 0xffffffff) {
        do {
          if (iVar6 == 0) {
            uVar12 = this_00->field_02A3;
            iVar26 = 0;
            iVar15 = DAT_0080c963;
          }
          else {
            uVar12 = this_00->field_02A3;
            iVar15 = (&DAT_0080c943)[iVar6];
            iVar26 = iVar6;
          }
          /* ST_CALLSITE[005BF1A5]: CALL 0x004016fe; direct=004016FE MReportTy::PaintMainScore */
          st::fn_004016FE(this_00,iVar15,uVar12,iVar26);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)(DAT_0080c83e + 1));
      }
    }
    else {
      iVar15 = 0;
      memset(&this_00->field_0x2a7, 0, 0x20); /* compiler bulk-zero initialization */
      if (DAT_0080c83e != 0xffffffff) {
        do {
          if (iVar15 == 0) {
            if (DAT_0080c963 == 0) {
              uVar12 = this_00->field_02A3;
              iVar6 = 0;
              goto LAB_005bf156;
            }
          }
          else if ((&DAT_0080c943)[iVar15] == 0) {
            uVar12 = this_00->field_02A3;
            iVar6 = iVar15;
LAB_005bf156:
            /* ST_CALLSITE[005BF15A]: CALL 0x004016fe; direct=004016FE MReportTy::PaintMainScore */
            st::fn_004016FE(this_00,0,uVar12,iVar6);
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < (int)(DAT_0080c83e + 1));
      }
    }
  }
  else {
    bVar4 = DAT_0080c846;
    if (bVar3 != 1) {
      bVar4 = *(byte *)((int)&DAT_0080c83a + bVar3 + 3);
    }
    local_1c = STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar4));
    bVar3 = (&DAT_0080c999)[(uint)bVar4 * 0x51];
    local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar3));
    if (bVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = bVar3 - 1;
    }
    pBVar7 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_007F,iVar6);
    /* ST_CALLSITE[005BE716]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0073,0x2e,1,'\x06',(byte *)pBVar7);
    local_c = (RecoveredRecord_MReportTy_005BD4B0 *)
              st::fn_00710BA0(this_00->field_0083,(int)this_00->field_0073,0,0x2f,2,0x2b7,0x1e,0
                                 );
    if (local_c != nullptr) {
      local_11 = '\x01';
      STPiece<0,1>(DAT_0080f33a) = 0;
      local_18 = (RecoveredSourceFamily_dibcopy *)((uint)local_18 & 0xffffff00);
      if (DAT_00808aaf != 0) {
        do {
          iVar6 = ((uint)local_18 & 0xff) * 0x9c;
          if ((&DAT_00808af4)[iVar6] == (char)local_1c) {
            if (local_11 == '\0') {
              /* ST_CALLSITE[005BE7BB]: CALL ESI */
              st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s, %s"),&DAT_0080f33a,
                        &CHAR_00h_00808ab0 + iVar6);
            }
            else {
              /* ST_CALLSITE[005BE79A]: CALL ESI */
              st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s"),&CHAR_00h_00808ab0 + iVar6);
              local_11 = '\0';
            }
            iVar5 = st::fn_00711110(this_00->field_0083,(char *)&DAT_0080f33a);
            if (0x2a8 < iVar5) break;
          }
          bVar3 = (char)local_18 + 1;
          local_18 = (RecoveredSourceFamily_dibcopy *)STReplaceLowByte((uint32_t)(local_18), (uint8_t)(bVar3));
        } while (bVar3 < DAT_00808aaf);
      }
      local_EAX_584 = st::fn_00711110(this_00->field_0083,(char *)&DAT_0080f33a);
      if (0x2a8 < local_EAX_584) {
        uVar12 = 0xffffffff;
        pcVar25 = (char *)&DAT_0080f33a;
        do {
          pcVar21 = pcVar25;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar25 + 1;
          cVar17 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar17 != '\0');
        uVar12 = ~uVar12;
        pcVar25 = pcVar21 + -uVar12;
        pcVar21 = local_898;
        memmove(pcVar21, pcVar25, uVar12); /* compiler REP MOVS byte copy */
        uVar13 = 0;
        memset(&DAT_0080f33a, 0, 0x834); /* compiler bulk-zero initialization */
        iVar6 = 0;
        uVar12 = 0xffffffff;
        pcVar1 = this_00->field_0083;
        pcVar25 = (char *)&DAT_0080f33a;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar17 = *pcVar25;
          pcVar25 = pcVar25 + 1;
        } while (cVar17 != '\0');
        if (pcVar1->field_00A0 != 0) {
          st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar1);
        }
        _Count = (int)(0x2a8 / (longlong)
                               (this_00->field_0083->field_0058 + *(int *)&pcVar1->field_0x86)) - 1;
        do {
          sVar18 = _Count;
          _Count = sVar18 + 1;
          st::fn_0072E340((char *)&DAT_0080f33a,local_898,_Count);
          local_EAX_755 = st::fn_00711110(this_00->field_0083,(char *)&DAT_0080f33a);
          if (0x2a7 < local_EAX_755) break;
        } while ((int)_Count < (int)(~uVar12 - 1));
        if (_Count != ~uVar12 - 1) {
          memset(&DAT_0080f33a, 0, 0x834); /* compiler bulk-zero initialization */
          st::fn_0072E340((char *)&DAT_0080f33a,local_898,sVar18 - 2);
          uVar12 = 0xffffffff;
          pcVar25 = &st_global_007C7274;
          do {
            pcVar21 = pcVar25;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar21 = pcVar25 + 1;
            cVar17 = *pcVar25;
            pcVar25 = pcVar21;
          } while (cVar17 != '\0');
          uVar12 = ~uVar12;
          iVar6 = -1;
          pcVar25 = (char *)&DAT_0080f33a;
          do {
            pcVar20 = pcVar25;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar20 = pcVar25 + 1;
            cVar17 = *pcVar25;
            pcVar25 = pcVar20;
          } while (cVar17 != '\0');
          pcVar25 = pcVar21 + -uVar12;
          pcVar21 = pcVar20 + -1;
          memmove(pcVar21, pcVar25, uVar12); /* compiler REP MOVS byte copy */
          uVar13 = 0;
        }
      }
      st::fn_007119C0(this_00->field_0083,(char *)&DAT_0080f33a,-1,-1,0);
      /* ST_CALLSITE[005BE92E]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0073,0x2f,2,'\x01',(byte *)local_c);
      st::fn_00710F00(this_00->field_0083);
      pcVar19 = st::pointer_boundary_cast<code *>(PTR_wsprintfA_0085bde8);
    }
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8a7 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    /* ST_CALLSITE[005BE975]: CALL 0x0040250e; direct=0040250E MReportTy::PaintObjScore */
    st::fn_0040250E(this_00,uVar12,(uint)DAT_0080c937,0x69,0x6a);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8a9 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    /* ST_CALLSITE[005BE9AA]: CALL 0x0040250e; direct=0040250E MReportTy::PaintObjScore */
    st::fn_0040250E(this_00,uVar12,(uint)DAT_0080c939,0xfb,0x6a);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8ab + (uint)(byte)this_00->field_0069 * 0x10);
    }
    /* ST_CALLSITE[005BE9E0]: CALL 0x0040250e; direct=0040250E MReportTy::PaintObjScore */
    st::fn_0040250E(this_00,uVar12,(uint)DAT_0080c93b,0x18d,0x6a);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8ad + (uint)(byte)this_00->field_0069 * 0x10);
    }
    /* ST_CALLSITE[005BEA15]: CALL 0x0040250e; direct=0040250E MReportTy::PaintObjScore */
    st::fn_0040250E(this_00,uVar12,(uint)DAT_0080c93d,0x225,0x6a);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8af + (uint)(byte)this_00->field_0069 * 0x10);
    }
    /* ST_CALLSITE[005BEA4B]: CALL 0x0040250e; direct=0040250E MReportTy::PaintObjScore */
    st::fn_0040250E(this_00,uVar12,(uint)DAT_0080c93f,0x69,0xcb);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8b1 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    /* ST_CALLSITE[005BEA83]: CALL 0x0040250e; direct=0040250E MReportTy::PaintObjScore */
    st::fn_0040250E(this_00,uVar12,(uint)DAT_0080c941,0xfb,0xcb);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8b3 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    /* ST_CALLSITE[005BEABC]: CALL 0x0040250e; direct=0040250E MReportTy::PaintObjScore */
    st::fn_0040250E(this_00,uVar12,(uint)(ushort)DAT_0080c943,0x18d,0xcb);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8b5 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    /* ST_CALLSITE[005BEAF4]: CALL 0x0040250e; direct=0040250E MReportTy::PaintObjScore */
    st::fn_0040250E(this_00,uVar12,(uint)STPiece<2,2>(DAT_0080c943),0x225,0xcb);
    bVar3 = this_00->field_0069;
    if ((char)local_10 == '\x03') {
      uVar8 = DAT_0080c8bb;
      if (bVar3 != 1) {
        uVar8 = *(undefined4 *)(&DAT_0080c82b + (uint)bVar3 * 0x10);
      }
      /* ST_CALLSITE[005BEB2B]: CALL ESI */
      (*pcVar19)(&DAT_0080f33a,"%11d",uVar8);
      st::fn_00710A90(this_00->field_008B,(int)this_00->field_0073,0,0x8c,0x11f,0x62,0x14);
      st::fn_007119C0(this_00->field_008B,(char *)&DAT_0080f33a,-1,-1,8);
      uVar8 = DAT_0080c8bf;
      if (this_00->field_0069 != 1) {
        uVar8 = *(undefined4 *)(&DAT_0080c82f + (uint)(byte)this_00->field_0069 * 0x10);
      }
      /* ST_CALLSITE[005BEB8C]: CALL ESI */
      (*pcVar19)(&DAT_0080f33a,"%11d",uVar8);
      iVar6 = 0x12a;
    }
    else {
      uVar8 = DAT_0080c8b7;
      if (bVar3 != 1) {
        uVar8 = *(undefined4 *)(&DAT_0080c827 + (uint)bVar3 * 0x10);
      }
      /* ST_CALLSITE[005BEBC8]: CALL ESI */
      (*pcVar19)(&DAT_0080f33a,"%7d",uVar8);
      st::fn_00710A90(this_00->field_008B,(int)this_00->field_0073,0,0x75,0x11f,0x3e,0x14);
      st::fn_007119C0(this_00->field_008B,(char *)&DAT_0080f33a,-1,-1,8);
      uVar8 = DAT_0080c8bb;
      if (this_00->field_0069 != 1) {
        uVar8 = *(undefined4 *)(&DAT_0080c82b + (uint)(byte)this_00->field_0069 * 0x10);
      }
      /* ST_CALLSITE[005BEC26]: CALL ESI */
      (*pcVar19)(&DAT_0080f33a,"%11d",uVar8);
      st::fn_00710A90(this_00->field_008B,(int)this_00->field_0073,0,0xcc,0x11f,0x62,0x14);
      st::fn_007119C0(this_00->field_008B,(char *)&DAT_0080f33a,-1,-1,8);
      uVar8 = DAT_0080c8bf;
      if (this_00->field_0069 != 1) {
        uVar8 = *(undefined4 *)(&DAT_0080c82f + (uint)(byte)this_00->field_0069 * 0x10);
      }
      /* ST_CALLSITE[005BEC87]: CALL ESI */
      (*pcVar19)(&DAT_0080f33a,"%11d",uVar8);
      iVar6 = 0x146;
    }
    st::fn_00710A90(this_00->field_008B,(int)this_00->field_0073,0,iVar6,0x11f,0x62,0x14);
    st::fn_007119C0(this_00->field_008B,(char *)&DAT_0080f33a,-1,-1,8);
    iVar6 = DAT_0080c8c3;
    if (this_00->field_0069 != 1) {
      iVar6 = *(int *)(&DAT_0080c833 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    if ((char)local_1c == -1) {
      iVar15 = 0;
    }
    else {
      iVar15 = (-(uint)((char)local_10 != '\x03') & 0xfffffff9) + 0x14;
    }
    if (((-1 < iVar6) && (0 < iVar15)) && (iVar15 = (iVar6 * 0x26) / iVar15, 0 < iVar15)) {
      iVar6 = 0x1c7;
      do {
        /* ST_CALLSITE[005BED20]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0073,iVar6,0x121,'\x06',
               (byte *)this_00->field_006F);
        iVar6 = iVar6 + 6;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    if ((char)local_10 != '\0') {
      uVar12 = local_10 & 0xff;
      if (uVar12 == 1) {
        local_8 = 0x23f1;
      }
      else if (uVar12 == 2) {
        local_8 = 0x23f0;
      }
      else if (uVar12 == 3) {
        local_8 = 0x23f2;
      }
      pcVar8 = st::fn_006B0140(local_8,g_hINSTANCE_00807618);
      uVar12 = 0xffffffff;
      do {
        pcVar25 = pcVar8;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar25 = pcVar8 + 1;
        cVar17 = *pcVar8;
        pcVar8 = pcVar25;
      } while (cVar17 != '\0');
      uVar12 = ~uVar12;
      pcVar25 = pcVar25 + -uVar12;
      pcVar21 = (char *)&DAT_0080f33a;
      memmove(pcVar21, pcVar25, uVar12); /* compiler REP MOVS byte copy */
      uVar13 = 0;
      for (puVar9 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar9 != nullptr;
          puVar9 = st::fn_0072E560(puVar9,'\n')) {
        *(undefined1 *)puVar9 = 0x20;
      }
      st::fn_00710A90(this_00->field_0083,(int)this_00->field_0073,0,0x37,0x145,400,0xf);
      st::fn_007119C0(this_00->field_0083,(char *)&DAT_0080f33a,0,-1,0);
    }
    st::fn_00710A90(this_00->field_0083,(int)this_00->field_0073,0,500,0x145,0xe6,0xf);
    bVar3 = this_00->field_0069;
    if (bVar3 == 1) {
      UVar23 = 0x2441;
    }
    else {
      if (DAT_0080cc40 == '\0') {
        bVar3 = *(byte *)((int)&DAT_0080c83a + bVar3 + 3);
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
        if (DAT_00808a8f == '\0') {
          if (DAT_0080c846 == bVar3) {
LAB_005bef47:
            iVar6 = 0;
          }
          else {
            uVar12 = (uint)DAT_0080c846;
            bVar4 = g_playerRelationMatrix[uVar12][bVar3];
            if ((bVar4 == 0) && (g_playerRelationMatrix[bVar3][uVar12] == 0)) {
              iVar6 = -2;
            }
            else if ((bVar4 == 1) && (g_playerRelationMatrix[bVar3][uVar12] == 0)) {
              iVar6 = -1;
            }
            else if ((bVar4 == 0) && (g_playerRelationMatrix[bVar3][uVar12] == 1)) {
              iVar6 = 1;
            }
            else {
              if ((bVar4 != 1) || (g_playerRelationMatrix[bVar3][uVar12] != 1)) goto LAB_005bef47;
              iVar6 = 2;
            }
          }
          bVar22 = iVar6 < 0;
        }
        else {
          bVar22 = g_bulkInitializedRecords_008087C7[bVar3].field_0023 !=
                   g_bulkInitializedRecords_008087C7[DAT_0080c846].field_0023;
        }
        if (bVar22) goto LAB_005bef67;
      }
      else if ((&DAT_0080c99b)[(uint)DAT_0080c846 * 0x51] !=
               (&DAT_0080c99b)[(uint)*(byte *)((int)&DAT_0080c83a + bVar3 + 3) * 0x51]) {
LAB_005bef67:
        UVar23 = 0x2442;
        goto LAB_005bef6c;
      }
      UVar23 = 0x2443;
    }
LAB_005bef6c:
    uVar12 = 2;
    iVar15 = -1;
    iVar6 = -3;
    local_EAX_2492 = st::fn_006B0140(UVar23,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_0083,local_EAX_2492,iVar6,iVar15,uVar12);
  }
  iVar6 = 1;
  puVar24 = this_00->field_005D + 0x14;
  uVar11 = st::fn_006B4FE0(this_00->field_005D);
  local_c = (RecoveredRecord_MReportTy_005BD4B0 *)
            st::fn_006B50C0(400,0x32,(uint)this_00->field_005D[7],uVar11,(undefined4 *)puVar24,iVar6);
  uVar12 = local_c->field_0014;
  if (uVar12 == 0) {
    uVar12 = ((uint)local_c->field_000E * local_c->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
             local_c->field_0008;
  }
  puVar10 = (undefined4 *)st::fn_006B4FA0((int *)local_c);
  for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar10 = 0x4c4c4c4c;
    puVar10 = puVar10 + 1;
  }
  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined1 *)puVar10 = 0x4c;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)local_c,0,2,2,st::machine_word_boundary_cast<int>(local_c->field_0004 + -4),
               st::machine_word_boundary_cast<int>(local_c->field_0008 + -4),0x18,0xd);
  st::fn_00710A90(this_00->field_0083,(int)local_c,0,5,5,st::machine_word_boundary_cast<int>(local_c->field_0004 + -0x69),
                   st::machine_word_boundary_cast<int>(local_c->field_0008 + -10));
  uVar12 = 0;
  iVar15 = -1;
  iVar6 = -1;
  local_EAX_3266 = st::fn_006B0140(0x2444,g_hINSTANCE_00807618);
  st::fn_007119C0(this_00->field_0083,local_EAX_3266,iVar6,iVar15,uVar12);
  st::fn_006B4170((RecoveredSourceFamily_dibcopy *)local_c,0,st::machine_word_boundary_cast<int>(local_c->field_0004 + -0x69),
               (local_c->field_0008 + -0x1c) / 2,0x50,0x1c,0);
  st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)local_c,0,st::machine_word_boundary_cast<int>(local_c->field_0004 + -0x69),
               (local_c->field_0008 + -0x1c) / 2,0x50,0x1c,0x18,0xd);
  cVar17 = (char)(DAT_0080c83a / 0xe10);
  local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(cVar17));
  if (cVar17 == '\0') {
    puVar16 = (undefined *)&DAT_007c2198;
    pcVar25 = "%s;";
  }
  else {
    puVar16 = (undefined *)(DAT_0080c83a / 0xe10 & 0xff);
    pcVar25 = "%2d:";
  }
  /* ST_CALLSITE[005BF305]: CALL dword ptr [0x0085bde8] */
  st::external_00000080((LPSTR)&DAT_0080f33a,pcVar25,puVar16);
  /* ST_CALLSITE[005BF344]: CALL dword ptr [0x0085bde8] */
  st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s%02d:%02d"),&DAT_0080f33a,
            (int)(((ulonglong)DAT_0080c83a % 0xe10) / 0x3c),
            (int)(((ulonglong)DAT_0080c83a % 0xe10) % 0x3c));
  st::fn_00710A90(this_00->field_008B,(int)local_c,0,st::machine_word_boundary_cast<int>(local_c->field_0004 + -0x69),
                   (local_c->field_0008 + -0x1c) / 2,0x50,0x1c);
  st::fn_007119C0(this_00->field_008B,(char *)&DAT_0080f33a,-1,-1,8);
  st::fn_006C5000
            (g_dDXContext_0080759C,0x174,0x1a9,(int)local_c,0,0,0,local_c->field_0004,
             local_c->field_0008,(int)&this_00->field_00A3,0x4c);
  st::fn_006AB060(&local_c);
LAB_005bf406:
  pAVar2 = this_00->field_0073;
  st::fn_006B48E0
            ((int)g_dDXContext_0080759C,0x1a,0x46,pAVar2,0,0,0,pAVar2->field_0004,pAVar2->field_0008
             ,(ushort *)&this_00->field_00A3,0x4c,0x10000ff);
  g_currentExceptionFrame = local_64.previous;
  return;
}

// 005BF860 MReportTy::NoneMReport
#line 4 "decomp/ST.exe/functions/005BF860/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::NoneMReport */

void __thiscall st::fn_005BF860(MReportTy *this)

{
  char cVar1;
  AnonPointee_MReportTy_0073 *pAVar2;
  bool bVar4;
  MReportTy *this_00;
  int iVar5;
  int iVar7;
  int iVar6;
  int iVar8;
  uint uVar9;
  int iVar10;
  InternalExceptionFrame local_50;
  MReportTy *local_c;
  int local_8;

  iVar8 = 0;
  local_8 = 1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar5 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x1f9,0,iVar5,st::mutable_c_string("%s"),
                               "MReportTy::NoneMReport");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x1f9);
    return;
  }
  cVar1 = local_c->field_0065;
  if (cVar1 == '\x01') {
    if (((local_c->field_0067 != '\0') && (local_c->field_0069 == '\0')) &&
       (local_c->field_0068 != '\0')) {
      bVar4 = false;
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
      if (DAT_0080c83e != 0xffffffff) {
        do {
          if (iVar8 == 0) {
            if (DAT_0080c963 <= this_00->field_02C3) {
              uVar9 = this_00->field_02A3;
              iVar10 = 0;
              iVar6 = DAT_0080c963;
              goto LAB_005bfb27;
            }
            uVar9 = this_00->field_02A3;
            if ((int)uVar9 < 0x29) {
              iVar6 = 5;
            }
            else {
              iVar6 = (int)uVar9 / 0x28;
            }
            iVar6 = st::machine_word_boundary_cast<int>(this_00->field_02C3 + iVar6);
            this_00->field_02C3 = iVar6;
            if (DAT_0080c963 < iVar6) {
              this_00->field_02C3 = DAT_0080c963;
            }
            /* ST_CALLSITE[005BFB12]: CALL 0x004016fe; direct=004016FE MReportTy::PaintMainScore */
            st::fn_004016FE(this_00,this_00->field_02C3,uVar9,0);
            bVar4 = true;
          }
          else if ((&this_00->field_02A3)[iVar8] < (int)(&DAT_0080c943)[iVar8]) {
            if (this_00->field_02A3 < 0x29) {
              iVar6 = 5;
            }
            else {
              iVar6 = st::machine_word_boundary_cast<int>(this_00->field_02A3 / 0x28);
            }
            iVar6 = (&this_00->field_02A3)[iVar8] + iVar6;
            (&this_00->field_02A3)[iVar8] = iVar6;
            if ((int)(&DAT_0080c943)[iVar8] < iVar6) {
              (&this_00->field_02A3)[iVar8] = (&DAT_0080c943)[iVar8];
            }
            /* ST_CALLSITE[005BFA9D]: CALL 0x004016fe; direct=004016FE MReportTy::PaintMainScore */
            st::fn_004016FE(this_00,(&this_00->field_02A3)[iVar8],this_00->field_02A3,iVar8);
            bVar4 = true;
          }
          else {
            uVar9 = this_00->field_02A3;
            iVar6 = (&DAT_0080c943)[iVar8];
            iVar10 = iVar8;
LAB_005bfb27:
            /* ST_CALLSITE[005BFB2A]: CALL 0x004016fe; direct=004016FE MReportTy::PaintMainScore */
            st::fn_004016FE(this_00,iVar6,uVar9,iVar10);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)(DAT_0080c83e + 1));
      }
      if (bVar4) {
        st::fn_00404BF1(this_00,0x1e,'\x01',-1);
        st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
        /* ST_CALLSITE[005BFB8B]: CALL 0x00402298; direct=00402298 PutDDXClip */
        st::fn_00402298(0x1a,0x46,0x1a,0x46,this_00->field_0073->field_0004,
                   (byte *)this_00->field_0073->field_0008,'\x01',(BITMAPINFO *)this_00->field_005D);
        pAVar2 = this_00->field_0073;
        st::fn_006B48E0
                  ((int)g_dDXContext_0080759C,0x1a,0x46,pAVar2,0,0,0,pAVar2->field_0004,
                   pAVar2->field_0008,(ushort *)&this_00->field_00A3,0x4c,0x10000ff);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
      this_00->field_0068 = 0;
    }
  }
  else if (cVar1 == '\x03') {
    if (local_c->field_0453 != nullptr) {
      /* ST_CALLSITE[005BF94D]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar8 = st::fn_004055F1(local_c->field_0453);
      if (iVar8 != 0) {
        local_8 = 0;
      }
    }
    if (this_00->field_0457 != nullptr) {
      /* ST_CALLSITE[005BF963]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar8 = st::fn_004055F1(this_00->field_0457);
      if (iVar8 != 0) {
        local_8 = 0;
      }
    }
    if (local_8 != 0) {
      if (this_00->field_0453 != nullptr) {
        /* ST_CALLSITE[005BF982]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        st::fn_0040128A(this_00->field_0453);
        st::fn_0072E2B0(this_00->field_0453);
        this_00->field_0453 = nullptr;
      }
      if (this_00->field_0457 != nullptr) {
        /* ST_CALLSITE[005BF9A6]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        st::fn_0040128A(this_00->field_0457);
        st::fn_0072E2B0(this_00->field_0457);
        this_00->field_0457 = nullptr;
      }
      this_00->field_0065 = 1;
      st::fn_00403A6C(this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  else if (cVar1 == '\x04') {
    if (local_c->field_0453 != nullptr) {
      /* ST_CALLSITE[005BF8C6]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar8 = st::fn_004055F1(local_c->field_0453);
      if (iVar8 == 0) {
        uVar9 = *(uint *)&this_00->field_0453->field_0x3;
        if (-1 < (int)uVar9) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar9);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (this_00->field_0457 != nullptr) {
      /* ST_CALLSITE[005BF8F7]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar8 = st::fn_004055F1(this_00->field_0457);
      if (iVar8 == 0) {
        uVar9 = *(uint *)&this_00->field_0457->field_0x3;
        if (-1 < (int)uVar9) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar9);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (local_8 != 0) {
      this_00->field_0065 = 2;
      st::fn_00404DB8((MTaskTy *)this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 005BFD30 MReportTy::PaintMainScore
#line 4 "decomp/ST.exe/functions/005BFD30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::PaintMainScore

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005BFD30(MReportTy *this,int param_1,uint param_2,int param_3)

{
  MReportTy *pMVar2;
  int iVar3;
  uint uVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_54;
  int local_10;
  MReportTy *local_c;
  uint local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  pMVar2 = local_c;
  if (iVar3 == 0) {
    if ((param_2 != 0) && (uVar3 = (uint)(param_1 * 0x28) / param_2, uVar3 != 0)) {
      iVar5 = 0x177;
      local_10 = param_3 * 0x26 + 0x38;
      local_8 = uVar3;
      do {
        /* ST_CALLSITE[005BFDA7]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pMVar2->field_0073,iVar5,local_10,'\x06',
               (byte *)pMVar2->field_006F);
        iVar5 = iVar5 + 6;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
    /* ST_CALLSITE[005BFDC9]: CALL dword ptr [0x0085bde8] */
    st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%8d"),param_1);
    uVar3 = param_3 * 0x26 + 0x30;
    st::fn_006B4170((RecoveredSourceFamily_dibcopy *)pMVar2->field_0073,0,0x280,uVar3,0x50,0x1c,0);
    st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pMVar2->field_0073,0,0x280,uVar3,0x50,0x1c,0x18,
                 0xd);
    st::fn_00710A90(pMVar2->field_008B,(int)pMVar2->field_0073,0,0x280,uVar3,0x50,0x1c);
    st::fn_007119C0(pMVar2->field_008B,(char *)&DAT_0080f33a,-1,-1,8);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x208,0,iVar3,st::mutable_c_string("%s"),
                             "MReportTy::PaintMainScore");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x208);
  return;
}

// 005BFF00 MReportTy::PaintObjScore
#line 4 "decomp/ST.exe/functions/005BFF00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::PaintObjScore

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 005BE5B0 -> 005BFF00 @ 005BE975 | 005BE5B0 -> 005BFF00 @ 005BE9AA | 005BE5B0 ->
   005BFF00 @ 005BE9E0 | 005BE5B0 -> 005BFF00 @ 005BEA15 | 005BE5B0 -> 005BFF00 @ 005BEA4B |
   005BE5B0 -> 005BFF00 @ 005BEA83 | 005BE5B0 -> 005BFF00 @ 005BEABC | 005BE5B0 -> 005BFF00 @
   005BEAF4

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_005BFF00(MReportTy *this,int param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  MReportTy *pMVar3;
  int errorCode;
  uint uVar4;
  int iVar5;
  InternalExceptionFrame local_50;
  MReportTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pMVar3 = local_c;
  if (errorCode == 0) {
    if (param_1 != -1) {
      cVar1 = *(char *)((int)&DAT_0080c83a + (byte)local_c->field_0069 + 3);
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(cVar1));
      /* ST_CALLSITE[005BFF5C]: CALL dword ptr [0x0085bde8] */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%6d"),param_1);
      st::fn_00710A90(pMVar3->field_008B,(int)pMVar3->field_0073,0,param_3 + 8,param_4 + 5,0x36,
                       0x14);
      if (cVar1 == -1) {
        uVar4 = 8;
      }
      else {
        uVar4 = local_8 & 0xff;
      }
      st::fn_007119C0(pMVar3->field_008B,(char *)&DAT_0080f33a,-1,-1,uVar4);
    }
    cVar1 = DAT_0080c846;
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(DAT_0080c846));
    /* ST_CALLSITE[005BFFC5]: CALL dword ptr [0x0085bde8] */
    st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%6d"),param_2);
    st::fn_00710A90(pMVar3->field_008B,(int)pMVar3->field_0073,0,param_3 + 0x4c,param_4 + 5,0x36,
                     0x14);
    if (cVar1 == -1) {
      uVar4 = 8;
    }
    else {
      uVar4 = local_8 & 0xff;
    }
    st::fn_007119C0(pMVar3->field_008B,(char *)&DAT_0080f33a,-1,-1,uVar4);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x21c,0,errorCode,
                             st::mutable_c_string("%s"),"MReportTy::PaintObjScore");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x21c);
  return;
}

// 005C0980 MReportTy::CreateBut
#line 4 "decomp/ST.exe/functions/005C0980/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::CreateBut */

undefined4 __thiscall
st::fn_005C0980
          (MReportTy *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,
          undefined4 param_8)

{
  int iVar4;
  int iVar3;
  uint uVar2;
  int iVar5;
  uint *puVar6;
  undefined4 local_1cc [4];
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  InternalExceptionFrame local_50;
  MReportTy *local_c;
  undefined4 local_8;

  puVar6 = local_1cc;
  local_c = this;
  for (iVar5 = 0x5f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar4 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar4 == 0) {
    local_1cc[0] = param_2;
    local_1cc[1] = param_1;
    local_1bc = param_5;
    local_1cc[2] = param_3;
    local_1cc[3] = param_4;
    STPiece<0,2>(local_1ac) = local_c->field_0008;
    STPiece<2,2>(local_1ac) = local_c->field_000A;
    local_1a4 = param_7;
    local_1b8 = param_6;
    local_1a8 = 2;
    local_168 = 2;
    local_164 = param_8;
    local_16c = local_1ac;
    /* ST_CALLSITE[005C0A49]: CALL dword ptr [EAX + 0x8] */
    (*local_c->field_000C->vtable->CreateObject)
              ((SystemClassTy *)local_c->field_000C,2,&local_8,nullptr,st::machine_word_boundary_cast<undefined4>(local_1cc),0);
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x29f,0,iVar4,st::mutable_c_string("%s"),
                             "MReportTy::CreateBut");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x29f);
  return 0;
}

// 005C0B00 MReportTy::PaintBut
#line 4 "decomp/ST.exe/functions/005C0B00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::PaintBut

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005C1A90 -> 005C0B00 @ 005C1F2B

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_005C0B00(MReportTy *this,STMessage *param_1,UINT param_2,int param_3,char param_4,
                   uint *param_5)

{
  uint32_t _local_10;

  word wVar1;
  STMessageArg SVar3;
  byte *pbVar4;
  AnonPointee_MReportTy_0077 *pAVar5;
  int errorCode;
  uint *puVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  InternalExceptionFrame local_64;
  STMessageArg local_20;
  byte *local_1c;
  uint *local_18;
  AnonPointee_MReportTy_0077 *local_14;
  char local_10;
  undefined3 uStack_f;
  MReportTy *local_c;
  undefined4 *local_8;

  if ((param_1->arg0).words.low == 3) {
    cVar8 = (-(param_4 != '\0') & 0xedU) + 0x2a;
  }
  else {
    cVar8 = (-(param_4 != '\0') & 0xecU) + 0x2c;
  }
  local_20 = param_1->arg1;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  _local_10 = CONCAT31(uStack_f,cVar8);
  if (param_4 == '\0') {
    local_14 = this->field_0077;
  }
  else {
    local_14 = static_cast<AnonPointee_MReportTy_0077 *>(this->field_007B);
  }
  local_1c = (byte *)local_14->field_0008;
  local_8 = (undefined4 *)local_14->field_0004;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_c = this;
  errorCode = st::fn_0072D7F0(local_64.jumpBuffer,0);
  pAVar5 = local_14;
  if (errorCode == 0) {
    uVar10 = local_14->field_0014;
    if (uVar10 == 0) {
      uVar10 = ((uint)(ushort)local_14->field_000E * local_14->field_0004 + 0x1f >> 3 & 0x1ffffffc)
               * local_14->field_0008;
    }
    puVar6 = (undefined4 *)st::fn_006B4FA0((int *)local_14);
    pbVar4 = local_1c;
    for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    st::fn_006C7610((RecoveredSourceFamily_dibcopy *)pAVar5,0,0,0,(uint)local_8,(uint)local_1c,param_3,
                 0x4c);
    st::fn_006C7570((RecoveredSourceFamily_dibcopy *)pAVar5,0,2,2,local_8 + -1,(int)(pbVar4 + -4),
                 param_3,(byte)_local_10);
    st::fn_006C7570((RecoveredSourceFamily_dibcopy *)pAVar5,0,0,0,local_8,(int)pbVar4,param_3,
                 (byte)_local_10);
    if (((param_4 == '\0') && (param_2 != 0)) || ((param_4 != '\0' && (param_5 != nullptr)))) {
      if (param_4 == '\0') {
        param_5 = (uint *)st::fn_006B0140(param_2,g_hINSTANCE_00807618);
      }
      local_18 = param_5;
      st::fn_00710A90(local_c->field_0083,(int)pAVar5,0,0,0,0,0);
      wVar1 = (param_1->arg0).words.low;
      if ((wVar1 == 1) || (wVar1 == 2)) {
        uVar10 = (-(uint)(param_4 != '\0') & 0xfffffffe) + 2;
      }
      else if (wVar1 == 3) {
        uVar10 = (-(uint)(param_4 != '\0') & 0xfffffffe) + 3;
      }
      else {
        uVar10 = 4;
      }
      st::fn_007119C0(local_c->field_0083,(char *)local_18,-1,-1,uVar10);
    }
    SVar3 = local_20;
                    /* WARNING: Load size is inaccurate */
    st::fn_006B5F80((int *)g_ddxContext_008075A8,*local_20.i32,*(int *)(local_20.u32 + 4),(int)local_8,
                 (int)pbVar4);
                    /* WARNING: Load size is inaccurate */
    /* ST_CALLSITE[005C0CC6]: CALL 0x00402298; direct=00402298 PutDDXClip */
    st::fn_00402298(*SVar3.i32,*(int *)(SVar3.u32 + 4),*SVar3.i32,*(int *)(SVar3.u32 + 4),(uint)local_8,
               pbVar4,'\x01',(BITMAPINFO *)local_c->field_005D);
                    /* WARNING: Load size is inaccurate */
    st::fn_006B48E0
              ((int)g_dDXContext_0080759C,*SVar3.i32,*(int *)(SVar3.u32 + 4),
               (AnonPointee_MReportTy_0073 *)pAVar5,0,0,0,(uint)local_8,(int)pbVar4,
               (ushort *)&local_c->field_00A3,0x4c,0x10000ff);
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  g_currentExceptionFrame = local_64.previous;
  iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x2c1,0,errorCode,
                             st::mutable_c_string("%s"),"MReportTy::PaintBut");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x2c1);
  return;
}

// 005C0E00 MReportTy::SetCtrl
#line 4 "decomp/ST.exe/functions/005C0E00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::SetCtrl */

void __thiscall st::fn_005C0E00(MReportTy *this)

{
  byte *puVar1;
  DArrayTy *pDVar2;
  short sVar4;
  int local_EAX_39;
  int iVar5;
  byte *puVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  MReportTy *this_00;
  cMf32 *this_01;
  int *piVar10;
  byte *puVar11;
  InternalExceptionFrame local_98;
  InternalExceptionFrame local_54;
  undefined4 *local_10;
  MReportTy *local_c;
  cMf32 *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;
  local_EAX_39 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_c;
  if (local_EAX_39 == 0) {
    if (local_c->field_008F != 0) {
      st::fn_006E56B0(local_c->field_000C,local_c->field_008F);
      this_00->field_008F = 0;
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0x262,0x226,0x91,0x28);
      /* ST_CALLSITE[005C0E92]: CALL 0x00402298; direct=00402298 PutDDXClip */
      st::fn_00402298(0x262,0x226,0x262,0x226,0x91,(byte *)0x28,'\x01',(BITMAPINFO *)this_00->field_005D);
    }
    if (this_00->field_009B != 0) {
      st::fn_006E56B0(this_00->field_000C,this_00->field_009B);
      this_00->field_009B = 0;
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0x1e,0x1ea,300,0x1e);
      /* ST_CALLSITE[005C0EE8]: CALL 0x00402298; direct=00402298 PutDDXClip */
      st::fn_00402298(0x1e,0x1ea,0x1e,0x1ea,300,(byte *)0x1e,'\x01',(BITMAPINFO *)this_00->field_005D);
    }
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0x174,0x1a9,400,0x32);
    /* ST_CALLSITE[005C0F2E]: CALL 0x00402298; direct=00402298 PutDDXClip */
    st::fn_00402298(0x174,0x1a9,0x174,0x1a9,400,(byte *)0x32,'\x01',(BITMAPINFO *)this_00->field_005D);
    if ((this_00->field_0066 == '\x01') &&
       (this_00->field_0067 = 0, (&this_00->field_0347)[(byte)this_00->field_006A]->count != 0)) {
      local_8 = nullptr;
      /* ST_CALLSITE[005C0F7E]: CALL dword ptr [0x0085bde8] */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s%s%s\\%s"),&CHAR_00h_00807680,
                st_global_0079C0D4,&CHAR_00h_00807ddd,PTR_s_PL_LOG_0079c0d8);
      local_98.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_98;
      iVar5 = st::fn_0072D7F0(local_98.jumpBuffer,0);
      if (iVar5 == 0) {
        local_8 = (cMf32 *)st::fn_006F0EC0(0x345,(byte *)&DAT_0080f33a,0,0,0);
      }
      this_01 = local_8;
      this_00 = local_c;
      g_currentExceptionFrame = local_98.previous;
      if (local_8 != nullptr) {
        local_10 = &DAT_0080c522;
        pDVar2 = (&local_c->field_0347)[(byte)local_c->field_006A];
        if (local_c->field_006B < pDVar2->count) {
          puVar5 = DArrayAt<byte>(pDVar2, local_c->field_006B);
        }
        else {
          puVar5 = nullptr;
        }
        /* ST_CALLSITE[005C1030]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s%01d%02d"),PTR_DAT_0079c0dc,
                  (byte)local_c->field_006A + 1,*puVar5);
        puVar6 = st::fn_006F1CE0(this_01,0xc,(char *)&DAT_0080f33a,(int *)&local_10,0);
        if (puVar6 != nullptr) {
          this_00->field_0067 = 1;
          puVar5 = (byte *)(&DAT_0080c967);
          puVar11 = (byte *)(&DAT_008087b6);
          memmove(puVar11, puVar5, 0x1999); /* compiler REP MOVS byte copy */
          this_01 = local_8;
        }
        st::fn_006F1170(this_01);
      }
    }
    puVar1 = &this_00->field_0x1d;
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    this_00->field_002D = 0x23;
    iVar9 = 0;
    do {
      this_00->field_0031 = (short)iVar9 + 1;
      if (iVar9 == 0) {
        sVar4 = 1;
      }
      else if (this_00->field_0067 == '\0') {
        sVar4 = 2;
      }
      else {
        sVar4 = (((int)(DAT_0080c83e + 2) <= iVar9) - 1 & 0xfffe) + 2;
      }
      this_00->field_0033 = sVar4;
      st::fn_006E6080(this_00,2,this_00->field_009F,(undefined4 *)puVar1);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 9);
    if (this_00->field_0067 == '\0') {
      this_00->field_002D = 0x20;
      this_00->field_0031 = 0;
      this_00->field_0033 = 0;
      st::fn_006E6080(this_00,2,this_00->field_008F,(undefined4 *)puVar1);
    }
    else {
      iVar9 = 0;
      this_00->field_0069 = 0;
      this_00->field_02A3 = 0;
      if (DAT_0080c83e != 0) {
        piVar10 = reinterpret_cast<int *>(&DAT_0080c947);
        do {
          if (this_00->field_02A3 < *piVar10) {
            this_00->field_02A3 = *piVar10;
          }
          iVar9 = iVar9 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar9 < (int)(uint)DAT_0080c83e);
      }
      if (this_00->field_02A3 < DAT_0080c963) {
        this_00->field_02A3 = DAT_0080c963;
      }
      /* ST_CALLSITE[005C115E]: CALL 0x00405ecf; direct=00405ECF MReportTy::CreateBut */
      uVar7 = st::fn_00405ECF(this_00,1,1,0x262,0x226,0x91,0x28,0x6200,0x6212);
      this_00->field_008F = uVar7;
      if (this_00->field_0066 == '\x01') {
        /* ST_CALLSITE[005C118E]: CALL 0x00405ecf; direct=00405ECF MReportTy::CreateBut */
        uVar7 = st::fn_00405ECF(this_00,1,1,0x1e,0x1ea,300,0x1e,0x6203,0x6215);
        this_00->field_009B = uVar7;
      }
    }
    this_00->field_0068 = 1;
    /* ST_CALLSITE[005C11C2]: CALL 0x0040126c; direct=0040126C MReportTy::SetCtrl */
    st::fn_0040126C(this_00,1);
    this_00->field_002D = 5;
    st::fn_006E6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x30e,0,local_EAX_39,
                             st::mutable_c_string("%s"),"MReportTy::SetCtrl");
  if (iVar8 == 0) {
    st::fn_006A5E40(local_EAX_39,0,st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x30e);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 005C1340 MReportTy::SetCtrl
#line 4 "decomp/ST.exe/functions/005C1340/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::SetCtrl

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005C1340(MReportTy *this,int param_1)

{
  ushort **ppuVar1;
  MReportTy *pMVar3;
  int iVar4;
  char *pcVar4;
  ushort *puVar5;
  ccFntTy *pcVar6;
  int iVar7;
  undefined4 local_470 [256];
  InternalExceptionFrame local_70;
  undefined4 local_2c [8];
  MReportTy *local_c;
  char local_5;

  if (this->field_0066 == '\x01') {
    local_5 = this->field_006A + '\x01';
  }
  else {
    local_5 = DAT_0080874e;
  }
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_c = this;
  iVar4 = st::fn_0072D7F0(local_70.jumpBuffer,0);
  pMVar3 = local_c;
  if (iVar4 == 0) {
    ppuVar1 = &local_c->field_005D;
    st::fn_006F20E0(g_cMf32_00806780,(uint *)ppuVar1);
    if (local_5 == '\x01') {
      pcVar4 = &CHAR_W_007ca250;
    }
    else {
      pcVar4 = &CHAR_B_007ca248;
      if (local_5 != '\x02') {
        pcVar4 = &CHAR_S_007ca24c;
      }
    }
    /* ST_CALLSITE[005C13DE]: CALL dword ptr [0x0085bde8] */
    st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("REPORT_%s_%c"),pcVar4,
              (int)(char)((-(DAT_0080c522 != 0) & 0xfbU) + 0x46));
    puVar5 = st::fn_0070A9F0(g_cMf32_00806780,(char *)&DAT_0080f33a,0,1);
    *ppuVar1 = puVar5;
    st::fn_006BC360(puVar5,local_470,nullptr);
    st::fn_00718780
              ((int)local_470,0,0x100,0x1a,0x10,(undefined4 *)&g_startSystem_0081176C->field_0x144);
    st::fn_00718780
              ((int)local_470,0,0x100,0x1a,0x10,(undefined4 *)&pMVar3->field_00A3);
    st::fn_00718780
              ((int)local_470,0,0x100,0x2e,0x10,(undefined4 *)&pMVar3->field_0x1a3);
    /* ST_CALLSITE[005C1479]: CALL 0x00403738; direct=00403738 PutDDX */
    st::fn_00403738(0,0,'\x01',(BITMAPINFO *)*ppuVar1);
    if (pMVar3->field_0083 != nullptr) {
      st::fn_00710560((uint *)pMVar3->field_0083);
    }
    pcVar6 = (ccFntTy *)st::fn_004042A5((int)*ppuVar1,nullptr,DAT_00807dd9);
    pMVar3->field_0083 = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    if (pMVar3->field_0087 != nullptr) {
      st::fn_00710560((uint *)pMVar3->field_0087);
    }
    pcVar6 = (ccFntTy *)st::fn_00402306((int)*ppuVar1,nullptr,DAT_00807dd9);
    pMVar3->field_0087 = pcVar6;
    g_startSystem_0081176C->field_0038 = (HDC__ *)pcVar6;
    if (param_1 != 0) {
      STPiece<0,2>(local_2c[2]) = pMVar3->field_0008;
      STPiece<2,2>(local_2c[2]) = pMVar3->field_000A;
      memset(local_2c, 0, 0x20); /* compiler bulk-zero initialization */
      local_2c[3] = 2;
      local_2c[4] = 0x70ff;
      st::fn_006E3B50((AppClassTy *)&DAT_00807620,local_2c);
    }
    g_currentExceptionFrame = local_70.previous;
    return;
  }
  g_currentExceptionFrame = local_70.previous;
  iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x32c,0,iVar4,st::mutable_c_string("%s"),
                             "MReportTy::SetCtrl");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x32c);
  return;
}

// 005C1610 MReportTy::PaintTab
#line 4 "decomp/ST.exe/functions/005C1610/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::PaintTab */

void __thiscall st::fn_005C1610(MReportTy *this,AnonShape_005C1610_B64592CA *param_1)

{
  int iVar1;
  uint uVar2;
  AnonNested_005C1610_0014_572A8044 *pAVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  byte bVar10;
  InternalExceptionFrame local_8c;
  int local_48;
  AnonNested_005C1610_0014_572A8044 *local_44;
  int local_40;
  int local_3c;
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
  uint local_c;
  MReportTy *local_8;

  local_44 = param_1->field_0014;
  local_40 = st::machine_word_boundary_cast<int>(local_44->field_0010 - 0x46);
  local_48 = st::machine_word_boundary_cast<int>(local_44->field_000C - 0x1a);
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_8 = this;
  iVar5 = st::fn_0072D7F0(local_8c.jumpBuffer,0);
  pAVar4 = local_44;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x369,0,iVar5,st::mutable_c_string("%s"),
                               "MReportTy::PaintTab");
    if (iVar7 == 0) {
      st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x369);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006B5F80((int *)g_ddxContext_008075A8,local_44->field_000C,local_44->field_0010,
               local_44->field_0014,local_44->field_0018);
  iVar7 = local_40;
  iVar5 = local_48;
  st::fn_006B4170((RecoveredSourceFamily_dibcopy *)local_8->field_0073,0,local_48,local_40,
               pAVar4->field_0014,pAVar4->field_0018,0xff);
  uVar2 = pAVar4->field_0004;
  if (uVar2 == 0) {
    local_3c = iVar5 + 5;
    local_38 = iVar7 + 2;
    local_34 = iVar5 + 7;
    local_30 = iVar7;
    local_28 = iVar7;
    local_2c = iVar5 + -3 + pAVar4->field_0014;
    local_24 = iVar5 + -3 + pAVar4->field_0014;
    local_20 = (pAVar4->field_0018 - 1) + iVar7;
    local_18 = (pAVar4->field_0018 - 1) + iVar7;
    local_10 = (pAVar4->field_0018 - 3) + iVar7;
    local_1c = local_34;
    local_14 = local_3c;
    st::fn_006C7EA0(local_8->field_0073,0,(undefined4 *)&local_3c,6,0x4c);
    st::fn_006C7F10((RecoveredSourceFamily_dibcopy *)local_8->field_0073,0,&local_3c,6,0x18);
    iVar6 = iVar5 + -1 + pAVar4->field_0014;
LAB_005c17e9:
    bVar10 = 0x18;
    iVar1 = st::machine_word_boundary_cast<int>(pAVar4->field_0018 - 1);
    iVar9 = iVar7;
  }
  else {
    if (uVar2 != 1) {
      if (uVar2 != 2) goto LAB_005c1806;
      iVar6 = iVar5 + -1 + pAVar4->field_0014;
      goto LAB_005c17e9;
    }
    local_38 = iVar7 + 2;
    local_34 = iVar5 + 2;
    local_3c = iVar5;
    local_30 = iVar7;
    local_28 = iVar7;
    local_2c = iVar5 + -1 + pAVar4->field_0014;
    local_24 = iVar5 + -1 + pAVar4->field_0014;
    local_20 = (pAVar4->field_0018 - 1) + iVar7;
    local_14 = iVar5;
    local_18 = (pAVar4->field_0018 - 1) + iVar7;
    local_10 = (pAVar4->field_0018 - 3) + iVar7;
    local_1c = local_34;
    st::fn_006C7EA0(local_8->field_0073,0,(undefined4 *)&local_3c,6,0x4c);
    st::fn_006C7F10((RecoveredSourceFamily_dibcopy *)local_8->field_0073,0,&local_3c,6,0x18);
    bVar10 = 0x4c;
    iVar6 = iVar5 + -1 + pAVar4->field_0014;
    iVar1 = st::machine_word_boundary_cast<int>(pAVar4->field_0018 - 2);
    iVar9 = iVar7 + 1;
  }
  st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)local_8->field_0073,0,iVar6,iVar9,iVar6,iVar1 + iVar7,
               bVar10,0xd);
LAB_005c1806:
  if (pAVar4->field_0004 < 2) {
    uVar2 = pAVar4->field_0000;
    cVar8 = -1;
    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(0xff));
    if (1 < uVar2) {
      cVar8 = DAT_0080c846;
      if (uVar2 != 2) {
        cVar8 = *(char *)((int)&DAT_0080c83a + uVar2 + 2);
      }
      local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(cVar8));
    }
    if (cVar8 != -1) {
      switch(local_c & 0xff) {
      case 0:
        bVar10 = 0xfc;
        break;
      case 1:
        bVar10 = 0xfa;
        break;
      case 2:
        bVar10 = 0xfb;
        break;
      case 3:
        bVar10 = 0xf9;
        break;
      case 4:
        bVar10 = 0xfd;
        break;
      case 5:
        bVar10 = 0xfe;
        break;
      case 6:
        bVar10 = 0xf3;
        break;
      case 7:
        bVar10 = 7;
        break;
      default:
        bVar10 = 0xff;
      }
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)local_8->field_0073,0,
                   (-(uint)(pAVar4->field_0004 != 0) & 0xfffffffb) + 0xc + iVar5,iVar7 + 0xb,0x1a,
                   0xd,bVar10);
      st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)local_8->field_0073,0,
                   (-(uint)(pAVar4->field_0004 != 0) & 0xfffffffb) + 0xc + iVar5,iVar7 + 0xb,0x1a,
                   0xd,0,0xd);
    }
  }
  st::fn_006B48E0
            ((int)g_dDXContext_0080759C,pAVar4->field_000C,pAVar4->field_0010,local_8->field_0073,0,
             iVar5,iVar7,pAVar4->field_0014,pAVar4->field_0018,(ushort *)&local_8->field_00A3,0x4c,
             0x10000ff);
  g_currentExceptionFrame = local_8c.previous;
  return;
}

// 005C1A90 MReportTy::GetMessage
#line 4 "decomp/ST.exe/functions/005C1A90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005C1A90; family_names=MReportTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:10,18:5,1c:3} */

int __thiscall st::fn_005C1A90(MReportTy *this,STMessage *message)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  word wVar4;
  STMessageId SVar5;
  dword dVar6;
  DArrayTy *pDVar7;
  RecoveredSourceFamily_dibcopy *pRVar8;
  bool bVar10;
  MReportTy *this_00;
  DWORD DVar11;
  int local_EAX_49;
  int iVar13;
  char *pcVar14_mg4;
  uint *puVar14;
  void *pvVar15;
  char *pcVar14_mg2;
  char *pcVar14_mg0;
  char *pcVar14_mg3;
  int iVar12;
  int iVar16;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  char *pcVar20;
  int *piVar21;
  char *pcVar22;
  UINT UVar23;
  InternalExceptionFrame local_5c;
  uint local_18;
  uint local_14;
  MReportTy *local_10;
  int local_c;
  int *local_8;

  local_10 = this;
  DVar11 = st::fn_006E51B0(this->field_0010);
  piVar21 = nullptr;
  this->field_0061 = DVar11;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_EAX_49 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_49 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar16 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x42b,0,local_EAX_49,
                                st::mutable_c_string("%s"),"MReportTy::GetMessage");
    if (iVar16 == 0) {
      st::fn_006A5E40(local_EAX_49,0,st::mutable_c_string("E:\\__titans\\Start\\rpt_obj.cpp"),0x42b);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar5 = message->id;
  if (MESS_MREPORTTY_6214 < SVar5) {
    if (SVar5 < MESS_SHARED_6980) {
      if (SVar5 == MESS_SHARED_697F) {
        if ((message->arg0).words.low < 3) {
          st::fn_00710A90(local_10->field_0087,(message->arg1).i32,0,0,0,0,0);
          wVar4 = (message->arg0).words.low;
          if (wVar4 == 1) {
            UVar23 = 0x23f0;
          }
          else if (wVar4 == 2) {
            UVar23 = 0x23f2;
          }
          else {
            UVar23 = 0x23f1;
          }
          pcVar14_mg0 = st::fn_006B0140(UVar23,g_hINSTANCE_00807618);
          uVar16 = 0xffffffff;
          do {
            pcVar20 = pcVar14_mg0;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar20 = pcVar14_mg0 + 1;
            cVar1 = *pcVar14_mg0;
            pcVar14_mg0 = pcVar20;
          } while (cVar1 != '\0');
          uVar16 = ~uVar16;
          pcVar20 = pcVar20 + -uVar16;
          pcVar22 = (char *)&DAT_0080f33a;
          memmove(pcVar22, pcVar20, uVar16); /* compiler REP MOVS byte copy */
          uVar17 = 0;
          for (puVar14 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar14 != nullptr;
              puVar14 = st::fn_0072E560(puVar14,'\n')) {
            *(undefined1 *)puVar14 = 0x20;
          }
          st::fn_007119C0(this_00->field_0087,(char *)&DAT_0080f33a,-1,-1,
                         (uint)((message->arg0).words.high == 1));
          if ((message->arg0).words.high == 1) {
            pRVar8 = static_cast<RecoveredSourceFamily_dibcopy *>((message->arg1).ptr);
            st::fn_006B5EE0(pRVar8,0,0,0,pRVar8->field_0004,pRVar8->field_0008,0x18,0xd);
          }
        }
      }
      else if (SVar5 < MESS_FSGSTY_6901) {
        if (SVar5 == MESS_SHARED_6900) {
          if ((message->arg0).u32 != 0xffffffff) {
            local_10->field_006B = (message->arg0).u32;
            /* ST_CALLSITE[005C204E]: CALL 0x00403b07; direct=00403B07 MReportTy::SetCtrl */
            st::fn_00403B07(local_10);
            this_00->field_002D = 5;
            st::fn_006E6080(this_00,2,this_00->field_009B,(undefined4 *)&this_00->field_0x1d);
          }
        }
        else if (SVar5 == MESS_MREPORTTY_6215) {
          pDVar7 = (&local_10->field_0347)[(byte)local_10->field_006A];
          if (pDVar7 != nullptr) {
            uVar16 = local_10->field_006B;
            if (uVar16 < pDVar7->count) {
              pvVar15 = DArrayAt<void>(pDVar7, uVar16);
            }
            else {
              pvVar15 = nullptr;
            }
            if (pvVar15 != nullptr) {
              if (uVar16 < pDVar7->count) {
                piVar21 = DArrayAt<int>(pDVar7, uVar16);
              }
              else {
                piVar21 = nullptr;
              }
              iVar13 = *piVar21 + 1;
              pcVar14_mg2 = st::fn_006B0140(0x2445,g_hINSTANCE_00807618);
              /* ST_CALLSITE[005C201C]: CALL dword ptr [0x0085bde8] */
              st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s %d"),pcVar14_mg2,iVar13);
              /* ST_CALLSITE[005C2033]: CALL 0x00404881; direct=00404881 MReportTy::PaintBut */
              st::fn_00404881(this_00,message,0,2,'\x01',&DAT_0080f33a);
            }
          }
        }
        else if ((SVar5 == MESS_MMSGTY_68FF) && (uVar16 = (message->arg0).u32, uVar16 < 3)) {
          local_10->field_006A = (char)uVar16;
          uVar16 = (&local_10->field_0347)[uVar16 & 0xff]->count;
          if (uVar16 <= local_10->field_006B) {
            local_10->field_006B = uVar16 - 1;
          }
          /* ST_CALLSITE[005C1F94]: CALL 0x00403b07; direct=00403B07 MReportTy::SetCtrl */
          st::fn_00403B07(local_10);
          this_00->field_002D = 5;
          st::fn_006E6080(this_00,2,this_00->field_0097,(undefined4 *)&this_00->field_0x1d);
        }
      }
      else if (SVar5 == MESS_PRIVIDERTY_693F) {
        /* ST_CALLSITE[005C208F]: CALL 0x00402fef; direct=00402FEF MReportTy::sub_005C00D0 */
        st::fn_00402FEF(local_10);
      }
      else if (SVar5 == MESS_SHARED_6940) {
        /* ST_CALLSITE[005C2083]: CALL 0x00405614; direct=00405614 MReportTy::sub_005C0190 */
        st::fn_00405614(local_10);
      }
      goto cf_common_exit_005C22B1;
    }
    if (MESS_MREPORTTY_B208 < SVar5) {
      if (SVar5 == MESS_PLAYPANELTY_B209) {
        /* ST_CALLSITE[005C22AC]: CALL 0x0040596b; direct=0040596B MReportTy::PaintTab */
        st::fn_0040596B(local_10,(AnonShape_005C1610_B64592CA *)message);
      }
      goto cf_common_exit_005C22B1;
    }
    if (SVar5 == MESS_MREPORTTY_B208) {
      cVar1 = *(char *)(message->arg0).ptr;
      local_10->field_0068 = 0;
      local_10->field_0069 = cVar1 + -1;
      /* ST_CALLSITE[005C229B]: CALL 0x00401ec9; direct=00401EC9 MReportTy::PaintMReport */
      st::fn_00401EC9(local_10,'\0');
      goto cf_common_exit_005C22B1;
    }
    if (SVar5 == MESS_SHARED_6980) {
      pDVar7 = (&local_10->field_0347)[(byte)local_10->field_006A];
      if ((pDVar7 != nullptr) &&
         (uVar16 = (uint)(message->arg0).words.low, uVar16 < pDVar7->count)) {
        piVar21 = DArrayAt<int>(pDVar7, uVar16);
      }
      if (piVar21 != nullptr) {
        st::fn_00710A90(local_10->field_0087,(message->arg1).i32,0,0,0,0,0);
        iVar13 = *piVar21 + 1;
        pcVar14_mg3 = st::fn_006B0140(0x2445,g_hINSTANCE_00807618);
        /* ST_CALLSITE[005C223B]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s %d"),pcVar14_mg3,iVar13);
        st::fn_007119C0(this_00->field_0087,(char *)&DAT_0080f33a,-1,-1,
                       (uint)((message->arg0).words.high == 1));
        if ((message->arg0).words.high == 1) {
          pRVar8 = static_cast<RecoveredSourceFamily_dibcopy *>((message->arg1).ptr);
          st::fn_006B5EE0(pRVar8,0,0,0,pRVar8->field_0004,pRVar8->field_0008,0x18,0xd);
        }
      }
      goto cf_common_exit_005C22B1;
    }
    if (SVar5 != MESS_MREPORTTY_70FF) goto cf_common_exit_005C22B1;
    st::fn_0040448A((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                       local_10->field_005D,0,0);
switchD_005c1b14_caseD_5:
    /* ST_CALLSITE[005C21CA]: CALL 0x00401ec9; direct=00401EC9 MReportTy::PaintMReport */
    st::fn_00401EC9(this_00,'\0');
    goto cf_common_exit_005C22B1;
  }
  if (SVar5 == MESS_MREPORTTY_6214) {
    if (local_10->field_006A == '\x01') {
      UVar23 = 0x23f0;
    }
    else if (local_10->field_006A == '\x02') {
      UVar23 = 0x23f2;
    }
    else {
      UVar23 = 0x23f1;
    }
    pcVar14_mg4 = st::fn_006B0140(UVar23,g_hINSTANCE_00807618);
    uVar16 = 0xffffffff;
    do {
      pcVar20 = pcVar14_mg4;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar20 = pcVar14_mg4 + 1;
      cVar1 = *pcVar14_mg4;
      pcVar14_mg4 = pcVar20;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    pcVar20 = pcVar20 + -uVar16;
    pcVar22 = (char *)&DAT_0080f33a;
    memmove(pcVar22, pcVar20, uVar16); /* compiler REP MOVS byte copy */
    uVar17 = 0;
    for (puVar14 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar14 != nullptr;
        puVar14 = st::fn_0072E560(puVar14,'\n')) {
      *(undefined1 *)puVar14 = 0x20;
    }
    /* ST_CALLSITE[005C1F2B]: CALL 0x00404881; direct=00404881 MReportTy::PaintBut */
    st::fn_00404881(this_00,message,0,2,'\x01',&DAT_0080f33a);
    goto cf_common_exit_005C22B1;
  }
  if (SVar5 < MESS_PLAYPANELTY_6201) {
    if (SVar5 != MESS_SHARED_6200) {
      switch(SVar5) {
      case MESS_ID_NONE:
        /* ST_CALLSITE[005C1B3C]: CALL 0x00403706; direct=00403706 MReportTy::NoneMReport */
        st::fn_00403706(local_10);
        break;
      case MESS_ID_CREATE:
        /* ST_CALLSITE[005C1B24]: CALL 0x00404ff7; direct=00404FF7 MReportTy::InitMReport */
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        st::fn_00404FF7(local_10,*(undefined1 *)((message->arg0).u32 + 0x14));
        break;
      case MESS_SHARED_0003:
        /* ST_CALLSITE[005C1B30]: CALL 0x004023bf; direct=004023BF MReportTy::DoneMReport */
        st::fn_004023BF(local_10);
        break;
      case MESS_SHARED_0005:
        goto switchD_005c1b14_caseD_5;
      case MESS_SHARED_0060:
        uVar2 = (message->arg1).words.low;
        uVar3 = (message->arg1).words.high;
        local_8 = nullptr;
        local_18 = STReplaceLowWord((uint32_t)(local_18), (uint16_t)(uVar2));
        local_14 = STReplaceLowWord((uint32_t)(local_14), (uint16_t)(uVar3));
        if ((local_10->field_0067 != '\0') && (local_10->field_0069 != '\0')) {
          piVar19 = &local_10->field_0357;
          local_c = 9;
          do {
            if (piVar19[5] != 0) {
              if (((((int)(uint)uVar2 < piVar19[-1]) ||
                   (piVar19[1] + piVar19[-1] <= (int)(uint)uVar2)) || ((int)(uint)uVar3 < *piVar19))
                 || (piVar19[2] + *piVar19 <= (int)(uint)uVar3)) {
                bVar10 = false;
              }
              else {
                bVar10 = true;
              }
              piVar21 = local_8;
              if (bVar10) {
                local_8 = (int *)piVar19[5];
                piVar21 = local_8;
              }
            }
            piVar19 = piVar19 + 7;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        piVar19 = (int *)local_10->field_044F;
        if (piVar19 != piVar21) {
          if (piVar19 != nullptr) {
            local_10->field_002D = 0x4202;
            local_10->field_0031 = 0;
            local_10->field_0033 = 3;
            local_10->field_0035 = st::machine_word_boundary_cast<undefined4>(piVar19);
            /* ST_CALLSITE[005C1C06]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
            g_cursorClass_00802A30->GetMessage((STMessage *)&local_10->field_0x1d);
          }
          this_00->field_044F = st::machine_word_boundary_cast<undefined4>(piVar21);
          if (piVar21 != nullptr) {
            this_00->field_002D = 0x4201;
            this_00->field_0031 = 0;
            this_00->field_0033 = 3;
            this_00->field_0035 = st::machine_word_boundary_cast<undefined4>(piVar21);
            /* ST_CALLSITE[005C1C36]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
            g_cursorClass_00802A30->GetMessage((STMessage *)&this_00->field_0x1d);
          }
        }
      }
      goto cf_common_exit_005C22B1;
    }
    local_10->field_0049 = 1;
    if (local_10->field_0066 == '\0') {
      local_10->field_004D = 0x6108;
      /* ST_CALLSITE[005C1C54]: CALL 0x00403c38; direct=00403C38 MReportTy::sub_005C05F0 */
      st::fn_00403C38(local_10);
      goto cf_common_exit_005C22B1;
    }
    /* ST_CALLSITE[005C1C72]: CALL dword ptr [0x0085bde8] */
    st::external_00000080(st::pointer_boundary_cast<LPSTR>(&CHAR_00h_0080ed16),st::mutable_c_string("%s%s"),&CHAR_00h_00807680,&CHAR_00h_0080c52e);
    uVar16 = 0xffffffff;
    pcVar20 = &CHAR_00h_0080c52e;
    do {
      pcVar22 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar22 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar22;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    pcVar20 = pcVar22 + -uVar16;
    pcVar22 = &CHAR_00h_0080ef1e;
    memmove(pcVar22, pcVar20, uVar16); /* compiler REP MOVS byte copy */
    uVar17 = 0;
    uVar16 = 0xffffffff;
    pcVar20 = &CHAR_00h_0080ed16;
    do {
      pcVar22 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar22 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar22;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    pcVar20 = pcVar22 + -uVar16;
    pcVar22 = (char *)&DAT_0080ee1a;
    memmove(pcVar22, pcVar20, uVar16); /* compiler REP MOVS byte copy */
    STPiece<0,1>(DAT_008087a0) = 8;
    /* ST_CALLSITE[005C1CD3]: CALL 0x00404b4c; direct=00404B4C STAppC::sub_0056E9E0 */
    iVar13 = st::fn_00404B4C((STAppC *)&DAT_00807620,1);
    if (iVar13 != 0) {
      this_00->field_004D = 0x6104;
      this_00->field_0051 = 0;
      this_00->field_0055 = 2;
      /* ST_CALLSITE[005C1CF3]: CALL 0x00403c38; direct=00403C38 MReportTy::sub_005C05F0 */
      st::fn_00403C38(this_00);
      goto cf_common_exit_005C22B1;
    }
LAB_005c1d24:
    this_00->field_004D = 0x6102;
    /* ST_CALLSITE[005C1D2D]: CALL 0x00403c38; direct=00403C38 MReportTy::sub_005C05F0 */
    st::fn_00403C38(this_00);
  }
  else {
    switch(SVar5) {
    case MESS_PLAYPANELTY_6201:
      local_10->field_0045 = 0x200;
      local_10->field_0049 = 0;
      goto LAB_005c1d24;
    case MESS_PLAYPANELTY_6202:
      local_10->field_0307 = (uint)(byte)local_10->field_006A;
      local_10->field_02D7 = 0x68ff;
      local_10->field_02F7 = 0x697f;
      local_10->field_030F = 3;
      local_10->field_032B = 0x50;
      local_10->field_0333 = 200;
      local_10->field_032F = 0x1b3;
      /* ST_CALLSITE[005C1D92]: CALL dword ptr [EAX + 0x8] */
      (*local_10->field_000C->vtable->CreateObject)
                ((SystemClassTy *)local_10->field_000C,0x100ef,nullptr,nullptr,
                 st::machine_word_boundary_cast<undefined4>(&local_10->field_0x2c7),0);
      break;
    case MESS_SETTMAPTY_6203:
      if ((&local_10->field_0347)[(byte)local_10->field_006A] != nullptr) {
        local_10->field_02D7 = 0x6900;
        local_10->field_02F7 = 0x6980;
        dVar6 = (&local_10->field_0347)[(byte)local_10->field_006A]->count;
        local_10->field_0307 = local_10->field_006B;
        local_10->field_030F = dVar6;
        iVar13 = st::machine_word_boundary_cast<int>(local_10->field_030B * dVar6);
        iVar18 = iVar13 + 10;
        local_10->field_032B = 0x50;
        local_10->field_0333 = 200;
        iVar13 = 0x1ea - (iVar13 + -0x14) / 2;
        local_10->field_032F = iVar13;
        if (600 < iVar13 + iVar18) {
          local_10->field_032F = 600 - iVar18;
        }
        /* ST_CALLSITE[005C1E3E]: CALL dword ptr [EDX + 0x8] */
        (*local_10->field_000C->vtable->CreateObject)
                  ((SystemClassTy *)local_10->field_000C,0x100ef,nullptr,nullptr,
                   st::machine_word_boundary_cast<undefined4>(&local_10->field_0x2c7),0);
      }
      break;
    case MESS_MTASKTY_6212:
      if (local_10->field_0066 == '\0') {
        /* ST_CALLSITE[005C1E66]: CALL 0x00404881; direct=00404881 MReportTy::PaintBut */
        st::fn_00404881(local_10,message,(-(uint)(DAT_0080c632 != '\0') & 0x2b) + 0x232c,4,'\0',nullptr
                );
      }
      else {
        /* ST_CALLSITE[005C1E7D]: CALL 0x00404881; direct=00404881 MReportTy::PaintBut */
        st::fn_00404881(local_10,message,0x2358,4,'\0',nullptr);
      }
      break;
    case MESS_MTASKTY_6213:
      /* ST_CALLSITE[005C1E93]: CALL 0x00404881; direct=00404881 MReportTy::PaintBut */
      st::fn_00404881(local_10,message,0x24bc,4,'\0',nullptr);
    }
  }
cf_common_exit_005C22B1:
  g_currentExceptionFrame = local_5c.previous;
  iVar12 = st::fn_006E5FD0(this_00,message);
  return iVar12;
}

