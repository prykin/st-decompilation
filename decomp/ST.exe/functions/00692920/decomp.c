
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00692920 parameter used as this of cMf32::RecGet @ 00692946 | 00692920 parameter used
   as this of cMf32::RecMemFree @ 00692A69

   [STPrototypeApplier] Propagated return.
   Evidence: 00692920 returns used as parameter 1 of FUN_006b4b20 @ 00691B46 | 00692920 returns used
   as parameter 1 of FUN_006b4b20 @ 00691DAB | 00692920 returns used as parameter 1 of FUN_006b4b20
   @ 00691FE9 */

AnonShape_006B4B20_3D4F4412 *
FUN_00692920(cMf32 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  AnonShape_006B4B20_3D4F4412 *pAVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ushort *local_10;
  int local_c;
  int local_8;

  puVar1 = param_3;
  pAVar2 = (AnonShape_006B4B20_3D4F4412 *)0x0;
  if (param_2 != (undefined4 *)0x0) {
    local_10 = cMf32::RecGet(param_1,1,"PAL_APP",(int *)0x0,1);
    pAVar2 = (AnonShape_006B4B20_3D4F4412 *)
             FUN_006b50c0((int)param_3,param_4,8,0x100,(undefined4 *)(local_10 + 0x14),1);
    local_8 = FUN_006b4fa0((int)pAVar2);
    if (param_5 == 0) {
      if (0 < param_4) {
        param_3 = (undefined4 *)param_4;
        puVar8 = param_2;
        do {
          param_2 = (undefined4 *)(param_4 + -1);
          puVar6 = puVar8;
          puVar7 = (undefined4 *)
                   (((uint)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                    (int)param_2 + local_8);
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
                 (((uint)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                  (int)param_2 + local_8);
        if (0 < (int)puVar1) {
          puVar5 = puVar3;
          puVar8 = puVar1;
          do {
            puVar8 = (undefined4 *)((int)puVar8 + -1);
            *puVar5 = *(undefined1 *)
                       (local_c + 0x37ac +
                       ((int)((uint)(byte)puVar5[(int)param_3 - (int)puVar3] * 0xf) >> 8) * 4);
            puVar5 = puVar5 + 1;
          } while (puVar8 != (undefined4 *)0x0);
        }
        param_3 = (undefined4 *)((int)param_3 + (int)puVar1);
        param_5 = param_5 + -1;
        param_4 = (int)param_2;
      } while (param_5 != 0);
    }
    cMf32::RecMemFree(param_1,(uint *)&local_10);
  }
  return pAVar2;
}

