
int thunk_FUN_00692920(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                      int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ushort *puStack_10;
  int iStack_c;
  int iStack_8;
  
  puVar1 = param_3;
  iVar2 = 0;
  if (param_2 != (undefined4 *)0x0) {
    puStack_10 = FUN_006f1ce0(1,s_PAL_APP_007d59d4,(int *)0x0,1);
    iVar2 = FUN_006b50c0((int)param_3,param_4,8,0x100,(undefined4 *)(puStack_10 + 0x14),1);
    iStack_8 = FUN_006b4fa0(iVar2);
    if (param_5 == 0) {
      if (0 < param_4) {
        param_3 = (undefined4 *)param_4;
        puVar8 = param_2;
        do {
          param_2 = (undefined4 *)(param_4 + -1);
          puVar6 = puVar8;
          puVar7 = (undefined4 *)
                   (((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc)
                    * (int)param_2 + iStack_8);
          for (uVar4 = (uint)puVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          for (uVar4 = (uint)puVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          param_3 = (undefined4 *)((int)param_3 + -1);
          puVar8 = (undefined4 *)((int)puVar8 + (int)puVar1);
          param_4 = (int)param_2;
        } while (param_3 != (undefined4 *)0x0);
      }
    }
    else if (0 < param_4) {
      param_3 = param_2;
      param_5 = param_4;
      do {
        param_2 = (undefined4 *)(param_4 + -1);
        puVar3 = (undefined1 *)
                 (((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                  (int)param_2 + iStack_8);
        if (0 < (int)puVar1) {
          puVar5 = puVar3;
          puVar8 = puVar1;
          do {
            puVar8 = (undefined4 *)((int)puVar8 + -1);
            *puVar5 = *(undefined1 *)
                       (iStack_c + 0x37ac +
                       ((int)((uint)(byte)puVar5[(int)param_3 - (int)puVar3] * 0xf) >> 8) * 4);
            puVar5 = puVar5 + 1;
          } while (puVar8 != (undefined4 *)0x0);
        }
        param_3 = (undefined4 *)((int)param_3 + (int)puVar1);
        param_5 = param_5 + -1;
        param_4 = (int)param_2;
      } while (param_5 != 0);
    }
    FUN_006f20e0((uint *)&puStack_10);
  }
  return iVar2;
}

