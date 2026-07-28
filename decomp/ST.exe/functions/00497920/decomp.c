
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (47), none consume AL/AX, and every RET path defines full EAX; sites=0040AE40 @ 0040B0E7
   -> TEST TEST EAX,EAX | 0040AE40 @ 0040B147 -> TEST TEST EAX,EAX | 0040AE40 @ 0040B1B4 -> TEST
   TEST EAX,EAX | 0040AE40 @ 0040B210 -> TEST TEST EAX,EAX | 0040AE40 @ 0040B297 -> TEST TEST
   EAX,EAX | 0040AE40 @ 0040B2F6 -> TEST TEST EAX,EAX | 0040AE40 @ 0040B359 -> TEST TEST EAX,EAX |
   0040AE40 @ 0040B3BA -> TEST TEST EAX,EAX | 0040AE40 @ 0040B419 -> TEST TEST EAX,EAX | 0040AE40 @
   0040B470 -> TEST TEST EAX,EAX | 0040AE40 @ 0040B6C8 -> TEST TEST EAX,EAX | 0040BC90 @ 0040BDD6 ->
   TEST TEST EAX,EAX | 0040C080 @ 0040C4BA -> TEST TEST EAX,EAX | 0040CE20 @ 0040CF6B -> TEST TEST
   EAX,EAX | 0040CE20 @ 0040CF8A -> TEST TEST EAX,EAX | 0040CE20 @ 0040D06A -> TEST TEST EAX,EAX |
   0040CE20 @ 0040D089 -> TEST TEST EAX,EAX | 0040CE20 @ 0040D0A9 -> TEST TEST EAX,EAX | 0040CE20 @
   0040D0C7 -> TEST TEST EAX,EAX | 0040CE20 @ 0040D0E6 -> TEST TEST EAX,EAX | 0040CE20 @ 0040D104 ->
   TEST TEST EAX,EAX | 0040CE20 @ 0040D1DD -> TEST TEST EAX,EAX | 0040CE20 @ 0040D1FD -> TEST TEST
   EAX,EAX | 0040CE20 @ 0040D21E -> TEST TEST EAX,EAX

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0040AE40 -> 00497920 @ 0040B147; MOVSX at 0040B141 establishes signed source width 2 |
   0040AE40 -> 00497920 @ 0040B3BA; MOVSX at 0040B3B4 establishes signed source width 2 | 0040AE40
   -> 00497920 @ 0040B470; MOVSX at 0040B468 establishes signed source width 2 | 0040CE20 ->
   00497920 @ 0040CF6B; MOVSX at 0040CF65 establishes signed source width 2 | 0040CE20 -> 00497920 @
   0040CF8A; MOVSX at 0040CF80 establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D06A;
   MOVSX at 0040D05C establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D089; MOVSX at
   0040D07F establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D0A9; MOVSX at 0040D09E
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D0C7; MOVSX at 0040D0BE
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D0E6; MOVSX at 0040D0DC
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D104; MOVSX at 0040D0FB
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D1DD; MOVSX at 0040D1D1
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D1FD; MOVSX at 0040D1F2
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D21E; MOVSX at 0040D212
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D23D; MOVSX at 0040D233
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D25D; MOVSX at 0040D252
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D27C; MOVSX at 0040D272
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D2DC; MOVSX at 0040D2D5
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D320; MOVSX at 0040D316
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D35D; MOVSX at 0040D34F
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D792; MOVSX at 0040D788
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D80C; MOVSX at 0040D801
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D82B; MOVSX at 0040D821
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D907; MOVSX at 0040D8FB
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D927; MOVSX at 0040D91C
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D948; MOVSX at 0040D93C
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D967; MOVSX at 0040D95D
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D987; MOVSX at 0040D97C
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DA6C; MOVSX at 0040DA60
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DA8C; MOVSX at 0040DA81
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DAAD; MOVSX at 0040DAA1
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DACC; MOVSX at 0040DAC2
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DAEC; MOVSX at 0040DAE1
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DB6E; MOVSX at 0040DB67
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DBB2; MOVSX at 0040DBA8
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DBF7; MOVSX at 0040DBE9
   establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0040AE40 -> 00497920 @ 0040B0E7; MOVSX at 0040B0D9 establishes signed source width 2 |
   0040AE40 -> 00497920 @ 0040B2F6; MOVSX at 0040B2E9 establishes signed source width 2 | 0040CE20
   -> 00497920 @ 0040CF6B; MOVSX at 0040CF60 establishes signed source width 2 | 0040CE20 ->
   00497920 @ 0040CF8A; MOVSX at 0040CF7C establishes signed source width 2 | 0040CE20 -> 00497920 @
   0040D06A; MOVSX at 0040D058 establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D089;
   MOVSX at 0040D07B establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D0A9; MOVSX at
   0040D09A establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D0C7; MOVSX at 0040D0BA
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D0E6; MOVSX at 0040D0D8
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D104; MOVSX at 0040D0F7
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D1DD; MOVSX at 0040D1CD
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D1FD; MOVSX at 0040D1EE
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D21E; MOVSX at 0040D20E
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D23D; MOVSX at 0040D22F
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D25D; MOVSX at 0040D24E
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D27C; MOVSX at 0040D26E
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D320; MOVSX at 0040D313
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D35D; MOVSX at 0040D353
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D792; MOVSX at 0040D784
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D82B; MOVSX at 0040D81D
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D907; MOVSX at 0040D8F7
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D927; MOVSX at 0040D918
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D948; MOVSX at 0040D938
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D967; MOVSX at 0040D959
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D987; MOVSX at 0040D978
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DA6C; MOVSX at 0040DA5C
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DA8C; MOVSX at 0040DA7D
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DAAD; MOVSX at 0040DA9D
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DACC; MOVSX at 0040DABE
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DAEC; MOVSX at 0040DADD
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DBB2; MOVSX at 0040DBA5
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DBF7; MOVSX at 0040DBED
   establishes signed source width 2 */

int FUN_00497920(AnonShape_00497920_894F87D6 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  STWorldObject *this;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;

  sVar5 = (short)param_2;
  if ((((-1 < sVar5) && (sVar5 < g_worldGrid.sizeX)) && (sVar4 = (short)param_3, -1 < sVar4)) &&
     (((sVar4 < g_worldGrid.sizeY && (sVar3 = (short)param_4, -1 < sVar3)) &&
      ((sVar3 < g_worldGrid.sizeZ &&
       (this = g_worldGrid.cells
               [(int)g_worldGrid.planeStride * (int)sVar3 + (int)g_worldGrid.sizeX * (int)sVar4 +
                (int)sVar5].objects[0], this != (STWorldObject *)0x0)))))) {
    if (((this[1].vtable != (STWorldObjectVTable *)param_1->field_0024) ||
        (*(short *)&this[1].field_0xc != param_1->field_0030)) ||
       (*(int *)((int)&this[7].vtable + 1) == 1)) {
      if (this[6].field_0xb == '\x01') {
        return 1;
      }
      if (this[6].field_0xb == '\0') {
        return 0;
      }
      if (*(short *)((int)&this[6].value_20 + 2) == 0) {
        return 0;
      }
      if (*(int *)&this[4].field_0x7 == 0) {
        return 0;
      }
      thunk_FUN_00416840(this,(undefined2 *)((int)&param_2 + 2),(undefined2 *)((int)&param_3 + 2),
                         (undefined2 *)((int)&param_4 + 2));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if (((param_1->field_005B == param_2._2_2_) && (param_1->field_005D == param_3._2_2_)) &&
         (param_1->field_005F == param_4._2_2_)) {
        return 0;
      }
      return (uint)(*(short *)((int)&this[6].value_20 + 2) < 0x1e);
    }
    iVar2 = *(int *)&this[4].field_0x7;
    if (iVar2 == 0) {
      return 1;
    }
    iVar1 = iVar2 + *(int *)&this[5].field_0x1f * 8;
    if (((*(short *)(iVar2 + *(int *)&this[5].field_0x1f * 8) == param_1->field_0047) &&
        (*(short *)(iVar1 + 2) == param_1->field_0049)) &&
       (*(short *)(iVar1 + 4) == param_1->field_004B)) {
      return 0;
    }
  }
  return 1;
}

