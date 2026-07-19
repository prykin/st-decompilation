
void __fastcall thunk_FUN_006a0470(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  byte bStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iVar6 = **(int **)(param_1 + 8) * 0x28;
  *(int *)(param_1 + 0x5703) = iVar6;
  iVar2 = (*(int **)(param_1 + 8))[1] * 0x28;
  *(int *)(param_1 + 0x5707) = iVar2;
  puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(iVar6 * iVar2);
  uVar7 = *(int *)(param_1 + 0x5703) * *(int *)(param_1 + 0x5707);
  *(undefined4 **)(param_1 + 0x56ff) = puVar3;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iStack_10 = 0;
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  piVar4 = *(int **)(param_1 + 8);
  if (0 < *piVar4) {
    iStack_8 = 0;
    do {
      iVar2 = 0;
      iStack_c = 0;
      if (0 < piVar4[1]) {
        do {
          iVar6 = 0;
          do {
            piVar4 = *(int **)(param_1 + 8);
            iVar9 = (piVar4[1] * iVar6 + iStack_c) * *piVar4 + iStack_10;
            if (((*(short *)((int)piVar4 + (iVar9 * 3 + 6) * 2) != 0) &&
                (uVar1 = *(ushort *)((int)piVar4 + iVar9 * 6 + 0xc), (uVar1 & 0xf00) != 0)) &&
               (uVar1 != 0x1100)) {
              if ((uVar1 & 0x2000) == 0x2000) {
                uVar8 = (uVar1 & 0xf00) >> 8;
                bStack_14 = (byte)uVar1;
                pcVar5 = (char *)thunk_FUN_00692530((void *)(param_1 + 0x1c03),
                                                    (uint)(bStack_14 >> 4) * 0xf + -0xe +
                                                    (uint)(bStack_14 & 0xf),(iVar6 - uVar8) + 1,
                                                    uVar8);
                if (pcVar5 != (char *)0x0) {
                  uVar11 = *(undefined4 *)(param_1 + 0x5707);
                  iVar9 = *(int *)(param_1 + 0x5703);
                  iVar10 = *(int *)(param_1 + 0x56ff);
LAB_006a05f8:
                  thunk_FUN_006a2e50(iVar10,iStack_8,iVar2,iVar9,uVar11,pcVar5,0x28,0x28);
                }
              }
              else {
                uVar8 = uVar1 >> 8 & 0xf;
                pcVar5 = (char *)thunk_FUN_00692570((void *)(param_1 + 0x1c03),(uVar1 & 0xff) - 1,
                                                    (iVar6 - uVar8) + 1,uVar8);
                if (pcVar5 != (char *)0x0) {
                  iVar9 = *(int *)(param_1 + 0x5703);
                  uVar11 = *(undefined4 *)(param_1 + 0x5707);
                  iVar10 = *(int *)(param_1 + 0x56ff);
                  goto LAB_006a05f8;
                }
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < 6);
          iStack_c = iStack_c + 1;
          iVar2 = iVar2 + 0x28;
        } while (iStack_c < *(int *)(*(int *)(param_1 + 8) + 4));
      }
      piVar4 = *(int **)(param_1 + 8);
      iStack_10 = iStack_10 + 1;
      iStack_8 = iStack_8 + 0x28;
    } while (iStack_10 < *piVar4);
  }
  return;
}

