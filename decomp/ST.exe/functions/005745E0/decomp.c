
void __cdecl FUN_005745e0(AnonShape_005745E0_AF52CC75 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  AnonShape_006DDD50_309FA381 *pAVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined4 local_28;
  undefined4 *local_24;
  int local_20;
  undefined4 *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((*(short *)(param_2 + 2) != 0) &&
      (uVar2 = *(ushort *)((int)param_2 + 0x4e), (uVar2 & 0x4000) == 0)) &&
     (((uVar2 & 0x2000) == 0 || ((uVar2 & 0x1000) == 0)))) {
    *(undefined4 *)(param_1->field_044D + 4) = 0;
    do {
      iVar6 = param_1->field_044D;
      uVar7 = *(uint *)(iVar6 + 4);
      if (*(uint *)(iVar6 + 0xc) <= uVar7) goto cf_break_loop_00574651;
      piVar5 = (int *)(*(int *)(iVar6 + 8) * uVar7 + *(int *)(iVar6 + 0x1c));
      *(uint *)(iVar6 + 4) = uVar7 + 1;
      if (piVar5 == (int *)0x0) goto cf_break_loop_00574651;
    } while (param_2[10] != *piVar5);
    if (piVar5 == (int *)0x0) {
cf_break_loop_00574651:
      local_14 = (int)*(short *)((int)param_2 + 6);
      local_18 = (undefined4 *)(int)*(short *)(param_2 + 1);
      local_10 = (int)*(short *)(param_2 + 2);
      *(undefined2 *)(param_2 + 1) = 0;
      *(undefined2 *)((int)param_2 + 6) = 0;
      *(undefined2 *)(param_2 + 2) = 0;
      pAVar3 = DAT_0080760c;
      puVar1 = &DAT_0080760c->field_0140;
      *param_2 = DAT_0080760c->field_0140;
      *puVar1 = param_2;
      pAVar3->field_013C = pAVar3->field_013C + 1;
      FUN_006ddbe0((AnonShape_006DDBE0_9835BAB9 *)DAT_0080760c);
      DAT_0080760c->field_0124 = 3;
      FUN_006ddd50(DAT_0080760c);
      DAT_0080760c->field_0124 = 4;
      FUN_006ddd50(DAT_0080760c);
      pAVar3 = DAT_0080760c;
      DAT_0080760c->field_0140 = 0;
      pAVar3->field_013C = 0;
      *(undefined2 *)(param_2 + 1) = local_18._0_2_;
      *(undefined2 *)((int)param_2 + 6) = (undefined2)local_14;
      *(undefined2 *)(param_2 + 2) = (undefined2)local_10;
      local_24 = Library::DKW::LIB::FUN_006aac10
                           ((uint)param_1->field_0004 * (uint)param_1->field_0004);
      local_28 = param_2[10];
      local_10 = 0;
      local_c = 0;
      while( true ) {
        do {
          local_14 = 0;
          uVar7 = (uint)param_1->field_0004;
          local_8 = 0;
          if (uVar7 != 0) {
            do {
              iVar6 = uVar7 * local_10 + local_8;
              local_20 = uVar7 * local_c;
              uVar9 = 0;
              if (uVar7 != 0) {
                pcVar10 = (char *)(DAT_0080760c->field_0028 * iVar6 + DAT_0080760c->field_000C +
                                  local_20);
                do {
                  if (*pcVar10 != '\0') {
                    if (*pcVar10 == -1) {
                      local_14 = local_14 + 1;
                      uVar8 = uVar9 & 0x80000003;
                      if ((int)uVar8 < 0) {
                        uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
                      }
                      bVar4 = (&DAT_007ca6a4)[uVar8];
                    }
                    else {
                      uVar8 = uVar9 & 0x80000003;
                      if ((int)uVar8 < 0) {
                        uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
                      }
                      bVar4 = *(byte *)(uVar8 + 0x7ca6a8);
                    }
                    pbVar11 = (byte *)((int)local_24 +
                                      ((int)(uVar9 + ((int)uVar9 >> 0x1f & 3U)) >> 2) +
                                      ((int)(local_20 + (local_20 >> 0x1f & 3U)) >> 2) +
                                      (int)(uVar7 * iVar6) / 2);
                    *pbVar11 = *pbVar11 | bVar4;
                  }
                  uVar9 = uVar9 + 1;
                  pcVar10 = pcVar10 + 1;
                } while ((int)uVar9 < (int)(uint)param_1->field_0004);
              }
              local_8 = local_8 + 1;
              uVar7 = (uint)param_1->field_0004;
            } while (local_8 < (int)uVar7);
          }
          local_c = local_c + 1;
        } while (local_c < 2);
        local_10 = local_10 + 1;
        if (1 < local_10) break;
        local_c = 0;
      }
      local_18 = local_24;
      Library::DKW::TBL::FUN_006ae1c0((uint *)param_1->field_044D,&local_28);
      param_2[6] = local_18;
      return;
    }
    param_2[6] = piVar5[1];
  }
  return;
}

