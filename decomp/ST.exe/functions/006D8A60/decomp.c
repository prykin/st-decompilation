#include "../../pseudocode_runtime.h"


/* WARNING: Unable to use type for symbol temp_3ff146b557 */
/* WARNING: Unable to use type for symbol puVar18 */
/* WARNING: Unable to use type for symbol temp_3fa16318a4 */
/* WARNING: Unable to use type for symbol pAVar16 */
/* WARNING: Unable to use type for symbol pAVar20_mg0 */
/* WARNING: Unable to use type for symbol pAVar20_mg4 */
/* WARNING: Unable to use type for symbol pAVar20_mg3 */
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: complete mutable byte-buffer machine proof: direct_calls=2, byte_reads=24,
   byte_writes=80, rep_movs_transports=0, wide_dereferences=44, escapes=0; byte_read_sites=006D9044
   MOV CL,byte ptr [EDX] | 006D9066 TEST byte ptr [EDI],BL | 006D9083 TEST byte ptr [ECX],BL |
   006D916C MOV BL,byte ptr [EDX] | 006D91B0 TEST byte ptr [EAX],BL | 006D91FD TEST byte ptr
   [ECX],BL | 006D928F MOV BL,byte ptr [EDX] | 006D9345 MOV BL,byte ptr [EDX] | ... +16;
   byte_write_sites=006D8BD6 MOV byte ptr [EDI],AL | 006D8C15 MOV byte ptr [EDI + 0x2],AL | 006D8C18
   MOV byte ptr [EDI + 0x1],AL | 006D8C1B MOV byte ptr [EDI],AL | 006D8C80 MOV byte ptr [EDI],AL |
   006D8CF2 STOSB ES:EDI | 006D8D0B STOSB ES:EDI | 006D8D24 STOSB ES:EDI | ... +72;
   wide_sites=006D8BE2 MOV word ptr [EDI],AX operand=WORD PTR [EDI] width=2 | 006D8BF8 MOV dword ptr
   [EDI],EAX operand=DWORD PTR [EDI] width=4 | 006D8C4B MOV EDX,dword ptr [EBX] operand=DWORD PTR
   [EBX] width=4 | 006D8CA3 MOV word ptr [EDI],DX operand=WORD PTR [EDI] width=2 | 006D8CA9 MOV
   EDX,dword ptr [EDI] operand=DWORD PTR [EDI] width=4 | 006D8CD8 MOV dword ptr [EDI],EDX
   operand=DWORD PTR [EDI] width=4 | 006D8CDA MOV EDX,dword ptr [EDI + 0x4] operand=DWORD PTR [EDI +
   0X4] width=4 | 006D8D01 MOV EDX,dword ptr [EDI] operand=DWORD PTR [EDI] width=4 | ... +36
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

void FUN_006d8a60(byte *param_1,int param_2,byte *param_3,int param_4,uint param_5,uint param_6,
                 int param_7,undefined *param_8,uint param_9,int param_10,undefined *param_11,
                 byte *param_12,int param_13,int param_14,uint param_15)

{
  byte *pbVar1;
  byte *pbVar2;
  uint *puVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  int iVar8;
  AnonShape_006D8A60_D503343B AVar9;
  char cVar10;
  int iVar11;
  byte uVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  AnonShape_006D8A60_D503343B *pAVar20_mg2;
  byte bVar17;
  byte bVar18;
  undefined *puVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  byte local_14;
  char local_10;
  uint local_8;
  byte *temp_3ff146b557;
  AnonShape_006D8A60_D503343B *puVar18;
  byte *temp_3f248b4d74;
  byte *temp_3f135a84f2;
  byte *temp_3f38b4ca47;
  byte *temp_3fa16318a4;
  byte *pAVar16;
  byte *pAVar20_mg0;
  uint *pAVar20_mg4;
  uint *pAVar20_mg3;

  if (((int)param_6 < 1) || (param_7 < 1)) {
    return;
  }
  iVar8 = param_10 + param_9;
  local_14 = (char)iVar8 - 1;
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
    param_10 = (int)FUN_006cfe10(param_3,param_5);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar4 = *(short *)(param_3 + 0x12);
LAB_006d8b04:
  pAVar20_mg0 = (uint *)param_1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_7 = param_7 + -1;
  local_8 = (uint)(byte)*(uint *)param_10;
  param_10 = param_10 + 1;
  iVar11 = param_4;
  if (local_8 != 0) {
    while( true ) {
      while ((local_8 & 0x80) == 0) {
        uVar20 = local_8 & 0x7f;
        if (iVar11 < (int)uVar20) goto LAB_006d8b50;
        uVar14 = *(uint *)param_10;
        param_10 = param_10 + 1;
        iVar11 = iVar11 - uVar20;
        local_8 = (uint)(byte)uVar14;
      }
      uVar20 = local_8 & 0x3f;
      if (iVar11 < (int)uVar20) break;
      if ((local_8 & 0x40) == 0) {
        local_8 = (uint)*(byte *)(param_10 + uVar20);
        param_10 = (int)((byte *)(param_10 + uVar20) + 1);
        iVar11 = iVar11 - uVar20;
      }
      else {
        local_8 = (uint)((byte *)param_10)[1];
        param_10 = param_10 + 2;
        iVar11 = iVar11 - uVar20;
      }
    }
LAB_006d8b50:
    uVar20 = uVar20 - iVar11;
    bVar18 = (byte)local_8;
    if ((bVar18 & 0xc0) == 0x80) {
      param_10 = param_10 + iVar11;
    }
    auto param_15_after_write = param_6; /* compiler stack-slot lifetime split */
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_8 == nullptr) {
      if ((int)uVar20 <= (int)param_6) {
        do {
          param_15_after_write = param_15_after_write - uVar20;
          if ((local_8 & 0x80) == 0) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = (byte *)((int)param_1 + uVar20);
          }
          else if (0 < (int)uVar20) {
            do {
              bVar18 = *(byte *)param_10;
              param_10 = param_10 + 1;
              auto param_5_after_write = (uint)bVar18; /* compiler stack-slot lifetime split */
              if (((int)param_5_after_write < (int)param_9) || (iVar8 <= (int)param_5_after_write)) {
                *param_1 = bVar18;
              }
              param_1 = (byte *)((int)param_1 + 1);
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          if ((int)param_15_after_write < 1) {
            uVar20 = 0;
            break;
          }
          local_8 = (uint)*(byte *)param_10;
          uVar20 = local_8 & 0x7f;
          param_10 = param_10 + 1;
        } while ((int)uVar20 <= (int)param_15_after_write);
      }
      uVar20 = uVar20 - param_15_after_write;
      puVar22 = (uint *)param_10;
      if ((local_8 & 0x80) == 0) {
        param_1 = (byte *)((int)param_1 + param_15_after_write);
      }
      else if (0 < (int)param_15_after_write) {
        do {
          bVar18 = *(byte *)param_10;
          param_10 = param_10 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_5 = (uint)bVar18;
          if (((int)param_5 < (int)param_9) || (iVar8 <= (int)param_5)) {
            *param_1 = bVar18;
          }
          param_1 = (byte *)((int)param_1 + 1);
          param_15_after_write = param_15_after_write - 1;
          puVar22 = (uint *)param_10;
        } while (param_15_after_write != 0);
      }
    }
    else {
      local_10 = (char)uVar20;
      if ((param_3[0xd] & 3) == 1) {
        bVar18 = bVar18 & 0xc0;
        if ((local_8 & 0x80) == 0) {
          bVar18 = 0;
        }
        uVar20 = (uint)(byte)(bVar18 + local_10);
        uVar14 = param_6;
        pAVar16 = (uint *)param_1;
        do {
          if ((uVar20 & 0x80) == 0) {
            if ((int)uVar14 < (int)uVar20) goto cf_common_join_006D8DA5;
            uVar14 = uVar14 - uVar20;
            puVar22 = (uint *)((int)pAVar16 + uVar20);
          }
          else if ((uVar20 & 0x40) == 0) {
            uVar20 = uVar20 & 0x3f;
            if ((int)uVar14 < (int)uVar20) goto cf_common_join_006D8DA5;
            uVar14 = uVar14 - uVar20;
            bVar18 = (byte)*(uint *)param_10;
            if ((bVar18 < (byte)param_9) || (local_14 < bVar18)) {
              if (3 < uVar20) {
                if (((uint)pAVar16 & 1) != 0) {
                  uVar20 = uVar20 - 1;
                  *(byte *)pAVar16 = (byte)*(uint *)param_10;
                  param_10 = param_10 + 1;
                  pAVar16 = (uint *)((int)pAVar16 + 1);
                }
                if (((uint)pAVar16 & 2) != 0) {
                  uVar20 = uVar20 - 2;
                  *(short *)pAVar16 = (short)*(uint *)param_10;
                  param_10 = param_10 + 2;
                  pAVar16 = (uint *)((int)pAVar16 + 2);
                }
                while (3 < (int)uVar20) {
                  uVar15 = *(uint *)param_10;
                  param_10 = param_10 + 4;
                  *pAVar16 = uVar15;
                  pAVar16 = pAVar16 + 1;
                  uVar20 = uVar20 - 4;
                }
                puVar22 = pAVar16;
                if (uVar20 == 0) goto LAB_006d8d94;
              }
              if ((char)uVar20 != '\x01') {
                if ((char)uVar20 != '\x02') {
                  STField<byte>(pAVar16,2) = ((byte *)param_10)[2];
                }
                STField<byte>(pAVar16,1) = ((byte *)param_10)[1];
              }
              uVar15 = *(uint *)param_10;
              param_10 = param_10 + uVar20;
              *(byte *)pAVar16 = (byte)uVar15;
              puVar22 = (uint *)((int)pAVar16 + uVar20);
            }
            else {
              uVar15 = *(uint *)((uint)pAVar16 & 0xfffffffc);
              if (((uint)pAVar16 & 3) == 0) {
LAB_006d8cab:
                bVar18 = (byte)uVar20;
                while ('\x03' < (char)bVar18) {
                  uVar20 = *(uint *)param_10;
                  pbVar16 = (byte *)(param_10 + 1);
                  pbVar1 = (byte *)(param_10 + 2);
                  pbVar2 = (byte *)(param_10 + 3);
                  param_10 = param_10 + 4;
                  *pAVar16 = CONCAT22(CONCAT11(param_8[(uint)CONCAT11(*pbVar16,(char)(uVar15 >> 8))
                                                       /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                                       + param_9 * -0x100],
                                               param_8[(uint)CONCAT11((byte)uVar20,(char)uVar15) +
                                                       param_9 * -0x100]),
                                      CONCAT11(param_8[(uint)CONCAT11(*pbVar2,(char)(uVar15 >> 0x18)
                                                                     ) + param_9 * -0x100],
                                               param_8[(uint)CONCAT11(*pbVar1,(char)(uVar15 >> 0x10)
                                                                     ) + param_9 * -0x100])) << 0x10
                             | (uint)CONCAT11(param_8[(uint)CONCAT11(*pbVar16,(char)(uVar15 >> 8)) +
                                                      param_9 * -0x100],
                                              param_8[(uint)CONCAT11((byte)uVar20,(char)uVar15) +
                                                      param_9 * -0x100]);
                  uVar15 = pAVar16[1];
                  pAVar16 = pAVar16 + 1;
                  bVar18 = bVar18 - 4;
                }
                uVar20 = (uint)bVar18;
                puVar21 = (uint *)param_10;
                puVar22 = pAVar16;
                if (bVar18 == 0) goto LAB_006d8d94;
              }
              else {
                uVar15 = uVar15 >> (((byte)pAVar16 & 3) << 3);
                puVar21 = (uint *)param_10;
                if (3 < uVar20) {
                  if (((uint)pAVar16 & 1) != 0) {
                    uVar20 = (uint)(byte)((char)uVar20 - 1);
                    param_10 = param_10 + 1;
                    *(undefined *)pAVar16 =
                         /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                         param_8[(uint)CONCAT11(bVar18,(char)uVar15) + param_9 * -0x100];
                    uVar15 = uVar15 >> 8;
                    pAVar16 = (uint *)((int)pAVar16 + 1);
                  }
                  if (((uint)pAVar16 & 2) != 0) {
                    uVar5 = *(uint *)param_10;
                    pbVar16 = (byte *)(param_10 + 1);
                    uVar20 = (uint)(byte)((char)uVar20 - 2);
                    param_10 = param_10 + 2;
                    *(ushort *)pAVar16 =
                         /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                         CONCAT11(param_8[(uint)CONCAT11(*pbVar16,(char)(uVar15 >> 8)) +
                                          param_9 * -0x100],
                                  param_8[(uint)CONCAT11((byte)uVar5,(char)uVar15) +
                                          param_9 * -0x100]);
                    pAVar16 = (uint *)((int)pAVar16 + 2);
                  }
                  uVar15 = *pAVar16;
                  goto LAB_006d8cab;
                }
              }
              param_10 = (int)puVar21 + 1;
              puVar22 = (uint *)((int)pAVar16 + 1);
              *(undefined *)pAVar16 =
                   /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                   param_8[(uint)CONCAT11((byte)*puVar21,(char)uVar15) + param_9 * -0x100];
              uVar13 = (undefined2)(uVar15 >> 8);
              if (uVar20 != 1) {
                if (((uint)puVar22 & 3) == 0) {
                  uVar13 = (undefined2)*puVar22;
                }
                bVar18 = *(byte *)param_10;
                param_10 = (int)puVar21 + 2;
                puVar3 = (uint *)((int)pAVar16 + 2);
                *(undefined *)puVar22 =
                     /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                     param_8[(uint)CONCAT11(bVar18,(char)uVar13) + param_9 * -0x100];
                uVar12 = (undefined1)((ushort)uVar13 >> 8);
                puVar22 = puVar3;
                if (uVar20 != 2) {
                  if (((uint)puVar3 & 3) == 0) {
                    uVar12 = (undefined1)*puVar3;
                  }
                  bVar18 = *(byte *)param_10;
                  param_10 = (int)puVar21 + 3;
                  puVar22 = (uint *)((int)pAVar16 + 3);
                  *(undefined *)puVar3 = param_8[(uint)CONCAT11(bVar18,uVar12) + param_9 * -0x100];
                }
              }
            }
          }
          else {
            bVar18 = (byte)*(uint *)param_10;
            uVar20 = uVar20 & 0xffffff3f;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            uVar7 = CONCAT11(bVar18,bVar18);
            uVar15 = (uint)uVar7;
            if ((int)uVar14 < (int)uVar20) goto cf_common_join_006D8DA5;
            uVar14 = uVar14 - uVar20;
            param_10 = param_10 + 1;
            if (3 < uVar20) {
              if (((uint)pAVar16 & 1) != 0) {
                *(byte *)pAVar16 = bVar18;
                pAVar16 = (uint *)((int)pAVar16 + 1);
                uVar20 = uVar20 - 1;
              }
              if (((uint)pAVar16 & 2) != 0) {
                *(ushort *)pAVar16 = uVar7;
                pAVar16 = (uint *)((int)pAVar16 + 2);
                uVar20 = uVar20 - 2;
              }
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar15 = CONCAT22(uVar7,uVar7);
              while (3 < (int)uVar20) {
                *pAVar16 = uVar15;
                pAVar16 = pAVar16 + 1;
                uVar20 = uVar20 - 4;
              }
              puVar22 = pAVar16;
              if (uVar20 == 0) goto LAB_006d8d94;
            }
            bVar18 = (byte)uVar15;
            if ((char)uVar20 != '\x01') {
              if ((char)uVar20 != '\x02') {
                STField<byte>(pAVar16,2) = bVar18;
              }
              STField<byte>(pAVar16,1) = bVar18;
            }
            *(byte *)pAVar16 = bVar18;
            puVar22 = (uint *)((int)pAVar16 + uVar20);
          }
LAB_006d8d94:
          uVar20 = 0;
          pAVar16 = puVar22;
          if ((int)uVar14 < 1) goto cf_common_join_006D8DA5;
          uVar20 = (uint)(byte)*(uint *)param_10;
          param_10 = param_10 + 1;
          local_8 = uVar20;
        } while( true );
      }
      if ((param_3[0xd] & 3) == 2) {
        if (param_12 == nullptr) {
          if (param_11 == nullptr) {
            bVar18 = bVar18 & 0xc0;
            if ((local_8 & 0x80) == 0) {
              bVar18 = 0;
            }
            uVar20 = (uint)(byte)(bVar18 + local_10);
            uVar14 = param_6;
            do {
              if ((uVar20 & 0x80) == 0) {
                if ((int)uVar14 < (int)uVar20) goto cf_common_join_006D958E;
                uVar14 = uVar14 - uVar20;
                param_1 = (byte *)((int)param_1 + uVar20);
              }
              else if ((uVar20 & 0x40) == 0) {
                uVar20 = uVar20 & 0x3f;
                if ((int)uVar14 < (int)uVar20) goto cf_common_join_006D958E;
                uVar14 = uVar14 - uVar20;
                if (3 < uVar20) {
                  if (((uint)param_1 & 1) != 0) {
                    uVar20 = uVar20 - 1;
                    *param_1 = (byte)*(uint *)param_10;
                    param_10 = param_10 + 1;
                    param_1 = (byte *)((int)param_1 + 1);
                  }
                  if (((uint)param_1 & 2) != 0) {
                    uVar20 = uVar20 - 2;
                    *(short *)param_1 = (short)*(uint *)param_10;
                    param_10 = param_10 + 2;
                    param_1 = (byte *)((int)param_1 + 2);
                  }
                  while (3 < (int)uVar20) {
                    uVar15 = *(uint *)param_10;
                    param_10 = param_10 + 4;
                    *(uint *)param_1 = uVar15;
                    param_1 = (byte *)((int)param_1 + 4);
                    uVar20 = uVar20 - 4;
                  }
                  if (uVar20 == 0) goto LAB_006d957d;
                }
                if ((char)uVar20 != '\x01') {
                  if ((char)uVar20 != '\x02') {
                    STField<byte>(param_1,2) = ((byte *)param_10)[2];
                  }
                  STField<byte>(param_1,1) = ((byte *)param_10)[1];
                }
                uVar15 = *(uint *)param_10;
                param_10 = param_10 + uVar20;
                *param_1 = (byte)uVar15;
                param_1 = (byte *)((int)param_1 + uVar20);
              }
              else {
                bVar18 = (byte)*(uint *)param_10;
                uVar20 = uVar20 & 0xffffff3f;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                uVar7 = CONCAT11(bVar18,bVar18);
                uVar15 = (uint)uVar7;
                if ((int)uVar14 < (int)uVar20) goto cf_common_join_006D958E;
                uVar14 = uVar14 - uVar20;
                param_10 = param_10 + 1;
                if ((bVar18 < (byte)param_9) || (local_14 < bVar18)) {
                  if (3 < uVar20) {
                    if (((uint)param_1 & 1) != 0) {
                      *param_1 = bVar18;
                      param_1 = (byte *)((int)param_1 + 1);
                      uVar20 = uVar20 - 1;
                    }
                    if (((uint)param_1 & 2) != 0) {
                      *(ushort *)param_1 = uVar7;
                      param_1 = (byte *)((int)param_1 + 2);
                      uVar20 = uVar20 - 2;
                    }
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    uVar15 = CONCAT22(uVar7,uVar7);
                    while (3 < (int)uVar20) {
                      *(uint *)param_1 = uVar15;
                      param_1 = (byte *)((int)param_1 + 4);
                      uVar20 = uVar20 - 4;
                    }
                    if (uVar20 == 0) goto LAB_006d957d;
                  }
                  bVar18 = (byte)uVar15;
                  if ((char)uVar20 != '\x01') {
                    if ((char)uVar20 != '\x02') {
                      STField<byte>(param_1,2) = bVar18;
                    }
                    STField<byte>(param_1,1) = bVar18;
                  }
                  *param_1 = bVar18;
                  param_1 = (byte *)((int)param_1 + uVar20);
                }
                else {
                  uVar15 = *(uint *)((uint)param_1 & 0xfffffffc);
                  if (((uint)param_1 & 3) == 0) {
LAB_006d9450:
                    bVar18 = (byte)uVar20;
                    while ('\x03' < (char)bVar18) {
                      *(uint *)param_1 =
                           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                           CONCAT22(CONCAT11(param_8[uVar15 >> 8 & 0xff],param_8[uVar15 & 0xff]),
                                    CONCAT11(param_8[uVar15 >> 0x18],param_8[uVar15 >> 0x10 & 0xff])
                                   ) << 0x10 |
                           (uint)CONCAT11(param_8[uVar15 >> 8 & 0xff],param_8[uVar15 & 0xff]);
                      uVar15 = STField<uint>(param_1,4);
                      param_1 = (byte *)((int)param_1 + 4);
                      bVar18 = bVar18 - 4;
                    }
                    uVar20 = (uint)bVar18;
                    if (bVar18 == 0) goto LAB_006d957d;
                  }
                  else {
                    uVar15 = uVar15 >> (((byte)param_1 & 3) << 3);
                    if (3 < uVar20) {
                      if (((uint)param_1 & 1) != 0) {
                        uVar20 = (uint)(byte)((char)uVar20 - 1);
                        *param_1 = param_8[uVar15 & 0xff];
                        uVar15 = uVar15 >> 8;
                        param_1 = (byte *)((int)param_1 + 1);
                      }
                      if (((uint)param_1 & 2) != 0) {
                        uVar20 = (uint)(byte)((char)uVar20 - 2);
                        *(ushort *)param_1 =
                             /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                             CONCAT11(param_8[uVar15 >> 8 & 0xff],param_8[uVar15 & 0xff]);
                        param_1 = (byte *)((int)param_1 + 2);
                      }
                      uVar15 = *(uint *)param_1;
                      goto LAB_006d9450;
                    }
                  }
                  if ((char)uVar20 != '\x01') {
                    if ((char)uVar20 != '\x02') {
                      uVar5 = uVar15 >> 0x10;
                      uVar15 = uVar15 & 0xffff;
                      STField<undefined>(param_1,2) = param_8[uVar5 & 0xff];
                    }
                    STField<undefined>(param_1,1) = param_8[uVar15 >> 8 & 0xff];
                  }
                  *param_1 = param_8[uVar15 & 0xff];
                  param_1 = (byte *)((int)param_1 + uVar20);
                }
              }
LAB_006d957d:
              uVar20 = 0;
              if ((int)uVar14 < 1) goto cf_common_join_006D958E;
              uVar20 = (uint)(byte)*(uint *)param_10;
              param_10 = param_10 + 1;
              local_8 = uVar20;
            } while( true );
          }
          if ((int)uVar20 <= (int)param_6) {
            do {
              param_15_after_write = param_15_after_write - uVar20;
              if ((local_8 & 0x80) == 0) {
                param_1 = (byte *)((int)param_1 + uVar20);
              }
              else if ((local_8 & 0x40) == 0) {
                if (0 < (int)uVar20) {
                  do {
                    puVar22 = (uint *)((int)param_1 + 1);
                    bVar18 = *(byte *)param_10;
                    param_10 = param_10 + 1;
                    uVar20 = uVar20 - 1;
                    *param_1 = param_11[bVar18];
                    param_1 = (byte *)puVar22;
                  } while (uVar20 != 0);
                }
              }
              else {
                bVar18 = *(byte *)param_10;
                param_10 = param_10 + 1;
                param_5 = (uint)bVar18;
                if (param_5 == param_9) {
                  if (0 < (int)uVar20) {
                    do {
                      puVar22 = (uint *)((int)param_1 + 1);
                      uVar20 = uVar20 - 1;
                      *param_1 = param_8[(byte)*(uint *)param_1];
                      param_1 = (byte *)puVar22;
                    } while (uVar20 != 0);
                  }
                }
                else if (0 < (int)uVar20) {
                  do {
                    *param_1 = param_11[param_5];
                    param_1 = (byte *)((int)param_1 + 1);
                    uVar20 = uVar20 - 1;
                  } while (uVar20 != 0);
                }
              }
              if ((int)param_15_after_write < 1) {
                uVar20 = 0;
                break;
              }
              bVar18 = *(byte *)param_10;
              local_8 = (uint)bVar18;
              param_10 = param_10 + 1;
              if ((bVar18 & 0x80) == 0) {
                uVar20 = local_8 & 0x7f;
              }
              else {
                uVar20 = local_8 & 0x3f;
              }
            } while ((int)uVar20 <= (int)param_15_after_write);
          }
          uVar20 = uVar20 - param_15_after_write;
          if ((local_8 & 0x80) == 0) goto LAB_006d9c24;
          puVar22 = (uint *)param_10;
          if ((local_8 & 0x40) == 0) {
            pAVar20_mg3 = (uint *)param_1;
            if (0 < (int)param_15_after_write) {
              do {
                param_1 = (byte *)((int)pAVar20_mg3 + 1);
                *(undefined *)pAVar20_mg3 = param_11[*(byte *)param_10];
                param_10 = param_10 + 1;
                param_15_after_write = param_15_after_write - 1;
                pAVar20_mg3 = (uint *)param_1;
                puVar22 = (uint *)param_10;
              } while (param_15_after_write != 0);
            }
          }
          else if (0 < (int)param_15_after_write) {
            param_5 = (uint)*(byte *)param_10;
            pAVar20_mg4 = (uint *)param_1;
            puVar22 = (uint *)(param_10 + 1);
            if (param_5 == param_9) {
              do {
                param_1 = (byte *)((int)pAVar20_mg4 + 1);
                param_15_after_write = param_15_after_write - 1;
                *(undefined *)pAVar20_mg4 = param_8[(byte)*pAVar20_mg4];
                pAVar20_mg4 = (uint *)param_1;
              } while (param_15_after_write != 0);
            }
            else {
              do {
                *param_1 = param_11[param_5];
                param_1 = (byte *)((int)param_1 + 1);
                param_15_after_write = param_15_after_write - 1;
              } while (param_15_after_write != 0);
            }
          }
        }
        else {
          param_1 = param_12;
          uVar14 = 0x80 >> ((byte)param_14 & 7);
          if ((int)uVar20 <= (int)param_6) {
            do {
              param_15_after_write = param_15_after_write - uVar20;
              if ((local_8 & 0x80) == 0) {
                pAVar20_mg0 = (uint *)((int)pAVar20_mg0 + uVar20);
                uVar14 = ((uVar14 & 0xff) << 8) >> ((byte)uVar20 & 7);
                if (uVar14 < 0x81) {
                  param_1 = param_1 + 1;
                }
                else {
                  uVar14 = uVar14 >> 8 & 0xff;
                }
                param_1 = param_1 + ((int)uVar20 >> 3);
              }
              else if ((local_8 & 0x40) == 0) {
                if (-1 < (int)(uVar20 - 1)) {
                  do {
                    if ((*param_1 & (byte)uVar14) != 0) {
                      *(undefined *)pAVar20_mg0 = param_11[*(byte *)param_10];
                      param_10 = param_10 + 1;
                    }
                    pAVar20_mg0 = (uint *)((int)pAVar20_mg0 + 1);
                    bVar18 = (byte)uVar14 >> 1;
                    if (bVar18 == 0) {
                      bVar18 = 0x80;
                      param_1 = param_1 + 1;
                    }
                    uVar14 = (uint)bVar18;
                    uVar20 = uVar20 - 1;
                  } while (uVar20 != 0);
                }
              }
              else {
                iVar11 = param_10 + 1;
                param_5 = (uint)*(byte *)param_10;
                param_10 = iVar11;
                if (param_5 == param_9) {
                  uVar14 = ((uVar14 & 0xff) << 8) >> ((byte)uVar20 & 7);
                  if (uVar14 < 0x81) {
                    param_1 = param_1 + 1;
                  }
                  else {
                    uVar14 = uVar14 >> 8 & 0xff;
                  }
                  param_1 = param_1 + ((int)uVar20 >> 3);
                  puVar22 = pAVar20_mg0;
                  if (-1 < (int)(uVar20 - 1)) {
                    do {
                      pAVar20_mg0 = (uint *)((int)puVar22 + 1);
                      uVar20 = uVar20 - 1;
                      *(undefined *)puVar22 = param_8[(byte)*puVar22];
                      puVar22 = pAVar20_mg0;
                    } while (uVar20 != 0);
                  }
                }
                else {
                  bVar18 = param_11[param_5];
                  if (-1 < (int)(uVar20 - 1)) {
                    do {
                      if ((*param_1 & (byte)uVar14) != 0) {
                        *(byte *)pAVar20_mg0 = bVar18;
                      }
                      pAVar20_mg0 = (uint *)((int)pAVar20_mg0 + 1);
                      bVar17 = (byte)uVar14 >> 1;
                      if (bVar17 == 0) {
                        bVar17 = 0x80;
                        param_1 = param_1 + 1;
                      }
                      uVar14 = (uint)bVar17;
                      uVar20 = uVar20 - 1;
                    } while (uVar20 != 0);
                  }
                }
              }
              if ((int)param_15_after_write < 1) {
                uVar20 = 0;
                break;
              }
              bVar18 = *(byte *)param_10;
              local_8 = (uint)bVar18;
              param_10 = param_10 + 1;
              if ((bVar18 & 0x80) == 0) {
                uVar20 = local_8 & 0x7f;
              }
              else {
                uVar20 = local_8 & 0x3f;
              }
            } while ((int)uVar20 <= (int)param_15_after_write);
          }
          uVar20 = uVar20 - param_15_after_write;
          if ((local_8 & 0x80) == 0) {
LAB_006d9a18:
            pAVar20_mg0 = (uint *)((int)pAVar20_mg0 + param_15_after_write);
          }
          else if ((local_8 & 0x40) == 0) {
            if (-1 < (int)(param_15_after_write - 1)) {
              do {
                if ((*param_1 & (byte)uVar14) != 0) {
                  *(undefined *)pAVar20_mg0 = param_11[*(byte *)param_10];
                  param_10 = param_10 + 1;
                }
                pAVar20_mg0 = (uint *)((int)pAVar20_mg0 + 1);
                bVar18 = (byte)uVar14 >> 1;
                uVar14 = (uint)bVar18;
                if (bVar18 == 0) {
                  uVar14 = 0x80;
                  param_1 = param_1 + 1;
                }
                param_15_after_write = param_15_after_write - 1;
              } while (param_15_after_write != 0);
              param_12 = param_12 + param_13;
              param_1 = (byte *)pAVar20_mg0;
              puVar22 = (uint *)param_10;
              goto cf_common_join_006D9EAC;
            }
          }
          else if (0 < (int)param_15_after_write) {
            puVar22 = (uint *)(param_10 + 1);
            param_5 = (uint)*(byte *)param_10;
            param_10 = (int)puVar22;
            if (param_5 == param_9) {
              if ((int)(param_15_after_write - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                param_1 = (byte *)((int)pAVar20_mg0 + 1);
                param_15_after_write = param_15_after_write - 1;
                *(undefined *)pAVar20_mg0 = param_8[(byte)*pAVar20_mg0];
                pAVar20_mg0 = (uint *)param_1;
              } while (param_15_after_write != 0);
              param_12 = param_12 + param_13;
            }
            else {
              param_5 = (uint)(byte)param_11[param_5];
              if ((int)(param_15_after_write - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                if ((*param_1 & (byte)uVar14) != 0) {
                  *(undefined *)pAVar20_mg0 = param_11[param_5];
                }
                pAVar20_mg0 = (uint *)((int)pAVar20_mg0 + 1);
                bVar18 = (byte)uVar14 >> 1;
                uVar14 = (uint)bVar18;
                if (bVar18 == 0) {
                  uVar14 = 0x80;
                  param_1 = param_1 + 1;
                }
                param_15_after_write = param_15_after_write - 1;
              } while (param_15_after_write != 0);
              param_12 = param_12 + param_13;
              param_1 = (byte *)pAVar20_mg0;
            }
            goto cf_common_join_006D9EAC;
          }
cf_common_join_006D9A1A:
          param_12 = param_12 + param_13;
          param_1 = (byte *)pAVar20_mg0;
          puVar22 = (uint *)param_10;
        }
      }
      else {
        if (param_12 != nullptr) {
          param_1 = param_12;
          uVar14 = 0x80 >> ((byte)param_14 & 7);
          if ((int)uVar20 <= (int)param_6) {
            do {
              param_15_after_write = param_15_after_write - uVar20;
              if ((local_8 & 0x80) == 0) {
                pAVar20_mg0 = (uint *)((int)pAVar20_mg0 + uVar20);
                uVar14 = ((uVar14 & 0xff) << 8) >> ((byte)uVar20 & 7);
                if (uVar14 < 0x81) {
                  param_1 = param_1 + 1;
                }
                else {
                  uVar14 = uVar14 >> 8 & 0xff;
                }
                param_1 = param_1 + ((int)uVar20 >> 3);
              }
              else if ((local_8 & 0x40) == 0) {
                if (-1 < (int)(uVar20 - 1)) {
                  do {
                    iVar11 = param_10 + 1;
                    param_5 = (uint)*(byte *)param_10;
                    if (param_5 == param_9) {
                      bVar18 = param_8[(byte)*pAVar20_mg0];
LAB_006d9875:
                      *(byte *)pAVar20_mg0 = bVar18;
                    }
                    else if ((*param_1 & (byte)uVar14) != 0) {
                      bVar18 = param_11[param_5];
                      goto LAB_006d9875;
                    }
                    pAVar20_mg0 = (uint *)((int)pAVar20_mg0 + 1);
                    bVar18 = (byte)uVar14 >> 1;
                    if (bVar18 == 0) {
                      bVar18 = 0x80;
                      param_1 = param_1 + 1;
                    }
                    uVar14 = (uint)bVar18;
                    uVar20 = uVar20 - 1;
                    param_10 = iVar11;
                  } while (uVar20 != 0);
                }
              }
              else {
                iVar11 = param_10 + 1;
                param_5 = (uint)*(byte *)param_10;
                param_10 = iVar11;
                if (param_5 == param_9) {
                  uVar14 = ((uVar14 & 0xff) << 8) >> ((byte)uVar20 & 7);
                  if (uVar14 < 0x81) {
                    param_1 = param_1 + 1;
                  }
                  else {
                    uVar14 = uVar14 >> 8 & 0xff;
                  }
                  param_1 = param_1 + ((int)uVar20 >> 3);
                  puVar22 = pAVar20_mg0;
                  if (-1 < (int)(uVar20 - 1)) {
                    do {
                      pAVar20_mg0 = (uint *)((int)puVar22 + 1);
                      uVar20 = uVar20 - 1;
                      *(undefined *)puVar22 = param_8[(byte)*puVar22];
                      puVar22 = pAVar20_mg0;
                    } while (uVar20 != 0);
                  }
                }
                else {
                  bVar18 = param_11[param_5];
                  if (-1 < (int)(uVar20 - 1)) {
                    do {
                      if ((*param_1 & (byte)uVar14) != 0) {
                        *(byte *)pAVar20_mg0 = bVar18;
                      }
                      pAVar20_mg0 = (uint *)((int)pAVar20_mg0 + 1);
                      bVar17 = (byte)uVar14 >> 1;
                      if (bVar17 == 0) {
                        bVar17 = 0x80;
                        param_1 = param_1 + 1;
                      }
                      uVar14 = (uint)bVar17;
                      uVar20 = uVar20 - 1;
                    } while (uVar20 != 0);
                  }
                }
              }
              if ((int)param_15_after_write < 1) {
                uVar20 = 0;
                break;
              }
              bVar18 = *(byte *)param_10;
              local_8 = (uint)bVar18;
              param_10 = param_10 + 1;
              if ((bVar18 & 0x80) == 0) {
                uVar20 = local_8 & 0x7f;
              }
              else {
                uVar20 = local_8 & 0x3f;
              }
            } while ((int)uVar20 <= (int)param_15_after_write);
          }
          uVar20 = uVar20 - param_15_after_write;
          if ((local_8 & 0x80) == 0) goto LAB_006d9a18;
          if ((local_8 & 0x40) == 0) {
            if (-1 < (int)(param_15_after_write - 1)) {
              do {
                puVar22 = (uint *)(param_10 + 1);
                param_5 = (uint)*(byte *)param_10;
                if (param_5 == param_9) {
                  bVar18 = param_8[(byte)*pAVar20_mg0];
LAB_006d99e9:
                  *(byte *)pAVar20_mg0 = bVar18;
                }
                else if ((*param_1 & (byte)uVar14) != 0) {
                  bVar18 = param_11[param_5];
                  goto LAB_006d99e9;
                }
                pAVar20_mg0 = (uint *)((int)pAVar20_mg0 + 1);
                bVar18 = (byte)uVar14 >> 1;
                uVar14 = (uint)bVar18;
                if (bVar18 == 0) {
                  uVar14 = 0x80;
                  param_1 = param_1 + 1;
                }
                param_15_after_write = param_15_after_write - 1;
                param_10 = (int)puVar22;
              } while (param_15_after_write != 0);
              param_12 = param_12 + param_13;
              param_1 = (byte *)pAVar20_mg0;
              goto cf_common_join_006D9EAC;
            }
          }
          else if (0 < (int)param_15_after_write) {
            puVar22 = (uint *)(param_10 + 1);
            param_5 = (uint)*(byte *)param_10;
            param_10 = (int)puVar22;
            if (param_5 == param_9) {
              if ((int)(param_15_after_write - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                param_1 = (byte *)((int)pAVar20_mg0 + 1);
                param_15_after_write = param_15_after_write - 1;
                *(undefined *)pAVar20_mg0 = param_8[(byte)*pAVar20_mg0];
                pAVar20_mg0 = (uint *)param_1;
              } while (param_15_after_write != 0);
              param_12 = param_12 + param_13;
            }
            else {
              bVar18 = param_11[param_5];
              if ((int)(param_15_after_write - 1) < 0) goto cf_common_join_006D9A1A;
              do {
                if ((*param_1 & (byte)uVar14) != 0) {
                  *(byte *)pAVar20_mg0 = bVar18;
                }
                pAVar20_mg0 = (uint *)((int)pAVar20_mg0 + 1);
                bVar17 = (byte)uVar14 >> 1;
                uVar14 = (uint)bVar17;
                if (bVar17 == 0) {
                  uVar14 = 0x80;
                  param_1 = param_1 + 1;
                }
                param_15_after_write = param_15_after_write - 1;
              } while (param_15_after_write != 0);
              param_12 = param_12 + param_13;
              param_1 = (byte *)pAVar20_mg0;
            }
            goto cf_common_join_006D9EAC;
          }
          goto cf_common_join_006D9A1A;
        }
        if (param_11 == nullptr) {
          if ((int)uVar20 <= (int)param_6) {
            do {
              param_15_after_write = param_15_after_write - uVar20;
              if ((local_8 & 0x80) == 0) {
                param_1 = &((AnonShape_006D8A60_D503343B *)param_1)->field_0x0 + uVar20;
              }
              else if ((local_8 & 0x40) == 0) {
                if (0 < (int)uVar20) {
                  do {
                    bVar18 = *(byte *)param_10;
                    param_10 = param_10 + 1;
                    param_5 = (uint)bVar18;
                    if (param_5 == param_9) {
                      bVar18 = param_8[*param_1];
                    }
                    *param_1 = bVar18;
                    param_1 = &((AnonShape_006D8A60_D503343B *)param_1)->field_0001;
                    uVar20 = uVar20 - 1;
                  } while (uVar20 != 0);
                }
              }
              else {
                bVar18 = *(byte *)param_10;
                param_10 = param_10 + 1;
                param_5 = (uint)bVar18;
                if (param_5 == param_9) {
                  pAVar20_mg2 = (AnonShape_006D8A60_D503343B *)param_1;
                  if (0 < (int)uVar20) {
                    do {
                      param_1 = &pAVar20_mg2->field_0001;
                      uVar20 = uVar20 - 1;
                      *(undefined *)pAVar20_mg2 = param_8[*(byte *)pAVar20_mg2];
                      pAVar20_mg2 = (AnonShape_006D8A60_D503343B *)param_1;
                    } while (uVar20 != 0);
                  }
                }
                else if (0 < (int)uVar20) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  STPiece<2,2>(AVar9) = CONCAT11(bVar18,bVar18);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  STPiece<0,2>(AVar9) = CONCAT11(bVar18,bVar18);
                  puVar18 = (AnonShape_006D8A60_D503343B *)param_1;
                  for (uVar14 = uVar20 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                    *puVar18 = AVar9;
                    puVar18 = puVar18 + 1;
                  }
                  for (uVar14 = uVar20 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                    *(byte *)puVar18 = bVar18;
                    puVar18 = (AnonShape_006D8A60_D503343B *)&puVar18->field_0001;
                  }
                  param_1 = &((AnonShape_006D8A60_D503343B *)param_1)->field_0x0 + uVar20;
                }
              }
              if ((int)param_15_after_write < 1) {
                uVar20 = 0;
                break;
              }
              bVar18 = *(byte *)param_10;
              local_8 = (uint)bVar18;
              param_10 = param_10 + 1;
              if ((bVar18 & 0x80) == 0) {
                uVar20 = local_8 & 0x7f;
              }
              else {
                uVar20 = local_8 & 0x3f;
              }
            } while ((int)uVar20 <= (int)param_15_after_write);
          }
          uVar20 = uVar20 - param_15_after_write;
          if ((local_8 & 0x80) == 0) goto LAB_006d9c24;
          puVar22 = (uint *)param_10;
          if ((local_8 & 0x40) == 0) {
            if (0 < (int)param_15_after_write) {
              do {
                bVar18 = *(byte *)param_10;
                param_10 = param_10 + 1;
                param_5 = (uint)bVar18;
                if (param_5 == param_9) {
                  bVar18 = param_8[(byte)*(uint *)param_1];
                }
                *param_1 = bVar18;
                param_1 = (byte *)((int)param_1 + 1);
                param_15_after_write = param_15_after_write - 1;
                puVar22 = (uint *)param_10;
              } while (param_15_after_write != 0);
            }
          }
          else if (0 < (int)param_15_after_write) {
            bVar18 = *(byte *)param_10;
            param_5 = (uint)bVar18;
            temp_3ff146b557 = (uint *)param_1;
            puVar22 = (uint *)(param_10 + 1);
            if (param_5 == param_9) {
              do {
                param_1 = (byte *)((int)temp_3ff146b557 + 1);
                param_15_after_write = param_15_after_write - 1;
                *(undefined *)temp_3ff146b557 = param_8[(byte)*temp_3ff146b557];
                temp_3ff146b557 = (uint *)param_1;
              } while (param_15_after_write != 0);
            }
            else {
              temp_3f135a84f2 = param_1;
              for (uVar14 = param_15_after_write >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(uint *)temp_3f135a84f2 = CONCAT22(CONCAT11(bVar18,bVar18),CONCAT11(bVar18,bVar18));
                temp_3f135a84f2 = temp_3f135a84f2 + 4;
              }
              for (uVar14 = param_15_after_write & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                *temp_3f135a84f2 = bVar18;
                temp_3f135a84f2 = temp_3f135a84f2 + 1;
              }
              param_1 = param_1 + param_15_after_write;
            }
          }
        }
        else {
          if ((int)uVar20 <= (int)param_6) {
            do {
              param_15_after_write = param_15_after_write - uVar20;
              if ((local_8 & 0x80) == 0) {
                param_1 = param_1 + uVar20;
              }
              else if ((local_8 & 0x40) == 0) {
                if (0 < (int)uVar20) {
                  do {
                    param_5 = (uint)*(byte *)param_10;
                    param_10 = param_10 + 1;
                    puVar19 = param_11;
                    if (param_5 == param_9) {
                      param_5 = (uint)*param_1;
                      puVar19 = param_8;
                    }
                    *param_1 = puVar19[param_5];
                    param_1 = param_1 + 1;
                    uVar20 = uVar20 - 1;
                  } while (uVar20 != 0);
                }
              }
              else {
                bVar18 = *(byte *)param_10;
                param_10 = param_10 + 1;
                param_5 = (uint)bVar18;
                if (param_5 == param_9) {
                  if (0 < (int)uVar20) {
                    do {
                      pbVar16 = param_1 + 1;
                      uVar20 = uVar20 - 1;
                      *param_1 = param_8[*param_1];
                      param_1 = pbVar16;
                    } while (uVar20 != 0);
                  }
                }
                else {
                  bVar18 = param_11[param_5];
                  if (0 < (int)uVar20) {
                    temp_3f248b4d74 = param_1;
                    for (uVar14 = uVar20 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                      *(uint *)temp_3f248b4d74 =
                           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                           CONCAT22(CONCAT11(bVar18,bVar18),CONCAT11(bVar18,bVar18));
                      temp_3f248b4d74 = temp_3f248b4d74 + 4;
                    }
                    for (uVar14 = uVar20 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                      *temp_3f248b4d74 = bVar18;
                      temp_3f248b4d74 = temp_3f248b4d74 + 1;
                    }
                    param_1 = param_1 + uVar20;
                  }
                }
              }
              if ((int)param_15_after_write < 1) {
                uVar20 = 0;
                break;
              }
              bVar18 = *(byte *)param_10;
              local_8 = (uint)bVar18;
              param_10 = param_10 + 1;
              if ((bVar18 & 0x80) == 0) {
                uVar20 = local_8 & 0x7f;
              }
              else {
                uVar20 = local_8 & 0x3f;
              }
            } while ((int)uVar20 <= (int)param_15_after_write);
          }
          uVar20 = uVar20 - param_15_after_write;
          if ((local_8 & 0x80) == 0) {
LAB_006d9c24:
            param_1 = (byte *)((int)param_1 + param_15_after_write);
            puVar22 = (uint *)param_10;
          }
          else {
            puVar22 = (uint *)param_10;
            if ((local_8 & 0x40) == 0) {
              if (0 < (int)param_15_after_write) {
                do {
                  param_5 = (uint)*(byte *)param_10;
                  param_10 = param_10 + 1;
                  puVar19 = param_11;
                  if (param_5 == param_9) {
                    param_5 = (uint)(byte)*(uint *)param_1;
                    puVar19 = param_8;
                  }
                  *param_1 = puVar19[param_5];
                  param_1 = (byte *)((int)param_1 + 1);
                  param_15_after_write = param_15_after_write - 1;
                  puVar22 = (uint *)param_10;
                } while (param_15_after_write != 0);
              }
            }
            else if (0 < (int)param_15_after_write) {
              param_5 = (uint)*(byte *)param_10;
              temp_3fa16318a4 = (uint *)param_1;
              puVar22 = (uint *)(param_10 + 1);
              if (param_5 == param_9) {
                do {
                  param_1 = (byte *)((int)temp_3fa16318a4 + 1);
                  param_15_after_write = param_15_after_write - 1;
                  *(undefined *)temp_3fa16318a4 = param_8[(byte)*temp_3fa16318a4];
                  temp_3fa16318a4 = (uint *)param_1;
                } while (param_15_after_write != 0);
              }
              else {
                bVar18 = param_11[param_5];
                temp_3f38b4ca47 = param_1;
                for (uVar14 = param_15_after_write >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *(uint *)temp_3f38b4ca47 =
                       /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                       CONCAT22(CONCAT11(bVar18,bVar18),CONCAT11(bVar18,bVar18));
                  temp_3f38b4ca47 = temp_3f38b4ca47 + 4;
                }
                for (uVar14 = param_15_after_write & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *temp_3f38b4ca47 = bVar18;
                  temp_3f38b4ca47 = temp_3f38b4ca47 + 1;
                }
                param_1 = param_1 + param_15_after_write;
              }
            }
          }
        }
      }
    }
    goto cf_common_join_006D9EAC;
  }
  param_1 = param_1 + param_2;
  goto LAB_006d9f11;
cf_common_join_006D8DA5:
  param_1 = (byte *)pAVar16;
  puVar22 = (uint *)param_10;
  if ((int)uVar14 < 1) goto cf_common_join_006D9EAC;
  uVar20 = uVar20 - uVar14;
  if ((local_8 & 0x80) == 0) {
    param_1 = (byte *)((int)pAVar16 + uVar14);
    goto cf_common_join_006D9EAC;
  }
  if ((local_8 & 0x40) != 0) {
    bVar18 = (byte)*(uint *)param_10;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar7 = CONCAT11(bVar18,bVar18);
    uVar15 = (uint)uVar7;
    puVar22 = (uint *)(param_10 + 1);
    if (3 < (int)uVar14) {
      if (((uint)pAVar16 & 1) != 0) {
        *(byte *)pAVar16 = bVar18;
        pAVar16 = (uint *)((int)pAVar16 + 1);
        uVar14 = uVar14 - 1;
      }
      if (((uint)pAVar16 & 2) != 0) {
        *(ushort *)pAVar16 = uVar7;
        pAVar16 = (uint *)((int)pAVar16 + 2);
        uVar14 = uVar14 - 2;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar15 = CONCAT22(uVar7,uVar7);
      while (3 < (int)uVar14) {
        *pAVar16 = uVar15;
        pAVar16 = pAVar16 + 1;
        uVar14 = uVar14 - 4;
      }
      param_1 = (byte *)pAVar16;
      if (uVar14 == 0) goto cf_common_join_006D9EAC;
    }
    bVar18 = (byte)uVar15;
    if ((char)uVar14 != '\x01') {
      if ((char)uVar14 != '\x02') {
        STField<byte>(pAVar16,2) = bVar18;
      }
      STField<byte>(pAVar16,1) = bVar18;
    }
    *(byte *)pAVar16 = bVar18;
    param_1 = (byte *)((int)pAVar16 + uVar14);
    goto cf_common_join_006D9EAC;
  }
  bVar18 = (byte)*(uint *)param_10;
  if ((bVar18 < (byte)param_9) || (local_14 < bVar18)) {
    if (3 < (int)uVar14) {
      if (((uint)pAVar16 & 1) != 0) {
        *(byte *)pAVar16 = (byte)*(uint *)param_10;
        param_10 = param_10 + 1;
        pAVar16 = (uint *)((int)pAVar16 + 1);
        uVar14 = uVar14 - 1;
      }
      if (((uint)pAVar16 & 2) != 0) {
        *(short *)pAVar16 = (short)*(uint *)param_10;
        param_10 = param_10 + 2;
        pAVar16 = (uint *)((int)pAVar16 + 2);
        uVar14 = uVar14 - 2;
      }
      while (3 < (int)uVar14) {
        uVar15 = *(uint *)param_10;
        param_10 = param_10 + 4;
        *pAVar16 = uVar15;
        pAVar16 = pAVar16 + 1;
        uVar14 = uVar14 - 4;
      }
      param_1 = (byte *)pAVar16;
      puVar22 = (uint *)param_10;
      if (uVar14 == 0) goto cf_common_join_006D9EAC;
    }
    if ((char)uVar14 != '\x01') {
      if ((char)uVar14 != '\x02') {
        STField<byte>(pAVar16,2) = ((byte *)param_10)[2];
      }
      STField<byte>(pAVar16,1) = ((byte *)param_10)[1];
    }
    *(byte *)pAVar16 = (byte)*(uint *)param_10;
    param_1 = (byte *)((int)pAVar16 + uVar14);
    puVar22 = (uint *)(param_10 + uVar14);
    goto cf_common_join_006D9EAC;
  }
  uVar15 = *(uint *)((uint)pAVar16 & 0xfffffffc);
  if (((uint)pAVar16 & 3) == 0) {
LAB_006d8e9b:
    cVar10 = (char)uVar14;
    while ('\x03' < cVar10) {
      uVar5 = *(uint *)param_10;
      pbVar16 = (byte *)(param_10 + 1);
      pbVar1 = (byte *)(param_10 + 2);
      pbVar2 = (byte *)(param_10 + 3);
      param_10 = param_10 + 4;
      *pAVar16 = CONCAT22(CONCAT11(param_8[(uint)CONCAT11(*pbVar16,(char)(uVar15 >> 8)) +
                                           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                           param_9 * -0x100],
                                   param_8[(uint)CONCAT11((byte)uVar5,(char)uVar15) +
                                           param_9 * -0x100]),
                          CONCAT11(param_8[(uint)CONCAT11(*pbVar2,(char)(uVar15 >> 0x18)) +
                                           param_9 * -0x100],
                                   param_8[(uint)CONCAT11(*pbVar1,(char)(uVar15 >> 0x10)) +
                                           param_9 * -0x100])) << 0x10 |
                 (uint)CONCAT11(param_8[(uint)CONCAT11(*pbVar16,(char)(uVar15 >> 8)) +
                                        param_9 * -0x100],
                                param_8[(uint)CONCAT11((byte)uVar5,(char)uVar15) + param_9 * -0x100]
                               );
      uVar15 = pAVar16[1];
      pAVar16 = pAVar16 + 1;
      cVar10 = cVar10 + -4;
    }
    uVar14 = STReplaceLowByte((uint32_t)(uVar14), (uint8_t)(cVar10));
    param_1 = (byte *)pAVar16;
    puVar22 = (uint *)param_10;
    if (cVar10 == '\0') goto cf_common_join_006D9EAC;
  }
  else {
    uVar15 = uVar15 >> (((byte)pAVar16 & 3) << 3);
    if (3 < uVar14) {
      if (((uint)pAVar16 & 1) != 0) {
        uVar14 = STReplaceLowByte((uint32_t)(uVar14), (uint8_t)((char)uVar14 + -1));
        param_10 = param_10 + 1;
        *(undefined *)pAVar16 = param_8[(uint)CONCAT11(bVar18,(char)uVar15) + param_9 * -0x100];
        uVar15 = uVar15 >> 8;
        pAVar16 = (uint *)((int)pAVar16 + 1);
      }
      if (((uint)pAVar16 & 2) != 0) {
        uVar5 = *(uint *)param_10;
        pbVar16 = (byte *)(param_10 + 1);
        uVar14 = STReplaceLowByte((uint32_t)(uVar14), (uint8_t)((char)uVar14 + -2));
        param_10 = param_10 + 2;
        *(ushort *)pAVar16 =
             /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
             CONCAT11(param_8[(uint)CONCAT11(*pbVar16,(char)(uVar15 >> 8)) + param_9 * -0x100],
                      param_8[(uint)CONCAT11((byte)uVar5,(char)uVar15) + param_9 * -0x100]);
        pAVar16 = (uint *)((int)pAVar16 + 2);
      }
      uVar15 = *pAVar16;
      goto LAB_006d8e9b;
    }
  }
  param_1 = (byte *)((int)pAVar16 + 1);
  *(undefined *)pAVar16 =
       /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
       param_8[(uint)CONCAT11((byte)*(uint *)param_10,(char)uVar15) + param_9 * -0x100];
  uVar13 = (undefined2)(uVar15 >> 8);
  puVar22 = (uint *)(param_10 + 1);
  if (uVar14 != 1) {
    if (((uint)param_1 & 3) == 0) {
      uVar13 = (undefined2)*(uint *)param_1;
    }
    puVar21 = (uint *)((int)pAVar16 + 2);
    *param_1 = param_8[(uint)CONCAT11(((byte *)param_10)[1],(char)uVar13) + param_9 * -0x100];
    uVar12 = (undefined1)((ushort)uVar13 >> 8);
    param_1 = (byte *)puVar21;
    puVar22 = (uint *)(param_10 + 2);
    if (uVar14 != 2) {
      if (((uint)puVar21 & 3) == 0) {
        uVar12 = (undefined1)*puVar21;
      }
      param_1 = (byte *)((int)pAVar16 + 3);
      *(undefined *)puVar21 =
           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
           param_8[(uint)CONCAT11(((byte *)param_10)[2],uVar12) + param_9 * -0x100];
      puVar22 = (uint *)(param_10 + 3);
    }
  }
  goto cf_common_join_006D9EAC;
cf_common_join_006D958E:
  puVar22 = (uint *)param_10;
  if ((int)uVar14 < 1) goto cf_common_join_006D9EAC;
  uVar20 = uVar20 - uVar14;
  if ((local_8 & 0x80) == 0) {
    param_1 = (byte *)((int)param_1 + uVar14);
    goto cf_common_join_006D9EAC;
  }
  if ((local_8 & 0x40) == 0) {
    if (3 < (int)uVar14) {
      if (((uint)param_1 & 1) != 0) {
        *param_1 = (byte)*(uint *)param_10;
        param_10 = param_10 + 1;
        param_1 = (byte *)((int)param_1 + 1);
        uVar14 = uVar14 - 1;
      }
      if (((uint)param_1 & 2) != 0) {
        *(short *)param_1 = (short)*(uint *)param_10;
        param_10 = param_10 + 2;
        param_1 = (byte *)((int)param_1 + 2);
        uVar14 = uVar14 - 2;
      }
      while (3 < (int)uVar14) {
        uVar15 = *(uint *)param_10;
        param_10 = param_10 + 4;
        *(uint *)param_1 = uVar15;
        param_1 = (byte *)((int)param_1 + 4);
        uVar14 = uVar14 - 4;
      }
      puVar22 = (uint *)param_10;
      if (uVar14 == 0) goto cf_common_join_006D9EAC;
    }
    if ((char)uVar14 != '\x01') {
      if ((char)uVar14 != '\x02') {
        STField<byte>(param_1,2) = ((byte *)param_10)[2];
      }
      STField<byte>(param_1,1) = ((byte *)param_10)[1];
    }
    *param_1 = (byte)*(uint *)param_10;
    param_1 = (byte *)((int)param_1 + uVar14);
    puVar22 = (uint *)(param_10 + uVar14);
    goto cf_common_join_006D9EAC;
  }
  bVar18 = (byte)*(uint *)param_10;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  uVar7 = CONCAT11(bVar18,bVar18);
  uVar15 = (uint)uVar7;
  puVar22 = (uint *)(param_10 + 1);
  if ((bVar18 < (byte)param_9) || (local_14 < bVar18)) {
    if (3 < (int)uVar14) {
      if (((uint)param_1 & 1) != 0) {
        *param_1 = bVar18;
        param_1 = (byte *)((int)param_1 + 1);
        uVar14 = uVar14 - 1;
      }
      if (((uint)param_1 & 2) != 0) {
        *(ushort *)param_1 = uVar7;
        param_1 = (byte *)((int)param_1 + 2);
        uVar14 = uVar14 - 2;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar15 = CONCAT22(uVar7,uVar7);
      while (3 < (int)uVar14) {
        *(uint *)param_1 = uVar15;
        param_1 = (byte *)((int)param_1 + 4);
        uVar14 = uVar14 - 4;
      }
      if (uVar14 == 0) goto cf_common_join_006D9EAC;
    }
    bVar18 = (byte)uVar15;
    if ((char)uVar14 != '\x01') {
      if ((char)uVar14 != '\x02') {
        STField<byte>(param_1,2) = bVar18;
      }
      STField<byte>(param_1,1) = bVar18;
    }
    *param_1 = bVar18;
    param_1 = (byte *)((int)param_1 + uVar14);
    goto cf_common_join_006D9EAC;
  }
  uVar15 = *(uint *)((uint)param_1 & 0xfffffffc);
  if (((uint)param_1 & 3) == 0) {
LAB_006d9621:
    cVar10 = (char)uVar14;
    while ('\x03' < cVar10) {
      *(uint *)param_1 =
           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
           CONCAT22(CONCAT11(param_8[uVar15 >> 8 & 0xff],param_8[uVar15 & 0xff]),
                    CONCAT11(param_8[uVar15 >> 0x18],param_8[uVar15 >> 0x10 & 0xff])) << 0x10 |
           (uint)CONCAT11(param_8[uVar15 >> 8 & 0xff],param_8[uVar15 & 0xff]);
      uVar15 = STField<uint>(param_1,4);
      param_1 = (byte *)((int)param_1 + 4);
      cVar10 = cVar10 + -4;
    }
    uVar14 = STReplaceLowByte((uint32_t)(uVar14), (uint8_t)(cVar10));
    if (cVar10 == '\0') goto cf_common_join_006D9EAC;
  }
  else {
    uVar15 = uVar15 >> (((byte)param_1 & 3) << 3);
    if (3 < uVar14) {
      if (((uint)param_1 & 1) != 0) {
        uVar14 = STReplaceLowByte((uint32_t)(uVar14), (uint8_t)((char)uVar14 + -1));
        puVar22 = (uint *)(param_10 + 2);
        *param_1 = param_8[uVar15 & 0xff];
        uVar15 = uVar15 >> 8;
        param_1 = (byte *)((int)param_1 + 1);
      }
      if (((uint)param_1 & 2) != 0) {
        uVar14 = STReplaceLowByte((uint32_t)(uVar14), (uint8_t)((char)uVar14 + -2));
        *(ushort *)param_1 = CONCAT11(param_8[uVar15 >> 8 & 0xff],param_8[uVar15 & 0xff]);
        param_1 = (byte *)((int)param_1 + 2);
      }
      uVar15 = *(uint *)param_1;
      goto LAB_006d9621;
    }
  }
  if ((char)uVar14 != '\x01') {
    if ((char)uVar14 != '\x02') {
      uVar5 = uVar15 >> 0x10;
      uVar15 = uVar15 & 0xffff;
      STField<undefined>(param_1,2) = param_8[uVar5 & 0xff];
    }
    STField<undefined>(param_1,1) = param_8[uVar15 >> 8 & 0xff];
  }
  *param_1 = param_8[uVar15 & 0xff];
  param_1 = (byte *)((int)param_1 + uVar14);
cf_common_join_006D9EAC:
  param_10 = (int)puVar22;
  bVar18 = (byte)local_8;
  iVar11 = (sVar4 - param_4) - param_6;
  if ((int)uVar20 < iVar11) {
    do {
      iVar11 = iVar11 - uVar20;
      if (((byte)local_8 & 0xc0) == 0x80) {
        param_10 = param_10 + uVar20;
      }
      bVar18 = *(byte *)param_10;
      local_8 = (uint)bVar18;
      uVar20 = local_8;
      iVar6 = param_10 + 1;
      if (((bVar18 & 0x80) != 0) && (uVar20 = local_8 & 0x3f, (bVar18 & 0x40) != 0)) {
        iVar6 = param_10 + 2;
      }
      param_10 = iVar6;
    } while ((int)uVar20 < iVar11);
  }
  if ((bVar18 & 0xc0) == 0x80) {
    param_10 = param_10 + iVar11;
  }
  param_1 = (byte *)((int)param_1 + (param_2 - param_6));
LAB_006d9f11:
  if (param_7 < 1) {
    return;
  }
  goto LAB_006d8b04;
}

