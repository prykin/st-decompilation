#include "../../pseudocode_runtime.h"


/* WARNING: Unable to use type for symbol pcVar7 */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 1082 | 1127 | 1128 | 1129 | 1130 | 1131 | 1132 | 1133 | 1137 | 1138 |
   1143 | 1162 | 1172 | 1183 | 1211 | 1215 | 1219 | 1223 | 1228 | 1441 | 1442 | 1466 | 1500 | 1501 |
   1516 | 1517 | 1532 | 1533 | 1543 | 1548 | 1549 | 1562 | 1575 | 1585 | 1624 | 1644 | 1688 | 1690 |
   1710 | 1711 | 1765 | 1770 | 1788 | 1795 | 1806 | 1811 | 1838 | 1843 | 1868 | 1873 | 1893 | 1908 |
   1914 | 1916 | 1933 | 1949 | 1955 | 1969 | 1977 | 1985 | 2000 | 2012 | 2023 | 2033 | 2046 | 2056 |
   2066 | 2072 | 2077 | 2079 | 2091 | 2106 | 2111 | 2113 | 2125 | 2139 | 2144 | 2159 | 2165 | 2166 |
   2167 | 2168 | 2169 | 2170 | 2171 | 2172 | 2174 | 2175 | 2176 | 2178 | 2179 | 2180 | 2181 | 2182 |
   2183 | 2185 | 2186 | 2187 | 2188 | 2189 | 2190 | 2191 | 2192 | 2193 | 2195 | 2196 | 2197 | 2198 |
   2199 | 2200 | 2201 | 2202 | 2203 | 2204 | 2205 | 2206 | 2207 | 2208 | 2209 | 2210 | 2211 | 2212 |
   2214 | 2215 | 2216 | 2217 | 2219 | 2220 | 2221 | 2222 | 2223 | 2224 | 2225 | 2226 | 2227 | 2228 |
   2229 | 2230 | 2231 | 2232 | 2233 | 2234 | 2235 | 2236 | 2237 | 2238 | 2239 | 2241 | 2242 | 2243 |
   2244 | 2245 | 2246 | 2247 | 2248 | 2249 | 2250 | 2251 | 2253 | 2254 | 2255 | 2256 | 2257 | 2258 |
   2260 | 2261 | 2262 | 2263 | 2264 | 2265 | 2266 | 2267 | 2268 | 2269 | 2270 | 2271 | 2272 | 2273 |
   2274 | 2275 | 2276 | 2277 | 2278 | 2279 | 2280 | 2281 | 2282 | 2283 | 2284 | 2285 | 2286 | 2287 |
   2288 | 2289 | 2290 | 2291 | 2292 | 2293 | 2294 | 2296 | 2301 | 2310 | 2339 | 2343 | 2360 | 2361 |
   2362 | 2376 | 2380 | 2387 | 2394 | 2401 | 2404 | 2405 | 2409 | 2414 | 2423 | 2424 | 2471 | 2472 |
   2504 | 2512 | 2513 | 2525 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00683C70 -> EXTERNAL:0000001F @ 00683F3F */

uint * FUN_00683c70(LPCSTR lpFileName,RecoveredRecordView_00683C70_9F6EAF4E *param_2,
                   undefined4 *param_3,int *param_4,undefined *param_5)

{
  RecoveredGlobalRecordView_00848A14 *pRVar1;
  char cVar2;
  int local_EAX_119;
  int iVar2;
  int uVar8;
  int local_EAX_619;
  int local_EAX_667;
  byte *pbVar3_mg0;
  int local_EAX_907;
  int local_EAX_1897;
  int local_EAX_2430;
  char *local_EAX_2603;
  int local_EAX_2631;
  int local_EAX_2872;
  char *local_EAX_3095;
  int local_EAX_3220;
  int local_EAX_3364;
  char *local_EAX_3521;
  int local_EAX_3581;
  char *local_EAX_4770;
  int local_EAX_5008;
  int local_EAX_5150;
  RecoveredGlobalRecordView_00848A14 *local_EAX_5366;
  int local_EAX_5419;
  int local_EAX_5537;
  int local_EAX_6442;
  int local_EAX_7282;
  int local_EAX_8657;
  int local_EAX_8927;
  RecoveredGlobalRecordView_00848A14 *pAVar4;
  int local_EAX_8961;
  int local_EAX_14040;
  int local_EAX_14857;
  char *pcVar3;
  char *local_EAX_23799;
  int local_EAX_24967;
  char *local_EAX_25115;
  int iVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  char *local_EAX_25691;
  uint *puVar4;
  char *local_EAX_26162;
  char *local_EAX_26713;
  int local_EAX_27312;
  int local_EAX_27736;
  uint uVar5;
  uint uVar6;
  void *this;
  void *this_00;
  void *this_01;
  int iVar7;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  void *extraout_ECX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  void *extraout_ECX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  void *extraout_ECX_01;
  int iVar8;
  void *this_02;
  void *this_03;
  int iVar9;
  int iVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  ushort uVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_04;
  byte *pbVar13;
  void *pvVar14;
  AllocationRecord_0065CD10 *pAVar15;
  undefined4 **ppuVar16;
  LPCSTR pCVar17;
  byte *pbVar18;
  char *pcVar19;
  int *piVar21;
  float10 fVar22;
  ushort uVar23;
  byte bVar24;
  uint *puVar25;
  byte local_8ec [256];
  byte local_7ec [256];
  char local_6ec [260];
  uint local_5e8;
  uint local_5e4;
  uint local_5e0;
  uint local_5dc;
  char local_5d8 [260];
  uint local_4d4;
  byte local_4cc [260];
  byte local_3c8 [256];
  char local_2c8 [260];
  byte local_1c4;
  byte local_1c3;
  byte local_1c2;
  uint local_1c1;
  uint local_1bd;
  uint local_1b9;
  uint local_1b5;
  byte local_1b1;
  InternalExceptionFrame local_1b0;
  InternalExceptionFrame local_16c;
  uint local_128 [3];
  ushort local_11c;
  ushort local_11a;
  ushort local_118;
  ushort local_116;
  byte local_114;
  char local_113 [23];
  undefined4 *local_fc;
  int local_f8;
  char *local_f4;
  undefined4 *local_f0;
  uint local_ec;
  uint local_e8;
  AllocationRecord_0065CD10 *local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  int local_d0;
  int local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  byte *local_a8;
  byte local_a4 [4];
  uint local_a0;
  ushort local_9c;
  undefined4 uStack_9a;
  undefined2 uStack_96;
  uint local_94;
  uint local_90;
  float local_8c;
  float local_88;
  byte local_84;
  ushort local_83;
  ushort local_81;
  byte local_7c;
  ushort local_7b;
  ushort local_79;
  byte local_74;
  ushort local_73;
  ushort local_71;
  byte local_6c;
  ushort local_6b;
  ushort local_69;
  byte local_64;
  ushort local_63;
  ushort local_61;
  byte local_5c;
  ushort local_5b;
  ushort local_59;
  byte local_54;
  ushort local_53;
  ushort local_51;
  byte local_4c;
  ushort local_4b;
  ushort local_49;
  byte local_44;
  ushort local_43;
  ushort local_41;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  AllocationRecord_006684E0 *local_2c;
  AllocationRecord_0067D3B0 *local_28;
  byte *local_24;
  AllocationRecord_00648620 *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  AllocationRecord_0065CD10 *local_c;
  char local_5;
  char *pcVar7;
  byte *pbVar14;
  char *temp_3fb77f837b;
  char *temp_3f53535d7a;
  char *temp_3f861e3394;
  char *temp_3f4976a46d;

  local_30 = 1;
  local_28 = nullptr;
  local_2c = nullptr;
  local_24 = nullptr;
  local_20 = nullptr;
  local_c = nullptr;
  uVar5 = 0xffffffff;
  pcVar3 = &CHAR_00h_008016a0;
  do {
    pcVar19 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar19 = pcVar3 + 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar19;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5;
  pcVar3 = pcVar19 + -uVar5;
  pcVar19 = (char *)&DAT_008488b4;
  memmove(pcVar19, pcVar3, uVar5); /* compiler REP MOVS byte copy */
  uVar6 = 0;
  local_1b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_1b0;

  local_EAX_119 = Library::MSVCRT::__setjmp3(local_1b0.jumpBuffer,0);
  if (local_EAX_119 == 0) {
    if (lpFileName == (LPCSTR)0x0) {
      RaiseInternalException
                (-6,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x43a);
    }

    thunk_FUN_00672b60(lpFileName,
                       (RecoveredGlobalRecordView_0081194C *)&PTR_thunk_FUN_00680270_007d3fa8);
    g_currentExceptionFrame = &local_16c;
    local_16c.previous = local_1b0.previous;

    iVar2 = Library::MSVCRT::__setjmp3(local_16c.jumpBuffer,0);
    if (iVar2 == 0) {
      thunk_FUN_006729b0(this,1);
      thunk_FUN_006729f0(this_00,0);

      thunk_FUN_00672930(1);
      thunk_FUN_00672970(this_01,1);

      thunk_FUN_006728f0((undefined4 *)&DAT_007d3f78);
      DAT_008489d0 = nullptr;
      g_allocationRecord_00648620_008489B4 = nullptr;
      g_allocationRecord_0067D3B0_008489B8 = nullptr;
      g_allocationRecord_0065CD10_008489BC = nullptr;
      DAT_008489c0 = 0;
      g_allocationRecord_006684E0_008489C4 = nullptr;
      DAT_008489c8 = nullptr;
      PTR_008489cc = nullptr;
      g_array_008489D4 = nullptr;
      g_dArray_008489D8 = nullptr;
      g_dArray_008489DC = nullptr;
      thunk_FUN_00680530();
      thunk_FUN_00680310();
      DAT_007d3fa4 = 1;
      memset(&DAT_00811a90, 0, 0x2b14); /* compiler bulk-zero initialization */
      DAT_008488b0 = 0;
      DAT_00811a90 = 0;
      DAT_00811a98 = 0;
      thunk_FUN_00680040();
      if (param_2 == nullptr) {
        RaiseInternalException
                  (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x467);
      }

      iVar7 = thunk_FUN_0067f030("_main_path",(char *)param_2,nullptr);
      if (iVar7 == 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x468);
      }

      iVar7 = thunk_FUN_0067f030("_inc_path",&param_2->field_0x104,nullptr);
      if (iVar7 == 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x469);
      }

      iVar7 = thunk_FUN_0067f030("_maps_path",&param_2->field_0x208,nullptr);
      if (iVar7 == 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x46a);
      }

      uVar8 = thunk_FUN_0067f740("_env_var0",param_2->field_030C);
      if (uVar8 < 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x46b);
      }

      local_EAX_619 = thunk_FUN_0067f740("_env_var1",param_2->field_0310);
      if (local_EAX_619 < 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x46c);
      }

      local_EAX_667 = thunk_FUN_0067f740("_env_var2",param_2->field_0314);
      if (local_EAX_667 < 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x46d);
      }
      /* ST_CALLSITE[00683F3F]: CALL dword ptr [0x0085bba8] */
      GetFullPathNameA(lpFileName,0x104,(LPSTR)local_4cc,nullptr);
      Library::MSVCRT::FUN_0072e730(local_4cc,local_a4,local_7ec,local_8ec,local_3c8);
      Library::MSVCRT::__makepath
                ((char *)local_4cc,(char *)local_a4,(char *)local_7ec,nullptr,nullptr);

      iVar7 = thunk_FUN_0067f030("_curr_path",(char *)local_4cc,nullptr);
      if (iVar7 == 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x471);
      }
      pbVar13 = local_4cc;
      puVar25 = nullptr;
      /* ST_CALLSITE[00683FC8]: CALL 0x00401aa5; direct=00401AA5 thunk_FUN_0067ece0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/char; source view only; no Ghidra override */
      pbVar3_mg0 = thunk_FUN_0067ece0(DAT_00848a24);

      iVar7 = thunk_FUN_0067f030((char *)pbVar3_mg0,(char *)pbVar13,puVar25);
      if (iVar7 == 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x472);
      }
switchD_006841b6_default:
      if (local_30 != 0) {

        local_EAX_907 = thunk_FUN_006736f0();
        if (local_EAX_907 < 0) {
          RaiseInternalException
                    (local_EAX_907,g_overwriteContext_007ED77C,
                     "E:\\__titans\\ai\\ai_script.cpp",0x477);
        }
      }
      if (param_5 != nullptr) {
        ppuVar16 = &local_fc;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *ppuVar16 = nullptr;
          ppuVar16 = ppuVar16 + 1;
        }
        local_f8 = DAT_00857554;
        Library::MSVCRT::FUN_0072e730(PTR_0085753c,nullptr,nullptr,nullptr,local_3c8);
        if (local_3c8[0] == 0) {
          if (lpFileName != (LPCSTR)0x0) {
            uVar5 = 0xffffffff;
            pCVar17 = lpFileName;
            do {
              pcVar3 = pCVar17;
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              pcVar3 = pCVar17 + 1;
              cVar2 = *pCVar17;
              pCVar17 = pcVar3;
            } while (cVar2 != '\0');
            uVar5 = ~uVar5;
            pbVar13 = (byte *)(pcVar3 + -uVar5);
            pbVar18 = (byte *)&DAT_0084790c;
            for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined4 *)pbVar18 = *(undefined4 *)pbVar13;
              pbVar13 = pbVar13 + 4;
              pbVar18 = pbVar18 + 4;
            }
            goto LAB_006840bc;
          }
        }
        else if (PTR_0085753c != nullptr) {
          uVar5 = 0xffffffff;
          pbVar14 = PTR_0085753c;
          do {
            pbVar13 = pbVar14;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pbVar13 = pbVar14 + 1;
            bVar24 = *pbVar14;
            pbVar14 = pbVar13;
          } while (bVar24 != 0);
          uVar5 = ~uVar5;
          pbVar13 = pbVar13 + -uVar5;
          pbVar18 = (byte *)&DAT_0084790c;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pbVar18 = *(undefined4 *)pbVar13;
            pbVar13 = pbVar13 + 4;
            pbVar18 = pbVar18 + 4;
          }
LAB_006840bc:
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pbVar18 = *pbVar13;
            pbVar13 = pbVar13 + 1;
            pbVar18 = pbVar18 + 1;
          }
        }
        local_fc = &DAT_0084790c;
        Library::MSVCRT::_strncpy(&CHAR_00h_00847d0c,PTR_0085755c,0x3fe);
        local_f4 = &CHAR_00h_00847d0c;
        if (DAT_008489d0 != nullptr) {
          local_e8 = DAT_00848a0c;
          local_ec = DAT_00848a10;
          if ((char *)((int)DAT_008489d0 + 0x231) != nullptr) {
            uVar5 = 0xffffffff;
            pcVar3 = (char *)((int)DAT_008489d0 + 0x231);
            do {
              pcVar19 = pcVar3;
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              pcVar19 = pcVar3 + 1;
              cVar2 = *pcVar3;
              pcVar3 = pcVar19;
            } while (cVar2 != '\0');
            uVar5 = ~uVar5;
            pcVar3 = pcVar19 + -uVar5;
            pcVar19 = (char *)&DAT_0084810c;
            memmove(pcVar19, pcVar3, uVar5); /* compiler REP MOVS byte copy */
          }
          local_f0 = &DAT_0084810c;
        }
        /* ST_CALLSITE[00684152]: CALL dword ptr [EBP + 0x18] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar7 = (*(code *)param_5)(&local_fc);
        if (iVar7 != 0) {
          RaiseInternalException
                    (-0x65,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x48a
                    );
        }
      }
      local_30 = 1;
      if (DAT_007d2d18 == 0x1c) {
        pAVar15 = (AllocationRecord_0065CD10 *)lpFileName;
        if (param_3 != nullptr) {
          *param_3 = 6;
        }
cf_common_join_0068A687:
        if (pAVar15 == nullptr) {
          RaiseInternalException
                    (-0x8d,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x9dd
                    );
        }
        thunk_FUN_006484f0((int *)&g_allocationRecord_00648620_008489B4);
        thunk_FUN_0067d160((int *)&g_allocationRecord_0067D3B0_008489B8);
        thunk_FUN_0065d0f0((int *)&g_allocationRecord_0065CD10_008489BC);
        thunk_FUN_00691540((int *)&DAT_008489c8);
        thunk_FUN_006686c0((int *)&g_allocationRecord_006684E0_008489C4);
        thunk_FUN_0065d1f0((int *)&PTR_008489cc);
        if (g_array_008489D4 != nullptr) {
          DArrayDestroy(g_array_008489D4);
          g_array_008489D4 = nullptr;
        }
        if (g_dArray_008489DC != nullptr) {
          FUN_006b5570(g_dArray_008489DC);
          g_dArray_008489DC = nullptr;
        }
        thunk_FUN_00680070();
        thunk_FUN_0064a800(&g_anonShape_00683780_11EA4E23_00848A14);

        local_EAX_27312 = thunk_FUN_00672f00();
        while (local_EAX_27312 != 0) {

          local_EAX_27312 = thunk_FUN_00672f00();
        }
        thunk_FUN_006807d0(&DAT_008489d0);
        g_currentExceptionFrame = local_16c.previous;
        return (uint *)pAVar15;
      }
      switch((&DAT_00811a90)[DAT_008488b0 * 0xac5]) {
      case 0:
        if (DAT_007d2d18 == 0x3b7) {
          if ((int)(&DAT_0081458c)[DAT_008488b0 * 0xac5] < 1) {
            RaiseInternalException
                      (-0x6e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x494);
          }
          iVar8 = DAT_008488b0;
          iVar7 = DAT_008488b0 * 0x2b14;
          *(undefined4 *)(&DAT_008143f4 + (&DAT_0081458c)[DAT_008488b0 * 0xac5] * 8 + iVar7) = 1;
          iVar7 = iVar7 + (&DAT_0081458c)[iVar8 * 0xac5] * 8;
          pvVar14 = *(void **)(&DAT_008143f4 + iVar7);
          if (((pvVar14 == nullptr) && (*(int *)(&DAT_008143f8 + iVar7) == 0)) ||
             ((pvVar14 == (void *)0x1 && (*(int *)(&DAT_008143f8 + iVar7) != 0)))) {
            thunk_FUN_00672ab0(pvVar14,1);
            bVar24 = 1;
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            pvVar14 = extraout_ECX_00;
          }
          else {
LAB_006842cf:
            thunk_FUN_00672ab0(pvVar14,0);
            bVar24 = 0;
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            pvVar14 = extraout_ECX_01;
          }
LAB_006842d6:
          thunk_FUN_00672af0(pvVar14,bVar24);
        }
        else if (DAT_007d2d18 == 0x3b8) {
          if ((int)(&DAT_0081458c)[DAT_008488b0 * 0xac5] < 1) {
            RaiseInternalException
                      (-0x6e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x49f);
          }
          iVar7 = DAT_008488b0 * 0x2b14;
          pvVar14 = (void *)((&DAT_0081458c)[DAT_008488b0 * 0xac5] + -1);
          (&DAT_0081458c)[DAT_008488b0 * 0xac5] = pvVar14;
          if (((int)pvVar14 < 1) ||
             (((*(int *)(&DAT_008143f4 + (int)pvVar14 * 8 + iVar7) != 0 ||
               (*(int *)(&DAT_008143f8 + (int)pvVar14 * 8 + iVar7) != 0)) &&
              ((*(int *)(&DAT_008143f4 + (int)pvVar14 * 8 + iVar7) != 1 ||
               (*(int *)(&DAT_008143f8 + (int)pvVar14 * 8 + iVar7) == 0)))))) goto LAB_006842cf;
          thunk_FUN_00672ab0(pvVar14,1);
          bVar24 = 1;
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          pvVar14 = extraout_ECX;
          goto LAB_006842d6;
        }
        iVar8 = DAT_008488b0 * 0x2b14;
        iVar7 = (&DAT_0081458c)[DAT_008488b0 * 0xac5];
        if ((iVar7 < 1) ||
           (((*(int *)(&DAT_008143f4 + iVar7 * 8 + iVar8) != 0 ||
             (*(int *)(&DAT_008143f8 + iVar7 * 8 + iVar8) != 0)) &&
            ((*(int *)(&DAT_008143f4 + iVar7 * 8 + iVar8) != 1 ||
             (*(int *)(&DAT_008143f8 + iVar7 * 8 + iVar8) == 0)))))) {
          if (DAT_007d2d18 < 0x475) {
            if (DAT_007d2d18 < 0x456) {
              if (0x3ed < DAT_007d2d18) {
                switch(DAT_007d2d18) {
                case 0x3f2:
                case 0x3f3:
                case 0x3fc:
                case 0x3fd:
                case 0x406:
                case 0x407:
                case 0x408:
                case 0x409:
                case 0x41a:
                case 0x41b:
                case 0x424:
                case 0x425:
                case 0x426:
                case 0x427:
                case 0x428:
                case 0x429:
                case 0x42a:
                case 0x42b:
                case 0x42c:
                case 0x42d:
                case 0x42e:
                case 0x42f:
                case 0x430:
                case 0x431:
                case 0x432:
                case 0x44c:
                case 0x44d:
                  goto switchD_00684bb9_caseD_3f2;
                default:
                  goto switchD_006841b6_default;
                }
              }
              if (DAT_007d2d18 < 1000) {
                if (DAT_007d2d18 < 0x24) {
                  if (DAT_007d2d18 != 0x23) {
                    if (DAT_007d2d18 == 0x19) {
                      /* ST_CALLSITE[00684994]: CALL 0x00401cd0; direct=00401CD0 thunk_FUN_00683670; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
                      local_EAX_3364 = thunk_FUN_00683670();
                      if (local_EAX_3364 == 0) {
                        RaiseInternalException
                                  (-0x8e,g_overwriteContext_007ED77C,
                                   "E:\\__titans\\ai\\ai_script.cpp",0x5a1);
                      }
                      if (PTR_008489cc == nullptr) {
                        RaiseInternalException
                                  (-0x8f,g_overwriteContext_007ED77C,
                                   "E:\\__titans\\ai\\ai_script.cpp",0x5a2);
                      }
                      iVar7 = DAT_008488b0 + 1;
                      puVar4 = &DAT_00811a90 + iVar7 * 0xac5;
                      DAT_008488b0 = iVar7;
                      for (iVar8 = 0xac5; temp_3f53535d7a = PTR_00857528, iVar11 = DAT_007d2d18,
                          iVar8 != 0; iVar8 = iVar8 + -1) {
                        *puVar4 = 0;
                        puVar4 = puVar4 + 1;
                      }
                      (&DAT_00811a90)[iVar7 * 0xac5] = 4;
                      (&DAT_00811a94)[iVar7 * 0xac5] = iVar11;
                      local_EAX_3521 =
                           Library::MSVCRT::_strncpy
                                     (&CHAR_00h_00811aa4 + iVar7 * 0x2b14,temp_3f53535d7a,0x3f);
                      local_bc = STReplaceLowWord((uint32_t)(local_EAX_3521), (uint16_t)(STField<undefined2>(local_EAX_3364,0x472)));
                      local_d0 = PTR_008489cc->field_000F->count + 1;

                      local_EAX_3581 =
                           thunk_FUN_006838b0((int *)(local_EAX_3364 + 0x46e),'\x02',
                                              (byte *)&local_d0,STField<int>(local_EAX_3364,0x456));
                      local_4c = 0xb;
                      local_4b = 0x19;
                      local_49 = 1;
                      (&DAT_00814590)[DAT_008488b0 * 0xac5] = local_EAX_3581;

                      thunk_FUN_0064a830((int *)(local_EAX_3364 + 0x46e),(undefined4 *)&local_4c);

                      Library::DKW::TBL::DArrayAppend(PTR_008489cc->field_000F,&local_bc);
                    }
                    else if (DAT_007d2d18 == 0x1a) {
                      if (DAT_008488b0 < 2) {
                        RaiseInternalException
                                  (-0x8f,g_overwriteContext_007ED77C,
                                   "E:\\__titans\\ai\\ai_script.cpp",0x5ba);
                      }
                      DAT_008488b0 = DAT_008488b0 + -1;
                      iVar7 = (&DAT_00811a94)[DAT_008488b0 * 0xac5];
                      if (iVar7 < 0x43) {
                        if (iVar7 == 0x42) {

                          local_EAX_2872 = thunk_FUN_00683670();
                          if (local_EAX_2872 == 0) {
                            RaiseInternalException
                                      (-0x8e,g_overwriteContext_007ED77C,
                                       "E:\\__titans\\ai\\ai_script.cpp",0x60c);
                          }
                          if (PTR_008489cc == nullptr) {
                            RaiseInternalException
                                      (-0x8f,g_overwriteContext_007ED77C,
                                       "E:\\__titans\\ai\\ai_script.cpp",0x60d);
                          }
                          local_c8 = STField<undefined4>(local_EAX_2872,0x472);
                          pRVar1 = (RecoveredGlobalRecordView_00848A14 *)(local_EAX_2872 + 0x46e);

                          thunk_FUN_006838b0((int *)pRVar1,'\x02',
                                             (byte *)(&DAT_00814594 + DAT_008488b0 * 0xac5),
                                             STField<int>(local_EAX_2872,0x456));
                          local_5c = 0xb;
                          local_5b = 0x21;
                          local_59 = 1;

                          thunk_FUN_0064a830((int *)pRVar1,(undefined4 *)&local_5c);

                          Library::DKW::TBL::DArrayAppend(PTR_008489cc->field_000F,&local_c8);
                          local_EAX_3095 =
                               thunk_FUN_0064a910(pRVar1,(&DAT_00814590)[DAT_008488b0 * 0xac5]);
                          if (local_EAX_3095 == nullptr) {
                            RaiseInternalException
                                      (-0x6c,g_overwriteContext_007ED77C,
                                       "E:\\__titans\\ai\\ai_script.cpp",0x61a);
                          }
                          *(dword *)(local_EAX_3095 + 1) = PTR_008489cc->field_000F->count;
                          DAT_008488b0 = DAT_008488b0 + -1;
                        }
                        else {
                          if (iVar7 == 0x19) {

                            local_EAX_2631 = thunk_FUN_00683670();
                            if (local_EAX_2631 == 0) {
                              RaiseInternalException
                                        (-0x8e,g_overwriteContext_007ED77C,
                                         "E:\\__titans\\ai\\ai_script.cpp",0x5fc);
                            }
                            if (PTR_008489cc == nullptr) {
                              RaiseInternalException
                                        (-0x8f,g_overwriteContext_007ED77C,
                                         "E:\\__titans\\ai\\ai_script.cpp",0x5fd);
                            }
                            local_c0 = STField<undefined4>(local_EAX_2631,0x472);
                            local_6c = 0xb;
                            local_6b = 0x323;
                            local_69 = 0;

                            thunk_FUN_0064a830((int *)(local_EAX_2631 + 0x46e),
                                               (undefined4 *)&local_6c);

                            Library::DKW::TBL::DArrayAppend(PTR_008489cc->field_000F,&local_c0);
                            local_EAX_2603 =
                                 thunk_FUN_0064a910((RecoveredGlobalRecordView_00848A14 *)
                                                    (local_EAX_2631 + 0x46e),
                                                    (&DAT_00814590)[DAT_008488b0 * 0xac5]);
                            if (local_EAX_2603 == nullptr) {
                              iVar7 = 0x607;
LAB_00684777:
                              RaiseInternalException
                                        (-0x6c,g_overwriteContext_007ED77C,
                                         "E:\\__titans\\ai\\ai_script.cpp",iVar7);
                            }
                          }
                          else {
                            if (iVar7 != 0x23) goto LAB_00684989;

                            local_EAX_2430 = thunk_FUN_00683670();
                            if (local_EAX_2430 == 0) {
                              RaiseInternalException
                                        (-0x8e,g_overwriteContext_007ED77C,
                                         "E:\\__titans\\ai\\ai_script.cpp",0x5ec);
                            }
                            if (PTR_008489cc == nullptr) {
                              RaiseInternalException
                                        (-0x8f,g_overwriteContext_007ED77C,
                                         "E:\\__titans\\ai\\ai_script.cpp",0x5ed);
                            }
                            local_b8 = STField<undefined4>(local_EAX_2430,0x472);
                            local_7c = 0xb;
                            local_7b = 0x322;
                            local_79 = 0;

                            thunk_FUN_0064a830((int *)(local_EAX_2430 + 0x46e),
                                               (undefined4 *)&local_7c);

                            Library::DKW::TBL::DArrayAppend(PTR_008489cc->field_000F,&local_b8);
                            local_EAX_2603 =
                                 thunk_FUN_0064a910((RecoveredGlobalRecordView_00848A14 *)
                                                    (local_EAX_2430 + 0x46e),
                                                    (&DAT_00814590)[DAT_008488b0 * 0xac5]);
                            if (local_EAX_2603 == nullptr) {
                              iVar7 = 0x5f7;
                              goto LAB_00684777;
                            }
                          }
                          *(dword *)(local_EAX_2603 + 1) = PTR_008489cc->field_000F->count;
                          DAT_008488b0 = DAT_008488b0 + -1;
                        }
                      }
                      else {
                        if ((0x455 < iVar7) && (iVar7 < 0x475)) {
                          if (PTR_008489cc == nullptr) {
                            RaiseInternalException
                                      (-0x8f,g_overwriteContext_007ED77C,
                                       "E:\\__titans\\ai\\ai_script.cpp",0x5dc);
                          }
                          /* ST_CALLSITE[00684904]: CALL 0x00401cd0; direct=00401CD0 thunk_FUN_00683670; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
                          local_EAX_3220 = thunk_FUN_00683670();
                          if (local_EAX_3220 == 0) {
                            RaiseInternalException
                                      (-0x8e,g_overwriteContext_007ED77C,
                                       "E:\\__titans\\ai\\ai_script.cpp",0x5dd);
                          }
                          local_b4 = STField<undefined4>(local_EAX_3220,0x472);
                          local_44 = 0xb;
                          local_43 = 0x514;
                          local_41 = 0;

                          thunk_FUN_0064a830((int *)(local_EAX_3220 + 0x46e),(undefined4 *)&local_44
                                            );

                          Library::DKW::TBL::DArrayAppend(PTR_008489cc->field_000F,&local_b4);

                          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                          Library::DKW::TBL::DArrayAppend
                                    (*(DArrayTy **)(local_EAX_3220 + 0x462),PTR_008489cc);
                          FreeAndNull(&PTR_008489cc);
                        }
LAB_00684989:
                        DAT_008488b0 = DAT_008488b0 + -1;
                      }
                    }
                    else if (DAT_007d2d18 == 0x22) {
                      DAT_008488b0 = DAT_008488b0 + 1;
                      iVar11 = DAT_008488b0 * 0x2b14;
                      iVar7 = DAT_008488b0 * 0xac5;
                      puVar4 = &DAT_00811a90 + iVar7;
                      for (iVar8 = 0xac5; temp_3f861e3394 = PTR_00857528, iVar8 != 0;
                          iVar8 = iVar8 + -1) {
                        *puVar4 = 0;
                        puVar4 = puVar4 + 1;
                      }
                      (&DAT_00811a90)[iVar7] = 1;
                      Library::MSVCRT::_strncpy(&CHAR_00h_00811aa4 + iVar11,temp_3f861e3394,0x3f);

                      local_EAX_1897 = thunk_FUN_006800a0((byte *)PTR_00857528);
                      iVar7 = DAT_008488b0;
                      (&DAT_00811a9c)[DAT_008488b0 * 0xac5] = local_EAX_1897;
                      if (local_EAX_1897 == 5) {
                        if (PTR_008489cc == nullptr) {
                          RaiseInternalException
                                    (-0x8f,g_overwriteContext_007ED77C,
                                     "E:\\__titans\\ai\\ai_script.cpp",0x4bb);
                        }
                        iVar7 = DAT_008488b0;

                        iVar8 = thunk_FUN_0067ff00(PTR_00857528);
                        (&DAT_00811aa0)[iVar7 * 0xac5] = iVar8;
                      }
                      iVar8 = DAT_008488b0;
                      if ((&DAT_00811a9c)[iVar7 * 0xac5] == 6) {
                        if (PTR_008489cc == nullptr) {
                          RaiseInternalException
                                    (-0x8f,g_overwriteContext_007ED77C,
                                     "E:\\__titans\\ai\\ai_script.cpp",0x4bf);
                        }
                        iVar7 = DAT_008488b0;

                        iVar11 = thunk_FUN_0067ff50(PTR_00857528);
                        iVar8 = DAT_008488b0;
                        (&DAT_00811aa0)[iVar7 * 0xac5] = iVar11;
                      }
                      if ((&DAT_00811a9c)[iVar7 * 0xac5] == 7) {
                        iVar7 = iVar8;
                        if (PTR_008489cc == nullptr) {
                          RaiseInternalException
                                    (-0x8f,g_overwriteContext_007ED77C,
                                     "E:\\__titans\\ai\\ai_script.cpp",0x4c3);
                          iVar7 = DAT_008488b0;
                        }

                        iVar8 = thunk_FUN_0067ffa0(PTR_00857528);
                        (&DAT_00811aa0)[iVar7 * 0xac5] = iVar8;
                      }
                      if ((&DAT_00811a9c)[iVar7 * 0xac5] == 8) {
                        if (PTR_008489cc == nullptr) {
                          RaiseInternalException
                                    (-0x8f,g_overwriteContext_007ED77C,
                                     "E:\\__titans\\ai\\ai_script.cpp",0x4c7);
                        }

                        iVar7 = thunk_FUN_0067fff0(PTR_00857528);
                        (&DAT_00811aa0)[DAT_008488b0 * 0xac5] = iVar7;
                      }
                    }
                    goto switchD_006841b6_default;
                  }
                }
                else if ((DAT_007d2d18 != 0x35) && (DAT_007d2d18 != 0x42)) {
                  if (DAT_007d2d18 == 0x3b6) {
                    if (0x31 < iVar7) {
                      RaiseInternalException
                                (-0x66,g_overwriteContext_007ED77C,
                                 "E:\\__titans\\ai\\ai_script.cpp",0x4cc);
                    }
                    iVar8 = DAT_008488b0;
                    iVar11 = DAT_008488b0 * 0x2b14;
                    iVar7 = (&DAT_0081458c)[DAT_008488b0 * 0xac5];
                    iVar9 = DAT_008488b0 + 1;
                    (&DAT_0081458c)[DAT_008488b0 * 0xac5] = iVar7 + 1;
                    DAT_008488b0 = iVar9;
                    *(undefined4 *)(&DAT_008143f4 + (iVar7 + 1) * 8 + iVar11) = 0;
                    *(undefined4 *)(&DAT_008143f8 + (&DAT_0081458c)[iVar8 * 0xac5] * 8 + iVar11) = 0
                    ;
                    puVar4 = &DAT_00811a90 + iVar9 * 0xac5;
                    for (iVar7 = 0xac5; temp_3fb77f837b = PTR_00857528, iVar8 = DAT_007d2d18,
                        iVar7 != 0; iVar7 = iVar7 + -1) {
                      *puVar4 = 0;
                      puVar4 = puVar4 + 1;
                    }
                    (&DAT_00811a90)[iVar9 * 0xac5] = 2;
                    (&DAT_00811a94)[iVar9 * 0xac5] = iVar8;
                    Library::MSVCRT::_strncpy
                              (&CHAR_00h_00811aa4 + iVar9 * 0x2b14,temp_3fb77f837b,0x3f);
                    DAT_007d3fa4 = 0;
                  }
                  goto switchD_006841b6_default;
                }
              }
            }
          }
          else if (DAT_007d2d18 < 0x57c) {
            if (DAT_007d2d18 < 0x578) {
              switch(DAT_007d2d18) {
              case 0x4b0:
              case 0x4b1:
              case 0x4b2:
              case 0x4b3:
              case 0x4b4:
              case 0x4b5:
              case 0x514:
              case 0x515:
              case 0x516:
              case 0x517:
              case 0x518:
              case 0x519:
              case 0x51a:
              case 0x51b:
              case 0x528:
              case 0x529:
              case 0x52a:
              case 0x532:
              case 0x533:
              case 0x534:
              case 0x535:
              case 0x536:
              case 0x537:
              case 0x546:
              case 0x547:
              case 0x548:
              case 0x549:
              case 0x54a:
              case 0x54b:
              case 0x54c:
              case 0x54d:
              case 0x54e:
              case 0x55a:
              case 0x55b:
              case 0x55c:
              case 0x55d:
              case 0x55e:
              case 0x55f:
              case 0x560:
              case 0x561:
              case 0x562:
              case 0x563:
              case 0x564:
              case 0x565:
              case 0x566:
              case 0x567:
              case 0x568:
              case 0x569:
              case 0x56a:
                break;
              default:
                goto switchD_006841b6_default;
              }
            }
          }
          else if (DAT_007d2d18 < 0x5c9) {
            if (DAT_007d2d18 != 0x5c8) {
              switch(DAT_007d2d18) {
              case 0x582:
              case 0x583:
              case 0x584:
              case 0x585:
              case 0x58c:
              case 0x58d:
              case 0x58e:
              case 0x58f:
              case 0x590:
              case 0x591:
              case 0x592:
              case 0x593:
              case 0x594:
              case 0x595:
              case 0x596:
              case 0x597:
              case 0x598:
              case 0x599:
              case 0x59a:
              case 0x59b:
              case 0x59c:
              case 0x59d:
              case 0x5aa:
              case 0x5ab:
              case 0x5ac:
              case 0x5ad:
              case 0x5ae:
              case 0x5af:
              case 0x5b0:
              case 0x5b1:
              case 0x5b2:
              case 0x5b3:
              case 0x5b4:
              case 0x5b5:
              case 0x5b6:
              case 0x5b7:
              case 0x5b8:
              case 0x5b9:
                break;
              default:
                goto switchD_006841b6_default;
              }
            }
          }
          else if ((DAT_007d2d18 < 0x5dc) || ((0x5fe < DAT_007d2d18 && (DAT_007d2d18 != 0x76c))))
          goto switchD_006841b6_default;
switchD_00684bb9_caseD_3f2:
          iVar8 = DAT_008488b0 + 1;
          puVar4 = &DAT_00811a90 + iVar8 * 0xac5;
          DAT_008488b0 = iVar8;
          for (iVar7 = 0xac5; temp_3f4976a46d = PTR_00857528, iVar11 = DAT_007d2d18, iVar7 != 0;
              iVar7 = iVar7 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          (&DAT_00811a90)[iVar8 * 0xac5] = 2;
          (&DAT_00811a94)[iVar8 * 0xac5] = iVar11;
          Library::MSVCRT::_strncpy(&CHAR_00h_00811aa4 + iVar8 * 0x2b14,temp_3f4976a46d,0x3f);
        }
        goto switchD_006841b6_default;
      case 1:
        if (DAT_007d2d18 != 0x1d) {
          switch(DAT_007d2d18) {
          case 2:
          case 0x17:
          case 0x2d:
          case 0x31:
          case 0x3e:
            if (PTR_008489cc == nullptr) {
              RaiseInternalException
                        (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                         0x631);
            }
            iVar7 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
            if (((iVar7 != 5) && (iVar7 != 6)) && (iVar7 != 7)) {
              thunk_FUN_006802a0(-0x74,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
            }
            break;
          default:
            if (DAT_007d2d18 == 0x29) {
              thunk_FUN_006802a0(-0x7b,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
            }
            else {
              thunk_FUN_006826a0(DAT_007d2d18);
            }
            break;
          case 4:
            iVar7 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
            if (((iVar7 == 5) || (iVar7 == 6)) || ((iVar7 == 7 || (iVar7 == 8)))) {
              thunk_FUN_006802a0(-0x74,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
            }
            break;
          case 5:
            if (PTR_008489cc == nullptr) {
              RaiseInternalException
                        (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                         0x627);
            }
            iVar7 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
            if ((((iVar7 != 5) && (iVar7 != 6)) && (iVar7 != 7)) && (iVar7 != 8)) {
              thunk_FUN_006802a0(-0x74,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
            }
          }
          iVar8 = DAT_008488b0 + 1;
          (&DAT_00811a98)[DAT_008488b0 * 0xac5] = (&DAT_00811a98)[DAT_008488b0 * 0xac5] + 1;
          iVar11 = iVar8 * 0x2b14;
          puVar4 = &DAT_00811a90 + iVar8 * 0xac5;
          DAT_008488b0 = iVar8;
          for (iVar7 = 0xac5; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          (&DAT_00811a90)[iVar8 * 0xac5] = 3;
          uVar5 = 0xffffffff;
          (&DAT_00811a94)[iVar8 * 0xac5] = 1;
          pcVar3 = (char *)(iVar11 + 0x80ef90);
          do {
            pcVar19 = pcVar3;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar19 = pcVar3 + 1;
            cVar2 = *pcVar3;
            pcVar3 = pcVar19;
          } while (cVar2 != '\0');
          uVar5 = ~uVar5;
          pcVar3 = pcVar19 + -uVar5;
          pcVar19 = &CHAR_00h_00811aa4 + iVar11;
          memmove(pcVar19, pcVar3, uVar5); /* compiler REP MOVS byte copy */
          uVar6 = 0;
          (&DAT_00811a9c)[iVar8 * 0xac5] = STField<undefined4>(iVar11,0x80EF88);
          iVar7 = DAT_007d2d18;
          (&DAT_00811aa0)[iVar8 * 0xac5] = STField<undefined4>(iVar11,0x80EF8C);
          (&DAT_00811ae4)[iVar8 * 0xac5] = iVar7;
        }
        goto switchD_006841b6_default;
      case 2:
        goto switchD_006841b6_caseD_2;
      case 3:
        g_anonShape_00683780_11EA4E23_00848A14 =
             /* ST_CALLSITE[006897B2]: CALL 0x0040213f; direct=0040213F thunk_FUN_0064a630; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredGlobalRecordView_00848A14; source view only; no Ghidra override */
             (RecoveredGlobalRecordView_00848A14 *)thunk_FUN_0064a630(10);
        if (DAT_007d2d18 != 0x39) {
          thunk_FUN_00683600();
        }
        if ((DAT_007d2d18 != 0x10) && (DAT_007d2d18 != 0x39)) {
          if (DAT_007d2d18 != 0x3a) {
            if ((&DAT_00811a94)[DAT_008488b0 * 0xac5] == 2) {
              RaiseInternalException
                        (-0x71,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                         0x9d0);
              thunk_FUN_0064a800(&g_anonShape_00683780_11EA4E23_00848A14);
            }
            else {
              RaiseInternalException
                        (-0x72,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                         0x9d1);
              thunk_FUN_0064a800(&g_anonShape_00683780_11EA4E23_00848A14);
            }
            goto switchD_006841b6_default;
          }
          if ((&DAT_00811a94)[DAT_008488b0 * 0xac5] == 2) {
            RaiseInternalException
                      (-0x71,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x938);
          }
          if ((&DAT_00811a94)[DAT_008488b0 * 0xac5] != 1) {
            RaiseInternalException
                      (-0x69,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x939);
          }
          if (g_anonShape_00683780_11EA4E23_00848A14->field_0004 < 1) {
            RaiseInternalException
                      (-0x69,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x93a);
          }
          iVar7 = DAT_008488b0 * 0x2b14;
          switch((&DAT_00811ae4)[DAT_008488b0 * 0xac5]) {
          case 2:
          case 0x17:
          case 0x2d:
          case 0x31:
          case 0x3e:
            iVar8 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
            if (((iVar8 != 5) && (iVar8 != 6)) && (iVar8 != 7)) {
              thunk_FUN_006802a0(-0x74,&CHAR_00h_00811aa4 + iVar7);
            }

            iVar10 = thunk_FUN_00683670();
            iVar7 = iVar10;
            if (iVar10 == 0) {
              RaiseInternalException
                        (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                         0x9a7);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              iVar7 = extraout_EAX;
            }
            uVar12 = (undefined2)((uint)iVar7 >> 0x10);
            if (PTR_008489cc == nullptr) {
              RaiseInternalException
                        (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                         0x9a8);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar12 = extraout_var;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_b0 = CONCAT22(uVar12,STField<undefined2>(iVar10,0x472));
            piVar21 = (int *)(iVar10 + 0x46e);

            thunk_FUN_006838b0(piVar21,'\x02',(byte *)(&DAT_00811aa0 + DAT_008488b0 * 0xac5),
                               STField<int>(iVar10,0x456));
            local_EAX_25691 = thunk_FUN_0064a910(g_anonShape_00683780_11EA4E23_00848A14,0);
            if ((g_anonShape_00683780_11EA4E23_00848A14->field_0004 == 1) &&
               (cVar2 = *local_EAX_25691, cVar2 != '\a')) {
              if ((cVar2 != '\x04') && (cVar2 != '\x01')) {
                thunk_FUN_006802a0(-0x74,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
              }

              thunk_FUN_006838b0(piVar21,'\x02',(byte *)(local_EAX_25691 + 1),
                                 STField<int>(iVar10,0x456));
            }
            else {

              thunk_FUN_00683780(piVar21,g_anonShape_00683780_11EA4E23_00848A14,
                                 STField<int>(iVar10,0x456));
            }
            local_1c = 0;
            switch((&DAT_00811a9c)[DAT_008488b0 * 0xac5]) {
            case 5:
              local_1c = 0;
              break;
            case 6:
              local_1c = 1;
              break;
            case 7:
              local_1c = 2;
              break;
            case 8:
              local_1c = 3;
            }

            thunk_FUN_006838b0(piVar21,'\x02',(byte *)&local_1c,STField<int>(iVar10,0x456));
            local_84 = 0xb;
            local_81 = 3;
            local_83 = *(undefined2 *)(&DAT_00811ae4 + DAT_008488b0 * 0xac5);

            thunk_FUN_0064a830(piVar21,(undefined4 *)&local_84);
            puVar4 = &local_b0;
            break;
          default:
            iVar8 = 0x9c8;
            iVar7 = -0x69;
            goto cf_error_exit_0068A22B;
          case 4:
            iVar8 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
            if ((((iVar8 == 5) || (iVar8 == 6)) || (iVar8 == 7)) || (iVar8 == 8)) {
              thunk_FUN_006802a0(-0x74,&CHAR_00h_00811aa4 + iVar7);
            }
            local_EAX_23799 = thunk_FUN_0064a910(g_anonShape_00683780_11EA4E23_00848A14,0);
            if ((g_anonShape_00683780_11EA4E23_00848A14->field_0004 != 1) ||
               (cVar2 = *local_EAX_23799, cVar2 == '\a')) {
              if (((&DAT_00811a9c)[DAT_008488b0 * 0xac5] != 0) &&
                 ((&DAT_00811a9c)[DAT_008488b0 * 0xac5] != 4)) {
                thunk_FUN_006802a0(-0x74,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
              }

              uVar5 = thunk_FUN_0067fdf0(g_anonShape_00683780_11EA4E23_00848A14,
                                         (byte *)(&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14));
              if ((int)uVar5 < 0) {
                RaiseInternalException
                          (uVar5,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp"
                           ,0x96e);
              }
              DAT_008488b0 = DAT_008488b0 + -2;
              g_anonShape_00683780_11EA4E23_00848A14 = nullptr;
              thunk_FUN_0064a800(&g_anonShape_00683780_11EA4E23_00848A14);
              goto switchD_006841b6_default;
            }
            switch(cVar2) {
            case '\x01':
            case '\x04':
              iVar7 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
              if (iVar7 == 0) {
                if (cVar2 == '\x01') {
                  iVar7 = *(int *)(local_EAX_23799 + 1);
                }
                else {

                  iVar7 = thunk_FUN_0067f4b0((int)*(short *)(local_EAX_23799 + 1));
                }

                iVar7 = thunk_FUN_0067f740(&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14,iVar7);
                if (iVar7 < 0) {
                  iVar8 = 0x953;
                  goto cf_error_exit_0068A22B;
                }
              }
              else if (iVar7 == 2) {
                if (cVar2 == '\x01') {
                  iVar7 = *(int *)(local_EAX_23799 + 1);
                }
                else {

                  iVar7 = thunk_FUN_0067f4b0((int)*(short *)(local_EAX_23799 + 1));
                }

                iVar7 = thunk_FUN_0067f740(&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14,iVar7);
                if (iVar7 < 0) {
                  iVar8 = 0x94c;
                  goto cf_error_exit_0068A22B;
                }
              }
              else {
                if (iVar7 != 3) {
                  thunk_FUN_006802a0(-0x74,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
                  DAT_008488b0 = DAT_008488b0 + -2;
                  thunk_FUN_0064a800(&g_anonShape_00683780_11EA4E23_00848A14);
                  goto switchD_006841b6_default;
                }
                if (cVar2 == '\x02') {
                  local_88 = *(float *)(local_EAX_23799 + 1);
                }
                else {
                  fVar22 = thunk_FUN_0067f820((int)*(short *)(local_EAX_23799 + 1));
                  local_88 = (float)fVar22;
                }

                iVar7 = thunk_FUN_0067fab0((byte *)(&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14),
                                           local_88);
                if (iVar7 < 0) {
                  iVar8 = 0x948;
                  goto cf_error_exit_0068A22B;
                }
              }
              break;
            case '\x02':
            case '\x05':
              if (((&DAT_00811a9c)[DAT_008488b0 * 0xac5] != 0) &&
                 ((&DAT_00811a9c)[DAT_008488b0 * 0xac5] != 3)) {
                thunk_FUN_006802a0(-0x74,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
              }
              if (*local_EAX_23799 == '\x02') {
                local_8c = *(float *)(local_EAX_23799 + 1);
              }
              else {
                fVar22 = thunk_FUN_0067f820((int)*(short *)(local_EAX_23799 + 1));
                local_8c = (float)fVar22;
              }

              iVar7 = thunk_FUN_0067fab0((byte *)(&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14),
                                         local_8c);
              if (iVar7 < 0) {
                iVar8 = 0x95a;
                goto cf_error_exit_0068A22B;
              }
              break;
            case '\x03':
            case '\x06':
              if (((&DAT_00811a9c)[DAT_008488b0 * 0xac5] != 0) &&
                 ((&DAT_00811a9c)[DAT_008488b0 * 0xac5] != 1)) {
                thunk_FUN_006802a0(-0x74,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
              }
              if (((&DAT_00811a9c)[DAT_008488b0 * 0xac5] == 0) && (*local_EAX_23799 == '\x03')) {

                iVar7 = thunk_FUN_0067f0f0(&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14,
                                           (int)*(short *)(local_EAX_23799 + 1));
                if (iVar7 == 0) {
                  iVar8 = 0x961;
                  iVar7 = -0x6b;
                  goto cf_error_exit_0068A22B;
                }
              }
              else {

                pcVar3 = STPointerBoundaryCast<char *>(thunk_FUN_0067ee40((int)*(short *)(local_EAX_23799 + 1)));
                if (pcVar3 == nullptr) {
                  RaiseInternalException
                            (-0x6b,g_overwriteContext_007ED77C,
                             "E:\\__titans\\ai\\ai_script.cpp",0x964);
                }

                iVar7 = thunk_FUN_0067f030(&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14,pcVar3,
                                           nullptr);
                if (iVar7 == 0) {
                  iVar8 = 0x965;
                  iVar7 = -2;
                  goto cf_error_exit_0068A22B;
                }
              }
              break;
            default:
              iVar8 = 0x969;
              iVar7 = -0x6b;
cf_error_exit_0068A22B:
              RaiseInternalException
                        (iVar7,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                         iVar8);
            }
            DAT_008488b0 = DAT_008488b0 + -2;
            thunk_FUN_0064a800(&g_anonShape_00683780_11EA4E23_00848A14);
            goto switchD_006841b6_default;
          case 5:
            iVar8 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
            if ((((iVar8 != 5) && (iVar8 != 6)) && (iVar8 != 7)) && (iVar8 != 8)) {
              thunk_FUN_006802a0(-0x74,&CHAR_00h_00811aa4 + iVar7);
            }
            /* ST_CALLSITE[00689DF7]: CALL 0x00401cd0; direct=00401CD0 thunk_FUN_00683670; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
            local_EAX_24967 = thunk_FUN_00683670();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar12 = extraout_var_02;
            if (local_EAX_24967 == 0) {
              RaiseInternalException
                        (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                         0x977);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar12 = extraout_var_03;
            }
            if (PTR_008489cc == nullptr) {
              RaiseInternalException
                        (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                         0x978);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar12 = extraout_var_04;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_d4 = CONCAT22(uVar12,STField<undefined2>(local_EAX_24967,0x472));
            piVar21 = (int *)(local_EAX_24967 + 0x46e);

            thunk_FUN_006838b0(piVar21,'\x02',(byte *)(&DAT_00811aa0 + DAT_008488b0 * 0xac5),
                               STField<int>(local_EAX_24967,0x456));
            local_EAX_25115 = thunk_FUN_0064a910(g_anonShape_00683780_11EA4E23_00848A14,0);
            if ((g_anonShape_00683780_11EA4E23_00848A14->field_0004 == 1) &&
               (local_5 = *local_EAX_25115, local_5 != '\a')) {
              iVar7 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
              if (4 < iVar7) {
                if (iVar7 < 8) {
                  if ((local_5 != '\x04') && (local_5 != '\x01')) {
                    thunk_FUN_006802a0(-0x74,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
                  }

                  thunk_FUN_006838b0(piVar21,'\x02',(byte *)(local_EAX_25115 + 1),
                                     STField<int>(local_EAX_24967,0x456));
                }
                else if (iVar7 == 8) {
                  if ((local_5 != '\x06') && (local_5 != '\x03')) {
                    thunk_FUN_006802a0(-0x74,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
                  }

                  thunk_FUN_006838b0(piVar21,'\x01',*(byte **)(local_EAX_25115 + 1),
                                     STField<int>(local_EAX_24967,0x456));
                }
              }
            }
            else {

              thunk_FUN_00683780(piVar21,g_anonShape_00683780_11EA4E23_00848A14,
                                 STField<int>(local_EAX_24967,0x456));
            }
            local_14 = 0;
            switch((&DAT_00811a9c)[DAT_008488b0 * 0xac5]) {
            case 5:
              local_14 = 0;
              break;
            case 6:
              local_14 = 1;
              break;
            case 7:
              local_14 = 2;
              break;
            case 8:
              local_14 = 3;
            }

            thunk_FUN_006838b0(piVar21,'\x02',(byte *)&local_14,STField<int>(local_EAX_24967,0x456));
            local_74 = 0xb;
            local_71 = 3;
            local_73 = *(undefined2 *)(&DAT_00811ae4 + DAT_008488b0 * 0xac5);

            thunk_FUN_0064a830(piVar21,(undefined4 *)&local_74);
            puVar4 = &local_d4;
          }

          Library::DKW::TBL::DArrayAppend(PTR_008489cc->field_000F,puVar4);
          DAT_008488b0 = DAT_008488b0 + -2;
          thunk_FUN_0064a800(&g_anonShape_00683780_11EA4E23_00848A14);
          goto switchD_006841b6_default;
        }
        if ((&DAT_00811a94)[DAT_008488b0 * 0xac5] != 2) {
          RaiseInternalException
                    (-0x69,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x906
                    );
        }
        if (0 < g_anonShape_00683780_11EA4E23_00848A14->field_0004) {
          local_EAX_26162 = thunk_FUN_0064a910(g_anonShape_00683780_11EA4E23_00848A14,0);
          iVar7 = DAT_008488b0;
          if ((g_anonShape_00683780_11EA4E23_00848A14->field_0004 == 1) &&
             (*local_EAX_26162 != '\a')) {
            switch(*local_EAX_26162) {
            case '\x01':
            case '\x04':
              (&DAT_008110b4)[(&DAT_008110b0)[DAT_008488b0 * 0xac5] + DAT_008488b0 * 0x2b14] = 2;
              (&DAT_008110b0)[iVar7 * 0xac5] = (&DAT_008110b0)[iVar7 * 0xac5] + 1;
              if (*local_EAX_26162 == '\x01') {
                iVar8 = *(int *)(local_EAX_26162 + 1);
                DAT_008488b0 = iVar7;
              }
              else {

                iVar8 = thunk_FUN_0067f4b0((int)*(short *)(local_EAX_26162 + 1));
              }
              *(int *)(&DAT_0080f16c +
                      (DAT_008488b0 * 0xac5 + (&DAT_0080f168)[DAT_008488b0 * 0xac5]) * 4) = iVar8;
              (&DAT_0080f168)[DAT_008488b0 * 0xac5] = (&DAT_0080f168)[DAT_008488b0 * 0xac5] + 1;
              break;
            case '\x02':
            case '\x05':
              (&DAT_008110b4)[(&DAT_008110b0)[DAT_008488b0 * 0xac5] + DAT_008488b0 * 0x2b14] = 3;
              (&DAT_008110b0)[iVar7 * 0xac5] = (&DAT_008110b0)[iVar7 * 0xac5] + 1;
              if (*local_EAX_26162 == '\x02') {
                fVar22 = (float10)*(float *)(local_EAX_26162 + 1);
                DAT_008488b0 = iVar7;
              }
              else {
                fVar22 = thunk_FUN_0067f820((int)*(short *)(local_EAX_26162 + 1));
              }
              *(float *)(&DAT_00810110 +
                        (DAT_008488b0 * 0xac5 + (&DAT_0081010c)[DAT_008488b0 * 0xac5]) * 4) =
                   (float)fVar22;
              (&DAT_0081010c)[DAT_008488b0 * 0xac5] = (&DAT_0081010c)[DAT_008488b0 * 0xac5] + 1;
              break;
            case '\x03':
            case '\x06':
              (&DAT_008110b4)[(&DAT_008110b0)[DAT_008488b0 * 0xac5] + DAT_008488b0 * 0x2b14] = 1;
              (&DAT_008110b0)[iVar7 * 0xac5] = (&DAT_008110b0)[iVar7 * 0xac5] + 1;

              iVar7 = thunk_FUN_0067ee40((int)*(short *)(local_EAX_26162 + 1));
              *(int *)(&DAT_0080efd8 +
                      (DAT_008488b0 * 0xac5 + (&DAT_0080efd4)[DAT_008488b0 * 0xac5]) * 4) = iVar7;
              (&DAT_0080efd4)[DAT_008488b0 * 0xac5] = (&DAT_0080efd4)[DAT_008488b0 * 0xac5] + 1;
              break;
            default:
              RaiseInternalException
                        (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                         0x923);
            }
          }
          else {
            local_EAX_26713 = thunk_FUN_0067fbd0();

            iVar7 = thunk_FUN_0067fd20(g_anonShape_00683780_11EA4E23_00848A14,local_EAX_26713);
            if (iVar7 < 0) {
              RaiseInternalException
                        (iVar7,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                         0x927);
            }
            g_anonShape_00683780_11EA4E23_00848A14 = nullptr;
            (&DAT_008110b4)[(&DAT_008110b0)[DAT_008488b0 * 0xac5] + DAT_008488b0 * 0x2b14] = 4;
            (&DAT_008110b0)[DAT_008488b0 * 0xac5] = (&DAT_008110b0)[DAT_008488b0 * 0xac5] + 1;
            *(int *)(&DAT_0080f16c +
                    (DAT_008488b0 * 0xac5 + (&DAT_0080f168)[DAT_008488b0 * 0xac5]) * 4) = iVar7;
            (&DAT_0080f168)[DAT_008488b0 * 0xac5] = (&DAT_0080f168)[DAT_008488b0 * 0xac5] + 1;
          }
        }
        DAT_008488b0 = DAT_008488b0 + -1;
        local_30 = 0;
        thunk_FUN_0064a800(&g_anonShape_00683780_11EA4E23_00848A14);
        goto switchD_006841b6_default;
      case 4:
        if (DAT_007d2d18 == 6) {
          DAT_008488b0 = DAT_008488b0 + 1;
          iVar7 = DAT_008488b0 * 0xac5;
          memset(&DAT_00811a90 + iVar7, 0, 0x2b14); /* compiler bulk-zero initialization */
          (&DAT_00811a90)[iVar7] = 0;
        }
        else if (DAT_007d2d18 != 0x1d) {
          RaiseInternalException
                    (-0x6c,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x658
                    );
        }
      default:
        goto switchD_006841b6_default;
      }
    }
    g_currentExceptionFrame = local_16c.previous;
    if (param_4 != nullptr) {
      memset(param_4, 0, 0x18); /* compiler bulk-zero initialization */
      *param_4 = iVar2;
      param_4[2] = DAT_00857554;
      Library::MSVCRT::FUN_0072e730(PTR_0085753c,nullptr,nullptr,nullptr,local_3c8);
      if (local_3c8[0] != 0) {
        lpFileName = (LPCSTR)PTR_0085753c;
      }
      if ((byte *)lpFileName != nullptr) {
        uVar5 = 0xffffffff;
        do {
          pbVar13 = (byte *)lpFileName;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pbVar13 = (byte *)(lpFileName + 1);
          bVar24 = *lpFileName;
          lpFileName = (LPCSTR)pbVar13;
        } while (bVar24 != 0);
        uVar5 = ~uVar5;
        pbVar13 = pbVar13 + -uVar5;
        pbVar18 = (byte *)&DAT_0084790c;
        memmove(pbVar18, pbVar13, uVar5); /* compiler REP MOVS byte copy */
      }
      param_4[1] = (int)&DAT_0084790c;
      Library::MSVCRT::_strncpy(&CHAR_00h_00847d0c,PTR_0085755c,0x3fe);
      param_4[3] = (int)&CHAR_00h_00847d0c;
      param_4[4] = (int)&DAT_008488b4;
      param_4[5] = DAT_00857544;
    }
    thunk_FUN_006484f0((int *)&g_allocationRecord_00648620_008489B4);
    thunk_FUN_006484f0((int *)&local_20);
    thunk_FUN_0067d160((int *)&g_allocationRecord_0067D3B0_008489B8);
    thunk_FUN_0067d160((int *)&local_28);
    thunk_FUN_0065d0f0((int *)&g_allocationRecord_0065CD10_008489BC);
    thunk_FUN_0065d0f0((int *)&local_c);
    thunk_FUN_00691540((int *)&DAT_008489c8);
    thunk_FUN_00691540((int *)&local_24);
    thunk_FUN_006686c0((int *)&g_allocationRecord_006684E0_008489C4);
    thunk_FUN_006686c0((int *)&local_2c);
    thunk_FUN_0065d1f0((int *)&PTR_008489cc);
    if (g_array_008489D4 != nullptr) {
      DArrayDestroy(g_array_008489D4);
      g_array_008489D4 = nullptr;
    }
    if (g_dArray_008489DC != nullptr) {
      FUN_006b5570(g_dArray_008489DC);
      g_dArray_008489DC = nullptr;
    }
    thunk_FUN_00680070();
    thunk_FUN_0064a800(&g_anonShape_00683780_11EA4E23_00848A14);

    local_EAX_27736 = thunk_FUN_00672f00();
    while (local_EAX_27736 != 0) {

      local_EAX_27736 = thunk_FUN_00672f00();
    }
    thunk_FUN_006807d0(&DAT_008489d0);
    if (param_3 != nullptr) {
      *param_3 = 0;
      return nullptr;
    }
  }
  else {
    g_currentExceptionFrame = local_1b0.previous;
    if (param_4 != nullptr) {
      memset(param_4, 0, 0x18); /* compiler bulk-zero initialization */
      *param_4 = local_EAX_119;
      param_4[2] = 0;
      if (lpFileName != (LPCSTR)0x0) {
        uVar5 = 0xffffffff;
        do {
          pcVar7 = lpFileName;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar7 = lpFileName + 1;
          cVar2 = *lpFileName;
          lpFileName = pcVar7;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        pcVar3 = pcVar7 + -uVar5;
        pcVar19 = (char *)&DAT_0084790c;
        memmove(pcVar19, pcVar3, uVar5); /* compiler REP MOVS byte copy */
        uVar6 = 0;
      }
      param_4[1] = (int)&DAT_0084790c;
      uVar5 = 0xffffffff;
      pcVar3 = &CHAR_00h_008016a0;
      do {
        pcVar19 = pcVar3;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar19 = pcVar3 + 1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar19;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5;
      pcVar3 = pcVar19 + -uVar5;
      pcVar19 = &CHAR_00h_00847d0c;
      memmove(pcVar19, pcVar3, uVar5); /* compiler REP MOVS byte copy */
      param_4[3] = (int)&CHAR_00h_00847d0c;
      param_4[4] = (int)&DAT_008488b4;
    }
  }
  return nullptr;
switchD_006841b6_caseD_2:
  if (((&DAT_00811a98)[DAT_008488b0 * 0xac5] == 0) && (DAT_007d2d18 != 0x29)) {
    local_EAX_4770 = thunk_FUN_00674af0(0x29);
    thunk_FUN_006802a0(-0x70,local_EAX_4770);
  }
  iVar7 = DAT_008488b0;
  (&DAT_00811a98)[DAT_008488b0 * 0xac5] = (&DAT_00811a98)[DAT_008488b0 * 0xac5] + 1;
  if ((DAT_007d2d18 == 0x10) || (DAT_007d2d18 == 0x29)) {
    iVar8 = DAT_008488b0 + 1;
    puVar4 = &DAT_00811a90 + iVar8 * 0xac5;
    DAT_008488b0 = iVar8;
    for (iVar7 = 0xac5; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    (&DAT_00811a90)[iVar8 * 0xac5] = 3;
    (&DAT_00811a94)[iVar8 * 0xac5] = 2;

    pcVar3 = thunk_FUN_0067ec60((&DAT_008110b0)[iVar8 * 0xac5]);
    uVar5 = 0xffffffff;
    do {
      pcVar19 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar19 = pcVar3 + 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar19;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5;
    pcVar3 = pcVar19 + -uVar5;
    pcVar19 = &CHAR_00h_00811aa4 + iVar8 * 0x2b14;
    memmove(pcVar19, pcVar3, uVar5); /* compiler REP MOVS byte copy */
    (&DAT_00811a9c)[iVar8 * 0xac5] = 0;
    (&DAT_00811ae4)[iVar8 * 0xac5] = 4;
    goto switchD_006841b6_default;
  }
  if (DAT_007d2d18 != 0x39) {
    RaiseInternalException
              (-0x71,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8fd);
    goto switchD_006841b6_default;
  }
  iVar8 = (&DAT_00811a94)[iVar7 * 0xac5];
  if (iVar8 < 0x568) {
    if (iVar8 == 0x567) {

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8a0);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8a0;
        goto cf_error_exit_006877A0;
      }
      goto cf_common_join_006877B6;
    }
    if (0x4b3 < iVar8) {
      switch(iVar8) {
      case 0x4b4:
        if (g_dArray_008489D8 == nullptr) {
          RaiseInternalException
                    (-0x8d,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x83f
                    );
        }
        pAVar15 = (AllocationRecord_0065CD10 *)g_dArray_008489D8;
        if (DAT_008489d0 == nullptr) {
          g_dArray_008489D8 = nullptr;
          if (param_3 != nullptr) {
            *param_3 = 10;
          }
          goto cf_common_join_0068A687;
        }
        RaiseInternalException
                  (-0x8d,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x841);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x4b5:

        iVar7 = thunk_FUN_00681e60();
        if (iVar7 == 0) {
          thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_dArray_008489D8 == nullptr) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x84d
                    );
        }
        pcVar3 = local_6ec;
        for (iVar7 = 0x88; iVar7 != 0; iVar7 = iVar7 + -1) {
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
          pcVar3 = pcVar3 + 4;
        }
        Library::MSVCRT::_strncpy(local_6ec,(&PTR_00811aec)[DAT_008488b0 * 0xac5],0x103);
        Library::MSVCRT::_strncpy(local_5d8,(&PTR_00811af0)[DAT_008488b0 * 0xac5],0x103);
        local_5e8 = (&DAT_00811c80)[DAT_008488b0 * 0xac5];
        local_5e4 = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        local_5e0 = (&DAT_00811c88)[DAT_008488b0 * 0xac5];
        local_5dc = (&DAT_00811c8c)[DAT_008488b0 * 0xac5];
        local_4d4 = (&DAT_00811c90)[DAT_008488b0 * 0xac5];

        Library::DKW::TBL::DArrayAppend(g_dArray_008489D8,local_6ec);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      default:
        goto switchD_00685456_default;
      case 0x514:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x875
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x875;
          goto cf_error_exit_006876AB;
        }
        goto LAB_006876c1;
      case 0x515:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x876
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x876;
          goto cf_error_exit_006876FE;
        }
        goto LAB_00687714;
      case 0x516:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x877
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x877;
cf_error_exit_00687750:
          RaiseInternalException
                    (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",iVar7
                    );
        }
        break;
      case 0x517:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x878
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x878;
cf_error_exit_006877A0:
          RaiseInternalException
                    (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",iVar7
                    );
        }
        goto cf_common_join_006877B6;
      case 0x518:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x879
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x879;
cf_error_exit_006877EF:
          RaiseInternalException
                    (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",iVar7
                    );
        }
        goto cf_common_join_00687805;
      case 0x519:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x87a
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x87a;
cf_error_exit_0068783F:
          RaiseInternalException
                    (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",iVar7
                    );
        }
        goto cf_common_join_00687855;
      case 0x51a:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x87b
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x87b;
cf_error_exit_0068788E:
          RaiseInternalException
                    (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",iVar7
                    );
        }
        goto cf_common_join_006878A4;
      case 0x51b:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x87c
                    );
        }
        if (PTR_008489cc == nullptr) {
          RaiseInternalException
                    (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x87c
                    );
        }

        iVar7 = thunk_FUN_00682050(1,1);
        goto joined_r0x00689693;
      case 0x528:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x87e
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x87e;
          goto cf_error_exit_00687750;
        }
        break;
      case 0x529:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x87f
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x87f;
          goto cf_error_exit_0068783F;
        }
        goto cf_common_join_00687855;
      case 0x52a:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x880
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x880;
          goto cf_error_exit_00687750;
        }
        break;
      case 0x532:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x882
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x882;
cf_error_exit_006879EA:
          RaiseInternalException
                    (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",iVar7
                    );
        }
        goto cf_common_join_00687A00;
      case 0x533:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x883
                    );
        }
        if (PTR_008489cc == nullptr) {
          RaiseInternalException
                    (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x883
                    );
        }

        iVar7 = thunk_FUN_00682050(4,1);
        goto cf_common_join_006895D5;
      case 0x534:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x884
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x884;
cf_error_exit_00687A9D:
          RaiseInternalException
                    (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",iVar7
                    );
        }
        goto LAB_00687ab3;
      case 0x535:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x885
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x885;
cf_error_exit_00687AEC:
          RaiseInternalException
                    (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",iVar7
                    );
        }
        goto LAB_00687b02;
      case 0x536:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x886
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x886;
          goto cf_error_exit_006879EA;
        }
        goto cf_common_join_00687A00;
      case 0x537:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x887
                    );
        }
        if (PTR_008489cc == nullptr) {
          RaiseInternalException
                    (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x887
                    );
        }

        iVar7 = thunk_FUN_00682050(2,1);
        goto cf_common_join_006895D5;
      case 0x546:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x889
                    );
        }
        if (PTR_008489cc == nullptr) {
          RaiseInternalException
                    (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x889
                    );
        }
        iVar7 = 7;
        goto cf_common_join_0068956E;
      case 0x547:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x88a
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x88a;
          goto cf_error_exit_0068788E;
        }
        goto cf_common_join_006878A4;
      case 0x548:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x88b
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x88b;
          goto cf_error_exit_0068783F;
        }
        goto cf_common_join_00687855;
      case 0x549:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x88c
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x88c;
          goto cf_error_exit_006877EF;
        }
        goto cf_common_join_00687805;
      case 0x54a:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x88d
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x88d;
          goto cf_error_exit_006877A0;
        }
        goto cf_common_join_006877B6;
      case 0x54b:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x88e
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x88e;
          goto cf_error_exit_0068788E;
        }
        goto cf_common_join_006878A4;
      case 0x54c:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x88f
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x88f;
          goto cf_error_exit_0068783F;
        }
        goto cf_common_join_00687855;
      case 0x54d:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x890
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x890;
          goto cf_error_exit_00687750;
        }
        break;
      case 0x54e:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x891
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x891;
          goto cf_error_exit_00687A9D;
        }
LAB_00687ab3:
        iVar7 = 5;
        goto cf_common_join_0068956E;
      case 0x55a:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x893
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x893;
          goto cf_error_exit_00687750;
        }
        break;
      case 0x55b:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x894
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x894;
          goto cf_error_exit_006879EA;
        }
cf_common_join_00687A00:

        iVar7 = thunk_FUN_00682050(2,1);
        goto joined_r0x00689693;
      case 0x55c:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x895
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x895;
          goto cf_error_exit_00687750;
        }
        break;
      case 0x55d:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x896
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x896;
LAB_00687f2d:
          RaiseInternalException
                    (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",iVar7
                    );
        }
        goto LAB_00687f43;
      case 0x55e:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x897
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x897;
          goto cf_error_exit_00687AEC;
        }
        goto LAB_00687b02;
      case 0x55f:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x898
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x898;
          goto LAB_00687f2d;
        }
LAB_00687f43:

        iVar7 = thunk_FUN_00682050(3,1);
        goto joined_r0x00689693;
      case 0x560:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x899
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x899;
          goto cf_error_exit_00687750;
        }
        break;
      case 0x561:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x89a
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x89a;
          goto cf_error_exit_0068783F;
        }
        goto cf_common_join_00687855;
      case 0x562:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x89b
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x89b;
          goto cf_error_exit_00687AEC;
        }
LAB_00687b02:

        iVar7 = thunk_FUN_00682050(3,1);
        goto cf_common_join_006895D5;
      case 0x563:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x89c
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x89c;
          goto cf_error_exit_006877A0;
        }
        goto cf_common_join_006877B6;
      case 0x564:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x89d
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x89d;
          goto cf_error_exit_0068788E;
        }
cf_common_join_006878A4:
        iVar7 = 2;
        goto cf_common_join_006895CD;
      case 0x565:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x89e
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x89e;
          goto cf_error_exit_006877A0;
        }
cf_common_join_006877B6:
        iVar7 = 3;
        goto cf_common_join_0068956E;
      case 0x566:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x89f
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x89f;
          goto cf_error_exit_00687750;
        }
      }
cf_common_join_00687766:
      iVar7 = 3;
cf_common_join_006895CD:

      iVar7 = thunk_FUN_00681f70(iVar7);
cf_common_join_006895D5:
      if (iVar7 == 0) {
        thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
      }
      iVar7 = STField<int>(local_EAX_14857,0x456);
      uVar23 = (ushort)(&DAT_00811a94)[DAT_008488b0 * 0xac5];
      goto LAB_006896f6;
    }
    if (iVar8 == 0x4b3) {
      if (g_dArray_008489D8 != nullptr) {
        RaiseInternalException
                  (-0x8c,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x83a);
      }
      g_dArray_008489D8 = Library::DKW::TBL::DArrayCreate(nullptr,5,0x220,5);
      DAT_008488b0 = DAT_008488b0 + -1;
      goto switchD_006841b6_default;
    }
    if (iVar8 < 0x425) {
      if (iVar8 == 0x424) {

        iVar7 = thunk_FUN_00681070();
        if (iVar7 == 0) {
          thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (((g_allocationRecord_006684E0_008489C4 != nullptr) ||
            (g_allocationRecord_0065CD10_008489BC != nullptr)) ||
           (g_allocationRecord_00648620_008489B4 != nullptr)) {
          RaiseInternalException
                    (-0x8c,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x72e
                    );
        }
        g_allocationRecord_006684E0_008489C4 =
             thunk_FUN_00668180((&PTR_00811aec)[DAT_008488b0 * 0xac5],
                                *(ushort *)(&DAT_00811c80 + DAT_008488b0 * 0xac5),
                                *(ushort *)(&DAT_00811c84 + DAT_008488b0 * 0xac5),
                                *(ushort *)(&DAT_00811c88 + DAT_008488b0 * 0xac5),
                                *(byte *)(&DAT_00811c8c + DAT_008488b0 * 0xac5));
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      }
      if (iVar8 < 0x3f3) {
        if (iVar8 == 0x3f2) {

          iVar7 = thunk_FUN_00681ef0();
          if (iVar7 == 0) {
            thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
          }
          if (g_dArray_008489DC != nullptr) {
            RaiseInternalException
                      (-0x8c,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x85b);
          }
          g_dArray_008489DC = Library::DKW::TBL::SArrayCreate(nullptr,5,5);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        }
        if (iVar8 < 0x3ea) {
          if (iVar8 == 0x3e9) {

            iVar7 = thunk_FUN_00680c20();
            if (iVar7 == 0) {
              thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
            }
            if (DAT_008489d0 != nullptr) {
              thunk_FUN_006807d0(&DAT_008489d0);
            }

            DAT_008489d0 = thunk_FUN_00680650((byte *)(&PTR_00811aec)[DAT_008488b0 * 0xac5],
                                              (&DAT_00811c80)[DAT_008488b0 * 0xac5]);
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          }
          if (0x42 < iVar8) {
            if (iVar8 == 0x3b6) {
              if ((iVar7 < 1) || ((int)(&DAT_00811a78)[iVar7 * 0xac5] < 1)) {
                RaiseInternalException
                          (-0x6e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp"
                           ,0x66c);
              }

              iVar7 = thunk_FUN_00680b00();
              if (iVar7 == 0) {
                thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
              }
              iVar8 = DAT_008488b0;
              DAT_007d3fa4 = 1;
              iVar7 = DAT_008488b0 * 0x2b14;
              *(undefined4 *)(&DAT_008118e4 + (&DAT_00811a78)[DAT_008488b0 * 0xac5] * 8 + iVar7) =
                   (&DAT_00811c80)[DAT_008488b0 * 0xac5];
              iVar7 = iVar7 + (&DAT_00811a78)[iVar8 * 0xac5] * 8;
              pvVar14 = *(void **)(&DAT_008118e0 + iVar7);
              if (((pvVar14 == nullptr) && (*(int *)(&DAT_008118e4 + iVar7) == 0)) ||
                 ((pvVar14 == (void *)0x1 && (*(int *)(&DAT_008118e4 + iVar7) != 0)))) {
                thunk_FUN_00672ab0(pvVar14,1);
                thunk_FUN_00672af0(this_02,1);
                DAT_008488b0 = DAT_008488b0 + -1;
              }
              else {
                thunk_FUN_00672ab0(pvVar14,0);
                thunk_FUN_00672af0(this_03,0);
                DAT_008488b0 = DAT_008488b0 + -1;
              }
            }
            else {
              if (iVar8 != 1000) goto switchD_00685456_default;

              iVar7 = thunk_FUN_00680c20();
              if (iVar7 == 0) {
                thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
              }
              if (DAT_008489d0 != nullptr) {
                thunk_FUN_006807d0(&DAT_008489d0);
              }

              DAT_008489d0 = thunk_FUN_00680590((byte *)(&PTR_00811aec)[DAT_008488b0 * 0xac5]);
              DAT_008488b0 = DAT_008488b0 + -1;
            }
            goto switchD_006841b6_default;
          }
          if ((iVar8 == 0x42) || (iVar8 == 0x23)) {
            /* ST_CALLSITE[0068508E]: CALL 0x00401cd0; direct=00401CD0 thunk_FUN_00683670; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
            local_EAX_5150 = thunk_FUN_00683670();
            if (local_EAX_5150 == 0) {
              RaiseInternalException
                        (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                         0x6ae);
            }
            if (PTR_008489cc == nullptr) {
              RaiseInternalException
                        (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                         0x6af);
            }

            iVar7 = thunk_FUN_00680bd0();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar12 = extraout_var_00;
            if (iVar7 == 0) {
              thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar12 = extraout_var_01;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_c4 = CONCAT22(uVar12,STField<undefined2>(local_EAX_5150,0x472));
            piVar21 = (int *)(local_EAX_5150 + 0x46e);
            iVar7 = STField<int>(local_EAX_5150,0x456);
            if ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14] == '\x02') {

              thunk_FUN_006838b0(piVar21,'\x02',(byte *)(&DAT_00811c80 + DAT_008488b0 * 0xac5),iVar7
                                );
            }
            else {
              local_EAX_5366 = thunk_FUN_0067fca0((&DAT_00811c80)[DAT_008488b0 * 0xac5]);

              thunk_FUN_00683780(piVar21,local_EAX_5366,iVar7);
            }
            local_cc = PTR_008489cc->field_000F->count + 1;

            local_EAX_5419 =
                 thunk_FUN_006838b0(piVar21,'\x02',(byte *)&local_cc,
                                    STField<int>(local_EAX_5150,0x456));
            iVar7 = DAT_008488b0;
            local_54 = 0xb;
            local_51 = 2;
            (&DAT_00814590)[DAT_008488b0 * 0xac5] = local_EAX_5419;
            local_53 = *(undefined2 *)(&DAT_00811a94 + iVar7 * 0xac5);

            thunk_FUN_0064a830(piVar21,(undefined4 *)&local_54);
            iVar7 = DAT_008488b0;

            local_EAX_5537 = Library::DKW::TBL::DArrayAppend(PTR_008489cc->field_000F,&local_c4);
            (&DAT_00814594)[iVar7 * 0xac5] = local_EAX_5537;
            (&DAT_00811a90)[iVar7 * 0xac5] = 4;
            goto switchD_006841b6_default;
          }
          if (iVar8 == 0x35) {

            local_EAX_5008 = thunk_FUN_00681f10();
            if (local_EAX_5008 == 0) {
              thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
            }
            if (g_dArray_008489DC == nullptr) {
              RaiseInternalException
                        (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                         0x86f);
            }

            Library::DKW::TBL::FUN_006b5aa0(g_dArray_008489DC,(&PTR_00811aec)[DAT_008488b0 * 0xac5]);
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          }
        }
        else {
          switch(iVar8) {
          case 0x3ea:

            iVar7 = thunk_FUN_00680c20();
            if (iVar7 == 0) {
              thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
            }
            if (DAT_008489d0 != nullptr) {
              thunk_FUN_006807d0(&DAT_008489d0);
            }

            DAT_008489d0 = thunk_FUN_00680710((byte *)(&PTR_00811aec)[DAT_008488b0 * 0xac5],
                                              (&DAT_00811c80)[DAT_008488b0 * 0xac5]);
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          case 0x3eb:
            if (DAT_008489d0 != nullptr) {
              thunk_FUN_006807d0(&DAT_008489d0);
              DAT_008488b0 = DAT_008488b0 + -1;
              goto switchD_006841b6_default;
            }
            break;
          case 0x3ec:

            local_EAX_6442 = thunk_FUN_00680d00();
            if (local_EAX_6442 == 0) {
              thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
            }
            thunk_FUN_00680550(*(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5));
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          case 0x3ed:

            iVar7 = thunk_FUN_00680c70();
            if (iVar7 == 0) {
              thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
            }
            thunk_FUN_00680340((&PTR_00811aec)[DAT_008488b0 * 0xac5],
                               (&DAT_00811c80)[DAT_008488b0 * 0xac5],
                               (&DAT_00811c84)[DAT_008488b0 * 0xac5],
                               (&DAT_00811c88)[DAT_008488b0 * 0xac5]);
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          }
        }
      }
      else {
        switch(iVar8) {
        case 0x3f3:
          if (g_dArray_008489DC == nullptr) {
            RaiseInternalException
                      (-0x8d,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x860);
          }
          pAVar15 = (AllocationRecord_0065CD10 *)g_dArray_008489DC;
          if (DAT_008489d0 == nullptr) {
            g_dArray_008489DC = nullptr;
            if (param_3 != nullptr) {
              *param_3 = 9;
            }
            goto cf_common_join_0068A687;
          }

          thunk_FUN_006809f0(&g_dArray_008489DC->flags);
          if (g_dArray_008489DC != nullptr) {
            FUN_006b5570(g_dArray_008489DC);
            g_dArray_008489DC = nullptr;
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          }
          break;
        case 0x3fc:

          iVar7 = thunk_FUN_00680fa0();
          if (iVar7 == 0) {
            thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
          }
          if ((((g_allocationRecord_0067D3B0_008489B8 != nullptr) ||
               (g_allocationRecord_00648620_008489B4 != nullptr)) ||
              (g_allocationRecord_006684E0_008489C4 != nullptr)) ||
             ((DAT_008489c8 != nullptr ||
              (g_allocationRecord_0065CD10_008489BC != nullptr)))) {
            RaiseInternalException
                      (-0x8c,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x74c);
          }
          g_allocationRecord_00648620_008489B4 =
               thunk_FUN_00648400((&PTR_00811aec)[DAT_008488b0 * 0xac5],
                                  (&DAT_00811c80)[DAT_008488b0 * 0xac5]);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x3fd:
          if ((g_allocationRecord_00648620_008489B4 == nullptr) ||
             (DAT_008489c0 == 1)) {
            RaiseInternalException
                      (-0x8d,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x751);
          }
          pAVar15 = (AllocationRecord_0065CD10 *)g_allocationRecord_00648620_008489B4;
          if (DAT_008489d0 == nullptr) {
            g_allocationRecord_00648620_008489B4 = nullptr;
            if (param_3 != nullptr) {
              *param_3 = 4;
            }
            goto cf_common_join_0068A687;
          }
          /* ST_CALLSITE[00685C9B]: CALL 0x00401ebf; direct=00401EBF EventDataPack; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/undefined4; source view only; no Ghidra override */
          local_c = EventDataPack(*(AllocationRecord_0065CD10 **)
                                   &g_allocationRecord_00648620_008489B4->field_0x4e,&local_18);
          /* ST_CALLSITE[00685CB2]: CALL 0x00405a24; direct=00405A24 BossDataPack */
          local_20 = BossDataPack(g_allocationRecord_00648620_008489B4,(undefined4 *)local_c,
                                  local_18,&local_10);
          thunk_FUN_0065d0f0((int *)&local_c);
          thunk_FUN_006484f0((int *)&g_allocationRecord_00648620_008489B4);
          thunk_FUN_006809b0((byte *)local_20,local_10);
          thunk_FUN_006484f0((int *)&local_20);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x406:

          iVar7 = thunk_FUN_00680d40();
          if (iVar7 == 0) {
            thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
          }
          if ((((g_allocationRecord_0067D3B0_008489B8 != nullptr) ||
               (g_allocationRecord_00648620_008489B4 != nullptr)) ||
              (g_allocationRecord_006684E0_008489C4 != nullptr)) ||
             ((DAT_008489c8 != nullptr ||
              (g_allocationRecord_0065CD10_008489BC != nullptr)))) {
            RaiseInternalException
                      (-0x8c,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x6e5);
          }
          g_allocationRecord_0067D3B0_008489B8 =
               thunk_FUN_0067cf30((&PTR_00811aec)[DAT_008488b0 * 0xac5],
                                  *(undefined2 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5),
                                  (&PTR_00811af0)[DAT_008488b0 * 0xac5],
                                  (&DAT_00811c84)[DAT_008488b0 * 0xac5]);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x407:
          if ((g_allocationRecord_0067D3B0_008489B8 == nullptr) ||
             (DAT_008489c0 == 1)) {
            RaiseInternalException
                      (-0x8d,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x6ea);
          }
          pAVar15 = (AllocationRecord_0065CD10 *)g_allocationRecord_0067D3B0_008489B8;
          if (DAT_008489d0 == nullptr) {
            g_allocationRecord_0067D3B0_008489B8 = nullptr;
            if (param_3 != nullptr) {
              *param_3 = 3;
            }
            goto cf_common_join_0068A687;
          }
          /* ST_CALLSITE[006857AD]: CALL 0x00401ebf; direct=00401EBF EventDataPack; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/undefined4; source view only; no Ghidra override */
          local_c = EventDataPack(*(AllocationRecord_0065CD10 **)
                                   &g_allocationRecord_0067D3B0_008489B8->field_0x106,&local_18);
          /* ST_CALLSITE[006857C4]: CALL 0x00405204; direct=00405204 PlrDataPack */
          local_28 = PlrDataPack(g_allocationRecord_0067D3B0_008489B8,(undefined4 *)local_c,local_18
                                 ,&local_10);
          thunk_FUN_0065d0f0((int *)&local_c);
          thunk_FUN_0067d160((int *)&g_allocationRecord_0067D3B0_008489B8);
          thunk_FUN_006809b0((byte *)local_28,local_10);
          thunk_FUN_0067d160((int *)&local_28);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x408:
          if (g_allocationRecord_0067D3B0_008489B8 == nullptr) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x6fc);
          }

          iVar7 = thunk_FUN_00680e00();
          if (iVar7 == 0) {
            thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
          }
          g_allocationRecord_0067D3B0_008489B8->field_0x71 =
               *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
          *(undefined4 *)&g_allocationRecord_0067D3B0_008489B8->field_0x6d =
               (&DAT_00811c84)[DAT_008488b0 * 0xac5];
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x409:
          if (g_allocationRecord_0067D3B0_008489B8 == nullptr) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x703);
          }

          local_EAX_7282 = thunk_FUN_00680e50();
          if (local_EAX_7282 == 0) {
            thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
          }
          g_allocationRecord_0067D3B0_008489B8->field_0xa3 =
               *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
          *(undefined2 *)&g_allocationRecord_0067D3B0_008489B8->field_0xa4 =
               *(undefined2 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5);
          *(undefined2 *)&g_allocationRecord_0067D3B0_008489B8->field_0xa6 =
               *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
          *(undefined2 *)&g_allocationRecord_0067D3B0_008489B8->field_0xa8 =
               *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5);
          *(undefined4 *)&g_allocationRecord_0067D3B0_008489B8->field_0xaa =
               (&DAT_00811c90)[DAT_008488b0 * 0xac5];
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x41a:

          iVar7 = thunk_FUN_00680ee0();
          if (iVar7 == 0) {
            thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
          }
          if (((DAT_008489c8 != nullptr) ||
              (g_allocationRecord_0065CD10_008489BC != nullptr)) ||
             ((g_allocationRecord_00648620_008489B4 != nullptr ||
              (g_allocationRecord_006684E0_008489C4 != nullptr)))) {
            RaiseInternalException
                      (-0x8c,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x70e);
          }
          DAT_008489c8 = STPointerBoundaryCast<AllocationRecord_0065CD10 *>(thunk_FUN_00690e90((&PTR_00811aec)[DAT_008488b0 * 0xac5],
                                            *(undefined2 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5),
                                            *(undefined2 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5)));
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x41b:
          if (DAT_008489c8 == nullptr) {
            RaiseInternalException
                      (-0x8d,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x713);
          }
          pAVar15 = DAT_008489c8;
          if (g_allocationRecord_0067D3B0_008489B8 == nullptr) {
            if (DAT_008489d0 == nullptr) {
              DAT_008489c8 = nullptr;
              if (param_3 != nullptr) {
                *param_3 = 2;
              }
              goto cf_common_join_0068A687;
            }
            /* ST_CALLSITE[00685B5F]: CALL 0x0040518c; direct=0040518C TactDataPack */
            local_24 = TactDataPack((undefined4 *)DAT_008489c8,&local_10);
            thunk_FUN_00691540((int *)&DAT_008489c8);
            thunk_FUN_006809b0(local_24,local_10);
            thunk_FUN_00691540((int *)&local_24);
            DAT_008488b0 = DAT_008488b0 + -1;
          }
          else {
            local_e4 = DAT_008489c8;
            local_e0 = 0;
            local_dc = 0;
            local_d8 = *(uint *)&DAT_008489c8->field_0x14;

            Library::DKW::TBL::DArrayAppend
                      (g_allocationRecord_0067D3B0_008489B8->field_00C2,&local_e4);
            DAT_008489c8 = nullptr;
            DAT_008488b0 = DAT_008488b0 + -1;
          }
          goto switchD_006841b6_default;
        }
      }
    }
    else {
      switch(iVar8) {
      case 0x425:
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          RaiseInternalException
                    (-0x8d,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x733
                    );
        }
        pAVar15 = (AllocationRecord_0065CD10 *)g_allocationRecord_006684E0_008489C4;
        if (DAT_008489c8 == nullptr) {
          if (DAT_008489d0 == nullptr) {
            g_allocationRecord_006684E0_008489C4 = nullptr;
            if (param_3 != nullptr) {
              *param_3 = 1;
            }
            goto cf_common_join_0068A687;
          }
          /* ST_CALLSITE[0068608A]: CALL 0x004014c4; direct=004014C4 FltDataPack */
          local_2c = FltDataPack(g_allocationRecord_006684E0_008489C4,&local_10);
          thunk_FUN_006686c0((int *)&g_allocationRecord_006684E0_008489C4);
          thunk_FUN_006809b0((byte *)local_2c,local_10);
          thunk_FUN_006686c0((int *)&local_2c);
          DAT_008488b0 = DAT_008488b0 + -1;
        }
        else {
          local_ac = 0;
          if (g_allocationRecord_006684E0_008489C4 == nullptr) {
            local_a8 = nullptr;
          }
          else {
            local_a8 = (undefined1 *)((int)&g_allocationRecord_006684E0_008489C4[-1].field_023F + 1);
          }

          Library::DKW::TBL::DArrayAppend(*(DArrayTy **)&DAT_008489c8->field_0x85,&local_ac);
          g_allocationRecord_006684E0_008489C4 = nullptr;
          DAT_008488b0 = DAT_008488b0 + -1;
        }
        goto switchD_006841b6_default;
      case 0x426:

        iVar7 = thunk_FUN_00681140();
        if (iVar7 == 0) {
          thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x78d
                    );
        }
        memset(local_128, 0, 0x2c); /* compiler bulk-zero initialization */
        local_128[0] = (&DAT_00811c80)[DAT_008488b0 * 0xac5];
        local_128[1] = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        local_128[2] = (&DAT_00811c88)[DAT_008488b0 * 0xac5];
        local_11c = *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5);
        local_11a = *(undefined2 *)(&DAT_00811c90 + DAT_008488b0 * 0xac5);
        local_118 = (&DAT_00811c94)[DAT_008488b0 * 0x158a];
        local_116 = (&DAT_00811c98)[DAT_008488b0 * 0x158a];
        local_114 = (&DAT_00811c9c)[DAT_008488b0 * 0x2b14];
        Library::MSVCRT::_strncpy(local_113,(&PTR_00811aec)[DAT_008488b0 * 0xac5],0xe);

        Library::DKW::TBL::DArrayAppend
                  ((DArrayTy *)g_allocationRecord_006684E0_008489C4->field_01EB,local_128);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x427:

        iVar7 = thunk_FUN_00681280();
        if (iVar7 == 0) {
          thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x79d
                    );
        }
        g_allocationRecord_006684E0_008489C4->field_00DF =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x428:

        iVar7 = thunk_FUN_00681400();
        if (iVar7 == 0) {
          thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x7b1
                    );
        }
        g_allocationRecord_006684E0_008489C4->field_00F5 =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_00F6 = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        g_allocationRecord_006684E0_008489C4->field_00FA =
             (&DAT_00811c88)[DAT_008488b0 * 0xac5] * 0x19;
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x429:

        iVar7 = thunk_FUN_006812d0();
        if (iVar7 == 0) {
          thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x7a3
                    );
        }
        g_allocationRecord_006684E0_008489C4->field_0xe0 =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_00E1 =
             *(undefined2 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_00E3 =
             *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_00E5 =
             *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_00F1 = (&DAT_00811c90)[DAT_008488b0 * 0xac5];
        g_allocationRecord_006684E0_008489C4->field_00E7 =
             *(int *)(&DAT_00811c94 + DAT_008488b0 * 0x158a) * 0x19;
        g_allocationRecord_006684E0_008489C4->field_00EB = (&DAT_00811c98)[DAT_008488b0 * 0x158a];
        g_allocationRecord_006684E0_008489C4->field_00ED =
             *(undefined2 *)(&DAT_00811c9c + DAT_008488b0 * 0x2b14);
        g_allocationRecord_006684E0_008489C4->field_00EF = (&DAT_00811ca0)[DAT_008488b0 * 0x158a];
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x42a:

        iVar7 = thunk_FUN_006814a0();
        if (iVar7 == 0) {
          thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x7b9
                    );
        }
        g_allocationRecord_006684E0_008489C4->field_0102 =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_0109 = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        g_allocationRecord_006684E0_008489C4->field_0103 =
             (&DAT_00811c88)[DAT_008488b0 * 0xac5] * 0x19;
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x42b:

        iVar7 = thunk_FUN_00681540();
        if (iVar7 == 0) {
          thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x7c1
                    );
        }
        local_9c = *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_a0 = CONCAT22(*(undefined2 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5),
                            *(undefined2 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5));
        local_90 = (&DAT_00811c8c)[DAT_008488b0 * 0xac5];
        uStack_9a = (&DAT_00811c90)[DAT_008488b0 * 0xac5] * 0x19;
        uStack_96 = (&DAT_00811c94)[DAT_008488b0 * 0x158a];
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_94 = CONCAT22(*(undefined2 *)(&DAT_00811c9c + DAT_008488b0 * 0x2b14),
                            (&DAT_00811c98)[DAT_008488b0 * 0x158a]);

        Library::DKW::TBL::DArrayAppend
                  ((DArrayTy *)g_allocationRecord_006684E0_008489C4->field_0203,&local_a0);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x42c:

        iVar7 = thunk_FUN_00681670();
        if (iVar7 == 0) {
          thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",2000);
        }
        g_allocationRecord_006684E0_008489C4->field_0119 =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_011A = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        g_allocationRecord_006684E0_008489C4->field_011E =
             *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        *(undefined2 *)&g_allocationRecord_006684E0_008489C4->field_0x120 =
             *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_0126 = (&DAT_00811c90)[DAT_008488b0 * 0xac5];
        g_allocationRecord_006684E0_008489C4->field_0122 =
             *(int *)(&DAT_00811c94 + DAT_008488b0 * 0x158a) * 0x19;
        g_allocationRecord_006684E0_008489C4->field_012A =
             *(int *)(&DAT_00811c98 + DAT_008488b0 * 0x158a) * 0x19;
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x42d:

        iVar7 = thunk_FUN_006818b0();
        if (iVar7 == 0) {
          thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x7e7
                    );
        }
        g_allocationRecord_006684E0_008489C4->field_0143 =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        *(undefined4 *)&g_allocationRecord_006684E0_008489C4->field_0x144 =
             (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        *(undefined2 *)&g_allocationRecord_006684E0_008489C4->field_0x148 =
             *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_014A =
             *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5);
        *(int *)&g_allocationRecord_006684E0_008489C4->field_0x14c =
             (&DAT_00811c90)[DAT_008488b0 * 0xac5] * 0x19;
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x42e:

        iVar7 = thunk_FUN_006819a0();
        if (iVar7 == 0) {
          thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x7f1
                    );
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_3c = CONCAT22(*(undefined2 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5),
                            *(undefined2 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5));
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_38 = CONCAT22(*(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5),
                            *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5));
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_34 = CONCAT22((&DAT_00811c94)[DAT_008488b0 * 0x158a],
                            *(undefined2 *)(&DAT_00811c90 + DAT_008488b0 * 0xac5));

        Library::DKW::TBL::DArrayAppend
                  ((DArrayTy *)g_allocationRecord_006684E0_008489C4->field_020F,&local_3c);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x42f:

        iVar7 = thunk_FUN_006817a0();
        if (iVar7 == 0) {
          thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x7dc
                    );
        }
        g_allocationRecord_006684E0_008489C4->field_0132 =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_0133 = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        g_allocationRecord_006684E0_008489C4->field_0137 =
             *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_0139 =
             *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_013F = (&DAT_00811c90)[DAT_008488b0 * 0xac5];
        g_allocationRecord_006684E0_008489C4->field_013B =
             *(int *)(&DAT_00811c94 + DAT_008488b0 * 0x158a) * 0x19;
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x430:

        iVar7 = thunk_FUN_00681ad0();
        if (iVar7 == 0) {
          thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x7fe
                    );
        }
        g_allocationRecord_006684E0_008489C4->field_0156 =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_0157 =
             *(undefined2 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_0159 =
             *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_015B = (&DAT_00811c8c)[DAT_008488b0 * 0xac5];
        g_allocationRecord_006684E0_008489C4->field_015F = (&DAT_00811c90)[DAT_008488b0 * 0xac5];
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x431:

        iVar7 = thunk_FUN_00681bb0();
        if (iVar7 == 0) {
          thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x808
                    );
        }
        g_allocationRecord_006684E0_008489C4->field_0167 =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        *(undefined4 *)&g_allocationRecord_006684E0_008489C4->field_0x168 =
             (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        *(undefined2 *)&g_allocationRecord_006684E0_008489C4->field_0x16c =
             *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_016E =
             *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5);
        *(int *)&g_allocationRecord_006684E0_008489C4->field_0x170 =
             (&DAT_00811c90)[DAT_008488b0 * 0xac5] * 0x19;
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x432:

        iVar7 = thunk_FUN_00681ca0();
        if (iVar7 == 0) {
          thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_allocationRecord_006684E0_008489C4 == nullptr) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x812
                    );
        }
        g_allocationRecord_006684E0_008489C4->field_0x174 =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        g_allocationRecord_006684E0_008489C4->field_023F = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x44c:
        DAT_008489c0 = 1;

        iVar7 = thunk_FUN_00680ff0();
        if (iVar7 == 0) {
          thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if ((g_allocationRecord_006684E0_008489C4 != nullptr) ||
           (DAT_008489c8 != nullptr)) {
          RaiseInternalException
                    (-0x8c,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x765
                    );
        }
        if (g_allocationRecord_0067D3B0_008489B8 == nullptr) {
          if (g_allocationRecord_00648620_008489B4 == nullptr) {
            if (g_allocationRecord_0065CD10_008489BC != nullptr) {
              RaiseInternalException
                        (-0x8c,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                         0x774);
            }
            g_allocationRecord_0065CD10_008489BC =
                 thunk_FUN_0065c9e0((&PTR_00811aec)[DAT_008488b0 * 0xac5]);
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          }
          if (*(&PTR_00811aec)[DAT_008488b0 * 0xac5] != '\0') {
            memset((void *)(*(int *)&g_allocationRecord_00648620_008489B4->field_0x4e + 6), 0, 0x40); /* compiler bulk-zero initialization */
            iVar7 = 0;
            Library::MSVCRT::_strncpy
                      ((char *)(*(int *)&g_allocationRecord_00648620_008489B4->field_0x4e + 6),
                       (&PTR_00811aec)[DAT_008488b0 * 0xac5],0x3f);
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          }
        }
        else if (*(&PTR_00811aec)[DAT_008488b0 * 0xac5] != '\0') {
          memset((void *)(*(int *)&g_allocationRecord_0067D3B0_008489B8->field_0x106 + 6), 0, 0x40); /* compiler bulk-zero initialization */
          Library::MSVCRT::_strncpy
                    ((char *)(*(int *)&g_allocationRecord_0067D3B0_008489B8->field_0x106 + 6),
                     (&PTR_00811aec)[DAT_008488b0 * 0xac5],0x3f);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        }
        break;
      case 0x44d:
        DAT_008489c0 = 0;
        if (PTR_008489cc != nullptr) {
          RaiseInternalException
                    (-0x91,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x77a
                    );
        }
        if ((g_allocationRecord_0067D3B0_008489B8 == nullptr) &&
           (g_allocationRecord_00648620_008489B4 == nullptr)) {
          if (g_allocationRecord_0065CD10_008489BC == nullptr) {
            RaiseInternalException
                      (-0x8d,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x77c);
          }
          pAVar15 = g_allocationRecord_0065CD10_008489BC;
          if (DAT_008489d0 == nullptr) {
            g_allocationRecord_0065CD10_008489BC = nullptr;
            if (param_3 != nullptr) {
              *param_3 = 5;
            }
            goto cf_common_join_0068A687;
          }
          /* ST_CALLSITE[00686328]: CALL 0x00401ebf; direct=00401EBF EventDataPack */
          local_c = EventDataPack(g_allocationRecord_0065CD10_008489BC,&local_18);
          thunk_FUN_0065d0f0((int *)&g_allocationRecord_0065CD10_008489BC);
          thunk_FUN_006809b0((byte *)local_c,local_18);
          thunk_FUN_0065d0f0((int *)&local_c);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        }
        break;
      case 0x456:
      case 0x457:
      case 0x458:
      case 0x459:
      case 0x45a:
      case 0x45b:
      case 0x45c:
      case 0x45d:
      case 0x45e:
      case 0x45f:
      case 0x460:
      case 0x461:
      case 0x462:
      case 0x463:
      case 0x464:
      case 0x465:
      case 0x466:
      case 0x467:
      case 0x468:
      case 0x469:
      case 0x46a:
      case 0x46b:
      case 0x46c:
      case 0x46d:
      case 0x46e:
      case 0x46f:
      case 0x470:
      case 0x471:
      case 0x472:
      case 0x473:
      case 0x474:
        /* ST_CALLSITE[00685E41]: CALL 0x00401cd0; direct=00401CD0 thunk_FUN_00683670; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
        local_EAX_8657 = thunk_FUN_00683670();
        if (local_EAX_8657 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x698
                    );
        }

        iVar7 = thunk_FUN_00680b50();
        if (iVar7 == 0) {
          thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (PTR_008489cc != nullptr) {
          RaiseInternalException
                    (-0x90,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x69a
                    );
        }
        PTR_008489cc = thunk_FUN_0065d120();
        piVar21 = (int *)(local_EAX_8657 + 0x46e);
        PTR_008489cc->field_0001 = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        PTR_008489cc->field_0005 = (&DAT_00811a94)[DAT_008488b0 * 0xac5];
        if ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14] == '\x02') {

          local_EAX_8927 =
               thunk_FUN_006838b0(piVar21,'\x02',(byte *)(&DAT_00811c80 + DAT_008488b0 * 0xac5),
                                  STField<int>(local_EAX_8657,0x456));
          STPiece<0,2>(local_EAX_8927) = (undefined2)local_EAX_8927;
        }
        else {
          iVar7 = STField<int>(local_EAX_8657,0x456);
          pAVar4 = thunk_FUN_0067fca0((&DAT_00811c80)[DAT_008488b0 * 0xac5]);

          local_EAX_8961 = thunk_FUN_00683780(piVar21,pAVar4,iVar7);
          STPiece<0,2>(local_EAX_8961) = (undefined2)local_EAX_8961;
          STPiece<0,2>(local_EAX_8927) = (undefined2)local_EAX_8961;
        }
        PTR_008489cc->field_0009 = (undefined2)local_EAX_8927;
        local_64 = 0xb;
        local_61 = 1;
        local_63 = *(undefined2 *)(&DAT_00811a94 + DAT_008488b0 * 0xac5);

        thunk_FUN_0064a830(piVar21,(undefined4 *)&local_64);
        (&DAT_00811a90)[DAT_008488b0 * 0xac5] = 4;
        goto switchD_006841b6_default;
      case 0x4b0:
        if (g_array_008489D4 != nullptr) {
          RaiseInternalException
                    (-0x8c,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x818
                    );
        }
        g_array_008489D4 = Library::DKW::TBL::DArrayCreate(nullptr,3,0x118,1);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x4b1:
        if (g_array_008489D4 == nullptr) {
          RaiseInternalException
                    (-0x8d,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x81d
                    );
        }
        pAVar15 = (AllocationRecord_0065CD10 *)g_array_008489D4;
        if (DAT_008489d0 == nullptr) {
          g_array_008489D4 = nullptr;
          if (param_3 != nullptr) {
            *param_3 = 0x40;
          }
          goto cf_common_join_0068A687;
        }
        RaiseInternalException
                  (-0x8d,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x81f);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x4b2:

        local_EAX_14040 = thunk_FUN_00681d20();
        if (local_EAX_14040 == 0) {
          thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
        }
        if (g_array_008489D4 == nullptr) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x82b
                    );
        }
        pcVar3 = local_2c8;
        for (iVar7 = 0x46; iVar7 != 0; iVar7 = iVar7 + -1) {
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
          pcVar3 = pcVar3 + 4;
        }
        Library::MSVCRT::_strncpy(local_2c8,(&PTR_00811aec)[DAT_008488b0 * 0xac5],0x103);
        local_1c4 = *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        local_1c3 = *(undefined1 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5);
        local_1c2 = *(undefined1 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        local_1c1 = (&DAT_00811c8c)[DAT_008488b0 * 0xac5];
        local_1bd = (&DAT_00811c90)[DAT_008488b0 * 0xac5];
        local_1b9 = *(undefined4 *)(&DAT_00811c94 + DAT_008488b0 * 0x158a);
        local_1b5 = *(undefined4 *)(&DAT_00811c98 + DAT_008488b0 * 0x158a);
        local_1b1 = (&DAT_00811c9c)[DAT_008488b0 * 0x2b14];

        Library::DKW::TBL::DArrayAppend(g_array_008489D4,local_2c8);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      }
    }
  }
  else {
    if (0x5b6 < iVar8) {
      if (0x5ec < iVar8) {
        if (0x76c < iVar8) goto switchD_00685456_default;
        if (iVar8 == 0x76c) {

          local_EAX_14857 = thunk_FUN_00683670();
          if (local_EAX_14857 == 0) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8f8);
          }
          if (PTR_008489cc == nullptr) {
            RaiseInternalException
                      (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8f8);
          }

          iVar7 = thunk_FUN_00681f70(1);
          goto joined_r0x00689693;
        }
        switch(iVar8) {
        case 0x5ed:

          local_EAX_14857 = thunk_FUN_00683670();
          if (local_EAX_14857 == 0) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8ec);
          }
          if (PTR_008489cc == nullptr) {
            iVar7 = 0x8ec;
cf_error_exit_0068883F:
            RaiseInternalException
                      (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       iVar7);
          }
          goto LAB_00688855;
        case 0x5ee:

          local_EAX_14857 = thunk_FUN_00683670();
          if (local_EAX_14857 == 0) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8ed);
          }
          if (PTR_008489cc == nullptr) {
            iVar7 = 0x8ed;
            goto cf_error_exit_006877A0;
          }
          goto cf_common_join_006877B6;
        case 0x5ef:

          local_EAX_14857 = thunk_FUN_00683670();
          if (local_EAX_14857 == 0) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8ee);
          }
          if (PTR_008489cc == nullptr) {
            RaiseInternalException
                      (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8ee);
          }
          iVar7 = 9;
          goto cf_common_join_006895CD;
        case 0x5f0:

          local_EAX_14857 = thunk_FUN_00683670();
          if (local_EAX_14857 == 0) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8ef);
          }
          if (PTR_008489cc == nullptr) {
            iVar7 = 0x8ef;
            goto cf_error_exit_006882E6;
          }
          break;
        case 0x5f1:

          local_EAX_14857 = thunk_FUN_00683670();
          if (local_EAX_14857 == 0) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8e5);
          }
          if (PTR_008489cc == nullptr) {
            iVar7 = 0x8e5;
            goto cf_error_exit_006882E6;
          }
          break;
        case 0x5f2:

          local_EAX_14857 = thunk_FUN_00683670();
          if (local_EAX_14857 == 0) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8e6);
          }
          if (PTR_008489cc == nullptr) {
            iVar7 = 0x8e6;
            goto cf_error_exit_006877EF;
          }
          goto cf_common_join_00687805;
        case 0x5f3:

          local_EAX_14857 = thunk_FUN_00683670();
          if (local_EAX_14857 == 0) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8e7);
          }
          if (PTR_008489cc == nullptr) {
            iVar7 = 0x8e7;
            goto cf_error_exit_006882E6;
          }
          break;
        case 0x5f4:

          local_EAX_14857 = thunk_FUN_00683670();
          if (local_EAX_14857 == 0) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8e8);
          }
          if (PTR_008489cc == nullptr) {
            iVar7 = 0x8e8;
            goto cf_error_exit_006877EF;
          }
          goto cf_common_join_00687805;
        case 0x5f5:

          local_EAX_14857 = thunk_FUN_00683670();
          if (local_EAX_14857 == 0) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8e9);
          }
          if (PTR_008489cc == nullptr) {
            iVar7 = 0x8e9;
cf_error_exit_00689556:
            RaiseInternalException
                      (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       iVar7);
          }
          goto LAB_0068956c;
        case 0x5f6:

          local_EAX_14857 = thunk_FUN_00683670();
          if (local_EAX_14857 == 0) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8ea);
          }
          if (PTR_008489cc == nullptr) {
            iVar7 = 0x8ea;
            goto cf_error_exit_00687750;
          }
          goto cf_common_join_00687766;
        case 0x5f7:

          local_EAX_14857 = thunk_FUN_00683670();
          if (local_EAX_14857 == 0) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8eb);
          }
          if (PTR_008489cc == nullptr) {
            iVar7 = 0x8eb;
            goto cf_error_exit_006882E6;
          }
          break;
        case 0x5f8:

          local_EAX_14857 = thunk_FUN_00683670();
          if (local_EAX_14857 == 0) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8f0);
          }
          if (PTR_008489cc == nullptr) {
            iVar7 = 0x8f0;
            goto cf_error_exit_006877EF;
          }
          goto cf_common_join_00687805;
        case 0x5f9:

          local_EAX_14857 = thunk_FUN_00683670();
          if (local_EAX_14857 == 0) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8f2);
          }
          if (PTR_008489cc == nullptr) {
            iVar7 = 0x8f2;
            goto cf_error_exit_0068883F;
          }
          goto LAB_00688855;
        case 0x5fa:

          local_EAX_14857 = thunk_FUN_00683670();
          if (local_EAX_14857 == 0) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8f3);
          }
          if (PTR_008489cc == nullptr) {
            iVar7 = 0x8f3;
            goto cf_error_exit_00689556;
          }
          goto LAB_0068956c;
        case 0x5fb:

          local_EAX_14857 = thunk_FUN_00683670();
          if (local_EAX_14857 == 0) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8f4);
          }
          if (PTR_008489cc == nullptr) {
            iVar7 = 0x8f4;
            goto cf_error_exit_0068883F;
          }
LAB_00688855:
          iVar7 = 6;
          goto cf_common_join_006895CD;
        case 0x5fc:

          local_EAX_14857 = thunk_FUN_00683670();
          if (local_EAX_14857 == 0) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8f5);
          }
          if (PTR_008489cc == nullptr) {
            iVar7 = 0x8f5;
            goto cf_error_exit_00689556;
          }
LAB_0068956c:
          iVar7 = 6;
          goto cf_common_join_0068956E;
        case 0x5fd:

          local_EAX_14857 = thunk_FUN_00683670();
          if (local_EAX_14857 == 0) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8f1);
          }
          if (PTR_008489cc == nullptr) {
            iVar7 = 0x8f1;
            goto cf_error_exit_006882E6;
          }
          break;
        case 0x5fe:

          local_EAX_14857 = thunk_FUN_00683670();
          if (local_EAX_14857 == 0) {
            RaiseInternalException
                      (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0x8f6);
          }
          if (PTR_008489cc == nullptr) {
            iVar7 = 0x8f6;
            goto LAB_006895b5;
          }
          goto LAB_006895cb;
        default:
          goto switchD_00685456_default;
        }
        goto cf_common_join_006882FC;
      }
      if (iVar8 == 0x5ec) {

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8e4
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x8e4;
          goto cf_error_exit_00687750;
        }
        goto cf_common_join_00687766;
      }
      switch(iVar8) {
      case 0x5b7:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8ce
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x8ce;
          goto cf_error_exit_006877A0;
        }
        goto cf_common_join_006877B6;
      case 0x5b8:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8cf
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x8cf;
          goto cf_error_exit_00687750;
        }
        goto cf_common_join_00687766;
      case 0x5b9:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8d0
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x8d0;
          goto cf_error_exit_006879EA;
        }
        goto cf_common_join_00687A00;
      default:
        goto switchD_00685456_default;
      case 0x5c8:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8cb
                    );
        }
        if (PTR_008489cc == nullptr) {
          RaiseInternalException
                    (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8cb
                    );
          iVar7 = 4;
          goto cf_common_join_006895CD;
        }
        break;
      case 0x5dc:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8d4
                    );
        }
        if (PTR_008489cc == nullptr) {
          RaiseInternalException
                    (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8d4
                    );
        }

        iVar7 = thunk_FUN_006820f0(2,1,2);
        goto cf_common_join_006895D5;
      case 0x5dd:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8d5
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x8d5;
          goto cf_error_exit_006877A0;
        }
        goto cf_common_join_006877B6;
      case 0x5de:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8d6
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x8d6;
          goto cf_error_exit_00687750;
        }
        goto cf_common_join_00687766;
      case 0x5df:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8d7
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x8d7;
          goto cf_error_exit_006877A0;
        }
        goto cf_common_join_006877B6;
      case 0x5e0:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8d8
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x8d8;
          goto cf_error_exit_006877EF;
        }
        break;
      case 0x5e1:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8d9
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x8d9;
          goto cf_error_exit_006882E6;
        }
        goto cf_common_join_006882FC;
      case 0x5e2:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8da
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x8da;
          goto cf_error_exit_00687AEC;
        }
        goto LAB_00687b02;
      case 0x5e3:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8db
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x8db;
          goto cf_error_exit_006877A0;
        }
        goto cf_common_join_006877B6;
      case 0x5e4:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8dc
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x8dc;
          goto cf_error_exit_006877EF;
        }
        break;
      case 0x5e5:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8de
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x8de;
          goto cf_error_exit_006877EF;
        }
        break;
      case 0x5e6:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8dd
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x8dd;
          goto cf_error_exit_006882E6;
        }
        goto cf_common_join_006882FC;
      case 0x5e7:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8df
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x8df;
          goto cf_error_exit_006882E6;
        }
        goto cf_common_join_006882FC;
      case 0x5e8:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8e0
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x8e0;
          goto cf_error_exit_00687750;
        }
        goto cf_common_join_00687766;
      case 0x5e9:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8e1
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x8e1;
          goto cf_error_exit_006882E6;
        }
cf_common_join_006882FC:
        iVar7 = 4;
        goto cf_common_join_0068956E;
      case 0x5ea:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8e2
                    );
        }
        if (PTR_008489cc == nullptr) {
          iVar7 = 0x8e2;
          goto cf_error_exit_006877EF;
        }
        break;
      case 0x5eb:

        local_EAX_14857 = thunk_FUN_00683670();
        if (local_EAX_14857 == 0) {
          RaiseInternalException
                    (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8e3
                    );
        }
        if (PTR_008489cc == nullptr) {
          RaiseInternalException
                    (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8e3
                    );
        }
        iVar7 = 9;
        goto cf_common_join_0068956E;
      }
cf_common_join_00687805:
      iVar7 = 4;
      goto cf_common_join_006895CD;
    }
    if (iVar8 == 0x5b6) {

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8d2);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8d2;
        goto cf_error_exit_00689556;
      }
      goto LAB_0068956c;
    }
    switch(iVar8) {
    case 0x568:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8a1);
      }
      if (PTR_008489cc == nullptr) {
        RaiseInternalException
                  (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8a1);
        iVar7 = 2;
        goto cf_common_join_006895CD;
      }
      goto cf_common_join_006878A4;
    case 0x569:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8a2);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8a2;
        goto cf_error_exit_0068783F;
      }
      break;
    case 0x56a:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8a3);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8a3;
cf_error_exit_0068821F:
        RaiseInternalException
                  (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",iVar7);
      }
      goto LAB_00688235;
    default:
      goto switchD_00685456_default;
    case 0x578:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8a6);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8a6;
        goto cf_error_exit_00687750;
      }
      goto cf_common_join_00687766;
    case 0x579:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8a7);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8a7;
cf_error_exit_006882E6:
        RaiseInternalException
                  (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",iVar7);
      }
      goto cf_common_join_006882FC;
    case 0x57a:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8a8);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8a8;
        goto cf_error_exit_0068821F;
      }
      goto LAB_00688235;
    case 0x57b:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8a9);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8a9;
        goto cf_error_exit_006877A0;
      }
      goto cf_common_join_006877B6;
    case 0x582:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8ab);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8ab;
LAB_006883ac:
        RaiseInternalException
                  (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",iVar7);
      }
      goto LAB_006883c2;
    case 0x583:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8ac);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8ac;
        goto cf_error_exit_0068783F;
      }
      break;
    case 0x584:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8ad);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8ad;
        goto cf_error_exit_0068821F;
      }
LAB_00688235:
      iVar7 = 1;
      goto cf_common_join_006895CD;
    case 0x585:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8a4);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8a4;
cf_error_exit_006876FE:
        RaiseInternalException
                  (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",iVar7);
      }
      goto LAB_00687714;
    case 0x58c:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8b4);
      }
      if (PTR_008489cc == nullptr) {
        RaiseInternalException
                  (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8b4);
      }

      iVar7 = thunk_FUN_006821d0(1,3);
      goto joined_r0x00689693;
    case 0x58d:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8b1);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8b1;
        goto cf_error_exit_00687750;
      }
      goto cf_common_join_00687766;
    case 0x58e:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8b2);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8b2;
        goto cf_error_exit_0068783F;
      }
      break;
    case 0x58f:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8b3);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8b3;
        goto cf_error_exit_0068788E;
      }
      goto cf_common_join_006878A4;
    case 0x590:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8b5);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8b5;
LAB_006895b5:
        RaiseInternalException
                  (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",iVar7);
      }
LAB_006895cb:
      iVar7 = 7;
      goto cf_common_join_006895CD;
    case 0x591:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8b6);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8b6;
        goto cf_error_exit_0068783F;
      }
      break;
    case 0x592:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8b7);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8b7;
        goto LAB_006883ac;
      }
LAB_006883c2:
      iVar7 = 5;
      goto cf_common_join_006895CD;
    case 0x593:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8b8);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8b8;
        goto cf_error_exit_006876FE;
      }
LAB_00687714:

      iVar7 = thunk_FUN_00681f50();
      goto joined_r0x00689693;
    case 0x594:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8b9);
      }
      if (PTR_008489cc == nullptr) {
        RaiseInternalException
                  (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8b9);
      }

      iVar7 = thunk_FUN_00681fe0(2);
      goto cf_common_join_006895D5;
    case 0x595:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8ae);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8ae;
        goto cf_error_exit_006882E6;
      }
      goto cf_common_join_006882FC;
    case 0x596:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8af);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8af;
cf_error_exit_006876AB:
        RaiseInternalException
                  (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",iVar7);
      }
      goto LAB_006876c1;
    case 0x597:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8b0);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8b0;
        goto cf_error_exit_0068783F;
      }
      break;
    case 0x598:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8ba);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8ba;
        goto cf_error_exit_00687A9D;
      }
      goto LAB_00687ab3;
    case 0x599:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8bb);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8bb;
        goto cf_error_exit_006876AB;
      }
LAB_006876c1:

      iVar7 = thunk_FUN_00681f50();
      goto cf_common_join_006895D5;
    case 0x59a:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8bc);
      }
      if (PTR_008489cc == nullptr) {
        RaiseInternalException
                  (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8bc);
      }

      iVar7 = thunk_FUN_00681fe0(2);
      goto joined_r0x00689693;
    case 0x59b:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8bd);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8bd;
        goto cf_error_exit_0068883F;
      }
      goto LAB_00688855;
    case 0x59c:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8be);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8be;
        goto cf_error_exit_0068783F;
      }
      break;
    case 0x59d:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8bf);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8bf;
        goto cf_error_exit_00687750;
      }
      goto cf_common_join_00687766;
    case 0x5aa:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8c1);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8c1;
        goto cf_error_exit_006877A0;
      }
      goto cf_common_join_006877B6;
    case 0x5ab:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8c2);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8c2;
        goto cf_error_exit_00687750;
      }
      goto cf_common_join_00687766;
    case 0x5ac:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8c3);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8c3;
        goto cf_error_exit_006877A0;
      }
      goto cf_common_join_006877B6;
    case 0x5ad:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8c4);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8c4;
        goto cf_error_exit_00687750;
      }
      goto cf_common_join_00687766;
    case 0x5ae:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8c5);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8c5;
        goto cf_error_exit_0068783F;
      }
      break;
    case 0x5af:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8c6);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8c6;
        goto cf_error_exit_00687750;
      }
      goto cf_common_join_00687766;
    case 0x5b0:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8c7);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8c7;
        goto cf_error_exit_0068783F;
      }
      break;
    case 0x5b1:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8c8);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8c8;
        goto cf_error_exit_0068788E;
      }
      goto cf_common_join_006878A4;
    case 0x5b2:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8c9);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8c9;
        goto cf_error_exit_0068783F;
      }
      break;
    case 0x5b3:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8ca);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8ca;
        goto cf_error_exit_00687750;
      }
      goto cf_common_join_00687766;
    case 0x5b4:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8cd);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8cd;
        goto cf_error_exit_006879EA;
      }
      goto cf_common_join_00687A00;
    case 0x5b5:

      local_EAX_14857 = thunk_FUN_00683670();
      if (local_EAX_14857 == 0) {
        RaiseInternalException
                  (-0x8e,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x8d1);
      }
      if (PTR_008489cc == nullptr) {
        iVar7 = 0x8d1;
        goto cf_error_exit_006877EF;
      }
      goto cf_common_join_00687805;
    }
cf_common_join_00687855:
    iVar7 = 2;
cf_common_join_0068956E:

    iVar7 = thunk_FUN_00681f70(iVar7);
joined_r0x00689693:
    if (iVar7 == 0) {
      thunk_FUN_006802a0(-0x7d,&CHAR_00h_00811aa4 + DAT_008488b0 * 0x2b14);
    }
    iVar7 = STField<int>(local_EAX_14857,0x456);
    uVar23 = (ushort)(&DAT_00811a94)[DAT_008488b0 * 0xac5];
LAB_006896f6:

    thunk_FUN_006839d0((RecoveredRecord_006839D0_1EDE16BA *)PTR_008489cc,
                       (int *)(local_EAX_14857 + 0x46e),uVar23,iVar7);
  }
switchD_00685456_default:
  DAT_008488b0 = DAT_008488b0 + -1;
  goto switchD_006841b6_default;
}

