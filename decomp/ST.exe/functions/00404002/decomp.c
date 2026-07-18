
void __fastcall thunk_FUN_00697390(void *param_1)

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
  int aiStack_60 [9];
  uint auStack_3c [4];
  undefined4 uStack_2c;
  uint uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int *piStack_c;
  int iStack_8;
  
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
    iStack_10 = 0;
    if (0 < *(int *)((int)param_1 + 0x582f)) {
      do {
        iVar7 = iStack_10;
        iStack_18 = thunk_FUN_00696400(param_1,iStack_10,(int)aiStack_60);
        iStack_20 = iVar7 % *(int *)((int)param_1 + 0x5833);
        iStack_1c = iVar7 / *(int *)((int)param_1 + 0x5833);
        iStack_8 = 0;
        iStack_14 = 0;
        if (iStack_18 < 1) {
LAB_00697505:
          cVar1 = thunk_FUN_00698ca0(param_1,iStack_20,iStack_1c,iVar3,(int *)(auStack_3c + 3),
                                     (int *)(auStack_3c + 2),&uStack_2c);
          uVar5 = thunk_FUN_00695c10(param_1,iVar3,auStack_3c[2],auStack_3c[3],
                                     CONCAT31(extraout_var,cVar1),uStack_2c);
          thunk_FUN_00695f70(param_1,uVar5,iVar7,iVar3);
        }
        else {
          piStack_c = aiStack_60;
          do {
            iVar7 = *piStack_c;
            uStack_28 = (uint)*(short *)(*(int *)((int)param_1 + 0x584f) +
                                        (iVar3 * *(int *)((int)param_1 + 0x582f) + iVar7) * 2);
            if (-1 < (int)uStack_28) {
              iStack_24 = iVar7 % *(int *)((int)param_1 + 0x5833);
              iVar2 = thunk_FUN_00696eb0(*(int **)((int)param_1 + 8),iStack_20,iStack_1c,iStack_24,
                                         iVar7 / *(int *)((int)param_1 + 0x5833),iVar3,0);
              iVar7 = iStack_8;
              if (iVar2 != 0) {
                bVar8 = iStack_8 == 1;
                auStack_3c[iStack_8] = uStack_28;
                if (bVar8) {
                  if (auStack_3c[0] != auStack_3c[1]) {
                    iStack_8 = 2;
                    goto LAB_006974d2;
                  }
                }
                else {
                  iStack_8 = iVar7 + 1;
                  if (iStack_8 == 2) break;
                }
              }
            }
            iStack_14 = iStack_14 + 1;
            piStack_c = piStack_c + 1;
          } while (iStack_14 < iStack_18);
          iVar7 = iStack_10;
          if (iStack_8 == 0) goto LAB_00697505;
LAB_006974d2:
          iVar7 = iStack_10;
          thunk_FUN_00695f70(param_1,auStack_3c[0],iStack_10,iVar3);
          if ((iStack_8 == 2) && (auStack_3c[0] != auStack_3c[1])) {
            uVar5 = auStack_3c[1];
            uVar4 = auStack_3c[0];
            if ((int)auStack_3c[0] < (int)auStack_3c[1]) {
              uVar5 = auStack_3c[0];
              uVar4 = auStack_3c[1];
            }
            thunk_FUN_006961b0(param_1,uVar5,uVar4,iVar3,1);
          }
        }
        iStack_10 = iVar7 + 1;
      } while (iStack_10 < *(int *)((int)param_1 + 0x582f));
    }
    iVar3 = iVar3 + 1;
    if (5 < iVar3) {
      return;
    }
  } while( true );
}

