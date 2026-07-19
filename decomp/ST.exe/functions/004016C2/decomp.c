
void __cdecl thunk_FUN_005745e0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  void *pvVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  int iStack_20;
  undefined4 *puStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  if (((*(short *)(param_2 + 2) != 0) &&
      (uVar2 = *(ushort *)((int)param_2 + 0x4e), (uVar2 & 0x4000) == 0)) &&
     (((uVar2 & 0x2000) == 0 || ((uVar2 & 0x1000) == 0)))) {
    *(undefined4 *)(*(int *)(param_1 + 0x44d) + 4) = 0;
    do {
      iVar6 = *(int *)(param_1 + 0x44d);
      uVar7 = *(uint *)(iVar6 + 4);
      if (*(uint *)(iVar6 + 0xc) <= uVar7) goto LAB_00574651;
      piVar5 = (int *)(*(int *)(iVar6 + 8) * uVar7 + *(int *)(iVar6 + 0x1c));
      *(uint *)(iVar6 + 4) = uVar7 + 1;
      if (piVar5 == (int *)0x0) goto LAB_00574651;
    } while (param_2[10] != *piVar5);
    if (piVar5 == (int *)0x0) {
LAB_00574651:
      iStack_14 = (int)*(short *)((int)param_2 + 6);
      puStack_18 = (undefined4 *)(int)*(short *)(param_2 + 1);
      iStack_10 = (int)*(short *)(param_2 + 2);
      *(undefined2 *)(param_2 + 1) = 0;
      *(undefined2 *)((int)param_2 + 6) = 0;
      *(undefined2 *)(param_2 + 2) = 0;
      pvVar3 = DAT_0080760c;
      puVar1 = (undefined4 *)((int)DAT_0080760c + 0x140);
      *param_2 = *(undefined4 *)((int)DAT_0080760c + 0x140);
      *puVar1 = param_2;
      *(int *)((int)pvVar3 + 0x13c) = *(int *)((int)pvVar3 + 0x13c) + 1;
      FUN_006ddbe0((int)DAT_0080760c);
      *(undefined4 *)((int)DAT_0080760c + 0x124) = 3;
      FUN_006ddd50(DAT_0080760c);
      *(undefined4 *)((int)DAT_0080760c + 0x124) = 4;
      FUN_006ddd50(DAT_0080760c);
      pvVar3 = DAT_0080760c;
      *(undefined4 *)((int)DAT_0080760c + 0x140) = 0;
      *(undefined4 *)((int)pvVar3 + 0x13c) = 0;
      *(undefined2 *)(param_2 + 1) = puStack_18._0_2_;
      *(undefined2 *)((int)param_2 + 6) = (undefined2)iStack_14;
      *(undefined2 *)(param_2 + 2) = (undefined2)iStack_10;
      puStack_24 = Library::DKW::LIB::FUN_006aac10
                             ((uint)*(byte *)(param_1 + 4) * (uint)*(byte *)(param_1 + 4));
      uStack_28 = param_2[10];
      iStack_10 = 0;
      iStack_c = 0;
      while( true ) {
        do {
          iStack_14 = 0;
          uVar7 = (uint)*(byte *)(param_1 + 4);
          iStack_8 = 0;
          if (uVar7 != 0) {
            do {
              iVar6 = uVar7 * iStack_10 + iStack_8;
              iStack_20 = uVar7 * iStack_c;
              uVar9 = 0;
              if (uVar7 != 0) {
                pcVar10 = (char *)(*(int *)((int)DAT_0080760c + 0x28) * iVar6 +
                                   *(int *)((int)DAT_0080760c + 0xc) + iStack_20);
                do {
                  if (*pcVar10 != '\0') {
                    if (*pcVar10 == -1) {
                      iStack_14 = iStack_14 + 1;
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
                    pbVar11 = (byte *)((int)puStack_24 +
                                      ((int)(uVar9 + ((int)uVar9 >> 0x1f & 3U)) >> 2) +
                                      ((int)(iStack_20 + (iStack_20 >> 0x1f & 3U)) >> 2) +
                                      (int)(uVar7 * iVar6) / 2);
                    *pbVar11 = *pbVar11 | bVar4;
                  }
                  uVar9 = uVar9 + 1;
                  pcVar10 = pcVar10 + 1;
                } while ((int)uVar9 < (int)(uint)*(byte *)(param_1 + 4));
              }
              iStack_8 = iStack_8 + 1;
              uVar7 = (uint)*(byte *)(param_1 + 4);
            } while (iStack_8 < (int)uVar7);
          }
          iStack_c = iStack_c + 1;
        } while (iStack_c < 2);
        iStack_10 = iStack_10 + 1;
        if (1 < iStack_10) break;
        iStack_c = 0;
      }
      puStack_18 = puStack_24;
      Library::DKW::TBL::FUN_006ae1c0(*(uint **)(param_1 + 0x44d),&uStack_28);
      param_2[6] = puStack_18;
      return;
    }
    param_2[6] = piVar5[1];
  }
  return;
}

