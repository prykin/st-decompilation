
void __fastcall FUN_00660d40(AnonShape_00660D40_E58DF1E6 *param_1)

{
  uint uVar1;
  AnonShape_00660D40_F4300C26 *pAVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  AnonShape_0068EB30_4F4B480A *pAVar8;
  bool bVar9;
  AnonShape_0068EB30_4F4B480A local_5c;
  AiPlrClassTy *local_10;
  uint local_c;
  AnonShape_00660D40_F4300C26 *local_8;

  if (((param_1->field_0284 != 0) && (param_1->field_020B != 0)) &&
     (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    local_8 = (AnonShape_00660D40_F4300C26 *)param_1;
    local_10 = thunk_FUN_004357f0(param_1->field_0024);
    iVar7 = param_1->field_020B;
    local_c = 0;
    if (0 < *(int *)(iVar7 + 0xc)) {
      bVar9 = *(int *)(iVar7 + 0xc) != 0;
      do {
        if (bVar9) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar7 = *(int *)(iVar7 + 8) * local_c + *(int *)(iVar7 + 0x1c);
        }
        else {
          iVar7 = 0;
        }
        sVar3 = param_1->field_007B;
        iVar6 = 0;
        uVar5 = local_c;
        if ((-(uint)(sVar3 != 1) & 2) != 0xffffffff) {
          do {
            uVar1 = *(uint *)(iVar7 + iVar6 * 4);
            if ((((uVar1 != 0) && (*(int *)(iVar7 + 0x28) == 0)) && (*(int *)(iVar7 + 0x24) == 0))
               && (((uVar1 != 0 && (uVar1 < 0x29)) || (sVar3 == 1)))) {
              pAVar8 = &local_5c;
              for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(undefined4 *)pAVar8 = 0;
                pAVar8 = (AnonShape_0068EB30_4F4B480A *)((int)&pAVar8->field_0003 + 1);
              }
              *(undefined2 *)pAVar8 = 0;
              pAVar2 = local_8;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_5c._0_4_ = *(undefined4 *)(iVar7 + iVar6 * 4);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_5c._8_4_ = 0;
              if (iVar6 == 0) {
                local_5c.field_0006 = *(short *)(iVar7 + 0xc);
              }
              else {
                local_5c.field_0006 = 0;
              }
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_5c._4_2_ = SUB42(uVar5,0);
              if (local_10 != (AiPlrClassTy *)0x0) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_5c._8_4_ = local_10->field_065C;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_10->field_065C = local_5c._8_4_ + 1;
              }
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_5c._12_2_ = local_8->field_007D;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_5c._22_2_ = *(undefined2 *)(iVar7 + 0xe);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_5c._24_2_ = *(undefined2 *)(iVar7 + 0x10);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_5c._26_2_ = *(undefined2 *)(iVar7 + 0x12);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_5c._28_1_ = *(char *)(iVar7 + 0x14);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              if ((((char)local_5c._28_1_ < '\0') || ('\a' < (char)local_5c._28_1_)) &&
                 ((local_5c._28_1_ = local_8->field_0081, (char)local_5c._28_1_ < '\0' ||
                  ('\a' < (char)local_5c._28_1_)))) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_5c._28_1_ = local_8->field_0024;
              }
              Library::MSVCRT::_strncpy(&local_5c.field_0x1d,(char *)(iVar7 + 0x15),0xe);
              if (iVar6 == 0) {
                sVar3 = *(short *)&pAVar2->field_0x7f;
              }
              else {
                sVar3 = 0;
              }
              AiTactClassTy::PrepareToSave(*(AiTactClassTy **)&pAVar2[4].field_0x74,&local_5c,sVar3)
              ;
              uVar5 = local_c;
              param_1 = (AnonShape_00660D40_E58DF1E6 *)local_8;
            }
            sVar3 = param_1->field_007B;
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)((-(uint)(sVar3 != 1) & 2) + 1));
        }
        iVar7 = param_1->field_020B;
        local_c = uVar5 + 1;
        bVar9 = local_c < *(uint *)(iVar7 + 0xc);
      } while ((int)local_c < (int)*(uint *)(iVar7 + 0xc));
    }
  }
  return;
}

