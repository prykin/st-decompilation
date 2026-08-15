#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_00480600(void *param_1)

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

  iVar3 = thunk_FUN_0041c710(param_1);
  this = (STT3DSprC *)((int)param_1 + 0x1d5);
  if (iVar3 == 1) {
    iVar3 = 1;
    uVar4 = thunk_FUN_004ad650(this);
    Library::Ourlib::ST3DSMAP::SprSetVisible(STField<void *>(param_1,0x211),uVar4,iVar3);
    iVar2 = 1;
  }
  else {
    iVar3 = 0;
    uVar4 = thunk_FUN_004ad650(this);
    Library::Ourlib::ST3DSMAP::SprSetVisible(STField<void *>(param_1,0x211),uVar4,iVar3);
    iVar3 = thunk_FUN_004e60d0(STField<int>(param_1,0x24),0x24);
    if ((iVar3 < 1) ||
       ((STField<int>(param_1,0x77a) + g_playSystem_00802A38->field_00E4) %
        (STField<uint>(param_1,0x77e) * 2) <= STField<uint>(param_1,0x77e))) {
      iVar2 = thunk_FUN_0041caf0(param_1);
    }
    else {
      iVar2 = 0;
    }
  }
  local_EAX_145 = thunk_FUN_004ad650(this);
  FUN_006e6870(STField<void *>(param_1,0x211),local_EAX_145,iVar2);
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
    uVar4 = thunk_FUN_004ac910(this,'\x0e');
    if (local_8 != uVar4) {
      STT3DSprC::SetCurFase(this,'\x0e',local_8);
      STT3DSprC::SetCurFase(this,'\f',(int)puVar5 + STField<int>(param_1,0x822) + iVar3);
      iVar3 = STT3DSprC::ShowCurFase(this,'\x0e');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      iVar3 = STT3DSprC::ShowCurFase(this,'\f');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      iVar3 = STT3DSprC::SetCurShad(this,'\x0e',(uint)local_c);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
    goto cf_common_exit_004811C2;
  default:
switchD_004806bc_caseD_a:
    uVar10 = ((0x18 - (int)STField<short>(param_1,0x6c) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) %
             0x18;
    uVar4 = thunk_FUN_004ac910(this,'\x0e');
    if (uVar10 != uVar4) {
      STT3DSprC::SetCurFase(this,'\x0e',uVar10);
      STT3DSprC::SetCurFase(this,'\f',uVar10);
      iVar3 = STT3DSprC::ShowCurFase(this,'\x0e');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      iVar3 = STT3DSprC::ShowCurFase(this,'\f');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      iVar3 = STT3DSprC::SetCurShad
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
    uVar4 = thunk_FUN_004ac910(this,'\x0e');
    if (local_8 != uVar4) {
      STT3DSprC::SetCurFase(this,'\x0e',local_8);
      STT3DSprC::SetCurFase(this,'\f',scalar_puVar5 + STField<int>(param_1,0x822) + iVar19);
      iVar3 = STT3DSprC::ShowCurFase(this,'\x0e');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      iVar3 = STT3DSprC::ShowCurFase(this,'\f');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      iVar3 = STT3DSprC::SetCurShad(this,'\x0e',STField<int>(param_1,0x822) + scalar_local_c);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
    goto cf_common_exit_004811C2;
  case 0x16:
  case 0x25:
    if (STField<int>(param_1,0x732) == 1) {
      iVar4 = thunk_FUN_0041d350(param_1,(uint)DAT_0080874d);
      iVar3 = STField<int>(param_1,0x74a);
      if (iVar4 == 1) {
        if (iVar3 == -1) {
          STField<undefined4>(param_1,0x74a) = 0;
          if (DAT_00811798 != nullptr) {
            thunk_FUN_00620e40(DAT_00811798,(int)STField<short>(param_1,0x47),
                               (int)STField<short>(param_1,0x49),(uint)DAT_0080874d);
          }
        }
        else if ((iVar3 < 0) || ((int)PTR_00806724->entryCount / 2 <= iVar3)) {
          if ((int)PTR_00806724->entryCount / 2 < iVar3) {
            STField<int>(param_1,0x74a) = iVar3 + -1;
          }
          if (STField<int>(param_1,0x74a) == (int)PTR_00806724->entryCount / 2 + 1) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
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
                STAllPlayersC::DelObjFromTmps
                          (g_allPlayers_007FA174,DAT_0080874d,STField<int>(param_1,0x20),bVar21,
                           CONCAT22((short)((uint)STField<int>(param_1,0x74a) >> 0x10),
                                    STField<undefined2>(param_1,0x32)));
                STAllPlayersC::DelObjFromSaveTmps
                          (g_allPlayers_007FA174,STField<int>(param_1,0x20),
                           STField<char>(param_1,0x24),STField<short>(param_1,0x32));
                thunk_FUN_004ad5e0(this);
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
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
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
        STT3DSprC::sub_004ACE30(this,0,0);
      }
      if (STField<int>(param_1,0x74a) == (int)PTR_00806724->entryCount / 2 + 1) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (*(code *)**(undefined4 **)this)();
      }
      if (STField<int>(param_1,0x74a) <= (int)PTR_00806724->entryCount / 2) goto LAB_00480c7f;
LAB_00480c6a:
      iVar3 = 0;
      local_EAX_1646 = thunk_FUN_004ad650(this);
      FUN_006e6870(STField<void *>(param_1,0x211),local_EAX_1646,iVar3);
    }
LAB_00480c7f:
    if (-1 < STField<int>(param_1,0x74a)) {
      STT3DSprC::sub_004ACE30
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
            STT3DSprC::sub_004ACE60(this,'\x0e');
            STT3DSprC::sub_004ACE60(this,'\r');
            STT3DSprC::sub_004ACE60(this,'\f');
            thunk_FUN_004aceb0(this,'\x01');
            thunk_FUN_004aceb0(this,'\x02');
            thunk_FUN_004aceb0(this,'\0');
            thunk_FUN_004aceb0(this,'\x0f');
            thunk_FUN_004aceb0(this,'\v');
            thunk_FUN_004aceb0(this,'\n');
            thunk_FUN_004aceb0(this,'\t');
            thunk_FUN_004aceb0(this,'\b');
            STField<undefined4>(param_1,0x746) = 0;
          }
          goto LAB_00480f12;
        }
      }
      local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar21));
      if (STField<int>(param_1,0x746) == 0) {
        STT3DSprC::sub_004ACE60(this,'\x0e');
        STT3DSprC::sub_004ACE60(this,'\r');
        STT3DSprC::sub_004ACE60(this,'\f');
        STT3DSprC::sub_004ACE60(this,'\x01');
        STT3DSprC::sub_004ACE60(this,'\x02');
        STT3DSprC::sub_004ACE60(this,'\0');
        STT3DSprC::sub_004ACE60(this,'\x0f');
        STT3DSprC::sub_004ACE60(this,'\v');
        STT3DSprC::sub_004ACE60(this,'\n');
        STT3DSprC::sub_004ACE60(this,'\t');
        STT3DSprC::sub_004ACE60(this,'\b');
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
    thunk_FUN_00416390(param_1);
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
      puVar5 = thunk_FUN_0041dc40(local_20,(short)*local_c,*(ushort *)(local_c + 1),
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
        lVar12 = Library::MSVCRT::__ftol();
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
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,1,2,7,iVar9,iVar8 + ((uVar4 >> 0x10) % 7 - 3),iVar6,sVar13,
                 sVar14,sVar15,sVar16,sVar17,sVar18,iVar19,sVar20,bVar21);
      local_c = (undefined4 *)((int)local_c + 6);
      local_8 = local_8 + 1;
    } while ((int)local_8 < (int)(uint)STField<byte>(param_1,0x2bf));
  }
cf_common_exit_004811C2:
  uVar7 = thunk_FUN_0041da30(param_1);
  return uVar7;
}

