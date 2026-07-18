
void __fastcall FUN_00697390(void *param_1)

{
  char cVar1;
  int iVar2;
  undefined3 extraout_var;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  bool bVar8;
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
  
  puVar6 = *(undefined4 **)((int)param_1 + 0x584f);
  for (iVar3 = (*(uint *)((int)param_1 + 0x582f) & 0xfffffff) << 2; iVar3 != 0; iVar3 = iVar3 + -1)
  {
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar6 = 0xff;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  uVar5 = *(uint *)((int)param_1 + 0x582f);
  puVar6 = *(undefined4 **)((int)param_1 + 0x584b);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  thunk_FUN_006948e0(param_1,*(int *)((int)param_1 + 0x5833));
  iVar3 = 0;
  do {
    local_10 = 0;
    if (0 < *(int *)((int)param_1 + 0x582f)) {
      do {
        iVar7 = local_10;
        local_18 = thunk_FUN_00696400(param_1,local_10,(int)local_60);
        local_20 = iVar7 % *(int *)((int)param_1 + 0x5833);
        local_1c = iVar7 / *(int *)((int)param_1 + 0x5833);
        local_8 = 0;
        local_14 = 0;
        if (local_18 < 1) {
LAB_00697505:
          cVar1 = thunk_FUN_00698ca0(param_1,local_20,local_1c,iVar3,(int *)(local_3c + 3),
                                     (int *)(local_3c + 2),&local_2c);
          uVar5 = thunk_FUN_00695c10(param_1,iVar3,local_3c[2],local_3c[3],
                                     CONCAT31(extraout_var,cVar1),local_2c);
          thunk_FUN_00695f70(param_1,uVar5,iVar7,iVar3);
        }
        else {
          local_c = local_60;
          do {
            iVar7 = *local_c;
            local_28 = (uint)*(short *)(*(int *)((int)param_1 + 0x584f) +
                                       (iVar3 * *(int *)((int)param_1 + 0x582f) + iVar7) * 2);
            if (-1 < (int)local_28) {
              local_24 = iVar7 % *(int *)((int)param_1 + 0x5833);
              iVar2 = thunk_FUN_00696eb0(*(int **)((int)param_1 + 8),local_20,local_1c,local_24,
                                         iVar7 / *(int *)((int)param_1 + 0x5833),iVar3,0);
              iVar7 = local_8;
              if (iVar2 != 0) {
                bVar8 = local_8 == 1;
                local_3c[local_8] = local_28;
                if (bVar8) {
                  if (local_3c[0] != local_3c[1]) {
                    local_8 = 2;
                    goto LAB_006974d2;
                  }
                }
                else {
                  local_8 = iVar7 + 1;
                  if (local_8 == 2) break;
                }
              }
            }
            local_14 = local_14 + 1;
            local_c = local_c + 1;
          } while (local_14 < local_18);
          iVar7 = local_10;
          if (local_8 == 0) goto LAB_00697505;
LAB_006974d2:
          iVar7 = local_10;
          thunk_FUN_00695f70(param_1,local_3c[0],local_10,iVar3);
          if ((local_8 == 2) && (local_3c[0] != local_3c[1])) {
            uVar5 = local_3c[1];
            uVar4 = local_3c[0];
            if ((int)local_3c[0] < (int)local_3c[1]) {
              uVar5 = local_3c[0];
              uVar4 = local_3c[1];
            }
            thunk_FUN_006961b0(param_1,uVar5,uVar4,iVar3,1);
          }
        }
        local_10 = iVar7 + 1;
      } while (local_10 < *(int *)((int)param_1 + 0x582f));
    }
    iVar3 = iVar3 + 1;
    if (5 < iVar3) {
      return;
    }
  } while( true );
}

