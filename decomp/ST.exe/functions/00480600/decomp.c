
undefined4 __fastcall FUN_00480600(void *param_1)

{
  STT3DSprC *this;
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
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
  short sVar19;
  byte bVar20;
  undefined4 local_20 [2];
  undefined4 local_18;
  short local_14;
  int local_10;
  undefined4 *local_c;
  uint local_8;

  iVar2 = thunk_FUN_0041c710((int)param_1);
  this = (STT3DSprC *)((int)param_1 + 0x1d5);
  if (iVar2 == 1) {
    iVar2 = 1;
    uVar3 = thunk_FUN_004ad650((int)this);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    FUN_006eabf0(*(void **)((int)param_1 + 0x211),uVar3,iVar2);
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
    uVar3 = thunk_FUN_004ad650((int)this);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    FUN_006eabf0(*(void **)((int)param_1 + 0x211),uVar3,iVar2);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = thunk_FUN_004e60d0(*(int *)((int)param_1 + 0x24),0x24);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((iVar2 < 1) ||
       ((uint)(*(int *)((int)param_1 + 0x77a) + PTR_00802a38->field_00E4) %
        (*(uint *)((int)param_1 + 0x77e) * 2) <= *(uint *)((int)param_1 + 0x77e))) {
      iVar2 = thunk_FUN_0041caf0(param_1);
    }
    else {
      iVar2 = 0;
    }
  }
  iVar4 = thunk_FUN_004ad650((int)this);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  FUN_006e6870(*(void **)((int)param_1 + 0x211),iVar4,iVar2);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)((int)param_1 + 0x6f7)) {
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 9:
    puVar5 = (undefined4 *)(((8 - (int)*(short *)((int)param_1 + 0x6c) / 0x2d) * 0xf) % 0x78);
    iVar2 = ((4 - DAT_008073fc) * 0x1e) % 0x78;
    if ((*(byte *)&PTR_00802a38->field_00E4 & 1) == 0) {
      *(int *)((int)param_1 + 0x822) = *(int *)((int)param_1 + 0x822) + 1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)((int)param_1 + 0x822) == 0xf) {
      *(undefined4 *)((int)param_1 + 0x822) = 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_8 = (int)puVar5 + *(int *)((int)param_1 + 0x822) + iVar2;
    local_c = puVar5;
    uVar3 = thunk_FUN_004ac910(this,'\x0e');
    if (local_8 != uVar3) {
      STT3DSprC::SetCurFase(this,'\x0e',local_8);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STT3DSprC::SetCurFase(this,'\f',(int)puVar5 + *(int *)((int)param_1 + 0x822) + iVar2);
      iVar2 = STT3DSprC::ShowCurFase(this,'\x0e');
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      iVar2 = STT3DSprC::ShowCurFase(this,'\f');
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      iVar2 = STT3DSprC::SetCurShad(this,'\x0e',(uint)local_c);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
    goto cf_common_exit_004811C2;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  default:
switchD_004806bc_caseD_a:
    uVar10 = ((0x18 - (int)*(short *)((int)param_1 + 0x6c) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) %
             0x18;
    uVar3 = thunk_FUN_004ac910(this,'\x0e');
    if (uVar10 != uVar3) {
      STT3DSprC::SetCurFase(this,'\x0e',uVar10);
      STT3DSprC::SetCurFase(this,'\f',uVar10);
      iVar2 = STT3DSprC::ShowCurFase(this,'\x0e');
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      iVar2 = STT3DSprC::ShowCurFase(this,'\f');
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = STT3DSprC::SetCurShad
                        (this,'\x0e',(0x18 - (int)*(short *)((int)param_1 + 0x6c) / 0xf) % 0x18);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 0x15:
    puVar5 = (undefined4 *)(((8 - (int)*(short *)((int)param_1 + 0x6c) / 0x2d) * 0x14) % 0xa0);
    iVar4 = ((4 - DAT_008073fc) * 0x28) % 0xa0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = *(int *)((int)param_1 + 0x822) + 1;
    *(int *)((int)param_1 + 0x822) = iVar2;
    if (iVar2 == 0x14) {
      *(undefined4 *)((int)param_1 + 0x822) = 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_8 = (int)puVar5 + *(int *)((int)param_1 + 0x822) + iVar4;
    local_c = puVar5;
    uVar3 = thunk_FUN_004ac910(this,'\x0e');
    if (local_8 != uVar3) {
      STT3DSprC::SetCurFase(this,'\x0e',local_8);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STT3DSprC::SetCurFase(this,'\f',(int)puVar5 + *(int *)((int)param_1 + 0x822) + iVar4);
      iVar2 = STT3DSprC::ShowCurFase(this,'\x0e');
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      iVar2 = STT3DSprC::ShowCurFase(this,'\f');
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = STT3DSprC::SetCurShad(this,'\x0e',*(int *)((int)param_1 + 0x822) + (int)local_c);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
    goto cf_common_exit_004811C2;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 0x16:
  case 0x25:
    if (*(int *)((int)param_1 + 0x732) == 1) {
      iVar4 = thunk_FUN_0041d350(param_1,(uint)DAT_0080874d);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = *(int *)((int)param_1 + 0x74a);
      if (iVar4 == 1) {
        if (iVar2 == -1) {
          *(undefined4 *)((int)param_1 + 0x74a) = 0;
          if (DAT_00811798 != (void *)0x0) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            thunk_FUN_00620e40(DAT_00811798,(int)*(short *)((int)param_1 + 0x47),
                               (int)*(short *)((int)param_1 + 0x49),(uint)DAT_0080874d);
          }
        }
        else if ((iVar2 < 0) || ((int)*(short *)(DAT_00806724 + 0x23) / 2 <= iVar2)) {
          if ((int)*(short *)(DAT_00806724 + 0x23) / 2 < iVar2) {
            *(int *)((int)param_1 + 0x74a) = iVar2 + -1;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)((int)param_1 + 0x74a) == (int)*(short *)(DAT_00806724 + 0x23) / 2 + 1) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)**(undefined4 **)this)();
          }
          sVar13 = *(short *)(DAT_00806724 + 0x23);
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_00480bfa:
          if ((int)sVar13 / 2 < *(int *)((int)param_1 + 0x74a)) goto LAB_00480c6a;
        }
        else {
          *(int *)((int)param_1 + 0x74a) = iVar2 + 1;
        }
      }
      else {
        local_10 = iVar2;
        if (iVar2 == -1) {
          *(undefined4 *)((int)param_1 + 0x74a) = 0;
        }
        else {
          if ((iVar2 < 0) || ((int)*(short *)(DAT_00806724 + 0x23) / 2 <= iVar2)) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            bVar20 = *(byte *)((int)param_1 + 0x24);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_8 = CONCAT31(local_8._1_3_,bVar20);
            if (DAT_00808a8f == '\0') {
              if (DAT_0080874d == bVar20) {
LAB_00480a79:
                iVar4 = 0;
              }
              else {
                uVar3 = (uint)DAT_0080874d;
                bVar1 = g_playerRelationMatrix[uVar3][bVar20];
                if ((bVar1 == 0) && (g_playerRelationMatrix[bVar20][uVar3] == 0)) {
                  iVar4 = -2;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[bVar20][uVar3] == 0)) {
                  iVar4 = -1;
                }
                else if ((bVar1 == 0) && (g_playerRelationMatrix[bVar20][uVar3] == 1)) {
                  iVar4 = 1;
                }
                else {
                  if ((bVar1 != 1) || (g_playerRelationMatrix[bVar20][uVar3] != 1))
                  goto LAB_00480a79;
                  iVar4 = 2;
                }
              }
              bVar11 = iVar4 < 0;
            }
            else {
              bVar11 = (&DAT_008087ea)[(uint)bVar20 * 0x51] !=
                       (&DAT_008087ea)[(uint)DAT_0080874d * 0x51];
            }
            if (bVar11) {
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_00480b80:
              local_c = (undefined4 *)CONCAT31(local_c._1_3_,bVar20);
              if (iVar2 < *(short *)(DAT_00806724 + 0x23) + -1) {
                *(int *)((int)param_1 + 0x74a) = iVar2 + 1;
              }
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(int *)((int)param_1 + 0x74a) == (int)*(short *)(DAT_00806724 + 0x23) / 2 + 1) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                STAllPlayersC::DelObjFromTmps
                          (g_sTAllPlayers_007FA174,DAT_0080874d,*(int *)((int)param_1 + 0x20),bVar20
                           ,CONCAT22((short)((uint)*(int *)((int)param_1 + 0x74a) >> 0x10),
                                     *(undefined2 *)((int)param_1 + 0x32)));
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                STAllPlayersC::DelObjFromSaveTmps
                          (g_sTAllPlayers_007FA174,*(int *)((int)param_1 + 0x20),
                           *(char *)((int)param_1 + 0x24),*(short *)((int)param_1 + 0x32));
                thunk_FUN_004ad5e0((int)this);
              }
            }
            else {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_c = (undefined4 *)CONCAT31(local_c._1_3_,bVar20);
              if (DAT_00808a8f == '\0') {
                if (bVar20 == DAT_0080874d) {
LAB_00480b30:
                  iVar4 = 0;
                }
                else {
                  uVar3 = (uint)DAT_0080874d;
                  bVar1 = g_playerRelationMatrix[bVar20][uVar3];
                  if ((bVar1 == 0) && (g_playerRelationMatrix[uVar3][bVar20] == 0)) {
                    iVar4 = -2;
                  }
                  else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar3][bVar20] == 0)) {
                    iVar4 = -1;
                  }
                  else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar3][bVar20] == 1)) {
                    iVar4 = 1;
                  }
                  else {
                    if ((bVar1 != 1) || (g_playerRelationMatrix[uVar3][bVar20] != 1))
                    goto LAB_00480b30;
                    iVar4 = 2;
                  }
                }
                bVar11 = iVar4 < 0;
              }
              else {
                bVar11 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                         (&DAT_008087ea)[(uint)bVar20 * 0x51];
              }
              if (bVar11) goto LAB_00480b80;
              if ((int)*(short *)(DAT_00806724 + 0x23) / 2 < iVar2) {
                *(int *)((int)param_1 + 0x74a) = iVar2 + -1;
              }
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(int *)((int)param_1 + 0x74a) == (int)*(short *)(DAT_00806724 + 0x23) / 2 + 1) {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                (*(code *)**(undefined4 **)this)();
              }
            }
            sVar13 = *(short *)(DAT_00806724 + 0x23);
            goto LAB_00480bfa;
          }
          *(int *)((int)param_1 + 0x74a) = iVar2 + 1;
        }
      }
    }
    else {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (-1 < *(int *)((int)param_1 + 0x74a)) {
        *(int *)((int)param_1 + 0x74a) = *(int *)((int)param_1 + 0x74a) + -1;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)((int)param_1 + 0x74a) == -1) {
        thunk_FUN_004ace30(this,0,0);
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)((int)param_1 + 0x74a) == (int)*(short *)(DAT_00806724 + 0x23) / 2 + 1) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)**(undefined4 **)this)();
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)((int)param_1 + 0x74a) <= (int)*(short *)(DAT_00806724 + 0x23) / 2)
      goto LAB_00480c7f;
LAB_00480c6a:
      iVar4 = 0;
      iVar2 = thunk_FUN_004ad650((int)this);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      FUN_006e6870(*(void **)((int)param_1 + 0x211),iVar2,iVar4);
    }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_00480c7f:
    if (-1 < *(int *)((int)param_1 + 0x74a)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      thunk_FUN_004ace30(this,*(uint *)(DAT_00806724 + 0x30 + *(int *)((int)param_1 + 0x74a) * 4),
                         (int)*(short *)(DAT_00806724 + 0x2c));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      bVar20 = *(byte *)((int)param_1 + 0x24);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8 = CONCAT31(local_8._1_3_,bVar20);
      if (DAT_00808a8f == '\0') {
        if (DAT_0080874d == bVar20) {
LAB_00480d55:
          iVar2 = 0;
        }
        else {
          uVar3 = (uint)DAT_0080874d;
          bVar1 = g_playerRelationMatrix[uVar3][bVar20];
          if ((bVar1 == 0) && (g_playerRelationMatrix[bVar20][uVar3] == 0)) {
            iVar2 = -2;
          }
          else if ((bVar1 == 1) && (g_playerRelationMatrix[bVar20][uVar3] == 0)) {
            iVar2 = -1;
          }
          else if ((bVar1 == 0) && (g_playerRelationMatrix[bVar20][uVar3] == 1)) {
            iVar2 = 1;
          }
          else {
            if ((bVar1 != 1) || (g_playerRelationMatrix[bVar20][uVar3] != 1)) goto LAB_00480d55;
            iVar2 = 2;
          }
        }
        bVar11 = iVar2 < 0;
      }
      else {
        bVar11 = (&DAT_008087ea)[(uint)bVar20 * 0x51] != (&DAT_008087ea)[(uint)DAT_0080874d * 0x51];
      }
      if (!bVar11) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_10 = CONCAT31(local_10._1_3_,bVar20);
        if (DAT_00808a8f == '\0') {
          if (bVar20 == DAT_0080874d) {
LAB_00480e0f:
            iVar2 = 0;
          }
          else {
            uVar3 = (uint)DAT_0080874d;
            bVar1 = g_playerRelationMatrix[bVar20][uVar3];
            if ((bVar1 == 0) && (g_playerRelationMatrix[uVar3][bVar20] == 0)) {
              iVar2 = -2;
            }
            else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar3][bVar20] == 0)) {
              iVar2 = -1;
            }
            else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar3][bVar20] == 1)) {
              iVar2 = 1;
            }
            else {
              if ((bVar1 != 1) || (g_playerRelationMatrix[uVar3][bVar20] != 1)) goto LAB_00480e0f;
              iVar2 = 2;
            }
          }
          bVar11 = iVar2 < 0;
        }
        else {
          bVar11 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                   (&DAT_008087ea)[(uint)bVar20 * 0x51];
        }
        if (!bVar11) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)((int)param_1 + 0x746) == 1) {
            thunk_FUN_004ace60(this,'\x0e');
            thunk_FUN_004ace60(this,'\r');
            thunk_FUN_004ace60(this,'\f');
            thunk_FUN_004aceb0(this,'\x01');
            thunk_FUN_004aceb0(this,'\x02');
            thunk_FUN_004aceb0(this,'\0');
            thunk_FUN_004aceb0(this,'\x0f');
            thunk_FUN_004aceb0(this,'\v');
            thunk_FUN_004aceb0(this,'\n');
            thunk_FUN_004aceb0(this,'\t');
            thunk_FUN_004aceb0(this,'\b');
            *(undefined4 *)((int)param_1 + 0x746) = 0;
          }
          goto LAB_00480f12;
        }
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_10 = CONCAT31(local_10._1_3_,bVar20);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)((int)param_1 + 0x746) == 0) {
        thunk_FUN_004ace60(this,'\x0e');
        thunk_FUN_004ace60(this,'\r');
        thunk_FUN_004ace60(this,'\f');
        thunk_FUN_004ace60(this,'\x01');
        thunk_FUN_004ace60(this,'\x02');
        thunk_FUN_004ace60(this,'\0');
        thunk_FUN_004ace60(this,'\x0f');
        thunk_FUN_004ace60(this,'\v');
        thunk_FUN_004ace60(this,'\n');
        thunk_FUN_004ace60(this,'\t');
        thunk_FUN_004ace60(this,'\b');
        *(undefined4 *)((int)param_1 + 0x746) = 1;
      }
    }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_00480f12:
    if (*(int *)((int)param_1 + 0x6f7) == 0x16) goto switchD_004806bc_caseD_a;
    break;
  case 0x24:
    break;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)((int)param_1 + 0x76) == 1) ||
     ((*(int *)((int)param_1 + 0x76) == 0 && (*(short *)((int)param_1 + 0x6e) != 0x2f)))) {
    thunk_FUN_00416390(param_1);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar3 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)param_1 + 0x1c) = uVar3;
  iVar2 = (uVar3 >> 0x10) % 7 - 3;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar3 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)param_1 + 0x1c) = uVar3;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar10 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)param_1 + 0x1c) = uVar10;
  local_10 = (uVar10 >> 0x10) % 7 - 3;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((*(char *)((int)param_1 + 0xe3) == '\x01') && (*(short *)((int)param_1 + 0xfa) == 0)) &&
      (*(int *)((int)param_1 + 0xe8) != 1)) &&
     (((*(char *)((int)param_1 + 99) == *(char *)((int)param_1 + 0x61) &&
       (*(int *)((int)param_1 + 0x74a) <= (int)*(short *)(DAT_00806724 + 0x23) / 2)) &&
      (local_8 = 0, *(char *)((int)param_1 + 0x2bf) != '\0')))) {
    local_c = (undefined4 *)((int)param_1 + 0x2b3);
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar5 = (undefined4 *)
               thunk_FUN_0041dc40(local_20,(short)*local_c,*(undefined2 *)(local_c + 1),
                                  *(short *)((int)param_1 + 0x6c));
      uVar7 = *puVar5;
      bVar20 = 0;
      sVar19 = 0;
      iVar4 = -1;
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
        sVar19 = 0;
        bVar20 = 0;
        lVar12 = Library::MSVCRT::__ftol();
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar6 = (int)local_14 + *(short *)((int)param_1 + 0x45) + local_10 + (int)(short)lVar12;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iVar8 = (int)*(short *)((int)param_1 + 0x43) - (int)local_18._2_2_;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar9 = (int)(short)local_18 + iVar2 + *(short *)((int)param_1 + 0x41);
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar6 = (int)local_14 + local_10 + *(short *)((int)param_1 + 0x45);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_18._2_2_ = (short)((uint)uVar7 >> 0x10);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iVar8 = (int)*(short *)((int)param_1 + 0x43) - (int)local_18._2_2_;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_18._0_2_ = (short)uVar7;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar9 = (int)(short)local_18 + iVar2 + *(short *)((int)param_1 + 0x41);
      }
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,1,2,7,iVar9,iVar8 + ((uVar3 >> 0x10) % 7 - 3),iVar6,sVar13,
                 sVar14,sVar15,sVar16,sVar17,sVar18,iVar4,sVar19,bVar20);
      local_c = (undefined4 *)((int)local_c + 6);
      local_8 = local_8 + 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    } while ((int)local_8 < (int)(uint)*(byte *)((int)param_1 + 0x2bf));
  }
cf_common_exit_004811C2:
  uVar7 = thunk_FUN_0041da30(param_1);
  return uVar7;
}

