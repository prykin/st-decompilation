#include "../../pseudocode_runtime.h"


undefined4 FUN_006b4b20(int *param_1,AnonShape_006B4B20_3D4F4412 *param_2,int param_3,byte param_4)

{
  byte bVar1;
  byte bVar2;
  AnonShape_006B4B20_3D4F4412 *pAVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  AnonShape_006B4B20_3D4F4412 *pAVar16;
  byte *pbVar17;
  int iVar18;
  byte *pbVar19;
  bool bVar20;
  short *local_3c;
  int local_34;
  byte *local_30;
  AnonShape_006B4B20_3D4F4412 *local_2c;
  int local_20;
  int local_1c;
  uint local_14;
  int local_10;
  int local_c;
  AnonShape_006B4B20_3D4F4412 *pAVar16_mg0;

  *param_1 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_3 == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = FUN_006b4fa0((int *)param_2);
  }
  pAVar3 = (AnonShape_006B4B20_3D4F4412 *)param_2->field_0004;
  uVar4 = param_2->field_0008;
  uVar15 = (uint)param_2->field_000E * (int)pAVar3 + 0x1f >> 3 & 0x1ffffffc;
  puVar5 = Library::DKW::LIB::MemAlloc((int)((int)&pAVar3->field_0x1 * uVar4 * 3) / 2 + 0x16);
  if (puVar5 == nullptr) {
    return 0xfffffffe;
  }
  pbVar6 = (byte *)((uVar4 - 1) * uVar15 + param_3);
  pbVar14 = (byte *)((int)puVar5 + 0x16);
  local_1c = -1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_2 = nullptr;
  local_20 = 0;
  local_14 = 0;
  iVar12 = 0;
  pAVar16_mg0 = nullptr;
  local_2c = pAVar3;
  if (0 < (int)uVar4) {
    do {
      pAVar16 = nullptr;
      while( true ) {
        bVar1 = *pbVar6;
        while (bVar1 == param_4) {
          if ((int)pAVar3 <= (int)pAVar16) goto LAB_006b4c1b;
          pbVar6 = pbVar6 + 1;
          pAVar16 = (AnonShape_006B4B20_3D4F4412 *)&pAVar16->field_0x1;
          bVar1 = *pbVar6;
        }
        if ((int)pAVar3 <= (int)pAVar16) break;
        if (local_1c == -1) {
          local_1c = local_14;
        }
        local_20 = local_14;
        if ((int)pAVar16 < (int)local_2c) {
          local_2c = pAVar16;
        }
        bVar1 = *pbVar6;
        for (; (bVar1 != param_4 && ((int)pAVar16 < (int)pAVar3));
            pAVar16 = (AnonShape_006B4B20_3D4F4412 *)&pAVar16->field_0x1) {
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
        }
        if ((int)param_2 < (int)pAVar16) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = pAVar16;
        }
      }
LAB_006b4c1b:
      pbVar6 = pbVar6 + -(int)(&pAVar3->field_0x0 + uVar15);
      local_14 = local_14 + 1;
      iVar12 = local_20;
      pAVar16_mg0 = param_2;
    } while ((int)local_14 < (int)uVar4);
  }
  local_c = (int)pAVar16_mg0 - (int)local_2c;
  if (local_1c == -1) {
    local_1c = 0;
    local_c = 0;
    cVar9 = '\0';
  }
  else {
    iVar12 = iVar12 + 1;
    iVar7 = iVar12 - local_1c;
    local_10 = (int)(iVar7 + (iVar7 >> 0x1f & 0xfU)) >> 4;
    if (7 < local_10) {
      local_10 = 7;
    }
    if (0xffff < (local_10 * local_c * 3) / 2) {
      local_10 = (int)(0x1fffe / (longlong)(local_c * 3));
    }
    local_3c = (short *)((int)puVar5 + 0x16);
    pbVar14 = (byte *)(local_3c + local_10);
    local_34 = 0;
    pbVar14[-0xffffffff00000002] = 0;
    pbVar14[-0xffffffff00000001] = 0;
    pbVar6 = &local_2c->field_0x0 + param_3 + ((uVar4 - local_1c) + -1) * uVar15;
    local_14 = 0;
    if (0 < iVar7) {
      do {
        iVar18 = 0;
        if (local_14 != 0) {
          uVar13 = local_14 & 0x8000000f;
          bVar20 = uVar13 == 0;
          if ((int)uVar13 < 0) {
            bVar20 = (uVar13 - 1 | 0xfffffff0) == 0xffffffff;
          }
          if ((bVar20) && (local_34 < local_10)) {
            *local_3c = (short)pbVar14 - ((short)puVar5 + 0x16);
            local_34 = local_34 + 1;
            local_3c = local_3c + 1;
          }
        }
        do {
          iVar10 = 0;
          local_30 = pbVar6;
          if (*pbVar6 == param_4) {
            do {
              if (local_c <= iVar18) break;
              pbVar17 = pbVar6 + 1;
              iVar10 = iVar10 + 1;
              pbVar6 = pbVar6 + 1;
              iVar18 = iVar18 + 1;
            } while (*pbVar17 == param_4);
            if (0x7f < iVar10) {
              uVar13 = (iVar10 - 1U) / 0x7f;
              pbVar17 = pbVar14;
              for (uVar11 = (iVar10 - 1U) / 0x1fc; uVar11 != 0; uVar11 = uVar11 - 1) {
                pbVar17[0] = 0x7f;
                pbVar17[1] = 0x7f;
                pbVar17[2] = 0x7f;
                pbVar17[3] = 0x7f;
                pbVar17 = pbVar17 + 4;
              }
              for (uVar11 = uVar13 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                *pbVar17 = 0x7f;
                pbVar17 = pbVar17 + 1;
              }
              pbVar14 = pbVar14 + uVar13;
              iVar10 = iVar10 + uVar13 * -0x7f;
            }
            local_30 = pbVar6;
            if (0 < iVar10) {
              *pbVar14 = (byte)iVar10;
              pbVar14 = pbVar14 + 1;
            }
          }
          uVar13 = 0;
          bVar20 = false;
          pbVar6 = local_30;
          bVar1 = param_4;
          if (local_c <= iVar18) break;
          do {
            bVar2 = *pbVar6;
            if (bVar2 == param_4) break;
            if (((bVar2 == bVar1) && (iVar18 < local_c + -1)) && (pbVar6[1] == bVar1)) {
              bVar20 = true;
              uVar13 = uVar13 - 1;
              break;
            }
            uVar13 = uVar13 + 1;
            pbVar6 = pbVar6 + 1;
            iVar18 = iVar18 + 1;
            bVar1 = bVar2;
          } while (iVar18 < local_c);
          if (0x3f < (int)uVar13) {
            uVar11 = (uVar13 - 1) / 0x3f;
            uVar13 = uVar13 + uVar11 * -0x3f;
            do {
              *pbVar14 = 0xbf;
              pbVar17 = local_30;
              pbVar19 = pbVar14 + 1;
              memmove(pbVar19, pbVar17, 0x3e); /* compiler REP MOVS byte copy */
              pbVar19 = pbVar19 + 0x3c;
              pbVar17 = pbVar17 + 0x3c;
              pbVar14 = pbVar14 + 0x40;
              local_30 = local_30 + 0x3f;
              uVar11 = uVar11 - 1;
              pbVar19[2] = pbVar17[2];
            } while (uVar11 != 0);
          }
          if (0 < (int)uVar13) {
            *pbVar14 = (byte)uVar13 | 0x80;
            pbVar17 = pbVar14 + 1;
            for (uVar11 = uVar13 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined4 *)pbVar17 = *(undefined4 *)local_30;
              local_30 = local_30 + 4;
              pbVar17 = pbVar17 + 4;
            }
            pbVar14 = pbVar14 + 1 + uVar13;
            for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
              *pbVar17 = *local_30;
              local_30 = local_30 + 1;
              pbVar17 = pbVar17 + 1;
            }
          }
          if (bVar20) {
            iVar18 = iVar18 + 2;
            iVar10 = 3;
            pbVar6 = pbVar6 + 2;
            if (iVar18 < local_c) {
              do {
                if (*pbVar6 != bVar1) break;
                iVar10 = iVar10 + 1;
                pbVar6 = pbVar6 + 1;
                iVar18 = iVar18 + 1;
              } while (iVar18 < local_c);
              if (0x3f < iVar10) {
                uVar13 = (iVar10 - 1U) / 0x3f;
                iVar10 = iVar10 + uVar13 * -0x3f;
                do {
                  *pbVar14 = 0xff;
                  pbVar14[1] = bVar1;
                  pbVar14 = pbVar14 + 2;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              if (iVar10 < 1) goto LAB_006b4ef4;
            }
            *pbVar14 = (byte)iVar10 | 0xc0;
            pbVar14[1] = bVar1;
            pbVar14 = pbVar14 + 2;
          }
LAB_006b4ef4:
        } while (iVar18 < local_c);
        pbVar6 = pbVar6 + -(local_c + uVar15);
        local_14 = local_14 + 1;
      } while ((int)local_14 < iVar7);
    }
    cVar9 = (char)local_10;
  }
  puVar5[1] = (uint)pAVar3;
  STField<char>(puVar5,0xd) = cVar9 << 2;
  puVar5[2] = uVar4;
  STField<undefined2>(puVar5,0xe) = STPiece<0,2>(local_2c);
  *puVar5 = (int)pbVar14 - (int)puVar5;
  *(undefined1 *)(puVar5 + 3) = 0x80;
  *(short *)(puVar5 + 4) = (short)local_1c;
  STField<undefined2>(puVar5,0x12) = (undefined2)local_c;
  *(short *)(puVar5 + 5) = (short)iVar12 - (short)local_1c;
  piVar8 = FUN_006bfb50((int *)puVar5,(int)pbVar14 - (int)puVar5);
  *param_1 = (int)piVar8;
  if (piVar8 == nullptr) {
    *param_1 = (int)puVar5;
  }
  return 0;
}

