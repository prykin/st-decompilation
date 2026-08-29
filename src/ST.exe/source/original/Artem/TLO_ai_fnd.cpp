#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_ai_fnd.cpp

// 004B33D0 FUN_004b33d0
#line 4 "decomp/ST.exe/functions/004B33D0/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_ai_fnd.cpp
   Diagnostic line evidence: 93 | 961 | 962 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STTypeFamilyApplier] RETURN_TO_LOCAL_FAMILY.
   Evidence: direct call return copied through registers into this script-owned anonymous stack
   local */

int st::fn_004B33D0(uint param_1,int *param_2)

{
  alignas(4) byte st_stack_frame[900];

  uint uVar1;
  DArrayTy **ppDVar2;
  byte bVar3;
  char cVar4;
  STWorldObject *this;
  STFishC *pSVar5;
  vfunc_00405321_FUN_0057dfb0 *pvVar6;
  DArrayTy *pDVar8;
  DArrayTy *pDVar9;
  byte bVar8;
  byte local_AL_6332;
  byte local_AL_8720;
  byte local_AL_8792;
  short sVar10;
  int local_EAX_82;
  DArrayTy *pDVar10_mg0;
  DArrayTy *pDVar10_mg1;
  int iVar10;
  int local_EAX_277;
  DArrayTy *pDVar10_mg4;
  int local_EAX_475;
  DArrayTy *pDVar10_mg3;
  DArrayTy *pDVar11;
  int local_EAX_699;
  int local_EAX_1142;
  int local_EAX_1273;
  byte *pbVar12;
  int local_EAX_1658;
  int local_EAX_1772;
  byte local_AL_2110;
  int local_EAX_2147;
  int local_EAX_2268;
  int local_EAX_2313;
  DArrayTy *pDVar10_mg7;
  int local_EAX_2860;
  int iVar13;
  dword dVar13;
  DArrayTy *pDVar10_mg9;
  int local_EAX_4815;
  int iVar14;
  int local_EAX_5085;
  int iVar15;
  int local_EAX_5240;
  int local_EAX_6263;
  int iVar16;
  int iVar27;
  int local_EAX_7382;
  int local_EAX_7612;
  int local_EAX_7838;
  int local_EAX_8063;
  Global_sub_004B1120_param_2Enum GVar17;
  int *piVar18;
  DArrayTy *pDVar10_mgE;
  DArrayTy *pDVar10_mg10;
  DArrayTy *pDVar10_mg12;
  DArrayTy *pDVar10_mg14;
  int local_EAX_11609;
  short sVar19;
  int iVar20;
  uint uVar21;
  short sVar22;
  int iVar23;
  uint uVar24;
  DArrayTy *pDVar25;
  byte *pbVar26;
  byte *pbVar27;
  int iVar28;
  uint *puVar29;
  byte *puVar30;
  bool bVar31;
  int local_35c;
  int local_358;
  int local_354;
  dword local_34c;
  byte local_320 [12];
  int aiStack_314 [4];
  Global_sub_004B1120_param_2Enum local_304 [4];
  uint local_2f4;
  byte local_2ec;
  int local_2eb;
  dword local_2e7;
  int local_2e3;
  int local_2df;
  int local_2db;
  int local_2d7_mg1;
  uint local_2d3;
  InternalExceptionFrame local_2c0;
  byte *local_27c;
  int local_274;
  int local_270;
  int local_26c;
  uint local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254 [2];
  uint local_24c [8];
  DArrayTy *local_22c;
  DArrayTy *local_184_mg0;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  Global_sub_004B1120_param_2Enum local_134;
  int local_12c;
  uint local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  STWorldObject *local_110;
  int local_10c;
  Global_sub_004B1120_param_2Enum local_108 [4];
  uint local_f8;
  int local_f4 [18];
  int local_ac;
  short local_a8 [2];
  DArrayTy *local_a4;
  Global_sub_004B1120_param_2Enum local_a0;
  int local_9c;
  int local_98;
  int local_94;
  uint local_90;
  short local_8c [2];
  int local_88;
  uint local_80;
  short local_7c [2];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  STFishC *local_58;
  int local_54;
  int local_50;
  int local_4c [11];
  DArrayTy *local_20_mg0;
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  short sVar18;
  short temp_3f7606bb67;

  local_8 = 0xffffffff;
  puStack_c = (undefined *)&DAT_00790a90;
  puStack_10 = (byte *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 20);
  local_2c0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_2c0;
  ExceptionList = &local_14;

  local_EAX_82 = st::fn_0072D7F0(local_2c0.jumpBuffer,2);
  local_1c = (st_stack_frame + 20);
  if (local_EAX_82 != 0) {
    g_currentExceptionFrame = local_2c0.previous;

    local_EAX_11609 =
         st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_ai_fnd.cpp"),0x3c1,0,local_EAX_82,
                            st::mutable_c_string("%s"));
    if (local_EAX_11609 == 0) {
      st::fn_006A5E40(local_EAX_82,0,st::mutable_c_string("E:\\__titans\\Artem\\TLO_ai_fnd.cpp"),0x3c2);
      ExceptionList = local_14;
      return local_EAX_82;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_1c = (st_stack_frame + 20);
  if (param_2 == nullptr) {
    local_1c = (st_stack_frame + 20);
    st::fn_006A5E40
              (-5,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_ai_fnd.cpp"),0x5d);
  }
  if (param_2[3] == 0) {
    pDVar10_mg0 = st::fn_006AE290(nullptr,10,0x14,10);
    param_2[3] = (int)pDVar10_mg0;
  }
  if (param_2[5] == 0) {
    pDVar10_mg1 = st::fn_006AE290(nullptr,10,0x14,10);
    param_2[5] = (int)pDVar10_mg1;
  }
  memset(local_24c, 0, 0x108); /* compiler bulk-zero initialization */
  iVar20 = 0;
  memset(local_4c, 0, 0x2c); /* compiler bulk-zero initialization */
  iVar20 = 0;
  local_10c = 0;
  *(undefined4 *)(param_2[3] + 4) = 0;

  iVar10 = st::fn_006B1190((DArrayTy *)param_2[3],reinterpret_cast<byte *>(local_108));
  if (-1 < iVar10) {
    do {
      local_4c[*(int *)(&DAT_00790888 + local_108[0] * 4)] =
           local_4c[*(int *)(&DAT_00790888 + local_108[0] * 4)] + 1;
      if (*(int *)(&DAT_00791d68 + local_108[0] * 4) == 1) {
        iVar20 = iVar20 + 1;
      }

      local_EAX_277 = st::fn_006B1190((DArrayTy *)param_2[3],reinterpret_cast<byte *>(local_108));
    } while (-1 < local_EAX_277);
    local_10c = iVar20;
  }
  uVar24 = 0;
  pDVar11 = (DArrayTy *)param_2[5];
  if (0 < (int)pDVar11->count) {
    do {

      st::fn_006ACC70(pDVar11,uVar24,&local_a0);

      iVar20 = st::fn_00402829((short)local_9c,local_98,local_94,local_a0,param_1,
                                  nullptr,nullptr,nullptr,0,nullptr);
      if (iVar20 == 0) {
        local_304[0] = local_a0;
        local_2f4 = local_90;
        if (param_2[3] == 0) {
          pDVar10_mg4 = st::fn_006AE290(nullptr,10,0x14,10);
          param_2[3] = (int)pDVar10_mg4;
        }

        st::fn_006AE1C0((DArrayTy *)param_2[3],local_304);

        st::fn_006B0C70((DArrayTy *)param_2[5],uVar24);
      }
      else {
        bVar31 = true;
        *(undefined4 *)(param_2[4] + 4) = 0;

        local_EAX_475 = st::fn_006B1190((DArrayTy *)param_2[4],reinterpret_cast<byte *>(&local_70));
        while (-1 < local_EAX_475) {
          if (((local_70 == local_9c) && (local_6c == local_98)) && (local_68 == local_94)) {
            bVar31 = false;
          }

          local_EAX_475 = st::fn_006B1190((DArrayTy *)param_2[4],reinterpret_cast<byte *>(&local_70));
        }
        if (bVar31) {
          uVar24 = uVar24 + 1;
        }
        else {
          if (param_2[3] == 0) {
            pDVar10_mg3 = st::fn_006AE290(nullptr,10,0x14,10);
            param_2[3] = (int)pDVar10_mg3;
          }

          st::fn_006AE1C0((DArrayTy *)param_2[3],local_320);

          st::fn_006B0C70((DArrayTy *)param_2[5],uVar24);
        }
      }
      pDVar11 = (DArrayTy *)param_2[5];
    } while ((int)uVar24 < (int)pDVar11->count);
  }
  if (((local_4c[0] != 0) || (local_4c[1] != 0)) && (g_array_007FA150 != nullptr)) {
    pDVar11 = st::fn_006AE290(nullptr,10,0x1d,10);
    g_array_007FA150->iteratorIndex = 0;
    local_a4 = pDVar11;

    local_EAX_699 = st::fn_006B1190(g_array_007FA150,reinterpret_cast<byte *>(&local_58));
    while (-1 < local_EAX_699) {
      if (local_58 != nullptr) {
        /* ST_CALLSITE[004B36B5]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        st::fn_004018C5(local_58,local_7c,local_8c,local_a8);
        this = STGridAt3D(g_worldGrid, local_7c[0], local_8c[0], local_a8[0]).objects[0];
        local_110 = this;
        if (this == nullptr) {
          pbVar27 = &local_2ec;
          for (iVar20 = 7; iVar20 != 0; iVar20 = iVar20 + -1) {
            pbVar27[0] = 0;
            pbVar27[1] = 0;
            pbVar27[2] = 0;
            pbVar27[3] = 0;
            pbVar27 = pbVar27 + 4;
          }
          *pbVar27 = 0;
          local_2ec = 1;
          /* ST_CALLSITE[004B37E4]: CALL dword ptr [EDX + 0x2c] */
          local_2e7 = local_58->vfunc_2C();
          local_2e3 = (int)local_7c[0];
          local_2df = (int)local_8c[0];
          local_2db = (int)local_a8[0];

          local_2d7_mg1 = st::fn_006ACED8(*param_2,param_2[1],local_2e3,local_2df);
          local_2d3 = 0xffffffff;
          if (param_2[4] != 0) {
            *(undefined4 *)(param_2[4] + 4) = 0;

            local_EAX_1142 = st::fn_006B1190((DArrayTy *)param_2[4],reinterpret_cast<byte *>(&local_70));
            while (-1 < local_EAX_1142) {
              if (((local_70 == local_2e3) && (local_6c == local_2df)) && (local_68 == local_2db)) {
                local_2ec = local_2ec | 0x20;
                break;
              }

              local_EAX_1142 = st::fn_006B1190((DArrayTy *)param_2[4],reinterpret_cast<byte *>(&local_70));
            }
          }
        }
        else {
          if ((st::machine_word_boundary_cast<uint>(this[1].vtable) != st::machine_word_boundary_cast<uint>((STWorldObjectVTable *)param_1)) ||
             (((this->value_20 != 1000 ||
               /* ST_CALLSITE[004B3716]: CALL dword ptr [EAX + 0x2c] */
               (iVar20 = this->GetObjectTypeId(),
               *(int *)(&DAT_00790888 + iVar20 * 4) != 0)) &&
              ((this->value_20 != 0x3e9 ||
               (*(int *)(&DAT_00790888 + *(int *)&local_110[0x10].field_0x19 * 4) != 0))))))
          goto LAB_004b3895;
          pbVar27 = &local_2ec;
          for (iVar20 = 7; iVar20 != 0; iVar20 = iVar20 + -1) {
            pbVar27[0] = 0;
            pbVar27[1] = 0;
            pbVar27[2] = 0;
            pbVar27[3] = 0;
            pbVar27 = pbVar27 + 4;
          }
          *pbVar27 = 0;
          local_2ec = 2;
          /* ST_CALLSITE[004B376B]: CALL dword ptr [EDX + 0x2c] */
          local_2eb = local_110->GetObjectTypeId();
          if (local_2eb == 0x61) {
            local_2ec = local_2ec | 8;
          }
          /* ST_CALLSITE[004B3785]: CALL dword ptr [EAX + 0x2c] */
          local_2e7 = local_58->vfunc_2C();
          local_2e3 = (int)local_7c[0];
          local_2df = (int)local_8c[0];
          local_2db = (int)local_a8[0];
          local_2d3 = 0xffffffff;
        }

        st::fn_006AE1C0(pDVar11,&local_2ec);
      }
LAB_004b3895:

      local_EAX_699 = st::fn_006B1190(g_array_007FA150,reinterpret_cast<byte *>(&local_58));
    }
    if (local_4c[0] != 0) {
      *(undefined4 *)(param_2[3] + 4) = 0;

      local_EAX_1273 = st::fn_006B1190((DArrayTy *)param_2[3],reinterpret_cast<byte *>(local_108));
      while (-1 < local_EAX_1273) {
        switch(local_108[0]) {
        case CASE_39:
        case CASE_5E:
          iVar20 = 0xdd;
          pDVar11->iteratorIndex = 0;
          pbVar27 = nullptr;
          break;
        default:
          goto switchD_004b38f0_caseD_3a;
        case CASE_4F:
        case CASE_61:
          iVar20 = 0xde;
          pDVar11->iteratorIndex = 0;
          pbVar27 = nullptr;
        }
        while( true ) {
          pbVar26 = pbVar27;
          uVar24 = pDVar11->iteratorIndex;
          if (uVar24 < pDVar11->count) {
            pbVar12 = DArrayAt<byte>(pDVar11, uVar24);
            pDVar11->iteratorIndex = uVar24 + 1;
          }
          else {
            pbVar12 = nullptr;
          }
          if (pbVar12 == nullptr) break;
          bVar3 = *pbVar12;
          pbVar27 = pbVar26;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((((((bVar3 & 1) != 0) && ((bVar3 & 4) == 0)) && (*(int *)(pbVar12 + 5) == iVar20)) &&
              (pbVar27 = pbVar12, pbVar26 != nullptr)) &&
             ((pDVar11 = local_a4, (bVar3 & 0x20) < (*pbVar26 & 0x20) ||
              ((pbVar27 = pbVar26, ((*pbVar26 ^ *pbVar12) & 0x20) == 0 &&
               (*(int *)(pbVar12 + 0x15) < *(int *)(pbVar26 + 0x15))))))) {
            pbVar27 = pbVar12;
          }
        }
        if (pbVar26 != nullptr) {
          *pbVar26 = *pbVar26 | 4;
          if (local_108[0] == CASE_61) {
            *pbVar26 = *pbVar26 | 8;
          }
          local_9c = *(int *)(pbVar26 + 9);
          local_98 = *(int *)(pbVar26 + 0xd);
          local_94 = *(int *)(pbVar26 + 0x11);
          local_a0 = local_108[0];
          local_90 = local_f8;

          st::fn_006AE1C0((DArrayTy *)param_2[5],&local_a0);
          local_4c[0] = local_4c[0] + -1;

          st::fn_006B0C70((DArrayTy *)param_2[3],st::machine_word_boundary_cast<uint>(((DArrayTy *)param_2[3])->iteratorIndex - 1));
        }
        if (local_4c[0] == 0) break;
switchD_004b38f0_caseD_3a:

        local_EAX_1273 = st::fn_006B1190((DArrayTy *)param_2[3],reinterpret_cast<byte *>(local_108));
      }
    }
    ppDVar2 = &g_packedRecords_A62x8[param_1].field1973_0x9ea;
    if (*ppDVar2 != nullptr) {
      (*ppDVar2)->iteratorIndex = 0;

      local_EAX_1658 = st::fn_006B1190(*ppDVar2,reinterpret_cast<byte *>(&local_58));
      while (local_EAX_1658 != 0) {
        /* ST_CALLSITE[004B3A6C]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        st::fn_004018C5(local_58,local_7c,local_8c,local_a8);
        local_88 = -1;
        pDVar11->iteratorIndex = 0;
        pbVar27 = nullptr;
        while( true ) {
          uVar24 = pDVar11->iteratorIndex;
          if (uVar24 < pDVar11->count) {
            pbVar26 = DArrayAt<byte>(pDVar11, uVar24);
            pDVar11->iteratorIndex = uVar24 + 1;
          }
          else {
            pbVar26 = nullptr;
          }
          if (pbVar26 == nullptr) break;
          if ((((*pbVar26 & 6) != 0) && ((*pbVar26 & 0x18) == 0)) &&

             ((local_EAX_1772 =
                    st::fn_006ACED8((int)local_7c[0],(int)local_8c[0],*(int *)(pbVar26 + 9),
                                 *(int *)(pbVar26 + 0xd)), pbVar27 == nullptr ||
              (local_EAX_1772 < local_88)))) {
            pbVar27 = pbVar26;
            local_88 = local_EAX_1772;
          }
        }
        if (pbVar27 != nullptr) {
          if (local_88 < 0xf) {
            *pbVar27 = *pbVar27 | 0x10;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          else if ((*(int *)(pbVar27 + 0x19) < 0) || (local_88 < *(int *)(pbVar27 + 0x19))) {
            *(int *)(pbVar27 + 0x19) = local_88;
          }
        }

        local_EAX_1658 = st::fn_006B1190(*ppDVar2,reinterpret_cast<byte *>(&local_58));
      }
    }
    if (local_4c[1] != 0) {
      uVar24 = 0;
      if (0 < (int)pDVar11->count) {
        do {

          st::fn_006ACC70(pDVar11,uVar24,&local_2ec);
          if (((local_2ec & 0x18) == 0) && (((local_2ec & 1) == 0 || ((local_2ec & 4) != 0)))) {
            uVar24 = uVar24 + 1;
          }
          else {

            st::fn_006B0C70(pDVar11,uVar24);
          }
        } while ((int)uVar24 < (int)pDVar11->count);
      }
      uVar24 = pDVar11->count;
      if (local_4c[1] < (int)uVar24) {
        do {
          local_50 = 0;
          pDVar25 = pDVar11;
          uVar21 = 0;
          if (uVar24 != 1 && -1 < st::storage_bit_cast<int>(static_cast<uint32_t>(uVar24 - 1))) {
            do {
              pDVar11 = local_a4;
              if (uVar21 < uVar24) {
                pbVar27 = DArrayAt<byte>(pDVar25, uVar21);
              }
              else {
                pbVar27 = nullptr;
              }
              uVar1 = uVar21 + 1;
              if (uVar1 < uVar24) {
                pbVar26 = DArrayAt<byte>(pDVar25, uVar1);
              }
              else {
                pbVar26 = nullptr;
              }
              if (((*pbVar26 & 0x20) < (*pbVar27 & 0x20)) ||
                 ((((*pbVar27 ^ *pbVar26) & 0x20) == 0 &&
                  (*(int *)(pbVar26 + 0x15) < *(int *)(pbVar27 + 0x15))))) {

                st::fn_006B0CD0(reinterpret_cast<RecoveredRecordView_00413AF0_B98DB3AE *>(local_a4),uVar21,uVar1);
                local_50 = 1;
              }
              uVar24 = pDVar11->count;
              pDVar25 = pDVar11;
              uVar21 = uVar1;
            } while ((int)uVar1 < st::storage_bit_cast<int>(static_cast<uint32_t>(uVar24 - 1)));
          }
        } while (local_50 != 0);
      }
      pDVar11->iteratorIndex = 0;
      /* ST_CALLSITE[004B3C0E]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_AL_2110 = st::fn_004049B7((byte)param_1);
      local_134 = (-(uint)(local_AL_2110 != 3) & 0xffffffdb) + 0x60;
      *(undefined4 *)(param_2[3] + 4) = 0;

      local_EAX_2147 = st::fn_006B1190((DArrayTy *)param_2[3],reinterpret_cast<byte *>(local_108));
      while (-1 < local_EAX_2147) {
        if (local_108[0] == local_134) {
          uVar24 = pDVar11->iteratorIndex;
          if (uVar24 < pDVar11->count) {
            pbVar27 = DArrayAt<byte>(pDVar11, uVar24);
            pDVar11->iteratorIndex = uVar24 + 1;
          }
          else {
            pbVar27 = nullptr;
          }
          if (pbVar27 == nullptr) break;
          local_11c = *(int *)(pbVar27 + 9);
          local_138 = *(int *)(pbVar27 + 0xd);
          local_254[0] = *(int *)(pbVar27 + 0x11);

          local_EAX_2268 = st::fn_004019EC(param_1,local_134,&local_11c,&local_138,local_254,0,1);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((local_EAX_2268 != 0) &&
             ((*(int *)(pbVar27 + 0x19) < 0 ||

              (local_EAX_2313 =
                    st::fn_006ACED8(local_11c,local_138,*(int *)(pbVar27 + 9),*(int *)(pbVar27 + 0xd)),
              local_EAX_2313 < *(int *)(pbVar27 + 0x19))))) {
            *pbVar27 = *pbVar27 | 0x10;
            local_a0 = local_108[0];
            local_90 = local_f8;
            local_9c = local_11c;
            local_98 = local_138;
            local_94 = local_254[0];

            st::fn_006AE1C0((DArrayTy *)param_2[5],&local_a0);
            local_4c[1] = local_4c[1] + -1;

            st::fn_006B0C70((DArrayTy *)param_2[3],st::machine_word_boundary_cast<uint>(((DArrayTy *)param_2[3])->iteratorIndex - 1));
          }
          if (local_4c[1] == 0) break;
        }

        local_EAX_2147 = st::fn_006B1190((DArrayTy *)param_2[3],reinterpret_cast<byte *>(local_108));
      }
    }
    st::fn_006AE110(pDVar11);
  }
  iVar20 = 0;
LAB_004b3d9a:
  if (10 < iVar20) {
cf_break_loop_004B60CD:
    if (local_20_mg0 != nullptr) {
      st::fn_006AE110(local_20_mg0);
    }
    puVar29 = local_24c;
    iVar20 = 0x42;
    do {
      if ((DArrayTy *)*puVar29 != nullptr) {
        st::fn_006AE110((DArrayTy *)*puVar29);
      }
      puVar29 = puVar29 + 1;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    g_currentExceptionFrame = local_2c0.previous;
    ExceptionList = local_14;
    return 0;
  }
  if (local_4c[iVar20] == 0) {
    iVar20 = iVar20 + 1;
    goto LAB_004b3d9a;
  }
  iVar20 = -((int)g_worldGrid.sizeZ * (int)g_worldGrid.planeStride * 2 + 3U & 0xfffffffc);
  local_1c = (st_stack_frame + 20);
  local_27c = (st_stack_frame + 20);
  local_8 = 0xffffffff;
  puVar29 = reinterpret_cast<uint *>((st_stack_frame + 20));
  for (uVar24 = ((int)g_worldGrid.sizeZ * (int)g_worldGrid.planeStride & 0x7fffffffU) >> 1;
      uVar24 != 0; uVar24 = uVar24 - 1) {
    *puVar29 = 0xffffffff;
    puVar29 = puVar29 + 1;
  }
  for (uVar24 = (int)g_worldGrid.sizeZ * (int)g_worldGrid.planeStride * 2 & 3; uVar24 != 0;
      uVar24 = uVar24 - 1) {
    *(undefined1 *)puVar29 = 0xff;
    puVar29 = (undefined4 *)((int)puVar29 + 1);
  }
  if (local_4c[2] != 0) {
    *(undefined4 *)((st_stack_frame + 16) + iVar20) = 10;
    *(undefined4 *)((st_stack_frame + 12) + iVar20) = 0xc;
    *(undefined4 *)((st_stack_frame + 8) + iVar20) = 10;
    *(undefined4 *)((st_stack_frame + 4) + iVar20) = 0;
    *(undefined4 *)((st_stack_frame + 0) + iVar20) = 0x4b3e49;
    pDVar10_mg7 = st::fn_006AE290
                            (*(DArrayTy **)((st_stack_frame + 4) + iVar20),
                             *(uint *)((st_stack_frame + 8) + iVar20),
                             *(uint *)((st_stack_frame + 12) + iVar20),
                             *(uint *)((st_stack_frame + 16) + iVar20));
    local_22c = pDVar10_mg7;
    if ((g_array_007FA16C != nullptr) &&
       (uVar24 = 0, 0 < (int)g_array_007FA16C->count)) {
      do {
        *(STFishC ***)((st_stack_frame + 16) + iVar20) = &local_58;
        *(undefined4 *)((st_stack_frame + 12) + iVar20) = 0x4b3e6f;

        st::fn_006ACC70(reinterpret_cast<DArrayTy *>(g_array_007FA16C),uVar24,*(void **)((st_stack_frame + 16) + iVar20));
        *(short **)((st_stack_frame + 16) + iVar20) = local_a8;
        *(short **)((st_stack_frame + 12) + iVar20) = local_8c;
        *(short **)((st_stack_frame + 8) + iVar20) = local_7c;
        pSVar5 = local_58;
        *(undefined4 *)((st_stack_frame + 4) + iVar20) = 0x4b3e89;
        /* ST_CALLSITE[004B3E84]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        st::fn_004018C5
                  (pSVar5,*(short **)((st_stack_frame + 8) + iVar20),
                   *(short **)((st_stack_frame + 12) + iVar20),*(short **)((st_stack_frame + 16) + iVar20));
        local_144 = (int)local_7c[0];
        local_140 = (int)local_8c[0];
        local_13c = (int)local_a8[0];
        *(int **)((st_stack_frame + 16) + iVar20) = &local_144;
        *(DArrayTy **)((st_stack_frame + 12) + iVar20) = pDVar10_mg7;
        *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b3ece;

        st::fn_006AE1C0
                  (*(DArrayTy **)((st_stack_frame + 12) + iVar20),*(void **)((st_stack_frame + 16) + iVar20));
        uVar24 = uVar24 + 1;
      } while ((int)uVar24 < (int)g_array_007FA16C->count);
    }
    iVar28 = param_2[5];
    if ((iVar28 != 0) && (STField<int>(iVar28,0xC) != 0)) {
      STField<undefined4>(iVar28,0x4) = 0;
      pDVar11 = (DArrayTy *)param_2[5];
      *(undefined4 *)((st_stack_frame + 16) + iVar20) = 0x4b3f01;

      local_EAX_2860 = st::fn_006B1190(pDVar11,reinterpret_cast<byte *>(&local_a0));
      while (-1 < local_EAX_2860) {
        if (local_a0 == 0x3a) {
          local_144 = local_9c;
          local_140 = local_98;
          local_13c = local_94;
          *(int **)((st_stack_frame + 16) + iVar20) = &local_144;
          *(DArrayTy **)((st_stack_frame + 12) + iVar20) = pDVar10_mg7;
          *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b3f57;

          st::fn_006AE1C0
                    (*(DArrayTy **)((st_stack_frame + 12) + iVar20),*(void **)((st_stack_frame + 16) + iVar20)
                    );
        }
        pDVar11 = (DArrayTy *)param_2[5];
        *(undefined4 *)((st_stack_frame + 16) + iVar20) = 0x4b3f65;

        local_EAX_2860 = st::fn_006B1190(pDVar11,reinterpret_cast<byte *>(&local_a0));
      }
    }
  }
  if (local_4c[3] != 0) {
    *(undefined4 *)((st_stack_frame + 16) + iVar20) = 10;
    *(undefined4 *)((st_stack_frame + 12) + iVar20) = 0xc;
    *(undefined4 *)((st_stack_frame + 8) + iVar20) = 10;
    *(undefined4 *)((st_stack_frame + 4) + iVar20) = 0;
    *(undefined4 *)((st_stack_frame + 0) + iVar20) = 0x4b3f81;
    local_184_mg0 =
         st::fn_006AE290
                   (*(DArrayTy **)((st_stack_frame + 4) + iVar20),*(uint *)((st_stack_frame + 8) + iVar20),
                    *(uint *)((st_stack_frame + 12) + iVar20),*(uint *)((st_stack_frame + 16) + iVar20));
    pDVar11 = g_packedRecords_A62x8[param_1].field1968_0x9d6;
    if ((pDVar11 != nullptr) && (uVar24 = 0, 0 < (int)pDVar11->count)) {
      do {
        *(STFishC ***)((st_stack_frame + 16) + iVar20) = &local_58;
        *(undefined4 *)((st_stack_frame + 12) + iVar20) = 0x4b3fbd;

        st::fn_006ACC70(pDVar11,uVar24,*(void **)((st_stack_frame + 16) + iVar20));
        *(short **)((st_stack_frame + 16) + iVar20) = local_a8;
        *(short **)((st_stack_frame + 12) + iVar20) = local_8c;
        *(short **)((st_stack_frame + 8) + iVar20) = local_7c;
        pSVar5 = local_58;
        *(undefined4 *)((st_stack_frame + 4) + iVar20) = 0x4b3fd7;
        /* ST_CALLSITE[004B3FD2]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        st::fn_004018C5
                  (pSVar5,*(short **)((st_stack_frame + 8) + iVar20),
                   *(short **)((st_stack_frame + 12) + iVar20),*(short **)((st_stack_frame + 16) + iVar20));
        local_144 = (int)local_7c[0];
        local_140 = (int)local_8c[0];
        local_13c = (int)local_a8[0];
        *(int **)((st_stack_frame + 16) + iVar20) = &local_144;
        *(DArrayTy **)((st_stack_frame + 12) + iVar20) = local_184_mg0;
        *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b4022;

        st::fn_006AE1C0
                  (*(DArrayTy **)((st_stack_frame + 12) + iVar20),*(void **)((st_stack_frame + 16) + iVar20));
        uVar24 = uVar24 + 1;
        pDVar11 = g_packedRecords_A62x8[param_1].field1968_0x9d6;
      } while ((int)uVar24 < (int)pDVar11->count);
    }
    iVar28 = param_2[5];
    if ((iVar28 != 0) && (STField<int>(iVar28,0xC) != 0)) {
      STField<undefined4>(iVar28,0x4) = 0;
      pDVar11 = (DArrayTy *)param_2[5];
      *(undefined4 *)((st_stack_frame + 16) + iVar20) = 0x4b4055;

      iVar13 = st::fn_006B1190(pDVar11,reinterpret_cast<byte *>(&local_a0));
      while (-1 < iVar13) {
        if (local_a0 == 100) {
          local_144 = local_9c;
          local_140 = local_98;
          local_13c = local_94;
          *(int **)((st_stack_frame + 16) + iVar20) = &local_144;
          *(DArrayTy **)((st_stack_frame + 12) + iVar20) = local_184_mg0;
          *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b40b1;

          st::fn_006AE1C0
                    (*(DArrayTy **)((st_stack_frame + 12) + iVar20),*(void **)((st_stack_frame + 16) + iVar20)
                    );
        }
        pDVar11 = (DArrayTy *)param_2[5];
        *(undefined4 *)((st_stack_frame + 16) + iVar20) = 0x4b40bf;

        iVar13 = st::fn_006B1190(pDVar11,reinterpret_cast<byte *>(&local_a0));
      }
    }
  }
  local_54 = local_4c[10] + local_4c[8] + local_4c[9] + local_4c[7] + local_4c[4] + 5 + local_4c[6];
  *(undefined4 *)((st_stack_frame + 16) + iVar20) = 10;
  *(undefined4 *)((st_stack_frame + 12) + iVar20) = 0x30;
  *(undefined4 *)((st_stack_frame + 8) + iVar20) = 10;
  *(undefined4 *)((st_stack_frame + 4) + iVar20) = 0;
  *(undefined4 *)((st_stack_frame + 0) + iVar20) = 0x4b40eb;
  local_20_mg0 = st::fn_006AE290
                           (*(DArrayTy **)((st_stack_frame + 4) + iVar20),
                            *(uint *)((st_stack_frame + 8) + iVar20),
                            *(uint *)((st_stack_frame + 12) + iVar20),
                            *(uint *)((st_stack_frame + 16) + iVar20));
  local_64 = 0;
  local_114 = 0;
LAB_004b40f9:
  do {
    sVar18 = g_worldGrid.sizeX;
    if (g_worldGrid.sizeX <= g_worldGrid.sizeY) {
      sVar18 = g_worldGrid.sizeY;
    }
    if (sVar18 <= local_64) {
LAB_004b4689:
      *(undefined4 *)(param_2[5] + 4) = 0;
      pDVar11 = (DArrayTy *)param_2[5];
      *(undefined4 *)((st_stack_frame + 16) + iVar20) = 0x4b46a4;

      local_EAX_4815 = st::fn_006B1190(pDVar11,reinterpret_cast<byte *>(&local_a0));
      puVar30 = local_27c;
      pDVar11 = local_22c;
      pDVar25 = local_184_mg0;
      pDVar8 = local_a4;
      GVar17 = local_a0;
      iVar28 = local_9c;
      iVar15 = local_98;
      iVar23 = local_94;
      pSVar5 = local_58;
      pDVar9 = local_20_mg0;
      while (local_27c = puVar30, local_22c = pDVar11, local_184_mg0 = pDVar25, local_a4 = pDVar8,
            local_a0 = GVar17, local_9c = iVar28, local_98 = iVar15, local_94 = iVar23,
            local_58 = pSVar5, local_20_mg0 = pDVar9, -1 < local_EAX_4815) {
        if (*(int *)(&DAT_00791d68 + GVar17 * 4) == 1) {
          uVar24 = 0;
          do {
            uVar21 = uVar24 & 0x80000001;
            if ((int)uVar21 < 0) {
              uVar21 = (uVar21 - 1 | 0xfffffffe) + 1;
            }
            iVar14 = (int)uVar24 / 2 + iVar15;
            *(ushort *)
             (puVar30 +
             (g_worldGrid.sizeX * iVar14 + uVar21 + iVar28 + g_worldGrid.planeStride * iVar23) * 2)
                 = *(ushort *)(&DAT_00790888 + GVar17 * 4) | 0x200;
            uVar24 = uVar24 + 1;
            local_138 = iVar14;
            local_11c = uVar21 + iVar28;
          } while ((int)uVar24 < 4);
        }
        else {
          *(ushort *)
           (puVar30 + (g_worldGrid.planeStride * iVar23 + iVar28 + g_worldGrid.sizeX * iVar15) * 2)
               = *(ushort *)(&DAT_00790888 + GVar17 * 4) | 0x200;
          local_138 = iVar15;
          local_11c = iVar28;
        }
        pDVar11 = (DArrayTy *)param_2[5];
        local_254[0] = iVar23;
        *(undefined4 *)((st_stack_frame + 16) + iVar20) = 0x4b4791;

        local_EAX_4815 = st::fn_006B1190(pDVar11,reinterpret_cast<byte *>(&local_a0));
        puVar30 = local_27c;
        pDVar11 = local_22c;
        pDVar25 = local_184_mg0;
        pDVar8 = local_a4;
        GVar17 = local_a0;
        iVar28 = local_9c;
        iVar15 = local_98;
        iVar23 = local_94;
        pSVar5 = local_58;
        pDVar9 = local_20_mg0;
      }
      iVar28 = 0;
      g_array_007FA150->iteratorIndex = 0;
      *(undefined4 *)((st_stack_frame + 16) + iVar20) = 0x4b47b2;

      local_EAX_5085 = st::fn_006B1190(g_array_007FA150,reinterpret_cast<byte *>(&local_58));
      puVar30 = local_27c;
      pSVar5 = local_58;
      while (local_58 = pSVar5, -1 < local_EAX_5085) {
        if (pSVar5 != nullptr) {
          *(short **)((st_stack_frame + 16) + iVar20) = local_a8;
          *(short **)((st_stack_frame + 12) + iVar20) = local_8c;
          *(short **)((st_stack_frame + 8) + iVar20) = local_7c;
          *(undefined4 *)((st_stack_frame + 4) + iVar20) = 0x4b47da;
          /* ST_CALLSITE[004B47D5]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
          st::fn_004018C5
                    (pSVar5,*(short **)((st_stack_frame + 8) + iVar20),
                     *(short **)((st_stack_frame + 12) + iVar20),*(short **)((st_stack_frame + 16) + iVar20));
          iVar15 = (int)local_8c[0] * (int)g_worldGrid.sizeX +
                   (int)g_worldGrid.planeStride * (int)local_a8[0] + (int)local_7c[0];
          sVar19 = *(short *)(puVar30 + iVar15 * 2);
          if ((sVar19 == 0) || (sVar19 == -1)) {
            *(undefined2 *)(puVar30 + iVar15 * 2) = 0x80;
          }
        }
        *(undefined4 *)((st_stack_frame + 16) + iVar20) = 0x4b4828;

        local_EAX_5085 = st::fn_006B1190(g_array_007FA150,reinterpret_cast<byte *>(&local_58));
        pSVar5 = local_58;
      }
      if ((local_4c[4] != 0) || (local_4c[5] != 0)) {
        *(undefined4 *)(param_2[3] + 4) = 0;
        pDVar11 = (DArrayTy *)param_2[3];
        *(undefined4 *)((st_stack_frame + 16) + iVar20) = 0x4b484d;

        local_EAX_5240 = st::fn_006B1190(pDVar11,reinterpret_cast<byte *>(local_108));
        while (-1 < local_EAX_5240) {
          if (*(int *)(&DAT_00790888 + local_108[0] * 4) == 4) {
            memset(local_f4, 0, 0x30); /* compiler bulk-zero initialization */
            local_f4[0] = 0;
            *(int **)((st_stack_frame + 16) + iVar20) = local_f4;
            *(DArrayTy **)((st_stack_frame + 12) + iVar20) = local_20_mg0;
            *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b4886;

            st::fn_006AE1C0
                      (*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                       *(void **)((st_stack_frame + 16) + iVar20));
          }
          pDVar11 = (DArrayTy *)param_2[3];
          *(undefined4 *)((st_stack_frame + 16) + iVar20) = 0x4b4894;

          local_EAX_5240 = st::fn_006B1190(pDVar11,reinterpret_cast<byte *>(local_108));
        }
      }
      local_5c = 0;
      local_26c = 0;
      local_274 = 0;
      local_60 = 0;
      while( true ) {
        local_64 = iVar28;
        temp_3f7606bb67 = g_worldGrid.sizeX;
        if (g_worldGrid.sizeX <= g_worldGrid.sizeY) {
          temp_3f7606bb67 = g_worldGrid.sizeY;
        }
        if (temp_3f7606bb67 <= iVar28) break;
cf_continue_loop_004B48CC:
        for (local_74 = 0; local_74 < local_64 * 8; local_74 = local_74 + 1) {
          if (local_74 < local_64 * 2) {
            local_11c = (*param_2 - local_64) + local_74;
            local_138 = param_2[1] - local_64;
LAB_004b4958:
          }
          else {
            if (local_64 * 4 <= local_74) {
              if (local_74 < local_64 * 6) {
                local_11c = (local_64 * 5 - local_74) + *param_2;
                local_138 = param_2[1] + local_64;
              }
              else {
                local_11c = *param_2 - local_64;
                local_138 = (local_64 * 7 + param_2[1]) - local_74;
              }
              goto LAB_004b4958;
            }
            local_11c = local_64 + *param_2;
            local_138 = param_2[1] + local_64 * -3 + local_74;
          }
          if ((((-1 < local_11c) && (local_11c < g_worldGrid.sizeX)) && (-1 < local_138)) &&
             (local_138 < g_worldGrid.sizeY)) {
            local_254[0] = 0;
            if (g_worldGrid.sizeZ != 1 && -1 < g_worldGrid.sizeZ + -1) {
LAB_004b49b4:
              iVar23 = (int)g_worldGrid.planeStride;
              iVar14 = iVar23 * local_254[0];
              iVar28 = g_worldGrid.sizeX * local_138;
              iVar15 = iVar28 + iVar14 + local_11c;
              if (*(short *)(local_27c + iVar15 * 2) != -1) {
                if ((*(short *)(local_27c + iVar15 * 2) == 0) &&
                   (*(short *)(local_27c + ((local_254[0] + 1) * iVar23 + iVar28 + local_11c) * 2)
                    == 0)) {
                  local_124 = 0;
                  if ((local_10c != 0) &&
                     (local_118 = iVar15 + 1, *(short *)(local_27c + local_118 * 2) == 0)) {
                    iVar15 = (local_138 + 1) * (int)g_worldGrid.sizeX + iVar14 + local_11c;
                    local_118 = iVar15;
                    if ((*(short *)(local_27c + iVar15 * 2) == 0) &&
                       (local_118 = iVar15 + 1, *(short *)(local_27c + (iVar15 + 1) * 2) == 0)) {
                      local_124 = 1;
                    }
                  }
                  if (local_254[0] < 1) {
                    bVar31 = true;
                  }
                  else {
                    iVar23 = (local_254[0] + -1) * iVar23;
                    iVar28 = iVar23 + iVar28 + local_11c;
                    local_118 = iVar28;
                    bVar31 = *(short *)(local_27c + iVar28 * 2) == 0x20;
                    if (!bVar31) goto cf_continue_loop_004B5FB6;
                    if ((local_10c != 0) && (local_124 != 0)) {
                      local_124 = 0;
                      local_118 = iVar28 + 1;
                      if (*(short *)(local_27c + (iVar28 + 1) * 2) == 0x20) {
                        iVar28 = (local_138 + 1) * (int)g_worldGrid.sizeX + iVar23 + local_11c;
                        local_118 = iVar28;
                        if ((*(short *)(local_27c + iVar28 * 2) == 0x20) &&
                           (local_118 = iVar28 + 1, *(short *)(local_27c + (iVar28 + 1) * 2) == 0x20
                           )) {
                          local_124 = 1;
                        }
                      }
                    }
                  }
                  iVar28 = local_118;
                  if (bVar31) {
                    local_80 = 1;
                    iVar15 = 0;
                    do {
                      if (iVar15 != 4) {
                        iVar23 = iVar15 / 3 + -1 + local_138;
                        iVar16 = iVar15 % 3 + -1 + local_11c;
                        if ((((-1 < iVar23) && (iVar23 < g_worldGrid.sizeY)) && (-1 < iVar16)) &&
                           (((iVar16 < g_worldGrid.sizeX &&
                             (sVar19 = *(short *)(local_27c +
                                                 (iVar23 * g_worldGrid.sizeX + iVar16 + iVar14) * 2)
                             , sVar19 != 0)) && ((sVar19 != 0x10 && (sVar19 != 0x20)))))) {
                          bVar31 = false;
                          goto LAB_004b4bd1;
                        }
                      }
                      iVar15 = iVar15 + 1;
                    } while (iVar15 < 9);
                    bVar31 = true;
LAB_004b4bd1:
                    if (bVar31) {
                      *(uint *)((st_stack_frame + 16) + iVar20) = param_1;
                      *(undefined4 *)((st_stack_frame + 12) + iVar20) = 0x4b4be8;
                      /* ST_CALLSITE[004B4BE3]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
                      bVar8 = st::fn_004049B7(static_cast<char>(st::machine_word_boundary_cast<uint>(((st_stack_frame + 16))[iVar20])));
                      pDVar25 = local_184_mg0;
                      pDVar11 = local_22c;
                      local_270 = 0;
                      if (bVar8 == 3) {
                        if (local_4c[3] != 0) {
                          if ((local_184_mg0 == nullptr) || (local_184_mg0->count == 0)) {
                            local_270 = 1;
                          }
                          else {
                            local_270 = 1;
                            uVar24 = 0;
                            if (0 < (int)local_184_mg0->count) {
                              do {
                                *(int **)((st_stack_frame + 16) + iVar20) = &local_144;
                                *(undefined4 *)((st_stack_frame + 12) + iVar20) = 0x4b4daa;

                                st::fn_006ACC70(pDVar25,uVar24,
                                                 *(void **)((st_stack_frame + 16) + iVar20));
                                uVar21 = local_144 - local_11c >> 0x1f;
                                if ((st::storage_bit_cast<int>(static_cast<uint32_t>((local_144 - local_11c ^ uVar21) - uVar21)) < 0x10) ||
                                   (uVar21 = local_140 - local_138 >> 0x1f,
                                   st::storage_bit_cast<int>(static_cast<uint32_t>((local_140 - local_138 ^ uVar21) - uVar21)) < 0x10)) {
                                  local_270 = 0;
                                  break;
                                }
                                uVar24 = uVar24 + 1;
                              } while ((int)uVar24 < (int)pDVar25->count);
                            }
                          }
                        }
                      }
                      else if (local_4c[2] != 0) {
                        if ((local_22c != nullptr) && (local_22c->count != 0)) {
                          iVar15 = -1;
                          uVar24 = 0;
                          if (0 < (int)local_22c->count) {
                            do {
                              *(int **)((st_stack_frame + 16) + iVar20) = &local_144;
                              *(undefined4 *)((st_stack_frame + 12) + iVar20) = 0x4b4c2b;

                              st::fn_006ACC70(pDVar11,uVar24,*(void **)((st_stack_frame + 16) + iVar20));
                              *(int *)((st_stack_frame + 16) + iVar20) = local_140;
                              *(int *)((st_stack_frame + 12) + iVar20) = local_144;
                              *(int *)((st_stack_frame + 8) + iVar20) = local_138;
                              *(int *)((st_stack_frame + 4) + iVar20) = local_11c;
                              *(undefined4 *)((st_stack_frame + 0) + iVar20) = 0x4b4c4c;

                              local_EAX_6263 =
                                   st::fn_006ACED8(*(int *)((st_stack_frame + 4) + iVar20),
                                                *(int *)((st_stack_frame + 8) + iVar20),
                                                *(int *)((st_stack_frame + 12) + iVar20),
                                                *(int *)((st_stack_frame + 16) + iVar20));
                              if ((iVar15 < 0) || (local_EAX_6263 < iVar15)) {
                                iVar15 = local_EAX_6263;
                              }
                              uVar24 = uVar24 + 1;
                            } while ((int)uVar24 < (int)pDVar11->count);
                          }
                          if ((-1 < iVar15) && (iVar28 = local_118, iVar15 < 0xe))
                          goto LAB_004b4c78;
                        }
                        local_270 = 1;
                        iVar28 = local_118;
                      }
LAB_004b4c78:
                      if (local_270 == 0) {
LAB_004b4c99:
                        if (local_10c == 0) goto LAB_004b4e09;
                        if (local_124 != 0) {
                          uVar24 = 0;
                          do {
                            if ((((uVar24 != 4) && (uVar24 != 5)) && (uVar24 != 8)) && (uVar24 != 9)
                               ) {
                              iVar15 = (STSignedDiv4(uVar24)) + -1 +
                                       local_138;
                              uVar21 = uVar24 & 0x80000003;
                              if ((int)uVar21 < 0) {
                                uVar21 = (uVar21 - 1 | 0xfffffffc) + 1;
                              }
                              iVar23 = (uVar21 - 1) + local_11c;
                              if (((-1 < iVar15) && (iVar15 < g_worldGrid.sizeY)) && (-1 < iVar23))
                              {
                                if (((iVar23 < g_worldGrid.sizeX) &&
                                    (sVar19 = *(short *)(local_27c +
                                                        (iVar15 * g_worldGrid.sizeX +
                                                        iVar23 + g_worldGrid.planeStride *
                                                                 local_254[0]) * 2), sVar19 != 0))
                                   && ((sVar19 != 0x10 && (sVar19 != 0x20)))) {
                                  local_124 = 0;
                                  break;
                                }
                              }
                            }
                            uVar24 = uVar24 + 1;
                          } while ((int)uVar24 < 0x10);
                          goto LAB_004b4e09;
                        }
LAB_004b4f55:
                        uVar24 = 0;
                      }
                      else {
                        *(uint *)((st_stack_frame + 16) + iVar20) = param_1;
                        *(undefined4 *)((st_stack_frame + 12) + iVar20) = 0x4b4c91;
                        /* ST_CALLSITE[004B4C8C]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
                        local_AL_6332 = st::fn_004049B7(static_cast<char>(st::machine_word_boundary_cast<uint>(((st_stack_frame + 16))[iVar20])));
                        if (local_AL_6332 == 3) goto LAB_004b4c99;
LAB_004b4e09:
                        if ((local_124 == 0) || (local_4c[4] == 0)) goto LAB_004b4f55;
                        iVar15 = 0;
                        local_12c = 0;
                        do {
                          iVar23 = iVar15 / 6;
                          if ((((iVar23 == 0) || (iVar23 == 5)) || (iVar15 % 6 == 0)) ||
                             (iVar15 % 6 == 5)) {
                            iVar23 = iVar23 + -2 + local_138;
                            iVar14 = iVar15 % 6 + -2 + local_11c;
                            if (((-1 < iVar23) && (iVar23 < g_worldGrid.sizeY)) && (-1 < iVar14)) {
                              if (iVar14 < g_worldGrid.sizeX) {
                                iVar23 = iVar23 * g_worldGrid.sizeX;
                                iVar16 = g_worldGrid.planeStride * local_254[0] + iVar23 + iVar14;
                                if (0 < local_254[0]) {
                                  iVar28 = (local_254[0] + -1) * (int)g_worldGrid.planeStride +
                                           iVar23 + iVar14;
                                  local_118 = iVar28;
                                }
                                if ((*(short *)(local_27c + iVar16 * 2) == 0) &&
                                   ((local_254[0] == 0 ||
                                    (*(short *)(local_27c + iVar28 * 2) == 0x20)))) {
LAB_004b4f35:
                                  local_12c = local_12c + 1;
                                }
                                else if (*(short *)(local_27c + iVar16 * 2) == 0x205) {
                                  pSVar5 = reinterpret_cast<STFishC *>(g_worldGrid.cells[iVar16].objects[0]);
                                  local_58 = pSVar5;
                                  if (pSVar5 != nullptr) {
                                    pvVar6 = pSVar5->vtable->vfunc_2C;
                                    *(undefined4 *)((st_stack_frame + 16) + iVar20) = 0x4b4f16;
                                    /* ST_CALLSITE[004B4F13]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STFishC */
                                    dVar13 = (*pvVar6)(pSVar5);
                                    pSVar5 = local_58;
                                    if (0x53 < (int)dVar13) {
                                      pvVar6 = local_58->vtable->vfunc_2C;
                                      *(undefined4 *)((st_stack_frame + 16) + iVar20) = 0x4b4f23;
                                      /* ST_CALLSITE[004B4F20]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STFishC */
                                      dVar13 = (*pvVar6)(pSVar5);
                                      if (((int)dVar13 < 0x5b) &&
                                         (*(int *)&local_58[2].field_0xfd == 0)) goto LAB_004b4f35;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          iVar15 = iVar15 + 1;
                        } while (iVar15 < 0x24);
                        uVar24 = (uint)(6 < local_12c);
                      }
                      local_268 = uVar24;
                      if ((local_4c[4] == 0) || (uVar24 != 0)) {
                        if ((local_124 == 0) || (local_10c == 0)) {
                          iVar28 = 0;
                        }
                        else {
                          iVar28 = 1;
                        }
                        *(undefined4 *)(param_2[3] + 4) = 0;
                        pDVar11 = (DArrayTy *)param_2[3];
                        local_ac = iVar28;
                        *(undefined4 *)((st_stack_frame + 16) + iVar20) = 0x4b4faa;

                        iVar27 = st::fn_006B1190(pDVar11,reinterpret_cast<byte *>(local_108));
                        pDVar11 = local_20_mg0;
                        while (local_20_mg0 = pDVar11, -1 < iVar27) {
                          iVar15 = *(int *)(&DAT_00790888 + local_108[0] * 4);
                          if (iVar15 == 4) {
                            if ((uVar24 == 0) ||
                               (*(int *)(&DAT_00791d68 + local_108[0] * 4) != iVar28))
                            goto cf_common_join_004B5648;
                            local_a0 = local_108[0];
                            local_90 = local_f8;
                            local_9c = local_11c;
                            local_98 = local_138;
                            local_94 = local_254[0];
                            *(Global_sub_004B1120_param_2Enum **)((st_stack_frame + 16) + iVar20) =
                                 &local_a0;
                            *(int *)((st_stack_frame + 12) + iVar20) = param_2[5];
                            *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b56cf;

                            st::fn_006AE1C0
                                      (*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                                       *(void **)((st_stack_frame + 16) + iVar20));
                            iVar28 = param_2[3];
                            *(int *)((st_stack_frame + 16) + iVar20) = STField<int>(iVar28,0x4) + -1;
                            *(int *)((st_stack_frame + 12) + iVar20) = iVar28;
                            *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b56dd;

                            st::fn_006B0C70(*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                                           *(uint *)((st_stack_frame + 16) + iVar20));
                            pDVar11->iteratorIndex = 0;
                            goto LAB_004b56e4;
                          }
                          if (local_4c[4] != 0) goto cf_common_join_004B5648;
                          if (((iVar15 == 1) || (iVar15 == 6)) || ((iVar15 == 2 || (iVar15 == 3))))
                          {
                            *(uint *)((st_stack_frame + 16) + iVar20) = param_1;
                            *(undefined4 *)((st_stack_frame + 12) + iVar20) = 0x4b55e5;
                            /* ST_CALLSITE[004B55E0]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
                            local_AL_8720 = st::fn_004049B7(static_cast<char>(st::machine_word_boundary_cast<uint>(((st_stack_frame + 16))[iVar20])));
                            GVar17 = (-(uint)(local_AL_8720 != 3) & 0xffffffd6) + 100;
                            if (local_270 != 0) {
                              if (local_108[0] == GVar17) goto LAB_004b5614;
                              goto cf_common_join_004B5648;
                            }
                            if (local_108[0] == GVar17) goto cf_common_join_004B5648;
LAB_004b5614:
                            if (local_270 == 0) {
LAB_004b5635:
                              if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != iVar28)
                              goto cf_common_join_004B5648;
                            }
                            else {
                              *(uint *)((st_stack_frame + 16) + iVar20) = param_1;
                              *(undefined4 *)((st_stack_frame + 12) + iVar20) = 0x4b562d;
                              /* ST_CALLSITE[004B5628]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
                              local_AL_8792 = st::fn_004049B7(static_cast<char>(st::machine_word_boundary_cast<uint>(((st_stack_frame + 16))[iVar20])));
                              if (local_AL_8792 == 3) goto LAB_004b5635;
                            }
                            local_a0 = local_108[0];
                            local_90 = local_f8;
                            local_9c = local_11c;
                            local_98 = local_138;
                            local_94 = local_254[0];
                            *(Global_sub_004B1120_param_2Enum **)((st_stack_frame + 16) + iVar20) =
                                 &local_a0;
                            *(int *)((st_stack_frame + 12) + iVar20) = param_2[5];
                            *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b5e20;

                            st::fn_006AE1C0
                                      (*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                                       *(void **)((st_stack_frame + 16) + iVar20));
                            iVar28 = param_2[3];
                            *(int *)((st_stack_frame + 16) + iVar20) = STField<int>(iVar28,0x4) + -1;
                            *(int *)((st_stack_frame + 12) + iVar20) = iVar28;
                            *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b5e2e;

                            st::fn_006B0C70(*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                                           *(uint *)((st_stack_frame + 16) + iVar20));
                            if (local_108[0] == 0x3a) {
                              local_4c[2] = local_4c[2] + -1;
                              local_144 = local_11c;
                              local_140 = local_138;
                              local_13c = local_254[0];
                              *(int **)((st_stack_frame + 16) + iVar20) = &local_144;
                              *(DArrayTy **)((st_stack_frame + 12) + iVar20) = local_22c;
                              *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b5e87;

                              st::fn_006AE1C0
                                        (*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                                         *(void **)((st_stack_frame + 16) + iVar20));
                            }
                            else if (local_108[0] == 100) {
                              local_4c[3] = local_4c[3] + -1;
                              local_144 = local_11c;
                              local_140 = local_138;
                              local_13c = local_254[0];
                              *(int **)((st_stack_frame + 16) + iVar20) = &local_144;
                              *(DArrayTy **)((st_stack_frame + 12) + iVar20) = local_184_mg0;
                              *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b5ee2;

                              st::fn_006AE1C0
                                        (*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                                         *(void **)((st_stack_frame + 16) + iVar20));
                            }
                            else if ((*(int *)(&DAT_00790888 + local_108[0] * 4) == 1) &&
                                    (local_4c[1] != 0)) {
                              local_4c[1] = local_4c[1] + -1;
                            }
                            else {
                              local_4c[6] = local_4c[6] + -1;
                            }
                            if (*(int *)(&DAT_00791d68 + local_108[0] * 4) == 1) {
                              local_10c = local_10c + -1;
                              uVar24 = 0;
                              do {
                                uVar21 = uVar24 & 0x80000001;
                                if ((int)uVar21 < 0) {
                                  uVar21 = (uVar21 - 1 | 0xfffffffe) + 1;
                                }
                                *(ushort *)
                                 (local_27c +
                                 (uVar21 + g_worldGrid.planeStride * local_254[0] + local_11c +
                                           ((int)uVar24 / 2 + local_138) * (int)g_worldGrid.sizeX) *
                                 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                uVar24 = uVar24 + 1;
                              } while ((int)uVar24 < 4);
                            }
                            else {
LAB_004b5f7b:
                              *(ushort *)
                               (local_27c +
                               (g_worldGrid.sizeX * local_138 +
                               local_11c + g_worldGrid.planeStride * local_254[0]) * 2) =
                                   *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                            }
                            break;
                          }
                          if ((local_4c[6] != 0) || (local_4c[1] != 0))
                          goto cf_common_join_004B5648;
                          if (local_60 == 0) {
                            local_64 = local_64 + -5;
                            if (local_64 < 0) {
                              local_64 = 0;
                            }
                            local_60 = 1;
                            goto cf_continue_loop_004B48CC;
                          }
                          if (iVar15 == 7) {
                            if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != iVar28)
                            goto cf_common_join_004B5648;
                            pDVar11 = (DArrayTy *)aiStack_314[local_108[0]];
                            if ((pDVar11 == nullptr) || (pDVar11->count == 0)) {
LAB_004b50f4:
                              bVar31 = true;
                            }
                            else {
                              bVar31 = false;
                              iVar28 = -1;
                              uVar24 = 0;
                              if (0 < (int)pDVar11->count) {
                                do {
                                  *(int **)((st_stack_frame + 16) + iVar20) = &local_144;
                                  *(undefined4 *)((st_stack_frame + 12) + iVar20) = 0x4b508a;

                                  st::fn_006ACC70(pDVar11,uVar24,
                                                   *(void **)((st_stack_frame + 16) + iVar20));
                                  *(int *)((st_stack_frame + 16) + iVar20) = local_140;
                                  *(int *)((st_stack_frame + 12) + iVar20) = local_144;
                                  *(int *)((st_stack_frame + 8) + iVar20) = local_138;
                                  *(int *)((st_stack_frame + 4) + iVar20) = local_11c;
                                  *(undefined4 *)((st_stack_frame + 0) + iVar20) = 0x4b50ab;

                                  local_EAX_7382 =
                                       st::fn_006ACED8(*(int *)((st_stack_frame + 4) + iVar20),
                                                    *(int *)((st_stack_frame + 8) + iVar20),
                                                    *(int *)((st_stack_frame + 12) + iVar20),
                                                    *(int *)((st_stack_frame + 16) + iVar20));
                                  if ((iVar28 < 0) || (local_EAX_7382 < iVar28)) {
                                    iVar28 = local_EAX_7382;
                                  }
                                  uVar24 = uVar24 + 1;
                                  pDVar11 = (DArrayTy *)aiStack_314[local_108[0]];
                                } while ((int)uVar24 < (int)pDVar11->count);
                              }
                              if ((iVar28 < 0) ||
                                 ((*(int *)(&DAT_00794fe4 + local_108[0] * 4) * 3) / 0x192 < iVar28)
                                 ) goto LAB_004b50f4;
                            }
                            if (bVar31) {
                              local_a0 = local_108[0];
                              local_90 = local_f8;
                              local_9c = local_11c;
                              local_98 = local_138;
                              local_94 = local_254[0];
                              *(Global_sub_004B1120_param_2Enum **)((st_stack_frame + 16) + iVar20) =
                                   &local_a0;
                              *(int *)((st_stack_frame + 12) + iVar20) = param_2[5];
                              *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b5836;

                              st::fn_006AE1C0
                                        (*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                                         *(void **)((st_stack_frame + 16) + iVar20));
                              iVar28 = param_2[3];
                              *(int *)((st_stack_frame + 16) + iVar20) = STField<int>(iVar28,0x4) + -1;
                              *(int *)((st_stack_frame + 12) + iVar20) = iVar28;
                              *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b5844;

                              st::fn_006B0C70(*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                                             *(uint *)((st_stack_frame + 16) + iVar20));
                              piVar18 = aiStack_314 + local_108[0];
                              if (*piVar18 == 0) {
                                piVar18 = aiStack_314 + local_108[0];
                                *(undefined4 *)((st_stack_frame + 16) + iVar20) = 10;
                                *(undefined4 *)((st_stack_frame + 12) + iVar20) = 0xc;
                                *(undefined4 *)((st_stack_frame + 8) + iVar20) = 10;
                                *(undefined4 *)((st_stack_frame + 4) + iVar20) = 0;
                                *(undefined4 *)((st_stack_frame + 0) + iVar20) = 0x4b586a;
                                pDVar10_mgE = st::fn_006AE290
                                                        (*(DArrayTy **)((st_stack_frame + 4) + iVar20),
                                                         *(uint *)((st_stack_frame + 8) + iVar20),
                                                         *(uint *)((st_stack_frame + 12) + iVar20),
                                                         *(uint *)((st_stack_frame + 16) + iVar20));
                                *piVar18 = (int)pDVar10_mgE;
                              }
                              local_144 = local_11c;
                              local_140 = local_138;
                              local_13c = local_254[0];
                              *(int **)((st_stack_frame + 16) + iVar20) = &local_144;
                              *(int *)((st_stack_frame + 12) + iVar20) = *piVar18;
                              *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b58b3;

                              st::fn_006AE1C0
                                        (*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                                         *(void **)((st_stack_frame + 16) + iVar20));
                              local_4c[7] = local_4c[7] + -1;
                              if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != 1)
                              goto LAB_004b5f7b;
                              local_10c = local_10c + -1;
                              uVar24 = 0;
                              do {
                                uVar21 = uVar24 & 0x80000001;
                                if ((int)uVar21 < 0) {
                                  uVar21 = (uVar21 - 1 | 0xfffffffe) + 1;
                                }
                                *(ushort *)
                                 (local_27c +
                                 (uVar21 + g_worldGrid.planeStride * local_254[0] + local_11c +
                                           ((int)uVar24 / 2 + local_138) * (int)g_worldGrid.sizeX) *
                                 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                uVar24 = uVar24 + 1;
                              } while ((int)uVar24 < 4);
                              break;
                            }
                          }
                          if (local_4c[7] != 0) goto cf_common_join_004B5648;
                          if (local_274 == 0) {
                            local_64 = local_64 + -2;
                            if (local_64 < 0) {
                              local_64 = 0;
                            }
                            local_274 = 1;
                            goto cf_continue_loop_004B48CC;
                          }
                          if (*(int *)(&DAT_00790888 + local_108[0] * 4) == 8) {
                            if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != local_ac)
                            goto cf_common_join_004B5648;
                            pDVar11 = (DArrayTy *)aiStack_314[local_108[0]];
                            if ((pDVar11 == nullptr) || (pDVar11->count == 0)) {
LAB_004b51da:
                              bVar31 = true;
                            }
                            else {
                              bVar31 = false;
                              iVar28 = -1;
                              uVar24 = 0;
                              if (0 < (int)pDVar11->count) {
                                do {
                                  *(int **)((st_stack_frame + 16) + iVar20) = &local_144;
                                  *(undefined4 *)((st_stack_frame + 12) + iVar20) = 0x4b5170;

                                  st::fn_006ACC70(pDVar11,uVar24,
                                                   *(void **)((st_stack_frame + 16) + iVar20));
                                  *(int *)((st_stack_frame + 16) + iVar20) = local_140;
                                  *(int *)((st_stack_frame + 12) + iVar20) = local_144;
                                  *(int *)((st_stack_frame + 8) + iVar20) = local_138;
                                  *(int *)((st_stack_frame + 4) + iVar20) = local_11c;
                                  *(undefined4 *)((st_stack_frame + 0) + iVar20) = 0x4b5191;

                                  local_EAX_7612 =
                                       st::fn_006ACED8(*(int *)((st_stack_frame + 4) + iVar20),
                                                    *(int *)((st_stack_frame + 8) + iVar20),
                                                    *(int *)((st_stack_frame + 12) + iVar20),
                                                    *(int *)((st_stack_frame + 16) + iVar20));
                                  if ((iVar28 < 0) || (local_EAX_7612 < iVar28)) {
                                    iVar28 = local_EAX_7612;
                                  }
                                  uVar24 = uVar24 + 1;
                                  pDVar11 = (DArrayTy *)aiStack_314[local_108[0]];
                                } while ((int)uVar24 < (int)pDVar11->count);
                              }
                              if ((iVar28 < 0) ||
                                 ((*(int *)(&DAT_00794fe4 + local_108[0] * 4) * 3) / 0x192 < iVar28)
                                 ) goto LAB_004b51da;
                            }
                            if (bVar31) {
                              local_a0 = local_108[0];
                              local_90 = local_f8;
                              local_9c = local_11c;
                              local_98 = local_138;
                              local_94 = local_254[0];
                              *(Global_sub_004B1120_param_2Enum **)((st_stack_frame + 16) + iVar20) =
                                   &local_a0;
                              *(int *)((st_stack_frame + 12) + iVar20) = param_2[5];
                              *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b59a3;

                              st::fn_006AE1C0
                                        (*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                                         *(void **)((st_stack_frame + 16) + iVar20));
                              iVar28 = param_2[3];
                              *(int *)((st_stack_frame + 16) + iVar20) = STField<int>(iVar28,0x4) + -1;
                              *(int *)((st_stack_frame + 12) + iVar20) = iVar28;
                              *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b59b1;

                              st::fn_006B0C70(*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                                             *(uint *)((st_stack_frame + 16) + iVar20));
                              piVar18 = aiStack_314 + local_108[0];
                              if (*piVar18 == 0) {
                                piVar18 = aiStack_314 + local_108[0];
                                *(undefined4 *)((st_stack_frame + 16) + iVar20) = 10;
                                *(undefined4 *)((st_stack_frame + 12) + iVar20) = 0xc;
                                *(undefined4 *)((st_stack_frame + 8) + iVar20) = 10;
                                *(undefined4 *)((st_stack_frame + 4) + iVar20) = 0;
                                *(undefined4 *)((st_stack_frame + 0) + iVar20) = 0x4b59d7;
                                pDVar10_mg10 = st::fn_006AE290
                                                         (*(DArrayTy **)((st_stack_frame + 4) + iVar20),
                                                          *(uint *)((st_stack_frame + 8) + iVar20),
                                                          *(uint *)((st_stack_frame + 12) + iVar20),
                                                          *(uint *)((st_stack_frame + 16) + iVar20));
                                *piVar18 = (int)pDVar10_mg10;
                              }
                              local_144 = local_11c;
                              local_140 = local_138;
                              local_13c = local_254[0];
                              *(int **)((st_stack_frame + 16) + iVar20) = &local_144;
                              *(int *)((st_stack_frame + 12) + iVar20) = *piVar18;
                              *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b5a20;

                              st::fn_006AE1C0
                                        (*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                                         *(void **)((st_stack_frame + 16) + iVar20));
                              local_4c[8] = local_4c[8] + -1;
                              if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != 1)
                              goto LAB_004b5f7b;
                              local_10c = local_10c + -1;
                              uVar24 = 0;
                              do {
                                uVar21 = uVar24 & 0x80000001;
                                if ((int)uVar21 < 0) {
                                  uVar21 = (uVar21 - 1 | 0xfffffffe) + 1;
                                }
                                *(ushort *)
                                 (local_27c +
                                 (uVar21 + g_worldGrid.planeStride * local_254[0] + local_11c +
                                           ((int)uVar24 / 2 + local_138) * (int)g_worldGrid.sizeX) *
                                 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                uVar24 = uVar24 + 1;
                              } while ((int)uVar24 < 4);
                              break;
                            }
                          }
                          if (local_4c[8] != 0) goto cf_common_join_004B5648;
                          if (local_26c == 0) {
                            local_64 = local_64 + -2;
                            if (local_64 < 0) {
                              local_64 = 0;
                            }
                            local_26c = 1;
                            goto cf_continue_loop_004B48CC;
                          }
                          if (*(int *)(&DAT_00790888 + local_108[0] * 4) == 9) {
                            if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != local_ac)
                            goto cf_common_join_004B5648;
                            pDVar11 = (DArrayTy *)aiStack_314[local_108[0]];
                            if ((pDVar11 == nullptr) || (pDVar11->count == 0)) {
LAB_004b52b6:
                              bVar31 = true;
                            }
                            else {
                              bVar31 = false;
                              iVar28 = -1;
                              uVar24 = 0;
                              if (0 < (int)pDVar11->count) {
                                do {
                                  *(int **)((st_stack_frame + 16) + iVar20) = &local_144;
                                  *(undefined4 *)((st_stack_frame + 12) + iVar20) = 0x4b5252;

                                  st::fn_006ACC70(pDVar11,uVar24,
                                                   *(void **)((st_stack_frame + 16) + iVar20));
                                  *(int *)((st_stack_frame + 16) + iVar20) = local_140;
                                  *(int *)((st_stack_frame + 12) + iVar20) = local_144;
                                  *(int *)((st_stack_frame + 8) + iVar20) = local_138;
                                  *(int *)((st_stack_frame + 4) + iVar20) = local_11c;
                                  *(undefined4 *)((st_stack_frame + 0) + iVar20) = 0x4b5273;

                                  local_EAX_7838 =
                                       st::fn_006ACED8(*(int *)((st_stack_frame + 4) + iVar20),
                                                    *(int *)((st_stack_frame + 8) + iVar20),
                                                    *(int *)((st_stack_frame + 12) + iVar20),
                                                    *(int *)((st_stack_frame + 16) + iVar20));
                                  if ((iVar28 < 0) || (local_EAX_7838 < iVar28)) {
                                    iVar28 = local_EAX_7838;
                                  }
                                  uVar24 = uVar24 + 1;
                                  pDVar11 = (DArrayTy *)aiStack_314[local_108[0]];
                                } while ((int)uVar24 < (int)pDVar11->count);
                              }
                              if ((local_108[0] == 0x69) || (local_108[0] == 0x6a)) {
                                iVar15 = 10;
                              }
                              else {
                                iVar15 = 0;
                              }
                              if ((iVar28 < 0) || (st::storage_bit_cast<int>(static_cast<uint32_t>((uint)(iVar15 * 3) / 2)) < iVar28))
                              goto LAB_004b52b6;
                            }
                            if (bVar31) {
                              local_a0 = local_108[0];
                              local_90 = local_f8;
                              local_9c = local_11c;
                              local_98 = local_138;
                              local_94 = local_254[0];
                              *(Global_sub_004B1120_param_2Enum **)((st_stack_frame + 16) + iVar20) =
                                   &local_a0;
                              *(int *)((st_stack_frame + 12) + iVar20) = param_2[5];
                              *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b5b10;

                              st::fn_006AE1C0
                                        (*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                                         *(void **)((st_stack_frame + 16) + iVar20));
                              iVar28 = param_2[3];
                              *(int *)((st_stack_frame + 16) + iVar20) = STField<int>(iVar28,0x4) + -1;
                              *(int *)((st_stack_frame + 12) + iVar20) = iVar28;
                              *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b5b1e;

                              st::fn_006B0C70(*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                                             *(uint *)((st_stack_frame + 16) + iVar20));
                              piVar18 = aiStack_314 + local_108[0];
                              if (*piVar18 == 0) {
                                piVar18 = aiStack_314 + local_108[0];
                                *(undefined4 *)((st_stack_frame + 16) + iVar20) = 10;
                                *(undefined4 *)((st_stack_frame + 12) + iVar20) = 0xc;
                                *(undefined4 *)((st_stack_frame + 8) + iVar20) = 10;
                                *(undefined4 *)((st_stack_frame + 4) + iVar20) = 0;
                                *(undefined4 *)((st_stack_frame + 0) + iVar20) = 0x4b5b44;
                                pDVar10_mg12 = st::fn_006AE290
                                                         (*(DArrayTy **)((st_stack_frame + 4) + iVar20),
                                                          *(uint *)((st_stack_frame + 8) + iVar20),
                                                          *(uint *)((st_stack_frame + 12) + iVar20),
                                                          *(uint *)((st_stack_frame + 16) + iVar20));
                                *piVar18 = (int)pDVar10_mg12;
                              }
                              local_144 = local_11c;
                              local_140 = local_138;
                              local_13c = local_254[0];
                              *(int **)((st_stack_frame + 16) + iVar20) = &local_144;
                              *(int *)((st_stack_frame + 12) + iVar20) = *piVar18;
                              *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b5b8d;

                              st::fn_006AE1C0
                                        (*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                                         *(void **)((st_stack_frame + 16) + iVar20));
                              local_4c[9] = local_4c[9] + -1;
                              if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != 1)
                              goto LAB_004b5f7b;
                              local_10c = local_10c + -1;
                              uVar24 = 0;
                              do {
                                uVar21 = uVar24 & 0x80000001;
                                if ((int)uVar21 < 0) {
                                  uVar21 = (uVar21 - 1 | 0xfffffffe) + 1;
                                }
                                *(ushort *)
                                 (local_27c +
                                 (uVar21 + g_worldGrid.planeStride * local_254[0] + local_11c +
                                           ((int)uVar24 / 2 + local_138) * (int)g_worldGrid.sizeX) *
                                 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                uVar24 = uVar24 + 1;
                              } while ((int)uVar24 < 4);
                              break;
                            }
                          }
                          if (local_4c[9] != 0) goto cf_common_join_004B5648;
                          if (local_5c == 0) {
                            local_64 = local_64 + -1;
                            if (local_64 < 0) {
                              local_64 = 0;
                            }
                            local_5c = 1;
                            goto cf_continue_loop_004B48CC;
                          }
                          if (*(int *)(&DAT_00790888 + local_108[0] * 4) == 10) {
                            local_128 = 0;
                            iVar28 = -1;
                            local_354 = 0;
                            GVar17 = local_108[0];
                            do {
                              if (((*(int *)(&DAT_00790950 + local_354) == 10) &&
                                  (pDVar11 = *(DArrayTy **)((int)local_24c + local_354),
                                  pDVar11 != nullptr)) &&
                                 (uVar24 = 0, 0 < (int)pDVar11->count)) {
                                do {
                                  *(int **)((st_stack_frame + 16) + iVar20) = &local_144;
                                  *(undefined4 *)((st_stack_frame + 12) + iVar20) = 0x4b5333;

                                  st::fn_006ACC70(pDVar11,uVar24,
                                                   *(void **)((st_stack_frame + 16) + iVar20));
                                  *(int *)((st_stack_frame + 16) + iVar20) = local_140;
                                  *(int *)((st_stack_frame + 12) + iVar20) = local_144;
                                  *(int *)((st_stack_frame + 8) + iVar20) = local_138;
                                  *(int *)((st_stack_frame + 4) + iVar20) = local_11c;
                                  *(undefined4 *)((st_stack_frame + 0) + iVar20) = 0x4b5354;

                                  local_EAX_8063 =
                                       st::fn_006ACED8(*(int *)((st_stack_frame + 4) + iVar20),
                                                    *(int *)((st_stack_frame + 8) + iVar20),
                                                    *(int *)((st_stack_frame + 12) + iVar20),
                                                    *(int *)((st_stack_frame + 16) + iVar20));
                                  if ((iVar28 < 0) || (local_EAX_8063 < iVar28)) {
                                    iVar28 = local_EAX_8063;
                                  }
                                  uVar24 = uVar24 + 1;
                                  GVar17 = local_108[0];
                                } while ((int)uVar24 < (int)pDVar11->count);
                              }
                              local_354 = local_354 + 4;
                            } while (local_354 < 0x108);
                            *(undefined4 *)((st_stack_frame + 16) + iVar20) = 0;
                            *(Global_sub_004B1120_param_2Enum *)((st_stack_frame + 12) + iVar20) =
                                 GVar17 - 0x32;
                            *(uint *)((st_stack_frame + 8) + iVar20) = param_1;
                            *(undefined4 *)((st_stack_frame + 4) + iVar20) = 0x4b5396;

                            local_78 = st::fn_00405C45(*(int *)((st_stack_frame + 8) + iVar20),
                                                          *(int *)((st_stack_frame + 12) + iVar20),
                                                          *(int *)((st_stack_frame + 16) + iVar20));
                            puVar30 = local_27c;
                            if ((iVar28 < 0) || (uVar24 = local_128, local_78 < iVar28)) {
                              local_258 = 0;
                              local_264 = 0;
                              local_260 = 0;
                              local_25c = 0;
                              local_12c = 0;
                              local_120 = 1;
                              if (local_78 < 1) {
                                uVar24 = st::storage_bit_cast<uint>(static_cast<uint32_t>(local_78 * 2 < 1));
                              }
                              else {
                                local_35c = local_138;
                                local_358 = local_138;
                                do {
                                  local_358 = local_358 + 1;
                                  local_35c = local_35c + -1;
                                  if ((local_264 == 0) &&
                                     ((local_11c - local_138) + local_358 < g_worldGrid.sizeX + -1))
                                  {
                                    if (*(short *)(local_27c +
                                                  (g_worldGrid.sizeX * local_138 +
                                                   local_11c +
                                                   g_worldGrid.planeStride * local_254[0] +
                                                  local_120) * 2) == 0) {
                                      local_12c = local_12c + 1;
                                    }
                                    else {
                                      local_264 = 1;
                                    }
                                  }
                                  if ((local_260 == 0) && (0 < (local_11c - local_138) + local_358))
                                  {
                                    if (*(short *)(local_27c +
                                                  (((g_worldGrid.planeStride * local_254[0] +
                                                    g_worldGrid.sizeX * local_138) - local_120) +
                                                  local_11c) * 2) == 0) {
                                      local_12c = local_12c + 1;
                                    }
                                    else {
                                      local_260 = 1;
                                    }
                                  }
                                  if ((local_25c == 0) && (local_358 < g_worldGrid.sizeY + -1)) {
                                    if (*(short *)(local_27c +
                                                  (g_worldGrid.planeStride * local_254[0] +
                                                  local_11c + g_worldGrid.sizeX * local_358) * 2) ==
                                        0) {
                                      local_12c = local_12c + 1;
                                    }
                                    else {
                                      local_25c = 1;
                                    }
                                  }
                                  if ((local_258 == 0) && (0 < local_358)) {
                                    if (*(short *)(local_27c +
                                                  (g_worldGrid.planeStride * local_254[0] +
                                                  local_11c + g_worldGrid.sizeX * local_35c) * 2) ==
                                        0) {
                                      local_12c = local_12c + 1;
                                    }
                                    else {
                                      local_258 = 1;
                                    }
                                  }
                                  local_120 = local_120 + 1;
                                } while (local_120 <= local_78);
                                uVar24 = (uint)(local_78 * 2 <= local_12c);
                              }
                            }
                            if (uVar24 != 0) {
                              local_a0 = local_108[0];
                              local_90 = local_f8;
                              local_9c = local_11c;
                              local_98 = local_138;
                              local_94 = local_254[0];
                              *(Global_sub_004B1120_param_2Enum **)((st_stack_frame + 16) + iVar20) =
                                   &local_a0;
                              *(int *)((st_stack_frame + 12) + iVar20) = param_2[5];
                              *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b5c77;

                              st::fn_006AE1C0
                                        (*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                                         *(void **)((st_stack_frame + 16) + iVar20));
                              iVar28 = param_2[3];
                              *(int *)((st_stack_frame + 16) + iVar20) = STField<int>(iVar28,0x4) + -1;
                              *(int *)((st_stack_frame + 12) + iVar20) = iVar28;
                              *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b5c85;

                              st::fn_006B0C70(*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                                             *(uint *)((st_stack_frame + 16) + iVar20));
                              piVar18 = aiStack_314 + local_108[0];
                              if (*piVar18 == 0) {
                                piVar18 = aiStack_314 + local_108[0];
                                *(undefined4 *)((st_stack_frame + 16) + iVar20) = 10;
                                *(undefined4 *)((st_stack_frame + 12) + iVar20) = 0xc;
                                *(undefined4 *)((st_stack_frame + 8) + iVar20) = 10;
                                *(undefined4 *)((st_stack_frame + 4) + iVar20) = 0;
                                *(undefined4 *)((st_stack_frame + 0) + iVar20) = 0x4b5cab;
                                pDVar10_mg14 = st::fn_006AE290
                                                         (*(DArrayTy **)((st_stack_frame + 4) + iVar20),
                                                          *(uint *)((st_stack_frame + 8) + iVar20),
                                                          *(uint *)((st_stack_frame + 12) + iVar20),
                                                          *(uint *)((st_stack_frame + 16) + iVar20));
                                *piVar18 = (int)pDVar10_mg14;
                              }
                              local_144 = local_11c;
                              local_140 = local_138;
                              local_13c = local_254[0];
                              *(int **)((st_stack_frame + 16) + iVar20) = &local_144;
                              *(int *)((st_stack_frame + 12) + iVar20) = *piVar18;
                              *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b5cf4;

                              st::fn_006AE1C0
                                        (*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                                         *(void **)((st_stack_frame + 16) + iVar20));
                              local_4c[10] = local_4c[10] + -1;
                              if (*(int *)(&DAT_00791d68 + local_108[0] * 4) == 1) {
                                local_10c = local_10c + -1;
                                uVar24 = 0;
                                do {
                                  uVar21 = uVar24 & 0x80000001;
                                  if ((int)uVar21 < 0) {
                                    uVar21 = (uVar21 - 1 | 0xfffffffe) + 1;
                                  }
                                  *(ushort *)
                                   (local_27c +
                                   (uVar21 + g_worldGrid.planeStride * local_254[0] + local_11c +
                                             ((int)uVar24 / 2 + local_138) * (int)g_worldGrid.sizeX)
                                   * 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                  uVar24 = uVar24 + 1;
                                } while ((int)uVar24 < 4);
                              }
                              else {
                                *(ushort *)
                                 (puVar30 +
                                 (g_worldGrid.sizeX * local_138 +
                                 local_11c + g_worldGrid.planeStride * local_254[0]) * 2) =
                                     *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                              }
                              break;
                            }
                          }
cf_common_join_004B5648:
                          pDVar11 = (DArrayTy *)param_2[3];
                          *(undefined4 *)((st_stack_frame + 16) + iVar20) = 0x4b5659;

                          iVar27 = st::fn_006B1190(pDVar11,reinterpret_cast<byte *>(local_108));
                          iVar28 = local_ac;
                          uVar24 = local_268;
                          pDVar11 = local_20_mg0;
                        }
                      }
                    }
                  }
                }
                goto cf_continue_loop_004B5FB6;
              }
              local_114 = local_54;
              local_64 = local_54;
              local_54 = local_54 * 2;
              goto LAB_004b40f9;
            }
LAB_004b5fd6:
            if ((((((local_4c[1] == 0) && (local_4c[6] == 0)) && (local_4c[2] == 0)) &&
                 ((local_4c[3] == 0 && (local_4c[7] == 0)))) && (local_4c[8] == 0)) &&
               ((local_4c[9] == 0 && (local_4c[10] == 0)))) goto cf_break_loop_004B60CD;
          }
        }
        iVar28 = local_64 + 1;
      }
      goto cf_break_loop_004B60CD;
    }
    local_74 = 0;
    if (0 < local_64 << 3) {
      do {
        if (local_74 < local_64 * 2) {
          local_11c = (*param_2 - local_64) + local_74;
          local_138 = param_2[1] - local_64;
        }
        else if (local_74 < local_64 * 4) {
          local_11c = local_64 + *param_2;
          local_138 = param_2[1] + local_64 * -3 + local_74;
        }
        else if (local_74 < local_64 * 6) {
          local_11c = (local_64 * 5 - local_74) + *param_2;
          local_138 = param_2[1] + local_64;
        }
        else {
          local_11c = *param_2 - local_64;
          local_138 = (local_64 * 7 + param_2[1]) - local_74;
        }
        if ((((-1 < local_11c) && (local_11c < g_worldGrid.sizeX)) && (-1 < local_138)) &&
           ((local_138 < g_worldGrid.sizeY &&
            (local_254[0] = 0, puVar30 = local_27c, 0 < g_worldGrid.sizeZ)))) {
          do {
            iVar28 = g_worldGrid.sizeX * local_138 +
                     local_11c + g_worldGrid.planeStride * local_254[0];
            pSVar5 = reinterpret_cast<STFishC *>(g_worldGrid.cells[iVar28].objects[0]);
            local_58 = pSVar5;
            if (pSVar5 == nullptr) {
              sVar19 = (short)local_11c;
              if (((((sVar19 < 0) || (g_worldGrid.sizeX <= sVar19)) ||
                   (sVar10 = (short)local_138, sVar10 < 0)) ||
                  ((g_worldGrid.sizeY <= sVar10 || (sVar22 = (short)local_254[0], sVar22 < 0)))) ||
                 (g_worldGrid.sizeZ <= sVar22)) {
                sVar19 = -1;
              }
              else {
                sVar19 = STGridAt3D(g_pathingGrid, sVar19, sVar10, sVar22);
              }
              if (sVar19 == 0) {
                pSVar5 = reinterpret_cast<STFishC *>(g_worldGrid.cells[iVar28].objects[1]);
                local_58 = pSVar5;
                if (pSVar5 == nullptr) {
LAB_004b432d:
                  *(undefined2 *)(puVar30 + iVar28 * 2) = 0;
                }
                else {
                  pvVar6 = pSVar5->vtable->vfunc_2C;
                  *(undefined4 *)((st_stack_frame + 16) + iVar20) = 0x4b42c9;
                  /* ST_CALLSITE[004B42C6]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STFishC */
                  dVar13 = (*pvVar6)(pSVar5);
                  pSVar5 = local_58;
                  if (dVar13 != 0xa6) {
                    pvVar6 = local_58->vtable->vfunc_2C;
                    *(undefined4 *)((st_stack_frame + 16) + iVar20) = 0x4b42d8;
                    /* ST_CALLSITE[004B42D5]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STFishC */
                    dVar13 = (*pvVar6)(pSVar5);
                    pSVar5 = local_58;
                    if (dVar13 != 0xbd) {
                      pvVar6 = local_58->vtable->vfunc_2C;
                      *(undefined4 *)((st_stack_frame + 16) + iVar20) = 0x4b42e7;
                      /* ST_CALLSITE[004B42E4]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STFishC */
                      dVar13 = (*pvVar6)(pSVar5);
                      pSVar5 = local_58;
                      if (dVar13 != 0xa7) {
                        pvVar6 = local_58->vtable->vfunc_2C;
                        *(undefined4 *)((st_stack_frame + 16) + iVar20) = 0x4b42f6;
                        /* ST_CALLSITE[004B42F3]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STFishC */
                        dVar13 = (*pvVar6)(pSVar5);
                        if (dVar13 != 0xaf) goto LAB_004b432d;
                      }
                    }
                  }
                  *(undefined2 *)(puVar30 + iVar28 * 2) = 0x40;
                }
              }
              else {
                if (sVar19 != -1) goto LAB_004b4634;
                *(undefined2 *)(puVar30 + iVar28 * 2) = 0x20;
              }
            }
            else {
              if (*(int *)&pSVar5->field_0x20 == 1000) {
                pvVar6 = pSVar5->vtable->vfunc_2C;
                *(undefined4 *)((st_stack_frame + 16) + iVar20) = 0x4b4352;
                /* ST_CALLSITE[004B434F]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STFishC */
                local_34c = (*pvVar6)(pSVar5);
              }
              else {
                if (*(int *)&pSVar5->field_0x20 != 0x3e9) goto LAB_004b432d;
                local_34c = *(dword *)&pSVar5->field_0x259;
              }
              uVar24 = local_58->field_0024;
              if (uVar24 == param_1) {
                *(ushort *)(puVar30 + iVar28 * 2) =
                     *(ushort *)(&DAT_00790888 + local_34c * 4) | 0x200;
                local_114 = local_64;
                iVar28 = *(int *)(&DAT_00790888 + local_34c * 4);
                if (((iVar28 == 7) || (iVar28 == 8)) || (iVar28 == 9)) {
                  *(short **)((st_stack_frame + 16) + iVar20) = local_a8;
                  *(short **)((st_stack_frame + 12) + iVar20) = local_8c;
                  *(short **)((st_stack_frame + 8) + iVar20) = local_7c;
                  pSVar5 = local_58;
                  *(undefined4 *)((st_stack_frame + 4) + iVar20) = 0x4b445f;
                  /* ST_CALLSITE[004B445A]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
                  st::fn_004018C5
                            (pSVar5,*(short **)((st_stack_frame + 8) + iVar20),
                             *(short **)((st_stack_frame + 12) + iVar20),
                             *(short **)((st_stack_frame + 16) + iVar20));
                  if (((local_7c[0] == local_11c) && (local_8c[0] == local_138)) &&
                     (local_a8[0] == local_254[0])) {
                    piVar18 = aiStack_314 + local_34c;
                    if (*piVar18 == 0) {
                      *(undefined4 *)((st_stack_frame + 16) + iVar20) = 10;
                      *(undefined4 *)((st_stack_frame + 12) + iVar20) = 0xc;
                      *(undefined4 *)((st_stack_frame + 8) + iVar20) = 10;
                      *(undefined4 *)((st_stack_frame + 4) + iVar20) = 0;
                      *(undefined4 *)((st_stack_frame + 0) + iVar20) = 0x4b44b4;
                      pDVar10_mg9 = st::fn_006AE290
                                              (*(DArrayTy **)((st_stack_frame + 4) + iVar20),
                                               *(uint *)((st_stack_frame + 8) + iVar20),
                                               *(uint *)((st_stack_frame + 12) + iVar20),
                                               *(uint *)((st_stack_frame + 16) + iVar20));
                      *piVar18 = (int)pDVar10_mg9;
                    }
                    local_144 = (int)local_7c[0];
                    local_140 = (int)local_8c[0];
                    local_13c = (int)local_a8[0];
                    *(int **)((st_stack_frame + 16) + iVar20) = &local_144;
                    *(int *)((st_stack_frame + 12) + iVar20) = *piVar18;
                    *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b44fd;

                    st::fn_006AE1C0
                              (*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                               *(void **)((st_stack_frame + 16) + iVar20));
                  }
                }
                else if (iVar28 == 4) {
                  *(short **)((st_stack_frame + 16) + iVar20) = local_a8;
                  *(short **)((st_stack_frame + 12) + iVar20) = local_8c;
                  *(short **)((st_stack_frame + 8) + iVar20) = local_7c;
                  pSVar5 = local_58;
                  *(undefined4 *)((st_stack_frame + 4) + iVar20) = 0x4b43c9;
                  /* ST_CALLSITE[004B43C4]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
                  st::fn_004018C5
                            (pSVar5,*(short **)((st_stack_frame + 8) + iVar20),
                             *(short **)((st_stack_frame + 12) + iVar20),
                             *(short **)((st_stack_frame + 16) + iVar20));
                  iVar28 = (int)local_7c[0];
                  if (((iVar28 == local_11c) && (iVar15 = (int)local_8c[0], iVar15 == local_138)) &&
                     (iVar23 = (int)local_a8[0], iVar23 == local_254[0])) {
                    piVar18 = local_f4;
                    memset(piVar18, 0, 0x30); /* compiler bulk-zero initialization */
                    piVar18 = (int *)((byte *)piVar18 + 0x30);
                    local_f4[0] = 1;
                    local_f4[1] = iVar28;
                    local_f4[2] = iVar15;
                    local_f4[3] = iVar23;
                    *(int **)((st_stack_frame + 16) + iVar20) = local_f4;
                    *(DArrayTy **)((st_stack_frame + 12) + iVar20) = local_20_mg0;
                    *(undefined4 *)((st_stack_frame + 8) + iVar20) = 0x4b443a;

                    st::fn_006AE1C0
                              (*(DArrayTy **)((st_stack_frame + 12) + iVar20),
                               *(void **)((st_stack_frame + 16) + iVar20));
                    puVar30 = local_27c;
                  }
                }
              }
              else {
                if ((uVar24 < 8) &&
                   ((g_playSystem_00802A38 == nullptr ||
                    (g_bulkInitializedRecords_008087C7[uVar24].field_0022 < 8)))) {
                  bVar3 = (byte)local_58->field_0024;
                  if (g_app_00806728->field_146F == '\0') {
                    if (bVar3 == (byte)param_1) {
                      iVar15 = 0;
                    }
                    else {
                      uVar24 = (uint)bVar3;
                      uVar21 = param_1 & 0xff;
                      cVar4 = (&g_app_00806728->field_0x142f)[uVar21 + uVar24 * 8];
                      puVar30 = local_27c;
                      if ((cVar4 == '\0') &&
                         ((&g_app_00806728->field_0x142f)[uVar24 + uVar21 * 8] == '\0')) {
                        iVar15 = -2;
                      }
                      else if ((cVar4 == '\x01') &&
                              ((&g_app_00806728->field_0x142f)[uVar24 + uVar21 * 8] == '\0')) {
                        iVar15 = -1;
                      }
                      else if ((cVar4 == '\0') &&
                              ((&g_app_00806728->field_0x142f)[uVar24 + uVar21 * 8] == '\x01')) {
                        iVar15 = 1;
                      }
                      else if ((cVar4 == '\x01') &&
                              ((&g_app_00806728->field_0x142f)[uVar24 + uVar21 * 8] == '\x01')) {
                        iVar15 = 2;
                      }
                      else {
                        iVar15 = 0;
                      }
                    }
                    bVar31 = iVar15 < 0;
                  }
                  else {
                    bVar31 = (&g_app_00806728->field_0x11ca)[(param_1 & 0xff) * 0x51] !=
                             (&g_app_00806728->field_0x11ca)[(uint)bVar3 * 0x51];
                  }
                  if (bVar31) {
                    *(ushort *)(puVar30 + iVar28 * 2) =
                         *(ushort *)(&DAT_00790888 + local_34c * 4) | 0x100;
                    goto LAB_004b463a;
                  }
                }
LAB_004b4634:
                *(undefined2 *)(puVar30 + iVar28 * 2) = 0x10;
              }
            }
LAB_004b463a:
            local_254[0] = local_254[0] + 1;
          } while (local_254[0] < g_worldGrid.sizeZ);
        }
        local_74 = local_74 + 1;
      } while (local_74 < local_64 * 8);
    }
    if (local_54 < local_64 - local_114) goto LAB_004b4689;
    local_64 = local_64 + 1;
  } while( true );
  while (*piVar18 != 0) {
LAB_004b56e4:
    uVar24 = pDVar11->iteratorIndex;
    if (uVar24 < pDVar11->count) {
      piVar18 = DArrayAt<int>(pDVar11, uVar24);
      pDVar11->iteratorIndex = uVar24 + 1;
    }
    else {
      piVar18 = nullptr;
    }
    if (piVar18 == nullptr) goto LAB_004b5727;
  }
  *piVar18 = 1;
  piVar18[1] = local_11c;
  piVar18[2] = local_138;
  piVar18[3] = local_254[0];
LAB_004b5727:
  iVar28 = local_4c[4] + -1;
  local_4c[4] = iVar28;
  local_10c = local_10c + -1;
  iVar15 = 0;
  do {
    iVar23 = iVar15 / 6 + -2 + local_138;
    iVar14 = iVar15 % 6 + -2 + local_11c;
    if (((-1 < iVar23) && (iVar23 < g_worldGrid.sizeY)) && (-1 < iVar14)) {
      if ((iVar14 < g_worldGrid.sizeX) &&
         (iVar23 = iVar23 * g_worldGrid.sizeX + iVar14 + g_worldGrid.planeStride * local_254[0],
         *(short *)(local_27c + iVar23 * 2) == 0)) {
        *(ushort *)(local_27c + iVar23 * 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
      }
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 < 0x24);
  if (iVar28 == 0) {
    local_64 = 0;
    goto cf_continue_loop_004B48CC;
  }
cf_continue_loop_004B5FB6:
  local_254[0] = local_254[0] + 1;
  if (g_worldGrid.sizeZ + -1 <= local_254[0]) goto LAB_004b5fd6;
  goto LAB_004b49b4;
}
