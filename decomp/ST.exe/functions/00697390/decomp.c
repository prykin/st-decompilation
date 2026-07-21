
void __fastcall FUN_00697390(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  int local_60 [9];
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  puVar5 = *(undefined4 **)((int)param_1 + 0x584f);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  for (iVar2 = (*(uint *)((int)param_1 + 0x582f) & 0xfffffff) << 2; iVar2 != 0; iVar2 = iVar2 + -1)
  {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar5 = 0xff;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar4 = *(uint *)((int)param_1 + 0x582f);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  puVar5 = *(undefined4 **)((int)param_1 + 0x584b);
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  thunk_FUN_006948e0(param_1,*(int *)((int)param_1 + 0x5833));
  iVar2 = 0;
  do {
    local_10 = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (0 < *(int *)((int)param_1 + 0x582f)) {
      do {
        iVar6 = local_10;
        local_18 = thunk_FUN_00696400(param_1,local_10,(int)local_60);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_20 = iVar6 % *(int *)((int)param_1 + 0x5833);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_1c = iVar6 / *(int *)((int)param_1 + 0x5833);
        local_8 = 0;
        local_14 = 0;
        if (local_18 < 1) {
LAB_00697505:
          iVar1 = thunk_FUN_00698ca0(param_1,local_20,local_1c,iVar2,(int *)(local_3c + 3),
                                     (int *)(local_3c + 2),&local_2c);
          uVar4 = thunk_FUN_00695c10(param_1,iVar2,local_3c[2],local_3c[3],iVar1,local_2c);
          thunk_FUN_00695f70(param_1,uVar4,iVar6,iVar2);
        }
        else {
          local_c = local_60;
          do {
            iVar6 = *local_c;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_28 = (uint)*(short *)(*(int *)((int)param_1 + 0x584f) +
                                       (iVar2 * *(int *)((int)param_1 + 0x582f) + iVar6) * 2);
            if (-1 < (int)local_28) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_24 = iVar6 % *(int *)((int)param_1 + 0x5833);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              iVar1 = thunk_FUN_00696eb0(*(int **)((int)param_1 + 8),local_20,local_1c,local_24,
                                         iVar6 / *(int *)((int)param_1 + 0x5833),iVar2,0);
              iVar6 = local_8;
              if (iVar1 != 0) {
                bVar7 = local_8 == 1;
                local_3c[local_8] = local_28;
                if (bVar7) {
                  if (local_3c[0] != local_3c[1]) {
                    local_8 = 2;
                    goto LAB_006974d2;
                  }
                }
                else {
                  local_8 = iVar6 + 1;
                  if (local_8 == 2) break;
                }
              }
            }
            local_14 = local_14 + 1;
            local_c = local_c + 1;
          } while (local_14 < local_18);
          iVar6 = local_10;
          if (local_8 == 0) goto LAB_00697505;
LAB_006974d2:
          iVar6 = local_10;
          thunk_FUN_00695f70(param_1,local_3c[0],local_10,iVar2);
          if ((local_8 == 2) && (local_3c[0] != local_3c[1])) {
            uVar4 = local_3c[1];
            uVar3 = local_3c[0];
            if ((int)local_3c[0] < (int)local_3c[1]) {
              uVar4 = local_3c[0];
              uVar3 = local_3c[1];
            }
            thunk_FUN_006961b0(param_1,uVar4,uVar3,iVar2,1);
          }
        }
        local_10 = iVar6 + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      } while (local_10 < *(int *)((int)param_1 + 0x582f));
    }
    iVar2 = iVar2 + 1;
    if (5 < iVar2) {
      return;
    }
  } while( true );
}

