
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004AF080 -> 006B1190 @ 004AF371 | 004AF080 -> 006B1190 @ 004AF3C6 | 004AFFA0 ->
   006B1190 @ 004AFFCC | 004AFFA0 -> 006B1190 @ 004B0159 | 004B0250 -> 006B1190 @ 004B05D5 |
   004B0250 -> 006B1190 @ 004B062A | 004B0250 -> 006B1190 @ 004B09CB | 004B1120 -> 006B1190 @
   004B11A8 | 004B1120 -> 006B1190 @ 004B12BE | 004B1690 -> 006B1190 @ 004B1B19 | 004B1690 ->
   006B1190 @ 004B1B65 | 004B1FB0 -> 006B1190 @ 004B207D | 004B1FB0 -> 006B1190 @ 004B21F2 |
   004B31C0 -> 006B1190 @ 004B3200 | 004B31C0 -> 006B1190 @ 004B3258 | 004B33D0 -> 006B1190 @
   004B368B | 004B33D0 -> 006B1190 @ 004B389E | 004B33D0 -> 006B1190 @ 004B47AD | 004B33D0 ->
   006B1190 @ 004B4823 | 004D8530 -> 006B1190 @ 004D854E | 004D8530 -> 006B1190 @ 004D8568 |
   004D85E0 -> 006B1190 @ 004D8600 | 004D85E0 -> 006B1190 @ 004D8649 | 004DE820 -> 006B1190 @
   004DE96C | 00540DC0 -> 006B1190 @ 00540EDF | 00540DC0 -> 006B1190 @ 00540F08 | 00541030 ->
   006B1190 @ 0054108B | 00541030 -> 006B1190 @ 005410D9 | 006E4C90 -> 006B1190 @ 006E4CAA */

int __fastcall FUN_006b1190(DArrayTy *groupContent,undefined4 *param_2)

{
  dword dVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;

  if (groupContent->iteratorIndex < groupContent->count) {
    uVar3 = groupContent->elementSize;
    puVar4 = (undefined4 *)(uVar3 * groupContent->iteratorIndex + (int)groupContent->data);
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)param_2 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    dVar1 = groupContent->iteratorIndex;
    groupContent->iteratorIndex = dVar1 + 1;
    return dVar1;
  }
  return -4;
}

