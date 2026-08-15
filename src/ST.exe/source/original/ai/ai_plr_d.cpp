#include "st/generated.hpp"
// Generated translation unit: source/original/ai/ai_plr_d.cpp

// 0067CF30 FUN_0067cf30
#line 4 "decomp/ST.exe/functions/0067CF30/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 40 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0067CF30 -> 0072E340 @ 0067CF98

   [STPrototypeApplier] Propagated return.
   Evidence: 0067CF30 returns stored into global 008489B8 @ 0068574E */

AllocationRecord_0067D3B0 * __cdecl
st::fn_0067CF30(char *source,undefined2 param_2,char *param_3,undefined4 param_4)

{
  int exceptionCode;
  DArrayTy *pDVar1;
  AllocationRecord_0065CD10 *pAVar2;
  char *_Source;
  InternalExceptionFrame local_4c;
  AnonShape_0067CF30_CDCAC01F *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  exceptionCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (exceptionCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    st::fn_00402E05((int *)&local_8);
    st::fn_006A5E40(exceptionCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x28);
    return nullptr;
  }
  local_8 = st::pointer_boundary_cast<AnonShape_0067CF30_CDCAC01F *>(st::fn_006AAC10(299));
  *(undefined4 *)local_8 = 0x38e;
  *(undefined4 *)&local_8->field_0x14 = 299;
  local_8->field_0x18 = 2;
  st::fn_0072E340(st::pointer_boundary_cast<char *>(&local_8->field_0x1b),source,0x3f);
  _Source = source;
  if (param_3 != nullptr) {
    _Source = param_3;
  }
  st::fn_0072E340(st::pointer_boundary_cast<char *>(&local_8->field_0x5b),_Source,0xb);
  local_8->field_0019 = param_2;
  local_8->field_006D = 0xff;
  pDVar1 = st::fn_006AE290(nullptr,5,0x10,5);
  local_8->field_00C2 = st::pointer_boundary_cast<uint *>(&pDVar1->flags);
  pAVar2 = st::fn_004015E1(source);
  local_8->field_0106 = (undefined4 *)pAVar2;
  local_8->field_010A = param_4;
  g_currentExceptionFrame = local_4c.previous;
  return (AllocationRecord_0067D3B0 *)local_8;
}

// 0067D1D0 FUN_0067d1d0
#line 4 "decomp/ST.exe/functions/0067D1D0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 119 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0067D880 -> 0067D1D0 @ 0067D8F6

   [STAllocationRecordApplier] Consumer-local packed record
   /SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_0067D1D0.
   Evidence: exact 299-byte source-parameter copy at 0067D222..0067D226 */

AllocationRecord_0067D1D0 * __cdecl st::fn_0067D1D0(AllocationRecord_0067D1D0 *param_1)

{
  int iVar1;
  AllocationRecord_0065CB00 *pAVar1;
  DArrayTy *pDVar2;
  AllocationRecord_00690FC0 *pAVar3;
  AllocationRecord_0067D1D0 *pAVar4;
  int iVar5;
  undefined4 *puVar6;
  AnonShape_0067D1D0_21940C5B *pAVar7;
  uint uVar8;
  bool bVar9;
  InternalExceptionFrame local_4c;
  AnonShape_0067D1D0_21940C5B *local_8;
  AllocationRecord_0067D1D0 *pAVar4_mg0;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    local_8 = st::pointer_boundary_cast<AnonShape_0067D1D0_21940C5B *>(st::fn_006AAC10(299));
    pAVar4_mg0 = param_1;
    pAVar7 = local_8;
    memmove(pAVar7, pAVar4_mg0, 0x12a); /* compiler REP MOVS byte copy */
    pAVar7 = (AnonShape_0067D1D0_21940C5B *)((byte *)pAVar7 + 0x128);
    pAVar4_mg0 = (AllocationRecord_0067D1D0 *)((byte *)pAVar4_mg0 + 0x128);
    pAVar7->field_0x2 = pAVar4_mg0->field_0x2;
    *(undefined4 *)&local_8->field_0x14 = 299;
    local_8->field_0x18 = 2;
    pAVar1 = st::fn_00403BF2((AllocationRecord_0065CB00 *)
                                (&param_1->field_0x12a + local_8->field_00FE));
    iVar5 = 0;
    local_8->field_0106 = pAVar1;
    pAVar4 = (AllocationRecord_0067D1D0 *)local_8;
    do {
      if (STObjectAtByteOffset(pAVar4, iVar5).field_00C2 != 0) {
        pDVar2 = st::fn_006B0060(nullptr,
                              (uint *)(&param_1->field_0x12a + *(int *)(&pAVar4->field_0xc6 + iVar5)
                                      ));
        *(DArrayTy **)((int)&local_8->field_00C2 + iVar5) = pDVar2;
        pAVar4 = (AllocationRecord_0067D1D0 *)local_8;
      }
      iVar5 = iVar5 + 0xc;
    } while (iVar5 < 0x3c);
    if (pAVar4->field_00C2 == 0) {
      pDVar2 = st::fn_006AE290(nullptr,10,0x10,5);
      local_8->field_00C2 = pDVar2;
      pAVar4 = (AllocationRecord_0067D1D0 *)local_8;
    }
    iVar5 = pAVar4->field_00C2;
    uVar8 = 0;
    if (0 < *(int *)(iVar5 + 0xc)) {
      bVar9 = *(int *)(iVar5 + 0xc) != 0;
      do {
        if (bVar9) {
          puVar6 = (undefined4 *)(*(int *)(iVar5 + 8) * uVar8 + *(int *)(iVar5 + 0x1c));
        }
        else {
          puVar6 = nullptr;
        }
        if (puVar6[1] == 0) {
          pAVar3 = st::fn_004052AE((AllocationRecord_00690FC0 *)
                                      (&param_1->field_0x12a + puVar6[2]));
          *puVar6 = st::machine_word_boundary_cast<undefined4>(pAVar3);
          pAVar4 = (AllocationRecord_0067D1D0 *)local_8;
        }
        iVar5 = pAVar4->field_00C2;
        uVar8 = uVar8 + 1;
        bVar9 = uVar8 < *(uint *)(iVar5 + 0xc);
      } while ((int)uVar8 < (int)*(uint *)(iVar5 + 0xc));
    }
    g_currentExceptionFrame = local_4c.previous;
    return pAVar4;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_00402E05((int *)&local_8);
  st::fn_006A5E40(iVar1,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x77);
  return nullptr;
}

// 0067D3B0 PlrDataPack
#line 4 "decomp/ST.exe/functions/0067D3B0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 218 | 219 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006494C0 -> 0067D3B0 @ 00649638 | 00649790 -> 0067D3B0 @ 00649908

   [STPrototypeApplier] Propagated return.
   Evidence: 0067D3B0 returns used as parameter 0 of FUN_006809b0 @ 006857E7 | 0067D3B0 returns used
   as parameter 2 of Library::Ourlib::MFAOBJ::mfAObjSave @ 0067DA63

   [STAllocationRecordApplier] Consumer-local packed record
   /SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_0067D3B0.
   Evidence: exact 299-byte source-parameter copy at 0067D506..0067D50A */

AllocationRecord_0067D3B0 * __cdecl
st::fn_0067D3B0(AllocationRecord_0067D3B0 *param_1,undefined4 *param_2,int param_3,uint *param_4)

{
  int iVar1;
  dword dVar2;
  DArrayTy **ppDVar4;
  byte *pbVar5;
  AllocationRecord_0067D3B0 *pAVar6;
  DArrayTy *pDVar7;
  int iVar12;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  byte *puVar11;
  int iVar13;
  uint *puVar14;
  AllocationRecord_0067D3B0 *pAVar15;
  uint *puVar16;
  uint uVar17;
  int *piVar18;
  AllocationRecord_0067D3B0 *pAVar19;
  uint *puVar20;
  bool bVar21;
  InternalExceptionFrame local_5c;
  DArrayTy **local_18;
  uint local_14;
  int local_10;
  void *local_c;
  AllocationRecord_0067D3B0 *local_8;

  uVar17 = 0;
  local_8 = nullptr;
  local_10 = 0;
  local_c = nullptr;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  ppDVar4 = (DArrayTy **)st::fn_0072D7F0(local_5c.jumpBuffer,0);
  local_18 = ppDVar4;
  if (ppDVar4 == nullptr) {
    local_10 = param_3;
    if (((param_1->field_0018 == '\x02') && (param_1->field_00C2 != nullptr)) &&
       (dVar2 = param_1->field_00C2->count, dVar2 != 0)) {
      local_c = st::fn_006AAC10(dVar2 << 2);
      pDVar7 = param_1->field_00C2;
      uVar17 = 0;
      if (0 < (int)pDVar7->count) {
        bVar21 = pDVar7->count != 0;
        do {
          if (bVar21) {
            piVar18 = DArrayAt<int>(pDVar7, uVar17);
          }
          else {
            piVar18 = nullptr;
          }
          iVar13 = *piVar18;
          if ((iVar13 != 0) && (*(char *)(iVar13 + 0x18) == '\x02')) {
            *(int *)((int)local_c + uVar17 * 4) = iVar13;
            pbVar5 = st::fn_0040518C(*(undefined4 **)((int)local_c + uVar17 * 4),(uint *)(piVar18 + 3));
            *piVar18 = (int)pbVar5;
          }
          uVar17 = uVar17 + 1;
          pDVar7 = param_1->field_00C2;
          bVar21 = uVar17 < pDVar7->count;
        } while ((int)uVar17 < (int)pDVar7->count);
      }
    }
    pDVar7 = param_1->field_00C2;
    local_18 = &param_1->field_00C2;
    iVar13 = local_10;
    if (pDVar7 != nullptr) {
      uVar17 = 0;
      if (0 < (int)pDVar7->count) {
        bVar21 = pDVar7->count != 0;
        do {
          if (bVar21) {
            piVar18 = DArrayAt<int>(pDVar7, uVar17);
          }
          else {
            piVar18 = nullptr;
          }
          if ((*piVar18 != 0) && (*(char *)(*piVar18 + 0x18) == '\0')) {
            iVar13 = iVar13 + piVar18[3];
            local_10 = iVar13;
          }
          uVar17 = uVar17 + 1;
          bVar21 = uVar17 < pDVar7->count;
        } while ((int)uVar17 < (int)pDVar7->count);
      }
    }
    iVar10 = 5;
    ppDVar4 = local_18;
    do {
      pDVar7 = *ppDVar4;
      if (pDVar7 != nullptr) {
        iVar1 = st::machine_word_boundary_cast<int>(pDVar7->count * pDVar7->elementSize + 0x1c);
        iVar13 = iVar13 + iVar1;
        ppDVar4[2] = (DArrayTy *)iVar1;
        local_10 = iVar13;
      }
      ppDVar4 = ppDVar4 + 3;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    *param_4 = iVar13 + 299U;
    pAVar6 = st::pointer_boundary_cast<AllocationRecord_0067D3B0 *>(st::fn_006AAC10(iVar13 + 299U));
    pAVar15 = param_1;
    pAVar19 = pAVar6;
    memmove(pAVar19, pAVar15, 0x12a); /* compiler REP MOVS byte copy */
    pAVar19 = (AllocationRecord_0067D3B0 *)((byte *)pAVar19 + 0x128);
    pAVar15 = (AllocationRecord_0067D3B0 *)((byte *)pAVar15 + 0x128);
    pAVar19->field_0x2 = pAVar15->field_0x2;
    pAVar6->field_0018 = 0;
    pAVar6->field_0014 = *param_4;
    pAVar6->field_0102 = param_3;
    uVar17 = pAVar6->field_0102;
    puVar9 = st::pointer_boundary_cast<undefined1 *>(&pAVar6->field_0x12a);
    puVar11 = (byte *)puVar9;
    memmove(puVar11, param_2, uVar17); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    pAVar6->field_00FE = st::machine_word_boundary_cast<undefined4>(puVar9 + (-0x12a - (int)pAVar6));
    pDVar7 = pAVar6->field_00C2;
    puVar14 = (uint *)(puVar9 + pAVar6->field_0102);
    local_14 = 0;
    if (0 < (int)pDVar7->count) {
      bVar21 = pDVar7->count != 0;
      do {
        if (bVar21) {
          puVar11 = DArrayAt<byte>(pDVar7, local_14);
        }
        else {
          puVar11 = nullptr;
        }
        puVar16 = (uint *)*puVar11;
        if ((puVar16 != nullptr) && ((char)puVar16[6] == '\0')) {
          uVar17 = puVar11[3];
          puVar20 = puVar14;
          memmove(puVar20, puVar16, uVar17); /* compiler REP MOVS byte copy */
          puVar9 = (undefined1 *)((int)puVar14 + (-0x12a - (int)pAVar6));
          puVar14 = (uint *)((int)puVar14 + puVar11[3]);
          puVar11[2] = puVar9;
        }
        pDVar7 = pAVar6->field_00C2;
        local_14 = local_14 + 1;
        bVar21 = local_14 < pDVar7->count;
      } while ((int)local_14 < (int)pDVar7->count);
    }
    iVar13 = 0;
    local_8 = pAVar6;
    do {
      puVar16 = *(uint **)((int)&pAVar6->field_00C2 + iVar13);
      if (puVar16 != nullptr) {
        st::fn_006AFFC0(puVar16,puVar14,&local_10);
        *(int *)(&local_8->field_0xc6 + iVar13) = (int)puVar14 + (-0x12a - (int)local_8);
        puVar14 = (uint *)((int)puVar14 + *(int *)(&local_8->field_0xca + iVar13));
        pAVar6 = local_8;
      }
      ppDVar4 = local_18;
      iVar13 = iVar13 + 0xc;
    } while (iVar13 < 0x3c);
    if ((((param_1->field_0018 == '\x02') && (pDVar7 = *local_18, pDVar7 != nullptr)) &&
        (dVar2 = pDVar7->count, dVar2 != 0)) && (local_c != nullptr)) {
      uVar17 = 0;
      if (0 < (int)dVar2) {
        bVar21 = dVar2 != 0;
        do {
          if (bVar21) {
            piVar18 = DArrayAt<int>(pDVar7, uVar17);
          }
          else {
            piVar18 = nullptr;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (((*piVar18 != 0) && (*(char *)(*piVar18 + 0x18) == '\0')) &&
             ((iVar13 = *(int *)((int)local_c + uVar17 * 4), iVar13 != 0 &&
              (*(char *)(iVar13 + 0x18) == '\x02')))) {
            st::fn_006AB060(piVar18);
            *piVar18 = *(int *)((int)local_c + uVar17 * 4);
          }
          pDVar7 = *ppDVar4;
          uVar17 = uVar17 + 1;
          bVar21 = uVar17 < pDVar7->count;
        } while ((int)uVar17 < (int)pDVar7->count);
      }
      st::fn_006AB060(&local_c);
      pAVar6 = local_8;
    }
    g_currentExceptionFrame = local_5c.previous;
    return pAVar6;
  }
  g_currentExceptionFrame = local_5c.previous;
  if (((param_1->field_0018 == '\x02') && (pDVar7 = param_1->field_00C2, pDVar7 != nullptr))
     && ((dVar2 = pDVar7->count, dVar2 != 0 && (local_c != nullptr)))) {
    if (0 < (int)dVar2) {
      bVar21 = dVar2 != 0;
      do {
        if (bVar21) {
          piVar18 = DArrayAt<int>(pDVar7, uVar17);
        }
        else {
          piVar18 = nullptr;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((((*piVar18 != 0) && (*(char *)(*piVar18 + 0x18) == '\0')) &&
            (iVar13 = *(int *)((int)local_c + uVar17 * 4), iVar13 != 0)) &&
           (*(char *)(iVar13 + 0x18) == '\x02')) {
          st::fn_006AB060(piVar18);
          *piVar18 = *(int *)((int)local_c + uVar17 * 4);
        }
        pDVar7 = param_1->field_00C2;
        uVar17 = uVar17 + 1;
        bVar21 = uVar17 < pDVar7->count;
      } while ((int)uVar17 < (int)pDVar7->count);
    }
    ppDVar4 = local_18;
    st::fn_006AB060(&local_c);
  }
  if (local_c != nullptr) {
    st::fn_006AB060(&local_c);
  }
  if (local_8 != nullptr) {
    st::fn_006AB060(&local_8);
  }
  iVar12 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0xda,0,(int)ppDVar4,
                              st::mutable_c_string("%s"),"PlrDataPack");
  if (iVar12 == 0) {
    st::fn_006A5E40((int)ppDVar4,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0xdb);
    return nullptr;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 0067D880 LoadPlrEdit
#line 4 "decomp/ST.exe/functions/0067D880/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 238 | 245 | 247 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * __cdecl st::fn_0067D880(int param_1,char *param_2)

{
  int errorCode;
  int iVar2;
  undefined4 *puVar3;
  InternalExceptionFrame local_50;
  AllocationRecord_0067D1D0 *local_c;
  AllocationRecord_0067D1D0 *local_8;

  local_c = nullptr;
  local_8 = nullptr;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (errorCode == 0) {
    if ((param_1 == 0) || (param_2 == nullptr)) {
      st::fn_006A5E40
                (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0xee);
    }
    local_8 = (AllocationRecord_0067D1D0 *)
              st::fn_006F2D90((cMf32 *)param_1,param_2,1,0);
    if (local_8 != nullptr) {
      local_c = st::fn_00401686(local_8);
      st::fn_00402E05((int *)&local_8);
    }
    g_currentExceptionFrame = local_50.previous;
    return (undefined4 *)local_c;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0xf5,0,errorCode,st::mutable_c_string("%s"),
                             "LoadPlrEdit");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00402E05((int *)&local_8);
  st::fn_00402E05((int *)&local_c);
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0xf7);
  return nullptr;
}

// 0067D9C0 SavePlrEdit
#line 4 "decomp/ST.exe/functions/0067D9C0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 267 | 274 | 277 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl st::fn_0067D9C0(int param_1,char *param_2,AnonShape_0067D9C0_2E8A2257 *param_3,char param_4)

{
  int iVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_58;
  uint local_14;
  uint local_10;
  AllocationRecord_0065CD10 *local_c;
  AllocationRecord_0067D3B0 *local_8;

  local_8 = nullptr;
  local_c = nullptr;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar2 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  if (iVar2 == 0) {
    if (((param_1 == 0) || (param_2 == nullptr)) || (param_3->field_0x18 != '\x02')) {
      st::fn_006A5E40
                (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x10b);
    }
    local_c = st::fn_00401EBF((AllocationRecord_0065CD10 *)param_3->field_0106,&local_14);
    local_8 = st::fn_00405204((AllocationRecord_0067D3B0 *)param_3,(undefined4 *)local_c,local_14,
                          &local_10);
    st::fn_00401537((int *)&local_c);
    st::fn_006F3110(param_1,param_2,(byte *)local_8,local_10,param_4);
    st::fn_00402E05((int *)&local_8);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x112,0,iVar2,st::mutable_c_string("%s"),
                             "SavePlrEdit");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00401537((int *)&local_c);
  st::fn_00402E05((int *)&local_8);
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x115);
  return iVar2;
}

// 0067DB30 DelPlrEdit
#line 4 "decomp/ST.exe/functions/0067DB30/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 291 | 294 | 295 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl st::fn_0067DB30(int param_1,char *param_2)

{
  int iVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (iVar2 == 0) {
    if ((param_1 == 0) || (param_2 == nullptr)) {
      st::fn_006A5E40
                (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x123);
    }
    st::fn_006F17C0((cMf32 *)param_1,0xc,param_2);
    g_currentExceptionFrame = local_48.previous;
    return 0;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x126,0,iVar2,st::mutable_c_string("%s"),
                             "DelPlrEdit");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x127);
  return iVar2;
}

// 0067DC20 _CreateStgListByRoot
#line 4 "decomp/ST.exe/functions/0067DC20/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 319 | 342 | 344 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0067DC20 parameter used as this of cMf32::RecMemFree @ 0067DDB2 | 0067DC20 parameter
   used as this of cMf32::RecNameGetNext @ 0067DDBA */

uint * __cdecl st::fn_0067DC20(cMf32 *param_1,int param_2,char *param_3,uint param_4)

{
  char cVar1;
  int iVar6;
  char *pcVar3;
  int iVar5;
  uint *puVar4;
  int iVar7;
  uint uVar8;
  undefined1 *_Source;
  char *pcVar11;
  undefined1 local_2ec [516];
  char local_e8 [64];
  char local_a8 [12];
  char local_9c [36];
  char local_78 [32];
  uint local_58;
  int local_54;
  InternalExceptionFrame local_50;
  DArrayTy *local_c;
  AnonShape_0067DC20_B265FC02 *local_8;
  char *pcVar3_mg0;

  memset((void *)local_2ec, 0, 0x201); /* compiler bulk-zero initialization */
  iVar7 = 0;
  local_c = nullptr;
  local_8 = nullptr;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar6 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x156,0,iVar6,st::mutable_c_string("%s"),
                               "_CreateStgListByRoot");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (local_c != nullptr) {
      st::fn_006AE110(local_c);
    }
    st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x158);
    return nullptr;
  }
  if (param_1 == nullptr) {
    st::fn_006A5E40
              (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x13f);
  }
  local_c = st::fn_006AE290(nullptr,5,0x98,5);
  uVar8 = 0xffffffff;
  do {
    pcVar3_mg0 = param_3;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar3_mg0 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar3_mg0;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  local_2ec[0] = 0xc;
  pcVar3 = pcVar3_mg0 + -uVar8;
  pcVar11 = st::pointer_boundary_cast<char *>(local_2ec + 1);
  memmove(pcVar11, pcVar3, uVar8); /* compiler REP MOVS byte copy */
  st::fn_006F12B0(param_1,st::machine_word_boundary_cast<undefined4>(st::fn_006F2D10),st::machine_word_boundary_cast<undefined4>(local_2ec));
  pcVar3 = (char *)st::fn_006F2790(param_1);
  while (pcVar3 != nullptr) {
    local_8 = (AnonShape_0067DC20_B265FC02 *)st::fn_006F2D90(param_1,pcVar3,0,1);
    uVar8 = *(uint *)&local_8[1].field_0x7e;
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    if (local_8 != nullptr) {
      if (((param_2 == 0) || (param_2 == local_8->field_0019)) && ((param_4 & uVar8) != 0)) {
        _Source = st::pointer_boundary_cast<undefined1 *>(&local_8->field_0x1b);
        pcVar11 = local_e8;
        for (iVar7 = 0x26; iVar7 != 0; iVar7 = iVar7 + -1) {
          pcVar11[0] = '\0';
          pcVar11[1] = '\0';
          pcVar11[2] = '\0';
          pcVar11[3] = '\0';
          pcVar11 = pcVar11 + 4;
        }
        st::fn_0072E340(local_e8,st::pointer_boundary_cast<char *>(_Source),0x3f);
        st::fn_0072E340(local_a8,st::pointer_boundary_cast<char *>(&local_8->field_0x5b),0xb);
        st::fn_0072E340(local_9c,pcVar3,0x1f);
        st::fn_0072E340(local_78,PTR_s_OBJECTIVES_0079d718,0x1f);
        local_54 = (int)local_8->field_0019;
        local_58 = uVar8;
        st::fn_006AE1C0(local_c,local_e8);
      }
      st::fn_006F20E0(param_1,(uint *)&local_8);
    }
    pcVar3 = (char *)st::fn_006F2790(param_1);
  }
  g_currentExceptionFrame = local_50.previous;
  return st::pointer_boundary_cast<uint *>(&local_c->flags);
}

// 0067DEC0 CreateAssistantList
#line 4 "decomp/ST.exe/functions/0067DEC0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 363 | 366 | 368 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * __cdecl st::fn_0067DEC0(int param_1,int param_2,uint param_3)

{
  int errorCode;
  uint *puVar2;
  int iVar2;
  uint *puVar3;
  InternalExceptionFrame local_4c;
  DArrayTy *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (param_1 == 0) {
      st::fn_006A5E40
                (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x16b);
    }
    puVar2 = st::fn_004015EB((cMf32 *)param_1,param_2,PTR_s_ASSISTANT_0079d724,param_3);
    g_currentExceptionFrame = local_4c.previous;
    return puVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x16e,0,errorCode,st::mutable_c_string("%s"),
                             "CreateAssistantList");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006AE110(local_8);
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x170);
  return nullptr;
}

// 0067DFD0 CreateOpponentList
#line 4 "decomp/ST.exe/functions/0067DFD0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 385 | 388 | 390 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0056EBE0 -> 0067DFD0 @ 0056ECE7 | 0056EBE0 -> 0067DFD0 @ 0056ECFF | 0056EBE0 ->
   0067DFD0 @ 0056ED16 */

uint * __cdecl st::fn_0067DFD0(cMf32 *param_1,int param_2,uint param_3)

{
  int errorCode;
  uint *puVar2;
  int iVar2;
  uint *puVar3;
  InternalExceptionFrame local_4c;
  DArrayTy *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (param_1 == nullptr) {
      st::fn_006A5E40
                (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x181);
    }
    puVar2 = st::fn_004015EB(param_1,param_2,PTR_s_OPPONENT_0079d728,param_3);
    g_currentExceptionFrame = local_4c.previous;
    return puVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x184,0,errorCode,st::mutable_c_string("%s"),
                             "CreateOpponentList");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006AE110(local_8);
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x186);
  return nullptr;
}

// 0067E0E0 CreateStrategList
#line 4 "decomp/ST.exe/functions/0067E0E0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 407 | 410 | 412 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * __cdecl st::fn_0067E0E0(int param_1,int param_2,uint param_3)

{
  int errorCode;
  LPSTR pCVar2;
  uint *puVar3;
  int iVar3;
  uint *puVar4;
  InternalExceptionFrame local_4c;
  DArrayTy *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (((param_1 == 0) || (param_2 < 0)) || (7 < param_2)) {
      st::fn_006A5E40
                (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x197);
    }
    pCVar2 = st::fn_006F2C00(PTR_s_STRATEG_0079d72c,1,param_2);
    puVar3 = st::fn_004015EB((cMf32 *)param_1,0,pCVar2,param_3);
    g_currentExceptionFrame = local_4c.previous;
    return puVar3;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x19a,0,errorCode,st::mutable_c_string("%s"),
                             "CreateStrategList");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006AE110(local_8);
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x19c);
  return nullptr;
}

// 0067E200 CreateSaveStrategList
#line 4 "decomp/ST.exe/functions/0067E200/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 429 | 432 | 434 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * __cdecl st::fn_0067E200(int param_1,int param_2,uint param_3)

{
  int errorCode;
  LPSTR pCVar2;
  uint *puVar3;
  int iVar3;
  uint *puVar4;
  InternalExceptionFrame local_4c;
  DArrayTy *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (((param_1 == 0) || (param_2 < 0)) || (7 < param_2)) {
      st::fn_006A5E40
                (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x1ad);
    }
    pCVar2 = st::fn_006F2C00(PTR_s_AIPLAYER_0079d71c,2,param_2);
    puVar3 = st::fn_004015EB((cMf32 *)param_1,0,pCVar2,param_3);
    g_currentExceptionFrame = local_4c.previous;
    return puVar3;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x1b0,0,errorCode,st::mutable_c_string("%s"),
                             "CreateSaveStrategList");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006AE110(local_8);
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x1b2);
  return nullptr;
}

// 0067E320 GetStrategNameDB
#line 4 "decomp/ST.exe/functions/0067E320/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 451 | 455 | 456 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

LPSTR __cdecl st::fn_0067E320(int param_1,int param_2)

{
  char cVar1;
  int iVar3;
  char *local_EAX_105;
  LPSTR pCVar4;
  int iVar4;
  LPSTR pCVar5;
  uint uVar6;
  char *pcVar8;
  char *pcVar9;
  char local_88 [64];
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar3 = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_48.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x1c7,0,iVar3,st::mutable_c_string("%s"),
                               "GetStrategNameDB");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x1c8);
    return (LPSTR)0x0;
  }
  if (((param_1 == 0) || (param_2 < 0)) || (7 < param_2)) {
    st::fn_006A5E40
              (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x1c3);
  }
  local_EAX_105 = st::fn_006F2C00(PTR_s_STRATEG_0079d72c,1,param_2);
  uVar6 = 0xffffffff;
  do {
    pcVar8 = local_EAX_105;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar8 = local_EAX_105 + 1;
    cVar1 = *local_EAX_105;
    local_EAX_105 = pcVar8;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar8 + -uVar6;
  pcVar9 = local_88;
  memmove(pcVar9, pcVar8, uVar6); /* compiler REP MOVS byte copy */
  iVar3 = 0;
  do {
    pCVar4 = st::fn_006F2C00(local_88,3,iVar3);
    iVar4 = st::fn_006F21C0((cMf32 *)param_1,0xc,pCVar4);
    if (iVar4 != 0) {
      g_currentExceptionFrame = local_48.previous;
      return pCVar4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x7ffffff0);
  g_currentExceptionFrame = local_48.previous;
  return (LPSTR)0x0;
}

// 0067E4A0 GetStrategName
#line 4 "decomp/ST.exe/functions/0067E4A0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 473 | 474 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

LPSTR __cdecl st::fn_0067E4A0(undefined4 param_1,undefined4 param_2)

{
  int iVar2;
  LPSTR local_EAX_63;
  LPSTR pCVar3;
  int iVar3;
  LPSTR pCVar2;
  int iVar4;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (iVar2 == 0) {
    iVar4 = 3;
    local_EAX_63 = st::fn_006F2C00(PTR_s_STRATEG_0079d72c,1,param_1);
    pCVar3 = st::fn_006F2C00(local_EAX_63,iVar4,param_2);
    g_currentExceptionFrame = local_48.previous;
    return pCVar3;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x1d9,0,iVar2,st::mutable_c_string("%s"),
                             "GetStrategName");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x1da);
  return (LPSTR)0x0;
}

// 0067E580 GetAssistantNameDB
#line 4 "decomp/ST.exe/functions/0067E580/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 488 | 491 | 492 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0067E580 parameter used as this of cMf32::RecChk @ 0067E5E8 */

LPSTR __cdecl st::fn_0067E580(cMf32 *param_1)

{
  char *text;
  int iVar2;
  LPSTR pCVar3;
  int iVar3;
  LPSTR pCVar4;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_48.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x1eb,0,iVar2,st::mutable_c_string("%s"),
                               "GetAssistantNameDB");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x1ec);
    return (LPSTR)0x0;
  }
  if (param_1 == nullptr) {
    st::fn_006A5E40
              (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x1e8);
  }
  text = PTR_s_ASSISTANT_0079d724;
  iVar2 = 0;
  do {
    pCVar3 = st::fn_006F2C00(text,3,iVar2);
    iVar3 = st::fn_006F21C0(param_1,0xc,pCVar3);
    if (iVar3 != 0) {
      g_currentExceptionFrame = local_48.previous;
      return pCVar3;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x7ffffff0);
  g_currentExceptionFrame = local_48.previous;
  return (LPSTR)0x0;
}

// 0067E6B0 GetOpponentNameDB
#line 4 "decomp/ST.exe/functions/0067E6B0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 506 | 509 | 510 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0067E6B0 parameter used as this of cMf32::RecChk @ 0067E718 */

LPSTR __cdecl st::fn_0067E6B0(cMf32 *param_1)

{
  char *text;
  int iVar2;
  LPSTR pCVar3;
  int iVar3;
  LPSTR pCVar4;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_48.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x1fd,0,iVar2,st::mutable_c_string("%s"),
                               "GetOpponentNameDB");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x1fe);
    return (LPSTR)0x0;
  }
  if (param_1 == nullptr) {
    st::fn_006A5E40
              (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x1fa);
  }
  text = PTR_s_OPPONENT_0079d728;
  iVar2 = 0;
  do {
    pCVar3 = st::fn_006F2C00(text,3,iVar2);
    iVar3 = st::fn_006F21C0(param_1,0xc,pCVar3);
    if (iVar3 != 0) {
      g_currentExceptionFrame = local_48.previous;
      return pCVar3;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x7ffffff0);
  g_currentExceptionFrame = local_48.previous;
  return (LPSTR)0x0;
}

// 0067E7E0 CreateArbList
#line 4 "decomp/ST.exe/functions/0067E7E0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 534 | 581 | 584 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0056ADC0 -> 0067E7E0 @ 0056B0F4 */

uint * __cdecl st::fn_0067E7E0(cMf32 *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar4;
  int iVar8;
  char *pcVar5;
  void *pvVar6;
  int iVar11;
  uint *puVar7;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ushort *_Source;
  byte *pbVar13;
  char *pcVar15;
  char *pcVar16;
  byte *pbVar17;
  bool bVar18;
  undefined1 local_33c [516];
  char local_138 [76];
  char local_ec [36];
  char local_c8 [32];
  uint local_a8;
  undefined4 local_a4;
  InternalExceptionFrame local_a0;
  byte local_5c [64];
  int local_1c;
  int local_18;
  int local_14;
  DArrayTy *local_10;
  ushort *local_c;
  DArrayTy *local_8;
  char *pcVar16_mg3;
  char *pcVar5_mg0;
  char *pcVar5_mg3;

  memset((void *)local_33c, 0, 0x201); /* compiler bulk-zero initialization */
  iVar9 = 0;
  local_8 = nullptr;
  local_10 = nullptr;
  local_a0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a0;
  iVar8 = st::fn_0072D7F0(local_a0.jumpBuffer,0);
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_a0.previous;
    iVar11 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x245,0,iVar8,st::mutable_c_string("%s"),
                                "CreateArbList");
    if (iVar11 == 0) {
      if (local_8 != nullptr) {
        st::fn_006AE110(local_8);
      }
      if (local_10 != nullptr) {
        st::fn_006AE110(local_10);
      }
      st::fn_006A5E40(iVar8,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x248);
      return nullptr;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1 == nullptr) {
    st::fn_006A5E40
              (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_plr_d.cpp"),0x216);
  }
  local_8 = st::fn_006AE290(nullptr,5,0x98,5);
  if (param_2 != 0) {
    local_10 = (DArrayTy *)st::fn_00403F44(param_1,0,0xffffffff);
  }
  uVar10 = 0xffffffff;
  local_33c[0] = 0xc;
  pcVar5_mg0 = PTR_s_AIBOSS_0079d720;
  do {
    pcVar5 = pcVar5_mg0;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar5 = pcVar5_mg0 + 1;
    cVar1 = *pcVar5_mg0;
    pcVar5_mg0 = pcVar5;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  pcVar5 = pcVar5 + -uVar10;
  pcVar16 = st::pointer_boundary_cast<char *>(local_33c + 1);
  memmove(pcVar16, pcVar5, uVar10); /* compiler REP MOVS byte copy */
  uVar11 = 0;
  st::fn_006F12B0(param_1,st::machine_word_boundary_cast<undefined4>(st::fn_006F2D10),st::machine_word_boundary_cast<undefined4>(local_33c));
  pcVar5 = (char *)st::fn_006F2790(param_1);
  do {
    if (pcVar5 == nullptr) {
      if (local_10 != nullptr) {
        st::fn_006AE110(local_10);
      }
      g_currentExceptionFrame = local_a0.previous;
      return st::pointer_boundary_cast<uint *>(&local_8->flags);
    }
    local_c = st::fn_006F2D90(param_1,pcVar5,0,1);
    if (local_c != nullptr) {
      _Source = local_c + 3;
      pcVar16 = local_138;
      for (iVar9 = 0x26; iVar9 != 0; iVar9 = iVar9 + -1) {
        pcVar16[0] = '\0';
        pcVar16[1] = '\0';
        pcVar16[2] = '\0';
        pcVar16[3] = '\0';
        pcVar16 = pcVar16 + 4;
      }
      st::fn_0072E340(local_138,(char *)_Source,0x3f);
      st::fn_0072E340(local_ec,pcVar5,0x1f);
      uVar10 = 0xffffffff;
      pcVar16_mg3 = PTR_s_AIBOSS_0079d720;
      do {
        pcVar16 = pcVar16_mg3;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar16 = pcVar16_mg3 + 1;
        cVar1 = *pcVar16_mg3;
        pcVar16_mg3 = pcVar16;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pbVar13 = (byte *)(pcVar16 + -uVar10);
      pbVar17 = local_5c;
      memmove(pbVar17, pbVar13, uVar10); /* compiler REP MOVS byte copy */
      uVar11 = 0;
      uVar10 = 0xffffffff;
      pcVar16 = "%d";
      do {
        pcVar15 = pcVar16;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar15 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar15;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      local_18 = 0;
      iVar9 = -1;
      pbVar13 = local_5c;
      do {
        pbVar17 = pbVar13;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar17 = pbVar13 + 1;
        bVar2 = *pbVar13;
        pbVar13 = pbVar17;
      } while (bVar2 != 0);
      pbVar13 = (byte *)(pcVar15 + -uVar10);
      pbVar17 = pbVar17 + -1;
      memmove(pbVar17, pbVar13, uVar10); /* compiler REP MOVS byte copy */
      uVar11 = 0;
      st::fn_0072EE80(pcVar5,local_5c);
      iVar9 = local_18;
      if (local_18 == 0) {
        st::fn_0072E340(local_c8,PTR_s_OBJECTIVES_0079d718,0x1f);
      }
      else {
        uVar10 = 0xffffffff;
        pcVar5_mg3 = PTR_s_OBJECTIVES_0079d718;
        do {
          pcVar5 = pcVar5_mg3;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar5 = pcVar5_mg3 + 1;
          cVar1 = *pcVar5_mg3;
          pcVar5_mg3 = pcVar5;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pbVar13 = (byte *)(pcVar5 + -uVar10);
        pbVar17 = local_5c;
        memmove(pbVar17, pbVar13, uVar10); /* compiler REP MOVS byte copy */
        uVar11 = 0;
        uVar10 = 0xffffffff;
        pcVar5 = "%03d";
        do {
          pcVar16 = pcVar5;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar12 = -1;
        pbVar13 = local_5c;
        do {
          pbVar17 = pbVar13;
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          pbVar17 = pbVar13 + 1;
          bVar2 = *pbVar13;
          pbVar13 = pbVar17;
        } while (bVar2 != 0);
        pbVar13 = (byte *)(pcVar16 + -uVar10);
        pbVar17 = pbVar17 + -1;
        memmove(pbVar17, pbVar13, uVar10); /* compiler REP MOVS byte copy */
        st::external_00000080(local_c8,(char *)local_5c,iVar9);
      }
      uVar10 = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_a8 = *(uint *)(local_c + 0x29);
      if (local_a8 == 0) {
        local_a8 = 1;
      }
      local_a4 = 0;
      bVar4 = true;
      if (param_2 != 0) {
        bVar4 = false;
        local_14 = 0;
        local_1c = 0;
        uVar11 = local_10->count;
        if (0 < (int)uVar11) {
          bVar18 = uVar11 != 0;
          do {
            if (bVar18) {
              pvVar6 = DArrayAt<void>(local_10, uVar10);
            }
            else {
              pvVar6 = nullptr;
            }
            if ((pvVar6 != nullptr) && ((STField<uint>(pvVar6,0x90) & local_a8) != 0)) {
              iVar9 = STField<int>(pvVar6,0x94);
              if (iVar9 == 1) {
                bVar4 = true;
              }
              else if (iVar9 == 2) {
                local_14 = 1;
              }
              else if (iVar9 == 3) {
                local_1c = 1;
              }
            }
            uVar10 = uVar10 + 1;
            bVar18 = uVar10 < uVar11;
          } while ((int)uVar10 < (int)uVar11);
        }
        if (((bVar4) && (local_14 != 0)) && (local_1c != 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
      }
      if (bVar4) {
        st::fn_006AE1C0(local_8,local_138);
      }
      st::fn_006F20E0(param_1,(uint *)&local_c);
    }
    pcVar5 = (char *)st::fn_006F2790(param_1);
  } while( true );
}

