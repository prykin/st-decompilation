#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0048.cpp

// 004803B0 FUN_004803b0
#line 4 "decomp/ST.exe/functions/004803B0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004803B0 returns return of STBoatC::sub_00460360 @ 004803BD */

int __fastcall st::fn_004803B0(int *param_1)

{
  int iVar1;

  /* ST_CALLSITE[004803B7]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
  iVar1 = st::fn_00403DF0(reinterpret_cast<STBoatC *>(param_1));
  return iVar1;
}

// 004805B0 FUN_004805b0
#line 4 "decomp/ST.exe/functions/004805B0/decomp.c"
int __thiscall st::fn_004805B0(void *this,int *param_1)

{
  int iVar2;
  int local_EAX_17;
  int iVar1;

  iVar2 = STField<int>(this,0x6ef);
  if (iVar2 == 0) {
    /* ST_CALLSITE[004805C1]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
    local_EAX_17 = st::fn_00403F85(static_cast<STBoatC *>(this),param_1);
    return local_EAX_17;
  }
  if (iVar2 == 1) {
    return 0;
  }
  if (iVar2 == 2) {
    /* ST_CALLSITE[004805DE]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
    iVar1 = st::fn_0040399A(static_cast<STBoatC *>(this),param_1);
    return iVar1;
  }
  return 2;
}

// 00480600 FUN_00480600
#line 4 "decomp/ST.exe/functions/00480600/decomp.c"
undefined4 __fastcall st::fn_00480600(void *param_1)

{
  int scalar_puVar5;
  int scalar_local_c;

  STT3DSprC *this;
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar2;
  int local_EAX_145;
  int uVar4_mg6;
  int uVar4_mgA;
  int iVar4;
  int local_EAX_1646;
  int uVar4_mg7;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  longlong lVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  int iVar18;
  short sVar19;
  byte bVar20;
  uint local_20 [2];
  uint local_18;
  short local_14;
  int local_10;
  undefined4 *local_c;
  uint local_8;


  iVar3 = st::fn_00401A3C(static_cast<RecoveredRecordView_0041C710_A35B7121 *>(param_1));
  this = (STT3DSprC *)((int)param_1 + 0x1d5);
  if (iVar3 == 1) {
    iVar3 = 1;

    uVar4 = st::fn_004052CC(this);

    st::fn_006EABF0(STField<void *>(param_1,0x211),uVar4,iVar3);
    iVar2 = 1;
  }
  else {
    iVar3 = 0;

    uVar4 = st::fn_004052CC(this);

    st::fn_006EABF0(STField<void *>(param_1,0x211),uVar4,iVar3);

    iVar3 = st::fn_0040186B(STField<int>(param_1,0x24),0x24);
    if ((iVar3 < 1) ||
       ((STField<int>(param_1,0x77a) + g_playSystem_00802A38->field_00E4) %
        (STField<uint>(param_1,0x77e) * 2) <= STField<uint>(param_1,0x77e))) {
      /* ST_CALLSITE[00480689]: CALL 0x004050d8; direct=004050D8 thunk_FUN_0041caf0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STT3DSprC; source view only; no Ghidra override */
      iVar2 = st::fn_004050D8(static_cast<RecoveredRecordView_0041CAF0_18493751 *>(param_1));
    }
    else {
      iVar2 = 0;
    }
  }

  local_EAX_145 = st::fn_004052CC(this);
  st::fn_006E6870(STField<void *>(param_1,0x211),local_EAX_145,iVar2);
  switch(STField<undefined4>(param_1,0x6f7)) {
  case 9:
    puVar5 = (undefined4 *)(((8 - (int)STField<short>(param_1,0x6c) / 0x2d) * 0xf) % 0x78);
    iVar3 = ((4 - DAT_008073fc) * 0x1e) % 0x78;
    if ((g_playSystem_00802A38->field_00E4 & 1) == 0) {
      STField<int>(param_1,0x822) = STField<int>(param_1,0x822) + 1;
    }
    if (STField<int>(param_1,0x822) == 0xf) {
      STField<undefined4>(param_1,0x822) = 0;
    }
    local_8 = (int)puVar5 + STField<int>(param_1,0x822) + iVar3;
    local_c = puVar5;

    uVar4_mgA = st::fn_004042AF(this,'\x0e');
    if (local_8 != uVar4_mgA) {
      /* ST_CALLSITE[00480858]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      st::fn_00401064(this,'\x0e',local_8);
      /* ST_CALLSITE[0048086A]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      st::fn_00401064(this,'\f',(int)puVar5 + STField<int>(param_1,0x822) + iVar3);
      /* ST_CALLSITE[00480873]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
      iVar3 = st::fn_004030BC(this,'\x0e');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      /* ST_CALLSITE[0048088A]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
      iVar3 = st::fn_004030BC(this,'\f');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      /* ST_CALLSITE[004808A5]: CALL 0x004052fe; direct=004052FE STT3DSprC::SetCurShad */
      iVar3 = st::fn_004052FE(this,'\x0e',(uint)local_c);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
    goto cf_common_exit_004811C2;
  default:
switchD_004806bc_caseD_a:
    uVar4 = ((0x18 - (int)STField<short>(param_1,0x6c) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) %
            0x18;

    uVar4_mg7 = st::fn_004042AF(this,'\x0e');
    if (uVar4 != uVar4_mg7) {
      /* ST_CALLSITE[00480F73]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      st::fn_00401064(this,'\x0e',uVar4);
      /* ST_CALLSITE[00480F7D]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      st::fn_00401064(this,'\f',uVar4);
      /* ST_CALLSITE[00480F86]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
      iVar3 = st::fn_004030BC(this,'\x0e');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      /* ST_CALLSITE[00480F9D]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
      iVar3 = st::fn_004030BC(this,'\f');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      /* ST_CALLSITE[00480FDB]: CALL 0x004052fe; direct=004052FE STT3DSprC::SetCurShad */
      iVar3 = st::fn_004052FE
                        (this,'\x0e',(0x18 - (int)STField<short>(param_1,0x6c) / 0xf) % 0x18);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
    break;
  case 0x15:
    scalar_puVar5 = ((8 - (int)STField<short>(param_1,0x6c) / 0x2d) * 0x14) % 0xa0; /* split integer lifetime from pointer-typed SSA storage */
    iVar18 = ((4 - DAT_008073fc) * 0x28) % 0xa0;
    iVar3 = STField<int>(param_1,0x822) + 1;
    STField<int>(param_1,0x822) = iVar3;
    if (iVar3 == 0x14) {
      STField<undefined4>(param_1,0x822) = 0;
    }
    local_8 = scalar_puVar5 + STField<int>(param_1,0x822) + iVar18;
    scalar_local_c = scalar_puVar5;

    uVar4_mg6 = st::fn_004042AF(this,'\x0e');
    if (local_8 != uVar4_mg6) {
      /* ST_CALLSITE[00480750]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      st::fn_00401064(this,'\x0e',local_8);
      /* ST_CALLSITE[00480762]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      st::fn_00401064(this,'\f',scalar_puVar5 + STField<int>(param_1,0x822) + iVar18);
      /* ST_CALLSITE[0048076B]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
      iVar3 = st::fn_004030BC(this,'\x0e');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      /* ST_CALLSITE[00480782]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
      iVar3 = st::fn_004030BC(this,'\f');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      /* ST_CALLSITE[004807A5]: CALL 0x004052fe; direct=004052FE STT3DSprC::SetCurShad */
      iVar3 = st::fn_004052FE(this,'\x0e',STField<int>(param_1,0x822) + scalar_local_c);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
    goto cf_common_exit_004811C2;
  case 0x16:
  case 0x25:
    if (STField<int>(param_1,0x732) == 1) {

      iVar4 = st::fn_00405AE7(param_1,(uint)DAT_0080874d);
      iVar3 = STField<int>(param_1,0x74a);
      if (iVar4 == 1) {
        if (iVar3 == -1) {
          STField<undefined4>(param_1,0x74a) = 0;
          if (g_sndUnderAttMeneg_00811798 != nullptr) {
            /* ST_CALLSITE[0048091E]: CALL 0x00405056; direct=00405056 SndUnderAttMenegC::sub_00620E40 */
            st::fn_00405056
                      (g_sndUnderAttMeneg_00811798,(int)STField<short>(param_1,0x47),
                       (int)STField<short>(param_1,0x49),(uint)DAT_0080874d);
          }
        }
        else if ((iVar3 < 0) || ((int)PTR_00806724->entryCount / 2 <= iVar3)) {
          if ((int)PTR_00806724->entryCount / 2 < iVar3) {
            STField<int>(param_1,0x74a) = iVar3 + -1;
          }
          if (STField<int>(param_1,0x74a) == (int)PTR_00806724->entryCount / 2 + 1) {
            /* ST_CALLSITE[0048097D]: CALL dword ptr [EDX] */
            this->vfunc_00();
          }
          sVar12 = PTR_00806724->entryCount;
LAB_00480bfa:
          if ((int)sVar12 / 2 < STField<int>(param_1,0x74a)) goto LAB_00480c6a;
        }
        else {
          STField<int>(param_1,0x74a) = iVar3 + 1;
        }
      }
      else {
        local_10 = iVar3;
        if (iVar3 == -1) {
          STField<undefined4>(param_1,0x74a) = 0;
        }
        else {
          if ((iVar3 < 0) || ((int)PTR_00806724->entryCount / 2 <= iVar3)) {
            bVar20 = STField<byte>(param_1,0x24);
            local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(bVar20));
            if (DAT_00808a8f == '\0') {
              if (DAT_0080874d == bVar20) {
LAB_00480a79:
                iVar18 = 0;
              }
              else {
                uVar4 = (uint)DAT_0080874d;
                bVar2 = g_playerRelationMatrix[uVar4][bVar20];
                if ((bVar2 == 0) && (g_playerRelationMatrix[bVar20][uVar4] == 0)) {
                  iVar18 = -2;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar20][uVar4] == 0)) {
                  iVar18 = -1;
                }
                else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar20][uVar4] == 1)) {
                  iVar18 = 1;
                }
                else {
                  if ((bVar2 != 1) || (g_playerRelationMatrix[bVar20][uVar4] != 1))
                  goto LAB_00480a79;
                  iVar18 = 2;
                }
              }
              bVar10 = iVar18 < 0;
            }
            else {
              bVar10 = g_bulkInitializedRecords_008087C7[bVar20].field_0023 !=
                       g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023;
            }
            if (bVar10) {
LAB_00480b80:
              local_c = (undefined4 *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar20));
              if (iVar3 < PTR_00806724->entryCount + -1) {
                STField<int>(param_1,0x74a) = iVar3 + 1;
              }
              if (STField<int>(param_1,0x74a) == (int)PTR_00806724->entryCount / 2 + 1) {
                /* ST_CALLSITE[00480BCC]: CALL 0x004021a3; direct=004021A3 STAllPlayersC::DelObjFromTmps */
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                st::fn_004021A3
                          (g_allPlayers_007FA174,DAT_0080874d,STField<int>(param_1,0x20),bVar20,
                           CONCAT22((short)((uint)STField<int>(param_1,0x74a) >> 0x10),
                                    STField<undefined2>(param_1,0x32)));
                /* ST_CALLSITE[00480BE4]: CALL 0x00403643; direct=00403643 STAllPlayersC::DelObjFromSaveTmps */
                st::fn_00403643
                          (g_allPlayers_007FA174,STField<int>(param_1,0x20),
                           STField<char>(param_1,0x24),STField<short>(param_1,0x32));
                st::fn_00402A90(this);
              }
            }
            else {
              local_c = (undefined4 *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar20));
              if (DAT_00808a8f == '\0') {
                if (bVar20 == DAT_0080874d) {
LAB_00480b30:
                  iVar18 = 0;
                }
                else {
                  uVar4 = (uint)DAT_0080874d;
                  bVar2 = g_playerRelationMatrix[bVar20][uVar4];
                  if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar20] == 0)) {
                    iVar18 = -2;
                  }
                  else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar4][bVar20] == 0)) {
                    iVar18 = -1;
                  }
                  else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar20] == 1)) {
                    iVar18 = 1;
                  }
                  else {
                    if ((bVar2 != 1) || (g_playerRelationMatrix[uVar4][bVar20] != 1))
                    goto LAB_00480b30;
                    iVar18 = 2;
                  }
                }
                bVar10 = iVar18 < 0;
              }
              else {
                bVar10 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
                         g_bulkInitializedRecords_008087C7[bVar20].field_0023;
              }
              if (bVar10) goto LAB_00480b80;
              if ((int)PTR_00806724->entryCount / 2 < iVar3) {
                STField<int>(param_1,0x74a) = iVar3 + -1;
              }
              if (STField<int>(param_1,0x74a) == (int)PTR_00806724->entryCount / 2 + 1) {
                /* ST_CALLSITE[00480B7C]: CALL dword ptr [EAX] */
                this->vfunc_00();
              }
            }
            sVar12 = PTR_00806724->entryCount;
            goto LAB_00480bfa;
          }
          STField<int>(param_1,0x74a) = iVar3 + 1;
        }
      }
    }
    else {
      if (-1 < STField<int>(param_1,0x74a)) {
        STField<int>(param_1,0x74a) = STField<int>(param_1,0x74a) + -1;
      }
      if (STField<int>(param_1,0x74a) == -1) {
        /* ST_CALLSITE[00480C2C]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
        st::fn_0040116D(this,0,0);
      }
      if (STField<int>(param_1,0x74a) == (int)PTR_00806724->entryCount / 2 + 1) {
        /* ST_CALLSITE[00480C4F]: CALL dword ptr [EAX] */
        this->vfunc_00();
      }
      if (STField<int>(param_1,0x74a) <= (int)PTR_00806724->entryCount / 2) goto LAB_00480c7f;
LAB_00480c6a:
      iVar3 = 0;

      local_EAX_1646 = st::fn_004052CC(this);
      st::fn_006E6870(STField<void *>(param_1,0x211),local_EAX_1646,iVar3);
    }
LAB_00480c7f:
    if (-1 < STField<int>(param_1,0x74a)) {
      /* ST_CALLSITE[00480CA0]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
      st::fn_0040116D
                (this,PTR_00806724->entries[STField<int>(param_1,0x74a)],
                 (int)PTR_00806724->field_002C);
      bVar20 = STField<byte>(param_1,0x24);
      local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(bVar20));
      if (DAT_00808a8f == '\0') {
        if (DAT_0080874d == bVar20) {
LAB_00480d55:
          iVar3 = 0;
        }
        else {
          uVar4 = (uint)DAT_0080874d;
          bVar2 = g_playerRelationMatrix[uVar4][bVar20];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar20][uVar4] == 0)) {
            iVar3 = -2;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar20][uVar4] == 0)) {
            iVar3 = -1;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar20][uVar4] == 1)) {
            iVar3 = 1;
          }
          else {
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar20][uVar4] != 1)) goto LAB_00480d55;
            iVar3 = 2;
          }
        }
        bVar10 = iVar3 < 0;
      }
      else {
        bVar10 = g_bulkInitializedRecords_008087C7[bVar20].field_0023 !=
                 g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023;
      }
      if (!bVar10) {
        local_10 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_10)), (uint8_t)(bVar20));
        if (DAT_00808a8f == '\0') {
          if (bVar20 == DAT_0080874d) {
LAB_00480e0f:
            iVar3 = 0;
          }
          else {
            uVar4 = (uint)DAT_0080874d;
            bVar2 = g_playerRelationMatrix[bVar20][uVar4];
            if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar20] == 0)) {
              iVar3 = -2;
            }
            else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar4][bVar20] == 0)) {
              iVar3 = -1;
            }
            else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar20] == 1)) {
              iVar3 = 1;
            }
            else {
              if ((bVar2 != 1) || (g_playerRelationMatrix[uVar4][bVar20] != 1)) goto LAB_00480e0f;
              iVar3 = 2;
            }
          }
          bVar10 = iVar3 < 0;
        }
        else {
          bVar10 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
                   g_bulkInitializedRecords_008087C7[bVar20].field_0023;
        }
        if (!bVar10) {
          if (STField<int>(param_1,0x746) == 1) {
            /* ST_CALLSITE[00480E30]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
            st::fn_00401BAE(this,'\x0e');
            /* ST_CALLSITE[00480E39]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
            st::fn_00401BAE(this,'\r');
            /* ST_CALLSITE[00480E42]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
            st::fn_00401BAE(this,'\f');

            st::fn_00403FDA(this,'\x01');

            st::fn_00403FDA(this,'\x02');

            st::fn_00403FDA(this,'\0');

            st::fn_00403FDA(this,'\x0f');

            st::fn_00403FDA(this,'\v');

            st::fn_00403FDA(this,'\n');

            st::fn_00403FDA(this,'\t');

            st::fn_00403FDA(this,'\b');
            STField<undefined4>(param_1,0x746) = 0;
          }
          goto LAB_00480f12;
        }
      }
      local_10 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_10)), (uint8_t)(bVar20));
      if (STField<int>(param_1,0x746) == 0) {
        /* ST_CALLSITE[00480EA9]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
        st::fn_00401BAE(this,'\x0e');
        /* ST_CALLSITE[00480EB2]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
        st::fn_00401BAE(this,'\r');
        /* ST_CALLSITE[00480EBB]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
        st::fn_00401BAE(this,'\f');
        /* ST_CALLSITE[00480EC4]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
        st::fn_00401BAE(this,'\x01');
        /* ST_CALLSITE[00480ECD]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
        st::fn_00401BAE(this,'\x02');
        /* ST_CALLSITE[00480ED6]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
        st::fn_00401BAE(this,'\0');
        /* ST_CALLSITE[00480EDF]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
        st::fn_00401BAE(this,'\x0f');
        /* ST_CALLSITE[00480EE8]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
        st::fn_00401BAE(this,'\v');
        /* ST_CALLSITE[00480EF1]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
        st::fn_00401BAE(this,'\n');
        /* ST_CALLSITE[00480EFA]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
        st::fn_00401BAE(this,'\t');
        /* ST_CALLSITE[00480F03]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
        st::fn_00401BAE(this,'\b');
        STField<undefined4>(param_1,0x746) = 1;
      }
    }
LAB_00480f12:
    if (STField<int>(param_1,0x6f7) == 0x16) goto switchD_004806bc_caseD_a;
    break;
  case 0x24:
    break;
  }
  if ((STField<int>(param_1,0x76) == 1) ||
     ((STField<int>(param_1,0x76) == 0 && (STField<short>(param_1,0x6e) != 0x2f)))) {

    st::fn_004045AC(static_cast<RecoveredRecordView_00416390_AE365496 *>(param_1));
  }
  uVar4 = STField<int>(param_1,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(param_1,0x1c) = uVar4;
  iVar3 = (uVar4 >> 0x10) % 7 - 3;
  uVar4 = STField<int>(param_1,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(param_1,0x1c) = uVar4;
  uVar1 = STField<int>(param_1,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(param_1,0x1c) = uVar1;
  local_10 = (uVar1 >> 0x10) % 7 - 3;
  if ((((STField<char>(param_1,0xe3) == '\x01') && (STField<short>(param_1,0xfa) == 0)) &&
      (STField<int>(param_1,0xe8) != 1)) &&
     (((STField<char>(param_1,99) == STField<char>(param_1,0x61) &&
       (STField<int>(param_1,0x74a) <= (int)PTR_00806724->entryCount / 2)) &&
      (local_8 = 0, STField<char>(param_1,0x2bf) != '\0')))) {
    local_c = (undefined4 *)((int)param_1 + 0x2b3);
    do {

      puVar5 = st::fn_0040342C(local_20,(short)*local_c,*(ushort *)(local_c + 1),
                                  STField<short>(param_1,0x6c));
      uVar7 = *puVar5;
      bVar20 = 0;
      sVar19 = 0;
      iVar18 = -1;
      local_14 = *(short *)(puVar5 + 1);
      sVar17 = 0;
      sVar16 = 0;
      sVar15 = 0;
      sVar14 = 0;
      sVar13 = 0;
      sVar12 = 0;
      local_18 = uVar7;
      if (DAT_0080732c == 1) {
        sVar12 = 0;
        sVar13 = 0;
        sVar14 = 0;
        sVar15 = 0;
        sVar16 = 0;
        sVar17 = 0;
        sVar19 = 0;
        bVar20 = 0;
        lVar11 = st::fn_0072E288();
        iVar6 = (int)local_14 + STField<short>(param_1,0x45) + local_10 + (short)lVar11;
        iVar8 = (int)STField<short>(param_1,0x43) - (int)STPiece<2,2>(local_18);
        iVar9 = (short)local_18 + iVar3 + STField<short>(param_1,0x41);
      }
      else {
        iVar6 = (int)local_14 + local_10 + STField<short>(param_1,0x45);
        STPiece<2,2>(local_18) = (short)((uint)uVar7 >> 0x10);
        iVar8 = (int)STField<short>(param_1,0x43) - (int)STPiece<2,2>(local_18);
        STPiece<0,2>(local_18) = (short)uVar7;
        iVar9 = (short)local_18 + iVar3 + STField<short>(param_1,0x41);
      }
      /* ST_CALLSITE[0048119D]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
      st::fn_00401433
                (g_traksClass_00802A7C,1,2,7,iVar9,iVar8 + ((uVar4 >> 0x10) % 7 - 3),iVar6,sVar12,
                 sVar13,sVar14,sVar15,sVar16,sVar17,iVar18,sVar19,bVar20);
      local_c = (undefined4 *)((int)local_c + 6);
      local_8 = local_8 + 1;
    } while ((int)local_8 < (int)(uint)STField<byte>(param_1,0x2bf));
  }
cf_common_exit_004811C2:
  uVar7 = st::fn_0040503D(static_cast<RecoveredRecord_STTorpC_0041DA30 *>(param_1));
  return uVar7;
}

// 00482DB0 FUN_00482db0
#line 4 "decomp/ST.exe/functions/00482DB0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00462180 @ 00462366
   -> CMP CMP EAX,EBX

   [STTypeFamilyApplier] CONTEXTUAL_GENERATED_RECORD.
   Evidence: one script-owned pointer shape is used only by functions with one unique class-owner
   context; promote its stable machine layout to a generated owner-qualified record name */

int __fastcall st::fn_00482DB0(int *param_1,undefined4 param_2)

{
  short sVar1;
  uint uVar2;
  RecoveredRecord_STBoatC_00482DB0 *this;
  short sVar3;
  STWorldObject *pSVar4;
  int iVar13_mg1;
  int iVar12;
  uint uVar6;
  uint uVar5;
  uint *puVar7;
  short sVar8;
  short sVar9;
  ushort uVar11;
  uint uVar10;
  short sVar12;
  int iVar13;
  uint local_3c [2];
  uint local_34 [2];
  uint local_2c;
  ushort local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  STFishC *local_14;
  ushort *local_10;
  short local_c [2];
  RecoveredRecord_STBoatC_00482DB0 *local_8;

  if (((char)param_1[0x10] != '\0') || (STField<char>(param_1,0x4d) != '\0')) {
    return 1;
  }
  sVar1 = STField<short>(param_1,0x47);
  sVar3 = STField<short>(param_1,0x4b);
  sVar8 = STField<short>(param_1,0x49);
  uVar11 = (undefined2)((uint)param_2 >> 0x10);
  if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar8 < 0)) ||
      ((g_worldGrid.sizeY <= sVar8 || (sVar3 < 0)))) || (g_worldGrid.sizeZ <= sVar3)) {
    pSVar4 = nullptr;
  }
  else {
    iVar13 = (int)g_worldGrid.planeStride * (int)sVar3 + (int)g_worldGrid.sizeX * (int)sVar8 +
             (int)sVar1;
    uVar11 = (undefined2)((uint)STField<byte>(param_1,0x8e) + iVar13 * 2 >> 0x10);
    pSVar4 = g_worldGrid.cells[iVar13].objects[STField<byte>(param_1,0x8e)];
  }
  if (pSVar4 != (STWorldObject *)param_1) {
    return 1;
  }
  sVar1 = (short)param_1[0x201];
  sVar3 = STField<short>(param_1,0x802);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_14 = (STFishC *)CONCAT22(uVar11,sVar3);
  if (param_1[0x1ff] == 3) {
    sVar8 = (short)param_1[0x200];
    if ((((-1 < sVar8) && (sVar8 < g_worldGrid.sizeX)) &&
        ((-1 < sVar3 && ((sVar3 < g_worldGrid.sizeY && (-1 < sVar1)))))) &&
       (sVar1 < g_worldGrid.sizeZ)) {
      local_8 = reinterpret_cast<RecoveredRecord_STBoatC_00482DB0 *>(STGridAt3D(g_worldGrid, sVar8, sVar3, sVar1).objects[1]);
LAB_00482f52:
      if ((local_8 != nullptr) &&
         (*(int *)&local_8->field_0x18 == param_1[0x1fd])) goto LAB_00482fa9;
    }
  }
  else {
    sVar8 = (short)param_1[0x200];
    if (((-1 < sVar8) && (sVar8 < g_worldGrid.sizeX)) &&
       ((-1 < sVar3 &&
        (((sVar3 < g_worldGrid.sizeY && (-1 < sVar1)) && (sVar1 < g_worldGrid.sizeZ)))))) {
      local_8 = reinterpret_cast<RecoveredRecord_STBoatC_00482DB0 *>(STGridAt3D(g_worldGrid, sVar8, sVar3, sVar1).objects[0]);
      goto LAB_00482f52;
    }
  }

  iVar13_mg1 = st::fn_006E62D0
                         (g_playSystem_00802A38,
                          (RecoveredRecordView_005EFAE0_855D930D *)param_1[0x1fd],reinterpret_cast<int *>(&local_14));
  if (iVar13_mg1 == -4) {
    return 4;
  }
  /* ST_CALLSITE[00482F9C]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
  st::fn_00405F0B
            (local_14,reinterpret_cast<short *>((param_1 + 0x200)),(short *)((int)param_1 + 0x802),
             reinterpret_cast<short *>((param_1 + 0x201)));
  local_8 = reinterpret_cast<RecoveredRecord_STBoatC_00482DB0 *>(local_14);
LAB_00482fa9:
  this = local_8;
  /* ST_CALLSITE[00482FAD]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  iVar13 = STStructuralVirtualCall<undefined4>(local_8, 0xF8);
  if (iVar13 == 0) {
    return 4;
  }
  if ((*(int *)&this->field_0x20 == 0x1ae) &&
     /* ST_CALLSITE[00482FC8]: CALL dword ptr [EAX + 0xf4]; [STIndirectCallsiteApplier] exact slot 0xF4; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
     (iVar13 = STStructuralVirtualCall<undefined4>(this, 0xF4, param_1[9]), iVar13 == 0)) {
    return 4;
  }
  st::fn_004031E3(this,&local_18,reinterpret_cast<short *>(&local_1c),local_c);

  iVar12 = st::fn_006ACF0D((int)STField<short>(param_1,0x41),(int)STField<short>(param_1,0x43),
                        (int)STField<short>(param_1,0x45),(short)local_18,
                        (short)local_1c,(int)local_c[0]);
  if ((short)param_1[0x205] < iVar12) {
    return 5;
  }
  uVar6 = (int)local_c[0] - (int)STField<short>(param_1,0x45);
  uVar10 = (int)uVar6 >> 0x1f;
  if (st::storage_bit_cast<int>(static_cast<uint32_t>(((uVar6 ^ uVar10) - uVar10) * 10)) / iVar12 < 4) {

    uVar5 = st::fn_00402987(reinterpret_cast<RecoveredRecordView_004836C0_090580C8 *>(param_1));
    if ((short)uVar5 != (short)param_1[0x1b]) {
      return 9;
    }
    iVar13 = STField<int>(param_1,0x7de);
    if (((iVar13 != 0) || (0 < STField<int>(param_1,0x7a2))) &&
       ((iVar13 != 1 || (0x27 < STField<int>(param_1,0x72a))))) {
      if ((iVar13 == 0) && (STField<int>(param_1,0x7aa) < STField<int>(param_1,0x7a6))) {
        return 3;
      }
      local_20 = 0;
      if (STField<char>(param_1,0x2b2) != '\0') {
        local_10 = reinterpret_cast<ushort *>((param_1 + 0xaa));
        do {

          puVar7 = st::fn_0040342C(local_34,(short)*(undefined4 *)(local_10 + -1),local_10[1],
                                      (short)param_1[0x1b]);
          uVar2 = *puVar7;
          STPiece<2,2>(local_2c) = (short)((uint)uVar2 >> 0x10);
          sVar12 = STField<short>(param_1,0x43) - STPiece<2,2>(local_2c);
          local_24 = STReplaceLowWord((uint32_t)(puVar7), (uint16_t)(*(short *)(puVar7 + 1) + STField<short>(param_1,0x45)));
          local_2c = (uint)*local_10 << 0x10;
          sVar1 = STField<short>(param_1,0x41);

          puVar7 = st::fn_0040342C(local_3c,0,0,(short)param_1[0x1b]);
          local_2c = *puVar7;
          local_28 = *(undefined2 *)(puVar7 + 1);
          sVar3 = (short)local_2c + local_8->field_0041;
          local_18 = STReplaceLowWord((uint32_t)(puVar7), (uint16_t)(sVar3));
          sVar9 = (short)((uint)local_2c >> 0x10);
          sVar8 = local_8->field_0043 - sVar9;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_1c = CONCAT22(sVar9,sVar8);
          local_c[0] = local_8->field_0045;
          /* ST_CALLSITE[00483198]: CALL 0x00405907; direct=00405907 STSprGameObjC::CheckRay */
          iVar13 = st::fn_00405907
                             (reinterpret_cast<STSprGameObjC *>(param_1),(short)uVar2 + sVar1,sVar12,(short)local_24,
                              sVar3,sVar8,local_8->field_0045,
                              STField<STSprGameObjC_CheckRay_param_7Enum>(param_1,0x79a),
                              reinterpret_cast<int *>(&local_14),0);
          if (iVar13 == 0) {
            return -(uint)((STFishC *)local_8 != local_14) & 8;
          }
          local_20 = local_20 + 1;
          local_10 = local_10 + 3;
        } while (local_20 < (int)(uint)STField<byte>(param_1,0x2b2));
      }
      return 0;
    }
    return 2;
  }
  return (local_c[0] <= STField<short>(param_1,0x45)) + 6;
}

// 00483300 FUN_00483300
#line 4 "decomp/ST.exe/functions/00483300/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (8), none consume AL/AX, and every RET path defines full EAX; sites=004608B0 @ 00460E24
   -> MOV MOV EBX,EAX | 004608B0 @ 0046131C -> MOV MOV EBX,EAX | 004608B0 @ 00461653 -> MOV MOV
   EBX,EAX | 004608B0 @ 004618E8 -> MOV MOV EBX,EAX | 00471AC0 @ 00471FD0 -> MOV MOV EBX,EAX |
   00471AC0 @ 00472503 -> MOV MOV EBX,EAX | 00471AC0 @ 004727D1 -> MOV MOV EBX,EAX | 00471AC0 @
   00472A00 -> MOV MOV EBX,EAX */

int __fastcall st::fn_00483300(int *param_1,undefined4 param_2)

{
  short sVar1;
  STGameObjC *this;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  uint local_38 [2];
  uint local_30 [2];
  short local_28;
  short sStack_26;
  ushort local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int *local_c;
  uint local_8;
  if (STField<int>(param_1,0x7e2) == 0) {
    if (STField<int>(param_1,0x7a2) != 0) goto LAB_00483342;
  }
  else if ((STField<int>(param_1,0x7a2) != 0) || (0x27 < STField<int>(param_1,0x72a))) {
LAB_00483342:
    /* ST_CALLSITE[0048335E]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    this = st::fn_004028BA
                     (g_allPlayers_007FA174,STField<char>(param_1,0x487),
                      STField<ushort>(param_1,0x48b),
                      STField<STAllPlayersC_GetObjPtr_param_3Enum>(param_1,0x483));
    st::fn_004031E3(this,&local_10,reinterpret_cast<short *>(&local_14),reinterpret_cast<short *>(&local_8));

    iVar2 = st::fn_006ACF0D((int)STField<short>(param_1,0x41),(int)STField<short>(param_1,0x43),
                         (int)STField<short>(param_1,0x45),(short)local_10,
                         (short)local_14,(short)local_8);
    if ((short)param_1[0x205] < iVar2) {
      return (-(uint)(STField<int>(param_1,0x7e6) != 0) & 4) + 5;
    }
    /* ST_CALLSITE[004833C6]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar3 = this->vfunc_F8();
    /* ST_CALLSITE[004833D8]: CALL dword ptr [EAX + 0xf0]; [STIndirectCallsiteApplier] exact slot 0xF0; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    if (((iVar3 == 0) || (iVar3 = this->vfunc_F0(), iVar3 == 0)) ||
       /* ST_CALLSITE[004833EE]: CALL dword ptr [EDX + 0xf4]; [STIndirectCallsiteApplier] exact slot 0xF4; mode=machine-word; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined4 */
       (iVar3 = this->vfunc_F4(param_1[9]), iVar3 == 0)) {
      return 3;
    }
    sVar1 = STField<short>(param_1,0x45);
    uVar4 = (short)local_8 - (int)sVar1;
    uVar6 = (int)uVar4 >> 0x1f;
    if (3 < st::storage_bit_cast<int>(static_cast<uint32_t>(((uVar4 ^ uVar6) - uVar6) * 10)) / iVar2) {
      return ((short)local_8 <= sVar1) + 6;
    }
    /* ST_CALLSITE[00483447]: CALL dword ptr [EAX + 0x10]; [STIndirectCallsiteApplier] exact slot 0x10; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    sVar1 = STStructuralVirtualCall<undefined4>(param_1, 0x10, STField<undefined2>(param_1,0x41), CONCAT22(extraout_var,STField<undefined2>(param_1,0x43)), CONCAT22(extraout_var,sVar1), local_10, local_14, local_8);
    local_18 = (int)sVar1;
    local_20 = 0;
    if (STField<char>(param_1,0x2b2) != '\0') {
      local_c = param_1 + 0xaa;
      do {

        puVar5 = st::fn_0040342C(local_30,(short)*(undefined4 *)((int)local_c + -2),
                                    STField<ushort>(local_c,2),(short)local_18);
        sStack_26 = (short)((uint)*puVar5 >> 0x10);
        local_1c = STReplaceLowWord((uint32_t)(puVar5), (uint16_t)(STField<short>(param_1,0x45) + *(short *)(puVar5 + 1)));
        sVar1 = STField<short>(param_1,0x43) - sStack_26;
        sVar7 = STField<short>(param_1,0x41) + (short)*puVar5;
        sStack_26 = (short)*local_c;
        local_28 = 0;

        puVar5 = st::fn_0040342C(local_38,0,0,(short)local_18);
        local_28 = (short)*puVar5;
        sStack_26 = (short)((uint)*puVar5 >> 0x10);
        local_24 = *(undefined2 *)(puVar5 + 1);
        sVar8 = (short)local_10 + local_28;
        sVar9 = (short)local_14 - sStack_26;
        if (STField<int>(param_1,0x736) == 0) {
          /* ST_CALLSITE[00483522]: CALL 0x00405907; direct=00405907 STSprGameObjC::CheckRay */
          iVar3 = st::fn_00405907
                            (reinterpret_cast<STSprGameObjC *>(param_1),sVar7,sVar1,(short)local_1c,sVar8,sVar9,
                             (short)local_8,
                             STField<STSprGameObjC_CheckRay_param_7Enum>(param_1,0x79a),
                             nullptr,0);
        }
        else {
          /* ST_CALLSITE[00483546]: CALL 0x00405907; direct=00405907 STSprGameObjC::CheckRay */
          iVar3 = st::fn_00405907
                            (reinterpret_cast<STSprGameObjC *>(param_1),sVar7,sVar1,(short)local_1c,sVar8,sVar9,
                             (short)local_8,
                             STField<STSprGameObjC_CheckRay_param_7Enum>(param_1,0x79a),
                             nullptr,1);
        }
        if (iVar3 == 0) {
          return 8;
        }
        local_20 = local_20 + 1;
        local_c = (int *)((int)local_c + 6);
      } while (local_20 < (int)(uint)STField<byte>(param_1,0x2b2));
    }
    if (local_18 != (short)param_1[0x1b]) {
      return 9;
    }
    if (STField<int>(param_1,0x7e2) != 0) {
      if (STField<int>(param_1,0x7aa) < STField<int>(param_1,0x7a6)) {
        return ((STField<int>(param_1,0x72a) < 0x28) - 1 & 7) + 3;
      }
      return 0;
    }
    return (STField<int>(param_1,0x7a6) <= STField<int>(param_1,0x7aa)) - 1 & 3;
  }
  return 2;
}

// 004836C0 FUN_004836c0
#line 4 "decomp/ST.exe/functions/004836C0/decomp.c"
uint __fastcall st::fn_004836C0(RecoveredRecordView_004836C0_090580C8 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *pSVar4;
  ushort uVar6;
  uint uVar5;

  sVar1 = *(short *)(param_1 + 1);
  sVar2 = param_1->field_0802;
  sVar3 = *(short *)&param_1->field_0x800;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  uVar5 = CONCAT22((short)((uint)*(int *)&param_1->field_0x7fc >> 0x10),sVar3);
  if (*(int *)&param_1->field_0x7fc == 3) {
    if (((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
       ((sVar2 < 0 ||
        (((g_worldGrid.sizeY <= sVar2 || (sVar1 < 0)) || (g_worldGrid.sizeZ <= sVar1))))))
    goto cf_common_exit_004837CF;
    pSVar4 = STGridAt3D(g_worldGrid, sVar3, sVar2, sVar1).objects[1];
  }
  else {
    if ((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) || (sVar2 < 0)) ||
       (((g_worldGrid.sizeY <= sVar2 || (sVar1 < 0)) || (g_worldGrid.sizeZ <= sVar1))))
    goto cf_common_exit_004837CF;
    pSVar4 = STGridAt3D(g_worldGrid, sVar3, sVar2, sVar1).objects[0];
  }
  uVar5 = 0;
  if (pSVar4 != nullptr) {
    uVar6 = (undefined2)((uint)pSVar4 >> 0x10);
    /* ST_CALLSITE[004837C8]: CALL dword ptr [EDX + 0x10]; [STIndirectCallsiteApplier] exact slot 0x10; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar5 = STStructuralVirtualCall<undefined4>(param_1, 0x10, CONCAT22(uVar6,param_1->field_0041), CONCAT22(uVar6,param_1->field_0043), CONCAT22(uVar6,param_1->field_0045), CONCAT22(uVar6,*(undefined2 *)&pSVar4[1].field_0x1d), CONCAT22(sVar2 >> 0xf,*(undefined2 *)&pSVar4[1].field_0x1f), CONCAT22(sVar2 >> 0xf,*(undefined2 *)((int)&pSVar4[1].value_20 + 1)));
    return uVar5;
  }
cf_common_exit_004837CF:
  return uVar5 & 0xffff0000;
}

// 00483830 FUN_00483830
#line 4 "decomp/ST.exe/functions/00483830/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00483833 MOV AX,word ptr
   [EBP + 0x8] */

void __thiscall st::fn_00483830(void *this,ushort param_1)

{
  STField<ushort>(this,0x7f2) = param_1;
  return;
}

// 00483880 FUN_00483880
#line 4 "decomp/ST.exe/functions/00483880/decomp.c"
undefined4 __fastcall st::fn_00483880(int param_1)

{
  uint uVar1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x455) == 1) {
    return 0;
  }
  uVar1 = st::fn_004059F7();
  return uVar1;
}

// 00486A60 FUN_00486a60
#line 4 "decomp/ST.exe/functions/00486A60/decomp.c"
int __fastcall st::fn_00486A60(int param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = (*(int *)(param_1 + 0x716) * 100) / *(int *)(param_1 + 0x712);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((0 < *(int *)(param_1 + 0x716)) && (iVar1 == 0)) {
    iVar1 = 1;
  }
  return iVar1;
}

// 00486B60 FUN_00486b60
#line 4 "decomp/ST.exe/functions/00486B60/decomp.c"
void __thiscall st::fn_00486B60(void *this,undefined1 *param_1)

{
  byte *puVar1;
  byte uVar2;
  byte bVar3;
  int iVar5;
  int iVar4;
  int local_EAX_316;
  uint uVar6;
  int iVar7;
  int *local_c;
  short local_8;
  short local_6;

  puVar1 = param_1;
  *param_1 = 1;
  /* ST_CALLSITE[00486B73]: CALL dword ptr [EAX + 0x8] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar5 = (**(code **)(*(int *)this + 8))();
  if (iVar5 == 1) {
    puVar1[1] = 1;
  }
  else {
    puVar1[1] = 0;
  }
  puVar1[2] = 1;

  iVar5 = st::fn_0040226B(static_cast<STGameObjC *>(this));
  if (iVar5 == 0) {
    puVar1[0x1d] = 1;
  }
  else {
    puVar1[0x1d] = 0;
  }
  /* ST_CALLSITE[00486BA1]: CALL dword ptr [EDX + 0x7c]; [STIndirectCallsiteApplier] exact slot 0x7C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  uVar2 = STStructuralVirtualCall<undefined4>(this, 0x7C);
  puVar1[0x1b] = uVar2;
  /* ST_CALLSITE[00486BAB]: CALL dword ptr [EAX + 0xc4]; [STIndirectCallsiteApplier] exact slot 0xC4; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  uVar2 = STStructuralVirtualCall<undefined4>(this, 0xC4);
  puVar1[0x1c] = uVar2;
  *(undefined4 *)(puVar1 + 3) = STField<undefined4>(this,0x6f7);

  iVar4 = st::fn_00401F5A(STField<STBoatC_field_06F7State>(this,0x6f7));
  puVar1[7] = (char)iVar4;
  *(undefined4 *)(puVar1 + 8) = STField<undefined4>(this,0x18);
  *(undefined4 *)(puVar1 + 0xc) = STField<undefined4>(this,0x6fb);
  *(undefined4 *)(puVar1 + 0x10) = STField<undefined4>(this,0x6ff);
  *(undefined4 *)(puVar1 + 0x14) = STField<undefined4>(this,0x703);
  *(undefined2 *)(puVar1 + 0x18) = STField<undefined2>(this,0x707);
  puVar1[0x1a] = STField<undefined1>(this,0x709);
  switch(STField<undefined4>(this,0x6f7)) {
  case 7:
  case 0x13:
  case 0x1b:
    if (STField<RecoveredRecordView_005EFAE0_855D930D *>(this,0x7ca) !=
        nullptr) {
      local_c = nullptr;

      st::fn_006E62D0
                (g_playSystem_00802A38,
                 STField<RecoveredRecordView_005EFAE0_855D930D *>(this,0x7ca),reinterpret_cast<int *>(&local_c));
      if (local_c != nullptr) {
        /* ST_CALLSITE[00486C4A]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
        uVar6 = STStructuralVirtualCall<undefined4>(local_c, 0x2C);
        *(undefined4 *)(puVar1 + 0x1e) = uVar6;
        iVar5 = local_c[8];
        if (iVar5 == 0x14) {

          local_EAX_316 = st::fn_00401F5A(STField<STBoatC_field_06F7State>(this,0x6f7));
          puVar1[0x22] = (char)local_EAX_316;
          /* ST_CALLSITE[00486CA9]: CALL dword ptr [EDX + 0x7c]; [STIndirectCallsiteApplier] exact slot 0x7C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
          uVar2 = STStructuralVirtualCall<undefined4>(local_c, 0x7C);
          puVar1[0x23] = uVar2;
        }
        else if ((iVar5 == 0x172) || (iVar5 == 0x1a4)) {
          /* ST_CALLSITE[00486C79]: CALL dword ptr [EAX + 0xc]; [STIndirectCallsiteApplier] exact slot 0xC; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
          uVar2 = STStructuralVirtualCall<undefined4>(local_c, 0xC);
          puVar1[0x22] = uVar2;
          /* ST_CALLSITE[00486C84]: CALL dword ptr [EDX + 0x7c]; [STIndirectCallsiteApplier] exact slot 0x7C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
          uVar2 = STStructuralVirtualCall<undefined4>(local_c, 0x7C);
          puVar1[0x23] = uVar2;
        }
        else {
          puVar1[0x22] = 0;
          /* ST_CALLSITE[00486C6C]: CALL dword ptr [EDX + 0x7c]; [STIndirectCallsiteApplier] exact slot 0x7C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
          uVar2 = STStructuralVirtualCall<undefined4>(local_c, 0x7C);
          puVar1[0x23] = uVar2;
        }
        break;
      }
    }
    *(undefined4 *)(puVar1 + 0x1e) = 0;
    break;
  case 8:
  case 9:
  case 0xc:
  case 0x14:
  case 0x15:
  case 0x18:
  case 0x19:
  case 0x1a:
    *(undefined2 *)(puVar1 + 0x20) = 0;
    *(undefined2 *)(puVar1 + 0x1e) = 0;
    break;
  default:
    *(undefined2 *)(puVar1 + 0x1e) = STField<undefined2>(this,0x79a);
    /* ST_CALLSITE[00486CD5]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar3 = st::fn_004049B7(STField<char>(this,0x24));
    if (bVar3 == 1) {
      iVar5 = STField<int>(this,0x24);
      iVar7 = 6;
LAB_00486cfc:

      uVar6 = st::fn_0040186B(iVar5,iVar7);
      *(short *)(puVar1 + 0x22) = (short)uVar6;
    }
    else {
      if (bVar3 == 2) {
        iVar5 = STField<int>(this,0x24);
        iVar7 = 0x83;
        goto LAB_00486cfc;
      }
      *(undefined2 *)(puVar1 + 0x22) = 0;
    }
    *(undefined2 *)(puVar1 + 0x26) = STField<undefined2>(this,0x7a2);
    *(undefined2 *)(puVar1 + 0x20) = STField<undefined2>(this,0x7b6);
    *(undefined2 *)(puVar1 + 0x24) = 0;
    *(undefined2 *)(puVar1 + 0x28) = STField<undefined2>(this,0x7be);
  }
  *(undefined4 *)(puVar1 + 0x2a) = 0;
  puVar1[0x2e] = 0;
  /* ST_CALLSITE[00486D48]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
  st::fn_004018C5(static_cast<STFishC *>(this),&local_8,&local_6,(short *)((int)&param_1 + 2));
  puVar1[0x2e - STPiece<2,2>(param_1)] = 1;
  return;
}

// 00486E20 FUN_00486e20
#line 4 "decomp/ST.exe/functions/00486E20/decomp.c"
void __thiscall st::fn_00486E20(void *this,undefined4 *param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar6;
  int local_EAX_3188;
  int local_EAX_3446;
  int local_EAX_3805;
  int local_EAX_4175;
  int local_EAX_4482;
  int local_EAX_4718;
  int local_EAX_4936;
  AiPlrClassTy *pAVar3;
  STGroupBoatC *pSVar4;
  int iVar5;
  bool bVar7;
  uint local_8;
  puVar1 = param_1;
  memset(param_1, 0, 0x5c); /* compiler bulk-zero initialization */
  *param_1 = STField<undefined4>(this,0x6f7);
  local_8 = st::machine_word_boundary_cast<uint>(this);

  iVar6 = st::fn_00401F5A(STField<STBoatC_field_06F7State>(this,0x6f7));
  ((char *)puVar1)[1] = (char)iVar6;
  STField<undefined1>(puVar1,6) = 1;

  iVar5 = st::fn_0040226B(static_cast<STGameObjC *>(this));
  if (iVar5 == 0) {
    STField<undefined1>(puVar1,7) = 1;
  }
  else {
    STField<undefined1>(puVar1,7) = 0;
  }
  /* ST_CALLSITE[00486E71]: CALL dword ptr [EDX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  iVar5 = STStructuralVirtualCall<undefined4>(this, 0x8);
  if (iVar5 == 1) {
    ((undefined1 *)puVar1)[2] = 1;
  }
  else {
    ((undefined1 *)puVar1)[2] = 0;
  }
  if (STField<uint>(this,0x24) != (uint)*(byte *)(STField<int>(this,0x10) + 0x112d))
  goto cf_common_exit_00486ED3;
  bVar2 = ((byte *)puVar1)[1];
  if (bVar2 != 0) {
    if (bVar2 < 3) {
      /* ST_CALLSITE[00486EEA]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      bVar2 = st::fn_004049B7(STField<char>(this,0x24));
      if (bVar2 == 3) goto cf_common_exit_00486ED3;
    }
    else if ((bVar2 == 3) &&
            /* ST_CALLSITE[00486EB7]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
            ((bVar2 = st::fn_004049B7(STField<char>(this,0x24)), bVar2 == 1 ||
             /* ST_CALLSITE[00486ECA]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
             (bVar2 = st::fn_004049B7(STField<char>(this,0x24)), bVar2 == 2)))) {
cf_common_exit_00486ED3:
      STField<undefined1>(puVar1,5) = 3;
      return;
    }
  }
  STField<undefined1>(puVar1,5) = 1;
  STField<undefined1>(puVar1,0x39) = 1;
  ((undefined1 *)puVar1)[0xe] = 1;
  STField<undefined1>(puVar1,0x37) = 1;
  STField<undefined1>(puVar1,0x36) = 1;
  *(undefined1 *)(STField<int>(this,0x7ee) + 0x36 + (int)puVar1) = 3;
  switch(STField<undefined4>(this,0x6f7)) {
  case 1:
  case 2:
  case 3:
  case 10:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x26:
  case 0x27:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    ((undefined1 *)puVar1)[3] = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 6;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) {
      ((undefined1 *)puVar1)[4] = 3;
    }
    else {
      ((undefined1 *)puVar1)[4] = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 4) || (STField<int>(this,0x459) == 0x68)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field94_0x15b == 0) ||
            (STField<int>(this,0x716) == STField<int>(this,0x712))) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if ((STField<int>(this,0x45d) != 6) && (STField<int>(this,0x459) != 0x6a)) {
      ((undefined1 *)puVar1)[5] = 1;
      goto switchD_00486f27_default;
    }
    break;
  case 4:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    ((undefined1 *)puVar1)[3] = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 9;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) {
      ((undefined1 *)puVar1)[4] = 3;
    }
    else {
      ((undefined1 *)puVar1)[4] = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 4) || (STField<int>(this,0x459) == 0x68)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field94_0x15b == 0) ||
            (STField<int>(this,0x716) == STField<int>(this,0x712))) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if ((STField<int>(this,0x45d) != 10) && (STField<int>(this,0x459) != 0x6e)) {
      if (0 < STField<int>(this,0x7be)) {
        ((undefined1 *)puVar1)[5] = 1;
        goto switchD_00486f27_default;
      }
      goto cf_common_join_004881B5;
    }
    break;
  case 5:
  case 0xb:
  case 0x11:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    ((undefined1 *)puVar1)[3] = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 8;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) {
      ((undefined1 *)puVar1)[4] = 3;
    }
    else {
      ((undefined1 *)puVar1)[4] = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 4) || (STField<int>(this,0x459) == 0x68)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field94_0x15b == 0) ||
            (STField<int>(this,0x716) == STField<int>(this,0x712))) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if ((STField<int>(this,0x45d) == 7) || (STField<int>(this,0x459) == 0x6b)) break;
    iVar5 = STField<int>(this,0x7be);
    goto LAB_0048797b;
  case 6:
  case 0x12:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    ((undefined1 *)puVar1)[3] = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 7;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) {
      ((undefined1 *)puVar1)[4] = 3;
    }
    else {
      ((undefined1 *)puVar1)[4] = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 4) || (STField<int>(this,0x459) == 0x68))
    goto LAB_00487aa9;
    if ((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field94_0x15b != 0) {
      bVar7 = STField<int>(this,0x716) == STField<int>(this,0x712);
LAB_00487a9b:
      if (!bVar7) {
        STField<undefined1>(puVar1,0x12) = 1;
        goto LAB_00487aad;
      }
    }
LAB_00487aa3:
    STField<undefined1>(puVar1,0x12) = 0;
    goto LAB_00487aad;
  case 7:
  case 0x13:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 0xd;
    STField<undefined1>(puVar1,0xb) = 1;
    ((undefined1 *)puVar1)[3] = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    if (STField<int>(this,0x7ca) == 0) {
      STField<undefined1>(puVar1,0xe) = 0x13;
    }
    else {
      STField<undefined1>(puVar1,0xe) = 0x14;
    }
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 0xe) || (STField<int>(this,0x459) == 0x72)) {
      ((undefined1 *)puVar1)[4] = 3;
    }
    else {
      ((undefined1 *)puVar1)[4] = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 4) || (STField<int>(this,0x459) == 0x68)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field94_0x15b == 0) ||
            (STField<int>(this,0x716) == STField<int>(this,0x712))) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if (STField<int>(this,0x7ca) == 0) {
      if ((STField<int>(this,0x45d) == 0xf) || (STField<int>(this,0x459) == 0x73)) {
LAB_00487782:
        ((undefined1 *)puVar1)[5] = 3;
      }
      else {
        ((undefined1 *)puVar1)[5] = 1;
      }
    }
    else {

      iVar5 = st::fn_0040406B(this,STField<short>(this,0x5b),STField<short>(this,0x5d),
                                 STField<short>(this,0x5f),reinterpret_cast<undefined2 *>(&local_8),
                                 (undefined2 *)((int)&local_8 + 2),(short *)((int)&param_1 + 2));
      if (iVar5 == 0) {
        ((undefined1 *)puVar1)[5] = 0;
      }
      else {
        if ((STField<int>(this,0x45d) == 0x10) || (STField<int>(this,0x459) == 0x74))
        goto LAB_00487782;
        ((undefined1 *)puVar1)[5] = 1;
      }
    }
    if (STField<int>(this,0x7ca) != 0) {
      ((undefined1 *)puVar1)[4] = 0;
    }
    goto switchD_00486f27_default;
  case 8:
  case 0x14:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 0x11;
    STField<undefined1>(puVar1,0xb) = 1;
    ((undefined1 *)puVar1)[3] = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 0x12;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 0xc) || (STField<int>(this,0x459) == 0x70)) {
      ((undefined1 *)puVar1)[4] = 3;
    }
    else {
      ((undefined1 *)puVar1)[4] = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 4) || (STField<int>(this,0x459) == 0x68))
    goto LAB_00487bab;
    if ((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field94_0x15b != 0) {
      bVar7 = STField<int>(this,0x716) == STField<int>(this,0x712);
LAB_00487b9d:
      if (!bVar7) {
        STField<undefined1>(puVar1,0x12) = 1;
        goto LAB_00487baf;
      }
    }
LAB_00487ba5:
    STField<undefined1>(puVar1,0x12) = 0;
    goto LAB_00487baf;
  case 9:
  case 0x15:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    if (STField<uint>(this,0x24) == (uint)DAT_0080874d) {
      if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
        STField<undefined1>(puVar1,0xf) = 3;
      }
      else {
        STField<undefined1>(puVar1,0xf) = 1;
      }
      if ((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) {
        ((undefined1 *)puVar1)[4] = 3;
      }
      else {
        ((undefined1 *)puVar1)[4] = 1;
      }
      if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
        STField<undefined1>(puVar1,0x11) = 3;
        STField<undefined1>(puVar1,0x13) = 1;
      }
      else {
        STField<undefined1>(puVar1,0x11) = 1;
        STField<undefined1>(puVar1,0x13) = 1;
      }
    }
    goto switchD_00486f27_default;
  case 0xc:
  case 0x18:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 0xe;
    STField<undefined1>(puVar1,0xb) = 1;
    ((undefined1 *)puVar1)[3] = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 0x10;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 0x11) || (STField<int>(this,0x459) == 0x75)) {
      ((undefined1 *)puVar1)[4] = 3;
    }
    else {
      ((undefined1 *)puVar1)[4] = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 4) || (STField<int>(this,0x459) == 0x68)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field94_0x15b == 0) ||
            (STField<int>(this,0x716) == STField<int>(this,0x712))) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if ((STField<int>(this,0x45d) != 0x12) && (STField<int>(this,0x459) != 0x76)) {
      ((undefined1 *)puVar1)[5] = 1;
      goto switchD_00486f27_default;
    }
    break;
  case 0x16:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    ((undefined1 *)puVar1)[3] = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    if (STField<int>(this,0x732) == 1) {
      STField<undefined1>(puVar1,0xe) = 0xc;
    }
    else {
      STField<undefined1>(puVar1,0xe) = 0xb;
    }
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) {
      ((undefined1 *)puVar1)[4] = 3;
    }
    else {
      ((undefined1 *)puVar1)[4] = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 4) || (STField<int>(this,0x459) == 0x68)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field94_0x15b == 0) ||
            (STField<int>(this,0x716) == STField<int>(this,0x712))) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if (STField<int>(this,0x732) == 1) {
      ((undefined1 *)puVar1)[5] = 1;
      goto switchD_00486f27_default;
    }
    goto LAB_00487975;
  case 0x17:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    ((undefined1 *)puVar1)[3] = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 10;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if (((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) &&
       (STField<int>(this,0x7de) == 0)) {
      ((undefined1 *)puVar1)[4] = 3;
    }
    else {
      ((undefined1 *)puVar1)[4] = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 4) || (STField<int>(this,0x459) == 0x68)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field94_0x15b == 0) ||
            (STField<int>(this,0x716) == STField<int>(this,0x712))) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if (((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) &&
       (STField<int>(this,0x7de) == 1)) {
      ((undefined1 *)puVar1)[5] = 3;
      goto switchD_00486f27_default;
    }
    goto LAB_00487bcf;
  case 0x19:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 0xe;
    STField<undefined1>(puVar1,0xb) = 1;
    ((undefined1 *)puVar1)[3] = 0x48;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 0x11) || (STField<int>(this,0x459) == 0x75))
    goto LAB_0048802a;
    ((undefined1 *)puVar1)[4] = 1;
    goto LAB_0048802e;
  case 0x1a:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 0x11;
    STField<undefined1>(puVar1,0xb) = 1;
    ((undefined1 *)puVar1)[3] = 0x48;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 0x12;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 0xc) || (STField<int>(this,0x459) == 0x70)) {
      ((undefined1 *)puVar1)[4] = 3;
    }
    else {
      ((undefined1 *)puVar1)[4] = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) != 0x16) && (STField<int>(this,0x459) != 0x7a)) {
      if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field95_0x15f != 0) &&

         (iVar5 = st::fn_004036A7(STField<int>(this,0x24)), iVar5 != 0)) {
        /* ST_CALLSITE[00487B96]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
        local_EAX_3446 = st::fn_00403594(static_cast<TLOBaseTy *>(this));
        bVar7 = local_EAX_3446 == 0;
        goto LAB_00487b9d;
      }
      goto LAB_00487ba5;
    }
LAB_00487bab:
    STField<undefined1>(puVar1,0x12) = 3;
LAB_00487baf:
    STField<undefined1>(puVar1,0x13) = 1;
    if ((STField<int>(this,0x45d) != 0xd) && (STField<int>(this,0x459) != 0x71)) {
LAB_00487bcf:
      ((undefined1 *)puVar1)[5] = 1;
      goto switchD_00486f27_default;
    }
    break;
  case 0x1b:
    STField<undefined1>(puVar1,9) = 2;
    if (STField<int>(this,0x7ca) == 0) {
      STField<undefined1>(puVar1,10) = 0x13;
    }
    else {
      STField<undefined1>(puVar1,10) = 0x14;
    }
    STField<undefined1>(puVar1,0xb) = 1;
    ((undefined1 *)puVar1)[3] = 0x48;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 0x18;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if (STField<int>(this,0x7ca) == 0) {
      if ((STField<int>(this,0x45d) == 0xf) || (STField<int>(this,0x459) == 0x73)) {
LAB_00487e0b:
        ((undefined1 *)puVar1)[4] = 3;
      }
      else {
        ((undefined1 *)puVar1)[4] = 1;
      }
    }
    else {

      iVar5 = st::fn_0040406B(this,STField<short>(this,0x5b),STField<short>(this,0x5d),
                                 STField<short>(this,0x5f),(undefined2 *)((int)&local_8 + 2),
                                 reinterpret_cast<undefined2 *>(&local_8),(short *)((int)&param_1 + 2));
      if (iVar5 == 0) {
        ((undefined1 *)puVar1)[4] = 0;
      }
      else {
        if ((STField<int>(this,0x45d) == 0x10) || (STField<int>(this,0x459) == 0x74))
        goto LAB_00487e0b;
        ((undefined1 *)puVar1)[4] = 1;
      }
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 0x16) || (STField<int>(this,0x459) == 0x7a)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if ((((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field95_0x15f == 0) ||

             (iVar5 = st::fn_004036A7(STField<int>(this,0x24)), iVar5 == 0)) ||
            /* ST_CALLSITE[00487E6F]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
            (local_EAX_4175 = st::fn_00403594(static_cast<TLOBaseTy *>(this)), local_EAX_4175 == 0)) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;

    iVar5 = st::fn_0040186B(STField<int>(this,0x24),0x5f);
    if (0 < iVar5) {
      if ((STField<int>(this,0x45d) != 0x15) || (STField<int>(this,0x635) != 2))
      goto LAB_00487ecd;
      goto LAB_00487eb7;
    }
    goto cf_common_join_004881B5;
  case 0x1c:
  case 0x23:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    ((undefined1 *)puVar1)[3] = 0x48;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 0;
    goto LAB_004879a0;
  case 0x1d:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 0x10;
    STField<undefined1>(puVar1,0xb) = 1;
    ((undefined1 *)puVar1)[3] = 0x48;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 0x18;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 0x12) || (STField<int>(this,0x459) == 0x76)) {
      ((undefined1 *)puVar1)[4] = 3;
    }
    else {
      ((undefined1 *)puVar1)[4] = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 0x16) || (STField<int>(this,0x459) == 0x7a)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if ((((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field95_0x15f == 0) ||

             (iVar5 = st::fn_004036A7(STField<int>(this,0x24)), iVar5 == 0)) ||
            /* ST_CALLSITE[00487CFD]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
            (local_EAX_3805 = st::fn_00403594(static_cast<TLOBaseTy *>(this)), local_EAX_3805 == 0)) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;

    iVar5 = st::fn_0040186B(STField<int>(this,0x24),0x5f);
    if (iVar5 < 1) goto cf_common_join_004881B5;
    if ((STField<int>(this,0x45d) == 0x15) && (STField<int>(this,0x635) == 2))
    goto LAB_00487eb7;
LAB_00487ecd:
    if (9 < STField<int>(this,0x71e)) {
      ((undefined1 *)puVar1)[5] = 1;
      goto switchD_00486f27_default;
    }
    goto cf_common_join_004881B5;
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x28:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    ((undefined1 *)puVar1)[3] = 0x48;
    STField<undefined1>(puVar1,0xd) = 0x2f;
LAB_004879a0:
    if (STField<uint>(this,0x24) == (uint)DAT_0080874d) {
      if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
        STField<undefined1>(puVar1,0xf) = 3;
      }
      else {
        STField<undefined1>(puVar1,0xf) = 1;
      }
      if ((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) {
LAB_0048802a:
        ((undefined1 *)puVar1)[4] = 3;
      }
      else {
        ((undefined1 *)puVar1)[4] = 1;
      }
LAB_0048802e:
      if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
        STField<undefined1>(puVar1,0x11) = 3;
      }
      else {
        STField<undefined1>(puVar1,0x11) = 1;
      }
      if ((STField<int>(this,0x45d) == 0x16) || (STField<int>(this,0x459) == 0x7a)) {
        STField<undefined1>(puVar1,0x12) = 3;
        STField<undefined1>(puVar1,0x13) = 1;
      }
      else if ((((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field95_0x15f == 0) ||

               (iVar5 = st::fn_004036A7(STField<int>(this,0x24)), iVar5 == 0)) ||
              /* ST_CALLSITE[0048808E]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
              (local_EAX_4718 = st::fn_00403594(static_cast<TLOBaseTy *>(this)), local_EAX_4718 == 0)) {
        STField<undefined1>(puVar1,0x12) = 0;
        STField<undefined1>(puVar1,0x13) = 1;
      }
      else {
        STField<undefined1>(puVar1,0x12) = 1;
        STField<undefined1>(puVar1,0x13) = 1;
      }
    }
    goto switchD_00486f27_default;
  case 0x21:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    ((undefined1 *)puVar1)[3] = 0x48;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 8;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) {
      ((undefined1 *)puVar1)[4] = 3;
    }
    else {
      ((undefined1 *)puVar1)[4] = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 0x16) || (STField<int>(this,0x459) == 0x7a)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if ((((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field95_0x15f == 0) ||

             (iVar5 = st::fn_004036A7(STField<int>(this,0x24)), iVar5 == 0)) ||
            /* ST_CALLSITE[00487FA2]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
            (local_EAX_4482 = st::fn_00403594(static_cast<TLOBaseTy *>(this)), local_EAX_4482 == 0)) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if ((STField<int>(this,0x45d) != 7) && (STField<int>(this,0x459) != 0x6b)) {
      if (0 < STField<int>(this,0x7be)) {
        ((undefined1 *)puVar1)[5] = 1;
        goto switchD_00486f27_default;
      }
      goto cf_common_join_004881B5;
    }
    break;
  case 0x22:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    ((undefined1 *)puVar1)[3] = 0x48;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 7;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) {
      ((undefined1 *)puVar1)[4] = 3;
    }
    else {
      ((undefined1 *)puVar1)[4] = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) != 0x16) && (STField<int>(this,0x459) != 0x7a)) {
      if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field95_0x15f != 0) &&

         (iVar5 = st::fn_004036A7(STField<int>(this,0x24)), iVar5 != 0)) {
        /* ST_CALLSITE[00487A94]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
        local_EAX_3188 = st::fn_00403594(static_cast<TLOBaseTy *>(this));
        bVar7 = local_EAX_3188 == 0;
        goto LAB_00487a9b;
      }
      goto LAB_00487aa3;
    }
LAB_00487aa9:
    STField<undefined1>(puVar1,0x12) = 3;
LAB_00487aad:
    STField<undefined1>(puVar1,0x13) = 1;
    if ((STField<int>(this,0x45d) != 9) && (STField<int>(this,0x459) != 0x6d)) {
      ((undefined1 *)puVar1)[5] = 1;
      goto switchD_00486f27_default;
    }
    break;
  case 0x24:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 0;
    STField<undefined1>(puVar1,0xb) = 1;
    ((undefined1 *)puVar1)[3] = 0x48;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 0x18;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    ((undefined1 *)puVar1)[4] = 0;
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 0x16) || (STField<int>(this,0x459) == 0x7a)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if ((((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field95_0x15f == 0) ||

             (iVar5 = st::fn_004036A7(STField<int>(this,0x24)), iVar5 == 0)) ||
            /* ST_CALLSITE[00488168]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
            (local_EAX_4936 = st::fn_00403594(static_cast<TLOBaseTy *>(this)), local_EAX_4936 == 0)) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if ((STField<int>(this,0x45d) != 0x15) || (STField<int>(this,0x635) != 2)) {
      if (9 < STField<int>(this,0x71e)) {
        ((undefined1 *)puVar1)[5] = 1;
        goto switchD_00486f27_default;
      }
      goto cf_common_join_004881B5;
    }
LAB_00487eb7:
    if (STField<int>(this,0x71e) < 10) goto cf_common_join_004881B5;
    break;
  case 0x25:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    ((undefined1 *)puVar1)[3] = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    if (STField<int>(this,0x732) == 1) {
      STField<undefined1>(puVar1,0xe) = 0xc;
    }
    else {
      STField<undefined1>(puVar1,0xe) = 0xb;
    }
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    ((undefined1 *)puVar1)[4] = 0;
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 4) || (STField<int>(this,0x459) == 0x68)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field94_0x15b == 0) ||
            (STField<int>(this,0x716) == STField<int>(this,0x712))) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if (STField<int>(this,0x732) == 1) {
      ((undefined1 *)puVar1)[5] = 1;
      goto switchD_00486f27_default;
    }
LAB_00487975:
    iVar5 = STField<int>(this,0x726);
LAB_0048797b:
    if (0 < iVar5) {
      ((undefined1 *)puVar1)[5] = 1;
      goto switchD_00486f27_default;
    }
cf_common_join_004881B5:
    ((undefined1 *)puVar1)[5] = 0;
  default:
    goto switchD_00486f27_default;
  }
  ((undefined1 *)puVar1)[5] = 3;
switchD_00486f27_default:
  pAVar3 = st::fn_00401DC5(STField<char>(this,0x24));
  if (pAVar3 == nullptr) {
    STField<undefined1>(puVar1,0x15) = 0;
  }
  else {
    pSVar4 = st::fn_00405CF9(STField<char>(this,0x24),STField<ushort>(this,0x30));
    if (pSVar4 == nullptr) {
      STField<undefined1>(puVar1,0x15) = 0;
    }
    else if (pSVar4->field_001C == nullptr) {
      STField<undefined1>(puVar1,0x15) = 1;
    }
    else {
      STField<undefined1>(puVar1,0x15) = 3;
    }
  }
  switch(STField<undefined4>(this,0x6f7)) {
  case 0x16:
  case 0x25:
    ((undefined1 *)puVar1)[0xd] = STField<undefined1>(this,0x726);
    break;
  case 0x17:
    ((undefined1 *)puVar1)[0xd] = STField<undefined1>(this,0x72a);
    break;
  default:
    ((undefined1 *)puVar1)[0xd] = 0;
    break;
  case 0x1b:
  case 0x1d:
  case 0x24:
    ((undefined1 *)puVar1)[0xd] = STField<undefined1>(this,0x71e);
    break;
  case 0x23:
    ((undefined1 *)puVar1)[0xd] = STField<undefined1>(this,0x722);
  }
  ((undefined1 *)puVar1)[7] = STField<undefined1>(this,0x7d2);
  STField<undefined1>(puVar1,0x1d) = STField<undefined1>(this,0x7d6);
  STField<undefined1>(puVar1,0x1e) = STField<undefined1>(this,0x7da);
  return;
}

// 00489950 FUN_00489950
#line 4 "decomp/ST.exe/functions/00489950/decomp.c"
/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=4, scalar_uses=0; sites=00489956 dereference: MOV AL,byte ptr [EBX + 0x281]
   | 00489967 dereference: MOV EAX,dword ptr [ESI] | 00489973 dereference: MOV dword ptr [ESI],0x0 |
   0048997C dereference: MOV AL,byte ptr [EBX + 0x281] */

void __fastcall st::fn_00489950(RecoveredRecord_00489950_C0CE8121 *param_1)

{
  RecoveredRecord_00489950_C0CE8121 *pRVar1;
  int iVar2;

  iVar2 = 0;
  if (param_1->field_0281 != '\0') {
    pRVar1 = param_1 + 1;
    do {
      if (*(DArrayTy **)pRVar1 != nullptr) {
        st::fn_006AE110(*(DArrayTy **)pRVar1);
        *(undefined4 *)pRVar1 = 0;
      }
      iVar2 = iVar2 + 1;
      pRVar1 = reinterpret_cast<RecoveredRecord_00489950_C0CE8121 *>(reinterpret_cast<byte *>(pRVar1) + 0x4);
    } while (iVar2 < (int)(uint)(byte)param_1->field_0281);
  }
  return;
}

// 0048A640 FUN_0048a640
#line 4 "decomp/ST.exe/functions/0048A640/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA794>00401E1A

   [STObjectFactoryApplier] Central object factory for 0x0104 (ST_OBJECT_TYPE_0104).
   Evidence: registry[14] at 007CA790 stores type 0x0104 and executable pointer 00401E1A; allocation
   size 2142 has no unique current class-layout match */

void * __cdecl st::fn_0048A640(void)

{
  STBoatC *pSVar1;

  /* ST_CALLSITE[0048A645]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__stdcall;pointer:/STBoatC;/uint */
  pSVar1 = st::pointer_boundary_cast<STBoatC *>(st::fn_006B04D0(0x85e));
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00402CDE(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 0048A840 FUN_0048a840
#line 4 "decomp/ST.exe/functions/0048A840/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall st::fn_0048A840(RecoveredRecordView_0048A840_B5CC239D *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;

  iVar3 = param_1->field_06F7;
  param_1->field_079A = *(undefined4 *)(&DAT_007a8b18 + iVar3 * 4);
  uVar1 = *(undefined4 *)(&DAT_007a8bb8 + iVar3 * 4);
  param_1->field_079E = uVar1;
  param_1->field_07A2 = uVar1;
  iVar2 = *(int *)(&DAT_007a8c58 + iVar3 * 4);
  param_1->field_07AA = iVar2;
  param_1->field_07A6 = iVar2;
  param_1->field_07B2 = iVar2 * 2;
  param_1->field_07AE = iVar2 * 2 * param_1->field_079E;
  param_1->field_07B6 = *(undefined4 *)(&DAT_007a8cf8 + iVar3 * 4);
  uVar1 = *(undefined4 *)(&DAT_007a8d98 + iVar3 * 4);
  param_1->field_07BA = uVar1;
  param_1->field_07BE = uVar1;
  if (iVar3 == 0x21) {

    iVar3 = st::fn_0040186B(param_1->field_0024,0x74);
    if (iVar3 == 0) {
      param_1->field_07BE = 0;
    }
  }
  return;
}

// 0048A910 FUN_0048a910
#line 4 "decomp/ST.exe/functions/0048A910/decomp.c"
void __fastcall st::fn_0048A910(RecoveredRecordView_0048A910_94DEC4B1 *param_1)

{
  ushort uVar1;
  ushort uVar2;
  switch(param_1->field_06F7) {
  case 1:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x55;
    param_1->field_0281 = 5;
    param_1->field_0239 = 0xffce;
    param_1->field_023B = 0xfff1;
    param_1->field_023F = 0x1e;
    param_1->field_0241 = 0xffce;
    param_1->field_0243 = 0xf;
    param_1->field_0247 = 0x1e;
    param_1->field_0249 = 0;
    param_1->field_024B = 0xffec;
    param_1->field_024F = 0x1e;
    uVar2 = 0xffa1;
    param_1->field_0251 = 0;
    param_1->field_025B = 0;
    param_1->field_02A8 = 0;
    param_1->field_0253 = 0x14;
    param_1->field_0257 = 0x1e;
    param_1->field_0259 = 0x2d;
    param_1->field_025F = 0x19;
    param_1->field_02B2 = 1;
    param_1->field_02A6 = 0x28;
    param_1->field_02AA = 0xffdf;
    param_1->field_02BF = 2;
    param_1->field_02B3 = 0xffa1;
    param_1->field_02B5 = 0x1e;
    uVar1 = 0x13;
    goto LAB_0048aa08;
  case 2:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x55;
    param_1->field_0281 = 5;
    param_1->field_0239 = 0xffd3;
    param_1->field_023B = 0xffec;
    param_1->field_023F = 0x1e;
    param_1->field_0241 = 0xffd3;
    param_1->field_0243 = 0x14;
    param_1->field_0247 = 0x1e;
    param_1->field_0249 = 10;
    param_1->field_024B = 0xffec;
    param_1->field_024F = 0x1e;
    param_1->field_0251 = 10;
    param_1->field_0253 = 0x14;
    param_1->field_025B = 0;
    param_1->field_02A6 = 0;
    param_1->field_02A8 = 0;
    param_1->field_0257 = 0x1e;
    param_1->field_0259 = 0x2d;
    param_1->field_025F = 0x19;
    param_1->field_02B2 = 1;
    param_1->field_02AA = 0xffdf;
    param_1->field_02BF = 2;
    param_1->field_02B3 = 0xff97;
    param_1->field_02B5 = 0x25;
    param_1->field_02B7 = 0x17;
    param_1->field_02B9 = 0xff97;
    param_1->field_02BB = 0xffdb;
    param_1->field_02BD = 0x17;
    return;
  case 3:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x87;
    param_1->field_0281 = 6;
    param_1->field_0239 = 0xffb5;
    param_1->field_023B = 0xffe2;
    param_1->field_023F = 0x2d;
    param_1->field_0241 = 0xffb5;
    param_1->field_0243 = 0x1e;
    param_1->field_0247 = 0x2d;
    param_1->field_0249 = 0xfffb;
    param_1->field_024B = 0xffe2;
    param_1->field_024F = 0x2d;
    param_1->field_0251 = 0xfffb;
    param_1->field_0253 = 0x1e;
    param_1->field_025B = 0xffe2;
    param_1->field_0263 = 0x1e;
    param_1->field_02A8 = 0x1e;
    param_1->field_02AE = 0xffe2;
    param_1->field_02A6 = 0x28;
    param_1->field_02AC = 0x28;
    param_1->field_0257 = 0x2d;
    param_1->field_0259 = 0x3c;
    param_1->field_025F = 0x2d;
    param_1->field_0261 = 0x3c;
    param_1->field_0267 = 0x2d;
    param_1->field_02B2 = 2;
    param_1->field_02AA = 0xffdf;
    param_1->field_02B0 = 0xffdf;
    param_1->field_02BF = 2;
    param_1->field_02B3 = 0xff79;
    param_1->field_02B5 = 0x23;
    uVar1 = 0x27;
    goto LAB_0048b8e0;
  case 4:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x82;
    param_1->field_0281 = 6;
    param_1->field_0239 = 0xffba;
    param_1->field_023B = 0xffe7;
    param_1->field_023F = 0x28;
    param_1->field_0241 = 0xffba;
    param_1->field_0243 = 0x19;
    param_1->field_0247 = 0x28;
    param_1->field_0249 = 0;
    param_1->field_024B = 0xffe7;
    param_1->field_024F = 0x28;
    param_1->field_0251 = 0;
    param_1->field_0257 = 0x28;
    param_1->field_0259 = 0x46;
    param_1->field_025F = 0x28;
    param_1->field_0261 = 0x46;
    param_1->field_0267 = 0x28;
    param_1->field_02A6 = 0;
    param_1->field_02A8 = 0;
    param_1->field_0253 = 0x19;
    param_1->field_0263 = 0x19;
    param_1->field_025B = 0xffe7;
    param_1->field_02B2 = 1;
    param_1->field_02AA = 0xffdf;
    param_1->field_02BF = 2;
    param_1->field_02B3 = 0xff83;
    param_1->field_02B5 = 0x2a;
    param_1->field_02B7 = 0xfffa;
    param_1->field_02B9 = 0xff83;
    param_1->field_02BB = 0xffd6;
    param_1->field_02BD = 0xfffa;
    return;
  case 5:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x6e;
    param_1->field_0281 = 5;
    param_1->field_0239 = 0xffc4;
    param_1->field_023B = 0xfff1;
    param_1->field_023F = 0x32;
    param_1->field_0241 = 0xffc4;
    param_1->field_0243 = 0xf;
    param_1->field_0247 = 0x32;
    param_1->field_0249 = 0xfffb;
    param_1->field_024B = 0xfff1;
    param_1->field_024F = 0x32;
    param_1->field_0251 = 0xfffb;
    param_1->field_025B = 0;
    param_1->field_02A6 = 0;
    param_1->field_02A8 = 0;
    param_1->field_0253 = 0xf;
    param_1->field_0257 = 0x32;
    param_1->field_0259 = 0x41;
    param_1->field_025F = 0x23;
    param_1->field_02B2 = 1;
    param_1->field_02AA = 0xffdf;
    param_1->field_02BF = 2;
    uVar2 = 0xff88;
    param_1->field_02B3 = 0xff88;
    param_1->field_02B5 = 0x1e;
    uVar1 = 0x1d;
LAB_0048aa08:
    param_1->field_02B7 = uVar1;
    param_1->field_02B9 = uVar2;
    param_1->field_02BB = 0xffe2;
    param_1->field_02BD = uVar1;
    return;
  case 6:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x7d;
    param_1->field_0281 = 4;
    param_1->field_0239 = 0xffc4;
    param_1->field_023B = 0;
    param_1->field_023F = 0x3c;
    param_1->field_0241 = 0;
    param_1->field_0243 = 0;
    param_1->field_0247 = 0x23;
    param_1->field_0249 = 0x32;
    param_1->field_024B = 0;
    param_1->field_024F = 0x32;
    param_1->field_0251 = 100;
    param_1->field_0253 = 0;
    param_1->field_0257 = 0x1e;
    param_1->field_02B2 = 1;
    param_1->field_02A6 = 0;
    param_1->field_02A8 = 0;
    param_1->field_02AA = 0xffdf;
    goto LAB_0048c3fc;
  case 7:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x8c;
    param_1->field_0281 = 9;
    param_1->field_0239 = 0xffba;
    param_1->field_023B = 0xffc9;
    param_1->field_023F = 0x37;
    param_1->field_0241 = 0;
    param_1->field_0243 = 0xffc9;
    param_1->field_0247 = 0x37;
    param_1->field_0249 = 0x46;
    param_1->field_024B = 0xffbf;
    param_1->field_0253 = 0;
    param_1->field_0259 = 0;
    param_1->field_025B = 0;
    param_1->field_0263 = 0;
    param_1->field_0269 = 0xffba;
    param_1->field_0271 = 0;
    param_1->field_0279 = 0x46;
    param_1->field_024F = 0x37;
    param_1->field_0257 = 0x37;
    param_1->field_025F = 0x37;
    param_1->field_0267 = 0x37;
    param_1->field_026B = 0x37;
    param_1->field_026F = 0x37;
    param_1->field_0273 = 0x37;
    param_1->field_0277 = 0x37;
    param_1->field_027F = 0x37;
    param_1->field_0261 = 0x41;
    param_1->field_027B = 0x41;
    param_1->field_0251 = 0xffc4;
    param_1->field_02BF = 2;
    param_1->field_02B3 = 0xff7e;
    param_1->field_02B5 = 0x62;
    param_1->field_02B7 = 0xffda;
    param_1->field_02B9 = 0xff7e;
    param_1->field_02BB = 0xff9e;
    param_1->field_02BD = 0xffda;
    return;
  case 8:
  case 0x14:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x78;
    param_1->field_0281 = 5;
    param_1->field_0239 = 0xffbf;
    param_1->field_023B = 0xffec;
    param_1->field_023F = 0x32;
    param_1->field_0241 = 0xffbf;
    param_1->field_0243 = 0x14;
    param_1->field_0247 = 0x32;
    param_1->field_0249 = 0xf;
    param_1->field_024B = 0xfff1;
    uVar2 = 0xff7e;
    param_1->field_024F = 0x2d;
    param_1->field_0251 = 0xf;
    param_1->field_0253 = 0xf;
    param_1->field_0257 = 0x2d;
    param_1->field_0259 = 0x4b;
    param_1->field_025B = 0;
    param_1->field_025F = 0x23;
    param_1->field_02BF = 2;
    param_1->field_02B3 = 0xff7e;
    param_1->field_02B5 = 0x2d;
    goto LAB_0048c418;
  case 9:
  case 0x15:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x3c;
    param_1->field_0281 = 1;
    param_1->field_0239 = 0;
    param_1->field_023B = 0;
    param_1->field_023F = 0x3c;
    return;
  case 10:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x69;
    param_1->field_0281 = 7;
    param_1->field_0239 = 0xffbf;
    param_1->field_023B = 0xffec;
    param_1->field_023F = 0x23;
    param_1->field_0241 = 0xffbf;
    param_1->field_0243 = 0x14;
    param_1->field_0247 = 0x23;
    param_1->field_0249 = 0xfffb;
    param_1->field_024B = 0xffec;
    param_1->field_024F = 0x23;
    param_1->field_0251 = 0xfffb;
    param_1->field_026B = 0;
    param_1->field_025F = 0x19;
    param_1->field_0267 = 0x19;
    param_1->field_026F = 0x19;
    param_1->field_02A8 = 0;
    uVar1 = 0x21;
    uVar2 = 0xff8d;
    param_1->field_0253 = 0x14;
    param_1->field_0257 = 0x23;
    param_1->field_0259 = 0x32;
    param_1->field_025B = 0xfff1;
    param_1->field_0261 = 0x32;
    param_1->field_0263 = 0xf;
    param_1->field_0269 = 0x55;
    param_1->field_02B2 = 1;
    param_1->field_02A6 = 0x3c;
    param_1->field_02AA = 0x21;
    param_1->field_02BF = 2;
    param_1->field_02B3 = 0xff8d;
    param_1->field_02B5 = 0x23;
    goto LAB_0048bb5a;
  case 0xb:
    uVar1 = 0;
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x78;
    param_1->field_0281 = 6;
    param_1->field_0239 = 0xffba;
    param_1->field_023B = 0xffe7;
    param_1->field_023F = 0x28;
    param_1->field_0241 = 0xffba;
    param_1->field_0243 = 0x19;
    param_1->field_0247 = 0x28;
    param_1->field_0249 = 0xfff6;
    param_1->field_024B = 0xffe2;
    param_1->field_024F = 0x2d;
    param_1->field_0251 = 0xfff6;
    param_1->field_025F = 0x28;
    param_1->field_0253 = 0x1e;
    param_1->field_0257 = 0x2d;
    param_1->field_0259 = 0x32;
    param_1->field_025B = 0;
    param_1->field_0261 = 0x5f;
    param_1->field_0263 = 0;
    param_1->field_0267 = 0x1e;
    param_1->field_02B2 = 1;
    param_1->field_02A6 = 0;
    param_1->field_02A8 = 0;
    param_1->field_02AA = 0xffdf;
    param_1->field_02BF = 2;
    uVar2 = 0xff90;
    param_1->field_02B3 = 0xff90;
    param_1->field_02B5 = 0x23;
LAB_0048bb5a:
    param_1->field_02B7 = uVar1;
    param_1->field_02B9 = uVar2;
    param_1->field_02BB = 0xffdd;
    param_1->field_02BD = uVar1;
    return;
  case 0xc:
  case 0x18:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x87;
    param_1->field_0281 = 9;
    param_1->field_0239 = 0xffa6;
    param_1->field_023B = 0xffe2;
    param_1->field_023F = 0x28;
    param_1->field_0241 = 0xffa6;
    param_1->field_0243 = 0x1e;
    param_1->field_0247 = 0x28;
    param_1->field_0249 = 0xffce;
    param_1->field_024B = 0xffe2;
    param_1->field_024F = 0x28;
    param_1->field_0251 = 0xffce;
    param_1->field_0253 = 0x1e;
    param_1->field_0257 = 0x28;
    param_1->field_0263 = 0x28;
    param_1->field_0273 = 0x28;
    param_1->field_0259 = 5;
    param_1->field_025B = 0xffd8;
    param_1->field_0261 = 5;
    param_1->field_026B = 0xffd8;
    param_1->field_027B = 0;
    param_1->field_027F = 0x23;
    param_1->field_02B5 = 0x23;
    param_1->field_025F = 0x32;
    param_1->field_0267 = 0x32;
    param_1->field_0269 = 0x37;
    param_1->field_026F = 0x2d;
    param_1->field_0271 = 0x37;
    param_1->field_0277 = 0x2d;
    param_1->field_0279 = 100;
    param_1->field_02BF = 2;
    param_1->field_02B3 = 0xff79;
    uVar1 = 0x10;
LAB_0048b8e0:
    param_1->field_02B7 = uVar1;
    param_1->field_02B9 = 0xff79;
LAB_0048b8ee:
    param_1->field_02BB = 0xffdd;
    param_1->field_02BD = uVar1;
    return;
  case 0xd:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x5a;
    param_1->field_0281 = 4;
    param_1->field_0239 = 0xffdd;
    param_1->field_023B = 0xffe7;
    param_1->field_023F = 0x2d;
    param_1->field_0241 = 0xffdd;
    param_1->field_0243 = 0x19;
    param_1->field_0247 = 0x2d;
    param_1->field_0249 = 0x19;
    param_1->field_024B = 0;
    param_1->field_02B3 = 0xff9c;
    param_1->field_02B9 = 0xff9c;
    param_1->field_024F = 0x23;
    param_1->field_0251 = 0x3c;
    param_1->field_0253 = 0;
    param_1->field_0257 = 0xf;
    param_1->field_02B2 = 1;
    param_1->field_02A6 = 0;
    param_1->field_02A8 = 0;
    param_1->field_02AA = 0xffdf;
    param_1->field_02BF = 2;
    param_1->field_02B5 = 0x14;
    param_1->field_02B7 = 0;
    param_1->field_02BB = 0xffec;
    param_1->field_02BD = 0;
    return;
  case 0xe:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x5f;
    param_1->field_0281 = 5;
    param_1->field_0239 = 0xffce;
    param_1->field_023B = 0xffe2;
    param_1->field_023F = 0x28;
    param_1->field_0241 = 0xffce;
    param_1->field_0243 = 0x1e;
    param_1->field_02A8 = 0x1e;
    param_1->field_0247 = 0x28;
    param_1->field_0249 = 0x19;
    param_1->field_025B = 0;
    param_1->field_02A6 = 0x28;
    param_1->field_02AA = 0xffdf;
    param_1->field_02AC = 0x28;
    param_1->field_02B0 = 0xffdf;
    param_1->field_024B = 0xffe7;
    uVar1 = 3;
    param_1->field_024F = 0x2d;
    param_1->field_0251 = 0x19;
    param_1->field_0253 = 0x19;
    param_1->field_0257 = 0x2d;
    param_1->field_0259 = 0x3c;
    param_1->field_025F = 0x23;
    param_1->field_02B2 = 2;
    param_1->field_02AE = 0xffe2;
    param_1->field_02BF = 2;
    param_1->field_02B3 = 0xff9c;
    param_1->field_02B5 = 0x23;
    param_1->field_02B7 = 3;
    param_1->field_02B9 = 0xff9c;
    goto LAB_0048b8ee;
  case 0xf:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x73;
    param_1->field_0281 = 6;
    param_1->field_0239 = 0xffc9;
    param_1->field_023B = 0xffdd;
    param_1->field_023F = 0x2d;
    param_1->field_0241 = 0xffc9;
    param_1->field_0243 = 0x23;
    param_1->field_0247 = 0x2d;
    param_1->field_0249 = 0;
    param_1->field_024B = 0xffdd;
    param_1->field_024F = 0x2d;
    param_1->field_0257 = 0x2d;
    param_1->field_025F = 0x2d;
    param_1->field_0267 = 0x2d;
    param_1->field_025B = 0xffdd;
    param_1->field_0251 = 0;
    param_1->field_0253 = 0x23;
    param_1->field_0263 = 0x23;
    param_1->field_02A6 = 0x46;
    param_1->field_02AC = 0x46;
    param_1->field_02AA = 0xffdf;
    param_1->field_02B0 = 0xffdf;
    param_1->field_0259 = 0x32;
    param_1->field_0261 = 0x32;
    param_1->field_02B2 = 2;
    param_1->field_02A8 = 0x1e;
    param_1->field_02AE = 0xffe2;
    param_1->field_02BF = 2;
    param_1->field_02B3 = 0xff92;
    param_1->field_02B5 = 0x19;
    param_1->field_02B7 = 0xffe6;
    param_1->field_02B9 = 0xff92;
    param_1->field_02BB = 0xffe7;
    param_1->field_02BD = 0xffe6;
    return;
  case 0x10:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x5f;
    param_1->field_0281 = 5;
    param_1->field_0239 = 0xffd3;
    param_1->field_023B = 0xffe2;
    param_1->field_023F = 0x28;
    param_1->field_0241 = 0xffd3;
    param_1->field_0243 = 0x1e;
    param_1->field_0247 = 0x28;
    param_1->field_0249 = 0;
    param_1->field_0253 = 0x28;
    param_1->field_025F = 0x28;
    param_1->field_024B = 0xffd8;
    param_1->field_024F = 0x32;
    param_1->field_0257 = 0x32;
    param_1->field_0259 = 0x32;
    param_1->field_0251 = 0;
    param_1->field_025B = 0;
    param_1->field_02B2 = 1;
    param_1->field_02A6 = 0;
    param_1->field_02A8 = 0;
    param_1->field_02AA = 0xffdf;
    param_1->field_02BF = 2;
    param_1->field_02B3 = 0xff97;
    param_1->field_02B5 = 10;
    param_1->field_02B7 = 0;
    param_1->field_02B9 = 0xff97;
    param_1->field_02BB = 0xfff6;
    param_1->field_02BD = 0;
    return;
  case 0x11:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x73;
    param_1->field_0281 = 5;
    param_1->field_0239 = 0xffc9;
    param_1->field_023B = 0xffec;
    param_1->field_023F = 0x37;
    param_1->field_0241 = 0xffc9;
    param_1->field_0243 = 0x14;
    param_1->field_0247 = 0x37;
    param_1->field_0249 = 0x1e;
    param_1->field_024B = 0xfff1;
    param_1->field_024F = 0x2d;
    param_1->field_0257 = 0x2d;
    param_1->field_025B = 0;
    param_1->field_02A6 = 0;
    param_1->field_02A8 = 0;
    param_1->field_0251 = 0x1e;
    param_1->field_025F = 0x1e;
    param_1->field_0253 = 0xf;
    param_1->field_0259 = 0x55;
    param_1->field_02B2 = 1;
    param_1->field_02AA = 0xffdf;
    param_1->field_02BF = 2;
    param_1->field_02B3 = 0xff83;
    param_1->field_02B5 = 0x28;
    param_1->field_02B7 = 0x21;
    param_1->field_02B9 = 0xff83;
    param_1->field_02BB = 0xffd8;
    param_1->field_02BD = 0x21;
    return;
  case 0x12:
  case 0x27:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x7d;
    param_1->field_0281 = 3;
    param_1->field_0239 = 0xffc4;
    param_1->field_023B = 0;
    param_1->field_023F = 0x3c;
    param_1->field_0241 = 0;
    param_1->field_0243 = 0;
    param_1->field_0247 = 0x23;
    param_1->field_0249 = 0x3c;
    param_1->field_024B = 0;
    param_1->field_024F = 0x37;
    param_1->field_02B2 = 2;
    param_1->field_02A6 = 0;
    param_1->field_02A8 = 0x14;
    param_1->field_02AA = 0xffdf;
    param_1->field_02AC = 0;
    param_1->field_02AE = 0xffec;
    param_1->field_02B0 = 0xffdf;
LAB_0048c3fc:
    uVar2 = 0xff90;
    param_1->field_02BF = 2;
    param_1->field_02B3 = 0xff90;
    param_1->field_02B5 = 0x2d;
LAB_0048c418:
    uVar1 = 0x1d;
LAB_0048c41d:
    param_1->field_02B7 = uVar1;
    param_1->field_02B9 = uVar2;
    param_1->field_02BB = 0xffd3;
    param_1->field_02BD = uVar1;
    return;
  case 0x13:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x8c;
    param_1->field_0281 = 9;
    param_1->field_0239 = 0xffba;
    param_1->field_023B = 0xffc9;
    param_1->field_023F = 0x37;
    param_1->field_0241 = 0;
    param_1->field_0243 = 0xffc9;
    param_1->field_0247 = 0x37;
    param_1->field_0249 = 0x46;
    param_1->field_024B = 0xffbf;
    param_1->field_0253 = 0;
    param_1->field_0259 = 0;
    param_1->field_025B = 0;
    param_1->field_0263 = 0;
    param_1->field_0269 = 0xffba;
    param_1->field_0271 = 0;
    param_1->field_0279 = 0x46;
    param_1->field_024F = 0x37;
    param_1->field_0257 = 0x37;
    param_1->field_025F = 0x37;
    param_1->field_0267 = 0x37;
    param_1->field_026B = 0x37;
    param_1->field_026F = 0x37;
    param_1->field_0273 = 0x37;
    param_1->field_0277 = 0x37;
    param_1->field_027F = 0x37;
    param_1->field_0261 = 0x41;
    param_1->field_027B = 0x41;
    param_1->field_0251 = 0xffc4;
    param_1->field_02BF = 2;
    param_1->field_02B3 = 0xff7e;
    param_1->field_02B5 = 0x5f;
    param_1->field_02B7 = 0xffe3;
    param_1->field_02B9 = 0xff7e;
    param_1->field_02BB = 0xffa1;
    param_1->field_02BD = 0xffe3;
    return;
  case 0x16:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x6e;
    param_1->field_0281 = 4;
    param_1->field_0239 = 0xffc9;
    param_1->field_023B = 0;
    param_1->field_023F = 0x32;
    param_1->field_0241 = 0x19;
    param_1->field_0243 = 0xffe2;
    param_1->field_0247 = 0x32;
    param_1->field_0249 = 0x19;
    param_1->field_024B = 0x1e;
    param_1->field_02A8 = 0x1e;
    param_1->field_0253 = 0;
    param_1->field_02A6 = 0x28;
    param_1->field_02AC = 0x28;
    param_1->field_02AE = 0xffe2;
    param_1->field_024F = 0x32;
    param_1->field_02AA = 0xffdf;
    param_1->field_02B0 = 0xffdf;
    param_1->field_0251 = 0x32;
    param_1->field_0257 = 0x2d;
    param_1->field_02B2 = 2;
    param_1->field_02BF = 2;
    param_1->field_02B3 = 0xff92;
    param_1->field_02B5 = 0xf;
    param_1->field_02B7 = 3;
    param_1->field_02B9 = 0xff92;
    param_1->field_02BB = 0xfff1;
    param_1->field_02BD = 3;
    return;
  case 0x17:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x78;
    param_1->field_0281 = 6;
    param_1->field_0239 = 0xffc9;
    param_1->field_023B = 0;
    param_1->field_023F = 0x28;
    param_1->field_0241 = 0xffba;
    param_1->field_0243 = 0xffd8;
    param_1->field_0247 = 0x23;
    param_1->field_0249 = 0xffba;
    param_1->field_024B = 0x28;
    param_1->field_024F = 0x23;
    param_1->field_0259 = 0x1e;
    param_1->field_0261 = 0x1e;
    param_1->field_02A8 = 0x1e;
    param_1->field_0253 = 0;
    param_1->field_0257 = 0x28;
    param_1->field_02A6 = 0x46;
    param_1->field_02AC = 0x46;
    param_1->field_02AA = 0xffdf;
    param_1->field_02B0 = 0xffdf;
    param_1->field_025F = 0x32;
    param_1->field_0267 = 0x32;
    param_1->field_02B5 = 0x32;
    param_1->field_0251 = 0xffe2;
    param_1->field_025B = 0xfff1;
    param_1->field_0263 = 0xf;
    param_1->field_02B2 = 2;
    param_1->field_02AE = 0xffe2;
    param_1->field_02BF = 2;
    param_1->field_02B3 = 0xff92;
    param_1->field_02B7 = 0x1a;
    param_1->field_02B9 = 0xff92;
    param_1->field_02BB = 0xffce;
    param_1->field_02BD = 0x1a;
    return;
  case 0x19:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x5a;
    param_1->field_0281 = 3;
    param_1->field_0239 = 0xffce;
    param_1->field_023B = 0;
    param_1->field_023F = 0x28;
    param_1->field_0241 = 0;
    param_1->field_0243 = 0;
    param_1->field_0247 = 0x28;
    param_1->field_0249 = 0x32;
    param_1->field_024B = 0;
    param_1->field_024F = 0x28;
    param_1->field_02B2 = 0;
    break;
  case 0x1a:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x5f;
    param_1->field_0281 = 2;
    param_1->field_0239 = 0xffd8;
    param_1->field_023B = 0;
    param_1->field_023F = 0x32;
    param_1->field_0241 = 0x2d;
    param_1->field_0243 = 0;
    param_1->field_0247 = 0x37;
    param_1->field_02B2 = 0;
    break;
  case 0x1b:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x69;
    param_1->field_0281 = 3;
    param_1->field_0239 = 0xffd3;
    param_1->field_023B = 0xffd8;
    param_1->field_023F = 0x37;
    param_1->field_0241 = 0xffd3;
    param_1->field_0243 = 0x28;
    param_1->field_0247 = 0x37;
    param_1->field_0249 = 0x28;
    param_1->field_024B = 0;
    param_1->field_024F = 0x3c;
    param_1->field_02B2 = 0;
    break;
  case 0x1c:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x5a;
    param_1->field_0281 = 2;
    param_1->field_0239 = 0xfffb;
    param_1->field_023B = 0xffe2;
    param_1->field_023F = 0x23;
    param_1->field_0241 = 0xfffb;
    param_1->field_0243 = 0x1e;
    param_1->field_0247 = 0x23;
    goto cf_common_exit_0048C491;
  case 0x1d:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 100;
    param_1->field_0281 = 4;
    param_1->field_0239 = 0xffd8;
    param_1->field_023B = 0;
    param_1->field_023F = 0x1e;
    param_1->field_0241 = 0;
    param_1->field_0243 = 0;
    param_1->field_0247 = 0x1e;
    param_1->field_0249 = 0x23;
    param_1->field_024B = 0;
    param_1->field_024F = 0x1e;
    param_1->field_0251 = 0x3c;
    param_1->field_0253 = 0;
    param_1->field_0257 = 0x19;
    param_1->field_02B2 = 0;
    break;
  case 0x1e:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x5a;
    param_1->field_0281 = 4;
    param_1->field_0239 = 0xffd3;
    param_1->field_023B = 0;
    param_1->field_023F = 0x14;
    param_1->field_0241 = 0xfff1;
    param_1->field_0243 = 0;
    param_1->field_0247 = 0x14;
    param_1->field_0249 = 0x1e;
    param_1->field_024B = 0xffec;
    param_1->field_024F = 0x28;
    param_1->field_0251 = 0x1e;
    param_1->field_0253 = 0x14;
    param_1->field_0257 = 0x28;
    goto cf_common_exit_0048C491;
  case 0x1f:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 100;
    param_1->field_0281 = 2;
    param_1->field_0239 = 0xffc9;
    param_1->field_023B = 0;
    param_1->field_023F = 0x32;
    param_1->field_0241 = 0x19;
    param_1->field_0243 = 0;
    param_1->field_0247 = 0x50;
    goto cf_common_exit_0048C491;
  case 0x20:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 100;
    param_1->field_0281 = 4;
    param_1->field_0239 = 0x32;
    param_1->field_023B = 0;
    param_1->field_023F = 0x1e;
    param_1->field_0241 = 0;
    param_1->field_0243 = 0;
    param_1->field_0247 = 0x1e;
    param_1->field_0249 = 0xffbf;
    param_1->field_024B = 0xfff1;
    param_1->field_024F = 0x23;
    param_1->field_0251 = 0xffbf;
    param_1->field_0253 = 0xf;
    param_1->field_0257 = 0x23;
    goto cf_common_exit_0048C491;
  case 0x21:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 100;
    param_1->field_0281 = 3;
    param_1->field_0239 = 0xffc4;
    param_1->field_023B = 0xffe2;
    param_1->field_023F = 0x28;
    param_1->field_0241 = 0xffc4;
    param_1->field_0243 = 0x1e;
    param_1->field_0247 = 0x28;
    param_1->field_0249 = 10;
    param_1->field_024B = 0;
    param_1->field_024F = 0x50;
    goto cf_common_exit_0048C491;
  case 0x22:
  case 0x28:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 100;
    param_1->field_0281 = 2;
    param_1->field_0239 = 0xffd3;
    param_1->field_023B = 0;
    param_1->field_023F = 0x37;
    param_1->field_0241 = 0xf;
    param_1->field_0243 = 0;
    param_1->field_0247 = 0x1e;
cf_common_exit_0048C491:
    param_1->field_02B2 = 1;
    break;
  case 0x23:
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x5a;
    param_1->field_0281 = 1;
    param_1->field_0239 = 0;
    param_1->field_023B = 0;
    param_1->field_023F = 0x5a;
    param_1->field_02B2 = 1;
    break;
  case 0x24:
    uVar1 = 0x28;
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    goto LAB_0048c218;
  case 0x25:
    uVar1 = 0x23;
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
LAB_0048c218:
    param_1->field_0237 = uVar1;
    param_1->field_0281 = 1;
    param_1->field_0239 = 0;
    param_1->field_023B = 0;
    param_1->field_023F = uVar1;
    param_1->field_02B2 = 0;
    break;
  case 0x26:
    uVar1 = 0;
    param_1->field_0231 = 0;
    param_1->field_0233 = 0;
    param_1->field_0237 = 0x6e;
    param_1->field_0281 = 6;
    param_1->field_0239 = 0xffc9;
    param_1->field_023B = 0xffdd;
    param_1->field_023F = 0x28;
    param_1->field_0241 = 0xffc9;
    param_1->field_0243 = 0x23;
    param_1->field_0247 = 0x28;
    param_1->field_0249 = 0;
    param_1->field_024B = 0xffdd;
    param_1->field_024F = 0x28;
    param_1->field_0257 = 0x28;
    param_1->field_025B = 0xffdd;
    param_1->field_025F = 0x28;
    param_1->field_0267 = 0x28;
    uVar2 = 0xff7e;
    param_1->field_0251 = 0;
    param_1->field_0253 = 0x23;
    param_1->field_0259 = 0x3c;
    param_1->field_0261 = 0x3c;
    param_1->field_0263 = 0x23;
    param_1->field_02B2 = 2;
    param_1->field_02A6 = 0;
    param_1->field_02A8 = 0x14;
    param_1->field_02AA = 0xffdf;
    param_1->field_02AC = 0;
    param_1->field_02AE = 0xffec;
    param_1->field_02B0 = 0xffdf;
    param_1->field_02BF = 2;
    param_1->field_02B3 = 0xff7e;
    param_1->field_02B5 = 0x2d;
    goto LAB_0048c41d;
  default:
    goto switchD_0048a923_default;
  }
  param_1->field_02A6 = 0;
  param_1->field_02A8 = 0;
  param_1->field_02AA = 0xffdf;
  param_1->field_02BF = 0;
switchD_0048a923_default:
  return;
}

// 0048D440 FUN_0048d440
#line 4 "decomp/ST.exe/functions/0048D440/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (17), none consume AL/AX, and every RET path defines full EAX; sites=00465C60 @ 00465E15
   -> CMP CMP EAX,EDI | 00465C60 @ 0046604C -> CMP CMP EAX,EDI | 00465C60 @ 004663A9 -> TEST TEST
   EAX,EAX | 00465C60 @ 004666BB -> TEST TEST EAX,EAX | 00465C60 @ 00466AEA -> CMP CMP EAX,EDI |
   00465C60 @ 00466D3A -> CMP CMP EAX,EDI | 00465C60 @ 00466F7E -> CMP CMP EAX,EDI | 00465C60 @
   00467202 -> CMP CMP EAX,EDI | 00465C60 @ 004678DA -> CMP CMP EAX,EDI | 00465C60 @ 00467C43 ->
   TEST TEST EAX,EAX | 00465C60 @ 00467FDB -> TEST TEST EAX,EAX | 00465C60 @ 00468498 -> CMP CMP
   EAX,EBX | 00465C60 @ 0046870E -> CMP CMP EAX,EDI | 00465C60 @ 00468AAC -> CMP CMP EAX,EDI |
   00465C60 @ 00469722 -> CMP CMP EAX,EBX | 00465C60 @ 00469969 -> CMP CMP EAX,EBX | 0049C210 @
   0049C896 -> TEST TEST EAX,EAX

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00465C60 -> 0048D440 @ 00465E15; STBoatC::LoadRC this; stable alias ESI | 00465C60 ->
   0048D440 @ 0046604C; STBoatC::LoadRC this; stable alias ESI | 00465C60 -> 0048D440 @ 004663A9;
   STBoatC::LoadRC this; stable alias ESI | 00465C60 -> 0048D440 @ 004666BB; STBoatC::LoadRC this;
   stable alias ESI | 00465C60 -> 0048D440 @ 00466AEA; STBoatC::LoadRC this; stable alias ESI |
   00465C60 -> 0048D440 @ 00466D3A; STBoatC::LoadRC this; stable alias ESI | 00465C60 -> 0048D440 @
   00466F7E; STBoatC::LoadRC this; stable alias ESI | 00465C60 -> 0048D440 @ 00467202;
   STBoatC::LoadRC this; stable alias ESI | 00465C60 -> 0048D440 @ 004678DA; STBoatC::LoadRC this;
   stable alias ESI | 00465C60 -> 0048D440 @ 00467C43; STBoatC::LoadRC this; stable alias ESI |
   00465C60 -> 0048D440 @ 00467FDB; STBoatC::LoadRC this; stable alias ESI | 00465C60 -> 0048D440 @
   00468498; STBoatC::LoadRC this; stable alias ESI | 00465C60 -> 0048D440 @ 0046870E;
   STBoatC::LoadRC this; stable alias ESI | 00465C60 -> 0048D440 @ 00468AAC; STBoatC::LoadRC this;
   stable alias ESI | 00465C60 -> 0048D440 @ 00469722; STBoatC::LoadRC this; stable alias ESI |
   00465C60 -> 0048D440 @ 00469969; STBoatC::LoadRC this; stable alias ESI */

int __fastcall st::fn_0048D440(STBoatC *param_1)

{
  STGroupBoatC *this;
  int iVar1;
  int iVar2;

  this = st::fn_00405CF9((char)param_1->field_0024,param_1->field_0030);
  if (param_1->field_04A1 == -1) {
    if (st::machine_word_boundary_cast<uint>(param_1->field_04AB) != st::machine_word_boundary_cast<uint>((HoloTy *)0xffffffff)) {
      return (param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2 < 1) - 1 & 7;
    }
    return 0;
  }
  if (st::machine_word_boundary_cast<uint>(param_1->field_04AB) == st::machine_word_boundary_cast<uint>((HoloTy *)0xffffffff)) {
    return st::storage_bit_cast<uint>(static_cast<uint32_t>(param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2 < 0x28));
  }
  /* ST_CALLSITE[0048D4EF]: CALL 0x0040407a; direct=0040407A STGroupBoatC::sub_0040BC90 */
  iVar1 = st::fn_0040407A
                    (this,(uint)(ushort)param_1->field_0032,(short *)(int)param_1->field_049B,
                     (short *)(int)param_1->field_049D,(short *)(param_1->field_049F + 1),'\0');
  /* ST_CALLSITE[0048D51A]: CALL 0x0040407a; direct=0040407A STGroupBoatC::sub_0040BC90 */
  iVar2 = st::fn_0040407A
                    (this,(uint)(ushort)param_1->field_0032,(short *)(int)param_1->field_04A5,
                     (short *)(int)param_1->field_04A7,(short *)(param_1->field_04A9 + 1),'\0');
  if (iVar1 != -4) {
    if (iVar2 == -4) {
      return st::storage_bit_cast<uint>(static_cast<uint32_t>(param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2 < 0x28));
    }
    return ((((param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2) * 100) / 0x28 <=
            100 - (iVar1 * 100) / (iVar2 + iVar1)) - 1 & 6) + 1;
  }
  if (iVar2 != -4) {
    return (param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2 < 1) - 1 & 7;
  }
  return 0;
}

// 0048D650 FUN_0048d650
#line 4 "decomp/ST.exe/functions/0048D650/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0048D650 parameter used as this of STFishC::sub_004162B0 @ 0048D671
   [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=00465C60 @ 00468124
   -> CMP CMP EAX,0x1 | 00465C60 @ 004682DC -> CMP CMP EAX,0x1 */

int __thiscall st::fn_0048D650(void *this,STFishC *param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int local_14;
  int local_10;
  short local_c [2];
  short local_8 [2];

  local_14 = 1000000;
  /* ST_CALLSITE[0048D671]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
  st::fn_004018C5(param_1,reinterpret_cast<short *>(&param_1),local_8,local_c);
  local_10 = 0;
  do {
    iVar5 = 0;
    do {
      sVar4 = local_8[0] + (short)iVar5;
      sVar3 = local_c[0] + 1;
      sVar1 = (short)param_1 + (short)local_10;
      if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar4 < 0)) ||
         (((g_worldGrid.sizeY <= sVar4 || (sVar3 < 0)) ||
          ((g_worldGrid.sizeZ <= sVar3 ||
           (STGridAt3D(g_worldGrid, sVar1, sVar4, sVar3).objects[0] == nullptr)))))) {
        iVar2 = st::fn_006AADD0((int)STField<short>(this,0x47),(int)STField<short>(this,0x49),
                             (int)STField<short>(this,0x4b),(short)param_1 + local_10,
                             local_8[0] + iVar5,local_c[0] + 1);
        if (iVar2 < local_14) {
          STField<short>(this,0x4c5) = (short)local_10 + (short)param_1;
          STField<short>(this,0x4c7) = (short)iVar5 + local_8[0];
          STField<short>(this,0x4c9) = local_c[0] + 1;
          local_14 = iVar2;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    local_10 = local_10 + 1;
  } while (local_10 < 2);
  return (uint)(local_14 != 1000000);
}

// 0048D7C0 FUN_0048d7c0
#line 4 "decomp/ST.exe/functions/0048D7C0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0048D7C0 parameter used as this of STFishC::sub_004162B0 @ 0048D7E1
   [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=0046D450 @ 0046D959
   -> CMP CMP EAX,0x1 | 0046D450 @ 0046DAE6 -> CMP CMP EAX,0x1 */

int __thiscall st::fn_0048D7C0(void *this,STFishC *param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int local_14;
  int local_10;
  short local_c [2];
  short local_8 [2];

  local_14 = 1000000;
  /* ST_CALLSITE[0048D7E1]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
  st::fn_004018C5(param_1,reinterpret_cast<short *>(&param_1),local_8,local_c);
  local_10 = 0;
  do {
    iVar5 = 0;
    do {
      sVar4 = local_8[0] + (short)iVar5;
      sVar3 = local_c[0] + 1;
      sVar1 = (short)param_1 + (short)local_10;
      if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar4 < 0)) ||
         (((g_worldGrid.sizeY <= sVar4 || (sVar3 < 0)) ||
          ((g_worldGrid.sizeZ <= sVar3 ||
           (STGridAt3D(g_worldGrid, sVar1, sVar4, sVar3).objects[0] == nullptr)))))) {
        iVar2 = st::fn_006AADD0((int)STField<short>(this,0x47),(int)STField<short>(this,0x49),
                             (int)STField<short>(this,0x4b),(short)param_1 + local_10,
                             local_8[0] + iVar5,local_c[0] + 1);
        if (iVar2 < local_14) {
          STField<short>(this,0x53c) = (short)local_10 + (short)param_1;
          STField<short>(this,0x53e) = (short)iVar5 + local_8[0];
          STField<short>(this,0x540) = local_c[0] + 1;
          local_14 = iVar2;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    local_10 = local_10 + 1;
  } while (local_10 < 2);
  return (uint)(local_14 != 1000000);
}

// 0048DCC0 FUN_0048dcc0
#line 4 "decomp/ST.exe/functions/0048DCC0/decomp.c"
/* [STReturnSemanticsApplier] returned_pointer_parameter.
   Evidence: the complete machine CFG returns incoming pointer parameter param_1 (ordinal=1);
   restore its exact formal pointer type after the obsolete void-pointer normalization */

uint * __thiscall st::fn_0048DCC0(void *this,undefined4 *param_1)

{
  byte *puVar2;
  byte *puVar3;

  puVar2 = (byte *)((int)this + 0x554);
  puVar3 = reinterpret_cast<byte *>((param_1));
  memmove(puVar3, puVar2, 0x34); /* compiler REP MOVS byte copy */
  return param_1;
}

// 0048DCF0 FUN_0048dcf0
#line 4 "decomp/ST.exe/functions/0048DCF0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0046B100 -> 0048DCF0 @ 0046B225; STBoatC::Build this; stable alias ESI | 0046B100 ->
   0048DCF0 @ 0046B37D; STBoatC::Build this; stable alias ESI */

bool __fastcall st::fn_0048DCF0(STBoatC *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;

  local_c = 1000000;
  sVar1 = param_1->field_04DD;
  sVar3 = param_1->field_04DF;
  sVar2 = param_1->field_04E1 + 1;
  param_1->field_04FC = sVar1;
  param_1->field_04FE = sVar3;
  param_1->field_0500 = sVar2;
  if (param_1->field_0502 == 1) {
    local_8 = 0;
    do {
      iVar5 = 0;
      do {
        sVar1 = param_1->field_04E1 + 1;
        sVar2 = (short)iVar5 + param_1->field_04DF;
        sVar3 = param_1->field_04DD + (short)local_8;
        if ((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
            ((sVar2 < 0 ||
             (((g_worldGrid.sizeY <= sVar2 || (sVar1 < 0)) || (g_worldGrid.sizeZ <= sVar1)))))) ||
           (STGridAt3D(g_worldGrid, sVar3, sVar2, sVar1).objects[0] == nullptr)) {
          iVar4 = st::fn_006AADD0((int)param_1->field_0047,(int)param_1->field_0049,
                               (int)param_1->field_004B,param_1->field_04DD + local_8,
                               param_1->field_04DF + iVar5,param_1->field_04E1 + 1);
          if (iVar4 < local_c) {
            param_1->field_04FC = (short)local_8 + param_1->field_04DD;
            param_1->field_04FE = (short)iVar5 + param_1->field_04DF;
            param_1->field_0500 = param_1->field_04E1 + 1;
            local_c = iVar4;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 2);
      local_8 = local_8 + 1;
    } while (local_8 < 2);
    return local_c != 1000000;
  }
  if ((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) && (-1 < sVar3)) &&
     (((sVar3 < g_worldGrid.sizeY && (-1 < sVar2)) &&
      ((sVar2 < g_worldGrid.sizeZ &&
       (STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0] != nullptr)))))) {
    return false;
  }
  return true;
}

// 0048DF40 FUN_0048df40
#line 4 "decomp/ST.exe/functions/0048DF40/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0046B100 -> 0048DF40 @ 0046B60C; STBoatC::Build this; stable alias ESI | 0046B100 ->
   0048DF40 @ 0046BF77; STBoatC::Build this; stable alias ESI | 0046B100 -> 0048DF40 @ 0046C2E8;
   STBoatC::Build this; stable alias ESI | 0046B100 -> 0048DF40 @ 0046C398; STBoatC::Build this;
   stable alias ESI

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_0048DF40(STBoatC *param_1,undefined4 param_2)

{
  short sVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;
  int iVar2;

  sVar1 = param_1->field_04E1 + 1;
  /* ST_CALLSITE[0048DF7B]: CALL 0x00404908; direct=00404908 STBoatC::sub_0048DFD0 */
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar2 = st::fn_00404908
                    (param_1,param_1->field_04DD,param_1->field_04DF,sVar1,param_1->field_04DD,
                     param_1->field_04DF,(int *)STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(in_EAX)), (uint16_t)(sVar1)),2,
                     &param_1->field_04FC,&param_1->field_04FE,&param_1->field_0500);
  if (iVar2 == 0) {
    param_1->field_04FC = param_1->field_04DD;
    param_1->field_04FE = param_1->field_04DF;
    param_1->field_0500 = param_1->field_04E1 + 1;
  }
  return;
}

// 0048FA80 FUN_0048fa80
#line 4 "decomp/ST.exe/functions/0048FA80/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0046CF20 -> 0048FA80 @ 0046D0D1; STBoatC::CreateGame this; stable alias ESI

   [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=2, ignored=0,
   unknown=0 */

int __fastcall st::fn_0048FA80(STBoatC *param_1)

{
  int iVar1;
  int *piVar2;

  iVar1 = 0;
  piVar2 = reinterpret_cast<int *>(&param_1->field_02CC);
  while ((iVar1 == 2 || (*piVar2 != 1))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    if (0x16 < iVar1) {
      return 1;
    }
  }
  return 0;
}
