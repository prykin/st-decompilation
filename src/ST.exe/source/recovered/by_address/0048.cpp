#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0048.cpp

// 004803B0 FUN_004803b0
#line 4 "decomp/ST.exe/functions/004803B0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004803B0 returns return of STBoatC::sub_00460360 @ 004803BD */

int __fastcall st::fn_004803B0(int *param_1)

{
  int iVar1;

  iVar1 = st::fn_00403DF0((STBoatC *)param_1);
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
    local_EAX_17 = st::fn_00403F85(st::pointer_boundary_cast<STBoatC *>(this),param_1);
    return local_EAX_17;
  }
  if (iVar2 == 1) {
    return 0;
  }
  if (iVar2 == 2) {
    iVar1 = st::fn_0040399A(st::pointer_boundary_cast<STBoatC *>(this),param_1);
    return iVar1;
  }
  return 2;
}

// 00480600 FUN_00480600
#line 4 "decomp/ST.exe/functions/00480600/decomp.c"
undefined4 __fastcall st::fn_00480600(void *param_1)

{
  STT3DSprC *this;
  byte bVar1;
  int iVar3;
  uint uVar4;
  int iVar2;
  int local_EAX_145;
  int iVar4;
  int local_EAX_1646;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  longlong lVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  int iVar19;
  short sVar20;
  byte bVar21;
  undefined4 local_20 [2];
  undefined4 local_18;
  short local_14;
  int local_10;
  undefined4 *local_c;
  uint local_8;

  iVar3 = st::fn_00401A3C(st::pointer_boundary_cast<AnonShape_0041C710_C4D46939 *>(param_1));
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
      iVar2 = st::fn_004050D8(st::pointer_boundary_cast<AnonShape_0041CAF0_1630B9E0 *>(param_1));
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
    uVar4 = st::fn_004042AF(this,'\x0e');
    if (local_8 != uVar4) {
      st::fn_00401064(this,'\x0e',local_8);
      st::fn_00401064(this,'\f',(int)puVar5 + STField<int>(param_1,0x822) + iVar3);
      iVar3 = st::fn_004030BC(this,'\x0e');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      iVar3 = st::fn_004030BC(this,'\f');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      iVar3 = st::fn_004052FE(this,'\x0e',(uint)local_c);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
    goto cf_common_exit_004811C2;
  default:
switchD_004806bc_caseD_a:
    uVar10 = ((0x18 - (int)STField<short>(param_1,0x6c) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) %
             0x18;
    uVar4 = st::fn_004042AF(this,'\x0e');
    if (uVar10 != uVar4) {
      st::fn_00401064(this,'\x0e',uVar10);
      st::fn_00401064(this,'\f',uVar10);
      iVar3 = st::fn_004030BC(this,'\x0e');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      iVar3 = st::fn_004030BC(this,'\f');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      iVar3 = st::fn_004052FE
                        (this,'\x0e',(0x18 - (int)STField<short>(param_1,0x6c) / 0xf) % 0x18);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
    break;
  case 0x15:
    int scalar_puVar5 = ((8 - (int)STField<short>(param_1,0x6c) / 0x2d) * 0x14) % 0xa0; /* split integer lifetime from pointer-typed SSA storage */
    iVar19 = ((4 - DAT_008073fc) * 0x28) % 0xa0;
    iVar3 = STField<int>(param_1,0x822) + 1;
    STField<int>(param_1,0x822) = iVar3;
    if (iVar3 == 0x14) {
      STField<undefined4>(param_1,0x822) = 0;
    }
    local_8 = scalar_puVar5 + STField<int>(param_1,0x822) + iVar19;
    int scalar_local_c = scalar_puVar5;
    uVar4 = st::fn_004042AF(this,'\x0e');
    if (local_8 != uVar4) {
      st::fn_00401064(this,'\x0e',local_8);
      st::fn_00401064(this,'\f',scalar_puVar5 + STField<int>(param_1,0x822) + iVar19);
      iVar3 = st::fn_004030BC(this,'\x0e');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      iVar3 = st::fn_004030BC(this,'\f');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
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
          if (DAT_00811798 != nullptr) {
            st::fn_00405056(st::pointer_boundary_cast<void *>(DAT_00811798),(int)STField<short>(param_1,0x47),
                               (int)STField<short>(param_1,0x49),(uint)DAT_0080874d);
          }
        }
        else if ((iVar3 < 0) || ((int)PTR_00806724->entryCount / 2 <= iVar3)) {
          if ((int)PTR_00806724->entryCount / 2 < iVar3) {
            STField<int>(param_1,0x74a) = iVar3 + -1;
          }
          if (STField<int>(param_1,0x74a) == (int)PTR_00806724->entryCount / 2 + 1) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)**(undefined4 **)this)();
          }
          sVar13 = PTR_00806724->entryCount;
LAB_00480bfa:
          if ((int)sVar13 / 2 < STField<int>(param_1,0x74a)) goto LAB_00480c6a;
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
            bVar21 = STField<byte>(param_1,0x24);
            local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar21));
            if (DAT_00808a8f == '\0') {
              if (DAT_0080874d == bVar21) {
LAB_00480a79:
                iVar19 = 0;
              }
              else {
                uVar4 = (uint)DAT_0080874d;
                bVar1 = g_playerRelationMatrix[uVar4][bVar21];
                if ((bVar1 == 0) && (g_playerRelationMatrix[bVar21][uVar4] == 0)) {
                  iVar19 = -2;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[bVar21][uVar4] == 0)) {
                  iVar19 = -1;
                }
                else if ((bVar1 == 0) && (g_playerRelationMatrix[bVar21][uVar4] == 1)) {
                  iVar19 = 1;
                }
                else {
                  if ((bVar1 != 1) || (g_playerRelationMatrix[bVar21][uVar4] != 1))
                  goto LAB_00480a79;
                  iVar19 = 2;
                }
              }
              bVar11 = iVar19 < 0;
            }
            else {
              bVar11 = g_bulkInitializedRecords_008087C7[bVar21].field_0023 !=
                       g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023;
            }
            if (bVar11) {
LAB_00480b80:
              local_c = (undefined4 *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar21));
              if (iVar3 < PTR_00806724->entryCount + -1) {
                STField<int>(param_1,0x74a) = iVar3 + 1;
              }
              if (STField<int>(param_1,0x74a) == (int)PTR_00806724->entryCount / 2 + 1) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                st::fn_004021A3
                          (g_allPlayers_007FA174,DAT_0080874d,STField<int>(param_1,0x20),bVar21,
                           CONCAT22((short)((uint)STField<int>(param_1,0x74a) >> 0x10),
                                    STField<undefined2>(param_1,0x32)));
                st::fn_00403643
                          (g_allPlayers_007FA174,STField<int>(param_1,0x20),
                           STField<char>(param_1,0x24),STField<short>(param_1,0x32));
                st::fn_00402A90(this);
              }
            }
            else {
              local_c = (undefined4 *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar21));
              if (DAT_00808a8f == '\0') {
                if (bVar21 == DAT_0080874d) {
LAB_00480b30:
                  iVar19 = 0;
                }
                else {
                  uVar4 = (uint)DAT_0080874d;
                  bVar1 = g_playerRelationMatrix[bVar21][uVar4];
                  if ((bVar1 == 0) && (g_playerRelationMatrix[uVar4][bVar21] == 0)) {
                    iVar19 = -2;
                  }
                  else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar4][bVar21] == 0)) {
                    iVar19 = -1;
                  }
                  else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar4][bVar21] == 1)) {
                    iVar19 = 1;
                  }
                  else {
                    if ((bVar1 != 1) || (g_playerRelationMatrix[uVar4][bVar21] != 1))
                    goto LAB_00480b30;
                    iVar19 = 2;
                  }
                }
                bVar11 = iVar19 < 0;
              }
              else {
                bVar11 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
                         g_bulkInitializedRecords_008087C7[bVar21].field_0023;
              }
              if (bVar11) goto LAB_00480b80;
              if ((int)PTR_00806724->entryCount / 2 < iVar3) {
                STField<int>(param_1,0x74a) = iVar3 + -1;
              }
              if (STField<int>(param_1,0x74a) == (int)PTR_00806724->entryCount / 2 + 1) {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                (*(code *)**(undefined4 **)this)();
              }
            }
            sVar13 = PTR_00806724->entryCount;
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
        st::fn_0040116D(this,0,0);
      }
      if (STField<int>(param_1,0x74a) == (int)PTR_00806724->entryCount / 2 + 1) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)**(undefined4 **)this)();
      }
      if (STField<int>(param_1,0x74a) <= (int)PTR_00806724->entryCount / 2) goto LAB_00480c7f;
LAB_00480c6a:
      iVar3 = 0;
      local_EAX_1646 = st::fn_004052CC(this);
      st::fn_006E6870(STField<void *>(param_1,0x211),local_EAX_1646,iVar3);
    }
LAB_00480c7f:
    if (-1 < STField<int>(param_1,0x74a)) {
      st::fn_0040116D
                (this,PTR_00806724->entries[STField<int>(param_1,0x74a)],
                 (int)PTR_00806724->field_002C);
      bVar21 = STField<byte>(param_1,0x24);
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar21));
      if (DAT_00808a8f == '\0') {
        if (DAT_0080874d == bVar21) {
LAB_00480d55:
          iVar3 = 0;
        }
        else {
          uVar4 = (uint)DAT_0080874d;
          bVar1 = g_playerRelationMatrix[uVar4][bVar21];
          if ((bVar1 == 0) && (g_playerRelationMatrix[bVar21][uVar4] == 0)) {
            iVar3 = -2;
          }
          else if ((bVar1 == 1) && (g_playerRelationMatrix[bVar21][uVar4] == 0)) {
            iVar3 = -1;
          }
          else if ((bVar1 == 0) && (g_playerRelationMatrix[bVar21][uVar4] == 1)) {
            iVar3 = 1;
          }
          else {
            if ((bVar1 != 1) || (g_playerRelationMatrix[bVar21][uVar4] != 1)) goto LAB_00480d55;
            iVar3 = 2;
          }
        }
        bVar11 = iVar3 < 0;
      }
      else {
        bVar11 = g_bulkInitializedRecords_008087C7[bVar21].field_0023 !=
                 g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023;
      }
      if (!bVar11) {
        local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar21));
        if (DAT_00808a8f == '\0') {
          if (bVar21 == DAT_0080874d) {
LAB_00480e0f:
            iVar3 = 0;
          }
          else {
            uVar4 = (uint)DAT_0080874d;
            bVar1 = g_playerRelationMatrix[bVar21][uVar4];
            if ((bVar1 == 0) && (g_playerRelationMatrix[uVar4][bVar21] == 0)) {
              iVar3 = -2;
            }
            else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar4][bVar21] == 0)) {
              iVar3 = -1;
            }
            else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar4][bVar21] == 1)) {
              iVar3 = 1;
            }
            else {
              if ((bVar1 != 1) || (g_playerRelationMatrix[uVar4][bVar21] != 1)) goto LAB_00480e0f;
              iVar3 = 2;
            }
          }
          bVar11 = iVar3 < 0;
        }
        else {
          bVar11 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
                   g_bulkInitializedRecords_008087C7[bVar21].field_0023;
        }
        if (!bVar11) {
          if (STField<int>(param_1,0x746) == 1) {
            st::fn_00401BAE(this,'\x0e');
            st::fn_00401BAE(this,'\r');
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
      local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar21));
      if (STField<int>(param_1,0x746) == 0) {
        st::fn_00401BAE(this,'\x0e');
        st::fn_00401BAE(this,'\r');
        st::fn_00401BAE(this,'\f');
        st::fn_00401BAE(this,'\x01');
        st::fn_00401BAE(this,'\x02');
        st::fn_00401BAE(this,'\0');
        st::fn_00401BAE(this,'\x0f');
        st::fn_00401BAE(this,'\v');
        st::fn_00401BAE(this,'\n');
        st::fn_00401BAE(this,'\t');
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
    st::fn_004045AC(st::pointer_boundary_cast<AnonShape_00416390_86C8F938 *>(param_1));
  }
  uVar4 = STField<int>(param_1,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(param_1,0x1c) = uVar4;
  iVar3 = (uVar4 >> 0x10) % 7 - 3;
  uVar4 = STField<int>(param_1,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(param_1,0x1c) = uVar4;
  uVar10 = STField<int>(param_1,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(param_1,0x1c) = uVar10;
  local_10 = (uVar10 >> 0x10) % 7 - 3;
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
      bVar21 = 0;
      sVar20 = 0;
      iVar19 = -1;
      local_14 = *(short *)(puVar5 + 1);
      sVar18 = 0;
      sVar17 = 0;
      sVar16 = 0;
      sVar15 = 0;
      sVar14 = 0;
      sVar13 = 0;
      local_18 = uVar7;
      if (DAT_0080732c == 1) {
        sVar13 = 0;
        sVar14 = 0;
        sVar15 = 0;
        sVar16 = 0;
        sVar17 = 0;
        sVar18 = 0;
        sVar20 = 0;
        bVar21 = 0;
        lVar12 = st::fn_0072E288();
        iVar6 = (int)local_14 + STField<short>(param_1,0x45) + local_10 + (int)(short)lVar12;
        iVar8 = (int)STField<short>(param_1,0x43) - (int)STPiece<2,2>(local_18);
        iVar9 = (int)(short)local_18 + iVar3 + STField<short>(param_1,0x41);
      }
      else {
        iVar6 = (int)local_14 + local_10 + STField<short>(param_1,0x45);
        STPiece<2,2>(local_18) = (short)((uint)uVar7 >> 0x10);
        iVar8 = (int)STField<short>(param_1,0x43) - (int)STPiece<2,2>(local_18);
        STPiece<0,2>(local_18) = (short)uVar7;
        iVar9 = (int)(short)local_18 + iVar3 + STField<short>(param_1,0x41);
      }
      st::fn_00401433
                (g_traksClass_00802A7C,1,2,7,iVar9,iVar8 + ((uVar4 >> 0x10) % 7 - 3),iVar6,sVar13,
                 sVar14,sVar15,sVar16,sVar17,sVar18,iVar19,sVar20,bVar21);
      local_c = (undefined4 *)((int)local_c + 6);
      local_8 = local_8 + 1;
    } while ((int)local_8 < (int)(uint)STField<byte>(param_1,0x2bf));
  }
cf_common_exit_004811C2:
  uVar7 = st::fn_0040503D(st::pointer_boundary_cast<AnonShape_0041DA30_EF7DF530 *>(param_1));
  return uVar7;
}

// 00481560 FUN_00481560
#line 4 "decomp/ST.exe/functions/00481560/decomp.c"
uint __thiscall
st::fn_00481560(void *this,short param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6)

{
  longlong lVar1;
  void *pvVar2;
  int uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  DArrayTy *pDVar8;
  int iVar10;
  int local_EAX_2975;
  int iVar9;
  int iVar11;
  int iVar12;
  longlong local_EDXEAX_506;
  longlong local_EDXEAX_521;
  longlong local_EDXEAX_595;
  longlong local_EDXEAX_626;
  longlong local_EDXEAX_706;
  longlong local_EDXEAX_725;
  longlong local_EDXEAX_751;
  longlong local_EDXEAX_776;
  longlong local_EDXEAX_791;
  longlong local_EDXEAX_810;
  longlong local_EDXEAX_821;
  longlong local_EDXEAX_840;
  longlong local_EDXEAX_897;
  undefined8 uVar13;
  longlong local_EDXEAX_939;
  longlong local_EDXEAX_1141;
  longlong local_EDXEAX_1168;
  longlong local_EDXEAX_1329;
  longlong local_EDXEAX_1351;
  longlong local_EDXEAX_1516;
  longlong local_EDXEAX_1540;
  longlong lVar13;
  longlong lVar14;
  longlong local_EDXEAX_1689;
  longlong local_EDXEAX_1743;
  longlong local_EDXEAX_1768;
  longlong local_EDXEAX_1787;
  longlong local_EDXEAX_1814;
  longlong local_EDXEAX_1851;
  longlong lVar15;
  longlong lVar12;
  longlong local_EDXEAX_1914;
  longlong local_EDXEAX_1925;
  longlong local_EDXEAX_1941;
  longlong local_EDXEAX_1998;
  longlong local_EDXEAX_2040;
  longlong local_EDXEAX_2081;
  longlong local_EDXEAX_2281;
  longlong local_EDXEAX_2311;
  longlong local_EDXEAX_2353;
  longlong local_EDXEAX_2517;
  longlong local_EDXEAX_2551;
  longlong local_EDXEAX_2595;
  undefined4 local_104 [2];
  int local_fc;
  int iStack_f8;
  longlong local_f4;
  int local_ec;
  int iStack_e8;
  longlong local_e4;
  uint local_dc;
  int local_d8;
  longlong local_d4;
  undefined8 local_cc;
  uint local_c4;
  int local_c0;
  undefined8 local_bc;
  uint local_b4;
  int local_b0;
  double local_ac;
  undefined2 *local_a4;
  undefined8 local_a0;
  double local_98;
  uint local_90;
  int local_8c;
  uint local_88;
  int local_84;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_5c;
  undefined8 local_54;
  uint local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  int local_30;
  short local_2c;
  short sStack_2a;
  short local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  ushort local_8;

  local_90 = (uint)STField<short>(this,0x237);
  iVar11 = (int)local_90 >> 0x1f;
  STPiece<0,2>(local_c) = 0;
  STPiece<2,2>(local_c) = 0;
  local_8 = 0;
  if ((STField<int>(this,0x455) != 1) && (STField<int>(this,0x742) != 1)) {
    local_60 = this;
    uVar2 = st::fn_006ACF0D((int)STField<short>(this,0x41),(int)STField<short>(this,0x43),
                         (int)STField<short>(this,0x45),(int)param_1,(int)param_2,(int)param_3);
    if ((uVar2 >> 0x1f < iVar11) || ((uVar2 >> 0x1f <= iVar11 && ((uint)uVar2 <= local_90)))) {
      uVar3 = (int)param_4 - (int)param_1;
      iVar11 = 0;
      local_20 = (int)uVar3 >> 0x1f;
      local_14 = (int)param_5 - (int)param_2;
      local_10 = (int)local_14 >> 0x1f;
      uVar4 = (int)param_6 - (int)param_3;
      local_38 = (int)uVar4 >> 0x1f;
      local_1c = 1000000000;
      local_18 = 0;
      local_44 = 0xffffffff;
      local_3c = uVar4;
      local_24 = uVar3;
      local_70 = st::fn_0072E4F0(uVar3,local_20,uVar3,local_20);
      local_68 = st::fn_0072E4F0(local_14,local_10,local_14,local_10);
      local_80 = st::fn_0072E4F0(uVar4,local_38,uVar4,local_38);
      if ((uVar3 == 0 && local_20 == 0) && (local_14 == 0 && local_10 == 0)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = param_4 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_5 = param_5 + 1;
        local_68 = 1;
        local_14 = 1;
        local_10 = 0;
        local_70 = 1;
        local_24 = 1;
        local_20 = 0;
        uVar3 = 1;
      }
      local_40 = 0;
      if (STField<char>(local_60,0x281) != '\0') {
        local_a4 = (undefined2 *)((int)local_60 + 0x23b);
        do {
          local_28 = 0;
          local_90 = (uint)(short)local_a4[2];
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          auto _local_2c = CONCAT22(*local_a4,local_a4[-1]);
          local_8c = (int)local_90 >> 0x1f;
          puVar5 = st::fn_0040342C(local_104,local_a4[-1],0,STField<short>(local_60,0x6c));
          local_2c = (short)*puVar5;
          local_2c = local_2c + STField<short>(local_60,0x41);
          sStack_2a = (short)((uint)*puVar5 >> 0x10);
          local_28 = *(short *)(puVar5 + 1) + STField<short>(local_60,0x45);
          sStack_2a = STField<short>(local_60,0x43) - sStack_2a;
          if (uVar3 == 0 && local_20 == 0) {
            local_4c = (int)param_3 - (int)local_28;
            local_EDXEAX_506 =
                 st::fn_0072E4F0(local_4c,(int)local_4c >> 0x1f,uVar4,local_38);
            local_EDXEAX_521 =
                 st::fn_0072E4F0
                           ((uint)local_EDXEAX_506,(int)((ulonglong)local_EDXEAX_506 >> 0x20),
                            local_14,local_10);
            local_54 = local_68 + local_80;
            local_34 = (uint)sStack_2a;
            local_b4 = (uint)param_2;
            local_b0 = (int)local_b4 >> 0x1f;
            local_78 = local_EDXEAX_521;
            local_EDXEAX_595 =
                 st::fn_0072E4F0
                           (st::machine_word_boundary_cast<uint>(local_34),(int)local_34 >> 0x1f,(uint)local_68,STPiece<4,4>(local_68));
            local_EDXEAX_626 =
                 st::fn_0072E4F0
                           (local_b4,local_b0,(uint)local_80,(int)((ulonglong)local_80 >> 0x20));
            lVar1 = (local_EDXEAX_521 - local_EDXEAX_595) - local_EDXEAX_626;
            local_5c = st::fn_0072E4F0((uint)lVar1,(int)((ulonglong)lVar1 >> 0x20),2,0);
            uVar4 = local_4c * local_4c +
                    ((int)param_1 - (int)local_2c) * ((int)param_1 - (int)local_2c) +
                    local_34 * local_34;
            local_EDXEAX_706 = st::fn_0072E4F0(local_90,local_8c,local_90,local_8c);
            local_EDXEAX_725 =
                 st::fn_0072E4F0
                           (uVar4 - (uint)local_EDXEAX_706,
                            (((int)uVar4 >> 0x1f) - (int)((ulonglong)local_EDXEAX_706 >> 0x20)) -
                            (uint)(uVar4 < (uint)local_EDXEAX_706),(uint)local_68,
                            (int)((ulonglong)local_68 >> 0x20));
            local_EDXEAX_751 =
                 st::fn_0072E4F0
                           (param_2 * 2,param_2 * 2 >> 0x1f,(uint)local_78,
                            (int)((ulonglong)local_78 >> 0x20));
            local_EDXEAX_776 = st::fn_0072E4F0(local_b4,local_b0,local_b4,local_b0);
            local_EDXEAX_791 =
                 st::fn_0072E4F0
                           ((uint)local_EDXEAX_776,(int)((ulonglong)local_EDXEAX_776 >> 0x20),
                            (uint)local_80,(int)((ulonglong)local_80 >> 0x20));
            lVar1 = local_EDXEAX_791 + (local_EDXEAX_725 - local_EDXEAX_751);
            local_EDXEAX_810 =
                 st::fn_0072E4F0
                           ((uint)lVar1,(int)((ulonglong)lVar1 >> 0x20),(uint)local_54,
                            STPiece<4,4>(local_54));
            local_EDXEAX_821 =
                 st::fn_0072E4F0
                           ((uint)local_EDXEAX_810,(int)((ulonglong)local_EDXEAX_810 >> 0x20),4,0);
            local_EDXEAX_840 =
                 st::fn_0072E4F0
                           ((uint)local_5c,STPiece<4,4>(local_5c),(uint)local_5c,STPiece<4,4>(local_5c));
            local_a0 = local_EDXEAX_840 - local_EDXEAX_821;
            uVar4 = local_3c;
            if (-1 < local_a0) {
              if (local_a0 == 0) {
                local_EDXEAX_897 =
                     st::fn_0072E4F0((uint)local_54,STPiece<4,4>(local_54),0xfffffffe,-1);
                uVar13 = st::fn_0072E440
                                   ((uint)local_5c,(uint)((ulonglong)local_5c >> 0x20),
                                    (uint)local_EDXEAX_897,
                                    (uint)((ulonglong)local_EDXEAX_897 >> 0x20));
                uVar4 = local_3c;
                iVar6 = (int)uVar13;
                local_30 = iVar6;
                local_EDXEAX_939 =
                     st::fn_0072E4F0
                               (iVar6 - param_2,iVar6 - param_2 >> 0x1f,local_3c,local_38);
                uVar13 = st::fn_0072E440
                                   ((uint)local_EDXEAX_939,
                                    (uint)((ulonglong)local_EDXEAX_939 >> 0x20),local_14,local_10);
                local_34 = param_5 - iVar6;
                iVar9 = (int)uVar13 + (int)param_3;
                iVar6 = param_6 - iVar9;
                uVar3 = iVar6 * iVar6 +
                        ((int)param_4 - (int)param_1) * ((int)param_4 - (int)param_1) +
                        local_34 * local_34;
                iVar6 = (int)uVar3 >> 0x1f;
                if ((iVar6 <= iVar11) && ((iVar6 < iVar11 || (uVar3 < local_1c)))) {
                  STPiece<0,2>(local_c) = param_1;
                  STPiece<2,2>(local_c) = (short)local_30;
                  local_8 = (ushort)iVar9;
                  local_44 = local_40;
                  iVar11 = iVar6;
                  local_1c = uVar3;
                  local_18 = iVar6;
                }
              }
              else {
                local_98 = SQRT((double)local_a0);
                local_e4 = st::fn_0072E4F0((uint)local_54,STPiece<4,4>(local_54),2,0);
                local_ac = (double)local_e4;
                local_EDXEAX_1141 = st::fn_0072E288();
                uVar4 = local_3c;
                STPiece<0,4>(local_EDXEAX_1141) = (int)local_EDXEAX_1141;
                local_30 = (int)local_EDXEAX_1141;
                local_EDXEAX_1168 =
                     st::fn_0072E4F0
                               ((int)local_EDXEAX_1141 - param_2,
                                (int)local_EDXEAX_1141 - param_2 >> 0x1f,local_3c,local_38);
                uVar13 = st::fn_0072E440
                                   ((uint)local_EDXEAX_1168,
                                    (uint)((ulonglong)local_EDXEAX_1168 >> 0x20),local_14,local_10);
                local_4c = (int)uVar13 + (int)param_3;
                iVar9 = ((int)param_4 - (int)param_1) * ((int)param_4 - (int)param_1);
                uVar3 = (param_5 - (int)local_EDXEAX_1141) * (param_5 - (int)local_EDXEAX_1141) +
                        iVar9 + ((int)param_6 - local_4c) * ((int)param_6 - local_4c);
                iVar6 = (int)uVar3 >> 0x1f;
                if ((iVar6 <= iVar11) && ((iVar6 < iVar11 || (uVar3 < local_1c)))) {
                  STPiece<0,2>(local_c) = param_1;
                  STPiece<2,2>(local_c) = (short)local_30;
                  local_8 = (short)local_4c;
                  local_44 = local_40;
                  iVar11 = iVar6;
                  local_1c = uVar3;
                  local_18 = iVar6;
                }
                local_ec = -(uint)local_5c;
                iStack_e8 = -(STPiece<4,4>(local_5c) + (uint)((uint)local_5c != 0));
                local_EDXEAX_1329 = st::fn_0072E288();
                local_30 = (int)local_EDXEAX_1329;
                local_EDXEAX_1351 =
                     st::fn_0072E4F0
                               (local_30 - param_2,local_30 - param_2 >> 0x1f,uVar4,local_38);
                uVar13 = st::fn_0072E440
                                   ((uint)local_EDXEAX_1351,
                                    (uint)((ulonglong)local_EDXEAX_1351 >> 0x20),local_14,local_10);
                local_4c = (int)uVar13 + (int)param_3;
                uVar3 = (param_5 - local_30) * (param_5 - local_30) +
                        iVar9 + ((int)param_6 - local_4c) * ((int)param_6 - local_4c);
                iVar6 = (int)uVar3 >> 0x1f;
                if ((iVar6 <= iVar11) && ((iVar6 < iVar11 || (uVar3 < local_1c)))) {
                  STPiece<0,2>(local_c) = param_1;
                  STPiece<2,2>(local_c) = (short)local_30;
                  local_8 = (short)local_4c;
                  local_44 = local_40;
                  iVar11 = iVar6;
                  local_1c = uVar3;
                  local_18 = iVar6;
                }
              }
            }
          }
          else {
            local_78 = st::fn_0072E4F0
                                 ((int)param_2 - (int)sStack_2a,
                                  (int)param_2 - (int)sStack_2a >> 0x1f,uVar3,local_20);
            local_EDXEAX_1516 =
                 st::fn_0072E4F0
                           ((int)param_3 - (int)local_28,(int)param_3 - (int)local_28 >> 0x1f,uVar3,
                            local_20);
            local_cc = local_EDXEAX_1516;
            local_EDXEAX_1540 =
                 st::fn_0072E4F0
                           ((uint)local_EDXEAX_1516,(int)((ulonglong)local_EDXEAX_1516 >> 0x20),
                            uVar4,local_38);
            lVar13 = st::fn_0072E4F0
                               ((uint)local_78,(int)((ulonglong)local_78 >> 0x20),local_14,local_10);
            local_54 = local_70 + local_68 + local_80;
            local_dc = (uint)param_1;
            local_d8 = (int)local_dc >> 0x1f;
            local_d4 = lVar13 + local_EDXEAX_1540;
            lVar14 = st::fn_0072E4F0
                               (local_dc,local_d8,(uint)(local_80 + local_68),
                                (int)((ulonglong)(local_80 + local_68) >> 0x20));
            local_c4 = (uint)local_2c;
            local_c0 = (int)local_c4 >> 0x1f;
            local_bc = lVar14;
            local_EDXEAX_1689 =
                 st::fn_0072E4F0
                           (local_c4,local_c0,(uint)local_70,(int)((ulonglong)local_70 >> 0x20));
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            lVar1 = ((lVar13 + local_EDXEAX_1540) - local_EDXEAX_1689) -
                    CONCAT44(STPiece<4,4>(local_bc),(int)lVar14);
            local_5c = st::fn_0072E4F0((uint)lVar1,(int)((ulonglong)lVar1 >> 0x20),2,0);
            uVar3 = (uint)((ulonglong)local_5c >> 0x20);
            local_EDXEAX_1743 = st::fn_0072E4F0(local_c4,local_c0,local_c4,local_c0);
            local_EDXEAX_1768 = st::fn_0072E4F0(local_90,local_8c,local_90,local_8c);
            local_EDXEAX_1787 =
                 st::fn_0072E4F0
                           ((uint)(local_EDXEAX_1743 - local_EDXEAX_1768),
                            (int)((ulonglong)(local_EDXEAX_1743 - local_EDXEAX_1768) >> 0x20),
                            (uint)local_70,(int)((ulonglong)local_70 >> 0x20));
            local_EDXEAX_1814 =
                 st::fn_0072E4F0((uint)local_d4,(int)((ulonglong)local_d4 >> 0x20),2,0);
            local_EDXEAX_1851 =
                 st::fn_0072E4F0
                           ((uint)(local_bc - local_EDXEAX_1814),
                            (int)((ulonglong)(local_bc - local_EDXEAX_1814) >> 0x20),local_dc,
                            local_d8);
            lVar15 = st::fn_0072E4F0
                               ((uint)local_cc,STPiece<4,4>(local_cc),(uint)local_cc,STPiece<4,4>(local_cc));
            lVar12 = st::fn_0072E4F0
                               ((uint)local_78,STPiece<4,4>(local_78),(uint)local_78,STPiece<4,4>(local_78));
            lVar1 = local_EDXEAX_1851 + local_EDXEAX_1787 + lVar15 + lVar12;
            local_EDXEAX_1914 =
                 st::fn_0072E4F0
                           ((uint)lVar1,(int)((ulonglong)lVar1 >> 0x20),(uint)local_54,
                            (int)((ulonglong)local_54 >> 0x20));
            local_EDXEAX_1925 =
                 st::fn_0072E4F0
                           ((uint)local_EDXEAX_1914,(int)((ulonglong)local_EDXEAX_1914 >> 0x20),4,0);
            local_EDXEAX_1941 = st::fn_0072E4F0((uint)local_5c,uVar3,(uint)local_5c,uVar3);
            local_a0 = local_EDXEAX_1941 - local_EDXEAX_1925;
            uVar4 = local_3c;
            iVar11 = local_18;
            if (-1 < local_a0) {
              if (local_a0 == 0) {
                local_EDXEAX_1998 =
                     st::fn_0072E4F0((uint)local_54,STPiece<4,4>(local_54),0xfffffffe,-1);
                uVar13 = st::fn_0072E440
                                   ((uint)local_5c,uVar3,(uint)local_EDXEAX_1998,
                                    (uint)((ulonglong)local_EDXEAX_1998 >> 0x20));
                local_48 = (int)uVar13;
                uVar3 = local_48 - param_1;
                local_84 = (int)uVar3 >> 0x1f;
                local_EDXEAX_2040 = st::fn_0072E4F0(uVar3,local_84,local_14,local_10);
                uVar13 = st::fn_0072E440
                                   ((uint)local_EDXEAX_2040,
                                    (uint)((ulonglong)local_EDXEAX_2040 >> 0x20),local_24,local_20);
                uVar4 = local_3c;
                iVar12 = (int)uVar13 + (int)param_2;
                local_EDXEAX_2081 = st::fn_0072E4F0(uVar3,local_84,local_3c,local_38);
                uVar13 = st::fn_0072E440
                                   ((uint)local_EDXEAX_2081,
                                    (uint)((ulonglong)local_EDXEAX_2081 >> 0x20),local_24,local_20);
                local_34 = param_5 - iVar12;
                iVar6 = (int)uVar13 + (int)param_3;
                iVar11 = param_6 - iVar6;
                uVar3 = iVar11 * iVar11 + (param_4 - local_48) * (param_4 - local_48) +
                        local_34 * local_34;
                iVar9 = (int)uVar3 >> 0x1f;
                iVar11 = local_18;
                if ((iVar9 <= local_18) && ((iVar9 < local_18 || (uVar3 < local_1c)))) {
                  STPiece<0,2>(local_c) = (short)local_48;
                  STPiece<2,2>(local_c) = (short)iVar12;
                  local_8 = (ushort)iVar6;
                  local_44 = local_40;
                  iVar11 = iVar9;
                  local_1c = uVar3;
                  local_18 = iVar9;
                }
              }
              else {
                local_98 = SQRT((double)local_a0);
                local_f4 = st::fn_0072E4F0((uint)local_54,STPiece<4,4>(local_54),2,0);
                local_ac = (double)local_f4;
                local_EDXEAX_2281 = st::fn_0072E288();
                local_48 = (int)local_EDXEAX_2281;
                uVar7 = local_48 - param_1;
                local_84 = (int)uVar7 >> 0x1f;
                local_EDXEAX_2311 = st::fn_0072E4F0(uVar7,local_84,local_14,local_10);
                uVar13 = st::fn_0072E440
                                   ((uint)local_EDXEAX_2311,
                                    (uint)((ulonglong)local_EDXEAX_2311 >> 0x20),local_24,local_20);
                uVar4 = local_3c;
                local_30 = (int)uVar13 + (int)param_2;
                local_EDXEAX_2353 = st::fn_0072E4F0(uVar7,local_84,local_3c,local_38);
                uVar13 = st::fn_0072E440
                                   ((uint)local_EDXEAX_2353,
                                    (uint)((ulonglong)local_EDXEAX_2353 >> 0x20),local_24,local_20);
                local_34 = param_5 - local_30;
                iVar6 = (int)uVar13 + (int)param_3;
                iVar11 = param_6 - iVar6;
                uVar7 = iVar11 * iVar11 + (param_4 - local_48) * (param_4 - local_48) +
                        local_34 * local_34;
                iVar11 = (int)uVar7 >> 0x1f;
                if ((iVar11 <= local_18) && ((iVar11 < local_18 || (uVar7 < local_1c)))) {
                  local_8 = (ushort)iVar6;
                  STPiece<0,2>(local_c) = (short)local_48;
                  STPiece<2,2>(local_c) = (short)local_30;
                  local_44 = local_40;
                  local_1c = uVar7;
                  local_18 = iVar11;
                }
                iVar11 = local_18;
                local_fc = -(uint)local_5c;
                iStack_f8 = -(uVar3 + ((uint)local_5c != 0));
                local_EDXEAX_2517 = st::fn_0072E288();
                local_88 = (int)local_EDXEAX_2517 - (int)param_1;
                local_84 = (int)local_88 >> 0x1f;
                local_48 = (int)local_EDXEAX_2517;
                local_EDXEAX_2551 = st::fn_0072E4F0(local_88,local_84,local_14,local_10);
                uVar13 = st::fn_0072E440
                                   ((uint)local_EDXEAX_2551,
                                    (uint)((ulonglong)local_EDXEAX_2551 >> 0x20),local_24,local_20);
                iVar9 = (int)uVar13 + (int)param_2;
                local_EDXEAX_2595 = st::fn_0072E4F0(local_88,local_84,uVar4,local_38);
                uVar13 = st::fn_0072E440
                                   ((uint)local_EDXEAX_2595,
                                    (uint)((ulonglong)local_EDXEAX_2595 >> 0x20),local_24,local_20);
                local_4c = (int)uVar13 + (int)param_3;
                local_34 = param_5 - iVar9;
                uVar3 = ((int)param_6 - local_4c) * ((int)param_6 - local_4c) +
                        (param_4 - local_48) * (param_4 - local_48) + local_34 * local_34;
                iVar6 = (int)uVar3 >> 0x1f;
                if ((iVar6 <= iVar11) && ((iVar6 < iVar11 || (uVar3 < local_1c)))) {
                  STPiece<0,2>(local_c) = (short)local_48;
                  STPiece<2,2>(local_c) = (short)iVar9;
                  local_8 = (short)local_4c;
                  local_44 = local_40;
                  iVar11 = iVar6;
                  local_1c = uVar3;
                  local_18 = iVar6;
                }
              }
            }
          }
          pvVar2 = local_60;
          local_40 = local_40 + 1;
          local_a4 = local_a4 + 4;
          uVar3 = local_24;
        } while ((int)local_40 < (int)(uint)STField<byte>(local_60,0x281));
        if (local_44 != 0xffffffff) {
          STPiece<0,2>(local_c) = (short)local_c - STField<short>(local_60,0x41);
          local_8 = local_8 - STField<short>(local_60,0x45);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = CONCAT22(STField<short>(local_60,0x43) - STPiece<2,2>(local_c),(short)local_c);
          puVar5 = st::fn_0040342C(local_104,(short)local_c,local_8,
                                      0x168 - STField<short>(local_60,0x6c));
          uVar4 = local_44;
          local_c = *puVar5;
          local_8 = *(ushort *)(puVar5 + 1);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pDVar8 = *(DArrayTy **)((int)pvVar2 + local_44 * 4 + 0x282);
          if (pDVar8 == nullptr) {
            pDVar8 = st::fn_006AE290(nullptr,1,6,1);
            *(DArrayTy **)((int)pvVar2 + uVar4 * 4 + 0x282) = pDVar8;
            iVar10 = st::fn_006AE1C0(pDVar8,&local_c);
            return iVar10 << 0x10 | uVar4 & 0xffff;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          auto _param_1 = 0xffffffff;
          uVar3 = st::machine_word_boundary_cast<uint>(pDVar8->count - 1);
          if (-1 < (int)uVar3) {
            do {
              st::fn_006ACC70(pDVar8,uVar3,&local_2c);
              if (local_2c == 0x7fff) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                _param_1 = uVar3;
              }
              uVar3 = uVar3 - 1;
            } while (-1 < (int)uVar3);
            if (_param_1 != 0xffffffff) {
              st::fn_006AE140(pDVar8,_param_1,&local_c);
              return _param_1 << 0x10 | uVar4 & 0xffff;
            }
          }
          local_EAX_2975 = st::fn_006AE1C0(pDVar8,&local_c);
          return local_EAX_2975 << 0x10 | uVar4 & 0xffff;
        }
      }
    }
  }
  return 0xffffffff;
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
  undefined4 uVar2;
  RecoveredRecord_STBoatC_00482DB0 *this;
  short sVar3;
  STWorldObject *pSVar4;
  int iVar12;
  uint uVar6;
  uint uVar5;
  undefined4 *puVar7;
  short sVar8;
  short sVar9;
  undefined2 uVar11;
  uint uVar10;
  short sVar12;
  int iVar13;
  undefined4 local_3c [2];
  undefined4 local_34 [2];
  undefined4 local_2c;
  undefined2 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
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
      local_8 = (RecoveredRecord_STBoatC_00482DB0 *)
                STGridAt3D(g_worldGrid, sVar8, sVar3, sVar1).objects[1];
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
      local_8 = (RecoveredRecord_STBoatC_00482DB0 *)
                STGridAt3D(g_worldGrid, sVar8, sVar3, sVar1).objects[0];
      goto LAB_00482f52;
    }
  }
  iVar13 = st::fn_006E62D0
                     (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1[0x1fd],
                      (int *)&local_14);
  if (iVar13 == -4) {
    return 4;
  }
  st::fn_00405F0B
            (local_14,(short *)(param_1 + 0x200),(short *)((int)param_1 + 0x802),
             (short *)(param_1 + 0x201));
  local_8 = (RecoveredRecord_STBoatC_00482DB0 *)local_14;
LAB_00482fa9:
  this = local_8;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar13 = (**(code **)(*(int *)local_8 + 0xf8))();
  if (iVar13 == 0) {
    return 4;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  if ((*(int *)&this->field_0x20 == 0x1ae) &&
     (iVar13 = (**(code **)(*(int *)this + 0xf4))(param_1[9]), iVar13 == 0)) {
    return 4;
  }
  st::fn_004031E3(this,&local_18,&local_1c,local_c);
  iVar12 = st::fn_006ACF0D((int)STField<short>(param_1,0x41),(int)STField<short>(param_1,0x43),
                        (int)STField<short>(param_1,0x45),(int)(short)local_18,
                        (int)(short)local_1c,(int)local_c[0]);
  if ((short)param_1[0x205] < iVar12) {
    return 5;
  }
  uVar6 = (int)local_c[0] - (int)STField<short>(param_1,0x45);
  uVar10 = (int)uVar6 >> 0x1f;
  if ((int)(((uVar6 ^ uVar10) - uVar10) * 10) / iVar12 < 4) {
    uVar5 = st::fn_00402987((AnonShape_004836C0_617DC527 *)param_1);
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
        local_10 = (ushort *)(param_1 + 0xaa);
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
          iVar13 = st::fn_00405907
                             ((STSprGameObjC *)param_1,(short)uVar2 + sVar1,sVar12,(short)local_24,
                              sVar3,sVar8,local_8->field_0045,
                              STField<STSprGameObjC_CheckRay_param_7Enum>(param_1,0x79a),
                              (int *)&local_14,0);
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
  undefined4 *puVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 local_38 [2];
  undefined4 local_30 [2];
  short local_28;
  short sStack_26;
  undefined2 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int *local_c;
  undefined4 local_8;

  if (STField<int>(param_1,0x7e2) == 0) {
    if (STField<int>(param_1,0x7a2) != 0) goto LAB_00483342;
  }
  else if ((STField<int>(param_1,0x7a2) != 0) || (0x27 < STField<int>(param_1,0x72a))) {
LAB_00483342:
    this = st::fn_004028BA
                     (g_allPlayers_007FA174,STField<char>(param_1,0x487),
                      STField<ushort>(param_1,0x48b),
                      STField<STAllPlayersC_GetObjPtr_param_3Enum>(param_1,0x483));
    st::fn_004031E3(this,&local_10,&local_14,(short *)&local_8);
    iVar2 = st::fn_006ACF0D((int)STField<short>(param_1,0x41),(int)STField<short>(param_1,0x43),
                         (int)STField<short>(param_1,0x45),(int)(short)local_10,
                         (int)(short)local_14,(int)(short)local_8);
    if ((short)param_1[0x205] < iVar2) {
      return (-(uint)(STField<int>(param_1,0x7e6) != 0) & 4) + 5;
    }
    iVar3 = this->vfunc_F8();
    if (((iVar3 == 0) || (iVar3 = this->vfunc_F0(), iVar3 == 0)) ||
       (iVar3 = (*this->vtable->vfunc_F4)(param_1[9]), iVar3 == 0)) {
      return 3;
    }
    sVar1 = STField<short>(param_1,0x45);
    uVar4 = (int)(short)local_8 - (int)sVar1;
    uVar6 = (int)uVar4 >> 0x1f;
    if (3 < (int)(((uVar4 ^ uVar6) - uVar6) * 10) / iVar2) {
      return ((short)local_8 <= sVar1) + 6;
    }
    /* ST_PSEUDO[return_width_artifact,raw_indirect_call]: candidate call-output artifact: verify return width, clobbers, or x87 state; expected typed vtable/callback call with explicit __thiscall receiver */
    sVar1 = (**(code **)(*param_1 + 0x10))
                      (STField<undefined2>(param_1,0x41),
                       CONCAT22(extraout_var,STField<undefined2>(param_1,0x43)),
                       CONCAT22(extraout_var,sVar1),local_10,local_14,local_8);
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
          iVar3 = st::fn_00405907
                            ((STSprGameObjC *)param_1,sVar7,sVar1,(short)local_1c,sVar8,sVar9,
                             (short)local_8,
                             STField<STSprGameObjC_CheckRay_param_7Enum>(param_1,0x79a),
                             nullptr,0);
        }
        else {
          iVar3 = st::fn_00405907
                            ((STSprGameObjC *)param_1,sVar7,sVar1,(short)local_1c,sVar8,sVar9,
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
uint __fastcall st::fn_004836C0(AnonShape_004836C0_617DC527 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *pSVar4;
  undefined2 uVar6;
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
    /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
    uVar5 = (**(code **)(*(int *)param_1 + 0x10))
                      (CONCAT22(uVar6,param_1->field_0041),CONCAT22(uVar6,param_1->field_0043),
                       CONCAT22(uVar6,param_1->field_0045),
                       CONCAT22(uVar6,*(undefined2 *)&pSVar4[1].field_0x1d),
                       CONCAT22(sVar2 >> 0xf,*(undefined2 *)&pSVar4[1].field_0x1f),
                       CONCAT22(sVar2 >> 0xf,*(undefined2 *)((int)&pSVar4[1].value_20 + 1)));
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
  undefined4 uVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x455) == 1) {
    return 0;
  }
  uVar1 = st::fn_004059F7();
  return uVar1;
}

// 004838B0 FUN_004838b0
#line 4 "decomp/ST.exe/functions/004838B0/decomp.c"
undefined4 __fastcall st::fn_004838B0(int param_1)

{
  undefined4 uVar1;

  uVar1 = 1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1 + 0x455) == 1) || (*(int *)(param_1 + 0x2c0) == 1)) {
    uVar1 = 0;
  }
  return uVar1;
}

// 00483E30 FUN_00483e30
#line 4 "decomp/ST.exe/functions/00483E30/decomp.c"
/* WARNING: Removing unreachable block (ram,0x00483eb6) */

undefined4 __thiscall st::fn_00483E30(void *this,RecoveredRecord_STBoatC_00482DB0 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;

  uVar2 = (int)STField<short>(this,0x41) - (int)param_1->field_0041;
  uVar1 = STField<uint>(this,0x80c);
  uVar3 = (int)STField<short>(this,0x43) - (int)param_1->field_0043;
  uVar4 = (int)STField<short>(this,0x41) - (int)param_1->field_0045;
  uVar5 = (int)STField<short>(this,0x45) - (int)param_1->field_0045;
  lVar6 = st::fn_0072E4F0
                    (uVar3 + uVar4,
                     ((int)uVar3 >> 0x1f) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar3,uVar4),uVar5,
                     (int)uVar5 >> 0x1f);
  lVar7 = st::fn_0072E4F0(uVar2,(int)uVar2 >> 0x1f,uVar2,(int)uVar2 >> 0x1f);
  lVar8 = st::fn_0072E4F0(uVar1,(int)uVar1 >> 0x1f,uVar1,(int)uVar1 >> 0x1f);
  if (lVar7 + lVar6 <= lVar8) {
    return 1;
  }
  return 0;
}

// 00483F10 FUN_00483f10
#line 4 "decomp/ST.exe/functions/00483F10/decomp.c"
/* WARNING: Removing unreachable block (ram,0x00483fc6) */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004608B0 -> 00483F10 @ 00461551; STBoatC::Defence this; stable alias ESI | 00471AC0 ->
   00483F10 @ 004726CF; STBoatC::Guard this; stable alias ESI */

undefined4 __fastcall st::fn_00483F10(STBoatC *param_1)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;

  iVar3 = st::fn_0040219E
                    (g_allPlayers_007FA174,param_1->field_046F,(int)param_1->field_0471);
  if (iVar3 != 0) {
    puVar1 = param_1->field_046B;
    uVar4 = (int)param_1->field_0045 - (int)STField<short>(puVar1,0x45);
    uVar5 = (int)param_1->field_0043 - (int)STField<short>(puVar1,0x43);
    uVar6 = (int)param_1->field_0041 - (int)STField<short>(puVar1,0x41);
    uVar2 = param_1->field_0810;
    lVar7 = st::fn_0072E4F0(uVar6,(int)uVar6 >> 0x1f,uVar6,(int)uVar6 >> 0x1f);
    lVar8 = st::fn_0072E4F0(uVar5,(int)uVar5 >> 0x1f,uVar5,(int)uVar5 >> 0x1f);
    lVar9 = st::fn_0072E4F0(uVar4,(int)uVar4 >> 0x1f,uVar4,(int)uVar4 >> 0x1f);
    lVar10 = st::fn_0072E4F0(uVar2,(int)uVar2 >> 0x1f,uVar2,(int)uVar2 >> 0x1f);
    if (lVar10 < lVar8 + lVar7 + lVar9) {
      return 0;
    }
  }
  return 1;
}

// 00484020 FUN_00484020
#line 4 "decomp/ST.exe/functions/00484020/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=004842C6 MOVSX EDX,word ptr [EBP + 0x8] | 00484301
   MOVSX EAX,word ptr [EBP + 0x8] */

undefined4 __thiscall
st::fn_00484020(void *this,short param_1,short *param_2,short *param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_00000006;
  short sStack_56;
  undefined2 uStack_52;
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  int local_40;
  int local_3c;
  undefined4 local_38;
  short *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  STWorldObject *local_1c;
  int local_18;
  uint local_14;
  STWorldObject *local_10;
  undefined *local_c;
  int local_8;

  local_38 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (_param_1 == 6) {
    local_8 = 0x2c;
    local_c = st::pointer_boundary_cast<undefined *>(&DAT_007a9538);
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  else if (_param_1 == 7) {
    local_8 = 0x2c;
    local_c = st::pointer_boundary_cast<undefined *>(&DAT_007a9640);
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  else if (_param_1 == 8) {
    local_8 = 0x98;
    local_c = st::pointer_boundary_cast<undefined *>(&DAT_007a9748);
  }
  else {
    local_8 = -1;
    local_c = nullptr;
  }
  sVar3 = STField<short>(this,0x800);
  sVar4 = STField<short>(this,0x802);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  _param_1 = STReplaceLowWord((uint32_t)(this), (uint16_t)(sVar4));
  sVar1 = STField<short>(this,0x804);
  if (((((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) || (sVar4 < 0)) ||
        ((g_worldGrid.sizeY <= sVar4 || (sVar1 < 0)))) || (g_worldGrid.sizeZ <= sVar1)) ||
      (local_10 = STGridAt3D(g_worldGrid, sVar3, sVar4, sVar1).objects[0], local_10 == nullptr)) &&
     ((((sVar3 < 0 || (g_worldGrid.sizeX <= sVar3)) ||
       ((sVar4 < 0 ||
        (((g_worldGrid.sizeY <= sVar4 || (sVar1 < 0)) || (g_worldGrid.sizeZ <= sVar1)))))) ||
      (local_10 = STGridAt3D(g_worldGrid, sVar3, sVar4, sVar1).objects[1], local_10 == nullptr)))) {
    return 0;
  }
  st::fn_004031E3(local_10,&local_14,&local_18,&param_1);
  local_30 = 0;
  if (0 < local_8) {
    local_34 = (short *)(local_c + 2);
    do {
      sVar3 = local_34[1] + STField<short>(this,0x4b);
      *param_4 = sVar3;
      if ((-1 < sVar3) && ((int)sVar3 <= g_worldGrid.sizeZ + -1)) {
        sVar3 = STField<short>(this,0x49) + *local_34;
        *param_3 = sVar3;
        if ((-1 < sVar3) && ((int)sVar3 <= g_worldGrid.sizeY + -1)) {
          sVar4 = local_34[-1] + STField<short>(this,0x47);
          *param_2 = sVar4;
          if (-1 < sVar4) {
            local_28 = (int)g_worldGrid.sizeX;
            local_2c = (int)sVar4;
            if (local_2c <= local_28 + -1) {
              sVar1 = *param_3;
              sVar2 = *param_4;
              if ((-1 < STGridAt3D(g_pathingGrid, local_2c, sVar1, sVar2)) &&
                 ((((sVar4 < 0 || (g_worldGrid.sizeX <= sVar4)) ||
                   ((sVar1 < 0 ||
                    (((g_worldGrid.sizeY <= sVar1 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2))))
                   )) || (g_worldGrid.cells
                          [(int)sVar2 * (int)g_worldGrid.planeStride + sVar1 * local_28 + (int)sVar4
                          ].objects[0] == nullptr)))) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar9 = CONCAT22(sVar3 >> 0xf,sVar4) * 0xc9 + 100;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_c = (undefined *)
                          (CONCAT22((short)((uint)(local_28 + -1) >> 0x10),sVar1) * 0xc9 + 100);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar11 = CONCAT22(sVar4 >> 0xf,sVar2) * 200 + 100;
                local_40 = iVar9;
                local_3c = iVar11;
                iVar5 = st::fn_006ACF0D((int)(short)iVar9,(int)(short)local_c,(int)(short)iVar11,
                                     (int)(short)local_14,(int)(short)local_18,(int)param_1);
                if ((iVar5 <= STField<short>(this,0x814)) &&
                   ((iVar5 < 1 ||
                    (uVar6 = (int)param_1 - (int)(short)iVar11, uVar10 = (int)uVar6 >> 0x1f,
                    (int)(((uVar6 ^ uVar10) - uVar10) * 10) / iVar5 < 4)))) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  local_20 = (**(code **)(*(int *)this + 0x10))
                                       (iVar9,local_c,iVar11,local_14,local_18,_param_1);
                  local_2c = 0;
                  if (STField<char>(this,0x2b2) == '\0') {
                    return 1;
                  }
                  iVar11 = (int)this + 0x2a8;
                  do {
                    piVar7 = st::pointer_boundary_cast<int *>(st::fn_0040342C(local_48,(short)*(undefined4 *)(iVar11 + -2),
                                                *(ushort *)(iVar11 + 2),(short)local_20));
                    sStack_56 = (short)((uint)*piVar7 >> 0x10);
                    local_28 = *piVar7 + iVar9;
                    sVar3 = (short)local_c - sStack_56;
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    local_24 = CONCAT22(uStack_52,(short)piVar7[1]) + local_3c;
                    puVar8 = st::fn_0040342C(local_50,0,0,(short)local_20);
                    sStack_56 = (short)((uint)*puVar8 >> 0x10);
                    sVar4 = (short)local_14 + (short)*puVar8;
                    sStack_56 = (short)local_18 - sStack_56;
                    if (STField<int>(this,0x736) == 0) {
                      iVar9 = st::fn_00405907
                                        (st::pointer_boundary_cast<STSprGameObjC *>(this),(short)local_28,sVar3,(short)local_24,sVar4,sStack_56,
                                         (short)_param_1,
                                         STField<STSprGameObjC_CheckRay_param_7Enum>(this,0x79a),
                                         (int *)&local_1c,0);
                      if ((iVar9 == 0) && (local_1c != local_10)) break;
                    }
                    else {
                      iVar9 = st::fn_00405907
                                        (st::pointer_boundary_cast<STSprGameObjC *>(this),(short)local_28,sVar3,(short)local_24,sVar4,sStack_56,
                                         (short)_param_1,
                                         STField<STSprGameObjC_CheckRay_param_7Enum>(this,0x79a),
                                         (int *)&local_1c,1);
                      if ((iVar9 == 0) && (local_1c != local_10)) break;
                    }
                    local_2c = local_2c + 1;
                    iVar11 = iVar11 + 6;
                    iVar9 = local_40;
                    if ((int)(uint)STField<byte>(this,0x2b2) <= local_2c) {
                      return 1;
                    }
                  } while( true );
                }
              }
            }
          }
        }
      }
      local_30 = local_30 + 1;
      local_34 = local_34 + 3;
    } while (local_30 < local_8);
  }
  return local_38;
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

// 00486AA0 FUN_00486aa0
#line 4 "decomp/ST.exe/functions/00486AA0/decomp.c"
void __thiscall st::fn_00486AA0(void *this,int param_1)

{
  if (param_1 < 0) {
    param_1 = 1;
  }
  else if (100 < param_1) {
    param_1 = 100;
  }
  STField<int>(this,0x716) = (STField<int>(this,0x712) * param_1) / 100;
  return;
}

// 00486AF0 FUN_00486af0
#line 4 "decomp/ST.exe/functions/00486AF0/decomp.c"
void __thiscall st::fn_00486AF0(void *this,int param_1)

{
  if (param_1 < 0) {
    STField<undefined4>(this,0x716) = 1;
    return;
  }
  if (STField<int>(this,0x712) < param_1) {
    STField<int>(this,0x716) = STField<int>(this,0x712);
    return;
  }
  STField<int>(this,0x716) = param_1;
  return;
}

// 00486B40 FUN_00486b40
#line 4 "decomp/ST.exe/functions/00486B40/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00440AA0 -> 00486B40 @ 00441236 | 00440AA0 -> 00486B40 @ 0044130B | 00440AA0 ->
   00486B40 @ 0044137D | 00440AA0 -> 00486B40 @ 00441504 | 00440AA0 -> 00486B40 @ 004415C4 |
   00440AA0 -> 00486B40 @ 00441636 */

int __fastcall st::fn_00486B40(STGameObjC *objPtr)

{
  return objPtr->field_0712 - objPtr->field_0716;
}

// 00486B60 FUN_00486b60
#line 4 "decomp/ST.exe/functions/00486B60/decomp.c"
void __thiscall st::fn_00486B60(void *this,undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar5;
  int iVar4;
  int local_EAX_316;
  undefined4 uVar6;
  int iVar7;
  int *local_c;
  short local_8;
  short local_6;

  puVar1 = param_1;
  *param_1 = 1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar5 = (**(code **)(*(int *)this + 8))();
  if (iVar5 == 1) {
    puVar1[1] = 1;
  }
  else {
    puVar1[1] = 0;
  }
  puVar1[2] = 1;
  iVar5 = st::fn_0040226B(st::pointer_boundary_cast<STGameObjC *>(this));
  if (iVar5 == 0) {
    puVar1[0x1d] = 1;
  }
  else {
    puVar1[0x1d] = 0;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*(int *)this + 0x7c))();
  puVar1[0x1b] = uVar2;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*(int *)this + 0xc4))();
  puVar1[0x1c] = uVar2;
  *(undefined4 *)(puVar1 + 3) = STField<undefined4>(this,0x6f7);
  iVar4 = st::fn_00401F5A(STField<int>(this,0x6f7));
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
    if (STField<AnonShape_005EFAE0_B406B78B *>(this,0x7ca) != nullptr)
    {
      local_c = nullptr;
      st::fn_006E62D0
                (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(this,0x7ca),
                 (int *)&local_c);
      if (local_c != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar6 = (**(code **)(*local_c + 0x2c))();
        *(undefined4 *)(puVar1 + 0x1e) = uVar6;
        iVar5 = local_c[8];
        if (iVar5 == 0x14) {
          local_EAX_316 = st::fn_00401F5A(STField<int>(this,0x6f7));
          puVar1[0x22] = (char)local_EAX_316;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          uVar2 = (**(code **)(*local_c + 0x7c))();
          puVar1[0x23] = uVar2;
        }
        else if ((iVar5 == 0x172) || (iVar5 == 0x1a4)) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          uVar2 = (**(code **)(*local_c + 0xc))();
          puVar1[0x22] = uVar2;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          uVar2 = (**(code **)(*local_c + 0x7c))();
          puVar1[0x23] = uVar2;
        }
        else {
          puVar1[0x22] = 0;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          uVar2 = (**(code **)(*local_c + 0x7c))();
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
  st::fn_004018C5(st::pointer_boundary_cast<STFishC *>(this),&local_8,&local_6,(short *)((int)&param_1 + 2));
  puVar1[0x2e - STPiece<2,2>(param_1)] = 1;
  return;
}

// 00486E20 FUN_00486e20
#line 4 "decomp/ST.exe/functions/00486E20/decomp.c"
void __thiscall st::fn_00486E20(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar6;
  int local_EAX_3188;
  int local_EAX_3446;
  int local_EAX_3805;
  int local_EAX_4175;
  int local_EAX_4482;
  uint uVar3;
  int local_EAX_4718;
  int local_EAX_4936;
  AiPlrClassTy *pAVar4;
  STGroupBoatC *pSVar5;
  int iVar7;
  bool bVar9;
  undefined4 local_8;

  puVar1 = param_1;
  memset(param_1, 0, 0x5c); /* compiler bulk-zero initialization */
  *param_1 = STField<undefined4>(this,0x6f7);
  local_8 = st::machine_word_boundary_cast<undefined4>(this);
  iVar6 = st::fn_00401F5A(STField<int>(this,0x6f7));
  *(char *)(puVar1 + 1) = (char)iVar6;
  STField<undefined1>(puVar1,6) = 1;
  iVar7 = st::fn_0040226B(st::pointer_boundary_cast<STGameObjC *>(this));
  if (iVar7 == 0) {
    STField<undefined1>(puVar1,7) = 1;
  }
  else {
    STField<undefined1>(puVar1,7) = 0;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar7 = (**(code **)(*(int *)this + 8))();
  if (iVar7 == 1) {
    *(undefined1 *)(puVar1 + 2) = 1;
  }
  else {
    *(undefined1 *)(puVar1 + 2) = 0;
  }
  if (STField<uint>(this,0x24) != (uint)*(byte *)(STField<int>(this,0x10) + 0x112d))
  goto cf_common_exit_00486ED3;
  bVar2 = *(byte *)(puVar1 + 1);
  if (bVar2 != 0) {
    if (bVar2 < 3) {
      bVar2 = st::fn_004049B7(STField<char>(this,0x24));
      if (bVar2 == 3) goto cf_common_exit_00486ED3;
    }
    else if ((bVar2 == 3) &&
            ((bVar2 = st::fn_004049B7(STField<char>(this,0x24)), bVar2 == 1 ||
             (bVar2 = st::fn_004049B7(STField<char>(this,0x24)), bVar2 == 2)))) {
cf_common_exit_00486ED3:
      STField<undefined1>(puVar1,5) = 3;
      return;
    }
  }
  STField<undefined1>(puVar1,5) = 1;
  STField<undefined1>(puVar1,0x39) = 1;
  *(undefined1 *)(puVar1 + 0xe) = 1;
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
    *(undefined1 *)(puVar1 + 3) = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 6;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) {
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
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
      *(undefined1 *)(puVar1 + 5) = 1;
      goto switchD_00486f27_default;
    }
    break;
  case 4:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 4;
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
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
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
        *(undefined1 *)(puVar1 + 5) = 1;
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
    *(undefined1 *)(puVar1 + 3) = 4;
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
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
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
    iVar7 = STField<int>(this,0x7be);
    goto LAB_0048797b;
  case 6:
  case 0x12:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 4;
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
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
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
      bVar9 = STField<int>(this,0x716) == STField<int>(this,0x712);
LAB_00487a9b:
      if (!bVar9) {
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
    *(undefined1 *)(puVar1 + 3) = 4;
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
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
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
        *(undefined1 *)(puVar1 + 5) = 3;
      }
      else {
        *(undefined1 *)(puVar1 + 5) = 1;
      }
    }
    else {
      iVar7 = st::fn_0040406B(this,STField<short>(this,0x5b),STField<short>(this,0x5d),
                                 STField<short>(this,0x5f),(undefined2 *)&local_8,
                                 (undefined2 *)((int)&local_8 + 2),(short *)((int)&param_1 + 2));
      if (iVar7 == 0) {
        *(undefined1 *)(puVar1 + 5) = 0;
      }
      else {
        if ((STField<int>(this,0x45d) == 0x10) || (STField<int>(this,0x459) == 0x74))
        goto LAB_00487782;
        *(undefined1 *)(puVar1 + 5) = 1;
      }
    }
    if (STField<int>(this,0x7ca) != 0) {
      *(undefined1 *)(puVar1 + 4) = 0;
    }
    goto switchD_00486f27_default;
  case 8:
  case 0x14:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 0x11;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 4;
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
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
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
      bVar9 = STField<int>(this,0x716) == STField<int>(this,0x712);
LAB_00487b9d:
      if (!bVar9) {
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
        *(undefined1 *)(puVar1 + 4) = 3;
      }
      else {
        *(undefined1 *)(puVar1 + 4) = 1;
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
    *(undefined1 *)(puVar1 + 3) = 4;
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
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
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
      *(undefined1 *)(puVar1 + 5) = 1;
      goto switchD_00486f27_default;
    }
    break;
  case 0x16:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 4;
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
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
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
      *(undefined1 *)(puVar1 + 5) = 1;
      goto switchD_00486f27_default;
    }
    goto LAB_00487975;
  case 0x17:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 4;
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
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
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
      *(undefined1 *)(puVar1 + 5) = 3;
      goto switchD_00486f27_default;
    }
    goto LAB_00487bcf;
  case 0x19:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 0xe;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 0x48;
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
    *(undefined1 *)(puVar1 + 4) = 1;
    goto LAB_0048802e;
  case 0x1a:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 0x11;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 0x48;
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
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) != 0x16) && (STField<int>(this,0x459) != 0x7a)) {
      if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field95_0x15f != 0) &&
         (uVar3 = st::fn_004036A7(STField<int>(this,0x24)), uVar3 != 0)) {
        local_EAX_3446 = st::fn_00403594(st::pointer_boundary_cast<TLOBaseTy *>(this));
        bVar9 = local_EAX_3446 == 0;
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
      *(undefined1 *)(puVar1 + 5) = 1;
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
    *(undefined1 *)(puVar1 + 3) = 0x48;
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
        *(undefined1 *)(puVar1 + 4) = 3;
      }
      else {
        *(undefined1 *)(puVar1 + 4) = 1;
      }
    }
    else {
      iVar7 = st::fn_0040406B(this,STField<short>(this,0x5b),STField<short>(this,0x5d),
                                 STField<short>(this,0x5f),(undefined2 *)((int)&local_8 + 2),
                                 (undefined2 *)&local_8,(short *)((int)&param_1 + 2));
      if (iVar7 == 0) {
        *(undefined1 *)(puVar1 + 4) = 0;
      }
      else {
        if ((STField<int>(this,0x45d) == 0x10) || (STField<int>(this,0x459) == 0x74))
        goto LAB_00487e0b;
        *(undefined1 *)(puVar1 + 4) = 1;
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
             (uVar3 = st::fn_004036A7(STField<int>(this,0x24)), uVar3 == 0)) ||
            (local_EAX_4175 = st::fn_00403594(st::pointer_boundary_cast<TLOBaseTy *>(this)), local_EAX_4175 == 0)) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    iVar7 = st::fn_0040186B(STField<int>(this,0x24),0x5f);
    if (0 < iVar7) {
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
    *(undefined1 *)(puVar1 + 3) = 0x48;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 0;
    goto LAB_004879a0;
  case 0x1d:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 0x10;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 0x48;
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
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
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
             (uVar3 = st::fn_004036A7(STField<int>(this,0x24)), uVar3 == 0)) ||
            (local_EAX_3805 = st::fn_00403594(st::pointer_boundary_cast<TLOBaseTy *>(this)), local_EAX_3805 == 0)) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    iVar7 = st::fn_0040186B(STField<int>(this,0x24),0x5f);
    if (iVar7 < 1) goto cf_common_join_004881B5;
    if ((STField<int>(this,0x45d) == 0x15) && (STField<int>(this,0x635) == 2))
    goto LAB_00487eb7;
LAB_00487ecd:
    if (9 < STField<int>(this,0x71e)) {
      *(undefined1 *)(puVar1 + 5) = 1;
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
    *(undefined1 *)(puVar1 + 3) = 0x48;
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
        *(undefined1 *)(puVar1 + 4) = 3;
      }
      else {
        *(undefined1 *)(puVar1 + 4) = 1;
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
               (uVar3 = st::fn_004036A7(STField<int>(this,0x24)), uVar3 == 0)) ||
              (local_EAX_4718 = st::fn_00403594(st::pointer_boundary_cast<TLOBaseTy *>(this)), local_EAX_4718 == 0)) {
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
    *(undefined1 *)(puVar1 + 3) = 0x48;
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
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
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
             (uVar3 = st::fn_004036A7(STField<int>(this,0x24)), uVar3 == 0)) ||
            (local_EAX_4482 = st::fn_00403594(st::pointer_boundary_cast<TLOBaseTy *>(this)), local_EAX_4482 == 0)) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if ((STField<int>(this,0x45d) != 7) && (STField<int>(this,0x459) != 0x6b)) {
      if (0 < STField<int>(this,0x7be)) {
        *(undefined1 *)(puVar1 + 5) = 1;
        goto switchD_00486f27_default;
      }
      goto cf_common_join_004881B5;
    }
    break;
  case 0x22:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 0x48;
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
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) != 0x16) && (STField<int>(this,0x459) != 0x7a)) {
      if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field95_0x15f != 0) &&
         (uVar3 = st::fn_004036A7(STField<int>(this,0x24)), uVar3 != 0)) {
        local_EAX_3188 = st::fn_00403594(st::pointer_boundary_cast<TLOBaseTy *>(this));
        bVar9 = local_EAX_3188 == 0;
        goto LAB_00487a9b;
      }
      goto LAB_00487aa3;
    }
LAB_00487aa9:
    STField<undefined1>(puVar1,0x12) = 3;
LAB_00487aad:
    STField<undefined1>(puVar1,0x13) = 1;
    if ((STField<int>(this,0x45d) != 9) && (STField<int>(this,0x459) != 0x6d)) {
      *(undefined1 *)(puVar1 + 5) = 1;
      goto switchD_00486f27_default;
    }
    break;
  case 0x24:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 0;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 0x48;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 0x18;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    *(undefined1 *)(puVar1 + 4) = 0;
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
             (uVar3 = st::fn_004036A7(STField<int>(this,0x24)), uVar3 == 0)) ||
            (local_EAX_4936 = st::fn_00403594(st::pointer_boundary_cast<TLOBaseTy *>(this)), local_EAX_4936 == 0)) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if ((STField<int>(this,0x45d) != 0x15) || (STField<int>(this,0x635) != 2)) {
      if (9 < STField<int>(this,0x71e)) {
        *(undefined1 *)(puVar1 + 5) = 1;
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
    *(undefined1 *)(puVar1 + 3) = 4;
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
    *(undefined1 *)(puVar1 + 4) = 0;
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
      *(undefined1 *)(puVar1 + 5) = 1;
      goto switchD_00486f27_default;
    }
LAB_00487975:
    iVar7 = STField<int>(this,0x726);
LAB_0048797b:
    if (0 < iVar7) {
      *(undefined1 *)(puVar1 + 5) = 1;
      goto switchD_00486f27_default;
    }
cf_common_join_004881B5:
    *(undefined1 *)(puVar1 + 5) = 0;
  default:
    goto switchD_00486f27_default;
  }
  *(undefined1 *)(puVar1 + 5) = 3;
switchD_00486f27_default:
  pAVar4 = st::fn_00401DC5(STField<char>(this,0x24));
  if (pAVar4 == nullptr) {
    STField<undefined1>(puVar1,0x15) = 0;
  }
  else {
    pSVar5 = st::fn_00405CF9(STField<char>(this,0x24),STField<ushort>(this,0x30));
    if (pSVar5 == nullptr) {
      STField<undefined1>(puVar1,0x15) = 0;
    }
    else if (pSVar5->field_001C == 0) {
      STField<undefined1>(puVar1,0x15) = 1;
    }
    else {
      STField<undefined1>(puVar1,0x15) = 3;
    }
  }
  switch(STField<undefined4>(this,0x6f7)) {
  case 0x16:
  case 0x25:
    *(undefined1 *)(puVar1 + 0xd) = STField<undefined1>(this,0x726);
    break;
  case 0x17:
    *(undefined1 *)(puVar1 + 0xd) = STField<undefined1>(this,0x72a);
    break;
  default:
    *(undefined1 *)(puVar1 + 0xd) = 0;
    break;
  case 0x1b:
  case 0x1d:
  case 0x24:
    *(undefined1 *)(puVar1 + 0xd) = STField<undefined1>(this,0x71e);
    break;
  case 0x23:
    *(undefined1 *)(puVar1 + 0xd) = STField<undefined1>(this,0x722);
  }
  *(undefined1 *)(puVar1 + 7) = STField<undefined1>(this,0x7d2);
  STField<undefined1>(puVar1,0x1d) = STField<undefined1>(this,0x7d6);
  STField<undefined1>(puVar1,0x1e) = STField<undefined1>(this,0x7da);
  return;
}

// 00488890 FUN_00488890
#line 4 "decomp/ST.exe/functions/00488890/decomp.c"
void __thiscall st::fn_00488890(void *this,int param_1)

{
  uint index;
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  byte bVar4;
  int local_EAX_38;
  int uVar4;
  DArrayTy *pDVar5;
  int iVar6;
  int iVar7;
  int local_EAX_393;
  int local_EAX_430;
  int local_EAX_483;
  int local_EAX_519;
  int local_EAX_732;
  int uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint index_00;
  int local_7c [2];
  char local_74;
  int local_4c [2];
  char local_44;
  byte local_43;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  uint local_3a [7];
  undefined4 *local_1c;
  int local_18;
  void *local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;

  local_18 = 0;
  local_14 = this;
  do {
    iVar9 = local_18;
    local_8 = nullptr;
    local_EAX_38 = st::fn_004049B7(STField<char>(this,0x24));
    local_EAX_38 = (int)(byte)local_EAX_38;
    local_1c = &DAT_00800fa0 + local_EAX_38 * 4;
    switch(iVar9) {
    case 0:
      local_8 = (undefined4 *)&DAT_008014a0;
      break;
    case 1:
      local_8 = (undefined4 *)&DAT_00800f90;
      break;
    case 2:
      local_8 = (undefined4 *)&DAT_00800f80;
      break;
    case 3:
      local_8 = (undefined4 *)&DAT_00801360;
      break;
    case 4:
      local_1c = nullptr;
      uVar4 = st::fn_004049B7(STField<char>(this,0x24));
      uVar4 = (int)(byte)uVar4;
      local_8 = &DAT_00801370 + uVar4 * 4;
    }
    if (*(int *)(param_1 + iVar9 * 4) == 0) {
      pDVar5 = st::fn_006AE290(nullptr,5,0x30,5);
      *(DArrayTy **)(param_1 + iVar9 * 4) = pDVar5;
    }
    local_10 = 0;
    local_c = 0x32;
    do {
      iVar8 = local_c;
      if (((((local_1c == nullptr) || (iVar6 = st::fn_006B0FD0((int)local_1c), iVar6 != 0))
           && (iVar6 = st::fn_006B0FD0((int)local_8), iVar6 != 0)) &&
          (iVar6 = st::fn_0040571D(STField<int>(this,0x24),iVar8 + -0x32), iVar6 != 0)) &&
         ((iVar8 < 0x54 || (0x5a < iVar8)))) {
        piVar10 = local_4c;
        for (iVar8 = 0xc; iVar6 = local_c, iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar10 = 0;
          piVar10 = piVar10 + 1;
        }
        local_4c[0] = local_c;
        local_4c[1] = 0;
        iVar7 = st::fn_0040469C(STField<int>(this,0x24),local_c);
        if ((iVar7 == 0) ||
           (((bVar4 = st::fn_004049B7(STField<char>(this,0x24)), bVar4 == 3 && (iVar6 != 0x5c))
            && (g_packedRecords_A62x8[STField<int>(this,0x24)].field1965_0x9ca == 0)))) {
          local_44 = '\0';
        }
        else {
          local_44 = '\x01';
        }
        local_EAX_393 = st::fn_004049B7(STField<char>(this,0x24));
        iVar8 = local_10;
        local_EAX_393 = (int)(byte)local_EAX_393;
        local_3e = *(undefined2 *)(&DAT_008545a8 + (local_EAX_393 + local_10) * 4);
        local_EAX_430 = st::fn_004049B7(STField<char>(this,0x24));
        local_EAX_430 = (int)(byte)local_EAX_430;
        local_42 = *(undefined2 *)(&DAT_007e1c4c + (local_EAX_430 + iVar8) * 4);
        bVar4 = st::fn_004049B7(STField<char>(this,0x24));
        if (bVar4 == 3) {
          local_EAX_483 = st::fn_004049B7(STField<char>(this,0x24));
          local_EAX_483 = (int)(byte)local_EAX_483;
          local_40 = *(undefined2 *)(&DAT_007e315c + (local_EAX_483 + iVar8) * 4);
        }
        else {
          local_EAX_519 = st::fn_004049B7(STField<char>(this,0x24));
          local_EAX_519 = (int)(byte)local_EAX_519;
          local_40 = *(undefined2 *)(&DAT_007e24f8 + (local_EAX_519 + iVar8) * 4);
        }
        local_3c = 0xffff;
        local_43 = st::fn_004049B7(STField<char>(this,0x24));
        st::fn_00405551(STField<byte *>(this,0x24),local_4c[0],local_3a);
        st::fn_006AE1C0(*(DArrayTy **)(param_1 + iVar9 * 4),local_4c);
        iVar8 = local_c;
      }
      local_c = iVar8 + 1;
      local_10 = local_10 + 3;
    } while (iVar8 + -0x31 < 0x42);
    pDVar5 = *(DArrayTy **)(param_1 + iVar9 * 4);
    puVar1 = (undefined4 *)pDVar5->count;
    puVar2 = puVar1;
    while (puVar2 != nullptr) {
      local_1c = nullptr;
      index_00 = 0;
      if ((int)puVar1 + -2 < 0) break;
      do {
        st::fn_006ACC70(pDVar5,index_00,local_4c);
        index = index_00 + 1;
        st::fn_006ACC70(*(DArrayTy **)(param_1 + iVar9 * 4),index,local_7c);
        pvVar3 = local_14;
        if (local_44 == '\0') {
          if (local_74 == '\0') {
LAB_00488b5f:
            local_EAX_732 = st::fn_004049B7(STField<char>(local_14,0x24));
            local_10 = (uint)(byte)local_EAX_732 + local_7c[0] * 3;
            uVar7 = st::fn_004049B7(STField<char>(pvVar3,0x24));
            iVar9 = local_18;
            if (*(int *)(&DAT_007e1dac + local_10 * 4) <=
                *(int *)(&DAT_007e1dac + ((uint)(byte)uVar7 + local_4c[0] * 3) * 4))
            goto LAB_00488bce;
          }
          st::fn_006B0CD0(*(AnonShape_00413AF0_B6B4EE9A **)(param_1 + iVar9 * 4),index_00,index);
          local_1c = (undefined4 *)0x1;
        }
        else if (local_44 == local_74) goto LAB_00488b5f;
LAB_00488bce:
        pDVar5 = *(DArrayTy **)(param_1 + iVar9 * 4);
        puVar1 = (undefined4 *)pDVar5->count;
        index_00 = index;
        this = local_14;
        puVar2 = local_1c;
      } while ((int)index <= (int)puVar1 + -2);
    }
    local_18 = iVar9 + 1;
    if (4 < local_18) {
      return;
    }
  } while( true );
}

// 00488D10 FUN_00488d10
#line 4 "decomp/ST.exe/functions/00488D10/decomp.c"
void __thiscall st::fn_00488D10(void *this,undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  STField<undefined1>(param_1,0x12) = 0;
  *param_1 = STField<undefined4>(this,0x6f7);
  *(undefined1 *)(param_1 + 1) = 0x2b;
  STField<undefined1>(param_1,5) = 0x2c;
  STField<undefined1>(param_1,6) = 5;
  STField<undefined1>(param_1,7) = 6;
  *(undefined1 *)(param_1 + 2) = 0x4d;
  STField<undefined1>(param_1,9) = 0x2d;
  if (STField<int>(this,0x7e6) == 0) {
    STField<undefined1>(param_1,0x11) = 3;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 4) = 3;
    STField<undefined1>(param_1,0x11) = 1;
  }
  if (STField<int>(this,0x7ea) == 0) {
    STField<undefined1>(param_1,0x12) = 1;
  }
  else {
    STField<undefined1>(param_1,0x12) = 3;
  }
  switch(STField<undefined4>(this,0x6f7)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 10:
  case 0xb:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x1c:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x26:
  case 0x27:
  case 0x28:
    STField<undefined1>(param_1,10) = 1;
    STField<undefined1>(param_1,0xb) = 1;
    if (STField<int>(this,0x45d) == 5) {
      *(undefined1 *)(param_1 + 3) = 3;
    }
    else {
      *(undefined1 *)(param_1 + 3) = 1;
    }
    if (STField<int>(this,0x45d) == 6) {
      STField<undefined1>(param_1,0xd) = 3;
    }
    else {
      STField<undefined1>(param_1,0xd) = 1;
    }
    if ((STField<int>(this,0x45d) == 0x15) && (STField<int>(this,0x635) != 2)) {
      STField<undefined1>(param_1,0xe) = 3;
    }
    else {
      STField<undefined1>(param_1,0xe) = 1;
    }
    if (STField<int>(this,0x45d) == 8) {
      STField<undefined1>(param_1,0xf) = 3;
      return;
    }
    break;
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0x13:
  case 0x14:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1d:
  case 0x24:
  case 0x25:
    STField<undefined1>(param_1,10) = 0;
    STField<undefined1>(param_1,0xb) = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    if (STField<int>(this,0x45d) == 6) {
      STField<undefined1>(param_1,0xd) = 3;
    }
    else {
      STField<undefined1>(param_1,0xd) = 1;
    }
    if (STField<int>(this,0x45d) == 0x15) {
      STField<undefined1>(param_1,0xe) = 3;
    }
    else {
      STField<undefined1>(param_1,0xe) = 1;
    }
    if (STField<int>(this,0x45d) == 8) {
      STField<undefined1>(param_1,0xf) = 3;
      return;
    }
    break;
  default:
    goto switchD_00488d99_default;
  }
  STField<undefined1>(param_1,0xf) = 1;
switchD_00488d99_default:
  return;
}

// 00488EE0 FUN_00488ee0
#line 4 "decomp/ST.exe/functions/00488EE0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00488EE0 returns return of FUN_004e8030 @ 00488F18 */

int __thiscall st::fn_00488EE0(void *this,undefined1 *param_1)

{
  int iVar1;

  *param_1 = 1;
  param_1[1] = 1;
  *(undefined4 *)(param_1 + 2) = STField<undefined4>(this,0x6f7);
  iVar1 = st::fn_00401F5A(STField<int>(this,0x6f7));
  param_1[6] = (char)iVar1;
  *(undefined4 *)(param_1 + 7) = STField<undefined4>(this,0x18);
  return iVar1;
}

// 004898C0 FUN_004898c0
#line 4 "decomp/ST.exe/functions/004898C0/decomp.c"
void __thiscall st::fn_004898C0(void *this,AnonShape_004898C0_081F3DAB *param_1)

{
  int iVar1;
  int iVar2;
  AnonShape_004898C0_081F3DAB *pAVar3;

  pAVar3 = param_1;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar3 = 0;
    pAVar3 = (AnonShape_004898C0_081F3DAB *)&pAVar3->field_0x4;
  }
  *(undefined4 *)param_1 = STField<undefined4>(this,0x18);
  *(undefined4 *)&param_1->field_0x4 = STField<undefined4>(this,0x6f7);
  iVar1 = st::fn_00401F5A(STField<int>(this,0x6f7));
  param_1->field_0x8 = (char)iVar1;
  param_1->field_0009 = STField<undefined4>(this,0x6fb);
  param_1->field_000D = STField<undefined4>(this,0x6ff);
  param_1->field_0011 = STField<undefined4>(this,0x703);
  param_1->field_0015 = STField<undefined2>(this,0x707);
  param_1->field_0017 = STField<undefined1>(this,0x709);
  return;
}

// 00489950 FUN_00489950
#line 4 "decomp/ST.exe/functions/00489950/decomp.c"
void __fastcall st::fn_00489950(int param_1)

{
  undefined4 *puVar1;
  int iVar2;

  iVar2 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(char *)(param_1 + 0x281) != '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x282);
    do {
      if ((DArrayTy *)*puVar1 != nullptr) {
        st::fn_006AE110((DArrayTy *)*puVar1);
        *puVar1 = 0;
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x281));
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

  pSVar1 = (STBoatC *)st::fn_006B04D0(0x85e);
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

void __fastcall st::fn_0048A840(AnonShape_0048A840_34A87A21 *param_1)

{
  undefined4 uVar1;
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
void __fastcall st::fn_0048A910(AnonShape_0048A910_6D6DD7B1 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;

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

  this = st::fn_00405CF9(*(char *)&param_1->field_0024,param_1->field_0030);
  if (param_1->field_04A1 == -1) {
    if (param_1->field_04AB != -1) {
      return (param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2 < 1) - 1 & 7;
    }
    return 0;
  }
  if (param_1->field_04AB == -1) {
    return (uint)(param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2 < 0x28);
  }
  iVar1 = st::fn_0040407A(this,(uint)(ushort)param_1->field_0032,
                             (short *)(int)param_1->field_049B,(short *)(int)param_1->field_049D,
                             (short *)(param_1->field_049F + 1),'\0');
  iVar2 = st::fn_0040407A(this,(uint)(ushort)param_1->field_0032,
                             (short *)(int)param_1->field_04A5,(short *)(int)param_1->field_04A7,
                             (short *)(param_1->field_04A9 + 1),'\0');
  if (iVar1 != -4) {
    if (iVar2 == -4) {
      return (uint)(param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2 < 0x28);
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
  st::fn_004018C5(param_1,(short *)&param_1,local_8,local_c);
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
                             st::machine_word_boundary_cast<int>(local_8[0] + iVar5),st::machine_word_boundary_cast<int>(local_c[0] + 1));
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
  st::fn_004018C5(param_1,(short *)&param_1,local_8,local_c);
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
                             st::machine_word_boundary_cast<int>(local_8[0] + iVar5),st::machine_word_boundary_cast<int>(local_c[0] + 1));
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

// 0048DC90 FUN_0048dc90
#line 4 "decomp/ST.exe/functions/0048DC90/decomp.c"
/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=3, ignored=0, unknown=0

   [STReturnSemanticsApplier] returned_pointer_parameter.
   Evidence: every reachable RET receives full EAX from the same incoming pointer parameter param_1
   (ordinal=1); no intervening full or partial accumulator definition changes that value; machine
   CFG audit: used=3, ignored=0, unknown=0 */

undefined4 * __thiscall st::fn_0048DC90(void *this,undefined4 *param_1)

{
  byte *puVar2;
  byte *puVar3;

  puVar2 = (byte *)((int)this + 0x49b);
  puVar3 = (byte *)(param_1);
  memmove(puVar3, puVar2, 0x42); /* compiler REP MOVS byte copy */
  return param_1;
}

// 0048DCC0 FUN_0048dcc0
#line 4 "decomp/ST.exe/functions/0048DCC0/decomp.c"
void __thiscall st::fn_0048DCC0(void *this,undefined4 *param_1)

{
  byte *puVar2;

  puVar2 = (byte *)((int)this + 0x554);
  memmove(param_1, puVar2, 0x34); /* compiler REP MOVS byte copy */
  return;
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
                               (int)param_1->field_004B,st::machine_word_boundary_cast<int>(param_1->field_04DD + local_8),
                               st::machine_word_boundary_cast<int>(param_1->field_04DF + iVar5),st::machine_word_boundary_cast<int>(param_1->field_04E1 + 1));
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
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar2 = st::fn_00404908
                    (param_1,param_1->field_04DD,param_1->field_04DF,sVar1,param_1->field_04DD,
                     param_1->field_04DF,(int *)STReplaceLowWord((uint32_t)(in_EAX), (uint16_t)(sVar1)),2,
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
   Evidence: 0046CF20 -> 0048FA80 @ 0046D0D1; STBoatC::CreateGame this; stable alias ESI */

undefined4 __fastcall st::fn_0048FA80(STBoatC *param_1)

{
  int iVar1;
  int *piVar2;

  iVar1 = 0;
  piVar2 = st::pointer_boundary_cast<int *>(&param_1->field_02CC);
  while ((iVar1 == 2 || (*piVar2 != 1))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    if (0x16 < iVar1) {
      return 1;
    }
  }
  return 0;
}

