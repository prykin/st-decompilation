#include "../../pseudocode_runtime.h"


/* WARNING: Unable to use type for symbol temp_3ff146b557 */
/* WARNING: Unable to use type for symbol puVar18 */
/* WARNING: Unable to use type for symbol temp_3f248b4d74 */
/* WARNING: Unable to use type for symbol temp_3f135a84f2 */
/* WARNING: Unable to use type for symbol temp_3f38b4ca47 */
/* WARNING: Unable to use type for symbol temp_3fa16318a4 */
/* WARNING: Unable to use type for symbol pAVar16 */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006CEF60 -> 006D8A60 @ 006CF8D7
   [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:9: parameter=/int
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0x2c, direct_reads=1, scalar_operations=2, signed_comparisons=2, unsigned_bounds=8,
   pointer_dereferences=0, slot_reused=true; sites=006D8A7F incoming load: MOV EAX,dword ptr [EBP +
   0x2c] | 006D8A85 scalar operation: ADD EAX,ECX | 006D8A8A scalar operation: DEC EAX | 006D8AEB
   first slot write: MOV dword ptr [EBP + 0x2c],EDX | 006D8C3C derived narrow scalar use: CMP
   AL,byte ptr [EBP + -0x10] | 006D8C3C derived scalar comparison: CMP AL,byte ptr [EBP + -0x10]; JA
   | 006D8E2A derived narrow scalar use: CMP AL,byte ptr [EBP + -0x10] | 006D8E2A derived scalar
   comparison: CMP AL,byte ptr [EBP + -0x10]; JA | 006D93EC derived narrow scalar use: CMP AL,byte
   ptr [EBP + -0x10] | 006D93EC derived scalar comparison: CMP AL,byte ptr [EBP + -0x10]; JA |
   006D95BA derived narrow scalar use: CMP AL,byte ptr [EBP + -0x10] | 006D95BA derived scalar
   comparison: CMP AL,byte ptr [EBP + -0x10]; JA | 006D9E2F derived scalar comparison: CMP ECX,dword
   ptr [EBP + -0x14]; JL | 006D9E97 derived scalar comparison: CMP ECX,dword ptr [EBP + -0x14]; JL
    */

void FUN_006d8a60(AnonShape_006D8A60_D503343B *param_1,int param_2,byte *param_3,int param_4,
                 uint param_5,uint param_6,int param_7,undefined *param_8,uint param_9,int param_10,
                 undefined *param_11,byte *param_12,int param_13,int param_14,uint param_15)

{
  byte *pbVar1;
  undefined1 *puVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  AnonShape_006D8A60_D503343B AVar7;
  AnonShape_006D8A60_D503343B AVar8;
  AnonShape_006D8A60_D503343B AVar9;
  AnonShape_006D8A60_D503343B AVar10;
  AnonShape_006D8A60_D503343B AVar11;
  AnonShape_006D8A60_D503343B AVar12;
  AnonShape_006D8A60_D503343B AVar13;
  char cVar14;
  int iVar15;
  undefined1 uVar16;
  undefined2 uVar17;
  uint uVar18;
  AnonShape_006D8A60_D503343B AVar19;
  AnonShape_006D8A60_D503343B *pAVar20_mg2;
  byte bVar20;
  byte bVar21;
  undefined *puVar22;
  uint uVar23;
  AnonShape_006D8A60_D503343B *pAVar24;
  byte *pbVar25;
  AnonShape_006D8A60_D503343B *pAVar26;
  byte local_14;
  char local_10;
  uint local_8;
  AnonShape_006D8A60_D503343B *temp_3ff146b557;
  AnonShape_006D8A60_D503343B *puVar18;
  AnonShape_006D8A60_D503343B *temp_3f248b4d74;
  AnonShape_006D8A60_D503343B *temp_3f135a84f2;
  AnonShape_006D8A60_D503343B *temp_3f38b4ca47;
  AnonShape_006D8A60_D503343B *temp_3fa16318a4;
  AnonShape_006D8A60_D503343B *pAVar16;
  AnonShape_006D8A60_D503343B *pAVar20_mg0;
  AnonShape_006D8A60_D503343B *pAVar20_mg4;
  AnonShape_006D8A60_D503343B *pAVar20_mg3;

  if (((int)param_6 < 1) || (param_7 < 1)) {
    return;
  }
  iVar6 = param_10 + param_9;
  local_14 = (char)iVar6 - 1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_12 != nullptr) &&
     (param_12 = param_12 + param_13 * param_15 + (param_14 >> 3), param_11 == nullptr)) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_11 = &DAT_007ee300;
  }
  if ((int)param_5 < 1) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = (int)(param_3 + (param_3[0xd] >> 1 & 0xe) + 0x16);
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = (int)FUN_006cfe10(param_3,param_5);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar3 = *(short *)(param_3 + 0x12);
LAB_006d8b04:
  pAVar20_mg0 = param_1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_7 = param_7 + -1;
  local_8 = (uint)*(byte *)param_10;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_10 = param_10 + 1;
  iVar15 = param_4;
  if (local_8 != 0) {
    while( true ) {
      while ((local_8 & 0x80) == 0) {
        uVar23 = local_8 & 0x7f;
        if (iVar15 < (int)uVar23) goto LAB_006d8b50;
        bVar21 = *(byte *)param_10;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
        iVar15 = iVar15 - uVar23;
        local_8 = (uint)bVar21;
      }
      uVar23 = local_8 & 0x3f;
      if (iVar15 < (int)uVar23) break;
      if ((local_8 & 0x40) == 0) {
        pbVar25 = (byte *)((int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0x0 + uVar23);
        local_8 = (uint)*pbVar25;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = (int)(pbVar25 + 1);
        iVar15 = iVar15 - uVar23;
      }
      else {
        local_8 = (uint)((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
        iVar15 = iVar15 - uVar23;
      }
    }
LAB_006d8b50:
    uVar23 = uVar23 - iVar15;
    bVar21 = (byte)local_8;
    if ((bVar21 & 0xc0) == 0x80) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0x0 + iVar15;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_15 = param_6;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_8 == nullptr) {
      if ((int)uVar23 <= (int)param_6) {
        do {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_15 = param_15 - uVar23;
          if ((local_8 & 0x80) == 0) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar23);
          }
          else if (0 < (int)uVar23) {
            do {
              bVar21 = *(byte *)param_10;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_10 = param_10 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_5 = (uint)bVar21;
              if (((int)param_5 < (int)param_9) || (iVar6 <= (int)param_5)) {
                *(byte *)param_1 = bVar21;
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
          if ((int)param_15 < 1) {
            uVar23 = 0;
            break;
          }
          local_8 = (uint)*(byte *)param_10;
          uVar23 = local_8 & 0x7f;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_10 = param_10 + 1;
        } while ((int)uVar23 <= (int)param_15);
      }
      uVar23 = uVar23 - param_15;
      pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
      if ((local_8 & 0x80) == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + param_15);
      }
      else if (0 < (int)param_15) {
        do {
          bVar21 = *(byte *)param_10;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_10 = param_10 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_5 = (uint)bVar21;
          if (((int)param_5 < (int)param_9) || (iVar6 <= (int)param_5)) {
            *(byte *)param_1 = bVar21;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_15 = param_15 - 1;
          pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
        } while (param_15 != 0);
      }
    }
    else {
      local_10 = (char)uVar23;
      if ((param_3[0xd] & 3) == 1) {
        bVar21 = bVar21 & 0xc0;
        if ((local_8 & 0x80) == 0) {
          bVar21 = 0;
        }
        uVar23 = (uint)(byte)(bVar21 + local_10);
        uVar18 = param_6;
        pAVar16 = param_1;
        do {
          if ((uVar23 & 0x80) == 0) {
            if ((int)uVar18 < (int)uVar23) goto cf_common_join_006D8DA5;
            uVar18 = uVar18 - uVar23;
            pAVar26 = (AnonShape_006D8A60_D503343B *)((int)&pAVar16->field_0x0 + uVar23);
          }
          else if ((uVar23 & 0x40) == 0) {
            uVar23 = uVar23 & 0x3f;
            if ((int)uVar18 < (int)uVar23) goto cf_common_join_006D8DA5;
            uVar18 = uVar18 - uVar23;
            bVar21 = *(byte *)param_10;
            if ((bVar21 < (byte)param_9) || (local_14 < bVar21)) {
              if (3 < uVar23) {
                if (((uint)pAVar16 & 1) != 0) {
                  uVar23 = uVar23 - 1;
                  *(byte *)pAVar16 = *(byte *)param_10;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
                  pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0001;
                }
                if (((uint)pAVar16 & 2) != 0) {
                  bVar21 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
                  uVar23 = uVar23 - 2;
                  pAVar16->field_0x0 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0x0;
                  pAVar16->field_0001 = bVar21;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
                  pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0002;
                }
                while (3 < (int)uVar23) {
                  AVar19 = *(AnonShape_006D8A60_D503343B *)param_10;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_10 = param_10 + 4;
                  *pAVar16 = AVar19;
                  pAVar16 = pAVar16 + 1;
                  uVar23 = uVar23 - 4;
                }
                pAVar26 = pAVar16;
                if (uVar23 == 0) goto LAB_006d8d94;
              }
              if ((char)uVar23 != '\x01') {
                if ((char)uVar23 != '\x02') {
                  pAVar16->field_0002 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
                }
                pAVar16->field_0001 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
              }
              bVar21 = *(byte *)param_10;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0x0 + uVar23;
              *(byte *)pAVar16 = bVar21;
              pAVar26 = (AnonShape_006D8A60_D503343B *)((int)&pAVar16->field_0x0 + uVar23);
            }
            else {
              AVar19 = *(AnonShape_006D8A60_D503343B *)((uint)pAVar16 & 0xfffffffc);
              if (((uint)pAVar16 & 3) == 0) {
LAB_006d8cab:
                bVar21 = (byte)uVar23;
                while ('\x03' < (char)bVar21) {
                  bVar20 = *(byte *)param_10;
                  pbVar25 = &((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
                  pbVar1 = &((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
                  puVar2 = &((AnonShape_006D8A60_D503343B *)param_10)->field_0x3;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_10 = param_10 + 4;
                  *pAVar16 = (AnonShape_006D8A60_D503343B)
                             /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                             (CONCAT22(CONCAT11(param_8[(uint)CONCAT11(*pbVar25,AVar19.field_0001) +
                                                        param_9 * -0x100],
                                                param_8[(uint)CONCAT11(bVar20,STPiece<0,1>(AVar19)) +
                                                        param_9 * -0x100]),
                                       CONCAT11(param_8[(uint)CONCAT11(*puVar2,STPiece<3,1>(AVar19)) +
                                                        param_9 * -0x100],
                                                param_8[(uint)CONCAT11(*pbVar1,AVar19.field_0002) +
                                                        param_9 * -0x100])) << 0x10 |
                             (uint)CONCAT11(param_8[(uint)CONCAT11(*pbVar25,AVar19.field_0001) +
                                                    param_9 * -0x100],
                                            param_8[(uint)CONCAT11(bVar20,STPiece<0,1>(AVar19)) +
                                                    param_9 * -0x100]));
                  AVar19 = pAVar16[1];
                  pAVar16 = pAVar16 + 1;
                  bVar21 = bVar21 - 4;
                }
                uVar23 = (uint)bVar21;
                pAVar24 = (AnonShape_006D8A60_D503343B *)param_10;
                pAVar26 = pAVar16;
                if (bVar21 == 0) goto LAB_006d8d94;
              }
              else {
                AVar19 = (AnonShape_006D8A60_D503343B)((uint)AVar19 >> (((byte)pAVar16 & 3) << 3));
                pAVar24 = (AnonShape_006D8A60_D503343B *)param_10;
                if (3 < uVar23) {
                  if (((uint)pAVar16 & 1) != 0) {
                    uVar23 = (uint)(byte)((char)uVar23 - 1);
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
                    *(undefined *)pAVar16 =
                         /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                         param_8[(uint)CONCAT11(bVar21,STPiece<0,1>(AVar19)) + param_9 * -0x100];
                    AVar19 = (AnonShape_006D8A60_D503343B)((uint)AVar19 >> 8);
                    pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0001;
                  }
                  if (((uint)pAVar16 & 2) != 0) {
                    bVar21 = *(byte *)param_10;
                    pbVar25 = &((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
                    uVar23 = (uint)(byte)((char)uVar23 - 2);
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
                    *(ushort *)pAVar16 =
                         /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                         CONCAT11(param_8[(uint)CONCAT11(*pbVar25,AVar19.field_0001) +
                                          param_9 * -0x100],
                                  param_8[(uint)CONCAT11(bVar21,STPiece<0,1>(AVar19)) + param_9 * -0x100]);
                    pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0002;
                  }
                  AVar19 = *pAVar16;
                  goto LAB_006d8cab;
                }
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_10 = (int)&pAVar24->field_0001;
              pAVar26 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0001;
              *(undefined *)pAVar16 =
                   /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                   param_8[(uint)CONCAT11(*(byte *)pAVar24,STPiece<0,1>(AVar19)) + param_9 * -0x100];
              uVar17 = STPiece<1,2>(AVar19);
              if (uVar23 != 1) {
                if (((uint)pAVar26 & 3) == 0) {
                  uVar17 = SUB42(*pAVar26,0);
                }
                bVar21 = *(byte *)param_10;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = (int)&pAVar24->field_0002;
                pbVar25 = &pAVar16->field_0002;
                *(undefined *)pAVar26 =
                     /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                     param_8[(uint)CONCAT11(bVar21,(char)uVar17) + param_9 * -0x100];
                uVar16 = (undefined1)((ushort)uVar17 >> 8);
                pAVar26 = (AnonShape_006D8A60_D503343B *)pbVar25;
                if (uVar23 != 2) {
                  if (((uint)pbVar25 & 3) == 0) {
                    uVar16 = (undefined1)*(undefined4 *)pbVar25;
                  }
                  bVar21 = *(byte *)param_10;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_10 = (int)&pAVar24->field_0x3;
                  pAVar26 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0x3;
                  *pbVar25 = param_8[(uint)CONCAT11(bVar21,uVar16) + param_9 * -0x100];
                }
              }
            }
          }
          else {
            bVar21 = *(byte *)param_10;
            uVar23 = uVar23 & 0xffffff3f;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            STPiece<0,2>(AVar19) = CONCAT11(bVar21,bVar21);
            STPiece<2,2>(AVar19) = 0;
            if ((int)uVar18 < (int)uVar23) goto cf_common_join_006D8DA5;
            uVar18 = uVar18 - uVar23;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
            if (3 < uVar23) {
              if (((uint)pAVar16 & 1) != 0) {
                *(byte *)pAVar16 = bVar21;
                pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0001;
                uVar23 = uVar23 - 1;
              }
              if (((uint)pAVar16 & 2) != 0) {
                *(ushort *)pAVar16 = STPiece<0,2>(AVar19);
                pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0002;
                uVar23 = uVar23 - 2;
              }
              STPiece<2,2>(AVar19) = STPiece<0,2>(AVar19);
              while (3 < (int)uVar23) {
                *pAVar16 = AVar19;
                pAVar16 = pAVar16 + 1;
                uVar23 = uVar23 - 4;
              }
              pAVar26 = pAVar16;
              if (uVar23 == 0) goto LAB_006d8d94;
            }
            bVar21 = STPiece<0,1>(AVar19);
            if ((char)uVar23 != '\x01') {
              if ((char)uVar23 != '\x02') {
                pAVar16->field_0002 = bVar21;
              }
              pAVar16->field_0001 = bVar21;
            }
            *(byte *)pAVar16 = bVar21;
            pAVar26 = (AnonShape_006D8A60_D503343B *)((int)&pAVar16->field_0x0 + uVar23);
          }
LAB_006d8d94:
          uVar23 = 0;
          pAVar16 = pAVar26;
          if ((int)uVar18 < 1) goto cf_common_join_006D8DA5;
          uVar23 = (uint)*(byte *)param_10;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
          local_8 = uVar23;
        } while( true );
      }
      if ((param_3[0xd] & 3) == 2) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if (param_12 == nullptr) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          if (param_11 == nullptr) {
            bVar21 = bVar21 & 0xc0;
            if ((local_8 & 0x80) == 0) {
              bVar21 = 0;
            }
            uVar23 = (uint)(byte)(bVar21 + local_10);
            uVar18 = param_6;
            do {
              if ((uVar23 & 0x80) == 0) {
                if ((int)uVar18 < (int)uVar23) goto cf_common_join_006D958E;
                uVar18 = uVar18 - uVar23;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar23);
              }
              else if ((uVar23 & 0x40) == 0) {
                uVar23 = uVar23 & 0x3f;
                if ((int)uVar18 < (int)uVar23) goto cf_common_join_006D958E;
                uVar18 = uVar18 - uVar23;
                if (3 < uVar23) {
                  if (((uint)param_1 & 1) != 0) {
                    uVar23 = uVar23 - 1;
                    *(byte *)param_1 = *(byte *)param_10;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                  }
                  if (((uint)param_1 & 2) != 0) {
                    bVar21 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
                    uVar23 = uVar23 - 2;
                    param_1->field_0x0 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0x0;
                    param_1->field_0001 = bVar21;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0002;
                  }
                  while (3 < (int)uVar23) {
                    AVar19 = *(AnonShape_006D8A60_D503343B *)param_10;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_10 = param_10 + 4;
                    *param_1 = AVar19;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = param_1 + 1;
                    uVar23 = uVar23 - 4;
                  }
                  if (uVar23 == 0) goto LAB_006d957d;
                }
                if ((char)uVar23 != '\x01') {
                  if ((char)uVar23 != '\x02') {
                    param_1->field_0002 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
                  }
                  param_1->field_0001 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
                }
                bVar21 = *(byte *)param_10;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0x0 + uVar23;
                *(byte *)param_1 = bVar21;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar23);
              }
              else {
                bVar21 = *(byte *)param_10;
                uVar23 = uVar23 & 0xffffff3f;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                STPiece<0,2>(AVar8) = CONCAT11(bVar21,bVar21);
                STPiece<2,2>(AVar8) = 0;
                if ((int)uVar18 < (int)uVar23) goto cf_common_join_006D958E;
                uVar18 = uVar18 - uVar23;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
                if ((bVar21 < (byte)param_9) || (local_14 < bVar21)) {
                  if (3 < uVar23) {
                    if (((uint)param_1 & 1) != 0) {
                      *(byte *)param_1 = bVar21;
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                      uVar23 = uVar23 - 1;
                    }
                    if (((uint)param_1 & 2) != 0) {
                      *(ushort *)param_1 = STPiece<0,2>(AVar8);
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0002;
                      uVar23 = uVar23 - 2;
                    }
                    STPiece<2,2>(AVar8) = STPiece<0,2>(AVar8);
                    while (3 < (int)uVar23) {
                      *param_1 = AVar8;
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = param_1 + 1;
                      uVar23 = uVar23 - 4;
                    }
                    if (uVar23 == 0) goto LAB_006d957d;
                  }
                  bVar21 = STPiece<0,1>(AVar8);
                  if ((char)uVar23 != '\x01') {
                    if ((char)uVar23 != '\x02') {
                      param_1->field_0002 = bVar21;
                    }
                    param_1->field_0001 = bVar21;
                  }
                  *(byte *)param_1 = bVar21;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar23);
                }
                else {
                  AVar19 = *(AnonShape_006D8A60_D503343B *)((uint)param_1 & 0xfffffffc);
                  if (((uint)param_1 & 3) == 0) {
LAB_006d9450:
                    bVar21 = (byte)uVar23;
                    while ('\x03' < (char)bVar21) {
                      *param_1 = (AnonShape_006D8A60_D503343B)
                                 /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                 (CONCAT22(CONCAT11(param_8[(uint)AVar19 >> 8 & 0xff],
                                                    param_8[(uint)AVar19 & 0xff]),
                                           CONCAT11(param_8[(uint)AVar19 >> 0x18],
                                                    param_8[(uint)AVar19 >> 0x10 & 0xff])) << 0x10 |
                                 (uint)CONCAT11(param_8[(uint)AVar19 >> 8 & 0xff],
                                                param_8[(uint)AVar19 & 0xff]));
                      AVar19 = param_1[1];
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = param_1 + 1;
                      bVar21 = bVar21 - 4;
                    }
                    uVar23 = (uint)bVar21;
                    if (bVar21 == 0) goto LAB_006d957d;
                  }
                  else {
                    AVar19 = (AnonShape_006D8A60_D503343B)
                             ((uint)AVar19 >> (((byte)param_1 & 3) << 3));
                    if (3 < uVar23) {
                      if (((uint)param_1 & 1) != 0) {
                        uVar23 = (uint)(byte)((char)uVar23 - 1);
                        *(undefined *)param_1 = param_8[(uint)AVar19 & 0xff];
                        AVar19 = (AnonShape_006D8A60_D503343B)((uint)AVar19 >> 8);
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                      }
                      if (((uint)param_1 & 2) != 0) {
                        uVar23 = (uint)(byte)((char)uVar23 - 2);
                        *(ushort *)param_1 =
                             /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                             CONCAT11(param_8[(uint)AVar19 >> 8 & 0xff],param_8[(uint)AVar19 & 0xff]
                                     );
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0002;
                      }
                      AVar19 = *param_1;
                      goto LAB_006d9450;
                    }
                  }
                  if ((char)uVar23 != '\x01') {
                    if ((char)uVar23 != '\x02') {
                      uVar4 = (uint)AVar19 >> 0x10;
                      AVar19 = (AnonShape_006D8A60_D503343B)((uint)AVar19 & 0xffff);
                      param_1->field_0002 = param_8[uVar4 & 0xff];
                    }
                    param_1->field_0001 = param_8[(uint)AVar19 >> 8 & 0xff];
                  }
                  *(undefined *)param_1 = param_8[(uint)AVar19 & 0xff];
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar23);
                }
              }
LAB_006d957d:
              uVar23 = 0;
              if ((int)uVar18 < 1) goto cf_common_join_006D958E;
              uVar23 = (uint)*(byte *)param_10;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
              local_8 = uVar23;
            } while( true );
          }
          if ((int)uVar23 <= (int)param_6) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_15 = param_15 - uVar23;
              if ((local_8 & 0x80) == 0) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar23);
              }
              else if ((local_8 & 0x40) == 0) {
                if (0 < (int)uVar23) {
                  do {
                    pbVar25 = &param_1->field_0001;
                    bVar21 = *(byte *)param_10;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_10 = param_10 + 1;
                    uVar23 = uVar23 - 1;
                    *(undefined *)param_1 = param_11[bVar21];
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (AnonShape_006D8A60_D503343B *)pbVar25;
                  } while (uVar23 != 0);
                }
              }
              else {
                bVar21 = *(byte *)param_10;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = param_10 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)bVar21;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  if (0 < (int)uVar23) {
                    do {
                      pbVar25 = &param_1->field_0001;
                      uVar23 = uVar23 - 1;
                      *(undefined *)param_1 = param_8[*(byte *)param_1];
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = (AnonShape_006D8A60_D503343B *)pbVar25;
                    } while (uVar23 != 0);
                  }
                }
                else if (0 < (int)uVar23) {
                  do {
                    *(undefined *)param_1 = param_11[param_5];
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                    uVar23 = uVar23 - 1;
                  } while (uVar23 != 0);
                }
              }
              if ((int)param_15 < 1) {
                uVar23 = 0;
                break;
              }
              bVar21 = *(byte *)param_10;
              local_8 = (uint)bVar21;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_10 = param_10 + 1;
              if ((bVar21 & 0x80) == 0) {
                uVar23 = local_8 & 0x7f;
              }
              else {
                uVar23 = local_8 & 0x3f;
              }
            } while ((int)uVar23 <= (int)param_15);
          }
          uVar23 = uVar23 - param_15;
          if ((local_8 & 0x80) == 0) goto LAB_006d9c24;
          pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
          if ((local_8 & 0x40) == 0) {
            pAVar20_mg3 = param_1;
            if (0 < (int)param_15) {
              do {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg3->field_0001;
                *(undefined *)pAVar20_mg3 = param_11[*(byte *)param_10];
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = param_10 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                pAVar20_mg3 = param_1;
                pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
              } while (param_15 != 0);
            }
          }
          else if (0 < (int)param_15) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_5 = (uint)*(byte *)param_10;
            pAVar20_mg4 = param_1;
            pAVar26 = (AnonShape_006D8A60_D503343B *)(param_10 + 1);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_5 == param_9) {
              do {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg4->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                *(undefined *)pAVar20_mg4 = param_8[*(byte *)pAVar20_mg4];
                pAVar20_mg4 = param_1;
              } while (param_15 != 0);
            }
            else {
              do {
                *(undefined *)param_1 = param_11[param_5];
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
              } while (param_15 != 0);
            }
          }
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (AnonShape_006D8A60_D503343B *)param_12;
          uVar18 = 0x80 >> ((byte)param_14 & 7);
          if ((int)uVar23 <= (int)param_6) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_15 = param_15 - uVar23;
              if ((local_8 & 0x80) == 0) {
                pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)(&pAVar20_mg0->field_0x0 + uVar23);
                uVar18 = ((uVar18 & 0xff) << 8) >> ((byte)uVar23 & 7);
                if (uVar18 < 0x81) {
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                }
                else {
                  uVar18 = uVar18 >> 8 & 0xff;
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + ((int)uVar23 >> 3));
              }
              else if ((local_8 & 0x40) == 0) {
                if (-1 < (int)(uVar23 - 1)) {
                  do {
                    if ((*(byte *)param_1 & (byte)uVar18) != 0) {
                      *(undefined *)pAVar20_mg0 = param_11[*(byte *)param_10];
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_10 = param_10 + 1;
                    }
                    pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg0->field_0001;
                    bVar21 = (byte)uVar18 >> 1;
                    if (bVar21 == 0) {
                      bVar21 = 0x80;
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                    }
                    uVar18 = (uint)bVar21;
                    uVar23 = uVar23 - 1;
                  } while (uVar23 != 0);
                }
              }
              else {
                iVar15 = param_10 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)*(byte *)param_10;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = iVar15;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  uVar18 = ((uVar18 & 0xff) << 8) >> ((byte)uVar23 & 7);
                  if (uVar18 < 0x81) {
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                  }
                  else {
                    uVar18 = uVar18 >> 8 & 0xff;
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)
                            (&param_1->field_0x0 + ((int)uVar23 >> 3));
                  pAVar26 = pAVar20_mg0;
                  if (-1 < (int)(uVar23 - 1)) {
                    do {
                      pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)&pAVar26->field_0001;
                      uVar23 = uVar23 - 1;
                      *(undefined *)pAVar26 = param_8[*(byte *)pAVar26];
                      pAVar26 = pAVar20_mg0;
                    } while (uVar23 != 0);
                  }
                }
                else {
                  bVar21 = param_11[param_5];
                  if (-1 < (int)(uVar23 - 1)) {
                    do {
                      if ((*(byte *)param_1 & (byte)uVar18) != 0) {
                        *(byte *)pAVar20_mg0 = bVar21;
                      }
                      pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg0->field_0001;
                      bVar20 = (byte)uVar18 >> 1;
                      if (bVar20 == 0) {
                        bVar20 = 0x80;
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                      }
                      uVar18 = (uint)bVar20;
                      uVar23 = uVar23 - 1;
                    } while (uVar23 != 0);
                  }
                }
              }
              if ((int)param_15 < 1) {
                uVar23 = 0;
                break;
              }
              bVar21 = *(byte *)param_10;
              local_8 = (uint)bVar21;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_10 = param_10 + 1;
              if ((bVar21 & 0x80) == 0) {
                uVar23 = local_8 & 0x7f;
              }
              else {
                uVar23 = local_8 & 0x3f;
              }
            } while ((int)uVar23 <= (int)param_15);
          }
          uVar23 = uVar23 - param_15;
          if ((local_8 & 0x80) == 0) {
LAB_006d9a18:
            pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)(&pAVar20_mg0->field_0x0 + param_15);
          }
          else if ((local_8 & 0x40) == 0) {
            if (-1 < (int)(param_15 - 1)) {
              do {
                if ((*(byte *)param_1 & (byte)uVar18) != 0) {
                  *(undefined *)pAVar20_mg0 = param_11[*(byte *)param_10];
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_10 = param_10 + 1;
                }
                pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg0->field_0001;
                bVar21 = (byte)uVar18 >> 1;
                uVar18 = (uint)bVar21;
                if (bVar21 == 0) {
                  uVar18 = 0x80;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
              } while (param_15 != 0);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_12 = param_12 + param_13;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = pAVar20_mg0;
              pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
              goto cf_common_join_006D9EAC;
            }
          }
          else if (0 < (int)param_15) {
            pAVar26 = (AnonShape_006D8A60_D503343B *)(param_10 + 1);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_5 = (uint)*(byte *)param_10;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_10 = (int)pAVar26;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_5 == param_9) {
              if ((int)(param_15 - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg0->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                *(undefined *)pAVar20_mg0 = param_8[*(byte *)pAVar20_mg0];
                pAVar20_mg0 = param_1;
              } while (param_15 != 0);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_12 = param_12 + param_13;
            }
            else {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_5 = (uint)(byte)param_11[param_5];
              if ((int)(param_15 - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                if ((*(byte *)param_1 & (byte)uVar18) != 0) {
                  *(undefined *)pAVar20_mg0 = param_11[param_5];
                }
                pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg0->field_0001;
                bVar21 = (byte)uVar18 >> 1;
                uVar18 = (uint)bVar21;
                if (bVar21 == 0) {
                  uVar18 = 0x80;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
              } while (param_15 != 0);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_12 = param_12 + param_13;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = pAVar20_mg0;
            }
            goto cf_common_join_006D9EAC;
          }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
cf_common_join_006D9A1A:
          param_12 = param_12 + param_13;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = pAVar20_mg0;
          pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
        }
      }
      else {
        if (param_12 != nullptr) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (AnonShape_006D8A60_D503343B *)param_12;
          uVar18 = 0x80 >> ((byte)param_14 & 7);
          if ((int)uVar23 <= (int)param_6) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_15 = param_15 - uVar23;
              if ((local_8 & 0x80) == 0) {
                pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)(&pAVar20_mg0->field_0x0 + uVar23);
                uVar18 = ((uVar18 & 0xff) << 8) >> ((byte)uVar23 & 7);
                if (uVar18 < 0x81) {
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                }
                else {
                  uVar18 = uVar18 >> 8 & 0xff;
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + ((int)uVar23 >> 3));
              }
              else if ((local_8 & 0x40) == 0) {
                if (-1 < (int)(uVar23 - 1)) {
                  do {
                    iVar15 = param_10 + 1;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_5 = (uint)*(byte *)param_10;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    if (param_5 == param_9) {
                      bVar21 = param_8[*(byte *)pAVar20_mg0];
LAB_006d9875:
                      *(byte *)pAVar20_mg0 = bVar21;
                    }
                    else if ((*(byte *)param_1 & (byte)uVar18) != 0) {
                      bVar21 = param_11[param_5];
                      goto LAB_006d9875;
                    }
                    pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg0->field_0001;
                    bVar21 = (byte)uVar18 >> 1;
                    if (bVar21 == 0) {
                      bVar21 = 0x80;
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                    }
                    uVar18 = (uint)bVar21;
                    uVar23 = uVar23 - 1;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_10 = iVar15;
                  } while (uVar23 != 0);
                }
              }
              else {
                iVar15 = param_10 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)*(byte *)param_10;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = iVar15;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  uVar18 = ((uVar18 & 0xff) << 8) >> ((byte)uVar23 & 7);
                  if (uVar18 < 0x81) {
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                  }
                  else {
                    uVar18 = uVar18 >> 8 & 0xff;
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)
                            (&param_1->field_0x0 + ((int)uVar23 >> 3));
                  pAVar26 = pAVar20_mg0;
                  if (-1 < (int)(uVar23 - 1)) {
                    do {
                      pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)&pAVar26->field_0001;
                      uVar23 = uVar23 - 1;
                      *(undefined *)pAVar26 = param_8[*(byte *)pAVar26];
                      pAVar26 = pAVar20_mg0;
                    } while (uVar23 != 0);
                  }
                }
                else {
                  bVar21 = param_11[param_5];
                  if (-1 < (int)(uVar23 - 1)) {
                    do {
                      if ((*(byte *)param_1 & (byte)uVar18) != 0) {
                        *(byte *)pAVar20_mg0 = bVar21;
                      }
                      pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg0->field_0001;
                      bVar20 = (byte)uVar18 >> 1;
                      if (bVar20 == 0) {
                        bVar20 = 0x80;
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                      }
                      uVar18 = (uint)bVar20;
                      uVar23 = uVar23 - 1;
                    } while (uVar23 != 0);
                  }
                }
              }
              if ((int)param_15 < 1) {
                uVar23 = 0;
                break;
              }
              bVar21 = *(byte *)param_10;
              local_8 = (uint)bVar21;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_10 = param_10 + 1;
              if ((bVar21 & 0x80) == 0) {
                uVar23 = local_8 & 0x7f;
              }
              else {
                uVar23 = local_8 & 0x3f;
              }
            } while ((int)uVar23 <= (int)param_15);
          }
          uVar23 = uVar23 - param_15;
          if ((local_8 & 0x80) == 0) goto LAB_006d9a18;
          if ((local_8 & 0x40) == 0) {
            if (-1 < (int)(param_15 - 1)) {
              do {
                pAVar26 = (AnonShape_006D8A60_D503343B *)(param_10 + 1);
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)*(byte *)param_10;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  bVar21 = param_8[*(byte *)pAVar20_mg0];
LAB_006d99e9:
                  *(byte *)pAVar20_mg0 = bVar21;
                }
                else if ((*(byte *)param_1 & (byte)uVar18) != 0) {
                  bVar21 = param_11[param_5];
                  goto LAB_006d99e9;
                }
                pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg0->field_0001;
                bVar21 = (byte)uVar18 >> 1;
                uVar18 = (uint)bVar21;
                if (bVar21 == 0) {
                  uVar18 = 0x80;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = (int)pAVar26;
              } while (param_15 != 0);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_12 = param_12 + param_13;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = pAVar20_mg0;
              goto cf_common_join_006D9EAC;
            }
          }
          else if (0 < (int)param_15) {
            pAVar26 = (AnonShape_006D8A60_D503343B *)(param_10 + 1);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_5 = (uint)*(byte *)param_10;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_10 = (int)pAVar26;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_5 == param_9) {
              if ((int)(param_15 - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg0->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                *(undefined *)pAVar20_mg0 = param_8[*(byte *)pAVar20_mg0];
                pAVar20_mg0 = param_1;
              } while (param_15 != 0);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_12 = param_12 + param_13;
            }
            else {
              bVar21 = param_11[param_5];
              if ((int)(param_15 - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                if ((*(byte *)param_1 & (byte)uVar18) != 0) {
                  *(byte *)pAVar20_mg0 = bVar21;
                }
                pAVar20_mg0 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg0->field_0001;
                bVar20 = (byte)uVar18 >> 1;
                uVar18 = (uint)bVar20;
                if (bVar20 == 0) {
                  uVar18 = 0x80;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
              } while (param_15 != 0);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_12 = param_12 + param_13;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = pAVar20_mg0;
            }
            goto cf_common_join_006D9EAC;
          }
          goto cf_common_join_006D9A1A;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if (param_11 == nullptr) {
          if ((int)uVar23 <= (int)param_6) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_15 = param_15 - uVar23;
              if ((local_8 & 0x80) == 0) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar23);
              }
              else if ((local_8 & 0x40) == 0) {
                if (0 < (int)uVar23) {
                  do {
                    bVar21 = *(byte *)param_10;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_10 = param_10 + 1;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_5 = (uint)bVar21;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    if (param_5 == param_9) {
                      bVar21 = param_8[*(byte *)param_1];
                    }
                    *(byte *)param_1 = bVar21;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                    uVar23 = uVar23 - 1;
                  } while (uVar23 != 0);
                }
              }
              else {
                bVar21 = *(byte *)param_10;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = param_10 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)bVar21;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  pAVar20_mg2 = param_1;
                  if (0 < (int)uVar23) {
                    do {
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = (AnonShape_006D8A60_D503343B *)&pAVar20_mg2->field_0001;
                      uVar23 = uVar23 - 1;
                      *(undefined *)pAVar20_mg2 = param_8[*(byte *)pAVar20_mg2];
                      pAVar20_mg2 = param_1;
                    } while (uVar23 != 0);
                  }
                }
                else if (0 < (int)uVar23) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  STPiece<2,2>(AVar12) = CONCAT11(bVar21,bVar21);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  STPiece<0,2>(AVar12) = CONCAT11(bVar21,bVar21);
                  puVar18 = param_1;
                  for (uVar18 = uVar23 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                    *puVar18 = AVar12;
                    puVar18 = puVar18 + 1;
                  }
                  for (uVar18 = uVar23 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                    *(byte *)puVar18 = bVar21;
                    puVar18 = (AnonShape_006D8A60_D503343B *)&puVar18->field_0001;
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar23);
                }
              }
              if ((int)param_15 < 1) {
                uVar23 = 0;
                break;
              }
              bVar21 = *(byte *)param_10;
              local_8 = (uint)bVar21;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_10 = param_10 + 1;
              if ((bVar21 & 0x80) == 0) {
                uVar23 = local_8 & 0x7f;
              }
              else {
                uVar23 = local_8 & 0x3f;
              }
            } while ((int)uVar23 <= (int)param_15);
          }
          uVar23 = uVar23 - param_15;
          if ((local_8 & 0x80) == 0) goto LAB_006d9c24;
          pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
          if ((local_8 & 0x40) == 0) {
            if (0 < (int)param_15) {
              do {
                bVar21 = *(byte *)param_10;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = param_10 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)bVar21;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  bVar21 = param_8[*(byte *)param_1];
                }
                *(byte *)param_1 = bVar21;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
              } while (param_15 != 0);
            }
          }
          else if (0 < (int)param_15) {
            bVar21 = *(byte *)param_10;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_5 = (uint)bVar21;
            temp_3ff146b557 = param_1;
            pAVar26 = (AnonShape_006D8A60_D503343B *)(param_10 + 1);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_5 == param_9) {
              do {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)&temp_3ff146b557->field_0001;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_15 = param_15 - 1;
                *(undefined *)temp_3ff146b557 = param_8[*(byte *)temp_3ff146b557];
                temp_3ff146b557 = param_1;
              } while (param_15 != 0);
            }
            else {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              STPiece<2,2>(AVar13) = CONCAT11(bVar21,bVar21);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              STPiece<0,2>(AVar13) = CONCAT11(bVar21,bVar21);
              temp_3f135a84f2 = param_1;
              for (uVar18 = param_15 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *temp_3f135a84f2 = AVar13;
                temp_3f135a84f2 = temp_3f135a84f2 + 1;
              }
              for (uVar18 = param_15 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(byte *)temp_3f135a84f2 = bVar21;
                temp_3f135a84f2 = (AnonShape_006D8A60_D503343B *)&temp_3f135a84f2->field_0001;
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + param_15);
            }
          }
        }
        else {
          if ((int)uVar23 <= (int)param_6) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_15 = param_15 - uVar23;
              if ((local_8 & 0x80) == 0) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar23);
              }
              else if ((local_8 & 0x40) == 0) {
                if (0 < (int)uVar23) {
                  do {
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_5 = (uint)*(byte *)param_10;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_10 = param_10 + 1;
                    puVar22 = param_11;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    if (param_5 == param_9) {
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_5 = (uint)*(byte *)param_1;
                      puVar22 = param_8;
                    }
                    *(undefined *)param_1 = puVar22[param_5];
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                    uVar23 = uVar23 - 1;
                  } while (uVar23 != 0);
                }
              }
              else {
                bVar21 = *(byte *)param_10;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_10 = param_10 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_5 = (uint)bVar21;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_5 == param_9) {
                  if (0 < (int)uVar23) {
                    do {
                      pbVar25 = &param_1->field_0001;
                      uVar23 = uVar23 - 1;
                      *(undefined *)param_1 = param_8[*(byte *)param_1];
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = (AnonShape_006D8A60_D503343B *)pbVar25;
                    } while (uVar23 != 0);
                  }
                }
                else {
                  bVar21 = param_11[param_5];
                  if (0 < (int)uVar23) {
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    STPiece<2,2>(AVar10) = CONCAT11(bVar21,bVar21);
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    STPiece<0,2>(AVar10) = CONCAT11(bVar21,bVar21);
                    temp_3f248b4d74 = param_1;
                    for (uVar18 = uVar23 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                      *temp_3f248b4d74 = AVar10;
                      temp_3f248b4d74 = temp_3f248b4d74 + 1;
                    }
                    for (uVar18 = uVar23 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                      *(byte *)temp_3f248b4d74 = bVar21;
                      temp_3f248b4d74 = (AnonShape_006D8A60_D503343B *)&temp_3f248b4d74->field_0001;
                    }
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar23);
                  }
                }
              }
              if ((int)param_15 < 1) {
                uVar23 = 0;
                break;
              }
              bVar21 = *(byte *)param_10;
              local_8 = (uint)bVar21;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_10 = param_10 + 1;
              if ((bVar21 & 0x80) == 0) {
                uVar23 = local_8 & 0x7f;
              }
              else {
                uVar23 = local_8 & 0x3f;
              }
            } while ((int)uVar23 <= (int)param_15);
          }
          uVar23 = uVar23 - param_15;
          if ((local_8 & 0x80) == 0) {
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_006d9c24:
            param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + param_15);
            pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
          }
          else {
            pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
            if ((local_8 & 0x40) == 0) {
              if (0 < (int)param_15) {
                do {
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_5 = (uint)*(byte *)param_10;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_10 = param_10 + 1;
                  puVar22 = param_11;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  if (param_5 == param_9) {
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_5 = (uint)*(byte *)param_1;
                    puVar22 = param_8;
                  }
                  *(undefined *)param_1 = puVar22[param_5];
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_15 = param_15 - 1;
                  pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
                } while (param_15 != 0);
              }
            }
            else if (0 < (int)param_15) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_5 = (uint)*(byte *)param_10;
              temp_3fa16318a4 = param_1;
              pAVar26 = (AnonShape_006D8A60_D503343B *)(param_10 + 1);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              if (param_5 == param_9) {
                do {
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = (AnonShape_006D8A60_D503343B *)&temp_3fa16318a4->field_0001;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_15 = param_15 - 1;
                  *(undefined *)temp_3fa16318a4 = param_8[*(byte *)temp_3fa16318a4];
                  temp_3fa16318a4 = param_1;
                } while (param_15 != 0);
              }
              else {
                uVar16 = param_11[param_5];
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                STPiece<2,2>(AVar11) = CONCAT11(uVar16,uVar16);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                STPiece<0,2>(AVar11) = CONCAT11(uVar16,uVar16);
                temp_3f38b4ca47 = param_1;
                for (uVar18 = param_15 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *temp_3f38b4ca47 = AVar11;
                  temp_3f38b4ca47 = temp_3f38b4ca47 + 1;
                }
                for (uVar18 = param_15 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *(undefined1 *)temp_3f38b4ca47 = uVar16;
                  temp_3f38b4ca47 = (AnonShape_006D8A60_D503343B *)&temp_3f38b4ca47->field_0001;
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + param_15);
              }
            }
          }
        }
      }
    }
    goto cf_common_join_006D9EAC;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + param_2);
  goto LAB_006d9f11;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
cf_common_join_006D8DA5:
  param_1 = pAVar16;
  pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
  if ((int)uVar18 < 1) goto cf_common_join_006D9EAC;
  uVar23 = uVar23 - uVar18;
  if ((local_8 & 0x80) == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (AnonShape_006D8A60_D503343B *)((int)&pAVar16->field_0x0 + uVar18);
    goto cf_common_join_006D9EAC;
  }
  if ((local_8 & 0x40) != 0) {
    bVar21 = *(byte *)param_10;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    STPiece<0,2>(AVar7) = CONCAT11(bVar21,bVar21);
    STPiece<2,2>(AVar7) = 0;
    pAVar26 = (AnonShape_006D8A60_D503343B *)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
    if (3 < (int)uVar18) {
      if (((uint)pAVar16 & 1) != 0) {
        *(byte *)pAVar16 = bVar21;
        pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0001;
        uVar18 = uVar18 - 1;
      }
      if (((uint)pAVar16 & 2) != 0) {
        *(ushort *)pAVar16 = STPiece<0,2>(AVar7);
        pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0002;
        uVar18 = uVar18 - 2;
      }
      STPiece<2,2>(AVar7) = STPiece<0,2>(AVar7);
      while (3 < (int)uVar18) {
        *pAVar16 = AVar7;
        pAVar16 = pAVar16 + 1;
        uVar18 = uVar18 - 4;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = pAVar16;
      if (uVar18 == 0) goto cf_common_join_006D9EAC;
    }
    bVar21 = STPiece<0,1>(AVar7);
    if ((char)uVar18 != '\x01') {
      if ((char)uVar18 != '\x02') {
        pAVar16->field_0002 = bVar21;
      }
      pAVar16->field_0001 = bVar21;
    }
    *(byte *)pAVar16 = bVar21;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (AnonShape_006D8A60_D503343B *)(&pAVar16->field_0x0 + uVar18);
    goto cf_common_join_006D9EAC;
  }
  bVar21 = *(byte *)param_10;
  if ((bVar21 < (byte)param_9) || (local_14 < bVar21)) {
    if (3 < (int)uVar18) {
      if (((uint)pAVar16 & 1) != 0) {
        *(byte *)pAVar16 = *(byte *)param_10;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
        pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0001;
        uVar18 = uVar18 - 1;
      }
      if (((uint)pAVar16 & 2) != 0) {
        bVar21 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
        pAVar16->field_0x0 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0x0;
        pAVar16->field_0001 = bVar21;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
        pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0002;
        uVar18 = uVar18 - 2;
      }
      while (3 < (int)uVar18) {
        AVar19 = *(AnonShape_006D8A60_D503343B *)param_10;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = param_10 + 4;
        *pAVar16 = AVar19;
        pAVar16 = pAVar16 + 1;
        uVar18 = uVar18 - 4;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = pAVar16;
      pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
      if (uVar18 == 0) goto cf_common_join_006D9EAC;
    }
    if ((char)uVar18 != '\x01') {
      if ((char)uVar18 != '\x02') {
        pAVar16->field_0002 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
      }
      pAVar16->field_0001 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
    }
    *(byte *)pAVar16 = *(byte *)param_10;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (AnonShape_006D8A60_D503343B *)(&pAVar16->field_0x0 + uVar18);
    pAVar26 = (AnonShape_006D8A60_D503343B *)
              ((int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0x0 + uVar18);
    goto cf_common_join_006D9EAC;
  }
  AVar19 = *(AnonShape_006D8A60_D503343B *)((uint)pAVar16 & 0xfffffffc);
  if (((uint)pAVar16 & 3) == 0) {
LAB_006d8e9b:
    cVar14 = (char)uVar18;
    while ('\x03' < cVar14) {
      bVar21 = *(byte *)param_10;
      pbVar25 = &((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
      pbVar1 = &((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
      puVar2 = &((AnonShape_006D8A60_D503343B *)param_10)->field_0x3;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_10 = param_10 + 4;
      *pAVar16 = (AnonShape_006D8A60_D503343B)
                 /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                 (CONCAT22(CONCAT11(param_8[(uint)CONCAT11(*pbVar25,AVar19.field_0001) +
                                            param_9 * -0x100],
                                    param_8[(uint)CONCAT11(bVar21,STPiece<0,1>(AVar19)) + param_9 * -0x100])
                           ,CONCAT11(param_8[(uint)CONCAT11(*puVar2,STPiece<3,1>(AVar19)) + param_9 * -0x100
                                            ],param_8[(uint)CONCAT11(*pbVar1,AVar19.field_0002) +
                                                      param_9 * -0x100])) << 0x10 |
                 (uint)CONCAT11(param_8[(uint)CONCAT11(*pbVar25,AVar19.field_0001) +
                                        param_9 * -0x100],
                                param_8[(uint)CONCAT11(bVar21,STPiece<0,1>(AVar19)) + param_9 * -0x100]));
      AVar19 = pAVar16[1];
      pAVar16 = pAVar16 + 1;
      cVar14 = cVar14 + -4;
    }
    uVar18 = STReplaceLowByte((uint32_t)(uVar18), (uint8_t)(cVar14));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = pAVar16;
    pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
    if (cVar14 == '\0') goto cf_common_join_006D9EAC;
  }
  else {
    AVar19 = (AnonShape_006D8A60_D503343B)((uint)AVar19 >> (((byte)pAVar16 & 3) << 3));
    if (3 < uVar18) {
      if (((uint)pAVar16 & 1) != 0) {
        uVar18 = STReplaceLowByte((uint32_t)(uVar18), (uint8_t)((char)uVar18 + -1));
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
        *(undefined *)pAVar16 = param_8[(uint)CONCAT11(bVar21,STPiece<0,1>(AVar19)) + param_9 * -0x100];
        AVar19 = (AnonShape_006D8A60_D503343B)((uint)AVar19 >> 8);
        pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0001;
      }
      if (((uint)pAVar16 & 2) != 0) {
        bVar21 = *(byte *)param_10;
        pbVar25 = &((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
        uVar18 = STReplaceLowByte((uint32_t)(uVar18), (uint8_t)((char)uVar18 + -2));
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
        *(ushort *)pAVar16 =
             /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
             CONCAT11(param_8[(uint)CONCAT11(*pbVar25,AVar19.field_0001) + param_9 * -0x100],
                      param_8[(uint)CONCAT11(bVar21,STPiece<0,1>(AVar19)) + param_9 * -0x100]);
        pAVar16 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0002;
      }
      AVar19 = *pAVar16;
      goto LAB_006d8e9b;
    }
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0001;
  *(undefined *)pAVar16 = param_8[(uint)CONCAT11(*(byte *)param_10,STPiece<0,1>(AVar19)) + param_9 * -0x100]
  ;
  uVar17 = STPiece<1,2>(AVar19);
  pAVar26 = (AnonShape_006D8A60_D503343B *)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
  if (uVar18 != 1) {
    if (((uint)param_1 & 3) == 0) {
      uVar17 = SUB42(*param_1,0);
    }
    pbVar25 = &pAVar16->field_0002;
    *(undefined *)param_1 =
         /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
         param_8[(uint)CONCAT11(((AnonShape_006D8A60_D503343B *)param_10)->field_0001,(char)uVar17)
                 + param_9 * -0x100];
    uVar16 = (undefined1)((ushort)uVar17 >> 8);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (AnonShape_006D8A60_D503343B *)pbVar25;
    pAVar26 = (AnonShape_006D8A60_D503343B *)&((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
    if (uVar18 != 2) {
      if (((uint)pbVar25 & 3) == 0) {
        uVar16 = (undefined1)*(undefined4 *)pbVar25;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (AnonShape_006D8A60_D503343B *)&pAVar16->field_0x3;
      *pbVar25 = param_8[(uint)CONCAT11(((AnonShape_006D8A60_D503343B *)param_10)->field_0002,uVar16
                                       ) + param_9 * -0x100];
      pAVar26 = (AnonShape_006D8A60_D503343B *)&((AnonShape_006D8A60_D503343B *)param_10)->field_0x3
      ;
    }
  }
  goto cf_common_join_006D9EAC;
cf_common_join_006D958E:
  pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
  if ((int)uVar18 < 1) goto cf_common_join_006D9EAC;
  uVar23 = uVar23 - uVar18;
  if ((local_8 & 0x80) == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar18);
    goto cf_common_join_006D9EAC;
  }
  if ((local_8 & 0x40) == 0) {
    if (3 < (int)uVar18) {
      if (((uint)param_1 & 1) != 0) {
        *(byte *)param_1 = *(byte *)param_10;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
        uVar18 = uVar18 - 1;
      }
      if (((uint)param_1 & 2) != 0) {
        bVar21 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
        param_1->field_0x0 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0x0;
        param_1->field_0001 = bVar21;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = (int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0002;
        uVar18 = uVar18 - 2;
      }
      while (3 < (int)uVar18) {
        AVar19 = *(AnonShape_006D8A60_D503343B *)param_10;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = param_10 + 4;
        *param_1 = AVar19;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
        uVar18 = uVar18 - 4;
      }
      pAVar26 = (AnonShape_006D8A60_D503343B *)param_10;
      if (uVar18 == 0) goto cf_common_join_006D9EAC;
    }
    if ((char)uVar18 != '\x01') {
      if ((char)uVar18 != '\x02') {
        param_1->field_0002 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
      }
      param_1->field_0001 = ((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
    }
    *(byte *)param_1 = *(byte *)param_10;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar18);
    pAVar26 = (AnonShape_006D8A60_D503343B *)
              ((int)&((AnonShape_006D8A60_D503343B *)param_10)->field_0x0 + uVar18);
    goto cf_common_join_006D9EAC;
  }
  bVar21 = *(byte *)param_10;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  STPiece<0,2>(AVar9) = CONCAT11(bVar21,bVar21);
  STPiece<2,2>(AVar9) = 0;
  pAVar26 = (AnonShape_006D8A60_D503343B *)&((AnonShape_006D8A60_D503343B *)param_10)->field_0001;
  if ((bVar21 < (byte)param_9) || (local_14 < bVar21)) {
    if (3 < (int)uVar18) {
      if (((uint)param_1 & 1) != 0) {
        *(byte *)param_1 = bVar21;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
        uVar18 = uVar18 - 1;
      }
      if (((uint)param_1 & 2) != 0) {
        *(ushort *)param_1 = STPiece<0,2>(AVar9);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0002;
        uVar18 = uVar18 - 2;
      }
      STPiece<2,2>(AVar9) = STPiece<0,2>(AVar9);
      while (3 < (int)uVar18) {
        *param_1 = AVar9;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
        uVar18 = uVar18 - 4;
      }
      if (uVar18 == 0) goto cf_common_join_006D9EAC;
    }
    bVar21 = STPiece<0,1>(AVar9);
    if ((char)uVar18 != '\x01') {
      if ((char)uVar18 != '\x02') {
        param_1->field_0002 = bVar21;
      }
      param_1->field_0001 = bVar21;
    }
    *(byte *)param_1 = bVar21;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar18);
    goto cf_common_join_006D9EAC;
  }
  AVar19 = *(AnonShape_006D8A60_D503343B *)((uint)param_1 & 0xfffffffc);
  if (((uint)param_1 & 3) == 0) {
LAB_006d9621:
    cVar14 = (char)uVar18;
    while ('\x03' < cVar14) {
      *param_1 = (AnonShape_006D8A60_D503343B)
                 /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                 (CONCAT22(CONCAT11(param_8[(uint)AVar19 >> 8 & 0xff],param_8[(uint)AVar19 & 0xff]),
                           CONCAT11(param_8[(uint)AVar19 >> 0x18],
                                    param_8[(uint)AVar19 >> 0x10 & 0xff])) << 0x10 |
                 (uint)CONCAT11(param_8[(uint)AVar19 >> 8 & 0xff],param_8[(uint)AVar19 & 0xff]));
      AVar19 = param_1[1];
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 + 1;
      cVar14 = cVar14 + -4;
    }
    uVar18 = STReplaceLowByte((uint32_t)(uVar18), (uint8_t)(cVar14));
    if (cVar14 == '\0') goto cf_common_join_006D9EAC;
  }
  else {
    AVar19 = (AnonShape_006D8A60_D503343B)((uint)AVar19 >> (((byte)param_1 & 3) << 3));
    if (3 < uVar18) {
      if (((uint)param_1 & 1) != 0) {
        uVar18 = STReplaceLowByte((uint32_t)(uVar18), (uint8_t)((char)uVar18 + -1));
        pAVar26 = (AnonShape_006D8A60_D503343B *)
                  &((AnonShape_006D8A60_D503343B *)param_10)->field_0002;
        *(undefined *)param_1 = param_8[(uint)AVar19 & 0xff];
        AVar19 = (AnonShape_006D8A60_D503343B)((uint)AVar19 >> 8);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0001;
      }
      if (((uint)param_1 & 2) != 0) {
        uVar18 = STReplaceLowByte((uint32_t)(uVar18), (uint8_t)((char)uVar18 + -2));
        *(ushort *)param_1 =
             /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
             CONCAT11(param_8[(uint)AVar19 >> 8 & 0xff],param_8[(uint)AVar19 & 0xff]);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_006D8A60_D503343B *)&param_1->field_0002;
      }
      AVar19 = *param_1;
      goto LAB_006d9621;
    }
  }
  if ((char)uVar18 != '\x01') {
    if ((char)uVar18 != '\x02') {
      uVar4 = (uint)AVar19 >> 0x10;
      AVar19 = (AnonShape_006D8A60_D503343B)((uint)AVar19 & 0xffff);
      param_1->field_0002 = param_8[uVar4 & 0xff];
    }
    param_1->field_0001 = param_8[(uint)AVar19 >> 8 & 0xff];
  }
  *(undefined *)param_1 = param_8[(uint)AVar19 & 0xff];
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (AnonShape_006D8A60_D503343B *)(&param_1->field_0x0 + uVar18);
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
cf_common_join_006D9EAC:
  param_10 = (int)pAVar26;
  bVar21 = (byte)local_8;
  iVar15 = (sVar3 - param_4) - param_6;
  if ((int)uVar23 < iVar15) {
    do {
      iVar15 = iVar15 - uVar23;
      if (((byte)local_8 & 0xc0) == 0x80) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_10 = param_10 + uVar23;
      }
      bVar21 = *(byte *)param_10;
      local_8 = (uint)bVar21;
      uVar23 = local_8;
      iVar5 = param_10 + 1;
      if (((bVar21 & 0x80) != 0) && (uVar23 = local_8 & 0x3f, (bVar21 & 0x40) != 0)) {
        iVar5 = param_10 + 2;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_10 = iVar5;
    } while ((int)uVar23 < iVar15);
  }
  if ((bVar21 & 0xc0) == 0x80) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = param_10 + iVar15;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (AnonShape_006D8A60_D503343B *)((int)param_1 + (param_2 - param_6));
LAB_006d9f11:
  if (param_7 < 1) {
    return;
  }
  goto LAB_006d8b04;
}

