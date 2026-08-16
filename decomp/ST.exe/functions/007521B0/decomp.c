#include "../../pseudocode_runtime.h"


/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:5: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=00752418 MOV ECX,dword ptr [EBP + 0x1c];
   first-use mask */

undefined4
FUN_007521b0(int *param_1,AnonShape_006B4B20_3D4F4412 *param_2,uint param_3,int param_4,int param_5,
            byte param_6)

{
  byte bVar1;
  AnonShape_006B4B20_3D4F4412 *pAVar2;
  uint uVar3;
  bool bVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  AnonShape_006B4B20_3D4F4412 *pAVar14;
  byte *pbVar15;
  int iVar16;
  byte *pbVar17;
  short *local_40;
  int local_34;
  int local_30;
  AnonShape_006B4B20_3D4F4412 *local_28;
  int local_24;
  int local_1c;
  byte *local_18;
  uint local_14;
  uint local_10;
  int local_c;
  AnonShape_006B4B20_3D4F4412 *pAVar14_mg0;

  *param_1 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_3 == 0) {
    param_3 = FUN_006b4fa0((int *)param_2);
  }
  pAVar2 = (AnonShape_006B4B20_3D4F4412 *)param_2->field_0004;
  uVar3 = param_2->field_0008;
  uVar13 = (uint)param_2->field_000E * (int)pAVar2 + 0x1f >> 3 & 0x1ffffffc;
  puVar5 = Library::DKW::LIB::MemAlloc((int)((int)&pAVar2->field_0x1 * uVar3 * 3) / 2 + 0x16);
  if (puVar5 == nullptr) {
    return 0xfffffffe;
  }
  pbVar12 = (byte *)((int)puVar5 + 0x16);
  local_1c = -1;
  pbVar6 = (byte *)((uVar3 - 1) * uVar13 + param_3);
  auto param_2_after_write = nullptr; /* compiler stack-slot lifetime split */
  local_30 = 0;
  local_14 = 0;
  pAVar14_mg0 = nullptr;
  local_28 = pAVar2;
  if (0 < (int)uVar3) {
    do {
      pAVar14 = nullptr;
      while( true ) {
        bVar1 = *pbVar6;
        while (bVar1 == param_6) {
          if ((int)pAVar2 <= (int)pAVar14) goto LAB_007522a2;
          pbVar6 = pbVar6 + 1;
          pAVar14 = (AnonShape_006B4B20_3D4F4412 *)&pAVar14->field_0x1;
          bVar1 = *pbVar6;
        }
        if ((int)pAVar2 <= (int)pAVar14) break;
        if (local_1c == -1) {
          local_1c = local_14;
        }
        local_30 = local_14;
        if ((int)pAVar14 < (int)local_28) {
          local_28 = pAVar14;
        }
        bVar1 = *pbVar6;
        for (; (bVar1 != param_6 && ((int)pAVar14 < (int)pAVar2));
            pAVar14 = (AnonShape_006B4B20_3D4F4412 *)&pAVar14->field_0x1) {
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
        }
        if ((int)param_2_after_write < (int)pAVar14) {
          param_2_after_write = pAVar14;
        }
      }
LAB_007522a2:
      pbVar6 = pbVar6 + -(int)(&pAVar2->field_0x0 + uVar13);
      local_14 = local_14 + 1;
      pAVar14_mg0 = param_2_after_write;
    } while ((int)local_14 < (int)uVar3);
  }
  local_c = (int)pAVar14_mg0 - (int)local_28;
  if (local_1c == -1) {
    local_1c = 0;
    local_c = 0;
    local_24 = 0;
  }
  else {
    local_30 = local_30 + 1;
    iVar10 = local_30 - local_1c;
    local_24 = (int)(iVar10 + (iVar10 >> 0x1f & 0xfU)) >> 4;
    if (7 < local_24) {
      local_24 = 7;
    }
    if (0xffff < (local_24 * local_c * 3) / 2) {
      local_24 = (int)(0x1fffe / (longlong)(local_c * 3));
    }
    local_40 = (short *)((int)puVar5 + 0x16);
    local_34 = 0;
    local_14 = 0;
    pbVar12 = (byte *)(local_40 + local_24);
    pbVar12[-0xffffffff00000002] = 0;
    pbVar12[-0xffffffff00000001] = 0;
    pbVar6 = &local_28->field_0x0 + param_3 + ((uVar3 - local_1c) + -1) * uVar13;
    if (0 < iVar10) {
      do {
        iVar16 = 0;
        if (local_14 != 0) {
          uVar7 = local_14 & 0x8000000f;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
          }
          if ((uVar7 == 0) && (local_34 < local_24)) {
            local_34 = local_34 + 1;
            *local_40 = (short)pbVar12 - ((short)puVar5 + 0x16);
            local_40 = local_40 + 1;
          }
        }
        do {
          iVar8 = 0;
          local_18 = pbVar6;
          if (*pbVar6 == param_6) {
            do {
              if (local_c <= iVar16) break;
              pbVar15 = pbVar6 + 1;
              iVar8 = iVar8 + 1;
              pbVar6 = pbVar6 + 1;
              iVar16 = iVar16 + 1;
            } while (*pbVar15 == param_6);
            if (0x7f < iVar8) {
              uVar7 = (iVar8 - 1U) / 0x7f;
              pbVar15 = pbVar12;
              for (uVar11 = (iVar8 - 1U) / 0x1fc; uVar11 != 0; uVar11 = uVar11 - 1) {
                pbVar15[0] = 0x7f;
                pbVar15[1] = 0x7f;
                pbVar15[2] = 0x7f;
                pbVar15[3] = 0x7f;
                pbVar15 = pbVar15 + 4;
              }
              for (uVar11 = uVar7 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                *pbVar15 = 0x7f;
                pbVar15 = pbVar15 + 1;
              }
              pbVar12 = pbVar12 + uVar7;
              iVar8 = iVar8 + uVar7 * -0x7f;
            }
            local_18 = pbVar6;
            if (0 < iVar8) {
              *pbVar12 = (byte)iVar8;
              pbVar12 = pbVar12 + 1;
            }
          }
          pbVar6 = local_18;
          if (local_c <= iVar16) break;
          bVar4 = false;
          param_3 = 0;
          local_10 = (uint)param_6;
          do {
            if ((*pbVar6 == param_6) ||
               ((uVar7 = (uint)*pbVar6, param_4 <= (int)uVar7 && ((int)uVar7 < param_4 + param_5))))
            break;
            if ((uVar7 == local_10) && ((iVar16 < local_c + -1 && (pbVar6[1] == local_10)))) {
              bVar4 = true;
              break;
            }
            param_3 = param_3 + 1;
            pbVar6 = pbVar6 + 1;
            iVar16 = iVar16 + 1;
            local_10 = uVar7;
          } while (iVar16 < local_c);
          if (param_3 == 0) {
            param_3 = 1;
            if (param_5 == 1) {
              bVar1 = *pbVar6;
              pbVar6 = pbVar6 + 1;
              iVar16 = iVar16 + 1;
              if (iVar16 < local_c) {
                do {
                  if (*pbVar6 != bVar1) break;
                  param_3 = param_3 + 1;
                  pbVar6 = pbVar6 + 1;
                  iVar16 = iVar16 + 1;
                } while (iVar16 < local_c);
                if (0x3f < (int)param_3) {
                  uVar7 = (param_3 - 1) / 0x3f;
                  param_3 = param_3 + uVar7 * -0x3f;
                  do {
                    *pbVar12 = 0xff;
                    pbVar12[1] = bVar1;
                    pbVar12 = pbVar12 + 2;
                    uVar7 = uVar7 - 1;
                  } while (uVar7 != 0);
                }
                if ((int)param_3 < 1) goto cf_continue_loop_007525E9;
              }
              *pbVar12 = (byte)param_3 | 0xc0;
              pbVar12[1] = bVar1;
              pbVar12 = pbVar12 + 2;
            }
            else {
              param_3 = 0;
              pbVar15 = pbVar6;
              if (local_c <= iVar16) break;
              do {
                if (((int)(uint)*pbVar15 < param_4) || (param_4 + param_5 <= (int)(uint)*pbVar15))
                break;
                param_3 = param_3 + 1;
                pbVar15 = pbVar15 + 1;
                iVar16 = iVar16 + 1;
              } while (iVar16 < local_c);
              local_18 = pbVar6;
              if (0x3f < (int)param_3) {
                uVar7 = (param_3 - 1) / 0x3f;
                param_3 = param_3 + uVar7 * -0x3f;
                do {
                  *pbVar12 = 0xbf;
                  pbVar6 = local_18;
                  pbVar17 = pbVar12 + 1;
                  memmove(pbVar17, pbVar6, 0x3e); /* compiler REP MOVS byte copy */
                  pbVar17 = pbVar17 + 0x3c;
                  pbVar6 = pbVar6 + 0x3c;
                  iVar8 = 0;
                  pbVar12 = pbVar12 + 0x40;
                  local_18 = local_18 + 0x3f;
                  uVar7 = uVar7 - 1;
                  pbVar17[2] = pbVar6[2];
                } while (uVar7 != 0);
              }
              pbVar6 = pbVar15;
              if (0 < (int)param_3) {
                *pbVar12 = (byte)param_3 | 0x80;
                pbVar15 = pbVar12 + 1;
                for (uVar7 = param_3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pbVar15 = *(undefined4 *)local_18;
                  local_18 = local_18 + 4;
                  pbVar15 = pbVar15 + 4;
                }
                pbVar12 = pbVar12 + 1 + param_3;
                for (uVar7 = param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *pbVar15 = *local_18;
                  local_18 = local_18 + 1;
                  pbVar15 = pbVar15 + 1;
                }
              }
            }
          }
          else {
            if (bVar4) {
              param_3 = param_3 - 1;
            }
            if (0x3f < (int)param_3) {
              uVar7 = (param_3 - 1) / 0x3f;
              param_3 = param_3 + uVar7 * -0x3f;
              do {
                *pbVar12 = 0xbf;
                pbVar15 = local_18;
                pbVar17 = pbVar12 + 1;
                memmove(pbVar17, pbVar15, 0x3e); /* compiler REP MOVS byte copy */
                pbVar17 = pbVar17 + 0x3c;
                pbVar15 = pbVar15 + 0x3c;
                pbVar12 = pbVar12 + 0x40;
                local_18 = local_18 + 0x3f;
                uVar7 = uVar7 - 1;
                pbVar17[2] = pbVar15[2];
              } while (uVar7 != 0);
            }
            if (0 < (int)param_3) {
              *pbVar12 = (byte)param_3 | 0x80;
              pbVar15 = pbVar12 + 1;
              for (uVar7 = param_3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined4 *)pbVar15 = *(undefined4 *)local_18;
                local_18 = local_18 + 4;
                pbVar15 = pbVar15 + 4;
              }
              pbVar12 = pbVar12 + 1 + param_3;
              for (uVar7 = param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *pbVar15 = *local_18;
                local_18 = local_18 + 1;
                pbVar15 = pbVar15 + 1;
              }
            }
            if (bVar4) {
              iVar16 = iVar16 + 2;
              iVar8 = 3;
              pbVar6 = pbVar6 + 2;
              if (iVar16 < local_c) {
                do {
                  if (*pbVar6 != local_10) break;
                  iVar8 = iVar8 + 1;
                  pbVar6 = pbVar6 + 1;
                  iVar16 = iVar16 + 1;
                } while (iVar16 < local_c);
                if (0x3f < iVar8) {
                  uVar7 = (iVar8 - 1U) / 0x3f;
                  iVar8 = iVar8 + uVar7 * -0x3f;
                  do {
                    *pbVar12 = 0xff;
                    pbVar12[1] = (byte)local_10;
                    pbVar12 = pbVar12 + 2;
                    uVar7 = uVar7 - 1;
                  } while (uVar7 != 0);
                }
                if (iVar8 < 1) goto cf_continue_loop_007525E9;
              }
              *pbVar12 = (byte)iVar8 | 0xc0;
              pbVar12[1] = (byte)local_10;
              pbVar12 = pbVar12 + 2;
            }
          }
cf_continue_loop_007525E9:
        } while (iVar16 < local_c);
        pbVar6 = pbVar6 + -(local_c + uVar13);
        local_14 = local_14 + 1;
      } while ((int)local_14 < iVar10);
    }
  }
  puVar5[1] = (uint)pAVar2;
  puVar5[2] = uVar3;
  STField<byte>(puVar5,0xd) = (param_5 == 1) + 1U | (char)local_24 << 2;
  STField<undefined2>(puVar5,0x12) = (undefined2)local_c;
  *puVar5 = (int)pbVar12 - (int)puVar5;
  *(undefined1 *)(puVar5 + 3) = 0x80;
  STField<undefined2>(puVar5,0xe) = STPiece<0,2>(local_28);
  *(short *)(puVar5 + 4) = (short)local_1c;
  *(short *)(puVar5 + 5) = (short)local_30 - (short)local_1c;
  piVar9 = FUN_006bfb50((int *)puVar5,(int)pbVar12 - (int)puVar5);
  *param_1 = (int)piVar9;
  if (piVar9 == nullptr) {
    *param_1 = (int)puVar5;
  }
  return 0;
}

