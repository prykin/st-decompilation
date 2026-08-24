#include "st/generated.hpp"
// Generated translation unit: source/original/Start/sett_obj.cpp

// 005C28C0 StartSystemTy::OutBmpProc
#line 4 "decomp/ST.exe/functions/005C28C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   StartSystemTy::OutBmpProc

   [STPrototypeApplier] Propagated parameter 8.
   Evidence: 005C28C0 -> 006B48E0 @ 005C2922 */

void __thiscall
st::fn_005C28C0
          (StartSystemTy *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,
          int param_5,undefined4 param_6,undefined4 param_7,AnonPointee_MReportTy_0073 *param_8)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  if (param_8 != nullptr) {
    local_48.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_48;
    errorCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
    if (errorCode == 0) {
      st::fn_006B48E0
                (param_1,param_4,param_5,param_8,0,0,0,param_8->field_0004,param_8->field_0008,
                 PTR_008032a4,0x67,0x10000ff);
      g_currentExceptionFrame = local_48.previous;
      return;
    }
    g_currentExceptionFrame = local_48.previous;
    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x48,0,errorCode,
                               st::mutable_c_string("%s"),"StartSystemTy::OutBmpProc");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x48);
  }
  return;
}

// 005C29B0 SettMapMTy::sub_005C29B0
#line 4 "decomp/ST.exe/functions/005C29B0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Start\sett_obj.cpp
   Diagnostic line evidence: 215 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_005B6730.
   Evidence: incoming_receiver_captures=1; receiver_accesses=151; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=2; single_call_corroborated_by_receiver_family

   [STMethodOwnerApplier] Structural method owner recovered as SettMapMTy.
   Evidence: this_call_owners=[SettMapMTy]; agreed_this_calls=1; incoming_this_accesses=151;
   incoming_edx_uses=0; incoming_stack_parameter_uses=41; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_005C29B0(SettMapMTy *this,char param_1)

{
  SettMapMTy_field_1E26State SVar1;
  dword dVar2;
  StartSystemTy *pSVar3;
  CursorClassTy *this_00;
  InternalExceptionFrame *pIVar4;
  int local_EAX_44;
  cMf32 *pcVar5;
  DArrayTy *pDVar6;
  SettMapMTy_field_1F84DArray *pSVar7;
  ushort *local_EAX_481;
  SettMapMTy_field_1E2FDArray *pSVar8;
  ushort *puVar9;
  ushort *local_EAX_939;
  ushort *local_EAX_977;
  int uVar22;
  AnonPointee_SettMapMTy_1C67 *pAVar9;
  uint *puVar10;
  char *pcVar24_mg3;
  char *pcVar24_mg4;
  char *pcVar24_mg5;
  char *pcVar24_mg6;
  char *pcVar24_mg7;
  SettMapMTy_field_1F7CDArray *pSVar11;
  HANDLE hFindFile;
  int iVar5;
  cMf32 *pcVar6;
  int local_EAX_1866;
  ushort *local_EAX_1926;
  UINT resourceId;
  char *pcVar24_mg8;
  BOOL BVar12;
  int local_EAX_2693;
  ushort *puVar13;
  int local_EAX_2876;
  AnonPointee_SettMapMTy_1E1E *pAVar14;
  uint *puVar15;
  HoloTy *pHVar16;
  uint uVar20;
  uint local_EAX_4970;
  uint local_EAX_5300;
  uint local_EAX_5811;
  uint uVar17;
  DArrayTy *pDVar18;
  uint uVar19;
  uint uVar21;
  SettMapMTy_field_1F7CElement *element_1f7c;
  void *pvVar23;
  char *pcVar24;
  SettMapMTy *this_01;
  char *pcVar25;
  ushort **ppuVar26;
  char *pcVar27;
  SettMapMTy_field_1F7CElement *element_1f7c_2;
  byte bVar29;
  char cVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  undefined4 local_b18 [256];
  byte local_718 [260];
  char local_614 [260];
  uint local_510;
  _WIN32_FIND_DATAA local_50c;
  uint local_3cc [65];
  undefined4 local_2c8;
  undefined4 local_2a1;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_205;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1de;
  undefined4 local_1d1;
  undefined4 local_1cd;
  int local_1c9;
  InternalExceptionFrame local_cc;
  InternalExceptionFrame local_88;
  undefined4 local_44 [7];
  undefined4 local_28;
  undefined4 local_24;
  cMf32 *local_1c;
  SettMapMTy *local_18;
  HANDLE local_14;
  uint *local_10;
  uint local_c;
  uint local_8;

  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_18 = this;
  local_EAX_44 = st::fn_0072D7F0(local_88.jumpBuffer,0);
  this_01 = local_18;
  if (local_EAX_44 != 0) {
    g_currentExceptionFrame = local_88.previous;
    SVar1 = local_18->field_1E26;
    if ((((SVar1 == 0xd) || (SVar1 == 0xe)) || (SVar1 == CASE_F)) ||
       (uVar17 = 0x6947, SVar1 == CASE_10)) {
      uVar17 = 0x694d;
    }
    local_18->field_002D = uVar17;
    /* ST_CALLSITE[005C42BF]: CALL dword ptr [EDX] */
    local_18->GetMessage((STMessage *)&local_18->field_0x1d);
    return;
  }
  local_18->field_1E26 = param_1;
  if (((param_1 == '\x06') || (param_1 == '\x01')) || (DAT_00811750 = 1, param_1 == '\x02')) {
    DAT_00811750 = 0;
  }
  if (DAT_0080877e == '\0') {
    _DAT_0080f32e = 0;
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  /* ST_CALLSITE[005C2A74]: CALL dword ptr [0x0085bde8] */
  st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s%s%s"),&CHAR_00h_00807680,st_global_0079C0EC,
            PTR_s_STRATEGS_0079c100);
  pcVar5 = (cMf32 *)st::fn_006F0EC0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  this_01->field_1F43 = pcVar5;
  SVar1 = this_01->field_1E26;
  if (((SVar1 == 6) || (SVar1 == 1)) || (pDVar18 = PTR_0080c502, SVar1 == 2)) {
    pDVar18 = (DArrayTy *)PTR_0080c506;
  }
  if (this_01->field_1C5F < pDVar18->count) {
    if (((SVar1 == 6) || (SVar1 == 1)) || (pDVar18 = PTR_0080c502, SVar1 == 2)) {
      pDVar18 = (DArrayTy *)PTR_0080c506;
    }
    if (((SVar1 == 6) || (SVar1 == 1)) || (pDVar6 = PTR_0080c502, SVar1 == 2)) {
      pDVar6 = (DArrayTy *)PTR_0080c506;
    }
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
    pvVar23 = (void *)(pDVar6->elementSize * this_01->field_1C5F + (int)pDVar18->data);
  }
  else {
    pvVar23 = nullptr;
  }
  if (pvVar23 == nullptr) {
    DAT_0080995c = 1;
    memset(&DAT_00809960, 0, 0x20); /* compiler bulk-zero initialization */
    iVar33 = this_01->field_1C63;
    pcVar5 = this_01->field_1F43;
    pcVar24 = nullptr;
  }
  else {
    DAT_0080995c = STField<undefined4>(pvVar23,0x90);
    uVar19 = 0xffffffff;
    pcVar24 = (char *)((int)pvVar23 + 0x4c);
    do {
      pcVar25 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar25 = pcVar24 + 1;
      cVar30 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar30 != '\0');
    uVar19 = ~uVar19;
    pcVar25 = pcVar25 + -uVar19;
    pcVar27 = (char *)&DAT_00809960;
    for (uVar21 = uVar19 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
      *(undefined4 *)pcVar27 = *(undefined4 *)pcVar25;
      pcVar25 = pcVar25 + 4;
      pcVar27 = pcVar27 + 4;
    }
    pcVar24 = (char *)((int)pvVar23 + 0x70);
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *pcVar27 = *pcVar25;
      pcVar25 = pcVar25 + 1;
      pcVar27 = pcVar27 + 1;
    }
    iVar33 = this_01->field_1C63;
    pcVar5 = this_01->field_1F43;
  }
  /* ST_CALLSITE[005C2B69]: CALL 0x00402bf3; direct=00402BF3 StartSystemTy::SetObjectives */
  st::fn_00402BF3(g_startSystem_0081176C,(int)pcVar5,pcVar24,iVar33);
  pSVar7 = (SettMapMTy_field_1F84DArray *)st::fn_006AE290(nullptr,8,0x60,8);
  this_01->field_1F84 = pSVar7;
  local_EAX_481 = st::fn_0070A9F0(g_cMf32_00806780,st::mutable_c_string("LOADSINGLE"),0,1);
  g_startSystem_0081176C->field_002C = local_EAX_481;
  this_01->field_005D = st::machine_word_boundary_cast<undefined4>(g_startSystem_0081176C->field_002C);
  st::fn_006BC360(g_startSystem_0081176C->field_002C,local_b18,nullptr);
  (this_01->array_00BC[0xc].field_01DB)->field_0140 = 0x1f;
  st::fn_00718780
            ((int)local_b18,0,0x100,0x8b,0x15,
             (undefined4 *)&(this_01->array_00BC[0xc].field_01DB)->field_0x144);
  if ((DAT_008067a0 != '\0') && (g_int_00811764 != nullptr)) {
    st::fn_006B6160((char *)&this_01->array_00BC[0xc].field_0x1df,(int)(g_int_00811764 + 6));
    this_01->field_1A7F = 1;
    this_01->field_1A80 = DAT_008087c6;
    this_01->field_1A81 = (char)(DAT_008087c2 >> 1);
    /* ST_CALLSITE[005C2C58]: CALL dword ptr [0x0085bde8] */
    st::external_00000080((LPSTR)&local_28,st::mutable_c_string("%08x"),DAT_0080995c);
    this_01->field_1A82 = local_28;
    this_01->field_1A86 = local_24;
    st::fn_0072E340(&this_01->field_1A8A,&CHAR_00h_0080c3c3,0x1d5);
    this_01->field_1C5E = 0;
  }
  this_01->field_2189 = this_01->field_0008;
  this_01->field_2169 = this_01->field_0008;
  this_01->field_218D = 2;
  this_01->field_216D = 2;
  this_01->field_21AD = st::machine_word_boundary_cast<undefined4>(g_startSystem_0081176C->field_002C);
  this_01->field_21C1 = PTR_008032a8;
  this_01->field_21BD = PTR_008032a4;
  this_01->field_21B5 = 0x1f;
  this_01->field_21B9 = 1;
  this_01->field_21B1 = 0x4d;
  pSVar8 = (SettMapMTy_field_1E2FDArray *)
           st::fn_006AE290(nullptr,0xf,0x10c,5);
  this_01->field_1E2F = pSVar8;
  puVar9 = st::fn_0070A5A0(g_cMf32_00806780,6,st::mutable_c_string("MM_COMBO"),0,1);
  this_01->field_1E2B = puVar9;
  PTR_0081175c = (AnonShape_GLOBAL_0081175C_57F682DD *)
                 st::fn_00709AF0
                           (PTR_00806784,CASE_B,st::mutable_c_string("MAP_GEN"),0xffffffff,0,1,0,
                            nullptr);
  local_EAX_939 =
       st::fn_00709AF0
                 (PTR_00806784,CASE_B,st::mutable_c_string("SET_ACC"),0xffffffff,0,1,0,nullptr);
  this_01->field_1F4F = local_EAX_939;
  local_EAX_977 =
       st::fn_00709AF0
                 (PTR_00806784,CASE_B,st::mutable_c_string("SET_ALLY"),0xffffffff,0,1,0,nullptr);
  this_01->field_1F4B = local_EAX_977;
  SVar1 = this_01->field_1E26;
  if (((SVar1 == 6) || (SVar1 == CASE_7)) || (SVar1 == 0xe)) {
    this_01->field_21E3 = 1;
    iVar33 = 1;
    puVar13 = (ushort *)this_01->field_005D + 0x14;
    uVar22 = st::fn_006B4FE0((ushort *)this_01->field_005D);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pAVar9 = (AnonPointee_SettMapMTy_1C67 *)
             st::fn_006B50C0(0xf9,0x123,(uint)*(ushort *)(this_01->field_005D + 0xe),uVar22,
                          (undefined4 *)puVar13,iVar33);
    this_01->field_1C67 = pAVar9;
    uVar19 = pAVar9[1].field_0008;
    if (uVar19 == 0) {
      uVar19 = ((uint)*(ushort *)&pAVar9[1].field_0x2 * pAVar9->field_0004 + 0x1f >> 3 & 0x1ffffffc)
               * pAVar9->field_0008;
    }
    puVar10 = (undefined4 *)st::fn_006B4FA0((int *)pAVar9);
    for (uVar21 = uVar19 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
      *puVar10 = 0xffffffff;
      puVar10 = puVar10 + 1;
    }
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)puVar10 = 0xff;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,6,0xea,0x14);
    uVar19 = 2;
    iVar32 = -1;
    iVar33 = 0;
    pcVar24 = st::fn_006B0140(0x2344,g_hINSTANCE_00807618);
    st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar24,iVar33,iVar32,uVar19);
    st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,0x2e,0xea,
                     0x14);
    uVar19 = 2;
    iVar32 = -1;
    iVar33 = 0;
    pcVar24_mg3 = st::fn_006B0140(0x2345,g_hINSTANCE_00807618);
    st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar24_mg3,iVar33,iVar32,uVar19);
    st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,0x56,0xea,
                     0x14);
    uVar19 = 2;
    iVar32 = -1;
    iVar33 = 0;
    pcVar24_mg4 = st::fn_006B0140(0x2350,g_hINSTANCE_00807618);
    st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar24_mg4,iVar33,iVar32,uVar19);
    st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,0x7e,0xea,
                     0x14);
    uVar19 = 2;
    iVar32 = -1;
    iVar33 = 0;
    pcVar24_mg5 = st::fn_006B0140(0x2352,g_hINSTANCE_00807618);
    st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar24_mg5,iVar33,iVar32,uVar19);
    st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,0xa6,0xea,
                     0x14);
    uVar19 = 2;
    iVar32 = -1;
    iVar33 = 0;
    pcVar24_mg6 = st::fn_006B0140(0x2351,g_hINSTANCE_00807618);
    st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar24_mg6,iVar33,iVar32,uVar19);
    st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,0xce,0xea,
                     0x14);
    uVar19 = 2;
    iVar32 = -1;
    iVar33 = 0;
    pcVar24_mg7 = st::fn_006B0140(0x2353,g_hINSTANCE_00807618);
    st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar24_mg7,iVar33,iVar32,uVar19);
    pAVar9 = this_01->field_1C67;
    st::fn_006B2330(g_ddxContext_008075A8,&this_01->field_1F80,0x31,0x40407f,pAVar9->field_0004,
                 pAVar9->field_0008,(ushort *)pAVar9);
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,this_01->field_1F80,0xffffffff,10,0xb4);
    pSVar11 = (SettMapMTy_field_1F7CDArray *)
              st::fn_006AE290(nullptr,5,0x20c,5);
    this_01->field_1F7C = pSVar11;
    /* ST_CALLSITE[005C303D]: CALL dword ptr [0x0085bde8] */
    st::external_00000080((LPSTR)local_3cc,st::mutable_c_string("%s%s%s%s"),&CHAR_00h_00807680,st_global_0079C0EC,
              &st_global_007C72D8,st_global_0079C0F0);
    /* ST_CALLSITE[005C3054]: CALL dword ptr [0x0085bcec] */
    hFindFile = st::external_00000070((LPCSTR)local_3cc,st::pointer_boundary_cast<LPWIN32_FIND_DATAA>(&local_50c));
    local_14 = hFindFile;
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        pIVar4 = g_currentExceptionFrame;
        if (((byte)local_50c.dwFileAttributes & 0x10) == 0) {
          local_cc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_cc;
          iVar5 = st::fn_0072D7F0(local_cc.jumpBuffer,0);
          this_01 = local_18;
          hFindFile = local_14;
          pIVar4 = local_cc.previous;
          if (iVar5 == 0) {
            /* ST_CALLSITE[005C30CA]: CALL dword ptr [0x0085bde8] */
            st::external_00000080((LPSTR)local_3cc,st::mutable_c_string("%s%s%s"),&CHAR_00h_00807680,st_global_0079C0EC,
                      local_50c.cFileName);
            pcVar6 = (cMf32 *)st::fn_006F0EC0(0x345,(byte *)local_3cc,0,0,0);
            local_1c = pcVar6;
            local_EAX_1866 = st::fn_006F24A0(pcVar6,0xc,st::mutable_c_string("TEXTURE_DSCR"),0);
            this_01 = local_18;
            if (-1 < local_EAX_1866) {
              local_c = 0;
              if (local_EAX_1866 == 4) {
                local_10 = &local_c;
              }
              else {
                local_10 = local_3cc;
              }
              local_EAX_1926 = st::fn_006F1CE0(pcVar6,0xc,st::mutable_c_string("TEXTURE_DSCR"),(int *)&local_10,0);
              if (local_EAX_1926 != nullptr) {
                st::fn_0072E730
                          ((byte *)local_50c.cFileName,nullptr,nullptr,local_718,nullptr
                          );
                switch(local_c & 0xff) {
                case 0:
                  resourceId = 0x4a42;
                  break;
                case 1:
                  resourceId = 0x4a43;
                  break;
                case 2:
                  resourceId = 0x4a44;
                  break;
                case 3:
                  resourceId = 0x4a45;
                  break;
                default:
                  resourceId = 0x4a46;
                }
                pcVar24_mg8 = st::fn_006B0140(resourceId,g_hINSTANCE_00807618);
                uVar19 = 0xffffffff;
                do {
                  pcVar24 = pcVar24_mg8;
                  if (uVar19 == 0) break;
                  uVar19 = uVar19 - 1;
                  pcVar24 = pcVar24_mg8 + 1;
                  cVar30 = *pcVar24_mg8;
                  pcVar24_mg8 = pcVar24;
                } while (cVar30 != '\0');
                uVar19 = ~uVar19;
                pcVar24 = pcVar24 + -uVar19;
                pcVar25 = local_614;
                for (uVar21 = uVar19 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                  *(undefined4 *)pcVar25 = *(undefined4 *)pcVar24;
                  pcVar24 = pcVar24 + 4;
                  pcVar25 = pcVar25 + 4;
                }
                pSVar11 = this_01->field_1F7C;
                for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                  *pcVar25 = *pcVar24;
                  pcVar24 = pcVar24 + 1;
                  pcVar25 = pcVar25 + 1;
                }
                local_510 = local_c;
                st::fn_006AE1C0((DArrayTy *)pSVar11,local_718);
                pcVar6 = local_1c;
              }
            }
            st::fn_006F1170(pcVar6);
            hFindFile = local_14;
            pIVar4 = local_cc.previous;
          }
        }
        g_currentExceptionFrame = pIVar4;
        /* ST_CALLSITE[005C3216]: CALL dword ptr [0x0085bcf0] */
        BVar12 = st::external_00000071(hFindFile,st::pointer_boundary_cast<LPWIN32_FIND_DATAA>(&local_50c));
      } while (BVar12 != 0);
    }
    if (hFindFile != (HANDLE)0xffffffff) {
      /* ST_CALLSITE[005C322A]: CALL dword ptr [0x0085bcf4] */
      st::external_00000072(hFindFile);
    }
    dVar2 = this_01->field_1F7C->count;
    if (1 < (int)dVar2) {
      pcVar5 = (cMf32 *)(dVar2 - 1);
      local_1c = pcVar5;
      do {
        local_10 = nullptr;
        uVar19 = 0;
        if (0 < (int)pcVar5) {
          do {
            pSVar11 = this_01->field_1F7C;
            if (uVar19 < pSVar11->count) {
              element_1f7c_2 = DArrayAt<SettMapMTy_field_1F7CElement>(pSVar11, uVar19);
            }
            else {
              element_1f7c_2 = nullptr;
            }
            uVar21 = uVar19 + 1;
            if (uVar21 < pSVar11->count) {
              element_1f7c = DArrayAt<SettMapMTy_field_1F7CElement>(pSVar11, uVar21);
            }
            else {
              element_1f7c = nullptr;
            }
            if (element_1f7c->field_0208 < element_1f7c_2->field_0208) {
              st::fn_006B0CD0((AnonShape_00413AF0_B6B4EE9A *)pSVar11,uVar19,uVar21);
              local_10 = (uint *)0x1;
            }
            pcVar5 = local_1c;
            uVar19 = uVar21;
          } while ((int)uVar21 < (int)local_1c);
        }
      } while (local_10 != nullptr);
    }
    if (this_01->field_1F7C->count == 0) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0xd7);
    }
    if ((int)(this_01->field_1F7C->count - 1) < *(int *)&this_01->field_0x1f58) {
      *(undefined4 *)&this_01->field_0x1f58 = 0;
    }
  }
  SVar1 = this_01->field_1E26;
  this_01->field_21E1 = 1;
  this_01->field_21E5 = 1;
  if ((((SVar1 == 0xd) || (SVar1 == CASE_F)) || ((SVar1 == 0xe || (SVar1 == CASE_10)))) &&
     (this_01->field_1E27 == 0x11)) {
    this_01->field_21E4 = 1;
    this_01->field_21E6 = 1;
    if (SVar1 != 0xe) {
      this_01->field_21E2 = 1;
    }
  }
  st::fn_007158A0
            ((SpriteClassTy *)&this_01->field_1C6B,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_CALLSITE[005C3362]: CALL dword ptr [EDX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1C6B + 4))(PTR_00806784,7,0,"MM_SLDUP",0xffffffff);
  this_01->field_1C87 = 0x2fa;
  this_01->field_1C8B = 0x3b;
  this_01->field_1C73 = 0;
  st::fn_007158A0
            ((SpriteClassTy *)&this_01->field_1CFC,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_CALLSITE[005C33B7]: CALL dword ptr [EDX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1CFC + 4))(PTR_00806784,7,0,"MM_SLDDN",0xffffffff);
  this_01->field_1D18 = 0x2fa;
  this_01->field_1D1C = 0x11e;
  this_01->field_1D04 = 0;
  st::fn_007158A0
            ((SpriteClassTy *)&this_01->field_1D8D,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_CALLSITE[005C3401]: CALL dword ptr [EDX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1D8D + 4))(PTR_00806784,7,0,"MM_SLDT",0xffffffff);
  this_01->field_1DA9 = 0x2ff;
  this_01->field_1DAD = 0x5b;
  this_01->field_1D95 = 0;
  local_c = 0x41;
  ppuVar26 = &this_01->field_20F4;
  do {
    iVar33 = 1;
    puVar13 = (ushort *)this_01->field_005D + 0x14;
    local_EAX_2693 = st::fn_006B4FE0((ushort *)this_01->field_005D);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    puVar13 = (ushort *)
              st::fn_006B50C0(0x1e5,0x14,(uint)*(ushort *)(this_01->field_005D + 0xe),local_EAX_2693,
                           (undefined4 *)puVar13,iVar33);
    *ppuVar26 = puVar13;
    local_14 = *(HANDLE *)(puVar13 + 10);
    if (local_14 == (HANDLE)0x0) {
      local_14 = (HANDLE)(((uint)puVar13[7] * *(int *)(puVar13 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                         *(int *)(puVar13 + 4));
    }
    puVar10 = (undefined4 *)st::fn_006B4FA0((int *)puVar13);
    for (uVar19 = (uint)local_14 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
      *puVar10 = 0xffffffff;
      puVar10 = puVar10 + 1;
    }
    for (uVar19 = (uint)local_14 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)puVar10 = 0xff;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    puVar13 = *ppuVar26;
    st::fn_006B2330(g_ddxContext_008075A8,(uint *)(ppuVar26 + -10),0x31,0x40407f,*(uint *)(puVar13 + 2)
                 ,*(uint *)(puVar13 + 4),puVar13);
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,(uint)ppuVar26[-10],0xffffffff,0x113,local_c);
    ppuVar26 = ppuVar26 + 1;
    local_c = local_c + 0x19;
  } while ((int)local_c < 0x13b);
  iVar33 = 1;
  puVar13 = (ushort *)this_01->field_005D + 0x14;
  local_EAX_2876 = st::fn_006B4FE0((ushort *)this_01->field_005D);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pAVar14 = (AnonPointee_SettMapMTy_1E1E *)
            st::fn_006B50C0(0x205,0x8c,(uint)*(ushort *)(this_01->field_005D + 0xe),local_EAX_2876,
                         (undefined4 *)puVar13,iVar33);
  this_01->field_1E1E = pAVar14;
  uVar19 = pAVar14[1].field_0008;
  if (uVar19 == 0) {
    uVar19 = ((uint)*(ushort *)&pAVar14[1].field_0x2 * pAVar14->field_0004 + 0x1f >> 3 & 0x1ffffffc)
             * pAVar14->field_0008;
  }
  puVar10 = (undefined4 *)st::fn_006B4FA0((int *)pAVar14);
  for (uVar21 = uVar19 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
    *puVar10 = 0xffffffff;
    puVar10 = puVar10 + 1;
  }
  for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    *(undefined1 *)puVar10 = 0xff;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  SVar1 = this_01->field_1E26;
  if ((((SVar1 == 6) || (SVar1 == 1)) ||
      ((SVar1 == CASE_4 || (((SVar1 == CASE_7 || (SVar1 == 0xd)) || (SVar1 == 0xe)))))) &&
     ((this_01->field_1E27 != 0x13 || ((DAT_00803400 != '\x14' && (DAT_00803400 != '\x15')))))) {
    st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,8,5,0xa5,0x14);
    uVar19 = 2;
    iVar31 = -1;
    iVar32 = -3;
    iVar33 = 0xa5;
    pcVar24 = &CHAR_00h_008016a0;
    puVar15 = (uint *)st::fn_006B0140(0x256d,g_hINSTANCE_00807618);
    pcVar24 = (char *)st::fn_0040326F(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                         iVar33);
    st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  }
  st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,8,0x1b,0xa5,0x14);
  uVar19 = 2;
  iVar31 = -1;
  iVar32 = -3;
  iVar33 = 0xa5;
  pcVar24 = &CHAR_00h_008016a0;
  puVar15 = (uint *)st::fn_006B0140(0x1f4b,g_hINSTANCE_00807618);
  pcVar24 = (char *)st::fn_0040326F(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                       iVar33);
  st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x104,0x1b,0xa5,
                   0x14);
  uVar19 = 2;
  iVar31 = -1;
  iVar32 = -3;
  iVar33 = 0xa5;
  pcVar24 = &CHAR_00h_008016a0;
  puVar15 = (uint *)st::fn_006B0140(0x1f4c,g_hINSTANCE_00807618);
  pcVar24 = (char *)st::fn_0040326F(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                       iVar33);
  st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,8,0x31,0xa5,0x14);
  uVar19 = 2;
  iVar31 = -1;
  iVar32 = -3;
  iVar33 = 0xa5;
  pcVar24 = &CHAR_00h_008016a0;
  puVar15 = (uint *)st::fn_006B0140(0x1f4d,g_hINSTANCE_00807618);
  pcVar24 = (char *)st::fn_0040326F(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                       iVar33);
  st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x104,0x31,0xa5,
                   0x14);
  uVar19 = 2;
  iVar31 = -1;
  iVar32 = -3;
  iVar33 = 0xa5;
  pcVar24 = &CHAR_00h_008016a0;
  puVar15 = (uint *)st::fn_006B0140(0x1f4e,g_hINSTANCE_00807618);
  pcVar24 = (char *)st::fn_0040326F(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                       iVar33);
  st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,8,0x47,0xa5,0x14);
  uVar19 = 2;
  iVar31 = -1;
  iVar32 = -3;
  iVar33 = 0xa5;
  pcVar24 = &CHAR_00h_008016a0;
  puVar15 = (uint *)st::fn_006B0140(0x1f4f,g_hINSTANCE_00807618);
  pcVar24 = (char *)st::fn_0040326F(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                       iVar33);
  st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x104,0x47,0xa5,
                   0x14);
  uVar19 = 2;
  iVar31 = -1;
  iVar32 = -3;
  iVar33 = 0xa5;
  pcVar24 = &CHAR_00h_008016a0;
  puVar15 = (uint *)st::fn_006B0140(0x1f56,g_hINSTANCE_00807618);
  pcVar24 = (char *)st::fn_0040326F(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                       iVar33);
  st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,10,0x5d,100,0x14);
  uVar19 = 2;
  iVar31 = -1;
  iVar32 = -3;
  iVar33 = 100;
  pcVar24 = &CHAR_00h_008016a0;
  puVar15 = (uint *)st::fn_006B0140(0x1f51,g_hINSTANCE_00807618);
  pcVar24 = (char *)st::fn_0040326F(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                       iVar33);
  st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x96,0x5d,0x82,0x14
                  );
  uVar19 = 2;
  iVar31 = -1;
  iVar32 = -3;
  iVar33 = 0x82;
  pcVar24 = &CHAR_00h_008016a0;
  puVar15 = (uint *)st::fn_006B0140(0x1f58,g_hINSTANCE_00807618);
  pcVar24 = (char *)st::fn_0040326F(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                       iVar33);
  st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x140,0x5d,0xa0,
                   0x14);
  uVar19 = 2;
  iVar31 = -1;
  iVar32 = -3;
  iVar33 = 0xa0;
  pcVar24 = &CHAR_00h_008016a0;
  puVar15 = (uint *)st::fn_006B0140(0x1f50,g_hINSTANCE_00807618);
  pcVar24 = (char *)st::fn_0040326F(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                       iVar33);
  st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  SVar1 = this_01->field_1E26;
  if (((SVar1 != 6) && (SVar1 != 1)) && (SVar1 != 2)) {
    st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,8,0x73,0xe1,0x14);
    uVar19 = 2;
    iVar31 = -1;
    iVar32 = -3;
    iVar33 = 0xe1;
    pcVar24 = &CHAR_00h_008016a0;
    puVar15 = (uint *)st::fn_006B0140(0x1f54,g_hINSTANCE_00807618);
    pcVar24 = (char *)st::fn_0040326F(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                         iVar33);
    st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
    st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x104,0x73,0xdc,
                     0x14);
    uVar19 = 2;
    iVar31 = -1;
    iVar32 = -3;
    iVar33 = 0xe1;
    pcVar24 = &CHAR_00h_008016a0;
    puVar15 = (uint *)st::fn_006B0140(0x1f53,g_hINSTANCE_00807618);
    pcVar24 = (char *)st::fn_0040326F(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                         iVar33);
    st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  }
  pAVar14 = this_01->field_1E1E;
  puVar15 = &this_01->field_1E22;
  st::fn_006B2330(g_ddxContext_008075A8,puVar15,0x31,0x40407f,pAVar14->field_0004,pAVar14->field_0008,
               (ushort *)pAVar14);
  st::fn_006B3640((int *)g_ddxContext_008075A8,*puVar15,0xffffffff,0x112,0x149);
  /* ST_CALLSITE[005C3A99]: CALL dword ptr [EAX + 0x18] */
  this_01->CreateCtrls('\x01');
  if (this_01->field_21E2 != '\0') {
    st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0xf9,0x121,
                 (ushort *)&(this_01->array_00BC[0xc].field_01DB)->field_0140);
    st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,10,0xb4);
    pHVar16 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar16 == nullptr) {
      pHVar16 = nullptr;
    }
    else {
      pHVar16->field_0002 = 1;
      pHVar16->field_0000 = 0;
      *(undefined4 *)&pHVar16->field_0x3 = 0xffffffff;
      pHVar16->field_0001 = CASE_2;
      pHVar16->field_0007 = nullptr;
      pHVar16->field_000B = nullptr;
      pHVar16->field_000F = 0;
      *(undefined4 *)&pHVar16->field_0x1b = 1;
      pHVar16->field_0013 = 1;
      pHVar16->field_0017 = -1;
      pHVar16->field_0027 = 0;
      pHVar16->field_0023 = 0;
      pHVar16->field_002F = 1;
      pHVar16->field_002B = 1;
    }
    this_01->field_21EC = pHVar16;
    if (pHVar16 != nullptr) {
      uVar19 = 0;
      cVar30 = '\x01';
      bVar29 = 0x10;
      iVar32 = 1;
      iVar33 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
      /* ST_CALLSITE[005C3B77]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      uVar20 = st::fn_0040459D(this_01->field_21EC,CASE_4,10,0xb4,iVar33,iVar32,bVar29,cVar30,uVar19);
      if (uVar20 != 0) {
        pHVar16 = this_01->field_21EC;
        pHVar16->field_0002 = 1;
        pHVar16->field_0017 = pHVar16->field_0013;
        uVar19 = *(uint *)&this_01->field_21EC->field_0x3;
        if (-1 < (int)uVar19) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar19);
        }
        if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
          st::fn_006B3AF0((int *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391);
        }
        if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
          st::fn_006B3AF0((int *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422);
        }
        if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
          st::fn_006B3AF0((int *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3);
        }
        st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
      }
    }
    if (local_8 != 0xffffffff) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
  }
  if (this_01->field_21E5 == '\0') {
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar15);
  }
  else {
    st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x403099,0x205,0x8c,
                 (ushort *)&(this_01->array_00BC[0xc].field_01DB)->field_0140);
    st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x112,0x149);
    pHVar16 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar16 == nullptr) {
      pHVar16 = nullptr;
    }
    else {
      pHVar16->field_0002 = 1;
      pHVar16->field_0000 = 0;
      *(undefined4 *)&pHVar16->field_0x3 = 0xffffffff;
      pHVar16->field_0001 = CASE_2;
      pHVar16->field_0007 = nullptr;
      pHVar16->field_000B = nullptr;
      pHVar16->field_000F = 0;
      *(undefined4 *)&pHVar16->field_0x1b = 1;
      pHVar16->field_0013 = 1;
      pHVar16->field_0017 = -1;
      pHVar16->field_0027 = 0;
      pHVar16->field_0023 = 0;
      pHVar16->field_002F = 1;
      pHVar16->field_002B = 1;
    }
    this_01->field_21F4 = pHVar16;
    if (pHVar16 != nullptr) {
      uVar19 = 0;
      cVar30 = '\x01';
      bVar29 = 0x10;
      iVar32 = 1;
      iVar33 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x112,0x149,0x205,0x8c);
      /* ST_CALLSITE[005C3D1A]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_4970 =
           st::fn_0040459D(this_01->field_21F4,CASE_2,0x112,0x149,iVar33,iVar32,bVar29,cVar30,uVar19);
      if (local_EAX_4970 != 0) {
        pHVar16 = this_01->field_21F4;
        pHVar16->field_0002 = 1;
        pHVar16->field_0017 = pHVar16->field_0013;
        uVar19 = *(uint *)&this_01->field_21F4->field_0x3;
        if (-1 < (int)uVar19) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar19);
        }
        st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar15);
      }
    }
    if (local_8 != 0xffffffff) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
  }
  if (this_01->field_21E1 == '\0') {
    if (this_01->field_1C6F != 0xffffffff) {
      st::fn_006B3AF0((int *)this_01->field_1CB3,this_01->field_1C6F);
    }
    if (this_01->field_1D00 != 0xffffffff) {
      st::fn_006B3AF0((int *)this_01->field_1D44,this_01->field_1D00);
    }
    if (this_01->field_1D91 != 0xffffffff) {
      st::fn_006B3AF0((int *)this_01->field_1DD5,this_01->field_1D91);
    }
    puVar15 = this_01->field_20CC;
    iVar33 = 10;
    do {
      st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar15);
      puVar15 = puVar15 + 1;
      iVar33 = iVar33 + -1;
    } while (iVar33 != 0);
  }
  else {
    st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0x205,0x104,
                 (ushort *)&(this_01->array_00BC[0xc].field_01DB)->field_0140);
    st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x112,0x38);
    pHVar16 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar16 == nullptr) {
      pHVar16 = nullptr;
    }
    else {
      pHVar16->field_0002 = 1;
      pHVar16->field_0000 = 0;
      *(undefined4 *)&pHVar16->field_0x3 = 0xffffffff;
      pHVar16->field_0001 = CASE_2;
      pHVar16->field_0007 = nullptr;
      pHVar16->field_000B = nullptr;
      pHVar16->field_000F = 0;
      *(undefined4 *)&pHVar16->field_0x1b = 1;
      pHVar16->field_0013 = 1;
      pHVar16->field_0017 = -1;
      pHVar16->field_0027 = 0;
      pHVar16->field_0023 = 0;
      pHVar16->field_002F = 1;
      pHVar16->field_002B = 1;
    }
    this_01->field_21E8 = pHVar16;
    if (pHVar16 != nullptr) {
      uVar19 = 0;
      cVar30 = '\x01';
      bVar29 = 0x10;
      iVar32 = 1;
      iVar33 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x112,0x38,0x205,0x104);
      /* ST_CALLSITE[005C3E64]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_5300 =
           st::fn_0040459D(this_01->field_21E8,CASE_2,0x112,0x38,iVar33,iVar32,bVar29,cVar30,uVar19);
      if (local_EAX_5300 != 0) {
        pHVar16 = this_01->field_21E8;
        pHVar16->field_0002 = 1;
        pHVar16->field_0017 = pHVar16->field_0013;
        uVar19 = *(uint *)&this_01->field_21E8->field_0x3;
        if (-1 < (int)uVar19) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar19);
        }
        if (this_01->field_1C6F != 0xffffffff) {
          st::fn_006B3AF0((int *)this_01->field_1CB3,this_01->field_1C6F);
        }
        if (this_01->field_1D00 != 0xffffffff) {
          st::fn_006B3AF0((int *)this_01->field_1D44,this_01->field_1D00);
        }
        if (this_01->field_1D91 != 0xffffffff) {
          st::fn_006B3AF0((int *)this_01->field_1DD5,this_01->field_1D91);
        }
        puVar15 = this_01->field_20CC;
        iVar33 = 10;
        do {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar15);
          puVar15 = puVar15 + 1;
          iVar33 = iVar33 + -1;
        } while (iVar33 != 0);
      }
    }
    if (local_8 != 0xffffffff) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
  }
  if (this_01->field_21E3 != '\0') {
    st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x403099,0xf9,0x123,
                 (ushort *)&(this_01->array_00BC[0xc].field_01DB)->field_0140);
    st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,10,0xb4);
    pHVar16 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar16 == nullptr) {
      pHVar16 = nullptr;
    }
    else {
      pHVar16->field_0002 = 1;
      pHVar16->field_0000 = 0;
      *(undefined4 *)&pHVar16->field_0x3 = 0xffffffff;
      pHVar16->field_0001 = CASE_2;
      pHVar16->field_0007 = nullptr;
      pHVar16->field_000B = nullptr;
      pHVar16->field_000F = 0;
      *(undefined4 *)&pHVar16->field_0x1b = 1;
      pHVar16->field_0013 = 1;
      pHVar16->field_0017 = -1;
      pHVar16->field_0027 = 0;
      pHVar16->field_0023 = 0;
      pHVar16->field_002F = 1;
      pHVar16->field_002B = 1;
    }
    this_01->field_21F0 = pHVar16;
    if (pHVar16 != nullptr) {
      uVar19 = 0;
      cVar30 = '\x01';
      bVar29 = 0x10;
      iVar32 = 1;
      iVar33 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x123);
      /* ST_CALLSITE[005C4063]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_5811 =
           st::fn_0040459D(this_01->field_21F0,CASE_4,10,0xb4,iVar33,iVar32,bVar29,cVar30,uVar19);
      if (local_EAX_5811 != 0) {
        pHVar16 = this_01->field_21F0;
        pHVar16->field_0002 = 1;
        pHVar16->field_0017 = pHVar16->field_0013;
        uVar19 = *(uint *)&this_01->field_21F0->field_0x3;
        if (-1 < (int)uVar19) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar19);
        }
        st::fn_006B3AF0((int *)g_ddxContext_008075A8,this_01->field_1F80);
      }
    }
    if (local_8 != 0xffffffff) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
  }
  puVar10 = &local_2c8;
  memset(puVar10, 0, 0x1fb); /* compiler bulk-zero initialization */
  puVar10 = (undefined4 *)((byte *)puVar10 + 0x1f8);
  iVar33 = 0;
  uVar17 = this_01->field_0008;
  SVar1 = this_01->field_1E26;
  local_205 = 0x2340;
  local_1f4 = 2;
  local_1f0 = 0x6943;
  local_1de = 0x24bc;
  local_1cd = 2;
  if ((((SVar1 == 0xd) || (SVar1 == 0xe)) || (SVar1 == CASE_10)) || (SVar1 == CASE_F)) {
    local_1c9 = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
  }
  else {
    local_1c9 = 0x6947;
  }
  if (DAT_0080877e != '\0') {
    local_2a1 = 0x2343;
    local_290 = 2;
    local_28c = 0x694a;
    local_294 = uVar17;
  }
  pSVar3 = this_01->array_00BC[0xc].field_01DB;
  local_1f8 = uVar17;
  local_1d1 = uVar17;
  if (pSVar3->field_02E6 != nullptr) {
    puVar10 = local_44;
    for (iVar33 = 6; iVar33 != 0; iVar33 = iVar33 + -1) {
      *puVar10 = 0xffffffff;
      puVar10 = puVar10 + 1;
    }
    *(undefined2 *)puVar10 = 0xffff;
    /* ST_CALLSITE[005C419D]: CALL 0x00405191; direct=00405191 MMsgTy::ShowSprites */
    st::fn_00405191(pSVar3->field_02E6);
    (this_01->array_00BC[0xc].field_01DB)->field_02E6->field_1CAB = this_01->field_0008;
    /* ST_CALLSITE[005C41CD]: CALL 0x00401717; direct=00401717 MMsgTy::SetPanel */
    st::fn_00401717((this_01->array_00BC[0xc].field_01DB)->field_02E6,0,(int)&local_2c8,0,0);
    /* ST_CALLSITE[005C41E2]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
    st::fn_00404B51((this_01->array_00BC[0xc].field_01DB)->field_02E6,(int)local_44);
  }
  /* ST_CALLSITE[005C41EB]: CALL 0x004049d5; direct=004049D5 SettMapTy::PaintSettMap */
  st::fn_004049D5((SettMapTy *)this_01,'\x01');
  this_00 = g_cursorClass_00802A30;
  if (g_cursorClass_00802A30 != nullptr) {
    iVar33 = g_cursorClass_00802A30->field_00C9;
    iVar32 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = CASE_1;
    this_00->field_0494 = 0xffff;
    /* ST_CALLSITE[005C421B]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
    st::fn_0040507E(this_00,CASE_0,iVar32,iVar33);
    /* ST_CALLSITE[005C4230]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  this_01->field_0065 = 3;
  st::fn_00404BF1(this_01,0xb,'\0',-1);
  if (DAT_008067a0 != '\0') {
    /* ST_CALLSITE[005C426D]: CALL dword ptr [0x0085c070] */
    st::external_0000010A
              ((CFsgsConnection *)&DAT_00802a90,4,(char *)&this_01->array_00BC[0xc].field_0x1df);
  }
  g_currentExceptionFrame = local_88.previous;
  return;
}

// 005C4930 SettMapTy::DoneSettMap
#line 4 "decomp/ST.exe/functions/005C4930/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::DoneSettMap */

void __thiscall st::fn_005C4930(SettMapTy *this)

{
  MMsgTy *this_00;
  SettMapTy *pSVar2;
  int iVar3;
  void *pvVar3;
  int iVar5;
  DArrayTy *pDVar4;
  int iVar6;
  uint uVar7;
  void **slotStorage;
  bool bVar8;
  InternalExceptionFrame local_4c;
  SettMapTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    /* ST_CALLSITE[005C496B]: CALL 0x0040458e; direct=0040458E MMObjTy::DoneMMObj */
    st::fn_0040458E((MMObjTy *)local_8);
    if (pSVar2->field_1F3F != nullptr) {
      st::fn_006F1170(pSVar2->field_1F3F);
    }
    pSVar2->field_1F3F = nullptr;
    if (pSVar2->field_1F43 != nullptr) {
      st::fn_006F1170(pSVar2->field_1F43);
    }
    pSVar2->field_1F43 = nullptr;
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    iVar6 = pSVar2->field_004D;
    if (((iVar6 != 0x611f) && (iVar6 != 0x6109)) && (iVar6 != 0x6105)) {
      /* ST_CALLSITE[005C49F6]: CALL 0x00401d43; direct=00401D43 DarkScreen */
      st::fn_00401D43(g_dDXContext_0080759C,10,2);
    }
    if (pSVar2->field_21EC != nullptr) {
      /* ST_CALLSITE[005C4A08]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(pSVar2->field_21EC);
      st::fn_0072E2B0(pSVar2->field_21EC);
      pSVar2->field_21EC = nullptr;
    }
    if (pSVar2->field_21E2 != '\0') {
      if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
        st::fn_006B3AF0((int *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391);
      }
      if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
        st::fn_006B3AF0((int *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422);
      }
      if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
        st::fn_006B3AF0((int *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3);
      }
      if (-1 < (int)g_startSystem_0081176C->field_0540) {
        st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
      }
    }
    if (pSVar2->field_21F4 != nullptr) {
      /* ST_CALLSITE[005C4AAD]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(pSVar2->field_21F4);
      st::fn_0072E2B0(pSVar2->field_21F4);
      pSVar2->field_21F4 = nullptr;
    }
    if (pSVar2->field_21E8 != nullptr) {
      /* ST_CALLSITE[005C4AD1]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(pSVar2->field_21E8);
      st::fn_0072E2B0(pSVar2->field_21E8);
      pSVar2->field_21E8 = nullptr;
    }
    if (pSVar2->field_21F0 != nullptr) {
      /* ST_CALLSITE[005C4AF5]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(pSVar2->field_21F0);
      st::fn_0072E2B0(pSVar2->field_21F0);
      pSVar2->field_21F0 = nullptr;
    }
    if (pSVar2->field_21F8 != nullptr) {
      /* ST_CALLSITE[005C4B19]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(pSVar2->field_21F8);
      st::fn_0072E2B0(pSVar2->field_21F8);
      pSVar2->field_21F8 = nullptr;
    }
    if (g_startSystem_0081176C->field_002C != nullptr) {
      st::fn_006F20E0(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }
    if (pSVar2->field_1E2B != nullptr) {
      st::fn_006F20E0(g_cMf32_00806780,(uint *)&pSVar2->field_1E2B);
    }
    if (pSVar2->field_1C67 != 0) {
      st::fn_006AB060(&pSVar2->field_1C67);
    }
    PTR_0081175c = nullptr;
    if (pSVar2->field_1F7C != nullptr) {
      st::fn_006AE110(pSVar2->field_1F7C);
    }
    pDVar4 = pSVar2->field_1F84;
    pSVar2->field_1F7C = nullptr;
    if (pDVar4 != nullptr) {
      uVar7 = 0;
      if (0 < (int)pDVar4->count) {
        bVar8 = pDVar4->count != 0;
        do {
          if (bVar8) {
            pvVar3 = DArrayAt<void>(pDVar4, uVar7);
          }
          else {
            pvVar3 = nullptr;
          }
          if ((pvVar3 != nullptr) && (STField<DArrayTy *>(pvVar3,0x50) != nullptr)) {
            st::fn_006AE110(STField<DArrayTy *>(pvVar3,0x50));
          }
          pDVar4 = pSVar2->field_1F84;
          uVar7 = uVar7 + 1;
          bVar8 = uVar7 < pDVar4->count;
        } while ((int)uVar7 < (int)pDVar4->count);
      }
      st::fn_006AE110(pSVar2->field_1F84);
      pSVar2->field_1F84 = nullptr;
    }
    if (pSVar2->field_1E2F != nullptr) {
      st::fn_006AE110(pSVar2->field_1E2F);
    }
    pSVar2->field_1E2F = nullptr;
    st::fn_00715AB0((SpriteClassTy *)&pSVar2->field_0x1c6b);
    st::fn_00715AB0((SpriteClassTy *)&pSVar2->field_0x1cfc);
    st::fn_00715AB0((SpriteClassTy *)&pSVar2->field_0x1d8d);
    slotStorage = pSVar2->field_20F4;
    iVar6 = 10;
    do {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,(uint)slotStorage[-10]);
      if (*slotStorage != nullptr) {
        st::fn_006AB060(slotStorage);
      }
      slotStorage = slotStorage + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (pSVar2->field_1E1E != 0) {
      st::fn_006AB060(&pSVar2->field_1E1E);
    }
    st::fn_006B3BB0((int *)g_ddxContext_008075A8,pSVar2->field_1E22);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((pSVar2->field_21E7 != '\0') &&
       (this_00 = *(MMsgTy **)(pSVar2->array_00BC[0xc].field_01DB + 0x2e6), this_00 != nullptr
       )) {
      /* ST_CALLSITE[005C4C99]: CALL 0x0040462e; direct=0040462E MMsgTy::HideSprites */
      st::fn_0040462E(this_00);
      *(undefined4 *)(*(int *)(pSVar2->array_00BC[0xc].field_01DB + 0x2e6) + 0x1cab) = 0;
    }
    if (pSVar2->field_004D != 0) {
      st::fn_006E3B50((AppClassTy *)&DAT_00807620,(undefined4 *)&pSVar2->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x1ce,0,iVar3,st::mutable_c_string("%s"),
                             "SettMapTy::DoneSettMap");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x1ce);
  return;
}

// 005C4E20 SettMapTy::PaintSettMap
#line 4 "decomp/ST.exe/functions/005C4E20/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::PaintSettMap

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005C4E20(SettMapTy *this,char param_1)

{
  SettMapTy_field_1E26State SVar1;
  SettMapTy *pSVar3;
  int errorCode;
  char *resourceString;
  int iVar4;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  ChatGlassTy *extraout_ECX;
  MMMObjTy *pMVar5;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  ChatGlassTy *extraout_ECX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  ChatGlassTy *extraout_ECX_01;
  ChatGlassTy *pCVar6;
  StartServTy *this_00;
  uint uVar7;
  uint uVar8;
  ccFntTy *pcVar9;
  uint uVar10;
  InternalExceptionFrame local_4c;
  SettMapTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
    pSVar3 = local_8;
    /* ST_CALLSITE[005C4E7C]: CALL 0x00403738; direct=00403738 PutDDX */
    st::fn_00403738(0,0,'\x01',(BITMAPINFO *)local_8->field_005D);
    SVar1 = pSVar3->field_1E26;
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    pCVar6 = extraout_ECX;
    if (((SVar1 == CASE_6) || (SVar1 == CASE_7)) || (SVar1 == CASE_E)) {
      if ((pSVar3->field_21F0 == nullptr) && (param_1 == '\0')) {
        /* ST_CALLSITE[005C4F1B]: CALL 0x00403099; direct=00403099 MMMObjTy::OutRGlProc */
        st::fn_00403099
                  ((MMMObjTy *)g_dDXContext_0080759C,(int)g_dDXContext_0080759C,nullptr,
                   nullptr,10,0xb4,0xf9,0x123,
                   (undefined4 *)(pSVar3->array_00BC[0xc].field_01DB + 0x140));
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        pCVar6 = extraout_ECX_01;
      }
    }
    else if (((pSVar3->field_21EC == nullptr) && (param_1 == '\0')) ||
            ((param_1 != '\0' && (pSVar3->field_21E2 == '\0')))) {
      pMVar5 = pSVar3->array_00BC[0xc].field_01DB + 0x140;
      /* ST_CALLSITE[005C4EDE]: CALL 0x004042d2; direct=004042D2 MMMObjTy::OutBSlProc */
      st::fn_004042D2
                (pMVar5,g_dDXContext_0080759C,nullptr,nullptr,10,0xb4,0xf9,0x121,
                 (undefined4 *)pMVar5);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      pCVar6 = extraout_ECX_00;
    }
    SVar1 = pSVar3->field_1E26;
    if ((((SVar1 != CASE_6) && (SVar1 != CASE_1)) && (SVar1 != CASE_2)) &&
       (((pSVar3->field_21F8 == nullptr && (param_1 == '\0')) ||
        ((param_1 != '\0' && (pSVar3->field_21E6 == '\0')))))) {
      /* ST_CALLSITE[005C4F76]: CALL 0x00403b61; direct=00403B61 ChatGlassTy::OutChGlProc */
      st::fn_00403B61
                (pCVar6,(AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,0,0,200,0x1f1,
                 400,0x62,(undefined4 *)(pSVar3->array_00BC[0xc].field_01DB + 0x140));
    }
    if ((pSVar3->field_21E8 == nullptr) && (param_1 == '\0')) {
      pMVar5 = pSVar3->array_00BC[0xc].field_01DB + 0x140;
      /* ST_CALLSITE[005C4FB2]: CALL 0x004042d2; direct=004042D2 MMMObjTy::OutBSlProc */
      st::fn_004042D2
                (pMVar5,g_dDXContext_0080759C,nullptr,nullptr,0x112,0x38,0x205,0x104
                 ,(undefined4 *)pMVar5);
    }
    if ((pSVar3->field_21F4 == nullptr) && (param_1 == '\0')) {
      /* ST_CALLSITE[005C4FF0]: CALL 0x00403099; direct=00403099 MMMObjTy::OutRGlProc */
      st::fn_00403099
                ((MMMObjTy *)g_dDXContext_0080759C,(int)g_dDXContext_0080759C,nullptr,
                 nullptr,0x112,0x149,0x205,0x8c,
                 (undefined4 *)(pSVar3->array_00BC[0xc].field_01DB + 0x140));
    }
    uVar10 = 0;
    pcVar9 = (ccFntTy *)g_startSystem_0081176C->field_0030;
    uVar8 = 0xffffffff;
    uVar7 = 0xfffffffe;
    resourceString = st::fn_006B0140(0x26b2,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005C5027]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    st::fn_00404C2D(this_00,0,0xe9,0x14,0x14c,0x18,resourceString,uVar7,uVar8,pcVar9,uVar10);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x1ee,0,errorCode,
                             st::mutable_c_string("%s"),"SettMapTy::PaintSettMap");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x1ee);
  return;
}

// 005C5130 SettMapTy::NoneSettMap
#line 4 "decomp/ST.exe/functions/005C5130/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::NoneSettMap
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=int __thiscall
   NoneSettMap(SettMapTy * this) Evidence: every machine RET purges exactly 0 explicit stack bytes;
   current signature describes 4; removed trailing parameter slots have no listing references;
   ret_sites=005C51AB RET | 005C53DE RET | 005C58D5 RET | 005C58FC RET | 005C5942 RET */

int __thiscall st::fn_005C5130(SettMapTy *this)

{
  char cVar1;
  SettMapTy_field_1E26State SVar2;
  byte bVar3;
  uint uVar4;
  SettMapTy *this_00;
  DWORD DVar6;
  int iVar7;
  int iVar9;
  int iVar8;
  uint *puVar10;
  InternalExceptionFrame local_50;
  SettMapTy *local_c;
  int local_8;

  local_8 = 1;
  local_c = this;
  /* ST_CALLSITE[005C5145]: CALL dword ptr [0x0085bedc] */
  DVar6 = st::external_000000DA();
  this->field_0061 = DVar6;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar7 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x243,0,iVar7,st::mutable_c_string("%s")
                               ,"SettMapTy::NoneSettMap");
    if (iVar8 == 0) {
      st::fn_006A5E40(iVar7,0,st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x243);
      return 0;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  cVar1 = local_c->field_0065;
  if (cVar1 == '\x01') {
    if (DAT_008067a0 != '\0') {
      /* ST_CALLSITE[005C58E4]: CALL dword ptr [0x0085c05c] */
      st::external_00000105((CFsgsConnection *)&DAT_00802a90);
    }
  }
  else if (cVar1 == '\x03') {
    if (((local_c->field_21E1 != '\0') && (local_c->field_21E8 != nullptr)) &&
       /* ST_CALLSITE[005C53F3]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
       (iVar9 = st::fn_004055F1(local_c->field_21E8), iVar9 != 0)) {
      local_8 = 0;
    }
    if (((this_00->field_21E5 != '\0') && (this_00->field_21F4 != nullptr)) &&
       /* ST_CALLSITE[005C5413]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
       (iVar9 = st::fn_004055F1(this_00->field_21F4), iVar9 != 0)) {
      local_8 = 0;
    }
    SVar2 = this_00->field_1E26;
    if (((SVar2 != CASE_6) && (SVar2 != CASE_7)) &&
       ((SVar2 != CASE_E &&
        (((this_00->field_21E2 != '\0' && (this_00->field_21EC != nullptr)) &&
         /* ST_CALLSITE[005C5445]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
         (iVar9 = st::fn_004055F1(this_00->field_21EC), iVar9 != 0)))))) {
      local_8 = 0;
    }
    SVar2 = this_00->field_1E26;
    if ((((SVar2 == CASE_6) || (SVar2 == CASE_7)) || (SVar2 == CASE_E)) &&
       (((this_00->field_21E3 != '\0' && (this_00->field_21F0 != nullptr)) &&
        /* ST_CALLSITE[005C5477]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        (iVar9 = st::fn_004055F1(this_00->field_21F0), iVar9 != 0)))) {
      local_8 = 0;
    }
    SVar2 = this_00->field_1E26;
    if (((((SVar2 != CASE_6) && (SVar2 != CASE_1)) && (SVar2 != CASE_2)) &&
        ((this_00->field_21E6 != '\0' && (this_00->field_21F8 != nullptr)))) &&
       /* ST_CALLSITE[005C54A9]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
       (iVar9 = st::fn_004055F1(this_00->field_21F8), iVar9 != 0)) {
      local_8 = 0;
    }
    if ((this_00->field_21E4 != '\0') &&
       (g_startSystem_0081176C->field_0300 < g_startSystem_0081176C->field_0304 + -1)) {
      g_startSystem_0081176C->field_0300 = st::machine_word_boundary_cast<int>(g_startSystem_0081176C->field_0300 + 1);
      if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
        st::fn_006B3730
                  ((uint *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC,
                   g_startSystem_0081176C->field_0300,g_startSystem_0081176C->field_0314,
                   g_startSystem_0081176C->field_0318);
      }
      local_8 = 0;
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (this_00->field_21F0 != nullptr) {
        /* ST_CALLSITE[005C553C]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        st::fn_0040128A(this_00->field_21F0);
        st::fn_0072E2B0(this_00->field_21F0);
        this_00->field_21F0 = nullptr;
      }
      SVar2 = this_00->field_1E26;
      if ((((SVar2 == CASE_6) || (SVar2 == CASE_7)) || (SVar2 == CASE_E)) &&
         (this_00->field_21E3 != '\0')) {
        st::fn_006B3430((int *)g_ddxContext_008075A8,this_00->field_1F80);
      }
      if (this_00->field_21E8 != nullptr) {
        /* ST_CALLSITE[005C559B]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        st::fn_0040128A(this_00->field_21E8);
        st::fn_0072E2B0(this_00->field_21E8);
        this_00->field_21E8 = nullptr;
      }
      if (this_00->field_21E1 != '\0') {
        if (this_00->field_1C6F != 0xffffffff) {
          st::fn_006B34D0
                    ((uint *)this_00->field_1CB3,this_00->field_1C6F,0xfffffffe,this_00->field_1C87,
                     this_00->field_1C8B);
        }
        if (this_00->field_1D00 != 0xffffffff) {
          st::fn_006B34D0
                    ((uint *)this_00->field_1D44,this_00->field_1D00,0xfffffffe,this_00->field_1D18,
                     this_00->field_1D1C);
        }
        if (this_00->field_1D91 != 0xffffffff) {
          st::fn_006B34D0
                    ((uint *)this_00->field_1DD5,this_00->field_1D91,0xfffffffe,this_00->field_1DA9,
                     this_00->field_1DAD);
        }
        puVar10 = this_00->field_20CC;
        iVar9 = 10;
        do {
          st::fn_006B3430((int *)g_ddxContext_008075A8,*puVar10);
          puVar10 = puVar10 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      if (this_00->field_21F4 != nullptr) {
        /* ST_CALLSITE[005C5671]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        st::fn_0040128A(this_00->field_21F4);
        st::fn_0072E2B0(this_00->field_21F4);
        this_00->field_21F4 = nullptr;
      }
      if (this_00->field_21E5 != '\0') {
        st::fn_006B3430((int *)g_ddxContext_008075A8,this_00->field_1E22);
      }
      if (this_00->field_21EC != nullptr) {
        /* ST_CALLSITE[005C56BC]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        st::fn_0040128A(this_00->field_21EC);
        st::fn_0072E2B0(this_00->field_21EC);
        this_00->field_21EC = nullptr;
      }
      SVar2 = this_00->field_1E26;
      if (((SVar2 != CASE_6) && (SVar2 != CASE_7)) && (SVar2 != CASE_E)) {
        if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
          st::fn_006B34D0
                    ((uint *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391,
                     0xfffffffe,g_startSystem_0081176C->field_03A9,
                     g_startSystem_0081176C->field_03AD);
        }
        if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
          st::fn_006B34D0
                    ((uint *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422,
                     0xfffffffe,g_startSystem_0081176C->field_043A,
                     g_startSystem_0081176C->field_043E);
        }
        if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
          st::fn_006B34D0
                    ((uint *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3,
                     0xfffffffe,g_startSystem_0081176C->field_04CB,
                     g_startSystem_0081176C->field_04CF);
        }
        st::fn_006B3430
                  ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
      }
      if (this_00->field_21E4 != '\0') {
        st::fn_006B3430
                  ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_02EC);
        if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
          st::fn_006B3AF0((int *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC);
        }
      }
      if (this_00->field_21F8 != nullptr) {
        /* ST_CALLSITE[005C57E4]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        st::fn_0040128A(this_00->field_21F8);
        st::fn_0072E2B0(this_00->field_21F8);
        this_00->field_21F8 = nullptr;
      }
      if (this_00->field_21E6 != '\0') {
        if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
          st::fn_006B34D0
                    ((uint *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560,
                     0xfffffffe,g_startSystem_0081176C->field_0578,
                     g_startSystem_0081176C->field_057C);
        }
        if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
          st::fn_006B34D0
                    ((uint *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1,
                     0xfffffffe,g_startSystem_0081176C->field_0609,
                     g_startSystem_0081176C->field_060D);
        }
        st::fn_006B3430
                  ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
        st::fn_006B3430
                  ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
      }
      this_00->field_0065 = 1;
      /* ST_CALLSITE[005C589F]: CALL dword ptr [EAX + 0x18] */
      this_00->CreateCtrls('\0');
      SVar2 = this_00->field_1E26;
      if (((SVar2 == CASE_6) || (SVar2 == CASE_7)) || (SVar2 == CASE_E)) {
        st::fn_00405524
                  ((AnonReceiver_0053F510 *)this_00);
      }
      /* ST_CALLSITE[005C58BE]: CALL 0x004049d5; direct=004049D5 SettMapTy::PaintSettMap */
      st::fn_004049D5(this_00,'\0');
      g_currentExceptionFrame = local_50.previous;
      return local_8;
    }
  }
  else {
    if (cVar1 != '\x04') {
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    if ((local_c->field_21E4 != '\0') && (0 < g_startSystem_0081176C->field_0300)) {
      g_startSystem_0081176C->field_0300 = st::machine_word_boundary_cast<int>(g_startSystem_0081176C->field_0300 + -1);
      if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
        st::fn_006B3730
                  ((uint *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC,
                   g_startSystem_0081176C->field_0300,g_startSystem_0081176C->field_0314,
                   g_startSystem_0081176C->field_0318);
      }
      local_8 = 0;
    }
    if ((this_00->field_21E1 != '\0') && (this_00->field_21E8 != nullptr)) {
      /* ST_CALLSITE[005C5217]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar9 = st::fn_004055F1(this_00->field_21E8);
      if (iVar9 == 0) {
        uVar4 = *(uint *)&this_00->field_21E8->field_0x3;
        if (-1 < (int)uVar4) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((this_00->field_21E5 != '\0') && (this_00->field_21F4 != nullptr)) {
      /* ST_CALLSITE[005C5253]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar9 = st::fn_004055F1(this_00->field_21F4);
      if (iVar9 == 0) {
        uVar4 = *(uint *)&this_00->field_21F4->field_0x3;
        if (-1 < (int)uVar4) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    SVar2 = this_00->field_1E26;
    if ((((SVar2 != CASE_6) && (SVar2 != CASE_7)) && (SVar2 != CASE_E)) &&
       ((this_00->field_21E2 != '\0' && (this_00->field_21EC != nullptr)))) {
      /* ST_CALLSITE[005C52A1]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar9 = st::fn_004055F1(this_00->field_21EC);
      if (iVar9 == 0) {
        uVar4 = *(uint *)&this_00->field_21EC->field_0x3;
        if (-1 < (int)uVar4) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    SVar2 = this_00->field_1E26;
    if ((((SVar2 == CASE_6) || (SVar2 == CASE_7)) || (SVar2 == CASE_E)) &&
       ((this_00->field_21E3 != '\0' && (this_00->field_21F0 != nullptr)))) {
      /* ST_CALLSITE[005C52EE]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar9 = st::fn_004055F1(this_00->field_21F0);
      if (iVar9 == 0) {
        uVar4 = *(uint *)&this_00->field_21F0->field_0x3;
        if (-1 < (int)uVar4) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    SVar2 = this_00->field_1E26;
    if ((((SVar2 != CASE_6) && (SVar2 != CASE_1)) && (SVar2 != CASE_2)) &&
       ((this_00->field_21E6 != '\0' && (this_00->field_21F8 != nullptr)))) {
      /* ST_CALLSITE[005C533C]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar9 = st::fn_004055F1(this_00->field_21F8);
      if (iVar9 == 0) {
        uVar4 = *(uint *)&this_00->field_21F8->field_0x3;
        if (-1 < (int)uVar4) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      bVar3 = this_00->array_00BC[0xc].field_01DA;
      this_00->field_0065 = 2;
      if ((bVar3 != 0xff) && (*(int *)&this_00->array_00BC[bVar3].field_0x15 != 0)) {
        st::fn_006E3B50
                  ((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->array_00BC[bVar3].field_0x5);
        g_currentExceptionFrame = local_50.previous;
        return local_8;
      }
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

// 005C5B60 SettMapTy::CloseButtons
#line 4 "decomp/ST.exe/functions/005C5B60/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::CloseButtons */

void __thiscall st::fn_005C5B60(SettMapTy *this)

{
  SettMapTy *this_00;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  SettMapTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    /* ST_CALLSITE[005C5B94]: CALL 0x00403459; direct=00403459 MMObjTy::CloseButtons */
    st::fn_00403459((MMObjTy *)local_8);
    /* ST_CALLSITE[005C5B9D]: CALL dword ptr [EAX + 0x1c] */
    this_00->DeleteCtrls();
    if (this_00->field_21E4 != '\0') {
      if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC,
                   0xfffffffe,g_startSystem_0081176C->field_0314,g_startSystem_0081176C->field_0318);
      }
      st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_02EC);
    }
    this_00->field_0065 = 4;
    st::fn_00404BF1(this_00,0xc,'\x01',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x250,0,errorCode,
                             st::mutable_c_string("%s"),"SettMapTy::CloseButtons");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x250);
  return;
}

// 005C6030 SettMapTy::CreateCtrls
#line 4 "decomp/ST.exe/functions/005C6030/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::CreateCtrls */

void __thiscall st::fn_005C6030(SettMapTy *this,char param_1)

{
  byte *puVar1;
  int iVar2;
  SettMapTy_field_1E26State SVar3;
  MMMObjTy *pMVar4;
  bool bVar6;
  int iVar11;
  uint uVar7;
  cMf32 *pcVar8;
  DArrayTy *pDVar9;
  uint uVar10;
  int iVar12;
  int iVar13;
  SettMapTy *this_00;
  uint uVar14;
  byte *puVar15;
  uint *puVar16;
  uint uVar17;
  byte *puVar18;
  undefined4 local_ef4 [566];
  undefined4 local_61c [17];
  undefined4 local_5d8;
  uint local_5d0 [5];
  int local_5bc;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined4 local_5a8;
  ushort *local_4ac;
  int local_4a8;
  undefined4 local_454 [5];
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_94;
  undefined4 local_90;
  InternalExceptionFrame local_7c;
  undefined4 local_38;
  undefined2 local_2e;
  undefined2 local_2c;
  SettMapTy *local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  puVar15 = (byte *)(local_454);
  local_1c = this;
  for (iVar13 = 0xf6; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar15 = 0;
    puVar15 = (byte *)(puVar15 + 1);
  }
  memset(local_ef4, 0, 0x88c); /* compiler bulk-zero initialization */
  iVar13 = 0;
  memset(local_5d0, 0, 0x17c); /* compiler bulk-zero initialization */
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  iVar11 = st::fn_0072D7F0(local_7c.jumpBuffer,0);
  this_00 = local_1c;
  if (iVar11 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar12 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x34d,0,iVar11,
                                st::mutable_c_string("%s"),"SettMapTy::CreateCtrls");
    if (iVar12 == 0) {
      st::fn_006A5E40(iVar11,0,st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x34d);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1 == '\0') {
    local_5d0[0] = (uint)(DAT_0080877e != '\0');
    local_5d0[2] = 0x15;
    local_5d0[3] = 0x14;
    local_5d0[1] = iVar11;
    local_4ac = st::fn_0070AA70(g_cMf32_00806780,st::mutable_c_string("MASK_MAP"),0,1);
    local_5d0[4] = st::fn_0070A6F0
                             (g_cMf32_00806780,0x12,st::mutable_c_string("MASK_MAP"),1);
    this_00 = local_1c;
    local_5b0 = local_1c->field_0008;
    local_5ac = 2;
    local_5a8 = 0x654d;
    local_5bc = local_5d0[4];
    local_4a8 = local_5d0[4];
    /* ST_CALLSITE[005C6144]: CALL dword ptr [EDX + 0x8] */
    (*local_1c->field_000C->vtable->CreateObject)
              ((SystemClassTy *)local_1c->field_000C,2,&local_1c->field_215D,nullptr,st::machine_word_boundary_cast<undefined4>(local_5d0),0);
    goto LAB_005c69ed;
  }
  if (local_1c->field_1C6F != 0xffffffff) {
    st::fn_006B34D0
              ((uint *)local_1c->field_1CB3,local_1c->field_1C6F,0xfffffffe,local_1c->field_1C87,
               local_1c->field_1C8B);
  }
  if (this_00->field_1D00 != 0xffffffff) {
    st::fn_006B34D0
              ((uint *)this_00->field_1D44,this_00->field_1D00,0xfffffffe,this_00->field_1D18,
               this_00->field_1D1C);
  }
  if (this_00->field_1D91 != 0xffffffff) {
    st::fn_006B34D0
              ((uint *)this_00->field_1DD5,this_00->field_1D91,0xfffffffe,this_00->field_1DA9,
               this_00->field_1DAD);
  }
  puVar16 = this_00->field_20CC;
  iVar13 = 10;
  do {
    st::fn_006B3430((int *)g_ddxContext_008075A8,*puVar16);
    puVar16 = puVar16 + 1;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  local_10 = 0x41;
  local_18 = 0x69ff;
  uVar14 = local_c;
  uVar17 = local_8;
  do {
    local_14 = 0;
    while( true ) {
      SVar3 = this_00->field_1E26;
      if (((SVar3 == CASE_6) || (SVar3 == CASE_1)) || (iVar13 = 8, SVar3 == CASE_2)) {
        iVar13 = 6;
      }
      if (iVar13 <= local_14) break;
      switch(local_14) {
      case 0:
        uVar17 = 0x14;
        local_c = 0x116;
        uVar14 = local_c;
        local_8 = uVar17;
        break;
      case 1:
        uVar17 = 0x14;
        local_c = 300;
        uVar14 = local_c;
        local_8 = uVar17;
        break;
      case 2:
        uVar17 = 0x18;
        local_c = 0x141;
        uVar14 = local_c;
        local_8 = uVar17;
        break;
      case 3:
        uVar17 = 0x5f;
        local_c = 0x15b;
        uVar14 = local_c;
        local_8 = uVar17;
        break;
      case 4:
        local_c = 0x1bc;
        uVar14 = local_c;
        if (((SVar3 == CASE_6) || (SVar3 == CASE_1)) || (SVar3 == CASE_2)) {
          uVar17 = 0xed;
          local_8 = uVar17;
        }
        else {
          uVar17 = 0xad;
          local_8 = uVar17;
        }
        break;
      case 5:
        if (((SVar3 == CASE_6) || (SVar3 == CASE_1)) || (local_c = 0x26b, SVar3 == CASE_2)) {
          local_c = 0x2ab;
        }
        uVar17 = 0x3e;
        uVar14 = local_c;
        local_8 = uVar17;
        break;
      case 6:
        uVar17 = 0x2c;
        local_c = 0x2ab;
        uVar14 = local_c;
        local_8 = uVar17;
        break;
      case 7:
        uVar17 = 0x17;
        local_c = 0x2d9;
        uVar14 = local_c;
        local_8 = uVar17;
      }
      /* ST_CALLSITE[005C62F8]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
      uVar7 = st::fn_0040361B
                        ((MMObjTy *)this_00,1,0,uVar14,local_10,uVar17,0x14,local_18 + local_14,
                         local_18 + 0x80 + local_14);
      iVar13 = local_18 + local_14;
      local_14 = local_14 + 1;
      *(undefined4 *)((int)this_00 + iVar13 * 4 + -0x18870) = uVar7;
    }
    local_10 = local_10 + 0x19;
    local_18 = local_18 + 8;
  } while (local_10 < 0x13b);
  local_454[4] = this_00->field_1D18;
  local_2c4 = this_00->field_1C87;
  local_440 = this_00->field_1D1C;
  local_43c = this_00->field_1D20;
  local_438 = this_00->field_1D24;
  local_2c0 = this_00->field_1C8B;
  local_3ec = this_00->field_0008;
  local_2bc = this_00->field_1C8F;
  local_338 = 0x32;
  local_1b8 = 0x32;
  local_140 = this_00->field_1DA9;
  local_2b8 = this_00->field_1C93;
  local_13c = this_00->field_1DAD;
  local_a8 = 2;
  local_454[1] = 2;
  local_454[3] = 2;
  local_3e8 = 2;
  local_2d0 = 2;
  local_2c8 = 2;
  local_268 = 2;
  local_138 = this_00->field_1DB1;
  local_f8 = 2;
  local_454[0] = 0;
  local_94 = 0;
  local_90 = 0;
  local_a4 = 0x6200;
  local_454[2] = 0;
  local_33c = 500;
  local_3e4 = 0x6202;
  local_2cc = 0;
  local_1bc = 500;
  local_264 = 0x6201;
  local_150 = 3;
  local_14c = 1;
  local_144 = 0;
  local_134 = 0xbe;
  local_130 = 0xe;
  local_f4 = 0x6203;
  local_26c = local_3ec;
  local_fc = local_3ec;
  local_ac = local_3ec;
  /* ST_CALLSITE[005C64BA]: CALL dword ptr [EDX + 0x8] */
  (*this_00->field_000C->vtable->CreateObject)
            ((SystemClassTy *)this_00->field_000C,4,&this_00->field_211D,nullptr,st::machine_word_boundary_cast<undefined4>(local_454),0);
  SVar3 = this_00->field_1E26;
  if (((SVar3 == CASE_6) || (SVar3 == CASE_7)) || (SVar3 == CASE_E)) {
    local_10 = 0xcb;
    puVar16 = this_00->field_1F60;
    iVar13 = 0x68ff;
    do {
      /* ST_CALLSITE[005C65D0]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
      uVar10 = st::fn_0040361B
                         ((MMObjTy *)this_00,1,1,0x1a,local_10,0xe0,0x14,iVar13,iVar13 + 0x80);
      *puVar16 = uVar10;
      puVar16 = puVar16 + 1;
      local_10 = local_10 + 0x28;
      iVar2 = iVar13 + -0x68fe;
      iVar13 = iVar13 + 1;
    } while (iVar2 < 6);
    if (DAT_0080877e != '\0') {
      /* ST_CALLSITE[005C6616]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
      uVar10 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x24,0x1b4,0xcc,0x1e,0x6905,0x6985);
      this_00->field_1F60[6] = uVar10;
      if (DAT_0080877e != '\0') goto LAB_005c665d;
    }
    this_00->field_002D = 0x20;
    this_00->field_0031 = 0;
    puVar16 = this_00->field_1F60;
    iVar13 = 7;
    do {
      if (*puVar16 != 0) {
        st::fn_006E6080(this_00,2,*puVar16,(undefined4 *)&this_00->field_0x1d);
      }
      puVar16 = puVar16 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  else {
    if (this_00->field_1F3F != nullptr) {
      st::fn_006F1170(this_00->field_1F3F);
    }
    pcVar8 = (cMf32 *)st::fn_006F0EC0(0x345,(byte *)&CHAR_00h_0080ed16,0,0,0);
    this_00->field_1F3F = pcVar8;
    if (DAT_0080877e == '\0') {
      if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
        st::fn_006B5570((DArrayTy *)g_startSystem_0081176C->field_0548);
      }
      pDVar9 = st::fn_006B54F0(nullptr,10,10);
      g_startSystem_0081176C->field_0548 = &pDVar9->flags;
      SVar3 = this_00->field_1E26;
      local_5d8 = DAT_0080995c;
      puVar15 = (byte *)&DAT_00809960;
      puVar18 = (byte *)(local_61c);
      memmove(puVar18, puVar15, 0x20); /* compiler REP MOVS byte copy */
      iVar13 = 0;
      /* ST_CALLSITE[005C6574]: CALL 0x00402716; direct=00402716 StartSystemTy::LoadMapData */
      st::fn_00402716(g_startSystem_0081176C,this_00->field_1F3F,SVar3);
      DAT_0080995c = local_5d8;
      puVar15 = (byte *)(local_61c);
      puVar18 = (byte *)&DAT_00809960;
      memmove(puVar18, puVar15, 0x20); /* compiler REP MOVS byte copy */
    }
    /* ST_CALLSITE[005C659B]: CALL dword ptr [EAX + 0x28] */
    (*this_00->vtable->PrepPlList)((SettMapSTy *)this_00);
  }
LAB_005c665d:
  if (this_00->field_211D != 0) {
    puVar1 = &this_00->field_0x1d;
    this_00->field_002D = 0x20;
    this_00->field_0031 = 1;
    st::fn_006E6080(this_00,2,this_00->field_211D,(undefined4 *)puVar1);
    this_00->field_002D = 0x22;
    this_00->field_1F88 = 0;
    this_00->field_0031 = 0;
    st::fn_006E6080(this_00,2,this_00->field_211D,(undefined4 *)puVar1);
    this_00->field_002D = 0x28;
    uVar10 = this_00->field_1F84->count;
    if (uVar10 < 0xb) {
      iVar13 = 1;
    }
    else {
      iVar13 = uVar10 - 9;
    }
    this_00->field_0031 = iVar13;
    st::fn_006E6080(this_00,2,this_00->field_211D,(undefined4 *)puVar1);
  }
  SVar3 = this_00->field_1E26;
  if ((((SVar3 == CASE_2) || (SVar3 == CASE_5)) ||
      ((SVar3 == CASE_F || ((SVar3 == CASE_C || (SVar3 == CASE_10)))))) ||
     ((this_00->field_1E27 == 0x13 && ((DAT_00803400 == '\x14' || (DAT_00803400 == '\x15')))))) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((((((SVar3 == CASE_6) || (SVar3 == CASE_1)) || (SVar3 == CASE_4)) ||
       ((SVar3 == CASE_7 || (SVar3 == CASE_D)))) || (SVar3 == CASE_E)) &&
     ((this_00->field_1E27 != 0x13 || ((DAT_00803400 != '\x14' && (DAT_00803400 != '\x15')))))) {
    /* ST_CALLSITE[005C6764]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar10 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x1c4,0x14e,0x14a,0x14,0x653f,0x657f);
    this_00->field_2125[0] = uVar10;
  }
  /* ST_CALLSITE[005C678D]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
  uVar10 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x1c4,0x164,0x50,0x14,0x6542,0x6582);
  this_00->field_2125[3] = uVar10;
  /* ST_CALLSITE[005C67B6]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
  uVar10 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x2be,0x164,0x50,0x14,0x6543,0x6583);
  this_00->field_2125[4] = uVar10;
  /* ST_CALLSITE[005C67DF]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
  uVar10 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x1c4,0x17a,0x50,0x14,0x6544,0x6584);
  this_00->field_2125[5] = uVar10;
  /* ST_CALLSITE[005C6808]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
  uVar10 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x2be,0x17a,0x50,0x14,0x6545,0x6585);
  this_00->field_2125[6] = uVar10;
  /* ST_CALLSITE[005C6831]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
  uVar10 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x1c4,400,0x50,0x14,0x6546,0x6586);
  this_00->field_2125[7] = uVar10;
  /* ST_CALLSITE[005C685A]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
  uVar10 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x2be,400,0x50,0x14,0x6547,0x6587);
  this_00->field_2125[8] = uVar10;
  /* ST_CALLSITE[005C6883]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
  uVar10 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x18a,0x1a6,0x16,0x14,0x6548,0x6588);
  this_00->field_2125[9] = uVar10;
  /* ST_CALLSITE[005C68AC]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
  uVar10 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x234,0x1a6,0x16,0x14,0x6549,0x6589);
  this_00->field_2125[10] = uVar10;
  /* ST_CALLSITE[005C68D5]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
  uVar10 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x2f8,0x1a6,0x16,0x14,0x654a,0x658a);
  this_00->field_2125[0xb] = uVar10;
  SVar3 = this_00->field_1E26;
  if (((SVar3 != CASE_6) && (SVar3 != CASE_1)) && (SVar3 != CASE_2)) {
    /* ST_CALLSITE[005C6910]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar10 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x1fe,0x1bc,0x16,0x14,0x654b,0x658b);
    this_00->field_2125[0xc] = uVar10;
    /* ST_CALLSITE[005C6939]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar10 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x2f8,0x1bc,0x16,0x14,0x654c,0x658c);
    this_00->field_2125[0xd] = uVar10;
  }
  if ((DAT_0080877e == '\0') || (bVar6)) {
    this_00->field_002D = 0x20;
    this_00->field_0031 = 0;
    puVar16 = this_00->field_2125;
    iVar13 = 0xe;
    do {
      if (*puVar16 != 0) {
        st::fn_006E6080(this_00,2,*puVar16,(undefined4 *)&this_00->field_0x1d);
      }
      puVar16 = puVar16 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  st::fn_006B3430((int *)g_ddxContext_008075A8,this_00->field_1E22);
  SVar3 = this_00->field_1E26;
  if (((SVar3 != CASE_6) && (SVar3 != CASE_7)) && (SVar3 != CASE_E)) {
    this_00->field_002D = 0x20;
    this_00->field_0031 = 1;
    st::fn_006E6080(this_00,2,g_startSystem_0081176C->field_0389,(undefined4 *)&this_00->field_0x1d);
  }
  if (this_00->field_21E2 != '\0') {
    /* ST_CALLSITE[005C69E8]: CALL 0x00402a4a; direct=00402A4A StartSystemTy::CreateBinDesc */
    st::fn_00402A4A(g_startSystem_0081176C);
  }
LAB_005c69ed:
  pMVar4 = this_00->array_00BC[0xc].field_01DB;
  if (*(int *)(pMVar4 + 0x2e6) != 0) {
    memset(&local_38, 0, 0x1a); /* compiler bulk-zero initialization */
    local_2c = 1;
    local_2e = 1;
    STPiece<2,2>(local_38) = 1;
    /* ST_CALLSITE[005C6A21]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
    st::fn_00404B51(*(MMsgTy **)(pMVar4 + 0x2e6),(int)&local_38);
  }
  g_currentExceptionFrame = local_7c.previous;
  return;
}

// 005C6D40 SettMapTy::DeleteCtrls
#line 4 "decomp/ST.exe/functions/005C6D40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::DeleteCtrls */

void __thiscall st::fn_005C6D40(SettMapTy *this)

{
  SettMapTy_field_1E26State SVar1;
  RecoveredSourceFamily_dibcopy *pRVar2;
  SettMapTy *this_00;
  int iVar4;
  HoloTy *pHVar4;
  int iVar5;
  uint uVar11;
  uint local_EAX_848;
  DArrayTy *pDVar6;
  uint local_EAX_1327;
  uint local_EAX_1858;
  int iVar8;
  uint *puVar7;
  int iVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  InternalExceptionFrame local_54;
  SettMapTy *local_10;
  int local_c;
  int local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar4 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x3a4,0,iVar4,st::mutable_c_string("%s")
                               ,"SettMapTy::DeleteCtrls");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x3a4);
    return;
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  this_00 = local_10;
  if (local_10->field_215D != 0) {
    st::fn_006E56B0(local_10->field_000C,local_10->field_215D);
  }
  this_00->field_215D = 0;
  puVar7 = this_00->field_1F8C;
  local_c = 10;
  do {
    local_8 = 8;
    do {
      if (*puVar7 != 0) {
        st::fn_006E56B0(this_00->field_000C,*puVar7);
        *puVar7 = 0;
      }
      puVar7 = puVar7 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (this_00->field_211D != 0) {
      st::fn_006E56B0(this_00->field_000C,this_00->field_211D);
      this_00->field_211D = 0;
    }
    local_c = local_c + -1;
  } while (local_c != 0);
  if (this_00->field_21E8 != nullptr) {
    /* ST_CALLSITE[005C6E20]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
    st::fn_0040128A(this_00->field_21E8);
    st::fn_0072E2B0(this_00->field_21E8);
    this_00->field_21E8 = nullptr;
  }
  pHVar4 = (HoloTy *)st::fn_0072E530(0x33);
  if (pHVar4 == nullptr) {
    pHVar4 = nullptr;
  }
  else {
    pHVar4->field_0002 = 1;
    pHVar4->field_0000 = 0;
    *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
    pHVar4->field_0001 = CASE_2;
    pHVar4->field_0007 = nullptr;
    pHVar4->field_000B = nullptr;
    pHVar4->field_000F = 0;
    *(undefined4 *)&pHVar4->field_0x1b = 1;
    pHVar4->field_0013 = 1;
    pHVar4->field_0017 = -1;
    pHVar4->field_0027 = 0;
    pHVar4->field_0023 = 0;
    pHVar4->field_002F = 1;
    pHVar4->field_002B = 1;
  }
  this_00->field_21E8 = pHVar4;
  if (pHVar4 != nullptr) {
    uVar12 = 0;
    cVar11 = '\x01';
    bVar10 = 0x10;
    iVar9 = 1;
    iVar5 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x112,0x38,0x205,0x104);
    /* ST_CALLSITE[005C6EBE]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
    uVar11 = st::fn_0040459D(this_00->field_21E8,CASE_2,0x112,0x38,iVar5,iVar9,bVar10,cVar11,uVar12);
    if (uVar11 != 0) {
      pHVar4 = this_00->field_21E8;
      pHVar4->field_0002 = 0;
      pHVar4->field_0017 = -1;
      uVar12 = *(uint *)&this_00->field_21E8->field_0x3;
      if (-1 < (int)uVar12) {
        st::fn_006B3430((int *)g_ddxContext_008075A8,uVar12);
      }
      /* ST_CALLSITE[005C6EF7]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      st::fn_004055F1(this_00->field_21E8);
    }
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0x112,0x38,0x205,0x104);
    /* ST_CALLSITE[005C6F3B]: CALL 0x00402298; direct=00402298 PutDDXClip */
    st::fn_00402298(0x112,0x38,0x112,0x38,0x205,(byte *)0x104,'\x01',
               (BITMAPINFO *)g_startSystem_0081176C->field_002C);
  }
  if (this_00->field_1C6F != 0xffffffff) {
    st::fn_006B3AF0((int *)this_00->field_1CB3,this_00->field_1C6F);
  }
  if (this_00->field_1D00 != 0xffffffff) {
    st::fn_006B3AF0((int *)this_00->field_1D44,this_00->field_1D00);
  }
  if (this_00->field_1D91 != 0xffffffff) {
    st::fn_006B3AF0((int *)this_00->field_1DD5,this_00->field_1D91);
  }
  puVar7 = this_00->field_20CC;
  local_c = 10;
  do {
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar7);
    puVar7 = puVar7 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  puVar7 = this_00->field_2125;
  local_c = 0xe;
  do {
    if (*puVar7 != 0) {
      st::fn_006E56B0(this_00->field_000C,*puVar7);
      *puVar7 = 0;
    }
    puVar7 = puVar7 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (this_00->field_21F4 != nullptr) {
    /* ST_CALLSITE[005C6FE6]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
    st::fn_0040128A(this_00->field_21F4);
    st::fn_0072E2B0(this_00->field_21F4);
    this_00->field_21F4 = nullptr;
  }
  pHVar4 = (HoloTy *)st::fn_0072E530(0x33);
  if (pHVar4 == nullptr) {
    pHVar4 = nullptr;
  }
  else {
    pHVar4->field_0002 = 1;
    pHVar4->field_0000 = 0;
    *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
    pHVar4->field_0001 = CASE_2;
    pHVar4->field_0007 = nullptr;
    pHVar4->field_000B = nullptr;
    pHVar4->field_000F = 0;
    *(undefined4 *)&pHVar4->field_0x1b = 1;
    pHVar4->field_0013 = 1;
    pHVar4->field_0017 = -1;
    pHVar4->field_0027 = 0;
    pHVar4->field_0023 = 0;
    pHVar4->field_002F = 1;
    pHVar4->field_002B = 1;
  }
  this_00->field_21F4 = pHVar4;
  if (pHVar4 != nullptr) {
    uVar12 = 0;
    cVar11 = '\x01';
    bVar10 = 0x10;
    iVar9 = 1;
    iVar5 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x112,0x149,0x205,0x8c);
    /* ST_CALLSITE[005C7090]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
    local_EAX_848 =
         st::fn_0040459D(this_00->field_21F4,CASE_2,0x112,0x149,iVar5,iVar9,bVar10,cVar11,uVar12);
    if (local_EAX_848 != 0) {
      pHVar4 = this_00->field_21F4;
      pHVar4->field_0002 = 0;
      pHVar4->field_0017 = -1;
      uVar12 = *(uint *)&this_00->field_21F4->field_0x3;
      if (-1 < (int)uVar12) {
        st::fn_006B3430((int *)g_ddxContext_008075A8,uVar12);
      }
      /* ST_CALLSITE[005C70C8]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      st::fn_004055F1(this_00->field_21F4);
    }
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0x112,0x149,0x205,0x8c);
    /* ST_CALLSITE[005C7116]: CALL 0x00402298; direct=00402298 PutDDXClip */
    st::fn_00402298(0x112,0x149,0x112,0x149,0x205,(byte *)0x8c,'\x01',
               (BITMAPINFO *)g_startSystem_0081176C->field_002C);
  }
  st::fn_006B3AF0((int *)g_ddxContext_008075A8,this_00->field_1E22);
  if ((((this_00->field_21E2 == '\0') || (SVar1 = this_00->field_1E26, SVar1 == CASE_6)) ||
      (SVar1 == CASE_7)) || (SVar1 == CASE_E)) {
    this_00->field_002D = 0x20;
    this_00->field_0031 = 0;
    st::fn_006E6080(this_00,2,g_startSystem_0081176C->field_0389,(undefined4 *)&this_00->field_0x1d);
  }
  else {
    if (g_startSystem_0081176C->field_0389 != 0) {
      st::fn_006E56B0(this_00->field_000C,g_startSystem_0081176C->field_0389);
    }
    g_startSystem_0081176C->field_0389 = 0;
    pRVar2 = (RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_0544;
    st::fn_006B4170(pRVar2,0,0,0,pRVar2->field_0004,pRVar2->field_0008,0xff);
    if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
      st::fn_006B5570((DArrayTy *)g_startSystem_0081176C->field_0548);
    }
    pDVar6 = st::fn_006B54F0(nullptr,10,10);
    g_startSystem_0081176C->field_0548 = &pDVar6->flags;
    if (this_00->field_21EC != nullptr) {
      /* ST_CALLSITE[005C71D6]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(this_00->field_21EC);
      st::fn_0072E2B0(this_00->field_21EC);
      this_00->field_21EC = nullptr;
    }
    pHVar4 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    this_00->field_21EC = pHVar4;
    if (pHVar4 != nullptr) {
      uVar12 = 0;
      cVar11 = '\x01';
      bVar10 = 0x10;
      iVar9 = 1;
      iVar5 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
      /* ST_CALLSITE[005C726F]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_1327 =
           st::fn_0040459D(this_00->field_21EC,CASE_4,10,0xb4,iVar5,iVar9,bVar10,cVar11,uVar12);
      if (local_EAX_1327 != 0) {
        pHVar4 = this_00->field_21EC;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = -1;
        uVar12 = *(uint *)&this_00->field_21EC->field_0x3;
        if (-1 < (int)uVar12) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar12);
        }
        /* ST_CALLSITE[005C72A8]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        st::fn_004055F1(this_00->field_21EC);
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
      /* ST_CALLSITE[005C72EC]: CALL 0x00402298; direct=00402298 PutDDXClip */
      st::fn_00402298(10,0xb4,10,0xb4,0xf9,(byte *)0x121,'\x01',
                 (BITMAPINFO *)g_startSystem_0081176C->field_002C);
    }
    if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
      st::fn_006B3AF0((int *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391);
    }
    if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
      st::fn_006B3AF0((int *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422);
    }
    if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
      st::fn_006B3AF0((int *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3);
    }
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
  }
  if ((this_00->field_21E3 != '\0') &&
     (((SVar1 = this_00->field_1E26, SVar1 == CASE_6 || (SVar1 == CASE_7)) || (SVar1 == CASE_E)))) {
    puVar7 = this_00->field_1F60;
    local_c = 7;
    do {
      if (*puVar7 != 0) {
        st::fn_006E56B0(this_00->field_000C,*puVar7);
        *puVar7 = 0;
      }
      puVar7 = puVar7 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    if (this_00->field_21F0 != nullptr) {
      /* ST_CALLSITE[005C73DE]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      st::fn_0040128A(this_00->field_21F0);
      st::fn_0072E2B0(this_00->field_21F0);
      this_00->field_21F0 = nullptr;
    }
    pHVar4 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    this_00->field_21F0 = pHVar4;
    if (pHVar4 != nullptr) {
      uVar12 = 0;
      cVar11 = '\x01';
      bVar10 = 0x10;
      iVar9 = 1;
      iVar5 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x123);
      /* ST_CALLSITE[005C7482]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_1858 =
           st::fn_0040459D(this_00->field_21F0,CASE_4,10,0xb4,iVar5,iVar9,bVar10,cVar11,uVar12);
      if (local_EAX_1858 != 0) {
        pHVar4 = this_00->field_21F0;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = -1;
        uVar12 = *(uint *)&this_00->field_21F0->field_0x3;
        if (-1 < (int)uVar12) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar12);
        }
        /* ST_CALLSITE[005C74BA]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        st::fn_004055F1(this_00->field_21F0);
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
      /* ST_CALLSITE[005C74FF]: CALL 0x00402298; direct=00402298 PutDDXClip */
      st::fn_00402298(10,0xb4,10,0xb4,0xf9,(byte *)0x123,'\x01',
                 (BITMAPINFO *)g_startSystem_0081176C->field_002C);
    }
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,this_00->field_1F80);
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8A60((byte *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C,
                 0xfffffffe,g_cursorClass_00802A30->field_0034,g_cursorClass_00802A30->field_0038);
      g_currentExceptionFrame = local_54.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

// 005C8200 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0053F510::FUN_005c8200
#line 4 "decomp/ST.exe/functions/005C8200/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Start\sett_obj.cpp
   Diagnostic line evidence: 1114 | 1141 | 1143 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_004EEFB0.
   Evidence: incoming_receiver_captures=2; receiver_accesses=22; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[0];
   expected_stack=0; receiver_family_members=12; single_call_corroborated_by_receiver_family */

void __thiscall
st::fn_005C8200
          (AnonReceiver_0053F510 *this)

{
  byte *puVar1;
  byte bVar2;
  SettMapTy *this_00;
  int iVar2;
  cMf32 *pcVar3;
  ushort *puVar4;
  DWORD DVar5;
  int iVar6;
  uint uVar7;
  byte *puVar9;
  byte *pbVar10;
  uint *puVar11;
  byte *puVar12;
  char *pcVar13;
  byte *pbVar14;
  byte local_218 [336];
  undefined4 local_c8 [17];
  undefined4 local_84;
  InternalExceptionFrame local_7c;
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_18;
  undefined4 local_14;
  SettMapTy *local_c;
  DWORD *local_8;

  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_c = (SettMapTy *)this;
  iVar2 = st::fn_0072D7F0(local_7c.jumpBuffer,0);
  this_00 = local_c;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    if (DAT_0080877e != '\0') {
      /* ST_CALLSITE[005C8658]: CALL dword ptr [0x0085bedc] */
      DVar5 = st::external_000000DA();
      local_c->field_1F53 = DVar5;
      st::fn_004024D2();
      return;
    }
    /* ST_CALLSITE[005C8678]: CALL dword ptr [EDX + 0x28] */
    (*local_c->vtable->PrepPlList)((SettMapSTy *)local_c);
    return;
  }
  if (local_c->field_1F3F != nullptr) {
    st::fn_006F1170(local_c->field_1F3F);
  }
  /* ST_CALLSITE[005C8268]: CALL dword ptr [0x0085bde8] */
  st::external_00000080(st::pointer_boundary_cast<LPSTR>(&CHAR_00h_00853de4),st::mutable_c_string("%s%s%s"),&CHAR_00h_00807680,st_global_0079C0E8,
            PTR_s_RANDOM_0079c0f4);
  pcVar3 = (cMf32 *)st::fn_006F0EC0(0x345,(byte *)&CHAR_00h_00853de4,0,0,0);
  this_00->field_1F3F = pcVar3;
  if (g_startSystem_0081176C->field_02F4 != nullptr) {
    st::fn_006AB060(&g_startSystem_0081176C->field_02F4);
  }
  puVar4 = st::fn_0070A5A0(this_00->field_1F3F,0xc,PTR_s_SMALL_MAP_0079c114,2,0);
  g_startSystem_0081176C->field_02F4 = puVar4;
  if (g_startSystem_0081176C->field_02F4 != nullptr) {
    st::fn_006C7F90(g_startSystem_0081176C->field_02F4,nullptr,g_dDXContext_0080759C->field_04B4,0);
  }
  local_84 = DAT_0080995c;
  puVar9 = (byte *)&DAT_00809960;
  puVar12 = (byte *)(local_c8);
  memmove(puVar12, puVar9, 0x20); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  local_8 = (DWORD *)&DAT_008087b6;
  puVar4 = st::fn_006F1CE0(this_00->field_1F3F,0,PTR_s_DESCRIPTOR_0079c110,(int *)&local_8,0);
  if (puVar4 == nullptr) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x45a);
  }
  if (DAT_0080877e == '\0') {
    *(undefined4 *)&this_00->field_0x2121 = 0xffffffff;
    DAT_00808aab = 0xffffffff;
  }
  else {
    *(undefined4 *)&this_00->field_0x2121 = 0;
    DAT_00808aab = 0;
    DAT_00808aa8 = DAT_0080734b;
  }
  DAT_00809958 = DAT_008087be;
  DAT_0080995c = local_84;
  puVar9 = (byte *)(local_c8);
  puVar12 = (byte *)&DAT_00809960;
  memmove(puVar12, puVar9, 0x20); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  if (g_dArray_0080C4C7 != nullptr) {
    st::fn_006B5570(g_dArray_0080C4C7);
  }
  g_dArray_0080C4C7 =
       (DArrayTy *)
       st::fn_0071AA10(this_00->field_1F3F,PTR_s_DESCRIPTION_0079c108,0);
  if (g_dArray_0080C4C7 == nullptr) {
    g_dArray_0080C4C7 = st::fn_006B54F0(nullptr,10,10);
  }
  if (g_dArray_0080C4CB != nullptr) {
    st::fn_006B5570(g_dArray_0080C4CB);
  }
  g_dArray_0080C4CB =
       (DArrayTy *)
       st::fn_0071AA10(this_00->field_1F3F,PTR_s_OBJECTIVES_0079c10c,0);
  if (g_dArray_0080C4CB == nullptr) {
    g_dArray_0080C4CB = st::fn_006B54F0(nullptr,10,10);
  }
  pcVar13 = &CHAR_00h_0080c3c3;
  for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar13[0] = '\0';
    pcVar13[1] = '\0';
    pcVar13[2] = '\0';
    pcVar13[3] = '\0';
    pcVar13 = pcVar13 + 4;
  }
  local_8 = (DWORD *)&CHAR_00h_0080c3c3;
  puVar4 = st::fn_006F1CE0(this_00->field_1F3F,0xc,PTR_s_TITLE_MISSION_0079c104,(int *)&local_8,0);
  if ((puVar4 == nullptr) || (CHAR_00h_0080c3c3 == '\0')) {
    st::fn_0072E730
              ((byte *)&CHAR_00h_00853de4,nullptr,nullptr,local_218,nullptr);
    uVar7 = 0xffffffff;
    pbVar10 = local_218;
    do {
      pbVar14 = pbVar10;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pbVar14 = pbVar10 + 1;
      bVar2 = *pbVar10;
      pbVar10 = pbVar14;
    } while (bVar2 != 0);
    uVar7 = ~uVar7;
    pbVar10 = pbVar14 + -uVar7;
    pbVar14 = (byte *)&CHAR_00h_0080c3c3;
    memmove(pbVar14, pbVar10, uVar7); /* compiler REP MOVS byte copy */
  }
  local_8 = (DWORD *)&DAT_00853de0;
  puVar4 = st::fn_006F1CE0(this_00->field_1F3F,0xc,PTR_s_GENERATE_RND_0079c0f8,(int *)&local_8,0);
  if (puVar4 == nullptr) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x475);
  }
  local_8 = &this_00->field_1F53;
  puVar4 = st::fn_006F1CE0(this_00->field_1F3F,0xc,PTR_s_INTERFACE_RND_0079c0fc,(int *)&local_8,0);
  if (puVar4 == nullptr) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x477);
  }
  /* ST_CALLSITE[005C8537]: CALL EDI */
  st::external_00000080(st::pointer_boundary_cast<LPSTR>(&CHAR_00h_00853de4),st::mutable_c_string("%s%s%s"),&CHAR_00h_00807680,st_global_0079C0E8,
            PTR_s_RANDOM_0079c0f4);
  this_00->field_1F47 = 1;
  if (((DAT_0080877e != '\0') && (DAT_008067a0 != '\0')) && (g_int_00811764 != nullptr)) {
    puVar1 = &this_00->array_00BC[0xc].field_0x1df;
    st::fn_006B6160(st::pointer_boundary_cast<char *>(puVar1),(int)(g_int_00811764 + 6));
    this_00->field_1A7F = 1;
    this_00->field_1A80 = DAT_008087c6;
    this_00->field_1A81 = (char)(DAT_008087c2 >> 1);
    /* ST_CALLSITE[005C85AE]: CALL EDI */
    st::external_00000080((LPSTR)&local_18,st::mutable_c_string("%08x"),DAT_0080995c);
    this_00->field_1A82 = local_18;
    this_00->field_1A86 = local_14;
    st::fn_0072E340(&this_00->field_1A8A,&CHAR_00h_0080c3c3,0x1d5);
    this_00->field_1C5E = 0;
    /* ST_CALLSITE[005C85E9]: CALL dword ptr [0x0085c070] */
    st::external_0000010A((CFsgsConnection *)&DAT_00802a90,4,st::pointer_boundary_cast<char *>(puVar1));
  }
  /* ST_CALLSITE[005C85F3]: CALL dword ptr [EDX + 0x28] */
  (*this_00->vtable->PrepPlList)((SettMapSTy *)this_00);
  /* ST_CALLSITE[005C85FA]: CALL 0x004049d5; direct=004049D5 SettMapTy::PaintSettMap */
  st::fn_004049D5(this_00,'\0');
  puVar11 = this_00->field_1F60;
  memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
  local_28 = 5;
  iVar6 = 7;
  do {
    if (*puVar11 != 0) {
      st::fn_006E6080(this_00,2,*puVar11,local_38);
    }
    puVar11 = puVar11 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  g_currentExceptionFrame = local_7c.previous;
  return;
}

// 005C87C0 SettMapTy::PaintSC
#line 4 "decomp/ST.exe/functions/005C87C0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::PaintSC

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005C87C0(SettMapTy *this)

{
  SettMapTy *pSVar2;
  byte bVar3;
  int errorCode;
  DArrayTy *pDVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  InternalExceptionFrame local_4c;
  SettMapTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if ((DAT_008087b6 != 0) && (g_startSystem_0081176C->field_02F4 != nullptr)) {
      st::fn_006E83F0((RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_02F0,0x14,0x14,
                   0x8b,(uint)DAT_008087c2);
      st::fn_006B5440(g_startSystem_0081176C->field_02F0,0,0x14,0x14,
                   (tagBITMAPINFO *)g_startSystem_0081176C->field_02F4,0,0);
      pSVar2 = local_8;
      if ((DAT_0080734b != '\0') &&
         ((pDVar4 = local_8->field_1F84, pDVar4 != nullptr && (0 < (int)pDVar4->count)))) {
        bVar8 = pDVar4->count != 0;
        uVar7 = 0;
        do {
          if (bVar8) {
            pcVar6 = DArrayAt<char>(pDVar4, uVar7);
          }
          else {
            pcVar6 = nullptr;
          }
          if ((((pcVar6 != nullptr) && (*pcVar6 != '\0')) && (pcVar6[4] != '\0')) &&
             (pcVar6[2] != -1)) {
            switch(pcVar6[2]) {
            case '\0':
              bVar3 = 0xfc;
              break;
            case '\x01':
              bVar3 = 0xfa;
              break;
            case '\x02':
              bVar3 = 0xfb;
              break;
            case '\x03':
              bVar3 = 0xf9;
              break;
            case '\x04':
              bVar3 = 0xfd;
              break;
            case '\x05':
              bVar3 = 0xfe;
              break;
            case '\x06':
              bVar3 = 0xf3;
              break;
            case '\a':
              bVar3 = 7;
              break;
            default:
              bVar3 = 0xff;
            }
            st::fn_006E8460(*(undefined4 *)(pcVar6 + 0x54),*(undefined4 *)(pcVar6 + 0x58),4,bVar3);
          }
          pDVar4 = pSVar2->field_1F84;
          uVar7 = uVar7 + 1;
          bVar8 = uVar7 < pDVar4->count;
        } while ((int)uVar7 < (int)pDVar4->count);
      }
      if (-1 < (int)g_startSystem_0081176C->field_02EC) {
        st::fn_006B35D0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_02EC);
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x4ac,0,errorCode,
                             st::mutable_c_string("%s"),"SettMapTy::PaintSC");
  if (iVar5 == 0) {
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x4ac);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 005C8A40 SettMapTy::GetMessage
#line 4 "decomp/ST.exe/functions/005C8A40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0040327E|005C8A40; family_names=SettMapTy::GetMessage; ret4=2;
   direct_offsets={10:14,14:29,18:15,1c:13}

   [STSwitchEnumApplier] Switch target field_1E26 uses
   /SubmarineTitans/Recovered/Enums/SettMapTy_field_1E26State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21

   [STSwitchEnumApplier] Switch target field_2179 uses
   /SubmarineTitans/Recovered/Enums/SettMapTy_field_2179State. Cases:
   CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

int __thiscall st::fn_005C8A40(SettMapTy *this,STMessage *message)

{
  SettMapTy_field_1E26State SVar1;
  word wVar2;
  STMessageId SVar3;
  DArrayTy *pDVar4;
  ccFntTy *pcVar5;
  MMMObjTy *pMVar6;
  int *piVar7;
  SettMapTy *this_00;
  byte bVar9;
  DWORD DVar11;
  int local_EAX_61;
  void *pvVar11;
  DArrayTy *local_EAX_1567;
  char *local_EAX_2657;
  char *local_EAX_2734;
  char *local_EAX_2811;
  char *pcVar16;
  char *pcVar11_mg0;
  char *pcVar11_mg1;
  char *pcVar11_mg2;
  char *local_EAX_4384;
  char *local_EAX_4461;
  char *local_EAX_4558;
  char *local_EAX_5425;
  char *local_EAX_6017;
  char *local_EAX_6094;
  char *local_EAX_6171;
  char *local_EAX_6372;
  char *local_EAX_6449;
  char *local_EAX_6526;
  char *local_EAX_6727;
  char *local_EAX_6804;
  char *local_EAX_6881;
  DWORD DVar12;
  char *local_EAX_7168;
  char *pcVar17_mg15;
  char *local_EAX_7946;
  char cVar10;
  char *local_EAX_8538;
  char *local_EAX_8607;
  char *local_EAX_8763;
  char *local_EAX_8808;
  BITMAPINFO *pBVar13;
  int iVar14;
  int iVar12;
  int iVar17;
  int iVar15;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  MMsgTy *this_01;
  DArrayTy *local_ECX_8181;
  char *pcVar21;
  RecoveredSourceFamily_dibcopy *pRVar22;
  UINT resourceId;
  uint uVar23;
  InternalExceptionFrame local_dc;
  CHAR local_98 [52];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  SettMapTy *local_38;
  int local_34;
  int local_30;
  int local_2c;
  dword local_28;
  dword local_24;
  UINT local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;
  DArrayTy *pDVar21;
  uint SVar4;
  DArrayTy *temp_3f8badc5d2;
  DArrayTy *temp_3fb09b0dd7;
  DArrayTy *temp_3f9b3ed2a5;
  DArrayTy *pDVar12;

  local_38 = this;
  DVar11 = st::fn_006E51B0(this->field_0010);
  this->field_0061 = DVar11;
  local_dc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_dc;
  local_EAX_61 = st::fn_0072D7F0(local_dc.jumpBuffer,0);
  this_00 = local_38;
  if (local_EAX_61 != 0) {
    g_currentExceptionFrame = local_dc.previous;
    iVar17 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x758,0,local_EAX_61,
                                st::mutable_c_string("%s"),"SettMapTy::GetMessage");
    if (iVar17 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_61,0,st::mutable_c_string("E:\\__titans\\Start\\sett_obj.cpp"),0x758);
    return 0xffff;
  }
  st::fn_00402563(local_38,message);
  SVar3 = message->id;
  if (SVar3 < MESS_SETTMAPMTY_6549) {
    if (SVar3 == MESS_SETTMAPTY_6548) {
      if (this_00->field_0065 == '\x01') {
        DAT_00808a95 = DAT_00808a95 == '\0';
        uVar18 = this_00->field_2125[9];
        this_00->field_002D = 5;
        st::fn_006E6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
      }
      goto cf_common_join_005CA971;
    }
    if (SVar3 < MESS_WAITTY_6333) {
      if (SVar3 == MESS_SHARED_6332) {
        /* ST_CALLSITE[005C8C65]: CALL 0x00404d72; direct=00404D72 StartSystemTy::PaintBinDesc */
        st::fn_00404D72(g_startSystem_0081176C,(AnonShape_005DE050_5BD86458 *)message);
      }
      else if (SVar3 < 0x610b) {
        if (SVar3 == MESS_SHARED_610A) {
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = message->id;
          this_00->field_0051 = 6;
          st::fn_00404DB8((MTaskTy *)this_00);
        }
        else if (SVar3 < 6) {
          if (SVar3 == MESS_SHARED_0005) {
            /* ST_CALLSITE[005C8B27]: CALL 0x004049d5; direct=004049D5 SettMapTy::PaintSettMap */
            st::fn_004049D5(this_00,'\0');
          }
          else if (SVar3 == MESS_ID_NONE) {
            /* ST_CALLSITE[005C8B1C]: CALL dword ptr [EAX + 0xc] */
            this_00->NoneSettMap();
          }
          else if (SVar3 == MESS_ID_CREATE) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            this_00->field_1E27 = *(uint *)((message->arg0).u32 + 0x18);
            /* ST_CALLSITE[005C8B10]: CALL dword ptr [EAX + 0x10] */
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            this_00->sub_005C29B0(*(undefined1 *)((message->arg0).u32 + 0x14));
          }
          else if (SVar3 == MESS_SHARED_0003) {
            /* ST_CALLSITE[005C8AF1]: CALL dword ptr [EAX + 0x14] */
            this_00->DoneSettMap();
          }
        }
        else if (SVar3 == MESS_SHARED_6105) {
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = message->id;
          this_00->field_0051 = static_cast<undefined4>((message->arg0).u32);
          this_00->field_0055 = static_cast<undefined4>((message->arg1).u32);
          st::fn_00404DB8((MTaskTy *)this_00);
        }
        else if (SVar3 == MESS_SHARED_6109) goto switchD_005c8bd0_caseD_611f;
      }
      else {
        switch(SVar3) {
        case MESS_SHARED_611F:
switchD_005c8bd0_caseD_611f:
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = message->id;
          this_00->field_0051 = static_cast<undefined4>((message->arg0).u32);
          this_00->field_0055 = static_cast<undefined4>((message->arg1).u32);
          st::fn_00404DB8((MTaskTy *)this_00);
          break;
        case MESS_SHARED_6200:
          this_00->field_1F88 = static_cast<undefined4>((message->arg0).u32);
          /* ST_CALLSITE[005C8BE4]: CALL dword ptr [EDX + 0x2c] */
          (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
          break;
        case MESS_PLAYPANELTY_6201:
          /* ST_CALLSITE[005C8BF8]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
          st::fn_004031D4
                    ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_0x1c6b
                     ,(int)message,0);
          break;
        case MESS_PLAYPANELTY_6202:
          /* ST_CALLSITE[005C8C0E]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
          st::fn_004031D4
                    ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_0x1cfc
                     ,(int)message,0);
          break;
        case MESS_SETTMAPTY_6203:
          uVar18 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
          this_00->field_1DAD = uVar18;
          if (this_00->field_1D91 != 0xffffffff) {
            st::fn_006B3730
                      ((uint *)this_00->field_1DD5,this_00->field_1D91,this_00->field_1D95,
                       this_00->field_1DA9,uVar18);
          }
        }
      }
      goto cf_common_join_005CA971;
    }
    if (SVar3 < MESS_SHARED_6504) {
      if (SVar3 == MESS_SETTMAPTY_6503) {
        pDVar4 = this_00->field_1E2F;
        uVar18 = (uint)(message->arg0).words.low;
        if (uVar18 < pDVar4->count) {
          pvVar11 = DArrayAt<void>(pDVar4, uVar18);
        }
        else {
          pvVar11 = nullptr;
        }
        cVar10 = STField<char>(pvVar11,0x104);
        local_c = (DArrayTy *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(cVar10));
        if (cVar10 != -1) {
          switch(cVar10) {
          case '\0':
            bVar9 = 0xfc;
            break;
          case '\x01':
            bVar9 = 0xfa;
            break;
          case '\x02':
            bVar9 = 0xfb;
            break;
          case '\x03':
            bVar9 = 0xf9;
            break;
          case '\x04':
            bVar9 = 0xfd;
            break;
          case '\x05':
            bVar9 = 0xfe;
            break;
          case '\x06':
            bVar9 = 0xf3;
            break;
          case '\a':
            bVar9 = 7;
            break;
          default:
            bVar9 = 0xff;
          }
          pRVar22 = static_cast<RecoveredSourceFamily_dibcopy *>((message->arg1).ptr);
          st::fn_006B4170(pRVar22,0,2,2,st::machine_word_boundary_cast<int>(pRVar22->field_0004 + -4),st::machine_word_boundary_cast<int>(pRVar22->field_0008 + -4),bVar9);
        }
        if ((message->arg0).words.high == 1) {
          pRVar22 = static_cast<RecoveredSourceFamily_dibcopy *>((message->arg1).ptr);
          st::fn_006B5EE0(pRVar22,0,0,0,pRVar22->field_0004,pRVar22->field_0008,0xf,0xd);
        }
      }
      else if (SVar3 < (MESS_SHARED_6334|MESS_ID_CREATE)) {
        if (SVar3 == MESS_WAITTY_6335) {
          g_startSystem_0081176C->field_04CF =
               *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
          if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
            st::fn_006B3730
                      ((uint *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3
                       ,g_startSystem_0081176C->field_04B7,g_startSystem_0081176C->field_04CB,
                       g_startSystem_0081176C->field_04CF);
          }
        }
        else if (SVar3 == MESS_WAITTY_6333) {
          /* ST_CALLSITE[005C8CC8]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
          st::fn_004031D4
                    ((MMMObjTy *)this_00,
                     (RecoveredRecord_MMMObjTy_005B6560 *)&g_startSystem_0081176C->field_038D,
                     (int)message,0);
        }
        else if (SVar3 == MESS_SHARED_6334) {
          /* ST_CALLSITE[005C8CAD]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
          st::fn_004031D4
                    ((MMMObjTy *)this_00,
                     (RecoveredRecord_MMMObjTy_005B6560 *)&g_startSystem_0081176C->field_041E,
                     (int)message,0);
        }
      }
      else if (SVar3 == MESS_SHARED_64FF) {
        switch((message->arg1).u32) {
        case 0:
          uVar18 = (message->arg0).u32;
          if (uVar18 != 0xffffffff) {
            this_00->field_1F57 = (char)uVar18;
            if ((uVar18 & 0xff) == 0) {
              if (3 < this_00->field_1F5C) {
                uVar18 = this_00->field_1F60[1];
                this_00->field_1F5C = 3;
                this_00->field_002D = 5;
                st::fn_006E6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
                st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_1F80);
              }
            }
            else if (((uVar18 & 0xff) == 1) && (5 < this_00->field_1F5C)) {
              uVar18 = this_00->field_1F60[1];
              this_00->field_1F5C = 4;
              this_00->field_002D = 5;
              st::fn_006E6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
              st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_1F80);
            }
cf_common_join_005C8ECC:
            this_00->field_1F47 = 0;
          }
          break;
        case 1:
          if ((message->arg0).u32 != 0xffffffff) {
            this_00->field_1F5C = (char)(message->arg0).u32 + 2;
            goto cf_common_join_005C8ECC;
          }
          break;
        case 2:
          if ((message->arg0).u32 != 0xffffffff) {
            this_00->field_1F58 = (message->arg0).u32;
            goto cf_common_join_005C8ECC;
          }
          break;
        case 3:
          if ((message->arg0).u32 != 0xffffffff) {
            this_00->field_1F5F = (char)(message->arg0).u32;
            goto cf_common_join_005C8ECC;
          }
          break;
        case 4:
          if ((message->arg0).u32 != 0xffffffff) {
            this_00->field_1F5D = (char)(message->arg0).u32;
            goto cf_common_join_005C8ECC;
          }
          break;
        case 5:
          if ((message->arg0).u32 != 0xffffffff) {
            this_00->field_1F5E = (char)(message->arg0).u32;
            goto cf_common_join_005C8ECC;
          }
        }
        this_00->field_002D = 5;
        st::fn_006E6080(this_00,2,this_00->field_1F60[(message->arg1).u32],
                     (undefined4 *)&this_00->field_0x1d);
        st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_1F80);
      }
      else if (SVar3 == MESS_SETTMAPTY_6500) {
        st::fn_00710A90(g_startSystem_0081176C->field_0034,(message->arg1).i32,0,0,0,0,0);
        pDVar4 = this_00->field_1E2F;
        uVar18 = (uint)(message->arg0).words.low;
        if (uVar18 < pDVar4->count) {
          pcVar17 = DArrayAt<char>(pDVar4, uVar18);
        }
        else {
          pcVar17 = nullptr;
        }
        st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar17,-1,-1,
                       3 - ((message->arg0).words.high != 1));
        if ((message->arg0).words.high == 1) {
          pRVar22 = static_cast<RecoveredSourceFamily_dibcopy *>((message->arg1).ptr);
          st::fn_006B5EE0(pRVar22,0,0,0,pRVar22->field_0004,pRVar22->field_0008,0xf,0xd);
        }
      }
      goto cf_common_join_005CA971;
    }
    switch(SVar3) {
    case MESS_FSGSTY_6506:
      pDVar4 = this_00->field_1E2F;
      uVar18 = (message->arg0).u32;
      if (uVar18 < pDVar4->count) {
        switch((message->arg1).u32) {
        case 0:
          SVar1 = this_00->field_1E26;
          if (((SVar1 == CASE_6) || (SVar1 == CASE_1)) ||
             (temp_3fb09b0dd7 = PTR_0080c502, SVar1 == CASE_2)) {
            temp_3fb09b0dd7 = (DArrayTy *)PTR_0080c506;
          }
          if (uVar18 < temp_3fb09b0dd7->count) {
            if (((SVar1 == CASE_6) || (SVar1 == CASE_1)) ||
               (temp_3f8badc5d2 = PTR_0080c502, SVar1 == CASE_2)) {
              temp_3f8badc5d2 = (DArrayTy *)PTR_0080c506;
            }
            if (((SVar1 == CASE_6) || (SVar1 == CASE_1)) ||
               (local_EAX_1567 = PTR_0080c502, SVar1 == CASE_2)) {
              local_EAX_1567 = (DArrayTy *)PTR_0080c506;
            }
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pvVar11 = (void *)(local_EAX_1567->elementSize * uVar18 + (int)temp_3f8badc5d2->data);
          }
          else {
            pvVar11 = nullptr;
          }
          if (pvVar11 == nullptr) {
            this_00->field_1C5F = 0;
            DAT_0080995c = 1;
            memset(&DAT_00809960, 0, 0x20); /* compiler bulk-zero initialization */
            /* ST_CALLSITE[005C9100]: CALL 0x00402bf3; direct=00402BF3 StartSystemTy::SetObjectives */
            st::fn_00402BF3
                      (g_startSystem_0081176C,(int)this_00->field_1F43,nullptr,
                       this_00->field_1C63);
          }
          else {
            this_00->field_1C5F = uVar18;
            DAT_0080995c = STField<undefined4>(pvVar11,0x90);
            uVar18 = 0xffffffff;
            pcVar17 = (char *)((int)pvVar11 + 0x4c);
            do {
              pcVar21 = pcVar17;
              if (uVar18 == 0) break;
              uVar18 = uVar18 - 1;
              pcVar21 = pcVar17 + 1;
              cVar10 = *pcVar17;
              pcVar17 = pcVar21;
            } while (cVar10 != '\0');
            uVar18 = ~uVar18;
            pcVar17 = pcVar21 + -uVar18;
            pcVar21 = (char *)&DAT_00809960;
            memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
            uVar19 = 0;
            uVar18 = 0;
            /* ST_CALLSITE[005C90BE]: CALL 0x00402bf3; direct=00402BF3 StartSystemTy::SetObjectives */
            st::fn_00402BF3
                      (g_startSystem_0081176C,(int)this_00->field_1F43,(char *)((int)pvVar11 + 0x70)
                       ,this_00->field_1C63);
          }
          this_00->field_002D = 5;
          st::fn_006E6080(this_00,2,this_00->field_2125[0],(undefined4 *)&this_00->field_0x1d);
          if ((DAT_008067a0 != '\0') && (g_int_00811764 != nullptr)) {
            st::fn_006B6160((char *)&this_00->array_00BC[0xc].field_0x1df,(int)(g_int_00811764 + 6));
            this_00->field_1A7F = 1;
            this_00->field_1A80 = DAT_008087c6;
            this_00->field_1A81 = (char)(DAT_008087c2 >> 1);
            /* ST_CALLSITE[005C9177]: CALL dword ptr [0x0085bde8] */
            st::external_00000080((LPSTR)&local_64,st::mutable_c_string("%08x"),DAT_0080995c);
            this_00->field_1A82 = local_64;
            this_00->field_1A86 = local_60;
            st::fn_0072E340(&this_00->field_1A8A,&CHAR_00h_0080c3c3,0x1d5);
            this_00->field_1C5E = 0;
          }
          /* ST_CALLSITE[005C91B2]: CALL dword ptr [EDX + 0x2c] */
          (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
          break;
        /* ST_PSEUDO[dynamic_array_indexing,packed_or_unaligned_piece]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array); expected named packed member, bit extract/compose, or unaligned load */
        case 3:
          STPiece<0,2>(DAT_00808a90) =
               CONCAT11(*(undefined1 *)(pDVar4->elementSize * uVar18 + 0x104 + (int)pDVar4->data),
                        (char)DAT_00808a90);
          uVar18 = this_00->field_2125[3];
          this_00->field_002D = 5;
          st::fn_006E6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
          break;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        case 4:
          DAT_00808a90 = STReplaceLowByte((uint32_t)(DAT_00808a90), (uint8_t)(*(undefined1 *) (pDVar4->elementSize * uVar18 + 0x104 + (int)pDVar4->data)));
          uVar18 = this_00->field_2125[4];
          this_00->field_002D = 5;
          st::fn_006E6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
          break;
        /* ST_PSEUDO[dynamic_array_indexing,packed_or_unaligned_piece]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array); expected named packed member, bit extract/compose, or unaligned load */
        case 5:
          STPiece<0,3>(DAT_00808a90) =
               CONCAT12(*(undefined1 *)(pDVar4->elementSize * uVar18 + 0x104 + (int)pDVar4->data),
                        (undefined2)DAT_00808a90);
          uVar18 = this_00->field_2125[5];
          this_00->field_002D = 5;
          st::fn_006E6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
          bVar9 = STPiece<2,1>(DAT_00808a90);
          if (STPiece<3,1>(DAT_00808a90) < STPiece<2,1>(DAT_00808a90)) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            DAT_00808a90 = CONCAT13(bVar9,(undefined3)DAT_00808a90);
            uVar18 = this_00->field_2125[6];
            this_00->field_002D = 5;
            st::fn_006E6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
          }
          break;
        /* ST_PSEUDO[dynamic_array_indexing,packed_or_unaligned_piece]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array); expected named packed member, bit extract/compose, or unaligned load */
        case 6:
          DAT_00808a90 = CONCAT13(*(undefined1 *)
                                   (pDVar4->elementSize * uVar18 + 0x104 + (int)pDVar4->data),
                                  (undefined3)DAT_00808a90);
          uVar18 = this_00->field_2125[6];
          this_00->field_002D = 5;
          st::fn_006E6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
          if (STPiece<3,1>(DAT_00808a90) < STPiece<2,1>(DAT_00808a90)) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            STPiece<0,3>(DAT_00808a90) = CONCAT12(STPiece<3,1>(DAT_00808a90),(undefined2)DAT_00808a90);
            uVar18 = this_00->field_2125[5];
            this_00->field_002D = 5;
            st::fn_006E6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
          }
          break;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        case 7:
          DAT_00808a97 = *(int *)(pDVar4->elementSize * uVar18 + 0x104 + (int)pDVar4->data);
          uVar18 = this_00->field_2125[7];
          this_00->field_002D = 5;
          st::fn_006E6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
          break;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        case 8:
          DAT_00808a9b = *(byte *)(pDVar4->elementSize * uVar18 + 0x104 + (int)pDVar4->data);
          uVar18 = this_00->field_2125[8];
          this_00->field_002D = 5;
          st::fn_006E6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
        }
      }
      break;
    case 0x653f:
      if (this_00->field_0065 == '\x01') {
        SVar1 = this_00->field_1E26;
        if (((SVar1 == CASE_6) || (SVar1 == CASE_1)) || (pDVar21 = PTR_0080c502, SVar1 == CASE_2)) {
          pDVar21 = (DArrayTy *)PTR_0080c506;
        }
        this_00->field_2171 = 0x6506;
        this_00->field_2179 = 0;
        this_00->field_2191 = 0x6500;
        this_00->field_21A1 = 0;
        local_8 = nullptr;
        this_00->field_1E2F->count = 0;
        local_c = pDVar21;
        if (pDVar21->count != 0) {
          do {
            pcVar17 = DArrayAt<char>(pDVar21, (int)local_8);
            if (pcVar17 != nullptr) {
              this_00->field_1F37 = st::machine_word_boundary_cast<undefined4>(local_8);
              uVar18 = 0xffffffff;
              do {
                pcVar21 = pcVar17;
                if (uVar18 == 0) break;
                uVar18 = uVar18 - 1;
                pcVar21 = pcVar17 + 1;
                cVar10 = *pcVar17;
                pcVar17 = pcVar21;
              } while (cVar10 != '\0');
              uVar18 = ~uVar18;
              pcVar17 = pcVar21 + -uVar18;
              pcVar21 = &this_00->field_1E33;
              memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
              uVar19 = 0;
              st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
              pDVar21 = local_c;
            }
            local_8 = (DArrayTy *)((int)&local_8->flags + 1);
          } while (local_8 < (DArrayTy *)pDVar21->count);
        }
        this_00->field_21A9 = this_00->field_1E2F->count;
        this_00->field_21A1 = this_00->field_1C5F;
        this_00->field_21C5 = 0x1c5;
        this_00->field_21CD = 0x154;
        this_00->field_21C9 = 0x14e;
        goto LAB_005c9fef;
      }
      break;
    case 0x6542:
    case 0x6543:
    case 0x6544:
    case 0x6545:
      if (this_00->field_0065 != '\x01') break;
      this_00->field_2171 = 0x6506;
      this_00->field_2179 = st::machine_word_boundary_cast<SettMapTy_field_2179State>(message->id - 0x653f);
      this_00->field_2191 = 0x6500;
      this_00->field_1E2F->count = 0;
      local_EAX_2657 = st::fn_006B0140(0x234e,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar17 = local_EAX_2657;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar17 = local_EAX_2657 + 1;
        cVar10 = *local_EAX_2657;
        local_EAX_2657 = pcVar17;
      } while (cVar10 != '\0');
      uVar18 = ~uVar18;
      pcVar17 = pcVar17 + -uVar18;
      pcVar21 = &this_00->field_1E33;
      memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      this_00->field_1F37 = 0;
      st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
      local_EAX_2734 = st::fn_006B0140(0x234c,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar17 = local_EAX_2734;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar17 = local_EAX_2734 + 1;
        cVar10 = *local_EAX_2734;
        local_EAX_2734 = pcVar17;
      } while (cVar10 != '\0');
      uVar18 = ~uVar18;
      pcVar17 = pcVar17 + -uVar18;
      pcVar21 = &this_00->field_1E33;
      memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      this_00->field_1F37 = 1;
      st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
      local_EAX_2811 = st::fn_006B0140(0x234f,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar17 = local_EAX_2811;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar17 = local_EAX_2811 + 1;
        cVar10 = *local_EAX_2811;
        local_EAX_2811 = pcVar17;
      } while (cVar10 != '\0');
      uVar18 = ~uVar18;
      pcVar17 = pcVar17 + -uVar18;
      pcVar21 = &this_00->field_1E33;
      memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      this_00->field_1F37 = 2;
      st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
      this_00->field_21A9 = this_00->field_1E2F->count;
      switch(this_00->field_2179) {
      case CASE_3:
        bVar9 = STPiece<1,1>(DAT_00808a90);
        goto LAB_005c95d4;
      case CASE_4:
        this_00->field_21A1 = DAT_00808a90 & 0xff;
        break;
      case CASE_5:
        this_00->field_21A1 = DAT_00808a90 >> 0x10 & 0xff;
        break;
      case CASE_6:
        bVar9 = STPiece<3,1>(DAT_00808a90);
LAB_005c95d4:
        this_00->field_21A1 = (uint)bVar9;
      }
      switch(this_00->field_2179) {
      case CASE_3:
      case CASE_5:
        this_00->field_21C5 = 0x1c5;
        break;
      case CASE_4:
      case CASE_6:
        this_00->field_21C5 = 0x2bf;
      }
      this_00->field_21CD = 0x5a;
      switch(this_00->field_2179) {
      case CASE_3:
      case CASE_4:
        this_00->field_21C9 = 0x164;
        break;
      case CASE_5:
      case CASE_6:
        this_00->field_21C9 = 0x17a;
      }
      pcVar5 = g_startSystem_0081176C->field_0034;
      iVar15 = pcVar5->field_00A0;
joined_r0x005c964b:
      if (iVar15 != 0) {
        st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar5);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar5->field_0x8a;
      /* ST_CALLSITE[005C9679]: CALL dword ptr [EAX + 0x8] */
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,0x100ef,nullptr,nullptr,
                 st::machine_word_boundary_cast<undefined4>(&this_00->field_0x2161),0);
      break;
    case 0x6546:
      if (this_00->field_0065 == '\x01') {
        this_00->field_2171 = 0x6506;
        this_00->field_2179 = 7;
        this_00->field_2191 = 0x6500;
        this_00->field_21A1 = 0;
        pcVar17 = &this_00->field_1E33;
        this_00->field_1E2F->count = 0;
        this_00->field_1F37 = 100;
        /* ST_CALLSITE[005C96DB]: CALL EDI */
        st::external_00000080(pcVar17,st::mutable_c_string("%d"),100);
        st::fn_006AE1C0(this_00->field_1E2F,pcVar17);
        this_00->field_1F37 = 0x96;
        /* ST_CALLSITE[005C9702]: CALL EDI */
        st::external_00000080(pcVar17,st::mutable_c_string("%d"),0x96);
        st::fn_006AE1C0(this_00->field_1E2F,pcVar17);
        this_00->field_1F37 = 200;
        /* ST_CALLSITE[005C9729]: CALL EDI */
        st::external_00000080(pcVar17,st::mutable_c_string("%d"),200);
        st::fn_006AE1C0(this_00->field_1E2F,pcVar17);
        this_00->field_1F37 = 0xffffffff;
        pcVar16 = st::fn_006B0140(0x1f55,g_hINSTANCE_00807618);
        uVar18 = 0xffffffff;
        do {
          pcVar17 = pcVar16;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar17 = pcVar16 + 1;
          cVar10 = *pcVar16;
          pcVar16 = pcVar17;
        } while (cVar10 != '\0');
        uVar18 = ~uVar18;
        pcVar17 = pcVar17 + -uVar18;
        pcVar21 = &this_00->field_1E33;
        memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
        uVar19 = 0;
        st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
        this_00->field_21A9 = this_00->field_1E2F->count;
        if (DAT_00808a97 == 0x96) {
          this_00->field_21A1 = 1;
        }
        else if (DAT_00808a97 == 200) {
          this_00->field_21A1 = 2;
        }
        else if (DAT_00808a97 == -1) {
          this_00->field_21A1 = 3;
        }
        this_00->field_21C5 = 0x1c5;
        this_00->field_21CD = 0x5a;
        this_00->field_21C9 = 400;
        pcVar5 = g_startSystem_0081176C->field_0034;
        if (pcVar5->field_00A0 != 0) {
          st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar5);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar5->field_0x8a;
        /* ST_CALLSITE[005C982D]: CALL dword ptr [EDX + 0x8] */
        (*this_00->field_000C->vtable->CreateObject)
                  ((SystemClassTy *)this_00->field_000C,0x100ef,nullptr,nullptr,
                   st::machine_word_boundary_cast<undefined4>(&this_00->field_0x2161),0);
      }
      break;
    case MESS_SETTMAPTY_6547:
      if (this_00->field_0065 == '\x01') {
        this_00->field_2171 = 0x6506;
        this_00->field_2179 = 8;
        this_00->field_2191 = 0x6500;
        this_00->field_21A1 = 0;
        uVar23 = 1;
        pcVar17 = &this_00->field_1E33;
        this_00->field_1E2F->count = 0;
        this_00->field_1F37 = 0;
        pcVar11_mg0 = st::fn_006B0140(0x1f57,g_hINSTANCE_00807618);
        /* ST_CALLSITE[005C9897]: CALL dword ptr [0x0085bde8] */
        st::external_00000080(pcVar17,st::mutable_c_string("%s %d"),pcVar11_mg0,uVar23);
        st::fn_006AE1C0(this_00->field_1E2F,pcVar17);
        this_00->field_1F37 = 1;
        uVar23 = 2;
        pcVar11_mg1 = st::fn_006B0140(0x1f57,g_hINSTANCE_00807618);
        /* ST_CALLSITE[005C98D1]: CALL dword ptr [0x0085bde8] */
        st::external_00000080(pcVar17,st::mutable_c_string("%s %d"),pcVar11_mg1,uVar23);
        st::fn_006AE1C0(this_00->field_1E2F,pcVar17);
        this_00->field_1F37 = 2;
        uVar23 = 3;
        pcVar11_mg2 = st::fn_006B0140(0x1f57,g_hINSTANCE_00807618);
        /* ST_CALLSITE[005C990A]: CALL dword ptr [0x0085bde8] */
        st::external_00000080(pcVar17,st::mutable_c_string("%s %d"),pcVar11_mg2,uVar23);
        st::fn_006AE1C0(this_00->field_1E2F,pcVar17);
        this_00->field_21A9 = this_00->field_1E2F->count;
        this_00->field_21A1 = (uint)DAT_00808a9b;
        this_00->field_21C5 = 0x2bf;
        this_00->field_21CD = 0x5a;
        this_00->field_21C9 = 400;
        pcVar5 = g_startSystem_0081176C->field_0034;
        iVar15 = pcVar5->field_00A0;
        goto joined_r0x005c996c;
      }
    }
    goto cf_common_join_005CA971;
  }
  if (SVar3 < MESS_SHARED_6900) {
    if (SVar3 == MESS_MMSGTY_68FF) {
      if (this_00->field_0065 == '\x01') {
        this_00->field_2171 = 0x64ff;
        this_00->field_2179 = st::machine_word_boundary_cast<SettMapTy_field_2179State>(message->id - 0x68ff);
        this_00->field_2191 = 0x6500;
        this_00->field_1E2F->count = 0;
        local_EAX_4384 = st::fn_006B0140(0x234b,g_hINSTANCE_00807618);
        uVar18 = 0xffffffff;
        do {
          pcVar17 = local_EAX_4384;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar17 = local_EAX_4384 + 1;
          cVar10 = *local_EAX_4384;
          local_EAX_4384 = pcVar17;
        } while (cVar10 != '\0');
        uVar18 = ~uVar18;
        pcVar17 = pcVar17 + -uVar18;
        pcVar21 = &this_00->field_1E33;
        memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
        uVar19 = 0;
        this_00->field_1F37 = 0;
        st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
        local_EAX_4461 = st::fn_006B0140(0x234c,g_hINSTANCE_00807618);
        uVar18 = 0xffffffff;
        do {
          pcVar17 = local_EAX_4461;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar17 = local_EAX_4461 + 1;
          cVar10 = *local_EAX_4461;
          local_EAX_4461 = pcVar17;
        } while (cVar10 != '\0');
        uVar18 = ~uVar18;
        pcVar17 = pcVar17 + -uVar18;
        pcVar21 = &this_00->field_1E33;
        memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
        uVar19 = 0;
        this_00->field_1F37 = 1;
        st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
        if ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000) {
          local_EAX_4558 = st::fn_006B0140(0x234d,g_hINSTANCE_00807618);
          uVar18 = 0xffffffff;
          do {
            pcVar17 = local_EAX_4558;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pcVar17 = local_EAX_4558 + 1;
            cVar10 = *local_EAX_4558;
            local_EAX_4558 = pcVar17;
          } while (cVar10 != '\0');
          uVar18 = ~uVar18;
          pcVar17 = pcVar17 + -uVar18;
          pcVar21 = &this_00->field_1E33;
          memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
          uVar19 = 0;
          this_00->field_1F37 = 2;
          st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
        }
        this_00->field_21A9 = this_00->field_1E2F->count;
        this_00->field_21A1 = (uint)(byte)this_00->field_1F57;
        this_00->field_21C5 = 0x1a;
        this_00->field_21CD = 0xe0;
        this_00->field_21C9 = 0xba;
        goto LAB_005c9c8a;
      }
    }
    else {
      switch(SVar3) {
      case MESS_SETTMAPMTY_6549:
        if (this_00->field_0065 == '\x01') {
          DAT_00808a8f = DAT_00808a8f == '\0';
          uVar18 = this_00->field_2125[10];
          this_00->field_002D = 5;
          st::fn_006E6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
          /* ST_CALLSITE[005C9A3B]: CALL dword ptr [EDX + 0x2c] */
          (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
        }
        break;
      case MESS_SETTMAPMTY_654A:
        if (this_00->field_0065 == '\x01') {
          DAT_00808a94 = DAT_00808a94 == '\0';
          uVar18 = this_00->field_2125[0xb];
          this_00->field_002D = 5;
          st::fn_006E6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case MESS_SETTMAPMTY_654B:
        if (this_00->field_0065 == '\x01') {
          DAT_00808aa9 = DAT_00808aa9 == '\0';
          uVar18 = this_00->field_2125[0xc];
          this_00->field_002D = 5;
          st::fn_006E6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case MESS_SETTMAPMTY_654C:
        if (this_00->field_0065 == '\x01') {
          DAT_00808aaa = DAT_00808aaa == '\0';
          uVar18 = this_00->field_2125[0xd];
          this_00->field_002D = 5;
          st::fn_006E6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case MESS_SETTMAPTY_654D:
        if (this_00->field_0065 == '\x01') {
          DAT_0080734b = DAT_0080734b == '\0';
          DAT_00808aa8 = DAT_0080734b;
          /* ST_CALLSITE[005C9B0E]: CALL 0x00402a9a; direct=00402A9A SettMapTy::PaintSC */
          st::fn_00402A9A(this_00);
        }
      }
    }
    goto cf_common_join_005CA971;
  }
  switch(SVar3) {
  case MESS_SHARED_6900:
    if (this_00->field_0065 == '\x01') {
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = st::machine_word_boundary_cast<SettMapTy_field_2179State>(message->id - 0x68ff);
      this_00->field_2191 = 0x6500;
      local_8 = (DArrayTy *)0x3;
      if ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000) {
        if (this_00->field_1F57 == '\0') {
          local_8 = (DArrayTy *)0x2;
        }
        else if (this_00->field_1F57 == '\x01') {
          local_8 = (DArrayTy *)0x4;
        }
        else {
          local_8 = (DArrayTy *)0x7;
        }
      }
      this_00->field_1E2F->count = 0;
      if (local_8 != nullptr) {
        iVar15 = 2;
        do {
          local_EAX_5425 = st::fn_006B0140(0x2354,g_hINSTANCE_00807618);
          /* ST_CALLSITE[005C9F84]: CALL dword ptr [0x0085bde8] */
          st::external_00000080(st::pointer_boundary_cast<LPSTR>(&this_00->field_1E33),st::mutable_c_string("%d %s"),iVar15,local_EAX_5425);
          this_00->field_1F37 = iVar15;
          st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
          iVar14 = iVar15 + -1;
          iVar15 = iVar15 + 1;
        } while (iVar14 < (int)local_8);
      }
      this_00->field_21A9 = this_00->field_1E2F->count;
      this_00->field_21A1 = st::machine_word_boundary_cast<uint>(this_00->field_1F5C - 2);
      this_00->field_21C5 = 0x1a;
      this_00->field_21CD = 0xe0;
      this_00->field_21C9 = 0xe2;
LAB_005c9fef:
      pcVar5 = g_startSystem_0081176C->field_0034;
      iVar15 = pcVar5->field_00A0;
joined_r0x005c996c:
      if (iVar15 != 0) {
        st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar5);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar5->field_0x8a;
      /* ST_CALLSITE[005C999A]: CALL dword ptr [EDX + 0x8] */
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,0x100ef,nullptr,nullptr,
                 st::machine_word_boundary_cast<undefined4>(&this_00->field_0x2161),0);
    }
    break;
  case MESS_FSGSTY_6901:
    if (this_00->field_0065 == '\x01') {
      if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
        local_c = (DArrayTy *)0x1;
      }
      else {
        local_c = (DArrayTy *)this_00->field_1F7C->count;
      }
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = st::machine_word_boundary_cast<SettMapTy_field_2179State>(message->id - 0x68ff);
      this_00->field_2191 = 0x6500;
      local_8 = nullptr;
      this_00->field_1E2F->count = 0;
      if (local_c != nullptr) {
        do {
          pDVar4 = this_00->field_1F7C;
          if (local_8 < (DArrayTy *)pDVar4->count) {
            pvVar11 = DArrayAt<void>(pDVar4, (int)local_8);
          }
          else {
            pvVar11 = nullptr;
          }
          uVar18 = 0xffffffff;
          pcVar17 = (char *)((int)pvVar11 + 0x104);
          do {
            pcVar21 = pcVar17;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pcVar21 = pcVar17 + 1;
            cVar10 = *pcVar17;
            pcVar17 = pcVar21;
          } while (cVar10 != '\0');
          uVar18 = ~uVar18;
          pcVar17 = pcVar21 + -uVar18;
          pcVar21 = &this_00->field_1E33;
          memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
          uVar19 = 0;
          this_00->field_1F37 = st::machine_word_boundary_cast<undefined4>(local_8);
          st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
          local_8 = (DArrayTy *)((int)&local_8->flags + 1);
        } while (local_8 < local_c);
      }
      this_00->field_21A9 = this_00->field_1E2F->count;
      this_00->field_21A1 = this_00->field_1F58;
      this_00->field_21C5 = 0x1a;
      this_00->field_21CD = 0xe0;
      this_00->field_21C9 = 0x10a;
      if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
        this_00->field_21C9 = 0x118;
      }
      pcVar5 = g_startSystem_0081176C->field_0034;
      if (pcVar5->field_00A0 != 0) {
        st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar5);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar5->field_0x8a;
      /* ST_CALLSITE[005CA171]: CALL dword ptr [EAX + 0x8] */
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,0x100ef,nullptr,nullptr,
                 st::machine_word_boundary_cast<undefined4>(&this_00->field_0x2161),0);
    }
    break;
  case MESS_MAINMENUTY_6902:
    if (this_00->field_0065 != '\x01') break;
    this_00->field_2171 = 0x64ff;
    this_00->field_2179 = st::machine_word_boundary_cast<SettMapTy_field_2179State>(message->id - 0x68ff);
    this_00->field_2191 = 0x6500;
    this_00->field_1E2F->count = 0;
    local_EAX_6017 = st::fn_006B0140(0x2355,g_hINSTANCE_00807618);
    uVar18 = 0xffffffff;
    do {
      pcVar17 = local_EAX_6017;
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      pcVar17 = local_EAX_6017 + 1;
      cVar10 = *local_EAX_6017;
      local_EAX_6017 = pcVar17;
    } while (cVar10 != '\0');
    uVar18 = ~uVar18;
    pcVar17 = pcVar17 + -uVar18;
    pcVar21 = &this_00->field_1E33;
    memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    this_00->field_1F37 = 0;
    st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
    local_EAX_6094 = st::fn_006B0140(0x234c,g_hINSTANCE_00807618);
    uVar18 = 0xffffffff;
    do {
      pcVar17 = local_EAX_6094;
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      pcVar17 = local_EAX_6094 + 1;
      cVar10 = *local_EAX_6094;
      local_EAX_6094 = pcVar17;
    } while (cVar10 != '\0');
    uVar18 = ~uVar18;
    pcVar17 = pcVar17 + -uVar18;
    pcVar21 = &this_00->field_1E33;
    memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    this_00->field_1F37 = 1;
    st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
    local_EAX_6171 = st::fn_006B0140(0x2356,g_hINSTANCE_00807618);
    uVar18 = 0xffffffff;
    do {
      pcVar17 = local_EAX_6171;
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      pcVar17 = local_EAX_6171 + 1;
      cVar10 = *local_EAX_6171;
      local_EAX_6171 = pcVar17;
    } while (cVar10 != '\0');
    uVar18 = ~uVar18;
    pcVar17 = pcVar17 + -uVar18;
    pcVar21 = &this_00->field_1E33;
    memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    this_00->field_1F37 = 2;
    st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
    this_00->field_21A9 = this_00->field_1E2F->count;
    this_00->field_21A1 = (uint)(byte)this_00->field_1F5F;
    this_00->field_21C5 = 0x1a;
    this_00->field_21CD = 0xe0;
    this_00->field_21C9 = 0x132;
LAB_005c9c8a:
    pcVar5 = g_startSystem_0081176C->field_0034;
    iVar15 = pcVar5->field_00A0;
    goto joined_r0x005c964b;
  case MESS_FSGSTY_6903:
    if (this_00->field_0065 == '\x01') {
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = st::machine_word_boundary_cast<SettMapTy_field_2179State>(message->id - 0x68ff);
      this_00->field_2191 = 0x6500;
      this_00->field_1E2F->count = 0;
      local_EAX_6372 = st::fn_006B0140(0x234e,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar17 = local_EAX_6372;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar17 = local_EAX_6372 + 1;
        cVar10 = *local_EAX_6372;
        local_EAX_6372 = pcVar17;
      } while (cVar10 != '\0');
      uVar18 = ~uVar18;
      pcVar17 = pcVar17 + -uVar18;
      pcVar21 = &this_00->field_1E33;
      memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      this_00->field_1F37 = 0;
      st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
      local_EAX_6449 = st::fn_006B0140(0x234c,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar17 = local_EAX_6449;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar17 = local_EAX_6449 + 1;
        cVar10 = *local_EAX_6449;
        local_EAX_6449 = pcVar17;
      } while (cVar10 != '\0');
      uVar18 = ~uVar18;
      pcVar17 = pcVar17 + -uVar18;
      pcVar21 = &this_00->field_1E33;
      memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      this_00->field_1F37 = 1;
      st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
      local_EAX_6526 = st::fn_006B0140(0x234f,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar17 = local_EAX_6526;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar17 = local_EAX_6526 + 1;
        cVar10 = *local_EAX_6526;
        local_EAX_6526 = pcVar17;
      } while (cVar10 != '\0');
      uVar18 = ~uVar18;
      pcVar17 = pcVar17 + -uVar18;
      pcVar21 = &this_00->field_1E33;
      memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      this_00->field_1F37 = 2;
      st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
      this_00->field_21A9 = this_00->field_1E2F->count;
      this_00->field_21A1 = (uint)(byte)this_00->field_1F5D;
      this_00->field_21C5 = 0x1a;
      this_00->field_21CD = 0xe0;
      this_00->field_21C9 = 0x15a;
      goto LAB_005c9c8a;
    }
    break;
  case MESS_FSGSTY_6904:
    if (this_00->field_0065 == '\x01') {
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = st::machine_word_boundary_cast<SettMapTy_field_2179State>(message->id - 0x68ff);
      this_00->field_2191 = 0x6500;
      this_00->field_1E2F->count = 0;
      local_EAX_6727 = st::fn_006B0140(0x234e,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar17 = local_EAX_6727;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar17 = local_EAX_6727 + 1;
        cVar10 = *local_EAX_6727;
        local_EAX_6727 = pcVar17;
      } while (cVar10 != '\0');
      uVar18 = ~uVar18;
      pcVar17 = pcVar17 + -uVar18;
      pcVar21 = &this_00->field_1E33;
      memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      this_00->field_1F37 = 0;
      st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
      local_EAX_6804 = st::fn_006B0140(0x234c,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar17 = local_EAX_6804;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar17 = local_EAX_6804 + 1;
        cVar10 = *local_EAX_6804;
        local_EAX_6804 = pcVar17;
      } while (cVar10 != '\0');
      uVar18 = ~uVar18;
      pcVar17 = pcVar17 + -uVar18;
      pcVar21 = &this_00->field_1E33;
      memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      this_00->field_1F37 = 1;
      st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
      local_EAX_6881 = st::fn_006B0140(0x234f,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar17 = local_EAX_6881;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar17 = local_EAX_6881 + 1;
        cVar10 = *local_EAX_6881;
        local_EAX_6881 = pcVar17;
      } while (cVar10 != '\0');
      uVar18 = ~uVar18;
      pcVar17 = pcVar17 + -uVar18;
      pcVar21 = &this_00->field_1E33;
      memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      this_00->field_1F37 = 2;
      st::fn_006AE1C0(this_00->field_1E2F,&this_00->field_1E33);
      this_00->field_21A9 = this_00->field_1E2F->count;
      this_00->field_21A1 = (uint)(byte)this_00->field_1F5E;
      this_00->field_21C5 = 0x1a;
      this_00->field_21CD = 0xe0;
      this_00->field_21C9 = 0x182;
      goto LAB_005c9c8a;
    }
    break;
  case MESS_FSGSTY_6905:
    if (this_00->field_0065 == '\x01') {
      /* ST_CALLSITE[005CA5AC]: CALL dword ptr [0x0085bedc] */
      DVar12 = st::external_000000DA();
      this_00->field_1F53 = DVar12;
      st::fn_004024D2();
    }
    break;
  case MESS_PRIVIDERTY_693F:
    /* ST_CALLSITE[005C9CD7]: CALL dword ptr [EAX + 0x20] */
    this_00->vfunc_20();
    break;
  case MESS_SHARED_6940:
    /* ST_CALLSITE[005C9CCB]: CALL dword ptr [EDX + 0x24] */
    this_00->vfunc_24();
    break;
  case MESS_CHOOSEMAPTY_6942:
    this_00->field_0045 = 0x200;
    this_00->field_0049 = 0;
    this_00->field_004D = 0x6102;
    this_00->field_0051 = 0;
    st::fn_00404DB8((MTaskTy *)this_00);
    break;
  case MESS_WAITTY_6943:
    st::fn_004036C0(this_00,0x6942,0,0);
    if (DAT_00811768 == '\x01') {
      DAT_00811768 = '\x02';
    }
    this_00->field_21E1 = 1;
    this_00->field_21E2 = 1;
    this_00->field_21E3 = 1;
    this_00->field_21E4 = 1;
    this_00->field_21E5 = 1;
    this_00->field_21E6 = 1;
    this_00->field_21E7 = 1;
    /* ST_CALLSITE[005C9D17]: CALL dword ptr [EAX + 0x8] */
    this_00->CloseButtons();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_01 = *(MMsgTy **)(this_00->array_00BC[0xc].field_01DB + 0x2e6);
    goto LAB_005c9e75;
  case MESS_MAINMENUTY_6944|MESS_SHARED_0003:
    st::fn_004036C0(this_00,0x611f,this_00->field_1E27,(uint)this_00->field_1E26);
    /* ST_CALLSITE[005C9D6D]: CALL dword ptr [EDX + 0x8] */
    this_00->CloseButtons();
    pMVar6 = this_00->array_00BC[0xc].field_01DB;
    if (*(int *)(pMVar6 + 0x2e6) != 0) {
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      st::fn_00401A9B(*(MMsgTy **)(pMVar6 + 0x2e6),&local_58);
    }
    break;
  case MESS_SHARED_6940|MESS_SHARED_0008:
    STPiece<0,1>(DAT_008087a0) = this_00->field_1E26;
    switch(this_00->field_1E26) {
    case CASE_1:
    case CASE_2:
    case CASE_3:
    case CASE_6:
    case CASE_8:
    case CASE_9:
    case CASE_A:
    case CASE_B:
      DAT_00808783 = 2;
      break;
    case CASE_4:
    case CASE_5:
    case CASE_7:
    case CASE_C:
    case CASE_D:
    case CASE_E:
    case CASE_F:
    case CASE_10:
    case CASE_11:
    case CASE_12:
    case CASE_13:
    case CASE_14:
    case CASE_15:
      DAT_00808783 = 3;
    }
    this_00->field_0049 = 1;
    this_00->field_004D = 0x60ff;
    st::fn_00404DB8((MTaskTy *)this_00);
    break;
  case MESS_WAITTY_694D:
    st::fn_004036C0(this_00,0x6105,1,0);
    this_00->field_21E1 = 1;
    this_00->field_21E2 = 1;
    this_00->field_21E3 = 1;
    this_00->field_21E4 = 1;
    this_00->field_21E5 = 1;
    this_00->field_21E6 = 1;
    this_00->field_21E7 = 1;
    this_00->field_21E7 = 0;
    goto LAB_005c9e62;
  case 0x694f:
    st::fn_004036C0(this_00,0x6109,1,(uint)(this_00->field_1E26 == CASE_E));
    this_00->field_21E6 = 0;
    this_00->field_21E4 = 0;
    /* ST_CALLSITE[005C9E05]: CALL dword ptr [EDX + 0x8] */
    this_00->CloseButtons();
    pMVar6 = this_00->array_00BC[0xc].field_01DB;
    if (*(int *)(pMVar6 + 0x2e6) != 0) {
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      st::fn_00401A9B(*(MMsgTy **)(pMVar6 + 0x2e6),&local_48);
    }
    break;
  case MESS_SHARED_6951:
    st::fn_004036C0(this_00,0x610a,0,0);
    this_00->field_21E1 = 1;
    this_00->field_21E2 = 1;
    this_00->field_21E3 = 1;
    this_00->field_21E4 = 1;
    this_00->field_21E5 = 1;
    this_00->field_21E6 = 1;
    this_00->field_21E7 = 1;
LAB_005c9e62:
    /* ST_CALLSITE[005C9E66]: CALL dword ptr [EDX + 0x8] */
    this_00->CloseButtons();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_01 = *(MMsgTy **)(this_00->array_00BC[0xc].field_01DB + 0x2e6);
LAB_005c9e75:
    if (this_01 != nullptr) {
      /* ST_CALLSITE[005C9E83]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
      st::fn_00401FA5(this_01,1,0,1);
    }
    break;
  case MESS_SHARED_697F:
  case MESS_SHARED_6980:
  case MESS_SIDTY_6981:
  case MESS_SHARED_6980|MESS_ID_CREATE:
  case MESS_MAINMENUTY_6983:
  case 0x6984:
    local_8 = static_cast<DArrayTy *>((message->arg1).ptr);
    local_c = (DArrayTy *)this_00->field_1E2B->field_0004;
    local_34 = this_00->field_1E2B->field_0008;
    switch(SVar3) {
    case MESS_SHARED_697F:
      if (this_00->field_1F57 == '\0') {
        resourceId = 0x234b;
        goto LAB_005ca70e;
      }
      if (this_00->field_1F57 != '\x01') {
        resourceId = 0x234d;
        goto LAB_005ca70e;
      }
      goto LAB_005ca619;
    case MESS_SHARED_6980:
      local_EAX_7168 = st::fn_006B0140(0x2354,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005CA65B]: CALL dword ptr [0x0085bde8] */
      st::external_00000080(local_98,st::mutable_c_string("%d %s"),(uint)this_00->field_1F5C,local_EAX_7168);
      goto LAB_005ca73b;
    case MESS_SIDTY_6981:
      pDVar4 = this_00->field_1F7C;
      if (this_00->field_1F58 < pDVar4->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        pcVar17_mg15 = (char *)((int)pDVar4->data +
                               pDVar4->elementSize * this_00->field_1F58 + 0x104);
      }
      else {
        pcVar17_mg15 = (char *)0x104;
      }
      goto LAB_005ca71b;
    case MESS_SHARED_6980|MESS_ID_CREATE:
      if (this_00->field_1F5F == '\0') {
        resourceId = 0x2355;
      }
      else {
        if (this_00->field_1F5F == '\x01') goto LAB_005ca619;
        resourceId = 0x2356;
      }
      goto LAB_005ca70e;
    case MESS_MAINMENUTY_6983:
      cVar10 = this_00->field_1F5D;
      break;
    default:
      cVar10 = this_00->field_1F5E;
    }
    if (cVar10 == '\0') {
      resourceId = 0x234e;
    }
    else if (cVar10 == '\x01') {
LAB_005ca619:
      resourceId = 0x234c;
    }
    else {
      resourceId = 0x234f;
    }
LAB_005ca70e:
    pcVar17_mg15 = st::fn_006B0140(resourceId,g_hINSTANCE_00807618);
LAB_005ca71b:
    uVar18 = 0xffffffff;
    do {
      pcVar17 = pcVar17_mg15;
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      pcVar17 = pcVar17_mg15 + 1;
      cVar10 = *pcVar17_mg15;
      pcVar17_mg15 = pcVar17;
    } while (cVar10 != '\0');
    uVar18 = ~uVar18;
    pcVar17 = pcVar17 + -uVar18;
    pcVar21 = local_98;
    memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
    uVar19 = 0;
LAB_005ca73b:
    pDVar4 = local_8;
    local_30 = st::machine_word_boundary_cast<int>(local_8->flags - 10);
    local_28 = local_8->elementSize;
    local_2c = st::machine_word_boundary_cast<int>(local_8->iteratorIndex - 0xb4);
    local_24 = local_8->count;
    /* ST_CALLSITE[005CA77E]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
    st::fn_00404C5F
              ((MMObjTy *)this_00,this_00->field_1C67,&local_30,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    /* ST_CALLSITE[005CA7B6]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_1C67,
           (local_28 - (int)local_c) + -8 + local_30,(int)(local_24 - local_34) / 2 + local_2c,
           '\x06',(byte *)this_00->field_1E2B);
    st::fn_00710A90(g_startSystem_0081176C->field_0034,this_00->field_1C67,0,st::machine_word_boundary_cast<int>(pDVar4->flags - 10),
                     st::machine_word_boundary_cast<uint>(pDVar4->iteratorIndex - 0xb4),(pDVar4->elementSize - (int)local_c) + -8,
                     pDVar4->count);
    wVar2 = (message->arg0).words.low;
    if (wVar2 == 1) {
      uVar18 = 2;
    }
    else {
      uVar18 = (-(uint)(wVar2 != 0) & 2) + 1;
    }
    st::fn_007119C0(g_startSystem_0081176C->field_0034,local_98,-1,-1,uVar18);
    st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_1F80);
    if ((message->arg0).words.low == 3) goto LAB_005ca964;
    break;
  case MESS_SHARED_6980|MESS_SHARED_0005:
    piVar7 = static_cast<int *>((message->arg1).ptr);
    st::fn_006C7610((RecoveredSourceFamily_dibcopy *)this_00->field_1C67,0,*piVar7 + -10,
                 st::machine_word_boundary_cast<int>(piVar7[1] + -0xb4),piVar7[2],piVar7[3],st::machine_word_boundary_cast<int>(piVar7[3] / 2),0x67);
    st::fn_006C7570((RecoveredSourceFamily_dibcopy *)this_00->field_1C67,0,*piVar7 + -8,
                 st::machine_word_boundary_cast<int>(piVar7[1] + -0xb2),(undefined4 *)(piVar7[2] + -4),st::machine_word_boundary_cast<int>(piVar7[3] + -4),st::machine_word_boundary_cast<int>(piVar7[3] / 2 + -2),
                 (-((message->arg0).words.low != 0) & 0xfcU) + 0x23);
    st::fn_006C7570((RecoveredSourceFamily_dibcopy *)this_00->field_1C67,0,*piVar7 + -10,
                 st::machine_word_boundary_cast<int>(piVar7[1] + -0xb4),(undefined4 *)piVar7[2],piVar7[3],st::machine_word_boundary_cast<int>(piVar7[3] / 2),
                 (-((message->arg0).words.low != 0) & 0xfcU) + 0x23);
    st::fn_00710A90((ccFntTy *)g_startSystem_0081176C->field_0030,this_00->field_1C67,0,
                     *piVar7 + -10,st::machine_word_boundary_cast<uint>(piVar7[1] - 0xb4),piVar7[2],piVar7[3]);
    uVar18 = ((message->arg0).words.low != 1) + 5;
    iVar14 = -1;
    iVar15 = -1;
    local_EAX_7946 = st::fn_006B0140(0x234a,g_hINSTANCE_00807618);
    st::fn_007119C0((ccFntTy *)g_startSystem_0081176C->field_0030,local_EAX_7946,iVar15,iVar14,uVar18
                  );
    if ((message->arg0).words.low != 3) break;
LAB_005ca964:
    st::fn_00404BF1(this_00,9,'\x01',-1);
  }
cf_common_join_005CA971:
  SVar4 = message->id;
  if ((SVar4 < 0x657f) || (0x658c < SVar4)) goto LAB_005cae3e;
  piVar7 = static_cast<int *>((message->arg1).ptr);
  local_14 = piVar7[2];
  local_10 = piVar7[3];
  local_1c = *piVar7 + -0x112;
  local_18 = st::machine_word_boundary_cast<uint>(piVar7[1] - 0x149);
  /* ST_CALLSITE[005CA9E3]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
  st::fn_00404C5F
            ((MMObjTy *)this_00,this_00->field_1E1E,&local_1c,2,
             (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
  switch(SVar4) {
  case 0x657f:
    SVar1 = this_00->field_1E26;
    if (((SVar1 == CASE_6) || (SVar1 == CASE_1)) ||
       (temp_3f9b3ed2a5 = PTR_0080c502, SVar1 == CASE_2)) {
      temp_3f9b3ed2a5 = (DArrayTy *)PTR_0080c506;
    }
    if (this_00->field_1C5F < temp_3f9b3ed2a5->count) {
      if (((SVar1 == CASE_6) || (SVar1 == CASE_1)) ||
         (local_ECX_8181 = PTR_0080c502, SVar1 == CASE_2)) {
        local_ECX_8181 = (DArrayTy *)PTR_0080c506;
      }
      if (((SVar1 == CASE_6) || (SVar1 == CASE_1)) || (pDVar12 = PTR_0080c502, SVar1 == CASE_2)) {
        pDVar12 = (DArrayTy *)PTR_0080c506;
      }
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      pcVar17 = (char *)(pDVar12->elementSize * this_00->field_1C5F + (int)local_ECX_8181->data);
    }
    else {
      pcVar17 = nullptr;
    }
    if (pcVar17 == nullptr) {
      pcVar17 = &CHAR_00h_008016a0;
    }
    uVar18 = 0xffffffff;
    do {
      pcVar21 = pcVar17;
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      pcVar21 = pcVar17 + 1;
      cVar10 = *pcVar17;
      pcVar17 = pcVar21;
    } while (cVar10 != '\0');
    uVar18 = ~uVar18;
    pcVar17 = pcVar21 + -uVar18;
    pcVar21 = (char *)&DAT_0080f33a;
    memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    st::fn_00710A90(g_startSystem_0081176C->field_0034,this_00->field_1E1E,0,local_1c,local_18,
                     local_14,local_10);
    wVar2 = (message->arg0).words.low;
    if (wVar2 == 1) {
      uVar18 = 2;
    }
    else {
      uVar18 = (-(uint)(wVar2 != 0) & 2) + 1;
    }
    st::fn_007119C0(g_startSystem_0081176C->field_0034,(char *)&DAT_0080f33a,-1,-1,uVar18);
    break;
  case 0x6582:
  case 0x6583:
  case 0x6584:
  case 0x6585:
    switch(SVar4) {
    case 0x6582:
      cVar10 = STPiece<1,1>(DAT_00808a90);
      if (STPiece<1,1>(DAT_00808a90) == '\0') {
        local_20 = 0x234e;
      }
      else {
LAB_005cab38:
        local_20 = (-(uint)(cVar10 != '\x01') & 3) + 0x234c;
      }
      break;
    case 0x6583:
      cVar10 = (char)DAT_00808a90;
      if ((char)DAT_00808a90 != '\0') goto LAB_005cab38;
      local_20 = 0x234e;
      break;
    case 0x6584:
      cVar10 = STPiece<2,1>(DAT_00808a90);
      if (STPiece<2,1>(DAT_00808a90) != '\0') goto LAB_005cab38;
      local_20 = 0x234e;
      break;
    case 0x6585:
      cVar10 = STPiece<3,1>(DAT_00808a90);
      if (STPiece<3,1>(DAT_00808a90) != '\0') goto LAB_005cab38;
      local_20 = 0x234e;
    }
    st::fn_00710A90(g_startSystem_0081176C->field_0034,this_00->field_1E1E,0,local_1c,local_18,
                     local_14,local_10);
    wVar2 = (message->arg0).words.low;
    if (wVar2 == 1) {
      uVar18 = 2;
    }
    else {
      uVar18 = (-(uint)(wVar2 != 0) & 2) + 1;
    }
    iVar14 = -1;
    iVar15 = -1;
    local_EAX_8538 = st::fn_006B0140(local_20,g_hINSTANCE_00807618);
    st::fn_007119C0(g_startSystem_0081176C->field_0034,local_EAX_8538,iVar15,iVar14,uVar18);
    break;
  case 0x6586:
    if (DAT_00808a97 == -1) {
      local_EAX_8607 = st::fn_006B0140(0x1f55,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar17 = local_EAX_8607;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar17 = local_EAX_8607 + 1;
        cVar10 = *local_EAX_8607;
        local_EAX_8607 = pcVar17;
      } while (cVar10 != '\0');
      uVar18 = ~uVar18;
      pcVar17 = pcVar17 + -uVar18;
      pcVar21 = (char *)&DAT_0080f33a;
      memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
    }
    else {
      /* ST_CALLSITE[005CABC8]: CALL dword ptr [0x0085bde8] */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%d"),DAT_00808a97);
    }
    st::fn_00710A90(g_startSystem_0081176C->field_0034,this_00->field_1E1E,0,local_1c,local_18,
                     local_14,local_10);
    wVar2 = (message->arg0).words.low;
    if (wVar2 == 1) {
      uVar18 = 2;
    }
    else {
      uVar18 = (-(uint)(wVar2 != 0) & 2) + 1;
    }
    st::fn_007119C0(g_startSystem_0081176C->field_0034,(char *)&DAT_0080f33a,-1,-1,uVar18);
    break;
  case 0x6587:
    if (DAT_00808a9b == 0xff) {
      local_EAX_8763 = st::fn_006B0140(0x1f59,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005CAC8B]: CALL dword ptr [0x0085bde8] */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s"),local_EAX_8763);
    }
    else {
      iVar15 = DAT_00808a9b + 1;
      local_EAX_8808 = st::fn_006B0140(0x1f57,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005CACB8]: CALL dword ptr [0x0085bde8] */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s %d"),local_EAX_8808,iVar15);
    }
    st::fn_00710A90(g_startSystem_0081176C->field_0034,this_00->field_1E1E,0,local_1c,local_18,
                     local_14,local_10);
    wVar2 = (message->arg0).words.low;
    if (wVar2 == 1) {
      uVar18 = 2;
    }
    else {
      uVar18 = (-(uint)(wVar2 != 0) & 2) + 1;
    }
    st::fn_007119C0(g_startSystem_0081176C->field_0034,(char *)&DAT_0080f33a,-1,-1,uVar18);
    break;
  case 0x6588:
    cVar10 = DAT_00808a95;
    goto LAB_005cad88;
  case 0x6589:
    if (DAT_00808a8f == '\0') break;
LAB_005cadd5:
    pBVar13 = st::fn_0070B3A0(this_00->field_1F4F,0);
    iVar15 = (local_10 + -0x10) / 2 + local_18;
    pRVar22 = (RecoveredSourceFamily_dibcopy *)this_00->field_1E1E;
    iVar14 = (local_14 + -0x11) / 2 + local_1c;
    goto cf_common_exit_005CAE0F;
  case 0x658a:
    if (DAT_00808a94 != '\0') {
      pBVar13 = st::fn_0070B3A0(this_00->field_1F4F,0);
      iVar15 = (local_10 + -0x10) / 2 + local_18;
      iVar14 = (local_14 + -0x11) / 2 + local_1c;
      pRVar22 = (RecoveredSourceFamily_dibcopy *)this_00->field_1E1E;
      goto cf_common_exit_005CAE0F;
    }
    break;
  case 0x658b:
    cVar10 = DAT_00808aa9;
LAB_005cad88:
    if (cVar10 != '\0') {
      pBVar13 = st::fn_0070B3A0(this_00->field_1F4F,0);
      iVar15 = (local_10 + -0x10) / 2 + local_18;
      iVar14 = (local_14 + -0x11) / 2 + local_1c;
      pRVar22 = (RecoveredSourceFamily_dibcopy *)this_00->field_1E1E;
cf_common_exit_005CAE0F:
      /* ST_CALLSITE[005CAE0F]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229(pRVar22,iVar14,iVar15,'\x06',(byte *)pBVar13);
    }
    break;
  case 0x658c:
    if (DAT_00808aaa != '\0') goto LAB_005cadd5;
  }
  st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_1E22);
  if ((message->arg0).words.low == 3) {
    st::fn_00404BF1(this_00,9,'\x01',-1);
  }
LAB_005cae3e:
  g_currentExceptionFrame = local_dc.previous;
  /* ST_CALLSITE[005CAE4D]: CALL 0x00401280; direct=00401280 MMObjTy::GetMessage */
  iVar12 = st::fn_00401280((MMObjTy *)this_00,message);
  return iVar12;
}

